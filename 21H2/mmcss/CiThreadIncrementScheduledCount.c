/*
 * XREFs of CiThreadIncrementScheduledCount @ 0x1C000ADD0
 * Callers:
 *     CiProcessSuspend @ 0x1C00048B4 (CiProcessSuspend.c)
 *     CiThreadCreate @ 0x1C000AB70 (CiThreadCreate.c)
 * Callees:
 *     CiNdisUpdateThrottleState @ 0x1C000B5B0 (CiNdisUpdateThrottleState.c)
 */

__int64 __fastcall CiThreadIncrementScheduledCount(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(result + 3) & 1) != 0 )
  {
    ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
    WPP_MAIN_CB.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
    if ( ++LODWORD(WPP_MAIN_CB.DeviceExtension) == 1 )
      CiNdisUpdateThrottleState();
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
    return ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  }
  return result;
}
