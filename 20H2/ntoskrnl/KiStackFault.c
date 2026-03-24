/*
 * XREFs of KiStackFault @ 0x14040AE00
 * Callers:
 *     KiStackFaultShadow @ 0x140A17740 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x14040AE00 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x14040AE00
 * Reason: Hex-Rays returned no pseudocode for 0x14040AE00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040AE00: push    rbp
 * 000000014040AE01: sub     rsp, 158h
 * 000000014040AE08: lea     rbp, [rsp+80h]
 * 000000014040AE10: mov     [rbp+0D8h+var_12D], 1
 * 000000014040AE14: mov     [rbp+0D8h+var_128], rax
 * 000000014040AE18: mov     [rbp+0D8h+var_120], rcx
 * 000000014040AE1C: mov     [rbp+0D8h+var_118], rdx
 * 000000014040AE20: mov     [rbp+0D8h+var_110], r8
 * 000000014040AE24: mov     [rbp+0D8h+var_108], r9
 * 000000014040AE28: mov     [rbp+0D8h+var_100], r10
 * 000000014040AE2C: mov     [rbp+0D8h+var_F8], r11
 * 000000014040AE30: test    [rbp+0D8h+arg_8], 1
 * 000000014040AE37: jnz     short loc_14040AE66
 * 000000014040AE39: lfence
 * 000000014040AE3C: test    byte ptr gs:278h, 1
 * 000000014040AE45: jnz     short loc_14040AE4F
 * 000000014040AE47: lfence
 * 000000014040AE4A: jmp     loc_14040B0A5
 * 000000014040AE4F: movzx   eax, byte ptr gs:27Ah
 * 000000014040AE58: mov     ecx, 48h ; 'H'
 * 000000014040AE5D: xor     edx, edx
 * 000000014040AE5F: wrmsr
 * 000000014040AE61: jmp     loc_14040B0A5
 * 000000014040AE66: test    cs:KiKvaShadow, 1
 * 000000014040AE6D: jnz     short loc_14040AE72
 * 000000014040AE6F: swapgs
 * 000000014040AE72: lfence
 * 000000014040AE75: mov     r10, gs:188h
 * 000000014040AE7E: mov     rcx, gs:188h
 * 000000014040AE87: mov     rcx, [rcx+220h]
 * 000000014040AE8E: mov     rcx, [rcx+9E0h]
 * 000000014040AE95: mov     gs:270h, rcx
 * 000000014040AE9E: mov     cl, gs:850h
 * 000000014040AEA6: mov     gs:851h, cl
 * 000000014040AEAE: mov     cl, gs:278h
 * 000000014040AEB6: mov     gs:852h, cl
 * 000000014040AEBE: movzx   eax, byte ptr gs:27Bh
 * 000000014040AEC7: cmp     gs:27Ah, al
 * 000000014040AECF: jz      short loc_14040AEE2
 * 000000014040AED1: mov     gs:27Ah, al
 * 000000014040AED9: mov     ecx, 48h ; 'H'
 * 000000014040AEDE: xor     edx, edx
 * 000000014040AEE0: wrmsr
 * 000000014040AEE2: movzx   edx, byte ptr gs:278h
 * 000000014040AEEB: test    edx, 8
 * 000000014040AEF1: jz      short loc_14040AF0A
 * 000000014040AEF3: mov     eax, 1
 * 000000014040AEF8: xor     edx, edx
 * 000000014040AEFA: mov     ecx, 49h ; 'I'
 * 000000014040AEFF: wrmsr
 * 000000014040AF01: movzx   edx, byte ptr gs:278h
 * 000000014040AF0A: test    edx, 2
 * 000000014040AF10: jz      loc_14040B03B
 * 000000014040AF16: call    loc_14040B029
 * 000000014040AF1B: add     rsp, 8
 * 000000014040AF1F: call    loc_14040B032
 * 000000014040AF24: add     rsp, 8
 * 000000014040AF28: call    loc_14040AF1B
 * 000000014040AF2D: add     rsp, 8
 * 000000014040AF31: call    loc_14040AF24
 * 000000014040AF36: add     rsp, 8
 * 000000014040AF3A: call    loc_14040AF2D
 * 000000014040AF3F: add     rsp, 8
 * 000000014040AF43: call    loc_14040AF36
 * 000000014040AF48: add     rsp, 8
 * 000000014040AF4C: call    loc_14040AF3F
 * 000000014040AF51: add     rsp, 8
 * 000000014040AF55: call    loc_14040AF48
 * 000000014040AF5A: add     rsp, 8
 * 000000014040AF5E: call    loc_14040AF51
 * 000000014040AF63: add     rsp, 8
 * 000000014040AF67: call    loc_14040AF5A
 * 000000014040AF6C: add     rsp, 8
 * 000000014040AF70: call    loc_14040AF63
 * 000000014040AF75: add     rsp, 8
 * 000000014040AF79: call    loc_14040AF6C
 * 000000014040AF7E: add     rsp, 8
 * 000000014040AF82: call    loc_14040AF75
 * 000000014040AF87: add     rsp, 8
 * 000000014040AF8B: call    loc_14040AF7E
 * 000000014040AF90: add     rsp, 8
 * 000000014040AF94: call    loc_14040AF87
 * 000000014040AF99: add     rsp, 8
 * 000000014040AF9D: call    loc_14040AF90
 * 000000014040AFA2: add     rsp, 8
 * 000000014040AFA6: call    loc_14040AF99
 * 000000014040AFAB: add     rsp, 8
 * 000000014040AFAF: call    loc_14040AFA2
 * 000000014040AFB4: add     rsp, 8
 * 000000014040AFB8: call    loc_14040AFAB
 * 000000014040AFBD: add     rsp, 8
 * 000000014040AFC1: call    loc_14040AFB4
 * 000000014040AFC6: add     rsp, 8
 * 000000014040AFCA: call    loc_14040AFBD
 * 000000014040AFCF: add     rsp, 8
 * 000000014040AFD3: call    loc_14040AFC6
 * 000000014040AFD8: add     rsp, 8
 * 000000014040AFDC: call    loc_14040AFCF
 * 000000014040AFE1: add     rsp, 8
 * 000000014040AFE5: call    loc_14040AFD8
 * 000000014040AFEA: add     rsp, 8
 * 000000014040AFEE: call    loc_14040AFE1
 * 000000014040AFF3: add     rsp, 8
 * 000000014040AFF7: call    loc_14040AFEA
 * 000000014040AFFC: add     rsp, 8
 * 000000014040B000: call    loc_14040AFF3
 * 000000014040B005: add     rsp, 8
 * 000000014040B009: call    loc_14040AFFC
 * 000000014040B00E: add     rsp, 8
 * 000000014040B012: call    loc_14040B005
 * 000000014040B017: add     rsp, 8
 * 000000014040B01B: call    loc_14040B00E
 * 000000014040B020: add     rsp, 8
 * 000000014040B024: call    loc_14040B017
 * 000000014040B029: add     rsp, 8
 * 000000014040B02D: call    loc_14040B020
 * 000000014040B032: add     rsp, 8
 * 000000014040B036: mov     eax, 0DADAh
 * 000000014040B03B: lfence
 * 000000014040B03E: mov     byte ptr gs:853h, 0
 * 000000014040B047: test    byte ptr [r10+3], 80h
 * 000000014040B04C: jz      short loc_14040B090
 * 000000014040B04E: mov     ecx, 0C0000102h
 * 000000014040B053: rdmsr
 * 000000014040B055: shl     rdx, 20h
 * 000000014040B059: or      rax, rdx
 * 000000014040B05C: cmp     rax, cs:MmUserProbeAddress
 * 000000014040B063: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040B06B: cmp     [r10+0F0h], rax
 * 000000014040B072: jz      short loc_14040B090
 * 000000014040B074: mov     rdx, [r10+1F0h]
 * 000000014040B07B: bts     dword ptr [r10+74h], 8
 * 000000014040B081: dec     word ptr [r10+1E6h]
 * 000000014040B089: mov     [rdx+80h], rax
 * 000000014040B090: test    byte ptr [r10+3], 3
 * 000000014040B095: mov     [rbp+0D8h+var_58], 0
 * 000000014040B09E: jz      short loc_14040B0A5
 * 000000014040B0A0: call    KiSaveDebugRegisterState
 * 000000014040B0A5: cld
 * 000000014040B0A6: stmxcsr [rbp+0D8h+var_12C]
 * 000000014040B0AA: ldmxcsr dword ptr gs:180h
 * 000000014040B0B3: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040B0B7: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014040B0BB: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040B0BF: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014040B0C3: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040B0C7: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014040B0CB: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040B0D2: jz      short loc_14040B0E0
 * 000000014040B0D4: test    [rbp+0D8h+arg_8], 1
 * 000000014040B0DB: jz      short loc_14040B0E0
 * 000000014040B0DD: stac
 * 000000014040B0E0: mov     eax, [rbp+0E0h]
 * 000000014040B0E6: test    [rbp+0D8h+arg_10], 200h
 * 000000014040B0F0: jz      short loc_14040B0F3
 * 000000014040B0F2: sti
 * 000000014040B0F3: mov     ecx, 0C0000005h
 * 000000014040B0F8: mov     edx, 2
 * 000000014040B0FD: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040B104: mov     r9d, [rbp+0E0h]
 * 000000014040B10B: or      r9d, 3
 * 000000014040B10F: and     r9d, 0FFFFh
 * 000000014040B116: test    [rbp+0D8h+arg_8], 1
 * 000000014040B11D: jnz     short loc_14040B123
 * 000000014040B11F: or      r9, 0FFFFFFFFFFFFFFFFh
 * 000000014040B123: xor     r10, r10
 * 000000014040B126: call    KiExceptionDispatch
 * 000000014040B12B: nop
 * 000000014040B12C: retn
 */
