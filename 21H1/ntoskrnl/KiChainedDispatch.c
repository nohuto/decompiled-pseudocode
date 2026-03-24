/*
 * XREFs of KiChainedDispatch @ 0x1403F70E0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DDF20 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x1402EC5B0 (HalPerformEndOfInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140357AA0 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140359A80 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F6310 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KiScanInterruptObjectList @ 0x1403F7370 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x1403FA370 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1403FC500 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14050D180 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140516360 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x1403F70E0
 * Reason: Hex-Rays returned no pseudocode for 0x1403F70E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403F70E0: mov     rdx, rsp
 * 00000001403F70E3: mov     rcx, gs:8758h
 * 00000001403F70EC: lea     rax, [rcx-6000h]
 * 00000001403F70F3: cmp     rax, rsp
 * 00000001403F70F6: ja      short loc_1403F70FD
 * 00000001403F70F8: cmp     rsp, rcx
 * 00000001403F70FB: jb      short loc_1403F7109
 * 00000001403F70FD: cmp     cs:KiBugCheckActive, 0
 * 00000001403F7104: jnz     short loc_1403F7109
 * 00000001403F7106: mov     rsp, rcx
 * 00000001403F7109: sub     rsp, 20h
 * 00000001403F710D: mov     [rsp+20h+var_10], rdx
 * 00000001403F7112: call    KiScanInterruptObjectList
 * 00000001403F7117: mov     rsp, [rsp+20h+var_10]
 * 00000001403F711C: mov     rcx, rsi
 * 00000001403F711F: call    HalPerformEndOfInterrupt
 * 00000001403F7124: mov     rcx, gs:20h
 * 00000001403F712D: cmp     byte ptr [rcx+20h], 1
 * 00000001403F7131: ja      short loc_1403F71AD
 * 00000001403F7133: rdtsc
 * 00000001403F7135: shl     rdx, 20h
 * 00000001403F7139: or      rax, rdx
 * 00000001403F713C: sub     rax, [rcx+7EC0h]
 * 00000001403F7143: add     [rcx+7F38h], rax
 * 00000001403F714A: add     [rcx+7EC0h], rax
 * 00000001403F7151: mov     r8, rax
 * 00000001403F7154: mov     rax, [rcx+8]
 * 00000001403F7158: test    byte ptr [rax+2], 72h
 * 00000001403F715C: jz      short loc_1403F7171
 * 00000001403F715E: xor     edx, edx
 * 00000001403F7160: call    KiBeginThreadAccountingPeriod
 * 00000001403F7165: mov     rcx, gs:20h
 * 00000001403F716E: inc     byte ptr [rcx+20h]
 * 00000001403F7171: mov     dl, [rcx+6]
 * 00000001403F7174: and     byte ptr [rcx+6], 0
 * 00000001403F7178: cmp     byte ptr [rcx+7], 0
 * 00000001403F717C: jnz     short loc_1403F71AD
 * 00000001403F717E: test    dl, dl
 * 00000001403F7180: jz      short loc_1403F71AD
 * 00000001403F7182: cmp     byte ptr [rbp-57h], 2
 * 00000001403F7186: jnb     short loc_1403F7193
 * 00000001403F7188: and     byte ptr [rcx+20h], 0
 * 00000001403F718C: call    KiDpcInterruptBypass
 * 00000001403F7191: jmp     short loc_1403F71B0
 * 00000001403F7193: mov     ecx, 2
 * 00000001403F7198: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403F719F: nop     dword ptr [rax+rax+00h]
 * 00000001403F71A4: mov     rcx, gs:20h
 * 00000001403F71AD: dec     byte ptr [rcx+20h]
 * 00000001403F71B0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403F71B4: cmp     cs:KiIrqlFlags, 0
 * 00000001403F71BB: jz      short loc_1403F71C4
 * 00000001403F71BD: call    KzSetIrqlUnsafe
 * 00000001403F71C2: jmp     short loc_1403F71C8
 * 00000001403F71C4: mov     cr8, rcx
 * 00000001403F71C8: mov     rsi, [rbp+0D0h]
 * 00000001403F71CF: test    byte ptr [rbp+0F0h], 1
 * 00000001403F71D6: jz      loc_1403F7315
 * 00000001403F71DC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403F71E3: jz      short loc_1403F71E8
 * 00000001403F71E5: stac
 * 00000001403F71E8: mov     rcx, gs:188h
 * 00000001403F71F1: test    byte ptr [rcx+0C2h], 3
 * 00000001403F71F8: jz      short loc_1403F7215
 * 00000001403F71FA: mov     ecx, 1
 * 00000001403F71FF: mov     cr8, rcx
 * 00000001403F7203: sti
 * 00000001403F7204: call    KiInitiateUserApc
 * 00000001403F7209: cli
 * 00000001403F720A: mov     ecx, 0
 * 00000001403F720F: mov     cr8, rcx
 * 00000001403F7213: jmp     short loc_1403F71E8
 * 00000001403F7215: test    byte ptr gs:27Eh, 2
 * 00000001403F721E: jz      short loc_1403F7227
 * 00000001403F7220: xor     ecx, ecx
 * 00000001403F7222: call    KiUpdateStibpPairing
 * 00000001403F7227: mov     rcx, gs:188h
 * 00000001403F7230: test    dword ptr [rcx], 8000000h
 * 00000001403F7236: jz      short loc_1403F723D
 * 00000001403F7238: call    KiRestoreSetContextState
 * 00000001403F723D: mov     rcx, gs:188h
 * 00000001403F7246: test    dword ptr [rcx], 40010000h
 * 00000001403F724C: jz      short loc_1403F7262
 * 00000001403F724E: test    byte ptr [rcx+2], 1
 * 00000001403F7252: jz      short loc_1403F7262
 * 00000001403F7254: call    KiCopyCounters
 * 00000001403F7259: mov     rcx, gs:188h
 * 00000001403F7262: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F7266: cmp     word ptr [rbp+80h], 0
 * 00000001403F726E: jz      short loc_1403F7275
 * 00000001403F7270: call    KiRestoreDebugRegisterState
 * 00000001403F7275: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F7279: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F727D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F7281: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F7285: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F7289: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F728D: mov     r11, [rbp-20h]
 * 00000001403F7291: mov     r10, [rbp-28h]
 * 00000001403F7295: mov     r9, [rbp-30h]
 * 00000001403F7299: mov     r8, [rbp-38h]
 * 00000001403F729D: mov     byte ptr gs:853h, 0
 * 00000001403F72A6: movzx   eax, byte ptr gs:27Dh
 * 00000001403F72AF: cmp     gs:27Ah, al
 * 00000001403F72B7: jz      short loc_1403F72CA
 * 00000001403F72B9: mov     gs:27Ah, al
 * 00000001403F72C1: mov     ecx, 48h ; 'H'
 * 00000001403F72C6: xor     edx, edx
 * 00000001403F72C8: wrmsr
 * 00000001403F72CA: btr     word ptr gs:278h, 2
 * 00000001403F72D5: jnb     short loc_1403F72E5
 * 00000001403F72D7: mov     eax, 1
 * 00000001403F72DC: xor     edx, edx
 * 00000001403F72DE: mov     ecx, 49h ; 'I'
 * 00000001403F72E3: wrmsr
 * 00000001403F72E5: mov     rdx, [rbp-40h]
 * 00000001403F72E9: mov     rcx, [rbp-48h]
 * 00000001403F72ED: mov     rax, [rbp-50h]
 * 00000001403F72F1: mov     rsp, rbp
 * 00000001403F72F4: mov     rbp, [rbp+0D8h]
 * 00000001403F72FB: add     rsp, 0E8h
 * 00000001403F7302: test    cs:KiKvaShadow, 1
 * 00000001403F7309: jz      short loc_1403F7310
 * 00000001403F730B: jmp     KiKernelExit
 * 00000001403F7310: swapgs
 * 00000001403F7313: iretq
 * 00000001403F7315: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F7319: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F731D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F7321: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F7325: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F7329: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F732D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F7331: mov     r11, [rbp-20h]
 * 00000001403F7335: mov     r10, [rbp-28h]
 * 00000001403F7339: mov     r9, [rbp-30h]
 * 00000001403F733D: mov     r8, [rbp-38h]
 * 00000001403F7341: mov     rdx, [rbp-40h]
 * 00000001403F7345: mov     rcx, [rbp-48h]
 * 00000001403F7349: mov     rax, [rbp-50h]
 * 00000001403F734D: mov     rsp, rbp
 * 00000001403F7350: mov     rbp, [rbp+0D8h]
 * 00000001403F7357: add     rsp, 0E8h
 * 00000001403F735E: iretq
 */
