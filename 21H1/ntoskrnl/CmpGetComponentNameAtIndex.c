/*
 * XREFs of CmpGetComponentNameAtIndex @ 0x140623290
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14061C310 (CmpGetSymbolicLinkTarget.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140624630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetComponentNameAtIndex(__int64 a1, unsigned int a2)
{
  if ( a2 >= 8 )
    return *(_QWORD *)(a1 + 160) + 16 * (a2 - 8 + 6LL);
  else
    return a1 + 16 * (a2 + 2LL);
}
