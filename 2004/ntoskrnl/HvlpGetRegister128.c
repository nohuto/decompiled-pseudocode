/*
 * XREFs of HvlpGetRegister128 @ 0x1404F4D70
 * Callers:
 *     HvlSvmGetSystemCapabilities @ 0x1404F1C50 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1404F4FB4 (HvlpDetermineEnlightenments.c)
 * Callees:
 *     RtlRaiseException @ 0x1402E6830 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpGetRegister128 @ 0x1404F4D70
 * Reason: Hex-Rays returned no pseudocode for 0x1404F4D70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404F4D70: push    rbx
 * 00000001404F4D72: sub     rsp, 20h
 * 00000001404F4D76: mov     eax, 100h
 * 00000001404F4D7B: mov     r8, rdx
 * 00000001404F4D7E: sub     ecx, eax
 * 00000001404F4D80: jz      short loc_1404F4DD7
 * 00000001404F4D82: sub     ecx, eax
 * 00000001404F4D84: jz      short loc_1404F4DD0
 * 00000001404F4D86: sub     ecx, 1
 * 00000001404F4D89: jz      short loc_1404F4DC9
 * 00000001404F4D8B: sub     ecx, 1
 * 00000001404F4D8E: jz      short loc_1404F4DC2
 * 00000001404F4D90: sub     ecx, 1
 * 00000001404F4D93: jz      short loc_1404F4DBB
 * 00000001404F4D95: sub     ecx, 1
 * 00000001404F4D98: jz      short loc_1404F4DB4
 * 00000001404F4D9A: cmp     ecx, 1
 * 00000001404F4D9D: jz      short loc_1404F4DAD
 * 00000001404F4D9F: lea     rcx, unk_140C123C0
 * 00000001404F4DA6: call    RtlRaiseException
 * 00000001404F4DAB: jmp     short loc_1404F4DEF
 * 00000001404F4DAD: mov     eax, 40000008h
 * 00000001404F4DB2: jmp     short loc_1404F4DDC
 * 00000001404F4DB4: mov     eax, 40000007h
 * 00000001404F4DB9: jmp     short loc_1404F4DDC
 * 00000001404F4DBB: mov     eax, 40000006h
 * 00000001404F4DC0: jmp     short loc_1404F4DDC
 * 00000001404F4DC2: mov     eax, 40000005h
 * 00000001404F4DC7: jmp     short loc_1404F4DDC
 * 00000001404F4DC9: mov     eax, 40000004h
 * 00000001404F4DCE: jmp     short loc_1404F4DDC
 * 00000001404F4DD0: mov     eax, 40000003h
 * 00000001404F4DD5: jmp     short loc_1404F4DDC
 * 00000001404F4DD7: mov     eax, 40000002h
 * 00000001404F4DDC: xor     ecx, ecx
 * 00000001404F4DDE: cpuid
 * 00000001404F4DE0: mov     [r8], eax
 * 00000001404F4DE3: mov     [r8+4], ebx
 * 00000001404F4DE7: mov     [r8+8], ecx
 * 00000001404F4DEB: mov     [r8+0Ch], edx
 * 00000001404F4DEF: add     rsp, 20h
 * 00000001404F4DF3: pop     rbx
 * 00000001404F4DF4: retn
 */
