/*
 * XREFs of _FindEmailAt@8 @ 0x4B3651DC
 * Callers:
 *     _RtlpNameprepAsciiRealWorker@40 @ 0x4B2E598C (_RtlpNameprepAsciiRealWorker@40.c)
 *     _RtlpValidateAsciiStd3AndLength@16 @ 0x4B2E5A9B (_RtlpValidateAsciiStd3AndLength@16.c)
 * Callees:
 *     <none>
 */

int __fastcall FindEmailAt(int a1, int a2)
{
  int v2; // eax
  _WORD *v3; // ecx

  v2 = a2 - 1;
  v3 = (_WORD *)(a1 + 2 * a2 - 2);
  if ( a2 - 1 < 0 )
    return a2;
  while ( *v3 != 64 )
  {
    --v3;
    if ( --v2 < 0 )
      return a2;
  }
  return v2 + 1;
}
