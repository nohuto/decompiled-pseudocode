/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x1403FE3D0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402EBA40 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402F5F40 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1403FDB40 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403FE3D0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1404036E0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140511100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x1403FE3D0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FE3D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FE3D0: mov     rdx, rsp
 * 00000001403FE3D3: mov     rcx, gs:8758h
 * 00000001403FE3DC: lea     rax, [rcx-6000h]
 * 00000001403FE3E3: cmp     rax, rsp
 * 00000001403FE3E6: ja      short loc_1403FE3ED
 * 00000001403FE3E8: cmp     rsp, rcx
 * 00000001403FE3EB: jb      short loc_1403FE3F9
 * 00000001403FE3ED: cmp     cs:KiBugCheckActive, 0
 * 00000001403FE3F4: jnz     short loc_1403FE3F9
 * 00000001403FE3F6: mov     rsp, rcx
 * 00000001403FE3F9: sub     rsp, 20h
 * 00000001403FE3FD: mov     [rsp+20h+var_10], rdx
 * 00000001403FE402: call    KiInterruptSubDispatchNoLockNoEtw
 * 00000001403FE407: mov     rsp, [rsp+20h+var_10]
 * 00000001403FE40C: mov     rcx, rsi
 * 00000001403FE40F: call    HalPerformEndOfInterrupt
 * 00000001403FE414: mov     rcx, gs:20h
 * 00000001403FE41D: cmp     byte ptr [rcx+20h], 1
 * 00000001403FE421: ja      short loc_1403FE49D
 * 00000001403FE423: rdtsc
 * 00000001403FE425: shl     rdx, 20h
 * 00000001403FE429: or      rax, rdx
 * 00000001403FE42C: sub     rax, [rcx+7EC0h]
 * 00000001403FE433: add     [rcx+7F38h], rax
 * 00000001403FE43A: add     [rcx+7EC0h], rax
 * 00000001403FE441: mov     r8, rax
 * 00000001403FE444: mov     rax, [rcx+8]
 * 00000001403FE448: test    byte ptr [rax+2], 72h
 * 00000001403FE44C: jz      short loc_1403FE461
 * 00000001403FE44E: xor     edx, edx
 * 00000001403FE450: call    KiBeginThreadAccountingPeriod
 * 00000001403FE455: mov     rcx, gs:20h
 * 00000001403FE45E: inc     byte ptr [rcx+20h]
 * 00000001403FE461: mov     dl, [rcx+6]
 * 00000001403FE464: and     byte ptr [rcx+6], 0
 * 00000001403FE468: cmp     byte ptr [rcx+7], 0
 * 00000001403FE46C: jnz     short loc_1403FE49D
 * 00000001403FE46E: test    dl, dl
 * 00000001403FE470: jz      short loc_1403FE49D
 * 00000001403FE472: cmp     byte ptr [rbp-57h], 2
 * 00000001403FE476: jnb     short loc_1403FE483
 * 00000001403FE478: and     byte ptr [rcx+20h], 0
 * 00000001403FE47C: call    KiDpcInterruptBypass
 * 00000001403FE481: jmp     short loc_1403FE4A0
 * 00000001403FE483: mov     ecx, 2
 * 00000001403FE488: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FE48F: nop     dword ptr [rax+rax+00h]
 * 00000001403FE494: mov     rcx, gs:20h
 * 00000001403FE49D: dec     byte ptr [rcx+20h]
 * 00000001403FE4A0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403FE4A4: cmp     cs:KiIrqlFlags, 0
 * 00000001403FE4AB: jz      short loc_1403FE4B4
 * 00000001403FE4AD: call    KzSetIrqlUnsafe
 * 00000001403FE4B2: jmp     short loc_1403FE4B8
 * 00000001403FE4B4: mov     cr8, rcx
 * 00000001403FE4B8: mov     rsi, [rbp+0D0h]
 * 00000001403FE4BF: test    byte ptr [rbp+0F0h], 1
 * 00000001403FE4C6: jz      loc_1403FE73B
 * 00000001403FE4CC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FE4D3: jz      short loc_1403FE4D8
 * 00000001403FE4D5: stac
 * 00000001403FE4D8: mov     rcx, gs:188h
 * 00000001403FE4E1: test    byte ptr [rcx+0C2h], 3
 * 00000001403FE4E8: jz      short loc_1403FE505
 * 00000001403FE4EA: mov     ecx, 1
 * 00000001403FE4EF: mov     cr8, rcx
 * 00000001403FE4F3: sti
 * 00000001403FE4F4: call    KiInitiateUserApc
 * 00000001403FE4F9: cli
 * 00000001403FE4FA: mov     ecx, 0
 * 00000001403FE4FF: mov     cr8, rcx
 * 00000001403FE503: jmp     short loc_1403FE4D8
 * 00000001403FE505: test    byte ptr gs:27Eh, 2
 * 00000001403FE50E: jz      short loc_1403FE517
 * 00000001403FE510: xor     ecx, ecx
 * 00000001403FE512: call    KiUpdateStibpPairing
 * 00000001403FE517: mov     rcx, gs:188h
 * 00000001403FE520: test    dword ptr [rcx], 8000000h
 * 00000001403FE526: jz      short loc_1403FE52D
 * 00000001403FE528: call    KiRestoreSetContextState
 * 00000001403FE52D: mov     rcx, gs:188h
 * 00000001403FE536: test    dword ptr [rcx], 40010000h
 * 00000001403FE53C: jz      short loc_1403FE552
 * 00000001403FE53E: test    byte ptr [rcx+2], 1
 * 00000001403FE542: jz      short loc_1403FE552
 * 00000001403FE544: call    KiCopyCounters
 * 00000001403FE549: mov     rcx, gs:188h
 * 00000001403FE552: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FE556: cmp     word ptr [rbp+80h], 0
 * 00000001403FE55E: jz      short loc_1403FE565
 * 00000001403FE560: call    KiRestoreDebugRegisterState
 * 00000001403FE565: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FE569: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FE56D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FE571: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FE575: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FE579: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FE57D: mov     r11, [rbp-20h]
 * 00000001403FE581: mov     r10, [rbp-28h]
 * 00000001403FE585: mov     r9, [rbp-30h]
 * 00000001403FE589: mov     r8, [rbp-38h]
 * 00000001403FE58D: mov     byte ptr gs:853h, 0
 * 00000001403FE596: movzx   eax, byte ptr gs:27Dh
 * 00000001403FE59F: cmp     gs:27Ah, al
 * 00000001403FE5A7: jz      short loc_1403FE5BA
 * 00000001403FE5A9: mov     gs:27Ah, al
 * 00000001403FE5B1: mov     ecx, 48h ; 'H'
 * 00000001403FE5B6: xor     edx, edx
 * 00000001403FE5B8: wrmsr
 * 00000001403FE5BA: btr     word ptr gs:278h, 2
 * 00000001403FE5C5: jnb     short loc_1403FE5D5
 * 00000001403FE5C7: mov     eax, 1
 * 00000001403FE5CC: xor     edx, edx
 * 00000001403FE5CE: mov     ecx, 49h ; 'I'
 * 00000001403FE5D3: wrmsr
 * 00000001403FE5D5: btr     word ptr gs:278h, 5
 * 00000001403FE5E0: jnb     loc_1403FE70B
 * 00000001403FE5E6: call    loc_1403FE6F9
 * 00000001403FE5EB: add     rsp, 8
 * 00000001403FE5EF: call    loc_1403FE702
 * 00000001403FE5F4: add     rsp, 8
 * 00000001403FE5F8: call    loc_1403FE5EB
 * 00000001403FE5FD: add     rsp, 8
 * 00000001403FE601: call    loc_1403FE5F4
 * 00000001403FE606: add     rsp, 8
 * 00000001403FE60A: call    loc_1403FE5FD
 * 00000001403FE60F: add     rsp, 8
 * 00000001403FE613: call    loc_1403FE606
 * 00000001403FE618: add     rsp, 8
 * 00000001403FE61C: call    loc_1403FE60F
 * 00000001403FE621: add     rsp, 8
 * 00000001403FE625: call    loc_1403FE618
 * 00000001403FE62A: add     rsp, 8
 * 00000001403FE62E: call    loc_1403FE621
 * 00000001403FE633: add     rsp, 8
 * 00000001403FE637: call    loc_1403FE62A
 * 00000001403FE63C: add     rsp, 8
 * 00000001403FE640: call    loc_1403FE633
 * 00000001403FE645: add     rsp, 8
 * 00000001403FE649: call    loc_1403FE63C
 * 00000001403FE64E: add     rsp, 8
 * 00000001403FE652: call    loc_1403FE645
 * 00000001403FE657: add     rsp, 8
 * 00000001403FE65B: call    loc_1403FE64E
 * 00000001403FE660: add     rsp, 8
 * 00000001403FE664: call    loc_1403FE657
 * 00000001403FE669: add     rsp, 8
 * 00000001403FE66D: call    loc_1403FE660
 * 00000001403FE672: add     rsp, 8
 * 00000001403FE676: call    loc_1403FE669
 * 00000001403FE67B: add     rsp, 8
 * 00000001403FE67F: call    loc_1403FE672
 * 00000001403FE684: add     rsp, 8
 * 00000001403FE688: call    loc_1403FE67B
 * 00000001403FE68D: add     rsp, 8
 * 00000001403FE691: call    loc_1403FE684
 * 00000001403FE696: add     rsp, 8
 * 00000001403FE69A: call    loc_1403FE68D
 * 00000001403FE69F: add     rsp, 8
 * 00000001403FE6A3: call    loc_1403FE696
 * 00000001403FE6A8: add     rsp, 8
 * 00000001403FE6AC: call    loc_1403FE69F
 * 00000001403FE6B1: add     rsp, 8
 * 00000001403FE6B5: call    loc_1403FE6A8
 * 00000001403FE6BA: add     rsp, 8
 * 00000001403FE6BE: call    loc_1403FE6B1
 * 00000001403FE6C3: add     rsp, 8
 * 00000001403FE6C7: call    loc_1403FE6BA
 * 00000001403FE6CC: add     rsp, 8
 * 00000001403FE6D0: call    loc_1403FE6C3
 * 00000001403FE6D5: add     rsp, 8
 * 00000001403FE6D9: call    loc_1403FE6CC
 * 00000001403FE6DE: add     rsp, 8
 * 00000001403FE6E2: call    loc_1403FE6D5
 * 00000001403FE6E7: add     rsp, 8
 * 00000001403FE6EB: call    loc_1403FE6DE
 * 00000001403FE6F0: add     rsp, 8
 * 00000001403FE6F4: call    loc_1403FE6E7
 * 00000001403FE6F9: add     rsp, 8
 * 00000001403FE6FD: call    loc_1403FE6F0
 * 00000001403FE702: add     rsp, 8
 * 00000001403FE706: mov     eax, 0DADAh
 * 00000001403FE70B: mov     rdx, [rbp-40h]
 * 00000001403FE70F: mov     rcx, [rbp-48h]
 * 00000001403FE713: mov     rax, [rbp-50h]
 * 00000001403FE717: mov     rsp, rbp
 * 00000001403FE71A: mov     rbp, [rbp+0D8h]
 * 00000001403FE721: add     rsp, 0E8h
 * 00000001403FE728: test    cs:KiKvaShadow, 1
 * 00000001403FE72F: jz      short loc_1403FE736
 * 00000001403FE731: jmp     KiKernelExit
 * 00000001403FE736: swapgs
 * 00000001403FE739: iretq
 * 00000001403FE73B: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FE73F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FE743: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FE747: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FE74B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FE74F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FE753: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FE757: mov     r11, [rbp-20h]
 * 00000001403FE75B: mov     r10, [rbp-28h]
 * 00000001403FE75F: mov     r9, [rbp-30h]
 * 00000001403FE763: mov     r8, [rbp-38h]
 * 00000001403FE767: mov     rdx, [rbp-40h]
 * 00000001403FE76B: mov     rcx, [rbp-48h]
 * 00000001403FE76F: mov     rax, [rbp-50h]
 * 00000001403FE773: mov     rsp, rbp
 * 00000001403FE776: mov     rbp, [rbp+0D8h]
 * 00000001403FE77D: add     rsp, 0E8h
 * 00000001403FE784: iretq
 */
