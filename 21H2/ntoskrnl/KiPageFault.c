/*
 * XREFs of KiPageFault @ 0x14040DD00
 * Callers:
 *     KiPageFaultShadow @ 0x140A14840 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x14024D5B0 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x14040DD00 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x140412740 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x140413580 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140413A00 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KdSetOwedBreakpoints @ 0x140511EE0 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 *     PsWatchWorkingSet @ 0x140581550 (PsWatchWorkingSet.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x14040DD00
 * Reason: Hex-Rays returned no pseudocode for 0x14040DD00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040DD00: push    rbp
 * 000000014040DD01: sub     rsp, 158h
 * 000000014040DD08: lea     rbp, [rsp+80h]
 * 000000014040DD10: mov     [rbp+0D8h+var_12D], 1
 * 000000014040DD14: mov     [rbp+0D8h+var_128], rax
 * 000000014040DD18: mov     [rbp+0D8h+var_120], rcx
 * 000000014040DD1C: mov     [rbp+0D8h+var_118], rdx
 * 000000014040DD20: mov     [rbp+0D8h+var_110], r8
 * 000000014040DD24: mov     [rbp+0D8h+var_108], r9
 * 000000014040DD28: mov     [rbp+0D8h+var_100], r10
 * 000000014040DD2C: mov     [rbp+0D8h+var_F8], r11
 * 000000014040DD30: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040DD37: jnz     short loc_14040DD68
 * 000000014040DD39: lfence
 * 000000014040DD3C: test    word ptr gs:860h, 1
 * 000000014040DD47: jnz     short loc_14040DD51
 * 000000014040DD49: lfence
 * 000000014040DD4C: jmp     loc_14040DFCA
 * 000000014040DD51: movzx   eax, word ptr gs:864h
 * 000000014040DD5A: mov     ecx, 48h ; 'H'
 * 000000014040DD5F: xor     edx, edx
 * 000000014040DD61: wrmsr
 * 000000014040DD63: jmp     loc_14040DFCA
 * 000000014040DD68: test    cs:KiKvaShadow, 1
 * 000000014040DD6F: jnz     short loc_14040DD74
 * 000000014040DD71: swapgs
 * 000000014040DD74: lfence
 * 000000014040DD77: mov     r10, gs:188h
 * 000000014040DD80: mov     rcx, gs:188h
 * 000000014040DD89: mov     rcx, [rcx+220h]
 * 000000014040DD90: mov     rcx, [rcx+9E0h]
 * 000000014040DD97: mov     gs:858h, rcx
 * 000000014040DDA0: mov     cx, gs:850h
 * 000000014040DDA9: mov     gs:852h, cx
 * 000000014040DDB2: mov     cx, gs:860h
 * 000000014040DDBB: mov     gs:854h, cx
 * 000000014040DDC4: movzx   eax, word ptr gs:866h
 * 000000014040DDCD: cmp     gs:864h, ax
 * 000000014040DDD6: jz      short loc_14040DDEA
 * 000000014040DDD8: mov     gs:864h, ax
 * 000000014040DDE1: mov     ecx, 48h ; 'H'
 * 000000014040DDE6: xor     edx, edx
 * 000000014040DDE8: wrmsr
 * 000000014040DDEA: movzx   edx, word ptr gs:860h
 * 000000014040DDF3: test    edx, 8
 * 000000014040DDF9: jz      short loc_14040DE12
 * 000000014040DDFB: mov     eax, 1
 * 000000014040DE00: xor     edx, edx
 * 000000014040DE02: mov     ecx, 49h ; 'I'
 * 000000014040DE07: wrmsr
 * 000000014040DE09: movzx   edx, word ptr gs:860h
 * 000000014040DE12: test    edx, 2
 * 000000014040DE18: jz      loc_14040DF43
 * 000000014040DE1E: call    loc_14040DF31
 * 000000014040DE23: add     rsp, 8
 * 000000014040DE27: call    loc_14040DF3A
 * 000000014040DE2C: add     rsp, 8
 * 000000014040DE30: call    loc_14040DE23
 * 000000014040DE35: add     rsp, 8
 * 000000014040DE39: call    loc_14040DE2C
 * 000000014040DE3E: add     rsp, 8
 * 000000014040DE42: call    loc_14040DE35
 * 000000014040DE47: add     rsp, 8
 * 000000014040DE4B: call    loc_14040DE3E
 * 000000014040DE50: add     rsp, 8
 * 000000014040DE54: call    loc_14040DE47
 * 000000014040DE59: add     rsp, 8
 * 000000014040DE5D: call    loc_14040DE50
 * 000000014040DE62: add     rsp, 8
 * 000000014040DE66: call    loc_14040DE59
 * 000000014040DE6B: add     rsp, 8
 * 000000014040DE6F: call    loc_14040DE62
 * 000000014040DE74: add     rsp, 8
 * 000000014040DE78: call    loc_14040DE6B
 * 000000014040DE7D: add     rsp, 8
 * 000000014040DE81: call    loc_14040DE74
 * 000000014040DE86: add     rsp, 8
 * 000000014040DE8A: call    loc_14040DE7D
 * 000000014040DE8F: add     rsp, 8
 * 000000014040DE93: call    loc_14040DE86
 * 000000014040DE98: add     rsp, 8
 * 000000014040DE9C: call    loc_14040DE8F
 * 000000014040DEA1: add     rsp, 8
 * 000000014040DEA5: call    loc_14040DE98
 * 000000014040DEAA: add     rsp, 8
 * 000000014040DEAE: call    loc_14040DEA1
 * 000000014040DEB3: add     rsp, 8
 * 000000014040DEB7: call    loc_14040DEAA
 * 000000014040DEBC: add     rsp, 8
 * 000000014040DEC0: call    loc_14040DEB3
 * 000000014040DEC5: add     rsp, 8
 * 000000014040DEC9: call    loc_14040DEBC
 * 000000014040DECE: add     rsp, 8
 * 000000014040DED2: call    loc_14040DEC5
 * 000000014040DED7: add     rsp, 8
 * 000000014040DEDB: call    loc_14040DECE
 * 000000014040DEE0: add     rsp, 8
 * 000000014040DEE4: call    loc_14040DED7
 * 000000014040DEE9: add     rsp, 8
 * 000000014040DEED: call    loc_14040DEE0
 * 000000014040DEF2: add     rsp, 8
 * 000000014040DEF6: call    loc_14040DEE9
 * 000000014040DEFB: add     rsp, 8
 * 000000014040DEFF: call    loc_14040DEF2
 * 000000014040DF04: add     rsp, 8
 * 000000014040DF08: call    loc_14040DEFB
 * 000000014040DF0D: add     rsp, 8
 * 000000014040DF11: call    loc_14040DF04
 * 000000014040DF16: add     rsp, 8
 * 000000014040DF1A: call    loc_14040DF0D
 * 000000014040DF1F: add     rsp, 8
 * 000000014040DF23: call    loc_14040DF16
 * 000000014040DF28: add     rsp, 8
 * 000000014040DF2C: call    loc_14040DF1F
 * 000000014040DF31: add     rsp, 8
 * 000000014040DF35: call    loc_14040DF28
 * 000000014040DF3A: add     rsp, 8
 * 000000014040DF3E: mov     eax, 0DADAh
 * 000000014040DF43: test    edx, 200h
 * 000000014040DF49: jz      short loc_14040DF50
 * 000000014040DF4B: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040DF50: lfence
 * 000000014040DF53: mov     byte ptr gs:856h, 0
 * 000000014040DF5C: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014040DF64: jnz     short loc_14040DFB5
 * 000000014040DF66: mov     ecx, 0C0000102h
 * 000000014040DF6B: rdmsr
 * 000000014040DF6D: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 000000014040DF70: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 000000014040DF73: test    byte ptr [r10+3], 80h
 * 000000014040DF78: jz      short loc_14040DFB5
 * 000000014040DF7A: shl     rdx, 20h
 * 000000014040DF7E: or      rax, rdx
 * 000000014040DF81: cmp     rax, cs:MmUserProbeAddress
 * 000000014040DF88: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040DF90: cmp     [r10+0F0h], rax
 * 000000014040DF97: jz      short loc_14040DFB5
 * 000000014040DF99: mov     rdx, [r10+1F0h]
 * 000000014040DFA0: bts     dword ptr [r10+74h], 8
 * 000000014040DFA6: dec     word ptr [r10+1E6h]
 * 000000014040DFAE: mov     [rdx+80h], rax
 * 000000014040DFB5: test    byte ptr [r10+3], 3
 * 000000014040DFBA: mov     [rbp+0D8h+var_58], 0
 * 000000014040DFC3: jz      short loc_14040DFCA
 * 000000014040DFC5: call    KiSaveDebugRegisterState
 * 000000014040DFCA: cld
 * 000000014040DFCB: stmxcsr [rbp+0D8h+var_12C]
 * 000000014040DFCF: ldmxcsr dword ptr gs:180h
 * 000000014040DFD8: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040DFDC: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014040DFE0: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040DFE4: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014040DFE8: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040DFEC: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014040DFF0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040DFF7: jz      short loc_14040E005
 * 000000014040DFF9: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040E000: jz      short loc_14040E005
 * 000000014040E002: stac
 * 000000014040E005: mov     eax, [rbp+0E0h]
 * 000000014040E00B: mov     rcx, cr2
 * 000000014040E00E: test    [rbp+0D8h+arg_10], 200h
 * 000000014040E018: jz      short loc_14040E01B
 * 000000014040E01A: sti
 * 000000014040E01B: mov     r9, gs:188h
 * 000000014040E024: bt      dword ptr [r9+74h], 8
 * 000000014040E02A: jnb     short loc_14040E03A
 * 000000014040E02C: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040E033: jz      short loc_14040E03A
 * 000000014040E035: call    KiUmsTrapEntry
 * 000000014040E03A: mov     [rbp+0D8h+var_88], rcx
 * 000000014040E03E: bt      [rbp+0D8h+arg_10], 9
 * 000000014040E046: jnb     loc_14040E178
 * 000000014040E04C: lea     r9, [rbp+0D8h+var_158]
 * 000000014040E050: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 000000014040E057: and     r8b, 1
 * 000000014040E05B: mov     rdx, rcx; BugCheckParameter1
 * 000000014040E05E: mov     ecx, eax; BugCheckParameter2
 * 000000014040E060: shr     eax, 1
 * 000000014040E062: and     eax, 9
 * 000000014040E065: mov     [rbp+0D8h+var_12E], al
 * 000000014040E068: call    MmAccessFault
 * 000000014040E06D: test    eax, eax
 * 000000014040E06F: jl      short loc_14040E0A7
 * 000000014040E071: cmp     cs:PsWatchEnabled, 0
 * 000000014040E078: jz      short loc_14040E08C
 * 000000014040E07A: mov     r8, [rbp+0D8h+var_88]
 * 000000014040E07E: mov     rdx, [rbp+0D8h+arg_0]
 * 000000014040E085: mov     ecx, eax
 * 000000014040E087: call    PsWatchWorkingSet
 * 000000014040E08C: cmp     cs:KdpOweBreakpoint, 0
 * 000000014040E093: jz      loc_14040E17E
 * 000000014040E099: mov     rcx, [rbp+0D8h+var_88]
 * 000000014040E09D: call    KdSetOwedBreakpoints
 * 000000014040E0A2: jmp     loc_14040E17E
 * 000000014040E0A7: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040E0AE: jz      short loc_14040E102
 * 000000014040E0B0: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014040E0B8: jnz     short loc_14040E0F8
 * 000000014040E0BA: mov     r9, gs:188h
 * 000000014040E0C3: test    byte ptr [r9+3], 4
 * 000000014040E0C8: jz      short loc_14040E0D3
 * 000000014040E0CA: mov     r8, [r9+5F0h]
 * 000000014040E0D1: jmp     short loc_14040E0DC
 * 000000014040E0D3: mov     r8, gs:30h
 * 000000014040E0DC: cmp     r8, [rbp+0D8h+var_F0]
 * 000000014040E0E0: jz      short loc_14040E102
 * 000000014040E0E2: mov     ecx, 0C0000102h
 * 000000014040E0E7: mov     eax, r8d
 * 000000014040E0EA: shr     r8, 20h
 * 000000014040E0EE: mov     edx, r8d
 * 000000014040E0F1: wrmsr
 * 000000014040E0F3: jmp     loc_14040E17E
 * 000000014040E0F8: mov     rcx, [rbp+0D8h+var_88]
 * 000000014040E0FC: shr     rcx, 20h
 * 000000014040E100: jnz     short loc_14040E17E
 * 000000014040E102: mov     ecx, eax
 * 000000014040E104: mov     edx, 2
 * 000000014040E109: cmp     ecx, 0D0000006h
 * 000000014040E10F: jz      short loc_14040E152
 * 000000014040E111: cmp     ecx, 0C0000005h
 * 000000014040E117: jz      short loc_14040E138
 * 000000014040E119: cmp     ecx, 80000001h
 * 000000014040E11F: jz      short loc_14040E13D
 * 000000014040E121: cmp     ecx, 0C00000FDh
 * 000000014040E127: jz      short loc_14040E13D
 * 000000014040E129: mov     ecx, 0C0000006h
 * 000000014040E12E: mov     edx, 3
 * 000000014040E133: mov     r11d, eax
 * 000000014040E136: jmp     short loc_14040E13D
 * 000000014040E138: mov     ecx, 10000004h
 * 000000014040E13D: mov     r10, [rbp+0D8h+var_88]
 * 000000014040E141: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014040E146: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040E14D: call    KiExceptionDispatch
 * 000000014040E152: mov     rax, cr8
 * 000000014040E156: mov     r10, [rbp+0D8h+arg_0]
 * 000000014040E15D: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014040E162: and     eax, 0FFh
 * 000000014040E167: mov     r8, rax
 * 000000014040E16A: mov     rdx, [rbp+0D8h+var_88]
 * 000000014040E16E: mov     ecx, 0Ah
 * 000000014040E173: call    KiBugCheckDispatch
 * 000000014040E178: xor     eax, eax
 * 000000014040E17A: mov     al, 0FFh
 * 000000014040E17C: jmp     short loc_14040E156
 * 000000014040E17E: mov     rax, cr8
 * 000000014040E182: or      eax, eax
 * 000000014040E184: mov     [rbp+0D8h+var_138], eax
 * 000000014040E187: jnz     short loc_14040E192
 * 000000014040E189: mov     ecx, 1
 * 000000014040E18E: mov     cr8, rcx
 * 000000014040E192: lea     rcx, [rbp+0D8h+var_158]
 * 000000014040E196: call    KiCheckForSListAddress
 * 000000014040E19B: mov     ecx, [rbp+0D8h+var_138]
 * 000000014040E19E: or      ecx, ecx
 * 000000014040E1A0: jnz     short loc_14040E1A6
 * 000000014040E1A2: mov     cr8, rcx
 * 000000014040E1A6: cli
 * 000000014040E1A7: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040E1AE: jz      loc_14040E461
 * 000000014040E1B4: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040E1BB: jz      short loc_14040E1C0
 * 000000014040E1BD: stac
 * 000000014040E1C0: mov     rcx, gs:188h
 * 000000014040E1C9: test    byte ptr [rcx+0C2h], 3
 * 000000014040E1D0: jz      short loc_14040E1ED
 * 000000014040E1D2: mov     ecx, 1
 * 000000014040E1D7: mov     cr8, rcx
 * 000000014040E1DB: sti
 * 000000014040E1DC: call    KiInitiateUserApc
 * 000000014040E1E1: cli
 * 000000014040E1E2: mov     ecx, 0
 * 000000014040E1E7: mov     cr8, rcx
 * 000000014040E1EB: jmp     short loc_14040E1C0
 * 000000014040E1ED: test    byte ptr gs:86Ch, 2
 * 000000014040E1F6: jz      short loc_14040E1FF
 * 000000014040E1F8: xor     ecx, ecx
 * 000000014040E1FA: call    KiUpdateStibpPairing
 * 000000014040E1FF: mov     rcx, gs:188h
 * 000000014040E208: test    dword ptr [rcx], 8000000h
 * 000000014040E20E: jz      short loc_14040E215
 * 000000014040E210: call    KiRestoreSetContextState
 * 000000014040E215: mov     rcx, gs:188h
 * 000000014040E21E: test    dword ptr [rcx], 40010000h
 * 000000014040E224: jz      short loc_14040E24B
 * 000000014040E226: test    byte ptr [rcx+2], 1
 * 000000014040E22A: jz      short loc_14040E23A
 * 000000014040E22C: call    KiCopyCounters
 * 000000014040E231: mov     rcx, gs:188h
 * 000000014040E23A: test    byte ptr [rcx+3], 40h
 * 000000014040E23E: jz      short loc_14040E24B
 * 000000014040E240: lea     rsp, [rbp-80h]
 * 000000014040E244: mov     cl, 1
 * 000000014040E246: call    KiUmsExit
 * 000000014040E24B: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014040E24F: cmp     [rbp+0D8h+var_58], 0
 * 000000014040E257: jz      short loc_14040E25E
 * 000000014040E259: call    KiRestoreDebugRegisterState
 * 000000014040E25E: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014040E262: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014040E266: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014040E26A: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014040E26E: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014040E272: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014040E276: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040E27A: mov     r10, [rbp+0D8h+var_100]
 * 000000014040E27E: mov     r9, [rbp+0D8h+var_108]
 * 000000014040E282: mov     r8, [rbp+0D8h+var_110]
 * 000000014040E286: mov     byte ptr gs:856h, 0
 * 000000014040E28F: movzx   eax, word ptr gs:86Ah
 * 000000014040E298: cmp     gs:864h, ax
 * 000000014040E2A1: jz      short loc_14040E2B5
 * 000000014040E2A3: mov     gs:864h, ax
 * 000000014040E2AC: mov     ecx, 48h ; 'H'
 * 000000014040E2B1: xor     edx, edx
 * 000000014040E2B3: wrmsr
 * 000000014040E2B5: btr     word ptr gs:860h, 2
 * 000000014040E2C0: jnb     short loc_14040E2D0
 * 000000014040E2C2: mov     eax, 1
 * 000000014040E2C7: xor     edx, edx
 * 000000014040E2C9: mov     ecx, 49h ; 'I'
 * 000000014040E2CE: wrmsr
 * 000000014040E2D0: btr     word ptr gs:860h, 5
 * 000000014040E2DB: jnb     loc_14040E406
 * 000000014040E2E1: call    loc_14040E3F4
 * 000000014040E2E6: add     rsp, 8
 * 000000014040E2EA: call    loc_14040E3FD
 * 000000014040E2EF: add     rsp, 8
 * 000000014040E2F3: call    loc_14040E2E6
 * 000000014040E2F8: add     rsp, 8
 * 000000014040E2FC: call    loc_14040E2EF
 * 000000014040E301: add     rsp, 8
 * 000000014040E305: call    loc_14040E2F8
 * 000000014040E30A: add     rsp, 8
 * 000000014040E30E: call    loc_14040E301
 * 000000014040E313: add     rsp, 8
 * 000000014040E317: call    loc_14040E30A
 * 000000014040E31C: add     rsp, 8
 * 000000014040E320: call    loc_14040E313
 * 000000014040E325: add     rsp, 8
 * 000000014040E329: call    loc_14040E31C
 * 000000014040E32E: add     rsp, 8
 * 000000014040E332: call    loc_14040E325
 * 000000014040E337: add     rsp, 8
 * 000000014040E33B: call    loc_14040E32E
 * 000000014040E340: add     rsp, 8
 * 000000014040E344: call    loc_14040E337
 * 000000014040E349: add     rsp, 8
 * 000000014040E34D: call    loc_14040E340
 * 000000014040E352: add     rsp, 8
 * 000000014040E356: call    loc_14040E349
 * 000000014040E35B: add     rsp, 8
 * 000000014040E35F: call    loc_14040E352
 * 000000014040E364: add     rsp, 8
 * 000000014040E368: call    loc_14040E35B
 * 000000014040E36D: add     rsp, 8
 * 000000014040E371: call    loc_14040E364
 * 000000014040E376: add     rsp, 8
 * 000000014040E37A: call    loc_14040E36D
 * 000000014040E37F: add     rsp, 8
 * 000000014040E383: call    loc_14040E376
 * 000000014040E388: add     rsp, 8
 * 000000014040E38C: call    loc_14040E37F
 * 000000014040E391: add     rsp, 8
 * 000000014040E395: call    loc_14040E388
 * 000000014040E39A: add     rsp, 8
 * 000000014040E39E: call    loc_14040E391
 * 000000014040E3A3: add     rsp, 8
 * 000000014040E3A7: call    loc_14040E39A
 * 000000014040E3AC: add     rsp, 8
 * 000000014040E3B0: call    loc_14040E3A3
 * 000000014040E3B5: add     rsp, 8
 * 000000014040E3B9: call    loc_14040E3AC
 * 000000014040E3BE: add     rsp, 8
 * 000000014040E3C2: call    loc_14040E3B5
 * 000000014040E3C7: add     rsp, 8
 * 000000014040E3CB: call    loc_14040E3BE
 * 000000014040E3D0: add     rsp, 8
 * 000000014040E3D4: call    loc_14040E3C7
 * 000000014040E3D9: add     rsp, 8
 * 000000014040E3DD: call    loc_14040E3D0
 * 000000014040E3E2: add     rsp, 8
 * 000000014040E3E6: call    loc_14040E3D9
 * 000000014040E3EB: add     rsp, 8
 * 000000014040E3EF: call    loc_14040E3E2
 * 000000014040E3F4: add     rsp, 8
 * 000000014040E3F8: call    loc_14040E3EB
 * 000000014040E3FD: add     rsp, 8
 * 000000014040E401: mov     eax, 0DADAh
 * 000000014040E406: test    word ptr gs:860h, 80h
 * 000000014040E411: jz      short loc_14040E41F
 * 000000014040E413: xor     eax, eax
 * 000000014040E415: xor     edx, edx
 * 000000014040E417: mov     ecx, 1
 * 000000014040E41C: div     rcx
 * 000000014040E41F: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040E423: mov     rcx, [rbp+0D8h+var_120]
 * 000000014040E427: mov     rax, [rbp+0D8h+var_128]
 * 000000014040E42B: mov     rsp, rbp
 * 000000014040E42E: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014040E435: add     rsp, 0E8h
 * 000000014040E43C: test    cs:KiKvaShadow, 1
 * 000000014040E443: jz      short loc_14040E44A
 * 000000014040E445: jmp     KiKernelExit
 * 000000014040E44A: test    word ptr gs:860h, 100h
 * 000000014040E455: jz      short loc_14040E45C
 * 000000014040E457: verw    [rsp-10h+arg_20]
 * 000000014040E45C: swapgs
 * 000000014040E45F: iretq
 * 000000014040E461: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014040E465: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014040E469: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014040E46D: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014040E471: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014040E475: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014040E479: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014040E47D: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040E481: mov     r10, [rbp+0D8h+var_100]
 * 000000014040E485: mov     r9, [rbp+0D8h+var_108]
 * 000000014040E489: mov     r8, [rbp+0D8h+var_110]
 * 000000014040E48D: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040E491: mov     rcx, [rbp+0D8h+var_120]
 * 000000014040E495: mov     rax, [rbp+0D8h+var_128]
 * 000000014040E499: mov     rsp, rbp
 * 000000014040E49C: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014040E4A3: add     rsp, 0E8h
 * 000000014040E4AA: iretq
 */
