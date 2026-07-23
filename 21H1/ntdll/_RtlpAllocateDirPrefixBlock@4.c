/*
 * XREFs of _RtlpAllocateDirPrefixBlock@4 @ 0x4B33CFE7
 * Callers:
 *     _RtlpEnsureTailingSlashAndAddToList@8 @ 0x4B33D020 (_RtlpEnsureTailingSlashAndAddToList@8.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

_WORD *__fastcall RtlpAllocateDirPrefixBlock(unsigned __int16 a1)
{
  _WORD *result; // eax
  SIZE_T v3; // [esp-4h] [ebp-8h]

  LODWORD(v3) = a1 + 16;
  result = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, v3);
  if ( result )
  {
    result[5] = a1;
    result[4] = 0;
    *((_DWORD *)result + 3) = result + 8;
  }
  return result;
}
