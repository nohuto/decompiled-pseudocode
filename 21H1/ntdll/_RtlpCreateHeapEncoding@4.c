/*
 * XREFs of _RtlpCreateHeapEncoding@4 @ 0x4B2B22A1
 * Callers:
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 * Callees:
 *     _RtlpHeapGenerateRandomValue32@0 @ 0x4B2B22F0 (_RtlpHeapGenerateRandomValue32@0.c)
 */

void __thiscall RtlpCreateHeapEncoding(int this)
{
  __int16 RandomValue32; // ax

  if ( (*(_BYTE *)(this + 72) & 2) == 0 && (*(_DWORD *)(this + 64) & 0x4000000) == 0 )
  {
    *(_DWORD *)(this + 80) = 0;
    *(_BYTE *)(this + 82) = 16;
    *(_DWORD *)(this + 76) = *(_DWORD *)(this + 80);
    RtlpHeapGenerateRandomValue32();
    *(_DWORD *)(this + 80) |= RtlpHeapGenerateRandomValue32();
    RtlpHeapGenerateRandomValue32();
    RandomValue32 = RtlpHeapGenerateRandomValue32();
    *(_WORD *)(this + 86) = 0;
    *(_WORD *)(this + 84) = RandomValue32;
  }
}
