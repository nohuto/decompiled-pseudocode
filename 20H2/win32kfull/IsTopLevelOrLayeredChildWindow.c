/*
 * XREFs of IsTopLevelOrLayeredChildWindow @ 0x1C00472B4
 * Callers:
 *     _GetWindowCompositionInfo @ 0x1C0048CE4 (_GetWindowCompositionInfo.c)
 *     xxxSetWindowStyle @ 0x1C00583F0 (xxxSetWindowStyle.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C008F0E0 (NtUserSetWindowCompositionAttribute.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00C7E50 (NtUserUpdateLayeredWindow.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00D5480 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 */

_BOOL8 __fastcall IsTopLevelOrLayeredChildWindow(__int64 a1)
{
  __int64 v1; // r9

  return (unsigned int)IsTopLevelWindow(a1)
      || (*(_BYTE *)(*(_QWORD *)(v1 + 40) + 26LL) & 8) != 0 && GetTopLevelWindow(v1);
}
