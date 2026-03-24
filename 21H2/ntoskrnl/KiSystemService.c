/*
 * XREFs of KiSystemService @ 0x140411280
 * Callers:
 *     KiSystemServiceShadow @ 0x140A14EC0 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x140411280 (KiSystemService.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x140411280
 * Reason: Hex-Rays returned no pseudocode for 0x140411280
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140411280: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140411286: jz      KiSystemService32User
 * 000000014041128C: test    cs:KiKvaShadow, 1
 * 0000000140411293: jnz     short loc_140411298
 * 0000000140411295: swapgs
 * 0000000140411298: lfence
 * 000000014041129B: mov     rcx, r10
 * 000000014041129E: sub     rsp, 8
 * 00000001404112A2: push    rbp
 * 00000001404112A3: sub     rsp, 158h
 * 00000001404112AA: lea     rbp, [rsp+168h+var_E8]
 * 00000001404112B2: mov     [rbp+0C0h], rbx
 * 00000001404112B9: mov     [rbp+0C8h], rdi
 * 00000001404112C0: mov     [rbp+0D0h], rsi
 * 00000001404112C7: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404112CE: jz      short loc_1404112DC
 * 00000001404112D0: test    byte ptr [rbp+0F0h], 1
 * 00000001404112D7: jz      short loc_1404112DC
 * 00000001404112D9: stac
 * 00000001404112DC: mov     [rbp-50h], rax
 * 00000001404112E0: mov     [rbp-48h], rcx
 * 00000001404112E4: mov     [rbp-40h], rdx
 * 00000001404112E8: mov     rcx, gs:188h
 * 00000001404112F1: mov     rcx, [rcx+220h]
 * 00000001404112F8: mov     rcx, [rcx+9E0h]
 * 00000001404112FF: mov     gs:858h, rcx
 * 0000000140411308: mov     cx, gs:850h
 * 0000000140411311: mov     gs:852h, cx
 * 000000014041131A: mov     cx, gs:860h
 * 0000000140411323: mov     gs:854h, cx
 * 000000014041132C: movzx   eax, word ptr gs:866h
 * 0000000140411335: cmp     gs:864h, ax
 * 000000014041133E: jz      short loc_140411352
 * 0000000140411340: mov     gs:864h, ax
 * 0000000140411349: mov     ecx, 48h ; 'H'
 * 000000014041134E: xor     edx, edx
 * 0000000140411350: wrmsr
 * 0000000140411352: movzx   edx, word ptr gs:860h
 * 000000014041135B: test    edx, 8
 * 0000000140411361: jz      short loc_14041137A
 * 0000000140411363: mov     eax, 1
 * 0000000140411368: xor     edx, edx
 * 000000014041136A: mov     ecx, 49h ; 'I'
 * 000000014041136F: wrmsr
 * 0000000140411371: movzx   edx, word ptr gs:860h
 * 000000014041137A: test    edx, 2
 * 0000000140411380: jz      loc_1404114AB
 * 0000000140411386: call    loc_140411499
 * 000000014041138B: add     rsp, 8
 * 000000014041138F: call    loc_1404114A2
 * 0000000140411394: add     rsp, 8
 * 0000000140411398: call    loc_14041138B
 * 000000014041139D: add     rsp, 8
 * 00000001404113A1: call    loc_140411394
 * 00000001404113A6: add     rsp, 8
 * 00000001404113AA: call    loc_14041139D
 * 00000001404113AF: add     rsp, 8
 * 00000001404113B3: call    loc_1404113A6
 * 00000001404113B8: add     rsp, 8
 * 00000001404113BC: call    loc_1404113AF
 * 00000001404113C1: add     rsp, 8
 * 00000001404113C5: call    loc_1404113B8
 * 00000001404113CA: add     rsp, 8
 * 00000001404113CE: call    loc_1404113C1
 * 00000001404113D3: add     rsp, 8
 * 00000001404113D7: call    loc_1404113CA
 * 00000001404113DC: add     rsp, 8
 * 00000001404113E0: call    loc_1404113D3
 * 00000001404113E5: add     rsp, 8
 * 00000001404113E9: call    loc_1404113DC
 * 00000001404113EE: add     rsp, 8
 * 00000001404113F2: call    loc_1404113E5
 * 00000001404113F7: add     rsp, 8
 * 00000001404113FB: call    loc_1404113EE
 * 0000000140411400: add     rsp, 8
 * 0000000140411404: call    loc_1404113F7
 * 0000000140411409: add     rsp, 8
 * 000000014041140D: call    loc_140411400
 * 0000000140411412: add     rsp, 8
 * 0000000140411416: call    loc_140411409
 * 000000014041141B: add     rsp, 8
 * 000000014041141F: call    loc_140411412
 * 0000000140411424: add     rsp, 8
 * 0000000140411428: call    loc_14041141B
 * 000000014041142D: add     rsp, 8
 * 0000000140411431: call    loc_140411424
 * 0000000140411436: add     rsp, 8
 * 000000014041143A: call    loc_14041142D
 * 000000014041143F: add     rsp, 8
 * 0000000140411443: call    loc_140411436
 * 0000000140411448: add     rsp, 8
 * 000000014041144C: call    loc_14041143F
 * 0000000140411451: add     rsp, 8
 * 0000000140411455: call    loc_140411448
 * 000000014041145A: add     rsp, 8
 * 000000014041145E: call    loc_140411451
 * 0000000140411463: add     rsp, 8
 * 0000000140411467: call    loc_14041145A
 * 000000014041146C: add     rsp, 8
 * 0000000140411470: call    loc_140411463
 * 0000000140411475: add     rsp, 8
 * 0000000140411479: call    loc_14041146C
 * 000000014041147E: add     rsp, 8
 * 0000000140411482: call    loc_140411475
 * 0000000140411487: add     rsp, 8
 * 000000014041148B: call    loc_14041147E
 * 0000000140411490: add     rsp, 8
 * 0000000140411494: call    loc_140411487
 * 0000000140411499: add     rsp, 8
 * 000000014041149D: call    loc_140411490
 * 00000001404114A2: add     rsp, 8
 * 00000001404114A6: mov     eax, 0DADAh
 * 00000001404114AB: test    edx, 200h
 * 00000001404114B1: jz      short loc_1404114B8
 * 00000001404114B3: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404114B8: lfence
 * 00000001404114BB: mov     byte ptr gs:856h, 0
 * 00000001404114C4: jmp     KiSystemServiceUser
 * 00000001404114C9: retn
 */
