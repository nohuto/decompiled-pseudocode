/*
 * XREFs of ?zzzHideCursorNoCapture@@YA_KXZ @ 0x1C01D48B0
 * Callers:
 *     <none>
 * Callees:
 *     GetAppCompatFlags2 @ 0x1C0060800 (GetAppCompatFlags2.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00AE058 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 */

unsigned __int64 zzzHideCursorNoCapture(void)
{
  if ( !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 424) + 104LL)
    && (GetAppCompatFlags2(0x400u) & 0x100) == 0
    && ((unsigned int)gpdwCPUserPreferencesMask & 0x80010000) == 0x80010000 )
  {
    zzzSetCursor(0LL);
  }
  return 0LL;
}
