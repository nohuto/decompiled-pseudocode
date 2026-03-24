/*
 * XREFs of IsNVMeControllerOnFatalError @ 0x1C000489C
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002270 (NVMeCompletionDpcRoutine.c)
 *     NVMeControllerReset @ 0x1C000D0A0 (NVMeControllerReset.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00160A0 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for IsNVMeControllerOnFatalError @ 0x1C000489C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000489C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000489C: sub     rsp, 48h
 * 00000001C00048A0: mov     rax, [rcx+98h]
 * 00000001C00048A7: mov     eax, [rax+1Ch]
 * 00000001C00048AA: mov     [rsp+48h+arg_0], eax
 * 00000001C00048AE: test    al, 2
 * 00000001C00048B0: jnz     loc_1C0008A28
 * 00000001C00048B6: xor     al, al
 * 00000001C00048B8: add     rsp, 48h
 * 00000001C00048BC: retn
 * 00000001C0008A28: mov     r9d, 7
 * 00000001C0008A2E: lea     rax, [rsp+48h+arg_0]
 * 00000001C0008A33: mov     [rsp+48h+var_18], rax
 * 00000001C0008A38: mov     rdx, rcx
 * 00000001C0008A3B: lea     rax, aControllerFata; "Controller Fatal Status is set"
 * 00000001C0008A42: mov     [rsp+48h+var_20], 4
 * 00000001C0008A4A: xor     r8d, r8d
 * 00000001C0008A4D: mov     [rsp+48h+var_28], rax
 * 00000001C0008A52: lea     ecx, [r9+5Bh]
 * 00000001C0008A56: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0008A5D: nop     dword ptr [rax+rax+00h]
 * 00000001C0008A62: mov     al, 1
 * 00000001C0008A64: jmp     loc_1C00048B8
 */
