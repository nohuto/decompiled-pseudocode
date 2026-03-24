/*
 * XREFs of ?vSpCreateExMirror@@YGXPAUHDEV__@@@Z @ 0x1E11AC
 * Callers:
 *     ?bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_RECTL@@@Z @ 0x9F6DC (-bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_REC.c)
 *     ?pSpConvertSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@@Z @ 0x1DF031 (-pSpConvertSpriteFromMeta@@YGPAVSPRITE@@PAUHDEV__@@0PAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YGPAU_METASPRITE@@PAUHDEV__@@0PAVSPRITE@@@Z @ 0x1DF19D (-pSpConvertSpriteToMeta@@YGPAU_METASPRITE@@PAUHDEV__@@0PAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YGPAU_METASPRITE@@PAUHDEV__@@0PAU1@@Z @ 0x1DF57A (-pSpTransferMetaSprite@@YGPAU_METASPRITE@@PAUHDEV__@@0PAU1@@Z.c)
 *     ?pSpTransferSprite@@YGPAVSPRITE@@PAUHDEV__@@PAV1@@Z @ 0x1DF909 (-pSpTransferSprite@@YGPAVSPRITE@@PAUHDEV__@@PAV1@@Z.c)
 *     _GreDisableMirrorRendering@8 @ 0x1E359E (_GreDisableMirrorRendering@8.c)
 * Callees:
 *     ?psoSpCreateSurface@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@KJJH@Z @ 0xA135A (-psoSpCreateSurface@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@KJJH@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?vSpCreateExMirror@@YGXPAUHDEV__@@@Z @ 0x1E11AC
 * Reason: Hex-Rays returned no pseudocode for 0x1E11AC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000001E11AC: mov     edi, edi
 * 00000000001E11AE: push    esi; int
 * 00000000001E11AF: test    ecx, ecx
 * 00000000001E11B1: jz      short loc_1E11D8
 * 00000000001E11B3: lea     esi, [ecx+40h]
 * 00000000001E11B6: cmp     dword ptr [esi+334h], 0
 * 00000000001E11BD: jnz     short loc_1E11D8
 * 00000000001E11BF: mov     eax, [esi+10h]
 * 00000000001E11C2: xor     edx, edx
 * 00000000001E11C4: push    ecx; int
 * 00000000001E11C5: mov     ecx, esi
 * 00000000001E11C7: push    dword ptr [eax+14h]; unsigned int
 * 00000000001E11CA: push    dword ptr [eax+10h]; struct _SPRITESTATE *
 * 00000000001E11CD: call    ?psoSpCreateSurface@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@KJJH@Z; psoSpCreateSurface(_SPRITESTATE *,ulong,long,long,int)
 * 00000000001E11D2: mov     [esi+334h], eax
 * 00000000001E11D8: pop     esi
 * 00000000001E11D9: retn
 */
