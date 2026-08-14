// see https://github.com/nohuto/windbg-notes/blob/main/assets/SwapContext.c for a decompilation attempt

/*
 * XREFs of SwapContext @ 0x1404041B0
 * Callers:
 *     KiIdleLoop @ 0x140400500 (KiIdleLoop.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
 *     KxDispatchInterrupt @ 0x140403FD0 (KxDispatchInterrupt.c)
 * Callees:
 *     KiUpdateSpeculationControl @ 0x1402DF350 (KiUpdateSpeculationControl.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402EBA40 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     HvlNotifyLongSpinWait @ 0x14038FC70 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390A50 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     EtwTraceContextSwap @ 0x1403A95A0 (EtwTraceContextSwap.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     SwapContext @ 0x1404041B0 (SwapContext.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404F91C0 (HvlSwitchVirtualAddressSpace.c)
 *     KiClearLastBranchRecordStack @ 0x140510BD0 (KiClearLastBranchRecordStack.c)
 *     KiResetProcessorTraceBuffer @ 0x140513250 (KiResetProcessorTraceBuffer.c)
 *     KiRestoreThreadIptState @ 0x140518960 (KiRestoreThreadIptState.c)
 *     KiSaveThreadIptState @ 0x140518AA0 (KiSaveThreadIptState.c)
 *     KeCheckAndApplyBamQos @ 0x14051C9C0 (KeCheckAndApplyBamQos.c)
 *     KiCheckAndApplyCacheIsolation @ 0x14051D660 (KiCheckAndApplyCacheIsolation.c)
 */

