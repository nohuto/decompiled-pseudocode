/*
 * XREFs of IsNVMeControllerOnFatalError @ 0x1C00048A0
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002270 (NVMeCompletionDpcRoutine.c)
 *     NVMeControllerReset @ 0x1C000D088 (NVMeControllerReset.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0016120 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for IsNVMeControllerOnFatalError @ 0x1C00048A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00048A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00048A0: sub     rsp, 48h
 * 00000001C00048A4: mov     rax, [rcx+98h]
 * 00000001C00048AB: mov     eax, [rax+1Ch]
 * 00000001C00048AE: mov     [rsp+48h+arg_0], eax
 * 00000001C00048B2: test    al, 2
 * 00000001C00048B4: jnz     loc_1C0008A68
 * 00000001C00048BA: xor     al, al
 * 00000001C00048BC: add     rsp, 48h
 * 00000001C00048C0: retn
 * 00000001C0008A68: mov     r9d, 7
 * 00000001C0008A6E: lea     rax, [rsp+48h+arg_0]
 * 00000001C0008A73: mov     [rsp+48h+var_18], rax
 * 00000001C0008A78: mov     rdx, rcx
 * 00000001C0008A7B: lea     rax, aControllerFata; "Controller Fatal Status is set"
 * 00000001C0008A82: mov     [rsp+48h+var_20], 4
 * 00000001C0008A8A: xor     r8d, r8d
 * 00000001C0008A8D: mov     [rsp+48h+var_28], rax
 * 00000001C0008A92: lea     ecx, [r9+5Bh]
 * 00000001C0008A96: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0008A9D: nop     dword ptr [rax+rax+00h]
 * 00000001C0008AA2: mov     al, 1
 * 00000001C0008AA4: jmp     loc_1C00048BC
 */
