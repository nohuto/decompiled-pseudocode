/*
 * XREFs of NVMeFirmwareActivateCompletion @ 0x1C0012CF0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeControllerAsyncReset @ 0x1C000BF80 (NVMeControllerAsyncReset.c)
 *     FirmwareActivate @ 0x1C0010184 (FirmwareActivate.c)
 *     IsFirmwareActivateWithoutResetEnabled @ 0x1C00127C0 (IsFirmwareActivateWithoutResetEnabled.c)
 *     NVMeQueueWorkItem @ 0x1C0013BCC (NVMeQueueWorkItem.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeFirmwareActivateCompletion @ 0x1C0012CF0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0012CF0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0012CF0: mov     rax, rsp
 * 00000001C0012CF3: mov     [rax+8], rbx
 * 00000001C0012CF7: mov     [rax+10h], rbp
 * 00000001C0012CFB: mov     [rax+18h], rsi
 * 00000001C0012CFF: mov     [rax+20h], rdi
 * 00000001C0012D03: push    r12
 * 00000001C0012D05: push    r14
 * 00000001C0012D07: push    r15
 * 00000001C0012D09: sub     rsp, 70h
 * 00000001C0012D0D: mov     rdi, rcx
 * 00000001C0012D10: mov     rbx, rdx
 * 00000001C0012D13: mov     rcx, rdx
 * 00000001C0012D16: call    GetSrbExtension
 * 00000001C0012D1B: cmp     byte ptr [rdx+2], 28h ; '('
 * 00000001C0012D1F: mov     r15, rax
 * 00000001C0012D22: mov     r14b, 1
 * 00000001C0012D25: jnz     short loc_1C0012D2D
 * 00000001C0012D27: mov     rsi, [rdx+40h]
 * 00000001C0012D2B: jmp     short loc_1C0012D31
 * 00000001C0012D2D: mov     rsi, [rdx+18h]
 * 00000001C0012D31: xor     r12d, r12d
 * 00000001C0012D34: test    r8, r8
 * 00000001C0012D37: jnz     short loc_1C0012D51
 * 00000001C0012D39: lea     ecx, [r12+10h]
 * 00000001C0012D3E: mov     [rsi+14h], ecx
 * 00000001C0012D41: mov     byte ptr [rdx+3], 4
 * 00000001C0012D45: or      byte ptr [rax+109Dh], 8
 * 00000001C0012D4C: jmp     loc_1C0012EBF
 * 00000001C0012D51: movzx   edx, word ptr [r8+0Eh]
 * 00000001C0012D56: mov     eax, 0E00h
 * 00000001C0012D5B: movzx   r8d, dx
 * 00000001C0012D5F: movzx   r9d, dx
 * 00000001C0012D63: and     r8w, ax
 * 00000001C0012D67: mov     eax, 1FEh
 * 00000001C0012D6C: and     r9w, ax
 * 00000001C0012D70: setz    cl
 * 00000001C0012D73: test    r8w, r8w
 * 00000001C0012D77: setz    al
 * 00000001C0012D7A: test    al, cl
 * 00000001C0012D7C: jz      short loc_1C0012DF5
 * 00000001C0012D7E: mov     rcx, rdi
 * 00000001C0012D81: call    IsFirmwareActivateWithoutResetEnabled
 * 00000001C0012D86: test    al, al
 * 00000001C0012D88: jz      short loc_1C0012DC0
 * 00000001C0012D8A: mov     ecx, 400h
 * 00000001C0012D8F: test    [rdi+18h], ecx
 * 00000001C0012D92: jnz     short loc_1C0012DC0
 * 00000001C0012D94: mov     [rsi+14h], r12d
 * 00000001C0012D98: lea     rdx, NVMeControllerIdentifyWorkItem
 * 00000001C0012D9F: mov     rcx, rdi
 * 00000001C0012DA2: mov     [rbx+3], r14b
 * 00000001C0012DA6: call    NVMeQueueWorkItem
 * 00000001C0012DAB: test    eax, eax
 * 00000001C0012DAD: jz      loc_1C0012E9C
 * 00000001C0012DB3: mov     ebp, 20h ; ' '
 * 00000001C0012DB8: or      [rdi+18h], ebp
 * 00000001C0012DBB: jmp     loc_1C0012E9C
 * 00000001C0012DC0: mov     eax, [rdi+18h]
 * 00000001C0012DC3: mov     ebp, 20h ; ' '
 * 00000001C0012DC8: btr     eax, 0Ah
 * 00000001C0012DCC: mov     rcx, rdi
 * 00000001C0012DCF: or      eax, ebp
 * 00000001C0012DD1: mov     [rdi+18h], eax
 * 00000001C0012DD4: xor     edx, edx
 * 00000001C0012DD6: lea     r8, NVMeFirmwareActivateCompletionAfterReset
 * 00000001C0012DDD: mov     r9, rbx
 * 00000001C0012DE0: call    NVMeControllerAsyncReset
 * 00000001C0012DE5: test    al, al
 * 00000001C0012DE7: jz      loc_1C0012E7E
 * 00000001C0012DED: mov     r14b, r12b
 * 00000001C0012DF0: jmp     loc_1C0012E9C
 * 00000001C0012DF5: mov     eax, 200h
 * 00000001C0012DFA: cmp     r8w, ax
 * 00000001C0012DFE: jnz     loc_1C0012E90
 * 00000001C0012E04: shr     edx, 1
 * 00000001C0012E06: movzx   eax, dl
 * 00000001C0012E09: cmp     eax, 7
 * 00000001C0012E0C: jz      short loc_1C0012E87
 * 00000001C0012E0E: cmp     eax, 0Bh
 * 00000001C0012E11: jz      short loc_1C0012E79
 * 00000001C0012E13: add     eax, 0FFFFFFF0h
 * 00000001C0012E16: mov     rcx, rdi
 * 00000001C0012E19: cmp     eax, 1
 * 00000001C0012E1C: ja      short loc_1C0012E2F
 * 00000001C0012E1E: mov     ebp, 20h ; ' '
 * 00000001C0012E23: or      [rdi+18h], ebp
 * 00000001C0012E26: cmp     r9w, bp
 * 00000001C0012E2A: setz    dl
 * 00000001C0012E2D: jmp     short loc_1C0012DD6
 * 00000001C0012E2F: call    IsFirmwareActivateWithoutResetEnabled
 * 00000001C0012E34: test    al, al
 * 00000001C0012E36: jz      short loc_1C0012E64
 * 00000001C0012E38: mov     eax, [rdi+18h]
 * 00000001C0012E3B: mov     ecx, 400h
 * 00000001C0012E40: test    ecx, eax
 * 00000001C0012E42: jnz     short loc_1C0012E64
 * 00000001C0012E44: or      eax, ecx
 * 00000001C0012E46: mov     rdx, rbx
 * 00000001C0012E49: mov     rcx, rdi
 * 00000001C0012E4C: mov     [rdi+18h], eax
 * 00000001C0012E4F: mov     r14b, r12b
 * 00000001C0012E52: call    FirmwareActivate
 * 00000001C0012E57: mov     rdx, rbx
 * 00000001C0012E5A: mov     rcx, rdi
 * 00000001C0012E5D: call    ProcessCommand
 * 00000001C0012E62: jmp     short loc_1C0012E9C
 * 00000001C0012E64: mov     eax, 6
 * 00000001C0012E69: cmp     r9w, 0Ch
 * 00000001C0012E6E: lea     ecx, [rax+0Ah]
 * 00000001C0012E71: cmovnz  eax, ecx
 * 00000001C0012E74: mov     [rsi+14h], eax
 * 00000001C0012E77: jmp     short loc_1C0012E98
 * 00000001C0012E79: mov     ebp, 20h ; ' '
 * 00000001C0012E7E: mov     [rsi+14h], ebp
 * 00000001C0012E81: mov     [rbx+3], r14b
 * 00000001C0012E85: jmp     short loc_1C0012E9C
 * 00000001C0012E87: mov     dword ptr [rsi+14h], 7
 * 00000001C0012E8E: jmp     short loc_1C0012E98
 * 00000001C0012E90: mov     ecx, 10h
 * 00000001C0012E95: mov     [rsi+14h], ecx
 * 00000001C0012E98: mov     byte ptr [rbx+3], 4
 * 00000001C0012E9C: mov     cl, [r15+109Dh]
 * 00000001C0012EA3: mov     al, r14b
 * 00000001C0012EA6: and     cl, 0F7h
 * 00000001C0012EA9: shl     al, 3
 * 00000001C0012EAC: or      cl, al
 * 00000001C0012EAE: mov     [r15+109Dh], cl
 * 00000001C0012EB5: test    r14b, r14b
 * 00000001C0012EB8: jz      short loc_1C0012EBF
 * 00000001C0012EBA: btr     dword ptr [rdi+18h], 0Bh
 * 00000001C0012EBF: movzx   ecx, byte ptr [rbx+3]
 * 00000001C0012EC3: cmp     cl, 1
 * 00000001C0012EC6: jz      short loc_1C0012F38
 * 00000001C0012EC8: mov     eax, [rsi+14h]
 * 00000001C0012ECB: mov     r9d, 1
 * 00000001C0012ED1: mov     [rsp+88h+var_20], rax
 * 00000001C0012ED6: xor     r8d, r8d
 * 00000001C0012ED9: lea     rax, aReturncode; "ReturnCode"
 * 00000001C0012EE0: mov     rdx, rdi
 * 00000001C0012EE3: mov     [rsp+88h+var_28], rax
 * 00000001C0012EE8: lea     rax, aSrbstatus; "SrbStatus"
 * 00000001C0012EEF: mov     [rsp+88h+var_30], rcx
 * 00000001C0012EF4: lea     ecx, [r9+54h]
 * 00000001C0012EF8: mov     [rsp+88h+var_38], rax
 * 00000001C0012EFD: lea     rax, aFirmwareActiva; "Firmware Activate Complete"
 * 00000001C0012F04: mov     [rsp+88h+var_40], rbx
 * 00000001C0012F09: mov     [rsp+88h+var_48], r12d
 * 00000001C0012F0E: mov     [rsp+88h+var_50], 2
 * 00000001C0012F16: mov     [rsp+88h+var_58], 40h ; '@'
 * 00000001C0012F1F: mov     [rsp+88h+var_60], rax
 * 00000001C0012F24: mov     [rsp+88h+var_68], 1
 * 00000001C0012F2C: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0012F33: nop     dword ptr [rax+rax+00h]
 * 00000001C0012F38: lea     r11, [rsp+88h+var_18]
 * 00000001C0012F3D: mov     rbx, [r11+20h]
 * 00000001C0012F41: mov     rbp, [r11+28h]
 * 00000001C0012F45: mov     rsi, [r11+30h]
 * 00000001C0012F49: mov     rdi, [r11+38h]
 * 00000001C0012F4D: mov     rsp, r11
 * 00000001C0012F50: pop     r15
 * 00000001C0012F52: pop     r14
 * 00000001C0012F54: pop     r12
 * 00000001C0012F56: retn
 */
