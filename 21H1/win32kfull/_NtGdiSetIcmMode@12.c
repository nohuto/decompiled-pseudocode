/*
 * XREFs of _NtGdiSetIcmMode@12 @ 0x21C79C
 * Callers:
 *     <none>
 * Callees:
 *     ?GreSetICMMode@@YGHPAUHDC__@@KK@Z @ 0x21BB11 (-GreSetICMMode@@YGHPAUHDC__@@KK@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _NtGdiSetIcmMode@12 @ 0x21C79C
 * Reason: Hex-Rays returned no pseudocode for 0x21C79C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000021C79C: mov     edi, edi
 * 000000000021C79E: push    ebp; unsigned int
 * 000000000021C79F: mov     ebp, esp
 * 000000000021C7A1: push    [ebp+arg_8]; HDC
 * 000000000021C7A4: mov     edx, [ebp+arg_4]
 * 000000000021C7A7: mov     ecx, [ebp+arg_0]
 * 000000000021C7AA: call    ?GreSetICMMode@@YGHPAUHDC__@@KK@Z; GreSetICMMode(HDC__ *,ulong,ulong)
 * 000000000021C7AF: pop     ebp
 * 000000000021C7B0: retn    0Ch
 */
