/*
 * XREFs of RtlHpHeapManagerInitialize @ 0x18010DF74
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x18010B490 (RtlHpInitializeHeapManager.c)
 * Callees:
 *     memset @ 0x1800A4780 (memset.c)
 */

_QWORD *__fastcall RtlHpHeapManagerInitialize(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *result; // rax

  memset(&RtlpHpHeapManager, 0, 0x38D0uLL);
  RtlpHpHeapManager = (__int64)&RtlpHpHeapGlobals;
  memset(&qword_18016DC58, 0, 0x50uLL);
  qword_18016DC80 = -1LL;
  dword_18016DC94 = 16;
  memset(&unk_18016DCA8, 0, 0x3840uLL);
  qword_18016DCE8 = -1LL;
  v3 = &unk_18016E520;
  dword_18016DCFC = 2056;
  v4 = 255LL;
  do
  {
    *(v3 - 1) = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    *v3 = 0LL;
    v3[1] = 0LL;
    v3 += 6;
    --v4;
  }
  while ( v4 );
  v5 = 3LL;
  qword_180171518 = *a2;
  result = &unk_1801714F0;
  do
  {
    *result = 0LL;
    result += 2;
    --v5;
  }
  while ( v5 );
  return result;
}
