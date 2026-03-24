/*
 * XREFs of KiIpiInterrupt @ 0x140403720
 * Callers:
 *     KiIpiInterruptShadow @ 0x140A18240 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1402DF2E0 (KiCheckForSListAddress.c)
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402EBA40 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402F5F40 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1404036E0 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x140403720 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x140403DB0 (KiIpiInterruptSubDispatch.c)
 *     KzSetIrqlUnsafe @ 0x140511100 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140517EE0 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x140403720
 * Reason: Hex-Rays returned no pseudocode for 0x140403720
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140403720: sub     rsp, 8
 * 0000000140403724: push    rbp
 * 0000000140403725: push    rsi
 * 0000000140403726: sub     rsp, 150h
 * 000000014040372D: lea     rbp, [rsp+80h]
 * 0000000140403735: mov     [rbp+0E8h+var_13D], 0
 * 0000000140403739: mov     [rbp+0E8h+var_138], rax
 * 000000014040373D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140403741: mov     [rbp+0E8h+var_128], rdx
 * 0000000140403745: mov     [rbp+0E8h+var_120], r8
 * 0000000140403749: mov     [rbp+0E8h+var_118], r9
 * 000000014040374D: mov     [rbp+0E8h+var_110], r10
 * 0000000140403751: mov     [rbp+0E8h+var_108], r11
 * 0000000140403755: test    [rbp+0E8h+arg_0], 1
 * 000000014040375C: jnz     short loc_14040378B
 * 000000014040375E: lfence
 * 0000000140403761: test    byte ptr gs:278h, 1
 * 000000014040376A: jnz     short loc_140403774
 * 000000014040376C: lfence
 * 000000014040376F: jmp     loc_140403981
 * 0000000140403774: movzx   eax, byte ptr gs:27Ah
 * 000000014040377D: mov     ecx, 48h ; 'H'
 * 0000000140403782: xor     edx, edx
 * 0000000140403784: wrmsr
 * 0000000140403786: jmp     loc_140403981
 * 000000014040378B: test    cs:KiKvaShadow, 1
 * 0000000140403792: jnz     short loc_140403797
 * 0000000140403794: swapgs
 * 0000000140403797: lfence
 * 000000014040379A: mov     r10, gs:188h
 * 00000001404037A3: mov     rcx, gs:188h
 * 00000001404037AC: mov     rcx, [rcx+220h]
 * 00000001404037B3: mov     rcx, [rcx+9E0h]
 * 00000001404037BA: mov     gs:270h, rcx
 * 00000001404037C3: mov     cl, gs:850h
 * 00000001404037CB: mov     gs:851h, cl
 * 00000001404037D3: mov     cl, gs:278h
 * 00000001404037DB: mov     gs:852h, cl
 * 00000001404037E3: movzx   eax, byte ptr gs:27Bh
 * 00000001404037EC: cmp     gs:27Ah, al
 * 00000001404037F4: jz      short loc_140403807
 * 00000001404037F6: mov     gs:27Ah, al
 * 00000001404037FE: mov     ecx, 48h ; 'H'
 * 0000000140403803: xor     edx, edx
 * 0000000140403805: wrmsr
 * 0000000140403807: movzx   edx, byte ptr gs:278h
 * 0000000140403810: test    edx, 8
 * 0000000140403816: jz      short loc_14040382F
 * 0000000140403818: mov     eax, 1
 * 000000014040381D: xor     edx, edx
 * 000000014040381F: mov     ecx, 49h ; 'I'
 * 0000000140403824: wrmsr
 * 0000000140403826: movzx   edx, byte ptr gs:278h
 * 000000014040382F: test    edx, 2
 * 0000000140403835: jz      loc_140403960
 * 000000014040383B: call    loc_14040394E
 * 0000000140403840: add     rsp, 8
 * 0000000140403844: call    loc_140403957
 * 0000000140403849: add     rsp, 8
 * 000000014040384D: call    loc_140403840
 * 0000000140403852: add     rsp, 8
 * 0000000140403856: call    loc_140403849
 * 000000014040385B: add     rsp, 8
 * 000000014040385F: call    loc_140403852
 * 0000000140403864: add     rsp, 8
 * 0000000140403868: call    loc_14040385B
 * 000000014040386D: add     rsp, 8
 * 0000000140403871: call    loc_140403864
 * 0000000140403876: add     rsp, 8
 * 000000014040387A: call    loc_14040386D
 * 000000014040387F: add     rsp, 8
 * 0000000140403883: call    loc_140403876
 * 0000000140403888: add     rsp, 8
 * 000000014040388C: call    loc_14040387F
 * 0000000140403891: add     rsp, 8
 * 0000000140403895: call    loc_140403888
 * 000000014040389A: add     rsp, 8
 * 000000014040389E: call    loc_140403891
 * 00000001404038A3: add     rsp, 8
 * 00000001404038A7: call    loc_14040389A
 * 00000001404038AC: add     rsp, 8
 * 00000001404038B0: call    loc_1404038A3
 * 00000001404038B5: add     rsp, 8
 * 00000001404038B9: call    loc_1404038AC
 * 00000001404038BE: add     rsp, 8
 * 00000001404038C2: call    loc_1404038B5
 * 00000001404038C7: add     rsp, 8
 * 00000001404038CB: call    loc_1404038BE
 * 00000001404038D0: add     rsp, 8
 * 00000001404038D4: call    loc_1404038C7
 * 00000001404038D9: add     rsp, 8
 * 00000001404038DD: call    loc_1404038D0
 * 00000001404038E2: add     rsp, 8
 * 00000001404038E6: call    loc_1404038D9
 * 00000001404038EB: add     rsp, 8
 * 00000001404038EF: call    loc_1404038E2
 * 00000001404038F4: add     rsp, 8
 * 00000001404038F8: call    loc_1404038EB
 * 00000001404038FD: add     rsp, 8
 * 0000000140403901: call    loc_1404038F4
 * 0000000140403906: add     rsp, 8
 * 000000014040390A: call    loc_1404038FD
 * 000000014040390F: add     rsp, 8
 * 0000000140403913: call    loc_140403906
 * 0000000140403918: add     rsp, 8
 * 000000014040391C: call    loc_14040390F
 * 0000000140403921: add     rsp, 8
 * 0000000140403925: call    loc_140403918
 * 000000014040392A: add     rsp, 8
 * 000000014040392E: call    loc_140403921
 * 0000000140403933: add     rsp, 8
 * 0000000140403937: call    loc_14040392A
 * 000000014040393C: add     rsp, 8
 * 0000000140403940: call    loc_140403933
 * 0000000140403945: add     rsp, 8
 * 0000000140403949: call    loc_14040393C
 * 000000014040394E: add     rsp, 8
 * 0000000140403952: call    loc_140403945
 * 0000000140403957: add     rsp, 8
 * 000000014040395B: mov     eax, 0DADAh
 * 0000000140403960: lfence
 * 0000000140403963: mov     byte ptr gs:853h, 0
 * 000000014040396C: test    byte ptr [r10+3], 3
 * 0000000140403971: mov     [rbp+0E8h+var_68], 0
 * 000000014040397A: jz      short loc_140403981
 * 000000014040397C: call    KiSaveDebugRegisterState
 * 0000000140403981: cld
 * 0000000140403982: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140403986: ldmxcsr dword ptr gs:180h
 * 000000014040398F: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140403993: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140403997: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040399B: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040399F: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001404039A3: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001404039A7: cmp     byte ptr gs:801Ah, 0
 * 00000001404039B0: jz      short loc_1404039B7
 * 00000001404039B2: call    KeWakeProcessor
 * 00000001404039B7: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001404039BE: cmp     rax, [rbp+0E8h]
 * 00000001404039C5: jnb     short loc_1404039E0
 * 00000001404039C7: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001404039CE: cmp     rax, [rbp+0E8h]
 * 00000001404039D5: jb      short loc_1404039E0
 * 00000001404039D7: lea     rcx, [rbp+0E8h+var_168]
 * 00000001404039DB: call    KiCheckForSListAddress
 * 00000001404039E0: xor     esi, esi
 * 00000001404039E2: inc     dword ptr gs:8000h
 * 00000001404039EA: mov     rdx, rsp
 * 00000001404039ED: mov     rcx, gs:8758h
 * 00000001404039F6: lea     rax, [rcx-6000h]
 * 00000001404039FD: cmp     rax, rsp
 * 0000000140403A00: ja      short loc_140403A07
 * 0000000140403A02: cmp     rsp, rcx
 * 0000000140403A05: jb      short loc_140403A13
 * 0000000140403A07: cmp     cs:KiBugCheckActive, 0
 * 0000000140403A0E: jnz     short loc_140403A13
 * 0000000140403A10: mov     rsp, rcx
 * 0000000140403A13: sub     rsp, 20h
 * 0000000140403A17: mov     qword ptr [rsp+108h+var_F8], rdx
 * 0000000140403A1C: call    KiIpiInterruptSubDispatch
 * 0000000140403A21: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 0000000140403A26: mov     rcx, rsi
 * 0000000140403A29: call    HalPerformEndOfInterrupt
 * 0000000140403A2E: mov     rcx, gs:20h
 * 0000000140403A37: cmp     byte ptr [rcx+20h], 1
 * 0000000140403A3B: ja      short loc_140403AB7
 * 0000000140403A3D: rdtsc
 * 0000000140403A3F: shl     rdx, 20h
 * 0000000140403A43: or      rax, rdx
 * 0000000140403A46: sub     rax, [rcx+7EC0h]
 * 0000000140403A4D: add     [rcx+7F38h], rax
 * 0000000140403A54: add     [rcx+7EC0h], rax
 * 0000000140403A5B: mov     r8, rax
 * 0000000140403A5E: mov     rax, [rcx+8]
 * 0000000140403A62: test    byte ptr [rax+2], 72h
 * 0000000140403A66: jz      short loc_140403A7B
 * 0000000140403A68: xor     edx, edx
 * 0000000140403A6A: call    KiBeginThreadAccountingPeriod
 * 0000000140403A6F: mov     rcx, gs:20h
 * 0000000140403A78: inc     byte ptr [rcx+20h]
 * 0000000140403A7B: mov     dl, [rcx+6]
 * 0000000140403A7E: and     byte ptr [rcx+6], 0
 * 0000000140403A82: cmp     byte ptr [rcx+7], 0
 * 0000000140403A86: jnz     short loc_140403AB7
 * 0000000140403A88: test    dl, dl
 * 0000000140403A8A: jz      short loc_140403AB7
 * 0000000140403A8C: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140403A90: jnb     short loc_140403A9D
 * 0000000140403A92: and     byte ptr [rcx+20h], 0
 * 0000000140403A96: call    KiDpcInterruptBypass
 * 0000000140403A9B: jmp     short loc_140403ABA
 * 0000000140403A9D: mov     ecx, 2
 * 0000000140403AA2: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140403AA9: nop     dword ptr [rax+rax+00h]
 * 0000000140403AAE: mov     rcx, gs:20h
 * 0000000140403AB7: dec     byte ptr [rcx+20h]
 * 0000000140403ABA: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140403ABE: cmp     cs:KiIrqlFlags, 0
 * 0000000140403AC5: jz      short loc_140403ACE
 * 0000000140403AC7: call    KzSetIrqlUnsafe
 * 0000000140403ACC: jmp     short loc_140403AD2
 * 0000000140403ACE: mov     cr8, rcx
 * 0000000140403AD2: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140403AD9: test    [rbp+0E8h+arg_0], 1
 * 0000000140403AE0: jz      loc_140403D55
 * 0000000140403AE6: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140403AED: jz      short loc_140403AF2
 * 0000000140403AEF: stac
 * 0000000140403AF2: mov     rcx, gs:188h
 * 0000000140403AFB: test    byte ptr [rcx+0C2h], 3
 * 0000000140403B02: jz      short loc_140403B1F
 * 0000000140403B04: mov     ecx, 1
 * 0000000140403B09: mov     cr8, rcx
 * 0000000140403B0D: sti
 * 0000000140403B0E: call    KiInitiateUserApc
 * 0000000140403B13: cli
 * 0000000140403B14: mov     ecx, 0
 * 0000000140403B19: mov     cr8, rcx
 * 0000000140403B1D: jmp     short loc_140403AF2
 * 0000000140403B1F: test    byte ptr gs:27Eh, 2
 * 0000000140403B28: jz      short loc_140403B31
 * 0000000140403B2A: xor     ecx, ecx
 * 0000000140403B2C: call    KiUpdateStibpPairing
 * 0000000140403B31: mov     rcx, gs:188h
 * 0000000140403B3A: test    dword ptr [rcx], 8000000h
 * 0000000140403B40: jz      short loc_140403B47
 * 0000000140403B42: call    KiRestoreSetContextState
 * 0000000140403B47: mov     rcx, gs:188h
 * 0000000140403B50: test    dword ptr [rcx], 40010000h
 * 0000000140403B56: jz      short loc_140403B6C
 * 0000000140403B58: test    byte ptr [rcx+2], 1
 * 0000000140403B5C: jz      short loc_140403B6C
 * 0000000140403B5E: call    KiCopyCounters
 * 0000000140403B63: mov     rcx, gs:188h
 * 0000000140403B6C: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140403B70: cmp     [rbp+0E8h+var_68], 0
 * 0000000140403B78: jz      short loc_140403B7F
 * 0000000140403B7A: call    KiRestoreDebugRegisterState
 * 0000000140403B7F: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140403B83: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140403B87: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140403B8B: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140403B8F: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140403B93: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140403B97: mov     r11, [rbp+0E8h+var_108]
 * 0000000140403B9B: mov     r10, [rbp+0E8h+var_110]
 * 0000000140403B9F: mov     r9, [rbp+0E8h+var_118]
 * 0000000140403BA3: mov     r8, [rbp+0E8h+var_120]
 * 0000000140403BA7: mov     byte ptr gs:853h, 0
 * 0000000140403BB0: movzx   eax, byte ptr gs:27Dh
 * 0000000140403BB9: cmp     gs:27Ah, al
 * 0000000140403BC1: jz      short loc_140403BD4
 * 0000000140403BC3: mov     gs:27Ah, al
 * 0000000140403BCB: mov     ecx, 48h ; 'H'
 * 0000000140403BD0: xor     edx, edx
 * 0000000140403BD2: wrmsr
 * 0000000140403BD4: btr     word ptr gs:278h, 2
 * 0000000140403BDF: jnb     short loc_140403BEF
 * 0000000140403BE1: mov     eax, 1
 * 0000000140403BE6: xor     edx, edx
 * 0000000140403BE8: mov     ecx, 49h ; 'I'
 * 0000000140403BED: wrmsr
 * 0000000140403BEF: btr     word ptr gs:278h, 5
 * 0000000140403BFA: jnb     loc_140403D25
 * 0000000140403C00: call    loc_140403D13
 * 0000000140403C05: add     rsp, 8
 * 0000000140403C09: call    loc_140403D1C
 * 0000000140403C0E: add     rsp, 8
 * 0000000140403C12: call    loc_140403C05
 * 0000000140403C17: add     rsp, 8
 * 0000000140403C1B: call    loc_140403C0E
 * 0000000140403C20: add     rsp, 8
 * 0000000140403C24: call    loc_140403C17
 * 0000000140403C29: add     rsp, 8
 * 0000000140403C2D: call    loc_140403C20
 * 0000000140403C32: add     rsp, 8
 * 0000000140403C36: call    loc_140403C29
 * 0000000140403C3B: add     rsp, 8
 * 0000000140403C3F: call    loc_140403C32
 * 0000000140403C44: add     rsp, 8
 * 0000000140403C48: call    loc_140403C3B
 * 0000000140403C4D: add     rsp, 8
 * 0000000140403C51: call    loc_140403C44
 * 0000000140403C56: add     rsp, 8
 * 0000000140403C5A: call    loc_140403C4D
 * 0000000140403C5F: add     rsp, 8
 * 0000000140403C63: call    loc_140403C56
 * 0000000140403C68: add     rsp, 8
 * 0000000140403C6C: call    loc_140403C5F
 * 0000000140403C71: add     rsp, 8
 * 0000000140403C75: call    loc_140403C68
 * 0000000140403C7A: add     rsp, 8
 * 0000000140403C7E: call    loc_140403C71
 * 0000000140403C83: add     rsp, 8
 * 0000000140403C87: call    loc_140403C7A
 * 0000000140403C8C: add     rsp, 8
 * 0000000140403C90: call    loc_140403C83
 * 0000000140403C95: add     rsp, 8
 * 0000000140403C99: call    loc_140403C8C
 * 0000000140403C9E: add     rsp, 8
 * 0000000140403CA2: call    loc_140403C95
 * 0000000140403CA7: add     rsp, 8
 * 0000000140403CAB: call    loc_140403C9E
 * 0000000140403CB0: add     rsp, 8
 * 0000000140403CB4: call    loc_140403CA7
 * 0000000140403CB9: add     rsp, 8
 * 0000000140403CBD: call    loc_140403CB0
 * 0000000140403CC2: add     rsp, 8
 * 0000000140403CC6: call    loc_140403CB9
 * 0000000140403CCB: add     rsp, 8
 * 0000000140403CCF: call    loc_140403CC2
 * 0000000140403CD4: add     rsp, 8
 * 0000000140403CD8: call    loc_140403CCB
 * 0000000140403CDD: add     rsp, 8
 * 0000000140403CE1: call    loc_140403CD4
 * 0000000140403CE6: add     rsp, 8
 * 0000000140403CEA: call    loc_140403CDD
 * 0000000140403CEF: add     rsp, 8
 * 0000000140403CF3: call    loc_140403CE6
 * 0000000140403CF8: add     rsp, 8
 * 0000000140403CFC: call    loc_140403CEF
 * 0000000140403D01: add     rsp, 8
 * 0000000140403D05: call    loc_140403CF8
 * 0000000140403D0A: add     rsp, 8
 * 0000000140403D0E: call    loc_140403D01
 * 0000000140403D13: add     rsp, 8
 * 0000000140403D17: call    loc_140403D0A
 * 0000000140403D1C: add     rsp, 8
 * 0000000140403D20: mov     eax, 0DADAh
 * 0000000140403D25: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140403D29: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140403D2D: mov     rax, [rbp+0E8h+var_138]
 * 0000000140403D31: mov     rsp, rbp
 * 0000000140403D34: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140403D3B: add     rsp, 0E8h
 * 0000000140403D42: test    cs:KiKvaShadow, 1
 * 0000000140403D49: jz      short loc_140403D50
 * 0000000140403D4B: jmp     KiKernelExit
 * 0000000140403D50: swapgs
 * 0000000140403D53: iretq
 * 0000000140403D55: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140403D59: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140403D5D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140403D61: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140403D65: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140403D69: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140403D6D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140403D71: mov     r11, [rbp+0E8h+var_108]
 * 0000000140403D75: mov     r10, [rbp+0E8h+var_110]
 * 0000000140403D79: mov     r9, [rbp+0E8h+var_118]
 * 0000000140403D7D: mov     r8, [rbp+0E8h+var_120]
 * 0000000140403D81: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140403D85: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140403D89: mov     rax, [rbp+0E8h+var_138]
 * 0000000140403D8D: mov     rsp, rbp
 * 0000000140403D90: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140403D97: add     rsp, 0E8h
 * 0000000140403D9E: iretq
 */
