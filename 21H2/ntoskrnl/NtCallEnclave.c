/*
 * XREFs of NtCallEnclave @ 0x140408680
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     NtCallEnclave @ 0x140408680 (NtCallEnclave.c)
 *     KiUmsExit @ 0x140413A00 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 *     PsCallEnclave @ 0x14090D1D0 (PsCallEnclave.c)
 */

/*
 * Hex-Rays decompilation failed for NtCallEnclave @ 0x140408680
 * Reason: Hex-Rays returned no pseudocode for 0x140408680
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140408680: sub     rsp, 28h
 * 0000000140408684: xor     eax, eax
 * 0000000140408686: xorps   xmm0, xmm0
 * 0000000140408689: mov     [rbp-48h], eax
 * 000000014040868C: mov     [rbp-40h], eax
 * 000000014040868F: mov     [rbp-38h], eax
 * 0000000140408692: mov     [rbp-30h], eax
 * 0000000140408695: mov     [rbp-28h], eax
 * 0000000140408698: mov     [rbp-20h], eax
 * 000000014040869B: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014040869F: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001404086A3: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001404086A7: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001404086AB: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001404086AF: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001404086B3: call    PsCallEnclave
 * 00000001404086B8: mov     [rbp-50h], rax
 * 00000001404086BC: mov     rbx, [rbp+0C0h]
 * 00000001404086C3: mov     rdi, [rbp+0C8h]
 * 00000001404086CA: mov     rsi, [rbp+0D0h]
 * 00000001404086D1: cli
 * 00000001404086D2: test    byte ptr [rbp+0F0h], 1
 * 00000001404086D9: jz      loc_14040898C
 * 00000001404086DF: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404086E6: jz      short loc_1404086EB
 * 00000001404086E8: stac
 * 00000001404086EB: mov     rcx, gs:188h
 * 00000001404086F4: test    byte ptr [rcx+0C2h], 3
 * 00000001404086FB: jz      short loc_140408718
 * 00000001404086FD: mov     ecx, 1
 * 0000000140408702: mov     cr8, rcx
 * 0000000140408706: sti
 * 0000000140408707: call    KiInitiateUserApc
 * 000000014040870C: cli
 * 000000014040870D: mov     ecx, 0
 * 0000000140408712: mov     cr8, rcx
 * 0000000140408716: jmp     short loc_1404086EB
 * 0000000140408718: test    byte ptr gs:86Ch, 2
 * 0000000140408721: jz      short loc_14040872A
 * 0000000140408723: xor     ecx, ecx
 * 0000000140408725: call    KiUpdateStibpPairing
 * 000000014040872A: mov     rcx, gs:188h
 * 0000000140408733: test    dword ptr [rcx], 8000000h
 * 0000000140408739: jz      short loc_140408740
 * 000000014040873B: call    KiRestoreSetContextState
 * 0000000140408740: mov     rcx, gs:188h
 * 0000000140408749: test    dword ptr [rcx], 40010000h
 * 000000014040874F: jz      short loc_140408776
 * 0000000140408751: test    byte ptr [rcx+2], 1
 * 0000000140408755: jz      short loc_140408765
 * 0000000140408757: call    KiCopyCounters
 * 000000014040875C: mov     rcx, gs:188h
 * 0000000140408765: test    byte ptr [rcx+3], 40h
 * 0000000140408769: jz      short loc_140408776
 * 000000014040876B: lea     rsp, [rbp-80h]
 * 000000014040876F: mov     cl, 1
 * 0000000140408771: call    KiUmsExit
 * 0000000140408776: ldmxcsr dword ptr [rbp-54h]
 * 000000014040877A: cmp     word ptr [rbp+80h], 0
 * 0000000140408782: jz      short loc_140408789
 * 0000000140408784: call    KiRestoreDebugRegisterState
 * 0000000140408789: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014040878D: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140408791: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140408795: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140408799: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014040879D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404087A1: mov     r11, [rbp-20h]
 * 00000001404087A5: mov     r10, [rbp-28h]
 * 00000001404087A9: mov     r9, [rbp-30h]
 * 00000001404087AD: mov     r8, [rbp-38h]
 * 00000001404087B1: mov     byte ptr gs:856h, 0
 * 00000001404087BA: movzx   eax, word ptr gs:86Ah
 * 00000001404087C3: cmp     gs:864h, ax
 * 00000001404087CC: jz      short loc_1404087E0
 * 00000001404087CE: mov     gs:864h, ax
 * 00000001404087D7: mov     ecx, 48h ; 'H'
 * 00000001404087DC: xor     edx, edx
 * 00000001404087DE: wrmsr
 * 00000001404087E0: btr     word ptr gs:860h, 2
 * 00000001404087EB: jnb     short loc_1404087FB
 * 00000001404087ED: mov     eax, 1
 * 00000001404087F2: xor     edx, edx
 * 00000001404087F4: mov     ecx, 49h ; 'I'
 * 00000001404087F9: wrmsr
 * 00000001404087FB: btr     word ptr gs:860h, 5
 * 0000000140408806: jnb     loc_140408931
 * 000000014040880C: call    loc_14040891F
 * 0000000140408811: add     rsp, 8
 * 0000000140408815: call    loc_140408928
 * 000000014040881A: add     rsp, 8
 * 000000014040881E: call    loc_140408811
 * 0000000140408823: add     rsp, 8
 * 0000000140408827: call    loc_14040881A
 * 000000014040882C: add     rsp, 8
 * 0000000140408830: call    loc_140408823
 * 0000000140408835: add     rsp, 8
 * 0000000140408839: call    loc_14040882C
 * 000000014040883E: add     rsp, 8
 * 0000000140408842: call    loc_140408835
 * 0000000140408847: add     rsp, 8
 * 000000014040884B: call    loc_14040883E
 * 0000000140408850: add     rsp, 8
 * 0000000140408854: call    loc_140408847
 * 0000000140408859: add     rsp, 8
 * 000000014040885D: call    loc_140408850
 * 0000000140408862: add     rsp, 8
 * 0000000140408866: call    loc_140408859
 * 000000014040886B: add     rsp, 8
 * 000000014040886F: call    loc_140408862
 * 0000000140408874: add     rsp, 8
 * 0000000140408878: call    loc_14040886B
 * 000000014040887D: add     rsp, 8
 * 0000000140408881: call    loc_140408874
 * 0000000140408886: add     rsp, 8
 * 000000014040888A: call    loc_14040887D
 * 000000014040888F: add     rsp, 8
 * 0000000140408893: call    loc_140408886
 * 0000000140408898: add     rsp, 8
 * 000000014040889C: call    loc_14040888F
 * 00000001404088A1: add     rsp, 8
 * 00000001404088A5: call    loc_140408898
 * 00000001404088AA: add     rsp, 8
 * 00000001404088AE: call    loc_1404088A1
 * 00000001404088B3: add     rsp, 8
 * 00000001404088B7: call    loc_1404088AA
 * 00000001404088BC: add     rsp, 8
 * 00000001404088C0: call    loc_1404088B3
 * 00000001404088C5: add     rsp, 8
 * 00000001404088C9: call    loc_1404088BC
 * 00000001404088CE: add     rsp, 8
 * 00000001404088D2: call    loc_1404088C5
 * 00000001404088D7: add     rsp, 8
 * 00000001404088DB: call    loc_1404088CE
 * 00000001404088E0: add     rsp, 8
 * 00000001404088E4: call    loc_1404088D7
 * 00000001404088E9: add     rsp, 8
 * 00000001404088ED: call    loc_1404088E0
 * 00000001404088F2: add     rsp, 8
 * 00000001404088F6: call    loc_1404088E9
 * 00000001404088FB: add     rsp, 8
 * 00000001404088FF: call    loc_1404088F2
 * 0000000140408904: add     rsp, 8
 * 0000000140408908: call    loc_1404088FB
 * 000000014040890D: add     rsp, 8
 * 0000000140408911: call    loc_140408904
 * 0000000140408916: add     rsp, 8
 * 000000014040891A: call    loc_14040890D
 * 000000014040891F: add     rsp, 8
 * 0000000140408923: call    loc_140408916
 * 0000000140408928: add     rsp, 8
 * 000000014040892C: mov     eax, 0DADAh
 * 0000000140408931: test    word ptr gs:860h, 80h
 * 000000014040893C: jz      short loc_14040894A
 * 000000014040893E: xor     eax, eax
 * 0000000140408940: xor     edx, edx
 * 0000000140408942: mov     ecx, 1
 * 0000000140408947: div     rcx
 * 000000014040894A: mov     rdx, [rbp-40h]
 * 000000014040894E: mov     rcx, [rbp-48h]
 * 0000000140408952: mov     rax, [rbp-50h]
 * 0000000140408956: mov     rsp, rbp
 * 0000000140408959: mov     rbp, [rbp+0D8h]
 * 0000000140408960: add     rsp, 0E8h
 * 0000000140408967: test    cs:KiKvaShadow, 1
 * 000000014040896E: jz      short loc_140408975
 * 0000000140408970: jmp     KiKernelExit
 * 0000000140408975: test    word ptr gs:860h, 100h
 * 0000000140408980: jz      short loc_140408987
 * 0000000140408982: verw    [rsp-188h+arg_1A0]
 * 0000000140408987: swapgs
 * 000000014040898A: iretq
 * 000000014040898C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140408990: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140408994: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140408998: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014040899C: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404089A0: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404089A4: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404089A8: mov     r11, [rbp-20h]
 * 00000001404089AC: mov     r10, [rbp-28h]
 * 00000001404089B0: mov     r9, [rbp-30h]
 * 00000001404089B4: mov     r8, [rbp-38h]
 * 00000001404089B8: mov     rdx, [rbp-40h]
 * 00000001404089BC: mov     rcx, [rbp-48h]
 * 00000001404089C0: mov     rax, [rbp-50h]
 * 00000001404089C4: mov     rsp, rbp
 * 00000001404089C7: mov     rbp, [rbp+0D8h]
 * 00000001404089CE: add     rsp, 0E8h
 * 00000001404089D5: iretq
 */
