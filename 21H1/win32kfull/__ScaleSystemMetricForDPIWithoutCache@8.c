/*
 * XREFs of __ScaleSystemMetricForDPIWithoutCache@8 @ 0x15539C
 * Callers:
 *     __AdjustWindowRectExForDpi@20 @ 0x313D6 (__AdjustWindowRectExForDpi@20.c)
 *     _GetWindowBordersForDpiWithCompatFlags2@24 @ 0x31540 (_GetWindowBordersForDpiWithCompatFlags2@24.c)
 *     ?xxxCommonGetTitleBarInfo@@YGXPAUtagWND@@PAUtagTITLEBARINFO@@@Z @ 0x31656 (-xxxCommonGetTitleBarInfo@@YGXPAUtagWND@@PAUtagTITLEBARINFO@@@Z.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YGHIK@Z @ 0x91676 (-GetResizeBorderWidthForDpiWithAppCompat2@@YGHIK@Z.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YGHHIK@Z @ 0x916D2 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YGHHIK@Z.c)
 *     _FindNCHit@8 @ 0xA9F04 (_FindNCHit@8.c)
 *     _EngTransparentBlt@32 @ 0xCAC46 (_EngTransparentBlt@32.c)
 *     __EnsureDpiDepSysMetCacheForPlateau@4 @ 0x15534E (__EnsureDpiDepSysMetCacheForPlateau@4.c)
 *     __ScaleSystemMetricForDPIWithoutCache@8 @ 0x15539C (__ScaleSystemMetricForDPIWithoutCache@8.c)
 * Callees:
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _GetDPIMETRICSForDpi@4 @ 0x91A1E (_GetDPIMETRICSForDpi@4.c)
 *     _GetDPIServerInfoForDpi@4 @ 0x91B76 (_GetDPIServerInfoForDpi@4.c)
 *     _GetCursorSizeFromIndex@4 @ 0xA2940 (_GetCursorSizeFromIndex@4.c)
 *     _GetCursorSizesIndexFromDpi@4 @ 0xA296A (_GetCursorSizesIndexFromDpi@4.c)
 *     __ScaleSystemMetricForDPIWithoutCache@8 @ 0x15539C (__ScaleSystemMetricForDPIWithoutCache@8.c)
 */

