/*
 * XREFs of _RtlProcessFlsData@8 @ 0x4B33D600
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlpFlsDataCleanup@@YGXPAU_RTLP_FLS_CONTEXT@@PAU_RTLP_FLS_DATA@@K@Z @ 0x4B2B4739 (-RtlpFlsDataCleanup@@YGXPAU_RTLP_FLS_CONTEXT@@PAU_RTLP_FLS_DATA@@K@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _RtlProcessFlsData@8 @ 0x4B33D600
 * Reason: Hex-Rays returned no pseudocode for 0x4B33D600
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B33D600: mov     edi, edi
 * 000000004B33D602: push    ebp; struct _RTLP_FLS_DATA *
 * 000000004B33D603: mov     ebp, esp
 * 000000004B33D605: push    [ebp+arg_4]; struct _RTLP_FLS_CONTEXT *
 * 000000004B33D608: mov     edx, [ebp+arg_0]
 * 000000004B33D60B: call    ?RtlpFlsDataCleanup@@YGXPAU_RTLP_FLS_CONTEXT@@PAU_RTLP_FLS_DATA@@K@Z; RtlpFlsDataCleanup(_RTLP_FLS_CONTEXT *,_RTLP_FLS_DATA *,ulong)
 * 000000004B33D610: pop     ebp
 * 000000004B33D611: retn    8
 */
