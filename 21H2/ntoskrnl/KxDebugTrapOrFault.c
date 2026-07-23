/*
 * XREFs of KxDebugTrapOrFault @ 0x14040AB00
 * Callers:
 *     KiDebugTrapOrFault @ 0x14040AA40 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x14040AB00 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x14040AB00
 * Reason: Hex-Rays returned no pseudocode for 0x14040AB00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040AB00: sub     rsp, 8
 * 000000014040AB04: push    rbp
 * 000000014040AB05: sub     rsp, 158h
 * 000000014040AB0C: lea     rbp, [rsp+80h]
 * 000000014040AB14: mov     [rbp+0E8h+var_13D], 1
 * 000000014040AB18: mov     [rbp+0E8h+var_138], rax
 * 000000014040AB1C: mov     [rbp+0E8h+var_130], rcx
 * 000000014040AB20: mov     [rbp+0E8h+var_128], rdx
 * 000000014040AB24: mov     [rbp+0E8h+var_120], r8
 * 000000014040AB28: mov     [rbp+0E8h+var_118], r9
 * 000000014040AB2C: mov     [rbp+0E8h+var_110], r10
 * 000000014040AB30: mov     [rbp+0E8h+var_108], r11
 * 000000014040AB34: test    [rbp+0E8h+arg_0], 1
 * 000000014040AB3B: jnz     short loc_14040AB6C
 * 000000014040AB3D: lfence
 * 000000014040AB40: test    word ptr gs:860h, 1
 * 000000014040AB4B: jnz     short loc_14040AB55
 * 000000014040AB4D: lfence
 * 000000014040AB50: jmp     loc_14040ADBE
 * 000000014040AB55: movzx   eax, word ptr gs:864h
 * 000000014040AB5E: mov     ecx, 48h ; 'H'
 * 000000014040AB63: xor     edx, edx
 * 000000014040AB65: wrmsr
 * 000000014040AB67: jmp     loc_14040ADBE
 * 000000014040AB6C: test    cs:KiKvaShadow, 1
 * 000000014040AB73: jnz     short loc_14040AB78
 * 000000014040AB75: swapgs
 * 000000014040AB78: lfence
 * 000000014040AB7B: mov     r10, gs:188h
 * 000000014040AB84: mov     rcx, gs:188h
 * 000000014040AB8D: mov     rcx, [rcx+220h]
 * 000000014040AB94: mov     rcx, [rcx+9E0h]
 * 000000014040AB9B: mov     gs:858h, rcx
 * 000000014040ABA4: mov     cx, gs:850h
 * 000000014040ABAD: mov     gs:852h, cx
 * 000000014040ABB6: mov     cx, gs:860h
 * 000000014040ABBF: mov     gs:854h, cx
 * 000000014040ABC8: movzx   eax, word ptr gs:866h
 * 000000014040ABD1: cmp     gs:864h, ax
 * 000000014040ABDA: jz      short loc_14040ABEE
 * 000000014040ABDC: mov     gs:864h, ax
 * 000000014040ABE5: mov     ecx, 48h ; 'H'
 * 000000014040ABEA: xor     edx, edx
 * 000000014040ABEC: wrmsr
 * 000000014040ABEE: movzx   edx, word ptr gs:860h
 * 000000014040ABF7: test    edx, 8
 * 000000014040ABFD: jz      short loc_14040AC16
 * 000000014040ABFF: mov     eax, 1
 * 000000014040AC04: xor     edx, edx
 * 000000014040AC06: mov     ecx, 49h ; 'I'
 * 000000014040AC0B: wrmsr
 * 000000014040AC0D: movzx   edx, word ptr gs:860h
 * 000000014040AC16: test    edx, 2
 * 000000014040AC1C: jz      loc_14040AD47
 * 000000014040AC22: call    loc_14040AD35
 * 000000014040AC27: add     rsp, 8
 * 000000014040AC2B: call    loc_14040AD3E
 * 000000014040AC30: add     rsp, 8
 * 000000014040AC34: call    loc_14040AC27
 * 000000014040AC39: add     rsp, 8
 * 000000014040AC3D: call    loc_14040AC30
 * 000000014040AC42: add     rsp, 8
 * 000000014040AC46: call    loc_14040AC39
 * 000000014040AC4B: add     rsp, 8
 * 000000014040AC4F: call    loc_14040AC42
 * 000000014040AC54: add     rsp, 8
 * 000000014040AC58: call    loc_14040AC4B
 * 000000014040AC5D: add     rsp, 8
 * 000000014040AC61: call    loc_14040AC54
 * 000000014040AC66: add     rsp, 8
 * 000000014040AC6A: call    loc_14040AC5D
 * 000000014040AC6F: add     rsp, 8
 * 000000014040AC73: call    loc_14040AC66
 * 000000014040AC78: add     rsp, 8
 * 000000014040AC7C: call    loc_14040AC6F
 * 000000014040AC81: add     rsp, 8
 * 000000014040AC85: call    loc_14040AC78
 * 000000014040AC8A: add     rsp, 8
 * 000000014040AC8E: call    loc_14040AC81
 * 000000014040AC93: add     rsp, 8
 * 000000014040AC97: call    loc_14040AC8A
 * 000000014040AC9C: add     rsp, 8
 * 000000014040ACA0: call    loc_14040AC93
 * 000000014040ACA5: add     rsp, 8
 * 000000014040ACA9: call    loc_14040AC9C
 * 000000014040ACAE: add     rsp, 8
 * 000000014040ACB2: call    loc_14040ACA5
 * 000000014040ACB7: add     rsp, 8
 * 000000014040ACBB: call    loc_14040ACAE
 * 000000014040ACC0: add     rsp, 8
 * 000000014040ACC4: call    loc_14040ACB7
 * 000000014040ACC9: add     rsp, 8
 * 000000014040ACCD: call    loc_14040ACC0
 * 000000014040ACD2: add     rsp, 8
 * 000000014040ACD6: call    loc_14040ACC9
 * 000000014040ACDB: add     rsp, 8
 * 000000014040ACDF: call    loc_14040ACD2
 * 000000014040ACE4: add     rsp, 8
 * 000000014040ACE8: call    loc_14040ACDB
 * 000000014040ACED: add     rsp, 8
 * 000000014040ACF1: call    loc_14040ACE4
 * 000000014040ACF6: add     rsp, 8
 * 000000014040ACFA: call    loc_14040ACED
 * 000000014040ACFF: add     rsp, 8
 * 000000014040AD03: call    loc_14040ACF6
 * 000000014040AD08: add     rsp, 8
 * 000000014040AD0C: call    loc_14040ACFF
 * 000000014040AD11: add     rsp, 8
 * 000000014040AD15: call    loc_14040AD08
 * 000000014040AD1A: add     rsp, 8
 * 000000014040AD1E: call    loc_14040AD11
 * 000000014040AD23: add     rsp, 8
 * 000000014040AD27: call    loc_14040AD1A
 * 000000014040AD2C: add     rsp, 8
 * 000000014040AD30: call    loc_14040AD23
 * 000000014040AD35: add     rsp, 8
 * 000000014040AD39: call    loc_14040AD2C
 * 000000014040AD3E: add     rsp, 8
 * 000000014040AD42: mov     eax, 0DADAh
 * 000000014040AD47: test    edx, 200h
 * 000000014040AD4D: jz      short loc_14040AD54
 * 000000014040AD4F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040AD54: lfence
 * 000000014040AD57: mov     byte ptr gs:856h, 0
 * 000000014040AD60: test    byte ptr [r10+3], 80h
 * 000000014040AD65: jz      short loc_14040ADA9
 * 000000014040AD67: mov     ecx, 0C0000102h
 * 000000014040AD6C: rdmsr
 * 000000014040AD6E: shl     rdx, 20h
 * 000000014040AD72: or      rax, rdx
 * 000000014040AD75: cmp     rax, cs:MmUserProbeAddress
 * 000000014040AD7C: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040AD84: cmp     [r10+0F0h], rax
 * 000000014040AD8B: jz      short loc_14040ADA9
 * 000000014040AD8D: mov     rdx, [r10+1F0h]
 * 000000014040AD94: bts     dword ptr [r10+74h], 8
 * 000000014040AD9A: dec     word ptr [r10+1E6h]
 * 000000014040ADA2: mov     [rdx+80h], rax
 * 000000014040ADA9: test    byte ptr [r10+3], 3
 * 000000014040ADAE: mov     [rbp+0E8h+var_68], 0
 * 000000014040ADB7: jz      short loc_14040ADBE
 * 000000014040ADB9: call    KiSaveDebugRegisterState
 * 000000014040ADBE: cld
 * 000000014040ADBF: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040ADC3: ldmxcsr dword ptr gs:180h
 * 000000014040ADCC: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040ADD0: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040ADD4: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040ADD8: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040ADDC: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040ADE0: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040ADE4: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040ADEB: jz      short loc_14040ADF9
 * 000000014040ADED: test    [rbp+0E8h+arg_0], 1
 * 000000014040ADF4: jz      short loc_14040ADF9
 * 000000014040ADF6: stac
 * 000000014040ADF9: test    [rbp+0E8h+arg_8], 200h
 * 000000014040AE03: jz      short loc_14040AE06
 * 000000014040AE05: sti
 * 000000014040AE06: test    cs:KiCpuTracingFlags, 2
 * 000000014040AE10: jz      short loc_14040AE25
 * 000000014040AE12: mov     ecx, 1D9h
 * 000000014040AE17: rdmsr
 * 000000014040AE19: or      eax, 1
 * 000000014040AE1C: wrmsr
 * 000000014040AE1E: xor     edx, edx
 * 000000014040AE20: jmp     loc_14040AEF4
 * 000000014040AE25: xor     edx, edx
 * 000000014040AE27: test    [rbp+0E8h+arg_8], 100h
 * 000000014040AE31: jz      loc_14040AEF4
 * 000000014040AE37: test    byte ptr gs:8722h, 2
 * 000000014040AE40: jz      loc_14040AEF4
 * 000000014040AE46: test    [rbp+0E8h+arg_0], 1
 * 000000014040AE4D: jnz     short loc_14040AEA6
 * 000000014040AE4F: mov     rax, dr7
 * 000000014040AE52: test    ax, 200h
 * 000000014040AE56: jz      loc_14040AEF4
 * 000000014040AE5C: test    ax, 100h
 * 000000014040AE60: jz      loc_14040AEF4
 * 000000014040AE66: mov     r8d, cs:KiLastBranchTOSMSR
 * 000000014040AE6D: or      r8d, r8d
 * 000000014040AE70: jz      short loc_14040AE7A
 * 000000014040AE72: mov     ecx, r8d
 * 000000014040AE75: rdmsr
 * 000000014040AE77: mov     r8d, eax
 * 000000014040AE7A: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 000000014040AE80: add     ecx, r8d
 * 000000014040AE83: rdmsr
 * 000000014040AE85: mov     r9d, eax
 * 000000014040AE88: shl     rdx, 20h
 * 000000014040AE8C: mov     ecx, cs:KiLastBranchToBaseMSR
 * 000000014040AE92: or      r9, rdx
 * 000000014040AE95: add     ecx, r8d
 * 000000014040AE98: rdmsr
 * 000000014040AE9A: mov     r10d, eax
 * 000000014040AE9D: shl     rdx, 20h
 * 000000014040AEA1: or      r10, rdx
 * 000000014040AEA4: jmp     short loc_14040AEEF
 * 000000014040AEA6: test    [rbp+0E8h+var_68], 200h
 * 000000014040AEAF: jz      short loc_14040AEF4
 * 000000014040AEB1: test    [rbp+0E8h+var_68], 100h
 * 000000014040AEBA: jz      short loc_14040AEF4
 * 000000014040AEBC: and     [rbp+0E8h+var_40], 0
 * 000000014040AEC4: and     [rbp+0E8h+var_48], 0
 * 000000014040AECC: mov     rcx, cs:MmUserProbeAddress
 * 000000014040AED3: mov     r9, [rbp+0E8h+var_50]
 * 000000014040AEDA: cmp     r9, rcx
 * 000000014040AEDD: cmovnb  r9, rcx
 * 000000014040AEE1: mov     r10, [rbp+0E8h+var_58]
 * 000000014040AEE8: cmp     r10, rcx
 * 000000014040AEEB: cmovnb  r10, rcx
 * 000000014040AEEF: mov     edx, 2
 * 000000014040AEF4: mov     ecx, 80000004h
 * 000000014040AEF9: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 000000014040AF03: mov     r8, [rbp+0E8h]
 * 000000014040AF0A: call    KiExceptionDispatch
 * 000000014040AF0F: nop
 * 000000014040AF10: retn
 */
