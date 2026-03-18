/*
 * XREFs of ?bInitializeEUDCInternal@@YAHXZ @ 0x1C00221F8
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C012AFF0 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     bAddAllFlEntry @ 0x1C0021078 (bAddAllFlEntry.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00223CC (-vInitializeFontAssocStatus@@YAXXZ.c)
 */

__int64 bInitializeEUDCInternal(void)
{
  int v0; // ebx
  unsigned __int16 v1; // ax
  unsigned int v2; // edx
  struct _UNICODE_STRING String; // [rsp+30h] [rbp-18h] BYREF
  USHORT AnsiCodePage; // [rsp+60h] [rbp+18h] BYREF
  USHORT OemCodePage; // [rsp+68h] [rbp+20h] BYREF
  int v7; // [rsp+70h] [rbp+28h] BYREF
  int v8; // [rsp+78h] [rbp+30h] BYREF

  v0 = 0;
  AnsiCodePage = 0;
  OemCodePage = 0;
  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  String.Buffer = &word_1C033B448;
  *(_QWORD *)&String.Length = 1310720LL;
  RtlIntegerToUnicodeString(AnsiCodePage, 0xAu, &String);
  SharedQueryTable.QueryRoutine = 0LL;
  SharedQueryTable.Name = L"FontLinkControl";
  SharedQueryTable.Flags = 292;
  SharedQueryTable.EntryContext = &ulFontLinkControl;
  SharedQueryTable.DefaultType = 67108868;
  SharedQueryTable.DefaultData = 0LL;
  SharedQueryTable.DefaultLength = 0;
  qword_1C0339878 = 0LL;
  dword_1C0339880 = 0;
  qword_1C0339888 = 0LL;
  if ( RtlQueryRegistryValues(3u, L"FontLink", &SharedQueryTable, 0LL, 0LL) < 0 )
    ulFontLinkControl = 0;
  v7 = 0;
  SharedQueryTable.Name = L"FontLinkDefaultChar";
  SharedQueryTable.EntryContext = &v7;
  if ( RtlQueryRegistryValues(3u, L"FontLink", &SharedQueryTable, 0LL, 0LL) < 0 )
    v1 = 12539;
  else
    v1 = v7;
  EudcDefaultChar = v1;
  v8 = 0;
  SharedQueryTable.Name = L"AllowSCPUAFontFallback";
  SharedQueryTable.EntryContext = &v8;
  if ( RtlQueryRegistryValues(3u, L"FontLink", &SharedQueryTable, 0LL, 0LL) >= 0 )
  {
    LOBYTE(v0) = v8 != 0;
    gbAllowSCPUAFontFallback = v0;
  }
  off_1C032A380 = &off_1C032A378;
  off_1C032A378 = &off_1C032A378;
  if ( (ulFontLinkControl & 1) == 0 )
  {
    dword_1C033A0B8 = 3;
    bAddAllFlEntry(0, v2);
    dword_1C033A0B8 = 12;
    vInitializeFontAssocStatus();
  }
  return 1LL;
}
