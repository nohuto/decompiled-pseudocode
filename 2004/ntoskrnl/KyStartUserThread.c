/*
 * XREFs of KyStartUserThread @ 0x1403FE740
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x1403FE740 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x1403FEA10 (KxStartUserThread.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x1403FE740
 * Reason: Hex-Rays returned no pseudocode for 0x1403FE740
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FE740: sub     rsp, 8
 * 00000001403FE744: push    rbp
 * 00000001403FE745: sub     rsp, 158h
 * 00000001403FE74C: lea     rbp, [rsp+80h]
 * 00000001403FE754: mov     [rbp+0E8h+var_13D], 1
 * 00000001403FE758: mov     [rbp+0E8h+var_138], rax
 * 00000001403FE75C: mov     [rbp+0E8h+var_130], rcx
 * 00000001403FE760: mov     [rbp+0E8h+var_128], rdx
 * 00000001403FE764: mov     [rbp+0E8h+var_120], r8
 * 00000001403FE768: mov     [rbp+0E8h+var_118], r9
 * 00000001403FE76C: mov     [rbp+0E8h+var_110], r10
 * 00000001403FE770: mov     [rbp+0E8h+var_108], r11
 * 00000001403FE774: test    [rbp+0E8h+arg_0], 1
 * 00000001403FE77B: jnz     short loc_1403FE7AA
 * 00000001403FE77D: lfence
 * 00000001403FE780: test    byte ptr gs:278h, 1
 * 00000001403FE789: jnz     short loc_1403FE793
 * 00000001403FE78B: lfence
 * 00000001403FE78E: jmp     loc_1403FE9A6
 * 00000001403FE793: movzx   eax, byte ptr gs:27Ah
 * 00000001403FE79C: mov     ecx, 48h ; 'H'
 * 00000001403FE7A1: xor     edx, edx
 * 00000001403FE7A3: wrmsr
 * 00000001403FE7A5: jmp     loc_1403FE9A6
 * 00000001403FE7AA: test    cs:KiKvaShadow, 1
 * 00000001403FE7B1: jnz     short loc_1403FE7B6
 * 00000001403FE7B3: swapgs
 * 00000001403FE7B6: lfence
 * 00000001403FE7B9: mov     r10, gs:188h
 * 00000001403FE7C2: mov     rcx, gs:188h
 * 00000001403FE7CB: mov     rcx, [rcx+220h]
 * 00000001403FE7D2: mov     rcx, [rcx+9E0h]
 * 00000001403FE7D9: mov     gs:270h, rcx
 * 00000001403FE7E2: mov     cl, gs:850h
 * 00000001403FE7EA: mov     gs:851h, cl
 * 00000001403FE7F2: mov     cl, gs:278h
 * 00000001403FE7FA: mov     gs:852h, cl
 * 00000001403FE802: movzx   eax, byte ptr gs:27Bh
 * 00000001403FE80B: cmp     gs:27Ah, al
 * 00000001403FE813: jz      short loc_1403FE826
 * 00000001403FE815: mov     gs:27Ah, al
 * 00000001403FE81D: mov     ecx, 48h ; 'H'
 * 00000001403FE822: xor     edx, edx
 * 00000001403FE824: wrmsr
 * 00000001403FE826: movzx   edx, byte ptr gs:278h
 * 00000001403FE82F: test    edx, 8
 * 00000001403FE835: jz      short loc_1403FE84A
 * 00000001403FE837: mov     eax, 1
 * 00000001403FE83C: xor     edx, edx
 * 00000001403FE83E: mov     ecx, 49h ; 'I'
 * 00000001403FE843: wrmsr
 * 00000001403FE845: jmp     loc_1403FE988
 * 00000001403FE84A: test    edx, 2
 * 00000001403FE850: jz      loc_1403FE985
 * 00000001403FE856: test    byte ptr gs:279h, 4
 * 00000001403FE85F: jnz     loc_1403FE985
 * 00000001403FE865: call    loc_1403FE978
 * 00000001403FE86A: add     rsp, 8
 * 00000001403FE86E: call    loc_1403FE981
 * 00000001403FE873: add     rsp, 8
 * 00000001403FE877: call    loc_1403FE86A
 * 00000001403FE87C: add     rsp, 8
 * 00000001403FE880: call    loc_1403FE873
 * 00000001403FE885: add     rsp, 8
 * 00000001403FE889: call    loc_1403FE87C
 * 00000001403FE88E: add     rsp, 8
 * 00000001403FE892: call    loc_1403FE885
 * 00000001403FE897: add     rsp, 8
 * 00000001403FE89B: call    loc_1403FE88E
 * 00000001403FE8A0: add     rsp, 8
 * 00000001403FE8A4: call    loc_1403FE897
 * 00000001403FE8A9: add     rsp, 8
 * 00000001403FE8AD: call    loc_1403FE8A0
 * 00000001403FE8B2: add     rsp, 8
 * 00000001403FE8B6: call    loc_1403FE8A9
 * 00000001403FE8BB: add     rsp, 8
 * 00000001403FE8BF: call    loc_1403FE8B2
 * 00000001403FE8C4: add     rsp, 8
 * 00000001403FE8C8: call    loc_1403FE8BB
 * 00000001403FE8CD: add     rsp, 8
 * 00000001403FE8D1: call    loc_1403FE8C4
 * 00000001403FE8D6: add     rsp, 8
 * 00000001403FE8DA: call    loc_1403FE8CD
 * 00000001403FE8DF: add     rsp, 8
 * 00000001403FE8E3: call    loc_1403FE8D6
 * 00000001403FE8E8: add     rsp, 8
 * 00000001403FE8EC: call    loc_1403FE8DF
 * 00000001403FE8F1: add     rsp, 8
 * 00000001403FE8F5: call    loc_1403FE8E8
 * 00000001403FE8FA: add     rsp, 8
 * 00000001403FE8FE: call    loc_1403FE8F1
 * 00000001403FE903: add     rsp, 8
 * 00000001403FE907: call    loc_1403FE8FA
 * 00000001403FE90C: add     rsp, 8
 * 00000001403FE910: call    loc_1403FE903
 * 00000001403FE915: add     rsp, 8
 * 00000001403FE919: call    loc_1403FE90C
 * 00000001403FE91E: add     rsp, 8
 * 00000001403FE922: call    loc_1403FE915
 * 00000001403FE927: add     rsp, 8
 * 00000001403FE92B: call    loc_1403FE91E
 * 00000001403FE930: add     rsp, 8
 * 00000001403FE934: call    loc_1403FE927
 * 00000001403FE939: add     rsp, 8
 * 00000001403FE93D: call    loc_1403FE930
 * 00000001403FE942: add     rsp, 8
 * 00000001403FE946: call    loc_1403FE939
 * 00000001403FE94B: add     rsp, 8
 * 00000001403FE94F: call    loc_1403FE942
 * 00000001403FE954: add     rsp, 8
 * 00000001403FE958: call    loc_1403FE94B
 * 00000001403FE95D: add     rsp, 8
 * 00000001403FE961: call    loc_1403FE954
 * 00000001403FE966: add     rsp, 8
 * 00000001403FE96A: call    loc_1403FE95D
 * 00000001403FE96F: add     rsp, 8
 * 00000001403FE973: call    loc_1403FE966
 * 00000001403FE978: add     rsp, 8
 * 00000001403FE97C: call    loc_1403FE96F
 * 00000001403FE981: add     rsp, 8
 * 00000001403FE985: lfence
 * 00000001403FE988: mov     byte ptr gs:853h, 0
 * 00000001403FE991: test    byte ptr [r10+3], 3
 * 00000001403FE996: mov     [rbp+0E8h+var_68], 0
 * 00000001403FE99F: jz      short loc_1403FE9A6
 * 00000001403FE9A1: call    KiSaveDebugRegisterState
 * 00000001403FE9A6: cld
 * 00000001403FE9A7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001403FE9AB: ldmxcsr dword ptr gs:180h
 * 00000001403FE9B4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001403FE9B8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001403FE9BC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001403FE9C0: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001403FE9C4: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001403FE9C8: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001403FE9CC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FE9D3: jz      short loc_1403FE9E1
 * 00000001403FE9D5: test    [rbp+0E8h+arg_0], 1
 * 00000001403FE9DC: jz      short loc_1403FE9E1
 * 00000001403FE9DE: stac
 * 00000001403FE9E1: test    [rbp+0E8h+arg_8], 200h
 * 00000001403FE9EB: jz      short loc_1403FE9EE
 * 00000001403FE9ED: sti
 * 00000001403FE9EE: call    KxStartUserThread
 * 00000001403FE9F3: nop     word ptr [rax+rax+00000000h]
 * 00000001403FEA00: nop
 * 00000001403FEA01: retn
 */
