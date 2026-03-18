/*
 * XREFs of _vSort@12 @ 0xDFFBC
 * Callers:
 *     _cUnicodeRangesSupported@20 @ 0xDFCB6 (_cUnicodeRangesSupported@20.c)
 * Callees:
 *     <none>
 */

char __fastcall vSort(int a1, int a2, int a3)
{
  char result; // al
  int v5; // esi
  unsigned __int16 *v6; // ebx
  int v7; // ecx
  unsigned __int16 v8; // ax
  bool v9; // zf
  int v10; // [esp+4h] [ebp-Ch]
  unsigned __int16 *v11; // [esp+8h] [ebp-8h]
  unsigned __int16 v12; // [esp+Ch] [ebp-4h]
  char v13; // [esp+1Bh] [ebp+Bh]

  result = a3;
  if ( a3 > 1 )
  {
    v5 = 0;
    v6 = (unsigned __int16 *)(a1 + 2);
    v11 = (unsigned __int16 *)(a1 + 2);
    v10 = a3 - 1;
    do
    {
      v12 = *v6;
      v13 = *(_BYTE *)(v5 + a2 + 1);
      v7 = v5;
      if ( v5 >= 0 )
      {
        do
        {
          v8 = *(_WORD *)(a1 + 2 * v7);
          if ( v8 <= v12 )
            break;
          *(_WORD *)(a1 + 2 * v7 + 2) = v8;
          *(_BYTE *)(a2 + v7 + 1) = *(_BYTE *)(v7 + a2);
          --v7;
        }
        while ( v7 >= 0 );
        v6 = v11;
      }
      ++v6;
      *(_WORD *)(a1 + 2 * v7 + 2) = v12;
      ++v5;
      v9 = v10-- == 1;
      result = v13;
      *(_BYTE *)(a2 + v7 + 1) = v13;
      v11 = v6;
    }
    while ( !v9 );
  }
  return result;
}
