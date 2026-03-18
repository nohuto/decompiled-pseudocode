/*
 * XREFs of ?DrawScrollArrow@@YGHPAUHDC__@@PAUtagRECT@@I@Z @ 0x8FFCE
 * Callers:
 *     _DrawFrameControl@16 @ 0x901FE (_DrawFrameControl@16.c)
 * Callees:
 *     ?DrawIt@@YGHPAUHDC__@@PAUtagRECT@@IG@Z @ 0x90C70 (-DrawIt@@YGHPAUHDC__@@PAUtagRECT@@IG@Z.c)
 */

int __stdcall DrawScrollArrow(HDC a1, struct tagRECT *a2, unsigned int a3)
{
  struct tagRECT *v3; // esi
  unsigned int v5; // [esp+0h] [ebp-4h]
  unsigned __int16 savedregs; // [esp+4h] [ebp+0h]

  v3 = (struct tagRECT *)(unsigned __int16)(2 * (((unsigned __int8)a1 & 2) == 0) + 51);
  if ( ((unsigned __int8)a1 & 1) != 0 )
    v3 = (struct tagRECT *)(unsigned __int16)(2 * (((unsigned __int8)a1 & 2) == 0) + 52);
  return DrawIt(a1, v3, v5, savedregs);
}
