/*
 * XREFs of MiInPageSkipPage @ 0x14045BA46
 * Callers:
 *     MiValidatePagefilePageHash @ 0x14045D5EA (MiValidatePagefilePageHash.c)
 * Callees:
 *     MiInPageGapPage @ 0x1405943C0 (MiInPageGapPage.c)
 */

__int64 __fastcall MiInPageSkipPage(__int64 a1)
{
  __int64 result; // rax

  if ( a1 == qword_140C53280 )
    return 1LL;
  result = MiInPageGapPage();
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
