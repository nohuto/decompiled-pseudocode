/*
 * XREFs of ObSetSecurityDescriptorInfo @ 0x14065F2B0
 * Callers:
 *     SeDefaultObjectMethod @ 0x14065FC50 (SeDefaultObjectMethod.c)
 *     WmipSecurityMethod @ 0x14069D030 (WmipSecurityMethod.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     SeSetSecurityDescriptorInfo @ 0x14065F260 (SeSetSecurityDescriptorInfo.c)
 *     ObDereferenceSecurityDescriptor @ 0x14065F6A0 (ObDereferenceSecurityDescriptor.c)
 *     ObAdjustSecurityQuota @ 0x14065FB48 (ObAdjustSecurityQuota.c)
 *     SeComputeQuotaInformationSize @ 0x14065FBD0 (SeComputeQuotaInformationSize.c)
 *     ObLogSecurityDescriptor @ 0x14065FEB0 (ObLogSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h]
  unsigned int v18; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v18 = 0;
  v17 = 0LL;
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
      v12 = SeComputeQuotaInformationSize(ObjectsSecurityDescriptor, &v18);
      if ( v12 >= 0 )
      {
        v12 = ObAdjustSecurityQuota(Object, v18);
        if ( v12 >= 0 )
        {
          v13 = 0LL;
          if ( v17 )
            v13 = v17 | 0xF;
          v14 = _InterlockedExchange64(Object - 1, v13);
          v17 = 0LL;
          if ( v11 )
            v7 = (v14 & 0xF) + 1;
        }
      }
    }
  }
  ExReleasePushLockEx((ULONG_PTR)(Object - 4), 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v17 )
    ObDereferenceSecurityDescriptor(v17, 16LL);
  if ( v11 && v7 )
    ObDereferenceSecurityDescriptor(v11, v7);
  if ( ObjectsSecurityDescriptor )
    ExFreePoolWithTag(ObjectsSecurityDescriptor, 0);
  return (unsigned int)v12;
}
