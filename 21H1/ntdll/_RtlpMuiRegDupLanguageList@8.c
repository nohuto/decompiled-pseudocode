/*
 * XREFs of _RtlpMuiRegDupLanguageList@8 @ 0x4B2D5E04
 * Callers:
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 *     _RtlSetThreadPreferredUILanguages@12 @ 0x4B2D64B0 (_RtlSetThreadPreferredUILanguages@12.c)
 *     _RtlSetThreadPreferredUILanguages2@16 @ 0x4B2D66B0 (_RtlSetThreadPreferredUILanguages2@16.c)
 *     _RtlpDupTebLanguageList@4 @ 0x4B353D5C (_RtlpDupTebLanguageList@4.c)
 * Callees:
 *     _RtlpMuiRegCreateLanguageList@12 @ 0x4B2D3232 (_RtlpMuiRegCreateLanguageList@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __thiscall RtlpMuiRegDupLanguageList(int this)
{
  int v3; // ebx
  int LanguageList; // eax
  int v5; // edi
  size_t v6; // [esp-4h] [ebp-1Ch]
  int Size; // [esp+14h] [ebp-4h]

  if ( !this )
    return 0;
  v3 = *(unsigned __int16 *)(this + 4);
  if ( (int)RtlULongLongToUInt(6 * v3, (6 * (unsigned __int64)*(unsigned __int16 *)(this + 4)) >> 32) < 0 )
    return 0;
  LanguageList = RtlpMuiRegCreateLanguageList(v3, *(_BYTE *)(this + 8), *(_DWORD *)(this + 12));
  v5 = LanguageList;
  if ( !LanguageList )
    return 0;
  if ( v3 )
  {
    LODWORD(v6) = Size;
    memcpy(*(void **)(LanguageList + 16), *(const void **)(this + 16), v6);
    *(_WORD *)(v5 + 4) = v3;
  }
  *(_BYTE *)(v5 + 8) = *(_BYTE *)(this + 8);
  *(_DWORD *)(v5 + 24) = *(_DWORD *)(this + 24);
  *(_DWORD *)(v5 + 28) = *(_DWORD *)(this + 28);
  *(_DWORD *)(v5 + 32) = *(_DWORD *)(this + 32);
  return v5;
}
