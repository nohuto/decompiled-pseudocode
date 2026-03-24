/*
 * XREFs of KiIpiInterrupt @ 0x1403FD7D0
 * Callers:
 *     KiIpiInterruptShadow @ 0x140A12240 (KiIpiInterruptShadow.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402FBAC0 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x140325D90 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x140325EE0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F75A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FB600 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1403FD790 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x1403FD7D0 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1403FDD30 (KiIpiInterruptSubDispatch.c)
 *     KzSetIrqlUnsafe @ 0x14050D7D0 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405145B0 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405169B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x1403FD7D0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FD7D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FD7D0: sub     rsp, 8
 * 00000001403FD7D4: push    rbp
 * 00000001403FD7D5: push    rsi
 * 00000001403FD7D6: sub     rsp, 150h
 * 00000001403FD7DD: lea     rbp, [rsp+80h]
 * 00000001403FD7E5: mov     [rbp+0E8h+var_13D], 0
 * 00000001403FD7E9: mov     [rbp+0E8h+var_138], rax
 * 00000001403FD7ED: mov     [rbp+0E8h+var_130], rcx
 * 00000001403FD7F1: mov     [rbp+0E8h+var_128], rdx
 * 00000001403FD7F5: mov     [rbp+0E8h+var_120], r8
 * 00000001403FD7F9: mov     [rbp+0E8h+var_118], r9
 * 00000001403FD7FD: mov     [rbp+0E8h+var_110], r10
 * 00000001403FD801: mov     [rbp+0E8h+var_108], r11
 * 00000001403FD805: test    [rbp+0E8h+arg_0], 1
 * 00000001403FD80C: jnz     short loc_1403FD83B
 * 00000001403FD80E: lfence
 * 00000001403FD811: test    byte ptr gs:278h, 1
 * 00000001403FD81A: jnz     short loc_1403FD824
 * 00000001403FD81C: lfence
 * 00000001403FD81F: jmp     loc_1403FDA37
 * 00000001403FD824: movzx   eax, byte ptr gs:27Ah
 * 00000001403FD82D: mov     ecx, 48h ; 'H'
 * 00000001403FD832: xor     edx, edx
 * 00000001403FD834: wrmsr
 * 00000001403FD836: jmp     loc_1403FDA37
 * 00000001403FD83B: test    cs:KiKvaShadow, 1
 * 00000001403FD842: jnz     short loc_1403FD847
 * 00000001403FD844: swapgs
 * 00000001403FD847: lfence
 * 00000001403FD84A: mov     r10, gs:188h
 * 00000001403FD853: mov     rcx, gs:188h
 * 00000001403FD85C: mov     rcx, [rcx+220h]
 * 00000001403FD863: mov     rcx, [rcx+9E0h]
 * 00000001403FD86A: mov     gs:270h, rcx
 * 00000001403FD873: mov     cl, gs:850h
 * 00000001403FD87B: mov     gs:851h, cl
 * 00000001403FD883: mov     cl, gs:278h
 * 00000001403FD88B: mov     gs:852h, cl
 * 00000001403FD893: movzx   eax, byte ptr gs:27Bh
 * 00000001403FD89C: cmp     gs:27Ah, al
 * 00000001403FD8A4: jz      short loc_1403FD8B7
 * 00000001403FD8A6: mov     gs:27Ah, al
 * 00000001403FD8AE: mov     ecx, 48h ; 'H'
 * 00000001403FD8B3: xor     edx, edx
 * 00000001403FD8B5: wrmsr
 * 00000001403FD8B7: movzx   edx, byte ptr gs:278h
 * 00000001403FD8C0: test    edx, 8
 * 00000001403FD8C6: jz      short loc_1403FD8DB
 * 00000001403FD8C8: mov     eax, 1
 * 00000001403FD8CD: xor     edx, edx
 * 00000001403FD8CF: mov     ecx, 49h ; 'I'
 * 00000001403FD8D4: wrmsr
 * 00000001403FD8D6: jmp     loc_1403FDA19
 * 00000001403FD8DB: test    edx, 2
 * 00000001403FD8E1: jz      loc_1403FDA16
 * 00000001403FD8E7: test    byte ptr gs:279h, 4
 * 00000001403FD8F0: jnz     loc_1403FDA16
 * 00000001403FD8F6: call    loc_1403FDA09
 * 00000001403FD8FB: add     rsp, 8
 * 00000001403FD8FF: call    loc_1403FDA12
 * 00000001403FD904: add     rsp, 8
 * 00000001403FD908: call    loc_1403FD8FB
 * 00000001403FD90D: add     rsp, 8
 * 00000001403FD911: call    loc_1403FD904
 * 00000001403FD916: add     rsp, 8
 * 00000001403FD91A: call    loc_1403FD90D
 * 00000001403FD91F: add     rsp, 8
 * 00000001403FD923: call    loc_1403FD916
 * 00000001403FD928: add     rsp, 8
 * 00000001403FD92C: call    loc_1403FD91F
 * 00000001403FD931: add     rsp, 8
 * 00000001403FD935: call    loc_1403FD928
 * 00000001403FD93A: add     rsp, 8
 * 00000001403FD93E: call    loc_1403FD931
 * 00000001403FD943: add     rsp, 8
 * 00000001403FD947: call    loc_1403FD93A
 * 00000001403FD94C: add     rsp, 8
 * 00000001403FD950: call    loc_1403FD943
 * 00000001403FD955: add     rsp, 8
 * 00000001403FD959: call    loc_1403FD94C
 * 00000001403FD95E: add     rsp, 8
 * 00000001403FD962: call    loc_1403FD955
 * 00000001403FD967: add     rsp, 8
 * 00000001403FD96B: call    loc_1403FD95E
 * 00000001403FD970: add     rsp, 8
 * 00000001403FD974: call    loc_1403FD967
 * 00000001403FD979: add     rsp, 8
 * 00000001403FD97D: call    loc_1403FD970
 * 00000001403FD982: add     rsp, 8
 * 00000001403FD986: call    loc_1403FD979
 * 00000001403FD98B: add     rsp, 8
 * 00000001403FD98F: call    loc_1403FD982
 * 00000001403FD994: add     rsp, 8
 * 00000001403FD998: call    loc_1403FD98B
 * 00000001403FD99D: add     rsp, 8
 * 00000001403FD9A1: call    loc_1403FD994
 * 00000001403FD9A6: add     rsp, 8
 * 00000001403FD9AA: call    loc_1403FD99D
 * 00000001403FD9AF: add     rsp, 8
 * 00000001403FD9B3: call    loc_1403FD9A6
 * 00000001403FD9B8: add     rsp, 8
 * 00000001403FD9BC: call    loc_1403FD9AF
 * 00000001403FD9C1: add     rsp, 8
 * 00000001403FD9C5: call    loc_1403FD9B8
 * 00000001403FD9CA: add     rsp, 8
 * 00000001403FD9CE: call    loc_1403FD9C1
 * 00000001403FD9D3: add     rsp, 8
 * 00000001403FD9D7: call    loc_1403FD9CA
 * 00000001403FD9DC: add     rsp, 8
 * 00000001403FD9E0: call    loc_1403FD9D3
 * 00000001403FD9E5: add     rsp, 8
 * 00000001403FD9E9: call    loc_1403FD9DC
 * 00000001403FD9EE: add     rsp, 8
 * 00000001403FD9F2: call    loc_1403FD9E5
 * 00000001403FD9F7: add     rsp, 8
 * 00000001403FD9FB: call    loc_1403FD9EE
 * 00000001403FDA00: add     rsp, 8
 * 00000001403FDA04: call    loc_1403FD9F7
 * 00000001403FDA09: add     rsp, 8
 * 00000001403FDA0D: call    loc_1403FDA00
 * 00000001403FDA12: add     rsp, 8
 * 00000001403FDA16: lfence
 * 00000001403FDA19: mov     byte ptr gs:853h, 0
 * 00000001403FDA22: test    byte ptr [r10+3], 3
 * 00000001403FDA27: mov     [rbp+0E8h+var_68], 0
 * 00000001403FDA30: jz      short loc_1403FDA37
 * 00000001403FDA32: call    KiSaveDebugRegisterState
 * 00000001403FDA37: cld
 * 00000001403FDA38: stmxcsr [rbp+0E8h+var_13C]
 * 00000001403FDA3C: ldmxcsr dword ptr gs:180h
 * 00000001403FDA45: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001403FDA49: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001403FDA4D: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001403FDA51: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001403FDA55: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001403FDA59: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001403FDA5D: cmp     byte ptr gs:801Ah, 0
 * 00000001403FDA66: jz      short loc_1403FDA6D
 * 00000001403FDA68: call    KeWakeProcessor
 * 00000001403FDA6D: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001403FDA74: cmp     rax, [rbp+0E8h]
 * 00000001403FDA7B: jnb     short loc_1403FDA96
 * 00000001403FDA7D: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001403FDA84: cmp     rax, [rbp+0E8h]
 * 00000001403FDA8B: jb      short loc_1403FDA96
 * 00000001403FDA8D: lea     rcx, [rbp+0E8h+var_168]
 * 00000001403FDA91: call    KiCheckForSListAddress
 * 00000001403FDA96: xor     esi, esi
 * 00000001403FDA98: inc     dword ptr gs:8000h
 * 00000001403FDAA0: mov     rdx, rsp
 * 00000001403FDAA3: mov     rcx, gs:8758h
 * 00000001403FDAAC: lea     rax, [rcx-6000h]
 * 00000001403FDAB3: cmp     rax, rsp
 * 00000001403FDAB6: ja      short loc_1403FDABD
 * 00000001403FDAB8: cmp     rsp, rcx
 * 00000001403FDABB: jb      short loc_1403FDAC9
 * 00000001403FDABD: cmp     cs:KiBugCheckActive, 0
 * 00000001403FDAC4: jnz     short loc_1403FDAC9
 * 00000001403FDAC6: mov     rsp, rcx
 * 00000001403FDAC9: sub     rsp, 20h
 * 00000001403FDACD: mov     qword ptr [rsp+108h+var_F8], rdx
 * 00000001403FDAD2: call    KiIpiInterruptSubDispatch
 * 00000001403FDAD7: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 00000001403FDADC: mov     rcx, rsi
 * 00000001403FDADF: call    HalPerformEndOfInterrupt
 * 00000001403FDAE4: mov     rcx, gs:20h
 * 00000001403FDAED: cmp     byte ptr [rcx+20h], 1
 * 00000001403FDAF1: ja      short loc_1403FDB6D
 * 00000001403FDAF3: rdtsc
 * 00000001403FDAF5: shl     rdx, 20h
 * 00000001403FDAF9: or      rax, rdx
 * 00000001403FDAFC: sub     rax, [rcx+7EC0h]
 * 00000001403FDB03: add     [rcx+7F38h], rax
 * 00000001403FDB0A: add     [rcx+7EC0h], rax
 * 00000001403FDB11: mov     r8, rax
 * 00000001403FDB14: mov     rax, [rcx+8]
 * 00000001403FDB18: test    byte ptr [rax+2], 72h
 * 00000001403FDB1C: jz      short loc_1403FDB31
 * 00000001403FDB1E: xor     edx, edx
 * 00000001403FDB20: call    KiBeginThreadAccountingPeriod
 * 00000001403FDB25: mov     rcx, gs:20h
 * 00000001403FDB2E: inc     byte ptr [rcx+20h]
 * 00000001403FDB31: mov     dl, [rcx+6]
 * 00000001403FDB34: and     byte ptr [rcx+6], 0
 * 00000001403FDB38: cmp     byte ptr [rcx+7], 0
 * 00000001403FDB3C: jnz     short loc_1403FDB6D
 * 00000001403FDB3E: test    dl, dl
 * 00000001403FDB40: jz      short loc_1403FDB6D
 * 00000001403FDB42: cmp     [rbp+0E8h+var_13F], 2
 * 00000001403FDB46: jnb     short loc_1403FDB53
 * 00000001403FDB48: and     byte ptr [rcx+20h], 0
 * 00000001403FDB4C: call    KiDpcInterruptBypass
 * 00000001403FDB51: jmp     short loc_1403FDB70
 * 00000001403FDB53: mov     ecx, 2
 * 00000001403FDB58: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FDB5F: nop     dword ptr [rax+rax+00h]
 * 00000001403FDB64: mov     rcx, gs:20h
 * 00000001403FDB6D: dec     byte ptr [rcx+20h]
 * 00000001403FDB70: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001403FDB74: cmp     cs:KiIrqlFlags, 0
 * 00000001403FDB7B: jz      short loc_1403FDB84
 * 00000001403FDB7D: call    KzSetIrqlUnsafe
 * 00000001403FDB82: jmp     short loc_1403FDB88
 * 00000001403FDB84: mov     cr8, rcx
 * 00000001403FDB88: mov     rsi, [rbp+0E8h+var_18]
 * 00000001403FDB8F: test    [rbp+0E8h+arg_0], 1
 * 00000001403FDB96: jz      loc_1403FDCD5
 * 00000001403FDB9C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FDBA3: jz      short loc_1403FDBA8
 * 00000001403FDBA5: stac
 * 00000001403FDBA8: mov     rcx, gs:188h
 * 00000001403FDBB1: test    byte ptr [rcx+0C2h], 3
 * 00000001403FDBB8: jz      short loc_1403FDBD5
 * 00000001403FDBBA: mov     ecx, 1
 * 00000001403FDBBF: mov     cr8, rcx
 * 00000001403FDBC3: sti
 * 00000001403FDBC4: call    KiInitiateUserApc
 * 00000001403FDBC9: cli
 * 00000001403FDBCA: mov     ecx, 0
 * 00000001403FDBCF: mov     cr8, rcx
 * 00000001403FDBD3: jmp     short loc_1403FDBA8
 * 00000001403FDBD5: test    byte ptr gs:27Eh, 2
 * 00000001403FDBDE: jz      short loc_1403FDBE7
 * 00000001403FDBE0: xor     ecx, ecx
 * 00000001403FDBE2: call    KiUpdateStibpPairing
 * 00000001403FDBE7: mov     rcx, gs:188h
 * 00000001403FDBF0: test    dword ptr [rcx], 8000000h
 * 00000001403FDBF6: jz      short loc_1403FDBFD
 * 00000001403FDBF8: call    KiRestoreSetContextState
 * 00000001403FDBFD: mov     rcx, gs:188h
 * 00000001403FDC06: test    dword ptr [rcx], 40010000h
 * 00000001403FDC0C: jz      short loc_1403FDC22
 * 00000001403FDC0E: test    byte ptr [rcx+2], 1
 * 00000001403FDC12: jz      short loc_1403FDC22
 * 00000001403FDC14: call    KiCopyCounters
 * 00000001403FDC19: mov     rcx, gs:188h
 * 00000001403FDC22: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001403FDC26: cmp     [rbp+0E8h+var_68], 0
 * 00000001403FDC2E: jz      short loc_1403FDC35
 * 00000001403FDC30: call    KiRestoreDebugRegisterState
 * 00000001403FDC35: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001403FDC39: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001403FDC3D: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001403FDC41: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001403FDC45: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001403FDC49: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001403FDC4D: mov     r11, [rbp+0E8h+var_108]
 * 00000001403FDC51: mov     r10, [rbp+0E8h+var_110]
 * 00000001403FDC55: mov     r9, [rbp+0E8h+var_118]
 * 00000001403FDC59: mov     r8, [rbp+0E8h+var_120]
 * 00000001403FDC5D: mov     byte ptr gs:853h, 0
 * 00000001403FDC66: movzx   eax, byte ptr gs:27Dh
 * 00000001403FDC6F: cmp     gs:27Ah, al
 * 00000001403FDC77: jz      short loc_1403FDC8A
 * 00000001403FDC79: mov     gs:27Ah, al
 * 00000001403FDC81: mov     ecx, 48h ; 'H'
 * 00000001403FDC86: xor     edx, edx
 * 00000001403FDC88: wrmsr
 * 00000001403FDC8A: btr     word ptr gs:278h, 2
 * 00000001403FDC95: jnb     short loc_1403FDCA5
 * 00000001403FDC97: mov     eax, 1
 * 00000001403FDC9C: xor     edx, edx
 * 00000001403FDC9E: mov     ecx, 49h ; 'I'
 * 00000001403FDCA3: wrmsr
 * 00000001403FDCA5: mov     rdx, [rbp+0E8h+var_128]
 * 00000001403FDCA9: mov     rcx, [rbp+0E8h+var_130]
 * 00000001403FDCAD: mov     rax, [rbp+0E8h+var_138]
 * 00000001403FDCB1: mov     rsp, rbp
 * 00000001403FDCB4: mov     rbp, [rbp+0E8h+var_10]
 * 00000001403FDCBB: add     rsp, 0E8h
 * 00000001403FDCC2: test    cs:KiKvaShadow, 1
 * 00000001403FDCC9: jz      short loc_1403FDCD0
 * 00000001403FDCCB: jmp     KiKernelExit
 * 00000001403FDCD0: swapgs
 * 00000001403FDCD3: iretq
 * 00000001403FDCD5: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001403FDCD9: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001403FDCDD: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001403FDCE1: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001403FDCE5: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001403FDCE9: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001403FDCED: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001403FDCF1: mov     r11, [rbp+0E8h+var_108]
 * 00000001403FDCF5: mov     r10, [rbp+0E8h+var_110]
 * 00000001403FDCF9: mov     r9, [rbp+0E8h+var_118]
 * 00000001403FDCFD: mov     r8, [rbp+0E8h+var_120]
 * 00000001403FDD01: mov     rdx, [rbp+0E8h+var_128]
 * 00000001403FDD05: mov     rcx, [rbp+0E8h+var_130]
 * 00000001403FDD09: mov     rax, [rbp+0E8h+var_138]
 * 00000001403FDD0D: mov     rsp, rbp
 * 00000001403FDD10: mov     rbp, [rbp+0E8h+var_10]
 * 00000001403FDD17: add     rsp, 0E8h
 * 00000001403FDD1E: iretq
 */
