/*
 * XREFs of NVMeControllerAsyncResetWorker @ 0x1C000C080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00051D0 (_guard_dispatch_icall_nop.c)
 *     NVMeControllerReset @ 0x1C000D0A0 (NVMeControllerReset.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerAsyncResetWorker @ 0x1C000C080
 * Reason: Hex-Rays returned no pseudocode for 0x1C000C080
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000C080: mov     [rsp+arg_0], rbx
 * 00000001C000C085: mov     [rsp+arg_8], rbp
 * 00000001C000C08A: mov     [rsp+arg_10], rsi
 * 00000001C000C08F: push    rdi
 * 00000001C000C090: sub     rsp, 20h
 * 00000001C000C094: mov     rdi, rdx
 * 00000001C000C097: mov     rbx, rcx
 * 00000001C000C09A: lea     rdx, aStornvmeAsyncC_2; "StorNVMe - Async Controller Reset START"...
 * 00000001C000C0A1: mov     ecx, 3
 * 00000001C000C0A6: mov     rsi, r8
 * 00000001C000C0A9: call    cs:__imp_StorPortDebugPrint
 * 00000001C000C0B0: nop     dword ptr [rax+rax+00h]
 * 00000001C000C0B5: mov     dl, [rdi]
 * 00000001C000C0B7: mov     rcx, rbx; int
 * 00000001C000C0BA: call    NVMeControllerReset
 * 00000001C000C0BF: cmp     qword ptr [rdi+8], 0
 * 00000001C000C0C4: mov     bpl, al
 * 00000001C000C0C7: jz      short loc_1C000C10D
 * 00000001C000C0C9: lea     rdx, aStornvmeAsyncC_3; "StorNVMe - Async Controller Reset Callb"...
 * 00000001C000C0D0: mov     ecx, 3
 * 00000001C000C0D5: call    cs:__imp_StorPortDebugPrint
 * 00000001C000C0DC: nop     dword ptr [rax+rax+00h]
 * 00000001C000C0E1: mov     rax, [rdi+8]
 * 00000001C000C0E5: mov     dl, bpl
 * 00000001C000C0E8: mov     r8, [rdi+10h]
 * 00000001C000C0EC: mov     rcx, rbx
 * 00000001C000C0EF: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000C0F5: lea     rdx, aStornvmeAsyncC_1; "StorNVMe - Async Controller Reset Callb"...
 * 00000001C000C0FC: mov     ecx, 3
 * 00000001C000C101: call    cs:__imp_StorPortDebugPrint
 * 00000001C000C108: nop     dword ptr [rax+rax+00h]
 * 00000001C000C10D: mov     r8, rdi
 * 00000001C000C110: mov     rdx, rbx
 * 00000001C000C113: mov     ecx, 1
 * 00000001C000C118: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000C11F: nop     dword ptr [rax+rax+00h]
 * 00000001C000C124: test    rsi, rsi
 * 00000001C000C127: jz      short loc_1C000C140
 * 00000001C000C129: mov     r8, rsi
 * 00000001C000C12C: mov     rdx, rbx
 * 00000001C000C12F: mov     ecx, 1Fh
 * 00000001C000C134: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000C13B: nop     dword ptr [rax+rax+00h]
 * 00000001C000C140: lea     rdx, aStornvmeAsyncC_4; "StorNVMe - Async Controller Reset END\n"
 * 00000001C000C147: mov     ecx, 3
 * 00000001C000C14C: call    cs:__imp_StorPortDebugPrint
 * 00000001C000C153: nop     dword ptr [rax+rax+00h]
 * 00000001C000C158: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000C15D: mov     rbp, [rsp+28h+arg_8]
 * 00000001C000C162: mov     rsi, [rsp+28h+arg_10]
 * 00000001C000C167: add     rsp, 20h
 * 00000001C000C16B: pop     rdi
 * 00000001C000C16C: retn
 */
