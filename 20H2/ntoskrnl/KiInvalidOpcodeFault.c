/*
 * XREFs of KiInvalidOpcodeFault @ 0x140409880
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x140A17440 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x140409880 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x140410A40 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140410EC0 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInvalidOpcodeFault @ 0x140409880
 * Reason: Hex-Rays returned no pseudocode for 0x140409880
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140409880: sub     rsp, 8
 * 0000000140409884: push    rbp
 * 0000000140409885: sub     rsp, 158h
 * 000000014040988C: lea     rbp, [rsp+80h]
 * 0000000140409894: mov     [rbp+0E8h+var_13D], 1
 * 0000000140409898: mov     [rbp+0E8h+var_138], rax
 * 000000014040989C: mov     [rbp+0E8h+var_130], rcx
 * 00000001404098A0: mov     [rbp+0E8h+var_128], rdx
 * 00000001404098A4: mov     [rbp+0E8h+var_120], r8
 * 00000001404098A8: mov     [rbp+0E8h+var_118], r9
 * 00000001404098AC: mov     [rbp+0E8h+var_110], r10
 * 00000001404098B0: mov     [rbp+0E8h+var_108], r11
 * 00000001404098B4: test    [rbp+0E8h+arg_0], 1
 * 00000001404098BB: jnz     short loc_1404098EA
 * 00000001404098BD: lfence
 * 00000001404098C0: test    byte ptr gs:278h, 1
 * 00000001404098C9: jnz     short loc_1404098D3
 * 00000001404098CB: lfence
 * 00000001404098CE: jmp     loc_140409B29
 * 00000001404098D3: movzx   eax, byte ptr gs:27Ah
 * 00000001404098DC: mov     ecx, 48h ; 'H'
 * 00000001404098E1: xor     edx, edx
 * 00000001404098E3: wrmsr
 * 00000001404098E5: jmp     loc_140409B29
 * 00000001404098EA: test    cs:KiKvaShadow, 1
 * 00000001404098F1: jnz     short loc_1404098F6
 * 00000001404098F3: swapgs
 * 00000001404098F6: lfence
 * 00000001404098F9: mov     r10, gs:188h
 * 0000000140409902: mov     rcx, gs:188h
 * 000000014040990B: mov     rcx, [rcx+220h]
 * 0000000140409912: mov     rcx, [rcx+9E0h]
 * 0000000140409919: mov     gs:270h, rcx
 * 0000000140409922: mov     cl, gs:850h
 * 000000014040992A: mov     gs:851h, cl
 * 0000000140409932: mov     cl, gs:278h
 * 000000014040993A: mov     gs:852h, cl
 * 0000000140409942: movzx   eax, byte ptr gs:27Bh
 * 000000014040994B: cmp     gs:27Ah, al
 * 0000000140409953: jz      short loc_140409966
 * 0000000140409955: mov     gs:27Ah, al
 * 000000014040995D: mov     ecx, 48h ; 'H'
 * 0000000140409962: xor     edx, edx
 * 0000000140409964: wrmsr
 * 0000000140409966: movzx   edx, byte ptr gs:278h
 * 000000014040996F: test    edx, 8
 * 0000000140409975: jz      short loc_14040998E
 * 0000000140409977: mov     eax, 1
 * 000000014040997C: xor     edx, edx
 * 000000014040997E: mov     ecx, 49h ; 'I'
 * 0000000140409983: wrmsr
 * 0000000140409985: movzx   edx, byte ptr gs:278h
 * 000000014040998E: test    edx, 2
 * 0000000140409994: jz      loc_140409ABF
 * 000000014040999A: call    loc_140409AAD
 * 000000014040999F: add     rsp, 8
 * 00000001404099A3: call    loc_140409AB6
 * 00000001404099A8: add     rsp, 8
 * 00000001404099AC: call    loc_14040999F
 * 00000001404099B1: add     rsp, 8
 * 00000001404099B5: call    loc_1404099A8
 * 00000001404099BA: add     rsp, 8
 * 00000001404099BE: call    loc_1404099B1
 * 00000001404099C3: add     rsp, 8
 * 00000001404099C7: call    loc_1404099BA
 * 00000001404099CC: add     rsp, 8
 * 00000001404099D0: call    loc_1404099C3
 * 00000001404099D5: add     rsp, 8
 * 00000001404099D9: call    loc_1404099CC
 * 00000001404099DE: add     rsp, 8
 * 00000001404099E2: call    loc_1404099D5
 * 00000001404099E7: add     rsp, 8
 * 00000001404099EB: call    loc_1404099DE
 * 00000001404099F0: add     rsp, 8
 * 00000001404099F4: call    loc_1404099E7
 * 00000001404099F9: add     rsp, 8
 * 00000001404099FD: call    loc_1404099F0
 * 0000000140409A02: add     rsp, 8
 * 0000000140409A06: call    loc_1404099F9
 * 0000000140409A0B: add     rsp, 8
 * 0000000140409A0F: call    loc_140409A02
 * 0000000140409A14: add     rsp, 8
 * 0000000140409A18: call    loc_140409A0B
 * 0000000140409A1D: add     rsp, 8
 * 0000000140409A21: call    loc_140409A14
 * 0000000140409A26: add     rsp, 8
 * 0000000140409A2A: call    loc_140409A1D
 * 0000000140409A2F: add     rsp, 8
 * 0000000140409A33: call    loc_140409A26
 * 0000000140409A38: add     rsp, 8
 * 0000000140409A3C: call    loc_140409A2F
 * 0000000140409A41: add     rsp, 8
 * 0000000140409A45: call    loc_140409A38
 * 0000000140409A4A: add     rsp, 8
 * 0000000140409A4E: call    loc_140409A41
 * 0000000140409A53: add     rsp, 8
 * 0000000140409A57: call    loc_140409A4A
 * 0000000140409A5C: add     rsp, 8
 * 0000000140409A60: call    loc_140409A53
 * 0000000140409A65: add     rsp, 8
 * 0000000140409A69: call    loc_140409A5C
 * 0000000140409A6E: add     rsp, 8
 * 0000000140409A72: call    loc_140409A65
 * 0000000140409A77: add     rsp, 8
 * 0000000140409A7B: call    loc_140409A6E
 * 0000000140409A80: add     rsp, 8
 * 0000000140409A84: call    loc_140409A77
 * 0000000140409A89: add     rsp, 8
 * 0000000140409A8D: call    loc_140409A80
 * 0000000140409A92: add     rsp, 8
 * 0000000140409A96: call    loc_140409A89
 * 0000000140409A9B: add     rsp, 8
 * 0000000140409A9F: call    loc_140409A92
 * 0000000140409AA4: add     rsp, 8
 * 0000000140409AA8: call    loc_140409A9B
 * 0000000140409AAD: add     rsp, 8
 * 0000000140409AB1: call    loc_140409AA4
 * 0000000140409AB6: add     rsp, 8
 * 0000000140409ABA: mov     eax, 0DADAh
 * 0000000140409ABF: lfence
 * 0000000140409AC2: mov     byte ptr gs:853h, 0
 * 0000000140409ACB: test    byte ptr [r10+3], 80h
 * 0000000140409AD0: jz      short loc_140409B14
 * 0000000140409AD2: mov     ecx, 0C0000102h
 * 0000000140409AD7: rdmsr
 * 0000000140409AD9: shl     rdx, 20h
 * 0000000140409ADD: or      rax, rdx
 * 0000000140409AE0: cmp     rax, cs:MmUserProbeAddress
 * 0000000140409AE7: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140409AEF: cmp     [r10+0F0h], rax
 * 0000000140409AF6: jz      short loc_140409B14
 * 0000000140409AF8: mov     rdx, [r10+1F0h]
 * 0000000140409AFF: bts     dword ptr [r10+74h], 8
 * 0000000140409B05: dec     word ptr [r10+1E6h]
 * 0000000140409B0D: mov     [rdx+80h], rax
 * 0000000140409B14: test    byte ptr [r10+3], 3
 * 0000000140409B19: mov     [rbp+0E8h+var_68], 0
 * 0000000140409B22: jz      short loc_140409B29
 * 0000000140409B24: call    KiSaveDebugRegisterState
 * 0000000140409B29: cld
 * 0000000140409B2A: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140409B2E: ldmxcsr dword ptr gs:180h
 * 0000000140409B37: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140409B3B: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140409B3F: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140409B43: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140409B47: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140409B4B: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140409B4F: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140409B56: jz      short loc_140409B64
 * 0000000140409B58: test    [rbp+0E8h+arg_0], 1
 * 0000000140409B5F: jz      short loc_140409B64
 * 0000000140409B61: stac
 * 0000000140409B64: test    [rbp+0E8h+arg_8], 200h
 * 0000000140409B6E: jz      short loc_140409B71
 * 0000000140409B70: sti
 * 0000000140409B71: mov     r9, gs:188h
 * 0000000140409B7A: bt      dword ptr [r9+74h], 8
 * 0000000140409B80: jnb     short loc_140409B90
 * 0000000140409B82: test    [rbp+0E8h+arg_0], 1
 * 0000000140409B89: jz      short loc_140409B90
 * 0000000140409B8B: call    KiUmsTrapEntry
 * 0000000140409B90: mov     ecx, 10000002h
 * 0000000140409B95: xor     edx, edx
 * 0000000140409B97: mov     r8, [rbp+0E8h]
 * 0000000140409B9E: call    KiExceptionDispatch
 * 0000000140409BA3: nop
 * 0000000140409BA4: cli
 * 0000000140409BA5: test    [rbp+0E8h+arg_0], 1
 * 0000000140409BAC: jz      loc_140409E32
 * 0000000140409BB2: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140409BB9: jz      short loc_140409BBE
 * 0000000140409BBB: stac
 * 0000000140409BBE: mov     rcx, gs:188h
 * 0000000140409BC7: test    byte ptr [rcx+0C2h], 3
 * 0000000140409BCE: jz      short loc_140409BEB
 * 0000000140409BD0: mov     ecx, 1
 * 0000000140409BD5: mov     cr8, rcx
 * 0000000140409BD9: sti
 * 0000000140409BDA: call    KiInitiateUserApc
 * 0000000140409BDF: cli
 * 0000000140409BE0: mov     ecx, 0
 * 0000000140409BE5: mov     cr8, rcx
 * 0000000140409BE9: jmp     short loc_140409BBE
 * 0000000140409BEB: test    byte ptr gs:27Eh, 2
 * 0000000140409BF4: jz      short loc_140409BFD
 * 0000000140409BF6: xor     ecx, ecx
 * 0000000140409BF8: call    KiUpdateStibpPairing
 * 0000000140409BFD: mov     rcx, gs:188h
 * 0000000140409C06: test    dword ptr [rcx], 8000000h
 * 0000000140409C0C: jz      short loc_140409C13
 * 0000000140409C0E: call    KiRestoreSetContextState
 * 0000000140409C13: mov     rcx, gs:188h
 * 0000000140409C1C: test    dword ptr [rcx], 40010000h
 * 0000000140409C22: jz      short loc_140409C49
 * 0000000140409C24: test    byte ptr [rcx+2], 1
 * 0000000140409C28: jz      short loc_140409C38
 * 0000000140409C2A: call    KiCopyCounters
 * 0000000140409C2F: mov     rcx, gs:188h
 * 0000000140409C38: test    byte ptr [rcx+3], 40h
 * 0000000140409C3C: jz      short loc_140409C49
 * 0000000140409C3E: lea     rsp, [rbp-80h]
 * 0000000140409C42: mov     cl, 1
 * 0000000140409C44: call    KiUmsExit
 * 0000000140409C49: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140409C4D: cmp     [rbp+0E8h+var_68], 0
 * 0000000140409C55: jz      short loc_140409C5C
 * 0000000140409C57: call    KiRestoreDebugRegisterState
 * 0000000140409C5C: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140409C60: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140409C64: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140409C68: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140409C6C: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140409C70: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140409C74: mov     r11, [rbp+0E8h+var_108]
 * 0000000140409C78: mov     r10, [rbp+0E8h+var_110]
 * 0000000140409C7C: mov     r9, [rbp+0E8h+var_118]
 * 0000000140409C80: mov     r8, [rbp+0E8h+var_120]
 * 0000000140409C84: mov     byte ptr gs:853h, 0
 * 0000000140409C8D: movzx   eax, byte ptr gs:27Dh
 * 0000000140409C96: cmp     gs:27Ah, al
 * 0000000140409C9E: jz      short loc_140409CB1
 * 0000000140409CA0: mov     gs:27Ah, al
 * 0000000140409CA8: mov     ecx, 48h ; 'H'
 * 0000000140409CAD: xor     edx, edx
 * 0000000140409CAF: wrmsr
 * 0000000140409CB1: btr     word ptr gs:278h, 2
 * 0000000140409CBC: jnb     short loc_140409CCC
 * 0000000140409CBE: mov     eax, 1
 * 0000000140409CC3: xor     edx, edx
 * 0000000140409CC5: mov     ecx, 49h ; 'I'
 * 0000000140409CCA: wrmsr
 * 0000000140409CCC: btr     word ptr gs:278h, 5
 * 0000000140409CD7: jnb     loc_140409E02
 * 0000000140409CDD: call    loc_140409DF0
 * 0000000140409CE2: add     rsp, 8
 * 0000000140409CE6: call    loc_140409DF9
 * 0000000140409CEB: add     rsp, 8
 * 0000000140409CEF: call    loc_140409CE2
 * 0000000140409CF4: add     rsp, 8
 * 0000000140409CF8: call    loc_140409CEB
 * 0000000140409CFD: add     rsp, 8
 * 0000000140409D01: call    loc_140409CF4
 * 0000000140409D06: add     rsp, 8
 * 0000000140409D0A: call    loc_140409CFD
 * 0000000140409D0F: add     rsp, 8
 * 0000000140409D13: call    loc_140409D06
 * 0000000140409D18: add     rsp, 8
 * 0000000140409D1C: call    loc_140409D0F
 * 0000000140409D21: add     rsp, 8
 * 0000000140409D25: call    loc_140409D18
 * 0000000140409D2A: add     rsp, 8
 * 0000000140409D2E: call    loc_140409D21
 * 0000000140409D33: add     rsp, 8
 * 0000000140409D37: call    loc_140409D2A
 * 0000000140409D3C: add     rsp, 8
 * 0000000140409D40: call    loc_140409D33
 * 0000000140409D45: add     rsp, 8
 * 0000000140409D49: call    loc_140409D3C
 * 0000000140409D4E: add     rsp, 8
 * 0000000140409D52: call    loc_140409D45
 * 0000000140409D57: add     rsp, 8
 * 0000000140409D5B: call    loc_140409D4E
 * 0000000140409D60: add     rsp, 8
 * 0000000140409D64: call    loc_140409D57
 * 0000000140409D69: add     rsp, 8
 * 0000000140409D6D: call    loc_140409D60
 * 0000000140409D72: add     rsp, 8
 * 0000000140409D76: call    loc_140409D69
 * 0000000140409D7B: add     rsp, 8
 * 0000000140409D7F: call    loc_140409D72
 * 0000000140409D84: add     rsp, 8
 * 0000000140409D88: call    loc_140409D7B
 * 0000000140409D8D: add     rsp, 8
 * 0000000140409D91: call    loc_140409D84
 * 0000000140409D96: add     rsp, 8
 * 0000000140409D9A: call    loc_140409D8D
 * 0000000140409D9F: add     rsp, 8
 * 0000000140409DA3: call    loc_140409D96
 * 0000000140409DA8: add     rsp, 8
 * 0000000140409DAC: call    loc_140409D9F
 * 0000000140409DB1: add     rsp, 8
 * 0000000140409DB5: call    loc_140409DA8
 * 0000000140409DBA: add     rsp, 8
 * 0000000140409DBE: call    loc_140409DB1
 * 0000000140409DC3: add     rsp, 8
 * 0000000140409DC7: call    loc_140409DBA
 * 0000000140409DCC: add     rsp, 8
 * 0000000140409DD0: call    loc_140409DC3
 * 0000000140409DD5: add     rsp, 8
 * 0000000140409DD9: call    loc_140409DCC
 * 0000000140409DDE: add     rsp, 8
 * 0000000140409DE2: call    loc_140409DD5
 * 0000000140409DE7: add     rsp, 8
 * 0000000140409DEB: call    loc_140409DDE
 * 0000000140409DF0: add     rsp, 8
 * 0000000140409DF4: call    loc_140409DE7
 * 0000000140409DF9: add     rsp, 8
 * 0000000140409DFD: mov     eax, 0DADAh
 * 0000000140409E02: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140409E06: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140409E0A: mov     rax, [rbp+0E8h+var_138]
 * 0000000140409E0E: mov     rsp, rbp
 * 0000000140409E11: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140409E18: add     rsp, 0E8h
 * 0000000140409E1F: test    cs:KiKvaShadow, 1
 * 0000000140409E26: jz      short loc_140409E2D
 * 0000000140409E28: jmp     KiKernelExit
 * 0000000140409E2D: swapgs
 * 0000000140409E30: iretq
 * 0000000140409E32: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140409E36: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140409E3A: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140409E3E: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140409E42: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140409E46: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140409E4A: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140409E4E: mov     r11, [rbp+0E8h+var_108]
 * 0000000140409E52: mov     r10, [rbp+0E8h+var_110]
 * 0000000140409E56: mov     r9, [rbp+0E8h+var_118]
 * 0000000140409E5A: mov     r8, [rbp+0E8h+var_120]
 * 0000000140409E5E: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140409E62: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140409E66: mov     rax, [rbp+0E8h+var_138]
 * 0000000140409E6A: mov     rsp, rbp
 * 0000000140409E6D: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140409E74: add     rsp, 0E8h
 * 0000000140409E7B: iretq
 */
