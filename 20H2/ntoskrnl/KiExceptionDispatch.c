/*
 * XREFs of KiExceptionDispatch @ 0x14040FD40
 * Callers:
 *     KiDivideErrorFault @ 0x140407F00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x140408300 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x140408BC0 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x140408F00 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x140409240 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140409880 (KiInvalidOpcodeFault.c)
 *     KiSegmentNotPresentFault @ 0x14040AA40 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14040AE00 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14040B140 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x14040B480 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14040BC00 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x14040BFC0 (KiAlignmentFault.c)
 *     KiXmmException @ 0x14040CF40 (KiXmmException.c)
 *     KiControlProtectionFault @ 0x14040D940 (KiControlProtectionFault.c)
 *     KiRaiseAssertion @ 0x14040E280 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x14040E5C0 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x14040EB40 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x14040F000 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140A18E40 (KiSystemCall32Shadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiDispatchException @ 0x1402E7710 (KiDispatchException.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiExceptionDispatchOnExceptionStack @ 0x1403FCD60 (KiExceptionDispatchOnExceptionStack.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 *     KiUmsExceptionEntry @ 0x140410E00 (KiUmsExceptionEntry.c)
 *     KiUmsExit @ 0x140410EC0 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiExceptionDispatch @ 0x14040FD40
 * Reason: Hex-Rays returned no pseudocode for 0x14040FD40
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040FD40: sub     rsp, 1D8h
 * 000000014040FD47: lea     rax, [rsp+1D8h+var_D8]
 * 000000014040FD4F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 000000014040FD54: movaps  [rsp+1D8h+var_198], xmm7
 * 000000014040FD59: movaps  [rsp+1D8h+var_188], xmm8
 * 000000014040FD5F: movaps  [rsp+1D8h+var_178], xmm9
 * 000000014040FD65: movaps  [rsp+1D8h+var_168], xmm10
 * 000000014040FD6B: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014040FD70: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014040FD75: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014040FD7A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014040FD7F: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014040FD84: mov     [rax], rbx
 * 000000014040FD87: mov     [rax+8], rdi
 * 000000014040FD8B: mov     [rax+10h], rsi
 * 000000014040FD8F: mov     [rax+18h], r12
 * 000000014040FD93: mov     [rax+20h], r13
 * 000000014040FD97: mov     [rax+28h], r14
 * 000000014040FD9B: mov     [rax+30h], r15
 * 000000014040FD9F: mov     rax, gs:188h
 * 000000014040FDA8: bt      dword ptr [rax+74h], 8
 * 000000014040FDAD: jnb     short loc_14040FDBD
 * 000000014040FDAF: test    byte ptr [rbp+0F0h], 1
 * 000000014040FDB6: jz      short loc_14040FDBD
 * 000000014040FDB8: call    KiUmsExceptionEntry
 * 000000014040FDBD: lea     rax, [rsp+1D8h+ExceptionRecord]
 * 000000014040FDC5: mov     [rax], ecx
 * 000000014040FDC7: xor     ecx, ecx
 * 000000014040FDC9: mov     [rax+4], ecx
 * 000000014040FDCC: mov     [rax+8], rcx
 * 000000014040FDD0: mov     [rax+10h], r8
 * 000000014040FDD4: mov     [rax+18h], edx
 * 000000014040FDD7: mov     [rax+20h], r9
 * 000000014040FDDB: mov     [rax+28h], r10
 * 000000014040FDDF: mov     [rax+30h], r11
 * 000000014040FDE3: mov     r9b, [rbp+0F0h]
 * 000000014040FDEA: and     r9b, 1
 * 000000014040FDEE: mov     [rsp+1D8h+var_1B8], 1; char
 * 000000014040FDF3: lea     r8, [rbp-80h]
 * 000000014040FDF7: mov     rdx, rsp
 * 000000014040FDFA: mov     rcx, rax; ExceptionRecord
 * 000000014040FDFD: jnz     short loc_14040FE67
 * 000000014040FDFF: mov     r10, cr8
 * 000000014040FE03: mov     r11, 2
 * 000000014040FE0A: test    dword ptr [rbp+0F8h], 200h
 * 000000014040FE14: cmovz   r10, r11
 * 000000014040FE18: cmp     r10, r11
 * 000000014040FE1B: jb      short loc_14040FE67
 * 000000014040FE1D: cmp     byte ptr gs:80A6h, 0
 * 000000014040FE26: jnz     short loc_14040FE67
 * 000000014040FE28: mov     r10, gs:80A8h
 * 000000014040FE31: add     r10, 50h ; 'P'
 * 000000014040FE35: cmp     rsp, r10
 * 000000014040FE38: ja      short loc_14040FE46
 * 000000014040FE3A: sub     r10, 6000h
 * 000000014040FE41: cmp     rsp, r10
 * 000000014040FE44: jnb     short loc_14040FE67
 * 000000014040FE46: mov     r10, gs:8758h
 * 000000014040FE4F: cmp     rsp, r10
 * 000000014040FE52: ja      short loc_14040FE60
 * 000000014040FE54: sub     r10, 6000h
 * 000000014040FE5B: cmp     rsp, r10
 * 000000014040FE5E: jnb     short loc_14040FE67
 * 000000014040FE60: call    KiExceptionDispatchOnExceptionStack
 * 000000014040FE65: jmp     short loc_14040FE6C
 * 000000014040FE67: call    KiDispatchException
 * 000000014040FE6C: lea     rcx, [rsp+1D8h+var_D8]
 * 000000014040FE74: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 000000014040FE79: movaps  xmm7, [rsp+1D8h+var_198]
 * 000000014040FE7E: movaps  xmm8, [rsp+1D8h+var_188]
 * 000000014040FE84: movaps  xmm9, [rsp+1D8h+var_178]
 * 000000014040FE8A: movaps  xmm10, [rsp+1D8h+var_168]
 * 000000014040FE90: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014040FE95: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014040FE9A: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014040FE9F: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014040FEA4: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014040FEA9: mov     rbx, [rcx]
 * 000000014040FEAC: mov     rdi, [rcx+8]
 * 000000014040FEB0: mov     rsi, [rcx+10h]
 * 000000014040FEB4: mov     r12, [rcx+18h]
 * 000000014040FEB8: mov     r13, [rcx+20h]
 * 000000014040FEBC: mov     r14, [rcx+28h]
 * 000000014040FEC0: mov     r15, [rcx+30h]
 * 000000014040FEC4: cli
 * 000000014040FEC5: test    byte ptr [rbp+0F0h], 1
 * 000000014040FECC: jz      loc_140410152
 * 000000014040FED2: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040FED9: jz      short loc_14040FEDE
 * 000000014040FEDB: stac
 * 000000014040FEDE: mov     rcx, gs:188h
 * 000000014040FEE7: test    byte ptr [rcx+0C2h], 3
 * 000000014040FEEE: jz      short loc_14040FF0B
 * 000000014040FEF0: mov     ecx, 1
 * 000000014040FEF5: mov     cr8, rcx
 * 000000014040FEF9: sti
 * 000000014040FEFA: call    KiInitiateUserApc
 * 000000014040FEFF: cli
 * 000000014040FF00: mov     ecx, 0
 * 000000014040FF05: mov     cr8, rcx
 * 000000014040FF09: jmp     short loc_14040FEDE
 * 000000014040FF0B: test    byte ptr gs:27Eh, 2
 * 000000014040FF14: jz      short loc_14040FF1D
 * 000000014040FF16: xor     ecx, ecx
 * 000000014040FF18: call    KiUpdateStibpPairing
 * 000000014040FF1D: mov     rcx, gs:188h
 * 000000014040FF26: test    dword ptr [rcx], 8000000h
 * 000000014040FF2C: jz      short loc_14040FF33
 * 000000014040FF2E: call    KiRestoreSetContextState
 * 000000014040FF33: mov     rcx, gs:188h
 * 000000014040FF3C: test    dword ptr [rcx], 40010000h
 * 000000014040FF42: jz      short loc_14040FF69
 * 000000014040FF44: test    byte ptr [rcx+2], 1
 * 000000014040FF48: jz      short loc_14040FF58
 * 000000014040FF4A: call    KiCopyCounters
 * 000000014040FF4F: mov     rcx, gs:188h
 * 000000014040FF58: test    byte ptr [rcx+3], 40h
 * 000000014040FF5C: jz      short loc_14040FF69
 * 000000014040FF5E: lea     rsp, [rbp-80h]
 * 000000014040FF62: mov     cl, 1
 * 000000014040FF64: call    KiUmsExit
 * 000000014040FF69: ldmxcsr dword ptr [rbp-54h]
 * 000000014040FF6D: cmp     word ptr [rbp+80h], 0
 * 000000014040FF75: jz      short loc_14040FF7C
 * 000000014040FF77: call    KiRestoreDebugRegisterState
 * 000000014040FF7C: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014040FF80: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014040FF84: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014040FF88: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014040FF8C: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014040FF90: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014040FF94: mov     r11, [rbp-20h]
 * 000000014040FF98: mov     r10, [rbp-28h]
 * 000000014040FF9C: mov     r9, [rbp-30h]
 * 000000014040FFA0: mov     r8, [rbp-38h]
 * 000000014040FFA4: mov     byte ptr gs:853h, 0
 * 000000014040FFAD: movzx   eax, byte ptr gs:27Dh
 * 000000014040FFB6: cmp     gs:27Ah, al
 * 000000014040FFBE: jz      short loc_14040FFD1
 * 000000014040FFC0: mov     gs:27Ah, al
 * 000000014040FFC8: mov     ecx, 48h ; 'H'
 * 000000014040FFCD: xor     edx, edx
 * 000000014040FFCF: wrmsr
 * 000000014040FFD1: btr     word ptr gs:278h, 2
 * 000000014040FFDC: jnb     short loc_14040FFEC
 * 000000014040FFDE: mov     eax, 1
 * 000000014040FFE3: xor     edx, edx
 * 000000014040FFE5: mov     ecx, 49h ; 'I'
 * 000000014040FFEA: wrmsr
 * 000000014040FFEC: btr     word ptr gs:278h, 5
 * 000000014040FFF7: jnb     loc_140410122
 * 000000014040FFFD: call    loc_140410110
 * 0000000140410002: add     rsp, 8
 * 0000000140410006: call    loc_140410119
 * 000000014041000B: add     rsp, 8
 * 000000014041000F: call    loc_140410002
 * 0000000140410014: add     rsp, 8
 * 0000000140410018: call    loc_14041000B
 * 000000014041001D: add     rsp, 8
 * 0000000140410021: call    loc_140410014
 * 0000000140410026: add     rsp, 8
 * 000000014041002A: call    loc_14041001D
 * 000000014041002F: add     rsp, 8
 * 0000000140410033: call    loc_140410026
 * 0000000140410038: add     rsp, 8
 * 000000014041003C: call    loc_14041002F
 * 0000000140410041: add     rsp, 8
 * 0000000140410045: call    loc_140410038
 * 000000014041004A: add     rsp, 8
 * 000000014041004E: call    loc_140410041
 * 0000000140410053: add     rsp, 8
 * 0000000140410057: call    loc_14041004A
 * 000000014041005C: add     rsp, 8
 * 0000000140410060: call    loc_140410053
 * 0000000140410065: add     rsp, 8
 * 0000000140410069: call    loc_14041005C
 * 000000014041006E: add     rsp, 8
 * 0000000140410072: call    loc_140410065
 * 0000000140410077: add     rsp, 8
 * 000000014041007B: call    loc_14041006E
 * 0000000140410080: add     rsp, 8
 * 0000000140410084: call    loc_140410077
 * 0000000140410089: add     rsp, 8
 * 000000014041008D: call    loc_140410080
 * 0000000140410092: add     rsp, 8
 * 0000000140410096: call    loc_140410089
 * 000000014041009B: add     rsp, 8
 * 000000014041009F: call    loc_140410092
 * 00000001404100A4: add     rsp, 8
 * 00000001404100A8: call    loc_14041009B
 * 00000001404100AD: add     rsp, 8
 * 00000001404100B1: call    loc_1404100A4
 * 00000001404100B6: add     rsp, 8
 * 00000001404100BA: call    loc_1404100AD
 * 00000001404100BF: add     rsp, 8
 * 00000001404100C3: call    loc_1404100B6
 * 00000001404100C8: add     rsp, 8
 * 00000001404100CC: call    loc_1404100BF
 * 00000001404100D1: add     rsp, 8
 * 00000001404100D5: call    loc_1404100C8
 * 00000001404100DA: add     rsp, 8
 * 00000001404100DE: call    loc_1404100D1
 * 00000001404100E3: add     rsp, 8
 * 00000001404100E7: call    loc_1404100DA
 * 00000001404100EC: add     rsp, 8
 * 00000001404100F0: call    loc_1404100E3
 * 00000001404100F5: add     rsp, 8
 * 00000001404100F9: call    loc_1404100EC
 * 00000001404100FE: add     rsp, 8
 * 0000000140410102: call    loc_1404100F5
 * 0000000140410107: add     rsp, 8
 * 000000014041010B: call    loc_1404100FE
 * 0000000140410110: add     rsp, 8
 * 0000000140410114: call    loc_140410107
 * 0000000140410119: add     rsp, 8
 * 000000014041011D: mov     eax, 0DADAh
 * 0000000140410122: mov     rdx, [rbp-40h]
 * 0000000140410126: mov     rcx, [rbp-48h]
 * 000000014041012A: mov     rax, [rbp-50h]
 * 000000014041012E: mov     rsp, rbp
 * 0000000140410131: mov     rbp, [rbp+0D8h]
 * 0000000140410138: add     rsp, 0E8h
 * 000000014041013F: test    cs:KiKvaShadow, 1
 * 0000000140410146: jz      short loc_14041014D
 * 0000000140410148: jmp     KiKernelExit
 * 000000014041014D: swapgs
 * 0000000140410150: iretq
 * 0000000140410152: ldmxcsr dword ptr [rbp-54h]
 * 0000000140410156: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014041015A: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014041015E: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140410162: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140410166: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014041016A: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014041016E: mov     r11, [rbp-20h]
 * 0000000140410172: mov     r10, [rbp-28h]
 * 0000000140410176: mov     r9, [rbp-30h]
 * 000000014041017A: mov     r8, [rbp-38h]
 * 000000014041017E: mov     rdx, [rbp-40h]
 * 0000000140410182: mov     rcx, [rbp-48h]
 * 0000000140410186: mov     rax, [rbp-50h]
 * 000000014041018A: mov     rsp, rbp
 * 000000014041018D: mov     rbp, [rbp+0D8h]
 * 0000000140410194: add     rsp, 0E8h
 * 000000014041019B: iretq
 */
