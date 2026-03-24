/*
 * XREFs of NVMeControllerCompleteAllIORequests @ 0x1C000C1C4
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004A90 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C000D088 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0016C10 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000BC98 (NVMeCompleteSubmissionQueueRequests.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerCompleteAllIORequests @ 0x1C000C1C4
 * Reason: Hex-Rays returned no pseudocode for 0x1C000C1C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000C1C4: mov     rax, rsp
 * 00000001C000C1C7: mov     [rax+8], rbx
 * 00000001C000C1CB: mov     [rax+10h], rbp
 * 00000001C000C1CF: mov     [rax+18h], rsi
 * 00000001C000C1D3: mov     [rax+20h], rdi
 * 00000001C000C1D7: push    r14
 * 00000001C000C1D9: sub     rsp, 40h
 * 00000001C000C1DD: mov     sil, dl
 * 00000001C000C1E0: mov     rbx, rcx
 * 00000001C000C1E3: mov     rdx, rcx
 * 00000001C000C1E6: mov     r8d, 2710h
 * 00000001C000C1EC: mov     ecx, 51h ; 'Q'
 * 00000001C000C1F1: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000C1F8: nop     dword ptr [rax+rax+00h]
 * 00000001C000C1FD: xor     ebp, ebp
 * 00000001C000C1FF: mov     edi, ebp
 * 00000001C000C201: lea     r14d, [rbp+1]
 * 00000001C000C205: cmp     bp, [rbx+118h]
 * 00000001C000C20C: jnb     short loc_1C000C24E
 * 00000001C000C20E: movzx   r8d, word ptr [rbx+116h]
 * 00000001C000C216: xor     r9d, r9d
 * 00000001C000C219: mov     eax, edi
 * 00000001C000C21B: mov     rcx, rbx
 * 00000001C000C21E: imul    rdx, rax, 88h
 * 00000001C000C225: mov     [rsp+48h+var_18], sil
 * 00000001C000C22A: add     rdx, [rbx+300h]
 * 00000001C000C231: mov     [rsp+48h+var_20], bpl
 * 00000001C000C236: mov     [rsp+48h+var_28], r14b
 * 00000001C000C23B: call    NVMeCompleteSubmissionQueueRequests
 * 00000001C000C240: movzx   eax, word ptr [rbx+118h]
 * 00000001C000C247: add     edi, r14d
 * 00000001C000C24A: cmp     edi, eax
 * 00000001C000C24C: jb      short loc_1C000C20E
 * 00000001C000C24E: movzx   edi, bp
 * 00000001C000C251: jmp     short loc_1C000C272
 * 00000001C000C253: mov     eax, 1388h
 * 00000001C000C258: cmp     di, ax
 * 00000001C000C25B: jnb     short loc_1C000C27E
 * 00000001C000C25D: mov     ecx, 0Ah
 * 00000001C000C262: call    cs:__imp_StorPortStallExecution
 * 00000001C000C269: nop     dword ptr [rax+rax+00h]
 * 00000001C000C26E: add     di, r14w
 * 00000001C000C272: movzx   eax, word ptr [rbx+328h]
 * 00000001C000C279: test    ax, ax
 * 00000001C000C27C: jnz     short loc_1C000C253
 * 00000001C000C27E: movzx   r8d, word ptr [rbx+114h]
 * 00000001C000C286: lea     rdx, [rbx+120h]
 * 00000001C000C28D: mov     [rsp+48h+var_18], sil
 * 00000001C000C292: xor     r9d, r9d
 * 00000001C000C295: mov     [rsp+48h+var_20], bpl
 * 00000001C000C29A: mov     rcx, rbx
 * 00000001C000C29D: mov     [rsp+48h+var_28], r14b
 * 00000001C000C2A2: call    NVMeCompleteSubmissionQueueRequests
 * 00000001C000C2A7: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000C2AC: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000C2B1: mov     rsi, [rsp+48h+arg_10]
 * 00000001C000C2B6: mov     rdi, [rsp+48h+arg_18]
 * 00000001C000C2BB: add     rsp, 40h
 * 00000001C000C2BF: pop     r14
 * 00000001C000C2C1: retn
 */
