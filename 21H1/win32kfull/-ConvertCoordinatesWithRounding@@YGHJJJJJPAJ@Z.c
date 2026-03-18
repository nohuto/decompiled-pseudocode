/*
 * XREFs of ?ConvertCoordinatesWithRounding@@YGHJJJJJPAJ@Z @ 0x13E0E8
 * Callers:
 *     _ConvertPointCoordinates@44 @ 0x13ED36 (_ConvertPointCoordinates@44.c)
 * Callees:
 *     ?ConvertCoordinatesWithRoundingNoBounding@@YGHJJJJJPAJ@Z @ 0x13E115 (-ConvertCoordinatesWithRoundingNoBounding@@YGHJJJJJPAJ@Z.c)
 */

int __stdcall ConvertCoordinatesWithRounding(int a1, int a2, int a3, _DWORD *a4, int a5, int *a6)
{
  int result; // eax
  int v7; // [esp+0h] [ebp-8h]
  int *v8; // [esp+4h] [ebp-4h]

  result = ConvertCoordinatesWithRoundingNoBounding(a1, a2, a3, (int)a4, v7, v8);
  if ( result )
  {
    if ( *a4 >= a2 )
      *a4 = a2 - 1;
  }
  return result;
}
