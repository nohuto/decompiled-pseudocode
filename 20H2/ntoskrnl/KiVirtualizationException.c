/*
 * XREFs of KiVirtualizationException @ 0x14040D300
 * Callers:
 *     KiVirtualizationExceptionShadow @ 0x140A17B40 (KiVirtualizationExceptionShadow.c)
 * Callees:
 *     KzRaiseIrql @ 0x14021E5B0 (KzRaiseIrql.c)
 *     KzLowerIrql @ 0x14021E750 (KzLowerIrql.c)
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiVirtualizationException @ 0x14040D300 (KiVirtualizationException.c)
 *     KiBugCheckDispatch @ 0x14040FCC0 (KiBugCheckDispatch.c)
 *     KiUmsExit @ 0x140410EC0 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 *     KiEpfHandleNotification @ 0x140522750 (KiEpfHandleNotification.c)
 */

/*
 * Hex-Rays decompilation failed for KiVirtualizationException @ 0x14040D300
 * Reason: Hex-Rays returned no pseudocode for 0x14040D300
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040D300: sub     rsp, 8
 * 000000014040D304: push    rbp
 * 000000014040D305: sub     rsp, 158h
 * 000000014040D30C: lea     rbp, [rsp+80h]
 * 000000014040D314: mov     [rbp+0E8h+var_13D], 1
 * 000000014040D318: mov     [rbp+0E8h+var_138], rax
 * 000000014040D31C: mov     [rbp+0E8h+var_130], rcx
 * 000000014040D320: mov     [rbp+0E8h+var_128], rdx
 * 000000014040D324: mov     [rbp+0E8h+var_120], r8
 * 000000014040D328: mov     [rbp+0E8h+var_118], r9
 * 000000014040D32C: mov     [rbp+0E8h+var_110], r10
 * 000000014040D330: mov     [rbp+0E8h+var_108], r11
 * 000000014040D334: test    [rbp+0E8h+arg_0], 1
 * 000000014040D33B: jnz     short loc_14040D36A
 * 000000014040D33D: lfence
 * 000000014040D340: test    byte ptr gs:278h, 1
 * 000000014040D349: jnz     short loc_14040D353
 * 000000014040D34B: lfence
 * 000000014040D34E: jmp     loc_14040D560
 * 000000014040D353: movzx   eax, byte ptr gs:27Ah
 * 000000014040D35C: mov     ecx, 48h ; 'H'
 * 000000014040D361: xor     edx, edx
 * 000000014040D363: wrmsr
 * 000000014040D365: jmp     loc_14040D560
 * 000000014040D36A: test    cs:KiKvaShadow, 1
 * 000000014040D371: jnz     short loc_14040D376
 * 000000014040D373: swapgs
 * 000000014040D376: lfence
 * 000000014040D379: mov     r10, gs:188h
 * 000000014040D382: mov     rcx, gs:188h
 * 000000014040D38B: mov     rcx, [rcx+220h]
 * 000000014040D392: mov     rcx, [rcx+9E0h]
 * 000000014040D399: mov     gs:270h, rcx
 * 000000014040D3A2: mov     cl, gs:850h
 * 000000014040D3AA: mov     gs:851h, cl
 * 000000014040D3B2: mov     cl, gs:278h
 * 000000014040D3BA: mov     gs:852h, cl
 * 000000014040D3C2: movzx   eax, byte ptr gs:27Bh
 * 000000014040D3CB: cmp     gs:27Ah, al
 * 000000014040D3D3: jz      short loc_14040D3E6
 * 000000014040D3D5: mov     gs:27Ah, al
 * 000000014040D3DD: mov     ecx, 48h ; 'H'
 * 000000014040D3E2: xor     edx, edx
 * 000000014040D3E4: wrmsr
 * 000000014040D3E6: movzx   edx, byte ptr gs:278h
 * 000000014040D3EF: test    edx, 8
 * 000000014040D3F5: jz      short loc_14040D40E
 * 000000014040D3F7: mov     eax, 1
 * 000000014040D3FC: xor     edx, edx
 * 000000014040D3FE: mov     ecx, 49h ; 'I'
 * 000000014040D403: wrmsr
 * 000000014040D405: movzx   edx, byte ptr gs:278h
 * 000000014040D40E: test    edx, 2
 * 000000014040D414: jz      loc_14040D53F
 * 000000014040D41A: call    loc_14040D52D
 * 000000014040D41F: add     rsp, 8
 * 000000014040D423: call    loc_14040D536
 * 000000014040D428: add     rsp, 8
 * 000000014040D42C: call    loc_14040D41F
 * 000000014040D431: add     rsp, 8
 * 000000014040D435: call    loc_14040D428
 * 000000014040D43A: add     rsp, 8
 * 000000014040D43E: call    loc_14040D431
 * 000000014040D443: add     rsp, 8
 * 000000014040D447: call    loc_14040D43A
 * 000000014040D44C: add     rsp, 8
 * 000000014040D450: call    loc_14040D443
 * 000000014040D455: add     rsp, 8
 * 000000014040D459: call    loc_14040D44C
 * 000000014040D45E: add     rsp, 8
 * 000000014040D462: call    loc_14040D455
 * 000000014040D467: add     rsp, 8
 * 000000014040D46B: call    loc_14040D45E
 * 000000014040D470: add     rsp, 8
 * 000000014040D474: call    loc_14040D467
 * 000000014040D479: add     rsp, 8
 * 000000014040D47D: call    loc_14040D470
 * 000000014040D482: add     rsp, 8
 * 000000014040D486: call    loc_14040D479
 * 000000014040D48B: add     rsp, 8
 * 000000014040D48F: call    loc_14040D482
 * 000000014040D494: add     rsp, 8
 * 000000014040D498: call    loc_14040D48B
 * 000000014040D49D: add     rsp, 8
 * 000000014040D4A1: call    loc_14040D494
 * 000000014040D4A6: add     rsp, 8
 * 000000014040D4AA: call    loc_14040D49D
 * 000000014040D4AF: add     rsp, 8
 * 000000014040D4B3: call    loc_14040D4A6
 * 000000014040D4B8: add     rsp, 8
 * 000000014040D4BC: call    loc_14040D4AF
 * 000000014040D4C1: add     rsp, 8
 * 000000014040D4C5: call    loc_14040D4B8
 * 000000014040D4CA: add     rsp, 8
 * 000000014040D4CE: call    loc_14040D4C1
 * 000000014040D4D3: add     rsp, 8
 * 000000014040D4D7: call    loc_14040D4CA
 * 000000014040D4DC: add     rsp, 8
 * 000000014040D4E0: call    loc_14040D4D3
 * 000000014040D4E5: add     rsp, 8
 * 000000014040D4E9: call    loc_14040D4DC
 * 000000014040D4EE: add     rsp, 8
 * 000000014040D4F2: call    loc_14040D4E5
 * 000000014040D4F7: add     rsp, 8
 * 000000014040D4FB: call    loc_14040D4EE
 * 000000014040D500: add     rsp, 8
 * 000000014040D504: call    loc_14040D4F7
 * 000000014040D509: add     rsp, 8
 * 000000014040D50D: call    loc_14040D500
 * 000000014040D512: add     rsp, 8
 * 000000014040D516: call    loc_14040D509
 * 000000014040D51B: add     rsp, 8
 * 000000014040D51F: call    loc_14040D512
 * 000000014040D524: add     rsp, 8
 * 000000014040D528: call    loc_14040D51B
 * 000000014040D52D: add     rsp, 8
 * 000000014040D531: call    loc_14040D524
 * 000000014040D536: add     rsp, 8
 * 000000014040D53A: mov     eax, 0DADAh
 * 000000014040D53F: lfence
 * 000000014040D542: mov     byte ptr gs:853h, 0
 * 000000014040D54B: test    byte ptr [r10+3], 3
 * 000000014040D550: mov     [rbp+0E8h+var_68], 0
 * 000000014040D559: jz      short loc_14040D560
 * 000000014040D55B: call    KiSaveDebugRegisterState
 * 000000014040D560: cld
 * 000000014040D561: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040D565: ldmxcsr dword ptr gs:180h
 * 000000014040D56E: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040D572: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040D576: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040D57A: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040D57E: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040D582: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040D586: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040D58D: jz      short loc_14040D59B
 * 000000014040D58F: test    [rbp+0E8h+arg_0], 1
 * 000000014040D596: jz      short loc_14040D59B
 * 000000014040D598: stac
 * 000000014040D59B: mov     r9, gs:8508h
 * 000000014040D5A4: test    r9, r9
 * 000000014040D5A7: jz      loc_14040D8DD
 * 000000014040D5AD: cmp     dword ptr [r9+44h], 1
 * 000000014040D5B2: jnz     loc_14040D8DD
 * 000000014040D5B8: test    [rbp+0E8h+arg_8], 200h
 * 000000014040D5C2: jz      loc_14040D8DD
 * 000000014040D5C8: mov     rax, cr8
 * 000000014040D5CC: mov     dword ptr [rbp+0E8h+NewIrql], eax
 * 000000014040D5CF: cmp     al, 2
 * 000000014040D5D1: jge     loc_14040D8DD
 * 000000014040D5D7: mov     ecx, 2; NewIrql
 * 000000014040D5DC: call    KzRaiseIrql
 * 000000014040D5E1: sti
 * 000000014040D5E2: mov     r9, gs:8508h
 * 000000014040D5EB: mov     rcx, [r9+48h]
 * 000000014040D5EF: mov     dword ptr [r9+44h], 0
 * 000000014040D5F7: call    KiEpfHandleNotification
 * 000000014040D5FC: cli
 * 000000014040D5FD: mov     ecx, dword ptr [rbp+0E8h+NewIrql]; NewIrql
 * 000000014040D600: call    KzLowerIrql
 * 000000014040D605: test    [rbp+0E8h+arg_0], 1
 * 000000014040D60C: jz      loc_14040D892
 * 000000014040D612: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040D619: jz      short loc_14040D61E
 * 000000014040D61B: stac
 * 000000014040D61E: mov     rcx, gs:188h
 * 000000014040D627: test    byte ptr [rcx+0C2h], 3
 * 000000014040D62E: jz      short loc_14040D64B
 * 000000014040D630: mov     ecx, 1
 * 000000014040D635: mov     cr8, rcx
 * 000000014040D639: sti
 * 000000014040D63A: call    KiInitiateUserApc
 * 000000014040D63F: cli
 * 000000014040D640: mov     ecx, 0
 * 000000014040D645: mov     cr8, rcx
 * 000000014040D649: jmp     short loc_14040D61E
 * 000000014040D64B: test    byte ptr gs:27Eh, 2
 * 000000014040D654: jz      short loc_14040D65D
 * 000000014040D656: xor     ecx, ecx
 * 000000014040D658: call    KiUpdateStibpPairing
 * 000000014040D65D: mov     rcx, gs:188h
 * 000000014040D666: test    dword ptr [rcx], 8000000h
 * 000000014040D66C: jz      short loc_14040D673
 * 000000014040D66E: call    KiRestoreSetContextState
 * 000000014040D673: mov     rcx, gs:188h
 * 000000014040D67C: test    dword ptr [rcx], 40010000h
 * 000000014040D682: jz      short loc_14040D6A9
 * 000000014040D684: test    byte ptr [rcx+2], 1
 * 000000014040D688: jz      short loc_14040D698
 * 000000014040D68A: call    KiCopyCounters
 * 000000014040D68F: mov     rcx, gs:188h
 * 000000014040D698: test    byte ptr [rcx+3], 40h
 * 000000014040D69C: jz      short loc_14040D6A9
 * 000000014040D69E: lea     rsp, [rbp-80h]
 * 000000014040D6A2: mov     cl, 1
 * 000000014040D6A4: call    KiUmsExit
 * 000000014040D6A9: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040D6AD: cmp     [rbp+0E8h+var_68], 0
 * 000000014040D6B5: jz      short loc_14040D6BC
 * 000000014040D6B7: call    KiRestoreDebugRegisterState
 * 000000014040D6BC: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040D6C0: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040D6C4: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040D6C8: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040D6CC: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040D6D0: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040D6D4: mov     r11, [rbp+0E8h+var_108]
 * 000000014040D6D8: mov     r10, [rbp+0E8h+var_110]
 * 000000014040D6DC: mov     r9, [rbp+0E8h+var_118]
 * 000000014040D6E0: mov     r8, [rbp+0E8h+var_120]
 * 000000014040D6E4: mov     byte ptr gs:853h, 0
 * 000000014040D6ED: movzx   eax, byte ptr gs:27Dh
 * 000000014040D6F6: cmp     gs:27Ah, al
 * 000000014040D6FE: jz      short loc_14040D711
 * 000000014040D700: mov     gs:27Ah, al
 * 000000014040D708: mov     ecx, 48h ; 'H'
 * 000000014040D70D: xor     edx, edx
 * 000000014040D70F: wrmsr
 * 000000014040D711: btr     word ptr gs:278h, 2
 * 000000014040D71C: jnb     short loc_14040D72C
 * 000000014040D71E: mov     eax, 1
 * 000000014040D723: xor     edx, edx
 * 000000014040D725: mov     ecx, 49h ; 'I'
 * 000000014040D72A: wrmsr
 * 000000014040D72C: btr     word ptr gs:278h, 5
 * 000000014040D737: jnb     loc_14040D862
 * 000000014040D73D: call    loc_14040D850
 * 000000014040D742: add     rsp, 8
 * 000000014040D746: call    loc_14040D859
 * 000000014040D74B: add     rsp, 8
 * 000000014040D74F: call    loc_14040D742
 * 000000014040D754: add     rsp, 8
 * 000000014040D758: call    loc_14040D74B
 * 000000014040D75D: add     rsp, 8
 * 000000014040D761: call    loc_14040D754
 * 000000014040D766: add     rsp, 8
 * 000000014040D76A: call    loc_14040D75D
 * 000000014040D76F: add     rsp, 8
 * 000000014040D773: call    loc_14040D766
 * 000000014040D778: add     rsp, 8
 * 000000014040D77C: call    loc_14040D76F
 * 000000014040D781: add     rsp, 8
 * 000000014040D785: call    loc_14040D778
 * 000000014040D78A: add     rsp, 8
 * 000000014040D78E: call    loc_14040D781
 * 000000014040D793: add     rsp, 8
 * 000000014040D797: call    loc_14040D78A
 * 000000014040D79C: add     rsp, 8
 * 000000014040D7A0: call    loc_14040D793
 * 000000014040D7A5: add     rsp, 8
 * 000000014040D7A9: call    loc_14040D79C
 * 000000014040D7AE: add     rsp, 8
 * 000000014040D7B2: call    loc_14040D7A5
 * 000000014040D7B7: add     rsp, 8
 * 000000014040D7BB: call    loc_14040D7AE
 * 000000014040D7C0: add     rsp, 8
 * 000000014040D7C4: call    loc_14040D7B7
 * 000000014040D7C9: add     rsp, 8
 * 000000014040D7CD: call    loc_14040D7C0
 * 000000014040D7D2: add     rsp, 8
 * 000000014040D7D6: call    loc_14040D7C9
 * 000000014040D7DB: add     rsp, 8
 * 000000014040D7DF: call    loc_14040D7D2
 * 000000014040D7E4: add     rsp, 8
 * 000000014040D7E8: call    loc_14040D7DB
 * 000000014040D7ED: add     rsp, 8
 * 000000014040D7F1: call    loc_14040D7E4
 * 000000014040D7F6: add     rsp, 8
 * 000000014040D7FA: call    loc_14040D7ED
 * 000000014040D7FF: add     rsp, 8
 * 000000014040D803: call    loc_14040D7F6
 * 000000014040D808: add     rsp, 8
 * 000000014040D80C: call    loc_14040D7FF
 * 000000014040D811: add     rsp, 8
 * 000000014040D815: call    loc_14040D808
 * 000000014040D81A: add     rsp, 8
 * 000000014040D81E: call    loc_14040D811
 * 000000014040D823: add     rsp, 8
 * 000000014040D827: call    loc_14040D81A
 * 000000014040D82C: add     rsp, 8
 * 000000014040D830: call    loc_14040D823
 * 000000014040D835: add     rsp, 8
 * 000000014040D839: call    loc_14040D82C
 * 000000014040D83E: add     rsp, 8
 * 000000014040D842: call    loc_14040D835
 * 000000014040D847: add     rsp, 8
 * 000000014040D84B: call    loc_14040D83E
 * 000000014040D850: add     rsp, 8
 * 000000014040D854: call    loc_14040D847
 * 000000014040D859: add     rsp, 8
 * 000000014040D85D: mov     eax, 0DADAh
 * 000000014040D862: mov     rdx, [rbp+0E8h+var_128]
 * 000000014040D866: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040D86A: mov     rax, [rbp+0E8h+var_138]
 * 000000014040D86E: mov     rsp, rbp
 * 000000014040D871: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040D878: add     rsp, 0E8h
 * 000000014040D87F: test    cs:KiKvaShadow, 1
 * 000000014040D886: jz      short loc_14040D88D
 * 000000014040D888: jmp     KiKernelExit
 * 000000014040D88D: swapgs
 * 000000014040D890: iretq
 * 000000014040D892: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040D896: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040D89A: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040D89E: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040D8A2: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040D8A6: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040D8AA: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040D8AE: mov     r11, [rbp+0E8h+var_108]
 * 000000014040D8B2: mov     r10, [rbp+0E8h+var_110]
 * 000000014040D8B6: mov     r9, [rbp+0E8h+var_118]
 * 000000014040D8BA: mov     r8, [rbp+0E8h+var_120]
 * 000000014040D8BE: mov     rdx, [rbp+0E8h+var_128]
 * 000000014040D8C2: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040D8C6: mov     rax, [rbp+0E8h+var_138]
 * 000000014040D8CA: mov     rsp, rbp
 * 000000014040D8CD: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040D8D4: add     rsp, 0E8h
 * 000000014040D8DB: iretq
 * 000000014040D8DD: mov     r10, [rbp+0E8h]
 * 000000014040D8E4: mov     r9, gs:8508h
 * 000000014040D8ED: movzx   r8, [rbp+0E8h+NewIrql]
 * 000000014040D8F2: mov     ecx, 7Fh
 * 000000014040D8F7: mov     edx, 20h ; ' '
 * 000000014040D8FC: call    KiBugCheckDispatch
 */
