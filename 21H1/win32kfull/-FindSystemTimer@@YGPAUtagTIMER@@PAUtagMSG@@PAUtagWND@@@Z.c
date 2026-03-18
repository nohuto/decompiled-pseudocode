/*
 * XREFs of ?FindSystemTimer@@YGPAUtagTIMER@@PAUtagMSG@@PAUtagWND@@@Z @ 0xCA322
 * Callers:
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 * Callees:
 *     <none>
 */

struct tagTIMER *__fastcall FindSystemTimer(int a1, int a2)
{
  _DWORD *i; // esi

  for ( i = (_DWORD *)_gtmrListHead[0]; ; i = (_DWORD *)*i )
  {
    if ( i == (_DWORD *)_gtmrListHead[0] )
      return 0;
    if ( (*(_BYTE *)(i - 4) & 2) != 0 && *(_DWORD *)(a1 + 8) == i[3] && a2 == i[2] )
      break;
  }
  return (struct tagTIMER *)(i - 11);
}
