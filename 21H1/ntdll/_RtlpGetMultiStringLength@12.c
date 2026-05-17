/*
 * XREFs of _RtlpGetMultiStringLength@12 @ 0x4B354569
 * Callers:
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpGetMultiStringLength(const unsigned __int16 *a1, _WORD *a2, _DWORD *a3)
{
  if ( !a2 || !a1 )
    return -1073741811;
  *a2 = 0;
  if ( a3 )
    *a3 = 0;
  for ( ; *a1; a1 += wcslen(a1) + 1 )
  {
    if ( a3 )
      ++*a3;
    *a2 += wcslen(a1) + 1;
  }
  return 0;
}
