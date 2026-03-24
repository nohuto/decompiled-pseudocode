/*
 * XREFs of NVMeFirmwareActivateCompletion @ 0x1C0012C70
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeControllerAsyncReset @ 0x1C000BF30 (NVMeControllerAsyncReset.c)
 *     FirmwareActivate @ 0x1C0010104 (FirmwareActivate.c)
 *     IsFirmwareActivateWithoutResetEnabled @ 0x1C0012740 (IsFirmwareActivateWithoutResetEnabled.c)
 *     NVMeQueueWorkItem @ 0x1C0013B4C (NVMeQueueWorkItem.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeFirmwareActivateCompletion @ 0x1C0012C70
 * Reason: Hex-Rays returned no pseudocode for 0x1C0012C70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0012C70: mov     rax, rsp
 * 00000001C0012C73: mov     [rax+8], rbx
 * 00000001C0012C77: mov     [rax+10h], rbp
 * 00000001C0012C7B: mov     [rax+18h], rsi
 * 00000001C0012C7F: mov     [rax+20h], rdi
 * 00000001C0012C83: push    r12
 * 00000001C0012C85: push    r14
 * 00000001C0012C87: push    r15
 * 00000001C0012C89: sub     rsp, 70h
 * 00000001C0012C8D: mov     rdi, rcx
 * 00000001C0012C90: mov     rbx, rdx
 * 00000001C0012C93: mov     rcx, rdx
 * 00000001C0012C96: call    GetSrbExtension
 * 00000001C0012C9B: cmp     byte ptr [rdx+2], 28h ; '('
 * 00000001C0012C9F: mov     r15, rax
 * 00000001C0012CA2: mov     r14b, 1
 * 00000001C0012CA5: jnz     short loc_1C0012CAD
 * 00000001C0012CA7: mov     rsi, [rdx+40h]
 * 00000001C0012CAB: jmp     short loc_1C0012CB1
 * 00000001C0012CAD: mov     rsi, [rdx+18h]
 * 00000001C0012CB1: xor     r12d, r12d
 * 00000001C0012CB4: test    r8, r8
 * 00000001C0012CB7: jnz     short loc_1C0012CD1
 * 00000001C0012CB9: lea     ecx, [r12+10h]
 * 00000001C0012CBE: mov     [rsi+14h], ecx
 * 00000001C0012CC1: mov     byte ptr [rdx+3], 4
 * 00000001C0012CC5: or      byte ptr [rax+109Dh], 8
 * 00000001C0012CCC: jmp     loc_1C0012E3F
 * 00000001C0012CD1: movzx   edx, word ptr [r8+0Eh]
 * 00000001C0012CD6: mov     eax, 0E00h
 * 00000001C0012CDB: movzx   r8d, dx
 * 00000001C0012CDF: movzx   r9d, dx
 * 00000001C0012CE3: and     r8w, ax
 * 00000001C0012CE7: mov     eax, 1FEh
 * 00000001C0012CEC: and     r9w, ax
 * 00000001C0012CF0: setz    cl
 * 00000001C0012CF3: test    r8w, r8w
 * 00000001C0012CF7: setz    al
 * 00000001C0012CFA: test    al, cl
 * 00000001C0012CFC: jz      short loc_1C0012D75
 * 00000001C0012CFE: mov     rcx, rdi
 * 00000001C0012D01: call    IsFirmwareActivateWithoutResetEnabled
 * 00000001C0012D06: test    al, al
 * 00000001C0012D08: jz      short loc_1C0012D40
 * 00000001C0012D0A: mov     ecx, 400h
 * 00000001C0012D0F: test    [rdi+18h], ecx
 * 00000001C0012D12: jnz     short loc_1C0012D40
 * 00000001C0012D14: mov     [rsi+14h], r12d
 * 00000001C0012D18: lea     rdx, NVMeControllerIdentifyWorkItem
 * 00000001C0012D1F: mov     rcx, rdi
 * 00000001C0012D22: mov     [rbx+3], r14b
 * 00000001C0012D26: call    NVMeQueueWorkItem
 * 00000001C0012D2B: test    eax, eax
 * 00000001C0012D2D: jz      loc_1C0012E1C
 * 00000001C0012D33: mov     ebp, 20h ; ' '
 * 00000001C0012D38: or      [rdi+18h], ebp
 * 00000001C0012D3B: jmp     loc_1C0012E1C
 * 00000001C0012D40: mov     eax, [rdi+18h]
 * 00000001C0012D43: mov     ebp, 20h ; ' '
 * 00000001C0012D48: btr     eax, 0Ah
 * 00000001C0012D4C: mov     rcx, rdi
 * 00000001C0012D4F: or      eax, ebp
 * 00000001C0012D51: mov     [rdi+18h], eax
 * 00000001C0012D54: xor     edx, edx
 * 00000001C0012D56: lea     r8, NVMeFirmwareActivateCompletionAfterReset
 * 00000001C0012D5D: mov     r9, rbx
 * 00000001C0012D60: call    NVMeControllerAsyncReset
 * 00000001C0012D65: test    al, al
 * 00000001C0012D67: jz      loc_1C0012DFE
 * 00000001C0012D6D: mov     r14b, r12b
 * 00000001C0012D70: jmp     loc_1C0012E1C
 * 00000001C0012D75: mov     eax, 200h
 * 00000001C0012D7A: cmp     r8w, ax
 * 00000001C0012D7E: jnz     loc_1C0012E10
 * 00000001C0012D84: shr     edx, 1
 * 00000001C0012D86: movzx   eax, dl
 * 00000001C0012D89: cmp     eax, 7
 * 00000001C0012D8C: jz      short loc_1C0012E07
 * 00000001C0012D8E: cmp     eax, 0Bh
 * 00000001C0012D91: jz      short loc_1C0012DF9
 * 00000001C0012D93: add     eax, 0FFFFFFF0h
 * 00000001C0012D96: mov     rcx, rdi
 * 00000001C0012D99: cmp     eax, 1
 * 00000001C0012D9C: ja      short loc_1C0012DAF
 * 00000001C0012D9E: mov     ebp, 20h ; ' '
 * 00000001C0012DA3: or      [rdi+18h], ebp
 * 00000001C0012DA6: cmp     r9w, bp
 * 00000001C0012DAA: setz    dl
 * 00000001C0012DAD: jmp     short loc_1C0012D56
 * 00000001C0012DAF: call    IsFirmwareActivateWithoutResetEnabled
 * 00000001C0012DB4: test    al, al
 * 00000001C0012DB6: jz      short loc_1C0012DE4
 * 00000001C0012DB8: mov     eax, [rdi+18h]
 * 00000001C0012DBB: mov     ecx, 400h
 * 00000001C0012DC0: test    ecx, eax
 * 00000001C0012DC2: jnz     short loc_1C0012DE4
 * 00000001C0012DC4: or      eax, ecx
 * 00000001C0012DC6: mov     rdx, rbx
 * 00000001C0012DC9: mov     rcx, rdi
 * 00000001C0012DCC: mov     [rdi+18h], eax
 * 00000001C0012DCF: mov     r14b, r12b
 * 00000001C0012DD2: call    FirmwareActivate
 * 00000001C0012DD7: mov     rdx, rbx
 * 00000001C0012DDA: mov     rcx, rdi
 * 00000001C0012DDD: call    ProcessCommand
 * 00000001C0012DE2: jmp     short loc_1C0012E1C
 * 00000001C0012DE4: mov     eax, 6
 * 00000001C0012DE9: cmp     r9w, 0Ch
 * 00000001C0012DEE: lea     ecx, [rax+0Ah]
 * 00000001C0012DF1: cmovnz  eax, ecx
 * 00000001C0012DF4: mov     [rsi+14h], eax
 * 00000001C0012DF7: jmp     short loc_1C0012E18
 * 00000001C0012DF9: mov     ebp, 20h ; ' '
 * 00000001C0012DFE: mov     [rsi+14h], ebp
 * 00000001C0012E01: mov     [rbx+3], r14b
 * 00000001C0012E05: jmp     short loc_1C0012E1C
 * 00000001C0012E07: mov     dword ptr [rsi+14h], 7
 * 00000001C0012E0E: jmp     short loc_1C0012E18
 * 00000001C0012E10: mov     ecx, 10h
 * 00000001C0012E15: mov     [rsi+14h], ecx
 * 00000001C0012E18: mov     byte ptr [rbx+3], 4
 * 00000001C0012E1C: mov     cl, [r15+109Dh]
 * 00000001C0012E23: mov     al, r14b
 * 00000001C0012E26: and     cl, 0F7h
 * 00000001C0012E29: shl     al, 3
 * 00000001C0012E2C: or      cl, al
 * 00000001C0012E2E: mov     [r15+109Dh], cl
 * 00000001C0012E35: test    r14b, r14b
 * 00000001C0012E38: jz      short loc_1C0012E3F
 * 00000001C0012E3A: btr     dword ptr [rdi+18h], 0Bh
 * 00000001C0012E3F: movzx   ecx, byte ptr [rbx+3]
 * 00000001C0012E43: cmp     cl, 1
 * 00000001C0012E46: jz      short loc_1C0012EB8
 * 00000001C0012E48: mov     eax, [rsi+14h]
 * 00000001C0012E4B: mov     r9d, 1
 * 00000001C0012E51: mov     [rsp+88h+var_20], rax
 * 00000001C0012E56: xor     r8d, r8d
 * 00000001C0012E59: lea     rax, aReturncode; "ReturnCode"
 * 00000001C0012E60: mov     rdx, rdi
 * 00000001C0012E63: mov     [rsp+88h+var_28], rax
 * 00000001C0012E68: lea     rax, aSrbstatus; "SrbStatus"
 * 00000001C0012E6F: mov     [rsp+88h+var_30], rcx
 * 00000001C0012E74: lea     ecx, [r9+54h]
 * 00000001C0012E78: mov     [rsp+88h+var_38], rax
 * 00000001C0012E7D: lea     rax, aFirmwareActiva; "Firmware Activate Complete"
 * 00000001C0012E84: mov     [rsp+88h+var_40], rbx
 * 00000001C0012E89: mov     [rsp+88h+var_48], r12d
 * 00000001C0012E8E: mov     [rsp+88h+var_50], 2
 * 00000001C0012E96: mov     [rsp+88h+var_58], 40h ; '@'
 * 00000001C0012E9F: mov     [rsp+88h+var_60], rax
 * 00000001C0012EA4: mov     [rsp+88h+var_68], 1
 * 00000001C0012EAC: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0012EB3: nop     dword ptr [rax+rax+00h]
 * 00000001C0012EB8: lea     r11, [rsp+88h+var_18]
 * 00000001C0012EBD: mov     rbx, [r11+20h]
 * 00000001C0012EC1: mov     rbp, [r11+28h]
 * 00000001C0012EC5: mov     rsi, [r11+30h]
 * 00000001C0012EC9: mov     rdi, [r11+38h]
 * 00000001C0012ECD: mov     rsp, r11
 * 00000001C0012ED0: pop     r15
 * 00000001C0012ED2: pop     r14
 * 00000001C0012ED4: pop     r12
 * 00000001C0012ED6: retn
 */
