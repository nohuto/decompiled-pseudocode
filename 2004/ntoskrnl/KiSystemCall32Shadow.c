/*
 * XREFs of KiSystemCall32Shadow @ 0x140A12E40
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x140409080 (KiExceptionDispatch.c)
 *     KiSystemCall32Shadow @ 0x140A12E40 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x140A12E40
 * Reason: Hex-Rays returned no pseudocode for 0x140A12E40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A12E40: swapgs
 * 0000000140A12E43: mov     gs:9010h, rsp
 * 0000000140A12E4C: mov     rsp, gs:9000h
 * 0000000140A12E55: mov     cr3, rsp
 * 0000000140A12E58: mov     rsp, gs:9008h
 * 0000000140A12E61: push    2Bh ; '+'
 * 0000000140A12E63: push    qword ptr gs:9010h
 * 0000000140A12E6B: push    r11
 * 0000000140A12E6D: push    23h ; '#'
 * 0000000140A12E6F: push    rcx
 * 0000000140A12E70: sub     rsp, 8
 * 0000000140A12E74: push    rbp
 * 0000000140A12E75: sub     rsp, 158h
 * 0000000140A12E7C: lea     rbp, [rsp+190h+var_110]
 * 0000000140A12E84: mov     byte ptr [rbp-55h], 1
 * 0000000140A12E88: mov     [rbp-50h], rax
 * 0000000140A12E8C: mov     [rbp-48h], rcx
 * 0000000140A12E90: mov     [rbp-40h], rdx
 * 0000000140A12E94: mov     [rbp-38h], r8
 * 0000000140A12E98: mov     [rbp-30h], r9
 * 0000000140A12E9C: mov     [rbp-28h], r10
 * 0000000140A12EA0: mov     [rbp-20h], r11
 * 0000000140A12EA4: test    byte ptr [rbp+0F0h], 1
 * 0000000140A12EAB: jnz     short loc_140A12EDA
 * 0000000140A12EAD: lfence
 * 0000000140A12EB0: test    byte ptr gs:278h, 1
 * 0000000140A12EB9: jnz     short loc_140A12EC3
 * 0000000140A12EBB: lfence
 * 0000000140A12EBE: jmp     loc_140A1311F
 * 0000000140A12EC3: movzx   eax, byte ptr gs:27Ah
 * 0000000140A12ECC: mov     ecx, 48h ; 'H'
 * 0000000140A12ED1: xor     edx, edx
 * 0000000140A12ED3: wrmsr
 * 0000000140A12ED5: jmp     loc_140A1311F
 * 0000000140A12EDA: test    cs:KiKvaShadow, 1
 * 0000000140A12EE1: jnz     short loc_140A12EE6
 * 0000000140A12EE3: swapgs
 * 0000000140A12EE6: lfence
 * 0000000140A12EE9: mov     r10, gs:188h
 * 0000000140A12EF2: mov     rcx, gs:188h
 * 0000000140A12EFB: mov     rcx, [rcx+220h]
 * 0000000140A12F02: mov     rcx, [rcx+9E0h]
 * 0000000140A12F09: mov     gs:270h, rcx
 * 0000000140A12F12: mov     cl, gs:850h
 * 0000000140A12F1A: mov     gs:851h, cl
 * 0000000140A12F22: mov     cl, gs:278h
 * 0000000140A12F2A: mov     gs:852h, cl
 * 0000000140A12F32: movzx   eax, byte ptr gs:27Bh
 * 0000000140A12F3B: cmp     gs:27Ah, al
 * 0000000140A12F43: jz      short loc_140A12F56
 * 0000000140A12F45: mov     gs:27Ah, al
 * 0000000140A12F4D: mov     ecx, 48h ; 'H'
 * 0000000140A12F52: xor     edx, edx
 * 0000000140A12F54: wrmsr
 * 0000000140A12F56: movzx   edx, byte ptr gs:278h
 * 0000000140A12F5F: test    edx, 8
 * 0000000140A12F65: jz      short loc_140A12F7A
 * 0000000140A12F67: mov     eax, 1
 * 0000000140A12F6C: xor     edx, edx
 * 0000000140A12F6E: mov     ecx, 49h ; 'I'
 * 0000000140A12F73: wrmsr
 * 0000000140A12F75: jmp     loc_140A130B8
 * 0000000140A12F7A: test    edx, 2
 * 0000000140A12F80: jz      loc_140A130B5
 * 0000000140A12F86: test    byte ptr gs:279h, 4
 * 0000000140A12F8F: jnz     loc_140A130B5
 * 0000000140A12F95: call    loc_140A130A8
 * 0000000140A12F9A: add     rsp, 8
 * 0000000140A12F9E: call    loc_140A130B1
 * 0000000140A12FA3: add     rsp, 8
 * 0000000140A12FA7: call    loc_140A12F9A
 * 0000000140A12FAC: add     rsp, 8
 * 0000000140A12FB0: call    loc_140A12FA3
 * 0000000140A12FB5: add     rsp, 8
 * 0000000140A12FB9: call    loc_140A12FAC
 * 0000000140A12FBE: add     rsp, 8
 * 0000000140A12FC2: call    loc_140A12FB5
 * 0000000140A12FC7: add     rsp, 8
 * 0000000140A12FCB: call    loc_140A12FBE
 * 0000000140A12FD0: add     rsp, 8
 * 0000000140A12FD4: call    loc_140A12FC7
 * 0000000140A12FD9: add     rsp, 8
 * 0000000140A12FDD: call    loc_140A12FD0
 * 0000000140A12FE2: add     rsp, 8
 * 0000000140A12FE6: call    loc_140A12FD9
 * 0000000140A12FEB: add     rsp, 8
 * 0000000140A12FEF: call    loc_140A12FE2
 * 0000000140A12FF4: add     rsp, 8
 * 0000000140A12FF8: call    loc_140A12FEB
 * 0000000140A12FFD: add     rsp, 8
 * 0000000140A13001: call    loc_140A12FF4
 * 0000000140A13006: add     rsp, 8
 * 0000000140A1300A: call    loc_140A12FFD
 * 0000000140A1300F: add     rsp, 8
 * 0000000140A13013: call    loc_140A13006
 * 0000000140A13018: add     rsp, 8
 * 0000000140A1301C: call    loc_140A1300F
 * 0000000140A13021: add     rsp, 8
 * 0000000140A13025: call    loc_140A13018
 * 0000000140A1302A: add     rsp, 8
 * 0000000140A1302E: call    loc_140A13021
 * 0000000140A13033: add     rsp, 8
 * 0000000140A13037: call    loc_140A1302A
 * 0000000140A1303C: add     rsp, 8
 * 0000000140A13040: call    loc_140A13033
 * 0000000140A13045: add     rsp, 8
 * 0000000140A13049: call    loc_140A1303C
 * 0000000140A1304E: add     rsp, 8
 * 0000000140A13052: call    loc_140A13045
 * 0000000140A13057: add     rsp, 8
 * 0000000140A1305B: call    loc_140A1304E
 * 0000000140A13060: add     rsp, 8
 * 0000000140A13064: call    loc_140A13057
 * 0000000140A13069: add     rsp, 8
 * 0000000140A1306D: call    loc_140A13060
 * 0000000140A13072: add     rsp, 8
 * 0000000140A13076: call    loc_140A13069
 * 0000000140A1307B: add     rsp, 8
 * 0000000140A1307F: call    loc_140A13072
 * 0000000140A13084: add     rsp, 8
 * 0000000140A13088: call    loc_140A1307B
 * 0000000140A1308D: add     rsp, 8
 * 0000000140A13091: call    loc_140A13084
 * 0000000140A13096: add     rsp, 8
 * 0000000140A1309A: call    loc_140A1308D
 * 0000000140A1309F: add     rsp, 8
 * 0000000140A130A3: call    loc_140A13096
 * 0000000140A130A8: add     rsp, 8
 * 0000000140A130AC: call    loc_140A1309F
 * 0000000140A130B1: add     rsp, 8
 * 0000000140A130B5: lfence
 * 0000000140A130B8: mov     byte ptr gs:853h, 0
 * 0000000140A130C1: test    byte ptr [r10+3], 80h
 * 0000000140A130C6: jz      short loc_140A1310A
 * 0000000140A130C8: mov     ecx, 0C0000102h
 * 0000000140A130CD: rdmsr
 * 0000000140A130CF: shl     rdx, 20h
 * 0000000140A130D3: or      rax, rdx
 * 0000000140A130D6: cmp     rax, cs:MmUserProbeAddress
 * 0000000140A130DD: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140A130E5: cmp     [r10+0F0h], rax
 * 0000000140A130EC: jz      short loc_140A1310A
 * 0000000140A130EE: mov     rdx, [r10+1F0h]
 * 0000000140A130F5: bts     dword ptr [r10+74h], 8
 * 0000000140A130FB: dec     word ptr [r10+1E6h]
 * 0000000140A13103: mov     [rdx+80h], rax
 * 0000000140A1310A: test    byte ptr [r10+3], 3
 * 0000000140A1310F: mov     word ptr [rbp+80h], 0
 * 0000000140A13118: jz      short loc_140A1311F
 * 0000000140A1311A: call    KiSaveDebugRegisterState
 * 0000000140A1311F: cld
 * 0000000140A13120: stmxcsr dword ptr [rbp-54h]
 * 0000000140A13124: ldmxcsr dword ptr gs:180h
 * 0000000140A1312D: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140A13131: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140A13135: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140A13139: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140A1313D: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140A13141: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140A13145: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140A1314C: jz      short loc_140A1315A
 * 0000000140A1314E: test    byte ptr [rbp+0F0h], 1
 * 0000000140A13155: jz      short loc_140A1315A
 * 0000000140A13157: stac
 * 0000000140A1315A: sub     qword ptr [rbp+0E8h], 2
 * 0000000140A13162: and     dword ptr [rbp+0ECh], 0
 * 0000000140A13169: sti
 * 0000000140A1316A: mov     ecx, 0C000001Dh
 * 0000000140A1316F: xor     edx, edx
 * 0000000140A13171: mov     r8, [rbp+0E8h]
 * 0000000140A13178: call    KiExceptionDispatch
 * 0000000140A1317D: nop
 * 0000000140A1317E: retn
 */
