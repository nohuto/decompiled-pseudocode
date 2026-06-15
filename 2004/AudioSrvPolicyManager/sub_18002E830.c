/*
 * XREFs of sub_18002E830 @ 0x18002E830
 * Callers:
 *     <none>
 * Callees:
 *     _o_log10 @ 0x18003A79C (_o_log10.c)
 */

__int64 __fastcall sub_18002E830(__int64 a1, __int64 a2)
{
  double v4; // xmm0_8
  float v5; // xmm1_4

  if ( *(_QWORD *)a2 != 0x40E06547A10FE088LL || *(_QWORD *)(a2 + 8) != 0x5936EC8617E85EAALL )
  {
    if ( *(float *)(a2 + 20) <= 0.0 )
      v4 = o_log10();
    else
      v4 = o_log10() * 20.0;
    v5 = v4;
    if ( v5 != 0.0 )
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8) + 12LL), 1);
    if ( *(_DWORD *)(a2 + 16) == 1 )
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8) + 16LL), 1);
  }
  return 0LL;
}
