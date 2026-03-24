/*
 * XREFs of KiGeneralProtectionFault @ 0x1404038C0
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140A117C0 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x1404038C0 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x140407D80 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x1404038C0
 * Reason: Hex-Rays returned no pseudocode for 0x1404038C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404038C0: push    rbp
 * 00000001404038C1: sub     rsp, 158h
 * 00000001404038C8: lea     rbp, [rsp+80h]
 * 00000001404038D0: mov     [rbp+0D8h+var_12D], 1
 * 00000001404038D4: mov     [rbp+0D8h+var_128], rax
 * 00000001404038D8: mov     [rbp+0D8h+var_120], rcx
 * 00000001404038DC: mov     [rbp+0D8h+var_118], rdx
 * 00000001404038E0: mov     [rbp+0D8h+var_110], r8
 * 00000001404038E4: mov     [rbp+0D8h+var_108], r9
 * 00000001404038E8: mov     [rbp+0D8h+var_100], r10
 * 00000001404038EC: mov     [rbp+0D8h+var_F8], r11
 * 00000001404038F0: test    [rbp+0D8h+arg_8], 1
 * 00000001404038F7: jnz     short loc_140403926
 * 00000001404038F9: lfence
 * 00000001404038FC: test    byte ptr gs:278h, 1
 * 0000000140403905: jnz     short loc_14040390F
 * 0000000140403907: lfence
 * 000000014040390A: jmp     loc_140403B6B
 * 000000014040390F: movzx   eax, byte ptr gs:27Ah
 * 0000000140403918: mov     ecx, 48h ; 'H'
 * 000000014040391D: xor     edx, edx
 * 000000014040391F: wrmsr
 * 0000000140403921: jmp     loc_140403B6B
 * 0000000140403926: test    cs:KiKvaShadow, 1
 * 000000014040392D: jnz     short loc_140403932
 * 000000014040392F: swapgs
 * 0000000140403932: lfence
 * 0000000140403935: mov     r10, gs:188h
 * 000000014040393E: mov     rcx, gs:188h
 * 0000000140403947: mov     rcx, [rcx+220h]
 * 000000014040394E: mov     rcx, [rcx+9E0h]
 * 0000000140403955: mov     gs:270h, rcx
 * 000000014040395E: mov     cl, gs:850h
 * 0000000140403966: mov     gs:851h, cl
 * 000000014040396E: mov     cl, gs:278h
 * 0000000140403976: mov     gs:852h, cl
 * 000000014040397E: movzx   eax, byte ptr gs:27Bh
 * 0000000140403987: cmp     gs:27Ah, al
 * 000000014040398F: jz      short loc_1404039A2
 * 0000000140403991: mov     gs:27Ah, al
 * 0000000140403999: mov     ecx, 48h ; 'H'
 * 000000014040399E: xor     edx, edx
 * 00000001404039A0: wrmsr
 * 00000001404039A2: movzx   edx, byte ptr gs:278h
 * 00000001404039AB: test    edx, 8
 * 00000001404039B1: jz      short loc_1404039C6
 * 00000001404039B3: mov     eax, 1
 * 00000001404039B8: xor     edx, edx
 * 00000001404039BA: mov     ecx, 49h ; 'I'
 * 00000001404039BF: wrmsr
 * 00000001404039C1: jmp     loc_140403B04
 * 00000001404039C6: test    edx, 2
 * 00000001404039CC: jz      loc_140403B01
 * 00000001404039D2: test    byte ptr gs:279h, 4
 * 00000001404039DB: jnz     loc_140403B01
 * 00000001404039E1: call    loc_140403AF4
 * 00000001404039E6: add     rsp, 8
 * 00000001404039EA: call    loc_140403AFD
 * 00000001404039EF: add     rsp, 8
 * 00000001404039F3: call    loc_1404039E6
 * 00000001404039F8: add     rsp, 8
 * 00000001404039FC: call    loc_1404039EF
 * 0000000140403A01: add     rsp, 8
 * 0000000140403A05: call    loc_1404039F8
 * 0000000140403A0A: add     rsp, 8
 * 0000000140403A0E: call    loc_140403A01
 * 0000000140403A13: add     rsp, 8
 * 0000000140403A17: call    loc_140403A0A
 * 0000000140403A1C: add     rsp, 8
 * 0000000140403A20: call    loc_140403A13
 * 0000000140403A25: add     rsp, 8
 * 0000000140403A29: call    loc_140403A1C
 * 0000000140403A2E: add     rsp, 8
 * 0000000140403A32: call    loc_140403A25
 * 0000000140403A37: add     rsp, 8
 * 0000000140403A3B: call    loc_140403A2E
 * 0000000140403A40: add     rsp, 8
 * 0000000140403A44: call    loc_140403A37
 * 0000000140403A49: add     rsp, 8
 * 0000000140403A4D: call    loc_140403A40
 * 0000000140403A52: add     rsp, 8
 * 0000000140403A56: call    loc_140403A49
 * 0000000140403A5B: add     rsp, 8
 * 0000000140403A5F: call    loc_140403A52
 * 0000000140403A64: add     rsp, 8
 * 0000000140403A68: call    loc_140403A5B
 * 0000000140403A6D: add     rsp, 8
 * 0000000140403A71: call    loc_140403A64
 * 0000000140403A76: add     rsp, 8
 * 0000000140403A7A: call    loc_140403A6D
 * 0000000140403A7F: add     rsp, 8
 * 0000000140403A83: call    loc_140403A76
 * 0000000140403A88: add     rsp, 8
 * 0000000140403A8C: call    loc_140403A7F
 * 0000000140403A91: add     rsp, 8
 * 0000000140403A95: call    loc_140403A88
 * 0000000140403A9A: add     rsp, 8
 * 0000000140403A9E: call    loc_140403A91
 * 0000000140403AA3: add     rsp, 8
 * 0000000140403AA7: call    loc_140403A9A
 * 0000000140403AAC: add     rsp, 8
 * 0000000140403AB0: call    loc_140403AA3
 * 0000000140403AB5: add     rsp, 8
 * 0000000140403AB9: call    loc_140403AAC
 * 0000000140403ABE: add     rsp, 8
 * 0000000140403AC2: call    loc_140403AB5
 * 0000000140403AC7: add     rsp, 8
 * 0000000140403ACB: call    loc_140403ABE
 * 0000000140403AD0: add     rsp, 8
 * 0000000140403AD4: call    loc_140403AC7
 * 0000000140403AD9: add     rsp, 8
 * 0000000140403ADD: call    loc_140403AD0
 * 0000000140403AE2: add     rsp, 8
 * 0000000140403AE6: call    loc_140403AD9
 * 0000000140403AEB: add     rsp, 8
 * 0000000140403AEF: call    loc_140403AE2
 * 0000000140403AF4: add     rsp, 8
 * 0000000140403AF8: call    loc_140403AEB
 * 0000000140403AFD: add     rsp, 8
 * 0000000140403B01: lfence
 * 0000000140403B04: mov     byte ptr gs:853h, 0
 * 0000000140403B0D: test    byte ptr [r10+3], 80h
 * 0000000140403B12: jz      short loc_140403B56
 * 0000000140403B14: mov     ecx, 0C0000102h
 * 0000000140403B19: rdmsr
 * 0000000140403B1B: shl     rdx, 20h
 * 0000000140403B1F: or      rax, rdx
 * 0000000140403B22: cmp     rax, cs:MmUserProbeAddress
 * 0000000140403B29: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140403B31: cmp     [r10+0F0h], rax
 * 0000000140403B38: jz      short loc_140403B56
 * 0000000140403B3A: mov     rdx, [r10+1F0h]
 * 0000000140403B41: bts     dword ptr [r10+74h], 8
 * 0000000140403B47: dec     word ptr [r10+1E6h]
 * 0000000140403B4F: mov     [rdx+80h], rax
 * 0000000140403B56: test    byte ptr [r10+3], 3
 * 0000000140403B5B: mov     [rbp+0D8h+var_58], 0
 * 0000000140403B64: jz      short loc_140403B6B
 * 0000000140403B66: call    KiSaveDebugRegisterState
 * 0000000140403B6B: cld
 * 0000000140403B6C: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140403B70: ldmxcsr dword ptr gs:180h
 * 0000000140403B79: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140403B7D: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140403B81: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140403B85: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140403B89: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140403B8D: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140403B91: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140403B98: jz      short loc_140403BA6
 * 0000000140403B9A: test    [rbp+0D8h+arg_8], 1
 * 0000000140403BA1: jz      short loc_140403BA6
 * 0000000140403BA3: stac
 * 0000000140403BA6: mov     eax, [rbp+0E0h]
 * 0000000140403BAC: test    [rbp+0D8h+arg_10], 200h
 * 0000000140403BB6: jz      short loc_140403BB9
 * 0000000140403BB8: sti
 * 0000000140403BB9: mov     ecx, 10000001h
 * 0000000140403BBE: mov     edx, 2
 * 0000000140403BC3: mov     r9d, [rbp+0E0h]
 * 0000000140403BCA: and     r9d, 0FFFFh
 * 0000000140403BD1: xor     r10, r10
 * 0000000140403BD4: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140403BDB: call    KiExceptionDispatch
 * 0000000140403BE0: nop
 * 0000000140403BE1: retn
 */
