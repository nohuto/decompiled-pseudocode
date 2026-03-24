/*
 * XREFs of KiSystemCall64 @ 0x14040F000
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiConvertToGuiThread @ 0x1404006D0 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x14040F000 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x14040FCC0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 *     KiUmsCallEntry @ 0x140410C40 (KiUmsCallEntry.c)
 *     KiUmsExit @ 0x140410EC0 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 *     PsAltSystemCallDispatch @ 0x140581120 (PsAltSystemCallDispatch.c)
 *     PerfInfoLogSysCallEntry @ 0x1405A88D0 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405A8970 (PerfInfoLogSysCallExit.c)
 *     PsInvokeWin32Callout @ 0x140628330 (PsInvokeWin32Callout.c)
 *     KiTrackSystemCallEntry @ 0x1408BF930 (KiTrackSystemCallEntry.c)
 *     KiTrackSystemCallExit @ 0x1408BFA50 (KiTrackSystemCallExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64 @ 0x14040F000
 * Reason: Hex-Rays returned no pseudocode for 0x14040F000
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040F000: swapgs
 * 000000014040F003: mov     gs:10h, rsp
 * 000000014040F00C: mov     rsp, gs:1A8h
 * 000000014040F015: push    2Bh ; '+'
 * 000000014040F017: push    qword ptr gs:10h
 * 000000014040F01F: push    r11
 * 000000014040F021: push    33h ; '3'
 * 000000014040F023: push    rcx
 * 000000014040F024: mov     rcx, r10
 * 000000014040F027: sub     rsp, 8
 * 000000014040F02B: push    rbp
 * 000000014040F02C: sub     rsp, 158h
 * 000000014040F033: lea     rbp, [rsp+190h+var_110]
 * 000000014040F03B: mov     [rbp+0C0h], rbx
 * 000000014040F042: mov     [rbp+0C8h], rdi
 * 000000014040F049: mov     [rbp+0D0h], rsi
 * 000000014040F050: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040F057: jz      short loc_14040F065
 * 000000014040F059: test    byte ptr [rbp+0F0h], 1
 * 000000014040F060: jz      short loc_14040F065
 * 000000014040F062: stac
 * 000000014040F065: mov     [rbp-50h], rax
 * 000000014040F069: mov     [rbp-48h], rcx
 * 000000014040F06D: mov     [rbp-40h], rdx
 * 000000014040F071: mov     rcx, gs:188h
 * 000000014040F07A: mov     rcx, [rcx+220h]
 * 000000014040F081: mov     rcx, [rcx+9E0h]
 * 000000014040F088: mov     gs:270h, rcx
 * 000000014040F091: mov     cl, gs:850h
 * 000000014040F099: mov     gs:851h, cl
 * 000000014040F0A1: mov     cl, gs:278h
 * 000000014040F0A9: mov     gs:852h, cl
 * 000000014040F0B1: movzx   eax, byte ptr gs:27Bh
 * 000000014040F0BA: cmp     gs:27Ah, al
 * 000000014040F0C2: jz      short loc_14040F0D5
 * 000000014040F0C4: mov     gs:27Ah, al
 * 000000014040F0CC: mov     ecx, 48h ; 'H'
 * 000000014040F0D1: xor     edx, edx
 * 000000014040F0D3: wrmsr
 * 000000014040F0D5: movzx   edx, byte ptr gs:278h
 * 000000014040F0DE: test    edx, 8
 * 000000014040F0E4: jz      short loc_14040F0FD
 * 000000014040F0E6: mov     eax, 1
 * 000000014040F0EB: xor     edx, edx
 * 000000014040F0ED: mov     ecx, 49h ; 'I'
 * 000000014040F0F2: wrmsr
 * 000000014040F0F4: movzx   edx, byte ptr gs:278h
 * 000000014040F0FD: test    edx, 2
 * 000000014040F103: jz      loc_14040F22E
 * 000000014040F109: call    loc_14040F21C
 * 000000014040F10E: add     rsp, 8
 * 000000014040F112: call    loc_14040F225
 * 000000014040F117: add     rsp, 8
 * 000000014040F11B: call    loc_14040F10E
 * 000000014040F120: add     rsp, 8
 * 000000014040F124: call    loc_14040F117
 * 000000014040F129: add     rsp, 8
 * 000000014040F12D: call    loc_14040F120
 * 000000014040F132: add     rsp, 8
 * 000000014040F136: call    loc_14040F129
 * 000000014040F13B: add     rsp, 8
 * 000000014040F13F: call    loc_14040F132
 * 000000014040F144: add     rsp, 8
 * 000000014040F148: call    loc_14040F13B
 * 000000014040F14D: add     rsp, 8
 * 000000014040F151: call    loc_14040F144
 * 000000014040F156: add     rsp, 8
 * 000000014040F15A: call    loc_14040F14D
 * 000000014040F15F: add     rsp, 8
 * 000000014040F163: call    loc_14040F156
 * 000000014040F168: add     rsp, 8
 * 000000014040F16C: call    loc_14040F15F
 * 000000014040F171: add     rsp, 8
 * 000000014040F175: call    loc_14040F168
 * 000000014040F17A: add     rsp, 8
 * 000000014040F17E: call    loc_14040F171
 * 000000014040F183: add     rsp, 8
 * 000000014040F187: call    loc_14040F17A
 * 000000014040F18C: add     rsp, 8
 * 000000014040F190: call    loc_14040F183
 * 000000014040F195: add     rsp, 8
 * 000000014040F199: call    loc_14040F18C
 * 000000014040F19E: add     rsp, 8
 * 000000014040F1A2: call    loc_14040F195
 * 000000014040F1A7: add     rsp, 8
 * 000000014040F1AB: call    loc_14040F19E
 * 000000014040F1B0: add     rsp, 8
 * 000000014040F1B4: call    loc_14040F1A7
 * 000000014040F1B9: add     rsp, 8
 * 000000014040F1BD: call    loc_14040F1B0
 * 000000014040F1C2: add     rsp, 8
 * 000000014040F1C6: call    loc_14040F1B9
 * 000000014040F1CB: add     rsp, 8
 * 000000014040F1CF: call    loc_14040F1C2
 * 000000014040F1D4: add     rsp, 8
 * 000000014040F1D8: call    loc_14040F1CB
 * 000000014040F1DD: add     rsp, 8
 * 000000014040F1E1: call    loc_14040F1D4
 * 000000014040F1E6: add     rsp, 8
 * 000000014040F1EA: call    loc_14040F1DD
 * 000000014040F1EF: add     rsp, 8
 * 000000014040F1F3: call    loc_14040F1E6
 * 000000014040F1F8: add     rsp, 8
 * 000000014040F1FC: call    loc_14040F1EF
 * 000000014040F201: add     rsp, 8
 * 000000014040F205: call    loc_14040F1F8
 * 000000014040F20A: add     rsp, 8
 * 000000014040F20E: call    loc_14040F201
 * 000000014040F213: add     rsp, 8
 * 000000014040F217: call    loc_14040F20A
 * 000000014040F21C: add     rsp, 8
 * 000000014040F220: call    loc_14040F213
 * 000000014040F225: add     rsp, 8
 * 000000014040F229: mov     eax, 0DADAh
 * 000000014040F22E: lfence
 * 000000014040F231: mov     byte ptr gs:853h, 0
 * 000000014040F23A: mov     byte ptr [rbp-55h], 2
 * 000000014040F23E: mov     rbx, gs:188h
 * 000000014040F247: prefetchw byte ptr [rbx+90h]
 * 000000014040F24E: stmxcsr dword ptr [rbp-54h]
 * 000000014040F252: ldmxcsr dword ptr gs:180h
 * 000000014040F25B: cmp     byte ptr [rbx+3], 0
 * 000000014040F25F: mov     word ptr [rbp+80h], 0
 * 000000014040F268: jz      loc_14040F33E
 * 000000014040F26E: test    byte ptr [rbx+3], 3
 * 000000014040F272: mov     [rbp-38h], r8
 * 000000014040F276: mov     [rbp-30h], r9
 * 000000014040F27A: jz      short loc_14040F281
 * 000000014040F27C: call    KiSaveDebugRegisterState
 * 000000014040F281: test    byte ptr [rbx+3], 24h
 * 000000014040F285: jz      short loc_14040F2DD
 * 000000014040F287: mov     [rbp-20h], r10
 * 000000014040F28B: mov     [rbp-28h], r10
 * 000000014040F28F: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014040F293: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014040F297: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014040F29B: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014040F29F: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014040F2A3: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014040F2A7: sti
 * 000000014040F2A8: mov     rcx, rsp
 * 000000014040F2AB: call    PsAltSystemCallDispatch
 * 000000014040F2B0: cmp     al, 1
 * 000000014040F2B2: jz      short loc_14040F2DD
 * 000000014040F2B4: mov     rax, [rbp-50h]
 * 000000014040F2B8: jl      short loc_14040F2CE
 * 000000014040F2BA: mov     ecx, 0C000001Ch
 * 000000014040F2BF: xor     edx, edx
 * 000000014040F2C1: mov     r8, [rbp+0E8h]
 * 000000014040F2C8: call    KiExceptionDispatch
 * 000000014040F2CD: int     3; Trap to Debugger
 * 000000014040F2CE: test    byte ptr [rbx+3], 4
 * 000000014040F2D2: jz      KiSystemServiceExit
 * 000000014040F2D8: jmp     KiSystemServiceExitPico
 * 000000014040F2DD: test    byte ptr [rbx+3], 80h
 * 000000014040F2E1: jz      short loc_14040F32B
 * 000000014040F2E3: mov     ecx, 0C0000102h
 * 000000014040F2E8: rdmsr
 * 000000014040F2EA: shl     rdx, 20h
 * 000000014040F2EE: or      rax, rdx
 * 000000014040F2F1: cmp     rax, cs:MmUserProbeAddress
 * 000000014040F2F8: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040F300: cmp     [rbx+0F0h], rax
 * 000000014040F307: jz      short loc_14040F32B
 * 000000014040F309: mov     rdx, [rbx+1F0h]
 * 000000014040F310: bts     dword ptr [rbx+74h], 8
 * 000000014040F315: dec     word ptr [rbx+1E6h]
 * 000000014040F31C: mov     [rdx+80h], rax
 * 000000014040F323: sti
 * 000000014040F324: call    KiUmsCallEntry
 * 000000014040F329: jmp     short loc_14040F336
 * 000000014040F32B: test    byte ptr [rbx+3], 40h
 * 000000014040F32F: jz      short loc_14040F336
 * 000000014040F331: bts     dword ptr [rbx+74h], 10h
 * 000000014040F336: mov     r8, [rbp-38h]
 * 000000014040F33A: mov     r9, [rbp-30h]
 * 000000014040F33E: mov     rax, [rbp-50h]
 * 000000014040F342: mov     rcx, [rbp-48h]
 * 000000014040F346: mov     rdx, [rbp-40h]
 * 000000014040F34A: sti
 * 000000014040F34B: mov     [rbx+88h], rcx
 * 000000014040F352: mov     [rbx+80h], eax
 * 000000014040F358: nop     dword ptr [rax+rax+00000000h]
 * 000000014040F360: mov     [rbx+90h], rsp
 * 000000014040F367: mov     edi, eax
 * 000000014040F369: shr     edi, 7
 * 000000014040F36C: and     edi, 20h
 * 000000014040F36F: and     eax, 0FFFh
 * 000000014040F374: lea     r10, KeServiceDescriptorTable
 * 000000014040F37B: lea     r11, KeServiceDescriptorTableShadow
 * 000000014040F382: test    dword ptr [rbx+78h], 80h
 * 000000014040F389: jz      short loc_14040F39E
 * 000000014040F38B: test    dword ptr [rbx+78h], 200000h
 * 000000014040F392: jz      short loc_14040F39B
 * 000000014040F394: lea     r11, KeServiceDescriptorTableFilter
 * 000000014040F39B: mov     r10, r11
 * 000000014040F39E: cmp     eax, [r10+rdi+10h]
 * 000000014040F3A3: jnb     loc_14040FB41
 * 000000014040F3A9: mov     r10, [r10+rdi]
 * 000000014040F3AD: movsxd  r11, dword ptr [r10+rax*4]
 * 000000014040F3B1: mov     rax, r11
 * 000000014040F3B4: sar     r11, 4
 * 000000014040F3B8: add     r10, r11
 * 000000014040F3BB: cmp     edi, 20h ; ' '
 * 000000014040F3BE: jnz     short loc_14040F410
 * 000000014040F3C0: mov     r11, [rbx+0F0h]
 * 000000014040F3C7: cmp     dword ptr [r11+1740h], 0
 * 000000014040F3CF: jz      short loc_14040F410
 * 000000014040F3D1: mov     [rbp-50h], rax
 * 000000014040F3D5: mov     [rbp-48h], rcx
 * 000000014040F3D9: mov     [rbp-40h], rdx
 * 000000014040F3DD: mov     rbx, r8
 * 000000014040F3E0: mov     rdi, r9
 * 000000014040F3E3: mov     rsi, r10
 * 000000014040F3E6: mov     ecx, 7
 * 000000014040F3EB: xor     edx, edx
 * 000000014040F3ED: xor     r8, r8
 * 000000014040F3F0: xor     r9, r9
 * 000000014040F3F3: call    PsInvokeWin32Callout
 * 000000014040F3F8: mov     rax, [rbp-50h]
 * 000000014040F3FC: mov     rcx, [rbp-48h]
 * 000000014040F400: mov     rdx, [rbp-40h]
 * 000000014040F404: mov     r8, rbx
 * 000000014040F407: mov     r9, rdi
 * 000000014040F40A: mov     r10, rsi
 * 000000014040F40D: nop     dword ptr [rax]
 * 000000014040F410: and     eax, 0Fh
 * 000000014040F413: jz      KiSystemServiceCopyEnd
 * 000000014040F419: shl     eax, 3
 * 000000014040F41C: lea     rsp, [rsp-70h]
 * 000000014040F421: lea     rdi, [rsp+100h+var_E8]
 * 000000014040F426: mov     rsi, [rbp+100h]
 * 000000014040F42D: lea     rsi, [rsi+20h]
 * 000000014040F431: test    byte ptr [rbp+0F0h], 1
 * 000000014040F438: jz      short loc_14040F450
 * 000000014040F43A: cmp     rsi, cs:MmUserProbeAddress
 * 000000014040F441: cmovnb  rsi, cs:MmUserProbeAddress
 * 000000014040F449: nop     dword ptr [rax+00000000h]
 * 000000014040F450: lea     r11, KiSystemServiceCopyEnd
 * 000000014040F457: sub     r11, rax
 * 000000014040F45A: jmp     r11
 * 000000014040F460: mov     rax, [rsi+70h]
 * 000000014040F464: mov     [rdi+70h], rax
 * 000000014040F468: mov     rax, [rsi+68h]
 * 000000014040F46C: mov     [rdi+68h], rax
 * 000000014040F470: mov     rax, [rsi+60h]
 * 000000014040F474: mov     [rdi+60h], rax
 * 000000014040F478: mov     rax, [rsi+58h]
 * 000000014040F47C: mov     [rdi+58h], rax
 * 000000014040F480: mov     rax, [rsi+50h]
 * 000000014040F484: mov     [rdi+50h], rax
 * 000000014040F488: mov     rax, [rsi+48h]
 * 000000014040F48C: mov     [rdi+48h], rax
 * 000000014040F490: mov     rax, [rsi+40h]
 * 000000014040F494: mov     [rdi+40h], rax
 * 000000014040F498: mov     rax, [rsi+38h]
 * 000000014040F49C: mov     [rdi+38h], rax
 * 000000014040F4A0: mov     rax, [rsi+30h]
 * 000000014040F4A4: mov     [rdi+30h], rax
 * 000000014040F4A8: mov     rax, [rsi+28h]
 * 000000014040F4AC: mov     [rdi+28h], rax
 * 000000014040F4B0: mov     rax, [rsi+20h]
 * 000000014040F4B4: mov     [rdi+20h], rax
 * 000000014040F4B8: mov     rax, [rsi+18h]
 * 000000014040F4BC: mov     [rdi+18h], rax
 * 000000014040F4C0: mov     rax, [rsi+10h]
 * 000000014040F4C4: mov     [rdi+10h], rax
 * 000000014040F4C8: mov     rax, [rsi+8]
 * 000000014040F4CC: mov     [rdi+8], rax
 * 000000014040F4D0: test    cs:KiDynamicTraceMask, 1
 * 000000014040F4DA: jnz     loc_14040FBDF
 * 000000014040F4E0: test    dword ptr cs:PerfGlobalGroupMask+8, 40h
 * 000000014040F4EA: jnz     loc_14040FC53
 * 000000014040F4F0: mov     rax, r10
 * 000000014040F4F3: call    rax
 * 000000014040F4F5: nop     dword ptr [rax]
 * 000000014040F4F8: inc     dword ptr gs:2EB8h
 * 000000014040F500: mov     rbx, [rbp+0C0h]
 * 000000014040F507: mov     rdi, [rbp+0C8h]
 * 000000014040F50E: mov     rsi, [rbp+0D0h]
 * 000000014040F515: mov     r11, gs:188h
 * 000000014040F51E: test    byte ptr [rbp+0F0h], 1
 * 000000014040F525: jz      loc_14040F87E
 * 000000014040F52B: mov     rcx, cr8
 * 000000014040F52F: or      cl, [r11+24Ah]
 * 000000014040F536: or      ecx, [r11+1E4h]
 * 000000014040F53D: jnz     loc_14040FBAB
 * 000000014040F543: cli
 * 000000014040F544: mov     rcx, gs:188h
 * 000000014040F54D: test    byte ptr [rcx+0C2h], 3
 * 000000014040F554: jz      short loc_14040F5AF
 * 000000014040F556: mov     [rbp-50h], rax
 * 000000014040F55A: xor     eax, eax
 * 000000014040F55C: mov     [rbp-48h], rax
 * 000000014040F560: mov     [rbp-40h], rax
 * 000000014040F564: mov     [rbp-38h], rax
 * 000000014040F568: mov     [rbp-30h], rax
 * 000000014040F56C: mov     [rbp-28h], rax
 * 000000014040F570: mov     [rbp-20h], rax
 * 000000014040F574: pxor    xmm0, xmm0
 * 000000014040F578: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014040F57C: movaps  xmmword ptr [rbp+0], xmm0
 * 000000014040F580: movaps  xmmword ptr [rbp+10h], xmm0
 * 000000014040F584: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014040F588: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014040F58C: movaps  xmmword ptr [rbp+40h], xmm0
 * 000000014040F590: mov     ecx, 1
 * 000000014040F595: mov     cr8, rcx
 * 000000014040F599: sti
 * 000000014040F59A: call    KiInitiateUserApc
 * 000000014040F59F: cli
 * 000000014040F5A0: mov     ecx, 0
 * 000000014040F5A5: mov     cr8, rcx
 * 000000014040F5A9: mov     rax, [rbp-50h]
 * 000000014040F5AD: jmp     short loc_14040F544
 * 000000014040F5AF: test    byte ptr gs:27Eh, 2
 * 000000014040F5B8: jz      short loc_14040F5C9
 * 000000014040F5BA: mov     [rbp-50h], rax
 * 000000014040F5BE: xor     ecx, ecx
 * 000000014040F5C0: call    KiUpdateStibpPairing
 * 000000014040F5C5: mov     rax, [rbp-50h]
 * 000000014040F5C9: mov     rcx, gs:188h
 * 000000014040F5D2: test    dword ptr [rcx], 8000000h
 * 000000014040F5D8: jz      short loc_14040F619
 * 000000014040F5DA: mov     [rbp-50h], rax
 * 000000014040F5DE: xor     eax, eax
 * 000000014040F5E0: mov     [rbp-48h], rax
 * 000000014040F5E4: mov     [rbp-40h], rax
 * 000000014040F5E8: mov     [rbp-38h], rax
 * 000000014040F5EC: mov     [rbp-30h], rax
 * 000000014040F5F0: mov     [rbp-28h], rax
 * 000000014040F5F4: mov     [rbp-20h], rax
 * 000000014040F5F8: pxor    xmm0, xmm0
 * 000000014040F5FC: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014040F600: movaps  xmmword ptr [rbp+0], xmm0
 * 000000014040F604: movaps  xmmword ptr [rbp+10h], xmm0
 * 000000014040F608: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014040F60C: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014040F610: movaps  xmmword ptr [rbp+40h], xmm0
 * 000000014040F614: call    KiRestoreSetContextState
 * 000000014040F619: mov     rcx, gs:188h
 * 000000014040F622: test    dword ptr [rcx], 40010000h
 * 000000014040F628: jz      short loc_14040F657
 * 000000014040F62A: mov     [rbp-50h], rax
 * 000000014040F62E: test    byte ptr [rcx+2], 1
 * 000000014040F632: jz      short loc_14040F642
 * 000000014040F634: call    KiCopyCounters
 * 000000014040F639: mov     rcx, gs:188h
 * 000000014040F642: test    byte ptr [rcx+3], 40h
 * 000000014040F646: jz      short loc_14040F653
 * 000000014040F648: lea     rsp, [rbp-80h]
 * 000000014040F64C: xor     ecx, ecx
 * 000000014040F64E: call    KiUmsExit
 * 000000014040F653: mov     rax, [rbp-50h]
 * 000000014040F657: ldmxcsr dword ptr [rbp-54h]
 * 000000014040F65B: xor     r10, r10
 * 000000014040F65E: cmp     word ptr [rbp+80h], 0
 * 000000014040F666: jz      short loc_14040F6A9
 * 000000014040F668: mov     [rbp-50h], rax
 * 000000014040F66C: call    KiRestoreDebugRegisterState
 * 000000014040F671: mov     rax, gs:188h
 * 000000014040F67A: mov     rax, [rax+0B8h]
 * 000000014040F681: mov     rax, [rax+3D8h]
 * 000000014040F688: or      rax, rax
 * 000000014040F68B: jz      short loc_14040F6A5
 * 000000014040F68D: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 000000014040F695: jnz     short loc_14040F6A5
 * 000000014040F697: mov     r10, [rbp+0E8h]
 * 000000014040F69E: mov     [rbp+0E8h], rax
 * 000000014040F6A5: mov     rax, [rbp-50h]
 * 000000014040F6A9: mov     [rbp-50h], rax
 * 000000014040F6AD: mov     byte ptr gs:853h, 0
 * 000000014040F6B6: movzx   eax, byte ptr gs:27Dh
 * 000000014040F6BF: cmp     gs:27Ah, al
 * 000000014040F6C7: jz      short loc_14040F6DA
 * 000000014040F6C9: mov     gs:27Ah, al
 * 000000014040F6D1: mov     ecx, 48h ; 'H'
 * 000000014040F6D6: xor     edx, edx
 * 000000014040F6D8: wrmsr
 * 000000014040F6DA: btr     word ptr gs:278h, 2
 * 000000014040F6E5: jnb     short loc_14040F6F5
 * 000000014040F6E7: mov     eax, 1
 * 000000014040F6EC: xor     edx, edx
 * 000000014040F6EE: mov     ecx, 49h ; 'I'
 * 000000014040F6F3: wrmsr
 * 000000014040F6F5: btr     word ptr gs:278h, 5
 * 000000014040F700: jnb     loc_14040F82B
 * 000000014040F706: call    loc_14040F819
 * 000000014040F70B: add     rsp, 8
 * 000000014040F70F: call    loc_14040F822
 * 000000014040F714: add     rsp, 8
 * 000000014040F718: call    loc_14040F70B
 * 000000014040F71D: add     rsp, 8
 * 000000014040F721: call    loc_14040F714
 * 000000014040F726: add     rsp, 8
 * 000000014040F72A: call    loc_14040F71D
 * 000000014040F72F: add     rsp, 8
 * 000000014040F733: call    loc_14040F726
 * 000000014040F738: add     rsp, 8
 * 000000014040F73C: call    loc_14040F72F
 * 000000014040F741: add     rsp, 8
 * 000000014040F745: call    loc_14040F738
 * 000000014040F74A: add     rsp, 8
 * 000000014040F74E: call    loc_14040F741
 * 000000014040F753: add     rsp, 8
 * 000000014040F757: call    loc_14040F74A
 * 000000014040F75C: add     rsp, 8
 * 000000014040F760: call    loc_14040F753
 * 000000014040F765: add     rsp, 8
 * 000000014040F769: call    loc_14040F75C
 * 000000014040F76E: add     rsp, 8
 * 000000014040F772: call    loc_14040F765
 * 000000014040F777: add     rsp, 8
 * 000000014040F77B: call    loc_14040F76E
 * 000000014040F780: add     rsp, 8
 * 000000014040F784: call    loc_14040F777
 * 000000014040F789: add     rsp, 8
 * 000000014040F78D: call    loc_14040F780
 * 000000014040F792: add     rsp, 8
 * 000000014040F796: call    loc_14040F789
 * 000000014040F79B: add     rsp, 8
 * 000000014040F79F: call    loc_14040F792
 * 000000014040F7A4: add     rsp, 8
 * 000000014040F7A8: call    loc_14040F79B
 * 000000014040F7AD: add     rsp, 8
 * 000000014040F7B1: call    loc_14040F7A4
 * 000000014040F7B6: add     rsp, 8
 * 000000014040F7BA: call    loc_14040F7AD
 * 000000014040F7BF: add     rsp, 8
 * 000000014040F7C3: call    loc_14040F7B6
 * 000000014040F7C8: add     rsp, 8
 * 000000014040F7CC: call    loc_14040F7BF
 * 000000014040F7D1: add     rsp, 8
 * 000000014040F7D5: call    loc_14040F7C8
 * 000000014040F7DA: add     rsp, 8
 * 000000014040F7DE: call    loc_14040F7D1
 * 000000014040F7E3: add     rsp, 8
 * 000000014040F7E7: call    loc_14040F7DA
 * 000000014040F7EC: add     rsp, 8
 * 000000014040F7F0: call    loc_14040F7E3
 * 000000014040F7F5: add     rsp, 8
 * 000000014040F7F9: call    loc_14040F7EC
 * 000000014040F7FE: add     rsp, 8
 * 000000014040F802: call    loc_14040F7F5
 * 000000014040F807: add     rsp, 8
 * 000000014040F80B: call    loc_14040F7FE
 * 000000014040F810: add     rsp, 8
 * 000000014040F814: call    loc_14040F807
 * 000000014040F819: add     rsp, 8
 * 000000014040F81D: call    loc_14040F810
 * 000000014040F822: add     rsp, 8
 * 000000014040F826: mov     eax, 0DADAh
 * 000000014040F82B: mov     rax, [rbp-50h]
 * 000000014040F82F: mov     r8, [rbp+100h]
 * 000000014040F836: mov     r9, [rbp+0D8h]
 * 000000014040F83D: xor     edx, edx
 * 000000014040F83F: pxor    xmm0, xmm0
 * 000000014040F843: pxor    xmm1, xmm1
 * 000000014040F847: pxor    xmm2, xmm2
 * 000000014040F84B: pxor    xmm3, xmm3
 * 000000014040F84F: pxor    xmm4, xmm4
 * 000000014040F853: pxor    xmm5, xmm5
 * 000000014040F857: mov     rcx, [rbp+0E8h]
 * 000000014040F85E: mov     r11, [rbp+0F8h]
 * 000000014040F865: test    cs:KiKvaShadow, 1
 * 000000014040F86C: jnz     KiKernelSysretExit
 * 000000014040F872: mov     rbp, r9
 * 000000014040F875: mov     rsp, r8
 * 000000014040F878: swapgs
 * 000000014040F87B: sysret
 * 000000014040F87E: mov     rdx, [rbp+0B8h]
 * 000000014040F885: mov     [r11+90h], rdx
 * 000000014040F88C: mov     dl, [rbp-58h]
 * 000000014040F88F: mov     [r11+232h], dl
 * 000000014040F896: cli
 * 000000014040F897: mov     rsp, rbp
 * 000000014040F89A: mov     rbp, [rbp+0D8h]
 * 000000014040F8A1: mov     rsp, [rsp+90h+arg_68]
 * 000000014040F8A9: sti
 * 000000014040F8AA: retn
 * 000000014040F8AB: mov     r11, gs:188h
 * 000000014040F8B4: mov     rcx, cr8
 * 000000014040F8B8: or      cl, [r11+24Ah]
 * 000000014040F8BF: or      ecx, [r11+1E4h]
 * 000000014040F8C6: jnz     loc_14040FBAB
 * 000000014040F8CC: cli
 * 000000014040F8CD: mov     [rbp-50h], rax
 * 000000014040F8D1: mov     rcx, gs:188h
 * 000000014040F8DA: test    byte ptr [rcx+0C2h], 3
 * 000000014040F8E1: jz      short loc_14040F8FE
 * 000000014040F8E3: mov     ecx, 1
 * 000000014040F8E8: mov     cr8, rcx
 * 000000014040F8EC: sti
 * 000000014040F8ED: call    KiInitiateUserApc
 * 000000014040F8F2: mov     ecx, 0
 * 000000014040F8F7: mov     cr8, rcx
 * 000000014040F8FB: cli
 * 000000014040F8FC: jmp     short loc_14040F8D1
 * 000000014040F8FE: test    byte ptr gs:27Eh, 2
 * 000000014040F907: jz      short loc_14040F910
 * 000000014040F909: xor     ecx, ecx
 * 000000014040F90B: call    KiUpdateStibpPairing
 * 000000014040F910: mov     rcx, gs:188h
 * 000000014040F919: test    dword ptr [rcx], 8000000h
 * 000000014040F91F: jz      short loc_14040F926
 * 000000014040F921: call    KiRestoreSetContextState
 * 000000014040F926: mov     rcx, gs:188h
 * 000000014040F92F: test    byte ptr [rcx+2], 1
 * 000000014040F933: jz      short loc_14040F943
 * 000000014040F935: call    KiCopyCounters
 * 000000014040F93A: mov     rcx, gs:188h
 * 000000014040F943: cmp     word ptr [rbp+80h], 0
 * 000000014040F94B: jz      short loc_14040F952
 * 000000014040F94D: call    KiRestoreDebugRegisterState
 * 000000014040F952: mov     byte ptr gs:853h, 0
 * 000000014040F95B: movzx   eax, byte ptr gs:27Dh
 * 000000014040F964: cmp     gs:27Ah, al
 * 000000014040F96C: jz      short loc_14040F97F
 * 000000014040F96E: mov     gs:27Ah, al
 * 000000014040F976: mov     ecx, 48h ; 'H'
 * 000000014040F97B: xor     edx, edx
 * 000000014040F97D: wrmsr
 * 000000014040F97F: btr     word ptr gs:278h, 2
 * 000000014040F98A: jnb     short loc_14040F99A
 * 000000014040F98C: mov     eax, 1
 * 000000014040F991: xor     edx, edx
 * 000000014040F993: mov     ecx, 49h ; 'I'
 * 000000014040F998: wrmsr
 * 000000014040F99A: btr     word ptr gs:278h, 5
 * 000000014040F9A5: jnb     loc_14040FAD0
 * 000000014040F9AB: call    loc_14040FABE
 * 000000014040F9B0: add     rsp, 8
 * 000000014040F9B4: call    loc_14040FAC7
 * 000000014040F9B9: add     rsp, 8
 * 000000014040F9BD: call    loc_14040F9B0
 * 000000014040F9C2: add     rsp, 8
 * 000000014040F9C6: call    loc_14040F9B9
 * 000000014040F9CB: add     rsp, 8
 * 000000014040F9CF: call    loc_14040F9C2
 * 000000014040F9D4: add     rsp, 8
 * 000000014040F9D8: call    loc_14040F9CB
 * 000000014040F9DD: add     rsp, 8
 * 000000014040F9E1: call    loc_14040F9D4
 * 000000014040F9E6: add     rsp, 8
 * 000000014040F9EA: call    loc_14040F9DD
 * 000000014040F9EF: add     rsp, 8
 * 000000014040F9F3: call    loc_14040F9E6
 * 000000014040F9F8: add     rsp, 8
 * 000000014040F9FC: call    loc_14040F9EF
 * 000000014040FA01: add     rsp, 8
 * 000000014040FA05: call    loc_14040F9F8
 * 000000014040FA0A: add     rsp, 8
 * 000000014040FA0E: call    loc_14040FA01
 * 000000014040FA13: add     rsp, 8
 * 000000014040FA17: call    loc_14040FA0A
 * 000000014040FA1C: add     rsp, 8
 * 000000014040FA20: call    loc_14040FA13
 * 000000014040FA25: add     rsp, 8
 * 000000014040FA29: call    loc_14040FA1C
 * 000000014040FA2E: add     rsp, 8
 * 000000014040FA32: call    loc_14040FA25
 * 000000014040FA37: add     rsp, 8
 * 000000014040FA3B: call    loc_14040FA2E
 * 000000014040FA40: add     rsp, 8
 * 000000014040FA44: call    loc_14040FA37
 * 000000014040FA49: add     rsp, 8
 * 000000014040FA4D: call    loc_14040FA40
 * 000000014040FA52: add     rsp, 8
 * 000000014040FA56: call    loc_14040FA49
 * 000000014040FA5B: add     rsp, 8
 * 000000014040FA5F: call    loc_14040FA52
 * 000000014040FA64: add     rsp, 8
 * 000000014040FA68: call    loc_14040FA5B
 * 000000014040FA6D: add     rsp, 8
 * 000000014040FA71: call    loc_14040FA64
 * 000000014040FA76: add     rsp, 8
 * 000000014040FA7A: call    loc_14040FA6D
 * 000000014040FA7F: add     rsp, 8
 * 000000014040FA83: call    loc_14040FA76
 * 000000014040FA88: add     rsp, 8
 * 000000014040FA8C: call    loc_14040FA7F
 * 000000014040FA91: add     rsp, 8
 * 000000014040FA95: call    loc_14040FA88
 * 000000014040FA9A: add     rsp, 8
 * 000000014040FA9E: call    loc_14040FA91
 * 000000014040FAA3: add     rsp, 8
 * 000000014040FAA7: call    loc_14040FA9A
 * 000000014040FAAC: add     rsp, 8
 * 000000014040FAB0: call    loc_14040FAA3
 * 000000014040FAB5: add     rsp, 8
 * 000000014040FAB9: call    loc_14040FAAC
 * 000000014040FABE: add     rsp, 8
 * 000000014040FAC2: call    loc_14040FAB5
 * 000000014040FAC7: add     rsp, 8
 * 000000014040FACB: mov     eax, 0DADAh
 * 000000014040FAD0: ldmxcsr dword ptr [rbp-54h]
 * 000000014040FAD4: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014040FAD8: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014040FADC: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014040FAE0: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014040FAE4: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014040FAE8: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014040FAEC: mov     r11, [rbp-20h]
 * 000000014040FAF0: mov     r10, [rbp-28h]
 * 000000014040FAF4: mov     r9, [rbp-30h]
 * 000000014040FAF8: mov     r8, [rbp-38h]
 * 000000014040FAFC: mov     rdx, [rbp-40h]
 * 000000014040FB00: mov     rcx, [rbp-48h]
 * 000000014040FB04: mov     rax, [rbp-50h]
 * 000000014040FB08: mov     rsi, [rbp+0D0h]
 * 000000014040FB0F: mov     rdi, [rbp+0C8h]
 * 000000014040FB16: mov     rbx, [rbp+0C0h]
 * 000000014040FB1D: mov     rsp, rbp
 * 000000014040FB20: mov     rbp, [rbp+0D8h]
 * 000000014040FB27: add     rsp, 0E8h
 * 000000014040FB2E: test    cs:KiKvaShadow, 1
 * 000000014040FB35: jz      short loc_14040FB3C
 * 000000014040FB37: jmp     KiKernelExit
 * 000000014040FB3C: swapgs
 * 000000014040FB3F: iretq
 * 000000014040FB41: cmp     edi, 20h ; ' '
 * 000000014040FB44: jnz     short loc_14040FBA1
 * 000000014040FB46: mov     [rbp-80h], eax
 * 000000014040FB49: mov     [rbp-78h], rcx
 * 000000014040FB4D: mov     [rbp-70h], rdx
 * 000000014040FB51: mov     [rbp-68h], r8
 * 000000014040FB55: mov     [rbp-60h], r9
 * 000000014040FB59: call    KiConvertToGuiThread
 * 000000014040FB5E: or      eax, eax
 * 000000014040FB60: mov     eax, [rbp-80h]
 * 000000014040FB63: mov     rcx, [rbp-78h]
 * 000000014040FB67: mov     rdx, [rbp-70h]
 * 000000014040FB6B: mov     r8, [rbp-68h]
 * 000000014040FB6F: mov     r9, [rbp-60h]
 * 000000014040FB73: mov     [rbx+90h], rsp
 * 000000014040FB7A: jz      KiSystemServiceRepeat
 * 000000014040FB80: lea     rdi, xmmword_140CFCA60
 * 000000014040FB87: mov     esi, [rdi+10h]
 * 000000014040FB8A: mov     rdi, [rdi]
 * 000000014040FB8D: cmp     eax, esi
 * 000000014040FB8F: jnb     short loc_14040FBA1
 * 000000014040FB91: lea     rdi, [rdi+rsi*4]
 * 000000014040FB95: movsx   eax, byte ptr [rdi+rax]
 * 000000014040FB99: or      eax, eax
 * 000000014040FB9B: jle     KiSystemServiceExit
 * 000000014040FBA1: mov     eax, 0C000001Ch
 * 000000014040FBA6: jmp     KiSystemServiceExit
 * 000000014040FBAB: mov     ecx, 4Ah ; 'J'
 * 000000014040FBB0: xor     r9d, r9d
 * 000000014040FBB3: mov     r8, cr8
 * 000000014040FBB7: or      r8d, r8d
 * 000000014040FBBA: jnz     short loc_14040FBD0
 * 000000014040FBBC: mov     ecx, 1
 * 000000014040FBC1: movzx   r8d, byte ptr [r11+24Ah]
 * 000000014040FBC9: mov     r9d, [r11+1E4h]
 * 000000014040FBD0: mov     rdx, [rbp+0E8h]
 * 000000014040FBD7: mov     r10, rbp
 * 000000014040FBDA: call    KiBugCheckDispatch
 * 000000014040FBDF: sub     rsp, 50h
 * 000000014040FBE3: mov     [rsp+0E0h+var_C0], rcx
 * 000000014040FBE8: mov     [rsp+0E0h+var_B8], rdx
 * 000000014040FBED: mov     [rsp+0E0h+var_B0], r8
 * 000000014040FBF2: mov     [rsp+0E0h+var_A8], r9
 * 000000014040FBF7: mov     [rsp+0E0h+var_A0], r10
 * 000000014040FBFC: mov     rcx, r10
 * 000000014040FBFF: mov     rdx, rsp
 * 000000014040FC02: add     rdx, 20h ; ' '
 * 000000014040FC06: mov     r8, 4
 * 000000014040FC0D: mov     r9, rsp
 * 000000014040FC10: add     r9, 70h ; 'p'
 * 000000014040FC14: call    KiTrackSystemCallEntry
 * 000000014040FC19: mov     [rbp-50h], rax
 * 000000014040FC1D: mov     rcx, [rsp+0E0h+var_C0]
 * 000000014040FC22: mov     rdx, [rsp+0E0h+var_B8]
 * 000000014040FC27: mov     r8, [rsp+0E0h+var_B0]
 * 000000014040FC2C: mov     r9, [rsp+0E0h+var_A8]
 * 000000014040FC31: mov     r10, [rsp+0E0h+var_A0]
 * 000000014040FC36: add     rsp, 50h
 * 000000014040FC3A: mov     rax, r10
 * 000000014040FC3D: call    rax
 * 000000014040FC3F: nop     dword ptr [rax]
 * 000000014040FC42: mov     rcx, [rbp-50h]
 * 000000014040FC46: mov     rdx, rax
 * 000000014040FC49: call    KiTrackSystemCallExit
 * 000000014040FC4E: jmp     loc_14040F4F8
 * 000000014040FC53: sub     rsp, 50h
 * 000000014040FC57: mov     [rsp+0E0h+var_C0], rcx
 * 000000014040FC5C: mov     [rsp+0E0h+var_B8], rdx
 * 000000014040FC61: mov     [rsp+0E0h+var_B0], r8
 * 000000014040FC66: mov     [rsp+0E0h+var_A8], r9
 * 000000014040FC6B: mov     [rsp+0E0h+var_A0], r10
 * 000000014040FC70: mov     rcx, r10
 * 000000014040FC73: call    PerfInfoLogSysCallEntry
 * 000000014040FC78: mov     rcx, [rsp+0E0h+var_C0]
 * 000000014040FC7D: mov     rdx, [rsp+0E0h+var_B8]
 * 000000014040FC82: mov     r8, [rsp+0E0h+var_B0]
 * 000000014040FC87: mov     r9, [rsp+0E0h+var_A8]
 * 000000014040FC8C: mov     r10, [rsp+0E0h+var_A0]
 * 000000014040FC91: add     rsp, 50h
 * 000000014040FC95: mov     rax, r10
 * 000000014040FC98: call    rax
 * 000000014040FC9A: nop     dword ptr [rax]
 * 000000014040FC9D: mov     rcx, rax
 * 000000014040FCA0: call    PerfInfoLogSysCallExit
 * 000000014040FCA5: jmp     loc_14040F4F8
 * 000000014040FCAA: retn
 */
