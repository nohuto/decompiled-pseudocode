/*
 * XREFs of KiSystemCall32 @ 0x140406E00
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x140406E00 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x140407D80 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x140406E00
 * Reason: Hex-Rays returned no pseudocode for 0x140406E00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140406E00: swapgs
 * 0000000140406E03: mov     gs:10h, rsp
 * 0000000140406E0C: mov     rsp, gs:1A8h
 * 0000000140406E15: push    2Bh ; '+'
 * 0000000140406E17: push    qword ptr gs:10h
 * 0000000140406E1F: push    r11
 * 0000000140406E21: push    23h ; '#'
 * 0000000140406E23: push    rcx
 * 0000000140406E24: swapgs
 * 0000000140406E27: lfence
 * 0000000140406E2A: sub     rsp, 8
 * 0000000140406E2E: push    rbp
 * 0000000140406E2F: sub     rsp, 158h
 * 0000000140406E36: lea     rbp, [rsp+190h+var_110]
 * 0000000140406E3E: mov     byte ptr [rbp-55h], 1
 * 0000000140406E42: mov     [rbp-50h], rax
 * 0000000140406E46: mov     [rbp-48h], rcx
 * 0000000140406E4A: mov     [rbp-40h], rdx
 * 0000000140406E4E: mov     [rbp-38h], r8
 * 0000000140406E52: mov     [rbp-30h], r9
 * 0000000140406E56: mov     [rbp-28h], r10
 * 0000000140406E5A: mov     [rbp-20h], r11
 * 0000000140406E5E: test    byte ptr [rbp+0F0h], 1
 * 0000000140406E65: jnz     short loc_140406E94
 * 0000000140406E67: lfence
 * 0000000140406E6A: test    byte ptr gs:278h, 1
 * 0000000140406E73: jnz     short loc_140406E7D
 * 0000000140406E75: lfence
 * 0000000140406E78: jmp     loc_1404070D9
 * 0000000140406E7D: movzx   eax, byte ptr gs:27Ah
 * 0000000140406E86: mov     ecx, 48h ; 'H'
 * 0000000140406E8B: xor     edx, edx
 * 0000000140406E8D: wrmsr
 * 0000000140406E8F: jmp     loc_1404070D9
 * 0000000140406E94: test    cs:KiKvaShadow, 1
 * 0000000140406E9B: jnz     short loc_140406EA0
 * 0000000140406E9D: swapgs
 * 0000000140406EA0: lfence
 * 0000000140406EA3: mov     r10, gs:188h
 * 0000000140406EAC: mov     rcx, gs:188h
 * 0000000140406EB5: mov     rcx, [rcx+220h]
 * 0000000140406EBC: mov     rcx, [rcx+9E0h]
 * 0000000140406EC3: mov     gs:270h, rcx
 * 0000000140406ECC: mov     cl, gs:850h
 * 0000000140406ED4: mov     gs:851h, cl
 * 0000000140406EDC: mov     cl, gs:278h
 * 0000000140406EE4: mov     gs:852h, cl
 * 0000000140406EEC: movzx   eax, byte ptr gs:27Bh
 * 0000000140406EF5: cmp     gs:27Ah, al
 * 0000000140406EFD: jz      short loc_140406F10
 * 0000000140406EFF: mov     gs:27Ah, al
 * 0000000140406F07: mov     ecx, 48h ; 'H'
 * 0000000140406F0C: xor     edx, edx
 * 0000000140406F0E: wrmsr
 * 0000000140406F10: movzx   edx, byte ptr gs:278h
 * 0000000140406F19: test    edx, 8
 * 0000000140406F1F: jz      short loc_140406F34
 * 0000000140406F21: mov     eax, 1
 * 0000000140406F26: xor     edx, edx
 * 0000000140406F28: mov     ecx, 49h ; 'I'
 * 0000000140406F2D: wrmsr
 * 0000000140406F2F: jmp     loc_140407072
 * 0000000140406F34: test    edx, 2
 * 0000000140406F3A: jz      loc_14040706F
 * 0000000140406F40: test    byte ptr gs:279h, 4
 * 0000000140406F49: jnz     loc_14040706F
 * 0000000140406F4F: call    loc_140407062
 * 0000000140406F54: add     rsp, 8
 * 0000000140406F58: call    loc_14040706B
 * 0000000140406F5D: add     rsp, 8
 * 0000000140406F61: call    loc_140406F54
 * 0000000140406F66: add     rsp, 8
 * 0000000140406F6A: call    loc_140406F5D
 * 0000000140406F6F: add     rsp, 8
 * 0000000140406F73: call    loc_140406F66
 * 0000000140406F78: add     rsp, 8
 * 0000000140406F7C: call    loc_140406F6F
 * 0000000140406F81: add     rsp, 8
 * 0000000140406F85: call    loc_140406F78
 * 0000000140406F8A: add     rsp, 8
 * 0000000140406F8E: call    loc_140406F81
 * 0000000140406F93: add     rsp, 8
 * 0000000140406F97: call    loc_140406F8A
 * 0000000140406F9C: add     rsp, 8
 * 0000000140406FA0: call    loc_140406F93
 * 0000000140406FA5: add     rsp, 8
 * 0000000140406FA9: call    loc_140406F9C
 * 0000000140406FAE: add     rsp, 8
 * 0000000140406FB2: call    loc_140406FA5
 * 0000000140406FB7: add     rsp, 8
 * 0000000140406FBB: call    loc_140406FAE
 * 0000000140406FC0: add     rsp, 8
 * 0000000140406FC4: call    loc_140406FB7
 * 0000000140406FC9: add     rsp, 8
 * 0000000140406FCD: call    loc_140406FC0
 * 0000000140406FD2: add     rsp, 8
 * 0000000140406FD6: call    loc_140406FC9
 * 0000000140406FDB: add     rsp, 8
 * 0000000140406FDF: call    loc_140406FD2
 * 0000000140406FE4: add     rsp, 8
 * 0000000140406FE8: call    loc_140406FDB
 * 0000000140406FED: add     rsp, 8
 * 0000000140406FF1: call    loc_140406FE4
 * 0000000140406FF6: add     rsp, 8
 * 0000000140406FFA: call    loc_140406FED
 * 0000000140406FFF: add     rsp, 8
 * 0000000140407003: call    loc_140406FF6
 * 0000000140407008: add     rsp, 8
 * 000000014040700C: call    loc_140406FFF
 * 0000000140407011: add     rsp, 8
 * 0000000140407015: call    loc_140407008
 * 000000014040701A: add     rsp, 8
 * 000000014040701E: call    loc_140407011
 * 0000000140407023: add     rsp, 8
 * 0000000140407027: call    loc_14040701A
 * 000000014040702C: add     rsp, 8
 * 0000000140407030: call    loc_140407023
 * 0000000140407035: add     rsp, 8
 * 0000000140407039: call    loc_14040702C
 * 000000014040703E: add     rsp, 8
 * 0000000140407042: call    loc_140407035
 * 0000000140407047: add     rsp, 8
 * 000000014040704B: call    loc_14040703E
 * 0000000140407050: add     rsp, 8
 * 0000000140407054: call    loc_140407047
 * 0000000140407059: add     rsp, 8
 * 000000014040705D: call    loc_140407050
 * 0000000140407062: add     rsp, 8
 * 0000000140407066: call    loc_140407059
 * 000000014040706B: add     rsp, 8
 * 000000014040706F: lfence
 * 0000000140407072: mov     byte ptr gs:853h, 0
 * 000000014040707B: test    byte ptr [r10+3], 80h
 * 0000000140407080: jz      short loc_1404070C4
 * 0000000140407082: mov     ecx, 0C0000102h
 * 0000000140407087: rdmsr
 * 0000000140407089: shl     rdx, 20h
 * 000000014040708D: or      rax, rdx
 * 0000000140407090: cmp     rax, cs:MmUserProbeAddress
 * 0000000140407097: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040709F: cmp     [r10+0F0h], rax
 * 00000001404070A6: jz      short loc_1404070C4
 * 00000001404070A8: mov     rdx, [r10+1F0h]
 * 00000001404070AF: bts     dword ptr [r10+74h], 8
 * 00000001404070B5: dec     word ptr [r10+1E6h]
 * 00000001404070BD: mov     [rdx+80h], rax
 * 00000001404070C4: test    byte ptr [r10+3], 3
 * 00000001404070C9: mov     word ptr [rbp+80h], 0
 * 00000001404070D2: jz      short loc_1404070D9
 * 00000001404070D4: call    KiSaveDebugRegisterState
 * 00000001404070D9: cld
 * 00000001404070DA: stmxcsr dword ptr [rbp-54h]
 * 00000001404070DE: ldmxcsr dword ptr gs:180h
 * 00000001404070E7: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404070EB: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404070EF: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404070F3: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001404070F7: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001404070FB: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001404070FF: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140407106: jz      short loc_140407114
 * 0000000140407108: test    byte ptr [rbp+0F0h], 1
 * 000000014040710F: jz      short loc_140407114
 * 0000000140407111: stac
 * 0000000140407114: sub     qword ptr [rbp+0E8h], 2
 * 000000014040711C: and     dword ptr [rbp+0ECh], 0
 * 0000000140407123: sti
 * 0000000140407124: mov     ecx, 0C000001Dh
 * 0000000140407129: xor     edx, edx
 * 000000014040712B: mov     r8, [rbp+0E8h]
 * 0000000140407132: call    KiExceptionDispatch
 * 0000000140407137: nop
 * 0000000140407138: retn
 */
