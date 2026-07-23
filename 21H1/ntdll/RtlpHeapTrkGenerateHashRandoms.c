/*
 * XREFs of RtlpHeapTrkGenerateHashRandoms @ 0x4B36481D
 * Callers:
 *     _RtlHeapTrkInitialize@4 @ 0x4B364170 (_RtlHeapTrkInitialize@4.c)
 * Callees:
 *     _RtlRandomEx@4 @ 0x4B2AECC0 (_RtlRandomEx@4.c)
 *     _NtQueryPerformanceCounter@8 @ 0x4B2F2C90 (_NtQueryPerformanceCounter@8.c)
 */

unsigned int RtlpHeapTrkGenerateHashRandoms()
{
  _WORD *v0; // esi
  int v1; // edi
  ULONG v2; // eax
  unsigned int result; // eax
  unsigned int v4; // et2
  LARGE_INTEGER PerformanceCounter; // [esp+8h] [ebp-Ch] BYREF
  ULONG Seed; // [esp+10h] [ebp-4h] BYREF

  NtQueryPerformanceCounter(&PerformanceCounter, 0);
  v0 = &unk_4B3A6DA0;
  Seed = PerformanceCounter.LowPart;
  v1 = 4;
  do
  {
    v2 = RtlRandomEx(&Seed);
    v4 = v2 % 0x1EEF;
    result = v2 / 0x1EEF;
    *v0++ = v4;
    --v1;
  }
  while ( v1 );
  return result;
}
