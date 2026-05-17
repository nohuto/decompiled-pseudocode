/*
 * XREFs of _RtlULongMult@12 @ 0x4B306D00
 * Callers:
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 * Callees:
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 */

int __fastcall RtlULongMult(unsigned int a1, unsigned int a2, int *a3)
{
  return RtlULongLongToUInt(a3, a2 * a1, (a2 * (unsigned __int64)a1) >> 32);
}
