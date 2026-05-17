/*
 * XREFs of _RtlNormalizeString@20 @ 0x4B3685C0
 * Callers:
 *     _RtlpNameprepAsciiRealWorker@40 @ 0x4B2E598C (_RtlpNameprepAsciiRealWorker@40.c)
 * Callees:
 *     _RtlpNormalizeStringWorker@20 @ 0x4B36860D (_RtlpNormalizeStringWorker@20.c)
 *     _RtlpGetNormalization@8 @ 0x4B375A88 (_RtlpGetNormalization@8.c)
 */

int __stdcall RtlNormalizeString(int a1, int a2, int a3, int a4, int *a5)
{
  int result; // eax
  int v6; // [esp+8h] [ebp-4h] BYREF

  if ( !a2 || a3 < -1 || !a1 || *a5 < 0 )
    return -1073741811;
  result = RtlpGetNormalization(a1, &v6);
  if ( result >= 0 )
    return RtlpNormalizeStringWorker(a3, a4, a5);
  return result;
}
