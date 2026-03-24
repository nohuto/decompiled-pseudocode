/*
 * XREFs of __guard_retpoline_exit @ 0x140A1A560
 * Callers:
 *     KeExitRetpoline @ 0x1403599C8 (KeExitRetpoline.c)
 *     __guard_retpoline_exit_indirect_rax @ 0x140A1A3A0 (__guard_retpoline_exit_indirect_rax.c)
 *     __guard_retpoline_import_r10 @ 0x140A1A420 (__guard_retpoline_import_r10.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140A1A560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit @ 0x140A1A560
 * Reason: Hex-Rays returned no pseudocode for 0x140A1A560
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A1A560: pushfq
 * 0000000140A1A562: sub     rsp, 18h
 * 0000000140A1A566: mov     [rsp+20h+var_20], rax
 * 0000000140A1A56A: mov     [rsp+20h+var_18], rcx
 * 0000000140A1A56F: mov     [rsp+20h+var_10], rdx
 * 0000000140A1A574: cli
 * 0000000140A1A575: movzx   eax, byte ptr gs:851h
 * 0000000140A1A57E: cmp     gs:27Ah, al
 * 0000000140A1A586: jz      short loc_140A1A599
 * 0000000140A1A588: mov     gs:27Ah, al
 * 0000000140A1A590: mov     ecx, 48h ; 'H'
 * 0000000140A1A595: xor     edx, edx
 * 0000000140A1A597: wrmsr
 * 0000000140A1A599: movzx   edx, byte ptr gs:852h
 * 0000000140A1A5A2: test    edx, 10h
 * 0000000140A1A5A8: jz      short loc_140A1A5C1
 * 0000000140A1A5AA: mov     eax, 1
 * 0000000140A1A5AF: xor     edx, edx
 * 0000000140A1A5B1: mov     ecx, 49h ; 'I'
 * 0000000140A1A5B6: wrmsr
 * 0000000140A1A5B8: movzx   edx, byte ptr gs:852h
 * 0000000140A1A5C1: test    edx, 40h
 * 0000000140A1A5C7: jz      loc_140A1A6F2
 * 0000000140A1A5CD: call    loc_140A1A6E0
 * 0000000140A1A5D2: add     rsp, 8
 * 0000000140A1A5D6: call    loc_140A1A6E9
 * 0000000140A1A5DB: add     rsp, 8
 * 0000000140A1A5DF: call    loc_140A1A5D2
 * 0000000140A1A5E4: add     rsp, 8
 * 0000000140A1A5E8: call    loc_140A1A5DB
 * 0000000140A1A5ED: add     rsp, 8
 * 0000000140A1A5F1: call    loc_140A1A5E4
 * 0000000140A1A5F6: add     rsp, 8
 * 0000000140A1A5FA: call    loc_140A1A5ED
 * 0000000140A1A5FF: add     rsp, 8
 * 0000000140A1A603: call    loc_140A1A5F6
 * 0000000140A1A608: add     rsp, 8
 * 0000000140A1A60C: call    loc_140A1A5FF
 * 0000000140A1A611: add     rsp, 8
 * 0000000140A1A615: call    loc_140A1A608
 * 0000000140A1A61A: add     rsp, 8
 * 0000000140A1A61E: call    loc_140A1A611
 * 0000000140A1A623: add     rsp, 8
 * 0000000140A1A627: call    loc_140A1A61A
 * 0000000140A1A62C: add     rsp, 8
 * 0000000140A1A630: call    loc_140A1A623
 * 0000000140A1A635: add     rsp, 8
 * 0000000140A1A639: call    loc_140A1A62C
 * 0000000140A1A63E: add     rsp, 8
 * 0000000140A1A642: call    loc_140A1A635
 * 0000000140A1A647: add     rsp, 8
 * 0000000140A1A64B: call    loc_140A1A63E
 * 0000000140A1A650: add     rsp, 8
 * 0000000140A1A654: call    loc_140A1A647
 * 0000000140A1A659: add     rsp, 8
 * 0000000140A1A65D: call    loc_140A1A650
 * 0000000140A1A662: add     rsp, 8
 * 0000000140A1A666: call    loc_140A1A659
 * 0000000140A1A66B: add     rsp, 8
 * 0000000140A1A66F: call    loc_140A1A662
 * 0000000140A1A674: add     rsp, 8
 * 0000000140A1A678: call    loc_140A1A66B
 * 0000000140A1A67D: add     rsp, 8
 * 0000000140A1A681: call    loc_140A1A674
 * 0000000140A1A686: add     rsp, 8
 * 0000000140A1A68A: call    loc_140A1A67D
 * 0000000140A1A68F: add     rsp, 8
 * 0000000140A1A693: call    loc_140A1A686
 * 0000000140A1A698: add     rsp, 8
 * 0000000140A1A69C: call    loc_140A1A68F
 * 0000000140A1A6A1: add     rsp, 8
 * 0000000140A1A6A5: call    loc_140A1A698
 * 0000000140A1A6AA: add     rsp, 8
 * 0000000140A1A6AE: call    loc_140A1A6A1
 * 0000000140A1A6B3: add     rsp, 8
 * 0000000140A1A6B7: call    loc_140A1A6AA
 * 0000000140A1A6BC: add     rsp, 8
 * 0000000140A1A6C0: call    loc_140A1A6B3
 * 0000000140A1A6C5: add     rsp, 8
 * 0000000140A1A6C9: call    loc_140A1A6BC
 * 0000000140A1A6CE: add     rsp, 8
 * 0000000140A1A6D2: call    loc_140A1A6C5
 * 0000000140A1A6D7: add     rsp, 8
 * 0000000140A1A6DB: call    loc_140A1A6CE
 * 0000000140A1A6E0: add     rsp, 8
 * 0000000140A1A6E4: call    loc_140A1A6D7
 * 0000000140A1A6E9: add     rsp, 8
 * 0000000140A1A6ED: mov     eax, 0DADAh
 * 0000000140A1A6F2: lfence
 * 0000000140A1A6F5: or      byte ptr gs:853h, 2
 * 0000000140A1A6FE: bt      [rsp-0E0h+arg_F0], 9
 * 0000000140A1A705: jnb     short loc_140A1A708
 * 0000000140A1A707: sti
 * 0000000140A1A708: mov     rax, [rsp-0E0h+arg_D8]
 * 0000000140A1A70C: mov     rcx, [rsp-0E0h+arg_E0]
 * 0000000140A1A711: mov     rdx, [rsp-0E0h+arg_E8]
 * 0000000140A1A716: add     rsp, 20h
 * 0000000140A1A71A: retn
 */
