/*
 * XREFs of KiControlProtectionFault @ 0x140407000
 * Callers:
 *     KiControlProtectionFaultShadow @ 0x140A11BC0 (KiControlProtectionFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403F75A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FB600 (KiInitiateUserApc.c)
 *     KiControlProtectionFault @ 0x140407000 (KiControlProtectionFault.c)
 *     KiBugCheckDispatch @ 0x140409000 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140409080 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1404093C0 (KiFastFailDispatch.c)
 *     KiUmsExit @ 0x140409E40 (KiUmsExit.c)
 *     KiProcessControlProtection @ 0x14050D2F0 (KiProcessControlProtection.c)
 *     KiCopyCounters @ 0x1405169B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiControlProtectionFault @ 0x140407000
 * Reason: Hex-Rays returned no pseudocode for 0x140407000
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140407000: push    rbp
 * 0000000140407001: sub     rsp, 158h
 * 0000000140407008: lea     rbp, [rsp+80h]
 * 0000000140407010: mov     [rbp+0D8h+var_12D], 1
 * 0000000140407014: mov     [rbp+0D8h+var_128], rax
 * 0000000140407018: mov     [rbp+0D8h+var_120], rcx
 * 000000014040701C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140407020: mov     [rbp+0D8h+var_110], r8
 * 0000000140407024: mov     [rbp+0D8h+var_108], r9
 * 0000000140407028: mov     [rbp+0D8h+var_100], r10
 * 000000014040702C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140407030: test    [rbp+0D8h+arg_8], 1
 * 0000000140407037: jnz     short loc_140407066
 * 0000000140407039: lfence
 * 000000014040703C: test    byte ptr gs:278h, 1
 * 0000000140407045: jnz     short loc_14040704F
 * 0000000140407047: lfence
 * 000000014040704A: jmp     loc_140407262
 * 000000014040704F: movzx   eax, byte ptr gs:27Ah
 * 0000000140407058: mov     ecx, 48h ; 'H'
 * 000000014040705D: xor     edx, edx
 * 000000014040705F: wrmsr
 * 0000000140407061: jmp     loc_140407262
 * 0000000140407066: test    cs:KiKvaShadow, 1
 * 000000014040706D: jnz     short loc_140407072
 * 000000014040706F: swapgs
 * 0000000140407072: lfence
 * 0000000140407075: mov     r10, gs:188h
 * 000000014040707E: mov     rcx, gs:188h
 * 0000000140407087: mov     rcx, [rcx+220h]
 * 000000014040708E: mov     rcx, [rcx+9E0h]
 * 0000000140407095: mov     gs:270h, rcx
 * 000000014040709E: mov     cl, gs:850h
 * 00000001404070A6: mov     gs:851h, cl
 * 00000001404070AE: mov     cl, gs:278h
 * 00000001404070B6: mov     gs:852h, cl
 * 00000001404070BE: movzx   eax, byte ptr gs:27Bh
 * 00000001404070C7: cmp     gs:27Ah, al
 * 00000001404070CF: jz      short loc_1404070E2
 * 00000001404070D1: mov     gs:27Ah, al
 * 00000001404070D9: mov     ecx, 48h ; 'H'
 * 00000001404070DE: xor     edx, edx
 * 00000001404070E0: wrmsr
 * 00000001404070E2: movzx   edx, byte ptr gs:278h
 * 00000001404070EB: test    edx, 8
 * 00000001404070F1: jz      short loc_140407106
 * 00000001404070F3: mov     eax, 1
 * 00000001404070F8: xor     edx, edx
 * 00000001404070FA: mov     ecx, 49h ; 'I'
 * 00000001404070FF: wrmsr
 * 0000000140407101: jmp     loc_140407244
 * 0000000140407106: test    edx, 2
 * 000000014040710C: jz      loc_140407241
 * 0000000140407112: test    byte ptr gs:279h, 4
 * 000000014040711B: jnz     loc_140407241
 * 0000000140407121: call    loc_140407234
 * 0000000140407126: add     rsp, 8
 * 000000014040712A: call    loc_14040723D
 * 000000014040712F: add     rsp, 8
 * 0000000140407133: call    loc_140407126
 * 0000000140407138: add     rsp, 8
 * 000000014040713C: call    loc_14040712F
 * 0000000140407141: add     rsp, 8
 * 0000000140407145: call    loc_140407138
 * 000000014040714A: add     rsp, 8
 * 000000014040714E: call    loc_140407141
 * 0000000140407153: add     rsp, 8
 * 0000000140407157: call    loc_14040714A
 * 000000014040715C: add     rsp, 8
 * 0000000140407160: call    loc_140407153
 * 0000000140407165: add     rsp, 8
 * 0000000140407169: call    loc_14040715C
 * 000000014040716E: add     rsp, 8
 * 0000000140407172: call    loc_140407165
 * 0000000140407177: add     rsp, 8
 * 000000014040717B: call    loc_14040716E
 * 0000000140407180: add     rsp, 8
 * 0000000140407184: call    loc_140407177
 * 0000000140407189: add     rsp, 8
 * 000000014040718D: call    loc_140407180
 * 0000000140407192: add     rsp, 8
 * 0000000140407196: call    loc_140407189
 * 000000014040719B: add     rsp, 8
 * 000000014040719F: call    loc_140407192
 * 00000001404071A4: add     rsp, 8
 * 00000001404071A8: call    loc_14040719B
 * 00000001404071AD: add     rsp, 8
 * 00000001404071B1: call    loc_1404071A4
 * 00000001404071B6: add     rsp, 8
 * 00000001404071BA: call    loc_1404071AD
 * 00000001404071BF: add     rsp, 8
 * 00000001404071C3: call    loc_1404071B6
 * 00000001404071C8: add     rsp, 8
 * 00000001404071CC: call    loc_1404071BF
 * 00000001404071D1: add     rsp, 8
 * 00000001404071D5: call    loc_1404071C8
 * 00000001404071DA: add     rsp, 8
 * 00000001404071DE: call    loc_1404071D1
 * 00000001404071E3: add     rsp, 8
 * 00000001404071E7: call    loc_1404071DA
 * 00000001404071EC: add     rsp, 8
 * 00000001404071F0: call    loc_1404071E3
 * 00000001404071F5: add     rsp, 8
 * 00000001404071F9: call    loc_1404071EC
 * 00000001404071FE: add     rsp, 8
 * 0000000140407202: call    loc_1404071F5
 * 0000000140407207: add     rsp, 8
 * 000000014040720B: call    loc_1404071FE
 * 0000000140407210: add     rsp, 8
 * 0000000140407214: call    loc_140407207
 * 0000000140407219: add     rsp, 8
 * 000000014040721D: call    loc_140407210
 * 0000000140407222: add     rsp, 8
 * 0000000140407226: call    loc_140407219
 * 000000014040722B: add     rsp, 8
 * 000000014040722F: call    loc_140407222
 * 0000000140407234: add     rsp, 8
 * 0000000140407238: call    loc_14040722B
 * 000000014040723D: add     rsp, 8
 * 0000000140407241: lfence
 * 0000000140407244: mov     byte ptr gs:853h, 0
 * 000000014040724D: test    byte ptr [r10+3], 3
 * 0000000140407252: mov     [rbp+0D8h+var_58], 0
 * 000000014040725B: jz      short loc_140407262
 * 000000014040725D: call    KiSaveDebugRegisterState
 * 0000000140407262: cld
 * 0000000140407263: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140407267: ldmxcsr dword ptr gs:180h
 * 0000000140407270: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140407274: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140407278: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040727C: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140407280: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140407284: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140407288: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040728F: jz      short loc_14040729D
 * 0000000140407291: test    [rbp+0D8h+arg_8], 1
 * 0000000140407298: jz      short loc_14040729D
 * 000000014040729A: stac
 * 000000014040729D: mov     eax, [rbp+0E0h]
 * 00000001404072A3: test    [rbp+0D8h+arg_10], 200h
 * 00000001404072AD: jz      short loc_1404072B0
 * 00000001404072AF: sti
 * 00000001404072B0: test    byte ptr gs:8725h, 40h
 * 00000001404072B9: jz      short loc_140407303
 * 00000001404072BB: mov     r9, gs:188h
 * 00000001404072C4: test    byte ptr [r9+3], 80h
 * 00000001404072C9: jnz     short loc_1404072E5
 * 00000001404072CB: lea     rcx, [rbp+0D8h+var_158]
 * 00000001404072CF: call    KiProcessControlProtection
 * 00000001404072D4: cmp     eax, 1
 * 00000001404072D7: jz      short loc_140407326
 * 00000001404072D9: cmp     eax, 2
 * 00000001404072DC: jz      short loc_1404072E5
 * 00000001404072DE: cmp     eax, 3
 * 00000001404072E1: jz      short loc_140407312
 * 00000001404072E3: jmp     short loc_140407303
 * 00000001404072E5: mov     r9, 39h ; '9'
 * 00000001404072EC: mov     ecx, 0C0000409h
 * 00000001404072F1: mov     edx, 1
 * 00000001404072F6: mov     r8, [rbp+0D8h+arg_0]
 * 00000001404072FD: call    KiFastFailDispatch
 * 0000000140407302: nop
 * 0000000140407303: mov     edx, 15h
 * 0000000140407308: mov     ecx, 7Fh
 * 000000014040730D: call    KiBugCheckDispatch
 * 0000000140407312: mov     ecx, 80000033h
 * 0000000140407317: xor     edx, edx
 * 0000000140407319: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140407320: call    KiExceptionDispatch
 * 0000000140407325: nop
 * 0000000140407326: cli
 * 0000000140407327: test    [rbp+0D8h+arg_8], 1
 * 000000014040732E: jz      loc_14040747E
 * 0000000140407334: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040733B: jz      short loc_140407340
 * 000000014040733D: stac
 * 0000000140407340: mov     rcx, gs:188h
 * 0000000140407349: test    byte ptr [rcx+0C2h], 3
 * 0000000140407350: jz      short loc_14040736D
 * 0000000140407352: mov     ecx, 1
 * 0000000140407357: mov     cr8, rcx
 * 000000014040735B: sti
 * 000000014040735C: call    KiInitiateUserApc
 * 0000000140407361: cli
 * 0000000140407362: mov     ecx, 0
 * 0000000140407367: mov     cr8, rcx
 * 000000014040736B: jmp     short loc_140407340
 * 000000014040736D: test    byte ptr gs:27Eh, 2
 * 0000000140407376: jz      short loc_14040737F
 * 0000000140407378: xor     ecx, ecx
 * 000000014040737A: call    KiUpdateStibpPairing
 * 000000014040737F: mov     rcx, gs:188h
 * 0000000140407388: test    dword ptr [rcx], 8000000h
 * 000000014040738E: jz      short loc_140407395
 * 0000000140407390: call    KiRestoreSetContextState
 * 0000000140407395: mov     rcx, gs:188h
 * 000000014040739E: test    dword ptr [rcx], 40010000h
 * 00000001404073A4: jz      short loc_1404073CB
 * 00000001404073A6: test    byte ptr [rcx+2], 1
 * 00000001404073AA: jz      short loc_1404073BA
 * 00000001404073AC: call    KiCopyCounters
 * 00000001404073B1: mov     rcx, gs:188h
 * 00000001404073BA: test    byte ptr [rcx+3], 40h
 * 00000001404073BE: jz      short loc_1404073CB
 * 00000001404073C0: lea     rsp, [rbp-80h]
 * 00000001404073C4: mov     cl, 1
 * 00000001404073C6: call    KiUmsExit
 * 00000001404073CB: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001404073CF: cmp     [rbp+0D8h+var_58], 0
 * 00000001404073D7: jz      short loc_1404073DE
 * 00000001404073D9: call    KiRestoreDebugRegisterState
 * 00000001404073DE: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001404073E2: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001404073E6: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001404073EA: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001404073EE: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001404073F2: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001404073F6: mov     r11, [rbp+0D8h+var_F8]
 * 00000001404073FA: mov     r10, [rbp+0D8h+var_100]
 * 00000001404073FE: mov     r9, [rbp+0D8h+var_108]
 * 0000000140407402: mov     r8, [rbp+0D8h+var_110]
 * 0000000140407406: mov     byte ptr gs:853h, 0
 * 000000014040740F: movzx   eax, byte ptr gs:27Dh
 * 0000000140407418: cmp     gs:27Ah, al
 * 0000000140407420: jz      short loc_140407433
 * 0000000140407422: mov     gs:27Ah, al
 * 000000014040742A: mov     ecx, 48h ; 'H'
 * 000000014040742F: xor     edx, edx
 * 0000000140407431: wrmsr
 * 0000000140407433: btr     word ptr gs:278h, 2
 * 000000014040743E: jnb     short loc_14040744E
 * 0000000140407440: mov     eax, 1
 * 0000000140407445: xor     edx, edx
 * 0000000140407447: mov     ecx, 49h ; 'I'
 * 000000014040744C: wrmsr
 * 000000014040744E: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140407452: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140407456: mov     rax, [rbp+0D8h+var_128]
 * 000000014040745A: mov     rsp, rbp
 * 000000014040745D: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140407464: add     rsp, 0E8h
 * 000000014040746B: test    cs:KiKvaShadow, 1
 * 0000000140407472: jz      short loc_140407479
 * 0000000140407474: jmp     KiKernelExit
 * 0000000140407479: swapgs
 * 000000014040747C: iretq
 * 000000014040747E: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140407482: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140407486: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014040748A: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014040748E: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140407492: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140407496: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014040749A: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040749E: mov     r10, [rbp+0D8h+var_100]
 * 00000001404074A2: mov     r9, [rbp+0D8h+var_108]
 * 00000001404074A6: mov     r8, [rbp+0D8h+var_110]
 * 00000001404074AA: mov     rdx, [rbp+0D8h+var_118]
 * 00000001404074AE: mov     rcx, [rbp+0D8h+var_120]
 * 00000001404074B2: mov     rax, [rbp+0D8h+var_128]
 * 00000001404074B6: mov     rsp, rbp
 * 00000001404074B9: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001404074C0: add     rsp, 0E8h
 * 00000001404074C7: iretq
 * 00000001404074C9: retn
 */
