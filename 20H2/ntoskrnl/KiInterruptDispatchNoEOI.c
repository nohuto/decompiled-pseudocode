/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x1403FE790
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402EBA40 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FD9F0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x1403FE790 (KiInterruptDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1404036E0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140511100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x1403FE790
 * Reason: Hex-Rays returned no pseudocode for 0x1403FE790
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FE790: mov     rdx, rsp
 * 00000001403FE793: mov     rcx, gs:8758h
 * 00000001403FE79C: lea     rax, [rcx-6000h]
 * 00000001403FE7A3: cmp     rax, rsp
 * 00000001403FE7A6: ja      short loc_1403FE7AD
 * 00000001403FE7A8: cmp     rsp, rcx
 * 00000001403FE7AB: jb      short loc_1403FE7B9
 * 00000001403FE7AD: cmp     cs:KiBugCheckActive, 0
 * 00000001403FE7B4: jnz     short loc_1403FE7B9
 * 00000001403FE7B6: mov     rsp, rcx
 * 00000001403FE7B9: sub     rsp, 20h
 * 00000001403FE7BD: mov     [rsp+20h+var_10], rdx
 * 00000001403FE7C2: call    KiInterruptSubDispatchNoLock
 * 00000001403FE7C7: mov     rsp, [rsp+20h+var_10]
 * 00000001403FE7CC: mov     rcx, gs:20h
 * 00000001403FE7D5: cmp     byte ptr [rcx+20h], 1
 * 00000001403FE7D9: ja      short loc_1403FE855
 * 00000001403FE7DB: rdtsc
 * 00000001403FE7DD: shl     rdx, 20h
 * 00000001403FE7E1: or      rax, rdx
 * 00000001403FE7E4: sub     rax, [rcx+7EC0h]
 * 00000001403FE7EB: add     [rcx+7F38h], rax
 * 00000001403FE7F2: add     [rcx+7EC0h], rax
 * 00000001403FE7F9: mov     r8, rax
 * 00000001403FE7FC: mov     rax, [rcx+8]
 * 00000001403FE800: test    byte ptr [rax+2], 72h
 * 00000001403FE804: jz      short loc_1403FE819
 * 00000001403FE806: xor     edx, edx
 * 00000001403FE808: call    KiBeginThreadAccountingPeriod
 * 00000001403FE80D: mov     rcx, gs:20h
 * 00000001403FE816: inc     byte ptr [rcx+20h]
 * 00000001403FE819: mov     dl, [rcx+6]
 * 00000001403FE81C: and     byte ptr [rcx+6], 0
 * 00000001403FE820: cmp     byte ptr [rcx+7], 0
 * 00000001403FE824: jnz     short loc_1403FE855
 * 00000001403FE826: test    dl, dl
 * 00000001403FE828: jz      short loc_1403FE855
 * 00000001403FE82A: cmp     byte ptr [rbp-57h], 2
 * 00000001403FE82E: jnb     short loc_1403FE83B
 * 00000001403FE830: and     byte ptr [rcx+20h], 0
 * 00000001403FE834: call    KiDpcInterruptBypass
 * 00000001403FE839: jmp     short loc_1403FE858
 * 00000001403FE83B: mov     ecx, 2
 * 00000001403FE840: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FE847: nop     dword ptr [rax+rax+00h]
 * 00000001403FE84C: mov     rcx, gs:20h
 * 00000001403FE855: dec     byte ptr [rcx+20h]
 * 00000001403FE858: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403FE85C: cmp     cs:KiIrqlFlags, 0
 * 00000001403FE863: jz      short loc_1403FE86C
 * 00000001403FE865: call    KzSetIrqlUnsafe
 * 00000001403FE86A: jmp     short loc_1403FE870
 * 00000001403FE86C: mov     cr8, rcx
 * 00000001403FE870: mov     rsi, [rbp+0D0h]
 * 00000001403FE877: test    byte ptr [rbp+0F0h], 1
 * 00000001403FE87E: jz      loc_1403FEAF3
 * 00000001403FE884: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FE88B: jz      short loc_1403FE890
 * 00000001403FE88D: stac
 * 00000001403FE890: mov     rcx, gs:188h
 * 00000001403FE899: test    byte ptr [rcx+0C2h], 3
 * 00000001403FE8A0: jz      short loc_1403FE8BD
 * 00000001403FE8A2: mov     ecx, 1
 * 00000001403FE8A7: mov     cr8, rcx
 * 00000001403FE8AB: sti
 * 00000001403FE8AC: call    KiInitiateUserApc
 * 00000001403FE8B1: cli
 * 00000001403FE8B2: mov     ecx, 0
 * 00000001403FE8B7: mov     cr8, rcx
 * 00000001403FE8BB: jmp     short loc_1403FE890
 * 00000001403FE8BD: test    byte ptr gs:27Eh, 2
 * 00000001403FE8C6: jz      short loc_1403FE8CF
 * 00000001403FE8C8: xor     ecx, ecx
 * 00000001403FE8CA: call    KiUpdateStibpPairing
 * 00000001403FE8CF: mov     rcx, gs:188h
 * 00000001403FE8D8: test    dword ptr [rcx], 8000000h
 * 00000001403FE8DE: jz      short loc_1403FE8E5
 * 00000001403FE8E0: call    KiRestoreSetContextState
 * 00000001403FE8E5: mov     rcx, gs:188h
 * 00000001403FE8EE: test    dword ptr [rcx], 40010000h
 * 00000001403FE8F4: jz      short loc_1403FE90A
 * 00000001403FE8F6: test    byte ptr [rcx+2], 1
 * 00000001403FE8FA: jz      short loc_1403FE90A
 * 00000001403FE8FC: call    KiCopyCounters
 * 00000001403FE901: mov     rcx, gs:188h
 * 00000001403FE90A: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FE90E: cmp     word ptr [rbp+80h], 0
 * 00000001403FE916: jz      short loc_1403FE91D
 * 00000001403FE918: call    KiRestoreDebugRegisterState
 * 00000001403FE91D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FE921: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FE925: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FE929: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FE92D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FE931: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FE935: mov     r11, [rbp-20h]
 * 00000001403FE939: mov     r10, [rbp-28h]
 * 00000001403FE93D: mov     r9, [rbp-30h]
 * 00000001403FE941: mov     r8, [rbp-38h]
 * 00000001403FE945: mov     byte ptr gs:853h, 0
 * 00000001403FE94E: movzx   eax, byte ptr gs:27Dh
 * 00000001403FE957: cmp     gs:27Ah, al
 * 00000001403FE95F: jz      short loc_1403FE972
 * 00000001403FE961: mov     gs:27Ah, al
 * 00000001403FE969: mov     ecx, 48h ; 'H'
 * 00000001403FE96E: xor     edx, edx
 * 00000001403FE970: wrmsr
 * 00000001403FE972: btr     word ptr gs:278h, 2
 * 00000001403FE97D: jnb     short loc_1403FE98D
 * 00000001403FE97F: mov     eax, 1
 * 00000001403FE984: xor     edx, edx
 * 00000001403FE986: mov     ecx, 49h ; 'I'
 * 00000001403FE98B: wrmsr
 * 00000001403FE98D: btr     word ptr gs:278h, 5
 * 00000001403FE998: jnb     loc_1403FEAC3
 * 00000001403FE99E: call    loc_1403FEAB1
 * 00000001403FE9A3: add     rsp, 8
 * 00000001403FE9A7: call    loc_1403FEABA
 * 00000001403FE9AC: add     rsp, 8
 * 00000001403FE9B0: call    loc_1403FE9A3
 * 00000001403FE9B5: add     rsp, 8
 * 00000001403FE9B9: call    loc_1403FE9AC
 * 00000001403FE9BE: add     rsp, 8
 * 00000001403FE9C2: call    loc_1403FE9B5
 * 00000001403FE9C7: add     rsp, 8
 * 00000001403FE9CB: call    loc_1403FE9BE
 * 00000001403FE9D0: add     rsp, 8
 * 00000001403FE9D4: call    loc_1403FE9C7
 * 00000001403FE9D9: add     rsp, 8
 * 00000001403FE9DD: call    loc_1403FE9D0
 * 00000001403FE9E2: add     rsp, 8
 * 00000001403FE9E6: call    loc_1403FE9D9
 * 00000001403FE9EB: add     rsp, 8
 * 00000001403FE9EF: call    loc_1403FE9E2
 * 00000001403FE9F4: add     rsp, 8
 * 00000001403FE9F8: call    loc_1403FE9EB
 * 00000001403FE9FD: add     rsp, 8
 * 00000001403FEA01: call    loc_1403FE9F4
 * 00000001403FEA06: add     rsp, 8
 * 00000001403FEA0A: call    loc_1403FE9FD
 * 00000001403FEA0F: add     rsp, 8
 * 00000001403FEA13: call    loc_1403FEA06
 * 00000001403FEA18: add     rsp, 8
 * 00000001403FEA1C: call    loc_1403FEA0F
 * 00000001403FEA21: add     rsp, 8
 * 00000001403FEA25: call    loc_1403FEA18
 * 00000001403FEA2A: add     rsp, 8
 * 00000001403FEA2E: call    loc_1403FEA21
 * 00000001403FEA33: add     rsp, 8
 * 00000001403FEA37: call    loc_1403FEA2A
 * 00000001403FEA3C: add     rsp, 8
 * 00000001403FEA40: call    loc_1403FEA33
 * 00000001403FEA45: add     rsp, 8
 * 00000001403FEA49: call    loc_1403FEA3C
 * 00000001403FEA4E: add     rsp, 8
 * 00000001403FEA52: call    loc_1403FEA45
 * 00000001403FEA57: add     rsp, 8
 * 00000001403FEA5B: call    loc_1403FEA4E
 * 00000001403FEA60: add     rsp, 8
 * 00000001403FEA64: call    loc_1403FEA57
 * 00000001403FEA69: add     rsp, 8
 * 00000001403FEA6D: call    loc_1403FEA60
 * 00000001403FEA72: add     rsp, 8
 * 00000001403FEA76: call    loc_1403FEA69
 * 00000001403FEA7B: add     rsp, 8
 * 00000001403FEA7F: call    loc_1403FEA72
 * 00000001403FEA84: add     rsp, 8
 * 00000001403FEA88: call    loc_1403FEA7B
 * 00000001403FEA8D: add     rsp, 8
 * 00000001403FEA91: call    loc_1403FEA84
 * 00000001403FEA96: add     rsp, 8
 * 00000001403FEA9A: call    loc_1403FEA8D
 * 00000001403FEA9F: add     rsp, 8
 * 00000001403FEAA3: call    loc_1403FEA96
 * 00000001403FEAA8: add     rsp, 8
 * 00000001403FEAAC: call    loc_1403FEA9F
 * 00000001403FEAB1: add     rsp, 8
 * 00000001403FEAB5: call    loc_1403FEAA8
 * 00000001403FEABA: add     rsp, 8
 * 00000001403FEABE: mov     eax, 0DADAh
 * 00000001403FEAC3: mov     rdx, [rbp-40h]
 * 00000001403FEAC7: mov     rcx, [rbp-48h]
 * 00000001403FEACB: mov     rax, [rbp-50h]
 * 00000001403FEACF: mov     rsp, rbp
 * 00000001403FEAD2: mov     rbp, [rbp+0D8h]
 * 00000001403FEAD9: add     rsp, 0E8h
 * 00000001403FEAE0: test    cs:KiKvaShadow, 1
 * 00000001403FEAE7: jz      short loc_1403FEAEE
 * 00000001403FEAE9: jmp     KiKernelExit
 * 00000001403FEAEE: swapgs
 * 00000001403FEAF1: iretq
 * 00000001403FEAF3: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FEAF7: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FEAFB: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FEAFF: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FEB03: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FEB07: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FEB0B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FEB0F: mov     r11, [rbp-20h]
 * 00000001403FEB13: mov     r10, [rbp-28h]
 * 00000001403FEB17: mov     r9, [rbp-30h]
 * 00000001403FEB1B: mov     r8, [rbp-38h]
 * 00000001403FEB1F: mov     rdx, [rbp-40h]
 * 00000001403FEB23: mov     rcx, [rbp-48h]
 * 00000001403FEB27: mov     rax, [rbp-50h]
 * 00000001403FEB2B: mov     rsp, rbp
 * 00000001403FEB2E: mov     rbp, [rbp+0D8h]
 * 00000001403FEB35: add     rsp, 0E8h
 * 00000001403FEB3C: iretq
 */
