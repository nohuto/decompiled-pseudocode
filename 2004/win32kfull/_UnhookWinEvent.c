/*
 * XREFs of _UnhookWinEvent @ 0x1C0043688
 * Callers:
 *     NtUserUnhookWinEvent @ 0x1C00435E0 (NtUserUnhookWinEvent.c)
 * Callees:
 *     DestroyEventHook @ 0x1C0044150 (DestroyEventHook.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall UnhookWinEvent(__int64 a1)
{
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 || *(_QWORD *)(a1 + 16) != gptiCurrent )
  {
    UserSetLastError(6LL);
    return 0LL;
  }
  else
  {
    DestroyEventHook(a1);
    return 1LL;
  }
}
