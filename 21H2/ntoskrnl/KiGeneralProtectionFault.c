/*
 * XREFs of KiGeneralProtectionFault @ 0x14040DAC0
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140A157C0 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x14040DAC0 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x14040DAC0
 * Reason: Hex-Rays returned no pseudocode for 0x14040DAC0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040DAC0: push    rbp
 * 000000014040DAC1: sub     rsp, 158h
 * 000000014040DAC8: lea     rbp, [rsp+80h]
 * 000000014040DAD0: mov     [rbp+0D8h+var_12D], 1
 * 000000014040DAD4: mov     [rbp+0D8h+var_128], rax
 * 000000014040DAD8: mov     [rbp+0D8h+var_120], rcx
 * 000000014040DADC: mov     [rbp+0D8h+var_118], rdx
 * 000000014040DAE0: mov     [rbp+0D8h+var_110], r8
 * 000000014040DAE4: mov     [rbp+0D8h+var_108], r9
 * 000000014040DAE8: mov     [rbp+0D8h+var_100], r10
 * 000000014040DAEC: mov     [rbp+0D8h+var_F8], r11
 * 000000014040DAF0: test    [rbp+0D8h+arg_8], 1
 * 000000014040DAF7: jnz     short loc_14040DB28
 * 000000014040DAF9: lfence
 * 000000014040DAFC: test    word ptr gs:860h, 1
 * 000000014040DB07: jnz     short loc_14040DB11
 * 000000014040DB09: lfence
 * 000000014040DB0C: jmp     loc_14040DD7A
 * 000000014040DB11: movzx   eax, word ptr gs:864h
 * 000000014040DB1A: mov     ecx, 48h ; 'H'
 * 000000014040DB1F: xor     edx, edx
 * 000000014040DB21: wrmsr
 * 000000014040DB23: jmp     loc_14040DD7A
 * 000000014040DB28: test    cs:KiKvaShadow, 1
 * 000000014040DB2F: jnz     short loc_14040DB34
 * 000000014040DB31: swapgs
 * 000000014040DB34: lfence
 * 000000014040DB37: mov     r10, gs:188h
 * 000000014040DB40: mov     rcx, gs:188h
 * 000000014040DB49: mov     rcx, [rcx+220h]
 * 000000014040DB50: mov     rcx, [rcx+9E0h]
 * 000000014040DB57: mov     gs:858h, rcx
 * 000000014040DB60: mov     cx, gs:850h
 * 000000014040DB69: mov     gs:852h, cx
 * 000000014040DB72: mov     cx, gs:860h
 * 000000014040DB7B: mov     gs:854h, cx
 * 000000014040DB84: movzx   eax, word ptr gs:866h
 * 000000014040DB8D: cmp     gs:864h, ax
 * 000000014040DB96: jz      short loc_14040DBAA
 * 000000014040DB98: mov     gs:864h, ax
 * 000000014040DBA1: mov     ecx, 48h ; 'H'
 * 000000014040DBA6: xor     edx, edx
 * 000000014040DBA8: wrmsr
 * 000000014040DBAA: movzx   edx, word ptr gs:860h
 * 000000014040DBB3: test    edx, 8
 * 000000014040DBB9: jz      short loc_14040DBD2
 * 000000014040DBBB: mov     eax, 1
 * 000000014040DBC0: xor     edx, edx
 * 000000014040DBC2: mov     ecx, 49h ; 'I'
 * 000000014040DBC7: wrmsr
 * 000000014040DBC9: movzx   edx, word ptr gs:860h
 * 000000014040DBD2: test    edx, 2
 * 000000014040DBD8: jz      loc_14040DD03
 * 000000014040DBDE: call    loc_14040DCF1
 * 000000014040DBE3: add     rsp, 8
 * 000000014040DBE7: call    loc_14040DCFA
 * 000000014040DBEC: add     rsp, 8
 * 000000014040DBF0: call    loc_14040DBE3
 * 000000014040DBF5: add     rsp, 8
 * 000000014040DBF9: call    loc_14040DBEC
 * 000000014040DBFE: add     rsp, 8
 * 000000014040DC02: call    loc_14040DBF5
 * 000000014040DC07: add     rsp, 8
 * 000000014040DC0B: call    loc_14040DBFE
 * 000000014040DC10: add     rsp, 8
 * 000000014040DC14: call    loc_14040DC07
 * 000000014040DC19: add     rsp, 8
 * 000000014040DC1D: call    loc_14040DC10
 * 000000014040DC22: add     rsp, 8
 * 000000014040DC26: call    loc_14040DC19
 * 000000014040DC2B: add     rsp, 8
 * 000000014040DC2F: call    loc_14040DC22
 * 000000014040DC34: add     rsp, 8
 * 000000014040DC38: call    loc_14040DC2B
 * 000000014040DC3D: add     rsp, 8
 * 000000014040DC41: call    loc_14040DC34
 * 000000014040DC46: add     rsp, 8
 * 000000014040DC4A: call    loc_14040DC3D
 * 000000014040DC4F: add     rsp, 8
 * 000000014040DC53: call    loc_14040DC46
 * 000000014040DC58: add     rsp, 8
 * 000000014040DC5C: call    loc_14040DC4F
 * 000000014040DC61: add     rsp, 8
 * 000000014040DC65: call    loc_14040DC58
 * 000000014040DC6A: add     rsp, 8
 * 000000014040DC6E: call    loc_14040DC61
 * 000000014040DC73: add     rsp, 8
 * 000000014040DC77: call    loc_14040DC6A
 * 000000014040DC7C: add     rsp, 8
 * 000000014040DC80: call    loc_14040DC73
 * 000000014040DC85: add     rsp, 8
 * 000000014040DC89: call    loc_14040DC7C
 * 000000014040DC8E: add     rsp, 8
 * 000000014040DC92: call    loc_14040DC85
 * 000000014040DC97: add     rsp, 8
 * 000000014040DC9B: call    loc_14040DC8E
 * 000000014040DCA0: add     rsp, 8
 * 000000014040DCA4: call    loc_14040DC97
 * 000000014040DCA9: add     rsp, 8
 * 000000014040DCAD: call    loc_14040DCA0
 * 000000014040DCB2: add     rsp, 8
 * 000000014040DCB6: call    loc_14040DCA9
 * 000000014040DCBB: add     rsp, 8
 * 000000014040DCBF: call    loc_14040DCB2
 * 000000014040DCC4: add     rsp, 8
 * 000000014040DCC8: call    loc_14040DCBB
 * 000000014040DCCD: add     rsp, 8
 * 000000014040DCD1: call    loc_14040DCC4
 * 000000014040DCD6: add     rsp, 8
 * 000000014040DCDA: call    loc_14040DCCD
 * 000000014040DCDF: add     rsp, 8
 * 000000014040DCE3: call    loc_14040DCD6
 * 000000014040DCE8: add     rsp, 8
 * 000000014040DCEC: call    loc_14040DCDF
 * 000000014040DCF1: add     rsp, 8
 * 000000014040DCF5: call    loc_14040DCE8
 * 000000014040DCFA: add     rsp, 8
 * 000000014040DCFE: mov     eax, 0DADAh
 * 000000014040DD03: test    edx, 200h
 * 000000014040DD09: jz      short loc_14040DD10
 * 000000014040DD0B: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040DD10: lfence
 * 000000014040DD13: mov     byte ptr gs:856h, 0
 * 000000014040DD1C: test    byte ptr [r10+3], 80h
 * 000000014040DD21: jz      short loc_14040DD65
 * 000000014040DD23: mov     ecx, 0C0000102h
 * 000000014040DD28: rdmsr
 * 000000014040DD2A: shl     rdx, 20h
 * 000000014040DD2E: or      rax, rdx
 * 000000014040DD31: cmp     rax, cs:MmUserProbeAddress
 * 000000014040DD38: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040DD40: cmp     [r10+0F0h], rax
 * 000000014040DD47: jz      short loc_14040DD65
 * 000000014040DD49: mov     rdx, [r10+1F0h]
 * 000000014040DD50: bts     dword ptr [r10+74h], 8
 * 000000014040DD56: dec     word ptr [r10+1E6h]
 * 000000014040DD5E: mov     [rdx+80h], rax
 * 000000014040DD65: test    byte ptr [r10+3], 3
 * 000000014040DD6A: mov     [rbp+0D8h+var_58], 0
 * 000000014040DD73: jz      short loc_14040DD7A
 * 000000014040DD75: call    KiSaveDebugRegisterState
 * 000000014040DD7A: cld
 * 000000014040DD7B: stmxcsr [rbp+0D8h+var_12C]
 * 000000014040DD7F: ldmxcsr dword ptr gs:180h
 * 000000014040DD88: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040DD8C: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014040DD90: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040DD94: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014040DD98: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040DD9C: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014040DDA0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040DDA7: jz      short loc_14040DDB5
 * 000000014040DDA9: test    [rbp+0D8h+arg_8], 1
 * 000000014040DDB0: jz      short loc_14040DDB5
 * 000000014040DDB2: stac
 * 000000014040DDB5: mov     eax, [rbp+0E0h]
 * 000000014040DDBB: test    [rbp+0D8h+arg_10], 200h
 * 000000014040DDC5: jz      short loc_14040DDC8
 * 000000014040DDC7: sti
 * 000000014040DDC8: mov     ecx, 10000001h
 * 000000014040DDCD: mov     edx, 2
 * 000000014040DDD2: mov     r9d, [rbp+0E0h]
 * 000000014040DDD9: and     r9d, 0FFFFh
 * 000000014040DDE0: xor     r10, r10
 * 000000014040DDE3: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040DDEA: call    KiExceptionDispatch
 * 000000014040DDEF: nop
 * 000000014040DDF0: retn
 */
