/*
 * XREFs of KiInvalidOpcodeFault @ 0x14040C140
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x140A15440 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x14040C140 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x140413680 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140413B00 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInvalidOpcodeFault @ 0x14040C140
 * Reason: Hex-Rays returned no pseudocode for 0x14040C140
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040C140: sub     rsp, 8
 * 000000014040C144: push    rbp
 * 000000014040C145: sub     rsp, 158h
 * 000000014040C14C: lea     rbp, [rsp+80h]
 * 000000014040C154: mov     [rbp+0E8h+var_13D], 1
 * 000000014040C158: mov     [rbp+0E8h+var_138], rax
 * 000000014040C15C: mov     [rbp+0E8h+var_130], rcx
 * 000000014040C160: mov     [rbp+0E8h+var_128], rdx
 * 000000014040C164: mov     [rbp+0E8h+var_120], r8
 * 000000014040C168: mov     [rbp+0E8h+var_118], r9
 * 000000014040C16C: mov     [rbp+0E8h+var_110], r10
 * 000000014040C170: mov     [rbp+0E8h+var_108], r11
 * 000000014040C174: test    [rbp+0E8h+arg_0], 1
 * 000000014040C17B: jnz     short loc_14040C1AC
 * 000000014040C17D: lfence
 * 000000014040C180: test    word ptr gs:860h, 1
 * 000000014040C18B: jnz     short loc_14040C195
 * 000000014040C18D: lfence
 * 000000014040C190: jmp     loc_14040C3FE
 * 000000014040C195: movzx   eax, word ptr gs:864h
 * 000000014040C19E: mov     ecx, 48h ; 'H'
 * 000000014040C1A3: xor     edx, edx
 * 000000014040C1A5: wrmsr
 * 000000014040C1A7: jmp     loc_14040C3FE
 * 000000014040C1AC: test    cs:KiKvaShadow, 1
 * 000000014040C1B3: jnz     short loc_14040C1B8
 * 000000014040C1B5: swapgs
 * 000000014040C1B8: lfence
 * 000000014040C1BB: mov     r10, gs:188h
 * 000000014040C1C4: mov     rcx, gs:188h
 * 000000014040C1CD: mov     rcx, [rcx+220h]
 * 000000014040C1D4: mov     rcx, [rcx+9E0h]
 * 000000014040C1DB: mov     gs:858h, rcx
 * 000000014040C1E4: mov     cx, gs:850h
 * 000000014040C1ED: mov     gs:852h, cx
 * 000000014040C1F6: mov     cx, gs:860h
 * 000000014040C1FF: mov     gs:854h, cx
 * 000000014040C208: movzx   eax, word ptr gs:866h
 * 000000014040C211: cmp     gs:864h, ax
 * 000000014040C21A: jz      short loc_14040C22E
 * 000000014040C21C: mov     gs:864h, ax
 * 000000014040C225: mov     ecx, 48h ; 'H'
 * 000000014040C22A: xor     edx, edx
 * 000000014040C22C: wrmsr
 * 000000014040C22E: movzx   edx, word ptr gs:860h
 * 000000014040C237: test    edx, 8
 * 000000014040C23D: jz      short loc_14040C256
 * 000000014040C23F: mov     eax, 1
 * 000000014040C244: xor     edx, edx
 * 000000014040C246: mov     ecx, 49h ; 'I'
 * 000000014040C24B: wrmsr
 * 000000014040C24D: movzx   edx, word ptr gs:860h
 * 000000014040C256: test    edx, 2
 * 000000014040C25C: jz      loc_14040C387
 * 000000014040C262: call    loc_14040C375
 * 000000014040C267: add     rsp, 8
 * 000000014040C26B: call    loc_14040C37E
 * 000000014040C270: add     rsp, 8
 * 000000014040C274: call    loc_14040C267
 * 000000014040C279: add     rsp, 8
 * 000000014040C27D: call    loc_14040C270
 * 000000014040C282: add     rsp, 8
 * 000000014040C286: call    loc_14040C279
 * 000000014040C28B: add     rsp, 8
 * 000000014040C28F: call    loc_14040C282
 * 000000014040C294: add     rsp, 8
 * 000000014040C298: call    loc_14040C28B
 * 000000014040C29D: add     rsp, 8
 * 000000014040C2A1: call    loc_14040C294
 * 000000014040C2A6: add     rsp, 8
 * 000000014040C2AA: call    loc_14040C29D
 * 000000014040C2AF: add     rsp, 8
 * 000000014040C2B3: call    loc_14040C2A6
 * 000000014040C2B8: add     rsp, 8
 * 000000014040C2BC: call    loc_14040C2AF
 * 000000014040C2C1: add     rsp, 8
 * 000000014040C2C5: call    loc_14040C2B8
 * 000000014040C2CA: add     rsp, 8
 * 000000014040C2CE: call    loc_14040C2C1
 * 000000014040C2D3: add     rsp, 8
 * 000000014040C2D7: call    loc_14040C2CA
 * 000000014040C2DC: add     rsp, 8
 * 000000014040C2E0: call    loc_14040C2D3
 * 000000014040C2E5: add     rsp, 8
 * 000000014040C2E9: call    loc_14040C2DC
 * 000000014040C2EE: add     rsp, 8
 * 000000014040C2F2: call    loc_14040C2E5
 * 000000014040C2F7: add     rsp, 8
 * 000000014040C2FB: call    loc_14040C2EE
 * 000000014040C300: add     rsp, 8
 * 000000014040C304: call    loc_14040C2F7
 * 000000014040C309: add     rsp, 8
 * 000000014040C30D: call    loc_14040C300
 * 000000014040C312: add     rsp, 8
 * 000000014040C316: call    loc_14040C309
 * 000000014040C31B: add     rsp, 8
 * 000000014040C31F: call    loc_14040C312
 * 000000014040C324: add     rsp, 8
 * 000000014040C328: call    loc_14040C31B
 * 000000014040C32D: add     rsp, 8
 * 000000014040C331: call    loc_14040C324
 * 000000014040C336: add     rsp, 8
 * 000000014040C33A: call    loc_14040C32D
 * 000000014040C33F: add     rsp, 8
 * 000000014040C343: call    loc_14040C336
 * 000000014040C348: add     rsp, 8
 * 000000014040C34C: call    loc_14040C33F
 * 000000014040C351: add     rsp, 8
 * 000000014040C355: call    loc_14040C348
 * 000000014040C35A: add     rsp, 8
 * 000000014040C35E: call    loc_14040C351
 * 000000014040C363: add     rsp, 8
 * 000000014040C367: call    loc_14040C35A
 * 000000014040C36C: add     rsp, 8
 * 000000014040C370: call    loc_14040C363
 * 000000014040C375: add     rsp, 8
 * 000000014040C379: call    loc_14040C36C
 * 000000014040C37E: add     rsp, 8
 * 000000014040C382: mov     eax, 0DADAh
 * 000000014040C387: test    edx, 200h
 * 000000014040C38D: jz      short loc_14040C394
 * 000000014040C38F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040C394: lfence
 * 000000014040C397: mov     byte ptr gs:856h, 0
 * 000000014040C3A0: test    byte ptr [r10+3], 80h
 * 000000014040C3A5: jz      short loc_14040C3E9
 * 000000014040C3A7: mov     ecx, 0C0000102h
 * 000000014040C3AC: rdmsr
 * 000000014040C3AE: shl     rdx, 20h
 * 000000014040C3B2: or      rax, rdx
 * 000000014040C3B5: cmp     rax, cs:MmUserProbeAddress
 * 000000014040C3BC: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040C3C4: cmp     [r10+0F0h], rax
 * 000000014040C3CB: jz      short loc_14040C3E9
 * 000000014040C3CD: mov     rdx, [r10+1F0h]
 * 000000014040C3D4: bts     dword ptr [r10+74h], 8
 * 000000014040C3DA: dec     word ptr [r10+1E6h]
 * 000000014040C3E2: mov     [rdx+80h], rax
 * 000000014040C3E9: test    byte ptr [r10+3], 3
 * 000000014040C3EE: mov     [rbp+0E8h+var_68], 0
 * 000000014040C3F7: jz      short loc_14040C3FE
 * 000000014040C3F9: call    KiSaveDebugRegisterState
 * 000000014040C3FE: cld
 * 000000014040C3FF: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040C403: ldmxcsr dword ptr gs:180h
 * 000000014040C40C: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040C410: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040C414: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040C418: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040C41C: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040C420: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040C424: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040C42B: jz      short loc_14040C439
 * 000000014040C42D: test    [rbp+0E8h+arg_0], 1
 * 000000014040C434: jz      short loc_14040C439
 * 000000014040C436: stac
 * 000000014040C439: test    [rbp+0E8h+arg_8], 200h
 * 000000014040C443: jz      short loc_14040C446
 * 000000014040C445: sti
 * 000000014040C446: mov     r9, gs:188h
 * 000000014040C44F: bt      dword ptr [r9+74h], 8
 * 000000014040C455: jnb     short loc_14040C465
 * 000000014040C457: test    [rbp+0E8h+arg_0], 1
 * 000000014040C45E: jz      short loc_14040C465
 * 000000014040C460: call    KiUmsTrapEntry
 * 000000014040C465: mov     ecx, 10000002h
 * 000000014040C46A: xor     edx, edx
 * 000000014040C46C: mov     r8, [rbp+0E8h]
 * 000000014040C473: call    KiExceptionDispatch
 * 000000014040C478: nop
 * 000000014040C479: cli
 * 000000014040C47A: test    [rbp+0E8h+arg_0], 1
 * 000000014040C481: jz      loc_14040C734
 * 000000014040C487: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040C48E: jz      short loc_14040C493
 * 000000014040C490: stac
 * 000000014040C493: mov     rcx, gs:188h
 * 000000014040C49C: test    byte ptr [rcx+0C2h], 3
 * 000000014040C4A3: jz      short loc_14040C4C0
 * 000000014040C4A5: mov     ecx, 1
 * 000000014040C4AA: mov     cr8, rcx
 * 000000014040C4AE: sti
 * 000000014040C4AF: call    KiInitiateUserApc
 * 000000014040C4B4: cli
 * 000000014040C4B5: mov     ecx, 0
 * 000000014040C4BA: mov     cr8, rcx
 * 000000014040C4BE: jmp     short loc_14040C493
 * 000000014040C4C0: test    byte ptr gs:86Ch, 2
 * 000000014040C4C9: jz      short loc_14040C4D2
 * 000000014040C4CB: xor     ecx, ecx
 * 000000014040C4CD: call    KiUpdateStibpPairing
 * 000000014040C4D2: mov     rcx, gs:188h
 * 000000014040C4DB: test    dword ptr [rcx], 8000000h
 * 000000014040C4E1: jz      short loc_14040C4E8
 * 000000014040C4E3: call    KiRestoreSetContextState
 * 000000014040C4E8: mov     rcx, gs:188h
 * 000000014040C4F1: test    dword ptr [rcx], 40010000h
 * 000000014040C4F7: jz      short loc_14040C51E
 * 000000014040C4F9: test    byte ptr [rcx+2], 1
 * 000000014040C4FD: jz      short loc_14040C50D
 * 000000014040C4FF: call    KiCopyCounters
 * 000000014040C504: mov     rcx, gs:188h
 * 000000014040C50D: test    byte ptr [rcx+3], 40h
 * 000000014040C511: jz      short loc_14040C51E
 * 000000014040C513: lea     rsp, [rbp-80h]
 * 000000014040C517: mov     cl, 1
 * 000000014040C519: call    KiUmsExit
 * 000000014040C51E: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040C522: cmp     [rbp+0E8h+var_68], 0
 * 000000014040C52A: jz      short loc_14040C531
 * 000000014040C52C: call    KiRestoreDebugRegisterState
 * 000000014040C531: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040C535: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040C539: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040C53D: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040C541: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040C545: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040C549: mov     r11, [rbp+0E8h+var_108]
 * 000000014040C54D: mov     r10, [rbp+0E8h+var_110]
 * 000000014040C551: mov     r9, [rbp+0E8h+var_118]
 * 000000014040C555: mov     r8, [rbp+0E8h+var_120]
 * 000000014040C559: mov     byte ptr gs:856h, 0
 * 000000014040C562: movzx   eax, word ptr gs:86Ah
 * 000000014040C56B: cmp     gs:864h, ax
 * 000000014040C574: jz      short loc_14040C588
 * 000000014040C576: mov     gs:864h, ax
 * 000000014040C57F: mov     ecx, 48h ; 'H'
 * 000000014040C584: xor     edx, edx
 * 000000014040C586: wrmsr
 * 000000014040C588: btr     word ptr gs:860h, 2
 * 000000014040C593: jnb     short loc_14040C5A3
 * 000000014040C595: mov     eax, 1
 * 000000014040C59A: xor     edx, edx
 * 000000014040C59C: mov     ecx, 49h ; 'I'
 * 000000014040C5A1: wrmsr
 * 000000014040C5A3: btr     word ptr gs:860h, 5
 * 000000014040C5AE: jnb     loc_14040C6D9
 * 000000014040C5B4: call    loc_14040C6C7
 * 000000014040C5B9: add     rsp, 8
 * 000000014040C5BD: call    loc_14040C6D0
 * 000000014040C5C2: add     rsp, 8
 * 000000014040C5C6: call    loc_14040C5B9
 * 000000014040C5CB: add     rsp, 8
 * 000000014040C5CF: call    loc_14040C5C2
 * 000000014040C5D4: add     rsp, 8
 * 000000014040C5D8: call    loc_14040C5CB
 * 000000014040C5DD: add     rsp, 8
 * 000000014040C5E1: call    loc_14040C5D4
 * 000000014040C5E6: add     rsp, 8
 * 000000014040C5EA: call    loc_14040C5DD
 * 000000014040C5EF: add     rsp, 8
 * 000000014040C5F3: call    loc_14040C5E6
 * 000000014040C5F8: add     rsp, 8
 * 000000014040C5FC: call    loc_14040C5EF
 * 000000014040C601: add     rsp, 8
 * 000000014040C605: call    loc_14040C5F8
 * 000000014040C60A: add     rsp, 8
 * 000000014040C60E: call    loc_14040C601
 * 000000014040C613: add     rsp, 8
 * 000000014040C617: call    loc_14040C60A
 * 000000014040C61C: add     rsp, 8
 * 000000014040C620: call    loc_14040C613
 * 000000014040C625: add     rsp, 8
 * 000000014040C629: call    loc_14040C61C
 * 000000014040C62E: add     rsp, 8
 * 000000014040C632: call    loc_14040C625
 * 000000014040C637: add     rsp, 8
 * 000000014040C63B: call    loc_14040C62E
 * 000000014040C640: add     rsp, 8
 * 000000014040C644: call    loc_14040C637
 * 000000014040C649: add     rsp, 8
 * 000000014040C64D: call    loc_14040C640
 * 000000014040C652: add     rsp, 8
 * 000000014040C656: call    loc_14040C649
 * 000000014040C65B: add     rsp, 8
 * 000000014040C65F: call    loc_14040C652
 * 000000014040C664: add     rsp, 8
 * 000000014040C668: call    loc_14040C65B
 * 000000014040C66D: add     rsp, 8
 * 000000014040C671: call    loc_14040C664
 * 000000014040C676: add     rsp, 8
 * 000000014040C67A: call    loc_14040C66D
 * 000000014040C67F: add     rsp, 8
 * 000000014040C683: call    loc_14040C676
 * 000000014040C688: add     rsp, 8
 * 000000014040C68C: call    loc_14040C67F
 * 000000014040C691: add     rsp, 8
 * 000000014040C695: call    loc_14040C688
 * 000000014040C69A: add     rsp, 8
 * 000000014040C69E: call    loc_14040C691
 * 000000014040C6A3: add     rsp, 8
 * 000000014040C6A7: call    loc_14040C69A
 * 000000014040C6AC: add     rsp, 8
 * 000000014040C6B0: call    loc_14040C6A3
 * 000000014040C6B5: add     rsp, 8
 * 000000014040C6B9: call    loc_14040C6AC
 * 000000014040C6BE: add     rsp, 8
 * 000000014040C6C2: call    loc_14040C6B5
 * 000000014040C6C7: add     rsp, 8
 * 000000014040C6CB: call    loc_14040C6BE
 * 000000014040C6D0: add     rsp, 8
 * 000000014040C6D4: mov     eax, 0DADAh
 * 000000014040C6D9: test    word ptr gs:860h, 80h
 * 000000014040C6E4: jz      short loc_14040C6F2
 * 000000014040C6E6: xor     eax, eax
 * 000000014040C6E8: xor     edx, edx
 * 000000014040C6EA: mov     ecx, 1
 * 000000014040C6EF: div     rcx
 * 000000014040C6F2: mov     rdx, [rbp+0E8h+var_128]
 * 000000014040C6F6: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040C6FA: mov     rax, [rbp+0E8h+var_138]
 * 000000014040C6FE: mov     rsp, rbp
 * 000000014040C701: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040C708: add     rsp, 0E8h
 * 000000014040C70F: test    cs:KiKvaShadow, 1
 * 000000014040C716: jz      short loc_14040C71D
 * 000000014040C718: jmp     KiKernelExit
 * 000000014040C71D: test    word ptr gs:860h, 100h
 * 000000014040C728: jz      short loc_14040C72F
 * 000000014040C72A: verw    [rsp+arg_18]
 * 000000014040C72F: swapgs
 * 000000014040C732: iretq
 * 000000014040C734: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040C738: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040C73C: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040C740: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040C744: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040C748: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040C74C: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040C750: mov     r11, [rbp+0E8h+var_108]
 * 000000014040C754: mov     r10, [rbp+0E8h+var_110]
 * 000000014040C758: mov     r9, [rbp+0E8h+var_118]
 * 000000014040C75C: mov     r8, [rbp+0E8h+var_120]
 * 000000014040C760: mov     rdx, [rbp+0E8h+var_128]
 * 000000014040C764: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040C768: mov     rax, [rbp+0E8h+var_138]
 * 000000014040C76C: mov     rsp, rbp
 * 000000014040C76F: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040C776: add     rsp, 0E8h
 * 000000014040C77D: iretq
 */
