/*
 * XREFs of ?xxxCreateTooltip@@YGHPAUtagTOOLTIPWND@@PAG@Z @ 0x1A0A7C
 * Callers:
 *     _xxxTrackMouseMove@12 @ 0x129D6 (_xxxTrackMouseMove@12.c)
 * Callees:
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     ?SetTooltipTimer@@YGXPAUtagTOOLTIPWND@@II@Z @ 0x1A08F8 (-SetTooltipTimer@@YGXPAUtagTOOLTIPWND@@II@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?xxxCreateTooltip@@YGHPAUtagTOOLTIPWND@@PAG@Z @ 0x1A0A7C
 * Reason: Hex-Rays returned no pseudocode for 0x1A0A7C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000001A0A7C: mov     edi, edi
 * 00000000001A0A7E: push    esi; unsigned int
 * 00000000001A0A7F: mov     esi, ecx
 * 00000000001A0A81: mov     ecx, [esi]
 * 00000000001A0A83: mov     [esi+24h], edx
 * 00000000001A0A86: xor     edx, edx
 * 00000000001A0A88: mov     eax, [ecx+14h]
 * 00000000001A0A8B: test    byte ptr [eax+17h], 10h
 * 00000000001A0A8F: jz      short loc_1A0AA9
 * 00000000001A0A91: push    497h
 * 00000000001A0A96: xor     eax, eax
 * 00000000001A0A98: push    eax
 * 00000000001A0A99: push    eax
 * 00000000001A0A9A: push    eax
 * 00000000001A0A9B: push    eax
 * 00000000001A0A9C: call    _xxxSetWindowPos@28; xxxSetWindowPos(x,x,x,x,x,x,x)
 * 00000000001A0AA1: mov     ecx, esi
 * 00000000001A0AA3: pop     esi
 * 00000000001A0AA4: jmp     ?xxxShowTooltip@@YGHPAUtagTOOLTIPWND@@@Z; xxxShowTooltip(tagTOOLTIPWND *)
 * 00000000001A0AA9: push    dword ptr [esi+4]; struct tagTOOLTIPWND *
 * 00000000001A0AAC: inc     edx
 * 00000000001A0AAD: mov     ecx, esi
 * 00000000001A0AAF: call    ?SetTooltipTimer@@YGXPAUtagTOOLTIPWND@@II@Z; SetTooltipTimer(tagTOOLTIPWND *,uint,uint)
 * 00000000001A0AB4: xor     eax, eax
 * 00000000001A0AB6: inc     eax
 * 00000000001A0AB7: pop     esi
 * 00000000001A0AB8: retn
 */
