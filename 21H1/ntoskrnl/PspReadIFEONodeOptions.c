/*
 * XREFs of PspReadIFEONodeOptions @ 0x1406DA2D0
 * Callers:
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1406DA510 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall PspReadIFEONodeOptions(__int64 a1, void *a2)
{
  __int64 result; // rax

  result = RtlQueryImageFileKeyOption(a2, 4, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
