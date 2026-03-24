/*
 * XREFs of RequestPendingCompletion @ 0x1C00049F0
 * Callers:
 *     NVMeHwMSIInterrupt @ 0x1C00048D0 (NVMeHwMSIInterrupt.c)
 *     NVMeHwInterrupt @ 0x1C0009820 (NVMeHwInterrupt.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BB0C (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     IsInternalSrb @ 0x1C0009100 (IsInternalSrb.c)
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
 * 00000001C0004A0F: jz      loc_1C0008BE8
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
 * 00000001C0004A67: jnz     loc_1C0008C6E
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
 * 00000001C0008BE8: movzx   edx, word ptr [rbx+252h]
 * 00000001C0008BEF: lea     rdi, [rbx+1A8h]
 * 00000001C0008BF6: shl     rdx, 4
 * 00000001C0008BFA: add     rdx, [rdi]
 * 00000001C0008BFD: movzx   eax, word ptr [rdx+0Eh]
 * 00000001C0008C01: and     ax, 1
 * 00000001C0008C05: cmp     ax, [rdi+0ACh]
 * 00000001C0008C0C: jnz     short loc_1C0008C61
 * 00000001C0008C0E: mov     r9, [rbx+308h]
 * 00000001C0008C15: xor     sil, sil
 * 00000001C0008C18: mov     r8d, r13d
 * 00000001C0008C1B: test    r9, r9
 * 00000001C0008C1E: jz      loc_1C0004A6D
 * 00000001C0008C24: xor     sil, sil
 * 00000001C0008C27: cmp     r8d, ecx
 * 00000001C0008C2A: jnb     loc_1C0004A6D
 * 00000001C0008C30: mov     eax, r8d
 * 00000001C0008C33: imul    rdi, rax, 158h
 * 00000001C0008C3A: add     rdi, r9
 * 00000001C0008C3D: movzx   edx, word ptr [rdi+0AAh]
 * 00000001C0008C44: shl     rdx, 4
 * 00000001C0008C48: add     rdx, [rdi]
 * 00000001C0008C4B: movzx   eax, word ptr [rdx+0Eh]
 * 00000001C0008C4F: and     ax, 1
 * 00000001C0008C53: cmp     ax, [rdi+0ACh]
 * 00000001C0008C5A: jnz     short loc_1C0008C61
 * 00000001C0008C5C: inc     r8d
 * 00000001C0008C5F: jmp     short loc_1C0008C24
 * 00000001C0008C61: mov     sil, 1
 * 00000001C0008C64: mov     [rsp+58h+arg_8], sil
 * 00000001C0008C69: jmp     loc_1C0004A62
 * 00000001C0008C6E: movzx   eax, word ptr [rdx+0Eh]
 * 00000001C0008C72: mov     [rsp+58h+arg_10], rbp
 * 00000001C0008C77: and     ax, 1
 * 00000001C0008C7B: movzx   ebp, word ptr [rdi+0AAh]
 * 00000001C0008C82: mov     [rsp+58h+var_30], r14
 * 00000001C0008C87: movzx   r14d, word ptr [rdi+0ACh]
 * 00000001C0008C8F: cmp     ax, r14w
 * 00000001C0008C93: jz      loc_1C0008DB2
 * 00000001C0008C99: mov     [rsp+58h+var_28], r12
 * 00000001C0008C9E: mov     esi, 1
 * 00000001C0008CA3: mov     [rsp+58h+var_38], r15
 * 00000001C0008CA8: movzx   ecx, word ptr [rdx+0Ah]
 * 00000001C0008CAC: movzx   r8d, word ptr [rdx+0Ch]
 * 00000001C0008CB1: cmp     [rdi+0A8h], r13w
 * 00000001C0008CB9: jz      short loc_1C0008CC7
 * 00000001C0008CBB: mov     eax, [rbx+18h]
 * 00000001C0008CBE: test    sil, al
 * 00000001C0008CC1: jz      loc_1C0008DA3
 * 00000001C0008CC7: test    cx, cx
 * 00000001C0008CCA: jnz     short loc_1C0008CDD
 * 00000001C0008CCC: movzx   r12d, word ptr [rbx+114h]
 * 00000001C0008CD4: lea     rax, [rbx+140h]
 * 00000001C0008CDB: jmp     short loc_1C0008CFA
 * 00000001C0008CDD: mov     rax, [rbx+300h]
 * 00000001C0008CE4: movzx   r12d, word ptr [rbx+116h]
 * 00000001C0008CEC: add     rax, 0FFFFFFFFFFFFFF98h
 * 00000001C0008CF0: imul    rcx, 88h
 * 00000001C0008CF7: add     rax, rcx
 * 00000001C0008CFA: mov     rax, [rax]
 * 00000001C0008CFD: mov     rcx, r8
 * 00000001C0008D00: add     rcx, rcx
 * 00000001C0008D03: mov     r11, [rax+rcx*8]
 * 00000001C0008D07: test    r11, r11
 * 00000001C0008D0A: jz      loc_1C0008DA3
 * 00000001C0008D10: mov     rdx, r11
 * 00000001C0008D13: mov     rcx, rbx
 * 00000001C0008D16: call    IsInternalSrb
 * 00000001C0008D1B: test    al, al
 * 00000001C0008D1D: jnz     loc_1C0008DA3
 * 00000001C0008D23: mov     rcx, r11
 * 00000001C0008D26: call    GetSrbExtension
 * 00000001C0008D2B: mov     r15, rax
 * 00000001C0008D2E: cmp     [rax+1040h], r13
 * 00000001C0008D35: jbe     short loc_1C0008D63
 * 00000001C0008D37: xor     r8d, r8d
 * 00000001C0008D3A: mov     [rsp+58h+arg_0], r13
 * 00000001C0008D3F: lea     r9, [rsp+58h+arg_0]
 * 00000001C0008D44: mov     rdx, rbx
 * 00000001C0008D47: lea     ecx, [r8+2Fh]
 * 00000001C0008D4B: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0008D52: nop     dword ptr [rax+rax+00h]
 * 00000001C0008D57: mov     rcx, [rsp+58h+arg_0]
 * 00000001C0008D5C: mov     [r15+1050h], rcx
 * 00000001C0008D63: movzx   ecx, r12w
 * 00000001C0008D67: dec     ecx
 * 00000001C0008D69: movzx   eax, bp
 * 00000001C0008D6C: cmp     eax, ecx
 * 00000001C0008D6E: jge     short loc_1C0008D75
 * 00000001C0008D70: inc     bp
 * 00000001C0008D73: jmp     short loc_1C0008D88
 * 00000001C0008D75: movzx   eax, si
 * 00000001C0008D78: mov     ebp, r13d
 * 00000001C0008D7B: cmp     r14w, ax
 * 00000001C0008D7F: cmovz   ax, r13w
 * 00000001C0008D84: movzx   r14d, ax
 * 00000001C0008D88: movzx   edx, bp
 * 00000001C0008D8B: shl     rdx, 4
 * 00000001C0008D8F: add     rdx, [rdi]
 * 00000001C0008D92: movzx   ecx, word ptr [rdx+0Eh]
 * 00000001C0008D96: and     cx, si
 * 00000001C0008D99: cmp     cx, r14w
 * 00000001C0008D9D: jnz     loc_1C0008CA8
 * 00000001C0008DA3: movzx   esi, [rsp+58h+arg_8]
 * 00000001C0008DA8: mov     r15, [rsp+58h+var_38]
 * 00000001C0008DAD: mov     r12, [rsp+58h+var_28]
 * 00000001C0008DB2: mov     rbp, [rsp+58h+arg_10]
 * 00000001C0008DB7: mov     r14, [rsp+58h+var_30]
 * 00000001C0008DBC: jmp     loc_1C0004A6D
 */
