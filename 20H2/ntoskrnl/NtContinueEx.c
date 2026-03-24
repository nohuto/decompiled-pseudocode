/*
 * XREFs of NtContinueEx @ 0x1403FC3E0
 * Callers:
 *     NtContinue @ 0x1403FC3D0 (NtContinue.c)
 *     RtlContinue @ 0x14058DF88 (RtlContinue.c)
 *     RtlContinueLongJump @ 0x14058DFA0 (RtlContinueLongJump.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiContinueEx @ 0x1402E6780 (KiContinueEx.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     NtContinueEx @ 0x1403FC3E0 (NtContinueEx.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140410EC0 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for NtContinueEx @ 0x1403FC3E0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FC3E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FC3E0: mov     rbx, [rbp+0C0h]
 * 00000001403FC3E7: mov     rdi, [rbp+0C8h]
 * 00000001403FC3EE: mov     rsi, [rbp+0D0h]
 * 00000001403FC3F5: xor     eax, eax
 * 00000001403FC3F7: mov     [rbp-50h], rax
 * 00000001403FC3FB: sub     rsp, 138h
 * 00000001403FC402: lea     rax, [rsp+138h+var_38]
 * 00000001403FC40A: movaps  [rsp+138h+var_108], xmm6
 * 00000001403FC40F: movaps  [rsp+138h+var_F8], xmm7
 * 00000001403FC414: movaps  [rsp+138h+var_E8], xmm8
 * 00000001403FC41A: movaps  [rsp+138h+var_D8], xmm9
 * 00000001403FC420: movaps  [rsp+138h+var_C8], xmm10
 * 00000001403FC426: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001403FC42B: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001403FC430: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001403FC435: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001403FC43A: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001403FC43F: mov     [rax], rbx
 * 00000001403FC442: mov     [rax+8], rdi
 * 00000001403FC446: mov     [rax+10h], rsi
 * 00000001403FC44A: mov     [rax+18h], r12
 * 00000001403FC44E: mov     [rax+20h], r13
 * 00000001403FC452: mov     [rax+28h], r14
 * 00000001403FC456: mov     [rax+30h], r15
 * 00000001403FC45A: mov     r8, rsp
 * 00000001403FC45D: lea     r9, [rbp-80h]
 * 00000001403FC461: call    KiContinueEx
 * 00000001403FC466: test    eax, eax
 * 00000001403FC468: jle     loc_1403FC7C8
 * 00000001403FC46E: mov     rcx, gs:188h
 * 00000001403FC477: test    byte ptr [rbp+0F0h], 1
 * 00000001403FC47E: jnz     short loc_1403FC497
 * 00000001403FC480: mov     rdx, [rbp+0B8h]
 * 00000001403FC487: mov     [rcx+90h], rdx
 * 00000001403FC48E: mov     dl, [rbp-58h]
 * 00000001403FC491: mov     [rcx+232h], dl
 * 00000001403FC497: lea     rcx, [rsp+138h+var_38]
 * 00000001403FC49F: movaps  xmm6, [rsp+138h+var_108]
 * 00000001403FC4A4: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001403FC4A9: movaps  xmm8, [rsp+138h+var_E8]
 * 00000001403FC4AF: movaps  xmm9, [rsp+138h+var_D8]
 * 00000001403FC4B5: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001403FC4BB: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001403FC4C0: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001403FC4C5: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001403FC4CA: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001403FC4CF: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001403FC4D4: mov     rbx, [rcx]
 * 00000001403FC4D7: mov     rdi, [rcx+8]
 * 00000001403FC4DB: mov     rsi, [rcx+10h]
 * 00000001403FC4DF: mov     r12, [rcx+18h]
 * 00000001403FC4E3: mov     r13, [rcx+20h]
 * 00000001403FC4E7: mov     r14, [rcx+28h]
 * 00000001403FC4EB: mov     r15, [rcx+30h]
 * 00000001403FC4EF: cli
 * 00000001403FC4F0: test    byte ptr [rbp+0F0h], 1
 * 00000001403FC4F7: jz      loc_1403FC77D
 * 00000001403FC4FD: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FC504: jz      short loc_1403FC509
 * 00000001403FC506: stac
 * 00000001403FC509: mov     rcx, gs:188h
 * 00000001403FC512: test    byte ptr [rcx+0C2h], 3
 * 00000001403FC519: jz      short loc_1403FC536
 * 00000001403FC51B: mov     ecx, 1
 * 00000001403FC520: mov     cr8, rcx
 * 00000001403FC524: sti
 * 00000001403FC525: call    KiInitiateUserApc
 * 00000001403FC52A: cli
 * 00000001403FC52B: mov     ecx, 0
 * 00000001403FC530: mov     cr8, rcx
 * 00000001403FC534: jmp     short loc_1403FC509
 * 00000001403FC536: test    byte ptr gs:27Eh, 2
 * 00000001403FC53F: jz      short loc_1403FC548
 * 00000001403FC541: xor     ecx, ecx
 * 00000001403FC543: call    KiUpdateStibpPairing
 * 00000001403FC548: mov     rcx, gs:188h
 * 00000001403FC551: test    dword ptr [rcx], 8000000h
 * 00000001403FC557: jz      short loc_1403FC55E
 * 00000001403FC559: call    KiRestoreSetContextState
 * 00000001403FC55E: mov     rcx, gs:188h
 * 00000001403FC567: test    dword ptr [rcx], 40010000h
 * 00000001403FC56D: jz      short loc_1403FC594
 * 00000001403FC56F: test    byte ptr [rcx+2], 1
 * 00000001403FC573: jz      short loc_1403FC583
 * 00000001403FC575: call    KiCopyCounters
 * 00000001403FC57A: mov     rcx, gs:188h
 * 00000001403FC583: test    byte ptr [rcx+3], 40h
 * 00000001403FC587: jz      short loc_1403FC594
 * 00000001403FC589: lea     rsp, [rbp-80h]
 * 00000001403FC58D: mov     cl, 1
 * 00000001403FC58F: call    KiUmsExit
 * 00000001403FC594: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FC598: cmp     word ptr [rbp+80h], 0
 * 00000001403FC5A0: jz      short loc_1403FC5A7
 * 00000001403FC5A2: call    KiRestoreDebugRegisterState
 * 00000001403FC5A7: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FC5AB: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FC5AF: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FC5B3: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FC5B7: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FC5BB: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FC5BF: mov     r11, [rbp-20h]
 * 00000001403FC5C3: mov     r10, [rbp-28h]
 * 00000001403FC5C7: mov     r9, [rbp-30h]
 * 00000001403FC5CB: mov     r8, [rbp-38h]
 * 00000001403FC5CF: mov     byte ptr gs:853h, 0
 * 00000001403FC5D8: movzx   eax, byte ptr gs:27Dh
 * 00000001403FC5E1: cmp     gs:27Ah, al
 * 00000001403FC5E9: jz      short loc_1403FC5FC
 * 00000001403FC5EB: mov     gs:27Ah, al
 * 00000001403FC5F3: mov     ecx, 48h ; 'H'
 * 00000001403FC5F8: xor     edx, edx
 * 00000001403FC5FA: wrmsr
 * 00000001403FC5FC: btr     word ptr gs:278h, 2
 * 00000001403FC607: jnb     short loc_1403FC617
 * 00000001403FC609: mov     eax, 1
 * 00000001403FC60E: xor     edx, edx
 * 00000001403FC610: mov     ecx, 49h ; 'I'
 * 00000001403FC615: wrmsr
 * 00000001403FC617: btr     word ptr gs:278h, 5
 * 00000001403FC622: jnb     loc_1403FC74D
 * 00000001403FC628: call    loc_1403FC73B
 * 00000001403FC62D: add     rsp, 8
 * 00000001403FC631: call    loc_1403FC744
 * 00000001403FC636: add     rsp, 8
 * 00000001403FC63A: call    loc_1403FC62D
 * 00000001403FC63F: add     rsp, 8
 * 00000001403FC643: call    loc_1403FC636
 * 00000001403FC648: add     rsp, 8
 * 00000001403FC64C: call    loc_1403FC63F
 * 00000001403FC651: add     rsp, 8
 * 00000001403FC655: call    loc_1403FC648
 * 00000001403FC65A: add     rsp, 8
 * 00000001403FC65E: call    loc_1403FC651
 * 00000001403FC663: add     rsp, 8
 * 00000001403FC667: call    loc_1403FC65A
 * 00000001403FC66C: add     rsp, 8
 * 00000001403FC670: call    loc_1403FC663
 * 00000001403FC675: add     rsp, 8
 * 00000001403FC679: call    loc_1403FC66C
 * 00000001403FC67E: add     rsp, 8
 * 00000001403FC682: call    loc_1403FC675
 * 00000001403FC687: add     rsp, 8
 * 00000001403FC68B: call    loc_1403FC67E
 * 00000001403FC690: add     rsp, 8
 * 00000001403FC694: call    loc_1403FC687
 * 00000001403FC699: add     rsp, 8
 * 00000001403FC69D: call    loc_1403FC690
 * 00000001403FC6A2: add     rsp, 8
 * 00000001403FC6A6: call    loc_1403FC699
 * 00000001403FC6AB: add     rsp, 8
 * 00000001403FC6AF: call    loc_1403FC6A2
 * 00000001403FC6B4: add     rsp, 8
 * 00000001403FC6B8: call    loc_1403FC6AB
 * 00000001403FC6BD: add     rsp, 8
 * 00000001403FC6C1: call    loc_1403FC6B4
 * 00000001403FC6C6: add     rsp, 8
 * 00000001403FC6CA: call    loc_1403FC6BD
 * 00000001403FC6CF: add     rsp, 8
 * 00000001403FC6D3: call    loc_1403FC6C6
 * 00000001403FC6D8: add     rsp, 8
 * 00000001403FC6DC: call    loc_1403FC6CF
 * 00000001403FC6E1: add     rsp, 8
 * 00000001403FC6E5: call    loc_1403FC6D8
 * 00000001403FC6EA: add     rsp, 8
 * 00000001403FC6EE: call    loc_1403FC6E1
 * 00000001403FC6F3: add     rsp, 8
 * 00000001403FC6F7: call    loc_1403FC6EA
 * 00000001403FC6FC: add     rsp, 8
 * 00000001403FC700: call    loc_1403FC6F3
 * 00000001403FC705: add     rsp, 8
 * 00000001403FC709: call    loc_1403FC6FC
 * 00000001403FC70E: add     rsp, 8
 * 00000001403FC712: call    loc_1403FC705
 * 00000001403FC717: add     rsp, 8
 * 00000001403FC71B: call    loc_1403FC70E
 * 00000001403FC720: add     rsp, 8
 * 00000001403FC724: call    loc_1403FC717
 * 00000001403FC729: add     rsp, 8
 * 00000001403FC72D: call    loc_1403FC720
 * 00000001403FC732: add     rsp, 8
 * 00000001403FC736: call    loc_1403FC729
 * 00000001403FC73B: add     rsp, 8
 * 00000001403FC73F: call    loc_1403FC732
 * 00000001403FC744: add     rsp, 8
 * 00000001403FC748: mov     eax, 0DADAh
 * 00000001403FC74D: mov     rdx, [rbp-40h]
 * 00000001403FC751: mov     rcx, [rbp-48h]
 * 00000001403FC755: mov     rax, [rbp-50h]
 * 00000001403FC759: mov     rsp, rbp
 * 00000001403FC75C: mov     rbp, [rbp+0D8h]
 * 00000001403FC763: add     rsp, 0E8h
 * 00000001403FC76A: test    cs:KiKvaShadow, 1
 * 00000001403FC771: jz      short loc_1403FC778
 * 00000001403FC773: jmp     KiKernelExit
 * 00000001403FC778: swapgs
 * 00000001403FC77B: iretq
 * 00000001403FC77D: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FC781: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FC785: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FC789: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FC78D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FC791: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FC795: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FC799: mov     r11, [rbp-20h]
 * 00000001403FC79D: mov     r10, [rbp-28h]
 * 00000001403FC7A1: mov     r9, [rbp-30h]
 * 00000001403FC7A5: mov     r8, [rbp-38h]
 * 00000001403FC7A9: mov     rdx, [rbp-40h]
 * 00000001403FC7AD: mov     rcx, [rbp-48h]
 * 00000001403FC7B1: mov     rax, [rbp-50h]
 * 00000001403FC7B5: mov     rsp, rbp
 * 00000001403FC7B8: mov     rbp, [rbp+0D8h]
 * 00000001403FC7BF: add     rsp, 0E8h
 * 00000001403FC7C6: iretq
 * 00000001403FC7C8: add     rsp, 138h
 * 00000001403FC7CF: retn
 */
