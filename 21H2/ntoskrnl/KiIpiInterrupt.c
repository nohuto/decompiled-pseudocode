/*
 * XREFs of KiIpiInterrupt @ 0x140405CF0
 * Callers:
 *     KiIpiInterruptShadow @ 0x140A15240 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x14024D5B0 (KiCheckForSListAddress.c)
 *     KiBeginThreadAccountingPeriod @ 0x140288A40 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402914D0 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x140293E90 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405CB0 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x140405CF0 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1404063C0 (KiIpiInterruptSubDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x140512C40 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140519A20 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x140405CF0
 * Reason: Hex-Rays returned no pseudocode for 0x140405CF0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140405CF0: sub     rsp, 8
 * 0000000140405CF4: push    rbp
 * 0000000140405CF5: push    rsi
 * 0000000140405CF6: sub     rsp, 150h
 * 0000000140405CFD: lea     rbp, [rsp+80h]
 * 0000000140405D05: mov     [rbp+0E8h+var_13D], 0
 * 0000000140405D09: mov     [rbp+0E8h+var_138], rax
 * 0000000140405D0D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140405D11: mov     [rbp+0E8h+var_128], rdx
 * 0000000140405D15: mov     [rbp+0E8h+var_120], r8
 * 0000000140405D19: mov     [rbp+0E8h+var_118], r9
 * 0000000140405D1D: mov     [rbp+0E8h+var_110], r10
 * 0000000140405D21: mov     [rbp+0E8h+var_108], r11
 * 0000000140405D25: test    [rbp+0E8h+arg_0], 1
 * 0000000140405D2C: jnz     short loc_140405D5D
 * 0000000140405D2E: lfence
 * 0000000140405D31: test    word ptr gs:860h, 1
 * 0000000140405D3C: jnz     short loc_140405D46
 * 0000000140405D3E: lfence
 * 0000000140405D41: jmp     loc_140405F66
 * 0000000140405D46: movzx   eax, word ptr gs:864h
 * 0000000140405D4F: mov     ecx, 48h ; 'H'
 * 0000000140405D54: xor     edx, edx
 * 0000000140405D56: wrmsr
 * 0000000140405D58: jmp     loc_140405F66
 * 0000000140405D5D: test    cs:KiKvaShadow, 1
 * 0000000140405D64: jnz     short loc_140405D69
 * 0000000140405D66: swapgs
 * 0000000140405D69: lfence
 * 0000000140405D6C: mov     r10, gs:188h
 * 0000000140405D75: mov     rcx, gs:188h
 * 0000000140405D7E: mov     rcx, [rcx+220h]
 * 0000000140405D85: mov     rcx, [rcx+9E0h]
 * 0000000140405D8C: mov     gs:858h, rcx
 * 0000000140405D95: mov     cx, gs:850h
 * 0000000140405D9E: mov     gs:852h, cx
 * 0000000140405DA7: mov     cx, gs:860h
 * 0000000140405DB0: mov     gs:854h, cx
 * 0000000140405DB9: movzx   eax, word ptr gs:866h
 * 0000000140405DC2: cmp     gs:864h, ax
 * 0000000140405DCB: jz      short loc_140405DDF
 * 0000000140405DCD: mov     gs:864h, ax
 * 0000000140405DD6: mov     ecx, 48h ; 'H'
 * 0000000140405DDB: xor     edx, edx
 * 0000000140405DDD: wrmsr
 * 0000000140405DDF: movzx   edx, word ptr gs:860h
 * 0000000140405DE8: test    edx, 8
 * 0000000140405DEE: jz      short loc_140405E07
 * 0000000140405DF0: mov     eax, 1
 * 0000000140405DF5: xor     edx, edx
 * 0000000140405DF7: mov     ecx, 49h ; 'I'
 * 0000000140405DFC: wrmsr
 * 0000000140405DFE: movzx   edx, word ptr gs:860h
 * 0000000140405E07: test    edx, 2
 * 0000000140405E0D: jz      loc_140405F38
 * 0000000140405E13: call    loc_140405F26
 * 0000000140405E18: add     rsp, 8
 * 0000000140405E1C: call    loc_140405F2F
 * 0000000140405E21: add     rsp, 8
 * 0000000140405E25: call    loc_140405E18
 * 0000000140405E2A: add     rsp, 8
 * 0000000140405E2E: call    loc_140405E21
 * 0000000140405E33: add     rsp, 8
 * 0000000140405E37: call    loc_140405E2A
 * 0000000140405E3C: add     rsp, 8
 * 0000000140405E40: call    loc_140405E33
 * 0000000140405E45: add     rsp, 8
 * 0000000140405E49: call    loc_140405E3C
 * 0000000140405E4E: add     rsp, 8
 * 0000000140405E52: call    loc_140405E45
 * 0000000140405E57: add     rsp, 8
 * 0000000140405E5B: call    loc_140405E4E
 * 0000000140405E60: add     rsp, 8
 * 0000000140405E64: call    loc_140405E57
 * 0000000140405E69: add     rsp, 8
 * 0000000140405E6D: call    loc_140405E60
 * 0000000140405E72: add     rsp, 8
 * 0000000140405E76: call    loc_140405E69
 * 0000000140405E7B: add     rsp, 8
 * 0000000140405E7F: call    loc_140405E72
 * 0000000140405E84: add     rsp, 8
 * 0000000140405E88: call    loc_140405E7B
 * 0000000140405E8D: add     rsp, 8
 * 0000000140405E91: call    loc_140405E84
 * 0000000140405E96: add     rsp, 8
 * 0000000140405E9A: call    loc_140405E8D
 * 0000000140405E9F: add     rsp, 8
 * 0000000140405EA3: call    loc_140405E96
 * 0000000140405EA8: add     rsp, 8
 * 0000000140405EAC: call    loc_140405E9F
 * 0000000140405EB1: add     rsp, 8
 * 0000000140405EB5: call    loc_140405EA8
 * 0000000140405EBA: add     rsp, 8
 * 0000000140405EBE: call    loc_140405EB1
 * 0000000140405EC3: add     rsp, 8
 * 0000000140405EC7: call    loc_140405EBA
 * 0000000140405ECC: add     rsp, 8
 * 0000000140405ED0: call    loc_140405EC3
 * 0000000140405ED5: add     rsp, 8
 * 0000000140405ED9: call    loc_140405ECC
 * 0000000140405EDE: add     rsp, 8
 * 0000000140405EE2: call    loc_140405ED5
 * 0000000140405EE7: add     rsp, 8
 * 0000000140405EEB: call    loc_140405EDE
 * 0000000140405EF0: add     rsp, 8
 * 0000000140405EF4: call    loc_140405EE7
 * 0000000140405EF9: add     rsp, 8
 * 0000000140405EFD: call    loc_140405EF0
 * 0000000140405F02: add     rsp, 8
 * 0000000140405F06: call    loc_140405EF9
 * 0000000140405F0B: add     rsp, 8
 * 0000000140405F0F: call    loc_140405F02
 * 0000000140405F14: add     rsp, 8
 * 0000000140405F18: call    loc_140405F0B
 * 0000000140405F1D: add     rsp, 8
 * 0000000140405F21: call    loc_140405F14
 * 0000000140405F26: add     rsp, 8
 * 0000000140405F2A: call    loc_140405F1D
 * 0000000140405F2F: add     rsp, 8
 * 0000000140405F33: mov     eax, 0DADAh
 * 0000000140405F38: test    edx, 200h
 * 0000000140405F3E: jz      short loc_140405F45
 * 0000000140405F40: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140405F45: lfence
 * 0000000140405F48: mov     byte ptr gs:856h, 0
 * 0000000140405F51: test    byte ptr [r10+3], 3
 * 0000000140405F56: mov     [rbp+0E8h+var_68], 0
 * 0000000140405F5F: jz      short loc_140405F66
 * 0000000140405F61: call    KiSaveDebugRegisterState
 * 0000000140405F66: cld
 * 0000000140405F67: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140405F6B: ldmxcsr dword ptr gs:180h
 * 0000000140405F74: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140405F78: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140405F7C: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140405F80: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140405F84: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140405F88: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140405F8C: cmp     byte ptr gs:801Ah, 0
 * 0000000140405F95: jz      short loc_140405F9C
 * 0000000140405F97: call    KeWakeProcessor
 * 0000000140405F9C: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140405FA3: cmp     rax, [rbp+0E8h]
 * 0000000140405FAA: jnb     short loc_140405FC5
 * 0000000140405FAC: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140405FB3: cmp     rax, [rbp+0E8h]
 * 0000000140405FBA: jb      short loc_140405FC5
 * 0000000140405FBC: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140405FC0: call    KiCheckForSListAddress
 * 0000000140405FC5: xor     esi, esi
 * 0000000140405FC7: inc     dword ptr gs:8000h
 * 0000000140405FCF: mov     rdx, rsp
 * 0000000140405FD2: mov     rcx, gs:8758h
 * 0000000140405FDB: lea     rax, [rcx-6000h]
 * 0000000140405FE2: cmp     rax, rsp
 * 0000000140405FE5: ja      short loc_140405FEC
 * 0000000140405FE7: cmp     rsp, rcx
 * 0000000140405FEA: jb      short loc_140405FF8
 * 0000000140405FEC: cmp     cs:KiBugCheckActive, 0
 * 0000000140405FF3: jnz     short loc_140405FF8
 * 0000000140405FF5: mov     rsp, rcx
 * 0000000140405FF8: sub     rsp, 20h
 * 0000000140405FFC: mov     qword ptr [rsp+108h+var_F8], rdx
 * 0000000140406001: call    KiIpiInterruptSubDispatch
 * 0000000140406006: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 000000014040600B: mov     rcx, rsi
 * 000000014040600E: call    HalPerformEndOfInterrupt
 * 0000000140406013: mov     rcx, gs:20h
 * 000000014040601C: cmp     byte ptr [rcx+20h], 1
 * 0000000140406020: ja      short loc_14040609C
 * 0000000140406022: rdtsc
 * 0000000140406024: shl     rdx, 20h
 * 0000000140406028: or      rax, rdx
 * 000000014040602B: sub     rax, [rcx+7EC0h]
 * 0000000140406032: add     [rcx+7F38h], rax
 * 0000000140406039: add     [rcx+7EC0h], rax
 * 0000000140406040: mov     r8, rax
 * 0000000140406043: mov     rax, [rcx+8]
 * 0000000140406047: test    byte ptr [rax+2], 72h
 * 000000014040604B: jz      short loc_140406060
 * 000000014040604D: xor     edx, edx
 * 000000014040604F: call    KiBeginThreadAccountingPeriod
 * 0000000140406054: mov     rcx, gs:20h
 * 000000014040605D: inc     byte ptr [rcx+20h]
 * 0000000140406060: mov     dl, [rcx+6]
 * 0000000140406063: and     byte ptr [rcx+6], 0
 * 0000000140406067: cmp     byte ptr [rcx+7], 0
 * 000000014040606B: jnz     short loc_14040609C
 * 000000014040606D: test    dl, dl
 * 000000014040606F: jz      short loc_14040609C
 * 0000000140406071: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140406075: jnb     short loc_140406082
 * 0000000140406077: and     byte ptr [rcx+20h], 0
 * 000000014040607B: call    KiDpcInterruptBypass
 * 0000000140406080: jmp     short loc_14040609F
 * 0000000140406082: mov     ecx, 2
 * 0000000140406087: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014040608E: nop     dword ptr [rax+rax+00h]
 * 0000000140406093: mov     rcx, gs:20h
 * 000000014040609C: dec     byte ptr [rcx+20h]
 * 000000014040609F: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001404060A3: cmp     cs:KiIrqlFlags, 0
 * 00000001404060AA: jz      short loc_1404060B3
 * 00000001404060AC: call    KzSetIrqlUnsafe
 * 00000001404060B1: jmp     short loc_1404060B7
 * 00000001404060B3: mov     cr8, rcx
 * 00000001404060B7: mov     rsi, [rbp+0E8h+var_18]
 * 00000001404060BE: test    [rbp+0E8h+arg_0], 1
 * 00000001404060C5: jz      loc_140406367
 * 00000001404060CB: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404060D2: jz      short loc_1404060D7
 * 00000001404060D4: stac
 * 00000001404060D7: mov     rcx, gs:188h
 * 00000001404060E0: test    byte ptr [rcx+0C2h], 3
 * 00000001404060E7: jz      short loc_140406104
 * 00000001404060E9: mov     ecx, 1
 * 00000001404060EE: mov     cr8, rcx
 * 00000001404060F2: sti
 * 00000001404060F3: call    KiInitiateUserApc
 * 00000001404060F8: cli
 * 00000001404060F9: mov     ecx, 0
 * 00000001404060FE: mov     cr8, rcx
 * 0000000140406102: jmp     short loc_1404060D7
 * 0000000140406104: test    byte ptr gs:86Ch, 2
 * 000000014040610D: jz      short loc_140406116
 * 000000014040610F: xor     ecx, ecx
 * 0000000140406111: call    KiUpdateStibpPairing
 * 0000000140406116: mov     rcx, gs:188h
 * 000000014040611F: test    dword ptr [rcx], 8000000h
 * 0000000140406125: jz      short loc_14040612C
 * 0000000140406127: call    KiRestoreSetContextState
 * 000000014040612C: mov     rcx, gs:188h
 * 0000000140406135: test    dword ptr [rcx], 40010000h
 * 000000014040613B: jz      short loc_140406151
 * 000000014040613D: test    byte ptr [rcx+2], 1
 * 0000000140406141: jz      short loc_140406151
 * 0000000140406143: call    KiCopyCounters
 * 0000000140406148: mov     rcx, gs:188h
 * 0000000140406151: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140406155: cmp     [rbp+0E8h+var_68], 0
 * 000000014040615D: jz      short loc_140406164
 * 000000014040615F: call    KiRestoreDebugRegisterState
 * 0000000140406164: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140406168: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040616C: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140406170: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140406174: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140406178: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040617C: mov     r11, [rbp+0E8h+var_108]
 * 0000000140406180: mov     r10, [rbp+0E8h+var_110]
 * 0000000140406184: mov     r9, [rbp+0E8h+var_118]
 * 0000000140406188: mov     r8, [rbp+0E8h+var_120]
 * 000000014040618C: mov     byte ptr gs:856h, 0
 * 0000000140406195: movzx   eax, word ptr gs:86Ah
 * 000000014040619E: cmp     gs:864h, ax
 * 00000001404061A7: jz      short loc_1404061BB
 * 00000001404061A9: mov     gs:864h, ax
 * 00000001404061B2: mov     ecx, 48h ; 'H'
 * 00000001404061B7: xor     edx, edx
 * 00000001404061B9: wrmsr
 * 00000001404061BB: btr     word ptr gs:860h, 2
 * 00000001404061C6: jnb     short loc_1404061D6
 * 00000001404061C8: mov     eax, 1
 * 00000001404061CD: xor     edx, edx
 * 00000001404061CF: mov     ecx, 49h ; 'I'
 * 00000001404061D4: wrmsr
 * 00000001404061D6: btr     word ptr gs:860h, 5
 * 00000001404061E1: jnb     loc_14040630C
 * 00000001404061E7: call    loc_1404062FA
 * 00000001404061EC: add     rsp, 8
 * 00000001404061F0: call    loc_140406303
 * 00000001404061F5: add     rsp, 8
 * 00000001404061F9: call    loc_1404061EC
 * 00000001404061FE: add     rsp, 8
 * 0000000140406202: call    loc_1404061F5
 * 0000000140406207: add     rsp, 8
 * 000000014040620B: call    loc_1404061FE
 * 0000000140406210: add     rsp, 8
 * 0000000140406214: call    loc_140406207
 * 0000000140406219: add     rsp, 8
 * 000000014040621D: call    loc_140406210
 * 0000000140406222: add     rsp, 8
 * 0000000140406226: call    loc_140406219
 * 000000014040622B: add     rsp, 8
 * 000000014040622F: call    loc_140406222
 * 0000000140406234: add     rsp, 8
 * 0000000140406238: call    loc_14040622B
 * 000000014040623D: add     rsp, 8
 * 0000000140406241: call    loc_140406234
 * 0000000140406246: add     rsp, 8
 * 000000014040624A: call    loc_14040623D
 * 000000014040624F: add     rsp, 8
 * 0000000140406253: call    loc_140406246
 * 0000000140406258: add     rsp, 8
 * 000000014040625C: call    loc_14040624F
 * 0000000140406261: add     rsp, 8
 * 0000000140406265: call    loc_140406258
 * 000000014040626A: add     rsp, 8
 * 000000014040626E: call    loc_140406261
 * 0000000140406273: add     rsp, 8
 * 0000000140406277: call    loc_14040626A
 * 000000014040627C: add     rsp, 8
 * 0000000140406280: call    loc_140406273
 * 0000000140406285: add     rsp, 8
 * 0000000140406289: call    loc_14040627C
 * 000000014040628E: add     rsp, 8
 * 0000000140406292: call    loc_140406285
 * 0000000140406297: add     rsp, 8
 * 000000014040629B: call    loc_14040628E
 * 00000001404062A0: add     rsp, 8
 * 00000001404062A4: call    loc_140406297
 * 00000001404062A9: add     rsp, 8
 * 00000001404062AD: call    loc_1404062A0
 * 00000001404062B2: add     rsp, 8
 * 00000001404062B6: call    loc_1404062A9
 * 00000001404062BB: add     rsp, 8
 * 00000001404062BF: call    loc_1404062B2
 * 00000001404062C4: add     rsp, 8
 * 00000001404062C8: call    loc_1404062BB
 * 00000001404062CD: add     rsp, 8
 * 00000001404062D1: call    loc_1404062C4
 * 00000001404062D6: add     rsp, 8
 * 00000001404062DA: call    loc_1404062CD
 * 00000001404062DF: add     rsp, 8
 * 00000001404062E3: call    loc_1404062D6
 * 00000001404062E8: add     rsp, 8
 * 00000001404062EC: call    loc_1404062DF
 * 00000001404062F1: add     rsp, 8
 * 00000001404062F5: call    loc_1404062E8
 * 00000001404062FA: add     rsp, 8
 * 00000001404062FE: call    loc_1404062F1
 * 0000000140406303: add     rsp, 8
 * 0000000140406307: mov     eax, 0DADAh
 * 000000014040630C: test    word ptr gs:860h, 80h
 * 0000000140406317: jz      short loc_140406325
 * 0000000140406319: xor     eax, eax
 * 000000014040631B: xor     edx, edx
 * 000000014040631D: mov     ecx, 1
 * 0000000140406322: div     rcx
 * 0000000140406325: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140406329: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040632D: mov     rax, [rbp+0E8h+var_138]
 * 0000000140406331: mov     rsp, rbp
 * 0000000140406334: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040633B: add     rsp, 0E8h
 * 0000000140406342: test    cs:KiKvaShadow, 1
 * 0000000140406349: jz      short loc_140406350
 * 000000014040634B: jmp     KiKernelExit
 * 0000000140406350: test    word ptr gs:860h, 100h
 * 000000014040635B: jz      short loc_140406362
 * 000000014040635D: verw    [rsp+arg_18]
 * 0000000140406362: swapgs
 * 0000000140406365: iretq
 * 0000000140406367: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040636B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040636F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140406373: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140406377: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040637B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040637F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140406383: mov     r11, [rbp+0E8h+var_108]
 * 0000000140406387: mov     r10, [rbp+0E8h+var_110]
 * 000000014040638B: mov     r9, [rbp+0E8h+var_118]
 * 000000014040638F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140406393: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140406397: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040639B: mov     rax, [rbp+0E8h+var_138]
 * 000000014040639F: mov     rsp, rbp
 * 00000001404063A2: mov     rbp, [rbp+0E8h+var_10]
 * 00000001404063A9: add     rsp, 0E8h
 * 00000001404063B0: iretq
 */
