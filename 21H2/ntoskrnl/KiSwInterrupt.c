/*
 * XREFs of KiSwInterrupt @ 0x140405140
 * Callers:
 *     KiSwInterruptShadow @ 0x140A15CC0 (KiSwInterruptShadow.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x140205BE0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x14020F440 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiEndThreadAccountingPeriod @ 0x1402D5BD0 (KiEndThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1402F1E00 (KiCheckForSListAddress.c)
 *     KiSwInterruptDispatch @ 0x1403DCD90 (KiSwInterruptDispatch.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x140405140 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x140405E90 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x140512E80 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140519C60 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x140405140
 * Reason: Hex-Rays returned no pseudocode for 0x140405140
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140405140: sub     rsp, 8
 * 0000000140405144: push    rbp
 * 0000000140405145: push    rsi
 * 0000000140405146: sub     rsp, 150h
 * 000000014040514D: lea     rbp, [rsp+80h]
 * 0000000140405155: mov     [rbp+0E8h+var_13D], 0
 * 0000000140405159: mov     [rbp+0E8h+var_138], rax
 * 000000014040515D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140405161: mov     [rbp+0E8h+var_128], rdx
 * 0000000140405165: mov     [rbp+0E8h+var_120], r8
 * 0000000140405169: mov     [rbp+0E8h+var_118], r9
 * 000000014040516D: mov     [rbp+0E8h+var_110], r10
 * 0000000140405171: mov     [rbp+0E8h+var_108], r11
 * 0000000140405175: test    [rbp+0E8h+arg_0], 1
 * 000000014040517C: jnz     short loc_1404051AD
 * 000000014040517E: lfence
 * 0000000140405181: test    word ptr gs:860h, 1
 * 000000014040518C: jnz     short loc_140405196
 * 000000014040518E: lfence
 * 0000000140405191: jmp     loc_1404053B6
 * 0000000140405196: movzx   eax, word ptr gs:864h
 * 000000014040519F: mov     ecx, 48h ; 'H'
 * 00000001404051A4: xor     edx, edx
 * 00000001404051A6: wrmsr
 * 00000001404051A8: jmp     loc_1404053B6
 * 00000001404051AD: test    cs:KiKvaShadow, 1
 * 00000001404051B4: jnz     short loc_1404051B9
 * 00000001404051B6: swapgs
 * 00000001404051B9: lfence
 * 00000001404051BC: mov     r10, gs:188h
 * 00000001404051C5: mov     rcx, gs:188h
 * 00000001404051CE: mov     rcx, [rcx+220h]
 * 00000001404051D5: mov     rcx, [rcx+9E0h]
 * 00000001404051DC: mov     gs:858h, rcx
 * 00000001404051E5: mov     cx, gs:850h
 * 00000001404051EE: mov     gs:852h, cx
 * 00000001404051F7: mov     cx, gs:860h
 * 0000000140405200: mov     gs:854h, cx
 * 0000000140405209: movzx   eax, word ptr gs:866h
 * 0000000140405212: cmp     gs:864h, ax
 * 000000014040521B: jz      short loc_14040522F
 * 000000014040521D: mov     gs:864h, ax
 * 0000000140405226: mov     ecx, 48h ; 'H'
 * 000000014040522B: xor     edx, edx
 * 000000014040522D: wrmsr
 * 000000014040522F: movzx   edx, word ptr gs:860h
 * 0000000140405238: test    edx, 8
 * 000000014040523E: jz      short loc_140405257
 * 0000000140405240: mov     eax, 1
 * 0000000140405245: xor     edx, edx
 * 0000000140405247: mov     ecx, 49h ; 'I'
 * 000000014040524C: wrmsr
 * 000000014040524E: movzx   edx, word ptr gs:860h
 * 0000000140405257: test    edx, 2
 * 000000014040525D: jz      loc_140405388
 * 0000000140405263: call    loc_140405376
 * 0000000140405268: add     rsp, 8
 * 000000014040526C: call    loc_14040537F
 * 0000000140405271: add     rsp, 8
 * 0000000140405275: call    loc_140405268
 * 000000014040527A: add     rsp, 8
 * 000000014040527E: call    loc_140405271
 * 0000000140405283: add     rsp, 8
 * 0000000140405287: call    loc_14040527A
 * 000000014040528C: add     rsp, 8
 * 0000000140405290: call    loc_140405283
 * 0000000140405295: add     rsp, 8
 * 0000000140405299: call    loc_14040528C
 * 000000014040529E: add     rsp, 8
 * 00000001404052A2: call    loc_140405295
 * 00000001404052A7: add     rsp, 8
 * 00000001404052AB: call    loc_14040529E
 * 00000001404052B0: add     rsp, 8
 * 00000001404052B4: call    loc_1404052A7
 * 00000001404052B9: add     rsp, 8
 * 00000001404052BD: call    loc_1404052B0
 * 00000001404052C2: add     rsp, 8
 * 00000001404052C6: call    loc_1404052B9
 * 00000001404052CB: add     rsp, 8
 * 00000001404052CF: call    loc_1404052C2
 * 00000001404052D4: add     rsp, 8
 * 00000001404052D8: call    loc_1404052CB
 * 00000001404052DD: add     rsp, 8
 * 00000001404052E1: call    loc_1404052D4
 * 00000001404052E6: add     rsp, 8
 * 00000001404052EA: call    loc_1404052DD
 * 00000001404052EF: add     rsp, 8
 * 00000001404052F3: call    loc_1404052E6
 * 00000001404052F8: add     rsp, 8
 * 00000001404052FC: call    loc_1404052EF
 * 0000000140405301: add     rsp, 8
 * 0000000140405305: call    loc_1404052F8
 * 000000014040530A: add     rsp, 8
 * 000000014040530E: call    loc_140405301
 * 0000000140405313: add     rsp, 8
 * 0000000140405317: call    loc_14040530A
 * 000000014040531C: add     rsp, 8
 * 0000000140405320: call    loc_140405313
 * 0000000140405325: add     rsp, 8
 * 0000000140405329: call    loc_14040531C
 * 000000014040532E: add     rsp, 8
 * 0000000140405332: call    loc_140405325
 * 0000000140405337: add     rsp, 8
 * 000000014040533B: call    loc_14040532E
 * 0000000140405340: add     rsp, 8
 * 0000000140405344: call    loc_140405337
 * 0000000140405349: add     rsp, 8
 * 000000014040534D: call    loc_140405340
 * 0000000140405352: add     rsp, 8
 * 0000000140405356: call    loc_140405349
 * 000000014040535B: add     rsp, 8
 * 000000014040535F: call    loc_140405352
 * 0000000140405364: add     rsp, 8
 * 0000000140405368: call    loc_14040535B
 * 000000014040536D: add     rsp, 8
 * 0000000140405371: call    loc_140405364
 * 0000000140405376: add     rsp, 8
 * 000000014040537A: call    loc_14040536D
 * 000000014040537F: add     rsp, 8
 * 0000000140405383: mov     eax, 0DADAh
 * 0000000140405388: test    edx, 200h
 * 000000014040538E: jz      short loc_140405395
 * 0000000140405390: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140405395: lfence
 * 0000000140405398: mov     byte ptr gs:856h, 0
 * 00000001404053A1: test    byte ptr [r10+3], 3
 * 00000001404053A6: mov     [rbp+0E8h+var_68], 0
 * 00000001404053AF: jz      short loc_1404053B6
 * 00000001404053B1: call    KiSaveDebugRegisterState
 * 00000001404053B6: cld
 * 00000001404053B7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001404053BB: ldmxcsr dword ptr gs:180h
 * 00000001404053C4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001404053C8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001404053CC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001404053D0: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001404053D4: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001404053D8: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001404053DC: cmp     byte ptr gs:801Ah, 0
 * 00000001404053E5: jz      short loc_1404053EC
 * 00000001404053E7: call    KeWakeProcessor
 * 00000001404053EC: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001404053F3: cmp     rax, [rbp+0E8h]
 * 00000001404053FA: jnb     short loc_140405415
 * 00000001404053FC: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140405403: cmp     rax, [rbp+0E8h]
 * 000000014040540A: jb      short loc_140405415
 * 000000014040540C: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140405410: call    KiCheckForSListAddress
 * 0000000140405415: xor     esi, esi
 * 0000000140405417: inc     dword ptr gs:8000h
 * 000000014040541F: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140405426: jz      short loc_14040542B
 * 0000000140405428: clac
 * 000000014040542B: mov     ecx, 2
 * 0000000140405430: cmp     cs:KiIrqlFlags, 0
 * 0000000140405437: jz      short loc_140405440
 * 0000000140405439: call    KzSetIrqlUnsafe
 * 000000014040543E: jmp     short loc_140405448
 * 0000000140405440: mov     rax, cr8
 * 0000000140405444: mov     cr8, rcx
 * 0000000140405448: mov     [rbp+0E8h+var_13F], al
 * 000000014040544B: mov     rcx, gs:20h
 * 0000000140405454: inc     byte ptr [rcx+20h]
 * 0000000140405457: cmp     byte ptr [rcx+20h], 1
 * 000000014040545B: jnz     short loc_1404054AD
 * 000000014040545D: rdtsc
 * 000000014040545F: shl     rdx, 20h
 * 0000000140405463: or      rax, rdx
 * 0000000140405466: mov     r8, [rcx+8]
 * 000000014040546A: sub     rax, [rcx+7EC0h]
 * 0000000140405471: add     [r8+48h], rax
 * 0000000140405475: mov     edx, [r8+50h]
 * 0000000140405479: add     [rcx+7EC0h], rax
 * 0000000140405480: add     rdx, rax
 * 0000000140405483: mov     ecx, edx
 * 0000000140405485: shr     rdx, 20h
 * 0000000140405489: jz      short loc_14040548E
 * 000000014040548B: or      ecx, 0FFFFFFFFh
 * 000000014040548E: mov     [r8+50h], ecx
 * 0000000140405492: test    byte ptr [r8+2], 3Eh
 * 0000000140405497: jz      short loc_1404054AD
 * 0000000140405499: mov     rdx, r8
 * 000000014040549C: mov     r8, rax
 * 000000014040549F: mov     rcx, gs:20h
 * 00000001404054A8: call    KiEndThreadAccountingPeriod
 * 00000001404054AD: sti
 * 00000001404054AE: lea     rcx, [rbp+0E8h+var_168]
 * 00000001404054B2: call    KiSwInterruptDispatch
 * 00000001404054B7: cli
 * 00000001404054B8: mov     rcx, rsi
 * 00000001404054BB: call    HalPerformEndOfInterrupt
 * 00000001404054C0: mov     rcx, gs:20h
 * 00000001404054C9: cmp     byte ptr [rcx+20h], 1
 * 00000001404054CD: ja      short loc_140405549
 * 00000001404054CF: rdtsc
 * 00000001404054D1: shl     rdx, 20h
 * 00000001404054D5: or      rax, rdx
 * 00000001404054D8: sub     rax, [rcx+7EC0h]
 * 00000001404054DF: add     [rcx+7F38h], rax
 * 00000001404054E6: add     [rcx+7EC0h], rax
 * 00000001404054ED: mov     r8, rax
 * 00000001404054F0: mov     rax, [rcx+8]
 * 00000001404054F4: test    byte ptr [rax+2], 72h
 * 00000001404054F8: jz      short loc_14040550D
 * 00000001404054FA: xor     edx, edx
 * 00000001404054FC: call    KiBeginThreadAccountingPeriod
 * 0000000140405501: mov     rcx, gs:20h
 * 000000014040550A: inc     byte ptr [rcx+20h]
 * 000000014040550D: mov     dl, [rcx+6]
 * 0000000140405510: and     byte ptr [rcx+6], 0
 * 0000000140405514: cmp     byte ptr [rcx+7], 0
 * 0000000140405518: jnz     short loc_140405549
 * 000000014040551A: test    dl, dl
 * 000000014040551C: jz      short loc_140405549
 * 000000014040551E: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140405522: jnb     short loc_14040552F
 * 0000000140405524: and     byte ptr [rcx+20h], 0
 * 0000000140405528: call    KiDpcInterruptBypass
 * 000000014040552D: jmp     short loc_14040554C
 * 000000014040552F: mov     ecx, 2
 * 0000000140405534: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014040553B: nop     dword ptr [rax+rax+00h]
 * 0000000140405540: mov     rcx, gs:20h
 * 0000000140405549: dec     byte ptr [rcx+20h]
 * 000000014040554C: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140405550: cmp     cs:KiIrqlFlags, 0
 * 0000000140405557: jz      short loc_140405560
 * 0000000140405559: call    KzSetIrqlUnsafe
 * 000000014040555E: jmp     short loc_140405564
 * 0000000140405560: mov     cr8, rcx
 * 0000000140405564: mov     rsi, [rbp+0E8h+var_18]
 * 000000014040556B: cli
 * 000000014040556C: test    [rbp+0E8h+arg_0], 1
 * 0000000140405573: jz      loc_140405815
 * 0000000140405579: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140405580: jz      short loc_140405585
 * 0000000140405582: stac
 * 0000000140405585: mov     rcx, gs:188h
 * 000000014040558E: test    byte ptr [rcx+0C2h], 3
 * 0000000140405595: jz      short loc_1404055B2
 * 0000000140405597: mov     ecx, 1
 * 000000014040559C: mov     cr8, rcx
 * 00000001404055A0: sti
 * 00000001404055A1: call    KiInitiateUserApc
 * 00000001404055A6: cli
 * 00000001404055A7: mov     ecx, 0
 * 00000001404055AC: mov     cr8, rcx
 * 00000001404055B0: jmp     short loc_140405585
 * 00000001404055B2: test    byte ptr gs:86Ch, 2
 * 00000001404055BB: jz      short loc_1404055C4
 * 00000001404055BD: xor     ecx, ecx
 * 00000001404055BF: call    KiUpdateStibpPairing
 * 00000001404055C4: mov     rcx, gs:188h
 * 00000001404055CD: test    dword ptr [rcx], 8000000h
 * 00000001404055D3: jz      short loc_1404055DA
 * 00000001404055D5: call    KiRestoreSetContextState
 * 00000001404055DA: mov     rcx, gs:188h
 * 00000001404055E3: test    dword ptr [rcx], 40010000h
 * 00000001404055E9: jz      short loc_1404055FF
 * 00000001404055EB: test    byte ptr [rcx+2], 1
 * 00000001404055EF: jz      short loc_1404055FF
 * 00000001404055F1: call    KiCopyCounters
 * 00000001404055F6: mov     rcx, gs:188h
 * 00000001404055FF: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140405603: cmp     [rbp+0E8h+var_68], 0
 * 000000014040560B: jz      short loc_140405612
 * 000000014040560D: call    KiRestoreDebugRegisterState
 * 0000000140405612: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140405616: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040561A: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040561E: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140405622: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140405626: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040562A: mov     r11, [rbp+0E8h+var_108]
 * 000000014040562E: mov     r10, [rbp+0E8h+var_110]
 * 0000000140405632: mov     r9, [rbp+0E8h+var_118]
 * 0000000140405636: mov     r8, [rbp+0E8h+var_120]
 * 000000014040563A: mov     byte ptr gs:856h, 0
 * 0000000140405643: movzx   eax, word ptr gs:86Ah
 * 000000014040564C: cmp     gs:864h, ax
 * 0000000140405655: jz      short loc_140405669
 * 0000000140405657: mov     gs:864h, ax
 * 0000000140405660: mov     ecx, 48h ; 'H'
 * 0000000140405665: xor     edx, edx
 * 0000000140405667: wrmsr
 * 0000000140405669: btr     word ptr gs:860h, 2
 * 0000000140405674: jnb     short loc_140405684
 * 0000000140405676: mov     eax, 1
 * 000000014040567B: xor     edx, edx
 * 000000014040567D: mov     ecx, 49h ; 'I'
 * 0000000140405682: wrmsr
 * 0000000140405684: btr     word ptr gs:860h, 5
 * 000000014040568F: jnb     loc_1404057BA
 * 0000000140405695: call    loc_1404057A8
 * 000000014040569A: add     rsp, 8
 * 000000014040569E: call    loc_1404057B1
 * 00000001404056A3: add     rsp, 8
 * 00000001404056A7: call    loc_14040569A
 * 00000001404056AC: add     rsp, 8
 * 00000001404056B0: call    loc_1404056A3
 * 00000001404056B5: add     rsp, 8
 * 00000001404056B9: call    loc_1404056AC
 * 00000001404056BE: add     rsp, 8
 * 00000001404056C2: call    loc_1404056B5
 * 00000001404056C7: add     rsp, 8
 * 00000001404056CB: call    loc_1404056BE
 * 00000001404056D0: add     rsp, 8
 * 00000001404056D4: call    loc_1404056C7
 * 00000001404056D9: add     rsp, 8
 * 00000001404056DD: call    loc_1404056D0
 * 00000001404056E2: add     rsp, 8
 * 00000001404056E6: call    loc_1404056D9
 * 00000001404056EB: add     rsp, 8
 * 00000001404056EF: call    loc_1404056E2
 * 00000001404056F4: add     rsp, 8
 * 00000001404056F8: call    loc_1404056EB
 * 00000001404056FD: add     rsp, 8
 * 0000000140405701: call    loc_1404056F4
 * 0000000140405706: add     rsp, 8
 * 000000014040570A: call    loc_1404056FD
 * 000000014040570F: add     rsp, 8
 * 0000000140405713: call    loc_140405706
 * 0000000140405718: add     rsp, 8
 * 000000014040571C: call    loc_14040570F
 * 0000000140405721: add     rsp, 8
 * 0000000140405725: call    loc_140405718
 * 000000014040572A: add     rsp, 8
 * 000000014040572E: call    loc_140405721
 * 0000000140405733: add     rsp, 8
 * 0000000140405737: call    loc_14040572A
 * 000000014040573C: add     rsp, 8
 * 0000000140405740: call    loc_140405733
 * 0000000140405745: add     rsp, 8
 * 0000000140405749: call    loc_14040573C
 * 000000014040574E: add     rsp, 8
 * 0000000140405752: call    loc_140405745
 * 0000000140405757: add     rsp, 8
 * 000000014040575B: call    loc_14040574E
 * 0000000140405760: add     rsp, 8
 * 0000000140405764: call    loc_140405757
 * 0000000140405769: add     rsp, 8
 * 000000014040576D: call    loc_140405760
 * 0000000140405772: add     rsp, 8
 * 0000000140405776: call    loc_140405769
 * 000000014040577B: add     rsp, 8
 * 000000014040577F: call    loc_140405772
 * 0000000140405784: add     rsp, 8
 * 0000000140405788: call    loc_14040577B
 * 000000014040578D: add     rsp, 8
 * 0000000140405791: call    loc_140405784
 * 0000000140405796: add     rsp, 8
 * 000000014040579A: call    loc_14040578D
 * 000000014040579F: add     rsp, 8
 * 00000001404057A3: call    loc_140405796
 * 00000001404057A8: add     rsp, 8
 * 00000001404057AC: call    loc_14040579F
 * 00000001404057B1: add     rsp, 8
 * 00000001404057B5: mov     eax, 0DADAh
 * 00000001404057BA: test    word ptr gs:860h, 80h
 * 00000001404057C5: jz      short loc_1404057D3
 * 00000001404057C7: xor     eax, eax
 * 00000001404057C9: xor     edx, edx
 * 00000001404057CB: mov     ecx, 1
 * 00000001404057D0: div     rcx
 * 00000001404057D3: mov     rdx, [rbp+0E8h+var_128]
 * 00000001404057D7: mov     rcx, [rbp+0E8h+var_130]
 * 00000001404057DB: mov     rax, [rbp+0E8h+var_138]
 * 00000001404057DF: mov     rsp, rbp
 * 00000001404057E2: mov     rbp, [rbp+0E8h+var_10]
 * 00000001404057E9: add     rsp, 0E8h
 * 00000001404057F0: test    cs:KiKvaShadow, 1
 * 00000001404057F7: jz      short loc_1404057FE
 * 00000001404057F9: jmp     KiKernelExit
 * 00000001404057FE: test    word ptr gs:860h, 100h
 * 0000000140405809: jz      short loc_140405810
 * 000000014040580B: verw    [rsp+arg_18]
 * 0000000140405810: swapgs
 * 0000000140405813: iretq
 * 0000000140405815: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140405819: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040581D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140405821: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140405825: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140405829: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040582D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140405831: mov     r11, [rbp+0E8h+var_108]
 * 0000000140405835: mov     r10, [rbp+0E8h+var_110]
 * 0000000140405839: mov     r9, [rbp+0E8h+var_118]
 * 000000014040583D: mov     r8, [rbp+0E8h+var_120]
 * 0000000140405841: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140405845: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140405849: mov     rax, [rbp+0E8h+var_138]
 * 000000014040584D: mov     rsp, rbp
 * 0000000140405850: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140405857: add     rsp, 0E8h
 * 000000014040585E: iretq
 */
