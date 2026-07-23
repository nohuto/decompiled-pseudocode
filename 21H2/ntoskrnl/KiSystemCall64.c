/*
 * XREFs of KiSystemCall64 @ 0x140411B00
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiConvertToGuiThread @ 0x140402D00 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x140411B00 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x140412840 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiUmsCallEntry @ 0x140413880 (KiUmsCallEntry.c)
 *     KiUmsExit @ 0x140413B00 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 *     PsAltSystemCallDispatch @ 0x140582D60 (PsAltSystemCallDispatch.c)
 *     PerfInfoLogSysCallEntry @ 0x1405AA530 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405AA5D0 (PerfInfoLogSysCallExit.c)
 *     PsInvokeWin32Callout @ 0x140684DA0 (PsInvokeWin32Callout.c)
 *     KiTrackSystemCallEntry @ 0x1408BD250 (KiTrackSystemCallEntry.c)
 *     KiTrackSystemCallExit @ 0x1408BD370 (KiTrackSystemCallExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64 @ 0x140411B00
 * Reason: Hex-Rays returned no pseudocode for 0x140411B00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140411B00: swapgs
 * 0000000140411B03: mov     gs:10h, rsp
 * 0000000140411B0C: mov     rsp, gs:1A8h
 * 0000000140411B15: push    2Bh ; '+'
 * 0000000140411B17: push    qword ptr gs:10h
 * 0000000140411B1F: push    r11
 * 0000000140411B21: push    33h ; '3'
 * 0000000140411B23: push    rcx
 * 0000000140411B24: mov     rcx, r10
 * 0000000140411B27: sub     rsp, 8
 * 0000000140411B2B: push    rbp
 * 0000000140411B2C: sub     rsp, 158h
 * 0000000140411B33: lea     rbp, [rsp+190h+var_110]
 * 0000000140411B3B: mov     [rbp+0C0h], rbx
 * 0000000140411B42: mov     [rbp+0C8h], rdi
 * 0000000140411B49: mov     [rbp+0D0h], rsi
 * 0000000140411B50: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140411B57: jz      short loc_140411B65
 * 0000000140411B59: test    byte ptr [rbp+0F0h], 1
 * 0000000140411B60: jz      short loc_140411B65
 * 0000000140411B62: stac
 * 0000000140411B65: mov     [rbp-50h], rax
 * 0000000140411B69: mov     [rbp-48h], rcx
 * 0000000140411B6D: mov     [rbp-40h], rdx
 * 0000000140411B71: mov     rcx, gs:188h
 * 0000000140411B7A: mov     rcx, [rcx+220h]
 * 0000000140411B81: mov     rcx, [rcx+9E0h]
 * 0000000140411B88: mov     gs:858h, rcx
 * 0000000140411B91: mov     cx, gs:850h
 * 0000000140411B9A: mov     gs:852h, cx
 * 0000000140411BA3: mov     cx, gs:860h
 * 0000000140411BAC: mov     gs:854h, cx
 * 0000000140411BB5: movzx   eax, word ptr gs:866h
 * 0000000140411BBE: cmp     gs:864h, ax
 * 0000000140411BC7: jz      short loc_140411BDB
 * 0000000140411BC9: mov     gs:864h, ax
 * 0000000140411BD2: mov     ecx, 48h ; 'H'
 * 0000000140411BD7: xor     edx, edx
 * 0000000140411BD9: wrmsr
 * 0000000140411BDB: movzx   edx, word ptr gs:860h
 * 0000000140411BE4: test    edx, 8
 * 0000000140411BEA: jz      short loc_140411C03
 * 0000000140411BEC: mov     eax, 1
 * 0000000140411BF1: xor     edx, edx
 * 0000000140411BF3: mov     ecx, 49h ; 'I'
 * 0000000140411BF8: wrmsr
 * 0000000140411BFA: movzx   edx, word ptr gs:860h
 * 0000000140411C03: test    edx, 2
 * 0000000140411C09: jz      loc_140411D34
 * 0000000140411C0F: call    loc_140411D22
 * 0000000140411C14: add     rsp, 8
 * 0000000140411C18: call    loc_140411D2B
 * 0000000140411C1D: add     rsp, 8
 * 0000000140411C21: call    loc_140411C14
 * 0000000140411C26: add     rsp, 8
 * 0000000140411C2A: call    loc_140411C1D
 * 0000000140411C2F: add     rsp, 8
 * 0000000140411C33: call    loc_140411C26
 * 0000000140411C38: add     rsp, 8
 * 0000000140411C3C: call    loc_140411C2F
 * 0000000140411C41: add     rsp, 8
 * 0000000140411C45: call    loc_140411C38
 * 0000000140411C4A: add     rsp, 8
 * 0000000140411C4E: call    loc_140411C41
 * 0000000140411C53: add     rsp, 8
 * 0000000140411C57: call    loc_140411C4A
 * 0000000140411C5C: add     rsp, 8
 * 0000000140411C60: call    loc_140411C53
 * 0000000140411C65: add     rsp, 8
 * 0000000140411C69: call    loc_140411C5C
 * 0000000140411C6E: add     rsp, 8
 * 0000000140411C72: call    loc_140411C65
 * 0000000140411C77: add     rsp, 8
 * 0000000140411C7B: call    loc_140411C6E
 * 0000000140411C80: add     rsp, 8
 * 0000000140411C84: call    loc_140411C77
 * 0000000140411C89: add     rsp, 8
 * 0000000140411C8D: call    loc_140411C80
 * 0000000140411C92: add     rsp, 8
 * 0000000140411C96: call    loc_140411C89
 * 0000000140411C9B: add     rsp, 8
 * 0000000140411C9F: call    loc_140411C92
 * 0000000140411CA4: add     rsp, 8
 * 0000000140411CA8: call    loc_140411C9B
 * 0000000140411CAD: add     rsp, 8
 * 0000000140411CB1: call    loc_140411CA4
 * 0000000140411CB6: add     rsp, 8
 * 0000000140411CBA: call    loc_140411CAD
 * 0000000140411CBF: add     rsp, 8
 * 0000000140411CC3: call    loc_140411CB6
 * 0000000140411CC8: add     rsp, 8
 * 0000000140411CCC: call    loc_140411CBF
 * 0000000140411CD1: add     rsp, 8
 * 0000000140411CD5: call    loc_140411CC8
 * 0000000140411CDA: add     rsp, 8
 * 0000000140411CDE: call    loc_140411CD1
 * 0000000140411CE3: add     rsp, 8
 * 0000000140411CE7: call    loc_140411CDA
 * 0000000140411CEC: add     rsp, 8
 * 0000000140411CF0: call    loc_140411CE3
 * 0000000140411CF5: add     rsp, 8
 * 0000000140411CF9: call    loc_140411CEC
 * 0000000140411CFE: add     rsp, 8
 * 0000000140411D02: call    loc_140411CF5
 * 0000000140411D07: add     rsp, 8
 * 0000000140411D0B: call    loc_140411CFE
 * 0000000140411D10: add     rsp, 8
 * 0000000140411D14: call    loc_140411D07
 * 0000000140411D19: add     rsp, 8
 * 0000000140411D1D: call    loc_140411D10
 * 0000000140411D22: add     rsp, 8
 * 0000000140411D26: call    loc_140411D19
 * 0000000140411D2B: add     rsp, 8
 * 0000000140411D2F: mov     eax, 0DADAh
 * 0000000140411D34: test    edx, 200h
 * 0000000140411D3A: jz      short loc_140411D41
 * 0000000140411D3C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140411D41: lfence
 * 0000000140411D44: mov     byte ptr gs:856h, 0
 * 0000000140411D4D: mov     byte ptr [rbp-55h], 2
 * 0000000140411D51: mov     rbx, gs:188h
 * 0000000140411D5A: prefetchw byte ptr [rbx+90h]
 * 0000000140411D61: stmxcsr dword ptr [rbp-54h]
 * 0000000140411D65: ldmxcsr dword ptr gs:180h
 * 0000000140411D6E: cmp     byte ptr [rbx+3], 0
 * 0000000140411D72: mov     word ptr [rbp+80h], 0
 * 0000000140411D7B: jz      loc_140411E51
 * 0000000140411D81: test    byte ptr [rbx+3], 3
 * 0000000140411D85: mov     [rbp-38h], r8
 * 0000000140411D89: mov     [rbp-30h], r9
 * 0000000140411D8D: jz      short loc_140411D94
 * 0000000140411D8F: call    KiSaveDebugRegisterState
 * 0000000140411D94: test    byte ptr [rbx+3], 24h
 * 0000000140411D98: jz      short loc_140411DF0
 * 0000000140411D9A: mov     [rbp-20h], r10
 * 0000000140411D9E: mov     [rbp-28h], r10
 * 0000000140411DA2: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140411DA6: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140411DAA: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140411DAE: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140411DB2: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140411DB6: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140411DBA: sti
 * 0000000140411DBB: mov     rcx, rsp
 * 0000000140411DBE: call    PsAltSystemCallDispatch
 * 0000000140411DC3: cmp     al, 1
 * 0000000140411DC5: jz      short loc_140411DF0
 * 0000000140411DC7: mov     rax, [rbp-50h]
 * 0000000140411DCB: jl      short loc_140411DE1
 * 0000000140411DCD: mov     ecx, 0C000001Ch
 * 0000000140411DD2: xor     edx, edx
 * 0000000140411DD4: mov     r8, [rbp+0E8h]
 * 0000000140411DDB: call    KiExceptionDispatch
 * 0000000140411DE0: int     3; Trap to Debugger
 * 0000000140411DE1: test    byte ptr [rbx+3], 4
 * 0000000140411DE5: jz      KiSystemServiceExit
 * 0000000140411DEB: jmp     KiSystemServiceExitPico
 * 0000000140411DF0: test    byte ptr [rbx+3], 80h
 * 0000000140411DF4: jz      short loc_140411E3E
 * 0000000140411DF6: mov     ecx, 0C0000102h
 * 0000000140411DFB: rdmsr
 * 0000000140411DFD: shl     rdx, 20h
 * 0000000140411E01: or      rax, rdx
 * 0000000140411E04: cmp     rax, cs:MmUserProbeAddress
 * 0000000140411E0B: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140411E13: cmp     [rbx+0F0h], rax
 * 0000000140411E1A: jz      short loc_140411E3E
 * 0000000140411E1C: mov     rdx, [rbx+1F0h]
 * 0000000140411E23: bts     dword ptr [rbx+74h], 8
 * 0000000140411E28: dec     word ptr [rbx+1E6h]
 * 0000000140411E2F: mov     [rdx+80h], rax
 * 0000000140411E36: sti
 * 0000000140411E37: call    KiUmsCallEntry
 * 0000000140411E3C: jmp     short loc_140411E49
 * 0000000140411E3E: test    byte ptr [rbx+3], 40h
 * 0000000140411E42: jz      short loc_140411E49
 * 0000000140411E44: bts     dword ptr [rbx+74h], 10h
 * 0000000140411E49: mov     r8, [rbp-38h]
 * 0000000140411E4D: mov     r9, [rbp-30h]
 * 0000000140411E51: mov     rax, [rbp-50h]
 * 0000000140411E55: mov     rcx, [rbp-48h]
 * 0000000140411E59: mov     rdx, [rbp-40h]
 * 0000000140411E5D: sti
 * 0000000140411E5E: mov     [rbx+88h], rcx
 * 0000000140411E65: mov     [rbx+80h], eax
 * 0000000140411E6B: nop     dword ptr [rax+rax+00h]
 * 0000000140411E70: mov     [rbx+90h], rsp
 * 0000000140411E77: mov     edi, eax
 * 0000000140411E79: shr     edi, 7
 * 0000000140411E7C: and     edi, 20h
 * 0000000140411E7F: and     eax, 0FFFh
 * 0000000140411E84: lea     r10, KeServiceDescriptorTable
 * 0000000140411E8B: lea     r11, KeServiceDescriptorTableShadow
 * 0000000140411E92: test    dword ptr [rbx+78h], 80h
 * 0000000140411E99: jz      short loc_140411EAE
 * 0000000140411E9B: test    dword ptr [rbx+78h], 200000h
 * 0000000140411EA2: jz      short loc_140411EAB
 * 0000000140411EA4: lea     r11, KeServiceDescriptorTableFilter
 * 0000000140411EAB: mov     r10, r11
 * 0000000140411EAE: cmp     eax, [r10+rdi+10h]
 * 0000000140411EB3: jnb     loc_1404126AF
 * 0000000140411EB9: mov     r10, [r10+rdi]
 * 0000000140411EBD: movsxd  r11, dword ptr [r10+rax*4]
 * 0000000140411EC1: mov     rax, r11
 * 0000000140411EC4: sar     r11, 4
 * 0000000140411EC8: add     r10, r11
 * 0000000140411ECB: cmp     edi, 20h ; ' '
 * 0000000140411ECE: jnz     short loc_140411F20
 * 0000000140411ED0: mov     r11, [rbx+0F0h]
 * 0000000140411ED7: cmp     dword ptr [r11+1740h], 0
 * 0000000140411EDF: jz      short loc_140411F20
 * 0000000140411EE1: mov     [rbp-50h], rax
 * 0000000140411EE5: mov     [rbp-48h], rcx
 * 0000000140411EE9: mov     [rbp-40h], rdx
 * 0000000140411EED: mov     rbx, r8
 * 0000000140411EF0: mov     rdi, r9
 * 0000000140411EF3: mov     rsi, r10
 * 0000000140411EF6: mov     ecx, 7
 * 0000000140411EFB: xor     edx, edx
 * 0000000140411EFD: xor     r8, r8
 * 0000000140411F00: xor     r9, r9
 * 0000000140411F03: call    PsInvokeWin32Callout
 * 0000000140411F08: mov     rax, [rbp-50h]
 * 0000000140411F0C: mov     rcx, [rbp-48h]
 * 0000000140411F10: mov     rdx, [rbp-40h]
 * 0000000140411F14: mov     r8, rbx
 * 0000000140411F17: mov     r9, rdi
 * 0000000140411F1A: mov     r10, rsi
 * 0000000140411F1D: nop     dword ptr [rax]
 * 0000000140411F20: and     eax, 0Fh
 * 0000000140411F23: jz      KiSystemServiceCopyEnd
 * 0000000140411F29: shl     eax, 3
 * 0000000140411F2C: lea     rsp, [rsp-70h]
 * 0000000140411F31: lea     rdi, [rsp+100h+var_E8]
 * 0000000140411F36: mov     rsi, [rbp+100h]
 * 0000000140411F3D: lea     rsi, [rsi+20h]
 * 0000000140411F41: test    byte ptr [rbp+0F0h], 1
 * 0000000140411F48: jz      short loc_140411F60
 * 0000000140411F4A: cmp     rsi, cs:MmUserProbeAddress
 * 0000000140411F51: cmovnb  rsi, cs:MmUserProbeAddress
 * 0000000140411F59: nop     dword ptr [rax+00000000h]
 * 0000000140411F60: lea     r11, KiSystemServiceCopyEnd
 * 0000000140411F67: sub     r11, rax
 * 0000000140411F6A: jmp     r11
 * 0000000140411F70: mov     rax, [rsi+70h]
 * 0000000140411F74: mov     [rdi+70h], rax
 * 0000000140411F78: mov     rax, [rsi+68h]
 * 0000000140411F7C: mov     [rdi+68h], rax
 * 0000000140411F80: mov     rax, [rsi+60h]
 * 0000000140411F84: mov     [rdi+60h], rax
 * 0000000140411F88: mov     rax, [rsi+58h]
 * 0000000140411F8C: mov     [rdi+58h], rax
 * 0000000140411F90: mov     rax, [rsi+50h]
 * 0000000140411F94: mov     [rdi+50h], rax
 * 0000000140411F98: mov     rax, [rsi+48h]
 * 0000000140411F9C: mov     [rdi+48h], rax
 * 0000000140411FA0: mov     rax, [rsi+40h]
 * 0000000140411FA4: mov     [rdi+40h], rax
 * 0000000140411FA8: mov     rax, [rsi+38h]
 * 0000000140411FAC: mov     [rdi+38h], rax
 * 0000000140411FB0: mov     rax, [rsi+30h]
 * 0000000140411FB4: mov     [rdi+30h], rax
 * 0000000140411FB8: mov     rax, [rsi+28h]
 * 0000000140411FBC: mov     [rdi+28h], rax
 * 0000000140411FC0: mov     rax, [rsi+20h]
 * 0000000140411FC4: mov     [rdi+20h], rax
 * 0000000140411FC8: mov     rax, [rsi+18h]
 * 0000000140411FCC: mov     [rdi+18h], rax
 * 0000000140411FD0: mov     rax, [rsi+10h]
 * 0000000140411FD4: mov     [rdi+10h], rax
 * 0000000140411FD8: mov     rax, [rsi+8]
 * 0000000140411FDC: mov     [rdi+8], rax
 * 0000000140411FE0: test    cs:KiDynamicTraceMask, 1
 * 0000000140411FEA: jnz     loc_14041274D
 * 0000000140411FF0: test    dword ptr cs:PerfGlobalGroupMask+8, 40h
 * 0000000140411FFA: jnz     loc_1404127C1
 * 0000000140412000: mov     rax, r10
 * 0000000140412003: call    rax
 * 0000000140412005: nop     dword ptr [rax]
 * 0000000140412008: inc     dword ptr gs:2EB8h
 * 0000000140412010: mov     rbx, [rbp+0C0h]
 * 0000000140412017: mov     rdi, [rbp+0C8h]
 * 000000014041201E: mov     rsi, [rbp+0D0h]
 * 0000000140412025: mov     r11, gs:188h
 * 000000014041202E: test    byte ptr [rbp+0F0h], 1
 * 0000000140412035: jz      loc_1404123BF
 * 000000014041203B: mov     rcx, cr8
 * 000000014041203F: or      cl, [r11+24Ah]
 * 0000000140412046: or      ecx, [r11+1E4h]
 * 000000014041204D: jnz     loc_140412719
 * 0000000140412053: cli
 * 0000000140412054: mov     rcx, gs:188h
 * 000000014041205D: test    byte ptr [rcx+0C2h], 3
 * 0000000140412064: jz      short loc_1404120BF
 * 0000000140412066: mov     [rbp-50h], rax
 * 000000014041206A: xor     eax, eax
 * 000000014041206C: mov     [rbp-48h], rax
 * 0000000140412070: mov     [rbp-40h], rax
 * 0000000140412074: mov     [rbp-38h], rax
 * 0000000140412078: mov     [rbp-30h], rax
 * 000000014041207C: mov     [rbp-28h], rax
 * 0000000140412080: mov     [rbp-20h], rax
 * 0000000140412084: pxor    xmm0, xmm0
 * 0000000140412088: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014041208C: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140412090: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140412094: movaps  xmmword ptr [rbp+20h], xmm0
 * 0000000140412098: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014041209C: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001404120A0: mov     ecx, 1
 * 00000001404120A5: mov     cr8, rcx
 * 00000001404120A9: sti
 * 00000001404120AA: call    KiInitiateUserApc
 * 00000001404120AF: cli
 * 00000001404120B0: mov     ecx, 0
 * 00000001404120B5: mov     cr8, rcx
 * 00000001404120B9: mov     rax, [rbp-50h]
 * 00000001404120BD: jmp     short loc_140412054
 * 00000001404120BF: test    byte ptr gs:86Ch, 2
 * 00000001404120C8: jz      short loc_1404120D9
 * 00000001404120CA: mov     [rbp-50h], rax
 * 00000001404120CE: xor     ecx, ecx
 * 00000001404120D0: call    KiUpdateStibpPairing
 * 00000001404120D5: mov     rax, [rbp-50h]
 * 00000001404120D9: mov     rcx, gs:188h
 * 00000001404120E2: test    dword ptr [rcx], 8000000h
 * 00000001404120E8: jz      short loc_140412129
 * 00000001404120EA: mov     [rbp-50h], rax
 * 00000001404120EE: xor     eax, eax
 * 00000001404120F0: mov     [rbp-48h], rax
 * 00000001404120F4: mov     [rbp-40h], rax
 * 00000001404120F8: mov     [rbp-38h], rax
 * 00000001404120FC: mov     [rbp-30h], rax
 * 0000000140412100: mov     [rbp-28h], rax
 * 0000000140412104: mov     [rbp-20h], rax
 * 0000000140412108: pxor    xmm0, xmm0
 * 000000014041210C: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140412110: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140412114: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140412118: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014041211C: movaps  xmmword ptr [rbp+30h], xmm0
 * 0000000140412120: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140412124: call    KiRestoreSetContextState
 * 0000000140412129: mov     rcx, gs:188h
 * 0000000140412132: test    dword ptr [rcx], 40010000h
 * 0000000140412138: jz      short loc_140412167
 * 000000014041213A: mov     [rbp-50h], rax
 * 000000014041213E: test    byte ptr [rcx+2], 1
 * 0000000140412142: jz      short loc_140412152
 * 0000000140412144: call    KiCopyCounters
 * 0000000140412149: mov     rcx, gs:188h
 * 0000000140412152: test    byte ptr [rcx+3], 40h
 * 0000000140412156: jz      short loc_140412163
 * 0000000140412158: lea     rsp, [rbp-80h]
 * 000000014041215C: xor     ecx, ecx
 * 000000014041215E: call    KiUmsExit
 * 0000000140412163: mov     rax, [rbp-50h]
 * 0000000140412167: ldmxcsr dword ptr [rbp-54h]
 * 000000014041216B: xor     r10, r10
 * 000000014041216E: cmp     word ptr [rbp+80h], 0
 * 0000000140412176: jz      short loc_1404121B9
 * 0000000140412178: mov     [rbp-50h], rax
 * 000000014041217C: call    KiRestoreDebugRegisterState
 * 0000000140412181: mov     rax, gs:188h
 * 000000014041218A: mov     rax, [rax+0B8h]
 * 0000000140412191: mov     rax, [rax+3D8h]
 * 0000000140412198: or      rax, rax
 * 000000014041219B: jz      short loc_1404121B5
 * 000000014041219D: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001404121A5: jnz     short loc_1404121B5
 * 00000001404121A7: mov     r10, [rbp+0E8h]
 * 00000001404121AE: mov     [rbp+0E8h], rax
 * 00000001404121B5: mov     rax, [rbp-50h]
 * 00000001404121B9: mov     [rbp-50h], rax
 * 00000001404121BD: mov     byte ptr gs:856h, 0
 * 00000001404121C6: movzx   eax, word ptr gs:86Ah
 * 00000001404121CF: cmp     gs:864h, ax
 * 00000001404121D8: jz      short loc_1404121EC
 * 00000001404121DA: mov     gs:864h, ax
 * 00000001404121E3: mov     ecx, 48h ; 'H'
 * 00000001404121E8: xor     edx, edx
 * 00000001404121EA: wrmsr
 * 00000001404121EC: btr     word ptr gs:860h, 2
 * 00000001404121F7: jnb     short loc_140412207
 * 00000001404121F9: mov     eax, 1
 * 00000001404121FE: xor     edx, edx
 * 0000000140412200: mov     ecx, 49h ; 'I'
 * 0000000140412205: wrmsr
 * 0000000140412207: btr     word ptr gs:860h, 5
 * 0000000140412212: jnb     loc_14041233D
 * 0000000140412218: call    loc_14041232B
 * 000000014041221D: add     rsp, 8
 * 0000000140412221: call    loc_140412334
 * 0000000140412226: add     rsp, 8
 * 000000014041222A: call    loc_14041221D
 * 000000014041222F: add     rsp, 8
 * 0000000140412233: call    loc_140412226
 * 0000000140412238: add     rsp, 8
 * 000000014041223C: call    loc_14041222F
 * 0000000140412241: add     rsp, 8
 * 0000000140412245: call    loc_140412238
 * 000000014041224A: add     rsp, 8
 * 000000014041224E: call    loc_140412241
 * 0000000140412253: add     rsp, 8
 * 0000000140412257: call    loc_14041224A
 * 000000014041225C: add     rsp, 8
 * 0000000140412260: call    loc_140412253
 * 0000000140412265: add     rsp, 8
 * 0000000140412269: call    loc_14041225C
 * 000000014041226E: add     rsp, 8
 * 0000000140412272: call    loc_140412265
 * 0000000140412277: add     rsp, 8
 * 000000014041227B: call    loc_14041226E
 * 0000000140412280: add     rsp, 8
 * 0000000140412284: call    loc_140412277
 * 0000000140412289: add     rsp, 8
 * 000000014041228D: call    loc_140412280
 * 0000000140412292: add     rsp, 8
 * 0000000140412296: call    loc_140412289
 * 000000014041229B: add     rsp, 8
 * 000000014041229F: call    loc_140412292
 * 00000001404122A4: add     rsp, 8
 * 00000001404122A8: call    loc_14041229B
 * 00000001404122AD: add     rsp, 8
 * 00000001404122B1: call    loc_1404122A4
 * 00000001404122B6: add     rsp, 8
 * 00000001404122BA: call    loc_1404122AD
 * 00000001404122BF: add     rsp, 8
 * 00000001404122C3: call    loc_1404122B6
 * 00000001404122C8: add     rsp, 8
 * 00000001404122CC: call    loc_1404122BF
 * 00000001404122D1: add     rsp, 8
 * 00000001404122D5: call    loc_1404122C8
 * 00000001404122DA: add     rsp, 8
 * 00000001404122DE: call    loc_1404122D1
 * 00000001404122E3: add     rsp, 8
 * 00000001404122E7: call    loc_1404122DA
 * 00000001404122EC: add     rsp, 8
 * 00000001404122F0: call    loc_1404122E3
 * 00000001404122F5: add     rsp, 8
 * 00000001404122F9: call    loc_1404122EC
 * 00000001404122FE: add     rsp, 8
 * 0000000140412302: call    loc_1404122F5
 * 0000000140412307: add     rsp, 8
 * 000000014041230B: call    loc_1404122FE
 * 0000000140412310: add     rsp, 8
 * 0000000140412314: call    loc_140412307
 * 0000000140412319: add     rsp, 8
 * 000000014041231D: call    loc_140412310
 * 0000000140412322: add     rsp, 8
 * 0000000140412326: call    loc_140412319
 * 000000014041232B: add     rsp, 8
 * 000000014041232F: call    loc_140412322
 * 0000000140412334: add     rsp, 8
 * 0000000140412338: mov     eax, 0DADAh
 * 000000014041233D: test    word ptr gs:860h, 80h
 * 0000000140412348: jz      short loc_140412356
 * 000000014041234A: xor     eax, eax
 * 000000014041234C: xor     edx, edx
 * 000000014041234E: mov     ecx, 1
 * 0000000140412353: div     rcx
 * 0000000140412356: mov     rax, [rbp-50h]
 * 000000014041235A: mov     r8, [rbp+100h]
 * 0000000140412361: mov     r9, [rbp+0D8h]
 * 0000000140412368: xor     edx, edx
 * 000000014041236A: pxor    xmm0, xmm0
 * 000000014041236E: pxor    xmm1, xmm1
 * 0000000140412372: pxor    xmm2, xmm2
 * 0000000140412376: pxor    xmm3, xmm3
 * 000000014041237A: pxor    xmm4, xmm4
 * 000000014041237E: pxor    xmm5, xmm5
 * 0000000140412382: mov     rcx, [rbp+0E8h]
 * 0000000140412389: mov     r11, [rbp+0F8h]
 * 0000000140412390: test    cs:KiKvaShadow, 1
 * 0000000140412397: jnz     KiKernelSysretExit
 * 000000014041239D: mov     rbp, r9
 * 00000001404123A0: mov     rsp, r8
 * 00000001404123A3: test    word ptr gs:860h, 100h
 * 00000001404123AE: jz      short loc_1404123B9
 * 00000001404123B0: verw    word ptr gs:902Ah
 * 00000001404123B9: swapgs
 * 00000001404123BC: sysret
 * 00000001404123BF: mov     rdx, [rbp+0B8h]
 * 00000001404123C6: mov     [r11+90h], rdx
 * 00000001404123CD: mov     dl, [rbp-58h]
 * 00000001404123D0: mov     [r11+232h], dl
 * 00000001404123D7: cli
 * 00000001404123D8: mov     rsp, rbp
 * 00000001404123DB: mov     rbp, [rbp+0D8h]
 * 00000001404123E2: mov     rsp, [rsp+90h+arg_68]
 * 00000001404123EA: sti
 * 00000001404123EB: retn
 * 00000001404123EC: mov     r11, gs:188h
 * 00000001404123F5: mov     rcx, cr8
 * 00000001404123F9: or      cl, [r11+24Ah]
 * 0000000140412400: or      ecx, [r11+1E4h]
 * 0000000140412407: jnz     loc_140412719
 * 000000014041240D: cli
 * 000000014041240E: mov     [rbp-50h], rax
 * 0000000140412412: mov     rcx, gs:188h
 * 000000014041241B: test    byte ptr [rcx+0C2h], 3
 * 0000000140412422: jz      short loc_14041243F
 * 0000000140412424: mov     ecx, 1
 * 0000000140412429: mov     cr8, rcx
 * 000000014041242D: sti
 * 000000014041242E: call    KiInitiateUserApc
 * 0000000140412433: mov     ecx, 0
 * 0000000140412438: mov     cr8, rcx
 * 000000014041243C: cli
 * 000000014041243D: jmp     short loc_140412412
 * 000000014041243F: test    byte ptr gs:86Ch, 2
 * 0000000140412448: jz      short loc_140412451
 * 000000014041244A: xor     ecx, ecx
 * 000000014041244C: call    KiUpdateStibpPairing
 * 0000000140412451: mov     rcx, gs:188h
 * 000000014041245A: test    dword ptr [rcx], 8000000h
 * 0000000140412460: jz      short loc_140412467
 * 0000000140412462: call    KiRestoreSetContextState
 * 0000000140412467: mov     rcx, gs:188h
 * 0000000140412470: test    byte ptr [rcx+2], 1
 * 0000000140412474: jz      short loc_140412484
 * 0000000140412476: call    KiCopyCounters
 * 000000014041247B: mov     rcx, gs:188h
 * 0000000140412484: cmp     word ptr [rbp+80h], 0
 * 000000014041248C: jz      short loc_140412493
 * 000000014041248E: call    KiRestoreDebugRegisterState
 * 0000000140412493: mov     byte ptr gs:856h, 0
 * 000000014041249C: movzx   eax, word ptr gs:86Ah
 * 00000001404124A5: cmp     gs:864h, ax
 * 00000001404124AE: jz      short loc_1404124C2
 * 00000001404124B0: mov     gs:864h, ax
 * 00000001404124B9: mov     ecx, 48h ; 'H'
 * 00000001404124BE: xor     edx, edx
 * 00000001404124C0: wrmsr
 * 00000001404124C2: btr     word ptr gs:860h, 2
 * 00000001404124CD: jnb     short loc_1404124DD
 * 00000001404124CF: mov     eax, 1
 * 00000001404124D4: xor     edx, edx
 * 00000001404124D6: mov     ecx, 49h ; 'I'
 * 00000001404124DB: wrmsr
 * 00000001404124DD: btr     word ptr gs:860h, 5
 * 00000001404124E8: jnb     loc_140412613
 * 00000001404124EE: call    loc_140412601
 * 00000001404124F3: add     rsp, 8
 * 00000001404124F7: call    loc_14041260A
 * 00000001404124FC: add     rsp, 8
 * 0000000140412500: call    loc_1404124F3
 * 0000000140412505: add     rsp, 8
 * 0000000140412509: call    loc_1404124FC
 * 000000014041250E: add     rsp, 8
 * 0000000140412512: call    loc_140412505
 * 0000000140412517: add     rsp, 8
 * 000000014041251B: call    loc_14041250E
 * 0000000140412520: add     rsp, 8
 * 0000000140412524: call    loc_140412517
 * 0000000140412529: add     rsp, 8
 * 000000014041252D: call    loc_140412520
 * 0000000140412532: add     rsp, 8
 * 0000000140412536: call    loc_140412529
 * 000000014041253B: add     rsp, 8
 * 000000014041253F: call    loc_140412532
 * 0000000140412544: add     rsp, 8
 * 0000000140412548: call    loc_14041253B
 * 000000014041254D: add     rsp, 8
 * 0000000140412551: call    loc_140412544
 * 0000000140412556: add     rsp, 8
 * 000000014041255A: call    loc_14041254D
 * 000000014041255F: add     rsp, 8
 * 0000000140412563: call    loc_140412556
 * 0000000140412568: add     rsp, 8
 * 000000014041256C: call    loc_14041255F
 * 0000000140412571: add     rsp, 8
 * 0000000140412575: call    loc_140412568
 * 000000014041257A: add     rsp, 8
 * 000000014041257E: call    loc_140412571
 * 0000000140412583: add     rsp, 8
 * 0000000140412587: call    loc_14041257A
 * 000000014041258C: add     rsp, 8
 * 0000000140412590: call    loc_140412583
 * 0000000140412595: add     rsp, 8
 * 0000000140412599: call    loc_14041258C
 * 000000014041259E: add     rsp, 8
 * 00000001404125A2: call    loc_140412595
 * 00000001404125A7: add     rsp, 8
 * 00000001404125AB: call    loc_14041259E
 * 00000001404125B0: add     rsp, 8
 * 00000001404125B4: call    loc_1404125A7
 * 00000001404125B9: add     rsp, 8
 * 00000001404125BD: call    loc_1404125B0
 * 00000001404125C2: add     rsp, 8
 * 00000001404125C6: call    loc_1404125B9
 * 00000001404125CB: add     rsp, 8
 * 00000001404125CF: call    loc_1404125C2
 * 00000001404125D4: add     rsp, 8
 * 00000001404125D8: call    loc_1404125CB
 * 00000001404125DD: add     rsp, 8
 * 00000001404125E1: call    loc_1404125D4
 * 00000001404125E6: add     rsp, 8
 * 00000001404125EA: call    loc_1404125DD
 * 00000001404125EF: add     rsp, 8
 * 00000001404125F3: call    loc_1404125E6
 * 00000001404125F8: add     rsp, 8
 * 00000001404125FC: call    loc_1404125EF
 * 0000000140412601: add     rsp, 8
 * 0000000140412605: call    loc_1404125F8
 * 000000014041260A: add     rsp, 8
 * 000000014041260E: mov     eax, 0DADAh
 * 0000000140412613: test    word ptr gs:860h, 80h
 * 000000014041261E: jz      short loc_14041262C
 * 0000000140412620: xor     eax, eax
 * 0000000140412622: xor     edx, edx
 * 0000000140412624: mov     ecx, 1
 * 0000000140412629: div     rcx
 * 000000014041262C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140412630: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140412634: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140412638: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041263C: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140412640: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140412644: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140412648: mov     r11, [rbp-20h]
 * 000000014041264C: mov     r10, [rbp-28h]
 * 0000000140412650: mov     r9, [rbp-30h]
 * 0000000140412654: mov     r8, [rbp-38h]
 * 0000000140412658: mov     rdx, [rbp-40h]
 * 000000014041265C: mov     rcx, [rbp-48h]
 * 0000000140412660: mov     rax, [rbp-50h]
 * 0000000140412664: mov     rsi, [rbp+0D0h]
 * 000000014041266B: mov     rdi, [rbp+0C8h]
 * 0000000140412672: mov     rbx, [rbp+0C0h]
 * 0000000140412679: mov     rsp, rbp
 * 000000014041267C: mov     rbp, [rbp+0D8h]
 * 0000000140412683: add     rsp, 0E8h
 * 000000014041268A: test    cs:KiKvaShadow, 1
 * 0000000140412691: jz      short loc_140412698
 * 0000000140412693: jmp     KiKernelExit
 * 0000000140412698: test    word ptr gs:860h, 100h
 * 00000001404126A3: jz      short loc_1404126AA
 * 00000001404126A5: verw    [rsp-158h+arg_170]
 * 00000001404126AA: swapgs
 * 00000001404126AD: iretq
 * 00000001404126AF: cmp     edi, 20h ; ' '
 * 00000001404126B2: jnz     short loc_14041270F
 * 00000001404126B4: mov     [rbp-80h], eax
 * 00000001404126B7: mov     [rbp-78h], rcx
 * 00000001404126BB: mov     [rbp-70h], rdx
 * 00000001404126BF: mov     [rbp-68h], r8
 * 00000001404126C3: mov     [rbp-60h], r9
 * 00000001404126C7: call    KiConvertToGuiThread
 * 00000001404126CC: or      eax, eax
 * 00000001404126CE: mov     eax, [rbp-80h]
 * 00000001404126D1: mov     rcx, [rbp-78h]
 * 00000001404126D5: mov     rdx, [rbp-70h]
 * 00000001404126D9: mov     r8, [rbp-68h]
 * 00000001404126DD: mov     r9, [rbp-60h]
 * 00000001404126E1: mov     [rbx+90h], rsp
 * 00000001404126E8: jz      KiSystemServiceRepeat
 * 00000001404126EE: lea     rdi, xmmword_140CFCA60
 * 00000001404126F5: mov     esi, [rdi+10h]
 * 00000001404126F8: mov     rdi, [rdi]
 * 00000001404126FB: cmp     eax, esi
 * 00000001404126FD: jnb     short loc_14041270F
 * 00000001404126FF: lea     rdi, [rdi+rsi*4]
 * 0000000140412703: movsx   eax, byte ptr [rdi+rax]
 * 0000000140412707: or      eax, eax
 * 0000000140412709: jle     KiSystemServiceExit
 * 000000014041270F: mov     eax, 0C000001Ch
 * 0000000140412714: jmp     KiSystemServiceExit
 * 0000000140412719: mov     ecx, 4Ah ; 'J'
 * 000000014041271E: xor     r9d, r9d
 * 0000000140412721: mov     r8, cr8
 * 0000000140412725: or      r8d, r8d
 * 0000000140412728: jnz     short loc_14041273E
 * 000000014041272A: mov     ecx, 1
 * 000000014041272F: movzx   r8d, byte ptr [r11+24Ah]
 * 0000000140412737: mov     r9d, [r11+1E4h]
 * 000000014041273E: mov     rdx, [rbp+0E8h]
 * 0000000140412745: mov     r10, rbp
 * 0000000140412748: call    KiBugCheckDispatch
 * 000000014041274D: sub     rsp, 50h
 * 0000000140412751: mov     [rsp+0E0h+var_C0], rcx
 * 0000000140412756: mov     [rsp+0E0h+var_B8], rdx
 * 000000014041275B: mov     [rsp+0E0h+var_B0], r8
 * 0000000140412760: mov     [rsp+0E0h+var_A8], r9
 * 0000000140412765: mov     [rsp+0E0h+var_A0], r10
 * 000000014041276A: mov     rcx, r10
 * 000000014041276D: mov     rdx, rsp
 * 0000000140412770: add     rdx, 20h ; ' '
 * 0000000140412774: mov     r8, 4
 * 000000014041277B: mov     r9, rsp
 * 000000014041277E: add     r9, 70h ; 'p'
 * 0000000140412782: call    KiTrackSystemCallEntry
 * 0000000140412787: mov     [rbp-50h], rax
 * 000000014041278B: mov     rcx, [rsp+0E0h+var_C0]
 * 0000000140412790: mov     rdx, [rsp+0E0h+var_B8]
 * 0000000140412795: mov     r8, [rsp+0E0h+var_B0]
 * 000000014041279A: mov     r9, [rsp+0E0h+var_A8]
 * 000000014041279F: mov     r10, [rsp+0E0h+var_A0]
 * 00000001404127A4: add     rsp, 50h
 * 00000001404127A8: mov     rax, r10
 * 00000001404127AB: call    rax
 * 00000001404127AD: nop     dword ptr [rax]
 * 00000001404127B0: mov     rcx, [rbp-50h]
 * 00000001404127B4: mov     rdx, rax
 * 00000001404127B7: call    KiTrackSystemCallExit
 * 00000001404127BC: jmp     loc_140412008
 * 00000001404127C1: sub     rsp, 50h
 * 00000001404127C5: mov     [rsp+0E0h+var_C0], rcx
 * 00000001404127CA: mov     [rsp+0E0h+var_B8], rdx
 * 00000001404127CF: mov     [rsp+0E0h+var_B0], r8
 * 00000001404127D4: mov     [rsp+0E0h+var_A8], r9
 * 00000001404127D9: mov     [rsp+0E0h+var_A0], r10
 * 00000001404127DE: mov     rcx, r10
 * 00000001404127E1: call    PerfInfoLogSysCallEntry
 * 00000001404127E6: mov     rcx, [rsp+0E0h+var_C0]
 * 00000001404127EB: mov     rdx, [rsp+0E0h+var_B8]
 * 00000001404127F0: mov     r8, [rsp+0E0h+var_B0]
 * 00000001404127F5: mov     r9, [rsp+0E0h+var_A8]
 * 00000001404127FA: mov     r10, [rsp+0E0h+var_A0]
 * 00000001404127FF: add     rsp, 50h
 * 0000000140412803: mov     rax, r10
 * 0000000140412806: call    rax
 * 0000000140412808: nop     dword ptr [rax]
 * 000000014041280B: mov     rcx, rax
 * 000000014041280E: call    PerfInfoLogSysCallExit
 * 0000000140412813: jmp     loc_140412008
 * 0000000140412818: retn
 */
