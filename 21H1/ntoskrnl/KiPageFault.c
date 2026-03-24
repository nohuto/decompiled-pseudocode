/*
 * XREFs of KiPageFault @ 0x140403C00
 * Callers:
 *     KiPageFaultShadow @ 0x140A11840 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     KiUpdateStibpPairing @ 0x1402DDF20 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1402EC460 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x1403F6310 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FA370 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x140403C00 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x140407D00 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140407D80 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x1404086C0 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140408B40 (KiUmsExit.c)
 *     KdSetOwedBreakpoints @ 0x14050C430 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x140516360 (KiCopyCounters.c)
 *     PsWatchWorkingSet @ 0x14057BAD0 (PsWatchWorkingSet.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x140403C00
 * Reason: Hex-Rays returned no pseudocode for 0x140403C00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140403C00: push    rbp
 * 0000000140403C01: sub     rsp, 158h
 * 0000000140403C08: lea     rbp, [rsp+80h]
 * 0000000140403C10: mov     [rbp+0D8h+var_12D], 1
 * 0000000140403C14: mov     [rbp+0D8h+var_128], rax
 * 0000000140403C18: mov     [rbp+0D8h+var_120], rcx
 * 0000000140403C1C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140403C20: mov     [rbp+0D8h+var_110], r8
 * 0000000140403C24: mov     [rbp+0D8h+var_108], r9
 * 0000000140403C28: mov     [rbp+0D8h+var_100], r10
 * 0000000140403C2C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140403C30: test    byte ptr [rbp+0D8h+arg_8], 1
 * 0000000140403C37: jnz     short loc_140403C66
 * 0000000140403C39: lfence
 * 0000000140403C3C: test    byte ptr gs:278h, 1
 * 0000000140403C45: jnz     short loc_140403C4F
 * 0000000140403C47: lfence
 * 0000000140403C4A: jmp     loc_140403EBB
 * 0000000140403C4F: movzx   eax, byte ptr gs:27Ah
 * 0000000140403C58: mov     ecx, 48h ; 'H'
 * 0000000140403C5D: xor     edx, edx
 * 0000000140403C5F: wrmsr
 * 0000000140403C61: jmp     loc_140403EBB
 * 0000000140403C66: test    cs:KiKvaShadow, 1
 * 0000000140403C6D: jnz     short loc_140403C72
 * 0000000140403C6F: swapgs
 * 0000000140403C72: lfence
 * 0000000140403C75: mov     r10, gs:188h
 * 0000000140403C7E: mov     rcx, gs:188h
 * 0000000140403C87: mov     rcx, [rcx+220h]
 * 0000000140403C8E: mov     rcx, [rcx+9E0h]
 * 0000000140403C95: mov     gs:270h, rcx
 * 0000000140403C9E: mov     cl, gs:850h
 * 0000000140403CA6: mov     gs:851h, cl
 * 0000000140403CAE: mov     cl, gs:278h
 * 0000000140403CB6: mov     gs:852h, cl
 * 0000000140403CBE: movzx   eax, byte ptr gs:27Bh
 * 0000000140403CC7: cmp     gs:27Ah, al
 * 0000000140403CCF: jz      short loc_140403CE2
 * 0000000140403CD1: mov     gs:27Ah, al
 * 0000000140403CD9: mov     ecx, 48h ; 'H'
 * 0000000140403CDE: xor     edx, edx
 * 0000000140403CE0: wrmsr
 * 0000000140403CE2: movzx   edx, byte ptr gs:278h
 * 0000000140403CEB: test    edx, 8
 * 0000000140403CF1: jz      short loc_140403D06
 * 0000000140403CF3: mov     eax, 1
 * 0000000140403CF8: xor     edx, edx
 * 0000000140403CFA: mov     ecx, 49h ; 'I'
 * 0000000140403CFF: wrmsr
 * 0000000140403D01: jmp     loc_140403E44
 * 0000000140403D06: test    edx, 2
 * 0000000140403D0C: jz      loc_140403E41
 * 0000000140403D12: test    byte ptr gs:279h, 4
 * 0000000140403D1B: jnz     loc_140403E41
 * 0000000140403D21: call    loc_140403E34
 * 0000000140403D26: add     rsp, 8
 * 0000000140403D2A: call    loc_140403E3D
 * 0000000140403D2F: add     rsp, 8
 * 0000000140403D33: call    loc_140403D26
 * 0000000140403D38: add     rsp, 8
 * 0000000140403D3C: call    loc_140403D2F
 * 0000000140403D41: add     rsp, 8
 * 0000000140403D45: call    loc_140403D38
 * 0000000140403D4A: add     rsp, 8
 * 0000000140403D4E: call    loc_140403D41
 * 0000000140403D53: add     rsp, 8
 * 0000000140403D57: call    loc_140403D4A
 * 0000000140403D5C: add     rsp, 8
 * 0000000140403D60: call    loc_140403D53
 * 0000000140403D65: add     rsp, 8
 * 0000000140403D69: call    loc_140403D5C
 * 0000000140403D6E: add     rsp, 8
 * 0000000140403D72: call    loc_140403D65
 * 0000000140403D77: add     rsp, 8
 * 0000000140403D7B: call    loc_140403D6E
 * 0000000140403D80: add     rsp, 8
 * 0000000140403D84: call    loc_140403D77
 * 0000000140403D89: add     rsp, 8
 * 0000000140403D8D: call    loc_140403D80
 * 0000000140403D92: add     rsp, 8
 * 0000000140403D96: call    loc_140403D89
 * 0000000140403D9B: add     rsp, 8
 * 0000000140403D9F: call    loc_140403D92
 * 0000000140403DA4: add     rsp, 8
 * 0000000140403DA8: call    loc_140403D9B
 * 0000000140403DAD: add     rsp, 8
 * 0000000140403DB1: call    loc_140403DA4
 * 0000000140403DB6: add     rsp, 8
 * 0000000140403DBA: call    loc_140403DAD
 * 0000000140403DBF: add     rsp, 8
 * 0000000140403DC3: call    loc_140403DB6
 * 0000000140403DC8: add     rsp, 8
 * 0000000140403DCC: call    loc_140403DBF
 * 0000000140403DD1: add     rsp, 8
 * 0000000140403DD5: call    loc_140403DC8
 * 0000000140403DDA: add     rsp, 8
 * 0000000140403DDE: call    loc_140403DD1
 * 0000000140403DE3: add     rsp, 8
 * 0000000140403DE7: call    loc_140403DDA
 * 0000000140403DEC: add     rsp, 8
 * 0000000140403DF0: call    loc_140403DE3
 * 0000000140403DF5: add     rsp, 8
 * 0000000140403DF9: call    loc_140403DEC
 * 0000000140403DFE: add     rsp, 8
 * 0000000140403E02: call    loc_140403DF5
 * 0000000140403E07: add     rsp, 8
 * 0000000140403E0B: call    loc_140403DFE
 * 0000000140403E10: add     rsp, 8
 * 0000000140403E14: call    loc_140403E07
 * 0000000140403E19: add     rsp, 8
 * 0000000140403E1D: call    loc_140403E10
 * 0000000140403E22: add     rsp, 8
 * 0000000140403E26: call    loc_140403E19
 * 0000000140403E2B: add     rsp, 8
 * 0000000140403E2F: call    loc_140403E22
 * 0000000140403E34: add     rsp, 8
 * 0000000140403E38: call    loc_140403E2B
 * 0000000140403E3D: add     rsp, 8
 * 0000000140403E41: lfence
 * 0000000140403E44: mov     byte ptr gs:853h, 0
 * 0000000140403E4D: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 0000000140403E55: jnz     short loc_140403EA6
 * 0000000140403E57: mov     ecx, 0C0000102h
 * 0000000140403E5C: rdmsr
 * 0000000140403E5E: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 0000000140403E61: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 0000000140403E64: test    byte ptr [r10+3], 80h
 * 0000000140403E69: jz      short loc_140403EA6
 * 0000000140403E6B: shl     rdx, 20h
 * 0000000140403E6F: or      rax, rdx
 * 0000000140403E72: cmp     rax, cs:MmUserProbeAddress
 * 0000000140403E79: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140403E81: cmp     [r10+0F0h], rax
 * 0000000140403E88: jz      short loc_140403EA6
 * 0000000140403E8A: mov     rdx, [r10+1F0h]
 * 0000000140403E91: bts     dword ptr [r10+74h], 8
 * 0000000140403E97: dec     word ptr [r10+1E6h]
 * 0000000140403E9F: mov     [rdx+80h], rax
 * 0000000140403EA6: test    byte ptr [r10+3], 3
 * 0000000140403EAB: mov     [rbp+0D8h+var_58], 0
 * 0000000140403EB4: jz      short loc_140403EBB
 * 0000000140403EB6: call    KiSaveDebugRegisterState
 * 0000000140403EBB: cld
 * 0000000140403EBC: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140403EC0: ldmxcsr dword ptr gs:180h
 * 0000000140403EC9: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140403ECD: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140403ED1: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140403ED5: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140403ED9: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140403EDD: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140403EE1: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140403EE8: jz      short loc_140403EF6
 * 0000000140403EEA: test    byte ptr [rbp+0D8h+arg_8], 1
 * 0000000140403EF1: jz      short loc_140403EF6
 * 0000000140403EF3: stac
 * 0000000140403EF6: mov     eax, [rbp+0E0h]
 * 0000000140403EFC: mov     rcx, cr2
 * 0000000140403EFF: test    [rbp+0D8h+arg_10], 200h
 * 0000000140403F09: jz      short loc_140403F0C
 * 0000000140403F0B: sti
 * 0000000140403F0C: mov     r9, gs:188h
 * 0000000140403F15: bt      dword ptr [r9+74h], 8
 * 0000000140403F1B: jnb     short loc_140403F2B
 * 0000000140403F1D: test    byte ptr [rbp+0D8h+arg_8], 1
 * 0000000140403F24: jz      short loc_140403F2B
 * 0000000140403F26: call    KiUmsTrapEntry
 * 0000000140403F2B: mov     [rbp+0D8h+var_88], rcx
 * 0000000140403F2F: bt      [rbp+0D8h+arg_10], 9
 * 0000000140403F37: jnb     loc_140404069
 * 0000000140403F3D: lea     r9, [rbp+0D8h+var_158]
 * 0000000140403F41: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 0000000140403F48: and     r8b, 1
 * 0000000140403F4C: mov     rdx, rcx; BugCheckParameter1
 * 0000000140403F4F: mov     ecx, eax; BugCheckParameter2
 * 0000000140403F51: shr     eax, 1
 * 0000000140403F53: and     eax, 9
 * 0000000140403F56: mov     [rbp+0D8h+var_12E], al
 * 0000000140403F59: call    MmAccessFault
 * 0000000140403F5E: test    eax, eax
 * 0000000140403F60: jl      short loc_140403F98
 * 0000000140403F62: cmp     cs:PsWatchEnabled, 0
 * 0000000140403F69: jz      short loc_140403F7D
 * 0000000140403F6B: mov     r8, [rbp+0D8h+var_88]
 * 0000000140403F6F: mov     rdx, [rbp+0D8h+arg_0]
 * 0000000140403F76: mov     ecx, eax
 * 0000000140403F78: call    PsWatchWorkingSet
 * 0000000140403F7D: cmp     cs:KdpOweBreakpoint, 0
 * 0000000140403F84: jz      loc_14040406F
 * 0000000140403F8A: mov     rcx, [rbp+0D8h+var_88]
 * 0000000140403F8E: call    KdSetOwedBreakpoints
 * 0000000140403F93: jmp     loc_14040406F
 * 0000000140403F98: test    byte ptr [rbp+0D8h+arg_8], 1
 * 0000000140403F9F: jz      short loc_140403FF3
 * 0000000140403FA1: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 0000000140403FA9: jnz     short loc_140403FE9
 * 0000000140403FAB: mov     r9, gs:188h
 * 0000000140403FB4: test    byte ptr [r9+3], 4
 * 0000000140403FB9: jz      short loc_140403FC4
 * 0000000140403FBB: mov     r8, [r9+5F0h]
 * 0000000140403FC2: jmp     short loc_140403FCD
 * 0000000140403FC4: mov     r8, gs:30h
 * 0000000140403FCD: cmp     r8, [rbp+0D8h+var_F0]
 * 0000000140403FD1: jz      short loc_140403FF3
 * 0000000140403FD3: mov     ecx, 0C0000102h
 * 0000000140403FD8: mov     eax, r8d
 * 0000000140403FDB: shr     r8, 20h
 * 0000000140403FDF: mov     edx, r8d
 * 0000000140403FE2: wrmsr
 * 0000000140403FE4: jmp     loc_14040406F
 * 0000000140403FE9: mov     rcx, [rbp+0D8h+var_88]
 * 0000000140403FED: shr     rcx, 20h
 * 0000000140403FF1: jnz     short loc_14040406F
 * 0000000140403FF3: mov     ecx, eax
 * 0000000140403FF5: mov     edx, 2
 * 0000000140403FFA: cmp     ecx, 0D0000006h
 * 0000000140404000: jz      short loc_140404043
 * 0000000140404002: cmp     ecx, 0C0000005h
 * 0000000140404008: jz      short loc_140404029
 * 000000014040400A: cmp     ecx, 80000001h
 * 0000000140404010: jz      short loc_14040402E
 * 0000000140404012: cmp     ecx, 0C00000FDh
 * 0000000140404018: jz      short loc_14040402E
 * 000000014040401A: mov     ecx, 0C0000006h
 * 000000014040401F: mov     edx, 3
 * 0000000140404024: mov     r11d, eax
 * 0000000140404027: jmp     short loc_14040402E
 * 0000000140404029: mov     ecx, 10000004h
 * 000000014040402E: mov     r10, [rbp+0D8h+var_88]
 * 0000000140404032: movzx   r9, [rbp+0D8h+var_12E]
 * 0000000140404037: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040403E: call    KiExceptionDispatch
 * 0000000140404043: mov     rax, cr8
 * 0000000140404047: mov     r10, [rbp+0D8h+arg_0]
 * 000000014040404E: movzx   r9, [rbp+0D8h+var_12E]
 * 0000000140404053: and     eax, 0FFh
 * 0000000140404058: mov     r8, rax
 * 000000014040405B: mov     rdx, [rbp+0D8h+var_88]
 * 000000014040405F: mov     ecx, 0Ah
 * 0000000140404064: call    KiBugCheckDispatch
 * 0000000140404069: xor     eax, eax
 * 000000014040406B: mov     al, 0FFh
 * 000000014040406D: jmp     short loc_140404047
 * 000000014040406F: mov     rax, cr8
 * 0000000140404073: or      eax, eax
 * 0000000140404075: mov     [rbp+0D8h+var_138], eax
 * 0000000140404078: jnz     short loc_140404083
 * 000000014040407A: mov     ecx, 1
 * 000000014040407F: mov     cr8, rcx
 * 0000000140404083: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140404087: call    KiCheckForSListAddress
 * 000000014040408C: mov     ecx, [rbp+0D8h+var_138]
 * 000000014040408F: or      ecx, ecx
 * 0000000140404091: jnz     short loc_140404097
 * 0000000140404093: mov     cr8, rcx
 * 0000000140404097: cli
 * 0000000140404098: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040409F: jz      loc_1404041EF
 * 00000001404040A5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404040AC: jz      short loc_1404040B1
 * 00000001404040AE: stac
 * 00000001404040B1: mov     rcx, gs:188h
 * 00000001404040BA: test    byte ptr [rcx+0C2h], 3
 * 00000001404040C1: jz      short loc_1404040DE
 * 00000001404040C3: mov     ecx, 1
 * 00000001404040C8: mov     cr8, rcx
 * 00000001404040CC: sti
 * 00000001404040CD: call    KiInitiateUserApc
 * 00000001404040D2: cli
 * 00000001404040D3: mov     ecx, 0
 * 00000001404040D8: mov     cr8, rcx
 * 00000001404040DC: jmp     short loc_1404040B1
 * 00000001404040DE: test    byte ptr gs:27Eh, 2
 * 00000001404040E7: jz      short loc_1404040F0
 * 00000001404040E9: xor     ecx, ecx
 * 00000001404040EB: call    KiUpdateStibpPairing
 * 00000001404040F0: mov     rcx, gs:188h
 * 00000001404040F9: test    dword ptr [rcx], 8000000h
 * 00000001404040FF: jz      short loc_140404106
 * 0000000140404101: call    KiRestoreSetContextState
 * 0000000140404106: mov     rcx, gs:188h
 * 000000014040410F: test    dword ptr [rcx], 40010000h
 * 0000000140404115: jz      short loc_14040413C
 * 0000000140404117: test    byte ptr [rcx+2], 1
 * 000000014040411B: jz      short loc_14040412B
 * 000000014040411D: call    KiCopyCounters
 * 0000000140404122: mov     rcx, gs:188h
 * 000000014040412B: test    byte ptr [rcx+3], 40h
 * 000000014040412F: jz      short loc_14040413C
 * 0000000140404131: lea     rsp, [rbp-80h]
 * 0000000140404135: mov     cl, 1
 * 0000000140404137: call    KiUmsExit
 * 000000014040413C: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140404140: cmp     [rbp+0D8h+var_58], 0
 * 0000000140404148: jz      short loc_14040414F
 * 000000014040414A: call    KiRestoreDebugRegisterState
 * 000000014040414F: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140404153: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140404157: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014040415B: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014040415F: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140404163: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140404167: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040416B: mov     r10, [rbp+0D8h+var_100]
 * 000000014040416F: mov     r9, [rbp+0D8h+var_108]
 * 0000000140404173: mov     r8, [rbp+0D8h+var_110]
 * 0000000140404177: mov     byte ptr gs:853h, 0
 * 0000000140404180: movzx   eax, byte ptr gs:27Dh
 * 0000000140404189: cmp     gs:27Ah, al
 * 0000000140404191: jz      short loc_1404041A4
 * 0000000140404193: mov     gs:27Ah, al
 * 000000014040419B: mov     ecx, 48h ; 'H'
 * 00000001404041A0: xor     edx, edx
 * 00000001404041A2: wrmsr
 * 00000001404041A4: btr     word ptr gs:278h, 2
 * 00000001404041AF: jnb     short loc_1404041BF
 * 00000001404041B1: mov     eax, 1
 * 00000001404041B6: xor     edx, edx
 * 00000001404041B8: mov     ecx, 49h ; 'I'
 * 00000001404041BD: wrmsr
 * 00000001404041BF: mov     rdx, [rbp+0D8h+var_118]
 * 00000001404041C3: mov     rcx, [rbp+0D8h+var_120]
 * 00000001404041C7: mov     rax, [rbp+0D8h+var_128]
 * 00000001404041CB: mov     rsp, rbp
 * 00000001404041CE: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001404041D5: add     rsp, 0E8h
 * 00000001404041DC: test    cs:KiKvaShadow, 1
 * 00000001404041E3: jz      short loc_1404041EA
 * 00000001404041E5: jmp     KiKernelExit
 * 00000001404041EA: swapgs
 * 00000001404041ED: iretq
 * 00000001404041EF: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001404041F3: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001404041F7: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001404041FB: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001404041FF: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140404203: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140404207: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014040420B: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040420F: mov     r10, [rbp+0D8h+var_100]
 * 0000000140404213: mov     r9, [rbp+0D8h+var_108]
 * 0000000140404217: mov     r8, [rbp+0D8h+var_110]
 * 000000014040421B: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040421F: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140404223: mov     rax, [rbp+0D8h+var_128]
 * 0000000140404227: mov     rsp, rbp
 * 000000014040422A: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140404231: add     rsp, 0E8h
 * 0000000140404238: iretq
 */
