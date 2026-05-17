/*
 * XREFs of _RtlpHpLfhSubsegmentSizeBlockInternal@16 @ 0x4B377B1D
 * Callers:
 *     _RtlpHpLfhSubsegmentSizeBlock@16 @ 0x4B377A83 (_RtlpHpLfhSubsegmentSizeBlock@16.c)
 *     _RtlpHpLfhSubsegmentWalk@28 @ 0x4B377B9C (_RtlpHpLfhSubsegmentWalk@28.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpLfhSubsegmentSizeBlockInternal(unsigned int a1, int a2, int a3, int *a4)
{
  int v4; // edi
  __int16 v5; // ax
  unsigned int v6; // ecx
  int v7; // ecx
  signed __int32 v9; // [esp+8h] [ebp-4h] BYREF

  v4 = (unsigned __int16)dword_4B3A4324 ^ *(unsigned __int16 *)(a1 + 24) ^ (unsigned __int16)(a1 >> 12);
  if ( ((*(_DWORD *)(a1 + 4 * ((unsigned int)(2 * a3) >> 5) + 32) >> ((2 * a3) & 0x1F)) & 2) != 0 )
  {
    v5 = *(_WORD *)(v4 + a2 - 2);
    v6 = (unsigned __int16)v5;
    if ( (v5 & 0x4000) != 0 )
    {
      _InterlockedOr(&v9, 0);
      v5 = *(_WORD *)(v4 + a2 - 2);
    }
    v7 = (v6 >> 14) & 1;
    if ( v5 >= 0 )
      v4 -= v5 & 0x3FFF;
    else
      --v4;
  }
  else
  {
    v7 = 0;
  }
  if ( a4 )
    *a4 = v7;
  return v4;
}
