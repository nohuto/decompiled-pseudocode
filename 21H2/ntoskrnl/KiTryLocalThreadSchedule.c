/*
 * XREFs of KiTryLocalThreadSchedule @ 0x1403502B0
 * Callers:
 *     KiChooseTargetProcessor @ 0x14034FB30 (KiChooseTargetProcessor.c)
 * Callees:
 *     KiReduceByEffectiveIdleSmtSet @ 0x140234654 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x14051F43C (KiFindRankBiasedIdleSmtSet.c)
 */

__int64 __fastcall KiTryLocalThreadSchedule(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // edx
  int v14; // ecx
  unsigned __int64 v15; // rax
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a1 + 12588) & 1) == 0
    || *(_BYTE *)(a3 + 643) != 15 && *(_DWORD *)(a3 + 84) >= (unsigned int)KiShortExecutionCycles )
  {
    return 0LL;
  }
  v9 = *(unsigned __int64 **)(a1 + 192);
  v10 = *v9;
  v11 = a4 & *v9;
  v12 = v11;
  v16[0] = v11;
  if ( a6 )
  {
    if ( v11 )
      goto LABEL_7;
    v10 = v9[3] & v9[11];
    v11 = a4 & v10;
    v16[0] = a4 & v10;
    v12 = a4 & v10;
  }
  if ( !v12 )
    return 0LL;
LABEL_7:
  if ( (v12 & *(_QWORD *)(a1 + 33896)) != 0 )
  {
    v11 = v12 & *(_QWORD *)(a1 + 33896);
    v16[0] = v11;
  }
  if ( (*((_BYTE *)v9 + 181) & 0x20) == 0 )
    goto LABEL_13;
  if ( !a5 || !(unsigned __int8)KiFindRankBiasedIdleSmtSet(a1, v16) )
  {
    v11 = v16[0] & v9[1];
    if ( v11 )
    {
      if ( !a5
        || (unsigned int)((0x101010101010101LL
                         * ((((v10 - ((v10 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v10 - ((v10 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                           + ((((v10 - ((v10 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v10 - ((v10 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled )
      {
LABEL_13:
        if ( (v11 & ~*(_QWORD *)(a1 + 33880)) != 0 )
          v11 &= ~*(_QWORD *)(a1 + 33880);
        goto LABEL_15;
      }
      return 0LL;
    }
    if ( a5 )
      return 0LL;
    if ( !KiReduceByEffectiveIdleSmtSet(a1, v16) )
    {
      v11 = v16[0];
      goto LABEL_13;
    }
  }
  v11 = v16[0];
LABEL_15:
  v13 = *(unsigned __int8 *)(a1 + 208);
  v14 = *(_DWORD *)(a1 + 33876);
  if ( *(_BYTE *)(a2 + 208) == (_BYTE)v13 && (*(_QWORD *)(a1 + 33888) & *(_QWORD *)(a2 + 200)) != 0LL )
    LOBYTE(v14) = *(_BYTE *)(a2 + 209);
  _BitScanForward64(&v15, __ROR8__(v11, v14));
  return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v13 + (((_BYTE)v15 + (_BYTE)v14) & 0x3F)]];
}
