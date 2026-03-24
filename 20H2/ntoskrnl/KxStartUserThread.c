/*
 * XREFs of KxStartUserThread @ 0x140404BB0
 * Callers:
 *     KyStartUserThread @ 0x1404048F0 (KyStartUserThread.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KxStartUserThread @ 0x140404BB0 (KxStartUserThread.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     KiUmsExit @ 0x140410EC0 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KxStartUserThread @ 0x140404BB0
 * Reason: Hex-Rays returned no pseudocode for 0x140404BB0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140404BB0: sub     rsp, 138h
 * 0000000140404BB7: lea     rax, [rsp+138h+var_38]
 * 0000000140404BBF: movaps  [rsp+138h+var_108], xmm6
 * 0000000140404BC4: movaps  [rsp+138h+var_F8], xmm7
 * 0000000140404BC9: movaps  [rsp+138h+var_E8], xmm8
 * 0000000140404BCF: movaps  [rsp+138h+var_D8], xmm9
 * 0000000140404BD5: movaps  [rsp+138h+var_C8], xmm10
 * 0000000140404BDB: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140404BE0: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140404BE5: movaps  xmmword ptr [rax-60h], xmm13
 * 0000000140404BEA: movaps  xmmword ptr [rax-50h], xmm14
 * 0000000140404BEF: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140404BF4: mov     [rax], rbx
 * 0000000140404BF7: mov     [rax+8], rdi
 * 0000000140404BFB: mov     [rax+10h], rsi
 * 0000000140404BFF: mov     [rax+18h], r12
 * 0000000140404C03: mov     [rax+20h], r13
 * 0000000140404C07: mov     [rax+28h], r14
 * 0000000140404C0B: mov     [rax+30h], r15
 * 0000000140404C0F: nop
 * 0000000140404C10: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140404C17: jz      short loc_140404C1C
 * 0000000140404C19: stac
 * 0000000140404C1C: mov     ecx, 1
 * 0000000140404C21: mov     cr8, rcx
 * 0000000140404C25: mov     rdx, [rsp+138h+var_138]
 * 0000000140404C29: mov     rcx, [rsp+138h+var_130]
 * 0000000140404C2E: mov     rax, [rsp+138h+var_128]
 * 0000000140404C33: call    _guard_dispatch_icall
 * 0000000140404C38: lea     rcx, [rsp+138h+var_38]
 * 0000000140404C40: movaps  xmm6, [rsp+138h+var_108]
 * 0000000140404C45: movaps  xmm7, [rsp+138h+var_F8]
 * 0000000140404C4A: movaps  xmm8, [rsp+138h+var_E8]
 * 0000000140404C50: movaps  xmm9, [rsp+138h+var_D8]
 * 0000000140404C56: movaps  xmm10, [rsp+138h+var_C8]
 * 0000000140404C5C: movaps  xmm11, xmmword ptr [rcx-80h]
 * 0000000140404C61: movaps  xmm12, xmmword ptr [rcx-70h]
 * 0000000140404C66: movaps  xmm13, xmmword ptr [rcx-60h]
 * 0000000140404C6B: movaps  xmm14, xmmword ptr [rcx-50h]
 * 0000000140404C70: movaps  xmm15, xmmword ptr [rcx-40h]
 * 0000000140404C75: mov     rbx, [rcx]
 * 0000000140404C78: mov     rdi, [rcx+8]
 * 0000000140404C7C: mov     rsi, [rcx+10h]
 * 0000000140404C80: mov     r12, [rcx+18h]
 * 0000000140404C84: mov     r13, [rcx+20h]
 * 0000000140404C88: mov     r14, [rcx+28h]
 * 0000000140404C8C: mov     r15, [rcx+30h]
 * 0000000140404C90: cli
 * 0000000140404C91: test    byte ptr [rbp+0F0h], 1
 * 0000000140404C98: jz      loc_140404F1E
 * 0000000140404C9E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140404CA5: jz      short loc_140404CAA
 * 0000000140404CA7: stac
 * 0000000140404CAA: mov     rcx, gs:188h
 * 0000000140404CB3: test    byte ptr [rcx+0C2h], 3
 * 0000000140404CBA: jz      short loc_140404CD7
 * 0000000140404CBC: mov     ecx, 1
 * 0000000140404CC1: mov     cr8, rcx
 * 0000000140404CC5: sti
 * 0000000140404CC6: call    KiInitiateUserApc
 * 0000000140404CCB: cli
 * 0000000140404CCC: mov     ecx, 0
 * 0000000140404CD1: mov     cr8, rcx
 * 0000000140404CD5: jmp     short loc_140404CAA
 * 0000000140404CD7: test    byte ptr gs:27Eh, 2
 * 0000000140404CE0: jz      short loc_140404CE9
 * 0000000140404CE2: xor     ecx, ecx
 * 0000000140404CE4: call    KiUpdateStibpPairing
 * 0000000140404CE9: mov     rcx, gs:188h
 * 0000000140404CF2: test    dword ptr [rcx], 8000000h
 * 0000000140404CF8: jz      short loc_140404CFF
 * 0000000140404CFA: call    KiRestoreSetContextState
 * 0000000140404CFF: mov     rcx, gs:188h
 * 0000000140404D08: test    dword ptr [rcx], 40010000h
 * 0000000140404D0E: jz      short loc_140404D35
 * 0000000140404D10: test    byte ptr [rcx+2], 1
 * 0000000140404D14: jz      short loc_140404D24
 * 0000000140404D16: call    KiCopyCounters
 * 0000000140404D1B: mov     rcx, gs:188h
 * 0000000140404D24: test    byte ptr [rcx+3], 40h
 * 0000000140404D28: jz      short loc_140404D35
 * 0000000140404D2A: lea     rsp, [rbp-80h]
 * 0000000140404D2E: mov     cl, 1
 * 0000000140404D30: call    KiUmsExit
 * 0000000140404D35: ldmxcsr dword ptr [rbp-54h]
 * 0000000140404D39: cmp     word ptr [rbp+80h], 0
 * 0000000140404D41: jz      short loc_140404D48
 * 0000000140404D43: call    KiRestoreDebugRegisterState
 * 0000000140404D48: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140404D4C: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140404D50: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140404D54: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140404D58: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140404D5C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140404D60: mov     r11, [rbp-20h]
 * 0000000140404D64: mov     r10, [rbp-28h]
 * 0000000140404D68: mov     r9, [rbp-30h]
 * 0000000140404D6C: mov     r8, [rbp-38h]
 * 0000000140404D70: mov     byte ptr gs:853h, 0
 * 0000000140404D79: movzx   eax, byte ptr gs:27Dh
 * 0000000140404D82: cmp     gs:27Ah, al
 * 0000000140404D8A: jz      short loc_140404D9D
 * 0000000140404D8C: mov     gs:27Ah, al
 * 0000000140404D94: mov     ecx, 48h ; 'H'
 * 0000000140404D99: xor     edx, edx
 * 0000000140404D9B: wrmsr
 * 0000000140404D9D: btr     word ptr gs:278h, 2
 * 0000000140404DA8: jnb     short loc_140404DB8
 * 0000000140404DAA: mov     eax, 1
 * 0000000140404DAF: xor     edx, edx
 * 0000000140404DB1: mov     ecx, 49h ; 'I'
 * 0000000140404DB6: wrmsr
 * 0000000140404DB8: btr     word ptr gs:278h, 5
 * 0000000140404DC3: jnb     loc_140404EEE
 * 0000000140404DC9: call    loc_140404EDC
 * 0000000140404DCE: add     rsp, 8
 * 0000000140404DD2: call    loc_140404EE5
 * 0000000140404DD7: add     rsp, 8
 * 0000000140404DDB: call    loc_140404DCE
 * 0000000140404DE0: add     rsp, 8
 * 0000000140404DE4: call    loc_140404DD7
 * 0000000140404DE9: add     rsp, 8
 * 0000000140404DED: call    loc_140404DE0
 * 0000000140404DF2: add     rsp, 8
 * 0000000140404DF6: call    loc_140404DE9
 * 0000000140404DFB: add     rsp, 8
 * 0000000140404DFF: call    loc_140404DF2
 * 0000000140404E04: add     rsp, 8
 * 0000000140404E08: call    loc_140404DFB
 * 0000000140404E0D: add     rsp, 8
 * 0000000140404E11: call    loc_140404E04
 * 0000000140404E16: add     rsp, 8
 * 0000000140404E1A: call    loc_140404E0D
 * 0000000140404E1F: add     rsp, 8
 * 0000000140404E23: call    loc_140404E16
 * 0000000140404E28: add     rsp, 8
 * 0000000140404E2C: call    loc_140404E1F
 * 0000000140404E31: add     rsp, 8
 * 0000000140404E35: call    loc_140404E28
 * 0000000140404E3A: add     rsp, 8
 * 0000000140404E3E: call    loc_140404E31
 * 0000000140404E43: add     rsp, 8
 * 0000000140404E47: call    loc_140404E3A
 * 0000000140404E4C: add     rsp, 8
 * 0000000140404E50: call    loc_140404E43
 * 0000000140404E55: add     rsp, 8
 * 0000000140404E59: call    loc_140404E4C
 * 0000000140404E5E: add     rsp, 8
 * 0000000140404E62: call    loc_140404E55
 * 0000000140404E67: add     rsp, 8
 * 0000000140404E6B: call    loc_140404E5E
 * 0000000140404E70: add     rsp, 8
 * 0000000140404E74: call    loc_140404E67
 * 0000000140404E79: add     rsp, 8
 * 0000000140404E7D: call    loc_140404E70
 * 0000000140404E82: add     rsp, 8
 * 0000000140404E86: call    loc_140404E79
 * 0000000140404E8B: add     rsp, 8
 * 0000000140404E8F: call    loc_140404E82
 * 0000000140404E94: add     rsp, 8
 * 0000000140404E98: call    loc_140404E8B
 * 0000000140404E9D: add     rsp, 8
 * 0000000140404EA1: call    loc_140404E94
 * 0000000140404EA6: add     rsp, 8
 * 0000000140404EAA: call    loc_140404E9D
 * 0000000140404EAF: add     rsp, 8
 * 0000000140404EB3: call    loc_140404EA6
 * 0000000140404EB8: add     rsp, 8
 * 0000000140404EBC: call    loc_140404EAF
 * 0000000140404EC1: add     rsp, 8
 * 0000000140404EC5: call    loc_140404EB8
 * 0000000140404ECA: add     rsp, 8
 * 0000000140404ECE: call    loc_140404EC1
 * 0000000140404ED3: add     rsp, 8
 * 0000000140404ED7: call    loc_140404ECA
 * 0000000140404EDC: add     rsp, 8
 * 0000000140404EE0: call    loc_140404ED3
 * 0000000140404EE5: add     rsp, 8
 * 0000000140404EE9: mov     eax, 0DADAh
 * 0000000140404EEE: mov     rdx, [rbp-40h]
 * 0000000140404EF2: mov     rcx, [rbp-48h]
 * 0000000140404EF6: mov     rax, [rbp-50h]
 * 0000000140404EFA: mov     rsp, rbp
 * 0000000140404EFD: mov     rbp, [rbp+0D8h]
 * 0000000140404F04: add     rsp, 0E8h
 * 0000000140404F0B: test    cs:KiKvaShadow, 1
 * 0000000140404F12: jz      short loc_140404F19
 * 0000000140404F14: jmp     KiKernelExit
 * 0000000140404F19: swapgs
 * 0000000140404F1C: iretq
 * 0000000140404F1E: ldmxcsr dword ptr [rbp-54h]
 * 0000000140404F22: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140404F26: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140404F2A: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140404F2E: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140404F32: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140404F36: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140404F3A: mov     r11, [rbp-20h]
 * 0000000140404F3E: mov     r10, [rbp-28h]
 * 0000000140404F42: mov     r9, [rbp-30h]
 * 0000000140404F46: mov     r8, [rbp-38h]
 * 0000000140404F4A: mov     rdx, [rbp-40h]
 * 0000000140404F4E: mov     rcx, [rbp-48h]
 * 0000000140404F52: mov     rax, [rbp-50h]
 * 0000000140404F56: mov     rsp, rbp
 * 0000000140404F59: mov     rbp, [rbp+0D8h]
 * 0000000140404F60: add     rsp, 0E8h
 * 0000000140404F67: iretq
 */
