/*
 * XREFs of AslRegWildcardFindFirst @ 0x14096C164
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x140967BFC (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     AslStringDuplicate @ 0x140753A78 (AslStringDuplicate.c)
 *     AslAlloc @ 0x1407541E4 (AslAlloc.c)
 *     AslRegWildcardFindClose @ 0x14096C0E0 (AslRegWildcardFindClose.c)
 *     AslRegWildcardFindNext @ 0x14096C228 (AslRegWildcardFindNext.c)
 *     AslpParsePattern @ 0x14096C328 (AslpParsePattern.c)
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
