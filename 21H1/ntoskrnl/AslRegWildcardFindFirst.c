/*
 * XREFs of AslRegWildcardFindFirst @ 0x140964FF4
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x140960A8C (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     AslStringDuplicate @ 0x140743318 (AslStringDuplicate.c)
 *     AslAlloc @ 0x140743A84 (AslAlloc.c)
 *     AslRegWildcardFindClose @ 0x140964F70 (AslRegWildcardFindClose.c)
 *     AslRegWildcardFindNext @ 0x1409650B8 (AslRegWildcardFindNext.c)
 *     AslpParsePattern @ 0x1409651B8 (AslpParsePattern.c)
 */

__int64 __fastcall AslRegWildcardFindFirst(__int64 a1, PVOID **a2, const wchar_t *a3)
{
  wchar_t **v6; // rax
  PVOID *v7; // rbx
  int Next; // edi

  *a2 = 0LL;
  v6 = (wchar_t **)AslAlloc(a1, 0x20uLL);
  v7 = (PVOID *)v6;
  if ( !v6 )
    return 3221225495LL;
  v6[2] = 0LL;
  v6[3] = 0LL;
  v6[1] = (wchar_t *)v6;
  *v6 = (wchar_t *)v6;
  Next = AslStringDuplicate(v6 + 3, a3);
  if ( Next >= 0 )
  {
    Next = AslpParsePattern(v7[3], v7);
    if ( Next >= 0 )
    {
      v7[2] = *v7;
      Next = AslRegWildcardFindNext(a1, v7);
      if ( Next >= 0 )
      {
        *a2 = v7;
        v7 = 0LL;
      }
    }
  }
  if ( v7 )
    AslRegWildcardFindClose(v7);
  return (unsigned int)Next;
}
