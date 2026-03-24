/*
 * XREFs of _DwmNotifyChildrenAddRemove@8 @ 0xE1756
 * Callers:
 *     _xxxDwmStopRedirection@4 @ 0xCEE26 (_xxxDwmStopRedirection@4.c)
 *     _zzzDwmStartRedirection@0 @ 0xE08D6 (_zzzDwmStartRedirection@0.c)
 * Callees:
 *     ?DwmNotifyChildrenLinkUnlink@@YGHPBUtagDESKTOP@@H@Z @ 0xE1784 (-DwmNotifyChildrenLinkUnlink@@YGHPBUtagDESKTOP@@H@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z @ 0xE1968 (-DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _DwmNotifyChildrenAddRemove@8 @ 0xE1756
 * Reason: Hex-Rays returned no pseudocode for 0xE1756
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000E1756: mov     edi, edi
 * 00000000000E1758: push    esi; struct tagDESKTOP *
 * 00000000000E1759: mov     esi, ecx
 * 00000000000E175B: test    edx, edx
 * 00000000000E175D: jz      short loc_E1772
 * 00000000000E175F: xor     edx, edx
 * 00000000000E1761: inc     edx
 * 00000000000E1762: call    ?DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z; DwmNotifyChildrenCreateDestroy(tagDESKTOP const *,int)
 * 00000000000E1767: xor     edx, edx
 * 00000000000E1769: mov     ecx, esi
 * 00000000000E176B: inc     edx
 * 00000000000E176C: pop     esi
 * 00000000000E176D: jmp     ?DwmNotifyChildrenLinkUnlink@@YGHPBUtagDESKTOP@@H@Z; DwmNotifyChildrenLinkUnlink(tagDESKTOP const *,int)
 * 00000000000E1772: xor     edx, edx
 * 00000000000E1774: call    ?DwmNotifyChildrenLinkUnlink@@YGHPBUtagDESKTOP@@H@Z; DwmNotifyChildrenLinkUnlink(tagDESKTOP const *,int)
 * 00000000000E1779: xor     edx, edx
 * 00000000000E177B: mov     ecx, esi
 * 00000000000E177D: pop     esi
 * 00000000000E177E: jmp     ?DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z; DwmNotifyChildrenCreateDestroy(tagDESKTOP const *,int)
 */
