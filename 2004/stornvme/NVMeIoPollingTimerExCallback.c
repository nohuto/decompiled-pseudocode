/*
 * XREFs of NVMeIoPollingTimerExCallback @ 0x1C00186B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeIoPollingTimerExCallback @ 0x1C00186B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00186B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00186B0: push    rbx
 * 00000001C00186B2: sub     rsp, 30h
 * 00000001C00186B6: and     [rsp+38h+arg_8], 0
 * 00000001C00186BB: lea     r8, [rsp+38h+arg_8]
 * 00000001C00186C0: mov     rbx, rdx
 * 00000001C00186C3: mov     ecx, 5Ch ; '\'
 * 00000001C00186C8: mov     rdx, [rdx]
 * 00000001C00186CB: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00186D2: nop     dword ptr [rax+rax+00h]
 * 00000001C00186D7: mov     r8, [rbx+8]
 * 00000001C00186DB: lea     rax, [rsp+38h+arg_10]
 * 00000001C00186E0: and     [rsp+38h+arg_10], 0
 * 00000001C00186E5: add     r8, 0D8h
 * 00000001C00186EC: mov     r9d, [rsp+38h+arg_8]
 * 00000001C00186F1: mov     ecx, 1002h
 * 00000001C00186F6: mov     rdx, [rbx]
 * 00000001C00186F9: mov     [rsp+38h+var_10], rax
 * 00000001C00186FE: and     [rsp+38h+var_18], 0
 * 00000001C0018704: call    cs:__imp_StorPortNotification
 * 00000001C001870B: nop     dword ptr [rax+rax+00h]
 * 00000001C0018710: add     rsp, 30h
 * 00000001C0018714: pop     rbx
 * 00000001C0018715: retn
 */
