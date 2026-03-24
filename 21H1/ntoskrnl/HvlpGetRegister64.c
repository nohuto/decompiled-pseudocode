/*
 * XREFs of HvlpGetRegister64 @ 0x1404F47B0
 * Callers:
 *     HvlGetReferenceTime @ 0x14038AA58 (HvlGetReferenceTime.c)
 *     HvlGetReferenceTimeUsingTscPage @ 0x14038AA90 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlEnlightenProcessor @ 0x1403A4558 (HvlEnlightenProcessor.c)
 *     HvlLogGuestCrashInformation @ 0x1404EC16C (HvlLogGuestCrashInformation.c)
 *     HvlpPhase0Enlightenments @ 0x1404F4E1C (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1404F4FD8 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x14088A2B0 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x14032B960 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpGetRegister64 @ 0x1404F47B0
 * Reason: Hex-Rays returned no pseudocode for 0x1404F47B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404F47B0: sub     rsp, 28h
 * 00000001404F47B4: mov     eax, 90004h
 * 00000001404F47B9: mov     r8, rdx
 * 00000001404F47BC: cmp     ecx, eax
 * 00000001404F47BE: jg      short loc_1404F4824
 * 00000001404F47C0: jz      short loc_1404F481D
 * 00000001404F47C2: cmp     ecx, 210h
 * 00000001404F47C8: jl      loc_1404F4863
 * 00000001404F47CE: cmp     ecx, 214h
 * 00000001404F47D4: jle     short loc_1404F4815
 * 00000001404F47D6: cmp     ecx, 215h
 * 00000001404F47DC: jz      short loc_1404F480E
 * 00000001404F47DE: cmp     ecx, 270h
 * 00000001404F47E4: jz      short loc_1404F4807
 * 00000001404F47E6: cmp     ecx, 90002h
 * 00000001404F47EC: jz      short loc_1404F4800
 * 00000001404F47EE: cmp     ecx, 90003h
 * 00000001404F47F4: jnz     short loc_1404F4863
 * 00000001404F47F6: mov     ecx, 40000002h
 * 00000001404F47FB: jmp     loc_1404F4884
 * 00000001404F4800: mov     ecx, 40000000h
 * 00000001404F4805: jmp     short loc_1404F4884
 * 00000001404F4807: mov     ecx, 40000116h
 * 00000001404F480C: jmp     short loc_1404F4884
 * 00000001404F480E: mov     ecx, 40000105h
 * 00000001404F4813: jmp     short loc_1404F4884
 * 00000001404F4815: add     ecx, 3FFFFEF0h
 * 00000001404F481B: jmp     short loc_1404F4884
 * 00000001404F481D: mov     ecx, 40000020h
 * 00000001404F4822: jmp     short loc_1404F4884
 * 00000001404F4824: cmp     ecx, 90007h
 * 00000001404F482A: jz      short loc_1404F487F
 * 00000001404F482C: cmp     ecx, 90013h
 * 00000001404F4832: jz      short loc_1404F4878
 * 00000001404F4834: cmp     ecx, 90017h
 * 00000001404F483A: jz      short loc_1404F4871
 * 00000001404F483C: cmp     ecx, 9FFFFh
 * 00000001404F4842: jle     short loc_1404F4863
 * 00000001404F4844: cmp     ecx, 0A000Fh
 * 00000001404F484A: jle     short loc_1404F485B
 * 00000001404F484C: cmp     ecx, 0A0013h
 * 00000001404F4852: jnz     short loc_1404F4863
 * 00000001404F4854: mov     ecx, 40000083h
 * 00000001404F4859: jmp     short loc_1404F4884
 * 00000001404F485B: add     ecx, 3FF60090h
 * 00000001404F4861: jmp     short loc_1404F4884
 * 00000001404F4863: lea     rcx, unk_140C123B0
 * 00000001404F486A: call    RtlRaiseException
 * 00000001404F486F: jmp     short loc_1404F4890
 * 00000001404F4871: mov     ecx, 40000021h
 * 00000001404F4876: jmp     short loc_1404F4884
 * 00000001404F4878: mov     ecx, 40000073h
 * 00000001404F487D: jmp     short loc_1404F4884
 * 00000001404F487F: mov     ecx, 40000004h
 * 00000001404F4884: rdmsr
 * 00000001404F4886: shl     rdx, 20h
 * 00000001404F488A: or      rax, rdx
 * 00000001404F488D: mov     [r8], rax
 * 00000001404F4890: add     rsp, 28h
 * 00000001404F4894: retn
 */
