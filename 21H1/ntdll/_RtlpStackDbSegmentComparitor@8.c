/*
 * XREFs of _RtlpStackDbSegmentComparitor@8 @ 0x4B38AB02
 * Callers:
 *     _RtlpStackDbSegmentFindOrCreate@8 @ 0x4B38AB3B (_RtlpStackDbSegmentFindOrCreate@8.c)
 * Callees:
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

BOOL __stdcall RtlpStackDbSegmentComparitor(int a1, int a2)
{
  BOOL result; // eax
  size_t v3; // [esp-4h] [ebp-8h]

  result = 0;
  if ( *(unsigned __int8 *)(a1 + 11) == *(_DWORD *)a2 )
  {
    LODWORD(v3) = 4 * *(_DWORD *)a2;
    if ( !memcmp((const void *)(a1 + 12), *(const void **)(a2 + 4), v3) )
      return 1;
  }
  return result;
}
