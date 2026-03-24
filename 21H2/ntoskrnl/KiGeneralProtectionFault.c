/*
 * XREFs of KiGeneralProtectionFault @ 0x14040D9C0
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140A147C0 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x14040D9C0 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x14040D9C0
 * Reason: Hex-Rays returned no pseudocode for 0x14040D9C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040D9C0: push    rbp
 * 000000014040D9C1: sub     rsp, 158h
 * 000000014040D9C8: lea     rbp, [rsp+80h]
 * 000000014040D9D0: mov     [rbp+0D8h+var_12D], 1
 * 000000014040D9D4: mov     [rbp+0D8h+var_128], rax
 * 000000014040D9D8: mov     [rbp+0D8h+var_120], rcx
 * 000000014040D9DC: mov     [rbp+0D8h+var_118], rdx
 * 000000014040D9E0: mov     [rbp+0D8h+var_110], r8
 * 000000014040D9E4: mov     [rbp+0D8h+var_108], r9
 * 000000014040D9E8: mov     [rbp+0D8h+var_100], r10
 * 000000014040D9EC: mov     [rbp+0D8h+var_F8], r11
 * 000000014040D9F0: test    [rbp+0D8h+arg_8], 1
 * 000000014040D9F7: jnz     short loc_14040DA28
 * 000000014040D9F9: lfence
 * 000000014040D9FC: test    word ptr gs:860h, 1
 * 000000014040DA07: jnz     short loc_14040DA11
 * 000000014040DA09: lfence
 * 000000014040DA0C: jmp     loc_14040DC7A
 * 000000014040DA11: movzx   eax, word ptr gs:864h
 * 000000014040DA1A: mov     ecx, 48h ; 'H'
 * 000000014040DA1F: xor     edx, edx
 * 000000014040DA21: wrmsr
 * 000000014040DA23: jmp     loc_14040DC7A
 * 000000014040DA28: test    cs:KiKvaShadow, 1
 * 000000014040DA2F: jnz     short loc_14040DA34
 * 000000014040DA31: swapgs
 * 000000014040DA34: lfence
 * 000000014040DA37: mov     r10, gs:188h
 * 000000014040DA40: mov     rcx, gs:188h
 * 000000014040DA49: mov     rcx, [rcx+220h]
 * 000000014040DA50: mov     rcx, [rcx+9E0h]
 * 000000014040DA57: mov     gs:858h, rcx
 * 000000014040DA60: mov     cx, gs:850h
 * 000000014040DA69: mov     gs:852h, cx
 * 000000014040DA72: mov     cx, gs:860h
 * 000000014040DA7B: mov     gs:854h, cx
 * 000000014040DA84: movzx   eax, word ptr gs:866h
 * 000000014040DA8D: cmp     gs:864h, ax
 * 000000014040DA96: jz      short loc_14040DAAA
 * 000000014040DA98: mov     gs:864h, ax
 * 000000014040DAA1: mov     ecx, 48h ; 'H'
 * 000000014040DAA6: xor     edx, edx
 * 000000014040DAA8: wrmsr
 * 000000014040DAAA: movzx   edx, word ptr gs:860h
 * 000000014040DAB3: test    edx, 8
 * 000000014040DAB9: jz      short loc_14040DAD2
 * 000000014040DABB: mov     eax, 1
 * 000000014040DAC0: xor     edx, edx
 * 000000014040DAC2: mov     ecx, 49h ; 'I'
 * 000000014040DAC7: wrmsr
 * 000000014040DAC9: movzx   edx, word ptr gs:860h
 * 000000014040DAD2: test    edx, 2
 * 000000014040DAD8: jz      loc_14040DC03
 * 000000014040DADE: call    loc_14040DBF1
 * 000000014040DAE3: add     rsp, 8
 * 000000014040DAE7: call    loc_14040DBFA
 * 000000014040DAEC: add     rsp, 8
 * 000000014040DAF0: call    loc_14040DAE3
 * 000000014040DAF5: add     rsp, 8
 * 000000014040DAF9: call    loc_14040DAEC
 * 000000014040DAFE: add     rsp, 8
 * 000000014040DB02: call    loc_14040DAF5
 * 000000014040DB07: add     rsp, 8
 * 000000014040DB0B: call    loc_14040DAFE
 * 000000014040DB10: add     rsp, 8
 * 000000014040DB14: call    loc_14040DB07
 * 000000014040DB19: add     rsp, 8
 * 000000014040DB1D: call    loc_14040DB10
 * 000000014040DB22: add     rsp, 8
 * 000000014040DB26: call    loc_14040DB19
 * 000000014040DB2B: add     rsp, 8
 * 000000014040DB2F: call    loc_14040DB22
 * 000000014040DB34: add     rsp, 8
 * 000000014040DB38: call    loc_14040DB2B
 * 000000014040DB3D: add     rsp, 8
 * 000000014040DB41: call    loc_14040DB34
 * 000000014040DB46: add     rsp, 8
 * 000000014040DB4A: call    loc_14040DB3D
 * 000000014040DB4F: add     rsp, 8
 * 000000014040DB53: call    loc_14040DB46
 * 000000014040DB58: add     rsp, 8
 * 000000014040DB5C: call    loc_14040DB4F
 * 000000014040DB61: add     rsp, 8
 * 000000014040DB65: call    loc_14040DB58
 * 000000014040DB6A: add     rsp, 8
 * 000000014040DB6E: call    loc_14040DB61
 * 000000014040DB73: add     rsp, 8
 * 000000014040DB77: call    loc_14040DB6A
 * 000000014040DB7C: add     rsp, 8
 * 000000014040DB80: call    loc_14040DB73
 * 000000014040DB85: add     rsp, 8
 * 000000014040DB89: call    loc_14040DB7C
 * 000000014040DB8E: add     rsp, 8
 * 000000014040DB92: call    loc_14040DB85
 * 000000014040DB97: add     rsp, 8
 * 000000014040DB9B: call    loc_14040DB8E
 * 000000014040DBA0: add     rsp, 8
 * 000000014040DBA4: call    loc_14040DB97
 * 000000014040DBA9: add     rsp, 8
 * 000000014040DBAD: call    loc_14040DBA0
 * 000000014040DBB2: add     rsp, 8
 * 000000014040DBB6: call    loc_14040DBA9
 * 000000014040DBBB: add     rsp, 8
 * 000000014040DBBF: call    loc_14040DBB2
 * 000000014040DBC4: add     rsp, 8
 * 000000014040DBC8: call    loc_14040DBBB
 * 000000014040DBCD: add     rsp, 8
 * 000000014040DBD1: call    loc_14040DBC4
 * 000000014040DBD6: add     rsp, 8
 * 000000014040DBDA: call    loc_14040DBCD
 * 000000014040DBDF: add     rsp, 8
 * 000000014040DBE3: call    loc_14040DBD6
 * 000000014040DBE8: add     rsp, 8
 * 000000014040DBEC: call    loc_14040DBDF
 * 000000014040DBF1: add     rsp, 8
 * 000000014040DBF5: call    loc_14040DBE8
 * 000000014040DBFA: add     rsp, 8
 * 000000014040DBFE: mov     eax, 0DADAh
 * 000000014040DC03: test    edx, 200h
 * 000000014040DC09: jz      short loc_14040DC10
 * 000000014040DC0B: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040DC10: lfence
 * 000000014040DC13: mov     byte ptr gs:856h, 0
 * 000000014040DC1C: test    byte ptr [r10+3], 80h
 * 000000014040DC21: jz      short loc_14040DC65
 * 000000014040DC23: mov     ecx, 0C0000102h
 * 000000014040DC28: rdmsr
 * 000000014040DC2A: shl     rdx, 20h
 * 000000014040DC2E: or      rax, rdx
 * 000000014040DC31: cmp     rax, cs:MmUserProbeAddress
 * 000000014040DC38: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040DC40: cmp     [r10+0F0h], rax
 * 000000014040DC47: jz      short loc_14040DC65
 * 000000014040DC49: mov     rdx, [r10+1F0h]
 * 000000014040DC50: bts     dword ptr [r10+74h], 8
 * 000000014040DC56: dec     word ptr [r10+1E6h]
 * 000000014040DC5E: mov     [rdx+80h], rax
 * 000000014040DC65: test    byte ptr [r10+3], 3
 * 000000014040DC6A: mov     [rbp+0D8h+var_58], 0
 * 000000014040DC73: jz      short loc_14040DC7A
 * 000000014040DC75: call    KiSaveDebugRegisterState
 * 000000014040DC7A: cld
 * 000000014040DC7B: stmxcsr [rbp+0D8h+var_12C]
 * 000000014040DC7F: ldmxcsr dword ptr gs:180h
 * 000000014040DC88: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040DC8C: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014040DC90: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040DC94: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014040DC98: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040DC9C: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014040DCA0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040DCA7: jz      short loc_14040DCB5
 * 000000014040DCA9: test    [rbp+0D8h+arg_8], 1
 * 000000014040DCB0: jz      short loc_14040DCB5
 * 000000014040DCB2: stac
 * 000000014040DCB5: mov     eax, [rbp+0E0h]
 * 000000014040DCBB: test    [rbp+0D8h+arg_10], 200h
 * 000000014040DCC5: jz      short loc_14040DCC8
 * 000000014040DCC7: sti
 * 000000014040DCC8: mov     ecx, 10000001h
 * 000000014040DCCD: mov     edx, 2
 * 000000014040DCD2: mov     r9d, [rbp+0E0h]
 * 000000014040DCD9: and     r9d, 0FFFFh
 * 000000014040DCE0: xor     r10, r10
 * 000000014040DCE3: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040DCEA: call    KiExceptionDispatch
 * 000000014040DCEF: nop
 * 000000014040DCF0: retn
 */
