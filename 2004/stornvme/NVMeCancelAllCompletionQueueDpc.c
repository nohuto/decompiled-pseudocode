/*
 * XREFs of NVMeCancelAllCompletionQueueDpc @ 0x1C000BC18
 * Callers:
 *     NVMeControllerReset @ 0x1C000D088 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0016C10 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeCancelAllCompletionQueueDpc @ 0x1C000BC18
 * Reason: Hex-Rays returned no pseudocode for 0x1C000BC18
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000BC18: mov     [rsp+arg_0], rbx
 * 00000001C000BC1D: mov     [rsp+arg_8], dl
 * 00000001C000BC21: push    rdi
 * 00000001C000BC22: sub     rsp, 20h
 * 00000001C000BC26: mov     rdi, rcx
 * 00000001C000BC29: xor     ecx, ecx
 * 00000001C000BC2B: mov     [rsp+28h+arg_8], cl
 * 00000001C000BC2F: xor     ebx, ebx
 * 00000001C000BC31: jmp     short loc_1C000BC78
 * 00000001C000BC33: movzx   eax, word ptr [rdi+11Ah]
 * 00000001C000BC3A: cmp     ebx, eax
 * 00000001C000BC3C: jnb     short loc_1C000BC84
 * 00000001C000BC3E: mov     eax, ebx
 * 00000001C000BC40: imul    r8, rax, 158h
 * 00000001C000BC47: add     r8, rdx
 * 00000001C000BC4A: cmp     byte ptr [r8+0C8h], 0
 * 00000001C000BC52: jz      short loc_1C000BC76
 * 00000001C000BC54: add     r8, 0D8h
 * 00000001C000BC5B: lea     r9, [rsp+28h+arg_8]
 * 00000001C000BC60: mov     rdx, rdi
 * 00000001C000BC63: mov     ecx, 5Fh ; '_'
 * 00000001C000BC68: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000BC6F: nop     dword ptr [rax+rax+00h]
 * 00000001C000BC74: mov     ecx, eax
 * 00000001C000BC76: inc     ebx
 * 00000001C000BC78: mov     rdx, [rdi+308h]
 * 00000001C000BC7F: test    rdx, rdx
 * 00000001C000BC82: jnz     short loc_1C000BC33
 * 00000001C000BC84: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000BC89: mov     eax, ecx
 * 00000001C000BC8B: add     rsp, 20h
 * 00000001C000BC8F: pop     rdi
 * 00000001C000BC90: retn
 */
