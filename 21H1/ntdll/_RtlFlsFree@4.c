/*
 * XREFs of _RtlFlsFree@4 @ 0x4B2E8790
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlpFlsFree@@YGJPAU_RTLP_FLS_CONTEXT@@K@Z @ 0x4B2E87A1 (-RtlpFlsFree@@YGJPAU_RTLP_FLS_CONTEXT@@K@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _RtlFlsFree@4 @ 0x4B2E8790
 * Reason: Hex-Rays returned no pseudocode for 0x4B2E8790
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2E8790: mov     edi, edi
 * 000000004B2E8792: push    ebp; struct _RTLP_FLS_CONTEXT *
 * 000000004B2E8793: mov     ebp, esp
 * 000000004B2E8795: mov     edx, [ebp+FlsIndex]
 * 000000004B2E8798: call    ?RtlpFlsFree@@YGJPAU_RTLP_FLS_CONTEXT@@K@Z; RtlpFlsFree(_RTLP_FLS_CONTEXT *,ulong)
 * 000000004B2E879D: pop     ebp
 * 000000004B2E879E: retn    4
 */
