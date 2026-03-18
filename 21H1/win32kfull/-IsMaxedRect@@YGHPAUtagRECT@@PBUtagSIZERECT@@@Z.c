/*
 * XREFs of ?IsMaxedRect@@YGHPAUtagRECT@@PBUtagSIZERECT@@@Z @ 0x71F00
 * Callers:
 *     _xxxCheckFullScreen@8 @ 0x71BE6 (_xxxCheckFullScreen@8.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall IsMaxedRect(_DWORD *a1, _DWORD *a2)
{
  int v2; // esi
  BOOL result; // eax

  result = 0;
  if ( *a2 <= *a1 )
  {
    v2 = a1[1];
    if ( a2[1] <= v2 && a2[2] >= a1[2] - *a1 && a2[3] >= a1[3] - v2 )
      return 1;
  }
  return result;
}
