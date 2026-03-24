/*
 * XREFs of ?vBrushPath8_8x8EnumRow@@YGXJPAU_ROW@@KPAX@Z @ 0x23A4E3
 * Callers:
 *     <none>
 * Callees:
 *     ?vPatCpyRow8_8x8@@YGXPAU_PATBLTFRAME@@JH@Z @ 0x22DE5B (-vPatCpyRow8_8x8@@YGXPAU_PATBLTFRAME@@JH@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?vBrushPath8_8x8EnumRow@@YGXJPAU_ROW@@KPAX@Z @ 0x23A4E3
 * Reason: Hex-Rays returned no pseudocode for 0x23A4E3
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000023A4E3: mov     edi, edi
 * 000000000023A4E5: push    ebp; int
 * 000000000023A4E6: mov     ebp, esp
 * 000000000023A4E8: mov     ecx, [ebp+arg_C]
 * 000000000023A4EB: mov     eax, [ebp+arg_4]
 * 000000000023A4EE: push    [ebp+arg_8]; struct _PATBLTFRAME *
 * 000000000023A4F1: mov     edx, [ebp+arg_0]
 * 000000000023A4F4: mov     [ecx+14h], eax
 * 000000000023A4F7: add     ecx, 4
 * 000000000023A4FA: call    ?vPatCpyRow8_8x8@@YGXPAU_PATBLTFRAME@@JH@Z; vPatCpyRow8_8x8(_PATBLTFRAME *,long,int)
 * 000000000023A4FF: pop     ebp
 * 000000000023A500: retn    10h
 */
