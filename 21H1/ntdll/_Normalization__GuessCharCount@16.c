/*
 * XREFs of _Normalization__GuessCharCount@16 @ 0x4B3676B1
 * Callers:
 *     _RtlpNormalizeStringWorker@20 @ 0x4B36860D (_RtlpNormalizeStringWorker@20.c)
 * Callees:
 *     _Normalization__GuessCharCountBySize@8 @ 0x4B3676E1 (_Normalization__GuessCharCountBySize@8.c)
 */

int __fastcall Normalization__GuessCharCount(int a1, int a2, int a3, _DWORD *a4)
{
  if ( !a2 || !a4 || a3 < 0 )
    return -1073741811;
  *a4 = 0;
  *a4 = Normalization__GuessCharCountBySize(a1, a3);
  return 0;
}
