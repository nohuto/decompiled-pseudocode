/*
 * XREFs of NVMeHwBuildIo @ 0x1C0003960
 * Callers:
 *     <none>
 * Callees:
 *     IoctlToNVMe @ 0x1C0001B20 (IoctlToNVMe.c)
 *     ScsiToNVMe @ 0x1C0003A60 (ScsiToNVMe.c)
 *     GetNamespaceId @ 0x1C0004344 (GetNamespaceId.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     memset @ 0x1C0005500 (memset.c)
 *     ProtocolCommandToNVMe @ 0x1C0014A24 (ProtocolCommandToNVMe.c)
 *     NVMeSetSenseData @ 0x1C001AFC8 (NVMeSetSenseData.c)
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
 * 00000001C0003974: jnz     loc_1C0007D96
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
 * 00000001C00039AD: jnz     loc_1C0007D9F
 * 00000001C00039B3: mov     eax, [rdi+14h]
 * 00000001C00039B6: mov     [rsp+38h+arg_8], rbx
 * 00000001C00039BB: mov     [rsp+38h+arg_10], r14
 * 00000001C00039C0: test    eax, eax
 * 00000001C00039C2: jnz     short loc_1C0003A1A
 * 00000001C00039C4: mov     eax, [rsi+18h]
 * 00000001C00039C7: test    al, 1
 * 00000001C00039C9: jz      loc_1C000816C
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
 * 00000001C0003A3F: jz      loc_1C000816C
 * 00000001C0003A45: mov     rdx, rdi
 * 00000001C0003A48: mov     rcx, rsi; int
 * 00000001C0003A4B: call    IoctlToNVMe
 * 00000001C0003A50: jmp     short def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C0007D96: mov     rcx, [rdx+38h]
 * 00000001C0007D9A: jmp     loc_1C000397E
 * 00000001C0007D9F: mov     eax, edx
 * 00000001C0007DA1: jmp     loc_1C00039B6
 * 00000001C0007DA6: mov     eax, [rsi+18h]; jumptable 00000001C0003A34 case 9
 * 00000001C0007DA9: test    al, 1
 * 00000001C0007DAB: jz      loc_1C000816C
 * 00000001C0007DB1: mov     rdx, rdi
 * 00000001C0007DB4: mov     rcx, rsi
 * 00000001C0007DB7: call    ProtocolCommandToNVMe
 * 00000001C0007DBC: nop
 * 00000001C0007DBD: jmp     def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C0007DC2: cmp     dl, 28h ; '('; jumptable 00000001C0003A34 case 36
 * 00000001C0007DC5: jnz     short loc_1C0007DD1
 * 00000001C0007DC7: mov     eax, [rdi+78h]
 * 00000001C0007DCA: cmp     byte ptr [rax+rdi+8], 1
 * 00000001C0007DCF: jmp     short loc_1C0007DD5
 * 00000001C0007DD1: cmp     byte ptr [rdi+4], 1
 * 00000001C0007DD5: setz    al
 * 00000001C0007DD8: mov     ebx, 1
 * 00000001C0007DDD: test    al, al
 * 00000001C0007DDF: mov     ecx, 6
 * 00000001C0007DE4: cmovz   ebx, ecx
 * 00000001C0007DE7: mov     [rdi+3], bl
 * 00000001C0007DEA: jmp     def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C0007DEF: mov     [rsp+38h+arg_0], 0; jumptable 00000001C0003A34 case 38
 * 00000001C0007DF8: cmp     dl, 28h ; '('
 * 00000001C0007DFB: jnz     short loc_1C0007E08
 * 00000001C0007DFD: mov     r14, [rdi+40h]
 * 00000001C0007E01: mov     eax, 3Ch ; '<'
 * 00000001C0007E06: jmp     short loc_1C0007E11
 * 00000001C0007E08: mov     r14, [rdi+18h]
 * 00000001C0007E0C: mov     eax, 10h
 * 00000001C0007E11: test    r14, r14
 * 00000001C0007E14: jz      loc_1C0007F48
 * 00000001C0007E1A: cmp     dword ptr [rdi+rax], 48h ; 'H'
 * 00000001C0007E1E: jb      loc_1C0007F48
 * 00000001C0007E24: mov     eax, [rsi+38h]
 * 00000001C0007E27: test    al, 10h
 * 00000001C0007E29: jz      loc_1C0007F48
 * 00000001C0007E2F: lea     rax, [rsp+38h+arg_0]
 * 00000001C0007E34: mov     r9d, 656D764Eh
 * 00000001C0007E3A: mov     r8d, 88h
 * 00000001C0007E40: mov     [rsp+38h+var_18], rax
 * 00000001C0007E45: mov     rdx, rsi
 * 00000001C0007E48: xor     ecx, ecx
 * 00000001C0007E4A: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0007E51: nop     dword ptr [rax+rax+00h]
 * 00000001C0007E56: test    eax, eax
 * 00000001C0007E58: jnz     loc_1C0007F3F
 * 00000001C0007E5E: cmp     [rsp+38h+arg_0], 0
 * 00000001C0007E64: jz      loc_1C0007F3F
 * 00000001C0007E6A: cmp     byte ptr [rdi+2], 28h ; '('
 * 00000001C0007E6E: jnz     short loc_1C0007E7A
 * 00000001C0007E70: mov     eax, [rdi+34h]
 * 00000001C0007E73: movzx   ecx, byte ptr [rax+rdi+0Ah]
 * 00000001C0007E78: jmp     short loc_1C0007E7E
 * 00000001C0007E7A: movzx   ecx, byte ptr [rdi+7]
 * 00000001C0007E7E: movzx   edx, cl
 * 00000001C0007E81: mov     rcx, rsi
 * 00000001C0007E84: call    GetNamespaceId
 * 00000001C0007E89: mov     rcx, [rsp+38h+arg_0]; void *
 * 00000001C0007E8E: xor     edx, edx; Val
 * 00000001C0007E90: mov     r8d, 88h; Size
 * 00000001C0007E96: mov     ebx, eax
 * 00000001C0007E98: call    memset
 * 00000001C0007E9D: mov     dword ptr [r14], 700100h
 * 00000001C0007EA4: mov     rcx, [rsp+38h+arg_0]
 * 00000001C0007EA9: mov     [r14+40h], rcx
 * 00000001C0007EAD: mov     rcx, [rsp+38h+arg_0]
 * 00000001C0007EB2: movzx   edx, word ptr [rsi+4]
 * 00000001C0007EB6: mov     [rcx], dx
 * 00000001C0007EB9: movzx   ecx, word ptr [rsi+6]
 * 00000001C0007EBD: mov     rax, [rsp+38h+arg_0]
 * 00000001C0007EC2: mov     [rax+2], cx
 * 00000001C0007EC6: mov     rax, [rsp+38h+arg_0]
 * 00000001C0007ECB: movzx   ecx, byte ptr [rsi+8]
 * 00000001C0007ECF: mov     [rax+4], cl
 * 00000001C0007ED2: mov     rax, [rsp+38h+arg_0]
 * 00000001C0007ED7: movups  xmm0, xmmword ptr [rsi+20h]
 * 00000001C0007EDB: movups  xmmword ptr [rax+10h], xmm0
 * 00000001C0007EDF: movups  xmm1, xmmword ptr [rsi+30h]
 * 00000001C0007EE3: movups  xmmword ptr [rax+20h], xmm1
 * 00000001C0007EE7: movups  xmm0, xmmword ptr [rsi+40h]
 * 00000001C0007EEB: movups  xmmword ptr [rax+30h], xmm0
 * 00000001C0007EEF: movups  xmm1, xmmword ptr [rsi+50h]
 * 00000001C0007EF3: movups  xmmword ptr [rax+40h], xmm1
 * 00000001C0007EF7: movups  xmm0, xmmword ptr [rsi+60h]
 * 00000001C0007EFB: movups  xmmword ptr [rax+50h], xmm0
 * 00000001C0007EFF: movups  xmm1, xmmword ptr [rsi+70h]
 * 00000001C0007F03: movups  xmmword ptr [rax+60h], xmm1
 * 00000001C0007F07: movups  xmm0, xmmword ptr [rsi+80h]
 * 00000001C0007F0E: movups  xmmword ptr [rax+70h], xmm0
 * 00000001C0007F12: mov     rax, [rsp+38h+arg_0]
 * 00000001C0007F17: and     dword ptr [rax+28h], 0FFFFFFF7h
 * 00000001C0007F1B: mov     rax, [rsp+38h+arg_0]
 * 00000001C0007F20: mov     rcx, [rsi+90h]
 * 00000001C0007F27: mov     [rax+8], rcx
 * 00000001C0007F2B: mov     rax, [rsp+38h+arg_0]
 * 00000001C0007F30: mov     [rax+80h], ebx
 * 00000001C0007F36: mov     byte ptr [rdi+3], 1; jumptable 00000001C0003A34 case 8
 * 00000001C0007F3A: jmp     def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C0007F3F: mov     byte ptr [rdi+3], 4
 * 00000001C0007F43: jmp     def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C0007F48: mov     byte ptr [rdi+3], 6
 * 00000001C0007F4C: jmp     def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C0007F51: cmp     dl, 28h ; '('; jumptable 00000001C0003A34 case 39
 * 00000001C0007F54: jnz     short loc_1C0007F61
 * 00000001C0007F56: mov     r8, [rdi+40h]
 * 00000001C0007F5A: mov     eax, 3Ch ; '<'
 * 00000001C0007F5F: jmp     short loc_1C0007F6A
 * 00000001C0007F61: mov     r8, [rdi+18h]
 * 00000001C0007F65: mov     eax, 10h
 * 00000001C0007F6A: test    r8, r8
 * 00000001C0007F6D: jz      short loc_1C0007FA1
 * 00000001C0007F6F: cmp     dword ptr [rdi+rax], 48h ; 'H'
 * 00000001C0007F73: jb      short loc_1C0007FA1
 * 00000001C0007F75: mov     r8, [r8+40h]
 * 00000001C0007F79: jmp     short loc_1C0007F7F
 * 00000001C0007F7B: mov     r8, [r8+10h]
 * 00000001C0007F7F: mov     ebx, 1
 * 00000001C0007F84: mov     rdx, rsi
 * 00000001C0007F87: mov     ecx, ebx
 * 00000001C0007F89: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0007F90: nop     dword ptr [rax+rax+00h]
 * 00000001C0007F95: test    eax, eax
 * 00000001C0007F97: mov     ecx, 4
 * 00000001C0007F9C: cmovz   ecx, ebx
 * 00000001C0007F9F: jmp     short loc_1C0007FA3
 * 00000001C0007FA1: mov     cl, 6
 * 00000001C0007FA3: mov     [rdi+3], cl
 * 00000001C0007FA6: jmp     def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C0007FAB: mov     [rsp+38h+arg_0], 0; jumptable 00000001C0003A34 case 42
 * 00000001C0007FB4: cmp     dl, 28h ; '('
 * 00000001C0007FB7: jnz     short loc_1C0007FC4
 * 00000001C0007FB9: mov     rbx, [rdi+40h]
 * 00000001C0007FBD: mov     eax, 3Ch ; '<'
 * 00000001C0007FC2: jmp     short loc_1C0007FCD
 * 00000001C0007FC4: mov     rbx, [rdi+18h]
 * 00000001C0007FC8: mov     eax, 10h
 * 00000001C0007FCD: lea     r14, [rdi+rax]
 * 00000001C0007FD1: test    rbx, rbx
 * 00000001C0007FD4: jz      loc_1C0007F48
 * 00000001C0007FDA: cmp     dword ptr [r14], 20h ; ' '
 * 00000001C0007FDE: jb      loc_1C0007F48
 * 00000001C0007FE4: cmp     dword ptr [rbx+8], 474D4449h
 * 00000001C0007FEB: jnz     loc_1C0007F48
 * 00000001C0007FF1: lea     rax, [rsp+38h+arg_0]
 * 00000001C0007FF6: mov     r9d, 656D764Eh
 * 00000001C0007FFC: mov     r8d, 88h
 * 00000001C0008002: mov     [rsp+38h+var_18], rax
 * 00000001C0008007: mov     rdx, rsi
 * 00000001C000800A: xor     ecx, ecx
 * 00000001C000800C: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0008013: nop     dword ptr [rax+rax+00h]
 * 00000001C0008018: test    eax, eax
 * 00000001C000801A: jnz     loc_1C0007F3F
 * 00000001C0008020: mov     rcx, [rsp+38h+arg_0]
 * 00000001C0008025: test    rcx, rcx
 * 00000001C0008028: jz      loc_1C0007F3F
 * 00000001C000802E: mov     edx, 88h
 * 00000001C0008033: call    NVMeZeroMemory
 * 00000001C0008038: movzx   ecx, word ptr [rsi+4]
 * 00000001C000803C: mov     rax, [rsp+38h+arg_0]
 * 00000001C0008041: mov     [rax], cx
 * 00000001C0008044: movzx   ecx, word ptr [rsi+6]
 * 00000001C0008048: mov     rax, [rsp+38h+arg_0]
 * 00000001C000804D: mov     [rax+2], cx
 * 00000001C0008051: movzx   ecx, byte ptr [rsi+8]
 * 00000001C0008055: mov     rax, [rsp+38h+arg_0]
 * 00000001C000805A: mov     [rax+4], cl
 * 00000001C000805D: movups  xmm0, xmmword ptr [rsi+20h]
 * 00000001C0008061: mov     rax, [rsp+38h+arg_0]
 * 00000001C0008066: movups  xmmword ptr [rax+10h], xmm0
 * 00000001C000806A: movups  xmm1, xmmword ptr [rsi+30h]
 * 00000001C000806E: movups  xmmword ptr [rax+20h], xmm1
 * 00000001C0008072: movups  xmm0, xmmword ptr [rsi+40h]
 * 00000001C0008076: movups  xmmword ptr [rax+30h], xmm0
 * 00000001C000807A: movups  xmm1, xmmword ptr [rsi+50h]
 * 00000001C000807E: movups  xmmword ptr [rax+40h], xmm1
 * 00000001C0008082: movups  xmm0, xmmword ptr [rsi+60h]
 * 00000001C0008086: movups  xmmword ptr [rax+50h], xmm0
 * 00000001C000808A: movups  xmm1, xmmword ptr [rsi+70h]
 * 00000001C000808E: movups  xmmword ptr [rax+60h], xmm1
 * 00000001C0008092: movups  xmm0, xmmword ptr [rsi+80h]
 * 00000001C0008099: movups  xmmword ptr [rax+70h], xmm0
 * 00000001C000809D: mov     rax, [rsp+38h+arg_0]
 * 00000001C00080A2: and     dword ptr [rax+28h], 0FFFFFFF7h
 * 00000001C00080A6: mov     rcx, [rsi+90h]
 * 00000001C00080AD: mov     rax, [rsp+38h+arg_0]
 * 00000001C00080B2: mov     [rax+8], rcx
 * 00000001C00080B6: mov     byte ptr [rdi+3], 1
 * 00000001C00080BA: cmp     word ptr [rbx+10h], 1
 * 00000001C00080BF: jnz     loc_1C0007F48
 * 00000001C00080C5: cmp     dword ptr [rbx+14h], 4
 * 00000001C00080C9: jb      loc_1C0007F48
 * 00000001C00080CF: movzx   edx, byte ptr [rbx+1Ah]
 * 00000001C00080D3: mov     rcx, rsi
 * 00000001C00080D6: call    GetNamespaceId
 * 00000001C00080DB: mov     rcx, [rsp+38h+arg_0]
 * 00000001C00080E0: mov     [rcx+80h], eax
 * 00000001C00080E6: cmp     byte ptr [rdi+3], 1
 * 00000001C00080EA: jnz     def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C00080F0: cmp     byte ptr [rdi+2], 28h ; '('
 * 00000001C00080F4: jnz     short loc_1C00080FC
 * 00000001C00080F6: mov     rbx, [rdi+40h]
 * 00000001C00080FA: jmp     short loc_1C0008100
 * 00000001C00080FC: mov     rbx, [rdi+18h]
 * 00000001C0008100: mov     edx, [r14]
 * 00000001C0008103: mov     rcx, rbx
 * 00000001C0008106: call    NVMeZeroMemory
 * 00000001C000810B: mov     dword ptr [rbx], 18h
 * 00000001C0008111: mov     dword ptr [rbx+4], 18h
 * 00000001C0008118: mov     dword ptr [rbx+8], 4D504449h
 * 00000001C000811F: mov     rax, [rsp+38h+arg_0]
 * 00000001C0008124: mov     [rbx+10h], rax
 * 00000001C0008128: jmp     def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 * 00000001C000812D: cmp     dl, 28h ; '('; jumptable 00000001C0003A34 case 43
 * 00000001C0008130: jnz     short loc_1C000813D
 * 00000001C0008132: mov     r8, [rdi+40h]
 * 00000001C0008136: mov     eax, 3Ch ; '<'
 * 00000001C000813B: jmp     short loc_1C0008146
 * 00000001C000813D: mov     r8, [rdi+18h]
 * 00000001C0008141: mov     eax, 10h
 * 00000001C0008146: test    r8, r8
 * 00000001C0008149: jz      loc_1C0007FA1
 * 00000001C000814F: cmp     dword ptr [rdi+rax], 18h
 * 00000001C0008153: jb      loc_1C0007FA1
 * 00000001C0008159: cmp     dword ptr [r8+8], 464D4449h
 * 00000001C0008161: jnz     loc_1C0007FA1
 * 00000001C0008167: jmp     loc_1C0007F7B
 * 00000001C000816C: mov     r9b, 25h ; '%'
 * 00000001C000816F: mov     r8b, 5
 * 00000001C0008172: mov     dl, 8
 * 00000001C0008174: mov     rcx, rdi
 * 00000001C0008177: call    NVMeSetSenseData
 * 00000001C000817C: nop
 * 00000001C000817D: jmp     def_1C0003A34; jumptable 00000001C0003A34 default case, cases 3-7,10-35,37,40,41
 */
