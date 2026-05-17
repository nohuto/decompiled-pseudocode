/*
 * XREFs of _RtlResetRtlTranslations@4 @ 0x4B344160
 * Callers:
 *     _LdrpInitializeNlsInfo@4 @ 0x4B332D65 (_LdrpInitializeNlsInfo@4.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __stdcall RtlResetRtlTranslations(int a1)
{
  bool v1; // zf
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  bool v5; // al
  int v6; // edi
  __int16 v7; // ax
  int v8; // eax
  int result; // eax

  if ( *(_WORD *)(a1 + 44) == 0xFDE9 || *(_WORD *)a1 == 0xFDE9 )
  {
    v5 = 0;
    NlsAnsiCodePage = -535;
    NlsActiveCodePageIsUTF8 = 1;
    v3 = 0;
    NlsOemCodePageIsUTF8 = 1;
    v4 = 0;
    NlsMbCodePageTag = 0;
    v6 = 0;
    NlsMbAnsiCodePageTables = 0;
    NlsAnsiToUnicodeData = 0;
    NlsUnicodeToAnsiData = 0;
    NlsUnicodeToMbAnsiData = 0;
  }
  else
  {
    NlsAnsiCodePage = *(_WORD *)(a1 + 44);
    if ( *(_WORD *)(a1 + 56) )
      qmemcpy(NlsLeadByteInfoTable, *(const void **)(a1 + 84), sizeof(NlsLeadByteInfoTable));
    else
      memset(NlsLeadByteInfoTable, 0, sizeof(NlsLeadByteInfoTable));
    v1 = *(_WORD *)(a1 + 56) == 0;
    NlsMbAnsiCodePageTables = *(_DWORD *)(a1 + 84);
    NlsAnsiToUnicodeData = *(_DWORD *)(a1 + 72);
    v2 = *(_DWORD *)(a1 + 76);
    NlsMbCodePageTag = !v1;
    NlsUnicodeToAnsiData = v2;
    NlsUnicodeToMbAnsiData = v2;
    NlsActiveCodePageIsUTF8 = 0;
    if ( *(_WORD *)(a1 + 12) )
      qmemcpy(NlsOemLeadByteInfoTable, *(const void **)(a1 + 40), sizeof(NlsOemLeadByteInfoTable));
    else
      memset(NlsOemLeadByteInfoTable, 0, sizeof(NlsOemLeadByteInfoTable));
    v3 = *(_DWORD *)(a1 + 32);
    v4 = *(_DWORD *)(a1 + 28);
    v5 = *(_WORD *)(a1 + 12) != 0;
    v6 = *(_DWORD *)(a1 + 40);
    NlsOemCodePageIsUTF8 = 0;
  }
  NlsMbOemCodePageTag = v5;
  OemDefaultChar = *(_WORD *)(a1 + 4);
  v7 = *(_WORD *)(a1 + 8);
  NlsMbOemCodePageTables = v6;
  OemTransUniDefaultChar = v7;
  v8 = *(_DWORD *)(a1 + 88);
  NlsOemToUnicodeData = v4;
  Nls844UnicodeUpcaseTable = v8;
  result = *(_DWORD *)(a1 + 92);
  NlsUnicodeToOemData = v3;
  NlsUnicodeToMbOemData = v3;
  Nls844UnicodeLowercaseTable = result;
  return result;
}
