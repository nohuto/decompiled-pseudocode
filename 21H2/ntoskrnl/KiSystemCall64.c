/*
 * XREFs of KiSystemCall64 @ 0x140411A00
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiConvertToGuiThread @ 0x140402B20 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x140411A00 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x140412740 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiUmsCallEntry @ 0x140413780 (KiUmsCallEntry.c)
 *     KiUmsExit @ 0x140413A00 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 *     PsAltSystemCallDispatch @ 0x140582B30 (PsAltSystemCallDispatch.c)
 *     PerfInfoLogSysCallEntry @ 0x1405AA300 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405AA3A0 (PerfInfoLogSysCallExit.c)
 *     PsInvokeWin32Callout @ 0x14061B140 (PsInvokeWin32Callout.c)
 *     KiTrackSystemCallEntry @ 0x1408BD0F0 (KiTrackSystemCallEntry.c)
 *     KiTrackSystemCallExit @ 0x1408BD210 (KiTrackSystemCallExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64 @ 0x140411A00
 * Reason: Hex-Rays returned no pseudocode for 0x140411A00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140411A00: swapgs
 * 0000000140411A03: mov     gs:10h, rsp
 * 0000000140411A0C: mov     rsp, gs:1A8h
 * 0000000140411A15: push    2Bh ; '+'
 * 0000000140411A17: push    qword ptr gs:10h
 * 0000000140411A1F: push    r11
 * 0000000140411A21: push    33h ; '3'
 * 0000000140411A23: push    rcx
 * 0000000140411A24: mov     rcx, r10
 * 0000000140411A27: sub     rsp, 8
 * 0000000140411A2B: push    rbp
 * 0000000140411A2C: sub     rsp, 158h
 * 0000000140411A33: lea     rbp, [rsp+190h+var_110]
 * 0000000140411A3B: mov     [rbp+0C0h], rbx
 * 0000000140411A42: mov     [rbp+0C8h], rdi
 * 0000000140411A49: mov     [rbp+0D0h], rsi
 * 0000000140411A50: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140411A57: jz      short loc_140411A65
 * 0000000140411A59: test    byte ptr [rbp+0F0h], 1
 * 0000000140411A60: jz      short loc_140411A65
 * 0000000140411A62: stac
 * 0000000140411A65: mov     [rbp-50h], rax
 * 0000000140411A69: mov     [rbp-48h], rcx
 * 0000000140411A6D: mov     [rbp-40h], rdx
 * 0000000140411A71: mov     rcx, gs:188h
 * 0000000140411A7A: mov     rcx, [rcx+220h]
 * 0000000140411A81: mov     rcx, [rcx+9E0h]
 * 0000000140411A88: mov     gs:858h, rcx
 * 0000000140411A91: mov     cx, gs:850h
 * 0000000140411A9A: mov     gs:852h, cx
 * 0000000140411AA3: mov     cx, gs:860h
 * 0000000140411AAC: mov     gs:854h, cx
 * 0000000140411AB5: movzx   eax, word ptr gs:866h
 * 0000000140411ABE: cmp     gs:864h, ax
 * 0000000140411AC7: jz      short loc_140411ADB
 * 0000000140411AC9: mov     gs:864h, ax
 * 0000000140411AD2: mov     ecx, 48h ; 'H'
 * 0000000140411AD7: xor     edx, edx
 * 0000000140411AD9: wrmsr
 * 0000000140411ADB: movzx   edx, word ptr gs:860h
 * 0000000140411AE4: test    edx, 8
 * 0000000140411AEA: jz      short loc_140411B03
 * 0000000140411AEC: mov     eax, 1
 * 0000000140411AF1: xor     edx, edx
 * 0000000140411AF3: mov     ecx, 49h ; 'I'
 * 0000000140411AF8: wrmsr
 * 0000000140411AFA: movzx   edx, word ptr gs:860h
 * 0000000140411B03: test    edx, 2
 * 0000000140411B09: jz      loc_140411C34
 * 0000000140411B0F: call    loc_140411C22
 * 0000000140411B14: add     rsp, 8
 * 0000000140411B18: call    loc_140411C2B
 * 0000000140411B1D: add     rsp, 8
 * 0000000140411B21: call    loc_140411B14
 * 0000000140411B26: add     rsp, 8
 * 0000000140411B2A: call    loc_140411B1D
 * 0000000140411B2F: add     rsp, 8
 * 0000000140411B33: call    loc_140411B26
 * 0000000140411B38: add     rsp, 8
 * 0000000140411B3C: call    loc_140411B2F
 * 0000000140411B41: add     rsp, 8
 * 0000000140411B45: call    loc_140411B38
 * 0000000140411B4A: add     rsp, 8
 * 0000000140411B4E: call    loc_140411B41
 * 0000000140411B53: add     rsp, 8
 * 0000000140411B57: call    loc_140411B4A
 * 0000000140411B5C: add     rsp, 8
 * 0000000140411B60: call    loc_140411B53
 * 0000000140411B65: add     rsp, 8
 * 0000000140411B69: call    loc_140411B5C
 * 0000000140411B6E: add     rsp, 8
 * 0000000140411B72: call    loc_140411B65
 * 0000000140411B77: add     rsp, 8
 * 0000000140411B7B: call    loc_140411B6E
 * 0000000140411B80: add     rsp, 8
 * 0000000140411B84: call    loc_140411B77
 * 0000000140411B89: add     rsp, 8
 * 0000000140411B8D: call    loc_140411B80
 * 0000000140411B92: add     rsp, 8
 * 0000000140411B96: call    loc_140411B89
 * 0000000140411B9B: add     rsp, 8
 * 0000000140411B9F: call    loc_140411B92
 * 0000000140411BA4: add     rsp, 8
 * 0000000140411BA8: call    loc_140411B9B
 * 0000000140411BAD: add     rsp, 8
 * 0000000140411BB1: call    loc_140411BA4
 * 0000000140411BB6: add     rsp, 8
 * 0000000140411BBA: call    loc_140411BAD
 * 0000000140411BBF: add     rsp, 8
 * 0000000140411BC3: call    loc_140411BB6
 * 0000000140411BC8: add     rsp, 8
 * 0000000140411BCC: call    loc_140411BBF
 * 0000000140411BD1: add     rsp, 8
 * 0000000140411BD5: call    loc_140411BC8
 * 0000000140411BDA: add     rsp, 8
 * 0000000140411BDE: call    loc_140411BD1
 * 0000000140411BE3: add     rsp, 8
 * 0000000140411BE7: call    loc_140411BDA
 * 0000000140411BEC: add     rsp, 8
 * 0000000140411BF0: call    loc_140411BE3
 * 0000000140411BF5: add     rsp, 8
 * 0000000140411BF9: call    loc_140411BEC
 * 0000000140411BFE: add     rsp, 8
 * 0000000140411C02: call    loc_140411BF5
 * 0000000140411C07: add     rsp, 8
 * 0000000140411C0B: call    loc_140411BFE
 * 0000000140411C10: add     rsp, 8
 * 0000000140411C14: call    loc_140411C07
 * 0000000140411C19: add     rsp, 8
 * 0000000140411C1D: call    loc_140411C10
 * 0000000140411C22: add     rsp, 8
 * 0000000140411C26: call    loc_140411C19
 * 0000000140411C2B: add     rsp, 8
 * 0000000140411C2F: mov     eax, 0DADAh
 * 0000000140411C34: test    edx, 200h
 * 0000000140411C3A: jz      short loc_140411C41
 * 0000000140411C3C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140411C41: lfence
 * 0000000140411C44: mov     byte ptr gs:856h, 0
 * 0000000140411C4D: mov     byte ptr [rbp-55h], 2
 * 0000000140411C51: mov     rbx, gs:188h
 * 0000000140411C5A: prefetchw byte ptr [rbx+90h]
 * 0000000140411C61: stmxcsr dword ptr [rbp-54h]
 * 0000000140411C65: ldmxcsr dword ptr gs:180h
 * 0000000140411C6E: cmp     byte ptr [rbx+3], 0
 * 0000000140411C72: mov     word ptr [rbp+80h], 0
 * 0000000140411C7B: jz      loc_140411D51
 * 0000000140411C81: test    byte ptr [rbx+3], 3
 * 0000000140411C85: mov     [rbp-38h], r8
 * 0000000140411C89: mov     [rbp-30h], r9
 * 0000000140411C8D: jz      short loc_140411C94
 * 0000000140411C8F: call    KiSaveDebugRegisterState
 * 0000000140411C94: test    byte ptr [rbx+3], 24h
 * 0000000140411C98: jz      short loc_140411CF0
 * 0000000140411C9A: mov     [rbp-20h], r10
 * 0000000140411C9E: mov     [rbp-28h], r10
 * 0000000140411CA2: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140411CA6: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140411CAA: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140411CAE: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140411CB2: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140411CB6: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140411CBA: sti
 * 0000000140411CBB: mov     rcx, rsp
 * 0000000140411CBE: call    PsAltSystemCallDispatch
 * 0000000140411CC3: cmp     al, 1
 * 0000000140411CC5: jz      short loc_140411CF0
 * 0000000140411CC7: mov     rax, [rbp-50h]
 * 0000000140411CCB: jl      short loc_140411CE1
 * 0000000140411CCD: mov     ecx, 0C000001Ch
 * 0000000140411CD2: xor     edx, edx
 * 0000000140411CD4: mov     r8, [rbp+0E8h]
 * 0000000140411CDB: call    KiExceptionDispatch
 * 0000000140411CE0: int     3; Trap to Debugger
 * 0000000140411CE1: test    byte ptr [rbx+3], 4
 * 0000000140411CE5: jz      KiSystemServiceExit
 * 0000000140411CEB: jmp     KiSystemServiceExitPico
 * 0000000140411CF0: test    byte ptr [rbx+3], 80h
 * 0000000140411CF4: jz      short loc_140411D3E
 * 0000000140411CF6: mov     ecx, 0C0000102h
 * 0000000140411CFB: rdmsr
 * 0000000140411CFD: shl     rdx, 20h
 * 0000000140411D01: or      rax, rdx
 * 0000000140411D04: cmp     rax, cs:MmUserProbeAddress
 * 0000000140411D0B: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140411D13: cmp     [rbx+0F0h], rax
 * 0000000140411D1A: jz      short loc_140411D3E
 * 0000000140411D1C: mov     rdx, [rbx+1F0h]
 * 0000000140411D23: bts     dword ptr [rbx+74h], 8
 * 0000000140411D28: dec     word ptr [rbx+1E6h]
 * 0000000140411D2F: mov     [rdx+80h], rax
 * 0000000140411D36: sti
 * 0000000140411D37: call    KiUmsCallEntry
 * 0000000140411D3C: jmp     short loc_140411D49
 * 0000000140411D3E: test    byte ptr [rbx+3], 40h
 * 0000000140411D42: jz      short loc_140411D49
 * 0000000140411D44: bts     dword ptr [rbx+74h], 10h
 * 0000000140411D49: mov     r8, [rbp-38h]
 * 0000000140411D4D: mov     r9, [rbp-30h]
 * 0000000140411D51: mov     rax, [rbp-50h]
 * 0000000140411D55: mov     rcx, [rbp-48h]
 * 0000000140411D59: mov     rdx, [rbp-40h]
 * 0000000140411D5D: sti
 * 0000000140411D5E: mov     [rbx+88h], rcx
 * 0000000140411D65: mov     [rbx+80h], eax
 * 0000000140411D6B: nop     dword ptr [rax+rax+00h]
 * 0000000140411D70: mov     [rbx+90h], rsp
 * 0000000140411D77: mov     edi, eax
 * 0000000140411D79: shr     edi, 7
 * 0000000140411D7C: and     edi, 20h
 * 0000000140411D7F: and     eax, 0FFFh
 * 0000000140411D84: lea     r10, KeServiceDescriptorTable
 * 0000000140411D8B: lea     r11, KeServiceDescriptorTableShadow
 * 0000000140411D92: test    dword ptr [rbx+78h], 80h
 * 0000000140411D99: jz      short loc_140411DAE
 * 0000000140411D9B: test    dword ptr [rbx+78h], 200000h
 * 0000000140411DA2: jz      short loc_140411DAB
 * 0000000140411DA4: lea     r11, KeServiceDescriptorTableFilter
 * 0000000140411DAB: mov     r10, r11
 * 0000000140411DAE: cmp     eax, [r10+rdi+10h]
 * 0000000140411DB3: jnb     loc_1404125AF
 * 0000000140411DB9: mov     r10, [r10+rdi]
 * 0000000140411DBD: movsxd  r11, dword ptr [r10+rax*4]
 * 0000000140411DC1: mov     rax, r11
 * 0000000140411DC4: sar     r11, 4
 * 0000000140411DC8: add     r10, r11
 * 0000000140411DCB: cmp     edi, 20h ; ' '
 * 0000000140411DCE: jnz     short loc_140411E20
 * 0000000140411DD0: mov     r11, [rbx+0F0h]
 * 0000000140411DD7: cmp     dword ptr [r11+1740h], 0
 * 0000000140411DDF: jz      short loc_140411E20
 * 0000000140411DE1: mov     [rbp-50h], rax
 * 0000000140411DE5: mov     [rbp-48h], rcx
 * 0000000140411DE9: mov     [rbp-40h], rdx
 * 0000000140411DED: mov     rbx, r8
 * 0000000140411DF0: mov     rdi, r9
 * 0000000140411DF3: mov     rsi, r10
 * 0000000140411DF6: mov     ecx, 7
 * 0000000140411DFB: xor     edx, edx
 * 0000000140411DFD: xor     r8, r8
 * 0000000140411E00: xor     r9, r9
 * 0000000140411E03: call    PsInvokeWin32Callout
 * 0000000140411E08: mov     rax, [rbp-50h]
 * 0000000140411E0C: mov     rcx, [rbp-48h]
 * 0000000140411E10: mov     rdx, [rbp-40h]
 * 0000000140411E14: mov     r8, rbx
 * 0000000140411E17: mov     r9, rdi
 * 0000000140411E1A: mov     r10, rsi
 * 0000000140411E1D: nop     dword ptr [rax]
 * 0000000140411E20: and     eax, 0Fh
 * 0000000140411E23: jz      KiSystemServiceCopyEnd
 * 0000000140411E29: shl     eax, 3
 * 0000000140411E2C: lea     rsp, [rsp-70h]
 * 0000000140411E31: lea     rdi, [rsp+100h+var_E8]
 * 0000000140411E36: mov     rsi, [rbp+100h]
 * 0000000140411E3D: lea     rsi, [rsi+20h]
 * 0000000140411E41: test    byte ptr [rbp+0F0h], 1
 * 0000000140411E48: jz      short loc_140411E60
 * 0000000140411E4A: cmp     rsi, cs:MmUserProbeAddress
 * 0000000140411E51: cmovnb  rsi, cs:MmUserProbeAddress
 * 0000000140411E59: nop     dword ptr [rax+00000000h]
 * 0000000140411E60: lea     r11, KiSystemServiceCopyEnd
 * 0000000140411E67: sub     r11, rax
 * 0000000140411E6A: jmp     r11
 * 0000000140411E70: mov     rax, [rsi+70h]
 * 0000000140411E74: mov     [rdi+70h], rax
 * 0000000140411E78: mov     rax, [rsi+68h]
 * 0000000140411E7C: mov     [rdi+68h], rax
 * 0000000140411E80: mov     rax, [rsi+60h]
 * 0000000140411E84: mov     [rdi+60h], rax
 * 0000000140411E88: mov     rax, [rsi+58h]
 * 0000000140411E8C: mov     [rdi+58h], rax
 * 0000000140411E90: mov     rax, [rsi+50h]
 * 0000000140411E94: mov     [rdi+50h], rax
 * 0000000140411E98: mov     rax, [rsi+48h]
 * 0000000140411E9C: mov     [rdi+48h], rax
 * 0000000140411EA0: mov     rax, [rsi+40h]
 * 0000000140411EA4: mov     [rdi+40h], rax
 * 0000000140411EA8: mov     rax, [rsi+38h]
 * 0000000140411EAC: mov     [rdi+38h], rax
 * 0000000140411EB0: mov     rax, [rsi+30h]
 * 0000000140411EB4: mov     [rdi+30h], rax
 * 0000000140411EB8: mov     rax, [rsi+28h]
 * 0000000140411EBC: mov     [rdi+28h], rax
 * 0000000140411EC0: mov     rax, [rsi+20h]
 * 0000000140411EC4: mov     [rdi+20h], rax
 * 0000000140411EC8: mov     rax, [rsi+18h]
 * 0000000140411ECC: mov     [rdi+18h], rax
 * 0000000140411ED0: mov     rax, [rsi+10h]
 * 0000000140411ED4: mov     [rdi+10h], rax
 * 0000000140411ED8: mov     rax, [rsi+8]
 * 0000000140411EDC: mov     [rdi+8], rax
 * 0000000140411EE0: test    cs:KiDynamicTraceMask, 1
 * 0000000140411EEA: jnz     loc_14041264D
 * 0000000140411EF0: test    dword ptr cs:PerfGlobalGroupMask+8, 40h
 * 0000000140411EFA: jnz     loc_1404126C1
 * 0000000140411F00: mov     rax, r10
 * 0000000140411F03: call    rax
 * 0000000140411F05: nop     dword ptr [rax]
 * 0000000140411F08: inc     dword ptr gs:2EB8h
 * 0000000140411F10: mov     rbx, [rbp+0C0h]
 * 0000000140411F17: mov     rdi, [rbp+0C8h]
 * 0000000140411F1E: mov     rsi, [rbp+0D0h]
 * 0000000140411F25: mov     r11, gs:188h
 * 0000000140411F2E: test    byte ptr [rbp+0F0h], 1
 * 0000000140411F35: jz      loc_1404122BF
 * 0000000140411F3B: mov     rcx, cr8
 * 0000000140411F3F: or      cl, [r11+24Ah]
 * 0000000140411F46: or      ecx, [r11+1E4h]
 * 0000000140411F4D: jnz     loc_140412619
 * 0000000140411F53: cli
 * 0000000140411F54: mov     rcx, gs:188h
 * 0000000140411F5D: test    byte ptr [rcx+0C2h], 3
 * 0000000140411F64: jz      short loc_140411FBF
 * 0000000140411F66: mov     [rbp-50h], rax
 * 0000000140411F6A: xor     eax, eax
 * 0000000140411F6C: mov     [rbp-48h], rax
 * 0000000140411F70: mov     [rbp-40h], rax
 * 0000000140411F74: mov     [rbp-38h], rax
 * 0000000140411F78: mov     [rbp-30h], rax
 * 0000000140411F7C: mov     [rbp-28h], rax
 * 0000000140411F80: mov     [rbp-20h], rax
 * 0000000140411F84: pxor    xmm0, xmm0
 * 0000000140411F88: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140411F8C: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140411F90: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140411F94: movaps  xmmword ptr [rbp+20h], xmm0
 * 0000000140411F98: movaps  xmmword ptr [rbp+30h], xmm0
 * 0000000140411F9C: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140411FA0: mov     ecx, 1
 * 0000000140411FA5: mov     cr8, rcx
 * 0000000140411FA9: sti
 * 0000000140411FAA: call    KiInitiateUserApc
 * 0000000140411FAF: cli
 * 0000000140411FB0: mov     ecx, 0
 * 0000000140411FB5: mov     cr8, rcx
 * 0000000140411FB9: mov     rax, [rbp-50h]
 * 0000000140411FBD: jmp     short loc_140411F54
 * 0000000140411FBF: test    byte ptr gs:86Ch, 2
 * 0000000140411FC8: jz      short loc_140411FD9
 * 0000000140411FCA: mov     [rbp-50h], rax
 * 0000000140411FCE: xor     ecx, ecx
 * 0000000140411FD0: call    KiUpdateStibpPairing
 * 0000000140411FD5: mov     rax, [rbp-50h]
 * 0000000140411FD9: mov     rcx, gs:188h
 * 0000000140411FE2: test    dword ptr [rcx], 8000000h
 * 0000000140411FE8: jz      short loc_140412029
 * 0000000140411FEA: mov     [rbp-50h], rax
 * 0000000140411FEE: xor     eax, eax
 * 0000000140411FF0: mov     [rbp-48h], rax
 * 0000000140411FF4: mov     [rbp-40h], rax
 * 0000000140411FF8: mov     [rbp-38h], rax
 * 0000000140411FFC: mov     [rbp-30h], rax
 * 0000000140412000: mov     [rbp-28h], rax
 * 0000000140412004: mov     [rbp-20h], rax
 * 0000000140412008: pxor    xmm0, xmm0
 * 000000014041200C: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140412010: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140412014: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140412018: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014041201C: movaps  xmmword ptr [rbp+30h], xmm0
 * 0000000140412020: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140412024: call    KiRestoreSetContextState
 * 0000000140412029: mov     rcx, gs:188h
 * 0000000140412032: test    dword ptr [rcx], 40010000h
 * 0000000140412038: jz      short loc_140412067
 * 000000014041203A: mov     [rbp-50h], rax
 * 000000014041203E: test    byte ptr [rcx+2], 1
 * 0000000140412042: jz      short loc_140412052
 * 0000000140412044: call    KiCopyCounters
 * 0000000140412049: mov     rcx, gs:188h
 * 0000000140412052: test    byte ptr [rcx+3], 40h
 * 0000000140412056: jz      short loc_140412063
 * 0000000140412058: lea     rsp, [rbp-80h]
 * 000000014041205C: xor     ecx, ecx
 * 000000014041205E: call    KiUmsExit
 * 0000000140412063: mov     rax, [rbp-50h]
 * 0000000140412067: ldmxcsr dword ptr [rbp-54h]
 * 000000014041206B: xor     r10, r10
 * 000000014041206E: cmp     word ptr [rbp+80h], 0
 * 0000000140412076: jz      short loc_1404120B9
 * 0000000140412078: mov     [rbp-50h], rax
 * 000000014041207C: call    KiRestoreDebugRegisterState
 * 0000000140412081: mov     rax, gs:188h
 * 000000014041208A: mov     rax, [rax+0B8h]
 * 0000000140412091: mov     rax, [rax+3D8h]
 * 0000000140412098: or      rax, rax
 * 000000014041209B: jz      short loc_1404120B5
 * 000000014041209D: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001404120A5: jnz     short loc_1404120B5
 * 00000001404120A7: mov     r10, [rbp+0E8h]
 * 00000001404120AE: mov     [rbp+0E8h], rax
 * 00000001404120B5: mov     rax, [rbp-50h]
 * 00000001404120B9: mov     [rbp-50h], rax
 * 00000001404120BD: mov     byte ptr gs:856h, 0
 * 00000001404120C6: movzx   eax, word ptr gs:86Ah
 * 00000001404120CF: cmp     gs:864h, ax
 * 00000001404120D8: jz      short loc_1404120EC
 * 00000001404120DA: mov     gs:864h, ax
 * 00000001404120E3: mov     ecx, 48h ; 'H'
 * 00000001404120E8: xor     edx, edx
 * 00000001404120EA: wrmsr
 * 00000001404120EC: btr     word ptr gs:860h, 2
 * 00000001404120F7: jnb     short loc_140412107
 * 00000001404120F9: mov     eax, 1
 * 00000001404120FE: xor     edx, edx
 * 0000000140412100: mov     ecx, 49h ; 'I'
 * 0000000140412105: wrmsr
 * 0000000140412107: btr     word ptr gs:860h, 5
 * 0000000140412112: jnb     loc_14041223D
 * 0000000140412118: call    loc_14041222B
 * 000000014041211D: add     rsp, 8
 * 0000000140412121: call    loc_140412234
 * 0000000140412126: add     rsp, 8
 * 000000014041212A: call    loc_14041211D
 * 000000014041212F: add     rsp, 8
 * 0000000140412133: call    loc_140412126
 * 0000000140412138: add     rsp, 8
 * 000000014041213C: call    loc_14041212F
 * 0000000140412141: add     rsp, 8
 * 0000000140412145: call    loc_140412138
 * 000000014041214A: add     rsp, 8
 * 000000014041214E: call    loc_140412141
 * 0000000140412153: add     rsp, 8
 * 0000000140412157: call    loc_14041214A
 * 000000014041215C: add     rsp, 8
 * 0000000140412160: call    loc_140412153
 * 0000000140412165: add     rsp, 8
 * 0000000140412169: call    loc_14041215C
 * 000000014041216E: add     rsp, 8
 * 0000000140412172: call    loc_140412165
 * 0000000140412177: add     rsp, 8
 * 000000014041217B: call    loc_14041216E
 * 0000000140412180: add     rsp, 8
 * 0000000140412184: call    loc_140412177
 * 0000000140412189: add     rsp, 8
 * 000000014041218D: call    loc_140412180
 * 0000000140412192: add     rsp, 8
 * 0000000140412196: call    loc_140412189
 * 000000014041219B: add     rsp, 8
 * 000000014041219F: call    loc_140412192
 * 00000001404121A4: add     rsp, 8
 * 00000001404121A8: call    loc_14041219B
 * 00000001404121AD: add     rsp, 8
 * 00000001404121B1: call    loc_1404121A4
 * 00000001404121B6: add     rsp, 8
 * 00000001404121BA: call    loc_1404121AD
 * 00000001404121BF: add     rsp, 8
 * 00000001404121C3: call    loc_1404121B6
 * 00000001404121C8: add     rsp, 8
 * 00000001404121CC: call    loc_1404121BF
 * 00000001404121D1: add     rsp, 8
 * 00000001404121D5: call    loc_1404121C8
 * 00000001404121DA: add     rsp, 8
 * 00000001404121DE: call    loc_1404121D1
 * 00000001404121E3: add     rsp, 8
 * 00000001404121E7: call    loc_1404121DA
 * 00000001404121EC: add     rsp, 8
 * 00000001404121F0: call    loc_1404121E3
 * 00000001404121F5: add     rsp, 8
 * 00000001404121F9: call    loc_1404121EC
 * 00000001404121FE: add     rsp, 8
 * 0000000140412202: call    loc_1404121F5
 * 0000000140412207: add     rsp, 8
 * 000000014041220B: call    loc_1404121FE
 * 0000000140412210: add     rsp, 8
 * 0000000140412214: call    loc_140412207
 * 0000000140412219: add     rsp, 8
 * 000000014041221D: call    loc_140412210
 * 0000000140412222: add     rsp, 8
 * 0000000140412226: call    loc_140412219
 * 000000014041222B: add     rsp, 8
 * 000000014041222F: call    loc_140412222
 * 0000000140412234: add     rsp, 8
 * 0000000140412238: mov     eax, 0DADAh
 * 000000014041223D: test    word ptr gs:860h, 80h
 * 0000000140412248: jz      short loc_140412256
 * 000000014041224A: xor     eax, eax
 * 000000014041224C: xor     edx, edx
 * 000000014041224E: mov     ecx, 1
 * 0000000140412253: div     rcx
 * 0000000140412256: mov     rax, [rbp-50h]
 * 000000014041225A: mov     r8, [rbp+100h]
 * 0000000140412261: mov     r9, [rbp+0D8h]
 * 0000000140412268: xor     edx, edx
 * 000000014041226A: pxor    xmm0, xmm0
 * 000000014041226E: pxor    xmm1, xmm1
 * 0000000140412272: pxor    xmm2, xmm2
 * 0000000140412276: pxor    xmm3, xmm3
 * 000000014041227A: pxor    xmm4, xmm4
 * 000000014041227E: pxor    xmm5, xmm5
 * 0000000140412282: mov     rcx, [rbp+0E8h]
 * 0000000140412289: mov     r11, [rbp+0F8h]
 * 0000000140412290: test    cs:KiKvaShadow, 1
 * 0000000140412297: jnz     KiKernelSysretExit
 * 000000014041229D: mov     rbp, r9
 * 00000001404122A0: mov     rsp, r8
 * 00000001404122A3: test    word ptr gs:860h, 100h
 * 00000001404122AE: jz      short loc_1404122B9
 * 00000001404122B0: verw    word ptr gs:902Ah
 * 00000001404122B9: swapgs
 * 00000001404122BC: sysret
 * 00000001404122BF: mov     rdx, [rbp+0B8h]
 * 00000001404122C6: mov     [r11+90h], rdx
 * 00000001404122CD: mov     dl, [rbp-58h]
 * 00000001404122D0: mov     [r11+232h], dl
 * 00000001404122D7: cli
 * 00000001404122D8: mov     rsp, rbp
 * 00000001404122DB: mov     rbp, [rbp+0D8h]
 * 00000001404122E2: mov     rsp, [rsp+90h+arg_68]
 * 00000001404122EA: sti
 * 00000001404122EB: retn
 * 00000001404122EC: mov     r11, gs:188h
 * 00000001404122F5: mov     rcx, cr8
 * 00000001404122F9: or      cl, [r11+24Ah]
 * 0000000140412300: or      ecx, [r11+1E4h]
 * 0000000140412307: jnz     loc_140412619
 * 000000014041230D: cli
 * 000000014041230E: mov     [rbp-50h], rax
 * 0000000140412312: mov     rcx, gs:188h
 * 000000014041231B: test    byte ptr [rcx+0C2h], 3
 * 0000000140412322: jz      short loc_14041233F
 * 0000000140412324: mov     ecx, 1
 * 0000000140412329: mov     cr8, rcx
 * 000000014041232D: sti
 * 000000014041232E: call    KiInitiateUserApc
 * 0000000140412333: mov     ecx, 0
 * 0000000140412338: mov     cr8, rcx
 * 000000014041233C: cli
 * 000000014041233D: jmp     short loc_140412312
 * 000000014041233F: test    byte ptr gs:86Ch, 2
 * 0000000140412348: jz      short loc_140412351
 * 000000014041234A: xor     ecx, ecx
 * 000000014041234C: call    KiUpdateStibpPairing
 * 0000000140412351: mov     rcx, gs:188h
 * 000000014041235A: test    dword ptr [rcx], 8000000h
 * 0000000140412360: jz      short loc_140412367
 * 0000000140412362: call    KiRestoreSetContextState
 * 0000000140412367: mov     rcx, gs:188h
 * 0000000140412370: test    byte ptr [rcx+2], 1
 * 0000000140412374: jz      short loc_140412384
 * 0000000140412376: call    KiCopyCounters
 * 000000014041237B: mov     rcx, gs:188h
 * 0000000140412384: cmp     word ptr [rbp+80h], 0
 * 000000014041238C: jz      short loc_140412393
 * 000000014041238E: call    KiRestoreDebugRegisterState
 * 0000000140412393: mov     byte ptr gs:856h, 0
 * 000000014041239C: movzx   eax, word ptr gs:86Ah
 * 00000001404123A5: cmp     gs:864h, ax
 * 00000001404123AE: jz      short loc_1404123C2
 * 00000001404123B0: mov     gs:864h, ax
 * 00000001404123B9: mov     ecx, 48h ; 'H'
 * 00000001404123BE: xor     edx, edx
 * 00000001404123C0: wrmsr
 * 00000001404123C2: btr     word ptr gs:860h, 2
 * 00000001404123CD: jnb     short loc_1404123DD
 * 00000001404123CF: mov     eax, 1
 * 00000001404123D4: xor     edx, edx
 * 00000001404123D6: mov     ecx, 49h ; 'I'
 * 00000001404123DB: wrmsr
 * 00000001404123DD: btr     word ptr gs:860h, 5
 * 00000001404123E8: jnb     loc_140412513
 * 00000001404123EE: call    loc_140412501
 * 00000001404123F3: add     rsp, 8
 * 00000001404123F7: call    loc_14041250A
 * 00000001404123FC: add     rsp, 8
 * 0000000140412400: call    loc_1404123F3
 * 0000000140412405: add     rsp, 8
 * 0000000140412409: call    loc_1404123FC
 * 000000014041240E: add     rsp, 8
 * 0000000140412412: call    loc_140412405
 * 0000000140412417: add     rsp, 8
 * 000000014041241B: call    loc_14041240E
 * 0000000140412420: add     rsp, 8
 * 0000000140412424: call    loc_140412417
 * 0000000140412429: add     rsp, 8
 * 000000014041242D: call    loc_140412420
 * 0000000140412432: add     rsp, 8
 * 0000000140412436: call    loc_140412429
 * 000000014041243B: add     rsp, 8
 * 000000014041243F: call    loc_140412432
 * 0000000140412444: add     rsp, 8
 * 0000000140412448: call    loc_14041243B
 * 000000014041244D: add     rsp, 8
 * 0000000140412451: call    loc_140412444
 * 0000000140412456: add     rsp, 8
 * 000000014041245A: call    loc_14041244D
 * 000000014041245F: add     rsp, 8
 * 0000000140412463: call    loc_140412456
 * 0000000140412468: add     rsp, 8
 * 000000014041246C: call    loc_14041245F
 * 0000000140412471: add     rsp, 8
 * 0000000140412475: call    loc_140412468
 * 000000014041247A: add     rsp, 8
 * 000000014041247E: call    loc_140412471
 * 0000000140412483: add     rsp, 8
 * 0000000140412487: call    loc_14041247A
 * 000000014041248C: add     rsp, 8
 * 0000000140412490: call    loc_140412483
 * 0000000140412495: add     rsp, 8
 * 0000000140412499: call    loc_14041248C
 * 000000014041249E: add     rsp, 8
 * 00000001404124A2: call    loc_140412495
 * 00000001404124A7: add     rsp, 8
 * 00000001404124AB: call    loc_14041249E
 * 00000001404124B0: add     rsp, 8
 * 00000001404124B4: call    loc_1404124A7
 * 00000001404124B9: add     rsp, 8
 * 00000001404124BD: call    loc_1404124B0
 * 00000001404124C2: add     rsp, 8
 * 00000001404124C6: call    loc_1404124B9
 * 00000001404124CB: add     rsp, 8
 * 00000001404124CF: call    loc_1404124C2
 * 00000001404124D4: add     rsp, 8
 * 00000001404124D8: call    loc_1404124CB
 * 00000001404124DD: add     rsp, 8
 * 00000001404124E1: call    loc_1404124D4
 * 00000001404124E6: add     rsp, 8
 * 00000001404124EA: call    loc_1404124DD
 * 00000001404124EF: add     rsp, 8
 * 00000001404124F3: call    loc_1404124E6
 * 00000001404124F8: add     rsp, 8
 * 00000001404124FC: call    loc_1404124EF
 * 0000000140412501: add     rsp, 8
 * 0000000140412505: call    loc_1404124F8
 * 000000014041250A: add     rsp, 8
 * 000000014041250E: mov     eax, 0DADAh
 * 0000000140412513: test    word ptr gs:860h, 80h
 * 000000014041251E: jz      short loc_14041252C
 * 0000000140412520: xor     eax, eax
 * 0000000140412522: xor     edx, edx
 * 0000000140412524: mov     ecx, 1
 * 0000000140412529: div     rcx
 * 000000014041252C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140412530: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140412534: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140412538: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014041253C: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140412540: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140412544: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140412548: mov     r11, [rbp-20h]
 * 000000014041254C: mov     r10, [rbp-28h]
 * 0000000140412550: mov     r9, [rbp-30h]
 * 0000000140412554: mov     r8, [rbp-38h]
 * 0000000140412558: mov     rdx, [rbp-40h]
 * 000000014041255C: mov     rcx, [rbp-48h]
 * 0000000140412560: mov     rax, [rbp-50h]
 * 0000000140412564: mov     rsi, [rbp+0D0h]
 * 000000014041256B: mov     rdi, [rbp+0C8h]
 * 0000000140412572: mov     rbx, [rbp+0C0h]
 * 0000000140412579: mov     rsp, rbp
 * 000000014041257C: mov     rbp, [rbp+0D8h]
 * 0000000140412583: add     rsp, 0E8h
 * 000000014041258A: test    cs:KiKvaShadow, 1
 * 0000000140412591: jz      short loc_140412598
 * 0000000140412593: jmp     KiKernelExit
 * 0000000140412598: test    word ptr gs:860h, 100h
 * 00000001404125A3: jz      short loc_1404125AA
 * 00000001404125A5: verw    [rsp-158h+arg_170]
 * 00000001404125AA: swapgs
 * 00000001404125AD: iretq
 * 00000001404125AF: cmp     edi, 20h ; ' '
 * 00000001404125B2: jnz     short loc_14041260F
 * 00000001404125B4: mov     [rbp-80h], eax
 * 00000001404125B7: mov     [rbp-78h], rcx
 * 00000001404125BB: mov     [rbp-70h], rdx
 * 00000001404125BF: mov     [rbp-68h], r8
 * 00000001404125C3: mov     [rbp-60h], r9
 * 00000001404125C7: call    KiConvertToGuiThread
 * 00000001404125CC: or      eax, eax
 * 00000001404125CE: mov     eax, [rbp-80h]
 * 00000001404125D1: mov     rcx, [rbp-78h]
 * 00000001404125D5: mov     rdx, [rbp-70h]
 * 00000001404125D9: mov     r8, [rbp-68h]
 * 00000001404125DD: mov     r9, [rbp-60h]
 * 00000001404125E1: mov     [rbx+90h], rsp
 * 00000001404125E8: jz      KiSystemServiceRepeat
 * 00000001404125EE: lea     rdi, xmmword_140CFCA60
 * 00000001404125F5: mov     esi, [rdi+10h]
 * 00000001404125F8: mov     rdi, [rdi]
 * 00000001404125FB: cmp     eax, esi
 * 00000001404125FD: jnb     short loc_14041260F
 * 00000001404125FF: lea     rdi, [rdi+rsi*4]
 * 0000000140412603: movsx   eax, byte ptr [rdi+rax]
 * 0000000140412607: or      eax, eax
 * 0000000140412609: jle     KiSystemServiceExit
 * 000000014041260F: mov     eax, 0C000001Ch
 * 0000000140412614: jmp     KiSystemServiceExit
 * 0000000140412619: mov     ecx, 4Ah ; 'J'
 * 000000014041261E: xor     r9d, r9d
 * 0000000140412621: mov     r8, cr8
 * 0000000140412625: or      r8d, r8d
 * 0000000140412628: jnz     short loc_14041263E
 * 000000014041262A: mov     ecx, 1
 * 000000014041262F: movzx   r8d, byte ptr [r11+24Ah]
 * 0000000140412637: mov     r9d, [r11+1E4h]
 * 000000014041263E: mov     rdx, [rbp+0E8h]
 * 0000000140412645: mov     r10, rbp
 * 0000000140412648: call    KiBugCheckDispatch
 * 000000014041264D: sub     rsp, 50h
 * 0000000140412651: mov     [rsp+0E0h+var_C0], rcx
 * 0000000140412656: mov     [rsp+0E0h+var_B8], rdx
 * 000000014041265B: mov     [rsp+0E0h+var_B0], r8
 * 0000000140412660: mov     [rsp+0E0h+var_A8], r9
 * 0000000140412665: mov     [rsp+0E0h+var_A0], r10
 * 000000014041266A: mov     rcx, r10
 * 000000014041266D: mov     rdx, rsp
 * 0000000140412670: add     rdx, 20h ; ' '
 * 0000000140412674: mov     r8, 4
 * 000000014041267B: mov     r9, rsp
 * 000000014041267E: add     r9, 70h ; 'p'
 * 0000000140412682: call    KiTrackSystemCallEntry
 * 0000000140412687: mov     [rbp-50h], rax
 * 000000014041268B: mov     rcx, [rsp+0E0h+var_C0]
 * 0000000140412690: mov     rdx, [rsp+0E0h+var_B8]
 * 0000000140412695: mov     r8, [rsp+0E0h+var_B0]
 * 000000014041269A: mov     r9, [rsp+0E0h+var_A8]
 * 000000014041269F: mov     r10, [rsp+0E0h+var_A0]
 * 00000001404126A4: add     rsp, 50h
 * 00000001404126A8: mov     rax, r10
 * 00000001404126AB: call    rax
 * 00000001404126AD: nop     dword ptr [rax]
 * 00000001404126B0: mov     rcx, [rbp-50h]
 * 00000001404126B4: mov     rdx, rax
 * 00000001404126B7: call    KiTrackSystemCallExit
 * 00000001404126BC: jmp     loc_140411F08
 * 00000001404126C1: sub     rsp, 50h
 * 00000001404126C5: mov     [rsp+0E0h+var_C0], rcx
 * 00000001404126CA: mov     [rsp+0E0h+var_B8], rdx
 * 00000001404126CF: mov     [rsp+0E0h+var_B0], r8
 * 00000001404126D4: mov     [rsp+0E0h+var_A8], r9
 * 00000001404126D9: mov     [rsp+0E0h+var_A0], r10
 * 00000001404126DE: mov     rcx, r10
 * 00000001404126E1: call    PerfInfoLogSysCallEntry
 * 00000001404126E6: mov     rcx, [rsp+0E0h+var_C0]
 * 00000001404126EB: mov     rdx, [rsp+0E0h+var_B8]
 * 00000001404126F0: mov     r8, [rsp+0E0h+var_B0]
 * 00000001404126F5: mov     r9, [rsp+0E0h+var_A8]
 * 00000001404126FA: mov     r10, [rsp+0E0h+var_A0]
 * 00000001404126FF: add     rsp, 50h
 * 0000000140412703: mov     rax, r10
 * 0000000140412706: call    rax
 * 0000000140412708: nop     dword ptr [rax]
 * 000000014041270B: mov     rcx, rax
 * 000000014041270E: call    PerfInfoLogSysCallExit
 * 0000000140412713: jmp     loc_140411F08
 * 0000000140412718: retn
 */
