/*
 * XREFs of _EditionGetKeyStateUpdateParamsForRawInput@20 @ 0xF32C8
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 */

int __stdcall EditionGetKeyStateUpdateParamsForRawInput(int a1, int a2, _BYTE *a3, _DWORD *a4, int *a5)
{
  int result; // eax
  int v6; // esi

  result = a1;
  if ( (((unsigned int)&loc_1FFFFC + 4) & *(_DWORD *)(a1 + 688)) != 0 && !*(_DWORD *)(a2 + 16) )
  {
    result = HMValidateHandleNoRip(*(_DWORD *)(a2 + 20), 18);
    v6 = result;
    if ( result )
    {
      if ( *(_DWORD *)(result + 16) == 1 )
      {
        *a3 = *(_BYTE *)(result + 38);
        *a4 = (*(_WORD *)(result + 34) & 1) == 0;
        result = (int)a5;
        *a5 = *(_WORD *)(v6 + 34) & 6;
        if ( *a3 == 16 )
        {
          result = 65529;
          *(_WORD *)(v6 + 34) &= 0xFFF9u;
        }
      }
    }
  }
  return result;
}
