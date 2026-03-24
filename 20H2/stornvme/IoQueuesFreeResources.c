/*
 * XREFs of IoQueuesFreeResources @ 0x1C000B074
 * Callers:
 *     IoQueuesCreation @ 0x1C000AA18 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x1C000AB9C (IoQueuesCreationAsync.c)
 *     NVMeControllerRemove @ 0x1C000CE6C (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000D270 (NVMeControllerStop.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 */

/*
 * Hex-Rays decompilation failed for IoQueuesFreeResources @ 0x1C000B074
 * Reason: Hex-Rays returned no pseudocode for 0x1C000B074
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000B074: mov     [rsp+arg_8], rbx
 * 00000001C000B079: mov     [rsp+arg_10], rbp
 * 00000001C000B07E: push    rsi
 * 00000001C000B07F: push    rdi
 * 00000001C000B080: push    r12
 * 00000001C000B082: push    r14
 * 00000001C000B084: push    r15
 * 00000001C000B086: sub     rsp, 40h
 * 00000001C000B08A: movzx   eax, word ptr [rcx+116h]
 * 00000001C000B091: xor     r15d, r15d
 * 00000001C000B094: mov     edi, eax
 * 00000001C000B096: mov     rbx, rcx
 * 00000001C000B099: shl     edi, 4
 * 00000001C000B09C: shl     eax, 6
 * 00000001C000B09F: cmp     [rcx+10h], r15b
 * 00000001C000B0A3: jnz     loc_1C000B2AD
 * 00000001C000B0A9: lea     r12d, [r15+1]
 * 00000001C000B0AD: cmp     [rcx+300h], r15
 * 00000001C000B0B4: jz      short loc_1C000B0F3
 * 00000001C000B0B6: movzx   esi, r15w
 * 00000001C000B0BA: cmp     r15w, [rcx+118h]
 * 00000001C000B0C2: jnb     short loc_1C000B0F3
 * 00000001C000B0C4: mov     ebp, eax
 * 00000001C000B0C6: movzx   eax, si
 * 00000001C000B0C9: mov     rdx, rbp
 * 00000001C000B0CC: imul    r8, rax, 88h
 * 00000001C000B0D3: mov     rcx, rbx
 * 00000001C000B0D6: add     r8, [rbx+300h]
 * 00000001C000B0DD: mov     r9, [r8+8]
 * 00000001C000B0E1: call    NVMeFreeDmaBuffer
 * 00000001C000B0E6: add     si, r12w
 * 00000001C000B0EA: cmp     si, [rbx+118h]
 * 00000001C000B0F1: jb      short loc_1C000B0C6
 * 00000001C000B0F3: cmp     [rbx+308h], r15
 * 00000001C000B0FA: jz      loc_1C000B1F5
 * 00000001C000B100: movzx   esi, r15w
 * 00000001C000B104: cmp     r15w, [rbx+11Ah]
 * 00000001C000B10C: jnb     loc_1C000B1F5
 * 00000001C000B112: mov     r14d, edi
 * 00000001C000B115: movzx   eax, si
 * 00000001C000B118: imul    rdi, rax, 158h
 * 00000001C000B11F: mov     rax, [rbx+308h]
 * 00000001C000B126: lea     rcx, [rdi+rax]
 * 00000001C000B12A: cmp     [rcx+0C8h], r15b
 * 00000001C000B131: jz      loc_1C000B1D1
 * 00000001C000B137: cmp     [rcx+0D0h], r15
 * 00000001C000B13E: jz      loc_1C000B1D1
 * 00000001C000B144: mov     ebp, r15d
 * 00000001C000B147: cmp     r15w, [rbx+0D2h]
 * 00000001C000B14F: jnb     short loc_1C000B1A4
 * 00000001C000B151: mov     rax, [rbx+308h]
 * 00000001C000B158: mov     r9d, r12d
 * 00000001C000B15B: mov     [rsp+68h+arg_0], r15b
 * 00000001C000B160: mov     rdx, rbx
 * 00000001C000B163: mov     ecx, ebp
 * 00000001C000B165: mov     r8, [rdi+rax+0D0h]
 * 00000001C000B16D: lea     rax, [rsp+68h+arg_0]
 * 00000001C000B172: mov     [rsp+68h+var_38], rax
 * 00000001C000B177: mov     [rsp+68h+var_40], r15
 * 00000001C000B17C: mov     [rsp+68h+var_48], r12d
 * 00000001C000B181: mov     r8, [r8+rcx*8]
 * 00000001C000B185: mov     ecx, 5Bh ; '['
 * 00000001C000B18A: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B191: nop     dword ptr [rax+rax+00h]
 * 00000001C000B196: movzx   eax, word ptr [rbx+0D2h]
 * 00000001C000B19D: add     ebp, r12d
 * 00000001C000B1A0: cmp     ebp, eax
 * 00000001C000B1A2: jb      short loc_1C000B151
 * 00000001C000B1A4: mov     rax, [rbx+308h]
 * 00000001C000B1AB: mov     r8, [rdi+rax+0D0h]
 * 00000001C000B1B3: test    r8, r8
 * 00000001C000B1B6: jz      short loc_1C000B1D1
 * 00000001C000B1B8: mov     rdx, rbx
 * 00000001C000B1BB: mov     ecx, r12d
 * 00000001C000B1BE: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B1C5: nop     dword ptr [rax+rax+00h]
 * 00000001C000B1CA: mov     rax, [rbx+308h]
 * 00000001C000B1D1: lea     r8, [rdi+rax]
 * 00000001C000B1D5: mov     rdx, r14
 * 00000001C000B1D8: mov     r9, [r8+8]
 * 00000001C000B1DC: mov     rcx, rbx
 * 00000001C000B1DF: call    NVMeFreeDmaBuffer
 * 00000001C000B1E4: add     si, r12w
 * 00000001C000B1E8: cmp     si, [rbx+11Ah]
 * 00000001C000B1EF: jb      loc_1C000B115
 * 00000001C000B1F5: mov     r8, [rbx+300h]
 * 00000001C000B1FC: test    r8, r8
 * 00000001C000B1FF: jz      short loc_1C000B262
 * 00000001C000B201: mov     rax, [r8+18h]
 * 00000001C000B205: test    rax, rax
 * 00000001C000B208: jz      short loc_1C000B226
 * 00000001C000B20A: mov     r8, rax
 * 00000001C000B20D: mov     rdx, rbx
 * 00000001C000B210: mov     ecx, r12d
 * 00000001C000B213: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B21A: nop     dword ptr [rax+rax+00h]
 * 00000001C000B21F: mov     r8, [rbx+300h]
 * 00000001C000B226: mov     rax, [r8+20h]
 * 00000001C000B22A: test    rax, rax
 * 00000001C000B22D: jz      short loc_1C000B24B
 * 00000001C000B22F: mov     r8, rax
 * 00000001C000B232: mov     rdx, rbx
 * 00000001C000B235: mov     ecx, r12d
 * 00000001C000B238: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B23F: nop     dword ptr [rax+rax+00h]
 * 00000001C000B244: mov     r8, [rbx+300h]
 * 00000001C000B24B: test    r8, r8
 * 00000001C000B24E: jz      short loc_1C000B262
 * 00000001C000B250: mov     rdx, rbx
 * 00000001C000B253: mov     ecx, r12d
 * 00000001C000B256: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B25D: nop     dword ptr [rax+rax+00h]
 * 00000001C000B262: mov     r8, [rbx+308h]
 * 00000001C000B269: test    r8, r8
 * 00000001C000B26C: jz      short loc_1C000B2AD
 * 00000001C000B26E: mov     rax, [r8+0C0h]
 * 00000001C000B275: test    rax, rax
 * 00000001C000B278: jz      short loc_1C000B296
 * 00000001C000B27A: mov     r8, rax
 * 00000001C000B27D: mov     rdx, rbx
 * 00000001C000B280: mov     ecx, r12d
 * 00000001C000B283: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B28A: nop     dword ptr [rax+rax+00h]
 * 00000001C000B28F: mov     r8, [rbx+308h]
 * 00000001C000B296: test    r8, r8
 * 00000001C000B299: jz      short loc_1C000B2AD
 * 00000001C000B29B: mov     rdx, rbx
 * 00000001C000B29E: mov     ecx, r12d
 * 00000001C000B2A1: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B2A8: nop     dword ptr [rax+rax+00h]
 * 00000001C000B2AD: lea     r11, [rsp+68h+var_28]
 * 00000001C000B2B2: mov     [rbx+308h], r15
 * 00000001C000B2B9: mov     rbp, [r11+40h]
 * 00000001C000B2BD: mov     [rbx+300h], r15
 * 00000001C000B2C4: mov     [rbx+118h], r15d
 * 00000001C000B2CB: mov     rbx, [r11+38h]
 * 00000001C000B2CF: mov     rsp, r11
 * 00000001C000B2D2: pop     r15
 * 00000001C000B2D4: pop     r14
 * 00000001C000B2D6: pop     r12
 * 00000001C000B2D8: pop     rdi
 * 00000001C000B2D9: pop     rsi
 * 00000001C000B2DA: retn
 */
