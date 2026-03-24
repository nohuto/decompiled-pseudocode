/*
 * XREFs of KiPageFault @ 0x140404F00
 * Callers:
 *     KiPageFaultShadow @ 0x140A11840 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x140325D90 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x1403F75A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FB600 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x140404F00 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x140409000 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140409080 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x1404099C0 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140409E40 (KiUmsExit.c)
 *     KdSetOwedBreakpoints @ 0x14050CA80 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x1405169B0 (KiCopyCounters.c)
 *     PsWatchWorkingSet @ 0x14057C110 (PsWatchWorkingSet.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x140404F00
 * Reason: Hex-Rays returned no pseudocode for 0x140404F00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140404F00: push    rbp
 * 0000000140404F01: sub     rsp, 158h
 * 0000000140404F08: lea     rbp, [rsp+80h]
 * 0000000140404F10: mov     [rbp+0D8h+var_12D], 1
 * 0000000140404F14: mov     [rbp+0D8h+var_128], rax
 * 0000000140404F18: mov     [rbp+0D8h+var_120], rcx
 * 0000000140404F1C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140404F20: mov     [rbp+0D8h+var_110], r8
 * 0000000140404F24: mov     [rbp+0D8h+var_108], r9
 * 0000000140404F28: mov     [rbp+0D8h+var_100], r10
 * 0000000140404F2C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140404F30: test    byte ptr [rbp+0D8h+arg_8], 1
 * 0000000140404F37: jnz     short loc_140404F66
 * 0000000140404F39: lfence
 * 0000000140404F3C: test    byte ptr gs:278h, 1
 * 0000000140404F45: jnz     short loc_140404F4F
 * 0000000140404F47: lfence
 * 0000000140404F4A: jmp     loc_1404051BB
 * 0000000140404F4F: movzx   eax, byte ptr gs:27Ah
 * 0000000140404F58: mov     ecx, 48h ; 'H'
 * 0000000140404F5D: xor     edx, edx
 * 0000000140404F5F: wrmsr
 * 0000000140404F61: jmp     loc_1404051BB
 * 0000000140404F66: test    cs:KiKvaShadow, 1
 * 0000000140404F6D: jnz     short loc_140404F72
 * 0000000140404F6F: swapgs
 * 0000000140404F72: lfence
 * 0000000140404F75: mov     r10, gs:188h
 * 0000000140404F7E: mov     rcx, gs:188h
 * 0000000140404F87: mov     rcx, [rcx+220h]
 * 0000000140404F8E: mov     rcx, [rcx+9E0h]
 * 0000000140404F95: mov     gs:270h, rcx
 * 0000000140404F9E: mov     cl, gs:850h
 * 0000000140404FA6: mov     gs:851h, cl
 * 0000000140404FAE: mov     cl, gs:278h
 * 0000000140404FB6: mov     gs:852h, cl
 * 0000000140404FBE: movzx   eax, byte ptr gs:27Bh
 * 0000000140404FC7: cmp     gs:27Ah, al
 * 0000000140404FCF: jz      short loc_140404FE2
 * 0000000140404FD1: mov     gs:27Ah, al
 * 0000000140404FD9: mov     ecx, 48h ; 'H'
 * 0000000140404FDE: xor     edx, edx
 * 0000000140404FE0: wrmsr
 * 0000000140404FE2: movzx   edx, byte ptr gs:278h
 * 0000000140404FEB: test    edx, 8
 * 0000000140404FF1: jz      short loc_140405006
 * 0000000140404FF3: mov     eax, 1
 * 0000000140404FF8: xor     edx, edx
 * 0000000140404FFA: mov     ecx, 49h ; 'I'
 * 0000000140404FFF: wrmsr
 * 0000000140405001: jmp     loc_140405144
 * 0000000140405006: test    edx, 2
 * 000000014040500C: jz      loc_140405141
 * 0000000140405012: test    byte ptr gs:279h, 4
 * 000000014040501B: jnz     loc_140405141
 * 0000000140405021: call    loc_140405134
 * 0000000140405026: add     rsp, 8
 * 000000014040502A: call    loc_14040513D
 * 000000014040502F: add     rsp, 8
 * 0000000140405033: call    loc_140405026
 * 0000000140405038: add     rsp, 8
 * 000000014040503C: call    loc_14040502F
 * 0000000140405041: add     rsp, 8
 * 0000000140405045: call    loc_140405038
 * 000000014040504A: add     rsp, 8
 * 000000014040504E: call    loc_140405041
 * 0000000140405053: add     rsp, 8
 * 0000000140405057: call    loc_14040504A
 * 000000014040505C: add     rsp, 8
 * 0000000140405060: call    loc_140405053
 * 0000000140405065: add     rsp, 8
 * 0000000140405069: call    loc_14040505C
 * 000000014040506E: add     rsp, 8
 * 0000000140405072: call    loc_140405065
 * 0000000140405077: add     rsp, 8
 * 000000014040507B: call    loc_14040506E
 * 0000000140405080: add     rsp, 8
 * 0000000140405084: call    loc_140405077
 * 0000000140405089: add     rsp, 8
 * 000000014040508D: call    loc_140405080
 * 0000000140405092: add     rsp, 8
 * 0000000140405096: call    loc_140405089
 * 000000014040509B: add     rsp, 8
 * 000000014040509F: call    loc_140405092
 * 00000001404050A4: add     rsp, 8
 * 00000001404050A8: call    loc_14040509B
 * 00000001404050AD: add     rsp, 8
 * 00000001404050B1: call    loc_1404050A4
 * 00000001404050B6: add     rsp, 8
 * 00000001404050BA: call    loc_1404050AD
 * 00000001404050BF: add     rsp, 8
 * 00000001404050C3: call    loc_1404050B6
 * 00000001404050C8: add     rsp, 8
 * 00000001404050CC: call    loc_1404050BF
 * 00000001404050D1: add     rsp, 8
 * 00000001404050D5: call    loc_1404050C8
 * 00000001404050DA: add     rsp, 8
 * 00000001404050DE: call    loc_1404050D1
 * 00000001404050E3: add     rsp, 8
 * 00000001404050E7: call    loc_1404050DA
 * 00000001404050EC: add     rsp, 8
 * 00000001404050F0: call    loc_1404050E3
 * 00000001404050F5: add     rsp, 8
 * 00000001404050F9: call    loc_1404050EC
 * 00000001404050FE: add     rsp, 8
 * 0000000140405102: call    loc_1404050F5
 * 0000000140405107: add     rsp, 8
 * 000000014040510B: call    loc_1404050FE
 * 0000000140405110: add     rsp, 8
 * 0000000140405114: call    loc_140405107
 * 0000000140405119: add     rsp, 8
 * 000000014040511D: call    loc_140405110
 * 0000000140405122: add     rsp, 8
 * 0000000140405126: call    loc_140405119
 * 000000014040512B: add     rsp, 8
 * 000000014040512F: call    loc_140405122
 * 0000000140405134: add     rsp, 8
 * 0000000140405138: call    loc_14040512B
 * 000000014040513D: add     rsp, 8
 * 0000000140405141: lfence
 * 0000000140405144: mov     byte ptr gs:853h, 0
 * 000000014040514D: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 0000000140405155: jnz     short loc_1404051A6
 * 0000000140405157: mov     ecx, 0C0000102h
 * 000000014040515C: rdmsr
 * 000000014040515E: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 0000000140405161: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 0000000140405164: test    byte ptr [r10+3], 80h
 * 0000000140405169: jz      short loc_1404051A6
 * 000000014040516B: shl     rdx, 20h
 * 000000014040516F: or      rax, rdx
 * 0000000140405172: cmp     rax, cs:MmUserProbeAddress
 * 0000000140405179: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140405181: cmp     [r10+0F0h], rax
 * 0000000140405188: jz      short loc_1404051A6
 * 000000014040518A: mov     rdx, [r10+1F0h]
 * 0000000140405191: bts     dword ptr [r10+74h], 8
 * 0000000140405197: dec     word ptr [r10+1E6h]
 * 000000014040519F: mov     [rdx+80h], rax
 * 00000001404051A6: test    byte ptr [r10+3], 3
 * 00000001404051AB: mov     [rbp+0D8h+var_58], 0
 * 00000001404051B4: jz      short loc_1404051BB
 * 00000001404051B6: call    KiSaveDebugRegisterState
 * 00000001404051BB: cld
 * 00000001404051BC: stmxcsr [rbp+0D8h+var_12C]
 * 00000001404051C0: ldmxcsr dword ptr gs:180h
 * 00000001404051C9: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001404051CD: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001404051D1: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001404051D5: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001404051D9: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001404051DD: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001404051E1: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404051E8: jz      short loc_1404051F6
 * 00000001404051EA: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001404051F1: jz      short loc_1404051F6
 * 00000001404051F3: stac
 * 00000001404051F6: mov     eax, [rbp+0E0h]
 * 00000001404051FC: mov     rcx, cr2
 * 00000001404051FF: test    [rbp+0D8h+arg_10], 200h
 * 0000000140405209: jz      short loc_14040520C
 * 000000014040520B: sti
 * 000000014040520C: mov     r9, gs:188h
 * 0000000140405215: bt      dword ptr [r9+74h], 8
 * 000000014040521B: jnb     short loc_14040522B
 * 000000014040521D: test    byte ptr [rbp+0D8h+arg_8], 1
 * 0000000140405224: jz      short loc_14040522B
 * 0000000140405226: call    KiUmsTrapEntry
 * 000000014040522B: mov     [rbp+0D8h+var_88], rcx
 * 000000014040522F: bt      [rbp+0D8h+arg_10], 9
 * 0000000140405237: jnb     loc_140405369
 * 000000014040523D: lea     r9, [rbp+0D8h+var_158]
 * 0000000140405241: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 0000000140405248: and     r8b, 1
 * 000000014040524C: mov     rdx, rcx; BugCheckParameter1
 * 000000014040524F: mov     ecx, eax; BugCheckParameter2
 * 0000000140405251: shr     eax, 1
 * 0000000140405253: and     eax, 9
 * 0000000140405256: mov     [rbp+0D8h+var_12E], al
 * 0000000140405259: call    MmAccessFault
 * 000000014040525E: test    eax, eax
 * 0000000140405260: jl      short loc_140405298
 * 0000000140405262: cmp     cs:PsWatchEnabled, 0
 * 0000000140405269: jz      short loc_14040527D
 * 000000014040526B: mov     r8, [rbp+0D8h+var_88]
 * 000000014040526F: mov     rdx, [rbp+0D8h+arg_0]
 * 0000000140405276: mov     ecx, eax
 * 0000000140405278: call    PsWatchWorkingSet
 * 000000014040527D: cmp     cs:KdpOweBreakpoint, 0
 * 0000000140405284: jz      loc_14040536F
 * 000000014040528A: mov     rcx, [rbp+0D8h+var_88]
 * 000000014040528E: call    KdSetOwedBreakpoints
 * 0000000140405293: jmp     loc_14040536F
 * 0000000140405298: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040529F: jz      short loc_1404052F3
 * 00000001404052A1: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001404052A9: jnz     short loc_1404052E9
 * 00000001404052AB: mov     r9, gs:188h
 * 00000001404052B4: test    byte ptr [r9+3], 4
 * 00000001404052B9: jz      short loc_1404052C4
 * 00000001404052BB: mov     r8, [r9+5F0h]
 * 00000001404052C2: jmp     short loc_1404052CD
 * 00000001404052C4: mov     r8, gs:30h
 * 00000001404052CD: cmp     r8, [rbp+0D8h+var_F0]
 * 00000001404052D1: jz      short loc_1404052F3
 * 00000001404052D3: mov     ecx, 0C0000102h
 * 00000001404052D8: mov     eax, r8d
 * 00000001404052DB: shr     r8, 20h
 * 00000001404052DF: mov     edx, r8d
 * 00000001404052E2: wrmsr
 * 00000001404052E4: jmp     loc_14040536F
 * 00000001404052E9: mov     rcx, [rbp+0D8h+var_88]
 * 00000001404052ED: shr     rcx, 20h
 * 00000001404052F1: jnz     short loc_14040536F
 * 00000001404052F3: mov     ecx, eax
 * 00000001404052F5: mov     edx, 2
 * 00000001404052FA: cmp     ecx, 0D0000006h
 * 0000000140405300: jz      short loc_140405343
 * 0000000140405302: cmp     ecx, 0C0000005h
 * 0000000140405308: jz      short loc_140405329
 * 000000014040530A: cmp     ecx, 80000001h
 * 0000000140405310: jz      short loc_14040532E
 * 0000000140405312: cmp     ecx, 0C00000FDh
 * 0000000140405318: jz      short loc_14040532E
 * 000000014040531A: mov     ecx, 0C0000006h
 * 000000014040531F: mov     edx, 3
 * 0000000140405324: mov     r11d, eax
 * 0000000140405327: jmp     short loc_14040532E
 * 0000000140405329: mov     ecx, 10000004h
 * 000000014040532E: mov     r10, [rbp+0D8h+var_88]
 * 0000000140405332: movzx   r9, [rbp+0D8h+var_12E]
 * 0000000140405337: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040533E: call    KiExceptionDispatch
 * 0000000140405343: mov     rax, cr8
 * 0000000140405347: mov     r10, [rbp+0D8h+arg_0]
 * 000000014040534E: movzx   r9, [rbp+0D8h+var_12E]
 * 0000000140405353: and     eax, 0FFh
 * 0000000140405358: mov     r8, rax
 * 000000014040535B: mov     rdx, [rbp+0D8h+var_88]
 * 000000014040535F: mov     ecx, 0Ah
 * 0000000140405364: call    KiBugCheckDispatch
 * 0000000140405369: xor     eax, eax
 * 000000014040536B: mov     al, 0FFh
 * 000000014040536D: jmp     short loc_140405347
 * 000000014040536F: mov     rax, cr8
 * 0000000140405373: or      eax, eax
 * 0000000140405375: mov     [rbp+0D8h+var_138], eax
 * 0000000140405378: jnz     short loc_140405383
 * 000000014040537A: mov     ecx, 1
 * 000000014040537F: mov     cr8, rcx
 * 0000000140405383: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140405387: call    KiCheckForSListAddress
 * 000000014040538C: mov     ecx, [rbp+0D8h+var_138]
 * 000000014040538F: or      ecx, ecx
 * 0000000140405391: jnz     short loc_140405397
 * 0000000140405393: mov     cr8, rcx
 * 0000000140405397: cli
 * 0000000140405398: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040539F: jz      loc_1404054EF
 * 00000001404053A5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404053AC: jz      short loc_1404053B1
 * 00000001404053AE: stac
 * 00000001404053B1: mov     rcx, gs:188h
 * 00000001404053BA: test    byte ptr [rcx+0C2h], 3
 * 00000001404053C1: jz      short loc_1404053DE
 * 00000001404053C3: mov     ecx, 1
 * 00000001404053C8: mov     cr8, rcx
 * 00000001404053CC: sti
 * 00000001404053CD: call    KiInitiateUserApc
 * 00000001404053D2: cli
 * 00000001404053D3: mov     ecx, 0
 * 00000001404053D8: mov     cr8, rcx
 * 00000001404053DC: jmp     short loc_1404053B1
 * 00000001404053DE: test    byte ptr gs:27Eh, 2
 * 00000001404053E7: jz      short loc_1404053F0
 * 00000001404053E9: xor     ecx, ecx
 * 00000001404053EB: call    KiUpdateStibpPairing
 * 00000001404053F0: mov     rcx, gs:188h
 * 00000001404053F9: test    dword ptr [rcx], 8000000h
 * 00000001404053FF: jz      short loc_140405406
 * 0000000140405401: call    KiRestoreSetContextState
 * 0000000140405406: mov     rcx, gs:188h
 * 000000014040540F: test    dword ptr [rcx], 40010000h
 * 0000000140405415: jz      short loc_14040543C
 * 0000000140405417: test    byte ptr [rcx+2], 1
 * 000000014040541B: jz      short loc_14040542B
 * 000000014040541D: call    KiCopyCounters
 * 0000000140405422: mov     rcx, gs:188h
 * 000000014040542B: test    byte ptr [rcx+3], 40h
 * 000000014040542F: jz      short loc_14040543C
 * 0000000140405431: lea     rsp, [rbp-80h]
 * 0000000140405435: mov     cl, 1
 * 0000000140405437: call    KiUmsExit
 * 000000014040543C: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140405440: cmp     [rbp+0D8h+var_58], 0
 * 0000000140405448: jz      short loc_14040544F
 * 000000014040544A: call    KiRestoreDebugRegisterState
 * 000000014040544F: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140405453: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140405457: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014040545B: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014040545F: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140405463: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140405467: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040546B: mov     r10, [rbp+0D8h+var_100]
 * 000000014040546F: mov     r9, [rbp+0D8h+var_108]
 * 0000000140405473: mov     r8, [rbp+0D8h+var_110]
 * 0000000140405477: mov     byte ptr gs:853h, 0
 * 0000000140405480: movzx   eax, byte ptr gs:27Dh
 * 0000000140405489: cmp     gs:27Ah, al
 * 0000000140405491: jz      short loc_1404054A4
 * 0000000140405493: mov     gs:27Ah, al
 * 000000014040549B: mov     ecx, 48h ; 'H'
 * 00000001404054A0: xor     edx, edx
 * 00000001404054A2: wrmsr
 * 00000001404054A4: btr     word ptr gs:278h, 2
 * 00000001404054AF: jnb     short loc_1404054BF
 * 00000001404054B1: mov     eax, 1
 * 00000001404054B6: xor     edx, edx
 * 00000001404054B8: mov     ecx, 49h ; 'I'
 * 00000001404054BD: wrmsr
 * 00000001404054BF: mov     rdx, [rbp+0D8h+var_118]
 * 00000001404054C3: mov     rcx, [rbp+0D8h+var_120]
 * 00000001404054C7: mov     rax, [rbp+0D8h+var_128]
 * 00000001404054CB: mov     rsp, rbp
 * 00000001404054CE: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001404054D5: add     rsp, 0E8h
 * 00000001404054DC: test    cs:KiKvaShadow, 1
 * 00000001404054E3: jz      short loc_1404054EA
 * 00000001404054E5: jmp     KiKernelExit
 * 00000001404054EA: swapgs
 * 00000001404054ED: iretq
 * 00000001404054EF: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001404054F3: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001404054F7: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001404054FB: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001404054FF: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140405503: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140405507: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014040550B: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040550F: mov     r10, [rbp+0D8h+var_100]
 * 0000000140405513: mov     r9, [rbp+0D8h+var_108]
 * 0000000140405517: mov     r8, [rbp+0D8h+var_110]
 * 000000014040551B: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040551F: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140405523: mov     rax, [rbp+0D8h+var_128]
 * 0000000140405527: mov     rsp, rbp
 * 000000014040552A: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140405531: add     rsp, 0E8h
 * 0000000140405538: iretq
 */