/*
 * Hex-Rays decompilation failed for SwapContext @ 0x1404041B0
 * Reason: Hex-Rays returned no pseudocode for 0x1404041B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404041B0: push    rbp
 * 00000001404041B2: sub     rsp, 30h
 * 00000001404041B6: prefetchw byte ptr [rsi+71h]
 * 00000001404041BA: mov     [rsp+38h+var_10], cl
 * 00000001404041BE: cmp     byte ptr [rsi+71h], 0
 * 00000001404041C2: jnz     loc_14040481A
 * 00000001404041C8: mov     byte ptr [rsi+71h], 1
 * 00000001404041CC: cli
 * 00000001404041CD: rdtsc
 * 00000001404041CF: shl     rdx, 20h
 * 00000001404041D3: or      rax, rdx
 * 00000001404041D6: sub     rax, [rbx+7EC0h]
 * 00000001404041DD: add     [rbx+7F38h], rax
 * 00000001404041E4: add     [rbx+7EC0h], rax
 * 00000001404041EB: mov     r12, rax
 * 00000001404041EE: test    byte ptr [rbx+6], 0FFh
 * 00000001404041F2: jz      short loc_14040420F
 * 00000001404041F4: and     byte ptr [rbx+6], 0
 * 00000001404041F8: cmp     [rbx+18h], rsi
 * 00000001404041FC: jz      short loc_14040420F
 * 00000001404041FE: mov     ecx, 2
 * 0000000140404203: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014040420A: nop     dword ptr [rax+rax+00h]
 * 000000014040420F: test    byte ptr [rsi+2], 36h
 * 0000000140404213: jnz     loc_140404798
 * 0000000140404219: dec     byte ptr [rbx+20h]
 * 000000014040421C: sti
 * 000000014040421D: inc     dword ptr [rbx+2D3Ch]
 * 0000000140404223: mov     rbp, cs:KeFeatureBits
 * 000000014040422A: cmp     cs:KiCacheIsoBitmap, 0
 * 0000000140404231: jz      short loc_140404245
 * 0000000140404233: bt      rbp, 2Ch ; ','
 * 0000000140404238: jnb     short loc_140404245
 * 000000014040423A: mov     rcx, rbx
 * 000000014040423D: mov     rdx, rsi
 * 0000000140404240: call    KiCheckAndApplyCacheIsolation
 * 0000000140404245: cmp     [rbx+18h], rsi
 * 0000000140404249: jz      short loc_14040426B
 * 000000014040424B: mov     ecx, [rsi+200h]
 * 0000000140404251: mov     eax, [rbx+0ECh]
 * 0000000140404257: xor     eax, ecx
 * 0000000140404259: test    eax, 0FFh
 * 000000014040425E: jz      short loc_14040426B
 * 0000000140404260: mov     rcx, rbx
 * 0000000140404263: mov     rdx, rsi
 * 0000000140404266: call    KeCheckAndApplyBamQos
 * 000000014040426B: mov     rdx, [rdi+250h]
 * 0000000140404272: mov     rcx, [rdi+60h]
 * 0000000140404276: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 000000014040427A: mov     eax, edx
 * 000000014040427C: jz      short loc_1404042A8
 * 000000014040427E: shr     rdx, 20h
 * 0000000140404282: bt      rbp, 26h ; '&'
 * 0000000140404287: jb      short loc_1404042A0
 * 0000000140404289: bt      rbp, 0Fh
 * 000000014040428E: jb      short loc_1404042A5
 * 0000000140404290: bt      ebp, 17h
 * 0000000140404294: jnb     short loc_14040429B
 * 0000000140404296: xsave   byte ptr [rcx]
 * 0000000140404299: jmp     short loc_1404042A8
 * 000000014040429B: fxsave  dword ptr [rcx]
 * 000000014040429E: jmp     short loc_1404042A8
 * 00000001404042A0: xsaves  byte ptr [rcx]
 * 00000001404042A3: jmp     short loc_1404042A8
 * 00000001404042A5: xsaveopt byte ptr [rcx]
 * 00000001404042A8: stmxcsr dword ptr [rcx+18h]
 * 00000001404042AC: test    eax, 100h
 * 00000001404042B1: jz      short loc_1404042C4
 * 00000001404042B3: cmp     cs:KiIptMsrMask, 0
 * 00000001404042BA: jz      short loc_1404042C4
 * 00000001404042BC: mov     rcx, rdi
 * 00000001404042BF: call    KiSaveThreadIptState
 * 00000001404042C4: mov     [rdi+58h], rsp
 * 00000001404042C8: mov     rsp, [rsi+58h]
 * 00000001404042CC: test    byte ptr [rdi+3], 80h
 * 00000001404042D0: jz      short loc_1404042FD
 * 00000001404042D2: mov     ecx, 0C0000102h
 * 00000001404042D7: rdmsr
 * 00000001404042D9: shl     rdx, 20h
 * 00000001404042DD: or      rax, rdx
 * 00000001404042E0: cmp     rax, cs:MmUserProbeAddress
 * 00000001404042E7: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001404042EF: mov     r14, [rdi+1F0h]
 * 00000001404042F6: mov     [r14+80h], rax
 * 00000001404042FD: mov     rax, [rdi+220h]
 * 0000000140404304: cmp     qword ptr [rax+580h], 0
 * 000000014040430C: jz      short loc_140404321
 * 000000014040430E: mov     ecx, 0C0000100h
 * 0000000140404313: rdmsr
 * 0000000140404315: mov     [rdi+5E8h], eax
 * 000000014040431B: mov     [rdi+5ECh], edx
 * 0000000140404321: btr     dword ptr gs:853h, 0
 * 000000014040432B: jnb     short loc_140404331
 * 000000014040432D: or      byte ptr [rdi+7Fh], 2
 * 0000000140404331: btr     dword ptr [rsi+7Fh], 1
 * 0000000140404336: jnb     short loc_140404341
 * 0000000140404338: or      byte ptr gs:853h, 1
 * 0000000140404341: mov     rcx, [rsi+220h]
 * 0000000140404348: or      cl, [rbx+0FEh]
 * 000000014040434E: and     cl, 0C2h
 * 0000000140404351: cmp     rcx, [rdi+220h]
 * 0000000140404358: jz      short loc_140404367
 * 000000014040435A: and     cl, 0C0h
 * 000000014040435D: call    KiUpdateSpeculationControl
 * 0000000140404362: jmp     loc_140404509
 * 0000000140404367: movzx   ecx, byte ptr gs:853h
 * 0000000140404370: and     cx, 3
 * 0000000140404374: cmp     cx, 1
 * 0000000140404378: jnz     loc_140404509
 * 000000014040437E: cli
 * 000000014040437F: movzx   eax, byte ptr gs:851h
 * 0000000140404388: cmp     gs:27Ah, al
 * 0000000140404390: jz      short loc_1404043A3
 * 0000000140404392: mov     gs:27Ah, al
 * 000000014040439A: mov     ecx, 48h ; 'H'
 * 000000014040439F: xor     edx, edx
 * 00000001404043A1: wrmsr
 * 00000001404043A3: movzx   edx, byte ptr gs:852h
 * 00000001404043AC: test    edx, 10h
 * 00000001404043B2: jz      short loc_1404043CB
 * 00000001404043B4: mov     eax, 1
 * 00000001404043B9: xor     edx, edx
 * 00000001404043BB: mov     ecx, 49h ; 'I'
 * 00000001404043C0: wrmsr
 * 00000001404043C2: movzx   edx, byte ptr gs:852h
 * 00000001404043CB: test    edx, 40h
 * 00000001404043D1: jz      loc_1404044FC
 * 00000001404043D7: call    loc_1404044EA
 * 00000001404043DC: add     rsp, 8
 * 00000001404043E0: call    loc_1404044F3
 * 00000001404043E5: add     rsp, 8
 * 00000001404043E9: call    loc_1404043DC
 * 00000001404043EE: add     rsp, 8
 * 00000001404043F2: call    loc_1404043E5
 * 00000001404043F7: add     rsp, 8
 * 00000001404043FB: call    loc_1404043EE
 * 0000000140404400: add     rsp, 8
 * 0000000140404404: call    loc_1404043F7
 * 0000000140404409: add     rsp, 8
 * 000000014040440D: call    loc_140404400
 * 0000000140404412: add     rsp, 8
 * 0000000140404416: call    loc_140404409
 * 000000014040441B: add     rsp, 8
 * 000000014040441F: call    loc_140404412
 * 0000000140404424: add     rsp, 8
 * 0000000140404428: call    loc_14040441B
 * 000000014040442D: add     rsp, 8
 * 0000000140404431: call    loc_140404424
 * 0000000140404436: add     rsp, 8
 * 000000014040443A: call    loc_14040442D
 * 000000014040443F: add     rsp, 8
 * 0000000140404443: call    loc_140404436
 * 0000000140404448: add     rsp, 8
 * 000000014040444C: call    loc_14040443F
 * 0000000140404451: add     rsp, 8
 * 0000000140404455: call    loc_140404448
 * 000000014040445A: add     rsp, 8
 * 000000014040445E: call    loc_140404451
 * 0000000140404463: add     rsp, 8
 * 0000000140404467: call    loc_14040445A
 * 000000014040446C: add     rsp, 8
 * 0000000140404470: call    loc_140404463
 * 0000000140404475: add     rsp, 8
 * 0000000140404479: call    loc_14040446C
 * 000000014040447E: add     rsp, 8
 * 0000000140404482: call    loc_140404475
 * 0000000140404487: add     rsp, 8
 * 000000014040448B: call    loc_14040447E
 * 0000000140404490: add     rsp, 8
 * 0000000140404494: call    loc_140404487
 * 0000000140404499: add     rsp, 8
 * 000000014040449D: call    loc_140404490
 * 00000001404044A2: add     rsp, 8
 * 00000001404044A6: call    loc_140404499
 * 00000001404044AB: add     rsp, 8
 * 00000001404044AF: call    loc_1404044A2
 * 00000001404044B4: add     rsp, 8
 * 00000001404044B8: call    loc_1404044AB
 * 00000001404044BD: add     rsp, 8
 * 00000001404044C1: call    loc_1404044B4
 * 00000001404044C6: add     rsp, 8
 * 00000001404044CA: call    loc_1404044BD
 * 00000001404044CF: add     rsp, 8
 * 00000001404044D3: call    loc_1404044C6
 * 00000001404044D8: add     rsp, 8
 * 00000001404044DC: call    loc_1404044CF
 * 00000001404044E1: add     rsp, 8
 * 00000001404044E5: call    loc_1404044D8
 * 00000001404044EA: add     rsp, 8
 * 00000001404044EE: call    loc_1404044E1
 * 00000001404044F3: add     rsp, 8
 * 00000001404044F7: mov     eax, 0DADAh
 * 00000001404044FC: lfence
 * 00000001404044FF: or      byte ptr gs:853h, 2
 * 0000000140404508: sti
 * 0000000140404509: mov     r14, [rsi+0B8h]
 * 0000000140404510: cmp     r14, [rdi+0B8h]
 * 0000000140404517: jz      loc_1404045D4
 * 000000014040451D: movzx   ecx, byte ptr [rbx+0D1h]
 * 0000000140404524: movzx   eax, byte ptr [rbx+0D0h]
 * 000000014040452B: lock bts [r14+rax*8+178h], rcx
 * 0000000140404535: mov     rcx, [r14+28h]
 * 0000000140404539: test    cs:KiKvaShadow, 1
 * 0000000140404540: jz      short loc_14040457B
 * 0000000140404542: cli
 * 0000000140404543: bt      ecx, 1
 * 0000000140404547: jnb     short loc_140404555
 * 0000000140404549: bts     rcx, 3Fh ; '?'
 * 000000014040454E: or      dword ptr [rbx+8E98h], 1
 * 0000000140404555: mov     [rbx+8E80h], rcx
 * 000000014040455C: btr     rcx, 3Fh ; '?'
 * 0000000140404561: and     dword ptr [rbx+8E98h], 0FFFFFFFDh
 * 0000000140404568: bt      dword ptr [r14+390h], 0
 * 0000000140404571: jnb     short loc_14040457A
 * 0000000140404573: xor     dword ptr [rbx+8E98h], 3
 * 000000014040457A: sti
 * 000000014040457B: test    cs:HvlEnlightenments, 1
 * 0000000140404585: jz      short loc_14040458E
 * 0000000140404587: call    HvlSwitchVirtualAddressSpace
 * 000000014040458C: jmp     short loc_1404045B5
 * 000000014040458E: mov     cr3, rcx
 * 0000000140404591: test    cs:KiKvaShadow, 1
 * 0000000140404598: jz      short loc_1404045B5
 * 000000014040459A: bt      ecx, 1
 * 000000014040459E: jb      short loc_1404045B5
 * 00000001404045A0: mov     rax, cr4
 * 00000001404045A3: xor     rax, 80h
 * 00000001404045A9: mov     cr4, rax
 * 00000001404045AC: xor     rax, 80h
 * 00000001404045B2: mov     cr4, rax
 * 00000001404045B5: movzx   ecx, byte ptr [rbx+0D1h]
 * 00000001404045BC: movzx   eax, byte ptr [rbx+0D0h]
 * 00000001404045C3: mov     rdx, [rdi+0B8h]
 * 00000001404045CA: lock btr [rdx+rax*8+178h], rcx
 * 00000001404045D4: mov     rax, [rsi+28h]
 * 00000001404045D8: test    cs:KiKvaShadow, 1
 * 00000001404045DF: jnz     short loc_1404045EE
 * 00000001404045E1: mov     r15, [rbx-178h]
 * 00000001404045E8: mov     [r15+4], rax
 * 00000001404045EC: jmp     short loc_1404045F5
 * 00000001404045EE: mov     [rbx+8E88h], rax
 * 00000001404045F5: mov     [rbx+28h], rax
 * 00000001404045F9: test    rax, rax
 * 00000001404045FC: jge     loc_140404802
 * 0000000140404602: cmp     cs:KiCpuTracingFlags, 0
 * 0000000140404609: jnz     loc_1404047AB
 * 000000014040460F: mov     rcx, 0FFFFF78000000000h
 * 0000000140404619: mov     rdx, [rdi+250h]
 * 0000000140404620: and     rdx, [rcx+5F0h]
 * 0000000140404627: or      rdx, [rsi+250h]
 * 000000014040462E: mov     byte ptr [rdi+71h], 0
 * 0000000140404632: mov     rcx, [rsi+60h]
 * 0000000140404636: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 000000014040463A: mov     eax, edx
 * 000000014040463C: jz      short loc_140404669
 * 000000014040463E: shr     rdx, 20h
 * 0000000140404642: bt      rbp, 29h ; ')'
 * 0000000140404647: jnb     short loc_14040464F
 * 0000000140404649: test    al, 1
 * 000000014040464B: jz      short loc_14040464F
 * 000000014040464D: fninit
 * 000000014040464F: bt      rbp, 26h ; '&'
 * 0000000140404654: jb      short loc_140404661
 * 0000000140404656: bt      ebp, 17h
 * 000000014040465A: jb      short loc_140404666
 * 000000014040465C: fxrstor dword ptr [rcx]
 * 000000014040465F: jmp     short loc_140404669
 * 0000000140404661: xrstors byte ptr [rcx]
 * 0000000140404664: jmp     short loc_140404669
 * 0000000140404666: xrstor  byte ptr [rcx]
 * 0000000140404669: ldmxcsr dword ptr [rcx+18h]
 * 000000014040466D: test    eax, 100h
 * 0000000140404672: jz      short loc_140404685
 * 0000000140404674: cmp     cs:KiIptMsrMask, 0
 * 000000014040467B: jz      short loc_140404685
 * 000000014040467D: mov     rcx, rsi
 * 0000000140404680: call    KiRestoreThreadIptState
 * 0000000140404685: bt      dword ptr [rsi+74h], 0Ah
 * 000000014040468A: jb      loc_14040474D
 * 0000000140404690: mov     rax, [rsi+220h]
 * 0000000140404697: cmp     qword ptr [rax+580h], 0
 * 000000014040469F: mov     eax, [rsi+5E8h]
 * 00000001404046A5: jz      short loc_1404046B2
 * 00000001404046A7: mov     eax, [rsi+0F0h]
 * 00000001404046AD: add     eax, 2000h
 * 00000001404046B2: mov     rcx, [rbx-180h]
 * 00000001404046B9: mov     [rcx+52h], ax
 * 00000001404046BD: shr     eax, 10h
 * 00000001404046C0: mov     [rcx+54h], al
 * 00000001404046C3: mov     [rcx+57h], ah
 * 00000001404046C6: mov     eax, 53h ; 'S'
 * 00000001404046CB: mov     fs, eax
 * 00000001404046CD: mov     eax, [rsi+5E8h]
 * 00000001404046D3: mov     edx, [rsi+5ECh]
 * 00000001404046D9: mov     ecx, 0C0000100h
 * 00000001404046DE: wrmsr
 * 00000001404046E0: mov     eax, ds
 * 00000001404046E2: mov     edx, es
 * 00000001404046E4: and     eax, edx
 * 00000001404046E6: mov     edx, gs
 * 00000001404046E8: and     eax, edx
 * 00000001404046EA: cmp     ax, 2Bh ; '+'
 * 00000001404046EE: jz      short loc_140404703
 * 00000001404046F0: mov     edx, 2Bh ; '+'
 * 00000001404046F5: mov     ds, edx
 * 00000001404046F7: mov     es, edx
 * 00000001404046F9: cli
 * 00000001404046FA: swapgs
 * 00000001404046FD: mov     gs, edx
 * 00000001404046FF: swapgs
 * 0000000140404702: sti
 * 0000000140404703: mov     rax, [rsi+0F0h]
 * 000000014040470A: mov     edx, [rsi+0F4h]
 * 0000000140404710: mov     [rbx-150h], rax
 * 0000000140404717: test    byte ptr [rsi+3], 84h
 * 000000014040471B: jz      short loc_140404746
 * 000000014040471D: test    byte ptr [rsi+3], 80h
 * 0000000140404721: jz      short loc_14040473A
 * 0000000140404723: mov     r8, [rsi+1F0h]
 * 000000014040472A: mov     eax, [r8+80h]
 * 0000000140404731: mov     edx, [r8+84h]
 * 0000000140404738: jmp     short loc_140404746
 * 000000014040473A: mov     eax, [rsi+5F0h]
 * 0000000140404740: mov     edx, [rsi+5F4h]
 * 0000000140404746: mov     ecx, 0C0000102h
 * 000000014040474B: wrmsr
 * 000000014040474D: test    dword ptr [rbx+312Ch], 10001h
 * 0000000140404757: jnz     loc_1404047E9
 * 000000014040475D: inc     dword ptr [rsi+154h]
 * 0000000140404763: cmp     byte ptr [rsi+0C1h], 1
 * 000000014040476A: jnz     short loc_14040478F
 * 000000014040476C: movzx   ax, [rsp+38h+var_10]
 * 0000000140404772: or      ax, [rsi+1E6h]
 * 0000000140404779: jz      short loc_14040478F
 * 000000014040477B: mov     ecx, 1
 * 0000000140404780: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140404787: nop     dword ptr [rax+rax+00h]
 * 000000014040478C: or      rcx, rsp
 * 000000014040478F: setz    al
 * 0000000140404792: add     rsp, 30h
 * 0000000140404796: pop     rbp
 * 0000000140404797: retn
 * 0000000140404798: mov     rcx, rbx
 * 000000014040479B: mov     rdx, rsi
 * 000000014040479E: mov     r8, r12
 * 00000001404047A1: call    KiBeginThreadAccountingPeriod
 * 00000001404047A6: jmp     loc_14040421D
 * 00000001404047AB: test    dword ptr cs:PerfGlobalGroupMask+4, 4
 * 00000001404047B5: jz      short loc_1404047C2
 * 00000001404047B7: mov     rcx, rdi
 * 00000001404047BA: mov     rdx, rsi
 * 00000001404047BD: call    EtwTraceContextSwap
 * 00000001404047C2: test    cs:KiCpuTracingFlags, 2
 * 00000001404047CC: jz      short loc_1404047D3
 * 00000001404047CE: call    KiClearLastBranchRecordStack
 * 00000001404047D3: test    cs:KiCpuTracingFlags, 4
 * 00000001404047DD: jz      short loc_1404047E4
 * 00000001404047DF: call    KiResetProcessorTraceBuffer
 * 00000001404047E4: jmp     loc_14040460F
 * 00000001404047E9: xor     r9, r9; BugCheckParameter3
 * 00000001404047EC: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 00000001404047F1: mov     r8, rsi; BugCheckParameter2
 * 00000001404047F4: mov     rdx, rdi; BugCheckParameter1
 * 00000001404047F7: mov     ecx, 0B8h; BugCheckCode
 * 00000001404047FC: call    KeBugCheckEx
 * 0000000140404802: xor     r9, r9; BugCheckParameter3
 * 0000000140404805: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 000000014040480A: mov     r8, rsi; BugCheckParameter2
 * 000000014040480D: mov     rdx, rdi; BugCheckParameter1
 * 0000000140404810: mov     ecx, 1CEh; BugCheckCode
 * 0000000140404815: call    KeBugCheckEx
 * 000000014040481A: xor     ebp, ebp
 * 000000014040481C: inc     ebp
 * 000000014040481E: test    cs:HvlLongSpinCountMask, ebp
 * 0000000140404824: jnz     short loc_140404842
 * 0000000140404826: test    cs:HvlEnlightenments, 40h
 * 0000000140404830: jz      short loc_140404842
 * 0000000140404832: call    KiCheckVpBackingLongSpinWaitHypercall
 * 0000000140404837: test    al, al
 * 0000000140404839: jz      short loc_140404842
 * 000000014040483B: mov     ecx, ebp
 * 000000014040483D: call    HvlNotifyLongSpinWait
 * 0000000140404842: pause
 * 0000000140404844: cmp     byte ptr [rsi+71h], 0
 * 0000000140404848: jz      loc_1404041C8
 * 000000014040484E: jmp     short loc_14040481C
 */
