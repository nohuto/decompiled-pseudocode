/*
 * XREFs of NVMeControllerAsyncResetWorker @ 0x1C000C0D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005200 (_guard_dispatch_icall_nop.c)
 *     NVMeControllerReset @ 0x1C000D088 (NVMeControllerReset.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerAsyncResetWorker @ 0x1C000C0D0
 * Reason: Hex-Rays returned no pseudocode for 0x1C000C0D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000C0D0: mov     [rsp+arg_0], rbx
 * 00000001C000C0D5: mov     [rsp+arg_8], rbp
 * 00000001C000C0DA: mov     [rsp+arg_10], rsi
 * 00000001C000C0DF: push    rdi
 * 00000001C000C0E0: sub     rsp, 20h
 * 00000001C000C0E4: mov     rdi, rdx
 * 00000001C000C0E7: mov     rbx, rcx
 * 00000001C000C0EA: lea     rdx, aStornvmeAsyncC_2; "StorNVMe - Async Controller Reset START"...
 * 00000001C000C0F1: mov     ecx, 3
 * 00000001C000C0F6: mov     rsi, r8
 * 00000001C000C0F9: call    cs:__imp_StorPortDebugPrint
 * 00000001C000C100: nop     dword ptr [rax+rax+00h]
 * 00000001C000C105: mov     dl, [rdi]
 * 00000001C000C107: mov     rcx, rbx; int
 * 00000001C000C10A: call    NVMeControllerReset
 * 00000001C000C10F: cmp     qword ptr [rdi+8], 0
 * 00000001C000C114: mov     bpl, al
 * 00000001C000C117: jz      short loc_1C000C15D
 * 00000001C000C119: lea     rdx, aStornvmeAsyncC_3; "StorNVMe - Async Controller Reset Callb"...
 * 00000001C000C120: mov     ecx, 3
 * 00000001C000C125: call    cs:__imp_StorPortDebugPrint
 * 00000001C000C12C: nop     dword ptr [rax+rax+00h]
 * 00000001C000C131: mov     rax, [rdi+8]
 * 00000001C000C135: mov     dl, bpl
 * 00000001C000C138: mov     r8, [rdi+10h]
 * 00000001C000C13C: mov     rcx, rbx
 * 00000001C000C13F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000C145: lea     rdx, aStornvmeAsyncC_1; "StorNVMe - Async Controller Reset Callb"...
 * 00000001C000C14C: mov     ecx, 3
 * 00000001C000C151: call    cs:__imp_StorPortDebugPrint
 * 00000001C000C158: nop     dword ptr [rax+rax+00h]
 * 00000001C000C15D: mov     r8, rdi
 * 00000001C000C160: mov     rdx, rbx
 * 00000001C000C163: mov     ecx, 1
 * 00000001C000C168: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000C16F: nop     dword ptr [rax+rax+00h]
 * 00000001C000C174: test    rsi, rsi
 * 00000001C000C177: jz      short loc_1C000C190
 * 00000001C000C179: mov     r8, rsi
 * 00000001C000C17C: mov     rdx, rbx
 * 00000001C000C17F: mov     ecx, 1Fh
 * 00000001C000C184: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000C18B: nop     dword ptr [rax+rax+00h]
 * 00000001C000C190: lea     rdx, aStornvmeAsyncC_4; "StorNVMe - Async Controller Reset END\n"
 * 00000001C000C197: mov     ecx, 3
 * 00000001C000C19C: call    cs:__imp_StorPortDebugPrint
 * 00000001C000C1A3: nop     dword ptr [rax+rax+00h]
 * 00000001C000C1A8: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000C1AD: mov     rbp, [rsp+28h+arg_8]
 * 00000001C000C1B2: mov     rsi, [rsp+28h+arg_10]
 * 00000001C000C1B7: add     rsp, 20h
 * 00000001C000C1BB: pop     rdi
 * 00000001C000C1BC: retn
 */
