/*
 * XREFs of KiCallUserMode @ 0x1403FFEB0
 * Callers:
 *     KeUserModeCallback @ 0x1406814B0 (KeUserModeCallback.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiCallUserMode @ 0x1403FFEB0 (KiCallUserMode.c)
 */

/*
 * Hex-Rays decompilation failed for KiCallUserMode @ 0x1403FFEB0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FFEB0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FFEB0: sub     rsp, 138h
 * 00000001403FFEB7: lea     rax, [rsp+138h+var_38]
 * 00000001403FFEBF: movaps  [rsp+138h+var_108], xmm6
 * 00000001403FFEC4: movaps  [rsp+138h+var_F8], xmm7
 * 00000001403FFEC9: movaps  [rsp+138h+var_E8], xmm8
 * 00000001403FFECF: movaps  [rsp+138h+var_D8], xmm9
 * 00000001403FFED5: movaps  [rsp+138h+var_C8], xmm10
 * 00000001403FFEDB: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001403FFEE0: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001403FFEE5: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001403FFEEA: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001403FFEEF: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001403FFEF4: mov     [rax-8], rbp
 * 00000001403FFEF8: mov     rbp, rsp
 * 00000001403FFEFB: mov     [rax], rbx
 * 00000001403FFEFE: mov     [rax+8], rdi
 * 00000001403FFF02: mov     [rax+10h], rsi
 * 00000001403FFF06: mov     [rax+18h], r12
 * 00000001403FFF0A: mov     [rax+20h], r13
 * 00000001403FFF0E: mov     [rax+28h], r14
 * 00000001403FFF12: mov     [rax+30h], r15
 * 00000001403FFF16: xor     r10, r10
 * 00000001403FFF19: xor     r12, r12
 * 00000001403FFF1C: xor     r13, r13
 * 00000001403FFF1F: xor     r14, r14
 * 00000001403FFF22: xor     r15, r15
 * 00000001403FFF25: pxor    xmm6, xmm6
 * 00000001403FFF29: pxor    xmm7, xmm7
 * 00000001403FFF2D: pxor    xmm8, xmm8
 * 00000001403FFF32: pxor    xmm9, xmm9
 * 00000001403FFF37: pxor    xmm10, xmm10
 * 00000001403FFF3C: pxor    xmm11, xmm11
 * 00000001403FFF41: pxor    xmm12, xmm12
 * 00000001403FFF46: pxor    xmm13, xmm13
 * 00000001403FFF4B: pxor    xmm14, xmm14
 * 00000001403FFF50: pxor    xmm15, xmm15
 * 00000001403FFF55: mov     [rbp+0D8h], rcx
 * 00000001403FFF5C: mov     [rbp+0E0h], rdx
 * 00000001403FFF63: mov     rbx, gs:188h
 * 00000001403FFF6C: mov     [r8+20h], rsp
 * 00000001403FFF70: mov     rsi, [rbx+90h]
 * 00000001403FFF77: mov     [rbp+0D0h], rsi
 * 00000001403FFF7E: cli
 * 00000001403FFF7F: mov     [rbx+28h], r8
 * 00000001403FFF83: mov     [rbx+38h], r9
 * 00000001403FFF87: test    cs:KiKvaShadow, 1
 * 00000001403FFF8E: jnz     short loc_1403FFF9F
 * 00000001403FFF90: mov     rdi, gs:8
 * 00000001403FFF99: mov     [rdi+4], r8
 * 00000001403FFF9D: jmp     short loc_1403FFFA8
 * 00000001403FFF9F: mov     gs:9008h, r8
 * 00000001403FFFA8: mov     ecx, cs:KeKernelStackSize
 * 00000001403FFFAE: sub     r9, rcx
 * 00000001403FFFB1: mov     gs:1A8h, r8
 * 00000001403FFFBA: mov     [rbx+30h], r9
 * 00000001403FFFBE: lea     rsp, [r8-190h]
 * 00000001403FFFC5: mov     rdi, rsp
 * 00000001403FFFC8: mov     ecx, 32h ; '2'
 * 00000001403FFFCD: rep movsq
 * 00000001403FFFD0: xor     edi, edi
 * 00000001403FFFD2: test    byte ptr [rbx+0C2h], 3
 * 00000001403FFFD9: jnz     loc_140400210
 * 00000001403FFFDF: test    dword ptr [rbx], 48010000h
 * 00000001403FFFE5: jnz     loc_140400210
 * 00000001403FFFEB: test    byte ptr gs:27Eh, 2
 * 00000001403FFFF4: jnz     loc_140400210
 * 00000001403FFFFA: lea     rbp, [rsi-110h]
 * 0000000140400001: ldmxcsr dword ptr [rbp-54h]
 * 0000000140400005: xor     esi, esi
 * 0000000140400007: test    byte ptr [rbx+3], 3
 * 000000014040000B: jnz     loc_1404001E5
 * 0000000140400011: mov     r9, cs:KeUserCallbackDispatcher
 * 0000000140400018: mov     byte ptr gs:853h, 0
 * 0000000140400021: movzx   eax, byte ptr gs:27Dh
 * 000000014040002A: cmp     gs:27Ah, al
 * 0000000140400032: jz      short loc_140400045
 * 0000000140400034: mov     gs:27Ah, al
 * 000000014040003C: mov     ecx, 48h ; 'H'
 * 0000000140400041: xor     edx, edx
 * 0000000140400043: wrmsr
 * 0000000140400045: btr     word ptr gs:278h, 2
 * 0000000140400050: jnb     short loc_140400060
 * 0000000140400052: mov     eax, 1
 * 0000000140400057: xor     edx, edx
 * 0000000140400059: mov     ecx, 49h ; 'I'
 * 000000014040005E: wrmsr
 * 0000000140400060: btr     word ptr gs:278h, 5
 * 000000014040006B: jnb     loc_140400196
 * 0000000140400071: call    loc_140400184
 * 0000000140400076: add     rsp, 8
 * 000000014040007A: call    loc_14040018D
 * 000000014040007F: add     rsp, 8
 * 0000000140400083: call    loc_140400076
 * 0000000140400088: add     rsp, 8
 * 000000014040008C: call    loc_14040007F
 * 0000000140400091: add     rsp, 8
 * 0000000140400095: call    loc_140400088
 * 000000014040009A: add     rsp, 8
 * 000000014040009E: call    loc_140400091
 * 00000001404000A3: add     rsp, 8
 * 00000001404000A7: call    loc_14040009A
 * 00000001404000AC: add     rsp, 8
 * 00000001404000B0: call    loc_1404000A3
 * 00000001404000B5: add     rsp, 8
 * 00000001404000B9: call    loc_1404000AC
 * 00000001404000BE: add     rsp, 8
 * 00000001404000C2: call    loc_1404000B5
 * 00000001404000C7: add     rsp, 8
 * 00000001404000CB: call    loc_1404000BE
 * 00000001404000D0: add     rsp, 8
 * 00000001404000D4: call    loc_1404000C7
 * 00000001404000D9: add     rsp, 8
 * 00000001404000DD: call    loc_1404000D0
 * 00000001404000E2: add     rsp, 8
 * 00000001404000E6: call    loc_1404000D9
 * 00000001404000EB: add     rsp, 8
 * 00000001404000EF: call    loc_1404000E2
 * 00000001404000F4: add     rsp, 8
 * 00000001404000F8: call    loc_1404000EB
 * 00000001404000FD: add     rsp, 8
 * 0000000140400101: call    loc_1404000F4
 * 0000000140400106: add     rsp, 8
 * 000000014040010A: call    loc_1404000FD
 * 000000014040010F: add     rsp, 8
 * 0000000140400113: call    loc_140400106
 * 0000000140400118: add     rsp, 8
 * 000000014040011C: call    loc_14040010F
 * 0000000140400121: add     rsp, 8
 * 0000000140400125: call    loc_140400118
 * 000000014040012A: add     rsp, 8
 * 000000014040012E: call    loc_140400121
 * 0000000140400133: add     rsp, 8
 * 0000000140400137: call    loc_14040012A
 * 000000014040013C: add     rsp, 8
 * 0000000140400140: call    loc_140400133
 * 0000000140400145: add     rsp, 8
 * 0000000140400149: call    loc_14040013C
 * 000000014040014E: add     rsp, 8
 * 0000000140400152: call    loc_140400145
 * 0000000140400157: add     rsp, 8
 * 000000014040015B: call    loc_14040014E
 * 0000000140400160: add     rsp, 8
 * 0000000140400164: call    loc_140400157
 * 0000000140400169: add     rsp, 8
 * 000000014040016D: call    loc_140400160
 * 0000000140400172: add     rsp, 8
 * 0000000140400176: call    loc_140400169
 * 000000014040017B: add     rsp, 8
 * 000000014040017F: call    loc_140400172
 * 0000000140400184: add     rsp, 8
 * 0000000140400188: call    loc_14040017B
 * 000000014040018D: add     rsp, 8
 * 0000000140400191: mov     eax, 0DADAh
 * 0000000140400196: mov     rcx, r9
 * 0000000140400199: xor     eax, eax
 * 000000014040019B: xor     edx, edx
 * 000000014040019D: mov     r8, [rbp+100h]
 * 00000001404001A4: mov     r9, [rbp+0D8h]
 * 00000001404001AB: pxor    xmm0, xmm0
 * 00000001404001AF: pxor    xmm1, xmm1
 * 00000001404001B3: pxor    xmm2, xmm2
 * 00000001404001B7: pxor    xmm3, xmm3
 * 00000001404001BB: pxor    xmm4, xmm4
 * 00000001404001BF: pxor    xmm5, xmm5
 * 00000001404001C3: mov     r11, [rbp+0F8h]
 * 00000001404001CA: xor     ebx, ebx
 * 00000001404001CC: test    cs:KiKvaShadow, 1
 * 00000001404001D3: jnz     KiKernelSysretExit
 * 00000001404001D9: mov     rbp, r9
 * 00000001404001DC: mov     rsp, r8
 * 00000001404001DF: swapgs
 * 00000001404001E2: sysret
 * 00000001404001E5: call    KiRestoreDebugRegisterState
 * 00000001404001EA: mov     r10, cs:KeUserCallbackDispatcher
 * 00000001404001F1: mov     r9, [rbx+0B8h]
 * 00000001404001F8: mov     r9, [r9+3D8h]
 * 00000001404001FF: or      r9, r9
 * 0000000140400202: jnz     loc_140400018
 * 0000000140400208: xchg    r9, r10
 * 000000014040020B: jmp     loc_140400018
 * 0000000140400210: lea     rbp, [rsp+138h+var_B8]
 * 0000000140400218: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140400221: mov     rax, cs:KeUserCallbackDispatcher
 * 0000000140400228: mov     [rbp+0E8h], rax
 * 000000014040022F: lea     rcx, KiSystemServiceExit
 * 0000000140400236: jmp     rcx
 * 000000014040023C: retn
 */
