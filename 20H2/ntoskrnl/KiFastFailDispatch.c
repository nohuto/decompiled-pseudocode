/*
 * XREFs of KiFastFailDispatch @ 0x1404101C0
 * Callers:
 *     KiBoundFault @ 0x140409240 (KiBoundFault.c)
 *     KiControlProtectionFault @ 0x14040D940 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x14040DF40 (KiRaiseSecurityCheckFailure.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiDispatchException @ 0x1402E7710 (KiDispatchException.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x14040FCC0 (KiBugCheckDispatch.c)
 *     KiFastFailDispatch @ 0x1404101C0 (KiFastFailDispatch.c)
 *     KiUmsExceptionEntry @ 0x140410E00 (KiUmsExceptionEntry.c)
 *     KiUmsExit @ 0x140410EC0 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiFastFailDispatch @ 0x1404101C0
 * Reason: Hex-Rays returned no pseudocode for 0x1404101C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404101C0: sub     rsp, 1D8h
 * 00000001404101C7: lea     rax, [rsp+1D8h+var_D8]
 * 00000001404101CF: movaps  [rsp+1D8h+var_1A8], xmm6
 * 00000001404101D4: movaps  [rsp+1D8h+var_198], xmm7
 * 00000001404101D9: movaps  [rsp+1D8h+var_188], xmm8
 * 00000001404101DF: movaps  [rsp+1D8h+var_178], xmm9
 * 00000001404101E5: movaps  [rsp+1D8h+var_168], xmm10
 * 00000001404101EB: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001404101F0: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001404101F5: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001404101FA: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001404101FF: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140410204: mov     [rax], rbx
 * 0000000140410207: mov     [rax+8], rdi
 * 000000014041020B: mov     [rax+10h], rsi
 * 000000014041020F: mov     [rax+18h], r12
 * 0000000140410213: mov     [rax+20h], r13
 * 0000000140410217: mov     [rax+28h], r14
 * 000000014041021B: mov     [rax+30h], r15
 * 000000014041021F: mov     rax, gs:188h
 * 0000000140410228: bt      dword ptr [rax+74h], 8
 * 000000014041022D: jnb     short loc_14041023D
 * 000000014041022F: test    byte ptr [rbp+0F0h], 1
 * 0000000140410236: jz      short loc_14041023D
 * 0000000140410238: call    KiUmsExceptionEntry
 * 000000014041023D: lea     rax, [rsp+1D8h+ExceptionRecord]
 * 0000000140410245: mov     [rax], ecx
 * 0000000140410247: xor     ecx, ecx
 * 0000000140410249: mov     dword ptr [rax+4], 1
 * 0000000140410250: mov     [rax+8], rcx
 * 0000000140410254: mov     [rax+10h], r8
 * 0000000140410258: mov     [rax+18h], edx
 * 000000014041025B: mov     [rax+20h], r9
 * 000000014041025F: mov     [rax+28h], r10
 * 0000000140410263: mov     [rax+30h], r11
 * 0000000140410267: mov     r9b, [rbp+0F0h]
 * 000000014041026E: and     r9b, 1
 * 0000000140410272: cmp     r9b, 0
 * 0000000140410276: jnz     short loc_140410290
 * 0000000140410278: mov     rdx, [rax+20h]
 * 000000014041027C: xor     r10, r10
 * 000000014041027F: mov     r9, rax
 * 0000000140410282: lea     r8, [rbp-80h]
 * 0000000140410286: mov     ecx, 139h
 * 000000014041028B: call    KiBugCheckDispatch
 * 0000000140410290: mov     [rsp+1D8h+var_1B8], 0; char
 * 0000000140410295: lea     r8, [rbp-80h]
 * 0000000140410299: mov     rdx, rsp
 * 000000014041029C: mov     rcx, rax; ExceptionRecord
 * 000000014041029F: call    KiDispatchException
 * 00000001404102A4: lea     rcx, [rsp+1D8h+var_D8]
 * 00000001404102AC: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 00000001404102B1: movaps  xmm7, [rsp+1D8h+var_198]
 * 00000001404102B6: movaps  xmm8, [rsp+1D8h+var_188]
 * 00000001404102BC: movaps  xmm9, [rsp+1D8h+var_178]
 * 00000001404102C2: movaps  xmm10, [rsp+1D8h+var_168]
 * 00000001404102C8: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001404102CD: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001404102D2: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001404102D7: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001404102DC: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001404102E1: mov     rbx, [rcx]
 * 00000001404102E4: mov     rdi, [rcx+8]
 * 00000001404102E8: mov     rsi, [rcx+10h]
 * 00000001404102EC: mov     r12, [rcx+18h]
 * 00000001404102F0: mov     r13, [rcx+20h]
 * 00000001404102F4: mov     r14, [rcx+28h]
 * 00000001404102F8: mov     r15, [rcx+30h]
 * 00000001404102FC: cli
 * 00000001404102FD: test    byte ptr [rbp+0F0h], 1
 * 0000000140410304: jz      loc_14041058A
 * 000000014041030A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140410311: jz      short loc_140410316
 * 0000000140410313: stac
 * 0000000140410316: mov     rcx, gs:188h
 * 000000014041031F: test    byte ptr [rcx+0C2h], 3
 * 0000000140410326: jz      short loc_140410343
 * 0000000140410328: mov     ecx, 1
 * 000000014041032D: mov     cr8, rcx
 * 0000000140410331: sti
 * 0000000140410332: call    KiInitiateUserApc
 * 0000000140410337: cli
 * 0000000140410338: mov     ecx, 0
 * 000000014041033D: mov     cr8, rcx
 * 0000000140410341: jmp     short loc_140410316
 * 0000000140410343: test    byte ptr gs:27Eh, 2
 * 000000014041034C: jz      short loc_140410355
 * 000000014041034E: xor     ecx, ecx
 * 0000000140410350: call    KiUpdateStibpPairing
 * 0000000140410355: mov     rcx, gs:188h
 * 000000014041035E: test    dword ptr [rcx], 8000000h
 * 0000000140410364: jz      short loc_14041036B
 * 0000000140410366: call    KiRestoreSetContextState
 * 000000014041036B: mov     rcx, gs:188h
 * 0000000140410374: test    dword ptr [rcx], 40010000h
 * 000000014041037A: jz      short loc_1404103A1
 * 000000014041037C: test    byte ptr [rcx+2], 1
 * 0000000140410380: jz      short loc_140410390
 * 0000000140410382: call    KiCopyCounters
 * 0000000140410387: mov     rcx, gs:188h
 * 0000000140410390: test    byte ptr [rcx+3], 40h
 * 0000000140410394: jz      short loc_1404103A1
 * 0000000140410396: lea     rsp, [rbp-80h]
 * 000000014041039A: mov     cl, 1
 * 000000014041039C: call    KiUmsExit
 * 00000001404103A1: ldmxcsr dword ptr [rbp-54h]
 * 00000001404103A5: cmp     word ptr [rbp+80h], 0
 * 00000001404103AD: jz      short loc_1404103B4
 * 00000001404103AF: call    KiRestoreDebugRegisterState
 * 00000001404103B4: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404103B8: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404103BC: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404103C0: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404103C4: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404103C8: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404103CC: mov     r11, [rbp-20h]
 * 00000001404103D0: mov     r10, [rbp-28h]
 * 00000001404103D4: mov     r9, [rbp-30h]
 * 00000001404103D8: mov     r8, [rbp-38h]
 * 00000001404103DC: mov     byte ptr gs:853h, 0
 * 00000001404103E5: movzx   eax, byte ptr gs:27Dh
 * 00000001404103EE: cmp     gs:27Ah, al
 * 00000001404103F6: jz      short loc_140410409
 * 00000001404103F8: mov     gs:27Ah, al
 * 0000000140410400: mov     ecx, 48h ; 'H'
 * 0000000140410405: xor     edx, edx
 * 0000000140410407: wrmsr
 * 0000000140410409: btr     word ptr gs:278h, 2
 * 0000000140410414: jnb     short loc_140410424
 * 0000000140410416: mov     eax, 1
 * 000000014041041B: xor     edx, edx
 * 000000014041041D: mov     ecx, 49h ; 'I'
 * 0000000140410422: wrmsr
 * 0000000140410424: btr     word ptr gs:278h, 5
 * 000000014041042F: jnb     loc_14041055A
 * 0000000140410435: call    loc_140410548
 * 000000014041043A: add     rsp, 8
 * 000000014041043E: call    loc_140410551
 * 0000000140410443: add     rsp, 8
 * 0000000140410447: call    loc_14041043A
 * 000000014041044C: add     rsp, 8
 * 0000000140410450: call    loc_140410443
 * 0000000140410455: add     rsp, 8
 * 0000000140410459: call    loc_14041044C
 * 000000014041045E: add     rsp, 8
 * 0000000140410462: call    loc_140410455
 * 0000000140410467: add     rsp, 8
 * 000000014041046B: call    loc_14041045E
 * 0000000140410470: add     rsp, 8
 * 0000000140410474: call    loc_140410467
 * 0000000140410479: add     rsp, 8
 * 000000014041047D: call    loc_140410470
 * 0000000140410482: add     rsp, 8
 * 0000000140410486: call    loc_140410479
 * 000000014041048B: add     rsp, 8
 * 000000014041048F: call    loc_140410482
 * 0000000140410494: add     rsp, 8
 * 0000000140410498: call    loc_14041048B
 * 000000014041049D: add     rsp, 8
 * 00000001404104A1: call    loc_140410494
 * 00000001404104A6: add     rsp, 8
 * 00000001404104AA: call    loc_14041049D
 * 00000001404104AF: add     rsp, 8
 * 00000001404104B3: call    loc_1404104A6
 * 00000001404104B8: add     rsp, 8
 * 00000001404104BC: call    loc_1404104AF
 * 00000001404104C1: add     rsp, 8
 * 00000001404104C5: call    loc_1404104B8
 * 00000001404104CA: add     rsp, 8
 * 00000001404104CE: call    loc_1404104C1
 * 00000001404104D3: add     rsp, 8
 * 00000001404104D7: call    loc_1404104CA
 * 00000001404104DC: add     rsp, 8
 * 00000001404104E0: call    loc_1404104D3
 * 00000001404104E5: add     rsp, 8
 * 00000001404104E9: call    loc_1404104DC
 * 00000001404104EE: add     rsp, 8
 * 00000001404104F2: call    loc_1404104E5
 * 00000001404104F7: add     rsp, 8
 * 00000001404104FB: call    loc_1404104EE
 * 0000000140410500: add     rsp, 8
 * 0000000140410504: call    loc_1404104F7
 * 0000000140410509: add     rsp, 8
 * 000000014041050D: call    loc_140410500
 * 0000000140410512: add     rsp, 8
 * 0000000140410516: call    loc_140410509
 * 000000014041051B: add     rsp, 8
 * 000000014041051F: call    loc_140410512
 * 0000000140410524: add     rsp, 8
 * 0000000140410528: call    loc_14041051B
 * 000000014041052D: add     rsp, 8
 * 0000000140410531: call    loc_140410524
 * 0000000140410536: add     rsp, 8
 * 000000014041053A: call    loc_14041052D
 * 000000014041053F: add     rsp, 8
 * 0000000140410543: call    loc_140410536
 * 0000000140410548: add     rsp, 8
 * 000000014041054C: call    loc_14041053F
 * 0000000140410551: add     rsp, 8
 * 0000000140410555: mov     eax, 0DADAh
 * 000000014041055A: mov     rdx, [rbp-40h]
 * 000000014041055E: mov     rcx, [rbp-48h]
 * 0000000140410562: mov     rax, [rbp-50h]
 * 0000000140410566: mov     rsp, rbp
 * 0000000140410569: mov     rbp, [rbp+0D8h]
 * 0000000140410570: add     rsp, 0E8h
 * 0000000140410577: test    cs:KiKvaShadow, 1
 * 000000014041057E: jz      short loc_140410585
 * 0000000140410580: jmp     KiKernelExit
 * 0000000140410585: swapgs
 * 0000000140410588: iretq
 * 000000014041058A: ldmxcsr dword ptr [rbp-54h]
 * 000000014041058E: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140410592: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140410596: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041059A: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014041059E: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404105A2: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404105A6: mov     r11, [rbp-20h]
 * 00000001404105AA: mov     r10, [rbp-28h]
 * 00000001404105AE: mov     r9, [rbp-30h]
 * 00000001404105B2: mov     r8, [rbp-38h]
 * 00000001404105B6: mov     rdx, [rbp-40h]
 * 00000001404105BA: mov     rcx, [rbp-48h]
 * 00000001404105BE: mov     rax, [rbp-50h]
 * 00000001404105C2: mov     rsp, rbp
 * 00000001404105C5: mov     rbp, [rbp+0D8h]
 * 00000001404105CC: add     rsp, 0E8h
 * 00000001404105D3: iretq
 */
