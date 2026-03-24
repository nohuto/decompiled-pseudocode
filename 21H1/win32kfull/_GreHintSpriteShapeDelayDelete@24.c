/*
 * XREFs of _GreHintSpriteShapeDelayDelete@24 @ 0x1CE666
 * Callers:
 *     ?vClearRendering@DC@@QAEXXZ @ 0x5FB80 (-vClearRendering@DC@@QAEXXZ.c)
 * Callees:
 *     _GreHintSpriteShape@28 @ 0x23FC0 (_GreHintSpriteShape@28.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@H@Z @ 0x1DAA49 (-GdiHintSpriteShapeDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@H@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _GreHintSpriteShapeDelayDelete@24 @ 0x1CE666
 * Reason: Hex-Rays returned no pseudocode for 0x1CE666
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000001CE666: mov     edi, edi
 * 00000000001CE668: push    ebp; HBITMAP
 * 00000000001CE669: mov     ebp, esp
 * 00000000001CE66B: cmp     [ebp+arg_C], 0
 * 00000000001CE66F: jz      short loc_1CE690
 * 00000000001CE671: mov     eax, ds:__imp_?g_pDwmState@@3PAUDwmState@@A; DwmState * g_pDwmState
 * 00000000001CE676: cmp     dword ptr [eax], 0
 * 00000000001CE679: jz      short loc_1CE690
 * 00000000001CE67B: push    0
 * 00000000001CE67D: push    [ebp+arg_C]
 * 00000000001CE680: push    [ebp+arg_8]
 * 00000000001CE683: push    [ebp+arg_4]
 * 00000000001CE686: push    [ebp+arg_0]
 * 00000000001CE689: call    _GreHintSpriteShape@28; GreHintSpriteShape(x,x,x,x,x,x,x)
 * 00000000001CE68E: jmp     short loc_1CE699
 * 00000000001CE690: push    ecx; HWND
 * 00000000001CE691: push    [ebp+arg_0]; HDEV
 * 00000000001CE694: call    ?GdiHintSpriteShapeDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@H@Z; GdiHintSpriteShapeDelayDelete(HDEV__ *,HWND__ *,HBITMAP__ *,int)
 * 00000000001CE699: pop     ebp
 * 00000000001CE69A: retn    10h
 */
