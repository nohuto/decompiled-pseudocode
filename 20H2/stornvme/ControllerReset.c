/*
 * XREFs of ControllerReset @ 0x1C0009E1C
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C00091E0 (NVMeHwFindAdapter.c)
 *     NVMeControllerPowerUp @ 0x1C000CDD8 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000D0A0 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0016B90 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ControllerReset @ 0x1C0009E1C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0009E1C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0009E1C: mov     [rsp+arg_10], rbx
 * 00000001C0009E21: mov     [rsp+arg_18], rbp
 * 00000001C0009E26: push    rsi
 * 00000001C0009E27: push    rdi
 * 00000001C0009E28: push    r14
 * 00000001C0009E2A: sub     rsp, 60h
 * 00000001C0009E2E: mov     eax, 0CCCCCCCDh
 * 00000001C0009E33: xor     sil, sil
 * 00000001C0009E36: mul     dword ptr [rcx+0B4h]
 * 00000001C0009E3C: mov     rax, [rcx+98h]
 * 00000001C0009E43: mov     rdi, rcx
 * 00000001C0009E46: mov     ebp, edx
 * 00000001C0009E48: shr     ebp, 3
 * 00000001C0009E4B: mov     ebx, [rax+14h]
 * 00000001C0009E4E: mov     rax, [rcx+98h]
 * 00000001C0009E55: mov     eax, [rax+1Ch]
 * 00000001C0009E58: test    al, 1
 * 00000001C0009E5A: setz    dl
 * 00000001C0009E5D: test    bl, 1
 * 00000001C0009E60: setnz   cl
 * 00000001C0009E63: test    cl, dl
 * 00000001C0009E65: jz      short loc_1C0009EBC
 * 00000001C0009E67: xor     r14d, r14d
 * 00000001C0009E6A: test    ebp, ebp
 * 00000001C0009E6C: jz      short loc_1C0009EBC
 * 00000001C0009E6E: test    al, 1
 * 00000001C0009E70: jnz     short loc_1C0009EBC
 * 00000001C0009E72: mov     rdx, [rdi+98h]
 * 00000001C0009E79: mov     ecx, [rdx+28h]
 * 00000001C0009E7C: mov     edx, [rdx+2Ch]
 * 00000001C0009E7F: shl     rdx, 20h
 * 00000001C0009E83: or      rdx, rcx
 * 00000001C0009E86: cmp     rdx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0009E8A: jz      loc_1C0009F2C
 * 00000001C0009E90: mov     r8d, 2710h
 * 00000001C0009E96: mov     rdx, rdi
 * 00000001C0009E99: mov     ecx, 51h ; 'Q'
 * 00000001C0009E9E: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009EA5: nop     dword ptr [rax+rax+00h]
 * 00000001C0009EAA: mov     rax, [rdi+98h]
 * 00000001C0009EB1: mov     eax, [rax+1Ch]
 * 00000001C0009EB4: inc     r14d
 * 00000001C0009EB7: cmp     r14d, ebp
 * 00000001C0009EBA: jb      short loc_1C0009E6E
 * 00000001C0009EBC: mov     rax, [rdi+98h]
 * 00000001C0009EC3: and     ebx, 0FFFFFFFEh
 * 00000001C0009EC6: mov     [rax+14h], ebx
 * 00000001C0009EC9: lock or [rsp+78h+var_78], 0
 * 00000001C0009ECE: mov     rax, [rdi+98h]
 * 00000001C0009ED5: mov     eax, [rax+1Ch]
 * 00000001C0009ED8: xor     ebx, ebx
 * 00000001C0009EDA: test    ebp, ebp
 * 00000001C0009EDC: jz      short loc_1C0009F2F
 * 00000001C0009EDE: test    al, 1
 * 00000001C0009EE0: jz      loc_1C0009FC1
 * 00000001C0009EE6: mov     rdx, [rdi+98h]
 * 00000001C0009EED: mov     ecx, [rdx+28h]
 * 00000001C0009EF0: mov     edx, [rdx+2Ch]
 * 00000001C0009EF3: shl     rdx, 20h
 * 00000001C0009EF7: or      rdx, rcx
 * 00000001C0009EFA: cmp     rdx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0009EFE: jz      short loc_1C0009F2C
 * 00000001C0009F00: mov     r8d, 2710h
 * 00000001C0009F06: mov     rdx, rdi
 * 00000001C0009F09: mov     ecx, 51h ; 'Q'
 * 00000001C0009F0E: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009F15: nop     dword ptr [rax+rax+00h]
 * 00000001C0009F1A: mov     rax, [rdi+98h]
 * 00000001C0009F21: mov     eax, [rax+1Ch]
 * 00000001C0009F24: inc     ebx
 * 00000001C0009F26: cmp     ebx, ebp
 * 00000001C0009F28: jb      short loc_1C0009EDE
 * 00000001C0009F2A: jmp     short loc_1C0009F2F
 * 00000001C0009F2C: mov     sil, 1
 * 00000001C0009F2F: test    al, 1
 * 00000001C0009F31: jz      loc_1C0009FC1
 * 00000001C0009F37: xor     r9d, r9d
 * 00000001C0009F3A: xor     r8d, r8d
 * 00000001C0009F3D: mov     ecx, 5
 * 00000001C0009F42: mov     rdx, rdi
 * 00000001C0009F45: mov     [rdi+1Ch], ecx
 * 00000001C0009F48: test    sil, sil
 * 00000001C0009F4B: jz      short loc_1C0009F6E
 * 00000001C0009F4D: lea     rax, [rsp+78h+arg_0]
 * 00000001C0009F55: mov     [rsp+78h+arg_0], 0C1000002h
 * 00000001C0009F60: mov     [rsp+78h+var_28], rax
 * 00000001C0009F65: lea     rax, aControllerRese; "Controller Reset failed due to surprise"...
 * 00000001C0009F6C: jmp     short loc_1C0009F8D
 * 00000001C0009F6E: lea     rax, [rsp+78h+arg_8]
 * 00000001C0009F76: mov     [rsp+78h+arg_8], 0C1000002h
 * 00000001C0009F81: mov     [rsp+78h+var_28], rax
 * 00000001C0009F86: lea     rax, aControllerRese_0; "Controller Reset failed"
 * 00000001C0009F8D: and     [rsp+78h+var_30], 0
 * 00000001C0009F93: and     [rsp+78h+var_38], 0
 * 00000001C0009F98: and     [rsp+78h+var_40], 0
 * 00000001C0009F9E: and     [rsp+78h+var_48], 0
 * 00000001C0009FA3: mov     [rsp+78h+var_50], rax
 * 00000001C0009FA8: mov     [rsp+78h+var_58], ecx
 * 00000001C0009FAC: mov     ecx, 100Dh
 * 00000001C0009FB1: call    cs:__imp_StorPortNotification
 * 00000001C0009FB8: nop     dword ptr [rax+rax+00h]
 * 00000001C0009FBD: xor     al, al
 * 00000001C0009FBF: jmp     short loc_1C0009FC3
 * 00000001C0009FC1: mov     al, 1
 * 00000001C0009FC3: lea     r11, [rsp+78h+var_18]
 * 00000001C0009FC8: mov     rbx, [r11+30h]
 * 00000001C0009FCC: mov     rbp, [r11+38h]
 * 00000001C0009FD0: mov     rsp, r11
 * 00000001C0009FD3: pop     r14
 * 00000001C0009FD5: pop     rdi
 * 00000001C0009FD6: pop     rsi
 * 00000001C0009FD7: retn
 */
