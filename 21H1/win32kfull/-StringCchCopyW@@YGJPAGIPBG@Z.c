/*
 * XREFs of ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x8A554
 * Callers:
 *     ?vLookupScript@@YGXKPAGK@Z @ 0x89F72 (-vLookupScript@@YGXKPAGK@Z.c)
 *     _cjIFIMetricsToOTMW@24 @ 0x89FBE (_cjIFIMetricsToOTMW@24.c)
 *     bUnloadEudcFont @ 0xCD8F6 (bUnloadEudcFont.c)
 *     ?FinishStockFontInitInternal@@YGXPBGH@Z @ 0xDBCEC (-FinishStockFontInitInternal@@YGXPBGH@Z.c)
 *     bAddFlEntry @ 0xDCD78 (bAddFlEntry.c)
 *     ?bAppendSysDirectory@@YGHPAGPBGI@Z @ 0xDD06C (-bAppendSysDirectory@@YGHPAGPBGI@Z.c)
 *     vProcessEntry @ 0xE2E66 (vProcessEntry.c)
 *     ?LoadModuleWorkHorse@@YGPAXPAGH@Z @ 0x1E888C (-LoadModuleWorkHorse@@YGPAXPAGH@Z.c)
 *     _FontAssocDefaultRoutine@24 @ 0x1F78F7 (_FontAssocDefaultRoutine@24.c)
 *     ?FindDefaultLinkedFontEntry@@YGHPBG0@Z @ 0x1F7A45 (-FindDefaultLinkedFontEntry@@YGHPBG0@Z.c)
 *     bDeleteFlEntry @ 0x1F84B8 (bDeleteFlEntry.c)
 *     _InitializeDefaultFamilyFonts@0 @ 0x2926EC (_InitializeDefaultFamilyFonts@0.c)
 *     _DefaultFontQueryRoutine@24 @ 0x292CD0 (_DefaultFontQueryRoutine@24.c)
 * Callees:
 *     StringCopyWorkerW @ 0x8A584 (StringCopyWorkerW.c)
 */

/*
 * Hex-Rays decompilation failed for ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x8A554
 * Reason: Hex-Rays returned no pseudocode for 0x8A554
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000008A554: mov     edi, edi
 * 000000000008A556: push    ebp; pszSrc
 * 000000000008A557: mov     ebp, esp
 * 000000000008A559: xor     eax, eax
 * 000000000008A55B: test    edx, edx
 * 000000000008A55D: jz      short loc_8A57D
 * 000000000008A55F: cmp     edx, 7FFFFFFFh
 * 000000000008A565: ja      short loc_8A57D
 * 000000000008A567: test    eax, eax
 * 000000000008A569: js      loc_11D221
 * 000000000008A56F: push    ecx; pcchNewDestLength
 * 000000000008A570: push    [ebp+cchDest]; cchDest
 * 000000000008A573: push    ecx; pszDest
 * 000000000008A574: call    StringCopyWorkerW
 * 000000000008A579: pop     ebp
 * 000000000008A57A: retn    4
 * 000000000008A57D: mov     eax, 80070057h
 * 000000000008A582: jmp     short loc_8A567
 * 000000000011D221: test    edx, edx
 * 000000000011D223: jz      loc_8A579
 * 000000000011D229: xor     edx, edx
 * 000000000011D22B: mov     [ecx], dx
 * 000000000011D22E: jmp     loc_8A579
 */
