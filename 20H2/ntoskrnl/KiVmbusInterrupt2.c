/*
 * XREFs of KiVmbusInterrupt2 @ 0x140401A00
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140A18140 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1402DF2E0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt2 @ 0x140401A00 (KiVmbusInterrupt2.c)
 *     KeWakeProcessor @ 0x140517EE0 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x140401A00
 * Reason: Hex-Rays returned no pseudocode for 0x140401A00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140401A00: push    3
 * 0000000140401A02: push    rbp
 * 0000000140401A03: push    rsi
 * 0000000140401A04: sub     rsp, 150h
 * 0000000140401A0B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140401A13: mov     byte ptr [rbp-55h], 0
 * 0000000140401A17: mov     [rbp-50h], rax
 * 0000000140401A1B: mov     [rbp-48h], rcx
 * 0000000140401A1F: mov     [rbp-40h], rdx
 * 0000000140401A23: mov     [rbp-38h], r8
 * 0000000140401A27: mov     [rbp-30h], r9
 * 0000000140401A2B: mov     [rbp-28h], r10
 * 0000000140401A2F: mov     [rbp-20h], r11
 * 0000000140401A33: test    byte ptr [rbp+0F0h], 1
 * 0000000140401A3A: jnz     short loc_140401A69
 * 0000000140401A3C: lfence
 * 0000000140401A3F: test    byte ptr gs:278h, 1
 * 0000000140401A48: jnz     short loc_140401A52
 * 0000000140401A4A: lfence
 * 0000000140401A4D: jmp     loc_140401C5F
 * 0000000140401A52: movzx   eax, byte ptr gs:27Ah
 * 0000000140401A5B: mov     ecx, 48h ; 'H'
 * 0000000140401A60: xor     edx, edx
 * 0000000140401A62: wrmsr
 * 0000000140401A64: jmp     loc_140401C5F
 * 0000000140401A69: test    cs:KiKvaShadow, 1
 * 0000000140401A70: jnz     short loc_140401A75
 * 0000000140401A72: swapgs
 * 0000000140401A75: lfence
 * 0000000140401A78: mov     r10, gs:188h
 * 0000000140401A81: mov     rcx, gs:188h
 * 0000000140401A8A: mov     rcx, [rcx+220h]
 * 0000000140401A91: mov     rcx, [rcx+9E0h]
 * 0000000140401A98: mov     gs:270h, rcx
 * 0000000140401AA1: mov     cl, gs:850h
 * 0000000140401AA9: mov     gs:851h, cl
 * 0000000140401AB1: mov     cl, gs:278h
 * 0000000140401AB9: mov     gs:852h, cl
 * 0000000140401AC1: movzx   eax, byte ptr gs:27Bh
 * 0000000140401ACA: cmp     gs:27Ah, al
 * 0000000140401AD2: jz      short loc_140401AE5
 * 0000000140401AD4: mov     gs:27Ah, al
 * 0000000140401ADC: mov     ecx, 48h ; 'H'
 * 0000000140401AE1: xor     edx, edx
 * 0000000140401AE3: wrmsr
 * 0000000140401AE5: movzx   edx, byte ptr gs:278h
 * 0000000140401AEE: test    edx, 8
 * 0000000140401AF4: jz      short loc_140401B0D
 * 0000000140401AF6: mov     eax, 1
 * 0000000140401AFB: xor     edx, edx
 * 0000000140401AFD: mov     ecx, 49h ; 'I'
 * 0000000140401B02: wrmsr
 * 0000000140401B04: movzx   edx, byte ptr gs:278h
 * 0000000140401B0D: test    edx, 2
 * 0000000140401B13: jz      loc_140401C3E
 * 0000000140401B19: call    loc_140401C2C
 * 0000000140401B1E: add     rsp, 8
 * 0000000140401B22: call    loc_140401C35
 * 0000000140401B27: add     rsp, 8
 * 0000000140401B2B: call    loc_140401B1E
 * 0000000140401B30: add     rsp, 8
 * 0000000140401B34: call    loc_140401B27
 * 0000000140401B39: add     rsp, 8
 * 0000000140401B3D: call    loc_140401B30
 * 0000000140401B42: add     rsp, 8
 * 0000000140401B46: call    loc_140401B39
 * 0000000140401B4B: add     rsp, 8
 * 0000000140401B4F: call    loc_140401B42
 * 0000000140401B54: add     rsp, 8
 * 0000000140401B58: call    loc_140401B4B
 * 0000000140401B5D: add     rsp, 8
 * 0000000140401B61: call    loc_140401B54
 * 0000000140401B66: add     rsp, 8
 * 0000000140401B6A: call    loc_140401B5D
 * 0000000140401B6F: add     rsp, 8
 * 0000000140401B73: call    loc_140401B66
 * 0000000140401B78: add     rsp, 8
 * 0000000140401B7C: call    loc_140401B6F
 * 0000000140401B81: add     rsp, 8
 * 0000000140401B85: call    loc_140401B78
 * 0000000140401B8A: add     rsp, 8
 * 0000000140401B8E: call    loc_140401B81
 * 0000000140401B93: add     rsp, 8
 * 0000000140401B97: call    loc_140401B8A
 * 0000000140401B9C: add     rsp, 8
 * 0000000140401BA0: call    loc_140401B93
 * 0000000140401BA5: add     rsp, 8
 * 0000000140401BA9: call    loc_140401B9C
 * 0000000140401BAE: add     rsp, 8
 * 0000000140401BB2: call    loc_140401BA5
 * 0000000140401BB7: add     rsp, 8
 * 0000000140401BBB: call    loc_140401BAE
 * 0000000140401BC0: add     rsp, 8
 * 0000000140401BC4: call    loc_140401BB7
 * 0000000140401BC9: add     rsp, 8
 * 0000000140401BCD: call    loc_140401BC0
 * 0000000140401BD2: add     rsp, 8
 * 0000000140401BD6: call    loc_140401BC9
 * 0000000140401BDB: add     rsp, 8
 * 0000000140401BDF: call    loc_140401BD2
 * 0000000140401BE4: add     rsp, 8
 * 0000000140401BE8: call    loc_140401BDB
 * 0000000140401BED: add     rsp, 8
 * 0000000140401BF1: call    loc_140401BE4
 * 0000000140401BF6: add     rsp, 8
 * 0000000140401BFA: call    loc_140401BED
 * 0000000140401BFF: add     rsp, 8
 * 0000000140401C03: call    loc_140401BF6
 * 0000000140401C08: add     rsp, 8
 * 0000000140401C0C: call    loc_140401BFF
 * 0000000140401C11: add     rsp, 8
 * 0000000140401C15: call    loc_140401C08
 * 0000000140401C1A: add     rsp, 8
 * 0000000140401C1E: call    loc_140401C11
 * 0000000140401C23: add     rsp, 8
 * 0000000140401C27: call    loc_140401C1A
 * 0000000140401C2C: add     rsp, 8
 * 0000000140401C30: call    loc_140401C23
 * 0000000140401C35: add     rsp, 8
 * 0000000140401C39: mov     eax, 0DADAh
 * 0000000140401C3E: lfence
 * 0000000140401C41: mov     byte ptr gs:853h, 0
 * 0000000140401C4A: test    byte ptr [r10+3], 3
 * 0000000140401C4F: mov     word ptr [rbp+80h], 0
 * 0000000140401C58: jz      short loc_140401C5F
 * 0000000140401C5A: call    KiSaveDebugRegisterState
 * 0000000140401C5F: cld
 * 0000000140401C60: stmxcsr dword ptr [rbp-54h]
 * 0000000140401C64: ldmxcsr dword ptr gs:180h
 * 0000000140401C6D: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140401C71: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140401C75: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140401C79: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140401C7D: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140401C81: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140401C85: cmp     byte ptr gs:801Ah, 0
 * 0000000140401C8E: jz      short loc_140401C95
 * 0000000140401C90: call    KeWakeProcessor
 * 0000000140401C95: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140401C9C: cmp     rax, [rbp+0E8h]
 * 0000000140401CA3: jnb     short loc_140401CBE
 * 0000000140401CA5: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140401CAC: cmp     rax, [rbp+0E8h]
 * 0000000140401CB3: jb      short loc_140401CBE
 * 0000000140401CB5: lea     rcx, [rbp-80h]
 * 0000000140401CB9: call    KiCheckForSListAddress
 * 0000000140401CBE: xor     esi, esi
 * 0000000140401CC0: inc     dword ptr gs:8000h
 * 0000000140401CC8: jmp     KiVmbusInterruptDispatch
 */
