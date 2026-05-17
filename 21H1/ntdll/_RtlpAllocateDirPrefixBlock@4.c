/*
 * XREFs of _RtlpAllocateDirPrefixBlock@4 @ 0x4B33CFE7
 * Callers:
 *     _RtlpEnsureTailingSlashAndAddToList@8 @ 0x4B33D020 (_RtlpEnsureTailingSlashAndAddToList@8.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

int __fastcall RtlpAllocateDirPrefixBlock(unsigned __int16 a1)
{
  int result; // eax

  result = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, a1 + 16);
  if ( result )
  {
    *(_WORD *)(result + 10) = a1;
    *(_WORD *)(result + 8) = 0;
    *(_DWORD *)(result + 12) = result + 16;
  }
  return result;
}
