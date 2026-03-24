/*
 * XREFs of NtRaiseException @ 0x1403FC7E0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     NtRaiseException @ 0x1403FC7E0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140410EC0 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 *     KiRaiseException @ 0x1405203B0 (KiRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for NtRaiseException @ 0x1403FC7E0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FC7E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FC7E0: sub     rsp, 138h
 * 00000001403FC7E7: lea     rax, [rsp+138h+var_38]
 * 00000001403FC7EF: movaps  [rsp+138h+var_108], xmm6
 * 00000001403FC7F4: movaps  [rsp+138h+var_F8], xmm7
 * 00000001403FC7F9: movaps  [rsp+138h+var_E8], xmm8
 * 00000001403FC7FF: movaps  [rsp+138h+var_D8], xmm9
 * 00000001403FC805: movaps  [rsp+138h+var_C8], xmm10
 * 00000001403FC80B: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001403FC810: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001403FC815: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001403FC81A: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001403FC81F: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001403FC824: mov     [rax], rbx
 * 00000001403FC827: mov     [rax+8], rdi
 * 00000001403FC82B: mov     [rax+10h], rsi
 * 00000001403FC82F: mov     [rax+18h], r12
 * 00000001403FC833: mov     [rax+20h], r13
 * 00000001403FC837: mov     [rax+28h], r14
 * 00000001403FC83B: mov     [rax+30h], r15
 * 00000001403FC83F: mov     rax, [rbp+0E8h]
 * 00000001403FC846: mov     [rbp+50h], rax
 * 00000001403FC84A: mov     [rsp+138h+var_118], r8b
 * 00000001403FC84F: mov     r8, rsp
 * 00000001403FC852: lea     r9, [rbp-80h]
 * 00000001403FC856: call    KiRaiseException
 * 00000001403FC85B: test    eax, eax
 * 00000001403FC85D: jnz     loc_1403FCBBD
 * 00000001403FC863: test    byte ptr [rbp+0F0h], 1
 * 00000001403FC86A: jnz     short loc_1403FC88C
 * 00000001403FC86C: mov     rbx, gs:188h
 * 00000001403FC875: mov     rdx, [rbp+0B8h]
 * 00000001403FC87C: mov     [rbx+90h], rdx
 * 00000001403FC883: mov     dl, [rbp-58h]
 * 00000001403FC886: mov     [rbx+232h], dl
 * 00000001403FC88C: lea     rcx, [rsp+138h+var_38]
 * 00000001403FC894: movaps  xmm6, [rsp+138h+var_108]
 * 00000001403FC899: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001403FC89E: movaps  xmm8, [rsp+138h+var_E8]
 * 00000001403FC8A4: movaps  xmm9, [rsp+138h+var_D8]
 * 00000001403FC8AA: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001403FC8B0: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001403FC8B5: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001403FC8BA: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001403FC8BF: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001403FC8C4: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001403FC8C9: mov     rbx, [rcx]
 * 00000001403FC8CC: mov     rdi, [rcx+8]
 * 00000001403FC8D0: mov     rsi, [rcx+10h]
 * 00000001403FC8D4: mov     r12, [rcx+18h]
 * 00000001403FC8D8: mov     r13, [rcx+20h]
 * 00000001403FC8DC: mov     r14, [rcx+28h]
 * 00000001403FC8E0: mov     r15, [rcx+30h]
 * 00000001403FC8E4: cli
 * 00000001403FC8E5: test    byte ptr [rbp+0F0h], 1
 * 00000001403FC8EC: jz      loc_1403FCB72
 * 00000001403FC8F2: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FC8F9: jz      short loc_1403FC8FE
 * 00000001403FC8FB: stac
 * 00000001403FC8FE: mov     rcx, gs:188h
 * 00000001403FC907: test    byte ptr [rcx+0C2h], 3
 * 00000001403FC90E: jz      short loc_1403FC92B
 * 00000001403FC910: mov     ecx, 1
 * 00000001403FC915: mov     cr8, rcx
 * 00000001403FC919: sti
 * 00000001403FC91A: call    KiInitiateUserApc
 * 00000001403FC91F: cli
 * 00000001403FC920: mov     ecx, 0
 * 00000001403FC925: mov     cr8, rcx
 * 00000001403FC929: jmp     short loc_1403FC8FE
 * 00000001403FC92B: test    byte ptr gs:27Eh, 2
 * 00000001403FC934: jz      short loc_1403FC93D
 * 00000001403FC936: xor     ecx, ecx
 * 00000001403FC938: call    KiUpdateStibpPairing
 * 00000001403FC93D: mov     rcx, gs:188h
 * 00000001403FC946: test    dword ptr [rcx], 8000000h
 * 00000001403FC94C: jz      short loc_1403FC953
 * 00000001403FC94E: call    KiRestoreSetContextState
 * 00000001403FC953: mov     rcx, gs:188h
 * 00000001403FC95C: test    dword ptr [rcx], 40010000h
 * 00000001403FC962: jz      short loc_1403FC989
 * 00000001403FC964: test    byte ptr [rcx+2], 1
 * 00000001403FC968: jz      short loc_1403FC978
 * 00000001403FC96A: call    KiCopyCounters
 * 00000001403FC96F: mov     rcx, gs:188h
 * 00000001403FC978: test    byte ptr [rcx+3], 40h
 * 00000001403FC97C: jz      short loc_1403FC989
 * 00000001403FC97E: lea     rsp, [rbp-80h]
 * 00000001403FC982: mov     cl, 1
 * 00000001403FC984: call    KiUmsExit
 * 00000001403FC989: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FC98D: cmp     word ptr [rbp+80h], 0
 * 00000001403FC995: jz      short loc_1403FC99C
 * 00000001403FC997: call    KiRestoreDebugRegisterState
 * 00000001403FC99C: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FC9A0: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FC9A4: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FC9A8: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FC9AC: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FC9B0: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FC9B4: mov     r11, [rbp-20h]
 * 00000001403FC9B8: mov     r10, [rbp-28h]
 * 00000001403FC9BC: mov     r9, [rbp-30h]
 * 00000001403FC9C0: mov     r8, [rbp-38h]
 * 00000001403FC9C4: mov     byte ptr gs:853h, 0
 * 00000001403FC9CD: movzx   eax, byte ptr gs:27Dh
 * 00000001403FC9D6: cmp     gs:27Ah, al
 * 00000001403FC9DE: jz      short loc_1403FC9F1
 * 00000001403FC9E0: mov     gs:27Ah, al
 * 00000001403FC9E8: mov     ecx, 48h ; 'H'
 * 00000001403FC9ED: xor     edx, edx
 * 00000001403FC9EF: wrmsr
 * 00000001403FC9F1: btr     word ptr gs:278h, 2
 * 00000001403FC9FC: jnb     short loc_1403FCA0C
 * 00000001403FC9FE: mov     eax, 1
 * 00000001403FCA03: xor     edx, edx
 * 00000001403FCA05: mov     ecx, 49h ; 'I'
 * 00000001403FCA0A: wrmsr
 * 00000001403FCA0C: btr     word ptr gs:278h, 5
 * 00000001403FCA17: jnb     loc_1403FCB42
 * 00000001403FCA1D: call    loc_1403FCB30
 * 00000001403FCA22: add     rsp, 8
 * 00000001403FCA26: call    loc_1403FCB39
 * 00000001403FCA2B: add     rsp, 8
 * 00000001403FCA2F: call    loc_1403FCA22
 * 00000001403FCA34: add     rsp, 8
 * 00000001403FCA38: call    loc_1403FCA2B
 * 00000001403FCA3D: add     rsp, 8
 * 00000001403FCA41: call    loc_1403FCA34
 * 00000001403FCA46: add     rsp, 8
 * 00000001403FCA4A: call    loc_1403FCA3D
 * 00000001403FCA4F: add     rsp, 8
 * 00000001403FCA53: call    loc_1403FCA46
 * 00000001403FCA58: add     rsp, 8
 * 00000001403FCA5C: call    loc_1403FCA4F
 * 00000001403FCA61: add     rsp, 8
 * 00000001403FCA65: call    loc_1403FCA58
 * 00000001403FCA6A: add     rsp, 8
 * 00000001403FCA6E: call    loc_1403FCA61
 * 00000001403FCA73: add     rsp, 8
 * 00000001403FCA77: call    loc_1403FCA6A
 * 00000001403FCA7C: add     rsp, 8
 * 00000001403FCA80: call    loc_1403FCA73
 * 00000001403FCA85: add     rsp, 8
 * 00000001403FCA89: call    loc_1403FCA7C
 * 00000001403FCA8E: add     rsp, 8
 * 00000001403FCA92: call    loc_1403FCA85
 * 00000001403FCA97: add     rsp, 8
 * 00000001403FCA9B: call    loc_1403FCA8E
 * 00000001403FCAA0: add     rsp, 8
 * 00000001403FCAA4: call    loc_1403FCA97
 * 00000001403FCAA9: add     rsp, 8
 * 00000001403FCAAD: call    loc_1403FCAA0
 * 00000001403FCAB2: add     rsp, 8
 * 00000001403FCAB6: call    loc_1403FCAA9
 * 00000001403FCABB: add     rsp, 8
 * 00000001403FCABF: call    loc_1403FCAB2
 * 00000001403FCAC4: add     rsp, 8
 * 00000001403FCAC8: call    loc_1403FCABB
 * 00000001403FCACD: add     rsp, 8
 * 00000001403FCAD1: call    loc_1403FCAC4
 * 00000001403FCAD6: add     rsp, 8
 * 00000001403FCADA: call    loc_1403FCACD
 * 00000001403FCADF: add     rsp, 8
 * 00000001403FCAE3: call    loc_1403FCAD6
 * 00000001403FCAE8: add     rsp, 8
 * 00000001403FCAEC: call    loc_1403FCADF
 * 00000001403FCAF1: add     rsp, 8
 * 00000001403FCAF5: call    loc_1403FCAE8
 * 00000001403FCAFA: add     rsp, 8
 * 00000001403FCAFE: call    loc_1403FCAF1
 * 00000001403FCB03: add     rsp, 8
 * 00000001403FCB07: call    loc_1403FCAFA
 * 00000001403FCB0C: add     rsp, 8
 * 00000001403FCB10: call    loc_1403FCB03
 * 00000001403FCB15: add     rsp, 8
 * 00000001403FCB19: call    loc_1403FCB0C
 * 00000001403FCB1E: add     rsp, 8
 * 00000001403FCB22: call    loc_1403FCB15
 * 00000001403FCB27: add     rsp, 8
 * 00000001403FCB2B: call    loc_1403FCB1E
 * 00000001403FCB30: add     rsp, 8
 * 00000001403FCB34: call    loc_1403FCB27
 * 00000001403FCB39: add     rsp, 8
 * 00000001403FCB3D: mov     eax, 0DADAh
 * 00000001403FCB42: mov     rdx, [rbp-40h]
 * 00000001403FCB46: mov     rcx, [rbp-48h]
 * 00000001403FCB4A: mov     rax, [rbp-50h]
 * 00000001403FCB4E: mov     rsp, rbp
 * 00000001403FCB51: mov     rbp, [rbp+0D8h]
 * 00000001403FCB58: add     rsp, 0E8h
 * 00000001403FCB5F: test    cs:KiKvaShadow, 1
 * 00000001403FCB66: jz      short loc_1403FCB6D
 * 00000001403FCB68: jmp     KiKernelExit
 * 00000001403FCB6D: swapgs
 * 00000001403FCB70: iretq
 * 00000001403FCB72: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FCB76: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FCB7A: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FCB7E: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FCB82: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FCB86: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FCB8A: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FCB8E: mov     r11, [rbp-20h]
 * 00000001403FCB92: mov     r10, [rbp-28h]
 * 00000001403FCB96: mov     r9, [rbp-30h]
 * 00000001403FCB9A: mov     r8, [rbp-38h]
 * 00000001403FCB9E: mov     rdx, [rbp-40h]
 * 00000001403FCBA2: mov     rcx, [rbp-48h]
 * 00000001403FCBA6: mov     rax, [rbp-50h]
 * 00000001403FCBAA: mov     rsp, rbp
 * 00000001403FCBAD: mov     rbp, [rbp+0D8h]
 * 00000001403FCBB4: add     rsp, 0E8h
 * 00000001403FCBBB: iretq
 * 00000001403FCBBD: lea     rcx, [rsp+138h+var_38]
 * 00000001403FCBC5: movaps  xmm6, [rsp+138h+var_108]
 * 00000001403FCBCA: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001403FCBCF: movaps  xmm8, [rsp+138h+var_E8]
 * 00000001403FCBD5: movaps  xmm9, [rsp+138h+var_D8]
 * 00000001403FCBDB: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001403FCBE1: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001403FCBE6: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001403FCBEB: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001403FCBF0: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001403FCBF5: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001403FCBFA: mov     rbx, [rcx]
 * 00000001403FCBFD: mov     rdi, [rcx+8]
 * 00000001403FCC01: mov     rsi, [rcx+10h]
 * 00000001403FCC05: mov     r12, [rcx+18h]
 * 00000001403FCC09: mov     r13, [rcx+20h]
 * 00000001403FCC0D: mov     r14, [rcx+28h]
 * 00000001403FCC11: mov     r15, [rcx+30h]
 * 00000001403FCC15: add     rsp, 138h
 * 00000001403FCC1C: retn
 */
