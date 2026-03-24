/*
 * XREFs of HvlpGetRegister128 @ 0x1404F85E0
 * Callers:
 *     HvlSvmGetSystemCapabilities @ 0x1404F54C0 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1404F8824 (HvlpDetermineEnlightenments.c)
 * Callees:
 *     RtlRaiseException @ 0x1402E5480 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpGetRegister128 @ 0x1404F85E0
 * Reason: Hex-Rays returned no pseudocode for 0x1404F85E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404F85E0: push    rbx
 * 00000001404F85E2: sub     rsp, 20h
 * 00000001404F85E6: mov     eax, 100h
 * 00000001404F85EB: mov     r8, rdx
 * 00000001404F85EE: sub     ecx, eax
 * 00000001404F85F0: jz      short loc_1404F8647
 * 00000001404F85F2: sub     ecx, eax
 * 00000001404F85F4: jz      short loc_1404F8640
 * 00000001404F85F6: sub     ecx, 1
 * 00000001404F85F9: jz      short loc_1404F8639
 * 00000001404F85FB: sub     ecx, 1
 * 00000001404F85FE: jz      short loc_1404F8632
 * 00000001404F8600: sub     ecx, 1
 * 00000001404F8603: jz      short loc_1404F862B
 * 00000001404F8605: sub     ecx, 1
 * 00000001404F8608: jz      short loc_1404F8624
 * 00000001404F860A: cmp     ecx, 1
 * 00000001404F860D: jz      short loc_1404F861D
 * 00000001404F860F: lea     rcx, unk_140C123D0
 * 00000001404F8616: call    RtlRaiseException
 * 00000001404F861B: jmp     short loc_1404F865F
 * 00000001404F861D: mov     eax, 40000008h
 * 00000001404F8622: jmp     short loc_1404F864C
 * 00000001404F8624: mov     eax, 40000007h
 * 00000001404F8629: jmp     short loc_1404F864C
 * 00000001404F862B: mov     eax, 40000006h
 * 00000001404F8630: jmp     short loc_1404F864C
 * 00000001404F8632: mov     eax, 40000005h
 * 00000001404F8637: jmp     short loc_1404F864C
 * 00000001404F8639: mov     eax, 40000004h
 * 00000001404F863E: jmp     short loc_1404F864C
 * 00000001404F8640: mov     eax, 40000003h
 * 00000001404F8645: jmp     short loc_1404F864C
 * 00000001404F8647: mov     eax, 40000002h
 * 00000001404F864C: xor     ecx, ecx
 * 00000001404F864E: cpuid
 * 00000001404F8650: mov     [r8], eax
 * 00000001404F8653: mov     [r8+4], ebx
 * 00000001404F8657: mov     [r8+8], ecx
 * 00000001404F865B: mov     [r8+0Ch], edx
 * 00000001404F865F: add     rsp, 20h
 * 00000001404F8663: pop     rbx
 * 00000001404F8664: retn
 */
