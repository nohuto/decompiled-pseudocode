/*
 * XREFs of KiSystemCall64Shadow @ 0x140A171C0
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall64Shadow @ 0x140A171C0 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x140A171C0
 * Reason: Hex-Rays returned no pseudocode for 0x140A171C0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A171C0: swapgs
 * 0000000140A171C3: mov     gs:9010h, rsp
 * 0000000140A171CC: mov     rsp, gs:9000h
 * 0000000140A171D5: bt      dword ptr gs:9018h, 1
 * 0000000140A171DF: jb      short loc_140A171E4
 * 0000000140A171E1: mov     cr3, rsp
 * 0000000140A171E4: mov     rsp, gs:9008h
 * 0000000140A171ED: push    2Bh ; '+'
 * 0000000140A171EF: push    qword ptr gs:9010h
 * 0000000140A171F7: push    r11
 * 0000000140A171F9: push    33h ; '3'
 * 0000000140A171FB: push    rcx
 * 0000000140A171FC: mov     rcx, r10
 * 0000000140A171FF: sub     rsp, 8
 * 0000000140A17203: push    rbp
 * 0000000140A17204: sub     rsp, 158h
 * 0000000140A1720B: lea     rbp, [rsp+190h+var_110]
 * 0000000140A17213: mov     [rbp+0C0h], rbx
 * 0000000140A1721A: mov     [rbp+0C8h], rdi
 * 0000000140A17221: mov     [rbp+0D0h], rsi
 * 0000000140A17228: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140A1722F: jz      short loc_140A1723D
 * 0000000140A17231: test    byte ptr [rbp+0F0h], 1
 * 0000000140A17238: jz      short loc_140A1723D
 * 0000000140A1723A: stac
 * 0000000140A1723D: mov     [rbp-50h], rax
 * 0000000140A17241: mov     [rbp-48h], rcx
 * 0000000140A17245: mov     [rbp-40h], rdx
 * 0000000140A17249: mov     rcx, gs:188h
 * 0000000140A17252: mov     rcx, [rcx+220h]
 * 0000000140A17259: mov     rcx, [rcx+9E0h]
 * 0000000140A17260: mov     gs:858h, rcx
 * 0000000140A17269: mov     cx, gs:850h
 * 0000000140A17272: mov     gs:852h, cx
 * 0000000140A1727B: mov     cx, gs:860h
 * 0000000140A17284: mov     gs:854h, cx
 * 0000000140A1728D: movzx   eax, word ptr gs:866h
 * 0000000140A17296: cmp     gs:864h, ax
 * 0000000140A1729F: jz      short loc_140A172B3
 * 0000000140A172A1: mov     gs:864h, ax
 * 0000000140A172AA: mov     ecx, 48h ; 'H'
 * 0000000140A172AF: xor     edx, edx
 * 0000000140A172B1: wrmsr
 * 0000000140A172B3: movzx   edx, word ptr gs:860h
 * 0000000140A172BC: test    edx, 8
 * 0000000140A172C2: jz      short loc_140A172DB
 * 0000000140A172C4: mov     eax, 1
 * 0000000140A172C9: xor     edx, edx
 * 0000000140A172CB: mov     ecx, 49h ; 'I'
 * 0000000140A172D0: wrmsr
 * 0000000140A172D2: movzx   edx, word ptr gs:860h
 * 0000000140A172DB: test    edx, 2
 * 0000000140A172E1: jz      loc_140A1740C
 * 0000000140A172E7: call    loc_140A173FA
 * 0000000140A172EC: add     rsp, 8
 * 0000000140A172F0: call    loc_140A17403
 * 0000000140A172F5: add     rsp, 8
 * 0000000140A172F9: call    loc_140A172EC
 * 0000000140A172FE: add     rsp, 8
 * 0000000140A17302: call    loc_140A172F5
 * 0000000140A17307: add     rsp, 8
 * 0000000140A1730B: call    loc_140A172FE
 * 0000000140A17310: add     rsp, 8
 * 0000000140A17314: call    loc_140A17307
 * 0000000140A17319: add     rsp, 8
 * 0000000140A1731D: call    loc_140A17310
 * 0000000140A17322: add     rsp, 8
 * 0000000140A17326: call    loc_140A17319
 * 0000000140A1732B: add     rsp, 8
 * 0000000140A1732F: call    loc_140A17322
 * 0000000140A17334: add     rsp, 8
 * 0000000140A17338: call    loc_140A1732B
 * 0000000140A1733D: add     rsp, 8
 * 0000000140A17341: call    loc_140A17334
 * 0000000140A17346: add     rsp, 8
 * 0000000140A1734A: call    loc_140A1733D
 * 0000000140A1734F: add     rsp, 8
 * 0000000140A17353: call    loc_140A17346
 * 0000000140A17358: add     rsp, 8
 * 0000000140A1735C: call    loc_140A1734F
 * 0000000140A17361: add     rsp, 8
 * 0000000140A17365: call    loc_140A17358
 * 0000000140A1736A: add     rsp, 8
 * 0000000140A1736E: call    loc_140A17361
 * 0000000140A17373: add     rsp, 8
 * 0000000140A17377: call    loc_140A1736A
 * 0000000140A1737C: add     rsp, 8
 * 0000000140A17380: call    loc_140A17373
 * 0000000140A17385: add     rsp, 8
 * 0000000140A17389: call    loc_140A1737C
 * 0000000140A1738E: add     rsp, 8
 * 0000000140A17392: call    loc_140A17385
 * 0000000140A17397: add     rsp, 8
 * 0000000140A1739B: call    loc_140A1738E
 * 0000000140A173A0: add     rsp, 8
 * 0000000140A173A4: call    loc_140A17397
 * 0000000140A173A9: add     rsp, 8
 * 0000000140A173AD: call    loc_140A173A0
 * 0000000140A173B2: add     rsp, 8
 * 0000000140A173B6: call    loc_140A173A9
 * 0000000140A173BB: add     rsp, 8
 * 0000000140A173BF: call    loc_140A173B2
 * 0000000140A173C4: add     rsp, 8
 * 0000000140A173C8: call    loc_140A173BB
 * 0000000140A173CD: add     rsp, 8
 * 0000000140A173D1: call    loc_140A173C4
 * 0000000140A173D6: add     rsp, 8
 * 0000000140A173DA: call    loc_140A173CD
 * 0000000140A173DF: add     rsp, 8
 * 0000000140A173E3: call    loc_140A173D6
 * 0000000140A173E8: add     rsp, 8
 * 0000000140A173EC: call    loc_140A173DF
 * 0000000140A173F1: add     rsp, 8
 * 0000000140A173F5: call    loc_140A173E8
 * 0000000140A173FA: add     rsp, 8
 * 0000000140A173FE: call    loc_140A173F1
 * 0000000140A17403: add     rsp, 8
 * 0000000140A17407: mov     eax, 0DADAh
 * 0000000140A1740C: test    edx, 200h
 * 0000000140A17412: jz      short loc_140A17419
 * 0000000140A17414: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140A17419: lfence
 * 0000000140A1741C: mov     byte ptr gs:856h, 0
 * 0000000140A17425: jmp     KiSystemServiceUser
 * 0000000140A1742A: retn
 */
