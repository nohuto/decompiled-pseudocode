/*
 * XREFs of KiUmsFastReturnToUser @ 0x140413100
 * Callers:
 *     KiUmsTrapEntry @ 0x140413580 (KiUmsTrapEntry.c)
 *     KiUmsCallEntry @ 0x140413780 (KiUmsCallEntry.c)
 *     KiUmsExceptionEntry @ 0x140413940 (KiUmsExceptionEntry.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x140412740 (KiBugCheckDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140413100 (KiUmsFastReturnToUser.c)
 *     KiUmsExit @ 0x140413A00 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiUmsFastReturnToUser @ 0x140413100
 * Reason: Hex-Rays returned no pseudocode for 0x140413100
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140413100: sub     rsp, 28h
 * 0000000140413104: mov     rbx, gs:188h
 * 000000014041310D: mov     rcx, [rbx+90h]
 * 0000000140413114: lea     rbp, [rcx+80h]
 * 000000014041311B: mov     rax, cr8
 * 000000014041311F: or      al, [rbx+24Ah]
 * 0000000140413125: or      eax, [rbx+1E4h]
 * 000000014041312B: jz      short loc_140413161
 * 000000014041312D: mov     ecx, 4Ah ; 'J'
 * 0000000140413132: xor     r9d, r9d
 * 0000000140413135: mov     r8, cr8
 * 0000000140413139: or      r8d, r8d
 * 000000014041313C: jnz     short loc_140413152
 * 000000014041313E: mov     ecx, 1
 * 0000000140413143: movzx   r8d, byte ptr [rbx+24Ah]
 * 000000014041314B: mov     r9d, [rbx+1E4h]
 * 0000000140413152: mov     rdx, [rbp+0E8h]
 * 0000000140413159: mov     r10, rbp
 * 000000014041315C: call    KiBugCheckDispatch
 * 0000000140413161: cli
 * 0000000140413162: mov     rcx, gs:188h
 * 000000014041316B: test    byte ptr [rcx+0C2h], 3
 * 0000000140413172: jz      short loc_1404131CD
 * 0000000140413174: mov     [rbp-50h], rax
 * 0000000140413178: xor     eax, eax
 * 000000014041317A: mov     [rbp-48h], rax
 * 000000014041317E: mov     [rbp-40h], rax
 * 0000000140413182: mov     [rbp-38h], rax
 * 0000000140413186: mov     [rbp-30h], rax
 * 000000014041318A: mov     [rbp-28h], rax
 * 000000014041318E: mov     [rbp-20h], rax
 * 0000000140413192: pxor    xmm0, xmm0
 * 0000000140413196: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014041319A: movaps  xmmword ptr [rbp+0], xmm0
 * 000000014041319E: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001404131A2: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001404131A6: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001404131AA: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001404131AE: mov     ecx, 1
 * 00000001404131B3: mov     cr8, rcx
 * 00000001404131B7: sti
 * 00000001404131B8: call    KiInitiateUserApc
 * 00000001404131BD: cli
 * 00000001404131BE: mov     ecx, 0
 * 00000001404131C3: mov     cr8, rcx
 * 00000001404131C7: mov     rax, [rbp-50h]
 * 00000001404131CB: jmp     short loc_140413162
 * 00000001404131CD: test    byte ptr gs:86Ch, 2
 * 00000001404131D6: jz      short loc_1404131E7
 * 00000001404131D8: mov     [rbp-50h], rax
 * 00000001404131DC: xor     ecx, ecx
 * 00000001404131DE: call    KiUpdateStibpPairing
 * 00000001404131E3: mov     rax, [rbp-50h]
 * 00000001404131E7: mov     rcx, gs:188h
 * 00000001404131F0: test    dword ptr [rcx], 8000000h
 * 00000001404131F6: jz      short loc_140413237
 * 00000001404131F8: mov     [rbp-50h], rax
 * 00000001404131FC: xor     eax, eax
 * 00000001404131FE: mov     [rbp-48h], rax
 * 0000000140413202: mov     [rbp-40h], rax
 * 0000000140413206: mov     [rbp-38h], rax
 * 000000014041320A: mov     [rbp-30h], rax
 * 000000014041320E: mov     [rbp-28h], rax
 * 0000000140413212: mov     [rbp-20h], rax
 * 0000000140413216: pxor    xmm0, xmm0
 * 000000014041321A: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014041321E: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140413222: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140413226: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014041322A: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014041322E: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140413232: call    KiRestoreSetContextState
 * 0000000140413237: mov     rcx, gs:188h
 * 0000000140413240: test    dword ptr [rcx], 40010000h
 * 0000000140413246: jz      short loc_140413275
 * 0000000140413248: mov     [rbp-50h], rax
 * 000000014041324C: test    byte ptr [rcx+2], 1
 * 0000000140413250: jz      short loc_140413260
 * 0000000140413252: call    KiCopyCounters
 * 0000000140413257: mov     rcx, gs:188h
 * 0000000140413260: test    byte ptr [rcx+3], 40h
 * 0000000140413264: jz      short loc_140413271
 * 0000000140413266: lea     rsp, [rbp-80h]
 * 000000014041326A: xor     ecx, ecx
 * 000000014041326C: call    KiUmsExit
 * 0000000140413271: mov     rax, [rbp-50h]
 * 0000000140413275: ldmxcsr dword ptr [rbp-54h]
 * 0000000140413279: xor     r10, r10
 * 000000014041327C: cmp     word ptr [rbp+80h], 0
 * 0000000140413284: jz      short loc_1404132C7
 * 0000000140413286: mov     [rbp-50h], rax
 * 000000014041328A: call    KiRestoreDebugRegisterState
 * 000000014041328F: mov     rax, gs:188h
 * 0000000140413298: mov     rax, [rax+0B8h]
 * 000000014041329F: mov     rax, [rax+3D8h]
 * 00000001404132A6: or      rax, rax
 * 00000001404132A9: jz      short loc_1404132C3
 * 00000001404132AB: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001404132B3: jnz     short loc_1404132C3
 * 00000001404132B5: mov     r10, [rbp+0E8h]
 * 00000001404132BC: mov     [rbp+0E8h], rax
 * 00000001404132C3: mov     rax, [rbp-50h]
 * 00000001404132C7: mov     [rbp-50h], rax
 * 00000001404132CB: mov     byte ptr gs:856h, 0
 * 00000001404132D4: movzx   eax, word ptr gs:86Ah
 * 00000001404132DD: cmp     gs:864h, ax
 * 00000001404132E6: jz      short loc_1404132FA
 * 00000001404132E8: mov     gs:864h, ax
 * 00000001404132F1: mov     ecx, 48h ; 'H'
 * 00000001404132F6: xor     edx, edx
 * 00000001404132F8: wrmsr
 * 00000001404132FA: btr     word ptr gs:860h, 2
 * 0000000140413305: jnb     short loc_140413315
 * 0000000140413307: mov     eax, 1
 * 000000014041330C: xor     edx, edx
 * 000000014041330E: mov     ecx, 49h ; 'I'
 * 0000000140413313: wrmsr
 * 0000000140413315: btr     word ptr gs:860h, 5
 * 0000000140413320: jnb     loc_14041344B
 * 0000000140413326: call    loc_140413439
 * 000000014041332B: add     rsp, 8
 * 000000014041332F: call    loc_140413442
 * 0000000140413334: add     rsp, 8
 * 0000000140413338: call    loc_14041332B
 * 000000014041333D: add     rsp, 8
 * 0000000140413341: call    loc_140413334
 * 0000000140413346: add     rsp, 8
 * 000000014041334A: call    loc_14041333D
 * 000000014041334F: add     rsp, 8
 * 0000000140413353: call    loc_140413346
 * 0000000140413358: add     rsp, 8
 * 000000014041335C: call    loc_14041334F
 * 0000000140413361: add     rsp, 8
 * 0000000140413365: call    loc_140413358
 * 000000014041336A: add     rsp, 8
 * 000000014041336E: call    loc_140413361
 * 0000000140413373: add     rsp, 8
 * 0000000140413377: call    loc_14041336A
 * 000000014041337C: add     rsp, 8
 * 0000000140413380: call    loc_140413373
 * 0000000140413385: add     rsp, 8
 * 0000000140413389: call    loc_14041337C
 * 000000014041338E: add     rsp, 8
 * 0000000140413392: call    loc_140413385
 * 0000000140413397: add     rsp, 8
 * 000000014041339B: call    loc_14041338E
 * 00000001404133A0: add     rsp, 8
 * 00000001404133A4: call    loc_140413397
 * 00000001404133A9: add     rsp, 8
 * 00000001404133AD: call    loc_1404133A0
 * 00000001404133B2: add     rsp, 8
 * 00000001404133B6: call    loc_1404133A9
 * 00000001404133BB: add     rsp, 8
 * 00000001404133BF: call    loc_1404133B2
 * 00000001404133C4: add     rsp, 8
 * 00000001404133C8: call    loc_1404133BB
 * 00000001404133CD: add     rsp, 8
 * 00000001404133D1: call    loc_1404133C4
 * 00000001404133D6: add     rsp, 8
 * 00000001404133DA: call    loc_1404133CD
 * 00000001404133DF: add     rsp, 8
 * 00000001404133E3: call    loc_1404133D6
 * 00000001404133E8: add     rsp, 8
 * 00000001404133EC: call    loc_1404133DF
 * 00000001404133F1: add     rsp, 8
 * 00000001404133F5: call    loc_1404133E8
 * 00000001404133FA: add     rsp, 8
 * 00000001404133FE: call    loc_1404133F1
 * 0000000140413403: add     rsp, 8
 * 0000000140413407: call    loc_1404133FA
 * 000000014041340C: add     rsp, 8
 * 0000000140413410: call    loc_140413403
 * 0000000140413415: add     rsp, 8
 * 0000000140413419: call    loc_14041340C
 * 000000014041341E: add     rsp, 8
 * 0000000140413422: call    loc_140413415
 * 0000000140413427: add     rsp, 8
 * 000000014041342B: call    loc_14041341E
 * 0000000140413430: add     rsp, 8
 * 0000000140413434: call    loc_140413427
 * 0000000140413439: add     rsp, 8
 * 000000014041343D: call    loc_140413430
 * 0000000140413442: add     rsp, 8
 * 0000000140413446: mov     eax, 0DADAh
 * 000000014041344B: test    word ptr gs:860h, 80h
 * 0000000140413456: jz      short loc_140413464
 * 0000000140413458: xor     eax, eax
 * 000000014041345A: xor     edx, edx
 * 000000014041345C: mov     ecx, 1
 * 0000000140413461: div     rcx
 * 0000000140413464: mov     rax, [rbp-50h]
 * 0000000140413468: mov     r8, [rbp+100h]
 * 000000014041346F: mov     r9, [rbp+0D8h]
 * 0000000140413476: xor     edx, edx
 * 0000000140413478: pxor    xmm0, xmm0
 * 000000014041347C: pxor    xmm1, xmm1
 * 0000000140413480: pxor    xmm2, xmm2
 * 0000000140413484: pxor    xmm3, xmm3
 * 0000000140413488: pxor    xmm4, xmm4
 * 000000014041348C: pxor    xmm5, xmm5
 * 0000000140413490: mov     rcx, [rbp+0E8h]
 * 0000000140413497: mov     r11, [rbp+0F8h]
 * 000000014041349E: test    cs:KiKvaShadow, 1
 * 00000001404134A5: jnz     KiKernelSysretExit
 * 00000001404134AB: mov     rbp, r9
 * 00000001404134AE: mov     rsp, r8
 * 00000001404134B1: test    word ptr gs:860h, 100h
 * 00000001404134BC: jz      short loc_1404134C7
 * 00000001404134BE: verw    word ptr gs:902Ah
 * 00000001404134C7: swapgs
 * 00000001404134CA: sysret
 * 00000001404134CD: retn
 */
