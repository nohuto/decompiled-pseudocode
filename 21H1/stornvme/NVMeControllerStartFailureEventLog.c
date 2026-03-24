/*
 * XREFs of NVMeControllerStartFailureEventLog @ 0x1C00091A4
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0009230 (NVMeHwFindAdapter.c)
 *     NVMeHwPassiveInitialize @ 0x1C00098D0 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerInitPart3 @ 0x1C000CA34 (NVMeControllerInitPart3.c)
 *     NVMeControllerPowerUp @ 0x1C000CDB8 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000D088 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0016C10 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     memset @ 0x1C0005500 (memset.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerStartFailureEventLog @ 0x1C00091A4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00091A4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00091A4: mov     [rsp-8+arg_8], rbx
 * 00000001C00091A9: push    rbp
 * 00000001C00091AA: mov     rbp, rsp
 * 00000001C00091AD: sub     rsp, 70h
 * 00000001C00091B1: xor     edx, edx; Val
 * 00000001C00091B3: mov     rbx, rcx
 * 00000001C00091B6: lea     rcx, [rbp+var_50]; void *
 * 00000001C00091BA: lea     r8d, [rdx+48h]; Size
 * 00000001C00091BE: call    memset
 * 00000001C00091C3: and     [rbp+var_44], 0
 * 00000001C00091C7: lea     rax, [rbx+1Ch]
 * 00000001C00091CB: lea     r9, [rbp+arg_0]
 * 00000001C00091CF: mov     [rbp+var_20], rax
 * 00000001C00091D3: lea     r8, [rbp+var_50]
 * 00000001C00091D7: mov     [rbp+arg_0], 48h ; 'H'
 * 00000001C00091DE: mov     rdx, rbx
 * 00000001C00091E1: mov     [rbp+var_50], 100h
 * 00000001C00091E8: mov     ecx, 10h
 * 00000001C00091ED: mov     [rbp+var_34], 1
 * 00000001C00091F1: mov     [rbp+var_30], 6
 * 00000001C00091F8: mov     [rbp+var_2C], 2
 * 00000001C00091FF: mov     [rbp+var_28], 4
 * 00000001C0009206: mov     [rbp+var_4C], 48h ; 'H'
 * 00000001C000920D: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009214: nop     dword ptr [rax+rax+00h]
 * 00000001C0009219: mov     rbx, [rsp+70h+arg_8]
 * 00000001C0009221: add     rsp, 70h
 * 00000001C0009225: pop     rbp
 * 00000001C0009226: retn
 */
