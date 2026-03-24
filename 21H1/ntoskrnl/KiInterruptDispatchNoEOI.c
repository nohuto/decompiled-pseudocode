/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x1403F80B0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DDF20 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140357AA0 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140359A80 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F6310 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403F76A0 (KiInterruptSubDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x1403FA370 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1403FC500 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14050D180 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140516360 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x1403F80B0
 * Reason: Hex-Rays returned no pseudocode for 0x1403F80B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403F80B0: mov     rdx, rsp
 * 00000001403F80B3: mov     rcx, gs:8758h
 * 00000001403F80BC: lea     rax, [rcx-6000h]
 * 00000001403F80C3: cmp     rax, rsp
 * 00000001403F80C6: ja      short loc_1403F80CD
 * 00000001403F80C8: cmp     rsp, rcx
 * 00000001403F80CB: jb      short loc_1403F80D9
 * 00000001403F80CD: cmp     cs:KiBugCheckActive, 0
 * 00000001403F80D4: jnz     short loc_1403F80D9
 * 00000001403F80D6: mov     rsp, rcx
 * 00000001403F80D9: sub     rsp, 20h
 * 00000001403F80DD: mov     [rsp+20h+var_10], rdx
 * 00000001403F80E2: call    KiInterruptSubDispatchNoLock
 * 00000001403F80E7: mov     rsp, [rsp+20h+var_10]
 * 00000001403F80EC: mov     rcx, gs:20h
 * 00000001403F80F5: cmp     byte ptr [rcx+20h], 1
 * 00000001403F80F9: ja      short loc_1403F8175
 * 00000001403F80FB: rdtsc
 * 00000001403F80FD: shl     rdx, 20h
 * 00000001403F8101: or      rax, rdx
 * 00000001403F8104: sub     rax, [rcx+7EC0h]
 * 00000001403F810B: add     [rcx+7F38h], rax
 * 00000001403F8112: add     [rcx+7EC0h], rax
 * 00000001403F8119: mov     r8, rax
 * 00000001403F811C: mov     rax, [rcx+8]
 * 00000001403F8120: test    byte ptr [rax+2], 72h
 * 00000001403F8124: jz      short loc_1403F8139
 * 00000001403F8126: xor     edx, edx
 * 00000001403F8128: call    KiBeginThreadAccountingPeriod
 * 00000001403F812D: mov     rcx, gs:20h
 * 00000001403F8136: inc     byte ptr [rcx+20h]
 * 00000001403F8139: mov     dl, [rcx+6]
 * 00000001403F813C: and     byte ptr [rcx+6], 0
 * 00000001403F8140: cmp     byte ptr [rcx+7], 0
 * 00000001403F8144: jnz     short loc_1403F8175
 * 00000001403F8146: test    dl, dl
 * 00000001403F8148: jz      short loc_1403F8175
 * 00000001403F814A: cmp     byte ptr [rbp-57h], 2
 * 00000001403F814E: jnb     short loc_1403F815B
 * 00000001403F8150: and     byte ptr [rcx+20h], 0
 * 00000001403F8154: call    KiDpcInterruptBypass
 * 00000001403F8159: jmp     short loc_1403F8178
 * 00000001403F815B: mov     ecx, 2
 * 00000001403F8160: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403F8167: nop     dword ptr [rax+rax+00h]
 * 00000001403F816C: mov     rcx, gs:20h
 * 00000001403F8175: dec     byte ptr [rcx+20h]
 * 00000001403F8178: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403F817C: cmp     cs:KiIrqlFlags, 0
 * 00000001403F8183: jz      short loc_1403F818C
 * 00000001403F8185: call    KzSetIrqlUnsafe
 * 00000001403F818A: jmp     short loc_1403F8190
 * 00000001403F818C: mov     cr8, rcx
 * 00000001403F8190: mov     rsi, [rbp+0D0h]
 * 00000001403F8197: test    byte ptr [rbp+0F0h], 1
 * 00000001403F819E: jz      loc_1403F82DD
 * 00000001403F81A4: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403F81AB: jz      short loc_1403F81B0
 * 00000001403F81AD: stac
 * 00000001403F81B0: mov     rcx, gs:188h
 * 00000001403F81B9: test    byte ptr [rcx+0C2h], 3
 * 00000001403F81C0: jz      short loc_1403F81DD
 * 00000001403F81C2: mov     ecx, 1
 * 00000001403F81C7: mov     cr8, rcx
 * 00000001403F81CB: sti
 * 00000001403F81CC: call    KiInitiateUserApc
 * 00000001403F81D1: cli
 * 00000001403F81D2: mov     ecx, 0
 * 00000001403F81D7: mov     cr8, rcx
 * 00000001403F81DB: jmp     short loc_1403F81B0
 * 00000001403F81DD: test    byte ptr gs:27Eh, 2
 * 00000001403F81E6: jz      short loc_1403F81EF
 * 00000001403F81E8: xor     ecx, ecx
 * 00000001403F81EA: call    KiUpdateStibpPairing
 * 00000001403F81EF: mov     rcx, gs:188h
 * 00000001403F81F8: test    dword ptr [rcx], 8000000h
 * 00000001403F81FE: jz      short loc_1403F8205
 * 00000001403F8200: call    KiRestoreSetContextState
 * 00000001403F8205: mov     rcx, gs:188h
 * 00000001403F820E: test    dword ptr [rcx], 40010000h
 * 00000001403F8214: jz      short loc_1403F822A
 * 00000001403F8216: test    byte ptr [rcx+2], 1
 * 00000001403F821A: jz      short loc_1403F822A
 * 00000001403F821C: call    KiCopyCounters
 * 00000001403F8221: mov     rcx, gs:188h
 * 00000001403F822A: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F822E: cmp     word ptr [rbp+80h], 0
 * 00000001403F8236: jz      short loc_1403F823D
 * 00000001403F8238: call    KiRestoreDebugRegisterState
 * 00000001403F823D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F8241: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F8245: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F8249: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F824D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F8251: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F8255: mov     r11, [rbp-20h]
 * 00000001403F8259: mov     r10, [rbp-28h]
 * 00000001403F825D: mov     r9, [rbp-30h]
 * 00000001403F8261: mov     r8, [rbp-38h]
 * 00000001403F8265: mov     byte ptr gs:853h, 0
 * 00000001403F826E: movzx   eax, byte ptr gs:27Dh
 * 00000001403F8277: cmp     gs:27Ah, al
 * 00000001403F827F: jz      short loc_1403F8292
 * 00000001403F8281: mov     gs:27Ah, al
 * 00000001403F8289: mov     ecx, 48h ; 'H'
 * 00000001403F828E: xor     edx, edx
 * 00000001403F8290: wrmsr
 * 00000001403F8292: btr     word ptr gs:278h, 2
 * 00000001403F829D: jnb     short loc_1403F82AD
 * 00000001403F829F: mov     eax, 1
 * 00000001403F82A4: xor     edx, edx
 * 00000001403F82A6: mov     ecx, 49h ; 'I'
 * 00000001403F82AB: wrmsr
 * 00000001403F82AD: mov     rdx, [rbp-40h]
 * 00000001403F82B1: mov     rcx, [rbp-48h]
 * 00000001403F82B5: mov     rax, [rbp-50h]
 * 00000001403F82B9: mov     rsp, rbp
 * 00000001403F82BC: mov     rbp, [rbp+0D8h]
 * 00000001403F82C3: add     rsp, 0E8h
 * 00000001403F82CA: test    cs:KiKvaShadow, 1
 * 00000001403F82D1: jz      short loc_1403F82D8
 * 00000001403F82D3: jmp     KiKernelExit
 * 00000001403F82D8: swapgs
 * 00000001403F82DB: iretq
 * 00000001403F82DD: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F82E1: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F82E5: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F82E9: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F82ED: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F82F1: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F82F5: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F82F9: mov     r11, [rbp-20h]
 * 00000001403F82FD: mov     r10, [rbp-28h]
 * 00000001403F8301: mov     r9, [rbp-30h]
 * 00000001403F8305: mov     r8, [rbp-38h]
 * 00000001403F8309: mov     rdx, [rbp-40h]
 * 00000001403F830D: mov     rcx, [rbp-48h]
 * 00000001403F8311: mov     rax, [rbp-50h]
 * 00000001403F8315: mov     rsp, rbp
 * 00000001403F8318: mov     rbp, [rbp+0D8h]
 * 00000001403F831F: add     rsp, 0E8h
 * 00000001403F8326: iretq
 */
