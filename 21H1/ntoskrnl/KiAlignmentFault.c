/*
 * XREFs of KiAlignmentFault @ 0x140404600
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140A11940 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x140404600 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x140407D80 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x140404600
 * Reason: Hex-Rays returned no pseudocode for 0x140404600
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140404600: push    rbp
 * 0000000140404601: sub     rsp, 158h
 * 0000000140404608: lea     rbp, [rsp+80h]
 * 0000000140404610: mov     [rbp+0D8h+var_12D], 1
 * 0000000140404614: mov     [rbp+0D8h+var_128], rax
 * 0000000140404618: mov     [rbp+0D8h+var_120], rcx
 * 000000014040461C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140404620: mov     [rbp+0D8h+var_110], r8
 * 0000000140404624: mov     [rbp+0D8h+var_108], r9
 * 0000000140404628: mov     [rbp+0D8h+var_100], r10
 * 000000014040462C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140404630: test    [rbp+0D8h+arg_8], 1
 * 0000000140404637: jnz     short loc_140404666
 * 0000000140404639: lfence
 * 000000014040463C: test    byte ptr gs:278h, 1
 * 0000000140404645: jnz     short loc_14040464F
 * 0000000140404647: lfence
 * 000000014040464A: jmp     loc_1404048AB
 * 000000014040464F: movzx   eax, byte ptr gs:27Ah
 * 0000000140404658: mov     ecx, 48h ; 'H'
 * 000000014040465D: xor     edx, edx
 * 000000014040465F: wrmsr
 * 0000000140404661: jmp     loc_1404048AB
 * 0000000140404666: test    cs:KiKvaShadow, 1
 * 000000014040466D: jnz     short loc_140404672
 * 000000014040466F: swapgs
 * 0000000140404672: lfence
 * 0000000140404675: mov     r10, gs:188h
 * 000000014040467E: mov     rcx, gs:188h
 * 0000000140404687: mov     rcx, [rcx+220h]
 * 000000014040468E: mov     rcx, [rcx+9E0h]
 * 0000000140404695: mov     gs:270h, rcx
 * 000000014040469E: mov     cl, gs:850h
 * 00000001404046A6: mov     gs:851h, cl
 * 00000001404046AE: mov     cl, gs:278h
 * 00000001404046B6: mov     gs:852h, cl
 * 00000001404046BE: movzx   eax, byte ptr gs:27Bh
 * 00000001404046C7: cmp     gs:27Ah, al
 * 00000001404046CF: jz      short loc_1404046E2
 * 00000001404046D1: mov     gs:27Ah, al
 * 00000001404046D9: mov     ecx, 48h ; 'H'
 * 00000001404046DE: xor     edx, edx
 * 00000001404046E0: wrmsr
 * 00000001404046E2: movzx   edx, byte ptr gs:278h
 * 00000001404046EB: test    edx, 8
 * 00000001404046F1: jz      short loc_140404706
 * 00000001404046F3: mov     eax, 1
 * 00000001404046F8: xor     edx, edx
 * 00000001404046FA: mov     ecx, 49h ; 'I'
 * 00000001404046FF: wrmsr
 * 0000000140404701: jmp     loc_140404844
 * 0000000140404706: test    edx, 2
 * 000000014040470C: jz      loc_140404841
 * 0000000140404712: test    byte ptr gs:279h, 4
 * 000000014040471B: jnz     loc_140404841
 * 0000000140404721: call    loc_140404834
 * 0000000140404726: add     rsp, 8
 * 000000014040472A: call    loc_14040483D
 * 000000014040472F: add     rsp, 8
 * 0000000140404733: call    loc_140404726
 * 0000000140404738: add     rsp, 8
 * 000000014040473C: call    loc_14040472F
 * 0000000140404741: add     rsp, 8
 * 0000000140404745: call    loc_140404738
 * 000000014040474A: add     rsp, 8
 * 000000014040474E: call    loc_140404741
 * 0000000140404753: add     rsp, 8
 * 0000000140404757: call    loc_14040474A
 * 000000014040475C: add     rsp, 8
 * 0000000140404760: call    loc_140404753
 * 0000000140404765: add     rsp, 8
 * 0000000140404769: call    loc_14040475C
 * 000000014040476E: add     rsp, 8
 * 0000000140404772: call    loc_140404765
 * 0000000140404777: add     rsp, 8
 * 000000014040477B: call    loc_14040476E
 * 0000000140404780: add     rsp, 8
 * 0000000140404784: call    loc_140404777
 * 0000000140404789: add     rsp, 8
 * 000000014040478D: call    loc_140404780
 * 0000000140404792: add     rsp, 8
 * 0000000140404796: call    loc_140404789
 * 000000014040479B: add     rsp, 8
 * 000000014040479F: call    loc_140404792
 * 00000001404047A4: add     rsp, 8
 * 00000001404047A8: call    loc_14040479B
 * 00000001404047AD: add     rsp, 8
 * 00000001404047B1: call    loc_1404047A4
 * 00000001404047B6: add     rsp, 8
 * 00000001404047BA: call    loc_1404047AD
 * 00000001404047BF: add     rsp, 8
 * 00000001404047C3: call    loc_1404047B6
 * 00000001404047C8: add     rsp, 8
 * 00000001404047CC: call    loc_1404047BF
 * 00000001404047D1: add     rsp, 8
 * 00000001404047D5: call    loc_1404047C8
 * 00000001404047DA: add     rsp, 8
 * 00000001404047DE: call    loc_1404047D1
 * 00000001404047E3: add     rsp, 8
 * 00000001404047E7: call    loc_1404047DA
 * 00000001404047EC: add     rsp, 8
 * 00000001404047F0: call    loc_1404047E3
 * 00000001404047F5: add     rsp, 8
 * 00000001404047F9: call    loc_1404047EC
 * 00000001404047FE: add     rsp, 8
 * 0000000140404802: call    loc_1404047F5
 * 0000000140404807: add     rsp, 8
 * 000000014040480B: call    loc_1404047FE
 * 0000000140404810: add     rsp, 8
 * 0000000140404814: call    loc_140404807
 * 0000000140404819: add     rsp, 8
 * 000000014040481D: call    loc_140404810
 * 0000000140404822: add     rsp, 8
 * 0000000140404826: call    loc_140404819
 * 000000014040482B: add     rsp, 8
 * 000000014040482F: call    loc_140404822
 * 0000000140404834: add     rsp, 8
 * 0000000140404838: call    loc_14040482B
 * 000000014040483D: add     rsp, 8
 * 0000000140404841: lfence
 * 0000000140404844: mov     byte ptr gs:853h, 0
 * 000000014040484D: test    byte ptr [r10+3], 80h
 * 0000000140404852: jz      short loc_140404896
 * 0000000140404854: mov     ecx, 0C0000102h
 * 0000000140404859: rdmsr
 * 000000014040485B: shl     rdx, 20h
 * 000000014040485F: or      rax, rdx
 * 0000000140404862: cmp     rax, cs:MmUserProbeAddress
 * 0000000140404869: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140404871: cmp     [r10+0F0h], rax
 * 0000000140404878: jz      short loc_140404896
 * 000000014040487A: mov     rdx, [r10+1F0h]
 * 0000000140404881: bts     dword ptr [r10+74h], 8
 * 0000000140404887: dec     word ptr [r10+1E6h]
 * 000000014040488F: mov     [rdx+80h], rax
 * 0000000140404896: test    byte ptr [r10+3], 3
 * 000000014040489B: mov     [rbp+0D8h+var_58], 0
 * 00000001404048A4: jz      short loc_1404048AB
 * 00000001404048A6: call    KiSaveDebugRegisterState
 * 00000001404048AB: cld
 * 00000001404048AC: stmxcsr [rbp+0D8h+var_12C]
 * 00000001404048B0: ldmxcsr dword ptr gs:180h
 * 00000001404048B9: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001404048BD: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001404048C1: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001404048C5: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001404048C9: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001404048CD: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001404048D1: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404048D8: jz      short loc_1404048E6
 * 00000001404048DA: test    [rbp+0D8h+arg_8], 1
 * 00000001404048E1: jz      short loc_1404048E6
 * 00000001404048E3: stac
 * 00000001404048E6: mov     eax, [rbp+0E0h]
 * 00000001404048EC: test    [rbp+0D8h+arg_10], 200h
 * 00000001404048F6: jz      short loc_1404048F9
 * 00000001404048F8: sti
 * 00000001404048F9: mov     ecx, 80000002h
 * 00000001404048FE: xor     edx, edx
 * 0000000140404900: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140404907: call    KiExceptionDispatch
 * 000000014040490C: nop
 * 000000014040490D: retn
 */
