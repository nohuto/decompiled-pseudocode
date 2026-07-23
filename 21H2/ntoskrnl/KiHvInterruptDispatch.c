/*
 * XREFs of KiHvInterruptDispatch @ 0x140404690
 * Callers:
 *     KiHvInterrupt @ 0x1404037E0 (KiHvInterrupt.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x140205BE0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x14020F440 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiHvInterruptDispatch @ 0x140404690 (KiHvInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x140404E80 (KiHvInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x140405E90 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512E80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterruptDispatch @ 0x140404690
 * Reason: Hex-Rays returned no pseudocode for 0x140404690
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140404690: mov     rdx, rsp
 * 0000000140404693: mov     rcx, gs:8758h
 * 000000014040469C: lea     rax, [rcx-6000h]
 * 00000001404046A3: cmp     rax, rsp
 * 00000001404046A6: ja      short loc_1404046AD
 * 00000001404046A8: cmp     rsp, rcx
 * 00000001404046AB: jb      short loc_1404046B9
 * 00000001404046AD: cmp     cs:KiBugCheckActive, 0
 * 00000001404046B4: jnz     short loc_1404046B9
 * 00000001404046B6: mov     rsp, rcx
 * 00000001404046B9: sub     rsp, 20h
 * 00000001404046BD: mov     [rsp+20h+var_10], rdx
 * 00000001404046C2: call    KiHvInterruptSubDispatch
 * 00000001404046C7: mov     rsp, [rsp+20h+var_10]
 * 00000001404046CC: test    cs:HvlEnlightenments, 1000h
 * 00000001404046D6: jz      short loc_1404046E0
 * 00000001404046D8: mov     rcx, rsi
 * 00000001404046DB: call    HalPerformEndOfInterrupt
 * 00000001404046E0: cli
 * 00000001404046E1: mov     rcx, gs:20h
 * 00000001404046EA: cmp     byte ptr [rcx+20h], 1
 * 00000001404046EE: ja      short loc_14040476A
 * 00000001404046F0: rdtsc
 * 00000001404046F2: shl     rdx, 20h
 * 00000001404046F6: or      rax, rdx
 * 00000001404046F9: sub     rax, [rcx+7EC0h]
 * 0000000140404700: add     [rcx+7F38h], rax
 * 0000000140404707: add     [rcx+7EC0h], rax
 * 000000014040470E: mov     r8, rax
 * 0000000140404711: mov     rax, [rcx+8]
 * 0000000140404715: test    byte ptr [rax+2], 72h
 * 0000000140404719: jz      short loc_14040472E
 * 000000014040471B: xor     edx, edx
 * 000000014040471D: call    KiBeginThreadAccountingPeriod
 * 0000000140404722: mov     rcx, gs:20h
 * 000000014040472B: inc     byte ptr [rcx+20h]
 * 000000014040472E: mov     dl, [rcx+6]
 * 0000000140404731: and     byte ptr [rcx+6], 0
 * 0000000140404735: cmp     byte ptr [rcx+7], 0
 * 0000000140404739: jnz     short loc_14040476A
 * 000000014040473B: test    dl, dl
 * 000000014040473D: jz      short loc_14040476A
 * 000000014040473F: cmp     byte ptr [rbp-57h], 2
 * 0000000140404743: jnb     short loc_140404750
 * 0000000140404745: and     byte ptr [rcx+20h], 0
 * 0000000140404749: call    KiDpcInterruptBypass
 * 000000014040474E: jmp     short loc_14040476D
 * 0000000140404750: mov     ecx, 2
 * 0000000140404755: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014040475C: nop     dword ptr [rax+rax+00h]
 * 0000000140404761: mov     rcx, gs:20h
 * 000000014040476A: dec     byte ptr [rcx+20h]
 * 000000014040476D: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140404771: cmp     cs:KiIrqlFlags, 0
 * 0000000140404778: jz      short loc_140404781
 * 000000014040477A: call    KzSetIrqlUnsafe
 * 000000014040477F: jmp     short loc_140404785
 * 0000000140404781: mov     cr8, rcx
 * 0000000140404785: mov     rsi, [rbp+0D0h]
 * 000000014040478C: cli
 * 000000014040478D: test    byte ptr [rbp+0F0h], 1
 * 0000000140404794: jz      loc_140404A36
 * 000000014040479A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404047A1: jz      short loc_1404047A6
 * 00000001404047A3: stac
 * 00000001404047A6: mov     rcx, gs:188h
 * 00000001404047AF: test    byte ptr [rcx+0C2h], 3
 * 00000001404047B6: jz      short loc_1404047D3
 * 00000001404047B8: mov     ecx, 1
 * 00000001404047BD: mov     cr8, rcx
 * 00000001404047C1: sti
 * 00000001404047C2: call    KiInitiateUserApc
 * 00000001404047C7: cli
 * 00000001404047C8: mov     ecx, 0
 * 00000001404047CD: mov     cr8, rcx
 * 00000001404047D1: jmp     short loc_1404047A6
 * 00000001404047D3: test    byte ptr gs:86Ch, 2
 * 00000001404047DC: jz      short loc_1404047E5
 * 00000001404047DE: xor     ecx, ecx
 * 00000001404047E0: call    KiUpdateStibpPairing
 * 00000001404047E5: mov     rcx, gs:188h
 * 00000001404047EE: test    dword ptr [rcx], 8000000h
 * 00000001404047F4: jz      short loc_1404047FB
 * 00000001404047F6: call    KiRestoreSetContextState
 * 00000001404047FB: mov     rcx, gs:188h
 * 0000000140404804: test    dword ptr [rcx], 40010000h
 * 000000014040480A: jz      short loc_140404820
 * 000000014040480C: test    byte ptr [rcx+2], 1
 * 0000000140404810: jz      short loc_140404820
 * 0000000140404812: call    KiCopyCounters
 * 0000000140404817: mov     rcx, gs:188h
 * 0000000140404820: ldmxcsr dword ptr [rbp-54h]
 * 0000000140404824: cmp     word ptr [rbp+80h], 0
 * 000000014040482C: jz      short loc_140404833
 * 000000014040482E: call    KiRestoreDebugRegisterState
 * 0000000140404833: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140404837: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014040483B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014040483F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140404843: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140404847: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014040484B: mov     r11, [rbp-20h]
 * 000000014040484F: mov     r10, [rbp-28h]
 * 0000000140404853: mov     r9, [rbp-30h]
 * 0000000140404857: mov     r8, [rbp-38h]
 * 000000014040485B: mov     byte ptr gs:856h, 0
 * 0000000140404864: movzx   eax, word ptr gs:86Ah
 * 000000014040486D: cmp     gs:864h, ax
 * 0000000140404876: jz      short loc_14040488A
 * 0000000140404878: mov     gs:864h, ax
 * 0000000140404881: mov     ecx, 48h ; 'H'
 * 0000000140404886: xor     edx, edx
 * 0000000140404888: wrmsr
 * 000000014040488A: btr     word ptr gs:860h, 2
 * 0000000140404895: jnb     short loc_1404048A5
 * 0000000140404897: mov     eax, 1
 * 000000014040489C: xor     edx, edx
 * 000000014040489E: mov     ecx, 49h ; 'I'
 * 00000001404048A3: wrmsr
 * 00000001404048A5: btr     word ptr gs:860h, 5
 * 00000001404048B0: jnb     loc_1404049DB
 * 00000001404048B6: call    loc_1404049C9
 * 00000001404048BB: add     rsp, 8
 * 00000001404048BF: call    loc_1404049D2
 * 00000001404048C4: add     rsp, 8
 * 00000001404048C8: call    loc_1404048BB
 * 00000001404048CD: add     rsp, 8
 * 00000001404048D1: call    loc_1404048C4
 * 00000001404048D6: add     rsp, 8
 * 00000001404048DA: call    loc_1404048CD
 * 00000001404048DF: add     rsp, 8
 * 00000001404048E3: call    loc_1404048D6
 * 00000001404048E8: add     rsp, 8
 * 00000001404048EC: call    loc_1404048DF
 * 00000001404048F1: add     rsp, 8
 * 00000001404048F5: call    loc_1404048E8
 * 00000001404048FA: add     rsp, 8
 * 00000001404048FE: call    loc_1404048F1
 * 0000000140404903: add     rsp, 8
 * 0000000140404907: call    loc_1404048FA
 * 000000014040490C: add     rsp, 8
 * 0000000140404910: call    loc_140404903
 * 0000000140404915: add     rsp, 8
 * 0000000140404919: call    loc_14040490C
 * 000000014040491E: add     rsp, 8
 * 0000000140404922: call    loc_140404915
 * 0000000140404927: add     rsp, 8
 * 000000014040492B: call    loc_14040491E
 * 0000000140404930: add     rsp, 8
 * 0000000140404934: call    loc_140404927
 * 0000000140404939: add     rsp, 8
 * 000000014040493D: call    loc_140404930
 * 0000000140404942: add     rsp, 8
 * 0000000140404946: call    loc_140404939
 * 000000014040494B: add     rsp, 8
 * 000000014040494F: call    loc_140404942
 * 0000000140404954: add     rsp, 8
 * 0000000140404958: call    loc_14040494B
 * 000000014040495D: add     rsp, 8
 * 0000000140404961: call    loc_140404954
 * 0000000140404966: add     rsp, 8
 * 000000014040496A: call    loc_14040495D
 * 000000014040496F: add     rsp, 8
 * 0000000140404973: call    loc_140404966
 * 0000000140404978: add     rsp, 8
 * 000000014040497C: call    loc_14040496F
 * 0000000140404981: add     rsp, 8
 * 0000000140404985: call    loc_140404978
 * 000000014040498A: add     rsp, 8
 * 000000014040498E: call    loc_140404981
 * 0000000140404993: add     rsp, 8
 * 0000000140404997: call    loc_14040498A
 * 000000014040499C: add     rsp, 8
 * 00000001404049A0: call    loc_140404993
 * 00000001404049A5: add     rsp, 8
 * 00000001404049A9: call    loc_14040499C
 * 00000001404049AE: add     rsp, 8
 * 00000001404049B2: call    loc_1404049A5
 * 00000001404049B7: add     rsp, 8
 * 00000001404049BB: call    loc_1404049AE
 * 00000001404049C0: add     rsp, 8
 * 00000001404049C4: call    loc_1404049B7
 * 00000001404049C9: add     rsp, 8
 * 00000001404049CD: call    loc_1404049C0
 * 00000001404049D2: add     rsp, 8
 * 00000001404049D6: mov     eax, 0DADAh
 * 00000001404049DB: test    word ptr gs:860h, 80h
 * 00000001404049E6: jz      short loc_1404049F4
 * 00000001404049E8: xor     eax, eax
 * 00000001404049EA: xor     edx, edx
 * 00000001404049EC: mov     ecx, 1
 * 00000001404049F1: div     rcx
 * 00000001404049F4: mov     rdx, [rbp-40h]
 * 00000001404049F8: mov     rcx, [rbp-48h]
 * 00000001404049FC: mov     rax, [rbp-50h]
 * 0000000140404A00: mov     rsp, rbp
 * 0000000140404A03: mov     rbp, [rbp+0D8h]
 * 0000000140404A0A: add     rsp, 0E8h
 * 0000000140404A11: test    cs:KiKvaShadow, 1
 * 0000000140404A18: jz      short loc_140404A1F
 * 0000000140404A1A: jmp     KiKernelExit
 * 0000000140404A1F: test    word ptr gs:860h, 100h
 * 0000000140404A2A: jz      short loc_140404A31
 * 0000000140404A2C: verw    [rsp-1C8h+arg_1E0]
 * 0000000140404A31: swapgs
 * 0000000140404A34: iretq
 * 0000000140404A36: ldmxcsr dword ptr [rbp-54h]
 * 0000000140404A3A: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140404A3E: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140404A42: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140404A46: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140404A4A: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140404A4E: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140404A52: mov     r11, [rbp-20h]
 * 0000000140404A56: mov     r10, [rbp-28h]
 * 0000000140404A5A: mov     r9, [rbp-30h]
 * 0000000140404A5E: mov     r8, [rbp-38h]
 * 0000000140404A62: mov     rdx, [rbp-40h]
 * 0000000140404A66: mov     rcx, [rbp-48h]
 * 0000000140404A6A: mov     rax, [rbp-50h]
 * 0000000140404A6E: mov     rsp, rbp
 * 0000000140404A71: mov     rbp, [rbp+0D8h]
 * 0000000140404A78: add     rsp, 0E8h
 * 0000000140404A7F: iretq
 */
