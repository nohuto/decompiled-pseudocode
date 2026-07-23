/*
 * XREFs of KiBreakpointTrap @ 0x14040B440
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140A152C0 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x14040B440 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x14040B440
 * Reason: Hex-Rays returned no pseudocode for 0x14040B440
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040B440: sub     rsp, 8
 * 000000014040B444: push    rbp
 * 000000014040B445: sub     rsp, 158h
 * 000000014040B44C: lea     rbp, [rsp+80h]
 * 000000014040B454: mov     [rbp+0E8h+var_13D], 1
 * 000000014040B458: mov     [rbp+0E8h+var_138], rax
 * 000000014040B45C: mov     [rbp+0E8h+var_130], rcx
 * 000000014040B460: mov     [rbp+0E8h+var_128], rdx
 * 000000014040B464: mov     [rbp+0E8h+var_120], r8
 * 000000014040B468: mov     [rbp+0E8h+var_118], r9
 * 000000014040B46C: mov     [rbp+0E8h+var_110], r10
 * 000000014040B470: mov     [rbp+0E8h+var_108], r11
 * 000000014040B474: test    [rbp+0E8h+arg_0], 1
 * 000000014040B47B: jnz     short loc_14040B4AC
 * 000000014040B47D: lfence
 * 000000014040B480: test    word ptr gs:860h, 1
 * 000000014040B48B: jnz     short loc_14040B495
 * 000000014040B48D: lfence
 * 000000014040B490: jmp     loc_14040B6FE
 * 000000014040B495: movzx   eax, word ptr gs:864h
 * 000000014040B49E: mov     ecx, 48h ; 'H'
 * 000000014040B4A3: xor     edx, edx
 * 000000014040B4A5: wrmsr
 * 000000014040B4A7: jmp     loc_14040B6FE
 * 000000014040B4AC: test    cs:KiKvaShadow, 1
 * 000000014040B4B3: jnz     short loc_14040B4B8
 * 000000014040B4B5: swapgs
 * 000000014040B4B8: lfence
 * 000000014040B4BB: mov     r10, gs:188h
 * 000000014040B4C4: mov     rcx, gs:188h
 * 000000014040B4CD: mov     rcx, [rcx+220h]
 * 000000014040B4D4: mov     rcx, [rcx+9E0h]
 * 000000014040B4DB: mov     gs:858h, rcx
 * 000000014040B4E4: mov     cx, gs:850h
 * 000000014040B4ED: mov     gs:852h, cx
 * 000000014040B4F6: mov     cx, gs:860h
 * 000000014040B4FF: mov     gs:854h, cx
 * 000000014040B508: movzx   eax, word ptr gs:866h
 * 000000014040B511: cmp     gs:864h, ax
 * 000000014040B51A: jz      short loc_14040B52E
 * 000000014040B51C: mov     gs:864h, ax
 * 000000014040B525: mov     ecx, 48h ; 'H'
 * 000000014040B52A: xor     edx, edx
 * 000000014040B52C: wrmsr
 * 000000014040B52E: movzx   edx, word ptr gs:860h
 * 000000014040B537: test    edx, 8
 * 000000014040B53D: jz      short loc_14040B556
 * 000000014040B53F: mov     eax, 1
 * 000000014040B544: xor     edx, edx
 * 000000014040B546: mov     ecx, 49h ; 'I'
 * 000000014040B54B: wrmsr
 * 000000014040B54D: movzx   edx, word ptr gs:860h
 * 000000014040B556: test    edx, 2
 * 000000014040B55C: jz      loc_14040B687
 * 000000014040B562: call    loc_14040B675
 * 000000014040B567: add     rsp, 8
 * 000000014040B56B: call    loc_14040B67E
 * 000000014040B570: add     rsp, 8
 * 000000014040B574: call    loc_14040B567
 * 000000014040B579: add     rsp, 8
 * 000000014040B57D: call    loc_14040B570
 * 000000014040B582: add     rsp, 8
 * 000000014040B586: call    loc_14040B579
 * 000000014040B58B: add     rsp, 8
 * 000000014040B58F: call    loc_14040B582
 * 000000014040B594: add     rsp, 8
 * 000000014040B598: call    loc_14040B58B
 * 000000014040B59D: add     rsp, 8
 * 000000014040B5A1: call    loc_14040B594
 * 000000014040B5A6: add     rsp, 8
 * 000000014040B5AA: call    loc_14040B59D
 * 000000014040B5AF: add     rsp, 8
 * 000000014040B5B3: call    loc_14040B5A6
 * 000000014040B5B8: add     rsp, 8
 * 000000014040B5BC: call    loc_14040B5AF
 * 000000014040B5C1: add     rsp, 8
 * 000000014040B5C5: call    loc_14040B5B8
 * 000000014040B5CA: add     rsp, 8
 * 000000014040B5CE: call    loc_14040B5C1
 * 000000014040B5D3: add     rsp, 8
 * 000000014040B5D7: call    loc_14040B5CA
 * 000000014040B5DC: add     rsp, 8
 * 000000014040B5E0: call    loc_14040B5D3
 * 000000014040B5E5: add     rsp, 8
 * 000000014040B5E9: call    loc_14040B5DC
 * 000000014040B5EE: add     rsp, 8
 * 000000014040B5F2: call    loc_14040B5E5
 * 000000014040B5F7: add     rsp, 8
 * 000000014040B5FB: call    loc_14040B5EE
 * 000000014040B600: add     rsp, 8
 * 000000014040B604: call    loc_14040B5F7
 * 000000014040B609: add     rsp, 8
 * 000000014040B60D: call    loc_14040B600
 * 000000014040B612: add     rsp, 8
 * 000000014040B616: call    loc_14040B609
 * 000000014040B61B: add     rsp, 8
 * 000000014040B61F: call    loc_14040B612
 * 000000014040B624: add     rsp, 8
 * 000000014040B628: call    loc_14040B61B
 * 000000014040B62D: add     rsp, 8
 * 000000014040B631: call    loc_14040B624
 * 000000014040B636: add     rsp, 8
 * 000000014040B63A: call    loc_14040B62D
 * 000000014040B63F: add     rsp, 8
 * 000000014040B643: call    loc_14040B636
 * 000000014040B648: add     rsp, 8
 * 000000014040B64C: call    loc_14040B63F
 * 000000014040B651: add     rsp, 8
 * 000000014040B655: call    loc_14040B648
 * 000000014040B65A: add     rsp, 8
 * 000000014040B65E: call    loc_14040B651
 * 000000014040B663: add     rsp, 8
 * 000000014040B667: call    loc_14040B65A
 * 000000014040B66C: add     rsp, 8
 * 000000014040B670: call    loc_14040B663
 * 000000014040B675: add     rsp, 8
 * 000000014040B679: call    loc_14040B66C
 * 000000014040B67E: add     rsp, 8
 * 000000014040B682: mov     eax, 0DADAh
 * 000000014040B687: test    edx, 200h
 * 000000014040B68D: jz      short loc_14040B694
 * 000000014040B68F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040B694: lfence
 * 000000014040B697: mov     byte ptr gs:856h, 0
 * 000000014040B6A0: test    byte ptr [r10+3], 80h
 * 000000014040B6A5: jz      short loc_14040B6E9
 * 000000014040B6A7: mov     ecx, 0C0000102h
 * 000000014040B6AC: rdmsr
 * 000000014040B6AE: shl     rdx, 20h
 * 000000014040B6B2: or      rax, rdx
 * 000000014040B6B5: cmp     rax, cs:MmUserProbeAddress
 * 000000014040B6BC: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040B6C4: cmp     [r10+0F0h], rax
 * 000000014040B6CB: jz      short loc_14040B6E9
 * 000000014040B6CD: mov     rdx, [r10+1F0h]
 * 000000014040B6D4: bts     dword ptr [r10+74h], 8
 * 000000014040B6DA: dec     word ptr [r10+1E6h]
 * 000000014040B6E2: mov     [rdx+80h], rax
 * 000000014040B6E9: test    byte ptr [r10+3], 3
 * 000000014040B6EE: mov     [rbp+0E8h+var_68], 0
 * 000000014040B6F7: jz      short loc_14040B6FE
 * 000000014040B6F9: call    KiSaveDebugRegisterState
 * 000000014040B6FE: cld
 * 000000014040B6FF: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040B703: ldmxcsr dword ptr gs:180h
 * 000000014040B70C: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040B710: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040B714: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040B718: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040B71C: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040B720: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040B724: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040B72B: jz      short loc_14040B739
 * 000000014040B72D: test    [rbp+0E8h+arg_0], 1
 * 000000014040B734: jz      short loc_14040B739
 * 000000014040B736: stac
 * 000000014040B739: test    [rbp+0E8h+arg_8], 200h
 * 000000014040B743: jz      short loc_14040B746
 * 000000014040B745: sti
 * 000000014040B746: mov     ecx, 80000003h
 * 000000014040B74B: mov     edx, 1
 * 000000014040B750: mov     r8, [rbp+0E8h]
 * 000000014040B757: dec     r8
 * 000000014040B75A: mov     r9d, 0
 * 000000014040B760: call    KiExceptionDispatch
 * 000000014040B765: nop
 * 000000014040B766: retn
 */
