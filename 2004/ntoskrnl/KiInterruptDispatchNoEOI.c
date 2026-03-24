/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x1403F9340
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402FBAC0 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403F75A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403F8930 (KiInterruptSubDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x1403FB600 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1403FD790 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14050D7D0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405169B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x1403F9340
 * Reason: Hex-Rays returned no pseudocode for 0x1403F9340
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403F9340: mov     rdx, rsp
 * 00000001403F9343: mov     rcx, gs:8758h
 * 00000001403F934C: lea     rax, [rcx-6000h]
 * 00000001403F9353: cmp     rax, rsp
 * 00000001403F9356: ja      short loc_1403F935D
 * 00000001403F9358: cmp     rsp, rcx
 * 00000001403F935B: jb      short loc_1403F9369
 * 00000001403F935D: cmp     cs:KiBugCheckActive, 0
 * 00000001403F9364: jnz     short loc_1403F9369
 * 00000001403F9366: mov     rsp, rcx
 * 00000001403F9369: sub     rsp, 20h
 * 00000001403F936D: mov     [rsp+20h+var_10], rdx
 * 00000001403F9372: call    KiInterruptSubDispatchNoLock
 * 00000001403F9377: mov     rsp, [rsp+20h+var_10]
 * 00000001403F937C: mov     rcx, gs:20h
 * 00000001403F9385: cmp     byte ptr [rcx+20h], 1
 * 00000001403F9389: ja      short loc_1403F9405
 * 00000001403F938B: rdtsc
 * 00000001403F938D: shl     rdx, 20h
 * 00000001403F9391: or      rax, rdx
 * 00000001403F9394: sub     rax, [rcx+7EC0h]
 * 00000001403F939B: add     [rcx+7F38h], rax
 * 00000001403F93A2: add     [rcx+7EC0h], rax
 * 00000001403F93A9: mov     r8, rax
 * 00000001403F93AC: mov     rax, [rcx+8]
 * 00000001403F93B0: test    byte ptr [rax+2], 72h
 * 00000001403F93B4: jz      short loc_1403F93C9
 * 00000001403F93B6: xor     edx, edx
 * 00000001403F93B8: call    KiBeginThreadAccountingPeriod
 * 00000001403F93BD: mov     rcx, gs:20h
 * 00000001403F93C6: inc     byte ptr [rcx+20h]
 * 00000001403F93C9: mov     dl, [rcx+6]
 * 00000001403F93CC: and     byte ptr [rcx+6], 0
 * 00000001403F93D0: cmp     byte ptr [rcx+7], 0
 * 00000001403F93D4: jnz     short loc_1403F9405
 * 00000001403F93D6: test    dl, dl
 * 00000001403F93D8: jz      short loc_1403F9405
 * 00000001403F93DA: cmp     byte ptr [rbp-57h], 2
 * 00000001403F93DE: jnb     short loc_1403F93EB
 * 00000001403F93E0: and     byte ptr [rcx+20h], 0
 * 00000001403F93E4: call    KiDpcInterruptBypass
 * 00000001403F93E9: jmp     short loc_1403F9408
 * 00000001403F93EB: mov     ecx, 2
 * 00000001403F93F0: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403F93F7: nop     dword ptr [rax+rax+00h]
 * 00000001403F93FC: mov     rcx, gs:20h
 * 00000001403F9405: dec     byte ptr [rcx+20h]
 * 00000001403F9408: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403F940C: cmp     cs:KiIrqlFlags, 0
 * 00000001403F9413: jz      short loc_1403F941C
 * 00000001403F9415: call    KzSetIrqlUnsafe
 * 00000001403F941A: jmp     short loc_1403F9420
 * 00000001403F941C: mov     cr8, rcx
 * 00000001403F9420: mov     rsi, [rbp+0D0h]
 * 00000001403F9427: test    byte ptr [rbp+0F0h], 1
 * 00000001403F942E: jz      loc_1403F956D
 * 00000001403F9434: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403F943B: jz      short loc_1403F9440
 * 00000001403F943D: stac
 * 00000001403F9440: mov     rcx, gs:188h
 * 00000001403F9449: test    byte ptr [rcx+0C2h], 3
 * 00000001403F9450: jz      short loc_1403F946D
 * 00000001403F9452: mov     ecx, 1
 * 00000001403F9457: mov     cr8, rcx
 * 00000001403F945B: sti
 * 00000001403F945C: call    KiInitiateUserApc
 * 00000001403F9461: cli
 * 00000001403F9462: mov     ecx, 0
 * 00000001403F9467: mov     cr8, rcx
 * 00000001403F946B: jmp     short loc_1403F9440
 * 00000001403F946D: test    byte ptr gs:27Eh, 2
 * 00000001403F9476: jz      short loc_1403F947F
 * 00000001403F9478: xor     ecx, ecx
 * 00000001403F947A: call    KiUpdateStibpPairing
 * 00000001403F947F: mov     rcx, gs:188h
 * 00000001403F9488: test    dword ptr [rcx], 8000000h
 * 00000001403F948E: jz      short loc_1403F9495
 * 00000001403F9490: call    KiRestoreSetContextState
 * 00000001403F9495: mov     rcx, gs:188h
 * 00000001403F949E: test    dword ptr [rcx], 40010000h
 * 00000001403F94A4: jz      short loc_1403F94BA
 * 00000001403F94A6: test    byte ptr [rcx+2], 1
 * 00000001403F94AA: jz      short loc_1403F94BA
 * 00000001403F94AC: call    KiCopyCounters
 * 00000001403F94B1: mov     rcx, gs:188h
 * 00000001403F94BA: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F94BE: cmp     word ptr [rbp+80h], 0
 * 00000001403F94C6: jz      short loc_1403F94CD
 * 00000001403F94C8: call    KiRestoreDebugRegisterState
 * 00000001403F94CD: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F94D1: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F94D5: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F94D9: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F94DD: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F94E1: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F94E5: mov     r11, [rbp-20h]
 * 00000001403F94E9: mov     r10, [rbp-28h]
 * 00000001403F94ED: mov     r9, [rbp-30h]
 * 00000001403F94F1: mov     r8, [rbp-38h]
 * 00000001403F94F5: mov     byte ptr gs:853h, 0
 * 00000001403F94FE: movzx   eax, byte ptr gs:27Dh
 * 00000001403F9507: cmp     gs:27Ah, al
 * 00000001403F950F: jz      short loc_1403F9522
 * 00000001403F9511: mov     gs:27Ah, al
 * 00000001403F9519: mov     ecx, 48h ; 'H'
 * 00000001403F951E: xor     edx, edx
 * 00000001403F9520: wrmsr
 * 00000001403F9522: btr     word ptr gs:278h, 2
 * 00000001403F952D: jnb     short loc_1403F953D
 * 00000001403F952F: mov     eax, 1
 * 00000001403F9534: xor     edx, edx
 * 00000001403F9536: mov     ecx, 49h ; 'I'
 * 00000001403F953B: wrmsr
 * 00000001403F953D: mov     rdx, [rbp-40h]
 * 00000001403F9541: mov     rcx, [rbp-48h]
 * 00000001403F9545: mov     rax, [rbp-50h]
 * 00000001403F9549: mov     rsp, rbp
 * 00000001403F954C: mov     rbp, [rbp+0D8h]
 * 00000001403F9553: add     rsp, 0E8h
 * 00000001403F955A: test    cs:KiKvaShadow, 1
 * 00000001403F9561: jz      short loc_1403F9568
 * 00000001403F9563: jmp     KiKernelExit
 * 00000001403F9568: swapgs
 * 00000001403F956B: iretq
 * 00000001403F956D: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F9571: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F9575: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F9579: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F957D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F9581: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F9585: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F9589: mov     r11, [rbp-20h]
 * 00000001403F958D: mov     r10, [rbp-28h]
 * 00000001403F9591: mov     r9, [rbp-30h]
 * 00000001403F9595: mov     r8, [rbp-38h]
 * 00000001403F9599: mov     rdx, [rbp-40h]
 * 00000001403F959D: mov     rcx, [rbp-48h]
 * 00000001403F95A1: mov     rax, [rbp-50h]
 * 00000001403F95A5: mov     rsp, rbp
 * 00000001403F95A8: mov     rbp, [rbp+0D8h]
 * 00000001403F95AF: add     rsp, 0E8h
 * 00000001403F95B6: iretq
 */
