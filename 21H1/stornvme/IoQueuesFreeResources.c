/*
 * XREFs of IoQueuesFreeResources @ 0x1C000B0C4
 * Callers:
 *     IoQueuesCreation @ 0x1C000AA68 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x1C000ABEC (IoQueuesCreationAsync.c)
 *     NVMeControllerRemove @ 0x1C000CE54 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000D258 (NVMeControllerStop.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 */

/*
 * Hex-Rays decompilation failed for IoQueuesFreeResources @ 0x1C000B0C4
 * Reason: Hex-Rays returned no pseudocode for 0x1C000B0C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000B0C4: mov     [rsp+arg_8], rbx
 * 00000001C000B0C9: mov     [rsp+arg_10], rbp
 * 00000001C000B0CE: push    rsi
 * 00000001C000B0CF: push    rdi
 * 00000001C000B0D0: push    r12
 * 00000001C000B0D2: push    r14
 * 00000001C000B0D4: push    r15
 * 00000001C000B0D6: sub     rsp, 40h
 * 00000001C000B0DA: movzx   eax, word ptr [rcx+116h]
 * 00000001C000B0E1: xor     r15d, r15d
 * 00000001C000B0E4: mov     edi, eax
 * 00000001C000B0E6: mov     rbx, rcx
 * 00000001C000B0E9: shl     edi, 4
 * 00000001C000B0EC: shl     eax, 6
 * 00000001C000B0EF: cmp     [rcx+10h], r15b
 * 00000001C000B0F3: jnz     loc_1C000B2FD
 * 00000001C000B0F9: lea     r12d, [r15+1]
 * 00000001C000B0FD: cmp     [rcx+300h], r15
 * 00000001C000B104: jz      short loc_1C000B143
 * 00000001C000B106: movzx   esi, r15w
 * 00000001C000B10A: cmp     r15w, [rcx+118h]
 * 00000001C000B112: jnb     short loc_1C000B143
 * 00000001C000B114: mov     ebp, eax
 * 00000001C000B116: movzx   eax, si
 * 00000001C000B119: mov     rdx, rbp
 * 00000001C000B11C: imul    r8, rax, 88h
 * 00000001C000B123: mov     rcx, rbx
 * 00000001C000B126: add     r8, [rbx+300h]
 * 00000001C000B12D: mov     r9, [r8+8]
 * 00000001C000B131: call    NVMeFreeDmaBuffer
 * 00000001C000B136: add     si, r12w
 * 00000001C000B13A: cmp     si, [rbx+118h]
 * 00000001C000B141: jb      short loc_1C000B116
 * 00000001C000B143: cmp     [rbx+308h], r15
 * 00000001C000B14A: jz      loc_1C000B245
 * 00000001C000B150: movzx   esi, r15w
 * 00000001C000B154: cmp     r15w, [rbx+11Ah]
 * 00000001C000B15C: jnb     loc_1C000B245
 * 00000001C000B162: mov     r14d, edi
 * 00000001C000B165: movzx   eax, si
 * 00000001C000B168: imul    rdi, rax, 158h
 * 00000001C000B16F: mov     rax, [rbx+308h]
 * 00000001C000B176: lea     rcx, [rdi+rax]
 * 00000001C000B17A: cmp     [rcx+0C8h], r15b
 * 00000001C000B181: jz      loc_1C000B221
 * 00000001C000B187: cmp     [rcx+0D0h], r15
 * 00000001C000B18E: jz      loc_1C000B221
 * 00000001C000B194: mov     ebp, r15d
 * 00000001C000B197: cmp     r15w, [rbx+0D2h]
 * 00000001C000B19F: jnb     short loc_1C000B1F4
 * 00000001C000B1A1: mov     rax, [rbx+308h]
 * 00000001C000B1A8: mov     r9d, r12d
 * 00000001C000B1AB: mov     [rsp+68h+arg_0], r15b
 * 00000001C000B1B0: mov     rdx, rbx
 * 00000001C000B1B3: mov     ecx, ebp
 * 00000001C000B1B5: mov     r8, [rdi+rax+0D0h]
 * 00000001C000B1BD: lea     rax, [rsp+68h+arg_0]
 * 00000001C000B1C2: mov     [rsp+68h+var_38], rax
 * 00000001C000B1C7: mov     [rsp+68h+var_40], r15
 * 00000001C000B1CC: mov     [rsp+68h+var_48], r12d
 * 00000001C000B1D1: mov     r8, [r8+rcx*8]
 * 00000001C000B1D5: mov     ecx, 5Bh ; '['
 * 00000001C000B1DA: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B1E1: nop     dword ptr [rax+rax+00h]
 * 00000001C000B1E6: movzx   eax, word ptr [rbx+0D2h]
 * 00000001C000B1ED: add     ebp, r12d
 * 00000001C000B1F0: cmp     ebp, eax
 * 00000001C000B1F2: jb      short loc_1C000B1A1
 * 00000001C000B1F4: mov     rax, [rbx+308h]
 * 00000001C000B1FB: mov     r8, [rdi+rax+0D0h]
 * 00000001C000B203: test    r8, r8
 * 00000001C000B206: jz      short loc_1C000B221
 * 00000001C000B208: mov     rdx, rbx
 * 00000001C000B20B: mov     ecx, r12d
 * 00000001C000B20E: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B215: nop     dword ptr [rax+rax+00h]
 * 00000001C000B21A: mov     rax, [rbx+308h]
 * 00000001C000B221: lea     r8, [rdi+rax]
 * 00000001C000B225: mov     rdx, r14
 * 00000001C000B228: mov     r9, [r8+8]
 * 00000001C000B22C: mov     rcx, rbx
 * 00000001C000B22F: call    NVMeFreeDmaBuffer
 * 00000001C000B234: add     si, r12w
 * 00000001C000B238: cmp     si, [rbx+11Ah]
 * 00000001C000B23F: jb      loc_1C000B165
 * 00000001C000B245: mov     r8, [rbx+300h]
 * 00000001C000B24C: test    r8, r8
 * 00000001C000B24F: jz      short loc_1C000B2B2
 * 00000001C000B251: mov     rax, [r8+18h]
 * 00000001C000B255: test    rax, rax
 * 00000001C000B258: jz      short loc_1C000B276
 * 00000001C000B25A: mov     r8, rax
 * 00000001C000B25D: mov     rdx, rbx
 * 00000001C000B260: mov     ecx, r12d
 * 00000001C000B263: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B26A: nop     dword ptr [rax+rax+00h]
 * 00000001C000B26F: mov     r8, [rbx+300h]
 * 00000001C000B276: mov     rax, [r8+20h]
 * 00000001C000B27A: test    rax, rax
 * 00000001C000B27D: jz      short loc_1C000B29B
 * 00000001C000B27F: mov     r8, rax
 * 00000001C000B282: mov     rdx, rbx
 * 00000001C000B285: mov     ecx, r12d
 * 00000001C000B288: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B28F: nop     dword ptr [rax+rax+00h]
 * 00000001C000B294: mov     r8, [rbx+300h]
 * 00000001C000B29B: test    r8, r8
 * 00000001C000B29E: jz      short loc_1C000B2B2
 * 00000001C000B2A0: mov     rdx, rbx
 * 00000001C000B2A3: mov     ecx, r12d
 * 00000001C000B2A6: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B2AD: nop     dword ptr [rax+rax+00h]
 * 00000001C000B2B2: mov     r8, [rbx+308h]
 * 00000001C000B2B9: test    r8, r8
 * 00000001C000B2BC: jz      short loc_1C000B2FD
 * 00000001C000B2BE: mov     rax, [r8+0C0h]
 * 00000001C000B2C5: test    rax, rax
 * 00000001C000B2C8: jz      short loc_1C000B2E6
 * 00000001C000B2CA: mov     r8, rax
 * 00000001C000B2CD: mov     rdx, rbx
 * 00000001C000B2D0: mov     ecx, r12d
 * 00000001C000B2D3: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B2DA: nop     dword ptr [rax+rax+00h]
 * 00000001C000B2DF: mov     r8, [rbx+308h]
 * 00000001C000B2E6: test    r8, r8
 * 00000001C000B2E9: jz      short loc_1C000B2FD
 * 00000001C000B2EB: mov     rdx, rbx
 * 00000001C000B2EE: mov     ecx, r12d
 * 00000001C000B2F1: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B2F8: nop     dword ptr [rax+rax+00h]
 * 00000001C000B2FD: lea     r11, [rsp+68h+var_28]
 * 00000001C000B302: mov     [rbx+308h], r15
 * 00000001C000B309: mov     rbp, [r11+40h]
 * 00000001C000B30D: mov     [rbx+300h], r15
 * 00000001C000B314: mov     [rbx+118h], r15d
 * 00000001C000B31B: mov     rbx, [r11+38h]
 * 00000001C000B31F: mov     rsp, r11
 * 00000001C000B322: pop     r15
 * 00000001C000B324: pop     r14
 * 00000001C000B326: pop     r12
 * 00000001C000B328: pop     rdi
 * 00000001C000B329: pop     rsi
 * 00000001C000B32A: retn
 */
