/*
 * XREFs of HvlpSetRegister64 @ 0x1404FA300
 * Callers:
 *     HvlEnlightenProcessor @ 0x1403A7998 (HvlEnlightenProcessor.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1404F17EC (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlLogGuestCrashInformation @ 0x1404F1BCC (HvlLogGuestCrashInformation.c)
 *     HvlpPhase0Enlightenments @ 0x1404FA894 (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1404FAA50 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x14088E6C0 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x140274220 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpSetRegister64 @ 0x1404FA300
 * Reason: Hex-Rays returned no pseudocode for 0x1404FA300
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404FA300: sub     rsp, 28h
 * 00000001404FA304: mov     eax, 90007h
 * 00000001404FA309: cmp     ecx, eax
 * 00000001404FA30B: jg      short loc_1404FA35B
 * 00000001404FA30D: jz      short loc_1404FA354
 * 00000001404FA30F: cmp     ecx, 210h
 * 00000001404FA315: jl      short loc_1404FA392
 * 00000001404FA317: cmp     ecx, 214h
 * 00000001404FA31D: jle     short loc_1404FA34C
 * 00000001404FA31F: cmp     ecx, 215h
 * 00000001404FA325: jz      short loc_1404FA345
 * 00000001404FA327: cmp     ecx, 270h
 * 00000001404FA32D: jz      short loc_1404FA33E
 * 00000001404FA32F: cmp     ecx, 90002h
 * 00000001404FA335: jnz     short loc_1404FA392
 * 00000001404FA337: mov     ecx, 40000000h
 * 00000001404FA33C: jmp     short loc_1404FA3AC
 * 00000001404FA33E: mov     ecx, 40000116h
 * 00000001404FA343: jmp     short loc_1404FA3AC
 * 00000001404FA345: mov     ecx, 40000105h
 * 00000001404FA34A: jmp     short loc_1404FA3AC
 * 00000001404FA34C: add     ecx, 3FFFFEF0h
 * 00000001404FA352: jmp     short loc_1404FA3AC
 * 00000001404FA354: mov     ecx, 40000004h
 * 00000001404FA359: jmp     short loc_1404FA3AC
 * 00000001404FA35B: cmp     ecx, 90013h
 * 00000001404FA361: jz      short loc_1404FA3A7
 * 00000001404FA363: cmp     ecx, 90017h
 * 00000001404FA369: jz      short loc_1404FA3A0
 * 00000001404FA36B: cmp     ecx, 9FFFFh
 * 00000001404FA371: jle     short loc_1404FA392
 * 00000001404FA373: cmp     ecx, 0A000Fh
 * 00000001404FA379: jle     short loc_1404FA38A
 * 00000001404FA37B: cmp     ecx, 0A0013h
 * 00000001404FA381: jnz     short loc_1404FA392
 * 00000001404FA383: mov     ecx, 40000083h
 * 00000001404FA388: jmp     short loc_1404FA3AC
 * 00000001404FA38A: add     ecx, 3FF60090h
 * 00000001404FA390: jmp     short loc_1404FA3AC
 * 00000001404FA392: lea     rcx, unk_140C125B0
 * 00000001404FA399: call    RtlRaiseException
 * 00000001404FA39E: jmp     short loc_1404FA3B5
 * 00000001404FA3A0: mov     ecx, 40000021h
 * 00000001404FA3A5: jmp     short loc_1404FA3AC
 * 00000001404FA3A7: mov     ecx, 40000073h
 * 00000001404FA3AC: mov     rax, rdx
 * 00000001404FA3AF: shr     rdx, 20h
 * 00000001404FA3B3: wrmsr
 * 00000001404FA3B5: add     rsp, 28h
 * 00000001404FA3B9: retn
 */
