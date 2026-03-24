/*
 * XREFs of KiSystemCall32Shadow @ 0x140A15E40
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall32Shadow @ 0x140A15E40 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x140A15E40
 * Reason: Hex-Rays returned no pseudocode for 0x140A15E40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A15E40: swapgs
 * 0000000140A15E43: mov     gs:9010h, rsp
 * 0000000140A15E4C: mov     rsp, gs:9000h
 * 0000000140A15E55: mov     cr3, rsp
 * 0000000140A15E58: mov     rsp, gs:9008h
 * 0000000140A15E61: push    2Bh ; '+'
 * 0000000140A15E63: push    qword ptr gs:9010h
 * 0000000140A15E6B: push    r11
 * 0000000140A15E6D: push    23h ; '#'
 * 0000000140A15E6F: push    rcx
 * 0000000140A15E70: sub     rsp, 8
 * 0000000140A15E74: push    rbp
 * 0000000140A15E75: sub     rsp, 158h
 * 0000000140A15E7C: lea     rbp, [rsp+190h+var_110]
 * 0000000140A15E84: mov     byte ptr [rbp-55h], 1
 * 0000000140A15E88: mov     [rbp-50h], rax
 * 0000000140A15E8C: mov     [rbp-48h], rcx
 * 0000000140A15E90: mov     [rbp-40h], rdx
 * 0000000140A15E94: mov     [rbp-38h], r8
 * 0000000140A15E98: mov     [rbp-30h], r9
 * 0000000140A15E9C: mov     [rbp-28h], r10
 * 0000000140A15EA0: mov     [rbp-20h], r11
 * 0000000140A15EA4: test    byte ptr [rbp+0F0h], 1
 * 0000000140A15EAB: jnz     short loc_140A15EDC
 * 0000000140A15EAD: lfence
 * 0000000140A15EB0: test    word ptr gs:860h, 1
 * 0000000140A15EBB: jnz     short loc_140A15EC5
 * 0000000140A15EBD: lfence
 * 0000000140A15EC0: jmp     loc_140A1612E
 * 0000000140A15EC5: movzx   eax, word ptr gs:864h
 * 0000000140A15ECE: mov     ecx, 48h ; 'H'
 * 0000000140A15ED3: xor     edx, edx
 * 0000000140A15ED5: wrmsr
 * 0000000140A15ED7: jmp     loc_140A1612E
 * 0000000140A15EDC: test    cs:KiKvaShadow, 1
 * 0000000140A15EE3: jnz     short loc_140A15EE8
 * 0000000140A15EE5: swapgs
 * 0000000140A15EE8: lfence
 * 0000000140A15EEB: mov     r10, gs:188h
 * 0000000140A15EF4: mov     rcx, gs:188h
 * 0000000140A15EFD: mov     rcx, [rcx+220h]
 * 0000000140A15F04: mov     rcx, [rcx+9E0h]
 * 0000000140A15F0B: mov     gs:858h, rcx
 * 0000000140A15F14: mov     cx, gs:850h
 * 0000000140A15F1D: mov     gs:852h, cx
 * 0000000140A15F26: mov     cx, gs:860h
 * 0000000140A15F2F: mov     gs:854h, cx
 * 0000000140A15F38: movzx   eax, word ptr gs:866h
 * 0000000140A15F41: cmp     gs:864h, ax
 * 0000000140A15F4A: jz      short loc_140A15F5E
 * 0000000140A15F4C: mov     gs:864h, ax
 * 0000000140A15F55: mov     ecx, 48h ; 'H'
 * 0000000140A15F5A: xor     edx, edx
 * 0000000140A15F5C: wrmsr
 * 0000000140A15F5E: movzx   edx, word ptr gs:860h
 * 0000000140A15F67: test    edx, 8
 * 0000000140A15F6D: jz      short loc_140A15F86
 * 0000000140A15F6F: mov     eax, 1
 * 0000000140A15F74: xor     edx, edx
 * 0000000140A15F76: mov     ecx, 49h ; 'I'
 * 0000000140A15F7B: wrmsr
 * 0000000140A15F7D: movzx   edx, word ptr gs:860h
 * 0000000140A15F86: test    edx, 2
 * 0000000140A15F8C: jz      loc_140A160B7
 * 0000000140A15F92: call    loc_140A160A5
 * 0000000140A15F97: add     rsp, 8
 * 0000000140A15F9B: call    loc_140A160AE
 * 0000000140A15FA0: add     rsp, 8
 * 0000000140A15FA4: call    loc_140A15F97
 * 0000000140A15FA9: add     rsp, 8
 * 0000000140A15FAD: call    loc_140A15FA0
 * 0000000140A15FB2: add     rsp, 8
 * 0000000140A15FB6: call    loc_140A15FA9
 * 0000000140A15FBB: add     rsp, 8
 * 0000000140A15FBF: call    loc_140A15FB2
 * 0000000140A15FC4: add     rsp, 8
 * 0000000140A15FC8: call    loc_140A15FBB
 * 0000000140A15FCD: add     rsp, 8
 * 0000000140A15FD1: call    loc_140A15FC4
 * 0000000140A15FD6: add     rsp, 8
 * 0000000140A15FDA: call    loc_140A15FCD
 * 0000000140A15FDF: add     rsp, 8
 * 0000000140A15FE3: call    loc_140A15FD6
 * 0000000140A15FE8: add     rsp, 8
 * 0000000140A15FEC: call    loc_140A15FDF
 * 0000000140A15FF1: add     rsp, 8
 * 0000000140A15FF5: call    loc_140A15FE8
 * 0000000140A15FFA: add     rsp, 8
 * 0000000140A15FFE: call    loc_140A15FF1
 * 0000000140A16003: add     rsp, 8
 * 0000000140A16007: call    loc_140A15FFA
 * 0000000140A1600C: add     rsp, 8
 * 0000000140A16010: call    loc_140A16003
 * 0000000140A16015: add     rsp, 8
 * 0000000140A16019: call    loc_140A1600C
 * 0000000140A1601E: add     rsp, 8
 * 0000000140A16022: call    loc_140A16015
 * 0000000140A16027: add     rsp, 8
 * 0000000140A1602B: call    loc_140A1601E
 * 0000000140A16030: add     rsp, 8
 * 0000000140A16034: call    loc_140A16027
 * 0000000140A16039: add     rsp, 8
 * 0000000140A1603D: call    loc_140A16030
 * 0000000140A16042: add     rsp, 8
 * 0000000140A16046: call    loc_140A16039
 * 0000000140A1604B: add     rsp, 8
 * 0000000140A1604F: call    loc_140A16042
 * 0000000140A16054: add     rsp, 8
 * 0000000140A16058: call    loc_140A1604B
 * 0000000140A1605D: add     rsp, 8
 * 0000000140A16061: call    loc_140A16054
 * 0000000140A16066: add     rsp, 8
 * 0000000140A1606A: call    loc_140A1605D
 * 0000000140A1606F: add     rsp, 8
 * 0000000140A16073: call    loc_140A16066
 * 0000000140A16078: add     rsp, 8
 * 0000000140A1607C: call    loc_140A1606F
 * 0000000140A16081: add     rsp, 8
 * 0000000140A16085: call    loc_140A16078
 * 0000000140A1608A: add     rsp, 8
 * 0000000140A1608E: call    loc_140A16081
 * 0000000140A16093: add     rsp, 8
 * 0000000140A16097: call    loc_140A1608A
 * 0000000140A1609C: add     rsp, 8
 * 0000000140A160A0: call    loc_140A16093
 * 0000000140A160A5: add     rsp, 8
 * 0000000140A160A9: call    loc_140A1609C
 * 0000000140A160AE: add     rsp, 8
 * 0000000140A160B2: mov     eax, 0DADAh
 * 0000000140A160B7: test    edx, 200h
 * 0000000140A160BD: jz      short loc_140A160C4
 * 0000000140A160BF: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140A160C4: lfence
 * 0000000140A160C7: mov     byte ptr gs:856h, 0
 * 0000000140A160D0: test    byte ptr [r10+3], 80h
 * 0000000140A160D5: jz      short loc_140A16119
 * 0000000140A160D7: mov     ecx, 0C0000102h
 * 0000000140A160DC: rdmsr
 * 0000000140A160DE: shl     rdx, 20h
 * 0000000140A160E2: or      rax, rdx
 * 0000000140A160E5: cmp     rax, cs:MmUserProbeAddress
 * 0000000140A160EC: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140A160F4: cmp     [r10+0F0h], rax
 * 0000000140A160FB: jz      short loc_140A16119
 * 0000000140A160FD: mov     rdx, [r10+1F0h]
 * 0000000140A16104: bts     dword ptr [r10+74h], 8
 * 0000000140A1610A: dec     word ptr [r10+1E6h]
 * 0000000140A16112: mov     [rdx+80h], rax
 * 0000000140A16119: test    byte ptr [r10+3], 3
 * 0000000140A1611E: mov     word ptr [rbp+80h], 0
 * 0000000140A16127: jz      short loc_140A1612E
 * 0000000140A16129: call    KiSaveDebugRegisterState
 * 0000000140A1612E: cld
 * 0000000140A1612F: stmxcsr dword ptr [rbp-54h]
 * 0000000140A16133: ldmxcsr dword ptr gs:180h
 * 0000000140A1613C: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140A16140: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140A16144: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140A16148: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140A1614C: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140A16150: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140A16154: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140A1615B: jz      short loc_140A16169
 * 0000000140A1615D: test    byte ptr [rbp+0F0h], 1
 * 0000000140A16164: jz      short loc_140A16169
 * 0000000140A16166: stac
 * 0000000140A16169: sub     qword ptr [rbp+0E8h], 2
 * 0000000140A16171: and     dword ptr [rbp+0ECh], 0
 * 0000000140A16178: sti
 * 0000000140A16179: mov     ecx, 0C000001Dh
 * 0000000140A1617E: xor     edx, edx
 * 0000000140A16180: mov     r8, [rbp+0E8h]
 * 0000000140A16187: call    KiExceptionDispatch
 * 0000000140A1618C: nop
 * 0000000140A1618D: retn
 */
