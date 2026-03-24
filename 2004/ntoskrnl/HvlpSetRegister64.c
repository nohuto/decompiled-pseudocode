/*
 * XREFs of HvlpSetRegister64 @ 0x1404F4EF0
 * Callers:
 *     HvlEnlightenProcessor @ 0x1403A4CD8 (HvlEnlightenProcessor.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1404EC3BC (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlLogGuestCrashInformation @ 0x1404EC7B4 (HvlLogGuestCrashInformation.c)
 *     HvlpPhase0Enlightenments @ 0x1404F546C (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1404F5628 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x14088B5D0 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x1402E6830 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpSetRegister64 @ 0x1404F4EF0
 * Reason: Hex-Rays returned no pseudocode for 0x1404F4EF0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404F4EF0: sub     rsp, 28h
 * 00000001404F4EF4: mov     eax, 90007h
 * 00000001404F4EF9: cmp     ecx, eax
 * 00000001404F4EFB: jg      short loc_1404F4F4B
 * 00000001404F4EFD: jz      short loc_1404F4F44
 * 00000001404F4EFF: cmp     ecx, 210h
 * 00000001404F4F05: jl      short loc_1404F4F82
 * 00000001404F4F07: cmp     ecx, 214h
 * 00000001404F4F0D: jle     short loc_1404F4F3C
 * 00000001404F4F0F: cmp     ecx, 215h
 * 00000001404F4F15: jz      short loc_1404F4F35
 * 00000001404F4F17: cmp     ecx, 270h
 * 00000001404F4F1D: jz      short loc_1404F4F2E
 * 00000001404F4F1F: cmp     ecx, 90002h
 * 00000001404F4F25: jnz     short loc_1404F4F82
 * 00000001404F4F27: mov     ecx, 40000000h
 * 00000001404F4F2C: jmp     short loc_1404F4F9C
 * 00000001404F4F2E: mov     ecx, 40000116h
 * 00000001404F4F33: jmp     short loc_1404F4F9C
 * 00000001404F4F35: mov     ecx, 40000105h
 * 00000001404F4F3A: jmp     short loc_1404F4F9C
 * 00000001404F4F3C: add     ecx, 3FFFFEF0h
 * 00000001404F4F42: jmp     short loc_1404F4F9C
 * 00000001404F4F44: mov     ecx, 40000004h
 * 00000001404F4F49: jmp     short loc_1404F4F9C
 * 00000001404F4F4B: cmp     ecx, 90013h
 * 00000001404F4F51: jz      short loc_1404F4F97
 * 00000001404F4F53: cmp     ecx, 90017h
 * 00000001404F4F59: jz      short loc_1404F4F90
 * 00000001404F4F5B: cmp     ecx, 9FFFFh
 * 00000001404F4F61: jle     short loc_1404F4F82
 * 00000001404F4F63: cmp     ecx, 0A000Fh
 * 00000001404F4F69: jle     short loc_1404F4F7A
 * 00000001404F4F6B: cmp     ecx, 0A0013h
 * 00000001404F4F71: jnz     short loc_1404F4F82
 * 00000001404F4F73: mov     ecx, 40000083h
 * 00000001404F4F78: jmp     short loc_1404F4F9C
 * 00000001404F4F7A: add     ecx, 3FF60090h
 * 00000001404F4F80: jmp     short loc_1404F4F9C
 * 00000001404F4F82: lea     rcx, unk_140C123C0
 * 00000001404F4F89: call    RtlRaiseException
 * 00000001404F4F8E: jmp     short loc_1404F4FA5
 * 00000001404F4F90: mov     ecx, 40000021h
 * 00000001404F4F95: jmp     short loc_1404F4F9C
 * 00000001404F4F97: mov     ecx, 40000073h
 * 00000001404F4F9C: mov     rax, rdx
 * 00000001404F4F9F: shr     rdx, 20h
 * 00000001404F4FA3: wrmsr
 * 00000001404F4FA5: add     rsp, 28h
 * 00000001404F4FA9: retn
 */
