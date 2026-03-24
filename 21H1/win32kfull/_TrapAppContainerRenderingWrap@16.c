/*
 * XREFs of _TrapAppContainerRenderingWrap@16 @ 0x5A26C
 * Callers:
 *     ?TrapAppContainerRendering@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z @ 0xBDAFA (-TrapAppContainerRendering@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z.c)
 * Callees:
 *     ?TrapAppContainerRenderingWorker@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z @ 0x5A290 (-TrapAppContainerRenderingWorker@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _TrapAppContainerRenderingWrap@16 @ 0x5A26C
 * Reason: Hex-Rays returned no pseudocode for 0x5A26C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000005A26C: mov     edi, edi
 * 000000000005A26E: push    ebp; HSURF *
 * 000000000005A26F: mov     ebp, esp
 * 000000000005A271: push    [ebp+arg_C]; HSURF *
 * 000000000005A274: mov     edx, [ebp+arg_4]
 * 000000000005A277: push    [ebp+arg_8]; struct XDCOBJ *
 * 000000000005A27A: mov     ecx, [ebp+arg_0]
 * 000000000005A27D: call    ?TrapAppContainerRenderingWorker@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z; TrapAppContainerRenderingWorker(XDCOBJ &,HSURF__ * &,HSURF__ * &,ulong *)
 * 000000000005A282: xor     ecx, ecx
 * 000000000005A284: test    al, al
 * 000000000005A286: setnz   cl
 * 000000000005A289: mov     eax, ecx
 * 000000000005A28B: pop     ebp
 * 000000000005A28C: retn    10h
 */
