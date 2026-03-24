/*
 * XREFs of RequestPendingCompletion @ 0x1C00049F0
 * Callers:
 *     NVMeHwMSIInterrupt @ 0x1C00048D0 (NVMeHwMSIInterrupt.c)
 *     NVMeHwInterrupt @ 0x1C0009870 (NVMeHwInterrupt.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BBDC (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     IsInternalSrb @ 0x1C0009150 (IsInternalSrb.c)
 */

/*
 * Hex-Rays decompilation failed for RequestPendingCompletion @ 0x1C00049F0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00049F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00049F0: push    rbx
 * 00000001C00049F2: push    rsi
 * 00000001C00049F3: push    rdi
 * 00000001C00049F4: push    r13
 * 00000001C00049F6: sub     rsp, 38h
 * 00000001C00049FA: mov     eax, 0FFFFh
 * 00000001C00049FF: xor     r13d, r13d
 * 00000001C0004A02: mov     rbx, rcx
 * 00000001C0004A05: movzx   ecx, word ptr [rcx+11Ah]
 * 00000001C0004A0C: cmp     dx, ax
 * 00000001C0004A0F: jz      loc_1C0008C28
 * 00000001C0004A15: cmp     dx, cx
 * 00000001C0004A18: ja      short loc_1C0004A85
 * 00000001C0004A1A: test    dx, dx
 * 00000001C0004A1D: jz      short loc_1C0004A7C
 * 00000001C0004A1F: mov     rdi, [rbx+308h]
 * 00000001C0004A26: movzx   eax, dx
 * 00000001C0004A29: add     rdi, 0FFFFFFFFFFFFFEA8h
 * 00000001C0004A30: imul    rcx, rax, 158h
 * 00000001C0004A37: add     rdi, rcx
 * 00000001C0004A3A: movzx   edx, word ptr [rdi+0AAh]
 * 00000001C0004A41: shl     rdx, 4
 * 00000001C0004A45: add     rdx, [rdi]
 * 00000001C0004A48: movzx   ecx, word ptr [rdx+0Eh]
 * 00000001C0004A4C: and     cx, 1
 * 00000001C0004A50: cmp     cx, [rdi+0ACh]
 * 00000001C0004A57: setnz   sil
 * 00000001C0004A5B: mov     [rsp+58h+arg_8], sil
 * 00000001C0004A60: jz      short loc_1C0004A6D
 * 00000001C0004A62: mov     eax, [rbx+6Ch]
 * 00000001C0004A65: test    al, 2
 * 00000001C0004A67: jnz     loc_1C0008CAE
 * 00000001C0004A6D: movzx   eax, sil
 * 00000001C0004A71: add     rsp, 38h
 * 00000001C0004A75: pop     r13
 * 00000001C0004A77: pop     rdi
 * 00000001C0004A78: pop     rsi
 * 00000001C0004A79: pop     rbx
 * 00000001C0004A7A: retn
 * 00000001C0004A7C: lea     rdi, [rbx+1A8h]
 * 00000001C0004A83: jmp     short loc_1C0004A3A
 * 00000001C0004A85: xor     al, al
 * 00000001C0004A87: jmp     short loc_1C0004A71
 * 00000001C0008C28: movzx   edx, word ptr [rbx+252h]
 * 00000001C0008C2F: lea     rdi, [rbx+1A8h]
 * 00000001C0008C36: shl     rdx, 4
 * 00000001C0008C3A: add     rdx, [rdi]
 * 00000001C0008C3D: movzx   eax, word ptr [rdx+0Eh]
 * 00000001C0008C41: and     ax, 1
 * 00000001C0008C45: cmp     ax, [rdi+0ACh]
 * 00000001C0008C4C: jnz     short loc_1C0008CA1
 * 00000001C0008C4E: mov     r9, [rbx+308h]
 * 00000001C0008C55: xor     sil, sil
 * 00000001C0008C58: mov     r8d, r13d
 * 00000001C0008C5B: test    r9, r9
 * 00000001C0008C5E: jz      loc_1C0004A6D
 * 00000001C0008C64: xor     sil, sil
 * 00000001C0008C67: cmp     r8d, ecx
 * 00000001C0008C6A: jnb     loc_1C0004A6D
 * 00000001C0008C70: mov     eax, r8d
 * 00000001C0008C73: imul    rdi, rax, 158h
 * 00000001C0008C7A: add     rdi, r9
 * 00000001C0008C7D: movzx   edx, word ptr [rdi+0AAh]
 * 00000001C0008C84: shl     rdx, 4
 * 00000001C0008C88: add     rdx, [rdi]
 * 00000001C0008C8B: movzx   eax, word ptr [rdx+0Eh]
 * 00000001C0008C8F: and     ax, 1
 * 00000001C0008C93: cmp     ax, [rdi+0ACh]
 * 00000001C0008C9A: jnz     short loc_1C0008CA1
 * 00000001C0008C9C: inc     r8d
 * 00000001C0008C9F: jmp     short loc_1C0008C64
 * 00000001C0008CA1: mov     sil, 1
 * 00000001C0008CA4: mov     [rsp+58h+arg_8], sil
 * 00000001C0008CA9: jmp     loc_1C0004A62
 * 00000001C0008CAE: movzx   eax, word ptr [rdx+0Eh]
 * 00000001C0008CB2: mov     [rsp+58h+arg_10], rbp
 * 00000001C0008CB7: and     ax, 1
 * 00000001C0008CBB: movzx   ebp, word ptr [rdi+0AAh]
 * 00000001C0008CC2: mov     [rsp+58h+var_30], r14
 * 00000001C0008CC7: movzx   r14d, word ptr [rdi+0ACh]
 * 00000001C0008CCF: cmp     ax, r14w
 * 00000001C0008CD3: jz      loc_1C0008DF2
 * 00000001C0008CD9: mov     [rsp+58h+var_28], r12
 * 00000001C0008CDE: mov     esi, 1
 * 00000001C0008CE3: mov     [rsp+58h+var_38], r15
 * 00000001C0008CE8: movzx   ecx, word ptr [rdx+0Ah]
 * 00000001C0008CEC: movzx   r8d, word ptr [rdx+0Ch]
 * 00000001C0008CF1: cmp     [rdi+0A8h], r13w
 * 00000001C0008CF9: jz      short loc_1C0008D07
 * 00000001C0008CFB: mov     eax, [rbx+18h]
 * 00000001C0008CFE: test    sil, al
 * 00000001C0008D01: jz      loc_1C0008DE3
 * 00000001C0008D07: test    cx, cx
 * 00000001C0008D0A: jnz     short loc_1C0008D1D
 * 00000001C0008D0C: movzx   r12d, word ptr [rbx+114h]
 * 00000001C0008D14: lea     rax, [rbx+140h]
 * 00000001C0008D1B: jmp     short loc_1C0008D3A
 * 00000001C0008D1D: mov     rax, [rbx+300h]
 * 00000001C0008D24: movzx   r12d, word ptr [rbx+116h]
 * 00000001C0008D2C: add     rax, 0FFFFFFFFFFFFFF98h
 * 00000001C0008D30: imul    rcx, 88h
 * 00000001C0008D37: add     rax, rcx
 * 00000001C0008D3A: mov     rax, [rax]
 * 00000001C0008D3D: mov     rcx, r8
 * 00000001C0008D40: add     rcx, rcx
 * 00000001C0008D43: mov     r11, [rax+rcx*8]
 * 00000001C0008D47: test    r11, r11
 * 00000001C0008D4A: jz      loc_1C0008DE3
 * 00000001C0008D50: mov     rdx, r11
 * 00000001C0008D53: mov     rcx, rbx
 * 00000001C0008D56: call    IsInternalSrb
 * 00000001C0008D5B: test    al, al
 * 00000001C0008D5D: jnz     loc_1C0008DE3
 * 00000001C0008D63: mov     rcx, r11
 * 00000001C0008D66: call    GetSrbExtension
 * 00000001C0008D6B: mov     r15, rax
 * 00000001C0008D6E: cmp     [rax+1040h], r13
 * 00000001C0008D75: jbe     short loc_1C0008DA3
 * 00000001C0008D77: xor     r8d, r8d
 * 00000001C0008D7A: mov     [rsp+58h+arg_0], r13
 * 00000001C0008D7F: lea     r9, [rsp+58h+arg_0]
 * 00000001C0008D84: mov     rdx, rbx
 * 00000001C0008D87: lea     ecx, [r8+2Fh]
 * 00000001C0008D8B: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0008D92: nop     dword ptr [rax+rax+00h]
 * 00000001C0008D97: mov     rcx, [rsp+58h+arg_0]
 * 00000001C0008D9C: mov     [r15+1050h], rcx
 * 00000001C0008DA3: movzx   ecx, r12w
 * 00000001C0008DA7: dec     ecx
 * 00000001C0008DA9: movzx   eax, bp
 * 00000001C0008DAC: cmp     eax, ecx
 * 00000001C0008DAE: jge     short loc_1C0008DB5
 * 00000001C0008DB0: inc     bp
 * 00000001C0008DB3: jmp     short loc_1C0008DC8
 * 00000001C0008DB5: movzx   eax, si
 * 00000001C0008DB8: mov     ebp, r13d
 * 00000001C0008DBB: cmp     r14w, ax
 * 00000001C0008DBF: cmovz   ax, r13w
 * 00000001C0008DC4: movzx   r14d, ax
 * 00000001C0008DC8: movzx   edx, bp
 * 00000001C0008DCB: shl     rdx, 4
 * 00000001C0008DCF: add     rdx, [rdi]
 * 00000001C0008DD2: movzx   ecx, word ptr [rdx+0Eh]
 * 00000001C0008DD6: and     cx, si
 * 00000001C0008DD9: cmp     cx, r14w
 * 00000001C0008DDD: jnz     loc_1C0008CE8
 * 00000001C0008DE3: movzx   esi, [rsp+58h+arg_8]
 * 00000001C0008DE8: mov     r15, [rsp+58h+var_38]
 * 00000001C0008DED: mov     r12, [rsp+58h+var_28]
 * 00000001C0008DF2: mov     rbp, [rsp+58h+arg_10]
 * 00000001C0008DF7: mov     r14, [rsp+58h+var_30]
 * 00000001C0008DFC: jmp     loc_1C0004A6D
 */
