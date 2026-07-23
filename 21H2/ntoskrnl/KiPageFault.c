/*
 * XREFs of KiPageFault @ 0x14040DE00
 * Callers:
 *     KiPageFaultShadow @ 0x140A15840 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1402F1E00 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x14040DE00 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x140412840 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x140413680 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140413B00 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KdSetOwedBreakpoints @ 0x140512120 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 *     PsWatchWorkingSet @ 0x140581800 (PsWatchWorkingSet.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x14040DE00
 * Reason: Hex-Rays returned no pseudocode for 0x14040DE00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040DE00: push    rbp
 * 000000014040DE01: sub     rsp, 158h
 * 000000014040DE08: lea     rbp, [rsp+80h]
 * 000000014040DE10: mov     [rbp+0D8h+var_12D], 1
 * 000000014040DE14: mov     [rbp+0D8h+var_128], rax
 * 000000014040DE18: mov     [rbp+0D8h+var_120], rcx
 * 000000014040DE1C: mov     [rbp+0D8h+var_118], rdx
 * 000000014040DE20: mov     [rbp+0D8h+var_110], r8
 * 000000014040DE24: mov     [rbp+0D8h+var_108], r9
 * 000000014040DE28: mov     [rbp+0D8h+var_100], r10
 * 000000014040DE2C: mov     [rbp+0D8h+var_F8], r11
 * 000000014040DE30: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040DE37: jnz     short loc_14040DE68
 * 000000014040DE39: lfence
 * 000000014040DE3C: test    word ptr gs:860h, 1
 * 000000014040DE47: jnz     short loc_14040DE51
 * 000000014040DE49: lfence
 * 000000014040DE4C: jmp     loc_14040E0CA
 * 000000014040DE51: movzx   eax, word ptr gs:864h
 * 000000014040DE5A: mov     ecx, 48h ; 'H'
 * 000000014040DE5F: xor     edx, edx
 * 000000014040DE61: wrmsr
 * 000000014040DE63: jmp     loc_14040E0CA
 * 000000014040DE68: test    cs:KiKvaShadow, 1
 * 000000014040DE6F: jnz     short loc_14040DE74
 * 000000014040DE71: swapgs
 * 000000014040DE74: lfence
 * 000000014040DE77: mov     r10, gs:188h
 * 000000014040DE80: mov     rcx, gs:188h
 * 000000014040DE89: mov     rcx, [rcx+220h]
 * 000000014040DE90: mov     rcx, [rcx+9E0h]
 * 000000014040DE97: mov     gs:858h, rcx
 * 000000014040DEA0: mov     cx, gs:850h
 * 000000014040DEA9: mov     gs:852h, cx
 * 000000014040DEB2: mov     cx, gs:860h
 * 000000014040DEBB: mov     gs:854h, cx
 * 000000014040DEC4: movzx   eax, word ptr gs:866h
 * 000000014040DECD: cmp     gs:864h, ax
 * 000000014040DED6: jz      short loc_14040DEEA
 * 000000014040DED8: mov     gs:864h, ax
 * 000000014040DEE1: mov     ecx, 48h ; 'H'
 * 000000014040DEE6: xor     edx, edx
 * 000000014040DEE8: wrmsr
 * 000000014040DEEA: movzx   edx, word ptr gs:860h
 * 000000014040DEF3: test    edx, 8
 * 000000014040DEF9: jz      short loc_14040DF12
 * 000000014040DEFB: mov     eax, 1
 * 000000014040DF00: xor     edx, edx
 * 000000014040DF02: mov     ecx, 49h ; 'I'
 * 000000014040DF07: wrmsr
 * 000000014040DF09: movzx   edx, word ptr gs:860h
 * 000000014040DF12: test    edx, 2
 * 000000014040DF18: jz      loc_14040E043
 * 000000014040DF1E: call    loc_14040E031
 * 000000014040DF23: add     rsp, 8
 * 000000014040DF27: call    loc_14040E03A
 * 000000014040DF2C: add     rsp, 8
 * 000000014040DF30: call    loc_14040DF23
 * 000000014040DF35: add     rsp, 8
 * 000000014040DF39: call    loc_14040DF2C
 * 000000014040DF3E: add     rsp, 8
 * 000000014040DF42: call    loc_14040DF35
 * 000000014040DF47: add     rsp, 8
 * 000000014040DF4B: call    loc_14040DF3E
 * 000000014040DF50: add     rsp, 8
 * 000000014040DF54: call    loc_14040DF47
 * 000000014040DF59: add     rsp, 8
 * 000000014040DF5D: call    loc_14040DF50
 * 000000014040DF62: add     rsp, 8
 * 000000014040DF66: call    loc_14040DF59
 * 000000014040DF6B: add     rsp, 8
 * 000000014040DF6F: call    loc_14040DF62
 * 000000014040DF74: add     rsp, 8
 * 000000014040DF78: call    loc_14040DF6B
 * 000000014040DF7D: add     rsp, 8
 * 000000014040DF81: call    loc_14040DF74
 * 000000014040DF86: add     rsp, 8
 * 000000014040DF8A: call    loc_14040DF7D
 * 000000014040DF8F: add     rsp, 8
 * 000000014040DF93: call    loc_14040DF86
 * 000000014040DF98: add     rsp, 8
 * 000000014040DF9C: call    loc_14040DF8F
 * 000000014040DFA1: add     rsp, 8
 * 000000014040DFA5: call    loc_14040DF98
 * 000000014040DFAA: add     rsp, 8
 * 000000014040DFAE: call    loc_14040DFA1
 * 000000014040DFB3: add     rsp, 8
 * 000000014040DFB7: call    loc_14040DFAA
 * 000000014040DFBC: add     rsp, 8
 * 000000014040DFC0: call    loc_14040DFB3
 * 000000014040DFC5: add     rsp, 8
 * 000000014040DFC9: call    loc_14040DFBC
 * 000000014040DFCE: add     rsp, 8
 * 000000014040DFD2: call    loc_14040DFC5
 * 000000014040DFD7: add     rsp, 8
 * 000000014040DFDB: call    loc_14040DFCE
 * 000000014040DFE0: add     rsp, 8
 * 000000014040DFE4: call    loc_14040DFD7
 * 000000014040DFE9: add     rsp, 8
 * 000000014040DFED: call    loc_14040DFE0
 * 000000014040DFF2: add     rsp, 8
 * 000000014040DFF6: call    loc_14040DFE9
 * 000000014040DFFB: add     rsp, 8
 * 000000014040DFFF: call    loc_14040DFF2
 * 000000014040E004: add     rsp, 8
 * 000000014040E008: call    loc_14040DFFB
 * 000000014040E00D: add     rsp, 8
 * 000000014040E011: call    loc_14040E004
 * 000000014040E016: add     rsp, 8
 * 000000014040E01A: call    loc_14040E00D
 * 000000014040E01F: add     rsp, 8
 * 000000014040E023: call    loc_14040E016
 * 000000014040E028: add     rsp, 8
 * 000000014040E02C: call    loc_14040E01F
 * 000000014040E031: add     rsp, 8
 * 000000014040E035: call    loc_14040E028
 * 000000014040E03A: add     rsp, 8
 * 000000014040E03E: mov     eax, 0DADAh
 * 000000014040E043: test    edx, 200h
 * 000000014040E049: jz      short loc_14040E050
 * 000000014040E04B: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040E050: lfence
 * 000000014040E053: mov     byte ptr gs:856h, 0
 * 000000014040E05C: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014040E064: jnz     short loc_14040E0B5
 * 000000014040E066: mov     ecx, 0C0000102h
 * 000000014040E06B: rdmsr
 * 000000014040E06D: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 000000014040E070: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 000000014040E073: test    byte ptr [r10+3], 80h
 * 000000014040E078: jz      short loc_14040E0B5
 * 000000014040E07A: shl     rdx, 20h
 * 000000014040E07E: or      rax, rdx
 * 000000014040E081: cmp     rax, cs:MmUserProbeAddress
 * 000000014040E088: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040E090: cmp     [r10+0F0h], rax
 * 000000014040E097: jz      short loc_14040E0B5
 * 000000014040E099: mov     rdx, [r10+1F0h]
 * 000000014040E0A0: bts     dword ptr [r10+74h], 8
 * 000000014040E0A6: dec     word ptr [r10+1E6h]
 * 000000014040E0AE: mov     [rdx+80h], rax
 * 000000014040E0B5: test    byte ptr [r10+3], 3
 * 000000014040E0BA: mov     [rbp+0D8h+var_58], 0
 * 000000014040E0C3: jz      short loc_14040E0CA
 * 000000014040E0C5: call    KiSaveDebugRegisterState
 * 000000014040E0CA: cld
 * 000000014040E0CB: stmxcsr [rbp+0D8h+var_12C]
 * 000000014040E0CF: ldmxcsr dword ptr gs:180h
 * 000000014040E0D8: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040E0DC: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014040E0E0: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040E0E4: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014040E0E8: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040E0EC: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014040E0F0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040E0F7: jz      short loc_14040E105
 * 000000014040E0F9: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040E100: jz      short loc_14040E105
 * 000000014040E102: stac
 * 000000014040E105: mov     eax, [rbp+0E0h]
 * 000000014040E10B: mov     rcx, cr2
 * 000000014040E10E: test    [rbp+0D8h+arg_10], 200h
 * 000000014040E118: jz      short loc_14040E11B
 * 000000014040E11A: sti
 * 000000014040E11B: mov     r9, gs:188h
 * 000000014040E124: bt      dword ptr [r9+74h], 8
 * 000000014040E12A: jnb     short loc_14040E13A
 * 000000014040E12C: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040E133: jz      short loc_14040E13A
 * 000000014040E135: call    KiUmsTrapEntry
 * 000000014040E13A: mov     [rbp+0D8h+var_88], rcx
 * 000000014040E13E: bt      [rbp+0D8h+arg_10], 9
 * 000000014040E146: jnb     loc_14040E278
 * 000000014040E14C: lea     r9, [rbp+0D8h+var_158]
 * 000000014040E150: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 000000014040E157: and     r8b, 1
 * 000000014040E15B: mov     rdx, rcx; BugCheckParameter1
 * 000000014040E15E: mov     ecx, eax; BugCheckParameter2
 * 000000014040E160: shr     eax, 1
 * 000000014040E162: and     eax, 9
 * 000000014040E165: mov     [rbp+0D8h+var_12E], al
 * 000000014040E168: call    MmAccessFault
 * 000000014040E16D: test    eax, eax
 * 000000014040E16F: jl      short loc_14040E1A7
 * 000000014040E171: cmp     cs:PsWatchEnabled, 0
 * 000000014040E178: jz      short loc_14040E18C
 * 000000014040E17A: mov     r8, [rbp+0D8h+var_88]
 * 000000014040E17E: mov     rdx, [rbp+0D8h+arg_0]
 * 000000014040E185: mov     ecx, eax
 * 000000014040E187: call    PsWatchWorkingSet
 * 000000014040E18C: cmp     cs:KdpOweBreakpoint, 0
 * 000000014040E193: jz      loc_14040E27E
 * 000000014040E199: mov     rcx, [rbp+0D8h+var_88]
 * 000000014040E19D: call    KdSetOwedBreakpoints
 * 000000014040E1A2: jmp     loc_14040E27E
 * 000000014040E1A7: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040E1AE: jz      short loc_14040E202
 * 000000014040E1B0: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014040E1B8: jnz     short loc_14040E1F8
 * 000000014040E1BA: mov     r9, gs:188h
 * 000000014040E1C3: test    byte ptr [r9+3], 4
 * 000000014040E1C8: jz      short loc_14040E1D3
 * 000000014040E1CA: mov     r8, [r9+5F0h]
 * 000000014040E1D1: jmp     short loc_14040E1DC
 * 000000014040E1D3: mov     r8, gs:30h
 * 000000014040E1DC: cmp     r8, [rbp+0D8h+var_F0]
 * 000000014040E1E0: jz      short loc_14040E202
 * 000000014040E1E2: mov     ecx, 0C0000102h
 * 000000014040E1E7: mov     eax, r8d
 * 000000014040E1EA: shr     r8, 20h
 * 000000014040E1EE: mov     edx, r8d
 * 000000014040E1F1: wrmsr
 * 000000014040E1F3: jmp     loc_14040E27E
 * 000000014040E1F8: mov     rcx, [rbp+0D8h+var_88]
 * 000000014040E1FC: shr     rcx, 20h
 * 000000014040E200: jnz     short loc_14040E27E
 * 000000014040E202: mov     ecx, eax
 * 000000014040E204: mov     edx, 2
 * 000000014040E209: cmp     ecx, 0D0000006h
 * 000000014040E20F: jz      short loc_14040E252
 * 000000014040E211: cmp     ecx, 0C0000005h
 * 000000014040E217: jz      short loc_14040E238
 * 000000014040E219: cmp     ecx, 80000001h
 * 000000014040E21F: jz      short loc_14040E23D
 * 000000014040E221: cmp     ecx, 0C00000FDh
 * 000000014040E227: jz      short loc_14040E23D
 * 000000014040E229: mov     ecx, 0C0000006h
 * 000000014040E22E: mov     edx, 3
 * 000000014040E233: mov     r11d, eax
 * 000000014040E236: jmp     short loc_14040E23D
 * 000000014040E238: mov     ecx, 10000004h
 * 000000014040E23D: mov     r10, [rbp+0D8h+var_88]
 * 000000014040E241: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014040E246: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040E24D: call    KiExceptionDispatch
 * 000000014040E252: mov     rax, cr8
 * 000000014040E256: mov     r10, [rbp+0D8h+arg_0]
 * 000000014040E25D: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014040E262: and     eax, 0FFh
 * 000000014040E267: mov     r8, rax
 * 000000014040E26A: mov     rdx, [rbp+0D8h+var_88]
 * 000000014040E26E: mov     ecx, 0Ah
 * 000000014040E273: call    KiBugCheckDispatch
 * 000000014040E278: xor     eax, eax
 * 000000014040E27A: mov     al, 0FFh
 * 000000014040E27C: jmp     short loc_14040E256
 * 000000014040E27E: mov     rax, cr8
 * 000000014040E282: or      eax, eax
 * 000000014040E284: mov     [rbp+0D8h+var_138], eax
 * 000000014040E287: jnz     short loc_14040E292
 * 000000014040E289: mov     ecx, 1
 * 000000014040E28E: mov     cr8, rcx
 * 000000014040E292: lea     rcx, [rbp+0D8h+var_158]
 * 000000014040E296: call    KiCheckForSListAddress
 * 000000014040E29B: mov     ecx, [rbp+0D8h+var_138]
 * 000000014040E29E: or      ecx, ecx
 * 000000014040E2A0: jnz     short loc_14040E2A6
 * 000000014040E2A2: mov     cr8, rcx
 * 000000014040E2A6: cli
 * 000000014040E2A7: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040E2AE: jz      loc_14040E561
 * 000000014040E2B4: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040E2BB: jz      short loc_14040E2C0
 * 000000014040E2BD: stac
 * 000000014040E2C0: mov     rcx, gs:188h
 * 000000014040E2C9: test    byte ptr [rcx+0C2h], 3
 * 000000014040E2D0: jz      short loc_14040E2ED
 * 000000014040E2D2: mov     ecx, 1
 * 000000014040E2D7: mov     cr8, rcx
 * 000000014040E2DB: sti
 * 000000014040E2DC: call    KiInitiateUserApc
 * 000000014040E2E1: cli
 * 000000014040E2E2: mov     ecx, 0
 * 000000014040E2E7: mov     cr8, rcx
 * 000000014040E2EB: jmp     short loc_14040E2C0
 * 000000014040E2ED: test    byte ptr gs:86Ch, 2
 * 000000014040E2F6: jz      short loc_14040E2FF
 * 000000014040E2F8: xor     ecx, ecx
 * 000000014040E2FA: call    KiUpdateStibpPairing
 * 000000014040E2FF: mov     rcx, gs:188h
 * 000000014040E308: test    dword ptr [rcx], 8000000h
 * 000000014040E30E: jz      short loc_14040E315
 * 000000014040E310: call    KiRestoreSetContextState
 * 000000014040E315: mov     rcx, gs:188h
 * 000000014040E31E: test    dword ptr [rcx], 40010000h
 * 000000014040E324: jz      short loc_14040E34B
 * 000000014040E326: test    byte ptr [rcx+2], 1
 * 000000014040E32A: jz      short loc_14040E33A
 * 000000014040E32C: call    KiCopyCounters
 * 000000014040E331: mov     rcx, gs:188h
 * 000000014040E33A: test    byte ptr [rcx+3], 40h
 * 000000014040E33E: jz      short loc_14040E34B
 * 000000014040E340: lea     rsp, [rbp-80h]
 * 000000014040E344: mov     cl, 1
 * 000000014040E346: call    KiUmsExit
 * 000000014040E34B: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014040E34F: cmp     [rbp+0D8h+var_58], 0
 * 000000014040E357: jz      short loc_14040E35E
 * 000000014040E359: call    KiRestoreDebugRegisterState
 * 000000014040E35E: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014040E362: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014040E366: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014040E36A: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014040E36E: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014040E372: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014040E376: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040E37A: mov     r10, [rbp+0D8h+var_100]
 * 000000014040E37E: mov     r9, [rbp+0D8h+var_108]
 * 000000014040E382: mov     r8, [rbp+0D8h+var_110]
 * 000000014040E386: mov     byte ptr gs:856h, 0
 * 000000014040E38F: movzx   eax, word ptr gs:86Ah
 * 000000014040E398: cmp     gs:864h, ax
 * 000000014040E3A1: jz      short loc_14040E3B5
 * 000000014040E3A3: mov     gs:864h, ax
 * 000000014040E3AC: mov     ecx, 48h ; 'H'
 * 000000014040E3B1: xor     edx, edx
 * 000000014040E3B3: wrmsr
 * 000000014040E3B5: btr     word ptr gs:860h, 2
 * 000000014040E3C0: jnb     short loc_14040E3D0
 * 000000014040E3C2: mov     eax, 1
 * 000000014040E3C7: xor     edx, edx
 * 000000014040E3C9: mov     ecx, 49h ; 'I'
 * 000000014040E3CE: wrmsr
 * 000000014040E3D0: btr     word ptr gs:860h, 5
 * 000000014040E3DB: jnb     loc_14040E506
 * 000000014040E3E1: call    loc_14040E4F4
 * 000000014040E3E6: add     rsp, 8
 * 000000014040E3EA: call    loc_14040E4FD
 * 000000014040E3EF: add     rsp, 8
 * 000000014040E3F3: call    loc_14040E3E6
 * 000000014040E3F8: add     rsp, 8
 * 000000014040E3FC: call    loc_14040E3EF
 * 000000014040E401: add     rsp, 8
 * 000000014040E405: call    loc_14040E3F8
 * 000000014040E40A: add     rsp, 8
 * 000000014040E40E: call    loc_14040E401
 * 000000014040E413: add     rsp, 8
 * 000000014040E417: call    loc_14040E40A
 * 000000014040E41C: add     rsp, 8
 * 000000014040E420: call    loc_14040E413
 * 000000014040E425: add     rsp, 8
 * 000000014040E429: call    loc_14040E41C
 * 000000014040E42E: add     rsp, 8
 * 000000014040E432: call    loc_14040E425
 * 000000014040E437: add     rsp, 8
 * 000000014040E43B: call    loc_14040E42E
 * 000000014040E440: add     rsp, 8
 * 000000014040E444: call    loc_14040E437
 * 000000014040E449: add     rsp, 8
 * 000000014040E44D: call    loc_14040E440
 * 000000014040E452: add     rsp, 8
 * 000000014040E456: call    loc_14040E449
 * 000000014040E45B: add     rsp, 8
 * 000000014040E45F: call    loc_14040E452
 * 000000014040E464: add     rsp, 8
 * 000000014040E468: call    loc_14040E45B
 * 000000014040E46D: add     rsp, 8
 * 000000014040E471: call    loc_14040E464
 * 000000014040E476: add     rsp, 8
 * 000000014040E47A: call    loc_14040E46D
 * 000000014040E47F: add     rsp, 8
 * 000000014040E483: call    loc_14040E476
 * 000000014040E488: add     rsp, 8
 * 000000014040E48C: call    loc_14040E47F
 * 000000014040E491: add     rsp, 8
 * 000000014040E495: call    loc_14040E488
 * 000000014040E49A: add     rsp, 8
 * 000000014040E49E: call    loc_14040E491
 * 000000014040E4A3: add     rsp, 8
 * 000000014040E4A7: call    loc_14040E49A
 * 000000014040E4AC: add     rsp, 8
 * 000000014040E4B0: call    loc_14040E4A3
 * 000000014040E4B5: add     rsp, 8
 * 000000014040E4B9: call    loc_14040E4AC
 * 000000014040E4BE: add     rsp, 8
 * 000000014040E4C2: call    loc_14040E4B5
 * 000000014040E4C7: add     rsp, 8
 * 000000014040E4CB: call    loc_14040E4BE
 * 000000014040E4D0: add     rsp, 8
 * 000000014040E4D4: call    loc_14040E4C7
 * 000000014040E4D9: add     rsp, 8
 * 000000014040E4DD: call    loc_14040E4D0
 * 000000014040E4E2: add     rsp, 8
 * 000000014040E4E6: call    loc_14040E4D9
 * 000000014040E4EB: add     rsp, 8
 * 000000014040E4EF: call    loc_14040E4E2
 * 000000014040E4F4: add     rsp, 8
 * 000000014040E4F8: call    loc_14040E4EB
 * 000000014040E4FD: add     rsp, 8
 * 000000014040E501: mov     eax, 0DADAh
 * 000000014040E506: test    word ptr gs:860h, 80h
 * 000000014040E511: jz      short loc_14040E51F
 * 000000014040E513: xor     eax, eax
 * 000000014040E515: xor     edx, edx
 * 000000014040E517: mov     ecx, 1
 * 000000014040E51C: div     rcx
 * 000000014040E51F: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040E523: mov     rcx, [rbp+0D8h+var_120]
 * 000000014040E527: mov     rax, [rbp+0D8h+var_128]
 * 000000014040E52B: mov     rsp, rbp
 * 000000014040E52E: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014040E535: add     rsp, 0E8h
 * 000000014040E53C: test    cs:KiKvaShadow, 1
 * 000000014040E543: jz      short loc_14040E54A
 * 000000014040E545: jmp     KiKernelExit
 * 000000014040E54A: test    word ptr gs:860h, 100h
 * 000000014040E555: jz      short loc_14040E55C
 * 000000014040E557: verw    [rsp-10h+arg_20]
 * 000000014040E55C: swapgs
 * 000000014040E55F: iretq
 * 000000014040E561: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014040E565: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014040E569: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014040E56D: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014040E571: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014040E575: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014040E579: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014040E57D: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040E581: mov     r10, [rbp+0D8h+var_100]
 * 000000014040E585: mov     r9, [rbp+0D8h+var_108]
 * 000000014040E589: mov     r8, [rbp+0D8h+var_110]
 * 000000014040E58D: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040E591: mov     rcx, [rbp+0D8h+var_120]
 * 000000014040E595: mov     rax, [rbp+0D8h+var_128]
 * 000000014040E599: mov     rsp, rbp
 * 000000014040E59C: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014040E5A3: add     rsp, 0E8h
 * 000000014040E5AA: iretq
 */
