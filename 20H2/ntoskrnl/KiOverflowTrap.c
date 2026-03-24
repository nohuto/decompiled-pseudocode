/*
 * XREFs of KiOverflowTrap @ 0x140408F00
 * Callers:
 *     KiOverflowTrapShadow @ 0x140A17340 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x140408F00 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x140408F00
 * Reason: Hex-Rays returned no pseudocode for 0x140408F00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140408F00: sub     rsp, 8
 * 0000000140408F04: push    rbp
 * 0000000140408F05: sub     rsp, 158h
 * 0000000140408F0C: lea     rbp, [rsp+80h]
 * 0000000140408F14: mov     [rbp+0E8h+var_13D], 1
 * 0000000140408F18: mov     [rbp+0E8h+var_138], rax
 * 0000000140408F1C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140408F20: mov     [rbp+0E8h+var_128], rdx
 * 0000000140408F24: mov     [rbp+0E8h+var_120], r8
 * 0000000140408F28: mov     [rbp+0E8h+var_118], r9
 * 0000000140408F2C: mov     [rbp+0E8h+var_110], r10
 * 0000000140408F30: mov     [rbp+0E8h+var_108], r11
 * 0000000140408F34: test    [rbp+0E8h+arg_0], 1
 * 0000000140408F3B: jnz     short loc_140408F6A
 * 0000000140408F3D: lfence
 * 0000000140408F40: test    byte ptr gs:278h, 1
 * 0000000140408F49: jnz     short loc_140408F53
 * 0000000140408F4B: lfence
 * 0000000140408F4E: jmp     loc_1404091A9
 * 0000000140408F53: movzx   eax, byte ptr gs:27Ah
 * 0000000140408F5C: mov     ecx, 48h ; 'H'
 * 0000000140408F61: xor     edx, edx
 * 0000000140408F63: wrmsr
 * 0000000140408F65: jmp     loc_1404091A9
 * 0000000140408F6A: test    cs:KiKvaShadow, 1
 * 0000000140408F71: jnz     short loc_140408F76
 * 0000000140408F73: swapgs
 * 0000000140408F76: lfence
 * 0000000140408F79: mov     r10, gs:188h
 * 0000000140408F82: mov     rcx, gs:188h
 * 0000000140408F8B: mov     rcx, [rcx+220h]
 * 0000000140408F92: mov     rcx, [rcx+9E0h]
 * 0000000140408F99: mov     gs:270h, rcx
 * 0000000140408FA2: mov     cl, gs:850h
 * 0000000140408FAA: mov     gs:851h, cl
 * 0000000140408FB2: mov     cl, gs:278h
 * 0000000140408FBA: mov     gs:852h, cl
 * 0000000140408FC2: movzx   eax, byte ptr gs:27Bh
 * 0000000140408FCB: cmp     gs:27Ah, al
 * 0000000140408FD3: jz      short loc_140408FE6
 * 0000000140408FD5: mov     gs:27Ah, al
 * 0000000140408FDD: mov     ecx, 48h ; 'H'
 * 0000000140408FE2: xor     edx, edx
 * 0000000140408FE4: wrmsr
 * 0000000140408FE6: movzx   edx, byte ptr gs:278h
 * 0000000140408FEF: test    edx, 8
 * 0000000140408FF5: jz      short loc_14040900E
 * 0000000140408FF7: mov     eax, 1
 * 0000000140408FFC: xor     edx, edx
 * 0000000140408FFE: mov     ecx, 49h ; 'I'
 * 0000000140409003: wrmsr
 * 0000000140409005: movzx   edx, byte ptr gs:278h
 * 000000014040900E: test    edx, 2
 * 0000000140409014: jz      loc_14040913F
 * 000000014040901A: call    loc_14040912D
 * 000000014040901F: add     rsp, 8
 * 0000000140409023: call    loc_140409136
 * 0000000140409028: add     rsp, 8
 * 000000014040902C: call    loc_14040901F
 * 0000000140409031: add     rsp, 8
 * 0000000140409035: call    loc_140409028
 * 000000014040903A: add     rsp, 8
 * 000000014040903E: call    loc_140409031
 * 0000000140409043: add     rsp, 8
 * 0000000140409047: call    loc_14040903A
 * 000000014040904C: add     rsp, 8
 * 0000000140409050: call    loc_140409043
 * 0000000140409055: add     rsp, 8
 * 0000000140409059: call    loc_14040904C
 * 000000014040905E: add     rsp, 8
 * 0000000140409062: call    loc_140409055
 * 0000000140409067: add     rsp, 8
 * 000000014040906B: call    loc_14040905E
 * 0000000140409070: add     rsp, 8
 * 0000000140409074: call    loc_140409067
 * 0000000140409079: add     rsp, 8
 * 000000014040907D: call    loc_140409070
 * 0000000140409082: add     rsp, 8
 * 0000000140409086: call    loc_140409079
 * 000000014040908B: add     rsp, 8
 * 000000014040908F: call    loc_140409082
 * 0000000140409094: add     rsp, 8
 * 0000000140409098: call    loc_14040908B
 * 000000014040909D: add     rsp, 8
 * 00000001404090A1: call    loc_140409094
 * 00000001404090A6: add     rsp, 8
 * 00000001404090AA: call    loc_14040909D
 * 00000001404090AF: add     rsp, 8
 * 00000001404090B3: call    loc_1404090A6
 * 00000001404090B8: add     rsp, 8
 * 00000001404090BC: call    loc_1404090AF
 * 00000001404090C1: add     rsp, 8
 * 00000001404090C5: call    loc_1404090B8
 * 00000001404090CA: add     rsp, 8
 * 00000001404090CE: call    loc_1404090C1
 * 00000001404090D3: add     rsp, 8
 * 00000001404090D7: call    loc_1404090CA
 * 00000001404090DC: add     rsp, 8
 * 00000001404090E0: call    loc_1404090D3
 * 00000001404090E5: add     rsp, 8
 * 00000001404090E9: call    loc_1404090DC
 * 00000001404090EE: add     rsp, 8
 * 00000001404090F2: call    loc_1404090E5
 * 00000001404090F7: add     rsp, 8
 * 00000001404090FB: call    loc_1404090EE
 * 0000000140409100: add     rsp, 8
 * 0000000140409104: call    loc_1404090F7
 * 0000000140409109: add     rsp, 8
 * 000000014040910D: call    loc_140409100
 * 0000000140409112: add     rsp, 8
 * 0000000140409116: call    loc_140409109
 * 000000014040911B: add     rsp, 8
 * 000000014040911F: call    loc_140409112
 * 0000000140409124: add     rsp, 8
 * 0000000140409128: call    loc_14040911B
 * 000000014040912D: add     rsp, 8
 * 0000000140409131: call    loc_140409124
 * 0000000140409136: add     rsp, 8
 * 000000014040913A: mov     eax, 0DADAh
 * 000000014040913F: lfence
 * 0000000140409142: mov     byte ptr gs:853h, 0
 * 000000014040914B: test    byte ptr [r10+3], 80h
 * 0000000140409150: jz      short loc_140409194
 * 0000000140409152: mov     ecx, 0C0000102h
 * 0000000140409157: rdmsr
 * 0000000140409159: shl     rdx, 20h
 * 000000014040915D: or      rax, rdx
 * 0000000140409160: cmp     rax, cs:MmUserProbeAddress
 * 0000000140409167: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040916F: cmp     [r10+0F0h], rax
 * 0000000140409176: jz      short loc_140409194
 * 0000000140409178: mov     rdx, [r10+1F0h]
 * 000000014040917F: bts     dword ptr [r10+74h], 8
 * 0000000140409185: dec     word ptr [r10+1E6h]
 * 000000014040918D: mov     [rdx+80h], rax
 * 0000000140409194: test    byte ptr [r10+3], 3
 * 0000000140409199: mov     [rbp+0E8h+var_68], 0
 * 00000001404091A2: jz      short loc_1404091A9
 * 00000001404091A4: call    KiSaveDebugRegisterState
 * 00000001404091A9: cld
 * 00000001404091AA: stmxcsr [rbp+0E8h+var_13C]
 * 00000001404091AE: ldmxcsr dword ptr gs:180h
 * 00000001404091B7: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001404091BB: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001404091BF: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001404091C3: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001404091C7: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001404091CB: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001404091CF: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404091D6: jz      short loc_1404091E4
 * 00000001404091D8: test    [rbp+0E8h+arg_0], 1
 * 00000001404091DF: jz      short loc_1404091E4
 * 00000001404091E1: stac
 * 00000001404091E4: test    [rbp+0E8h+arg_8], 200h
 * 00000001404091EE: jz      short loc_1404091F1
 * 00000001404091F0: sti
 * 00000001404091F1: mov     ecx, 0C0000095h
 * 00000001404091F6: xor     edx, edx
 * 00000001404091F8: mov     r8, [rbp+0E8h]
 * 00000001404091FF: dec     r8
 * 0000000140409202: call    KiExceptionDispatch
 * 0000000140409207: nop
 * 0000000140409208: retn
 */
