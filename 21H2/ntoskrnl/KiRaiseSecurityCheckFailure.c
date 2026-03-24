/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x1404108C0
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x140A14D40 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x1404108C0 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x140412C80 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x1404108C0
 * Reason: Hex-Rays returned no pseudocode for 0x1404108C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404108C0: sub     qword ptr [rsp+0], 2
 * 00000001404108C5: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001404108CB: jnz     short loc_1404108D2
 * 00000001404108CD: and     dword ptr [rsp+4], 0
 * 00000001404108D2: sub     rsp, 8
 * 00000001404108D6: push    rbp
 * 00000001404108D7: sub     rsp, 158h
 * 00000001404108DE: lea     rbp, [rsp+168h+var_E8]
 * 00000001404108E6: mov     byte ptr [rbp-55h], 1
 * 00000001404108EA: mov     [rbp-50h], rax
 * 00000001404108EE: mov     [rbp-48h], rcx
 * 00000001404108F2: mov     [rbp-40h], rdx
 * 00000001404108F6: mov     [rbp-38h], r8
 * 00000001404108FA: mov     [rbp-30h], r9
 * 00000001404108FE: mov     [rbp-28h], r10
 * 0000000140410902: mov     [rbp-20h], r11
 * 0000000140410906: test    byte ptr [rbp+0F0h], 1
 * 000000014041090D: jnz     short loc_14041093E
 * 000000014041090F: lfence
 * 0000000140410912: test    word ptr gs:860h, 1
 * 000000014041091D: jnz     short loc_140410927
 * 000000014041091F: lfence
 * 0000000140410922: jmp     loc_140410B90
 * 0000000140410927: movzx   eax, word ptr gs:864h
 * 0000000140410930: mov     ecx, 48h ; 'H'
 * 0000000140410935: xor     edx, edx
 * 0000000140410937: wrmsr
 * 0000000140410939: jmp     loc_140410B90
 * 000000014041093E: test    cs:KiKvaShadow, 1
 * 0000000140410945: jnz     short loc_14041094A
 * 0000000140410947: swapgs
 * 000000014041094A: lfence
 * 000000014041094D: mov     r10, gs:188h
 * 0000000140410956: mov     rcx, gs:188h
 * 000000014041095F: mov     rcx, [rcx+220h]
 * 0000000140410966: mov     rcx, [rcx+9E0h]
 * 000000014041096D: mov     gs:858h, rcx
 * 0000000140410976: mov     cx, gs:850h
 * 000000014041097F: mov     gs:852h, cx
 * 0000000140410988: mov     cx, gs:860h
 * 0000000140410991: mov     gs:854h, cx
 * 000000014041099A: movzx   eax, word ptr gs:866h
 * 00000001404109A3: cmp     gs:864h, ax
 * 00000001404109AC: jz      short loc_1404109C0
 * 00000001404109AE: mov     gs:864h, ax
 * 00000001404109B7: mov     ecx, 48h ; 'H'
 * 00000001404109BC: xor     edx, edx
 * 00000001404109BE: wrmsr
 * 00000001404109C0: movzx   edx, word ptr gs:860h
 * 00000001404109C9: test    edx, 8
 * 00000001404109CF: jz      short loc_1404109E8
 * 00000001404109D1: mov     eax, 1
 * 00000001404109D6: xor     edx, edx
 * 00000001404109D8: mov     ecx, 49h ; 'I'
 * 00000001404109DD: wrmsr
 * 00000001404109DF: movzx   edx, word ptr gs:860h
 * 00000001404109E8: test    edx, 2
 * 00000001404109EE: jz      loc_140410B19
 * 00000001404109F4: call    loc_140410B07
 * 00000001404109F9: add     rsp, 8
 * 00000001404109FD: call    loc_140410B10
 * 0000000140410A02: add     rsp, 8
 * 0000000140410A06: call    loc_1404109F9
 * 0000000140410A0B: add     rsp, 8
 * 0000000140410A0F: call    loc_140410A02
 * 0000000140410A14: add     rsp, 8
 * 0000000140410A18: call    loc_140410A0B
 * 0000000140410A1D: add     rsp, 8
 * 0000000140410A21: call    loc_140410A14
 * 0000000140410A26: add     rsp, 8
 * 0000000140410A2A: call    loc_140410A1D
 * 0000000140410A2F: add     rsp, 8
 * 0000000140410A33: call    loc_140410A26
 * 0000000140410A38: add     rsp, 8
 * 0000000140410A3C: call    loc_140410A2F
 * 0000000140410A41: add     rsp, 8
 * 0000000140410A45: call    loc_140410A38
 * 0000000140410A4A: add     rsp, 8
 * 0000000140410A4E: call    loc_140410A41
 * 0000000140410A53: add     rsp, 8
 * 0000000140410A57: call    loc_140410A4A
 * 0000000140410A5C: add     rsp, 8
 * 0000000140410A60: call    loc_140410A53
 * 0000000140410A65: add     rsp, 8
 * 0000000140410A69: call    loc_140410A5C
 * 0000000140410A6E: add     rsp, 8
 * 0000000140410A72: call    loc_140410A65
 * 0000000140410A77: add     rsp, 8
 * 0000000140410A7B: call    loc_140410A6E
 * 0000000140410A80: add     rsp, 8
 * 0000000140410A84: call    loc_140410A77
 * 0000000140410A89: add     rsp, 8
 * 0000000140410A8D: call    loc_140410A80
 * 0000000140410A92: add     rsp, 8
 * 0000000140410A96: call    loc_140410A89
 * 0000000140410A9B: add     rsp, 8
 * 0000000140410A9F: call    loc_140410A92
 * 0000000140410AA4: add     rsp, 8
 * 0000000140410AA8: call    loc_140410A9B
 * 0000000140410AAD: add     rsp, 8
 * 0000000140410AB1: call    loc_140410AA4
 * 0000000140410AB6: add     rsp, 8
 * 0000000140410ABA: call    loc_140410AAD
 * 0000000140410ABF: add     rsp, 8
 * 0000000140410AC3: call    loc_140410AB6
 * 0000000140410AC8: add     rsp, 8
 * 0000000140410ACC: call    loc_140410ABF
 * 0000000140410AD1: add     rsp, 8
 * 0000000140410AD5: call    loc_140410AC8
 * 0000000140410ADA: add     rsp, 8
 * 0000000140410ADE: call    loc_140410AD1
 * 0000000140410AE3: add     rsp, 8
 * 0000000140410AE7: call    loc_140410ADA
 * 0000000140410AEC: add     rsp, 8
 * 0000000140410AF0: call    loc_140410AE3
 * 0000000140410AF5: add     rsp, 8
 * 0000000140410AF9: call    loc_140410AEC
 * 0000000140410AFE: add     rsp, 8
 * 0000000140410B02: call    loc_140410AF5
 * 0000000140410B07: add     rsp, 8
 * 0000000140410B0B: call    loc_140410AFE
 * 0000000140410B10: add     rsp, 8
 * 0000000140410B14: mov     eax, 0DADAh
 * 0000000140410B19: test    edx, 200h
 * 0000000140410B1F: jz      short loc_140410B26
 * 0000000140410B21: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140410B26: lfence
 * 0000000140410B29: mov     byte ptr gs:856h, 0
 * 0000000140410B32: test    byte ptr [r10+3], 80h
 * 0000000140410B37: jz      short loc_140410B7B
 * 0000000140410B39: mov     ecx, 0C0000102h
 * 0000000140410B3E: rdmsr
 * 0000000140410B40: shl     rdx, 20h
 * 0000000140410B44: or      rax, rdx
 * 0000000140410B47: cmp     rax, cs:MmUserProbeAddress
 * 0000000140410B4E: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140410B56: cmp     [r10+0F0h], rax
 * 0000000140410B5D: jz      short loc_140410B7B
 * 0000000140410B5F: mov     rdx, [r10+1F0h]
 * 0000000140410B66: bts     dword ptr [r10+74h], 8
 * 0000000140410B6C: dec     word ptr [r10+1E6h]
 * 0000000140410B74: mov     [rdx+80h], rax
 * 0000000140410B7B: test    byte ptr [r10+3], 3
 * 0000000140410B80: mov     word ptr [rbp+80h], 0
 * 0000000140410B89: jz      short loc_140410B90
 * 0000000140410B8B: call    KiSaveDebugRegisterState
 * 0000000140410B90: cld
 * 0000000140410B91: stmxcsr dword ptr [rbp-54h]
 * 0000000140410B95: ldmxcsr dword ptr gs:180h
 * 0000000140410B9E: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140410BA2: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140410BA6: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140410BAA: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140410BAE: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140410BB2: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140410BB6: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140410BBD: jz      short loc_140410BCB
 * 0000000140410BBF: test    byte ptr [rbp+0F0h], 1
 * 0000000140410BC6: jz      short loc_140410BCB
 * 0000000140410BC8: stac
 * 0000000140410BCB: test    dword ptr [rbp+0F8h], 200h
 * 0000000140410BD5: jz      short loc_140410BD8
 * 0000000140410BD7: sti
 * 0000000140410BD8: mov     r9, [rbp-48h]
 * 0000000140410BDC: mov     ecx, 0C0000409h
 * 0000000140410BE1: mov     edx, 1
 * 0000000140410BE6: mov     r8, [rbp+0E8h]
 * 0000000140410BED: call    KiFastFailDispatch
 * 0000000140410BF2: nop
 * 0000000140410BF3: retn
 */
