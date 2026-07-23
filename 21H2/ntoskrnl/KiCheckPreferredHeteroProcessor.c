/*
 * XREFs of KiCheckPreferredHeteroProcessor @ 0x14027A170
 * Callers:
 *     KiQuantumEnd @ 0x140279260 (KiQuantumEnd.c)
 *     KiUpdateRunTime @ 0x1402CBED0 (KiUpdateRunTime.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140520230 (KiSendHeteroRescheduleIntRequestHelper.c)
 * Callees:
 *     KiIsQosGroupingActive @ 0x140398FA4 (KiIsQosGroupingActive.c)
 *     KiConvertDynamicHeteroPolicy @ 0x14051F3E0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14051F4F8 (KiGenerateHeteroSets.c)
 */

__int64 __fastcall KiCheckPreferredHeteroProcessor(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  unsigned int v8; // r14d
  __int64 v9; // r15
  __int64 v10; // rcx
  unsigned int v11; // r11d
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v15; // rdx
  unsigned __int8 v16; // r10
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int8 v19; // al
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+38h] [rbp-8h] BYREF
  __int64 v22; // [rsp+88h] [rbp+48h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 125);
  v4 = 0;
  v20 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  if ( !(_BYTE)v3 )
    return 0LL;
  v8 = v3;
  if ( v3 >= 5 )
    v8 = KiConvertDynamicHeteroPolicy(a1, a2, a2);
  v9 = *(_QWORD *)(a2 + 192);
  KiGenerateHeteroSets(v9, *(_QWORD *)(a1 + 576), v8, (unsigned int)&v22, (__int64)&v21, (__int64)&v20);
  v11 = 1;
  if ( (v20 & *(_QWORD *)(a2 + 200)) != 0
    && (!(unsigned __int8)KiIsQosGroupingActive(v10, *(_QWORD *)(*(_QWORD *)(a2 + 192) + 360LL), *(_QWORD *)v9)
     || (v12 & v13) == 0
     || (unsigned __int8)*(_DWORD *)(a1 + 512) - v11 > v11
     || (v12 & *(_QWORD *)(a2 + 200)) != 0) )
  {
    if ( (v22 & *(_QWORD *)(a2 + 200)) == 0 )
    {
      if ( !a3 )
      {
        LOBYTE(v4) = (KeGetCurrentPrcb()->GroupSetMember & v22) != 0;
        return v4;
      }
      if ( (v13 & *(_QWORD *)(v9 + 8)) != 0 )
        v13 &= *(_QWORD *)(v9 + 8);
      if ( (v13 & v22) != 0 )
        return v11;
      v15 = v13 & v21 & ~v22;
      v16 = v8 - 3 <= v11 ? *(_BYTE *)(a2 + 33210) : *(_BYTE *)(a2 + 33209);
      if ( v15 )
      {
        while ( 1 )
        {
          _BitScanReverse64(&v17, v15);
          v18 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int16 *)(v9 + 144) + (int)v17]];
          v19 = v8 - 3 <= v11 ? *(_BYTE *)(v18 + 33210) : *(_BYTE *)(v18 + 33209);
          if ( v19 > v16 )
            break;
          v15 &= ~*(_QWORD *)(v18 + 200);
          if ( !v15 )
            return 0LL;
        }
        return v11;
      }
    }
    return 0LL;
  }
  return v11;
}
