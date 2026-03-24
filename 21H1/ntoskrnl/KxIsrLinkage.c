/*
 * XREFs of KxIsrLinkage @ 0x1403F8E10
 * Callers:
 *     KxIsrLinkageShadow @ 0x140A12B00 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x14026D7B0 (KiEndThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1402DDF20 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1402EC460 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x1402EC5B0 (HalPerformEndOfInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140357AA0 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140359A80 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F6310 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x1403F8E10 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x1403FA370 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1403FC500 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x140407D00 (KiBugCheckDispatch.c)
 *     KzSetIrqlUnsafe @ 0x14050D180 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140513F60 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140516360 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1405A4880 (PerfInfoLogUnexpectedInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x1403F8E10
 * Reason: Hex-Rays returned no pseudocode for 0x1403F8E10
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403F8E10: push    rbp
 * 00000001403F8E11: push    rsi
 * 00000001403F8E12: sub     rsp, 150h
 * 00000001403F8E19: lea     rbp, [rsp+80h]
 * 00000001403F8E21: mov     [rbp+0D8h+var_12D], 0
 * 00000001403F8E25: mov     [rbp+0D8h+var_128], rax
 * 00000001403F8E29: mov     [rbp+0D8h+var_120], rcx
 * 00000001403F8E2D: mov     [rbp+0D8h+var_118], rdx
 * 00000001403F8E31: mov     [rbp+0D8h+var_110], r8
 * 00000001403F8E35: mov     [rbp+0D8h+var_108], r9
 * 00000001403F8E39: mov     [rbp+0D8h+var_100], r10
 * 00000001403F8E3D: mov     [rbp+0D8h+var_F8], r11
 * 00000001403F8E41: test    [rbp+0D8h+arg_8], 1
 * 00000001403F8E48: jnz     short loc_1403F8E77
 * 00000001403F8E4A: lfence
 * 00000001403F8E4D: test    byte ptr gs:278h, 1
 * 00000001403F8E56: jnz     short loc_1403F8E60
 * 00000001403F8E58: lfence
 * 00000001403F8E5B: jmp     loc_1403F9073
 * 00000001403F8E60: movzx   eax, byte ptr gs:27Ah
 * 00000001403F8E69: mov     ecx, 48h ; 'H'
 * 00000001403F8E6E: xor     edx, edx
 * 00000001403F8E70: wrmsr
 * 00000001403F8E72: jmp     loc_1403F9073
 * 00000001403F8E77: test    cs:KiKvaShadow, 1
 * 00000001403F8E7E: jnz     short loc_1403F8E83
 * 00000001403F8E80: swapgs
 * 00000001403F8E83: lfence
 * 00000001403F8E86: mov     r10, gs:188h
 * 00000001403F8E8F: mov     rcx, gs:188h
 * 00000001403F8E98: mov     rcx, [rcx+220h]
 * 00000001403F8E9F: mov     rcx, [rcx+9E0h]
 * 00000001403F8EA6: mov     gs:270h, rcx
 * 00000001403F8EAF: mov     cl, gs:850h
 * 00000001403F8EB7: mov     gs:851h, cl
 * 00000001403F8EBF: mov     cl, gs:278h
 * 00000001403F8EC7: mov     gs:852h, cl
 * 00000001403F8ECF: movzx   eax, byte ptr gs:27Bh
 * 00000001403F8ED8: cmp     gs:27Ah, al
 * 00000001403F8EE0: jz      short loc_1403F8EF3
 * 00000001403F8EE2: mov     gs:27Ah, al
 * 00000001403F8EEA: mov     ecx, 48h ; 'H'
 * 00000001403F8EEF: xor     edx, edx
 * 00000001403F8EF1: wrmsr
 * 00000001403F8EF3: movzx   edx, byte ptr gs:278h
 * 00000001403F8EFC: test    edx, 8
 * 00000001403F8F02: jz      short loc_1403F8F17
 * 00000001403F8F04: mov     eax, 1
 * 00000001403F8F09: xor     edx, edx
 * 00000001403F8F0B: mov     ecx, 49h ; 'I'
 * 00000001403F8F10: wrmsr
 * 00000001403F8F12: jmp     loc_1403F9055
 * 00000001403F8F17: test    edx, 2
 * 00000001403F8F1D: jz      loc_1403F9052
 * 00000001403F8F23: test    byte ptr gs:279h, 4
 * 00000001403F8F2C: jnz     loc_1403F9052
 * 00000001403F8F32: call    loc_1403F9045
 * 00000001403F8F37: add     rsp, 8
 * 00000001403F8F3B: call    loc_1403F904E
 * 00000001403F8F40: add     rsp, 8
 * 00000001403F8F44: call    loc_1403F8F37
 * 00000001403F8F49: add     rsp, 8
 * 00000001403F8F4D: call    loc_1403F8F40
 * 00000001403F8F52: add     rsp, 8
 * 00000001403F8F56: call    loc_1403F8F49
 * 00000001403F8F5B: add     rsp, 8
 * 00000001403F8F5F: call    loc_1403F8F52
 * 00000001403F8F64: add     rsp, 8
 * 00000001403F8F68: call    loc_1403F8F5B
 * 00000001403F8F6D: add     rsp, 8
 * 00000001403F8F71: call    loc_1403F8F64
 * 00000001403F8F76: add     rsp, 8
 * 00000001403F8F7A: call    loc_1403F8F6D
 * 00000001403F8F7F: add     rsp, 8
 * 00000001403F8F83: call    loc_1403F8F76
 * 00000001403F8F88: add     rsp, 8
 * 00000001403F8F8C: call    loc_1403F8F7F
 * 00000001403F8F91: add     rsp, 8
 * 00000001403F8F95: call    loc_1403F8F88
 * 00000001403F8F9A: add     rsp, 8
 * 00000001403F8F9E: call    loc_1403F8F91
 * 00000001403F8FA3: add     rsp, 8
 * 00000001403F8FA7: call    loc_1403F8F9A
 * 00000001403F8FAC: add     rsp, 8
 * 00000001403F8FB0: call    loc_1403F8FA3
 * 00000001403F8FB5: add     rsp, 8
 * 00000001403F8FB9: call    loc_1403F8FAC
 * 00000001403F8FBE: add     rsp, 8
 * 00000001403F8FC2: call    loc_1403F8FB5
 * 00000001403F8FC7: add     rsp, 8
 * 00000001403F8FCB: call    loc_1403F8FBE
 * 00000001403F8FD0: add     rsp, 8
 * 00000001403F8FD4: call    loc_1403F8FC7
 * 00000001403F8FD9: add     rsp, 8
 * 00000001403F8FDD: call    loc_1403F8FD0
 * 00000001403F8FE2: add     rsp, 8
 * 00000001403F8FE6: call    loc_1403F8FD9
 * 00000001403F8FEB: add     rsp, 8
 * 00000001403F8FEF: call    loc_1403F8FE2
 * 00000001403F8FF4: add     rsp, 8
 * 00000001403F8FF8: call    loc_1403F8FEB
 * 00000001403F8FFD: add     rsp, 8
 * 00000001403F9001: call    loc_1403F8FF4
 * 00000001403F9006: add     rsp, 8
 * 00000001403F900A: call    loc_1403F8FFD
 * 00000001403F900F: add     rsp, 8
 * 00000001403F9013: call    loc_1403F9006
 * 00000001403F9018: add     rsp, 8
 * 00000001403F901C: call    loc_1403F900F
 * 00000001403F9021: add     rsp, 8
 * 00000001403F9025: call    loc_1403F9018
 * 00000001403F902A: add     rsp, 8
 * 00000001403F902E: call    loc_1403F9021
 * 00000001403F9033: add     rsp, 8
 * 00000001403F9037: call    loc_1403F902A
 * 00000001403F903C: add     rsp, 8
 * 00000001403F9040: call    loc_1403F9033
 * 00000001403F9045: add     rsp, 8
 * 00000001403F9049: call    loc_1403F903C
 * 00000001403F904E: add     rsp, 8
 * 00000001403F9052: lfence
 * 00000001403F9055: mov     byte ptr gs:853h, 0
 * 00000001403F905E: test    byte ptr [r10+3], 3
 * 00000001403F9063: mov     [rbp+0D8h+var_58], 0
 * 00000001403F906C: jz      short loc_1403F9073
 * 00000001403F906E: call    KiSaveDebugRegisterState
 * 00000001403F9073: cld
 * 00000001403F9074: stmxcsr [rbp+0D8h+var_12C]
 * 00000001403F9078: ldmxcsr dword ptr gs:180h
 * 00000001403F9081: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001403F9085: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001403F9089: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001403F908D: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001403F9091: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001403F9095: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001403F9099: cmp     byte ptr gs:801Ah, 0
 * 00000001403F90A2: jz      short loc_1403F90A9
 * 00000001403F90A4: call    KeWakeProcessor
 * 00000001403F90A9: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001403F90B0: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001403F90B7: jnb     short loc_1403F90D2
 * 00000001403F90B9: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001403F90C0: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001403F90C7: jb      short loc_1403F90D2
 * 00000001403F90C9: lea     rcx, [rbp+0D8h+var_158]
 * 00000001403F90CD: call    KiCheckForSListAddress
 * 00000001403F90D2: movzx   eax, byte ptr [rbp+0E0h]
 * 00000001403F90D9: mov     rsi, gs:20h
 * 00000001403F90E2: mov     rsi, [rsi+rax*8+3140h]
 * 00000001403F90EA: inc     dword ptr gs:8000h
 * 00000001403F90F2: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403F90F9: jz      short loc_1403F90FE
 * 00000001403F90FB: clac
 * 00000001403F90FE: test    rsi, rsi
 * 00000001403F9101: jz      short loc_1403F910C
 * 00000001403F9103: mov     rax, [rsi+50h]
 * 00000001403F9107: jmp     _guard_dispatch_icall
 * 00000001403F910C: mov     ecx, eax
 * 00000001403F910E: shr     ecx, 4
 * 00000001403F9111: cmp     cs:KiIrqlFlags, 0
 * 00000001403F9118: jz      short loc_1403F9121
 * 00000001403F911A: call    KzSetIrqlUnsafe
 * 00000001403F911F: jmp     short loc_1403F9129
 * 00000001403F9121: mov     rax, cr8
 * 00000001403F9125: mov     cr8, rcx
 * 00000001403F9129: mov     [rbp+0D8h+var_12F], al
 * 00000001403F912C: mov     rcx, gs:20h
 * 00000001403F9135: inc     byte ptr [rcx+20h]
 * 00000001403F9138: cmp     byte ptr [rcx+20h], 1
 * 00000001403F913C: jnz     short loc_1403F918E
 * 00000001403F913E: rdtsc
 * 00000001403F9140: shl     rdx, 20h
 * 00000001403F9144: or      rax, rdx
 * 00000001403F9147: mov     r8, [rcx+8]
 * 00000001403F914B: sub     rax, [rcx+7EC0h]
 * 00000001403F9152: add     [r8+48h], rax
 * 00000001403F9156: mov     edx, [r8+50h]
 * 00000001403F915A: add     [rcx+7EC0h], rax
 * 00000001403F9161: add     rdx, rax
 * 00000001403F9164: mov     ecx, edx
 * 00000001403F9166: shr     rdx, 20h
 * 00000001403F916A: jz      short loc_1403F916F
 * 00000001403F916C: or      ecx, 0FFFFFFFFh
 * 00000001403F916F: mov     [r8+50h], ecx
 * 00000001403F9173: test    byte ptr [r8+2], 3Eh
 * 00000001403F9178: jz      short loc_1403F918E
 * 00000001403F917A: mov     rdx, r8
 * 00000001403F917D: mov     r8, rax
 * 00000001403F9180: mov     rcx, gs:20h
 * 00000001403F9189: call    KiEndThreadAccountingPeriod
 * 00000001403F918E: sti
 * 00000001403F918F: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 00000001403F9199: jz      short loc_1403F91A7
 * 00000001403F919B: movzx   ecx, byte ptr [rbp+0E0h]
 * 00000001403F91A2: call    PerfInfoLogUnexpectedInterrupt
 * 00000001403F91A7: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 00000001403F91AE: jz      short loc_1403F91CF
 * 00000001403F91B0: and     [rbp+0D8h+var_138], 0
 * 00000001403F91B5: xor     r9, r9
 * 00000001403F91B8: movzx   r8d, byte ptr [rbp+0E0h]
 * 00000001403F91C0: mov     edx, 1
 * 00000001403F91C5: mov     ecx, 12h
 * 00000001403F91CA: call    KiBugCheckDispatch
 * 00000001403F91CF: cli
 * 00000001403F91D0: mov     rcx, rsi
 * 00000001403F91D3: call    HalPerformEndOfInterrupt
 * 00000001403F91D8: mov     rcx, gs:20h
 * 00000001403F91E1: cmp     byte ptr [rcx+20h], 1
 * 00000001403F91E5: ja      short loc_1403F9261
 * 00000001403F91E7: rdtsc
 * 00000001403F91E9: shl     rdx, 20h
 * 00000001403F91ED: or      rax, rdx
 * 00000001403F91F0: sub     rax, [rcx+7EC0h]
 * 00000001403F91F7: add     [rcx+7F38h], rax
 * 00000001403F91FE: add     [rcx+7EC0h], rax
 * 00000001403F9205: mov     r8, rax
 * 00000001403F9208: mov     rax, [rcx+8]
 * 00000001403F920C: test    byte ptr [rax+2], 72h
 * 00000001403F9210: jz      short loc_1403F9225
 * 00000001403F9212: xor     edx, edx
 * 00000001403F9214: call    KiBeginThreadAccountingPeriod
 * 00000001403F9219: mov     rcx, gs:20h
 * 00000001403F9222: inc     byte ptr [rcx+20h]
 * 00000001403F9225: mov     dl, [rcx+6]
 * 00000001403F9228: and     byte ptr [rcx+6], 0
 * 00000001403F922C: cmp     byte ptr [rcx+7], 0
 * 00000001403F9230: jnz     short loc_1403F9261
 * 00000001403F9232: test    dl, dl
 * 00000001403F9234: jz      short loc_1403F9261
 * 00000001403F9236: cmp     [rbp+0D8h+var_12F], 2
 * 00000001403F923A: jnb     short loc_1403F9247
 * 00000001403F923C: and     byte ptr [rcx+20h], 0
 * 00000001403F9240: call    KiDpcInterruptBypass
 * 00000001403F9245: jmp     short loc_1403F9264
 * 00000001403F9247: mov     ecx, 2
 * 00000001403F924C: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403F9253: nop     dword ptr [rax+rax+00h]
 * 00000001403F9258: mov     rcx, gs:20h
 * 00000001403F9261: dec     byte ptr [rcx+20h]
 * 00000001403F9264: movzx   ecx, [rbp+0D8h+var_12F]
 * 00000001403F9268: cmp     cs:KiIrqlFlags, 0
 * 00000001403F926F: jz      short loc_1403F9278
 * 00000001403F9271: call    KzSetIrqlUnsafe
 * 00000001403F9276: jmp     short loc_1403F927C
 * 00000001403F9278: mov     cr8, rcx
 * 00000001403F927C: mov     rsi, [rbp+0D8h+var_8]
 * 00000001403F9283: cli
 * 00000001403F9284: test    [rbp+0D8h+arg_8], 1
 * 00000001403F928B: jz      loc_1403F93CA
 * 00000001403F9291: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403F9298: jz      short loc_1403F929D
 * 00000001403F929A: stac
 * 00000001403F929D: mov     rcx, gs:188h
 * 00000001403F92A6: test    byte ptr [rcx+0C2h], 3
 * 00000001403F92AD: jz      short loc_1403F92CA
 * 00000001403F92AF: mov     ecx, 1
 * 00000001403F92B4: mov     cr8, rcx
 * 00000001403F92B8: sti
 * 00000001403F92B9: call    KiInitiateUserApc
 * 00000001403F92BE: cli
 * 00000001403F92BF: mov     ecx, 0
 * 00000001403F92C4: mov     cr8, rcx
 * 00000001403F92C8: jmp     short loc_1403F929D
 * 00000001403F92CA: test    byte ptr gs:27Eh, 2
 * 00000001403F92D3: jz      short loc_1403F92DC
 * 00000001403F92D5: xor     ecx, ecx
 * 00000001403F92D7: call    KiUpdateStibpPairing
 * 00000001403F92DC: mov     rcx, gs:188h
 * 00000001403F92E5: test    dword ptr [rcx], 8000000h
 * 00000001403F92EB: jz      short loc_1403F92F2
 * 00000001403F92ED: call    KiRestoreSetContextState
 * 00000001403F92F2: mov     rcx, gs:188h
 * 00000001403F92FB: test    dword ptr [rcx], 40010000h
 * 00000001403F9301: jz      short loc_1403F9317
 * 00000001403F9303: test    byte ptr [rcx+2], 1
 * 00000001403F9307: jz      short loc_1403F9317
 * 00000001403F9309: call    KiCopyCounters
 * 00000001403F930E: mov     rcx, gs:188h
 * 00000001403F9317: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001403F931B: cmp     [rbp+0D8h+var_58], 0
 * 00000001403F9323: jz      short loc_1403F932A
 * 00000001403F9325: call    KiRestoreDebugRegisterState
 * 00000001403F932A: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001403F932E: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001403F9332: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001403F9336: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001403F933A: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001403F933E: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001403F9342: mov     r11, [rbp+0D8h+var_F8]
 * 00000001403F9346: mov     r10, [rbp+0D8h+var_100]
 * 00000001403F934A: mov     r9, [rbp+0D8h+var_108]
 * 00000001403F934E: mov     r8, [rbp+0D8h+var_110]
 * 00000001403F9352: mov     byte ptr gs:853h, 0
 * 00000001403F935B: movzx   eax, byte ptr gs:27Dh
 * 00000001403F9364: cmp     gs:27Ah, al
 * 00000001403F936C: jz      short loc_1403F937F
 * 00000001403F936E: mov     gs:27Ah, al
 * 00000001403F9376: mov     ecx, 48h ; 'H'
 * 00000001403F937B: xor     edx, edx
 * 00000001403F937D: wrmsr
 * 00000001403F937F: btr     word ptr gs:278h, 2
 * 00000001403F938A: jnb     short loc_1403F939A
 * 00000001403F938C: mov     eax, 1
 * 00000001403F9391: xor     edx, edx
 * 00000001403F9393: mov     ecx, 49h ; 'I'
 * 00000001403F9398: wrmsr
 * 00000001403F939A: mov     rdx, [rbp+0D8h+var_118]
 * 00000001403F939E: mov     rcx, [rbp+0D8h+var_120]
 * 00000001403F93A2: mov     rax, [rbp+0D8h+var_128]
 * 00000001403F93A6: mov     rsp, rbp
 * 00000001403F93A9: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001403F93B0: add     rsp, 0E8h
 * 00000001403F93B7: test    cs:KiKvaShadow, 1
 * 00000001403F93BE: jz      short loc_1403F93C5
 * 00000001403F93C0: jmp     KiKernelExit
 * 00000001403F93C5: swapgs
 * 00000001403F93C8: iretq
 * 00000001403F93CA: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001403F93CE: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001403F93D2: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001403F93D6: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001403F93DA: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001403F93DE: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001403F93E2: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001403F93E6: mov     r11, [rbp+0D8h+var_F8]
 * 00000001403F93EA: mov     r10, [rbp+0D8h+var_100]
 * 00000001403F93EE: mov     r9, [rbp+0D8h+var_108]
 * 00000001403F93F2: mov     r8, [rbp+0D8h+var_110]
 * 00000001403F93F6: mov     rdx, [rbp+0D8h+var_118]
 * 00000001403F93FA: mov     rcx, [rbp+0D8h+var_120]
 * 00000001403F93FE: mov     rax, [rbp+0D8h+var_128]
 * 00000001403F9402: mov     rsp, rbp
 * 00000001403F9405: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001403F940C: add     rsp, 0E8h
 * 00000001403F9413: iretq
 */
