/*
 * XREFs of HvlpGetRegister128 @ 0x1404F4720
 * Callers:
 *     HvlSvmGetSystemCapabilities @ 0x1404F1600 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1404F4964 (HvlpDetermineEnlightenments.c)
 * Callees:
 *     RtlRaiseException @ 0x14032B960 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpGetRegister128 @ 0x1404F4720
 * Reason: Hex-Rays returned no pseudocode for 0x1404F4720
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404F4720: push    rbx
 * 00000001404F4722: sub     rsp, 20h
 * 00000001404F4726: mov     eax, 100h
 * 00000001404F472B: mov     r8, rdx
 * 00000001404F472E: sub     ecx, eax
 * 00000001404F4730: jz      short loc_1404F4787
 * 00000001404F4732: sub     ecx, eax
 * 00000001404F4734: jz      short loc_1404F4780
 * 00000001404F4736: sub     ecx, 1
 * 00000001404F4739: jz      short loc_1404F4779
 * 00000001404F473B: sub     ecx, 1
 * 00000001404F473E: jz      short loc_1404F4772
 * 00000001404F4740: sub     ecx, 1
 * 00000001404F4743: jz      short loc_1404F476B
 * 00000001404F4745: sub     ecx, 1
 * 00000001404F4748: jz      short loc_1404F4764
 * 00000001404F474A: cmp     ecx, 1
 * 00000001404F474D: jz      short loc_1404F475D
 * 00000001404F474F: lea     rcx, unk_140C123B0
 * 00000001404F4756: call    RtlRaiseException
 * 00000001404F475B: jmp     short loc_1404F479F
 * 00000001404F475D: mov     eax, 40000008h
 * 00000001404F4762: jmp     short loc_1404F478C
 * 00000001404F4764: mov     eax, 40000007h
 * 00000001404F4769: jmp     short loc_1404F478C
 * 00000001404F476B: mov     eax, 40000006h
 * 00000001404F4770: jmp     short loc_1404F478C
 * 00000001404F4772: mov     eax, 40000005h
 * 00000001404F4777: jmp     short loc_1404F478C
 * 00000001404F4779: mov     eax, 40000004h
 * 00000001404F477E: jmp     short loc_1404F478C
 * 00000001404F4780: mov     eax, 40000003h
 * 00000001404F4785: jmp     short loc_1404F478C
 * 00000001404F4787: mov     eax, 40000002h
 * 00000001404F478C: xor     ecx, ecx
 * 00000001404F478E: cpuid
 * 00000001404F4790: mov     [r8], eax
 * 00000001404F4793: mov     [r8+4], ebx
 * 00000001404F4797: mov     [r8+8], ecx
 * 00000001404F479B: mov     [r8+0Ch], edx
 * 00000001404F479F: add     rsp, 20h
 * 00000001404F47A3: pop     rbx
 * 00000001404F47A4: retn
 */
