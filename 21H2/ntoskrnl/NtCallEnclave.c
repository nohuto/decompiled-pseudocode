/*
 * XREFs of NtCallEnclave @ 0x140408860
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     NtCallEnclave @ 0x140408860 (NtCallEnclave.c)
 *     KiUmsExit @ 0x140413B00 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 *     PsCallEnclave @ 0x14090D330 (PsCallEnclave.c)
 */

/*
 * Hex-Rays decompilation failed for NtCallEnclave @ 0x140408860
 * Reason: Hex-Rays returned no pseudocode for 0x140408860
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140408860: sub     rsp, 28h
 * 0000000140408864: xor     eax, eax
 * 0000000140408866: xorps   xmm0, xmm0
 * 0000000140408869: mov     [rbp-48h], eax
 * 000000014040886C: mov     [rbp-40h], eax
 * 000000014040886F: mov     [rbp-38h], eax
 * 0000000140408872: mov     [rbp-30h], eax
 * 0000000140408875: mov     [rbp-28h], eax
 * 0000000140408878: mov     [rbp-20h], eax
 * 000000014040887B: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014040887F: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140408883: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140408887: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014040888B: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014040888F: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140408893: call    PsCallEnclave
 * 0000000140408898: mov     [rbp-50h], rax
 * 000000014040889C: mov     rbx, [rbp+0C0h]
 * 00000001404088A3: mov     rdi, [rbp+0C8h]
 * 00000001404088AA: mov     rsi, [rbp+0D0h]
 * 00000001404088B1: cli
 * 00000001404088B2: test    byte ptr [rbp+0F0h], 1
 * 00000001404088B9: jz      loc_140408B6C
 * 00000001404088BF: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404088C6: jz      short loc_1404088CB
 * 00000001404088C8: stac
 * 00000001404088CB: mov     rcx, gs:188h
 * 00000001404088D4: test    byte ptr [rcx+0C2h], 3
 * 00000001404088DB: jz      short loc_1404088F8
 * 00000001404088DD: mov     ecx, 1
 * 00000001404088E2: mov     cr8, rcx
 * 00000001404088E6: sti
 * 00000001404088E7: call    KiInitiateUserApc
 * 00000001404088EC: cli
 * 00000001404088ED: mov     ecx, 0
 * 00000001404088F2: mov     cr8, rcx
 * 00000001404088F6: jmp     short loc_1404088CB
 * 00000001404088F8: test    byte ptr gs:86Ch, 2
 * 0000000140408901: jz      short loc_14040890A
 * 0000000140408903: xor     ecx, ecx
 * 0000000140408905: call    KiUpdateStibpPairing
 * 000000014040890A: mov     rcx, gs:188h
 * 0000000140408913: test    dword ptr [rcx], 8000000h
 * 0000000140408919: jz      short loc_140408920
 * 000000014040891B: call    KiRestoreSetContextState
 * 0000000140408920: mov     rcx, gs:188h
 * 0000000140408929: test    dword ptr [rcx], 40010000h
 * 000000014040892F: jz      short loc_140408956
 * 0000000140408931: test    byte ptr [rcx+2], 1
 * 0000000140408935: jz      short loc_140408945
 * 0000000140408937: call    KiCopyCounters
 * 000000014040893C: mov     rcx, gs:188h
 * 0000000140408945: test    byte ptr [rcx+3], 40h
 * 0000000140408949: jz      short loc_140408956
 * 000000014040894B: lea     rsp, [rbp-80h]
 * 000000014040894F: mov     cl, 1
 * 0000000140408951: call    KiUmsExit
 * 0000000140408956: ldmxcsr dword ptr [rbp-54h]
 * 000000014040895A: cmp     word ptr [rbp+80h], 0
 * 0000000140408962: jz      short loc_140408969
 * 0000000140408964: call    KiRestoreDebugRegisterState
 * 0000000140408969: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014040896D: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140408971: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140408975: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140408979: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014040897D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140408981: mov     r11, [rbp-20h]
 * 0000000140408985: mov     r10, [rbp-28h]
 * 0000000140408989: mov     r9, [rbp-30h]
 * 000000014040898D: mov     r8, [rbp-38h]
 * 0000000140408991: mov     byte ptr gs:856h, 0
 * 000000014040899A: movzx   eax, word ptr gs:86Ah
 * 00000001404089A3: cmp     gs:864h, ax
 * 00000001404089AC: jz      short loc_1404089C0
 * 00000001404089AE: mov     gs:864h, ax
 * 00000001404089B7: mov     ecx, 48h ; 'H'
 * 00000001404089BC: xor     edx, edx
 * 00000001404089BE: wrmsr
 * 00000001404089C0: btr     word ptr gs:860h, 2
 * 00000001404089CB: jnb     short loc_1404089DB
 * 00000001404089CD: mov     eax, 1
 * 00000001404089D2: xor     edx, edx
 * 00000001404089D4: mov     ecx, 49h ; 'I'
 * 00000001404089D9: wrmsr
 * 00000001404089DB: btr     word ptr gs:860h, 5
 * 00000001404089E6: jnb     loc_140408B11
 * 00000001404089EC: call    loc_140408AFF
 * 00000001404089F1: add     rsp, 8
 * 00000001404089F5: call    loc_140408B08
 * 00000001404089FA: add     rsp, 8
 * 00000001404089FE: call    loc_1404089F1
 * 0000000140408A03: add     rsp, 8
 * 0000000140408A07: call    loc_1404089FA
 * 0000000140408A0C: add     rsp, 8
 * 0000000140408A10: call    loc_140408A03
 * 0000000140408A15: add     rsp, 8
 * 0000000140408A19: call    loc_140408A0C
 * 0000000140408A1E: add     rsp, 8
 * 0000000140408A22: call    loc_140408A15
 * 0000000140408A27: add     rsp, 8
 * 0000000140408A2B: call    loc_140408A1E
 * 0000000140408A30: add     rsp, 8
 * 0000000140408A34: call    loc_140408A27
 * 0000000140408A39: add     rsp, 8
 * 0000000140408A3D: call    loc_140408A30
 * 0000000140408A42: add     rsp, 8
 * 0000000140408A46: call    loc_140408A39
 * 0000000140408A4B: add     rsp, 8
 * 0000000140408A4F: call    loc_140408A42
 * 0000000140408A54: add     rsp, 8
 * 0000000140408A58: call    loc_140408A4B
 * 0000000140408A5D: add     rsp, 8
 * 0000000140408A61: call    loc_140408A54
 * 0000000140408A66: add     rsp, 8
 * 0000000140408A6A: call    loc_140408A5D
 * 0000000140408A6F: add     rsp, 8
 * 0000000140408A73: call    loc_140408A66
 * 0000000140408A78: add     rsp, 8
 * 0000000140408A7C: call    loc_140408A6F
 * 0000000140408A81: add     rsp, 8
 * 0000000140408A85: call    loc_140408A78
 * 0000000140408A8A: add     rsp, 8
 * 0000000140408A8E: call    loc_140408A81
 * 0000000140408A93: add     rsp, 8
 * 0000000140408A97: call    loc_140408A8A
 * 0000000140408A9C: add     rsp, 8
 * 0000000140408AA0: call    loc_140408A93
 * 0000000140408AA5: add     rsp, 8
 * 0000000140408AA9: call    loc_140408A9C
 * 0000000140408AAE: add     rsp, 8
 * 0000000140408AB2: call    loc_140408AA5
 * 0000000140408AB7: add     rsp, 8
 * 0000000140408ABB: call    loc_140408AAE
 * 0000000140408AC0: add     rsp, 8
 * 0000000140408AC4: call    loc_140408AB7
 * 0000000140408AC9: add     rsp, 8
 * 0000000140408ACD: call    loc_140408AC0
 * 0000000140408AD2: add     rsp, 8
 * 0000000140408AD6: call    loc_140408AC9
 * 0000000140408ADB: add     rsp, 8
 * 0000000140408ADF: call    loc_140408AD2
 * 0000000140408AE4: add     rsp, 8
 * 0000000140408AE8: call    loc_140408ADB
 * 0000000140408AED: add     rsp, 8
 * 0000000140408AF1: call    loc_140408AE4
 * 0000000140408AF6: add     rsp, 8
 * 0000000140408AFA: call    loc_140408AED
 * 0000000140408AFF: add     rsp, 8
 * 0000000140408B03: call    loc_140408AF6
 * 0000000140408B08: add     rsp, 8
 * 0000000140408B0C: mov     eax, 0DADAh
 * 0000000140408B11: test    word ptr gs:860h, 80h
 * 0000000140408B1C: jz      short loc_140408B2A
 * 0000000140408B1E: xor     eax, eax
 * 0000000140408B20: xor     edx, edx
 * 0000000140408B22: mov     ecx, 1
 * 0000000140408B27: div     rcx
 * 0000000140408B2A: mov     rdx, [rbp-40h]
 * 0000000140408B2E: mov     rcx, [rbp-48h]
 * 0000000140408B32: mov     rax, [rbp-50h]
 * 0000000140408B36: mov     rsp, rbp
 * 0000000140408B39: mov     rbp, [rbp+0D8h]
 * 0000000140408B40: add     rsp, 0E8h
 * 0000000140408B47: test    cs:KiKvaShadow, 1
 * 0000000140408B4E: jz      short loc_140408B55
 * 0000000140408B50: jmp     KiKernelExit
 * 0000000140408B55: test    word ptr gs:860h, 100h
 * 0000000140408B60: jz      short loc_140408B67
 * 0000000140408B62: verw    [rsp-188h+arg_1A0]
 * 0000000140408B67: swapgs
 * 0000000140408B6A: iretq
 * 0000000140408B6C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140408B70: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140408B74: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140408B78: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140408B7C: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140408B80: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140408B84: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140408B88: mov     r11, [rbp-20h]
 * 0000000140408B8C: mov     r10, [rbp-28h]
 * 0000000140408B90: mov     r9, [rbp-30h]
 * 0000000140408B94: mov     r8, [rbp-38h]
 * 0000000140408B98: mov     rdx, [rbp-40h]
 * 0000000140408B9C: mov     rcx, [rbp-48h]
 * 0000000140408BA0: mov     rax, [rbp-50h]
 * 0000000140408BA4: mov     rsp, rbp
 * 0000000140408BA7: mov     rbp, [rbp+0D8h]
 * 0000000140408BAE: add     rsp, 0E8h
 * 0000000140408BB5: iretq
 */
