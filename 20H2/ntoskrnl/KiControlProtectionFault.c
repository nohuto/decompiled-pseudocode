/*
 * XREFs of KiControlProtectionFault @ 0x14040D940
 * Callers:
 *     KiControlProtectionFaultShadow @ 0x140A17BC0 (KiControlProtectionFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiControlProtectionFault @ 0x14040D940 (KiControlProtectionFault.c)
 *     KiBugCheckDispatch @ 0x14040FCC0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1404101C0 (KiFastFailDispatch.c)
 *     KiUmsExit @ 0x140410EC0 (KiUmsExit.c)
 *     KiProcessControlProtection @ 0x140510C20 (KiProcessControlProtection.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiControlProtectionFault @ 0x14040D940
 * Reason: Hex-Rays returned no pseudocode for 0x14040D940
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040D940: push    rbp
 * 000000014040D941: sub     rsp, 158h
 * 000000014040D948: lea     rbp, [rsp+80h]
 * 000000014040D950: mov     [rbp+0D8h+var_12D], 1
 * 000000014040D954: mov     [rbp+0D8h+var_128], rax
 * 000000014040D958: mov     [rbp+0D8h+var_120], rcx
 * 000000014040D95C: mov     [rbp+0D8h+var_118], rdx
 * 000000014040D960: mov     [rbp+0D8h+var_110], r8
 * 000000014040D964: mov     [rbp+0D8h+var_108], r9
 * 000000014040D968: mov     [rbp+0D8h+var_100], r10
 * 000000014040D96C: mov     [rbp+0D8h+var_F8], r11
 * 000000014040D970: test    [rbp+0D8h+arg_8], 1
 * 000000014040D977: jnz     short loc_14040D9A6
 * 000000014040D979: lfence
 * 000000014040D97C: test    byte ptr gs:278h, 1
 * 000000014040D985: jnz     short loc_14040D98F
 * 000000014040D987: lfence
 * 000000014040D98A: jmp     loc_14040DB9C
 * 000000014040D98F: movzx   eax, byte ptr gs:27Ah
 * 000000014040D998: mov     ecx, 48h ; 'H'
 * 000000014040D99D: xor     edx, edx
 * 000000014040D99F: wrmsr
 * 000000014040D9A1: jmp     loc_14040DB9C
 * 000000014040D9A6: test    cs:KiKvaShadow, 1
 * 000000014040D9AD: jnz     short loc_14040D9B2
 * 000000014040D9AF: swapgs
 * 000000014040D9B2: lfence
 * 000000014040D9B5: mov     r10, gs:188h
 * 000000014040D9BE: mov     rcx, gs:188h
 * 000000014040D9C7: mov     rcx, [rcx+220h]
 * 000000014040D9CE: mov     rcx, [rcx+9E0h]
 * 000000014040D9D5: mov     gs:270h, rcx
 * 000000014040D9DE: mov     cl, gs:850h
 * 000000014040D9E6: mov     gs:851h, cl
 * 000000014040D9EE: mov     cl, gs:278h
 * 000000014040D9F6: mov     gs:852h, cl
 * 000000014040D9FE: movzx   eax, byte ptr gs:27Bh
 * 000000014040DA07: cmp     gs:27Ah, al
 * 000000014040DA0F: jz      short loc_14040DA22
 * 000000014040DA11: mov     gs:27Ah, al
 * 000000014040DA19: mov     ecx, 48h ; 'H'
 * 000000014040DA1E: xor     edx, edx
 * 000000014040DA20: wrmsr
 * 000000014040DA22: movzx   edx, byte ptr gs:278h
 * 000000014040DA2B: test    edx, 8
 * 000000014040DA31: jz      short loc_14040DA4A
 * 000000014040DA33: mov     eax, 1
 * 000000014040DA38: xor     edx, edx
 * 000000014040DA3A: mov     ecx, 49h ; 'I'
 * 000000014040DA3F: wrmsr
 * 000000014040DA41: movzx   edx, byte ptr gs:278h
 * 000000014040DA4A: test    edx, 2
 * 000000014040DA50: jz      loc_14040DB7B
 * 000000014040DA56: call    loc_14040DB69
 * 000000014040DA5B: add     rsp, 8
 * 000000014040DA5F: call    loc_14040DB72
 * 000000014040DA64: add     rsp, 8
 * 000000014040DA68: call    loc_14040DA5B
 * 000000014040DA6D: add     rsp, 8
 * 000000014040DA71: call    loc_14040DA64
 * 000000014040DA76: add     rsp, 8
 * 000000014040DA7A: call    loc_14040DA6D
 * 000000014040DA7F: add     rsp, 8
 * 000000014040DA83: call    loc_14040DA76
 * 000000014040DA88: add     rsp, 8
 * 000000014040DA8C: call    loc_14040DA7F
 * 000000014040DA91: add     rsp, 8
 * 000000014040DA95: call    loc_14040DA88
 * 000000014040DA9A: add     rsp, 8
 * 000000014040DA9E: call    loc_14040DA91
 * 000000014040DAA3: add     rsp, 8
 * 000000014040DAA7: call    loc_14040DA9A
 * 000000014040DAAC: add     rsp, 8
 * 000000014040DAB0: call    loc_14040DAA3
 * 000000014040DAB5: add     rsp, 8
 * 000000014040DAB9: call    loc_14040DAAC
 * 000000014040DABE: add     rsp, 8
 * 000000014040DAC2: call    loc_14040DAB5
 * 000000014040DAC7: add     rsp, 8
 * 000000014040DACB: call    loc_14040DABE
 * 000000014040DAD0: add     rsp, 8
 * 000000014040DAD4: call    loc_14040DAC7
 * 000000014040DAD9: add     rsp, 8
 * 000000014040DADD: call    loc_14040DAD0
 * 000000014040DAE2: add     rsp, 8
 * 000000014040DAE6: call    loc_14040DAD9
 * 000000014040DAEB: add     rsp, 8
 * 000000014040DAEF: call    loc_14040DAE2
 * 000000014040DAF4: add     rsp, 8
 * 000000014040DAF8: call    loc_14040DAEB
 * 000000014040DAFD: add     rsp, 8
 * 000000014040DB01: call    loc_14040DAF4
 * 000000014040DB06: add     rsp, 8
 * 000000014040DB0A: call    loc_14040DAFD
 * 000000014040DB0F: add     rsp, 8
 * 000000014040DB13: call    loc_14040DB06
 * 000000014040DB18: add     rsp, 8
 * 000000014040DB1C: call    loc_14040DB0F
 * 000000014040DB21: add     rsp, 8
 * 000000014040DB25: call    loc_14040DB18
 * 000000014040DB2A: add     rsp, 8
 * 000000014040DB2E: call    loc_14040DB21
 * 000000014040DB33: add     rsp, 8
 * 000000014040DB37: call    loc_14040DB2A
 * 000000014040DB3C: add     rsp, 8
 * 000000014040DB40: call    loc_14040DB33
 * 000000014040DB45: add     rsp, 8
 * 000000014040DB49: call    loc_14040DB3C
 * 000000014040DB4E: add     rsp, 8
 * 000000014040DB52: call    loc_14040DB45
 * 000000014040DB57: add     rsp, 8
 * 000000014040DB5B: call    loc_14040DB4E
 * 000000014040DB60: add     rsp, 8
 * 000000014040DB64: call    loc_14040DB57
 * 000000014040DB69: add     rsp, 8
 * 000000014040DB6D: call    loc_14040DB60
 * 000000014040DB72: add     rsp, 8
 * 000000014040DB76: mov     eax, 0DADAh
 * 000000014040DB7B: lfence
 * 000000014040DB7E: mov     byte ptr gs:853h, 0
 * 000000014040DB87: test    byte ptr [r10+3], 3
 * 000000014040DB8C: mov     [rbp+0D8h+var_58], 0
 * 000000014040DB95: jz      short loc_14040DB9C
 * 000000014040DB97: call    KiSaveDebugRegisterState
 * 000000014040DB9C: cld
 * 000000014040DB9D: stmxcsr [rbp+0D8h+var_12C]
 * 000000014040DBA1: ldmxcsr dword ptr gs:180h
 * 000000014040DBAA: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040DBAE: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014040DBB2: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040DBB6: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014040DBBA: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040DBBE: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014040DBC2: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040DBC9: jz      short loc_14040DBD7
 * 000000014040DBCB: test    [rbp+0D8h+arg_8], 1
 * 000000014040DBD2: jz      short loc_14040DBD7
 * 000000014040DBD4: stac
 * 000000014040DBD7: mov     eax, [rbp+0E0h]
 * 000000014040DBDD: test    [rbp+0D8h+arg_10], 200h
 * 000000014040DBE7: jz      short loc_14040DBEA
 * 000000014040DBE9: sti
 * 000000014040DBEA: test    byte ptr gs:8725h, 40h
 * 000000014040DBF3: jz      short loc_14040DC3D
 * 000000014040DBF5: mov     r9, gs:188h
 * 000000014040DBFE: test    byte ptr [r9+3], 80h
 * 000000014040DC03: jnz     short loc_14040DC1F
 * 000000014040DC05: lea     rcx, [rbp+0D8h+var_158]
 * 000000014040DC09: call    KiProcessControlProtection
 * 000000014040DC0E: cmp     eax, 1
 * 000000014040DC11: jz      short loc_14040DC60
 * 000000014040DC13: cmp     eax, 2
 * 000000014040DC16: jz      short loc_14040DC1F
 * 000000014040DC18: cmp     eax, 3
 * 000000014040DC1B: jz      short loc_14040DC4C
 * 000000014040DC1D: jmp     short loc_14040DC3D
 * 000000014040DC1F: mov     r9, 39h ; '9'
 * 000000014040DC26: mov     ecx, 0C0000409h
 * 000000014040DC2B: mov     edx, 1
 * 000000014040DC30: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040DC37: call    KiFastFailDispatch
 * 000000014040DC3C: nop
 * 000000014040DC3D: mov     edx, 15h
 * 000000014040DC42: mov     ecx, 7Fh
 * 000000014040DC47: call    KiBugCheckDispatch
 * 000000014040DC4C: mov     ecx, 80000033h
 * 000000014040DC51: xor     edx, edx
 * 000000014040DC53: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040DC5A: call    KiExceptionDispatch
 * 000000014040DC5F: nop
 * 000000014040DC60: cli
 * 000000014040DC61: test    [rbp+0D8h+arg_8], 1
 * 000000014040DC68: jz      loc_14040DEEE
 * 000000014040DC6E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040DC75: jz      short loc_14040DC7A
 * 000000014040DC77: stac
 * 000000014040DC7A: mov     rcx, gs:188h
 * 000000014040DC83: test    byte ptr [rcx+0C2h], 3
 * 000000014040DC8A: jz      short loc_14040DCA7
 * 000000014040DC8C: mov     ecx, 1
 * 000000014040DC91: mov     cr8, rcx
 * 000000014040DC95: sti
 * 000000014040DC96: call    KiInitiateUserApc
 * 000000014040DC9B: cli
 * 000000014040DC9C: mov     ecx, 0
 * 000000014040DCA1: mov     cr8, rcx
 * 000000014040DCA5: jmp     short loc_14040DC7A
 * 000000014040DCA7: test    byte ptr gs:27Eh, 2
 * 000000014040DCB0: jz      short loc_14040DCB9
 * 000000014040DCB2: xor     ecx, ecx
 * 000000014040DCB4: call    KiUpdateStibpPairing
 * 000000014040DCB9: mov     rcx, gs:188h
 * 000000014040DCC2: test    dword ptr [rcx], 8000000h
 * 000000014040DCC8: jz      short loc_14040DCCF
 * 000000014040DCCA: call    KiRestoreSetContextState
 * 000000014040DCCF: mov     rcx, gs:188h
 * 000000014040DCD8: test    dword ptr [rcx], 40010000h
 * 000000014040DCDE: jz      short loc_14040DD05
 * 000000014040DCE0: test    byte ptr [rcx+2], 1
 * 000000014040DCE4: jz      short loc_14040DCF4
 * 000000014040DCE6: call    KiCopyCounters
 * 000000014040DCEB: mov     rcx, gs:188h
 * 000000014040DCF4: test    byte ptr [rcx+3], 40h
 * 000000014040DCF8: jz      short loc_14040DD05
 * 000000014040DCFA: lea     rsp, [rbp-80h]
 * 000000014040DCFE: mov     cl, 1
 * 000000014040DD00: call    KiUmsExit
 * 000000014040DD05: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014040DD09: cmp     [rbp+0D8h+var_58], 0
 * 000000014040DD11: jz      short loc_14040DD18
 * 000000014040DD13: call    KiRestoreDebugRegisterState
 * 000000014040DD18: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014040DD1C: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014040DD20: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014040DD24: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014040DD28: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014040DD2C: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014040DD30: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040DD34: mov     r10, [rbp+0D8h+var_100]
 * 000000014040DD38: mov     r9, [rbp+0D8h+var_108]
 * 000000014040DD3C: mov     r8, [rbp+0D8h+var_110]
 * 000000014040DD40: mov     byte ptr gs:853h, 0
 * 000000014040DD49: movzx   eax, byte ptr gs:27Dh
 * 000000014040DD52: cmp     gs:27Ah, al
 * 000000014040DD5A: jz      short loc_14040DD6D
 * 000000014040DD5C: mov     gs:27Ah, al
 * 000000014040DD64: mov     ecx, 48h ; 'H'
 * 000000014040DD69: xor     edx, edx
 * 000000014040DD6B: wrmsr
 * 000000014040DD6D: btr     word ptr gs:278h, 2
 * 000000014040DD78: jnb     short loc_14040DD88
 * 000000014040DD7A: mov     eax, 1
 * 000000014040DD7F: xor     edx, edx
 * 000000014040DD81: mov     ecx, 49h ; 'I'
 * 000000014040DD86: wrmsr
 * 000000014040DD88: btr     word ptr gs:278h, 5
 * 000000014040DD93: jnb     loc_14040DEBE
 * 000000014040DD99: call    loc_14040DEAC
 * 000000014040DD9E: add     rsp, 8
 * 000000014040DDA2: call    loc_14040DEB5
 * 000000014040DDA7: add     rsp, 8
 * 000000014040DDAB: call    loc_14040DD9E
 * 000000014040DDB0: add     rsp, 8
 * 000000014040DDB4: call    loc_14040DDA7
 * 000000014040DDB9: add     rsp, 8
 * 000000014040DDBD: call    loc_14040DDB0
 * 000000014040DDC2: add     rsp, 8
 * 000000014040DDC6: call    loc_14040DDB9
 * 000000014040DDCB: add     rsp, 8
 * 000000014040DDCF: call    loc_14040DDC2
 * 000000014040DDD4: add     rsp, 8
 * 000000014040DDD8: call    loc_14040DDCB
 * 000000014040DDDD: add     rsp, 8
 * 000000014040DDE1: call    loc_14040DDD4
 * 000000014040DDE6: add     rsp, 8
 * 000000014040DDEA: call    loc_14040DDDD
 * 000000014040DDEF: add     rsp, 8
 * 000000014040DDF3: call    loc_14040DDE6
 * 000000014040DDF8: add     rsp, 8
 * 000000014040DDFC: call    loc_14040DDEF
 * 000000014040DE01: add     rsp, 8
 * 000000014040DE05: call    loc_14040DDF8
 * 000000014040DE0A: add     rsp, 8
 * 000000014040DE0E: call    loc_14040DE01
 * 000000014040DE13: add     rsp, 8
 * 000000014040DE17: call    loc_14040DE0A
 * 000000014040DE1C: add     rsp, 8
 * 000000014040DE20: call    loc_14040DE13
 * 000000014040DE25: add     rsp, 8
 * 000000014040DE29: call    loc_14040DE1C
 * 000000014040DE2E: add     rsp, 8
 * 000000014040DE32: call    loc_14040DE25
 * 000000014040DE37: add     rsp, 8
 * 000000014040DE3B: call    loc_14040DE2E
 * 000000014040DE40: add     rsp, 8
 * 000000014040DE44: call    loc_14040DE37
 * 000000014040DE49: add     rsp, 8
 * 000000014040DE4D: call    loc_14040DE40
 * 000000014040DE52: add     rsp, 8
 * 000000014040DE56: call    loc_14040DE49
 * 000000014040DE5B: add     rsp, 8
 * 000000014040DE5F: call    loc_14040DE52
 * 000000014040DE64: add     rsp, 8
 * 000000014040DE68: call    loc_14040DE5B
 * 000000014040DE6D: add     rsp, 8
 * 000000014040DE71: call    loc_14040DE64
 * 000000014040DE76: add     rsp, 8
 * 000000014040DE7A: call    loc_14040DE6D
 * 000000014040DE7F: add     rsp, 8
 * 000000014040DE83: call    loc_14040DE76
 * 000000014040DE88: add     rsp, 8
 * 000000014040DE8C: call    loc_14040DE7F
 * 000000014040DE91: add     rsp, 8
 * 000000014040DE95: call    loc_14040DE88
 * 000000014040DE9A: add     rsp, 8
 * 000000014040DE9E: call    loc_14040DE91
 * 000000014040DEA3: add     rsp, 8
 * 000000014040DEA7: call    loc_14040DE9A
 * 000000014040DEAC: add     rsp, 8
 * 000000014040DEB0: call    loc_14040DEA3
 * 000000014040DEB5: add     rsp, 8
 * 000000014040DEB9: mov     eax, 0DADAh
 * 000000014040DEBE: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040DEC2: mov     rcx, [rbp+0D8h+var_120]
 * 000000014040DEC6: mov     rax, [rbp+0D8h+var_128]
 * 000000014040DECA: mov     rsp, rbp
 * 000000014040DECD: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014040DED4: add     rsp, 0E8h
 * 000000014040DEDB: test    cs:KiKvaShadow, 1
 * 000000014040DEE2: jz      short loc_14040DEE9
 * 000000014040DEE4: jmp     KiKernelExit
 * 000000014040DEE9: swapgs
 * 000000014040DEEC: iretq
 * 000000014040DEEE: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014040DEF2: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014040DEF6: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014040DEFA: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014040DEFE: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014040DF02: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014040DF06: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014040DF0A: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040DF0E: mov     r10, [rbp+0D8h+var_100]
 * 000000014040DF12: mov     r9, [rbp+0D8h+var_108]
 * 000000014040DF16: mov     r8, [rbp+0D8h+var_110]
 * 000000014040DF1A: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040DF1E: mov     rcx, [rbp+0D8h+var_120]
 * 000000014040DF22: mov     rax, [rbp+0D8h+var_128]
 * 000000014040DF26: mov     rsp, rbp
 * 000000014040DF29: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014040DF30: add     rsp, 0E8h
 * 000000014040DF37: iretq
 * 000000014040DF39: retn
 */
