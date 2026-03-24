/*
 * XREFs of HvlpGetRegister64 @ 0x1404F8670
 * Callers:
 *     HvlGetReferenceTime @ 0x14038DA38 (HvlGetReferenceTime.c)
 *     HvlGetReferenceTimeUsingTscPage @ 0x14038DA70 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlEnlightenProcessor @ 0x1403A70D8 (HvlEnlightenProcessor.c)
 *     HvlLogGuestCrashInformation @ 0x1404F002C (HvlLogGuestCrashInformation.c)
 *     HvlpPhase0Enlightenments @ 0x1404F8CF4 (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1404F8EB0 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x140891120 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x1402E5480 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpGetRegister64 @ 0x1404F8670
 * Reason: Hex-Rays returned no pseudocode for 0x1404F8670
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404F8670: sub     rsp, 28h
 * 00000001404F8674: mov     eax, 90004h
 * 00000001404F8679: mov     r8, rdx
 * 00000001404F867C: cmp     ecx, eax
 * 00000001404F867E: jg      short loc_1404F86E4
 * 00000001404F8680: jz      short loc_1404F86DD
 * 00000001404F8682: cmp     ecx, 210h
 * 00000001404F8688: jl      loc_1404F8723
 * 00000001404F868E: cmp     ecx, 214h
 * 00000001404F8694: jle     short loc_1404F86D5
 * 00000001404F8696: cmp     ecx, 215h
 * 00000001404F869C: jz      short loc_1404F86CE
 * 00000001404F869E: cmp     ecx, 270h
 * 00000001404F86A4: jz      short loc_1404F86C7
 * 00000001404F86A6: cmp     ecx, 90002h
 * 00000001404F86AC: jz      short loc_1404F86C0
 * 00000001404F86AE: cmp     ecx, 90003h
 * 00000001404F86B4: jnz     short loc_1404F8723
 * 00000001404F86B6: mov     ecx, 40000002h
 * 00000001404F86BB: jmp     loc_1404F8744
 * 00000001404F86C0: mov     ecx, 40000000h
 * 00000001404F86C5: jmp     short loc_1404F8744
 * 00000001404F86C7: mov     ecx, 40000116h
 * 00000001404F86CC: jmp     short loc_1404F8744
 * 00000001404F86CE: mov     ecx, 40000105h
 * 00000001404F86D3: jmp     short loc_1404F8744
 * 00000001404F86D5: add     ecx, 3FFFFEF0h
 * 00000001404F86DB: jmp     short loc_1404F8744
 * 00000001404F86DD: mov     ecx, 40000020h
 * 00000001404F86E2: jmp     short loc_1404F8744
 * 00000001404F86E4: cmp     ecx, 90007h
 * 00000001404F86EA: jz      short loc_1404F873F
 * 00000001404F86EC: cmp     ecx, 90013h
 * 00000001404F86F2: jz      short loc_1404F8738
 * 00000001404F86F4: cmp     ecx, 90017h
 * 00000001404F86FA: jz      short loc_1404F8731
 * 00000001404F86FC: cmp     ecx, 9FFFFh
 * 00000001404F8702: jle     short loc_1404F8723
 * 00000001404F8704: cmp     ecx, 0A000Fh
 * 00000001404F870A: jle     short loc_1404F871B
 * 00000001404F870C: cmp     ecx, 0A0013h
 * 00000001404F8712: jnz     short loc_1404F8723
 * 00000001404F8714: mov     ecx, 40000083h
 * 00000001404F8719: jmp     short loc_1404F8744
 * 00000001404F871B: add     ecx, 3FF60090h
 * 00000001404F8721: jmp     short loc_1404F8744
 * 00000001404F8723: lea     rcx, unk_140C123D0
 * 00000001404F872A: call    RtlRaiseException
 * 00000001404F872F: jmp     short loc_1404F8750
 * 00000001404F8731: mov     ecx, 40000021h
 * 00000001404F8736: jmp     short loc_1404F8744
 * 00000001404F8738: mov     ecx, 40000073h
 * 00000001404F873D: jmp     short loc_1404F8744
 * 00000001404F873F: mov     ecx, 40000004h
 * 00000001404F8744: rdmsr
 * 00000001404F8746: shl     rdx, 20h
 * 00000001404F874A: or      rax, rdx
 * 00000001404F874D: mov     [r8], rax
 * 00000001404F8750: add     rsp, 28h
 * 00000001404F8754: retn
 */
