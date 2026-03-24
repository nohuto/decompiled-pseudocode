/*
 * XREFs of ?MultiUserGreCleanupAllFonts@@YGXXZ @ 0xCD5E0
 * Callers:
 *     _GdiMultiUserFontCleanup@0 @ 0xCD5AC (_GdiMultiUserFontCleanup@0.c)
 * Callees:
 *     ?bCleanupFontTable@@YGHPAPAVPFT@@@Z @ 0xCD626 (-bCleanupFontTable@@YGHPAPAVPFT@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?MultiUserGreCleanupAllFonts@@YGXXZ @ 0xCD5E0
 * Reason: Hex-Rays returned no pseudocode for 0xCD5E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000CD5E0: mov     ecx, ds:__imp_?gpPFTPrivate@@3PAVPFT@@A; PFT * gpPFTPrivate
 * 00000000000CD5E6: cmp     dword ptr [ecx], 0
 * 00000000000CD5E9: jnz     short loc_CD61F
 * 00000000000CD5EB: cmp     ?gpPFTPublic@@3PAVPFT@@A, 0; PFT * gpPFTPublic
 * 00000000000CD5F2: jz      short loc_CD5FE
 * 00000000000CD5F4: mov     ecx, offset ?gpPFTPublic@@3PAVPFT@@A; PFT * gpPFTPublic
 * 00000000000CD5F9: call    ?bCleanupFontTable@@YGHPAPAVPFT@@@Z; bCleanupFontTable(PFT * *)
 * 00000000000CD5FE: cmp     ?gpPFTDevice@@3PAVPFT@@A, 0; PFT * gpPFTDevice
 * 00000000000CD605: jz      short loc_CD611
 * 00000000000CD607: mov     ecx, offset ?gpPFTDevice@@3PAVPFT@@A; PFT * gpPFTDevice
 * 00000000000CD60C: call    ?bCleanupFontTable@@YGHPAPAVPFT@@@Z; bCleanupFontTable(PFT * *)
 * 00000000000CD611: cmp     _gpPrintKViewList, 0
 * 00000000000CD618: jnz     ?vCleanupPrintKViewList@@YGXXZ; vCleanupPrintKViewList(void)
 * 00000000000CD61E: retn
 * 00000000000CD61F: call    ?bCleanupFontTable@@YGHPAPAVPFT@@@Z; bCleanupFontTable(PFT * *)
 * 00000000000CD624: jmp     short loc_CD5EB
 */
