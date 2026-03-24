/*
 * XREFs of HvlpSetRegister64 @ 0x1404F48A0
 * Callers:
 *     HvlEnlightenProcessor @ 0x1403A4558 (HvlEnlightenProcessor.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1404EBD8C (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlLogGuestCrashInformation @ 0x1404EC16C (HvlLogGuestCrashInformation.c)
 *     HvlpPhase0Enlightenments @ 0x1404F4E1C (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1404F4FD8 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x14088A2B0 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x14032B960 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpSetRegister64 @ 0x1404F48A0
 * Reason: Hex-Rays returned no pseudocode for 0x1404F48A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404F48A0: sub     rsp, 28h
 * 00000001404F48A4: mov     eax, 90007h
 * 00000001404F48A9: cmp     ecx, eax
 * 00000001404F48AB: jg      short loc_1404F48FB
 * 00000001404F48AD: jz      short loc_1404F48F4
 * 00000001404F48AF: cmp     ecx, 210h
 * 00000001404F48B5: jl      short loc_1404F4932
 * 00000001404F48B7: cmp     ecx, 214h
 * 00000001404F48BD: jle     short loc_1404F48EC
 * 00000001404F48BF: cmp     ecx, 215h
 * 00000001404F48C5: jz      short loc_1404F48E5
 * 00000001404F48C7: cmp     ecx, 270h
 * 00000001404F48CD: jz      short loc_1404F48DE
 * 00000001404F48CF: cmp     ecx, 90002h
 * 00000001404F48D5: jnz     short loc_1404F4932
 * 00000001404F48D7: mov     ecx, 40000000h
 * 00000001404F48DC: jmp     short loc_1404F494C
 * 00000001404F48DE: mov     ecx, 40000116h
 * 00000001404F48E3: jmp     short loc_1404F494C
 * 00000001404F48E5: mov     ecx, 40000105h
 * 00000001404F48EA: jmp     short loc_1404F494C
 * 00000001404F48EC: add     ecx, 3FFFFEF0h
 * 00000001404F48F2: jmp     short loc_1404F494C
 * 00000001404F48F4: mov     ecx, 40000004h
 * 00000001404F48F9: jmp     short loc_1404F494C
 * 00000001404F48FB: cmp     ecx, 90013h
 * 00000001404F4901: jz      short loc_1404F4947
 * 00000001404F4903: cmp     ecx, 90017h
 * 00000001404F4909: jz      short loc_1404F4940
 * 00000001404F490B: cmp     ecx, 9FFFFh
 * 00000001404F4911: jle     short loc_1404F4932
 * 00000001404F4913: cmp     ecx, 0A000Fh
 * 00000001404F4919: jle     short loc_1404F492A
 * 00000001404F491B: cmp     ecx, 0A0013h
 * 00000001404F4921: jnz     short loc_1404F4932
 * 00000001404F4923: mov     ecx, 40000083h
 * 00000001404F4928: jmp     short loc_1404F494C
 * 00000001404F492A: add     ecx, 3FF60090h
 * 00000001404F4930: jmp     short loc_1404F494C
 * 00000001404F4932: lea     rcx, unk_140C123B0
 * 00000001404F4939: call    RtlRaiseException
 * 00000001404F493E: jmp     short loc_1404F4955
 * 00000001404F4940: mov     ecx, 40000021h
 * 00000001404F4945: jmp     short loc_1404F494C
 * 00000001404F4947: mov     ecx, 40000073h
 * 00000001404F494C: mov     rax, rdx
 * 00000001404F494F: shr     rdx, 20h
 * 00000001404F4953: wrmsr
 * 00000001404F4955: add     rsp, 28h
 * 00000001404F4959: retn
 */
