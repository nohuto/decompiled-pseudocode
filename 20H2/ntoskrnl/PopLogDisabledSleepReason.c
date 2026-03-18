/*
 * XREFs of PopLogDisabledSleepReason @ 0x14071EE5C
 * Callers:
 *     PopFilterCapabilities @ 0x14071EF54 (PopFilterCapabilities.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x14071F0FC (PopRemoveReasonRecordByReasonCode.c)
 *     PopLogSleepDisabled @ 0x14077AE28 (PopLogSleepDisabled.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 PopLogDisabledSleepReason()
{
  unsigned int v0; // ebx
  unsigned int v1; // edi
  unsigned int v2; // esi
  __int64 v3; // rax
  SIZE_T v5; // rbp
  PVOID PoolWithTag; // rax
  void *v7; // rsi
  __int64 v8; // rcx
  _DWORD *v9; // r8

  v0 = 0;
  v1 = 0;
  v2 = 0;
  ExAcquireFastMutex(&PopDisableSleepMutex);
  PopRemoveReasonRecordByReasonCode(13LL);
  v3 = PopDisableSleepList;
  if ( (__int64 *)PopDisableSleepList != &PopDisableSleepList )
  {
    do
    {
      v1 |= *(_DWORD *)(v3 + 20);
      ++v2;
      v3 = *(_QWORD *)v3;
    }
    while ( (__int64 *)v3 != &PopDisableSleepList );
    if ( v1 )
    {
      v5 = 8LL * v2;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x66756263u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        v8 = PopDisableSleepList;
        v9 = PoolWithTag;
        while ( (__int64 *)v8 != &PopDisableSleepList )
        {
          *v9 = *(_DWORD *)(v8 + 16);
          v9 += 2;
          *(v9 - 1) = *(_DWORD *)(v8 + 20);
          v8 = *(_QWORD *)v8;
        }
        v0 = PopLogSleepDisabled(13LL, v1, PoolWithTag, v5);
        ExFreePoolWithTag(v7, 0x66756263u);
      }
      else
      {
        v0 = -1073741670;
      }
    }
  }
  KeReleaseGuardedMutex(&PopDisableSleepMutex);
  return v0;
}
