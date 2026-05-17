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
  unsigned int v2; // eax
  unsigned int result; // eax
  unsigned int v4; // et2
  int v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+10h] [ebp-4h] BYREF

  NtQueryPerformanceCounter((int)&v5, 0);
  v0 = &unk_4B3A6DA0;
  v6 = v5;
  v1 = 4;
  do
  {
    v2 = RtlRandomEx(&v6);
    v4 = v2 % 0x1EEF;
    result = v2 / 0x1EEF;
    *v0++ = v4;
    --v1;
  }
  while ( v1 );
  return result;
}