/*
 * Hex-Rays decompilation failed for __ScaleSystemMetricForDPIWithoutCache@8 @ 0x15539C
 * Reason: Hex-Rays returned no pseudocode for 0x15539C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000015539C: mov     edi, edi
 * 000000000015539E: push    ebp
 * 000000000015539F: mov     ebp, esp
 * 00000000001553A1: and     esp, 0FFFFFFF8h
 * 00000000001553A4: push    ecx
 * 00000000001553A5: push    ebx
 * 00000000001553A6: push    esi
 * 00000000001553A7: mov     esi, [ebp+arg_0]
 * 00000000001553AA: push    edi
 * 00000000001553AB: cmp     esi, 1Dh
 * 00000000001553AE: ja      loc_155631
 * 00000000001553B4: mov     ebx, [ebp+b]
 * 00000000001553B7: test    ebx, ebx
 * 00000000001553B9: jle     loc_155631
 * 00000000001553BF: cmp     esi, 10h
 * 00000000001553C2: jg      loc_15546D
 * 00000000001553C8: jz      short loc_155432
 * 00000000001553CA: cmp     esi, 2
 * 00000000001553CD: jz      short loc_15542D
 * 00000000001553CF: cmp     esi, 6
 * 00000000001553D2: jle     def_1554CF; jumptable 001554CF default case
 * 00000000001553D8: cmp     esi, 8
 * 00000000001553DB: jle     short loc_15541A
 * 00000000001553DD: cmp     esi, 9
 * 00000000001553E0: jz      short loc_15540A
 * 00000000001553E2: cmp     esi, 0Eh
 * 00000000001553E5: jz      short loc_1553F0
 * 00000000001553E7: cmp     esi, 0Fh
 * 00000000001553EA: jnz     def_1554CF; jumptable 001554CF default case
 * 00000000001553F0: push    60h ; '`'; c
 * 00000000001553F2: push    ebx; b
 * 00000000001553F3: call    ds:__imp__Get96DpiServerInfo@0; Get96DpiServerInfo()
 * 00000000001553F9: push    dword ptr [eax+4]; a
 * 00000000001553FC: call    ds:__imp__EngMulDiv@12; EngMulDiv(x,x,x)
 * 0000000000155402: lea     edi, [eax+3]
 * 0000000000155405: jmp     loc_15562D; jumptable 001554CF cases 27,28
 * 000000000015540A: push    ebx; b
 * 000000000015540B: push    1Ah; int
 * 000000000015540D: call    __ScaleSystemMetricForDPIWithoutCache@8; _ScaleSystemMetricForDPIWithoutCache(x,x)
 * 0000000000155412: lea     edi, [eax+1]
 * 0000000000155415: jmp     loc_15562D; jumptable 001554CF cases 27,28
 * 000000000015541A: mov     ecx, ebx
 * 000000000015541C: call    _GetCursorSizesIndexFromDpi@4; GetCursorSizesIndexFromDpi(x)
 * 0000000000155421: mov     ecx, eax
 * 0000000000155423: call    _GetCursorSizeFromIndex@4; GetCursorSizeFromIndex(x)
 * 0000000000155428: jmp     loc_155566
 * 000000000015542D: push    ebx
 * 000000000015542E: push    0Dh
 * 0000000000155430: jmp     short loc_15540D
 * 0000000000155432: mov     ecx, ebx
 * 0000000000155434: call    _GetDPIServerInfoForDpi@4; GetDPIServerInfoForDpi(x)
 * 0000000000155439: push    ebx; b
 * 000000000015543A: push    1Dh; int
 * 000000000015543C: mov     edi, [eax+0Ch]
 * 000000000015543F: add     edi, edi
 * 0000000000155441: call    __ScaleSystemMetricForDPIWithoutCache@8; _ScaleSystemMetricForDPIWithoutCache(x,x)
 * 0000000000155446: push    ebx; b
 * 0000000000155447: push    0Eh; int
 * 0000000000155449: add     edi, eax
 * 000000000015544B: call    __ScaleSystemMetricForDPIWithoutCache@8; _ScaleSystemMetricForDPIWithoutCache(x,x)
 * 0000000000155450: push    ebx; b
 * 0000000000155451: push    0Ch; int
 * 0000000000155453: lea     edi, [edi+eax]
 * 0000000000155456: add     edi, edi
 * 0000000000155458: call    __ScaleSystemMetricForDPIWithoutCache@8; _ScaleSystemMetricForDPIWithoutCache(x,x)
 * 000000000015545D: imul    ecx, eax, 3
 * 0000000000155460: push    ebx
 * 0000000000155461: push    0Dh
 * 0000000000155463: add     ecx, 4
 * 0000000000155466: add     edi, ecx
 * 0000000000155468: jmp     loc_155626
 * 000000000015546D: cmp     esi, 11h
 * 0000000000155470: jz      loc_15560D
 * 0000000000155476: cmp     esi, 14h
 * 0000000000155479: jz      loc_1555DC
 * 000000000015547F: cmp     esi, 15h
 * 0000000000155482: jz      loc_1555AF
 * 0000000000155488: cmp     esi, 16h
 * 000000000015548B: jz      loc_1555A7
 * 0000000000155491: lea     eax, [esi-1Bh]
 * 0000000000155494: cmp     eax, 1; switch 2 cases
 * 0000000000155497: ja      short def_1554CF; jumptable 001554CF default case
 * 0000000000155499: mov     ecx, ebx
 * 000000000015549B: call    _GetDPIMETRICSForDpi@4; GetDPIMETRICSForDpi(x)
 * 00000000001554A0: mov     edi, [eax+8]
 * 00000000001554A3: inc     edi
 * 00000000001554A4: add     edi, [eax+10h]
 * 00000000001554A7: and     edi, 0FFFEh
 * 00000000001554AD: dec     edi
 * 00000000001554AE: jmp     loc_15562D; jumptable 001554CF cases 27,28
 * 00000000001554B3: push    60h ; '`'; jumptable 001554CF default case
 * 00000000001554B5: pop     edx
 * 00000000001554B6: push    edx; c
 * 00000000001554B7: push    ebx; b
 * 00000000001554B8: mov     ecx, esi
 * 00000000001554BA: call    _GetDpiDependentMetric@8; GetDpiDependentMetric(x,x)
 * 00000000001554BF: push    eax; a
 * 00000000001554C0: call    ds:__imp__EngMulDiv@12; EngMulDiv(x,x,x)
 * 00000000001554C6: mov     edi, eax
 * 00000000001554C8: movzx   eax, ds:(byte_15567F-1Bh)[esi]
 * 00000000001554CF: jmp     ds:jpt_1554CF[eax*4]; switch jump
 * 00000000001554D6: mov     ecx, ebx
 * 00000000001554D8: call    _GetDPIMETRICSForDpi@4; GetDPIMETRICSForDpi(x)
 * 00000000001554DD: cmp     edi, [eax+18h]
 * 00000000001554E0: jg      loc_15562D; jumptable 001554CF cases 27,28
 * 00000000001554E6: mov     ecx, ebx
 * 00000000001554E8: call    _GetDPIMETRICSForDpi@4; GetDPIMETRICSForDpi(x)
 * 00000000001554ED: mov     edi, [eax+18h]
 * 00000000001554F0: jmp     loc_15562D; jumptable 001554CF cases 27,28
 * 00000000001554F5: mov     ecx, ebx
 * 00000000001554F7: call    _GetDPIMETRICSForDpi@4; GetDPIMETRICSForDpi(x)
 * 00000000001554FC: mov     eax, [eax+24h]
 * 00000000001554FF: add     eax, 2
 * 0000000000155502: cmp     edi, eax
 * 0000000000155504: jg      loc_15562D; jumptable 001554CF cases 27,28
 * 000000000015550A: mov     ecx, ebx
 * 000000000015550C: call    _GetDPIMETRICSForDpi@4; GetDPIMETRICSForDpi(x)
 * 0000000000155511: mov     edi, [eax+24h]
 * 0000000000155514: add     edi, 2
 * 0000000000155517: jmp     loc_15562D; jumptable 001554CF cases 27,28
 * 000000000015551C: cmp     edi, 8
 * 000000000015551F: jg      loc_15562D; jumptable 001554CF cases 27,28
 * 0000000000155525: push    8
 * 0000000000155527: pop     edi
 * 0000000000155528: jmp     loc_15562D; jumptable 001554CF cases 27,28
 * 000000000015552D: mov     ecx, ebx
 * 000000000015552F: call    _GetDPIServerInfoForDpi@4; GetDPIServerInfoForDpi(x)
 * 0000000000155534: mov     eax, [eax+10h]
 * 0000000000155537: add     eax, 2
 * 000000000015553A: cmp     edi, eax
 * 000000000015553C: jg      loc_15562D; jumptable 001554CF cases 27,28
 * 0000000000155542: mov     ecx, ebx
 * 0000000000155544: call    _GetDPIServerInfoForDpi@4; GetDPIServerInfoForDpi(x)
 * 0000000000155549: mov     edi, [eax+10h]
 * 000000000015554C: jmp     short loc_155514
 * 000000000015554E: push    ebx; b
 * 000000000015554F: push    5; int
 * 0000000000155551: call    __ScaleSystemMetricForDPIWithoutCache@8; _ScaleSystemMetricForDPIWithoutCache(x,x)
 * 0000000000155556: cmp     edi, eax
 * 0000000000155558: jg      loc_15562D; jumptable 001554CF cases 27,28
 * 000000000015555E: push    ebx; b
 * 000000000015555F: push    5; int
 * 0000000000155561: call    __ScaleSystemMetricForDPIWithoutCache@8; _ScaleSystemMetricForDPIWithoutCache(x,x)
 * 0000000000155566: mov     edi, eax
 * 0000000000155568: jmp     loc_15562D; jumptable 001554CF cases 27,28
 * 000000000015556D: push    ebx; b
 * 000000000015556E: push    6; int
 * 0000000000155570: call    __ScaleSystemMetricForDPIWithoutCache@8; _ScaleSystemMetricForDPIWithoutCache(x,x)
 * 0000000000155575: cmp     edi, eax
 * 0000000000155577: jg      loc_15562D; jumptable 001554CF cases 27,28
 * 000000000015557D: push    ebx
 * 000000000015557E: push    6
 * 0000000000155580: jmp     short loc_155561
 * 0000000000155582: push    64h ; 'd'
 * 0000000000155584: pop     ecx
 * 0000000000155585: mov     eax, edi
 * 0000000000155587: cmp     edi, ecx
 * 0000000000155589: jl      short loc_15558D
 * 000000000015558B: mov     eax, ecx
 * 000000000015558D: test    eax, eax
 * 000000000015558F: jle     short loc_1555A0
 * 0000000000155591: cmp     edi, ecx
 * 0000000000155593: jl      loc_15562D; jumptable 001554CF cases 27,28
 * 0000000000155599: mov     edi, ecx
 * 000000000015559B: jmp     loc_15562D; jumptable 001554CF cases 27,28
 * 00000000001555A0: xor     edi, edi
 * 00000000001555A2: jmp     loc_15562D; jumptable 001554CF cases 27,28
 * 00000000001555A7: push    ebx
 * 00000000001555A8: push    18h
 * 00000000001555AA: jmp     loc_15540D
 * 00000000001555AF: push    ebx; b
 * 00000000001555B0: push    0Dh; int
 * 00000000001555B2: call    __ScaleSystemMetricForDPIWithoutCache@8; _ScaleSystemMetricForDPIWithoutCache(x,x)
 * 00000000001555B7: push    ebx; b
 * 00000000001555B8: push    6; int
 * 00000000001555BA: lea     esi, [eax-2]
 * 00000000001555BD: call    __ScaleSystemMetricForDPIWithoutCache@8; _ScaleSystemMetricForDPIWithoutCache(x,x)
 * 00000000001555C2: cdq
 * 00000000001555C3: sub     eax, edx
 * 00000000001555C5: sar     eax, 1
 * 00000000001555C7: push    ebx; b
 * 00000000001555C8: cmp     esi, eax
 * 00000000001555CA: jge     short loc_1555D8
 * 00000000001555CC: push    0Dh; int
 * 00000000001555CE: call    __ScaleSystemMetricForDPIWithoutCache@8; _ScaleSystemMetricForDPIWithoutCache(x,x)
 * 00000000001555D3: lea     edi, [eax-2]
 * 00000000001555D6: jmp     short loc_15562D; jumptable 001554CF cases 27,28
 * 00000000001555D8: push    6
 * 00000000001555DA: jmp     short loc_1555FF
 * 00000000001555DC: push    ebx; b
 * 00000000001555DD: push    0Ch; int
 * 00000000001555DF: call    __ScaleSystemMetricForDPIWithoutCache@8; _ScaleSystemMetricForDPIWithoutCache(x,x)
 * 00000000001555E4: push    ebx; b
 * 00000000001555E5: push    5; int
 * 00000000001555E7: lea     esi, [eax-2]
 * 00000000001555EA: call    __ScaleSystemMetricForDPIWithoutCache@8; _ScaleSystemMetricForDPIWithoutCache(x,x)
 * 00000000001555EF: cdq
 * 00000000001555F0: sub     eax, edx
 * 00000000001555F2: sar     eax, 1
 * 00000000001555F4: push    ebx; b
 * 00000000001555F5: cmp     esi, eax
 * 00000000001555F7: jge     short loc_1555FD
 * 00000000001555F9: push    0Ch
 * 00000000001555FB: jmp     short loc_1555CE
 * 00000000001555FD: push    5; int
 * 00000000001555FF: call    __ScaleSystemMetricForDPIWithoutCache@8; _ScaleSystemMetricForDPIWithoutCache(x,x)
 * 0000000000155604: cdq
 * 0000000000155605: sub     eax, edx
 * 0000000000155607: mov     edi, eax
 * 0000000000155609: sar     edi, 1
 * 000000000015560B: jmp     short loc_15562D; jumptable 001554CF cases 27,28
 * 000000000015560D: push    ebx; b
 * 000000000015560E: push    1Dh; int
 * 0000000000155610: call    __ScaleSystemMetricForDPIWithoutCache@8; _ScaleSystemMetricForDPIWithoutCache(x,x)
 * 0000000000155615: push    ebx; b
 * 0000000000155616: push    0Fh; int
 * 0000000000155618: mov     edi, eax
 * 000000000015561A: call    __ScaleSystemMetricForDPIWithoutCache@8; _ScaleSystemMetricForDPIWithoutCache(x,x)
 * 000000000015561F: add     edi, eax
 * 0000000000155621: push    ebx; b
 * 0000000000155622: add     edi, edi
 * 0000000000155624: push    2; int
 * 0000000000155626: call    __ScaleSystemMetricForDPIWithoutCache@8; _ScaleSystemMetricForDPIWithoutCache(x,x)
 * 000000000015562B: add     edi, eax
 * 000000000015562D: mov     eax, edi; jumptable 001554CF cases 27,28
 * 000000000015562F: jmp     short loc_15563B
 * 0000000000155631: push    57h ; 'W'
 * 0000000000155633: pop     ecx
 * 0000000000155634: call    _UserSetLastError@4; UserSetLastError(x)
 * 0000000000155639: xor     eax, eax
 * 000000000015563B: pop     edi
 * 000000000015563C: pop     esi
 * 000000000015563D: pop     ebx
 * 000000000015563E: mov     esp, ebp
 * 0000000000155640: pop     ebp
 * 0000000000155641: retn    8
 */
