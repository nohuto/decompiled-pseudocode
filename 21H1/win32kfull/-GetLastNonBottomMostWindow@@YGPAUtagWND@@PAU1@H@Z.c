/*
 * XREFs of ?GetLastNonBottomMostWindow@@YGPAUtagWND@@PAU1@H@Z @ 0x93408
 * Callers:
 *     ?ValidateZorder@@YGHPAUtagCVR@@@Z @ 0x93140 (-ValidateZorder@@YGHPAUtagCVR@@@Z.c)
 *     _CalcForegroundInsertAfter@4 @ 0x932A2 (_CalcForegroundInsertAfter@4.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall GetLastNonBottomMostWindow(int a1, int a2)
{
  int v2; // edi
  int i; // esi

  v2 = 0;
  for ( i = *(_DWORD *)(*(_DWORD *)(a1 + 56) + 60);
        i && (*(_BYTE *)(*(_DWORD *)(i + 20) + 12) & 0x20) == 0;
        i = *(_DWORD *)(i + 48) )
  {
    if ( !a2 || a1 != i )
      v2 = i;
  }
  return (struct tagWND *)v2;
}
