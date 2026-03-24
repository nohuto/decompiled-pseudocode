/*
 * XREFs of _NtGdiAbortDoc@4 @ 0x1D907F
 * Callers:
 *     <none>
 * Callees:
 *     ?bEndDocInternal@@YGHPAUHDC__@@KG@Z @ 0xF6AD2 (-bEndDocInternal@@YGHPAUHDC__@@KG@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _NtGdiAbortDoc@4 @ 0x1D907F
 * Reason: Hex-Rays returned no pseudocode for 0x1D907F
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000001D907F: mov     edi, edi
 * 00000000001D9081: push    ebp; unsigned int
 * 00000000001D9082: mov     ebp, esp
 * 00000000001D9084: mov     ecx, [ebp+arg_0]
 * 00000000001D9087: xor     edx, edx
 * 00000000001D9089: inc     edx
 * 00000000001D908A: push    edx; HDC
 * 00000000001D908B: call    ?bEndDocInternal@@YGHPAUHDC__@@KG@Z; bEndDocInternal(HDC__ *,ulong,ushort)
 * 00000000001D9090: pop     ebp
 * 00000000001D9091: retn    4
 */
