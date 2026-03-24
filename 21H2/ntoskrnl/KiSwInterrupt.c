/*
 * XREFs of KiSwInterrupt @ 0x140404F60
 * Callers:
 *     KiSwInterruptShadow @ 0x140A14CC0 (KiSwInterruptShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiEndThreadAccountingPeriod @ 0x140231380 (KiEndThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x14024D5B0 (KiCheckForSListAddress.c)
 *     KiBeginThreadAccountingPeriod @ 0x140288A40 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402914D0 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x140293E90 (HalRequestSoftwareInterrupt.c)
 *     KiSwInterruptDispatch @ 0x1403DCC20 (KiSwInterruptDispatch.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x140404F60 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x140405CB0 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x140512C40 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140519A20 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x140404F60
 * Reason: Hex-Rays returned no pseudocode for 0x140404F60
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140404F60: sub     rsp, 8
 * 0000000140404F64: push    rbp
 * 0000000140404F65: push    rsi
 * 0000000140404F66: sub     rsp, 150h
 * 0000000140404F6D: lea     rbp, [rsp+80h]
 * 0000000140404F75: mov     [rbp+0E8h+var_13D], 0
 * 0000000140404F79: mov     [rbp+0E8h+var_138], rax
 * 0000000140404F7D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140404F81: mov     [rbp+0E8h+var_128], rdx
 * 0000000140404F85: mov     [rbp+0E8h+var_120], r8
 * 0000000140404F89: mov     [rbp+0E8h+var_118], r9
 * 0000000140404F8D: mov     [rbp+0E8h+var_110], r10
 * 0000000140404F91: mov     [rbp+0E8h+var_108], r11
 * 0000000140404F95: test    [rbp+0E8h+arg_0], 1
 * 0000000140404F9C: jnz     short loc_140404FCD
 * 0000000140404F9E: lfence
 * 0000000140404FA1: test    word ptr gs:860h, 1
 * 0000000140404FAC: jnz     short loc_140404FB6
 * 0000000140404FAE: lfence
 * 0000000140404FB1: jmp     loc_1404051D6
 * 0000000140404FB6: movzx   eax, word ptr gs:864h
 * 0000000140404FBF: mov     ecx, 48h ; 'H'
 * 0000000140404FC4: xor     edx, edx
 * 0000000140404FC6: wrmsr
 * 0000000140404FC8: jmp     loc_1404051D6
 * 0000000140404FCD: test    cs:KiKvaShadow, 1
 * 0000000140404FD4: jnz     short loc_140404FD9
 * 0000000140404FD6: swapgs
 * 0000000140404FD9: lfence
 * 0000000140404FDC: mov     r10, gs:188h
 * 0000000140404FE5: mov     rcx, gs:188h
 * 0000000140404FEE: mov     rcx, [rcx+220h]
 * 0000000140404FF5: mov     rcx, [rcx+9E0h]
 * 0000000140404FFC: mov     gs:858h, rcx
 * 0000000140405005: mov     cx, gs:850h
 * 000000014040500E: mov     gs:852h, cx
 * 0000000140405017: mov     cx, gs:860h
 * 0000000140405020: mov     gs:854h, cx
 * 0000000140405029: movzx   eax, word ptr gs:866h
 * 0000000140405032: cmp     gs:864h, ax
 * 000000014040503B: jz      short loc_14040504F
 * 000000014040503D: mov     gs:864h, ax
 * 0000000140405046: mov     ecx, 48h ; 'H'
 * 000000014040504B: xor     edx, edx
 * 000000014040504D: wrmsr
 * 000000014040504F: movzx   edx, word ptr gs:860h
 * 0000000140405058: test    edx, 8
 * 000000014040505E: jz      short loc_140405077
 * 0000000140405060: mov     eax, 1
 * 0000000140405065: xor     edx, edx
 * 0000000140405067: mov     ecx, 49h ; 'I'
 * 000000014040506C: wrmsr
 * 000000014040506E: movzx   edx, word ptr gs:860h
 * 0000000140405077: test    edx, 2
 * 000000014040507D: jz      loc_1404051A8
 * 0000000140405083: call    loc_140405196
 * 0000000140405088: add     rsp, 8
 * 000000014040508C: call    loc_14040519F
 * 0000000140405091: add     rsp, 8
 * 0000000140405095: call    loc_140405088
 * 000000014040509A: add     rsp, 8
 * 000000014040509E: call    loc_140405091
 * 00000001404050A3: add     rsp, 8
 * 00000001404050A7: call    loc_14040509A
 * 00000001404050AC: add     rsp, 8
 * 00000001404050B0: call    loc_1404050A3
 * 00000001404050B5: add     rsp, 8
 * 00000001404050B9: call    loc_1404050AC
 * 00000001404050BE: add     rsp, 8
 * 00000001404050C2: call    loc_1404050B5
 * 00000001404050C7: add     rsp, 8
 * 00000001404050CB: call    loc_1404050BE
 * 00000001404050D0: add     rsp, 8
 * 00000001404050D4: call    loc_1404050C7
 * 00000001404050D9: add     rsp, 8
 * 00000001404050DD: call    loc_1404050D0
 * 00000001404050E2: add     rsp, 8
 * 00000001404050E6: call    loc_1404050D9
 * 00000001404050EB: add     rsp, 8
 * 00000001404050EF: call    loc_1404050E2
 * 00000001404050F4: add     rsp, 8
 * 00000001404050F8: call    loc_1404050EB
 * 00000001404050FD: add     rsp, 8
 * 0000000140405101: call    loc_1404050F4
 * 0000000140405106: add     rsp, 8
 * 000000014040510A: call    loc_1404050FD
 * 000000014040510F: add     rsp, 8
 * 0000000140405113: call    loc_140405106
 * 0000000140405118: add     rsp, 8
 * 000000014040511C: call    loc_14040510F
 * 0000000140405121: add     rsp, 8
 * 0000000140405125: call    loc_140405118
 * 000000014040512A: add     rsp, 8
 * 000000014040512E: call    loc_140405121
 * 0000000140405133: add     rsp, 8
 * 0000000140405137: call    loc_14040512A
 * 000000014040513C: add     rsp, 8
 * 0000000140405140: call    loc_140405133
 * 0000000140405145: add     rsp, 8
 * 0000000140405149: call    loc_14040513C
 * 000000014040514E: add     rsp, 8
 * 0000000140405152: call    loc_140405145
 * 0000000140405157: add     rsp, 8
 * 000000014040515B: call    loc_14040514E
 * 0000000140405160: add     rsp, 8
 * 0000000140405164: call    loc_140405157
 * 0000000140405169: add     rsp, 8
 * 000000014040516D: call    loc_140405160
 * 0000000140405172: add     rsp, 8
 * 0000000140405176: call    loc_140405169
 * 000000014040517B: add     rsp, 8
 * 000000014040517F: call    loc_140405172
 * 0000000140405184: add     rsp, 8
 * 0000000140405188: call    loc_14040517B
 * 000000014040518D: add     rsp, 8
 * 0000000140405191: call    loc_140405184
 * 0000000140405196: add     rsp, 8
 * 000000014040519A: call    loc_14040518D
 * 000000014040519F: add     rsp, 8
 * 00000001404051A3: mov     eax, 0DADAh
 * 00000001404051A8: test    edx, 200h
 * 00000001404051AE: jz      short loc_1404051B5
 * 00000001404051B0: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404051B5: lfence
 * 00000001404051B8: mov     byte ptr gs:856h, 0
 * 00000001404051C1: test    byte ptr [r10+3], 3
 * 00000001404051C6: mov     [rbp+0E8h+var_68], 0
 * 00000001404051CF: jz      short loc_1404051D6
 * 00000001404051D1: call    KiSaveDebugRegisterState
 * 00000001404051D6: cld
 * 00000001404051D7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001404051DB: ldmxcsr dword ptr gs:180h
 * 00000001404051E4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001404051E8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001404051EC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001404051F0: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001404051F4: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001404051F8: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001404051FC: cmp     byte ptr gs:801Ah, 0
 * 0000000140405205: jz      short loc_14040520C
 * 0000000140405207: call    KeWakeProcessor
 * 000000014040520C: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140405213: cmp     rax, [rbp+0E8h]
 * 000000014040521A: jnb     short loc_140405235
 * 000000014040521C: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140405223: cmp     rax, [rbp+0E8h]
 * 000000014040522A: jb      short loc_140405235
 * 000000014040522C: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140405230: call    KiCheckForSListAddress
 * 0000000140405235: xor     esi, esi
 * 0000000140405237: inc     dword ptr gs:8000h
 * 000000014040523F: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140405246: jz      short loc_14040524B
 * 0000000140405248: clac
 * 000000014040524B: mov     ecx, 2
 * 0000000140405250: cmp     cs:KiIrqlFlags, 0
 * 0000000140405257: jz      short loc_140405260
 * 0000000140405259: call    KzSetIrqlUnsafe
 * 000000014040525E: jmp     short loc_140405268
 * 0000000140405260: mov     rax, cr8
 * 0000000140405264: mov     cr8, rcx
 * 0000000140405268: mov     [rbp+0E8h+var_13F], al
 * 000000014040526B: mov     rcx, gs:20h
 * 0000000140405274: inc     byte ptr [rcx+20h]
 * 0000000140405277: cmp     byte ptr [rcx+20h], 1
 * 000000014040527B: jnz     short loc_1404052CD
 * 000000014040527D: rdtsc
 * 000000014040527F: shl     rdx, 20h
 * 0000000140405283: or      rax, rdx
 * 0000000140405286: mov     r8, [rcx+8]
 * 000000014040528A: sub     rax, [rcx+7EC0h]
 * 0000000140405291: add     [r8+48h], rax
 * 0000000140405295: mov     edx, [r8+50h]
 * 0000000140405299: add     [rcx+7EC0h], rax
 * 00000001404052A0: add     rdx, rax
 * 00000001404052A3: mov     ecx, edx
 * 00000001404052A5: shr     rdx, 20h
 * 00000001404052A9: jz      short loc_1404052AE
 * 00000001404052AB: or      ecx, 0FFFFFFFFh
 * 00000001404052AE: mov     [r8+50h], ecx
 * 00000001404052B2: test    byte ptr [r8+2], 3Eh
 * 00000001404052B7: jz      short loc_1404052CD
 * 00000001404052B9: mov     rdx, r8
 * 00000001404052BC: mov     r8, rax
 * 00000001404052BF: mov     rcx, gs:20h
 * 00000001404052C8: call    KiEndThreadAccountingPeriod
 * 00000001404052CD: sti
 * 00000001404052CE: lea     rcx, [rbp+0E8h+var_168]
 * 00000001404052D2: call    KiSwInterruptDispatch
 * 00000001404052D7: cli
 * 00000001404052D8: mov     rcx, rsi
 * 00000001404052DB: call    HalPerformEndOfInterrupt
 * 00000001404052E0: mov     rcx, gs:20h
 * 00000001404052E9: cmp     byte ptr [rcx+20h], 1
 * 00000001404052ED: ja      short loc_140405369
 * 00000001404052EF: rdtsc
 * 00000001404052F1: shl     rdx, 20h
 * 00000001404052F5: or      rax, rdx
 * 00000001404052F8: sub     rax, [rcx+7EC0h]
 * 00000001404052FF: add     [rcx+7F38h], rax
 * 0000000140405306: add     [rcx+7EC0h], rax
 * 000000014040530D: mov     r8, rax
 * 0000000140405310: mov     rax, [rcx+8]
 * 0000000140405314: test    byte ptr [rax+2], 72h
 * 0000000140405318: jz      short loc_14040532D
 * 000000014040531A: xor     edx, edx
 * 000000014040531C: call    KiBeginThreadAccountingPeriod
 * 0000000140405321: mov     rcx, gs:20h
 * 000000014040532A: inc     byte ptr [rcx+20h]
 * 000000014040532D: mov     dl, [rcx+6]
 * 0000000140405330: and     byte ptr [rcx+6], 0
 * 0000000140405334: cmp     byte ptr [rcx+7], 0
 * 0000000140405338: jnz     short loc_140405369
 * 000000014040533A: test    dl, dl
 * 000000014040533C: jz      short loc_140405369
 * 000000014040533E: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140405342: jnb     short loc_14040534F
 * 0000000140405344: and     byte ptr [rcx+20h], 0
 * 0000000140405348: call    KiDpcInterruptBypass
 * 000000014040534D: jmp     short loc_14040536C
 * 000000014040534F: mov     ecx, 2
 * 0000000140405354: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014040535B: nop     dword ptr [rax+rax+00h]
 * 0000000140405360: mov     rcx, gs:20h
 * 0000000140405369: dec     byte ptr [rcx+20h]
 * 000000014040536C: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140405370: cmp     cs:KiIrqlFlags, 0
 * 0000000140405377: jz      short loc_140405380
 * 0000000140405379: call    KzSetIrqlUnsafe
 * 000000014040537E: jmp     short loc_140405384
 * 0000000140405380: mov     cr8, rcx
 * 0000000140405384: mov     rsi, [rbp+0E8h+var_18]
 * 000000014040538B: cli
 * 000000014040538C: test    [rbp+0E8h+arg_0], 1
 * 0000000140405393: jz      loc_140405635
 * 0000000140405399: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404053A0: jz      short loc_1404053A5
 * 00000001404053A2: stac
 * 00000001404053A5: mov     rcx, gs:188h
 * 00000001404053AE: test    byte ptr [rcx+0C2h], 3
 * 00000001404053B5: jz      short loc_1404053D2
 * 00000001404053B7: mov     ecx, 1
 * 00000001404053BC: mov     cr8, rcx
 * 00000001404053C0: sti
 * 00000001404053C1: call    KiInitiateUserApc
 * 00000001404053C6: cli
 * 00000001404053C7: mov     ecx, 0
 * 00000001404053CC: mov     cr8, rcx
 * 00000001404053D0: jmp     short loc_1404053A5
 * 00000001404053D2: test    byte ptr gs:86Ch, 2
 * 00000001404053DB: jz      short loc_1404053E4
 * 00000001404053DD: xor     ecx, ecx
 * 00000001404053DF: call    KiUpdateStibpPairing
 * 00000001404053E4: mov     rcx, gs:188h
 * 00000001404053ED: test    dword ptr [rcx], 8000000h
 * 00000001404053F3: jz      short loc_1404053FA
 * 00000001404053F5: call    KiRestoreSetContextState
 * 00000001404053FA: mov     rcx, gs:188h
 * 0000000140405403: test    dword ptr [rcx], 40010000h
 * 0000000140405409: jz      short loc_14040541F
 * 000000014040540B: test    byte ptr [rcx+2], 1
 * 000000014040540F: jz      short loc_14040541F
 * 0000000140405411: call    KiCopyCounters
 * 0000000140405416: mov     rcx, gs:188h
 * 000000014040541F: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140405423: cmp     [rbp+0E8h+var_68], 0
 * 000000014040542B: jz      short loc_140405432
 * 000000014040542D: call    KiRestoreDebugRegisterState
 * 0000000140405432: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140405436: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040543A: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040543E: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140405442: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140405446: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040544A: mov     r11, [rbp+0E8h+var_108]
 * 000000014040544E: mov     r10, [rbp+0E8h+var_110]
 * 0000000140405452: mov     r9, [rbp+0E8h+var_118]
 * 0000000140405456: mov     r8, [rbp+0E8h+var_120]
 * 000000014040545A: mov     byte ptr gs:856h, 0
 * 0000000140405463: movzx   eax, word ptr gs:86Ah
 * 000000014040546C: cmp     gs:864h, ax
 * 0000000140405475: jz      short loc_140405489
 * 0000000140405477: mov     gs:864h, ax
 * 0000000140405480: mov     ecx, 48h ; 'H'
 * 0000000140405485: xor     edx, edx
 * 0000000140405487: wrmsr
 * 0000000140405489: btr     word ptr gs:860h, 2
 * 0000000140405494: jnb     short loc_1404054A4
 * 0000000140405496: mov     eax, 1
 * 000000014040549B: xor     edx, edx
 * 000000014040549D: mov     ecx, 49h ; 'I'
 * 00000001404054A2: wrmsr
 * 00000001404054A4: btr     word ptr gs:860h, 5
 * 00000001404054AF: jnb     loc_1404055DA
 * 00000001404054B5: call    loc_1404055C8
 * 00000001404054BA: add     rsp, 8
 * 00000001404054BE: call    loc_1404055D1
 * 00000001404054C3: add     rsp, 8
 * 00000001404054C7: call    loc_1404054BA
 * 00000001404054CC: add     rsp, 8
 * 00000001404054D0: call    loc_1404054C3
 * 00000001404054D5: add     rsp, 8
 * 00000001404054D9: call    loc_1404054CC
 * 00000001404054DE: add     rsp, 8
 * 00000001404054E2: call    loc_1404054D5
 * 00000001404054E7: add     rsp, 8
 * 00000001404054EB: call    loc_1404054DE
 * 00000001404054F0: add     rsp, 8
 * 00000001404054F4: call    loc_1404054E7
 * 00000001404054F9: add     rsp, 8
 * 00000001404054FD: call    loc_1404054F0
 * 0000000140405502: add     rsp, 8
 * 0000000140405506: call    loc_1404054F9
 * 000000014040550B: add     rsp, 8
 * 000000014040550F: call    loc_140405502
 * 0000000140405514: add     rsp, 8
 * 0000000140405518: call    loc_14040550B
 * 000000014040551D: add     rsp, 8
 * 0000000140405521: call    loc_140405514
 * 0000000140405526: add     rsp, 8
 * 000000014040552A: call    loc_14040551D
 * 000000014040552F: add     rsp, 8
 * 0000000140405533: call    loc_140405526
 * 0000000140405538: add     rsp, 8
 * 000000014040553C: call    loc_14040552F
 * 0000000140405541: add     rsp, 8
 * 0000000140405545: call    loc_140405538
 * 000000014040554A: add     rsp, 8
 * 000000014040554E: call    loc_140405541
 * 0000000140405553: add     rsp, 8
 * 0000000140405557: call    loc_14040554A
 * 000000014040555C: add     rsp, 8
 * 0000000140405560: call    loc_140405553
 * 0000000140405565: add     rsp, 8
 * 0000000140405569: call    loc_14040555C
 * 000000014040556E: add     rsp, 8
 * 0000000140405572: call    loc_140405565
 * 0000000140405577: add     rsp, 8
 * 000000014040557B: call    loc_14040556E
 * 0000000140405580: add     rsp, 8
 * 0000000140405584: call    loc_140405577
 * 0000000140405589: add     rsp, 8
 * 000000014040558D: call    loc_140405580
 * 0000000140405592: add     rsp, 8
 * 0000000140405596: call    loc_140405589
 * 000000014040559B: add     rsp, 8
 * 000000014040559F: call    loc_140405592
 * 00000001404055A4: add     rsp, 8
 * 00000001404055A8: call    loc_14040559B
 * 00000001404055AD: add     rsp, 8
 * 00000001404055B1: call    loc_1404055A4
 * 00000001404055B6: add     rsp, 8
 * 00000001404055BA: call    loc_1404055AD
 * 00000001404055BF: add     rsp, 8
 * 00000001404055C3: call    loc_1404055B6
 * 00000001404055C8: add     rsp, 8
 * 00000001404055CC: call    loc_1404055BF
 * 00000001404055D1: add     rsp, 8
 * 00000001404055D5: mov     eax, 0DADAh
 * 00000001404055DA: test    word ptr gs:860h, 80h
 * 00000001404055E5: jz      short loc_1404055F3
 * 00000001404055E7: xor     eax, eax
 * 00000001404055E9: xor     edx, edx
 * 00000001404055EB: mov     ecx, 1
 * 00000001404055F0: div     rcx
 * 00000001404055F3: mov     rdx, [rbp+0E8h+var_128]
 * 00000001404055F7: mov     rcx, [rbp+0E8h+var_130]
 * 00000001404055FB: mov     rax, [rbp+0E8h+var_138]
 * 00000001404055FF: mov     rsp, rbp
 * 0000000140405602: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140405609: add     rsp, 0E8h
 * 0000000140405610: test    cs:KiKvaShadow, 1
 * 0000000140405617: jz      short loc_14040561E
 * 0000000140405619: jmp     KiKernelExit
 * 000000014040561E: test    word ptr gs:860h, 100h
 * 0000000140405629: jz      short loc_140405630
 * 000000014040562B: verw    [rsp+arg_18]
 * 0000000140405630: swapgs
 * 0000000140405633: iretq
 * 0000000140405635: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140405639: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040563D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140405641: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140405645: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140405649: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040564D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140405651: mov     r11, [rbp+0E8h+var_108]
 * 0000000140405655: mov     r10, [rbp+0E8h+var_110]
 * 0000000140405659: mov     r9, [rbp+0E8h+var_118]
 * 000000014040565D: mov     r8, [rbp+0E8h+var_120]
 * 0000000140405661: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140405665: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140405669: mov     rax, [rbp+0E8h+var_138]
 * 000000014040566D: mov     rsp, rbp
 * 0000000140405670: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140405677: add     rsp, 0E8h
 * 000000014040567E: iretq
 */
