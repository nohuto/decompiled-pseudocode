/*
 * XREFs of _CreateFadeForWindow@12 @ 0x1536B9
 * Callers:
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     ?CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z @ 0x152DDB (-CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z.c)
 */

HDC __fastcall CreateFadeForWindow(unsigned int a1, struct tagWND *a2, struct tagRECT *a3)
{
  unsigned int savedregs; // [esp+0h] [ebp+0h]

  return CreateFadeInternal(0, a1, a2, (unsigned int)a3, 0, a1, savedregs);
}
