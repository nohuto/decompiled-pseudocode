/*
 * XREFs of KiBreakpointTrap @ 0x14040B340
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140A142C0 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x14040B340 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x14040B340
 * Reason: Hex-Rays returned no pseudocode for 0x14040B340
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040B340: sub     rsp, 8
 * 000000014040B344: push    rbp
 * 000000014040B345: sub     rsp, 158h
 * 000000014040B34C: lea     rbp, [rsp+80h]
 * 000000014040B354: mov     [rbp+0E8h+var_13D], 1
 * 000000014040B358: mov     [rbp+0E8h+var_138], rax
 * 000000014040B35C: mov     [rbp+0E8h+var_130], rcx
 * 000000014040B360: mov     [rbp+0E8h+var_128], rdx
 * 000000014040B364: mov     [rbp+0E8h+var_120], r8
 * 000000014040B368: mov     [rbp+0E8h+var_118], r9
 * 000000014040B36C: mov     [rbp+0E8h+var_110], r10
 * 000000014040B370: mov     [rbp+0E8h+var_108], r11
 * 000000014040B374: test    [rbp+0E8h+arg_0], 1
 * 000000014040B37B: jnz     short loc_14040B3AC
 * 000000014040B37D: lfence
 * 000000014040B380: test    word ptr gs:860h, 1
 * 000000014040B38B: jnz     short loc_14040B395
 * 000000014040B38D: lfence
 * 000000014040B390: jmp     loc_14040B5FE
 * 000000014040B395: movzx   eax, word ptr gs:864h
 * 000000014040B39E: mov     ecx, 48h ; 'H'
 * 000000014040B3A3: xor     edx, edx
 * 000000014040B3A5: wrmsr
 * 000000014040B3A7: jmp     loc_14040B5FE
 * 000000014040B3AC: test    cs:KiKvaShadow, 1
 * 000000014040B3B3: jnz     short loc_14040B3B8
 * 000000014040B3B5: swapgs
 * 000000014040B3B8: lfence
 * 000000014040B3BB: mov     r10, gs:188h
 * 000000014040B3C4: mov     rcx, gs:188h
 * 000000014040B3CD: mov     rcx, [rcx+220h]
 * 000000014040B3D4: mov     rcx, [rcx+9E0h]
 * 000000014040B3DB: mov     gs:858h, rcx
 * 000000014040B3E4: mov     cx, gs:850h
 * 000000014040B3ED: mov     gs:852h, cx
 * 000000014040B3F6: mov     cx, gs:860h
 * 000000014040B3FF: mov     gs:854h, cx
 * 000000014040B408: movzx   eax, word ptr gs:866h
 * 000000014040B411: cmp     gs:864h, ax
 * 000000014040B41A: jz      short loc_14040B42E
 * 000000014040B41C: mov     gs:864h, ax
 * 000000014040B425: mov     ecx, 48h ; 'H'
 * 000000014040B42A: xor     edx, edx
 * 000000014040B42C: wrmsr
 * 000000014040B42E: movzx   edx, word ptr gs:860h
 * 000000014040B437: test    edx, 8
 * 000000014040B43D: jz      short loc_14040B456
 * 000000014040B43F: mov     eax, 1
 * 000000014040B444: xor     edx, edx
 * 000000014040B446: mov     ecx, 49h ; 'I'
 * 000000014040B44B: wrmsr
 * 000000014040B44D: movzx   edx, word ptr gs:860h
 * 000000014040B456: test    edx, 2
 * 000000014040B45C: jz      loc_14040B587
 * 000000014040B462: call    loc_14040B575
 * 000000014040B467: add     rsp, 8
 * 000000014040B46B: call    loc_14040B57E
 * 000000014040B470: add     rsp, 8
 * 000000014040B474: call    loc_14040B467
 * 000000014040B479: add     rsp, 8
 * 000000014040B47D: call    loc_14040B470
 * 000000014040B482: add     rsp, 8
 * 000000014040B486: call    loc_14040B479
 * 000000014040B48B: add     rsp, 8
 * 000000014040B48F: call    loc_14040B482
 * 000000014040B494: add     rsp, 8
 * 000000014040B498: call    loc_14040B48B
 * 000000014040B49D: add     rsp, 8
 * 000000014040B4A1: call    loc_14040B494
 * 000000014040B4A6: add     rsp, 8
 * 000000014040B4AA: call    loc_14040B49D
 * 000000014040B4AF: add     rsp, 8
 * 000000014040B4B3: call    loc_14040B4A6
 * 000000014040B4B8: add     rsp, 8
 * 000000014040B4BC: call    loc_14040B4AF
 * 000000014040B4C1: add     rsp, 8
 * 000000014040B4C5: call    loc_14040B4B8
 * 000000014040B4CA: add     rsp, 8
 * 000000014040B4CE: call    loc_14040B4C1
 * 000000014040B4D3: add     rsp, 8
 * 000000014040B4D7: call    loc_14040B4CA
 * 000000014040B4DC: add     rsp, 8
 * 000000014040B4E0: call    loc_14040B4D3
 * 000000014040B4E5: add     rsp, 8
 * 000000014040B4E9: call    loc_14040B4DC
 * 000000014040B4EE: add     rsp, 8
 * 000000014040B4F2: call    loc_14040B4E5
 * 000000014040B4F7: add     rsp, 8
 * 000000014040B4FB: call    loc_14040B4EE
 * 000000014040B500: add     rsp, 8
 * 000000014040B504: call    loc_14040B4F7
 * 000000014040B509: add     rsp, 8
 * 000000014040B50D: call    loc_14040B500
 * 000000014040B512: add     rsp, 8
 * 000000014040B516: call    loc_14040B509
 * 000000014040B51B: add     rsp, 8
 * 000000014040B51F: call    loc_14040B512
 * 000000014040B524: add     rsp, 8
 * 000000014040B528: call    loc_14040B51B
 * 000000014040B52D: add     rsp, 8
 * 000000014040B531: call    loc_14040B524
 * 000000014040B536: add     rsp, 8
 * 000000014040B53A: call    loc_14040B52D
 * 000000014040B53F: add     rsp, 8
 * 000000014040B543: call    loc_14040B536
 * 000000014040B548: add     rsp, 8
 * 000000014040B54C: call    loc_14040B53F
 * 000000014040B551: add     rsp, 8
 * 000000014040B555: call    loc_14040B548
 * 000000014040B55A: add     rsp, 8
 * 000000014040B55E: call    loc_14040B551
 * 000000014040B563: add     rsp, 8
 * 000000014040B567: call    loc_14040B55A
 * 000000014040B56C: add     rsp, 8
 * 000000014040B570: call    loc_14040B563
 * 000000014040B575: add     rsp, 8
 * 000000014040B579: call    loc_14040B56C
 * 000000014040B57E: add     rsp, 8
 * 000000014040B582: mov     eax, 0DADAh
 * 000000014040B587: test    edx, 200h
 * 000000014040B58D: jz      short loc_14040B594
 * 000000014040B58F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040B594: lfence
 * 000000014040B597: mov     byte ptr gs:856h, 0
 * 000000014040B5A0: test    byte ptr [r10+3], 80h
 * 000000014040B5A5: jz      short loc_14040B5E9
 * 000000014040B5A7: mov     ecx, 0C0000102h
 * 000000014040B5AC: rdmsr
 * 000000014040B5AE: shl     rdx, 20h
 * 000000014040B5B2: or      rax, rdx
 * 000000014040B5B5: cmp     rax, cs:MmUserProbeAddress
 * 000000014040B5BC: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040B5C4: cmp     [r10+0F0h], rax
 * 000000014040B5CB: jz      short loc_14040B5E9
 * 000000014040B5CD: mov     rdx, [r10+1F0h]
 * 000000014040B5D4: bts     dword ptr [r10+74h], 8
 * 000000014040B5DA: dec     word ptr [r10+1E6h]
 * 000000014040B5E2: mov     [rdx+80h], rax
 * 000000014040B5E9: test    byte ptr [r10+3], 3
 * 000000014040B5EE: mov     [rbp+0E8h+var_68], 0
 * 000000014040B5F7: jz      short loc_14040B5FE
 * 000000014040B5F9: call    KiSaveDebugRegisterState
 * 000000014040B5FE: cld
 * 000000014040B5FF: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040B603: ldmxcsr dword ptr gs:180h
 * 000000014040B60C: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040B610: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040B614: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040B618: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040B61C: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040B620: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040B624: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040B62B: jz      short loc_14040B639
 * 000000014040B62D: test    [rbp+0E8h+arg_0], 1
 * 000000014040B634: jz      short loc_14040B639
 * 000000014040B636: stac
 * 000000014040B639: test    [rbp+0E8h+arg_8], 200h
 * 000000014040B643: jz      short loc_14040B646
 * 000000014040B645: sti
 * 000000014040B646: mov     ecx, 80000003h
 * 000000014040B64B: mov     edx, 1
 * 000000014040B650: mov     r8, [rbp+0E8h]
 * 000000014040B657: dec     r8
 * 000000014040B65A: mov     r9d, 0
 * 000000014040B660: call    KiExceptionDispatch
 * 000000014040B665: nop
 * 000000014040B666: retn
 */
