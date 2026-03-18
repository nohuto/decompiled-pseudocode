/*
 * XREFs of ___report_rangecheckfailure @ 0xED862
 * Callers:
 *     _RemoveHmodDependency@4 @ 0x15F1A (_RemoveHmodDependency@4.c)
 *     _SetAppCompatFlags@4 @ 0x7C302 (_SetAppCompatFlags@4.c)
 *     _xxxDoSysExpunge@4 @ 0xD2E12 (_xxxDoSysExpunge@4.c)
 *     _NtUserRemoteConnect@12 @ 0xEB270 (_NtUserRemoteConnect@12.c)
 *     ?SetHighContrastWorker@@YGHPAUtagINTERNALSETHIGHCONTRAST@@HPAH@Z @ 0x14544F (-SetHighContrastWorker@@YGHPAUtagINTERNALSETHIGHCONTRAST@@HPAH@Z.c)
 *     _NtGdiEudcLoadUnloadLink@28 @ 0x1F93F9 (_NtGdiEudcLoadUnloadLink@28.c)
 *     _NtGdiGetEudcTimeStampEx@12 @ 0x1F9563 (_NtGdiGetEudcTimeStampEx@12.c)
 *     ?UmfdEscEngCreateFile@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCB63 (-UmfdEscEngCreateFile@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     _NtGdiMakeFontDir@20 @ 0x2138ED (_NtGdiMakeFontDir@20.c)
 * Callees:
 *     <none>
 */

void __noreturn __report_rangecheckfailure()
{
  __fastfail(8u);
}
