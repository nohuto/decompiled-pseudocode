/*
 * XREFs of HvlpGetRegister64 @ 0x1404F4E00
 * Callers:
 *     HvlGetReferenceTime @ 0x14038B5C8 (HvlGetReferenceTime.c)
 *     HvlGetReferenceTimeUsingTscPage @ 0x14038B600 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlEnlightenProcessor @ 0x1403A4CD8 (HvlEnlightenProcessor.c)
 *     HvlLogGuestCrashInformation @ 0x1404EC7B4 (HvlLogGuestCrashInformation.c)
 *     HvlpPhase0Enlightenments @ 0x1404F546C (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1404F5628 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x14088B5D0 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x1402E6830 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpGetRegister64 @ 0x1404F4E00
 * Reason: Hex-Rays returned no pseudocode for 0x1404F4E00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404F4E00: sub     rsp, 28h
 * 00000001404F4E04: mov     eax, 90004h
 * 00000001404F4E09: mov     r8, rdx
 * 00000001404F4E0C: cmp     ecx, eax
 * 00000001404F4E0E: jg      short loc_1404F4E74
 * 00000001404F4E10: jz      short loc_1404F4E6D
 * 00000001404F4E12: cmp     ecx, 210h
 * 00000001404F4E18: jl      loc_1404F4EB3
 * 00000001404F4E1E: cmp     ecx, 214h
 * 00000001404F4E24: jle     short loc_1404F4E65
 * 00000001404F4E26: cmp     ecx, 215h
 * 00000001404F4E2C: jz      short loc_1404F4E5E
 * 00000001404F4E2E: cmp     ecx, 270h
 * 00000001404F4E34: jz      short loc_1404F4E57
 * 00000001404F4E36: cmp     ecx, 90002h
 * 00000001404F4E3C: jz      short loc_1404F4E50
 * 00000001404F4E3E: cmp     ecx, 90003h
 * 00000001404F4E44: jnz     short loc_1404F4EB3
 * 00000001404F4E46: mov     ecx, 40000002h
 * 00000001404F4E4B: jmp     loc_1404F4ED4
 * 00000001404F4E50: mov     ecx, 40000000h
 * 00000001404F4E55: jmp     short loc_1404F4ED4
 * 00000001404F4E57: mov     ecx, 40000116h
 * 00000001404F4E5C: jmp     short loc_1404F4ED4
 * 00000001404F4E5E: mov     ecx, 40000105h
 * 00000001404F4E63: jmp     short loc_1404F4ED4
 * 00000001404F4E65: add     ecx, 3FFFFEF0h
 * 00000001404F4E6B: jmp     short loc_1404F4ED4
 * 00000001404F4E6D: mov     ecx, 40000020h
 * 00000001404F4E72: jmp     short loc_1404F4ED4
 * 00000001404F4E74: cmp     ecx, 90007h
 * 00000001404F4E7A: jz      short loc_1404F4ECF
 * 00000001404F4E7C: cmp     ecx, 90013h
 * 00000001404F4E82: jz      short loc_1404F4EC8
 * 00000001404F4E84: cmp     ecx, 90017h
 * 00000001404F4E8A: jz      short loc_1404F4EC1
 * 00000001404F4E8C: cmp     ecx, 9FFFFh
 * 00000001404F4E92: jle     short loc_1404F4EB3
 * 00000001404F4E94: cmp     ecx, 0A000Fh
 * 00000001404F4E9A: jle     short loc_1404F4EAB
 * 00000001404F4E9C: cmp     ecx, 0A0013h
 * 00000001404F4EA2: jnz     short loc_1404F4EB3
 * 00000001404F4EA4: mov     ecx, 40000083h
 * 00000001404F4EA9: jmp     short loc_1404F4ED4
 * 00000001404F4EAB: add     ecx, 3FF60090h
 * 00000001404F4EB1: jmp     short loc_1404F4ED4
 * 00000001404F4EB3: lea     rcx, unk_140C123C0
 * 00000001404F4EBA: call    RtlRaiseException
 * 00000001404F4EBF: jmp     short loc_1404F4EE0
 * 00000001404F4EC1: mov     ecx, 40000021h
 * 00000001404F4EC6: jmp     short loc_1404F4ED4
 * 00000001404F4EC8: mov     ecx, 40000073h
 * 00000001404F4ECD: jmp     short loc_1404F4ED4
 * 00000001404F4ECF: mov     ecx, 40000004h
 * 00000001404F4ED4: rdmsr
 * 00000001404F4ED6: shl     rdx, 20h
 * 00000001404F4EDA: or      rax, rdx
 * 00000001404F4EDD: mov     [r8], rax
 * 00000001404F4EE0: add     rsp, 28h
 * 00000001404F4EE4: retn
 */
