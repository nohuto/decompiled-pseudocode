/*
 * XREFs of ProtocolCommandToNVMe @ 0x1C00149A4
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0003960 (NVMeHwBuildIo.c)
 * Callees:
 *     SetPrpFromSrb @ 0x1C0001AE8 (SetPrpFromSrb.c)
 *     GetNamespaceId @ 0x1C0004344 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     GetControllerMaxTransferSize @ 0x1C000474C (GetControllerMaxTransferSize.c)
 *     FillClippedSGL @ 0x1C0010024 (FillClippedSGL.c)
 *     NVMeValidateProtocolCommandRequest @ 0x1C0014090 (NVMeValidateProtocolCommandRequest.c)
 */

/*
 * Hex-Rays decompilation failed for ProtocolCommandToNVMe @ 0x1C00149A4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00149A4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00149A4: mov     [rsp+arg_0], rbx
 * 00000001C00149A9: push    rbp
 * 00000001C00149AA: push    rsi
 * 00000001C00149AB: push    rdi
 * 00000001C00149AC: push    r12
 * 00000001C00149AE: push    r13
 * 00000001C00149B0: push    r14
 * 00000001C00149B2: push    r15
 * 00000001C00149B4: sub     rsp, 30h
 * 00000001C00149B8: mov     r14, rcx
 * 00000001C00149BB: mov     rbx, rdx
 * 00000001C00149BE: mov     rcx, rdx
 * 00000001C00149C1: call    GetSrbExtension
 * 00000001C00149C6: xor     r12d, r12d
 * 00000001C00149C9: mov     r13, rax
 * 00000001C00149CC: cmp     byte ptr [rdx+2], 28h ; '('
 * 00000001C00149D0: mov     ebp, r12d
 * 00000001C00149D3: mov     [rsp+68h+arg_10], r12
 * 00000001C00149DB: jnz     short loc_1C00149E3
 * 00000001C00149DD: mov     rdi, [rdx+40h]
 * 00000001C00149E1: jmp     short loc_1C00149E7
 * 00000001C00149E3: mov     rdi, [rdx+18h]
 * 00000001C00149E7: mov     rcx, r14
 * 00000001C00149EA: call    NVMeValidateProtocolCommandRequest
 * 00000001C00149EF: mov     esi, eax
 * 00000001C00149F1: test    eax, eax
 * 00000001C00149F3: jnz     loc_1C0014C06
 * 00000001C00149F9: cmp     [rdi+24h], r12d
 * 00000001C00149FD: jbe     short loc_1C0014A05
 * 00000001C00149FF: mov     r15d, [rdi+34h]
 * 00000001C0014A03: jmp     short loc_1C0014A13
 * 00000001C0014A05: cmp     [rdi+20h], r12d
 * 00000001C0014A09: jbe     loc_1C0014B2A
 * 00000001C0014A0F: mov     r15d, [rdi+30h]
 * 00000001C0014A13: mov     eax, r15d
 * 00000001C0014A16: mov     ebp, eax
 * 00000001C0014A18: add     rbp, rdi
 * 00000001C0014A1B: jz      loc_1C0014B2A
 * 00000001C0014A21: mov     eax, [r14+38h]
 * 00000001C0014A25: test    al, 8
 * 00000001C0014A27: jnz     loc_1C0014B23
 * 00000001C0014A2D: mov     rcx, r14
 * 00000001C0014A30: call    GetControllerMaxTransferSize
 * 00000001C0014A35: lea     rcx, [rsp+68h+arg_10]
 * 00000001C0014A3D: mov     r9d, 656D764Eh
 * 00000001C0014A43: mov     [rsp+68h+var_48], rcx
 * 00000001C0014A48: mov     rdx, r14
 * 00000001C0014A4B: xor     ecx, ecx
 * 00000001C0014A4D: lea     r12d, [rax-1]
 * 00000001C0014A51: shr     r12d, 0Ch
 * 00000001C0014A55: add     r12d, 2
 * 00000001C0014A59: lea     eax, [r12+r12*2]
 * 00000001C0014A5D: lea     eax, ds:10h[rax*8]
 * 00000001C0014A64: mov     r8d, eax
 * 00000001C0014A67: mov     [rsp+68h+arg_8], eax
 * 00000001C0014A6B: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0014A72: nop     dword ptr [rax+rax+00h]
 * 00000001C0014A77: mov     rcx, [rsp+68h+arg_10]
 * 00000001C0014A7F: test    rcx, rcx
 * 00000001C0014A82: jnz     short loc_1C0014A9C
 * 00000001C0014A84: mov     dword ptr [rdi+10h], 7
 * 00000001C0014A8B: mov     esi, 0C1000001h
 * 00000001C0014A90: mov     byte ptr [rbx+3], 15h
 * 00000001C0014A94: xor     r12d, r12d
 * 00000001C0014A97: jmp     loc_1C0014C06
 * 00000001C0014A9C: mov     edx, [rsp+68h+arg_8]
 * 00000001C0014AA0: call    NVMeZeroMemory
 * 00000001C0014AA5: mov     rdx, rbx
 * 00000001C0014AA8: mov     rcx, r14
 * 00000001C0014AAB: call    cs:__imp_StorPortGetScatterGatherList
 * 00000001C0014AB2: nop     dword ptr [rax+rax+00h]
 * 00000001C0014AB7: mov     rdx, [rsp+68h+arg_10]
 * 00000001C0014ABF: mov     r9d, r15d
 * 00000001C0014AC2: mov     rcx, rax
 * 00000001C0014AC5: mov     r8d, r12d
 * 00000001C0014AC8: call    FillClippedSGL
 * 00000001C0014ACD: xor     r12d, r12d
 * 00000001C0014AD0: test    al, al
 * 00000001C0014AD2: jnz     short loc_1C0014B12
 * 00000001C0014AD4: mov     r8, [rsp+68h+arg_10]
 * 00000001C0014ADC: test    r8, r8
 * 00000001C0014ADF: jz      short loc_1C0014AFD
 * 00000001C0014AE1: mov     rdx, r14
 * 00000001C0014AE4: lea     ecx, [r12+1]
 * 00000001C0014AE9: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0014AF0: nop     dword ptr [rax+rax+00h]
 * 00000001C0014AF5: mov     [rsp+68h+arg_10], r12
 * 00000001C0014AFD: mov     dword ptr [rdi+10h], 3
 * 00000001C0014B04: mov     esi, 0C1000001h
 * 00000001C0014B09: mov     byte ptr [rbx+3], 15h
 * 00000001C0014B0D: jmp     loc_1C0014C06
 * 00000001C0014B12: mov     rax, [rsp+68h+arg_10]
 * 00000001C0014B1A: mov     [r13+1078h], rax
 * 00000001C0014B21: jmp     short loc_1C0014B2A
 * 00000001C0014B23: mov     [r13+1078h], r15d
 * 00000001C0014B2A: cmp     [rdi+0Ch], r12d
 * 00000001C0014B2E: jge     short loc_1C0014B36
 * 00000001C0014B30: mov     r15d, [rdi+54h]
 * 00000001C0014B34: jmp     short loc_1C0014B56
 * 00000001C0014B36: cmp     byte ptr [rbx+2], 28h ; '('
 * 00000001C0014B3A: jnz     short loc_1C0014B45
 * 00000001C0014B3C: mov     eax, [rbx+34h]
 * 00000001C0014B3F: mov     cl, [rax+rbx+0Ah]
 * 00000001C0014B43: jmp     short loc_1C0014B48
 * 00000001C0014B45: mov     cl, [rbx+7]
 * 00000001C0014B48: movzx   edx, cl
 * 00000001C0014B4B: mov     rcx, r14
 * 00000001C0014B4E: call    GetNamespaceId
 * 00000001C0014B53: mov     r15d, eax
 * 00000001C0014B56: cmp     dword ptr [rdi+38h], 1
 * 00000001C0014B5A: mov     cl, [r13+109Dh]
 * 00000001C0014B61: setz    dl
 * 00000001C0014B64: and     cl, 0FEh
 * 00000001C0014B67: or      dl, cl
 * 00000001C0014B69: and     dl, 0FDh
 * 00000001C0014B6C: neg     rbp
 * 00000001C0014B6F: sbb     cl, cl
 * 00000001C0014B71: and     cl, 2
 * 00000001C0014B74: or      dl, cl
 * 00000001C0014B76: mov     rcx, r14
 * 00000001C0014B79: mov     [r13+109Dh], dl
 * 00000001C0014B80: mov     rdx, rbx
 * 00000001C0014B83: call    SrbAssignQueueId
 * 00000001C0014B88: mov     al, [rdi+50h]
 * 00000001C0014B8B: mov     [r13+1000h], al
 * 00000001C0014B92: mov     ecx, [rdi+50h]
 * 00000001C0014B95: xor     ecx, [r13+1000h]
 * 00000001C0014B9C: mov     [r13+1004h], r15d
 * 00000001C0014BA3: and     ecx, 300h
 * 00000001C0014BA9: xor     [r13+1000h], ecx
 * 00000001C0014BB0: mov     eax, [rdi+78h]
 * 00000001C0014BB3: mov     [r13+1028h], eax
 * 00000001C0014BBA: mov     eax, [rdi+7Ch]
 * 00000001C0014BBD: mov     [r13+102Ch], eax
 * 00000001C0014BC4: mov     eax, [rdi+80h]
 * 00000001C0014BCA: mov     [r13+1030h], eax
 * 00000001C0014BD1: mov     eax, [rdi+84h]
 * 00000001C0014BD7: mov     [r13+1034h], eax
 * 00000001C0014BDE: mov     eax, [rdi+88h]
 * 00000001C0014BE4: mov     [r13+1038h], eax
 * 00000001C0014BEB: mov     eax, [rdi+8Ch]
 * 00000001C0014BF1: mov     [r13+103Ch], eax
 * 00000001C0014BF8: lea     rax, ProtocolCommandCompletion
 * 00000001C0014BFF: mov     [r13+1080h], rax
 * 00000001C0014C06: cmp     [rbx+3], r12b
 * 00000001C0014C0A: jnz     short loc_1C0014C2E
 * 00000001C0014C0C: mov     rdx, rbx
 * 00000001C0014C0F: mov     rcx, r14
 * 00000001C0014C12: call    SetPrpFromSrb
 * 00000001C0014C17: mov     esi, eax
 * 00000001C0014C19: test    eax, eax
 * 00000001C0014C1B: jnz     short loc_1C0014C23
 * 00000001C0014C1D: mov     [rdi+10h], r12d
 * 00000001C0014C21: jmp     short loc_1C0014C2E
 * 00000001C0014C23: mov     dword ptr [rdi+10h], 2
 * 00000001C0014C2A: mov     byte ptr [rbx+3], 4
 * 00000001C0014C2E: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0014C33: mov     eax, esi
 * 00000001C0014C35: add     rsp, 30h
 * 00000001C0014C39: pop     r15
 * 00000001C0014C3B: pop     r14
 * 00000001C0014C3D: pop     r13
 * 00000001C0014C3F: pop     r12
 * 00000001C0014C41: pop     rdi
 * 00000001C0014C42: pop     rsi
 * 00000001C0014C43: pop     rbp
 * 00000001C0014C44: retn
 */
