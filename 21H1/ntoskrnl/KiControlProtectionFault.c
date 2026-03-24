/*
 * XREFs of KiControlProtectionFault @ 0x140405D00
 * Callers:
 *     KiControlProtectionFaultShadow @ 0x140A11BC0 (KiControlProtectionFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DDF20 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403F6310 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FA370 (KiInitiateUserApc.c)
 *     KiControlProtectionFault @ 0x140405D00 (KiControlProtectionFault.c)
 *     KiBugCheckDispatch @ 0x140407D00 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140407D80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1404080C0 (KiFastFailDispatch.c)
 *     KiUmsExit @ 0x140408B40 (KiUmsExit.c)
 *     KiProcessControlProtection @ 0x14050CCA0 (KiProcessControlProtection.c)
 *     KiCopyCounters @ 0x140516360 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiControlProtectionFault @ 0x140405D00
 * Reason: Hex-Rays returned no pseudocode for 0x140405D00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140405D00: push    rbp
 * 0000000140405D01: sub     rsp, 158h
 * 0000000140405D08: lea     rbp, [rsp+80h]
 * 0000000140405D10: mov     [rbp+0D8h+var_12D], 1
 * 0000000140405D14: mov     [rbp+0D8h+var_128], rax
 * 0000000140405D18: mov     [rbp+0D8h+var_120], rcx
 * 0000000140405D1C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140405D20: mov     [rbp+0D8h+var_110], r8
 * 0000000140405D24: mov     [rbp+0D8h+var_108], r9
 * 0000000140405D28: mov     [rbp+0D8h+var_100], r10
 * 0000000140405D2C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140405D30: test    [rbp+0D8h+arg_8], 1
 * 0000000140405D37: jnz     short loc_140405D66
 * 0000000140405D39: lfence
 * 0000000140405D3C: test    byte ptr gs:278h, 1
 * 0000000140405D45: jnz     short loc_140405D4F
 * 0000000140405D47: lfence
 * 0000000140405D4A: jmp     loc_140405F62
 * 0000000140405D4F: movzx   eax, byte ptr gs:27Ah
 * 0000000140405D58: mov     ecx, 48h ; 'H'
 * 0000000140405D5D: xor     edx, edx
 * 0000000140405D5F: wrmsr
 * 0000000140405D61: jmp     loc_140405F62
 * 0000000140405D66: test    cs:KiKvaShadow, 1
 * 0000000140405D6D: jnz     short loc_140405D72
 * 0000000140405D6F: swapgs
 * 0000000140405D72: lfence
 * 0000000140405D75: mov     r10, gs:188h
 * 0000000140405D7E: mov     rcx, gs:188h
 * 0000000140405D87: mov     rcx, [rcx+220h]
 * 0000000140405D8E: mov     rcx, [rcx+9E0h]
 * 0000000140405D95: mov     gs:270h, rcx
 * 0000000140405D9E: mov     cl, gs:850h
 * 0000000140405DA6: mov     gs:851h, cl
 * 0000000140405DAE: mov     cl, gs:278h
 * 0000000140405DB6: mov     gs:852h, cl
 * 0000000140405DBE: movzx   eax, byte ptr gs:27Bh
 * 0000000140405DC7: cmp     gs:27Ah, al
 * 0000000140405DCF: jz      short loc_140405DE2
 * 0000000140405DD1: mov     gs:27Ah, al
 * 0000000140405DD9: mov     ecx, 48h ; 'H'
 * 0000000140405DDE: xor     edx, edx
 * 0000000140405DE0: wrmsr
 * 0000000140405DE2: movzx   edx, byte ptr gs:278h
 * 0000000140405DEB: test    edx, 8
 * 0000000140405DF1: jz      short loc_140405E06
 * 0000000140405DF3: mov     eax, 1
 * 0000000140405DF8: xor     edx, edx
 * 0000000140405DFA: mov     ecx, 49h ; 'I'
 * 0000000140405DFF: wrmsr
 * 0000000140405E01: jmp     loc_140405F44
 * 0000000140405E06: test    edx, 2
 * 0000000140405E0C: jz      loc_140405F41
 * 0000000140405E12: test    byte ptr gs:279h, 4
 * 0000000140405E1B: jnz     loc_140405F41
 * 0000000140405E21: call    loc_140405F34
 * 0000000140405E26: add     rsp, 8
 * 0000000140405E2A: call    loc_140405F3D
 * 0000000140405E2F: add     rsp, 8
 * 0000000140405E33: call    loc_140405E26
 * 0000000140405E38: add     rsp, 8
 * 0000000140405E3C: call    loc_140405E2F
 * 0000000140405E41: add     rsp, 8
 * 0000000140405E45: call    loc_140405E38
 * 0000000140405E4A: add     rsp, 8
 * 0000000140405E4E: call    loc_140405E41
 * 0000000140405E53: add     rsp, 8
 * 0000000140405E57: call    loc_140405E4A
 * 0000000140405E5C: add     rsp, 8
 * 0000000140405E60: call    loc_140405E53
 * 0000000140405E65: add     rsp, 8
 * 0000000140405E69: call    loc_140405E5C
 * 0000000140405E6E: add     rsp, 8
 * 0000000140405E72: call    loc_140405E65
 * 0000000140405E77: add     rsp, 8
 * 0000000140405E7B: call    loc_140405E6E
 * 0000000140405E80: add     rsp, 8
 * 0000000140405E84: call    loc_140405E77
 * 0000000140405E89: add     rsp, 8
 * 0000000140405E8D: call    loc_140405E80
 * 0000000140405E92: add     rsp, 8
 * 0000000140405E96: call    loc_140405E89
 * 0000000140405E9B: add     rsp, 8
 * 0000000140405E9F: call    loc_140405E92
 * 0000000140405EA4: add     rsp, 8
 * 0000000140405EA8: call    loc_140405E9B
 * 0000000140405EAD: add     rsp, 8
 * 0000000140405EB1: call    loc_140405EA4
 * 0000000140405EB6: add     rsp, 8
 * 0000000140405EBA: call    loc_140405EAD
 * 0000000140405EBF: add     rsp, 8
 * 0000000140405EC3: call    loc_140405EB6
 * 0000000140405EC8: add     rsp, 8
 * 0000000140405ECC: call    loc_140405EBF
 * 0000000140405ED1: add     rsp, 8
 * 0000000140405ED5: call    loc_140405EC8
 * 0000000140405EDA: add     rsp, 8
 * 0000000140405EDE: call    loc_140405ED1
 * 0000000140405EE3: add     rsp, 8
 * 0000000140405EE7: call    loc_140405EDA
 * 0000000140405EEC: add     rsp, 8
 * 0000000140405EF0: call    loc_140405EE3
 * 0000000140405EF5: add     rsp, 8
 * 0000000140405EF9: call    loc_140405EEC
 * 0000000140405EFE: add     rsp, 8
 * 0000000140405F02: call    loc_140405EF5
 * 0000000140405F07: add     rsp, 8
 * 0000000140405F0B: call    loc_140405EFE
 * 0000000140405F10: add     rsp, 8
 * 0000000140405F14: call    loc_140405F07
 * 0000000140405F19: add     rsp, 8
 * 0000000140405F1D: call    loc_140405F10
 * 0000000140405F22: add     rsp, 8
 * 0000000140405F26: call    loc_140405F19
 * 0000000140405F2B: add     rsp, 8
 * 0000000140405F2F: call    loc_140405F22
 * 0000000140405F34: add     rsp, 8
 * 0000000140405F38: call    loc_140405F2B
 * 0000000140405F3D: add     rsp, 8
 * 0000000140405F41: lfence
 * 0000000140405F44: mov     byte ptr gs:853h, 0
 * 0000000140405F4D: test    byte ptr [r10+3], 3
 * 0000000140405F52: mov     [rbp+0D8h+var_58], 0
 * 0000000140405F5B: jz      short loc_140405F62
 * 0000000140405F5D: call    KiSaveDebugRegisterState
 * 0000000140405F62: cld
 * 0000000140405F63: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140405F67: ldmxcsr dword ptr gs:180h
 * 0000000140405F70: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140405F74: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140405F78: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140405F7C: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140405F80: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140405F84: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140405F88: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140405F8F: jz      short loc_140405F9D
 * 0000000140405F91: test    [rbp+0D8h+arg_8], 1
 * 0000000140405F98: jz      short loc_140405F9D
 * 0000000140405F9A: stac
 * 0000000140405F9D: mov     eax, [rbp+0E0h]
 * 0000000140405FA3: test    [rbp+0D8h+arg_10], 200h
 * 0000000140405FAD: jz      short loc_140405FB0
 * 0000000140405FAF: sti
 * 0000000140405FB0: test    byte ptr gs:8725h, 40h
 * 0000000140405FB9: jz      short loc_140406003
 * 0000000140405FBB: mov     r9, gs:188h
 * 0000000140405FC4: test    byte ptr [r9+3], 80h
 * 0000000140405FC9: jnz     short loc_140405FE5
 * 0000000140405FCB: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140405FCF: call    KiProcessControlProtection
 * 0000000140405FD4: cmp     eax, 1
 * 0000000140405FD7: jz      short loc_140406026
 * 0000000140405FD9: cmp     eax, 2
 * 0000000140405FDC: jz      short loc_140405FE5
 * 0000000140405FDE: cmp     eax, 3
 * 0000000140405FE1: jz      short loc_140406012
 * 0000000140405FE3: jmp     short loc_140406003
 * 0000000140405FE5: mov     r9, 39h ; '9'
 * 0000000140405FEC: mov     ecx, 0C0000409h
 * 0000000140405FF1: mov     edx, 1
 * 0000000140405FF6: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140405FFD: call    KiFastFailDispatch
 * 0000000140406002: nop
 * 0000000140406003: mov     edx, 15h
 * 0000000140406008: mov     ecx, 7Fh
 * 000000014040600D: call    KiBugCheckDispatch
 * 0000000140406012: mov     ecx, 80000033h
 * 0000000140406017: xor     edx, edx
 * 0000000140406019: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140406020: call    KiExceptionDispatch
 * 0000000140406025: nop
 * 0000000140406026: cli
 * 0000000140406027: test    [rbp+0D8h+arg_8], 1
 * 000000014040602E: jz      loc_14040617E
 * 0000000140406034: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040603B: jz      short loc_140406040
 * 000000014040603D: stac
 * 0000000140406040: mov     rcx, gs:188h
 * 0000000140406049: test    byte ptr [rcx+0C2h], 3
 * 0000000140406050: jz      short loc_14040606D
 * 0000000140406052: mov     ecx, 1
 * 0000000140406057: mov     cr8, rcx
 * 000000014040605B: sti
 * 000000014040605C: call    KiInitiateUserApc
 * 0000000140406061: cli
 * 0000000140406062: mov     ecx, 0
 * 0000000140406067: mov     cr8, rcx
 * 000000014040606B: jmp     short loc_140406040
 * 000000014040606D: test    byte ptr gs:27Eh, 2
 * 0000000140406076: jz      short loc_14040607F
 * 0000000140406078: xor     ecx, ecx
 * 000000014040607A: call    KiUpdateStibpPairing
 * 000000014040607F: mov     rcx, gs:188h
 * 0000000140406088: test    dword ptr [rcx], 8000000h
 * 000000014040608E: jz      short loc_140406095
 * 0000000140406090: call    KiRestoreSetContextState
 * 0000000140406095: mov     rcx, gs:188h
 * 000000014040609E: test    dword ptr [rcx], 40010000h
 * 00000001404060A4: jz      short loc_1404060CB
 * 00000001404060A6: test    byte ptr [rcx+2], 1
 * 00000001404060AA: jz      short loc_1404060BA
 * 00000001404060AC: call    KiCopyCounters
 * 00000001404060B1: mov     rcx, gs:188h
 * 00000001404060BA: test    byte ptr [rcx+3], 40h
 * 00000001404060BE: jz      short loc_1404060CB
 * 00000001404060C0: lea     rsp, [rbp-80h]
 * 00000001404060C4: mov     cl, 1
 * 00000001404060C6: call    KiUmsExit
 * 00000001404060CB: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001404060CF: cmp     [rbp+0D8h+var_58], 0
 * 00000001404060D7: jz      short loc_1404060DE
 * 00000001404060D9: call    KiRestoreDebugRegisterState
 * 00000001404060DE: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001404060E2: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001404060E6: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001404060EA: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001404060EE: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001404060F2: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001404060F6: mov     r11, [rbp+0D8h+var_F8]
 * 00000001404060FA: mov     r10, [rbp+0D8h+var_100]
 * 00000001404060FE: mov     r9, [rbp+0D8h+var_108]
 * 0000000140406102: mov     r8, [rbp+0D8h+var_110]
 * 0000000140406106: mov     byte ptr gs:853h, 0
 * 000000014040610F: movzx   eax, byte ptr gs:27Dh
 * 0000000140406118: cmp     gs:27Ah, al
 * 0000000140406120: jz      short loc_140406133
 * 0000000140406122: mov     gs:27Ah, al
 * 000000014040612A: mov     ecx, 48h ; 'H'
 * 000000014040612F: xor     edx, edx
 * 0000000140406131: wrmsr
 * 0000000140406133: btr     word ptr gs:278h, 2
 * 000000014040613E: jnb     short loc_14040614E
 * 0000000140406140: mov     eax, 1
 * 0000000140406145: xor     edx, edx
 * 0000000140406147: mov     ecx, 49h ; 'I'
 * 000000014040614C: wrmsr
 * 000000014040614E: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140406152: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140406156: mov     rax, [rbp+0D8h+var_128]
 * 000000014040615A: mov     rsp, rbp
 * 000000014040615D: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140406164: add     rsp, 0E8h
 * 000000014040616B: test    cs:KiKvaShadow, 1
 * 0000000140406172: jz      short loc_140406179
 * 0000000140406174: jmp     KiKernelExit
 * 0000000140406179: swapgs
 * 000000014040617C: iretq
 * 000000014040617E: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140406182: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140406186: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014040618A: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014040618E: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140406192: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140406196: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014040619A: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040619E: mov     r10, [rbp+0D8h+var_100]
 * 00000001404061A2: mov     r9, [rbp+0D8h+var_108]
 * 00000001404061A6: mov     r8, [rbp+0D8h+var_110]
 * 00000001404061AA: mov     rdx, [rbp+0D8h+var_118]
 * 00000001404061AE: mov     rcx, [rbp+0D8h+var_120]
 * 00000001404061B2: mov     rax, [rbp+0D8h+var_128]
 * 00000001404061B6: mov     rsp, rbp
 * 00000001404061B9: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001404061C0: add     rsp, 0E8h
 * 00000001404061C7: iretq
 * 00000001404061C9: retn
 */
