/*
 * XREFs of AdminQueueInitialize @ 0x1C0009AC8
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000C5DC (NVMeControllerInitPart1.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeCompletionQueueInit @ 0x1C000BD3C (NVMeCompletionQueueInit.c)
 *     NVMeSubmissionQueueInit @ 0x1C000F5DC (NVMeSubmissionQueueInit.c)
 */

/*
 * Hex-Rays decompilation failed for AdminQueueInitialize @ 0x1C0009AC8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0009AC8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0009AC8: mov     [rsp-18h+arg_10], rbx
 * 00000001C0009ACD: mov     [rsp-18h+arg_18], rsi
 * 00000001C0009AD2: push    rbp
 * 00000001C0009AD3: push    rdi
 * 00000001C0009AD4: push    r14
 * 00000001C0009AD6: mov     rbp, rsp
 * 00000001C0009AD9: sub     rsp, 40h
 * 00000001C0009ADD: xor     ebx, ebx
 * 00000001C0009ADF: lea     r14, [rcx+120h]
 * 00000001C0009AE6: mov     rdi, rcx
 * 00000001C0009AE9: mov     [rbp+arg_8], rbx
 * 00000001C0009AED: lea     rsi, [rcx+1A8h]
 * 00000001C0009AF4: mov     [rbp+arg_0], rbx
 * 00000001C0009AF8: movzx   ecx, word ptr [rcx+114h]
 * 00000001C0009AFF: cmp     [rdi+10h], bl
 * 00000001C0009B02: jnz     loc_1C0009BB9
 * 00000001C0009B08: mov     r8d, ecx
 * 00000001C0009B0B: lea     rax, [rbp+arg_8]
 * 00000001C0009B0F: shl     r8d, 4
 * 00000001C0009B13: mov     r9d, 656D764Eh
 * 00000001C0009B19: mov     rdx, rdi
 * 00000001C0009B1C: mov     [rsp+40h+var_20], rax
 * 00000001C0009B21: xor     ecx, ecx
 * 00000001C0009B23: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009B2A: nop     dword ptr [rax+rax+00h]
 * 00000001C0009B2F: cmp     [rbp+arg_8], rbx
 * 00000001C0009B33: jz      short loc_1C0009B88
 * 00000001C0009B35: movzx   r8d, word ptr [rdi+114h]
 * 00000001C0009B3D: lea     rax, [rbp+arg_0]
 * 00000001C0009B41: shl     r8d, 4
 * 00000001C0009B45: mov     r9d, 656D764Eh
 * 00000001C0009B4B: mov     rdx, rdi
 * 00000001C0009B4E: mov     [rsp+40h+var_20], rax
 * 00000001C0009B53: xor     ecx, ecx
 * 00000001C0009B55: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009B5C: nop     dword ptr [rax+rax+00h]
 * 00000001C0009B61: mov     r8, [rbp+arg_0]
 * 00000001C0009B65: test    r8, r8
 * 00000001C0009B68: jnz     short loc_1C0009BAC
 * 00000001C0009B6A: mov     rax, [rbp+arg_8]
 * 00000001C0009B6E: test    rax, rax
 * 00000001C0009B71: jz      short loc_1C0009B8C
 * 00000001C0009B73: mov     r8, rax
 * 00000001C0009B76: lea     ecx, [rbx+1]
 * 00000001C0009B79: mov     rdx, rdi
 * 00000001C0009B7C: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009B83: nop     dword ptr [rax+rax+00h]
 * 00000001C0009B88: mov     r8, [rbp+arg_0]
 * 00000001C0009B8C: test    r8, r8
 * 00000001C0009B8F: jz      short loc_1C0009BA5
 * 00000001C0009B91: mov     rdx, rdi
 * 00000001C0009B94: mov     ecx, 1
 * 00000001C0009B99: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009BA0: nop     dword ptr [rax+rax+00h]
 * 00000001C0009BA5: xor     al, al
 * 00000001C0009BA7: jmp     loc_1C0009C6B
 * 00000001C0009BAC: movzx   ecx, word ptr [rdi+114h]
 * 00000001C0009BB3: mov     r8, [rbp+arg_8]
 * 00000001C0009BB7: jmp     short loc_1C0009BD2
 * 00000001C0009BB9: mov     r8, [rsi]
 * 00000001C0009BBC: mov     rdx, rcx
 * 00000001C0009BBF: shl     rdx, 4
 * 00000001C0009BC3: add     r8, rdx
 * 00000001C0009BC6: mov     [rbp+arg_8], r8
 * 00000001C0009BCA: lea     rax, [r8+rdx]
 * 00000001C0009BCE: mov     [rbp+arg_0], rax
 * 00000001C0009BD2: movzx   edx, cx
 * 00000001C0009BD5: mov     rcx, r8
 * 00000001C0009BD8: shl     edx, 4
 * 00000001C0009BDB: call    NVMeZeroMemory
 * 00000001C0009BE0: movzx   edx, word ptr [rdi+114h]
 * 00000001C0009BE7: mov     rcx, [rbp+arg_0]
 * 00000001C0009BEB: shl     edx, 4
 * 00000001C0009BEE: call    NVMeZeroMemory
 * 00000001C0009BF3: mov     rax, [rbp+arg_0]
 * 00000001C0009BF7: xor     r8d, r8d
 * 00000001C0009BFA: mov     r9, [r14]
 * 00000001C0009BFD: mov     rdx, r14
 * 00000001C0009C00: mov     [rsp+40h+var_10], rax
 * 00000001C0009C05: mov     rcx, rdi
 * 00000001C0009C08: mov     rax, [rbp+arg_8]
 * 00000001C0009C0C: mov     [rsp+40h+var_18], rax
 * 00000001C0009C11: mov     [rsp+40h+var_20], rbx
 * 00000001C0009C16: call    NVMeSubmissionQueueInit
 * 00000001C0009C1B: mov     r9, [rsi]
 * 00000001C0009C1E: xor     r8d, r8d
 * 00000001C0009C21: mov     rdx, rsi
 * 00000001C0009C24: mov     [rsp+40h+var_18], rbx
 * 00000001C0009C29: mov     rcx, rdi
 * 00000001C0009C2C: mov     [rsp+40h+var_20], rbx
 * 00000001C0009C31: call    NVMeCompletionQueueInit
 * 00000001C0009C36: movzx   edx, word ptr [rdi+114h]
 * 00000001C0009C3D: mov     rcx, [r14]
 * 00000001C0009C40: shl     edx, 6
 * 00000001C0009C43: call    NVMeZeroMemory
 * 00000001C0009C48: movzx   edx, word ptr [rdi+114h]
 * 00000001C0009C4F: mov     rcx, [rsi]
 * 00000001C0009C52: shl     edx, 4
 * 00000001C0009C55: call    NVMeZeroMemory
 * 00000001C0009C5A: mov     [r14+32h], bx
 * 00000001C0009C5F: mov     al, 1
 * 00000001C0009C61: mov     dword ptr [rsi+0B4h], 1
 * 00000001C0009C6B: mov     rbx, [rsp+40h+arg_10]
 * 00000001C0009C70: mov     rsi, [rsp+40h+arg_18]
 * 00000001C0009C75: add     rsp, 40h
 * 00000001C0009C79: pop     r14
 * 00000001C0009C7B: pop     rdi
 * 00000001C0009C7C: pop     rbp
 * 00000001C0009C7D: retn
 */
