/*
 * XREFs of _RtlpHpVsFreeChunkRemove@12 @ 0x4B37FAC1
 * Callers:
 *     _RtlpHpVsChunkCoalesce@16 @ 0x4B37E8AB (_RtlpHpVsChunkCoalesce@16.c)
 *     _RtlpHpVsChunkSplit@24 @ 0x4B37EE0F (_RtlpHpVsChunkSplit@24.c)
 * Callees:
 *     _RtlRbRemoveNode@8 @ 0x4B2D9B10 (_RtlRbRemoveNode@8.c)
 *     _RtlpHpVsChunkComputeCost@16 @ 0x4B37E9EC (_RtlpHpVsChunkComputeCost@16.c)
 */

_RTL_RB_TREE *__fastcall RtlpHpVsFreeChunkRemove(_RTL_RB_TREE *a1, int a2, int a3)
{
  char v4; // cl
  _RTL_RB_TREE *result; // eax
  int v6; // [esp+Ch] [ebp-14h] BYREF
  int v7; // [esp+10h] [ebp-10h]
  _RTL_RB_TREE *v8; // [esp+14h] [ebp-Ch]
  unsigned int v9; // [esp+18h] [ebp-8h] BYREF
  char v10; // [esp+1Fh] [ebp-1h]

  v8 = a1;
  RtlRbRemoveNode(a1 + 1, (PRTL_BALANCED_NODE)(a3 + 4));
  RtlpHpVsChunkComputeCost((_WORD *)a3, a2, &v9, &v6);
  v4 = RtlpBitsClearTotal[(unsigned __int8)~(_BYTE)v6];
  v9 = (unsigned int)~v6 >> 16;
  v10 = RtlpBitsClearTotal[(unsigned __int16)~(_WORD)v6 >> 8] + v4;
  result = v8;
  v8[3].Min = (_RTL_BALANCED_NODE *)((char *)v8[3].Min
                                   - (unsigned __int8)(v10
                                                     + RtlpBitsClearTotal[(unsigned __int8)((unsigned int)~v6 >> 16)]
                                                     + RtlpBitsClearTotal[(unsigned int)~v6 >> 24])
                                   - (unsigned __int8)(RtlpBitsClearTotal[(unsigned __int16)~(_WORD)v7 >> 8]
                                                     + RtlpBitsClearTotal[(unsigned __int8)~(_BYTE)v7]
                                                     + RtlpBitsClearTotal[(unsigned __int8)((unsigned int)~v7 >> 16)]
                                                     + RtlpBitsClearTotal[(unsigned int)~v7 >> 24]));
  return result;
}
