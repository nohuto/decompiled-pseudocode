/*
 * XREFs of _RtlpHpLfhSubsegmentSizeBlock@16 @ 0x4B377A83
 * Callers:
 *     _RtlpHpSegSizeInternal@20 @ 0x4B37D95E (_RtlpHpSegSizeInternal@20.c)
 * Callees:
 *     __aullshr @ 0x4B2F6840 (__aullshr.c)
 *     _RtlpHpLfhSubsegmentSizeBlockInternal@16 @ 0x4B377B1D (_RtlpHpLfhSubsegmentSizeBlockInternal@16.c)
 */

int __fastcall RtlpHpLfhSubsegmentSizeBlock(int a1, unsigned int a2, int a3, int a4)
{
  int v5; // ebx
  int v6; // ecx
  unsigned int v7; // esi
  unsigned int v8; // edx
  char v9; // cl
  int v10; // edx
  int v11; // esi

  v5 = (unsigned __int16)(dword_4B3A4324 ^ *(_WORD *)(a2 + 24) ^ (a2 >> 12));
  v6 = *(_DWORD *)(a1 + 4 * (unsigned __int8)RtlpLfhBucketIndexMap[(unsigned int)(v5 + 7) >> 3] + 128);
  v7 = a3 - ((dword_4B3A4324 ^ *(_DWORD *)(a2 + 24) ^ (a2 >> 12)) >> 16) - a2;
  v8 = *(_DWORD *)(v6 + 36);
  v9 = *(_BYTE *)(v6 + 40);
  if ( v8 )
  {
    v10 = (v8 * (unsigned __int64)v7) >> v9;
    v11 = v7 - v10 * v5;
  }
  else
  {
    v10 = v7 >> v9;
    v11 = ((1 << v9) - 1) & v7;
  }
  if ( v11 || ((*(_DWORD *)(a2 + 4 * ((unsigned int)(2 * v10) >> 5) + 32) >> ((2 * v10) & 0x1F)) & 1) == 0 )
    return -1;
  else
    return RtlpHpLfhSubsegmentSizeBlockInternal(v10, a4);
}
