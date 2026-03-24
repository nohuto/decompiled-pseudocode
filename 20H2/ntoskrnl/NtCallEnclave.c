/*
 * XREFs of NtCallEnclave @ 0x140406010
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     NtCallEnclave @ 0x140406010 (NtCallEnclave.c)
 *     KiUmsExit @ 0x140410EC0 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 *     PsCallEnclave @ 0x14090FA20 (PsCallEnclave.c)
 */

/*
 * Hex-Rays decompilation failed for NtCallEnclave @ 0x140406010
 * Reason: Hex-Rays returned no pseudocode for 0x140406010
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140406010: sub     rsp, 28h
 * 0000000140406014: xor     eax, eax
 * 0000000140406016: xorps   xmm0, xmm0
 * 0000000140406019: mov     [rbp-48h], eax
 * 000000014040601C: mov     [rbp-40h], eax
 * 000000014040601F: mov     [rbp-38h], eax
 * 0000000140406022: mov     [rbp-30h], eax
 * 0000000140406025: mov     [rbp-28h], eax
 * 0000000140406028: mov     [rbp-20h], eax
 * 000000014040602B: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014040602F: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140406033: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140406037: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014040603B: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014040603F: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140406043: call    PsCallEnclave
 * 0000000140406048: mov     [rbp-50h], rax
 * 000000014040604C: mov     rbx, [rbp+0C0h]
 * 0000000140406053: mov     rdi, [rbp+0C8h]
 * 000000014040605A: mov     rsi, [rbp+0D0h]
 * 0000000140406061: cli
 * 0000000140406062: test    byte ptr [rbp+0F0h], 1
 * 0000000140406069: jz      loc_1404062EF
 * 000000014040606F: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140406076: jz      short loc_14040607B
 * 0000000140406078: stac
 * 000000014040607B: mov     rcx, gs:188h
 * 0000000140406084: test    byte ptr [rcx+0C2h], 3
 * 000000014040608B: jz      short loc_1404060A8
 * 000000014040608D: mov     ecx, 1
 * 0000000140406092: mov     cr8, rcx
 * 0000000140406096: sti
 * 0000000140406097: call    KiInitiateUserApc
 * 000000014040609C: cli
 * 000000014040609D: mov     ecx, 0
 * 00000001404060A2: mov     cr8, rcx
 * 00000001404060A6: jmp     short loc_14040607B
 * 00000001404060A8: test    byte ptr gs:27Eh, 2
 * 00000001404060B1: jz      short loc_1404060BA
 * 00000001404060B3: xor     ecx, ecx
 * 00000001404060B5: call    KiUpdateStibpPairing
 * 00000001404060BA: mov     rcx, gs:188h
 * 00000001404060C3: test    dword ptr [rcx], 8000000h
 * 00000001404060C9: jz      short loc_1404060D0
 * 00000001404060CB: call    KiRestoreSetContextState
 * 00000001404060D0: mov     rcx, gs:188h
 * 00000001404060D9: test    dword ptr [rcx], 40010000h
 * 00000001404060DF: jz      short loc_140406106
 * 00000001404060E1: test    byte ptr [rcx+2], 1
 * 00000001404060E5: jz      short loc_1404060F5
 * 00000001404060E7: call    KiCopyCounters
 * 00000001404060EC: mov     rcx, gs:188h
 * 00000001404060F5: test    byte ptr [rcx+3], 40h
 * 00000001404060F9: jz      short loc_140406106
 * 00000001404060FB: lea     rsp, [rbp-80h]
 * 00000001404060FF: mov     cl, 1
 * 0000000140406101: call    KiUmsExit
 * 0000000140406106: ldmxcsr dword ptr [rbp-54h]
 * 000000014040610A: cmp     word ptr [rbp+80h], 0
 * 0000000140406112: jz      short loc_140406119
 * 0000000140406114: call    KiRestoreDebugRegisterState
 * 0000000140406119: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014040611D: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140406121: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140406125: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140406129: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014040612D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140406131: mov     r11, [rbp-20h]
 * 0000000140406135: mov     r10, [rbp-28h]
 * 0000000140406139: mov     r9, [rbp-30h]
 * 000000014040613D: mov     r8, [rbp-38h]
 * 0000000140406141: mov     byte ptr gs:853h, 0
 * 000000014040614A: movzx   eax, byte ptr gs:27Dh
 * 0000000140406153: cmp     gs:27Ah, al
 * 000000014040615B: jz      short loc_14040616E
 * 000000014040615D: mov     gs:27Ah, al
 * 0000000140406165: mov     ecx, 48h ; 'H'
 * 000000014040616A: xor     edx, edx
 * 000000014040616C: wrmsr
 * 000000014040616E: btr     word ptr gs:278h, 2
 * 0000000140406179: jnb     short loc_140406189
 * 000000014040617B: mov     eax, 1
 * 0000000140406180: xor     edx, edx
 * 0000000140406182: mov     ecx, 49h ; 'I'
 * 0000000140406187: wrmsr
 * 0000000140406189: btr     word ptr gs:278h, 5
 * 0000000140406194: jnb     loc_1404062BF
 * 000000014040619A: call    loc_1404062AD
 * 000000014040619F: add     rsp, 8
 * 00000001404061A3: call    loc_1404062B6
 * 00000001404061A8: add     rsp, 8
 * 00000001404061AC: call    loc_14040619F
 * 00000001404061B1: add     rsp, 8
 * 00000001404061B5: call    loc_1404061A8
 * 00000001404061BA: add     rsp, 8
 * 00000001404061BE: call    loc_1404061B1
 * 00000001404061C3: add     rsp, 8
 * 00000001404061C7: call    loc_1404061BA
 * 00000001404061CC: add     rsp, 8
 * 00000001404061D0: call    loc_1404061C3
 * 00000001404061D5: add     rsp, 8
 * 00000001404061D9: call    loc_1404061CC
 * 00000001404061DE: add     rsp, 8
 * 00000001404061E2: call    loc_1404061D5
 * 00000001404061E7: add     rsp, 8
 * 00000001404061EB: call    loc_1404061DE
 * 00000001404061F0: add     rsp, 8
 * 00000001404061F4: call    loc_1404061E7
 * 00000001404061F9: add     rsp, 8
 * 00000001404061FD: call    loc_1404061F0
 * 0000000140406202: add     rsp, 8
 * 0000000140406206: call    loc_1404061F9
 * 000000014040620B: add     rsp, 8
 * 000000014040620F: call    loc_140406202
 * 0000000140406214: add     rsp, 8
 * 0000000140406218: call    loc_14040620B
 * 000000014040621D: add     rsp, 8
 * 0000000140406221: call    loc_140406214
 * 0000000140406226: add     rsp, 8
 * 000000014040622A: call    loc_14040621D
 * 000000014040622F: add     rsp, 8
 * 0000000140406233: call    loc_140406226
 * 0000000140406238: add     rsp, 8
 * 000000014040623C: call    loc_14040622F
 * 0000000140406241: add     rsp, 8
 * 0000000140406245: call    loc_140406238
 * 000000014040624A: add     rsp, 8
 * 000000014040624E: call    loc_140406241
 * 0000000140406253: add     rsp, 8
 * 0000000140406257: call    loc_14040624A
 * 000000014040625C: add     rsp, 8
 * 0000000140406260: call    loc_140406253
 * 0000000140406265: add     rsp, 8
 * 0000000140406269: call    loc_14040625C
 * 000000014040626E: add     rsp, 8
 * 0000000140406272: call    loc_140406265
 * 0000000140406277: add     rsp, 8
 * 000000014040627B: call    loc_14040626E
 * 0000000140406280: add     rsp, 8
 * 0000000140406284: call    loc_140406277
 * 0000000140406289: add     rsp, 8
 * 000000014040628D: call    loc_140406280
 * 0000000140406292: add     rsp, 8
 * 0000000140406296: call    loc_140406289
 * 000000014040629B: add     rsp, 8
 * 000000014040629F: call    loc_140406292
 * 00000001404062A4: add     rsp, 8
 * 00000001404062A8: call    loc_14040629B
 * 00000001404062AD: add     rsp, 8
 * 00000001404062B1: call    loc_1404062A4
 * 00000001404062B6: add     rsp, 8
 * 00000001404062BA: mov     eax, 0DADAh
 * 00000001404062BF: mov     rdx, [rbp-40h]
 * 00000001404062C3: mov     rcx, [rbp-48h]
 * 00000001404062C7: mov     rax, [rbp-50h]
 * 00000001404062CB: mov     rsp, rbp
 * 00000001404062CE: mov     rbp, [rbp+0D8h]
 * 00000001404062D5: add     rsp, 0E8h
 * 00000001404062DC: test    cs:KiKvaShadow, 1
 * 00000001404062E3: jz      short loc_1404062EA
 * 00000001404062E5: jmp     KiKernelExit
 * 00000001404062EA: swapgs
 * 00000001404062ED: iretq
 * 00000001404062EF: ldmxcsr dword ptr [rbp-54h]
 * 00000001404062F3: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404062F7: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404062FB: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404062FF: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140406303: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140406307: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014040630B: mov     r11, [rbp-20h]
 * 000000014040630F: mov     r10, [rbp-28h]
 * 0000000140406313: mov     r9, [rbp-30h]
 * 0000000140406317: mov     r8, [rbp-38h]
 * 000000014040631B: mov     rdx, [rbp-40h]
 * 000000014040631F: mov     rcx, [rbp-48h]
 * 0000000140406323: mov     rax, [rbp-50h]
 * 0000000140406327: mov     rsp, rbp
 * 000000014040632A: mov     rbp, [rbp+0D8h]
 * 0000000140406331: add     rsp, 0E8h
 * 0000000140406338: iretq
 */
