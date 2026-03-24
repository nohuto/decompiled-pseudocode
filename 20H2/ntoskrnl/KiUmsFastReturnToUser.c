/*
 * XREFs of KiUmsFastReturnToUser @ 0x140410600
 * Callers:
 *     KiUmsTrapEntry @ 0x140410A40 (KiUmsTrapEntry.c)
 *     KiUmsCallEntry @ 0x140410C40 (KiUmsCallEntry.c)
 *     KiUmsExceptionEntry @ 0x140410E00 (KiUmsExceptionEntry.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x14040FCC0 (KiBugCheckDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140410600 (KiUmsFastReturnToUser.c)
 *     KiUmsExit @ 0x140410EC0 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiUmsFastReturnToUser @ 0x140410600
 * Reason: Hex-Rays returned no pseudocode for 0x140410600
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140410600: sub     rsp, 28h
 * 0000000140410604: mov     rbx, gs:188h
 * 000000014041060D: mov     rcx, [rbx+90h]
 * 0000000140410614: lea     rbp, [rcx+80h]
 * 000000014041061B: mov     rax, cr8
 * 000000014041061F: or      al, [rbx+24Ah]
 * 0000000140410625: or      eax, [rbx+1E4h]
 * 000000014041062B: jz      short loc_140410661
 * 000000014041062D: mov     ecx, 4Ah ; 'J'
 * 0000000140410632: xor     r9d, r9d
 * 0000000140410635: mov     r8, cr8
 * 0000000140410639: or      r8d, r8d
 * 000000014041063C: jnz     short loc_140410652
 * 000000014041063E: mov     ecx, 1
 * 0000000140410643: movzx   r8d, byte ptr [rbx+24Ah]
 * 000000014041064B: mov     r9d, [rbx+1E4h]
 * 0000000140410652: mov     rdx, [rbp+0E8h]
 * 0000000140410659: mov     r10, rbp
 * 000000014041065C: call    KiBugCheckDispatch
 * 0000000140410661: cli
 * 0000000140410662: mov     rcx, gs:188h
 * 000000014041066B: test    byte ptr [rcx+0C2h], 3
 * 0000000140410672: jz      short loc_1404106CD
 * 0000000140410674: mov     [rbp-50h], rax
 * 0000000140410678: xor     eax, eax
 * 000000014041067A: mov     [rbp-48h], rax
 * 000000014041067E: mov     [rbp-40h], rax
 * 0000000140410682: mov     [rbp-38h], rax
 * 0000000140410686: mov     [rbp-30h], rax
 * 000000014041068A: mov     [rbp-28h], rax
 * 000000014041068E: mov     [rbp-20h], rax
 * 0000000140410692: pxor    xmm0, xmm0
 * 0000000140410696: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014041069A: movaps  xmmword ptr [rbp+0], xmm0
 * 000000014041069E: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001404106A2: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001404106A6: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001404106AA: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001404106AE: mov     ecx, 1
 * 00000001404106B3: mov     cr8, rcx
 * 00000001404106B7: sti
 * 00000001404106B8: call    KiInitiateUserApc
 * 00000001404106BD: cli
 * 00000001404106BE: mov     ecx, 0
 * 00000001404106C3: mov     cr8, rcx
 * 00000001404106C7: mov     rax, [rbp-50h]
 * 00000001404106CB: jmp     short loc_140410662
 * 00000001404106CD: test    byte ptr gs:27Eh, 2
 * 00000001404106D6: jz      short loc_1404106E7
 * 00000001404106D8: mov     [rbp-50h], rax
 * 00000001404106DC: xor     ecx, ecx
 * 00000001404106DE: call    KiUpdateStibpPairing
 * 00000001404106E3: mov     rax, [rbp-50h]
 * 00000001404106E7: mov     rcx, gs:188h
 * 00000001404106F0: test    dword ptr [rcx], 8000000h
 * 00000001404106F6: jz      short loc_140410737
 * 00000001404106F8: mov     [rbp-50h], rax
 * 00000001404106FC: xor     eax, eax
 * 00000001404106FE: mov     [rbp-48h], rax
 * 0000000140410702: mov     [rbp-40h], rax
 * 0000000140410706: mov     [rbp-38h], rax
 * 000000014041070A: mov     [rbp-30h], rax
 * 000000014041070E: mov     [rbp-28h], rax
 * 0000000140410712: mov     [rbp-20h], rax
 * 0000000140410716: pxor    xmm0, xmm0
 * 000000014041071A: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014041071E: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140410722: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140410726: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014041072A: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014041072E: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140410732: call    KiRestoreSetContextState
 * 0000000140410737: mov     rcx, gs:188h
 * 0000000140410740: test    dword ptr [rcx], 40010000h
 * 0000000140410746: jz      short loc_140410775
 * 0000000140410748: mov     [rbp-50h], rax
 * 000000014041074C: test    byte ptr [rcx+2], 1
 * 0000000140410750: jz      short loc_140410760
 * 0000000140410752: call    KiCopyCounters
 * 0000000140410757: mov     rcx, gs:188h
 * 0000000140410760: test    byte ptr [rcx+3], 40h
 * 0000000140410764: jz      short loc_140410771
 * 0000000140410766: lea     rsp, [rbp-80h]
 * 000000014041076A: xor     ecx, ecx
 * 000000014041076C: call    KiUmsExit
 * 0000000140410771: mov     rax, [rbp-50h]
 * 0000000140410775: ldmxcsr dword ptr [rbp-54h]
 * 0000000140410779: xor     r10, r10
 * 000000014041077C: cmp     word ptr [rbp+80h], 0
 * 0000000140410784: jz      short loc_1404107C7
 * 0000000140410786: mov     [rbp-50h], rax
 * 000000014041078A: call    KiRestoreDebugRegisterState
 * 000000014041078F: mov     rax, gs:188h
 * 0000000140410798: mov     rax, [rax+0B8h]
 * 000000014041079F: mov     rax, [rax+3D8h]
 * 00000001404107A6: or      rax, rax
 * 00000001404107A9: jz      short loc_1404107C3
 * 00000001404107AB: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001404107B3: jnz     short loc_1404107C3
 * 00000001404107B5: mov     r10, [rbp+0E8h]
 * 00000001404107BC: mov     [rbp+0E8h], rax
 * 00000001404107C3: mov     rax, [rbp-50h]
 * 00000001404107C7: mov     [rbp-50h], rax
 * 00000001404107CB: mov     byte ptr gs:853h, 0
 * 00000001404107D4: movzx   eax, byte ptr gs:27Dh
 * 00000001404107DD: cmp     gs:27Ah, al
 * 00000001404107E5: jz      short loc_1404107F8
 * 00000001404107E7: mov     gs:27Ah, al
 * 00000001404107EF: mov     ecx, 48h ; 'H'
 * 00000001404107F4: xor     edx, edx
 * 00000001404107F6: wrmsr
 * 00000001404107F8: btr     word ptr gs:278h, 2
 * 0000000140410803: jnb     short loc_140410813
 * 0000000140410805: mov     eax, 1
 * 000000014041080A: xor     edx, edx
 * 000000014041080C: mov     ecx, 49h ; 'I'
 * 0000000140410811: wrmsr
 * 0000000140410813: btr     word ptr gs:278h, 5
 * 000000014041081E: jnb     loc_140410949
 * 0000000140410824: call    loc_140410937
 * 0000000140410829: add     rsp, 8
 * 000000014041082D: call    loc_140410940
 * 0000000140410832: add     rsp, 8
 * 0000000140410836: call    loc_140410829
 * 000000014041083B: add     rsp, 8
 * 000000014041083F: call    loc_140410832
 * 0000000140410844: add     rsp, 8
 * 0000000140410848: call    loc_14041083B
 * 000000014041084D: add     rsp, 8
 * 0000000140410851: call    loc_140410844
 * 0000000140410856: add     rsp, 8
 * 000000014041085A: call    loc_14041084D
 * 000000014041085F: add     rsp, 8
 * 0000000140410863: call    loc_140410856
 * 0000000140410868: add     rsp, 8
 * 000000014041086C: call    loc_14041085F
 * 0000000140410871: add     rsp, 8
 * 0000000140410875: call    loc_140410868
 * 000000014041087A: add     rsp, 8
 * 000000014041087E: call    loc_140410871
 * 0000000140410883: add     rsp, 8
 * 0000000140410887: call    loc_14041087A
 * 000000014041088C: add     rsp, 8
 * 0000000140410890: call    loc_140410883
 * 0000000140410895: add     rsp, 8
 * 0000000140410899: call    loc_14041088C
 * 000000014041089E: add     rsp, 8
 * 00000001404108A2: call    loc_140410895
 * 00000001404108A7: add     rsp, 8
 * 00000001404108AB: call    loc_14041089E
 * 00000001404108B0: add     rsp, 8
 * 00000001404108B4: call    loc_1404108A7
 * 00000001404108B9: add     rsp, 8
 * 00000001404108BD: call    loc_1404108B0
 * 00000001404108C2: add     rsp, 8
 * 00000001404108C6: call    loc_1404108B9
 * 00000001404108CB: add     rsp, 8
 * 00000001404108CF: call    loc_1404108C2
 * 00000001404108D4: add     rsp, 8
 * 00000001404108D8: call    loc_1404108CB
 * 00000001404108DD: add     rsp, 8
 * 00000001404108E1: call    loc_1404108D4
 * 00000001404108E6: add     rsp, 8
 * 00000001404108EA: call    loc_1404108DD
 * 00000001404108EF: add     rsp, 8
 * 00000001404108F3: call    loc_1404108E6
 * 00000001404108F8: add     rsp, 8
 * 00000001404108FC: call    loc_1404108EF
 * 0000000140410901: add     rsp, 8
 * 0000000140410905: call    loc_1404108F8
 * 000000014041090A: add     rsp, 8
 * 000000014041090E: call    loc_140410901
 * 0000000140410913: add     rsp, 8
 * 0000000140410917: call    loc_14041090A
 * 000000014041091C: add     rsp, 8
 * 0000000140410920: call    loc_140410913
 * 0000000140410925: add     rsp, 8
 * 0000000140410929: call    loc_14041091C
 * 000000014041092E: add     rsp, 8
 * 0000000140410932: call    loc_140410925
 * 0000000140410937: add     rsp, 8
 * 000000014041093B: call    loc_14041092E
 * 0000000140410940: add     rsp, 8
 * 0000000140410944: mov     eax, 0DADAh
 * 0000000140410949: mov     rax, [rbp-50h]
 * 000000014041094D: mov     r8, [rbp+100h]
 * 0000000140410954: mov     r9, [rbp+0D8h]
 * 000000014041095B: xor     edx, edx
 * 000000014041095D: pxor    xmm0, xmm0
 * 0000000140410961: pxor    xmm1, xmm1
 * 0000000140410965: pxor    xmm2, xmm2
 * 0000000140410969: pxor    xmm3, xmm3
 * 000000014041096D: pxor    xmm4, xmm4
 * 0000000140410971: pxor    xmm5, xmm5
 * 0000000140410975: mov     rcx, [rbp+0E8h]
 * 000000014041097C: mov     r11, [rbp+0F8h]
 * 0000000140410983: test    cs:KiKvaShadow, 1
 * 000000014041098A: jnz     KiKernelSysretExit
 * 0000000140410990: mov     rbp, r9
 * 0000000140410993: mov     rsp, r8
 * 0000000140410996: swapgs
 * 0000000140410999: sysret
 * 000000014041099C: retn
 */
