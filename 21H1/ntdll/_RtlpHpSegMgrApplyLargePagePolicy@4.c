/*
 * XREFs of _RtlpHpSegMgrApplyLargePagePolicy@4 @ 0x4B37BEAA
 * Callers:
 *     _RtlpHpSegMgrCommitInitiate@24 @ 0x4B37C275 (_RtlpHpSegMgrCommitInitiate@24.c)
 * Callees:
 *     _RtlpHeapGenerateRandomValue32@0 @ 0x4B2B22F0 (_RtlpHeapGenerateRandomValue32@0.c)
 */

ULONG __thiscall RtlpHpSegMgrApplyLargePagePolicy(int this)
{
  unsigned int v1; // eax
  int v3; // ecx
  unsigned int v4; // edx

  v1 = *(_BYTE *)(this + 9) & 7;
  if ( v1 <= 1 )
  {
    v3 = this + *(__int16 *)(this + 18);
    v4 = *(_DWORD *)(v3 + 28) + *(_DWORD *)(v3 + 20);
    if ( v4 < *(_DWORD *)(v3 + 36)
      && (v4 < *(_DWORD *)(v3 + 32)
       || *(_DWORD *)(v3 + 24) + *(_DWORD *)(v3 + 16) >= ((v4 * *(unsigned __int8 *)(v3 + 40)) << 9) / 0x64) )
    {
      return 1;
    }
  }
  else if ( v1 != 2 )
  {
    if ( v1 != 3 )
      return RtlpHeapGenerateRandomValue32() & 1;
    return 1;
  }
  return 0;
}
