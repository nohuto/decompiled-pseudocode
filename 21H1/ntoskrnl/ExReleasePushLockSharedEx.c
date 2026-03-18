/*
 * XREFs of ExReleasePushLockSharedEx @ 0x140263B50
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleasePushLockSharedEx(volatile signed __int64 *BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v3; // di
  __int64 result; // rax

  v3 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  result = _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL);
  if ( result != 17 )
    result = ExfReleasePushLockShared(BugCheckParameter2);
  if ( (v3 & 2) == 0 )
    return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return result;
}
