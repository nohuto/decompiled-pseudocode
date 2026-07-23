/*
 * XREFs of IopSetDeviceSecurityDescriptor @ 0x14076B42C
 * Callers:
 *     IopGetSetSecurityObject @ 0x140644580 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptors @ 0x140780E50 (IopSetDeviceSecurityDescriptors.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     SeSetSecurityDescriptorInfo @ 0x140654080 (SeSetSecurityDescriptorInfo.c)
 *     ObDereferenceSecurityDescriptor @ 0x1406544C0 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x140654CD0 (ObLogSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetDeviceSecurityDescriptor(__int64 a1, DWORD *a2, void *a3, POOL_TYPE a4, PGENERIC_MAPPING a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  GENERIC_MAPPING *GenericMapping; // r13
  volatile signed __int64 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // edx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+70h] [rbp+8h] BYREF

  ObjectsSecurityDescriptor = 0LL;
  v24 = 0LL;
  CurrentThread = KeGetCurrentThread();
  GenericMapping = a5;
  while ( 1 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
    v11 = *(volatile signed __int64 **)(a1 + 272);
    if ( v11 && _InterlockedExchangeAdd64(v11 - 3, 1uLL) <= 0 )
      __fastfail(0xEu);
    ExReleaseResourceLite(&IopSecurityResource);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v12, v13, v14);
    ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)v11;
    v15 = SeSetSecurityDescriptorInfo(0LL, a2, a3, &ObjectsSecurityDescriptor, a4, GenericMapping);
    if ( v15 < 0 )
      break;
    v15 = ObLogSecurityDescriptor((char *)ObjectsSecurityDescriptor, &v24, 1u);
    ExFreePoolWithTag(ObjectsSecurityDescriptor, 0);
    if ( v15 < 0 )
      goto LABEL_13;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
    if ( *(volatile signed __int64 **)(a1 + 272) == v11 )
    {
      *(_QWORD *)(a1 + 272) = v24;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) &= ~0x800u;
      ExReleaseResourceLite(&IopSecurityResource);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v16, v17, v18);
      v19 = 2;
LABEL_9:
      ObDereferenceSecurityDescriptor((__int64)v11, v19);
      return (unsigned int)v15;
    }
    ExReleaseResourceLite(&IopSecurityResource);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v21, v22, v23);
    ObDereferenceSecurityDescriptor((__int64)v11, 1u);
    ObDereferenceSecurityDescriptor(v24, 1u);
  }
  if ( v11 )
  {
LABEL_13:
    v19 = 1;
    goto LABEL_9;
  }
  return (unsigned int)v15;
}
