/*
 * XREFs of KiIpiInterrupt @ 0x140405ED0
 * Callers:
 *     KiIpiInterruptShadow @ 0x140A16240 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x140205BE0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x14020F440 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1402F1E00 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405E90 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x140405ED0 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1404065A0 (KiIpiInterruptSubDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x140512E80 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140519C60 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x140405ED0
 * Reason: Hex-Rays returned no pseudocode for 0x140405ED0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140405ED0: sub     rsp, 8
 * 0000000140405ED4: push    rbp
 * 0000000140405ED5: push    rsi
 * 0000000140405ED6: sub     rsp, 150h
 * 0000000140405EDD: lea     rbp, [rsp+80h]
 * 0000000140405EE5: mov     [rbp+0E8h+var_13D], 0
 * 0000000140405EE9: mov     [rbp+0E8h+var_138], rax
 * 0000000140405EED: mov     [rbp+0E8h+var_130], rcx
 * 0000000140405EF1: mov     [rbp+0E8h+var_128], rdx
 * 0000000140405EF5: mov     [rbp+0E8h+var_120], r8
 * 0000000140405EF9: mov     [rbp+0E8h+var_118], r9
 * 0000000140405EFD: mov     [rbp+0E8h+var_110], r10
 * 0000000140405F01: mov     [rbp+0E8h+var_108], r11
 * 0000000140405F05: test    [rbp+0E8h+arg_0], 1
 * 0000000140405F0C: jnz     short loc_140405F3D
 * 0000000140405F0E: lfence
 * 0000000140405F11: test    word ptr gs:860h, 1
 * 0000000140405F1C: jnz     short loc_140405F26
 * 0000000140405F1E: lfence
 * 0000000140405F21: jmp     loc_140406146
 * 0000000140405F26: movzx   eax, word ptr gs:864h
 * 0000000140405F2F: mov     ecx, 48h ; 'H'
 * 0000000140405F34: xor     edx, edx
 * 0000000140405F36: wrmsr
 * 0000000140405F38: jmp     loc_140406146
 * 0000000140405F3D: test    cs:KiKvaShadow, 1
 * 0000000140405F44: jnz     short loc_140405F49
 * 0000000140405F46: swapgs
 * 0000000140405F49: lfence
 * 0000000140405F4C: mov     r10, gs:188h
 * 0000000140405F55: mov     rcx, gs:188h
 * 0000000140405F5E: mov     rcx, [rcx+220h]
 * 0000000140405F65: mov     rcx, [rcx+9E0h]
 * 0000000140405F6C: mov     gs:858h, rcx
 * 0000000140405F75: mov     cx, gs:850h
 * 0000000140405F7E: mov     gs:852h, cx
 * 0000000140405F87: mov     cx, gs:860h
 * 0000000140405F90: mov     gs:854h, cx
 * 0000000140405F99: movzx   eax, word ptr gs:866h
 * 0000000140405FA2: cmp     gs:864h, ax
 * 0000000140405FAB: jz      short loc_140405FBF
 * 0000000140405FAD: mov     gs:864h, ax
 * 0000000140405FB6: mov     ecx, 48h ; 'H'
 * 0000000140405FBB: xor     edx, edx
 * 0000000140405FBD: wrmsr
 * 0000000140405FBF: movzx   edx, word ptr gs:860h
 * 0000000140405FC8: test    edx, 8
 * 0000000140405FCE: jz      short loc_140405FE7
 * 0000000140405FD0: mov     eax, 1
 * 0000000140405FD5: xor     edx, edx
 * 0000000140405FD7: mov     ecx, 49h ; 'I'
 * 0000000140405FDC: wrmsr
 * 0000000140405FDE: movzx   edx, word ptr gs:860h
 * 0000000140405FE7: test    edx, 2
 * 0000000140405FED: jz      loc_140406118
 * 0000000140405FF3: call    loc_140406106
 * 0000000140405FF8: add     rsp, 8
 * 0000000140405FFC: call    loc_14040610F
 * 0000000140406001: add     rsp, 8
 * 0000000140406005: call    loc_140405FF8
 * 000000014040600A: add     rsp, 8
 * 000000014040600E: call    loc_140406001
 * 0000000140406013: add     rsp, 8
 * 0000000140406017: call    loc_14040600A
 * 000000014040601C: add     rsp, 8
 * 0000000140406020: call    loc_140406013
 * 0000000140406025: add     rsp, 8
 * 0000000140406029: call    loc_14040601C
 * 000000014040602E: add     rsp, 8
 * 0000000140406032: call    loc_140406025
 * 0000000140406037: add     rsp, 8
 * 000000014040603B: call    loc_14040602E
 * 0000000140406040: add     rsp, 8
 * 0000000140406044: call    loc_140406037
 * 0000000140406049: add     rsp, 8
 * 000000014040604D: call    loc_140406040
 * 0000000140406052: add     rsp, 8
 * 0000000140406056: call    loc_140406049
 * 000000014040605B: add     rsp, 8
 * 000000014040605F: call    loc_140406052
 * 0000000140406064: add     rsp, 8
 * 0000000140406068: call    loc_14040605B
 * 000000014040606D: add     rsp, 8
 * 0000000140406071: call    loc_140406064
 * 0000000140406076: add     rsp, 8
 * 000000014040607A: call    loc_14040606D
 * 000000014040607F: add     rsp, 8
 * 0000000140406083: call    loc_140406076
 * 0000000140406088: add     rsp, 8
 * 000000014040608C: call    loc_14040607F
 * 0000000140406091: add     rsp, 8
 * 0000000140406095: call    loc_140406088
 * 000000014040609A: add     rsp, 8
 * 000000014040609E: call    loc_140406091
 * 00000001404060A3: add     rsp, 8
 * 00000001404060A7: call    loc_14040609A
 * 00000001404060AC: add     rsp, 8
 * 00000001404060B0: call    loc_1404060A3
 * 00000001404060B5: add     rsp, 8
 * 00000001404060B9: call    loc_1404060AC
 * 00000001404060BE: add     rsp, 8
 * 00000001404060C2: call    loc_1404060B5
 * 00000001404060C7: add     rsp, 8
 * 00000001404060CB: call    loc_1404060BE
 * 00000001404060D0: add     rsp, 8
 * 00000001404060D4: call    loc_1404060C7
 * 00000001404060D9: add     rsp, 8
 * 00000001404060DD: call    loc_1404060D0
 * 00000001404060E2: add     rsp, 8
 * 00000001404060E6: call    loc_1404060D9
 * 00000001404060EB: add     rsp, 8
 * 00000001404060EF: call    loc_1404060E2
 * 00000001404060F4: add     rsp, 8
 * 00000001404060F8: call    loc_1404060EB
 * 00000001404060FD: add     rsp, 8
 * 0000000140406101: call    loc_1404060F4
 * 0000000140406106: add     rsp, 8
 * 000000014040610A: call    loc_1404060FD
 * 000000014040610F: add     rsp, 8
 * 0000000140406113: mov     eax, 0DADAh
 * 0000000140406118: test    edx, 200h
 * 000000014040611E: jz      short loc_140406125
 * 0000000140406120: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140406125: lfence
 * 0000000140406128: mov     byte ptr gs:856h, 0
 * 0000000140406131: test    byte ptr [r10+3], 3
 * 0000000140406136: mov     [rbp+0E8h+var_68], 0
 * 000000014040613F: jz      short loc_140406146
 * 0000000140406141: call    KiSaveDebugRegisterState
 * 0000000140406146: cld
 * 0000000140406147: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040614B: ldmxcsr dword ptr gs:180h
 * 0000000140406154: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140406158: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040615C: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140406160: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140406164: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140406168: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040616C: cmp     byte ptr gs:801Ah, 0
 * 0000000140406175: jz      short loc_14040617C
 * 0000000140406177: call    KeWakeProcessor
 * 000000014040617C: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140406183: cmp     rax, [rbp+0E8h]
 * 000000014040618A: jnb     short loc_1404061A5
 * 000000014040618C: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140406193: cmp     rax, [rbp+0E8h]
 * 000000014040619A: jb      short loc_1404061A5
 * 000000014040619C: lea     rcx, [rbp+0E8h+var_168]
 * 00000001404061A0: call    KiCheckForSListAddress
 * 00000001404061A5: xor     esi, esi
 * 00000001404061A7: inc     dword ptr gs:8000h
 * 00000001404061AF: mov     rdx, rsp
 * 00000001404061B2: mov     rcx, gs:8758h
 * 00000001404061BB: lea     rax, [rcx-6000h]
 * 00000001404061C2: cmp     rax, rsp
 * 00000001404061C5: ja      short loc_1404061CC
 * 00000001404061C7: cmp     rsp, rcx
 * 00000001404061CA: jb      short loc_1404061D8
 * 00000001404061CC: cmp     cs:KiBugCheckActive, 0
 * 00000001404061D3: jnz     short loc_1404061D8
 * 00000001404061D5: mov     rsp, rcx
 * 00000001404061D8: sub     rsp, 20h
 * 00000001404061DC: mov     qword ptr [rsp+108h+var_F8], rdx
 * 00000001404061E1: call    KiIpiInterruptSubDispatch
 * 00000001404061E6: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 00000001404061EB: mov     rcx, rsi
 * 00000001404061EE: call    HalPerformEndOfInterrupt
 * 00000001404061F3: mov     rcx, gs:20h
 * 00000001404061FC: cmp     byte ptr [rcx+20h], 1
 * 0000000140406200: ja      short loc_14040627C
 * 0000000140406202: rdtsc
 * 0000000140406204: shl     rdx, 20h
 * 0000000140406208: or      rax, rdx
 * 000000014040620B: sub     rax, [rcx+7EC0h]
 * 0000000140406212: add     [rcx+7F38h], rax
 * 0000000140406219: add     [rcx+7EC0h], rax
 * 0000000140406220: mov     r8, rax
 * 0000000140406223: mov     rax, [rcx+8]
 * 0000000140406227: test    byte ptr [rax+2], 72h
 * 000000014040622B: jz      short loc_140406240
 * 000000014040622D: xor     edx, edx
 * 000000014040622F: call    KiBeginThreadAccountingPeriod
 * 0000000140406234: mov     rcx, gs:20h
 * 000000014040623D: inc     byte ptr [rcx+20h]
 * 0000000140406240: mov     dl, [rcx+6]
 * 0000000140406243: and     byte ptr [rcx+6], 0
 * 0000000140406247: cmp     byte ptr [rcx+7], 0
 * 000000014040624B: jnz     short loc_14040627C
 * 000000014040624D: test    dl, dl
 * 000000014040624F: jz      short loc_14040627C
 * 0000000140406251: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140406255: jnb     short loc_140406262
 * 0000000140406257: and     byte ptr [rcx+20h], 0
 * 000000014040625B: call    KiDpcInterruptBypass
 * 0000000140406260: jmp     short loc_14040627F
 * 0000000140406262: mov     ecx, 2
 * 0000000140406267: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014040626E: nop     dword ptr [rax+rax+00h]
 * 0000000140406273: mov     rcx, gs:20h
 * 000000014040627C: dec     byte ptr [rcx+20h]
 * 000000014040627F: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140406283: cmp     cs:KiIrqlFlags, 0
 * 000000014040628A: jz      short loc_140406293
 * 000000014040628C: call    KzSetIrqlUnsafe
 * 0000000140406291: jmp     short loc_140406297
 * 0000000140406293: mov     cr8, rcx
 * 0000000140406297: mov     rsi, [rbp+0E8h+var_18]
 * 000000014040629E: test    [rbp+0E8h+arg_0], 1
 * 00000001404062A5: jz      loc_140406547
 * 00000001404062AB: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404062B2: jz      short loc_1404062B7
 * 00000001404062B4: stac
 * 00000001404062B7: mov     rcx, gs:188h
 * 00000001404062C0: test    byte ptr [rcx+0C2h], 3
 * 00000001404062C7: jz      short loc_1404062E4
 * 00000001404062C9: mov     ecx, 1
 * 00000001404062CE: mov     cr8, rcx
 * 00000001404062D2: sti
 * 00000001404062D3: call    KiInitiateUserApc
 * 00000001404062D8: cli
 * 00000001404062D9: mov     ecx, 0
 * 00000001404062DE: mov     cr8, rcx
 * 00000001404062E2: jmp     short loc_1404062B7
 * 00000001404062E4: test    byte ptr gs:86Ch, 2
 * 00000001404062ED: jz      short loc_1404062F6
 * 00000001404062EF: xor     ecx, ecx
 * 00000001404062F1: call    KiUpdateStibpPairing
 * 00000001404062F6: mov     rcx, gs:188h
 * 00000001404062FF: test    dword ptr [rcx], 8000000h
 * 0000000140406305: jz      short loc_14040630C
 * 0000000140406307: call    KiRestoreSetContextState
 * 000000014040630C: mov     rcx, gs:188h
 * 0000000140406315: test    dword ptr [rcx], 40010000h
 * 000000014040631B: jz      short loc_140406331
 * 000000014040631D: test    byte ptr [rcx+2], 1
 * 0000000140406321: jz      short loc_140406331
 * 0000000140406323: call    KiCopyCounters
 * 0000000140406328: mov     rcx, gs:188h
 * 0000000140406331: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140406335: cmp     [rbp+0E8h+var_68], 0
 * 000000014040633D: jz      short loc_140406344
 * 000000014040633F: call    KiRestoreDebugRegisterState
 * 0000000140406344: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140406348: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040634C: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140406350: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140406354: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140406358: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040635C: mov     r11, [rbp+0E8h+var_108]
 * 0000000140406360: mov     r10, [rbp+0E8h+var_110]
 * 0000000140406364: mov     r9, [rbp+0E8h+var_118]
 * 0000000140406368: mov     r8, [rbp+0E8h+var_120]
 * 000000014040636C: mov     byte ptr gs:856h, 0
 * 0000000140406375: movzx   eax, word ptr gs:86Ah
 * 000000014040637E: cmp     gs:864h, ax
 * 0000000140406387: jz      short loc_14040639B
 * 0000000140406389: mov     gs:864h, ax
 * 0000000140406392: mov     ecx, 48h ; 'H'
 * 0000000140406397: xor     edx, edx
 * 0000000140406399: wrmsr
 * 000000014040639B: btr     word ptr gs:860h, 2
 * 00000001404063A6: jnb     short loc_1404063B6
 * 00000001404063A8: mov     eax, 1
 * 00000001404063AD: xor     edx, edx
 * 00000001404063AF: mov     ecx, 49h ; 'I'
 * 00000001404063B4: wrmsr
 * 00000001404063B6: btr     word ptr gs:860h, 5
 * 00000001404063C1: jnb     loc_1404064EC
 * 00000001404063C7: call    loc_1404064DA
 * 00000001404063CC: add     rsp, 8
 * 00000001404063D0: call    loc_1404064E3
 * 00000001404063D5: add     rsp, 8
 * 00000001404063D9: call    loc_1404063CC
 * 00000001404063DE: add     rsp, 8
 * 00000001404063E2: call    loc_1404063D5
 * 00000001404063E7: add     rsp, 8
 * 00000001404063EB: call    loc_1404063DE
 * 00000001404063F0: add     rsp, 8
 * 00000001404063F4: call    loc_1404063E7
 * 00000001404063F9: add     rsp, 8
 * 00000001404063FD: call    loc_1404063F0
 * 0000000140406402: add     rsp, 8
 * 0000000140406406: call    loc_1404063F9
 * 000000014040640B: add     rsp, 8
 * 000000014040640F: call    loc_140406402
 * 0000000140406414: add     rsp, 8
 * 0000000140406418: call    loc_14040640B
 * 000000014040641D: add     rsp, 8
 * 0000000140406421: call    loc_140406414
 * 0000000140406426: add     rsp, 8
 * 000000014040642A: call    loc_14040641D
 * 000000014040642F: add     rsp, 8
 * 0000000140406433: call    loc_140406426
 * 0000000140406438: add     rsp, 8
 * 000000014040643C: call    loc_14040642F
 * 0000000140406441: add     rsp, 8
 * 0000000140406445: call    loc_140406438
 * 000000014040644A: add     rsp, 8
 * 000000014040644E: call    loc_140406441
 * 0000000140406453: add     rsp, 8
 * 0000000140406457: call    loc_14040644A
 * 000000014040645C: add     rsp, 8
 * 0000000140406460: call    loc_140406453
 * 0000000140406465: add     rsp, 8
 * 0000000140406469: call    loc_14040645C
 * 000000014040646E: add     rsp, 8
 * 0000000140406472: call    loc_140406465
 * 0000000140406477: add     rsp, 8
 * 000000014040647B: call    loc_14040646E
 * 0000000140406480: add     rsp, 8
 * 0000000140406484: call    loc_140406477
 * 0000000140406489: add     rsp, 8
 * 000000014040648D: call    loc_140406480
 * 0000000140406492: add     rsp, 8
 * 0000000140406496: call    loc_140406489
 * 000000014040649B: add     rsp, 8
 * 000000014040649F: call    loc_140406492
 * 00000001404064A4: add     rsp, 8
 * 00000001404064A8: call    loc_14040649B
 * 00000001404064AD: add     rsp, 8
 * 00000001404064B1: call    loc_1404064A4
 * 00000001404064B6: add     rsp, 8
 * 00000001404064BA: call    loc_1404064AD
 * 00000001404064BF: add     rsp, 8
 * 00000001404064C3: call    loc_1404064B6
 * 00000001404064C8: add     rsp, 8
 * 00000001404064CC: call    loc_1404064BF
 * 00000001404064D1: add     rsp, 8
 * 00000001404064D5: call    loc_1404064C8
 * 00000001404064DA: add     rsp, 8
 * 00000001404064DE: call    loc_1404064D1
 * 00000001404064E3: add     rsp, 8
 * 00000001404064E7: mov     eax, 0DADAh
 * 00000001404064EC: test    word ptr gs:860h, 80h
 * 00000001404064F7: jz      short loc_140406505
 * 00000001404064F9: xor     eax, eax
 * 00000001404064FB: xor     edx, edx
 * 00000001404064FD: mov     ecx, 1
 * 0000000140406502: div     rcx
 * 0000000140406505: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140406509: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040650D: mov     rax, [rbp+0E8h+var_138]
 * 0000000140406511: mov     rsp, rbp
 * 0000000140406514: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040651B: add     rsp, 0E8h
 * 0000000140406522: test    cs:KiKvaShadow, 1
 * 0000000140406529: jz      short loc_140406530
 * 000000014040652B: jmp     KiKernelExit
 * 0000000140406530: test    word ptr gs:860h, 100h
 * 000000014040653B: jz      short loc_140406542
 * 000000014040653D: verw    [rsp+arg_18]
 * 0000000140406542: swapgs
 * 0000000140406545: iretq
 * 0000000140406547: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040654B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040654F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140406553: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140406557: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040655B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040655F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140406563: mov     r11, [rbp+0E8h+var_108]
 * 0000000140406567: mov     r10, [rbp+0E8h+var_110]
 * 000000014040656B: mov     r9, [rbp+0E8h+var_118]
 * 000000014040656F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140406573: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140406577: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040657B: mov     rax, [rbp+0E8h+var_138]
 * 000000014040657F: mov     rsp, rbp
 * 0000000140406582: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140406589: add     rsp, 0E8h
 * 0000000140406590: iretq
 */
