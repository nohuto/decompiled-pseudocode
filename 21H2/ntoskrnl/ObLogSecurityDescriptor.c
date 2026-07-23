/*
 * XREFs of ObLogSecurityDescriptor @ 0x140654CD0
 * Callers:
 *     ObAssignObjectSecurityDescriptor @ 0x1405FC2D0 (ObAssignObjectSecurityDescriptor.c)
 *     IopGetSetSecurityObject @ 0x140644580 (IopGetSetSecurityObject.c)
 *     ObSetSecurityDescriptorInfo @ 0x1406540D0 (ObSetSecurityDescriptorInfo.c)
 *     SeDefaultObjectMethod @ 0x140654A70 (SeDefaultObjectMethod.c)
 *     ExpWnfCreateNameInstance @ 0x14069D4E4 (ExpWnfCreateNameInstance.c)
 *     EtwpInitializeLoggerSecurityDescriptor @ 0x1406B5244 (EtwpInitializeLoggerSecurityDescriptor.c)
 *     EtwpAllocGuidEntry @ 0x1406BB110 (EtwpAllocGuidEntry.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14076B42C (IopSetDeviceSecurityDescriptor.c)
 *     ObpInitObjectTypeSD @ 0x1407960FC (ObpInitObjectTypeSD.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1409416FC (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     RtlLengthSecurityDescriptor @ 0x140654EF0 (RtlLengthSecurityDescriptor.c)
 *     ObpCreateCacheEntry @ 0x140654FC4 (ObpCreateCacheEntry.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObLogSecurityDescriptor(char *Src, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  char *v5; // r9
  char *v6; // r10
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *CacheEntry; // r15
  signed __int64 *v10; // rsi
  volatile signed __int64 *v11; // r14
  signed __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG v23; // [rsp+80h] [rbp+8h]

  v23 = RtlLengthSecurityDescriptor(Src);
  v4 = 0LL;
  v5 = Src;
  v6 = &Src[v23 & 0xFFFFFFF8];
  if ( Src < v6 )
  {
    do
    {
      v7 = *(_QWORD *)v5 ^ v4;
      v5 += 16;
      v4 = __ROL8__(v7, 3);
    }
    while ( v5 < v6 );
  }
  CurrentThread = KeGetCurrentThread();
  CacheEntry = 0LL;
  v10 = (signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)v4);
  --CurrentThread->KernelApcDisable;
LABEL_4:
  v11 = v10 + 1;
  ExAcquirePushLockSharedEx((ULONG_PTR)v10, 0LL);
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 )
      break;
LABEL_9:
    if ( !CacheEntry )
    {
      if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v13, v14, v15);
      CacheEntry = (signed __int64 *)ObpCreateCacheEntry(Src, v23);
      if ( !CacheEntry )
        return 3221225626LL;
      --CurrentThread->KernelApcDisable;
      goto LABEL_4;
    }
    *CacheEntry = v12;
    v11 = (volatile signed __int64 *)_InterlockedCompareExchange64(v11, (signed __int64)CacheEntry, v12);
    if ( (volatile signed __int64 *)v12 == v11 )
    {
      if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v20, v21, v22);
      *a2 = CacheEntry + 4;
      return 0LL;
    }
  }
  while ( *(_QWORD *)(v12 + 16) != v4 )
  {
    if ( *(_QWORD *)(v12 + 16) > v4 )
      goto LABEL_9;
LABEL_8:
    v11 = (volatile signed __int64 *)v12;
    v12 = *(_QWORD *)v12;
    if ( !v12 )
      goto LABEL_9;
  }
  if ( *(_DWORD *)(v12 + 24) != v23 || memcmp(Src, (const void *)(v12 + 32), v23) )
    goto LABEL_8;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 8), a3) <= 0 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v16, v17, v18);
  *a2 = v12 + 32;
  if ( CacheEntry )
    ExFreePoolWithTag(CacheEntry, 0x6353624Fu);
  return 0LL;
}
