/*
 * XREFs of ?bInitializeEUDCInternal@@YAHXZ @ 0x1C00090D0
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00093D8 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00092A4 (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C000F6D0 (bAddAllFlEntry.c)
 */

__int64 bInitializeEUDCInternal(void)
{
  int v0; // ebx
  unsigned __int16 v1; // ax
  struct _UNICODE_STRING String; // [rsp+30h] [rbp-18h] BYREF
  USHORT AnsiCodePage; // [rsp+60h] [rbp+18h] BYREF
  USHORT OemCodePage; // [rsp+68h] [rbp+20h] BYREF
  int v6; // [rsp+70h] [rbp+28h] BYREF
  int v7; // [rsp+78h] [rbp+30h] BYREF

  v0 = 0;
  AnsiCodePage = 0;
  OemCodePage = 0;
  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  String.Buffer = &word_1C033C428;
  *(_QWORD *)&String.Length = 1310720LL;
  RtlIntegerToUnicodeString(AnsiCodePage, 0xAu, &String);
  SharedQueryTable.QueryRoutine = 0LL;
  SharedQueryTable.Name = L"FontLinkControl";
  SharedQueryTable.Flags = 292;
  SharedQueryTable.EntryContext = &ulFontLinkControl;
  SharedQueryTable.DefaultType = 67108868;
  SharedQueryTable.DefaultData = 0LL;
  SharedQueryTable.DefaultLength = 0;
  qword_1C033A848 = 0LL;
  dword_1C033A850 = 0;
  qword_1C033A858 = 0LL;
  if ( RtlQueryRegistryValues(3u, L"FontLink", &SharedQueryTable, 0LL, 0LL) < 0 )
    ulFontLinkControl = 0;
  v6 = 0;
  SharedQueryTable.Name = L"FontLinkDefaultChar";
  SharedQueryTable.EntryContext = &v6;
  if ( RtlQueryRegistryValues(3u, L"FontLink", &SharedQueryTable, 0LL, 0LL) < 0 )
    v1 = 12539;
  else
    v1 = v6;
  EudcDefaultChar = v1;
  v7 = 0;
  SharedQueryTable.Name = L"AllowSCPUAFontFallback";
  SharedQueryTable.EntryContext = &v7;
  if ( RtlQueryRegistryValues(3u, L"FontLink", &SharedQueryTable, 0LL, 0LL) >= 0 )
  {
    LOBYTE(v0) = v7 != 0;
    gbAllowSCPUAFontFallback = v0;
  }
  off_1C032B380 = &off_1C032B378;
  off_1C032B378 = &off_1C032B378;
  if ( (ulFontLinkControl & 1) == 0 )
  {
    dword_1C033B088 = 3;
    bAddAllFlEntry(0LL);
    dword_1C033B088 = 12;
    vInitializeFontAssocStatus();
  }
  return 1LL;
}
