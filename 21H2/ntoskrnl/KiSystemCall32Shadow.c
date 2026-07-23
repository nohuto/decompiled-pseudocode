/*
 * XREFs of KiSystemCall32Shadow @ 0x140A16E40
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall32Shadow @ 0x140A16E40 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x140A16E40
 * Reason: Hex-Rays returned no pseudocode for 0x140A16E40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A16E40: swapgs
 * 0000000140A16E43: mov     gs:9010h, rsp
 * 0000000140A16E4C: mov     rsp, gs:9000h
 * 0000000140A16E55: mov     cr3, rsp
 * 0000000140A16E58: mov     rsp, gs:9008h
 * 0000000140A16E61: push    2Bh ; '+'
 * 0000000140A16E63: push    qword ptr gs:9010h
 * 0000000140A16E6B: push    r11
 * 0000000140A16E6D: push    23h ; '#'
 * 0000000140A16E6F: push    rcx
 * 0000000140A16E70: sub     rsp, 8
 * 0000000140A16E74: push    rbp
 * 0000000140A16E75: sub     rsp, 158h
 * 0000000140A16E7C: lea     rbp, [rsp+190h+var_110]
 * 0000000140A16E84: mov     byte ptr [rbp-55h], 1
 * 0000000140A16E88: mov     [rbp-50h], rax
 * 0000000140A16E8C: mov     [rbp-48h], rcx
 * 0000000140A16E90: mov     [rbp-40h], rdx
 * 0000000140A16E94: mov     [rbp-38h], r8
 * 0000000140A16E98: mov     [rbp-30h], r9
 * 0000000140A16E9C: mov     [rbp-28h], r10
 * 0000000140A16EA0: mov     [rbp-20h], r11
 * 0000000140A16EA4: test    byte ptr [rbp+0F0h], 1
 * 0000000140A16EAB: jnz     short loc_140A16EDC
 * 0000000140A16EAD: lfence
 * 0000000140A16EB0: test    word ptr gs:860h, 1
 * 0000000140A16EBB: jnz     short loc_140A16EC5
 * 0000000140A16EBD: lfence
 * 0000000140A16EC0: jmp     loc_140A1712E
 * 0000000140A16EC5: movzx   eax, word ptr gs:864h
 * 0000000140A16ECE: mov     ecx, 48h ; 'H'
 * 0000000140A16ED3: xor     edx, edx
 * 0000000140A16ED5: wrmsr
 * 0000000140A16ED7: jmp     loc_140A1712E
 * 0000000140A16EDC: test    cs:KiKvaShadow, 1
 * 0000000140A16EE3: jnz     short loc_140A16EE8
 * 0000000140A16EE5: swapgs
 * 0000000140A16EE8: lfence
 * 0000000140A16EEB: mov     r10, gs:188h
 * 0000000140A16EF4: mov     rcx, gs:188h
 * 0000000140A16EFD: mov     rcx, [rcx+220h]
 * 0000000140A16F04: mov     rcx, [rcx+9E0h]
 * 0000000140A16F0B: mov     gs:858h, rcx
 * 0000000140A16F14: mov     cx, gs:850h
 * 0000000140A16F1D: mov     gs:852h, cx
 * 0000000140A16F26: mov     cx, gs:860h
 * 0000000140A16F2F: mov     gs:854h, cx
 * 0000000140A16F38: movzx   eax, word ptr gs:866h
 * 0000000140A16F41: cmp     gs:864h, ax
 * 0000000140A16F4A: jz      short loc_140A16F5E
 * 0000000140A16F4C: mov     gs:864h, ax
 * 0000000140A16F55: mov     ecx, 48h ; 'H'
 * 0000000140A16F5A: xor     edx, edx
 * 0000000140A16F5C: wrmsr
 * 0000000140A16F5E: movzx   edx, word ptr gs:860h
 * 0000000140A16F67: test    edx, 8
 * 0000000140A16F6D: jz      short loc_140A16F86
 * 0000000140A16F6F: mov     eax, 1
 * 0000000140A16F74: xor     edx, edx
 * 0000000140A16F76: mov     ecx, 49h ; 'I'
 * 0000000140A16F7B: wrmsr
 * 0000000140A16F7D: movzx   edx, word ptr gs:860h
 * 0000000140A16F86: test    edx, 2
 * 0000000140A16F8C: jz      loc_140A170B7
 * 0000000140A16F92: call    loc_140A170A5
 * 0000000140A16F97: add     rsp, 8
 * 0000000140A16F9B: call    loc_140A170AE
 * 0000000140A16FA0: add     rsp, 8
 * 0000000140A16FA4: call    loc_140A16F97
 * 0000000140A16FA9: add     rsp, 8
 * 0000000140A16FAD: call    loc_140A16FA0
 * 0000000140A16FB2: add     rsp, 8
 * 0000000140A16FB6: call    loc_140A16FA9
 * 0000000140A16FBB: add     rsp, 8
 * 0000000140A16FBF: call    loc_140A16FB2
 * 0000000140A16FC4: add     rsp, 8
 * 0000000140A16FC8: call    loc_140A16FBB
 * 0000000140A16FCD: add     rsp, 8
 * 0000000140A16FD1: call    loc_140A16FC4
 * 0000000140A16FD6: add     rsp, 8
 * 0000000140A16FDA: call    loc_140A16FCD
 * 0000000140A16FDF: add     rsp, 8
 * 0000000140A16FE3: call    loc_140A16FD6
 * 0000000140A16FE8: add     rsp, 8
 * 0000000140A16FEC: call    loc_140A16FDF
 * 0000000140A16FF1: add     rsp, 8
 * 0000000140A16FF5: call    loc_140A16FE8
 * 0000000140A16FFA: add     rsp, 8
 * 0000000140A16FFE: call    loc_140A16FF1
 * 0000000140A17003: add     rsp, 8
 * 0000000140A17007: call    loc_140A16FFA
 * 0000000140A1700C: add     rsp, 8
 * 0000000140A17010: call    loc_140A17003
 * 0000000140A17015: add     rsp, 8
 * 0000000140A17019: call    loc_140A1700C
 * 0000000140A1701E: add     rsp, 8
 * 0000000140A17022: call    loc_140A17015
 * 0000000140A17027: add     rsp, 8
 * 0000000140A1702B: call    loc_140A1701E
 * 0000000140A17030: add     rsp, 8
 * 0000000140A17034: call    loc_140A17027
 * 0000000140A17039: add     rsp, 8
 * 0000000140A1703D: call    loc_140A17030
 * 0000000140A17042: add     rsp, 8
 * 0000000140A17046: call    loc_140A17039
 * 0000000140A1704B: add     rsp, 8
 * 0000000140A1704F: call    loc_140A17042
 * 0000000140A17054: add     rsp, 8
 * 0000000140A17058: call    loc_140A1704B
 * 0000000140A1705D: add     rsp, 8
 * 0000000140A17061: call    loc_140A17054
 * 0000000140A17066: add     rsp, 8
 * 0000000140A1706A: call    loc_140A1705D
 * 0000000140A1706F: add     rsp, 8
 * 0000000140A17073: call    loc_140A17066
 * 0000000140A17078: add     rsp, 8
 * 0000000140A1707C: call    loc_140A1706F
 * 0000000140A17081: add     rsp, 8
 * 0000000140A17085: call    loc_140A17078
 * 0000000140A1708A: add     rsp, 8
 * 0000000140A1708E: call    loc_140A17081
 * 0000000140A17093: add     rsp, 8
 * 0000000140A17097: call    loc_140A1708A
 * 0000000140A1709C: add     rsp, 8
 * 0000000140A170A0: call    loc_140A17093
 * 0000000140A170A5: add     rsp, 8
 * 0000000140A170A9: call    loc_140A1709C
 * 0000000140A170AE: add     rsp, 8
 * 0000000140A170B2: mov     eax, 0DADAh
 * 0000000140A170B7: test    edx, 200h
 * 0000000140A170BD: jz      short loc_140A170C4
 * 0000000140A170BF: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140A170C4: lfence
 * 0000000140A170C7: mov     byte ptr gs:856h, 0
 * 0000000140A170D0: test    byte ptr [r10+3], 80h
 * 0000000140A170D5: jz      short loc_140A17119
 * 0000000140A170D7: mov     ecx, 0C0000102h
 * 0000000140A170DC: rdmsr
 * 0000000140A170DE: shl     rdx, 20h
 * 0000000140A170E2: or      rax, rdx
 * 0000000140A170E5: cmp     rax, cs:MmUserProbeAddress
 * 0000000140A170EC: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140A170F4: cmp     [r10+0F0h], rax
 * 0000000140A170FB: jz      short loc_140A17119
 * 0000000140A170FD: mov     rdx, [r10+1F0h]
 * 0000000140A17104: bts     dword ptr [r10+74h], 8
 * 0000000140A1710A: dec     word ptr [r10+1E6h]
 * 0000000140A17112: mov     [rdx+80h], rax
 * 0000000140A17119: test    byte ptr [r10+3], 3
 * 0000000140A1711E: mov     word ptr [rbp+80h], 0
 * 0000000140A17127: jz      short loc_140A1712E
 * 0000000140A17129: call    KiSaveDebugRegisterState
 * 0000000140A1712E: cld
 * 0000000140A1712F: stmxcsr dword ptr [rbp-54h]
 * 0000000140A17133: ldmxcsr dword ptr gs:180h
 * 0000000140A1713C: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140A17140: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140A17144: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140A17148: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140A1714C: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140A17150: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140A17154: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140A1715B: jz      short loc_140A17169
 * 0000000140A1715D: test    byte ptr [rbp+0F0h], 1
 * 0000000140A17164: jz      short loc_140A17169
 * 0000000140A17166: stac
 * 0000000140A17169: sub     qword ptr [rbp+0E8h], 2
 * 0000000140A17171: and     dword ptr [rbp+0ECh], 0
 * 0000000140A17178: sti
 * 0000000140A17179: mov     ecx, 0C000001Dh
 * 0000000140A1717E: xor     edx, edx
 * 0000000140A17180: mov     r8, [rbp+0E8h]
 * 0000000140A17187: call    KiExceptionDispatch
 * 0000000140A1718C: nop
 * 0000000140A1718D: retn
 */
