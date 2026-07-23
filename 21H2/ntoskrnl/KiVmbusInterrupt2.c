/*
 * XREFs of KiVmbusInterrupt2 @ 0x1404040B0
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140A16140 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1402F1E00 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt2 @ 0x1404040B0 (KiVmbusInterrupt2.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140519C60 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x1404040B0
 * Reason: Hex-Rays returned no pseudocode for 0x1404040B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404040B0: push    3
 * 00000001404040B2: push    rbp
 * 00000001404040B3: push    rsi
 * 00000001404040B4: sub     rsp, 150h
 * 00000001404040BB: lea     rbp, [rsp+168h+var_E8]
 * 00000001404040C3: mov     byte ptr [rbp-55h], 0
 * 00000001404040C7: mov     [rbp-50h], rax
 * 00000001404040CB: mov     [rbp-48h], rcx
 * 00000001404040CF: mov     [rbp-40h], rdx
 * 00000001404040D3: mov     [rbp-38h], r8
 * 00000001404040D7: mov     [rbp-30h], r9
 * 00000001404040DB: mov     [rbp-28h], r10
 * 00000001404040DF: mov     [rbp-20h], r11
 * 00000001404040E3: test    byte ptr [rbp+0F0h], 1
 * 00000001404040EA: jnz     short loc_14040411B
 * 00000001404040EC: lfence
 * 00000001404040EF: test    word ptr gs:860h, 1
 * 00000001404040FA: jnz     short loc_140404104
 * 00000001404040FC: lfence
 * 00000001404040FF: jmp     loc_140404324
 * 0000000140404104: movzx   eax, word ptr gs:864h
 * 000000014040410D: mov     ecx, 48h ; 'H'
 * 0000000140404112: xor     edx, edx
 * 0000000140404114: wrmsr
 * 0000000140404116: jmp     loc_140404324
 * 000000014040411B: test    cs:KiKvaShadow, 1
 * 0000000140404122: jnz     short loc_140404127
 * 0000000140404124: swapgs
 * 0000000140404127: lfence
 * 000000014040412A: mov     r10, gs:188h
 * 0000000140404133: mov     rcx, gs:188h
 * 000000014040413C: mov     rcx, [rcx+220h]
 * 0000000140404143: mov     rcx, [rcx+9E0h]
 * 000000014040414A: mov     gs:858h, rcx
 * 0000000140404153: mov     cx, gs:850h
 * 000000014040415C: mov     gs:852h, cx
 * 0000000140404165: mov     cx, gs:860h
 * 000000014040416E: mov     gs:854h, cx
 * 0000000140404177: movzx   eax, word ptr gs:866h
 * 0000000140404180: cmp     gs:864h, ax
 * 0000000140404189: jz      short loc_14040419D
 * 000000014040418B: mov     gs:864h, ax
 * 0000000140404194: mov     ecx, 48h ; 'H'
 * 0000000140404199: xor     edx, edx
 * 000000014040419B: wrmsr
 * 000000014040419D: movzx   edx, word ptr gs:860h
 * 00000001404041A6: test    edx, 8
 * 00000001404041AC: jz      short loc_1404041C5
 * 00000001404041AE: mov     eax, 1
 * 00000001404041B3: xor     edx, edx
 * 00000001404041B5: mov     ecx, 49h ; 'I'
 * 00000001404041BA: wrmsr
 * 00000001404041BC: movzx   edx, word ptr gs:860h
 * 00000001404041C5: test    edx, 2
 * 00000001404041CB: jz      loc_1404042F6
 * 00000001404041D1: call    loc_1404042E4
 * 00000001404041D6: add     rsp, 8
 * 00000001404041DA: call    loc_1404042ED
 * 00000001404041DF: add     rsp, 8
 * 00000001404041E3: call    loc_1404041D6
 * 00000001404041E8: add     rsp, 8
 * 00000001404041EC: call    loc_1404041DF
 * 00000001404041F1: add     rsp, 8
 * 00000001404041F5: call    loc_1404041E8
 * 00000001404041FA: add     rsp, 8
 * 00000001404041FE: call    loc_1404041F1
 * 0000000140404203: add     rsp, 8
 * 0000000140404207: call    loc_1404041FA
 * 000000014040420C: add     rsp, 8
 * 0000000140404210: call    loc_140404203
 * 0000000140404215: add     rsp, 8
 * 0000000140404219: call    loc_14040420C
 * 000000014040421E: add     rsp, 8
 * 0000000140404222: call    loc_140404215
 * 0000000140404227: add     rsp, 8
 * 000000014040422B: call    loc_14040421E
 * 0000000140404230: add     rsp, 8
 * 0000000140404234: call    loc_140404227
 * 0000000140404239: add     rsp, 8
 * 000000014040423D: call    loc_140404230
 * 0000000140404242: add     rsp, 8
 * 0000000140404246: call    loc_140404239
 * 000000014040424B: add     rsp, 8
 * 000000014040424F: call    loc_140404242
 * 0000000140404254: add     rsp, 8
 * 0000000140404258: call    loc_14040424B
 * 000000014040425D: add     rsp, 8
 * 0000000140404261: call    loc_140404254
 * 0000000140404266: add     rsp, 8
 * 000000014040426A: call    loc_14040425D
 * 000000014040426F: add     rsp, 8
 * 0000000140404273: call    loc_140404266
 * 0000000140404278: add     rsp, 8
 * 000000014040427C: call    loc_14040426F
 * 0000000140404281: add     rsp, 8
 * 0000000140404285: call    loc_140404278
 * 000000014040428A: add     rsp, 8
 * 000000014040428E: call    loc_140404281
 * 0000000140404293: add     rsp, 8
 * 0000000140404297: call    loc_14040428A
 * 000000014040429C: add     rsp, 8
 * 00000001404042A0: call    loc_140404293
 * 00000001404042A5: add     rsp, 8
 * 00000001404042A9: call    loc_14040429C
 * 00000001404042AE: add     rsp, 8
 * 00000001404042B2: call    loc_1404042A5
 * 00000001404042B7: add     rsp, 8
 * 00000001404042BB: call    loc_1404042AE
 * 00000001404042C0: add     rsp, 8
 * 00000001404042C4: call    loc_1404042B7
 * 00000001404042C9: add     rsp, 8
 * 00000001404042CD: call    loc_1404042C0
 * 00000001404042D2: add     rsp, 8
 * 00000001404042D6: call    loc_1404042C9
 * 00000001404042DB: add     rsp, 8
 * 00000001404042DF: call    loc_1404042D2
 * 00000001404042E4: add     rsp, 8
 * 00000001404042E8: call    loc_1404042DB
 * 00000001404042ED: add     rsp, 8
 * 00000001404042F1: mov     eax, 0DADAh
 * 00000001404042F6: test    edx, 200h
 * 00000001404042FC: jz      short loc_140404303
 * 00000001404042FE: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140404303: lfence
 * 0000000140404306: mov     byte ptr gs:856h, 0
 * 000000014040430F: test    byte ptr [r10+3], 3
 * 0000000140404314: mov     word ptr [rbp+80h], 0
 * 000000014040431D: jz      short loc_140404324
 * 000000014040431F: call    KiSaveDebugRegisterState
 * 0000000140404324: cld
 * 0000000140404325: stmxcsr dword ptr [rbp-54h]
 * 0000000140404329: ldmxcsr dword ptr gs:180h
 * 0000000140404332: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140404336: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014040433A: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014040433E: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140404342: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140404346: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014040434A: cmp     byte ptr gs:801Ah, 0
 * 0000000140404353: jz      short loc_14040435A
 * 0000000140404355: call    KeWakeProcessor
 * 000000014040435A: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140404361: cmp     rax, [rbp+0E8h]
 * 0000000140404368: jnb     short loc_140404383
 * 000000014040436A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140404371: cmp     rax, [rbp+0E8h]
 * 0000000140404378: jb      short loc_140404383
 * 000000014040437A: lea     rcx, [rbp-80h]
 * 000000014040437E: call    KiCheckForSListAddress
 * 0000000140404383: xor     esi, esi
 * 0000000140404385: inc     dword ptr gs:8000h
 * 000000014040438D: jmp     KiVmbusInterruptDispatch
 */
