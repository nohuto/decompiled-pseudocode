/*
 * XREFs of KxDebugTrapOrFault @ 0x140401F00
 * Callers:
 *     KiDebugTrapOrFault @ 0x140401E40 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x140401F00 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x140409080 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x140401F00
 * Reason: Hex-Rays returned no pseudocode for 0x140401F00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140401F00: sub     rsp, 8
 * 0000000140401F04: push    rbp
 * 0000000140401F05: sub     rsp, 158h
 * 0000000140401F0C: lea     rbp, [rsp+80h]
 * 0000000140401F14: mov     [rbp+0E8h+var_13D], 1
 * 0000000140401F18: mov     [rbp+0E8h+var_138], rax
 * 0000000140401F1C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140401F20: mov     [rbp+0E8h+var_128], rdx
 * 0000000140401F24: mov     [rbp+0E8h+var_120], r8
 * 0000000140401F28: mov     [rbp+0E8h+var_118], r9
 * 0000000140401F2C: mov     [rbp+0E8h+var_110], r10
 * 0000000140401F30: mov     [rbp+0E8h+var_108], r11
 * 0000000140401F34: test    [rbp+0E8h+arg_0], 1
 * 0000000140401F3B: jnz     short loc_140401F6A
 * 0000000140401F3D: lfence
 * 0000000140401F40: test    byte ptr gs:278h, 1
 * 0000000140401F49: jnz     short loc_140401F53
 * 0000000140401F4B: lfence
 * 0000000140401F4E: jmp     loc_1404021AF
 * 0000000140401F53: movzx   eax, byte ptr gs:27Ah
 * 0000000140401F5C: mov     ecx, 48h ; 'H'
 * 0000000140401F61: xor     edx, edx
 * 0000000140401F63: wrmsr
 * 0000000140401F65: jmp     loc_1404021AF
 * 0000000140401F6A: test    cs:KiKvaShadow, 1
 * 0000000140401F71: jnz     short loc_140401F76
 * 0000000140401F73: swapgs
 * 0000000140401F76: lfence
 * 0000000140401F79: mov     r10, gs:188h
 * 0000000140401F82: mov     rcx, gs:188h
 * 0000000140401F8B: mov     rcx, [rcx+220h]
 * 0000000140401F92: mov     rcx, [rcx+9E0h]
 * 0000000140401F99: mov     gs:270h, rcx
 * 0000000140401FA2: mov     cl, gs:850h
 * 0000000140401FAA: mov     gs:851h, cl
 * 0000000140401FB2: mov     cl, gs:278h
 * 0000000140401FBA: mov     gs:852h, cl
 * 0000000140401FC2: movzx   eax, byte ptr gs:27Bh
 * 0000000140401FCB: cmp     gs:27Ah, al
 * 0000000140401FD3: jz      short loc_140401FE6
 * 0000000140401FD5: mov     gs:27Ah, al
 * 0000000140401FDD: mov     ecx, 48h ; 'H'
 * 0000000140401FE2: xor     edx, edx
 * 0000000140401FE4: wrmsr
 * 0000000140401FE6: movzx   edx, byte ptr gs:278h
 * 0000000140401FEF: test    edx, 8
 * 0000000140401FF5: jz      short loc_14040200A
 * 0000000140401FF7: mov     eax, 1
 * 0000000140401FFC: xor     edx, edx
 * 0000000140401FFE: mov     ecx, 49h ; 'I'
 * 0000000140402003: wrmsr
 * 0000000140402005: jmp     loc_140402148
 * 000000014040200A: test    edx, 2
 * 0000000140402010: jz      loc_140402145
 * 0000000140402016: test    byte ptr gs:279h, 4
 * 000000014040201F: jnz     loc_140402145
 * 0000000140402025: call    loc_140402138
 * 000000014040202A: add     rsp, 8
 * 000000014040202E: call    loc_140402141
 * 0000000140402033: add     rsp, 8
 * 0000000140402037: call    loc_14040202A
 * 000000014040203C: add     rsp, 8
 * 0000000140402040: call    loc_140402033
 * 0000000140402045: add     rsp, 8
 * 0000000140402049: call    loc_14040203C
 * 000000014040204E: add     rsp, 8
 * 0000000140402052: call    loc_140402045
 * 0000000140402057: add     rsp, 8
 * 000000014040205B: call    loc_14040204E
 * 0000000140402060: add     rsp, 8
 * 0000000140402064: call    loc_140402057
 * 0000000140402069: add     rsp, 8
 * 000000014040206D: call    loc_140402060
 * 0000000140402072: add     rsp, 8
 * 0000000140402076: call    loc_140402069
 * 000000014040207B: add     rsp, 8
 * 000000014040207F: call    loc_140402072
 * 0000000140402084: add     rsp, 8
 * 0000000140402088: call    loc_14040207B
 * 000000014040208D: add     rsp, 8
 * 0000000140402091: call    loc_140402084
 * 0000000140402096: add     rsp, 8
 * 000000014040209A: call    loc_14040208D
 * 000000014040209F: add     rsp, 8
 * 00000001404020A3: call    loc_140402096
 * 00000001404020A8: add     rsp, 8
 * 00000001404020AC: call    loc_14040209F
 * 00000001404020B1: add     rsp, 8
 * 00000001404020B5: call    loc_1404020A8
 * 00000001404020BA: add     rsp, 8
 * 00000001404020BE: call    loc_1404020B1
 * 00000001404020C3: add     rsp, 8
 * 00000001404020C7: call    loc_1404020BA
 * 00000001404020CC: add     rsp, 8
 * 00000001404020D0: call    loc_1404020C3
 * 00000001404020D5: add     rsp, 8
 * 00000001404020D9: call    loc_1404020CC
 * 00000001404020DE: add     rsp, 8
 * 00000001404020E2: call    loc_1404020D5
 * 00000001404020E7: add     rsp, 8
 * 00000001404020EB: call    loc_1404020DE
 * 00000001404020F0: add     rsp, 8
 * 00000001404020F4: call    loc_1404020E7
 * 00000001404020F9: add     rsp, 8
 * 00000001404020FD: call    loc_1404020F0
 * 0000000140402102: add     rsp, 8
 * 0000000140402106: call    loc_1404020F9
 * 000000014040210B: add     rsp, 8
 * 000000014040210F: call    loc_140402102
 * 0000000140402114: add     rsp, 8
 * 0000000140402118: call    loc_14040210B
 * 000000014040211D: add     rsp, 8
 * 0000000140402121: call    loc_140402114
 * 0000000140402126: add     rsp, 8
 * 000000014040212A: call    loc_14040211D
 * 000000014040212F: add     rsp, 8
 * 0000000140402133: call    loc_140402126
 * 0000000140402138: add     rsp, 8
 * 000000014040213C: call    loc_14040212F
 * 0000000140402141: add     rsp, 8
 * 0000000140402145: lfence
 * 0000000140402148: mov     byte ptr gs:853h, 0
 * 0000000140402151: test    byte ptr [r10+3], 80h
 * 0000000140402156: jz      short loc_14040219A
 * 0000000140402158: mov     ecx, 0C0000102h
 * 000000014040215D: rdmsr
 * 000000014040215F: shl     rdx, 20h
 * 0000000140402163: or      rax, rdx
 * 0000000140402166: cmp     rax, cs:MmUserProbeAddress
 * 000000014040216D: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140402175: cmp     [r10+0F0h], rax
 * 000000014040217C: jz      short loc_14040219A
 * 000000014040217E: mov     rdx, [r10+1F0h]
 * 0000000140402185: bts     dword ptr [r10+74h], 8
 * 000000014040218B: dec     word ptr [r10+1E6h]
 * 0000000140402193: mov     [rdx+80h], rax
 * 000000014040219A: test    byte ptr [r10+3], 3
 * 000000014040219F: mov     [rbp+0E8h+var_68], 0
 * 00000001404021A8: jz      short loc_1404021AF
 * 00000001404021AA: call    KiSaveDebugRegisterState
 * 00000001404021AF: cld
 * 00000001404021B0: stmxcsr [rbp+0E8h+var_13C]
 * 00000001404021B4: ldmxcsr dword ptr gs:180h
 * 00000001404021BD: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001404021C1: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001404021C5: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001404021C9: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001404021CD: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001404021D1: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001404021D5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404021DC: jz      short loc_1404021EA
 * 00000001404021DE: test    [rbp+0E8h+arg_0], 1
 * 00000001404021E5: jz      short loc_1404021EA
 * 00000001404021E7: stac
 * 00000001404021EA: test    [rbp+0E8h+arg_8], 200h
 * 00000001404021F4: jz      short loc_1404021F7
 * 00000001404021F6: sti
 * 00000001404021F7: test    cs:KiCpuTracingFlags, 2
 * 0000000140402201: jz      short loc_140402216
 * 0000000140402203: mov     ecx, 1D9h
 * 0000000140402208: rdmsr
 * 000000014040220A: or      eax, 1
 * 000000014040220D: wrmsr
 * 000000014040220F: xor     edx, edx
 * 0000000140402211: jmp     loc_1404022E5
 * 0000000140402216: xor     edx, edx
 * 0000000140402218: test    [rbp+0E8h+arg_8], 100h
 * 0000000140402222: jz      loc_1404022E5
 * 0000000140402228: test    byte ptr gs:8722h, 2
 * 0000000140402231: jz      loc_1404022E5
 * 0000000140402237: test    [rbp+0E8h+arg_0], 1
 * 000000014040223E: jnz     short loc_140402297
 * 0000000140402240: mov     rax, dr7
 * 0000000140402243: test    ax, 200h
 * 0000000140402247: jz      loc_1404022E5
 * 000000014040224D: test    ax, 100h
 * 0000000140402251: jz      loc_1404022E5
 * 0000000140402257: mov     r8d, cs:KiLastBranchTOSMSR
 * 000000014040225E: or      r8d, r8d
 * 0000000140402261: jz      short loc_14040226B
 * 0000000140402263: mov     ecx, r8d
 * 0000000140402266: rdmsr
 * 0000000140402268: mov     r8d, eax
 * 000000014040226B: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 0000000140402271: add     ecx, r8d
 * 0000000140402274: rdmsr
 * 0000000140402276: mov     r9d, eax
 * 0000000140402279: shl     rdx, 20h
 * 000000014040227D: mov     ecx, cs:KiLastBranchToBaseMSR
 * 0000000140402283: or      r9, rdx
 * 0000000140402286: add     ecx, r8d
 * 0000000140402289: rdmsr
 * 000000014040228B: mov     r10d, eax
 * 000000014040228E: shl     rdx, 20h
 * 0000000140402292: or      r10, rdx
 * 0000000140402295: jmp     short loc_1404022E0
 * 0000000140402297: test    [rbp+0E8h+var_68], 200h
 * 00000001404022A0: jz      short loc_1404022E5
 * 00000001404022A2: test    [rbp+0E8h+var_68], 100h
 * 00000001404022AB: jz      short loc_1404022E5
 * 00000001404022AD: and     [rbp+0E8h+var_40], 0
 * 00000001404022B5: and     [rbp+0E8h+var_48], 0
 * 00000001404022BD: mov     rcx, cs:MmUserProbeAddress
 * 00000001404022C4: mov     r9, [rbp+0E8h+var_50]
 * 00000001404022CB: cmp     r9, rcx
 * 00000001404022CE: cmovnb  r9, rcx
 * 00000001404022D2: mov     r10, [rbp+0E8h+var_58]
 * 00000001404022D9: cmp     r10, rcx
 * 00000001404022DC: cmovnb  r10, rcx
 * 00000001404022E0: mov     edx, 2
 * 00000001404022E5: mov     ecx, 80000004h
 * 00000001404022EA: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 00000001404022F4: mov     r8, [rbp+0E8h]
 * 00000001404022FB: call    KiExceptionDispatch
 * 0000000140402300: nop
 * 0000000140402301: retn
 */
