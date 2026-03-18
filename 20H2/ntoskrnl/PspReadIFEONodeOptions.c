/*
 * XREFs of PspReadIFEONodeOptions @ 0x1406D00B8
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1406D0300 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall PspReadIFEONodeOptions(__int64 a1, void *a2)
{
  __int64 result; // rax

  result = RtlQueryImageFileKeyOption(a2, 4, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
