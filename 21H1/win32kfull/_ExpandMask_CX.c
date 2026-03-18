/*
 * XREFs of _ExpandMask_CX @ 0x1C477F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl ExpandMask_CX(int a1)
{
  int v2; // eax
  _BYTE *v3; // edx
  int v4; // edi
  int v5; // esi
  unsigned __int16 *v6; // ebx
  char *v7; // edx
  int result; // eax
  char v9; // cl
  char v10; // cl
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h]
  int v13; // [esp+1Ch] [ebp+8h]
  int v14; // [esp+1Ch] [ebp+8h]
  int v15; // [esp+1Ch] [ebp+8h]

  v2 = *(_DWORD *)(a1 + 188);
  v3 = *(_BYTE **)(a1 + 132);
  v4 = 1;
  v5 = *(_DWORD *)(a1 + 344);
  v13 = 1;
  v6 = *(unsigned __int16 **)(v2 + 120);
  v11 = *(_DWORD *)(a1 + 348);
  v12 = *(_DWORD *)(a1 + 352);
  LOBYTE(v2) = *v3;
  v7 = v3 + 1;
  BYTE2(v13) = v2;
  result = v13 << *(_BYTE *)(a1 + 4);
  v9 = -1;
  v14 = result;
  do
  {
    if ( !--v4 )
    {
      v4 = *v6++;
      if ( BYTE1(v14) )
      {
        v10 = *v7++;
        v15 = 1;
        BYTE2(v15) = v10;
        result = v15;
      }
      else
      {
        v10 = BYTE2(v14);
      }
      result *= 2;
      v14 = result;
      v9 = (v10 >= 0) - 1;
    }
    *(_BYTE *)(v5 + 3) = v9;
    v5 += v12;
  }
  while ( v5 != v11 );
  return result;
}
