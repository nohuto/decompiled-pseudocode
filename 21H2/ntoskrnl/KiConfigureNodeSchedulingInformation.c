/*
 * XREFs of KiConfigureNodeSchedulingInformation @ 0x1403B6970
 * Callers:
 *     KiConfigureAllSchedulingInformation @ 0x140A4FA60 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiConfigureNodeSchedulingInformation(__int64 a1)
{
  unsigned __int64 v1; // r11
  char v2; // r14
  __int64 v3; // r9
  int v4; // esi
  __int64 v6; // rbx
  unsigned __int64 i; // r8
  __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx

  v1 = *(_QWORD *)(a1 + 136);
  v2 = HalpInterruptHyperThreading;
  v3 = 0LL;
  v4 = *(unsigned __int16 *)(a1 + 144);
  v6 = 0LL;
  for ( i = v1; i; i &= ~v10 )
  {
    _BitScanForward64((unsigned __int64 *)&v8, i);
    v9 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)((v4 << 6) + v8)]];
    if ( v2 )
    {
      v10 = *(_QWORD *)(v9 + 33880);
      if ( v10 != *(_QWORD *)(v9 + 200) )
        *(_BYTE *)(a1 + 181) |= 0x20u;
    }
    else
    {
      v10 = v1 & *(_QWORD *)(v9 + 8LL * *(unsigned __int8 *)(v9 + 208) + 33688);
    }
    result = (unsigned int)v8;
    v6 |= 1LL << v8;
  }
  v12 = 0LL;
  v13 = v1;
  if ( v1 )
  {
    do
    {
      _BitScanForward64(&v14, v13);
      v12 |= 1LL << v14;
      v13 &= ~*(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)((v4 << 6) + v14)]] + 33896);
    }
    while ( v13 );
    do
    {
      _BitScanForward64(&v15, v1);
      v16 = *(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)((v4 << 6) + v15)]] + 33856);
      v3 |= v16;
      result = (unsigned int)v15;
      v1 &= ~v16 & ~(1LL << v15);
    }
    while ( v1 );
  }
  *(_QWORD *)(a1 + 160) = v6;
  *(_QWORD *)(a1 + 376) = v12;
  *(_QWORD *)(a1 + 152) = v3;
  return result;
}
