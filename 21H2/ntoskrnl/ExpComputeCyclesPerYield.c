/*
 * XREFs of ExpComputeCyclesPerYield @ 0x140A6C1A0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int64 ExpComputeCyclesPerYield()
{
  __int64 v0; // rdx
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rax
  unsigned __int16 v3; // cx
  unsigned __int64 v4; // rax
  __int16 v6; // [rsp+0h] [rbp-8h]

  _disable();
  v0 = 256LL;
  v1 = __rdtsc();
  do
  {
    _mm_pause();
    --v0;
  }
  while ( v0 );
  v2 = __rdtsc();
  if ( (v6 & 0x200) != 0 )
    _enable();
  v3 = -1;
  v4 = (v2 - v1) >> 8;
  if ( v4 <= 0xFFFF )
  {
    v3 = v4;
    if ( !v4 )
      return 1;
  }
  return v3;
}
