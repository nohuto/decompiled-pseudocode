/*
 * XREFs of ?HandleLossOfPrimary@@YGHAAUtagPOINTER_INFO@@@Z @ 0x17D05C
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z @ 0x17D9D9 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?ResetMousePromotionInfo@@YGXGG@Z @ 0x17D5C0 (-ResetMousePromotionInfo@@YGXGG@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?HandleLossOfPrimary@@YGHAAUtagPOINTER_INFO@@@Z @ 0x17D05C
 * Reason: Hex-Rays returned no pseudocode for 0x17D05C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000017D05C: mov     edx, [ecx+0Ch]
 * 000000000017D05F: test    edx, 40004h
 * 000000000017D065: jz      short loc_17D096
 * 000000000017D067: test    edx, 10000h
 * 000000000017D06D: jnz     short loc_17D096
 * 000000000017D06F: mov     eax, offset loc_4A000
 * 000000000017D074: mov     [ecx+0Ch], eax
 * 000000000017D077: test    dl, 2
 * 000000000017D07A: jz      short loc_17D082
 * 000000000017D07C: add     eax, 2
 * 000000000017D07F: mov     [ecx+0Ch], eax
 * 000000000017D082: push    esi
 * 000000000017D083: mov     esi, 4000h
 * 000000000017D088: test    esi, edx
 * 000000000017D08A: jz      short loc_17D091
 * 000000000017D08C: or      eax, esi
 * 000000000017D08E: mov     [ecx+0Ch], eax
 * 000000000017D091: xor     eax, eax
 * 000000000017D093: inc     eax
 * 000000000017D094: pop     esi
 * 000000000017D095: retn
 * 000000000017D096: xor     ecx, ecx
 * 000000000017D098: call    ?ResetMousePromotionInfo@@YGXGG@Z; ResetMousePromotionInfo(ushort,ushort)
 * 000000000017D09D: xor     eax, eax
 * 000000000017D09F: retn
 */
