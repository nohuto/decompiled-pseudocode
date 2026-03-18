/*
 * XREFs of __report_rangecheckfailure @ 0x1C015A100
 * Callers:
 *     SetAppCompatFlags @ 0x1C0013670 (SetAppCompatFlags.c)
 *     RemoveHmodDependency @ 0x1C0074F5C (RemoveHmodDependency.c)
 *     xxxDoSysExpunge @ 0x1C01146E4 (xxxDoSysExpunge.c)
 *     NtUserRemoteConnect @ 0x1C0127F20 (NtUserRemoteConnect.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D6658 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C02981A0 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C0298370 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029DBCC (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiMakeFontDir @ 0x1C02AEA10 (NtGdiMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
