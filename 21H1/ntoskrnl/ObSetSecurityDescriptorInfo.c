/*
 * XREFs of ObSetSecurityDescriptorInfo @ 0x140613930
 * Callers:
 *     SeDefaultObjectMethod @ 0x1406142D0 (SeDefaultObjectMethod.c)
 *     WmipSecurityMethod @ 0x1406CCC50 (WmipSecurityMethod.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     ObDereferenceSecurityDescriptor @ 0x140613D20 (ObDereferenceSecurityDescriptor.c)
 *     ObAdjustSecurityQuota @ 0x1406141C8 (ObAdjustSecurityQuota.c)
 *     SeComputeQuotaInformationSize @ 0x140614250 (SeComputeQuotaInformationSize.c)
 *     ObLogSecurityDescriptor @ 0x140614530 (ObLogSecurityDescriptor.c)
 *     SeSetSecurityDescriptorInfo @ 0x1406148C0 (SeSetSecurityDescriptorInfo.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObSetSecurityDescriptorInfo(
        _QWORD *Object,
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        __int64 a4,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING GenericMapping)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // esi
  void *v11; // rbp
  NTSTATUS v12; // ebx
  __int64 v13; // rax
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+30h] [rbp-28h] BYREF
  __int64 v20; // [rsp+38h] [rbp-20h]
  unsigned int v21; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v21 = 0;
  v20 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object - 4), 0LL);
  v11 = (void *)(*(Object - 1) & 0xFFFFFFFFFFFFFFF0uLL);
  ObjectsSecurityDescriptor = v11;
  v12 = SeSetSecurityDescriptorInfo(
          Object,
          SecurityInformation,
          ModificationDescriptor,
          &ObjectsSecurityDescriptor,
          PoolType,
          GenericMapping);
  if ( v12 < 0 )
  {
    ObjectsSecurityDescriptor = 0LL;
  }
  else
  {
    v12 = ObLogSecurityDescriptor(ObjectsSecurityDescriptor);
    if ( v12 >= 0 )
    {
      v12 = SeComputeQuotaInformationSize(ObjectsSecurityDescriptor, &v21);
      if ( v12 >= 0 )
      {
        v12 = ObAdjustSecurityQuota(Object, v21);
        if ( v12 >= 0 )
        {
          v13 = 0LL;
          if ( v20 )
            v13 = v20 | 0xF;
          v14 = _InterlockedExchange64(Object - 1, v13);
          v20 = 0LL;
          if ( v11 )
            v7 = (v14 & 0xF) + 1;
        }
      }
    }
  }
  ExReleasePushLockEx((ULONG_PTR)(Object - 4), 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, v17);
  if ( v20 )
    ObDereferenceSecurityDescriptor(v20, 16LL);
  if ( v11 && v7 )
    ObDereferenceSecurityDescriptor(v11, v7);
  if ( ObjectsSecurityDescriptor )
    ExFreePoolWithTag(ObjectsSecurityDescriptor, 0);
  return (unsigned int)v12;
}
