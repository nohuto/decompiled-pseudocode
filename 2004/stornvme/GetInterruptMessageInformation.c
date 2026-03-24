/*
 * XREFs of GetInterruptMessageInformation @ 0x1C000A164
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000C7F0 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     __security_check_cookie @ 0x1C00050E0 (__security_check_cookie.c)
 *     FreeMsiInfo @ 0x1C000A030 (FreeMsiInfo.c)
 */

/*
 * Hex-Rays decompilation failed for GetInterruptMessageInformation @ 0x1C000A164
 * Reason: Hex-Rays returned no pseudocode for 0x1C000A164
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000A164: mov     [rsp+arg_8], rbx
 * 00000001C000A169: mov     [rsp+arg_10], rbp
 * 00000001C000A16E: mov     [rsp+arg_18], rsi
 * 00000001C000A173: push    rdi
 * 00000001C000A174: push    r14
 * 00000001C000A176: push    r15
 * 00000001C000A178: sub     rsp, 60h
 * 00000001C000A17C: mov     rax, cs:__security_cookie
 * 00000001C000A183: xor     rax, rsp
 * 00000001C000A186: mov     [rsp+78h+var_28], rax
 * 00000001C000A18B: xor     esi, esi
 * 00000001C000A18D: xorps   xmm0, xmm0
 * 00000001C000A190: mov     rdi, rcx
 * 00000001C000A193: mov     ebx, esi
 * 00000001C000A195: movups  [rsp+78h+var_48], xmm0
 * 00000001C000A19A: lea     r15d, [rsi+1]
 * 00000001C000A19E: movups  [rsp+78h+var_38], xmm0
 * 00000001C000A1A3: cmp     [rcx+10h], sil
 * 00000001C000A1A7: jnz     loc_1C000A2F8
 * 00000001C000A1AD: call    FreeMsiInfo
 * 00000001C000A1B2: mov     eax, [rdi+0Ch]
 * 00000001C000A1B5: sub     eax, 2
 * 00000001C000A1B8: cmp     eax, r15d
 * 00000001C000A1BB: ja      short loc_1C000A22D
 * 00000001C000A1BD: lea     r14d, [rsi+0Dh]
 * 00000001C000A1C1: xor     r8d, r8d
 * 00000001C000A1C4: mov     ecx, r14d
 * 00000001C000A1C7: lea     r9, [rsp+78h+var_48]
 * 00000001C000A1CC: mov     rdx, rdi
 * 00000001C000A1CF: mov     ebp, esi
 * 00000001C000A1D1: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A1D8: nop     dword ptr [rax+rax+00h]
 * 00000001C000A1DD: test    eax, eax
 * 00000001C000A1DF: jnz     short loc_1C000A229
 * 00000001C000A1E1: test    bp, bp
 * 00000001C000A1E4: jnz     short loc_1C000A1ED
 * 00000001C000A1E6: mov     rbx, qword ptr [rsp+78h+var_48+8]
 * 00000001C000A1EB: jmp     short loc_1C000A201
 * 00000001C000A1ED: cmp     rbx, qword ptr [rsp+78h+var_48+8]
 * 00000001C000A1F2: jnz     short loc_1C000A201
 * 00000001C000A1F4: cmp     dword ptr [rdi+0Ch], 3
 * 00000001C000A1F8: jz      short loc_1C000A201
 * 00000001C000A1FA: mov     dword ptr [rdi+0Ch], 2
 * 00000001C000A201: add     bp, r15w
 * 00000001C000A205: lea     r9, [rsp+78h+var_48]
 * 00000001C000A20A: movzx   r8d, bp
 * 00000001C000A20E: mov     rdx, rdi
 * 00000001C000A211: mov     ecx, r14d
 * 00000001C000A214: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A21B: nop     dword ptr [rax+rax+00h]
 * 00000001C000A220: test    eax, eax
 * 00000001C000A222: jz      short loc_1C000A1E1
 * 00000001C000A224: test    bp, bp
 * 00000001C000A227: jnz     short loc_1C000A231
 * 00000001C000A229: mov     [rdi+0Ch], r15d
 * 00000001C000A22D: movzx   ebp, r15w
 * 00000001C000A231: movzx   eax, bp
 * 00000001C000A234: lea     rbx, [rdi+100h]
 * 00000001C000A23B: mov     [rdi+0F8h], bp
 * 00000001C000A242: mov     rdx, rdi
 * 00000001C000A245: mov     ebp, 656D764Eh
 * 00000001C000A24A: mov     [rsp+78h+var_58], rbx
 * 00000001C000A24F: mov     r9d, ebp
 * 00000001C000A252: xor     ecx, ecx
 * 00000001C000A254: lea     r8d, [rax+rax*2]
 * 00000001C000A258: shl     r8d, 3
 * 00000001C000A25C: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A263: nop     dword ptr [rax+rax+00h]
 * 00000001C000A268: mov     rcx, [rbx]
 * 00000001C000A26B: test    rcx, rcx
 * 00000001C000A26E: jz      loc_1C000A323
 * 00000001C000A274: movzx   eax, word ptr [rdi+0F8h]
 * 00000001C000A27B: lea     edx, [rax+rax*2]
 * 00000001C000A27E: shl     edx, 3
 * 00000001C000A281: call    NVMeZeroMemory
 * 00000001C000A286: movzx   r8d, word ptr [rdi+0F8h]
 * 00000001C000A28E: lea     r14, [rdi+108h]
 * 00000001C000A295: shl     r8d, 4
 * 00000001C000A299: mov     r9d, ebp
 * 00000001C000A29C: mov     rdx, rdi
 * 00000001C000A29F: mov     [rsp+78h+var_58], r14
 * 00000001C000A2A4: xor     ecx, ecx
 * 00000001C000A2A6: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A2AD: nop     dword ptr [rax+rax+00h]
 * 00000001C000A2B2: mov     rcx, [r14]
 * 00000001C000A2B5: test    rcx, rcx
 * 00000001C000A2B8: jz      short loc_1C000A323
 * 00000001C000A2BA: movzx   edx, word ptr [rdi+0F8h]
 * 00000001C000A2C1: shl     edx, 4
 * 00000001C000A2C4: call    NVMeZeroMemory
 * 00000001C000A2C9: jmp     short loc_1C000A2EF
 * 00000001C000A2CB: mov     rax, [rbx]
 * 00000001C000A2CE: movzx   r8d, si
 * 00000001C000A2D2: movzx   ecx, si
 * 00000001C000A2D5: lea     rdx, [r8+r8*2]
 * 00000001C000A2D9: shl     r8, 4
 * 00000001C000A2DD: mov     [rax+rdx*8], ecx
 * 00000001C000A2E0: add     r8, [r14]
 * 00000001C000A2E3: mov     rax, [rbx]
 * 00000001C000A2E6: add     si, r15w
 * 00000001C000A2EA: mov     [rax+rdx*8+8], r8
 * 00000001C000A2EF: cmp     si, [rdi+0F8h]
 * 00000001C000A2F6: jb      short loc_1C000A2CB
 * 00000001C000A2F8: mov     al, r15b
 * 00000001C000A2FB: mov     rcx, [rsp+78h+var_28]
 * 00000001C000A300: xor     rcx, rsp; StackCookie
 * 00000001C000A303: call    __security_check_cookie
 * 00000001C000A308: lea     r11, [rsp+78h+var_18]
 * 00000001C000A30D: mov     rbx, [r11+28h]
 * 00000001C000A311: mov     rbp, [r11+30h]
 * 00000001C000A315: mov     rsi, [r11+38h]
 * 00000001C000A319: mov     rsp, r11
 * 00000001C000A31C: pop     r15
 * 00000001C000A31E: pop     r14
 * 00000001C000A320: pop     rdi
 * 00000001C000A321: retn
 * 00000001C000A323: mov     rcx, rdi
 * 00000001C000A326: call    FreeMsiInfo
 * 00000001C000A32B: xor     al, al
 * 00000001C000A32D: jmp     short loc_1C000A2FB
 */
