/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x14023B660
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x140214BB0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x140215910 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextAddSubsegment @ 0x14023B4B8 (RtlpHpVsContextAddSubsegment.c)
 *     RtlpHpVsChunkFree @ 0x14023B55C (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140216FB0 (RtlRbInsertNodeEx.c)
 */

char __fastcall RtlpHpVsFreeChunkInsert(unsigned __int64 *a1, __int64 a2, _WORD *a3)
{
  __int64 v4; // r11
  unsigned int v5; // edx
  unsigned __int64 v6; // rbx
  unsigned int v8; // r11d
  __int16 v9; // bx
  unsigned int v10; // r9d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  bool v13; // al
  unsigned __int64 v14; // rax

  v4 = 16 * (WORD1(RtlpHpHeapGlobals) ^ ((unsigned int)a3 >> 16) ^ (unsigned __int16)a3[1]);
  v5 = ((_DWORD)a3 - a2 + 4127) & 0xFFFFF000;
  v6 = v4 + ((unsigned __int16)a3 & 0xFFF) + 4095LL;
  v8 = ((_DWORD)a3 + v4 - a2) & 0xFFFFF000;
  v9 = (v6 >> 12)
     - (((unsigned __int64)(16 * (WORD1(RtlpHpHeapGlobals) ^ ((unsigned int)a3 >> 16) ^ (unsigned __int16)a3[1])) + 4095) >> 12);
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
  a1[7] += (unsigned int)((0x101010101010101LL
                         * ((((v11 - ((v11 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v11 - ((v11 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                           + ((((v11 - ((v11 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v11 - ((v11 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
  *a3 = RtlpHpHeapGlobals ^ (unsigned __int16)a3 ^ (v9
                                                  + (v10 >> 12)
                                                  - ((0x101010101010101LL
                                                    * ((((v11 - ((v11 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + (((v11 - ((v11 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                      + ((((v11 - ((v11 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                        + (((v11 - ((v11 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
  v12 = a1[2];
  if ( (a1[3] & 1) != 0 && v12 )
    v12 ^= (unsigned __int64)(a1 + 2);
  v13 = 0;
  if ( v12 )
  {
    while ( 1 )
    {
      if ( ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)a3 ^ *(_DWORD *)a3) < ((unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)v12 - 8) ^ *(_DWORD *)(v12 - 8)) )
      {
        v14 = *(_QWORD *)v12;
        if ( (a1[3] & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_17;
          v14 ^= v12;
        }
        if ( !v14 )
        {
LABEL_17:
          v13 = 0;
          return RtlRbInsertNodeEx(a1 + 2, v12, v13, (unsigned __int64)(a3 + 4));
        }
      }
      else
      {
        v14 = *(_QWORD *)(v12 + 8);
        if ( (a1[3] & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_18;
          v14 ^= v12;
        }
        if ( !v14 )
        {
LABEL_18:
          v13 = 1;
          return RtlRbInsertNodeEx(a1 + 2, v12, v13, (unsigned __int64)(a3 + 4));
        }
      }
      v12 = v14;
    }
  }
  return RtlRbInsertNodeEx(a1 + 2, v12, v13, (unsigned __int64)(a3 + 4));
}
