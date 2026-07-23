/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x14028EF10
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x140289C90 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x14028A9F0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextAddSubsegment @ 0x1402DB9CC (RtlpHpVsContextAddSubsegment.c)
 *     RtlpHpVsChunkFree @ 0x1402DBC1C (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14028C090 (RtlRbInsertNodeEx.c)
 */

BOOLEAN __fastcall RtlpHpVsFreeChunkInsert(_RTL_RB_TREE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r11
  unsigned int v5; // edx
  unsigned __int64 v6; // rbx
  unsigned int v8; // r11d
  __int16 v9; // bx
  unsigned int v10; // r9d
  unsigned __int64 v11; // r8
  unsigned __int64 Root; // rdx
  BOOLEAN v13; // al
  unsigned __int64 v14; // rax

  v4 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2));
  v5 = (a3 - a2 + 4127) & 0xFFFFF000;
  v6 = v4 + (a3 & 0xFFF) + 4095;
  v8 = (a3 + v4 - a2) & 0xFFFFF000;
  v9 = (v6 >> 12)
     - (((unsigned __int64)(16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2))) + 4095) >> 12);
  if ( v5 >= v8 )
  {
    v10 = 0;
    v11 = 0LL;
  }
  else
  {
    v10 = v8 - v5;
    v11 = *(_QWORD *)(a2 + 16) & (-1LL << (v5 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                 - (unsigned __int8)((unsigned __int64)(v8 - 1) >> 12)));
  }
  a1[3].Min = (_RTL_BALANCED_NODE *)((char *)a1[3].Min
                                   + ((unsigned int)((0x101010101010101LL
                                                    * ((((v11 - ((v11 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + (((v11 - ((v11 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                      + ((((v11 - ((v11 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                        + (((v11 - ((v11 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24));
  *(_WORD *)a3 = RtlpHpHeapGlobals ^ a3 ^ (v9
                                         + (v10 >> 12)
                                         - ((0x101010101010101LL
                                           * ((((v11 - ((v11 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                             + (((v11 - ((v11 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                             + ((((v11 - ((v11 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                               + (((v11 - ((v11 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
  Root = (unsigned __int64)a1[1].Root;
  if ( ((__int64)a1[1].Min & 1) != 0 && Root )
    Root ^= (unsigned __int64)&a1[1];
  v13 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      if ( ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)a3 ^ *(_DWORD *)a3) < ((unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)Root - 8) ^ *(_DWORD *)(Root - 8)) )
      {
        v14 = *(_QWORD *)Root;
        if ( ((__int64)a1[1].Min & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_17;
          v14 ^= Root;
        }
        if ( !v14 )
        {
LABEL_17:
          v13 = 0;
          return RtlRbInsertNodeEx(a1 + 1, (PRTL_BALANCED_NODE)Root, v13, (PRTL_BALANCED_NODE)(a3 + 8));
        }
      }
      else
      {
        v14 = *(_QWORD *)(Root + 8);
        if ( ((__int64)a1[1].Min & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_18;
          v14 ^= Root;
        }
        if ( !v14 )
        {
LABEL_18:
          v13 = 1;
          return RtlRbInsertNodeEx(a1 + 1, (PRTL_BALANCED_NODE)Root, v13, (PRTL_BALANCED_NODE)(a3 + 8));
        }
      }
      Root = v14;
    }
  }
  return RtlRbInsertNodeEx(a1 + 1, (PRTL_BALANCED_NODE)Root, v13, (PRTL_BALANCED_NODE)(a3 + 8));
}
