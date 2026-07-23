/*
 * XREFs of KxIsrLinkage @ 0x140401D20
 * Callers:
 *     KxIsrLinkageShadow @ 0x140A16B00 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x140205BE0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x14020F440 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiEndThreadAccountingPeriod @ 0x1402D5BD0 (KiEndThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1402F1E00 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x140401D20 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405E90 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x140412840 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x140512E80 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140519C60 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1405AA670 (PerfInfoLogUnexpectedInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x140401D20
 * Reason: Hex-Rays returned no pseudocode for 0x140401D20
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140401D20: push    rbp
 * 0000000140401D21: push    rsi
 * 0000000140401D22: sub     rsp, 150h
 * 0000000140401D29: lea     rbp, [rsp+80h]
 * 0000000140401D31: mov     [rbp+0D8h+var_12D], 0
 * 0000000140401D35: mov     [rbp+0D8h+var_128], rax
 * 0000000140401D39: mov     [rbp+0D8h+var_120], rcx
 * 0000000140401D3D: mov     [rbp+0D8h+var_118], rdx
 * 0000000140401D41: mov     [rbp+0D8h+var_110], r8
 * 0000000140401D45: mov     [rbp+0D8h+var_108], r9
 * 0000000140401D49: mov     [rbp+0D8h+var_100], r10
 * 0000000140401D4D: mov     [rbp+0D8h+var_F8], r11
 * 0000000140401D51: test    [rbp+0D8h+arg_8], 1
 * 0000000140401D58: jnz     short loc_140401D89
 * 0000000140401D5A: lfence
 * 0000000140401D5D: test    word ptr gs:860h, 1
 * 0000000140401D68: jnz     short loc_140401D72
 * 0000000140401D6A: lfence
 * 0000000140401D6D: jmp     loc_140401F92
 * 0000000140401D72: movzx   eax, word ptr gs:864h
 * 0000000140401D7B: mov     ecx, 48h ; 'H'
 * 0000000140401D80: xor     edx, edx
 * 0000000140401D82: wrmsr
 * 0000000140401D84: jmp     loc_140401F92
 * 0000000140401D89: test    cs:KiKvaShadow, 1
 * 0000000140401D90: jnz     short loc_140401D95
 * 0000000140401D92: swapgs
 * 0000000140401D95: lfence
 * 0000000140401D98: mov     r10, gs:188h
 * 0000000140401DA1: mov     rcx, gs:188h
 * 0000000140401DAA: mov     rcx, [rcx+220h]
 * 0000000140401DB1: mov     rcx, [rcx+9E0h]
 * 0000000140401DB8: mov     gs:858h, rcx
 * 0000000140401DC1: mov     cx, gs:850h
 * 0000000140401DCA: mov     gs:852h, cx
 * 0000000140401DD3: mov     cx, gs:860h
 * 0000000140401DDC: mov     gs:854h, cx
 * 0000000140401DE5: movzx   eax, word ptr gs:866h
 * 0000000140401DEE: cmp     gs:864h, ax
 * 0000000140401DF7: jz      short loc_140401E0B
 * 0000000140401DF9: mov     gs:864h, ax
 * 0000000140401E02: mov     ecx, 48h ; 'H'
 * 0000000140401E07: xor     edx, edx
 * 0000000140401E09: wrmsr
 * 0000000140401E0B: movzx   edx, word ptr gs:860h
 * 0000000140401E14: test    edx, 8
 * 0000000140401E1A: jz      short loc_140401E33
 * 0000000140401E1C: mov     eax, 1
 * 0000000140401E21: xor     edx, edx
 * 0000000140401E23: mov     ecx, 49h ; 'I'
 * 0000000140401E28: wrmsr
 * 0000000140401E2A: movzx   edx, word ptr gs:860h
 * 0000000140401E33: test    edx, 2
 * 0000000140401E39: jz      loc_140401F64
 * 0000000140401E3F: call    loc_140401F52
 * 0000000140401E44: add     rsp, 8
 * 0000000140401E48: call    loc_140401F5B
 * 0000000140401E4D: add     rsp, 8
 * 0000000140401E51: call    loc_140401E44
 * 0000000140401E56: add     rsp, 8
 * 0000000140401E5A: call    loc_140401E4D
 * 0000000140401E5F: add     rsp, 8
 * 0000000140401E63: call    loc_140401E56
 * 0000000140401E68: add     rsp, 8
 * 0000000140401E6C: call    loc_140401E5F
 * 0000000140401E71: add     rsp, 8
 * 0000000140401E75: call    loc_140401E68
 * 0000000140401E7A: add     rsp, 8
 * 0000000140401E7E: call    loc_140401E71
 * 0000000140401E83: add     rsp, 8
 * 0000000140401E87: call    loc_140401E7A
 * 0000000140401E8C: add     rsp, 8
 * 0000000140401E90: call    loc_140401E83
 * 0000000140401E95: add     rsp, 8
 * 0000000140401E99: call    loc_140401E8C
 * 0000000140401E9E: add     rsp, 8
 * 0000000140401EA2: call    loc_140401E95
 * 0000000140401EA7: add     rsp, 8
 * 0000000140401EAB: call    loc_140401E9E
 * 0000000140401EB0: add     rsp, 8
 * 0000000140401EB4: call    loc_140401EA7
 * 0000000140401EB9: add     rsp, 8
 * 0000000140401EBD: call    loc_140401EB0
 * 0000000140401EC2: add     rsp, 8
 * 0000000140401EC6: call    loc_140401EB9
 * 0000000140401ECB: add     rsp, 8
 * 0000000140401ECF: call    loc_140401EC2
 * 0000000140401ED4: add     rsp, 8
 * 0000000140401ED8: call    loc_140401ECB
 * 0000000140401EDD: add     rsp, 8
 * 0000000140401EE1: call    loc_140401ED4
 * 0000000140401EE6: add     rsp, 8
 * 0000000140401EEA: call    loc_140401EDD
 * 0000000140401EEF: add     rsp, 8
 * 0000000140401EF3: call    loc_140401EE6
 * 0000000140401EF8: add     rsp, 8
 * 0000000140401EFC: call    loc_140401EEF
 * 0000000140401F01: add     rsp, 8
 * 0000000140401F05: call    loc_140401EF8
 * 0000000140401F0A: add     rsp, 8
 * 0000000140401F0E: call    loc_140401F01
 * 0000000140401F13: add     rsp, 8
 * 0000000140401F17: call    loc_140401F0A
 * 0000000140401F1C: add     rsp, 8
 * 0000000140401F20: call    loc_140401F13
 * 0000000140401F25: add     rsp, 8
 * 0000000140401F29: call    loc_140401F1C
 * 0000000140401F2E: add     rsp, 8
 * 0000000140401F32: call    loc_140401F25
 * 0000000140401F37: add     rsp, 8
 * 0000000140401F3B: call    loc_140401F2E
 * 0000000140401F40: add     rsp, 8
 * 0000000140401F44: call    loc_140401F37
 * 0000000140401F49: add     rsp, 8
 * 0000000140401F4D: call    loc_140401F40
 * 0000000140401F52: add     rsp, 8
 * 0000000140401F56: call    loc_140401F49
 * 0000000140401F5B: add     rsp, 8
 * 0000000140401F5F: mov     eax, 0DADAh
 * 0000000140401F64: test    edx, 200h
 * 0000000140401F6A: jz      short loc_140401F71
 * 0000000140401F6C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140401F71: lfence
 * 0000000140401F74: mov     byte ptr gs:856h, 0
 * 0000000140401F7D: test    byte ptr [r10+3], 3
 * 0000000140401F82: mov     [rbp+0D8h+var_58], 0
 * 0000000140401F8B: jz      short loc_140401F92
 * 0000000140401F8D: call    KiSaveDebugRegisterState
 * 0000000140401F92: cld
 * 0000000140401F93: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140401F97: ldmxcsr dword ptr gs:180h
 * 0000000140401FA0: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140401FA4: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140401FA8: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140401FAC: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140401FB0: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140401FB4: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140401FB8: cmp     byte ptr gs:801Ah, 0
 * 0000000140401FC1: jz      short loc_140401FC8
 * 0000000140401FC3: call    KeWakeProcessor
 * 0000000140401FC8: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140401FCF: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140401FD6: jnb     short loc_140401FF1
 * 0000000140401FD8: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140401FDF: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140401FE6: jb      short loc_140401FF1
 * 0000000140401FE8: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140401FEC: call    KiCheckForSListAddress
 * 0000000140401FF1: movzx   eax, byte ptr [rbp+0E0h]
 * 0000000140401FF8: mov     rsi, gs:20h
 * 0000000140402001: mov     rsi, [rsi+rax*8+3140h]
 * 0000000140402009: inc     dword ptr gs:8000h
 * 0000000140402011: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140402018: jz      short loc_14040201D
 * 000000014040201A: clac
 * 000000014040201D: test    rsi, rsi
 * 0000000140402020: jz      short loc_14040202B
 * 0000000140402022: mov     rax, [rsi+50h]
 * 0000000140402026: jmp     _guard_dispatch_icall
 * 000000014040202B: mov     ecx, eax
 * 000000014040202D: shr     ecx, 4
 * 0000000140402030: cmp     cs:KiIrqlFlags, 0
 * 0000000140402037: jz      short loc_140402040
 * 0000000140402039: call    KzSetIrqlUnsafe
 * 000000014040203E: jmp     short loc_140402048
 * 0000000140402040: mov     rax, cr8
 * 0000000140402044: mov     cr8, rcx
 * 0000000140402048: mov     [rbp+0D8h+var_12F], al
 * 000000014040204B: mov     rcx, gs:20h
 * 0000000140402054: inc     byte ptr [rcx+20h]
 * 0000000140402057: cmp     byte ptr [rcx+20h], 1
 * 000000014040205B: jnz     short loc_1404020AD
 * 000000014040205D: rdtsc
 * 000000014040205F: shl     rdx, 20h
 * 0000000140402063: or      rax, rdx
 * 0000000140402066: mov     r8, [rcx+8]
 * 000000014040206A: sub     rax, [rcx+7EC0h]
 * 0000000140402071: add     [r8+48h], rax
 * 0000000140402075: mov     edx, [r8+50h]
 * 0000000140402079: add     [rcx+7EC0h], rax
 * 0000000140402080: add     rdx, rax
 * 0000000140402083: mov     ecx, edx
 * 0000000140402085: shr     rdx, 20h
 * 0000000140402089: jz      short loc_14040208E
 * 000000014040208B: or      ecx, 0FFFFFFFFh
 * 000000014040208E: mov     [r8+50h], ecx
 * 0000000140402092: test    byte ptr [r8+2], 3Eh
 * 0000000140402097: jz      short loc_1404020AD
 * 0000000140402099: mov     rdx, r8
 * 000000014040209C: mov     r8, rax
 * 000000014040209F: mov     rcx, gs:20h
 * 00000001404020A8: call    KiEndThreadAccountingPeriod
 * 00000001404020AD: sti
 * 00000001404020AE: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 00000001404020B8: jz      short loc_1404020C6
 * 00000001404020BA: movzx   ecx, byte ptr [rbp+0E0h]
 * 00000001404020C1: call    PerfInfoLogUnexpectedInterrupt
 * 00000001404020C6: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 00000001404020CD: jz      short loc_1404020EE
 * 00000001404020CF: and     [rbp+0D8h+var_138], 0
 * 00000001404020D4: xor     r9, r9
 * 00000001404020D7: movzx   r8d, byte ptr [rbp+0E0h]
 * 00000001404020DF: mov     edx, 1
 * 00000001404020E4: mov     ecx, 12h
 * 00000001404020E9: call    KiBugCheckDispatch
 * 00000001404020EE: cli
 * 00000001404020EF: mov     rcx, rsi
 * 00000001404020F2: call    HalPerformEndOfInterrupt
 * 00000001404020F7: mov     rcx, gs:20h
 * 0000000140402100: cmp     byte ptr [rcx+20h], 1
 * 0000000140402104: ja      short loc_140402180
 * 0000000140402106: rdtsc
 * 0000000140402108: shl     rdx, 20h
 * 000000014040210C: or      rax, rdx
 * 000000014040210F: sub     rax, [rcx+7EC0h]
 * 0000000140402116: add     [rcx+7F38h], rax
 * 000000014040211D: add     [rcx+7EC0h], rax
 * 0000000140402124: mov     r8, rax
 * 0000000140402127: mov     rax, [rcx+8]
 * 000000014040212B: test    byte ptr [rax+2], 72h
 * 000000014040212F: jz      short loc_140402144
 * 0000000140402131: xor     edx, edx
 * 0000000140402133: call    KiBeginThreadAccountingPeriod
 * 0000000140402138: mov     rcx, gs:20h
 * 0000000140402141: inc     byte ptr [rcx+20h]
 * 0000000140402144: mov     dl, [rcx+6]
 * 0000000140402147: and     byte ptr [rcx+6], 0
 * 000000014040214B: cmp     byte ptr [rcx+7], 0
 * 000000014040214F: jnz     short loc_140402180
 * 0000000140402151: test    dl, dl
 * 0000000140402153: jz      short loc_140402180
 * 0000000140402155: cmp     [rbp+0D8h+var_12F], 2
 * 0000000140402159: jnb     short loc_140402166
 * 000000014040215B: and     byte ptr [rcx+20h], 0
 * 000000014040215F: call    KiDpcInterruptBypass
 * 0000000140402164: jmp     short loc_140402183
 * 0000000140402166: mov     ecx, 2
 * 000000014040216B: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140402172: nop     dword ptr [rax+rax+00h]
 * 0000000140402177: mov     rcx, gs:20h
 * 0000000140402180: dec     byte ptr [rcx+20h]
 * 0000000140402183: movzx   ecx, [rbp+0D8h+var_12F]
 * 0000000140402187: cmp     cs:KiIrqlFlags, 0
 * 000000014040218E: jz      short loc_140402197
 * 0000000140402190: call    KzSetIrqlUnsafe
 * 0000000140402195: jmp     short loc_14040219B
 * 0000000140402197: mov     cr8, rcx
 * 000000014040219B: mov     rsi, [rbp+0D8h+var_8]
 * 00000001404021A2: cli
 * 00000001404021A3: test    [rbp+0D8h+arg_8], 1
 * 00000001404021AA: jz      loc_14040244C
 * 00000001404021B0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404021B7: jz      short loc_1404021BC
 * 00000001404021B9: stac
 * 00000001404021BC: mov     rcx, gs:188h
 * 00000001404021C5: test    byte ptr [rcx+0C2h], 3
 * 00000001404021CC: jz      short loc_1404021E9
 * 00000001404021CE: mov     ecx, 1
 * 00000001404021D3: mov     cr8, rcx
 * 00000001404021D7: sti
 * 00000001404021D8: call    KiInitiateUserApc
 * 00000001404021DD: cli
 * 00000001404021DE: mov     ecx, 0
 * 00000001404021E3: mov     cr8, rcx
 * 00000001404021E7: jmp     short loc_1404021BC
 * 00000001404021E9: test    byte ptr gs:86Ch, 2
 * 00000001404021F2: jz      short loc_1404021FB
 * 00000001404021F4: xor     ecx, ecx
 * 00000001404021F6: call    KiUpdateStibpPairing
 * 00000001404021FB: mov     rcx, gs:188h
 * 0000000140402204: test    dword ptr [rcx], 8000000h
 * 000000014040220A: jz      short loc_140402211
 * 000000014040220C: call    KiRestoreSetContextState
 * 0000000140402211: mov     rcx, gs:188h
 * 000000014040221A: test    dword ptr [rcx], 40010000h
 * 0000000140402220: jz      short loc_140402236
 * 0000000140402222: test    byte ptr [rcx+2], 1
 * 0000000140402226: jz      short loc_140402236
 * 0000000140402228: call    KiCopyCounters
 * 000000014040222D: mov     rcx, gs:188h
 * 0000000140402236: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014040223A: cmp     [rbp+0D8h+var_58], 0
 * 0000000140402242: jz      short loc_140402249
 * 0000000140402244: call    KiRestoreDebugRegisterState
 * 0000000140402249: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014040224D: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140402251: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140402255: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140402259: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014040225D: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140402261: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140402265: mov     r10, [rbp+0D8h+var_100]
 * 0000000140402269: mov     r9, [rbp+0D8h+var_108]
 * 000000014040226D: mov     r8, [rbp+0D8h+var_110]
 * 0000000140402271: mov     byte ptr gs:856h, 0
 * 000000014040227A: movzx   eax, word ptr gs:86Ah
 * 0000000140402283: cmp     gs:864h, ax
 * 000000014040228C: jz      short loc_1404022A0
 * 000000014040228E: mov     gs:864h, ax
 * 0000000140402297: mov     ecx, 48h ; 'H'
 * 000000014040229C: xor     edx, edx
 * 000000014040229E: wrmsr
 * 00000001404022A0: btr     word ptr gs:860h, 2
 * 00000001404022AB: jnb     short loc_1404022BB
 * 00000001404022AD: mov     eax, 1
 * 00000001404022B2: xor     edx, edx
 * 00000001404022B4: mov     ecx, 49h ; 'I'
 * 00000001404022B9: wrmsr
 * 00000001404022BB: btr     word ptr gs:860h, 5
 * 00000001404022C6: jnb     loc_1404023F1
 * 00000001404022CC: call    loc_1404023DF
 * 00000001404022D1: add     rsp, 8
 * 00000001404022D5: call    loc_1404023E8
 * 00000001404022DA: add     rsp, 8
 * 00000001404022DE: call    loc_1404022D1
 * 00000001404022E3: add     rsp, 8
 * 00000001404022E7: call    loc_1404022DA
 * 00000001404022EC: add     rsp, 8
 * 00000001404022F0: call    loc_1404022E3
 * 00000001404022F5: add     rsp, 8
 * 00000001404022F9: call    loc_1404022EC
 * 00000001404022FE: add     rsp, 8
 * 0000000140402302: call    loc_1404022F5
 * 0000000140402307: add     rsp, 8
 * 000000014040230B: call    loc_1404022FE
 * 0000000140402310: add     rsp, 8
 * 0000000140402314: call    loc_140402307
 * 0000000140402319: add     rsp, 8
 * 000000014040231D: call    loc_140402310
 * 0000000140402322: add     rsp, 8
 * 0000000140402326: call    loc_140402319
 * 000000014040232B: add     rsp, 8
 * 000000014040232F: call    loc_140402322
 * 0000000140402334: add     rsp, 8
 * 0000000140402338: call    loc_14040232B
 * 000000014040233D: add     rsp, 8
 * 0000000140402341: call    loc_140402334
 * 0000000140402346: add     rsp, 8
 * 000000014040234A: call    loc_14040233D
 * 000000014040234F: add     rsp, 8
 * 0000000140402353: call    loc_140402346
 * 0000000140402358: add     rsp, 8
 * 000000014040235C: call    loc_14040234F
 * 0000000140402361: add     rsp, 8
 * 0000000140402365: call    loc_140402358
 * 000000014040236A: add     rsp, 8
 * 000000014040236E: call    loc_140402361
 * 0000000140402373: add     rsp, 8
 * 0000000140402377: call    loc_14040236A
 * 000000014040237C: add     rsp, 8
 * 0000000140402380: call    loc_140402373
 * 0000000140402385: add     rsp, 8
 * 0000000140402389: call    loc_14040237C
 * 000000014040238E: add     rsp, 8
 * 0000000140402392: call    loc_140402385
 * 0000000140402397: add     rsp, 8
 * 000000014040239B: call    loc_14040238E
 * 00000001404023A0: add     rsp, 8
 * 00000001404023A4: call    loc_140402397
 * 00000001404023A9: add     rsp, 8
 * 00000001404023AD: call    loc_1404023A0
 * 00000001404023B2: add     rsp, 8
 * 00000001404023B6: call    loc_1404023A9
 * 00000001404023BB: add     rsp, 8
 * 00000001404023BF: call    loc_1404023B2
 * 00000001404023C4: add     rsp, 8
 * 00000001404023C8: call    loc_1404023BB
 * 00000001404023CD: add     rsp, 8
 * 00000001404023D1: call    loc_1404023C4
 * 00000001404023D6: add     rsp, 8
 * 00000001404023DA: call    loc_1404023CD
 * 00000001404023DF: add     rsp, 8
 * 00000001404023E3: call    loc_1404023D6
 * 00000001404023E8: add     rsp, 8
 * 00000001404023EC: mov     eax, 0DADAh
 * 00000001404023F1: test    word ptr gs:860h, 80h
 * 00000001404023FC: jz      short loc_14040240A
 * 00000001404023FE: xor     eax, eax
 * 0000000140402400: xor     edx, edx
 * 0000000140402402: mov     ecx, 1
 * 0000000140402407: div     rcx
 * 000000014040240A: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040240E: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140402412: mov     rax, [rbp+0D8h+var_128]
 * 0000000140402416: mov     rsp, rbp
 * 0000000140402419: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140402420: add     rsp, 0E8h
 * 0000000140402427: test    cs:KiKvaShadow, 1
 * 000000014040242E: jz      short loc_140402435
 * 0000000140402430: jmp     KiKernelExit
 * 0000000140402435: test    word ptr gs:860h, 100h
 * 0000000140402440: jz      short loc_140402447
 * 0000000140402442: verw    [rsp-10h+arg_20]
 * 0000000140402447: swapgs
 * 000000014040244A: iretq
 * 000000014040244C: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140402450: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140402454: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140402458: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014040245C: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140402460: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140402464: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140402468: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040246C: mov     r10, [rbp+0D8h+var_100]
 * 0000000140402470: mov     r9, [rbp+0D8h+var_108]
 * 0000000140402474: mov     r8, [rbp+0D8h+var_110]
 * 0000000140402478: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040247C: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140402480: mov     rax, [rbp+0D8h+var_128]
 * 0000000140402484: mov     rsp, rbp
 * 0000000140402487: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014040248E: add     rsp, 0E8h
 * 0000000140402495: iretq
 */
