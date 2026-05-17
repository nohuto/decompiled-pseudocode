/*
 * XREFs of _RtlpHpSegUpdateCommit@12 @ 0x4B37DA58
 * Callers:
 *     _RtlpHpSegPageRangeCommit@24 @ 0x4B37CC3B (_RtlpHpSegPageRangeCommit@24.c)
 * Callees:
 *     _RtlpHpTlLogMemStats@8 @ 0x4B3709FD (_RtlpHpTlLogMemStats@8.c)
 */

int __fastcall RtlpHpSegUpdateCommit(int a1, int a2, unsigned int a3)
{
  int result; // eax

  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + *(__int16 *)(a1 + 18) + 4), a3);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogMemStats(*(_DWORD *)(a1 + 36), (int *)(a1 + *(__int16 *)(a1 + 18)));
  result = (*(_DWORD *)(a2 + 12) ^ (~(a3 + ~(*(_DWORD *)(a2 + 12) >> 8)) << 8)) & 0xFFFF00;
  *(_DWORD *)(a2 + 12) ^= result;
  return result;
}
