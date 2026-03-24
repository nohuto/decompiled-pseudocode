/*
 * XREFs of NVMeControllerCompleteAllIORequests @ 0x1C000C174
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004A90 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C000D0A0 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0016B90 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000BC48 (NVMeCompleteSubmissionQueueRequests.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerCompleteAllIORequests @ 0x1C000C174
 * Reason: Hex-Rays returned no pseudocode for 0x1C000C174
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000C174: mov     rax, rsp
 * 00000001C000C177: mov     [rax+8], rbx
 * 00000001C000C17B: mov     [rax+10h], rbp
 * 00000001C000C17F: mov     [rax+18h], rsi
 * 00000001C000C183: mov     [rax+20h], rdi
 * 00000001C000C187: push    r14
 * 00000001C000C189: sub     rsp, 40h
 * 00000001C000C18D: mov     sil, dl
 * 00000001C000C190: mov     rbx, rcx
 * 00000001C000C193: mov     rdx, rcx
 * 00000001C000C196: mov     r8d, 2710h
 * 00000001C000C19C: mov     ecx, 51h ; 'Q'
 * 00000001C000C1A1: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000C1A8: nop     dword ptr [rax+rax+00h]
 * 00000001C000C1AD: xor     ebp, ebp
 * 00000001C000C1AF: mov     edi, ebp
 * 00000001C000C1B1: lea     r14d, [rbp+1]
 * 00000001C000C1B5: cmp     bp, [rbx+118h]
 * 00000001C000C1BC: jnb     short loc_1C000C1FE
 * 00000001C000C1BE: movzx   r8d, word ptr [rbx+116h]
 * 00000001C000C1C6: xor     r9d, r9d
 * 00000001C000C1C9: mov     eax, edi
 * 00000001C000C1CB: mov     rcx, rbx
 * 00000001C000C1CE: imul    rdx, rax, 88h
 * 00000001C000C1D5: mov     [rsp+48h+var_18], sil
 * 00000001C000C1DA: add     rdx, [rbx+300h]
 * 00000001C000C1E1: mov     [rsp+48h+var_20], bpl
 * 00000001C000C1E6: mov     [rsp+48h+var_28], r14b
 * 00000001C000C1EB: call    NVMeCompleteSubmissionQueueRequests
 * 00000001C000C1F0: movzx   eax, word ptr [rbx+118h]
 * 00000001C000C1F7: add     edi, r14d
 * 00000001C000C1FA: cmp     edi, eax
 * 00000001C000C1FC: jb      short loc_1C000C1BE
 * 00000001C000C1FE: movzx   edi, bp
 * 00000001C000C201: jmp     short loc_1C000C222
 * 00000001C000C203: mov     eax, 1388h
 * 00000001C000C208: cmp     di, ax
 * 00000001C000C20B: jnb     short loc_1C000C22E
 * 00000001C000C20D: mov     ecx, 0Ah
 * 00000001C000C212: call    cs:__imp_StorPortStallExecution
 * 00000001C000C219: nop     dword ptr [rax+rax+00h]
 * 00000001C000C21E: add     di, r14w
 * 00000001C000C222: movzx   eax, word ptr [rbx+328h]
 * 00000001C000C229: test    ax, ax
 * 00000001C000C22C: jnz     short loc_1C000C203
 * 00000001C000C22E: movzx   r8d, word ptr [rbx+114h]
 * 00000001C000C236: lea     rdx, [rbx+120h]
 * 00000001C000C23D: mov     [rsp+48h+var_18], sil
 * 00000001C000C242: xor     r9d, r9d
 * 00000001C000C245: mov     [rsp+48h+var_20], bpl
 * 00000001C000C24A: mov     rcx, rbx
 * 00000001C000C24D: mov     [rsp+48h+var_28], r14b
 * 00000001C000C252: call    NVMeCompleteSubmissionQueueRequests
 * 00000001C000C257: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000C25C: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000C261: mov     rsi, [rsp+48h+arg_10]
 * 00000001C000C266: mov     rdi, [rsp+48h+arg_18]
 * 00000001C000C26B: add     rsp, 40h
 * 00000001C000C26F: pop     r14
 * 00000001C000C271: retn
 */
