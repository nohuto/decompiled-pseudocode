/*
 * XREFs of _RtlpFreeTebLanguageList@4 @ 0x4B2EBD41
 * Callers:
 *     _RtlSetThreadPreferredUILanguages2@16 @ 0x4B2D66B0 (_RtlSetThreadPreferredUILanguages2@16.c)
 *     _RtlCleanUpTEBLangLists@0 @ 0x4B2EBCA0 (_RtlCleanUpTEBLangLists@0.c)
 *     _RtlRestoreThreadPreferredUILanguages@4 @ 0x4B352D50 (_RtlRestoreThreadPreferredUILanguages@4.c)
 *     _RtlpDupTebLanguageList@4 @ 0x4B353D5C (_RtlpDupTebLanguageList@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpMuiRegFreeLanguageList@4 @ 0x4B2D32FD (_RtlpMuiRegFreeLanguageList@4.c)
 */

int __thiscall RtlpFreeTebLanguageList(_DWORD *this)
{
  _BYTE *v2; // ecx
  int result; // eax

  if ( this )
  {
    v2 = (_BYTE *)*this;
    if ( *this )
      RtlpMuiRegFreeLanguageList(v2);
    if ( this[1] )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, this[1]);
    return RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)this);
  }
  return result;
}
