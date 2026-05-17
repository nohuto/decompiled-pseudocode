/*
 * XREFs of _NormBuffer__RemoveCharacter@8 @ 0x4B366FEC
 * Callers:
 *     _NormBuffer__RecheckStartCombinations@4 @ 0x4B366F14 (_NormBuffer__RecheckStartCombinations@4.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall NormBuffer__RemoveCharacter(int a1, _WORD *a2)
{
  unsigned int v2; // eax
  _WORD *v3; // esi

  *(_DWORD *)(a1 + 20) -= 2;
  v2 = *(_DWORD *)(a1 + 36);
  v3 = *(_WORD **)(a1 + 20);
  if ( (_WORD *)v2 == v3 )
  {
    if ( (unsigned int)a2 >= v2 )
    {
      *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 12) - 2;
      LOWORD(v2) = 0;
      *(_DWORD *)(a1 + 32) = 0;
      *(_WORD *)(a1 + 40) = 0;
    }
    else
    {
      v2 -= 2;
      *(_DWORD *)(a1 + 36) = v2;
    }
  }
  while ( a2 != v3 )
  {
    LOWORD(v2) = a2[1];
    *a2++ = v2;
  }
  return v2;
}
