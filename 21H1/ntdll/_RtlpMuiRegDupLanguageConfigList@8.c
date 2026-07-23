/*
 * XREFs of _RtlpMuiRegDupLanguageConfigList@8 @ 0x4B36B18D
 * Callers:
 *     _RtlpDupTebLanguageList@4 @ 0x4B353D5C (_RtlpDupTebLanguageList@4.c)
 * Callees:
 *     _RtlpMuiRegCreateLanguageConfigList@4 @ 0x4B2ADA68 (_RtlpMuiRegCreateLanguageConfigList@4.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __thiscall RtlpMuiRegDupLanguageConfigList(int this)
{
  int v2; // ebx
  int LanguageConfigList; // eax
  int v4; // esi
  size_t v6; // [esp-4h] [ebp-18h]
  size_t Size; // [esp+10h] [ebp-4h] BYREF

  if ( !this )
    return 0;
  v2 = *(unsigned __int16 *)(this + 4);
  if ( RtlULongLongToUInt((int *)&Size, 12 * v2, (12 * (unsigned __int64)*(unsigned __int16 *)(this + 4)) >> 32) < 0 )
    return 0;
  LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(v2);
  v4 = LanguageConfigList;
  if ( !LanguageConfigList )
    return 0;
  if ( v2 )
  {
    LODWORD(v6) = Size;
    memcpy(*(void **)(LanguageConfigList + 8), *(const void **)(this + 8), v6);
    *(_WORD *)(v4 + 4) = v2;
  }
  return v4;
}
