/*
 * XREFs of KiVmbusInterrupt2 @ 0x1403FACF0
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140A12140 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1402EC460 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt2 @ 0x1403FACF0 (KiVmbusInterrupt2.c)
 *     KeWakeProcessor @ 0x140513F60 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x1403FACF0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FACF0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FACF0: push    3
 * 00000001403FACF2: push    rbp
 * 00000001403FACF3: push    rsi
 * 00000001403FACF4: sub     rsp, 150h
 * 00000001403FACFB: lea     rbp, [rsp+168h+var_E8]
 * 00000001403FAD03: mov     byte ptr [rbp-55h], 0
 * 00000001403FAD07: mov     [rbp-50h], rax
 * 00000001403FAD0B: mov     [rbp-48h], rcx
 * 00000001403FAD0F: mov     [rbp-40h], rdx
 * 00000001403FAD13: mov     [rbp-38h], r8
 * 00000001403FAD17: mov     [rbp-30h], r9
 * 00000001403FAD1B: mov     [rbp-28h], r10
 * 00000001403FAD1F: mov     [rbp-20h], r11
 * 00000001403FAD23: test    byte ptr [rbp+0F0h], 1
 * 00000001403FAD2A: jnz     short loc_1403FAD59
 * 00000001403FAD2C: lfence
 * 00000001403FAD2F: test    byte ptr gs:278h, 1
 * 00000001403FAD38: jnz     short loc_1403FAD42
 * 00000001403FAD3A: lfence
 * 00000001403FAD3D: jmp     loc_1403FAF55
 * 00000001403FAD42: movzx   eax, byte ptr gs:27Ah
 * 00000001403FAD4B: mov     ecx, 48h ; 'H'
 * 00000001403FAD50: xor     edx, edx
 * 00000001403FAD52: wrmsr
 * 00000001403FAD54: jmp     loc_1403FAF55
 * 00000001403FAD59: test    cs:KiKvaShadow, 1
 * 00000001403FAD60: jnz     short loc_1403FAD65
 * 00000001403FAD62: swapgs
 * 00000001403FAD65: lfence
 * 00000001403FAD68: mov     r10, gs:188h
 * 00000001403FAD71: mov     rcx, gs:188h
 * 00000001403FAD7A: mov     rcx, [rcx+220h]
 * 00000001403FAD81: mov     rcx, [rcx+9E0h]
 * 00000001403FAD88: mov     gs:270h, rcx
 * 00000001403FAD91: mov     cl, gs:850h
 * 00000001403FAD99: mov     gs:851h, cl
 * 00000001403FADA1: mov     cl, gs:278h
 * 00000001403FADA9: mov     gs:852h, cl
 * 00000001403FADB1: movzx   eax, byte ptr gs:27Bh
 * 00000001403FADBA: cmp     gs:27Ah, al
 * 00000001403FADC2: jz      short loc_1403FADD5
 * 00000001403FADC4: mov     gs:27Ah, al
 * 00000001403FADCC: mov     ecx, 48h ; 'H'
 * 00000001403FADD1: xor     edx, edx
 * 00000001403FADD3: wrmsr
 * 00000001403FADD5: movzx   edx, byte ptr gs:278h
 * 00000001403FADDE: test    edx, 8
 * 00000001403FADE4: jz      short loc_1403FADF9
 * 00000001403FADE6: mov     eax, 1
 * 00000001403FADEB: xor     edx, edx
 * 00000001403FADED: mov     ecx, 49h ; 'I'
 * 00000001403FADF2: wrmsr
 * 00000001403FADF4: jmp     loc_1403FAF37
 * 00000001403FADF9: test    edx, 2
 * 00000001403FADFF: jz      loc_1403FAF34
 * 00000001403FAE05: test    byte ptr gs:279h, 4
 * 00000001403FAE0E: jnz     loc_1403FAF34
 * 00000001403FAE14: call    loc_1403FAF27
 * 00000001403FAE19: add     rsp, 8
 * 00000001403FAE1D: call    loc_1403FAF30
 * 00000001403FAE22: add     rsp, 8
 * 00000001403FAE26: call    loc_1403FAE19
 * 00000001403FAE2B: add     rsp, 8
 * 00000001403FAE2F: call    loc_1403FAE22
 * 00000001403FAE34: add     rsp, 8
 * 00000001403FAE38: call    loc_1403FAE2B
 * 00000001403FAE3D: add     rsp, 8
 * 00000001403FAE41: call    loc_1403FAE34
 * 00000001403FAE46: add     rsp, 8
 * 00000001403FAE4A: call    loc_1403FAE3D
 * 00000001403FAE4F: add     rsp, 8
 * 00000001403FAE53: call    loc_1403FAE46
 * 00000001403FAE58: add     rsp, 8
 * 00000001403FAE5C: call    loc_1403FAE4F
 * 00000001403FAE61: add     rsp, 8
 * 00000001403FAE65: call    loc_1403FAE58
 * 00000001403FAE6A: add     rsp, 8
 * 00000001403FAE6E: call    loc_1403FAE61
 * 00000001403FAE73: add     rsp, 8
 * 00000001403FAE77: call    loc_1403FAE6A
 * 00000001403FAE7C: add     rsp, 8
 * 00000001403FAE80: call    loc_1403FAE73
 * 00000001403FAE85: add     rsp, 8
 * 00000001403FAE89: call    loc_1403FAE7C
 * 00000001403FAE8E: add     rsp, 8
 * 00000001403FAE92: call    loc_1403FAE85
 * 00000001403FAE97: add     rsp, 8
 * 00000001403FAE9B: call    loc_1403FAE8E
 * 00000001403FAEA0: add     rsp, 8
 * 00000001403FAEA4: call    loc_1403FAE97
 * 00000001403FAEA9: add     rsp, 8
 * 00000001403FAEAD: call    loc_1403FAEA0
 * 00000001403FAEB2: add     rsp, 8
 * 00000001403FAEB6: call    loc_1403FAEA9
 * 00000001403FAEBB: add     rsp, 8
 * 00000001403FAEBF: call    loc_1403FAEB2
 * 00000001403FAEC4: add     rsp, 8
 * 00000001403FAEC8: call    loc_1403FAEBB
 * 00000001403FAECD: add     rsp, 8
 * 00000001403FAED1: call    loc_1403FAEC4
 * 00000001403FAED6: add     rsp, 8
 * 00000001403FAEDA: call    loc_1403FAECD
 * 00000001403FAEDF: add     rsp, 8
 * 00000001403FAEE3: call    loc_1403FAED6
 * 00000001403FAEE8: add     rsp, 8
 * 00000001403FAEEC: call    loc_1403FAEDF
 * 00000001403FAEF1: add     rsp, 8
 * 00000001403FAEF5: call    loc_1403FAEE8
 * 00000001403FAEFA: add     rsp, 8
 * 00000001403FAEFE: call    loc_1403FAEF1
 * 00000001403FAF03: add     rsp, 8
 * 00000001403FAF07: call    loc_1403FAEFA
 * 00000001403FAF0C: add     rsp, 8
 * 00000001403FAF10: call    loc_1403FAF03
 * 00000001403FAF15: add     rsp, 8
 * 00000001403FAF19: call    loc_1403FAF0C
 * 00000001403FAF1E: add     rsp, 8
 * 00000001403FAF22: call    loc_1403FAF15
 * 00000001403FAF27: add     rsp, 8
 * 00000001403FAF2B: call    loc_1403FAF1E
 * 00000001403FAF30: add     rsp, 8
 * 00000001403FAF34: lfence
 * 00000001403FAF37: mov     byte ptr gs:853h, 0
 * 00000001403FAF40: test    byte ptr [r10+3], 3
 * 00000001403FAF45: mov     word ptr [rbp+80h], 0
 * 00000001403FAF4E: jz      short loc_1403FAF55
 * 00000001403FAF50: call    KiSaveDebugRegisterState
 * 00000001403FAF55: cld
 * 00000001403FAF56: stmxcsr dword ptr [rbp-54h]
 * 00000001403FAF5A: ldmxcsr dword ptr gs:180h
 * 00000001403FAF63: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001403FAF67: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001403FAF6B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001403FAF6F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001403FAF73: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001403FAF77: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001403FAF7B: cmp     byte ptr gs:801Ah, 0
 * 00000001403FAF84: jz      short loc_1403FAF8B
 * 00000001403FAF86: call    KeWakeProcessor
 * 00000001403FAF8B: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001403FAF92: cmp     rax, [rbp+0E8h]
 * 00000001403FAF99: jnb     short loc_1403FAFB4
 * 00000001403FAF9B: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001403FAFA2: cmp     rax, [rbp+0E8h]
 * 00000001403FAFA9: jb      short loc_1403FAFB4
 * 00000001403FAFAB: lea     rcx, [rbp-80h]
 * 00000001403FAFAF: call    KiCheckForSListAddress
 * 00000001403FAFB4: xor     esi, esi
 * 00000001403FAFB6: inc     dword ptr gs:8000h
 * 00000001403FAFBE: jmp     KiVmbusInterruptDispatch
 */
