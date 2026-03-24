/*
 * XREFs of AdminQueueInitialize @ 0x1C0009B18
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000C62C (NVMeControllerInitPart1.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeCompletionQueueInit @ 0x1C000BD8C (NVMeCompletionQueueInit.c)
 *     NVMeSubmissionQueueInit @ 0x1C000F65C (NVMeSubmissionQueueInit.c)
 */

/*
 * Hex-Rays decompilation failed for AdminQueueInitialize @ 0x1C0009B18
 * Reason: Hex-Rays returned no pseudocode for 0x1C0009B18
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0009B18: mov     [rsp-18h+arg_10], rbx
 * 00000001C0009B1D: mov     [rsp-18h+arg_18], rsi
 * 00000001C0009B22: push    rbp
 * 00000001C0009B23: push    rdi
 * 00000001C0009B24: push    r14
 * 00000001C0009B26: mov     rbp, rsp
 * 00000001C0009B29: sub     rsp, 40h
 * 00000001C0009B2D: xor     ebx, ebx
 * 00000001C0009B2F: lea     r14, [rcx+120h]
 * 00000001C0009B36: mov     rdi, rcx
 * 00000001C0009B39: mov     [rbp+arg_8], rbx
 * 00000001C0009B3D: lea     rsi, [rcx+1A8h]
 * 00000001C0009B44: mov     [rbp+arg_0], rbx
 * 00000001C0009B48: movzx   ecx, word ptr [rcx+114h]
 * 00000001C0009B4F: cmp     [rdi+10h], bl
 * 00000001C0009B52: jnz     loc_1C0009C09
 * 00000001C0009B58: mov     r8d, ecx
 * 00000001C0009B5B: lea     rax, [rbp+arg_8]
 * 00000001C0009B5F: shl     r8d, 4
 * 00000001C0009B63: mov     r9d, 656D764Eh
 * 00000001C0009B69: mov     rdx, rdi
 * 00000001C0009B6C: mov     [rsp+40h+var_20], rax
 * 00000001C0009B71: xor     ecx, ecx
 * 00000001C0009B73: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009B7A: nop     dword ptr [rax+rax+00h]
 * 00000001C0009B7F: cmp     [rbp+arg_8], rbx
 * 00000001C0009B83: jz      short loc_1C0009BD8
 * 00000001C0009B85: movzx   r8d, word ptr [rdi+114h]
 * 00000001C0009B8D: lea     rax, [rbp+arg_0]
 * 00000001C0009B91: shl     r8d, 4
 * 00000001C0009B95: mov     r9d, 656D764Eh
 * 00000001C0009B9B: mov     rdx, rdi
 * 00000001C0009B9E: mov     [rsp+40h+var_20], rax
 * 00000001C0009BA3: xor     ecx, ecx
 * 00000001C0009BA5: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009BAC: nop     dword ptr [rax+rax+00h]
 * 00000001C0009BB1: mov     r8, [rbp+arg_0]
 * 00000001C0009BB5: test    r8, r8
 * 00000001C0009BB8: jnz     short loc_1C0009BFC
 * 00000001C0009BBA: mov     rax, [rbp+arg_8]
 * 00000001C0009BBE: test    rax, rax
 * 00000001C0009BC1: jz      short loc_1C0009BDC
 * 00000001C0009BC3: mov     r8, rax
 * 00000001C0009BC6: lea     ecx, [rbx+1]
 * 00000001C0009BC9: mov     rdx, rdi
 * 00000001C0009BCC: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009BD3: nop     dword ptr [rax+rax+00h]
 * 00000001C0009BD8: mov     r8, [rbp+arg_0]
 * 00000001C0009BDC: test    r8, r8
 * 00000001C0009BDF: jz      short loc_1C0009BF5
 * 00000001C0009BE1: mov     rdx, rdi
 * 00000001C0009BE4: mov     ecx, 1
 * 00000001C0009BE9: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009BF0: nop     dword ptr [rax+rax+00h]
 * 00000001C0009BF5: xor     al, al
 * 00000001C0009BF7: jmp     loc_1C0009CBB
 * 00000001C0009BFC: movzx   ecx, word ptr [rdi+114h]
 * 00000001C0009C03: mov     r8, [rbp+arg_8]
 * 00000001C0009C07: jmp     short loc_1C0009C22
 * 00000001C0009C09: mov     r8, [rsi]
 * 00000001C0009C0C: mov     rdx, rcx
 * 00000001C0009C0F: shl     rdx, 4
 * 00000001C0009C13: add     r8, rdx
 * 00000001C0009C16: mov     [rbp+arg_8], r8
 * 00000001C0009C1A: lea     rax, [r8+rdx]
 * 00000001C0009C1E: mov     [rbp+arg_0], rax
 * 00000001C0009C22: movzx   edx, cx
 * 00000001C0009C25: mov     rcx, r8
 * 00000001C0009C28: shl     edx, 4
 * 00000001C0009C2B: call    NVMeZeroMemory
 * 00000001C0009C30: movzx   edx, word ptr [rdi+114h]
 * 00000001C0009C37: mov     rcx, [rbp+arg_0]
 * 00000001C0009C3B: shl     edx, 4
 * 00000001C0009C3E: call    NVMeZeroMemory
 * 00000001C0009C43: mov     rax, [rbp+arg_0]
 * 00000001C0009C47: xor     r8d, r8d
 * 00000001C0009C4A: mov     r9, [r14]
 * 00000001C0009C4D: mov     rdx, r14
 * 00000001C0009C50: mov     [rsp+40h+var_10], rax
 * 00000001C0009C55: mov     rcx, rdi
 * 00000001C0009C58: mov     rax, [rbp+arg_8]
 * 00000001C0009C5C: mov     [rsp+40h+var_18], rax
 * 00000001C0009C61: mov     [rsp+40h+var_20], rbx
 * 00000001C0009C66: call    NVMeSubmissionQueueInit
 * 00000001C0009C6B: mov     r9, [rsi]
 * 00000001C0009C6E: xor     r8d, r8d
 * 00000001C0009C71: mov     rdx, rsi
 * 00000001C0009C74: mov     [rsp+40h+var_18], rbx
 * 00000001C0009C79: mov     rcx, rdi
 * 00000001C0009C7C: mov     [rsp+40h+var_20], rbx
 * 00000001C0009C81: call    NVMeCompletionQueueInit
 * 00000001C0009C86: movzx   edx, word ptr [rdi+114h]
 * 00000001C0009C8D: mov     rcx, [r14]
 * 00000001C0009C90: shl     edx, 6
 * 00000001C0009C93: call    NVMeZeroMemory
 * 00000001C0009C98: movzx   edx, word ptr [rdi+114h]
 * 00000001C0009C9F: mov     rcx, [rsi]
 * 00000001C0009CA2: shl     edx, 4
 * 00000001C0009CA5: call    NVMeZeroMemory
 * 00000001C0009CAA: mov     [r14+32h], bx
 * 00000001C0009CAF: mov     al, 1
 * 00000001C0009CB1: mov     dword ptr [rsi+0B4h], 1
 * 00000001C0009CBB: mov     rbx, [rsp+40h+arg_10]
 * 00000001C0009CC0: mov     rsi, [rsp+40h+arg_18]
 * 00000001C0009CC5: add     rsp, 40h
 * 00000001C0009CC9: pop     r14
 * 00000001C0009CCB: pop     rdi
 * 00000001C0009CCC: pop     rbp
 * 00000001C0009CCD: retn
 */
