/*
 * XREFs of KxDebugTrapOrFault @ 0x14040AA00
 * Callers:
 *     KiDebugTrapOrFault @ 0x14040A940 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x14040AA00 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x14040AA00
 * Reason: Hex-Rays returned no pseudocode for 0x14040AA00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040AA00: sub     rsp, 8
 * 000000014040AA04: push    rbp
 * 000000014040AA05: sub     rsp, 158h
 * 000000014040AA0C: lea     rbp, [rsp+80h]
 * 000000014040AA14: mov     [rbp+0E8h+var_13D], 1
 * 000000014040AA18: mov     [rbp+0E8h+var_138], rax
 * 000000014040AA1C: mov     [rbp+0E8h+var_130], rcx
 * 000000014040AA20: mov     [rbp+0E8h+var_128], rdx
 * 000000014040AA24: mov     [rbp+0E8h+var_120], r8
 * 000000014040AA28: mov     [rbp+0E8h+var_118], r9
 * 000000014040AA2C: mov     [rbp+0E8h+var_110], r10
 * 000000014040AA30: mov     [rbp+0E8h+var_108], r11
 * 000000014040AA34: test    [rbp+0E8h+arg_0], 1
 * 000000014040AA3B: jnz     short loc_14040AA6C
 * 000000014040AA3D: lfence
 * 000000014040AA40: test    word ptr gs:860h, 1
 * 000000014040AA4B: jnz     short loc_14040AA55
 * 000000014040AA4D: lfence
 * 000000014040AA50: jmp     loc_14040ACBE
 * 000000014040AA55: movzx   eax, word ptr gs:864h
 * 000000014040AA5E: mov     ecx, 48h ; 'H'
 * 000000014040AA63: xor     edx, edx
 * 000000014040AA65: wrmsr
 * 000000014040AA67: jmp     loc_14040ACBE
 * 000000014040AA6C: test    cs:KiKvaShadow, 1
 * 000000014040AA73: jnz     short loc_14040AA78
 * 000000014040AA75: swapgs
 * 000000014040AA78: lfence
 * 000000014040AA7B: mov     r10, gs:188h
 * 000000014040AA84: mov     rcx, gs:188h
 * 000000014040AA8D: mov     rcx, [rcx+220h]
 * 000000014040AA94: mov     rcx, [rcx+9E0h]
 * 000000014040AA9B: mov     gs:858h, rcx
 * 000000014040AAA4: mov     cx, gs:850h
 * 000000014040AAAD: mov     gs:852h, cx
 * 000000014040AAB6: mov     cx, gs:860h
 * 000000014040AABF: mov     gs:854h, cx
 * 000000014040AAC8: movzx   eax, word ptr gs:866h
 * 000000014040AAD1: cmp     gs:864h, ax
 * 000000014040AADA: jz      short loc_14040AAEE
 * 000000014040AADC: mov     gs:864h, ax
 * 000000014040AAE5: mov     ecx, 48h ; 'H'
 * 000000014040AAEA: xor     edx, edx
 * 000000014040AAEC: wrmsr
 * 000000014040AAEE: movzx   edx, word ptr gs:860h
 * 000000014040AAF7: test    edx, 8
 * 000000014040AAFD: jz      short loc_14040AB16
 * 000000014040AAFF: mov     eax, 1
 * 000000014040AB04: xor     edx, edx
 * 000000014040AB06: mov     ecx, 49h ; 'I'
 * 000000014040AB0B: wrmsr
 * 000000014040AB0D: movzx   edx, word ptr gs:860h
 * 000000014040AB16: test    edx, 2
 * 000000014040AB1C: jz      loc_14040AC47
 * 000000014040AB22: call    loc_14040AC35
 * 000000014040AB27: add     rsp, 8
 * 000000014040AB2B: call    loc_14040AC3E
 * 000000014040AB30: add     rsp, 8
 * 000000014040AB34: call    loc_14040AB27
 * 000000014040AB39: add     rsp, 8
 * 000000014040AB3D: call    loc_14040AB30
 * 000000014040AB42: add     rsp, 8
 * 000000014040AB46: call    loc_14040AB39
 * 000000014040AB4B: add     rsp, 8
 * 000000014040AB4F: call    loc_14040AB42
 * 000000014040AB54: add     rsp, 8
 * 000000014040AB58: call    loc_14040AB4B
 * 000000014040AB5D: add     rsp, 8
 * 000000014040AB61: call    loc_14040AB54
 * 000000014040AB66: add     rsp, 8
 * 000000014040AB6A: call    loc_14040AB5D
 * 000000014040AB6F: add     rsp, 8
 * 000000014040AB73: call    loc_14040AB66
 * 000000014040AB78: add     rsp, 8
 * 000000014040AB7C: call    loc_14040AB6F
 * 000000014040AB81: add     rsp, 8
 * 000000014040AB85: call    loc_14040AB78
 * 000000014040AB8A: add     rsp, 8
 * 000000014040AB8E: call    loc_14040AB81
 * 000000014040AB93: add     rsp, 8
 * 000000014040AB97: call    loc_14040AB8A
 * 000000014040AB9C: add     rsp, 8
 * 000000014040ABA0: call    loc_14040AB93
 * 000000014040ABA5: add     rsp, 8
 * 000000014040ABA9: call    loc_14040AB9C
 * 000000014040ABAE: add     rsp, 8
 * 000000014040ABB2: call    loc_14040ABA5
 * 000000014040ABB7: add     rsp, 8
 * 000000014040ABBB: call    loc_14040ABAE
 * 000000014040ABC0: add     rsp, 8
 * 000000014040ABC4: call    loc_14040ABB7
 * 000000014040ABC9: add     rsp, 8
 * 000000014040ABCD: call    loc_14040ABC0
 * 000000014040ABD2: add     rsp, 8
 * 000000014040ABD6: call    loc_14040ABC9
 * 000000014040ABDB: add     rsp, 8
 * 000000014040ABDF: call    loc_14040ABD2
 * 000000014040ABE4: add     rsp, 8
 * 000000014040ABE8: call    loc_14040ABDB
 * 000000014040ABED: add     rsp, 8
 * 000000014040ABF1: call    loc_14040ABE4
 * 000000014040ABF6: add     rsp, 8
 * 000000014040ABFA: call    loc_14040ABED
 * 000000014040ABFF: add     rsp, 8
 * 000000014040AC03: call    loc_14040ABF6
 * 000000014040AC08: add     rsp, 8
 * 000000014040AC0C: call    loc_14040ABFF
 * 000000014040AC11: add     rsp, 8
 * 000000014040AC15: call    loc_14040AC08
 * 000000014040AC1A: add     rsp, 8
 * 000000014040AC1E: call    loc_14040AC11
 * 000000014040AC23: add     rsp, 8
 * 000000014040AC27: call    loc_14040AC1A
 * 000000014040AC2C: add     rsp, 8
 * 000000014040AC30: call    loc_14040AC23
 * 000000014040AC35: add     rsp, 8
 * 000000014040AC39: call    loc_14040AC2C
 * 000000014040AC3E: add     rsp, 8
 * 000000014040AC42: mov     eax, 0DADAh
 * 000000014040AC47: test    edx, 200h
 * 000000014040AC4D: jz      short loc_14040AC54
 * 000000014040AC4F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040AC54: lfence
 * 000000014040AC57: mov     byte ptr gs:856h, 0
 * 000000014040AC60: test    byte ptr [r10+3], 80h
 * 000000014040AC65: jz      short loc_14040ACA9
 * 000000014040AC67: mov     ecx, 0C0000102h
 * 000000014040AC6C: rdmsr
 * 000000014040AC6E: shl     rdx, 20h
 * 000000014040AC72: or      rax, rdx
 * 000000014040AC75: cmp     rax, cs:MmUserProbeAddress
 * 000000014040AC7C: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040AC84: cmp     [r10+0F0h], rax
 * 000000014040AC8B: jz      short loc_14040ACA9
 * 000000014040AC8D: mov     rdx, [r10+1F0h]
 * 000000014040AC94: bts     dword ptr [r10+74h], 8
 * 000000014040AC9A: dec     word ptr [r10+1E6h]
 * 000000014040ACA2: mov     [rdx+80h], rax
 * 000000014040ACA9: test    byte ptr [r10+3], 3
 * 000000014040ACAE: mov     [rbp+0E8h+var_68], 0
 * 000000014040ACB7: jz      short loc_14040ACBE
 * 000000014040ACB9: call    KiSaveDebugRegisterState
 * 000000014040ACBE: cld
 * 000000014040ACBF: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040ACC3: ldmxcsr dword ptr gs:180h
 * 000000014040ACCC: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040ACD0: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040ACD4: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040ACD8: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040ACDC: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040ACE0: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040ACE4: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040ACEB: jz      short loc_14040ACF9
 * 000000014040ACED: test    [rbp+0E8h+arg_0], 1
 * 000000014040ACF4: jz      short loc_14040ACF9
 * 000000014040ACF6: stac
 * 000000014040ACF9: test    [rbp+0E8h+arg_8], 200h
 * 000000014040AD03: jz      short loc_14040AD06
 * 000000014040AD05: sti
 * 000000014040AD06: test    cs:KiCpuTracingFlags, 2
 * 000000014040AD10: jz      short loc_14040AD25
 * 000000014040AD12: mov     ecx, 1D9h
 * 000000014040AD17: rdmsr
 * 000000014040AD19: or      eax, 1
 * 000000014040AD1C: wrmsr
 * 000000014040AD1E: xor     edx, edx
 * 000000014040AD20: jmp     loc_14040ADF4
 * 000000014040AD25: xor     edx, edx
 * 000000014040AD27: test    [rbp+0E8h+arg_8], 100h
 * 000000014040AD31: jz      loc_14040ADF4
 * 000000014040AD37: test    byte ptr gs:8722h, 2
 * 000000014040AD40: jz      loc_14040ADF4
 * 000000014040AD46: test    [rbp+0E8h+arg_0], 1
 * 000000014040AD4D: jnz     short loc_14040ADA6
 * 000000014040AD4F: mov     rax, dr7
 * 000000014040AD52: test    ax, 200h
 * 000000014040AD56: jz      loc_14040ADF4
 * 000000014040AD5C: test    ax, 100h
 * 000000014040AD60: jz      loc_14040ADF4
 * 000000014040AD66: mov     r8d, cs:KiLastBranchTOSMSR
 * 000000014040AD6D: or      r8d, r8d
 * 000000014040AD70: jz      short loc_14040AD7A
 * 000000014040AD72: mov     ecx, r8d
 * 000000014040AD75: rdmsr
 * 000000014040AD77: mov     r8d, eax
 * 000000014040AD7A: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 000000014040AD80: add     ecx, r8d
 * 000000014040AD83: rdmsr
 * 000000014040AD85: mov     r9d, eax
 * 000000014040AD88: shl     rdx, 20h
 * 000000014040AD8C: mov     ecx, cs:KiLastBranchToBaseMSR
 * 000000014040AD92: or      r9, rdx
 * 000000014040AD95: add     ecx, r8d
 * 000000014040AD98: rdmsr
 * 000000014040AD9A: mov     r10d, eax
 * 000000014040AD9D: shl     rdx, 20h
 * 000000014040ADA1: or      r10, rdx
 * 000000014040ADA4: jmp     short loc_14040ADEF
 * 000000014040ADA6: test    [rbp+0E8h+var_68], 200h
 * 000000014040ADAF: jz      short loc_14040ADF4
 * 000000014040ADB1: test    [rbp+0E8h+var_68], 100h
 * 000000014040ADBA: jz      short loc_14040ADF4
 * 000000014040ADBC: and     [rbp+0E8h+var_40], 0
 * 000000014040ADC4: and     [rbp+0E8h+var_48], 0
 * 000000014040ADCC: mov     rcx, cs:MmUserProbeAddress
 * 000000014040ADD3: mov     r9, [rbp+0E8h+var_50]
 * 000000014040ADDA: cmp     r9, rcx
 * 000000014040ADDD: cmovnb  r9, rcx
 * 000000014040ADE1: mov     r10, [rbp+0E8h+var_58]
 * 000000014040ADE8: cmp     r10, rcx
 * 000000014040ADEB: cmovnb  r10, rcx
 * 000000014040ADEF: mov     edx, 2
 * 000000014040ADF4: mov     ecx, 80000004h
 * 000000014040ADF9: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 000000014040AE03: mov     r8, [rbp+0E8h]
 * 000000014040AE0A: call    KiExceptionDispatch
 * 000000014040AE0F: nop
 * 000000014040AE10: retn
 */
