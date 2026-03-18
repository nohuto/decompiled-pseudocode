/*
 * XREFs of _vLine8Octant16@16 @ 0xEDE24
 * Callers:
 *     ?vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0xBE39A (-vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z.c)
 * Callees:
 *     <none>
 */

_BYTE *__stdcall vLine8Octant16(_DWORD *a1, int a2, int a3, char a4)
{
  int v4; // ecx
  int v5; // edx
  int v6; // esi
  int v7; // edi
  _BYTE *result; // eax

  v4 = a1[6];
  v5 = a1[4];
  v6 = a1[5];
  v7 = a1[3];
  result = (_BYTE *)(a1[1] + a2);
  while ( 1 )
  {
    *result = a4;
    if ( !--v7 )
      break;
    result += a3;
    v4 += v6;
    if ( v4 >= 0 )
    {
      v4 -= v5;
      ++result;
    }
  }
  return result;
}
