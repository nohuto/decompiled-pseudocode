/*
 * XREFs of _RtlSectionTableFromVirtualAddress@12 @ 0x4B2B9E97
 * Callers:
 *     _RtlAddressInSectionTable@12 @ 0x4B2B95F0 (_RtlAddressInSectionTable@12.c)
 *     _LdrpFetchAddressOfSecurityCookie@16 @ 0x4B2B9F97 (_LdrpFetchAddressOfSecurityCookie@16.c)
 *     _LdrpAccessResourceDataNoMultipleLanguage@16 @ 0x4B2BD9F0 (_LdrpAccessResourceDataNoMultipleLanguage@16.c)
 *     _LdrpLocateMrdata@0 @ 0x4B334ED2 (_LdrpLocateMrdata@0.c)
 * Callees:
 *     <none>
 */

char *__thiscall RtlSectionTableFromVirtualAddress(unsigned __int16 *this, unsigned int a2)
{
  unsigned __int16 v2; // ax
  unsigned __int16 *v3; // edx
  unsigned int v4; // edi
  int v5; // ecx
  char *v6; // edx

  v2 = this[10];
  v3 = this + 12;
  v4 = this[3];
  v5 = 0;
  v6 = (char *)v3 + v2;
  if ( !v4 )
    return 0;
  while ( a2 < *((_DWORD *)v6 + 3) || a2 >= *((_DWORD *)v6 + 3) + *((_DWORD *)v6 + 4) )
  {
    v6 += 40;
    if ( ++v5 >= v4 )
      return 0;
  }
  return v6;
}
