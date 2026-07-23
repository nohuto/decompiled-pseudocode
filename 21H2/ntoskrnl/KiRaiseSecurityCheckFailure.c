/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x1404109C0
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x140A15D40 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x1404109C0 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x140412D80 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x1404109C0
 * Reason: Hex-Rays returned no pseudocode for 0x1404109C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404109C0: sub     qword ptr [rsp+0], 2
 * 00000001404109C5: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001404109CB: jnz     short loc_1404109D2
 * 00000001404109CD: and     dword ptr [rsp+4], 0
 * 00000001404109D2: sub     rsp, 8
 * 00000001404109D6: push    rbp
 * 00000001404109D7: sub     rsp, 158h
 * 00000001404109DE: lea     rbp, [rsp+168h+var_E8]
 * 00000001404109E6: mov     byte ptr [rbp-55h], 1
 * 00000001404109EA: mov     [rbp-50h], rax
 * 00000001404109EE: mov     [rbp-48h], rcx
 * 00000001404109F2: mov     [rbp-40h], rdx
 * 00000001404109F6: mov     [rbp-38h], r8
 * 00000001404109FA: mov     [rbp-30h], r9
 * 00000001404109FE: mov     [rbp-28h], r10
 * 0000000140410A02: mov     [rbp-20h], r11
 * 0000000140410A06: test    byte ptr [rbp+0F0h], 1
 * 0000000140410A0D: jnz     short loc_140410A3E
 * 0000000140410A0F: lfence
 * 0000000140410A12: test    word ptr gs:860h, 1
 * 0000000140410A1D: jnz     short loc_140410A27
 * 0000000140410A1F: lfence
 * 0000000140410A22: jmp     loc_140410C90
 * 0000000140410A27: movzx   eax, word ptr gs:864h
 * 0000000140410A30: mov     ecx, 48h ; 'H'
 * 0000000140410A35: xor     edx, edx
 * 0000000140410A37: wrmsr
 * 0000000140410A39: jmp     loc_140410C90
 * 0000000140410A3E: test    cs:KiKvaShadow, 1
 * 0000000140410A45: jnz     short loc_140410A4A
 * 0000000140410A47: swapgs
 * 0000000140410A4A: lfence
 * 0000000140410A4D: mov     r10, gs:188h
 * 0000000140410A56: mov     rcx, gs:188h
 * 0000000140410A5F: mov     rcx, [rcx+220h]
 * 0000000140410A66: mov     rcx, [rcx+9E0h]
 * 0000000140410A6D: mov     gs:858h, rcx
 * 0000000140410A76: mov     cx, gs:850h
 * 0000000140410A7F: mov     gs:852h, cx
 * 0000000140410A88: mov     cx, gs:860h
 * 0000000140410A91: mov     gs:854h, cx
 * 0000000140410A9A: movzx   eax, word ptr gs:866h
 * 0000000140410AA3: cmp     gs:864h, ax
 * 0000000140410AAC: jz      short loc_140410AC0
 * 0000000140410AAE: mov     gs:864h, ax
 * 0000000140410AB7: mov     ecx, 48h ; 'H'
 * 0000000140410ABC: xor     edx, edx
 * 0000000140410ABE: wrmsr
 * 0000000140410AC0: movzx   edx, word ptr gs:860h
 * 0000000140410AC9: test    edx, 8
 * 0000000140410ACF: jz      short loc_140410AE8
 * 0000000140410AD1: mov     eax, 1
 * 0000000140410AD6: xor     edx, edx
 * 0000000140410AD8: mov     ecx, 49h ; 'I'
 * 0000000140410ADD: wrmsr
 * 0000000140410ADF: movzx   edx, word ptr gs:860h
 * 0000000140410AE8: test    edx, 2
 * 0000000140410AEE: jz      loc_140410C19
 * 0000000140410AF4: call    loc_140410C07
 * 0000000140410AF9: add     rsp, 8
 * 0000000140410AFD: call    loc_140410C10
 * 0000000140410B02: add     rsp, 8
 * 0000000140410B06: call    loc_140410AF9
 * 0000000140410B0B: add     rsp, 8
 * 0000000140410B0F: call    loc_140410B02
 * 0000000140410B14: add     rsp, 8
 * 0000000140410B18: call    loc_140410B0B
 * 0000000140410B1D: add     rsp, 8
 * 0000000140410B21: call    loc_140410B14
 * 0000000140410B26: add     rsp, 8
 * 0000000140410B2A: call    loc_140410B1D
 * 0000000140410B2F: add     rsp, 8
 * 0000000140410B33: call    loc_140410B26
 * 0000000140410B38: add     rsp, 8
 * 0000000140410B3C: call    loc_140410B2F
 * 0000000140410B41: add     rsp, 8
 * 0000000140410B45: call    loc_140410B38
 * 0000000140410B4A: add     rsp, 8
 * 0000000140410B4E: call    loc_140410B41
 * 0000000140410B53: add     rsp, 8
 * 0000000140410B57: call    loc_140410B4A
 * 0000000140410B5C: add     rsp, 8
 * 0000000140410B60: call    loc_140410B53
 * 0000000140410B65: add     rsp, 8
 * 0000000140410B69: call    loc_140410B5C
 * 0000000140410B6E: add     rsp, 8
 * 0000000140410B72: call    loc_140410B65
 * 0000000140410B77: add     rsp, 8
 * 0000000140410B7B: call    loc_140410B6E
 * 0000000140410B80: add     rsp, 8
 * 0000000140410B84: call    loc_140410B77
 * 0000000140410B89: add     rsp, 8
 * 0000000140410B8D: call    loc_140410B80
 * 0000000140410B92: add     rsp, 8
 * 0000000140410B96: call    loc_140410B89
 * 0000000140410B9B: add     rsp, 8
 * 0000000140410B9F: call    loc_140410B92
 * 0000000140410BA4: add     rsp, 8
 * 0000000140410BA8: call    loc_140410B9B
 * 0000000140410BAD: add     rsp, 8
 * 0000000140410BB1: call    loc_140410BA4
 * 0000000140410BB6: add     rsp, 8
 * 0000000140410BBA: call    loc_140410BAD
 * 0000000140410BBF: add     rsp, 8
 * 0000000140410BC3: call    loc_140410BB6
 * 0000000140410BC8: add     rsp, 8
 * 0000000140410BCC: call    loc_140410BBF
 * 0000000140410BD1: add     rsp, 8
 * 0000000140410BD5: call    loc_140410BC8
 * 0000000140410BDA: add     rsp, 8
 * 0000000140410BDE: call    loc_140410BD1
 * 0000000140410BE3: add     rsp, 8
 * 0000000140410BE7: call    loc_140410BDA
 * 0000000140410BEC: add     rsp, 8
 * 0000000140410BF0: call    loc_140410BE3
 * 0000000140410BF5: add     rsp, 8
 * 0000000140410BF9: call    loc_140410BEC
 * 0000000140410BFE: add     rsp, 8
 * 0000000140410C02: call    loc_140410BF5
 * 0000000140410C07: add     rsp, 8
 * 0000000140410C0B: call    loc_140410BFE
 * 0000000140410C10: add     rsp, 8
 * 0000000140410C14: mov     eax, 0DADAh
 * 0000000140410C19: test    edx, 200h
 * 0000000140410C1F: jz      short loc_140410C26
 * 0000000140410C21: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140410C26: lfence
 * 0000000140410C29: mov     byte ptr gs:856h, 0
 * 0000000140410C32: test    byte ptr [r10+3], 80h
 * 0000000140410C37: jz      short loc_140410C7B
 * 0000000140410C39: mov     ecx, 0C0000102h
 * 0000000140410C3E: rdmsr
 * 0000000140410C40: shl     rdx, 20h
 * 0000000140410C44: or      rax, rdx
 * 0000000140410C47: cmp     rax, cs:MmUserProbeAddress
 * 0000000140410C4E: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140410C56: cmp     [r10+0F0h], rax
 * 0000000140410C5D: jz      short loc_140410C7B
 * 0000000140410C5F: mov     rdx, [r10+1F0h]
 * 0000000140410C66: bts     dword ptr [r10+74h], 8
 * 0000000140410C6C: dec     word ptr [r10+1E6h]
 * 0000000140410C74: mov     [rdx+80h], rax
 * 0000000140410C7B: test    byte ptr [r10+3], 3
 * 0000000140410C80: mov     word ptr [rbp+80h], 0
 * 0000000140410C89: jz      short loc_140410C90
 * 0000000140410C8B: call    KiSaveDebugRegisterState
 * 0000000140410C90: cld
 * 0000000140410C91: stmxcsr dword ptr [rbp-54h]
 * 0000000140410C95: ldmxcsr dword ptr gs:180h
 * 0000000140410C9E: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140410CA2: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140410CA6: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140410CAA: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140410CAE: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140410CB2: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140410CB6: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140410CBD: jz      short loc_140410CCB
 * 0000000140410CBF: test    byte ptr [rbp+0F0h], 1
 * 0000000140410CC6: jz      short loc_140410CCB
 * 0000000140410CC8: stac
 * 0000000140410CCB: test    dword ptr [rbp+0F8h], 200h
 * 0000000140410CD5: jz      short loc_140410CD8
 * 0000000140410CD7: sti
 * 0000000140410CD8: mov     r9, [rbp-48h]
 * 0000000140410CDC: mov     ecx, 0C0000409h
 * 0000000140410CE1: mov     edx, 1
 * 0000000140410CE6: mov     r8, [rbp+0E8h]
 * 0000000140410CED: call    KiFastFailDispatch
 * 0000000140410CF2: nop
 * 0000000140410CF3: retn
 */
