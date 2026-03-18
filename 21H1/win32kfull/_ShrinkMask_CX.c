/*
 * XREFs of _ShrinkMask_CX @ 0x1C5E63
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl ShrinkMask_CX(int a1)
{
  char *v2; // esi
  int v3; // ebx
  unsigned __int16 *v4; // edx
  char v5; // al
  char *v6; // esi
  int result; // eax
  int v8; // edi
  char v9; // dl
  char v10; // cl
  unsigned __int16 *v11; // [esp+Ch] [ebp-Ch]
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]
  int v14; // [esp+20h] [ebp+8h]
  int v15; // [esp+20h] [ebp+8h]
  char v16; // [esp+22h] [ebp+Ah]

  v14 = 1;
  v2 = *(char **)(a1 + 132);
  v3 = *(_DWORD *)(a1 + 344);
  v4 = *(unsigned __int16 **)(*(_DWORD *)(a1 + 188) + 120);
  v12 = *(_DWORD *)(a1 + 348);
  v13 = *(_DWORD *)(a1 + 352);
  v5 = *v2;
  v6 = v2 + 1;
  BYTE2(v14) = v5;
  result = v14 << *(_BYTE *)(a1 + 4);
  v16 = BYTE2(result);
  do
  {
    v8 = *v4;
    v11 = v4 + 1;
    v9 = 0;
    while ( v8 )
    {
      --v8;
      if ( BYTE1(result) )
      {
        v10 = *v6++;
        v15 = 1;
        BYTE2(v15) = v10;
        result = v15;
      }
      else
      {
        v10 = v16;
      }
      v9 |= v10;
      result *= 2;
      v16 = BYTE2(result);
    }
    *(_BYTE *)(v3 + 3) = v9 >> 7;
    v3 += v13;
    v4 = v11;
  }
  while ( v3 != v12 );
  return result;
}
