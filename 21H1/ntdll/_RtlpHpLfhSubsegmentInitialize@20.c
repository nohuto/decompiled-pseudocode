/*
 * XREFs of _RtlpHpLfhSubsegmentInitialize@20 @ 0x4B377743
 * Callers:
 *     _RtlpHpLfhSubsegmentCreate@12 @ 0x4B376F41 (_RtlpHpLfhSubsegmentCreate@12.c)
 * Callees:
 *     _RtlpInitializeLfhBitmapData@4 @ 0x4B379B79 (_RtlpInitializeLfhBitmapData@4.c)
 *     _RtlpUpdateLfhRandomDataArray@0 @ 0x4B379CD7 (_RtlpUpdateLfhRandomDataArray@0.c)
 */

int __fastcall RtlpHpLfhSubsegmentInitialize(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  unsigned int v6; // esi
  unsigned __int8 v7; // dl
  unsigned int v8; // edi
  unsigned int v9; // eax
  _WORD *v10; // ecx
  char *v11; // edx
  char *v12; // ecx
  unsigned int v13; // edx
  unsigned int i; // eax
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // esi
  int v18; // eax
  int v19; // et2
  unsigned int v22; // [esp+10h] [ebp-14h]
  int v23; // [esp+14h] [ebp-10h] BYREF
  int v24; // [esp+18h] [ebp-Ch]
  unsigned int v25; // [esp+1Ch] [ebp-8h]
  int v26; // [esp+20h] [ebp-4h]

  v24 = a2 / a3;
  v6 = (8 * (a2 - 2 * (a2 / a3)) - 256) / (8 * a4 + 2);
  v25 = (2 * (a2 / a3 + 2 * ((2 * v6 + 31) >> 5)) + 39) & 0xFFFFFFF8;
  if ( v6 >= (a2 - v25) / a4 )
    v6 = (a2 - ((2 * (a2 / a3 + 2 * ((2 * v6 + 31) >> 5)) + 39) & 0xFFFFFFF8)) / a4;
  v7 = v24;
  memset((void *)a1, 0, 0x20u);
  v8 = a4;
  HIWORD(v26) = v25;
  LOWORD(v26) = a4;
  *(_DWORD *)(a1 + 24) = v26 ^ dword_4B3A4324 ^ (a1 >> 12);
  *(_WORD *)(a1 + 16) = v6;
  *(_WORD *)(a1 + 18) = v6;
  _BitScanForward(&v9, a3);
  *(_BYTE *)(a1 + 29) = v7;
  *(_BYTE *)(a1 + 28) = v9;
  *(_BYTE *)(a1 + 22) = 2;
  LOWORD(v9) = 4 * ((2 * v6 + 31) >> 5) + 32;
  *(_WORD *)(a1 + 30) = v9;
  v10 = (_WORD *)(a1 + (unsigned __int16)v9);
  v11 = (char *)&v10[v7];
  *v10 = 1;
  v12 = (char *)(v10 + 1);
  v13 = v11 >= v12 ? (unsigned int)(v11 - v12 + 1) >> 1 : 0;
  if ( v13 )
  {
    for ( i = 0; i < v13; ++i )
    {
      *(_WORD *)v12 = -1;
      v12 += 2;
    }
    v8 = a4;
  }
  v23 = 2 * v6;
  v24 = a1 + 32;
  RtlpInitializeLfhBitmapData(&v23);
  v15 = a2;
  if ( a2 > 0x1000 && (*(_BYTE *)(a5 + 34) & 1) != 0 )
  {
    if ( ((v8 - 1) & v8) != 0 )
    {
      v16 = 4096 - v25;
      v22 = 4096 - v25;
      v17 = ((v15 - 4097) >> 12) + 1;
      do
      {
        v19 = v16 % v8;
        v18 = v16 / v8;
        if ( v19 )
        {
          *(_BYTE *)(a1 + 32 + ((unsigned int)(2 * v18) >> 3)) |= 1 << ((2 * v18) & 7);
          --*(_WORD *)(a1 + 16);
          --*(_WORD *)(a1 + 18);
          ++*(_BYTE *)(a1 + 23);
        }
        v16 = v22 + 4096;
        v22 += 4096;
        --v17;
      }
      while ( v17 );
    }
    else
    {
      if ( (unsigned __int16)v25 - ((v8 - 1) & (v8 + (unsigned __int16)v25 - 1)) + v8 - 1 + v8 * v6 != a2 )
        NT_ASSERT("FirstBlockOffset + BlockSize * BlockCount == SubsegmentSize");
      HIWORD(v26) = v25 - ((v8 - 1) & (v8 + v25 - 1)) + v8 - 1;
      *(_DWORD *)(a1 + 24) = v26 ^ dword_4B3A4324 ^ (a1 >> 12);
    }
  }
  return RtlpUpdateLfhRandomDataArray();
}
