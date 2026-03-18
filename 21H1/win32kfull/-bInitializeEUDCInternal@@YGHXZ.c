/*
 * XREFs of ?bInitializeEUDCInternal@@YGHXZ @ 0xD6668
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SG_NXZ @ 0xD6894 (-AddInitialFonts@UmfdHostLifeTimeManager@@SG_NXZ.c)
 * Callees:
 *     ?vInitializeFontAssocStatus@@YGXXZ @ 0xD67C2 (-vInitializeFontAssocStatus@@YGXXZ.c)
 *     bAddAllFlEntry @ 0xDBBB8 (bAddAllFlEntry.c)
 */

int __stdcall bInitializeEUDCInternal()
{
  unsigned __int16 v0; // ax
  struct _UNICODE_STRING String; // [esp+Ch] [ebp-18h] BYREF
  USHORT OemCodePage[2]; // [esp+14h] [ebp-10h] BYREF
  int v4; // [esp+18h] [ebp-Ch] BYREF
  int v5; // [esp+1Ch] [ebp-8h] BYREF
  USHORT AnsiCodePage[2]; // [esp+20h] [ebp-4h] BYREF

  *(_DWORD *)AnsiCodePage = 0;
  *(_DWORD *)OemCodePage = 0;
  RtlGetDefaultCodePage(AnsiCodePage, OemCodePage);
  String.Buffer = &word_275548;
  String.Length = 0;
  String.MaximumLength = 20;
  RtlIntegerToUnicodeString(AnsiCodePage[0], 0xAu, &String);
  SharedQueryTable.QueryRoutine = 0;
  SharedQueryTable.Flags = 292;
  SharedQueryTable.Name = L"FontLinkControl";
  SharedQueryTable.EntryContext = &ulFontLinkControl;
  SharedQueryTable.DefaultType = 67108868;
  SharedQueryTable.DefaultData = 0;
  SharedQueryTable.DefaultLength = 0;
  dword_273FDC = 0;
  dword_273FE0 = 0;
  dword_273FE4 = 0;
  if ( RtlQueryRegistryValues(3u, L"FontLink", &SharedQueryTable, 0, 0) < 0 )
    ulFontLinkControl = 0;
  v5 = 0;
  SharedQueryTable.Name = L"FontLinkDefaultChar";
  SharedQueryTable.EntryContext = &v5;
  if ( RtlQueryRegistryValues(3u, L"FontLink", &SharedQueryTable, 0, 0) < 0 )
    v0 = 12539;
  else
    v0 = v5;
  EudcDefaultChar = v0;
  v4 = 0;
  SharedQueryTable.Name = L"AllowSCPUAFontFallback";
  SharedQueryTable.EntryContext = &v4;
  if ( RtlQueryRegistryValues(3u, L"FontLink", &SharedQueryTable, 0, 0) >= 0 )
    gbAllowSCPUAFontFallback = v4 != 0;
  off_26634C = &off_266348;
  off_266348 = &off_266348;
  if ( (ulFontLinkControl & 1) == 0 )
  {
    dword_27436C = 3;
    bAddAllFlEntry(0);
    dword_27436C = 12;
    vInitializeFontAssocStatus();
  }
  return 1;
}
