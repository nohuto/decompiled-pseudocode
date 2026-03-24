/*
 * XREFs of ?vSpDwmFlushSpriteClipRgnChange@@YGXPAVSFMLOGICALSURFACE@@@Z @ 0x25234
 * Callers:
 *     _GreUpdateSpriteClipRgn@16 @ 0x239F2 (_GreUpdateSpriteClipRgn@16.c)
 * Callees:
 *     ?bSpDwmNotifyDirty@@YGHPAUHSPRITE__@@PAVSFMLOGICALSURFACE@@K_K@Z @ 0x25270 (-bSpDwmNotifyDirty@@YGHPAUHSPRITE__@@PAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?uiCookie@SFMLOGICALSURFACE@@QBEIXZ @ 0xAA996 (-uiCookie@SFMLOGICALSURFACE@@QBEIXZ.c)
 */

/*
 * Hex-Rays decompilation failed for ?vSpDwmFlushSpriteClipRgnChange@@YGXPAVSFMLOGICALSURFACE@@@Z @ 0x25234
 * Reason: Hex-Rays returned no pseudocode for 0x25234
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000000025234: mov     edi, edi
 * 0000000000025236: push    esi; unsigned __int64
 * 0000000000025237: mov     esi, ecx
 * 0000000000025239: mov     eax, [esi+0A4h]
 * 000000000002523F: test    al, 20h
 * 0000000000025241: jz      short loc_2526D
 * 0000000000025243: test    al, 4
 * 0000000000025245: jz      short loc_25264
 * 0000000000025247: call    ?uiCookie@SFMLOGICALSURFACE@@QBEIXZ; SFMLOGICALSURFACE::uiCookie(void)
 * 000000000002524C: mov     ecx, [esi+0C4h]
 * 0000000000025252: mov     edx, esi
 * 0000000000025254: push    0; unsigned int
 * 0000000000025256: push    eax; struct SFMLOGICALSURFACE *
 * 0000000000025257: push    2; HSPRITE
 * 0000000000025259: call    ?bSpDwmNotifyDirty@@YGHPAUHSPRITE__@@PAVSFMLOGICALSURFACE@@K_K@Z; bSpDwmNotifyDirty(HSPRITE__ *,SFMLOGICALSURFACE *,ulong,unsigned __int64)
 * 000000000002525E: mov     eax, [esi+0A4h]
 * 0000000000025264: and     eax, 0FFFFFFDFh
 * 0000000000025267: mov     [esi+0A4h], eax
 * 000000000002526D: pop     esi
 * 000000000002526E: retn
 */
