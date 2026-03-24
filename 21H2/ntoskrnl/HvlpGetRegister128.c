/*
 * XREFs of HvlpGetRegister128 @ 0x1404FA180
 * Callers:
 *     HvlSvmGetSystemCapabilities @ 0x1404F7060 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1404FA3C4 (HvlpDetermineEnlightenments.c)
 * Callees:
 *     RtlRaiseException @ 0x140274220 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpGetRegister128 @ 0x1404FA180
 * Reason: Hex-Rays returned no pseudocode for 0x1404FA180
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404FA180: push    rbx
 * 00000001404FA182: sub     rsp, 20h
 * 00000001404FA186: mov     eax, 100h
 * 00000001404FA18B: mov     r8, rdx
 * 00000001404FA18E: sub     ecx, eax
 * 00000001404FA190: jz      short loc_1404FA1E7
 * 00000001404FA192: sub     ecx, eax
 * 00000001404FA194: jz      short loc_1404FA1E0
 * 00000001404FA196: sub     ecx, 1
 * 00000001404FA199: jz      short loc_1404FA1D9
 * 00000001404FA19B: sub     ecx, 1
 * 00000001404FA19E: jz      short loc_1404FA1D2
 * 00000001404FA1A0: sub     ecx, 1
 * 00000001404FA1A3: jz      short loc_1404FA1CB
 * 00000001404FA1A5: sub     ecx, 1
 * 00000001404FA1A8: jz      short loc_1404FA1C4
 * 00000001404FA1AA: cmp     ecx, 1
 * 00000001404FA1AD: jz      short loc_1404FA1BD
 * 00000001404FA1AF: lea     rcx, unk_140C125B0
 * 00000001404FA1B6: call    RtlRaiseException
 * 00000001404FA1BB: jmp     short loc_1404FA1FF
 * 00000001404FA1BD: mov     eax, 40000008h
 * 00000001404FA1C2: jmp     short loc_1404FA1EC
 * 00000001404FA1C4: mov     eax, 40000007h
 * 00000001404FA1C9: jmp     short loc_1404FA1EC
 * 00000001404FA1CB: mov     eax, 40000006h
 * 00000001404FA1D0: jmp     short loc_1404FA1EC
 * 00000001404FA1D2: mov     eax, 40000005h
 * 00000001404FA1D7: jmp     short loc_1404FA1EC
 * 00000001404FA1D9: mov     eax, 40000004h
 * 00000001404FA1DE: jmp     short loc_1404FA1EC
 * 00000001404FA1E0: mov     eax, 40000003h
 * 00000001404FA1E5: jmp     short loc_1404FA1EC
 * 00000001404FA1E7: mov     eax, 40000002h
 * 00000001404FA1EC: xor     ecx, ecx
 * 00000001404FA1EE: cpuid
 * 00000001404FA1F0: mov     [r8], eax
 * 00000001404FA1F3: mov     [r8+4], ebx
 * 00000001404FA1F7: mov     [r8+8], ecx
 * 00000001404FA1FB: mov     [r8+0Ch], edx
 * 00000001404FA1FF: add     rsp, 20h
 * 00000001404FA203: pop     rbx
 * 00000001404FA204: retn
 */
