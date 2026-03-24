/*
 * XREFs of ?RtlStringCchPrintfW@@YAJPAGIPBGZZ @ 0x7F16E
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxResolveDesktop@20 @ 0x7DE28 (_xxxResolveDesktop@20.c)
 *     ?CreateShutdownEvent@@YGJPBGKPAPAX@Z @ 0xD5150 (-CreateShutdownEvent@@YGJPBGKPAPAX@Z.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 *     ?GrepDwmCreateComposedEvent@@YGJPAUDwmState@@@Z @ 0xE243C (-GrepDwmCreateComposedEvent@@YGJPAUDwmState@@@Z.c)
 *     ?CreateDesktopNotificationEvent@@YGJPAX@Z @ 0xEA3DE (-CreateDesktopNotificationEvent@@YGJPAX@Z.c)
 *     _EditionCreateWindowStationEntryPoint@32 @ 0xF228C (_EditionCreateWindowStationEntryPoint@32.c)
 *     ?CursorResourcePathToString@InputTraceLogging@@CGPBGPAU_UNICODE_STRING@@PAGI@Z @ 0x142FA4 (-CursorResourcePathToString@InputTraceLogging@@CGPBGPAU_UNICODE_STRING@@PAGI@Z.c)
 *     ?SetHighContrastWorker@@YGHPAUtagINTERNALSETHIGHCONTRAST@@HPAH@Z @ 0x14544F (-SetHighContrastWorker@@YGHPAUtagINTERNALSETHIGHCONTRAST@@HPAH@Z.c)
 *     ?SetMouseKeys@@YGHPAU_UNICODE_STRING@@PAUtagMOUSEKEYS@@@Z @ 0x145652 (-SetMouseKeys@@YGHPAU_UNICODE_STRING@@PAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YGHPAU_UNICODE_STRING@@PAUtagSOUNDSENTRYW@@@Z @ 0x1456F9 (-SetSoundSentry@@YGHPAU_UNICODE_STRING@@PAUtagSOUNDSENTRYW@@@Z.c)
 *     _UpdateWinIniInt@16 @ 0x145EB1 (_UpdateWinIniInt@16.c)
 *     ?ReadTabletButtonConfig@@YGJIQBGPAUtagTABLET_BUTTON_DESK_CONFIG@@@Z @ 0x146BAE (-ReadTabletButtonConfig@@YGJIQBGPAUtagTABLET_BUTTON_DESK_CONFIG@@@Z.c)
 *     ?ReadTabletButtonIndex@@YGJIPAK@Z @ 0x146DD6 (-ReadTabletButtonIndex@@YGJIPAK@Z.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x7F1AA (RtlStringVPrintfWorkerW.c)
 */

/*
 * Hex-Rays decompilation failed for ?RtlStringCchPrintfW@@YAJPAGIPBGZZ @ 0x7F16E
 * Reason: Hex-Rays returned no pseudocode for 0x7F16E
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000007F16E: mov     edi, edi
 * 000000000007F170: push    ebp; pszFormat
 * 000000000007F171: mov     ebp, esp
 * 000000000007F173: mov     eax, [ebp+arg_4]
 * 000000000007F176: xor     ecx, ecx
 * 000000000007F178: test    eax, eax
 * 000000000007F17A: jz      short loc_7F1A3
 * 000000000007F17C: cmp     eax, 7FFFFFFFh
 * 000000000007F181: ja      short loc_7F1A3
 * 000000000007F183: test    ecx, ecx
 * 000000000007F185: js      loc_1197DC
 * 000000000007F18B: lea     ecx, [ebp+pszDest]
 * 000000000007F18E: mov     edx, eax
 * 000000000007F190: push    ecx; pcchNewDestLength
 * 000000000007F191: push    [ebp+cchDest]; cchDest
 * 000000000007F194: push    ecx; pszDest
 * 000000000007F195: mov     ecx, [ebp+arg_0]
 * 000000000007F198: call    RtlStringVPrintfWorkerW
 * 000000000007F19D: mov     ecx, eax
 * 000000000007F19F: mov     eax, ecx
 * 000000000007F1A1: pop     ebp
 * 000000000007F1A2: retn
 * 000000000007F1A3: mov     ecx, 0C000000Dh
 * 000000000007F1A8: jmp     short loc_7F183
 * 00000000001197DC: test    eax, eax
 * 00000000001197DE: jz      loc_7F19F
 * 00000000001197E4: mov     eax, [ebp+arg_0]
 * 00000000001197E7: xor     edx, edx
 * 00000000001197E9: mov     [eax], dx
 * 00000000001197EC: jmp     loc_7F19F
 */
