/*
 * XREFs of HvlpGetRegister64 @ 0x1404FA210
 * Callers:
 *     HvlGetReferenceTime @ 0x14038DFAC (HvlGetReferenceTime.c)
 *     HvlGetReferenceTimeUsingTscPage @ 0x14038DFE0 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlEnlightenProcessor @ 0x1403A7998 (HvlEnlightenProcessor.c)
 *     HvlLogGuestCrashInformation @ 0x1404F1BCC (HvlLogGuestCrashInformation.c)
 *     HvlpPhase0Enlightenments @ 0x1404FA894 (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1404FAA50 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x14088E6C0 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x140274220 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpGetRegister64 @ 0x1404FA210
 * Reason: Hex-Rays returned no pseudocode for 0x1404FA210
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404FA210: sub     rsp, 28h
 * 00000001404FA214: mov     eax, 90004h
 * 00000001404FA219: mov     r8, rdx
 * 00000001404FA21C: cmp     ecx, eax
 * 00000001404FA21E: jg      short loc_1404FA284
 * 00000001404FA220: jz      short loc_1404FA27D
 * 00000001404FA222: cmp     ecx, 210h
 * 00000001404FA228: jl      loc_1404FA2C3
 * 00000001404FA22E: cmp     ecx, 214h
 * 00000001404FA234: jle     short loc_1404FA275
 * 00000001404FA236: cmp     ecx, 215h
 * 00000001404FA23C: jz      short loc_1404FA26E
 * 00000001404FA23E: cmp     ecx, 270h
 * 00000001404FA244: jz      short loc_1404FA267
 * 00000001404FA246: cmp     ecx, 90002h
 * 00000001404FA24C: jz      short loc_1404FA260
 * 00000001404FA24E: cmp     ecx, 90003h
 * 00000001404FA254: jnz     short loc_1404FA2C3
 * 00000001404FA256: mov     ecx, 40000002h
 * 00000001404FA25B: jmp     loc_1404FA2E4
 * 00000001404FA260: mov     ecx, 40000000h
 * 00000001404FA265: jmp     short loc_1404FA2E4
 * 00000001404FA267: mov     ecx, 40000116h
 * 00000001404FA26C: jmp     short loc_1404FA2E4
 * 00000001404FA26E: mov     ecx, 40000105h
 * 00000001404FA273: jmp     short loc_1404FA2E4
 * 00000001404FA275: add     ecx, 3FFFFEF0h
 * 00000001404FA27B: jmp     short loc_1404FA2E4
 * 00000001404FA27D: mov     ecx, 40000020h
 * 00000001404FA282: jmp     short loc_1404FA2E4
 * 00000001404FA284: cmp     ecx, 90007h
 * 00000001404FA28A: jz      short loc_1404FA2DF
 * 00000001404FA28C: cmp     ecx, 90013h
 * 00000001404FA292: jz      short loc_1404FA2D8
 * 00000001404FA294: cmp     ecx, 90017h
 * 00000001404FA29A: jz      short loc_1404FA2D1
 * 00000001404FA29C: cmp     ecx, 9FFFFh
 * 00000001404FA2A2: jle     short loc_1404FA2C3
 * 00000001404FA2A4: cmp     ecx, 0A000Fh
 * 00000001404FA2AA: jle     short loc_1404FA2BB
 * 00000001404FA2AC: cmp     ecx, 0A0013h
 * 00000001404FA2B2: jnz     short loc_1404FA2C3
 * 00000001404FA2B4: mov     ecx, 40000083h
 * 00000001404FA2B9: jmp     short loc_1404FA2E4
 * 00000001404FA2BB: add     ecx, 3FF60090h
 * 00000001404FA2C1: jmp     short loc_1404FA2E4
 * 00000001404FA2C3: lea     rcx, unk_140C125B0
 * 00000001404FA2CA: call    RtlRaiseException
 * 00000001404FA2CF: jmp     short loc_1404FA2F0
 * 00000001404FA2D1: mov     ecx, 40000021h
 * 00000001404FA2D6: jmp     short loc_1404FA2E4
 * 00000001404FA2D8: mov     ecx, 40000073h
 * 00000001404FA2DD: jmp     short loc_1404FA2E4
 * 00000001404FA2DF: mov     ecx, 40000004h
 * 00000001404FA2E4: rdmsr
 * 00000001404FA2E6: shl     rdx, 20h
 * 00000001404FA2EA: or      rax, rdx
 * 00000001404FA2ED: mov     [r8], rax
 * 00000001404FA2F0: add     rsp, 28h
 * 00000001404FA2F4: retn
 */
