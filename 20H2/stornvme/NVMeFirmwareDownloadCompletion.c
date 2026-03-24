/*
 * XREFs of NVMeFirmwareDownloadCompletion @ 0x1C0012F40
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeFirmwareDownloadCompletion @ 0x1C0012F40
 * Reason: Hex-Rays returned no pseudocode for 0x1C0012F40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0012F40: mov     rax, rsp
 * 00000001C0012F43: mov     [rax+8], rbx
 * 00000001C0012F47: mov     [rax+10h], rbp
 * 00000001C0012F4B: mov     [rax+18h], rsi
 * 00000001C0012F4F: mov     [rax+20h], rdi
 * 00000001C0012F53: push    r14
 * 00000001C0012F55: sub     rsp, 70h
 * 00000001C0012F59: mov     rbp, rcx
 * 00000001C0012F5C: mov     r14, r8
 * 00000001C0012F5F: mov     rcx, rdx
 * 00000001C0012F62: mov     rbx, rdx
 * 00000001C0012F65: call    GetSrbExtension
 * 00000001C0012F6A: cmp     byte ptr [rdx+2], 28h ; '('
 * 00000001C0012F6E: mov     rsi, rax
 * 00000001C0012F71: jnz     short loc_1C0012F79
 * 00000001C0012F73: mov     rdi, [rdx+40h]
 * 00000001C0012F77: jmp     short loc_1C0012F7D
 * 00000001C0012F79: mov     rdi, [rdx+18h]
 * 00000001C0012F7D: xor     eax, eax
 * 00000001C0012F7F: cmp     byte ptr [rdx+3], 1
 * 00000001C0012F83: setnz   al
 * 00000001C0012F86: mov     [rdi+14h], eax
 * 00000001C0012F89: mov     eax, [rbp+38h]
 * 00000001C0012F8C: test    al, 8
 * 00000001C0012F8E: jnz     short loc_1C0012FBA
 * 00000001C0012F90: mov     r8, [rsi+1078h]
 * 00000001C0012F97: test    r8, r8
 * 00000001C0012F9A: jz      short loc_1C0012FBA
 * 00000001C0012F9C: mov     rdx, rbp
 * 00000001C0012F9F: mov     ecx, 1
 * 00000001C0012FA4: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0012FAB: nop     dword ptr [rax+rax+00h]
 * 00000001C0012FB0: and     qword ptr [rsi+1078h], 0
 * 00000001C0012FB8: jmp     short loc_1C0012FC1
 * 00000001C0012FBA: and     dword ptr [rsi+1078h], 0
 * 00000001C0012FC1: or      byte ptr [rsi+109Dh], 8
 * 00000001C0012FC8: cmp     byte ptr [rbx+3], 1
 * 00000001C0012FCC: jz      loc_1C0013068
 * 00000001C0012FD2: movzx   eax, word ptr [r14+0Eh]
 * 00000001C0012FD7: mov     ecx, 6
 * 00000001C0012FDC: shr     eax, 1
 * 00000001C0012FDE: movzx   edx, al
 * 00000001C0012FE1: sub     edx, ecx
 * 00000001C0012FE3: jz      short loc_1C0012FF4
 * 00000001C0012FE5: mov     ecx, 10h
 * 00000001C0012FEA: cmp     edx, 1
 * 00000001C0012FED: jnz     short loc_1C0012FF4
 * 00000001C0012FEF: mov     ecx, 7
 * 00000001C0012FF4: mov     [rsp+78h+var_10], rcx
 * 00000001C0012FF9: mov     r9d, 1
 * 00000001C0012FFF: mov     [rdi+14h], ecx
 * 00000001C0013002: xor     r8d, r8d
 * 00000001C0013005: movzx   eax, byte ptr [rbx+3]
 * 00000001C0013009: lea     rcx, aReturncode; "ReturnCode"
 * 00000001C0013010: mov     [rsp+78h+var_18], rcx
 * 00000001C0013015: mov     rdx, rbp
 * 00000001C0013018: mov     [rsp+78h+var_20], rax
 * 00000001C001301D: lea     ecx, [r9+54h]
 * 00000001C0013021: lea     rax, aSrbstatus; "SrbStatus"
 * 00000001C0013028: mov     [rsp+78h+var_28], rax
 * 00000001C001302D: lea     rax, aFirmwareDownlo; "Firmware Download Complete"
 * 00000001C0013034: mov     [rsp+78h+var_30], rbx
 * 00000001C0013039: and     [rsp+78h+var_38], 0
 * 00000001C001303E: mov     [rsp+78h+var_40], 2
 * 00000001C0013046: mov     [rsp+78h+var_48], 40h ; '@'
 * 00000001C001304F: mov     [rsp+78h+var_50], rax
 * 00000001C0013054: mov     [rsp+78h+var_58], 1
 * 00000001C001305C: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0013063: nop     dword ptr [rax+rax+00h]
 * 00000001C0013068: lea     r11, [rsp+78h+var_8]
 * 00000001C001306D: mov     rbx, [r11+10h]
 * 00000001C0013071: mov     rbp, [r11+18h]
 * 00000001C0013075: mov     rsi, [r11+20h]
 * 00000001C0013079: mov     rdi, [r11+28h]
 * 00000001C001307D: mov     rsp, r11
 * 00000001C0013080: pop     r14
 * 00000001C0013082: retn
 */
