/*
 * XREFs of KiDebugServiceTrap @ 0x140411040
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140A15E40 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x140411040 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x140411040
 * Reason: Hex-Rays returned no pseudocode for 0x140411040
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140411040: inc     qword ptr [rsp+0]
 * 0000000140411044: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014041104A: jnz     short loc_140411051
 * 000000014041104C: and     dword ptr [rsp+4], 0
 * 0000000140411051: sub     rsp, 8
 * 0000000140411055: push    rbp
 * 0000000140411056: sub     rsp, 158h
 * 000000014041105D: lea     rbp, [rsp+168h+var_E8]
 * 0000000140411065: mov     byte ptr [rbp-55h], 1
 * 0000000140411069: mov     [rbp-50h], rax
 * 000000014041106D: mov     [rbp-48h], rcx
 * 0000000140411071: mov     [rbp-40h], rdx
 * 0000000140411075: mov     [rbp-38h], r8
 * 0000000140411079: mov     [rbp-30h], r9
 * 000000014041107D: mov     [rbp-28h], r10
 * 0000000140411081: mov     [rbp-20h], r11
 * 0000000140411085: test    byte ptr [rbp+0F0h], 1
 * 000000014041108C: jnz     short loc_1404110BD
 * 000000014041108E: lfence
 * 0000000140411091: test    word ptr gs:860h, 1
 * 000000014041109C: jnz     short loc_1404110A6
 * 000000014041109E: lfence
 * 00000001404110A1: jmp     loc_14041130F
 * 00000001404110A6: movzx   eax, word ptr gs:864h
 * 00000001404110AF: mov     ecx, 48h ; 'H'
 * 00000001404110B4: xor     edx, edx
 * 00000001404110B6: wrmsr
 * 00000001404110B8: jmp     loc_14041130F
 * 00000001404110BD: test    cs:KiKvaShadow, 1
 * 00000001404110C4: jnz     short loc_1404110C9
 * 00000001404110C6: swapgs
 * 00000001404110C9: lfence
 * 00000001404110CC: mov     r10, gs:188h
 * 00000001404110D5: mov     rcx, gs:188h
 * 00000001404110DE: mov     rcx, [rcx+220h]
 * 00000001404110E5: mov     rcx, [rcx+9E0h]
 * 00000001404110EC: mov     gs:858h, rcx
 * 00000001404110F5: mov     cx, gs:850h
 * 00000001404110FE: mov     gs:852h, cx
 * 0000000140411107: mov     cx, gs:860h
 * 0000000140411110: mov     gs:854h, cx
 * 0000000140411119: movzx   eax, word ptr gs:866h
 * 0000000140411122: cmp     gs:864h, ax
 * 000000014041112B: jz      short loc_14041113F
 * 000000014041112D: mov     gs:864h, ax
 * 0000000140411136: mov     ecx, 48h ; 'H'
 * 000000014041113B: xor     edx, edx
 * 000000014041113D: wrmsr
 * 000000014041113F: movzx   edx, word ptr gs:860h
 * 0000000140411148: test    edx, 8
 * 000000014041114E: jz      short loc_140411167
 * 0000000140411150: mov     eax, 1
 * 0000000140411155: xor     edx, edx
 * 0000000140411157: mov     ecx, 49h ; 'I'
 * 000000014041115C: wrmsr
 * 000000014041115E: movzx   edx, word ptr gs:860h
 * 0000000140411167: test    edx, 2
 * 000000014041116D: jz      loc_140411298
 * 0000000140411173: call    loc_140411286
 * 0000000140411178: add     rsp, 8
 * 000000014041117C: call    loc_14041128F
 * 0000000140411181: add     rsp, 8
 * 0000000140411185: call    loc_140411178
 * 000000014041118A: add     rsp, 8
 * 000000014041118E: call    loc_140411181
 * 0000000140411193: add     rsp, 8
 * 0000000140411197: call    loc_14041118A
 * 000000014041119C: add     rsp, 8
 * 00000001404111A0: call    loc_140411193
 * 00000001404111A5: add     rsp, 8
 * 00000001404111A9: call    loc_14041119C
 * 00000001404111AE: add     rsp, 8
 * 00000001404111B2: call    loc_1404111A5
 * 00000001404111B7: add     rsp, 8
 * 00000001404111BB: call    loc_1404111AE
 * 00000001404111C0: add     rsp, 8
 * 00000001404111C4: call    loc_1404111B7
 * 00000001404111C9: add     rsp, 8
 * 00000001404111CD: call    loc_1404111C0
 * 00000001404111D2: add     rsp, 8
 * 00000001404111D6: call    loc_1404111C9
 * 00000001404111DB: add     rsp, 8
 * 00000001404111DF: call    loc_1404111D2
 * 00000001404111E4: add     rsp, 8
 * 00000001404111E8: call    loc_1404111DB
 * 00000001404111ED: add     rsp, 8
 * 00000001404111F1: call    loc_1404111E4
 * 00000001404111F6: add     rsp, 8
 * 00000001404111FA: call    loc_1404111ED
 * 00000001404111FF: add     rsp, 8
 * 0000000140411203: call    loc_1404111F6
 * 0000000140411208: add     rsp, 8
 * 000000014041120C: call    loc_1404111FF
 * 0000000140411211: add     rsp, 8
 * 0000000140411215: call    loc_140411208
 * 000000014041121A: add     rsp, 8
 * 000000014041121E: call    loc_140411211
 * 0000000140411223: add     rsp, 8
 * 0000000140411227: call    loc_14041121A
 * 000000014041122C: add     rsp, 8
 * 0000000140411230: call    loc_140411223
 * 0000000140411235: add     rsp, 8
 * 0000000140411239: call    loc_14041122C
 * 000000014041123E: add     rsp, 8
 * 0000000140411242: call    loc_140411235
 * 0000000140411247: add     rsp, 8
 * 000000014041124B: call    loc_14041123E
 * 0000000140411250: add     rsp, 8
 * 0000000140411254: call    loc_140411247
 * 0000000140411259: add     rsp, 8
 * 000000014041125D: call    loc_140411250
 * 0000000140411262: add     rsp, 8
 * 0000000140411266: call    loc_140411259
 * 000000014041126B: add     rsp, 8
 * 000000014041126F: call    loc_140411262
 * 0000000140411274: add     rsp, 8
 * 0000000140411278: call    loc_14041126B
 * 000000014041127D: add     rsp, 8
 * 0000000140411281: call    loc_140411274
 * 0000000140411286: add     rsp, 8
 * 000000014041128A: call    loc_14041127D
 * 000000014041128F: add     rsp, 8
 * 0000000140411293: mov     eax, 0DADAh
 * 0000000140411298: test    edx, 200h
 * 000000014041129E: jz      short loc_1404112A5
 * 00000001404112A0: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404112A5: lfence
 * 00000001404112A8: mov     byte ptr gs:856h, 0
 * 00000001404112B1: test    byte ptr [r10+3], 80h
 * 00000001404112B6: jz      short loc_1404112FA
 * 00000001404112B8: mov     ecx, 0C0000102h
 * 00000001404112BD: rdmsr
 * 00000001404112BF: shl     rdx, 20h
 * 00000001404112C3: or      rax, rdx
 * 00000001404112C6: cmp     rax, cs:MmUserProbeAddress
 * 00000001404112CD: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001404112D5: cmp     [r10+0F0h], rax
 * 00000001404112DC: jz      short loc_1404112FA
 * 00000001404112DE: mov     rdx, [r10+1F0h]
 * 00000001404112E5: bts     dword ptr [r10+74h], 8
 * 00000001404112EB: dec     word ptr [r10+1E6h]
 * 00000001404112F3: mov     [rdx+80h], rax
 * 00000001404112FA: test    byte ptr [r10+3], 3
 * 00000001404112FF: mov     word ptr [rbp+80h], 0
 * 0000000140411308: jz      short loc_14041130F
 * 000000014041130A: call    KiSaveDebugRegisterState
 * 000000014041130F: cld
 * 0000000140411310: stmxcsr dword ptr [rbp-54h]
 * 0000000140411314: ldmxcsr dword ptr gs:180h
 * 000000014041131D: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140411321: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140411325: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140411329: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014041132D: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140411331: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140411335: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014041133C: jz      short loc_14041134A
 * 000000014041133E: test    byte ptr [rbp+0F0h], 1
 * 0000000140411345: jz      short loc_14041134A
 * 0000000140411347: stac
 * 000000014041134A: test    dword ptr [rbp+0F8h], 200h
 * 0000000140411354: jz      short loc_140411357
 * 0000000140411356: sti
 * 0000000140411357: mov     ecx, 80000003h
 * 000000014041135C: mov     edx, 1
 * 0000000140411361: mov     r9, [rbp-50h]
 * 0000000140411365: mov     r8, [rbp+0E8h]
 * 000000014041136C: call    KiExceptionDispatch
 * 0000000140411371: nop
 * 0000000140411372: retn
 */
