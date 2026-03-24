/*
 * XREFs of ?vBrushPath4_8x8EnumRow@@YGXJPAU_ROW@@KPAX@Z @ 0x23A4A5
 * Callers:
 *     <none>
 * Callees:
 *     ?vPatCpyRow4_8x8@@YGXPAU_PATBLTFRAME@@JH@Z @ 0x22DACA (-vPatCpyRow4_8x8@@YGXPAU_PATBLTFRAME@@JH@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?vBrushPath4_8x8EnumRow@@YGXJPAU_ROW@@KPAX@Z @ 0x23A4A5
 * Reason: Hex-Rays returned no pseudocode for 0x23A4A5
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000023A4A5: mov     edi, edi
 * 000000000023A4A7: push    ebp; int
 * 000000000023A4A8: mov     ebp, esp
 * 000000000023A4AA: mov     ecx, [ebp+arg_C]
 * 000000000023A4AD: mov     eax, [ebp+arg_4]
 * 000000000023A4B0: push    [ebp+arg_8]; struct _PATBLTFRAME *
 * 000000000023A4B3: mov     edx, [ebp+arg_0]
 * 000000000023A4B6: mov     [ecx+14h], eax
 * 000000000023A4B9: add     ecx, 4
 * 000000000023A4BC: call    ?vPatCpyRow4_8x8@@YGXPAU_PATBLTFRAME@@JH@Z; vPatCpyRow4_8x8(_PATBLTFRAME *,long,int)
 * 000000000023A4C1: pop     ebp
 * 000000000023A4C2: retn    10h
 */
