/*
 * XREFs of HvlpSetRegister64 @ 0x1404F8760
 * Callers:
 *     HvlEnlightenProcessor @ 0x1403A70D8 (HvlEnlightenProcessor.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1404EFC4C (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlLogGuestCrashInformation @ 0x1404F002C (HvlLogGuestCrashInformation.c)
 *     HvlpPhase0Enlightenments @ 0x1404F8CF4 (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1404F8EB0 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x140891120 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x1402E5480 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpSetRegister64 @ 0x1404F8760
 * Reason: Hex-Rays returned no pseudocode for 0x1404F8760
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404F8760: sub     rsp, 28h
 * 00000001404F8764: mov     eax, 90007h
 * 00000001404F8769: cmp     ecx, eax
 * 00000001404F876B: jg      short loc_1404F87BB
 * 00000001404F876D: jz      short loc_1404F87B4
 * 00000001404F876F: cmp     ecx, 210h
 * 00000001404F8775: jl      short loc_1404F87F2
 * 00000001404F8777: cmp     ecx, 214h
 * 00000001404F877D: jle     short loc_1404F87AC
 * 00000001404F877F: cmp     ecx, 215h
 * 00000001404F8785: jz      short loc_1404F87A5
 * 00000001404F8787: cmp     ecx, 270h
 * 00000001404F878D: jz      short loc_1404F879E
 * 00000001404F878F: cmp     ecx, 90002h
 * 00000001404F8795: jnz     short loc_1404F87F2
 * 00000001404F8797: mov     ecx, 40000000h
 * 00000001404F879C: jmp     short loc_1404F880C
 * 00000001404F879E: mov     ecx, 40000116h
 * 00000001404F87A3: jmp     short loc_1404F880C
 * 00000001404F87A5: mov     ecx, 40000105h
 * 00000001404F87AA: jmp     short loc_1404F880C
 * 00000001404F87AC: add     ecx, 3FFFFEF0h
 * 00000001404F87B2: jmp     short loc_1404F880C
 * 00000001404F87B4: mov     ecx, 40000004h
 * 00000001404F87B9: jmp     short loc_1404F880C
 * 00000001404F87BB: cmp     ecx, 90013h
 * 00000001404F87C1: jz      short loc_1404F8807
 * 00000001404F87C3: cmp     ecx, 90017h
 * 00000001404F87C9: jz      short loc_1404F8800
 * 00000001404F87CB: cmp     ecx, 9FFFFh
 * 00000001404F87D1: jle     short loc_1404F87F2
 * 00000001404F87D3: cmp     ecx, 0A000Fh
 * 00000001404F87D9: jle     short loc_1404F87EA
 * 00000001404F87DB: cmp     ecx, 0A0013h
 * 00000001404F87E1: jnz     short loc_1404F87F2
 * 00000001404F87E3: mov     ecx, 40000083h
 * 00000001404F87E8: jmp     short loc_1404F880C
 * 00000001404F87EA: add     ecx, 3FF60090h
 * 00000001404F87F0: jmp     short loc_1404F880C
 * 00000001404F87F2: lea     rcx, unk_140C123D0
 * 00000001404F87F9: call    RtlRaiseException
 * 00000001404F87FE: jmp     short loc_1404F8815
 * 00000001404F8800: mov     ecx, 40000021h
 * 00000001404F8805: jmp     short loc_1404F880C
 * 00000001404F8807: mov     ecx, 40000073h
 * 00000001404F880C: mov     rax, rdx
 * 00000001404F880F: shr     rdx, 20h
 * 00000001404F8813: wrmsr
 * 00000001404F8815: add     rsp, 28h
 * 00000001404F8819: retn
 */
