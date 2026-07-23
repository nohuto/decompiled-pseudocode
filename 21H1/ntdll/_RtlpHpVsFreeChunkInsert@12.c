/*
 * XREFs of _RtlpHpVsFreeChunkInsert@12 @ 0x4B37F97E
 * Callers:
 *     _RtlpHpVsChunkFree@20 @ 0x4B37EC44 (_RtlpHpVsChunkFree@20.c)
 *     _RtlpHpVsContextAddSubsegment@8 @ 0x4B37F0C2 (_RtlpHpVsContextAddSubsegment@8.c)
 * Callees:
 *     _RtlRbInsertNodeEx@16 @ 0x4B2CEB50 (_RtlRbInsertNodeEx@16.c)
 *     _RtlpHpVsChunkComputeCost@16 @ 0x4B37E9EC (_RtlpHpVsChunkComputeCost@16.c)
 */

BOOLEAN __fastcall RtlpHpVsFreeChunkInsert(int a1, int a2, unsigned __int16 *a3)
{
  char v4; // si
  char v5; // al
  int v6; // edi
  bool v7; // zf
  unsigned int v8; // edx
  int v9; // esi
  unsigned int v10; // eax
  int v12; // [esp+Ch] [ebp-14h] BYREF
  int v13; // [esp+10h] [ebp-10h]
  unsigned int v14; // [esp+14h] [ebp-Ch] BYREF
  BOOLEAN Right[7]; // [esp+18h] [ebp-8h]
  char v16; // [esp+1Fh] [ebp-1h]

  v4 = RtlpHpVsChunkComputeCost(a3, a2, &v14, &v12);
  v5 = RtlpBitsClearTotal[(unsigned __int8)~(_BYTE)v12];
  *(_DWORD *)Right = (unsigned int)~v12 >> 16;
  v16 = RtlpBitsClearTotal[(unsigned __int16)~(_WORD)v12 >> 8] + v5;
  *(_DWORD *)(a1 + 28) += (unsigned __int8)(v16
                                          + RtlpBitsClearTotal[(unsigned __int8)((unsigned int)~v12 >> 16)]
                                          + RtlpBitsClearTotal[(unsigned int)~v12 >> 24])
                        + (unsigned __int8)(RtlpBitsClearTotal[(unsigned __int16)~(_WORD)v13 >> 8]
                                          + RtlpBitsClearTotal[(unsigned __int8)~(_BYTE)v13]
                                          + RtlpBitsClearTotal[(unsigned __int8)((unsigned int)~v13 >> 16)]
                                          + RtlpBitsClearTotal[(unsigned int)~v13 >> 24]);
  v6 = a1 + 8;
  *(_DWORD *)a3 ^= ((unsigned __int8)a3 ^ (unsigned __int8)(v4 ^ RtlpHpHeapGlobals ^ *(_DWORD *)a3)) & 1;
  v7 = (*(_BYTE *)(v6 + 4) & 1) == 0;
  v8 = *(_DWORD *)v6;
  v14 = (unsigned __int16)RtlpHpHeapGlobals ^ (unsigned __int16)a3 ^ *a3;
  if ( !v7 )
  {
    if ( v8 )
      v8 ^= v6;
    else
      v8 = 0;
  }
  v9 = *(_BYTE *)(v6 + 4) & 1;
  Right[0] = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      if ( v14 < ((unsigned __int16)RtlpHpHeapGlobals ^ (unsigned __int16)(v8 - 4) ^ (unsigned int)*(unsigned __int16 *)(v8 - 4)) )
      {
        v10 = *(_DWORD *)v8;
        if ( v9 )
        {
          if ( !v10 )
            goto LABEL_17;
          v10 ^= v8;
        }
        if ( !v10 )
        {
LABEL_17:
          Right[0] = 0;
          return RtlRbInsertNodeEx((PRTL_RB_TREE)v6, (PRTL_BALANCED_NODE)v8, Right[0], (PRTL_BALANCED_NODE)(a3 + 2));
        }
      }
      else
      {
        v10 = *(_DWORD *)(v8 + 4);
        if ( v9 )
        {
          if ( !v10 )
            goto LABEL_11;
          v10 ^= v8;
        }
        if ( !v10 )
        {
LABEL_11:
          Right[0] = 1;
          return RtlRbInsertNodeEx((PRTL_RB_TREE)v6, (PRTL_BALANCED_NODE)v8, Right[0], (PRTL_BALANCED_NODE)(a3 + 2));
        }
      }
      v8 = v10;
    }
  }
  return RtlRbInsertNodeEx((PRTL_RB_TREE)v6, (PRTL_BALANCED_NODE)v8, Right[0], (PRTL_BALANCED_NODE)(a3 + 2));
}
