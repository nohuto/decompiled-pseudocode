/*
 * XREFs of IsTopLevelOrLayeredChildWindow @ 0x1C006E71C
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C00252C0 (NtUserUpdateLayeredWindow.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0065FC0 (NtUserSetWindowCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C006D108 (_GetWindowCompositionInfo.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00902A0 (NtUserGetWindowCompositionAttribute.c)
 *     xxxSetWindowStyle @ 0x1C009C710 (xxxSetWindowStyle.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 */

_BOOL8 __fastcall IsTopLevelOrLayeredChildWindow(__int64 a1)
{
  __int64 v1; // r9

  return (unsigned int)IsTopLevelWindow(a1)
      || (*(_BYTE *)(*(_QWORD *)(v1 + 40) + 26LL) & 8) != 0 && GetTopLevelWindow(v1);
}
