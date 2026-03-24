/*
 * XREFs of GetInterruptMessageInformation @ 0x1C000A114
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000C7A0 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     __security_check_cookie @ 0x1C00050E0 (__security_check_cookie.c)
 *     FreeMsiInfo @ 0x1C0009FE0 (FreeMsiInfo.c)
 */

/*
 * Hex-Rays decompilation failed for GetInterruptMessageInformation @ 0x1C000A114
 * Reason: Hex-Rays returned no pseudocode for 0x1C000A114
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000A114: mov     [rsp+arg_8], rbx
 * 00000001C000A119: mov     [rsp+arg_10], rbp
 * 00000001C000A11E: mov     [rsp+arg_18], rsi
 * 00000001C000A123: push    rdi
 * 00000001C000A124: push    r14
 * 00000001C000A126: push    r15
 * 00000001C000A128: sub     rsp, 60h
 * 00000001C000A12C: mov     rax, cs:__security_cookie
 * 00000001C000A133: xor     rax, rsp
 * 00000001C000A136: mov     [rsp+78h+var_28], rax
 * 00000001C000A13B: xor     esi, esi
 * 00000001C000A13D: xorps   xmm0, xmm0
 * 00000001C000A140: mov     rdi, rcx
 * 00000001C000A143: mov     ebx, esi
 * 00000001C000A145: movups  [rsp+78h+var_48], xmm0
 * 00000001C000A14A: lea     r15d, [rsi+1]
 * 00000001C000A14E: movups  [rsp+78h+var_38], xmm0
 * 00000001C000A153: cmp     [rcx+10h], sil
 * 00000001C000A157: jnz     loc_1C000A2A8
 * 00000001C000A15D: call    FreeMsiInfo
 * 00000001C000A162: mov     eax, [rdi+0Ch]
 * 00000001C000A165: sub     eax, 2
 * 00000001C000A168: cmp     eax, r15d
 * 00000001C000A16B: ja      short loc_1C000A1DD
 * 00000001C000A16D: lea     r14d, [rsi+0Dh]
 * 00000001C000A171: xor     r8d, r8d
 * 00000001C000A174: mov     ecx, r14d
 * 00000001C000A177: lea     r9, [rsp+78h+var_48]
 * 00000001C000A17C: mov     rdx, rdi
 * 00000001C000A17F: mov     ebp, esi
 * 00000001C000A181: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A188: nop     dword ptr [rax+rax+00h]
 * 00000001C000A18D: test    eax, eax
 * 00000001C000A18F: jnz     short loc_1C000A1D9
 * 00000001C000A191: test    bp, bp
 * 00000001C000A194: jnz     short loc_1C000A19D
 * 00000001C000A196: mov     rbx, qword ptr [rsp+78h+var_48+8]
 * 00000001C000A19B: jmp     short loc_1C000A1B1
 * 00000001C000A19D: cmp     rbx, qword ptr [rsp+78h+var_48+8]
 * 00000001C000A1A2: jnz     short loc_1C000A1B1
 * 00000001C000A1A4: cmp     dword ptr [rdi+0Ch], 3
 * 00000001C000A1A8: jz      short loc_1C000A1B1
 * 00000001C000A1AA: mov     dword ptr [rdi+0Ch], 2
 * 00000001C000A1B1: add     bp, r15w
 * 00000001C000A1B5: lea     r9, [rsp+78h+var_48]
 * 00000001C000A1BA: movzx   r8d, bp
 * 00000001C000A1BE: mov     rdx, rdi
 * 00000001C000A1C1: mov     ecx, r14d
 * 00000001C000A1C4: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A1CB: nop     dword ptr [rax+rax+00h]
 * 00000001C000A1D0: test    eax, eax
 * 00000001C000A1D2: jz      short loc_1C000A191
 * 00000001C000A1D4: test    bp, bp
 * 00000001C000A1D7: jnz     short loc_1C000A1E1
 * 00000001C000A1D9: mov     [rdi+0Ch], r15d
 * 00000001C000A1DD: movzx   ebp, r15w
 * 00000001C000A1E1: movzx   eax, bp
 * 00000001C000A1E4: lea     rbx, [rdi+100h]
 * 00000001C000A1EB: mov     [rdi+0F8h], bp
 * 00000001C000A1F2: mov     rdx, rdi
 * 00000001C000A1F5: mov     ebp, 656D764Eh
 * 00000001C000A1FA: mov     [rsp+78h+var_58], rbx
 * 00000001C000A1FF: mov     r9d, ebp
 * 00000001C000A202: xor     ecx, ecx
 * 00000001C000A204: lea     r8d, [rax+rax*2]
 * 00000001C000A208: shl     r8d, 3
 * 00000001C000A20C: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A213: nop     dword ptr [rax+rax+00h]
 * 00000001C000A218: mov     rcx, [rbx]
 * 00000001C000A21B: test    rcx, rcx
 * 00000001C000A21E: jz      loc_1C000A2D3
 * 00000001C000A224: movzx   eax, word ptr [rdi+0F8h]
 * 00000001C000A22B: lea     edx, [rax+rax*2]
 * 00000001C000A22E: shl     edx, 3
 * 00000001C000A231: call    NVMeZeroMemory
 * 00000001C000A236: movzx   r8d, word ptr [rdi+0F8h]
 * 00000001C000A23E: lea     r14, [rdi+108h]
 * 00000001C000A245: shl     r8d, 4
 * 00000001C000A249: mov     r9d, ebp
 * 00000001C000A24C: mov     rdx, rdi
 * 00000001C000A24F: mov     [rsp+78h+var_58], r14
 * 00000001C000A254: xor     ecx, ecx
 * 00000001C000A256: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A25D: nop     dword ptr [rax+rax+00h]
 * 00000001C000A262: mov     rcx, [r14]
 * 00000001C000A265: test    rcx, rcx
 * 00000001C000A268: jz      short loc_1C000A2D3
 * 00000001C000A26A: movzx   edx, word ptr [rdi+0F8h]
 * 00000001C000A271: shl     edx, 4
 * 00000001C000A274: call    NVMeZeroMemory
 * 00000001C000A279: jmp     short loc_1C000A29F
 * 00000001C000A27B: mov     rax, [rbx]
 * 00000001C000A27E: movzx   r8d, si
 * 00000001C000A282: movzx   ecx, si
 * 00000001C000A285: lea     rdx, [r8+r8*2]
 * 00000001C000A289: shl     r8, 4
 * 00000001C000A28D: mov     [rax+rdx*8], ecx
 * 00000001C000A290: add     r8, [r14]
 * 00000001C000A293: mov     rax, [rbx]
 * 00000001C000A296: add     si, r15w
 * 00000001C000A29A: mov     [rax+rdx*8+8], r8
 * 00000001C000A29F: cmp     si, [rdi+0F8h]
 * 00000001C000A2A6: jb      short loc_1C000A27B
 * 00000001C000A2A8: mov     al, r15b
 * 00000001C000A2AB: mov     rcx, [rsp+78h+var_28]
 * 00000001C000A2B0: xor     rcx, rsp; StackCookie
 * 00000001C000A2B3: call    __security_check_cookie
 * 00000001C000A2B8: lea     r11, [rsp+78h+var_18]
 * 00000001C000A2BD: mov     rbx, [r11+28h]
 * 00000001C000A2C1: mov     rbp, [r11+30h]
 * 00000001C000A2C5: mov     rsi, [r11+38h]
 * 00000001C000A2C9: mov     rsp, r11
 * 00000001C000A2CC: pop     r15
 * 00000001C000A2CE: pop     r14
 * 00000001C000A2D0: pop     rdi
 * 00000001C000A2D1: retn
 * 00000001C000A2D3: mov     rcx, rdi
 * 00000001C000A2D6: call    FreeMsiInfo
 * 00000001C000A2DB: xor     al, al
 * 00000001C000A2DD: jmp     short loc_1C000A2AB
 */
