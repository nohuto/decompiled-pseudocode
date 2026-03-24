/*
 * XREFs of KiInvalidOpcodeFault @ 0x14040C040
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x140A14440 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x14040C040 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x140413580 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140413A00 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInvalidOpcodeFault @ 0x14040C040
 * Reason: Hex-Rays returned no pseudocode for 0x14040C040
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040C040: sub     rsp, 8
 * 000000014040C044: push    rbp
 * 000000014040C045: sub     rsp, 158h
 * 000000014040C04C: lea     rbp, [rsp+80h]
 * 000000014040C054: mov     [rbp+0E8h+var_13D], 1
 * 000000014040C058: mov     [rbp+0E8h+var_138], rax
 * 000000014040C05C: mov     [rbp+0E8h+var_130], rcx
 * 000000014040C060: mov     [rbp+0E8h+var_128], rdx
 * 000000014040C064: mov     [rbp+0E8h+var_120], r8
 * 000000014040C068: mov     [rbp+0E8h+var_118], r9
 * 000000014040C06C: mov     [rbp+0E8h+var_110], r10
 * 000000014040C070: mov     [rbp+0E8h+var_108], r11
 * 000000014040C074: test    [rbp+0E8h+arg_0], 1
 * 000000014040C07B: jnz     short loc_14040C0AC
 * 000000014040C07D: lfence
 * 000000014040C080: test    word ptr gs:860h, 1
 * 000000014040C08B: jnz     short loc_14040C095
 * 000000014040C08D: lfence
 * 000000014040C090: jmp     loc_14040C2FE
 * 000000014040C095: movzx   eax, word ptr gs:864h
 * 000000014040C09E: mov     ecx, 48h ; 'H'
 * 000000014040C0A3: xor     edx, edx
 * 000000014040C0A5: wrmsr
 * 000000014040C0A7: jmp     loc_14040C2FE
 * 000000014040C0AC: test    cs:KiKvaShadow, 1
 * 000000014040C0B3: jnz     short loc_14040C0B8
 * 000000014040C0B5: swapgs
 * 000000014040C0B8: lfence
 * 000000014040C0BB: mov     r10, gs:188h
 * 000000014040C0C4: mov     rcx, gs:188h
 * 000000014040C0CD: mov     rcx, [rcx+220h]
 * 000000014040C0D4: mov     rcx, [rcx+9E0h]
 * 000000014040C0DB: mov     gs:858h, rcx
 * 000000014040C0E4: mov     cx, gs:850h
 * 000000014040C0ED: mov     gs:852h, cx
 * 000000014040C0F6: mov     cx, gs:860h
 * 000000014040C0FF: mov     gs:854h, cx
 * 000000014040C108: movzx   eax, word ptr gs:866h
 * 000000014040C111: cmp     gs:864h, ax
 * 000000014040C11A: jz      short loc_14040C12E
 * 000000014040C11C: mov     gs:864h, ax
 * 000000014040C125: mov     ecx, 48h ; 'H'
 * 000000014040C12A: xor     edx, edx
 * 000000014040C12C: wrmsr
 * 000000014040C12E: movzx   edx, word ptr gs:860h
 * 000000014040C137: test    edx, 8
 * 000000014040C13D: jz      short loc_14040C156
 * 000000014040C13F: mov     eax, 1
 * 000000014040C144: xor     edx, edx
 * 000000014040C146: mov     ecx, 49h ; 'I'
 * 000000014040C14B: wrmsr
 * 000000014040C14D: movzx   edx, word ptr gs:860h
 * 000000014040C156: test    edx, 2
 * 000000014040C15C: jz      loc_14040C287
 * 000000014040C162: call    loc_14040C275
 * 000000014040C167: add     rsp, 8
 * 000000014040C16B: call    loc_14040C27E
 * 000000014040C170: add     rsp, 8
 * 000000014040C174: call    loc_14040C167
 * 000000014040C179: add     rsp, 8
 * 000000014040C17D: call    loc_14040C170
 * 000000014040C182: add     rsp, 8
 * 000000014040C186: call    loc_14040C179
 * 000000014040C18B: add     rsp, 8
 * 000000014040C18F: call    loc_14040C182
 * 000000014040C194: add     rsp, 8
 * 000000014040C198: call    loc_14040C18B
 * 000000014040C19D: add     rsp, 8
 * 000000014040C1A1: call    loc_14040C194
 * 000000014040C1A6: add     rsp, 8
 * 000000014040C1AA: call    loc_14040C19D
 * 000000014040C1AF: add     rsp, 8
 * 000000014040C1B3: call    loc_14040C1A6
 * 000000014040C1B8: add     rsp, 8
 * 000000014040C1BC: call    loc_14040C1AF
 * 000000014040C1C1: add     rsp, 8
 * 000000014040C1C5: call    loc_14040C1B8
 * 000000014040C1CA: add     rsp, 8
 * 000000014040C1CE: call    loc_14040C1C1
 * 000000014040C1D3: add     rsp, 8
 * 000000014040C1D7: call    loc_14040C1CA
 * 000000014040C1DC: add     rsp, 8
 * 000000014040C1E0: call    loc_14040C1D3
 * 000000014040C1E5: add     rsp, 8
 * 000000014040C1E9: call    loc_14040C1DC
 * 000000014040C1EE: add     rsp, 8
 * 000000014040C1F2: call    loc_14040C1E5
 * 000000014040C1F7: add     rsp, 8
 * 000000014040C1FB: call    loc_14040C1EE
 * 000000014040C200: add     rsp, 8
 * 000000014040C204: call    loc_14040C1F7
 * 000000014040C209: add     rsp, 8
 * 000000014040C20D: call    loc_14040C200
 * 000000014040C212: add     rsp, 8
 * 000000014040C216: call    loc_14040C209
 * 000000014040C21B: add     rsp, 8
 * 000000014040C21F: call    loc_14040C212
 * 000000014040C224: add     rsp, 8
 * 000000014040C228: call    loc_14040C21B
 * 000000014040C22D: add     rsp, 8
 * 000000014040C231: call    loc_14040C224
 * 000000014040C236: add     rsp, 8
 * 000000014040C23A: call    loc_14040C22D
 * 000000014040C23F: add     rsp, 8
 * 000000014040C243: call    loc_14040C236
 * 000000014040C248: add     rsp, 8
 * 000000014040C24C: call    loc_14040C23F
 * 000000014040C251: add     rsp, 8
 * 000000014040C255: call    loc_14040C248
 * 000000014040C25A: add     rsp, 8
 * 000000014040C25E: call    loc_14040C251
 * 000000014040C263: add     rsp, 8
 * 000000014040C267: call    loc_14040C25A
 * 000000014040C26C: add     rsp, 8
 * 000000014040C270: call    loc_14040C263
 * 000000014040C275: add     rsp, 8
 * 000000014040C279: call    loc_14040C26C
 * 000000014040C27E: add     rsp, 8
 * 000000014040C282: mov     eax, 0DADAh
 * 000000014040C287: test    edx, 200h
 * 000000014040C28D: jz      short loc_14040C294
 * 000000014040C28F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040C294: lfence
 * 000000014040C297: mov     byte ptr gs:856h, 0
 * 000000014040C2A0: test    byte ptr [r10+3], 80h
 * 000000014040C2A5: jz      short loc_14040C2E9
 * 000000014040C2A7: mov     ecx, 0C0000102h
 * 000000014040C2AC: rdmsr
 * 000000014040C2AE: shl     rdx, 20h
 * 000000014040C2B2: or      rax, rdx
 * 000000014040C2B5: cmp     rax, cs:MmUserProbeAddress
 * 000000014040C2BC: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040C2C4: cmp     [r10+0F0h], rax
 * 000000014040C2CB: jz      short loc_14040C2E9
 * 000000014040C2CD: mov     rdx, [r10+1F0h]
 * 000000014040C2D4: bts     dword ptr [r10+74h], 8
 * 000000014040C2DA: dec     word ptr [r10+1E6h]
 * 000000014040C2E2: mov     [rdx+80h], rax
 * 000000014040C2E9: test    byte ptr [r10+3], 3
 * 000000014040C2EE: mov     [rbp+0E8h+var_68], 0
 * 000000014040C2F7: jz      short loc_14040C2FE
 * 000000014040C2F9: call    KiSaveDebugRegisterState
 * 000000014040C2FE: cld
 * 000000014040C2FF: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040C303: ldmxcsr dword ptr gs:180h
 * 000000014040C30C: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040C310: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040C314: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040C318: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040C31C: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040C320: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040C324: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040C32B: jz      short loc_14040C339
 * 000000014040C32D: test    [rbp+0E8h+arg_0], 1
 * 000000014040C334: jz      short loc_14040C339
 * 000000014040C336: stac
 * 000000014040C339: test    [rbp+0E8h+arg_8], 200h
 * 000000014040C343: jz      short loc_14040C346
 * 000000014040C345: sti
 * 000000014040C346: mov     r9, gs:188h
 * 000000014040C34F: bt      dword ptr [r9+74h], 8
 * 000000014040C355: jnb     short loc_14040C365
 * 000000014040C357: test    [rbp+0E8h+arg_0], 1
 * 000000014040C35E: jz      short loc_14040C365
 * 000000014040C360: call    KiUmsTrapEntry
 * 000000014040C365: mov     ecx, 10000002h
 * 000000014040C36A: xor     edx, edx
 * 000000014040C36C: mov     r8, [rbp+0E8h]
 * 000000014040C373: call    KiExceptionDispatch
 * 000000014040C378: nop
 * 000000014040C379: cli
 * 000000014040C37A: test    [rbp+0E8h+arg_0], 1
 * 000000014040C381: jz      loc_14040C634
 * 000000014040C387: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040C38E: jz      short loc_14040C393
 * 000000014040C390: stac
 * 000000014040C393: mov     rcx, gs:188h
 * 000000014040C39C: test    byte ptr [rcx+0C2h], 3
 * 000000014040C3A3: jz      short loc_14040C3C0
 * 000000014040C3A5: mov     ecx, 1
 * 000000014040C3AA: mov     cr8, rcx
 * 000000014040C3AE: sti
 * 000000014040C3AF: call    KiInitiateUserApc
 * 000000014040C3B4: cli
 * 000000014040C3B5: mov     ecx, 0
 * 000000014040C3BA: mov     cr8, rcx
 * 000000014040C3BE: jmp     short loc_14040C393
 * 000000014040C3C0: test    byte ptr gs:86Ch, 2
 * 000000014040C3C9: jz      short loc_14040C3D2
 * 000000014040C3CB: xor     ecx, ecx
 * 000000014040C3CD: call    KiUpdateStibpPairing
 * 000000014040C3D2: mov     rcx, gs:188h
 * 000000014040C3DB: test    dword ptr [rcx], 8000000h
 * 000000014040C3E1: jz      short loc_14040C3E8
 * 000000014040C3E3: call    KiRestoreSetContextState
 * 000000014040C3E8: mov     rcx, gs:188h
 * 000000014040C3F1: test    dword ptr [rcx], 40010000h
 * 000000014040C3F7: jz      short loc_14040C41E
 * 000000014040C3F9: test    byte ptr [rcx+2], 1
 * 000000014040C3FD: jz      short loc_14040C40D
 * 000000014040C3FF: call    KiCopyCounters
 * 000000014040C404: mov     rcx, gs:188h
 * 000000014040C40D: test    byte ptr [rcx+3], 40h
 * 000000014040C411: jz      short loc_14040C41E
 * 000000014040C413: lea     rsp, [rbp-80h]
 * 000000014040C417: mov     cl, 1
 * 000000014040C419: call    KiUmsExit
 * 000000014040C41E: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040C422: cmp     [rbp+0E8h+var_68], 0
 * 000000014040C42A: jz      short loc_14040C431
 * 000000014040C42C: call    KiRestoreDebugRegisterState
 * 000000014040C431: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040C435: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040C439: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040C43D: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040C441: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040C445: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040C449: mov     r11, [rbp+0E8h+var_108]
 * 000000014040C44D: mov     r10, [rbp+0E8h+var_110]
 * 000000014040C451: mov     r9, [rbp+0E8h+var_118]
 * 000000014040C455: mov     r8, [rbp+0E8h+var_120]
 * 000000014040C459: mov     byte ptr gs:856h, 0
 * 000000014040C462: movzx   eax, word ptr gs:86Ah
 * 000000014040C46B: cmp     gs:864h, ax
 * 000000014040C474: jz      short loc_14040C488
 * 000000014040C476: mov     gs:864h, ax
 * 000000014040C47F: mov     ecx, 48h ; 'H'
 * 000000014040C484: xor     edx, edx
 * 000000014040C486: wrmsr
 * 000000014040C488: btr     word ptr gs:860h, 2
 * 000000014040C493: jnb     short loc_14040C4A3
 * 000000014040C495: mov     eax, 1
 * 000000014040C49A: xor     edx, edx
 * 000000014040C49C: mov     ecx, 49h ; 'I'
 * 000000014040C4A1: wrmsr
 * 000000014040C4A3: btr     word ptr gs:860h, 5
 * 000000014040C4AE: jnb     loc_14040C5D9
 * 000000014040C4B4: call    loc_14040C5C7
 * 000000014040C4B9: add     rsp, 8
 * 000000014040C4BD: call    loc_14040C5D0
 * 000000014040C4C2: add     rsp, 8
 * 000000014040C4C6: call    loc_14040C4B9
 * 000000014040C4CB: add     rsp, 8
 * 000000014040C4CF: call    loc_14040C4C2
 * 000000014040C4D4: add     rsp, 8
 * 000000014040C4D8: call    loc_14040C4CB
 * 000000014040C4DD: add     rsp, 8
 * 000000014040C4E1: call    loc_14040C4D4
 * 000000014040C4E6: add     rsp, 8
 * 000000014040C4EA: call    loc_14040C4DD
 * 000000014040C4EF: add     rsp, 8
 * 000000014040C4F3: call    loc_14040C4E6
 * 000000014040C4F8: add     rsp, 8
 * 000000014040C4FC: call    loc_14040C4EF
 * 000000014040C501: add     rsp, 8
 * 000000014040C505: call    loc_14040C4F8
 * 000000014040C50A: add     rsp, 8
 * 000000014040C50E: call    loc_14040C501
 * 000000014040C513: add     rsp, 8
 * 000000014040C517: call    loc_14040C50A
 * 000000014040C51C: add     rsp, 8
 * 000000014040C520: call    loc_14040C513
 * 000000014040C525: add     rsp, 8
 * 000000014040C529: call    loc_14040C51C
 * 000000014040C52E: add     rsp, 8
 * 000000014040C532: call    loc_14040C525
 * 000000014040C537: add     rsp, 8
 * 000000014040C53B: call    loc_14040C52E
 * 000000014040C540: add     rsp, 8
 * 000000014040C544: call    loc_14040C537
 * 000000014040C549: add     rsp, 8
 * 000000014040C54D: call    loc_14040C540
 * 000000014040C552: add     rsp, 8
 * 000000014040C556: call    loc_14040C549
 * 000000014040C55B: add     rsp, 8
 * 000000014040C55F: call    loc_14040C552
 * 000000014040C564: add     rsp, 8
 * 000000014040C568: call    loc_14040C55B
 * 000000014040C56D: add     rsp, 8
 * 000000014040C571: call    loc_14040C564
 * 000000014040C576: add     rsp, 8
 * 000000014040C57A: call    loc_14040C56D
 * 000000014040C57F: add     rsp, 8
 * 000000014040C583: call    loc_14040C576
 * 000000014040C588: add     rsp, 8
 * 000000014040C58C: call    loc_14040C57F
 * 000000014040C591: add     rsp, 8
 * 000000014040C595: call    loc_14040C588
 * 000000014040C59A: add     rsp, 8
 * 000000014040C59E: call    loc_14040C591
 * 000000014040C5A3: add     rsp, 8
 * 000000014040C5A7: call    loc_14040C59A
 * 000000014040C5AC: add     rsp, 8
 * 000000014040C5B0: call    loc_14040C5A3
 * 000000014040C5B5: add     rsp, 8
 * 000000014040C5B9: call    loc_14040C5AC
 * 000000014040C5BE: add     rsp, 8
 * 000000014040C5C2: call    loc_14040C5B5
 * 000000014040C5C7: add     rsp, 8
 * 000000014040C5CB: call    loc_14040C5BE
 * 000000014040C5D0: add     rsp, 8
 * 000000014040C5D4: mov     eax, 0DADAh
 * 000000014040C5D9: test    word ptr gs:860h, 80h
 * 000000014040C5E4: jz      short loc_14040C5F2
 * 000000014040C5E6: xor     eax, eax
 * 000000014040C5E8: xor     edx, edx
 * 000000014040C5EA: mov     ecx, 1
 * 000000014040C5EF: div     rcx
 * 000000014040C5F2: mov     rdx, [rbp+0E8h+var_128]
 * 000000014040C5F6: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040C5FA: mov     rax, [rbp+0E8h+var_138]
 * 000000014040C5FE: mov     rsp, rbp
 * 000000014040C601: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040C608: add     rsp, 0E8h
 * 000000014040C60F: test    cs:KiKvaShadow, 1
 * 000000014040C616: jz      short loc_14040C61D
 * 000000014040C618: jmp     KiKernelExit
 * 000000014040C61D: test    word ptr gs:860h, 100h
 * 000000014040C628: jz      short loc_14040C62F
 * 000000014040C62A: verw    [rsp+arg_18]
 * 000000014040C62F: swapgs
 * 000000014040C632: iretq
 * 000000014040C634: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040C638: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040C63C: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040C640: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040C644: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040C648: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040C64C: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040C650: mov     r11, [rbp+0E8h+var_108]
 * 000000014040C654: mov     r10, [rbp+0E8h+var_110]
 * 000000014040C658: mov     r9, [rbp+0E8h+var_118]
 * 000000014040C65C: mov     r8, [rbp+0E8h+var_120]
 * 000000014040C660: mov     rdx, [rbp+0E8h+var_128]
 * 000000014040C664: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040C668: mov     rax, [rbp+0E8h+var_138]
 * 000000014040C66C: mov     rsp, rbp
 * 000000014040C66F: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040C676: add     rsp, 0E8h
 * 000000014040C67D: iretq
 */
