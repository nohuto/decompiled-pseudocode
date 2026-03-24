/*
 * XREFs of KiDebugServiceTrap @ 0x140410F40
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140A14E40 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x140410F40 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x140410F40
 * Reason: Hex-Rays returned no pseudocode for 0x140410F40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140410F40: inc     qword ptr [rsp+0]
 * 0000000140410F44: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140410F4A: jnz     short loc_140410F51
 * 0000000140410F4C: and     dword ptr [rsp+4], 0
 * 0000000140410F51: sub     rsp, 8
 * 0000000140410F55: push    rbp
 * 0000000140410F56: sub     rsp, 158h
 * 0000000140410F5D: lea     rbp, [rsp+168h+var_E8]
 * 0000000140410F65: mov     byte ptr [rbp-55h], 1
 * 0000000140410F69: mov     [rbp-50h], rax
 * 0000000140410F6D: mov     [rbp-48h], rcx
 * 0000000140410F71: mov     [rbp-40h], rdx
 * 0000000140410F75: mov     [rbp-38h], r8
 * 0000000140410F79: mov     [rbp-30h], r9
 * 0000000140410F7D: mov     [rbp-28h], r10
 * 0000000140410F81: mov     [rbp-20h], r11
 * 0000000140410F85: test    byte ptr [rbp+0F0h], 1
 * 0000000140410F8C: jnz     short loc_140410FBD
 * 0000000140410F8E: lfence
 * 0000000140410F91: test    word ptr gs:860h, 1
 * 0000000140410F9C: jnz     short loc_140410FA6
 * 0000000140410F9E: lfence
 * 0000000140410FA1: jmp     loc_14041120F
 * 0000000140410FA6: movzx   eax, word ptr gs:864h
 * 0000000140410FAF: mov     ecx, 48h ; 'H'
 * 0000000140410FB4: xor     edx, edx
 * 0000000140410FB6: wrmsr
 * 0000000140410FB8: jmp     loc_14041120F
 * 0000000140410FBD: test    cs:KiKvaShadow, 1
 * 0000000140410FC4: jnz     short loc_140410FC9
 * 0000000140410FC6: swapgs
 * 0000000140410FC9: lfence
 * 0000000140410FCC: mov     r10, gs:188h
 * 0000000140410FD5: mov     rcx, gs:188h
 * 0000000140410FDE: mov     rcx, [rcx+220h]
 * 0000000140410FE5: mov     rcx, [rcx+9E0h]
 * 0000000140410FEC: mov     gs:858h, rcx
 * 0000000140410FF5: mov     cx, gs:850h
 * 0000000140410FFE: mov     gs:852h, cx
 * 0000000140411007: mov     cx, gs:860h
 * 0000000140411010: mov     gs:854h, cx
 * 0000000140411019: movzx   eax, word ptr gs:866h
 * 0000000140411022: cmp     gs:864h, ax
 * 000000014041102B: jz      short loc_14041103F
 * 000000014041102D: mov     gs:864h, ax
 * 0000000140411036: mov     ecx, 48h ; 'H'
 * 000000014041103B: xor     edx, edx
 * 000000014041103D: wrmsr
 * 000000014041103F: movzx   edx, word ptr gs:860h
 * 0000000140411048: test    edx, 8
 * 000000014041104E: jz      short loc_140411067
 * 0000000140411050: mov     eax, 1
 * 0000000140411055: xor     edx, edx
 * 0000000140411057: mov     ecx, 49h ; 'I'
 * 000000014041105C: wrmsr
 * 000000014041105E: movzx   edx, word ptr gs:860h
 * 0000000140411067: test    edx, 2
 * 000000014041106D: jz      loc_140411198
 * 0000000140411073: call    loc_140411186
 * 0000000140411078: add     rsp, 8
 * 000000014041107C: call    loc_14041118F
 * 0000000140411081: add     rsp, 8
 * 0000000140411085: call    loc_140411078
 * 000000014041108A: add     rsp, 8
 * 000000014041108E: call    loc_140411081
 * 0000000140411093: add     rsp, 8
 * 0000000140411097: call    loc_14041108A
 * 000000014041109C: add     rsp, 8
 * 00000001404110A0: call    loc_140411093
 * 00000001404110A5: add     rsp, 8
 * 00000001404110A9: call    loc_14041109C
 * 00000001404110AE: add     rsp, 8
 * 00000001404110B2: call    loc_1404110A5
 * 00000001404110B7: add     rsp, 8
 * 00000001404110BB: call    loc_1404110AE
 * 00000001404110C0: add     rsp, 8
 * 00000001404110C4: call    loc_1404110B7
 * 00000001404110C9: add     rsp, 8
 * 00000001404110CD: call    loc_1404110C0
 * 00000001404110D2: add     rsp, 8
 * 00000001404110D6: call    loc_1404110C9
 * 00000001404110DB: add     rsp, 8
 * 00000001404110DF: call    loc_1404110D2
 * 00000001404110E4: add     rsp, 8
 * 00000001404110E8: call    loc_1404110DB
 * 00000001404110ED: add     rsp, 8
 * 00000001404110F1: call    loc_1404110E4
 * 00000001404110F6: add     rsp, 8
 * 00000001404110FA: call    loc_1404110ED
 * 00000001404110FF: add     rsp, 8
 * 0000000140411103: call    loc_1404110F6
 * 0000000140411108: add     rsp, 8
 * 000000014041110C: call    loc_1404110FF
 * 0000000140411111: add     rsp, 8
 * 0000000140411115: call    loc_140411108
 * 000000014041111A: add     rsp, 8
 * 000000014041111E: call    loc_140411111
 * 0000000140411123: add     rsp, 8
 * 0000000140411127: call    loc_14041111A
 * 000000014041112C: add     rsp, 8
 * 0000000140411130: call    loc_140411123
 * 0000000140411135: add     rsp, 8
 * 0000000140411139: call    loc_14041112C
 * 000000014041113E: add     rsp, 8
 * 0000000140411142: call    loc_140411135
 * 0000000140411147: add     rsp, 8
 * 000000014041114B: call    loc_14041113E
 * 0000000140411150: add     rsp, 8
 * 0000000140411154: call    loc_140411147
 * 0000000140411159: add     rsp, 8
 * 000000014041115D: call    loc_140411150
 * 0000000140411162: add     rsp, 8
 * 0000000140411166: call    loc_140411159
 * 000000014041116B: add     rsp, 8
 * 000000014041116F: call    loc_140411162
 * 0000000140411174: add     rsp, 8
 * 0000000140411178: call    loc_14041116B
 * 000000014041117D: add     rsp, 8
 * 0000000140411181: call    loc_140411174
 * 0000000140411186: add     rsp, 8
 * 000000014041118A: call    loc_14041117D
 * 000000014041118F: add     rsp, 8
 * 0000000140411193: mov     eax, 0DADAh
 * 0000000140411198: test    edx, 200h
 * 000000014041119E: jz      short loc_1404111A5
 * 00000001404111A0: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404111A5: lfence
 * 00000001404111A8: mov     byte ptr gs:856h, 0
 * 00000001404111B1: test    byte ptr [r10+3], 80h
 * 00000001404111B6: jz      short loc_1404111FA
 * 00000001404111B8: mov     ecx, 0C0000102h
 * 00000001404111BD: rdmsr
 * 00000001404111BF: shl     rdx, 20h
 * 00000001404111C3: or      rax, rdx
 * 00000001404111C6: cmp     rax, cs:MmUserProbeAddress
 * 00000001404111CD: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001404111D5: cmp     [r10+0F0h], rax
 * 00000001404111DC: jz      short loc_1404111FA
 * 00000001404111DE: mov     rdx, [r10+1F0h]
 * 00000001404111E5: bts     dword ptr [r10+74h], 8
 * 00000001404111EB: dec     word ptr [r10+1E6h]
 * 00000001404111F3: mov     [rdx+80h], rax
 * 00000001404111FA: test    byte ptr [r10+3], 3
 * 00000001404111FF: mov     word ptr [rbp+80h], 0
 * 0000000140411208: jz      short loc_14041120F
 * 000000014041120A: call    KiSaveDebugRegisterState
 * 000000014041120F: cld
 * 0000000140411210: stmxcsr dword ptr [rbp-54h]
 * 0000000140411214: ldmxcsr dword ptr gs:180h
 * 000000014041121D: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140411221: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140411225: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140411229: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014041122D: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140411231: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140411235: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014041123C: jz      short loc_14041124A
 * 000000014041123E: test    byte ptr [rbp+0F0h], 1
 * 0000000140411245: jz      short loc_14041124A
 * 0000000140411247: stac
 * 000000014041124A: test    dword ptr [rbp+0F8h], 200h
 * 0000000140411254: jz      short loc_140411257
 * 0000000140411256: sti
 * 0000000140411257: mov     ecx, 80000003h
 * 000000014041125C: mov     edx, 1
 * 0000000140411261: mov     r9, [rbp-50h]
 * 0000000140411265: mov     r8, [rbp+0E8h]
 * 000000014041126C: call    KiExceptionDispatch
 * 0000000140411271: nop
 * 0000000140411272: retn
 */
