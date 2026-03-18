/*
 * XREFs of CmpGetComponentNameAtIndex @ 0x140681174
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     CmpValidateComponents @ 0x140681130 (CmpValidateComponents.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407350A0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
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
