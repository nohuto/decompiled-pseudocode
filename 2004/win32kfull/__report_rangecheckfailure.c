/*
 * XREFs of __report_rangecheckfailure @ 0x1C01577A0
 * Callers:
 *     SetAppCompatFlags @ 0x1C003C040 (SetAppCompatFlags.c)
 *     xxxDoSysExpunge @ 0x1C0042A4C (xxxDoSysExpunge.c)
 *     RemoveHmodDependency @ 0x1C004609C (RemoveHmodDependency.c)
 *     NtUserRemoteConnect @ 0x1C01265C0 (NtUserRemoteConnect.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D7318 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C02995F0 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C02997C0 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029F01C (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiMakeFontDir @ 0x1C02AFF90 (NtGdiMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
