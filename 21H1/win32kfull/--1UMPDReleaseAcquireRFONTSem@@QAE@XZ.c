/*
 * XREFs of ??1UMPDReleaseAcquireRFONTSem@@QAE@XZ @ 0xF6F23
 * Callers:
 *     _EngTextOut@40 @ 0x54580 (_EngTextOut@40.c)
 *     ??1FRINGERECT@@QAE@XZ @ 0x55340 (--1FRINGERECT@@QAE@XZ.c)
 *     ?vExpandAndCopyText@@YGXPAVSURFACE@@PAU_FONTOBJ@@PAU_GLYPHPOS@@KPAEKK00PAU_RECTL@@4HHK44KPAU_BRUSHOBJ@@PAU_POINTL@@@Z @ 0x553A0 (-vExpandAndCopyText@@YGXPAVSURFACE@@PAU_FONTOBJ@@PAU_GLYPHPOS@@KPAEKK00PAU_RECTL@@4HHK44KPAU_BRU.c)
 *     ?EngTextOutBitBlt@@YGXPAVSURFACE@@PAU_FONTOBJ@@KPAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@6PAU_BRUSHOBJ@@6K@Z @ 0x1EFC42 (-EngTextOutBitBlt@@YGXPAVSURFACE@@PAU_FONTOBJ@@KPAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_REC.c)
 * Callees:
 *     ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z @ 0x210A97 (-UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ??1UMPDReleaseAcquireRFONTSem@@QAE@XZ @ 0xF6F23
 * Reason: Hex-Rays returned no pseudocode for 0xF6F23
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000F6F23: mov     edi, edi
 * 00000000000F6F25: push    esi; unsigned int
 * 00000000000F6F26: mov     esi, ecx
 * 00000000000F6F28: cmp     dword ptr [esi], 0
 * 00000000000F6F2B: jz      short loc_F6F55
 * 00000000000F6F2D: push    dword ptr [esi+34h]; unsigned int
 * 00000000000F6F30: lea     ecx, [esi+3Ch]
 * 00000000000F6F33: xor     edx, edx
 * 00000000000F6F35: push    dword ptr [esi+8]; struct UMPDOBJ *
 * 00000000000F6F38: push    dword ptr [esi+4]; struct RFONTOBJ *
 * 00000000000F6F3B: call    ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z; UMPDAcquireRFONTSem(RFONTOBJ &,UMPDOBJ *,ulong,ulong,int const *)
 * 00000000000F6F40: mov     ecx, [esi+34h]
 * 00000000000F6F43: test    ecx, ecx
 * 00000000000F6F45: jz      short loc_F6F55
 * 00000000000F6F47: lea     eax, [esi+0Ch]
 * 00000000000F6F4A: cmp     ecx, eax
 * 00000000000F6F4C: jz      short loc_F6F55
 * 00000000000F6F4E: push    ecx
 * 00000000000F6F4F: call    ds:__imp__Win32FreePool@4; Win32FreePool(x)
 * 00000000000F6F55: lea     ecx, [esi+3Ch]; this
 * 00000000000F6F58: and     dword ptr [ecx], 0
 * 00000000000F6F5B: pop     esi
 * 00000000000F6F5C: jmp     ??1RFONTOBJ@@QAE@XZ; RFONTOBJ::~RFONTOBJ(void)
 */
