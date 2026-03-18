/*
 * XREFs of KiCheckPreferredHeteroProcessor @ 0x1402DBC60
 * Callers:
 *     KiUpdateRunTime @ 0x140286DE0 (KiUpdateRunTime.c)
 *     KiQuantumEnd @ 0x1402DAD50 (KiQuantumEnd.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14051E510 (KiSendHeteroRescheduleIntRequestHelper.c)
 * Callees:
 *     KiIsQosGroupingActive @ 0x1403989E4 (KiIsQosGroupingActive.c)
 *     KiConvertDynamicHeteroPolicy @ 0x14051D6C0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14051D7D8 (KiGenerateHeteroSets.c)
 */

__int64 __fastcall KiCheckPreferredHeteroProcessor(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  unsigned int v9; // r14d
  __int64 v10; // r15
  __int64 v11; // rcx
  unsigned int v12; // r11d
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v16; // rdx
  unsigned __int8 v17; // r10
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  unsigned __int8 v20; // al
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  __int64 v22; // [rsp+38h] [rbp-8h] BYREF
  __int64 v23; // [rsp+88h] [rbp+48h] BYREF

  v4 = *(unsigned __int8 *)(a1 + 125);
  v5 = 0;
  v21 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  if ( !(_BYTE)v4 )
    return 0LL;
  v9 = v4;
  if ( v4 >= 5 )
    v9 = KiConvertDynamicHeteroPolicy(a1, a2, a2, a4);
  v10 = *(_QWORD *)(a2 + 192);
  KiGenerateHeteroSets(v10, *(_QWORD *)(a1 + 576), v9, (unsigned int)&v23, (__int64)&v22, (__int64)&v21);
  v12 = 1;
  if ( (v21 & *(_QWORD *)(a2 + 200)) != 0
    && (!(unsigned __int8)KiIsQosGroupingActive(v11, *(_QWORD *)(*(_QWORD *)(a2 + 192) + 360LL), *(_QWORD *)v10)
     || (v13 & v14) == 0
     || (unsigned __int8)*(_DWORD *)(a1 + 512) - v12 > v12
     || (v13 & *(_QWORD *)(a2 + 200)) != 0) )
  {
    if ( (v23 & *(_QWORD *)(a2 + 200)) == 0 )
    {
      if ( !a3 )
      {
        LOBYTE(v5) = (KeGetCurrentPrcb()->GroupSetMember & v23) != 0;
        return v5;
      }
      if ( (v14 & *(_QWORD *)(v10 + 8)) != 0 )
        v14 &= *(_QWORD *)(v10 + 8);
      if ( (v14 & v23) != 0 )
        return v12;
      v16 = v14 & v22 & ~v23;
      v17 = v9 - 3 <= v12 ? *(_BYTE *)(a2 + 33210) : *(_BYTE *)(a2 + 33209);
      if ( v16 )
      {
        while ( 1 )
        {
          _BitScanReverse64(&v18, v16);
          v19 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int16 *)(v10 + 144) + (int)v18]];
          v20 = v9 - 3 <= v12 ? *(_BYTE *)(v19 + 33210) : *(_BYTE *)(v19 + 33209);
          if ( v20 > v17 )
            break;
          v16 &= ~*(_QWORD *)(v19 + 200);
          if ( !v16 )
            return 0LL;
        }
        return v12;
      }
    }
    return 0LL;
  }
  return v12;
}
