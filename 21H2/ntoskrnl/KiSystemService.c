/*
 * XREFs of KiSystemService @ 0x140411380
 * Callers:
 *     KiSystemServiceShadow @ 0x140A15EC0 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x140411380 (KiSystemService.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x140411380
 * Reason: Hex-Rays returned no pseudocode for 0x140411380
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140411380: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140411386: jz      KiSystemService32User
 * 000000014041138C: test    cs:KiKvaShadow, 1
 * 0000000140411393: jnz     short loc_140411398
 * 0000000140411395: swapgs
 * 0000000140411398: lfence
 * 000000014041139B: mov     rcx, r10
 * 000000014041139E: sub     rsp, 8
 * 00000001404113A2: push    rbp
 * 00000001404113A3: sub     rsp, 158h
 * 00000001404113AA: lea     rbp, [rsp+168h+var_E8]
 * 00000001404113B2: mov     [rbp+0C0h], rbx
 * 00000001404113B9: mov     [rbp+0C8h], rdi
 * 00000001404113C0: mov     [rbp+0D0h], rsi
 * 00000001404113C7: cld
 * 00000001404113C8: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404113CF: jz      short loc_1404113DD
 * 00000001404113D1: test    byte ptr [rbp+0F0h], 1
 * 00000001404113D8: jz      short loc_1404113DD
 * 00000001404113DA: stac
 * 00000001404113DD: mov     [rbp-50h], rax
 * 00000001404113E1: mov     [rbp-48h], rcx
 * 00000001404113E5: mov     [rbp-40h], rdx
 * 00000001404113E9: mov     rcx, gs:188h
 * 00000001404113F2: mov     rcx, [rcx+220h]
 * 00000001404113F9: mov     rcx, [rcx+9E0h]
 * 0000000140411400: mov     gs:858h, rcx
 * 0000000140411409: mov     cx, gs:850h
 * 0000000140411412: mov     gs:852h, cx
 * 000000014041141B: mov     cx, gs:860h
 * 0000000140411424: mov     gs:854h, cx
 * 000000014041142D: movzx   eax, word ptr gs:866h
 * 0000000140411436: cmp     gs:864h, ax
 * 000000014041143F: jz      short loc_140411453
 * 0000000140411441: mov     gs:864h, ax
 * 000000014041144A: mov     ecx, 48h ; 'H'
 * 000000014041144F: xor     edx, edx
 * 0000000140411451: wrmsr
 * 0000000140411453: movzx   edx, word ptr gs:860h
 * 000000014041145C: test    edx, 8
 * 0000000140411462: jz      short loc_14041147B
 * 0000000140411464: mov     eax, 1
 * 0000000140411469: xor     edx, edx
 * 000000014041146B: mov     ecx, 49h ; 'I'
 * 0000000140411470: wrmsr
 * 0000000140411472: movzx   edx, word ptr gs:860h
 * 000000014041147B: test    edx, 2
 * 0000000140411481: jz      loc_1404115AC
 * 0000000140411487: call    loc_14041159A
 * 000000014041148C: add     rsp, 8
 * 0000000140411490: call    loc_1404115A3
 * 0000000140411495: add     rsp, 8
 * 0000000140411499: call    loc_14041148C
 * 000000014041149E: add     rsp, 8
 * 00000001404114A2: call    loc_140411495
 * 00000001404114A7: add     rsp, 8
 * 00000001404114AB: call    loc_14041149E
 * 00000001404114B0: add     rsp, 8
 * 00000001404114B4: call    loc_1404114A7
 * 00000001404114B9: add     rsp, 8
 * 00000001404114BD: call    loc_1404114B0
 * 00000001404114C2: add     rsp, 8
 * 00000001404114C6: call    loc_1404114B9
 * 00000001404114CB: add     rsp, 8
 * 00000001404114CF: call    loc_1404114C2
 * 00000001404114D4: add     rsp, 8
 * 00000001404114D8: call    loc_1404114CB
 * 00000001404114DD: add     rsp, 8
 * 00000001404114E1: call    loc_1404114D4
 * 00000001404114E6: add     rsp, 8
 * 00000001404114EA: call    loc_1404114DD
 * 00000001404114EF: add     rsp, 8
 * 00000001404114F3: call    loc_1404114E6
 * 00000001404114F8: add     rsp, 8
 * 00000001404114FC: call    loc_1404114EF
 * 0000000140411501: add     rsp, 8
 * 0000000140411505: call    loc_1404114F8
 * 000000014041150A: add     rsp, 8
 * 000000014041150E: call    loc_140411501
 * 0000000140411513: add     rsp, 8
 * 0000000140411517: call    loc_14041150A
 * 000000014041151C: add     rsp, 8
 * 0000000140411520: call    loc_140411513
 * 0000000140411525: add     rsp, 8
 * 0000000140411529: call    loc_14041151C
 * 000000014041152E: add     rsp, 8
 * 0000000140411532: call    loc_140411525
 * 0000000140411537: add     rsp, 8
 * 000000014041153B: call    loc_14041152E
 * 0000000140411540: add     rsp, 8
 * 0000000140411544: call    loc_140411537
 * 0000000140411549: add     rsp, 8
 * 000000014041154D: call    loc_140411540
 * 0000000140411552: add     rsp, 8
 * 0000000140411556: call    loc_140411549
 * 000000014041155B: add     rsp, 8
 * 000000014041155F: call    loc_140411552
 * 0000000140411564: add     rsp, 8
 * 0000000140411568: call    loc_14041155B
 * 000000014041156D: add     rsp, 8
 * 0000000140411571: call    loc_140411564
 * 0000000140411576: add     rsp, 8
 * 000000014041157A: call    loc_14041156D
 * 000000014041157F: add     rsp, 8
 * 0000000140411583: call    loc_140411576
 * 0000000140411588: add     rsp, 8
 * 000000014041158C: call    loc_14041157F
 * 0000000140411591: add     rsp, 8
 * 0000000140411595: call    loc_140411588
 * 000000014041159A: add     rsp, 8
 * 000000014041159E: call    loc_140411591
 * 00000001404115A3: add     rsp, 8
 * 00000001404115A7: mov     eax, 0DADAh
 * 00000001404115AC: test    edx, 200h
 * 00000001404115B2: jz      short loc_1404115B9
 * 00000001404115B4: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404115B9: lfence
 * 00000001404115BC: mov     byte ptr gs:856h, 0
 * 00000001404115C5: jmp     KiSystemServiceUser
 * 00000001404115CA: retn
 */
