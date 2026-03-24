/*
 * XREFs of ControllerReset @ 0x1C0009E6C
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0009230 (NVMeHwFindAdapter.c)
 *     NVMeControllerPowerUp @ 0x1C000CDB8 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000D088 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0016C10 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ControllerReset @ 0x1C0009E6C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0009E6C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0009E6C: mov     [rsp+arg_10], rbx
 * 00000001C0009E71: mov     [rsp+arg_18], rbp
 * 00000001C0009E76: push    rsi
 * 00000001C0009E77: push    rdi
 * 00000001C0009E78: push    r14
 * 00000001C0009E7A: sub     rsp, 60h
 * 00000001C0009E7E: mov     eax, 0CCCCCCCDh
 * 00000001C0009E83: xor     sil, sil
 * 00000001C0009E86: mul     dword ptr [rcx+0B4h]
 * 00000001C0009E8C: mov     rax, [rcx+98h]
 * 00000001C0009E93: mov     rdi, rcx
 * 00000001C0009E96: mov     ebp, edx
 * 00000001C0009E98: shr     ebp, 3
 * 00000001C0009E9B: mov     ebx, [rax+14h]
 * 00000001C0009E9E: mov     rax, [rcx+98h]
 * 00000001C0009EA5: mov     eax, [rax+1Ch]
 * 00000001C0009EA8: test    al, 1
 * 00000001C0009EAA: setz    dl
 * 00000001C0009EAD: test    bl, 1
 * 00000001C0009EB0: setnz   cl
 * 00000001C0009EB3: test    cl, dl
 * 00000001C0009EB5: jz      short loc_1C0009F0C
 * 00000001C0009EB7: xor     r14d, r14d
 * 00000001C0009EBA: test    ebp, ebp
 * 00000001C0009EBC: jz      short loc_1C0009F0C
 * 00000001C0009EBE: test    al, 1
 * 00000001C0009EC0: jnz     short loc_1C0009F0C
 * 00000001C0009EC2: mov     rdx, [rdi+98h]
 * 00000001C0009EC9: mov     ecx, [rdx+28h]
 * 00000001C0009ECC: mov     edx, [rdx+2Ch]
 * 00000001C0009ECF: shl     rdx, 20h
 * 00000001C0009ED3: or      rdx, rcx
 * 00000001C0009ED6: cmp     rdx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0009EDA: jz      loc_1C0009F7C
 * 00000001C0009EE0: mov     r8d, 2710h
 * 00000001C0009EE6: mov     rdx, rdi
 * 00000001C0009EE9: mov     ecx, 51h ; 'Q'
 * 00000001C0009EEE: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009EF5: nop     dword ptr [rax+rax+00h]
 * 00000001C0009EFA: mov     rax, [rdi+98h]
 * 00000001C0009F01: mov     eax, [rax+1Ch]
 * 00000001C0009F04: inc     r14d
 * 00000001C0009F07: cmp     r14d, ebp
 * 00000001C0009F0A: jb      short loc_1C0009EBE
 * 00000001C0009F0C: mov     rax, [rdi+98h]
 * 00000001C0009F13: and     ebx, 0FFFFFFFEh
 * 00000001C0009F16: mov     [rax+14h], ebx
 * 00000001C0009F19: lock or [rsp+78h+var_78], 0
 * 00000001C0009F1E: mov     rax, [rdi+98h]
 * 00000001C0009F25: mov     eax, [rax+1Ch]
 * 00000001C0009F28: xor     ebx, ebx
 * 00000001C0009F2A: test    ebp, ebp
 * 00000001C0009F2C: jz      short loc_1C0009F7F
 * 00000001C0009F2E: test    al, 1
 * 00000001C0009F30: jz      loc_1C000A011
 * 00000001C0009F36: mov     rdx, [rdi+98h]
 * 00000001C0009F3D: mov     ecx, [rdx+28h]
 * 00000001C0009F40: mov     edx, [rdx+2Ch]
 * 00000001C0009F43: shl     rdx, 20h
 * 00000001C0009F47: or      rdx, rcx
 * 00000001C0009F4A: cmp     rdx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0009F4E: jz      short loc_1C0009F7C
 * 00000001C0009F50: mov     r8d, 2710h
 * 00000001C0009F56: mov     rdx, rdi
 * 00000001C0009F59: mov     ecx, 51h ; 'Q'
 * 00000001C0009F5E: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009F65: nop     dword ptr [rax+rax+00h]
 * 00000001C0009F6A: mov     rax, [rdi+98h]
 * 00000001C0009F71: mov     eax, [rax+1Ch]
 * 00000001C0009F74: inc     ebx
 * 00000001C0009F76: cmp     ebx, ebp
 * 00000001C0009F78: jb      short loc_1C0009F2E
 * 00000001C0009F7A: jmp     short loc_1C0009F7F
 * 00000001C0009F7C: mov     sil, 1
 * 00000001C0009F7F: test    al, 1
 * 00000001C0009F81: jz      loc_1C000A011
 * 00000001C0009F87: xor     r9d, r9d
 * 00000001C0009F8A: xor     r8d, r8d
 * 00000001C0009F8D: mov     ecx, 5
 * 00000001C0009F92: mov     rdx, rdi
 * 00000001C0009F95: mov     [rdi+1Ch], ecx
 * 00000001C0009F98: test    sil, sil
 * 00000001C0009F9B: jz      short loc_1C0009FBE
 * 00000001C0009F9D: lea     rax, [rsp+78h+arg_0]
 * 00000001C0009FA5: mov     [rsp+78h+arg_0], 0C1000002h
 * 00000001C0009FB0: mov     [rsp+78h+var_28], rax
 * 00000001C0009FB5: lea     rax, aControllerRese; "Controller Reset failed due to surprise"...
 * 00000001C0009FBC: jmp     short loc_1C0009FDD
 * 00000001C0009FBE: lea     rax, [rsp+78h+arg_8]
 * 00000001C0009FC6: mov     [rsp+78h+arg_8], 0C1000002h
 * 00000001C0009FD1: mov     [rsp+78h+var_28], rax
 * 00000001C0009FD6: lea     rax, aControllerRese_0; "Controller Reset failed"
 * 00000001C0009FDD: and     [rsp+78h+var_30], 0
 * 00000001C0009FE3: and     [rsp+78h+var_38], 0
 * 00000001C0009FE8: and     [rsp+78h+var_40], 0
 * 00000001C0009FEE: and     [rsp+78h+var_48], 0
 * 00000001C0009FF3: mov     [rsp+78h+var_50], rax
 * 00000001C0009FF8: mov     [rsp+78h+var_58], ecx
 * 00000001C0009FFC: mov     ecx, 100Dh
 * 00000001C000A001: call    cs:__imp_StorPortNotification
 * 00000001C000A008: nop     dword ptr [rax+rax+00h]
 * 00000001C000A00D: xor     al, al
 * 00000001C000A00F: jmp     short loc_1C000A013
 * 00000001C000A011: mov     al, 1
 * 00000001C000A013: lea     r11, [rsp+78h+var_18]
 * 00000001C000A018: mov     rbx, [r11+30h]
 * 00000001C000A01C: mov     rbp, [r11+38h]
 * 00000001C000A020: mov     rsp, r11
 * 00000001C000A023: pop     r14
 * 00000001C000A025: pop     rdi
 * 00000001C000A026: pop     rsi
 * 00000001C000A027: retn
 */
