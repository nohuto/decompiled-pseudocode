/*
 * XREFs of ExpWnfDeleteStateData @ 0x1406A0C24
 * Callers:
 *     ExpWnfDeleteNameInstance @ 0x1406A0880 (ExpWnfDeleteNameInstance.c)
 *     ExpNtDeleteWnfStateData @ 0x1407CD97C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfDeleteStateData(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  _RTL_BALANCED_NODE *v3; // rax
  _RTL_BALANCED_NODE *v4; // rdi
  void *v5; // rdi

  v1 = (unsigned __int64 *)(a1 + 80);
  v3 = KeAbPreAcquire(a1 + 80, 0LL, 0);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (ULONG_PTR)v1);
  if ( v4 )
    BYTE2(v4[1].Left) |= 1u;
  v5 = *(void **)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  if ( (unsigned __int64)v5 >= 2 )
    ExFreePoolWithTag(v5, 0x20666E57u);
}
