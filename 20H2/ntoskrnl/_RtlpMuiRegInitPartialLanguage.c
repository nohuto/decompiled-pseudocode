/*
 * XREFs of _RtlpMuiRegInitPartialLanguage @ 0x140984BC0
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x1407A340C (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140984C1C (_RtlpMuiRegPopulateBaseLanguages.c)
 */

__int64 __fastcall RtlpMuiRegInitPartialLanguage(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  if ( !a1 || !a2 || !a3 || (*a3 & 2) == 0 )
    return 3221225485LL;
  if ( (int)RtlpMuiRegPopulateBaseLanguages(a1, a2, a3, &v5) < 0 )
    *(_WORD *)a3 |= 0x1000u;
  if ( !v5 )
    *(_WORD *)a3 |= 0x1000u;
  return 0LL;
}
