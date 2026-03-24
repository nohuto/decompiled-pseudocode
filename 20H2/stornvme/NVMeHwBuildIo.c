/*
 * XREFs of NVMeHwBuildIo @ 0x1C0003960
 * Callers:
 *     <none>
 * Callees:
 *     IoctlToNVMe @ 0x1C0001B20 (IoctlToNVMe.c)
 *     ScsiToNVMe @ 0x1C0003A60 (ScsiToNVMe.c)
 *     GetNamespaceId @ 0x1C0004344 (GetNamespaceId.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     memset @ 0x1C00054C0 (memset.c)
 *     ProtocolCommandToNVMe @ 0x1C00149A4 (ProtocolCommandToNVMe.c)
 *     NVMeSetSenseData @ 0x1C001AEF8 (NVMeSetSenseData.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeHwBuildIo @ 0x1C0003960
 * Reason: Hex-Rays returned no pseudocode for 0x1C0003960
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0003960: mov     [rsp+arg_18], rsi
 * 00000001C0003965: push    rdi
 * 00000001C0003966: sub     rsp, 30h
 * 00000001C000396A: cmp     byte ptr [rdx+2], 28h ; '('
 * 00000001C000396E: mov     rdi, rdx
 * 00000001C0003971: mov     rsi, rcx
 * 00000001C0003974: jnz     loc_1C0007D56
 * 00000001C000397A: mov     rcx, [rdx+68h]
 * 00000001C000397E: mov     rax, rcx
 * 00000001C0003981: and     eax, 0FFFh
 * 00000001C0003986: jz      short loc_1C0003992
 * 00000001C0003988: sub     rcx, rax
 * 00000001C000398B: add     rcx, 1000h
 * 00000001C0003992: add     rcx, 1000h; void *
 * 00000001C0003999: xor     edx, edx; Val
 * 00000001C000399B: mov     r8d, 0A0h; Size
 * 00000001C00039A1: call    memset
 * 00000001C00039A6: movzx   edx, byte ptr [rdi+2]
 * 00000001C00039AA: cmp     dl, 28h ; '('
 * 00000001C00039AD: jnz     loc_1C0007D5F
 * 00000001C00039B3: mov     eax, [rdi+14h]
 * 00000001C00039B6: mov     [rsp+38h+arg_8], rbx
 * 00000001C00039BB: mov     [rsp+38h+arg_10], r14
 * 00000001C00039C0: test    eax, eax
 * 00000001C00039C2: jnz     short loc_1C0003A1A
 * 00000001C00039C4: mov     eax, [rsi+18h]
 * 00000001C00039C7: test    al, 1
 * 00000001C00039C9: jz      loc_1C000812C
 * 00000001C00039CF: mov     rdx, rdi
 * 00000001C00039D2: mov     rcx, rsi
 * 00000001C00039D5: call    ScsiToNVMe
 * 00000001C00039DA: cmp     byte ptr [rdi+3], 0; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C00039DE: mov     r14, [rsp+38h+arg_10]
 * 00000001C00039E3: mov     rbx, [rsp+38h+arg_8]
 * 00000001C00039E8: jnz     short loc_1C00039F8
 * 00000001C00039EA: mov     al, 1
 * 00000001C00039EC: mov     rsi, [rsp+38h+arg_18]
 * 00000001C00039F1: add     rsp, 30h
 * 00000001C00039F5: pop     rdi
 * 00000001C00039F6: retn
 * 00000001C00039F8: mov     r8, rdi
 * 00000001C00039FB: mov     rdx, rsi
 * 00000001C00039FE: xor     ecx, ecx
 * 00000001C0003A00: call    cs:__imp_StorPortNotification
 * 00000001C0003A07: nop     dword ptr [rax+rax+00h]
 * 00000001C0003A0C: mov     rsi, [rsp+38h+arg_18]
 * 00000001C0003A11: xor     al, al
 * 00000001C0003A13: add     rsp, 30h
 * 00000001C0003A17: pop     rdi
 * 00000001C0003A18: retn
 * 00000001C0003A1A: add     eax, 0FFFFFFFEh; switch 42 cases
 * 00000001C0003A1D: cmp     eax, 29h
 * 00000001C0003A20: ja      short def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C0003A22: lea     r8, cs:1C0000000h
 * 00000001C0003A29: mov     ecx, ds:(jpt_1C0003A34 - 1C0000000h)[r8+rax*4]
 * 00000001C0003A31: add     rcx, r8
 * 00000001C0003A34: jmp     rcx; switch jump
 * 00000001C0003A3A: mov     eax, [rsi+18h]; jumptable 00000001C0003A34 case 2
 * 00000001C0003A3D: test    al, 1
 * 00000001C0003A3F: jz      loc_1C000812C
 * 00000001C0003A45: mov     rdx, rdi
 * 00000001C0003A48: mov     rcx, rsi; int
 * 00000001C0003A4B: call    IoctlToNVMe
 * 00000001C0003A50: jmp     short def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C0007D56: mov     rcx, [rdx+38h]
 * 00000001C0007D5A: jmp     loc_1C000397E
 * 00000001C0007D5F: mov     eax, edx
 * 00000001C0007D61: jmp     loc_1C00039B6
 * 00000001C0007D66: mov     eax, [rsi+18h]; jumptable 00000001C0003A34 case 9
 * 00000001C0007D69: test    al, 1
 * 00000001C0007D6B: jz      loc_1C000812C
 * 00000001C0007D71: mov     rdx, rdi
 * 00000001C0007D74: mov     rcx, rsi
 * 00000001C0007D77: call    ProtocolCommandToNVMe
 * 00000001C0007D7C: nop
 * 00000001C0007D7D: jmp     def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C0007D82: cmp     dl, 28h ; '('; jumptable 00000001C0003A34 case 36
 * 00000001C0007D85: jnz     short loc_1C0007D91
 * 00000001C0007D87: mov     eax, [rdi+78h]
 * 00000001C0007D8A: cmp     byte ptr [rax+rdi+8], 1
 * 00000001C0007D8F: jmp     short loc_1C0007D95
 * 00000001C0007D91: cmp     byte ptr [rdi+4], 1
 * 00000001C0007D95: setz    al
 * 00000001C0007D98: mov     ebx, 1
 * 00000001C0007D9D: test    al, al
 * 00000001C0007D9F: mov     ecx, 6
 * 00000001C0007DA4: cmovz   ebx, ecx
 * 00000001C0007DA7: mov     [rdi+3], bl
 * 00000001C0007DAA: jmp     def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C0007DAF: mov     [rsp+38h+arg_0], 0; jumptable 00000001C0003A34 case 38
 * 00000001C0007DB8: cmp     dl, 28h ; '('
 * 00000001C0007DBB: jnz     short loc_1C0007DC8
 * 00000001C0007DBD: mov     r14, [rdi+40h]
 * 00000001C0007DC1: mov     eax, 3Ch ; '<'
 * 00000001C0007DC6: jmp     short loc_1C0007DD1
 * 00000001C0007DC8: mov     r14, [rdi+18h]
 * 00000001C0007DCC: mov     eax, 10h
 * 00000001C0007DD1: test    r14, r14
 * 00000001C0007DD4: jz      loc_1C0007F08
 * 00000001C0007DDA: cmp     dword ptr [rdi+rax], 48h ; 'H'
 * 00000001C0007DDE: jb      loc_1C0007F08
 * 00000001C0007DE4: mov     eax, [rsi+38h]
 * 00000001C0007DE7: test    al, 10h
 * 00000001C0007DE9: jz      loc_1C0007F08
 * 00000001C0007DEF: lea     rax, [rsp+38h+arg_0]
 * 00000001C0007DF4: mov     r9d, 656D764Eh
 * 00000001C0007DFA: mov     r8d, 88h
 * 00000001C0007E00: mov     [rsp+38h+var_18], rax
 * 00000001C0007E05: mov     rdx, rsi
 * 00000001C0007E08: xor     ecx, ecx
 * 00000001C0007E0A: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0007E11: nop     dword ptr [rax+rax+00h]
 * 00000001C0007E16: test    eax, eax
 * 00000001C0007E18: jnz     loc_1C0007EFF
 * 00000001C0007E1E: cmp     [rsp+38h+arg_0], 0
 * 00000001C0007E24: jz      loc_1C0007EFF
 * 00000001C0007E2A: cmp     byte ptr [rdi+2], 28h ; '('
 * 00000001C0007E2E: jnz     short loc_1C0007E3A
 * 00000001C0007E30: mov     eax, [rdi+34h]
 * 00000001C0007E33: movzx   ecx, byte ptr [rax+rdi+0Ah]
 * 00000001C0007E38: jmp     short loc_1C0007E3E
 * 00000001C0007E3A: movzx   ecx, byte ptr [rdi+7]
 * 00000001C0007E3E: movzx   edx, cl
 * 00000001C0007E41: mov     rcx, rsi
 * 00000001C0007E44: call    GetNamespaceId
 * 00000001C0007E49: mov     rcx, [rsp+38h+arg_0]; void *
 * 00000001C0007E4E: xor     edx, edx; Val
 * 00000001C0007E50: mov     r8d, 88h; Size
 * 00000001C0007E56: mov     ebx, eax
 * 00000001C0007E58: call    memset
 * 00000001C0007E5D: mov     dword ptr [r14], 700100h
 * 00000001C0007E64: mov     rcx, [rsp+38h+arg_0]
 * 00000001C0007E69: mov     [r14+40h], rcx
 * 00000001C0007E6D: mov     rcx, [rsp+38h+arg_0]
 * 00000001C0007E72: movzx   edx, word ptr [rsi+4]
 * 00000001C0007E76: mov     [rcx], dx
 * 00000001C0007E79: movzx   ecx, word ptr [rsi+6]
 * 00000001C0007E7D: mov     rax, [rsp+38h+arg_0]
 * 00000001C0007E82: mov     [rax+2], cx
 * 00000001C0007E86: mov     rax, [rsp+38h+arg_0]
 * 00000001C0007E8B: movzx   ecx, byte ptr [rsi+8]
 * 00000001C0007E8F: mov     [rax+4], cl
 * 00000001C0007E92: mov     rax, [rsp+38h+arg_0]
 * 00000001C0007E97: movups  xmm0, xmmword ptr [rsi+20h]
 * 00000001C0007E9B: movups  xmmword ptr [rax+10h], xmm0
 * 00000001C0007E9F: movups  xmm1, xmmword ptr [rsi+30h]
 * 00000001C0007EA3: movups  xmmword ptr [rax+20h], xmm1
 * 00000001C0007EA7: movups  xmm0, xmmword ptr [rsi+40h]
 * 00000001C0007EAB: movups  xmmword ptr [rax+30h], xmm0
 * 00000001C0007EAF: movups  xmm1, xmmword ptr [rsi+50h]
 * 00000001C0007EB3: movups  xmmword ptr [rax+40h], xmm1
 * 00000001C0007EB7: movups  xmm0, xmmword ptr [rsi+60h]
 * 00000001C0007EBB: movups  xmmword ptr [rax+50h], xmm0
 * 00000001C0007EBF: movups  xmm1, xmmword ptr [rsi+70h]
 * 00000001C0007EC3: movups  xmmword ptr [rax+60h], xmm1
 * 00000001C0007EC7: movups  xmm0, xmmword ptr [rsi+80h]
 * 00000001C0007ECE: movups  xmmword ptr [rax+70h], xmm0
 * 00000001C0007ED2: mov     rax, [rsp+38h+arg_0]
 * 00000001C0007ED7: and     dword ptr [rax+28h], 0FFFFFFF7h
 * 00000001C0007EDB: mov     rax, [rsp+38h+arg_0]
 * 00000001C0007EE0: mov     rcx, [rsi+90h]
 * 00000001C0007EE7: mov     [rax+8], rcx
 * 00000001C0007EEB: mov     rax, [rsp+38h+arg_0]
 * 00000001C0007EF0: mov     [rax+80h], ebx
 * 00000001C0007EF6: mov     byte ptr [rdi+3], 1; jumptable 00000001C0003A34 case 8
 * 00000001C0007EFA: jmp     def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C0007EFF: mov     byte ptr [rdi+3], 4
 * 00000001C0007F03: jmp     def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C0007F08: mov     byte ptr [rdi+3], 6
 * 00000001C0007F0C: jmp     def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C0007F11: cmp     dl, 28h ; '('; jumptable 00000001C0003A34 case 39
 * 00000001C0007F14: jnz     short loc_1C0007F21
 * 00000001C0007F16: mov     r8, [rdi+40h]
 * 00000001C0007F1A: mov     eax, 3Ch ; '<'
 * 00000001C0007F1F: jmp     short loc_1C0007F2A
 * 00000001C0007F21: mov     r8, [rdi+18h]
 * 00000001C0007F25: mov     eax, 10h
 * 00000001C0007F2A: test    r8, r8
 * 00000001C0007F2D: jz      short loc_1C0007F61
 * 00000001C0007F2F: cmp     dword ptr [rdi+rax], 48h ; 'H'
 * 00000001C0007F33: jb      short loc_1C0007F61
 * 00000001C0007F35: mov     r8, [r8+40h]
 * 00000001C0007F39: jmp     short loc_1C0007F3F
 * 00000001C0007F3B: mov     r8, [r8+10h]
 * 00000001C0007F3F: mov     ebx, 1
 * 00000001C0007F44: mov     rdx, rsi
 * 00000001C0007F47: mov     ecx, ebx
 * 00000001C0007F49: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0007F50: nop     dword ptr [rax+rax+00h]
 * 00000001C0007F55: test    eax, eax
 * 00000001C0007F57: mov     ecx, 4
 * 00000001C0007F5C: cmovz   ecx, ebx
 * 00000001C0007F5F: jmp     short loc_1C0007F63
 * 00000001C0007F61: mov     cl, 6
 * 00000001C0007F63: mov     [rdi+3], cl
 * 00000001C0007F66: jmp     def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C0007F6B: mov     [rsp+38h+arg_0], 0; jumptable 00000001C0003A34 case 42
 * 00000001C0007F74: cmp     dl, 28h ; '('
 * 00000001C0007F77: jnz     short loc_1C0007F84
 * 00000001C0007F79: mov     rbx, [rdi+40h]
 * 00000001C0007F7D: mov     eax, 3Ch ; '<'
 * 00000001C0007F82: jmp     short loc_1C0007F8D
 * 00000001C0007F84: mov     rbx, [rdi+18h]
 * 00000001C0007F88: mov     eax, 10h
 * 00000001C0007F8D: lea     r14, [rdi+rax]
 * 00000001C0007F91: test    rbx, rbx
 * 00000001C0007F94: jz      loc_1C0007F08
 * 00000001C0007F9A: cmp     dword ptr [r14], 20h ; ' '
 * 00000001C0007F9E: jb      loc_1C0007F08
 * 00000001C0007FA4: cmp     dword ptr [rbx+8], 474D4449h
 * 00000001C0007FAB: jnz     loc_1C0007F08
 * 00000001C0007FB1: lea     rax, [rsp+38h+arg_0]
 * 00000001C0007FB6: mov     r9d, 656D764Eh
 * 00000001C0007FBC: mov     r8d, 88h
 * 00000001C0007FC2: mov     [rsp+38h+var_18], rax
 * 00000001C0007FC7: mov     rdx, rsi
 * 00000001C0007FCA: xor     ecx, ecx
 * 00000001C0007FCC: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0007FD3: nop     dword ptr [rax+rax+00h]
 * 00000001C0007FD8: test    eax, eax
 * 00000001C0007FDA: jnz     loc_1C0007EFF
 * 00000001C0007FE0: mov     rcx, [rsp+38h+arg_0]
 * 00000001C0007FE5: test    rcx, rcx
 * 00000001C0007FE8: jz      loc_1C0007EFF
 * 00000001C0007FEE: mov     edx, 88h
 * 00000001C0007FF3: call    NVMeZeroMemory
 * 00000001C0007FF8: movzx   ecx, word ptr [rsi+4]
 * 00000001C0007FFC: mov     rax, [rsp+38h+arg_0]
 * 00000001C0008001: mov     [rax], cx
 * 00000001C0008004: movzx   ecx, word ptr [rsi+6]
 * 00000001C0008008: mov     rax, [rsp+38h+arg_0]
 * 00000001C000800D: mov     [rax+2], cx
 * 00000001C0008011: movzx   ecx, byte ptr [rsi+8]
 * 00000001C0008015: mov     rax, [rsp+38h+arg_0]
 * 00000001C000801A: mov     [rax+4], cl
 * 00000001C000801D: movups  xmm0, xmmword ptr [rsi+20h]
 * 00000001C0008021: mov     rax, [rsp+38h+arg_0]
 * 00000001C0008026: movups  xmmword ptr [rax+10h], xmm0
 * 00000001C000802A: movups  xmm1, xmmword ptr [rsi+30h]
 * 00000001C000802E: movups  xmmword ptr [rax+20h], xmm1
 * 00000001C0008032: movups  xmm0, xmmword ptr [rsi+40h]
 * 00000001C0008036: movups  xmmword ptr [rax+30h], xmm0
 * 00000001C000803A: movups  xmm1, xmmword ptr [rsi+50h]
 * 00000001C000803E: movups  xmmword ptr [rax+40h], xmm1
 * 00000001C0008042: movups  xmm0, xmmword ptr [rsi+60h]
 * 00000001C0008046: movups  xmmword ptr [rax+50h], xmm0
 * 00000001C000804A: movups  xmm1, xmmword ptr [rsi+70h]
 * 00000001C000804E: movups  xmmword ptr [rax+60h], xmm1
 * 00000001C0008052: movups  xmm0, xmmword ptr [rsi+80h]
 * 00000001C0008059: movups  xmmword ptr [rax+70h], xmm0
 * 00000001C000805D: mov     rax, [rsp+38h+arg_0]
 * 00000001C0008062: and     dword ptr [rax+28h], 0FFFFFFF7h
 * 00000001C0008066: mov     rcx, [rsi+90h]
 * 00000001C000806D: mov     rax, [rsp+38h+arg_0]
 * 00000001C0008072: mov     [rax+8], rcx
 * 00000001C0008076: mov     byte ptr [rdi+3], 1
 * 00000001C000807A: cmp     word ptr [rbx+10h], 1
 * 00000001C000807F: jnz     loc_1C0007F08
 * 00000001C0008085: cmp     dword ptr [rbx+14h], 4
 * 00000001C0008089: jb      loc_1C0007F08
 * 00000001C000808F: movzx   edx, byte ptr [rbx+1Ah]
 * 00000001C0008093: mov     rcx, rsi
 * 00000001C0008096: call    GetNamespaceId
 * 00000001C000809B: mov     rcx, [rsp+38h+arg_0]
 * 00000001C00080A0: mov     [rcx+80h], eax
 * 00000001C00080A6: cmp     byte ptr [rdi+3], 1
 * 00000001C00080AA: jnz     def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C00080B0: cmp     byte ptr [rdi+2], 28h ; '('
 * 00000001C00080B4: jnz     short loc_1C00080BC
 * 00000001C00080B6: mov     rbx, [rdi+40h]
 * 00000001C00080BA: jmp     short loc_1C00080C0
 * 00000001C00080BC: mov     rbx, [rdi+18h]
 * 00000001C00080C0: mov     edx, [r14]
 * 00000001C00080C3: mov     rcx, rbx
 * 00000001C00080C6: call    NVMeZeroMemory
 * 00000001C00080CB: mov     dword ptr [rbx], 18h
 * 00000001C00080D1: mov     dword ptr [rbx+4], 18h
 * 00000001C00080D8: mov     dword ptr [rbx+8], 4D504449h
 * 00000001C00080DF: mov     rax, [rsp+38h+arg_0]
 * 00000001C00080E4: mov     [rbx+10h], rax
 * 00000001C00080E8: jmp     def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C00080ED: cmp     dl, 28h ; '('; jumptable 00000001C0003A34 case 43
 * 00000001C00080F0: jnz     short loc_1C00080FD
 * 00000001C00080F2: mov     r8, [rdi+40h]
 * 00000001C00080F6: mov     eax, 3Ch ; '<'
 * 00000001C00080FB: jmp     short loc_1C0008106
 * 00000001C00080FD: mov     r8, [rdi+18h]
 * 00000001C0008101: mov     eax, 10h
 * 00000001C0008106: test    r8, r8
 * 00000001C0008109: jz      loc_1C0007F61
 * 00000001C000810F: cmp     dword ptr [rdi+rax], 18h
 * 00000001C0008113: jb      loc_1C0007F61
 * 00000001C0008119: cmp     dword ptr [r8+8], 464D4449h
 * 00000001C0008121: jnz     loc_1C0007F61
 * 00000001C0008127: jmp     loc_1C0007F3B
 * 00000001C000812C: mov     r9b, 25h ; '%'
 * 00000001C000812F: mov     r8b, 5
 * 00000001C0008132: mov     dl, 8
 * 00000001C0008134: mov     rcx, rdi
 * 00000001C0008137: call    NVMeSetSenseData
 * 00000001C000813C: nop
 * 00000001C000813D: jmp     def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 */
