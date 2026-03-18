/*
 * XREFs of _ShrinkAV_CX @ 0x1C5D65
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl ShrinkAV_CX(int *a1)
{
  _BYTE *v2; // esi
  int v3; // edi
  int v4; // eax
  unsigned __int16 *v5; // ebx
  int v6; // eax
  _BYTE *v7; // ecx
  int result; // eax
  unsigned int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // ecx
  int v14; // [esp+Ch] [ebp-14h]
  unsigned int v15; // [esp+14h] [ebp-Ch]
  _BYTE *v16; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]
  _BYTE *v18; // [esp+28h] [ebp+8h]

  v2 = (_BYTE *)a1[54];
  v3 = a1[39];
  v18 = (_BYTE *)a1[55];
  v14 = a1[56];
  v4 = a1[47];
  v16 = v2;
  v5 = *(unsigned __int16 **)(v4 + 168);
  v15 = *(_DWORD *)(v4 + 172);
  v6 = *a1;
  v7 = v18;
  result = v6 & 0x2000;
  v17 = result;
  do
  {
    LOBYTE(v9) = -1;
    if ( (unsigned int)v5 < v15 )
    {
      LOBYTE(v9) = *(_BYTE *)(v3 + 3);
      if ( result )
        v9 = ((unsigned __int8)*v2 + (unsigned int)(unsigned __int8)v9 + 1) >> 1;
      v10 = *v5;
      v3 += 4;
      ++v5;
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11;
        do
        {
          v13 = *(unsigned __int8 *)(v3 + 3);
          v3 += 4;
          v9 = (v13 + (unsigned int)(unsigned __int8)v9 + 1) >> 1;
          --v12;
        }
        while ( v12 );
        v2 = v16;
      }
      v7 = v18;
      result = v17;
    }
    *v2 = v9;
    v2 += v14;
    v16 = v2;
  }
  while ( v2 != v7 );
  return result;
}
