/*
 * XREFs of RtlCrc32 @ 0x1405837A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputeCrcInternal @ 0x14033B560 (RtlpComputeCrcInternal.c)
 */

__int64 __fastcall RtlCrc32(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  return RtlpComputeCrcInternal(a1, a2, a3, (__int64)&Crc32Ctrl);
}
