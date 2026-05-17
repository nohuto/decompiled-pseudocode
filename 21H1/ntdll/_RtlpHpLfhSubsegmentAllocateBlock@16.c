/*
 * XREFs of _RtlpHpLfhSubsegmentAllocateBlock@16 @ 0x4B376D27
 * Callers:
 *     _RtlpHpLfhSlotAllocate@20 @ 0x4B376AB9 (_RtlpHpLfhSlotAllocate@20.c)
 * Callees:
 *     _RtlpLfhIncrementDataSlot@0 @ 0x4B3079D9 (_RtlpLfhIncrementDataSlot@0.c)
 *     _RtlpHpLfhSubsegmentCommitBlock@12 @ 0x4B376E1B (_RtlpHpLfhSubsegmentCommitBlock@12.c)
 *     _RtlpHpLfhSubsegmentSetUnusedBytes@12 @ 0x4B377A48 (_RtlpHpLfhSubsegmentSetUnusedBytes@12.c)
 *     _RtlpLfhBlockBitmapAllocate@20 @ 0x4B379BA9 (_RtlpLfhBlockBitmapAllocate@20.c)
 */

unsigned int __fastcall RtlpHpLfhSubsegmentAllocateBlock(int a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // edx
  int v8; // esi
  int v10; // [esp+1Ch] [ebp-Ch]
  int v11; // [esp+1Ch] [ebp-Ch]
  int v12; // [esp+20h] [ebp-8h]
  int v13; // [esp+20h] [ebp-8h]

  v12 = (unsigned __int8)RtlpSearchWidth[*(unsigned __int8 *)(a2 + 1)];
  v4 = (unsigned __int16)(dword_4B3A4324 ^ *(_WORD *)(a3 + 24) ^ (a3 >> 12));
  v10 = dword_4B3A4324 ^ *(_DWORD *)(a3 + 24) ^ (a3 >> 12);
  v5 = 0;
  if ( (*(_BYTE *)(a1 + 34) & 2) != 0 )
    v6 = 0;
  else
    v6 = *((unsigned __int8 *)RtlpLowFragHeapRandomData + (unsigned __int16)RtlpLfhIncrementDataSlot());
  v13 = RtlpLfhBlockBitmapAllocate(v6, v12, a4 < v4 ? 3 : 1);
  *(_WORD *)(a3 + 20) = v13;
  v7 = HIWORD(v10) + v13 * v4;
  v11 = v7;
  if ( *(_BYTE *)(a3 + 29) > 1u )
  {
    if ( (int)RtlpHpLfhSubsegmentCommitBlock(v7) < 0 )
    {
      v8 = v13;
      goto LABEL_11;
    }
    v7 = v11;
  }
  v5 = v7 + a3;
  if ( a4 < v4 )
    RtlpHpLfhSubsegmentSetUnusedBytes(v4 - a4);
  v8 = -1;
LABEL_11:
  if ( v8 != -1 )
    _InterlockedAnd((volatile signed __int32 *)(a3 + 32 + 4 * ((unsigned int)(2 * v8) >> 5)), ~(3 << ((2 * v8) & 0x1F)));
  return v5;
}
