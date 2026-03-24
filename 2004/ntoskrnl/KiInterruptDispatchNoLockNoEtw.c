/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x1403F90B0
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402FBAC0 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x140325EE0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F75A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1403F8A80 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x1403FB600 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1403FD790 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14050D7D0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405169B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x1403F90B0
 * Reason: Hex-Rays returned no pseudocode for 0x1403F90B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403F90B0: mov     rdx, rsp
 * 00000001403F90B3: mov     rcx, gs:8758h
 * 00000001403F90BC: lea     rax, [rcx-6000h]
 * 00000001403F90C3: cmp     rax, rsp
 * 00000001403F90C6: ja      short loc_1403F90CD
 * 00000001403F90C8: cmp     rsp, rcx
 * 00000001403F90CB: jb      short loc_1403F90D9
 * 00000001403F90CD: cmp     cs:KiBugCheckActive, 0
 * 00000001403F90D4: jnz     short loc_1403F90D9
 * 00000001403F90D6: mov     rsp, rcx
 * 00000001403F90D9: sub     rsp, 20h
 * 00000001403F90DD: mov     [rsp+20h+var_10], rdx
 * 00000001403F90E2: call    KiInterruptSubDispatchNoLockNoEtw
 * 00000001403F90E7: mov     rsp, [rsp+20h+var_10]
 * 00000001403F90EC: mov     rcx, rsi
 * 00000001403F90EF: call    HalPerformEndOfInterrupt
 * 00000001403F90F4: mov     rcx, gs:20h
 * 00000001403F90FD: cmp     byte ptr [rcx+20h], 1
 * 00000001403F9101: ja      short loc_1403F917D
 * 00000001403F9103: rdtsc
 * 00000001403F9105: shl     rdx, 20h
 * 00000001403F9109: or      rax, rdx
 * 00000001403F910C: sub     rax, [rcx+7EC0h]
 * 00000001403F9113: add     [rcx+7F38h], rax
 * 00000001403F911A: add     [rcx+7EC0h], rax
 * 00000001403F9121: mov     r8, rax
 * 00000001403F9124: mov     rax, [rcx+8]
 * 00000001403F9128: test    byte ptr [rax+2], 72h
 * 00000001403F912C: jz      short loc_1403F9141
 * 00000001403F912E: xor     edx, edx
 * 00000001403F9130: call    KiBeginThreadAccountingPeriod
 * 00000001403F9135: mov     rcx, gs:20h
 * 00000001403F913E: inc     byte ptr [rcx+20h]
 * 00000001403F9141: mov     dl, [rcx+6]
 * 00000001403F9144: and     byte ptr [rcx+6], 0
 * 00000001403F9148: cmp     byte ptr [rcx+7], 0
 * 00000001403F914C: jnz     short loc_1403F917D
 * 00000001403F914E: test    dl, dl
 * 00000001403F9150: jz      short loc_1403F917D
 * 00000001403F9152: cmp     byte ptr [rbp-57h], 2
 * 00000001403F9156: jnb     short loc_1403F9163
 * 00000001403F9158: and     byte ptr [rcx+20h], 0
 * 00000001403F915C: call    KiDpcInterruptBypass
 * 00000001403F9161: jmp     short loc_1403F9180
 * 00000001403F9163: mov     ecx, 2
 * 00000001403F9168: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403F916F: nop     dword ptr [rax+rax+00h]
 * 00000001403F9174: mov     rcx, gs:20h
 * 00000001403F917D: dec     byte ptr [rcx+20h]
 * 00000001403F9180: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403F9184: cmp     cs:KiIrqlFlags, 0
 * 00000001403F918B: jz      short loc_1403F9194
 * 00000001403F918D: call    KzSetIrqlUnsafe
 * 00000001403F9192: jmp     short loc_1403F9198
 * 00000001403F9194: mov     cr8, rcx
 * 00000001403F9198: mov     rsi, [rbp+0D0h]
 * 00000001403F919F: test    byte ptr [rbp+0F0h], 1
 * 00000001403F91A6: jz      loc_1403F92E5
 * 00000001403F91AC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403F91B3: jz      short loc_1403F91B8
 * 00000001403F91B5: stac
 * 00000001403F91B8: mov     rcx, gs:188h
 * 00000001403F91C1: test    byte ptr [rcx+0C2h], 3
 * 00000001403F91C8: jz      short loc_1403F91E5
 * 00000001403F91CA: mov     ecx, 1
 * 00000001403F91CF: mov     cr8, rcx
 * 00000001403F91D3: sti
 * 00000001403F91D4: call    KiInitiateUserApc
 * 00000001403F91D9: cli
 * 00000001403F91DA: mov     ecx, 0
 * 00000001403F91DF: mov     cr8, rcx
 * 00000001403F91E3: jmp     short loc_1403F91B8
 * 00000001403F91E5: test    byte ptr gs:27Eh, 2
 * 00000001403F91EE: jz      short loc_1403F91F7
 * 00000001403F91F0: xor     ecx, ecx
 * 00000001403F91F2: call    KiUpdateStibpPairing
 * 00000001403F91F7: mov     rcx, gs:188h
 * 00000001403F9200: test    dword ptr [rcx], 8000000h
 * 00000001403F9206: jz      short loc_1403F920D
 * 00000001403F9208: call    KiRestoreSetContextState
 * 00000001403F920D: mov     rcx, gs:188h
 * 00000001403F9216: test    dword ptr [rcx], 40010000h
 * 00000001403F921C: jz      short loc_1403F9232
 * 00000001403F921E: test    byte ptr [rcx+2], 1
 * 00000001403F9222: jz      short loc_1403F9232
 * 00000001403F9224: call    KiCopyCounters
 * 00000001403F9229: mov     rcx, gs:188h
 * 00000001403F9232: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F9236: cmp     word ptr [rbp+80h], 0
 * 00000001403F923E: jz      short loc_1403F9245
 * 00000001403F9240: call    KiRestoreDebugRegisterState
 * 00000001403F9245: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F9249: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F924D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F9251: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F9255: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F9259: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F925D: mov     r11, [rbp-20h]
 * 00000001403F9261: mov     r10, [rbp-28h]
 * 00000001403F9265: mov     r9, [rbp-30h]
 * 00000001403F9269: mov     r8, [rbp-38h]
 * 00000001403F926D: mov     byte ptr gs:853h, 0
 * 00000001403F9276: movzx   eax, byte ptr gs:27Dh
 * 00000001403F927F: cmp     gs:27Ah, al
 * 00000001403F9287: jz      short loc_1403F929A
 * 00000001403F9289: mov     gs:27Ah, al
 * 00000001403F9291: mov     ecx, 48h ; 'H'
 * 00000001403F9296: xor     edx, edx
 * 00000001403F9298: wrmsr
 * 00000001403F929A: btr     word ptr gs:278h, 2
 * 00000001403F92A5: jnb     short loc_1403F92B5
 * 00000001403F92A7: mov     eax, 1
 * 00000001403F92AC: xor     edx, edx
 * 00000001403F92AE: mov     ecx, 49h ; 'I'
 * 00000001403F92B3: wrmsr
 * 00000001403F92B5: mov     rdx, [rbp-40h]
 * 00000001403F92B9: mov     rcx, [rbp-48h]
 * 00000001403F92BD: mov     rax, [rbp-50h]
 * 00000001403F92C1: mov     rsp, rbp
 * 00000001403F92C4: mov     rbp, [rbp+0D8h]
 * 00000001403F92CB: add     rsp, 0E8h
 * 00000001403F92D2: test    cs:KiKvaShadow, 1
 * 00000001403F92D9: jz      short loc_1403F92E0
 * 00000001403F92DB: jmp     KiKernelExit
 * 00000001403F92E0: swapgs
 * 00000001403F92E3: iretq
 * 00000001403F92E5: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F92E9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F92ED: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F92F1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F92F5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F92F9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F92FD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F9301: mov     r11, [rbp-20h]
 * 00000001403F9305: mov     r10, [rbp-28h]
 * 00000001403F9309: mov     r9, [rbp-30h]
 * 00000001403F930D: mov     r8, [rbp-38h]
 * 00000001403F9311: mov     rdx, [rbp-40h]
 * 00000001403F9315: mov     rcx, [rbp-48h]
 * 00000001403F9319: mov     rax, [rbp-50h]
 * 00000001403F931D: mov     rsp, rbp
 * 00000001403F9320: mov     rbp, [rbp+0D8h]
 * 00000001403F9327: add     rsp, 0E8h
 * 00000001403F932E: iretq
 */
