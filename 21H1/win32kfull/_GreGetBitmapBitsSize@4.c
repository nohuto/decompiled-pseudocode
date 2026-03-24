/*
 * XREFs of _GreGetBitmapBitsSize@4 @ 0x76F1A
 * Callers:
 *     _NtGdiGetDIBitsInternal@36 @ 0x48D46 (_NtGdiGetDIBitsInternal@36.c)
 *     _NtGdiCreateDIBSection@36 @ 0x768A6 (_NtGdiCreateDIBSection@36.c)
 *     _NtGdiCreateSessionMappedDIBSection@32 @ 0xE0450 (_NtGdiCreateSessionMappedDIBSection@32.c)
 *     ?xxxDIBtoBMP@@YGPAUHBITMAP__@@PAUtagBITMAPINFOHEADER@@PAUHPALETTE__@@K@Z @ 0x182318 (-xxxDIBtoBMP@@YGPAUHBITMAP__@@PAUtagBITMAPINFOHEADER@@PAUHPALETTE__@@K@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAXPAK4PAH@Z @ 0x21B8CC (-GreIcmQueryBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAXPAK4PAH@Z.c)
 *     _NtGdiIcmBrushInfo@32 @ 0x21C455 (_NtGdiIcmBrushInfo@32.c)
 * Callees:
 *     ?noOverflowCJSCAN@@YGKKGGK@Z @ 0x76F58 (-noOverflowCJSCAN@@YGKKGGK@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _GreGetBitmapBitsSize@4 @ 0x76F1A
 * Reason: Hex-Rays returned no pseudocode for 0x76F1A
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000000076F1A: mov     edi, edi
 * 0000000000076F1C: push    esi; unsigned __int16
 * 0000000000076F1D: mov     esi, ecx
 * 0000000000076F1F: cmp     dword ptr [esi], 0Ch
 * 0000000000076F22: jz      loc_116E7F
 * 0000000000076F28: mov     eax, [esi+10h]
 * 0000000000076F2B: test    eax, eax
 * 0000000000076F2D: jnz     short loc_76F4E
 * 0000000000076F2F: mov     eax, [esi+8]
 * 0000000000076F32: test    eax, eax
 * 0000000000076F34: js      short loc_76F4A
 * 0000000000076F36: mov     dx, [esi+0Ch]
 * 0000000000076F3A: mov     ecx, [esi+4]
 * 0000000000076F3D: push    eax; unsigned __int16
 * 0000000000076F3E: movzx   eax, word ptr [esi+0Eh]
 * 0000000000076F42: push    eax; __int16
 * 0000000000076F43: call    ?noOverflowCJSCAN@@YGKKGGK@Z; noOverflowCJSCAN(ulong,ushort,ushort,ulong)
 * 0000000000076F48: pop     esi
 * 0000000000076F49: retn
 * 0000000000076F4A: neg     eax
 * 0000000000076F4C: jmp     short loc_76F36
 * 0000000000076F4E: cmp     eax, 3
 * 0000000000076F51: jz      short loc_76F2F
 * 0000000000076F53: jmp     loc_116E95
 * 0000000000116E7F: movzx   eax, word ptr [esi+6]
 * 0000000000116E83: movzx   ecx, word ptr [esi+4]
 * 0000000000116E87: mov     dx, [esi+8]
 * 0000000000116E8B: push    eax
 * 0000000000116E8C: movzx   eax, word ptr [esi+0Ah]
 * 0000000000116E90: jmp     loc_76F42
 * 0000000000116E95: cmp     eax, 0Ah
 * 0000000000116E98: jz      loc_76F2F
 * 0000000000116E9E: mov     eax, [esi+14h]
 * 0000000000116EA1: pop     esi
 * 0000000000116EA2: retn
 */
