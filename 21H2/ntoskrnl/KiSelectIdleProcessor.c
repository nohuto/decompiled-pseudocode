/*
 * XREFs of KiSelectIdleProcessor @ 0x1403909A8
 * Callers:
 *     KiChooseTargetProcessor @ 0x14034FB30 (KiChooseTargetProcessor.c)
 * Callees:
 *     KiReduceByEffectiveIdleSmtSet @ 0x140234654 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x14051F43C (KiFindRankBiasedIdleSmtSet.c)
 */

__int64 __fastcall KiSelectIdleProcessor(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4, char a5, char a6)
{
  __int64 v7; // rbx
  __int64 v11; // r8
  __int64 v12; // rax
  char v13; // cl
  int v14; // edx
  unsigned __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // rax
  char v18; // cl
  unsigned __int64 v19; // rax
  _QWORD v21[4]; // [rsp+28h] [rbp-20h] BYREF

  v7 = 0LL;
  if ( a4 )
  {
LABEL_4:
    v15 = *a3;
    v16 = a1 & *a3;
    v17 = v16;
    v21[0] = v16;
    if ( a6 )
    {
      if ( v16 )
      {
LABEL_6:
        if ( (*((_BYTE *)a3 + 181) & 0x20) == 0 )
          goto LABEL_15;
        if ( a5 && (unsigned __int8)KiFindRankBiasedIdleSmtSet(a4, v21) )
        {
LABEL_12:
          v16 = v21[0];
          goto LABEL_15;
        }
        v16 = v21[0];
        if ( (v21[0] & a3[1]) != 0 )
        {
          if ( !a5
            || (unsigned int)((0x101010101010101LL
                             * ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                               + ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled )
          {
            v16 = v21[0] & a3[1];
LABEL_15:
            if ( (v16 & *(_QWORD *)(a4 + 200)) != 0 )
            {
              return a4;
            }
            else
            {
              if ( (v16 & *(_QWORD *)(a4 + 33880)) != 0 )
              {
                v16 &= *(_QWORD *)(a4 + 33880);
              }
              else if ( (KiCacheAwareScheduling & 1) != 0 && (v16 & *(_QWORD *)(a4 + 33896)) != 0 )
              {
                v16 &= *(_QWORD *)(a4 + 33896);
              }
              v18 = *(_BYTE *)(a4 + 209);
              _BitScanForward64(&v19, __ROR8__(v16, v18));
              return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a4 + 208)
                                                                         + (((unsigned __int8)v19 + v18) & 0x3F)]];
            }
          }
        }
        else if ( !a5 )
        {
          if ( *(unsigned __int64 **)(a2 + 192) != a3 )
            goto LABEL_15;
          KiReduceByEffectiveIdleSmtSet(a2, v21);
          goto LABEL_12;
        }
        return v7;
      }
      v15 = a3[3] & a3[11];
      v16 = a1 & v15;
      v21[0] = a1 & v15;
      v17 = a1 & v15;
    }
    if ( !v17 )
      return v7;
    goto LABEL_6;
  }
  v11 = a1 & a3[17];
  if ( v11 )
  {
    v12 = KiProcessorBlock[*((unsigned __int16 *)a3 + 54)];
    v13 = *(_BYTE *)(v12 + 209);
    v14 = *(unsigned __int8 *)(v12 + 208);
    _BitScanForward64((unsigned __int64 *)&v12, __ROR8__(v11, v13));
    a4 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v14 + (((_BYTE)v12 + v13) & 0x3F)]];
    goto LABEL_4;
  }
  return 0LL;
}
