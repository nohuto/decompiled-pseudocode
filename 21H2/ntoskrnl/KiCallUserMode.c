/*
 * XREFs of KiCallUserMode @ 0x1404022D0
 * Callers:
 *     KeUserModeCallback @ 0x1406F0030 (KeUserModeCallback.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiCallUserMode @ 0x1404022D0 (KiCallUserMode.c)
 */

/*
 * Hex-Rays decompilation failed for KiCallUserMode @ 0x1404022D0
 * Reason: Hex-Rays returned no pseudocode for 0x1404022D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404022D0: sub     rsp, 138h
 * 00000001404022D7: lea     rax, [rsp+138h+var_38]
 * 00000001404022DF: movaps  [rsp+138h+var_108], xmm6
 * 00000001404022E4: movaps  [rsp+138h+var_F8], xmm7
 * 00000001404022E9: movaps  [rsp+138h+var_E8], xmm8
 * 00000001404022EF: movaps  [rsp+138h+var_D8], xmm9
 * 00000001404022F5: movaps  [rsp+138h+var_C8], xmm10
 * 00000001404022FB: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140402300: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140402305: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014040230A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014040230F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140402314: mov     [rax-8], rbp
 * 0000000140402318: mov     rbp, rsp
 * 000000014040231B: mov     [rax], rbx
 * 000000014040231E: mov     [rax+8], rdi
 * 0000000140402322: mov     [rax+10h], rsi
 * 0000000140402326: mov     [rax+18h], r12
 * 000000014040232A: mov     [rax+20h], r13
 * 000000014040232E: mov     [rax+28h], r14
 * 0000000140402332: mov     [rax+30h], r15
 * 0000000140402336: xor     r10, r10
 * 0000000140402339: xor     r12, r12
 * 000000014040233C: xor     r13, r13
 * 000000014040233F: xor     r14, r14
 * 0000000140402342: xor     r15, r15
 * 0000000140402345: pxor    xmm6, xmm6
 * 0000000140402349: pxor    xmm7, xmm7
 * 000000014040234D: pxor    xmm8, xmm8
 * 0000000140402352: pxor    xmm9, xmm9
 * 0000000140402357: pxor    xmm10, xmm10
 * 000000014040235C: pxor    xmm11, xmm11
 * 0000000140402361: pxor    xmm12, xmm12
 * 0000000140402366: pxor    xmm13, xmm13
 * 000000014040236B: pxor    xmm14, xmm14
 * 0000000140402370: pxor    xmm15, xmm15
 * 0000000140402375: mov     [rbp+0D8h], rcx
 * 000000014040237C: mov     [rbp+0E0h], rdx
 * 0000000140402383: mov     rbx, gs:188h
 * 000000014040238C: mov     [r8+20h], rsp
 * 0000000140402390: mov     rsi, [rbx+90h]
 * 0000000140402397: mov     [rbp+0D0h], rsi
 * 000000014040239E: cli
 * 000000014040239F: mov     [rbx+28h], r8
 * 00000001404023A3: mov     [rbx+38h], r9
 * 00000001404023A7: test    cs:KiKvaShadow, 1
 * 00000001404023AE: jnz     short loc_1404023BF
 * 00000001404023B0: mov     rdi, gs:8
 * 00000001404023B9: mov     [rdi+4], r8
 * 00000001404023BD: jmp     short loc_1404023C8
 * 00000001404023BF: mov     gs:9008h, r8
 * 00000001404023C8: mov     ecx, cs:KeKernelStackSize
 * 00000001404023CE: sub     r9, rcx
 * 00000001404023D1: mov     gs:1A8h, r8
 * 00000001404023DA: mov     [rbx+30h], r9
 * 00000001404023DE: lea     rsp, [r8-190h]
 * 00000001404023E5: mov     rdi, rsp
 * 00000001404023E8: mov     ecx, 32h ; '2'
 * 00000001404023ED: rep movsq
 * 00000001404023F0: xor     edi, edi
 * 00000001404023F2: test    byte ptr [rbx+0C2h], 3
 * 00000001404023F9: jnz     loc_140402661
 * 00000001404023FF: test    dword ptr [rbx], 48010000h
 * 0000000140402405: jnz     loc_140402661
 * 000000014040240B: test    byte ptr gs:86Ch, 2
 * 0000000140402414: jnz     loc_140402661
 * 000000014040241A: lea     rbp, [rsi-110h]
 * 0000000140402421: ldmxcsr dword ptr [rbp-54h]
 * 0000000140402425: xor     esi, esi
 * 0000000140402427: test    byte ptr [rbx+3], 3
 * 000000014040242B: jnz     loc_140402636
 * 0000000140402431: mov     r9, cs:KeUserCallbackDispatcher
 * 0000000140402438: mov     byte ptr gs:856h, 0
 * 0000000140402441: movzx   eax, word ptr gs:86Ah
 * 000000014040244A: cmp     gs:864h, ax
 * 0000000140402453: jz      short loc_140402467
 * 0000000140402455: mov     gs:864h, ax
 * 000000014040245E: mov     ecx, 48h ; 'H'
 * 0000000140402463: xor     edx, edx
 * 0000000140402465: wrmsr
 * 0000000140402467: btr     word ptr gs:860h, 2
 * 0000000140402472: jnb     short loc_140402482
 * 0000000140402474: mov     eax, 1
 * 0000000140402479: xor     edx, edx
 * 000000014040247B: mov     ecx, 49h ; 'I'
 * 0000000140402480: wrmsr
 * 0000000140402482: btr     word ptr gs:860h, 5
 * 000000014040248D: jnb     loc_1404025B8
 * 0000000140402493: call    loc_1404025A6
 * 0000000140402498: add     rsp, 8
 * 000000014040249C: call    loc_1404025AF
 * 00000001404024A1: add     rsp, 8
 * 00000001404024A5: call    loc_140402498
 * 00000001404024AA: add     rsp, 8
 * 00000001404024AE: call    loc_1404024A1
 * 00000001404024B3: add     rsp, 8
 * 00000001404024B7: call    loc_1404024AA
 * 00000001404024BC: add     rsp, 8
 * 00000001404024C0: call    loc_1404024B3
 * 00000001404024C5: add     rsp, 8
 * 00000001404024C9: call    loc_1404024BC
 * 00000001404024CE: add     rsp, 8
 * 00000001404024D2: call    loc_1404024C5
 * 00000001404024D7: add     rsp, 8
 * 00000001404024DB: call    loc_1404024CE
 * 00000001404024E0: add     rsp, 8
 * 00000001404024E4: call    loc_1404024D7
 * 00000001404024E9: add     rsp, 8
 * 00000001404024ED: call    loc_1404024E0
 * 00000001404024F2: add     rsp, 8
 * 00000001404024F6: call    loc_1404024E9
 * 00000001404024FB: add     rsp, 8
 * 00000001404024FF: call    loc_1404024F2
 * 0000000140402504: add     rsp, 8
 * 0000000140402508: call    loc_1404024FB
 * 000000014040250D: add     rsp, 8
 * 0000000140402511: call    loc_140402504
 * 0000000140402516: add     rsp, 8
 * 000000014040251A: call    loc_14040250D
 * 000000014040251F: add     rsp, 8
 * 0000000140402523: call    loc_140402516
 * 0000000140402528: add     rsp, 8
 * 000000014040252C: call    loc_14040251F
 * 0000000140402531: add     rsp, 8
 * 0000000140402535: call    loc_140402528
 * 000000014040253A: add     rsp, 8
 * 000000014040253E: call    loc_140402531
 * 0000000140402543: add     rsp, 8
 * 0000000140402547: call    loc_14040253A
 * 000000014040254C: add     rsp, 8
 * 0000000140402550: call    loc_140402543
 * 0000000140402555: add     rsp, 8
 * 0000000140402559: call    loc_14040254C
 * 000000014040255E: add     rsp, 8
 * 0000000140402562: call    loc_140402555
 * 0000000140402567: add     rsp, 8
 * 000000014040256B: call    loc_14040255E
 * 0000000140402570: add     rsp, 8
 * 0000000140402574: call    loc_140402567
 * 0000000140402579: add     rsp, 8
 * 000000014040257D: call    loc_140402570
 * 0000000140402582: add     rsp, 8
 * 0000000140402586: call    loc_140402579
 * 000000014040258B: add     rsp, 8
 * 000000014040258F: call    loc_140402582
 * 0000000140402594: add     rsp, 8
 * 0000000140402598: call    loc_14040258B
 * 000000014040259D: add     rsp, 8
 * 00000001404025A1: call    loc_140402594
 * 00000001404025A6: add     rsp, 8
 * 00000001404025AA: call    loc_14040259D
 * 00000001404025AF: add     rsp, 8
 * 00000001404025B3: mov     eax, 0DADAh
 * 00000001404025B8: test    word ptr gs:860h, 80h
 * 00000001404025C3: jz      short loc_1404025D1
 * 00000001404025C5: xor     eax, eax
 * 00000001404025C7: xor     edx, edx
 * 00000001404025C9: mov     ecx, 1
 * 00000001404025CE: div     rcx
 * 00000001404025D1: mov     rcx, r9
 * 00000001404025D4: xor     eax, eax
 * 00000001404025D6: xor     edx, edx
 * 00000001404025D8: mov     r8, [rbp+100h]
 * 00000001404025DF: mov     r9, [rbp+0D8h]
 * 00000001404025E6: pxor    xmm0, xmm0
 * 00000001404025EA: pxor    xmm1, xmm1
 * 00000001404025EE: pxor    xmm2, xmm2
 * 00000001404025F2: pxor    xmm3, xmm3
 * 00000001404025F6: pxor    xmm4, xmm4
 * 00000001404025FA: pxor    xmm5, xmm5
 * 00000001404025FE: mov     r11, [rbp+0F8h]
 * 0000000140402605: xor     ebx, ebx
 * 0000000140402607: test    cs:KiKvaShadow, 1
 * 000000014040260E: jnz     KiKernelSysretExit
 * 0000000140402614: mov     rbp, r9
 * 0000000140402617: mov     rsp, r8
 * 000000014040261A: test    word ptr gs:860h, 100h
 * 0000000140402625: jz      short loc_140402630
 * 0000000140402627: verw    word ptr gs:902Ah
 * 0000000140402630: swapgs
 * 0000000140402633: sysret
 * 0000000140402636: call    KiRestoreDebugRegisterState
 * 000000014040263B: mov     r10, cs:KeUserCallbackDispatcher
 * 0000000140402642: mov     r9, [rbx+0B8h]
 * 0000000140402649: mov     r9, [r9+3D8h]
 * 0000000140402650: or      r9, r9
 * 0000000140402653: jnz     loc_140402438
 * 0000000140402659: xchg    r9, r10
 * 000000014040265C: jmp     loc_140402438
 * 0000000140402661: lea     rbp, [rsp+138h+var_B8]
 * 0000000140402669: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140402672: mov     rax, cs:KeUserCallbackDispatcher
 * 0000000140402679: mov     [rbp+0E8h], rax
 * 0000000140402680: lea     rcx, KiSystemServiceExit
 * 0000000140402687: jmp     rcx
 * 000000014040268D: retn
 */
