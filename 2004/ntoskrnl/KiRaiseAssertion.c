/*
 * XREFs of KiRaiseAssertion @ 0x140407840
 * Callers:
 *     KiRaiseAssertionShadow @ 0x140A11DC0 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x140407840 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x140409080 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x140407840
 * Reason: Hex-Rays returned no pseudocode for 0x140407840
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140407840: sub     qword ptr [rsp+0], 2
 * 0000000140407845: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014040784B: jnz     short loc_140407852
 * 000000014040784D: and     dword ptr [rsp+4], 0
 * 0000000140407852: sub     rsp, 8
 * 0000000140407856: push    rbp
 * 0000000140407857: sub     rsp, 158h
 * 000000014040785E: lea     rbp, [rsp+168h+var_E8]
 * 0000000140407866: mov     byte ptr [rbp-55h], 1
 * 000000014040786A: mov     [rbp-50h], rax
 * 000000014040786E: mov     [rbp-48h], rcx
 * 0000000140407872: mov     [rbp-40h], rdx
 * 0000000140407876: mov     [rbp-38h], r8
 * 000000014040787A: mov     [rbp-30h], r9
 * 000000014040787E: mov     [rbp-28h], r10
 * 0000000140407882: mov     [rbp-20h], r11
 * 0000000140407886: test    byte ptr [rbp+0F0h], 1
 * 000000014040788D: jnz     short loc_1404078BC
 * 000000014040788F: lfence
 * 0000000140407892: test    byte ptr gs:278h, 1
 * 000000014040789B: jnz     short loc_1404078A5
 * 000000014040789D: lfence
 * 00000001404078A0: jmp     loc_140407B01
 * 00000001404078A5: movzx   eax, byte ptr gs:27Ah
 * 00000001404078AE: mov     ecx, 48h ; 'H'
 * 00000001404078B3: xor     edx, edx
 * 00000001404078B5: wrmsr
 * 00000001404078B7: jmp     loc_140407B01
 * 00000001404078BC: test    cs:KiKvaShadow, 1
 * 00000001404078C3: jnz     short loc_1404078C8
 * 00000001404078C5: swapgs
 * 00000001404078C8: lfence
 * 00000001404078CB: mov     r10, gs:188h
 * 00000001404078D4: mov     rcx, gs:188h
 * 00000001404078DD: mov     rcx, [rcx+220h]
 * 00000001404078E4: mov     rcx, [rcx+9E0h]
 * 00000001404078EB: mov     gs:270h, rcx
 * 00000001404078F4: mov     cl, gs:850h
 * 00000001404078FC: mov     gs:851h, cl
 * 0000000140407904: mov     cl, gs:278h
 * 000000014040790C: mov     gs:852h, cl
 * 0000000140407914: movzx   eax, byte ptr gs:27Bh
 * 000000014040791D: cmp     gs:27Ah, al
 * 0000000140407925: jz      short loc_140407938
 * 0000000140407927: mov     gs:27Ah, al
 * 000000014040792F: mov     ecx, 48h ; 'H'
 * 0000000140407934: xor     edx, edx
 * 0000000140407936: wrmsr
 * 0000000140407938: movzx   edx, byte ptr gs:278h
 * 0000000140407941: test    edx, 8
 * 0000000140407947: jz      short loc_14040795C
 * 0000000140407949: mov     eax, 1
 * 000000014040794E: xor     edx, edx
 * 0000000140407950: mov     ecx, 49h ; 'I'
 * 0000000140407955: wrmsr
 * 0000000140407957: jmp     loc_140407A9A
 * 000000014040795C: test    edx, 2
 * 0000000140407962: jz      loc_140407A97
 * 0000000140407968: test    byte ptr gs:279h, 4
 * 0000000140407971: jnz     loc_140407A97
 * 0000000140407977: call    loc_140407A8A
 * 000000014040797C: add     rsp, 8
 * 0000000140407980: call    loc_140407A93
 * 0000000140407985: add     rsp, 8
 * 0000000140407989: call    loc_14040797C
 * 000000014040798E: add     rsp, 8
 * 0000000140407992: call    loc_140407985
 * 0000000140407997: add     rsp, 8
 * 000000014040799B: call    loc_14040798E
 * 00000001404079A0: add     rsp, 8
 * 00000001404079A4: call    loc_140407997
 * 00000001404079A9: add     rsp, 8
 * 00000001404079AD: call    loc_1404079A0
 * 00000001404079B2: add     rsp, 8
 * 00000001404079B6: call    loc_1404079A9
 * 00000001404079BB: add     rsp, 8
 * 00000001404079BF: call    loc_1404079B2
 * 00000001404079C4: add     rsp, 8
 * 00000001404079C8: call    loc_1404079BB
 * 00000001404079CD: add     rsp, 8
 * 00000001404079D1: call    loc_1404079C4
 * 00000001404079D6: add     rsp, 8
 * 00000001404079DA: call    loc_1404079CD
 * 00000001404079DF: add     rsp, 8
 * 00000001404079E3: call    loc_1404079D6
 * 00000001404079E8: add     rsp, 8
 * 00000001404079EC: call    loc_1404079DF
 * 00000001404079F1: add     rsp, 8
 * 00000001404079F5: call    loc_1404079E8
 * 00000001404079FA: add     rsp, 8
 * 00000001404079FE: call    loc_1404079F1
 * 0000000140407A03: add     rsp, 8
 * 0000000140407A07: call    loc_1404079FA
 * 0000000140407A0C: add     rsp, 8
 * 0000000140407A10: call    loc_140407A03
 * 0000000140407A15: add     rsp, 8
 * 0000000140407A19: call    loc_140407A0C
 * 0000000140407A1E: add     rsp, 8
 * 0000000140407A22: call    loc_140407A15
 * 0000000140407A27: add     rsp, 8
 * 0000000140407A2B: call    loc_140407A1E
 * 0000000140407A30: add     rsp, 8
 * 0000000140407A34: call    loc_140407A27
 * 0000000140407A39: add     rsp, 8
 * 0000000140407A3D: call    loc_140407A30
 * 0000000140407A42: add     rsp, 8
 * 0000000140407A46: call    loc_140407A39
 * 0000000140407A4B: add     rsp, 8
 * 0000000140407A4F: call    loc_140407A42
 * 0000000140407A54: add     rsp, 8
 * 0000000140407A58: call    loc_140407A4B
 * 0000000140407A5D: add     rsp, 8
 * 0000000140407A61: call    loc_140407A54
 * 0000000140407A66: add     rsp, 8
 * 0000000140407A6A: call    loc_140407A5D
 * 0000000140407A6F: add     rsp, 8
 * 0000000140407A73: call    loc_140407A66
 * 0000000140407A78: add     rsp, 8
 * 0000000140407A7C: call    loc_140407A6F
 * 0000000140407A81: add     rsp, 8
 * 0000000140407A85: call    loc_140407A78
 * 0000000140407A8A: add     rsp, 8
 * 0000000140407A8E: call    loc_140407A81
 * 0000000140407A93: add     rsp, 8
 * 0000000140407A97: lfence
 * 0000000140407A9A: mov     byte ptr gs:853h, 0
 * 0000000140407AA3: test    byte ptr [r10+3], 80h
 * 0000000140407AA8: jz      short loc_140407AEC
 * 0000000140407AAA: mov     ecx, 0C0000102h
 * 0000000140407AAF: rdmsr
 * 0000000140407AB1: shl     rdx, 20h
 * 0000000140407AB5: or      rax, rdx
 * 0000000140407AB8: cmp     rax, cs:MmUserProbeAddress
 * 0000000140407ABF: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140407AC7: cmp     [r10+0F0h], rax
 * 0000000140407ACE: jz      short loc_140407AEC
 * 0000000140407AD0: mov     rdx, [r10+1F0h]
 * 0000000140407AD7: bts     dword ptr [r10+74h], 8
 * 0000000140407ADD: dec     word ptr [r10+1E6h]
 * 0000000140407AE5: mov     [rdx+80h], rax
 * 0000000140407AEC: test    byte ptr [r10+3], 3
 * 0000000140407AF1: mov     word ptr [rbp+80h], 0
 * 0000000140407AFA: jz      short loc_140407B01
 * 0000000140407AFC: call    KiSaveDebugRegisterState
 * 0000000140407B01: cld
 * 0000000140407B02: stmxcsr dword ptr [rbp-54h]
 * 0000000140407B06: ldmxcsr dword ptr gs:180h
 * 0000000140407B0F: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140407B13: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140407B17: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140407B1B: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140407B1F: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140407B23: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140407B27: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140407B2E: jz      short loc_140407B3C
 * 0000000140407B30: test    byte ptr [rbp+0F0h], 1
 * 0000000140407B37: jz      short loc_140407B3C
 * 0000000140407B39: stac
 * 0000000140407B3C: test    dword ptr [rbp+0F8h], 200h
 * 0000000140407B46: jz      short loc_140407B49
 * 0000000140407B48: sti
 * 0000000140407B49: mov     ecx, 0C0000420h
 * 0000000140407B4E: xor     edx, edx
 * 0000000140407B50: mov     r8, [rbp+0E8h]
 * 0000000140407B57: call    KiExceptionDispatch
 * 0000000140407B5C: nop
 * 0000000140407B5D: retn
 */
