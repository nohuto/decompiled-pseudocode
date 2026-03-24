/*
 * XREFs of ProtocolCommandToNVMe @ 0x1C0014A24
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0003960 (NVMeHwBuildIo.c)
 * Callees:
 *     SetPrpFromSrb @ 0x1C0001AE8 (SetPrpFromSrb.c)
 *     GetNamespaceId @ 0x1C0004344 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     GetControllerMaxTransferSize @ 0x1C0004750 (GetControllerMaxTransferSize.c)
 *     FillClippedSGL @ 0x1C00100A4 (FillClippedSGL.c)
 *     NVMeValidateProtocolCommandRequest @ 0x1C0014110 (NVMeValidateProtocolCommandRequest.c)
 */

/*
 * Hex-Rays decompilation failed for ProtocolCommandToNVMe @ 0x1C0014A24
 * Reason: Hex-Rays returned no pseudocode for 0x1C0014A24
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0014A24: mov     [rsp+arg_0], rbx
 * 00000001C0014A29: push    rbp
 * 00000001C0014A2A: push    rsi
 * 00000001C0014A2B: push    rdi
 * 00000001C0014A2C: push    r12
 * 00000001C0014A2E: push    r13
 * 00000001C0014A30: push    r14
 * 00000001C0014A32: push    r15
 * 00000001C0014A34: sub     rsp, 30h
 * 00000001C0014A38: mov     r14, rcx
 * 00000001C0014A3B: mov     rbx, rdx
 * 00000001C0014A3E: mov     rcx, rdx
 * 00000001C0014A41: call    GetSrbExtension
 * 00000001C0014A46: xor     r12d, r12d
 * 00000001C0014A49: mov     r13, rax
 * 00000001C0014A4C: cmp     byte ptr [rdx+2], 28h ; '('
 * 00000001C0014A50: mov     ebp, r12d
 * 00000001C0014A53: mov     [rsp+68h+arg_10], r12
 * 00000001C0014A5B: jnz     short loc_1C0014A63
 * 00000001C0014A5D: mov     rdi, [rdx+40h]
 * 00000001C0014A61: jmp     short loc_1C0014A67
 * 00000001C0014A63: mov     rdi, [rdx+18h]
 * 00000001C0014A67: mov     rcx, r14
 * 00000001C0014A6A: call    NVMeValidateProtocolCommandRequest
 * 00000001C0014A6F: mov     esi, eax
 * 00000001C0014A71: test    eax, eax
 * 00000001C0014A73: jnz     loc_1C0014C86
 * 00000001C0014A79: cmp     [rdi+24h], r12d
 * 00000001C0014A7D: jbe     short loc_1C0014A85
 * 00000001C0014A7F: mov     r15d, [rdi+34h]
 * 00000001C0014A83: jmp     short loc_1C0014A93
 * 00000001C0014A85: cmp     [rdi+20h], r12d
 * 00000001C0014A89: jbe     loc_1C0014BAA
 * 00000001C0014A8F: mov     r15d, [rdi+30h]
 * 00000001C0014A93: mov     eax, r15d
 * 00000001C0014A96: mov     ebp, eax
 * 00000001C0014A98: add     rbp, rdi
 * 00000001C0014A9B: jz      loc_1C0014BAA
 * 00000001C0014AA1: mov     eax, [r14+38h]
 * 00000001C0014AA5: test    al, 8
 * 00000001C0014AA7: jnz     loc_1C0014BA3
 * 00000001C0014AAD: mov     rcx, r14
 * 00000001C0014AB0: call    GetControllerMaxTransferSize
 * 00000001C0014AB5: lea     rcx, [rsp+68h+arg_10]
 * 00000001C0014ABD: mov     r9d, 656D764Eh
 * 00000001C0014AC3: mov     [rsp+68h+var_48], rcx
 * 00000001C0014AC8: mov     rdx, r14
 * 00000001C0014ACB: xor     ecx, ecx
 * 00000001C0014ACD: lea     r12d, [rax-1]
 * 00000001C0014AD1: shr     r12d, 0Ch
 * 00000001C0014AD5: add     r12d, 2
 * 00000001C0014AD9: lea     eax, [r12+r12*2]
 * 00000001C0014ADD: lea     eax, ds:10h[rax*8]
 * 00000001C0014AE4: mov     r8d, eax
 * 00000001C0014AE7: mov     [rsp+68h+arg_8], eax
 * 00000001C0014AEB: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0014AF2: nop     dword ptr [rax+rax+00h]
 * 00000001C0014AF7: mov     rcx, [rsp+68h+arg_10]
 * 00000001C0014AFF: test    rcx, rcx
 * 00000001C0014B02: jnz     short loc_1C0014B1C
 * 00000001C0014B04: mov     dword ptr [rdi+10h], 7
 * 00000001C0014B0B: mov     esi, 0C1000001h
 * 00000001C0014B10: mov     byte ptr [rbx+3], 15h
 * 00000001C0014B14: xor     r12d, r12d
 * 00000001C0014B17: jmp     loc_1C0014C86
 * 00000001C0014B1C: mov     edx, [rsp+68h+arg_8]
 * 00000001C0014B20: call    NVMeZeroMemory
 * 00000001C0014B25: mov     rdx, rbx
 * 00000001C0014B28: mov     rcx, r14
 * 00000001C0014B2B: call    cs:__imp_StorPortGetScatterGatherList
 * 00000001C0014B32: nop     dword ptr [rax+rax+00h]
 * 00000001C0014B37: mov     rdx, [rsp+68h+arg_10]
 * 00000001C0014B3F: mov     r9d, r15d
 * 00000001C0014B42: mov     rcx, rax
 * 00000001C0014B45: mov     r8d, r12d
 * 00000001C0014B48: call    FillClippedSGL
 * 00000001C0014B4D: xor     r12d, r12d
 * 00000001C0014B50: test    al, al
 * 00000001C0014B52: jnz     short loc_1C0014B92
 * 00000001C0014B54: mov     r8, [rsp+68h+arg_10]
 * 00000001C0014B5C: test    r8, r8
 * 00000001C0014B5F: jz      short loc_1C0014B7D
 * 00000001C0014B61: mov     rdx, r14
 * 00000001C0014B64: lea     ecx, [r12+1]
 * 00000001C0014B69: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0014B70: nop     dword ptr [rax+rax+00h]
 * 00000001C0014B75: mov     [rsp+68h+arg_10], r12
 * 00000001C0014B7D: mov     dword ptr [rdi+10h], 3
 * 00000001C0014B84: mov     esi, 0C1000001h
 * 00000001C0014B89: mov     byte ptr [rbx+3], 15h
 * 00000001C0014B8D: jmp     loc_1C0014C86
 * 00000001C0014B92: mov     rax, [rsp+68h+arg_10]
 * 00000001C0014B9A: mov     [r13+1078h], rax
 * 00000001C0014BA1: jmp     short loc_1C0014BAA
 * 00000001C0014BA3: mov     [r13+1078h], r15d
 * 00000001C0014BAA: cmp     [rdi+0Ch], r12d
 * 00000001C0014BAE: jge     short loc_1C0014BB6
 * 00000001C0014BB0: mov     r15d, [rdi+54h]
 * 00000001C0014BB4: jmp     short loc_1C0014BD6
 * 00000001C0014BB6: cmp     byte ptr [rbx+2], 28h ; '('
 * 00000001C0014BBA: jnz     short loc_1C0014BC5
 * 00000001C0014BBC: mov     eax, [rbx+34h]
 * 00000001C0014BBF: mov     cl, [rax+rbx+0Ah]
 * 00000001C0014BC3: jmp     short loc_1C0014BC8
 * 00000001C0014BC5: mov     cl, [rbx+7]
 * 00000001C0014BC8: movzx   edx, cl
 * 00000001C0014BCB: mov     rcx, r14
 * 00000001C0014BCE: call    GetNamespaceId
 * 00000001C0014BD3: mov     r15d, eax
 * 00000001C0014BD6: cmp     dword ptr [rdi+38h], 1
 * 00000001C0014BDA: mov     cl, [r13+109Dh]
 * 00000001C0014BE1: setz    dl
 * 00000001C0014BE4: and     cl, 0FEh
 * 00000001C0014BE7: or      dl, cl
 * 00000001C0014BE9: and     dl, 0FDh
 * 00000001C0014BEC: neg     rbp
 * 00000001C0014BEF: sbb     cl, cl
 * 00000001C0014BF1: and     cl, 2
 * 00000001C0014BF4: or      dl, cl
 * 00000001C0014BF6: mov     rcx, r14
 * 00000001C0014BF9: mov     [r13+109Dh], dl
 * 00000001C0014C00: mov     rdx, rbx
 * 00000001C0014C03: call    SrbAssignQueueId
 * 00000001C0014C08: mov     al, [rdi+50h]
 * 00000001C0014C0B: mov     [r13+1000h], al
 * 00000001C0014C12: mov     ecx, [rdi+50h]
 * 00000001C0014C15: xor     ecx, [r13+1000h]
 * 00000001C0014C1C: mov     [r13+1004h], r15d
 * 00000001C0014C23: and     ecx, 300h
 * 00000001C0014C29: xor     [r13+1000h], ecx
 * 00000001C0014C30: mov     eax, [rdi+78h]
 * 00000001C0014C33: mov     [r13+1028h], eax
 * 00000001C0014C3A: mov     eax, [rdi+7Ch]
 * 00000001C0014C3D: mov     [r13+102Ch], eax
 * 00000001C0014C44: mov     eax, [rdi+80h]
 * 00000001C0014C4A: mov     [r13+1030h], eax
 * 00000001C0014C51: mov     eax, [rdi+84h]
 * 00000001C0014C57: mov     [r13+1034h], eax
 * 00000001C0014C5E: mov     eax, [rdi+88h]
 * 00000001C0014C64: mov     [r13+1038h], eax
 * 00000001C0014C6B: mov     eax, [rdi+8Ch]
 * 00000001C0014C71: mov     [r13+103Ch], eax
 * 00000001C0014C78: lea     rax, ProtocolCommandCompletion
 * 00000001C0014C7F: mov     [r13+1080h], rax
 * 00000001C0014C86: cmp     [rbx+3], r12b
 * 00000001C0014C8A: jnz     short loc_1C0014CAE
 * 00000001C0014C8C: mov     rdx, rbx
 * 00000001C0014C8F: mov     rcx, r14
 * 00000001C0014C92: call    SetPrpFromSrb
 * 00000001C0014C97: mov     esi, eax
 * 00000001C0014C99: test    eax, eax
 * 00000001C0014C9B: jnz     short loc_1C0014CA3
 * 00000001C0014C9D: mov     [rdi+10h], r12d
 * 00000001C0014CA1: jmp     short loc_1C0014CAE
 * 00000001C0014CA3: mov     dword ptr [rdi+10h], 2
 * 00000001C0014CAA: mov     byte ptr [rbx+3], 4
 * 00000001C0014CAE: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0014CB3: mov     eax, esi
 * 00000001C0014CB5: add     rsp, 30h
 * 00000001C0014CB9: pop     r15
 * 00000001C0014CBB: pop     r14
 * 00000001C0014CBD: pop     r13
 * 00000001C0014CBF: pop     r12
 * 00000001C0014CC1: pop     rdi
 * 00000001C0014CC2: pop     rsi
 * 00000001C0014CC3: pop     rbp
 * 00000001C0014CC4: retn
 */
