/*
 * XREFs of _EngNineGrid@36 @ 0x503DE
 * Callers:
 *     ?EngNineGridHelper@@YGHAAVXDCOBJ@@PAVPALETTE@@1PAU_SURFOBJ@@2PAU_RECTL@@3PAU_MARGINS@@@Z @ 0x1DA746 (-EngNineGridHelper@@YGHAAVXDCOBJ@@PAVPALETTE@@1PAU_SURFOBJ@@2PAU_RECTL@@3PAU_MARGINS@@@Z.c)
 *     ?BmpDevNineGrid@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAUNINEGRID@@PAU_BLENDOBJ@@PAX@Z @ 0x1F9F3D (-BmpDevNineGrid@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAUNINEGRID@@PAU_BLENDO.c)
 *     ?RedirNineGrid@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAUNINEGRID@@PAU_BLENDOBJ@@PAX@Z @ 0x1FB819 (-RedirNineGrid@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAUNINEGRID@@PAU_BLENDOB.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for _EngNineGrid@36 @ 0x503DE
 * Reason: Hex-Rays returned no pseudocode for 0x503DE
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000503DE: mov     edi, edi
 * 00000000000503E0: push    ebp
 * 00000000000503E1: mov     ebp, esp
 * 00000000000503E3: and     esp, 0FFFFFFF8h
 * 00000000000503E6: sub     esp, 44h
 * 00000000000503E9: mov     eax, ___security_cookie
 * 00000000000503EE: xor     eax, esp
 * 00000000000503F0: mov     [esp+44h+var_4], eax
 * 00000000000503F4: mov     eax, [ebp+arg_C]
 * 00000000000503F7: mov     edx, [ebp+arg_4]
 * 00000000000503FA: mov     ecx, [ebp+arg_1C]
 * 00000000000503FD: mov     [esp+44h+var_38], eax
 * 0000000000050401: mov     eax, [ebp+arg_10]
 * 0000000000050404: push    ebx
 * 0000000000050405: mov     ebx, [ebp+arg_8]
 * 0000000000050408: mov     [esp+48h+var_3C], eax
 * 000000000005040C: mov     eax, [ebp+arg_14]
 * 000000000005040F: push    esi
 * 0000000000050410: mov     esi, [ebp+arg_18]
 * 0000000000050413: mov     [esp+4Ch+var_40], eax
 * 0000000000050417: xor     eax, eax
 * 0000000000050419: push    edi
 * 000000000005041A: mov     edi, [ebp+arg_0]
 * 000000000005041D: mov     [esp+50h+var_34], eax
 * 0000000000050421: cmp     [edx+30h], ax
 * 0000000000050425: jnz     short loc_5049B
 * 0000000000050427: cmp     dword ptr [edx+2Ch], 6
 * 000000000005042B: jnz     short loc_5049B
 * 000000000005042D: mov     [esp+50h+var_20], eax
 * 0000000000050431: mov     eax, [ecx]
 * 0000000000050433: mov     [esp+50h+var_2C], eax
 * 0000000000050437: mov     eax, [esi+14h]
 * 000000000005043A: mov     [esp+50h+var_30], eax
 * 000000000005043E: xor     eax, eax
 * 0000000000050440: mov     [esp+50h+var_28], eax
 * 0000000000050444: mov     [esp+50h+var_24], eax
 * 0000000000050448: mov     [esp+50h+var_8], eax
 * 000000000005044C: mov     [esp+50h+var_C], eax
 * 0000000000050450: mov     eax, [ecx+0Ch]
 * 0000000000050453: mov     [esp+50h+var_10], eax
 * 0000000000050457: mov     eax, [ecx+8]
 * 000000000005045A: mov     [esp+50h+var_14], eax
 * 000000000005045E: mov     eax, [ecx+4]
 * 0000000000050461: mov     ecx, edi
 * 0000000000050463: mov     [esp+50h+var_18], eax
 * 0000000000050467: lea     eax, [esp+50h+var_34]
 * 000000000005046B: push    eax
 * 000000000005046C: push    esi
 * 000000000005046D: push    [esp+58h+var_40]
 * 0000000000050471: mov     [esp+5Ch+var_1C], offset ?gptlZero@@3U_POINTL@@A; _POINTL gptlZero
 * 0000000000050479: push    [esp+5Ch+var_3C]
 * 000000000005047D: push    [esp+60h+var_38]
 * 000000000005049B: push    57h ; 'W'; iError
 * 000000000005049D: call    ds:__imp__EngSetLastError@4; EngSetLastError(x)
 * 00000000000504A3: xor     eax, eax
 * 00000000000504A5: jmp     short loc_50487
 */
