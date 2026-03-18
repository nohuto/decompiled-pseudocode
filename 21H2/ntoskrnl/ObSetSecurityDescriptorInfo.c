/*
 * XREFs of ObSetSecurityDescriptorInfo @ 0x1407255D0
 * Callers:
 *     WmipSecurityMethod @ 0x1406BB860 (WmipSecurityMethod.c)
 *     SeDefaultObjectMethod @ 0x140725080 (SeDefaultObjectMethod.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ObLogSecurityDescriptor @ 0x140724E60 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x140725730 (ObDereferenceSecurityDescriptor.c)
 *     ObAdjustSecurityQuota @ 0x140725858 (ObAdjustSecurityQuota.c)
 *     SeSetSecurityDescriptorInfo @ 0x1407258E0 (SeSetSecurityDescriptorInfo.c)
 *     SeComputeQuotaInformationSize @ 0x140725930 (SeComputeQuotaInformationSize.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
  void *v11; // r14
  int v12; // ebx
  char v13; // al
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v17; // [rsp+70h] [rbp+30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v17 = 0;
  v16 = 0LL;
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
    v12 = ObLogSecurityDescriptor((char *)ObjectsSecurityDescriptor, &v16, 0x10u);
    if ( v12 >= 0 )
    {
      v12 = SeComputeQuotaInformationSize(ObjectsSecurityDescriptor, &v17);
      if ( v12 >= 0 )
      {
        v12 = ObAdjustSecurityQuota(Object, v17);
        if ( v12 >= 0 )
        {
          v13 = _InterlockedExchange64(Object - 1, (v16 | 0xF) & -(__int64)(v16 != 0));
          v16 = 0LL;
          if ( v11 )
            v7 = (v13 & 0xF) + 1;
        }
      }
    }
  }
  ExReleasePushLockEx((ULONG_PTR)(Object - 4), 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v16 )
    ObDereferenceSecurityDescriptor(v16, 16LL);
  if ( v11 && v7 )
    ObDereferenceSecurityDescriptor(v11, v7);
  if ( ObjectsSecurityDescriptor )
    ExFreePoolWithTag(ObjectsSecurityDescriptor, 0);
  return (unsigned int)v12;
}
