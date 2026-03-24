/*
 * XREFs of NVMeCancelAllCompletionQueueDpc @ 0x1C000BBC8
 * Callers:
 *     NVMeControllerReset @ 0x1C000D0A0 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0016B90 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeCancelAllCompletionQueueDpc @ 0x1C000BBC8
 * Reason: Hex-Rays returned no pseudocode for 0x1C000BBC8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000BBC8: mov     [rsp+arg_0], rbx
 * 00000001C000BBCD: mov     [rsp+arg_8], dl
 * 00000001C000BBD1: push    rdi
 * 00000001C000BBD2: sub     rsp, 20h
 * 00000001C000BBD6: mov     rdi, rcx
 * 00000001C000BBD9: xor     ecx, ecx
 * 00000001C000BBDB: mov     [rsp+28h+arg_8], cl
 * 00000001C000BBDF: xor     ebx, ebx
 * 00000001C000BBE1: jmp     short loc_1C000BC28
 * 00000001C000BBE3: movzx   eax, word ptr [rdi+11Ah]
 * 00000001C000BBEA: cmp     ebx, eax
 * 00000001C000BBEC: jnb     short loc_1C000BC34
 * 00000001C000BBEE: mov     eax, ebx
 * 00000001C000BBF0: imul    r8, rax, 158h
 * 00000001C000BBF7: add     r8, rdx
 * 00000001C000BBFA: cmp     byte ptr [r8+0C8h], 0
 * 00000001C000BC02: jz      short loc_1C000BC26
 * 00000001C000BC04: add     r8, 0D8h
 * 00000001C000BC0B: lea     r9, [rsp+28h+arg_8]
 * 00000001C000BC10: mov     rdx, rdi
 * 00000001C000BC13: mov     ecx, 5Fh ; '_'
 * 00000001C000BC18: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000BC1F: nop     dword ptr [rax+rax+00h]
 * 00000001C000BC24: mov     ecx, eax
 * 00000001C000BC26: inc     ebx
 * 00000001C000BC28: mov     rdx, [rdi+308h]
 * 00000001C000BC2F: test    rdx, rdx
 * 00000001C000BC32: jnz     short loc_1C000BBE3
 * 00000001C000BC34: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000BC39: mov     eax, ecx
 * 00000001C000BC3B: add     rsp, 20h
 * 00000001C000BC3F: pop     rdi
 * 00000001C000BC40: retn
 */
