/*
 * XREFs of _Normalization__GetSecondAndThirdDecomposedCharPlane0@16 @ 0x4B367539
 * Callers:
 *     _NormBuffer__ReplaceLastStartBase@16 @ 0x4B36702B (_NormBuffer__ReplaceLastStartBase@16.c)
 * Callees:
 *     <none>
 */

int __fastcall Normalization__GetSecondAndThirdDecomposedCharPlane0(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v6; // edx
  int result; // eax
  unsigned __int16 v8; // cx
  int v9; // edx
  unsigned __int16 i; // cx
  unsigned __int16 v11; // ax
  unsigned int v12; // edx
  int v13; // esi
  int v14; // ecx

  *a3 = 0;
  v6 = a2 % a1[8];
  result = a1[9];
  *a4 = 0;
  v8 = *(_WORD *)(result + 2 * v6);
  if ( (v8 & 0xE000) == 0 )
  {
    v9 = a1[10];
    for ( i = 2 * v8; ; i += 2 )
    {
      v11 = *(_WORD *)(v9 + 2 * i);
      if ( !v11 || v11 == a2 )
        break;
    }
    result = i;
    v8 = *(_WORD *)(v9 + 2 * i + 2);
  }
  v12 = v8 >> 13;
  if ( v12 > 1 )
  {
    v13 = a1[11];
    v14 = (unsigned __int16)((v8 & 0x1FFF) + 1);
    result = *(unsigned __int16 *)(v13 + 2 * v14);
    *a3 = result;
    if ( v12 != 2 )
    {
      result = *(unsigned __int16 *)(v13 + 2 * (unsigned __int16)(v14 + 1));
      *a4 = result;
    }
  }
  return result;
}
