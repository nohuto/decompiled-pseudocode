/*
 * XREFs of NVMeFirmwareDownloadCompletion @ 0x1C0012FC0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeFirmwareDownloadCompletion @ 0x1C0012FC0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0012FC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0012FC0: mov     rax, rsp
 * 00000001C0012FC3: mov     [rax+8], rbx
 * 00000001C0012FC7: mov     [rax+10h], rbp
 * 00000001C0012FCB: mov     [rax+18h], rsi
 * 00000001C0012FCF: mov     [rax+20h], rdi
 * 00000001C0012FD3: push    r14
 * 00000001C0012FD5: sub     rsp, 70h
 * 00000001C0012FD9: mov     rbp, rcx
 * 00000001C0012FDC: mov     r14, r8
 * 00000001C0012FDF: mov     rcx, rdx
 * 00000001C0012FE2: mov     rbx, rdx
 * 00000001C0012FE5: call    GetSrbExtension
 * 00000001C0012FEA: cmp     byte ptr [rdx+2], 28h ; '('
 * 00000001C0012FEE: mov     rsi, rax
 * 00000001C0012FF1: jnz     short loc_1C0012FF9
 * 00000001C0012FF3: mov     rdi, [rdx+40h]
 * 00000001C0012FF7: jmp     short loc_1C0012FFD
 * 00000001C0012FF9: mov     rdi, [rdx+18h]
 * 00000001C0012FFD: xor     eax, eax
 * 00000001C0012FFF: cmp     byte ptr [rdx+3], 1
 * 00000001C0013003: setnz   al
 * 00000001C0013006: mov     [rdi+14h], eax
 * 00000001C0013009: mov     eax, [rbp+38h]
 * 00000001C001300C: test    al, 8
 * 00000001C001300E: jnz     short loc_1C001303A
 * 00000001C0013010: mov     r8, [rsi+1078h]
 * 00000001C0013017: test    r8, r8
 * 00000001C001301A: jz      short loc_1C001303A
 * 00000001C001301C: mov     rdx, rbp
 * 00000001C001301F: mov     ecx, 1
 * 00000001C0013024: call    cs:__imp_StorPortExtendedFunction
 * 00000001C001302B: nop     dword ptr [rax+rax+00h]
 * 00000001C0013030: and     qword ptr [rsi+1078h], 0
 * 00000001C0013038: jmp     short loc_1C0013041
 * 00000001C001303A: and     dword ptr [rsi+1078h], 0
 * 00000001C0013041: or      byte ptr [rsi+109Dh], 8
 * 00000001C0013048: cmp     byte ptr [rbx+3], 1
 * 00000001C001304C: jz      loc_1C00130E8
 * 00000001C0013052: movzx   eax, word ptr [r14+0Eh]
 * 00000001C0013057: mov     ecx, 6
 * 00000001C001305C: shr     eax, 1
 * 00000001C001305E: movzx   edx, al
 * 00000001C0013061: sub     edx, ecx
 * 00000001C0013063: jz      short loc_1C0013074
 * 00000001C0013065: mov     ecx, 10h
 * 00000001C001306A: cmp     edx, 1
 * 00000001C001306D: jnz     short loc_1C0013074
 * 00000001C001306F: mov     ecx, 7
 * 00000001C0013074: mov     [rsp+78h+var_10], rcx
 * 00000001C0013079: mov     r9d, 1
 * 00000001C001307F: mov     [rdi+14h], ecx
 * 00000001C0013082: xor     r8d, r8d
 * 00000001C0013085: movzx   eax, byte ptr [rbx+3]
 * 00000001C0013089: lea     rcx, aReturncode; "ReturnCode"
 * 00000001C0013090: mov     [rsp+78h+var_18], rcx
 * 00000001C0013095: mov     rdx, rbp
 * 00000001C0013098: mov     [rsp+78h+var_20], rax
 * 00000001C001309D: lea     ecx, [r9+54h]
 * 00000001C00130A1: lea     rax, aSrbstatus; "SrbStatus"
 * 00000001C00130A8: mov     [rsp+78h+var_28], rax
 * 00000001C00130AD: lea     rax, aFirmwareDownlo; "Firmware Download Complete"
 * 00000001C00130B4: mov     [rsp+78h+var_30], rbx
 * 00000001C00130B9: and     [rsp+78h+var_38], 0
 * 00000001C00130BE: mov     [rsp+78h+var_40], 2
 * 00000001C00130C6: mov     [rsp+78h+var_48], 40h ; '@'
 * 00000001C00130CF: mov     [rsp+78h+var_50], rax
 * 00000001C00130D4: mov     [rsp+78h+var_58], 1
 * 00000001C00130DC: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00130E3: nop     dword ptr [rax+rax+00h]
 * 00000001C00130E8: lea     r11, [rsp+78h+var_8]
 * 00000001C00130ED: mov     rbx, [r11+10h]
 * 00000001C00130F1: mov     rbp, [r11+18h]
 * 00000001C00130F5: mov     rsi, [r11+20h]
 * 00000001C00130F9: mov     rdi, [r11+28h]
 * 00000001C00130FD: mov     rsp, r11
 * 00000001C0013100: pop     r14
 * 00000001C0013102: retn
 */
