/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x1409F5010
 * Callers:
 *     KiDecodeMcaFault @ 0x1403D8740 (KiDecodeMcaFault.c)
 *     sub_1403E6C70 @ 0x1403E6C70 (sub_1403E6C70.c)
 *     FsRtlUninitializeSmallMcb @ 0x140A0E0D0 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     sub_1403E6E8C @ 0x1403E6E8C (sub_1403E6E8C.c)
 *     sub_1403E6F6C @ 0x1403E6F6C (sub_1403E6F6C.c)
 *     sub_1403E7ED8 @ 0x1403E7ED8 (sub_1403E7ED8.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     sub_140A090FC @ 0x140A090FC (sub_140A090FC.c)
 *     sub_140A0B098 @ 0x140A0B098 (sub_140A0B098.c)
 *     sub_140A0BB30 @ 0x140A0BB30 (sub_140A0BB30.c)
 *     $$b8 @ 0x140A0C3CC ($$b8.c)
 *     sub_140A0C5E8 @ 0x140A0C5E8 (sub_140A0C5E8.c)
 *     sub_140A0CC50 @ 0x140A0CC50 (sub_140A0CC50.c)
 *     KiGetGdtIdt @ 0x140A0DF60 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x140A0DF70 (KiGetLdtr.c)
 *     KiGetSs @ 0x140A0DF80 (KiGetSs.c)
 *     KiGetTr @ 0x140A0DF90 (KiGetTr.c)
 *     KiErrata361Present @ 0x140A0DFA0 (KiErrata361Present.c)
 *     KiErrataSkx55Present @ 0x140A0DFC0 (KiErrataSkx55Present.c)
 *     KiErrata704Present @ 0x140A0DFD0 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x140A0E080 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140A0E330 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140A0E340 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x140A0E550 (RtlInitMinimalBarrier.c)
 *     sub_140A18FE4 @ 0x140A18FE4 (sub_140A18FE4.c)
 */

/*
 * Hex-Rays decompilation failed for FsRtlMdlReadCompleteDevEx @ 0x1409F5010
 * Reason: Hex-Rays returned no pseudocode for 0x1409F5010
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001409F5010: mov     [rsp-8+arg_0], rcx
 * 00000001409F5015: push    rbp
 * 00000001409F5016: push    rbx
 * 00000001409F5017: push    rsi
 * 00000001409F5018: push    rdi
 * 00000001409F5019: push    r12
 * 00000001409F501B: push    r13
 * 00000001409F501D: push    r14
 * 00000001409F501F: push    r15
 * 00000001409F5021: lea     rbp, [rsp-0BA8h]
 * 00000001409F5029: sub     rsp, 0CA8h
 * 00000001409F5030: mov     eax, [rcx+990h]
 * 00000001409F5036: xor     r9d, r9d
 * 00000001409F5039: mov     r12, rcx
 * 00000001409F503C: mov     [rbp+0BE0h+var_448], rcx
 * 00000001409F5043: mov     ecx, 110000h
 * 00000001409F5048: mov     edi, 0FFFFFFF8h
 * 00000001409F504D: and     eax, ecx
 * 00000001409F504F: mov     r11d, 0FFFFFFFFh
 * 00000001409F5055: lea     esi, [r9+1]
 * 00000001409F5059: mov     r10d, 12Fh
 * 00000001409F505F: cmp     eax, ecx
 * 00000001409F5061: jz      loc_1409F511E
 * 00000001409F5067: mov     rdx, [r12+8E0h]
 * 00000001409F506F: lea     ecx, [r10+1]
 * 00000001409F5073: mov     rax, rdx
 * 00000001409F5076: lea     r8d, [r9+26h]
 * 00000001409F507A: mov     [rax], r9
 * 00000001409F507D: add     ecx, edi
 * 00000001409F507F: add     rax, 8
 * 00000001409F5083: sub     r8, rsi
 * 00000001409F5086: jnz     short loc_1409F507A
 * 00000001409F5088: test    ecx, ecx
 * 00000001409F508A: jz      short loc_1409F5097
 * 00000001409F508C: mov     [rax], r9b
 * 00000001409F508F: add     rax, rsi
 * 00000001409F5092: add     ecx, r11d
 * 00000001409F5095: jnz     short loc_1409F508C
 * 00000001409F5097: movups  xmm0, xmmword ptr [r12+848h]
 * 00000001409F50A0: lea     rax, [r12+878h]
 * 00000001409F50A8: mov     rcx, rax
 * 00000001409F50AB: movdqu  xmmword ptr [rdx+10h], xmm0
 * 00000001409F50B0: shr     rcx, 10h
 * 00000001409F50B4: movups  xmm1, xmmword ptr [r12+858h]
 * 00000001409F50BD: movdqu  xmmword ptr [rdx+20h], xmm1
 * 00000001409F50C2: movups  xmm0, xmmword ptr [r12+868h]
 * 00000001409F50CB: movdqu  xmmword ptr [rdx+120h], xmm0
 * 00000001409F50D3: mov     [rbp+2F2h], rdx
 * 00000001409F50DA: mov     word ptr [rbp+0BE0h+var_8F0], r10w
 * 00000001409F50E2: mov     [rdx+10h], ax
 * 00000001409F50E6: shr     rax, 20h
 * 00000001409F50EA: mov     [rdx+16h], cx
 * 00000001409F50EE: mov     [rdx+18h], eax
 * 00000001409F50F1: cli
 * 00000001409F50F2: xor     eax, eax
 * 00000001409F50F4: cmp     [r12+990h], eax
 * 00000001409F50FC: jge     short loc_1409F5104
 * 00000001409F50FE: mov     dr7, rax
 * 00000001409F5101: sti
 * 00000001409F5102: jmp     short loc_1409F5120
 * 00000001409F5104: sidt    fword ptr [rbp+0BE0h+var_760]
 * 00000001409F510B: lidt    fword ptr [rbp+0BE0h+var_8F0]
 * 00000001409F5112: mov     dr7, rax
 * 00000001409F5115: lidt    fword ptr [rbp+0BE0h+var_760]
 * 00000001409F511C: jmp     short loc_1409F5101
 * 00000001409F511E: xor     eax, eax
 * 00000001409F5120: test    dword ptr [r12+994h], 100h
 * 00000001409F512C: mov     [rbp+0BE0h+var_BD0], rax
 * 00000001409F5130: jz      short loc_1409F5147
 * 00000001409F5132: lea     rcx, [rbp+0BE8h]
 * 00000001409F5139: mov     rax, [rcx]
 * 00000001409F513C: mov     [rbp+0BE0h+var_BD0], rax
 * 00000001409F5140: xor     eax, eax
 * 00000001409F5142: mov     [rcx], rax
 * 00000001409F5145: jmp     short loc_1409F5149
 * 00000001409F5147: xor     eax, eax
 * 00000001409F5149: mov     r13d, 20h ; ' '
 * 00000001409F514F: mov     [r12+828h], eax
 * 00000001409F5157: test    dword ptr [r12+990h], 40000000h
 * 00000001409F5163: mov     r14, 7010008004002001h
 * 00000001409F516D: lea     r15d, [r13-1Ch]
 * 00000001409F5171: jz      short loc_1409F5183
 * 00000001409F5173: xor     eax, eax
 * 00000001409F5175: cmp     [r12+0A78h], rax
 * 00000001409F517D: jnz     loc_1409F5419
 * 00000001409F5183: mov     r14, [r12+7B8h]
 * 00000001409F518B: lea     rbx, [r12+798h]
 * 00000001409F5193: mov     [rbp+0BE0h+arg_8], r14
 * 00000001409F519A: lea     rdx, [rbp+0BE0h+var_110]
 * 00000001409F51A1: mov     rcx, rbx
 * 00000001409F51A4: mov     r8d, r13d
 * 00000001409F51A7: mov     r9, r15
 * 00000001409F51AA: mov     rax, [rcx]
 * 00000001409F51AD: add     r8d, edi
 * 00000001409F51B0: mov     [rdx], rax
 * 00000001409F51B3: add     rcx, 8
 * 00000001409F51B7: add     rdx, 8
 * 00000001409F51BB: sub     r9, rsi
 * 00000001409F51BE: jnz     short loc_1409F51AA
 * 00000001409F51C0: xor     eax, eax
 * 00000001409F51C2: test    r8d, r8d
 * 00000001409F51C5: jz      short loc_1409F51D8
 * 00000001409F51C7: mov     al, [rcx]
 * 00000001409F51C9: add     rcx, rsi
 * 00000001409F51CC: mov     [rdx], al
 * 00000001409F51CE: add     rdx, rsi
 * 00000001409F51D1: add     r8d, r11d
 * 00000001409F51D4: jnz     short loc_1409F51C7
 * 00000001409F51D6: xor     eax, eax
 * 00000001409F51D8: mov     [r12+7B8h], rax
 * 00000001409F51E0: mov     ecx, r13d
 * 00000001409F51E3: mov     [r12+828h], eax
 * 00000001409F51EB: mov     rdx, r15
 * 00000001409F51EE: mov     rax, rbx
 * 00000001409F51F1: xor     r8d, r8d
 * 00000001409F51F4: mov     [rax], r8
 * 00000001409F51F7: add     ecx, edi
 * 00000001409F51F9: add     rax, 8
 * 00000001409F51FD: sub     rdx, rsi
 * 00000001409F5200: jnz     short loc_1409F51F4
 * 00000001409F5202: test    ecx, ecx
 * 00000001409F5204: jz      short loc_1409F5211
 * 00000001409F5206: mov     [rax], r8b
 * 00000001409F5209: add     rax, rsi
 * 00000001409F520C: add     ecx, r11d
 * 00000001409F520F: jnz     short loc_1409F5206
 * 00000001409F5211: mov     eax, [r12+7E4h]
 * 00000001409F5219: mov     r9, r12
 * 00000001409F521C: add     [r12+828h], eax
 * 00000001409F5224: mov     rax, r12
 * 00000001409F5227: mov     r10d, [r12+7E4h]
 * 00000001409F522F: mov     r11d, [r12+814h]
 * 00000001409F5237: mov     rsi, [r12+818h]
 * 00000001409F523F: lea     rcx, [r12+r10]
 * 00000001409F5243: cmp     r12, rcx
 * 00000001409F5246: jnb     short loc_1409F5258
 * 00000001409F5248: mov     edx, 40h ; '@'
 * 00000001409F524D: prefetchnta byte ptr [rax]
 * 00000001409F5250: add     rax, rdx
 * 00000001409F5253: cmp     rax, rcx
 * 00000001409F5256: jb      short loc_1409F524D
 * 00000001409F5258: mov     edi, r10d
 * 00000001409F525B: mov     r8, rsi
 * 00000001409F525E: shr     edi, 7
 * 00000001409F5261: test    edi, edi
 * 00000001409F5263: jz      short loc_1409F52E0
 * 00000001409F5265: mov     r14, 7010008004002001h
 * 00000001409F526F: mov     edx, 8
 * 00000001409F5274: lea     r12d, [rdx-7]
 * 00000001409F5278: mov     rax, [r9]
 * 00000001409F527B: mov     ecx, r11d
 * 00000001409F527E: xor     rax, r8
 * 00000001409F5281: mov     r8, [r9+8]
 * 00000001409F5285: rol     rax, cl
 * 00000001409F5288: add     r9, 10h
 * 00000001409F528C: xor     r8, rax
 * 00000001409F528F: rol     r8, cl
 * 00000001409F5292: sub     rdx, r12
 * 00000001409F5295: jnz     short loc_1409F5278
 * 00000001409F5297: mov     r12, [rbp+0BE0h+arg_0]
 * 00000001409F529E: mov     rcx, r9
 * 00000001409F52A1: sub     rcx, r12
 * 00000001409F52A4: xor     rcx, rsi
 * 00000001409F52A7: mov     rax, rcx
 * 00000001409F52AA: rol     rax, 11h
 * 00000001409F52AE: xor     rcx, rax
 * 00000001409F52B1: mov     rax, r14
 * 00000001409F52B4: mul     rcx
 * 00000001409F52B7: xor     eax, edx
 * 00000001409F52B9: mov     [rbp+0BE0h+var_3D8], rdx
 * 00000001409F52C0: xor     r11d, eax
 * 00000001409F52C3: mov     eax, 1
 * 00000001409F52C8: and     r11d, 3Fh
 * 00000001409F52CC: cmovz   r11d, eax
 * 00000001409F52D0: mov     eax, 0FFFFFFFFh
 * 00000001409F52D5: add     edi, eax
 * 00000001409F52D7: jnz     short loc_1409F526F
 * 00000001409F52D9: mov     r14, [rbp+0BE0h+arg_8]
 * 00000001409F52E0: and     r10d, 7Fh
 * 00000001409F52E4: mov     esi, 1
 * 00000001409F52E9: cmp     r10d, 8
 * 00000001409F52ED: jb      short loc_1409F530C
 * 00000001409F52EF: mov     edx, r10d
 * 00000001409F52F2: shr     rdx, 3
 * 00000001409F52F6: xor     r8, [r9]
 * 00000001409F52F9: mov     ecx, r11d
 * 00000001409F52FC: rol     r8, cl
 * 00000001409F52FF: add     r9, 8
 * 00000001409F5303: add     r10d, 0FFFFFFF8h
 * 00000001409F5307: sub     rdx, rsi
 * 00000001409F530A: jnz     short loc_1409F52F6
 * 00000001409F530C: test    r10d, r10d
 * 00000001409F530F: jz      short loc_1409F5333
 * 00000001409F5311: mov     r12d, 0FFFFFFFFh
 * 00000001409F5317: movzx   eax, byte ptr [r9]
 * 00000001409F531B: mov     ecx, r11d
 * 00000001409F531E: xor     r8, rax
 * 00000001409F5321: add     r9, rsi
 * 00000001409F5324: rol     r8, cl
 * 00000001409F5327: add     r10d, r12d
 * 00000001409F532A: jnz     short loc_1409F5317
 * 00000001409F532C: mov     r12, [rbp+0BE0h+arg_0]
 * 00000001409F5333: mov     [r12+7B8h], r14
 * 00000001409F533B: lea     rcx, [rbp+0BE0h+var_110]
 * 00000001409F5342: mov     edx, r13d
 * 00000001409F5345: mov     r9, r15
 * 00000001409F5348: mov     rax, [rcx]
 * 00000001409F534B: add     edx, 0FFFFFFF8h
 * 00000001409F534E: mov     [rbx], rax
 * 00000001409F5351: add     rcx, 8
 * 00000001409F5355: add     rbx, 8
 * 00000001409F5359: sub     r9, rsi
 * 00000001409F535C: jnz     short loc_1409F5348
 * 00000001409F535E: test    edx, edx
 * 00000001409F5360: jz      short loc_1409F5377
 * 00000001409F5362: mov     r11d, 0FFFFFFFFh
 * 00000001409F5368: mov     al, [rcx]
 * 00000001409F536A: add     rcx, rsi
 * 00000001409F536D: mov     [rbx], al
 * 00000001409F536F: add     rbx, rsi
 * 00000001409F5372: add     edx, r11d
 * 00000001409F5375: jnz     short loc_1409F5368
 * 00000001409F5377: cmp     [r12+7B8h], r8
 * 00000001409F537F: jz      loc_1409F540F
 * 00000001409F5385: mov     rax, [r12+590h]
 * 00000001409F538D: xor     edx, edx
 * 00000001409F538F: mov     ecx, [r12+7E4h]
 * 00000001409F5397: mov     [rax], r12
 * 00000001409F539A: mov     [rax+10h], ecx
 * 00000001409F539D: mov     eax, [r12+8F8h]
 * 00000001409F53A5: mov     rcx, [r12+7B8h]
 * 00000001409F53AD: test    eax, eax
 * 00000001409F53AF: jnz     short loc_1409F540F
 * 00000001409F53B1: mov     rax, [r12+590h]
 * 00000001409F53B9: xor     rcx, r8
 * 00000001409F53BC: mov     [rax+18h], rcx
 * 00000001409F53C0: mov     eax, [r12+8F8h]
 * 00000001409F53C8: test    eax, eax
 * 00000001409F53CA: jnz     short loc_1409F540F
 * 00000001409F53CC: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F53D6: mov     rcx, r12
 * 00000001409F53D9: add     rax, r12
 * 00000001409F53DC: mov     [r12+900h], rax
 * 00000001409F53E4: xor     eax, eax
 * 00000001409F53E6: mov     [r12+908h], rax
 * 00000001409F53EE: mov     qword ptr [r12+910h], 101h
 * 00000001409F53FA: mov     [r12+918h], r8
 * 00000001409F5402: mov     [r12+8F8h], esi
 * 00000001409F540A: call    $$b8
 * 00000001409F540F: mov     r14, 7010008004002001h
 * 00000001409F5419: or      [r12+990h], r15d
 * 00000001409F5421: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F5428: add     [r12+834h], esi
 * 00000001409F5430: mov     r8, 0ABCC77118461CEFDh
 * 00000001409F543A: mov     eax, [r12+990h]
 * 00000001409F5442: test    al, 8
 * 00000001409F5444: jz      loc_1409F5874
 * 00000001409F544A: bt      eax, 17h
 * 00000001409F544E: jb      loc_1409F5874
 * 00000001409F5454: mov     eax, [r12+994h]
 * 00000001409F545C: mov     r10, [r12+0A70h]
 * 00000001409F5464: mov     r13d, [r12+7E4h]
 * 00000001409F546C: mov     r11, [r12+9F8h]
 * 00000001409F5474: mov     r15d, [r12+808h]
 * 00000001409F547C: mov     [rbp+0BE0h+arg_8], r10
 * 00000001409F5483: and     eax, esi
 * 00000001409F5485: jz      short loc_1409F548F
 * 00000001409F5487: mov     r11, [r12+5D8h]
 * 00000001409F548F: mov     rbx, [rbp+0BE0h+arg_0]
 * 00000001409F5496: mov     r12, [r12+160h]
 * 00000001409F549E: mov     [rbp+0BE0h+var_C40], r12
 * 00000001409F54A2: mov     rax, [rbx+2C8h]
 * 00000001409F54A9: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409F54AE: mov     rax, [rbx+340h]
 * 00000001409F54B5: mov     [rbp+0BE0h+var_C30], rax
 * 00000001409F54B9: rdtsc
 * 00000001409F54BB: shl     rdx, 20h
 * 00000001409F54BF: mov     r9, rdi
 * 00000001409F54C2: or      rax, rdx
 * 00000001409F54C5: mov     rcx, rax
 * 00000001409F54C8: ror     rax, 3
 * 00000001409F54CC: xor     rcx, rax
 * 00000001409F54CF: mov     rax, r14
 * 00000001409F54D2: mul     rcx
 * 00000001409F54D5: mov     rcx, rdx
 * 00000001409F54D8: mov     [rbp+0BE0h+var_3D0], rdx
 * 00000001409F54DF: xor     rcx, rax
 * 00000001409F54E2: mov     rax, r8
 * 00000001409F54E5: mul     rcx
 * 00000001409F54E8: shr     rdx, 1Ah
 * 00000001409F54EC: imul    rax, rdx, 5F5E100h
 * 00000001409F54F3: sub     rcx, rax
 * 00000001409F54F6: sub     r9, rcx
 * 00000001409F54F9: mov     [rbp+0BE0h+var_AB8], r9
 * 00000001409F5500: mov     r8d, [rbx+990h]
 * 00000001409F5507: bt      r8d, 1Ah
 * 00000001409F550C: jnb     loc_1409F55B3
 * 00000001409F5512: rdtsc
 * 00000001409F5514: shl     rdx, 20h
 * 00000001409F5518: or      rax, rdx
 * 00000001409F551B: mov     rcx, rax
 * 00000001409F551E: ror     rax, 3
 * 00000001409F5522: xor     rcx, rax
 * 00000001409F5525: mov     rax, r14
 * 00000001409F5528: mul     rcx
 * 00000001409F552B: mov     rcx, rdx
 * 00000001409F552E: mov     [rbp+0BE0h+var_3C8], rdx
 * 00000001409F5535: xor     rcx, rax
 * 00000001409F5538: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001409F5542: mul     rcx
 * 00000001409F5545: shr     rdx, 3
 * 00000001409F5549: lea     rax, [rdx+rdx*4]
 * 00000001409F554D: add     rax, rax
 * 00000001409F5550: sub     rcx, rax
 * 00000001409F5553: mov     eax, 2
 * 00000001409F5558: cmp     rcx, rax
 * 00000001409F555B: jnb     short loc_1409F55B3
 * 00000001409F555D: rdtsc
 * 00000001409F555F: shl     rdx, 20h
 * 00000001409F5563: or      rax, rdx
 * 00000001409F5566: mov     rcx, rax
 * 00000001409F5569: ror     rax, 3
 * 00000001409F556D: xor     rcx, rax
 * 00000001409F5570: mov     rax, r14
 * 00000001409F5573: mul     rcx
 * 00000001409F5576: mov     rcx, rdx
 * 00000001409F5579: mov     [rbp+0BE0h+var_3C0], rdx
 * 00000001409F5580: xor     rcx, rax
 * 00000001409F5583: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001409F558D: mul     rcx
 * 00000001409F5590: shr     rdx, 3
 * 00000001409F5594: lea     rax, [rdx+rdx*4]
 * 00000001409F5598: add     rax, rax
 * 00000001409F559B: sub     rcx, rax
 * 00000001409F559E: add     rcx, rsi
 * 00000001409F55A1: imul    rcx, r9
 * 00000001409F55A5: mov     [rbp+0BE0h+var_AB8], rcx
 * 00000001409F55AC: mov     r8d, [rbx+990h]
 * 00000001409F55B3: xor     eax, eax
 * 00000001409F55B5: mov     esi, r15d
 * 00000001409F55B8: mov     ebx, eax
 * 00000001409F55BA: mov     r14d, eax
 * 00000001409F55BD: lea     ecx, [rax+2]
 * 00000001409F55C0: test    cl, r8b
 * 00000001409F55C3: cmovnz  esi, r13d
 * 00000001409F55C7: test    r8b, r8b
 * 00000001409F55CA: js      short loc_1409F55D4
 * 00000001409F55CC: mov     r13d, eax
 * 00000001409F55CF: jmp     loc_1409F56B3
 * 00000001409F55D4: mov     r9d, 1
 * 00000001409F55DA: mov     r13d, r9d
 * 00000001409F55DD: rdtsc
 * 00000001409F55DF: shl     rdx, 20h
 * 00000001409F55E3: or      rax, rdx
 * 00000001409F55E6: mov     rcx, rax
 * 00000001409F55E9: ror     rax, 3
 * 00000001409F55ED: xor     rcx, rax
 * 00000001409F55F0: mov     rax, 7010008004002001h
 * 00000001409F55FA: mul     rcx
 * 00000001409F55FD: mov     ecx, 154h
 * 00000001409F5602: mov     rbx, rdx
 * 00000001409F5605: mov     [rbp+0BE0h+var_3B8], rdx
 * 00000001409F560C: mov     rdx, [rbp+0BE0h+arg_0]
 * 00000001409F5613: xor     rbx, rax
 * 00000001409F5616: mov     r14, rbx
 * 00000001409F5619: mov     r8, rbx
 * 00000001409F561C: xor     r14, rdx
 * 00000001409F561F: lea     rax, [rdx+0A98h]
 * 00000001409F5626: xor     [rax], r8
 * 00000001409F5629: lea     rax, [rax-8]
 * 00000001409F562D: ror     r8, cl
 * 00000001409F5630: sub     ecx, r9d
 * 00000001409F5633: jnz     short loc_1409F5626
 * 00000001409F5635: lea     r9, [r15-0AA0h]
 * 00000001409F563C: mov     r12, r15
 * 00000001409F563F: shr     r9, 3
 * 00000001409F5643: test    r9d, r9d
 * 00000001409F5646: jz      short loc_1409F5686
 * 00000001409F5648: movsxd  r10, r9d
 * 00000001409F564B: mov     rdi, r13
 * 00000001409F564E: add     r10, 153h
 * 00000001409F5655: lea     r10, [rdx+r10*8]
 * 00000001409F5659: mov     rdx, [r10]
 * 00000001409F565C: lea     rax, [r14+r14]
 * 00000001409F5660: mov     ecx, r9d
 * 00000001409F5663: lea     r10, [r10-8]
 * 00000001409F5667: ror     rdx, cl
 * 00000001409F566A: mov     r14, rdx
 * 00000001409F566D: xor     r14, rax
 * 00000001409F5670: sub     r9d, edi
 * 00000001409F5673: jnz     short loc_1409F5659
 * 00000001409F5675: mov     r10, [rbp+0BE0h+arg_8]
 * 00000001409F567C: mov     r12, r15
 * 00000001409F567F: mov     rdx, [rbp+0BE0h+arg_0]
 * 00000001409F5686: mov     ecx, esi
 * 00000001409F5688: add     rdx, r12
 * 00000001409F568B: sub     ecx, r15d
 * 00000001409F568E: shr     ecx, 3
 * 00000001409F5691: test    ecx, ecx
 * 00000001409F5693: jz      short loc_1409F56AF
 * 00000001409F5695: lea     rdx, [rdx+rcx*8]
 * 00000001409F5699: mov     r9, r13
 * 00000001409F569C: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 00000001409F56A0: xor     [rdx], r8
 * 00000001409F56A3: lea     rdx, [rdx-8]
 * 00000001409F56A7: ror     r8, cl
 * 00000001409F56AA: sub     ecx, r9d
 * 00000001409F56AD: jnz     short loc_1409F56A0
 * 00000001409F56AF: mov     r12, [rbp+0BE0h+var_C40]
 * 00000001409F56B3: test    r10, r10
 * 00000001409F56B6: jz      short loc_1409F56DE
 * 00000001409F56B8: mov     rax, [rbp+0BE0h+var_C30]
 * 00000001409F56BC: lea     r8, [rbp+0BE0h+var_AB8]
 * 00000001409F56C3: mov     r9, r12
 * 00000001409F56C6: mov     [rsp+0CE0h+BugCheckParameter4], r10
 * 00000001409F56CB: mov     r12, [rbp+0BE0h+arg_0]
 * 00000001409F56D2: mov     edx, esi
 * 00000001409F56D4: mov     rcx, r12
 * 00000001409F56D7: call    KeGuardDispatchICall
 * 00000001409F56DC: jmp     short loc_1409F571E
 * 00000001409F56DE: xor     edx, edx
 * 00000001409F56E0: test    r11, r11
 * 00000001409F56E3: jnz     short loc_1409F56F8
 * 00000001409F56E5: lea     r8, [rbp+0BE0h+var_AB8]
 * 00000001409F56EC: xor     ecx, ecx
 * 00000001409F56EE: mov     rax, r12
 * 00000001409F56F1: call    KeGuardDispatchICall
 * 00000001409F56F6: jmp     short loc_1409F5717
 * 00000001409F56F8: lea     rax, [rbp+0BE0h+var_AB8]
 * 00000001409F56FF: xor     r9d, r9d
 * 00000001409F5702: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 00000001409F5707: xor     r8d, r8d
 * 00000001409F570A: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409F570F: mov     rcx, r11
 * 00000001409F5712: call    KeGuardDispatchICall
 * 00000001409F5717: mov     r12, [rbp+0BE0h+arg_0]
 * 00000001409F571E: xor     eax, eax
 * 00000001409F5720: test    r13d, r13d
 * 00000001409F5723: jz      loc_1409F585A
 * 00000001409F5729: mov     r8, rbx
 * 00000001409F572C: lea     rax, [r12+0A98h]
 * 00000001409F5734: xor     r8, r12
 * 00000001409F5737: mov     ecx, 154h
 * 00000001409F573C: mov     r13d, 1
 * 00000001409F5742: xor     [rax], rbx
 * 00000001409F5745: lea     rax, [rax-8]
 * 00000001409F5749: ror     rbx, cl
 * 00000001409F574C: sub     ecx, r13d
 * 00000001409F574F: jnz     short loc_1409F5742
 * 00000001409F5751: lea     r9, [r15-0AA0h]
 * 00000001409F5758: mov     r11, r15
 * 00000001409F575B: shr     r9, 3
 * 00000001409F575F: test    r9d, r9d
 * 00000001409F5762: jz      short loc_1409F5791
 * 00000001409F5764: movsxd  r10, r9d
 * 00000001409F5767: add     r10, 153h
 * 00000001409F576E: lea     r10, [r12+r10*8]
 * 00000001409F5772: mov     rdx, [r10]
 * 00000001409F5775: lea     rax, [r8+r8]
 * 00000001409F5779: mov     ecx, r9d
 * 00000001409F577C: lea     r10, [r10-8]
 * 00000001409F5780: ror     rdx, cl
 * 00000001409F5783: mov     r8, rdx
 * 00000001409F5786: xor     r8, rax
 * 00000001409F5789: sub     r9d, r13d
 * 00000001409F578C: jnz     short loc_1409F5772
 * 00000001409F578E: mov     r11, r15
 * 00000001409F5791: sub     esi, r15d
 * 00000001409F5794: lea     rcx, [r11+r12]
 * 00000001409F5798: shr     esi, 3
 * 00000001409F579B: test    esi, esi
 * 00000001409F579D: jz      short loc_1409F57B9
 * 00000001409F579F: mov     eax, esi
 * 00000001409F57A1: dec     rax
 * 00000001409F57A4: lea     rdx, [rcx+rax*8]
 * 00000001409F57A8: xor     [rdx], rbx
 * 00000001409F57AB: mov     ecx, esi
 * 00000001409F57AD: ror     rbx, cl
 * 00000001409F57B0: lea     rdx, [rdx-8]
 * 00000001409F57B4: sub     esi, r13d
 * 00000001409F57B7: jnz     short loc_1409F57A8
 * 00000001409F57B9: cmp     r8, r14
 * 00000001409F57BC: jz      loc_1409F586A
 * 00000001409F57C2: mov     rax, [r12+590h]
 * 00000001409F57CA: xor     edx, edx
 * 00000001409F57CC: mov     ecx, [r12+7E4h]
 * 00000001409F57D4: mov     [rax], r12
 * 00000001409F57D7: mov     [rax+10h], ecx
 * 00000001409F57DA: mov     eax, [r12+8F8h]
 * 00000001409F57E2: test    eax, eax
 * 00000001409F57E4: jnz     loc_1409F586A
 * 00000001409F57EA: mov     rax, [r12+590h]
 * 00000001409F57F2: mov     rcx, r8
 * 00000001409F57F5: xor     rcx, r14
 * 00000001409F57F8: mov     [rax+18h], rcx
 * 00000001409F57FC: mov     eax, [r12+8F8h]
 * 00000001409F5804: test    eax, eax
 * 00000001409F5806: jnz     short loc_1409F586A
 * 00000001409F5808: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F5812: mov     r14, r13
 * 00000001409F5815: add     rax, r12
 * 00000001409F5818: mov     rcx, r12
 * 00000001409F581B: mov     [r12+900h], rax
 * 00000001409F5823: xor     eax, eax
 * 00000001409F5825: mov     [r12+908h], rax
 * 00000001409F582D: mov     qword ptr [r12+910h], 10Eh
 * 00000001409F5839: mov     [r12+918h], r8
 * 00000001409F5841: mov     [r12+8F8h], r14d
 * 00000001409F5849: call    $$b8
 * 00000001409F584E: mov     r15d, 4
 * 00000001409F5854: lea     r13d, [r15+1Ch]
 * 00000001409F5858: jmp     short loc_1409F587A
 * 00000001409F585A: mov     r15d, 4
 * 00000001409F5860: lea     r13d, [r15+1Ch]
 * 00000001409F5864: lea     r14d, [r15-3]
 * 00000001409F5868: jmp     short loc_1409F587C
 * 00000001409F586A: mov     r13d, 20h ; ' '
 * 00000001409F5870: lea     r15d, [r13-1Ch]
 * 00000001409F5874: mov     r14d, 1
 * 00000001409F587A: xor     eax, eax
 * 00000001409F587C: mov     esi, [r12+0C4h]
 * 00000001409F5884: lea     rcx, [r12+620h]
 * 00000001409F588C: mov     [r12+0C4h], eax
 * 00000001409F5894: mov     r9, r12
 * 00000001409F5897: add     dword ptr [r12+828h], 620h
 * 00000001409F58A3: mov     rax, r12
 * 00000001409F58A6: mov     r10d, [r12+814h]
 * 00000001409F58AE: mov     r11, [r12+818h]
 * 00000001409F58B6: cmp     r12, rcx
 * 00000001409F58B9: jnb     short loc_1409F58CB
 * 00000001409F58BB: mov     edx, 40h ; '@'
 * 00000001409F58C0: prefetchnta byte ptr [rax]
 * 00000001409F58C3: add     rax, rdx
 * 00000001409F58C6: cmp     rax, rcx
 * 00000001409F58C9: jb      short loc_1409F58C0
 * 00000001409F58CB: mov     r8, r11
 * 00000001409F58CE: mov     ebx, 0Ch
 * 00000001409F58D3: mov     rdi, 7010008004002001h
 * 00000001409F58DD: mov     edx, 8
 * 00000001409F58E2: mov     rax, [r9]
 * 00000001409F58E5: mov     ecx, r10d
 * 00000001409F58E8: xor     rax, r8
 * 00000001409F58EB: mov     r8, [r9+8]
 * 00000001409F58EF: rol     rax, cl
 * 00000001409F58F2: add     r9, 10h
 * 00000001409F58F6: xor     r8, rax
 * 00000001409F58F9: rol     r8, cl
 * 00000001409F58FC: sub     rdx, r14
 * 00000001409F58FF: jnz     short loc_1409F58E2
 * 00000001409F5901: mov     rcx, r9
 * 00000001409F5904: sub     rcx, r12
 * 00000001409F5907: xor     rcx, r11
 * 00000001409F590A: mov     rax, rcx
 * 00000001409F590D: rol     rax, 11h
 * 00000001409F5911: xor     rcx, rax
 * 00000001409F5914: mov     rax, rdi
 * 00000001409F5917: mul     rcx
 * 00000001409F591A: xor     eax, edx
 * 00000001409F591C: mov     [rbp+0BE0h+var_3B0], rdx
 * 00000001409F5923: xor     r10d, eax
 * 00000001409F5926: mov     eax, 0FFFFFFFFh
 * 00000001409F592B: and     r10d, 3Fh
 * 00000001409F592F: cmovz   r10d, r14d
 * 00000001409F5933: add     ebx, eax
 * 00000001409F5935: jnz     short loc_1409F58DD
 * 00000001409F5937: mov     edx, r13d
 * 00000001409F593A: mov     r11, r15
 * 00000001409F593D: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F5944: xor     r8, [r9]
 * 00000001409F5947: mov     ecx, r10d
 * 00000001409F594A: rol     r8, cl
 * 00000001409F594D: add     r9, 8
 * 00000001409F5951: add     edx, 0FFFFFFF8h
 * 00000001409F5954: sub     r11, r14
 * 00000001409F5957: jnz     short loc_1409F5944
 * 00000001409F5959: mov     r13d, 0FFFFFFFFh
 * 00000001409F595F: test    edx, edx
 * 00000001409F5961: jz      short loc_1409F5978
 * 00000001409F5963: movzx   eax, byte ptr [r9]
 * 00000001409F5967: mov     ecx, r10d
 * 00000001409F596A: xor     r8, rax
 * 00000001409F596D: add     r9, r14
 * 00000001409F5970: rol     r8, cl
 * 00000001409F5973: add     edx, r13d
 * 00000001409F5976: jnz     short loc_1409F5963
 * 00000001409F5978: mov     [r12+0C4h], esi
 * 00000001409F5980: cmp     [r12+0A20h], r8
 * 00000001409F5988: jz      loc_1409F5A1B
 * 00000001409F598E: mov     rax, [r12+590h]
 * 00000001409F5996: mov     ecx, [r12+7E4h]
 * 00000001409F599E: mov     [rax], r12
 * 00000001409F59A1: mov     [rax+10h], ecx
 * 00000001409F59A4: mov     eax, [r12+8F8h]
 * 00000001409F59AC: mov     rdx, [r12+0A20h]
 * 00000001409F59B4: test    eax, eax
 * 00000001409F59B6: jnz     short loc_1409F5A1B
 * 00000001409F59B8: mov     rax, [r12+590h]
 * 00000001409F59C0: mov     rcx, r8
 * 00000001409F59C3: xor     rcx, rdx
 * 00000001409F59C6: mov     [rax+18h], rcx
 * 00000001409F59CA: mov     eax, [r12+8F8h]
 * 00000001409F59D2: test    eax, eax
 * 00000001409F59D4: jnz     short loc_1409F5A1B
 * 00000001409F59D6: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F59E0: xor     edx, edx
 * 00000001409F59E2: add     rax, r12
 * 00000001409F59E5: mov     rcx, r12
 * 00000001409F59E8: mov     [r12+900h], rax
 * 00000001409F59F0: xor     eax, eax
 * 00000001409F59F2: mov     [r12+908h], rax
 * 00000001409F59FA: mov     qword ptr [r12+910h], 109h
 * 00000001409F5A06: mov     [r12+918h], r8
 * 00000001409F5A0E: mov     [r12+8F8h], r14d
 * 00000001409F5A16: call    $$b8
 * 00000001409F5A1B: xor     edx, edx
 * 00000001409F5A1D: mov     rcx, r12
 * 00000001409F5A20: call    $$b8
 * 00000001409F5A25: mov     ecx, [r12+970h]
 * 00000001409F5A2D: xor     eax, eax
 * 00000001409F5A2F: mov     [rsp+0CE0h+var_C80], r12
 * 00000001409F5A34: mov     rsi, r12
 * 00000001409F5A37: mov     [rbp+0BE0h+var_BC8], eax
 * 00000001409F5A3A: mov     r10, 2E8BA2E8BA2E8BA3h
 * 00000001409F5A44: mov     [rbp+0BE0h+var_C38], eax
 * 00000001409F5A47: lea     r9d, [rax+5]
 * 00000001409F5A4B: lea     r8d, [rax+6]
 * 00000001409F5A4F: cmp     ecx, r13d
 * 00000001409F5A52: jz      loc_1409F5B51
 * 00000001409F5A58: mov     rax, [r12+278h]
 * 00000001409F5A60: call    KeGuardDispatchICall
 * 00000001409F5A65: mov     rbx, rax
 * 00000001409F5A68: test    rax, rax
 * 00000001409F5A6B: jnz     short loc_1409F5A88
 * 00000001409F5A6D: mov     rax, [r12+280h]
 * 00000001409F5A75: xor     ecx, ecx
 * 00000001409F5A77: call    KeGuardDispatchICall
 * 00000001409F5A7C: mov     rbx, rax
 * 00000001409F5A7F: test    rax, rax
 * 00000001409F5A82: jz      loc_1409F5B3D
 * 00000001409F5A88: mov     rax, [r12+290h]
 * 00000001409F5A90: lea     rdx, [rbp+0BE0h+var_6C0]
 * 00000001409F5A97: mov     rcx, rbx
 * 00000001409F5A9A: call    KeGuardDispatchICall
 * 00000001409F5A9F: mov     r14d, eax
 * 00000001409F5AA2: test    eax, eax
 * 00000001409F5AA4: jns     short loc_1409F5ABA
 * 00000001409F5AA6: mov     rax, [r12+288h]
 * 00000001409F5AAE: mov     rcx, rbx
 * 00000001409F5AB1: call    KeGuardDispatchICall
 * 00000001409F5AB6: xor     eax, eax
 * 00000001409F5AB8: jmp     short loc_1409F5B29
 * 00000001409F5ABA: mov     [r12+980h], rbx
 * 00000001409F5AC2: mov     rax, [r12+2B8h]
 * 00000001409F5ACA: call    KeGuardDispatchICall
 * 00000001409F5ACF: mov     rbx, rax
 * 00000001409F5AD2: mov     rax, [r12+2D8h]
 * 00000001409F5ADA: mov     rcx, rbx
 * 00000001409F5ADD: call    KeGuardDispatchICall
 * 00000001409F5AE2: mov     rdx, rax
 * 00000001409F5AE5: test    rax, rax
 * 00000001409F5AE8: jnz     short loc_1409F5AEF
 * 00000001409F5AEA: mov     ecx, r15d
 * 00000001409F5AED: jmp     short loc_1409F5B03
 * 00000001409F5AEF: mov     rax, [r12+2E8h]
 * 00000001409F5AF7: mov     rcx, rbx
 * 00000001409F5AFA: call    KeGuardDispatchICall
 * 00000001409F5AFF: xor     eax, eax
 * 00000001409F5B01: mov     ecx, eax
 * 00000001409F5B03: mov     eax, [r12+994h]
 * 00000001409F5B0B: and     eax, 0FFFFFFFBh
 * 00000001409F5B0E: or      eax, ecx
 * 00000001409F5B10: mov     [r12+994h], eax
 * 00000001409F5B18: add     dword ptr [r12+828h], 10000h
 * 00000001409F5B24: xor     eax, eax
 * 00000001409F5B26: mov     r14d, eax
 * 00000001409F5B29: test    r14d, r14d
 * 00000001409F5B2C: js      short loc_1409F5B3D
 * 00000001409F5B2E: mov     r13d, 1
 * 00000001409F5B34: mov     [rbp+0BE0h+var_C38], r13d
 * 00000001409F5B38: jmp     loc_1409F5EB6
 * 00000001409F5B3D: mov     r9d, 5
 * 00000001409F5B43: mov     r10, 2E8BA2E8BA2E8BA3h
 * 00000001409F5B4D: lea     r8d, [r9+1]
 * 00000001409F5B51: mov     eax, [r12+994h]
 * 00000001409F5B59: test    al, 8
 * 00000001409F5B5B: jz      loc_1409F5EAB
 * 00000001409F5B61: bt      eax, 0Ch
 * 00000001409F5B65: jb      loc_1409F5EAB
 * 00000001409F5B6B: rdtsc
 * 00000001409F5B6D: shl     rdx, 20h
 * 00000001409F5B71: mov     rbx, 7010008004002001h
 * 00000001409F5B7B: or      rax, rdx
 * 00000001409F5B7E: mov     rcx, rax
 * 00000001409F5B81: ror     rax, 3
 * 00000001409F5B85: xor     rcx, rax
 * 00000001409F5B88: mov     rax, rbx
 * 00000001409F5B8B: mul     rcx
 * 00000001409F5B8E: mov     [rbp+0BE0h+var_3A8], rdx
 * 00000001409F5B95: xor     dl, al
 * 00000001409F5B97: test    dl, 3
 * 00000001409F5B9A: jnz     loc_1409F5EAB
 * 00000001409F5BA0: rdtsc
 * 00000001409F5BA2: shl     rdx, 20h
 * 00000001409F5BA6: or      rax, rdx
 * 00000001409F5BA9: mov     rcx, rax
 * 00000001409F5BAC: ror     rax, 3
 * 00000001409F5BB0: xor     rcx, rax
 * 00000001409F5BB3: mov     rax, rbx
 * 00000001409F5BB6: mul     rcx
 * 00000001409F5BB9: mov     rcx, rdx
 * 00000001409F5BBC: mov     [rbp+0BE0h+var_3A0], rdx
 * 00000001409F5BC3: xor     rcx, rax
 * 00000001409F5BC6: mov     rax, r10
 * 00000001409F5BC9: mul     rcx
 * 00000001409F5BCC: shr     rdx, 1
 * 00000001409F5BCF: imul    rax, rdx, 0Bh
 * 00000001409F5BD3: sub     rcx, rax
 * 00000001409F5BD6: cmp     ecx, r9d
 * 00000001409F5BD9: ja      loc_1409F5C97
 * 00000001409F5BDF: jz      loc_1409F5C7D
 * 00000001409F5BE5: test    ecx, ecx
 * 00000001409F5BE7: jz      short loc_1409F5C63
 * 00000001409F5BE9: sub     ecx, 1
 * 00000001409F5BEC: jz      short loc_1409F5C4A
 * 00000001409F5BEE: sub     ecx, 1
 * 00000001409F5BF1: jz      short loc_1409F5C30
 * 00000001409F5BF3: cmp     ecx, 1
 * 00000001409F5BF6: jz      short loc_1409F5C12
 * 00000001409F5BF8: mov     [rbp+0BE0h+var_A50], 67076494h
 * 00000001409F5C02: mov     r9d, [rbp+0BE0h+var_A50]
 * 00000001409F5C09: rol     r9d, 4
 * 00000001409F5C0D: jmp     loc_1409F5DBC
 * 00000001409F5C12: mov     [rbp+0BE0h+var_A4C], 0A8223938h
 * 00000001409F5C1C: mov     r9d, [rbp+0BE0h+var_A4C]
 * 00000001409F5C23: xor     r9d, 3
 * 00000001409F5C27: ror     r9d, 0Fh
 * 00000001409F5C2B: jmp     loc_1409F5DBC
 * 00000001409F5C30: mov     [rbp+0BE0h+var_A48], 85B5910Dh
 * 00000001409F5C3A: mov     r9d, [rbp+0BE0h+var_A48]
 * 00000001409F5C41: ror     r9d, 2
 * 00000001409F5C45: jmp     loc_1409F5DBC
 * 00000001409F5C4A: mov     [rbp+0BE0h+var_A44], 0B2AD31A1h
 * 00000001409F5C54: mov     r9d, [rbp+0BE0h+var_A44]
 * 00000001409F5C5B: rol     r9d, 1
 * 00000001409F5C5E: jmp     loc_1409F5DBC
 * 00000001409F5C63: mov     [rbp+0BE0h+var_A40], 0D098D0D8h
 * 00000001409F5C6D: mov     r9d, [rbp+0BE0h+var_A40]
 * 00000001409F5C74: ror     r9d, 6
 * 00000001409F5C78: jmp     loc_1409F5DBC
 * 00000001409F5C7D: mov     [rbp+0BE0h+var_A3C], 288C49EDh
 * 00000001409F5C87: mov     r9d, [rbp+0BE0h+var_A3C]
 * 00000001409F5C8E: ror     r9d, 5
 * 00000001409F5C92: jmp     loc_1409F5DBC
 * 00000001409F5C97: sub     ecx, r8d
 * 00000001409F5C9A: jz      loc_1409F5DA4
 * 00000001409F5CA0: sub     ecx, 1
 * 00000001409F5CA3: jz      loc_1409F5D8D
 * 00000001409F5CA9: sub     ecx, 1
 * 00000001409F5CAC: jz      loc_1409F5D76
 * 00000001409F5CB2: cmp     ecx, 1
 * 00000001409F5CB5: jz      loc_1409F5D5B
 * 00000001409F5CBB: rdtsc
 * 00000001409F5CBD: shl     rdx, 20h
 * 00000001409F5CC1: or      rax, rdx
 * 00000001409F5CC4: mov     rcx, rax
 * 00000001409F5CC7: ror     rax, 3
 * 00000001409F5CCB: xor     rcx, rax
 * 00000001409F5CCE: mov     rax, rbx
 * 00000001409F5CD1: mul     rcx
 * 00000001409F5CD4: mov     r9, rax
 * 00000001409F5CD7: mov     [rbp+0BE0h+var_398], rdx
 * 00000001409F5CDE: xor     r9d, edx
 * 00000001409F5CE1: mov     eax, 4EC4EC4Fh
 * 00000001409F5CE6: mul     r9d
 * 00000001409F5CE9: mov     ecx, r9d
 * 00000001409F5CEC: shr     r9d, 5
 * 00000001409F5CF0: shr     edx, 3
 * 00000001409F5CF3: mov     r8d, r9d
 * 00000001409F5CF6: imul    eax, edx, 1Ah
 * 00000001409F5CF9: sub     ecx, eax
 * 00000001409F5CFB: mov     eax, 4EC4EC4Fh
 * 00000001409F5D00: mul     r9d
 * 00000001409F5D03: add     ecx, 61h ; 'a'
 * 00000001409F5D06: shr     r9d, 5
 * 00000001409F5D0A: shl     ecx, 8
 * 00000001409F5D0D: shr     edx, 3
 * 00000001409F5D10: imul    eax, edx, 1Ah
 * 00000001409F5D13: sub     r8d, eax
 * 00000001409F5D16: mov     eax, 4EC4EC4Fh
 * 00000001409F5D1B: mul     r9d
 * 00000001409F5D1E: add     r8d, 41h ; 'A'
 * 00000001409F5D22: or      r8d, ecx
 * 00000001409F5D25: shr     edx, 3
 * 00000001409F5D28: imul    eax, edx, 1Ah
 * 00000001409F5D2B: mov     ecx, r9d
 * 00000001409F5D2E: shr     r9d, 5
 * 00000001409F5D32: shl     r8d, 8
 * 00000001409F5D36: sub     ecx, eax
 * 00000001409F5D38: mov     eax, 4EC4EC4Fh
 * 00000001409F5D3D: mul     r9d
 * 00000001409F5D40: add     ecx, 61h ; 'a'
 * 00000001409F5D43: shr     edx, 3
 * 00000001409F5D46: or      ecx, r8d
 * 00000001409F5D49: imul    eax, edx, 1Ah
 * 00000001409F5D4C: shl     ecx, 8
 * 00000001409F5D4F: sub     r9d, eax
 * 00000001409F5D52: add     r9d, 41h ; 'A'
 * 00000001409F5D56: or      r9d, ecx
 * 00000001409F5D59: jmp     short loc_1409F5DBC
 * 00000001409F5D5B: mov     [rbp+0BE0h+var_A38], 0B0869E85h
 * 00000001409F5D65: mov     r9d, [rbp+0BE0h+var_A38]
 * 00000001409F5D6C: xor     r9d, 9
 * 00000001409F5D70: ror     r9d, 21h
 * 00000001409F5D74: jmp     short loc_1409F5DBC
 * 00000001409F5D76: mov     [rbp+0BE0h+var_A34], 64664142h
 * 00000001409F5D80: mov     r9d, [rbp+0BE0h+var_A34]
 * 00000001409F5D87: ror     r9d, 8
 * 00000001409F5D8B: jmp     short loc_1409F5DBC
 * 00000001409F5D8D: mov     [rbp+0BE0h+var_A30], 82C6A6D8h
 * 00000001409F5D97: mov     r9d, [rbp+0BE0h+var_A30]
 * 00000001409F5D9E: rol     r9d, 7
 * 00000001409F5DA2: jmp     short loc_1409F5DBC
 * 00000001409F5DA4: mov     [rbp+0BE0h+var_A2C], 4E574672h
 * 00000001409F5DAE: mov     r9d, [rbp+0BE0h+var_A2C]
 * 00000001409F5DB5: xor     r9d, r8d
 * 00000001409F5DB8: ror     r9d, 18h
 * 00000001409F5DBC: mov     rax, [r12+0F8h]
 * 00000001409F5DC4: mov     r8d, r9d
 * 00000001409F5DC7: mov     rdx, [r12+768h]
 * 00000001409F5DCF: mov     ecx, 200h
 * 00000001409F5DD4: call    KeGuardDispatchICall
 * 00000001409F5DD9: mov     r15, rax
 * 00000001409F5DDC: xor     eax, eax
 * 00000001409F5DDE: test    r15, r15
 * 00000001409F5DE1: jz      loc_1409F5EAD
 * 00000001409F5DE7: mov     rcx, [r12+6E8h]
 * 00000001409F5DEF: mov     rax, [r12+518h]
 * 00000001409F5DF7: mov     r14d, [rcx+rax]
 * 00000001409F5DFB: test    r14d, r14d
 * 00000001409F5DFE: jz      short loc_1409F5E2B
 * 00000001409F5E00: rdtsc
 * 00000001409F5E02: shl     rdx, 20h
 * 00000001409F5E06: or      rax, rdx
 * 00000001409F5E09: mov     rcx, rax
 * 00000001409F5E0C: ror     rax, 3
 * 00000001409F5E10: xor     rcx, rax
 * 00000001409F5E13: mov     rax, rbx
 * 00000001409F5E16: mul     rcx
 * 00000001409F5E19: mov     [rbp+0BE0h+var_390], rdx
 * 00000001409F5E20: xor     rax, rdx
 * 00000001409F5E23: xor     edx, edx
 * 00000001409F5E25: div     r14
 * 00000001409F5E28: mov     r14, rdx
 * 00000001409F5E2B: mov     rax, [r12+3B0h]
 * 00000001409F5E33: xor     ecx, ecx
 * 00000001409F5E35: call    KeGuardDispatchICall
 * 00000001409F5E3A: mov     rbx, rax
 * 00000001409F5E3D: test    rax, rax
 * 00000001409F5E40: jz      short loc_1409F5E9B
 * 00000001409F5E42: test    r14d, r14d
 * 00000001409F5E45: jz      short loc_1409F5E62
 * 00000001409F5E47: mov     rax, [r12+3B0h]
 * 00000001409F5E4F: mov     rcx, rbx
 * 00000001409F5E52: add     r14d, r13d
 * 00000001409F5E55: call    KeGuardDispatchICall
 * 00000001409F5E5A: mov     rbx, rax
 * 00000001409F5E5D: test    rax, rax
 * 00000001409F5E60: jnz     short loc_1409F5E42
 * 00000001409F5E62: mov     rsi, r12
 * 00000001409F5E65: test    rbx, rbx
 * 00000001409F5E68: jz      short loc_1409F5E9B
 * 00000001409F5E6A: mov     rax, [r12+3A0h]
 * 00000001409F5E72: mov     rcx, rbx
 * 00000001409F5E75: call    KeGuardDispatchICall
 * 00000001409F5E7A: test    eax, eax
 * 00000001409F5E7C: jns     short loc_1409F5E92
 * 00000001409F5E7E: mov     rax, [r12+3B8h]
 * 00000001409F5E86: mov     rcx, rbx
 * 00000001409F5E89: call    KeGuardDispatchICall
 * 00000001409F5E8E: xor     eax, eax
 * 00000001409F5E90: mov     ebx, eax
 * 00000001409F5E92: test    rbx, rbx
 * 00000001409F5E95: jnz     loc_1409F5F6C
 * 00000001409F5E9B: mov     rax, [r12+100h]
 * 00000001409F5EA3: mov     rcx, r15
 * 00000001409F5EA6: call    KeGuardDispatchICall
 * 00000001409F5EAB: xor     eax, eax
 * 00000001409F5EAD: mov     r13d, 1
 * 00000001409F5EB3: mov     [rbp+0BE0h+var_BC8], eax
 * 00000001409F5EB6: mov     [rbp+0BE0h+var_B10], rax
 * 00000001409F5EBD: mov     ecx, 4
 * 00000001409F5EC2: lea     rax, [rbp+0BE0h+var_B08]
 * 00000001409F5EC9: xor     r15d, r15d
 * 00000001409F5ECC: mov     r9d, 0FFFFFFFFh
 * 00000001409F5ED2: mov     [rax], r15b
 * 00000001409F5ED5: add     rax, r13
 * 00000001409F5ED8: add     ecx, r9d
 * 00000001409F5EDB: jnz     short loc_1409F5ED2
 * 00000001409F5EDD: mov     ecx, [r12+820h]
 * 00000001409F5EE5: mov     r11d, 19h
 * 00000001409F5EEB: mov     rdx, [rbp+0BE0h+arg_0]
 * 00000001409F5EF2: add     r12, 82Ch
 * 00000001409F5EF9: mov     [rbp+0BE0h+var_C08], r12
 * 00000001409F5EFD: mov     r14d, 8000h
 * 00000001409F5F03: mov     [rbp+0BE0h+var_C18], 0C000009Ah
 * 00000001409F5F0A: mov     eax, [r12]
 * 00000001409F5F0E: cmp     [rdx+828h], eax
 * 00000001409F5F14: jge     loc_140A0166C
 * 00000001409F5F1A: mov     rbx, [rbp+0BE0h+var_380]
 * 00000001409F5F21: lea     edx, [r11-18h]
 * 00000001409F5F25: mov     r14, [rbp+0BE0h+var_378]
 * 00000001409F5F2C: mov     r15d, [rbp+0BE0h+var_89C]
 * 00000001409F5F33: mov     r10d, [rbp+0BE0h+var_8D0]
 * 00000001409F5F3A: mov     [rbp+0BE0h+var_C30], rbx
 * 00000001409F5F3E: mov     [rbp+0BE0h+var_C40], r14
 * 00000001409F5F42: mov     [rbp+0BE0h+var_C28], r15d
 * 00000001409F5F46: mov     [rbp+0BE0h+var_BA0], r10d
 * 00000001409F5F4A: mov     eax, [rsi+990h]
 * 00000001409F5F50: mov     r8d, 110000h
 * 00000001409F5F56: and     eax, r8d
 * 00000001409F5F59: cmp     eax, r8d
 * 00000001409F5F5C: jz      loc_1409F60A8
 * 00000001409F5F62: xor     eax, eax
 * 00000001409F5F64: mov     dr7, rax
 * 00000001409F5F67: jmp     loc_1409F60AA
 * 00000001409F5F6C: mov     rax, [r12+438h]
 * 00000001409F5F74: lea     rdx, [rbp+0BE0h+var_6C0]
 * 00000001409F5F7B: mov     rcx, rbx
 * 00000001409F5F7E: call    KeGuardDispatchICall
 * 00000001409F5F83: mov     rax, [r12+1C0h]
 * 00000001409F5F8B: xor     r9d, r9d
 * 00000001409F5F8E: xor     r8d, r8d
 * 00000001409F5F91: mov     rdx, r15
 * 00000001409F5F94: mov     rcx, rbx
 * 00000001409F5F97: call    KeGuardDispatchICall
 * 00000001409F5F9C: rdtsc
 * 00000001409F5F9E: shl     rdx, 20h
 * 00000001409F5FA2: or      rax, rdx
 * 00000001409F5FA5: mov     rcx, rax
 * 00000001409F5FA8: ror     rax, 3
 * 00000001409F5FAC: xor     rcx, rax
 * 00000001409F5FAF: mov     rax, 7010008004002001h
 * 00000001409F5FB9: mul     rcx
 * 00000001409F5FBC: mov     rcx, r15
 * 00000001409F5FBF: mov     rbx, rdx
 * 00000001409F5FC2: mov     [rbp+0BE0h+var_388], rdx
 * 00000001409F5FC9: xor     rbx, rax
 * 00000001409F5FCC: mov     rax, [r12+1B8h]
 * 00000001409F5FD4: call    KeGuardDispatchICall
 * 00000001409F5FD9: mov     ecx, eax
 * 00000001409F5FDB: xor     edx, edx
 * 00000001409F5FDD: mov     rax, rbx
 * 00000001409F5FE0: div     rcx
 * 00000001409F5FE3: mov     rbx, rdx
 * 00000001409F5FE6: cli
 * 00000001409F5FE7: mov     rcx, gs:20h
 * 00000001409F5FF0: mov     rax, [r12+648h]
 * 00000001409F5FF8: mov     rcx, [rcx+rax]
 * 00000001409F5FFC: sti
 * 00000001409F5FFD: mov     rax, [r12+1C8h]
 * 00000001409F6005: lea     rdx, [rbp+0BE0h+var_6D0]
 * 00000001409F600C: call    KeGuardDispatchICall
 * 00000001409F6011: mov     rax, [r12+1A8h]
 * 00000001409F6019: lea     rcx, [rbp+0BE0h+var_240]
 * 00000001409F6020: mov     rdx, r15
 * 00000001409F6023: call    KeGuardDispatchICall
 * 00000001409F6028: jmp     short loc_1409F6031
 * 00000001409F602A: test    ebx, ebx
 * 00000001409F602C: jz      short loc_1409F6052
 * 00000001409F602E: add     ebx, r13d
 * 00000001409F6031: mov     rax, [r12+1B0h]
 * 00000001409F6039: lea     rdx, [rbp+0BE0h+var_240]
 * 00000001409F6040: lea     rcx, [rbp+0BE0h+var_B1C]
 * 00000001409F6047: call    KeGuardDispatchICall
 * 00000001409F604C: test    eax, eax
 * 00000001409F604E: jns     short loc_1409F602A
 * 00000001409F6050: jmp     short loc_1409F606C
 * 00000001409F6052: mov     rax, [r12+1A0h]
 * 00000001409F605A: lea     rcx, [rbp+0BE0h+var_6D0]
 * 00000001409F6061: mov     edx, [rbp+0BE0h+var_B1C]
 * 00000001409F6067: call    KeGuardDispatchICall
 * 00000001409F606C: mov     rax, [r12+1D0h]
 * 00000001409F6074: lea     rdx, [rbp+0BE0h+var_260]
 * 00000001409F607B: lea     rcx, [rbp+0BE0h+var_6D0]
 * 00000001409F6082: call    KeGuardDispatchICall
 * 00000001409F6087: mov     rax, [r12+100h]
 * 00000001409F608F: mov     rcx, r15
 * 00000001409F6092: call    KeGuardDispatchICall
 * 00000001409F6097: mov     r13d, 1
 * 00000001409F609D: xor     eax, eax
 * 00000001409F609F: mov     [rbp+0BE0h+var_BC8], r13d
 * 00000001409F60A3: jmp     loc_1409F5EB6
 * 00000001409F60A8: xor     eax, eax
 * 00000001409F60AA: cmp     ecx, [rsi+80Ch]
 * 00000001409F60B0: jnz     short loc_1409F60E8
 * 00000001409F60B2: add     [rsi+830h], edx
 * 00000001409F60B8: mov     ecx, eax
 * 00000001409F60BA: cmp     dword ptr [rsi+958h], 0Bh
 * 00000001409F60C1: jnz     short loc_1409F60E8
 * 00000001409F60C3: mov     eax, [rsi+990h]
 * 00000001409F60C9: test    dl, al
 * 00000001409F60CB: jnz     short loc_1409F60E8
 * 00000001409F60CD: cmp     [rsi+970h], r9d
 * 00000001409F60D4: jnz     short loc_1409F60E0
 * 00000001409F60D6: xor     eax, eax
 * 00000001409F60D8: mov     [rsi+970h], eax
 * 00000001409F60DE: jmp     short loc_1409F60E8
 * 00000001409F60E0: or      eax, edx
 * 00000001409F60E2: mov     [rsi+990h], eax
 * 00000001409F60E8: mov     rax, [rsi+0A78h]
 * 00000001409F60EF: mov     r9, rsi
 * 00000001409F60F2: test    rax, rax
 * 00000001409F60F5: mov     [rbp+0BE0h+var_BE8], ecx
 * 00000001409F60F8: cmovnz  r9, rax
 * 00000001409F60FC: xor     eax, eax
 * 00000001409F60FE: mov     r8d, eax
 * 00000001409F6101: mov     r13d, [r9+808h]
 * 00000001409F6108: add     r13, r9
 * 00000001409F610B: mov     [rsp+0CE0h+var_C90], r13
 * 00000001409F6110: cmp     dword ptr [rbp+0BE0h+var_B10], eax
 * 00000001409F6116: jz      short loc_1409F6136
 * 00000001409F6118: cmp     dword ptr [rbp+0BE0h+var_B10+4], ecx
 * 00000001409F611E: ja      short loc_1409F6136
 * 00000001409F6120: mov     r13d, [rbp+0BE0h+var_B08]
 * 00000001409F6127: mov     r8d, dword ptr [rbp+0BE0h+var_B10+4]
 * 00000001409F612E: add     r13, r9
 * 00000001409F6131: mov     [rsp+0CE0h+var_C90], r13
 * 00000001409F6136: mov     edx, 1
 * 00000001409F613B: cmp     r8d, ecx
 * 00000001409F613E: jz      loc_1409F626F
 * 00000001409F6144: sub     ecx, r8d
 * 00000001409F6147: lea     ebx, [rdx+1]
 * 00000001409F614A: mov     r10d, ecx
 * 00000001409F614D: lea     r14d, [rdx+0Bh]
 * 00000001409F6151: add     r8d, ecx
 * 00000001409F6154: mov     rsi, 0AAAAAAAAAAAAAAABh
 * 00000001409F615E: mov     ecx, [r13+0]
 * 00000001409F6162: cmp     ecx, r14d
 * 00000001409F6165: jg      short loc_1409F61AA
 * 00000001409F6167: jz      short loc_1409F61C7
 * 00000001409F6169: sub     ecx, 1
 * 00000001409F616C: jz      short loc_1409F61C7
 * 00000001409F616E: sub     ecx, 6
 * 00000001409F6171: jz      short loc_1409F6199
 * 00000001409F6173: sub     ecx, 1
 * 00000001409F6176: jz      short loc_1409F618F
 * 00000001409F6178: cmp     ecx, ebx
 * 00000001409F617A: jnz     loc_1409F620B
 * 00000001409F6180: mov     eax, [r13+1Ch]
 * 00000001409F6184: add     eax, 3
 * 00000001409F6187: shl     eax, 4
 * 00000001409F618A: jmp     loc_1409F6249
 * 00000001409F618F: movzx   eax, word ptr [r13+20h]
 * 00000001409F6194: jmp     loc_1409F6243
 * 00000001409F6199: mov     eax, [r13+18h]
 * 00000001409F619D: add     eax, ebx
 * 00000001409F619F: lea     eax, [rax+rax*2]
 * 00000001409F61A2: shl     eax, 3
 * 00000001409F61A5: jmp     loc_1409F6249
 * 00000001409F61AA: cmp     ecx, 1Ch
 * 00000001409F61AD: jz      loc_1409F623E
 * 00000001409F61B3: cmp     ecx, 1Eh
 * 00000001409F61B6: jz      short loc_1409F6212
 * 00000001409F61B8: cmp     ecx, 20h ; ' '
 * 00000001409F61BB: jle     short loc_1409F620B
 * 00000001409F61BD: cmp     ecx, 22h ; '"'
 * 00000001409F61C0: jle     short loc_1409F61E3
 * 00000001409F61C2: cmp     ecx, 2Bh ; '+'
 * 00000001409F61C5: jnz     short loc_1409F620B
 * 00000001409F61C7: mov     ecx, [r13+10h]
 * 00000001409F61CB: mov     rax, rsi
 * 00000001409F61CE: mul     rcx
 * 00000001409F61D1: shr     rdx, 3
 * 00000001409F61D5: lea     eax, ds:30h[rdx*4]
 * 00000001409F61DC: mov     edx, 1
 * 00000001409F61E1: jmp     short loc_1409F6249
 * 00000001409F61E3: mov     ecx, [r13+20h]
 * 00000001409F61E7: mov     edx, [r13+28h]
 * 00000001409F61EB: and     ecx, 0FFFh
 * 00000001409F61F1: add     rdx, 0FFFh
 * 00000001409F61F8: add     rdx, rcx
 * 00000001409F61FB: shr     rdx, 0Ch
 * 00000001409F61FF: lea     eax, [rdx+rdx*4]
 * 00000001409F6202: lea     eax, ds:30h[rax*4]
 * 00000001409F6209: jmp     short loc_1409F61DC
 * 00000001409F620B: mov     eax, 30h ; '0'
 * 00000001409F6210: jmp     short loc_1409F6249
 * 00000001409F6212: mov     eax, [r13+24h]
 * 00000001409F6216: lea     ecx, [rax-1]
 * 00000001409F6219: neg     eax
 * 00000001409F621B: sbb     eax, eax
 * 00000001409F621D: and     ecx, eax
 * 00000001409F621F: mov     rax, rsi
 * 00000001409F6222: mul     rcx
 * 00000001409F6225: movzx   eax, word ptr [r13+28h]
 * 00000001409F622A: shr     rdx, 3
 * 00000001409F622E: add     edx, 7
 * 00000001409F6231: and     edx, 0FFFFFFF8h
 * 00000001409F6234: add     eax, ebx
 * 00000001409F6236: lea     eax, [rax+rax*2]
 * 00000001409F6239: lea     eax, [rdx+rax*8]
 * 00000001409F623C: jmp     short loc_1409F61DC
 * 00000001409F623E: movzx   eax, word ptr [r13+28h]
 * 00000001409F6243: add     eax, 37h ; '7'
 * 00000001409F6246: and     eax, 0FFFFFFF8h
 * 00000001409F6249: add     r13, rax
 * 00000001409F624C: sub     r10, rdx
 * 00000001409F624F: jnz     loc_1409F615E
 * 00000001409F6255: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F625A: mov     r12, [rbp+0BE0h+var_C08]
 * 00000001409F625E: mov     rbx, [rbp+0BE0h+var_C30]
 * 00000001409F6262: mov     r14, [rbp+0BE0h+var_C40]
 * 00000001409F6266: mov     r15d, [rbp+0BE0h+var_C28]
 * 00000001409F626A: mov     [rsp+0CE0h+var_C90], r13
 * 00000001409F626F: mov     eax, r13d
 * 00000001409F6272: mov     dword ptr [rbp+0BE0h+var_B10], edx
 * 00000001409F6278: sub     eax, r9d
 * 00000001409F627B: mov     dword ptr [rbp+0BE0h+var_B10+4], r8d
 * 00000001409F6282: mov     [rbp+0BE0h+var_B08], eax
 * 00000001409F6288: mov     r10d, [r13+0]
 * 00000001409F628C: mov     dword ptr [rbp+0BE0h+arg_8], r10d
 * 00000001409F6293: cmp     r10d, 1Ch
 * 00000001409F6297: jg      loc_1409FBA01
 * 00000001409F629D: jz      loc_1409FAFCE
 * 00000001409F62A3: mov     r8d, 0Ch
 * 00000001409F62A9: cmp     r10d, r8d
 * 00000001409F62AC: jg      loc_1409F7844
 * 00000001409F62B2: jz      loc_1409FF549
 * 00000001409F62B8: xor     eax, eax
 * 00000001409F62BA: mov     ecx, r10d
 * 00000001409F62BD: test    r10d, r10d
 * 00000001409F62C0: jz      loc_1409F761F
 * 00000001409F62C6: sub     ecx, 1
 * 00000001409F62C9: jz      loc_1409FF54B
 * 00000001409F62CF: sub     ecx, 3
 * 00000001409F62D2: jz      loc_1409F738A
 * 00000001409F62D8: sub     ecx, 1
 * 00000001409F62DB: jz      loc_1409F7054
 * 00000001409F62E1: lea     r14d, [r8-0Ah]
 * 00000001409F62E5: sub     ecx, r14d
 * 00000001409F62E8: jz      loc_1409F6EE4
 * 00000001409F62EE: sub     ecx, 1
 * 00000001409F62F1: jz      loc_1409F6A98
 * 00000001409F62F7: sub     ecx, r14d
 * 00000001409F62FA: jz      loc_1409F6701
 * 00000001409F6300: cmp     ecx, 1
 * 00000001409F6303: jnz     loc_140A00767
 * 00000001409F6309: cmp     [rsi+980h], rax
 * 00000001409F6310: jnz     short loc_1409F637B
 * 00000001409F6312: mov     [rsi+824h], eax
 * 00000001409F6318: xor     r15d, r15d
 * 00000001409F631B: mov     r14d, 8000h
 * 00000001409F6321: mov     edx, [rbp+0BE0h+var_BE8]
 * 00000001409F6324: cmp     dword ptr [rsi+824h], 0
 * 00000001409F632B: lea     ecx, [rdx-1]
 * 00000001409F632E: cmovz   ecx, edx
 * 00000001409F6331: mov     edx, 1
 * 00000001409F6336: add     ecx, edx
 * 00000001409F6338: cmp     [rsi+8F8h], r15d
 * 00000001409F633F: jnz     loc_140A01669
 * 00000001409F6345: lea     r12, [rsi+82Ch]
 * 00000001409F634C: mov     eax, [r12]
 * 00000001409F6350: mov     [rbp+0BE0h+var_C08], r12
 * 00000001409F6354: cmp     [rsi+828h], eax
 * 00000001409F635A: jge     loc_140A01669
 * 00000001409F6360: mov     rbx, [rbp+0BE0h+var_C30]
 * 00000001409F6364: lea     r11d, [rdx+18h]
 * 00000001409F6368: mov     r14, [rbp+0BE0h+var_C40]
 * 00000001409F636C: mov     r9d, 0FFFFFFFFh
 * 00000001409F6372: mov     r15d, [rbp+0BE0h+var_C28]
 * 00000001409F6376: jmp     loc_1409F5F4A
 * 00000001409F637B: cmp     [rsi+824h], eax
 * 00000001409F6381: jnz     short loc_1409F63D9
 * 00000001409F6383: mov     eax, [rsi+994h]
 * 00000001409F6389: mov     ecx, eax
 * 00000001409F638B: shl     ecx, 3
 * 00000001409F638E: xor     ecx, eax
 * 00000001409F6390: and     ecx, 20h
 * 00000001409F6393: xor     ecx, eax
 * 00000001409F6395: mov     [rsi+994h], ecx
 * 00000001409F639B: test    cl, 4
 * 00000001409F639E: jz      loc_1409F6489
 * 00000001409F63A4: mov     r14d, [r13+8]
 * 00000001409F63A8: mov     ecx, [r13+10h]
 * 00000001409F63AC: and     r14d, 0FFFh
 * 00000001409F63B3: mov     rbx, [r13+8]
 * 00000001409F63B7: add     r14, 0FFFh
 * 00000001409F63BE: add     r14, rcx
 * 00000001409F63C1: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001409F63C8: shr     r14, 0Ch
 * 00000001409F63CC: test    r14, r14
 * 00000001409F63CF: jz      loc_1409F6318
 * 00000001409F63D5: xor     edi, edi
 * 00000001409F63D7: jmp     short loc_1409F63F6
 * 00000001409F63D9: mov     ecx, [rsi+994h]
 * 00000001409F63DF: mov     eax, ecx
 * 00000001409F63E1: shr     eax, 3
 * 00000001409F63E4: xor     eax, ecx
 * 00000001409F63E6: test    al, 4
 * 00000001409F63E8: jz      short loc_1409F639B
 * 00000001409F63EA: xor     eax, eax
 * 00000001409F63EC: jmp     loc_1409F6312
 * 00000001409F63F1: mov     edx, 1
 * 00000001409F63F6: mov     rax, [rsi+2B0h]
 * 00000001409F63FD: mov     rcx, rbx
 * 00000001409F6400: sub     r14, rdx
 * 00000001409F6403: call    KeGuardDispatchICall
 * 00000001409F6408: test    al, al
 * 00000001409F640A: jz      short loc_1409F6463
 * 00000001409F640C: cmp     [rsi+8F8h], edi
 * 00000001409F6412: jnz     short loc_1409F6463
 * 00000001409F6414: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F641E: xor     edx, edx
 * 00000001409F6420: add     rax, rsi
 * 00000001409F6423: mov     rcx, rsi
 * 00000001409F6426: mov     [rsi+900h], rax
 * 00000001409F642D: mov     rax, 0B3B74BDEE4453415h
 * 00000001409F6437: add     rax, r13
 * 00000001409F643A: mov     [rsi+908h], rax
 * 00000001409F6441: movsxd  rax, dword ptr [r13+0]
 * 00000001409F6445: mov     [rsi+910h], rax
 * 00000001409F644C: mov     eax, 1
 * 00000001409F6451: mov     [rsi+918h], rbx
 * 00000001409F6458: mov     [rsi+8F8h], eax
 * 00000001409F645E: call    $$b8
 * 00000001409F6463: add     dword ptr [rsi+828h], 100h
 * 00000001409F646D: add     rbx, 1000h
 * 00000001409F6474: test    r14, r14
 * 00000001409F6477: jnz     loc_1409F63F1
 * 00000001409F647D: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F6484: jmp     loc_1409F6318
 * 00000001409F6489: mov     r14, [r13+8]
 * 00000001409F648D: mov     r8d, [r13+10h]
 * 00000001409F6491: mov     r9, r14
 * 00000001409F6494: add     [rsi+828h], r8d
 * 00000001409F649B: mov     rax, r14
 * 00000001409F649E: mov     r10d, [rsi+814h]
 * 00000001409F64A5: mov     r15, [rsi+818h]
 * 00000001409F64AC: lea     rcx, [r14+r8]
 * 00000001409F64B0: cmp     r14, rcx
 * 00000001409F64B3: jnb     short loc_1409F64C5
 * 00000001409F64B5: mov     edx, 40h ; '@'
 * 00000001409F64BA: prefetchnta byte ptr [rax]
 * 00000001409F64BD: add     rax, rdx
 * 00000001409F64C0: cmp     rax, rcx
 * 00000001409F64C3: jb      short loc_1409F64BA
 * 00000001409F64C5: mov     r11d, r8d
 * 00000001409F64C8: mov     rbx, r15
 * 00000001409F64CB: shr     r11d, 7
 * 00000001409F64CF: mov     r12d, 1
 * 00000001409F64D5: test    r11d, r11d
 * 00000001409F64D8: jz      short loc_1409F6545
 * 00000001409F64DA: mov     rsi, 7010008004002001h
 * 00000001409F64E4: mov     edx, 8
 * 00000001409F64E9: mov     rax, [r9]
 * 00000001409F64EC: mov     ecx, r10d
 * 00000001409F64EF: xor     rax, rbx
 * 00000001409F64F2: mov     rbx, [r9+8]
 * 00000001409F64F6: rol     rax, cl
 * 00000001409F64F9: add     r9, 10h
 * 00000001409F64FD: xor     rbx, rax
 * 00000001409F6500: rol     rbx, cl
 * 00000001409F6503: sub     rdx, r12
 * 00000001409F6506: jnz     short loc_1409F64E9
 * 00000001409F6508: mov     rcx, r9
 * 00000001409F650B: sub     rcx, r14
 * 00000001409F650E: xor     rcx, r15
 * 00000001409F6511: mov     rax, rcx
 * 00000001409F6514: rol     rax, 11h
 * 00000001409F6518: xor     rcx, rax
 * 00000001409F651B: mov     rax, rsi
 * 00000001409F651E: mul     rcx
 * 00000001409F6521: xor     r10d, eax
 * 00000001409F6524: mov     [rbp+0BE0h+var_370], rdx
 * 00000001409F652B: xor     r10d, edx
 * 00000001409F652E: mov     eax, 0FFFFFFFFh
 * 00000001409F6533: and     r10d, 3Fh
 * 00000001409F6537: cmovz   r10d, r12d
 * 00000001409F653B: add     r11d, eax
 * 00000001409F653E: jnz     short loc_1409F64E4
 * 00000001409F6540: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F6545: and     r8d, 7Fh
 * 00000001409F6549: cmp     r8d, 8
 * 00000001409F654D: jb      short loc_1409F656C
 * 00000001409F654F: mov     edx, r8d
 * 00000001409F6552: shr     rdx, 3
 * 00000001409F6556: xor     rbx, [r9]
 * 00000001409F6559: mov     ecx, r10d
 * 00000001409F655C: rol     rbx, cl
 * 00000001409F655F: add     r9, 8
 * 00000001409F6563: add     r8d, 0FFFFFFF8h
 * 00000001409F6567: sub     rdx, r12
 * 00000001409F656A: jnz     short loc_1409F6556
 * 00000001409F656C: test    r8d, r8d
 * 00000001409F656F: jz      short loc_1409F6590
 * 00000001409F6571: mov     esi, 0FFFFFFFFh
 * 00000001409F6576: movzx   eax, byte ptr [r9]
 * 00000001409F657A: mov     ecx, r10d
 * 00000001409F657D: xor     rbx, rax
 * 00000001409F6580: add     r9, r12
 * 00000001409F6583: rol     rbx, cl
 * 00000001409F6586: add     r8d, esi
 * 00000001409F6589: jnz     short loc_1409F6576
 * 00000001409F658B: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F6590: mov     rax, rbx
 * 00000001409F6593: shr     rax, 1Fh
 * 00000001409F6597: xor     r15d, r15d
 * 00000001409F659A: jmp     short loc_1409F65A2
 * 00000001409F659C: xor     ebx, eax
 * 00000001409F659E: shr     rax, 1Fh
 * 00000001409F65A2: test    rax, rax
 * 00000001409F65A5: jnz     short loc_1409F659C
 * 00000001409F65A7: mov     edx, [r13+14h]
 * 00000001409F65AB: btr     ebx, 1Fh
 * 00000001409F65AF: cmp     ebx, edx
 * 00000001409F65B1: jz      loc_1409F631B
 * 00000001409F65B7: mov     ecx, [r13+10h]
 * 00000001409F65BB: mov     r8, [r13+8]
 * 00000001409F65BF: test    rcx, rcx
 * 00000001409F65C2: jz      loc_1409F667C
 * 00000001409F65C8: mov     eax, [rsi+994h]
 * 00000001409F65CE: mov     r9d, 40h ; '@'
 * 00000001409F65D4: test    r9b, al
 * 00000001409F65D7: jz      loc_1409F667C
 * 00000001409F65DD: mov     r12, cr8
 * 00000001409F65E1: lea     eax, [r9-3Eh]
 * 00000001409F65E5: mov     cr8, rax
 * 00000001409F65E9: mov     r14, r8
 * 00000001409F65EC: lea     rax, [rcx-1]
 * 00000001409F65F0: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409F65F7: add     rax, r8
 * 00000001409F65FA: or      rax, 0FFFh
 * 00000001409F6600: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409F6607: lea     r13, [r14-1]
 * 00000001409F660B: movzx   r15d, r12b
 * 00000001409F660F: mov     rax, [rsi+468h]
 * 00000001409F6616: xor     edx, edx
 * 00000001409F6618: mov     rcx, r14
 * 00000001409F661B: call    KeGuardDispatchICall
 * 00000001409F6620: cmp     eax, 0C000022Dh
 * 00000001409F6625: jnz     short loc_1409F664B
 * 00000001409F6627: mov     eax, 1
 * 00000001409F662C: cmp     r12b, al
 * 00000001409F662F: ja      short loc_1409F664F
 * 00000001409F6631: movzx   r15d, r12b
 * 00000001409F6635: mov     cr8, r15
 * 00000001409F6639: mov     al, [r14]
 * 00000001409F663C: mov     rax, cr8
 * 00000001409F6640: mov     eax, 2
 * 00000001409F6645: mov     cr8, rax
 * 00000001409F6649: jmp     short loc_1409F660F
 * 00000001409F664B: test    eax, eax
 * 00000001409F664D: js      short loc_1409F666F
 * 00000001409F664F: add     r14, 1000h
 * 00000001409F6656: add     r13, 1000h
 * 00000001409F665D: cmp     r13, [rbp+0BE0h+arg_8]
 * 00000001409F6664: jnz     short loc_1409F660B
 * 00000001409F6666: mov     cr8, r15
 * 00000001409F666A: jmp     loc_1409F6318
 * 00000001409F666F: mov     cr8, r15
 * 00000001409F6673: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409F6678: mov     edx, [r13+14h]
 * 00000001409F667C: mov     eax, [rsi+8F8h]
 * 00000001409F6682: xor     r15d, r15d
 * 00000001409F6685: test    eax, eax
 * 00000001409F6687: jnz     short loc_1409F66A1
 * 00000001409F6689: mov     ecx, ebx
 * 00000001409F668B: mov     eax, edx
 * 00000001409F668D: xor     rcx, rax
 * 00000001409F6690: mov     rax, [rsi+590h]
 * 00000001409F6697: mov     [rax+18h], rcx
 * 00000001409F669B: mov     eax, [rsi+8F8h]
 * 00000001409F66A1: mov     rcx, [r13+8]
 * 00000001409F66A5: test    eax, eax
 * 00000001409F66A7: jnz     loc_1409F631B
 * 00000001409F66AD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F66B7: add     rax, rsi
 * 00000001409F66BA: mov     [rsi+900h], rax
 * 00000001409F66C1: mov     rax, 0B3B74BDEE4453415h
 * 00000001409F66CB: add     rax, r13
 * 00000001409F66CE: mov     [rsi+908h], rax
 * 00000001409F66D5: movsxd  rax, dword ptr [r13+0]
 * 00000001409F66D9: mov     [rsi+910h], rax
 * 00000001409F66E0: mov     [rsi+918h], rcx
 * 00000001409F66E7: mov     eax, 1
 * 00000001409F66EC: mov     [rsi+8F8h], eax
 * 00000001409F66F2: xor     edx, edx
 * 00000001409F66F4: mov     rcx, rsi
 * 00000001409F66F7: call    $$b8
 * 00000001409F66FC: jmp     loc_1409F631B
 * 00000001409F6701: cmp     [r13+18h], eax
 * 00000001409F6705: jz      short loc_1409F6748
 * 00000001409F6707: cmp     [rsi+980h], rax
 * 00000001409F670E: jz      loc_1409F68B9
 * 00000001409F6714: mov     ecx, [rsi+994h]
 * 00000001409F671A: test    cl, 4
 * 00000001409F671D: jnz     loc_1409F68B9
 * 00000001409F6723: lea     rax, [rsi+824h]
 * 00000001409F672A: xor     r15d, r15d
 * 00000001409F672D: cmp     [rax], r15d
 * 00000001409F6730: jnz     loc_1409F68A8
 * 00000001409F6736: mov     eax, ecx
 * 00000001409F6738: shl     eax, 3
 * 00000001409F673B: xor     eax, ecx
 * 00000001409F673D: and     eax, 20h
 * 00000001409F6740: xor     eax, ecx
 * 00000001409F6742: mov     [rsi+994h], eax
 * 00000001409F6748: mov     edx, [r13+1Ch]
 * 00000001409F674C: lea     rax, [rsi+824h]
 * 00000001409F6753: mov     r14d, [rax]
 * 00000001409F6756: lea     rcx, [r13+30h]
 * 00000001409F675A: shl     r14, 4
 * 00000001409F675E: add     r14, rcx
 * 00000001409F6761: shl     rdx, 4
 * 00000001409F6765: add     rdx, rcx
 * 00000001409F6768: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409F676C: mov     [rbp+0BE0h+arg_8], rdx
 * 00000001409F6773: mov     [rsp+0CE0h+var_C88], r14
 * 00000001409F6778: xor     eax, eax
 * 00000001409F677A: cmp     [r14], eax
 * 00000001409F677D: jl      loc_1409F69A4
 * 00000001409F6783: mov     rdi, [r14+8]
 * 00000001409F6787: mov     r8d, [r14+4]
 * 00000001409F678B: mov     r9, rdi
 * 00000001409F678E: add     [rsi+828h], r8d
 * 00000001409F6795: mov     rax, rdi
 * 00000001409F6798: mov     r11d, [rsi+814h]
 * 00000001409F679F: mov     r12d, r8d
 * 00000001409F67A2: mov     r15, [rsi+818h]
 * 00000001409F67A9: lea     rcx, [rdi+r8]
 * 00000001409F67AD: cmp     rdi, rcx
 * 00000001409F67B0: jnb     short loc_1409F67C3
 * 00000001409F67B2: mov     r10d, 40h ; '@'
 * 00000001409F67B8: prefetchnta byte ptr [rax]
 * 00000001409F67BB: add     rax, r10
 * 00000001409F67BE: cmp     rax, rcx
 * 00000001409F67C1: jb      short loc_1409F67B8
 * 00000001409F67C3: mov     r10d, r8d
 * 00000001409F67C6: mov     rbx, r15
 * 00000001409F67C9: shr     r10d, 7
 * 00000001409F67CD: test    r10d, r10d
 * 00000001409F67D0: jz      short loc_1409F684B
 * 00000001409F67D2: mov     esi, 1
 * 00000001409F67D7: mov     r12d, 0FFFFFFFFh
 * 00000001409F67DD: mov     r14, 7010008004002001h
 * 00000001409F67E7: mov     eax, 8
 * 00000001409F67EC: xor     rbx, [r9]
 * 00000001409F67EF: mov     ecx, r11d
 * 00000001409F67F2: rol     rbx, cl
 * 00000001409F67F5: xor     rbx, [r9+8]
 * 00000001409F67F9: add     r9, 10h
 * 00000001409F67FD: rol     rbx, cl
 * 00000001409F6800: sub     rax, rsi
 * 00000001409F6803: jnz     short loc_1409F67EC
 * 00000001409F6805: mov     rcx, r9
 * 00000001409F6808: sub     rcx, rdi
 * 00000001409F680B: xor     rcx, r15
 * 00000001409F680E: mov     rax, rcx
 * 00000001409F6811: rol     rax, 11h
 * 00000001409F6815: xor     rcx, rax
 * 00000001409F6818: mov     rax, r14
 * 00000001409F681B: mul     rcx
 * 00000001409F681E: xor     eax, edx
 * 00000001409F6820: mov     [rbp+0BE0h+var_368], rdx
 * 00000001409F6827: xor     r11d, eax
 * 00000001409F682A: and     r11d, 3Fh
 * 00000001409F682E: cmovz   r11d, esi
 * 00000001409F6832: add     r10d, r12d
 * 00000001409F6835: jnz     short loc_1409F67E7
 * 00000001409F6837: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F683C: mov     r12, r8
 * 00000001409F683F: mov     r14, [rsp+0CE0h+var_C88]
 * 00000001409F6844: mov     rdx, [rbp+0BE0h+arg_8]
 * 00000001409F684B: and     r8d, 7Fh
 * 00000001409F684F: mov     r10d, 1
 * 00000001409F6855: cmp     r8d, 8
 * 00000001409F6859: jb      short loc_1409F6878
 * 00000001409F685B: mov     eax, r8d
 * 00000001409F685E: shr     rax, 3
 * 00000001409F6862: xor     rbx, [r9]
 * 00000001409F6865: mov     ecx, r11d
 * 00000001409F6868: rol     rbx, cl
 * 00000001409F686B: add     r9, 8
 * 00000001409F686F: add     r8d, 0FFFFFFF8h
 * 00000001409F6873: sub     rax, r10
 * 00000001409F6876: jnz     short loc_1409F6862
 * 00000001409F6878: test    r8d, r8d
 * 00000001409F687B: jz      short loc_1409F689C
 * 00000001409F687D: mov     esi, 0FFFFFFFFh
 * 00000001409F6882: movzx   eax, byte ptr [r9]
 * 00000001409F6886: mov     ecx, r11d
 * 00000001409F6889: xor     rbx, rax
 * 00000001409F688C: add     r9, r10
 * 00000001409F688F: rol     rbx, cl
 * 00000001409F6892: add     r8d, esi
 * 00000001409F6895: jnz     short loc_1409F6882
 * 00000001409F6897: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F689C: mov     rax, rbx
 * 00000001409F689F: shr     rax, 1Fh
 * 00000001409F68A3: xor     r15d, r15d
 * 00000001409F68A6: jmp     short loc_1409F68D1
 * 00000001409F68A8: test    cl, 20h
 * 00000001409F68AB: jz      loc_1409F6748
 * 00000001409F68B1: mov     r14d, r15d
 * 00000001409F68B4: jmp     loc_1409F6A90
 * 00000001409F68B9: mov     r14d, eax
 * 00000001409F68BC: xor     r15d, r15d
 * 00000001409F68BF: lea     rax, [rsi+824h]
 * 00000001409F68C6: jmp     loc_1409F6A90
 * 00000001409F68CB: xor     ebx, eax
 * 00000001409F68CD: shr     rax, 1Fh
 * 00000001409F68D1: test    rax, rax
 * 00000001409F68D4: jnz     short loc_1409F68CB
 * 00000001409F68D6: mov     ecx, [r14]
 * 00000001409F68D9: btr     ebx, 1Fh
 * 00000001409F68DD: mov     eax, ecx
 * 00000001409F68DF: btr     eax, 1Fh
 * 00000001409F68E3: cmp     ebx, eax
 * 00000001409F68E5: jz      loc_1409F6A73
 * 00000001409F68EB: test    r12, r12
 * 00000001409F68EE: jz      loc_1409F69F3
 * 00000001409F68F4: mov     eax, [rsi+994h]
 * 00000001409F68FA: mov     edx, 40h ; '@'
 * 00000001409F68FF: test    dl, al
 * 00000001409F6901: jz      loc_1409F69F3
 * 00000001409F6907: mov     r13, cr8
 * 00000001409F690B: lea     eax, [rdx-3Eh]
 * 00000001409F690E: mov     cr8, rax
 * 00000001409F6912: mov     r15, rdi
 * 00000001409F6915: lea     rax, [rdi-1]
 * 00000001409F6919: and     r15, 0FFFFFFFFFFFFF000h
 * 00000001409F6920: add     rax, r12
 * 00000001409F6923: or      rax, 0FFFh
 * 00000001409F6929: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409F692D: lea     rax, [r15-1]
 * 00000001409F6931: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409F6936: movzx   r12d, r13b
 * 00000001409F693A: mov     rax, [rsi+468h]
 * 00000001409F6941: xor     edx, edx
 * 00000001409F6943: mov     rcx, r15
 * 00000001409F6946: call    KeGuardDispatchICall
 * 00000001409F694B: cmp     eax, 0C000022Dh
 * 00000001409F6950: jnz     short loc_1409F6976
 * 00000001409F6952: mov     eax, 1
 * 00000001409F6957: cmp     r13b, al
 * 00000001409F695A: ja      short loc_1409F697A
 * 00000001409F695C: movzx   r12d, r13b
 * 00000001409F6960: mov     cr8, r12
 * 00000001409F6964: mov     al, [r15]
 * 00000001409F6967: mov     rax, cr8
 * 00000001409F696B: mov     eax, 2
 * 00000001409F6970: mov     cr8, rax
 * 00000001409F6974: jmp     short loc_1409F693A
 * 00000001409F6976: test    eax, eax
 * 00000001409F6978: js      short loc_1409F69E7
 * 00000001409F697A: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409F697F: mov     ecx, 1000h
 * 00000001409F6984: add     rax, rcx
 * 00000001409F6987: add     r15, rcx
 * 00000001409F698A: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409F698F: cmp     rax, [rbp+0BE0h+var_C50]
 * 00000001409F6993: jnz     short loc_1409F6936
 * 00000001409F6995: mov     cr8, r12
 * 00000001409F6999: mov     rdx, [rbp+0BE0h+arg_8]
 * 00000001409F69A0: mov     r12, [rbp+0BE0h+var_C08]
 * 00000001409F69A4: xor     r15d, r15d
 * 00000001409F69A7: add     r14, 10h
 * 00000001409F69AB: mov     [rsp+0CE0h+var_C88], r14
 * 00000001409F69B0: cmp     r14, rdx
 * 00000001409F69B3: jnb     short loc_1409F69CD
 * 00000001409F69B5: mov     eax, [r12]
 * 00000001409F69B9: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409F69BE: cmp     [rsi+828h], eax
 * 00000001409F69C4: jl      loc_1409F6778
 * 00000001409F69CA: cmp     r14, rdx
 * 00000001409F69CD: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F69D4: jnz     loc_1409F6A7C
 * 00000001409F69DA: xor     eax, eax
 * 00000001409F69DC: mov     r14d, eax
 * 00000001409F69DF: xor     r15d, r15d
 * 00000001409F69E2: jmp     loc_1409F6A8C
 * 00000001409F69E7: mov     cr8, r12
 * 00000001409F69EB: mov     ecx, [r14]
 * 00000001409F69EE: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409F69F3: mov     eax, ecx
 * 00000001409F69F5: xor     edx, edx
 * 00000001409F69F7: mov     ecx, [rsi+8F8h]
 * 00000001409F69FD: btr     eax, 1Fh
 * 00000001409F6A01: test    ecx, ecx
 * 00000001409F6A03: jnz     short loc_1409F6999
 * 00000001409F6A05: mov     ecx, ebx
 * 00000001409F6A07: xor     rcx, rax
 * 00000001409F6A0A: mov     rax, [rsi+590h]
 * 00000001409F6A11: mov     [rax+18h], rcx
 * 00000001409F6A15: mov     ecx, [rsi+8F8h]
 * 00000001409F6A1B: test    ecx, ecx
 * 00000001409F6A1D: jnz     loc_1409F6999
 * 00000001409F6A23: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F6A2D: mov     rcx, rsi
 * 00000001409F6A30: add     rax, rsi
 * 00000001409F6A33: mov     [rsi+900h], rax
 * 00000001409F6A3A: mov     rax, 0B3B74BDEE4453415h
 * 00000001409F6A44: add     rax, r13
 * 00000001409F6A47: mov     [rsi+908h], rax
 * 00000001409F6A4E: movsxd  rax, dword ptr [r13+0]
 * 00000001409F6A52: mov     [rsi+910h], rax
 * 00000001409F6A59: lea     eax, [rdx+1]
 * 00000001409F6A5C: mov     [rsi+918h], rdi
 * 00000001409F6A63: mov     [rsi+8F8h], eax
 * 00000001409F6A69: call    $$b8
 * 00000001409F6A6E: jmp     loc_1409F6999
 * 00000001409F6A73: mov     r12, [rbp+0BE0h+var_C08]
 * 00000001409F6A77: jmp     loc_1409F69A7
 * 00000001409F6A7C: mov     rax, [rsp+0CE0h+var_C90]
 * 00000001409F6A81: add     rax, 30h ; '0'
 * 00000001409F6A85: sub     r14, rax
 * 00000001409F6A88: sar     r14, 4
 * 00000001409F6A8C: mov     rax, [rbp+0BE0h+var_C60]
 * 00000001409F6A90: mov     [rax], r14d
 * 00000001409F6A93: jmp     loc_1409F631B
 * 00000001409F6A98: mov     rbx, [r13+18h]
 * 00000001409F6A9C: mov     r12d, 1
 * 00000001409F6AA2: mov     rcx, [rsi+6F0h]
 * 00000001409F6AA9: mov     r14, 0B3B74BDEE4453415h
 * 00000001409F6AB3: mov     rax, [rsi+720h]
 * 00000001409F6ABA: add     rcx, rbx
 * 00000001409F6ABD: movzx   edx, word ptr [r13+22h]
 * 00000001409F6AC2: mov     r15, 0A3A03F5891C8B4E8h
 * 00000001409F6ACC: cmp     [rcx+rax], dx
 * 00000001409F6AD0: jz      short loc_1409F6B1A
 * 00000001409F6AD2: xor     eax, eax
 * 00000001409F6AD4: cmp     [rsi+8F8h], eax
 * 00000001409F6ADA: jnz     short loc_1409F6B1A
 * 00000001409F6ADC: lea     rax, [rsi+r15]
 * 00000001409F6AE0: xor     edx, edx
 * 00000001409F6AE2: mov     [rsi+900h], rax
 * 00000001409F6AE9: mov     rcx, rsi
 * 00000001409F6AEC: lea     rax, [r14+r13]
 * 00000001409F6AF0: mov     [rsi+908h], rax
 * 00000001409F6AF7: movsxd  rax, dword ptr [r13+0]
 * 00000001409F6AFB: mov     [rsi+910h], rax
 * 00000001409F6B02: mov     [rsi+918h], rbx
 * 00000001409F6B09: mov     [rsi+8F8h], r12d
 * 00000001409F6B10: call    $$b8
 * 00000001409F6B15: movzx   edx, word ptr [r13+22h]
 * 00000001409F6B1A: test    [rsi+728h], dx
 * 00000001409F6B21: jnz     short loc_1409F6B75
 * 00000001409F6B23: mov     rcx, [rsi+6F8h]
 * 00000001409F6B2A: add     rcx, rbx
 * 00000001409F6B2D: cmp     [rcx], rcx
 * 00000001409F6B30: jz      short loc_1409F6B75
 * 00000001409F6B32: xor     eax, eax
 * 00000001409F6B34: cmp     [rsi+8F8h], eax
 * 00000001409F6B3A: jnz     short loc_1409F6B75
 * 00000001409F6B3C: lea     rax, [rsi+r15]
 * 00000001409F6B40: xor     edx, edx
 * 00000001409F6B42: mov     [rsi+900h], rax
 * 00000001409F6B49: mov     rcx, rsi
 * 00000001409F6B4C: lea     rax, [r14+r13]
 * 00000001409F6B50: mov     [rsi+908h], rax
 * 00000001409F6B57: movsxd  rax, dword ptr [r13+0]
 * 00000001409F6B5B: mov     [rsi+910h], rax
 * 00000001409F6B62: mov     [rsi+918h], rbx
 * 00000001409F6B69: mov     [rsi+8F8h], r12d
 * 00000001409F6B70: call    $$b8
 * 00000001409F6B75: mov     r14, [r13+8]
 * 00000001409F6B79: mov     r8d, [r13+10h]
 * 00000001409F6B7D: mov     r9, r14
 * 00000001409F6B80: add     [rsi+828h], r8d
 * 00000001409F6B87: mov     rax, r14
 * 00000001409F6B8A: mov     r11d, [rsi+814h]
 * 00000001409F6B91: mov     r15, [rsi+818h]
 * 00000001409F6B98: lea     rcx, [r14+r8]
 * 00000001409F6B9C: cmp     r14, rcx
 * 00000001409F6B9F: jnb     short loc_1409F6BB1
 * 00000001409F6BA1: mov     edx, 40h ; '@'
 * 00000001409F6BA6: prefetchnta byte ptr [rax]
 * 00000001409F6BA9: add     rax, rdx
 * 00000001409F6BAC: cmp     rax, rcx
 * 00000001409F6BAF: jb      short loc_1409F6BA6
 * 00000001409F6BB1: mov     r10d, r8d
 * 00000001409F6BB4: mov     rbx, r15
 * 00000001409F6BB7: shr     r10d, 7
 * 00000001409F6BBB: mov     r13d, 0FFFFFFFFh
 * 00000001409F6BC1: test    r10d, r10d
 * 00000001409F6BC4: jz      short loc_1409F6C2B
 * 00000001409F6BC6: mov     rsi, 7010008004002001h
 * 00000001409F6BD0: mov     edx, 8
 * 00000001409F6BD5: mov     rax, [r9]
 * 00000001409F6BD8: mov     ecx, r11d
 * 00000001409F6BDB: xor     rax, rbx
 * 00000001409F6BDE: mov     rbx, [r9+8]
 * 00000001409F6BE2: rol     rax, cl
 * 00000001409F6BE5: add     r9, 10h
 * 00000001409F6BE9: xor     rbx, rax
 * 00000001409F6BEC: rol     rbx, cl
 * 00000001409F6BEF: sub     rdx, r12
 * 00000001409F6BF2: jnz     short loc_1409F6BD5
 * 00000001409F6BF4: mov     rcx, r9
 * 00000001409F6BF7: sub     rcx, r14
 * 00000001409F6BFA: xor     rcx, r15
 * 00000001409F6BFD: mov     rax, rcx
 * 00000001409F6C00: rol     rax, 11h
 * 00000001409F6C04: xor     rcx, rax
 * 00000001409F6C07: mov     rax, rsi
 * 00000001409F6C0A: mul     rcx
 * 00000001409F6C0D: mov     [rbp+0BE0h+var_360], rdx
 * 00000001409F6C14: xor     edx, eax
 * 00000001409F6C16: xor     r11d, edx
 * 00000001409F6C19: and     r11d, 3Fh
 * 00000001409F6C1D: cmovz   r11d, r12d
 * 00000001409F6C21: add     r10d, r13d
 * 00000001409F6C24: jnz     short loc_1409F6BD0
 * 00000001409F6C26: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F6C2B: and     r8d, 7Fh
 * 00000001409F6C2F: cmp     r8d, 8
 * 00000001409F6C33: jb      short loc_1409F6C52
 * 00000001409F6C35: mov     edx, r8d
 * 00000001409F6C38: shr     rdx, 3
 * 00000001409F6C3C: xor     rbx, [r9]
 * 00000001409F6C3F: mov     ecx, r11d
 * 00000001409F6C42: rol     rbx, cl
 * 00000001409F6C45: add     r9, 8
 * 00000001409F6C49: add     r8d, 0FFFFFFF8h
 * 00000001409F6C4D: sub     rdx, r12
 * 00000001409F6C50: jnz     short loc_1409F6C3C
 * 00000001409F6C52: test    r8d, r8d
 * 00000001409F6C55: jz      short loc_1409F6C6C
 * 00000001409F6C57: movzx   eax, byte ptr [r9]
 * 00000001409F6C5B: mov     ecx, r11d
 * 00000001409F6C5E: xor     rbx, rax
 * 00000001409F6C61: add     r9, r12
 * 00000001409F6C64: rol     rbx, cl
 * 00000001409F6C67: add     r8d, r13d
 * 00000001409F6C6A: jnz     short loc_1409F6C57
 * 00000001409F6C6C: mov     rax, rbx
 * 00000001409F6C6F: jmp     short loc_1409F6C73
 * 00000001409F6C71: xor     ebx, eax
 * 00000001409F6C73: shr     rax, 1Fh
 * 00000001409F6C77: test    rax, rax
 * 00000001409F6C7A: jnz     short loc_1409F6C71
 * 00000001409F6C7C: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409F6C81: btr     ebx, 1Fh
 * 00000001409F6C85: mov     r13d, eax
 * 00000001409F6C88: cmp     ebx, [r14+14h]
 * 00000001409F6C8C: jz      loc_1409F6D70
 * 00000001409F6C92: cmp     [r14], eax
 * 00000001409F6C95: jnz     short loc_1409F6C9F
 * 00000001409F6C97: cmp     [r14+18h], eax
 * 00000001409F6C9B: cmovnz  r13d, r12d
 * 00000001409F6C9F: mov     ecx, [r14+10h]
 * 00000001409F6CA3: mov     rdx, [r14+8]
 * 00000001409F6CA7: test    rcx, rcx
 * 00000001409F6CAA: jz      loc_1409F6E5F
 * 00000001409F6CB0: mov     eax, [rsi+994h]
 * 00000001409F6CB6: mov     r8d, 40h ; '@'
 * 00000001409F6CBC: test    r8b, al
 * 00000001409F6CBF: jz      loc_1409F6E5F
 * 00000001409F6CC5: mov     r12, cr8
 * 00000001409F6CC9: lea     eax, [r8-3Eh]
 * 00000001409F6CCD: mov     cr8, rax
 * 00000001409F6CD1: mov     r14, rdx
 * 00000001409F6CD4: lea     rax, [rcx-1]
 * 00000001409F6CD8: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409F6CDF: add     rax, rdx
 * 00000001409F6CE2: or      rax, 0FFFh
 * 00000001409F6CE8: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409F6CED: lea     rax, [r14-1]
 * 00000001409F6CF1: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409F6CF8: movzx   r15d, r12b
 * 00000001409F6CFC: mov     rax, [rsi+468h]
 * 00000001409F6D03: xor     edx, edx
 * 00000001409F6D05: mov     rcx, r14
 * 00000001409F6D08: call    KeGuardDispatchICall
 * 00000001409F6D0D: cmp     eax, 0C000022Dh
 * 00000001409F6D12: jnz     short loc_1409F6D3F
 * 00000001409F6D14: test    r13d, r13d
 * 00000001409F6D17: jnz     loc_1409F6E56
 * 00000001409F6D1D: lea     eax, [r13+1]
 * 00000001409F6D21: cmp     r12b, al
 * 00000001409F6D24: ja      short loc_1409F6D47
 * 00000001409F6D26: movzx   r15d, r12b
 * 00000001409F6D2A: mov     cr8, r15
 * 00000001409F6D2E: mov     al, [r14]
 * 00000001409F6D31: mov     rax, cr8
 * 00000001409F6D35: lea     eax, [r13+2]
 * 00000001409F6D39: mov     cr8, rax
 * 00000001409F6D3D: jmp     short loc_1409F6CFC
 * 00000001409F6D3F: test    eax, eax
 * 00000001409F6D41: js      loc_1409F6E56
 * 00000001409F6D47: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409F6D4E: mov     ecx, 1000h
 * 00000001409F6D53: add     rax, rcx
 * 00000001409F6D56: add     r14, rcx
 * 00000001409F6D59: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409F6D60: cmp     rax, [rsp+0CE0h+var_C88]
 * 00000001409F6D65: jnz     short loc_1409F6CF8
 * 00000001409F6D67: mov     cr8, r15
 * 00000001409F6D6B: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409F6D70: mov     r13, 0A3A03F5891C8B4E8h
 * 00000001409F6D7A: mov     r12, 0B3B74BDEE4453415h
 * 00000001409F6D84: mov     ebx, 1
 * 00000001409F6D89: lea     rax, [r14+30h]
 * 00000001409F6D8D: xor     r9d, r9d
 * 00000001409F6D90: mov     [rbp+0BE0h+var_870], rax
 * 00000001409F6D97: lea     rcx, [rbp+0BE0h+var_878]
 * 00000001409F6D9E: movzx   eax, word ptr [r14+20h]
 * 00000001409F6DA3: xor     r8d, r8d
 * 00000001409F6DA6: mov     [rbp+0BE0h+var_878], ax
 * 00000001409F6DAD: xor     edx, edx
 * 00000001409F6DAF: mov     [rbp+0BE0h+var_876], ax
 * 00000001409F6DB6: lea     rax, [rbp+0BE0h+var_970]
 * 00000001409F6DBD: mov     [rsp+0CE0h+var_CA8], rax
 * 00000001409F6DC2: xor     eax, eax
 * 00000001409F6DC4: mov     [rsp+0CE0h+var_CB0], rax
 * 00000001409F6DC9: mov     byte ptr [rsp+0CE0h+var_CB8], al
 * 00000001409F6DCD: mov     rax, [rsi+508h]
 * 00000001409F6DD4: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 00000001409F6DD9: mov     rax, [rsi+1E8h]
 * 00000001409F6DE0: call    KeGuardDispatchICall
 * 00000001409F6DE5: xor     r15d, r15d
 * 00000001409F6DE8: test    eax, eax
 * 00000001409F6DEA: js      loc_1409F631B
 * 00000001409F6DF0: mov     rcx, [rbp+0BE0h+var_970]
 * 00000001409F6DF7: cmp     rcx, [r14+18h]
 * 00000001409F6DFB: jz      short loc_1409F6E45
 * 00000001409F6DFD: xor     eax, eax
 * 00000001409F6DFF: cmp     [rsi+8F8h], eax
 * 00000001409F6E05: jnz     short loc_1409F6E45
 * 00000001409F6E07: lea     rax, [rsi+r13]
 * 00000001409F6E0B: xor     edx, edx
 * 00000001409F6E0D: mov     [rsi+900h], rax
 * 00000001409F6E14: lea     rax, [r14+r12]
 * 00000001409F6E18: mov     [rsi+908h], rax
 * 00000001409F6E1F: movsxd  rax, dword ptr [r14]
 * 00000001409F6E22: mov     [rsi+910h], rax
 * 00000001409F6E29: mov     [rsi+918h], rcx
 * 00000001409F6E30: mov     rcx, rsi
 * 00000001409F6E33: mov     [rsi+8F8h], ebx
 * 00000001409F6E39: call    $$b8
 * 00000001409F6E3E: mov     rcx, [rbp+0BE0h+var_970]
 * 00000001409F6E45: mov     rax, [rsi+1E0h]
 * 00000001409F6E4C: call    KeGuardDispatchICall
 * 00000001409F6E51: jmp     loc_1409F631B
 * 00000001409F6E56: mov     cr8, r15
 * 00000001409F6E5A: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409F6E5F: mov     eax, [rsi+8F8h]
 * 00000001409F6E65: xor     edx, edx
 * 00000001409F6E67: mov     ecx, [r14+14h]
 * 00000001409F6E6B: test    eax, eax
 * 00000001409F6E6D: jnz     short loc_1409F6E85
 * 00000001409F6E6F: mov     eax, ebx
 * 00000001409F6E71: xor     rcx, rax
 * 00000001409F6E74: mov     rax, [rsi+590h]
 * 00000001409F6E7B: mov     [rax+18h], rcx
 * 00000001409F6E7F: mov     eax, [rsi+8F8h]
 * 00000001409F6E85: mov     rcx, [r14+8]
 * 00000001409F6E89: mov     r13, 0A3A03F5891C8B4E8h
 * 00000001409F6E93: mov     r12, 0B3B74BDEE4453415h
 * 00000001409F6E9D: mov     ebx, 1
 * 00000001409F6EA2: test    eax, eax
 * 00000001409F6EA4: jnz     loc_1409F6D89
 * 00000001409F6EAA: lea     rax, [rsi+r13]
 * 00000001409F6EAE: mov     [rsi+900h], rax
 * 00000001409F6EB5: lea     rax, [r14+r12]
 * 00000001409F6EB9: mov     [rsi+908h], rax
 * 00000001409F6EC0: movsxd  rax, dword ptr [r14]
 * 00000001409F6EC3: mov     [rsi+910h], rax
 * 00000001409F6ECA: mov     [rsi+918h], rcx
 * 00000001409F6ED1: mov     rcx, rsi
 * 00000001409F6ED4: mov     [rsi+8F8h], ebx
 * 00000001409F6EDA: call    $$b8
 * 00000001409F6EDF: jmp     loc_1409F6D89
 * 00000001409F6EE4: mov     rax, [rsi+1A0h]
 * 00000001409F6EEB: lea     rcx, [rbp+0BE0h+var_1A0]
 * 00000001409F6EF2: mov     edx, [r13+1Ch]
 * 00000001409F6EF6: call    KeGuardDispatchICall
 * 00000001409F6EFB: mov     rax, [rsi+1D0h]
 * 00000001409F6F02: lea     rdx, [rbp+0BE0h+var_320]
 * 00000001409F6F09: lea     rcx, [rbp+0BE0h+var_1A0]
 * 00000001409F6F10: call    KeGuardDispatchICall
 * 00000001409F6F15: xor     eax, eax
 * 00000001409F6F17: mov     ebx, eax
 * 00000001409F6F19: cmp     [r13+18h], eax
 * 00000001409F6F1D: jbe     loc_1409F702F
 * 00000001409F6F23: mov     eax, ebx
 * 00000001409F6F25: lea     r10, [rax+rax*2]
 * 00000001409F6F29: mov     r9d, [r13+r10*8+40h]
 * 00000001409F6F2E: test    [rsi+87Bh], r14b
 * 00000001409F6F35: jz      short loc_1409F6F5A
 * 00000001409F6F37: mov     eax, 0C0000082h
 * 00000001409F6F3C: cmp     r9d, eax
 * 00000001409F6F3F: jnz     short loc_1409F6F5A
 * 00000001409F6F41: mov     eax, gs:1A4h
 * 00000001409F6F49: cmp     eax, [rsi+8F0h]
 * 00000001409F6F4F: jnz     short loc_1409F6F5A
 * 00000001409F6F51: mov     rdx, [rsi+8E8h]
 * 00000001409F6F58: jmp     short loc_1409F6F66
 * 00000001409F6F5A: mov     ecx, r9d
 * 00000001409F6F5D: rdmsr
 * 00000001409F6F5F: shl     rdx, 20h
 * 00000001409F6F63: or      rdx, rax
 * 00000001409F6F66: mov     r8, [r13+r10*8+30h]
 * 00000001409F6F6B: mov     rcx, [r13+r10*8+38h]
 * 00000001409F6F70: and     rdx, r8
 * 00000001409F6F73: cmp     rdx, rcx
 * 00000001409F6F76: jz      loc_1409F6FFE
 * 00000001409F6F7C: mov     r8d, [r13+1Ch]
 * 00000001409F6F80: mov     eax, [rsi+8F8h]
 * 00000001409F6F86: shl     r8, 20h
 * 00000001409F6F8A: or      r8, r9
 * 00000001409F6F8D: test    eax, eax
 * 00000001409F6F8F: jnz     loc_1409F701C
 * 00000001409F6F95: mov     rax, [rsi+590h]
 * 00000001409F6F9C: xor     rcx, rdx
 * 00000001409F6F9F: mov     [rax+18h], rcx
 * 00000001409F6FA3: mov     eax, [rsi+8F8h]
 * 00000001409F6FA9: test    eax, eax
 * 00000001409F6FAB: jnz     short loc_1409F701C
 * 00000001409F6FAD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F6FB7: xor     edx, edx
 * 00000001409F6FB9: add     rax, rsi
 * 00000001409F6FBC: mov     rcx, rsi
 * 00000001409F6FBF: mov     [rsi+900h], rax
 * 00000001409F6FC6: mov     rax, 0B3B74BDEE4453415h
 * 00000001409F6FD0: add     rax, r13
 * 00000001409F6FD3: mov     [rsi+908h], rax
 * 00000001409F6FDA: movsxd  rax, dword ptr [r13+0]
 * 00000001409F6FDE: mov     [rsi+910h], rax
 * 00000001409F6FE5: mov     eax, 1
 * 00000001409F6FEA: mov     [rsi+918h], r8
 * 00000001409F6FF1: mov     [rsi+8F8h], eax
 * 00000001409F6FF7: call    $$b8
 * 00000001409F6FFC: jmp     short loc_1409F701C
 * 00000001409F6FFE: test    dword ptr [rsi+994h], 200h
 * 00000001409F7008: jz      short loc_1409F701C
 * 00000001409F700A: cmp     r8, 0FFFFFFFFFFFFFFFFh
 * 00000001409F700E: jnz     short loc_1409F701C
 * 00000001409F7010: mov     rax, rdx
 * 00000001409F7013: mov     ecx, r9d
 * 00000001409F7016: shr     rdx, 20h
 * 00000001409F701A: wrmsr
 * 00000001409F701C: inc     ebx
 * 00000001409F701E: cmp     ebx, [r13+18h]
 * 00000001409F7022: jb      loc_1409F6F23
 * 00000001409F7028: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F702F: mov     rax, [rsi+198h]
 * 00000001409F7036: lea     rcx, [rbp+0BE0h+var_320]
 * 00000001409F703D: call    KeGuardDispatchICall
 * 00000001409F7042: mov     eax, [r13+18h]
 * 00000001409F7046: shl     eax, 0Fh
 * 00000001409F7049: add     [rsi+828h], eax
 * 00000001409F704F: jmp     loc_1409F6318
 * 00000001409F7054: mov     ecx, [rsi+830h]
 * 00000001409F705A: test    dl, cl
 * 00000001409F705C: jz      loc_1409F6318
 * 00000001409F7062: mov     r12d, 40000000h
 * 00000001409F7068: test    [rsi+990h], r12d
 * 00000001409F706F: jnz     short loc_1409F7087
 * 00000001409F7071: mov     r14d, eax
 * 00000001409F7074: and     ecx, 3
 * 00000001409F7077: cmp     cl, 3
 * 00000001409F707A: setz    r14b
 * 00000001409F707E: mov     dword ptr [rbp+0BE0h+arg_8], r14d
 * 00000001409F7085: jmp     short loc_1409F70DB
 * 00000001409F7087: rdtsc
 * 00000001409F7089: shl     rdx, 20h
 * 00000001409F708D: or      rax, rdx
 * 00000001409F7090: mov     rcx, rax
 * 00000001409F7093: ror     rax, 3
 * 00000001409F7097: xor     rcx, rax
 * 00000001409F709A: mov     rax, 7010008004002001h
 * 00000001409F70A4: mul     rcx
 * 00000001409F70A7: mov     rcx, rdx
 * 00000001409F70AA: mov     [rbp+0BE0h+var_358], rdx
 * 00000001409F70B1: xor     rcx, rax
 * 00000001409F70B4: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001409F70BE: mul     rcx
 * 00000001409F70C1: shr     rdx, 1
 * 00000001409F70C4: lea     rax, [rdx+rdx*2]
 * 00000001409F70C8: cmp     rcx, rax
 * 00000001409F70CB: mov     eax, 0
 * 00000001409F70D0: setz    al
 * 00000001409F70D3: mov     dword ptr [rbp+0BE0h+arg_8], eax
 * 00000001409F70D9: xor     eax, eax
 * 00000001409F70DB: mov     rbx, [rsi+548h]
 * 00000001409F70E2: mov     r15d, eax
 * 00000001409F70E5: mov     [rbp+0BE0h+var_C58], eax
 * 00000001409F70E8: mov     rax, [rsi+178h]
 * 00000001409F70EF: call    KeGuardDispatchICall
 * 00000001409F70F4: test    [rsi+990h], r12d
 * 00000001409F70FB: jnz     short loc_1409F7116
 * 00000001409F70FD: mov     ecx, [rsi+950h]
 * 00000001409F7103: cmp     ecx, 7
 * 00000001409F7106: jnb     short loc_1409F7116
 * 00000001409F7108: mov     r12d, 1
 * 00000001409F710E: mov     r14d, r12d
 * 00000001409F7111: shl     r14b, cl
 * 00000001409F7114: jmp     short loc_1409F7134
 * 00000001409F7116: mov     rax, [rsi+128h]
 * 00000001409F711D: xor     edx, edx
 * 00000001409F711F: mov     rcx, [rsi+0A00h]
 * 00000001409F7126: call    KeGuardDispatchICall
 * 00000001409F712B: mov     r14b, 80h
 * 00000001409F712E: mov     r12d, 1
 * 00000001409F7134: mov     rax, [rsi+138h]
 * 00000001409F713B: xor     edx, edx
 * 00000001409F713D: mov     rcx, rbx
 * 00000001409F7140: call    KeGuardDispatchICall
 * 00000001409F7145: mov     r8, [rsi+520h]
 * 00000001409F714C: mov     rdx, [r8]
 * 00000001409F714F: cmp     rdx, r8
 * 00000001409F7152: jz      short loc_1409F7179
 * 00000001409F7154: mov     rax, [rsi+6B8h]
 * 00000001409F715B: mov     rcx, rdx
 * 00000001409F715E: sub     rcx, [rsi+6D0h]
 * 00000001409F7165: lock or [rcx+rax], r14b
 * 00000001409F716A: mov     rdx, [rdx]
 * 00000001409F716D: add     r15d, r12d
 * 00000001409F7170: cmp     rdx, r8
 * 00000001409F7173: jnz     short loc_1409F7154
 * 00000001409F7175: mov     [rbp+0BE0h+var_C58], r15d
 * 00000001409F7179: mov     rax, [rsi+550h]
 * 00000001409F7180: mov     r15d, 4
 * 00000001409F7186: mov     edi, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409F718C: mov     r13, [rax]
 * 00000001409F718F: mov     rax, [rsi+730h]
 * 00000001409F7196: mov     ebx, [rax+r13]
 * 00000001409F719A: mov     [rsp+0CE0h+var_C88], rbx
 * 00000001409F719F: mov     rax, [rsi+108h]
 * 00000001409F71A6: mov     rdx, r15
 * 00000001409F71A9: mov     rcx, r13
 * 00000001409F71AC: call    KeGuardDispatchICall
 * 00000001409F71B1: mov     r12, rax
 * 00000001409F71B4: xor     eax, eax
 * 00000001409F71B6: test    r12, r12
 * 00000001409F71B9: jz      loc_1409F7329
 * 00000001409F71BF: mov     rbx, [r12]
 * 00000001409F71C3: sar     rbx, 10h
 * 00000001409F71C7: and     rbx, 0FFFFFFFFFFFFFFF0h
 * 00000001409F71CB: mov     al, [rbx]
 * 00000001409F71CD: and     al, 7Fh
 * 00000001409F71CF: cmp     al, 3
 * 00000001409F71D1: jnz     loc_1409F726B
 * 00000001409F71D7: mov     r8, [rsi+6B8h]
 * 00000001409F71DE: mov     rdx, r8
 * 00000001409F71E1: test    [rbx+r8], r14b
 * 00000001409F71E5: jnz     short loc_1409F725D
 * 00000001409F71E7: mov     rax, [rsi+6C0h]
 * 00000001409F71EE: mov     ecx, [rbx+rax]
 * 00000001409F71F1: test    [rsi+6D8h], ecx
 * 00000001409F71F7: jz      short loc_1409F725D
 * 00000001409F71F9: xor     eax, eax
 * 00000001409F71FB: cmp     [rsi+8F8h], eax
 * 00000001409F7201: jnz     short loc_1409F725D
 * 00000001409F7203: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409F7208: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F7212: add     rax, rsi
 * 00000001409F7215: xor     edx, edx
 * 00000001409F7217: mov     [rsi+900h], rax
 * 00000001409F721E: mov     rax, 0B3B74BDEE4453415h
 * 00000001409F7228: add     rax, rcx
 * 00000001409F722B: mov     [rsi+908h], rax
 * 00000001409F7232: movsxd  rax, dword ptr [rcx]
 * 00000001409F7235: mov     rcx, rsi
 * 00000001409F7238: mov     [rsi+910h], rax
 * 00000001409F723F: mov     eax, 1
 * 00000001409F7244: mov     [rsi+918h], rbx
 * 00000001409F724B: mov     [rsi+8F8h], eax
 * 00000001409F7251: call    $$b8
 * 00000001409F7256: mov     rdx, [rsi+6B8h]
 * 00000001409F725D: mov     al, r14b
 * 00000001409F7260: not     al
 * 00000001409F7262: lock and [rbx+rdx], al
 * 00000001409F7266: jmp     loc_1409F7312
 * 00000001409F726B: cmp     al, 6
 * 00000001409F726D: jnz     short loc_1409F72B1
 * 00000001409F726F: test    edi, edi
 * 00000001409F7271: jz      loc_1409F7312
 * 00000001409F7277: mov     rcx, [rsi+680h]
 * 00000001409F727E: mov     rax, [rbx+rcx+20h]
 * 00000001409F7283: cmp     rax, [rsi+320h]
 * 00000001409F728A: jz      short loc_1409F7295
 * 00000001409F728C: cmp     rax, [rsi+328h]
 * 00000001409F7293: jnz     short loc_1409F72B5
 * 00000001409F7295: mov     rax, [rsi+330h]
 * 00000001409F729C: cmp     [rbx+rcx+30h], rax
 * 00000001409F72A1: jnz     short loc_1409F72B5
 * 00000001409F72A3: mov     rax, [rsi+338h]
 * 00000001409F72AA: cmp     [rbx+rcx+28h], rax
 * 00000001409F72AF: jmp     short loc_1409F72B3
 * 00000001409F72B1: test    al, al
 * 00000001409F72B3: jz      short loc_1409F7312
 * 00000001409F72B5: xor     eax, eax
 * 00000001409F72B7: cmp     [rsi+8F8h], eax
 * 00000001409F72BD: jnz     short loc_1409F7312
 * 00000001409F72BF: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409F72C4: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F72CE: add     rax, rsi
 * 00000001409F72D1: xor     edx, edx
 * 00000001409F72D3: mov     [rsi+900h], rax
 * 00000001409F72DA: mov     rax, 0B3B74BDEE4453415h
 * 00000001409F72E4: add     rax, rcx
 * 00000001409F72E7: mov     [rsi+908h], rax
 * 00000001409F72EE: movsxd  rax, dword ptr [rcx]
 * 00000001409F72F1: mov     rcx, rsi
 * 00000001409F72F4: mov     [rsi+910h], rax
 * 00000001409F72FB: mov     eax, 1
 * 00000001409F7300: mov     [rsi+918h], rbx
 * 00000001409F7307: mov     [rsi+8F8h], eax
 * 00000001409F730D: call    $$b8
 * 00000001409F7312: mov     rax, [rsi+120h]
 * 00000001409F7319: mov     rdx, r12
 * 00000001409F731C: mov     rcx, r13
 * 00000001409F731F: call    KeGuardDispatchICall
 * 00000001409F7324: mov     rbx, [rsp+0CE0h+var_C88]
 * 00000001409F7329: add     r15, 4
 * 00000001409F732D: cmp     r15, rbx
 * 00000001409F7330: jb      loc_1409F719F
 * 00000001409F7336: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F733D: cmp     r14b, 80h
 * 00000001409F7341: jnz     short loc_1409F7358
 * 00000001409F7343: mov     rax, [rsi+130h]
 * 00000001409F734A: xor     edx, edx
 * 00000001409F734C: mov     rcx, [rsi+0A00h]
 * 00000001409F7353: call    KeGuardDispatchICall
 * 00000001409F7358: mov     rcx, [rsi+548h]
 * 00000001409F735F: xor     edx, edx
 * 00000001409F7361: mov     rax, [rsi+140h]
 * 00000001409F7368: call    KeGuardDispatchICall
 * 00000001409F736D: mov     rax, [rsi+180h]
 * 00000001409F7374: call    KeGuardDispatchICall
 * 00000001409F7379: mov     eax, [rbp+0BE0h+var_C58]
 * 00000001409F737C: shr     rbx, 2
 * 00000001409F7380: add     eax, ebx
 * 00000001409F7382: shl     eax, 8
 * 00000001409F7385: jmp     loc_1409F7049
 * 00000001409F738A: mov     eax, [rsi+830h]
 * 00000001409F7390: test    dl, al
 * 00000001409F7392: jnz     loc_1409F6318
 * 00000001409F7398: mov     rbx, [rsi+548h]
 * 00000001409F739F: xor     eax, eax
 * 00000001409F73A1: mov     r13d, eax
 * 00000001409F73A4: mov     [rbp+0BE0h+var_C58], eax
 * 00000001409F73A7: mov     rax, [rsi+178h]
 * 00000001409F73AE: call    KeGuardDispatchICall
 * 00000001409F73B3: test    dword ptr [rsi+990h], 40000000h
 * 00000001409F73BD: jnz     short loc_1409F73D5
 * 00000001409F73BF: mov     ecx, [rsi+950h]
 * 00000001409F73C5: cmp     ecx, 7
 * 00000001409F73C8: jnb     short loc_1409F73D5
 * 00000001409F73CA: mov     r14d, 1
 * 00000001409F73D0: shl     r14b, cl
 * 00000001409F73D3: jmp     short loc_1409F73ED
 * 00000001409F73D5: mov     rax, [rsi+128h]
 * 00000001409F73DC: xor     edx, edx
 * 00000001409F73DE: mov     rcx, [rsi+0A00h]
 * 00000001409F73E5: call    KeGuardDispatchICall
 * 00000001409F73EA: mov     r14b, 80h
 * 00000001409F73ED: mov     rax, [rsi+138h]
 * 00000001409F73F4: xor     edx, edx
 * 00000001409F73F6: mov     rcx, rbx
 * 00000001409F73F9: mov     dword ptr [rbp+0BE0h+arg_8], r14d
 * 00000001409F7400: call    KeGuardDispatchICall
 * 00000001409F7405: mov     r12, [rsi+520h]
 * 00000001409F740C: mov     r15, [r12]
 * 00000001409F7410: cmp     r15, r12
 * 00000001409F7413: jz      loc_1409F74D1
 * 00000001409F7419: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409F741E: mov     rbx, r15
 * 00000001409F7421: sub     rbx, [rsi+6D0h]
 * 00000001409F7428: cmp     r14b, 80h
 * 00000001409F742C: jz      short loc_1409F74AB
 * 00000001409F742E: mov     rax, [rsi+6B8h]
 * 00000001409F7435: test    [rbx+rax], r14b
 * 00000001409F7439: jz      short loc_1409F74AB
 * 00000001409F743B: mov     rax, [rsi+6C0h]
 * 00000001409F7442: mov     ecx, [rbx+rax]
 * 00000001409F7445: test    [rsi+6D8h], ecx
 * 00000001409F744B: jz      short loc_1409F74AB
 * 00000001409F744D: xor     eax, eax
 * 00000001409F744F: cmp     [rsi+8F8h], eax
 * 00000001409F7455: jnz     short loc_1409F74AB
 * 00000001409F7457: mov     ecx, 1
 * 00000001409F745C: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F7466: add     rax, rsi
 * 00000001409F7469: xor     edx, edx
 * 00000001409F746B: mov     [rsi+900h], rax
 * 00000001409F7472: mov     rax, 0B3B74BDEE4453415h
 * 00000001409F747C: add     rax, rdi
 * 00000001409F747F: mov     [rsi+908h], rax
 * 00000001409F7486: movsxd  rax, dword ptr [rdi]
 * 00000001409F7489: mov     [rsi+910h], rax
 * 00000001409F7490: mov     rax, rbx
 * 00000001409F7493: or      rax, rcx
 * 00000001409F7496: mov     [rsi+918h], rax
 * 00000001409F749D: mov     [rsi+8F8h], ecx
 * 00000001409F74A3: mov     rcx, rsi
 * 00000001409F74A6: call    $$b8
 * 00000001409F74AB: mov     rax, [rsi+6B8h]
 * 00000001409F74B2: lock or [rbx+rax], r14b
 * 00000001409F74B7: mov     r15, [r15]
 * 00000001409F74BA: inc     r13d
 * 00000001409F74BD: cmp     r15, r12
 * 00000001409F74C0: jnz     loc_1409F741E
 * 00000001409F74C6: mov     [rbp+0BE0h+var_C58], r13d
 * 00000001409F74CA: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F74D1: mov     rcx, [rsi+500h]
 * 00000001409F74D8: mov     rax, cr8
 * 00000001409F74DC: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409F74E1: mov     eax, 0Ch
 * 00000001409F74E6: mov     cr8, rax
 * 00000001409F74EA: mov     rax, [rsi+148h]
 * 00000001409F74F1: lea     rdx, [rbp+0BE0h+var_128]
 * 00000001409F74F8: call    KeGuardDispatchICall
 * 00000001409F74FD: mov     r13, [rsi+4F8h]
 * 00000001409F7504: mov     r15, [r13+0]
 * 00000001409F7508: cmp     r15, r13
 * 00000001409F750B: jz      loc_1409F75BF
 * 00000001409F7511: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409F7516: mov     r12b, r14b
 * 00000001409F7519: movzx   edx, r14b
 * 00000001409F751D: not     r12b
 * 00000001409F7520: mov     [rbp+0BE0h+var_BF0], edx
 * 00000001409F7523: xor     r14d, r14d
 * 00000001409F7526: mov     rcx, [rsi+6B8h]
 * 00000001409F752D: mov     rbx, r15
 * 00000001409F7530: sub     rbx, [rsi+6B0h]
 * 00000001409F7537: movsx   eax, byte ptr [rcx+rbx]
 * 00000001409F753B: test    edx, eax
 * 00000001409F753D: jnz     short loc_1409F75A0
 * 00000001409F753F: cmp     [rsi+8F8h], r14d
 * 00000001409F7546: jnz     short loc_1409F75A0
 * 00000001409F7548: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F7552: xor     edx, edx
 * 00000001409F7554: add     rax, rsi
 * 00000001409F7557: mov     rcx, rsi
 * 00000001409F755A: mov     [rsi+900h], rax
 * 00000001409F7561: mov     rax, 0B3B74BDEE4453415h
 * 00000001409F756B: add     rax, rdi
 * 00000001409F756E: mov     [rsi+908h], rax
 * 00000001409F7575: movsxd  rax, dword ptr [rdi]
 * 00000001409F7578: mov     [rsi+910h], rax
 * 00000001409F757F: mov     eax, 1
 * 00000001409F7584: mov     [rsi+918h], rbx
 * 00000001409F758B: mov     [rsi+8F8h], eax
 * 00000001409F7591: call    $$b8
 * 00000001409F7596: mov     rcx, [rsi+6B8h]
 * 00000001409F759D: mov     edx, [rbp+0BE0h+var_BF0]
 * 00000001409F75A0: lock and [rbx+rcx], r12b
 * 00000001409F75A5: mov     r15, [r15]
 * 00000001409F75A8: cmp     r15, r13
 * 00000001409F75AB: jnz     loc_1409F7526
 * 00000001409F75B1: mov     r14d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409F75B8: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F75BF: mov     rax, [rsi+188h]
 * 00000001409F75C6: lea     rcx, [rbp+0BE0h+var_128]
 * 00000001409F75CD: call    KeGuardDispatchICall
 * 00000001409F75D2: movzx   eax, byte ptr [rsp+0CE0h+var_C88]
 * 00000001409F75D7: mov     cr8, rax
 * 00000001409F75DB: cmp     r14b, 80h
 * 00000001409F75DF: jnz     short loc_1409F75F6
 * 00000001409F75E1: mov     rax, [rsi+130h]
 * 00000001409F75E8: xor     edx, edx
 * 00000001409F75EA: mov     rcx, [rsi+0A00h]
 * 00000001409F75F1: call    KeGuardDispatchICall
 * 00000001409F75F6: mov     rcx, [rsi+548h]
 * 00000001409F75FD: xor     edx, edx
 * 00000001409F75FF: mov     rax, [rsi+140h]
 * 00000001409F7606: call    KeGuardDispatchICall
 * 00000001409F760B: mov     rax, [rsi+180h]
 * 00000001409F7612: call    KeGuardDispatchICall
 * 00000001409F7617: mov     eax, [rbp+0BE0h+var_C58]
 * 00000001409F761A: jmp     loc_1409F7382
 * 00000001409F761F: mov     r14, [r13+8]
 * 00000001409F7623: mov     r8d, [r13+10h]
 * 00000001409F7627: mov     r9, r14
 * 00000001409F762A: add     [rsi+828h], r8d
 * 00000001409F7631: mov     rax, r14
 * 00000001409F7634: mov     r11d, [rsi+814h]
 * 00000001409F763B: mov     r15, [rsi+818h]
 * 00000001409F7642: lea     rcx, [r14+r8]
 * 00000001409F7646: cmp     r14, rcx
 * 00000001409F7649: jnb     short loc_1409F765B
 * 00000001409F764B: mov     edx, 40h ; '@'
 * 00000001409F7650: prefetchnta byte ptr [rax]
 * 00000001409F7653: add     rax, rdx
 * 00000001409F7656: cmp     rax, rcx
 * 00000001409F7659: jb      short loc_1409F7650
 * 00000001409F765B: mov     r10d, r8d
 * 00000001409F765E: mov     rbx, r15
 * 00000001409F7661: shr     r10d, 7
 * 00000001409F7665: mov     r12d, 1
 * 00000001409F766B: test    r10d, r10d
 * 00000001409F766E: jz      short loc_1409F76DA
 * 00000001409F7670: mov     rsi, 7010008004002001h
 * 00000001409F767A: mov     edx, 8
 * 00000001409F767F: mov     rax, [r9]
 * 00000001409F7682: mov     ecx, r11d
 * 00000001409F7685: xor     rax, rbx
 * 00000001409F7688: mov     rbx, [r9+8]
 * 00000001409F768C: rol     rax, cl
 * 00000001409F768F: add     r9, 10h
 * 00000001409F7693: xor     rbx, rax
 * 00000001409F7696: rol     rbx, cl
 * 00000001409F7699: sub     rdx, r12
 * 00000001409F769C: jnz     short loc_1409F767F
 * 00000001409F769E: mov     rcx, r9
 * 00000001409F76A1: sub     rcx, r14
 * 00000001409F76A4: xor     rcx, r15
 * 00000001409F76A7: mov     rax, rcx
 * 00000001409F76AA: rol     rax, 11h
 * 00000001409F76AE: xor     rcx, rax
 * 00000001409F76B1: mov     rax, rsi
 * 00000001409F76B4: mul     rcx
 * 00000001409F76B7: mov     [rbp+0BE0h+var_350], rdx
 * 00000001409F76BE: xor     edx, eax
 * 00000001409F76C0: xor     r11d, edx
 * 00000001409F76C3: mov     eax, 0FFFFFFFFh
 * 00000001409F76C8: and     r11d, 3Fh
 * 00000001409F76CC: cmovz   r11d, r12d
 * 00000001409F76D0: add     r10d, eax
 * 00000001409F76D3: jnz     short loc_1409F767A
 * 00000001409F76D5: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F76DA: and     r8d, 7Fh
 * 00000001409F76DE: cmp     r8d, 8
 * 00000001409F76E2: jb      short loc_1409F7701
 * 00000001409F76E4: mov     edx, r8d
 * 00000001409F76E7: shr     rdx, 3
 * 00000001409F76EB: xor     rbx, [r9]
 * 00000001409F76EE: mov     ecx, r11d
 * 00000001409F76F1: rol     rbx, cl
 * 00000001409F76F4: add     r9, 8
 * 00000001409F76F8: add     r8d, 0FFFFFFF8h
 * 00000001409F76FC: sub     rdx, r12
 * 00000001409F76FF: jnz     short loc_1409F76EB
 * 00000001409F7701: test    r8d, r8d
 * 00000001409F7704: jz      short loc_1409F7725
 * 00000001409F7706: mov     esi, 0FFFFFFFFh
 * 00000001409F770B: movzx   eax, byte ptr [r9]
 * 00000001409F770F: mov     ecx, r11d
 * 00000001409F7712: xor     rbx, rax
 * 00000001409F7715: add     r9, r12
 * 00000001409F7718: rol     rbx, cl
 * 00000001409F771B: add     r8d, esi
 * 00000001409F771E: jnz     short loc_1409F770B
 * 00000001409F7720: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F7725: mov     rax, rbx
 * 00000001409F7728: jmp     short loc_1409F772C
 * 00000001409F772A: xor     ebx, eax
 * 00000001409F772C: shr     rax, 1Fh
 * 00000001409F7730: test    rax, rax
 * 00000001409F7733: jnz     short loc_1409F772A
 * 00000001409F7735: btr     ebx, 1Fh
 * 00000001409F7739: mov     r12d, eax
 * 00000001409F773C: cmp     ebx, [r13+14h]
 * 00000001409F7740: jz      loc_1409F6318
 * 00000001409F7746: cmp     [r13+0], eax
 * 00000001409F774A: jnz     short loc_1409F7757
 * 00000001409F774C: cmp     [r13+18h], eax
 * 00000001409F7750: lea     ecx, [rax+1]
 * 00000001409F7753: cmovnz  r12d, ecx
 * 00000001409F7757: mov     ecx, [r13+10h]
 * 00000001409F775B: mov     rdx, [r13+8]
 * 00000001409F775F: test    rcx, rcx
 * 00000001409F7762: jz      loc_1409F7828
 * 00000001409F7768: mov     eax, [rsi+994h]
 * 00000001409F776E: mov     r8d, 40h ; '@'
 * 00000001409F7774: test    r8b, al
 * 00000001409F7777: jz      loc_1409F7828
 * 00000001409F777D: mov     r13, cr8
 * 00000001409F7781: lea     eax, [r8-3Eh]
 * 00000001409F7785: mov     cr8, rax
 * 00000001409F7789: mov     r14, rdx
 * 00000001409F778C: lea     rax, [rcx-1]
 * 00000001409F7790: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409F7797: add     rax, rdx
 * 00000001409F779A: or      rax, 0FFFh
 * 00000001409F77A0: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409F77A5: lea     rax, [r14-1]
 * 00000001409F77A9: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409F77B0: movzx   r15d, r13b
 * 00000001409F77B4: mov     rax, [rsi+468h]
 * 00000001409F77BB: xor     edx, edx
 * 00000001409F77BD: mov     rcx, r14
 * 00000001409F77C0: call    KeGuardDispatchICall
 * 00000001409F77C5: cmp     eax, 0C000022Dh
 * 00000001409F77CA: jnz     short loc_1409F77F5
 * 00000001409F77CC: test    r12d, r12d
 * 00000001409F77CF: jnz     short loc_1409F781F
 * 00000001409F77D1: lea     eax, [r12+1]
 * 00000001409F77D6: cmp     r13b, al
 * 00000001409F77D9: ja      short loc_1409F77F9
 * 00000001409F77DB: movzx   r15d, r13b
 * 00000001409F77DF: mov     cr8, r15
 * 00000001409F77E3: mov     al, [r14]
 * 00000001409F77E6: mov     rax, cr8
 * 00000001409F77EA: lea     eax, [r12+2]
 * 00000001409F77EF: mov     cr8, rax
 * 00000001409F77F3: jmp     short loc_1409F77B4
 * 00000001409F77F5: test    eax, eax
 * 00000001409F77F7: js      short loc_1409F781F
 * 00000001409F77F9: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409F7800: mov     r11d, 1000h
 * 00000001409F7806: add     rax, r11
 * 00000001409F7809: add     r14, r11
 * 00000001409F780C: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409F7813: cmp     rax, [rsp+0CE0h+var_C88]
 * 00000001409F7818: jnz     short loc_1409F77B0
 * 00000001409F781A: jmp     loc_1409F6666
 * 00000001409F781F: mov     cr8, r15
 * 00000001409F7823: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409F7828: mov     eax, [rsi+8F8h]
 * 00000001409F782E: xor     r15d, r15d
 * 00000001409F7831: mov     ecx, [r13+14h]
 * 00000001409F7835: test    eax, eax
 * 00000001409F7837: jnz     loc_1409F66A1
 * 00000001409F783D: mov     eax, ebx
 * 00000001409F783F: jmp     loc_1409F668D
 * 00000001409F7844: cmp     r10d, 0Eh
 * 00000001409F7848: jle     loc_1409FAB1B
 * 00000001409F784E: mov     ebx, 0Fh
 * 00000001409F7853: cmp     r10d, ebx
 * 00000001409F7856: jz      loc_1409FA9C7
 * 00000001409F785C: cmp     r10d, 15h
 * 00000001409F7860: jz      loc_1409FA8CA
 * 00000001409F7866: cmp     r10d, 18h
 * 00000001409F786A: jz      loc_1409F81B5
 * 00000001409F7870: cmp     r10d, r11d
 * 00000001409F7873: jz      loc_1409F7D77
 * 00000001409F7879: cmp     r10d, 1Ah
 * 00000001409F787D: jz      loc_1409F7B53
 * 00000001409F7883: cmp     r10d, 1Bh
 * 00000001409F7887: jnz     loc_140A0076C
 * 00000001409F788D: mov     eax, [rsi+830h]
 * 00000001409F7893: test    dl, al
 * 00000001409F7895: jz      loc_1409F6318
 * 00000001409F789B: mov     r14, [rsi+5A8h]
 * 00000001409F78A2: xor     eax, eax
 * 00000001409F78A4: mov     r15, [rsi+5B0h]
 * 00000001409F78AB: mov     rbx, [rsi+548h]
 * 00000001409F78B2: mov     [rsp+0CE0h+var_C78], eax
 * 00000001409F78B6: mov     rax, [rsi+178h]
 * 00000001409F78BD: mov     [rbp+0BE0h+var_C50], r14
 * 00000001409F78C1: mov     [rsp+0CE0h+var_C88], r15
 * 00000001409F78C6: call    KeGuardDispatchICall
 * 00000001409F78CB: test    dword ptr [rsi+990h], 40000000h
 * 00000001409F78D5: jnz     short loc_1409F78F0
 * 00000001409F78D7: mov     ecx, [rsi+950h]
 * 00000001409F78DD: cmp     ecx, 7
 * 00000001409F78E0: jnb     short loc_1409F78F0
 * 00000001409F78E2: mov     r12d, 1
 * 00000001409F78E8: mov     r13d, r12d
 * 00000001409F78EB: shl     r13b, cl
 * 00000001409F78EE: jmp     short loc_1409F790E
 * 00000001409F78F0: mov     rax, [rsi+128h]
 * 00000001409F78F7: xor     edx, edx
 * 00000001409F78F9: mov     rcx, [rsi+0A00h]
 * 00000001409F7900: call    KeGuardDispatchICall
 * 00000001409F7905: mov     r13b, 80h
 * 00000001409F7908: mov     r12d, 1
 * 00000001409F790E: mov     rax, [rsi+138h]
 * 00000001409F7915: xor     edx, edx
 * 00000001409F7917: mov     rcx, rbx
 * 00000001409F791A: mov     [rbp+0BE0h+var_C58], r13d
 * 00000001409F791E: call    KeGuardDispatchICall
 * 00000001409F7923: mov     rax, [rsi+138h]
 * 00000001409F792A: xor     edx, edx
 * 00000001409F792C: mov     rcx, r14
 * 00000001409F792F: call    KeGuardDispatchICall
 * 00000001409F7934: mov     r9, [rsi+5A0h]
 * 00000001409F793B: xor     eax, eax
 * 00000001409F793D: mov     r10d, eax
 * 00000001409F7940: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409F7944: mov     r8, [r9]
 * 00000001409F7947: cmp     r8, r9
 * 00000001409F794A: jz      short loc_1409F799E
 * 00000001409F794C: lea     rdx, [r8-18h]
 * 00000001409F7950: cmp     rdx, r15
 * 00000001409F7953: jz      short loc_1409F798B
 * 00000001409F7955: mov     rax, [rsi+738h]
 * 00000001409F795C: mov     rdx, [rdx+rax]
 * 00000001409F7960: mov     rax, [rsi+6C0h]
 * 00000001409F7967: mov     ecx, [rdx+rax]
 * 00000001409F796A: test    [rsi+6D8h], ecx
 * 00000001409F7970: jnz     short loc_1409F797F
 * 00000001409F7972: test    r10, r10
 * 00000001409F7975: mov     rax, rdx
 * 00000001409F7978: cmovnz  rax, r12
 * 00000001409F797C: mov     r10, rax
 * 00000001409F797F: mov     rax, [rsi+6B8h]
 * 00000001409F7986: lock or [rdx+rax], r13b
 * 00000001409F798B: mov     r8, [r8]
 * 00000001409F798E: cmp     r8, r9
 * 00000001409F7991: jnz     short loc_1409F794C
 * 00000001409F7993: mov     [rbp+0BE0h+var_C60], r10
 * 00000001409F7997: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F799E: mov     r12, [rsi+520h]
 * 00000001409F79A5: mov     r14, [r12]
 * 00000001409F79A9: cmp     r14, r12
 * 00000001409F79AC: jz      loc_1409F7A9E
 * 00000001409F79B2: mov     rdi, [rsp+0CE0h+var_C88]
 * 00000001409F79B7: mov     r15b, r13b
 * 00000001409F79BA: movzx   r8d, r13b
 * 00000001409F79BE: not     r15b
 * 00000001409F79C1: mov     r13d, [rsp+0CE0h+var_C78]
 * 00000001409F79C6: mov     dword ptr [rbp+0BE0h+arg_8], r8d
 * 00000001409F79CD: mov     rdx, [rsi+6B8h]
 * 00000001409F79D4: mov     rbx, r14
 * 00000001409F79D7: sub     rbx, [rsi+6D0h]
 * 00000001409F79DE: mov     rcx, rdx
 * 00000001409F79E1: movsx   eax, byte ptr [rdx+rbx]
 * 00000001409F79E5: test    r8d, eax
 * 00000001409F79E8: jnz     loc_1409F7A6E
 * 00000001409F79EE: mov     rax, [rsi+6C8h]
 * 00000001409F79F5: mov     r8, [rbx+rax]
 * 00000001409F79F9: xor     eax, eax
 * 00000001409F79FB: test    r8, r8
 * 00000001409F79FE: jz      short loc_1409F7A67
 * 00000001409F7A00: cmp     r8, rdi
 * 00000001409F7A03: jz      short loc_1409F7A67
 * 00000001409F7A05: cmp     [rsi+8F8h], eax
 * 00000001409F7A0B: jnz     short loc_1409F7A67
 * 00000001409F7A0D: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409F7A12: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F7A1C: add     rax, rsi
 * 00000001409F7A1F: xor     edx, edx
 * 00000001409F7A21: mov     [rsi+900h], rax
 * 00000001409F7A28: mov     rax, 0B3B74BDEE4453415h
 * 00000001409F7A32: add     rax, rcx
 * 00000001409F7A35: mov     [rsi+908h], rax
 * 00000001409F7A3C: movsxd  rax, dword ptr [rcx]
 * 00000001409F7A3F: mov     rcx, rsi
 * 00000001409F7A42: mov     [rsi+910h], rax
 * 00000001409F7A49: mov     eax, 1
 * 00000001409F7A4E: mov     [rsi+918h], rbx
 * 00000001409F7A55: mov     [rsi+8F8h], eax
 * 00000001409F7A5B: call    $$b8
 * 00000001409F7A60: mov     rcx, [rsi+6B8h]
 * 00000001409F7A67: mov     r8d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409F7A6E: lock and [rcx+rbx], r15b
 * 00000001409F7A73: mov     r14, [r14]
 * 00000001409F7A76: mov     ecx, 1
 * 00000001409F7A7B: add     r13d, ecx
 * 00000001409F7A7E: cmp     r14, r12
 * 00000001409F7A81: jnz     loc_1409F79CD
 * 00000001409F7A87: mov     r15, [rsp+0CE0h+var_C88]
 * 00000001409F7A8C: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F7A93: mov     [rsp+0CE0h+var_C78], r13d
 * 00000001409F7A98: mov     r13d, [rbp+0BE0h+var_C58]
 * 00000001409F7A9C: jmp     short loc_1409F7AA3
 * 00000001409F7A9E: mov     ecx, 1
 * 00000001409F7AA3: mov     rdx, [rbp+0BE0h+var_C60]
 * 00000001409F7AA7: test    rdx, rdx
 * 00000001409F7AAA: jz      short loc_1409F7AFC
 * 00000001409F7AAC: cmp     rdx, rcx
 * 00000001409F7AAF: jz      short loc_1409F7AC3
 * 00000001409F7AB1: mov     rax, [rsi+6B8h]
 * 00000001409F7AB8: mov     cl, r13b
 * 00000001409F7ABB: not     cl
 * 00000001409F7ABD: lock and [rdx+rax], cl
 * 00000001409F7AC1: jmp     short loc_1409F7AFC
 * 00000001409F7AC3: mov     r10, [rsi+5A0h]
 * 00000001409F7ACA: mov     r9, [r10]
 * 00000001409F7ACD: jmp     short loc_1409F7AF7
 * 00000001409F7ACF: lea     r8, [r9-18h]
 * 00000001409F7AD3: cmp     r8, r15
 * 00000001409F7AD6: jz      short loc_1409F7AF4
 * 00000001409F7AD8: mov     rax, [rsi+738h]
 * 00000001409F7ADF: mov     dl, r13b
 * 00000001409F7AE2: not     dl
 * 00000001409F7AE4: mov     r8, [r8+rax]
 * 00000001409F7AE8: mov     rax, [rsi+6B8h]
 * 00000001409F7AEF: lock and [r8+rax], dl
 * 00000001409F7AF4: mov     r9, [r9]
 * 00000001409F7AF7: cmp     r9, r10
 * 00000001409F7AFA: jnz     short loc_1409F7ACF
 * 00000001409F7AFC: mov     rax, [rsi+140h]
 * 00000001409F7B03: xor     edx, edx
 * 00000001409F7B05: mov     rcx, [rbp+0BE0h+var_C50]
 * 00000001409F7B09: call    KeGuardDispatchICall
 * 00000001409F7B0E: cmp     r13b, 80h
 * 00000001409F7B12: jnz     short loc_1409F7B29
 * 00000001409F7B14: mov     rax, [rsi+130h]
 * 00000001409F7B1B: xor     edx, edx
 * 00000001409F7B1D: mov     rcx, [rsi+0A00h]
 * 00000001409F7B24: call    KeGuardDispatchICall
 * 00000001409F7B29: mov     rcx, [rsi+548h]
 * 00000001409F7B30: xor     edx, edx
 * 00000001409F7B32: mov     rax, [rsi+140h]
 * 00000001409F7B39: call    KeGuardDispatchICall
 * 00000001409F7B3E: mov     rax, [rsi+180h]
 * 00000001409F7B45: call    KeGuardDispatchICall
 * 00000001409F7B4A: mov     eax, [rsp+0CE0h+var_C78]
 * 00000001409F7B4E: jmp     loc_1409F7382
 * 00000001409F7B53: mov     eax, [rsi+830h]
 * 00000001409F7B59: test    dl, al
 * 00000001409F7B5B: jnz     loc_1409F6318
 * 00000001409F7B61: mov     r14, [rsi+5A8h]
 * 00000001409F7B68: xor     eax, eax
 * 00000001409F7B6A: mov     rbx, [rsi+548h]
 * 00000001409F7B71: mov     r13d, eax
 * 00000001409F7B74: mov     dword ptr [rbp+0BE0h+arg_8], eax
 * 00000001409F7B7A: mov     rax, [rsi+5B0h]
 * 00000001409F7B81: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409F7B86: mov     rax, [rsi+178h]
 * 00000001409F7B8D: mov     [rbp+0BE0h+var_C60], r14
 * 00000001409F7B91: call    KeGuardDispatchICall
 * 00000001409F7B96: test    dword ptr [rsi+990h], 40000000h
 * 00000001409F7BA0: jnz     short loc_1409F7BBB
 * 00000001409F7BA2: mov     ecx, [rsi+950h]
 * 00000001409F7BA8: cmp     ecx, 7
 * 00000001409F7BAB: jnb     short loc_1409F7BBB
 * 00000001409F7BAD: mov     r12d, 1
 * 00000001409F7BB3: mov     r15d, r12d
 * 00000001409F7BB6: shl     r15b, cl
 * 00000001409F7BB9: jmp     short loc_1409F7BD9
 * 00000001409F7BBB: mov     rax, [rsi+128h]
 * 00000001409F7BC2: xor     edx, edx
 * 00000001409F7BC4: mov     rcx, [rsi+0A00h]
 * 00000001409F7BCB: call    KeGuardDispatchICall
 * 00000001409F7BD0: mov     r15b, 80h
 * 00000001409F7BD3: mov     r12d, 1
 * 00000001409F7BD9: mov     rax, [rsi+138h]
 * 00000001409F7BE0: xor     edx, edx
 * 00000001409F7BE2: mov     rcx, rbx
 * 00000001409F7BE5: call    KeGuardDispatchICall
 * 00000001409F7BEA: mov     r8, [rsi+520h]
 * 00000001409F7BF1: mov     rdx, [r8]
 * 00000001409F7BF4: cmp     rdx, r8
 * 00000001409F7BF7: jz      short loc_1409F7C21
 * 00000001409F7BF9: mov     rax, [rsi+6B8h]
 * 00000001409F7C00: mov     rcx, rdx
 * 00000001409F7C03: sub     rcx, [rsi+6D0h]
 * 00000001409F7C0A: lock or [rcx+rax], r15b
 * 00000001409F7C0F: mov     rdx, [rdx]
 * 00000001409F7C12: add     r13d, r12d
 * 00000001409F7C15: cmp     rdx, r8
 * 00000001409F7C18: jnz     short loc_1409F7BF9
 * 00000001409F7C1A: mov     dword ptr [rbp+0BE0h+arg_8], r13d
 * 00000001409F7C21: mov     rax, [rsi+138h]
 * 00000001409F7C28: xor     edx, edx
 * 00000001409F7C2A: mov     rcx, r14
 * 00000001409F7C2D: call    KeGuardDispatchICall
 * 00000001409F7C32: mov     r12, [rsi+5A0h]
 * 00000001409F7C39: mov     r14, [r12]
 * 00000001409F7C3D: cmp     r14, r12
 * 00000001409F7C40: jz      loc_1409F7D19
 * 00000001409F7C46: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409F7C4B: xor     r13d, r13d
 * 00000001409F7C4E: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409F7C53: mov     rcx, r14
 * 00000001409F7C56: sub     rcx, [rsi+740h]
 * 00000001409F7C5D: cmp     rcx, rax
 * 00000001409F7C60: jz      loc_1409F7CFF
 * 00000001409F7C66: mov     r8, [rsi+6B8h]
 * 00000001409F7C6D: mov     rax, [rsi+738h]
 * 00000001409F7C74: mov     rdx, r8
 * 00000001409F7C77: mov     rbx, [rcx+rax]
 * 00000001409F7C7B: test    [r8+rbx], r15b
 * 00000001409F7C7F: jnz     short loc_1409F7CF1
 * 00000001409F7C81: mov     rax, [rsi+6C0h]
 * 00000001409F7C88: mov     ecx, [rbx+rax]
 * 00000001409F7C8B: test    [rsi+6D8h], ecx
 * 00000001409F7C91: jz      short loc_1409F7CF1
 * 00000001409F7C93: cmp     [rsi+8F8h], r13d
 * 00000001409F7C9A: jnz     short loc_1409F7CF1
 * 00000001409F7C9C: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F7CA6: xor     edx, edx
 * 00000001409F7CA8: add     rax, rsi
 * 00000001409F7CAB: mov     rcx, rsi
 * 00000001409F7CAE: mov     [rsi+900h], rax
 * 00000001409F7CB5: mov     rax, 0B3B74BDEE4453415h
 * 00000001409F7CBF: add     rax, rdi
 * 00000001409F7CC2: mov     [rsi+908h], rax
 * 00000001409F7CC9: movsxd  rax, dword ptr [rdi]
 * 00000001409F7CCC: mov     [rsi+910h], rax
 * 00000001409F7CD3: mov     eax, 1
 * 00000001409F7CD8: mov     [rsi+918h], rbx
 * 00000001409F7CDF: mov     [rsi+8F8h], eax
 * 00000001409F7CE5: call    $$b8
 * 00000001409F7CEA: mov     rdx, [rsi+6B8h]
 * 00000001409F7CF1: mov     al, r15b
 * 00000001409F7CF4: not     al
 * 00000001409F7CF6: lock and [rbx+rdx], al
 * 00000001409F7CFA: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409F7CFF: mov     r14, [r14]
 * 00000001409F7D02: cmp     r14, r12
 * 00000001409F7D05: jnz     loc_1409F7C53
 * 00000001409F7D0B: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409F7D12: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F7D19: mov     rax, [rsi+140h]
 * 00000001409F7D20: xor     edx, edx
 * 00000001409F7D22: mov     rcx, [rbp+0BE0h+var_C60]
 * 00000001409F7D26: call    KeGuardDispatchICall
 * 00000001409F7D2B: cmp     r15b, 80h
 * 00000001409F7D2F: jnz     short loc_1409F7D46
 * 00000001409F7D31: mov     rax, [rsi+130h]
 * 00000001409F7D38: xor     edx, edx
 * 00000001409F7D3A: mov     rcx, [rsi+0A00h]
 * 00000001409F7D41: call    KeGuardDispatchICall
 * 00000001409F7D46: mov     rcx, [rsi+548h]
 * 00000001409F7D4D: xor     edx, edx
 * 00000001409F7D4F: mov     rax, [rsi+140h]
 * 00000001409F7D56: call    KeGuardDispatchICall
 * 00000001409F7D5B: mov     rax, [rsi+180h]
 * 00000001409F7D62: call    KeGuardDispatchICall
 * 00000001409F7D67: shl     r13d, 8
 * 00000001409F7D6B: add     [rsi+828h], r13d
 * 00000001409F7D72: jmp     loc_1409F6318
 * 00000001409F7D77: mov     r12, [rsi+530h]
 * 00000001409F7D7E: xor     eax, eax
 * 00000001409F7D80: mov     [rsp+0CE0h+var_C78], eax
 * 00000001409F7D84: mov     rax, [rsi+378h]
 * 00000001409F7D8B: call    KeGuardDispatchICall
 * 00000001409F7D90: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409F7D94: cli
 * 00000001409F7D95: mov     rcx, gs:20h
 * 00000001409F7D9E: mov     rax, [rsi+648h]
 * 00000001409F7DA5: mov     rcx, [rcx+rax]
 * 00000001409F7DA9: sti
 * 00000001409F7DAA: mov     rax, [rsi+168h]
 * 00000001409F7DB1: call    KeGuardDispatchICall
 * 00000001409F7DB6: mov     rcx, [rsi+538h]
 * 00000001409F7DBD: mov     ebx, 1
 * 00000001409F7DC2: mov     rax, [rsi+0F0h]
 * 00000001409F7DC9: mov     dl, bl
 * 00000001409F7DCB: call    KeGuardDispatchICall
 * 00000001409F7DD0: mov     rax, [rsi+610h]
 * 00000001409F7DD7: mov     rcx, [rax]
 * 00000001409F7DDA: mov     r13d, [rcx]
 * 00000001409F7DDD: lea     rdx, [rcx+10h]
 * 00000001409F7DE1: mov     [rsp+0CE0h+var_C88], rdx
 * 00000001409F7DE6: lea     rax, ds:0[r13*2]
 * 00000001409F7DEE: add     rax, r13
 * 00000001409F7DF1: lea     rax, [rdx+rax*8]
 * 00000001409F7DF5: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409F7DF9: xor     eax, eax
 * 00000001409F7DFB: mov     dword ptr [rbp+0BE0h+arg_8], eax
 * 00000001409F7E01: cmp     [rcx+0Ch], al
 * 00000001409F7E04: jz      short loc_1409F7E1A
 * 00000001409F7E06: mov     r13d, eax
 * 00000001409F7E09: mov     rax, [r12]
 * 00000001409F7E0D: jmp     short loc_1409F7E15
 * 00000001409F7E0F: mov     rax, [rax]
 * 00000001409F7E12: add     r13d, ebx
 * 00000001409F7E15: cmp     rax, r12
 * 00000001409F7E18: jnz     short loc_1409F7E0F
 * 00000001409F7E1A: mov     r8d, [rsi+810h]
 * 00000001409F7E21: mov     r15d, r13d
 * 00000001409F7E24: shl     r15d, 3
 * 00000001409F7E28: rdtsc
 * 00000001409F7E2A: shl     rdx, 20h
 * 00000001409F7E2E: mov     r9, 7010008004002001h
 * 00000001409F7E38: or      rax, rdx
 * 00000001409F7E3B: mov     rcx, rax
 * 00000001409F7E3E: ror     rax, 3
 * 00000001409F7E42: xor     rcx, rax
 * 00000001409F7E45: mov     rax, r9
 * 00000001409F7E48: mul     rcx
 * 00000001409F7E4B: mov     rbx, rdx
 * 00000001409F7E4E: mov     [rbp+0BE0h+var_348], rdx
 * 00000001409F7E55: xor     ebx, eax
 * 00000001409F7E57: and     ebx, 7FFh
 * 00000001409F7E5D: rdtsc
 * 00000001409F7E5F: shl     rdx, 20h
 * 00000001409F7E63: or      rax, rdx
 * 00000001409F7E66: mov     rcx, rax
 * 00000001409F7E69: ror     rax, 3
 * 00000001409F7E6D: xor     rcx, rax
 * 00000001409F7E70: mov     rax, r9
 * 00000001409F7E73: mul     rcx
 * 00000001409F7E76: lea     ecx, [rbx+1]
 * 00000001409F7E79: xor     rax, rdx
 * 00000001409F7E7C: mov     [rbp+0BE0h+var_340], rdx
 * 00000001409F7E83: xor     edx, edx
 * 00000001409F7E85: div     rcx
 * 00000001409F7E88: mov     rax, [rsi+0F8h]
 * 00000001409F7E8F: mov     ecx, 200h
 * 00000001409F7E94: mov     r14, rdx
 * 00000001409F7E97: lea     edx, [rbx+r15]
 * 00000001409F7E9B: call    KeGuardDispatchICall
 * 00000001409F7EA0: mov     r11, rax
 * 00000001409F7EA3: xor     eax, eax
 * 00000001409F7EA5: test    r11, r11
 * 00000001409F7EA8: jnz     short loc_1409F7EB8
 * 00000001409F7EAA: lea     ecx, [rax+1]
 * 00000001409F7EAD: add     [rsi+0A18h], ecx
 * 00000001409F7EB3: jmp     loc_1409F800A
 * 00000001409F7EB8: mov     r10d, r14d
 * 00000001409F7EBB: mov     r9, r11
 * 00000001409F7EBE: cmp     r14d, 8
 * 00000001409F7EC2: jb      short loc_1409F7F19
 * 00000001409F7EC4: mov     r8d, r14d
 * 00000001409F7EC7: mov     esi, 1
 * 00000001409F7ECC: shr     r8, 3
 * 00000001409F7ED0: mov     rdi, 7010008004002001h
 * 00000001409F7EDA: rdtsc
 * 00000001409F7EDC: shl     rdx, 20h
 * 00000001409F7EE0: add     r10d, 0FFFFFFF8h
 * 00000001409F7EE4: or      rax, rdx
 * 00000001409F7EE7: mov     rcx, rax
 * 00000001409F7EEA: ror     rax, 3
 * 00000001409F7EEE: xor     rcx, rax
 * 00000001409F7EF1: mov     rax, rdi
 * 00000001409F7EF4: mul     rcx
 * 00000001409F7EF7: mov     [rbp+0BE0h+var_338], rdx
 * 00000001409F7EFE: xor     rdx, rax
 * 00000001409F7F01: mov     [r9], rdx
 * 00000001409F7F04: add     r9, 8
 * 00000001409F7F08: sub     r8, rsi
 * 00000001409F7F0B: jnz     short loc_1409F7EDA
 * 00000001409F7F0D: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F7F12: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F7F19: test    r10d, r10d
 * 00000001409F7F1C: jz      short loc_1409F7F61
 * 00000001409F7F1E: rdtsc
 * 00000001409F7F20: shl     rdx, 20h
 * 00000001409F7F24: or      rax, rdx
 * 00000001409F7F27: mov     rcx, rax
 * 00000001409F7F2A: ror     rax, 3
 * 00000001409F7F2E: xor     rcx, rax
 * 00000001409F7F31: mov     rax, 7010008004002001h
 * 00000001409F7F3B: mul     rcx
 * 00000001409F7F3E: mov     ecx, 0FFFFFFFFh
 * 00000001409F7F43: mov     [rbp+0BE0h+var_330], rdx
 * 00000001409F7F4A: xor     rdx, rax
 * 00000001409F7F4D: mov     eax, 1
 * 00000001409F7F52: mov     [r9], dl
 * 00000001409F7F55: add     r9, rax
 * 00000001409F7F58: shr     rdx, 8
 * 00000001409F7F5C: add     r10d, ecx
 * 00000001409F7F5F: jnz     short loc_1409F7F52
 * 00000001409F7F61: mov     r8d, r15d
 * 00000001409F7F64: sub     ebx, r14d
 * 00000001409F7F67: add     r8, r11
 * 00000001409F7F6A: mov     r10d, r14d
 * 00000001409F7F6D: add     r8, r10
 * 00000001409F7F70: mov     r14d, 1
 * 00000001409F7F76: mov     r15, 7010008004002001h
 * 00000001409F7F80: cmp     ebx, 8
 * 00000001409F7F83: jb      short loc_1409F7FBE
 * 00000001409F7F85: mov     r9d, ebx
 * 00000001409F7F88: shr     r9, 3
 * 00000001409F7F8C: rdtsc
 * 00000001409F7F8E: shl     rdx, 20h
 * 00000001409F7F92: add     ebx, 0FFFFFFF8h
 * 00000001409F7F95: or      rax, rdx
 * 00000001409F7F98: mov     rcx, rax
 * 00000001409F7F9B: ror     rax, 3
 * 00000001409F7F9F: xor     rcx, rax
 * 00000001409F7FA2: mov     rax, r15
 * 00000001409F7FA5: mul     rcx
 * 00000001409F7FA8: mov     [rbp+0BE0h+var_250], rdx
 * 00000001409F7FAF: xor     rdx, rax
 * 00000001409F7FB2: mov     [r8], rdx
 * 00000001409F7FB5: add     r8, 8
 * 00000001409F7FB9: sub     r9, r14
 * 00000001409F7FBC: jnz     short loc_1409F7F8C
 * 00000001409F7FBE: test    ebx, ebx
 * 00000001409F7FC0: jz      short loc_1409F7FF8
 * 00000001409F7FC2: rdtsc
 * 00000001409F7FC4: shl     rdx, 20h
 * 00000001409F7FC8: or      rax, rdx
 * 00000001409F7FCB: mov     rcx, rax
 * 00000001409F7FCE: ror     rax, 3
 * 00000001409F7FD2: xor     rcx, rax
 * 00000001409F7FD5: mov     rax, r15
 * 00000001409F7FD8: mul     rcx
 * 00000001409F7FDB: mov     [rbp+0BE0h+var_248], rdx
 * 00000001409F7FE2: xor     rdx, rax
 * 00000001409F7FE5: mov     eax, 0FFFFFFFFh
 * 00000001409F7FEA: mov     [r8], dl
 * 00000001409F7FED: add     r8, r14
 * 00000001409F7FF0: shr     rdx, 8
 * 00000001409F7FF4: add     ebx, eax
 * 00000001409F7FF6: jnz     short loc_1409F7FEA
 * 00000001409F7FF8: lea     r15, [r11+r10]
 * 00000001409F7FFC: mov     [rbp+0BE0h+var_A20], r11
 * 00000001409F8003: test    r15, r15
 * 00000001409F8006: jnz     short loc_1409F8016
 * 00000001409F8008: xor     eax, eax
 * 00000001409F800A: mov     [rbp+0BE0h+var_A20], rax
 * 00000001409F8011: jmp     loc_1409F8152
 * 00000001409F8016: mov     rbx, [r12]
 * 00000001409F801A: cmp     rbx, r12
 * 00000001409F801D: jz      short loc_1409F806C
 * 00000001409F801F: mov     edi, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409F8025: mov     rax, [rsi+750h]
 * 00000001409F802C: mov     rcx, rbx
 * 00000001409F802F: sub     rcx, [rsi+748h]
 * 00000001409F8036: mov     r14, [rcx+rax]
 * 00000001409F803A: mov     rax, [rsi+2A8h]
 * 00000001409F8041: mov     rcx, r14
 * 00000001409F8044: call    KeGuardDispatchICall
 * 00000001409F8049: test    eax, eax
 * 00000001409F804B: jnz     short loc_1409F805A
 * 00000001409F804D: cmp     edi, r13d
 * 00000001409F8050: jnb     short loc_1409F805A
 * 00000001409F8052: mov     eax, edi
 * 00000001409F8054: inc     edi
 * 00000001409F8056: mov     [r15+rax*8], r14
 * 00000001409F805A: mov     rbx, [rbx]
 * 00000001409F805D: inc     [rsp+0CE0h+var_C78]
 * 00000001409F8061: cmp     rbx, r12
 * 00000001409F8064: jnz     short loc_1409F8025
 * 00000001409F8066: mov     dword ptr [rbp+0BE0h+arg_8], edi
 * 00000001409F806C: mov     r14d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409F8073: mov     rcx, r15
 * 00000001409F8076: mov     rax, [rsi+398h]
 * 00000001409F807D: mov     edx, r14d
 * 00000001409F8080: call    KeGuardDispatchICall
 * 00000001409F8085: mov     r12, [rsp+0CE0h+var_C88]
 * 00000001409F808A: mov     r13, [rbp+0BE0h+var_C60]
 * 00000001409F808E: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409F8093: mov     rbx, [r12+8]
 * 00000001409F8098: mov     rax, [rsi+2A8h]
 * 00000001409F809F: mov     rcx, rbx
 * 00000001409F80A2: call    KeGuardDispatchICall
 * 00000001409F80A7: test    eax, eax
 * 00000001409F80A9: jnz     loc_1409F813E
 * 00000001409F80AF: xor     eax, eax
 * 00000001409F80B1: lea     edx, [r14-1]
 * 00000001409F80B5: mov     r8d, eax
 * 00000001409F80B8: test    edx, edx
 * 00000001409F80BA: js      short loc_1409F80E8
 * 00000001409F80BC: lea     ecx, [rdx+r8]
 * 00000001409F80C0: sar     ecx, 1
 * 00000001409F80C2: movsxd  rax, ecx
 * 00000001409F80C5: cmp     rbx, [r15+rax*8]
 * 00000001409F80C9: jnb     short loc_1409F80D6
 * 00000001409F80CB: xor     eax, eax
 * 00000001409F80CD: test    ecx, ecx
 * 00000001409F80CF: jz      short loc_1409F80E8
 * 00000001409F80D1: lea     edx, [rcx-1]
 * 00000001409F80D4: jmp     short loc_1409F80DC
 * 00000001409F80D6: jbe     short loc_1409F80E1
 * 00000001409F80D8: lea     r8d, [rcx+1]
 * 00000001409F80DC: cmp     edx, r8d
 * 00000001409F80DF: jge     short loc_1409F80BC
 * 00000001409F80E1: cmp     edx, r8d
 * 00000001409F80E4: jge     short loc_1409F813E
 * 00000001409F80E6: xor     eax, eax
 * 00000001409F80E8: cmp     [rsi+8F8h], eax
 * 00000001409F80EE: jnz     short loc_1409F813E
 * 00000001409F80F0: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F80FA: xor     edx, edx
 * 00000001409F80FC: add     rax, rsi
 * 00000001409F80FF: mov     rcx, rsi
 * 00000001409F8102: mov     [rsi+900h], rax
 * 00000001409F8109: mov     rax, 0B3B74BDEE4453415h
 * 00000001409F8113: add     rax, rdi
 * 00000001409F8116: mov     [rsi+908h], rax
 * 00000001409F811D: movsxd  rax, dword ptr [rdi]
 * 00000001409F8120: mov     [rsi+910h], rax
 * 00000001409F8127: mov     eax, 1
 * 00000001409F812C: mov     [rsi+918h], rbx
 * 00000001409F8133: mov     [rsi+8F8h], eax
 * 00000001409F8139: call    $$b8
 * 00000001409F813E: add     r12, 18h
 * 00000001409F8142: cmp     r12, r13
 * 00000001409F8145: jb      loc_1409F8093
 * 00000001409F814B: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F8152: mov     rcx, [rsi+538h]
 * 00000001409F8159: mov     rax, [rsi+118h]
 * 00000001409F8160: call    KeGuardDispatchICall
 * 00000001409F8165: mov     rax, [rsi+170h]
 * 00000001409F816C: call    KeGuardDispatchICall
 * 00000001409F8171: mov     rax, [rsi+380h]
 * 00000001409F8178: mov     rcx, [rbp+0BE0h+var_C50]
 * 00000001409F817C: call    KeGuardDispatchICall
 * 00000001409F8181: xor     eax, eax
 * 00000001409F8183: cmp     [rbp+0BE0h+var_A20], rax
 * 00000001409F818A: jz      loc_1409F6318
 * 00000001409F8190: mov     eax, [rsp+0CE0h+var_C78]
 * 00000001409F8194: shl     eax, 9
 * 00000001409F8197: add     [rsi+828h], eax
 * 00000001409F819D: mov     rax, [rsi+100h]
 * 00000001409F81A4: mov     rcx, [rbp+0BE0h+var_A20]
 * 00000001409F81AB: call    KeGuardDispatchICall
 * 00000001409F81B0: jmp     loc_1409F6318
 * 00000001409F81B5: mov     r12d, 40000000h
 * 00000001409F81BB: test    [rsi+990h], r12d
 * 00000001409F81C2: jz      short loc_1409F8220
 * 00000001409F81C4: test    dword ptr [rsi+994h], 1000h
 * 00000001409F81CE: jnz     short loc_1409F8220
 * 00000001409F81D0: rdtsc
 * 00000001409F81D2: shl     rdx, 20h
 * 00000001409F81D6: or      rax, rdx
 * 00000001409F81D9: mov     rcx, rax
 * 00000001409F81DC: ror     rax, 3
 * 00000001409F81E0: xor     rcx, rax
 * 00000001409F81E3: mov     rax, 7010008004002001h
 * 00000001409F81ED: mul     rcx
 * 00000001409F81F0: mov     rcx, rdx
 * 00000001409F81F3: mov     [rbp+0BE0h+var_1E0], rdx
 * 00000001409F81FA: xor     rcx, rax
 * 00000001409F81FD: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001409F8207: mul     rcx
 * 00000001409F820A: shr     rdx, 2
 * 00000001409F820E: lea     rax, [rdx+rdx*4]
 * 00000001409F8212: mov     edx, 1
 * 00000001409F8217: sub     rcx, rax
 * 00000001409F821A: mov     [rsi+824h], ecx
 * 00000001409F8220: mov     ecx, [rsi+824h]
 * 00000001409F8226: xor     eax, eax
 * 00000001409F8228: test    ecx, ecx
 * 00000001409F822A: jz      loc_1409FA739
 * 00000001409F8230: sub     ecx, 1
 * 00000001409F8233: jz      loc_1409FA5CF
 * 00000001409F8239: sub     ecx, 1
 * 00000001409F823C: jz      loc_1409FA427
 * 00000001409F8242: sub     ecx, 1
 * 00000001409F8245: jz      loc_1409F85A7
 * 00000001409F824B: sub     ecx, 1
 * 00000001409F824E: jz      loc_1409F83FC
 * 00000001409F8254: cmp     ecx, 1
 * 00000001409F8257: jnz     loc_1409FA8BA
 * 00000001409F825D: mov     rbx, r13
 * 00000001409F8260: mov     [rbp+0BE0h+arg_10], 0FFh
 * 00000001409F8267: mov     r13d, eax
 * 00000001409F826A: mov     r14d, eax
 * 00000001409F826D: mov     r15d, eax
 * 00000001409F8270: jmp     short loc_1409F8274
 * 00000001409F8272: xor     eax, eax
 * 00000001409F8274: mov     [rbp+0BE0h+var_960], rax
 * 00000001409F827B: lea     r9, [rbp+0BE0h+var_A98]
 * 00000001409F8282: mov     rax, [rsi+430h]
 * 00000001409F8289: lea     r8, [rbp+0BE0h+arg_10]
 * 00000001409F8290: lea     rdx, [rbp+0BE0h+var_960]
 * 00000001409F8297: mov     ecx, r14d
 * 00000001409F829A: call    KeGuardDispatchICall
 * 00000001409F829F: test    eax, eax
 * 00000001409F82A1: jz      loc_1409F83DB
 * 00000001409F82A7: mov     r12d, 1
 * 00000001409F82AD: mov     rax, [rsi+208h]
 * 00000001409F82B4: lea     rdx, [rbp+0BE0h+var_1D8]
 * 00000001409F82BB: mov     rcx, [rbp+0BE0h+var_A98]
 * 00000001409F82C2: add     r13d, r12d
 * 00000001409F82C5: call    KeGuardDispatchICall
 * 00000001409F82CA: test    rax, rax
 * 00000001409F82CD: jnz     loc_1409F83AF
 * 00000001409F82D3: test    dword ptr [rsi+990h], 40000000h
 * 00000001409F82DD: jz      short loc_1409F8326
 * 00000001409F82DF: mov     rcx, [rsi+0A80h]
 * 00000001409F82E6: lea     edx, [rax+30h]
 * 00000001409F82E9: lea     r8d, [rax+6]
 * 00000001409F82ED: mov     rax, [rbx]
 * 00000001409F82F0: add     edx, 0FFFFFFF8h
 * 00000001409F82F3: mov     [rcx], rax
 * 00000001409F82F6: add     rbx, 8
 * 00000001409F82FA: add     rcx, 8
 * 00000001409F82FE: sub     r8, r12
 * 00000001409F8301: jnz     short loc_1409F82ED
 * 00000001409F8303: test    edx, edx
 * 00000001409F8305: jz      short loc_1409F831F
 * 00000001409F8307: mov     esi, 0FFFFFFFFh
 * 00000001409F830C: mov     al, [rbx]
 * 00000001409F830E: add     rbx, r12
 * 00000001409F8311: mov     [rcx], al
 * 00000001409F8313: add     rcx, r12
 * 00000001409F8316: add     edx, esi
 * 00000001409F8318: jnz     short loc_1409F830C
 * 00000001409F831A: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F831F: mov     rbx, [rsi+0A80h]
 * 00000001409F8326: mov     rax, [rbp+0BE0h+var_A98]
 * 00000001409F832D: mov     [rbx+18h], rax
 * 00000001409F8331: mov     rax, [rsi+590h]
 * 00000001409F8338: mov     [rax], rbx
 * 00000001409F833B: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409F8342: mov     rax, [rbp+0BE0h+var_A98]
 * 00000001409F8349: mov     rcx, [rsi+590h]
 * 00000001409F8350: mov     [rcx+8], rax
 * 00000001409F8354: xor     eax, eax
 * 00000001409F8356: mov     dword ptr [rcx+14h], 1000h
 * 00000001409F835D: cmp     [rsi+8F8h], eax
 * 00000001409F8363: jnz     short loc_1409F83AF
 * 00000001409F8365: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F836F: xor     edx, edx
 * 00000001409F8371: add     rax, rsi
 * 00000001409F8374: mov     rcx, rsi
 * 00000001409F8377: mov     [rsi+900h], rax
 * 00000001409F837E: mov     rax, 0B3B74BDEE4453415h
 * 00000001409F8388: add     rax, rbx
 * 00000001409F838B: mov     [rsi+908h], rax
 * 00000001409F8392: movsxd  rax, dword ptr [rbx]
 * 00000001409F8395: mov     [rsi+910h], rax
 * 00000001409F839C: mov     [rsi+918h], r15
 * 00000001409F83A3: mov     [rsi+8F8h], r12d
 * 00000001409F83AA: call    $$b8
 * 00000001409F83AF: mov     rax, [rsi+430h]
 * 00000001409F83B6: lea     r9, [rbp+0BE0h+var_A98]
 * 00000001409F83BD: lea     r8, [rbp+0BE0h+arg_10]
 * 00000001409F83C4: mov     ecx, r14d
 * 00000001409F83C7: lea     rdx, [rbp+0BE0h+var_960]
 * 00000001409F83CE: call    KeGuardDispatchICall
 * 00000001409F83D3: test    eax, eax
 * 00000001409F83D5: jnz     loc_1409F82AD
 * 00000001409F83DB: mov     edx, 1
 * 00000001409F83E0: add     r14d, edx
 * 00000001409F83E3: add     r15, rdx
 * 00000001409F83E6: cmp     r14d, 3
 * 00000001409F83EA: jb      loc_1409F8272
 * 00000001409F83F0: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F83F7: jmp     loc_1409FA885
 * 00000001409F83FC: mov     r13d, eax
 * 00000001409F83FF: mov     [rbp+0BE0h+var_BE0], eax
 * 00000001409F8402: mov     rax, [rsi+318h]
 * 00000001409F8409: xor     ecx, ecx
 * 00000001409F840B: call    KeGuardDispatchICall
 * 00000001409F8410: mov     r15, rax
 * 00000001409F8413: xor     eax, eax
 * 00000001409F8415: test    r15, r15
 * 00000001409F8418: jz      loc_1409FA880
 * 00000001409F841E: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409F8423: mov     [rbp+0BE0h+var_968], rax
 * 00000001409F842A: lea     rdx, [rbp+0BE0h+var_968]
 * 00000001409F8431: mov     rax, [rsi+310h]
 * 00000001409F8438: mov     rcx, r15
 * 00000001409F843B: mov     rbx, rdi
 * 00000001409F843E: mov     r12d, 1
 * 00000001409F8444: call    KeGuardDispatchICall
 * 00000001409F8449: mov     r14, rax
 * 00000001409F844C: test    rax, rax
 * 00000001409F844F: jz      loc_1409F857E
 * 00000001409F8455: lea     edi, [r12+5]
 * 00000001409F845A: xor     r13d, r13d
 * 00000001409F845D: mov     rax, [rsi+208h]
 * 00000001409F8464: lea     rdx, [rbp+0BE0h+var_1D0]
 * 00000001409F846B: mov     rcx, r14
 * 00000001409F846E: inc     r12d
 * 00000001409F8471: call    KeGuardDispatchICall
 * 00000001409F8476: test    rax, rax
 * 00000001409F8479: jnz     loc_1409F8553
 * 00000001409F847F: test    dword ptr [rsi+990h], 40000000h
 * 00000001409F8489: lea     r9d, [rax+1]
 * 00000001409F848D: jz      short loc_1409F84D5
 * 00000001409F848F: mov     rcx, [rsi+0A80h]
 * 00000001409F8496: lea     edx, [rax+30h]
 * 00000001409F8499: mov     r8, rdi
 * 00000001409F849C: mov     rax, [rbx]
 * 00000001409F849F: add     edx, 0FFFFFFF8h
 * 00000001409F84A2: mov     [rcx], rax
 * 00000001409F84A5: add     rbx, 8
 * 00000001409F84A9: add     rcx, 8
 * 00000001409F84AD: sub     r8, r9
 * 00000001409F84B0: jnz     short loc_1409F849C
 * 00000001409F84B2: test    edx, edx
 * 00000001409F84B4: jz      short loc_1409F84CE
 * 00000001409F84B6: mov     r13d, 0FFFFFFFFh
 * 00000001409F84BC: mov     al, [rbx]
 * 00000001409F84BE: add     rbx, r9
 * 00000001409F84C1: mov     [rcx], al
 * 00000001409F84C3: add     rcx, r9
 * 00000001409F84C6: add     edx, r13d
 * 00000001409F84C9: jnz     short loc_1409F84BC
 * 00000001409F84CB: xor     r13d, r13d
 * 00000001409F84CE: mov     rbx, [rsi+0A80h]
 * 00000001409F84D5: mov     [rbx+18h], r14
 * 00000001409F84D9: mov     [rbx+20h], r15
 * 00000001409F84DD: mov     rax, [rsi+590h]
 * 00000001409F84E4: mov     [rax], rbx
 * 00000001409F84E7: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409F84EE: mov     rax, [rsi+590h]
 * 00000001409F84F5: mov     [rax+8], r14
 * 00000001409F84F9: mov     dword ptr [rax+14h], 1000h
 * 00000001409F8500: cmp     [rsi+8F8h], r13d
 * 00000001409F8507: jnz     short loc_1409F8553
 * 00000001409F8509: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F8513: xor     edx, edx
 * 00000001409F8515: add     rax, rsi
 * 00000001409F8518: mov     rcx, rsi
 * 00000001409F851B: mov     [rsi+900h], rax
 * 00000001409F8522: mov     rax, 0B3B74BDEE4453415h
 * 00000001409F852C: add     rax, rbx
 * 00000001409F852F: mov     [rsi+908h], rax
 * 00000001409F8536: movsxd  rax, dword ptr [rbx]
 * 00000001409F8539: mov     [rsi+910h], rax
 * 00000001409F8540: mov     [rsi+918h], rdi
 * 00000001409F8547: mov     [rsi+8F8h], r9d
 * 00000001409F854E: call    $$b8
 * 00000001409F8553: mov     rax, [rsi+310h]
 * 00000001409F855A: lea     rdx, [rbp+0BE0h+var_968]
 * 00000001409F8561: mov     rcx, r15
 * 00000001409F8564: call    KeGuardDispatchICall
 * 00000001409F8569: mov     r14, rax
 * 00000001409F856C: test    rax, rax
 * 00000001409F856F: jnz     loc_1409F845D
 * 00000001409F8575: mov     r13d, [rbp+0BE0h+var_BE0]
 * 00000001409F8579: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409F857E: mov     rax, [rsi+318h]
 * 00000001409F8585: add     r13d, r12d
 * 00000001409F8588: mov     rcx, r15
 * 00000001409F858B: mov     [rbp+0BE0h+var_BE0], r13d
 * 00000001409F858F: call    KeGuardDispatchICall
 * 00000001409F8594: mov     r15, rax
 * 00000001409F8597: xor     eax, eax
 * 00000001409F8599: test    r15, r15
 * 00000001409F859C: jnz     loc_1409F8423
 * 00000001409F85A2: jmp     loc_1409FA879
 * 00000001409F85A7: mov     r13d, eax
 * 00000001409F85AA: mov     rax, [rsi+4F0h]
 * 00000001409F85B1: mov     rbx, rsi
 * 00000001409F85B4: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409F85BB: mov     r14, [rax]
 * 00000001409F85BE: mov     [rbp+0BE0h+var_C08], r14
 * 00000001409F85C2: test    [rsi+990h], r12d
 * 00000001409F85C9: jz      short loc_1409F85D2
 * 00000001409F85CB: xor     eax, eax
 * 00000001409F85CD: jmp     loc_1409FA885
 * 00000001409F85D2: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409F85D7: mov     rax, [rcx+28h]
 * 00000001409F85DB: test    rax, rax
 * 00000001409F85DE: jz      loc_1409F867F
 * 00000001409F85E4: mov     edx, 1
 * 00000001409F85E9: mov     r13d, edx
 * 00000001409F85EC: cmp     r14, rax
 * 00000001409F85EF: jz      loc_1409FA885
 * 00000001409F85F5: mov     [rcx+18h], r14
 * 00000001409F85F9: mov     rax, [rsi+590h]
 * 00000001409F8600: mov     [rax], rcx
 * 00000001409F8603: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409F860A: mov     rax, [rsi+590h]
 * 00000001409F8611: mov     [rax+8], r14
 * 00000001409F8615: mov     dword ptr [rax+14h], 1000h
 * 00000001409F861C: xor     eax, eax
 * 00000001409F861E: cmp     [rsi+8F8h], eax
 * 00000001409F8624: jnz     loc_1409FA885
 * 00000001409F862A: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F8634: add     rax, rsi
 * 00000001409F8637: mov     [rsi+900h], rax
 * 00000001409F863E: mov     rax, 0B3B74BDEE4453415h
 * 00000001409F8648: add     rax, rcx
 * 00000001409F864B: mov     [rsi+908h], rax
 * 00000001409F8652: movsxd  rax, dword ptr [rcx]
 * 00000001409F8655: mov     rcx, rsi
 * 00000001409F8658: mov     [rsi+910h], rax
 * 00000001409F865F: mov     qword ptr [rsi+918h], 5
 * 00000001409F866A: mov     [rsi+8F8h], edx
 * 00000001409F8670: xor     edx, edx
 * 00000001409F8672: call    $$b8
 * 00000001409F8677: mov     rdx, r13
 * 00000001409F867A: jmp     loc_1409FA885
 * 00000001409F867F: test    r14, r14
 * 00000001409F8682: jz      loc_1409FA880
 * 00000001409F8688: mov     rax, [rsi+200h]
 * 00000001409F868F: lea     rdx, [rbp+0BE0h+var_228]
 * 00000001409F8696: mov     r15d, 1
 * 00000001409F869C: mov     [rbp+0BE0h+var_B98], rsi
 * 00000001409F86A0: mov     rcx, r14
 * 00000001409F86A3: mov     [rbp+0BE0h+var_BE0], r15d
 * 00000001409F86A7: call    KeGuardDispatchICall
 * 00000001409F86AC: mov     r13, [rbp+0BE0h+var_220]
 * 00000001409F86B3: mov     r12d, [rbp+0BE0h+var_214]
 * 00000001409F86BA: mov     [rbp+0BE0h+var_C48], rax
 * 00000001409F86BE: xor     eax, eax
 * 00000001409F86C0: mov     dword ptr [rbp+0BE0h+arg_8], r12d
 * 00000001409F86C7: mov     [rbp+0BE0h+var_BE4], r12d
 * 00000001409F86CB: mov     [rsp+0CE0h+BugCheckParameter2], r13
 * 00000001409F86D0: test    r13, r13
 * 00000001409F86D3: jnz     short loc_1409F86DF
 * 00000001409F86D5: mov     ecx, 0C000007Bh
 * 00000001409F86DA: jmp     loc_1409FA3EB
 * 00000001409F86DF: mov     [rbp+0BE0h+var_AD8], rax
 * 00000001409F86E6: mov     ecx, 4
 * 00000001409F86EB: lea     rax, [rbp+0BE0h+var_AD0]
 * 00000001409F86F2: xor     edx, edx
 * 00000001409F86F4: mov     r8d, 0FFFFFFFFh
 * 00000001409F86FA: mov     [rax], dl
 * 00000001409F86FC: add     rax, r15
 * 00000001409F86FF: add     ecx, r8d
 * 00000001409F8702: jnz     short loc_1409F86FA
 * 00000001409F8704: xor     eax, eax
 * 00000001409F8706: mov     r15d, eax
 * 00000001409F8709: cmp     [rsi+80Ch], eax
 * 00000001409F870F: jbe     loc_1409F890E
 * 00000001409F8715: mov     edx, [rbp+0BE0h+var_AD0]
 * 00000001409F871B: mov     r9d, dword ptr [rbp+0BE0h+var_AD8+4]
 * 00000001409F8722: mov     r10d, dword ptr [rbp+0BE0h+var_AD8]
 * 00000001409F8729: mov     rax, [rsi+0A78h]
 * 00000001409F8730: mov     r14, rsi
 * 00000001409F8733: test    rax, rax
 * 00000001409F8736: cmovnz  r14, rax
 * 00000001409F873A: xor     eax, eax
 * 00000001409F873C: mov     [rsp+0CE0h+var_C88], r14
 * 00000001409F8741: mov     r11d, eax
 * 00000001409F8744: mov     r8d, [r14+808h]
 * 00000001409F874B: add     r8, r14
 * 00000001409F874E: test    r10d, r10d
 * 00000001409F8751: jz      short loc_1409F8761
 * 00000001409F8753: cmp     r9d, r15d
 * 00000001409F8756: ja      short loc_1409F8761
 * 00000001409F8758: mov     r8d, edx
 * 00000001409F875B: mov     r11d, r9d
 * 00000001409F875E: add     r8, r14
 * 00000001409F8761: cmp     r11d, r15d
 * 00000001409F8764: jz      loc_1409F889E
 * 00000001409F876A: mov     edi, 2
 * 00000001409F876F: mov     eax, r15d
 * 00000001409F8772: sub     eax, r11d
 * 00000001409F8775: mov     r14, 0AAAAAAAAAAAAAAABh
 * 00000001409F877F: mov     r9d, eax
 * 00000001409F8782: add     r11d, eax
 * 00000001409F8785: lea     r12d, [rdi+0Ah]
 * 00000001409F8789: mov     ecx, [r8]
 * 00000001409F878C: cmp     ecx, r12d
 * 00000001409F878F: jg      short loc_1409F87D4
 * 00000001409F8791: jz      short loc_1409F87F1
 * 00000001409F8793: sub     ecx, 1
 * 00000001409F8796: jz      short loc_1409F87F1
 * 00000001409F8798: sub     ecx, 6
 * 00000001409F879B: jz      short loc_1409F87C3
 * 00000001409F879D: sub     ecx, 1
 * 00000001409F87A0: jz      short loc_1409F87B9
 * 00000001409F87A2: cmp     ecx, edi
 * 00000001409F87A4: jnz     loc_1409F8830
 * 00000001409F87AA: mov     eax, [r8+1Ch]
 * 00000001409F87AE: add     eax, 3
 * 00000001409F87B1: shl     eax, 4
 * 00000001409F87B4: jmp     loc_1409F886E
 * 00000001409F87B9: movzx   eax, word ptr [r8+20h]
 * 00000001409F87BE: jmp     loc_1409F8868
 * 00000001409F87C3: mov     eax, [r8+18h]
 * 00000001409F87C7: add     eax, edi
 * 00000001409F87C9: lea     eax, [rax+rax*2]
 * 00000001409F87CC: shl     eax, 3
 * 00000001409F87CF: jmp     loc_1409F886E
 * 00000001409F87D4: cmp     ecx, 1Ch
 * 00000001409F87D7: jz      loc_1409F8863
 * 00000001409F87DD: cmp     ecx, 1Eh
 * 00000001409F87E0: jz      short loc_1409F8837
 * 00000001409F87E2: cmp     ecx, 20h ; ' '
 * 00000001409F87E5: jle     short loc_1409F8830
 * 00000001409F87E7: cmp     ecx, 22h ; '"'
 * 00000001409F87EA: jle     short loc_1409F8808
 * 00000001409F87EC: cmp     ecx, 2Bh ; '+'
 * 00000001409F87EF: jnz     short loc_1409F8830
 * 00000001409F87F1: mov     ecx, [r8+10h]
 * 00000001409F87F5: mov     rax, r14
 * 00000001409F87F8: mul     rcx
 * 00000001409F87FB: shr     rdx, 3
 * 00000001409F87FF: lea     eax, ds:30h[rdx*4]
 * 00000001409F8806: jmp     short loc_1409F886E
 * 00000001409F8808: mov     ecx, [r8+20h]
 * 00000001409F880C: mov     edx, [r8+28h]
 * 00000001409F8810: and     ecx, 0FFFh
 * 00000001409F8816: add     rdx, 0FFFh
 * 00000001409F881D: add     rdx, rcx
 * 00000001409F8820: shr     rdx, 0Ch
 * 00000001409F8824: lea     eax, [rdx+rdx*4]
 * 00000001409F8827: lea     eax, ds:30h[rax*4]
 * 00000001409F882E: jmp     short loc_1409F886E
 * 00000001409F8830: mov     eax, 30h ; '0'
 * 00000001409F8835: jmp     short loc_1409F886E
 * 00000001409F8837: mov     eax, [r8+24h]
 * 00000001409F883B: lea     ecx, [rax-1]
 * 00000001409F883E: neg     eax
 * 00000001409F8840: sbb     eax, eax
 * 00000001409F8842: and     ecx, eax
 * 00000001409F8844: mov     rax, r14
 * 00000001409F8847: mul     rcx
 * 00000001409F884A: movzx   eax, word ptr [r8+28h]
 * 00000001409F884F: shr     rdx, 3
 * 00000001409F8853: add     edx, 7
 * 00000001409F8856: and     edx, 0FFFFFFF8h
 * 00000001409F8859: add     eax, edi
 * 00000001409F885B: lea     eax, [rax+rax*2]
 * 00000001409F885E: lea     eax, [rdx+rax*8]
 * 00000001409F8861: jmp     short loc_1409F886E
 * 00000001409F8863: movzx   eax, word ptr [r8+28h]
 * 00000001409F8868: add     eax, 37h ; '7'
 * 00000001409F886B: and     eax, 0FFFFFFF8h
 * 00000001409F886E: add     r8, rax
 * 00000001409F8871: mov     eax, 1
 * 00000001409F8876: sub     r9, rax
 * 00000001409F8879: jnz     loc_1409F8789
 * 00000001409F887F: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F8884: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F888B: mov     r14, [rsp+0CE0h+var_C88]
 * 00000001409F8890: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409F8897: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409F889C: jmp     short loc_1409F88A3
 * 00000001409F889E: mov     eax, 1
 * 00000001409F88A3: mov     edx, r8d
 * 00000001409F88A6: mov     dword ptr [rbp+0BE0h+var_AD8], eax
 * 00000001409F88AC: sub     edx, r14d
 * 00000001409F88AF: mov     dword ptr [rbp+0BE0h+var_AD8+4], r11d
 * 00000001409F88B6: mov     [rbp+0BE0h+var_AD0], edx
 * 00000001409F88BC: mov     r10d, eax
 * 00000001409F88BF: movsxd  rcx, dword ptr [r8]
 * 00000001409F88C2: mov     r9d, r11d
 * 00000001409F88C5: cmp     ecx, 2Bh ; '+'
 * 00000001409F88C8: ja      short loc_1409F88EA
 * 00000001409F88CA: mov     r11, 80000001002h
 * 00000001409F88D4: bt      r11, rcx
 * 00000001409F88D8: jnb     short loc_1409F88EA
 * 00000001409F88DA: mov     rax, [rbp+0BE0h+var_C48]
 * 00000001409F88DE: cmp     [r8+8], rax
 * 00000001409F88E2: jnz     short loc_1409F88EA
 * 00000001409F88E4: cmp     [r8+10h], r12d
 * 00000001409F88E8: jz      short loc_1409F8911
 * 00000001409F88EA: lea     eax, [rcx-21h]
 * 00000001409F88ED: mov     ecx, 1
 * 00000001409F88F2: cmp     eax, ecx
 * 00000001409F88F4: ja      short loc_1409F88FC
 * 00000001409F88F6: cmp     [r8+20h], r13
 * 00000001409F88FA: jz      short loc_1409F8911
 * 00000001409F88FC: add     r15d, ecx
 * 00000001409F88FF: cmp     r15d, [rsi+80Ch]
 * 00000001409F8906: jb      loc_1409F8729
 * 00000001409F890C: xor     eax, eax
 * 00000001409F890E: mov     r8, rax
 * 00000001409F8911: mov     r14, [rbp+0BE0h+var_C08]
 * 00000001409F8915: mov     [rbp+0BE0h+var_B38], r8
 * 00000001409F891C: test    r8, r8
 * 00000001409F891F: jz      short loc_1409F892B
 * 00000001409F8921: mov     ecx, 0C000010Eh
 * 00000001409F8926: jmp     loc_1409FA3EB
 * 00000001409F892B: mov     rax, [rsi+2A8h]
 * 00000001409F8932: mov     rcx, r14
 * 00000001409F8935: call    KeGuardDispatchICall
 * 00000001409F893A: test    dword ptr [rsi+990h], 40000000h
 * 00000001409F8944: mov     r15d, eax
 * 00000001409F8947: mov     dword ptr [rbp+0BE0h+var_BF8], eax
 * 00000001409F894A: mov     eax, [rbp+0BE0h+var_BE4]
 * 00000001409F894D: mov     [rbp+0BE0h+var_C58], eax
 * 00000001409F8950: jz      short loc_1409F8973
 * 00000001409F8952: mov     r8d, 9
 * 00000001409F8958: lea     rcx, [rbp+0BE0h+var_B50]
 * 00000001409F895F: mov     rdx, r13
 * 00000001409F8962: call    sub_140A18FE4
 * 00000001409F8967: mov     rbx, [rbp+0BE0h+var_B50]
 * 00000001409F896E: jmp     loc_1409FA3E9
 * 00000001409F8973: xor     eax, eax
 * 00000001409F8975: lea     r9, [rbp+0BE0h+var_BE4]
 * 00000001409F8979: xor     r8d, r8d
 * 00000001409F897C: mov     [rbp+0BE0h+var_7B0], rax
 * 00000001409F8983: mov     [rbp+0BE0h+var_9B8], eax
 * 00000001409F8989: mov     rcx, r13
 * 00000001409F898C: mov     rax, [rsi+1F0h]
 * 00000001409F8993: lea     r12d, [r8+1]
 * 00000001409F8997: mov     dl, r12b
 * 00000001409F899A: call    KeGuardDispatchICall
 * 00000001409F899F: mov     rdx, rax
 * 00000001409F89A2: lea     r8d, [r12+0Bh]
 * 00000001409F89A7: neg     rax
 * 00000001409F89AA: mov     [rbp+0BE0h+var_7C8], rdx
 * 00000001409F89B1: lea     r9, [rbp+0BE0h+var_BE4]
 * 00000001409F89B5: mov     dl, r12b
 * 00000001409F89B8: sbb     ecx, ecx
 * 00000001409F89BA: and     ecx, [rbp+0BE0h+var_BE4]
 * 00000001409F89BD: mov     [rbp+0BE0h+var_BE4], ecx
 * 00000001409F89C0: mov     rax, [rsi+1F0h]
 * 00000001409F89C7: mov     [rbp+0BE0h+var_9C4], ecx
 * 00000001409F89CD: mov     rcx, r13
 * 00000001409F89D0: call    KeGuardDispatchICall
 * 00000001409F89D5: mov     rdx, rax
 * 00000001409F89D8: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409F89DC: neg     rax
 * 00000001409F89DF: mov     [rbp+0BE0h+var_7C0], rdx
 * 00000001409F89E6: lea     r8d, [r12+9]
 * 00000001409F89EB: mov     dl, r12b
 * 00000001409F89EE: sbb     ecx, ecx
 * 00000001409F89F0: lea     r9, [rbp+0BE0h+var_BE4]
 * 00000001409F89F4: and     ecx, [rbp+0BE0h+var_BE4]
 * 00000001409F89F7: mov     [rbp+0BE0h+var_BE4], ecx
 * 00000001409F89FA: mov     rax, [rsi+1F0h]
 * 00000001409F8A01: mov     [rsp+0CE0h+var_C78], ecx
 * 00000001409F8A05: mov     [rbp+0BE0h+var_9C0], ecx
 * 00000001409F8A0B: mov     rcx, r13
 * 00000001409F8A0E: call    KeGuardDispatchICall
 * 00000001409F8A13: mov     rdx, rax
 * 00000001409F8A16: neg     rax
 * 00000001409F8A19: mov     [rbp+0BE0h+var_7B8], rdx
 * 00000001409F8A20: sbb     ecx, ecx
 * 00000001409F8A22: and     ecx, [rbp+0BE0h+var_BE4]
 * 00000001409F8A25: mov     [rbp+0BE0h+var_BE4], ecx
 * 00000001409F8A28: mov     rax, [rsi+1F8h]
 * 00000001409F8A2F: mov     [rbp+0BE0h+var_9BC], ecx
 * 00000001409F8A35: mov     rcx, r13
 * 00000001409F8A38: call    KeGuardDispatchICall
 * 00000001409F8A3D: mov     r14, rax
 * 00000001409F8A40: test    rax, rax
 * 00000001409F8A43: jnz     short loc_1409F8A53
 * 00000001409F8A45: mov     ecx, 0C000007Bh
 * 00000001409F8A4A: mov     r14, [rbp+0BE0h+var_C08]
 * 00000001409F8A4E: jmp     loc_1409FA3EB
 * 00000001409F8A53: mov     rax, [rsi+498h]
 * 00000001409F8A5A: lea     rdx, [rbp+0BE0h+var_888]
 * 00000001409F8A61: mov     rcx, r13
 * 00000001409F8A64: call    KeGuardDispatchICall
 * 00000001409F8A69: mov     r8d, [rsi+924h]
 * 00000001409F8A70: mov     [rbp+0BE0h+var_7A8], rax
 * 00000001409F8A77: mov     eax, [rbp+0BE0h+var_888]
 * 00000001409F8A7D: mov     [rbp+0BE0h+var_9B4], eax
 * 00000001409F8A83: mov     eax, [r14+54h]
 * 00000001409F8A87: mov     [rbp+0BE0h+var_9C8], eax
 * 00000001409F8A8D: mov     eax, r15d
 * 00000001409F8A90: mov     r15d, [rsi+7E4h]
 * 00000001409F8A97: neg     eax
 * 00000001409F8A99: mov     [rbp+0BE0h+var_7D0], r13
 * 00000001409F8AA0: sbb     r9d, r9d
 * 00000001409F8AA3: and     r9d, 0Bh
 * 00000001409F8AA7: lea     eax, [r15+120h]
 * 00000001409F8AAE: mov     dword ptr [rbp+0BE0h+arg_8], r9d
 * 00000001409F8AB5: cmp     eax, [rsi+0A1Ch]
 * 00000001409F8ABB: jbe     loc_1409F8BC8
 * 00000001409F8AC1: mov     edx, eax
 * 00000001409F8AC3: mov     rcx, rsi
 * 00000001409F8AC6: call    sub_140A0BB30
 * 00000001409F8ACB: mov     r14, rax
 * 00000001409F8ACE: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409F8AD3: xor     eax, eax
 * 00000001409F8AD5: test    r14, r14
 * 00000001409F8AD8: jz      loc_1409F8BBA
 * 00000001409F8ADE: mov     ecx, [rsi+990h]
 * 00000001409F8AE4: test    cl, 4
 * 00000001409F8AE7: jnz     loc_1409F8BA9
 * 00000001409F8AED: mov     eax, [rsi+7E4h]
 * 00000001409F8AF3: and     ecx, 20000000h
 * 00000001409F8AF9: mov     r9, [rsi+7C8h]
 * 00000001409F8B00: neg     ecx
 * 00000001409F8B02: mov     rcx, rsi
 * 00000001409F8B05: sbb     r8d, r8d
 * 00000001409F8B08: and     r8d, [rsi+924h]
 * 00000001409F8B0F: cmp     eax, 8
 * 00000001409F8B12: jb      short loc_1409F8B35
 * 00000001409F8B14: mov     edx, eax
 * 00000001409F8B16: shr     rdx, 3
 * 00000001409F8B1A: xor     r12d, r12d
 * 00000001409F8B1D: lea     r10d, [r12+1]
 * 00000001409F8B22: mov     [rcx], r12
 * 00000001409F8B25: add     eax, 0FFFFFFF8h
 * 00000001409F8B28: add     rcx, 8
 * 00000001409F8B2C: sub     rdx, r10
 * 00000001409F8B2F: jnz     short loc_1409F8B22
 * 00000001409F8B31: lea     r12d, [rdx+1]
 * 00000001409F8B35: xor     edx, edx
 * 00000001409F8B37: test    eax, eax
 * 00000001409F8B39: jz      short loc_1409F8B4B
 * 00000001409F8B3B: mov     r10d, 0FFFFFFFFh
 * 00000001409F8B41: mov     [rcx], dl
 * 00000001409F8B43: add     rcx, r12
 * 00000001409F8B46: add     eax, r10d
 * 00000001409F8B49: jnz     short loc_1409F8B41
 * 00000001409F8B4B: mov     ebx, [r14+924h]
 * 00000001409F8B52: mov     [r14+924h], r8d
 * 00000001409F8B59: cmp     r8d, 3
 * 00000001409F8B5D: jz      short loc_1409F8B93
 * 00000001409F8B5F: test    dword ptr [r14+990h], 10000000h
 * 00000001409F8B6A: mov     rcx, rdx
 * 00000001409F8B6D: cmovz   ecx, r8d
 * 00000001409F8B71: test    ecx, ecx
 * 00000001409F8B73: jz      short loc_1409F8B8A
 * 00000001409F8B75: mov     rax, [r14+228h]
 * 00000001409F8B7C: lea     rcx, [r9-8]
 * 00000001409F8B80: mov     rdx, [rcx]
 * 00000001409F8B83: call    KeGuardDispatchICall
 * 00000001409F8B88: jmp     short loc_1409F8BA2
 * 00000001409F8B8A: mov     rax, [r14+100h]
 * 00000001409F8B91: jmp     short loc_1409F8B9A
 * 00000001409F8B93: mov     rax, [r14+368h]
 * 00000001409F8B9A: mov     rcx, r9
 * 00000001409F8B9D: call    KeGuardDispatchICall
 * 00000001409F8BA2: mov     [r14+924h], ebx
 * 00000001409F8BA9: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 00000001409F8BB1: mov     r9d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409F8BB8: jmp     short loc_1409F8BD6
 * 00000001409F8BBA: mov     [rbp+0BE0h+var_B98], rax
 * 00000001409F8BBE: mov     ecx, 0C000009Ah
 * 00000001409F8BC3: jmp     loc_1409F8A4A
 * 00000001409F8BC8: mov     r14, rsi
 * 00000001409F8BCB: mov     [rsp+0CE0h+var_C88], rsi
 * 00000001409F8BD0: mov     [rsi+7E4h], eax
 * 00000001409F8BD6: mov     eax, 6
 * 00000001409F8BDB: lea     r12, [r14+r15]
 * 00000001409F8BDF: add     [r14+80Ch], eax
 * 00000001409F8BE6: lea     rdi, [rbp+0BE0h+var_7D0]
 * 00000001409F8BED: mov     [rbp+0BE0h+var_958], r12
 * 00000001409F8BF4: lea     rsi, [rbp+0BE0h+var_9C8]
 * 00000001409F8BFB: mov     [rbp+0BE0h+var_B38], r12
 * 00000001409F8C02: xor     r10d, r10d
 * 00000001409F8C05: lea     r11d, [rax-5]
 * 00000001409F8C09: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409F8C0D: mov     r13d, [rsi]
 * 00000001409F8C10: mov     rdx, rax
 * 00000001409F8C13: mov     r15, [rdi]
 * 00000001409F8C16: mov     ecx, 30h ; '0'
 * 00000001409F8C1B: mov     [rbp+0BE0h+var_BF0], r13d
 * 00000001409F8C1F: mov     rax, r12
 * 00000001409F8C22: mov     [rax], r10
 * 00000001409F8C25: add     ecx, 0FFFFFFF8h
 * 00000001409F8C28: add     rax, 8
 * 00000001409F8C2C: sub     rdx, r11
 * 00000001409F8C2F: jnz     short loc_1409F8C22
 * 00000001409F8C31: test    ecx, ecx
 * 00000001409F8C33: jz      short loc_1409F8C44
 * 00000001409F8C35: mov     edx, 0FFFFFFFFh
 * 00000001409F8C3A: mov     [rax], r10b
 * 00000001409F8C3D: add     rax, r11
 * 00000001409F8C40: add     ecx, edx
 * 00000001409F8C42: jnz     short loc_1409F8C3A
 * 00000001409F8C44: mov     [r12], r9d
 * 00000001409F8C48: lea     rcx, [r15+r13]
 * 00000001409F8C4C: mov     [r12+8], r15
 * 00000001409F8C51: mov     r10, r15
 * 00000001409F8C54: mov     [r12+10h], r13d
 * 00000001409F8C59: mov     rax, r15
 * 00000001409F8C5C: add     [r14+828h], r13d
 * 00000001409F8C63: mov     ebx, [r14+814h]
 * 00000001409F8C6A: mov     r11, [r14+818h]
 * 00000001409F8C71: cmp     r15, rcx
 * 00000001409F8C74: jnb     short loc_1409F8C86
 * 00000001409F8C76: mov     edx, 40h ; '@'
 * 00000001409F8C7B: prefetchnta byte ptr [rax]
 * 00000001409F8C7E: add     rax, rdx
 * 00000001409F8C81: cmp     rax, rcx
 * 00000001409F8C84: jb      short loc_1409F8C7B
 * 00000001409F8C86: mov     r9d, r13d
 * 00000001409F8C89: mov     r8, r11
 * 00000001409F8C8C: shr     r9d, 7
 * 00000001409F8C90: test    r9d, r9d
 * 00000001409F8C93: jz      short loc_1409F8D06
 * 00000001409F8C95: mov     r13, 7010008004002001h
 * 00000001409F8C9F: mov     edx, 8
 * 00000001409F8CA4: lea     r14d, [rdx-7]
 * 00000001409F8CA8: mov     rax, [r10]
 * 00000001409F8CAB: mov     ecx, ebx
 * 00000001409F8CAD: xor     rax, r8
 * 00000001409F8CB0: mov     r8, [r10+8]
 * 00000001409F8CB4: rol     rax, cl
 * 00000001409F8CB7: add     r10, 10h
 * 00000001409F8CBB: xor     r8, rax
 * 00000001409F8CBE: rol     r8, cl
 * 00000001409F8CC1: sub     rdx, r14
 * 00000001409F8CC4: jnz     short loc_1409F8CA8
 * 00000001409F8CC6: mov     rcx, r10
 * 00000001409F8CC9: sub     rcx, r15
 * 00000001409F8CCC: xor     rcx, r11
 * 00000001409F8CCF: mov     rax, rcx
 * 00000001409F8CD2: rol     rax, 11h
 * 00000001409F8CD6: xor     rcx, rax
 * 00000001409F8CD9: mov     rax, r13
 * 00000001409F8CDC: mul     rcx
 * 00000001409F8CDF: xor     ebx, edx
 * 00000001409F8CE1: mov     [rbp+0BE0h+var_1C8], rdx
 * 00000001409F8CE8: xor     ebx, eax
 * 00000001409F8CEA: mov     rax, r14
 * 00000001409F8CED: and     ebx, 3Fh
 * 00000001409F8CF0: cmovz   ebx, eax
 * 00000001409F8CF3: mov     eax, 0FFFFFFFFh
 * 00000001409F8CF8: add     r9d, eax
 * 00000001409F8CFB: jnz     short loc_1409F8C9F
 * 00000001409F8CFD: mov     r14, [rsp+0CE0h+var_C88]
 * 00000001409F8D02: mov     r13d, [rbp+0BE0h+var_BF0]
 * 00000001409F8D06: mov     edx, r13d
 * 00000001409F8D09: mov     r11d, 1
 * 00000001409F8D0F: and     edx, 7Fh
 * 00000001409F8D12: cmp     edx, 8
 * 00000001409F8D15: jb      short loc_1409F8D32
 * 00000001409F8D17: mov     r9d, edx
 * 00000001409F8D1A: shr     r9, 3
 * 00000001409F8D1E: xor     r8, [r10]
 * 00000001409F8D21: mov     ecx, ebx
 * 00000001409F8D23: rol     r8, cl
 * 00000001409F8D26: add     r10, 8
 * 00000001409F8D2A: add     edx, 0FFFFFFF8h
 * 00000001409F8D2D: sub     r9, r11
 * 00000001409F8D30: jnz     short loc_1409F8D1E
 * 00000001409F8D32: test    edx, edx
 * 00000001409F8D34: jz      short loc_1409F8D55
 * 00000001409F8D36: mov     r14d, 0FFFFFFFFh
 * 00000001409F8D3C: movzx   eax, byte ptr [r10]
 * 00000001409F8D40: mov     ecx, ebx
 * 00000001409F8D42: xor     r8, rax
 * 00000001409F8D45: add     r10, r11
 * 00000001409F8D48: rol     r8, cl
 * 00000001409F8D4B: add     edx, r14d
 * 00000001409F8D4E: jnz     short loc_1409F8D3C
 * 00000001409F8D50: mov     r14, [rsp+0CE0h+var_C88]
 * 00000001409F8D55: mov     rax, r8
 * 00000001409F8D58: shr     rax, 1Fh
 * 00000001409F8D5C: xor     r10d, r10d
 * 00000001409F8D5F: jmp     short loc_1409F8D68
 * 00000001409F8D61: xor     r8d, eax
 * 00000001409F8D64: shr     rax, 1Fh
 * 00000001409F8D68: test    rax, rax
 * 00000001409F8D6B: jnz     short loc_1409F8D61
 * 00000001409F8D6D: mov     r9d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409F8D74: btr     r8d, 1Fh
 * 00000001409F8D79: mov     [r12+14h], r8d
 * 00000001409F8D7E: add     rdi, 8
 * 00000001409F8D82: add     [r14+828h], r13d
 * 00000001409F8D89: lea     r13d, [rax+4]
 * 00000001409F8D8D: mov     r12, [rbp+0BE0h+var_958]
 * 00000001409F8D94: lea     eax, [r13+2]
 * 00000001409F8D98: add     r12, 30h ; '0'
 * 00000001409F8D9C: add     rsi, r13
 * 00000001409F8D9F: sub     [rbp+0BE0h+var_C60], r11
 * 00000001409F8DA3: mov     [rbp+0BE0h+var_958], r12
 * 00000001409F8DAA: jnz     loc_1409F8C0D
 * 00000001409F8DB0: mov     rbx, [rbp+0BE0h+var_B38]
 * 00000001409F8DB7: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F8DBE: mov     r12, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409F8DC3: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F8DC8: mov     r15d, dword ptr [rbp+0BE0h+var_BF8]
 * 00000001409F8DCC: mov     dword ptr [rbx], 2Ch ; ','
 * 00000001409F8DD2: mov     [rbx+18h], r12
 * 00000001409F8DD6: test    dword ptr [r14+990h], 10200000h
 * 00000001409F8DE1: jnz     short loc_1409F8E0C
 * 00000001409F8DE3: test    r15d, r15d
 * 00000001409F8DE6: jnz     short loc_1409F8E11
 * 00000001409F8DE8: test    dword ptr [r14+994h], 8000h
 * 00000001409F8DF3: jz      short loc_1409F8E19
 * 00000001409F8DF5: or      [rbx+20h], r11d
 * 00000001409F8DF9: mov     rdx, r12
 * 00000001409F8DFC: mov     rcx, r14
 * 00000001409F8DFF: call    sub_140A0CC50
 * 00000001409F8E04: test    eax, eax
 * 00000001409F8E06: jz      short loc_1409F8E19
 * 00000001409F8E08: or      [rbx+20h], r13d
 * 00000001409F8E0C: test    r15d, r15d
 * 00000001409F8E0F: jz      short loc_1409F8E19
 * 00000001409F8E11: mov     eax, 2
 * 00000001409F8E16: or      [rbx+20h], eax
 * 00000001409F8E19: mov     r8d, [rbp+0BE0h+var_C58]
 * 00000001409F8E1D: lea     rax, [rbp+0BE0h+var_A28]
 * 00000001409F8E24: mov     rdx, [rbp+0BE0h+var_C48]
 * 00000001409F8E28: lea     rcx, [rbp+0BE0h+var_B98]
 * 00000001409F8E2C: mov     [rsp+0CE0h+var_CA8], rax
 * 00000001409F8E31: mov     rbx, r14
 * 00000001409F8E34: lea     rax, [rbp+0BE0h+var_B24]
 * 00000001409F8E3B: mov     [rbp+0BE0h+var_B98], r14
 * 00000001409F8E3F: mov     [rsp+0CE0h+var_CB0], rax
 * 00000001409F8E44: mov     r9, r12
 * 00000001409F8E47: mov     dword ptr [rsp+0CE0h+var_CB8], 9
 * 00000001409F8E4F: mov     dword ptr [rsp+0CE0h+BugCheckParameter4], r15d
 * 00000001409F8E54: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409F8E5B: call    sub_140A0B098
 * 00000001409F8E60: mov     ecx, eax
 * 00000001409F8E62: test    eax, eax
 * 00000001409F8E64: js      loc_1409F8A4A
 * 00000001409F8E6A: mov     rbx, [rbp+0BE0h+var_B98]
 * 00000001409F8E6E: mov     rcx, [rbp+0BE0h+var_B38]
 * 00000001409F8E75: mov     rax, rbx
 * 00000001409F8E78: mov     r9d, [rbp+0BE0h+var_A28]
 * 00000001409F8E7F: sub     rax, r14
 * 00000001409F8E82: mov     r15d, [rbp+0BE0h+var_B24]
 * 00000001409F8E89: add     rcx, rax
 * 00000001409F8E8C: sub     r9d, [rbp+0BE0h+var_B24]
 * 00000001409F8E93: add     r15, r12
 * 00000001409F8E96: mov     [rbp+0BE0h+var_B38], rcx
 * 00000001409F8E9D: xor     r8d, r8d
 * 00000001409F8EA0: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409F8EA7: lea     r13, [rcx+0C0h]
 * 00000001409F8EAE: mov     ecx, 30h ; '0'
 * 00000001409F8EB3: mov     [rsp+0CE0h+var_C88], r13
 * 00000001409F8EB8: mov     rax, r13
 * 00000001409F8EBB: lea     edx, [rcx-2Ah]
 * 00000001409F8EBE: lea     r10d, [rcx-2Fh]
 * 00000001409F8EC2: mov     [rax], r8
 * 00000001409F8EC5: add     ecx, 0FFFFFFF8h
 * 00000001409F8EC8: add     rax, 8
 * 00000001409F8ECC: sub     rdx, r10
 * 00000001409F8ECF: jnz     short loc_1409F8EC2
 * 00000001409F8ED1: mov     rdx, r10
 * 00000001409F8ED4: test    ecx, ecx
 * 00000001409F8ED6: jz      short loc_1409F8EE9
 * 00000001409F8ED8: mov     r10d, 0FFFFFFFFh
 * 00000001409F8EDE: mov     [rax], r8b
 * 00000001409F8EE1: add     rax, rdx
 * 00000001409F8EE4: add     ecx, r10d
 * 00000001409F8EE7: jnz     short loc_1409F8EDE
 * 00000001409F8EE9: mov     eax, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409F8EEF: mov     r10, r15
 * 00000001409F8EF2: mov     [r13+0], eax
 * 00000001409F8EF6: mov     rax, r15
 * 00000001409F8EF9: mov     [r13+8], r15
 * 00000001409F8EFD: mov     [r13+10h], r9d
 * 00000001409F8F01: add     [rbx+828h], r9d
 * 00000001409F8F08: mov     r14d, [rbx+814h]
 * 00000001409F8F0F: mov     r12, [rbx+818h]
 * 00000001409F8F16: mov     ecx, r9d
 * 00000001409F8F19: add     rcx, r15
 * 00000001409F8F1C: cmp     r15, rcx
 * 00000001409F8F1F: jnb     short loc_1409F8F32
 * 00000001409F8F21: mov     r8d, 40h ; '@'
 * 00000001409F8F27: prefetchnta byte ptr [rax]
 * 00000001409F8F2A: add     rax, r8
 * 00000001409F8F2D: cmp     rax, rcx
 * 00000001409F8F30: jb      short loc_1409F8F27
 * 00000001409F8F32: mov     r11d, r9d
 * 00000001409F8F35: mov     r8, r12
 * 00000001409F8F38: shr     r11d, 7
 * 00000001409F8F3C: test    r11d, r11d
 * 00000001409F8F3F: jz      short loc_1409F8FB7
 * 00000001409F8F41: mov     edi, 0FFFFFFFFh
 * 00000001409F8F46: mov     r13, 7010008004002001h
 * 00000001409F8F50: mov     eax, 8
 * 00000001409F8F55: xor     r8, [r10]
 * 00000001409F8F58: mov     ecx, r14d
 * 00000001409F8F5B: rol     r8, cl
 * 00000001409F8F5E: xor     r8, [r10+8]
 * 00000001409F8F62: add     r10, 10h
 * 00000001409F8F66: rol     r8, cl
 * 00000001409F8F69: sub     rax, rdx
 * 00000001409F8F6C: jnz     short loc_1409F8F55
 * 00000001409F8F6E: mov     rcx, r10
 * 00000001409F8F71: sub     rcx, r15
 * 00000001409F8F74: xor     rcx, r12
 * 00000001409F8F77: mov     rax, rcx
 * 00000001409F8F7A: rol     rax, 11h
 * 00000001409F8F7E: xor     rcx, rax
 * 00000001409F8F81: mov     rax, r13
 * 00000001409F8F84: mul     rcx
 * 00000001409F8F87: xor     r14d, edx
 * 00000001409F8F8A: mov     [rbp+0BE0h+var_1C0], rdx
 * 00000001409F8F91: xor     r14d, eax
 * 00000001409F8F94: mov     edx, 1
 * 00000001409F8F99: and     r14d, 3Fh
 * 00000001409F8F9D: cmovz   r14d, edx
 * 00000001409F8FA1: add     r11d, edi
 * 00000001409F8FA4: jnz     short loc_1409F8F50
 * 00000001409F8FA6: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F8FAB: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F8FB2: mov     r13, [rsp+0CE0h+var_C88]
 * 00000001409F8FB7: and     r9d, 7Fh
 * 00000001409F8FBB: cmp     r9d, 8
 * 00000001409F8FBF: jb      short loc_1409F8FDE
 * 00000001409F8FC1: mov     eax, r9d
 * 00000001409F8FC4: shr     rax, 3
 * 00000001409F8FC8: xor     r8, [r10]
 * 00000001409F8FCB: mov     ecx, r14d
 * 00000001409F8FCE: rol     r8, cl
 * 00000001409F8FD1: add     r10, 8
 * 00000001409F8FD5: add     r9d, 0FFFFFFF8h
 * 00000001409F8FD9: sub     rax, rdx
 * 00000001409F8FDC: jnz     short loc_1409F8FC8
 * 00000001409F8FDE: test    r9d, r9d
 * 00000001409F8FE1: jz      short loc_1409F9002
 * 00000001409F8FE3: mov     esi, 0FFFFFFFFh
 * 00000001409F8FE8: movzx   eax, byte ptr [r10]
 * 00000001409F8FEC: mov     ecx, r14d
 * 00000001409F8FEF: xor     r8, rax
 * 00000001409F8FF2: add     r10, rdx
 * 00000001409F8FF5: rol     r8, cl
 * 00000001409F8FF8: add     r9d, esi
 * 00000001409F8FFB: jnz     short loc_1409F8FE8
 * 00000001409F8FFD: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F9002: mov     rax, r8
 * 00000001409F9005: shr     rax, 1Fh
 * 00000001409F9009: xor     ecx, ecx
 * 00000001409F900B: jmp     short loc_1409F9014
 * 00000001409F900D: xor     r8d, eax
 * 00000001409F9010: shr     rax, 1Fh
 * 00000001409F9014: test    rax, rax
 * 00000001409F9017: jnz     short loc_1409F900D
 * 00000001409F9019: mov     r15d, dword ptr [rbp+0BE0h+var_BF8]
 * 00000001409F901D: btr     r8d, 1Fh
 * 00000001409F9022: mov     [r13+14h], r8d
 * 00000001409F9026: mov     rdx, [rbp+0BE0h+var_B38]
 * 00000001409F902D: mov     dword ptr [rdx+0F0h], 30h ; '0'
 * 00000001409F9037: cmp     [rdx+100h], eax
 * 00000001409F903D: jz      short loc_1409F9056
 * 00000001409F903F: mov     eax, [rdx+108h]
 * 00000001409F9045: test    r15d, r15d
 * 00000001409F9048: setnz   cl
 * 00000001409F904B: and     eax, 0FFFFFFFEh
 * 00000001409F904E: or      ecx, eax
 * 00000001409F9050: mov     [rdx+108h], ecx
 * 00000001409F9056: mov     rcx, [rbp+0BE0h+var_B38]
 * 00000001409F905D: mov     eax, r15d
 * 00000001409F9060: add     rcx, 60h ; '`'
 * 00000001409F9064: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409F906B: neg     eax
 * 00000001409F906D: mov     [rbp+0BE0h+var_AB0], rcx
 * 00000001409F9074: sbb     r12d, r12d
 * 00000001409F9077: neg     r12d
 * 00000001409F907A: add     r12d, 0Dh
 * 00000001409F907E: test    rcx, rcx
 * 00000001409F9081: jnz     loc_1409F9328
 * 00000001409F9087: mov     r15d, [rbx+7E4h]
 * 00000001409F908E: mov     r8d, [rbx+924h]
 * 00000001409F9095: lea     eax, [r15+30h]
 * 00000001409F9099: cmp     eax, [rbx+0A1Ch]
 * 00000001409F909F: jbe     loc_1409F9185
 * 00000001409F90A5: mov     edx, eax
 * 00000001409F90A7: mov     rcx, rbx
 * 00000001409F90AA: call    sub_140A0BB30
 * 00000001409F90AF: mov     r14, rax
 * 00000001409F90B2: xor     eax, eax
 * 00000001409F90B4: test    r14, r14
 * 00000001409F90B7: jz      loc_1409F8BBA
 * 00000001409F90BD: mov     ecx, [rbx+990h]
 * 00000001409F90C3: test    cl, 4
 * 00000001409F90C6: jnz     loc_1409F917B
 * 00000001409F90CC: mov     eax, [rbx+7E4h]
 * 00000001409F90D2: and     ecx, 20000000h
 * 00000001409F90D8: mov     r8, [rbx+7C8h]
 * 00000001409F90DF: neg     ecx
 * 00000001409F90E1: mov     r10d, 1
 * 00000001409F90E7: sbb     edx, edx
 * 00000001409F90E9: and     edx, [rbx+924h]
 * 00000001409F90EF: cmp     eax, 8
 * 00000001409F90F2: jb      short loc_1409F910C
 * 00000001409F90F4: mov     ecx, eax
 * 00000001409F90F6: shr     rcx, 3
 * 00000001409F90FA: xor     r9d, r9d
 * 00000001409F90FD: mov     [rbx], r9
 * 00000001409F9100: add     eax, 0FFFFFFF8h
 * 00000001409F9103: add     rbx, 8
 * 00000001409F9107: sub     rcx, r10
 * 00000001409F910A: jnz     short loc_1409F90FD
 * 00000001409F910C: xor     ecx, ecx
 * 00000001409F910E: test    eax, eax
 * 00000001409F9110: jz      short loc_1409F9122
 * 00000001409F9112: mov     r9d, 0FFFFFFFFh
 * 00000001409F9118: mov     [rbx], cl
 * 00000001409F911A: add     rbx, r10
 * 00000001409F911D: add     eax, r9d
 * 00000001409F9120: jnz     short loc_1409F9118
 * 00000001409F9122: mov     ebx, [r14+924h]
 * 00000001409F9129: mov     [r14+924h], edx
 * 00000001409F9130: cmp     edx, 3
 * 00000001409F9133: jz      short loc_1409F9165
 * 00000001409F9135: test    dword ptr [r14+990h], 10000000h
 * 00000001409F9140: cmovz   ecx, edx
 * 00000001409F9143: test    ecx, ecx
 * 00000001409F9145: jz      short loc_1409F915C
 * 00000001409F9147: mov     rax, [r14+228h]
 * 00000001409F914E: lea     rcx, [r8-8]
 * 00000001409F9152: mov     rdx, [rcx]
 * 00000001409F9155: call    KeGuardDispatchICall
 * 00000001409F915A: jmp     short loc_1409F9174
 * 00000001409F915C: mov     rax, [r14+100h]
 * 00000001409F9163: jmp     short loc_1409F916C
 * 00000001409F9165: mov     rax, [r14+368h]
 * 00000001409F916C: mov     rcx, r8
 * 00000001409F916F: call    KeGuardDispatchICall
 * 00000001409F9174: mov     [r14+924h], ebx
 * 00000001409F917B: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 00000001409F9183: jmp     short loc_1409F918E
 * 00000001409F9185: mov     r14, rbx
 * 00000001409F9188: mov     [rbx+7E4h], eax
 * 00000001409F918E: add     r15, r14
 * 00000001409F9191: mov     r9d, 1
 * 00000001409F9197: add     [r14+80Ch], r9d
 * 00000001409F919E: mov     rax, r15
 * 00000001409F91A1: mov     [rbp+0BE0h+var_880], r15
 * 00000001409F91A8: xor     r8d, r8d
 * 00000001409F91AB: lea     ecx, [r9+2Fh]
 * 00000001409F91AF: lea     edx, [rcx-2Ah]
 * 00000001409F91B2: mov     [rax], r8
 * 00000001409F91B5: add     ecx, 0FFFFFFF8h
 * 00000001409F91B8: add     rax, 8
 * 00000001409F91BC: sub     rdx, r9
 * 00000001409F91BF: jnz     short loc_1409F91B2
 * 00000001409F91C1: test    ecx, ecx
 * 00000001409F91C3: jz      short loc_1409F91D4
 * 00000001409F91C5: mov     edx, 0FFFFFFFFh
 * 00000001409F91CA: mov     [rax], r8b
 * 00000001409F91CD: add     rax, r9
 * 00000001409F91D0: add     ecx, edx
 * 00000001409F91D2: jnz     short loc_1409F91CA
 * 00000001409F91D4: mov     r13, [rbp+0BE0h+var_C50]
 * 00000001409F91D8: mov     [r15], r12d
 * 00000001409F91DB: mov     r9, r13
 * 00000001409F91DE: mov     r12d, [rsp+0CE0h+var_C78]
 * 00000001409F91E3: mov     [r15+8], r13
 * 00000001409F91E7: mov     [r15+10h], r12d
 * 00000001409F91EB: add     [r14+828h], r12d
 * 00000001409F91F2: mov     r11d, [r14+814h]
 * 00000001409F91F9: lea     rcx, [r12+r13]
 * 00000001409F91FD: mov     rbx, [r14+818h]
 * 00000001409F9204: cmp     r13, rcx
 * 00000001409F9207: jnb     short loc_1409F921C
 * 00000001409F9209: mov     rax, r13
 * 00000001409F920C: mov     edx, 40h ; '@'
 * 00000001409F9211: prefetchnta byte ptr [rax]
 * 00000001409F9214: add     rax, rdx
 * 00000001409F9217: cmp     rax, rcx
 * 00000001409F921A: jb      short loc_1409F9211
 * 00000001409F921C: mov     r10d, r12d
 * 00000001409F921F: mov     r8, rbx
 * 00000001409F9222: shr     r10d, 7
 * 00000001409F9226: test    r10d, r10d
 * 00000001409F9229: jz      short loc_1409F92A2
 * 00000001409F922B: mov     esi, 1
 * 00000001409F9230: mov     rdi, 7010008004002001h
 * 00000001409F923A: mov     r12d, 0FFFFFFFFh
 * 00000001409F9240: mov     eax, 8
 * 00000001409F9245: xor     r8, [r9]
 * 00000001409F9248: mov     ecx, r11d
 * 00000001409F924B: rol     r8, cl
 * 00000001409F924E: xor     r8, [r9+8]
 * 00000001409F9252: add     r9, 10h
 * 00000001409F9256: rol     r8, cl
 * 00000001409F9259: sub     rax, rsi
 * 00000001409F925C: jnz     short loc_1409F9245
 * 00000001409F925E: mov     rcx, r9
 * 00000001409F9261: sub     rcx, r13
 * 00000001409F9264: xor     rcx, rbx
 * 00000001409F9267: mov     rax, rcx
 * 00000001409F926A: rol     rax, 11h
 * 00000001409F926E: xor     rcx, rax
 * 00000001409F9271: mov     rax, rdi
 * 00000001409F9274: mul     rcx
 * 00000001409F9277: xor     r11d, edx
 * 00000001409F927A: mov     [rbp+0BE0h+var_1B8], rdx
 * 00000001409F9281: xor     r11d, eax
 * 00000001409F9284: and     r11d, 3Fh
 * 00000001409F9288: cmovz   r11d, esi
 * 00000001409F928C: add     r10d, r12d
 * 00000001409F928F: jnz     short loc_1409F9240
 * 00000001409F9291: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F9296: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F929D: mov     r12d, [rsp+0CE0h+var_C78]
 * 00000001409F92A2: mov     edx, r12d
 * 00000001409F92A5: mov     r10d, 1
 * 00000001409F92AB: and     edx, 7Fh
 * 00000001409F92AE: cmp     edx, 8
 * 00000001409F92B1: jb      short loc_1409F92CE
 * 00000001409F92B3: mov     eax, edx
 * 00000001409F92B5: shr     rax, 3
 * 00000001409F92B9: xor     r8, [r9]
 * 00000001409F92BC: mov     ecx, r11d
 * 00000001409F92BF: rol     r8, cl
 * 00000001409F92C2: add     r9, 8
 * 00000001409F92C6: add     edx, 0FFFFFFF8h
 * 00000001409F92C9: sub     rax, r10
 * 00000001409F92CC: jnz     short loc_1409F92B9
 * 00000001409F92CE: test    edx, edx
 * 00000001409F92D0: jz      short loc_1409F92F0
 * 00000001409F92D2: mov     esi, 0FFFFFFFFh
 * 00000001409F92D7: movzx   eax, byte ptr [r9]
 * 00000001409F92DB: mov     ecx, r11d
 * 00000001409F92DE: xor     r8, rax
 * 00000001409F92E1: add     r9, r10
 * 00000001409F92E4: rol     r8, cl
 * 00000001409F92E7: add     edx, esi
 * 00000001409F92E9: jnz     short loc_1409F92D7
 * 00000001409F92EB: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F92F0: mov     rax, r8
 * 00000001409F92F3: jmp     short loc_1409F92F8
 * 00000001409F92F5: xor     r8d, eax
 * 00000001409F92F8: shr     rax, 1Fh
 * 00000001409F92FC: test    rax, rax
 * 00000001409F92FF: jnz     short loc_1409F92F5
 * 00000001409F9301: btr     r8d, 1Fh
 * 00000001409F9306: mov     rbx, r14
 * 00000001409F9309: mov     [r15+14h], r8d
 * 00000001409F930D: mov     rax, [rbp+0BE0h+var_880]
 * 00000001409F9314: mov     r15d, dword ptr [rbp+0BE0h+var_BF8]
 * 00000001409F9318: mov     [rbp+0BE0h+var_AB0], rax
 * 00000001409F931F: add     [r14+828h], r12d
 * 00000001409F9326: jmp     short loc_1409F9334
 * 00000001409F9328: mov     r13, [rbp+0BE0h+var_C50]
 * 00000001409F932C: mov     [rcx], r12d
 * 00000001409F932F: mov     r12d, [rsp+0CE0h+var_C78]
 * 00000001409F9334: test    dword ptr [rbx+990h], 40000000h
 * 00000001409F933E: jz      short loc_1409F935E
 * 00000001409F9340: test    r12d, r12d
 * 00000001409F9343: jz      short loc_1409F935E
 * 00000001409F9345: mov     r9, [rbp+0BE0h+var_AB0]
 * 00000001409F934C: mov     r8d, r12d
 * 00000001409F934F: add     r9, 1Ch
 * 00000001409F9353: mov     rdx, r13
 * 00000001409F9356: mov     rcx, rbx
 * 00000001409F9359: call    sub_1403E6E8C
 * 00000001409F935E: mov     rax, [rbp+0BE0h+var_AB0]
 * 00000001409F9365: xor     ecx, ecx
 * 00000001409F9367: mov     r12, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409F936C: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409F9373: mov     [rax+18h], ecx
 * 00000001409F9376: lea     r13d, [rcx+1]
 * 00000001409F937A: mov     rax, [rbp+0BE0h+var_AB0]
 * 00000001409F9381: or      [rax+18h], r13d
 * 00000001409F9385: xor     eax, eax
 * 00000001409F9387: mov     r14, [rbp+0BE0h+var_B38]
 * 00000001409F938E: test    r15d, r15d
 * 00000001409F9391: setnz   cl
 * 00000001409F9394: mov     dword ptr [r14+90h], 23h ; '#'
 * 00000001409F939F: mov     eax, [r14+0B8h]
 * 00000001409F93A6: and     eax, 0FFFFFFFEh
 * 00000001409F93A9: or      ecx, eax
 * 00000001409F93AB: mov     [r14+0B8h], ecx
 * 00000001409F93B2: cmp     dword ptr [r14+0A0h], 94h
 * 00000001409F93BD: jb      short loc_1409F9430
 * 00000001409F93BF: mov     rax, [rbx+1F8h]
 * 00000001409F93C6: mov     rcx, r12
 * 00000001409F93C9: mov     r15, [r14+98h]
 * 00000001409F93D0: call    KeGuardDispatchICall
 * 00000001409F93D5: test    rax, rax
 * 00000001409F93D8: jz      loc_1409F8BBA
 * 00000001409F93DE: mov     ecx, [rax+50h]
 * 00000001409F93E1: mov     eax, 2
 * 00000001409F93E6: or      [r14+0B8h], eax
 * 00000001409F93ED: add     rcx, r12
 * 00000001409F93F0: mov     rax, [r15+70h]
 * 00000001409F93F4: cmp     rax, r12
 * 00000001409F93F7: jb      short loc_1409F9410
 * 00000001409F93F9: cmp     rax, rcx
 * 00000001409F93FC: jnb     short loc_1409F9410
 * 00000001409F93FE: mov     rax, [rax]
 * 00000001409F9401: mov     [r14+0A8h], rax
 * 00000001409F9408: or      dword ptr [r14+0B8h], 4
 * 00000001409F9410: mov     rax, [r15+78h]
 * 00000001409F9414: cmp     rax, r12
 * 00000001409F9417: jb      short loc_1409F9430
 * 00000001409F9419: cmp     rax, rcx
 * 00000001409F941C: jnb     short loc_1409F9430
 * 00000001409F941E: mov     rax, [rax]
 * 00000001409F9421: mov     [r14+0B0h], rax
 * 00000001409F9428: or      dword ptr [r14+0B8h], 8
 * 00000001409F9430: test    dword ptr [rbx+990h], 400000h
 * 00000001409F943A: mov     [rbp+0BE0h+var_B98], rbx
 * 00000001409F943E: jz      loc_1409FA3DC
 * 00000001409F9444: mov     rax, [rbx+1F8h]
 * 00000001409F944B: mov     rcx, r12
 * 00000001409F944E: call    KeGuardDispatchICall
 * 00000001409F9453: mov     [rbp+0BE0h+var_C20], rax
 * 00000001409F9457: mov     r15, rax
 * 00000001409F945A: test    rax, rax
 * 00000001409F945D: jz      loc_1409F8A45
 * 00000001409F9463: movzx   r10d, word ptr [r15+6]
 * 00000001409F9468: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001409F9472: mov     ecx, [rbp+0BE0h+var_C58]
 * 00000001409F9475: mul     rcx
 * 00000001409F9478: xor     eax, eax
 * 00000001409F947A: mov     word ptr [rbp+0BE0h+arg_8], r10w
 * 00000001409F9482: mov     r9, rdx
 * 00000001409F9485: shr     r9, 3
 * 00000001409F9489: mov     [rbp+0BE0h+var_C50], r9
 * 00000001409F948D: test    r10w, r10w
 * 00000001409F9491: jnz     short loc_1409F94F4
 * 00000001409F9493: test    dword ptr [rbx+990h], 200000h
 * 00000001409F949D: jz      loc_140A08A76
 * 00000001409F94A3: cmp     [rbx+8F8h], eax
 * 00000001409F94A9: jnz     loc_1409F8A45
 * 00000001409F94AF: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F94B9: add     rax, rbx
 * 00000001409F94BC: mov     [rbx+900h], rax
 * 00000001409F94C3: xor     eax, eax
 * 00000001409F94C5: mov     [rbx+908h], rax
 * 00000001409F94CC: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409F94D7: mov     [rbx+918h], r12
 * 00000001409F94DE: mov     [rbx+8F8h], r13d
 * 00000001409F94E5: xor     edx, edx
 * 00000001409F94E7: mov     rcx, rbx
 * 00000001409F94EA: call    $$b8
 * 00000001409F94EF: jmp     loc_1409F8A45
 * 00000001409F94F4: mov     rdx, [rbp+0BE0h+var_C48]
 * 00000001409F94F8: movzx   r11d, word ptr [r15+14h]
 * 00000001409F94FD: mov     r13, rdx
 * 00000001409F9500: mov     eax, r9d
 * 00000001409F9503: add     r11, 18h
 * 00000001409F9507: add     r11, r15
 * 00000001409F950A: mov     [rsp+0CE0h+var_C88], r11
 * 00000001409F950F: lea     r12, [rax+rax*2]
 * 00000001409F9513: shl     r12, 2
 * 00000001409F9517: mov     [rsp+0CE0h+var_C70], r12
 * 00000001409F951C: lea     rax, [r12+rdx]
 * 00000001409F9520: xor     edx, edx
 * 00000001409F9522: mov     [rbp+0BE0h+var_C10], rax
 * 00000001409F9526: xor     eax, eax
 * 00000001409F9528: mov     r14, [rbp+0BE0h+var_C10]
 * 00000001409F952C: mov     ecx, eax
 * 00000001409F952E: mov     [rsp+0CE0h+var_C78], eax
 * 00000001409F9532: movzx   eax, r10w
 * 00000001409F9536: test    eax, eax
 * 00000001409F9538: jz      loc_1409F9770
 * 00000001409F953E: mov     r8, r11
 * 00000001409F9541: mov     [rbp+0BE0h+var_C60], r11
 * 00000001409F9545: lea     r15d, [rdx+1]
 * 00000001409F9549: mov     edx, [r8+10h]
 * 00000001409F954D: mov     eax, [r8+8]
 * 00000001409F9551: cmp     edx, eax
 * 00000001409F9553: mov     r9d, [r8+0Ch]
 * 00000001409F9557: cmovbe  edx, eax
 * 00000001409F955A: mov     [rbp+0BE0h+var_BF0], r9d
 * 00000001409F955E: add     edx, r9d
 * 00000001409F9561: mov     [rbp+0BE0h+var_BC4], edx
 * 00000001409F9564: test    ecx, ecx
 * 00000001409F9566: jz      short loc_1409F957E
 * 00000001409F9568: lea     eax, [rcx-1]
 * 00000001409F956B: lea     rax, [rax+rax*4]
 * 00000001409F956F: cmp     edx, [r11+rax*8+0Ch]
 * 00000001409F9574: jb      loc_1409F978D
 * 00000001409F957A: mov     ecx, [rsp+0CE0h+var_C78]
 * 00000001409F957E: cmp     r13, r14
 * 00000001409F9581: jz      loc_1409F9746
 * 00000001409F9587: mov     ecx, [r13+0]
 * 00000001409F958B: mov     eax, [r13+4]
 * 00000001409F958F: cmp     ecx, edx
 * 00000001409F9591: jnb     loc_1409F972B
 * 00000001409F9597: cmp     eax, r9d
 * 00000001409F959A: jbe     loc_1409F972B
 * 00000001409F95A0: cmp     ecx, r9d
 * 00000001409F95A3: jb      loc_1409F97EB
 * 00000001409F95A9: cmp     eax, edx
 * 00000001409F95AB: ja      loc_1409F97EB
 * 00000001409F95B1: mov     eax, [r13+8]
 * 00000001409F95B5: mov     ecx, 1
 * 00000001409F95BA: test    cl, al
 * 00000001409F95BC: mov     [rbp+0BE0h+var_1B0], r13
 * 00000001409F95C3: mov     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409F95C8: jnz     short loc_1409F95D5
 * 00000001409F95CA: mov     al, [rax+rcx]
 * 00000001409F95CD: test    al, 20h
 * 00000001409F95CF: jz      loc_1409F971D
 * 00000001409F95D5: mov     eax, [r8+8]
 * 00000001409F95D9: mov     rdx, rcx
 * 00000001409F95DC: mov     r15d, [r8+10h]
 * 00000001409F95E0: mov     rcx, r13
 * 00000001409F95E3: mov     r12d, [r8+0Ch]
 * 00000001409F95E7: cmp     r15d, eax
 * 00000001409F95EA: cmovbe  r15d, eax
 * 00000001409F95EE: mov     rax, [rbx+418h]
 * 00000001409F95F5: add     r15d, r12d
 * 00000001409F95F8: call    KeGuardDispatchICall
 * 00000001409F95FD: mov     r14, rax
 * 00000001409F9600: cmp     [rax], r12d
 * 00000001409F9603: jb      short loc_1409F960B
 * 00000001409F9605: cmp     [rax+4], r15d
 * 00000001409F9609: jbe     short loc_1409F967B
 * 00000001409F960B: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 00000001409F9610: mov     eax, 80000000h
 * 00000001409F9615: mov     edx, r14d
 * 00000001409F9618: sub     edx, r8d
 * 00000001409F961B: or      edx, eax
 * 00000001409F961D: xor     eax, eax
 * 00000001409F961F: test    dword ptr [rbx+990h], 200000h
 * 00000001409F9629: jz      loc_140A08B01
 * 00000001409F962F: cmp     [rbx+8F8h], eax
 * 00000001409F9635: jnz     short loc_1409F967B
 * 00000001409F9637: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F9641: xor     edx, edx
 * 00000001409F9643: add     rax, rbx
 * 00000001409F9646: mov     rcx, rbx
 * 00000001409F9649: mov     [rbx+900h], rax
 * 00000001409F9650: xor     eax, eax
 * 00000001409F9652: mov     [rbx+908h], rax
 * 00000001409F9659: mov     eax, 1
 * 00000001409F965E: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409F9669: mov     [rbx+918h], r8
 * 00000001409F9670: mov     [rbx+8F8h], eax
 * 00000001409F9676: call    $$b8
 * 00000001409F967B: mov     r8d, [r14]
 * 00000001409F967E: mov     rcx, r14
 * 00000001409F9681: add     r8, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409F9686: mov     rax, [rbx+420h]
 * 00000001409F968D: mov     rdx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409F9692: call    KeGuardDispatchICall
 * 00000001409F9697: mov     rdx, rax
 * 00000001409F969A: cmp     [rax], r12d
 * 00000001409F969D: jb      short loc_1409F96A5
 * 00000001409F969F: cmp     [rax+4], r15d
 * 00000001409F96A3: jbe     short loc_1409F9712
 * 00000001409F96A5: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 00000001409F96AA: mov     eax, 80000000h
 * 00000001409F96AF: sub     edx, r8d
 * 00000001409F96B2: or      edx, eax
 * 00000001409F96B4: xor     eax, eax
 * 00000001409F96B6: test    dword ptr [rbx+990h], 200000h
 * 00000001409F96C0: jz      loc_140A08AD5
 * 00000001409F96C6: cmp     [rbx+8F8h], eax
 * 00000001409F96CC: jnz     short loc_1409F9712
 * 00000001409F96CE: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F96D8: xor     edx, edx
 * 00000001409F96DA: add     rax, rbx
 * 00000001409F96DD: mov     rcx, rbx
 * 00000001409F96E0: mov     [rbx+900h], rax
 * 00000001409F96E7: xor     eax, eax
 * 00000001409F96E9: mov     [rbx+908h], rax
 * 00000001409F96F0: mov     eax, 1
 * 00000001409F96F5: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409F9700: mov     [rbx+918h], r8
 * 00000001409F9707: mov     [rbx+8F8h], eax
 * 00000001409F970D: call    $$b8
 * 00000001409F9712: mov     edx, [rbp+0BE0h+var_BC4]
 * 00000001409F9715: mov     r8, [rbp+0BE0h+var_C60]
 * 00000001409F9719: mov     r9d, [rbp+0BE0h+var_BF0]
 * 00000001409F971D: add     r13, 0Ch
 * 00000001409F9721: cmp     r13, [rbp+0BE0h+var_C10]
 * 00000001409F9725: jnz     loc_1409F9587
 * 00000001409F972B: mov     ecx, [rsp+0CE0h+var_C78]
 * 00000001409F972F: mov     r15d, 1
 * 00000001409F9735: movzx   r10d, word ptr [rbp+0BE0h+arg_8]
 * 00000001409F973D: mov     r11, [rsp+0CE0h+var_C88]
 * 00000001409F9742: mov     r14, [rbp+0BE0h+var_C10]
 * 00000001409F9746: add     ecx, r15d
 * 00000001409F9749: movzx   eax, r10w
 * 00000001409F974D: add     r8, 28h ; '('
 * 00000001409F9751: mov     [rsp+0CE0h+var_C78], ecx
 * 00000001409F9755: mov     [rbp+0BE0h+var_C60], r8
 * 00000001409F9759: cmp     ecx, eax
 * 00000001409F975B: jb      loc_1409F9549
 * 00000001409F9761: mov     r9, [rbp+0BE0h+var_C50]
 * 00000001409F9765: xor     edx, edx
 * 00000001409F9767: mov     r15, [rbp+0BE0h+var_C20]
 * 00000001409F976B: mov     r12, [rsp+0CE0h+var_C70]
 * 00000001409F9770: cmp     r13, r14
 * 00000001409F9773: jz      loc_1409F984D
 * 00000001409F9779: test    dword ptr [rbx+990h], 200000h
 * 00000001409F9783: jz      loc_140A08B60
 * 00000001409F9789: xor     eax, eax
 * 00000001409F978B: jmp     short loc_1409F97FD
 * 00000001409F978D: xor     eax, eax
 * 00000001409F978F: test    dword ptr [rbx+990h], 200000h
 * 00000001409F9799: jz      loc_140A08AA4
 * 00000001409F979F: cmp     [rbx+8F8h], eax
 * 00000001409F97A5: jnz     loc_1409F8A45
 * 00000001409F97AB: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F97B5: add     rax, rbx
 * 00000001409F97B8: mov     [rbx+900h], rax
 * 00000001409F97BF: xor     eax, eax
 * 00000001409F97C1: mov     [rbx+908h], rax
 * 00000001409F97C8: mov     rax, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409F97CD: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409F97D8: mov     [rbx+918h], rax
 * 00000001409F97DF: mov     [rbx+8F8h], r15d
 * 00000001409F97E6: jmp     loc_1409F94E5
 * 00000001409F97EB: xor     eax, eax
 * 00000001409F97ED: test    dword ptr [rbx+990h], 200000h
 * 00000001409F97F7: jz      loc_140A08B2D
 * 00000001409F97FD: cmp     [rbx+8F8h], eax
 * 00000001409F9803: jnz     loc_1409F8A45
 * 00000001409F9809: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F9813: add     rax, rbx
 * 00000001409F9816: mov     [rbx+900h], rax
 * 00000001409F981D: xor     eax, eax
 * 00000001409F981F: mov     [rbx+908h], rax
 * 00000001409F9826: mov     rax, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409F982B: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409F9836: mov     [rbx+918h], rax
 * 00000001409F983D: mov     eax, 1
 * 00000001409F9842: mov     [rbx+8F8h], eax
 * 00000001409F9848: jmp     loc_1409F94E5
 * 00000001409F984D: xor     r11d, r11d
 * 00000001409F9850: test    r9d, r9d
 * 00000001409F9853: jz      short loc_1409F985E
 * 00000001409F9855: lea     ecx, [r9+6]
 * 00000001409F9859: and     ecx, 0FFFFFFF8h
 * 00000001409F985C: jmp     short loc_1409F9861
 * 00000001409F985E: mov     ecx, r11d
 * 00000001409F9861: mov     r14d, [rbx+7E4h]
 * 00000001409F9868: lea     eax, [rax+rax*2]
 * 00000001409F986B: mov     r8d, [rbx+924h]
 * 00000001409F9872: lea     ecx, [rcx+rax*8]
 * 00000001409F9875: lea     eax, [r14+30h]
 * 00000001409F9879: add     eax, ecx
 * 00000001409F987B: cmp     eax, [rbx+0A1Ch]
 * 00000001409F9881: jbe     loc_1409F9978
 * 00000001409F9887: mov     edx, eax
 * 00000001409F9889: mov     rcx, rbx
 * 00000001409F988C: call    sub_140A0BB30
 * 00000001409F9891: mov     [rbp+0BE0h+var_C20], rax
 * 00000001409F9895: mov     r13, rax
 * 00000001409F9898: test    rax, rax
 * 00000001409F989B: jz      loc_1409F8BBE
 * 00000001409F98A1: mov     ecx, [rbx+990h]
 * 00000001409F98A7: test    cl, 4
 * 00000001409F98AA: jnz     loc_1409F995F
 * 00000001409F98B0: mov     eax, [rbx+7E4h]
 * 00000001409F98B6: and     ecx, 20000000h
 * 00000001409F98BC: mov     r8, [rbx+7C8h]
 * 00000001409F98C3: neg     ecx
 * 00000001409F98C5: mov     r10d, 1
 * 00000001409F98CB: sbb     edx, edx
 * 00000001409F98CD: and     edx, [rbx+924h]
 * 00000001409F98D3: cmp     eax, 8
 * 00000001409F98D6: jb      short loc_1409F98F0
 * 00000001409F98D8: mov     ecx, eax
 * 00000001409F98DA: shr     rcx, 3
 * 00000001409F98DE: xor     r9d, r9d
 * 00000001409F98E1: mov     [rbx], r9
 * 00000001409F98E4: add     eax, 0FFFFFFF8h
 * 00000001409F98E7: add     rbx, 8
 * 00000001409F98EB: sub     rcx, r10
 * 00000001409F98EE: jnz     short loc_1409F98E1
 * 00000001409F98F0: xor     ecx, ecx
 * 00000001409F98F2: test    eax, eax
 * 00000001409F98F4: jz      short loc_1409F9906
 * 00000001409F98F6: mov     r9d, 0FFFFFFFFh
 * 00000001409F98FC: mov     [rbx], cl
 * 00000001409F98FE: add     rbx, r10
 * 00000001409F9901: add     eax, r9d
 * 00000001409F9904: jnz     short loc_1409F98FC
 * 00000001409F9906: mov     ebx, [r13+924h]
 * 00000001409F990D: mov     [r13+924h], edx
 * 00000001409F9914: cmp     edx, 3
 * 00000001409F9917: jz      short loc_1409F9949
 * 00000001409F9919: test    dword ptr [r13+990h], 10000000h
 * 00000001409F9924: cmovz   ecx, edx
 * 00000001409F9927: test    ecx, ecx
 * 00000001409F9929: jz      short loc_1409F9940
 * 00000001409F992B: mov     rax, [r13+228h]
 * 00000001409F9932: lea     rcx, [r8-8]
 * 00000001409F9936: mov     rdx, [rcx]
 * 00000001409F9939: call    KeGuardDispatchICall
 * 00000001409F993E: jmp     short loc_1409F9958
 * 00000001409F9940: mov     rax, [r13+100h]
 * 00000001409F9947: jmp     short loc_1409F9950
 * 00000001409F9949: mov     rax, [r13+368h]
 * 00000001409F9950: mov     rcx, r8
 * 00000001409F9953: call    KeGuardDispatchICall
 * 00000001409F9958: mov     [r13+924h], ebx
 * 00000001409F995F: and     dword ptr [r13+990h], 0FFFFFFFBh
 * 00000001409F9967: mov     r9, [rbp+0BE0h+var_C50]
 * 00000001409F996B: xor     r11d, r11d
 * 00000001409F996E: movzx   r10d, word ptr [rbp+0BE0h+arg_8]
 * 00000001409F9976: jmp     short loc_1409F9985
 * 00000001409F9978: mov     r13, rbx
 * 00000001409F997B: mov     [rbp+0BE0h+var_C20], rbx
 * 00000001409F997F: mov     [rbx+7E4h], eax
 * 00000001409F9985: mov     ebx, 1
 * 00000001409F998A: lea     r8, [r14+r13]
 * 00000001409F998E: add     [r13+80Ch], ebx
 * 00000001409F9995: mov     rax, r8
 * 00000001409F9998: mov     [rbp+0BE0h+var_848], r8
 * 00000001409F999F: lea     ecx, [rbx+2Fh]
 * 00000001409F99A2: lea     edx, [rbx+5]
 * 00000001409F99A5: mov     [rax], r11
 * 00000001409F99A8: add     ecx, 0FFFFFFF8h
 * 00000001409F99AB: add     rax, 8
 * 00000001409F99AF: sub     rdx, rbx
 * 00000001409F99B2: jnz     short loc_1409F99A5
 * 00000001409F99B4: test    ecx, ecx
 * 00000001409F99B6: jz      short loc_1409F99C7
 * 00000001409F99B8: mov     edx, 0FFFFFFFFh
 * 00000001409F99BD: mov     [rax], r11b
 * 00000001409F99C0: add     rax, rbx
 * 00000001409F99C3: add     ecx, edx
 * 00000001409F99C5: jnz     short loc_1409F99BD
 * 00000001409F99C7: mov     rax, [rbp+0BE0h+var_C48]
 * 00000001409F99CB: mov     dword ptr [r8], 1Eh
 * 00000001409F99D2: mov     [r8+8], rax
 * 00000001409F99D6: xor     eax, eax
 * 00000001409F99D8: mov     [r8+10h], eax
 * 00000001409F99DC: mov     rcx, [r13+818h]
 * 00000001409F99E3: mov     rax, rcx
 * 00000001409F99E6: jmp     short loc_1409F99EA
 * 00000001409F99E8: xor     ecx, eax
 * 00000001409F99EA: shr     rax, 1Fh
 * 00000001409F99EE: test    rax, rax
 * 00000001409F99F1: jnz     short loc_1409F99E8
 * 00000001409F99F3: btr     ecx, 1Fh
 * 00000001409F99F7: mov     rbx, r13
 * 00000001409F99FA: mov     [r8+14h], ecx
 * 00000001409F99FE: mov     r8d, 0FFFEh
 * 00000001409F9A04: mov     rax, [rbp+0BE0h+var_848]
 * 00000001409F9A0B: mov     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409F9A10: mov     [rbp+0BE0h+var_B18], rax
 * 00000001409F9A17: mov     [rbp+0BE0h+var_B98], rbx
 * 00000001409F9A1B: mov     [rax+18h], rcx
 * 00000001409F9A1F: mov     ecx, [r15+50h]
 * 00000001409F9A23: mov     rax, [rbp+0BE0h+var_B18]
 * 00000001409F9A2A: mov     [rax+20h], ecx
 * 00000001409F9A2D: mov     rax, [rbp+0BE0h+var_B18]
 * 00000001409F9A34: mov     ecx, [rbp+0BE0h+var_C58]
 * 00000001409F9A37: mov     [rax+24h], ecx
 * 00000001409F9A3A: mov     rax, [rbp+0BE0h+var_B18]
 * 00000001409F9A41: mov     [rax+28h], r10w
 * 00000001409F9A46: xor     eax, eax
 * 00000001409F9A48: cmp     dword ptr [rbp+0BE0h+var_BF8], eax
 * 00000001409F9A4B: mov     ecx, eax
 * 00000001409F9A4D: mov     rdx, [rbp+0BE0h+var_B18]
 * 00000001409F9A54: setnz   cl
 * 00000001409F9A57: movzx   eax, word ptr [rdx+2Ah]
 * 00000001409F9A5B: and     ax, r8w
 * 00000001409F9A5F: or      cx, ax
 * 00000001409F9A62: mov     [rdx+2Ah], cx
 * 00000001409F9A66: mov     rcx, [rbp+0BE0h+var_B18]
 * 00000001409F9A6D: lea     rdx, [rcx+30h]
 * 00000001409F9A71: mov     [rbp+0BE0h+var_C50], rdx
 * 00000001409F9A75: test    r9d, r9d
 * 00000001409F9A78: jz      short loc_1409F9A8B
 * 00000001409F9A7A: lea     r14d, [r9-1]
 * 00000001409F9A7E: add     r14, 7
 * 00000001409F9A82: and     r14, 0FFFFFFFFFFFFFFF8h
 * 00000001409F9A86: add     r14, rdx
 * 00000001409F9A89: jmp     short loc_1409F9A8E
 * 00000001409F9A8B: mov     r14, rdx
 * 00000001409F9A8E: movzx   eax, word ptr [rcx+28h]
 * 00000001409F9A92: mov     [rbp+0BE0h+var_C60], r14
 * 00000001409F9A96: lea     rcx, [rax+rax*2]
 * 00000001409F9A9A: xor     eax, eax
 * 00000001409F9A9C: test    r9d, r9d
 * 00000001409F9A9F: lea     r8, [r14+rcx*8]
 * 00000001409F9AA3: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409F9AA7: mov     [rsp+0CE0h+var_C70], r8
 * 00000001409F9AAC: lea     r15d, [rax+0Ch]
 * 00000001409F9AB0: cmovz   r15, r12
 * 00000001409F9AB4: add     r15, r9
 * 00000001409F9AB7: mov     [rbp+0BE0h+var_BF8], r15
 * 00000001409F9ABB: cmp     ax, r10w
 * 00000001409F9ABF: jnb     short loc_1409F9AFD
 * 00000001409F9AC1: movzx   edx, r10w
 * 00000001409F9AC5: lea     rax, [r14+8]
 * 00000001409F9AC9: xor     r10d, r10d
 * 00000001409F9ACC: mov     r12d, 80000000h
 * 00000001409F9AD2: lea     esi, [r10+2]
 * 00000001409F9AD6: lea     r11d, [r10+1]
 * 00000001409F9ADA: mov     rcx, rsi
 * 00000001409F9ADD: mov     [rax-8], r10d
 * 00000001409F9AE1: mov     [rax-4], r10d
 * 00000001409F9AE5: mov     [rax], r12d
 * 00000001409F9AE8: add     rax, 0Ch
 * 00000001409F9AEC: sub     rcx, r11
 * 00000001409F9AEF: jnz     short loc_1409F9ADD
 * 00000001409F9AF1: sub     rdx, r11
 * 00000001409F9AF4: jnz     short loc_1409F9ADA
 * 00000001409F9AF6: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F9AFB: xor     eax, eax
 * 00000001409F9AFD: cmp     r14, r8
 * 00000001409F9B00: jz      loc_1409FA3DC
 * 00000001409F9B06: mov     r12, [rsp+0CE0h+var_C88]
 * 00000001409F9B0B: jmp     short loc_1409F9B0F
 * 00000001409F9B0D: xor     eax, eax
 * 00000001409F9B0F: mov     r11d, eax
 * 00000001409F9B12: mov     eax, [r12+24h]
 * 00000001409F9B17: bt      eax, 19h
 * 00000001409F9B1B: jb      loc_1409F9D21
 * 00000001409F9B21: mov     ecx, [r12]
 * 00000001409F9B25: cmp     ecx, 54494E49h
 * 00000001409F9B2B: jnz     short loc_1409F9B3C
 * 00000001409F9B2D: cmp     dword ptr [r12+4], 4742444Bh
 * 00000001409F9B36: jz      loc_1409F9D21
 * 00000001409F9B3C: cmp     ecx, 45474150h
 * 00000001409F9B42: jnz     short loc_1409F9B74
 * 00000001409F9B44: movzx   eax, word ptr [r12+4]
 * 00000001409F9B4A: mov     edx, 7877h
 * 00000001409F9B4F: cmp     ax, dx
 * 00000001409F9B52: jz      loc_1409F9D21
 * 00000001409F9B58: mov     edx, 7277h
 * 00000001409F9B5D: cmp     ax, dx
 * 00000001409F9B60: jz      loc_1409F9D21
 * 00000001409F9B66: mov     edx, 7777h
 * 00000001409F9B6B: cmp     ax, dx
 * 00000001409F9B6E: jz      loc_1409F9D21
 * 00000001409F9B74: cmp     ecx, 41525245h
 * 00000001409F9B7A: jnz     short loc_1409F9B8D
 * 00000001409F9B7C: mov     eax, 4154h
 * 00000001409F9B81: cmp     [r12+4], ax
 * 00000001409F9B87: jz      loc_1409F9D21
 * 00000001409F9B8D: mov     rax, [r13+938h]
 * 00000001409F9B94: mov     r10d, 7
 * 00000001409F9B9A: mov     r8, [r13+930h]
 * 00000001409F9BA1: mov     r9, r12
 * 00000001409F9BA4: mov     [rbp+0BE0h+var_828], rax
 * 00000001409F9BAB: mov     rax, [r13+940h]
 * 00000001409F9BB2: mov     [rbp+0BE0h+var_820], rax
 * 00000001409F9BB9: lea     ebx, [r10-6]
 * 00000001409F9BBD: mov     rax, [r13+948h]
 * 00000001409F9BC4: mov     [rbp+0BE0h+var_818], rax
 * 00000001409F9BCB: mov     [rbp+0BE0h+var_830], r8
 * 00000001409F9BD2: movzx   edx, byte ptr [r9]
 * 00000001409F9BD6: add     r9, rbx
 * 00000001409F9BD9: movzx   eax, byte ptr [r8]
 * 00000001409F9BDD: add     r8, rbx
 * 00000001409F9BE0: cmp     rdx, rax
 * 00000001409F9BE3: jnz     short loc_1409F9BF4
 * 00000001409F9BE5: mov     eax, 0FFFFFFFFh
 * 00000001409F9BEA: add     r10d, eax
 * 00000001409F9BED: jnz     short loc_1409F9BD2
 * 00000001409F9BEF: jmp     loc_1409F9CA1
 * 00000001409F9BF4: mov     r9, [rbp+0BE0h+var_828]
 * 00000001409F9BFB: mov     r8d, 8
 * 00000001409F9C01: mov     r10, r12
 * 00000001409F9C04: mov     rcx, [r10]
 * 00000001409F9C07: add     r10, 8
 * 00000001409F9C0B: mov     rax, [r9]
 * 00000001409F9C0E: add     r9, 8
 * 00000001409F9C12: cmp     rcx, rax
 * 00000001409F9C15: jnz     short loc_1409F9C45
 * 00000001409F9C17: add     r8d, 0FFFFFFF8h
 * 00000001409F9C1B: cmp     r8d, 8
 * 00000001409F9C1F: jnb     short loc_1409F9C04
 * 00000001409F9C21: test    r8d, r8d
 * 00000001409F9C24: jz      short loc_1409F9CA1
 * 00000001409F9C26: movzx   edx, byte ptr [r10]
 * 00000001409F9C2A: add     r10, rbx
 * 00000001409F9C2D: movzx   eax, byte ptr [r9]
 * 00000001409F9C31: add     r9, rbx
 * 00000001409F9C34: cmp     rdx, rax
 * 00000001409F9C37: jnz     short loc_1409F9C45
 * 00000001409F9C39: mov     eax, 0FFFFFFFFh
 * 00000001409F9C3E: add     r8d, eax
 * 00000001409F9C41: jnz     short loc_1409F9C26
 * 00000001409F9C43: jmp     short loc_1409F9CA1
 * 00000001409F9C45: mov     r8, [rbp+0BE0h+var_820]
 * 00000001409F9C4C: mov     r10d, 4
 * 00000001409F9C52: mov     r9, r12
 * 00000001409F9C55: movzx   edx, byte ptr [r9]
 * 00000001409F9C59: add     r9, rbx
 * 00000001409F9C5C: movzx   eax, byte ptr [r8]
 * 00000001409F9C60: add     r8, rbx
 * 00000001409F9C63: cmp     rdx, rax
 * 00000001409F9C66: jnz     short loc_1409F9C74
 * 00000001409F9C68: mov     eax, 0FFFFFFFFh
 * 00000001409F9C6D: add     r10d, eax
 * 00000001409F9C70: jnz     short loc_1409F9C55
 * 00000001409F9C72: jmp     short loc_1409F9CA1
 * 00000001409F9C74: mov     r8, [rbp+0BE0h+var_818]
 * 00000001409F9C7B: mov     r10d, 6
 * 00000001409F9C81: mov     r9, r12
 * 00000001409F9C84: movzx   edx, byte ptr [r9]
 * 00000001409F9C88: add     r9, rbx
 * 00000001409F9C8B: movzx   eax, byte ptr [r8]
 * 00000001409F9C8F: add     r8, rbx
 * 00000001409F9C92: cmp     rdx, rax
 * 00000001409F9C95: jnz     short loc_1409F9CA4
 * 00000001409F9C97: mov     eax, 0FFFFFFFFh
 * 00000001409F9C9C: add     r10d, eax
 * 00000001409F9C9F: jnz     short loc_1409F9C84
 * 00000001409F9CA1: mov     r11d, ebx
 * 00000001409F9CA4: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409F9CA8: mov     ecx, [r12+24h]
 * 00000001409F9CAD: xor     eax, eax
 * 00000001409F9CAF: test    ecx, ecx
 * 00000001409F9CB1: cmovs   r11d, ebx
 * 00000001409F9CB5: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 00000001409F9CBC: test    r11d, r11d
 * 00000001409F9CBF: jz      short loc_1409F9CEC
 * 00000001409F9CC1: cmp     dword ptr [r12], 54494E49h
 * 00000001409F9CC9: jnz     short loc_1409F9CEC
 * 00000001409F9CCB: cmp     dword ptr [r12+4], 4742444Bh
 * 00000001409F9CD4: jnz     short loc_1409F9CEC
 * 00000001409F9CD6: test    dword ptr [r13+994h], 2000h
 * 00000001409F9CE1: cmovnz  r11d, eax
 * 00000001409F9CE5: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 00000001409F9CEC: test    dword ptr [r13+994h], 4000h
 * 00000001409F9CF7: jz      short loc_1409F9D2E
 * 00000001409F9CF9: bt      ecx, 1Dh
 * 00000001409F9CFD: mov     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409F9D02: jnb     short loc_1409F9D33
 * 00000001409F9D04: cmp     rcx, [r13+5E8h]
 * 00000001409F9D0B: jz      short loc_1409F9D16
 * 00000001409F9D0D: cmp     rcx, [r13+5F0h]
 * 00000001409F9D14: jnz     short loc_1409F9D33
 * 00000001409F9D16: mov     r11d, ebx
 * 00000001409F9D19: mov     dword ptr [rbp+0BE0h+arg_8], ebx
 * 00000001409F9D1F: jmp     short loc_1409F9D33
 * 00000001409F9D21: mov     ebx, 1
 * 00000001409F9D26: mov     r11d, ebx
 * 00000001409F9D29: jmp     loc_1409F9CA8
 * 00000001409F9D2E: mov     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409F9D33: mov     ebx, [r12+0Ch]
 * 00000001409F9D38: mov     r12d, [r12+10h]
 * 00000001409F9D3D: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409F9D42: mov     r8, [rbp+0BE0h+var_C10]
 * 00000001409F9D46: mov     [rsp+0CE0h+var_C78], ebx
 * 00000001409F9D4A: mov     eax, [rax+8]
 * 00000001409F9D4D: cmp     r12d, eax
 * 00000001409F9D50: cmovbe  r12d, eax
 * 00000001409F9D54: add     r12d, ebx
 * 00000001409F9D57: mov     [rbp+0BE0h+var_BF0], r12d
 * 00000001409F9D5B: cmp     r9, r8
 * 00000001409F9D5E: jz      short loc_1409F9D69
 * 00000001409F9D60: mov     r13d, [r9]
 * 00000001409F9D63: mov     eax, [r9+4]
 * 00000001409F9D67: jmp     short loc_1409F9D6E
 * 00000001409F9D69: xor     eax, eax
 * 00000001409F9D6B: mov     r13d, eax
 * 00000001409F9D6E: mov     [rbp+0BE0h+var_BC4], eax
 * 00000001409F9D71: mov     [rbp+0BE0h+var_C58], ebx
 * 00000001409F9D74: cmp     r9, r8
 * 00000001409F9D77: jz      loc_1409F9F30
 * 00000001409F9D7D: cmp     r13d, ebx
 * 00000001409F9D80: jbe     loc_1409F9F30
 * 00000001409F9D86: cmp     eax, r12d
 * 00000001409F9D89: ja      loc_1409F9F30
 * 00000001409F9D8F: test    r11d, r11d
 * 00000001409F9D92: jnz     loc_1409F9F30
 * 00000001409F9D98: mov     [r14], ebx
 * 00000001409F9D9B: lea     rdx, [rbp+0BE0h+var_9C8]
 * 00000001409F9DA2: mov     [r14+4], r13d
 * 00000001409F9DA6: lea     r8, [rbp+0BE0h+var_7D0]
 * 00000001409F9DAD: mov     eax, [r14]
 * 00000001409F9DB0: mov     r10d, r13d
 * 00000001409F9DB3: sub     r10d, eax
 * 00000001409F9DB6: mov     [rbp+0BE0h+var_C58], r13d
 * 00000001409F9DBA: mov     r11d, r10d
 * 00000001409F9DBD: lea     r14, [rcx+rax]
 * 00000001409F9DC1: add     r11, r14
 * 00000001409F9DC4: xor     eax, eax
 * 00000001409F9DC6: mov     r9d, eax
 * 00000001409F9DC9: mov     rcx, [r8]
 * 00000001409F9DCC: mov     eax, [rdx]
 * 00000001409F9DCE: add     rax, rcx
 * 00000001409F9DD1: cmp     r14, rax
 * 00000001409F9DD4: jnb     short loc_1409F9DDF
 * 00000001409F9DD6: cmp     r11, rcx
 * 00000001409F9DD9: ja      loc_1409F9F28
 * 00000001409F9DDF: inc     r9d
 * 00000001409F9DE2: add     r8, 8
 * 00000001409F9DE6: add     rdx, 4
 * 00000001409F9DEA: cmp     r9d, 6
 * 00000001409F9DEE: jb      short loc_1409F9DC9
 * 00000001409F9DF0: mov     r15, [rbp+0BE0h+var_C20]
 * 00000001409F9DF4: mov     rbx, r14
 * 00000001409F9DF7: mov     rax, r14
 * 00000001409F9DFA: add     [r15+828h], r10d
 * 00000001409F9E01: mov     r12d, [r15+814h]
 * 00000001409F9E08: mov     r15, [r15+818h]
 * 00000001409F9E0F: cmp     r14, r11
 * 00000001409F9E12: jnb     short loc_1409F9E24
 * 00000001409F9E14: mov     ecx, 40h ; '@'
 * 00000001409F9E19: prefetchnta byte ptr [rax]
 * 00000001409F9E1C: add     rax, rcx
 * 00000001409F9E1F: cmp     rax, r11
 * 00000001409F9E22: jb      short loc_1409F9E19
 * 00000001409F9E24: mov     r9d, r10d
 * 00000001409F9E27: mov     r8, r15
 * 00000001409F9E2A: shr     r9d, 7
 * 00000001409F9E2E: mov     r11d, 1
 * 00000001409F9E34: test    r9d, r9d
 * 00000001409F9E37: jz      short loc_1409F9EA4
 * 00000001409F9E39: mov     rsi, 7010008004002001h
 * 00000001409F9E43: mov     edx, 8
 * 00000001409F9E48: mov     rax, [rbx]
 * 00000001409F9E4B: mov     ecx, r12d
 * 00000001409F9E4E: xor     rax, r8
 * 00000001409F9E51: mov     r8, [rbx+8]
 * 00000001409F9E55: rol     rax, cl
 * 00000001409F9E58: add     rbx, 10h
 * 00000001409F9E5C: xor     r8, rax
 * 00000001409F9E5F: rol     r8, cl
 * 00000001409F9E62: sub     rdx, r11
 * 00000001409F9E65: jnz     short loc_1409F9E48
 * 00000001409F9E67: mov     rcx, rbx
 * 00000001409F9E6A: sub     rcx, r14
 * 00000001409F9E6D: xor     rcx, r15
 * 00000001409F9E70: mov     rax, rcx
 * 00000001409F9E73: rol     rax, 11h
 * 00000001409F9E77: xor     rcx, rax
 * 00000001409F9E7A: mov     rax, rsi
 * 00000001409F9E7D: mul     rcx
 * 00000001409F9E80: xor     r12d, edx
 * 00000001409F9E83: mov     [rbp+0BE0h+var_1A8], rdx
 * 00000001409F9E8A: xor     r12d, eax
 * 00000001409F9E8D: mov     eax, 0FFFFFFFFh
 * 00000001409F9E92: and     r12d, 3Fh
 * 00000001409F9E96: cmovz   r12d, r11d
 * 00000001409F9E9A: add     r9d, eax
 * 00000001409F9E9D: jnz     short loc_1409F9E43
 * 00000001409F9E9F: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F9EA4: and     r10d, 7Fh
 * 00000001409F9EA8: cmp     r10d, 8
 * 00000001409F9EAC: jb      short loc_1409F9ECB
 * 00000001409F9EAE: mov     edx, r10d
 * 00000001409F9EB1: shr     rdx, 3
 * 00000001409F9EB5: xor     r8, [rbx]
 * 00000001409F9EB8: mov     ecx, r12d
 * 00000001409F9EBB: rol     r8, cl
 * 00000001409F9EBE: add     rbx, 8
 * 00000001409F9EC2: add     r10d, 0FFFFFFF8h
 * 00000001409F9EC6: sub     rdx, r11
 * 00000001409F9EC9: jnz     short loc_1409F9EB5
 * 00000001409F9ECB: test    r10d, r10d
 * 00000001409F9ECE: jz      short loc_1409F9EEE
 * 00000001409F9ED0: mov     esi, 0FFFFFFFFh
 * 00000001409F9ED5: movzx   eax, byte ptr [rbx]
 * 00000001409F9ED8: mov     ecx, r12d
 * 00000001409F9EDB: xor     r8, rax
 * 00000001409F9EDE: add     rbx, r11
 * 00000001409F9EE1: rol     r8, cl
 * 00000001409F9EE4: add     r10d, esi
 * 00000001409F9EE7: jnz     short loc_1409F9ED5
 * 00000001409F9EE9: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F9EEE: mov     rax, r8
 * 00000001409F9EF1: shr     rax, 1Fh
 * 00000001409F9EF5: xor     edx, edx
 * 00000001409F9EF7: jmp     short loc_1409F9F00
 * 00000001409F9EF9: xor     r8d, eax
 * 00000001409F9EFC: shr     rax, 1Fh
 * 00000001409F9F00: test    rax, rax
 * 00000001409F9F03: jnz     short loc_1409F9EF9
 * 00000001409F9F05: mov     rax, [rbp+0BE0h+var_C60]
 * 00000001409F9F09: btr     r8d, 1Fh
 * 00000001409F9F0E: mov     r12d, [rbp+0BE0h+var_BF0]
 * 00000001409F9F12: mov     ebx, [rsp+0CE0h+var_C78]
 * 00000001409F9F16: mov     r15, [rbp+0BE0h+var_BF8]
 * 00000001409F9F1A: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409F9F1E: mov     [rax+8], r8d
 * 00000001409F9F22: mov     r8, [rbp+0BE0h+var_C10]
 * 00000001409F9F26: jmp     short loc_1409F9F32
 * 00000001409F9F28: mov     r8, [rbp+0BE0h+var_C10]
 * 00000001409F9F2C: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409F9F30: xor     edx, edx
 * 00000001409F9F32: cmp     r13d, ebx
 * 00000001409F9F35: jb      loc_1409FA1BF
 * 00000001409F9F3B: cmp     [rbp+0BE0h+var_BC4], r12d
 * 00000001409F9F3F: ja      loc_1409FA1BF
 * 00000001409F9F45: cmp     r9, r8
 * 00000001409F9F48: jz      loc_1409FA1BF
 * 00000001409F9F4E: mov     r13d, [r15+4]
 * 00000001409F9F52: cmp     r13d, r12d
 * 00000001409F9F55: ja      loc_1409FA1BF
 * 00000001409F9F5B: mov     rax, [rbp+0BE0h+var_C50]
 * 00000001409F9F5F: mov     ecx, 1
 * 00000001409F9F64: cmp     r15, r8
 * 00000001409F9F67: jz      loc_1409FA1BF
 * 00000001409F9F6D: cmp     dword ptr [rbp+0BE0h+arg_8], edx
 * 00000001409F9F73: jz      short loc_1409F9F7D
 * 00000001409F9F75: mov     r8b, 80h
 * 00000001409F9F78: jmp     loc_1409FA187
 * 00000001409F9F7D: mov     r15d, [r15]
 * 00000001409F9F80: mov     ebx, [r9+4]
 * 00000001409F9F84: mov     r11, [rbp+0BE0h+var_C20]
 * 00000001409F9F88: mov     [rbp+0BE0h+var_C58], r15d
 * 00000001409F9F8C: cmp     r15d, ebx
 * 00000001409F9F8F: jnb     short loc_1409F9FFB
 * 00000001409F9F91: test    dword ptr [r11+990h], 200000h
 * 00000001409F9F9C: jz      loc_140A08B93
 * 00000001409F9FA2: xor     eax, eax
 * 00000001409F9FA4: cmp     [r11+8F8h], eax
 * 00000001409F9FAB: jnz     short loc_1409F9FFB
 * 00000001409F9FAD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F9FB7: xor     edx, edx
 * 00000001409F9FB9: add     rax, r11
 * 00000001409F9FBC: mov     rcx, r11
 * 00000001409F9FBF: mov     [r11+900h], rax
 * 00000001409F9FC6: xor     eax, eax
 * 00000001409F9FC8: mov     [r11+908h], rax
 * 00000001409F9FCF: mov     rax, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409F9FD4: mov     qword ptr [r11+910h], 10Fh
 * 00000001409F9FDF: mov     [r11+918h], rax
 * 00000001409F9FE6: mov     eax, 1
 * 00000001409F9FEB: mov     [r11+8F8h], eax
 * 00000001409F9FF2: call    $$b8
 * 00000001409F9FF7: mov     r11, [rbp+0BE0h+var_C20]
 * 00000001409F9FFB: mov     r14, rbx
 * 00000001409F9FFE: lea     rdx, [rbp+0BE0h+var_9C8]
 * 00000001409FA005: add     r14, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FA00A: lea     r8, [rbp+0BE0h+var_7D0]
 * 00000001409FA011: mov     r9d, r15d
 * 00000001409FA014: sub     r9d, ebx
 * 00000001409FA017: mov     ebx, r9d
 * 00000001409FA01A: add     rbx, r14
 * 00000001409FA01D: xor     eax, eax
 * 00000001409FA01F: mov     r10d, eax
 * 00000001409FA022: mov     rcx, [r8]
 * 00000001409FA025: mov     eax, [rdx]
 * 00000001409FA027: add     rax, rcx
 * 00000001409FA02A: cmp     r14, rax
 * 00000001409FA02D: jnb     short loc_1409FA038
 * 00000001409FA02F: cmp     rbx, rcx
 * 00000001409FA032: ja      loc_1409FA171
 * 00000001409FA038: mov     eax, 4
 * 00000001409FA03D: inc     r10d
 * 00000001409FA040: add     rdx, rax
 * 00000001409FA043: add     r8, 8
 * 00000001409FA047: cmp     r10d, 6
 * 00000001409FA04B: jb      short loc_1409FA022
 * 00000001409FA04D: cmp     r9d, eax
 * 00000001409FA050: jb      loc_1409FA171
 * 00000001409FA056: add     [r11+828h], r9d
 * 00000001409FA05D: mov     rax, r14
 * 00000001409FA060: mov     r12d, [r11+814h]
 * 00000001409FA067: mov     r15, [r11+818h]
 * 00000001409FA06E: mov     r11, r14
 * 00000001409FA071: cmp     r14, rbx
 * 00000001409FA074: jnb     short loc_1409FA086
 * 00000001409FA076: mov     ecx, 40h ; '@'
 * 00000001409FA07B: prefetchnta byte ptr [rax]
 * 00000001409FA07E: add     rax, rcx
 * 00000001409FA081: cmp     rax, rbx
 * 00000001409FA084: jb      short loc_1409FA07B
 * 00000001409FA086: mov     r10d, r9d
 * 00000001409FA089: mov     r8, r15
 * 00000001409FA08C: shr     r10d, 7
 * 00000001409FA090: mov     ebx, 1
 * 00000001409FA095: test    r10d, r10d
 * 00000001409FA098: jz      short loc_1409FA105
 * 00000001409FA09A: mov     rsi, 7010008004002001h
 * 00000001409FA0A4: mov     edx, 8
 * 00000001409FA0A9: mov     rax, [r11]
 * 00000001409FA0AC: mov     ecx, r12d
 * 00000001409FA0AF: xor     rax, r8
 * 00000001409FA0B2: mov     r8, [r11+8]
 * 00000001409FA0B6: rol     rax, cl
 * 00000001409FA0B9: add     r11, 10h
 * 00000001409FA0BD: xor     r8, rax
 * 00000001409FA0C0: rol     r8, cl
 * 00000001409FA0C3: sub     rdx, rbx
 * 00000001409FA0C6: jnz     short loc_1409FA0A9
 * 00000001409FA0C8: mov     rcx, r11
 * 00000001409FA0CB: sub     rcx, r14
 * 00000001409FA0CE: xor     rcx, r15
 * 00000001409FA0D1: mov     rax, rcx
 * 00000001409FA0D4: rol     rax, 11h
 * 00000001409FA0D8: xor     rcx, rax
 * 00000001409FA0DB: mov     rax, rsi
 * 00000001409FA0DE: mul     rcx
 * 00000001409FA0E1: xor     r12d, edx
 * 00000001409FA0E4: mov     [rbp+0BE0h+var_690], rdx
 * 00000001409FA0EB: xor     r12d, eax
 * 00000001409FA0EE: mov     eax, 0FFFFFFFFh
 * 00000001409FA0F3: and     r12d, 3Fh
 * 00000001409FA0F7: cmovz   r12d, ebx
 * 00000001409FA0FB: add     r10d, eax
 * 00000001409FA0FE: jnz     short loc_1409FA0A4
 * 00000001409FA100: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FA105: and     r9d, 7Fh
 * 00000001409FA109: cmp     r9d, 8
 * 00000001409FA10D: jb      short loc_1409FA12C
 * 00000001409FA10F: mov     edx, r9d
 * 00000001409FA112: shr     rdx, 3
 * 00000001409FA116: xor     r8, [r11]
 * 00000001409FA119: mov     ecx, r12d
 * 00000001409FA11C: rol     r8, cl
 * 00000001409FA11F: add     r11, 8
 * 00000001409FA123: add     r9d, 0FFFFFFF8h
 * 00000001409FA127: sub     rdx, rbx
 * 00000001409FA12A: jnz     short loc_1409FA116
 * 00000001409FA12C: test    r9d, r9d
 * 00000001409FA12F: jz      short loc_1409FA150
 * 00000001409FA131: mov     esi, 0FFFFFFFFh
 * 00000001409FA136: movzx   eax, byte ptr [r11]
 * 00000001409FA13A: mov     ecx, r12d
 * 00000001409FA13D: xor     r8, rax
 * 00000001409FA140: add     r11, rbx
 * 00000001409FA143: rol     r8, cl
 * 00000001409FA146: add     r9d, esi
 * 00000001409FA149: jnz     short loc_1409FA136
 * 00000001409FA14B: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FA150: mov     rax, r8
 * 00000001409FA153: shr     rax, 7
 * 00000001409FA157: xor     edx, edx
 * 00000001409FA159: jmp     short loc_1409FA162
 * 00000001409FA15B: xor     r8b, al
 * 00000001409FA15E: shr     rax, 7
 * 00000001409FA162: test    rax, rax
 * 00000001409FA165: jnz     short loc_1409FA15B
 * 00000001409FA167: mov     r12d, [rbp+0BE0h+var_BF0]
 * 00000001409FA16B: and     r8b, 7Fh
 * 00000001409FA16F: jmp     short loc_1409FA176
 * 00000001409FA171: xor     edx, edx
 * 00000001409FA173: mov     r8b, 80h
 * 00000001409FA176: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FA17A: mov     ecx, 1
 * 00000001409FA17F: mov     r15, [rbp+0BE0h+var_BF8]
 * 00000001409FA183: mov     rax, [rbp+0BE0h+var_C50]
 * 00000001409FA187: mov     [rax], r8b
 * 00000001409FA18A: mov     r8d, 0Ch
 * 00000001409FA190: mov     rax, [rbp+0BE0h+var_C50]
 * 00000001409FA194: add     r9, r8
 * 00000001409FA197: add     r15, r8
 * 00000001409FA19A: mov     [rbp+0BE0h+var_C48], r9
 * 00000001409FA19E: mov     r8, [rbp+0BE0h+var_C10]
 * 00000001409FA1A2: add     rax, rcx
 * 00000001409FA1A5: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409FA1A9: mov     [rbp+0BE0h+var_BF8], r15
 * 00000001409FA1AD: cmp     r15, r8
 * 00000001409FA1B0: jz      short loc_1409FA1B6
 * 00000001409FA1B2: mov     r13d, [r15+4]
 * 00000001409FA1B6: cmp     r13d, r12d
 * 00000001409FA1B9: jbe     loc_1409F9F64
 * 00000001409FA1BF: mov     r14, [rbp+0BE0h+var_C60]
 * 00000001409FA1C3: xor     eax, eax
 * 00000001409FA1C5: cmp     dword ptr [rbp+0BE0h+arg_8], eax
 * 00000001409FA1CB: jnz     loc_1409FA367
 * 00000001409FA1D1: mov     eax, [rbp+0BE0h+var_C58]
 * 00000001409FA1D4: cmp     eax, r12d
 * 00000001409FA1D7: jz      loc_1409FA367
 * 00000001409FA1DD: mov     [r14+0Ch], eax
 * 00000001409FA1E1: lea     rdx, [rbp+0BE0h+var_9C8]
 * 00000001409FA1E8: mov     [r14+10h], r12d
 * 00000001409FA1EC: lea     r8, [rbp+0BE0h+var_7D0]
 * 00000001409FA1F3: mov     eax, [r14+0Ch]
 * 00000001409FA1F7: mov     r9d, r12d
 * 00000001409FA1FA: mov     ebx, eax
 * 00000001409FA1FC: sub     r9d, eax
 * 00000001409FA1FF: add     rbx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FA204: mov     r11d, r9d
 * 00000001409FA207: add     r11, rbx
 * 00000001409FA20A: xor     eax, eax
 * 00000001409FA20C: mov     r10d, eax
 * 00000001409FA20F: mov     rcx, [r8]
 * 00000001409FA212: mov     eax, [rdx]
 * 00000001409FA214: add     rax, rcx
 * 00000001409FA217: cmp     rbx, rax
 * 00000001409FA21A: jnb     short loc_1409FA225
 * 00000001409FA21C: cmp     r11, rcx
 * 00000001409FA21F: ja      loc_1409FA363
 * 00000001409FA225: inc     r10d
 * 00000001409FA228: add     r8, 8
 * 00000001409FA22C: add     rdx, 4
 * 00000001409FA230: cmp     r10d, 6
 * 00000001409FA234: jb      short loc_1409FA20F
 * 00000001409FA236: mov     r13, [rbp+0BE0h+var_C20]
 * 00000001409FA23A: mov     r10, rbx
 * 00000001409FA23D: mov     rax, rbx
 * 00000001409FA240: add     [r13+828h], r9d
 * 00000001409FA247: mov     r14d, [r13+814h]
 * 00000001409FA24E: mov     r15, [r13+818h]
 * 00000001409FA255: cmp     rbx, r11
 * 00000001409FA258: jnb     short loc_1409FA26A
 * 00000001409FA25A: mov     ecx, 40h ; '@'
 * 00000001409FA25F: prefetchnta byte ptr [rax]
 * 00000001409FA262: add     rax, rcx
 * 00000001409FA265: cmp     rax, r11
 * 00000001409FA268: jb      short loc_1409FA25F
 * 00000001409FA26A: mov     r11d, r9d
 * 00000001409FA26D: mov     r8, r15
 * 00000001409FA270: shr     r11d, 7
 * 00000001409FA274: test    r11d, r11d
 * 00000001409FA277: jz      short loc_1409FA2EE
 * 00000001409FA279: mov     r13, 7010008004002001h
 * 00000001409FA283: mov     edx, 8
 * 00000001409FA288: lea     esi, [rdx-7]
 * 00000001409FA28B: mov     rax, [r10]
 * 00000001409FA28E: mov     ecx, r14d
 * 00000001409FA291: xor     rax, r8
 * 00000001409FA294: mov     r8, [r10+8]
 * 00000001409FA298: rol     rax, cl
 * 00000001409FA29B: add     r10, 10h
 * 00000001409FA29F: xor     r8, rax
 * 00000001409FA2A2: rol     r8, cl
 * 00000001409FA2A5: sub     rdx, rsi
 * 00000001409FA2A8: jnz     short loc_1409FA28B
 * 00000001409FA2AA: mov     rcx, r10
 * 00000001409FA2AD: sub     rcx, rbx
 * 00000001409FA2B0: xor     rcx, r15
 * 00000001409FA2B3: mov     rax, rcx
 * 00000001409FA2B6: rol     rax, 11h
 * 00000001409FA2BA: xor     rcx, rax
 * 00000001409FA2BD: mov     rax, r13
 * 00000001409FA2C0: mul     rcx
 * 00000001409FA2C3: xor     r14d, edx
 * 00000001409FA2C6: mov     [rbp+0BE0h+var_688], rdx
 * 00000001409FA2CD: xor     r14d, eax
 * 00000001409FA2D0: mov     rax, rsi
 * 00000001409FA2D3: and     r14d, 3Fh
 * 00000001409FA2D7: cmovz   r14d, eax
 * 00000001409FA2DB: mov     eax, 0FFFFFFFFh
 * 00000001409FA2E0: add     r11d, eax
 * 00000001409FA2E3: jnz     short loc_1409FA283
 * 00000001409FA2E5: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FA2EA: mov     r13, [rbp+0BE0h+var_C20]
 * 00000001409FA2EE: and     r9d, 7Fh
 * 00000001409FA2F2: mov     r11d, 1
 * 00000001409FA2F8: cmp     r9d, 8
 * 00000001409FA2FC: jb      short loc_1409FA31B
 * 00000001409FA2FE: mov     edx, r9d
 * 00000001409FA301: shr     rdx, 3
 * 00000001409FA305: xor     r8, [r10]
 * 00000001409FA308: mov     ecx, r14d
 * 00000001409FA30B: rol     r8, cl
 * 00000001409FA30E: add     r10, 8
 * 00000001409FA312: add     r9d, 0FFFFFFF8h
 * 00000001409FA316: sub     rdx, r11
 * 00000001409FA319: jnz     short loc_1409FA305
 * 00000001409FA31B: test    r9d, r9d
 * 00000001409FA31E: jz      short loc_1409FA33F
 * 00000001409FA320: mov     r12d, 0FFFFFFFFh
 * 00000001409FA326: movzx   eax, byte ptr [r10]
 * 00000001409FA32A: mov     ecx, r14d
 * 00000001409FA32D: xor     r8, rax
 * 00000001409FA330: add     r10, r11
 * 00000001409FA333: rol     r8, cl
 * 00000001409FA336: add     r9d, r12d
 * 00000001409FA339: jnz     short loc_1409FA326
 * 00000001409FA33B: mov     r12d, [rbp+0BE0h+var_BF0]
 * 00000001409FA33F: mov     rax, r8
 * 00000001409FA342: jmp     short loc_1409FA347
 * 00000001409FA344: xor     r8d, eax
 * 00000001409FA347: shr     rax, 1Fh
 * 00000001409FA34B: test    rax, rax
 * 00000001409FA34E: jnz     short loc_1409FA344
 * 00000001409FA350: mov     r14, [rbp+0BE0h+var_C60]
 * 00000001409FA354: btr     r8d, 1Fh
 * 00000001409FA359: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FA35D: mov     [r14+14h], r8d
 * 00000001409FA361: jmp     short loc_1409FA36B
 * 00000001409FA363: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FA367: mov     r13, [rbp+0BE0h+var_C20]
 * 00000001409FA36B: mov     rdx, [rbp+0BE0h+var_C10]
 * 00000001409FA36F: mov     r15, [rbp+0BE0h+var_BF8]
 * 00000001409FA373: cmp     r9, rdx
 * 00000001409FA376: jz      short loc_1409FA3B7
 * 00000001409FA378: mov     eax, [r9]
 * 00000001409FA37B: mov     ecx, [r9+4]
 * 00000001409FA37F: cmp     eax, [rsp+0CE0h+var_C78]
 * 00000001409FA383: jb      short loc_1409FA3B7
 * 00000001409FA385: cmp     ecx, r12d
 * 00000001409FA388: ja      short loc_1409FA3B7
 * 00000001409FA38A: cmp     r15, rdx
 * 00000001409FA38D: jz      short loc_1409FA3AB
 * 00000001409FA38F: mov     rax, [rbp+0BE0h+var_C50]
 * 00000001409FA393: mov     byte ptr [rax], 80h
 * 00000001409FA396: inc     rax
 * 00000001409FA399: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409FA39D: mov     eax, 0Ch
 * 00000001409FA3A2: add     r15, rax
 * 00000001409FA3A5: mov     [rbp+0BE0h+var_BF8], r15
 * 00000001409FA3A9: jmp     short loc_1409FA3B0
 * 00000001409FA3AB: mov     eax, 0Ch
 * 00000001409FA3B0: add     r9, rax
 * 00000001409FA3B3: mov     [rbp+0BE0h+var_C48], r9
 * 00000001409FA3B7: mov     r12, [rsp+0CE0h+var_C88]
 * 00000001409FA3BC: add     r14, 18h
 * 00000001409FA3C0: add     r12, 28h ; '('
 * 00000001409FA3C4: mov     [rbp+0BE0h+var_C60], r14
 * 00000001409FA3C8: mov     [rsp+0CE0h+var_C88], r12
 * 00000001409FA3CD: cmp     r14, [rsp+0CE0h+var_C70]
 * 00000001409FA3D2: jnz     loc_1409F9B0D
 * 00000001409FA3D8: mov     rbx, [rbp+0BE0h+var_B98]
 * 00000001409FA3DC: mov     r14, [rbp+0BE0h+var_C08]
 * 00000001409FA3E0: xor     eax, eax
 * 00000001409FA3E2: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409FA3E9: mov     ecx, eax
 * 00000001409FA3EB: mov     rdx, [rsp+0CE0h+var_C90]
 * 00000001409FA3F0: mov     r8d, 80000000h
 * 00000001409FA3F6: sub     rdx, rsi
 * 00000001409FA3F9: mov     [rsp+0CE0h+var_C80], rbx
 * 00000001409FA3FE: add     rdx, rbx
 * 00000001409FA401: mov     rsi, rbx
 * 00000001409FA404: mov     [rsp+0CE0h+var_C90], rdx
 * 00000001409FA409: lea     eax, [rcx+r8]
 * 00000001409FA40D: test    r8d, eax
 * 00000001409FA410: jnz     short loc_1409FA41A
 * 00000001409FA412: cmp     ecx, 0C000010Eh
 * 00000001409FA418: jnz     short loc_1409FA41E
 * 00000001409FA41A: mov     [rdx+28h], r14
 * 00000001409FA41E: mov     r13d, [rbp+0BE0h+var_BE0]
 * 00000001409FA422: jmp     loc_1409F8677
 * 00000001409FA427: mov     rbx, r13
 * 00000001409FA42A: mov     [rbp+0BE0h+var_BE0], eax
 * 00000001409FA42D: mov     r13, rax
 * 00000001409FA430: mov     r15d, eax
 * 00000001409FA433: mov     r12d, eax
 * 00000001409FA436: jmp     short loc_1409FA43A
 * 00000001409FA438: xor     eax, eax
 * 00000001409FA43A: mov     [rbp+0BE0h+var_B20], eax
 * 00000001409FA440: mov     rax, [rsi+2F8h]
 * 00000001409FA447: lea     r8, [rbp+0BE0h+var_A18]
 * 00000001409FA44E: lea     rdx, [rbp+0BE0h+var_B20]
 * 00000001409FA455: mov     ecx, r12d
 * 00000001409FA458: call    KeGuardDispatchICall
 * 00000001409FA45D: test    eax, eax
 * 00000001409FA45F: jz      loc_1409FA5A7
 * 00000001409FA465: mov     rax, [rsi+2D8h]
 * 00000001409FA46C: mov     rcx, [rbp+0BE0h+var_A18]
 * 00000001409FA473: call    KeGuardDispatchICall
 * 00000001409FA478: mov     r14, rax
 * 00000001409FA47B: test    rax, rax
 * 00000001409FA47E: jz      short loc_1409FA440
 * 00000001409FA480: mov     rax, [rsi+2E0h]
 * 00000001409FA487: mov     edi, 1
 * 00000001409FA48C: add     r15d, edi
 * 00000001409FA48F: mov     rcx, r14
 * 00000001409FA492: mov     [rbp+0BE0h+var_BE0], r15d
 * 00000001409FA496: call    KeGuardDispatchICall
 * 00000001409FA49B: mov     r15, rax
 * 00000001409FA49E: lea     rdx, [rbp+0BE0h+var_680]
 * 00000001409FA4A5: mov     rax, [rsi+208h]
 * 00000001409FA4AC: mov     rcx, r15
 * 00000001409FA4AF: call    KeGuardDispatchICall
 * 00000001409FA4B4: test    rax, rax
 * 00000001409FA4B7: jz      short loc_1409FA4D8
 * 00000001409FA4B9: mov     rax, [rsi+2E8h]
 * 00000001409FA4C0: mov     rdx, r14
 * 00000001409FA4C3: mov     rcx, [rbp+0BE0h+var_A18]
 * 00000001409FA4CA: call    KeGuardDispatchICall
 * 00000001409FA4CF: mov     r15d, [rbp+0BE0h+var_BE0]
 * 00000001409FA4D3: jmp     loc_1409FA440
 * 00000001409FA4D8: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FA4E2: jz      short loc_1409FA52D
 * 00000001409FA4E4: mov     rcx, [rsi+0A80h]
 * 00000001409FA4EB: mov     edx, 30h ; '0'
 * 00000001409FA4F0: lea     r8d, [rdx-2Ah]
 * 00000001409FA4F4: mov     rax, [rbx]
 * 00000001409FA4F7: add     edx, 0FFFFFFF8h
 * 00000001409FA4FA: mov     [rcx], rax
 * 00000001409FA4FD: add     rbx, 8
 * 00000001409FA501: add     rcx, 8
 * 00000001409FA505: sub     r8, rdi
 * 00000001409FA508: jnz     short loc_1409FA4F4
 * 00000001409FA50A: test    edx, edx
 * 00000001409FA50C: jz      short loc_1409FA526
 * 00000001409FA50E: mov     esi, 0FFFFFFFFh
 * 00000001409FA513: mov     al, [rbx]
 * 00000001409FA515: add     rbx, rdi
 * 00000001409FA518: mov     [rcx], al
 * 00000001409FA51A: add     rcx, rdi
 * 00000001409FA51D: add     edx, esi
 * 00000001409FA51F: jnz     short loc_1409FA513
 * 00000001409FA521: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FA526: mov     rbx, [rsi+0A80h]
 * 00000001409FA52D: mov     [rbx+18h], r15
 * 00000001409FA531: mov     rax, [rsi+590h]
 * 00000001409FA538: mov     [rax], rbx
 * 00000001409FA53B: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FA542: mov     rax, [rsi+590h]
 * 00000001409FA549: mov     [rax+8], r15
 * 00000001409FA54D: mov     dword ptr [rax+14h], 1000h
 * 00000001409FA554: xor     eax, eax
 * 00000001409FA556: cmp     [rsi+8F8h], eax
 * 00000001409FA55C: jnz     short loc_1409FA5A7
 * 00000001409FA55E: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FA568: xor     edx, edx
 * 00000001409FA56A: add     rax, rsi
 * 00000001409FA56D: mov     rcx, rsi
 * 00000001409FA570: mov     [rsi+900h], rax
 * 00000001409FA577: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FA581: add     rax, rbx
 * 00000001409FA584: mov     [rsi+908h], rax
 * 00000001409FA58B: movsxd  rax, dword ptr [rbx]
 * 00000001409FA58E: mov     [rsi+910h], rax
 * 00000001409FA595: mov     [rsi+918h], r13
 * 00000001409FA59C: mov     [rsi+8F8h], edi
 * 00000001409FA5A2: call    $$b8
 * 00000001409FA5A7: mov     r15d, [rbp+0BE0h+var_BE0]
 * 00000001409FA5AB: mov     edx, 1
 * 00000001409FA5B0: add     r12d, edx
 * 00000001409FA5B3: add     r13, rdx
 * 00000001409FA5B6: cmp     r12d, 3
 * 00000001409FA5BA: jb      loc_1409FA438
 * 00000001409FA5C0: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FA5C7: mov     r13d, r15d
 * 00000001409FA5CA: jmp     loc_1409FA885
 * 00000001409FA5CF: mov     rbx, r13
 * 00000001409FA5D2: mov     [rbp+0BE0h+var_950], rax
 * 00000001409FA5D9: mov     r13d, eax
 * 00000001409FA5DC: mov     r15, cr8
 * 00000001409FA5E0: mov     [rbp+0BE0h+arg_8], r15
 * 00000001409FA5E7: mov     cr8, r8
 * 00000001409FA5EB: mov     rax, [rsi+308h]
 * 00000001409FA5F2: lea     rcx, [rbp+0BE0h+var_950]
 * 00000001409FA5F9: call    KeGuardDispatchICall
 * 00000001409FA5FE: mov     r14, rax
 * 00000001409FA601: test    rax, rax
 * 00000001409FA604: jz      loc_1409FA72C
 * 00000001409FA60A: mov     edi, 1
 * 00000001409FA60F: mov     rax, [rsi+208h]
 * 00000001409FA616: lea     rdx, [rbp+0BE0h+var_678]
 * 00000001409FA61D: mov     rcx, r14
 * 00000001409FA620: add     r13d, edi
 * 00000001409FA623: call    KeGuardDispatchICall
 * 00000001409FA628: test    rax, rax
 * 00000001409FA62B: jnz     loc_1409FA6FF
 * 00000001409FA631: test    [rsi+990h], r12d
 * 00000001409FA638: jz      short loc_1409FA681
 * 00000001409FA63A: mov     rcx, [rsi+0A80h]
 * 00000001409FA641: lea     edx, [rax+30h]
 * 00000001409FA644: lea     r8d, [rax+6]
 * 00000001409FA648: mov     rax, [rbx]
 * 00000001409FA64B: add     edx, 0FFFFFFF8h
 * 00000001409FA64E: mov     [rcx], rax
 * 00000001409FA651: add     rbx, 8
 * 00000001409FA655: add     rcx, 8
 * 00000001409FA659: sub     r8, rdi
 * 00000001409FA65C: jnz     short loc_1409FA648
 * 00000001409FA65E: test    edx, edx
 * 00000001409FA660: jz      short loc_1409FA67A
 * 00000001409FA662: mov     esi, 0FFFFFFFFh
 * 00000001409FA667: mov     al, [rbx]
 * 00000001409FA669: add     rbx, rdi
 * 00000001409FA66C: mov     [rcx], al
 * 00000001409FA66E: add     rcx, rdi
 * 00000001409FA671: add     edx, esi
 * 00000001409FA673: jnz     short loc_1409FA667
 * 00000001409FA675: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FA67A: mov     rbx, [rsi+0A80h]
 * 00000001409FA681: mov     [rbx+18h], r14
 * 00000001409FA685: mov     rax, [rsi+590h]
 * 00000001409FA68C: mov     [rax], rbx
 * 00000001409FA68F: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FA696: mov     rax, [rsi+590h]
 * 00000001409FA69D: mov     [rax+8], r14
 * 00000001409FA6A1: mov     dword ptr [rax+14h], 1000h
 * 00000001409FA6A8: xor     eax, eax
 * 00000001409FA6AA: cmp     [rsi+8F8h], eax
 * 00000001409FA6B0: jnz     short loc_1409FA6FF
 * 00000001409FA6B2: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FA6BC: xor     edx, edx
 * 00000001409FA6BE: add     rax, rsi
 * 00000001409FA6C1: mov     rcx, rsi
 * 00000001409FA6C4: mov     [rsi+900h], rax
 * 00000001409FA6CB: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FA6D5: add     rax, rbx
 * 00000001409FA6D8: mov     [rsi+908h], rax
 * 00000001409FA6DF: movsxd  rax, dword ptr [rbx]
 * 00000001409FA6E2: mov     [rsi+910h], rax
 * 00000001409FA6E9: mov     qword ptr [rsi+918h], 4
 * 00000001409FA6F4: mov     [rsi+8F8h], edi
 * 00000001409FA6FA: call    $$b8
 * 00000001409FA6FF: mov     rax, [rsi+308h]
 * 00000001409FA706: lea     rcx, [rbp+0BE0h+var_950]
 * 00000001409FA70D: call    KeGuardDispatchICall
 * 00000001409FA712: mov     r14, rax
 * 00000001409FA715: test    rax, rax
 * 00000001409FA718: jnz     loc_1409FA60F
 * 00000001409FA71E: mov     r15, [rbp+0BE0h+arg_8]
 * 00000001409FA725: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FA72C: movzx   eax, r15b
 * 00000001409FA730: mov     cr8, rax
 * 00000001409FA734: jmp     loc_1409FA880
 * 00000001409FA739: mov     [rbp+0BE0h+var_948], rax
 * 00000001409FA740: lea     rcx, [rbp+0BE0h+var_948]
 * 00000001409FA747: mov     rbx, r13
 * 00000001409FA74A: mov     r13d, eax
 * 00000001409FA74D: mov     rax, [rsi+300h]
 * 00000001409FA754: call    KeGuardDispatchICall
 * 00000001409FA759: mov     r14, rax
 * 00000001409FA75C: test    rax, rax
 * 00000001409FA75F: jz      loc_1409FA880
 * 00000001409FA765: mov     edi, 1
 * 00000001409FA76A: mov     rax, [rsi+208h]
 * 00000001409FA771: lea     rdx, [rbp+0BE0h+var_670]
 * 00000001409FA778: mov     rcx, r14
 * 00000001409FA77B: add     r13d, edi
 * 00000001409FA77E: call    KeGuardDispatchICall
 * 00000001409FA783: test    rax, rax
 * 00000001409FA786: jnz     loc_1409FA85A
 * 00000001409FA78C: test    [rsi+990h], r12d
 * 00000001409FA793: jz      short loc_1409FA7DC
 * 00000001409FA795: mov     rcx, [rsi+0A80h]
 * 00000001409FA79C: lea     edx, [rax+30h]
 * 00000001409FA79F: lea     r8d, [rax+6]
 * 00000001409FA7A3: mov     rax, [rbx]
 * 00000001409FA7A6: add     edx, 0FFFFFFF8h
 * 00000001409FA7A9: mov     [rcx], rax
 * 00000001409FA7AC: add     rbx, 8
 * 00000001409FA7B0: add     rcx, 8
 * 00000001409FA7B4: sub     r8, rdi
 * 00000001409FA7B7: jnz     short loc_1409FA7A3
 * 00000001409FA7B9: test    edx, edx
 * 00000001409FA7BB: jz      short loc_1409FA7D5
 * 00000001409FA7BD: mov     esi, 0FFFFFFFFh
 * 00000001409FA7C2: mov     al, [rbx]
 * 00000001409FA7C4: add     rbx, rdi
 * 00000001409FA7C7: mov     [rcx], al
 * 00000001409FA7C9: add     rcx, rdi
 * 00000001409FA7CC: add     edx, esi
 * 00000001409FA7CE: jnz     short loc_1409FA7C2
 * 00000001409FA7D0: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FA7D5: mov     rbx, [rsi+0A80h]
 * 00000001409FA7DC: mov     [rbx+18h], r14
 * 00000001409FA7E0: mov     rax, [rsi+590h]
 * 00000001409FA7E7: mov     [rax], rbx
 * 00000001409FA7EA: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FA7F1: mov     rax, [rsi+590h]
 * 00000001409FA7F8: mov     [rax+8], r14
 * 00000001409FA7FC: mov     dword ptr [rax+14h], 1000h
 * 00000001409FA803: xor     eax, eax
 * 00000001409FA805: cmp     [rsi+8F8h], eax
 * 00000001409FA80B: jnz     short loc_1409FA85A
 * 00000001409FA80D: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FA817: xor     edx, edx
 * 00000001409FA819: add     rax, rsi
 * 00000001409FA81C: mov     rcx, rsi
 * 00000001409FA81F: mov     [rsi+900h], rax
 * 00000001409FA826: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FA830: add     rax, rbx
 * 00000001409FA833: mov     [rsi+908h], rax
 * 00000001409FA83A: movsxd  rax, dword ptr [rbx]
 * 00000001409FA83D: mov     [rsi+910h], rax
 * 00000001409FA844: mov     qword ptr [rsi+918h], 3
 * 00000001409FA84F: mov     [rsi+8F8h], edi
 * 00000001409FA855: call    $$b8
 * 00000001409FA85A: mov     rax, [rsi+300h]
 * 00000001409FA861: lea     rcx, [rbp+0BE0h+var_948]
 * 00000001409FA868: call    KeGuardDispatchICall
 * 00000001409FA86D: mov     r14, rax
 * 00000001409FA870: test    rax, rax
 * 00000001409FA873: jnz     loc_1409FA76A
 * 00000001409FA879: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FA880: mov     edx, 1
 * 00000001409FA885: shl     r13d, 0Ch
 * 00000001409FA889: add     [rsi+828h], r13d
 * 00000001409FA890: add     [rsi+824h], edx
 * 00000001409FA896: mov     eax, [rsi+82Ch]
 * 00000001409FA89C: cmp     [rsi+828h], eax
 * 00000001409FA8A2: jge     short loc_1409FA8C0
 * 00000001409FA8A4: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FA8A9: mov     r8d, 0Ch
 * 00000001409FA8AF: mov     r12d, 40000000h
 * 00000001409FA8B5: jmp     loc_1409F8220
 * 00000001409FA8BA: mov     [rsi+824h], eax
 * 00000001409FA8C0: mov     [rsp+0CE0h+var_C80], rsi
 * 00000001409FA8C5: jmp     loc_1409F6318
 * 00000001409FA8CA: mov     edx, [r13+2Ch]
 * 00000001409FA8CE: lea     rcx, [rbp+0BE0h+var_310]
 * 00000001409FA8D5: mov     rax, [rsi+1A0h]
 * 00000001409FA8DC: mov     ebx, [r13+28h]
 * 00000001409FA8E0: call    KeGuardDispatchICall
 * 00000001409FA8E5: mov     rax, [rsi+1D0h]
 * 00000001409FA8EC: lea     rdx, [rbp+0BE0h+var_300]
 * 00000001409FA8F3: lea     rcx, [rbp+0BE0h+var_310]
 * 00000001409FA8FA: call    KeGuardDispatchICall
 * 00000001409FA8FF: cmp     dword ptr [rbp+0BE0h+arg_8], 26h ; '&'
 * 00000001409FA906: jz      short loc_1409FA916
 * 00000001409FA908: test    ebx, ebx
 * 00000001409FA90A: jz      short loc_1409FA911
 * 00000001409FA90C: mov     rbx, cr4
 * 00000001409FA90F: jmp     short loc_1409FA925
 * 00000001409FA911: mov     rbx, cr0
 * 00000001409FA914: jmp     short loc_1409FA925
 * 00000001409FA916: xor     ecx, ecx
 * 00000001409FA918: xgetbv
 * 00000001409FA91B: shl     rdx, 20h
 * 00000001409FA91F: or      rdx, rax
 * 00000001409FA922: mov     rbx, rdx
 * 00000001409FA925: mov     rax, [rsi+198h]
 * 00000001409FA92C: lea     rcx, [rbp+0BE0h+var_300]
 * 00000001409FA933: call    KeGuardDispatchICall
 * 00000001409FA938: mov     r8, [r13+18h]
 * 00000001409FA93C: xor     r15d, r15d
 * 00000001409FA93F: mov     rcx, [r13+20h]
 * 00000001409FA943: and     r8, rbx
 * 00000001409FA946: cmp     r8, rcx
 * 00000001409FA949: jz      loc_1409F631B
 * 00000001409FA94F: mov     eax, [r13+28h]
 * 00000001409FA953: mov     edx, [r13+2Ch]
 * 00000001409FA957: shl     rdx, 20h
 * 00000001409FA95B: or      rdx, rax
 * 00000001409FA95E: mov     eax, [rsi+8F8h]
 * 00000001409FA964: test    eax, eax
 * 00000001409FA966: jnz     loc_1409F631B
 * 00000001409FA96C: mov     rax, [rsi+590h]
 * 00000001409FA973: xor     rcx, r8
 * 00000001409FA976: mov     [rax+18h], rcx
 * 00000001409FA97A: mov     eax, [rsi+8F8h]
 * 00000001409FA980: test    eax, eax
 * 00000001409FA982: jnz     loc_1409F631B
 * 00000001409FA988: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FA992: add     rax, rsi
 * 00000001409FA995: mov     [rsi+900h], rax
 * 00000001409FA99C: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FA9A6: add     rax, r13
 * 00000001409FA9A9: mov     [rsi+908h], rax
 * 00000001409FA9B0: movsxd  rax, dword ptr [r13+0]
 * 00000001409FA9B4: mov     [rsi+910h], rax
 * 00000001409FA9BB: mov     [rsi+918h], rdx
 * 00000001409FA9C2: jmp     loc_1409F66E7
 * 00000001409FA9C7: cmp     dword ptr [rsi+958h], 0Bh
 * 00000001409FA9CE: jnz     loc_1409F6318
 * 00000001409FA9D4: add     dword ptr [rsi+828h], 100h
 * 00000001409FA9DE: mov     r15, [rsi+588h]
 * 00000001409FA9E5: mov     rax, [rsi+2D8h]
 * 00000001409FA9EC: mov     rcx, r15
 * 00000001409FA9EF: call    KeGuardDispatchICall
 * 00000001409FA9F4: mov     r14, rax
 * 00000001409FA9F7: test    rax, rax
 * 00000001409FA9FA: jz      loc_1409F6318
 * 00000001409FAA00: mov     rax, [rsi+2E0h]
 * 00000001409FAA07: mov     rcx, r14
 * 00000001409FAA0A: call    KeGuardDispatchICall
 * 00000001409FAA0F: mov     rbx, rax
 * 00000001409FAA12: xor     edx, edx
 * 00000001409FAA14: mov     rax, [r13+18h]
 * 00000001409FAA18: test    rax, rax
 * 00000001409FAA1B: jz      short loc_1409FAA84
 * 00000001409FAA1D: cmp     rax, rbx
 * 00000001409FAA20: jz      loc_1409FAB04
 * 00000001409FAA26: xor     eax, eax
 * 00000001409FAA28: cmp     [rsi+8F8h], eax
 * 00000001409FAA2E: jnz     loc_1409FAB04
 * 00000001409FAA34: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FAA3E: mov     rcx, rsi
 * 00000001409FAA41: add     rax, rsi
 * 00000001409FAA44: mov     [rsi+900h], rax
 * 00000001409FAA4B: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FAA55: add     rax, r13
 * 00000001409FAA58: mov     [rsi+908h], rax
 * 00000001409FAA5F: movsxd  rax, dword ptr [r13+0]
 * 00000001409FAA63: mov     [rsi+910h], rax
 * 00000001409FAA6A: lea     eax, [rdx+1]
 * 00000001409FAA6D: mov     [rsi+918h], rbx
 * 00000001409FAA74: mov     [rsi+8F8h], eax
 * 00000001409FAA7A: call    $$b8
 * 00000001409FAA7F: jmp     loc_1409FAB04
 * 00000001409FAA84: mov     eax, [rsi+974h]
 * 00000001409FAA8A: mov     rcx, [rsi+978h]
 * 00000001409FAA91: test    rax, rax
 * 00000001409FAA94: jz      short loc_1409FAAA7
 * 00000001409FAA96: lea     rdx, [rax-1]
 * 00000001409FAA9A: add     rdx, rcx
 * 00000001409FAA9D: cmp     rbx, rcx
 * 00000001409FAAA0: jb      short loc_1409FAAA7
 * 00000001409FAAA2: cmp     rbx, rdx
 * 00000001409FAAA5: jbe     short loc_1409FAB00
 * 00000001409FAAA7: xor     eax, eax
 * 00000001409FAAA9: cmp     [rsi+8F8h], eax
 * 00000001409FAAAF: jnz     short loc_1409FAB00
 * 00000001409FAAB1: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FAABB: xor     edx, edx
 * 00000001409FAABD: add     rax, rsi
 * 00000001409FAAC0: mov     rcx, rsi
 * 00000001409FAAC3: mov     [rsi+900h], rax
 * 00000001409FAACA: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FAAD4: add     rax, r13
 * 00000001409FAAD7: mov     [rsi+908h], rax
 * 00000001409FAADE: movsxd  rax, dword ptr [r13+0]
 * 00000001409FAAE2: mov     [rsi+910h], rax
 * 00000001409FAAE9: mov     eax, 1
 * 00000001409FAAEE: mov     [rsi+918h], rbx
 * 00000001409FAAF5: mov     [rsi+8F8h], eax
 * 00000001409FAAFB: call    $$b8
 * 00000001409FAB00: mov     [r13+18h], rbx
 * 00000001409FAB04: mov     rax, [rsi+2E8h]
 * 00000001409FAB0B: mov     rdx, r14
 * 00000001409FAB0E: mov     rcx, r15
 * 00000001409FAB11: call    KeGuardDispatchICall
 * 00000001409FAB16: jmp     loc_1409F6318
 * 00000001409FAB1B: jnz     short loc_1409FAB6D
 * 00000001409FAB1D: xor     eax, eax
 * 00000001409FAB1F: cmp     [rsi+980h], rax
 * 00000001409FAB26: jz      loc_1409F6312
 * 00000001409FAB2C: mov     ecx, [rsi+994h]
 * 00000001409FAB32: mov     eax, ecx
 * 00000001409FAB34: shr     eax, 2
 * 00000001409FAB37: and     eax, edx
 * 00000001409FAB39: jnz     loc_1409F63EA
 * 00000001409FAB3F: xor     edx, edx
 * 00000001409FAB41: cmp     [rsi+824h], edx
 * 00000001409FAB47: lea     edx, [rax+1]
 * 00000001409FAB4A: jnz     short loc_1409FAB60
 * 00000001409FAB4C: mov     eax, ecx
 * 00000001409FAB4E: shl     eax, 3
 * 00000001409FAB51: xor     eax, ecx
 * 00000001409FAB53: and     eax, 20h
 * 00000001409FAB56: xor     eax, ecx
 * 00000001409FAB58: mov     [rsi+994h], eax
 * 00000001409FAB5E: jmp     short loc_1409FAB6D
 * 00000001409FAB60: shr     ecx, 5
 * 00000001409FAB63: and     ecx, edx
 * 00000001409FAB65: cmp     eax, ecx
 * 00000001409FAB67: jnz     loc_1409F63EA
 * 00000001409FAB6D: mov     r14, [r13+8]
 * 00000001409FAB71: mov     r8d, [r13+10h]
 * 00000001409FAB75: mov     r9, r14
 * 00000001409FAB78: add     [rsi+828h], r8d
 * 00000001409FAB7F: mov     rax, r14
 * 00000001409FAB82: mov     r10d, [rsi+814h]
 * 00000001409FAB89: mov     r15, [rsi+818h]
 * 00000001409FAB90: lea     rcx, [r14+r8]
 * 00000001409FAB94: cmp     r14, rcx
 * 00000001409FAB97: jnb     short loc_1409FABAA
 * 00000001409FAB99: mov     r11d, 40h ; '@'
 * 00000001409FAB9F: prefetchnta byte ptr [rax]
 * 00000001409FABA2: add     rax, r11
 * 00000001409FABA5: cmp     rax, rcx
 * 00000001409FABA8: jb      short loc_1409FAB9F
 * 00000001409FABAA: mov     r11d, r8d
 * 00000001409FABAD: mov     rbx, r15
 * 00000001409FABB0: shr     r11d, 7
 * 00000001409FABB4: mov     r12d, 0FFFFFFFFh
 * 00000001409FABBA: test    r11d, r11d
 * 00000001409FABBD: jz      short loc_1409FAC2B
 * 00000001409FABBF: mov     rdi, 7010008004002001h
 * 00000001409FABC9: mov     eax, 8
 * 00000001409FABCE: xor     rbx, [r9]
 * 00000001409FABD1: mov     ecx, r10d
 * 00000001409FABD4: rol     rbx, cl
 * 00000001409FABD7: xor     rbx, [r9+8]
 * 00000001409FABDB: add     r9, 10h
 * 00000001409FABDF: rol     rbx, cl
 * 00000001409FABE2: sub     rax, rdx
 * 00000001409FABE5: jnz     short loc_1409FABCE
 * 00000001409FABE7: mov     rcx, r9
 * 00000001409FABEA: sub     rcx, r14
 * 00000001409FABED: xor     rcx, r15
 * 00000001409FABF0: mov     rax, rcx
 * 00000001409FABF3: rol     rax, 11h
 * 00000001409FABF7: xor     rcx, rax
 * 00000001409FABFA: mov     rax, rdi
 * 00000001409FABFD: mul     rcx
 * 00000001409FAC00: xor     r10d, edx
 * 00000001409FAC03: mov     [rbp+0BE0h+var_668], rdx
 * 00000001409FAC0A: xor     r10d, eax
 * 00000001409FAC0D: mov     edx, 1
 * 00000001409FAC12: and     r10d, 3Fh
 * 00000001409FAC16: cmovz   r10d, edx
 * 00000001409FAC1A: add     r11d, r12d
 * 00000001409FAC1D: jnz     short loc_1409FABC9
 * 00000001409FAC1F: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FAC24: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FAC2B: and     r8d, 7Fh
 * 00000001409FAC2F: cmp     r8d, 8
 * 00000001409FAC33: jb      short loc_1409FAC52
 * 00000001409FAC35: mov     eax, r8d
 * 00000001409FAC38: shr     rax, 3
 * 00000001409FAC3C: xor     rbx, [r9]
 * 00000001409FAC3F: mov     ecx, r10d
 * 00000001409FAC42: rol     rbx, cl
 * 00000001409FAC45: add     r9, 8
 * 00000001409FAC49: add     r8d, 0FFFFFFF8h
 * 00000001409FAC4D: sub     rax, rdx
 * 00000001409FAC50: jnz     short loc_1409FAC3C
 * 00000001409FAC52: test    r8d, r8d
 * 00000001409FAC55: jz      short loc_1409FAC6C
 * 00000001409FAC57: movzx   eax, byte ptr [r9]
 * 00000001409FAC5B: mov     ecx, r10d
 * 00000001409FAC5E: xor     rbx, rax
 * 00000001409FAC61: add     r9, rdx
 * 00000001409FAC64: rol     rbx, cl
 * 00000001409FAC67: add     r8d, r12d
 * 00000001409FAC6A: jnz     short loc_1409FAC57
 * 00000001409FAC6C: mov     rax, rbx
 * 00000001409FAC6F: shr     rax, 1Fh
 * 00000001409FAC73: xor     r15d, r15d
 * 00000001409FAC76: jmp     short loc_1409FAC7E
 * 00000001409FAC78: xor     ebx, eax
 * 00000001409FAC7A: shr     rax, 1Fh
 * 00000001409FAC7E: test    rax, rax
 * 00000001409FAC81: jnz     short loc_1409FAC78
 * 00000001409FAC83: btr     ebx, 1Fh
 * 00000001409FAC87: cmp     ebx, [r13+14h]
 * 00000001409FAC8B: jz      loc_1409FAD6B
 * 00000001409FAC91: lock or [rsp+0CE0h+var_CE0], eax
 * 00000001409FAC95: mov     eax, [r13+18h]
 * 00000001409FAC99: test    dl, al
 * 00000001409FAC9B: jz      short loc_1409FACAE
 * 00000001409FAC9D: mov     rax, [rsi+580h]
 * 00000001409FACA4: mov     cl, [rax]
 * 00000001409FACA6: test    cl, cl
 * 00000001409FACA8: jnz     loc_1409FAD6B
 * 00000001409FACAE: mov     ecx, [r13+10h]
 * 00000001409FACB2: mov     rdx, [r13+8]
 * 00000001409FACB6: test    rcx, rcx
 * 00000001409FACB9: jz      loc_1409FAE0A
 * 00000001409FACBF: mov     eax, [rsi+994h]
 * 00000001409FACC5: mov     r8d, 40h ; '@'
 * 00000001409FACCB: test    r8b, al
 * 00000001409FACCE: jz      loc_1409FAE0A
 * 00000001409FACD4: mov     r12, cr8
 * 00000001409FACD8: lea     eax, [r8-3Eh]
 * 00000001409FACDC: mov     cr8, rax
 * 00000001409FACE0: mov     r14, rdx
 * 00000001409FACE3: lea     rax, [rcx-1]
 * 00000001409FACE7: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FACEE: add     rax, rdx
 * 00000001409FACF1: or      rax, 0FFFh
 * 00000001409FACF7: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FACFE: lea     r13, [r14-1]
 * 00000001409FAD02: movzx   r15d, r12b
 * 00000001409FAD06: mov     rax, [rsi+468h]
 * 00000001409FAD0D: xor     edx, edx
 * 00000001409FAD0F: mov     rcx, r14
 * 00000001409FAD12: call    KeGuardDispatchICall
 * 00000001409FAD17: cmp     eax, 0C000022Dh
 * 00000001409FAD1C: jnz     short loc_1409FAD42
 * 00000001409FAD1E: mov     eax, 1
 * 00000001409FAD23: cmp     r12b, al
 * 00000001409FAD26: ja      short loc_1409FAD4A
 * 00000001409FAD28: movzx   r15d, r12b
 * 00000001409FAD2C: mov     cr8, r15
 * 00000001409FAD30: mov     al, [r14]
 * 00000001409FAD33: mov     rax, cr8
 * 00000001409FAD37: mov     eax, 2
 * 00000001409FAD3C: mov     cr8, rax
 * 00000001409FAD40: jmp     short loc_1409FAD06
 * 00000001409FAD42: test    eax, eax
 * 00000001409FAD44: js      loc_1409FAE01
 * 00000001409FAD4A: mov     r11d, 1000h
 * 00000001409FAD50: add     r14, r11
 * 00000001409FAD53: add     r13, r11
 * 00000001409FAD56: cmp     r13, [rbp+0BE0h+arg_8]
 * 00000001409FAD5D: jnz     short loc_1409FAD02
 * 00000001409FAD5F: mov     cr8, r15
 * 00000001409FAD63: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FAD68: xor     r15d, r15d
 * 00000001409FAD6B: mov     ebx, 1
 * 00000001409FAD70: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FAD7A: jz      loc_1409F631B
 * 00000001409FAD80: mov     r8d, [r13+10h]
 * 00000001409FAD84: test    r8d, r8d
 * 00000001409FAD87: jz      loc_1409F6318
 * 00000001409FAD8D: mov     rdx, [r13+8]
 * 00000001409FAD91: lea     r9, [rbp+0BE0h+var_2F0]
 * 00000001409FAD98: mov     rcx, rsi
 * 00000001409FAD9B: call    sub_1403E6E8C
 * 00000001409FADA0: mov     r8d, 10h
 * 00000001409FADA6: lea     r9, [r13+1Ch]
 * 00000001409FADAA: lea     r10, [rbp+0BE0h+var_2F0]
 * 00000001409FADB1: mov     rcx, [r10]
 * 00000001409FADB4: add     r10, 8
 * 00000001409FADB8: mov     rax, [r9]
 * 00000001409FADBB: add     r9, 8
 * 00000001409FADBF: cmp     rcx, rax
 * 00000001409FADC2: jnz     loc_1409FAE91
 * 00000001409FADC8: add     r8d, 0FFFFFFF8h
 * 00000001409FADCC: cmp     r8d, 8
 * 00000001409FADD0: jnb     short loc_1409FADB1
 * 00000001409FADD2: test    r8d, r8d
 * 00000001409FADD5: jz      loc_1409FAFBE
 * 00000001409FADDB: movzx   edx, byte ptr [r10]
 * 00000001409FADDF: add     r10, rbx
 * 00000001409FADE2: movzx   eax, byte ptr [r9]
 * 00000001409FADE6: add     r9, rbx
 * 00000001409FADE9: cmp     rdx, rax
 * 00000001409FADEC: jnz     loc_1409FAE91
 * 00000001409FADF2: mov     eax, 0FFFFFFFFh
 * 00000001409FADF7: add     r8d, eax
 * 00000001409FADFA: jnz     short loc_1409FADDB
 * 00000001409FADFC: jmp     loc_1409FAFBE
 * 00000001409FAE01: mov     cr8, r15
 * 00000001409FAE05: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FAE0A: mov     eax, [rsi+8F8h]
 * 00000001409FAE10: xor     r15d, r15d
 * 00000001409FAE13: mov     ecx, [r13+14h]
 * 00000001409FAE17: test    eax, eax
 * 00000001409FAE19: jnz     short loc_1409FAE31
 * 00000001409FAE1B: mov     eax, ebx
 * 00000001409FAE1D: xor     rcx, rax
 * 00000001409FAE20: mov     rax, [rsi+590h]
 * 00000001409FAE27: mov     [rax+18h], rcx
 * 00000001409FAE2B: mov     eax, [rsi+8F8h]
 * 00000001409FAE31: mov     rcx, [r13+8]
 * 00000001409FAE35: mov     ebx, 1
 * 00000001409FAE3A: test    eax, eax
 * 00000001409FAE3C: jnz     loc_1409FAD70
 * 00000001409FAE42: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FAE4C: xor     edx, edx
 * 00000001409FAE4E: add     rax, rsi
 * 00000001409FAE51: mov     [rsi+900h], rax
 * 00000001409FAE58: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FAE62: add     rax, r13
 * 00000001409FAE65: mov     [rsi+908h], rax
 * 00000001409FAE6C: movsxd  rax, dword ptr [r13+0]
 * 00000001409FAE70: mov     [rsi+910h], rax
 * 00000001409FAE77: mov     [rsi+918h], rcx
 * 00000001409FAE7E: mov     rcx, rsi
 * 00000001409FAE81: mov     [rsi+8F8h], ebx
 * 00000001409FAE87: call    $$b8
 * 00000001409FAE8C: jmp     loc_1409FAD70
 * 00000001409FAE91: xor     eax, eax
 * 00000001409FAE93: lock or [rsp+0CE0h+var_CE0], eax
 * 00000001409FAE97: mov     eax, [r13+18h]
 * 00000001409FAE9B: test    bl, al
 * 00000001409FAE9D: jz      short loc_1409FAEB0
 * 00000001409FAE9F: mov     rax, [rsi+580h]
 * 00000001409FAEA6: mov     cl, [rax]
 * 00000001409FAEA8: test    cl, cl
 * 00000001409FAEAA: jnz     loc_1409FAFBE
 * 00000001409FAEB0: mov     edx, [r13+10h]
 * 00000001409FAEB4: mov     rcx, [r13+8]
 * 00000001409FAEB8: test    rdx, rdx
 * 00000001409FAEBB: jz      loc_1409FAF6A
 * 00000001409FAEC1: mov     eax, [rsi+994h]
 * 00000001409FAEC7: mov     r8d, 40h ; '@'
 * 00000001409FAECD: test    r8b, al
 * 00000001409FAED0: jz      loc_1409FAF6A
 * 00000001409FAED6: mov     r15, cr8
 * 00000001409FAEDA: lea     eax, [r8-3Eh]
 * 00000001409FAEDE: mov     cr8, rax
 * 00000001409FAEE2: mov     rbx, rcx
 * 00000001409FAEE5: lea     r13, [rdx-1]
 * 00000001409FAEE9: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001409FAEF0: add     r13, rcx
 * 00000001409FAEF3: or      r13, 0FFFh
 * 00000001409FAEFA: lea     r12, [rbx-1]
 * 00000001409FAEFE: movzx   r14d, r15b
 * 00000001409FAF02: mov     rax, [rsi+468h]
 * 00000001409FAF09: xor     edx, edx
 * 00000001409FAF0B: mov     rcx, rbx
 * 00000001409FAF0E: call    KeGuardDispatchICall
 * 00000001409FAF13: cmp     eax, 0C000022Dh
 * 00000001409FAF18: jnz     short loc_1409FAF3D
 * 00000001409FAF1A: mov     eax, 1
 * 00000001409FAF1F: cmp     r15b, al
 * 00000001409FAF22: ja      short loc_1409FAF41
 * 00000001409FAF24: movzx   r14d, r15b
 * 00000001409FAF28: mov     cr8, r14
 * 00000001409FAF2C: mov     al, [rbx]
 * 00000001409FAF2E: mov     rax, cr8
 * 00000001409FAF32: mov     eax, 2
 * 00000001409FAF37: mov     cr8, rax
 * 00000001409FAF3B: jmp     short loc_1409FAF02
 * 00000001409FAF3D: test    eax, eax
 * 00000001409FAF3F: js      short loc_1409FAF58
 * 00000001409FAF41: mov     r11d, 1000h
 * 00000001409FAF47: add     rbx, r11
 * 00000001409FAF4A: add     r12, r11
 * 00000001409FAF4D: cmp     r12, r13
 * 00000001409FAF50: jnz     short loc_1409FAEFE
 * 00000001409FAF52: mov     cr8, r14
 * 00000001409FAF56: jmp     short loc_1409FAFBE
 * 00000001409FAF58: mov     cr8, r14
 * 00000001409FAF5C: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FAF61: mov     ebx, 1
 * 00000001409FAF66: mov     rcx, [r13+8]
 * 00000001409FAF6A: xor     eax, eax
 * 00000001409FAF6C: cmp     [rsi+8F8h], eax
 * 00000001409FAF72: jnz     short loc_1409FAFBE
 * 00000001409FAF74: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FAF7E: xor     edx, edx
 * 00000001409FAF80: add     rax, rsi
 * 00000001409FAF83: mov     [rsi+900h], rax
 * 00000001409FAF8A: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FAF94: add     rax, r13
 * 00000001409FAF97: mov     [rsi+908h], rax
 * 00000001409FAF9E: movsxd  rax, dword ptr [r13+0]
 * 00000001409FAFA2: mov     [rsi+910h], rax
 * 00000001409FAFA9: mov     [rsi+918h], rcx
 * 00000001409FAFB0: mov     rcx, rsi
 * 00000001409FAFB3: mov     [rsi+8F8h], ebx
 * 00000001409FAFB9: call    $$b8
 * 00000001409FAFBE: mov     rax, [rsp+0CE0h+var_C90]
 * 00000001409FAFC3: mov     eax, [rax+10h]
 * 00000001409FAFC6: shl     eax, 4
 * 00000001409FAFC9: jmp     loc_1409F7049
 * 00000001409FAFCE: mov     r8d, [r13+10h]
 * 00000001409FAFD2: test    r8d, r8d
 * 00000001409FAFD5: jnz     loc_1409FB5B3
 * 00000001409FAFDB: lea     rax, [r13+30h]
 * 00000001409FAFDF: xor     r9d, r9d
 * 00000001409FAFE2: mov     [rbp+0BE0h+var_860], rax
 * 00000001409FAFE9: lea     rcx, [rbp+0BE0h+var_868]
 * 00000001409FAFF0: movzx   eax, word ptr [r13+28h]
 * 00000001409FAFF5: xor     r8d, r8d
 * 00000001409FAFF8: mov     [rbp+0BE0h+var_868], ax
 * 00000001409FAFFF: xor     edx, edx
 * 00000001409FB001: mov     [rbp+0BE0h+var_866], ax
 * 00000001409FB008: lea     rax, [rbp+0BE0h+var_B30]
 * 00000001409FB00F: mov     [rsp+0CE0h+var_CA8], rax
 * 00000001409FB014: xor     eax, eax
 * 00000001409FB016: mov     [rsp+0CE0h+var_CB0], rax
 * 00000001409FB01B: mov     byte ptr [rsp+0CE0h+var_CB8], al
 * 00000001409FB01F: mov     rax, [rsi+510h]
 * 00000001409FB026: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 00000001409FB02B: mov     rax, [rsi+1E8h]
 * 00000001409FB032: call    KeGuardDispatchICall
 * 00000001409FB037: test    eax, eax
 * 00000001409FB039: js      loc_1409F6318
 * 00000001409FB03F: mov     rax, [rbp+0BE0h+var_B30]
 * 00000001409FB046: mov     ecx, [rax+10h]
 * 00000001409FB049: mov     eax, 10h
 * 00000001409FB04E: test    al, cl
 * 00000001409FB050: jnz     short loc_1409FB065
 * 00000001409FB052: mov     rax, [rsi+1E0h]
 * 00000001409FB059: mov     rcx, [rbp+0BE0h+var_B30]
 * 00000001409FB060: jmp     loc_1409F81AB
 * 00000001409FB065: mov     rcx, [rsi+1E8h]
 * 00000001409FB06C: lea     rdx, [rbp+0BE0h+var_170]
 * 00000001409FB073: mov     rax, [rsi+200h]
 * 00000001409FB07A: call    KeGuardDispatchICall
 * 00000001409FB07F: mov     rcx, [rbp+0BE0h+var_168]
 * 00000001409FB086: test    rcx, rcx
 * 00000001409FB089: jz      short loc_1409FB0AB
 * 00000001409FB08B: mov     rax, [rsi+1F8h]
 * 00000001409FB092: mov     rbx, rcx
 * 00000001409FB095: mov     [rbp+0BE0h+var_C30], rcx
 * 00000001409FB099: call    KeGuardDispatchICall
 * 00000001409FB09E: test    rax, rax
 * 00000001409FB0A1: jz      short loc_1409FB0AB
 * 00000001409FB0A3: mov     r15d, [rax+50h]
 * 00000001409FB0A7: mov     [rbp+0BE0h+var_C28], r15d
 * 00000001409FB0AB: mov     rcx, [r13+18h]
 * 00000001409FB0AF: lea     rdx, [rbp+0BE0h+var_158]
 * 00000001409FB0B6: mov     rax, [rsi+200h]
 * 00000001409FB0BD: call    KeGuardDispatchICall
 * 00000001409FB0C2: mov     rcx, [rbp+0BE0h+var_150]
 * 00000001409FB0C9: test    rcx, rcx
 * 00000001409FB0CC: jz      short loc_1409FB0F0
 * 00000001409FB0CE: mov     rax, [rsi+1F8h]
 * 00000001409FB0D5: mov     r14, rcx
 * 00000001409FB0D8: mov     [rbp+0BE0h+var_C40], rcx
 * 00000001409FB0DC: call    KeGuardDispatchICall
 * 00000001409FB0E1: test    rax, rax
 * 00000001409FB0E4: jz      short loc_1409FB0F0
 * 00000001409FB0E6: mov     r10d, [rax+50h]
 * 00000001409FB0EA: mov     [rbp+0BE0h+var_BA0], r10d
 * 00000001409FB0EE: jmp     short loc_1409FB0F4
 * 00000001409FB0F0: mov     r10d, [rbp+0BE0h+var_BA0]
 * 00000001409FB0F4: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FB0FE: jnz     short loc_1409FB117
 * 00000001409FB100: mov     rax, [rbp+0BE0h+var_B30]
 * 00000001409FB107: add     rax, 70h ; 'p'
 * 00000001409FB10B: mov     [r13+8], rax
 * 00000001409FB10F: mov     dword ptr [r13+10h], 0E0h
 * 00000001409FB117: mov     rcx, [rbp+0BE0h+var_B30]
 * 00000001409FB11E: xor     eax, eax
 * 00000001409FB120: mov     r12d, r15d
 * 00000001409FB123: mov     dl, al
 * 00000001409FB125: mov     [rbp+0BE0h+arg_8], r12
 * 00000001409FB12C: lea     r11d, [rax+1]
 * 00000001409FB130: movzx   eax, dl
 * 00000001409FB133: mov     r9, [rcx+rax*8+70h]
 * 00000001409FB138: test    r12, r12
 * 00000001409FB13B: jz      short loc_1409FB152
 * 00000001409FB13D: lea     rax, [rbx-1]
 * 00000001409FB141: add     rax, r12
 * 00000001409FB144: cmp     r9, rbx
 * 00000001409FB147: jb      short loc_1409FB152
 * 00000001409FB149: cmp     r9, rax
 * 00000001409FB14C: jbe     loc_1409FB237
 * 00000001409FB152: xor     r15d, r15d
 * 00000001409FB155: mov     eax, r10d
 * 00000001409FB158: test    r10d, r10d
 * 00000001409FB15B: jz      short loc_1409FB172
 * 00000001409FB15D: lea     r8, [r14-1]
 * 00000001409FB161: add     r8, rax
 * 00000001409FB164: cmp     r9, r14
 * 00000001409FB167: jb      short loc_1409FB172
 * 00000001409FB169: cmp     r9, r8
 * 00000001409FB16C: jbe     loc_1409FB23A
 * 00000001409FB172: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FB17C: jz      short loc_1409FB1CA
 * 00000001409FB17E: mov     rcx, [rsi+0A80h]
 * 00000001409FB185: mov     edx, 30h ; '0'
 * 00000001409FB18A: lea     r8d, [rdx-2Ah]
 * 00000001409FB18E: mov     rax, [r13+0]
 * 00000001409FB192: add     edx, 0FFFFFFF8h
 * 00000001409FB195: mov     [rcx], rax
 * 00000001409FB198: add     r13, 8
 * 00000001409FB19C: add     rcx, 8
 * 00000001409FB1A0: sub     r8, r11
 * 00000001409FB1A3: jnz     short loc_1409FB18E
 * 00000001409FB1A5: test    edx, edx
 * 00000001409FB1A7: jz      short loc_1409FB1C3
 * 00000001409FB1A9: mov     esi, 0FFFFFFFFh
 * 00000001409FB1AE: mov     al, [r13+0]
 * 00000001409FB1B2: add     r13, r11
 * 00000001409FB1B5: mov     [rcx], al
 * 00000001409FB1B7: add     rcx, r11
 * 00000001409FB1BA: add     edx, esi
 * 00000001409FB1BC: jnz     short loc_1409FB1AE
 * 00000001409FB1BE: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FB1C3: mov     r13, [rsi+0A80h]
 * 00000001409FB1CA: mov     [r13+20h], r9
 * 00000001409FB1CE: mov     rax, [rsi+590h]
 * 00000001409FB1D5: mov     [rax], r13
 * 00000001409FB1D8: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FB1DF: xor     eax, eax
 * 00000001409FB1E1: mov     rcx, [r13+8]
 * 00000001409FB1E5: cmp     [rsi+8F8h], eax
 * 00000001409FB1EB: jnz     loc_1409F631B
 * 00000001409FB1F1: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FB1FB: add     rax, rsi
 * 00000001409FB1FE: mov     [rsi+900h], rax
 * 00000001409FB205: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FB20F: add     rax, r13
 * 00000001409FB212: mov     [rsi+908h], rax
 * 00000001409FB219: movsxd  rax, dword ptr [r13+0]
 * 00000001409FB21D: mov     [rsi+910h], rax
 * 00000001409FB224: mov     [rsi+918h], rcx
 * 00000001409FB22B: mov     [rsi+8F8h], r11d
 * 00000001409FB232: jmp     loc_1409F66F2
 * 00000001409FB237: xor     r15d, r15d
 * 00000001409FB23A: add     dl, r11b
 * 00000001409FB23D: cmp     dl, 1Ch
 * 00000001409FB240: jb      loc_1409FB130
 * 00000001409FB246: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FB250: jnz     loc_1409F6E45
 * 00000001409FB256: mov     r14, [r13+8]
 * 00000001409FB25A: mov     r9d, [r13+10h]
 * 00000001409FB25E: mov     r10, r14
 * 00000001409FB261: add     [rsi+828h], r9d
 * 00000001409FB268: mov     rax, r14
 * 00000001409FB26B: mov     ebx, [rsi+814h]
 * 00000001409FB271: mov     r15, [rsi+818h]
 * 00000001409FB278: lea     rcx, [r14+r9]
 * 00000001409FB27C: cmp     r14, rcx
 * 00000001409FB27F: jnb     short loc_1409FB291
 * 00000001409FB281: mov     edx, 40h ; '@'
 * 00000001409FB286: prefetchnta byte ptr [rax]
 * 00000001409FB289: add     rax, rdx
 * 00000001409FB28C: cmp     rax, rcx
 * 00000001409FB28F: jb      short loc_1409FB286
 * 00000001409FB291: mov     r11d, r9d
 * 00000001409FB294: mov     r8, r15
 * 00000001409FB297: shr     r11d, 7
 * 00000001409FB29B: mov     edx, 1
 * 00000001409FB2A0: test    r11d, r11d
 * 00000001409FB2A3: jz      short loc_1409FB318
 * 00000001409FB2A5: mov     edi, 0FFFFFFFFh
 * 00000001409FB2AA: mov     r12, 7010008004002001h
 * 00000001409FB2B4: mov     eax, 8
 * 00000001409FB2B9: xor     r8, [r10]
 * 00000001409FB2BC: mov     ecx, ebx
 * 00000001409FB2BE: rol     r8, cl
 * 00000001409FB2C1: xor     r8, [r10+8]
 * 00000001409FB2C5: add     r10, 10h
 * 00000001409FB2C9: rol     r8, cl
 * 00000001409FB2CC: sub     rax, rdx
 * 00000001409FB2CF: jnz     short loc_1409FB2B9
 * 00000001409FB2D1: mov     rcx, r10
 * 00000001409FB2D4: sub     rcx, r14
 * 00000001409FB2D7: xor     rcx, r15
 * 00000001409FB2DA: mov     rax, rcx
 * 00000001409FB2DD: rol     rax, 11h
 * 00000001409FB2E1: xor     rcx, rax
 * 00000001409FB2E4: mov     rax, r12
 * 00000001409FB2E7: mul     rcx
 * 00000001409FB2EA: xor     ebx, edx
 * 00000001409FB2EC: mov     [rbp+0BE0h+var_660], rdx
 * 00000001409FB2F3: xor     ebx, eax
 * 00000001409FB2F5: mov     edx, 1
 * 00000001409FB2FA: and     ebx, 3Fh
 * 00000001409FB2FD: cmovz   ebx, edx
 * 00000001409FB300: add     r11d, edi
 * 00000001409FB303: jnz     short loc_1409FB2B4
 * 00000001409FB305: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FB30A: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FB311: mov     r12, [rbp+0BE0h+arg_8]
 * 00000001409FB318: and     r9d, 7Fh
 * 00000001409FB31C: cmp     r9d, 8
 * 00000001409FB320: jb      short loc_1409FB33E
 * 00000001409FB322: mov     eax, r9d
 * 00000001409FB325: shr     rax, 3
 * 00000001409FB329: xor     r8, [r10]
 * 00000001409FB32C: mov     ecx, ebx
 * 00000001409FB32E: rol     r8, cl
 * 00000001409FB331: add     r10, 8
 * 00000001409FB335: add     r9d, 0FFFFFFF8h
 * 00000001409FB339: sub     rax, rdx
 * 00000001409FB33C: jnz     short loc_1409FB329
 * 00000001409FB33E: test    r9d, r9d
 * 00000001409FB341: jz      short loc_1409FB361
 * 00000001409FB343: mov     esi, 0FFFFFFFFh
 * 00000001409FB348: movzx   eax, byte ptr [r10]
 * 00000001409FB34C: mov     ecx, ebx
 * 00000001409FB34E: xor     r8, rax
 * 00000001409FB351: add     r10, rdx
 * 00000001409FB354: rol     r8, cl
 * 00000001409FB357: add     r9d, esi
 * 00000001409FB35A: jnz     short loc_1409FB348
 * 00000001409FB35C: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FB361: mov     rax, r8
 * 00000001409FB364: jmp     short loc_1409FB369
 * 00000001409FB366: xor     r8d, eax
 * 00000001409FB369: shr     rax, 1Fh
 * 00000001409FB36D: test    rax, rax
 * 00000001409FB370: jnz     short loc_1409FB366
 * 00000001409FB372: btr     r8d, 1Fh
 * 00000001409FB377: mov     [r13+14h], r8d
 * 00000001409FB37B: mov     rax, [rbp+0BE0h+var_B30]
 * 00000001409FB382: mov     r14, [rax+50h]
 * 00000001409FB386: xor     eax, eax
 * 00000001409FB388: mov     r10d, eax
 * 00000001409FB38B: test    r14, r14
 * 00000001409FB38E: jz      short loc_1409FB409
 * 00000001409FB390: mov     r10d, [r14]
 * 00000001409FB393: mov     r8b, al
 * 00000001409FB396: lea     r9d, [r10-8]
 * 00000001409FB39A: shr     r9d, 3
 * 00000001409FB39E: test    r9d, r9d
 * 00000001409FB3A1: jz      short loc_1409FB409
 * 00000001409FB3A3: mov     r11, [rbp+0BE0h+var_C30]
 * 00000001409FB3A7: mov     rbx, [rbp+0BE0h+var_C40]
 * 00000001409FB3AB: mov     r15d, [rbp+0BE0h+var_BA0]
 * 00000001409FB3AF: movzx   eax, r8b
 * 00000001409FB3B3: mov     rcx, [r14+rax*8+8]
 * 00000001409FB3B8: test    rcx, rcx
 * 00000001409FB3BB: jz      short loc_1409FB3FD
 * 00000001409FB3BD: test    r12, r12
 * 00000001409FB3C0: jz      short loc_1409FB3D3
 * 00000001409FB3C2: lea     rax, [r11-1]
 * 00000001409FB3C6: add     rax, r12
 * 00000001409FB3C9: cmp     rcx, r11
 * 00000001409FB3CC: jb      short loc_1409FB3D3
 * 00000001409FB3CE: cmp     rcx, rax
 * 00000001409FB3D1: jbe     short loc_1409FB3FD
 * 00000001409FB3D3: mov     rax, r15
 * 00000001409FB3D6: test    r15d, r15d
 * 00000001409FB3D9: jz      loc_1409FB522
 * 00000001409FB3DF: lea     rdx, [rbx-1]
 * 00000001409FB3E3: add     rdx, rax
 * 00000001409FB3E6: cmp     rcx, rbx
 * 00000001409FB3E9: jb      loc_1409FB522
 * 00000001409FB3EF: cmp     rcx, rdx
 * 00000001409FB3F2: ja      loc_1409FB522
 * 00000001409FB3F8: mov     edx, 1
 * 00000001409FB3FD: add     r8b, dl
 * 00000001409FB400: movzx   eax, r8b
 * 00000001409FB404: cmp     eax, r9d
 * 00000001409FB407: jb      short loc_1409FB3AF
 * 00000001409FB409: add     [rsi+828h], r10d
 * 00000001409FB410: mov     r9, r14
 * 00000001409FB413: mov     r11d, [rsi+814h]
 * 00000001409FB41A: mov     rax, r14
 * 00000001409FB41D: mov     r15, [rsi+818h]
 * 00000001409FB424: mov     ecx, r10d
 * 00000001409FB427: add     rcx, r14
 * 00000001409FB42A: cmp     r14, rcx
 * 00000001409FB42D: jnb     short loc_1409FB440
 * 00000001409FB42F: mov     r8d, 40h ; '@'
 * 00000001409FB435: prefetchnta byte ptr [rax]
 * 00000001409FB438: add     rax, r8
 * 00000001409FB43B: cmp     rax, rcx
 * 00000001409FB43E: jb      short loc_1409FB435
 * 00000001409FB440: mov     ebx, r10d
 * 00000001409FB443: mov     r8, r15
 * 00000001409FB446: shr     ebx, 7
 * 00000001409FB449: mov     r12d, 0FFFFFFFFh
 * 00000001409FB44F: test    ebx, ebx
 * 00000001409FB451: jz      short loc_1409FB4C6
 * 00000001409FB453: mov     rdi, 7010008004002001h
 * 00000001409FB45D: mov     edx, 8
 * 00000001409FB462: lea     esi, [rdx-7]
 * 00000001409FB465: mov     rax, [r9]
 * 00000001409FB468: mov     ecx, r11d
 * 00000001409FB46B: xor     rax, r8
 * 00000001409FB46E: mov     r8, [r9+8]
 * 00000001409FB472: rol     rax, cl
 * 00000001409FB475: add     r9, 10h
 * 00000001409FB479: xor     r8, rax
 * 00000001409FB47C: rol     r8, cl
 * 00000001409FB47F: sub     rdx, rsi
 * 00000001409FB482: jnz     short loc_1409FB465
 * 00000001409FB484: mov     rcx, r9
 * 00000001409FB487: sub     rcx, r14
 * 00000001409FB48A: xor     rcx, r15
 * 00000001409FB48D: mov     rax, rcx
 * 00000001409FB490: rol     rax, 11h
 * 00000001409FB494: xor     rcx, rax
 * 00000001409FB497: mov     rax, rdi
 * 00000001409FB49A: mul     rcx
 * 00000001409FB49D: xor     r11d, edx
 * 00000001409FB4A0: mov     [rbp+0BE0h+var_658], rdx
 * 00000001409FB4A7: xor     r11d, eax
 * 00000001409FB4AA: mov     rdx, rsi
 * 00000001409FB4AD: and     r11d, 3Fh
 * 00000001409FB4B1: cmovz   r11d, edx
 * 00000001409FB4B5: add     ebx, r12d
 * 00000001409FB4B8: jnz     short loc_1409FB45D
 * 00000001409FB4BA: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FB4BF: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FB4C6: and     r10d, 7Fh
 * 00000001409FB4CA: cmp     r10d, 8
 * 00000001409FB4CE: jb      short loc_1409FB4FC
 * 00000001409FB4D0: mov     edx, r10d
 * 00000001409FB4D3: mov     esi, 1
 * 00000001409FB4D8: shr     rdx, 3
 * 00000001409FB4DC: xor     r8, [r9]
 * 00000001409FB4DF: mov     ecx, r11d
 * 00000001409FB4E2: rol     r8, cl
 * 00000001409FB4E5: add     r9, 8
 * 00000001409FB4E9: add     r10d, 0FFFFFFF8h
 * 00000001409FB4ED: sub     rdx, rsi
 * 00000001409FB4F0: jnz     short loc_1409FB4DC
 * 00000001409FB4F2: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FB4F7: mov     edx, 1
 * 00000001409FB4FC: test    r10d, r10d
 * 00000001409FB4FF: jz      short loc_1409FB516
 * 00000001409FB501: movzx   eax, byte ptr [r9]
 * 00000001409FB505: mov     ecx, r11d
 * 00000001409FB508: xor     r8, rax
 * 00000001409FB50B: add     r9, rdx
 * 00000001409FB50E: rol     r8, cl
 * 00000001409FB511: add     r10d, r12d
 * 00000001409FB514: jnz     short loc_1409FB501
 * 00000001409FB516: mov     rax, r8
 * 00000001409FB519: shr     rax, 1Fh
 * 00000001409FB51D: xor     r15d, r15d
 * 00000001409FB520: jmp     short loc_1409FB5A0
 * 00000001409FB522: mov     [r13+20h], rcx
 * 00000001409FB526: mov     rax, [rsi+590h]
 * 00000001409FB52D: mov     [rax], r13
 * 00000001409FB530: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FB537: xor     eax, eax
 * 00000001409FB539: cmp     [rsi+8F8h], eax
 * 00000001409FB53F: jnz     loc_1409F6318
 * 00000001409FB545: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FB54F: add     rax, rsi
 * 00000001409FB552: mov     [rsi+900h], rax
 * 00000001409FB559: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FB563: add     rax, r13
 * 00000001409FB566: mov     [rsi+908h], rax
 * 00000001409FB56D: movsxd  rax, dword ptr [r13+0]
 * 00000001409FB571: mov     [rsi+910h], rax
 * 00000001409FB578: mov     [rsi+918h], r14
 * 00000001409FB57F: mov     eax, 1
 * 00000001409FB584: mov     [rsi+8F8h], eax
 * 00000001409FB58A: xor     edx, edx
 * 00000001409FB58C: mov     rcx, rsi
 * 00000001409FB58F: call    $$b8
 * 00000001409FB594: jmp     loc_1409F6318
 * 00000001409FB599: xor     r8d, eax
 * 00000001409FB59C: shr     rax, 1Fh
 * 00000001409FB5A0: test    rax, rax
 * 00000001409FB5A3: jnz     short loc_1409FB599
 * 00000001409FB5A5: btr     r8d, 1Fh
 * 00000001409FB5AA: mov     [r13+2Ch], r8d
 * 00000001409FB5AE: jmp     loc_1409F631B
 * 00000001409FB5B3: mov     r14, [r13+8]
 * 00000001409FB5B7: add     [rsi+828h], r8d
 * 00000001409FB5BE: mov     r9, r14
 * 00000001409FB5C1: mov     r11d, [rsi+814h]
 * 00000001409FB5C8: mov     rax, r14
 * 00000001409FB5CB: mov     r15, [rsi+818h]
 * 00000001409FB5D2: lea     rcx, [r14+r8]
 * 00000001409FB5D6: cmp     r14, rcx
 * 00000001409FB5D9: jnb     short loc_1409FB5EC
 * 00000001409FB5DB: mov     r10d, 40h ; '@'
 * 00000001409FB5E1: prefetchnta byte ptr [rax]
 * 00000001409FB5E4: add     rax, r10
 * 00000001409FB5E7: cmp     rax, rcx
 * 00000001409FB5EA: jb      short loc_1409FB5E1
 * 00000001409FB5EC: mov     r10d, r8d
 * 00000001409FB5EF: mov     rbx, r15
 * 00000001409FB5F2: shr     r10d, 7
 * 00000001409FB5F6: mov     r12d, 0FFFFFFFFh
 * 00000001409FB5FC: test    r10d, r10d
 * 00000001409FB5FF: jz      short loc_1409FB66D
 * 00000001409FB601: mov     rdi, 7010008004002001h
 * 00000001409FB60B: mov     eax, 8
 * 00000001409FB610: xor     rbx, [r9]
 * 00000001409FB613: mov     ecx, r11d
 * 00000001409FB616: rol     rbx, cl
 * 00000001409FB619: xor     rbx, [r9+8]
 * 00000001409FB61D: add     r9, 10h
 * 00000001409FB621: rol     rbx, cl
 * 00000001409FB624: sub     rax, rdx
 * 00000001409FB627: jnz     short loc_1409FB610
 * 00000001409FB629: mov     rcx, r9
 * 00000001409FB62C: sub     rcx, r14
 * 00000001409FB62F: xor     rcx, r15
 * 00000001409FB632: mov     rax, rcx
 * 00000001409FB635: rol     rax, 11h
 * 00000001409FB639: xor     rcx, rax
 * 00000001409FB63C: mov     rax, rdi
 * 00000001409FB63F: mul     rcx
 * 00000001409FB642: xor     r11d, edx
 * 00000001409FB645: mov     [rbp+0BE0h+var_650], rdx
 * 00000001409FB64C: xor     r11d, eax
 * 00000001409FB64F: mov     edx, 1
 * 00000001409FB654: and     r11d, 3Fh
 * 00000001409FB658: cmovz   r11d, edx
 * 00000001409FB65C: add     r10d, r12d
 * 00000001409FB65F: jnz     short loc_1409FB60B
 * 00000001409FB661: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FB666: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FB66D: and     r8d, 7Fh
 * 00000001409FB671: cmp     r8d, 8
 * 00000001409FB675: jb      short loc_1409FB694
 * 00000001409FB677: mov     eax, r8d
 * 00000001409FB67A: shr     rax, 3
 * 00000001409FB67E: xor     rbx, [r9]
 * 00000001409FB681: mov     ecx, r11d
 * 00000001409FB684: rol     rbx, cl
 * 00000001409FB687: add     r9, 8
 * 00000001409FB68B: add     r8d, 0FFFFFFF8h
 * 00000001409FB68F: sub     rax, rdx
 * 00000001409FB692: jnz     short loc_1409FB67E
 * 00000001409FB694: test    r8d, r8d
 * 00000001409FB697: jz      short loc_1409FB6AE
 * 00000001409FB699: movzx   eax, byte ptr [r9]
 * 00000001409FB69D: mov     ecx, r11d
 * 00000001409FB6A0: xor     rbx, rax
 * 00000001409FB6A3: add     r9, rdx
 * 00000001409FB6A6: rol     rbx, cl
 * 00000001409FB6A9: add     r8d, r12d
 * 00000001409FB6AC: jnz     short loc_1409FB699
 * 00000001409FB6AE: mov     rax, rbx
 * 00000001409FB6B1: jmp     short loc_1409FB6B5
 * 00000001409FB6B3: xor     ebx, eax
 * 00000001409FB6B5: shr     rax, 1Fh
 * 00000001409FB6B9: test    rax, rax
 * 00000001409FB6BC: jnz     short loc_1409FB6B3
 * 00000001409FB6BE: mov     r12, [rsp+0CE0h+var_C90]
 * 00000001409FB6C3: btr     ebx, 1Fh
 * 00000001409FB6C7: mov     r13d, eax
 * 00000001409FB6CA: cmp     ebx, [r12+14h]
 * 00000001409FB6CF: jz      loc_1409FB7B7
 * 00000001409FB6D5: cmp     [r12], eax
 * 00000001409FB6D9: jnz     short loc_1409FB6E4
 * 00000001409FB6DB: cmp     [r12+18h], eax
 * 00000001409FB6E0: cmovnz  r13d, edx
 * 00000001409FB6E4: mov     ecx, [r12+10h]
 * 00000001409FB6E9: mov     rdx, [r12+8]
 * 00000001409FB6EE: test    rcx, rcx
 * 00000001409FB6F1: jz      loc_1409FB8E7
 * 00000001409FB6F7: mov     eax, [rsi+994h]
 * 00000001409FB6FD: mov     r8d, 40h ; '@'
 * 00000001409FB703: test    r8b, al
 * 00000001409FB706: jz      loc_1409FB8E7
 * 00000001409FB70C: mov     r12, cr8
 * 00000001409FB710: lea     eax, [r8-3Eh]
 * 00000001409FB714: mov     cr8, rax
 * 00000001409FB718: mov     r14, rdx
 * 00000001409FB71B: lea     rax, [rcx-1]
 * 00000001409FB71F: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FB726: add     rax, rdx
 * 00000001409FB729: or      rax, 0FFFh
 * 00000001409FB72F: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FB734: lea     rax, [r14-1]
 * 00000001409FB738: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FB73F: movzx   r15d, r12b
 * 00000001409FB743: mov     rax, [rsi+468h]
 * 00000001409FB74A: xor     edx, edx
 * 00000001409FB74C: mov     rcx, r14
 * 00000001409FB74F: call    KeGuardDispatchICall
 * 00000001409FB754: cmp     eax, 0C000022Dh
 * 00000001409FB759: jnz     short loc_1409FB786
 * 00000001409FB75B: test    r13d, r13d
 * 00000001409FB75E: jnz     loc_1409FB8DE
 * 00000001409FB764: lea     eax, [r13+1]
 * 00000001409FB768: cmp     r12b, al
 * 00000001409FB76B: ja      short loc_1409FB78E
 * 00000001409FB76D: movzx   r15d, r12b
 * 00000001409FB771: mov     cr8, r15
 * 00000001409FB775: mov     al, [r14]
 * 00000001409FB778: mov     rax, cr8
 * 00000001409FB77C: lea     eax, [r13+2]
 * 00000001409FB780: mov     cr8, rax
 * 00000001409FB784: jmp     short loc_1409FB743
 * 00000001409FB786: test    eax, eax
 * 00000001409FB788: js      loc_1409FB8DE
 * 00000001409FB78E: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409FB795: mov     ecx, 1000h
 * 00000001409FB79A: add     rax, rcx
 * 00000001409FB79D: add     r14, rcx
 * 00000001409FB7A0: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FB7A7: cmp     rax, [rsp+0CE0h+var_C70]
 * 00000001409FB7AC: jnz     short loc_1409FB73F
 * 00000001409FB7AE: mov     cr8, r15
 * 00000001409FB7B2: mov     r12, [rsp+0CE0h+var_C90]
 * 00000001409FB7B7: mov     r13d, 1
 * 00000001409FB7BD: mov     rax, [r12+8]
 * 00000001409FB7C2: sub     rax, 70h ; 'p'
 * 00000001409FB7C6: mov     [rbp+0BE0h+var_B30], rax
 * 00000001409FB7CD: mov     r15, [rax+50h]
 * 00000001409FB7D1: xor     eax, eax
 * 00000001409FB7D3: mov     r9d, eax
 * 00000001409FB7D6: test    r15, r15
 * 00000001409FB7D9: jz      short loc_1409FB7DE
 * 00000001409FB7DB: mov     r9d, [r15]
 * 00000001409FB7DE: add     [rsi+828h], r9d
 * 00000001409FB7E5: mov     r10, r15
 * 00000001409FB7E8: mov     r11d, [rsi+814h]
 * 00000001409FB7EF: mov     rax, r15
 * 00000001409FB7F2: mov     r14, [rsi+818h]
 * 00000001409FB7F9: mov     ecx, r9d
 * 00000001409FB7FC: add     rcx, r15
 * 00000001409FB7FF: cmp     r15, rcx
 * 00000001409FB802: jnb     short loc_1409FB814
 * 00000001409FB804: mov     edx, 40h ; '@'
 * 00000001409FB809: prefetchnta byte ptr [rax]
 * 00000001409FB80C: add     rax, rdx
 * 00000001409FB80F: cmp     rax, rcx
 * 00000001409FB812: jb      short loc_1409FB809
 * 00000001409FB814: mov     ebx, r9d
 * 00000001409FB817: mov     r8, r14
 * 00000001409FB81A: shr     ebx, 7
 * 00000001409FB81D: test    ebx, ebx
 * 00000001409FB81F: jz      short loc_1409FB88B
 * 00000001409FB821: mov     rsi, 7010008004002001h
 * 00000001409FB82B: mov     edx, 8
 * 00000001409FB830: mov     rax, [r10]
 * 00000001409FB833: mov     ecx, r11d
 * 00000001409FB836: xor     rax, r8
 * 00000001409FB839: mov     r8, [r10+8]
 * 00000001409FB83D: rol     rax, cl
 * 00000001409FB840: add     r10, 10h
 * 00000001409FB844: xor     r8, rax
 * 00000001409FB847: rol     r8, cl
 * 00000001409FB84A: sub     rdx, r13
 * 00000001409FB84D: jnz     short loc_1409FB830
 * 00000001409FB84F: mov     rcx, r10
 * 00000001409FB852: sub     rcx, r15
 * 00000001409FB855: xor     rcx, r14
 * 00000001409FB858: mov     rax, rcx
 * 00000001409FB85B: rol     rax, 11h
 * 00000001409FB85F: xor     rcx, rax
 * 00000001409FB862: mov     rax, rsi
 * 00000001409FB865: mul     rcx
 * 00000001409FB868: xor     r11d, edx
 * 00000001409FB86B: mov     [rbp+0BE0h+var_648], rdx
 * 00000001409FB872: xor     r11d, eax
 * 00000001409FB875: mov     eax, 0FFFFFFFFh
 * 00000001409FB87A: and     r11d, 3Fh
 * 00000001409FB87E: cmovz   r11d, r13d
 * 00000001409FB882: add     ebx, eax
 * 00000001409FB884: jnz     short loc_1409FB82B
 * 00000001409FB886: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FB88B: and     r9d, 7Fh
 * 00000001409FB88F: cmp     r9d, 8
 * 00000001409FB893: jb      short loc_1409FB8B2
 * 00000001409FB895: mov     edx, r9d
 * 00000001409FB898: shr     rdx, 3
 * 00000001409FB89C: xor     r8, [r10]
 * 00000001409FB89F: mov     ecx, r11d
 * 00000001409FB8A2: rol     r8, cl
 * 00000001409FB8A5: add     r10, 8
 * 00000001409FB8A9: add     r9d, 0FFFFFFF8h
 * 00000001409FB8AD: sub     rdx, r13
 * 00000001409FB8B0: jnz     short loc_1409FB89C
 * 00000001409FB8B2: test    r9d, r9d
 * 00000001409FB8B5: jz      short loc_1409FB8D6
 * 00000001409FB8B7: mov     esi, 0FFFFFFFFh
 * 00000001409FB8BC: movzx   eax, byte ptr [r10]
 * 00000001409FB8C0: mov     ecx, r11d
 * 00000001409FB8C3: xor     r8, rax
 * 00000001409FB8C6: add     r10, r13
 * 00000001409FB8C9: rol     r8, cl
 * 00000001409FB8CC: add     r9d, esi
 * 00000001409FB8CF: jnz     short loc_1409FB8BC
 * 00000001409FB8D1: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FB8D6: mov     rax, r8
 * 00000001409FB8D9: jmp     loc_1409FB972
 * 00000001409FB8DE: mov     cr8, r15
 * 00000001409FB8E2: mov     r12, [rsp+0CE0h+var_C90]
 * 00000001409FB8E7: mov     eax, [rsi+8F8h]
 * 00000001409FB8ED: mov     edx, [r12+14h]
 * 00000001409FB8F2: test    eax, eax
 * 00000001409FB8F4: jnz     short loc_1409FB90C
 * 00000001409FB8F6: mov     rax, [rsi+590h]
 * 00000001409FB8FD: mov     ecx, ebx
 * 00000001409FB8FF: xor     rcx, rdx
 * 00000001409FB902: mov     [rax+18h], rcx
 * 00000001409FB906: mov     eax, [rsi+8F8h]
 * 00000001409FB90C: mov     rcx, [r12+8]
 * 00000001409FB911: mov     r13d, 1
 * 00000001409FB917: test    eax, eax
 * 00000001409FB919: jnz     loc_1409FB7BD
 * 00000001409FB91F: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FB929: xor     edx, edx
 * 00000001409FB92B: add     rax, rsi
 * 00000001409FB92E: mov     [rsi+900h], rax
 * 00000001409FB935: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FB93F: add     rax, r12
 * 00000001409FB942: mov     [rsi+908h], rax
 * 00000001409FB949: movsxd  rax, dword ptr [r12]
 * 00000001409FB94D: mov     [rsi+910h], rax
 * 00000001409FB954: mov     [rsi+918h], rcx
 * 00000001409FB95B: mov     rcx, rsi
 * 00000001409FB95E: mov     [rsi+8F8h], r13d
 * 00000001409FB965: call    $$b8
 * 00000001409FB96A: jmp     loc_1409FB7BD
 * 00000001409FB96F: xor     r8d, eax
 * 00000001409FB972: shr     rax, 1Fh
 * 00000001409FB976: test    rax, rax
 * 00000001409FB979: jnz     short loc_1409FB96F
 * 00000001409FB97B: mov     edx, [r12+2Ch]
 * 00000001409FB980: btr     r8d, 1Fh
 * 00000001409FB985: cmp     r8d, edx
 * 00000001409FB988: jz      loc_1409F6318
 * 00000001409FB98E: mov     eax, [rsi+8F8h]
 * 00000001409FB994: test    eax, eax
 * 00000001409FB996: jnz     loc_1409F6318
 * 00000001409FB99C: mov     rax, [rsi+590h]
 * 00000001409FB9A3: mov     ecx, r8d
 * 00000001409FB9A6: xor     rcx, rdx
 * 00000001409FB9A9: mov     [rax+18h], rcx
 * 00000001409FB9AD: mov     eax, [rsi+8F8h]
 * 00000001409FB9B3: test    eax, eax
 * 00000001409FB9B5: jnz     loc_1409F6318
 * 00000001409FB9BB: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FB9C5: add     rax, rsi
 * 00000001409FB9C8: mov     [rsi+900h], rax
 * 00000001409FB9CF: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FB9D9: add     rax, r12
 * 00000001409FB9DC: mov     [rsi+908h], rax
 * 00000001409FB9E3: movsxd  rax, dword ptr [r12]
 * 00000001409FB9E7: mov     [rsi+910h], rax
 * 00000001409FB9EE: mov     [rsi+918h], r15
 * 00000001409FB9F5: mov     [rsi+8F8h], r13d
 * 00000001409FB9FC: jmp     loc_1409FB58A
 * 00000001409FBA01: cmp     r10d, 25h ; '%'
 * 00000001409FBA05: jg      loc_1409FDFD0
 * 00000001409FBA0B: jz      loc_1409FDF5A
 * 00000001409FBA11: mov     ecx, r10d
 * 00000001409FBA14: sub     ecx, 1Dh
 * 00000001409FBA17: jz      loc_1409FDB0C
 * 00000001409FBA1D: sub     ecx, 1
 * 00000001409FBA20: jz      loc_1409FD37D
 * 00000001409FBA26: sub     ecx, 1
 * 00000001409FBA29: jz      loc_1409FC6D9
 * 00000001409FBA2F: sub     ecx, 1
 * 00000001409FBA32: jz      loc_1409FC6C9
 * 00000001409FBA38: sub     ecx, 1
 * 00000001409FBA3B: jz      loc_1409FC6B9
 * 00000001409FBA41: sub     ecx, 2
 * 00000001409FBA44: jz      loc_1409FBF5C
 * 00000001409FBA4A: cmp     ecx, 1
 * 00000001409FBA4D: jnz     loc_140A00767
 * 00000001409FBA53: mov     r14, [r13+8]
 * 00000001409FBA57: mov     r8d, [r13+10h]
 * 00000001409FBA5B: mov     r9, r14
 * 00000001409FBA5E: add     [rsi+828h], r8d
 * 00000001409FBA65: mov     rax, r14
 * 00000001409FBA68: mov     r10d, [rsi+814h]
 * 00000001409FBA6F: mov     r15, [rsi+818h]
 * 00000001409FBA76: lea     rcx, [r14+r8]
 * 00000001409FBA7A: cmp     r14, rcx
 * 00000001409FBA7D: jnb     short loc_1409FBA90
 * 00000001409FBA7F: mov     r11d, 40h ; '@'
 * 00000001409FBA85: prefetchnta byte ptr [rax]
 * 00000001409FBA88: add     rax, r11
 * 00000001409FBA8B: cmp     rax, rcx
 * 00000001409FBA8E: jb      short loc_1409FBA85
 * 00000001409FBA90: mov     r11d, r8d
 * 00000001409FBA93: mov     rbx, r15
 * 00000001409FBA96: shr     r11d, 7
 * 00000001409FBA9A: mov     r12d, 0FFFFFFFFh
 * 00000001409FBAA0: test    r11d, r11d
 * 00000001409FBAA3: jz      short loc_1409FBB11
 * 00000001409FBAA5: mov     rdi, 7010008004002001h
 * 00000001409FBAAF: mov     eax, 8
 * 00000001409FBAB4: xor     rbx, [r9]
 * 00000001409FBAB7: mov     ecx, r10d
 * 00000001409FBABA: rol     rbx, cl
 * 00000001409FBABD: xor     rbx, [r9+8]
 * 00000001409FBAC1: add     r9, 10h
 * 00000001409FBAC5: rol     rbx, cl
 * 00000001409FBAC8: sub     rax, rdx
 * 00000001409FBACB: jnz     short loc_1409FBAB4
 * 00000001409FBACD: mov     rcx, r9
 * 00000001409FBAD0: sub     rcx, r14
 * 00000001409FBAD3: xor     rcx, r15
 * 00000001409FBAD6: mov     rax, rcx
 * 00000001409FBAD9: rol     rax, 11h
 * 00000001409FBADD: xor     rcx, rax
 * 00000001409FBAE0: mov     rax, rdi
 * 00000001409FBAE3: mul     rcx
 * 00000001409FBAE6: xor     r10d, edx
 * 00000001409FBAE9: mov     [rbp+0BE0h+var_640], rdx
 * 00000001409FBAF0: xor     r10d, eax
 * 00000001409FBAF3: mov     edx, 1
 * 00000001409FBAF8: and     r10d, 3Fh
 * 00000001409FBAFC: cmovz   r10d, edx
 * 00000001409FBB00: add     r11d, r12d
 * 00000001409FBB03: jnz     short loc_1409FBAAF
 * 00000001409FBB05: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FBB0A: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FBB11: and     r8d, 7Fh
 * 00000001409FBB15: cmp     r8d, 8
 * 00000001409FBB19: jb      short loc_1409FBB38
 * 00000001409FBB1B: mov     eax, r8d
 * 00000001409FBB1E: shr     rax, 3
 * 00000001409FBB22: xor     rbx, [r9]
 * 00000001409FBB25: mov     ecx, r10d
 * 00000001409FBB28: rol     rbx, cl
 * 00000001409FBB2B: add     r9, 8
 * 00000001409FBB2F: add     r8d, 0FFFFFFF8h
 * 00000001409FBB33: sub     rax, rdx
 * 00000001409FBB36: jnz     short loc_1409FBB22
 * 00000001409FBB38: test    r8d, r8d
 * 00000001409FBB3B: jz      short loc_1409FBB52
 * 00000001409FBB3D: movzx   eax, byte ptr [r9]
 * 00000001409FBB41: mov     ecx, r10d
 * 00000001409FBB44: xor     rbx, rax
 * 00000001409FBB47: add     r9, rdx
 * 00000001409FBB4A: rol     rbx, cl
 * 00000001409FBB4D: add     r8d, r12d
 * 00000001409FBB50: jnz     short loc_1409FBB3D
 * 00000001409FBB52: mov     rax, rbx
 * 00000001409FBB55: jmp     short loc_1409FBB59
 * 00000001409FBB57: xor     ebx, eax
 * 00000001409FBB59: shr     rax, 1Fh
 * 00000001409FBB5D: test    rax, rax
 * 00000001409FBB60: jnz     short loc_1409FBB57
 * 00000001409FBB62: btr     ebx, 1Fh
 * 00000001409FBB66: mov     r12d, eax
 * 00000001409FBB69: cmp     ebx, [r13+14h]
 * 00000001409FBB6D: jz      loc_1409FBCD0
 * 00000001409FBB73: cmp     [r13+0], eax
 * 00000001409FBB77: jnz     short loc_1409FBB81
 * 00000001409FBB79: cmp     [r13+18h], eax
 * 00000001409FBB7D: cmovnz  r12d, edx
 * 00000001409FBB81: mov     ecx, [r13+10h]
 * 00000001409FBB85: mov     rdx, [r13+8]
 * 00000001409FBB89: test    rcx, rcx
 * 00000001409FBB8C: jz      loc_1409FBC55
 * 00000001409FBB92: mov     eax, [rsi+994h]
 * 00000001409FBB98: mov     r8d, 40h ; '@'
 * 00000001409FBB9E: test    r8b, al
 * 00000001409FBBA1: jz      loc_1409FBC55
 * 00000001409FBBA7: mov     r13, cr8
 * 00000001409FBBAB: lea     eax, [r8-3Eh]
 * 00000001409FBBAF: mov     cr8, rax
 * 00000001409FBBB3: mov     r14, rdx
 * 00000001409FBBB6: lea     rax, [rcx-1]
 * 00000001409FBBBA: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FBBC1: add     rax, rdx
 * 00000001409FBBC4: or      rax, 0FFFh
 * 00000001409FBBCA: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FBBCF: lea     rax, [r14-1]
 * 00000001409FBBD3: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FBBDA: movzx   r15d, r13b
 * 00000001409FBBDE: mov     rax, [rsi+468h]
 * 00000001409FBBE5: xor     edx, edx
 * 00000001409FBBE7: mov     rcx, r14
 * 00000001409FBBEA: call    KeGuardDispatchICall
 * 00000001409FBBEF: cmp     eax, 0C000022Dh
 * 00000001409FBBF4: jnz     short loc_1409FBC1F
 * 00000001409FBBF6: test    r12d, r12d
 * 00000001409FBBF9: jnz     short loc_1409FBC4C
 * 00000001409FBBFB: lea     eax, [r12+1]
 * 00000001409FBC00: cmp     r13b, al
 * 00000001409FBC03: ja      short loc_1409FBC23
 * 00000001409FBC05: movzx   r15d, r13b
 * 00000001409FBC09: mov     cr8, r15
 * 00000001409FBC0D: mov     al, [r14]
 * 00000001409FBC10: mov     rax, cr8
 * 00000001409FBC14: lea     eax, [r12+2]
 * 00000001409FBC19: mov     cr8, rax
 * 00000001409FBC1D: jmp     short loc_1409FBBDE
 * 00000001409FBC1F: test    eax, eax
 * 00000001409FBC21: js      short loc_1409FBC4C
 * 00000001409FBC23: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409FBC2A: mov     ecx, 1000h
 * 00000001409FBC2F: add     rax, rcx
 * 00000001409FBC32: add     r14, rcx
 * 00000001409FBC35: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FBC3C: cmp     rax, [rsp+0CE0h+var_C70]
 * 00000001409FBC41: jnz     short loc_1409FBBDA
 * 00000001409FBC43: mov     cr8, r15
 * 00000001409FBC47: jmp     loc_1409FBCD0
 * 00000001409FBC4C: mov     cr8, r15
 * 00000001409FBC50: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FBC55: mov     eax, [rsi+8F8h]
 * 00000001409FBC5B: mov     edx, [r13+14h]
 * 00000001409FBC5F: test    eax, eax
 * 00000001409FBC61: jnz     short loc_1409FBC79
 * 00000001409FBC63: mov     rax, [rsi+590h]
 * 00000001409FBC6A: mov     ecx, ebx
 * 00000001409FBC6C: xor     rcx, rdx
 * 00000001409FBC6F: mov     [rax+18h], rcx
 * 00000001409FBC73: mov     eax, [rsi+8F8h]
 * 00000001409FBC79: mov     rcx, [r13+8]
 * 00000001409FBC7D: test    eax, eax
 * 00000001409FBC7F: jnz     short loc_1409FBCD0
 * 00000001409FBC81: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FBC8B: xor     edx, edx
 * 00000001409FBC8D: add     rax, rsi
 * 00000001409FBC90: mov     [rsi+900h], rax
 * 00000001409FBC97: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FBCA1: add     rax, r13
 * 00000001409FBCA4: mov     [rsi+908h], rax
 * 00000001409FBCAB: movsxd  rax, dword ptr [r13+0]
 * 00000001409FBCAF: mov     [rsi+910h], rax
 * 00000001409FBCB6: mov     eax, 1
 * 00000001409FBCBB: mov     [rsi+918h], rcx
 * 00000001409FBCC2: mov     rcx, rsi
 * 00000001409FBCC5: mov     [rsi+8F8h], eax
 * 00000001409FBCCB: call    $$b8
 * 00000001409FBCD0: mov     rcx, [rsi+540h]
 * 00000001409FBCD7: mov     r14, cr8
 * 00000001409FBCDB: mov     eax, 0Fh
 * 00000001409FBCE0: mov     cr8, rax
 * 00000001409FBCE4: mov     rax, [rsi+150h]
 * 00000001409FBCEB: call    KeGuardDispatchICall
 * 00000001409FBCF0: mov     rax, [rsi+610h]
 * 00000001409FBCF7: mov     r12, [rsp+0CE0h+var_C90]
 * 00000001409FBCFC: mov     rcx, [rax]
 * 00000001409FBCFF: mov     eax, [rcx]
 * 00000001409FBD01: lea     rbx, [rcx+10h]
 * 00000001409FBD05: mov     r15b, [rcx+0Ch]
 * 00000001409FBD09: lea     rcx, [rax+rax*2]
 * 00000001409FBD0D: lea     r13, [rbx+rcx*8]
 * 00000001409FBD11: mov     r8d, 18h
 * 00000001409FBD17: lea     r9, [r12+18h]
 * 00000001409FBD1C: mov     r10, rbx
 * 00000001409FBD1F: mov     rcx, [r10]
 * 00000001409FBD22: add     r10, 8
 * 00000001409FBD26: mov     rax, [r9]
 * 00000001409FBD29: add     r9, 8
 * 00000001409FBD2D: cmp     rcx, rax
 * 00000001409FBD30: jnz     short loc_1409FBD66
 * 00000001409FBD32: add     r8d, 0FFFFFFF8h
 * 00000001409FBD36: cmp     r8d, 8
 * 00000001409FBD3A: jnb     short loc_1409FBD1F
 * 00000001409FBD3C: test    r8d, r8d
 * 00000001409FBD3F: jz      short loc_1409FBD6F
 * 00000001409FBD41: mov     r11d, 1
 * 00000001409FBD47: movzx   edx, byte ptr [r10]
 * 00000001409FBD4B: add     r10, r11
 * 00000001409FBD4E: movzx   eax, byte ptr [r9]
 * 00000001409FBD52: add     r9, r11
 * 00000001409FBD55: cmp     rdx, rax
 * 00000001409FBD58: jnz     short loc_1409FBD66
 * 00000001409FBD5A: mov     eax, 0FFFFFFFFh
 * 00000001409FBD5F: add     r8d, eax
 * 00000001409FBD62: jz      short loc_1409FBD6F
 * 00000001409FBD64: jmp     short loc_1409FBD47
 * 00000001409FBD66: add     rbx, 18h
 * 00000001409FBD6A: cmp     rbx, r13
 * 00000001409FBD6D: jb      short loc_1409FBD11
 * 00000001409FBD6F: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FBD74: mov     rcx, [rsi+540h]
 * 00000001409FBD7B: mov     rax, [rsi+190h]
 * 00000001409FBD82: call    KeGuardDispatchICall
 * 00000001409FBD87: movzx   eax, r14b
 * 00000001409FBD8B: mov     cr8, rax
 * 00000001409FBD8F: xor     eax, eax
 * 00000001409FBD91: test    r15b, r15b
 * 00000001409FBD94: jz      short loc_1409FBE12
 * 00000001409FBD96: mov     eax, [rsi+994h]
 * 00000001409FBD9C: mov     ecx, 10h
 * 00000001409FBDA1: test    cl, al
 * 00000001409FBDA3: jz      short loc_1409FBE02
 * 00000001409FBDA5: xor     eax, eax
 * 00000001409FBDA7: cmp     [rsi+8F8h], eax
 * 00000001409FBDAD: jnz     short loc_1409FBE02
 * 00000001409FBDAF: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FBDB4: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FBDBE: add     rax, rsi
 * 00000001409FBDC1: xor     edx, edx
 * 00000001409FBDC3: mov     [rsi+900h], rax
 * 00000001409FBDCA: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FBDD4: add     rax, rcx
 * 00000001409FBDD7: mov     [rsi+908h], rax
 * 00000001409FBDDE: movsxd  rax, dword ptr [rcx]
 * 00000001409FBDE1: mov     rcx, rsi
 * 00000001409FBDE4: mov     [rsi+910h], rax
 * 00000001409FBDEB: mov     eax, 1
 * 00000001409FBDF0: mov     [rsi+918h], rax
 * 00000001409FBDF7: mov     [rsi+8F8h], eax
 * 00000001409FBDFD: call    $$b8
 * 00000001409FBE02: mov     ecx, 1
 * 00000001409FBE07: cmp     [r12+18h], rcx
 * 00000001409FBE0C: jz      short loc_1409FBE76
 * 00000001409FBE0E: xor     eax, eax
 * 00000001409FBE10: jmp     short loc_1409FBE17
 * 00000001409FBE12: mov     ecx, 1
 * 00000001409FBE17: cmp     rbx, r13
 * 00000001409FBE1A: jnz     short loc_1409FBE76
 * 00000001409FBE1C: mov     r13, 0B3B74BDEE4453415h
 * 00000001409FBE26: mov     r12, [rsp+0CE0h+var_C90]
 * 00000001409FBE2B: cmp     [rsi+8F8h], eax
 * 00000001409FBE31: jnz     short loc_1409FBE85
 * 00000001409FBE33: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FBE3D: xor     edx, edx
 * 00000001409FBE3F: add     rax, rsi
 * 00000001409FBE42: mov     [rsi+900h], rax
 * 00000001409FBE49: lea     rax, [r12+r13]
 * 00000001409FBE4D: mov     [rsi+908h], rax
 * 00000001409FBE54: movsxd  rax, dword ptr [r12]
 * 00000001409FBE58: mov     [rsi+910h], rax
 * 00000001409FBE5F: mov     [rsi+918h], rbx
 * 00000001409FBE66: mov     [rsi+8F8h], ecx
 * 00000001409FBE6C: mov     rcx, rsi
 * 00000001409FBE6F: call    $$b8
 * 00000001409FBE74: jmp     short loc_1409FBE85
 * 00000001409FBE76: mov     r12, [rsp+0CE0h+var_C90]
 * 00000001409FBE7B: mov     r13, 0B3B74BDEE4453415h
 * 00000001409FBE85: mov     rcx, [rsi+540h]
 * 00000001409FBE8C: mov     r15, cr8
 * 00000001409FBE90: mov     eax, 0Fh
 * 00000001409FBE95: mov     cr8, rax
 * 00000001409FBE99: mov     rax, [rsi+150h]
 * 00000001409FBEA0: call    KeGuardDispatchICall
 * 00000001409FBEA5: mov     rax, [rsi+610h]
 * 00000001409FBEAC: mov     rcx, [rax]
 * 00000001409FBEAF: mov     eax, [rcx]
 * 00000001409FBEB1: lea     rbx, [rcx+10h]
 * 00000001409FBEB5: lea     rcx, [rax+rax*2]
 * 00000001409FBEB9: xor     eax, eax
 * 00000001409FBEBB: lea     r14, [rbx+rcx*8]
 * 00000001409FBEBF: jmp     short loc_1409FBEE8
 * 00000001409FBEC1: mov     rcx, [rbx+8]
 * 00000001409FBEC5: cmp     rcx, rdx
 * 00000001409FBEC8: jb      short loc_1409FBEF4
 * 00000001409FBECA: mov     rax, rcx
 * 00000001409FBECD: and     rax, 0FFFFFFFFFFFFF000h
 * 00000001409FBED3: cmp     rax, rcx
 * 00000001409FBED6: jnz     short loc_1409FBEF4
 * 00000001409FBED8: mov     eax, [rbx+10h]
 * 00000001409FBEDB: add     rax, rcx
 * 00000001409FBEDE: cmp     rax, rcx
 * 00000001409FBEE1: jbe     short loc_1409FBEF4
 * 00000001409FBEE3: cmp     rax, rdx
 * 00000001409FBEE6: jz      short loc_1409FBEF4
 * 00000001409FBEE8: add     rbx, 18h
 * 00000001409FBEEC: mov     rdx, rax
 * 00000001409FBEEF: cmp     rbx, r14
 * 00000001409FBEF2: jb      short loc_1409FBEC1
 * 00000001409FBEF4: mov     rcx, [rsi+540h]
 * 00000001409FBEFB: mov     rax, [rsi+190h]
 * 00000001409FBF02: call    KeGuardDispatchICall
 * 00000001409FBF07: movzx   eax, r15b
 * 00000001409FBF0B: mov     cr8, rax
 * 00000001409FBF0F: cmp     rbx, r14
 * 00000001409FBF12: jz      loc_1409F6318
 * 00000001409FBF18: xor     eax, eax
 * 00000001409FBF1A: cmp     [rsi+8F8h], eax
 * 00000001409FBF20: jnz     loc_1409F6318
 * 00000001409FBF26: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FBF30: add     rax, rsi
 * 00000001409FBF33: mov     [rsi+900h], rax
 * 00000001409FBF3A: lea     rax, [r12+r13]
 * 00000001409FBF3E: mov     [rsi+908h], rax
 * 00000001409FBF45: movsxd  rax, dword ptr [r12]
 * 00000001409FBF49: mov     [rsi+910h], rax
 * 00000001409FBF50: mov     [rsi+918h], rbx
 * 00000001409FBF57: jmp     loc_1409FB57F
 * 00000001409FBF5C: mov     ecx, [r13+28h]
 * 00000001409FBF60: and     ecx, edx
 * 00000001409FBF62: jz      short loc_1409FBF81
 * 00000001409FBF64: xor     eax, eax
 * 00000001409FBF66: cmp     [rsi+980h], rax
 * 00000001409FBF6D: jz      loc_1409F6312
 * 00000001409FBF73: mov     eax, [rsi+994h]
 * 00000001409FBF79: test    al, 4
 * 00000001409FBF7B: jnz     loc_1409F63EA
 * 00000001409FBF81: xor     eax, eax
 * 00000001409FBF83: test    ecx, ecx
 * 00000001409FBF85: jz      loc_1409FC49C
 * 00000001409FBF8B: mov     edx, [rsi+994h]
 * 00000001409FBF91: mov     ecx, edx
 * 00000001409FBF93: cmp     [rsi+824h], eax
 * 00000001409FBF99: jnz     short loc_1409FBFAD
 * 00000001409FBF9B: shl     ecx, 3
 * 00000001409FBF9E: xor     ecx, edx
 * 00000001409FBFA0: and     ecx, 20h
 * 00000001409FBFA3: xor     ecx, edx
 * 00000001409FBFA5: mov     [rsi+994h], ecx
 * 00000001409FBFAB: jmp     short loc_1409FBFBE
 * 00000001409FBFAD: mov     eax, edx
 * 00000001409FBFAF: shr     eax, 3
 * 00000001409FBFB2: xor     eax, edx
 * 00000001409FBFB4: test    al, 4
 * 00000001409FBFB6: jnz     loc_1409F63EA
 * 00000001409FBFBC: xor     eax, eax
 * 00000001409FBFBE: cmp     [rsi+980h], rax
 * 00000001409FBFC5: jz      loc_1409FC491
 * 00000001409FBFCB: mov     edx, ecx
 * 00000001409FBFCD: cmp     [rsi+824h], eax
 * 00000001409FBFD3: jnz     short loc_1409FBFE7
 * 00000001409FBFD5: shl     edx, 3
 * 00000001409FBFD8: xor     edx, ecx
 * 00000001409FBFDA: and     edx, 20h
 * 00000001409FBFDD: xor     edx, ecx
 * 00000001409FBFDF: mov     [rsi+994h], edx
 * 00000001409FBFE5: jmp     short loc_1409FBFF6
 * 00000001409FBFE7: mov     eax, ecx
 * 00000001409FBFE9: shr     eax, 3
 * 00000001409FBFEC: xor     eax, ecx
 * 00000001409FBFEE: test    al, 4
 * 00000001409FBFF0: jnz     loc_1409FC48F
 * 00000001409FBFF6: test    dl, 4
 * 00000001409FBFF9: jz      loc_1409FC209
 * 00000001409FBFFF: mov     r14d, [r13+8]
 * 00000001409FC003: mov     r12d, 1
 * 00000001409FC009: mov     ecx, [r13+10h]
 * 00000001409FC00D: and     r14d, 0FFFh
 * 00000001409FC014: mov     rbx, [r13+8]
 * 00000001409FC018: add     r14, 0FFFh
 * 00000001409FC01F: add     r14, rcx
 * 00000001409FC022: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001409FC029: shr     r14, 0Ch
 * 00000001409FC02D: test    r14, r14
 * 00000001409FC030: jz      loc_1409FC0BE
 * 00000001409FC036: xor     edi, edi
 * 00000001409FC038: mov     rax, [rsi+2B0h]
 * 00000001409FC03F: mov     rcx, rbx
 * 00000001409FC042: sub     r14, r12
 * 00000001409FC045: call    KeGuardDispatchICall
 * 00000001409FC04A: test    al, al
 * 00000001409FC04C: jz      short loc_1409FC0A1
 * 00000001409FC04E: cmp     [rsi+8F8h], edi
 * 00000001409FC054: jnz     short loc_1409FC0A1
 * 00000001409FC056: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC060: xor     edx, edx
 * 00000001409FC062: add     rax, rsi
 * 00000001409FC065: mov     rcx, rsi
 * 00000001409FC068: mov     [rsi+900h], rax
 * 00000001409FC06F: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FC079: add     rax, r13
 * 00000001409FC07C: mov     [rsi+908h], rax
 * 00000001409FC083: movsxd  rax, dword ptr [r13+0]
 * 00000001409FC087: mov     [rsi+910h], rax
 * 00000001409FC08E: mov     [rsi+918h], rbx
 * 00000001409FC095: mov     [rsi+8F8h], r12d
 * 00000001409FC09C: call    $$b8
 * 00000001409FC0A1: add     dword ptr [rsi+828h], 100h
 * 00000001409FC0AB: add     rbx, 1000h
 * 00000001409FC0B2: test    r14, r14
 * 00000001409FC0B5: jnz     short loc_1409FC038
 * 00000001409FC0B7: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FC0BE: xor     r15d, r15d
 * 00000001409FC0C1: mov     r14, 0B3B74BDEE4453415h
 * 00000001409FC0CB: mov     eax, [r13+28h]
 * 00000001409FC0CF: mov     ecx, 2
 * 00000001409FC0D4: test    cl, al
 * 00000001409FC0D6: jz      loc_1409F631B
 * 00000001409FC0DC: mov     rbx, [r13+8]
 * 00000001409FC0E0: test    al, 4
 * 00000001409FC0E2: jz      loc_1409FC171
 * 00000001409FC0E8: mov     rax, [rbx+70h]
 * 00000001409FC0EC: mov     rdx, [r13+18h]
 * 00000001409FC0F0: mov     rcx, [rax]
 * 00000001409FC0F3: cmp     rcx, rdx
 * 00000001409FC0F6: jz      short loc_1409FC171
 * 00000001409FC0F8: mov     rax, [rsi+590h]
 * 00000001409FC0FF: mov     [rax], rcx
 * 00000001409FC102: mov     dword ptr [rax+10h], 100h
 * 00000001409FC109: mov     eax, [rsi+8F8h]
 * 00000001409FC10F: test    eax, eax
 * 00000001409FC111: jnz     short loc_1409FC127
 * 00000001409FC113: mov     rax, [rsi+590h]
 * 00000001409FC11A: xor     rcx, rdx
 * 00000001409FC11D: mov     [rax+18h], rcx
 * 00000001409FC121: mov     eax, [rsi+8F8h]
 * 00000001409FC127: mov     rcx, [rbx+70h]
 * 00000001409FC12B: test    eax, eax
 * 00000001409FC12D: jnz     short loc_1409FC171
 * 00000001409FC12F: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC139: xor     edx, edx
 * 00000001409FC13B: add     rax, rsi
 * 00000001409FC13E: mov     [rsi+900h], rax
 * 00000001409FC145: lea     rax, [r14+r13]
 * 00000001409FC149: mov     [rsi+908h], rax
 * 00000001409FC150: movsxd  rax, dword ptr [r13+0]
 * 00000001409FC154: mov     [rsi+910h], rax
 * 00000001409FC15B: mov     [rsi+918h], rcx
 * 00000001409FC162: mov     rcx, rsi
 * 00000001409FC165: mov     [rsi+8F8h], r12d
 * 00000001409FC16C: call    $$b8
 * 00000001409FC171: mov     eax, [r13+28h]
 * 00000001409FC175: test    al, 8
 * 00000001409FC177: jz      loc_1409F631B
 * 00000001409FC17D: mov     rax, [rbx+78h]
 * 00000001409FC181: mov     rdx, [r13+20h]
 * 00000001409FC185: mov     rcx, [rax]
 * 00000001409FC188: cmp     rcx, rdx
 * 00000001409FC18B: jz      loc_1409F631B
 * 00000001409FC191: mov     rax, [rsi+590h]
 * 00000001409FC198: mov     [rax], rcx
 * 00000001409FC19B: mov     dword ptr [rax+10h], 100h
 * 00000001409FC1A2: mov     eax, [rsi+8F8h]
 * 00000001409FC1A8: test    eax, eax
 * 00000001409FC1AA: jnz     short loc_1409FC1C0
 * 00000001409FC1AC: mov     rax, [rsi+590h]
 * 00000001409FC1B3: xor     rcx, rdx
 * 00000001409FC1B6: mov     [rax+18h], rcx
 * 00000001409FC1BA: mov     eax, [rsi+8F8h]
 * 00000001409FC1C0: mov     rcx, [rbx+78h]
 * 00000001409FC1C4: test    eax, eax
 * 00000001409FC1C6: jnz     loc_1409F631B
 * 00000001409FC1CC: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC1D6: add     rax, rsi
 * 00000001409FC1D9: mov     [rsi+900h], rax
 * 00000001409FC1E0: lea     rax, [r14+r13]
 * 00000001409FC1E4: mov     [rsi+908h], rax
 * 00000001409FC1EB: movsxd  rax, dword ptr [r13+0]
 * 00000001409FC1EF: mov     [rsi+910h], rax
 * 00000001409FC1F6: mov     [rsi+918h], rcx
 * 00000001409FC1FD: mov     [rsi+8F8h], r12d
 * 00000001409FC204: jmp     loc_1409F66F2
 * 00000001409FC209: mov     r14, [r13+8]
 * 00000001409FC20D: mov     r8d, [r13+10h]
 * 00000001409FC211: mov     r9, r14
 * 00000001409FC214: add     [rsi+828h], r8d
 * 00000001409FC21B: mov     rax, r14
 * 00000001409FC21E: mov     r11d, [rsi+814h]
 * 00000001409FC225: mov     r15, [rsi+818h]
 * 00000001409FC22C: lea     rcx, [r14+r8]
 * 00000001409FC230: cmp     r14, rcx
 * 00000001409FC233: jnb     short loc_1409FC245
 * 00000001409FC235: mov     edx, 40h ; '@'
 * 00000001409FC23A: prefetchnta byte ptr [rax]
 * 00000001409FC23D: add     rax, rdx
 * 00000001409FC240: cmp     rax, rcx
 * 00000001409FC243: jb      short loc_1409FC23A
 * 00000001409FC245: mov     r10d, r8d
 * 00000001409FC248: mov     rbx, r15
 * 00000001409FC24B: shr     r10d, 7
 * 00000001409FC24F: mov     r12d, 1
 * 00000001409FC255: test    r10d, r10d
 * 00000001409FC258: jz      short loc_1409FC2C5
 * 00000001409FC25A: mov     rsi, 7010008004002001h
 * 00000001409FC264: mov     edx, 8
 * 00000001409FC269: mov     rax, [r9]
 * 00000001409FC26C: mov     ecx, r11d
 * 00000001409FC26F: xor     rax, rbx
 * 00000001409FC272: mov     rbx, [r9+8]
 * 00000001409FC276: rol     rax, cl
 * 00000001409FC279: add     r9, 10h
 * 00000001409FC27D: xor     rbx, rax
 * 00000001409FC280: rol     rbx, cl
 * 00000001409FC283: sub     rdx, r12
 * 00000001409FC286: jnz     short loc_1409FC269
 * 00000001409FC288: mov     rcx, r9
 * 00000001409FC28B: sub     rcx, r14
 * 00000001409FC28E: xor     rcx, r15
 * 00000001409FC291: mov     rax, rcx
 * 00000001409FC294: rol     rax, 11h
 * 00000001409FC298: xor     rcx, rax
 * 00000001409FC29B: mov     rax, rsi
 * 00000001409FC29E: mul     rcx
 * 00000001409FC2A1: xor     r11d, edx
 * 00000001409FC2A4: mov     [rbp+0BE0h+var_638], rdx
 * 00000001409FC2AB: xor     r11d, eax
 * 00000001409FC2AE: mov     eax, 0FFFFFFFFh
 * 00000001409FC2B3: and     r11d, 3Fh
 * 00000001409FC2B7: cmovz   r11d, r12d
 * 00000001409FC2BB: add     r10d, eax
 * 00000001409FC2BE: jnz     short loc_1409FC264
 * 00000001409FC2C0: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FC2C5: and     r8d, 7Fh
 * 00000001409FC2C9: cmp     r8d, 8
 * 00000001409FC2CD: jb      short loc_1409FC2EC
 * 00000001409FC2CF: mov     edx, r8d
 * 00000001409FC2D2: shr     rdx, 3
 * 00000001409FC2D6: xor     rbx, [r9]
 * 00000001409FC2D9: mov     ecx, r11d
 * 00000001409FC2DC: rol     rbx, cl
 * 00000001409FC2DF: add     r9, 8
 * 00000001409FC2E3: add     r8d, 0FFFFFFF8h
 * 00000001409FC2E7: sub     rdx, r12
 * 00000001409FC2EA: jnz     short loc_1409FC2D6
 * 00000001409FC2EC: test    r8d, r8d
 * 00000001409FC2EF: jz      short loc_1409FC310
 * 00000001409FC2F1: mov     esi, 0FFFFFFFFh
 * 00000001409FC2F6: movzx   eax, byte ptr [r9]
 * 00000001409FC2FA: mov     ecx, r11d
 * 00000001409FC2FD: xor     rbx, rax
 * 00000001409FC300: add     r9, r12
 * 00000001409FC303: rol     rbx, cl
 * 00000001409FC306: add     r8d, esi
 * 00000001409FC309: jnz     short loc_1409FC2F6
 * 00000001409FC30B: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FC310: mov     rax, rbx
 * 00000001409FC313: shr     rax, 1Fh
 * 00000001409FC317: xor     r15d, r15d
 * 00000001409FC31A: jmp     short loc_1409FC322
 * 00000001409FC31C: xor     ebx, eax
 * 00000001409FC31E: shr     rax, 1Fh
 * 00000001409FC322: test    rax, rax
 * 00000001409FC325: jnz     short loc_1409FC31C
 * 00000001409FC327: mov     r8d, [r13+14h]
 * 00000001409FC32B: btr     ebx, 1Fh
 * 00000001409FC32F: cmp     ebx, r8d
 * 00000001409FC332: jz      loc_1409FC0C1
 * 00000001409FC338: mov     ecx, [r13+10h]
 * 00000001409FC33C: mov     rdx, [r13+8]
 * 00000001409FC340: test    rcx, rcx
 * 00000001409FC343: jz      loc_1409FC406
 * 00000001409FC349: mov     eax, [rsi+994h]
 * 00000001409FC34F: mov     r9d, 40h ; '@'
 * 00000001409FC355: test    r9b, al
 * 00000001409FC358: jz      loc_1409FC406
 * 00000001409FC35E: mov     r12, cr8
 * 00000001409FC362: lea     eax, [r9-3Eh]
 * 00000001409FC366: mov     cr8, rax
 * 00000001409FC36A: mov     r14, rdx
 * 00000001409FC36D: lea     rax, [rcx-1]
 * 00000001409FC371: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FC378: add     rax, rdx
 * 00000001409FC37B: or      rax, 0FFFh
 * 00000001409FC381: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FC388: lea     r13, [r14-1]
 * 00000001409FC38C: movzx   r15d, r12b
 * 00000001409FC390: mov     rax, [rsi+468h]
 * 00000001409FC397: xor     edx, edx
 * 00000001409FC399: mov     rcx, r14
 * 00000001409FC39C: call    KeGuardDispatchICall
 * 00000001409FC3A1: cmp     eax, 0C000022Dh
 * 00000001409FC3A6: jnz     short loc_1409FC3CC
 * 00000001409FC3A8: mov     eax, 1
 * 00000001409FC3AD: cmp     r12b, al
 * 00000001409FC3B0: ja      short loc_1409FC3D0
 * 00000001409FC3B2: movzx   r15d, r12b
 * 00000001409FC3B6: mov     cr8, r15
 * 00000001409FC3BA: mov     al, [r14]
 * 00000001409FC3BD: mov     rax, cr8
 * 00000001409FC3C1: mov     eax, 2
 * 00000001409FC3C6: mov     cr8, rax
 * 00000001409FC3CA: jmp     short loc_1409FC390
 * 00000001409FC3CC: test    eax, eax
 * 00000001409FC3CE: js      short loc_1409FC3F9
 * 00000001409FC3D0: mov     r11d, 1000h
 * 00000001409FC3D6: add     r14, r11
 * 00000001409FC3D9: add     r13, r11
 * 00000001409FC3DC: cmp     r13, [rbp+0BE0h+arg_8]
 * 00000001409FC3E3: jnz     short loc_1409FC38C
 * 00000001409FC3E5: mov     cr8, r15
 * 00000001409FC3E9: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FC3EE: mov     r12d, 1
 * 00000001409FC3F4: jmp     loc_1409FC0BE
 * 00000001409FC3F9: mov     cr8, r15
 * 00000001409FC3FD: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FC402: mov     r8d, [r13+14h]
 * 00000001409FC406: mov     eax, [rsi+8F8h]
 * 00000001409FC40C: xor     r15d, r15d
 * 00000001409FC40F: test    eax, eax
 * 00000001409FC411: jnz     short loc_1409FC42C
 * 00000001409FC413: mov     ecx, r8d
 * 00000001409FC416: mov     eax, ebx
 * 00000001409FC418: xor     rcx, rax
 * 00000001409FC41B: mov     rax, [rsi+590h]
 * 00000001409FC422: mov     [rax+18h], rcx
 * 00000001409FC426: mov     eax, [rsi+8F8h]
 * 00000001409FC42C: mov     rcx, [r13+8]
 * 00000001409FC430: mov     r14, 0B3B74BDEE4453415h
 * 00000001409FC43A: mov     r12d, 1
 * 00000001409FC440: test    eax, eax
 * 00000001409FC442: jnz     loc_1409FC0CB
 * 00000001409FC448: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC452: xor     edx, edx
 * 00000001409FC454: add     rax, rsi
 * 00000001409FC457: mov     [rsi+900h], rax
 * 00000001409FC45E: lea     rax, [r14+r13]
 * 00000001409FC462: mov     [rsi+908h], rax
 * 00000001409FC469: movsxd  rax, dword ptr [r13+0]
 * 00000001409FC46D: mov     [rsi+910h], rax
 * 00000001409FC474: mov     [rsi+918h], rcx
 * 00000001409FC47B: mov     rcx, rsi
 * 00000001409FC47E: mov     [rsi+8F8h], r12d
 * 00000001409FC485: call    $$b8
 * 00000001409FC48A: jmp     loc_1409FC0CB
 * 00000001409FC48F: xor     eax, eax
 * 00000001409FC491: mov     [rsi+824h], eax
 * 00000001409FC497: jmp     loc_1409FC3EE
 * 00000001409FC49C: mov     r14, [r13+8]
 * 00000001409FC4A0: mov     r8d, [r13+10h]
 * 00000001409FC4A4: mov     r9, r14
 * 00000001409FC4A7: add     [rsi+828h], r8d
 * 00000001409FC4AE: mov     rax, r14
 * 00000001409FC4B1: mov     r10d, [rsi+814h]
 * 00000001409FC4B8: mov     r15, [rsi+818h]
 * 00000001409FC4BF: lea     rcx, [r14+r8]
 * 00000001409FC4C3: cmp     r14, rcx
 * 00000001409FC4C6: jnb     short loc_1409FC4D9
 * 00000001409FC4C8: mov     r11d, 40h ; '@'
 * 00000001409FC4CE: prefetchnta byte ptr [rax]
 * 00000001409FC4D1: add     rax, r11
 * 00000001409FC4D4: cmp     rax, rcx
 * 00000001409FC4D7: jb      short loc_1409FC4CE
 * 00000001409FC4D9: mov     r11d, r8d
 * 00000001409FC4DC: mov     rbx, r15
 * 00000001409FC4DF: shr     r11d, 7
 * 00000001409FC4E3: mov     r12d, 0FFFFFFFFh
 * 00000001409FC4E9: test    r11d, r11d
 * 00000001409FC4EC: jz      short loc_1409FC55A
 * 00000001409FC4EE: mov     rdi, 7010008004002001h
 * 00000001409FC4F8: mov     eax, 8
 * 00000001409FC4FD: xor     rbx, [r9]
 * 00000001409FC500: mov     ecx, r10d
 * 00000001409FC503: rol     rbx, cl
 * 00000001409FC506: xor     rbx, [r9+8]
 * 00000001409FC50A: add     r9, 10h
 * 00000001409FC50E: rol     rbx, cl
 * 00000001409FC511: sub     rax, rdx
 * 00000001409FC514: jnz     short loc_1409FC4FD
 * 00000001409FC516: mov     rcx, r9
 * 00000001409FC519: sub     rcx, r14
 * 00000001409FC51C: xor     rcx, r15
 * 00000001409FC51F: mov     rax, rcx
 * 00000001409FC522: rol     rax, 11h
 * 00000001409FC526: xor     rcx, rax
 * 00000001409FC529: mov     rax, rdi
 * 00000001409FC52C: mul     rcx
 * 00000001409FC52F: xor     r10d, edx
 * 00000001409FC532: mov     [rbp+0BE0h+var_630], rdx
 * 00000001409FC539: xor     r10d, eax
 * 00000001409FC53C: mov     edx, 1
 * 00000001409FC541: and     r10d, 3Fh
 * 00000001409FC545: cmovz   r10d, edx
 * 00000001409FC549: add     r11d, r12d
 * 00000001409FC54C: jnz     short loc_1409FC4F8
 * 00000001409FC54E: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FC553: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FC55A: and     r8d, 7Fh
 * 00000001409FC55E: cmp     r8d, 8
 * 00000001409FC562: jb      short loc_1409FC581
 * 00000001409FC564: mov     eax, r8d
 * 00000001409FC567: shr     rax, 3
 * 00000001409FC56B: xor     rbx, [r9]
 * 00000001409FC56E: mov     ecx, r10d
 * 00000001409FC571: rol     rbx, cl
 * 00000001409FC574: add     r9, 8
 * 00000001409FC578: add     r8d, 0FFFFFFF8h
 * 00000001409FC57C: sub     rax, rdx
 * 00000001409FC57F: jnz     short loc_1409FC56B
 * 00000001409FC581: test    r8d, r8d
 * 00000001409FC584: jz      short loc_1409FC59B
 * 00000001409FC586: movzx   eax, byte ptr [r9]
 * 00000001409FC58A: mov     ecx, r10d
 * 00000001409FC58D: xor     rbx, rax
 * 00000001409FC590: add     r9, rdx
 * 00000001409FC593: rol     rbx, cl
 * 00000001409FC596: add     r8d, r12d
 * 00000001409FC599: jnz     short loc_1409FC586
 * 00000001409FC59B: mov     rax, rbx
 * 00000001409FC59E: shr     rax, 1Fh
 * 00000001409FC5A2: xor     ecx, ecx
 * 00000001409FC5A4: jmp     short loc_1409FC5AC
 * 00000001409FC5A6: xor     ebx, eax
 * 00000001409FC5A8: shr     rax, 1Fh
 * 00000001409FC5AC: test    rax, rax
 * 00000001409FC5AF: jnz     short loc_1409FC5A6
 * 00000001409FC5B1: mov     r13d, eax
 * 00000001409FC5B4: btr     ebx, 1Fh
 * 00000001409FC5B8: mov     rax, [rsp+0CE0h+var_C90]
 * 00000001409FC5BD: cmp     ebx, [rax+14h]
 * 00000001409FC5C0: jz      loc_1409FC3E9
 * 00000001409FC5C6: cmp     [rax], ecx
 * 00000001409FC5C8: jnz     short loc_1409FC5D1
 * 00000001409FC5CA: cmp     [rax+18h], ecx
 * 00000001409FC5CD: cmovnz  r13d, edx
 * 00000001409FC5D1: mov     ecx, [rax+10h]
 * 00000001409FC5D4: mov     rdx, [rax+8]
 * 00000001409FC5D8: test    rcx, rcx
 * 00000001409FC5DB: jz      loc_1409FC69A
 * 00000001409FC5E1: mov     eax, [rsi+994h]
 * 00000001409FC5E7: mov     r8d, 40h ; '@'
 * 00000001409FC5ED: test    r8b, al
 * 00000001409FC5F0: jz      loc_1409FC69A
 * 00000001409FC5F6: mov     r12, cr8
 * 00000001409FC5FA: lea     eax, [r8-3Eh]
 * 00000001409FC5FE: mov     cr8, rax
 * 00000001409FC602: mov     r14, rdx
 * 00000001409FC605: lea     rax, [rcx-1]
 * 00000001409FC609: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FC610: add     rax, rdx
 * 00000001409FC613: or      rax, 0FFFh
 * 00000001409FC619: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FC61E: lea     rax, [r14-1]
 * 00000001409FC622: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FC629: movzx   r15d, r12b
 * 00000001409FC62D: mov     rax, [rsi+468h]
 * 00000001409FC634: xor     edx, edx
 * 00000001409FC636: mov     rcx, r14
 * 00000001409FC639: call    KeGuardDispatchICall
 * 00000001409FC63E: cmp     eax, 0C000022Dh
 * 00000001409FC643: jnz     short loc_1409FC66C
 * 00000001409FC645: test    r13d, r13d
 * 00000001409FC648: jnz     short loc_1409FC696
 * 00000001409FC64A: lea     eax, [r13+1]
 * 00000001409FC64E: cmp     r12b, al
 * 00000001409FC651: ja      short loc_1409FC670
 * 00000001409FC653: movzx   r15d, r12b
 * 00000001409FC657: mov     cr8, r15
 * 00000001409FC65B: mov     al, [r14]
 * 00000001409FC65E: mov     rax, cr8
 * 00000001409FC662: lea     eax, [r13+2]
 * 00000001409FC666: mov     cr8, rax
 * 00000001409FC66A: jmp     short loc_1409FC62D
 * 00000001409FC66C: test    eax, eax
 * 00000001409FC66E: js      short loc_1409FC696
 * 00000001409FC670: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409FC677: mov     r11d, 1000h
 * 00000001409FC67D: add     rax, r11
 * 00000001409FC680: add     r14, r11
 * 00000001409FC683: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FC68A: cmp     rax, [rsp+0CE0h+var_C70]
 * 00000001409FC68F: jnz     short loc_1409FC629
 * 00000001409FC691: jmp     loc_1409FC3E5
 * 00000001409FC696: mov     cr8, r15
 * 00000001409FC69A: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FC69F: xor     r15d, r15d
 * 00000001409FC6A2: mov     eax, [rsi+8F8h]
 * 00000001409FC6A8: mov     ecx, [r13+14h]
 * 00000001409FC6AC: test    eax, eax
 * 00000001409FC6AE: jnz     loc_1409FC42C
 * 00000001409FC6B4: jmp     loc_1409FC416
 * 00000001409FC6B9: mov     rdx, r13
 * 00000001409FC6BC: mov     rcx, rsi
 * 00000001409FC6BF: call    sub_1403E6F6C
 * 00000001409FC6C4: jmp     loc_1409F6318
 * 00000001409FC6C9: mov     rdx, r13
 * 00000001409FC6CC: mov     rcx, rsi
 * 00000001409FC6CF: call    sub_1403E7ED8
 * 00000001409FC6D4: jmp     loc_1409F6318
 * 00000001409FC6D9: mov     eax, [rsi+830h]
 * 00000001409FC6DF: test    dl, al
 * 00000001409FC6E1: jz      loc_1409F6318
 * 00000001409FC6E7: xor     eax, eax
 * 00000001409FC6E9: cmp     [rsi+980h], rax
 * 00000001409FC6F0: jz      short loc_1409FC72E
 * 00000001409FC6F2: mov     eax, [rsi+994h]
 * 00000001409FC6F8: test    al, 4
 * 00000001409FC6FA: jnz     short loc_1409FC72C
 * 00000001409FC6FC: mov     rax, [rsi+3D0h]
 * 00000001409FC703: lea     rdx, [rbp+0BE0h+var_840]
 * 00000001409FC70A: xor     r9d, r9d
 * 00000001409FC70D: xor     r8d, r8d
 * 00000001409FC710: lea     ecx, [r9+1Ah]
 * 00000001409FC714: call    KeGuardDispatchICall
 * 00000001409FC719: mov     rbx, [rbp+0BE0h+var_840]
 * 00000001409FC720: xor     ecx, ecx
 * 00000001409FC722: test    eax, eax
 * 00000001409FC724: mov     eax, ecx
 * 00000001409FC726: cmovs   rbx, rcx
 * 00000001409FC72A: jmp     short loc_1409FC731
 * 00000001409FC72C: xor     eax, eax
 * 00000001409FC72E: mov     rbx, rax
 * 00000001409FC731: mov     r14d, eax
 * 00000001409FC734: mov     [rsp+0CE0h+var_C78], eax
 * 00000001409FC738: mov     rax, [rsi+3B0h]
 * 00000001409FC73F: xor     ecx, ecx
 * 00000001409FC741: mov     [rsp+0CE0h+var_C88], rbx
 * 00000001409FC746: call    KeGuardDispatchICall
 * 00000001409FC74B: xor     r15d, r15d
 * 00000001409FC74E: lea     r12d, [r15+1]
 * 00000001409FC752: test    rax, rax
 * 00000001409FC755: jz      loc_1409FCF64
 * 00000001409FC75B: mov     rdi, rax
 * 00000001409FC75E: mov     rcx, rdi
 * 00000001409FC761: cmp     rbx, rdi
 * 00000001409FC764: jnz     loc_1409FCB2B
 * 00000001409FC76A: mov     rax, [rsi+3A0h]
 * 00000001409FC771: mov     r12, r13
 * 00000001409FC774: call    KeGuardDispatchICall
 * 00000001409FC779: test    eax, eax
 * 00000001409FC77B: js      loc_1409FCF34
 * 00000001409FC781: mov     rax, [rsi+3E0h]
 * 00000001409FC788: mov     rcx, rdi
 * 00000001409FC78B: call    KeGuardDispatchICall
 * 00000001409FC790: mov     bl, al
 * 00000001409FC792: mov     [rbp+0BE0h+var_B40], al
 * 00000001409FC798: mov     rax, [rsi+3E8h]
 * 00000001409FC79F: lea     rdx, [rbp+0BE0h+arg_18]
 * 00000001409FC7A6: mov     rcx, rdi
 * 00000001409FC7A9: call    KeGuardDispatchICall
 * 00000001409FC7AE: mov     byte ptr [rbp+0BE0h+arg_8], al
 * 00000001409FC7B4: mov     rcx, rdi
 * 00000001409FC7B7: mov     rax, [rsi+3F0h]
 * 00000001409FC7BE: call    KeGuardDispatchICall
 * 00000001409FC7C3: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FC7C8: cmp     bl, 61h ; 'a'
 * 00000001409FC7CB: jz      short loc_1409FC846
 * 00000001409FC7CD: mov     eax, [rsi+8F8h]
 * 00000001409FC7D3: test    eax, eax
 * 00000001409FC7D5: jnz     short loc_1409FC846
 * 00000001409FC7D7: mov     rax, [rsi+590h]
 * 00000001409FC7DE: movzx   ecx, bl
 * 00000001409FC7E1: xor     rcx, 61h
 * 00000001409FC7E5: mov     [rax+18h], rcx
 * 00000001409FC7E9: mov     eax, [rsi+8F8h]
 * 00000001409FC7EF: test    eax, eax
 * 00000001409FC7F1: jnz     short loc_1409FC846
 * 00000001409FC7F3: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC7FD: mov     r15d, 1
 * 00000001409FC803: add     rax, rsi
 * 00000001409FC806: xor     edx, edx
 * 00000001409FC808: mov     [rsi+900h], rax
 * 00000001409FC80F: mov     rcx, rsi
 * 00000001409FC812: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FC81C: add     rax, r13
 * 00000001409FC81F: mov     [rsi+908h], rax
 * 00000001409FC826: movsxd  rax, dword ptr [r13+0]
 * 00000001409FC82A: mov     [rsi+910h], rax
 * 00000001409FC831: mov     [rsi+918h], rdi
 * 00000001409FC838: mov     [rsi+8F8h], r15d
 * 00000001409FC83F: call    $$b8
 * 00000001409FC844: jmp     short loc_1409FC84C
 * 00000001409FC846: mov     r15d, 1
 * 00000001409FC84C: xor     eax, eax
 * 00000001409FC84E: movzx   ecx, bl
 * 00000001409FC851: and     ecx, 7
 * 00000001409FC854: mov     r14b, al
 * 00000001409FC857: mov     r13b, al
 * 00000001409FC85A: sub     ecx, 1
 * 00000001409FC85D: jz      short loc_1409FC8CF
 * 00000001409FC85F: cmp     ecx, 1
 * 00000001409FC862: jz      short loc_1409FC8C2
 * 00000001409FC864: test    bl, 7
 * 00000001409FC867: jz      short loc_1409FC8D2
 * 00000001409FC869: cmp     [rsi+8F8h], eax
 * 00000001409FC86F: jnz     short loc_1409FC8D2
 * 00000001409FC871: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC87B: xor     edx, edx
 * 00000001409FC87D: add     rax, rsi
 * 00000001409FC880: mov     rcx, rsi
 * 00000001409FC883: mov     [rsi+900h], rax
 * 00000001409FC88A: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FC894: add     rax, r12
 * 00000001409FC897: mov     [rsi+908h], rax
 * 00000001409FC89E: mov     rax, [rsp+0CE0h+var_C90]
 * 00000001409FC8A3: movsxd  rax, dword ptr [rax]
 * 00000001409FC8A6: mov     [rsi+910h], rax
 * 00000001409FC8AD: mov     [rsi+918h], rdi
 * 00000001409FC8B4: mov     [rsi+8F8h], r15d
 * 00000001409FC8BB: call    $$b8
 * 00000001409FC8C0: jmp     short loc_1409FC8D2
 * 00000001409FC8C2: mov     eax, 10h
 * 00000001409FC8C7: mov     r14b, al
 * 00000001409FC8CA: mov     r13b, al
 * 00000001409FC8CD: jmp     short loc_1409FC8D2
 * 00000001409FC8CF: mov     r14b, 30h ; '0'
 * 00000001409FC8D2: mov     r15, [rsi+5C8h]
 * 00000001409FC8D9: movzx   ebx, bl
 * 00000001409FC8DC: shr     rbx, 4
 * 00000001409FC8E0: mov     al, [r15+rbx*2]
 * 00000001409FC8E4: or      al, r14b
 * 00000001409FC8E7: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409FC8EC: cmp     al, byte ptr [rbp+0BE0h+arg_8]
 * 00000001409FC8F2: jz      short loc_1409FC94C
 * 00000001409FC8F4: xor     eax, eax
 * 00000001409FC8F6: cmp     [rsi+8F8h], eax
 * 00000001409FC8FC: jnz     short loc_1409FC94C
 * 00000001409FC8FE: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC908: xor     edx, edx
 * 00000001409FC90A: add     rax, rsi
 * 00000001409FC90D: mov     rcx, rsi
 * 00000001409FC910: mov     [rsi+900h], rax
 * 00000001409FC917: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FC921: add     rax, r12
 * 00000001409FC924: mov     [rsi+908h], rax
 * 00000001409FC92B: movsxd  rax, dword ptr [r14]
 * 00000001409FC92E: mov     [rsi+910h], rax
 * 00000001409FC935: mov     eax, 1
 * 00000001409FC93A: mov     [rsi+918h], rdi
 * 00000001409FC941: mov     [rsi+8F8h], eax
 * 00000001409FC947: call    $$b8
 * 00000001409FC94C: mov     al, [r15+rbx*2+1]
 * 00000001409FC951: mov     ebx, 1
 * 00000001409FC956: or      al, r13b
 * 00000001409FC959: cmp     al, [rbp+0BE0h+arg_18]
 * 00000001409FC95F: jz      short loc_1409FC9B4
 * 00000001409FC961: xor     eax, eax
 * 00000001409FC963: cmp     [rsi+8F8h], eax
 * 00000001409FC969: jnz     short loc_1409FC9B6
 * 00000001409FC96B: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC975: xor     edx, edx
 * 00000001409FC977: add     rax, rsi
 * 00000001409FC97A: mov     rcx, rsi
 * 00000001409FC97D: mov     [rsi+900h], rax
 * 00000001409FC984: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FC98E: add     rax, r12
 * 00000001409FC991: mov     [rsi+908h], rax
 * 00000001409FC998: movsxd  rax, dword ptr [r14]
 * 00000001409FC99B: mov     [rsi+910h], rax
 * 00000001409FC9A2: mov     [rsi+918h], rdi
 * 00000001409FC9A9: mov     [rsi+8F8h], ebx
 * 00000001409FC9AF: call    $$b8
 * 00000001409FC9B4: xor     eax, eax
 * 00000001409FC9B6: cmp     rdi, [rsi+4E0h]
 * 00000001409FC9BD: jz      short loc_1409FC9D0
 * 00000001409FC9BF: mov     rax, [rsi+3D8h]
 * 00000001409FC9C6: mov     edx, ebx
 * 00000001409FC9C8: mov     rcx, rdi
 * 00000001409FC9CB: call    KeGuardDispatchICall
 * 00000001409FC9D0: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409FC9D4: mov     r14, rax
 * 00000001409FC9D7: test    rax, rax
 * 00000001409FC9DA: jz      loc_1409FCF08
 * 00000001409FC9E0: mov     rcx, [rax]
 * 00000001409FC9E3: mov     rbx, rax
 * 00000001409FC9E6: test    rcx, rcx
 * 00000001409FC9E9: jz      loc_1409FCEF9
 * 00000001409FC9EF: mov     r14b, byte ptr [rbp+0BE0h+arg_8]
 * 00000001409FC9F6: mov     r13, [rsp+0CE0h+var_C70]
 * 00000001409FC9FB: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 00000001409FC9FF: mov     [rbx], rcx
 * 00000001409FCA02: mov     rax, [rsi+1E0h]
 * 00000001409FCA09: call    KeGuardDispatchICall
 * 00000001409FCA0E: mov     rcx, [rbx+8]
 * 00000001409FCA12: movzx   edx, [rbp+0BE0h+arg_18]
 * 00000001409FCA19: mov     r15, rcx
 * 00000001409FCA1C: movzx   eax, r14b
 * 00000001409FCA20: and     r15, 0FFFFFFFFFFFF0000h
 * 00000001409FCA27: cmp     r15, r13
 * 00000001409FCA2A: cmovz   edx, eax
 * 00000001409FCA2D: mov     rax, [rsi+3F8h]
 * 00000001409FCA34: shr     rcx, 6
 * 00000001409FCA38: and     cl, 0Fh
 * 00000001409FCA3B: call    KeGuardDispatchICall
 * 00000001409FCA40: test    eax, eax
 * 00000001409FCA42: jnz     loc_1409FCB16
 * 00000001409FCA48: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FCA52: lea     r9d, [rax+1]
 * 00000001409FCA56: jz      short loc_1409FCAA6
 * 00000001409FCA58: mov     rcx, [rsi+0A80h]
 * 00000001409FCA5F: lea     edx, [rax+30h]
 * 00000001409FCA62: lea     r8d, [rax+6]
 * 00000001409FCA66: mov     rax, [r12]
 * 00000001409FCA6A: add     edx, 0FFFFFFF8h
 * 00000001409FCA6D: mov     [rcx], rax
 * 00000001409FCA70: add     r12, 8
 * 00000001409FCA74: add     rcx, 8
 * 00000001409FCA78: sub     r8, r9
 * 00000001409FCA7B: jnz     short loc_1409FCA66
 * 00000001409FCA7D: test    edx, edx
 * 00000001409FCA7F: jz      short loc_1409FCA9F
 * 00000001409FCA81: mov     r14d, 0FFFFFFFFh
 * 00000001409FCA87: mov     al, [r12]
 * 00000001409FCA8B: add     r12, r9
 * 00000001409FCA8E: mov     [rcx], al
 * 00000001409FCA90: add     rcx, r9
 * 00000001409FCA93: add     edx, r14d
 * 00000001409FCA96: jnz     short loc_1409FCA87
 * 00000001409FCA98: mov     r14b, byte ptr [rbp+0BE0h+arg_8]
 * 00000001409FCA9F: mov     r12, [rsi+0A80h]
 * 00000001409FCAA6: mov     [r12+18h], r15
 * 00000001409FCAAB: mov     rax, [rbx]
 * 00000001409FCAAE: mov     [r12+20h], rax
 * 00000001409FCAB3: mov     eax, [rbx+8]
 * 00000001409FCAB6: shr     rax, 6
 * 00000001409FCABA: and     al, 0Fh
 * 00000001409FCABC: mov     [r12+28h], al
 * 00000001409FCAC1: xor     eax, eax
 * 00000001409FCAC3: cmp     [rsi+8F8h], eax
 * 00000001409FCAC9: jnz     short loc_1409FCB16
 * 00000001409FCACB: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FCAD5: xor     edx, edx
 * 00000001409FCAD7: add     rax, rsi
 * 00000001409FCADA: mov     rcx, rsi
 * 00000001409FCADD: mov     [rsi+900h], rax
 * 00000001409FCAE4: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FCAEE: add     rax, r12
 * 00000001409FCAF1: mov     [rsi+908h], rax
 * 00000001409FCAF8: movsxd  rax, dword ptr [r12]
 * 00000001409FCAFC: mov     [rsi+910h], rax
 * 00000001409FCB03: mov     [rsi+918h], rdi
 * 00000001409FCB0A: mov     [rsi+8F8h], r9d
 * 00000001409FCB11: call    $$b8
 * 00000001409FCB16: add     rbx, 30h ; '0'
 * 00000001409FCB1A: mov     rcx, [rbx]
 * 00000001409FCB1D: test    rcx, rcx
 * 00000001409FCB20: jnz     loc_1409FC9FB
 * 00000001409FCB26: jmp     loc_1409FCEF5
 * 00000001409FCB2B: mov     rax, [rsi+3C8h]
 * 00000001409FCB32: call    KeGuardDispatchICall
 * 00000001409FCB37: test    eax, eax
 * 00000001409FCB39: jz      loc_1409FCF3A
 * 00000001409FCB3F: mov     rax, [rsi+3A0h]
 * 00000001409FCB46: mov     rcx, rdi
 * 00000001409FCB49: mov     r12, r13
 * 00000001409FCB4C: call    KeGuardDispatchICall
 * 00000001409FCB51: test    eax, eax
 * 00000001409FCB53: js      loc_1409FCF34
 * 00000001409FCB59: mov     rax, [rsi+3E0h]
 * 00000001409FCB60: mov     rcx, rdi
 * 00000001409FCB63: call    KeGuardDispatchICall
 * 00000001409FCB68: mov     bl, al
 * 00000001409FCB6A: mov     [rbp+0BE0h+var_B3F], al
 * 00000001409FCB70: mov     rax, [rsi+3E8h]
 * 00000001409FCB77: lea     rdx, [rbp+0BE0h+var_BEC]
 * 00000001409FCB7B: mov     rcx, rdi
 * 00000001409FCB7E: call    KeGuardDispatchICall
 * 00000001409FCB83: mov     byte ptr [rbp+0BE0h+arg_8], al
 * 00000001409FCB89: mov     rcx, rdi
 * 00000001409FCB8C: mov     rax, [rsi+3F0h]
 * 00000001409FCB93: call    KeGuardDispatchICall
 * 00000001409FCB98: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FCB9D: cmp     bl, 61h ; 'a'
 * 00000001409FCBA0: jz      short loc_1409FCC1B
 * 00000001409FCBA2: mov     eax, [rsi+8F8h]
 * 00000001409FCBA8: test    eax, eax
 * 00000001409FCBAA: jnz     short loc_1409FCC1B
 * 00000001409FCBAC: mov     rax, [rsi+590h]
 * 00000001409FCBB3: movzx   ecx, bl
 * 00000001409FCBB6: xor     rcx, 61h
 * 00000001409FCBBA: mov     [rax+18h], rcx
 * 00000001409FCBBE: mov     eax, [rsi+8F8h]
 * 00000001409FCBC4: test    eax, eax
 * 00000001409FCBC6: jnz     short loc_1409FCC1B
 * 00000001409FCBC8: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FCBD2: mov     r15d, 1
 * 00000001409FCBD8: add     rax, rsi
 * 00000001409FCBDB: xor     edx, edx
 * 00000001409FCBDD: mov     [rsi+900h], rax
 * 00000001409FCBE4: mov     rcx, rsi
 * 00000001409FCBE7: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FCBF1: add     rax, r13
 * 00000001409FCBF4: mov     [rsi+908h], rax
 * 00000001409FCBFB: movsxd  rax, dword ptr [r13+0]
 * 00000001409FCBFF: mov     [rsi+910h], rax
 * 00000001409FCC06: mov     [rsi+918h], rdi
 * 00000001409FCC0D: mov     [rsi+8F8h], r15d
 * 00000001409FCC14: call    $$b8
 * 00000001409FCC19: jmp     short loc_1409FCC21
 * 00000001409FCC1B: mov     r15d, 1
 * 00000001409FCC21: xor     eax, eax
 * 00000001409FCC23: movzx   ecx, bl
 * 00000001409FCC26: and     ecx, 7
 * 00000001409FCC29: mov     r14b, al
 * 00000001409FCC2C: mov     r13b, al
 * 00000001409FCC2F: sub     ecx, 1
 * 00000001409FCC32: jz      short loc_1409FCCA4
 * 00000001409FCC34: cmp     ecx, 1
 * 00000001409FCC37: jz      short loc_1409FCC97
 * 00000001409FCC39: test    bl, 7
 * 00000001409FCC3C: jz      short loc_1409FCCA7
 * 00000001409FCC3E: cmp     [rsi+8F8h], eax
 * 00000001409FCC44: jnz     short loc_1409FCCA7
 * 00000001409FCC46: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FCC50: xor     edx, edx
 * 00000001409FCC52: add     rax, rsi
 * 00000001409FCC55: mov     rcx, rsi
 * 00000001409FCC58: mov     [rsi+900h], rax
 * 00000001409FCC5F: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FCC69: add     rax, r12
 * 00000001409FCC6C: mov     [rsi+908h], rax
 * 00000001409FCC73: mov     rax, [rsp+0CE0h+var_C90]
 * 00000001409FCC78: movsxd  rax, dword ptr [rax]
 * 00000001409FCC7B: mov     [rsi+910h], rax
 * 00000001409FCC82: mov     [rsi+918h], rdi
 * 00000001409FCC89: mov     [rsi+8F8h], r15d
 * 00000001409FCC90: call    $$b8
 * 00000001409FCC95: jmp     short loc_1409FCCA7
 * 00000001409FCC97: mov     eax, 10h
 * 00000001409FCC9C: mov     r14b, al
 * 00000001409FCC9F: mov     r13b, al
 * 00000001409FCCA2: jmp     short loc_1409FCCA7
 * 00000001409FCCA4: mov     r14b, 30h ; '0'
 * 00000001409FCCA7: mov     r15, [rsi+5C8h]
 * 00000001409FCCAE: movzx   ebx, bl
 * 00000001409FCCB1: shr     rbx, 4
 * 00000001409FCCB5: mov     al, [r15+rbx*2]
 * 00000001409FCCB9: or      al, r14b
 * 00000001409FCCBC: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409FCCC1: cmp     al, byte ptr [rbp+0BE0h+arg_8]
 * 00000001409FCCC7: jz      short loc_1409FCD21
 * 00000001409FCCC9: xor     eax, eax
 * 00000001409FCCCB: cmp     [rsi+8F8h], eax
 * 00000001409FCCD1: jnz     short loc_1409FCD21
 * 00000001409FCCD3: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FCCDD: xor     edx, edx
 * 00000001409FCCDF: add     rax, rsi
 * 00000001409FCCE2: mov     rcx, rsi
 * 00000001409FCCE5: mov     [rsi+900h], rax
 * 00000001409FCCEC: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FCCF6: add     rax, r12
 * 00000001409FCCF9: mov     [rsi+908h], rax
 * 00000001409FCD00: movsxd  rax, dword ptr [r14]
 * 00000001409FCD03: mov     [rsi+910h], rax
 * 00000001409FCD0A: mov     eax, 1
 * 00000001409FCD0F: mov     [rsi+918h], rdi
 * 00000001409FCD16: mov     [rsi+8F8h], eax
 * 00000001409FCD1C: call    $$b8
 * 00000001409FCD21: mov     al, [r15+rbx*2+1]
 * 00000001409FCD26: mov     ebx, 1
 * 00000001409FCD2B: or      al, r13b
 * 00000001409FCD2E: cmp     al, [rbp+0BE0h+var_BEC]
 * 00000001409FCD31: jz      short loc_1409FCD86
 * 00000001409FCD33: xor     eax, eax
 * 00000001409FCD35: cmp     [rsi+8F8h], eax
 * 00000001409FCD3B: jnz     short loc_1409FCD88
 * 00000001409FCD3D: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FCD47: xor     edx, edx
 * 00000001409FCD49: add     rax, rsi
 * 00000001409FCD4C: mov     rcx, rsi
 * 00000001409FCD4F: mov     [rsi+900h], rax
 * 00000001409FCD56: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FCD60: add     rax, r12
 * 00000001409FCD63: mov     [rsi+908h], rax
 * 00000001409FCD6A: movsxd  rax, dword ptr [r14]
 * 00000001409FCD6D: mov     [rsi+910h], rax
 * 00000001409FCD74: mov     [rsi+918h], rdi
 * 00000001409FCD7B: mov     [rsi+8F8h], ebx
 * 00000001409FCD81: call    $$b8
 * 00000001409FCD86: xor     eax, eax
 * 00000001409FCD88: cmp     rdi, [rsi+4E0h]
 * 00000001409FCD8F: jz      short loc_1409FCDA2
 * 00000001409FCD91: mov     rax, [rsi+3D8h]
 * 00000001409FCD98: mov     edx, ebx
 * 00000001409FCD9A: mov     rcx, rdi
 * 00000001409FCD9D: call    KeGuardDispatchICall
 * 00000001409FCDA2: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409FCDA6: mov     r14, rax
 * 00000001409FCDA9: test    rax, rax
 * 00000001409FCDAC: jz      loc_1409FCF08
 * 00000001409FCDB2: mov     rcx, [rax]
 * 00000001409FCDB5: mov     rbx, rax
 * 00000001409FCDB8: test    rcx, rcx
 * 00000001409FCDBB: jz      loc_1409FCEF9
 * 00000001409FCDC1: mov     r14b, byte ptr [rbp+0BE0h+arg_8]
 * 00000001409FCDC8: mov     r13, [rsp+0CE0h+var_C70]
 * 00000001409FCDCD: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 00000001409FCDD1: mov     [rbx], rcx
 * 00000001409FCDD4: mov     rax, [rsi+1E0h]
 * 00000001409FCDDB: call    KeGuardDispatchICall
 * 00000001409FCDE0: mov     rcx, [rbx+8]
 * 00000001409FCDE4: movzx   edx, [rbp+0BE0h+var_BEC]
 * 00000001409FCDE8: mov     r15, rcx
 * 00000001409FCDEB: movzx   eax, r14b
 * 00000001409FCDEF: and     r15, 0FFFFFFFFFFFF0000h
 * 00000001409FCDF6: cmp     r15, r13
 * 00000001409FCDF9: cmovz   edx, eax
 * 00000001409FCDFC: mov     rax, [rsi+3F8h]
 * 00000001409FCE03: shr     rcx, 6
 * 00000001409FCE07: and     cl, 0Fh
 * 00000001409FCE0A: call    KeGuardDispatchICall
 * 00000001409FCE0F: test    eax, eax
 * 00000001409FCE11: jnz     loc_1409FCEE5
 * 00000001409FCE17: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FCE21: lea     r9d, [rax+1]
 * 00000001409FCE25: jz      short loc_1409FCE75
 * 00000001409FCE27: mov     rcx, [rsi+0A80h]
 * 00000001409FCE2E: lea     edx, [rax+30h]
 * 00000001409FCE31: lea     r8d, [rax+6]
 * 00000001409FCE35: mov     rax, [r12]
 * 00000001409FCE39: add     edx, 0FFFFFFF8h
 * 00000001409FCE3C: mov     [rcx], rax
 * 00000001409FCE3F: add     r12, 8
 * 00000001409FCE43: add     rcx, 8
 * 00000001409FCE47: sub     r8, r9
 * 00000001409FCE4A: jnz     short loc_1409FCE35
 * 00000001409FCE4C: test    edx, edx
 * 00000001409FCE4E: jz      short loc_1409FCE6E
 * 00000001409FCE50: mov     r14d, 0FFFFFFFFh
 * 00000001409FCE56: mov     al, [r12]
 * 00000001409FCE5A: add     r12, r9
 * 00000001409FCE5D: mov     [rcx], al
 * 00000001409FCE5F: add     rcx, r9
 * 00000001409FCE62: add     edx, r14d
 * 00000001409FCE65: jnz     short loc_1409FCE56
 * 00000001409FCE67: mov     r14b, byte ptr [rbp+0BE0h+arg_8]
 * 00000001409FCE6E: mov     r12, [rsi+0A80h]
 * 00000001409FCE75: mov     [r12+18h], r15
 * 00000001409FCE7A: mov     rax, [rbx]
 * 00000001409FCE7D: mov     [r12+20h], rax
 * 00000001409FCE82: mov     eax, [rbx+8]
 * 00000001409FCE85: shr     rax, 6
 * 00000001409FCE89: and     al, 0Fh
 * 00000001409FCE8B: mov     [r12+28h], al
 * 00000001409FCE90: xor     eax, eax
 * 00000001409FCE92: cmp     [rsi+8F8h], eax
 * 00000001409FCE98: jnz     short loc_1409FCEE5
 * 00000001409FCE9A: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FCEA4: xor     edx, edx
 * 00000001409FCEA6: add     rax, rsi
 * 00000001409FCEA9: mov     rcx, rsi
 * 00000001409FCEAC: mov     [rsi+900h], rax
 * 00000001409FCEB3: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FCEBD: add     rax, r12
 * 00000001409FCEC0: mov     [rsi+908h], rax
 * 00000001409FCEC7: movsxd  rax, dword ptr [r12]
 * 00000001409FCECB: mov     [rsi+910h], rax
 * 00000001409FCED2: mov     [rsi+918h], rdi
 * 00000001409FCED9: mov     [rsi+8F8h], r9d
 * 00000001409FCEE0: call    $$b8
 * 00000001409FCEE5: add     rbx, 30h ; '0'
 * 00000001409FCEE9: mov     rcx, [rbx]
 * 00000001409FCEEC: test    rcx, rcx
 * 00000001409FCEEF: jnz     loc_1409FCDCD
 * 00000001409FCEF5: mov     r14, [rbp+0BE0h+var_C60]
 * 00000001409FCEF9: mov     rax, [rsi+100h]
 * 00000001409FCF00: mov     rcx, r14
 * 00000001409FCF03: call    KeGuardDispatchICall
 * 00000001409FCF08: mov     rax, [rsi+3A8h]
 * 00000001409FCF0F: mov     rcx, rdi
 * 00000001409FCF12: call    KeGuardDispatchICall
 * 00000001409FCF17: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FCF1C: mov     eax, 8000h
 * 00000001409FCF21: add     [rsi+828h], eax
 * 00000001409FCF27: mov     r14d, [rsp+0CE0h+var_C78]
 * 00000001409FCF2C: xor     r15d, r15d
 * 00000001409FCF2F: mov     rbx, [rsp+0CE0h+var_C88]
 * 00000001409FCF34: mov     r12d, 1
 * 00000001409FCF3A: mov     rax, [rsi+3B0h]
 * 00000001409FCF41: add     r14d, r12d
 * 00000001409FCF44: mov     rcx, rdi
 * 00000001409FCF47: mov     [rsp+0CE0h+var_C78], r14d
 * 00000001409FCF4C: call    KeGuardDispatchICall
 * 00000001409FCF51: mov     rdi, rax
 * 00000001409FCF54: test    rax, rax
 * 00000001409FCF57: jnz     loc_1409FC75E
 * 00000001409FCF5D: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FCF64: mov     r13, [rsi+4E0h]
 * 00000001409FCF6B: mov     rax, [rsi+3A0h]
 * 00000001409FCF72: mov     rcx, r13
 * 00000001409FCF75: call    KeGuardDispatchICall
 * 00000001409FCF7A: test    eax, eax
 * 00000001409FCF7C: js      loc_1409FD357
 * 00000001409FCF82: mov     rax, [rsi+3E0h]
 * 00000001409FCF89: mov     rcx, r13
 * 00000001409FCF8C: call    KeGuardDispatchICall
 * 00000001409FCF91: mov     bl, al
 * 00000001409FCF93: mov     [rbp+0BE0h+var_B3E], al
 * 00000001409FCF99: mov     rax, [rsi+3E8h]
 * 00000001409FCFA0: lea     rdx, [rbp+0BE0h+var_C00]
 * 00000001409FCFA4: mov     rcx, r13
 * 00000001409FCFA7: call    KeGuardDispatchICall
 * 00000001409FCFAC: mov     byte ptr [rbp+0BE0h+arg_8], al
 * 00000001409FCFB2: mov     rcx, r13
 * 00000001409FCFB5: mov     rax, [rsi+3F0h]
 * 00000001409FCFBC: call    KeGuardDispatchICall
 * 00000001409FCFC1: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FCFC6: cmp     bl, 72h ; 'r'
 * 00000001409FCFC9: jz      short loc_1409FD042
 * 00000001409FCFCB: mov     eax, [rsi+8F8h]
 * 00000001409FCFD1: test    eax, eax
 * 00000001409FCFD3: jnz     short loc_1409FD042
 * 00000001409FCFD5: mov     rax, [rsi+590h]
 * 00000001409FCFDC: movzx   ecx, bl
 * 00000001409FCFDF: xor     rcx, 72h
 * 00000001409FCFE3: mov     [rax+18h], rcx
 * 00000001409FCFE7: mov     eax, [rsi+8F8h]
 * 00000001409FCFED: test    eax, eax
 * 00000001409FCFEF: jnz     short loc_1409FD042
 * 00000001409FCFF1: mov     r15, [rsp+0CE0h+var_C90]
 * 00000001409FCFF6: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD000: add     rax, rsi
 * 00000001409FD003: xor     edx, edx
 * 00000001409FD005: mov     [rsi+900h], rax
 * 00000001409FD00C: mov     rcx, rsi
 * 00000001409FD00F: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FD019: add     rax, r15
 * 00000001409FD01C: mov     [rsi+908h], rax
 * 00000001409FD023: movsxd  rax, dword ptr [r15]
 * 00000001409FD026: mov     [rsi+910h], rax
 * 00000001409FD02D: mov     [rsi+918h], r13
 * 00000001409FD034: mov     [rsi+8F8h], r12d
 * 00000001409FD03B: call    $$b8
 * 00000001409FD040: jmp     short loc_1409FD047
 * 00000001409FD042: mov     r15, [rsp+0CE0h+var_C90]
 * 00000001409FD047: xor     edx, edx
 * 00000001409FD049: movzx   ecx, bl
 * 00000001409FD04C: and     ecx, 7
 * 00000001409FD04F: mov     r14b, dl
 * 00000001409FD052: mov     r12b, dl
 * 00000001409FD055: sub     ecx, 1
 * 00000001409FD058: jz      short loc_1409FD0C7
 * 00000001409FD05A: cmp     ecx, 1
 * 00000001409FD05D: jz      short loc_1409FD0BA
 * 00000001409FD05F: test    bl, 7
 * 00000001409FD062: jz      short loc_1409FD0CA
 * 00000001409FD064: cmp     [rsi+8F8h], edx
 * 00000001409FD06A: jnz     short loc_1409FD0CA
 * 00000001409FD06C: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD076: mov     rcx, rsi
 * 00000001409FD079: add     rax, rsi
 * 00000001409FD07C: mov     [rsi+900h], rax
 * 00000001409FD083: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FD08D: add     rax, r15
 * 00000001409FD090: mov     [rsi+908h], rax
 * 00000001409FD097: movsxd  rax, dword ptr [r15]
 * 00000001409FD09A: mov     [rsi+910h], rax
 * 00000001409FD0A1: lea     eax, [rdx+1]
 * 00000001409FD0A4: mov     [rsi+918h], r13
 * 00000001409FD0AB: mov     [rsi+8F8h], eax
 * 00000001409FD0B1: call    $$b8
 * 00000001409FD0B6: xor     edx, edx
 * 00000001409FD0B8: jmp     short loc_1409FD0CA
 * 00000001409FD0BA: mov     eax, 10h
 * 00000001409FD0BF: mov     r14b, al
 * 00000001409FD0C2: mov     r12b, al
 * 00000001409FD0C5: jmp     short loc_1409FD0CA
 * 00000001409FD0C7: mov     r14b, 30h ; '0'
 * 00000001409FD0CA: mov     r15, [rsi+5C8h]
 * 00000001409FD0D1: movzx   ebx, bl
 * 00000001409FD0D4: shr     rbx, 4
 * 00000001409FD0D8: mov     al, [r15+rbx*2]
 * 00000001409FD0DC: or      al, r14b
 * 00000001409FD0DF: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409FD0E4: cmp     al, byte ptr [rbp+0BE0h+arg_8]
 * 00000001409FD0EA: jz      short loc_1409FD142
 * 00000001409FD0EC: cmp     [rsi+8F8h], edx
 * 00000001409FD0F2: jnz     short loc_1409FD142
 * 00000001409FD0F4: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD0FE: xor     edx, edx
 * 00000001409FD100: add     rax, rsi
 * 00000001409FD103: mov     rcx, rsi
 * 00000001409FD106: mov     [rsi+900h], rax
 * 00000001409FD10D: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FD117: add     rax, r14
 * 00000001409FD11A: mov     [rsi+908h], rax
 * 00000001409FD121: movsxd  rax, dword ptr [r14]
 * 00000001409FD124: mov     [rsi+910h], rax
 * 00000001409FD12B: mov     eax, 1
 * 00000001409FD130: mov     [rsi+918h], r13
 * 00000001409FD137: mov     [rsi+8F8h], eax
 * 00000001409FD13D: call    $$b8
 * 00000001409FD142: mov     al, [r15+rbx*2+1]
 * 00000001409FD147: xor     r15d, r15d
 * 00000001409FD14A: or      al, r12b
 * 00000001409FD14D: lea     ebx, [r15+1]
 * 00000001409FD151: cmp     al, [rbp+0BE0h+var_C00]
 * 00000001409FD154: jz      short loc_1409FD1A8
 * 00000001409FD156: cmp     [rsi+8F8h], r15d
 * 00000001409FD15D: jnz     short loc_1409FD1A8
 * 00000001409FD15F: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD169: xor     edx, edx
 * 00000001409FD16B: add     rax, rsi
 * 00000001409FD16E: mov     rcx, rsi
 * 00000001409FD171: mov     [rsi+900h], rax
 * 00000001409FD178: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FD182: add     rax, r14
 * 00000001409FD185: mov     [rsi+908h], rax
 * 00000001409FD18C: movsxd  rax, dword ptr [r14]
 * 00000001409FD18F: mov     [rsi+910h], rax
 * 00000001409FD196: mov     [rsi+918h], r13
 * 00000001409FD19D: mov     [rsi+8F8h], ebx
 * 00000001409FD1A3: call    $$b8
 * 00000001409FD1A8: cmp     r13, [rsi+4E0h]
 * 00000001409FD1AF: jz      short loc_1409FD1C7
 * 00000001409FD1B1: mov     rax, [rsi+3D8h]
 * 00000001409FD1B8: mov     edx, ebx
 * 00000001409FD1BA: mov     rcx, r13
 * 00000001409FD1BD: call    KeGuardDispatchICall
 * 00000001409FD1C2: mov     r14, rax
 * 00000001409FD1C5: jmp     short loc_1409FD1CA
 * 00000001409FD1C7: mov     r14, r15
 * 00000001409FD1CA: mov     [rbp+0BE0h+var_C60], r14
 * 00000001409FD1CE: test    r14, r14
 * 00000001409FD1D1: jz      loc_1409FD338
 * 00000001409FD1D7: mov     rcx, [r14]
 * 00000001409FD1DA: mov     rbx, r14
 * 00000001409FD1DD: test    rcx, rcx
 * 00000001409FD1E0: jz      loc_1409FD329
 * 00000001409FD1E6: mov     dil, byte ptr [rbp+0BE0h+arg_8]
 * 00000001409FD1ED: mov     r12, [rsp+0CE0h+var_C70]
 * 00000001409FD1F2: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409FD1F7: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 00000001409FD1FB: mov     [rbx], rcx
 * 00000001409FD1FE: mov     rax, [rsi+1E0h]
 * 00000001409FD205: call    KeGuardDispatchICall
 * 00000001409FD20A: mov     rcx, [rbx+8]
 * 00000001409FD20E: movzx   edx, [rbp+0BE0h+var_C00]
 * 00000001409FD212: mov     r15, rcx
 * 00000001409FD215: movzx   eax, dil
 * 00000001409FD219: and     r15, 0FFFFFFFFFFFF0000h
 * 00000001409FD220: cmp     r15, r12
 * 00000001409FD223: cmovz   edx, eax
 * 00000001409FD226: mov     rax, [rsi+3F8h]
 * 00000001409FD22D: shr     rcx, 6
 * 00000001409FD231: and     cl, 0Fh
 * 00000001409FD234: call    KeGuardDispatchICall
 * 00000001409FD239: test    eax, eax
 * 00000001409FD23B: jnz     loc_1409FD30B
 * 00000001409FD241: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FD24B: lea     r10d, [rax+1]
 * 00000001409FD24F: jz      short loc_1409FD29B
 * 00000001409FD251: mov     rcx, [rsi+0A80h]
 * 00000001409FD258: lea     edx, [rax+30h]
 * 00000001409FD25B: lea     r8d, [rax+6]
 * 00000001409FD25F: mov     rax, [r14]
 * 00000001409FD262: add     edx, 0FFFFFFF8h
 * 00000001409FD265: mov     [rcx], rax
 * 00000001409FD268: add     r14, 8
 * 00000001409FD26C: add     rcx, 8
 * 00000001409FD270: sub     r8, r10
 * 00000001409FD273: jnz     short loc_1409FD25F
 * 00000001409FD275: test    edx, edx
 * 00000001409FD277: jz      short loc_1409FD294
 * 00000001409FD279: mov     edi, 0FFFFFFFFh
 * 00000001409FD27E: mov     al, [r14]
 * 00000001409FD281: add     r14, r10
 * 00000001409FD284: mov     [rcx], al
 * 00000001409FD286: add     rcx, r10
 * 00000001409FD289: add     edx, edi
 * 00000001409FD28B: jnz     short loc_1409FD27E
 * 00000001409FD28D: mov     dil, byte ptr [rbp+0BE0h+arg_8]
 * 00000001409FD294: mov     r14, [rsi+0A80h]
 * 00000001409FD29B: mov     [r14+18h], r15
 * 00000001409FD29F: xor     r15d, r15d
 * 00000001409FD2A2: mov     rax, [rbx]
 * 00000001409FD2A5: mov     [r14+20h], rax
 * 00000001409FD2A9: mov     eax, [rbx+8]
 * 00000001409FD2AC: shr     rax, 6
 * 00000001409FD2B0: and     al, 0Fh
 * 00000001409FD2B2: mov     [r14+28h], al
 * 00000001409FD2B6: cmp     [rsi+8F8h], r15d
 * 00000001409FD2BD: jnz     short loc_1409FD30E
 * 00000001409FD2BF: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD2C9: xor     edx, edx
 * 00000001409FD2CB: add     rax, rsi
 * 00000001409FD2CE: mov     rcx, rsi
 * 00000001409FD2D1: mov     [rsi+900h], rax
 * 00000001409FD2D8: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FD2E2: add     rax, r14
 * 00000001409FD2E5: mov     [rsi+908h], rax
 * 00000001409FD2EC: movsxd  rax, dword ptr [r14]
 * 00000001409FD2EF: mov     [rsi+910h], rax
 * 00000001409FD2F6: mov     [rsi+918h], r13
 * 00000001409FD2FD: mov     [rsi+8F8h], r10d
 * 00000001409FD304: call    $$b8
 * 00000001409FD309: jmp     short loc_1409FD30E
 * 00000001409FD30B: xor     r15d, r15d
 * 00000001409FD30E: add     rbx, 30h ; '0'
 * 00000001409FD312: mov     rcx, [rbx]
 * 00000001409FD315: test    rcx, rcx
 * 00000001409FD318: jnz     loc_1409FD1F7
 * 00000001409FD31E: mov     r14, [rbp+0BE0h+var_C60]
 * 00000001409FD322: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FD329: mov     rax, [rsi+100h]
 * 00000001409FD330: mov     rcx, r14
 * 00000001409FD333: call    KeGuardDispatchICall
 * 00000001409FD338: mov     rax, [rsi+3A8h]
 * 00000001409FD33F: mov     rcx, r13
 * 00000001409FD342: call    KeGuardDispatchICall
 * 00000001409FD347: mov     r14d, [rsp+0CE0h+var_C78]
 * 00000001409FD34C: mov     eax, 8000h
 * 00000001409FD351: add     [rsi+828h], eax
 * 00000001409FD357: mov     rcx, [rsp+0CE0h+var_C88]
 * 00000001409FD35C: test    rcx, rcx
 * 00000001409FD35F: jz      short loc_1409FD36D
 * 00000001409FD361: mov     rax, [rsi+1E0h]
 * 00000001409FD368: call    KeGuardDispatchICall
 * 00000001409FD36D: shl     r14d, 8
 * 00000001409FD371: add     [rsi+828h], r14d
 * 00000001409FD378: jmp     loc_1409F631B
 * 00000001409FD37D: test    [r13+2Ah], dl
 * 00000001409FD381: jz      short loc_1409FD3C1
 * 00000001409FD383: xor     r15d, r15d
 * 00000001409FD386: cmp     [rsi+980h], r15
 * 00000001409FD38D: jz      loc_1409FD44D
 * 00000001409FD393: mov     ecx, [rsi+994h]
 * 00000001409FD399: test    cl, 4
 * 00000001409FD39C: jnz     loc_1409FD44D
 * 00000001409FD3A2: cmp     [rsi+824h], r15d
 * 00000001409FD3A9: jnz     loc_1409FD444
 * 00000001409FD3AF: mov     eax, ecx
 * 00000001409FD3B1: shl     eax, 3
 * 00000001409FD3B4: xor     eax, ecx
 * 00000001409FD3B6: and     eax, 20h
 * 00000001409FD3B9: xor     eax, ecx
 * 00000001409FD3BB: mov     [rsi+994h], eax
 * 00000001409FD3C1: mov     r10, [r13+8]
 * 00000001409FD3C5: xor     r14d, r14d
 * 00000001409FD3C8: mov     r8d, [rsi+824h]
 * 00000001409FD3CF: mov     [rbp+0BE0h+var_C10], r10
 * 00000001409FD3D3: lea     rax, [r8+r8*2]
 * 00000001409FD3D7: lea     rcx, [r10+rax*4]
 * 00000001409FD3DB: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001409FD3E5: lea     r11, [rcx+0Ch]
 * 00000001409FD3E9: mov     [rsp+0CE0h+var_C70], rcx
 * 00000001409FD3EE: mov     ecx, [r13+24h]
 * 00000001409FD3F2: mul     rcx
 * 00000001409FD3F5: mov     [rbp+0BE0h+var_C60], r11
 * 00000001409FD3F9: mov     r9, rdx
 * 00000001409FD3FC: shr     r9, 3
 * 00000001409FD400: mov     eax, r9d
 * 00000001409FD403: mov     [rbp+0BE0h+var_C48], r9
 * 00000001409FD407: lea     rcx, [rax+rax*2]
 * 00000001409FD40B: lea     rax, [r10+rcx*4]
 * 00000001409FD40F: mov     [rbp+0BE0h+var_C20], rax
 * 00000001409FD413: lea     rax, [r13+30h]
 * 00000001409FD417: lea     r15, [rax+r8]
 * 00000001409FD41B: mov     [rsp+0CE0h+var_C88], r15
 * 00000001409FD420: lea     r10d, [r9-1]
 * 00000001409FD424: mov     dword ptr [rbp+0BE0h+arg_8], r10d
 * 00000001409FD42B: test    r9d, r9d
 * 00000001409FD42E: jz      short loc_1409FD459
 * 00000001409FD430: mov     edx, r10d
 * 00000001409FD433: add     rdx, 7
 * 00000001409FD437: and     rdx, 0FFFFFFFFFFFFFFF8h
 * 00000001409FD43B: add     rdx, rax
 * 00000001409FD43E: mov     [rbp+0BE0h+var_C50], rdx
 * 00000001409FD442: jmp     short loc_1409FD467
 * 00000001409FD444: test    cl, 20h
 * 00000001409FD447: jz      loc_1409FD3C1
 * 00000001409FD44D: mov     [rsi+824h], r15d
 * 00000001409FD454: jmp     loc_1409F631B
 * 00000001409FD459: mov     rdx, rax
 * 00000001409FD45C: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409FD460: mov     dword ptr [rbp+0BE0h+arg_8], r10d
 * 00000001409FD467: movzx   eax, word ptr [r13+28h]
 * 00000001409FD46C: lea     rcx, [rax+rax*2]
 * 00000001409FD470: lea     rax, [rdx+rcx*8]
 * 00000001409FD474: mov     [rsp+0CE0h+BugCheckParameter2], rax
 * 00000001409FD479: test    r9d, r9d
 * 00000001409FD47C: jz      loc_1409FD7AB
 * 00000001409FD482: cmp     r8d, r10d
 * 00000001409FD485: jnb     loc_1409FD7AB
 * 00000001409FD48B: mov     rdi, [rsp+0CE0h+var_C70]
 * 00000001409FD490: cmp     [r15], r14b
 * 00000001409FD493: jl      loc_1409FD738
 * 00000001409FD499: mov     eax, [rdi+4]
 * 00000001409FD49C: mov     r9d, [r11]
 * 00000001409FD49F: mov     r13d, eax
 * 00000001409FD4A2: sub     r9d, eax
 * 00000001409FD4A5: mov     rax, [rsp+0CE0h+var_C90]
 * 00000001409FD4AA: mov     r12d, r9d
 * 00000001409FD4AD: add     r13, [rax+18h]
 * 00000001409FD4B1: add     [rsi+828h], r9d
 * 00000001409FD4B8: mov     r10, r13
 * 00000001409FD4BB: mov     ebx, [rsi+814h]
 * 00000001409FD4C1: mov     rax, r13
 * 00000001409FD4C4: mov     r14, [rsi+818h]
 * 00000001409FD4CB: lea     rcx, [r9+r13]
 * 00000001409FD4CF: mov     [rsp+0CE0h+var_C70], r13
 * 00000001409FD4D4: cmp     r13, rcx
 * 00000001409FD4D7: jnb     short loc_1409FD4E9
 * 00000001409FD4D9: mov     edx, 40h ; '@'
 * 00000001409FD4DE: prefetchnta byte ptr [rax]
 * 00000001409FD4E1: add     rax, rdx
 * 00000001409FD4E4: cmp     rax, rcx
 * 00000001409FD4E7: jb      short loc_1409FD4DE
 * 00000001409FD4E9: mov     r11d, r9d
 * 00000001409FD4EC: mov     r8, r14
 * 00000001409FD4EF: shr     r11d, 7
 * 00000001409FD4F3: test    r11d, r11d
 * 00000001409FD4F6: jz      short loc_1409FD56A
 * 00000001409FD4F8: mov     rsi, 7010008004002001h
 * 00000001409FD502: mov     edx, 8
 * 00000001409FD507: lea     r15d, [rdx-7]
 * 00000001409FD50B: mov     rax, [r10]
 * 00000001409FD50E: mov     ecx, ebx
 * 00000001409FD510: xor     rax, r8
 * 00000001409FD513: mov     r8, [r10+8]
 * 00000001409FD517: rol     rax, cl
 * 00000001409FD51A: add     r10, 10h
 * 00000001409FD51E: xor     r8, rax
 * 00000001409FD521: rol     r8, cl
 * 00000001409FD524: sub     rdx, r15
 * 00000001409FD527: jnz     short loc_1409FD50B
 * 00000001409FD529: mov     rcx, r10
 * 00000001409FD52C: sub     rcx, r13
 * 00000001409FD52F: xor     rcx, r14
 * 00000001409FD532: mov     rax, rcx
 * 00000001409FD535: rol     rax, 11h
 * 00000001409FD539: xor     rcx, rax
 * 00000001409FD53C: mov     rax, rsi
 * 00000001409FD53F: mul     rcx
 * 00000001409FD542: xor     ebx, edx
 * 00000001409FD544: mov     [rbp+0BE0h+var_628], rdx
 * 00000001409FD54B: xor     ebx, eax
 * 00000001409FD54D: mov     rax, r15
 * 00000001409FD550: and     ebx, 3Fh
 * 00000001409FD553: cmovz   ebx, eax
 * 00000001409FD556: mov     eax, 0FFFFFFFFh
 * 00000001409FD55B: add     r11d, eax
 * 00000001409FD55E: jnz     short loc_1409FD502
 * 00000001409FD560: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FD565: mov     r15, [rsp+0CE0h+var_C88]
 * 00000001409FD56A: and     r9d, 7Fh
 * 00000001409FD56E: mov     r11d, 1
 * 00000001409FD574: cmp     r9d, 8
 * 00000001409FD578: jb      short loc_1409FD596
 * 00000001409FD57A: mov     edx, r9d
 * 00000001409FD57D: shr     rdx, 3
 * 00000001409FD581: xor     r8, [r10]
 * 00000001409FD584: mov     ecx, ebx
 * 00000001409FD586: rol     r8, cl
 * 00000001409FD589: add     r10, 8
 * 00000001409FD58D: add     r9d, 0FFFFFFF8h
 * 00000001409FD591: sub     rdx, r11
 * 00000001409FD594: jnz     short loc_1409FD581
 * 00000001409FD596: xor     r14d, r14d
 * 00000001409FD599: test    r9d, r9d
 * 00000001409FD59C: jz      short loc_1409FD5BB
 * 00000001409FD59E: mov     r14d, 0FFFFFFFFh
 * 00000001409FD5A4: movzx   eax, byte ptr [r10]
 * 00000001409FD5A8: mov     ecx, ebx
 * 00000001409FD5AA: xor     r8, rax
 * 00000001409FD5AD: add     r10, r11
 * 00000001409FD5B0: rol     r8, cl
 * 00000001409FD5B3: add     r9d, r14d
 * 00000001409FD5B6: jnz     short loc_1409FD5A4
 * 00000001409FD5B8: xor     r14d, r14d
 * 00000001409FD5BB: mov     rax, r8
 * 00000001409FD5BE: jmp     short loc_1409FD5C3
 * 00000001409FD5C0: xor     r8b, al
 * 00000001409FD5C3: shr     rax, 7
 * 00000001409FD5C7: test    rax, rax
 * 00000001409FD5CA: jnz     short loc_1409FD5C0
 * 00000001409FD5CC: movzx   ecx, byte ptr [r15]
 * 00000001409FD5D0: mov     eax, ecx
 * 00000001409FD5D2: movzx   edx, r8b
 * 00000001409FD5D6: and     edx, 7Fh
 * 00000001409FD5D9: and     eax, 7Fh
 * 00000001409FD5DC: mov     [rbp+0BE0h+var_C58], edx
 * 00000001409FD5DF: cmp     edx, eax
 * 00000001409FD5E1: jz      loc_1409FD720
 * 00000001409FD5E7: test    r12, r12
 * 00000001409FD5EA: jz      loc_1409FD6A3
 * 00000001409FD5F0: mov     eax, [rsi+994h]
 * 00000001409FD5F6: mov     r8d, 40h ; '@'
 * 00000001409FD5FC: test    r8b, al
 * 00000001409FD5FF: jz      loc_1409FD6A3
 * 00000001409FD605: mov     r15, cr8
 * 00000001409FD609: lea     eax, [r8-3Eh]
 * 00000001409FD60D: mov     cr8, rax
 * 00000001409FD611: mov     rbx, r13
 * 00000001409FD614: dec     r12
 * 00000001409FD617: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001409FD61E: add     r13, r12
 * 00000001409FD621: or      r13, 0FFFh
 * 00000001409FD628: lea     r12, [rbx-1]
 * 00000001409FD62C: movzx   r14d, r15b
 * 00000001409FD630: mov     rax, [rsi+468h]
 * 00000001409FD637: xor     edx, edx
 * 00000001409FD639: mov     rcx, rbx
 * 00000001409FD63C: call    KeGuardDispatchICall
 * 00000001409FD641: cmp     eax, 0C000022Dh
 * 00000001409FD646: jnz     short loc_1409FD66B
 * 00000001409FD648: mov     eax, 1
 * 00000001409FD64D: cmp     r15b, al
 * 00000001409FD650: ja      short loc_1409FD671
 * 00000001409FD652: movzx   r14d, r15b
 * 00000001409FD656: mov     cr8, r14
 * 00000001409FD65A: mov     al, [rbx]
 * 00000001409FD65C: mov     rax, cr8
 * 00000001409FD660: mov     eax, 2
 * 00000001409FD665: mov     cr8, rax
 * 00000001409FD669: jmp     short loc_1409FD630
 * 00000001409FD66B: xor     ecx, ecx
 * 00000001409FD66D: test    eax, eax
 * 00000001409FD66F: js      short loc_1409FD68D
 * 00000001409FD671: mov     eax, 1000h
 * 00000001409FD676: add     rbx, rax
 * 00000001409FD679: add     r12, rax
 * 00000001409FD67C: cmp     r12, r13
 * 00000001409FD67F: jnz     short loc_1409FD62C
 * 00000001409FD681: mov     cr8, r14
 * 00000001409FD685: xor     r14d, r14d
 * 00000001409FD688: jmp     loc_1409FD720
 * 00000001409FD68D: mov     cr8, r14
 * 00000001409FD691: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409FD696: xor     r14d, r14d
 * 00000001409FD699: mov     edx, [rbp+0BE0h+var_C58]
 * 00000001409FD69C: mov     r13, [rsp+0CE0h+var_C70]
 * 00000001409FD6A1: mov     cl, [rax]
 * 00000001409FD6A3: movzx   eax, cl
 * 00000001409FD6A6: mov     ecx, [rsi+8F8h]
 * 00000001409FD6AC: and     eax, 7Fh
 * 00000001409FD6AF: test    ecx, ecx
 * 00000001409FD6B1: jnz     short loc_1409FD720
 * 00000001409FD6B3: mov     ecx, edx
 * 00000001409FD6B5: xor     rcx, rax
 * 00000001409FD6B8: mov     rax, [rsi+590h]
 * 00000001409FD6BF: mov     [rax+18h], rcx
 * 00000001409FD6C3: mov     ecx, [rsi+8F8h]
 * 00000001409FD6C9: test    ecx, ecx
 * 00000001409FD6CB: jnz     short loc_1409FD720
 * 00000001409FD6CD: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FD6D2: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD6DC: add     rax, rsi
 * 00000001409FD6DF: xor     edx, edx
 * 00000001409FD6E1: mov     [rsi+900h], rax
 * 00000001409FD6E8: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FD6F2: add     rax, rcx
 * 00000001409FD6F5: mov     [rsi+908h], rax
 * 00000001409FD6FC: movsxd  rax, dword ptr [rcx]
 * 00000001409FD6FF: mov     rcx, rsi
 * 00000001409FD702: mov     [rsi+910h], rax
 * 00000001409FD709: mov     eax, 1
 * 00000001409FD70E: mov     [rsi+918h], r13
 * 00000001409FD715: mov     [rsi+8F8h], eax
 * 00000001409FD71B: call    $$b8
 * 00000001409FD720: mov     r15, [rsp+0CE0h+var_C88]
 * 00000001409FD725: mov     eax, 40h ; '@'
 * 00000001409FD72A: add     [rsi+828h], eax
 * 00000001409FD730: mov     r11, [rbp+0BE0h+var_C60]
 * 00000001409FD734: mov     r12, [rbp+0BE0h+var_C08]
 * 00000001409FD738: mov     eax, 0Ch
 * 00000001409FD73D: inc     r15
 * 00000001409FD740: add     r11, rax
 * 00000001409FD743: mov     [rsp+0CE0h+var_C88], r15
 * 00000001409FD748: add     rdi, rax
 * 00000001409FD74B: mov     [rbp+0BE0h+var_C60], r11
 * 00000001409FD74F: cmp     r11, [rbp+0BE0h+var_C20]
 * 00000001409FD753: jnb     short loc_1409FD765
 * 00000001409FD755: mov     eax, [r12]
 * 00000001409FD759: cmp     [rsi+828h], eax
 * 00000001409FD75F: jl      loc_1409FD490
 * 00000001409FD765: sub     rdi, [rbp+0BE0h+var_C10]
 * 00000001409FD769: mov     rax, 2AAAAAAAAAAAAAABh
 * 00000001409FD773: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FD77A: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FD77E: imul    rdi
 * 00000001409FD781: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FD788: sar     rdx, 1
 * 00000001409FD78B: mov     rax, rdx
 * 00000001409FD78E: shr     rax, 3Fh
 * 00000001409FD792: add     rdx, rax
 * 00000001409FD795: mov     r8d, edx
 * 00000001409FD798: mov     [rsi+824h], edx
 * 00000001409FD79E: mov     rdx, [rbp+0BE0h+var_C50]
 * 00000001409FD7A2: cmp     r8d, r10d
 * 00000001409FD7A5: jb      loc_1409F6318
 * 00000001409FD7AB: mov     eax, [rsi+82Ch]
 * 00000001409FD7B1: xor     r15d, r15d
 * 00000001409FD7B4: cmp     [rsi+828h], eax
 * 00000001409FD7BA: jge     loc_1409F631B
 * 00000001409FD7C0: test    r9d, r9d
 * 00000001409FD7C3: jz      short loc_1409FD7CB
 * 00000001409FD7C5: sub     r8d, r9d
 * 00000001409FD7C8: inc     r8d
 * 00000001409FD7CB: mov     eax, r8d
 * 00000001409FD7CE: lea     rcx, [rax+rax*2]
 * 00000001409FD7D2: lea     rcx, [rdx+rcx*8]
 * 00000001409FD7D6: mov     [rbp+0BE0h+var_C60], rcx
 * 00000001409FD7DA: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FD7DF: lea     rdx, [rcx+8]
 * 00000001409FD7E3: mov     eax, 2
 * 00000001409FD7E8: mov     [rbp+0BE0h+arg_8], rdx
 * 00000001409FD7EF: mov     r12d, eax
 * 00000001409FD7F2: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FD7F7: lea     eax, [r12-1]
 * 00000001409FD7FC: lea     ecx, [rax+0Bh]
 * 00000001409FD7FF: cmp     [rdx], r15d
 * 00000001409FD802: jl      loc_1409FDA16
 * 00000001409FD808: mov     eax, [rdx-8]
 * 00000001409FD80B: mov     r8d, [rdx-4]
 * 00000001409FD80F: mov     r13d, eax
 * 00000001409FD812: add     r13, [rdi+18h]
 * 00000001409FD816: sub     r8d, eax
 * 00000001409FD819: add     [rsi+828h], r8d
 * 00000001409FD820: mov     r9, r13
 * 00000001409FD823: mov     r10d, [rsi+814h]
 * 00000001409FD82A: mov     rax, r13
 * 00000001409FD82D: mov     r14, [rsi+818h]
 * 00000001409FD834: lea     rcx, [r8+r13]
 * 00000001409FD838: mov     r15d, r8d
 * 00000001409FD83B: mov     [rbp+0BE0h+var_C50], r13
 * 00000001409FD83F: mov     [rsp+0CE0h+var_C70], r15
 * 00000001409FD844: cmp     r13, rcx
 * 00000001409FD847: jnb     short loc_1409FD85A
 * 00000001409FD849: mov     r11d, 40h ; '@'
 * 00000001409FD84F: prefetchnta byte ptr [rax]
 * 00000001409FD852: add     rax, r11
 * 00000001409FD855: cmp     rax, rcx
 * 00000001409FD858: jb      short loc_1409FD84F
 * 00000001409FD85A: mov     r11d, r8d
 * 00000001409FD85D: mov     rbx, r14
 * 00000001409FD860: shr     r11d, 7
 * 00000001409FD864: test    r11d, r11d
 * 00000001409FD867: jz      short loc_1409FD8E5
 * 00000001409FD869: mov     esi, 0FFFFFFFFh
 * 00000001409FD86E: mov     r12d, 1
 * 00000001409FD874: mov     r15, 7010008004002001h
 * 00000001409FD87E: mov     eax, 8
 * 00000001409FD883: xor     rbx, [r9]
 * 00000001409FD886: mov     ecx, r10d
 * 00000001409FD889: rol     rbx, cl
 * 00000001409FD88C: xor     rbx, [r9+8]
 * 00000001409FD890: add     r9, 10h
 * 00000001409FD894: rol     rbx, cl
 * 00000001409FD897: sub     rax, r12
 * 00000001409FD89A: jnz     short loc_1409FD883
 * 00000001409FD89C: mov     rcx, r9
 * 00000001409FD89F: sub     rcx, r13
 * 00000001409FD8A2: xor     rcx, r14
 * 00000001409FD8A5: mov     rax, rcx
 * 00000001409FD8A8: rol     rax, 11h
 * 00000001409FD8AC: xor     rcx, rax
 * 00000001409FD8AF: mov     rax, r15
 * 00000001409FD8B2: mul     rcx
 * 00000001409FD8B5: xor     r10d, edx
 * 00000001409FD8B8: mov     [rbp+0BE0h+var_620], rdx
 * 00000001409FD8BF: xor     r10d, eax
 * 00000001409FD8C2: and     r10d, 3Fh
 * 00000001409FD8C6: cmovz   r10d, r12d
 * 00000001409FD8CA: add     r11d, esi
 * 00000001409FD8CD: jnz     short loc_1409FD87E
 * 00000001409FD8CF: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FD8D4: mov     r15, [rsp+0CE0h+var_C70]
 * 00000001409FD8D9: mov     rdx, [rbp+0BE0h+arg_8]
 * 00000001409FD8E0: mov     r12, [rsp+0CE0h+var_C88]
 * 00000001409FD8E5: and     r8d, 7Fh
 * 00000001409FD8E9: mov     r14d, 1
 * 00000001409FD8EF: cmp     r8d, 8
 * 00000001409FD8F3: jb      short loc_1409FD912
 * 00000001409FD8F5: mov     eax, r8d
 * 00000001409FD8F8: shr     rax, 3
 * 00000001409FD8FC: xor     rbx, [r9]
 * 00000001409FD8FF: mov     ecx, r10d
 * 00000001409FD902: rol     rbx, cl
 * 00000001409FD905: add     r9, 8
 * 00000001409FD909: add     r8d, 0FFFFFFF8h
 * 00000001409FD90D: sub     rax, r14
 * 00000001409FD910: jnz     short loc_1409FD8FC
 * 00000001409FD912: test    r8d, r8d
 * 00000001409FD915: jz      short loc_1409FD932
 * 00000001409FD917: mov     r11d, 0FFFFFFFFh
 * 00000001409FD91D: movzx   eax, byte ptr [r9]
 * 00000001409FD921: mov     ecx, r10d
 * 00000001409FD924: xor     rbx, rax
 * 00000001409FD927: add     r9, r14
 * 00000001409FD92A: rol     rbx, cl
 * 00000001409FD92D: add     r8d, r11d
 * 00000001409FD930: jnz     short loc_1409FD91D
 * 00000001409FD932: mov     rax, rbx
 * 00000001409FD935: jmp     short loc_1409FD939
 * 00000001409FD937: xor     ebx, eax
 * 00000001409FD939: shr     rax, 1Fh
 * 00000001409FD93D: test    rax, rax
 * 00000001409FD940: jnz     short loc_1409FD937
 * 00000001409FD942: mov     ecx, [rdx]
 * 00000001409FD944: btr     ebx, 1Fh
 * 00000001409FD948: mov     eax, ecx
 * 00000001409FD94A: btr     eax, 1Fh
 * 00000001409FD94E: cmp     ebx, eax
 * 00000001409FD950: jz      loc_1409FDA0B
 * 00000001409FD956: test    r15, r15
 * 00000001409FD959: jz      loc_1409FDA7F
 * 00000001409FD95F: mov     eax, [rsi+994h]
 * 00000001409FD965: mov     r8d, 40h ; '@'
 * 00000001409FD96B: test    r8b, al
 * 00000001409FD96E: jz      loc_1409FDA7F
 * 00000001409FD974: mov     r12, cr8
 * 00000001409FD978: lea     eax, [r8-3Eh]
 * 00000001409FD97C: mov     cr8, rax
 * 00000001409FD980: mov     r14, r13
 * 00000001409FD983: lea     rax, [r13-1]
 * 00000001409FD987: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FD98E: add     rax, r15
 * 00000001409FD991: or      rax, 0FFFh
 * 00000001409FD997: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FD99C: lea     r13, [r14-1]
 * 00000001409FD9A0: movzx   r15d, r12b
 * 00000001409FD9A4: mov     rax, [rsi+468h]
 * 00000001409FD9AB: xor     edx, edx
 * 00000001409FD9AD: mov     rcx, r14
 * 00000001409FD9B0: call    KeGuardDispatchICall
 * 00000001409FD9B5: cmp     eax, 0C000022Dh
 * 00000001409FD9BA: jnz     short loc_1409FD9E0
 * 00000001409FD9BC: mov     eax, 1
 * 00000001409FD9C1: cmp     r12b, al
 * 00000001409FD9C4: ja      short loc_1409FD9E8
 * 00000001409FD9C6: movzx   r15d, r12b
 * 00000001409FD9CA: mov     cr8, r15
 * 00000001409FD9CE: mov     al, [r14]
 * 00000001409FD9D1: mov     rax, cr8
 * 00000001409FD9D5: mov     eax, 2
 * 00000001409FD9DA: mov     cr8, rax
 * 00000001409FD9DE: jmp     short loc_1409FD9A4
 * 00000001409FD9E0: test    eax, eax
 * 00000001409FD9E2: js      loc_1409FDA69
 * 00000001409FD9E8: mov     r11d, 1000h
 * 00000001409FD9EE: add     r14, r11
 * 00000001409FD9F1: add     r13, r11
 * 00000001409FD9F4: cmp     r13, [rsp+0CE0h+var_C70]
 * 00000001409FD9F9: jnz     short loc_1409FD9A0
 * 00000001409FD9FB: mov     cr8, r15
 * 00000001409FD9FF: mov     rdx, [rbp+0BE0h+arg_8]
 * 00000001409FDA06: mov     r12, [rsp+0CE0h+var_C88]
 * 00000001409FDA0B: xor     r15d, r15d
 * 00000001409FDA0E: mov     ecx, 0Ch
 * 00000001409FDA13: lea     eax, [rcx-0Bh]
 * 00000001409FDA16: add     rdx, rcx
 * 00000001409FDA19: sub     r12, rax
 * 00000001409FDA1C: mov     [rbp+0BE0h+arg_8], rdx
 * 00000001409FDA23: mov     [rsp+0CE0h+var_C88], r12
 * 00000001409FDA28: jnz     loc_1409FD7FF
 * 00000001409FDA2E: mov     rcx, [rbp+0BE0h+var_C60]
 * 00000001409FDA32: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FDA39: add     [rsi+824h], eax
 * 00000001409FDA3F: add     rcx, 18h
 * 00000001409FDA43: mov     [rbp+0BE0h+var_C60], rcx
 * 00000001409FDA47: cmp     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FDA4C: jz      loc_1409FD44D
 * 00000001409FDA52: mov     eax, [rsi+82Ch]
 * 00000001409FDA58: cmp     [rsi+828h], eax
 * 00000001409FDA5E: jl      loc_1409FD7DA
 * 00000001409FDA64: jmp     loc_1409F631B
 * 00000001409FDA69: mov     cr8, r15
 * 00000001409FDA6D: mov     rdx, [rbp+0BE0h+arg_8]
 * 00000001409FDA74: mov     r13, [rbp+0BE0h+var_C50]
 * 00000001409FDA78: mov     r12, [rsp+0CE0h+var_C88]
 * 00000001409FDA7D: mov     ecx, [rdx]
 * 00000001409FDA7F: mov     eax, ecx
 * 00000001409FDA81: xor     r15d, r15d
 * 00000001409FDA84: mov     ecx, [rsi+8F8h]
 * 00000001409FDA8A: btr     eax, 1Fh
 * 00000001409FDA8E: test    ecx, ecx
 * 00000001409FDA90: jnz     loc_1409FDA0E
 * 00000001409FDA96: mov     ecx, ebx
 * 00000001409FDA98: xor     rcx, rax
 * 00000001409FDA9B: mov     rax, [rsi+590h]
 * 00000001409FDAA2: mov     [rax+18h], rcx
 * 00000001409FDAA6: mov     ecx, [rsi+8F8h]
 * 00000001409FDAAC: test    ecx, ecx
 * 00000001409FDAAE: jnz     loc_1409FDA0E
 * 00000001409FDAB4: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FDABE: xor     edx, edx
 * 00000001409FDAC0: add     rax, rsi
 * 00000001409FDAC3: mov     [rsi+900h], rax
 * 00000001409FDACA: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FDAD4: add     rax, rdi
 * 00000001409FDAD7: mov     [rsi+908h], rax
 * 00000001409FDADE: movsxd  rax, dword ptr [rdi]
 * 00000001409FDAE1: mov     [rsi+910h], rax
 * 00000001409FDAE8: lea     eax, [rcx+1]
 * 00000001409FDAEB: mov     [rsi+918h], r13
 * 00000001409FDAF2: mov     rcx, rsi
 * 00000001409FDAF5: mov     [rsi+8F8h], eax
 * 00000001409FDAFB: call    $$b8
 * 00000001409FDB00: mov     rdx, [rbp+0BE0h+arg_8]
 * 00000001409FDB07: jmp     loc_1409FDA0E
 * 00000001409FDB0C: mov     r14, [r13+8]
 * 00000001409FDB10: mov     r8d, [r13+10h]
 * 00000001409FDB14: mov     r9, r14
 * 00000001409FDB17: add     [rsi+828h], r8d
 * 00000001409FDB1E: mov     rax, r14
 * 00000001409FDB21: mov     r10d, [rsi+814h]
 * 00000001409FDB28: mov     r15, [rsi+818h]
 * 00000001409FDB2F: lea     rcx, [r14+r8]
 * 00000001409FDB33: cmp     r14, rcx
 * 00000001409FDB36: jnb     short loc_1409FDB49
 * 00000001409FDB38: mov     r11d, 40h ; '@'
 * 00000001409FDB3E: prefetchnta byte ptr [rax]
 * 00000001409FDB41: add     rax, r11
 * 00000001409FDB44: cmp     rax, rcx
 * 00000001409FDB47: jb      short loc_1409FDB3E
 * 00000001409FDB49: mov     r11d, r8d
 * 00000001409FDB4C: mov     rbx, r15
 * 00000001409FDB4F: shr     r11d, 7
 * 00000001409FDB53: mov     r12d, 0FFFFFFFFh
 * 00000001409FDB59: test    r11d, r11d
 * 00000001409FDB5C: jz      short loc_1409FDBCA
 * 00000001409FDB5E: mov     rdi, 7010008004002001h
 * 00000001409FDB68: mov     eax, 8
 * 00000001409FDB6D: xor     rbx, [r9]
 * 00000001409FDB70: mov     ecx, r10d
 * 00000001409FDB73: rol     rbx, cl
 * 00000001409FDB76: xor     rbx, [r9+8]
 * 00000001409FDB7A: add     r9, 10h
 * 00000001409FDB7E: rol     rbx, cl
 * 00000001409FDB81: sub     rax, rdx
 * 00000001409FDB84: jnz     short loc_1409FDB6D
 * 00000001409FDB86: mov     rcx, r9
 * 00000001409FDB89: sub     rcx, r14
 * 00000001409FDB8C: xor     rcx, r15
 * 00000001409FDB8F: mov     rax, rcx
 * 00000001409FDB92: rol     rax, 11h
 * 00000001409FDB96: xor     rcx, rax
 * 00000001409FDB99: mov     rax, rdi
 * 00000001409FDB9C: mul     rcx
 * 00000001409FDB9F: xor     r10d, eax
 * 00000001409FDBA2: mov     [rbp+0BE0h+var_618], rdx
 * 00000001409FDBA9: xor     r10d, edx
 * 00000001409FDBAC: mov     edx, 1
 * 00000001409FDBB1: and     r10d, 3Fh
 * 00000001409FDBB5: cmovz   r10d, edx
 * 00000001409FDBB9: add     r11d, r12d
 * 00000001409FDBBC: jnz     short loc_1409FDB68
 * 00000001409FDBBE: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FDBC3: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FDBCA: and     r8d, 7Fh
 * 00000001409FDBCE: cmp     r8d, 8
 * 00000001409FDBD2: jb      short loc_1409FDBF1
 * 00000001409FDBD4: mov     eax, r8d
 * 00000001409FDBD7: shr     rax, 3
 * 00000001409FDBDB: xor     rbx, [r9]
 * 00000001409FDBDE: mov     ecx, r10d
 * 00000001409FDBE1: rol     rbx, cl
 * 00000001409FDBE4: add     r9, 8
 * 00000001409FDBE8: add     r8d, 0FFFFFFF8h
 * 00000001409FDBEC: sub     rax, rdx
 * 00000001409FDBEF: jnz     short loc_1409FDBDB
 * 00000001409FDBF1: xor     r15d, r15d
 * 00000001409FDBF4: test    r8d, r8d
 * 00000001409FDBF7: jz      short loc_1409FDC0E
 * 00000001409FDBF9: movzx   eax, byte ptr [r9]
 * 00000001409FDBFD: mov     ecx, r10d
 * 00000001409FDC00: xor     rbx, rax
 * 00000001409FDC03: add     r9, rdx
 * 00000001409FDC06: rol     rbx, cl
 * 00000001409FDC09: add     r8d, r12d
 * 00000001409FDC0C: jnz     short loc_1409FDBF9
 * 00000001409FDC0E: mov     rax, rbx
 * 00000001409FDC11: jmp     short loc_1409FDC15
 * 00000001409FDC13: xor     ebx, eax
 * 00000001409FDC15: shr     rax, 1Fh
 * 00000001409FDC19: test    rax, rax
 * 00000001409FDC1C: jnz     short loc_1409FDC13
 * 00000001409FDC1E: btr     ebx, 1Fh
 * 00000001409FDC22: mov     r12d, r15d
 * 00000001409FDC25: cmp     ebx, [r13+14h]
 * 00000001409FDC29: jz      loc_1409FDD14
 * 00000001409FDC2F: cmp     [r13+0], r15d
 * 00000001409FDC33: jnz     short loc_1409FDC3D
 * 00000001409FDC35: cmp     [r13+18h], r15d
 * 00000001409FDC39: cmovnz  r12d, edx
 * 00000001409FDC3D: mov     ecx, [r13+10h]
 * 00000001409FDC41: mov     rdx, [r13+8]
 * 00000001409FDC45: test    rcx, rcx
 * 00000001409FDC48: jz      loc_1409FDED4
 * 00000001409FDC4E: mov     eax, [rsi+994h]
 * 00000001409FDC54: mov     r8d, 40h ; '@'
 * 00000001409FDC5A: test    r8b, al
 * 00000001409FDC5D: jz      loc_1409FDED4
 * 00000001409FDC63: mov     r13, cr8
 * 00000001409FDC67: lea     eax, [r8-3Eh]
 * 00000001409FDC6B: mov     cr8, rax
 * 00000001409FDC6F: mov     r14, rdx
 * 00000001409FDC72: lea     rax, [rcx-1]
 * 00000001409FDC76: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FDC7D: add     rax, rdx
 * 00000001409FDC80: or      rax, 0FFFh
 * 00000001409FDC86: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FDC8B: lea     rax, [r14-1]
 * 00000001409FDC8F: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FDC96: movzx   r15d, r13b
 * 00000001409FDC9A: mov     rax, [rsi+468h]
 * 00000001409FDCA1: xor     edx, edx
 * 00000001409FDCA3: mov     rcx, r14
 * 00000001409FDCA6: call    KeGuardDispatchICall
 * 00000001409FDCAB: cmp     eax, 0C000022Dh
 * 00000001409FDCB0: jnz     short loc_1409FDCDF
 * 00000001409FDCB2: test    r12d, r12d
 * 00000001409FDCB5: jnz     loc_1409FDEC8
 * 00000001409FDCBB: lea     eax, [r12+1]
 * 00000001409FDCC0: cmp     r13b, al
 * 00000001409FDCC3: ja      short loc_1409FDCE7
 * 00000001409FDCC5: movzx   r15d, r13b
 * 00000001409FDCC9: mov     cr8, r15
 * 00000001409FDCCD: mov     al, [r14]
 * 00000001409FDCD0: mov     rax, cr8
 * 00000001409FDCD4: lea     eax, [r12+2]
 * 00000001409FDCD9: mov     cr8, rax
 * 00000001409FDCDD: jmp     short loc_1409FDC9A
 * 00000001409FDCDF: test    eax, eax
 * 00000001409FDCE1: js      loc_1409FDEC8
 * 00000001409FDCE7: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409FDCEE: mov     r11d, 1000h
 * 00000001409FDCF4: add     rax, r11
 * 00000001409FDCF7: add     r14, r11
 * 00000001409FDCFA: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FDD01: cmp     rax, [rsp+0CE0h+var_C70]
 * 00000001409FDD06: jnz     short loc_1409FDC96
 * 00000001409FDD08: mov     cr8, r15
 * 00000001409FDD0C: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FDD11: xor     r15d, r15d
 * 00000001409FDD14: mov     r14d, 1
 * 00000001409FDD1A: mov     eax, [r13+10h]
 * 00000001409FDD1E: mov     r12, [r13+8]
 * 00000001409FDD22: shr     eax, 4
 * 00000001409FDD25: mov     [rbp+0BE0h+arg_8], r12
 * 00000001409FDD2C: test    eax, eax
 * 00000001409FDD2E: jz      loc_1409F631B
 * 00000001409FDD34: mov     edi, eax
 * 00000001409FDD36: mov     [rsp+0CE0h+var_C88], rdi
 * 00000001409FDD3B: mov     rax, [r12]
 * 00000001409FDD3F: lea     rdx, [rbp+0BE0h+var_988]
 * 00000001409FDD46: mov     rbx, r13
 * 00000001409FDD49: mov     r13d, r14d
 * 00000001409FDD4C: mov     r15, [rax]
 * 00000001409FDD4F: xor     eax, eax
 * 00000001409FDD51: mov     [rbp+0BE0h+var_988], rax
 * 00000001409FDD58: mov     rcx, r15
 * 00000001409FDD5B: mov     rax, [rsi+310h]
 * 00000001409FDD62: call    KeGuardDispatchICall
 * 00000001409FDD67: mov     r14, rax
 * 00000001409FDD6A: test    rax, rax
 * 00000001409FDD6D: jz      loc_1409FDE9F
 * 00000001409FDD73: mov     edi, 6
 * 00000001409FDD78: xor     r12d, r12d
 * 00000001409FDD7B: mov     rax, [rsi+208h]
 * 00000001409FDD82: lea     rdx, [rbp+0BE0h+var_610]
 * 00000001409FDD89: mov     rcx, r14
 * 00000001409FDD8C: inc     r13d
 * 00000001409FDD8F: call    KeGuardDispatchICall
 * 00000001409FDD94: test    rax, rax
 * 00000001409FDD97: jnz     loc_1409FDE71
 * 00000001409FDD9D: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FDDA7: lea     r9d, [rax+1]
 * 00000001409FDDAB: jz      short loc_1409FDDF3
 * 00000001409FDDAD: mov     rcx, [rsi+0A80h]
 * 00000001409FDDB4: lea     edx, [rax+30h]
 * 00000001409FDDB7: mov     r8, rdi
 * 00000001409FDDBA: mov     rax, [rbx]
 * 00000001409FDDBD: add     edx, 0FFFFFFF8h
 * 00000001409FDDC0: mov     [rcx], rax
 * 00000001409FDDC3: add     rbx, 8
 * 00000001409FDDC7: add     rcx, 8
 * 00000001409FDDCB: sub     r8, r9
 * 00000001409FDDCE: jnz     short loc_1409FDDBA
 * 00000001409FDDD0: test    edx, edx
 * 00000001409FDDD2: jz      short loc_1409FDDEC
 * 00000001409FDDD4: mov     r12d, 0FFFFFFFFh
 * 00000001409FDDDA: mov     al, [rbx]
 * 00000001409FDDDC: add     rbx, r9
 * 00000001409FDDDF: mov     [rcx], al
 * 00000001409FDDE1: add     rcx, r9
 * 00000001409FDDE4: add     edx, r12d
 * 00000001409FDDE7: jnz     short loc_1409FDDDA
 * 00000001409FDDE9: xor     r12d, r12d
 * 00000001409FDDEC: mov     rbx, [rsi+0A80h]
 * 00000001409FDDF3: mov     [rbx+18h], r14
 * 00000001409FDDF7: mov     [rbx+20h], r15
 * 00000001409FDDFB: mov     rax, [rsi+590h]
 * 00000001409FDE02: mov     [rax], rbx
 * 00000001409FDE05: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FDE0C: mov     rax, [rsi+590h]
 * 00000001409FDE13: mov     [rax+8], r14
 * 00000001409FDE17: mov     dword ptr [rax+14h], 1000h
 * 00000001409FDE1E: cmp     [rsi+8F8h], r12d
 * 00000001409FDE25: jnz     short loc_1409FDE71
 * 00000001409FDE27: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FDE31: xor     edx, edx
 * 00000001409FDE33: add     rax, rsi
 * 00000001409FDE36: mov     rcx, rsi
 * 00000001409FDE39: mov     [rsi+900h], rax
 * 00000001409FDE40: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FDE4A: add     rax, rbx
 * 00000001409FDE4D: mov     [rsi+908h], rax
 * 00000001409FDE54: movsxd  rax, dword ptr [rbx]
 * 00000001409FDE57: mov     [rsi+910h], rax
 * 00000001409FDE5E: mov     [rsi+918h], rdi
 * 00000001409FDE65: mov     [rsi+8F8h], r9d
 * 00000001409FDE6C: call    $$b8
 * 00000001409FDE71: mov     rax, [rsi+310h]
 * 00000001409FDE78: lea     rdx, [rbp+0BE0h+var_988]
 * 00000001409FDE7F: mov     rcx, r15
 * 00000001409FDE82: call    KeGuardDispatchICall
 * 00000001409FDE87: mov     r14, rax
 * 00000001409FDE8A: test    rax, rax
 * 00000001409FDE8D: jnz     loc_1409FDD7B
 * 00000001409FDE93: mov     r12, [rbp+0BE0h+arg_8]
 * 00000001409FDE9A: mov     rdi, [rsp+0CE0h+var_C88]
 * 00000001409FDE9F: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FDEA4: add     r12, 10h
 * 00000001409FDEA8: mov     r14d, 1
 * 00000001409FDEAE: mov     [rbp+0BE0h+arg_8], r12
 * 00000001409FDEB5: sub     rdi, r14
 * 00000001409FDEB8: mov     [rsp+0CE0h+var_C88], rdi
 * 00000001409FDEBD: jnz     loc_1409FDD3B
 * 00000001409FDEC3: jmp     loc_1409F647D
 * 00000001409FDEC8: mov     cr8, r15
 * 00000001409FDECC: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FDED1: xor     r15d, r15d
 * 00000001409FDED4: mov     eax, [rsi+8F8h]
 * 00000001409FDEDA: mov     edx, [r13+14h]
 * 00000001409FDEDE: test    eax, eax
 * 00000001409FDEE0: jnz     short loc_1409FDEF8
 * 00000001409FDEE2: mov     rax, [rsi+590h]
 * 00000001409FDEE9: mov     ecx, ebx
 * 00000001409FDEEB: xor     rcx, rdx
 * 00000001409FDEEE: mov     [rax+18h], rcx
 * 00000001409FDEF2: mov     eax, [rsi+8F8h]
 * 00000001409FDEF8: mov     rcx, [r13+8]
 * 00000001409FDEFC: mov     r14d, 1
 * 00000001409FDF02: test    eax, eax
 * 00000001409FDF04: jnz     loc_1409FDD1A
 * 00000001409FDF0A: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FDF14: xor     edx, edx
 * 00000001409FDF16: add     rax, rsi
 * 00000001409FDF19: mov     [rsi+900h], rax
 * 00000001409FDF20: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FDF2A: add     rax, r13
 * 00000001409FDF2D: mov     [rsi+908h], rax
 * 00000001409FDF34: movsxd  rax, dword ptr [r13+0]
 * 00000001409FDF38: mov     [rsi+910h], rax
 * 00000001409FDF3F: mov     [rsi+918h], rcx
 * 00000001409FDF46: mov     rcx, rsi
 * 00000001409FDF49: mov     [rsi+8F8h], r14d
 * 00000001409FDF50: call    $$b8
 * 00000001409FDF55: jmp     loc_1409FDD1A
 * 00000001409FDF5A: mov     eax, [rsi+994h]
 * 00000001409FDF60: mov     ecx, 2
 * 00000001409FDF65: test    cl, al
 * 00000001409FDF67: jnz     loc_1409F6318
 * 00000001409FDF6D: mov     rax, [rsi+428h]
 * 00000001409FDF74: call    KeGuardDispatchICall
 * 00000001409FDF79: xor     r15d, r15d
 * 00000001409FDF7C: test    al, al
 * 00000001409FDF7E: jz      loc_1409F631B
 * 00000001409FDF84: cmp     [rsi+8F8h], r15d
 * 00000001409FDF8B: jnz     loc_1409F631B
 * 00000001409FDF91: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FDF9B: add     rax, rsi
 * 00000001409FDF9E: mov     [rsi+900h], rax
 * 00000001409FDFA5: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FDFAF: add     rax, r13
 * 00000001409FDFB2: mov     [rsi+908h], rax
 * 00000001409FDFB9: movsxd  rax, dword ptr [r13+0]
 * 00000001409FDFBD: mov     [rsi+910h], rax
 * 00000001409FDFC4: mov     [rsi+918h], r15
 * 00000001409FDFCB: jmp     loc_1409F66E7
 * 00000001409FDFD0: cmp     r10d, 26h ; '&'
 * 00000001409FDFD4: jz      loc_140A015C9
 * 00000001409FDFDA: jle     loc_140A00767
 * 00000001409FDFE0: cmp     r10d, 2Ah ; '*'
 * 00000001409FDFE4: jle     loc_140A0061F
 * 00000001409FDFEA: cmp     r10d, 2Bh ; '+'
 * 00000001409FDFEE: jz      loc_1409FF543
 * 00000001409FDFF4: cmp     r10d, 2Ch ; ','
 * 00000001409FDFF8: jz      loc_1409FE988
 * 00000001409FDFFE: cmp     r10d, 2Eh ; '.'
 * 00000001409FE002: jz      loc_1409FE892
 * 00000001409FE008: cmp     r10d, 2Fh ; '/'
 * 00000001409FE00C: jz      loc_1409FE686
 * 00000001409FE012: cmp     r10d, 30h ; '0'
 * 00000001409FE016: jnz     loc_140A00767
 * 00000001409FE01C: xor     r15d, r15d
 * 00000001409FE01F: cmp     [r13+10h], r15d
 * 00000001409FE023: jz      loc_1409F631B
 * 00000001409FE029: test    dword ptr [rsi+994h], 4000h
 * 00000001409FE033: jz      short loc_1409FE054
 * 00000001409FE035: mov     rcx, [rsi+4E0h]
 * 00000001409FE03C: cli
 * 00000001409FE03D: mov     eax, [rsi+990h]
 * 00000001409FE043: shr     eax, 0Ah
 * 00000001409FE046: and     eax, 1Fh
 * 00000001409FE049: lock bts [rcx], eax
 * 00000001409FE04D: jnb     short loc_1409FE054
 * 00000001409FE04F: sti
 * 00000001409FE050: pause
 * 00000001409FE052: jmp     short loc_1409FE03C
 * 00000001409FE054: mov     eax, [r13+18h]
 * 00000001409FE058: test    dl, al
 * 00000001409FE05A: jnz     loc_1409FE2F3
 * 00000001409FE060: mov     r14, [r13+8]
 * 00000001409FE064: mov     r8d, [r13+10h]
 * 00000001409FE068: mov     r9, r14
 * 00000001409FE06B: add     [rsi+828h], r8d
 * 00000001409FE072: mov     rax, r14
 * 00000001409FE075: mov     r10d, [rsi+814h]
 * 00000001409FE07C: mov     r15, [rsi+818h]
 * 00000001409FE083: lea     rcx, [r14+r8]
 * 00000001409FE087: cmp     r14, rcx
 * 00000001409FE08A: jnb     short loc_1409FE09D
 * 00000001409FE08C: mov     r11d, 40h ; '@'
 * 00000001409FE092: prefetchnta byte ptr [rax]
 * 00000001409FE095: add     rax, r11
 * 00000001409FE098: cmp     rax, rcx
 * 00000001409FE09B: jb      short loc_1409FE092
 * 00000001409FE09D: mov     r11d, r8d
 * 00000001409FE0A0: mov     rbx, r15
 * 00000001409FE0A3: shr     r11d, 7
 * 00000001409FE0A7: mov     r12d, 0FFFFFFFFh
 * 00000001409FE0AD: test    r11d, r11d
 * 00000001409FE0B0: jz      short loc_1409FE11E
 * 00000001409FE0B2: mov     rdi, 7010008004002001h
 * 00000001409FE0BC: mov     eax, 8
 * 00000001409FE0C1: xor     rbx, [r9]
 * 00000001409FE0C4: mov     ecx, r10d
 * 00000001409FE0C7: rol     rbx, cl
 * 00000001409FE0CA: xor     rbx, [r9+8]
 * 00000001409FE0CE: add     r9, 10h
 * 00000001409FE0D2: rol     rbx, cl
 * 00000001409FE0D5: sub     rax, rdx
 * 00000001409FE0D8: jnz     short loc_1409FE0C1
 * 00000001409FE0DA: mov     rcx, r9
 * 00000001409FE0DD: sub     rcx, r14
 * 00000001409FE0E0: xor     rcx, r15
 * 00000001409FE0E3: mov     rax, rcx
 * 00000001409FE0E6: rol     rax, 11h
 * 00000001409FE0EA: xor     rcx, rax
 * 00000001409FE0ED: mov     rax, rdi
 * 00000001409FE0F0: mul     rcx
 * 00000001409FE0F3: xor     r10d, eax
 * 00000001409FE0F6: mov     [rbp+0BE0h+var_608], rdx
 * 00000001409FE0FD: xor     r10d, edx
 * 00000001409FE100: mov     edx, 1
 * 00000001409FE105: and     r10d, 3Fh
 * 00000001409FE109: cmovz   r10d, edx
 * 00000001409FE10D: add     r11d, r12d
 * 00000001409FE110: jnz     short loc_1409FE0BC
 * 00000001409FE112: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FE117: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FE11E: and     r8d, 7Fh
 * 00000001409FE122: cmp     r8d, 8
 * 00000001409FE126: jb      short loc_1409FE145
 * 00000001409FE128: mov     eax, r8d
 * 00000001409FE12B: shr     rax, 3
 * 00000001409FE12F: xor     rbx, [r9]
 * 00000001409FE132: mov     ecx, r10d
 * 00000001409FE135: rol     rbx, cl
 * 00000001409FE138: add     r9, 8
 * 00000001409FE13C: add     r8d, 0FFFFFFF8h
 * 00000001409FE140: sub     rax, rdx
 * 00000001409FE143: jnz     short loc_1409FE12F
 * 00000001409FE145: xor     r15d, r15d
 * 00000001409FE148: test    r8d, r8d
 * 00000001409FE14B: jz      short loc_1409FE162
 * 00000001409FE14D: movzx   eax, byte ptr [r9]
 * 00000001409FE151: mov     ecx, r10d
 * 00000001409FE154: xor     rbx, rax
 * 00000001409FE157: add     r9, rdx
 * 00000001409FE15A: rol     rbx, cl
 * 00000001409FE15D: add     r8d, r12d
 * 00000001409FE160: jnz     short loc_1409FE14D
 * 00000001409FE162: mov     rax, rbx
 * 00000001409FE165: jmp     short loc_1409FE169
 * 00000001409FE167: xor     ebx, eax
 * 00000001409FE169: shr     rax, 1Fh
 * 00000001409FE16D: test    rax, rax
 * 00000001409FE170: jnz     short loc_1409FE167
 * 00000001409FE172: mov     r8, [rsp+0CE0h+var_C90]
 * 00000001409FE177: btr     ebx, 1Fh
 * 00000001409FE17B: mov     r13d, r15d
 * 00000001409FE17E: cmp     ebx, [r8+14h]
 * 00000001409FE182: jz      loc_1409FE64C
 * 00000001409FE188: cmp     [r8], r15d
 * 00000001409FE18B: jnz     short loc_1409FE195
 * 00000001409FE18D: cmp     [r8+18h], r15d
 * 00000001409FE191: cmovnz  r13d, edx
 * 00000001409FE195: mov     ecx, [r8+10h]
 * 00000001409FE199: mov     rdx, [r8+8]
 * 00000001409FE19D: test    rcx, rcx
 * 00000001409FE1A0: jz      loc_1409FE26E
 * 00000001409FE1A6: mov     eax, [rsi+994h]
 * 00000001409FE1AC: mov     r9d, 40h ; '@'
 * 00000001409FE1B2: test    r9b, al
 * 00000001409FE1B5: jz      loc_1409FE26E
 * 00000001409FE1BB: mov     r12, cr8
 * 00000001409FE1BF: lea     eax, [r9-3Eh]
 * 00000001409FE1C3: mov     cr8, rax
 * 00000001409FE1C7: mov     r14, rdx
 * 00000001409FE1CA: lea     rax, [rcx-1]
 * 00000001409FE1CE: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FE1D5: add     rax, rdx
 * 00000001409FE1D8: or      rax, 0FFFh
 * 00000001409FE1DE: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FE1E3: lea     rax, [r14-1]
 * 00000001409FE1E7: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FE1EE: movzx   r15d, r12b
 * 00000001409FE1F2: mov     rax, [rsi+468h]
 * 00000001409FE1F9: xor     edx, edx
 * 00000001409FE1FB: mov     rcx, r14
 * 00000001409FE1FE: call    KeGuardDispatchICall
 * 00000001409FE203: cmp     eax, 0C000022Dh
 * 00000001409FE208: jnz     short loc_1409FE231
 * 00000001409FE20A: test    r13d, r13d
 * 00000001409FE20D: jnz     short loc_1409FE262
 * 00000001409FE20F: lea     eax, [r13+1]
 * 00000001409FE213: cmp     r12b, al
 * 00000001409FE216: ja      short loc_1409FE235
 * 00000001409FE218: movzx   r15d, r12b
 * 00000001409FE21C: mov     cr8, r15
 * 00000001409FE220: mov     al, [r14]
 * 00000001409FE223: mov     rax, cr8
 * 00000001409FE227: lea     eax, [r13+2]
 * 00000001409FE22B: mov     cr8, rax
 * 00000001409FE22F: jmp     short loc_1409FE1F2
 * 00000001409FE231: test    eax, eax
 * 00000001409FE233: js      short loc_1409FE262
 * 00000001409FE235: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409FE23C: mov     r11d, 1000h
 * 00000001409FE242: add     rax, r11
 * 00000001409FE245: add     r14, r11
 * 00000001409FE248: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FE24F: cmp     rax, [rsp+0CE0h+var_C70]
 * 00000001409FE254: jnz     short loc_1409FE1EE
 * 00000001409FE256: mov     cr8, r15
 * 00000001409FE25A: xor     r15d, r15d
 * 00000001409FE25D: jmp     loc_1409FE64C
 * 00000001409FE262: mov     cr8, r15
 * 00000001409FE266: mov     r8, [rsp+0CE0h+var_C90]
 * 00000001409FE26B: xor     r15d, r15d
 * 00000001409FE26E: mov     eax, [rsi+8F8h]
 * 00000001409FE274: mov     edx, [r8+14h]
 * 00000001409FE278: test    eax, eax
 * 00000001409FE27A: jnz     short loc_1409FE292
 * 00000001409FE27C: mov     rax, [rsi+590h]
 * 00000001409FE283: mov     ecx, ebx
 * 00000001409FE285: xor     rcx, rdx
 * 00000001409FE288: mov     [rax+18h], rcx
 * 00000001409FE28C: mov     eax, [rsi+8F8h]
 * 00000001409FE292: mov     rcx, [r8+8]
 * 00000001409FE296: test    eax, eax
 * 00000001409FE298: jnz     loc_1409FE64C
 * 00000001409FE29E: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FE2A8: add     rax, rsi
 * 00000001409FE2AB: mov     [rsi+900h], rax
 * 00000001409FE2B2: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FE2BC: add     rax, r8
 * 00000001409FE2BF: mov     [rsi+908h], rax
 * 00000001409FE2C6: movsxd  rax, dword ptr [r8]
 * 00000001409FE2C9: mov     [rsi+910h], rax
 * 00000001409FE2D0: mov     r12d, 1
 * 00000001409FE2D6: mov     [rsi+918h], rcx
 * 00000001409FE2DD: xor     edx, edx
 * 00000001409FE2DF: mov     rcx, rsi
 * 00000001409FE2E2: mov     [rsi+8F8h], r12d
 * 00000001409FE2E9: call    $$b8
 * 00000001409FE2EE: jmp     loc_1409FE652
 * 00000001409FE2F3: cmp     [rsi+980h], r15
 * 00000001409FE2FA: jz      loc_1409FE645
 * 00000001409FE300: mov     edx, [rsi+994h]
 * 00000001409FE306: mov     ecx, edx
 * 00000001409FE308: cmp     [rsi+824h], r15d
 * 00000001409FE30F: jnz     short loc_1409FE323
 * 00000001409FE311: shl     ecx, 3
 * 00000001409FE314: xor     ecx, edx
 * 00000001409FE316: and     ecx, 20h
 * 00000001409FE319: xor     ecx, edx
 * 00000001409FE31B: mov     [rsi+994h], ecx
 * 00000001409FE321: jmp     short loc_1409FE332
 * 00000001409FE323: mov     eax, edx
 * 00000001409FE325: shr     eax, 3
 * 00000001409FE328: xor     eax, edx
 * 00000001409FE32A: test    al, 4
 * 00000001409FE32C: jnz     loc_1409FE645
 * 00000001409FE332: test    cl, 4
 * 00000001409FE335: jz      loc_1409FE3FE
 * 00000001409FE33B: mov     ecx, [r13+8]
 * 00000001409FE33F: mov     r14d, [r13+10h]
 * 00000001409FE343: and     ecx, 0FFFh
 * 00000001409FE349: mov     rbx, [r13+8]
 * 00000001409FE34D: add     r14, 0FFFh
 * 00000001409FE354: add     r14, rcx
 * 00000001409FE357: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001409FE35E: shr     r14, 0Ch
 * 00000001409FE362: test    r14, r14
 * 00000001409FE365: jz      loc_1409FE64C
 * 00000001409FE36B: mov     rdi, 0B3B74BDEE4453415h
 * 00000001409FE375: mov     r12d, 1
 * 00000001409FE37B: mov     rax, [rsi+2B0h]
 * 00000001409FE382: mov     rcx, rbx
 * 00000001409FE385: sub     r14, r12
 * 00000001409FE388: call    KeGuardDispatchICall
 * 00000001409FE38D: test    al, al
 * 00000001409FE38F: jz      short loc_1409FE3DC
 * 00000001409FE391: cmp     [rsi+8F8h], r15d
 * 00000001409FE398: jnz     short loc_1409FE3DC
 * 00000001409FE39A: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FE3A4: xor     edx, edx
 * 00000001409FE3A6: add     rax, rsi
 * 00000001409FE3A9: mov     rcx, rsi
 * 00000001409FE3AC: mov     [rsi+900h], rax
 * 00000001409FE3B3: lea     rax, [rdi+r13]
 * 00000001409FE3B7: mov     [rsi+908h], rax
 * 00000001409FE3BE: movsxd  rax, dword ptr [r13+0]
 * 00000001409FE3C2: mov     [rsi+910h], rax
 * 00000001409FE3C9: mov     [rsi+918h], rbx
 * 00000001409FE3D0: mov     [rsi+8F8h], r12d
 * 00000001409FE3D7: call    $$b8
 * 00000001409FE3DC: add     dword ptr [rsi+828h], 100h
 * 00000001409FE3E6: add     rbx, 1000h
 * 00000001409FE3ED: test    r14, r14
 * 00000001409FE3F0: jnz     short loc_1409FE37B
 * 00000001409FE3F2: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FE3F9: jmp     loc_1409FE652
 * 00000001409FE3FE: mov     r14, [r13+8]
 * 00000001409FE402: mov     r8d, [r13+10h]
 * 00000001409FE406: mov     r9, r14
 * 00000001409FE409: add     [rsi+828h], r8d
 * 00000001409FE410: mov     rax, r14
 * 00000001409FE413: mov     r10d, [rsi+814h]
 * 00000001409FE41A: mov     r15, [rsi+818h]
 * 00000001409FE421: lea     rcx, [r14+r8]
 * 00000001409FE425: cmp     r14, rcx
 * 00000001409FE428: jnb     short loc_1409FE43A
 * 00000001409FE42A: mov     edx, 40h ; '@'
 * 00000001409FE42F: prefetchnta byte ptr [rax]
 * 00000001409FE432: add     rax, rdx
 * 00000001409FE435: cmp     rax, rcx
 * 00000001409FE438: jb      short loc_1409FE42F
 * 00000001409FE43A: mov     r11d, r8d
 * 00000001409FE43D: mov     rbx, r15
 * 00000001409FE440: shr     r11d, 7
 * 00000001409FE444: mov     r12d, 1
 * 00000001409FE44A: test    r11d, r11d
 * 00000001409FE44D: jz      short loc_1409FE4BD
 * 00000001409FE44F: mov     rdi, 7010008004002001h
 * 00000001409FE459: mov     eax, 8
 * 00000001409FE45E: xor     rbx, [r9]
 * 00000001409FE461: mov     ecx, r10d
 * 00000001409FE464: rol     rbx, cl
 * 00000001409FE467: xor     rbx, [r9+8]
 * 00000001409FE46B: add     r9, 10h
 * 00000001409FE46F: rol     rbx, cl
 * 00000001409FE472: sub     rax, r12
 * 00000001409FE475: jnz     short loc_1409FE45E
 * 00000001409FE477: mov     rcx, r9
 * 00000001409FE47A: sub     rcx, r14
 * 00000001409FE47D: xor     rcx, r15
 * 00000001409FE480: mov     rax, rcx
 * 00000001409FE483: rol     rax, 11h
 * 00000001409FE487: xor     rcx, rax
 * 00000001409FE48A: mov     rax, rdi
 * 00000001409FE48D: mul     rcx
 * 00000001409FE490: xor     r10d, eax
 * 00000001409FE493: mov     [rbp+0BE0h+var_600], rdx
 * 00000001409FE49A: xor     r10d, edx
 * 00000001409FE49D: mov     edx, 0FFFFFFFFh
 * 00000001409FE4A2: and     r10d, 3Fh
 * 00000001409FE4A6: cmovz   r10d, r12d
 * 00000001409FE4AA: add     r11d, edx
 * 00000001409FE4AD: jnz     short loc_1409FE459
 * 00000001409FE4AF: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FE4B4: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FE4BB: jmp     short loc_1409FE4C2
 * 00000001409FE4BD: mov     edx, 0FFFFFFFFh
 * 00000001409FE4C2: and     r8d, 7Fh
 * 00000001409FE4C6: cmp     r8d, 8
 * 00000001409FE4CA: jb      short loc_1409FE4E9
 * 00000001409FE4CC: mov     eax, r8d
 * 00000001409FE4CF: shr     rax, 3
 * 00000001409FE4D3: xor     rbx, [r9]
 * 00000001409FE4D6: mov     ecx, r10d
 * 00000001409FE4D9: rol     rbx, cl
 * 00000001409FE4DC: add     r9, 8
 * 00000001409FE4E0: add     r8d, 0FFFFFFF8h
 * 00000001409FE4E4: sub     rax, r12
 * 00000001409FE4E7: jnz     short loc_1409FE4D3
 * 00000001409FE4E9: xor     r15d, r15d
 * 00000001409FE4EC: test    r8d, r8d
 * 00000001409FE4EF: jz      short loc_1409FE506
 * 00000001409FE4F1: movzx   eax, byte ptr [r9]
 * 00000001409FE4F5: mov     ecx, r10d
 * 00000001409FE4F8: xor     rbx, rax
 * 00000001409FE4FB: add     r9, r12
 * 00000001409FE4FE: rol     rbx, cl
 * 00000001409FE501: add     r8d, edx
 * 00000001409FE504: jnz     short loc_1409FE4F1
 * 00000001409FE506: mov     rax, rbx
 * 00000001409FE509: jmp     short loc_1409FE50D
 * 00000001409FE50B: xor     ebx, eax
 * 00000001409FE50D: shr     rax, 1Fh
 * 00000001409FE511: test    rax, rax
 * 00000001409FE514: jnz     short loc_1409FE50B
 * 00000001409FE516: mov     r8d, [r13+14h]
 * 00000001409FE51A: btr     ebx, 1Fh
 * 00000001409FE51E: cmp     ebx, r8d
 * 00000001409FE521: jz      loc_1409FE64C
 * 00000001409FE527: mov     ecx, [r13+10h]
 * 00000001409FE52B: mov     rdx, [r13+8]
 * 00000001409FE52F: test    rcx, rcx
 * 00000001409FE532: jz      loc_1409FE5E9
 * 00000001409FE538: mov     eax, [rsi+994h]
 * 00000001409FE53E: mov     r9d, 40h ; '@'
 * 00000001409FE544: test    r9b, al
 * 00000001409FE547: jz      loc_1409FE5E9
 * 00000001409FE54D: mov     r12, cr8
 * 00000001409FE551: lea     eax, [r9-3Eh]
 * 00000001409FE555: mov     cr8, rax
 * 00000001409FE559: mov     r14, rdx
 * 00000001409FE55C: lea     rax, [rcx-1]
 * 00000001409FE560: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FE567: add     rax, rdx
 * 00000001409FE56A: or      rax, 0FFFh
 * 00000001409FE570: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FE577: lea     r13, [r14-1]
 * 00000001409FE57B: movzx   r15d, r12b
 * 00000001409FE57F: mov     rax, [rsi+468h]
 * 00000001409FE586: xor     edx, edx
 * 00000001409FE588: mov     rcx, r14
 * 00000001409FE58B: call    KeGuardDispatchICall
 * 00000001409FE590: cmp     eax, 0C000022Dh
 * 00000001409FE595: jnz     short loc_1409FE5BB
 * 00000001409FE597: mov     eax, 1
 * 00000001409FE59C: cmp     r12b, al
 * 00000001409FE59F: ja      short loc_1409FE5BF
 * 00000001409FE5A1: movzx   r15d, r12b
 * 00000001409FE5A5: mov     cr8, r15
 * 00000001409FE5A9: mov     al, [r14]
 * 00000001409FE5AC: mov     rax, cr8
 * 00000001409FE5B0: mov     eax, 2
 * 00000001409FE5B5: mov     cr8, rax
 * 00000001409FE5B9: jmp     short loc_1409FE57F
 * 00000001409FE5BB: test    eax, eax
 * 00000001409FE5BD: js      short loc_1409FE5D9
 * 00000001409FE5BF: mov     r11d, 1000h
 * 00000001409FE5C5: add     r14, r11
 * 00000001409FE5C8: add     r13, r11
 * 00000001409FE5CB: cmp     r13, [rbp+0BE0h+arg_8]
 * 00000001409FE5D2: jnz     short loc_1409FE57B
 * 00000001409FE5D4: jmp     loc_1409FE256
 * 00000001409FE5D9: mov     cr8, r15
 * 00000001409FE5DD: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FE5E2: xor     r15d, r15d
 * 00000001409FE5E5: mov     r8d, [r13+14h]
 * 00000001409FE5E9: mov     eax, [rsi+8F8h]
 * 00000001409FE5EF: test    eax, eax
 * 00000001409FE5F1: jnz     short loc_1409FE60C
 * 00000001409FE5F3: mov     eax, r8d
 * 00000001409FE5F6: mov     ecx, ebx
 * 00000001409FE5F8: xor     rcx, rax
 * 00000001409FE5FB: mov     rax, [rsi+590h]
 * 00000001409FE602: mov     [rax+18h], rcx
 * 00000001409FE606: mov     eax, [rsi+8F8h]
 * 00000001409FE60C: mov     rcx, [r13+8]
 * 00000001409FE610: test    eax, eax
 * 00000001409FE612: jnz     short loc_1409FE64C
 * 00000001409FE614: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FE61E: add     rax, rsi
 * 00000001409FE621: mov     [rsi+900h], rax
 * 00000001409FE628: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FE632: add     rax, r13
 * 00000001409FE635: mov     [rsi+908h], rax
 * 00000001409FE63C: movsxd  rax, dword ptr [r13+0]
 * 00000001409FE640: jmp     loc_1409FE2C9
 * 00000001409FE645: mov     [rsi+824h], r15d
 * 00000001409FE64C: mov     r12d, 1
 * 00000001409FE652: test    dword ptr [rsi+994h], 4000h
 * 00000001409FE65C: jz      loc_1409F631B
 * 00000001409FE662: mov     ecx, [rsi+990h]
 * 00000001409FE668: mov     edx, r12d
 * 00000001409FE66B: mov     r8, [rsi+4E0h]
 * 00000001409FE672: shr     ecx, 0Ah
 * 00000001409FE675: and     ecx, 1Fh
 * 00000001409FE678: shl     edx, cl
 * 00000001409FE67A: not     edx
 * 00000001409FE67C: lock and [r8], edx
 * 00000001409FE680: sti
 * 00000001409FE681: jmp     loc_1409F631B
 * 00000001409FE686: mov     rcx, gs:20h
 * 00000001409FE68F: mov     rax, [rsi+648h]
 * 00000001409FE696: mov     rcx, [rax+rcx]
 * 00000001409FE69A: mov     rax, [rsi+688h]
 * 00000001409FE6A1: add     rcx, [rsi+6A8h]
 * 00000001409FE6A8: mov     rcx, [rcx+rax]
 * 00000001409FE6AC: mov     [rbp+0BE0h+var_BC0], rcx
 * 00000001409FE6B0: mov     rax, [rsi+490h]
 * 00000001409FE6B7: call    KeGuardDispatchICall
 * 00000001409FE6BC: mov     r9d, 0FFFFFFFFh
 * 00000001409FE6C2: xor     r15d, r15d
 * 00000001409FE6C5: mov     r14, rax
 * 00000001409FE6C8: cmp     rax, r9
 * 00000001409FE6CB: jnz     loc_1409FE802
 * 00000001409FE6D1: mov     [rbp+0BE0h+var_BC0], r15
 * 00000001409FE6D5: mov     rcx, [rsi+988h]
 * 00000001409FE6DC: test    rcx, rcx
 * 00000001409FE6DF: jz      short loc_1409FE704
 * 00000001409FE6E1: mov     rax, [rsi+480h]
 * 00000001409FE6E8: lea     rdx, [rbp+0BE0h+var_BC0]
 * 00000001409FE6EC: call    KeGuardDispatchICall
 * 00000001409FE6F1: mov     rcx, [rbp+0BE0h+var_BC0]
 * 00000001409FE6F5: test    eax, eax
 * 00000001409FE6F7: cmovs   rcx, r15
 * 00000001409FE6FB: mov     [rbp+0BE0h+var_BC0], rcx
 * 00000001409FE6FF: test    rcx, rcx
 * 00000001409FE702: jnz     short loc_1409FE716
 * 00000001409FE704: mov     rax, [rsi+3C0h]
 * 00000001409FE70B: xor     ecx, ecx
 * 00000001409FE70D: call    KeGuardDispatchICall
 * 00000001409FE712: mov     [rbp+0BE0h+var_BC0], rax
 * 00000001409FE716: mov     [rsi+988h], r15
 * 00000001409FE71D: mov     ebx, r15d
 * 00000001409FE720: mov     rcx, [rbp+0BE0h+var_BC0]
 * 00000001409FE724: test    rcx, rcx
 * 00000001409FE727: jz      loc_1409FE7F4
 * 00000001409FE72D: mov     r12d, 1
 * 00000001409FE733: mov     rax, [rsi+3A0h]
 * 00000001409FE73A: add     ebx, r12d
 * 00000001409FE73D: call    KeGuardDispatchICall
 * 00000001409FE742: test    eax, eax
 * 00000001409FE744: js      short loc_1409FE7A1
 * 00000001409FE746: mov     rax, [rsi+438h]
 * 00000001409FE74D: lea     rdx, [rbp+0BE0h+var_70]
 * 00000001409FE754: mov     rcx, [rbp+0BE0h+var_BC0]
 * 00000001409FE758: call    KeGuardDispatchICall
 * 00000001409FE75D: mov     rax, [rsi+490h]
 * 00000001409FE764: call    KeGuardDispatchICall
 * 00000001409FE769: mov     r14, rax
 * 00000001409FE76C: lea     rcx, [rbp+0BE0h+var_70]
 * 00000001409FE773: mov     rax, [rsi+440h]
 * 00000001409FE77A: call    KeGuardDispatchICall
 * 00000001409FE77F: mov     rax, [rsi+3A8h]
 * 00000001409FE786: mov     rcx, [rbp+0BE0h+var_BC0]
 * 00000001409FE78A: call    KeGuardDispatchICall
 * 00000001409FE78F: mov     eax, 0FFFFFFFFh
 * 00000001409FE794: cmp     r14, rax
 * 00000001409FE797: jnz     short loc_1409FE7C2
 * 00000001409FE799: cmp     ebx, 100h
 * 00000001409FE79F: ja      short loc_1409FE7C2
 * 00000001409FE7A1: mov     rax, [rsi+3C0h]
 * 00000001409FE7A8: mov     rcx, [rbp+0BE0h+var_BC0]
 * 00000001409FE7AC: call    KeGuardDispatchICall
 * 00000001409FE7B1: mov     [rbp+0BE0h+var_BC0], rax
 * 00000001409FE7B5: mov     rcx, rax
 * 00000001409FE7B8: test    rax, rax
 * 00000001409FE7BB: jz      short loc_1409FE7F4
 * 00000001409FE7BD: jmp     loc_1409FE733
 * 00000001409FE7C2: mov     rax, [rsi+488h]
 * 00000001409FE7C9: mov     rcx, [rbp+0BE0h+var_BC0]
 * 00000001409FE7CD: call    KeGuardDispatchICall
 * 00000001409FE7D2: mov     [rsi+988h], rax
 * 00000001409FE7D9: mov     rax, [rsi+1E0h]
 * 00000001409FE7E0: mov     rcx, [rbp+0BE0h+var_BC0]
 * 00000001409FE7E4: call    KeGuardDispatchICall
 * 00000001409FE7E9: mov     r9d, 0FFFFFFFFh
 * 00000001409FE7EF: cmp     r14, r9
 * 00000001409FE7F2: jnz     short loc_1409FE808
 * 00000001409FE7F4: shl     ebx, 0Ch
 * 00000001409FE7F7: add     [rsi+828h], ebx
 * 00000001409FE7FD: jmp     loc_1409F631B
 * 00000001409FE802: mov     r12d, 1
 * 00000001409FE808: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FE812: jz      short loc_1409FE857
 * 00000001409FE814: mov     rcx, [rsi+0A80h]
 * 00000001409FE81B: mov     edx, 30h ; '0'
 * 00000001409FE820: lea     r8d, [rdx-2Ah]
 * 00000001409FE824: mov     rax, [r13+0]
 * 00000001409FE828: add     edx, 0FFFFFFF8h
 * 00000001409FE82B: mov     [rcx], rax
 * 00000001409FE82E: add     r13, 8
 * 00000001409FE832: add     rcx, 8
 * 00000001409FE836: sub     r8, r12
 * 00000001409FE839: jnz     short loc_1409FE824
 * 00000001409FE83B: test    edx, edx
 * 00000001409FE83D: jz      short loc_1409FE850
 * 00000001409FE83F: mov     al, [r13+0]
 * 00000001409FE843: add     r13, r12
 * 00000001409FE846: mov     [rcx], al
 * 00000001409FE848: add     rcx, r12
 * 00000001409FE84B: add     edx, r9d
 * 00000001409FE84E: jnz     short loc_1409FE83F
 * 00000001409FE850: mov     r13, [rsi+0A80h]
 * 00000001409FE857: mov     [r13+18h], r14
 * 00000001409FE85B: mov     rcx, [rbp+0BE0h+var_BC0]
 * 00000001409FE85F: cmp     [rsi+8F8h], r15d
 * 00000001409FE866: jnz     loc_1409F631B
 * 00000001409FE86C: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FE876: add     rax, rsi
 * 00000001409FE879: mov     [rsi+900h], rax
 * 00000001409FE880: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FE88A: add     rax, r13
 * 00000001409FE88D: jmp     loc_1409FC1E4
 * 00000001409FE892: mov     eax, [rsi+830h]
 * 00000001409FE898: test    dl, al
 * 00000001409FE89A: jnz     loc_1409F6318
 * 00000001409FE8A0: mov     r15, [rsi+548h]
 * 00000001409FE8A7: xor     eax, eax
 * 00000001409FE8A9: mov     r14d, eax
 * 00000001409FE8AC: mov     rax, [rsi+178h]
 * 00000001409FE8B3: call    KeGuardDispatchICall
 * 00000001409FE8B8: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FE8C2: jnz     short loc_1409FE8DC
 * 00000001409FE8C4: mov     ecx, [rsi+950h]
 * 00000001409FE8CA: cmp     ecx, 7
 * 00000001409FE8CD: jnb     short loc_1409FE8DC
 * 00000001409FE8CF: mov     r12d, 1
 * 00000001409FE8D5: mov     ebx, r12d
 * 00000001409FE8D8: shl     bl, cl
 * 00000001409FE8DA: jmp     short loc_1409FE8F9
 * 00000001409FE8DC: mov     rax, [rsi+128h]
 * 00000001409FE8E3: xor     edx, edx
 * 00000001409FE8E5: mov     rcx, [rsi+0A00h]
 * 00000001409FE8EC: call    KeGuardDispatchICall
 * 00000001409FE8F1: mov     bl, 80h
 * 00000001409FE8F3: mov     r12d, 1
 * 00000001409FE8F9: mov     rax, [rsi+138h]
 * 00000001409FE900: xor     edx, edx
 * 00000001409FE902: mov     rcx, r15
 * 00000001409FE905: call    KeGuardDispatchICall
 * 00000001409FE90A: cmp     bl, 80h
 * 00000001409FE90D: jz      short loc_1409FE942
 * 00000001409FE90F: mov     r8, [rsi+520h]
 * 00000001409FE916: mov     rdx, [r8]
 * 00000001409FE919: cmp     rdx, r8
 * 00000001409FE91C: jz      short loc_1409FE957
 * 00000001409FE91E: not     bl
 * 00000001409FE920: mov     rax, [rsi+6B8h]
 * 00000001409FE927: mov     rcx, rdx
 * 00000001409FE92A: sub     rcx, [rsi+6D0h]
 * 00000001409FE931: lock and [rcx+rax], bl
 * 00000001409FE935: mov     rdx, [rdx]
 * 00000001409FE938: add     r14d, r12d
 * 00000001409FE93B: cmp     rdx, r8
 * 00000001409FE93E: jnz     short loc_1409FE920
 * 00000001409FE940: jmp     short loc_1409FE957
 * 00000001409FE942: mov     rax, [rsi+130h]
 * 00000001409FE949: xor     edx, edx
 * 00000001409FE94B: mov     rcx, [rsi+0A00h]
 * 00000001409FE952: call    KeGuardDispatchICall
 * 00000001409FE957: mov     rcx, [rsi+548h]
 * 00000001409FE95E: xor     edx, edx
 * 00000001409FE960: mov     rax, [rsi+140h]
 * 00000001409FE967: call    KeGuardDispatchICall
 * 00000001409FE96C: mov     rax, [rsi+180h]
 * 00000001409FE973: call    KeGuardDispatchICall
 * 00000001409FE978: shl     r14d, 7
 * 00000001409FE97C: add     [rsi+828h], r14d
 * 00000001409FE983: jmp     loc_1409F6318
 * 00000001409FE988: mov     ecx, [r13+20h]
 * 00000001409FE98C: mov     edx, 2
 * 00000001409FE991: xor     r15d, r15d
 * 00000001409FE994: mov     [rbp+0BE0h+var_C48], rsi
 * 00000001409FE998: test    dl, cl
 * 00000001409FE99A: jz      loc_1409FEE1A
 * 00000001409FE9A0: cmp     [rsi+980h], r15
 * 00000001409FE9A7: jz      loc_1409FD44D
 * 00000001409FE9AD: mov     eax, [rsi+994h]
 * 00000001409FE9B3: test    al, 4
 * 00000001409FE9B5: jnz     loc_1409FD44D
 * 00000001409FE9BB: test    dl, cl
 * 00000001409FE9BD: jz      loc_1409FEE1A
 * 00000001409FE9C3: mov     edx, eax
 * 00000001409FE9C5: mov     ecx, eax
 * 00000001409FE9C7: cmp     [rsi+824h], r15d
 * 00000001409FE9CE: jnz     short loc_1409FE9E2
 * 00000001409FE9D0: shl     ecx, 3
 * 00000001409FE9D3: xor     ecx, eax
 * 00000001409FE9D5: and     ecx, 20h
 * 00000001409FE9D8: xor     ecx, eax
 * 00000001409FE9DA: mov     [rsi+994h], ecx
 * 00000001409FE9E0: jmp     short loc_1409FE9F1
 * 00000001409FE9E2: mov     eax, edx
 * 00000001409FE9E4: shr     eax, 3
 * 00000001409FE9E7: xor     eax, edx
 * 00000001409FE9E9: test    al, 4
 * 00000001409FE9EB: jnz     loc_1409FD44D
 * 00000001409FE9F1: cmp     [rsi+980h], r15
 * 00000001409FE9F8: jz      loc_1409FEE0E
 * 00000001409FE9FE: mov     edx, ecx
 * 00000001409FEA00: cmp     [rsi+824h], r15d
 * 00000001409FEA07: jnz     short loc_1409FEA1B
 * 00000001409FEA09: shl     edx, 3
 * 00000001409FEA0C: xor     edx, ecx
 * 00000001409FEA0E: and     edx, 20h
 * 00000001409FEA11: xor     edx, ecx
 * 00000001409FEA13: mov     [rsi+994h], edx
 * 00000001409FEA19: jmp     short loc_1409FEA2A
 * 00000001409FEA1B: mov     eax, ecx
 * 00000001409FEA1D: shr     eax, 3
 * 00000001409FEA20: xor     eax, ecx
 * 00000001409FEA22: test    al, 4
 * 00000001409FEA24: jnz     loc_1409FEE0E
 * 00000001409FEA2A: test    dl, 4
 * 00000001409FEA2D: jz      loc_1409FEAF7
 * 00000001409FEA33: mov     r14d, [r13+8]
 * 00000001409FEA37: mov     ecx, [r13+10h]
 * 00000001409FEA3B: and     r14d, 0FFFh
 * 00000001409FEA42: mov     rbx, [r13+8]
 * 00000001409FEA46: add     r14, 0FFFh
 * 00000001409FEA4D: add     r14, rcx
 * 00000001409FEA50: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001409FEA57: shr     r14, 0Ch
 * 00000001409FEA5B: test    r14, r14
 * 00000001409FEA5E: jz      loc_1409FECE4
 * 00000001409FEA64: mov     rdi, 0B3B74BDEE4453415h
 * 00000001409FEA6E: mov     r12d, 1
 * 00000001409FEA74: mov     rax, [rsi+2B0h]
 * 00000001409FEA7B: mov     rcx, rbx
 * 00000001409FEA7E: sub     r14, r12
 * 00000001409FEA81: call    KeGuardDispatchICall
 * 00000001409FEA86: test    al, al
 * 00000001409FEA88: jz      short loc_1409FEAD5
 * 00000001409FEA8A: cmp     [rsi+8F8h], r15d
 * 00000001409FEA91: jnz     short loc_1409FEAD5
 * 00000001409FEA93: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FEA9D: xor     edx, edx
 * 00000001409FEA9F: add     rax, rsi
 * 00000001409FEAA2: mov     rcx, rsi
 * 00000001409FEAA5: mov     [rsi+900h], rax
 * 00000001409FEAAC: lea     rax, [rdi+r13]
 * 00000001409FEAB0: mov     [rsi+908h], rax
 * 00000001409FEAB7: movsxd  rax, dword ptr [r13+0]
 * 00000001409FEABB: mov     [rsi+910h], rax
 * 00000001409FEAC2: mov     [rsi+918h], rbx
 * 00000001409FEAC9: mov     [rsi+8F8h], r12d
 * 00000001409FEAD0: call    $$b8
 * 00000001409FEAD5: add     dword ptr [rsi+828h], 100h
 * 00000001409FEADF: add     rbx, 1000h
 * 00000001409FEAE6: test    r14, r14
 * 00000001409FEAE9: jnz     short loc_1409FEA74
 * 00000001409FEAEB: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FEAF2: jmp     loc_1409FECE4
 * 00000001409FEAF7: mov     r14, [r13+8]
 * 00000001409FEAFB: mov     r8d, [r13+10h]
 * 00000001409FEAFF: mov     r9, r14
 * 00000001409FEB02: add     [rsi+828h], r8d
 * 00000001409FEB09: mov     rax, r14
 * 00000001409FEB0C: mov     r11d, [rsi+814h]
 * 00000001409FEB13: mov     r15, [rsi+818h]
 * 00000001409FEB1A: lea     rcx, [r14+r8]
 * 00000001409FEB1E: cmp     r14, rcx
 * 00000001409FEB21: jnb     short loc_1409FEB33
 * 00000001409FEB23: mov     edx, 40h ; '@'
 * 00000001409FEB28: prefetchnta byte ptr [rax]
 * 00000001409FEB2B: add     rax, rdx
 * 00000001409FEB2E: cmp     rax, rcx
 * 00000001409FEB31: jb      short loc_1409FEB28
 * 00000001409FEB33: mov     r10d, r8d
 * 00000001409FEB36: mov     rbx, r15
 * 00000001409FEB39: shr     r10d, 7
 * 00000001409FEB3D: test    r10d, r10d
 * 00000001409FEB40: jz      short loc_1409FEBB3
 * 00000001409FEB42: mov     rsi, 7010008004002001h
 * 00000001409FEB4C: mov     r12d, 1
 * 00000001409FEB52: mov     edx, 8
 * 00000001409FEB57: mov     rax, [r9]
 * 00000001409FEB5A: mov     ecx, r11d
 * 00000001409FEB5D: xor     rax, rbx
 * 00000001409FEB60: mov     rbx, [r9+8]
 * 00000001409FEB64: rol     rax, cl
 * 00000001409FEB67: add     r9, 10h
 * 00000001409FEB6B: xor     rbx, rax
 * 00000001409FEB6E: rol     rbx, cl
 * 00000001409FEB71: sub     rdx, r12
 * 00000001409FEB74: jnz     short loc_1409FEB57
 * 00000001409FEB76: mov     rcx, r9
 * 00000001409FEB79: sub     rcx, r14
 * 00000001409FEB7C: xor     rcx, r15
 * 00000001409FEB7F: mov     rax, rcx
 * 00000001409FEB82: rol     rax, 11h
 * 00000001409FEB86: xor     rcx, rax
 * 00000001409FEB89: mov     rax, rsi
 * 00000001409FEB8C: mul     rcx
 * 00000001409FEB8F: xor     r11d, eax
 * 00000001409FEB92: mov     [rbp+0BE0h+var_5F8], rdx
 * 00000001409FEB99: xor     r11d, edx
 * 00000001409FEB9C: mov     eax, 0FFFFFFFFh
 * 00000001409FEBA1: and     r11d, 3Fh
 * 00000001409FEBA5: cmovz   r11d, r12d
 * 00000001409FEBA9: add     r10d, eax
 * 00000001409FEBAC: jnz     short loc_1409FEB52
 * 00000001409FEBAE: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FEBB3: and     r8d, 7Fh
 * 00000001409FEBB7: mov     r10d, 1
 * 00000001409FEBBD: cmp     r8d, 8
 * 00000001409FEBC1: jb      short loc_1409FEBE0
 * 00000001409FEBC3: mov     edx, r8d
 * 00000001409FEBC6: shr     rdx, 3
 * 00000001409FEBCA: xor     rbx, [r9]
 * 00000001409FEBCD: mov     ecx, r11d
 * 00000001409FEBD0: rol     rbx, cl
 * 00000001409FEBD3: add     r9, 8
 * 00000001409FEBD7: add     r8d, 0FFFFFFF8h
 * 00000001409FEBDB: sub     rdx, r10
 * 00000001409FEBDE: jnz     short loc_1409FEBCA
 * 00000001409FEBE0: xor     r15d, r15d
 * 00000001409FEBE3: test    r8d, r8d
 * 00000001409FEBE6: jz      short loc_1409FEC06
 * 00000001409FEBE8: mov     r15d, 0FFFFFFFFh
 * 00000001409FEBEE: movzx   eax, byte ptr [r9]
 * 00000001409FEBF2: mov     ecx, r11d
 * 00000001409FEBF5: xor     rbx, rax
 * 00000001409FEBF8: add     r9, r10
 * 00000001409FEBFB: rol     rbx, cl
 * 00000001409FEBFE: add     r8d, r15d
 * 00000001409FEC01: jnz     short loc_1409FEBEE
 * 00000001409FEC03: xor     r15d, r15d
 * 00000001409FEC06: mov     rax, rbx
 * 00000001409FEC09: jmp     short loc_1409FEC0D
 * 00000001409FEC0B: xor     ebx, eax
 * 00000001409FEC0D: shr     rax, 1Fh
 * 00000001409FEC11: test    rax, rax
 * 00000001409FEC14: jnz     short loc_1409FEC0B
 * 00000001409FEC16: mov     r8d, [r13+14h]
 * 00000001409FEC1A: btr     ebx, 1Fh
 * 00000001409FEC1E: cmp     ebx, r8d
 * 00000001409FEC21: jz      loc_1409FECE4
 * 00000001409FEC27: mov     ecx, [r13+10h]
 * 00000001409FEC2B: mov     rdx, [r13+8]
 * 00000001409FEC2F: test    rcx, rcx
 * 00000001409FEC32: jz      loc_1409FED8B
 * 00000001409FEC38: mov     eax, [rsi+994h]
 * 00000001409FEC3E: mov     r9d, 40h ; '@'
 * 00000001409FEC44: test    r9b, al
 * 00000001409FEC47: jz      loc_1409FED8B
 * 00000001409FEC4D: mov     r12, cr8
 * 00000001409FEC51: lea     eax, [r9-3Eh]
 * 00000001409FEC55: mov     cr8, rax
 * 00000001409FEC59: mov     r14, rdx
 * 00000001409FEC5C: lea     rax, [rcx-1]
 * 00000001409FEC60: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FEC67: add     rax, rdx
 * 00000001409FEC6A: or      rax, 0FFFh
 * 00000001409FEC70: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FEC77: lea     r13, [r14-1]
 * 00000001409FEC7B: movzx   r15d, r12b
 * 00000001409FEC7F: mov     rax, [rsi+468h]
 * 00000001409FEC86: xor     edx, edx
 * 00000001409FEC88: mov     rcx, r14
 * 00000001409FEC8B: call    KeGuardDispatchICall
 * 00000001409FEC90: cmp     eax, 0C000022Dh
 * 00000001409FEC95: jnz     short loc_1409FECBB
 * 00000001409FEC97: mov     eax, 1
 * 00000001409FEC9C: cmp     r12b, al
 * 00000001409FEC9F: ja      short loc_1409FECC3
 * 00000001409FECA1: movzx   r15d, r12b
 * 00000001409FECA5: mov     cr8, r15
 * 00000001409FECA9: mov     al, [r14]
 * 00000001409FECAC: mov     rax, cr8
 * 00000001409FECB0: mov     eax, 2
 * 00000001409FECB5: mov     cr8, rax
 * 00000001409FECB9: jmp     short loc_1409FEC7F
 * 00000001409FECBB: test    eax, eax
 * 00000001409FECBD: js      loc_1409FED7B
 * 00000001409FECC3: mov     r11d, 1000h
 * 00000001409FECC9: add     r14, r11
 * 00000001409FECCC: add     r13, r11
 * 00000001409FECCF: cmp     r13, [rbp+0BE0h+arg_8]
 * 00000001409FECD6: jnz     short loc_1409FEC7B
 * 00000001409FECD8: mov     cr8, r15
 * 00000001409FECDC: xor     r15d, r15d
 * 00000001409FECDF: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FECE4: mov     eax, [r13+20h]
 * 00000001409FECE8: mov     r14d, 1
 * 00000001409FECEE: test    r14b, al
 * 00000001409FECF1: jz      loc_1409F631B
 * 00000001409FECF7: mov     rbx, [r13+18h]
 * 00000001409FECFB: mov     rax, [rsi+1F8h]
 * 00000001409FED02: mov     rcx, rbx
 * 00000001409FED05: mov     [rsp+0CE0h+var_C88], rbx
 * 00000001409FED0A: call    KeGuardDispatchICall
 * 00000001409FED0F: movzx   r15d, word ptr [rax+14h]
 * 00000001409FED14: add     r15, 18h
 * 00000001409FED18: add     r15, rax
 * 00000001409FED1B: movzx   eax, word ptr [rax+6]
 * 00000001409FED1F: lea     rcx, [rax+rax*4]
 * 00000001409FED23: lea     rax, [r15+rcx*8]
 * 00000001409FED27: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FED2C: cmp     r15, rax
 * 00000001409FED2F: jz      loc_1409F6318
 * 00000001409FED35: mov     r12d, [rsi+824h]
 * 00000001409FED3C: xor     edx, edx
 * 00000001409FED3E: test    r12d, r12d
 * 00000001409FED41: jnz     short loc_1409FED53
 * 00000001409FED43: mov     dword ptr [rsi+824h], 1000h
 * 00000001409FED4D: mov     r12d, 1000h
 * 00000001409FED53: mov     eax, r12d
 * 00000001409FED56: cmp     rbx, [rsi+5E8h]
 * 00000001409FED5D: jz      loc_1409FF03F
 * 00000001409FED63: cmp     rbx, [rsi+5F0h]
 * 00000001409FED6A: jz      loc_1409FF03F
 * 00000001409FED70: mov     dword ptr [rbp+0BE0h+arg_8], edx
 * 00000001409FED76: jmp     loc_1409FF049
 * 00000001409FED7B: mov     cr8, r15
 * 00000001409FED7F: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FED84: xor     r15d, r15d
 * 00000001409FED87: mov     r8d, [r13+14h]
 * 00000001409FED8B: mov     eax, [rsi+8F8h]
 * 00000001409FED91: test    eax, eax
 * 00000001409FED93: jnz     short loc_1409FEDAE
 * 00000001409FED95: mov     ecx, r8d
 * 00000001409FED98: mov     eax, ebx
 * 00000001409FED9A: xor     rcx, rax
 * 00000001409FED9D: mov     rax, [rsi+590h]
 * 00000001409FEDA4: mov     [rax+18h], rcx
 * 00000001409FEDA8: mov     eax, [rsi+8F8h]
 * 00000001409FEDAE: mov     rcx, [r13+8]
 * 00000001409FEDB2: test    eax, eax
 * 00000001409FEDB4: jnz     loc_1409FECE4
 * 00000001409FEDBA: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FEDC4: xor     edx, edx
 * 00000001409FEDC6: add     rax, rsi
 * 00000001409FEDC9: mov     [rsi+900h], rax
 * 00000001409FEDD0: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FEDDA: add     rax, r13
 * 00000001409FEDDD: mov     [rsi+908h], rax
 * 00000001409FEDE4: movsxd  rax, dword ptr [r13+0]
 * 00000001409FEDE8: mov     [rsi+910h], rax
 * 00000001409FEDEF: mov     eax, 1
 * 00000001409FEDF4: mov     [rsi+918h], rcx
 * 00000001409FEDFB: mov     rcx, rsi
 * 00000001409FEDFE: mov     [rsi+8F8h], eax
 * 00000001409FEE04: call    $$b8
 * 00000001409FEE09: jmp     loc_1409FECE4
 * 00000001409FEE0E: mov     [rsi+824h], r15d
 * 00000001409FEE15: jmp     loc_1409FECE4
 * 00000001409FEE1A: mov     r14, [r13+8]
 * 00000001409FEE1E: mov     r8d, [r13+10h]
 * 00000001409FEE22: mov     r9, r14
 * 00000001409FEE25: add     [rsi+828h], r8d
 * 00000001409FEE2C: mov     rax, r14
 * 00000001409FEE2F: mov     r10d, [rsi+814h]
 * 00000001409FEE36: mov     r15, [rsi+818h]
 * 00000001409FEE3D: lea     rcx, [r14+r8]
 * 00000001409FEE41: cmp     r14, rcx
 * 00000001409FEE44: jnb     short loc_1409FEE56
 * 00000001409FEE46: mov     edx, 40h ; '@'
 * 00000001409FEE4B: prefetchnta byte ptr [rax]
 * 00000001409FEE4E: add     rax, rdx
 * 00000001409FEE51: cmp     rax, rcx
 * 00000001409FEE54: jb      short loc_1409FEE4B
 * 00000001409FEE56: mov     r11d, r8d
 * 00000001409FEE59: mov     rbx, r15
 * 00000001409FEE5C: shr     r11d, 7
 * 00000001409FEE60: mov     edx, 1
 * 00000001409FEE65: mov     r12d, 0FFFFFFFFh
 * 00000001409FEE6B: test    r11d, r11d
 * 00000001409FEE6E: jz      short loc_1409FEEDC
 * 00000001409FEE70: mov     rdi, 7010008004002001h
 * 00000001409FEE7A: mov     eax, 8
 * 00000001409FEE7F: xor     rbx, [r9]
 * 00000001409FEE82: mov     ecx, r10d
 * 00000001409FEE85: rol     rbx, cl
 * 00000001409FEE88: xor     rbx, [r9+8]
 * 00000001409FEE8C: add     r9, 10h
 * 00000001409FEE90: rol     rbx, cl
 * 00000001409FEE93: sub     rax, rdx
 * 00000001409FEE96: jnz     short loc_1409FEE7F
 * 00000001409FEE98: mov     rcx, r9
 * 00000001409FEE9B: sub     rcx, r14
 * 00000001409FEE9E: xor     rcx, r15
 * 00000001409FEEA1: mov     rax, rcx
 * 00000001409FEEA4: rol     rax, 11h
 * 00000001409FEEA8: xor     rcx, rax
 * 00000001409FEEAB: mov     rax, rdi
 * 00000001409FEEAE: mul     rcx
 * 00000001409FEEB1: xor     r10d, eax
 * 00000001409FEEB4: mov     [rbp+0BE0h+var_5F0], rdx
 * 00000001409FEEBB: xor     r10d, edx
 * 00000001409FEEBE: mov     edx, 1
 * 00000001409FEEC3: and     r10d, 3Fh
 * 00000001409FEEC7: cmovz   r10d, edx
 * 00000001409FEECB: add     r11d, r12d
 * 00000001409FEECE: jnz     short loc_1409FEE7A
 * 00000001409FEED0: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FEED5: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FEEDC: and     r8d, 7Fh
 * 00000001409FEEE0: cmp     r8d, 8
 * 00000001409FEEE4: jb      short loc_1409FEF03
 * 00000001409FEEE6: mov     eax, r8d
 * 00000001409FEEE9: shr     rax, 3
 * 00000001409FEEED: xor     rbx, [r9]
 * 00000001409FEEF0: mov     ecx, r10d
 * 00000001409FEEF3: rol     rbx, cl
 * 00000001409FEEF6: add     r9, 8
 * 00000001409FEEFA: add     r8d, 0FFFFFFF8h
 * 00000001409FEEFE: sub     rax, rdx
 * 00000001409FEF01: jnz     short loc_1409FEEED
 * 00000001409FEF03: xor     r15d, r15d
 * 00000001409FEF06: test    r8d, r8d
 * 00000001409FEF09: jz      short loc_1409FEF20
 * 00000001409FEF0B: movzx   eax, byte ptr [r9]
 * 00000001409FEF0F: mov     ecx, r10d
 * 00000001409FEF12: xor     rbx, rax
 * 00000001409FEF15: add     r9, rdx
 * 00000001409FEF18: rol     rbx, cl
 * 00000001409FEF1B: add     r8d, r12d
 * 00000001409FEF1E: jnz     short loc_1409FEF0B
 * 00000001409FEF20: mov     rax, rbx
 * 00000001409FEF23: jmp     short loc_1409FEF27
 * 00000001409FEF25: xor     ebx, eax
 * 00000001409FEF27: shr     rax, 1Fh
 * 00000001409FEF2B: test    rax, rax
 * 00000001409FEF2E: jnz     short loc_1409FEF25
 * 00000001409FEF30: mov     rax, [rsp+0CE0h+var_C90]
 * 00000001409FEF35: btr     ebx, 1Fh
 * 00000001409FEF39: mov     r13d, r15d
 * 00000001409FEF3C: cmp     ebx, [rax+14h]
 * 00000001409FEF3F: jz      loc_1409FECDF
 * 00000001409FEF45: cmp     [rax], r15d
 * 00000001409FEF48: jnz     short loc_1409FEF52
 * 00000001409FEF4A: cmp     [rax+18h], r15d
 * 00000001409FEF4E: cmovnz  r13d, edx
 * 00000001409FEF52: mov     ecx, [rax+10h]
 * 00000001409FEF55: mov     rdx, [rax+8]
 * 00000001409FEF59: test    rcx, rcx
 * 00000001409FEF5C: jz      loc_1409FF01E
 * 00000001409FEF62: mov     eax, [rsi+994h]
 * 00000001409FEF68: mov     r8d, 40h ; '@'
 * 00000001409FEF6E: test    r8b, al
 * 00000001409FEF71: jz      loc_1409FF01E
 * 00000001409FEF77: mov     r12, cr8
 * 00000001409FEF7B: lea     eax, [r8-3Eh]
 * 00000001409FEF7F: mov     cr8, rax
 * 00000001409FEF83: mov     r14, rdx
 * 00000001409FEF86: lea     rax, [rcx-1]
 * 00000001409FEF8A: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FEF91: add     rax, rdx
 * 00000001409FEF94: or      rax, 0FFFh
 * 00000001409FEF9A: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FEF9F: lea     rax, [r14-1]
 * 00000001409FEFA3: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FEFAA: movzx   r15d, r12b
 * 00000001409FEFAE: mov     rax, [rsi+468h]
 * 00000001409FEFB5: xor     edx, edx
 * 00000001409FEFB7: mov     rcx, r14
 * 00000001409FEFBA: call    KeGuardDispatchICall
 * 00000001409FEFBF: cmp     eax, 0C000022Dh
 * 00000001409FEFC4: jnz     short loc_1409FEFED
 * 00000001409FEFC6: test    r13d, r13d
 * 00000001409FEFC9: jnz     short loc_1409FF017
 * 00000001409FEFCB: lea     eax, [r13+1]
 * 00000001409FEFCF: cmp     r12b, al
 * 00000001409FEFD2: ja      short loc_1409FEFF1
 * 00000001409FEFD4: movzx   r15d, r12b
 * 00000001409FEFD8: mov     cr8, r15
 * 00000001409FEFDC: mov     al, [r14]
 * 00000001409FEFDF: mov     rax, cr8
 * 00000001409FEFE3: lea     eax, [r13+2]
 * 00000001409FEFE7: mov     cr8, rax
 * 00000001409FEFEB: jmp     short loc_1409FEFAE
 * 00000001409FEFED: test    eax, eax
 * 00000001409FEFEF: js      short loc_1409FF017
 * 00000001409FEFF1: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409FEFF8: mov     r11d, 1000h
 * 00000001409FEFFE: add     rax, r11
 * 00000001409FF001: add     r14, r11
 * 00000001409FF004: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FF00B: cmp     rax, [rsp+0CE0h+var_C70]
 * 00000001409FF010: jnz     short loc_1409FEFAA
 * 00000001409FF012: jmp     loc_1409FECD8
 * 00000001409FF017: mov     cr8, r15
 * 00000001409FF01B: xor     r15d, r15d
 * 00000001409FF01E: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FF023: mov     eax, [rsi+8F8h]
 * 00000001409FF029: mov     edx, [r13+14h]
 * 00000001409FF02D: test    eax, eax
 * 00000001409FF02F: jnz     loc_1409FEDAE
 * 00000001409FF035: mov     ecx, ebx
 * 00000001409FF037: xor     rcx, rdx
 * 00000001409FF03A: jmp     loc_1409FED9D
 * 00000001409FF03F: mov     dword ptr [rbp+0BE0h+arg_8], r14d
 * 00000001409FF046: mov     r12d, eax
 * 00000001409FF049: mov     esi, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FF04F: mov     rdi, [rsp+0CE0h+var_C70]
 * 00000001409FF054: mov     ecx, [r15+10h]
 * 00000001409FF058: mov     eax, [r15+8]
 * 00000001409FF05C: cmp     ecx, eax
 * 00000001409FF05E: mov     r11d, [r15+0Ch]
 * 00000001409FF062: cmovbe  ecx, eax
 * 00000001409FF065: lea     r13d, [r11+0FFFh]
 * 00000001409FF06C: add     r13d, ecx
 * 00000001409FF06F: and     r13d, 0FFFFF000h
 * 00000001409FF076: cmp     r12d, r13d
 * 00000001409FF079: jnb     loc_1409FF18D
 * 00000001409FF07F: mov     eax, [r15+24h]
 * 00000001409FF083: bt      eax, 19h
 * 00000001409FF087: jb      loc_1409FF18A
 * 00000001409FF08D: mov     ecx, [r15]
 * 00000001409FF090: cmp     ecx, 54494E49h
 * 00000001409FF096: jnz     short loc_1409FF0A6
 * 00000001409FF098: cmp     dword ptr [r15+4], 4742444Bh
 * 00000001409FF0A0: jz      loc_1409FF18A
 * 00000001409FF0A6: cmp     ecx, 45474150h
 * 00000001409FF0AC: jnz     short loc_1409FF0E3
 * 00000001409FF0AE: movzx   eax, word ptr [r15+4]
 * 00000001409FF0B3: mov     r8d, 7877h
 * 00000001409FF0B9: cmp     ax, r8w
 * 00000001409FF0BD: jz      loc_1409FF18A
 * 00000001409FF0C3: mov     r8d, 7277h
 * 00000001409FF0C9: cmp     ax, r8w
 * 00000001409FF0CD: jz      loc_1409FF18A
 * 00000001409FF0D3: mov     r8d, 7777h
 * 00000001409FF0D9: cmp     ax, r8w
 * 00000001409FF0DD: jz      loc_1409FF18A
 * 00000001409FF0E3: cmp     ecx, 41525245h
 * 00000001409FF0E9: jnz     short loc_1409FF0FB
 * 00000001409FF0EB: mov     eax, 4154h
 * 00000001409FF0F0: cmp     [r15+4], ax
 * 00000001409FF0F5: jz      loc_1409FF18A
 * 00000001409FF0FB: mov     rcx, [rbp+0BE0h+var_C48]
 * 00000001409FF0FF: test    rcx, rcx
 * 00000001409FF102: jz      short loc_1409FF13E
 * 00000001409FF104: mov     rax, [rcx+938h]
 * 00000001409FF10B: mov     r8, [rcx+930h]
 * 00000001409FF112: mov     qword ptr [rbp+0BE0h+var_940+8], rax
 * 00000001409FF119: mov     rax, [rcx+940h]
 * 00000001409FF120: mov     qword ptr [rbp+0BE0h+var_930], rax
 * 00000001409FF127: mov     rax, [rcx+948h]
 * 00000001409FF12E: mov     qword ptr [rbp+0BE0h+var_930+8], rax
 * 00000001409FF135: mov     qword ptr [rbp+0BE0h+var_940], r8
 * 00000001409FF13C: jmp     short loc_1409FF161
 * 00000001409FF13E: movups  xmm0, xmmword ptr cs:VfExcludeSections
 * 00000001409FF145: movups  xmm1, xmmword ptr cs:off_140C0EFE0; "INIT"
 * 00000001409FF14C: movups  [rbp+0BE0h+var_940], xmm0
 * 00000001409FF153: mov     r8, qword ptr [rbp+0BE0h+var_940]
 * 00000001409FF15A: movups  [rbp+0BE0h+var_930], xmm1
 * 00000001409FF161: mov     r10d, 7
 * 00000001409FF167: mov     r9, r15
 * 00000001409FF16A: mov     r14d, 0FFFFFFFFh
 * 00000001409FF170: movzx   edx, byte ptr [r9]
 * 00000001409FF174: inc     r9
 * 00000001409FF177: movzx   eax, byte ptr [r8]
 * 00000001409FF17B: inc     r8
 * 00000001409FF17E: cmp     rdx, rax
 * 00000001409FF181: jnz     short loc_1409FF1CB
 * 00000001409FF183: add     r10d, r14d
 * 00000001409FF186: jnz     short loc_1409FF170
 * 00000001409FF188: xor     edx, edx
 * 00000001409FF18A: mov     r12d, r13d
 * 00000001409FF18D: mov     r8, [rbp+0BE0h+var_C48]
 * 00000001409FF191: add     r15, 28h ; '('
 * 00000001409FF195: cmp     r15, rdi
 * 00000001409FF198: jnz     loc_1409FF054
 * 00000001409FF19E: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FF1A3: cmp     r15, rdi
 * 00000001409FF1A6: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FF1AD: jnz     loc_1409FF537
 * 00000001409FF1B3: cmp     r12d, r13d
 * 00000001409FF1B6: jb      loc_1409FF537
 * 00000001409FF1BC: xor     r15d, r15d
 * 00000001409FF1BF: mov     [r8+824h], r15d
 * 00000001409FF1C6: jmp     loc_1409F631B
 * 00000001409FF1CB: mov     r9, qword ptr [rbp+0BE0h+var_940+8]
 * 00000001409FF1D2: mov     r8d, 8
 * 00000001409FF1D8: mov     r10, r15
 * 00000001409FF1DB: mov     rcx, [r10]
 * 00000001409FF1DE: add     r10, 8
 * 00000001409FF1E2: mov     rax, [r9]
 * 00000001409FF1E5: add     r9, 8
 * 00000001409FF1E9: cmp     rcx, rax
 * 00000001409FF1EC: jnz     short loc_1409FF21C
 * 00000001409FF1EE: add     r8d, 0FFFFFFF8h
 * 00000001409FF1F2: cmp     r8d, 8
 * 00000001409FF1F6: jnb     short loc_1409FF1DB
 * 00000001409FF1F8: xor     edx, edx
 * 00000001409FF1FA: test    r8d, r8d
 * 00000001409FF1FD: jz      short loc_1409FF18A
 * 00000001409FF1FF: movzx   edx, byte ptr [r10]
 * 00000001409FF203: inc     r10
 * 00000001409FF206: movzx   eax, byte ptr [r9]
 * 00000001409FF20A: inc     r9
 * 00000001409FF20D: cmp     rdx, rax
 * 00000001409FF210: jnz     short loc_1409FF21C
 * 00000001409FF212: add     r8d, r14d
 * 00000001409FF215: jnz     short loc_1409FF1FF
 * 00000001409FF217: jmp     loc_1409FF188
 * 00000001409FF21C: mov     r8, qword ptr [rbp+0BE0h+var_930]
 * 00000001409FF223: mov     r10d, 4
 * 00000001409FF229: mov     r9, r15
 * 00000001409FF22C: movzx   edx, byte ptr [r9]
 * 00000001409FF230: inc     r9
 * 00000001409FF233: movzx   eax, byte ptr [r8]
 * 00000001409FF237: inc     r8
 * 00000001409FF23A: cmp     rdx, rax
 * 00000001409FF23D: jnz     short loc_1409FF249
 * 00000001409FF23F: add     r10d, r14d
 * 00000001409FF242: jnz     short loc_1409FF22C
 * 00000001409FF244: jmp     loc_1409FF188
 * 00000001409FF249: mov     r8, qword ptr [rbp+0BE0h+var_930+8]
 * 00000001409FF250: mov     r10d, 6
 * 00000001409FF256: mov     r9, r15
 * 00000001409FF259: movzx   edx, byte ptr [r9]
 * 00000001409FF25D: inc     r9
 * 00000001409FF260: movzx   eax, byte ptr [r8]
 * 00000001409FF264: inc     r8
 * 00000001409FF267: cmp     rdx, rax
 * 00000001409FF26A: jnz     short loc_1409FF276
 * 00000001409FF26C: add     r10d, r14d
 * 00000001409FF26F: jnz     short loc_1409FF259
 * 00000001409FF271: jmp     loc_1409FF188
 * 00000001409FF276: mov     eax, [r15+24h]
 * 00000001409FF27A: xor     edx, edx
 * 00000001409FF27C: test    eax, eax
 * 00000001409FF27E: js      loc_1409FF18A
 * 00000001409FF284: bt      eax, 1Dh
 * 00000001409FF288: jnb     loc_1409FF18A
 * 00000001409FF28E: lea     r9d, [rdx+1]
 * 00000001409FF292: mov     r14d, r9d
 * 00000001409FF295: test    esi, esi
 * 00000001409FF297: jz      short loc_1409FF2AC
 * 00000001409FF299: mov     eax, [r15]
 * 00000001409FF29C: cmp     eax, 2E656461h
 * 00000001409FF2A1: jz      short loc_1409FF2AC
 * 00000001409FF2A3: cmp     eax, 45474150h
 * 00000001409FF2A8: cmovnz  r14d, edx
 * 00000001409FF2AC: mov     r8, [rbp+0BE0h+var_C48]
 * 00000001409FF2B0: cmp     r12d, r11d
 * 00000001409FF2B3: cmovnb  r11d, r12d
 * 00000001409FF2B7: mov     r12d, r11d
 * 00000001409FF2BA: mov     eax, r12d
 * 00000001409FF2BD: add     rbx, rax
 * 00000001409FF2C0: test    byte ptr [r8+87Bh], 4
 * 00000001409FF2C8: jz      short loc_1409FF32F
 * 00000001409FF2CA: mov     ecx, 0FFFFFFFFh
 * 00000001409FF2CF: mov     eax, ecx
 * 00000001409FF2D1: xbegin  $+6
 * 00000001409FF2D7: cmp     eax, ecx
 * 00000001409FF2D9: jnz     short loc_1409FF2E2
 * 00000001409FF2DB: mov     al, [rbx]
 * 00000001409FF2DD: xend
 * 00000001409FF2E0: jmp     short loc_1409FF316
 * 00000001409FF2E2: rdtsc
 * 00000001409FF2E4: shl     rdx, 20h
 * 00000001409FF2E8: or      rax, rdx
 * 00000001409FF2EB: mov     rcx, rax
 * 00000001409FF2EE: ror     rax, 3
 * 00000001409FF2F2: xor     rcx, rax
 * 00000001409FF2F5: mov     rax, 7010008004002001h
 * 00000001409FF2FF: mul     rcx
 * 00000001409FF302: mov     [rbp+0BE0h+var_5E8], rdx
 * 00000001409FF309: xor     dl, al
 * 00000001409FF30B: mov     eax, 0Fh
 * 00000001409FF310: test    al, dl
 * 00000001409FF312: jz      short loc_1409FF32D
 * 00000001409FF314: xor     edx, edx
 * 00000001409FF316: add     [r8+83Ch], r9d
 * 00000001409FF31D: add     dword ptr [r8+828h], 100h
 * 00000001409FF328: jmp     loc_1409FF3D7
 * 00000001409FF32D: xor     edx, edx
 * 00000001409FF32F: test    r14d, r14d
 * 00000001409FF332: jz      loc_1409FF413
 * 00000001409FF338: mov     rax, [r8+450h]
 * 00000001409FF33F: lea     rcx, [rbp+0BE0h+var_708]
 * 00000001409FF346: mov     rdx, rbx
 * 00000001409FF349: call    KeGuardDispatchICall
 * 00000001409FF34E: xor     edx, edx
 * 00000001409FF350: test    eax, eax
 * 00000001409FF352: jns     loc_1409FF48C
 * 00000001409FF358: cmp     eax, 0C0000005h
 * 00000001409FF35D: jnz     short loc_1409FF3CD
 * 00000001409FF35F: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FF364: mov     eax, [rcx+20h]
 * 00000001409FF367: test    al, 4
 * 00000001409FF369: jz      short loc_1409FF371
 * 00000001409FF36B: cmp     [r15+24h], edx
 * 00000001409FF36F: jge     short loc_1409FF3CD
 * 00000001409FF371: mov     r8, [rbp+0BE0h+var_C48]
 * 00000001409FF375: cmp     [r8+8F8h], edx
 * 00000001409FF37C: jnz     short loc_1409FF3D1
 * 00000001409FF37E: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF388: add     rax, r8
 * 00000001409FF38B: mov     [r8+900h], rax
 * 00000001409FF392: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FF39C: add     rax, rcx
 * 00000001409FF39F: mov     [r8+908h], rax
 * 00000001409FF3A6: movsxd  rax, dword ptr [rcx]
 * 00000001409FF3A9: mov     rcx, r8
 * 00000001409FF3AC: mov     [r8+910h], rax
 * 00000001409FF3B3: mov     eax, 1
 * 00000001409FF3B8: mov     [r8+918h], rbx
 * 00000001409FF3BF: mov     [r8+8F8h], eax
 * 00000001409FF3C6: call    $$b8
 * 00000001409FF3CB: xor     edx, edx
 * 00000001409FF3CD: mov     r8, [rbp+0BE0h+var_C48]
 * 00000001409FF3D1: mov     r9d, 1
 * 00000001409FF3D7: mov     eax, [r8+828h]
 * 00000001409FF3DE: add     r12d, 1000h
 * 00000001409FF3E5: cmp     r12d, r13d
 * 00000001409FF3E8: jnb     short loc_1409FF3FC
 * 00000001409FF3EA: mov     rbx, [rsp+0CE0h+var_C88]
 * 00000001409FF3EF: cmp     eax, [r8+82Ch]
 * 00000001409FF3F6: jl      loc_1409FF2BA
 * 00000001409FF3FC: cmp     eax, [r8+82Ch]
 * 00000001409FF403: jge     loc_1409FF19E
 * 00000001409FF409: mov     rbx, [rsp+0CE0h+var_C88]
 * 00000001409FF40E: jmp     loc_1409FF191
 * 00000001409FF413: mov     r9d, 0FFFh
 * 00000001409FF419: mov     [rbp+0BE0h+var_708], rdx
 * 00000001409FF420: mov     [rbp+0BE0h+var_6FE], dx
 * 00000001409FF427: mov     rax, rbx
 * 00000001409FF42A: and     rax, r9
 * 00000001409FF42D: mov     [rbp+0BE0h+var_6E0], 1000h
 * 00000001409FF437: add     rax, 1FFFh
 * 00000001409FF43D: mov     rcx, rbx
 * 00000001409FF440: shr     rax, 0Ch
 * 00000001409FF444: add     ax, 6
 * 00000001409FF448: shl     ax, 3
 * 00000001409FF44C: mov     [rbp+0BE0h+var_700], ax
 * 00000001409FF453: mov     rax, rbx
 * 00000001409FF456: and     rax, 0FFFFFFFFFFFFF000h
 * 00000001409FF45C: mov     [rbp+0BE0h+var_6E8], rax
 * 00000001409FF463: mov     eax, ebx
 * 00000001409FF465: and     eax, r9d
 * 00000001409FF468: mov     [rbp+0BE0h+var_6DC], eax
 * 00000001409FF46E: mov     rax, [r8+458h]
 * 00000001409FF475: call    KeGuardDispatchICall
 * 00000001409FF47A: mov     [rbp+0BE0h+var_5E0], rax
 * 00000001409FF481: shr     rax, 0Ch
 * 00000001409FF485: mov     [rbp+0BE0h+var_6D8], rax
 * 00000001409FF48C: mov     rcx, [rbp+0BE0h+var_C48]
 * 00000001409FF490: mov     eax, 1
 * 00000001409FF495: add     [rcx+840h], eax
 * 00000001409FF49B: mov     eax, [rbp+0BE0h+var_6DC]
 * 00000001409FF4A1: add     rax, [rbp+0BE0h+var_6E8]
 * 00000001409FF4A8: mov     [rcx+0A68h], rax
 * 00000001409FF4AF: mov     rax, [rsp+0CE0h+var_C90]
 * 00000001409FF4B4: mov     [rcx+0A60h], rax
 * 00000001409FF4BB: mov     rbx, cr8
 * 00000001409FF4BF: mov     eax, 2
 * 00000001409FF4C4: mov     cr8, rax
 * 00000001409FF4C8: mov     rax, [rcx+5F8h]
 * 00000001409FF4CF: xor     r8d, r8d
 * 00000001409FF4D2: add     rcx, 0A40h
 * 00000001409FF4D9: mov     edx, [rax]
 * 00000001409FF4DB: call    RtlInitMinimalBarrier
 * 00000001409FF4E0: mov     rdx, [rbp+0BE0h+var_C48]
 * 00000001409FF4E4: mov     ecx, [rdx+7F4h]
 * 00000001409FF4EA: mov     rax, [rdx+448h]
 * 00000001409FF4F1: add     rcx, rdx
 * 00000001409FF4F4: call    KeGuardDispatchICall
 * 00000001409FF4F9: mov     r8, rax
 * 00000001409FF4FC: mov     [rbp+0BE0h+var_C48], rax
 * 00000001409FF500: movzx   eax, bl
 * 00000001409FF503: mov     cr8, rax
 * 00000001409FF507: xor     edx, edx
 * 00000001409FF509: test    r14d, r14d
 * 00000001409FF50C: jz      short loc_1409FF527
 * 00000001409FF50E: mov     rax, [r8+460h]
 * 00000001409FF515: lea     rcx, [rbp+0BE0h+var_708]
 * 00000001409FF51C: call    KeGuardDispatchICall
 * 00000001409FF521: mov     r8, [rbp+0BE0h+var_C48]
 * 00000001409FF525: xor     edx, edx
 * 00000001409FF527: add     dword ptr [r8+828h], 14000h
 * 00000001409FF532: jmp     loc_1409FF3D1
 * 00000001409FF537: mov     [r8+824h], r12d
 * 00000001409FF53E: jmp     loc_1409F6318
 * 00000001409FF543: mov     r8d, 0Ch
 * 00000001409FF549: xor     eax, eax
 * 00000001409FF54B: cmp     r10d, r8d
 * 00000001409FF54E: jnz     loc_1409FF878
 * 00000001409FF554: cmp     [rsi+980h], rax
 * 00000001409FF55B: jz      loc_1409F6312
 * 00000001409FF561: mov     edx, [rsi+994h]
 * 00000001409FF567: mov     ecx, edx
 * 00000001409FF569: cmp     [rsi+824h], eax
 * 00000001409FF56F: jnz     short loc_1409FF583
 * 00000001409FF571: shl     ecx, 3
 * 00000001409FF574: xor     ecx, edx
 * 00000001409FF576: and     ecx, 20h
 * 00000001409FF579: xor     ecx, edx
 * 00000001409FF57B: mov     [rsi+994h], ecx
 * 00000001409FF581: jmp     short loc_1409FF594
 * 00000001409FF583: mov     eax, edx
 * 00000001409FF585: shr     eax, 3
 * 00000001409FF588: xor     eax, edx
 * 00000001409FF58A: test    al, 4
 * 00000001409FF58C: jnz     loc_1409F63EA
 * 00000001409FF592: xor     eax, eax
 * 00000001409FF594: test    cl, 4
 * 00000001409FF597: jz      loc_1409FF873
 * 00000001409FF59D: mov     r15, [r13+20h]
 * 00000001409FF5A1: mov     eax, [r13+28h]
 * 00000001409FF5A5: test    r15, r15
 * 00000001409FF5A8: jz      short loc_1409FF5D2
 * 00000001409FF5AA: mov     ebx, [rsi+824h]
 * 00000001409FF5B0: sub     eax, ebx
 * 00000001409FF5B2: mov     r14d, eax
 * 00000001409FF5B5: add     r14, 0FFFh
 * 00000001409FF5BC: lea     ecx, [r15+rbx]
 * 00000001409FF5C0: and     ecx, 0FFFh
 * 00000001409FF5C6: add     r14, rcx
 * 00000001409FF5C9: shr     r14, 0Ch
 * 00000001409FF5CD: add     rbx, r15
 * 00000001409FF5D0: jmp     short loc_1409FF5F3
 * 00000001409FF5D2: mov     r14d, [r13+8]
 * 00000001409FF5D6: mov     ecx, [r13+10h]
 * 00000001409FF5DA: and     r14d, 0FFFh
 * 00000001409FF5E1: mov     rbx, [r13+8]
 * 00000001409FF5E5: add     r14, 0FFFh
 * 00000001409FF5EC: add     r14, rcx
 * 00000001409FF5EF: shr     r14, 0Ch
 * 00000001409FF5F3: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001409FF5FA: test    r14, r14
 * 00000001409FF5FD: jz      loc_1409FF6AE
 * 00000001409FF603: xor     edi, edi
 * 00000001409FF605: mov     rax, [rsi+2B0h]
 * 00000001409FF60C: mov     rcx, rbx
 * 00000001409FF60F: dec     r14
 * 00000001409FF612: call    KeGuardDispatchICall
 * 00000001409FF617: test    al, al
 * 00000001409FF619: jz      short loc_1409FF672
 * 00000001409FF61B: cmp     [rsi+8F8h], edi
 * 00000001409FF621: jnz     short loc_1409FF672
 * 00000001409FF623: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF62D: xor     edx, edx
 * 00000001409FF62F: add     rax, rsi
 * 00000001409FF632: mov     rcx, rsi
 * 00000001409FF635: mov     [rsi+900h], rax
 * 00000001409FF63C: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FF646: add     rax, r13
 * 00000001409FF649: mov     [rsi+908h], rax
 * 00000001409FF650: movsxd  rax, dword ptr [r13+0]
 * 00000001409FF654: mov     [rsi+910h], rax
 * 00000001409FF65B: mov     eax, 1
 * 00000001409FF660: mov     [rsi+918h], rbx
 * 00000001409FF667: mov     [rsi+8F8h], eax
 * 00000001409FF66D: call    $$b8
 * 00000001409FF672: add     dword ptr [rsi+828h], 100h
 * 00000001409FF67C: add     rbx, 1000h
 * 00000001409FF683: test    r15, r15
 * 00000001409FF686: jz      short loc_1409FF69E
 * 00000001409FF688: add     dword ptr [rsi+824h], 1000h
 * 00000001409FF692: mov     eax, [r12]
 * 00000001409FF696: cmp     [rsi+828h], eax
 * 00000001409FF69C: jge     short loc_1409FF6A7
 * 00000001409FF69E: test    r14, r14
 * 00000001409FF6A1: jnz     loc_1409FF605
 * 00000001409FF6A7: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FF6AE: test    r15, r15
 * 00000001409FF6B1: jz      short loc_1409FF6C2
 * 00000001409FF6B3: xor     r15d, r15d
 * 00000001409FF6B6: test    r14, r14
 * 00000001409FF6B9: jnz     short loc_1409FF6C2
 * 00000001409FF6BB: mov     [rsi+824h], r15d
 * 00000001409FF6C2: cmp     [rsi+824h], r15d
 * 00000001409FF6C9: jnz     loc_1409F631B
 * 00000001409FF6CF: mov     rcx, [rsi+540h]
 * 00000001409FF6D6: mov     r15, cr8
 * 00000001409FF6DA: mov     eax, 0Fh
 * 00000001409FF6DF: mov     cr8, rax
 * 00000001409FF6E3: mov     rax, [rsi+150h]
 * 00000001409FF6EA: call    KeGuardDispatchICall
 * 00000001409FF6EF: mov     rax, [rsi+610h]
 * 00000001409FF6F6: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409FF6FB: mov     rcx, [rax]
 * 00000001409FF6FE: mov     eax, [rcx]
 * 00000001409FF700: lea     rbx, [rcx+10h]
 * 00000001409FF704: mov     r12b, [rcx+0Ch]
 * 00000001409FF708: lea     rcx, [rax+rax*2]
 * 00000001409FF70C: lea     r13, [rbx+rcx*8]
 * 00000001409FF710: mov     r8d, 18h
 * 00000001409FF716: lea     r9, [r14+18h]
 * 00000001409FF71A: mov     r10, rbx
 * 00000001409FF71D: mov     rcx, [r10]
 * 00000001409FF720: add     r10, 8
 * 00000001409FF724: mov     rax, [r9]
 * 00000001409FF727: add     r9, 8
 * 00000001409FF72B: cmp     rcx, rax
 * 00000001409FF72E: jnz     short loc_1409FF764
 * 00000001409FF730: add     r8d, 0FFFFFFF8h
 * 00000001409FF734: cmp     r8d, 8
 * 00000001409FF738: jnb     short loc_1409FF71D
 * 00000001409FF73A: test    r8d, r8d
 * 00000001409FF73D: jz      short loc_1409FF76D
 * 00000001409FF73F: mov     r11d, 1
 * 00000001409FF745: movzx   edx, byte ptr [r10]
 * 00000001409FF749: add     r10, r11
 * 00000001409FF74C: movzx   eax, byte ptr [r9]
 * 00000001409FF750: add     r9, r11
 * 00000001409FF753: cmp     rdx, rax
 * 00000001409FF756: jnz     short loc_1409FF764
 * 00000001409FF758: mov     eax, 0FFFFFFFFh
 * 00000001409FF75D: add     r8d, eax
 * 00000001409FF760: jz      short loc_1409FF76D
 * 00000001409FF762: jmp     short loc_1409FF745
 * 00000001409FF764: add     rbx, 18h
 * 00000001409FF768: cmp     rbx, r13
 * 00000001409FF76B: jb      short loc_1409FF710
 * 00000001409FF76D: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FF772: mov     rcx, [rsi+540h]
 * 00000001409FF779: mov     rax, [rsi+190h]
 * 00000001409FF780: call    KeGuardDispatchICall
 * 00000001409FF785: movzx   eax, r15b
 * 00000001409FF789: mov     cr8, rax
 * 00000001409FF78D: xor     r15d, r15d
 * 00000001409FF790: test    r12b, r12b
 * 00000001409FF793: jz      short loc_1409FF80F
 * 00000001409FF795: mov     eax, [rsi+994h]
 * 00000001409FF79B: lea     ecx, [r15+10h]
 * 00000001409FF79F: test    cl, al
 * 00000001409FF7A1: jz      short loc_1409FF7FE
 * 00000001409FF7A3: cmp     [rsi+8F8h], r15d
 * 00000001409FF7AA: jnz     short loc_1409FF7FE
 * 00000001409FF7AC: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FF7B1: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF7BB: add     rax, rsi
 * 00000001409FF7BE: xor     edx, edx
 * 00000001409FF7C0: mov     [rsi+900h], rax
 * 00000001409FF7C7: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FF7D1: add     rax, rcx
 * 00000001409FF7D4: mov     [rsi+908h], rax
 * 00000001409FF7DB: movsxd  rax, dword ptr [rcx]
 * 00000001409FF7DE: mov     rcx, rsi
 * 00000001409FF7E1: mov     [rsi+910h], rax
 * 00000001409FF7E8: lea     eax, [r15+1]
 * 00000001409FF7EC: mov     [rsi+918h], rax
 * 00000001409FF7F3: mov     [rsi+8F8h], eax
 * 00000001409FF7F9: call    $$b8
 * 00000001409FF7FE: mov     edx, 1
 * 00000001409FF803: cmp     [r14+18h], rdx
 * 00000001409FF807: jz      loc_1409F631B
 * 00000001409FF80D: jmp     short loc_1409FF814
 * 00000001409FF80F: mov     edx, 1
 * 00000001409FF814: cmp     rbx, r13
 * 00000001409FF817: jnz     loc_1409F631B
 * 00000001409FF81D: cmp     [rsi+8F8h], r15d
 * 00000001409FF824: jnz     loc_1409F631B
 * 00000001409FF82A: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FF82F: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF839: add     rax, rsi
 * 00000001409FF83C: mov     [rsi+900h], rax
 * 00000001409FF843: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FF84D: add     rax, rcx
 * 00000001409FF850: mov     [rsi+908h], rax
 * 00000001409FF857: movsxd  rax, dword ptr [rcx]
 * 00000001409FF85A: mov     [rsi+910h], rax
 * 00000001409FF861: mov     [rsi+918h], rbx
 * 00000001409FF868: mov     [rsi+8F8h], edx
 * 00000001409FF86E: jmp     loc_1409F66F2
 * 00000001409FF873: mov     edx, 1
 * 00000001409FF878: cmp     [rsi+824h], eax
 * 00000001409FF87E: jnz     short loc_1409FF89C
 * 00000001409FF880: cmp     r10d, r8d
 * 00000001409FF883: jnz     loc_1409FFDB2
 * 00000001409FF889: cmp     [rsi+980h], rax
 * 00000001409FF890: jnz     loc_1409FFA35
 * 00000001409FF896: mov     [rsi+824h], eax
 * 00000001409FF89C: xor     r15d, r15d
 * 00000001409FF89F: mov     r9, [r13+8]
 * 00000001409FF8A3: mov     r8d, [rsi+824h]
 * 00000001409FF8AA: mov     ecx, [r13+10h]
 * 00000001409FF8AE: mov     [rbp+0BE0h+var_C10], r9
 * 00000001409FF8B2: lea     rax, [r8+r8*2]
 * 00000001409FF8B6: lea     r14, [r9+rax*4]
 * 00000001409FF8BA: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001409FF8C4: mul     rcx
 * 00000001409FF8C7: mov     [rsp+0CE0h+var_C88], r14
 * 00000001409FF8CC: shr     rdx, 3
 * 00000001409FF8D0: lea     rax, [rdx+rdx*2]
 * 00000001409FF8D4: lea     r12, [r9+rax*4]
 * 00000001409FF8D8: mov     [rbp+0BE0h+var_C20], r12
 * 00000001409FF8DC: lea     r12, ds:30h[r8*4]
 * 00000001409FF8E4: add     r12, r13
 * 00000001409FF8E7: mov     [rbp+0BE0h+var_C50], r12
 * 00000001409FF8EB: cmp     r14, [rbp+0BE0h+var_C20]
 * 00000001409FF8EF: jz      loc_140A00471
 * 00000001409FF8F5: mov     rdi, [rbp+0BE0h+var_C20]
 * 00000001409FF8F9: cmp     [r12], r15d
 * 00000001409FF8FD: jl      loc_140A00369
 * 00000001409FF903: mov     eax, [r14]
 * 00000001409FF906: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FF90B: mov     r13d, eax
 * 00000001409FF90E: mov     r15d, [r14+4]
 * 00000001409FF912: sub     r15d, eax
 * 00000001409FF915: add     r13, [rcx+20h]
 * 00000001409FF919: mov     [rsp+0CE0h+var_C70], r13
 * 00000001409FF91E: cmp     r10d, 2Bh ; '+'
 * 00000001409FF922: jz      loc_140A00009
 * 00000001409FF928: add     [rsi+828h], r15d
 * 00000001409FF92F: mov     r9, r13
 * 00000001409FF932: mov     r10d, [rsi+814h]
 * 00000001409FF939: mov     rax, r13
 * 00000001409FF93C: mov     r11, [rsi+818h]
 * 00000001409FF943: mov     ecx, r15d
 * 00000001409FF946: add     rcx, r13
 * 00000001409FF949: cmp     r13, rcx
 * 00000001409FF94C: jnb     short loc_1409FF95E
 * 00000001409FF94E: mov     edx, 40h ; '@'
 * 00000001409FF953: prefetchnta byte ptr [rax]
 * 00000001409FF956: add     rax, rdx
 * 00000001409FF959: cmp     rax, rcx
 * 00000001409FF95C: jb      short loc_1409FF953
 * 00000001409FF95E: mov     r8d, r15d
 * 00000001409FF961: mov     rbx, r11
 * 00000001409FF964: shr     r8d, 7
 * 00000001409FF968: test    r8d, r8d
 * 00000001409FF96B: jz      short loc_1409FF9E1
 * 00000001409FF96D: mov     r12, 7010008004002001h
 * 00000001409FF977: mov     edx, 8
 * 00000001409FF97C: lea     edi, [rdx-7]
 * 00000001409FF97F: mov     rax, [r9]
 * 00000001409FF982: mov     ecx, r10d
 * 00000001409FF985: xor     rax, rbx
 * 00000001409FF988: mov     rbx, [r9+8]
 * 00000001409FF98C: rol     rax, cl
 * 00000001409FF98F: add     r9, 10h
 * 00000001409FF993: xor     rbx, rax
 * 00000001409FF996: rol     rbx, cl
 * 00000001409FF999: sub     rdx, rdi
 * 00000001409FF99C: jnz     short loc_1409FF97F
 * 00000001409FF99E: mov     rcx, r9
 * 00000001409FF9A1: sub     rcx, r13
 * 00000001409FF9A4: xor     rcx, r11
 * 00000001409FF9A7: mov     rax, rcx
 * 00000001409FF9AA: rol     rax, 11h
 * 00000001409FF9AE: xor     rcx, rax
 * 00000001409FF9B1: mov     rax, r12
 * 00000001409FF9B4: mul     rcx
 * 00000001409FF9B7: xor     r10d, eax
 * 00000001409FF9BA: mov     [rbp+0BE0h+var_5C8], rdx
 * 00000001409FF9C1: xor     r10d, edx
 * 00000001409FF9C4: mov     rax, rdi
 * 00000001409FF9C7: and     r10d, 3Fh
 * 00000001409FF9CB: cmovz   r10d, eax
 * 00000001409FF9CF: mov     eax, 0FFFFFFFFh
 * 00000001409FF9D4: add     r8d, eax
 * 00000001409FF9D7: jnz     short loc_1409FF977
 * 00000001409FF9D9: mov     r12, [rbp+0BE0h+var_C50]
 * 00000001409FF9DD: mov     rdi, [rbp+0BE0h+var_C20]
 * 00000001409FF9E1: mov     edx, r15d
 * 00000001409FF9E4: mov     r11d, 1
 * 00000001409FF9EA: and     edx, 7Fh
 * 00000001409FF9ED: cmp     edx, 8
 * 00000001409FF9F0: jb      short loc_1409FFA0E
 * 00000001409FF9F2: mov     r8d, edx
 * 00000001409FF9F5: shr     r8, 3
 * 00000001409FF9F9: xor     rbx, [r9]
 * 00000001409FF9FC: mov     ecx, r10d
 * 00000001409FF9FF: rol     rbx, cl
 * 00000001409FFA02: add     r9, 8
 * 00000001409FFA06: add     edx, 0FFFFFFF8h
 * 00000001409FFA09: sub     r8, r11
 * 00000001409FFA0C: jnz     short loc_1409FF9F9
 * 00000001409FFA0E: test    edx, edx
 * 00000001409FFA10: jz      short loc_1409FFA2D
 * 00000001409FFA12: mov     r8d, 0FFFFFFFFh
 * 00000001409FFA18: movzx   eax, byte ptr [r9]
 * 00000001409FFA1C: mov     ecx, r10d
 * 00000001409FFA1F: xor     rbx, rax
 * 00000001409FFA22: add     r9, r11
 * 00000001409FFA25: rol     rbx, cl
 * 00000001409FFA28: add     edx, r8d
 * 00000001409FFA2B: jnz     short loc_1409FFA18
 * 00000001409FFA2D: mov     rax, rbx
 * 00000001409FFA30: jmp     loc_1409FFFF3
 * 00000001409FFA35: mov     eax, [rsi+994h]
 * 00000001409FFA3B: mov     ecx, eax
 * 00000001409FFA3D: shl     ecx, 3
 * 00000001409FFA40: xor     ecx, eax
 * 00000001409FFA42: and     ecx, 20h
 * 00000001409FFA45: xor     ecx, eax
 * 00000001409FFA47: mov     [rsi+994h], ecx
 * 00000001409FFA4D: test    cl, 4
 * 00000001409FFA50: jz      loc_1409FFB25
 * 00000001409FFA56: mov     r14d, [r13+8]
 * 00000001409FFA5A: xor     r15d, r15d
 * 00000001409FFA5D: mov     ecx, [r13+10h]
 * 00000001409FFA61: and     r14d, 0FFFh
 * 00000001409FFA68: mov     rbx, [r13+8]
 * 00000001409FFA6C: add     r14, 0FFFh
 * 00000001409FFA73: add     r14, rcx
 * 00000001409FFA76: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001409FFA7D: shr     r14, 0Ch
 * 00000001409FFA81: test    r14, r14
 * 00000001409FFA84: jz      loc_1409FF89F
 * 00000001409FFA8A: jmp     short loc_1409FFA91
 * 00000001409FFA8C: mov     edx, 1
 * 00000001409FFA91: mov     rax, [rsi+2B0h]
 * 00000001409FFA98: mov     rcx, rbx
 * 00000001409FFA9B: sub     r14, rdx
 * 00000001409FFA9E: call    KeGuardDispatchICall
 * 00000001409FFAA3: test    al, al
 * 00000001409FFAA5: jz      short loc_1409FFAFF
 * 00000001409FFAA7: cmp     [rsi+8F8h], r15d
 * 00000001409FFAAE: jnz     short loc_1409FFAFF
 * 00000001409FFAB0: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FFABA: mov     edi, 1
 * 00000001409FFABF: add     rax, rsi
 * 00000001409FFAC2: xor     edx, edx
 * 00000001409FFAC4: mov     [rsi+900h], rax
 * 00000001409FFACB: mov     rcx, rsi
 * 00000001409FFACE: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FFAD8: add     rax, r13
 * 00000001409FFADB: mov     [rsi+908h], rax
 * 00000001409FFAE2: movsxd  rax, dword ptr [r13+0]
 * 00000001409FFAE6: mov     [rsi+910h], rax
 * 00000001409FFAED: mov     [rsi+918h], rbx
 * 00000001409FFAF4: mov     [rsi+8F8h], edi
 * 00000001409FFAFA: call    $$b8
 * 00000001409FFAFF: add     dword ptr [rsi+828h], 100h
 * 00000001409FFB09: add     rbx, 1000h
 * 00000001409FFB10: test    r14, r14
 * 00000001409FFB13: jnz     loc_1409FFA8C
 * 00000001409FFB19: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FFB20: jmp     loc_1409FFDA6
 * 00000001409FFB25: mov     r14, [r13+8]
 * 00000001409FFB29: mov     r8d, [r13+10h]
 * 00000001409FFB2D: mov     r9, r14
 * 00000001409FFB30: add     [rsi+828h], r8d
 * 00000001409FFB37: mov     rax, r14
 * 00000001409FFB3A: mov     r11d, [rsi+814h]
 * 00000001409FFB41: mov     r15, [rsi+818h]
 * 00000001409FFB48: lea     rcx, [r14+r8]
 * 00000001409FFB4C: cmp     r14, rcx
 * 00000001409FFB4F: jnb     short loc_1409FFB62
 * 00000001409FFB51: mov     r10d, 40h ; '@'
 * 00000001409FFB57: prefetchnta byte ptr [rax]
 * 00000001409FFB5A: add     rax, r10
 * 00000001409FFB5D: cmp     rax, rcx
 * 00000001409FFB60: jb      short loc_1409FFB57
 * 00000001409FFB62: mov     r10d, r8d
 * 00000001409FFB65: mov     rbx, r15
 * 00000001409FFB68: shr     r10d, 7
 * 00000001409FFB6C: mov     r12d, 0FFFFFFFFh
 * 00000001409FFB72: test    r10d, r10d
 * 00000001409FFB75: jz      short loc_1409FFBEA
 * 00000001409FFB77: mov     rdi, 7010008004002001h
 * 00000001409FFB81: mov     edx, 8
 * 00000001409FFB86: lea     esi, [rdx-7]
 * 00000001409FFB89: mov     rax, [r9]
 * 00000001409FFB8C: mov     ecx, r11d
 * 00000001409FFB8F: xor     rax, rbx
 * 00000001409FFB92: mov     rbx, [r9+8]
 * 00000001409FFB96: rol     rax, cl
 * 00000001409FFB99: add     r9, 10h
 * 00000001409FFB9D: xor     rbx, rax
 * 00000001409FFBA0: rol     rbx, cl
 * 00000001409FFBA3: sub     rdx, rsi
 * 00000001409FFBA6: jnz     short loc_1409FFB89
 * 00000001409FFBA8: mov     rcx, r9
 * 00000001409FFBAB: sub     rcx, r14
 * 00000001409FFBAE: xor     rcx, r15
 * 00000001409FFBB1: mov     rax, rcx
 * 00000001409FFBB4: rol     rax, 11h
 * 00000001409FFBB8: xor     rcx, rax
 * 00000001409FFBBB: mov     rax, rdi
 * 00000001409FFBBE: mul     rcx
 * 00000001409FFBC1: xor     r11d, eax
 * 00000001409FFBC4: mov     [rbp+0BE0h+var_5D8], rdx
 * 00000001409FFBCB: xor     r11d, edx
 * 00000001409FFBCE: mov     rdx, rsi
 * 00000001409FFBD1: and     r11d, 3Fh
 * 00000001409FFBD5: cmovz   r11d, edx
 * 00000001409FFBD9: add     r10d, r12d
 * 00000001409FFBDC: jnz     short loc_1409FFB81
 * 00000001409FFBDE: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FFBE3: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FFBEA: and     r8d, 7Fh
 * 00000001409FFBEE: cmp     r8d, 8
 * 00000001409FFBF2: jb      short loc_1409FFC20
 * 00000001409FFBF4: mov     edx, r8d
 * 00000001409FFBF7: mov     esi, 1
 * 00000001409FFBFC: shr     rdx, 3
 * 00000001409FFC00: xor     rbx, [r9]
 * 00000001409FFC03: mov     ecx, r11d
 * 00000001409FFC06: rol     rbx, cl
 * 00000001409FFC09: add     r9, 8
 * 00000001409FFC0D: add     r8d, 0FFFFFFF8h
 * 00000001409FFC11: sub     rdx, rsi
 * 00000001409FFC14: jnz     short loc_1409FFC00
 * 00000001409FFC16: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FFC1B: mov     edx, 1
 * 00000001409FFC20: xor     r15d, r15d
 * 00000001409FFC23: test    r8d, r8d
 * 00000001409FFC26: jz      short loc_1409FFC3D
 * 00000001409FFC28: movzx   eax, byte ptr [r9]
 * 00000001409FFC2C: mov     ecx, r11d
 * 00000001409FFC2F: xor     rbx, rax
 * 00000001409FFC32: add     r9, rdx
 * 00000001409FFC35: rol     rbx, cl
 * 00000001409FFC38: add     r8d, r12d
 * 00000001409FFC3B: jnz     short loc_1409FFC28
 * 00000001409FFC3D: mov     rax, rbx
 * 00000001409FFC40: jmp     short loc_1409FFC44
 * 00000001409FFC42: xor     ebx, eax
 * 00000001409FFC44: shr     rax, 1Fh
 * 00000001409FFC48: test    rax, rax
 * 00000001409FFC4B: jnz     short loc_1409FFC42
 * 00000001409FFC4D: mov     r8d, [r13+14h]
 * 00000001409FFC51: btr     ebx, 1Fh
 * 00000001409FFC55: cmp     ebx, r8d
 * 00000001409FFC58: jz      loc_1409FFDA6
 * 00000001409FFC5E: mov     ecx, [r13+10h]
 * 00000001409FFC62: mov     rdx, [r13+8]
 * 00000001409FFC66: test    rcx, rcx
 * 00000001409FFC69: jz      loc_1409FFD2C
 * 00000001409FFC6F: mov     eax, [rsi+994h]
 * 00000001409FFC75: mov     r9d, 40h ; '@'
 * 00000001409FFC7B: test    r9b, al
 * 00000001409FFC7E: jz      loc_1409FFD2C
 * 00000001409FFC84: mov     r12, cr8
 * 00000001409FFC88: lea     eax, [r9-3Eh]
 * 00000001409FFC8C: mov     cr8, rax
 * 00000001409FFC90: mov     r14, rdx
 * 00000001409FFC93: lea     rax, [rcx-1]
 * 00000001409FFC97: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FFC9E: add     rax, rdx
 * 00000001409FFCA1: or      rax, 0FFFh
 * 00000001409FFCA7: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FFCAC: lea     r13, [r14-1]
 * 00000001409FFCB0: movzx   r15d, r12b
 * 00000001409FFCB4: mov     rax, [rsi+468h]
 * 00000001409FFCBB: xor     edx, edx
 * 00000001409FFCBD: mov     rcx, r14
 * 00000001409FFCC0: call    KeGuardDispatchICall
 * 00000001409FFCC5: cmp     eax, 0C000022Dh
 * 00000001409FFCCA: jnz     short loc_1409FFCF0
 * 00000001409FFCCC: mov     eax, 1
 * 00000001409FFCD1: cmp     r12b, al
 * 00000001409FFCD4: ja      short loc_1409FFCF4
 * 00000001409FFCD6: movzx   r15d, r12b
 * 00000001409FFCDA: mov     cr8, r15
 * 00000001409FFCDE: mov     al, [r14]
 * 00000001409FFCE1: mov     rax, cr8
 * 00000001409FFCE5: mov     eax, 2
 * 00000001409FFCEA: mov     cr8, rax
 * 00000001409FFCEE: jmp     short loc_1409FFCB4
 * 00000001409FFCF0: test    eax, eax
 * 00000001409FFCF2: js      short loc_1409FFD1C
 * 00000001409FFCF4: mov     r11d, 1000h
 * 00000001409FFCFA: add     r14, r11
 * 00000001409FFCFD: add     r13, r11
 * 00000001409FFD00: cmp     r13, [rsp+0CE0h+var_C70]
 * 00000001409FFD05: jnz     short loc_1409FFCB0
 * 00000001409FFD07: mov     cr8, r15
 * 00000001409FFD0B: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FFD12: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FFD17: jmp     loc_1409FF89C
 * 00000001409FFD1C: mov     cr8, r15
 * 00000001409FFD20: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FFD25: xor     r15d, r15d
 * 00000001409FFD28: mov     r8d, [r13+14h]
 * 00000001409FFD2C: mov     eax, [rsi+8F8h]
 * 00000001409FFD32: test    eax, eax
 * 00000001409FFD34: jnz     short loc_1409FFD51
 * 00000001409FFD36: mov     ecx, ebx
 * 00000001409FFD38: mov     eax, r8d
 * 00000001409FFD3B: xor     rcx, rax
 * 00000001409FFD3E: mov     rax, [rsi+590h]
 * 00000001409FFD45: mov     [rax+18h], rcx
 * 00000001409FFD49: mov     eax, [rsi+8F8h]
 * 00000001409FFD4F: test    eax, eax
 * 00000001409FFD51: mov     rcx, [r13+8]
 * 00000001409FFD55: jnz     short loc_1409FFDA6
 * 00000001409FFD57: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FFD61: xor     edx, edx
 * 00000001409FFD63: add     rax, rsi
 * 00000001409FFD66: mov     [rsi+900h], rax
 * 00000001409FFD6D: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FFD77: add     rax, r13
 * 00000001409FFD7A: mov     [rsi+908h], rax
 * 00000001409FFD81: movsxd  rax, dword ptr [r13+0]
 * 00000001409FFD85: mov     [rsi+910h], rax
 * 00000001409FFD8C: mov     eax, 1
 * 00000001409FFD91: mov     [rsi+918h], rcx
 * 00000001409FFD98: mov     rcx, rsi
 * 00000001409FFD9B: mov     [rsi+8F8h], eax
 * 00000001409FFDA1: call    $$b8
 * 00000001409FFDA6: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FFDAD: jmp     loc_1409FF89F
 * 00000001409FFDB2: mov     r14, [r13+8]
 * 00000001409FFDB6: mov     r8d, [r13+10h]
 * 00000001409FFDBA: mov     r9, r14
 * 00000001409FFDBD: add     [rsi+828h], r8d
 * 00000001409FFDC4: mov     rax, r14
 * 00000001409FFDC7: mov     r10d, [rsi+814h]
 * 00000001409FFDCE: mov     r15, [rsi+818h]
 * 00000001409FFDD5: lea     rcx, [r14+r8]
 * 00000001409FFDD9: cmp     r14, rcx
 * 00000001409FFDDC: jnb     short loc_1409FFDEF
 * 00000001409FFDDE: mov     r11d, 40h ; '@'
 * 00000001409FFDE4: prefetchnta byte ptr [rax]
 * 00000001409FFDE7: add     rax, r11
 * 00000001409FFDEA: cmp     rax, rcx
 * 00000001409FFDED: jb      short loc_1409FFDE4
 * 00000001409FFDEF: mov     r11d, r8d
 * 00000001409FFDF2: mov     rbx, r15
 * 00000001409FFDF5: shr     r11d, 7
 * 00000001409FFDF9: mov     r12d, 0FFFFFFFFh
 * 00000001409FFDFF: test    r11d, r11d
 * 00000001409FFE02: jz      short loc_1409FFE77
 * 00000001409FFE04: mov     rdi, 7010008004002001h
 * 00000001409FFE0E: mov     edx, 8
 * 00000001409FFE13: lea     esi, [rdx-7]
 * 00000001409FFE16: mov     rax, [r9]
 * 00000001409FFE19: mov     ecx, r10d
 * 00000001409FFE1C: xor     rax, rbx
 * 00000001409FFE1F: mov     rbx, [r9+8]
 * 00000001409FFE23: rol     rax, cl
 * 00000001409FFE26: add     r9, 10h
 * 00000001409FFE2A: xor     rbx, rax
 * 00000001409FFE2D: rol     rbx, cl
 * 00000001409FFE30: sub     rdx, rsi
 * 00000001409FFE33: jnz     short loc_1409FFE16
 * 00000001409FFE35: mov     rcx, r9
 * 00000001409FFE38: sub     rcx, r14
 * 00000001409FFE3B: xor     rcx, r15
 * 00000001409FFE3E: mov     rax, rcx
 * 00000001409FFE41: rol     rax, 11h
 * 00000001409FFE45: xor     rcx, rax
 * 00000001409FFE48: mov     rax, rdi
 * 00000001409FFE4B: mul     rcx
 * 00000001409FFE4E: xor     r10d, eax
 * 00000001409FFE51: mov     [rbp+0BE0h+var_5D0], rdx
 * 00000001409FFE58: xor     r10d, edx
 * 00000001409FFE5B: mov     rdx, rsi
 * 00000001409FFE5E: and     r10d, 3Fh
 * 00000001409FFE62: cmovz   r10d, edx
 * 00000001409FFE66: add     r11d, r12d
 * 00000001409FFE69: jnz     short loc_1409FFE0E
 * 00000001409FFE6B: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FFE70: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FFE77: and     r8d, 7Fh
 * 00000001409FFE7B: cmp     r8d, 8
 * 00000001409FFE7F: jb      short loc_1409FFEAD
 * 00000001409FFE81: mov     edx, r8d
 * 00000001409FFE84: mov     esi, 1
 * 00000001409FFE89: shr     rdx, 3
 * 00000001409FFE8D: xor     rbx, [r9]
 * 00000001409FFE90: mov     ecx, r10d
 * 00000001409FFE93: rol     rbx, cl
 * 00000001409FFE96: add     r9, 8
 * 00000001409FFE9A: add     r8d, 0FFFFFFF8h
 * 00000001409FFE9E: sub     rdx, rsi
 * 00000001409FFEA1: jnz     short loc_1409FFE8D
 * 00000001409FFEA3: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FFEA8: mov     edx, 1
 * 00000001409FFEAD: xor     r15d, r15d
 * 00000001409FFEB0: test    r8d, r8d
 * 00000001409FFEB3: jz      short loc_1409FFECA
 * 00000001409FFEB5: movzx   eax, byte ptr [r9]
 * 00000001409FFEB9: mov     ecx, r10d
 * 00000001409FFEBC: xor     rbx, rax
 * 00000001409FFEBF: add     r9, rdx
 * 00000001409FFEC2: rol     rbx, cl
 * 00000001409FFEC5: add     r8d, r12d
 * 00000001409FFEC8: jnz     short loc_1409FFEB5
 * 00000001409FFECA: mov     rax, rbx
 * 00000001409FFECD: jmp     short loc_1409FFED1
 * 00000001409FFECF: xor     ebx, eax
 * 00000001409FFED1: shr     rax, 1Fh
 * 00000001409FFED5: test    rax, rax
 * 00000001409FFED8: jnz     short loc_1409FFECF
 * 00000001409FFEDA: mov     rax, [rsp+0CE0h+var_C90]
 * 00000001409FFEDF: btr     ebx, 1Fh
 * 00000001409FFEE3: mov     r13d, r15d
 * 00000001409FFEE6: cmp     ebx, [rax+14h]
 * 00000001409FFEE9: jz      loc_1409FFFE0
 * 00000001409FFEEF: cmp     [rax], r15d
 * 00000001409FFEF2: jnz     short loc_1409FFEFC
 * 00000001409FFEF4: cmp     [rax+18h], r15d
 * 00000001409FFEF8: cmovnz  r13d, edx
 * 00000001409FFEFC: mov     ecx, [rax+10h]
 * 00000001409FFEFF: mov     rdx, [rax+8]
 * 00000001409FFF03: test    rcx, rcx
 * 00000001409FFF06: jz      loc_1409FFFC2
 * 00000001409FFF0C: mov     eax, [rsi+994h]
 * 00000001409FFF12: mov     r8d, 40h ; '@'
 * 00000001409FFF18: test    r8b, al
 * 00000001409FFF1B: jz      loc_1409FFFC2
 * 00000001409FFF21: mov     r12, cr8
 * 00000001409FFF25: lea     eax, [r8-3Eh]
 * 00000001409FFF29: mov     cr8, rax
 * 00000001409FFF2D: mov     r14, rdx
 * 00000001409FFF30: lea     rax, [rcx-1]
 * 00000001409FFF34: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FFF3B: add     rax, rdx
 * 00000001409FFF3E: or      rax, 0FFFh
 * 00000001409FFF44: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FFF49: lea     rax, [r14-1]
 * 00000001409FFF4D: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FFF52: movzx   r15d, r12b
 * 00000001409FFF56: mov     rax, [rsi+468h]
 * 00000001409FFF5D: xor     edx, edx
 * 00000001409FFF5F: mov     rcx, r14
 * 00000001409FFF62: call    KeGuardDispatchICall
 * 00000001409FFF67: cmp     eax, 0C000022Dh
 * 00000001409FFF6C: jnz     short loc_1409FFF95
 * 00000001409FFF6E: test    r13d, r13d
 * 00000001409FFF71: jnz     short loc_1409FFFBB
 * 00000001409FFF73: lea     eax, [r13+1]
 * 00000001409FFF77: cmp     r12b, al
 * 00000001409FFF7A: ja      short loc_1409FFF99
 * 00000001409FFF7C: movzx   r15d, r12b
 * 00000001409FFF80: mov     cr8, r15
 * 00000001409FFF84: mov     al, [r14]
 * 00000001409FFF87: mov     rax, cr8
 * 00000001409FFF8B: lea     eax, [r13+2]
 * 00000001409FFF8F: mov     cr8, rax
 * 00000001409FFF93: jmp     short loc_1409FFF56
 * 00000001409FFF95: test    eax, eax
 * 00000001409FFF97: js      short loc_1409FFFBB
 * 00000001409FFF99: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409FFF9E: mov     r11d, 1000h
 * 00000001409FFFA4: add     rax, r11
 * 00000001409FFFA7: add     r14, r11
 * 00000001409FFFAA: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FFFAF: cmp     rax, [rsp+0CE0h+var_C70]
 * 00000001409FFFB4: jnz     short loc_1409FFF52
 * 00000001409FFFB6: jmp     loc_1409FFD07
 * 00000001409FFFBB: mov     cr8, r15
 * 00000001409FFFBF: xor     r15d, r15d
 * 00000001409FFFC2: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FFFC7: mov     eax, [rsi+8F8h]
 * 00000001409FFFCD: mov     ecx, [r13+14h]
 * 00000001409FFFD1: test    eax, eax
 * 00000001409FFFD3: jnz     loc_1409FFD51
 * 00000001409FFFD9: mov     eax, ebx
 * 00000001409FFFDB: jmp     loc_1409FFD3B
 * 00000001409FFFE0: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FFFE7: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FFFEC: jmp     loc_1409FF89F
 * 00000001409FFFF1: xor     ebx, eax
 * 00000001409FFFF3: shr     rax, 1Fh
 * 00000001409FFFF7: test    rax, rax
 * 00000001409FFFFA: jnz     short loc_1409FFFF1
 * 00000001409FFFFC: btr     ebx, 1Fh
 * 0000000140A00000: mov     [rbp+0BE0h+var_C60], rbx
 * 0000000140A00004: jmp     loc_140A002A7
 * 0000000140A00009: mov     r8d, r15d
 * 0000000140A0000C: mov     rdx, r13
 * 0000000140A0000F: mov     rcx, rsi
 * 0000000140A00012: call    sub_140A0C5E8
 * 0000000140A00017: mov     ebx, eax
 * 0000000140A00019: mov     eax, r15d
 * 0000000140A0001C: shl     eax, 3
 * 0000000140A0001F: add     [rsi+828h], eax
 * 0000000140A00025: mov     eax, [rsi+994h]
 * 0000000140A0002B: mov     [rbp+0BE0h+var_C60], rbx
 * 0000000140A0002F: bt      eax, 0Bh
 * 0000000140A00033: jnb     loc_140A002A7
 * 0000000140A00039: lea     rbx, [r13-6]
 * 0000000140A0003D: xor     r10d, r10d
 * 0000000140A00040: lea     r14, [rbx+5]
 * 0000000140A00044: mov     al, [r14]
 * 0000000140A00047: cmp     byte ptr [rbx], 4Ch ; 'L'
 * 0000000140A0004A: jnz     loc_140A00242
 * 0000000140A00050: cmp     byte ptr [rbx+1], 87h
 * 0000000140A00054: jnz     loc_140A00242
 * 0000000140A0005A: cmp     [rbx+2], r10b
 * 0000000140A0005E: jnz     loc_140A00242
 * 0000000140A00064: cmp     byte ptr [rbx+3], 98h
 * 0000000140A00068: jnz     loc_140A00242
 * 0000000140A0006E: cmp     byte ptr [rbx+4], 0C3h
 * 0000000140A00072: jnz     loc_140A00242
 * 0000000140A00078: cmp     al, 90h
 * 0000000140A0007A: jz      short loc_140A00084
 * 0000000140A0007C: cmp     al, 0F1h
 * 0000000140A0007E: jnz     loc_140A00242
 * 0000000140A00084: mov     rcx, [rsi+4E0h]
 * 0000000140A0008B: cli
 * 0000000140A0008C: mov     eax, [rsi+990h]
 * 0000000140A00092: shr     eax, 0Ah
 * 0000000140A00095: and     eax, 1Fh
 * 0000000140A00098: lock bts [rcx], eax
 * 0000000140A0009C: jnb     short loc_140A000A3
 * 0000000140A0009E: sti
 * 0000000140A0009F: pause
 * 0000000140A000A1: jmp     short loc_140A0008B
 * 0000000140A000A3: mov     rdx, [rsi+8E0h]
 * 0000000140A000AA: mov     r8d, 26h ; '&'
 * 0000000140A000B0: mov     ecx, 130h
 * 0000000140A000B5: mov     rax, rdx
 * 0000000140A000B8: lea     r9d, [r8-25h]
 * 0000000140A000BC: mov     [rax], r10
 * 0000000140A000BF: add     ecx, 0FFFFFFF8h
 * 0000000140A000C2: add     rax, 8
 * 0000000140A000C6: sub     r8, r9
 * 0000000140A000C9: jnz     short loc_140A000BC
 * 0000000140A000CB: test    ecx, ecx
 * 0000000140A000CD: jz      short loc_140A000E0
 * 0000000140A000CF: mov     r8d, 0FFFFFFFFh
 * 0000000140A000D5: mov     [rax], r10b
 * 0000000140A000D8: add     rax, r9
 * 0000000140A000DB: add     ecx, r8d
 * 0000000140A000DE: jnz     short loc_140A000D5
 * 0000000140A000E0: movups  xmm0, xmmword ptr [rsi+848h]
 * 0000000140A000E7: mov     eax, 12Fh
 * 0000000140A000EC: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140A000F1: movups  xmm1, xmmword ptr [rsi+858h]
 * 0000000140A000F8: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140A000FD: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140A00104: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140A0010C: mov     word ptr [rbp+0BE0h+var_8E0], ax
 * 0000000140A00113: lea     rax, [rsi+88Ch]
 * 0000000140A0011A: mov     [rbp+302h], rdx
 * 0000000140A00121: mov     rcx, rax
 * 0000000140A00124: mov     [rdx+10h], ax
 * 0000000140A00128: shr     rcx, 10h
 * 0000000140A0012C: mov     [rbp+0BE0h+var_5C0], rax
 * 0000000140A00133: shr     rax, 20h
 * 0000000140A00137: mov     [rdx+16h], cx
 * 0000000140A0013B: mov     [rdx+18h], eax
 * 0000000140A0013E: sidt    fword ptr [rbp+0BE0h+var_740]
 * 0000000140A00145: lidt    fword ptr [rbp+0BE0h+var_8E0]
 * 0000000140A0014C: mov     byte ptr [r14], 0F1h
 * 0000000140A00150: mov     al, [r14]
 * 0000000140A00153: cmp     al, 0F1h
 * 0000000140A00155: jnz     loc_140A001FD
 * 0000000140A0015B: test    dword ptr [rsi+994h], 20000h
 * 0000000140A00165: jnz     short loc_140A001AD
 * 0000000140A00167: mov     rdx, gs:20h
 * 0000000140A00170: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A0017A: mov     rax, [rsi+4C0h]
 * 0000000140A00181: add     rcx, rsi
 * 0000000140A00184: mov     [rax], rcx
 * 0000000140A00187: lea     rcx, [rbx+6]
 * 0000000140A0018B: mov     rax, [rsi+4C8h]
 * 0000000140A00192: mov     [rax], rdx
 * 0000000140A00195: mov     rax, [rsi+4D0h]
 * 0000000140A0019C: mov     [rax], rcx
 * 0000000140A0019F: mov     rax, [rsi+4D8h]
 * 0000000140A001A6: mov     qword ptr [rax], 113h
 * 0000000140A001AD: mov     rax, r14
 * 0000000140A001B0: call    KeGuardDispatchICall
 * 0000000140A001B5: xor     r10d, r10d
 * 0000000140A001B8: test    dword ptr [rsi+994h], 20000h
 * 0000000140A001C2: jnz     short loc_140A001F6
 * 0000000140A001C4: mov     rax, [rsi+4C0h]
 * 0000000140A001CB: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A001D5: mov     [rax], rcx
 * 0000000140A001D8: mov     rax, [rsi+4C8h]
 * 0000000140A001DF: mov     [rax], r10
 * 0000000140A001E2: mov     rax, [rsi+4D0h]
 * 0000000140A001E9: mov     [rax], r10
 * 0000000140A001EC: mov     rax, [rsi+4D8h]
 * 0000000140A001F3: mov     [rax], r10
 * 0000000140A001F6: mov     al, [r14]
 * 0000000140A001F9: cmp     al, 0F1h
 * 0000000140A001FB: jz      short loc_140A00202
 * 0000000140A001FD: mov     r9d, r10d
 * 0000000140A00200: jmp     short loc_140A00215
 * 0000000140A00202: mov     byte ptr [r14], 90h
 * 0000000140A00206: mov     r9d, 1
 * 0000000140A0020C: mov     al, [r14]
 * 0000000140A0020F: cmp     al, 90h
 * 0000000140A00211: cmovnz  r9d, r10d
 * 0000000140A00215: lidt    fword ptr [rbp+0BE0h+var_740]
 * 0000000140A0021C: mov     ecx, [rsi+990h]
 * 0000000140A00222: mov     edx, 1
 * 0000000140A00227: mov     r8, [rsi+4E0h]
 * 0000000140A0022E: shr     ecx, 0Ah
 * 0000000140A00231: and     ecx, 1Fh
 * 0000000140A00234: shl     edx, cl
 * 0000000140A00236: not     edx
 * 0000000140A00238: lock and [r8], edx
 * 0000000140A0023C: sti
 * 0000000140A0023D: test    r9d, r9d
 * 0000000140A00240: jnz     short loc_140A0029E
 * 0000000140A00242: cmp     [rsi+8F8h], r10d
 * 0000000140A00249: jnz     short loc_140A0029E
 * 0000000140A0024B: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A00250: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0025A: add     rax, rsi
 * 0000000140A0025D: xor     edx, edx
 * 0000000140A0025F: mov     [rsi+900h], rax
 * 0000000140A00266: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00270: add     rax, rcx
 * 0000000140A00273: mov     [rsi+908h], rax
 * 0000000140A0027A: movsxd  rax, dword ptr [rcx]
 * 0000000140A0027D: mov     rcx, rsi
 * 0000000140A00280: mov     [rsi+910h], rax
 * 0000000140A00287: mov     eax, 1
 * 0000000140A0028C: mov     [rsi+918h], rbx
 * 0000000140A00293: mov     [rsi+8F8h], eax
 * 0000000140A00299: call    $$b8
 * 0000000140A0029E: mov     rbx, [rbp+0BE0h+var_C60]
 * 0000000140A002A2: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A002A7: mov     ecx, [r12]
 * 0000000140A002AB: mov     eax, ecx
 * 0000000140A002AD: btr     eax, 1Fh
 * 0000000140A002B1: cmp     ebx, eax
 * 0000000140A002B3: jz      loc_140A00366
 * 0000000140A002B9: mov     edx, r15d
 * 0000000140A002BC: xor     r15d, r15d
 * 0000000140A002BF: test    rdx, rdx
 * 0000000140A002C2: jz      loc_140A003EA
 * 0000000140A002C8: mov     eax, [rsi+994h]
 * 0000000140A002CE: lea     r8d, [r15+40h]
 * 0000000140A002D2: test    r8b, al
 * 0000000140A002D5: jz      loc_140A003EA
 * 0000000140A002DB: mov     r15, cr8
 * 0000000140A002DF: lea     eax, [r8-3Eh]
 * 0000000140A002E3: mov     cr8, rax
 * 0000000140A002E7: mov     rbx, r13
 * 0000000140A002EA: dec     r13
 * 0000000140A002ED: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A002F4: add     r13, rdx
 * 0000000140A002F7: or      r13, 0FFFh
 * 0000000140A002FE: lea     r12, [rbx-1]
 * 0000000140A00302: movzx   r14d, r15b
 * 0000000140A00306: mov     rax, [rsi+468h]
 * 0000000140A0030D: xor     edx, edx
 * 0000000140A0030F: mov     rcx, rbx
 * 0000000140A00312: call    KeGuardDispatchICall
 * 0000000140A00317: cmp     eax, 0C000022Dh
 * 0000000140A0031C: jnz     short loc_140A00341
 * 0000000140A0031E: mov     eax, 1
 * 0000000140A00323: cmp     r15b, al
 * 0000000140A00326: ja      short loc_140A00349
 * 0000000140A00328: movzx   r14d, r15b
 * 0000000140A0032C: mov     cr8, r14
 * 0000000140A00330: mov     al, [rbx]
 * 0000000140A00332: mov     rax, cr8
 * 0000000140A00336: mov     eax, 2
 * 0000000140A0033B: mov     cr8, rax
 * 0000000140A0033F: jmp     short loc_140A00306
 * 0000000140A00341: test    eax, eax
 * 0000000140A00343: js      loc_140A003D2
 * 0000000140A00349: mov     eax, 1000h
 * 0000000140A0034E: add     rbx, rax
 * 0000000140A00351: add     r12, rax
 * 0000000140A00354: cmp     r12, r13
 * 0000000140A00357: jnz     short loc_140A00302
 * 0000000140A00359: mov     cr8, r14
 * 0000000140A0035D: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A00362: mov     r12, [rbp+0BE0h+var_C50]
 * 0000000140A00366: xor     r15d, r15d
 * 0000000140A00369: add     r12, 4
 * 0000000140A0036D: add     r14, 0Ch
 * 0000000140A00371: mov     [rbp+0BE0h+var_C50], r12
 * 0000000140A00375: mov     [rsp+0CE0h+var_C88], r14
 * 0000000140A0037A: cmp     r14, rdi
 * 0000000140A0037D: jnb     short loc_140A00398
 * 0000000140A0037F: mov     rax, [rbp+0BE0h+var_C08]
 * 0000000140A00383: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0038A: mov     eax, [rax]
 * 0000000140A0038C: cmp     [rsi+828h], eax
 * 0000000140A00392: jl      loc_1409FF8F9
 * 0000000140A00398: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0039F: cmp     r14, [rbp+0BE0h+var_C20]
 * 0000000140A003A3: jz      loc_140A00471
 * 0000000140A003A9: sub     r14, [rbp+0BE0h+var_C10]
 * 0000000140A003AD: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140A003B7: imul    r14
 * 0000000140A003BA: sar     rdx, 1
 * 0000000140A003BD: mov     rax, rdx
 * 0000000140A003C0: shr     rax, 3Fh
 * 0000000140A003C4: add     rdx, rax
 * 0000000140A003C7: mov     [rsi+824h], edx
 * 0000000140A003CD: jmp     loc_1409F631B
 * 0000000140A003D2: mov     cr8, r14
 * 0000000140A003D6: mov     r12, [rbp+0BE0h+var_C50]
 * 0000000140A003DA: xor     r15d, r15d
 * 0000000140A003DD: mov     rbx, [rbp+0BE0h+var_C60]
 * 0000000140A003E1: mov     r13, [rsp+0CE0h+var_C70]
 * 0000000140A003E6: mov     ecx, [r12]
 * 0000000140A003EA: mov     eax, ecx
 * 0000000140A003EC: mov     ecx, [rsi+8F8h]
 * 0000000140A003F2: btr     eax, 1Fh
 * 0000000140A003F6: test    ecx, ecx
 * 0000000140A003F8: jnz     short loc_140A00467
 * 0000000140A003FA: mov     ecx, ebx
 * 0000000140A003FC: xor     rcx, rax
 * 0000000140A003FF: mov     rax, [rsi+590h]
 * 0000000140A00406: mov     [rax+18h], rcx
 * 0000000140A0040A: mov     ecx, [rsi+8F8h]
 * 0000000140A00410: test    ecx, ecx
 * 0000000140A00412: jnz     short loc_140A00467
 * 0000000140A00414: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A00419: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00423: add     rax, rsi
 * 0000000140A00426: xor     edx, edx
 * 0000000140A00428: mov     [rsi+900h], rax
 * 0000000140A0042F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00439: add     rax, rcx
 * 0000000140A0043C: mov     [rsi+908h], rax
 * 0000000140A00443: movsxd  rax, dword ptr [rcx]
 * 0000000140A00446: mov     rcx, rsi
 * 0000000140A00449: mov     [rsi+910h], rax
 * 0000000140A00450: mov     eax, 1
 * 0000000140A00455: mov     [rsi+918h], r13
 * 0000000140A0045C: mov     [rsi+8F8h], eax
 * 0000000140A00462: call    $$b8
 * 0000000140A00467: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A0046C: jmp     loc_140A00369
 * 0000000140A00471: mov     rcx, [rsi+540h]
 * 0000000140A00478: mov     r15, cr8
 * 0000000140A0047C: mov     eax, 0Fh
 * 0000000140A00481: mov     cr8, rax
 * 0000000140A00485: mov     rax, [rsi+150h]
 * 0000000140A0048C: call    KeGuardDispatchICall
 * 0000000140A00491: mov     rax, [rsi+610h]
 * 0000000140A00498: mov     r14, [rsp+0CE0h+var_C90]
 * 0000000140A0049D: mov     rcx, [rax]
 * 0000000140A004A0: mov     eax, [rcx]
 * 0000000140A004A2: lea     rbx, [rcx+10h]
 * 0000000140A004A6: mov     r12b, [rcx+0Ch]
 * 0000000140A004AA: lea     rcx, [rax+rax*2]
 * 0000000140A004AE: lea     r13, [rbx+rcx*8]
 * 0000000140A004B2: mov     r8d, 18h
 * 0000000140A004B8: lea     r9, [r14+18h]
 * 0000000140A004BC: mov     r10, rbx
 * 0000000140A004BF: mov     rcx, [r10]
 * 0000000140A004C2: add     r10, 8
 * 0000000140A004C6: mov     rax, [r9]
 * 0000000140A004C9: add     r9, 8
 * 0000000140A004CD: cmp     rcx, rax
 * 0000000140A004D0: jnz     short loc_140A00506
 * 0000000140A004D2: add     r8d, 0FFFFFFF8h
 * 0000000140A004D6: cmp     r8d, 8
 * 0000000140A004DA: jnb     short loc_140A004BF
 * 0000000140A004DC: test    r8d, r8d
 * 0000000140A004DF: jz      short loc_140A0050F
 * 0000000140A004E1: mov     r11d, 1
 * 0000000140A004E7: movzx   edx, byte ptr [r10]
 * 0000000140A004EB: add     r10, r11
 * 0000000140A004EE: movzx   eax, byte ptr [r9]
 * 0000000140A004F2: add     r9, r11
 * 0000000140A004F5: cmp     rdx, rax
 * 0000000140A004F8: jnz     short loc_140A00506
 * 0000000140A004FA: mov     eax, 0FFFFFFFFh
 * 0000000140A004FF: add     r8d, eax
 * 0000000140A00502: jz      short loc_140A0050F
 * 0000000140A00504: jmp     short loc_140A004E7
 * 0000000140A00506: add     rbx, 18h
 * 0000000140A0050A: cmp     rbx, r13
 * 0000000140A0050D: jb      short loc_140A004B2
 * 0000000140A0050F: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A00514: mov     rcx, [rsi+540h]
 * 0000000140A0051B: mov     rax, [rsi+190h]
 * 0000000140A00522: call    KeGuardDispatchICall
 * 0000000140A00527: movzx   eax, r15b
 * 0000000140A0052B: mov     cr8, rax
 * 0000000140A0052F: xor     r15d, r15d
 * 0000000140A00532: test    r12b, r12b
 * 0000000140A00535: jz      short loc_140A005B1
 * 0000000140A00537: mov     eax, [rsi+994h]
 * 0000000140A0053D: lea     ecx, [r15+10h]
 * 0000000140A00541: test    cl, al
 * 0000000140A00543: jz      short loc_140A005A0
 * 0000000140A00545: cmp     [rsi+8F8h], r15d
 * 0000000140A0054C: jnz     short loc_140A005A0
 * 0000000140A0054E: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A00553: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0055D: add     rax, rsi
 * 0000000140A00560: xor     edx, edx
 * 0000000140A00562: mov     [rsi+900h], rax
 * 0000000140A00569: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00573: add     rax, rcx
 * 0000000140A00576: mov     [rsi+908h], rax
 * 0000000140A0057D: movsxd  rax, dword ptr [rcx]
 * 0000000140A00580: mov     rcx, rsi
 * 0000000140A00583: mov     [rsi+910h], rax
 * 0000000140A0058A: lea     eax, [r15+1]
 * 0000000140A0058E: mov     [rsi+918h], rax
 * 0000000140A00595: mov     [rsi+8F8h], eax
 * 0000000140A0059B: call    $$b8
 * 0000000140A005A0: mov     edx, 1
 * 0000000140A005A5: cmp     [r14+18h], rdx
 * 0000000140A005A9: jz      loc_1409FD44D
 * 0000000140A005AF: jmp     short loc_140A005B6
 * 0000000140A005B1: mov     edx, 1
 * 0000000140A005B6: cmp     rbx, r13
 * 0000000140A005B9: jnz     loc_1409FD44D
 * 0000000140A005BF: cmp     [rsi+8F8h], r15d
 * 0000000140A005C6: jnz     loc_1409FD44D
 * 0000000140A005CC: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A005D1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A005DB: add     rax, rsi
 * 0000000140A005DE: mov     [rsi+900h], rax
 * 0000000140A005E5: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A005EF: add     rax, rcx
 * 0000000140A005F2: mov     [rsi+908h], rax
 * 0000000140A005F9: movsxd  rax, dword ptr [rcx]
 * 0000000140A005FC: mov     rcx, rsi
 * 0000000140A005FF: mov     [rsi+910h], rax
 * 0000000140A00606: mov     [rsi+918h], rbx
 * 0000000140A0060D: mov     [rsi+8F8h], edx
 * 0000000140A00613: xor     edx, edx
 * 0000000140A00615: call    $$b8
 * 0000000140A0061A: jmp     loc_1409FD44D
 * 0000000140A0061F: mov     eax, [r13+24h]
 * 0000000140A00623: add     [rsi+828h], eax
 * 0000000140A00629: mov     ebx, [r13+20h]
 * 0000000140A0062D: mov     r9d, [r13+24h]
 * 0000000140A00631: add     rbx, rsi
 * 0000000140A00634: mov     r11d, [rsi+814h]
 * 0000000140A0063B: mov     r10, rbx
 * 0000000140A0063E: mov     r15, [rsi+818h]
 * 0000000140A00645: mov     rax, rbx
 * 0000000140A00648: lea     rcx, [rbx+r9]
 * 0000000140A0064C: cmp     rbx, rcx
 * 0000000140A0064F: jnb     short loc_140A00661
 * 0000000140A00651: mov     edx, 40h ; '@'
 * 0000000140A00656: prefetchnta byte ptr [rax]
 * 0000000140A00659: add     rax, rdx
 * 0000000140A0065C: cmp     rax, rcx
 * 0000000140A0065F: jb      short loc_140A00656
 * 0000000140A00661: mov     r14d, r9d
 * 0000000140A00664: mov     r8, r15
 * 0000000140A00667: shr     r14d, 7
 * 0000000140A0066B: mov     r12d, 1
 * 0000000140A00671: test    r14d, r14d
 * 0000000140A00674: jz      short loc_140A006E1
 * 0000000140A00676: mov     rsi, 7010008004002001h
 * 0000000140A00680: mov     edx, 8
 * 0000000140A00685: mov     rax, [r10]
 * 0000000140A00688: mov     ecx, r11d
 * 0000000140A0068B: xor     rax, r8
 * 0000000140A0068E: mov     r8, [r10+8]
 * 0000000140A00692: rol     rax, cl
 * 0000000140A00695: add     r10, 10h
 * 0000000140A00699: xor     r8, rax
 * 0000000140A0069C: rol     r8, cl
 * 0000000140A0069F: sub     rdx, r12
 * 0000000140A006A2: jnz     short loc_140A00685
 * 0000000140A006A4: mov     rcx, r10
 * 0000000140A006A7: sub     rcx, rbx
 * 0000000140A006AA: xor     rcx, r15
 * 0000000140A006AD: mov     rax, rcx
 * 0000000140A006B0: rol     rax, 11h
 * 0000000140A006B4: xor     rcx, rax
 * 0000000140A006B7: mov     rax, rsi
 * 0000000140A006BA: mul     rcx
 * 0000000140A006BD: xor     r11d, eax
 * 0000000140A006C0: mov     [rbp+0BE0h+var_5B8], rdx
 * 0000000140A006C7: xor     r11d, edx
 * 0000000140A006CA: mov     eax, 0FFFFFFFFh
 * 0000000140A006CF: and     r11d, 3Fh
 * 0000000140A006D3: cmovz   r11d, r12d
 * 0000000140A006D7: add     r14d, eax
 * 0000000140A006DA: jnz     short loc_140A00680
 * 0000000140A006DC: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A006E1: and     r9d, 7Fh
 * 0000000140A006E5: cmp     r9d, 8
 * 0000000140A006E9: jb      short loc_140A00708
 * 0000000140A006EB: mov     edx, r9d
 * 0000000140A006EE: shr     rdx, 3
 * 0000000140A006F2: xor     r8, [r10]
 * 0000000140A006F5: mov     ecx, r11d
 * 0000000140A006F8: rol     r8, cl
 * 0000000140A006FB: add     r10, 8
 * 0000000140A006FF: add     r9d, 0FFFFFFF8h
 * 0000000140A00703: sub     rdx, r12
 * 0000000140A00706: jnz     short loc_140A006F2
 * 0000000140A00708: xor     r15d, r15d
 * 0000000140A0070B: test    r9d, r9d
 * 0000000140A0070E: jz      short loc_140A0072E
 * 0000000140A00710: mov     r15d, 0FFFFFFFFh
 * 0000000140A00716: movzx   eax, byte ptr [r10]
 * 0000000140A0071A: mov     ecx, r11d
 * 0000000140A0071D: xor     r8, rax
 * 0000000140A00720: add     r10, r12
 * 0000000140A00723: rol     r8, cl
 * 0000000140A00726: add     r9d, r15d
 * 0000000140A00729: jnz     short loc_140A00716
 * 0000000140A0072B: xor     r15d, r15d
 * 0000000140A0072E: mov     rcx, [r13+18h]
 * 0000000140A00732: cmp     r8, rcx
 * 0000000140A00735: jz      loc_1409F631B
 * 0000000140A0073B: mov     eax, [rsi+8F8h]
 * 0000000140A00741: test    eax, eax
 * 0000000140A00743: jnz     short loc_140A00759
 * 0000000140A00745: mov     rax, [rsi+590h]
 * 0000000140A0074C: xor     rcx, r8
 * 0000000140A0074F: mov     [rax+18h], rcx
 * 0000000140A00753: mov     eax, [rsi+8F8h]
 * 0000000140A00759: mov     ecx, [r13+20h]
 * 0000000140A0075D: add     rcx, rsi
 * 0000000140A00760: test    eax, eax
 * 0000000140A00762: jmp     loc_1409FE866
 * 0000000140A00767: mov     ebx, 0Fh
 * 0000000140A0076C: sub     r10d, 2
 * 0000000140A00770: jz      loc_140A00F48
 * 0000000140A00776: sub     r10d, 1
 * 0000000140A0077A: jz      loc_140A00B3A
 * 0000000140A00780: cmp     r10d, 14h
 * 0000000140A00784: jz      short loc_140A007D5
 * 0000000140A00786: xor     r15d, r15d
 * 0000000140A00789: cmp     [rsi+8F8h], r15d
 * 0000000140A00790: jnz     loc_1409F631B
 * 0000000140A00796: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A007A0: add     rax, rsi
 * 0000000140A007A3: mov     [rsi+900h], rax
 * 0000000140A007AA: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A007B4: add     rax, r13
 * 0000000140A007B7: mov     [rsi+908h], rax
 * 0000000140A007BE: mov     qword ptr [rsi+910h], 101h
 * 0000000140A007C9: mov     [rsi+918h], r15
 * 0000000140A007D0: jmp     loc_1409FF868
 * 0000000140A007D5: mov     edx, [r13+28h]
 * 0000000140A007D9: lea     rcx, [rbp+0BE0h+var_2E0]
 * 0000000140A007E0: mov     rax, [rsi+1A0h]
 * 0000000140A007E7: call    KeGuardDispatchICall
 * 0000000140A007EC: mov     rax, [rsi+1D0h]
 * 0000000140A007F3: lea     rdx, [rbp+0BE0h+var_2D0]
 * 0000000140A007FA: lea     rcx, [rbp+0BE0h+var_2E0]
 * 0000000140A00801: call    KeGuardDispatchICall
 * 0000000140A00806: mov     r8, [rsi+0A10h]
 * 0000000140A0080D: xor     r15d, r15d
 * 0000000140A00810: test    r8, r8
 * 0000000140A00813: jz      short loc_140A00825
 * 0000000140A00815: mov     ebx, [r8+320h]
 * 0000000140A0081C: mov     r8, [rsi+0A10h]
 * 0000000140A00823: jmp     short loc_140A00836
 * 0000000140A00825: mov     ecx, 832h
 * 0000000140A0082A: rdmsr
 * 0000000140A0082C: shl     rdx, 20h
 * 0000000140A00830: or      rax, rdx
 * 0000000140A00833: mov     rbx, rax
 * 0000000140A00836: test    r8, r8
 * 0000000140A00839: jz      short loc_140A00844
 * 0000000140A0083B: mov     r14d, [r8+340h]
 * 0000000140A00842: jmp     short loc_140A00855
 * 0000000140A00844: mov     ecx, 834h
 * 0000000140A00849: rdmsr
 * 0000000140A0084B: shl     rdx, 20h
 * 0000000140A0084F: or      rax, rdx
 * 0000000140A00852: mov     r14, rax
 * 0000000140A00855: mov     rax, [rsi+198h]
 * 0000000140A0085C: lea     rcx, [rbp+0BE0h+var_2D0]
 * 0000000140A00863: call    KeGuardDispatchICall
 * 0000000140A00868: mov     ecx, 10h
 * 0000000140A0086D: test    [rsi+87Bh], cl
 * 0000000140A00873: jz      loc_140A009BE
 * 0000000140A00879: cli
 * 0000000140A0087A: mov     rdx, [rsi+8E0h]
 * 0000000140A00881: mov     r8d, 26h ; '&'
 * 0000000140A00887: mov     ecx, 130h
 * 0000000140A0088C: mov     rax, rdx
 * 0000000140A0088F: lea     r12d, [r8-25h]
 * 0000000140A00893: mov     [rax], r15
 * 0000000140A00896: add     ecx, 0FFFFFFF8h
 * 0000000140A00899: add     rax, 8
 * 0000000140A0089D: sub     r8, r12
 * 0000000140A008A0: jnz     short loc_140A00893
 * 0000000140A008A2: test    ecx, ecx
 * 0000000140A008A4: jz      short loc_140A008B7
 * 0000000140A008A6: mov     r8d, 0FFFFFFFFh
 * 0000000140A008AC: mov     [rax], r15b
 * 0000000140A008AF: add     rax, r12
 * 0000000140A008B2: add     ecx, r8d
 * 0000000140A008B5: jnz     short loc_140A008AC
 * 0000000140A008B7: movups  xmm0, xmmword ptr [rsi+848h]
 * 0000000140A008BE: mov     eax, 12Fh
 * 0000000140A008C3: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140A008C8: movups  xmm1, xmmword ptr [rsi+858h]
 * 0000000140A008CF: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140A008D4: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140A008DB: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140A008E3: mov     word ptr [rbp+0BE0h+var_920], ax
 * 0000000140A008EA: lea     rax, [rsi+878h]
 * 0000000140A008F1: mov     [rbp+2C2h], rdx
 * 0000000140A008F8: mov     rcx, rax
 * 0000000140A008FB: mov     [rdx+10h], ax
 * 0000000140A008FF: shr     rcx, 10h
 * 0000000140A00903: mov     [rbp+0BE0h+var_5B0], rax
 * 0000000140A0090A: shr     rax, 20h
 * 0000000140A0090E: mov     [rdx+16h], cx
 * 0000000140A00912: mov     [rdx+18h], eax
 * 0000000140A00915: sidt    fword ptr [rbp+0BE0h+var_770]
 * 0000000140A0091C: lidt    fword ptr [rbp+0BE0h+var_920]
 * 0000000140A00923: test    dword ptr [rsi+994h], 20000h
 * 0000000140A0092D: jnz     short loc_140A00971
 * 0000000140A0092F: mov     rdx, gs:20h
 * 0000000140A00938: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A00942: mov     rax, [rsi+4C0h]
 * 0000000140A00949: add     rcx, rsi
 * 0000000140A0094C: mov     [rax], rcx
 * 0000000140A0094F: mov     rax, [rsi+4C8h]
 * 0000000140A00956: mov     [rax], rdx
 * 0000000140A00959: mov     rax, [rsi+4D0h]
 * 0000000140A00960: mov     [rax], r15
 * 0000000140A00963: mov     rax, [rsi+4D8h]
 * 0000000140A0096A: mov     qword ptr [rax], 115h
 * 0000000140A00971: call    KiErrata361Present
 * 0000000140A00976: test    dword ptr [rsi+994h], 20000h
 * 0000000140A00980: jnz     short loc_140A009B4
 * 0000000140A00982: mov     rax, [rsi+4C0h]
 * 0000000140A00989: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A00993: mov     [rax], rcx
 * 0000000140A00996: mov     rax, [rsi+4C8h]
 * 0000000140A0099D: mov     [rax], r15
 * 0000000140A009A0: mov     rax, [rsi+4D0h]
 * 0000000140A009A7: mov     [rax], r15
 * 0000000140A009AA: mov     rax, [rsi+4D8h]
 * 0000000140A009B1: mov     [rax], r15
 * 0000000140A009B4: lidt    fword ptr [rbp+0BE0h+var_770]
 * 0000000140A009BB: sti
 * 0000000140A009BC: jmp     short loc_140A009C4
 * 0000000140A009BE: mov     r12d, 1
 * 0000000140A009C4: mov     eax, [r13+1Ch]
 * 0000000140A009C8: mov     r8d, [r13+18h]
 * 0000000140A009CC: and     eax, ebx
 * 0000000140A009CE: cmp     eax, r8d
 * 0000000140A009D1: jnz     short loc_140A009F2
 * 0000000140A009D3: bt      ebx, 10h
 * 0000000140A009D7: jb      loc_140A00A7C
 * 0000000140A009DD: cmp     bl, 0D1h
 * 0000000140A009E0: jz      loc_140A00A7C
 * 0000000140A009E6: lea     eax, [rbx+3]
 * 0000000140A009E9: cmp     al, r12b
 * 0000000140A009EC: jbe     loc_140A00A7C
 * 0000000140A009F2: mov     edx, [r13+28h]
 * 0000000140A009F6: mov     rax, 32000000000h
 * 0000000140A00A00: shl     rdx, 30h
 * 0000000140A00A04: or      rdx, r8
 * 0000000140A00A07: or      rdx, rax
 * 0000000140A00A0A: mov     eax, [rsi+8F8h]
 * 0000000140A00A10: test    eax, eax
 * 0000000140A00A12: jnz     short loc_140A00A7C
 * 0000000140A00A14: mov     rax, [rsi+590h]
 * 0000000140A00A1B: mov     ecx, ebx
 * 0000000140A00A1D: xor     rcx, r8
 * 0000000140A00A20: mov     [rax+18h], rcx
 * 0000000140A00A24: mov     eax, [rsi+8F8h]
 * 0000000140A00A2A: test    eax, eax
 * 0000000140A00A2C: jnz     short loc_140A00A7C
 * 0000000140A00A2E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00A38: mov     rbx, 0B3B74BDEE4453415h
 * 0000000140A00A42: add     rax, rsi
 * 0000000140A00A45: mov     rcx, rsi
 * 0000000140A00A48: mov     [rsi+900h], rax
 * 0000000140A00A4F: lea     rax, [rbx+r13]
 * 0000000140A00A53: mov     [rsi+908h], rax
 * 0000000140A00A5A: movsxd  rax, dword ptr [r13+0]
 * 0000000140A00A5E: mov     [rsi+910h], rax
 * 0000000140A00A65: mov     [rsi+918h], rdx
 * 0000000140A00A6C: xor     edx, edx
 * 0000000140A00A6E: mov     [rsi+8F8h], r12d
 * 0000000140A00A75: call    $$b8
 * 0000000140A00A7A: jmp     short loc_140A00A86
 * 0000000140A00A7C: mov     rbx, 0B3B74BDEE4453415h
 * 0000000140A00A86: mov     eax, [r13+24h]
 * 0000000140A00A8A: mov     r8d, [r13+20h]
 * 0000000140A00A8E: and     eax, r14d
 * 0000000140A00A91: cmp     eax, r8d
 * 0000000140A00A94: jnz     short loc_140A00AB8
 * 0000000140A00A96: bt      r14d, 10h
 * 0000000140A00A9B: jb      loc_140A00F36
 * 0000000140A00AA1: cmp     r14b, 0D1h
 * 0000000140A00AA5: jz      loc_140A00F36
 * 0000000140A00AAB: lea     eax, [r14+3]
 * 0000000140A00AAF: cmp     al, r12b
 * 0000000140A00AB2: jbe     loc_140A00F36
 * 0000000140A00AB8: mov     edx, [r13+28h]
 * 0000000140A00ABC: mov     rax, 34000000000h
 * 0000000140A00AC6: shl     rdx, 30h
 * 0000000140A00ACA: or      rdx, r8
 * 0000000140A00ACD: or      rdx, rax
 * 0000000140A00AD0: mov     eax, [rsi+8F8h]
 * 0000000140A00AD6: test    eax, eax
 * 0000000140A00AD8: jnz     loc_140A00F36
 * 0000000140A00ADE: mov     rax, [rsi+590h]
 * 0000000140A00AE5: mov     ecx, r14d
 * 0000000140A00AE8: xor     rcx, r8
 * 0000000140A00AEB: mov     [rax+18h], rcx
 * 0000000140A00AEF: mov     eax, [rsi+8F8h]
 * 0000000140A00AF5: test    eax, eax
 * 0000000140A00AF7: jnz     loc_140A00F36
 * 0000000140A00AFD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00B07: add     rax, rsi
 * 0000000140A00B0A: mov     [rsi+900h], rax
 * 0000000140A00B11: lea     rax, [rbx+r13]
 * 0000000140A00B15: mov     [rsi+908h], rax
 * 0000000140A00B1C: movsxd  rax, dword ptr [r13+0]
 * 0000000140A00B20: mov     [rsi+910h], rax
 * 0000000140A00B27: mov     [rsi+918h], rdx
 * 0000000140A00B2E: mov     [rsi+8F8h], r12d
 * 0000000140A00B35: jmp     loc_140A00F2C
 * 0000000140A00B3A: mov     edx, [r13+28h]
 * 0000000140A00B3E: lea     rcx, [rbp+0BE0h+var_2C0]
 * 0000000140A00B45: mov     rax, [rsi+1A0h]
 * 0000000140A00B4C: call    KeGuardDispatchICall
 * 0000000140A00B51: mov     rax, [rsi+1D0h]
 * 0000000140A00B58: lea     rdx, [rbp+0BE0h+var_2B0]
 * 0000000140A00B5F: lea     rcx, [rbp+0BE0h+var_2C0]
 * 0000000140A00B66: call    KeGuardDispatchICall
 * 0000000140A00B6B: lea     rdx, [rbp+0BE0h+var_190]
 * 0000000140A00B72: lea     rcx, [rbp+0BE0h+var_998]
 * 0000000140A00B79: call    KiGetGdtIdt
 * 0000000140A00B7E: mov     r15, [rbp+0BE0h+var_996]
 * 0000000140A00B85: mov     ecx, 2
 * 0000000140A00B8A: mov     r14d, [r13+10h]
 * 0000000140A00B8E: test    [rsi+87Bh], cl
 * 0000000140A00B94: jz      loc_140A00CC6
 * 0000000140A00B9A: mov     rdx, [rsi+8E0h]
 * 0000000140A00BA1: mov     r8d, 26h ; '&'
 * 0000000140A00BA7: mov     ecx, 130h
 * 0000000140A00BAC: mov     rax, rdx
 * 0000000140A00BAF: xor     r12d, r12d
 * 0000000140A00BB2: lea     r9d, [r8-25h]
 * 0000000140A00BB6: mov     [rax], r12
 * 0000000140A00BB9: add     ecx, 0FFFFFFF8h
 * 0000000140A00BBC: add     rax, 8
 * 0000000140A00BC0: sub     r8, r9
 * 0000000140A00BC3: jnz     short loc_140A00BB6
 * 0000000140A00BC5: test    ecx, ecx
 * 0000000140A00BC7: jz      short loc_140A00BDA
 * 0000000140A00BC9: mov     r8d, 0FFFFFFFFh
 * 0000000140A00BCF: mov     [rax], r12b
 * 0000000140A00BD2: add     rax, r9
 * 0000000140A00BD5: add     ecx, r8d
 * 0000000140A00BD8: jnz     short loc_140A00BCF
 * 0000000140A00BDA: movups  xmm0, xmmword ptr [rsi+848h]
 * 0000000140A00BE1: mov     eax, 12Fh
 * 0000000140A00BE6: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140A00BEB: movups  xmm1, xmmword ptr [rsi+858h]
 * 0000000140A00BF2: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140A00BF7: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140A00BFE: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140A00C06: mov     word ptr [rbp+0BE0h+var_910], ax
 * 0000000140A00C0D: lea     rax, [rsi+878h]
 * 0000000140A00C14: mov     [rbp+2D2h], rdx
 * 0000000140A00C1B: mov     rcx, rax
 * 0000000140A00C1E: mov     [rdx+10h], ax
 * 0000000140A00C22: shr     rcx, 10h
 * 0000000140A00C26: mov     [rbp+0BE0h+var_5A8], rax
 * 0000000140A00C2D: shr     rax, 20h
 * 0000000140A00C31: mov     [rdx+16h], cx
 * 0000000140A00C35: mov     [rdx+18h], eax
 * 0000000140A00C38: cli
 * 0000000140A00C39: sidt    fword ptr [rbp+0BE0h+var_750]
 * 0000000140A00C40: lidt    fword ptr [rbp+0BE0h+var_910]
 * 0000000140A00C47: mov     dr7, r12
 * 0000000140A00C4B: lea     rax, [rsi+87Eh]
 * 0000000140A00C52: mov     [rdx+10h], ax
 * 0000000140A00C56: mov     rcx, rax
 * 0000000140A00C59: shr     rcx, 10h
 * 0000000140A00C5D: shr     rax, 20h
 * 0000000140A00C61: mov     [rdx+16h], cx
 * 0000000140A00C65: mov     [rdx+18h], eax
 * 0000000140A00C68: test    byte ptr [rsi+87Bh], 20h
 * 0000000140A00C6F: jnz     short loc_140A00C7F
 * 0000000140A00C71: call    KiErrata704Present
 * 0000000140A00C76: mov     [rsi+8E8h], rax
 * 0000000140A00C7D: jmp     short loc_140A00CB0
 * 0000000140A00C7F: lea     rbx, [rsi+8AAh]
 * 0000000140A00C86: call    KiGetSs
 * 0000000140A00C8B: mov     [rbx], ax
 * 0000000140A00C8E: mov     dr0, rbx
 * 0000000140A00C91: mov     eax, 70001h
 * 0000000140A00C96: mov     dr7, rax
 * 0000000140A00C99: mov     rcx, rbx
 * 0000000140A00C9C: call    KiErrataSkx55Present
 * 0000000140A00CA1: mov     [rsi+8E8h], rax
 * 0000000140A00CA8: mov     dr7, r12
 * 0000000140A00CAC: mov     dr0, r12
 * 0000000140A00CB0: mov     eax, gs:1A4h
 * 0000000140A00CB8: mov     [rsi+8F0h], eax
 * 0000000140A00CBE: lidt    fword ptr [rbp+0BE0h+var_750]
 * 0000000140A00CC5: sti
 * 0000000140A00CC6: call    KiGetLdtr
 * 0000000140A00CCB: movzx   r12d, ax
 * 0000000140A00CCF: call    KiGetTr
 * 0000000140A00CD4: add     [rsi+828h], r14d
 * 0000000140A00CDB: lea     rcx, [r15+r14]
 * 0000000140A00CDF: mov     r9d, [rsi+814h]
 * 0000000140A00CE6: movzx   r13d, ax
 * 0000000140A00CEA: mov     r11, [rsi+818h]
 * 0000000140A00CF1: mov     r8, r15
 * 0000000140A00CF4: mov     rax, r15
 * 0000000140A00CF7: cmp     r15, rcx
 * 0000000140A00CFA: jnb     short loc_140A00D0C
 * 0000000140A00CFC: mov     edx, 40h ; '@'
 * 0000000140A00D01: prefetchnta byte ptr [rax]
 * 0000000140A00D04: add     rax, rdx
 * 0000000140A00D07: cmp     rax, rcx
 * 0000000140A00D0A: jb      short loc_140A00D01
 * 0000000140A00D0C: mov     r10d, r14d
 * 0000000140A00D0F: mov     rbx, r11
 * 0000000140A00D12: shr     r10d, 7
 * 0000000140A00D16: test    r10d, r10d
 * 0000000140A00D19: jz      short loc_140A00D93
 * 0000000140A00D1B: mov     rdi, 7010008004002001h
 * 0000000140A00D25: mov     edx, 8
 * 0000000140A00D2A: lea     esi, [rdx-7]
 * 0000000140A00D2D: mov     rax, [r8]
 * 0000000140A00D30: mov     ecx, r9d
 * 0000000140A00D33: xor     rax, rbx
 * 0000000140A00D36: mov     rbx, [r8+8]
 * 0000000140A00D3A: rol     rax, cl
 * 0000000140A00D3D: add     r8, 10h
 * 0000000140A00D41: xor     rbx, rax
 * 0000000140A00D44: rol     rbx, cl
 * 0000000140A00D47: sub     rdx, rsi
 * 0000000140A00D4A: jnz     short loc_140A00D2D
 * 0000000140A00D4C: mov     rcx, r8
 * 0000000140A00D4F: sub     rcx, r15
 * 0000000140A00D52: xor     rcx, r11
 * 0000000140A00D55: mov     rax, rcx
 * 0000000140A00D58: rol     rax, 11h
 * 0000000140A00D5C: xor     rcx, rax
 * 0000000140A00D5F: mov     rax, rdi
 * 0000000140A00D62: mul     rcx
 * 0000000140A00D65: xor     r9d, eax
 * 0000000140A00D68: mov     [rbp+0BE0h+var_5A0], rdx
 * 0000000140A00D6F: xor     r9d, edx
 * 0000000140A00D72: mov     rax, rsi
 * 0000000140A00D75: and     r9d, 3Fh
 * 0000000140A00D79: cmovz   r9d, eax
 * 0000000140A00D7D: mov     eax, 0FFFFFFFFh
 * 0000000140A00D82: add     r10d, eax
 * 0000000140A00D85: jnz     short loc_140A00D25
 * 0000000140A00D87: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A00D8C: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A00D93: and     r14d, 7Fh
 * 0000000140A00D97: mov     r10d, 1
 * 0000000140A00D9D: cmp     r14d, 8
 * 0000000140A00DA1: jb      short loc_140A00DC0
 * 0000000140A00DA3: mov     edx, r14d
 * 0000000140A00DA6: shr     rdx, 3
 * 0000000140A00DAA: xor     rbx, [r8]
 * 0000000140A00DAD: mov     ecx, r9d
 * 0000000140A00DB0: rol     rbx, cl
 * 0000000140A00DB3: add     r8, 8
 * 0000000140A00DB7: add     r14d, 0FFFFFFF8h
 * 0000000140A00DBB: sub     rdx, r10
 * 0000000140A00DBE: jnz     short loc_140A00DAA
 * 0000000140A00DC0: xor     r15d, r15d
 * 0000000140A00DC3: test    r14d, r14d
 * 0000000140A00DC6: jz      short loc_140A00DE6
 * 0000000140A00DC8: mov     r15d, 0FFFFFFFFh
 * 0000000140A00DCE: movzx   eax, byte ptr [r8]
 * 0000000140A00DD2: mov     ecx, r9d
 * 0000000140A00DD5: xor     rbx, rax
 * 0000000140A00DD8: add     r8, r10
 * 0000000140A00DDB: rol     rbx, cl
 * 0000000140A00DDE: add     r14d, r15d
 * 0000000140A00DE1: jnz     short loc_140A00DCE
 * 0000000140A00DE3: xor     r15d, r15d
 * 0000000140A00DE6: mov     rax, rbx
 * 0000000140A00DE9: jmp     short loc_140A00DED
 * 0000000140A00DEB: xor     ebx, eax
 * 0000000140A00DED: shr     rax, 1Fh
 * 0000000140A00DF1: test    rax, rax
 * 0000000140A00DF4: jnz     short loc_140A00DEB
 * 0000000140A00DF6: mov     rax, [rsi+198h]
 * 0000000140A00DFD: lea     rcx, [rbp+0BE0h+var_2B0]
 * 0000000140A00E04: btr     ebx, 1Fh
 * 0000000140A00E08: call    KeGuardDispatchICall
 * 0000000140A00E0D: mov     r9, [rsp+0CE0h+var_C90]
 * 0000000140A00E12: mov     r11d, 40h ; '@'
 * 0000000140A00E18: cmp     ebx, [r9+14h]
 * 0000000140A00E1C: jnz     short loc_140A00E3C
 * 0000000140A00E1E: movzx   eax, word ptr [r9+2Ch]
 * 0000000140A00E23: cmp     [rbp+0BE0h+var_998], ax
 * 0000000140A00E2A: jnz     short loc_140A00E3C
 * 0000000140A00E2C: test    r12w, r12w
 * 0000000140A00E30: jnz     short loc_140A00E3C
 * 0000000140A00E32: cmp     r13w, r11w
 * 0000000140A00E36: jz      loc_140A00F36
 * 0000000140A00E3C: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A00E46: mov     r10d, 1
 * 0000000140A00E4C: jz      short loc_140A00E97
 * 0000000140A00E4E: mov     rcx, [rsi+0A80h]
 * 0000000140A00E55: lea     edx, [r10+2Fh]
 * 0000000140A00E59: lea     r8d, [r10+5]
 * 0000000140A00E5D: mov     rax, [r9]
 * 0000000140A00E60: add     edx, 0FFFFFFF8h
 * 0000000140A00E63: mov     [rcx], rax
 * 0000000140A00E66: add     r9, 8
 * 0000000140A00E6A: add     rcx, 8
 * 0000000140A00E6E: sub     r8, r10
 * 0000000140A00E71: jnz     short loc_140A00E5D
 * 0000000140A00E73: test    edx, edx
 * 0000000140A00E75: jz      short loc_140A00E90
 * 0000000140A00E77: mov     r15d, 0FFFFFFFFh
 * 0000000140A00E7D: mov     al, [r9]
 * 0000000140A00E80: add     r9, r10
 * 0000000140A00E83: mov     [rcx], al
 * 0000000140A00E85: add     rcx, r10
 * 0000000140A00E88: add     edx, r15d
 * 0000000140A00E8B: jnz     short loc_140A00E7D
 * 0000000140A00E8D: xor     r15d, r15d
 * 0000000140A00E90: mov     r9, [rsi+0A80h]
 * 0000000140A00E97: mov     rax, [rbp+0BE0h+var_996]
 * 0000000140A00E9E: mov     ecx, ebx
 * 0000000140A00EA0: mov     [r9+18h], rax
 * 0000000140A00EA4: mov     [r9+20h], rcx
 * 0000000140A00EA8: test    r12w, r12w
 * 0000000140A00EAC: jz      short loc_140A00EB4
 * 0000000140A00EAE: movzx   eax, r12w
 * 0000000140A00EB2: jmp     short loc_140A00EBE
 * 0000000140A00EB4: cmp     r13w, r11w
 * 0000000140A00EB8: jz      short loc_140A00EC2
 * 0000000140A00EBA: movzx   eax, r13w
 * 0000000140A00EBE: mov     [r9+18h], rax
 * 0000000140A00EC2: mov     eax, [rsi+8F8h]
 * 0000000140A00EC8: mov     edx, [r9+14h]
 * 0000000140A00ECC: test    eax, eax
 * 0000000140A00ECE: jnz     short loc_140A00EE4
 * 0000000140A00ED0: mov     rax, [rsi+590h]
 * 0000000140A00ED7: xor     rcx, rdx
 * 0000000140A00EDA: mov     [rax+18h], rcx
 * 0000000140A00EDE: mov     eax, [rsi+8F8h]
 * 0000000140A00EE4: mov     rcx, [r9+8]
 * 0000000140A00EE8: test    eax, eax
 * 0000000140A00EEA: jnz     short loc_140A00F36
 * 0000000140A00EEC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00EF6: add     rax, rsi
 * 0000000140A00EF9: mov     [rsi+900h], rax
 * 0000000140A00F00: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00F0A: add     rax, r9
 * 0000000140A00F0D: mov     [rsi+908h], rax
 * 0000000140A00F14: movsxd  rax, dword ptr [r9]
 * 0000000140A00F17: mov     [rsi+910h], rax
 * 0000000140A00F1E: mov     [rsi+918h], rcx
 * 0000000140A00F25: mov     [rsi+8F8h], r10d
 * 0000000140A00F2C: xor     edx, edx
 * 0000000140A00F2E: mov     rcx, rsi
 * 0000000140A00F31: call    $$b8
 * 0000000140A00F36: mov     r14d, 8000h
 * 0000000140A00F3C: add     [rsi+828h], r14d
 * 0000000140A00F43: jmp     loc_1409F6321
 * 0000000140A00F48: mov     edx, [r13+28h]
 * 0000000140A00F4C: lea     rcx, [rbp+0BE0h+var_2A0]
 * 0000000140A00F53: mov     rax, [rsi+1A0h]
 * 0000000140A00F5A: xor     r15d, r15d
 * 0000000140A00F5D: mov     dword ptr [rbp+0BE0h+var_BF8], r15d
 * 0000000140A00F61: call    KeGuardDispatchICall
 * 0000000140A00F66: mov     rax, [rsi+1D0h]
 * 0000000140A00F6D: lea     rdx, [rbp+0BE0h+var_290]
 * 0000000140A00F74: lea     rcx, [rbp+0BE0h+var_2A0]
 * 0000000140A00F7B: call    KeGuardDispatchICall
 * 0000000140A00F80: lea     rdx, [rbp+0BE0h+var_900]
 * 0000000140A00F87: lea     rcx, [rbp+0BE0h+var_180]
 * 0000000140A00F8E: call    KiGetGdtIdt
 * 0000000140A00F93: mov     rcx, [rbp+0BE0h+var_8FE]
 * 0000000140A00F9A: mov     edi, r15d
 * 0000000140A00F9D: mov     [rsp+0CE0h+var_C70], rcx
 * 0000000140A00FA2: add     rcx, 4
 * 0000000140A00FA6: mov     [rsp+0CE0h+var_C88], rcx
 * 0000000140A00FAB: mov     rax, [rsi+8C8h]
 * 0000000140A00FB2: mov     r10, r15
 * 0000000140A00FB5: mov     [rbp+0BE0h+var_B00], rax
 * 0000000140A00FBC: mov     r14, r15
 * 0000000140A00FBF: mov     r8, [rsi+8D0h]
 * 0000000140A00FC6: mov     r12d, [rsi+8ACh]
 * 0000000140A00FCD: mov     r13d, [rsi+8B0h]
 * 0000000140A00FD4: mov     [rbp+0BE0h+var_C60], r8
 * 0000000140A00FD8: mov     [rsp+0CE0h+BugCheckParameter2], r15
 * 0000000140A00FDD: mov     [rbp+0BE0h+var_C50], r15
 * 0000000140A00FE1: mov     r15, cr8
 * 0000000140A00FE5: mov     cr8, rbx
 * 0000000140A00FE9: movzx   eax, word ptr [rcx-4]
 * 0000000140A00FED: movzx   r9d, word ptr [rcx]
 * 0000000140A00FF1: mov     word ptr [rbp+0BE0h+var_BD8], ax
 * 0000000140A00FF5: movzx   eax, word ptr [rcx+2]
 * 0000000140A00FF9: mov     word ptr [rbp+0BE0h+var_BD8+2], ax
 * 0000000140A00FFD: mov     eax, [rcx+4]
 * 0000000140A01000: mov     rcx, [rsi+618h]
 * 0000000140A01007: mov     dword ptr [rbp+0BE0h+var_BD8+4], eax
 * 0000000140A0100A: mov     rbx, [rbp+0BE0h+var_BD8]
 * 0000000140A0100E: mov     eax, edi
 * 0000000140A01010: mov     word ptr [rbp+0BE0h+arg_8], r9w
 * 0000000140A01018: lea     rdx, [rcx+rax*8]
 * 0000000140A0101C: cmp     rbx, rdx
 * 0000000140A0101F: jnz     short loc_140A01089
 * 0000000140A01021: mov     eax, 6000h
 * 0000000140A01026: test    ax, r9w
 * 0000000140A0102A: jz      short loc_140A0103C
 * 0000000140A0102C: movzx   eax, r15b
 * 0000000140A01030: mov     cr8, rax
 * 0000000140A01034: xor     r15d, r15d
 * 0000000140A01037: jmp     loc_140A01200
 * 0000000140A0103C: mov     rax, [rsi+470h]
 * 0000000140A01043: mov     ecx, edi
 * 0000000140A01045: call    KeGuardDispatchICall
 * 0000000140A0104A: mov     r14, [rax]
 * 0000000140A0104D: test    r14, r14
 * 0000000140A01050: jz      short loc_140A0107B
 * 0000000140A01052: mov     r12, [r12+r14]
 * 0000000140A01056: mov     [rsp+0CE0h+BugCheckParameter2], r12
 * 0000000140A0105B: cmp     edi, 30h ; '0'
 * 0000000140A0105E: jnb     short loc_140A01070
 * 0000000140A01060: movzx   eax, r15b
 * 0000000140A01064: mov     cr8, rax
 * 0000000140A01068: xor     r15d, r15d
 * 0000000140A0106B: jmp     loc_140A011FB
 * 0000000140A01070: mov     r13, [r13+r14+0]
 * 0000000140A01075: mov     r8, [rbp+0BE0h+var_C60]
 * 0000000140A01079: jmp     short loc_140A01091
 * 0000000140A0107B: mov     r8, [rbp+0BE0h+var_C60]
 * 0000000140A0107F: or      r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140A01083: mov     r13, [rbp+0BE0h+var_C50]
 * 0000000140A01087: jmp     short loc_140A0108C
 * 0000000140A01089: mov     r13, r10
 * 0000000140A0108C: mov     r12, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A01091: movzx   eax, r15b
 * 0000000140A01095: mov     cr8, rax
 * 0000000140A01099: xor     r15d, r15d
 * 0000000140A0109C: test    r14, r14
 * 0000000140A0109F: jnz     short loc_140A010EA
 * 0000000140A010A1: mov     rdx, [rbp+0BE0h+var_B00]
 * 0000000140A010A8: cmp     rbx, rdx
 * 0000000140A010AB: jb      loc_140A011FB
 * 0000000140A010B1: cmp     rbx, r8
 * 0000000140A010B4: ja      loc_140A011FB
 * 0000000140A010BA: mov     r8d, dword ptr [rbp+0BE0h+var_BD8]
 * 0000000140A010BE: mov     rcx, [rsi+8D8h]
 * 0000000140A010C5: sub     r8d, edx
 * 0000000140A010C8: mov     rax, [rsi+210h]
 * 0000000140A010CF: call    KeGuardDispatchICall
 * 0000000140A010D4: test    rax, rax
 * 0000000140A010D7: jz      loc_140A011FB
 * 0000000140A010DD: mov     eax, [rax+24h]
 * 0000000140A010E0: bt      eax, 19h
 * 0000000140A010E4: jb      loc_140A011FB
 * 0000000140A010EA: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A010EF: mov     ecx, 10h
 * 0000000140A010F4: cmp     [rax-2], cx
 * 0000000140A010F8: jnz     loc_140A011FB
 * 0000000140A010FE: movzx   ecx, word ptr [rax]
 * 0000000140A01101: mov     edx, 1F00h
 * 0000000140A01106: movzx   eax, cx
 * 0000000140A01109: and     ax, dx
 * 0000000140A0110C: mov     edx, 0E00h
 * 0000000140A01111: cmp     ax, dx
 * 0000000140A01114: jnz     loc_140A011FB
 * 0000000140A0111A: mov     eax, 8000h
 * 0000000140A0111F: test    ax, cx
 * 0000000140A01122: jz      loc_140A011FB
 * 0000000140A01128: mov     rax, [rsi+260h]
 * 0000000140A0112F: lea     rdx, [rbp+0BE0h+var_B00]
 * 0000000140A01136: xor     r8d, r8d
 * 0000000140A01139: mov     rcx, rbx
 * 0000000140A0113C: call    KeGuardDispatchICall
 * 0000000140A01141: test    rax, rax
 * 0000000140A01144: jz      short loc_140A0116A
 * 0000000140A01146: mov     eax, [rax]
 * 0000000140A01148: mov     rcx, [rbp+0BE0h+var_B00]
 * 0000000140A0114F: add     rax, rcx
 * 0000000140A01152: cmp     rax, rbx
 * 0000000140A01155: jnz     short loc_140A0116A
 * 0000000140A01157: cmp     rcx, [rsi+8C8h]
 * 0000000140A0115E: jnz     short loc_140A0116A
 * 0000000140A01160: test    r14, r14
 * 0000000140A01163: jnz     short loc_140A01173
 * 0000000140A01165: jmp     loc_140A0122F
 * 0000000140A0116A: test    r14, r14
 * 0000000140A0116D: jz      loc_140A011FB
 * 0000000140A01173: mov     eax, 6000h
 * 0000000140A01178: test    word ptr [rbp+0BE0h+arg_8], ax
 * 0000000140A0117F: jnz     short loc_140A011FB
 * 0000000140A01181: cmp     r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140A01185: jz      loc_140A0122F
 * 0000000140A0118B: mov     rax, [rsi+260h]
 * 0000000140A01192: lea     rdx, [rbp+0BE0h+var_B00]
 * 0000000140A01199: xor     r8d, r8d
 * 0000000140A0119C: mov     rcx, r12
 * 0000000140A0119F: call    KeGuardDispatchICall
 * 0000000140A011A4: test    rax, rax
 * 0000000140A011A7: jz      short loc_140A011FB
 * 0000000140A011A9: mov     eax, [rax]
 * 0000000140A011AB: mov     rdx, [rbp+0BE0h+var_B00]
 * 0000000140A011B2: add     rax, rdx
 * 0000000140A011B5: cmp     rax, r12
 * 0000000140A011B8: jnz     short loc_140A011FB
 * 0000000140A011BA: cmp     rdx, [rsi+8C8h]
 * 0000000140A011C1: jnz     short loc_140A011FB
 * 0000000140A011C3: mov     rcx, [rsi+8D8h]
 * 0000000140A011CA: mov     r8d, r12d
 * 0000000140A011CD: mov     rax, [rsi+210h]
 * 0000000140A011D4: sub     r8d, edx
 * 0000000140A011D7: call    KeGuardDispatchICall
 * 0000000140A011DC: test    rax, rax
 * 0000000140A011DF: jz      short loc_140A011FB
 * 0000000140A011E1: mov     eax, [rax+24h]
 * 0000000140A011E4: bt      eax, 19h
 * 0000000140A011E8: jb      short loc_140A011FB
 * 0000000140A011EA: cmp     edi, 0FEh
 * 0000000140A011F0: jnz     short loc_140A0122F
 * 0000000140A011F2: cmp     r13, [rsi+8B8h]
 * 0000000140A011F9: jz      short loc_140A0122F
 * 0000000140A011FB: mov     r10, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A01200: mov     rax, [rsi+590h]
 * 0000000140A01207: mov     [rax], rbx
 * 0000000140A0120A: mov     dword ptr [rax+10h], 80h
 * 0000000140A01211: test    r10, r10
 * 0000000140A01214: jz      short loc_140A01228
 * 0000000140A01216: mov     rax, [rsi+590h]
 * 0000000140A0121D: mov     [rax+8], r10
 * 0000000140A01221: mov     dword ptr [rax+14h], 80h
 * 0000000140A01228: mov     dword ptr [rbp+0BE0h+var_BF8], 1
 * 0000000140A0122F: mov     rcx, [rsp+0CE0h+var_C88]
 * 0000000140A01234: inc     edi
 * 0000000140A01236: add     rcx, 10h
 * 0000000140A0123A: mov     ebx, 0Fh
 * 0000000140A0123F: mov     [rsp+0CE0h+var_C88], rcx
 * 0000000140A01244: cmp     edi, 0FFh
 * 0000000140A0124A: jbe     loc_140A00FAB
 * 0000000140A01250: lea     ecx, [rbx-0Eh]
 * 0000000140A01253: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0125A: test    [rsi+87Bh], cl
 * 0000000140A01260: jz      loc_140A01334
 * 0000000140A01266: cli
 * 0000000140A01267: mov     r14d, 0C0000082h
 * 0000000140A0126D: mov     ecx, r14d
 * 0000000140A01270: rdmsr
 * 0000000140A01272: shl     rdx, 20h
 * 0000000140A01276: or      rax, rdx
 * 0000000140A01279: lea     rdx, [rsi+87Ah]
 * 0000000140A01280: mov     rbx, rax
 * 0000000140A01283: mov     rax, rdx
 * 0000000140A01286: shr     rdx, 20h
 * 0000000140A0128A: wrmsr
 * 0000000140A0128C: mov     r13d, 20000h
 * 0000000140A01292: test    [rsi+994h], r13d
 * 0000000140A01299: jnz     short loc_140A012DD
 * 0000000140A0129B: mov     rdx, gs:20h
 * 0000000140A012A4: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A012AE: mov     rax, [rsi+4C0h]
 * 0000000140A012B5: add     rcx, rsi
 * 0000000140A012B8: mov     [rax], rcx
 * 0000000140A012BB: mov     rax, [rsi+4C8h]
 * 0000000140A012C2: mov     [rax], rdx
 * 0000000140A012C5: mov     rax, [rsi+4D0h]
 * 0000000140A012CC: mov     [rax], r14
 * 0000000140A012CF: mov     rax, [rsi+4D8h]
 * 0000000140A012D6: mov     qword ptr [rax], 112h
 * 0000000140A012DD: lea     rax, [rsi+87Ch]
 * 0000000140A012E4: call    KeGuardDispatchICall
 * 0000000140A012E9: test    [rsi+994h], r13d
 * 0000000140A012F0: jnz     short loc_140A01324
 * 0000000140A012F2: mov     rax, [rsi+4C0h]
 * 0000000140A012F9: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A01303: mov     [rax], rcx
 * 0000000140A01306: mov     rax, [rsi+4C8h]
 * 0000000140A0130D: mov     [rax], r15
 * 0000000140A01310: mov     rax, [rsi+4D0h]
 * 0000000140A01317: mov     [rax], r15
 * 0000000140A0131A: mov     rax, [rsi+4D8h]
 * 0000000140A01321: mov     [rax], r15
 * 0000000140A01324: mov     rdx, rbx
 * 0000000140A01327: mov     rax, rbx
 * 0000000140A0132A: shr     rdx, 20h
 * 0000000140A0132E: mov     ecx, r14d
 * 0000000140A01331: wrmsr
 * 0000000140A01333: sti
 * 0000000140A01334: mov     r15, [rsp+0CE0h+var_C70]
 * 0000000140A01339: add     dword ptr [rsi+828h], 350h
 * 0000000140A01343: mov     r8, r15
 * 0000000140A01346: mov     ebx, [rsi+828h]
 * 0000000140A0134C: mov     rax, r15
 * 0000000140A0134F: mov     r9d, [rsi+814h]
 * 0000000140A01356: mov     r11, [rsi+818h]
 * 0000000140A0135D: lea     rcx, [r15+350h]
 * 0000000140A01364: cmp     r15, rcx
 * 0000000140A01367: jnb     short loc_140A01379
 * 0000000140A01369: mov     edx, 40h ; '@'
 * 0000000140A0136E: prefetchnta byte ptr [rax]
 * 0000000140A01371: add     rax, rdx
 * 0000000140A01374: cmp     rax, rcx
 * 0000000140A01377: jb      short loc_140A0136E
 * 0000000140A01379: mov     r10d, 6
 * 0000000140A0137F: mov     r14, r11
 * 0000000140A01382: mov     rsi, 7010008004002001h
 * 0000000140A0138C: lea     r13d, [r10+2]
 * 0000000140A01390: mov     rdx, r13
 * 0000000140A01393: mov     r12d, 1
 * 0000000140A01399: mov     rax, [r8]
 * 0000000140A0139C: mov     ecx, r9d
 * 0000000140A0139F: xor     rax, r14
 * 0000000140A013A2: add     r8, r13
 * 0000000140A013A5: rol     rax, cl
 * 0000000140A013A8: mov     r14, [r8]
 * 0000000140A013AB: add     r8, r13
 * 0000000140A013AE: xor     r14, rax
 * 0000000140A013B1: rol     r14, cl
 * 0000000140A013B4: sub     rdx, r12
 * 0000000140A013B7: jnz     short loc_140A01399
 * 0000000140A013B9: mov     rcx, r8
 * 0000000140A013BC: sub     rcx, r15
 * 0000000140A013BF: xor     rcx, r11
 * 0000000140A013C2: mov     rax, rcx
 * 0000000140A013C5: rol     rax, 11h
 * 0000000140A013C9: xor     rcx, rax
 * 0000000140A013CC: mov     rax, rsi
 * 0000000140A013CF: mul     rcx
 * 0000000140A013D2: xor     r9d, eax
 * 0000000140A013D5: mov     [rbp+0BE0h+var_598], rdx
 * 0000000140A013DC: xor     r9d, edx
 * 0000000140A013DF: mov     rax, r12
 * 0000000140A013E2: and     r9d, 3Fh
 * 0000000140A013E6: cmovz   r9d, eax
 * 0000000140A013EA: mov     eax, 0FFFFFFFFh
 * 0000000140A013EF: add     r10d, eax
 * 0000000140A013F2: jnz     short loc_140A01390
 * 0000000140A013F4: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A013F9: lea     edx, [r10+50h]
 * 0000000140A013FD: mov     r12d, dword ptr [rbp+0BE0h+var_BF8]
 * 0000000140A01401: lea     r10d, [rdx-46h]
 * 0000000140A01405: lea     r11d, [rdx-4Fh]
 * 0000000140A01409: xor     r14, [r8]
 * 0000000140A0140C: mov     ecx, r9d
 * 0000000140A0140F: rol     r14, cl
 * 0000000140A01412: add     r8, r13
 * 0000000140A01415: add     edx, 0FFFFFFF8h
 * 0000000140A01418: sub     r10, r11
 * 0000000140A0141B: jnz     short loc_140A01409
 * 0000000140A0141D: test    edx, edx
 * 0000000140A0141F: jz      short loc_140A01439
 * 0000000140A01421: mov     r10, rax
 * 0000000140A01424: movzx   eax, byte ptr [r8]
 * 0000000140A01428: mov     ecx, r9d
 * 0000000140A0142B: xor     r14, rax
 * 0000000140A0142E: add     r8, r11
 * 0000000140A01431: rol     r14, cl
 * 0000000140A01434: add     edx, r10d
 * 0000000140A01437: jnz     short loc_140A01424
 * 0000000140A01439: mov     rax, r14
 * 0000000140A0143C: jmp     short loc_140A01441
 * 0000000140A0143E: xor     r14d, eax
 * 0000000140A01441: shr     rax, 1Fh
 * 0000000140A01445: test    rax, rax
 * 0000000140A01448: jnz     short loc_140A0143E
 * 0000000140A0144A: lea     eax, [rbx+10h]
 * 0000000140A0144D: btr     r14d, 1Fh
 * 0000000140A01452: mov     [rsi+828h], eax
 * 0000000140A01458: lea     rdx, [r15+0E10h]
 * 0000000140A0145F: mov     r9d, [rsi+814h]
 * 0000000140A01466: lea     rcx, [r15+0E20h]
 * 0000000140A0146D: mov     rbx, [rsi+818h]
 * 0000000140A01474: mov     rax, rdx
 * 0000000140A01477: cmp     rdx, rcx
 * 0000000140A0147A: jnb     short loc_140A0148D
 * 0000000140A0147C: mov     r8d, 40h ; '@'
 * 0000000140A01482: prefetchnta byte ptr [rax]
 * 0000000140A01485: add     rax, r8
 * 0000000140A01488: cmp     rax, rcx
 * 0000000140A0148B: jb      short loc_140A01482
 * 0000000140A0148D: mov     eax, 2
 * 0000000140A01492: lea     r8d, [rax+0Eh]
 * 0000000140A01496: xor     rbx, [rdx]
 * 0000000140A01499: mov     ecx, r9d
 * 0000000140A0149C: rol     rbx, cl
 * 0000000140A0149F: add     rdx, r13
 * 0000000140A014A2: add     r8d, 0FFFFFFF8h
 * 0000000140A014A6: sub     rax, r11
 * 0000000140A014A9: jnz     short loc_140A01496
 * 0000000140A014AB: xor     r15d, r15d
 * 0000000140A014AE: test    r8d, r8d
 * 0000000140A014B1: jz      short loc_140A014D0
 * 0000000140A014B3: mov     r15d, 0FFFFFFFFh
 * 0000000140A014B9: movzx   eax, byte ptr [rdx]
 * 0000000140A014BC: mov     ecx, r9d
 * 0000000140A014BF: xor     rbx, rax
 * 0000000140A014C2: add     rdx, r11
 * 0000000140A014C5: rol     rbx, cl
 * 0000000140A014C8: add     r8d, r15d
 * 0000000140A014CB: jnz     short loc_140A014B9
 * 0000000140A014CD: xor     r15d, r15d
 * 0000000140A014D0: mov     rax, rbx
 * 0000000140A014D3: jmp     short loc_140A014D7
 * 0000000140A014D5: xor     ebx, eax
 * 0000000140A014D7: shr     rax, 1Fh
 * 0000000140A014DB: test    rax, rax
 * 0000000140A014DE: jnz     short loc_140A014D5
 * 0000000140A014E0: mov     rax, [rsi+198h]
 * 0000000140A014E7: lea     rcx, [rbp+0BE0h+var_290]
 * 0000000140A014EE: btr     ebx, 1Fh
 * 0000000140A014F2: call    KeGuardDispatchICall
 * 0000000140A014F7: mov     r8, [rsp+0CE0h+var_C90]
 * 0000000140A014FC: mov     edx, [r8+14h]
 * 0000000140A01500: cmp     r14d, edx
 * 0000000140A01503: jnz     short loc_140A01524
 * 0000000140A01505: mov     eax, ebx
 * 0000000140A01507: cmp     rax, [r8+18h]
 * 0000000140A0150B: jnz     short loc_140A01524
 * 0000000140A0150D: movzx   eax, word ptr [r8+2Ch]
 * 0000000140A01512: cmp     [rbp+0BE0h+var_900], ax
 * 0000000140A01519: jnz     short loc_140A01524
 * 0000000140A0151B: test    r12d, r12d
 * 0000000140A0151E: jz      loc_140A015BA
 * 0000000140A01524: test    r12d, r12d
 * 0000000140A01527: jnz     short loc_140A0155F
 * 0000000140A01529: mov     eax, ebx
 * 0000000140A0152B: cmp     rax, [r8+18h]
 * 0000000140A0152F: jnz     short loc_140A01542
 * 0000000140A01531: cmp     [rsi+8F8h], r15d
 * 0000000140A01538: jnz     short loc_140A0155F
 * 0000000140A0153A: mov     ecx, r14d
 * 0000000140A0153D: xor     rcx, rdx
 * 0000000140A01540: jmp     short loc_140A01554
 * 0000000140A01542: mov     eax, [r8+18h]
 * 0000000140A01546: cmp     [rsi+8F8h], r15d
 * 0000000140A0154D: jnz     short loc_140A0155F
 * 0000000140A0154F: mov     ecx, ebx
 * 0000000140A01551: xor     rcx, rax
 * 0000000140A01554: mov     rax, [rsi+590h]
 * 0000000140A0155B: mov     [rax+18h], rcx
 * 0000000140A0155F: mov     rcx, [r8+8]
 * 0000000140A01563: cmp     [rsi+8F8h], r15d
 * 0000000140A0156A: jnz     short loc_140A015BA
 * 0000000140A0156C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A01576: xor     edx, edx
 * 0000000140A01578: add     rax, rsi
 * 0000000140A0157B: mov     [rsi+900h], rax
 * 0000000140A01582: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0158C: add     rax, r8
 * 0000000140A0158F: mov     [rsi+908h], rax
 * 0000000140A01596: movsxd  rax, dword ptr [r8]
 * 0000000140A01599: mov     [rsi+910h], rax
 * 0000000140A015A0: mov     eax, 1
 * 0000000140A015A5: mov     [rsi+918h], rcx
 * 0000000140A015AC: mov     rcx, rsi
 * 0000000140A015AF: mov     [rsi+8F8h], eax
 * 0000000140A015B5: call    $$b8
 * 0000000140A015BA: add     dword ptr [rsi+828h], 10000h
 * 0000000140A015C4: jmp     loc_1409F631B
 * 0000000140A015C9: mov     edx, [r13+2Ch]
 * 0000000140A015CD: lea     rcx, [rbp+0BE0h+var_280]
 * 0000000140A015D4: mov     rax, [rsi+1A0h]
 * 0000000140A015DB: call    KeGuardDispatchICall
 * 0000000140A015E0: mov     rax, [rsi+1D0h]
 * 0000000140A015E7: lea     rdx, [rbp+0BE0h+var_270]
 * 0000000140A015EE: lea     rcx, [rbp+0BE0h+var_280]
 * 0000000140A015F5: call    KeGuardDispatchICall
 * 0000000140A015FA: xor     ecx, ecx
 * 0000000140A015FC: xgetbv
 * 0000000140A015FF: shl     rdx, 20h
 * 0000000140A01603: lea     rcx, [rbp+0BE0h+var_270]
 * 0000000140A0160A: or      rdx, rax
 * 0000000140A0160D: mov     rax, [rsi+198h]
 * 0000000140A01614: mov     rbx, rdx
 * 0000000140A01617: call    KeGuardDispatchICall
 * 0000000140A0161C: mov     r8, [r13+18h]
 * 0000000140A01620: xor     r15d, r15d
 * 0000000140A01623: mov     rdx, [r13+20h]
 * 0000000140A01627: and     r8, rbx
 * 0000000140A0162A: cmp     r8, rdx
 * 0000000140A0162D: jz      loc_1409F631B
 * 0000000140A01633: mov     eax, [r13+28h]
 * 0000000140A01637: mov     ecx, [r13+2Ch]
 * 0000000140A0163B: shl     rcx, 20h
 * 0000000140A0163F: or      rcx, rax
 * 0000000140A01642: mov     eax, [rsi+8F8h]
 * 0000000140A01648: test    eax, eax
 * 0000000140A0164A: jnz     loc_1409F631B
 * 0000000140A01650: mov     rax, [rsi+590h]
 * 0000000140A01657: xor     rdx, r8
 * 0000000140A0165A: mov     [rax+18h], rdx
 * 0000000140A0165E: mov     eax, [rsi+8F8h]
 * 0000000140A01664: jmp     loc_1409F66A5
 * 0000000140A01669: mov     r13, rdx
 * 0000000140A0166C: mov     [rsi+820h], ecx
 * 0000000140A01672: cmp     [rbp+0BE0h+var_BC8], r15d
 * 0000000140A01676: jz      short loc_140A016E2
 * 0000000140A01678: mov     rcx, gs:20h
 * 0000000140A01681: mov     rax, [rsi+648h]
 * 0000000140A01688: mov     rdx, [rax+rcx]
 * 0000000140A0168C: lea     rcx, [rbp+0BE0h+var_260]
 * 0000000140A01693: mov     rax, [rsi+688h]
 * 0000000140A0169A: add     rdx, [rsi+6A8h]
 * 0000000140A016A1: mov     rbx, [rdx+rax]
 * 0000000140A016A5: mov     rax, [rsi+198h]
 * 0000000140A016AC: call    KeGuardDispatchICall
 * 0000000140A016B1: mov     rax, [rsi+440h]
 * 0000000140A016B8: lea     rcx, [rbp+0BE0h+var_6C0]
 * 0000000140A016BF: call    KeGuardDispatchICall
 * 0000000140A016C4: mov     rax, [rsi+3A8h]
 * 0000000140A016CB: mov     rcx, rbx
 * 0000000140A016CE: call    KeGuardDispatchICall
 * 0000000140A016D3: mov     rax, [rsi+3B8h]
 * 0000000140A016DA: mov     rcx, rbx
 * 0000000140A016DD: call    KeGuardDispatchICall
 * 0000000140A016E2: cmp     [rbp+0BE0h+var_C38], r15d
 * 0000000140A016E6: jz      loc_140A0177D
 * 0000000140A016EC: test    [rsi+990h], r14d
 * 0000000140A016F3: jnz     short loc_140A016FE
 * 0000000140A016F5: cmp     [rsi+8F8h], r15d
 * 0000000140A016FC: jnz     short loc_140A0177D
 * 0000000140A016FE: mov     rbx, [rsi+980h]
 * 0000000140A01705: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A0170C: mov     [rsi+980h], r15
 * 0000000140A01713: mov     rcx, rbx
 * 0000000140A01716: mov     rax, [rsi+298h]
 * 0000000140A0171D: call    KeGuardDispatchICall
 * 0000000140A01722: mov     eax, [rsi+990h]
 * 0000000140A01728: test    r13b, al
 * 0000000140A0172B: jz      short loc_140A01769
 * 0000000140A0172D: and     eax, 0FFFFFFFEh
 * 0000000140A01730: mov     rcx, rbx
 * 0000000140A01733: mov     [rsi+990h], eax
 * 0000000140A01739: mov     rax, [rsi+280h]
 * 0000000140A01740: call    KeGuardDispatchICall
 * 0000000140A01745: mov     rbx, rax
 * 0000000140A01748: test    rax, rax
 * 0000000140A0174B: jz      short loc_140A0175E
 * 0000000140A0174D: mov     rax, [rsi+2A0h]
 * 0000000140A01754: mov     rcx, rbx
 * 0000000140A01757: call    KeGuardDispatchICall
 * 0000000140A0175C: jmp     short loc_140A01763
 * 0000000140A0175E: mov     eax, 0FFFFFFFFh
 * 0000000140A01763: mov     [rsi+970h], eax
 * 0000000140A01769: test    rbx, rbx
 * 0000000140A0176C: jz      short loc_140A0177D
 * 0000000140A0176E: mov     rax, [rsi+288h]
 * 0000000140A01775: mov     rcx, rbx
 * 0000000140A01778: call    KeGuardDispatchICall
 * 0000000140A0177D: mov     eax, [rsi+990h]
 * 0000000140A01783: mov     ecx, 800008h
 * 0000000140A01788: and     eax, ecx
 * 0000000140A0178A: cmp     eax, ecx
 * 0000000140A0178C: jnz     loc_140A01B73
 * 0000000140A01792: mov     eax, [rsi+994h]
 * 0000000140A01798: mov     r11d, [rsi+808h]
 * 0000000140A0179F: and     eax, r13d
 * 0000000140A017A2: mov     rax, [rsi+0A70h]
 * 0000000140A017A9: mov     r10d, [rsi+7E4h]
 * 0000000140A017B0: mov     r12, [rsi+9F8h]
 * 0000000140A017B7: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A017BC: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 0000000140A017C3: jz      short loc_140A017CC
 * 0000000140A017C5: mov     r12, [rsi+5D8h]
 * 0000000140A017CC: mov     rax, [rsi+160h]
 * 0000000140A017D3: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A017D7: mov     rax, [rsi+2C8h]
 * 0000000140A017DE: mov     [rbp+0BE0h+var_BD8], rax
 * 0000000140A017E2: mov     rax, [rsi+340h]
 * 0000000140A017E9: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A017ED: rdtsc
 * 0000000140A017EF: shl     rdx, 20h
 * 0000000140A017F3: mov     rbx, 7010008004002001h
 * 0000000140A017FD: or      rax, rdx
 * 0000000140A01800: mov     r9, rdi
 * 0000000140A01803: mov     rcx, rax
 * 0000000140A01806: ror     rax, 3
 * 0000000140A0180A: xor     rcx, rax
 * 0000000140A0180D: mov     rax, rbx
 * 0000000140A01810: mul     rcx
 * 0000000140A01813: mov     rcx, rdx
 * 0000000140A01816: mov     [rbp+0BE0h+var_590], rdx
 * 0000000140A0181D: xor     rcx, rax
 * 0000000140A01820: mov     rax, 0ABCC77118461CEFDh
 * 0000000140A0182A: mul     rcx
 * 0000000140A0182D: shr     rdx, 1Ah
 * 0000000140A01831: imul    rax, rdx, 5F5E100h
 * 0000000140A01838: sub     rcx, rax
 * 0000000140A0183B: sub     r9, rcx
 * 0000000140A0183E: mov     [rbp+0BE0h+var_AA8], r9
 * 0000000140A01845: mov     r8d, [rsi+990h]
 * 0000000140A0184C: bt      r8d, 1Ah
 * 0000000140A01851: jnb     loc_140A018F4
 * 0000000140A01857: rdtsc
 * 0000000140A01859: shl     rdx, 20h
 * 0000000140A0185D: mov     r14, 0CCCCCCCCCCCCCCCDh
 * 0000000140A01867: or      rax, rdx
 * 0000000140A0186A: mov     rcx, rax
 * 0000000140A0186D: ror     rax, 3
 * 0000000140A01871: xor     rcx, rax
 * 0000000140A01874: mov     rax, rbx
 * 0000000140A01877: mul     rcx
 * 0000000140A0187A: mov     rcx, rdx
 * 0000000140A0187D: mov     [rbp+0BE0h+var_588], rdx
 * 0000000140A01884: xor     rcx, rax
 * 0000000140A01887: mov     rax, r14
 * 0000000140A0188A: mul     rcx
 * 0000000140A0188D: shr     rdx, 3
 * 0000000140A01891: lea     rax, [rdx+rdx*4]
 * 0000000140A01895: add     rax, rax
 * 0000000140A01898: sub     rcx, rax
 * 0000000140A0189B: mov     eax, 2
 * 0000000140A018A0: cmp     rcx, rax
 * 0000000140A018A3: jnb     short loc_140A018F4
 * 0000000140A018A5: rdtsc
 * 0000000140A018A7: shl     rdx, 20h
 * 0000000140A018AB: or      rax, rdx
 * 0000000140A018AE: mov     rcx, rax
 * 0000000140A018B1: ror     rax, 3
 * 0000000140A018B5: xor     rcx, rax
 * 0000000140A018B8: mov     rax, rbx
 * 0000000140A018BB: mul     rcx
 * 0000000140A018BE: mov     rcx, rdx
 * 0000000140A018C1: mov     [rbp+0BE0h+var_580], rdx
 * 0000000140A018C8: xor     rcx, rax
 * 0000000140A018CB: mov     rax, r14
 * 0000000140A018CE: mul     rcx
 * 0000000140A018D1: shr     rdx, 3
 * 0000000140A018D5: lea     rax, [rdx+rdx*4]
 * 0000000140A018D9: add     rax, rax
 * 0000000140A018DC: sub     rcx, rax
 * 0000000140A018DF: add     rcx, r13
 * 0000000140A018E2: imul    rcx, r9
 * 0000000140A018E6: mov     [rbp+0BE0h+var_AA8], rcx
 * 0000000140A018ED: mov     r8d, [rsi+990h]
 * 0000000140A018F4: mov     ecx, 2
 * 0000000140A018F9: mov     r14d, r11d
 * 0000000140A018FC: test    cl, r8b
 * 0000000140A018FF: mov     rbx, r15
 * 0000000140A01902: cmovnz  r14d, r10d
 * 0000000140A01906: test    r8b, r8b
 * 0000000140A01909: js      short loc_140A01916
 * 0000000140A0190B: xor     r9d, r9d
 * 0000000140A0190E: mov     r13d, r9d
 * 0000000140A01911: jmp     loc_140A019E0
 * 0000000140A01916: rdtsc
 * 0000000140A01918: shl     rdx, 20h
 * 0000000140A0191C: or      rax, rdx
 * 0000000140A0191F: mov     rcx, rax
 * 0000000140A01922: ror     rax, 3
 * 0000000140A01926: xor     rcx, rax
 * 0000000140A01929: mov     rax, 7010008004002001h
 * 0000000140A01933: mul     rcx
 * 0000000140A01936: mov     ecx, 154h
 * 0000000140A0193B: mov     rbx, rdx
 * 0000000140A0193E: mov     [rbp+0BE0h+var_578], rdx
 * 0000000140A01945: xor     rbx, rax
 * 0000000140A01948: mov     edx, 1
 * 0000000140A0194D: mov     r15, rbx
 * 0000000140A01950: lea     rax, [rsi+0A98h]
 * 0000000140A01957: xor     r15, rsi
 * 0000000140A0195A: mov     r10, rbx
 * 0000000140A0195D: xor     [rax], r10
 * 0000000140A01960: lea     rax, [rax-8]
 * 0000000140A01964: ror     r10, cl
 * 0000000140A01967: sub     ecx, edx
 * 0000000140A01969: jnz     short loc_140A0195D
 * 0000000140A0196B: lea     r8, [r11-0AA0h]
 * 0000000140A01972: shr     r8, 3
 * 0000000140A01976: test    r8d, r8d
 * 0000000140A01979: jz      short loc_140A019B4
 * 0000000140A0197B: movsxd  r9, r8d
 * 0000000140A0197E: add     rsi, 0A98h
 * 0000000140A01985: mov     rdi, rdx
 * 0000000140A01988: lea     r9, [rsi+r9*8]
 * 0000000140A0198C: mov     rdx, [r9]
 * 0000000140A0198F: lea     rax, [r15+r15]
 * 0000000140A01993: mov     ecx, r8d
 * 0000000140A01996: lea     r9, [r9-8]
 * 0000000140A0199A: ror     rdx, cl
 * 0000000140A0199D: mov     r15, rdx
 * 0000000140A019A0: xor     r15, rax
 * 0000000140A019A3: sub     r8d, edi
 * 0000000140A019A6: jnz     short loc_140A0198C
 * 0000000140A019A8: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A019AD: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A019B4: mov     ecx, r14d
 * 0000000140A019B7: lea     rdx, [rsi+r11]
 * 0000000140A019BB: sub     ecx, r11d
 * 0000000140A019BE: shr     ecx, 3
 * 0000000140A019C1: test    ecx, ecx
 * 0000000140A019C3: jz      short loc_140A019E0
 * 0000000140A019C5: lea     rdx, [rdx+rcx*8]
 * 0000000140A019C9: mov     eax, 1
 * 0000000140A019CE: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140A019D2: xor     [rdx], r10
 * 0000000140A019D5: lea     rdx, [rdx-8]
 * 0000000140A019D9: ror     r10, cl
 * 0000000140A019DC: sub     ecx, eax
 * 0000000140A019DE: jnz     short loc_140A019D2
 * 0000000140A019E0: mov     rax, [rsp+0CE0h+var_C70]
 * 0000000140A019E5: test    rax, rax
 * 0000000140A019E8: jz      short loc_140A01A0B
 * 0000000140A019EA: mov     r9, [rbp+0BE0h+var_C40]
 * 0000000140A019EE: lea     r8, [rbp+0BE0h+var_AA8]
 * 0000000140A019F5: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 0000000140A019FA: mov     edx, r14d
 * 0000000140A019FD: mov     rax, [rbp+0BE0h+var_C30]
 * 0000000140A01A01: mov     rcx, rsi
 * 0000000140A01A04: call    KeGuardDispatchICall
 * 0000000140A01A09: jmp     short loc_140A01A44
 * 0000000140A01A0B: xor     edx, edx
 * 0000000140A01A0D: test    r12, r12
 * 0000000140A01A10: jnz     short loc_140A01A26
 * 0000000140A01A12: mov     rax, [rbp+0BE0h+var_C40]
 * 0000000140A01A16: lea     r8, [rbp+0BE0h+var_AA8]
 * 0000000140A01A1D: xor     ecx, ecx
 * 0000000140A01A1F: call    KeGuardDispatchICall
 * 0000000140A01A24: jmp     short loc_140A01A44
 * 0000000140A01A26: lea     rax, [rbp+0BE0h+var_AA8]
 * 0000000140A01A2D: xor     r9d, r9d
 * 0000000140A01A30: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 0000000140A01A35: xor     r8d, r8d
 * 0000000140A01A38: mov     rax, [rbp+0BE0h+var_BD8]
 * 0000000140A01A3C: mov     rcx, r12
 * 0000000140A01A3F: call    KeGuardDispatchICall
 * 0000000140A01A44: test    r13d, r13d
 * 0000000140A01A47: jz      loc_140A01B70
 * 0000000140A01A4D: mov     r9, rbx
 * 0000000140A01A50: lea     rax, [rsi+0A98h]
 * 0000000140A01A57: xor     r9, rsi
 * 0000000140A01A5A: mov     ecx, 154h
 * 0000000140A01A5F: mov     r10d, 1
 * 0000000140A01A65: xor     [rax], rbx
 * 0000000140A01A68: lea     rax, [rax-8]
 * 0000000140A01A6C: ror     rbx, cl
 * 0000000140A01A6F: sub     ecx, r10d
 * 0000000140A01A72: jnz     short loc_140A01A65
 * 0000000140A01A74: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A01A7B: mov     r11d, r12d
 * 0000000140A01A7E: lea     r8, [r12-0AA0h]
 * 0000000140A01A86: shr     r8, 3
 * 0000000140A01A8A: test    r8d, r8d
 * 0000000140A01A8D: jz      short loc_140A01AC4
 * 0000000140A01A8F: movsxd  r10, r8d
 * 0000000140A01A92: lea     r11d, [rcx+1]
 * 0000000140A01A96: add     r10, 153h
 * 0000000140A01A9D: lea     r10, [rsi+r10*8]
 * 0000000140A01AA1: mov     rdx, [r10]
 * 0000000140A01AA4: lea     rax, [r9+r9]
 * 0000000140A01AA8: mov     ecx, r8d
 * 0000000140A01AAB: lea     r10, [r10-8]
 * 0000000140A01AAF: ror     rdx, cl
 * 0000000140A01AB2: mov     r9, rdx
 * 0000000140A01AB5: xor     r9, rax
 * 0000000140A01AB8: sub     r8d, r11d
 * 0000000140A01ABB: jnz     short loc_140A01AA1
 * 0000000140A01ABD: mov     r11, r12
 * 0000000140A01AC0: lea     r10d, [r8+1]
 * 0000000140A01AC4: sub     r14d, r12d
 * 0000000140A01AC7: lea     rcx, [rsi+r11]
 * 0000000140A01ACB: shr     r14d, 3
 * 0000000140A01ACF: test    r14d, r14d
 * 0000000140A01AD2: jz      short loc_140A01AF0
 * 0000000140A01AD4: mov     edx, r14d
 * 0000000140A01AD7: dec     rdx
 * 0000000140A01ADA: lea     rdx, [rcx+rdx*8]
 * 0000000140A01ADE: xor     [rdx], rbx
 * 0000000140A01AE1: mov     ecx, r14d
 * 0000000140A01AE4: ror     rbx, cl
 * 0000000140A01AE7: lea     rdx, [rdx-8]
 * 0000000140A01AEB: sub     r14d, r10d
 * 0000000140A01AEE: jnz     short loc_140A01ADE
 * 0000000140A01AF0: cmp     r9, r15
 * 0000000140A01AF3: jz      short loc_140A01B70
 * 0000000140A01AF5: mov     rax, [rsi+590h]
 * 0000000140A01AFC: mov     ecx, [rsi+7E4h]
 * 0000000140A01B02: mov     [rax], rsi
 * 0000000140A01B05: mov     [rax+10h], ecx
 * 0000000140A01B08: mov     eax, [rsi+8F8h]
 * 0000000140A01B0E: test    eax, eax
 * 0000000140A01B10: jnz     short loc_140A01B29
 * 0000000140A01B12: mov     rax, [rsi+590h]
 * 0000000140A01B19: mov     rcx, r9
 * 0000000140A01B1C: xor     rcx, r15
 * 0000000140A01B1F: mov     [rax+18h], rcx
 * 0000000140A01B23: mov     eax, [rsi+8F8h]
 * 0000000140A01B29: xor     r15d, r15d
 * 0000000140A01B2C: test    eax, eax
 * 0000000140A01B2E: jnz     short loc_140A01B73
 * 0000000140A01B30: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A01B3A: xor     edx, edx
 * 0000000140A01B3C: add     rax, rsi
 * 0000000140A01B3F: mov     rcx, rsi
 * 0000000140A01B42: mov     [rsi+900h], rax
 * 0000000140A01B49: mov     [rsi+908h], r15
 * 0000000140A01B50: mov     qword ptr [rsi+910h], 10Eh
 * 0000000140A01B5B: mov     [rsi+918h], r9
 * 0000000140A01B62: mov     [rsi+8F8h], r10d
 * 0000000140A01B69: call    $$b8
 * 0000000140A01B6E: jmp     short loc_140A01B73
 * 0000000140A01B70: xor     r15d, r15d
 * 0000000140A01B73: mov     eax, [rsi+958h]
 * 0000000140A01B79: mov     r12d, 1
 * 0000000140A01B7F: cmp     eax, 0Bh
 * 0000000140A01B82: jz      loc_140A0651C
 * 0000000140A01B88: cmp     eax, r12d
 * 0000000140A01B8B: jz      loc_140A0651C
 * 0000000140A01B91: cmp     [rsi+8F8h], r15d
 * 0000000140A01B98: jnz     loc_140A06521
 * 0000000140A01B9E: mov     rax, [rsi+960h]
 * 0000000140A01BA5: mov     rcx, [rax]
 * 0000000140A01BA8: cmp     rcx, [rsi+968h]
 * 0000000140A01BAF: jz      loc_140A062D6
 * 0000000140A01BB5: mov     ecx, [rsi+970h]
 * 0000000140A01BBB: mov     r13d, 0FFFFFFFFh
 * 0000000140A01BC1: mov     rbx, rsi
 * 0000000140A01BC4: mov     [rbp+0BE0h+var_C60], rbx
 * 0000000140A01BC8: cmp     ecx, r13d
 * 0000000140A01BCB: jz      short loc_140A01BDE
 * 0000000140A01BCD: mov     rax, [rsi+278h]
 * 0000000140A01BD4: call    KeGuardDispatchICall
 * 0000000140A01BD9: mov     r14, rax
 * 0000000140A01BDC: jmp     short loc_140A01BE1
 * 0000000140A01BDE: mov     r14, r15
 * 0000000140A01BE1: test    r14, r14
 * 0000000140A01BE4: jnz     short loc_140A01C00
 * 0000000140A01BE6: mov     rax, [rsi+280h]
 * 0000000140A01BED: xor     ecx, ecx
 * 0000000140A01BEF: call    KeGuardDispatchICall
 * 0000000140A01BF4: mov     r14, rax
 * 0000000140A01BF7: test    rax, rax
 * 0000000140A01BFA: jz      loc_140A0651C
 * 0000000140A01C00: mov     rax, [rsi+290h]
 * 0000000140A01C07: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A01C0E: mov     rcx, r14
 * 0000000140A01C11: call    KeGuardDispatchICall
 * 0000000140A01C16: xor     r12d, r12d
 * 0000000140A01C19: mov     r15d, eax
 * 0000000140A01C1C: test    eax, eax
 * 0000000140A01C1E: jns     short loc_140A01C31
 * 0000000140A01C20: mov     rax, [rsi+288h]
 * 0000000140A01C27: mov     rcx, r14
 * 0000000140A01C2A: call    KeGuardDispatchICall
 * 0000000140A01C2F: jmp     short loc_140A01C93
 * 0000000140A01C31: mov     [rsi+980h], r14
 * 0000000140A01C38: mov     rax, [rsi+2B8h]
 * 0000000140A01C3F: call    KeGuardDispatchICall
 * 0000000140A01C44: mov     r14, rax
 * 0000000140A01C47: mov     rax, [rsi+2D8h]
 * 0000000140A01C4E: mov     rcx, r14
 * 0000000140A01C51: call    KeGuardDispatchICall
 * 0000000140A01C56: mov     rdx, rax
 * 0000000140A01C59: test    rax, rax
 * 0000000140A01C5C: jnz     short loc_140A01C63
 * 0000000140A01C5E: lea     ecx, [rax+4]
 * 0000000140A01C61: jmp     short loc_140A01C75
 * 0000000140A01C63: mov     rax, [rsi+2E8h]
 * 0000000140A01C6A: mov     rcx, r14
 * 0000000140A01C6D: call    KeGuardDispatchICall
 * 0000000140A01C72: mov     ecx, r12d
 * 0000000140A01C75: mov     eax, [rsi+994h]
 * 0000000140A01C7B: mov     r15d, r12d
 * 0000000140A01C7E: and     eax, 0FFFFFFFBh
 * 0000000140A01C81: or      eax, ecx
 * 0000000140A01C83: mov     [rsi+994h], eax
 * 0000000140A01C89: add     dword ptr [rsi+828h], 10000h
 * 0000000140A01C93: test    r15d, r15d
 * 0000000140A01C96: js      loc_140A06515
 * 0000000140A01C9C: mov     rax, [rsi+2A0h]
 * 0000000140A01CA3: mov     rcx, [rsi+980h]
 * 0000000140A01CAA: call    KeGuardDispatchICall
 * 0000000140A01CAF: xor     r15d, r15d
 * 0000000140A01CB2: test    eax, eax
 * 0000000140A01CB4: jnz     loc_140A062A7
 * 0000000140A01CBA: mov     rax, [rsi+578h]
 * 0000000140A01CC1: lea     ecx, [r15+20h]
 * 0000000140A01CC5: mov     rdx, [rsi+968h]
 * 0000000140A01CCC: lea     rbx, [rbp+0BE0h+var_858]
 * 0000000140A01CD3: add     rax, rcx
 * 0000000140A01CD6: mov     [rsp+0CE0h+var_C88], r15
 * 0000000140A01CDB: mov     [rbp+0BE0h+var_858], rax
 * 0000000140A01CE2: mov     rax, [rsi+570h]
 * 0000000140A01CE9: add     rax, rcx
 * 0000000140A01CEC: mov     [rbp+0BE0h+var_BD8], rdx
 * 0000000140A01CF0: mov     [rbp+0BE0h+var_850], rax
 * 0000000140A01CF7: mov     rax, [rsi+960h]
 * 0000000140A01CFE: mov     esi, r15d
 * 0000000140A01D01: mov     [rbp+0BE0h+var_C50], rax
 * 0000000140A01D05: mov     [rbp+0BE0h+var_C40], rbx
 * 0000000140A01D09: mov     [rbp+0BE0h+var_C30], 2
 * 0000000140A01D11: mov     r12, [rbx]
 * 0000000140A01D14: xor     rsi, rax
 * 0000000140A01D17: mov     r9d, esi
 * 0000000140A01D1A: mov     [rsp+0CE0h+var_C70], r12
 * 0000000140A01D1F: mov     r13d, 3Fh ; '?'
 * 0000000140A01D25: and     r9d, r13d
 * 0000000140A01D28: mov     rdi, [r12]
 * 0000000140A01D2C: mov     r15d, [r12+10h]
 * 0000000140A01D31: mov     r10, rdi
 * 0000000140A01D34: mov     r11d, r15d
 * 0000000140A01D37: mov     dword ptr [rbp+0BE0h+arg_8], r15d
 * 0000000140A01D3E: shl     r11d, 2
 * 0000000140A01D42: mov     rax, rdi
 * 0000000140A01D45: mov     ecx, r11d
 * 0000000140A01D48: add     rcx, rdi
 * 0000000140A01D4B: cmp     rdi, rcx
 * 0000000140A01D4E: jnb     short loc_140A01D5F
 * 0000000140A01D50: lea     r8d, [r13+1]
 * 0000000140A01D54: prefetchnta byte ptr [rax]
 * 0000000140A01D57: add     rax, r8
 * 0000000140A01D5A: cmp     rax, rcx
 * 0000000140A01D5D: jb      short loc_140A01D54
 * 0000000140A01D5F: mov     r14d, r11d
 * 0000000140A01D62: mov     r8, rsi
 * 0000000140A01D65: shr     r14d, 7
 * 0000000140A01D69: test    r14d, r14d
 * 0000000140A01D6C: jz      short loc_140A01DE7
 * 0000000140A01D6E: mov     ebx, 0FFFFFFFFh
 * 0000000140A01D73: mov     r12d, 1
 * 0000000140A01D79: mov     r15, 7010008004002001h
 * 0000000140A01D83: mov     eax, 8
 * 0000000140A01D88: xor     r8, [r10]
 * 0000000140A01D8B: mov     ecx, r9d
 * 0000000140A01D8E: rol     r8, cl
 * 0000000140A01D91: xor     r8, [r10+8]
 * 0000000140A01D95: add     r10, 10h
 * 0000000140A01D99: rol     r8, cl
 * 0000000140A01D9C: sub     rax, r12
 * 0000000140A01D9F: jnz     short loc_140A01D88
 * 0000000140A01DA1: mov     rcx, r10
 * 0000000140A01DA4: sub     rcx, rdi
 * 0000000140A01DA7: xor     rcx, rsi
 * 0000000140A01DAA: mov     rax, rcx
 * 0000000140A01DAD: rol     rax, 11h
 * 0000000140A01DB1: xor     rcx, rax
 * 0000000140A01DB4: mov     rax, r15
 * 0000000140A01DB7: mul     rcx
 * 0000000140A01DBA: xor     r9d, edx
 * 0000000140A01DBD: mov     [rbp+0BE0h+var_570], rdx
 * 0000000140A01DC4: xor     r9d, eax
 * 0000000140A01DC7: and     r9d, r13d
 * 0000000140A01DCA: cmovz   r9d, r12d
 * 0000000140A01DCE: add     r14d, ebx
 * 0000000140A01DD1: jnz     short loc_140A01D83
 * 0000000140A01DD3: mov     r15d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A01DDA: mov     r12, [rsp+0CE0h+var_C70]
 * 0000000140A01DDF: mov     rbx, [rbp+0BE0h+var_C40]
 * 0000000140A01DE3: mov     rdx, [rbp+0BE0h+var_BD8]
 * 0000000140A01DE7: and     r11d, 7Fh
 * 0000000140A01DEB: mov     r14d, 1
 * 0000000140A01DF1: cmp     r11d, 8
 * 0000000140A01DF5: jb      short loc_140A01E14
 * 0000000140A01DF7: mov     eax, r11d
 * 0000000140A01DFA: shr     rax, 3
 * 0000000140A01DFE: xor     r8, [r10]
 * 0000000140A01E01: mov     ecx, r9d
 * 0000000140A01E04: rol     r8, cl
 * 0000000140A01E07: add     r10, 8
 * 0000000140A01E0B: add     r11d, 0FFFFFFF8h
 * 0000000140A01E0F: sub     rax, r14
 * 0000000140A01E12: jnz     short loc_140A01DFE
 * 0000000140A01E14: test    r11d, r11d
 * 0000000140A01E17: jz      short loc_140A01E33
 * 0000000140A01E19: mov     esi, 0FFFFFFFFh
 * 0000000140A01E1E: movzx   eax, byte ptr [r10]
 * 0000000140A01E22: mov     ecx, r9d
 * 0000000140A01E25: xor     r8, rax
 * 0000000140A01E28: add     r10, r14
 * 0000000140A01E2B: rol     r8, cl
 * 0000000140A01E2E: add     r11d, esi
 * 0000000140A01E31: jnz     short loc_140A01E1E
 * 0000000140A01E33: mov     r12, [r12+18h]
 * 0000000140A01E38: xor     r8, rdx
 * 0000000140A01E3B: mov     r11d, r8d
 * 0000000140A01E3E: mov     r10, r12
 * 0000000140A01E41: and     r11d, r13d
 * 0000000140A01E44: mov     rax, r12
 * 0000000140A01E47: mov     r13d, r15d
 * 0000000140A01E4A: lea     rcx, [r12+r13]
 * 0000000140A01E4E: cmp     r12, rcx
 * 0000000140A01E51: jnb     short loc_140A01E63
 * 0000000140A01E53: mov     edx, 40h ; '@'
 * 0000000140A01E58: prefetchnta byte ptr [rax]
 * 0000000140A01E5B: add     rax, rdx
 * 0000000140A01E5E: cmp     rax, rcx
 * 0000000140A01E61: jb      short loc_140A01E58
 * 0000000140A01E63: mov     r14d, r15d
 * 0000000140A01E66: mov     r9, r8
 * 0000000140A01E69: shr     r14d, 7
 * 0000000140A01E6D: test    r14d, r14d
 * 0000000140A01E70: jz      short loc_140A01EE1
 * 0000000140A01E72: mov     rbx, 7010008004002001h
 * 0000000140A01E7C: mov     edx, 8
 * 0000000140A01E81: lea     esi, [rdx-7]
 * 0000000140A01E84: mov     rax, [r10]
 * 0000000140A01E87: mov     ecx, r11d
 * 0000000140A01E8A: xor     rax, r9
 * 0000000140A01E8D: mov     r9, [r10+8]
 * 0000000140A01E91: rol     rax, cl
 * 0000000140A01E94: add     r10, 10h
 * 0000000140A01E98: xor     r9, rax
 * 0000000140A01E9B: rol     r9, cl
 * 0000000140A01E9E: sub     rdx, rsi
 * 0000000140A01EA1: jnz     short loc_140A01E84
 * 0000000140A01EA3: mov     rcx, r10
 * 0000000140A01EA6: sub     rcx, r12
 * 0000000140A01EA9: xor     rcx, r8
 * 0000000140A01EAC: mov     rax, rcx
 * 0000000140A01EAF: rol     rax, 11h
 * 0000000140A01EB3: xor     rcx, rax
 * 0000000140A01EB6: mov     rax, rbx
 * 0000000140A01EB9: mul     rcx
 * 0000000140A01EBC: mov     [rbp+0BE0h+var_568], rdx
 * 0000000140A01EC3: xor     edx, eax
 * 0000000140A01EC5: xor     r11d, edx
 * 0000000140A01EC8: mov     rax, rsi
 * 0000000140A01ECB: and     r11d, 3Fh
 * 0000000140A01ECF: cmovz   r11d, eax
 * 0000000140A01ED3: mov     eax, 0FFFFFFFFh
 * 0000000140A01ED8: add     r14d, eax
 * 0000000140A01EDB: jnz     short loc_140A01E7C
 * 0000000140A01EDD: mov     rbx, [rbp+0BE0h+var_C40]
 * 0000000140A01EE1: and     r15d, 7Fh
 * 0000000140A01EE5: mov     r12d, 1
 * 0000000140A01EEB: cmp     r15d, 8
 * 0000000140A01EEF: jb      short loc_140A01F0E
 * 0000000140A01EF1: mov     edx, r15d
 * 0000000140A01EF4: shr     rdx, 3
 * 0000000140A01EF8: xor     r9, [r10]
 * 0000000140A01EFB: mov     ecx, r11d
 * 0000000140A01EFE: rol     r9, cl
 * 0000000140A01F01: add     r10, 8
 * 0000000140A01F05: add     r15d, 0FFFFFFF8h
 * 0000000140A01F09: sub     rdx, r12
 * 0000000140A01F0C: jnz     short loc_140A01EF8
 * 0000000140A01F0E: mov     r14d, 0FFFFFFFFh
 * 0000000140A01F14: test    r15d, r15d
 * 0000000140A01F17: jz      short loc_140A01F2E
 * 0000000140A01F19: movzx   eax, byte ptr [r10]
 * 0000000140A01F1D: mov     ecx, r11d
 * 0000000140A01F20: xor     r9, rax
 * 0000000140A01F23: add     r10, r12
 * 0000000140A01F26: rol     r9, cl
 * 0000000140A01F29: add     r15d, r14d
 * 0000000140A01F2C: jnz     short loc_140A01F19
 * 0000000140A01F2E: mov     rax, [rbp+0BE0h+var_C50]
 * 0000000140A01F32: add     rbx, 8
 * 0000000140A01F36: mov     rdx, [rbp+0BE0h+var_BD8]
 * 0000000140A01F3A: mov     rsi, rdi
 * 0000000140A01F3D: xor     rsi, r13
 * 0000000140A01F40: mov     [rbp+0BE0h+var_C40], rbx
 * 0000000140A01F44: xor     rsi, r9
 * 0000000140A01F47: sub     [rbp+0BE0h+var_C30], r12
 * 0000000140A01F4B: jnz     loc_140A01D11
 * 0000000140A01F51: mov     [rsp+0CE0h+var_C88], rsi
 * 0000000140A01F56: lea     rdx, [rbp+0BE0h+var_980]
 * 0000000140A01F5D: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A01F62: mov     rcx, rdi
 * 0000000140A01F65: mov     rax, [rsi+208h]
 * 0000000140A01F6C: call    KeGuardDispatchICall
 * 0000000140A01F71: mov     rbx, [rbp+0BE0h+var_C60]
 * 0000000140A01F75: xor     r15d, r15d
 * 0000000140A01F78: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A01F7F: cmp     [rbp+0BE0h+var_980], r15
 * 0000000140A01F86: jz      loc_140A0273F
 * 0000000140A01F8C: rdtsc
 * 0000000140A01F8E: shl     rdx, 20h
 * 0000000140A01F92: mov     r8, 7010008004002001h
 * 0000000140A01F9C: or      rax, rdx
 * 0000000140A01F9F: mov     rcx, rax
 * 0000000140A01FA2: ror     rax, 3
 * 0000000140A01FA6: xor     rcx, rax
 * 0000000140A01FA9: mov     rax, r8
 * 0000000140A01FAC: mul     rcx
 * 0000000140A01FAF: mov     rcx, rdx
 * 0000000140A01FB2: mov     [rbp+0BE0h+var_560], rdx
 * 0000000140A01FB9: xor     rcx, rax
 * 0000000140A01FBC: mov     rax, 2E8BA2E8BA2E8BA3h
 * 0000000140A01FC6: mul     rcx
 * 0000000140A01FC9: shr     rdx, 1
 * 0000000140A01FCC: imul    rax, rdx, 0Bh
 * 0000000140A01FD0: sub     rcx, rax
 * 0000000140A01FD3: lea     eax, [r15+5]
 * 0000000140A01FD7: cmp     ecx, eax
 * 0000000140A01FD9: ja      loc_140A02097
 * 0000000140A01FDF: jz      loc_140A0207D
 * 0000000140A01FE5: test    ecx, ecx
 * 0000000140A01FE7: jz      short loc_140A02063
 * 0000000140A01FE9: sub     ecx, 1
 * 0000000140A01FEC: jz      short loc_140A0204A
 * 0000000140A01FEE: sub     ecx, 1
 * 0000000140A01FF1: jz      short loc_140A02030
 * 0000000140A01FF3: cmp     ecx, 1
 * 0000000140A01FF6: jz      short loc_140A02012
 * 0000000140A01FF8: mov     [rbp+0BE0h+var_9DC], 67076494h
 * 0000000140A02002: mov     r9d, [rbp+0BE0h+var_9DC]
 * 0000000140A02009: rol     r9d, 4
 * 0000000140A0200D: jmp     loc_140A021BB
 * 0000000140A02012: mov     [rbp+0BE0h+var_9D8], 0A8223938h
 * 0000000140A0201C: mov     r9d, [rbp+0BE0h+var_9D8]
 * 0000000140A02023: xor     r9d, 3
 * 0000000140A02027: ror     r9d, 0Fh
 * 0000000140A0202B: jmp     loc_140A021BB
 * 0000000140A02030: mov     [rbp+0BE0h+var_9D4], 85B5910Dh
 * 0000000140A0203A: mov     r9d, [rbp+0BE0h+var_9D4]
 * 0000000140A02041: ror     r9d, 2
 * 0000000140A02045: jmp     loc_140A021BB
 * 0000000140A0204A: mov     [rbp+0BE0h+var_9D0], 0B2AD31A1h
 * 0000000140A02054: mov     r9d, [rbp+0BE0h+var_9D0]
 * 0000000140A0205B: rol     r9d, 1
 * 0000000140A0205E: jmp     loc_140A021BB
 * 0000000140A02063: mov     [rbp+0BE0h+var_9CC], 0D098D0D8h
 * 0000000140A0206D: mov     r9d, [rbp+0BE0h+var_9CC]
 * 0000000140A02074: ror     r9d, 6
 * 0000000140A02078: jmp     loc_140A021BB
 * 0000000140A0207D: mov     [rbp+0BE0h+var_A90], 288C49EDh
 * 0000000140A02087: mov     r9d, [rbp+0BE0h+var_A90]
 * 0000000140A0208E: ror     r9d, 5
 * 0000000140A02092: jmp     loc_140A021BB
 * 0000000140A02097: sub     ecx, 6
 * 0000000140A0209A: jz      loc_140A021A2
 * 0000000140A020A0: sub     ecx, 1
 * 0000000140A020A3: jz      loc_140A0218B
 * 0000000140A020A9: sub     ecx, 1
 * 0000000140A020AC: jz      loc_140A02174
 * 0000000140A020B2: cmp     ecx, 1
 * 0000000140A020B5: jz      loc_140A02159
 * 0000000140A020BB: rdtsc
 * 0000000140A020BD: shl     rdx, 20h
 * 0000000140A020C1: mov     r10d, 4EC4EC4Fh
 * 0000000140A020C7: or      rax, rdx
 * 0000000140A020CA: mov     rcx, rax
 * 0000000140A020CD: ror     rax, 3
 * 0000000140A020D1: xor     rcx, rax
 * 0000000140A020D4: mov     rax, r8
 * 0000000140A020D7: mul     rcx
 * 0000000140A020DA: mov     r9, rdx
 * 0000000140A020DD: mov     [rbp+0BE0h+var_558], rdx
 * 0000000140A020E4: xor     r9d, eax
 * 0000000140A020E7: mov     eax, r10d
 * 0000000140A020EA: mul     r9d
 * 0000000140A020ED: mov     ecx, r9d
 * 0000000140A020F0: shr     r9d, 5
 * 0000000140A020F4: shr     edx, 3
 * 0000000140A020F7: mov     r8d, r9d
 * 0000000140A020FA: imul    eax, edx, 1Ah
 * 0000000140A020FD: sub     ecx, eax
 * 0000000140A020FF: mov     eax, r10d
 * 0000000140A02102: mul     r9d
 * 0000000140A02105: add     ecx, 61h ; 'a'
 * 0000000140A02108: shr     r9d, 5
 * 0000000140A0210C: shl     ecx, 8
 * 0000000140A0210F: shr     edx, 3
 * 0000000140A02112: imul    eax, edx, 1Ah
 * 0000000140A02115: sub     r8d, eax
 * 0000000140A02118: mov     eax, r10d
 * 0000000140A0211B: mul     r9d
 * 0000000140A0211E: add     r8d, 41h ; 'A'
 * 0000000140A02122: or      r8d, ecx
 * 0000000140A02125: shr     edx, 3
 * 0000000140A02128: imul    eax, edx, 1Ah
 * 0000000140A0212B: mov     ecx, r9d
 * 0000000140A0212E: shr     r9d, 5
 * 0000000140A02132: shl     r8d, 8
 * 0000000140A02136: sub     ecx, eax
 * 0000000140A02138: mov     eax, r10d
 * 0000000140A0213B: mul     r9d
 * 0000000140A0213E: add     ecx, 61h ; 'a'
 * 0000000140A02141: shr     edx, 3
 * 0000000140A02144: or      ecx, r8d
 * 0000000140A02147: imul    eax, edx, 1Ah
 * 0000000140A0214A: shl     ecx, 8
 * 0000000140A0214D: sub     r9d, eax
 * 0000000140A02150: add     r9d, 41h ; 'A'
 * 0000000140A02154: or      r9d, ecx
 * 0000000140A02157: jmp     short loc_140A021BB
 * 0000000140A02159: mov     [rbp+0BE0h+var_A8C], 0B0869E85h
 * 0000000140A02163: mov     r9d, [rbp+0BE0h+var_A8C]
 * 0000000140A0216A: xor     r9d, 9
 * 0000000140A0216E: ror     r9d, 21h
 * 0000000140A02172: jmp     short loc_140A021BB
 * 0000000140A02174: mov     [rbp+0BE0h+var_A88], 64664142h
 * 0000000140A0217E: mov     r9d, [rbp+0BE0h+var_A88]
 * 0000000140A02185: ror     r9d, 8
 * 0000000140A02189: jmp     short loc_140A021BB
 * 0000000140A0218B: mov     [rbp+0BE0h+var_A84], 82C6A6D8h
 * 0000000140A02195: mov     r9d, [rbp+0BE0h+var_A84]
 * 0000000140A0219C: rol     r9d, 7
 * 0000000140A021A0: jmp     short loc_140A021BB
 * 0000000140A021A2: mov     [rbp+0BE0h+var_A80], 4E574672h
 * 0000000140A021AC: mov     r9d, [rbp+0BE0h+var_A80]
 * 0000000140A021B3: xor     r9d, 6
 * 0000000140A021B7: ror     r9d, 18h
 * 0000000140A021BB: mov     rax, [rsi+0F8h]
 * 0000000140A021C2: mov     r13d, 80h
 * 0000000140A021C8: mov     edx, r13d
 * 0000000140A021CB: mov     r8d, r9d
 * 0000000140A021CE: mov     ecx, 200h
 * 0000000140A021D3: call    KeGuardDispatchICall
 * 0000000140A021D8: mov     [rbp+0BE0h+var_BD8], rax
 * 0000000140A021DC: mov     r9, rax
 * 0000000140A021DF: test    rax, rax
 * 0000000140A021E2: jz      loc_140A02AB7
 * 0000000140A021E8: mov     ecx, r13d
 * 0000000140A021EB: lea     edx, [r13-70h]
 * 0000000140A021EF: mov     [rax], r15
 * 0000000140A021F2: add     ecx, 0FFFFFFF8h
 * 0000000140A021F5: add     rax, 8
 * 0000000140A021F9: sub     rdx, r12
 * 0000000140A021FC: jnz     short loc_140A021EF
 * 0000000140A021FE: test    ecx, ecx
 * 0000000140A02200: jz      short loc_140A0220D
 * 0000000140A02202: mov     [rax], r15b
 * 0000000140A02205: add     rax, r12
 * 0000000140A02208: add     ecx, r14d
 * 0000000140A0220B: jnz     short loc_140A02202
 * 0000000140A0220D: mov     rax, [rbp+0BE0h+var_980]
 * 0000000140A02214: mov     rcx, r15
 * 0000000140A02217: mov     [rbp+0BE0h+var_AF8], rax
 * 0000000140A0221E: mov     [r9], rax
 * 0000000140A02221: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A02226: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A0222A: mov     dword ptr [rbp+0BE0h+arg_8], r15d
 * 0000000140A02231: mov     [rbp+0BE0h+var_C08], rcx
 * 0000000140A02235: mov     rcx, [r9+rcx*8]
 * 0000000140A02239: mov     [rbp+0BE0h+var_AF8], rcx
 * 0000000140A02240: test    rcx, rcx
 * 0000000140A02243: jz      loc_140A02737
 * 0000000140A02249: mov     r13d, eax
 * 0000000140A0224C: mov     rax, [rsi+1F8h]
 * 0000000140A02253: and     r13d, 3Fh
 * 0000000140A02257: call    KeGuardDispatchICall
 * 0000000140A0225C: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A02260: test    rax, rax
 * 0000000140A02263: jz      loc_140A026B0
 * 0000000140A02269: movzx   r14d, word ptr [rax+14h]
 * 0000000140A0226E: mov     rbx, [rbp+0BE0h+var_C30]
 * 0000000140A02272: add     r14, 18h
 * 0000000140A02276: add     r14, rax
 * 0000000140A02279: movzx   eax, word ptr [rax+6]
 * 0000000140A0227D: lea     rcx, [rax+rax*4]
 * 0000000140A02281: lea     rax, [r14+rcx*8]
 * 0000000140A02285: mov     [rbp+0BE0h+var_C50], rax
 * 0000000140A02289: mov     rdi, rax
 * 0000000140A0228C: mov     eax, [r14+24h]
 * 0000000140A02290: mov     r11d, r15d
 * 0000000140A02293: bt      eax, 19h
 * 0000000140A02297: jb      loc_140A02418
 * 0000000140A0229D: mov     ecx, [r14]
 * 0000000140A022A0: cmp     ecx, 54494E49h
 * 0000000140A022A6: jnz     short loc_140A022B6
 * 0000000140A022A8: cmp     dword ptr [r14+4], 4742444Bh
 * 0000000140A022B0: jz      loc_140A02418
 * 0000000140A022B6: cmp     ecx, 45474150h
 * 0000000140A022BC: jnz     short loc_140A022ED
 * 0000000140A022BE: movzx   eax, word ptr [r14+4]
 * 0000000140A022C3: mov     edx, 7877h
 * 0000000140A022C8: cmp     ax, dx
 * 0000000140A022CB: jz      loc_140A02418
 * 0000000140A022D1: mov     edx, 7277h
 * 0000000140A022D6: cmp     ax, dx
 * 0000000140A022D9: jz      loc_140A02418
 * 0000000140A022DF: mov     edx, 7777h
 * 0000000140A022E4: cmp     ax, dx
 * 0000000140A022E7: jz      loc_140A02418
 * 0000000140A022ED: cmp     ecx, 41525245h
 * 0000000140A022F3: jnz     short loc_140A02305
 * 0000000140A022F5: mov     eax, 4154h
 * 0000000140A022FA: cmp     [r14+4], ax
 * 0000000140A022FF: jz      loc_140A02418
 * 0000000140A02305: mov     rax, [rsi+938h]
 * 0000000140A0230C: mov     r9, r14
 * 0000000140A0230F: mov     r8, [rsi+930h]
 * 0000000140A02316: mov     r10d, 7
 * 0000000140A0231C: mov     [rbp+0BE0h+var_808], rax
 * 0000000140A02323: sub     r9, r8
 * 0000000140A02326: mov     rax, [rsi+940h]
 * 0000000140A0232D: mov     [rbp+0BE0h+var_800], rax
 * 0000000140A02334: mov     rax, [rsi+948h]
 * 0000000140A0233B: mov     [rbp+0BE0h+var_7F8], rax
 * 0000000140A02342: mov     [rbp+0BE0h+var_810], r8
 * 0000000140A02349: movzx   edx, byte ptr [r9+r8]
 * 0000000140A0234E: movzx   eax, byte ptr [r8]
 * 0000000140A02352: add     r8, r12
 * 0000000140A02355: cmp     rdx, rax
 * 0000000140A02358: jnz     short loc_140A02369
 * 0000000140A0235A: mov     eax, 0FFFFFFFFh
 * 0000000140A0235F: add     r10d, eax
 * 0000000140A02362: jnz     short loc_140A02349
 * 0000000140A02364: jmp     loc_140A02418
 * 0000000140A02369: mov     r9, [rbp+0BE0h+var_808]
 * 0000000140A02370: mov     r8d, 8
 * 0000000140A02376: mov     r10, r14
 * 0000000140A02379: mov     rcx, [r10]
 * 0000000140A0237C: add     r10, 8
 * 0000000140A02380: mov     rax, [r9]
 * 0000000140A02383: add     r9, 8
 * 0000000140A02387: cmp     rcx, rax
 * 0000000140A0238A: jnz     short loc_140A023BA
 * 0000000140A0238C: add     r8d, 0FFFFFFF8h
 * 0000000140A02390: cmp     r8d, 8
 * 0000000140A02394: jnb     short loc_140A02379
 * 0000000140A02396: test    r8d, r8d
 * 0000000140A02399: jz      short loc_140A02418
 * 0000000140A0239B: movzx   edx, byte ptr [r10]
 * 0000000140A0239F: add     r10, r12
 * 0000000140A023A2: movzx   eax, byte ptr [r9]
 * 0000000140A023A6: add     r9, r12
 * 0000000140A023A9: cmp     rdx, rax
 * 0000000140A023AC: jnz     short loc_140A023BA
 * 0000000140A023AE: mov     eax, 0FFFFFFFFh
 * 0000000140A023B3: add     r8d, eax
 * 0000000140A023B6: jnz     short loc_140A0239B
 * 0000000140A023B8: jmp     short loc_140A02418
 * 0000000140A023BA: mov     r8, [rbp+0BE0h+var_800]
 * 0000000140A023C1: mov     r9, r14
 * 0000000140A023C4: sub     r9, r8
 * 0000000140A023C7: mov     r10d, 4
 * 0000000140A023CD: movzx   edx, byte ptr [r9+r8]
 * 0000000140A023D2: movzx   eax, byte ptr [r8]
 * 0000000140A023D6: add     r8, r12
 * 0000000140A023D9: cmp     rdx, rax
 * 0000000140A023DC: jnz     short loc_140A023EA
 * 0000000140A023DE: mov     eax, 0FFFFFFFFh
 * 0000000140A023E3: add     r10d, eax
 * 0000000140A023E6: jnz     short loc_140A023CD
 * 0000000140A023E8: jmp     short loc_140A02418
 * 0000000140A023EA: mov     r8, [rbp+0BE0h+var_7F8]
 * 0000000140A023F1: mov     r9, r14
 * 0000000140A023F4: sub     r9, r8
 * 0000000140A023F7: mov     r10d, 6
 * 0000000140A023FD: movzx   edx, byte ptr [r9+r8]
 * 0000000140A02402: movzx   eax, byte ptr [r8]
 * 0000000140A02406: add     r8, r12
 * 0000000140A02409: cmp     rdx, rax
 * 0000000140A0240C: jnz     short loc_140A0241B
 * 0000000140A0240E: mov     eax, 0FFFFFFFFh
 * 0000000140A02413: add     r10d, eax
 * 0000000140A02416: jnz     short loc_140A023FD
 * 0000000140A02418: mov     r11d, r12d
 * 0000000140A0241B: cmp     [r14+24h], r15d
 * 0000000140A0241F: mov     eax, [r14+8]
 * 0000000140A02423: mov     r9d, [r14+10h]
 * 0000000140A02427: cmovl   r11d, r12d
 * 0000000140A0242B: cmp     r9d, eax
 * 0000000140A0242E: cmovbe  r9d, eax
 * 0000000140A02432: mov     eax, [r14+0Ch]
 * 0000000140A02436: test    r11d, r11d
 * 0000000140A02439: jnz     loc_140A0253E
 * 0000000140A0243F: mov     r15d, eax
 * 0000000140A02442: mov     ecx, r9d
 * 0000000140A02445: add     r15, [rbp+0BE0h+var_AF8]
 * 0000000140A0244C: mov     r11d, r13d
 * 0000000140A0244F: add     rcx, r15
 * 0000000140A02452: mov     r10, r15
 * 0000000140A02455: mov     rax, r15
 * 0000000140A02458: cmp     r15, rcx
 * 0000000140A0245B: jnb     short loc_140A0246D
 * 0000000140A0245D: mov     edx, 40h ; '@'
 * 0000000140A02462: prefetchnta byte ptr [rax]
 * 0000000140A02465: add     rax, rdx
 * 0000000140A02468: cmp     rax, rcx
 * 0000000140A0246B: jb      short loc_140A02462
 * 0000000140A0246D: mov     r12d, r9d
 * 0000000140A02470: mov     r8, rbx
 * 0000000140A02473: shr     r12d, 7
 * 0000000140A02477: test    r12d, r12d
 * 0000000140A0247A: jz      short loc_140A024EC
 * 0000000140A0247C: mov     edi, 1
 * 0000000140A02481: mov     rsi, 7010008004002001h
 * 0000000140A0248B: mov     eax, 8
 * 0000000140A02490: xor     r8, [r10]
 * 0000000140A02493: mov     ecx, r11d
 * 0000000140A02496: rol     r8, cl
 * 0000000140A02499: xor     r8, [r10+8]
 * 0000000140A0249D: add     r10, 10h
 * 0000000140A024A1: rol     r8, cl
 * 0000000140A024A4: sub     rax, rdi
 * 0000000140A024A7: jnz     short loc_140A02490
 * 0000000140A024A9: mov     rcx, r10
 * 0000000140A024AC: sub     rcx, r15
 * 0000000140A024AF: xor     rcx, rbx
 * 0000000140A024B2: mov     rax, rcx
 * 0000000140A024B5: rol     rax, 11h
 * 0000000140A024B9: xor     rcx, rax
 * 0000000140A024BC: mov     rax, rsi
 * 0000000140A024BF: mul     rcx
 * 0000000140A024C2: xor     r11d, edx
 * 0000000140A024C5: mov     [rbp+0BE0h+var_550], rdx
 * 0000000140A024CC: xor     r11d, eax
 * 0000000140A024CF: mov     edx, 0FFFFFFFFh
 * 0000000140A024D4: and     r11d, 3Fh
 * 0000000140A024D8: cmovz   r11d, edi
 * 0000000140A024DC: add     r12d, edx
 * 0000000140A024DF: jnz     short loc_140A0248B
 * 0000000140A024E1: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A024E6: mov     rdi, [rbp+0BE0h+var_C50]
 * 0000000140A024EA: jmp     short loc_140A024F1
 * 0000000140A024EC: mov     edx, 0FFFFFFFFh
 * 0000000140A024F1: and     r9d, 7Fh
 * 0000000140A024F5: mov     r12d, 1
 * 0000000140A024FB: cmp     r9d, 8
 * 0000000140A024FF: jb      short loc_140A0251E
 * 0000000140A02501: mov     eax, r9d
 * 0000000140A02504: shr     rax, 3
 * 0000000140A02508: xor     r8, [r10]
 * 0000000140A0250B: mov     ecx, r11d
 * 0000000140A0250E: rol     r8, cl
 * 0000000140A02511: add     r10, 8
 * 0000000140A02515: add     r9d, 0FFFFFFF8h
 * 0000000140A02519: sub     rax, r12
 * 0000000140A0251C: jnz     short loc_140A02508
 * 0000000140A0251E: xor     r15d, r15d
 * 0000000140A02521: test    r9d, r9d
 * 0000000140A02524: jz      short loc_140A0253B
 * 0000000140A02526: movzx   eax, byte ptr [r10]
 * 0000000140A0252A: mov     ecx, r11d
 * 0000000140A0252D: xor     r8, rax
 * 0000000140A02530: add     r10, r12
 * 0000000140A02533: rol     r8, cl
 * 0000000140A02536: add     r9d, edx
 * 0000000140A02539: jnz     short loc_140A02526
 * 0000000140A0253B: mov     rbx, r8
 * 0000000140A0253E: add     r14, 28h ; '('
 * 0000000140A02542: cmp     r14, rdi
 * 0000000140A02545: jnz     loc_140A0228C
 * 0000000140A0254B: mov     r8d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A02552: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A02559: mov     [rbp+0BE0h+var_C30], rbx
 * 0000000140A0255D: test    r8d, r8d
 * 0000000140A02560: jnz     loc_140A0267F
 * 0000000140A02566: mov     rdx, [rbp+0BE0h+var_C40]
 * 0000000140A0256A: mov     r13, [rbp+0BE0h+var_AF8]
 * 0000000140A02571: mov     ecx, [rdx+94h]
 * 0000000140A02577: cmp     ecx, 14h
 * 0000000140A0257A: jb      loc_140A0267F
 * 0000000140A02580: mov     eax, [rdx+90h]
 * 0000000140A02586: lea     r12, [rax+rcx]
 * 0000000140A0258A: add     r12, r13
 * 0000000140A0258D: lea     r15, [rax+r13]
 * 0000000140A02591: cmp     r15, r12
 * 0000000140A02594: jz      loc_140A02676
 * 0000000140A0259A: xor     r10d, r10d
 * 0000000140A0259D: cmp     [r15+0Ch], r10d
 * 0000000140A025A1: jz      loc_140A0266F
 * 0000000140A025A7: mov     eax, [r15+10h]
 * 0000000140A025AB: test    eax, eax
 * 0000000140A025AD: jz      loc_140A0266F
 * 0000000140A025B3: mov     r14, [rax+r13]
 * 0000000140A025B7: test    r14, r14
 * 0000000140A025BA: jz      loc_140A0264C
 * 0000000140A025C0: cmp     r14, r13
 * 0000000140A025C3: jb      short loc_140A025D0
 * 0000000140A025C5: mov     eax, [rdx+50h]
 * 0000000140A025C8: add     rax, r13
 * 0000000140A025CB: cmp     r14, rax
 * 0000000140A025CE: jb      short loc_140A0264C
 * 0000000140A025D0: mov     rax, [rsi+2A8h]
 * 0000000140A025D7: mov     rcx, r14
 * 0000000140A025DA: call    KeGuardDispatchICall
 * 0000000140A025DF: xor     r10d, r10d
 * 0000000140A025E2: test    eax, eax
 * 0000000140A025E4: jz      short loc_140A02648
 * 0000000140A025E6: mov     rax, [rsi+208h]
 * 0000000140A025ED: lea     rdx, [rbp+0BE0h+var_AF8]
 * 0000000140A025F4: mov     rcx, r14
 * 0000000140A025F7: call    KeGuardDispatchICall
 * 0000000140A025FC: mov     rdx, [rbp+0BE0h+var_AF8]
 * 0000000140A02603: xor     r10d, r10d
 * 0000000140A02606: lea     r11d, [r10+10h]
 * 0000000140A0260A: test    rdx, rdx
 * 0000000140A0260D: jz      short loc_140A02642
 * 0000000140A0260F: mov     r9, [rbp+0BE0h+var_BD8]
 * 0000000140A02613: mov     ecx, r10d
 * 0000000140A02616: mov     rax, r9
 * 0000000140A02619: mov     r8, [rax]
 * 0000000140A0261C: cmp     r8, rdx
 * 0000000140A0261F: jz      short loc_140A02639
 * 0000000140A02621: test    r8, r8
 * 0000000140A02624: jz      short loc_140A02633
 * 0000000140A02626: inc     ecx
 * 0000000140A02628: add     rax, 8
 * 0000000140A0262C: cmp     ecx, r11d
 * 0000000140A0262F: jb      short loc_140A02619
 * 0000000140A02631: jmp     short loc_140A02639
 * 0000000140A02633: mov     eax, ecx
 * 0000000140A02635: mov     [r9+rax*8], rdx
 * 0000000140A02639: cmp     ecx, r11d
 * 0000000140A0263C: jz      loc_140A0272D
 * 0000000140A02642: mov     rdx, [rbp+0BE0h+var_C40]
 * 0000000140A02646: jmp     short loc_140A02652
 * 0000000140A02648: mov     rdx, [rbp+0BE0h+var_C40]
 * 0000000140A0264C: mov     r11d, 10h
 * 0000000140A02652: add     r15, 14h
 * 0000000140A02656: cmp     r15, r12
 * 0000000140A02659: jnz     loc_140A0259D
 * 0000000140A0265F: mov     r8d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A02666: xor     r15d, r15d
 * 0000000140A02669: lea     r12d, [r15+1]
 * 0000000140A0266D: jmp     short loc_140A02685
 * 0000000140A0266F: mov     r8d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A02676: mov     r12d, 1
 * 0000000140A0267C: xor     r15d, r15d
 * 0000000140A0267F: mov     r11d, 10h
 * 0000000140A02685: mov     rcx, [rbp+0BE0h+var_C08]
 * 0000000140A02689: add     r8d, r12d
 * 0000000140A0268C: mov     rax, [rbp+0BE0h+var_C30]
 * 0000000140A02690: add     rcx, r12
 * 0000000140A02693: mov     r9, [rbp+0BE0h+var_BD8]
 * 0000000140A02697: mov     dword ptr [rbp+0BE0h+arg_8], r8d
 * 0000000140A0269E: mov     [rbp+0BE0h+var_C08], rcx
 * 0000000140A026A2: cmp     r8d, r11d
 * 0000000140A026A5: jb      loc_140A02235
 * 0000000140A026AB: jmp     loc_140A02737
 * 0000000140A026B0: cmp     [rsi+8F8h], r15d
 * 0000000140A026B7: jnz     short loc_140A026FB
 * 0000000140A026B9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A026C3: xor     edx, edx
 * 0000000140A026C5: add     rax, rsi
 * 0000000140A026C8: mov     rcx, rsi
 * 0000000140A026CB: mov     [rsi+900h], rax
 * 0000000140A026D2: mov     [rsi+908h], r15
 * 0000000140A026D9: mov     qword ptr [rsi+910h], 102h
 * 0000000140A026E4: mov     qword ptr [rsi+918h], 0FFFFFFFFC000007Bh
 * 0000000140A026EF: mov     [rsi+8F8h], r12d
 * 0000000140A026F6: call    $$b8
 * 0000000140A026FB: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A02700: cmp     r14, [rsi+968h]
 * 0000000140A02707: jz      short loc_140A0270E
 * 0000000140A02709: test    r14, r14
 * 0000000140A0270C: jnz     short loc_140A0271B
 * 0000000140A0270E: mov     rax, 95EA5DE843D5D824h
 * 0000000140A02718: xor     r14, rax
 * 0000000140A0271B: mov     rax, [rsi+100h]
 * 0000000140A02722: mov     rcx, [rbp+0BE0h+var_BD8]
 * 0000000140A02726: call    KeGuardDispatchICall
 * 0000000140A0272B: jmp     short loc_140A02744
 * 0000000140A0272D: mov     rax, [rbp+0BE0h+var_C30]
 * 0000000140A02731: mov     r12d, 1
 * 0000000140A02737: mov     r14, rax
 * 0000000140A0273A: xor     r15d, r15d
 * 0000000140A0273D: jmp     short loc_140A02700
 * 0000000140A0273F: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A02744: mov     rax, [rsi+960h]
 * 0000000140A0274B: mov     rcx, [rax]
 * 0000000140A0274E: cmp     r14, rcx
 * 0000000140A02751: jz      short loc_140A027CF
 * 0000000140A02753: mov     eax, [rsi+994h]
 * 0000000140A02759: mov     ecx, 40h ; '@'
 * 0000000140A0275E: test    cl, al
 * 0000000140A02760: jnz     short loc_140A027CF
 * 0000000140A02762: mov     rax, [rsi+960h]
 * 0000000140A02769: mov     rdx, [rax]
 * 0000000140A0276C: mov     eax, [rsi+8F8h]
 * 0000000140A02772: test    eax, eax
 * 0000000140A02774: jnz     short loc_140A027CF
 * 0000000140A02776: mov     rax, [rsi+590h]
 * 0000000140A0277D: mov     rcx, r14
 * 0000000140A02780: xor     rcx, rdx
 * 0000000140A02783: mov     [rax+18h], rcx
 * 0000000140A02787: mov     eax, [rsi+8F8h]
 * 0000000140A0278D: test    eax, eax
 * 0000000140A0278F: jnz     short loc_140A027CF
 * 0000000140A02791: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0279B: xor     edx, edx
 * 0000000140A0279D: add     rax, rsi
 * 0000000140A027A0: mov     rcx, rsi
 * 0000000140A027A3: mov     [rsi+900h], rax
 * 0000000140A027AA: mov     [rsi+908h], r15
 * 0000000140A027B1: mov     qword ptr [rsi+910h], 102h
 * 0000000140A027BC: mov     [rsi+918h], r14
 * 0000000140A027C3: mov     [rsi+8F8h], r12d
 * 0000000140A027CA: call    $$b8
 * 0000000140A027CF: mov     r10d, r15d
 * 0000000140A027D2: mov     r12d, 2
 * 0000000140A027D8: lea     r15, [rbp+0BE0h+var_850]
 * 0000000140A027DF: xor     ebx, ebx
 * 0000000140A027E1: mov     r14d, 0FFFFFFFFh
 * 0000000140A027E7: mov     rax, [r15]
 * 0000000140A027EA: mov     r9d, ebx
 * 0000000140A027ED: mov     r11, [rax]
 * 0000000140A027F0: lea     r8d, [r10+rax]
 * 0000000140A027F4: mov     r13d, [rax+10h]
 * 0000000140A027F8: add     r8d, r11d
 * 0000000140A027FB: test    r13d, r13d
 * 0000000140A027FE: jz      short loc_140A0282C
 * 0000000140A02800: mov     r14, r11
 * 0000000140A02803: movsxd  rdx, dword ptr [r14]
 * 0000000140A02806: inc     r9d
 * 0000000140A02809: mov     rax, rdx
 * 0000000140A0280C: lea     r14, [r14+4]
 * 0000000140A02810: sar     rax, 4
 * 0000000140A02814: mov     ecx, [rax+r11]
 * 0000000140A02818: add     ecx, edx
 * 0000000140A0281A: xor     r8d, ecx
 * 0000000140A0281D: imul    r8d, r9d
 * 0000000140A02821: cmp     r9d, r13d
 * 0000000140A02824: jb      short loc_140A02803
 * 0000000140A02826: mov     r14d, 0FFFFFFFFh
 * 0000000140A0282C: lea     r10d, [r10+r8*2]
 * 0000000140A02830: sub     r15, 8
 * 0000000140A02834: add     r8d, r8d
 * 0000000140A02837: add     r12d, r14d
 * 0000000140A0283A: jnz     short loc_140A027E7
 * 0000000140A0283C: mov     rax, [rsi+598h]
 * 0000000140A02843: mov     rbx, [rbp+0BE0h+var_C60]
 * 0000000140A02847: mov     r9d, [rax]
 * 0000000140A0284A: cmp     r10d, r9d
 * 0000000140A0284D: jz      short loc_140A028CA
 * 0000000140A0284F: xor     r15d, r15d
 * 0000000140A02852: test    dword ptr [rsi+990h], 20000h
 * 0000000140A0285C: jz      short loc_140A028CD
 * 0000000140A0285E: mov     eax, [rsi+8F8h]
 * 0000000140A02864: test    eax, eax
 * 0000000140A02866: jnz     short loc_140A0287F
 * 0000000140A02868: mov     rdx, [rsi+590h]
 * 0000000140A0286F: mov     ecx, r8d
 * 0000000140A02872: xor     rcx, r9
 * 0000000140A02875: mov     [rdx+18h], rcx
 * 0000000140A02879: mov     eax, [rsi+8F8h]
 * 0000000140A0287F: mov     ecx, r8d
 * 0000000140A02882: test    eax, eax
 * 0000000140A02884: jnz     short loc_140A028CD
 * 0000000140A02886: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02890: xor     edx, edx
 * 0000000140A02892: add     rax, rsi
 * 0000000140A02895: mov     [rsi+900h], rax
 * 0000000140A0289C: mov     eax, 1
 * 0000000140A028A1: mov     [rsi+908h], r15
 * 0000000140A028A8: mov     qword ptr [rsi+910h], 107h
 * 0000000140A028B3: mov     [rsi+918h], rcx
 * 0000000140A028BA: mov     rcx, rsi
 * 0000000140A028BD: mov     [rsi+8F8h], eax
 * 0000000140A028C3: call    $$b8
 * 0000000140A028C8: jmp     short loc_140A028CD
 * 0000000140A028CA: xor     r15d, r15d
 * 0000000140A028CD: mov     eax, [rsi+958h]
 * 0000000140A028D3: cmp     eax, 7
 * 0000000140A028D6: jl      loc_140A02B48
 * 0000000140A028DC: jz      loc_140A03D3A
 * 0000000140A028E2: cmp     eax, 8
 * 0000000140A028E5: jz      loc_140A05D4D
 * 0000000140A028EB: cmp     eax, 9
 * 0000000140A028EE: jnz     loc_140A0624F
 * 0000000140A028F4: xor     r10d, r10d
 * 0000000140A028F7: mov     r15, [rbx+600h]
 * 0000000140A028FE: test    r15, r15
 * 0000000140A02901: jz      loc_140A0624C
 * 0000000140A02907: mov     r15, [r15]
 * 0000000140A0290A: test    r15, r15
 * 0000000140A0290D: jz      loc_140A0624C
 * 0000000140A02913: lock or [rsp+0CE0h+var_CE0], r10d
 * 0000000140A02918: mov     r12d, [r15+7E4h]
 * 0000000140A0291F: mov     r9, r15
 * 0000000140A02922: mov     r10d, [r15+814h]
 * 0000000140A02929: mov     rax, r15
 * 0000000140A0292C: mov     r14, [r15+818h]
 * 0000000140A02933: mov     dword ptr [rbp+0BE0h+arg_8], r12d
 * 0000000140A0293A: lea     rcx, [r15+r12]
 * 0000000140A0293E: cmp     r15, rcx
 * 0000000140A02941: jnb     short loc_140A02953
 * 0000000140A02943: mov     edx, 40h ; '@'
 * 0000000140A02948: prefetchnta byte ptr [rax]
 * 0000000140A0294B: add     rax, rdx
 * 0000000140A0294E: cmp     rax, rcx
 * 0000000140A02951: jb      short loc_140A02948
 * 0000000140A02953: mov     r11d, r12d
 * 0000000140A02956: mov     r8, r14
 * 0000000140A02959: shr     r11d, 7
 * 0000000140A0295D: mov     r13d, 1
 * 0000000140A02963: test    r11d, r11d
 * 0000000140A02966: jz      short loc_140A029D4
 * 0000000140A02968: mov     r12, 7010008004002001h
 * 0000000140A02972: mov     edx, 8
 * 0000000140A02977: mov     rax, [r9]
 * 0000000140A0297A: mov     ecx, r10d
 * 0000000140A0297D: xor     rax, r8
 * 0000000140A02980: mov     r8, [r9+8]
 * 0000000140A02984: rol     rax, cl
 * 0000000140A02987: add     r9, 10h
 * 0000000140A0298B: xor     r8, rax
 * 0000000140A0298E: rol     r8, cl
 * 0000000140A02991: sub     rdx, r13
 * 0000000140A02994: jnz     short loc_140A02977
 * 0000000140A02996: mov     rcx, r9
 * 0000000140A02999: sub     rcx, r15
 * 0000000140A0299C: xor     rcx, r14
 * 0000000140A0299F: mov     rax, rcx
 * 0000000140A029A2: rol     rax, 11h
 * 0000000140A029A6: xor     rcx, rax
 * 0000000140A029A9: mov     rax, r12
 * 0000000140A029AC: mul     rcx
 * 0000000140A029AF: mov     [rbp+0BE0h+var_4E0], rdx
 * 0000000140A029B6: xor     edx, eax
 * 0000000140A029B8: xor     r10d, edx
 * 0000000140A029BB: mov     eax, 0FFFFFFFFh
 * 0000000140A029C0: and     r10d, 3Fh
 * 0000000140A029C4: cmovz   r10d, r13d
 * 0000000140A029C8: add     r11d, eax
 * 0000000140A029CB: jnz     short loc_140A02972
 * 0000000140A029CD: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A029D4: mov     edx, r12d
 * 0000000140A029D7: and     edx, 7Fh
 * 0000000140A029DA: cmp     edx, 8
 * 0000000140A029DD: jb      short loc_140A029FB
 * 0000000140A029DF: mov     r11d, edx
 * 0000000140A029E2: shr     r11, 3
 * 0000000140A029E6: xor     r8, [r9]
 * 0000000140A029E9: mov     ecx, r10d
 * 0000000140A029EC: rol     r8, cl
 * 0000000140A029EF: add     r9, 8
 * 0000000140A029F3: add     edx, 0FFFFFFF8h
 * 0000000140A029F6: sub     r11, r13
 * 0000000140A029F9: jnz     short loc_140A029E6
 * 0000000140A029FB: xor     r11d, r11d
 * 0000000140A029FE: test    edx, edx
 * 0000000140A02A00: jz      short loc_140A02A20
 * 0000000140A02A02: mov     r11d, 0FFFFFFFFh
 * 0000000140A02A08: movzx   eax, byte ptr [r9]
 * 0000000140A02A0C: mov     ecx, r10d
 * 0000000140A02A0F: xor     r8, rax
 * 0000000140A02A12: add     r9, r13
 * 0000000140A02A15: rol     r8, cl
 * 0000000140A02A18: add     edx, r11d
 * 0000000140A02A1B: jnz     short loc_140A02A08
 * 0000000140A02A1D: xor     r11d, r11d
 * 0000000140A02A20: mov     rax, [rbx+608h]
 * 0000000140A02A27: cmp     r8, [rax]
 * 0000000140A02A2A: jz      loc_140A05F83
 * 0000000140A02A30: mov     rax, [rbx+590h]
 * 0000000140A02A37: mov     [rax], r15
 * 0000000140A02A3A: xor     r15d, r15d
 * 0000000140A02A3D: mov     [rax+10h], r12d
 * 0000000140A02A41: mov     rax, [rbx+608h]
 * 0000000140A02A48: mov     rcx, [rax]
 * 0000000140A02A4B: mov     eax, [rbx+8F8h]
 * 0000000140A02A51: test    eax, eax
 * 0000000140A02A53: jnz     loc_140A03D8D
 * 0000000140A02A59: mov     rax, [rbx+590h]
 * 0000000140A02A60: xor     rcx, r8
 * 0000000140A02A63: mov     [rax+18h], rcx
 * 0000000140A02A67: mov     eax, [rbx+8F8h]
 * 0000000140A02A6D: test    eax, eax
 * 0000000140A02A6F: jnz     loc_140A03D8D
 * 0000000140A02A75: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02A7F: lea     r12d, [r15+1]
 * 0000000140A02A83: add     rax, rbx
 * 0000000140A02A86: mov     [rbx+900h], rax
 * 0000000140A02A8D: mov     [rbx+908h], r15
 * 0000000140A02A94: mov     qword ptr [rbx+910h], 111h
 * 0000000140A02A9F: mov     [rbx+918h], r8
 * 0000000140A02AA6: xor     edx, edx
 * 0000000140A02AA8: mov     [rbx+8F8h], r12d
 * 0000000140A02AAF: mov     rcx, rbx
 * 0000000140A02AB2: call    $$b8
 * 0000000140A02AB7: mov     r13d, 0FFFFFFFFh
 * 0000000140A02ABD: mov     ecx, 8000h
 * 0000000140A02AC2: test    [rbx+990h], ecx
 * 0000000140A02AC8: jnz     short loc_140A02AD7
 * 0000000140A02ACA: cmp     [rbx+8F8h], r15d
 * 0000000140A02AD1: jnz     loc_140A0651C
 * 0000000140A02AD7: mov     r14, [rbx+980h]
 * 0000000140A02ADE: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A02AE5: mov     [rbx+980h], r15
 * 0000000140A02AEC: mov     rcx, r14
 * 0000000140A02AEF: mov     rax, [rbx+298h]
 * 0000000140A02AF6: call    KeGuardDispatchICall
 * 0000000140A02AFB: mov     eax, [rbx+990h]
 * 0000000140A02B01: test    r12b, al
 * 0000000140A02B04: jz      loc_140A062B9
 * 0000000140A02B0A: and     eax, 0FFFFFFFEh
 * 0000000140A02B0D: mov     rcx, r14
 * 0000000140A02B10: mov     [rbx+990h], eax
 * 0000000140A02B16: mov     rax, [rbx+280h]
 * 0000000140A02B1D: call    KeGuardDispatchICall
 * 0000000140A02B22: mov     r14, rax
 * 0000000140A02B25: test    rax, rax
 * 0000000140A02B28: jz      loc_140A062B2
 * 0000000140A02B2E: mov     rax, [rbx+2A0h]
 * 0000000140A02B35: mov     rcx, r14
 * 0000000140A02B38: call    KeGuardDispatchICall
 * 0000000140A02B3D: mov     [rbx+970h], eax
 * 0000000140A02B43: jmp     loc_140A062B9
 * 0000000140A02B48: mov     rdx, [rsi+578h]
 * 0000000140A02B4F: mov     rcx, [rsi+570h]
 * 0000000140A02B56: mov     [rbp+0BE0h+arg_8], rdx
 * 0000000140A02B5D: add     rdx, 20h ; ' '
 * 0000000140A02B61: mov     [rbp+0BE0h+var_C30], rdx
 * 0000000140A02B65: mov     edx, 2
 * 0000000140A02B6A: mov     [rbp+0BE0h+var_C40], rcx
 * 0000000140A02B6E: lea     r13, [rcx+20h]
 * 0000000140A02B72: mov     [rsp+0CE0h+var_C70], r13
 * 0000000140A02B77: cmp     eax, edx
 * 0000000140A02B79: jge     loc_140A02E1E
 * 0000000140A02B7F: mov     r12, [r13+0]
 * 0000000140A02B83: mov     r13d, [rsi+7E4h]
 * 0000000140A02B8A: mov     r15d, [rcx+30h]
 * 0000000140A02B8E: mov     r8d, [rsi+924h]
 * 0000000140A02B95: shl     r15d, 2
 * 0000000140A02B99: lea     eax, [r13+30h]
 * 0000000140A02B9D: cmp     eax, [rsi+0A1Ch]
 * 0000000140A02BA3: jbe     loc_140A02C85
 * 0000000140A02BA9: mov     edx, eax
 * 0000000140A02BAB: mov     rcx, rsi
 * 0000000140A02BAE: call    sub_140A0BB30
 * 0000000140A02BB3: xor     r9d, r9d
 * 0000000140A02BB6: mov     r14, rax
 * 0000000140A02BB9: test    rax, rax
 * 0000000140A02BBC: jz      loc_140A03D98
 * 0000000140A02BC2: mov     ecx, [rsi+990h]
 * 0000000140A02BC8: test    cl, 4
 * 0000000140A02BCB: jnz     loc_140A02C7B
 * 0000000140A02BD1: mov     eax, [rsi+7E4h]
 * 0000000140A02BD7: lea     r10d, [r9+1]
 * 0000000140A02BDB: mov     r8, [rsi+7C8h]
 * 0000000140A02BE2: and     ecx, 20000000h
 * 0000000140A02BE8: neg     ecx
 * 0000000140A02BEA: sbb     edx, edx
 * 0000000140A02BEC: and     edx, [rsi+924h]
 * 0000000140A02BF2: cmp     eax, 8
 * 0000000140A02BF5: jb      short loc_140A02C0C
 * 0000000140A02BF7: mov     ecx, eax
 * 0000000140A02BF9: shr     rcx, 3
 * 0000000140A02BFD: mov     [rsi], r9
 * 0000000140A02C00: add     eax, 0FFFFFFF8h
 * 0000000140A02C03: add     rsi, 8
 * 0000000140A02C07: sub     rcx, r10
 * 0000000140A02C0A: jnz     short loc_140A02BFD
 * 0000000140A02C0C: test    eax, eax
 * 0000000140A02C0E: jz      short loc_140A02C1F
 * 0000000140A02C10: mov     ecx, 0FFFFFFFFh
 * 0000000140A02C15: mov     [rsi], r9b
 * 0000000140A02C18: add     rsi, r10
 * 0000000140A02C1B: add     eax, ecx
 * 0000000140A02C1D: jnz     short loc_140A02C15
 * 0000000140A02C1F: mov     ebx, [r14+924h]
 * 0000000140A02C26: mov     [r14+924h], edx
 * 0000000140A02C2D: cmp     edx, 3
 * 0000000140A02C30: jz      short loc_140A02C65
 * 0000000140A02C32: test    dword ptr [r14+990h], 10000000h
 * 0000000140A02C3D: mov     ecx, r9d
 * 0000000140A02C40: cmovz   ecx, edx
 * 0000000140A02C43: test    ecx, ecx
 * 0000000140A02C45: jz      short loc_140A02C5C
 * 0000000140A02C47: mov     rax, [r14+228h]
 * 0000000140A02C4E: lea     rcx, [r8-8]
 * 0000000140A02C52: mov     rdx, [rcx]
 * 0000000140A02C55: call    KeGuardDispatchICall
 * 0000000140A02C5A: jmp     short loc_140A02C74
 * 0000000140A02C5C: mov     rax, [r14+100h]
 * 0000000140A02C63: jmp     short loc_140A02C6C
 * 0000000140A02C65: mov     rax, [r14+368h]
 * 0000000140A02C6C: mov     rcx, r8
 * 0000000140A02C6F: call    KeGuardDispatchICall
 * 0000000140A02C74: mov     [r14+924h], ebx
 * 0000000140A02C7B: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140A02C83: jmp     short loc_140A02C8E
 * 0000000140A02C85: mov     r14, rsi
 * 0000000140A02C88: mov     [rsi+7E4h], eax
 * 0000000140A02C8E: lea     rbx, [r14+r13]
 * 0000000140A02C92: mov     r8d, 1
 * 0000000140A02C98: add     [r14+80Ch], r8d
 * 0000000140A02C9F: mov     rax, rbx
 * 0000000140A02CA2: mov     [rbp+0BE0h+var_548], rbx
 * 0000000140A02CA9: xor     r13d, r13d
 * 0000000140A02CAC: lea     ecx, [r8+2Fh]
 * 0000000140A02CB0: lea     edx, [rcx-2Ah]
 * 0000000140A02CB3: mov     [rax], r13
 * 0000000140A02CB6: add     ecx, 0FFFFFFF8h
 * 0000000140A02CB9: add     rax, 8
 * 0000000140A02CBD: sub     rdx, r8
 * 0000000140A02CC0: jnz     short loc_140A02CB3
 * 0000000140A02CC2: test    ecx, ecx
 * 0000000140A02CC4: jz      short loc_140A02CD5
 * 0000000140A02CC6: mov     edx, 0FFFFFFFFh
 * 0000000140A02CCB: mov     [rax], r13b
 * 0000000140A02CCE: add     rax, r8
 * 0000000140A02CD1: add     ecx, edx
 * 0000000140A02CD3: jnz     short loc_140A02CCB
 * 0000000140A02CD5: mov     dword ptr [rbx], 0Bh
 * 0000000140A02CDB: mov     r9, r12
 * 0000000140A02CDE: mov     [rbx+8], r12
 * 0000000140A02CE2: mov     rax, r12
 * 0000000140A02CE5: mov     [rbx+10h], r15d
 * 0000000140A02CE9: add     [r14+828h], r15d
 * 0000000140A02CF0: mov     r10d, [r14+814h]
 * 0000000140A02CF7: mov     rsi, [r14+818h]
 * 0000000140A02CFE: mov     ecx, r15d
 * 0000000140A02D01: add     rcx, r12
 * 0000000140A02D04: cmp     r12, rcx
 * 0000000140A02D07: jnb     short loc_140A02D19
 * 0000000140A02D09: mov     edx, 40h ; '@'
 * 0000000140A02D0E: prefetchnta byte ptr [rax]
 * 0000000140A02D11: add     rax, rdx
 * 0000000140A02D14: cmp     rax, rcx
 * 0000000140A02D17: jb      short loc_140A02D0E
 * 0000000140A02D19: mov     r11d, r15d
 * 0000000140A02D1C: mov     r8, rsi
 * 0000000140A02D1F: shr     r11d, 7
 * 0000000140A02D23: mov     r13d, 1
 * 0000000140A02D29: test    r11d, r11d
 * 0000000140A02D2C: jz      short loc_140A02D9B
 * 0000000140A02D2E: mov     rdi, 7010008004002001h
 * 0000000140A02D38: mov     edx, 8
 * 0000000140A02D3D: mov     rax, [r9]
 * 0000000140A02D40: mov     ecx, r10d
 * 0000000140A02D43: xor     rax, r8
 * 0000000140A02D46: mov     r8, [r9+8]
 * 0000000140A02D4A: rol     rax, cl
 * 0000000140A02D4D: add     r9, 10h
 * 0000000140A02D51: xor     r8, rax
 * 0000000140A02D54: rol     r8, cl
 * 0000000140A02D57: sub     rdx, r13
 * 0000000140A02D5A: jnz     short loc_140A02D3D
 * 0000000140A02D5C: mov     rcx, r9
 * 0000000140A02D5F: sub     rcx, r12
 * 0000000140A02D62: xor     rcx, rsi
 * 0000000140A02D65: mov     rax, rcx
 * 0000000140A02D68: rol     rax, 11h
 * 0000000140A02D6C: xor     rcx, rax
 * 0000000140A02D6F: mov     rax, rdi
 * 0000000140A02D72: mul     rcx
 * 0000000140A02D75: xor     r10d, edx
 * 0000000140A02D78: mov     [rbp+0BE0h+var_540], rdx
 * 0000000140A02D7F: xor     r10d, eax
 * 0000000140A02D82: mov     eax, 0FFFFFFFFh
 * 0000000140A02D87: and     r10d, 3Fh
 * 0000000140A02D8B: cmovz   r10d, r13d
 * 0000000140A02D8F: add     r11d, eax
 * 0000000140A02D92: jnz     short loc_140A02D38
 * 0000000140A02D94: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A02D9B: mov     edx, r15d
 * 0000000140A02D9E: and     edx, 7Fh
 * 0000000140A02DA1: cmp     edx, 8
 * 0000000140A02DA4: jb      short loc_140A02DC2
 * 0000000140A02DA6: mov     r11d, edx
 * 0000000140A02DA9: shr     r11, 3
 * 0000000140A02DAD: xor     r8, [r9]
 * 0000000140A02DB0: mov     ecx, r10d
 * 0000000140A02DB3: rol     r8, cl
 * 0000000140A02DB6: add     r9, 8
 * 0000000140A02DBA: add     edx, 0FFFFFFF8h
 * 0000000140A02DBD: sub     r11, r13
 * 0000000140A02DC0: jnz     short loc_140A02DAD
 * 0000000140A02DC2: xor     r11d, r11d
 * 0000000140A02DC5: test    edx, edx
 * 0000000140A02DC7: jz      short loc_140A02DE7
 * 0000000140A02DC9: mov     r11d, 0FFFFFFFFh
 * 0000000140A02DCF: movzx   eax, byte ptr [r9]
 * 0000000140A02DD3: mov     ecx, r10d
 * 0000000140A02DD6: xor     r8, rax
 * 0000000140A02DD9: add     r9, r13
 * 0000000140A02DDC: rol     r8, cl
 * 0000000140A02DDF: add     edx, r11d
 * 0000000140A02DE2: jnz     short loc_140A02DCF
 * 0000000140A02DE4: xor     r11d, r11d
 * 0000000140A02DE7: mov     rax, r8
 * 0000000140A02DEA: jmp     short loc_140A02DEF
 * 0000000140A02DEC: xor     r8d, eax
 * 0000000140A02DEF: shr     rax, 1Fh
 * 0000000140A02DF3: test    rax, rax
 * 0000000140A02DF6: jnz     short loc_140A02DEC
 * 0000000140A02DF8: mov     r13, [rsp+0CE0h+var_C70]
 * 0000000140A02DFD: btr     r8d, 1Fh
 * 0000000140A02E02: mov     [rbx+14h], r8d
 * 0000000140A02E06: mov     eax, 2
 * 0000000140A02E0B: add     [r14+828h], r15d
 * 0000000140A02E12: mov     rbx, r14
 * 0000000140A02E15: mov     [r14+958h], eax
 * 0000000140A02E1C: jmp     short loc_140A02E21
 * 0000000140A02E1E: xor     r11d, r11d
 * 0000000140A02E21: cmp     dword ptr [rbx+958h], 3
 * 0000000140A02E28: jge     loc_140A03065
 * 0000000140A02E2E: mov     r14d, [rbx+7E4h]
 * 0000000140A02E35: mov     r15d, 20h ; ' '
 * 0000000140A02E3B: mov     r12d, [rbx+838h]
 * 0000000140A02E42: cmp     r12d, 7
 * 0000000140A02E46: mov     r8d, [rbx+924h]
 * 0000000140A02E4D: cmovnz  r15d, r11d
 * 0000000140A02E51: lea     eax, [r14+30h]
 * 0000000140A02E55: cmp     eax, [rbx+0A1Ch]
 * 0000000140A02E5B: jbe     loc_140A02F3B
 * 0000000140A02E61: mov     edx, eax
 * 0000000140A02E63: mov     rcx, rbx
 * 0000000140A02E66: call    sub_140A0BB30
 * 0000000140A02E6B: xor     r11d, r11d
 * 0000000140A02E6E: mov     rsi, rax
 * 0000000140A02E71: test    rax, rax
 * 0000000140A02E74: jz      loc_140A03D98
 * 0000000140A02E7A: mov     ecx, [rbx+990h]
 * 0000000140A02E80: test    cl, 4
 * 0000000140A02E83: jnz     loc_140A02F32
 * 0000000140A02E89: mov     eax, [rbx+7E4h]
 * 0000000140A02E8F: lea     r9d, [r11+1]
 * 0000000140A02E93: mov     r8, [rbx+7C8h]
 * 0000000140A02E9A: and     ecx, 20000000h
 * 0000000140A02EA0: neg     ecx
 * 0000000140A02EA2: sbb     edx, edx
 * 0000000140A02EA4: and     edx, [rbx+924h]
 * 0000000140A02EAA: cmp     eax, 8
 * 0000000140A02EAD: jb      short loc_140A02EC4
 * 0000000140A02EAF: mov     ecx, eax
 * 0000000140A02EB1: shr     rcx, 3
 * 0000000140A02EB5: mov     [rbx], r11
 * 0000000140A02EB8: add     eax, 0FFFFFFF8h
 * 0000000140A02EBB: add     rbx, 8
 * 0000000140A02EBF: sub     rcx, r9
 * 0000000140A02EC2: jnz     short loc_140A02EB5
 * 0000000140A02EC4: test    eax, eax
 * 0000000140A02EC6: jz      short loc_140A02ED7
 * 0000000140A02EC8: mov     ecx, 0FFFFFFFFh
 * 0000000140A02ECD: mov     [rbx], r11b
 * 0000000140A02ED0: add     rbx, r9
 * 0000000140A02ED3: add     eax, ecx
 * 0000000140A02ED5: jnz     short loc_140A02ECD
 * 0000000140A02ED7: mov     ebx, [rsi+924h]
 * 0000000140A02EDD: mov     [rsi+924h], edx
 * 0000000140A02EE3: cmp     edx, 3
 * 0000000140A02EE6: jz      short loc_140A02F1A
 * 0000000140A02EE8: test    dword ptr [rsi+990h], 10000000h
 * 0000000140A02EF2: mov     ecx, r11d
 * 0000000140A02EF5: cmovz   ecx, edx
 * 0000000140A02EF8: test    ecx, ecx
 * 0000000140A02EFA: jz      short loc_140A02F11
 * 0000000140A02EFC: mov     rax, [rsi+228h]
 * 0000000140A02F03: lea     rcx, [r8-8]
 * 0000000140A02F07: mov     rdx, [rcx]
 * 0000000140A02F0A: call    KeGuardDispatchICall
 * 0000000140A02F0F: jmp     short loc_140A02F29
 * 0000000140A02F11: mov     rax, [rsi+100h]
 * 0000000140A02F18: jmp     short loc_140A02F21
 * 0000000140A02F1A: mov     rax, [rsi+368h]
 * 0000000140A02F21: mov     rcx, r8
 * 0000000140A02F24: call    KeGuardDispatchICall
 * 0000000140A02F29: mov     [rsi+924h], ebx
 * 0000000140A02F2F: xor     r11d, r11d
 * 0000000140A02F32: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140A02F39: jmp     short loc_140A02F44
 * 0000000140A02F3B: mov     rsi, rbx
 * 0000000140A02F3E: mov     [rbx+7E4h], eax
 * 0000000140A02F44: mov     r8d, 1
 * 0000000140A02F4A: lea     rbx, [rsi+r14]
 * 0000000140A02F4E: add     [rsi+80Ch], r8d
 * 0000000140A02F55: mov     rax, rbx
 * 0000000140A02F58: mov     [rbp+0BE0h+var_538], rbx
 * 0000000140A02F5F: lea     ecx, [r8+2Fh]
 * 0000000140A02F63: lea     edx, [rcx-2Ah]
 * 0000000140A02F66: mov     [rax], r11
 * 0000000140A02F69: add     ecx, 0FFFFFFF8h
 * 0000000140A02F6C: add     rax, 8
 * 0000000140A02F70: sub     rdx, r8
 * 0000000140A02F73: jnz     short loc_140A02F66
 * 0000000140A02F75: test    ecx, ecx
 * 0000000140A02F77: jz      short loc_140A02F88
 * 0000000140A02F79: mov     edx, 0FFFFFFFFh
 * 0000000140A02F7E: mov     [rax], r11b
 * 0000000140A02F81: add     rax, r8
 * 0000000140A02F84: add     ecx, edx
 * 0000000140A02F86: jnz     short loc_140A02F7E
 * 0000000140A02F88: mov     [rbx], r15d
 * 0000000140A02F8B: mov     r14d, 20h ; ' '
 * 0000000140A02F91: mov     [rbx+8], r13
 * 0000000140A02F95: cmp     r12d, 7
 * 0000000140A02F99: jnz     short loc_140A02FAD
 * 0000000140A02F9B: lea     r9, [rbx+18h]
 * 0000000140A02F9F: mov     r8d, r14d
 * 0000000140A02FA2: mov     rdx, r13
 * 0000000140A02FA5: mov     rcx, rsi
 * 0000000140A02FA8: call    sub_1403E6E8C
 * 0000000140A02FAD: mov     rcx, [rbp+0BE0h+var_C40]
 * 0000000140A02FB1: mov     r8, r13
 * 0000000140A02FB4: mov     [rbx+10h], r14d
 * 0000000140A02FB8: add     rcx, 40h ; '@'
 * 0000000140A02FBC: add     [rsi+828h], r14d
 * 0000000140A02FC3: mov     rax, r13
 * 0000000140A02FC6: mov     r11d, [rsi+814h]
 * 0000000140A02FCD: mov     rdx, [rsi+818h]
 * 0000000140A02FD4: cmp     r13, rcx
 * 0000000140A02FD7: jnb     short loc_140A02FEA
 * 0000000140A02FD9: mov     r9d, 40h ; '@'
 * 0000000140A02FDF: prefetchnta byte ptr [rax]
 * 0000000140A02FE2: add     rax, r9
 * 0000000140A02FE5: cmp     rax, rcx
 * 0000000140A02FE8: jb      short loc_140A02FDF
 * 0000000140A02FEA: mov     r10d, 4
 * 0000000140A02FF0: mov     r9d, r14d
 * 0000000140A02FF3: lea     r15d, [r10-3]
 * 0000000140A02FF7: xor     rdx, [r8]
 * 0000000140A02FFA: mov     ecx, r11d
 * 0000000140A02FFD: rol     rdx, cl
 * 0000000140A03000: add     r8, 8
 * 0000000140A03004: add     r9d, 0FFFFFFF8h
 * 0000000140A03008: sub     r10, r15
 * 0000000140A0300B: jnz     short loc_140A02FF7
 * 0000000140A0300D: test    r9d, r9d
 * 0000000140A03010: jz      short loc_140A03033
 * 0000000140A03012: mov     edi, 0FFFFFFFFh
 * 0000000140A03017: movzx   eax, byte ptr [r8]
 * 0000000140A0301B: mov     ecx, r11d
 * 0000000140A0301E: xor     rdx, rax
 * 0000000140A03021: add     r8, r15
 * 0000000140A03024: rol     rdx, cl
 * 0000000140A03027: add     r9d, edi
 * 0000000140A0302A: jnz     short loc_140A03017
 * 0000000140A0302C: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A03033: mov     rax, rdx
 * 0000000140A03036: shr     rax, 1Fh
 * 0000000140A0303A: xor     r11d, r11d
 * 0000000140A0303D: jmp     short loc_140A03045
 * 0000000140A0303F: xor     edx, eax
 * 0000000140A03041: shr     rax, 1Fh
 * 0000000140A03045: test    rax, rax
 * 0000000140A03048: jnz     short loc_140A0303F
 * 0000000140A0304A: btr     edx, 1Fh
 * 0000000140A0304E: mov     [rbx+14h], edx
 * 0000000140A03051: mov     rbx, rsi
 * 0000000140A03054: add     [rsi+828h], r14d
 * 0000000140A0305B: mov     dword ptr [rsi+958h], 3
 * 0000000140A03065: cmp     dword ptr [rbx+958h], 4
 * 0000000140A0306C: mov     r13, [rbp+0BE0h+var_C30]
 * 0000000140A03070: jge     loc_140A03318
 * 0000000140A03076: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A0307D: mov     r14d, [rbx+7E4h]
 * 0000000140A03084: mov     r12, [r13+0]
 * 0000000140A03088: mov     r8d, [rbx+924h]
 * 0000000140A0308F: mov     r15d, [rax+30h]
 * 0000000140A03093: shl     r15d, 2
 * 0000000140A03097: lea     eax, [r14+30h]
 * 0000000140A0309B: cmp     eax, [rbx+0A1Ch]
 * 0000000140A030A1: jbe     loc_140A03181
 * 0000000140A030A7: mov     edx, eax
 * 0000000140A030A9: mov     rcx, rbx
 * 0000000140A030AC: call    sub_140A0BB30
 * 0000000140A030B1: xor     r11d, r11d
 * 0000000140A030B4: mov     rsi, rax
 * 0000000140A030B7: test    rax, rax
 * 0000000140A030BA: jz      loc_140A03D98
 * 0000000140A030C0: mov     ecx, [rbx+990h]
 * 0000000140A030C6: test    cl, 4
 * 0000000140A030C9: jnz     loc_140A03178
 * 0000000140A030CF: mov     eax, [rbx+7E4h]
 * 0000000140A030D5: lea     r9d, [r11+1]
 * 0000000140A030D9: mov     r8, [rbx+7C8h]
 * 0000000140A030E0: and     ecx, 20000000h
 * 0000000140A030E6: neg     ecx
 * 0000000140A030E8: sbb     edx, edx
 * 0000000140A030EA: and     edx, [rbx+924h]
 * 0000000140A030F0: cmp     eax, 8
 * 0000000140A030F3: jb      short loc_140A0310A
 * 0000000140A030F5: mov     ecx, eax
 * 0000000140A030F7: shr     rcx, 3
 * 0000000140A030FB: mov     [rbx], r11
 * 0000000140A030FE: add     eax, 0FFFFFFF8h
 * 0000000140A03101: add     rbx, 8
 * 0000000140A03105: sub     rcx, r9
 * 0000000140A03108: jnz     short loc_140A030FB
 * 0000000140A0310A: test    eax, eax
 * 0000000140A0310C: jz      short loc_140A0311D
 * 0000000140A0310E: mov     ecx, 0FFFFFFFFh
 * 0000000140A03113: mov     [rbx], r11b
 * 0000000140A03116: add     rbx, r9
 * 0000000140A03119: add     eax, ecx
 * 0000000140A0311B: jnz     short loc_140A03113
 * 0000000140A0311D: mov     ebx, [rsi+924h]
 * 0000000140A03123: mov     [rsi+924h], edx
 * 0000000140A03129: cmp     edx, 3
 * 0000000140A0312C: jz      short loc_140A03160
 * 0000000140A0312E: test    dword ptr [rsi+990h], 10000000h
 * 0000000140A03138: mov     ecx, r11d
 * 0000000140A0313B: cmovz   ecx, edx
 * 0000000140A0313E: test    ecx, ecx
 * 0000000140A03140: jz      short loc_140A03157
 * 0000000140A03142: mov     rax, [rsi+228h]
 * 0000000140A03149: lea     rcx, [r8-8]
 * 0000000140A0314D: mov     rdx, [rcx]
 * 0000000140A03150: call    KeGuardDispatchICall
 * 0000000140A03155: jmp     short loc_140A0316F
 * 0000000140A03157: mov     rax, [rsi+100h]
 * 0000000140A0315E: jmp     short loc_140A03167
 * 0000000140A03160: mov     rax, [rsi+368h]
 * 0000000140A03167: mov     rcx, r8
 * 0000000140A0316A: call    KeGuardDispatchICall
 * 0000000140A0316F: mov     [rsi+924h], ebx
 * 0000000140A03175: xor     r11d, r11d
 * 0000000140A03178: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140A0317F: jmp     short loc_140A0318A
 * 0000000140A03181: mov     rsi, rbx
 * 0000000140A03184: mov     [rbx+7E4h], eax
 * 0000000140A0318A: mov     r8d, 1
 * 0000000140A03190: lea     rbx, [rsi+r14]
 * 0000000140A03194: add     [rsi+80Ch], r8d
 * 0000000140A0319B: mov     rax, rbx
 * 0000000140A0319E: mov     [rbp+0BE0h+var_530], rbx
 * 0000000140A031A5: lea     ecx, [r8+2Fh]
 * 0000000140A031A9: lea     edx, [rcx-2Ah]
 * 0000000140A031AC: mov     [rax], r11
 * 0000000140A031AF: add     ecx, 0FFFFFFF8h
 * 0000000140A031B2: add     rax, 8
 * 0000000140A031B6: sub     rdx, r8
 * 0000000140A031B9: jnz     short loc_140A031AC
 * 0000000140A031BB: test    ecx, ecx
 * 0000000140A031BD: jz      short loc_140A031CE
 * 0000000140A031BF: mov     edx, 0FFFFFFFFh
 * 0000000140A031C4: mov     [rax], r11b
 * 0000000140A031C7: add     rax, r8
 * 0000000140A031CA: add     ecx, edx
 * 0000000140A031CC: jnz     short loc_140A031C4
 * 0000000140A031CE: mov     dword ptr [rbx], 0Bh
 * 0000000140A031D4: mov     r9, r12
 * 0000000140A031D7: mov     [rbx+8], r12
 * 0000000140A031DB: mov     rax, r12
 * 0000000140A031DE: mov     [rbx+10h], r15d
 * 0000000140A031E2: add     [rsi+828h], r15d
 * 0000000140A031E9: mov     r10d, [rsi+814h]
 * 0000000140A031F0: mov     r14, [rsi+818h]
 * 0000000140A031F7: mov     ecx, r15d
 * 0000000140A031FA: add     rcx, r12
 * 0000000140A031FD: cmp     r12, rcx
 * 0000000140A03200: jnb     short loc_140A03212
 * 0000000140A03202: mov     edx, 40h ; '@'
 * 0000000140A03207: prefetchnta byte ptr [rax]
 * 0000000140A0320A: add     rax, rdx
 * 0000000140A0320D: cmp     rax, rcx
 * 0000000140A03210: jb      short loc_140A03207
 * 0000000140A03212: mov     r11d, r15d
 * 0000000140A03215: mov     r8, r14
 * 0000000140A03218: shr     r11d, 7
 * 0000000140A0321C: test    r11d, r11d
 * 0000000140A0321F: jz      short loc_140A03298
 * 0000000140A03221: mov     rdi, 7010008004002001h
 * 0000000140A0322B: mov     edx, 8
 * 0000000140A03230: lea     r13d, [rdx-7]
 * 0000000140A03234: mov     rax, [r9]
 * 0000000140A03237: mov     ecx, r10d
 * 0000000140A0323A: xor     rax, r8
 * 0000000140A0323D: mov     r8, [r9+8]
 * 0000000140A03241: rol     rax, cl
 * 0000000140A03244: add     r9, 10h
 * 0000000140A03248: xor     r8, rax
 * 0000000140A0324B: rol     r8, cl
 * 0000000140A0324E: sub     rdx, r13
 * 0000000140A03251: jnz     short loc_140A03234
 * 0000000140A03253: mov     rcx, r9
 * 0000000140A03256: sub     rcx, r12
 * 0000000140A03259: xor     rcx, r14
 * 0000000140A0325C: mov     rax, rcx
 * 0000000140A0325F: rol     rax, 11h
 * 0000000140A03263: xor     rcx, rax
 * 0000000140A03266: mov     rax, rdi
 * 0000000140A03269: mul     rcx
 * 0000000140A0326C: mov     [rbp+0BE0h+var_528], rdx
 * 0000000140A03273: xor     edx, eax
 * 0000000140A03275: xor     r10d, edx
 * 0000000140A03278: mov     rax, r13
 * 0000000140A0327B: and     r10d, 3Fh
 * 0000000140A0327F: cmovz   r10d, eax
 * 0000000140A03283: mov     eax, 0FFFFFFFFh
 * 0000000140A03288: add     r11d, eax
 * 0000000140A0328B: jnz     short loc_140A0322B
 * 0000000140A0328D: mov     r13, [rbp+0BE0h+var_C30]
 * 0000000140A03291: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A03298: mov     edx, r15d
 * 0000000140A0329B: mov     r14d, 1
 * 0000000140A032A1: and     edx, 7Fh
 * 0000000140A032A4: cmp     edx, 8
 * 0000000140A032A7: jb      short loc_140A032C5
 * 0000000140A032A9: mov     r11d, edx
 * 0000000140A032AC: shr     r11, 3
 * 0000000140A032B0: xor     r8, [r9]
 * 0000000140A032B3: mov     ecx, r10d
 * 0000000140A032B6: rol     r8, cl
 * 0000000140A032B9: add     r9, 8
 * 0000000140A032BD: add     edx, 0FFFFFFF8h
 * 0000000140A032C0: sub     r11, r14
 * 0000000140A032C3: jnz     short loc_140A032B0
 * 0000000140A032C5: xor     r11d, r11d
 * 0000000140A032C8: test    edx, edx
 * 0000000140A032CA: jz      short loc_140A032EA
 * 0000000140A032CC: mov     r11d, 0FFFFFFFFh
 * 0000000140A032D2: movzx   eax, byte ptr [r9]
 * 0000000140A032D6: mov     ecx, r10d
 * 0000000140A032D9: xor     r8, rax
 * 0000000140A032DC: add     r9, r14
 * 0000000140A032DF: rol     r8, cl
 * 0000000140A032E2: add     edx, r11d
 * 0000000140A032E5: jnz     short loc_140A032D2
 * 0000000140A032E7: xor     r11d, r11d
 * 0000000140A032EA: mov     rax, r8
 * 0000000140A032ED: jmp     short loc_140A032F2
 * 0000000140A032EF: xor     r8d, eax
 * 0000000140A032F2: shr     rax, 1Fh
 * 0000000140A032F6: test    rax, rax
 * 0000000140A032F9: jnz     short loc_140A032EF
 * 0000000140A032FB: btr     r8d, 1Fh
 * 0000000140A03300: mov     [rbx+14h], r8d
 * 0000000140A03304: mov     rbx, rsi
 * 0000000140A03307: add     [rsi+828h], r15d
 * 0000000140A0330E: mov     dword ptr [rsi+958h], 4
 * 0000000140A03318: cmp     dword ptr [rbx+958h], 5
 * 0000000140A0331F: jge     loc_140A0355A
 * 0000000140A03325: mov     r14d, [rbx+7E4h]
 * 0000000140A0332C: mov     r15d, 20h ; ' '
 * 0000000140A03332: mov     r12d, [rbx+838h]
 * 0000000140A03339: cmp     r12d, 7
 * 0000000140A0333D: mov     r8d, [rbx+924h]
 * 0000000140A03344: cmovnz  r15d, r11d
 * 0000000140A03348: lea     eax, [r14+30h]
 * 0000000140A0334C: cmp     eax, [rbx+0A1Ch]
 * 0000000140A03352: jbe     loc_140A03432
 * 0000000140A03358: mov     edx, eax
 * 0000000140A0335A: mov     rcx, rbx
 * 0000000140A0335D: call    sub_140A0BB30
 * 0000000140A03362: xor     r11d, r11d
 * 0000000140A03365: mov     rsi, rax
 * 0000000140A03368: test    rax, rax
 * 0000000140A0336B: jz      loc_140A03D98
 * 0000000140A03371: mov     ecx, [rbx+990h]
 * 0000000140A03377: test    cl, 4
 * 0000000140A0337A: jnz     loc_140A03429
 * 0000000140A03380: mov     eax, [rbx+7E4h]
 * 0000000140A03386: lea     r9d, [r11+1]
 * 0000000140A0338A: mov     r8, [rbx+7C8h]
 * 0000000140A03391: and     ecx, 20000000h
 * 0000000140A03397: neg     ecx
 * 0000000140A03399: sbb     edx, edx
 * 0000000140A0339B: and     edx, [rbx+924h]
 * 0000000140A033A1: cmp     eax, 8
 * 0000000140A033A4: jb      short loc_140A033BB
 * 0000000140A033A6: mov     ecx, eax
 * 0000000140A033A8: shr     rcx, 3
 * 0000000140A033AC: mov     [rbx], r11
 * 0000000140A033AF: add     eax, 0FFFFFFF8h
 * 0000000140A033B2: add     rbx, 8
 * 0000000140A033B6: sub     rcx, r9
 * 0000000140A033B9: jnz     short loc_140A033AC
 * 0000000140A033BB: test    eax, eax
 * 0000000140A033BD: jz      short loc_140A033CE
 * 0000000140A033BF: mov     ecx, 0FFFFFFFFh
 * 0000000140A033C4: mov     [rbx], r11b
 * 0000000140A033C7: add     rbx, r9
 * 0000000140A033CA: add     eax, ecx
 * 0000000140A033CC: jnz     short loc_140A033C4
 * 0000000140A033CE: mov     ebx, [rsi+924h]
 * 0000000140A033D4: mov     [rsi+924h], edx
 * 0000000140A033DA: cmp     edx, 3
 * 0000000140A033DD: jz      short loc_140A03411
 * 0000000140A033DF: test    dword ptr [rsi+990h], 10000000h
 * 0000000140A033E9: mov     ecx, r11d
 * 0000000140A033EC: cmovz   ecx, edx
 * 0000000140A033EF: test    ecx, ecx
 * 0000000140A033F1: jz      short loc_140A03408
 * 0000000140A033F3: mov     rax, [rsi+228h]
 * 0000000140A033FA: lea     rcx, [r8-8]
 * 0000000140A033FE: mov     rdx, [rcx]
 * 0000000140A03401: call    KeGuardDispatchICall
 * 0000000140A03406: jmp     short loc_140A03420
 * 0000000140A03408: mov     rax, [rsi+100h]
 * 0000000140A0340F: jmp     short loc_140A03418
 * 0000000140A03411: mov     rax, [rsi+368h]
 * 0000000140A03418: mov     rcx, r8
 * 0000000140A0341B: call    KeGuardDispatchICall
 * 0000000140A03420: mov     [rsi+924h], ebx
 * 0000000140A03426: xor     r11d, r11d
 * 0000000140A03429: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140A03430: jmp     short loc_140A0343B
 * 0000000140A03432: mov     rsi, rbx
 * 0000000140A03435: mov     [rbx+7E4h], eax
 * 0000000140A0343B: mov     r8d, 1
 * 0000000140A03441: lea     rbx, [rsi+r14]
 * 0000000140A03445: add     [rsi+80Ch], r8d
 * 0000000140A0344C: mov     rax, rbx
 * 0000000140A0344F: mov     [rbp+0BE0h+var_520], rbx
 * 0000000140A03456: lea     ecx, [r8+2Fh]
 * 0000000140A0345A: lea     edx, [rcx-2Ah]
 * 0000000140A0345D: mov     [rax], r11
 * 0000000140A03460: add     ecx, 0FFFFFFF8h
 * 0000000140A03463: add     rax, 8
 * 0000000140A03467: sub     rdx, r8
 * 0000000140A0346A: jnz     short loc_140A0345D
 * 0000000140A0346C: test    ecx, ecx
 * 0000000140A0346E: jz      short loc_140A0347F
 * 0000000140A03470: mov     edx, 0FFFFFFFFh
 * 0000000140A03475: mov     [rax], r11b
 * 0000000140A03478: add     rax, r8
 * 0000000140A0347B: add     ecx, edx
 * 0000000140A0347D: jnz     short loc_140A03475
 * 0000000140A0347F: mov     [rbx], r15d
 * 0000000140A03482: mov     r14d, 20h ; ' '
 * 0000000140A03488: mov     [rbx+8], r13
 * 0000000140A0348C: cmp     r12d, 7
 * 0000000140A03490: jnz     short loc_140A034A4
 * 0000000140A03492: lea     r9, [rbx+18h]
 * 0000000140A03496: mov     r8d, r14d
 * 0000000140A03499: mov     rdx, r13
 * 0000000140A0349C: mov     rcx, rsi
 * 0000000140A0349F: call    sub_1403E6E8C
 * 0000000140A034A4: mov     rcx, [rbp+0BE0h+arg_8]
 * 0000000140A034AB: mov     r8, r13
 * 0000000140A034AE: mov     [rbx+10h], r14d
 * 0000000140A034B2: add     rcx, 40h ; '@'
 * 0000000140A034B6: add     [rsi+828h], r14d
 * 0000000140A034BD: mov     rax, r13
 * 0000000140A034C0: mov     r11d, [rsi+814h]
 * 0000000140A034C7: mov     rdx, [rsi+818h]
 * 0000000140A034CE: cmp     r13, rcx
 * 0000000140A034D1: jnb     short loc_140A034E4
 * 0000000140A034D3: mov     r9d, 40h ; '@'
 * 0000000140A034D9: prefetchnta byte ptr [rax]
 * 0000000140A034DC: add     rax, r9
 * 0000000140A034DF: cmp     rax, rcx
 * 0000000140A034E2: jb      short loc_140A034D9
 * 0000000140A034E4: mov     r10d, 4
 * 0000000140A034EA: mov     r9d, r14d
 * 0000000140A034ED: lea     r12d, [r10-3]
 * 0000000140A034F1: xor     rdx, [r8]
 * 0000000140A034F4: mov     ecx, r11d
 * 0000000140A034F7: rol     rdx, cl
 * 0000000140A034FA: add     r8, 8
 * 0000000140A034FE: add     r9d, 0FFFFFFF8h
 * 0000000140A03502: sub     r10, r12
 * 0000000140A03505: jnz     short loc_140A034F1
 * 0000000140A03507: xor     r15d, r15d
 * 0000000140A0350A: test    r9d, r9d
 * 0000000140A0350D: jz      short loc_140A0352D
 * 0000000140A0350F: mov     r15d, 0FFFFFFFFh
 * 0000000140A03515: movzx   eax, byte ptr [r8]
 * 0000000140A03519: mov     ecx, r11d
 * 0000000140A0351C: xor     rdx, rax
 * 0000000140A0351F: add     r8, r12
 * 0000000140A03522: rol     rdx, cl
 * 0000000140A03525: add     r9d, r15d
 * 0000000140A03528: jnz     short loc_140A03515
 * 0000000140A0352A: xor     r15d, r15d
 * 0000000140A0352D: mov     rax, rdx
 * 0000000140A03530: jmp     short loc_140A03534
 * 0000000140A03532: xor     edx, eax
 * 0000000140A03534: shr     rax, 1Fh
 * 0000000140A03538: test    rax, rax
 * 0000000140A0353B: jnz     short loc_140A03532
 * 0000000140A0353D: btr     edx, 1Fh
 * 0000000140A03541: mov     [rbx+14h], edx
 * 0000000140A03544: mov     rbx, rsi
 * 0000000140A03547: add     [rsi+828h], r14d
 * 0000000140A0354E: mov     dword ptr [rsi+958h], 5
 * 0000000140A03558: jmp     short loc_140A0355D
 * 0000000140A0355A: xor     r15d, r15d
 * 0000000140A0355D: mov     eax, [rbx+958h]
 * 0000000140A03563: mov     r12d, 6
 * 0000000140A03569: mov     rsi, rbx
 * 0000000140A0356C: mov     r14, rbx
 * 0000000140A0356F: cmp     eax, r12d
 * 0000000140A03572: jge     loc_140A0394C
 * 0000000140A03578: test    dword ptr [rbx+990h], 40000000h
 * 0000000140A03582: mov     r13d, r15d
 * 0000000140A03585: mov     r15, [rbp+0BE0h+var_C40]
 * 0000000140A03589: mov     rax, [r15+20h]
 * 0000000140A0358D: mov     [rbp+0BE0h+var_BD8], rax
 * 0000000140A03591: jnz     loc_140A03931
 * 0000000140A03597: xor     eax, eax
 * 0000000140A03599: mov     ebx, eax
 * 0000000140A0359B: cmp     [r15+30h], eax
 * 0000000140A0359F: jbe     loc_140A03931
 * 0000000140A035A5: mov     rdi, [rbp+0BE0h+var_BD8]
 * 0000000140A035A9: mov     eax, ebx
 * 0000000140A035AB: lea     rdx, [rbp+0BE0h+var_898]
 * 0000000140A035B2: xor     r8d, r8d
 * 0000000140A035B5: movsxd  rcx, dword ptr [rdi+rax*4]
 * 0000000140A035B9: mov     rax, [rsi+260h]
 * 0000000140A035C0: sar     rcx, 4
 * 0000000140A035C4: add     rcx, rdi
 * 0000000140A035C7: call    KeGuardDispatchICall
 * 0000000140A035CC: mov     r9d, 1
 * 0000000140A035D2: test    rax, rax
 * 0000000140A035D5: jnz     short loc_140A035DA
 * 0000000140A035D7: add     r13d, r9d
 * 0000000140A035DA: add     ebx, r9d
 * 0000000140A035DD: cmp     ebx, [r15+30h]
 * 0000000140A035E1: jb      short loc_140A035A9
 * 0000000140A035E3: xor     r15d, r15d
 * 0000000140A035E6: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A035ED: test    r13d, r13d
 * 0000000140A035F0: jz      loc_140A03934
 * 0000000140A035F6: mov     r14d, [rsi+7E4h]
 * 0000000140A035FD: mov     ecx, r13d
 * 0000000140A03600: mov     r8d, [rsi+924h]
 * 0000000140A03607: shl     ecx, 4
 * 0000000140A0360A: add     ecx, 30h ; '0'
 * 0000000140A0360D: add     ecx, r14d
 * 0000000140A03610: cmp     ecx, [rsi+0A1Ch]
 * 0000000140A03616: jbe     loc_140A03703
 * 0000000140A0361C: mov     edx, ecx
 * 0000000140A0361E: mov     rcx, rsi
 * 0000000140A03621: call    sub_140A0BB30
 * 0000000140A03626: mov     rbx, rax
 * 0000000140A03629: test    rax, rax
 * 0000000140A0362C: jz      loc_140A036F6
 * 0000000140A03632: mov     ecx, [rsi+990h]
 * 0000000140A03638: test    cl, 4
 * 0000000140A0363B: jnz     loc_140A036E7
 * 0000000140A03641: mov     eax, [rsi+7E4h]
 * 0000000140A03647: lea     r9d, [r15+1]
 * 0000000140A0364B: mov     r8, [rsi+7C8h]
 * 0000000140A03652: and     ecx, 20000000h
 * 0000000140A03658: neg     ecx
 * 0000000140A0365A: sbb     edx, edx
 * 0000000140A0365C: and     edx, [rsi+924h]
 * 0000000140A03662: cmp     eax, 8
 * 0000000140A03665: jb      short loc_140A0367C
 * 0000000140A03667: mov     ecx, eax
 * 0000000140A03669: shr     rcx, 3
 * 0000000140A0366D: mov     [rsi], r15
 * 0000000140A03670: add     eax, 0FFFFFFF8h
 * 0000000140A03673: add     rsi, 8
 * 0000000140A03677: sub     rcx, r9
 * 0000000140A0367A: jnz     short loc_140A0366D
 * 0000000140A0367C: test    eax, eax
 * 0000000140A0367E: jz      short loc_140A0368F
 * 0000000140A03680: mov     ecx, 0FFFFFFFFh
 * 0000000140A03685: mov     [rsi], r15b
 * 0000000140A03688: add     rsi, r9
 * 0000000140A0368B: add     eax, ecx
 * 0000000140A0368D: jnz     short loc_140A03685
 * 0000000140A0368F: mov     esi, [rbx+924h]
 * 0000000140A03695: mov     [rbx+924h], edx
 * 0000000140A0369B: cmp     edx, 3
 * 0000000140A0369E: jz      short loc_140A036D2
 * 0000000140A036A0: test    dword ptr [rbx+990h], 10000000h
 * 0000000140A036AA: mov     ecx, r15d
 * 0000000140A036AD: cmovz   ecx, edx
 * 0000000140A036B0: test    ecx, ecx
 * 0000000140A036B2: jz      short loc_140A036C9
 * 0000000140A036B4: mov     rax, [rbx+228h]
 * 0000000140A036BB: lea     rcx, [r8-8]
 * 0000000140A036BF: mov     rdx, [rcx]
 * 0000000140A036C2: call    KeGuardDispatchICall
 * 0000000140A036C7: jmp     short loc_140A036E1
 * 0000000140A036C9: mov     rax, [rbx+100h]
 * 0000000140A036D0: jmp     short loc_140A036D9
 * 0000000140A036D2: mov     rax, [rbx+368h]
 * 0000000140A036D9: mov     rcx, r8
 * 0000000140A036DC: call    KeGuardDispatchICall
 * 0000000140A036E1: mov     [rbx+924h], esi
 * 0000000140A036E7: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140A036EE: mov     r9d, 1
 * 0000000140A036F4: jmp     short loc_140A0370C
 * 0000000140A036F6: mov     eax, 0C000022Dh
 * 0000000140A036FB: mov     r14, rsi
 * 0000000140A036FE: jmp     loc_140A03937
 * 0000000140A03703: mov     rbx, rsi
 * 0000000140A03706: mov     [rsi+7E4h], ecx
 * 0000000140A0370C: add     [rbx+80Ch], r9d
 * 0000000140A03713: lea     rcx, [rbx+r14]
 * 0000000140A03717: mov     [rbp+0BE0h+var_838], rcx
 * 0000000140A0371E: mov     rax, rcx
 * 0000000140A03721: mov     edx, 30h ; '0'
 * 0000000140A03726: mov     r8, r12
 * 0000000140A03729: mov     [rax], r15
 * 0000000140A0372C: add     edx, 0FFFFFFF8h
 * 0000000140A0372F: add     rax, 8
 * 0000000140A03733: sub     r8, r9
 * 0000000140A03736: jnz     short loc_140A03729
 * 0000000140A03738: test    edx, edx
 * 0000000140A0373A: jz      short loc_140A0374D
 * 0000000140A0373C: mov     r8d, 0FFFFFFFFh
 * 0000000140A03742: mov     [rax], r15b
 * 0000000140A03745: add     rax, r9
 * 0000000140A03748: add     edx, r8d
 * 0000000140A0374B: jnz     short loc_140A03742
 * 0000000140A0374D: mov     dword ptr [rcx], 0Ah
 * 0000000140A03753: mov     [rcx+8], r15
 * 0000000140A03757: mov     [rcx+10h], r15d
 * 0000000140A0375B: mov     rdx, [rbx+818h]
 * 0000000140A03762: mov     rax, rdx
 * 0000000140A03765: jmp     short loc_140A03769
 * 0000000140A03767: xor     edx, eax
 * 0000000140A03769: shr     rax, 1Fh
 * 0000000140A0376D: test    rax, rax
 * 0000000140A03770: jnz     short loc_140A03767
 * 0000000140A03772: btr     edx, 1Fh
 * 0000000140A03776: mov     r14, rbx
 * 0000000140A03779: mov     [rcx+14h], edx
 * 0000000140A0377C: mov     rax, [rbp+0BE0h+var_838]
 * 0000000140A03783: mov     [rbp+0BE0h+var_A10], rax
 * 0000000140A0378A: mov     [rax+18h], r9d
 * 0000000140A0378E: mov     rax, [rbp+0BE0h+var_A10]
 * 0000000140A03795: mov     r9, [rbp+0BE0h+var_C40]
 * 0000000140A03799: mov     [rax+1Ch], r13d
 * 0000000140A0379D: xor     eax, eax
 * 0000000140A0379F: mov     r12d, eax
 * 0000000140A037A2: mov     rcx, [rbp+0BE0h+var_A10]
 * 0000000140A037A9: lea     r15, [rcx+30h]
 * 0000000140A037AD: cmp     [r9+30h], eax
 * 0000000140A037B1: jbe     loc_140A038A9
 * 0000000140A037B7: mov     rcx, [rbp+0BE0h+var_BD8]
 * 0000000140A037BB: lea     rdx, [rbp+0BE0h+var_898]
 * 0000000140A037C2: mov     eax, r12d
 * 0000000140A037C5: xor     r8d, r8d
 * 0000000140A037C8: movsxd  rsi, dword ptr [rcx+rax*4]
 * 0000000140A037CC: mov     rax, [rbx+260h]
 * 0000000140A037D3: sar     rsi, 4
 * 0000000140A037D7: add     rsi, rcx
 * 0000000140A037DA: mov     rcx, rsi
 * 0000000140A037DD: mov     [rsp+0CE0h+var_C70], rsi
 * 0000000140A037E2: call    KeGuardDispatchICall
 * 0000000140A037E7: test    rax, rax
 * 0000000140A037EA: jnz     loc_140A03889
 * 0000000140A037F0: lea     r11d, [rax+4]
 * 0000000140A037F4: mov     r8, rsi
 * 0000000140A037F7: add     [rbx+828h], r11d
 * 0000000140A037FE: lea     rcx, [rsi+4]
 * 0000000140A03802: mov     r10d, [rbx+814h]
 * 0000000140A03809: mov     rax, rsi
 * 0000000140A0380C: mov     rdx, [rbx+818h]
 * 0000000140A03813: cmp     rsi, rcx
 * 0000000140A03816: jnb     short loc_140A03827
 * 0000000140A03818: lea     r9d, [r11+3Ch]
 * 0000000140A0381C: prefetchnta byte ptr [rax]
 * 0000000140A0381F: add     rax, r9
 * 0000000140A03822: cmp     rax, rcx
 * 0000000140A03825: jb      short loc_140A0381C
 * 0000000140A03827: mov     r9d, r11d
 * 0000000140A0382A: mov     edi, 1
 * 0000000140A0382F: mov     esi, 0FFFFFFFFh
 * 0000000140A03834: movzx   eax, byte ptr [r8]
 * 0000000140A03838: mov     ecx, r10d
 * 0000000140A0383B: xor     rdx, rax
 * 0000000140A0383E: add     r8, rdi
 * 0000000140A03841: rol     rdx, cl
 * 0000000140A03844: add     r9d, esi
 * 0000000140A03847: jnz     short loc_140A03834
 * 0000000140A03849: mov     rsi, [rsp+0CE0h+var_C70]
 * 0000000140A0384E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A03855: mov     rax, rdx
 * 0000000140A03858: jmp     short loc_140A0385C
 * 0000000140A0385A: xor     edx, eax
 * 0000000140A0385C: shr     rax, 1Fh
 * 0000000140A03860: test    rax, rax
 * 0000000140A03863: jnz     short loc_140A0385A
 * 0000000140A03865: xor     edx, [r15]
 * 0000000140A03868: mov     eax, 0FFFFFFFFh
 * 0000000140A0386D: btr     edx, 1Fh
 * 0000000140A03871: xor     [r15], edx
 * 0000000140A03874: mov     [r15+4], r11d
 * 0000000140A03878: mov     [r15+8], rsi
 * 0000000140A0387C: add     r15, 10h
 * 0000000140A03880: add     r13d, eax
 * 0000000140A03883: jz      loc_140A0392B
 * 0000000140A03889: mov     rax, [rbp+0BE0h+var_C40]
 * 0000000140A0388D: mov     r9d, 1
 * 0000000140A03893: add     r12d, r9d
 * 0000000140A03896: cmp     r12d, [rax+30h]
 * 0000000140A0389A: jb      loc_140A037B7
 * 0000000140A038A0: mov     rcx, [rbp+0BE0h+var_A10]
 * 0000000140A038A7: jmp     short loc_140A038AF
 * 0000000140A038A9: mov     r9d, 1
 * 0000000140A038AF: xor     r15d, r15d
 * 0000000140A038B2: test    r13d, r13d
 * 0000000140A038B5: jz      loc_140A03AAE
 * 0000000140A038BB: cmp     [rbx+8F8h], r15d
 * 0000000140A038C2: jnz     loc_140A03D9B
 * 0000000140A038C8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A038D2: add     rax, rbx
 * 0000000140A038D5: mov     [rbx+900h], rax
 * 0000000140A038DC: test    rcx, rcx
 * 0000000140A038DF: jz      short loc_140A038F0
 * 0000000140A038E1: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A038EB: add     rax, rcx
 * 0000000140A038EE: jmp     short loc_140A038F3
 * 0000000140A038F0: mov     rax, r15
 * 0000000140A038F3: mov     [rbx+908h], rax
 * 0000000140A038FA: test    rcx, rcx
 * 0000000140A038FD: jz      short loc_140A03904
 * 0000000140A038FF: movsxd  rax, dword ptr [rcx]
 * 0000000140A03902: jmp     short loc_140A03907
 * 0000000140A03904: mov     rax, r15
 * 0000000140A03907: mov     [rbx+910h], rax
 * 0000000140A0390E: mov     [rbx+918h], r15
 * 0000000140A03915: mov     [rbx+8F8h], r9d
 * 0000000140A0391C: xor     edx, edx
 * 0000000140A0391E: mov     rcx, rbx
 * 0000000140A03921: call    $$b8
 * 0000000140A03926: jmp     loc_140A03D9B
 * 0000000140A0392B: mov     r12d, 6
 * 0000000140A03931: xor     r15d, r15d
 * 0000000140A03934: mov     eax, r15d
 * 0000000140A03937: mov     rbx, r14
 * 0000000140A0393A: test    eax, eax
 * 0000000140A0393C: js      loc_140A03D9B
 * 0000000140A03942: mov     [r14+958h], r12d
 * 0000000140A03949: mov     eax, r12d
 * 0000000140A0394C: cmp     eax, 7
 * 0000000140A0394F: jge     loc_140A03D2A
 * 0000000140A03955: test    dword ptr [r14+990h], 40000000h
 * 0000000140A03960: mov     r13d, r15d
 * 0000000140A03963: mov     rdx, [rbp+0BE0h+var_C30]
 * 0000000140A03967: mov     rsi, [rdx]
 * 0000000140A0396A: mov     [rbp+0BE0h+var_C40], rsi
 * 0000000140A0396E: jnz     loc_140A03D15
 * 0000000140A03974: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A0397B: mov     ebx, r15d
 * 0000000140A0397E: cmp     [rax+30h], r15d
 * 0000000140A03982: jbe     loc_140A03D15
 * 0000000140A03988: mov     rdi, rax
 * 0000000140A0398B: mov     eax, ebx
 * 0000000140A0398D: lea     rdx, [rbp+0BE0h+var_8C0]
 * 0000000140A03994: xor     r8d, r8d
 * 0000000140A03997: movsxd  rcx, dword ptr [rsi+rax*4]
 * 0000000140A0399B: mov     rax, [r14+260h]
 * 0000000140A039A2: sar     rcx, 4
 * 0000000140A039A6: add     rcx, rsi
 * 0000000140A039A9: call    KeGuardDispatchICall
 * 0000000140A039AE: mov     r10d, 1
 * 0000000140A039B4: test    rax, rax
 * 0000000140A039B7: jnz     short loc_140A039BC
 * 0000000140A039B9: add     r13d, r10d
 * 0000000140A039BC: add     ebx, r10d
 * 0000000140A039BF: cmp     ebx, [rdi+30h]
 * 0000000140A039C2: jb      short loc_140A0398B
 * 0000000140A039C4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A039CB: test    r13d, r13d
 * 0000000140A039CE: jz      loc_140A03D15
 * 0000000140A039D4: mov     r15d, [r14+7E4h]
 * 0000000140A039DB: mov     ecx, r13d
 * 0000000140A039DE: mov     r8d, [r14+924h]
 * 0000000140A039E5: shl     ecx, 4
 * 0000000140A039E8: add     ecx, 30h ; '0'
 * 0000000140A039EB: add     ecx, r15d
 * 0000000140A039EE: cmp     ecx, [r14+0A1Ch]
 * 0000000140A039F5: jbe     loc_140A03AF7
 * 0000000140A039FB: mov     edx, ecx
 * 0000000140A039FD: mov     rcx, r14
 * 0000000140A03A00: call    sub_140A0BB30
 * 0000000140A03A05: xor     r9d, r9d
 * 0000000140A03A08: mov     rbx, rax
 * 0000000140A03A0B: test    rax, rax
 * 0000000140A03A0E: jz      loc_140A03AEA
 * 0000000140A03A14: mov     ecx, [r14+990h]
 * 0000000140A03A1B: test    cl, 4
 * 0000000140A03A1E: jnz     loc_140A03ADB
 * 0000000140A03A24: mov     eax, [r14+7E4h]
 * 0000000140A03A2B: lea     r10d, [r9+1]
 * 0000000140A03A2F: mov     r8, [r14+7C8h]
 * 0000000140A03A36: and     ecx, 20000000h
 * 0000000140A03A3C: neg     ecx
 * 0000000140A03A3E: sbb     edx, edx
 * 0000000140A03A40: and     edx, [r14+924h]
 * 0000000140A03A47: cmp     eax, 8
 * 0000000140A03A4A: jb      short loc_140A03A61
 * 0000000140A03A4C: mov     ecx, eax
 * 0000000140A03A4E: shr     rcx, 3
 * 0000000140A03A52: mov     [r14], r9
 * 0000000140A03A55: add     eax, 0FFFFFFF8h
 * 0000000140A03A58: add     r14, 8
 * 0000000140A03A5C: sub     rcx, r10
 * 0000000140A03A5F: jnz     short loc_140A03A52
 * 0000000140A03A61: test    eax, eax
 * 0000000140A03A63: jz      short loc_140A03A74
 * 0000000140A03A65: mov     ecx, 0FFFFFFFFh
 * 0000000140A03A6A: mov     [r14], r9b
 * 0000000140A03A6D: add     r14, r10
 * 0000000140A03A70: add     eax, ecx
 * 0000000140A03A72: jnz     short loc_140A03A6A
 * 0000000140A03A74: mov     esi, [rbx+924h]
 * 0000000140A03A7A: mov     [rbx+924h], edx
 * 0000000140A03A80: cmp     edx, 3
 * 0000000140A03A83: jz      short loc_140A03AC2
 * 0000000140A03A85: test    dword ptr [rbx+990h], 10000000h
 * 0000000140A03A8F: mov     ecx, r9d
 * 0000000140A03A92: cmovz   ecx, edx
 * 0000000140A03A95: test    ecx, ecx
 * 0000000140A03A97: jz      short loc_140A03AB9
 * 0000000140A03A99: mov     rax, [rbx+228h]
 * 0000000140A03AA0: lea     rcx, [r8-8]
 * 0000000140A03AA4: mov     rdx, [rcx]
 * 0000000140A03AA7: call    KeGuardDispatchICall
 * 0000000140A03AAC: jmp     short loc_140A03AD1
 * 0000000140A03AAE: mov     r12d, 6
 * 0000000140A03AB4: jmp     loc_140A03934
 * 0000000140A03AB9: mov     rax, [rbx+100h]
 * 0000000140A03AC0: jmp     short loc_140A03AC9
 * 0000000140A03AC2: mov     rax, [rbx+368h]
 * 0000000140A03AC9: mov     rcx, r8
 * 0000000140A03ACC: call    KeGuardDispatchICall
 * 0000000140A03AD1: mov     [rbx+924h], esi
 * 0000000140A03AD7: mov     rsi, [rbp+0BE0h+var_C40]
 * 0000000140A03ADB: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140A03AE2: mov     r10d, 1
 * 0000000140A03AE8: jmp     short loc_140A03B01
 * 0000000140A03AEA: mov     eax, 0C000022Dh
 * 0000000140A03AEF: xor     r15d, r15d
 * 0000000140A03AF2: jmp     loc_140A03D18
 * 0000000140A03AF7: mov     rbx, r14
 * 0000000140A03AFA: mov     [r14+7E4h], ecx
 * 0000000140A03B01: add     [rbx+80Ch], r10d
 * 0000000140A03B08: lea     rcx, [rbx+r15]
 * 0000000140A03B0C: mov     [rbp+0BE0h+var_8C8], rcx
 * 0000000140A03B13: mov     rax, rcx
 * 0000000140A03B16: xor     r9d, r9d
 * 0000000140A03B19: mov     edx, 30h ; '0'
 * 0000000140A03B1E: mov     r8, r12
 * 0000000140A03B21: mov     [rax], r9
 * 0000000140A03B24: add     edx, 0FFFFFFF8h
 * 0000000140A03B27: add     rax, 8
 * 0000000140A03B2B: sub     r8, r10
 * 0000000140A03B2E: jnz     short loc_140A03B21
 * 0000000140A03B30: test    edx, edx
 * 0000000140A03B32: jz      short loc_140A03B45
 * 0000000140A03B34: mov     r8d, 0FFFFFFFFh
 * 0000000140A03B3A: mov     [rax], r9b
 * 0000000140A03B3D: add     rax, r10
 * 0000000140A03B40: add     edx, r8d
 * 0000000140A03B43: jnz     short loc_140A03B3A
 * 0000000140A03B45: mov     dword ptr [rcx], 0Ah
 * 0000000140A03B4B: mov     [rcx+8], r9
 * 0000000140A03B4F: mov     [rcx+10h], r9d
 * 0000000140A03B53: mov     rdx, [rbx+818h]
 * 0000000140A03B5A: mov     rax, rdx
 * 0000000140A03B5D: jmp     short loc_140A03B61
 * 0000000140A03B5F: xor     edx, eax
 * 0000000140A03B61: shr     rax, 1Fh
 * 0000000140A03B65: test    rax, rax
 * 0000000140A03B68: jnz     short loc_140A03B5F
 * 0000000140A03B6A: btr     edx, 1Fh
 * 0000000140A03B6E: mov     r14, rbx
 * 0000000140A03B71: mov     [rcx+14h], edx
 * 0000000140A03B74: mov     r12d, r9d
 * 0000000140A03B77: mov     rax, [rbp+0BE0h+var_8C8]
 * 0000000140A03B7E: mov     [rbp+0BE0h+var_A58], rax
 * 0000000140A03B85: mov     [rax+18h], r10d
 * 0000000140A03B89: mov     rax, [rbp+0BE0h+var_A58]
 * 0000000140A03B90: mov     [rax+1Ch], r13d
 * 0000000140A03B94: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A03B9B: mov     rcx, [rbp+0BE0h+var_A58]
 * 0000000140A03BA2: lea     r15, [rcx+30h]
 * 0000000140A03BA6: cmp     [rax+30h], r9d
 * 0000000140A03BAA: jbe     loc_140A03CA4
 * 0000000140A03BB0: mov     eax, r12d
 * 0000000140A03BB3: lea     rdx, [rbp+0BE0h+var_8C0]
 * 0000000140A03BBA: xor     r8d, r8d
 * 0000000140A03BBD: movsxd  rsi, dword ptr [rsi+rax*4]
 * 0000000140A03BC1: mov     rax, [rbx+260h]
 * 0000000140A03BC8: sar     rsi, 4
 * 0000000140A03BCC: add     rsi, [rbp+0BE0h+var_C40]
 * 0000000140A03BD0: mov     rcx, rsi
 * 0000000140A03BD3: mov     [rsp+0CE0h+var_C70], rsi
 * 0000000140A03BD8: call    KeGuardDispatchICall
 * 0000000140A03BDD: test    rax, rax
 * 0000000140A03BE0: jnz     loc_140A03C7F
 * 0000000140A03BE6: lea     r11d, [rax+4]
 * 0000000140A03BEA: mov     r8, rsi
 * 0000000140A03BED: add     [rbx+828h], r11d
 * 0000000140A03BF4: lea     rcx, [rsi+4]
 * 0000000140A03BF8: mov     r10d, [rbx+814h]
 * 0000000140A03BFF: mov     rax, rsi
 * 0000000140A03C02: mov     rdx, [rbx+818h]
 * 0000000140A03C09: cmp     rsi, rcx
 * 0000000140A03C0C: jnb     short loc_140A03C1D
 * 0000000140A03C0E: lea     r9d, [r11+3Ch]
 * 0000000140A03C12: prefetchnta byte ptr [rax]
 * 0000000140A03C15: add     rax, r9
 * 0000000140A03C18: cmp     rax, rcx
 * 0000000140A03C1B: jb      short loc_140A03C12
 * 0000000140A03C1D: mov     r9d, r11d
 * 0000000140A03C20: mov     edi, 1
 * 0000000140A03C25: mov     esi, 0FFFFFFFFh
 * 0000000140A03C2A: movzx   eax, byte ptr [r8]
 * 0000000140A03C2E: mov     ecx, r10d
 * 0000000140A03C31: xor     rdx, rax
 * 0000000140A03C34: add     r8, rdi
 * 0000000140A03C37: rol     rdx, cl
 * 0000000140A03C3A: add     r9d, esi
 * 0000000140A03C3D: jnz     short loc_140A03C2A
 * 0000000140A03C3F: mov     rsi, [rsp+0CE0h+var_C70]
 * 0000000140A03C44: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A03C4B: mov     rax, rdx
 * 0000000140A03C4E: jmp     short loc_140A03C52
 * 0000000140A03C50: xor     edx, eax
 * 0000000140A03C52: shr     rax, 1Fh
 * 0000000140A03C56: test    rax, rax
 * 0000000140A03C59: jnz     short loc_140A03C50
 * 0000000140A03C5B: xor     edx, [r15]
 * 0000000140A03C5E: mov     eax, 0FFFFFFFFh
 * 0000000140A03C63: btr     edx, 1Fh
 * 0000000140A03C67: xor     [r15], edx
 * 0000000140A03C6A: mov     [r15+4], r11d
 * 0000000140A03C6E: mov     [r15+8], rsi
 * 0000000140A03C72: add     r15, 10h
 * 0000000140A03C76: add     r13d, eax
 * 0000000140A03C79: jz      loc_140A03D12
 * 0000000140A03C7F: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A03C86: mov     r10d, 1
 * 0000000140A03C8C: mov     rsi, [rbp+0BE0h+var_C40]
 * 0000000140A03C90: add     r12d, r10d
 * 0000000140A03C93: cmp     r12d, [rax+30h]
 * 0000000140A03C97: jb      loc_140A03BB0
 * 0000000140A03C9D: mov     rcx, [rbp+0BE0h+var_A58]
 * 0000000140A03CA4: xor     r15d, r15d
 * 0000000140A03CA7: test    r13d, r13d
 * 0000000140A03CAA: jz      short loc_140A03D15
 * 0000000140A03CAC: cmp     [rbx+8F8h], r15d
 * 0000000140A03CB3: jnz     loc_140A03D9B
 * 0000000140A03CB9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A03CC3: add     rax, rbx
 * 0000000140A03CC6: mov     [rbx+900h], rax
 * 0000000140A03CCD: test    rcx, rcx
 * 0000000140A03CD0: jz      short loc_140A03CE1
 * 0000000140A03CD2: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A03CDC: add     rax, rcx
 * 0000000140A03CDF: jmp     short loc_140A03CE4
 * 0000000140A03CE1: mov     rax, r15
 * 0000000140A03CE4: mov     [rbx+908h], rax
 * 0000000140A03CEB: test    rcx, rcx
 * 0000000140A03CEE: jz      short loc_140A03CF5
 * 0000000140A03CF0: movsxd  rax, dword ptr [rcx]
 * 0000000140A03CF3: jmp     short loc_140A03CF8
 * 0000000140A03CF5: mov     rax, r15
 * 0000000140A03CF8: mov     [rbx+910h], rax
 * 0000000140A03CFF: mov     [rbx+918h], r15
 * 0000000140A03D06: mov     [rbx+8F8h], r10d
 * 0000000140A03D0D: jmp     loc_140A0391C
 * 0000000140A03D12: xor     r15d, r15d
 * 0000000140A03D15: mov     eax, r15d
 * 0000000140A03D18: mov     rbx, r14
 * 0000000140A03D1B: test    eax, eax
 * 0000000140A03D1D: js      short loc_140A03D9B
 * 0000000140A03D1F: mov     dword ptr [r14+958h], 7
 * 0000000140A03D2A: mov     eax, r15d
 * 0000000140A03D2D: mov     rsi, rbx
 * 0000000140A03D30: test    eax, eax
 * 0000000140A03D32: js      short loc_140A03D8D
 * 0000000140A03D34: mov     r14d, 0FFFFFFFFh
 * 0000000140A03D3A: mov     rax, [rbx+570h]
 * 0000000140A03D41: lea     rdx, [rbp+0BE0h+var_210]
 * 0000000140A03D48: mov     rsi, rbx
 * 0000000140A03D4B: mov     [rsp+0CE0h+var_C80], rbx
 * 0000000140A03D50: mov     [rbp+0BE0h+var_BA8], rbx
 * 0000000140A03D54: mov     rcx, [rax+20h]
 * 0000000140A03D58: mov     rax, [rbx+200h]
 * 0000000140A03D5F: mov     [rbp+0BE0h+var_C40], rcx
 * 0000000140A03D63: call    KeGuardDispatchICall
 * 0000000140A03D68: mov     r13d, [rbp+0BE0h+var_1FC]
 * 0000000140A03D6F: mov     r12, rax
 * 0000000140A03D72: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A03D76: mov     rax, [rbp+0BE0h+var_208]
 * 0000000140A03D7D: mov     dword ptr [rbp+0BE0h+arg_8], r13d
 * 0000000140A03D84: mov     [rbp+0BE0h+var_C08], rax
 * 0000000140A03D88: test    rax, rax
 * 0000000140A03D8B: jnz     short loc_140A03DA2
 * 0000000140A03D8D: mov     r12d, 1
 * 0000000140A03D93: jmp     loc_140A02AB7
 * 0000000140A03D98: xor     r15d, r15d
 * 0000000140A03D9B: mov     eax, 0C000022Dh
 * 0000000140A03DA0: jmp     short loc_140A03D2D
 * 0000000140A03DA2: mov     ecx, 4
 * 0000000140A03DA7: mov     [rbp+0BE0h+var_AE8], r15
 * 0000000140A03DAE: lea     rax, [rbp+0BE0h+var_AE0]
 * 0000000140A03DB5: lea     edx, [rcx-3]
 * 0000000140A03DB8: mov     [rax], r15b
 * 0000000140A03DBB: add     rax, rdx
 * 0000000140A03DBE: add     ecx, r14d
 * 0000000140A03DC1: jnz     short loc_140A03DB8
 * 0000000140A03DC3: xor     edx, edx
 * 0000000140A03DC5: cmp     [rbx+80Ch], edx
 * 0000000140A03DCB: jbe     loc_140A03FCF
 * 0000000140A03DD1: mov     ecx, [rbp+0BE0h+var_AE0]
 * 0000000140A03DD7: mov     r9d, dword ptr [rbp+0BE0h+var_AE8+4]
 * 0000000140A03DDE: mov     r11d, dword ptr [rbp+0BE0h+var_AE8]
 * 0000000140A03DE5: mov     rax, [rbx+0A78h]
 * 0000000140A03DEC: mov     r14, rbx
 * 0000000140A03DEF: test    rax, rax
 * 0000000140A03DF2: mov     r10d, edx
 * 0000000140A03DF5: cmovnz  r14, rax
 * 0000000140A03DF9: mov     [rsp+0CE0h+var_C70], r14
 * 0000000140A03DFE: mov     r8d, [r14+808h]
 * 0000000140A03E05: add     r8, r14
 * 0000000140A03E08: test    r11d, r11d
 * 0000000140A03E0B: jz      short loc_140A03E1B
 * 0000000140A03E0D: cmp     r9d, r15d
 * 0000000140A03E10: ja      short loc_140A03E1B
 * 0000000140A03E12: mov     r8d, ecx
 * 0000000140A03E15: mov     r10d, r9d
 * 0000000140A03E18: add     r8, r14
 * 0000000140A03E1B: cmp     r10d, r15d
 * 0000000140A03E1E: jz      loc_140A03F59
 * 0000000140A03E24: mov     esi, 0Ch
 * 0000000140A03E29: mov     eax, r15d
 * 0000000140A03E2C: sub     eax, r10d
 * 0000000140A03E2F: mov     r14, 0AAAAAAAAAAAAAAABh
 * 0000000140A03E39: mov     r9d, eax
 * 0000000140A03E3C: add     r10d, eax
 * 0000000140A03E3F: lea     r12d, [rsi-0Ah]
 * 0000000140A03E43: mov     ecx, [r8]
 * 0000000140A03E46: cmp     ecx, esi
 * 0000000140A03E48: jg      short loc_140A03E8F
 * 0000000140A03E4A: jz      short loc_140A03EAC
 * 0000000140A03E4C: sub     ecx, 1
 * 0000000140A03E4F: jz      short loc_140A03EAC
 * 0000000140A03E51: sub     ecx, 6
 * 0000000140A03E54: jz      short loc_140A03E7D
 * 0000000140A03E56: sub     ecx, 1
 * 0000000140A03E59: jz      short loc_140A03E73
 * 0000000140A03E5B: cmp     ecx, r12d
 * 0000000140A03E5E: jnz     loc_140A03EEB
 * 0000000140A03E64: mov     eax, [r8+1Ch]
 * 0000000140A03E68: add     eax, 3
 * 0000000140A03E6B: shl     eax, 4
 * 0000000140A03E6E: jmp     loc_140A03F2A
 * 0000000140A03E73: movzx   eax, word ptr [r8+20h]
 * 0000000140A03E78: jmp     loc_140A03F24
 * 0000000140A03E7D: mov     eax, [r8+18h]
 * 0000000140A03E81: add     eax, r12d
 * 0000000140A03E84: lea     eax, [rax+rax*2]
 * 0000000140A03E87: shl     eax, 3
 * 0000000140A03E8A: jmp     loc_140A03F2A
 * 0000000140A03E8F: cmp     ecx, 1Ch
 * 0000000140A03E92: jz      loc_140A03F1F
 * 0000000140A03E98: cmp     ecx, 1Eh
 * 0000000140A03E9B: jz      short loc_140A03EF2
 * 0000000140A03E9D: cmp     ecx, 20h ; ' '
 * 0000000140A03EA0: jle     short loc_140A03EEB
 * 0000000140A03EA2: cmp     ecx, 22h ; '"'
 * 0000000140A03EA5: jle     short loc_140A03EC3
 * 0000000140A03EA7: cmp     ecx, 2Bh ; '+'
 * 0000000140A03EAA: jnz     short loc_140A03EEB
 * 0000000140A03EAC: mov     ecx, [r8+10h]
 * 0000000140A03EB0: mov     rax, r14
 * 0000000140A03EB3: mul     rcx
 * 0000000140A03EB6: shr     rdx, 3
 * 0000000140A03EBA: lea     eax, ds:30h[rdx*4]
 * 0000000140A03EC1: jmp     short loc_140A03F2A
 * 0000000140A03EC3: mov     ecx, [r8+20h]
 * 0000000140A03EC7: mov     edx, [r8+28h]
 * 0000000140A03ECB: and     ecx, 0FFFh
 * 0000000140A03ED1: add     rdx, 0FFFh
 * 0000000140A03ED8: add     rdx, rcx
 * 0000000140A03EDB: shr     rdx, 0Ch
 * 0000000140A03EDF: lea     eax, [rdx+rdx*4]
 * 0000000140A03EE2: lea     eax, ds:30h[rax*4]
 * 0000000140A03EE9: jmp     short loc_140A03F2A
 * 0000000140A03EEB: mov     eax, 30h ; '0'
 * 0000000140A03EF0: jmp     short loc_140A03F2A
 * 0000000140A03EF2: mov     eax, [r8+24h]
 * 0000000140A03EF6: lea     ecx, [rax-1]
 * 0000000140A03EF9: neg     eax
 * 0000000140A03EFB: sbb     eax, eax
 * 0000000140A03EFD: and     ecx, eax
 * 0000000140A03EFF: mov     rax, r14
 * 0000000140A03F02: mul     rcx
 * 0000000140A03F05: movzx   eax, word ptr [r8+28h]
 * 0000000140A03F0A: shr     rdx, 3
 * 0000000140A03F0E: add     edx, 7
 * 0000000140A03F11: and     edx, 0FFFFFFF8h
 * 0000000140A03F14: add     eax, r12d
 * 0000000140A03F17: lea     eax, [rax+rax*2]
 * 0000000140A03F1A: lea     eax, [rdx+rax*8]
 * 0000000140A03F1D: jmp     short loc_140A03F2A
 * 0000000140A03F1F: movzx   eax, word ptr [r8+28h]
 * 0000000140A03F24: add     eax, 37h ; '7'
 * 0000000140A03F27: and     eax, 0FFFFFFF8h
 * 0000000140A03F2A: add     r8, rax
 * 0000000140A03F2D: mov     eax, 1
 * 0000000140A03F32: sub     r9, rax
 * 0000000140A03F35: jnz     loc_140A03E43
 * 0000000140A03F3B: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A03F40: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A03F47: mov     r14, [rsp+0CE0h+var_C70]
 * 0000000140A03F4C: mov     r12, [rbp+0BE0h+var_C30]
 * 0000000140A03F50: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A03F57: jmp     short loc_140A03F5E
 * 0000000140A03F59: mov     eax, 1
 * 0000000140A03F5E: mov     ecx, r8d
 * 0000000140A03F61: mov     dword ptr [rbp+0BE0h+var_AE8], eax
 * 0000000140A03F67: sub     ecx, r14d
 * 0000000140A03F6A: mov     dword ptr [rbp+0BE0h+var_AE8+4], r10d
 * 0000000140A03F71: mov     [rbp+0BE0h+var_AE0], ecx
 * 0000000140A03F77: mov     r11d, eax
 * 0000000140A03F7A: movsxd  rdx, dword ptr [r8]
 * 0000000140A03F7D: mov     r9d, r10d
 * 0000000140A03F80: cmp     edx, 2Bh ; '+'
 * 0000000140A03F83: ja      short loc_140A03FA1
 * 0000000140A03F85: mov     r10, 80000001002h
 * 0000000140A03F8F: bt      r10, rdx
 * 0000000140A03F93: jnb     short loc_140A03FA1
 * 0000000140A03F95: cmp     [r8+8], r12
 * 0000000140A03F99: jnz     short loc_140A03FA1
 * 0000000140A03F9B: cmp     [r8+10h], r13d
 * 0000000140A03F9F: jz      short loc_140A03FCA
 * 0000000140A03FA1: lea     eax, [rdx-21h]
 * 0000000140A03FA4: mov     edx, 1
 * 0000000140A03FA9: cmp     eax, edx
 * 0000000140A03FAB: ja      short loc_140A03FB7
 * 0000000140A03FAD: mov     rax, [rbp+0BE0h+var_C08]
 * 0000000140A03FB1: cmp     [r8+20h], rax
 * 0000000140A03FB5: jz      short loc_140A03FCA
 * 0000000140A03FB7: add     r15d, edx
 * 0000000140A03FBA: cmp     r15d, [rbx+80Ch]
 * 0000000140A03FC1: jnb     short loc_140A03FCF
 * 0000000140A03FC3: xor     edx, edx
 * 0000000140A03FC5: jmp     loc_140A03DE5
 * 0000000140A03FCA: xor     r15d, r15d
 * 0000000140A03FCD: jmp     short loc_140A03FD5
 * 0000000140A03FCF: xor     r15d, r15d
 * 0000000140A03FD2: mov     r8d, r15d
 * 0000000140A03FD5: test    r8, r8
 * 0000000140A03FD8: jz      short loc_140A03FE2
 * 0000000140A03FDA: mov     rsi, rbx
 * 0000000140A03FDD: jmp     loc_140A05CF0
 * 0000000140A03FE2: mov     r13, [rbp+0BE0h+var_C40]
 * 0000000140A03FE6: lea     rdx, [rbp+0BE0h+var_1F8]
 * 0000000140A03FED: mov     rax, [rbx+200h]
 * 0000000140A03FF4: mov     rcx, r13
 * 0000000140A03FF7: mov     [rbp+0BE0h+var_BB0], rbx
 * 0000000140A03FFB: call    KeGuardDispatchICall
 * 0000000140A04000: mov     r12d, [rbp+0BE0h+var_1E4]
 * 0000000140A04007: mov     [rbp+0BE0h+var_C10], rax
 * 0000000140A0400B: mov     rax, [rbp+0BE0h+var_1F0]
 * 0000000140A04012: mov     dword ptr [rbp+0BE0h+arg_8], r12d
 * 0000000140A04019: mov     [rbp+0BE0h+var_BDC], r12d
 * 0000000140A0401D: mov     [rsp+0CE0h+BugCheckParameter2], rax
 * 0000000140A04022: test    rax, rax
 * 0000000140A04025: jnz     short loc_140A04039
 * 0000000140A04027: mov     [rbp+0BE0h+var_C18], 0C000007Bh
 * 0000000140A0402E: mov     r13d, 80000000h
 * 0000000140A04034: jmp     loc_140A05C3F
 * 0000000140A04039: mov     ecx, 4
 * 0000000140A0403E: mov     [rbp+0BE0h+var_AC8], r15
 * 0000000140A04045: lea     rax, [rbp+0BE0h+var_AC0]
 * 0000000140A0404C: mov     r8d, 0FFFFFFFFh
 * 0000000140A04052: lea     edx, [rcx-3]
 * 0000000140A04055: mov     [rax], r15b
 * 0000000140A04058: add     rax, rdx
 * 0000000140A0405B: add     ecx, r8d
 * 0000000140A0405E: jnz     short loc_140A04055
 * 0000000140A04060: xor     edx, edx
 * 0000000140A04062: cmp     [rbx+80Ch], edx
 * 0000000140A04068: jbe     loc_140A04276
 * 0000000140A0406E: mov     ecx, [rbp+0BE0h+var_AC0]
 * 0000000140A04074: mov     r9d, dword ptr [rbp+0BE0h+var_AC8+4]
 * 0000000140A0407B: mov     r11d, dword ptr [rbp+0BE0h+var_AC8]
 * 0000000140A04082: mov     rax, [rbx+0A78h]
 * 0000000140A04089: mov     r14, rbx
 * 0000000140A0408C: test    rax, rax
 * 0000000140A0408F: mov     r10d, edx
 * 0000000140A04092: cmovnz  r14, rax
 * 0000000140A04096: mov     [rsp+0CE0h+var_C70], r14
 * 0000000140A0409B: mov     r8d, [r14+808h]
 * 0000000140A040A2: add     r8, r14
 * 0000000140A040A5: test    r11d, r11d
 * 0000000140A040A8: jz      short loc_140A040B8
 * 0000000140A040AA: cmp     r9d, r15d
 * 0000000140A040AD: ja      short loc_140A040B8
 * 0000000140A040AF: mov     r8d, ecx
 * 0000000140A040B2: mov     r10d, r9d
 * 0000000140A040B5: add     r8, r14
 * 0000000140A040B8: cmp     r10d, r15d
 * 0000000140A040BB: jz      loc_140A041F6
 * 0000000140A040C1: mov     esi, 0Ch
 * 0000000140A040C6: mov     eax, r15d
 * 0000000140A040C9: sub     eax, r10d
 * 0000000140A040CC: mov     r14, 0AAAAAAAAAAAAAAABh
 * 0000000140A040D6: mov     r9d, eax
 * 0000000140A040D9: add     r10d, eax
 * 0000000140A040DC: lea     r12d, [rsi-0Ah]
 * 0000000140A040E0: mov     ecx, [r8]
 * 0000000140A040E3: cmp     ecx, esi
 * 0000000140A040E5: jg      short loc_140A0412C
 * 0000000140A040E7: jz      short loc_140A04149
 * 0000000140A040E9: sub     ecx, 1
 * 0000000140A040EC: jz      short loc_140A04149
 * 0000000140A040EE: sub     ecx, 6
 * 0000000140A040F1: jz      short loc_140A0411A
 * 0000000140A040F3: sub     ecx, 1
 * 0000000140A040F6: jz      short loc_140A04110
 * 0000000140A040F8: cmp     ecx, r12d
 * 0000000140A040FB: jnz     loc_140A04188
 * 0000000140A04101: mov     eax, [r8+1Ch]
 * 0000000140A04105: add     eax, 3
 * 0000000140A04108: shl     eax, 4
 * 0000000140A0410B: jmp     loc_140A041C7
 * 0000000140A04110: movzx   eax, word ptr [r8+20h]
 * 0000000140A04115: jmp     loc_140A041C1
 * 0000000140A0411A: mov     eax, [r8+18h]
 * 0000000140A0411E: add     eax, r12d
 * 0000000140A04121: lea     eax, [rax+rax*2]
 * 0000000140A04124: shl     eax, 3
 * 0000000140A04127: jmp     loc_140A041C7
 * 0000000140A0412C: cmp     ecx, 1Ch
 * 0000000140A0412F: jz      loc_140A041BC
 * 0000000140A04135: cmp     ecx, 1Eh
 * 0000000140A04138: jz      short loc_140A0418F
 * 0000000140A0413A: cmp     ecx, 20h ; ' '
 * 0000000140A0413D: jle     short loc_140A04188
 * 0000000140A0413F: cmp     ecx, 22h ; '"'
 * 0000000140A04142: jle     short loc_140A04160
 * 0000000140A04144: cmp     ecx, 2Bh ; '+'
 * 0000000140A04147: jnz     short loc_140A04188
 * 0000000140A04149: mov     ecx, [r8+10h]
 * 0000000140A0414D: mov     rax, r14
 * 0000000140A04150: mul     rcx
 * 0000000140A04153: shr     rdx, 3
 * 0000000140A04157: lea     eax, ds:30h[rdx*4]
 * 0000000140A0415E: jmp     short loc_140A041C7
 * 0000000140A04160: mov     ecx, [r8+20h]
 * 0000000140A04164: mov     edx, [r8+28h]
 * 0000000140A04168: and     ecx, 0FFFh
 * 0000000140A0416E: add     rdx, 0FFFh
 * 0000000140A04175: add     rdx, rcx
 * 0000000140A04178: shr     rdx, 0Ch
 * 0000000140A0417C: lea     eax, [rdx+rdx*4]
 * 0000000140A0417F: lea     eax, ds:30h[rax*4]
 * 0000000140A04186: jmp     short loc_140A041C7
 * 0000000140A04188: mov     eax, 30h ; '0'
 * 0000000140A0418D: jmp     short loc_140A041C7
 * 0000000140A0418F: mov     eax, [r8+24h]
 * 0000000140A04193: lea     ecx, [rax-1]
 * 0000000140A04196: neg     eax
 * 0000000140A04198: sbb     eax, eax
 * 0000000140A0419A: and     ecx, eax
 * 0000000140A0419C: mov     rax, r14
 * 0000000140A0419F: mul     rcx
 * 0000000140A041A2: movzx   eax, word ptr [r8+28h]
 * 0000000140A041A7: shr     rdx, 3
 * 0000000140A041AB: add     edx, 7
 * 0000000140A041AE: and     edx, 0FFFFFFF8h
 * 0000000140A041B1: add     eax, r12d
 * 0000000140A041B4: lea     eax, [rax+rax*2]
 * 0000000140A041B7: lea     eax, [rdx+rax*8]
 * 0000000140A041BA: jmp     short loc_140A041C7
 * 0000000140A041BC: movzx   eax, word ptr [r8+28h]
 * 0000000140A041C1: add     eax, 37h ; '7'
 * 0000000140A041C4: and     eax, 0FFFFFFF8h
 * 0000000140A041C7: add     r8, rax
 * 0000000140A041CA: mov     eax, 1
 * 0000000140A041CF: sub     r9, rax
 * 0000000140A041D2: jnz     loc_140A040E0
 * 0000000140A041D8: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A041DD: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A041E4: mov     r14, [rsp+0CE0h+var_C70]
 * 0000000140A041E9: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A041F0: mov     r13, [rbp+0BE0h+var_C40]
 * 0000000140A041F4: jmp     short loc_140A041FB
 * 0000000140A041F6: mov     eax, 1
 * 0000000140A041FB: mov     ecx, r8d
 * 0000000140A041FE: mov     dword ptr [rbp+0BE0h+var_AC8], eax
 * 0000000140A04204: sub     ecx, r14d
 * 0000000140A04207: mov     dword ptr [rbp+0BE0h+var_AC8+4], r10d
 * 0000000140A0420E: mov     [rbp+0BE0h+var_AC0], ecx
 * 0000000140A04214: mov     r11d, eax
 * 0000000140A04217: movsxd  rdx, dword ptr [r8]
 * 0000000140A0421A: mov     r9d, r10d
 * 0000000140A0421D: cmp     edx, 2Bh ; '+'
 * 0000000140A04220: ja      short loc_140A04242
 * 0000000140A04222: mov     r10, 80000001002h
 * 0000000140A0422C: bt      r10, rdx
 * 0000000140A04230: jnb     short loc_140A04242
 * 0000000140A04232: mov     rax, [rbp+0BE0h+var_C10]
 * 0000000140A04236: cmp     [r8+8], rax
 * 0000000140A0423A: jnz     short loc_140A04242
 * 0000000140A0423C: cmp     [r8+10h], r12d
 * 0000000140A04240: jz      short loc_140A0426C
 * 0000000140A04242: lea     eax, [rdx-21h]
 * 0000000140A04245: mov     edx, 1
 * 0000000140A0424A: cmp     eax, edx
 * 0000000140A0424C: ja      short loc_140A04259
 * 0000000140A0424E: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A04253: cmp     [r8+20h], r14
 * 0000000140A04257: jz      short loc_140A04271
 * 0000000140A04259: add     r15d, edx
 * 0000000140A0425C: cmp     r15d, [rbx+80Ch]
 * 0000000140A04263: jnb     short loc_140A04276
 * 0000000140A04265: xor     edx, edx
 * 0000000140A04267: jmp     loc_140A04082
 * 0000000140A0426C: xor     r15d, r15d
 * 0000000140A0426F: jmp     short loc_140A0427C
 * 0000000140A04271: xor     r15d, r15d
 * 0000000140A04274: jmp     short loc_140A04281
 * 0000000140A04276: xor     r15d, r15d
 * 0000000140A04279: mov     r8d, r15d
 * 0000000140A0427C: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A04281: mov     [rbp+0BE0h+var_B48], r8
 * 0000000140A04288: test    r8, r8
 * 0000000140A0428B: jnz     loc_140A05C47
 * 0000000140A04291: mov     rax, [rbx+2A8h]
 * 0000000140A04298: mov     rcx, r13
 * 0000000140A0429B: call    KeGuardDispatchICall
 * 0000000140A042A0: mov     ecx, [rbp+0BE0h+var_BDC]
 * 0000000140A042A3: mov     [rbp+0BE0h+var_C58], ecx
 * 0000000140A042A6: mov     [rbp+0BE0h+var_C38], eax
 * 0000000140A042A9: test    eax, eax
 * 0000000140A042AB: jz      loc_140A05C47
 * 0000000140A042B1: test    dword ptr [rbx+990h], 40000000h
 * 0000000140A042BB: jz      short loc_140A042DD
 * 0000000140A042BD: mov     r8d, 0Fh
 * 0000000140A042C3: lea     rcx, [rbp+0BE0h+var_BA8]
 * 0000000140A042C7: mov     rdx, r14
 * 0000000140A042CA: call    sub_140A18FE4
 * 0000000140A042CF: mov     rsi, [rbp+0BE0h+var_BA8]
 * 0000000140A042D3: mov     ecx, eax
 * 0000000140A042D5: mov     [rbp+0BE0h+var_C18], eax
 * 0000000140A042D8: jmp     loc_140A05C25
 * 0000000140A042DD: mov     rax, [rbx+1F0h]
 * 0000000140A042E4: lea     r9, [rbp+0BE0h+var_BDC]
 * 0000000140A042E8: xor     r8d, r8d
 * 0000000140A042EB: mov     [rbp+0BE0h+var_780], r15
 * 0000000140A042F2: mov     [rbp+0BE0h+var_9A0], r15d
 * 0000000140A042F9: mov     r15, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A042FE: mov     rcx, r15
 * 0000000140A04301: lea     r13d, [r8+1]
 * 0000000140A04305: mov     dl, r13b
 * 0000000140A04308: call    KeGuardDispatchICall
 * 0000000140A0430D: mov     rdx, rax
 * 0000000140A04310: lea     r8d, [r13+0Bh]
 * 0000000140A04314: neg     rax
 * 0000000140A04317: mov     [rbp+0BE0h+var_798], rdx
 * 0000000140A0431E: lea     r9, [rbp+0BE0h+var_BDC]
 * 0000000140A04322: mov     dl, r13b
 * 0000000140A04325: sbb     ecx, ecx
 * 0000000140A04327: and     ecx, [rbp+0BE0h+var_BDC]
 * 0000000140A0432A: mov     [rbp+0BE0h+var_BDC], ecx
 * 0000000140A0432D: mov     rax, [rbx+1F0h]
 * 0000000140A04334: mov     [rbp+0BE0h+var_9AC], ecx
 * 0000000140A0433A: mov     rcx, r15
 * 0000000140A0433D: call    KeGuardDispatchICall
 * 0000000140A04342: mov     rdx, rax
 * 0000000140A04345: mov     [rbp+0BE0h+var_BD8], rax
 * 0000000140A04349: neg     rax
 * 0000000140A0434C: mov     [rbp+0BE0h+var_790], rdx
 * 0000000140A04353: lea     r8d, [r13+9]
 * 0000000140A04357: mov     dl, r13b
 * 0000000140A0435A: sbb     ecx, ecx
 * 0000000140A0435C: lea     r9, [rbp+0BE0h+var_BDC]
 * 0000000140A04360: and     ecx, [rbp+0BE0h+var_BDC]
 * 0000000140A04363: mov     [rbp+0BE0h+var_BDC], ecx
 * 0000000140A04366: mov     rax, [rbx+1F0h]
 * 0000000140A0436D: mov     dword ptr [rbp+0BE0h+arg_8], ecx
 * 0000000140A04373: mov     [rbp+0BE0h+var_9A8], ecx
 * 0000000140A04379: mov     rcx, r15
 * 0000000140A0437C: call    KeGuardDispatchICall
 * 0000000140A04381: mov     rdx, rax
 * 0000000140A04384: neg     rax
 * 0000000140A04387: mov     [rbp+0BE0h+var_788], rdx
 * 0000000140A0438E: sbb     ecx, ecx
 * 0000000140A04390: and     ecx, [rbp+0BE0h+var_BDC]
 * 0000000140A04393: mov     [rbp+0BE0h+var_BDC], ecx
 * 0000000140A04396: mov     rax, [rbx+1F8h]
 * 0000000140A0439D: mov     [rbp+0BE0h+var_9A4], ecx
 * 0000000140A043A3: mov     rcx, r15
 * 0000000140A043A6: call    KeGuardDispatchICall
 * 0000000140A043AB: xor     r12d, r12d
 * 0000000140A043AE: mov     r14, rax
 * 0000000140A043B1: test    rax, rax
 * 0000000140A043B4: jnz     short loc_140A043BE
 * 0000000140A043B6: xor     r15d, r15d
 * 0000000140A043B9: jmp     loc_140A04027
 * 0000000140A043BE: mov     rax, [rbx+498h]
 * 0000000140A043C5: lea     rdx, [rbp+0BE0h+var_8B8]
 * 0000000140A043CC: mov     rcx, r15
 * 0000000140A043CF: call    KeGuardDispatchICall
 * 0000000140A043D4: mov     r8d, [rbx+924h]
 * 0000000140A043DB: mov     [rbp+0BE0h+var_778], rax
 * 0000000140A043E2: mov     eax, [rbp+0BE0h+var_8B8]
 * 0000000140A043E8: mov     [rbp+0BE0h+var_99C], eax
 * 0000000140A043EE: mov     eax, [r14+54h]
 * 0000000140A043F2: mov     [rbp+0BE0h+var_7A0], r15
 * 0000000140A043F9: mov     r15d, [rbx+7E4h]
 * 0000000140A04400: mov     [rbp+0BE0h+var_9B0], eax
 * 0000000140A04406: lea     eax, [r15+120h]
 * 0000000140A0440D: cmp     eax, [rbx+0A1Ch]
 * 0000000140A04413: jbe     loc_140A044FE
 * 0000000140A04419: mov     edx, eax
 * 0000000140A0441B: mov     rcx, rbx
 * 0000000140A0441E: call    sub_140A0BB30
 * 0000000140A04423: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A04427: mov     r14, rax
 * 0000000140A0442A: test    rax, rax
 * 0000000140A0442D: jz      loc_140A044F2
 * 0000000140A04433: mov     ecx, [rbx+990h]
 * 0000000140A04439: test    cl, 4
 * 0000000140A0443C: jnz     loc_140A044E8
 * 0000000140A04442: mov     eax, [rbx+7E4h]
 * 0000000140A04448: and     ecx, 20000000h
 * 0000000140A0444E: mov     r8, [rbx+7C8h]
 * 0000000140A04455: neg     ecx
 * 0000000140A04457: sbb     edx, edx
 * 0000000140A04459: and     edx, [rbx+924h]
 * 0000000140A0445F: cmp     eax, 8
 * 0000000140A04462: jb      short loc_140A04479
 * 0000000140A04464: mov     ecx, eax
 * 0000000140A04466: shr     rcx, 3
 * 0000000140A0446A: mov     [rbx], r12
 * 0000000140A0446D: add     eax, 0FFFFFFF8h
 * 0000000140A04470: add     rbx, 8
 * 0000000140A04474: sub     rcx, r13
 * 0000000140A04477: jnz     short loc_140A0446A
 * 0000000140A04479: test    eax, eax
 * 0000000140A0447B: jz      short loc_140A0448C
 * 0000000140A0447D: mov     ecx, 0FFFFFFFFh
 * 0000000140A04482: mov     [rbx], r12b
 * 0000000140A04485: add     rbx, r13
 * 0000000140A04488: add     eax, ecx
 * 0000000140A0448A: jnz     short loc_140A04482
 * 0000000140A0448C: mov     ebx, [r14+924h]
 * 0000000140A04493: mov     [r14+924h], edx
 * 0000000140A0449A: cmp     edx, 3
 * 0000000140A0449D: jz      short loc_140A044D2
 * 0000000140A0449F: test    dword ptr [r14+990h], 10000000h
 * 0000000140A044AA: mov     ecx, r12d
 * 0000000140A044AD: cmovz   ecx, edx
 * 0000000140A044B0: test    ecx, ecx
 * 0000000140A044B2: jz      short loc_140A044C9
 * 0000000140A044B4: mov     rax, [r14+228h]
 * 0000000140A044BB: lea     rcx, [r8-8]
 * 0000000140A044BF: mov     rdx, [rcx]
 * 0000000140A044C2: call    KeGuardDispatchICall
 * 0000000140A044C7: jmp     short loc_140A044E1
 * 0000000140A044C9: mov     rax, [r14+100h]
 * 0000000140A044D0: jmp     short loc_140A044D9
 * 0000000140A044D2: mov     rax, [r14+368h]
 * 0000000140A044D9: mov     rcx, r8
 * 0000000140A044DC: call    KeGuardDispatchICall
 * 0000000140A044E1: mov     [r14+924h], ebx
 * 0000000140A044E8: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140A044F0: jmp     short loc_140A0450B
 * 0000000140A044F2: xor     r15d, r15d
 * 0000000140A044F5: mov     [rbp+0BE0h+var_BB0], r15
 * 0000000140A044F9: jmp     loc_140A0402E
 * 0000000140A044FE: mov     r14, rbx
 * 0000000140A04501: mov     [rbp+0BE0h+var_C40], rbx
 * 0000000140A04505: mov     [rbx+7E4h], eax
 * 0000000140A0450B: mov     eax, 6
 * 0000000140A04510: lea     r10, [r14+r15]
 * 0000000140A04514: add     [r14+80Ch], eax
 * 0000000140A0451B: lea     r13, [rbp+0BE0h+var_7A0]
 * 0000000140A04522: mov     [rbp+0BE0h+var_978], r10
 * 0000000140A04529: lea     rdi, [rbp+0BE0h+var_9B0]
 * 0000000140A04530: mov     [rbp+0BE0h+var_B48], r10
 * 0000000140A04537: lea     ebx, [rax-5]
 * 0000000140A0453A: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A0453E: mov     r15d, [rdi]
 * 0000000140A04541: mov     rdx, rax
 * 0000000140A04544: mov     rsi, [r13+0]
 * 0000000140A04548: mov     ecx, 30h ; '0'
 * 0000000140A0454D: mov     [rbp+0BE0h+var_BE8], r15d
 * 0000000140A04551: mov     rax, r10
 * 0000000140A04554: mov     [rax], r12
 * 0000000140A04557: add     ecx, 0FFFFFFF8h
 * 0000000140A0455A: add     rax, 8
 * 0000000140A0455E: sub     rdx, rbx
 * 0000000140A04561: jnz     short loc_140A04554
 * 0000000140A04563: test    ecx, ecx
 * 0000000140A04565: jz      short loc_140A04576
 * 0000000140A04567: mov     edx, 0FFFFFFFFh
 * 0000000140A0456C: mov     [rax], r12b
 * 0000000140A0456F: add     rax, rbx
 * 0000000140A04572: add     ecx, edx
 * 0000000140A04574: jnz     short loc_140A0456C
 * 0000000140A04576: mov     dword ptr [r10], 0Bh
 * 0000000140A0457D: lea     rcx, [rsi+r15]
 * 0000000140A04581: mov     [r10+8], rsi
 * 0000000140A04585: mov     r9, rsi
 * 0000000140A04588: mov     [r10+10h], r15d
 * 0000000140A0458C: mov     rax, rsi
 * 0000000140A0458F: add     [r14+828h], r15d
 * 0000000140A04596: mov     r11d, [r14+814h]
 * 0000000140A0459D: mov     r12, [r14+818h]
 * 0000000140A045A4: cmp     rsi, rcx
 * 0000000140A045A7: jnb     short loc_140A045B9
 * 0000000140A045A9: mov     edx, 40h ; '@'
 * 0000000140A045AE: prefetchnta byte ptr [rax]
 * 0000000140A045B1: add     rax, rdx
 * 0000000140A045B4: cmp     rax, rcx
 * 0000000140A045B7: jb      short loc_140A045AE
 * 0000000140A045B9: mov     ebx, r15d
 * 0000000140A045BC: mov     r8, r12
 * 0000000140A045BF: shr     ebx, 7
 * 0000000140A045C2: test    ebx, ebx
 * 0000000140A045C4: jz      short loc_140A04639
 * 0000000140A045C6: mov     r15, 7010008004002001h
 * 0000000140A045D0: mov     edx, 8
 * 0000000140A045D5: lea     r14d, [rdx-7]
 * 0000000140A045D9: mov     rax, [r9]
 * 0000000140A045DC: mov     ecx, r11d
 * 0000000140A045DF: xor     rax, r8
 * 0000000140A045E2: mov     r8, [r9+8]
 * 0000000140A045E6: rol     rax, cl
 * 0000000140A045E9: add     r9, 10h
 * 0000000140A045ED: xor     r8, rax
 * 0000000140A045F0: rol     r8, cl
 * 0000000140A045F3: sub     rdx, r14
 * 0000000140A045F6: jnz     short loc_140A045D9
 * 0000000140A045F8: mov     rcx, r9
 * 0000000140A045FB: sub     rcx, rsi
 * 0000000140A045FE: xor     rcx, r12
 * 0000000140A04601: mov     rax, rcx
 * 0000000140A04604: rol     rax, 11h
 * 0000000140A04608: xor     rcx, rax
 * 0000000140A0460B: mov     rax, r15
 * 0000000140A0460E: mul     rcx
 * 0000000140A04611: mov     [rbp+0BE0h+var_518], rdx
 * 0000000140A04618: xor     edx, eax
 * 0000000140A0461A: xor     r11d, edx
 * 0000000140A0461D: mov     rax, r14
 * 0000000140A04620: and     r11d, 3Fh
 * 0000000140A04624: cmovz   r11d, eax
 * 0000000140A04628: mov     eax, 0FFFFFFFFh
 * 0000000140A0462D: add     ebx, eax
 * 0000000140A0462F: jnz     short loc_140A045D0
 * 0000000140A04631: mov     r14, [rbp+0BE0h+var_C40]
 * 0000000140A04635: mov     r15d, [rbp+0BE0h+var_BE8]
 * 0000000140A04639: mov     edx, r15d
 * 0000000140A0463C: and     edx, 7Fh
 * 0000000140A0463F: cmp     edx, 8
 * 0000000140A04642: jb      short loc_140A04669
 * 0000000140A04644: mov     ebx, edx
 * 0000000140A04646: mov     r14d, 1
 * 0000000140A0464C: shr     rbx, 3
 * 0000000140A04650: xor     r8, [r9]
 * 0000000140A04653: mov     ecx, r11d
 * 0000000140A04656: rol     r8, cl
 * 0000000140A04659: add     r9, 8
 * 0000000140A0465D: add     edx, 0FFFFFFF8h
 * 0000000140A04660: sub     rbx, r14
 * 0000000140A04663: jnz     short loc_140A04650
 * 0000000140A04665: mov     r14, [rbp+0BE0h+var_C40]
 * 0000000140A04669: xor     r12d, r12d
 * 0000000140A0466C: lea     ebx, [r12+1]
 * 0000000140A04671: test    edx, edx
 * 0000000140A04673: jz      short loc_140A04693
 * 0000000140A04675: mov     r12d, 0FFFFFFFFh
 * 0000000140A0467B: movzx   eax, byte ptr [r9]
 * 0000000140A0467F: mov     ecx, r11d
 * 0000000140A04682: xor     r8, rax
 * 0000000140A04685: add     r9, rbx
 * 0000000140A04688: rol     r8, cl
 * 0000000140A0468B: add     edx, r12d
 * 0000000140A0468E: jnz     short loc_140A0467B
 * 0000000140A04690: xor     r12d, r12d
 * 0000000140A04693: mov     rax, r8
 * 0000000140A04696: jmp     short loc_140A0469B
 * 0000000140A04698: xor     r8d, eax
 * 0000000140A0469B: shr     rax, 1Fh
 * 0000000140A0469F: test    rax, rax
 * 0000000140A046A2: jnz     short loc_140A04698
 * 0000000140A046A4: btr     r8d, 1Fh
 * 0000000140A046A9: add     rdi, 4
 * 0000000140A046AD: mov     [r10+14h], r8d
 * 0000000140A046B1: add     r13, 8
 * 0000000140A046B5: add     [r14+828h], r15d
 * 0000000140A046BC: mov     eax, 6
 * 0000000140A046C1: mov     r10, [rbp+0BE0h+var_978]
 * 0000000140A046C8: add     r10, 30h ; '0'
 * 0000000140A046CC: sub     [rbp+0BE0h+var_C30], rbx
 * 0000000140A046D0: mov     [rbp+0BE0h+var_978], r10
 * 0000000140A046D7: jnz     loc_140A0453E
 * 0000000140A046DD: mov     rax, [rbp+0BE0h+var_B48]
 * 0000000140A046E4: mov     ecx, 2
 * 0000000140A046E9: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A046EE: mov     rsi, r14
 * 0000000140A046F1: mov     r8d, [rbp+0BE0h+var_C58]
 * 0000000140A046F5: mov     r9, r13
 * 0000000140A046F8: mov     rdx, [rbp+0BE0h+var_C10]
 * 0000000140A046FC: mov     dword ptr [rax], 2Ch ; ','
 * 0000000140A04702: mov     [rax+18h], r13
 * 0000000140A04706: or      [rax+20h], ecx
 * 0000000140A04709: lea     rax, [rbp+0BE0h+var_A7C]
 * 0000000140A04710: mov     [rsp+0CE0h+var_CA8], rax
 * 0000000140A04715: lea     rax, [rbp+0BE0h+var_B28]
 * 0000000140A0471C: mov     [rsp+0CE0h+var_CB0], rax
 * 0000000140A04721: lea     eax, [rcx+0Dh]
 * 0000000140A04724: mov     dword ptr [rsp+0CE0h+var_CB8], eax
 * 0000000140A04728: lea     rcx, [rbp+0BE0h+var_BB0]
 * 0000000140A0472C: mov     eax, [rbp+0BE0h+var_C38]
 * 0000000140A0472F: mov     dword ptr [rsp+0CE0h+BugCheckParameter4], eax
 * 0000000140A04733: mov     [rbp+0BE0h+var_BB0], r14
 * 0000000140A04737: mov     [rbp+0BE0h+var_BA8], r14
 * 0000000140A0473B: call    sub_140A0B098
 * 0000000140A04740: xor     r15d, r15d
 * 0000000140A04743: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0474A: test    eax, eax
 * 0000000140A0474C: jns     short loc_140A04758
 * 0000000140A0474E: mov     ecx, eax
 * 0000000140A04750: mov     [rbp+0BE0h+var_C18], eax
 * 0000000140A04753: jmp     loc_140A05C25
 * 0000000140A04758: mov     rsi, [rbp+0BE0h+var_BB0]
 * 0000000140A0475C: mov     rcx, [rbp+0BE0h+var_B48]
 * 0000000140A04763: mov     rax, rsi
 * 0000000140A04766: mov     r9d, [rbp+0BE0h+var_A7C]
 * 0000000140A0476D: sub     rax, r14
 * 0000000140A04770: sub     r9d, [rbp+0BE0h+var_B28]
 * 0000000140A04777: add     rcx, rax
 * 0000000140A0477A: mov     ebx, [rbp+0BE0h+var_B28]
 * 0000000140A04780: mov     [rbp+0BE0h+var_B48], rcx
 * 0000000140A04787: add     rbx, r13
 * 0000000140A0478A: mov     [rbp+0BE0h+var_BA8], rsi
 * 0000000140A0478E: lea     r12, [rcx+0C0h]
 * 0000000140A04795: mov     ecx, 30h ; '0'
 * 0000000140A0479A: mov     rax, r12
 * 0000000140A0479D: lea     edx, [rcx-2Ah]
 * 0000000140A047A0: lea     r8d, [rcx-2Fh]
 * 0000000140A047A4: mov     [rax], r15
 * 0000000140A047A7: add     ecx, 0FFFFFFF8h
 * 0000000140A047AA: add     rax, 8
 * 0000000140A047AE: sub     rdx, r8
 * 0000000140A047B1: jnz     short loc_140A047A4
 * 0000000140A047B3: mov     rdx, r8
 * 0000000140A047B6: test    ecx, ecx
 * 0000000140A047B8: jz      short loc_140A047CB
 * 0000000140A047BA: mov     r8d, 0FFFFFFFFh
 * 0000000140A047C0: mov     [rax], r15b
 * 0000000140A047C3: add     rax, rdx
 * 0000000140A047C6: add     ecx, r8d
 * 0000000140A047C9: jnz     short loc_140A047C0
 * 0000000140A047CB: mov     dword ptr [r12], 0Bh
 * 0000000140A047D3: mov     r10, rbx
 * 0000000140A047D6: mov     [r12+8], rbx
 * 0000000140A047DB: mov     rax, rbx
 * 0000000140A047DE: mov     [r12+10h], r9d
 * 0000000140A047E3: add     [rsi+828h], r9d
 * 0000000140A047EA: mov     r11d, [rsi+814h]
 * 0000000140A047F1: mov     r15, [rsi+818h]
 * 0000000140A047F8: mov     ecx, r9d
 * 0000000140A047FB: add     rcx, rbx
 * 0000000140A047FE: cmp     rbx, rcx
 * 0000000140A04801: jnb     short loc_140A04814
 * 0000000140A04803: mov     r8d, 40h ; '@'
 * 0000000140A04809: prefetchnta byte ptr [rax]
 * 0000000140A0480C: add     rax, r8
 * 0000000140A0480F: cmp     rax, rcx
 * 0000000140A04812: jb      short loc_140A04809
 * 0000000140A04814: mov     r14d, r9d
 * 0000000140A04817: mov     r8, r15
 * 0000000140A0481A: shr     r14d, 7
 * 0000000140A0481E: test    r14d, r14d
 * 0000000140A04821: jz      short loc_140A0489B
 * 0000000140A04823: mov     rdi, 7010008004002001h
 * 0000000140A0482D: mov     edx, 8
 * 0000000140A04832: lea     r13d, [rdx-7]
 * 0000000140A04836: mov     rax, [r10]
 * 0000000140A04839: mov     ecx, r11d
 * 0000000140A0483C: xor     rax, r8
 * 0000000140A0483F: mov     r8, [r10+8]
 * 0000000140A04843: rol     rax, cl
 * 0000000140A04846: add     r10, 10h
 * 0000000140A0484A: xor     r8, rax
 * 0000000140A0484D: rol     r8, cl
 * 0000000140A04850: sub     rdx, r13
 * 0000000140A04853: jnz     short loc_140A04836
 * 0000000140A04855: mov     rcx, r10
 * 0000000140A04858: sub     rcx, rbx
 * 0000000140A0485B: xor     rcx, r15
 * 0000000140A0485E: mov     rax, rcx
 * 0000000140A04861: rol     rax, 11h
 * 0000000140A04865: xor     rcx, rax
 * 0000000140A04868: mov     rax, rdi
 * 0000000140A0486B: mul     rcx
 * 0000000140A0486E: mov     [rbp+0BE0h+var_510], rdx
 * 0000000140A04875: xor     edx, eax
 * 0000000140A04877: xor     r11d, edx
 * 0000000140A0487A: mov     eax, 0FFFFFFFFh
 * 0000000140A0487F: and     r11d, 3Fh
 * 0000000140A04883: mov     rdx, r13
 * 0000000140A04886: cmovz   r11d, edx
 * 0000000140A0488A: add     r14d, eax
 * 0000000140A0488D: jnz     short loc_140A0482D
 * 0000000140A0488F: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A04894: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0489B: and     r9d, 7Fh
 * 0000000140A0489F: cmp     r9d, 8
 * 0000000140A048A3: jb      short loc_140A048D2
 * 0000000140A048A5: mov     edx, r9d
 * 0000000140A048A8: mov     r13d, 1
 * 0000000140A048AE: shr     rdx, 3
 * 0000000140A048B2: xor     r8, [r10]
 * 0000000140A048B5: mov     ecx, r11d
 * 0000000140A048B8: rol     r8, cl
 * 0000000140A048BB: add     r10, 8
 * 0000000140A048BF: add     r9d, 0FFFFFFF8h
 * 0000000140A048C3: sub     rdx, r13
 * 0000000140A048C6: jnz     short loc_140A048B2
 * 0000000140A048C8: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A048CD: mov     edx, 1
 * 0000000140A048D2: xor     r15d, r15d
 * 0000000140A048D5: test    r9d, r9d
 * 0000000140A048D8: jz      short loc_140A048F8
 * 0000000140A048DA: mov     r15d, 0FFFFFFFFh
 * 0000000140A048E0: movzx   eax, byte ptr [r10]
 * 0000000140A048E4: mov     ecx, r11d
 * 0000000140A048E7: xor     r8, rax
 * 0000000140A048EA: add     r10, rdx
 * 0000000140A048ED: rol     r8, cl
 * 0000000140A048F0: add     r9d, r15d
 * 0000000140A048F3: jnz     short loc_140A048E0
 * 0000000140A048F5: xor     r15d, r15d
 * 0000000140A048F8: mov     rax, r8
 * 0000000140A048FB: jmp     short loc_140A04900
 * 0000000140A048FD: xor     r8d, eax
 * 0000000140A04900: shr     rax, 1Fh
 * 0000000140A04904: test    rax, rax
 * 0000000140A04907: jnz     short loc_140A048FD
 * 0000000140A04909: btr     r8d, 1Fh
 * 0000000140A0490E: mov     [r12+14h], r8d
 * 0000000140A04913: mov     r12d, 1
 * 0000000140A04919: mov     rax, [rbp+0BE0h+var_B48]
 * 0000000140A04920: mov     dword ptr [rax+0F0h], 30h ; '0'
 * 0000000140A0492A: cmp     [rax+100h], r15d
 * 0000000140A04931: jz      short loc_140A0493A
 * 0000000140A04933: or      [rax+108h], r12d
 * 0000000140A0493A: mov     rax, [rbp+0BE0h+var_B48]
 * 0000000140A04941: add     rax, 60h ; '`'
 * 0000000140A04945: mov     [rbp+0BE0h+var_BA8], rsi
 * 0000000140A04949: mov     [rbp+0BE0h+var_AA0], rax
 * 0000000140A04950: jnz     loc_140A04BF3
 * 0000000140A04956: mov     r14d, [rsi+7E4h]
 * 0000000140A0495D: mov     r8d, [rsi+924h]
 * 0000000140A04964: lea     eax, [r14+30h]
 * 0000000140A04968: cmp     eax, [rsi+0A1Ch]
 * 0000000140A0496E: jbe     loc_140A04A57
 * 0000000140A04974: mov     edx, eax
 * 0000000140A04976: mov     rcx, rsi
 * 0000000140A04979: call    sub_140A0BB30
 * 0000000140A0497E: mov     rbx, rax
 * 0000000140A04981: test    rax, rax
 * 0000000140A04984: jz      loc_140A04A44
 * 0000000140A0498A: mov     ecx, [rsi+990h]
 * 0000000140A04990: test    cl, 4
 * 0000000140A04993: jnz     loc_140A04A3B
 * 0000000140A04999: mov     eax, [rsi+7E4h]
 * 0000000140A0499F: and     ecx, 20000000h
 * 0000000140A049A5: mov     r8, [rsi+7C8h]
 * 0000000140A049AC: neg     ecx
 * 0000000140A049AE: sbb     edx, edx
 * 0000000140A049B0: and     edx, [rsi+924h]
 * 0000000140A049B6: cmp     eax, 8
 * 0000000140A049B9: jb      short loc_140A049D0
 * 0000000140A049BB: mov     ecx, eax
 * 0000000140A049BD: shr     rcx, 3
 * 0000000140A049C1: mov     [rsi], r15
 * 0000000140A049C4: add     eax, 0FFFFFFF8h
 * 0000000140A049C7: add     rsi, 8
 * 0000000140A049CB: sub     rcx, r12
 * 0000000140A049CE: jnz     short loc_140A049C1
 * 0000000140A049D0: test    eax, eax
 * 0000000140A049D2: jz      short loc_140A049E3
 * 0000000140A049D4: mov     ecx, 0FFFFFFFFh
 * 0000000140A049D9: mov     [rsi], r15b
 * 0000000140A049DC: add     rsi, r12
 * 0000000140A049DF: add     eax, ecx
 * 0000000140A049E1: jnz     short loc_140A049D9
 * 0000000140A049E3: mov     esi, [rbx+924h]
 * 0000000140A049E9: mov     [rbx+924h], edx
 * 0000000140A049EF: cmp     edx, 3
 * 0000000140A049F2: jz      short loc_140A04A26
 * 0000000140A049F4: test    dword ptr [rbx+990h], 10000000h
 * 0000000140A049FE: mov     ecx, r15d
 * 0000000140A04A01: cmovz   ecx, edx
 * 0000000140A04A04: test    ecx, ecx
 * 0000000140A04A06: jz      short loc_140A04A1D
 * 0000000140A04A08: mov     rax, [rbx+228h]
 * 0000000140A04A0F: lea     rcx, [r8-8]
 * 0000000140A04A13: mov     rdx, [rcx]
 * 0000000140A04A16: call    KeGuardDispatchICall
 * 0000000140A04A1B: jmp     short loc_140A04A35
 * 0000000140A04A1D: mov     rax, [rbx+100h]
 * 0000000140A04A24: jmp     short loc_140A04A2D
 * 0000000140A04A26: mov     rax, [rbx+368h]
 * 0000000140A04A2D: mov     rcx, r8
 * 0000000140A04A30: call    KeGuardDispatchICall
 * 0000000140A04A35: mov     [rbx+924h], esi
 * 0000000140A04A3B: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140A04A42: jmp     short loc_140A04A60
 * 0000000140A04A44: mov     [rbp+0BE0h+var_BB0], r15
 * 0000000140A04A48: mov     rbx, rsi
 * 0000000140A04A4B: mov     [rbp+0BE0h+var_C18], 0C000009Ah
 * 0000000140A04A52: jmp     loc_140A0402E
 * 0000000140A04A57: mov     rbx, rsi
 * 0000000140A04A5A: mov     [rsi+7E4h], eax
 * 0000000140A04A60: add     [rbx+80Ch], r12d
 * 0000000140A04A67: lea     rsi, [rbx+r14]
 * 0000000140A04A6B: mov     ecx, 30h ; '0'
 * 0000000140A04A70: mov     [rbp+0BE0h+var_8B0], rsi
 * 0000000140A04A77: mov     rax, rsi
 * 0000000140A04A7A: lea     edx, [rcx-2Ah]
 * 0000000140A04A7D: mov     [rax], r15
 * 0000000140A04A80: add     ecx, 0FFFFFFF8h
 * 0000000140A04A83: add     rax, 8
 * 0000000140A04A87: sub     rdx, r12
 * 0000000140A04A8A: jnz     short loc_140A04A7D
 * 0000000140A04A8C: test    ecx, ecx
 * 0000000140A04A8E: jz      short loc_140A04A9F
 * 0000000140A04A90: mov     edx, 0FFFFFFFFh
 * 0000000140A04A95: mov     [rax], r15b
 * 0000000140A04A98: add     rax, r12
 * 0000000140A04A9B: add     ecx, edx
 * 0000000140A04A9D: jnz     short loc_140A04A95
 * 0000000140A04A9F: mov     r12, [rbp+0BE0h+var_BD8]
 * 0000000140A04AA3: mov     r15d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A04AAA: mov     r9, r12
 * 0000000140A04AAD: mov     dword ptr [rsi], 0Eh
 * 0000000140A04AB3: mov     [rsi+8], r12
 * 0000000140A04AB7: mov     [rsi+10h], r15d
 * 0000000140A04ABB: add     [rbx+828h], r15d
 * 0000000140A04AC2: lea     rcx, [r12+r15]
 * 0000000140A04AC6: mov     r10d, [rbx+814h]
 * 0000000140A04ACD: mov     r14, [rbx+818h]
 * 0000000140A04AD4: cmp     r12, rcx
 * 0000000140A04AD7: jnb     short loc_140A04AEC
 * 0000000140A04AD9: mov     rax, r12
 * 0000000140A04ADC: mov     edx, 40h ; '@'
 * 0000000140A04AE1: prefetchnta byte ptr [rax]
 * 0000000140A04AE4: add     rax, rdx
 * 0000000140A04AE7: cmp     rax, rcx
 * 0000000140A04AEA: jb      short loc_140A04AE1
 * 0000000140A04AEC: mov     r11d, r15d
 * 0000000140A04AEF: mov     r8, r14
 * 0000000140A04AF2: shr     r11d, 7
 * 0000000140A04AF6: test    r11d, r11d
 * 0000000140A04AF9: jz      short loc_140A04B74
 * 0000000140A04AFB: mov     rdi, 7010008004002001h
 * 0000000140A04B05: mov     r13d, 1
 * 0000000140A04B0B: mov     r15d, 0FFFFFFFFh
 * 0000000140A04B11: mov     eax, 8
 * 0000000140A04B16: xor     r8, [r9]
 * 0000000140A04B19: mov     ecx, r10d
 * 0000000140A04B1C: rol     r8, cl
 * 0000000140A04B1F: xor     r8, [r9+8]
 * 0000000140A04B23: add     r9, 10h
 * 0000000140A04B27: rol     r8, cl
 * 0000000140A04B2A: sub     rax, r13
 * 0000000140A04B2D: jnz     short loc_140A04B16
 * 0000000140A04B2F: mov     rcx, r9
 * 0000000140A04B32: sub     rcx, r12
 * 0000000140A04B35: xor     rcx, r14
 * 0000000140A04B38: mov     rax, rcx
 * 0000000140A04B3B: rol     rax, 11h
 * 0000000140A04B3F: xor     rcx, rax
 * 0000000140A04B42: mov     rax, rdi
 * 0000000140A04B45: mul     rcx
 * 0000000140A04B48: mov     [rbp+0BE0h+var_508], rdx
 * 0000000140A04B4F: xor     edx, eax
 * 0000000140A04B51: xor     r10d, edx
 * 0000000140A04B54: and     r10d, 3Fh
 * 0000000140A04B58: cmovz   r10d, r13d
 * 0000000140A04B5C: add     r11d, r15d
 * 0000000140A04B5F: jnz     short loc_140A04B11
 * 0000000140A04B61: mov     r15d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A04B68: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A04B6F: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A04B74: mov     edx, r15d
 * 0000000140A04B77: mov     r14d, 1
 * 0000000140A04B7D: and     edx, 7Fh
 * 0000000140A04B80: cmp     edx, 8
 * 0000000140A04B83: jb      short loc_140A04BA0
 * 0000000140A04B85: mov     eax, edx
 * 0000000140A04B87: shr     rax, 3
 * 0000000140A04B8B: xor     r8, [r9]
 * 0000000140A04B8E: mov     ecx, r10d
 * 0000000140A04B91: rol     r8, cl
 * 0000000140A04B94: add     r9, 8
 * 0000000140A04B98: add     edx, 0FFFFFFF8h
 * 0000000140A04B9B: sub     rax, r14
 * 0000000140A04B9E: jnz     short loc_140A04B8B
 * 0000000140A04BA0: test    edx, edx
 * 0000000140A04BA2: jz      short loc_140A04BBF
 * 0000000140A04BA4: mov     r11d, 0FFFFFFFFh
 * 0000000140A04BAA: movzx   eax, byte ptr [r9]
 * 0000000140A04BAE: mov     ecx, r10d
 * 0000000140A04BB1: xor     r8, rax
 * 0000000140A04BB4: add     r9, r14
 * 0000000140A04BB7: rol     r8, cl
 * 0000000140A04BBA: add     edx, r11d
 * 0000000140A04BBD: jnz     short loc_140A04BAA
 * 0000000140A04BBF: mov     rax, r8
 * 0000000140A04BC2: jmp     short loc_140A04BC7
 * 0000000140A04BC4: xor     r8d, eax
 * 0000000140A04BC7: shr     rax, 1Fh
 * 0000000140A04BCB: test    rax, rax
 * 0000000140A04BCE: jnz     short loc_140A04BC4
 * 0000000140A04BD0: btr     r8d, 1Fh
 * 0000000140A04BD5: mov     [rsi+14h], r8d
 * 0000000140A04BD9: mov     rsi, rbx
 * 0000000140A04BDC: mov     rax, [rbp+0BE0h+var_8B0]
 * 0000000140A04BE3: mov     [rbp+0BE0h+var_AA0], rax
 * 0000000140A04BEA: add     [rbx+828h], r15d
 * 0000000140A04BF1: jmp     short loc_140A04C04
 * 0000000140A04BF3: mov     r15d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A04BFA: mov     r12, [rbp+0BE0h+var_BD8]
 * 0000000140A04BFE: mov     dword ptr [rax], 0Eh
 * 0000000140A04C04: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A04C0E: jz      short loc_140A04C2E
 * 0000000140A04C10: test    r15d, r15d
 * 0000000140A04C13: jz      short loc_140A04C2E
 * 0000000140A04C15: mov     r9, [rbp+0BE0h+var_AA0]
 * 0000000140A04C1C: mov     r8d, r15d
 * 0000000140A04C1F: add     r9, 1Ch
 * 0000000140A04C23: mov     rdx, r12
 * 0000000140A04C26: mov     rcx, rsi
 * 0000000140A04C29: call    sub_1403E6E8C
 * 0000000140A04C2E: mov     rax, [rbp+0BE0h+var_AA0]
 * 0000000140A04C35: xor     r15d, r15d
 * 0000000140A04C38: mov     [rbp+0BE0h+var_BA8], rsi
 * 0000000140A04C3C: mov     [rax+18h], r15d
 * 0000000140A04C40: lea     ecx, [r15+1]
 * 0000000140A04C44: mov     rax, [rbp+0BE0h+var_AA0]
 * 0000000140A04C4B: or      [rax+18h], ecx
 * 0000000140A04C4E: mov     rbx, [rbp+0BE0h+var_B48]
 * 0000000140A04C55: mov     dword ptr [rbx+90h], 23h ; '#'
 * 0000000140A04C5F: or      [rbx+0B8h], ecx
 * 0000000140A04C65: cmp     dword ptr [rbx+0A0h], 94h
 * 0000000140A04C6F: jb      short loc_140A04CE5
 * 0000000140A04C71: mov     rax, [rsi+1F8h]
 * 0000000140A04C78: mov     rcx, r13
 * 0000000140A04C7B: mov     r14, [rbx+98h]
 * 0000000140A04C82: call    KeGuardDispatchICall
 * 0000000140A04C87: test    rax, rax
 * 0000000140A04C8A: jz      loc_140A04A44
 * 0000000140A04C90: mov     ecx, [rax+50h]
 * 0000000140A04C93: lea     eax, [r15+2]
 * 0000000140A04C97: or      [rbx+0B8h], eax
 * 0000000140A04C9D: add     rcx, r13
 * 0000000140A04CA0: mov     rax, [r14+70h]
 * 0000000140A04CA4: cmp     rax, r13
 * 0000000140A04CA7: jb      short loc_140A04CBF
 * 0000000140A04CA9: cmp     rax, rcx
 * 0000000140A04CAC: jnb     short loc_140A04CBF
 * 0000000140A04CAE: mov     rax, [rax]
 * 0000000140A04CB1: mov     [rbx+0A8h], rax
 * 0000000140A04CB8: or      dword ptr [rbx+0B8h], 4
 * 0000000140A04CBF: mov     rax, [r14+78h]
 * 0000000140A04CC3: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A04CC8: cmp     rax, r14
 * 0000000140A04CCB: jb      short loc_140A04CEA
 * 0000000140A04CCD: cmp     rax, rcx
 * 0000000140A04CD0: jnb     short loc_140A04CEA
 * 0000000140A04CD2: mov     rax, [rax]
 * 0000000140A04CD5: mov     [rbx+0B0h], rax
 * 0000000140A04CDC: or      dword ptr [rbx+0B8h], 8
 * 0000000140A04CE3: jmp     short loc_140A04CEA
 * 0000000140A04CE5: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A04CEA: test    dword ptr [rsi+990h], 400000h
 * 0000000140A04CF4: mov     [rbp+0BE0h+var_BB0], rsi
 * 0000000140A04CF8: jz      loc_140A05C1B
 * 0000000140A04CFE: mov     rax, [rsi+1F8h]
 * 0000000140A04D05: mov     rcx, r14
 * 0000000140A04D08: call    KeGuardDispatchICall
 * 0000000140A04D0D: xor     r11d, r11d
 * 0000000140A04D10: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A04D15: mov     r15, rax
 * 0000000140A04D18: test    rax, rax
 * 0000000140A04D1B: jnz     short loc_140A04D2A
 * 0000000140A04D1D: mov     ecx, 0C000007Bh
 * 0000000140A04D22: xor     r15d, r15d
 * 0000000140A04D25: jmp     loc_140A05C22
 * 0000000140A04D2A: movzx   r10d, word ptr [r15+6]
 * 0000000140A04D2F: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A04D39: mov     r12d, [rbp+0BE0h+var_C58]
 * 0000000140A04D3D: mul     r12
 * 0000000140A04D40: mov     word ptr [rbp+0BE0h+arg_8], r10w
 * 0000000140A04D48: mov     r9, rdx
 * 0000000140A04D4B: shr     r9, 3
 * 0000000140A04D4F: mov     [rbp+0BE0h+var_C40], r9
 * 0000000140A04D53: test    r10w, r10w
 * 0000000140A04D57: jnz     short loc_140A04DC0
 * 0000000140A04D59: test    dword ptr [rsi+990h], 200000h
 * 0000000140A04D63: jz      loc_140A08BC6
 * 0000000140A04D69: xor     r15d, r15d
 * 0000000140A04D6C: cmp     [rsi+8F8h], r15d
 * 0000000140A04D73: jnz     short loc_140A04DB6
 * 0000000140A04D75: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A04D7F: add     rax, rsi
 * 0000000140A04D82: mov     [rsi+900h], rax
 * 0000000140A04D89: lea     eax, [r15+1]
 * 0000000140A04D8D: mov     [rsi+908h], r15
 * 0000000140A04D94: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140A04D9F: mov     [rsi+918h], r14
 * 0000000140A04DA6: mov     [rsi+8F8h], eax
 * 0000000140A04DAC: xor     edx, edx
 * 0000000140A04DAE: mov     rcx, rsi
 * 0000000140A04DB1: call    $$b8
 * 0000000140A04DB6: mov     ecx, 0C000007Bh
 * 0000000140A04DBB: jmp     loc_140A05C22
 * 0000000140A04DC0: mov     rdx, [rbp+0BE0h+var_C10]
 * 0000000140A04DC4: lea     r8, [r15+18h]
 * 0000000140A04DC8: mov     eax, r9d
 * 0000000140A04DCB: mov     ecx, r11d
 * 0000000140A04DCE: mov     rbx, rdx
 * 0000000140A04DD1: mov     [rsp+0CE0h+var_C78], ecx
 * 0000000140A04DD5: lea     r13, [rax+rax*2]
 * 0000000140A04DD9: shl     r13, 2
 * 0000000140A04DDD: mov     [rbp+0BE0h+var_C30], r13
 * 0000000140A04DE1: lea     rax, [rdx+r13]
 * 0000000140A04DE5: mov     [rbp+0BE0h+var_C48], rax
 * 0000000140A04DE9: movzx   eax, word ptr [r15+14h]
 * 0000000140A04DEE: mov     r11, [rbp+0BE0h+var_C48]
 * 0000000140A04DF2: add     r8, rax
 * 0000000140A04DF5: movzx   eax, r10w
 * 0000000140A04DF9: mov     [rbp+0BE0h+var_C50], r8
 * 0000000140A04DFD: test    eax, eax
 * 0000000140A04DFF: jz      loc_140A05030
 * 0000000140A04E05: xor     r9d, r9d
 * 0000000140A04E08: lea     r12, [r8+8]
 * 0000000140A04E0C: lea     r13d, [r9+1]
 * 0000000140A04E10: mov     r15d, [r12+8]
 * 0000000140A04E15: mov     eax, [r12]
 * 0000000140A04E19: cmp     r15d, eax
 * 0000000140A04E1C: mov     edx, [r12+4]
 * 0000000140A04E21: cmovbe  r15d, eax
 * 0000000140A04E25: mov     [rbp+0BE0h+var_C28], edx
 * 0000000140A04E28: add     r15d, edx
 * 0000000140A04E2B: test    ecx, ecx
 * 0000000140A04E2D: jz      short loc_140A04E45
 * 0000000140A04E2F: lea     eax, [rcx-1]
 * 0000000140A04E32: lea     rax, [rax+rax*4]
 * 0000000140A04E36: cmp     r15d, [r8+rax*8+0Ch]
 * 0000000140A04E3B: jb      loc_140A0504E
 * 0000000140A04E41: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A04E45: cmp     rbx, r11
 * 0000000140A04E48: jz      loc_140A05008
 * 0000000140A04E4E: mov     ecx, [rbx]
 * 0000000140A04E50: mov     eax, [rbx+4]
 * 0000000140A04E53: cmp     ecx, r15d
 * 0000000140A04E56: jnb     loc_140A04FEE
 * 0000000140A04E5C: cmp     eax, edx
 * 0000000140A04E5E: jbe     loc_140A04FEE
 * 0000000140A04E64: cmp     ecx, edx
 * 0000000140A04E66: jb      loc_140A050A7
 * 0000000140A04E6C: cmp     eax, r15d
 * 0000000140A04E6F: ja      loc_140A050A7
 * 0000000140A04E75: mov     eax, [rbx+8]
 * 0000000140A04E78: mov     ecx, 1
 * 0000000140A04E7D: test    cl, al
 * 0000000140A04E7F: jnz     short loc_140A04E8D
 * 0000000140A04E81: mov     al, [rax+r14]
 * 0000000140A04E85: test    al, 20h
 * 0000000140A04E87: jz      loc_140A04FE0
 * 0000000140A04E8D: mov     eax, [r12]
 * 0000000140A04E91: mov     ecx, [r12+4]
 * 0000000140A04E96: mov     r14d, [r12+8]
 * 0000000140A04E9B: cmp     r14d, eax
 * 0000000140A04E9E: mov     rdx, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A04EA3: cmovbe  r14d, eax
 * 0000000140A04EA7: mov     [rbp+0BE0h+var_C38], ecx
 * 0000000140A04EAA: mov     rax, [rsi+418h]
 * 0000000140A04EB1: add     r14d, ecx
 * 0000000140A04EB4: mov     rcx, rbx
 * 0000000140A04EB7: call    KeGuardDispatchICall
 * 0000000140A04EBC: mov     r13, rax
 * 0000000140A04EBF: mov     eax, [rbp+0BE0h+var_C38]
 * 0000000140A04EC2: cmp     [r13+0], eax
 * 0000000140A04EC6: jb      short loc_140A04ECE
 * 0000000140A04EC8: cmp     [r13+4], r14d
 * 0000000140A04ECC: jbe     short loc_140A04F3A
 * 0000000140A04ECE: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A04ED3: mov     edx, r13d
 * 0000000140A04ED6: sub     edx, r8d
 * 0000000140A04ED9: mov     eax, 80000000h
 * 0000000140A04EDE: or      edx, eax
 * 0000000140A04EE0: test    dword ptr [rsi+990h], 200000h
 * 0000000140A04EEA: jz      loc_140A08C82
 * 0000000140A04EF0: xor     ecx, ecx
 * 0000000140A04EF2: cmp     [rsi+8F8h], ecx
 * 0000000140A04EF8: jnz     short loc_140A04F3A
 * 0000000140A04EFA: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A04F04: xor     edx, edx
 * 0000000140A04F06: add     rax, rsi
 * 0000000140A04F09: mov     [rsi+900h], rax
 * 0000000140A04F10: lea     eax, [rcx+1]
 * 0000000140A04F13: mov     [rsi+908h], rcx
 * 0000000140A04F1A: mov     rcx, rsi
 * 0000000140A04F1D: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140A04F28: mov     [rsi+918h], r8
 * 0000000140A04F2F: mov     [rsi+8F8h], eax
 * 0000000140A04F35: call    $$b8
 * 0000000140A04F3A: mov     r8d, [r13+0]
 * 0000000140A04F3E: mov     rcx, r13
 * 0000000140A04F41: add     r8, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A04F46: mov     rax, [rsi+420h]
 * 0000000140A04F4D: mov     rdx, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A04F52: call    KeGuardDispatchICall
 * 0000000140A04F57: mov     rdx, rax
 * 0000000140A04F5A: mov     eax, [rbp+0BE0h+var_C38]
 * 0000000140A04F5D: cmp     [rdx], eax
 * 0000000140A04F5F: jb      short loc_140A04F67
 * 0000000140A04F61: cmp     [rdx+4], r14d
 * 0000000140A04F65: jbe     short loc_140A04FD5
 * 0000000140A04F67: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A04F6C: mov     eax, 80000000h
 * 0000000140A04F71: sub     edx, r14d
 * 0000000140A04F74: or      edx, eax
 * 0000000140A04F76: test    dword ptr [rsi+990h], 200000h
 * 0000000140A04F80: jz      loc_140A08C53
 * 0000000140A04F86: xor     r9d, r9d
 * 0000000140A04F89: cmp     [rsi+8F8h], r9d
 * 0000000140A04F90: jnz     short loc_140A04FDD
 * 0000000140A04F92: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A04F9C: xor     edx, edx
 * 0000000140A04F9E: add     rax, rsi
 * 0000000140A04FA1: mov     rcx, rsi
 * 0000000140A04FA4: mov     [rsi+900h], rax
 * 0000000140A04FAB: lea     eax, [r9+1]
 * 0000000140A04FAF: mov     [rsi+908h], r9
 * 0000000140A04FB6: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140A04FC1: mov     [rsi+918h], r14
 * 0000000140A04FC8: mov     [rsi+8F8h], eax
 * 0000000140A04FCE: call    $$b8
 * 0000000140A04FD3: jmp     short loc_140A04FDA
 * 0000000140A04FD5: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A04FDA: xor     r9d, r9d
 * 0000000140A04FDD: mov     edx, [rbp+0BE0h+var_C28]
 * 0000000140A04FE0: add     rbx, 0Ch
 * 0000000140A04FE4: cmp     rbx, [rbp+0BE0h+var_C48]
 * 0000000140A04FE8: jnz     loc_140A04E4E
 * 0000000140A04FEE: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A04FF2: mov     r13d, 1
 * 0000000140A04FF8: movzx   r10d, word ptr [rbp+0BE0h+arg_8]
 * 0000000140A05000: mov     r8, [rbp+0BE0h+var_C50]
 * 0000000140A05004: mov     r11, [rbp+0BE0h+var_C48]
 * 0000000140A05008: add     ecx, r13d
 * 0000000140A0500B: movzx   eax, r10w
 * 0000000140A0500F: add     r12, 28h ; '('
 * 0000000140A05013: mov     [rsp+0CE0h+var_C78], ecx
 * 0000000140A05017: cmp     ecx, eax
 * 0000000140A05019: jb      loc_140A04E10
 * 0000000140A0501F: mov     r9, [rbp+0BE0h+var_C40]
 * 0000000140A05023: mov     r15, [rsp+0CE0h+var_C70]
 * 0000000140A05028: mov     r13, [rbp+0BE0h+var_C30]
 * 0000000140A0502C: mov     r12d, [rbp+0BE0h+var_C58]
 * 0000000140A05030: cmp     rbx, r11
 * 0000000140A05033: jz      loc_140A050BC
 * 0000000140A05039: test    dword ptr [rsi+990h], 200000h
 * 0000000140A05043: jz      loc_140A08BF4
 * 0000000140A05049: jmp     loc_140A04D69
 * 0000000140A0504E: test    dword ptr [rsi+990h], 200000h
 * 0000000140A05058: jz      loc_140A08C24
 * 0000000140A0505E: xor     r15d, r15d
 * 0000000140A05061: cmp     [rsi+8F8h], r15d
 * 0000000140A05068: jnz     loc_140A04DB6
 * 0000000140A0506E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A05078: add     rax, rsi
 * 0000000140A0507B: mov     [rsi+900h], rax
 * 0000000140A05082: mov     [rsi+908h], r15
 * 0000000140A05089: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140A05094: mov     [rsi+918h], r14
 * 0000000140A0509B: mov     [rsi+8F8h], r13d
 * 0000000140A050A2: jmp     loc_140A04DAC
 * 0000000140A050A7: test    dword ptr [rsi+990h], 200000h
 * 0000000140A050B1: jz      loc_140A08CAE
 * 0000000140A050B7: jmp     loc_140A04D69
 * 0000000140A050BC: xor     r11d, r11d
 * 0000000140A050BF: test    r9d, r9d
 * 0000000140A050C2: jz      short loc_140A050CD
 * 0000000140A050C4: lea     ecx, [r9+6]
 * 0000000140A050C8: and     ecx, 0FFFFFFF8h
 * 0000000140A050CB: jmp     short loc_140A050D0
 * 0000000140A050CD: mov     ecx, r11d
 * 0000000140A050D0: mov     r14d, [rsi+7E4h]
 * 0000000140A050D7: lea     eax, [rax+rax*2]
 * 0000000140A050DA: mov     r8d, [rsi+924h]
 * 0000000140A050E1: lea     eax, [rax+6]
 * 0000000140A050E4: lea     eax, [rcx+rax*8]
 * 0000000140A050E7: add     eax, r14d
 * 0000000140A050EA: cmp     eax, [rsi+0A1Ch]
 * 0000000140A050F0: jbe     loc_140A051EA
 * 0000000140A050F6: mov     edx, eax
 * 0000000140A050F8: mov     rcx, rsi
 * 0000000140A050FB: call    sub_140A0BB30
 * 0000000140A05100: xor     r11d, r11d
 * 0000000140A05103: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A05107: mov     rbx, rax
 * 0000000140A0510A: test    rax, rax
 * 0000000140A0510D: jz      loc_140A051E0
 * 0000000140A05113: mov     ecx, [rsi+990h]
 * 0000000140A05119: test    cl, 4
 * 0000000140A0511C: jnz     loc_140A051CB
 * 0000000140A05122: mov     eax, [rsi+7E4h]
 * 0000000140A05128: lea     r9d, [r11+1]
 * 0000000140A0512C: mov     r8, [rsi+7C8h]
 * 0000000140A05133: and     ecx, 20000000h
 * 0000000140A05139: neg     ecx
 * 0000000140A0513B: sbb     edx, edx
 * 0000000140A0513D: and     edx, [rsi+924h]
 * 0000000140A05143: cmp     eax, 8
 * 0000000140A05146: jb      short loc_140A0515D
 * 0000000140A05148: mov     ecx, eax
 * 0000000140A0514A: shr     rcx, 3
 * 0000000140A0514E: mov     [rsi], r11
 * 0000000140A05151: add     eax, 0FFFFFFF8h
 * 0000000140A05154: add     rsi, 8
 * 0000000140A05158: sub     rcx, r9
 * 0000000140A0515B: jnz     short loc_140A0514E
 * 0000000140A0515D: test    eax, eax
 * 0000000140A0515F: jz      short loc_140A05170
 * 0000000140A05161: mov     ecx, 0FFFFFFFFh
 * 0000000140A05166: mov     [rsi], r11b
 * 0000000140A05169: add     rsi, r9
 * 0000000140A0516C: add     eax, ecx
 * 0000000140A0516E: jnz     short loc_140A05166
 * 0000000140A05170: mov     esi, [rbx+924h]
 * 0000000140A05176: mov     [rbx+924h], edx
 * 0000000140A0517C: cmp     edx, 3
 * 0000000140A0517F: jz      short loc_140A051B3
 * 0000000140A05181: test    dword ptr [rbx+990h], 10000000h
 * 0000000140A0518B: mov     ecx, r11d
 * 0000000140A0518E: cmovz   ecx, edx
 * 0000000140A05191: test    ecx, ecx
 * 0000000140A05193: jz      short loc_140A051AA
 * 0000000140A05195: mov     rax, [rbx+228h]
 * 0000000140A0519C: lea     rcx, [r8-8]
 * 0000000140A051A0: mov     rdx, [rcx]
 * 0000000140A051A3: call    KeGuardDispatchICall
 * 0000000140A051A8: jmp     short loc_140A051C2
 * 0000000140A051AA: mov     rax, [rbx+100h]
 * 0000000140A051B1: jmp     short loc_140A051BA
 * 0000000140A051B3: mov     rax, [rbx+368h]
 * 0000000140A051BA: mov     rcx, r8
 * 0000000140A051BD: call    KeGuardDispatchICall
 * 0000000140A051C2: mov     [rbx+924h], esi
 * 0000000140A051C8: xor     r11d, r11d
 * 0000000140A051CB: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140A051D2: mov     r9, [rbp+0BE0h+var_C40]
 * 0000000140A051D6: movzx   r10d, word ptr [rbp+0BE0h+arg_8]
 * 0000000140A051DE: jmp     short loc_140A051F7
 * 0000000140A051E0: mov     ecx, 0C000009Ah
 * 0000000140A051E5: jmp     loc_140A04D22
 * 0000000140A051EA: mov     rbx, rsi
 * 0000000140A051ED: mov     [rsi+7E4h], eax
 * 0000000140A051F3: mov     [rbp+0BE0h+var_C30], rbx
 * 0000000140A051F7: mov     esi, 1
 * 0000000140A051FC: lea     rcx, [rbx+r14]
 * 0000000140A05200: add     [rbx+80Ch], esi
 * 0000000140A05206: mov     rax, rcx
 * 0000000140A05209: mov     [rbp+0BE0h+var_8A8], rcx
 * 0000000140A05210: lea     edx, [rsi+2Fh]
 * 0000000140A05213: lea     r8d, [rsi+5]
 * 0000000140A05217: mov     [rax], r11
 * 0000000140A0521A: add     edx, 0FFFFFFF8h
 * 0000000140A0521D: add     rax, 8
 * 0000000140A05221: sub     r8, rsi
 * 0000000140A05224: jnz     short loc_140A05217
 * 0000000140A05226: test    edx, edx
 * 0000000140A05228: jz      short loc_140A0523B
 * 0000000140A0522A: mov     r8d, 0FFFFFFFFh
 * 0000000140A05230: mov     [rax], r11b
 * 0000000140A05233: add     rax, rsi
 * 0000000140A05236: add     edx, r8d
 * 0000000140A05239: jnz     short loc_140A05230
 * 0000000140A0523B: mov     rax, [rbp+0BE0h+var_C10]
 * 0000000140A0523F: mov     dword ptr [rcx], 1Eh
 * 0000000140A05245: mov     [rcx+8], rax
 * 0000000140A05249: mov     [rcx+10h], r11d
 * 0000000140A0524D: mov     rdx, [rbx+818h]
 * 0000000140A05254: mov     rax, rdx
 * 0000000140A05257: jmp     short loc_140A0525B
 * 0000000140A05259: xor     edx, eax
 * 0000000140A0525B: shr     rax, 1Fh
 * 0000000140A0525F: test    rax, rax
 * 0000000140A05262: jnz     short loc_140A05259
 * 0000000140A05264: mov     r8, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A05269: btr     edx, 1Fh
 * 0000000140A0526D: mov     [rcx+14h], edx
 * 0000000140A05270: mov     rsi, rbx
 * 0000000140A05273: mov     rax, [rbp+0BE0h+var_8A8]
 * 0000000140A0527A: mov     [rbp+0BE0h+var_AF0], rax
 * 0000000140A05281: mov     [rbp+0BE0h+var_BB0], rbx
 * 0000000140A05285: mov     [rax+18h], r8
 * 0000000140A05289: mov     ecx, [r15+50h]
 * 0000000140A0528D: xor     r15d, r15d
 * 0000000140A05290: mov     rax, [rbp+0BE0h+var_AF0]
 * 0000000140A05297: mov     [rax+20h], ecx
 * 0000000140A0529A: mov     ecx, 1
 * 0000000140A0529F: mov     rax, [rbp+0BE0h+var_AF0]
 * 0000000140A052A6: mov     [rax+24h], r12d
 * 0000000140A052AA: mov     rax, [rbp+0BE0h+var_AF0]
 * 0000000140A052B1: mov     [rax+28h], r10w
 * 0000000140A052B6: mov     rax, [rbp+0BE0h+var_AF0]
 * 0000000140A052BD: or      [rax+2Ah], cx
 * 0000000140A052C1: mov     rcx, [rbp+0BE0h+var_AF0]
 * 0000000140A052C8: lea     rdx, [rcx+30h]
 * 0000000140A052CC: mov     [rsp+0CE0h+var_C88], rdx
 * 0000000140A052D1: test    r9d, r9d
 * 0000000140A052D4: jz      short loc_140A052E7
 * 0000000140A052D6: lea     r12d, [r9-1]
 * 0000000140A052DA: add     r12, 7
 * 0000000140A052DE: and     r12, 0FFFFFFFFFFFFFFF8h
 * 0000000140A052E2: add     r12, rdx
 * 0000000140A052E5: jmp     short loc_140A052EA
 * 0000000140A052E7: mov     r12, rdx
 * 0000000140A052EA: movzx   eax, word ptr [rcx+28h]
 * 0000000140A052EE: test    r9d, r9d
 * 0000000140A052F1: mov     r14d, 0Ch
 * 0000000140A052F7: mov     [rbp+0BE0h+var_C60], r12
 * 0000000140A052FB: cmovz   r14, r13
 * 0000000140A052FF: mov     r9d, 1
 * 0000000140A05305: mov     r13, [rbp+0BE0h+var_C10]
 * 0000000140A05309: add     r14, r13
 * 0000000140A0530C: lea     rcx, [rax+rax*2]
 * 0000000140A05310: mov     [rsp+0CE0h+var_C80], r14
 * 0000000140A05315: lea     r11, [r12+rcx*8]
 * 0000000140A05319: mov     [rsp+0CE0h+var_C70], r11
 * 0000000140A0531E: cmp     r15w, r10w
 * 0000000140A05322: jnb     short loc_140A05358
 * 0000000140A05324: movzx   edx, r10w
 * 0000000140A05328: lea     rax, [r12+8]
 * 0000000140A0532D: mov     r10d, 80000000h
 * 0000000140A05333: lea     r14d, [r9+1]
 * 0000000140A05337: mov     rcx, r14
 * 0000000140A0533A: mov     [rax-8], r15d
 * 0000000140A0533E: mov     [rax-4], r15d
 * 0000000140A05342: mov     [rax], r10d
 * 0000000140A05345: add     rax, 0Ch
 * 0000000140A05349: sub     rcx, r9
 * 0000000140A0534C: jnz     short loc_140A0533A
 * 0000000140A0534E: sub     rdx, r9
 * 0000000140A05351: jnz     short loc_140A05337
 * 0000000140A05353: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A05358: cmp     r12, r11
 * 0000000140A0535B: jz      loc_140A05C1B
 * 0000000140A05361: mov     rsi, [rbp+0BE0h+var_C50]
 * 0000000140A05365: mov     eax, [rsi+24h]
 * 0000000140A05368: mov     r11d, r15d
 * 0000000140A0536B: bt      eax, 19h
 * 0000000140A0536F: jb      loc_140A054F7
 * 0000000140A05375: mov     ecx, [rsi]
 * 0000000140A05377: cmp     ecx, 54494E49h
 * 0000000140A0537D: jnz     short loc_140A0538C
 * 0000000140A0537F: cmp     dword ptr [rsi+4], 4742444Bh
 * 0000000140A05386: jz      loc_140A054F7
 * 0000000140A0538C: cmp     ecx, 45474150h
 * 0000000140A05392: jnz     short loc_140A053C2
 * 0000000140A05394: movzx   eax, word ptr [rsi+4]
 * 0000000140A05398: mov     edx, 7877h
 * 0000000140A0539D: cmp     ax, dx
 * 0000000140A053A0: jz      loc_140A054F7
 * 0000000140A053A6: mov     edx, 7277h
 * 0000000140A053AB: cmp     ax, dx
 * 0000000140A053AE: jz      loc_140A054F7
 * 0000000140A053B4: mov     edx, 7777h
 * 0000000140A053B9: cmp     ax, dx
 * 0000000140A053BC: jz      loc_140A054F7
 * 0000000140A053C2: cmp     ecx, 41525245h
 * 0000000140A053C8: jnz     short loc_140A053D9
 * 0000000140A053CA: mov     eax, 4154h
 * 0000000140A053CF: cmp     [rsi+4], ax
 * 0000000140A053D3: jz      loc_140A054F7
 * 0000000140A053D9: mov     rax, [rbx+938h]
 * 0000000140A053E0: mov     r9, rsi
 * 0000000140A053E3: mov     r8, [rbx+930h]
 * 0000000140A053EA: mov     r10d, 7
 * 0000000140A053F0: mov     [rbp+0BE0h+var_7E8], rax
 * 0000000140A053F7: sub     r9, r8
 * 0000000140A053FA: mov     rax, [rbx+940h]
 * 0000000140A05401: mov     [rbp+0BE0h+var_7E0], rax
 * 0000000140A05408: mov     rax, [rbx+948h]
 * 0000000140A0540F: mov     [rbp+0BE0h+var_7D8], rax
 * 0000000140A05416: mov     [rbp+0BE0h+var_7F0], r8
 * 0000000140A0541D: movzx   edx, byte ptr [r8+r9]
 * 0000000140A05422: movzx   eax, byte ptr [r8]
 * 0000000140A05426: inc     r8
 * 0000000140A05429: cmp     rdx, rax
 * 0000000140A0542C: jnz     short loc_140A0543D
 * 0000000140A0542E: mov     eax, 0FFFFFFFFh
 * 0000000140A05433: add     r10d, eax
 * 0000000140A05436: jnz     short loc_140A0541D
 * 0000000140A05438: jmp     loc_140A054EC
 * 0000000140A0543D: mov     r9, [rbp+0BE0h+var_7E8]
 * 0000000140A05444: mov     r8d, 8
 * 0000000140A0544A: mov     r10, rsi
 * 0000000140A0544D: mov     rcx, [r10]
 * 0000000140A05450: add     r10, 8
 * 0000000140A05454: mov     rax, [r9]
 * 0000000140A05457: add     r9, 8
 * 0000000140A0545B: cmp     rcx, rax
 * 0000000140A0545E: jnz     short loc_140A0548E
 * 0000000140A05460: add     r8d, 0FFFFFFF8h
 * 0000000140A05464: cmp     r8d, 8
 * 0000000140A05468: jnb     short loc_140A0544D
 * 0000000140A0546A: test    r8d, r8d
 * 0000000140A0546D: jz      short loc_140A054EC
 * 0000000140A0546F: movzx   edx, byte ptr [r10]
 * 0000000140A05473: inc     r10
 * 0000000140A05476: movzx   eax, byte ptr [r9]
 * 0000000140A0547A: inc     r9
 * 0000000140A0547D: cmp     rdx, rax
 * 0000000140A05480: jnz     short loc_140A0548E
 * 0000000140A05482: mov     eax, 0FFFFFFFFh
 * 0000000140A05487: add     r8d, eax
 * 0000000140A0548A: jnz     short loc_140A0546F
 * 0000000140A0548C: jmp     short loc_140A054EC
 * 0000000140A0548E: mov     r8, [rbp+0BE0h+var_7E0]
 * 0000000140A05495: mov     r9, rsi
 * 0000000140A05498: sub     r9, r8
 * 0000000140A0549B: mov     r10d, 4
 * 0000000140A054A1: movzx   edx, byte ptr [r9+r8]
 * 0000000140A054A6: movzx   eax, byte ptr [r8]
 * 0000000140A054AA: inc     r8
 * 0000000140A054AD: cmp     rdx, rax
 * 0000000140A054B0: jnz     short loc_140A054BE
 * 0000000140A054B2: mov     eax, 0FFFFFFFFh
 * 0000000140A054B7: add     r10d, eax
 * 0000000140A054BA: jnz     short loc_140A054A1
 * 0000000140A054BC: jmp     short loc_140A054EC
 * 0000000140A054BE: mov     r8, [rbp+0BE0h+var_7D8]
 * 0000000140A054C5: mov     r9, rsi
 * 0000000140A054C8: sub     r9, r8
 * 0000000140A054CB: mov     r10d, 6
 * 0000000140A054D1: movzx   edx, byte ptr [r9+r8]
 * 0000000140A054D6: movzx   eax, byte ptr [r8]
 * 0000000140A054DA: inc     r8
 * 0000000140A054DD: cmp     rdx, rax
 * 0000000140A054E0: jnz     short loc_140A054FC
 * 0000000140A054E2: mov     eax, 0FFFFFFFFh
 * 0000000140A054E7: add     r10d, eax
 * 0000000140A054EA: jnz     short loc_140A054D1
 * 0000000140A054EC: mov     r9d, 1
 * 0000000140A054F2: mov     r11d, r9d
 * 0000000140A054F5: jmp     short loc_140A05502
 * 0000000140A054F7: mov     r11d, r9d
 * 0000000140A054FA: jmp     short loc_140A05507
 * 0000000140A054FC: mov     r9d, 1
 * 0000000140A05502: mov     r8, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A05507: mov     ecx, [rsi+24h]
 * 0000000140A0550A: test    ecx, ecx
 * 0000000140A0550C: cmovs   r11d, r9d
 * 0000000140A05510: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 0000000140A05517: test    r11d, r11d
 * 0000000140A0551A: jz      short loc_140A05542
 * 0000000140A0551C: cmp     dword ptr [rsi], 54494E49h
 * 0000000140A05522: jnz     short loc_140A05542
 * 0000000140A05524: cmp     dword ptr [rsi+4], 4742444Bh
 * 0000000140A0552B: jnz     short loc_140A05542
 * 0000000140A0552D: test    dword ptr [rbx+994h], 2000h
 * 0000000140A05537: cmovnz  r11d, r15d
 * 0000000140A0553B: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 0000000140A05542: test    dword ptr [rbx+994h], 4000h
 * 0000000140A0554C: jz      short loc_140A05570
 * 0000000140A0554E: bt      ecx, 1Dh
 * 0000000140A05552: jnb     short loc_140A05570
 * 0000000140A05554: cmp     r8, [rbx+5E8h]
 * 0000000140A0555B: jz      short loc_140A05566
 * 0000000140A0555D: cmp     r8, [rbx+5F0h]
 * 0000000140A05564: jnz     short loc_140A05570
 * 0000000140A05566: mov     r11d, r9d
 * 0000000140A05569: mov     dword ptr [rbp+0BE0h+arg_8], r9d
 * 0000000140A05570: mov     ecx, [rsi+10h]
 * 0000000140A05573: mov     eax, [rsi+8]
 * 0000000140A05576: cmp     ecx, eax
 * 0000000140A05578: mov     edx, [rsi+0Ch]
 * 0000000140A0557B: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A0557F: cmovbe  ecx, eax
 * 0000000140A05582: add     ecx, edx
 * 0000000140A05584: mov     [rbp+0BE0h+var_C58], edx
 * 0000000140A05587: xor     r10d, r10d
 * 0000000140A0558A: mov     [rsp+0CE0h+var_C78], ecx
 * 0000000140A0558E: cmp     r13, r9
 * 0000000140A05591: jz      short loc_140A0559D
 * 0000000140A05593: mov     r15d, [r13+0]
 * 0000000140A05597: mov     r13d, [r13+4]
 * 0000000140A0559B: jmp     short loc_140A055A0
 * 0000000140A0559D: mov     r13d, r10d
 * 0000000140A055A0: mov     [rbp+0BE0h+var_C28], edx
 * 0000000140A055A3: cmp     [rbp+0BE0h+var_C10], r9
 * 0000000140A055A7: jz      loc_140A05766
 * 0000000140A055AD: cmp     r15d, edx
 * 0000000140A055B0: jbe     loc_140A05766
 * 0000000140A055B6: cmp     r13d, ecx
 * 0000000140A055B9: ja      loc_140A05766
 * 0000000140A055BF: test    r11d, r11d
 * 0000000140A055C2: jnz     loc_140A05766
 * 0000000140A055C8: mov     [r12], edx
 * 0000000140A055CC: lea     rcx, [rbp+0BE0h+var_9B0]
 * 0000000140A055D3: mov     [r12+4], r15d
 * 0000000140A055D8: lea     rdx, [rbp+0BE0h+var_7A0]
 * 0000000140A055DF: mov     eax, [r12]
 * 0000000140A055E3: mov     r9d, r15d
 * 0000000140A055E6: sub     r9d, eax
 * 0000000140A055E9: mov     [rbp+0BE0h+var_C28], r15d
 * 0000000140A055ED: mov     r14d, r9d
 * 0000000140A055F0: lea     rsi, [r8+rax]
 * 0000000140A055F4: mov     r8d, r10d
 * 0000000140A055F7: add     r14, rsi
 * 0000000140A055FA: mov     r10, [rdx]
 * 0000000140A055FD: mov     eax, [rcx]
 * 0000000140A055FF: add     rax, r10
 * 0000000140A05602: cmp     rsi, rax
 * 0000000140A05605: jnb     short loc_140A05610
 * 0000000140A05607: cmp     r14, r10
 * 0000000140A0560A: ja      loc_140A05756
 * 0000000140A05610: inc     r8d
 * 0000000140A05613: add     rdx, 8
 * 0000000140A05617: add     rcx, 4
 * 0000000140A0561B: cmp     r8d, 6
 * 0000000140A0561F: jb      short loc_140A055FA
 * 0000000140A05621: add     [rbx+828h], r9d
 * 0000000140A05628: mov     r10, rsi
 * 0000000140A0562B: mov     r11d, [rbx+814h]
 * 0000000140A05632: mov     rax, rsi
 * 0000000140A05635: mov     r12, [rbx+818h]
 * 0000000140A0563C: cmp     rsi, r14
 * 0000000140A0563F: jnb     short loc_140A05651
 * 0000000140A05641: mov     ecx, 40h ; '@'
 * 0000000140A05646: prefetchnta byte ptr [rax]
 * 0000000140A05649: add     rax, rcx
 * 0000000140A0564C: cmp     rax, r14
 * 0000000140A0564F: jb      short loc_140A05646
 * 0000000140A05651: mov     r14d, r9d
 * 0000000140A05654: mov     r8, r12
 * 0000000140A05657: shr     r14d, 7
 * 0000000140A0565B: test    r14d, r14d
 * 0000000140A0565E: jz      short loc_140A056D6
 * 0000000140A05660: mov     rbx, 7010008004002001h
 * 0000000140A0566A: mov     edx, 8
 * 0000000140A0566F: lea     edi, [rdx-7]
 * 0000000140A05672: mov     rax, [r10]
 * 0000000140A05675: mov     ecx, r11d
 * 0000000140A05678: xor     rax, r8
 * 0000000140A0567B: mov     r8, [r10+8]
 * 0000000140A0567F: rol     rax, cl
 * 0000000140A05682: add     r10, 10h
 * 0000000140A05686: xor     r8, rax
 * 0000000140A05689: rol     r8, cl
 * 0000000140A0568C: sub     rdx, rdi
 * 0000000140A0568F: jnz     short loc_140A05672
 * 0000000140A05691: mov     rcx, r10
 * 0000000140A05694: sub     rcx, rsi
 * 0000000140A05697: xor     rcx, r12
 * 0000000140A0569A: mov     rax, rcx
 * 0000000140A0569D: rol     rax, 11h
 * 0000000140A056A1: xor     rcx, rax
 * 0000000140A056A4: mov     rax, rbx
 * 0000000140A056A7: mul     rcx
 * 0000000140A056AA: mov     [rbp+0BE0h+var_500], rdx
 * 0000000140A056B1: xor     edx, eax
 * 0000000140A056B3: xor     r11d, edx
 * 0000000140A056B6: mov     rax, rdi
 * 0000000140A056B9: and     r11d, 3Fh
 * 0000000140A056BD: cmovz   r11d, eax
 * 0000000140A056C1: mov     eax, 0FFFFFFFFh
 * 0000000140A056C6: add     r14d, eax
 * 0000000140A056C9: jnz     short loc_140A0566A
 * 0000000140A056CB: mov     rbx, [rbp+0BE0h+var_C30]
 * 0000000140A056CF: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A056D6: and     r9d, 7Fh
 * 0000000140A056DA: mov     r14d, 1
 * 0000000140A056E0: cmp     r9d, 8
 * 0000000140A056E4: jb      short loc_140A05703
 * 0000000140A056E6: mov     edx, r9d
 * 0000000140A056E9: shr     rdx, 3
 * 0000000140A056ED: xor     r8, [r10]
 * 0000000140A056F0: mov     ecx, r11d
 * 0000000140A056F3: rol     r8, cl
 * 0000000140A056F6: add     r10, 8
 * 0000000140A056FA: add     r9d, 0FFFFFFF8h
 * 0000000140A056FE: sub     rdx, r14
 * 0000000140A05701: jnz     short loc_140A056ED
 * 0000000140A05703: xor     esi, esi
 * 0000000140A05705: test    r9d, r9d
 * 0000000140A05708: jz      short loc_140A05726
 * 0000000140A0570A: mov     esi, 0FFFFFFFFh
 * 0000000140A0570F: movzx   eax, byte ptr [r10]
 * 0000000140A05713: mov     ecx, r11d
 * 0000000140A05716: xor     r8, rax
 * 0000000140A05719: add     r10, r14
 * 0000000140A0571C: rol     r8, cl
 * 0000000140A0571F: add     r9d, esi
 * 0000000140A05722: jnz     short loc_140A0570F
 * 0000000140A05724: xor     esi, esi
 * 0000000140A05726: mov     rax, r8
 * 0000000140A05729: jmp     short loc_140A0572E
 * 0000000140A0572B: xor     r8d, eax
 * 0000000140A0572E: shr     rax, 1Fh
 * 0000000140A05732: test    rax, rax
 * 0000000140A05735: jnz     short loc_140A0572B
 * 0000000140A05737: mov     rax, [rbp+0BE0h+var_C60]
 * 0000000140A0573B: btr     r8d, 1Fh
 * 0000000140A05740: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A05744: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A05749: mov     edx, [rbp+0BE0h+var_C58]
 * 0000000140A0574C: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A05750: mov     [rax+8], r8d
 * 0000000140A05754: jmp     short loc_140A05768
 * 0000000140A05756: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A0575A: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A0575F: mov     edx, [rbp+0BE0h+var_C58]
 * 0000000140A05762: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A05766: xor     esi, esi
 * 0000000140A05768: cmp     r15d, edx
 * 0000000140A0576B: jb      loc_140A05A06
 * 0000000140A05771: cmp     r13d, ecx
 * 0000000140A05774: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0577B: ja      loc_140A05A0D
 * 0000000140A05781: mov     r8, [rbp+0BE0h+var_C10]
 * 0000000140A05785: cmp     r8, r9
 * 0000000140A05788: jz      loc_140A05A0D
 * 0000000140A0578E: mov     r12d, [r14+4]
 * 0000000140A05792: cmp     r12d, ecx
 * 0000000140A05795: ja      loc_140A05A0D
 * 0000000140A0579B: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A057A0: mov     edx, 1
 * 0000000140A057A5: lea     r10d, [rdx+0Bh]
 * 0000000140A057A9: cmp     r14, r9
 * 0000000140A057AC: jz      loc_140A05A0D
 * 0000000140A057B2: test    r13d, r13d
 * 0000000140A057B5: jz      short loc_140A057BF
 * 0000000140A057B7: mov     r8b, 80h
 * 0000000140A057BA: jmp     loc_140A059CF
 * 0000000140A057BF: mov     rax, [rsp+0CE0h+var_C80]
 * 0000000140A057C4: mov     r14d, [r8+4]
 * 0000000140A057C8: mov     r15d, [rax]
 * 0000000140A057CB: mov     [rbp+0BE0h+var_C28], r15d
 * 0000000140A057CF: cmp     r15d, r14d
 * 0000000140A057D2: jnb     short loc_140A05833
 * 0000000140A057D4: test    dword ptr [rbx+990h], 200000h
 * 0000000140A057DE: jz      loc_140A08CDF
 * 0000000140A057E4: cmp     [rbx+8F8h], esi
 * 0000000140A057EA: jnz     short loc_140A05833
 * 0000000140A057EC: mov     rdx, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A057F1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A057FB: add     rax, rbx
 * 0000000140A057FE: mov     rcx, rbx
 * 0000000140A05801: mov     [rbx+900h], rax
 * 0000000140A05808: mov     eax, 1
 * 0000000140A0580D: mov     [rbx+908h], rsi
 * 0000000140A05814: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140A0581F: mov     [rbx+918h], rdx
 * 0000000140A05826: xor     edx, edx
 * 0000000140A05828: mov     [rbx+8F8h], eax
 * 0000000140A0582E: call    $$b8
 * 0000000140A05833: mov     rsi, r14
 * 0000000140A05836: lea     rcx, [rbp+0BE0h+var_9B0]
 * 0000000140A0583D: add     rsi, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A05842: lea     rdx, [rbp+0BE0h+var_7A0]
 * 0000000140A05849: mov     r9d, r15d
 * 0000000140A0584C: sub     r9d, r14d
 * 0000000140A0584F: mov     r14d, r9d
 * 0000000140A05852: add     r14, rsi
 * 0000000140A05855: xor     eax, eax
 * 0000000140A05857: mov     r8d, eax
 * 0000000140A0585A: mov     r10, [rdx]
 * 0000000140A0585D: mov     eax, [rcx]
 * 0000000140A0585F: add     rax, r10
 * 0000000140A05862: cmp     rsi, rax
 * 0000000140A05865: jnb     short loc_140A05870
 * 0000000140A05867: cmp     r14, r10
 * 0000000140A0586A: ja      loc_140A059AE
 * 0000000140A05870: mov     eax, 4
 * 0000000140A05875: inc     r8d
 * 0000000140A05878: add     rcx, rax
 * 0000000140A0587B: add     rdx, 8
 * 0000000140A0587F: cmp     r8d, 6
 * 0000000140A05883: jb      short loc_140A0585A
 * 0000000140A05885: cmp     r9d, eax
 * 0000000140A05888: jb      loc_140A059AE
 * 0000000140A0588E: add     [rbx+828h], r9d
 * 0000000140A05895: mov     r10, rsi
 * 0000000140A05898: mov     r11d, [rbx+814h]
 * 0000000140A0589F: mov     rax, rsi
 * 0000000140A058A2: mov     r15, [rbx+818h]
 * 0000000140A058A9: cmp     rsi, r14
 * 0000000140A058AC: jnb     short loc_140A058BE
 * 0000000140A058AE: mov     ecx, 40h ; '@'
 * 0000000140A058B3: prefetchnta byte ptr [rax]
 * 0000000140A058B6: add     rax, rcx
 * 0000000140A058B9: cmp     rax, r14
 * 0000000140A058BC: jb      short loc_140A058B3
 * 0000000140A058BE: mov     r14d, r9d
 * 0000000140A058C1: mov     r8, r15
 * 0000000140A058C4: shr     r14d, 7
 * 0000000140A058C8: test    r14d, r14d
 * 0000000140A058CB: jz      short loc_140A05947
 * 0000000140A058CD: mov     rdi, 7010008004002001h
 * 0000000140A058D7: mov     edx, 8
 * 0000000140A058DC: lea     r13d, [rdx-7]
 * 0000000140A058E0: mov     rax, [r10]
 * 0000000140A058E3: mov     ecx, r11d
 * 0000000140A058E6: xor     rax, r8
 * 0000000140A058E9: mov     r8, [r10+8]
 * 0000000140A058ED: rol     rax, cl
 * 0000000140A058F0: add     r10, 10h
 * 0000000140A058F4: xor     r8, rax
 * 0000000140A058F7: rol     r8, cl
 * 0000000140A058FA: sub     rdx, r13
 * 0000000140A058FD: jnz     short loc_140A058E0
 * 0000000140A058FF: mov     rcx, r10
 * 0000000140A05902: sub     rcx, rsi
 * 0000000140A05905: xor     rcx, r15
 * 0000000140A05908: mov     rax, rcx
 * 0000000140A0590B: rol     rax, 11h
 * 0000000140A0590F: xor     rcx, rax
 * 0000000140A05912: mov     rax, rdi
 * 0000000140A05915: mul     rcx
 * 0000000140A05918: mov     [rbp+0BE0h+var_4F8], rdx
 * 0000000140A0591F: xor     edx, eax
 * 0000000140A05921: xor     r11d, edx
 * 0000000140A05924: mov     rax, r13
 * 0000000140A05927: and     r11d, 3Fh
 * 0000000140A0592B: cmovz   r11d, eax
 * 0000000140A0592F: mov     eax, 0FFFFFFFFh
 * 0000000140A05934: add     r14d, eax
 * 0000000140A05937: jnz     short loc_140A058D7
 * 0000000140A05939: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A05940: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A05947: and     r9d, 7Fh
 * 0000000140A0594B: mov     r14d, 1
 * 0000000140A05951: cmp     r9d, 8
 * 0000000140A05955: jb      short loc_140A05974
 * 0000000140A05957: mov     edx, r9d
 * 0000000140A0595A: shr     rdx, 3
 * 0000000140A0595E: xor     r8, [r10]
 * 0000000140A05961: mov     ecx, r11d
 * 0000000140A05964: rol     r8, cl
 * 0000000140A05967: add     r10, 8
 * 0000000140A0596B: add     r9d, 0FFFFFFF8h
 * 0000000140A0596F: sub     rdx, r14
 * 0000000140A05972: jnz     short loc_140A0595E
 * 0000000140A05974: xor     esi, esi
 * 0000000140A05976: test    r9d, r9d
 * 0000000140A05979: jz      short loc_140A05997
 * 0000000140A0597B: mov     esi, 0FFFFFFFFh
 * 0000000140A05980: movzx   eax, byte ptr [r10]
 * 0000000140A05984: mov     ecx, r11d
 * 0000000140A05987: xor     r8, rax
 * 0000000140A0598A: add     r10, r14
 * 0000000140A0598D: rol     r8, cl
 * 0000000140A05990: add     r9d, esi
 * 0000000140A05993: jnz     short loc_140A05980
 * 0000000140A05995: xor     esi, esi
 * 0000000140A05997: mov     rax, r8
 * 0000000140A0599A: jmp     short loc_140A0599F
 * 0000000140A0599C: xor     r8b, al
 * 0000000140A0599F: shr     rax, 7
 * 0000000140A059A3: test    rax, rax
 * 0000000140A059A6: jnz     short loc_140A0599C
 * 0000000140A059A8: and     r8b, 7Fh
 * 0000000140A059AC: jmp     short loc_140A059B3
 * 0000000140A059AE: xor     esi, esi
 * 0000000140A059B0: mov     r8b, 80h
 * 0000000140A059B3: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A059B7: mov     r10d, 0Ch
 * 0000000140A059BD: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A059C2: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A059C6: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A059CB: lea     edx, [r10-0Bh]
 * 0000000140A059CF: mov     [rax], r8b
 * 0000000140A059D2: add     r14, r10
 * 0000000140A059D5: mov     r8, [rbp+0BE0h+var_C10]
 * 0000000140A059D9: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A059DE: add     r8, r10
 * 0000000140A059E1: add     rax, rdx
 * 0000000140A059E4: mov     [rbp+0BE0h+var_C10], r8
 * 0000000140A059E8: mov     [rsp+0CE0h+var_C88], rax
 * 0000000140A059ED: mov     [rsp+0CE0h+var_C80], r14
 * 0000000140A059F2: cmp     r14, r9
 * 0000000140A059F5: jz      short loc_140A059FB
 * 0000000140A059F7: mov     r12d, [r14+4]
 * 0000000140A059FB: cmp     r12d, ecx
 * 0000000140A059FE: jbe     loc_140A057A9
 * 0000000140A05A04: jmp     short loc_140A05A0D
 * 0000000140A05A06: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A05A0D: mov     r12, [rbp+0BE0h+var_C60]
 * 0000000140A05A11: xor     r15d, r15d
 * 0000000140A05A14: test    r13d, r13d
 * 0000000140A05A17: jnz     loc_140A05B97
 * 0000000140A05A1D: mov     eax, [rbp+0BE0h+var_C28]
 * 0000000140A05A20: cmp     eax, ecx
 * 0000000140A05A22: jz      loc_140A05B97
 * 0000000140A05A28: mov     rsi, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A05A2D: lea     rdx, [rbp+0BE0h+var_7A0]
 * 0000000140A05A34: mov     [r12+0Ch], eax
 * 0000000140A05A39: lea     r13d, [r15+1]
 * 0000000140A05A3D: mov     [r12+10h], ecx
 * 0000000140A05A42: mov     r9d, ecx
 * 0000000140A05A45: mov     eax, [r12+0Ch]
 * 0000000140A05A4A: lea     rcx, [rbp+0BE0h+var_9B0]
 * 0000000140A05A51: sub     r9d, eax
 * 0000000140A05A54: add     rsi, rax
 * 0000000140A05A57: mov     r14d, r9d
 * 0000000140A05A5A: mov     r8d, r15d
 * 0000000140A05A5D: add     r14, rsi
 * 0000000140A05A60: mov     r10, [rdx]
 * 0000000140A05A63: mov     eax, [rcx]
 * 0000000140A05A65: add     rax, r10
 * 0000000140A05A68: cmp     rsi, rax
 * 0000000140A05A6B: jnb     short loc_140A05A76
 * 0000000140A05A6D: cmp     r14, r10
 * 0000000140A05A70: ja      loc_140A05B97
 * 0000000140A05A76: add     r8d, r13d
 * 0000000140A05A79: add     rdx, 8
 * 0000000140A05A7D: add     rcx, 4
 * 0000000140A05A81: cmp     r8d, 6
 * 0000000140A05A85: jb      short loc_140A05A60
 * 0000000140A05A87: add     [rbx+828h], r9d
 * 0000000140A05A8E: mov     r10, rsi
 * 0000000140A05A91: mov     r11d, [rbx+814h]
 * 0000000140A05A98: mov     rax, rsi
 * 0000000140A05A9B: mov     r15, [rbx+818h]
 * 0000000140A05AA2: cmp     rsi, r14
 * 0000000140A05AA5: jnb     short loc_140A05AB7
 * 0000000140A05AA7: mov     ecx, 40h ; '@'
 * 0000000140A05AAC: prefetchnta byte ptr [rax]
 * 0000000140A05AAF: add     rax, rcx
 * 0000000140A05AB2: cmp     rax, r14
 * 0000000140A05AB5: jb      short loc_140A05AAC
 * 0000000140A05AB7: mov     r14d, r9d
 * 0000000140A05ABA: mov     r8, r15
 * 0000000140A05ABD: shr     r14d, 7
 * 0000000140A05AC1: test    r14d, r14d
 * 0000000140A05AC4: jz      short loc_140A05B2F
 * 0000000140A05AC6: mov     r12, 7010008004002001h
 * 0000000140A05AD0: mov     edx, 8
 * 0000000140A05AD5: mov     rax, [r10]
 * 0000000140A05AD8: mov     ecx, r11d
 * 0000000140A05ADB: xor     rax, r8
 * 0000000140A05ADE: mov     r8, [r10+8]
 * 0000000140A05AE2: rol     rax, cl
 * 0000000140A05AE5: add     r10, 10h
 * 0000000140A05AE9: xor     r8, rax
 * 0000000140A05AEC: rol     r8, cl
 * 0000000140A05AEF: sub     rdx, r13
 * 0000000140A05AF2: jnz     short loc_140A05AD5
 * 0000000140A05AF4: mov     rcx, r10
 * 0000000140A05AF7: sub     rcx, rsi
 * 0000000140A05AFA: xor     rcx, r15
 * 0000000140A05AFD: mov     rax, rcx
 * 0000000140A05B00: rol     rax, 11h
 * 0000000140A05B04: xor     rcx, rax
 * 0000000140A05B07: mov     rax, r12
 * 0000000140A05B0A: mul     rcx
 * 0000000140A05B0D: mov     [rbp+0BE0h+var_4F0], rdx
 * 0000000140A05B14: xor     edx, eax
 * 0000000140A05B16: xor     r11d, edx
 * 0000000140A05B19: mov     eax, 0FFFFFFFFh
 * 0000000140A05B1E: and     r11d, 3Fh
 * 0000000140A05B22: cmovz   r11d, r13d
 * 0000000140A05B26: add     r14d, eax
 * 0000000140A05B29: jnz     short loc_140A05AD0
 * 0000000140A05B2B: mov     r12, [rbp+0BE0h+var_C60]
 * 0000000140A05B2F: and     r9d, 7Fh
 * 0000000140A05B33: cmp     r9d, 8
 * 0000000140A05B37: jb      short loc_140A05B56
 * 0000000140A05B39: mov     edx, r9d
 * 0000000140A05B3C: shr     rdx, 3
 * 0000000140A05B40: xor     r8, [r10]
 * 0000000140A05B43: mov     ecx, r11d
 * 0000000140A05B46: rol     r8, cl
 * 0000000140A05B49: add     r10, 8
 * 0000000140A05B4D: add     r9d, 0FFFFFFF8h
 * 0000000140A05B51: sub     rdx, r13
 * 0000000140A05B54: jnz     short loc_140A05B40
 * 0000000140A05B56: xor     r15d, r15d
 * 0000000140A05B59: test    r9d, r9d
 * 0000000140A05B5C: jz      short loc_140A05B7C
 * 0000000140A05B5E: mov     r15d, 0FFFFFFFFh
 * 0000000140A05B64: movzx   eax, byte ptr [r10]
 * 0000000140A05B68: mov     ecx, r11d
 * 0000000140A05B6B: xor     r8, rax
 * 0000000140A05B6E: add     r10, r13
 * 0000000140A05B71: rol     r8, cl
 * 0000000140A05B74: add     r9d, r15d
 * 0000000140A05B77: jnz     short loc_140A05B64
 * 0000000140A05B79: xor     r15d, r15d
 * 0000000140A05B7C: mov     rax, r8
 * 0000000140A05B7F: jmp     short loc_140A05B84
 * 0000000140A05B81: xor     r8d, eax
 * 0000000140A05B84: shr     rax, 1Fh
 * 0000000140A05B88: test    rax, rax
 * 0000000140A05B8B: jnz     short loc_140A05B81
 * 0000000140A05B8D: btr     r8d, 1Fh
 * 0000000140A05B92: mov     [r12+14h], r8d
 * 0000000140A05B97: mov     rdx, [rbp+0BE0h+var_C48]
 * 0000000140A05B9B: mov     r13, [rbp+0BE0h+var_C10]
 * 0000000140A05B9F: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A05BA4: cmp     r13, rdx
 * 0000000140A05BA7: jz      short loc_140A05BEC
 * 0000000140A05BA9: mov     eax, [r13+0]
 * 0000000140A05BAD: mov     ecx, [r13+4]
 * 0000000140A05BB1: cmp     eax, [rbp+0BE0h+var_C58]
 * 0000000140A05BB4: jb      short loc_140A05BEC
 * 0000000140A05BB6: cmp     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A05BBA: ja      short loc_140A05BEC
 * 0000000140A05BBC: cmp     r14, rdx
 * 0000000140A05BBF: jz      short loc_140A05BE0
 * 0000000140A05BC1: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A05BC6: mov     byte ptr [rax], 80h
 * 0000000140A05BC9: inc     rax
 * 0000000140A05BCC: mov     [rsp+0CE0h+var_C88], rax
 * 0000000140A05BD1: mov     eax, 0Ch
 * 0000000140A05BD6: add     r14, rax
 * 0000000140A05BD9: mov     [rsp+0CE0h+var_C80], r14
 * 0000000140A05BDE: jmp     short loc_140A05BE5
 * 0000000140A05BE0: mov     eax, 0Ch
 * 0000000140A05BE5: add     r13, rax
 * 0000000140A05BE8: mov     [rbp+0BE0h+var_C10], r13
 * 0000000140A05BEC: mov     rsi, [rbp+0BE0h+var_C50]
 * 0000000140A05BF0: add     r12, 18h
 * 0000000140A05BF4: add     rsi, 28h ; '('
 * 0000000140A05BF8: mov     [rbp+0BE0h+var_C60], r12
 * 0000000140A05BFC: mov     [rbp+0BE0h+var_C50], rsi
 * 0000000140A05C00: cmp     r12, [rsp+0CE0h+var_C70]
 * 0000000140A05C05: jz      short loc_140A05C17
 * 0000000140A05C07: mov     r8, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A05C0C: mov     r9d, 1
 * 0000000140A05C12: jmp     loc_140A05365
 * 0000000140A05C17: mov     rsi, [rbp+0BE0h+var_BB0]
 * 0000000140A05C1B: mov     [rbp+0BE0h+var_BA8], rsi
 * 0000000140A05C1F: mov     ecx, r15d
 * 0000000140A05C22: mov     [rbp+0BE0h+var_C18], ecx
 * 0000000140A05C25: mov     r13d, 80000000h
 * 0000000140A05C2B: mov     rbx, rsi
 * 0000000140A05C2E: lea     eax, [rcx+r13]
 * 0000000140A05C32: test    r13d, eax
 * 0000000140A05C35: jnz     short loc_140A05C4D
 * 0000000140A05C37: cmp     ecx, 0C000010Eh
 * 0000000140A05C3D: jz      short loc_140A05C4D
 * 0000000140A05C3F: mov     ecx, [rbp+0BE0h+var_C18]
 * 0000000140A05C42: jmp     loc_140A05CDB
 * 0000000140A05C47: mov     r13d, 80000000h
 * 0000000140A05C4D: mov     r12, [rbp+0BE0h+var_C08]
 * 0000000140A05C51: mov     rax, [rsi+1F8h]
 * 0000000140A05C58: mov     rcx, r12
 * 0000000140A05C5B: call    KeGuardDispatchICall
 * 0000000140A05C60: mov     ecx, [rax+94h]
 * 0000000140A05C66: cmp     ecx, 14h
 * 0000000140A05C69: jb      loc_140A03FDA
 * 0000000140A05C6F: mov     eax, [rax+90h]
 * 0000000140A05C75: lea     r15, [r12+rcx]
 * 0000000140A05C79: add     r15, rax
 * 0000000140A05C7C: lea     r14, [r12+rax]
 * 0000000140A05C80: cmp     r14, r15
 * 0000000140A05C83: jz      short loc_140A05CD5
 * 0000000140A05C85: xor     ecx, ecx
 * 0000000140A05C87: cmp     [r14+0Ch], ecx
 * 0000000140A05C8B: jz      short loc_140A05CD5
 * 0000000140A05C8D: mov     eax, [r14+10h]
 * 0000000140A05C91: test    eax, eax
 * 0000000140A05C93: jz      short loc_140A05CD5
 * 0000000140A05C95: mov     rdx, [rax+r12]
 * 0000000140A05C99: test    rdx, rdx
 * 0000000140A05C9C: jz      short loc_140A05CCC
 * 0000000140A05C9E: mov     r8d, 8000000Fh
 * 0000000140A05CA4: lea     rcx, [rbp+0BE0h+var_BA8]
 * 0000000140A05CA8: call    sub_140A090FC
 * 0000000140A05CAD: mov     rsi, [rbp+0BE0h+var_BA8]
 * 0000000140A05CB1: mov     ecx, eax
 * 0000000140A05CB3: add     eax, r13d
 * 0000000140A05CB6: mov     rbx, rsi
 * 0000000140A05CB9: test    r13d, eax
 * 0000000140A05CBC: jnz     short loc_140A05CCA
 * 0000000140A05CBE: cmp     ecx, 0C000010Eh
 * 0000000140A05CC4: jnz     loc_140A05E54
 * 0000000140A05CCA: xor     ecx, ecx
 * 0000000140A05CCC: add     r14, 14h
 * 0000000140A05CD0: cmp     r14, r15
 * 0000000140A05CD3: jnz     short loc_140A05C87
 * 0000000140A05CD5: xor     r15d, r15d
 * 0000000140A05CD8: mov     ecx, r15d
 * 0000000140A05CDB: lea     eax, [rcx+r13]
 * 0000000140A05CDF: test    r13d, eax
 * 0000000140A05CE2: jnz     short loc_140A05CF0
 * 0000000140A05CE4: cmp     ecx, 0C000010Eh
 * 0000000140A05CEA: jnz     loc_140A03D8D
 * 0000000140A05CF0: mov     rax, [rbx+570h]
 * 0000000140A05CF7: lea     rdx, [rbp+0BE0h+var_140]
 * 0000000140A05CFE: mov     rcx, [rax+20h]
 * 0000000140A05D02: mov     rax, [rbx+200h]
 * 0000000140A05D09: call    KeGuardDispatchICall
 * 0000000140A05D0E: mov     rcx, [rbp+0BE0h+var_138]
 * 0000000140A05D15: test    rcx, rcx
 * 0000000140A05D18: jz      loc_140A0625E
 * 0000000140A05D1E: mov     [rbx+978h], rcx
 * 0000000140A05D25: mov     rax, [rbx+1F8h]
 * 0000000140A05D2C: call    KeGuardDispatchICall
 * 0000000140A05D31: test    rax, rax
 * 0000000140A05D34: jz      loc_140A0625E
 * 0000000140A05D3A: mov     eax, [rax+50h]
 * 0000000140A05D3D: mov     [rbx+974h], eax
 * 0000000140A05D43: mov     dword ptr [rbx+958h], 8
 * 0000000140A05D4D: mov     r15, [rbx+600h]
 * 0000000140A05D54: xor     r10d, r10d
 * 0000000140A05D57: test    r15, r15
 * 0000000140A05D5A: jz      loc_140A05F74
 * 0000000140A05D60: cmp     [r15], r10
 * 0000000140A05D63: jz      loc_140A05F74
 * 0000000140A05D69: mov     r9d, [rbx+838h]
 * 0000000140A05D70: lea     r12d, [r10+20h]
 * 0000000140A05D74: mov     r13d, [rbx+7E4h]
 * 0000000140A05D7B: cmp     r9d, 7
 * 0000000140A05D7F: mov     r8d, [rbx+924h]
 * 0000000140A05D86: cmovnz  r12d, r10d
 * 0000000140A05D8A: mov     dword ptr [rbp+0BE0h+arg_8], r9d
 * 0000000140A05D91: lea     eax, [r13+30h]
 * 0000000140A05D95: cmp     eax, [rbx+0A1Ch]
 * 0000000140A05D9B: jbe     loc_140A05E9A
 * 0000000140A05DA1: mov     edx, eax
 * 0000000140A05DA3: mov     rcx, rbx
 * 0000000140A05DA6: call    sub_140A0BB30
 * 0000000140A05DAB: xor     r10d, r10d
 * 0000000140A05DAE: mov     r14, rax
 * 0000000140A05DB1: test    rax, rax
 * 0000000140A05DB4: jz      loc_140A05E8F
 * 0000000140A05DBA: mov     ecx, [rbx+990h]
 * 0000000140A05DC0: test    cl, 4
 * 0000000140A05DC3: jnz     loc_140A05E7E
 * 0000000140A05DC9: mov     eax, [rbx+7E4h]
 * 0000000140A05DCF: lea     r9d, [r10+1]
 * 0000000140A05DD3: mov     r8, [rbx+7C8h]
 * 0000000140A05DDA: and     ecx, 20000000h
 * 0000000140A05DE0: neg     ecx
 * 0000000140A05DE2: sbb     edx, edx
 * 0000000140A05DE4: and     edx, [rbx+924h]
 * 0000000140A05DEA: cmp     eax, 8
 * 0000000140A05DED: jb      short loc_140A05E04
 * 0000000140A05DEF: mov     ecx, eax
 * 0000000140A05DF1: shr     rcx, 3
 * 0000000140A05DF5: mov     [rbx], r10
 * 0000000140A05DF8: add     eax, 0FFFFFFF8h
 * 0000000140A05DFB: add     rbx, 8
 * 0000000140A05DFF: sub     rcx, r9
 * 0000000140A05E02: jnz     short loc_140A05DF5
 * 0000000140A05E04: test    eax, eax
 * 0000000140A05E06: jz      short loc_140A05E17
 * 0000000140A05E08: mov     ecx, 0FFFFFFFFh
 * 0000000140A05E0D: mov     [rbx], r10b
 * 0000000140A05E10: add     rbx, r9
 * 0000000140A05E13: add     eax, ecx
 * 0000000140A05E15: jnz     short loc_140A05E0D
 * 0000000140A05E17: mov     ebx, [r14+924h]
 * 0000000140A05E1E: mov     [r14+924h], edx
 * 0000000140A05E25: cmp     edx, 3
 * 0000000140A05E28: jz      short loc_140A05E65
 * 0000000140A05E2A: test    dword ptr [r14+990h], 10000000h
 * 0000000140A05E35: mov     ecx, r10d
 * 0000000140A05E38: cmovz   ecx, edx
 * 0000000140A05E3B: test    ecx, ecx
 * 0000000140A05E3D: jz      short loc_140A05E5C
 * 0000000140A05E3F: mov     rax, [r14+228h]
 * 0000000140A05E46: lea     rcx, [r8-8]
 * 0000000140A05E4A: mov     rdx, [rcx]
 * 0000000140A05E4D: call    KeGuardDispatchICall
 * 0000000140A05E52: jmp     short loc_140A05E74
 * 0000000140A05E54: xor     r15d, r15d
 * 0000000140A05E57: jmp     loc_140A05CDB
 * 0000000140A05E5C: mov     rax, [r14+100h]
 * 0000000140A05E63: jmp     short loc_140A05E6C
 * 0000000140A05E65: mov     rax, [r14+368h]
 * 0000000140A05E6C: mov     rcx, r8
 * 0000000140A05E6F: call    KeGuardDispatchICall
 * 0000000140A05E74: mov     [r14+924h], ebx
 * 0000000140A05E7B: xor     r10d, r10d
 * 0000000140A05E7E: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140A05E86: mov     r9d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A05E8D: jmp     short loc_140A05EA3
 * 0000000140A05E8F: mov     rbx, rsi
 * 0000000140A05E92: xor     r15d, r15d
 * 0000000140A05E95: jmp     loc_140A03D8D
 * 0000000140A05E9A: mov     r14, rbx
 * 0000000140A05E9D: mov     [rbx+7E4h], eax
 * 0000000140A05EA3: mov     r8d, 1
 * 0000000140A05EA9: lea     rbx, [r14+r13]
 * 0000000140A05EAD: add     [r14+80Ch], r8d
 * 0000000140A05EB4: mov     rax, rbx
 * 0000000140A05EB7: mov     [rbp+0BE0h+var_4E8], rbx
 * 0000000140A05EBE: lea     ecx, [r8+2Fh]
 * 0000000140A05EC2: lea     edx, [rcx-2Ah]
 * 0000000140A05EC5: mov     [rax], r10
 * 0000000140A05EC8: add     ecx, 0FFFFFFF8h
 * 0000000140A05ECB: add     rax, 8
 * 0000000140A05ECF: sub     rdx, r8
 * 0000000140A05ED2: jnz     short loc_140A05EC5
 * 0000000140A05ED4: test    ecx, ecx
 * 0000000140A05ED6: jz      short loc_140A05EE7
 * 0000000140A05ED8: mov     edx, 0FFFFFFFFh
 * 0000000140A05EDD: mov     [rax], r10b
 * 0000000140A05EE0: add     rax, r8
 * 0000000140A05EE3: add     ecx, edx
 * 0000000140A05EE5: jnz     short loc_140A05EDD
 * 0000000140A05EE7: mov     [rbx], r12d
 * 0000000140A05EEA: mov     [rbx+8], r15
 * 0000000140A05EEE: cmp     r9d, 7
 * 0000000140A05EF2: jnz     short loc_140A05F0C
 * 0000000140A05EF4: lea     r9, [rbx+18h]
 * 0000000140A05EF8: mov     r8d, 8
 * 0000000140A05EFE: mov     rdx, r15
 * 0000000140A05F01: mov     rcx, r14
 * 0000000140A05F04: call    sub_1403E6E8C
 * 0000000140A05F09: xor     r10d, r10d
 * 0000000140A05F0C: mov     dword ptr [rbx+10h], 8
 * 0000000140A05F13: lea     rdx, [r15+8]
 * 0000000140A05F17: add     dword ptr [r14+828h], 8
 * 0000000140A05F1F: mov     rax, r15
 * 0000000140A05F22: mov     ecx, [r14+814h]
 * 0000000140A05F29: mov     r8, [r14+818h]
 * 0000000140A05F30: cmp     r15, rdx
 * 0000000140A05F33: jnb     short loc_140A05F46
 * 0000000140A05F35: mov     r9d, 40h ; '@'
 * 0000000140A05F3B: prefetchnta byte ptr [rax]
 * 0000000140A05F3E: add     rax, r9
 * 0000000140A05F41: cmp     rax, rdx
 * 0000000140A05F44: jb      short loc_140A05F3B
 * 0000000140A05F46: mov     rax, [r15]
 * 0000000140A05F49: xor     rax, r8
 * 0000000140A05F4C: rol     rax, cl
 * 0000000140A05F4F: mov     rcx, rax
 * 0000000140A05F52: jmp     short loc_140A05F56
 * 0000000140A05F54: xor     eax, ecx
 * 0000000140A05F56: shr     rcx, 1Fh
 * 0000000140A05F5A: test    rcx, rcx
 * 0000000140A05F5D: jnz     short loc_140A05F54
 * 0000000140A05F5F: btr     eax, 1Fh
 * 0000000140A05F63: mov     rsi, r14
 * 0000000140A05F66: mov     [rbx+14h], eax
 * 0000000140A05F69: mov     rbx, r14
 * 0000000140A05F6C: add     dword ptr [r14+828h], 8
 * 0000000140A05F74: mov     dword ptr [rbx+958h], 9
 * 0000000140A05F7E: jmp     loc_140A028F7
 * 0000000140A05F83: mov     r9d, [rbx+838h]
 * 0000000140A05F8A: mov     r13d, 20h ; ' '
 * 0000000140A05F90: mov     eax, [rbx+7E4h]
 * 0000000140A05F96: cmp     r9d, 7
 * 0000000140A05F9A: mov     r8d, [rbx+924h]
 * 0000000140A05FA1: cmovnz  r13d, r11d
 * 0000000140A05FA5: mov     [rbp+0BE0h+var_C38], eax
 * 0000000140A05FA8: add     eax, 30h ; '0'
 * 0000000140A05FAB: mov     [rbp+0BE0h+var_BE8], r9d
 * 0000000140A05FAF: cmp     eax, [rbx+0A1Ch]
 * 0000000140A05FB5: jbe     loc_140A0609E
 * 0000000140A05FBB: mov     edx, eax
 * 0000000140A05FBD: mov     rcx, rbx
 * 0000000140A05FC0: call    sub_140A0BB30
 * 0000000140A05FC5: xor     r11d, r11d
 * 0000000140A05FC8: mov     r14, rax
 * 0000000140A05FCB: test    rax, rax
 * 0000000140A05FCE: jz      loc_140A05E8F
 * 0000000140A05FD4: mov     ecx, [rbx+990h]
 * 0000000140A05FDA: test    cl, 4
 * 0000000140A05FDD: jnz     loc_140A06090
 * 0000000140A05FE3: mov     eax, [rbx+7E4h]
 * 0000000140A05FE9: lea     r9d, [r11+1]
 * 0000000140A05FED: mov     r8, [rbx+7C8h]
 * 0000000140A05FF4: and     ecx, 20000000h
 * 0000000140A05FFA: neg     ecx
 * 0000000140A05FFC: sbb     edx, edx
 * 0000000140A05FFE: and     edx, [rbx+924h]
 * 0000000140A06004: cmp     eax, 8
 * 0000000140A06007: jb      short loc_140A0601E
 * 0000000140A06009: mov     ecx, eax
 * 0000000140A0600B: shr     rcx, 3
 * 0000000140A0600F: mov     [rbx], r11
 * 0000000140A06012: add     eax, 0FFFFFFF8h
 * 0000000140A06015: add     rbx, 8
 * 0000000140A06019: sub     rcx, r9
 * 0000000140A0601C: jnz     short loc_140A0600F
 * 0000000140A0601E: test    eax, eax
 * 0000000140A06020: jz      short loc_140A06031
 * 0000000140A06022: mov     ecx, 0FFFFFFFFh
 * 0000000140A06027: mov     [rbx], r11b
 * 0000000140A0602A: add     rbx, r9
 * 0000000140A0602D: add     eax, ecx
 * 0000000140A0602F: jnz     short loc_140A06027
 * 0000000140A06031: mov     ebx, [r14+924h]
 * 0000000140A06038: mov     [r14+924h], edx
 * 0000000140A0603F: cmp     edx, 3
 * 0000000140A06042: jz      short loc_140A06077
 * 0000000140A06044: test    dword ptr [r14+990h], 10000000h
 * 0000000140A0604F: mov     ecx, r11d
 * 0000000140A06052: cmovz   ecx, edx
 * 0000000140A06055: test    ecx, ecx
 * 0000000140A06057: jz      short loc_140A0606E
 * 0000000140A06059: mov     rax, [r14+228h]
 * 0000000140A06060: lea     rcx, [r8-8]
 * 0000000140A06064: mov     rdx, [rcx]
 * 0000000140A06067: call    KeGuardDispatchICall
 * 0000000140A0606C: jmp     short loc_140A06086
 * 0000000140A0606E: mov     rax, [r14+100h]
 * 0000000140A06075: jmp     short loc_140A0607E
 * 0000000140A06077: mov     rax, [r14+368h]
 * 0000000140A0607E: mov     rcx, r8
 * 0000000140A06081: call    KeGuardDispatchICall
 * 0000000140A06086: mov     [r14+924h], ebx
 * 0000000140A0608D: xor     r11d, r11d
 * 0000000140A06090: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140A06098: mov     r9d, [rbp+0BE0h+var_BE8]
 * 0000000140A0609C: jmp     short loc_140A060A7
 * 0000000140A0609E: mov     r14, rbx
 * 0000000140A060A1: mov     [rbx+7E4h], eax
 * 0000000140A060A7: mov     ebx, [rbp+0BE0h+var_C38]
 * 0000000140A060AA: mov     r8d, 1
 * 0000000140A060B0: add     [r14+80Ch], r8d
 * 0000000140A060B7: add     rbx, r14
 * 0000000140A060BA: mov     [rsp+0CE0h+var_C70], rbx
 * 0000000140A060BF: mov     rax, rbx
 * 0000000140A060C2: lea     ecx, [r8+2Fh]
 * 0000000140A060C6: mov     [rbp+0BE0h+var_4D8], rbx
 * 0000000140A060CD: lea     edx, [rcx-2Ah]
 * 0000000140A060D0: mov     [rax], r11
 * 0000000140A060D3: add     ecx, 0FFFFFFF8h
 * 0000000140A060D6: add     rax, 8
 * 0000000140A060DA: sub     rdx, r8
 * 0000000140A060DD: jnz     short loc_140A060D0
 * 0000000140A060DF: test    ecx, ecx
 * 0000000140A060E1: jz      short loc_140A060F2
 * 0000000140A060E3: mov     edx, 0FFFFFFFFh
 * 0000000140A060E8: mov     [rax], r11b
 * 0000000140A060EB: add     rax, r8
 * 0000000140A060EE: add     ecx, edx
 * 0000000140A060F0: jnz     short loc_140A060E8
 * 0000000140A060F2: mov     [rbx], r13d
 * 0000000140A060F5: mov     [rbx+8], r15
 * 0000000140A060F9: cmp     r9d, 7
 * 0000000140A060FD: jnz     short loc_140A06116
 * 0000000140A060FF: test    r12d, r12d
 * 0000000140A06102: jz      short loc_140A06116
 * 0000000140A06104: lea     r9, [rbx+18h]
 * 0000000140A06108: mov     r8d, r12d
 * 0000000140A0610B: mov     rdx, r15
 * 0000000140A0610E: mov     rcx, r14
 * 0000000140A06111: call    sub_1403E6E8C
 * 0000000140A06116: mov     [rbx+10h], r12d
 * 0000000140A0611A: mov     r9, r15
 * 0000000140A0611D: add     [r14+828h], r12d
 * 0000000140A06124: mov     rax, r15
 * 0000000140A06127: mov     r10d, [r14+814h]
 * 0000000140A0612E: mov     rsi, [r14+818h]
 * 0000000140A06135: mov     ecx, r12d
 * 0000000140A06138: add     rcx, r15
 * 0000000140A0613B: cmp     r15, rcx
 * 0000000140A0613E: jnb     short loc_140A06150
 * 0000000140A06140: mov     edx, 40h ; '@'
 * 0000000140A06145: prefetchnta byte ptr [rax]
 * 0000000140A06148: add     rax, rdx
 * 0000000140A0614B: cmp     rax, rcx
 * 0000000140A0614E: jb      short loc_140A06145
 * 0000000140A06150: mov     r11d, r12d
 * 0000000140A06153: mov     r8, rsi
 * 0000000140A06156: shr     r11d, 7
 * 0000000140A0615A: mov     r13d, 1
 * 0000000140A06160: test    r11d, r11d
 * 0000000140A06163: jz      short loc_140A061D8
 * 0000000140A06165: mov     ebx, 0FFFFFFFFh
 * 0000000140A0616A: mov     r12, 7010008004002001h
 * 0000000140A06174: mov     eax, 8
 * 0000000140A06179: xor     r8, [r9]
 * 0000000140A0617C: mov     ecx, r10d
 * 0000000140A0617F: rol     r8, cl
 * 0000000140A06182: xor     r8, [r9+8]
 * 0000000140A06186: add     r9, 10h
 * 0000000140A0618A: rol     r8, cl
 * 0000000140A0618D: sub     rax, r13
 * 0000000140A06190: jnz     short loc_140A06179
 * 0000000140A06192: mov     rcx, r9
 * 0000000140A06195: sub     rcx, r15
 * 0000000140A06198: xor     rcx, rsi
 * 0000000140A0619B: mov     rax, rcx
 * 0000000140A0619E: rol     rax, 11h
 * 0000000140A061A2: xor     rcx, rax
 * 0000000140A061A5: mov     rax, r12
 * 0000000140A061A8: mul     rcx
 * 0000000140A061AB: xor     r10d, edx
 * 0000000140A061AE: mov     [rbp+0BE0h+var_4D0], rdx
 * 0000000140A061B5: xor     r10d, eax
 * 0000000140A061B8: and     r10d, 3Fh
 * 0000000140A061BC: cmovz   r10d, r13d
 * 0000000140A061C0: add     r11d, ebx
 * 0000000140A061C3: jnz     short loc_140A06174
 * 0000000140A061C5: mov     rbx, [rsp+0CE0h+var_C70]
 * 0000000140A061CA: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A061D1: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A061D8: mov     edx, r12d
 * 0000000140A061DB: and     edx, 7Fh
 * 0000000140A061DE: cmp     edx, 8
 * 0000000140A061E1: jb      short loc_140A061FE
 * 0000000140A061E3: mov     eax, edx
 * 0000000140A061E5: shr     rax, 3
 * 0000000140A061E9: xor     r8, [r9]
 * 0000000140A061EC: mov     ecx, r10d
 * 0000000140A061EF: rol     r8, cl
 * 0000000140A061F2: add     r9, 8
 * 0000000140A061F6: add     edx, 0FFFFFFF8h
 * 0000000140A061F9: sub     rax, r13
 * 0000000140A061FC: jnz     short loc_140A061E9
 * 0000000140A061FE: xor     r15d, r15d
 * 0000000140A06201: test    edx, edx
 * 0000000140A06203: jz      short loc_140A06223
 * 0000000140A06205: mov     r15d, 0FFFFFFFFh
 * 0000000140A0620B: movzx   eax, byte ptr [r9]
 * 0000000140A0620F: mov     ecx, r10d
 * 0000000140A06212: xor     r8, rax
 * 0000000140A06215: add     r9, r13
 * 0000000140A06218: rol     r8, cl
 * 0000000140A0621B: add     edx, r15d
 * 0000000140A0621E: jnz     short loc_140A0620B
 * 0000000140A06220: xor     r15d, r15d
 * 0000000140A06223: mov     rax, r8
 * 0000000140A06226: jmp     short loc_140A0622B
 * 0000000140A06228: xor     r8d, eax
 * 0000000140A0622B: shr     rax, 1Fh
 * 0000000140A0622F: test    rax, rax
 * 0000000140A06232: jnz     short loc_140A06228
 * 0000000140A06234: btr     r8d, 1Fh
 * 0000000140A06239: mov     rsi, r14
 * 0000000140A0623C: mov     [rbx+14h], r8d
 * 0000000140A06240: mov     rbx, r14
 * 0000000140A06243: add     [r14+828h], r12d
 * 0000000140A0624A: jmp     short loc_140A0624F
 * 0000000140A0624C: xor     r15d, r15d
 * 0000000140A0624F: mov     dword ptr [rbx+958h], 0Bh
 * 0000000140A06259: jmp     loc_140A03D8D
 * 0000000140A0625E: mov     r12d, 1
 * 0000000140A06264: cmp     [rbx+8F8h], r15d
 * 0000000140A0626B: jnz     loc_140A02AB7
 * 0000000140A06271: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0627B: add     rax, rbx
 * 0000000140A0627E: mov     [rbx+900h], rax
 * 0000000140A06285: mov     [rbx+908h], r15
 * 0000000140A0628C: mov     qword ptr [rbx+910h], 105h
 * 0000000140A06297: mov     qword ptr [rbx+918h], 0FFFFFFFFC000007Bh
 * 0000000140A062A2: jmp     loc_140A02AA6
 * 0000000140A062A7: mov     r12d, 1
 * 0000000140A062AD: jmp     loc_140A02ABD
 * 0000000140A062B2: mov     [rbx+970h], r13d
 * 0000000140A062B9: test    r14, r14
 * 0000000140A062BC: jz      loc_140A0651C
 * 0000000140A062C2: mov     rax, [rbx+288h]
 * 0000000140A062C9: mov     rcx, r14
 * 0000000140A062CC: call    KeGuardDispatchICall
 * 0000000140A062D1: jmp     loc_140A0651C
 * 0000000140A062D6: mov     eax, [rsi+830h]
 * 0000000140A062DC: test    r12b, al
 * 0000000140A062DF: jz      loc_140A0651C
 * 0000000140A062E5: mov     ecx, [rsi+970h]
 * 0000000140A062EB: mov     r13d, 0FFFFFFFFh
 * 0000000140A062F1: cmp     ecx, r13d
 * 0000000140A062F4: jz      short loc_140A06307
 * 0000000140A062F6: mov     rax, [rsi+278h]
 * 0000000140A062FD: call    KeGuardDispatchICall
 * 0000000140A06302: mov     rbx, rax
 * 0000000140A06305: jmp     short loc_140A0630A
 * 0000000140A06307: mov     rbx, r15
 * 0000000140A0630A: test    rbx, rbx
 * 0000000140A0630D: jnz     short loc_140A06329
 * 0000000140A0630F: mov     rax, [rsi+280h]
 * 0000000140A06316: xor     ecx, ecx
 * 0000000140A06318: call    KeGuardDispatchICall
 * 0000000140A0631D: mov     rbx, rax
 * 0000000140A06320: test    rax, rax
 * 0000000140A06323: jz      loc_140A0651C
 * 0000000140A06329: mov     rax, [rsi+290h]
 * 0000000140A06330: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A06337: mov     rcx, rbx
 * 0000000140A0633A: call    KeGuardDispatchICall
 * 0000000140A0633F: mov     r14d, eax
 * 0000000140A06342: test    eax, eax
 * 0000000140A06344: jns     short loc_140A06357
 * 0000000140A06346: mov     rax, [rsi+288h]
 * 0000000140A0634D: mov     rcx, rbx
 * 0000000140A06350: call    KeGuardDispatchICall
 * 0000000140A06355: jmp     short loc_140A063B9
 * 0000000140A06357: mov     [rsi+980h], rbx
 * 0000000140A0635E: mov     rax, [rsi+2B8h]
 * 0000000140A06365: call    KeGuardDispatchICall
 * 0000000140A0636A: mov     rbx, rax
 * 0000000140A0636D: mov     rax, [rsi+2D8h]
 * 0000000140A06374: mov     rcx, rbx
 * 0000000140A06377: call    KeGuardDispatchICall
 * 0000000140A0637C: mov     rdx, rax
 * 0000000140A0637F: test    rax, rax
 * 0000000140A06382: jnz     short loc_140A06389
 * 0000000140A06384: lea     ecx, [rax+4]
 * 0000000140A06387: jmp     short loc_140A0639B
 * 0000000140A06389: mov     rax, [rsi+2E8h]
 * 0000000140A06390: mov     rcx, rbx
 * 0000000140A06393: call    KeGuardDispatchICall
 * 0000000140A06398: mov     ecx, r15d
 * 0000000140A0639B: mov     eax, [rsi+994h]
 * 0000000140A063A1: mov     r14d, r15d
 * 0000000140A063A4: and     eax, 0FFFFFFFBh
 * 0000000140A063A7: or      eax, ecx
 * 0000000140A063A9: mov     [rsi+994h], eax
 * 0000000140A063AF: add     dword ptr [rsi+828h], 10000h
 * 0000000140A063B9: test    r14d, r14d
 * 0000000140A063BC: js      loc_140A0651C
 * 0000000140A063C2: mov     rax, [rsi+960h]
 * 0000000140A063C9: mov     rcx, [rax]
 * 0000000140A063CC: cmp     rcx, [rsi+968h]
 * 0000000140A063D3: jnz     loc_140A0647A
 * 0000000140A063D9: mov     rax, [rsi+570h]
 * 0000000140A063E0: cmp     [rax+30h], r15d
 * 0000000140A063E4: jz      loc_140A0647A
 * 0000000140A063EA: lock or [rsp+0CE0h+var_CE0], r15d
 * 0000000140A063EF: mov     rax, [rsi+960h]
 * 0000000140A063F6: mov     rcx, [rax]
 * 0000000140A063F9: cmp     rcx, [rsi+968h]
 * 0000000140A06400: jnz     short loc_140A0647A
 * 0000000140A06402: mov     rax, [rsi+960h]
 * 0000000140A06409: mov     rdx, [rax]
 * 0000000140A0640C: mov     eax, [rsi+8F8h]
 * 0000000140A06412: mov     rcx, [rsi+968h]
 * 0000000140A06419: test    eax, eax
 * 0000000140A0641B: jnz     short loc_140A0647A
 * 0000000140A0641D: mov     rax, [rsi+590h]
 * 0000000140A06424: xor     rcx, rdx
 * 0000000140A06427: mov     [rax+18h], rcx
 * 0000000140A0642B: mov     eax, [rsi+8F8h]
 * 0000000140A06431: mov     rcx, [rsi+968h]
 * 0000000140A06438: test    eax, eax
 * 0000000140A0643A: jnz     short loc_140A0647A
 * 0000000140A0643C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A06446: xor     edx, edx
 * 0000000140A06448: add     rax, rsi
 * 0000000140A0644B: mov     [rsi+900h], rax
 * 0000000140A06452: mov     [rsi+908h], r15
 * 0000000140A06459: mov     qword ptr [rsi+910h], 103h
 * 0000000140A06464: mov     [rsi+918h], rcx
 * 0000000140A0646B: mov     rcx, rsi
 * 0000000140A0646E: mov     [rsi+8F8h], r12d
 * 0000000140A06475: call    $$b8
 * 0000000140A0647A: mov     ecx, 8000h
 * 0000000140A0647F: test    [rsi+990h], ecx
 * 0000000140A06485: jnz     short loc_140A06494
 * 0000000140A06487: cmp     [rsi+8F8h], r15d
 * 0000000140A0648E: jnz     loc_140A0651C
 * 0000000140A06494: mov     rbx, [rsi+980h]
 * 0000000140A0649B: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A064A2: mov     [rsi+980h], r15
 * 0000000140A064A9: mov     rcx, rbx
 * 0000000140A064AC: mov     rax, [rsi+298h]
 * 0000000140A064B3: call    KeGuardDispatchICall
 * 0000000140A064B8: mov     eax, [rsi+990h]
 * 0000000140A064BE: test    r12b, al
 * 0000000140A064C1: jz      short loc_140A06501
 * 0000000140A064C3: and     eax, 0FFFFFFFEh
 * 0000000140A064C6: mov     rcx, rbx
 * 0000000140A064C9: mov     [rsi+990h], eax
 * 0000000140A064CF: mov     rax, [rsi+280h]
 * 0000000140A064D6: call    KeGuardDispatchICall
 * 0000000140A064DB: mov     rbx, rax
 * 0000000140A064DE: test    rax, rax
 * 0000000140A064E1: jz      short loc_140A064FA
 * 0000000140A064E3: mov     rax, [rsi+2A0h]
 * 0000000140A064EA: mov     rcx, rbx
 * 0000000140A064ED: call    KeGuardDispatchICall
 * 0000000140A064F2: mov     [rsi+970h], eax
 * 0000000140A064F8: jmp     short loc_140A06501
 * 0000000140A064FA: mov     [rsi+970h], r13d
 * 0000000140A06501: test    rbx, rbx
 * 0000000140A06504: jz      short loc_140A0651C
 * 0000000140A06506: mov     rax, [rsi+288h]
 * 0000000140A0650D: mov     rcx, rbx
 * 0000000140A06510: jmp     loc_140A062CC
 * 0000000140A06515: xor     r15d, r15d
 * 0000000140A06518: lea     r12d, [r15+1]
 * 0000000140A0651C: mov     [rsp+0CE0h+var_C80], rsi
 * 0000000140A06521: test    dword ptr [rsi+990h], 2000000h
 * 0000000140A0652B: jz      short loc_140A065AA
 * 0000000140A0652D: mov     rbx, [rsi+998h]
 * 0000000140A06534: mov     rax, [rsi+390h]
 * 0000000140A0653B: mov     rcx, rbx
 * 0000000140A0653E: call    KeGuardDispatchICall
 * 0000000140A06543: test    eax, eax
 * 0000000140A06545: jz      short loc_140A0658E
 * 0000000140A06547: cmp     [rsi+8F8h], r15d
 * 0000000140A0654E: jnz     short loc_140A0658E
 * 0000000140A06550: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0655A: xor     edx, edx
 * 0000000140A0655C: add     rax, rsi
 * 0000000140A0655F: mov     rcx, rsi
 * 0000000140A06562: mov     [rsi+900h], rax
 * 0000000140A06569: mov     [rsi+908h], r15
 * 0000000140A06570: mov     qword ptr [rsi+910h], 110h
 * 0000000140A0657B: mov     [rsi+918h], r15
 * 0000000140A06582: mov     [rsi+8F8h], r12d
 * 0000000140A06589: call    $$b8
 * 0000000140A0658E: mov     rax, [rsi+388h]
 * 0000000140A06595: lea     rdx, sub_140A0DEF0
 * 0000000140A0659C: xor     r9d, r9d
 * 0000000140A0659F: mov     r8, rsi
 * 0000000140A065A2: mov     rcx, rbx
 * 0000000140A065A5: call    KeGuardDispatchICall
 * 0000000140A065AA: mov     edx, r12d
 * 0000000140A065AD: mov     rcx, rsi
 * 0000000140A065B0: call    $$b8
 * 0000000140A065B5: test    dword ptr [rsi+994h], 100h
 * 0000000140A065BF: jz      short loc_140A065CC
 * 0000000140A065C1: mov     rax, [rbp+0BE0h+var_BD0]
 * 0000000140A065C5: mov     [rbp+0BE8h], rax
 * 0000000140A065CC: mov     r9d, [rsi+990h]
 * 0000000140A065D3: mov     r8d, r9d
 * 0000000140A065D6: bt      r9d, 12h
 * 0000000140A065DB: jnb     loc_140A06681
 * 0000000140A065E1: rdtsc
 * 0000000140A065E3: shl     rdx, 20h
 * 0000000140A065E7: or      rax, rdx
 * 0000000140A065EA: mov     rcx, rax
 * 0000000140A065ED: ror     rax, 3
 * 0000000140A065F1: xor     rcx, rax
 * 0000000140A065F4: mov     rax, 7010008004002001h
 * 0000000140A065FE: mul     rcx
 * 0000000140A06601: mov     rcx, rdx
 * 0000000140A06604: mov     [rbp+0BE0h+var_4C8], rdx
 * 0000000140A0660B: xor     rcx, rax
 * 0000000140A0660E: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140A06618: mul     rcx
 * 0000000140A0661B: shr     rdx, 3
 * 0000000140A0661F: lea     rax, [rdx+rdx*4]
 * 0000000140A06623: add     rax, rax
 * 0000000140A06626: sub     rcx, rax
 * 0000000140A06629: mov     eax, 2
 * 0000000140A0662E: cmp     rcx, rax
 * 0000000140A06631: jnb     short loc_140A06681
 * 0000000140A06633: cmp     [rsi+8F8h], r15d
 * 0000000140A0663A: jnz     short loc_140A06681
 * 0000000140A0663C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A06646: xor     edx, edx
 * 0000000140A06648: add     rax, rsi
 * 0000000140A0664B: mov     rcx, rsi
 * 0000000140A0664E: mov     [rsi+900h], rax
 * 0000000140A06655: mov     [rsi+908h], r15
 * 0000000140A0665C: mov     qword ptr [rsi+910h], 108h
 * 0000000140A06667: mov     [rsi+918h], r15
 * 0000000140A0666E: mov     [rsi+8F8h], r12d
 * 0000000140A06675: call    $$b8
 * 0000000140A0667A: mov     r8d, [rsi+990h]
 * 0000000140A06681: mov     r10d, 8000h
 * 0000000140A06687: bt      r8d, 1Eh
 * 0000000140A0668C: jb      short loc_140A066FD
 * 0000000140A0668E: test    r10d, r8d
 * 0000000140A06691: jnz     short loc_140A0669C
 * 0000000140A06693: cmp     [rsi+8F8h], r15d
 * 0000000140A0669A: jnz     short loc_140A066FD
 * 0000000140A0669C: mov     rcx, [rbp+0BE0h+arg_0]
 * 0000000140A066A3: test    [rcx+990h], r10d
 * 0000000140A066AA: jnz     short loc_140A066FD
 * 0000000140A066AC: add     rcx, 8F8h
 * 0000000140A066B3: cmp     [rcx], r15d
 * 0000000140A066B6: jz      short loc_140A066FD
 * 0000000140A066B8: mov     r8d, 28h ; '('
 * 0000000140A066BE: lea     rdx, [rsi+8F8h]
 * 0000000140A066C5: lea     r9d, [r8-23h]
 * 0000000140A066C9: mov     rax, [rdx]
 * 0000000140A066CC: add     r8d, 0FFFFFFF8h
 * 0000000140A066D0: mov     [rcx], rax
 * 0000000140A066D3: add     rdx, 8
 * 0000000140A066D7: add     rcx, 8
 * 0000000140A066DB: sub     r9, r12
 * 0000000140A066DE: jnz     short loc_140A066C9
 * 0000000140A066E0: test    r8d, r8d
 * 0000000140A066E3: jz      short loc_140A066FD
 * 0000000140A066E5: mov     r15d, 0FFFFFFFFh
 * 0000000140A066EB: mov     al, [rdx]
 * 0000000140A066ED: add     rdx, r12
 * 0000000140A066F0: mov     [rcx], al
 * 0000000140A066F2: add     rcx, r12
 * 0000000140A066F5: add     r8d, r15d
 * 0000000140A066F8: jnz     short loc_140A066EB
 * 0000000140A066FA: xor     r15d, r15d
 * 0000000140A066FD: test    [rsi+990h], r10d
 * 0000000140A06704: jnz     short loc_140A06713
 * 0000000140A06706: cmp     [rsi+8F8h], r15d
 * 0000000140A0670D: jnz     loc_140A07664
 * 0000000140A06713: mov     eax, [rsi+0A28h]
 * 0000000140A06719: test    eax, eax
 * 0000000140A0671B: jz      loc_140A07664
 * 0000000140A06721: lea     r14, [rsi+rax]
 * 0000000140A06725: mov     r11, [r14+8]
 * 0000000140A06729: mov     [rbp+0BE0h+var_C20], r14
 * 0000000140A0672D: test    r11, r11
 * 0000000140A06730: jz      loc_140A069F4
 * 0000000140A06736: mov     r9d, [r14+10h]
 * 0000000140A0673A: mov     r8, r11
 * 0000000140A0673D: add     [rsi+828h], r9d
 * 0000000140A06744: mov     rax, r11
 * 0000000140A06747: mov     r10d, [rsi+814h]
 * 0000000140A0674E: mov     r12, [rsi+818h]
 * 0000000140A06755: lea     rcx, [r11+r9]
 * 0000000140A06759: cmp     r11, rcx
 * 0000000140A0675C: jnb     short loc_140A0676E
 * 0000000140A0675E: mov     edx, 40h ; '@'
 * 0000000140A06763: prefetchnta byte ptr [rax]
 * 0000000140A06766: add     rax, rdx
 * 0000000140A06769: cmp     rax, rcx
 * 0000000140A0676C: jb      short loc_140A06763
 * 0000000140A0676E: mov     r15d, r9d
 * 0000000140A06771: mov     rbx, r12
 * 0000000140A06774: shr     r15d, 7
 * 0000000140A06778: mov     r13d, 1
 * 0000000140A0677E: test    r15d, r15d
 * 0000000140A06781: jz      short loc_140A067EC
 * 0000000140A06783: mov     rdi, 7010008004002001h
 * 0000000140A0678D: mov     eax, 8
 * 0000000140A06792: xor     rbx, [r8]
 * 0000000140A06795: mov     ecx, r10d
 * 0000000140A06798: rol     rbx, cl
 * 0000000140A0679B: xor     rbx, [r8+8]
 * 0000000140A0679F: add     r8, 10h
 * 0000000140A067A3: rol     rbx, cl
 * 0000000140A067A6: sub     rax, r13
 * 0000000140A067A9: jnz     short loc_140A06792
 * 0000000140A067AB: mov     rcx, r8
 * 0000000140A067AE: sub     rcx, r11
 * 0000000140A067B1: xor     rcx, r12
 * 0000000140A067B4: mov     rax, rcx
 * 0000000140A067B7: rol     rax, 11h
 * 0000000140A067BB: xor     rcx, rax
 * 0000000140A067BE: mov     rax, rdi
 * 0000000140A067C1: mul     rcx
 * 0000000140A067C4: xor     r10d, edx
 * 0000000140A067C7: mov     [rbp+0BE0h+var_4C0], rdx
 * 0000000140A067CE: xor     r10d, eax
 * 0000000140A067D1: mov     edx, 0FFFFFFFFh
 * 0000000140A067D6: and     r10d, 3Fh
 * 0000000140A067DA: cmovz   r10d, r13d
 * 0000000140A067DE: add     r15d, edx
 * 0000000140A067E1: jnz     short loc_140A0678D
 * 0000000140A067E3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A067EA: jmp     short loc_140A067F1
 * 0000000140A067EC: mov     edx, 0FFFFFFFFh
 * 0000000140A067F1: and     r9d, 7Fh
 * 0000000140A067F5: cmp     r9d, 8
 * 0000000140A067F9: jb      short loc_140A06818
 * 0000000140A067FB: mov     eax, r9d
 * 0000000140A067FE: shr     rax, 3
 * 0000000140A06802: xor     rbx, [r8]
 * 0000000140A06805: mov     ecx, r10d
 * 0000000140A06808: rol     rbx, cl
 * 0000000140A0680B: add     r8, 8
 * 0000000140A0680F: add     r9d, 0FFFFFFF8h
 * 0000000140A06813: sub     rax, r13
 * 0000000140A06816: jnz     short loc_140A06802
 * 0000000140A06818: xor     r15d, r15d
 * 0000000140A0681B: test    r9d, r9d
 * 0000000140A0681E: jz      short loc_140A06835
 * 0000000140A06820: movzx   eax, byte ptr [r8]
 * 0000000140A06824: mov     ecx, r10d
 * 0000000140A06827: xor     rbx, rax
 * 0000000140A0682A: add     r8, r13
 * 0000000140A0682D: rol     rbx, cl
 * 0000000140A06830: add     r9d, edx
 * 0000000140A06833: jnz     short loc_140A06820
 * 0000000140A06835: mov     rax, rbx
 * 0000000140A06838: jmp     short loc_140A0683C
 * 0000000140A0683A: xor     ebx, eax
 * 0000000140A0683C: shr     rax, 1Fh
 * 0000000140A06840: test    rax, rax
 * 0000000140A06843: jnz     short loc_140A0683A
 * 0000000140A06845: btr     ebx, 1Fh
 * 0000000140A06849: mov     r12d, r15d
 * 0000000140A0684C: cmp     ebx, [r14+14h]
 * 0000000140A06850: jz      loc_140A069BD
 * 0000000140A06856: cmp     [r14], r15d
 * 0000000140A06859: jnz     short loc_140A06863
 * 0000000140A0685B: cmp     [r14+18h], r15d
 * 0000000140A0685F: cmovnz  r12d, r13d
 * 0000000140A06863: mov     ecx, [r14+10h]
 * 0000000140A06867: mov     rdx, [r14+8]
 * 0000000140A0686B: test    rcx, rcx
 * 0000000140A0686E: jz      loc_140A06943
 * 0000000140A06874: mov     eax, [rsi+994h]
 * 0000000140A0687A: mov     r8d, 40h ; '@'
 * 0000000140A06880: test    r8b, al
 * 0000000140A06883: jz      loc_140A06943
 * 0000000140A06889: mov     rax, cr8
 * 0000000140A0688D: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A06894: mov     r8d, 2
 * 0000000140A0689A: mov     cr8, r8
 * 0000000140A0689E: dec     rcx
 * 0000000140A068A1: mov     r15, rdx
 * 0000000140A068A4: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140A068AB: add     rcx, rdx
 * 0000000140A068AE: or      rcx, 0FFFh
 * 0000000140A068B5: mov     [rsp+0CE0h+var_C70], rcx
 * 0000000140A068BA: lea     rcx, [r15-1]
 * 0000000140A068BE: mov     [rbp+0BE0h+var_BD0], rcx
 * 0000000140A068C2: movzx   r13d, al
 * 0000000140A068C6: mov     rax, [rsi+468h]
 * 0000000140A068CD: xor     edx, edx
 * 0000000140A068CF: mov     rcx, r15
 * 0000000140A068D2: call    KeGuardDispatchICall
 * 0000000140A068D7: cmp     eax, 0C000022Dh
 * 0000000140A068DC: jnz     short loc_140A0690B
 * 0000000140A068DE: test    r12d, r12d
 * 0000000140A068E1: jnz     short loc_140A0693C
 * 0000000140A068E3: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A068EA: lea     ecx, [r12+1]
 * 0000000140A068EF: cmp     al, cl
 * 0000000140A068F1: ja      short loc_140A06916
 * 0000000140A068F3: movzx   r13d, al
 * 0000000140A068F7: mov     cr8, r13
 * 0000000140A068FB: mov     al, [r15]
 * 0000000140A068FE: mov     rax, cr8
 * 0000000140A06902: lea     eax, [rcx+1]
 * 0000000140A06905: mov     cr8, rax
 * 0000000140A06909: jmp     short loc_140A068C6
 * 0000000140A0690B: test    eax, eax
 * 0000000140A0690D: js      short loc_140A0693C
 * 0000000140A0690F: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A06916: mov     rcx, [rbp+0BE0h+var_BD0]
 * 0000000140A0691A: mov     edx, 1000h
 * 0000000140A0691F: add     rcx, rdx
 * 0000000140A06922: add     r15, rdx
 * 0000000140A06925: mov     [rbp+0BE0h+var_BD0], rcx
 * 0000000140A06929: cmp     rcx, [rsp+0CE0h+var_C70]
 * 0000000140A0692E: jnz     short loc_140A068C2
 * 0000000140A06930: mov     cr8, r13
 * 0000000140A06934: xor     r15d, r15d
 * 0000000140A06937: jmp     loc_140A069BD
 * 0000000140A0693C: mov     cr8, r13
 * 0000000140A06940: xor     r15d, r15d
 * 0000000140A06943: mov     eax, [rsi+8F8h]
 * 0000000140A06949: mov     edx, [r14+14h]
 * 0000000140A0694D: test    eax, eax
 * 0000000140A0694F: jnz     short loc_140A06967
 * 0000000140A06951: mov     rax, [rsi+590h]
 * 0000000140A06958: mov     ecx, ebx
 * 0000000140A0695A: xor     rcx, rdx
 * 0000000140A0695D: mov     [rax+18h], rcx
 * 0000000140A06961: mov     eax, [rsi+8F8h]
 * 0000000140A06967: mov     rcx, [r14+8]
 * 0000000140A0696B: test    eax, eax
 * 0000000140A0696D: jnz     short loc_140A069BD
 * 0000000140A0696F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A06979: xor     edx, edx
 * 0000000140A0697B: add     rax, rsi
 * 0000000140A0697E: mov     [rsi+900h], rax
 * 0000000140A06985: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0698F: add     rax, r14
 * 0000000140A06992: mov     [rsi+908h], rax
 * 0000000140A06999: movsxd  rax, dword ptr [r14]
 * 0000000140A0699C: mov     [rsi+910h], rax
 * 0000000140A069A3: mov     eax, 1
 * 0000000140A069A8: mov     [rsi+918h], rcx
 * 0000000140A069AF: mov     rcx, rsi
 * 0000000140A069B2: mov     [rsi+8F8h], eax
 * 0000000140A069B8: call    $$b8
 * 0000000140A069BD: mov     rcx, [r14+18h]
 * 0000000140A069C1: mov     rax, [rsi+100h]
 * 0000000140A069C8: call    KeGuardDispatchICall
 * 0000000140A069CD: mov     [r14+8], r15
 * 0000000140A069D1: mov     [r14+10h], r15d
 * 0000000140A069D5: mov     rcx, [rsi+818h]
 * 0000000140A069DC: mov     rax, rcx
 * 0000000140A069DF: jmp     short loc_140A069E3
 * 0000000140A069E1: xor     ecx, eax
 * 0000000140A069E3: shr     rax, 1Fh
 * 0000000140A069E7: test    rax, rax
 * 0000000140A069EA: jnz     short loc_140A069E1
 * 0000000140A069EC: btr     ecx, 1Fh
 * 0000000140A069F0: mov     [r14+14h], ecx
 * 0000000140A069F4: rdtsc
 * 0000000140A069F6: shl     rdx, 20h
 * 0000000140A069FA: mov     r9, 7010008004002001h
 * 0000000140A06A04: or      rax, rdx
 * 0000000140A06A07: mov     rcx, rax
 * 0000000140A06A0A: ror     rax, 3
 * 0000000140A06A0E: xor     rcx, rax
 * 0000000140A06A11: mov     rax, r9
 * 0000000140A06A14: mul     rcx
 * 0000000140A06A17: mov     rcx, rdx
 * 0000000140A06A1A: mov     [rbp+0BE0h+var_4B8], rdx
 * 0000000140A06A21: xor     rcx, rax
 * 0000000140A06A24: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A06A2E: mul     rcx
 * 0000000140A06A31: shr     rdx, 1
 * 0000000140A06A34: lea     rax, [rdx+rdx*2]
 * 0000000140A06A38: cmp     rcx, rax
 * 0000000140A06A3B: jnz     loc_140A07670
 * 0000000140A06A41: mov     r8d, [rsi+810h]
 * 0000000140A06A48: lea     r12, [r14+18h]
 * 0000000140A06A4C: rdtsc
 * 0000000140A06A4E: shl     rdx, 20h
 * 0000000140A06A52: or      rax, rdx
 * 0000000140A06A55: mov     rcx, rax
 * 0000000140A06A58: ror     rax, 3
 * 0000000140A06A5C: xor     rcx, rax
 * 0000000140A06A5F: mov     rax, r9
 * 0000000140A06A62: mul     rcx
 * 0000000140A06A65: mov     rbx, rdx
 * 0000000140A06A68: mov     [rbp+0BE0h+var_4B0], rdx
 * 0000000140A06A6F: xor     ebx, eax
 * 0000000140A06A71: and     ebx, 7FFh
 * 0000000140A06A77: rdtsc
 * 0000000140A06A79: shl     rdx, 20h
 * 0000000140A06A7D: or      rax, rdx
 * 0000000140A06A80: mov     rcx, rax
 * 0000000140A06A83: ror     rax, 3
 * 0000000140A06A87: xor     rcx, rax
 * 0000000140A06A8A: mov     rax, r9
 * 0000000140A06A8D: mul     rcx
 * 0000000140A06A90: mov     ecx, [rsi+990h]
 * 0000000140A06A96: lea     r9d, [rbx+1]
 * 0000000140A06A9A: xor     rax, rdx
 * 0000000140A06A9D: mov     [rbp+0BE0h+var_4A8], rdx
 * 0000000140A06AA4: xor     edx, edx
 * 0000000140A06AA6: shr     ecx, 13h
 * 0000000140A06AA9: div     r9
 * 0000000140A06AAC: mov     rax, [rsi+0F8h]
 * 0000000140A06AB3: and     ecx, 200h
 * 0000000140A06AB9: mov     r15, rdx
 * 0000000140A06ABC: lea     edx, [rbx+0AA0h]
 * 0000000140A06AC2: call    KeGuardDispatchICall
 * 0000000140A06AC7: mov     r11, rax
 * 0000000140A06ACA: test    rax, rax
 * 0000000140A06ACD: jnz     loc_140A06E7E
 * 0000000140A06AD3: lea     r15d, [rax+1]
 * 0000000140A06AD7: add     [rsi+0A18h], r15d
 * 0000000140A06ADE: mov     r9, 7010008004002001h
 * 0000000140A06AE8: mov     r13d, [rsi+990h]
 * 0000000140A06AEF: mov     [rbp+0BE0h+var_C38], r11d
 * 0000000140A06AF3: mov     [rbp+0BE0h+var_C40], r11
 * 0000000140A06AF7: mov     dword ptr [rbp+0BE0h+arg_8], r13d
 * 0000000140A06AFE: bt      r13d, 1Eh
 * 0000000140A06B03: jb      loc_140A07A53
 * 0000000140A06B09: mov     r14, [rbp+0BE0h+arg_0]
 * 0000000140A06B10: cmp     rsi, r14
 * 0000000140A06B13: jnz     loc_140A07B56
 * 0000000140A06B19: mov     eax, 8000h
 * 0000000140A06B1E: test    eax, r13d
 * 0000000140A06B21: jnz     short loc_140A06B30
 * 0000000140A06B23: cmp     [rsi+8F8h], r11d
 * 0000000140A06B2A: jnz     loc_140A07811
 * 0000000140A06B30: mov     r8d, [r14+924h]
 * 0000000140A06B37: mov     rcx, r14
 * 0000000140A06B3A: mov     edx, [r14+7E4h]
 * 0000000140A06B41: call    sub_140A0BB30
 * 0000000140A06B46: mov     rsi, rax
 * 0000000140A06B49: test    rax, rax
 * 0000000140A06B4C: jz      loc_140A07811
 * 0000000140A06B52: mov     ecx, [rsi+954h]
 * 0000000140A06B58: mov     r15, 7010008004002001h
 * 0000000140A06B62: mov     r12d, [rsi+0A2Ch]
 * 0000000140A06B69: mov     rax, [rax+7C8h]
 * 0000000140A06B70: add     r12d, 0FFFFFF38h
 * 0000000140A06B77: mov     [rbp+0BE0h+var_C28], ecx
 * 0000000140A06B7A: mov     ecx, [rsi+990h]
 * 0000000140A06B80: mov     [rbp+0BE0h+var_C38], ecx
 * 0000000140A06B83: mov     rcx, [rsi+4E8h]
 * 0000000140A06B8A: shr     r12d, 3
 * 0000000140A06B8E: mov     [rbp+0BE0h+var_C30], rcx
 * 0000000140A06B92: mov     rcx, [rsi+5C0h]
 * 0000000140A06B99: mov     [rbp+0BE0h+var_BD0], rcx
 * 0000000140A06B9D: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A06BA1: mov     dword ptr [rbp+0BE0h+arg_8], r12d
 * 0000000140A06BA8: mov     [rsi+0C4h], r12d
 * 0000000140A06BAF: rdtsc
 * 0000000140A06BB1: shl     rdx, 20h
 * 0000000140A06BB5: or      rax, rdx
 * 0000000140A06BB8: mov     rcx, rax
 * 0000000140A06BBB: ror     rax, 3
 * 0000000140A06BBF: xor     rcx, rax
 * 0000000140A06BC2: mov     rax, r15
 * 0000000140A06BC5: mul     rcx
 * 0000000140A06BC8: mov     rbx, rdx
 * 0000000140A06BCB: mov     [rbp+0BE0h+var_460], rdx
 * 0000000140A06BD2: xor     rbx, rax
 * 0000000140A06BD5: jz      short loc_140A06BAF
 * 0000000140A06BD7: mov     rax, [rsi+7B8h]
 * 0000000140A06BDE: lea     r14, [rsi+798h]
 * 0000000140A06BE5: mov     r11d, 20h ; ' '
 * 0000000140A06BEB: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A06BF0: mov     eax, [rsi+828h]
 * 0000000140A06BF6: lea     rdx, [rbp+0BE0h+var_D0]
 * 0000000140A06BFD: mov     [rbp+0BE0h+var_BE8], eax
 * 0000000140A06C00: mov     r8d, r11d
 * 0000000140A06C03: mov     rcx, r14
 * 0000000140A06C06: xor     r15d, r15d
 * 0000000140A06C09: lea     r10d, [r11-1Ch]
 * 0000000140A06C0D: mov     r9d, r10d
 * 0000000140A06C10: lea     r13d, [r11-1Fh]
 * 0000000140A06C14: mov     rax, [rcx]
 * 0000000140A06C17: add     r8d, 0FFFFFFF8h
 * 0000000140A06C1B: mov     [rdx], rax
 * 0000000140A06C1E: add     rcx, 8
 * 0000000140A06C22: add     rdx, 8
 * 0000000140A06C26: sub     r9, r13
 * 0000000140A06C29: jnz     short loc_140A06C14
 * 0000000140A06C2B: test    r8d, r8d
 * 0000000140A06C2E: jz      short loc_140A06C48
 * 0000000140A06C30: mov     r15d, 0FFFFFFFFh
 * 0000000140A06C36: mov     al, [rcx]
 * 0000000140A06C38: add     rcx, r13
 * 0000000140A06C3B: mov     [rdx], al
 * 0000000140A06C3D: add     rdx, r13
 * 0000000140A06C40: add     r8d, r15d
 * 0000000140A06C43: jnz     short loc_140A06C36
 * 0000000140A06C45: xor     r15d, r15d
 * 0000000140A06C48: mov     [rsi+7B8h], r15
 * 0000000140A06C4F: mov     ecx, r11d
 * 0000000140A06C52: mov     [rsi+828h], r15d
 * 0000000140A06C59: mov     rax, r14
 * 0000000140A06C5C: mov     rdx, r10
 * 0000000140A06C5F: mov     [rax], r15
 * 0000000140A06C62: add     ecx, 0FFFFFFF8h
 * 0000000140A06C65: add     rax, 8
 * 0000000140A06C69: sub     rdx, r13
 * 0000000140A06C6C: jnz     short loc_140A06C5F
 * 0000000140A06C6E: mov     edx, 0FFFFFFFFh
 * 0000000140A06C73: test    ecx, ecx
 * 0000000140A06C75: jz      short loc_140A06C81
 * 0000000140A06C77: mov     [rax], r15b
 * 0000000140A06C7A: add     rax, r13
 * 0000000140A06C7D: add     ecx, edx
 * 0000000140A06C7F: jnz     short loc_140A06C77
 * 0000000140A06C81: mov     eax, [rsi+7E4h]
 * 0000000140A06C87: mov     r10, rsi
 * 0000000140A06C8A: add     [rsi+828h], eax
 * 0000000140A06C90: mov     rax, rsi
 * 0000000140A06C93: mov     r11d, [rsi+7E4h]
 * 0000000140A06C9A: mov     r9d, [rsi+814h]
 * 0000000140A06CA1: mov     r13, [rsi+818h]
 * 0000000140A06CA8: lea     rcx, [rsi+r11]
 * 0000000140A06CAC: cmp     rsi, rcx
 * 0000000140A06CAF: jnb     short loc_140A06CC2
 * 0000000140A06CB1: mov     r8d, 40h ; '@'
 * 0000000140A06CB7: prefetchnta byte ptr [rax]
 * 0000000140A06CBA: add     rax, r8
 * 0000000140A06CBD: cmp     rax, rcx
 * 0000000140A06CC0: jb      short loc_140A06CB7
 * 0000000140A06CC2: mov     r15d, r11d
 * 0000000140A06CC5: mov     r8, r13
 * 0000000140A06CC8: shr     r15d, 7
 * 0000000140A06CCC: test    r15d, r15d
 * 0000000140A06CCF: jz      short loc_140A06D4B
 * 0000000140A06CD1: mov     r12, 7010008004002001h
 * 0000000140A06CDB: mov     edx, 8
 * 0000000140A06CE0: lea     edi, [rdx-7]
 * 0000000140A06CE3: mov     rax, [r10]
 * 0000000140A06CE6: mov     ecx, r9d
 * 0000000140A06CE9: xor     rax, r8
 * 0000000140A06CEC: mov     r8, [r10+8]
 * 0000000140A06CF0: rol     rax, cl
 * 0000000140A06CF3: add     r10, 10h
 * 0000000140A06CF7: xor     r8, rax
 * 0000000140A06CFA: rol     r8, cl
 * 0000000140A06CFD: sub     rdx, rdi
 * 0000000140A06D00: jnz     short loc_140A06CE3
 * 0000000140A06D02: mov     rcx, r10
 * 0000000140A06D05: sub     rcx, rsi
 * 0000000140A06D08: xor     rcx, r13
 * 0000000140A06D0B: mov     rax, rcx
 * 0000000140A06D0E: rol     rax, 11h
 * 0000000140A06D12: xor     rcx, rax
 * 0000000140A06D15: mov     rax, r12
 * 0000000140A06D18: mul     rcx
 * 0000000140A06D1B: xor     r9d, eax
 * 0000000140A06D1E: mov     [rbp+0BE0h+var_458], rdx
 * 0000000140A06D25: xor     r9d, edx
 * 0000000140A06D28: mov     rax, rdi
 * 0000000140A06D2B: and     r9d, 3Fh
 * 0000000140A06D2F: mov     edx, 0FFFFFFFFh
 * 0000000140A06D34: cmovz   r9d, eax
 * 0000000140A06D38: add     r15d, edx
 * 0000000140A06D3B: jnz     short loc_140A06CDB
 * 0000000140A06D3D: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A06D44: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A06D4B: and     r11d, 7Fh
 * 0000000140A06D4F: mov     r13d, 1
 * 0000000140A06D55: cmp     r11d, 8
 * 0000000140A06D59: jb      short loc_140A06D7D
 * 0000000140A06D5B: mov     edx, r11d
 * 0000000140A06D5E: shr     rdx, 3
 * 0000000140A06D62: xor     r8, [r10]
 * 0000000140A06D65: mov     ecx, r9d
 * 0000000140A06D68: rol     r8, cl
 * 0000000140A06D6B: add     r10, 8
 * 0000000140A06D6F: add     r11d, 0FFFFFFF8h
 * 0000000140A06D73: sub     rdx, r13
 * 0000000140A06D76: jnz     short loc_140A06D62
 * 0000000140A06D78: mov     edx, 0FFFFFFFFh
 * 0000000140A06D7D: test    r11d, r11d
 * 0000000140A06D80: jz      short loc_140A06D97
 * 0000000140A06D82: movzx   eax, byte ptr [r10]
 * 0000000140A06D86: mov     ecx, r9d
 * 0000000140A06D89: xor     r8, rax
 * 0000000140A06D8C: add     r10, r13
 * 0000000140A06D8F: rol     r8, cl
 * 0000000140A06D92: add     r11d, edx
 * 0000000140A06D95: jnz     short loc_140A06D82
 * 0000000140A06D97: mov     rax, [rsp+0CE0h+var_C70]
 * 0000000140A06D9C: lea     rcx, [rbp+0BE0h+var_D0]
 * 0000000140A06DA3: mov     r9d, 4
 * 0000000140A06DA9: mov     [rsi+7B8h], rax
 * 0000000140A06DB0: mov     eax, [rbp+0BE0h+var_BE8]
 * 0000000140A06DB3: mov     edx, r9d
 * 0000000140A06DB6: add     [rsi+828h], eax
 * 0000000140A06DBC: lea     r10d, [r9+1Ch]
 * 0000000140A06DC0: mov     rax, [rcx]
 * 0000000140A06DC3: add     r10d, 0FFFFFFF8h
 * 0000000140A06DC7: mov     [r14], rax
 * 0000000140A06DCA: add     rcx, 8
 * 0000000140A06DCE: add     r14, 8
 * 0000000140A06DD2: sub     rdx, r13
 * 0000000140A06DD5: jnz     short loc_140A06DC0
 * 0000000140A06DD7: xor     r11d, r11d
 * 0000000140A06DDA: test    r10d, r10d
 * 0000000140A06DDD: jz      short loc_140A06DF8
 * 0000000140A06DDF: mov     r11d, 0FFFFFFFFh
 * 0000000140A06DE5: mov     al, [rcx]
 * 0000000140A06DE7: add     rcx, r13
 * 0000000140A06DEA: mov     [r14], al
 * 0000000140A06DED: add     r14, r13
 * 0000000140A06DF0: add     r10d, r11d
 * 0000000140A06DF3: jnz     short loc_140A06DE5
 * 0000000140A06DF5: xor     r11d, r11d
 * 0000000140A06DF8: mov     [rsi+7B8h], r8
 * 0000000140A06DFF: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A06E09: jnz     loc_140A08037
 * 0000000140A06E0F: mov     eax, r11d
 * 0000000140A06E12: mov     rcx, rsi
 * 0000000140A06E15: mov     r11d, 19h
 * 0000000140A06E1B: xor     [rcx], rbx
 * 0000000140A06E1E: add     eax, r13d
 * 0000000140A06E21: lea     rcx, [rcx+8]
 * 0000000140A06E25: cmp     eax, r11d
 * 0000000140A06E28: jb      short loc_140A06E1B
 * 0000000140A06E2A: xor     r15d, r15d
 * 0000000140A06E2D: mov     [rbp+0BE0h+var_A00], rbx
 * 0000000140A06E34: mov     r8d, r12d
 * 0000000140A06E37: test    r12d, r12d
 * 0000000140A06E3A: jz      loc_140A0767C
 * 0000000140A06E40: mov     edx, r12d
 * 0000000140A06E43: dec     rdx
 * 0000000140A06E46: lea     rdx, [rcx+rdx*8]
 * 0000000140A06E4A: xor     [rdx], rbx
 * 0000000140A06E4D: lea     rax, [rbp+0BE0h+var_A00]
 * 0000000140A06E54: mov     ecx, r8d
 * 0000000140A06E57: lea     rdx, [rdx-8]
 * 0000000140A06E5B: ror     rbx, cl
 * 0000000140A06E5E: mov     [rbp+0BE0h+var_A00], rbx
 * 0000000140A06E65: and     ebx, 3Fh
 * 0000000140A06E68: btc     [rax], rbx
 * 0000000140A06E6C: sub     r8d, r13d
 * 0000000140A06E6F: jz      loc_140A0767C
 * 0000000140A06E75: mov     rbx, [rbp+0BE0h+var_A00]
 * 0000000140A06E7C: jmp     short loc_140A06E4A
 * 0000000140A06E7E: mov     r9d, r15d
 * 0000000140A06E81: mov     r8, r11
 * 0000000140A06E84: cmp     r15d, 8
 * 0000000140A06E88: jb      short loc_140A06ED8
 * 0000000140A06E8A: mov     r10d, r15d
 * 0000000140A06E8D: mov     r13d, 1
 * 0000000140A06E93: shr     r10, 3
 * 0000000140A06E97: mov     r14, 7010008004002001h
 * 0000000140A06EA1: rdtsc
 * 0000000140A06EA3: shl     rdx, 20h
 * 0000000140A06EA7: add     r9d, 0FFFFFFF8h
 * 0000000140A06EAB: or      rax, rdx
 * 0000000140A06EAE: mov     rcx, rax
 * 0000000140A06EB1: ror     rax, 3
 * 0000000140A06EB5: xor     rcx, rax
 * 0000000140A06EB8: mov     rax, r14
 * 0000000140A06EBB: mul     rcx
 * 0000000140A06EBE: mov     [rbp+0BE0h+var_4A0], rdx
 * 0000000140A06EC5: xor     rdx, rax
 * 0000000140A06EC8: mov     [r8], rdx
 * 0000000140A06ECB: add     r8, 8
 * 0000000140A06ECF: sub     r10, r13
 * 0000000140A06ED2: jnz     short loc_140A06EA1
 * 0000000140A06ED4: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A06ED8: test    r9d, r9d
 * 0000000140A06EDB: jz      short loc_140A06F20
 * 0000000140A06EDD: rdtsc
 * 0000000140A06EDF: shl     rdx, 20h
 * 0000000140A06EE3: or      rax, rdx
 * 0000000140A06EE6: mov     rcx, rax
 * 0000000140A06EE9: ror     rax, 3
 * 0000000140A06EED: xor     rcx, rax
 * 0000000140A06EF0: mov     rax, 7010008004002001h
 * 0000000140A06EFA: mul     rcx
 * 0000000140A06EFD: mov     ecx, 0FFFFFFFFh
 * 0000000140A06F02: mov     [rbp+0BE0h+var_498], rdx
 * 0000000140A06F09: xor     rdx, rax
 * 0000000140A06F0C: mov     eax, 1
 * 0000000140A06F11: mov     [r8], dl
 * 0000000140A06F14: add     r8, rax
 * 0000000140A06F17: shr     rdx, 8
 * 0000000140A06F1B: add     r9d, ecx
 * 0000000140A06F1E: jnz     short loc_140A06F11
 * 0000000140A06F20: mov     r9d, r15d
 * 0000000140A06F23: sub     ebx, r15d
 * 0000000140A06F26: add     r9, r11
 * 0000000140A06F29: mov     r15d, 1
 * 0000000140A06F2F: lea     r8, [r9+0AA0h]
 * 0000000140A06F36: cmp     ebx, 8
 * 0000000140A06F39: jb      short loc_140A06F7E
 * 0000000140A06F3B: mov     r10d, ebx
 * 0000000140A06F3E: mov     r13, 7010008004002001h
 * 0000000140A06F48: shr     r10, 3
 * 0000000140A06F4C: rdtsc
 * 0000000140A06F4E: shl     rdx, 20h
 * 0000000140A06F52: add     ebx, 0FFFFFFF8h
 * 0000000140A06F55: or      rax, rdx
 * 0000000140A06F58: mov     rcx, rax
 * 0000000140A06F5B: ror     rax, 3
 * 0000000140A06F5F: xor     rcx, rax
 * 0000000140A06F62: mov     rax, r13
 * 0000000140A06F65: mul     rcx
 * 0000000140A06F68: mov     [rbp+0BE0h+var_490], rdx
 * 0000000140A06F6F: xor     rdx, rax
 * 0000000140A06F72: mov     [r8], rdx
 * 0000000140A06F75: add     r8, 8
 * 0000000140A06F79: sub     r10, r15
 * 0000000140A06F7C: jnz     short loc_140A06F4C
 * 0000000140A06F7E: test    ebx, ebx
 * 0000000140A06F80: jz      short loc_140A06FBF
 * 0000000140A06F82: rdtsc
 * 0000000140A06F84: shl     rdx, 20h
 * 0000000140A06F88: or      rax, rdx
 * 0000000140A06F8B: mov     rcx, rax
 * 0000000140A06F8E: ror     rax, 3
 * 0000000140A06F92: xor     rcx, rax
 * 0000000140A06F95: mov     rax, 7010008004002001h
 * 0000000140A06F9F: mul     rcx
 * 0000000140A06FA2: mov     [rbp+0BE0h+var_488], rdx
 * 0000000140A06FA9: xor     rdx, rax
 * 0000000140A06FAC: mov     eax, 0FFFFFFFFh
 * 0000000140A06FB1: mov     [r8], dl
 * 0000000140A06FB4: add     r8, r15
 * 0000000140A06FB7: shr     rdx, 8
 * 0000000140A06FBB: add     ebx, eax
 * 0000000140A06FBD: jnz     short loc_140A06FB1
 * 0000000140A06FBF: test    r12, r12
 * 0000000140A06FC2: jz      short loc_140A06FC8
 * 0000000140A06FC4: mov     [r12], r11
 * 0000000140A06FC8: xor     r11d, r11d
 * 0000000140A06FCB: test    r9, r9
 * 0000000140A06FCE: jz      loc_140A06ADE
 * 0000000140A06FD4: mov     r10d, 0AA0h
 * 0000000140A06FDA: mov     [r14+8], r9
 * 0000000140A06FDE: mov     [r14+10h], r10d
 * 0000000140A06FE2: mov     r8d, r10d
 * 0000000140A06FE5: mov     r14d, 154h
 * 0000000140A06FEB: mov     rcx, rsi
 * 0000000140A06FEE: mov     rdx, r9
 * 0000000140A06FF1: mov     rax, [rcx]
 * 0000000140A06FF4: add     r8d, 0FFFFFFF8h
 * 0000000140A06FF8: mov     [rdx], rax
 * 0000000140A06FFB: add     rcx, 8
 * 0000000140A06FFF: add     rdx, 8
 * 0000000140A07003: sub     r14, r15
 * 0000000140A07006: jnz     short loc_140A06FF1
 * 0000000140A07008: test    r8d, r8d
 * 0000000140A0700B: jz      short loc_140A07028
 * 0000000140A0700D: mov     r10d, 0FFFFFFFFh
 * 0000000140A07013: mov     al, [rcx]
 * 0000000140A07015: add     rcx, r15
 * 0000000140A07018: mov     [rdx], al
 * 0000000140A0701A: add     rdx, r15
 * 0000000140A0701D: add     r8d, r10d
 * 0000000140A07020: jnz     short loc_140A07013
 * 0000000140A07022: mov     r10d, 0AA0h
 * 0000000140A07028: bts     dword ptr [r9+990h], 13h
 * 0000000140A07031: mov     r14, 7010008004002001h
 * 0000000140A0703B: mov     [r9+7E4h], r10d
 * 0000000140A07042: mov     [r9+808h], r10d
 * 0000000140A07049: and     dword ptr [r9+990h], 0FFFFFFFDh
 * 0000000140A07051: mov     eax, [r9+7E4h]
 * 0000000140A07058: mov     [r9+0A2Ch], eax
 * 0000000140A0705F: add     eax, 0FFFFFF38h
 * 0000000140A07064: mov     ecx, [r9+954h]
 * 0000000140A0706B: mov     [rbp+0BE0h+var_C28], ecx
 * 0000000140A0706E: mov     ecx, [r9+990h]
 * 0000000140A07075: mov     dword ptr [rbp+0BE0h+arg_8], ecx
 * 0000000140A0707B: mov     rcx, [r9+4E8h]
 * 0000000140A07082: shr     eax, 3
 * 0000000140A07085: mov     [rbp+0BE0h+var_C30], rcx
 * 0000000140A07089: mov     rcx, [r9+5C0h]
 * 0000000140A07090: mov     [rbp+0BE0h+var_C40], rcx
 * 0000000140A07094: mov     [rbp+0BE0h+var_C38], eax
 * 0000000140A07097: mov     [r9+0C4h], eax
 * 0000000140A0709E: rdtsc
 * 0000000140A070A0: shl     rdx, 20h
 * 0000000140A070A4: or      rax, rdx
 * 0000000140A070A7: mov     rcx, rax
 * 0000000140A070AA: ror     rax, 3
 * 0000000140A070AE: xor     rcx, rax
 * 0000000140A070B1: mov     rax, r14
 * 0000000140A070B4: mul     rcx
 * 0000000140A070B7: mov     rbx, rdx
 * 0000000140A070BA: mov     [rbp+0BE0h+var_480], rdx
 * 0000000140A070C1: xor     rbx, rax
 * 0000000140A070C4: jz      short loc_140A0709E
 * 0000000140A070C6: mov     rax, [r9+7B8h]
 * 0000000140A070CD: lea     r12, [r9+798h]
 * 0000000140A070D4: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A070D8: lea     rdx, [rbp+0BE0h+var_F0]
 * 0000000140A070DF: mov     r15d, 20h ; ' '
 * 0000000140A070E5: mov     [rbp+0BE0h+var_BD0], rax
 * 0000000140A070E9: mov     eax, [r9+828h]
 * 0000000140A070F0: mov     r8d, r15d
 * 0000000140A070F3: mov     [rbp+0BE0h+var_BE8], eax
 * 0000000140A070F6: mov     rcx, r12
 * 0000000140A070F9: lea     r11d, [r15-1Ch]
 * 0000000140A070FD: mov     r10d, r11d
 * 0000000140A07100: lea     r13d, [r15-1Fh]
 * 0000000140A07104: mov     rax, [rcx]
 * 0000000140A07107: add     r8d, 0FFFFFFF8h
 * 0000000140A0710B: mov     [rdx], rax
 * 0000000140A0710E: add     rcx, 8
 * 0000000140A07112: add     rdx, 8
 * 0000000140A07116: sub     r10, r13
 * 0000000140A07119: jnz     short loc_140A07104
 * 0000000140A0711B: test    r8d, r8d
 * 0000000140A0711E: jz      short loc_140A07138
 * 0000000140A07120: mov     r10d, 0FFFFFFFFh
 * 0000000140A07126: mov     al, [rcx]
 * 0000000140A07128: add     rcx, r13
 * 0000000140A0712B: mov     [rdx], al
 * 0000000140A0712D: add     rdx, r13
 * 0000000140A07130: add     r8d, r10d
 * 0000000140A07133: jnz     short loc_140A07126
 * 0000000140A07135: xor     r10d, r10d
 * 0000000140A07138: mov     [r9+7B8h], r10
 * 0000000140A0713F: mov     ecx, r15d
 * 0000000140A07142: mov     [r9+828h], r10d
 * 0000000140A07149: mov     rax, r12
 * 0000000140A0714C: mov     rdx, r11
 * 0000000140A0714F: mov     [rax], r10
 * 0000000140A07152: add     ecx, 0FFFFFFF8h
 * 0000000140A07155: add     rax, 8
 * 0000000140A07159: sub     rdx, r13
 * 0000000140A0715C: jnz     short loc_140A0714F
 * 0000000140A0715E: test    ecx, ecx
 * 0000000140A07160: jz      short loc_140A07171
 * 0000000140A07162: mov     edx, 0FFFFFFFFh
 * 0000000140A07167: mov     [rax], r10b
 * 0000000140A0716A: add     rax, r13
 * 0000000140A0716D: add     ecx, edx
 * 0000000140A0716F: jnz     short loc_140A07167
 * 0000000140A07171: mov     eax, [r9+7E4h]
 * 0000000140A07178: mov     r10, r9
 * 0000000140A0717B: add     [r9+828h], eax
 * 0000000140A07182: mov     rax, r9
 * 0000000140A07185: mov     r11d, [r9+7E4h]
 * 0000000140A0718C: mov     r15d, [r9+814h]
 * 0000000140A07193: mov     rdx, [r9+818h]
 * 0000000140A0719A: lea     rcx, [r9+r11]
 * 0000000140A0719E: cmp     r9, rcx
 * 0000000140A071A1: jnb     short loc_140A071B4
 * 0000000140A071A3: mov     r8d, 40h ; '@'
 * 0000000140A071A9: prefetchnta byte ptr [rax]
 * 0000000140A071AC: add     rax, r8
 * 0000000140A071AF: cmp     rax, rcx
 * 0000000140A071B2: jb      short loc_140A071A9
 * 0000000140A071B4: mov     r13d, r11d
 * 0000000140A071B7: mov     r8, rdx
 * 0000000140A071BA: shr     r13d, 7
 * 0000000140A071BE: test    r13d, r13d
 * 0000000140A071C1: jz      loc_140A07248
 * 0000000140A071C7: mov     rdi, rdx
 * 0000000140A071CA: mov     r12, 7010008004002001h
 * 0000000140A071D4: mov     edx, 8
 * 0000000140A071D9: lea     r14d, [rdx-7]
 * 0000000140A071DD: mov     rax, [r10]
 * 0000000140A071E0: mov     ecx, r15d
 * 0000000140A071E3: xor     rax, r8
 * 0000000140A071E6: mov     r8, [r10+8]
 * 0000000140A071EA: rol     rax, cl
 * 0000000140A071ED: add     r10, 10h
 * 0000000140A071F1: xor     r8, rax
 * 0000000140A071F4: rol     r8, cl
 * 0000000140A071F7: sub     rdx, r14
 * 0000000140A071FA: jnz     short loc_140A071DD
 * 0000000140A071FC: mov     rcx, r10
 * 0000000140A071FF: sub     rcx, r9
 * 0000000140A07202: xor     rcx, rdi
 * 0000000140A07205: mov     rax, rcx
 * 0000000140A07208: rol     rax, 11h
 * 0000000140A0720C: xor     rcx, rax
 * 0000000140A0720F: mov     rax, r12
 * 0000000140A07212: mul     rcx
 * 0000000140A07215: mov     [rbp+0BE0h+var_478], rdx
 * 0000000140A0721C: xor     edx, eax
 * 0000000140A0721E: xor     r15d, edx
 * 0000000140A07221: mov     rax, r14
 * 0000000140A07224: and     r15d, 3Fh
 * 0000000140A07228: cmovz   r15d, eax
 * 0000000140A0722C: mov     eax, 0FFFFFFFFh
 * 0000000140A07231: add     r13d, eax
 * 0000000140A07234: jnz     short loc_140A071D4
 * 0000000140A07236: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0723A: lea     r12, [r9+798h]
 * 0000000140A07241: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A07248: and     r11d, 7Fh
 * 0000000140A0724C: mov     r13d, 1
 * 0000000140A07252: cmp     r11d, 8
 * 0000000140A07256: jb      short loc_140A07275
 * 0000000140A07258: mov     edx, r11d
 * 0000000140A0725B: shr     rdx, 3
 * 0000000140A0725F: xor     r8, [r10]
 * 0000000140A07262: mov     ecx, r15d
 * 0000000140A07265: rol     r8, cl
 * 0000000140A07268: add     r10, 8
 * 0000000140A0726C: add     r11d, 0FFFFFFF8h
 * 0000000140A07270: sub     rdx, r13
 * 0000000140A07273: jnz     short loc_140A0725F
 * 0000000140A07275: test    r11d, r11d
 * 0000000140A07278: jz      short loc_140A07299
 * 0000000140A0727A: mov     r14d, 0FFFFFFFFh
 * 0000000140A07280: movzx   eax, byte ptr [r10]
 * 0000000140A07284: mov     ecx, r15d
 * 0000000140A07287: xor     r8, rax
 * 0000000140A0728A: add     r10, r13
 * 0000000140A0728D: rol     r8, cl
 * 0000000140A07290: add     r11d, r14d
 * 0000000140A07293: jnz     short loc_140A07280
 * 0000000140A07295: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A07299: mov     rax, [rbp+0BE0h+var_BD0]
 * 0000000140A0729D: lea     rcx, [rbp+0BE0h+var_F0]
 * 0000000140A072A4: mov     [r9+7B8h], rax
 * 0000000140A072AB: mov     edx, 20h ; ' '
 * 0000000140A072B0: mov     eax, [rbp+0BE0h+var_BE8]
 * 0000000140A072B3: add     [r9+828h], eax
 * 0000000140A072BA: lea     r11d, [rdx-1Ch]
 * 0000000140A072BE: mov     r10d, r11d
 * 0000000140A072C1: mov     rax, [rcx]
 * 0000000140A072C4: add     edx, 0FFFFFFF8h
 * 0000000140A072C7: mov     [r12], rax
 * 0000000140A072CB: add     rcx, 8
 * 0000000140A072CF: add     r12, 8
 * 0000000140A072D3: sub     r10, r13
 * 0000000140A072D6: jnz     short loc_140A072C1
 * 0000000140A072D8: test    edx, edx
 * 0000000140A072DA: jz      short loc_140A072F6
 * 0000000140A072DC: mov     r10d, 0FFFFFFFFh
 * 0000000140A072E2: mov     al, [rcx]
 * 0000000140A072E4: add     rcx, r13
 * 0000000140A072E7: mov     [r12], al
 * 0000000140A072EB: add     r12, r13
 * 0000000140A072EE: add     edx, r10d
 * 0000000140A072F1: jnz     short loc_140A072E2
 * 0000000140A072F3: xor     r10d, r10d
 * 0000000140A072F6: mov     [r9+7B8h], r8
 * 0000000140A072FD: test    dword ptr [r9+990h], 40000000h
 * 0000000140A07308: jnz     loc_140A0752C
 * 0000000140A0730E: mov     rcx, r9
 * 0000000140A07311: mov     eax, r10d
 * 0000000140A07314: mov     r15d, 19h
 * 0000000140A0731A: xor     [rcx], rbx
 * 0000000140A0731D: add     eax, r13d
 * 0000000140A07320: lea     rcx, [rcx+8]
 * 0000000140A07324: cmp     eax, r15d
 * 0000000140A07327: jb      short loc_140A0731A
 * 0000000140A07329: mov     r13d, [rbp+0BE0h+var_C38]
 * 0000000140A0732D: mov     [rbp+0BE0h+var_A08], rbx
 * 0000000140A07334: mov     r8d, r13d
 * 0000000140A07337: test    r13d, r13d
 * 0000000140A0733A: jz      short loc_140A0737E
 * 0000000140A0733C: lea     rdx, [r13-1]
 * 0000000140A07340: mov     r14d, 1
 * 0000000140A07346: lea     rdx, [rcx+rdx*8]
 * 0000000140A0734A: xor     [rdx], rbx
 * 0000000140A0734D: lea     rax, [rbp+0BE0h+var_A08]
 * 0000000140A07354: mov     ecx, r8d
 * 0000000140A07357: lea     rdx, [rdx-8]
 * 0000000140A0735B: ror     rbx, cl
 * 0000000140A0735E: mov     [rbp+0BE0h+var_A08], rbx
 * 0000000140A07365: and     ebx, 3Fh
 * 0000000140A07368: btc     [rax], rbx
 * 0000000140A0736C: sub     r8d, r14d
 * 0000000140A0736F: jz      short loc_140A0737A
 * 0000000140A07371: mov     rbx, [rbp+0BE0h+var_A08]
 * 0000000140A07378: jmp     short loc_140A0734A
 * 0000000140A0737A: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0737E: mov     eax, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A07384: bt      eax, 13h
 * 0000000140A07388: jnb     short loc_140A073D5
 * 0000000140A0738A: rdtsc
 * 0000000140A0738C: shl     rdx, 20h
 * 0000000140A07390: or      rax, rdx
 * 0000000140A07393: mov     rcx, rax
 * 0000000140A07396: ror     rax, 3
 * 0000000140A0739A: xor     rcx, rax
 * 0000000140A0739D: mov     rax, 7010008004002001h
 * 0000000140A073A7: mul     rcx
 * 0000000140A073AA: mov     rcx, rdx
 * 0000000140A073AD: mov     [rbp+0BE0h+var_470], rdx
 * 0000000140A073B4: xor     rcx, rax
 * 0000000140A073B7: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A073C1: mul     rcx
 * 0000000140A073C4: shr     rdx, 1
 * 0000000140A073C7: lea     rax, [rdx+rdx*2]
 * 0000000140A073CB: cmp     rcx, rax
 * 0000000140A073CE: jz      short loc_140A073DF
 * 0000000140A073D0: jmp     loc_140A07526
 * 0000000140A073D5: bt      eax, 8
 * 0000000140A073D9: jb      loc_140A07526
 * 0000000140A073DF: mov     r14d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A073E6: mov     eax, 1
 * 0000000140A073EB: mov     rsi, [rbp+0BE0h+var_C40]
 * 0000000140A073EF: mov     ecx, r9d
 * 0000000140A073F2: mov     [rbp+0BE0h+var_B7D], al
 * 0000000140A073F5: mov     r12d, r15d
 * 0000000140A073F8: mov     eax, 2
 * 0000000140A073FD: mov     [rbp+0BE0h+var_B80], r10b
 * 0000000140A07401: mov     [rbp+0BE0h+var_B7B], al
 * 0000000140A07404: mov     r10, r9
 * 0000000140A07407: mov     eax, 0Ch
 * 0000000140A0740C: ror     r10, cl
 * 0000000140A0740F: mov     [rbp+0BE0h+var_B7F], al
 * 0000000140A07412: xor     ecx, ecx
 * 0000000140A07414: mov     eax, 0Fh
 * 0000000140A07419: mov     [rbp+0BE0h+var_B7A], r11b
 * 0000000140A0741D: mov     [rbp+0BE0h+var_B7E], al
 * 0000000140A07420: mov     r11, r9
 * 0000000140A07423: mov     [rbp+0BE0h+var_B78], 3
 * 0000000140A07427: mov     ebx, ecx
 * 0000000140A07429: mov     [rbp+0BE0h+var_B77], 5
 * 0000000140A0742D: lea     r15d, [rax+1]
 * 0000000140A07431: mov     [rbp+0BE0h+var_B74], 6
 * 0000000140A07435: mov     eax, [rbp+0BE0h+var_C28]
 * 0000000140A07438: mov     [rbp+0BE0h+var_BD0], rax
 * 0000000140A0743C: mov     edi, eax
 * 0000000140A0743E: mov     [rbp+0BE0h+var_B79], 7
 * 0000000140A07442: mov     [rbp+0BE0h+var_B73], 8
 * 0000000140A07446: mov     [rbp+0BE0h+var_B76], 9
 * 0000000140A0744A: mov     [rbp+0BE0h+var_B72], 0Ah
 * 0000000140A0744E: mov     [rbp+0BE0h+var_B7C], 0Bh
 * 0000000140A07452: mov     [rbp+0BE0h+var_B71], 0Dh
 * 0000000140A07456: mov     [rbp+0BE0h+var_B75], 0Eh
 * 0000000140A0745A: test    r15d, r15d
 * 0000000140A0745D: jz      short loc_140A07495
 * 0000000140A0745F: mov     rdx, [r11]
 * 0000000140A07462: mov     edi, 0Fh
 * 0000000140A07467: mov     r8d, r15d
 * 0000000140A0746A: lea     r13d, [rdi-0Eh]
 * 0000000140A0746E: movzx   eax, byte ptr [r11]
 * 0000000140A07472: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140A07476: and     rax, rdi
 * 0000000140A07479: movzx   ecx, [rbp+rax+0BE0h+var_B80]
 * 0000000140A0747E: or      rdx, rcx
 * 0000000140A07481: ror     rdx, 4
 * 0000000140A07485: mov     [r11], rdx
 * 0000000140A07488: sub     r8, r13
 * 0000000140A0748B: jnz     short loc_140A0746E
 * 0000000140A0748D: mov     r13d, [rbp+0BE0h+var_C38]
 * 0000000140A07491: mov     rdi, [rbp+0BE0h+var_BD0]
 * 0000000140A07495: mov     rdx, [r11]
 * 0000000140A07498: mov     eax, ebx
 * 0000000140A0749A: sub     rdx, rax
 * 0000000140A0749D: sub     rdx, r9
 * 0000000140A074A0: bt      r14d, 9
 * 0000000140A074A5: jb      short loc_140A074BB
 * 0000000140A074A7: xor     rdx, [rbp+0BE0h+var_C30]
 * 0000000140A074AB: mov     ecx, esi
 * 0000000140A074AD: bswap   rdx
 * 0000000140A074B0: xor     rdx, r10
 * 0000000140A074B3: ror     rdx, cl
 * 0000000140A074B6: xor     rdx, rsi
 * 0000000140A074B9: jmp     short loc_140A074BE
 * 0000000140A074BB: xor     rdx, r10
 * 0000000140A074BE: mov     [r11], rdx
 * 0000000140A074C1: mov     ecx, edx
 * 0000000140A074C3: mov     r8d, edx
 * 0000000140A074C6: mov     eax, ebx
 * 0000000140A074C8: xor     r8d, 0EFFh
 * 0000000140A074CF: mov     edx, 0C8h
 * 0000000140A074D4: sub     edx, ebx
 * 0000000140A074D6: not     ecx
 * 0000000140A074D8: xor     rdx, rax
 * 0000000140A074DB: add     r11, 8
 * 0000000140A074DF: ror     rdx, cl
 * 0000000140A074E2: mov     cl, r8b
 * 0000000140A074E5: xor     r10, rdx
 * 0000000140A074E8: rol     r10, cl
 * 0000000140A074EB: add     r10, r9
 * 0000000140A074EE: xor     r10, rdi
 * 0000000140A074F1: inc     ebx
 * 0000000140A074F3: cmp     ebx, 19h
 * 0000000140A074F6: jnz     short loc_140A0750D
 * 0000000140A074F8: bt      r14d, 13h
 * 0000000140A074FD: lea     ecx, [rbx-19h]
 * 0000000140A07500: mov     eax, ecx
 * 0000000140A07502: lea     r15d, [rbx-18h]
 * 0000000140A07506: cmovnb  eax, r13d
 * 0000000140A0750A: add     r12d, eax
 * 0000000140A0750D: cmp     ebx, r12d
 * 0000000140A07510: jb      loc_140A0745A
 * 0000000140A07516: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A0751B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A07522: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A07526: mov     r13d, 1
 * 0000000140A0752C: mov     r15, [r14+8]
 * 0000000140A07530: mov     r11d, [r14+10h]
 * 0000000140A07534: mov     r10, r15
 * 0000000140A07537: add     [rsi+828h], r11d
 * 0000000140A0753E: mov     rax, r15
 * 0000000140A07541: mov     r9d, [rsi+814h]
 * 0000000140A07548: mov     r12, [rsi+818h]
 * 0000000140A0754F: lea     rcx, [r15+r11]
 * 0000000140A07553: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 0000000140A0755A: cmp     r15, rcx
 * 0000000140A0755D: jnb     short loc_140A0756F
 * 0000000140A0755F: mov     edx, 40h ; '@'
 * 0000000140A07564: prefetchnta byte ptr [rax]
 * 0000000140A07567: add     rax, rdx
 * 0000000140A0756A: cmp     rax, rcx
 * 0000000140A0756D: jb      short loc_140A07564
 * 0000000140A0756F: mov     ebx, r11d
 * 0000000140A07572: mov     r8, r12
 * 0000000140A07575: shr     ebx, 7
 * 0000000140A07578: test    ebx, ebx
 * 0000000140A0757A: jz      short loc_140A075ED
 * 0000000140A0757C: mov     edi, 0FFFFFFFFh
 * 0000000140A07581: mov     r11, 7010008004002001h
 * 0000000140A0758B: mov     eax, 8
 * 0000000140A07590: xor     r8, [r10]
 * 0000000140A07593: mov     ecx, r9d
 * 0000000140A07596: rol     r8, cl
 * 0000000140A07599: xor     r8, [r10+8]
 * 0000000140A0759D: add     r10, 10h
 * 0000000140A075A1: rol     r8, cl
 * 0000000140A075A4: sub     rax, r13
 * 0000000140A075A7: jnz     short loc_140A07590
 * 0000000140A075A9: mov     rcx, r10
 * 0000000140A075AC: sub     rcx, r15
 * 0000000140A075AF: xor     rcx, r12
 * 0000000140A075B2: mov     rax, rcx
 * 0000000140A075B5: rol     rax, 11h
 * 0000000140A075B9: xor     rcx, rax
 * 0000000140A075BC: mov     rax, r11
 * 0000000140A075BF: mul     rcx
 * 0000000140A075C2: xor     r9d, eax
 * 0000000140A075C5: mov     [rbp+0BE0h+var_468], rdx
 * 0000000140A075CC: xor     r9d, edx
 * 0000000140A075CF: and     r9d, 3Fh
 * 0000000140A075D3: cmovz   r9d, r13d
 * 0000000140A075D7: add     ebx, edi
 * 0000000140A075D9: jnz     short loc_140A0758B
 * 0000000140A075DB: mov     r11d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A075E2: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A075E9: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A075ED: and     r11d, 7Fh
 * 0000000140A075F1: mov     r15d, 1
 * 0000000140A075F7: cmp     r11d, 8
 * 0000000140A075FB: jb      short loc_140A0761A
 * 0000000140A075FD: mov     eax, r11d
 * 0000000140A07600: shr     rax, 3
 * 0000000140A07604: xor     r8, [r10]
 * 0000000140A07607: mov     ecx, r9d
 * 0000000140A0760A: rol     r8, cl
 * 0000000140A0760D: add     r10, 8
 * 0000000140A07611: add     r11d, 0FFFFFFF8h
 * 0000000140A07615: sub     rax, r15
 * 0000000140A07618: jnz     short loc_140A07604
 * 0000000140A0761A: test    r11d, r11d
 * 0000000140A0761D: jz      short loc_140A0763E
 * 0000000140A0761F: mov     r14d, 0FFFFFFFFh
 * 0000000140A07625: movzx   eax, byte ptr [r10]
 * 0000000140A07629: mov     ecx, r9d
 * 0000000140A0762C: xor     r8, rax
 * 0000000140A0762F: add     r10, r15
 * 0000000140A07632: rol     r8, cl
 * 0000000140A07635: add     r11d, r14d
 * 0000000140A07638: jnz     short loc_140A07625
 * 0000000140A0763A: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0763E: mov     rax, r8
 * 0000000140A07641: shr     rax, 1Fh
 * 0000000140A07645: xor     r11d, r11d
 * 0000000140A07648: jmp     short loc_140A07651
 * 0000000140A0764A: xor     r8d, eax
 * 0000000140A0764D: shr     rax, 1Fh
 * 0000000140A07651: test    rax, rax
 * 0000000140A07654: jnz     short loc_140A0764A
 * 0000000140A07656: btr     r8d, 1Fh
 * 0000000140A0765B: mov     [r14+14h], r8d
 * 0000000140A0765F: jmp     loc_140A06ADE
 * 0000000140A07664: xor     r11d, r11d
 * 0000000140A07667: lea     r15d, [r11+1]
 * 0000000140A0766B: jmp     loc_140A06ADE
 * 0000000140A07670: xor     r11d, r11d
 * 0000000140A07673: lea     r15d, [r11+1]
 * 0000000140A07677: jmp     loc_140A06AE8
 * 0000000140A0767C: mov     r13d, [rbp+0BE0h+var_C38]
 * 0000000140A07680: bt      r13d, 13h
 * 0000000140A07685: jnb     short loc_140A076D2
 * 0000000140A07687: rdtsc
 * 0000000140A07689: shl     rdx, 20h
 * 0000000140A0768D: or      rax, rdx
 * 0000000140A07690: mov     rcx, rax
 * 0000000140A07693: ror     rax, 3
 * 0000000140A07697: xor     rcx, rax
 * 0000000140A0769A: mov     rax, 7010008004002001h
 * 0000000140A076A4: mul     rcx
 * 0000000140A076A7: mov     rcx, rdx
 * 0000000140A076AA: mov     [rbp+0BE0h+var_450], rdx
 * 0000000140A076B1: xor     rcx, rax
 * 0000000140A076B4: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A076BE: mul     rcx
 * 0000000140A076C1: shr     rdx, 1
 * 0000000140A076C4: lea     rax, [rdx+rdx*2]
 * 0000000140A076C8: cmp     rcx, rax
 * 0000000140A076CB: jz      short loc_140A076DD
 * 0000000140A076CD: jmp     loc_140A08034
 * 0000000140A076D2: bt      r13d, 8
 * 0000000140A076D7: jb      loc_140A08034
 * 0000000140A076DD: mov     rdi, [rbp+0BE0h+var_BD0]
 * 0000000140A076E1: mov     eax, 1
 * 0000000140A076E6: mov     [rbp+0BE0h+var_B6D], al
 * 0000000140A076E9: mov     ecx, esi
 * 0000000140A076EB: mov     eax, 2
 * 0000000140A076F0: mov     [rbp+0BE0h+var_B6A], r9b
 * 0000000140A076F4: mov     [rbp+0BE0h+var_B6B], al
 * 0000000140A076F7: mov     r9, rsi
 * 0000000140A076FA: mov     eax, 0Ch
 * 0000000140A076FF: mov     [rbp+0BE0h+var_B70], r15b
 * 0000000140A07703: mov     [rbp+0BE0h+var_B6F], al
 * 0000000140A07706: mov     r14d, r11d
 * 0000000140A07709: mov     eax, 0Fh
 * 0000000140A0770E: mov     [rbp+0BE0h+var_B68], 3
 * 0000000140A07712: mov     r11d, r15d
 * 0000000140A07715: mov     [rbp+0BE0h+var_B67], 5
 * 0000000140A07719: mov     r15d, [rbp+0BE0h+var_C28]
 * 0000000140A0771D: mov     r10, rsi
 * 0000000140A07720: mov     [rbp+0BE0h+var_B64], 6
 * 0000000140A07724: lea     ebx, [rax+1]
 * 0000000140A07727: mov     [rbp+0BE0h+var_B69], 7
 * 0000000140A0772B: mov     [rbp+0BE0h+var_B63], 8
 * 0000000140A0772F: mov     [rbp+0BE0h+var_B66], 9
 * 0000000140A07733: mov     [rbp+0BE0h+var_B62], 0Ah
 * 0000000140A07737: mov     [rbp+0BE0h+var_B6C], 0Bh
 * 0000000140A0773B: mov     [rbp+0BE0h+var_B61], 0Dh
 * 0000000140A0773F: mov     [rbp+0BE0h+var_B65], 0Eh
 * 0000000140A07743: mov     [rbp+0BE0h+var_B6E], al
 * 0000000140A07746: ror     r9, cl
 * 0000000140A07749: test    ebx, ebx
 * 0000000140A0774B: jz      short loc_140A07787
 * 0000000140A0774D: mov     rdx, [r10]
 * 0000000140A07750: mov     r13d, 1
 * 0000000140A07756: mov     r8d, ebx
 * 0000000140A07759: lea     r12d, [r13+0Eh]
 * 0000000140A0775D: movzx   eax, byte ptr [r10]
 * 0000000140A07761: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140A07765: and     rax, r12
 * 0000000140A07768: movzx   ecx, [rbp+rax+0BE0h+var_B70]
 * 0000000140A0776D: or      rdx, rcx
 * 0000000140A07770: ror     rdx, 4
 * 0000000140A07774: mov     [r10], rdx
 * 0000000140A07777: sub     r8, r13
 * 0000000140A0777A: jnz     short loc_140A0775D
 * 0000000140A0777C: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A07783: mov     r13d, [rbp+0BE0h+var_C38]
 * 0000000140A07787: mov     rdx, [r10]
 * 0000000140A0778A: mov     eax, r11d
 * 0000000140A0778D: sub     rdx, rax
 * 0000000140A07790: sub     rdx, rsi
 * 0000000140A07793: bt      r13d, 9
 * 0000000140A07798: jb      short loc_140A077AE
 * 0000000140A0779A: xor     rdx, [rbp+0BE0h+var_C30]
 * 0000000140A0779E: mov     ecx, edi
 * 0000000140A077A0: bswap   rdx
 * 0000000140A077A3: xor     rdx, r9
 * 0000000140A077A6: ror     rdx, cl
 * 0000000140A077A9: xor     rdx, rdi
 * 0000000140A077AC: jmp     short loc_140A077B1
 * 0000000140A077AE: xor     rdx, r9
 * 0000000140A077B1: mov     [r10], rdx
 * 0000000140A077B4: mov     ecx, edx
 * 0000000140A077B6: mov     r8d, edx
 * 0000000140A077B9: mov     eax, r11d
 * 0000000140A077BC: xor     r8d, 0EFFh
 * 0000000140A077C3: mov     edx, 0C8h
 * 0000000140A077C8: sub     edx, r11d
 * 0000000140A077CB: not     ecx
 * 0000000140A077CD: xor     rdx, rax
 * 0000000140A077D0: add     r10, 8
 * 0000000140A077D4: ror     rdx, cl
 * 0000000140A077D7: mov     cl, r8b
 * 0000000140A077DA: xor     r9, rdx
 * 0000000140A077DD: rol     r9, cl
 * 0000000140A077E0: add     r9, rsi
 * 0000000140A077E3: xor     r9, r15
 * 0000000140A077E6: inc     r11d
 * 0000000140A077E9: cmp     r11d, 19h
 * 0000000140A077ED: jnz     short loc_140A07803
 * 0000000140A077EF: bt      r13d, 13h
 * 0000000140A077F4: lea     eax, [r11-19h]
 * 0000000140A077F8: lea     ebx, [r11-18h]
 * 0000000140A077FC: cmovnb  eax, r12d
 * 0000000140A07800: add     r14d, eax
 * 0000000140A07803: cmp     r11d, r14d
 * 0000000140A07806: jb      loc_140A07749
 * 0000000140A0780C: jmp     loc_140A0802D
 * 0000000140A07811: mov     r15d, 1
 * 0000000140A07817: lea     rbx, [r14+798h]
 * 0000000140A0781E: mov     [r14+0C4h], r15d
 * 0000000140A07825: lea     rdx, [rbp+0BE0h+var_B0]
 * 0000000140A0782C: mov     r12, [r14+7B8h]
 * 0000000140A07833: mov     rsi, r14
 * 0000000140A07836: mov     r13d, [r14+828h]
 * 0000000140A0783D: mov     rcx, rbx
 * 0000000140A07840: lea     r11d, [r15+1Fh]
 * 0000000140A07844: mov     [rbp+0BE0h+var_BD0], r12
 * 0000000140A07848: lea     r10d, [r15+3]
 * 0000000140A0784C: mov     dword ptr [rbp+0BE0h+arg_8], r13d
 * 0000000140A07853: mov     r8d, r11d
 * 0000000140A07856: mov     [rsp+0CE0h+var_C70], rbx
 * 0000000140A0785B: mov     r9d, r10d
 * 0000000140A0785E: mov     rax, [rcx]
 * 0000000140A07861: add     r8d, 0FFFFFFF8h
 * 0000000140A07865: mov     [rdx], rax
 * 0000000140A07868: add     rcx, 8
 * 0000000140A0786C: add     rdx, 8
 * 0000000140A07870: sub     r9, r15
 * 0000000140A07873: jnz     short loc_140A0785E
 * 0000000140A07875: xor     r15d, r15d
 * 0000000140A07878: lea     r9d, [r15+1]
 * 0000000140A0787C: test    r8d, r8d
 * 0000000140A0787F: jz      short loc_140A07899
 * 0000000140A07881: mov     r15d, 0FFFFFFFFh
 * 0000000140A07887: mov     al, [rcx]
 * 0000000140A07889: add     rcx, r9
 * 0000000140A0788C: mov     [rdx], al
 * 0000000140A0788E: add     rdx, r9
 * 0000000140A07891: add     r8d, r15d
 * 0000000140A07894: jnz     short loc_140A07887
 * 0000000140A07896: xor     r15d, r15d
 * 0000000140A07899: mov     [r14+7B8h], r15
 * 0000000140A078A0: mov     ecx, r11d
 * 0000000140A078A3: mov     [r14+828h], r15d
 * 0000000140A078AA: mov     rax, rbx
 * 0000000140A078AD: mov     rdx, r10
 * 0000000140A078B0: mov     [rax], r15
 * 0000000140A078B3: add     ecx, 0FFFFFFF8h
 * 0000000140A078B6: add     rax, 8
 * 0000000140A078BA: sub     rdx, r9
 * 0000000140A078BD: jnz     short loc_140A078B0
 * 0000000140A078BF: test    ecx, ecx
 * 0000000140A078C1: jz      short loc_140A078D2
 * 0000000140A078C3: mov     edx, 0FFFFFFFFh
 * 0000000140A078C8: mov     [rax], r15b
 * 0000000140A078CB: add     rax, r9
 * 0000000140A078CE: add     ecx, edx
 * 0000000140A078D0: jnz     short loc_140A078C8
 * 0000000140A078D2: mov     eax, [r14+7E4h]
 * 0000000140A078D9: mov     r10, r14
 * 0000000140A078DC: add     [r14+828h], eax
 * 0000000140A078E3: mov     rax, r14
 * 0000000140A078E6: mov     r11d, [r14+7E4h]
 * 0000000140A078ED: mov     r9d, [r14+814h]
 * 0000000140A078F4: mov     r15, [r14+818h]
 * 0000000140A078FB: lea     rcx, [r14+r11]
 * 0000000140A078FF: cmp     r14, rcx
 * 0000000140A07902: jnb     short loc_140A07914
 * 0000000140A07904: mov     edx, 40h ; '@'
 * 0000000140A07909: prefetchnta byte ptr [rax]
 * 0000000140A0790C: add     rax, rdx
 * 0000000140A0790F: cmp     rax, rcx
 * 0000000140A07912: jb      short loc_140A07909
 * 0000000140A07914: mov     r14d, r11d
 * 0000000140A07917: mov     r8, r15
 * 0000000140A0791A: shr     r14d, 7
 * 0000000140A0791E: test    r14d, r14d
 * 0000000140A07921: jz      loc_140A079AC
 * 0000000140A07927: mov     rdi, [rbp+0BE0h+arg_0]
 * 0000000140A0792E: mov     rbx, 7010008004002001h
 * 0000000140A07938: mov     r12d, 1
 * 0000000140A0793E: mov     r13d, 0FFFFFFFFh
 * 0000000140A07944: mov     eax, 8
 * 0000000140A07949: xor     r8, [r10]
 * 0000000140A0794C: mov     ecx, r9d
 * 0000000140A0794F: rol     r8, cl
 * 0000000140A07952: xor     r8, [r10+8]
 * 0000000140A07956: add     r10, 10h
 * 0000000140A0795A: rol     r8, cl
 * 0000000140A0795D: sub     rax, r12
 * 0000000140A07960: jnz     short loc_140A07949
 * 0000000140A07962: mov     rcx, r10
 * 0000000140A07965: sub     rcx, rdi
 * 0000000140A07968: xor     rcx, r15
 * 0000000140A0796B: mov     rax, rcx
 * 0000000140A0796E: rol     rax, 11h
 * 0000000140A07972: xor     rcx, rax
 * 0000000140A07975: mov     rax, rbx
 * 0000000140A07978: mul     rcx
 * 0000000140A0797B: xor     r9d, eax
 * 0000000140A0797E: mov     [rbp+0BE0h+var_328], rdx
 * 0000000140A07985: xor     r9d, edx
 * 0000000140A07988: and     r9d, 3Fh
 * 0000000140A0798C: cmovz   r9d, r12d
 * 0000000140A07990: add     r14d, r13d
 * 0000000140A07993: jnz     short loc_140A07944
 * 0000000140A07995: mov     rbx, [rsp+0CE0h+var_C70]
 * 0000000140A0799A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A079A1: mov     r12, [rbp+0BE0h+var_BD0]
 * 0000000140A079A5: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A079AC: and     r11d, 7Fh
 * 0000000140A079B0: mov     r15d, 1
 * 0000000140A079B6: cmp     r11d, 8
 * 0000000140A079BA: jb      short loc_140A079D9
 * 0000000140A079BC: mov     eax, r11d
 * 0000000140A079BF: shr     rax, 3
 * 0000000140A079C3: xor     r8, [r10]
 * 0000000140A079C6: mov     ecx, r9d
 * 0000000140A079C9: rol     r8, cl
 * 0000000140A079CC: add     r10, 8
 * 0000000140A079D0: add     r11d, 0FFFFFFF8h
 * 0000000140A079D4: sub     rax, r15
 * 0000000140A079D7: jnz     short loc_140A079C3
 * 0000000140A079D9: mov     r14d, 0FFFFFFFFh
 * 0000000140A079DF: test    r11d, r11d
 * 0000000140A079E2: jz      short loc_140A079F9
 * 0000000140A079E4: movzx   eax, byte ptr [r10]
 * 0000000140A079E8: mov     ecx, r9d
 * 0000000140A079EB: xor     r8, rax
 * 0000000140A079EE: add     r10, r15
 * 0000000140A079F1: rol     r8, cl
 * 0000000140A079F4: add     r11d, r14d
 * 0000000140A079F7: jnz     short loc_140A079E4
 * 0000000140A079F9: mov     r9, [rbp+0BE0h+arg_0]
 * 0000000140A07A00: lea     rcx, [rbp+0BE0h+var_B0]
 * 0000000140A07A07: mov     edx, 4
 * 0000000140A07A0C: mov     [r9+7B8h], r12
 * 0000000140A07A13: add     [r9+828h], r13d
 * 0000000140A07A1A: lea     r10d, [rdx+1Ch]
 * 0000000140A07A1E: mov     rax, [rcx]
 * 0000000140A07A21: add     r10d, 0FFFFFFF8h
 * 0000000140A07A25: mov     [rbx], rax
 * 0000000140A07A28: add     rcx, 8
 * 0000000140A07A2C: add     rbx, 8
 * 0000000140A07A30: sub     rdx, r15
 * 0000000140A07A33: jnz     short loc_140A07A1E
 * 0000000140A07A35: xor     r11d, r11d
 * 0000000140A07A38: test    r10d, r10d
 * 0000000140A07A3B: jz      short loc_140A07A4C
 * 0000000140A07A3D: mov     al, [rcx]
 * 0000000140A07A3F: add     rcx, r15
 * 0000000140A07A42: mov     [rbx], al
 * 0000000140A07A44: add     rbx, r15
 * 0000000140A07A47: add     r10d, r14d
 * 0000000140A07A4A: jnz     short loc_140A07A3D
 * 0000000140A07A4C: mov     [r9+7B8h], r8
 * 0000000140A07A53: mov     r14d, [rsi+990h]
 * 0000000140A07A5A: mov     r12, r11
 * 0000000140A07A5D: mov     [rsp+0CE0h+var_C70], r11
 * 0000000140A07A62: bt      r14d, 1Eh
 * 0000000140A07A67: jb      loc_140A080EC
 * 0000000140A07A6D: bt      r14d, 8
 * 0000000140A07A72: jb      loc_140A080D6
 * 0000000140A07A78: mov     eax, [rsi+954h]
 * 0000000140A07A7E: mov     ecx, 1
 * 0000000140A07A83: mov     r15, [rsi+5C0h]
 * 0000000140A07A8A: mov     r9, rsi
 * 0000000140A07A8D: mov     r13, [rsi+4E8h]
 * 0000000140A07A94: mov     r10, rsi
 * 0000000140A07A97: mov     [rbp+0BE0h+var_B8D], cl
 * 0000000140A07A9A: mov     ecx, 2
 * 0000000140A07A9F: mov     [rbp+0BE0h+var_B8B], cl
 * 0000000140A07AA2: mov     ecx, 0Ch
 * 0000000140A07AA7: mov     [rbp+0BE0h+var_B8F], cl
 * 0000000140A07AAA: mov     [rbp+0BE0h+var_B90], r11b
 * 0000000140A07AAE: mov     [rbp+0BE0h+var_B88], 3
 * 0000000140A07AB2: lea     r12d, [rcx+3]
 * 0000000140A07AB6: mov     [rbp+0BE0h+var_B8A], 4
 * 0000000140A07ABA: mov     ecx, esi
 * 0000000140A07ABC: mov     [rbp+0BE0h+var_B87], 5
 * 0000000140A07AC0: ror     r9, cl
 * 0000000140A07AC3: lea     ebx, [r12+1]
 * 0000000140A07AC8: xor     edi, edi
 * 0000000140A07ACA: mov     [rbp+0BE0h+var_B84], 6
 * 0000000140A07ACE: mov     [rbp+0BE0h+var_B89], 7
 * 0000000140A07AD2: mov     [rbp+0BE0h+var_B83], 8
 * 0000000140A07AD6: mov     [rbp+0BE0h+var_B86], 9
 * 0000000140A07ADA: mov     [rbp+0BE0h+var_B82], 0Ah
 * 0000000140A07ADE: mov     [rbp+0BE0h+var_B8C], 0Bh
 * 0000000140A07AE2: mov     [rbp+0BE0h+var_B81], 0Dh
 * 0000000140A07AE6: mov     [rbp+0BE0h+var_B85], 0Eh
 * 0000000140A07AEA: mov     [rbp+0BE0h+var_B8E], r12b
 * 0000000140A07AEE: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A07AF5: test    ebx, ebx
 * 0000000140A07AF7: jz      short loc_140A07B25
 * 0000000140A07AF9: mov     rdx, [r10]
 * 0000000140A07AFC: mov     edi, 1
 * 0000000140A07B01: mov     r8d, ebx
 * 0000000140A07B04: movzx   eax, byte ptr [r10]
 * 0000000140A07B08: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140A07B0C: and     rax, r12
 * 0000000140A07B0F: movzx   ecx, [rbp+rax+0BE0h+var_B90]
 * 0000000140A07B14: or      rdx, rcx
 * 0000000140A07B17: ror     rdx, 4
 * 0000000140A07B1B: mov     [r10], rdx
 * 0000000140A07B1E: sub     r8, rdi
 * 0000000140A07B21: jnz     short loc_140A07B04
 * 0000000140A07B23: xor     edi, edi
 * 0000000140A07B25: mov     rcx, [r10]
 * 0000000140A07B28: mov     eax, r11d
 * 0000000140A07B2B: sub     rcx, rax
 * 0000000140A07B2E: sub     rcx, rsi
 * 0000000140A07B31: bt      r14d, 9
 * 0000000140A07B36: jb      loc_140A08074
 * 0000000140A07B3C: mov     rax, r13
 * 0000000140A07B3F: xor     rax, rcx
 * 0000000140A07B42: mov     ecx, r15d
 * 0000000140A07B45: bswap   rax
 * 0000000140A07B48: xor     rax, r9
 * 0000000140A07B4B: ror     rax, cl
 * 0000000140A07B4E: xor     rax, r15
 * 0000000140A07B51: jmp     loc_140A0807A
 * 0000000140A07B56: mov     ecx, [rsi+954h]
 * 0000000140A07B5C: mov     r12d, [rsi+0A2Ch]
 * 0000000140A07B63: mov     rax, [rsi+7C8h]
 * 0000000140A07B6A: add     r12d, 0FFFFFF38h
 * 0000000140A07B71: mov     [rbp+0BE0h+var_C28], ecx
 * 0000000140A07B74: mov     rcx, [rsi+4E8h]
 * 0000000140A07B7B: shr     r12d, 3
 * 0000000140A07B7F: mov     [rsp+0CE0h+var_C88], rcx
 * 0000000140A07B84: mov     rcx, [rsi+5C0h]
 * 0000000140A07B8B: mov     [rbp+0BE0h+var_C30], rcx
 * 0000000140A07B8F: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A07B93: mov     [rbp+0BE0h+var_C38], r12d
 * 0000000140A07B97: mov     [rsi+0C4h], r12d
 * 0000000140A07B9E: rdtsc
 * 0000000140A07BA0: shl     rdx, 20h
 * 0000000140A07BA4: or      rax, rdx
 * 0000000140A07BA7: mov     rcx, rax
 * 0000000140A07BAA: ror     rax, 3
 * 0000000140A07BAE: xor     rcx, rax
 * 0000000140A07BB1: mov     rax, r9
 * 0000000140A07BB4: mul     rcx
 * 0000000140A07BB7: mov     rbx, rdx
 * 0000000140A07BBA: mov     [rbp+0BE0h+var_440], rdx
 * 0000000140A07BC1: xor     rbx, rax
 * 0000000140A07BC4: jz      short loc_140A07B9E
 * 0000000140A07BC6: mov     rax, [rsi+7B8h]
 * 0000000140A07BCD: lea     r14, [rsi+798h]
 * 0000000140A07BD4: mov     r11d, 20h ; ' '
 * 0000000140A07BDA: mov     [rbp+0BE0h+var_BD0], rax
 * 0000000140A07BDE: mov     eax, [rsi+828h]
 * 0000000140A07BE4: lea     rdx, [rbp+0BE0h+var_90]
 * 0000000140A07BEB: mov     [rbp+0BE0h+var_BE8], eax
 * 0000000140A07BEE: mov     r8d, r11d
 * 0000000140A07BF1: mov     rcx, r14
 * 0000000140A07BF4: lea     r10d, [r11-1Ch]
 * 0000000140A07BF8: mov     r9d, r10d
 * 0000000140A07BFB: mov     rax, [rcx]
 * 0000000140A07BFE: add     r8d, 0FFFFFFF8h
 * 0000000140A07C02: mov     [rdx], rax
 * 0000000140A07C05: add     rcx, 8
 * 0000000140A07C09: add     rdx, 8
 * 0000000140A07C0D: sub     r9, r15
 * 0000000140A07C10: jnz     short loc_140A07BFB
 * 0000000140A07C12: test    r8d, r8d
 * 0000000140A07C15: jz      short loc_140A07C2F
 * 0000000140A07C17: mov     r9d, 0FFFFFFFFh
 * 0000000140A07C1D: mov     al, [rcx]
 * 0000000140A07C1F: add     rcx, r15
 * 0000000140A07C22: mov     [rdx], al
 * 0000000140A07C24: add     rdx, r15
 * 0000000140A07C27: add     r8d, r9d
 * 0000000140A07C2A: jnz     short loc_140A07C1D
 * 0000000140A07C2C: xor     r9d, r9d
 * 0000000140A07C2F: mov     [rsi+7B8h], r9
 * 0000000140A07C36: mov     ecx, r11d
 * 0000000140A07C39: mov     [rsi+828h], r9d
 * 0000000140A07C40: mov     rax, r14
 * 0000000140A07C43: mov     rdx, r10
 * 0000000140A07C46: mov     [rax], r9
 * 0000000140A07C49: add     ecx, 0FFFFFFF8h
 * 0000000140A07C4C: add     rax, 8
 * 0000000140A07C50: sub     rdx, r15
 * 0000000140A07C53: jnz     short loc_140A07C46
 * 0000000140A07C55: test    ecx, ecx
 * 0000000140A07C57: jz      short loc_140A07C68
 * 0000000140A07C59: mov     edx, 0FFFFFFFFh
 * 0000000140A07C5E: mov     [rax], r9b
 * 0000000140A07C61: add     rax, r15
 * 0000000140A07C64: add     ecx, edx
 * 0000000140A07C66: jnz     short loc_140A07C5E
 * 0000000140A07C68: mov     eax, [rsi+7E4h]
 * 0000000140A07C6E: mov     r9, rsi
 * 0000000140A07C71: add     [rsi+828h], eax
 * 0000000140A07C77: mov     r11d, [rsi+7E4h]
 * 0000000140A07C7E: mov     r10d, [rsi+814h]
 * 0000000140A07C85: mov     r8, [rsi+818h]
 * 0000000140A07C8C: lea     rcx, [rsi+r11]
 * 0000000140A07C90: cmp     rsi, rcx
 * 0000000140A07C93: jnb     short loc_140A07CA8
 * 0000000140A07C95: mov     rax, rsi
 * 0000000140A07C98: mov     edx, 40h ; '@'
 * 0000000140A07C9D: prefetchnta byte ptr [rax]
 * 0000000140A07CA0: add     rax, rdx
 * 0000000140A07CA3: cmp     rax, rcx
 * 0000000140A07CA6: jb      short loc_140A07C9D
 * 0000000140A07CA8: mov     r15d, r11d
 * 0000000140A07CAB: shr     r15d, 7
 * 0000000140A07CAF: test    r15d, r15d
 * 0000000140A07CB2: jz      loc_140A07D3B
 * 0000000140A07CB8: mov     rdi, r8
 * 0000000140A07CBB: mov     r13d, 1
 * 0000000140A07CC1: mov     r12d, 0FFFFFFFFh
 * 0000000140A07CC7: mov     r14, 7010008004002001h
 * 0000000140A07CD1: mov     eax, 8
 * 0000000140A07CD6: xor     r8, [r9]
 * 0000000140A07CD9: mov     ecx, r10d
 * 0000000140A07CDC: rol     r8, cl
 * 0000000140A07CDF: xor     r8, [r9+8]
 * 0000000140A07CE3: add     r9, 10h
 * 0000000140A07CE7: rol     r8, cl
 * 0000000140A07CEA: sub     rax, r13
 * 0000000140A07CED: jnz     short loc_140A07CD6
 * 0000000140A07CEF: mov     rcx, r9
 * 0000000140A07CF2: sub     rcx, rsi
 * 0000000140A07CF5: xor     rcx, rdi
 * 0000000140A07CF8: mov     rax, rcx
 * 0000000140A07CFB: rol     rax, 11h
 * 0000000140A07CFF: xor     rcx, rax
 * 0000000140A07D02: mov     rax, r14
 * 0000000140A07D05: mul     rcx
 * 0000000140A07D08: xor     r10d, eax
 * 0000000140A07D0B: mov     [rbp+0BE0h+var_438], rdx
 * 0000000140A07D12: xor     r10d, edx
 * 0000000140A07D15: and     r10d, 3Fh
 * 0000000140A07D19: cmovz   r10d, r13d
 * 0000000140A07D1D: add     r15d, r12d
 * 0000000140A07D20: jnz     short loc_140A07CD1
 * 0000000140A07D22: mov     r12d, [rbp+0BE0h+var_C38]
 * 0000000140A07D26: lea     r14, [rsi+798h]
 * 0000000140A07D2D: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A07D34: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A07D3B: and     r11d, 7Fh
 * 0000000140A07D3F: mov     r15d, 1
 * 0000000140A07D45: cmp     r11d, 8
 * 0000000140A07D49: jb      short loc_140A07D68
 * 0000000140A07D4B: mov     eax, r11d
 * 0000000140A07D4E: shr     rax, 3
 * 0000000140A07D52: xor     r8, [r9]
 * 0000000140A07D55: mov     ecx, r10d
 * 0000000140A07D58: rol     r8, cl
 * 0000000140A07D5B: add     r9, 8
 * 0000000140A07D5F: add     r11d, 0FFFFFFF8h
 * 0000000140A07D63: sub     rax, r15
 * 0000000140A07D66: jnz     short loc_140A07D52
 * 0000000140A07D68: test    r11d, r11d
 * 0000000140A07D6B: jz      short loc_140A07D8F
 * 0000000140A07D6D: mov     r13d, 0FFFFFFFFh
 * 0000000140A07D73: movzx   eax, byte ptr [r9]
 * 0000000140A07D77: mov     ecx, r10d
 * 0000000140A07D7A: xor     r8, rax
 * 0000000140A07D7D: add     r9, r15
 * 0000000140A07D80: rol     r8, cl
 * 0000000140A07D83: add     r11d, r13d
 * 0000000140A07D86: jnz     short loc_140A07D73
 * 0000000140A07D88: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A07D8F: mov     rax, [rbp+0BE0h+var_BD0]
 * 0000000140A07D93: lea     rcx, [rbp+0BE0h+var_90]
 * 0000000140A07D9A: mov     r9d, 4
 * 0000000140A07DA0: mov     [rsi+7B8h], rax
 * 0000000140A07DA7: mov     eax, [rbp+0BE0h+var_BE8]
 * 0000000140A07DAA: mov     edx, r9d
 * 0000000140A07DAD: add     [rsi+828h], eax
 * 0000000140A07DB3: lea     r10d, [r9+1Ch]
 * 0000000140A07DB7: mov     rax, [rcx]
 * 0000000140A07DBA: add     r10d, 0FFFFFFF8h
 * 0000000140A07DBE: mov     [r14], rax
 * 0000000140A07DC1: add     rcx, 8
 * 0000000140A07DC5: add     r14, 8
 * 0000000140A07DC9: sub     rdx, r15
 * 0000000140A07DCC: jnz     short loc_140A07DB7
 * 0000000140A07DCE: xor     r11d, r11d
 * 0000000140A07DD1: test    r10d, r10d
 * 0000000140A07DD4: jz      short loc_140A07DEF
 * 0000000140A07DD6: mov     r11d, 0FFFFFFFFh
 * 0000000140A07DDC: mov     al, [rcx]
 * 0000000140A07DDE: add     rcx, r15
 * 0000000140A07DE1: mov     [r14], al
 * 0000000140A07DE4: add     r14, r15
 * 0000000140A07DE7: add     r10d, r11d
 * 0000000140A07DEA: jnz     short loc_140A07DDC
 * 0000000140A07DEC: xor     r11d, r11d
 * 0000000140A07DEF: mov     [rsi+7B8h], r8
 * 0000000140A07DF6: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A07E00: jnz     loc_140A08037
 * 0000000140A07E06: mov     eax, r11d
 * 0000000140A07E09: mov     rcx, rsi
 * 0000000140A07E0C: mov     r11d, 19h
 * 0000000140A07E12: xor     [rcx], rbx
 * 0000000140A07E15: add     eax, r15d
 * 0000000140A07E18: lea     rcx, [rcx+8]
 * 0000000140A07E1C: cmp     eax, r11d
 * 0000000140A07E1F: jb      short loc_140A07E12
 * 0000000140A07E21: xor     r15d, r15d
 * 0000000140A07E24: mov     [rbp+0BE0h+var_9F8], rbx
 * 0000000140A07E2B: mov     r8d, r12d
 * 0000000140A07E2E: lea     r10d, [r15+1]
 * 0000000140A07E32: test    r12d, r12d
 * 0000000140A07E35: jz      short loc_140A07E71
 * 0000000140A07E37: mov     edx, r12d
 * 0000000140A07E3A: dec     rdx
 * 0000000140A07E3D: lea     rdx, [rcx+rdx*8]
 * 0000000140A07E41: xor     [rdx], rbx
 * 0000000140A07E44: lea     rax, [rbp+0BE0h+var_9F8]
 * 0000000140A07E4B: mov     ecx, r8d
 * 0000000140A07E4E: lea     rdx, [rdx-8]
 * 0000000140A07E52: ror     rbx, cl
 * 0000000140A07E55: mov     [rbp+0BE0h+var_9F8], rbx
 * 0000000140A07E5C: and     ebx, 3Fh
 * 0000000140A07E5F: btc     [rax], rbx
 * 0000000140A07E63: sub     r8d, r10d
 * 0000000140A07E66: jz      short loc_140A07E71
 * 0000000140A07E68: mov     rbx, [rbp+0BE0h+var_9F8]
 * 0000000140A07E6F: jmp     short loc_140A07E41
 * 0000000140A07E71: bt      r13d, 13h
 * 0000000140A07E76: jnb     short loc_140A07EC3
 * 0000000140A07E78: rdtsc
 * 0000000140A07E7A: shl     rdx, 20h
 * 0000000140A07E7E: or      rax, rdx
 * 0000000140A07E81: mov     rcx, rax
 * 0000000140A07E84: ror     rax, 3
 * 0000000140A07E88: xor     rcx, rax
 * 0000000140A07E8B: mov     rax, 7010008004002001h
 * 0000000140A07E95: mul     rcx
 * 0000000140A07E98: mov     rcx, rdx
 * 0000000140A07E9B: mov     [rbp+0BE0h+var_430], rdx
 * 0000000140A07EA2: xor     rcx, rax
 * 0000000140A07EA5: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A07EAF: mul     rcx
 * 0000000140A07EB2: shr     rdx, 1
 * 0000000140A07EB5: lea     rax, [rdx+rdx*2]
 * 0000000140A07EB9: cmp     rcx, rax
 * 0000000140A07EBC: jz      short loc_140A07ECE
 * 0000000140A07EBE: jmp     loc_140A08034
 * 0000000140A07EC3: bt      r13d, 8
 * 0000000140A07EC8: jb      loc_140A08034
 * 0000000140A07ECE: mov     rdi, [rbp+0BE0h+var_C30]
 * 0000000140A07ED2: mov     eax, 2
 * 0000000140A07ED7: mov     [rbp+0BE0h+var_B5B], al
 * 0000000140A07EDD: mov     ecx, esi
 * 0000000140A07EDF: mov     eax, 0Ch
 * 0000000140A07EE4: mov     [rbp+0BE0h+var_B5A], r9b
 * 0000000140A07EEB: mov     [rbp+0BE0h+var_B5F], al
 * 0000000140A07EF1: mov     r9, rsi
 * 0000000140A07EF4: mov     eax, 0Fh
 * 0000000140A07EF9: mov     [rbp+0BE0h+var_B60], r15b
 * 0000000140A07F00: mov     r14d, r11d
 * 0000000140A07F03: mov     [rbp+0BE0h+var_B5D], r10b
 * 0000000140A07F0A: mov     r11d, r15d
 * 0000000140A07F0D: mov     [rbp+0BE0h+var_B58], 3
 * 0000000140A07F14: mov     r15d, [rbp+0BE0h+var_C28]
 * 0000000140A07F18: mov     r10, rsi
 * 0000000140A07F1B: lea     ebx, [rax+1]
 * 0000000140A07F1E: mov     [rbp+0BE0h+var_B57], 5
 * 0000000140A07F25: mov     [rbp+0BE0h+var_B54], 6
 * 0000000140A07F2C: mov     [rbp+0BE0h+var_B59], 7
 * 0000000140A07F33: mov     [rbp+0BE0h+var_B53], 8
 * 0000000140A07F3A: mov     [rbp+0BE0h+var_B56], 9
 * 0000000140A07F41: mov     [rbp+0BE0h+var_B52], 0Ah
 * 0000000140A07F48: mov     [rbp+0BE0h+var_B5C], 0Bh
 * 0000000140A07F4F: mov     [rbp+0BE0h+var_B51], 0Dh
 * 0000000140A07F56: mov     [rbp+0BE0h+var_B55], 0Eh
 * 0000000140A07F5D: mov     [rbp+0BE0h+var_B5E], al
 * 0000000140A07F63: ror     r9, cl
 * 0000000140A07F66: test    ebx, ebx
 * 0000000140A07F68: jz      short loc_140A07FA7
 * 0000000140A07F6A: mov     rdx, [r10]
 * 0000000140A07F6D: mov     r13d, 1
 * 0000000140A07F73: mov     r8d, ebx
 * 0000000140A07F76: lea     r12d, [r13+0Eh]
 * 0000000140A07F7A: movzx   eax, byte ptr [r10]
 * 0000000140A07F7E: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140A07F82: and     rax, r12
 * 0000000140A07F85: movzx   ecx, [rbp+rax+0BE0h+var_B60]
 * 0000000140A07F8D: or      rdx, rcx
 * 0000000140A07F90: ror     rdx, 4
 * 0000000140A07F94: mov     [r10], rdx
 * 0000000140A07F97: sub     r8, r13
 * 0000000140A07F9A: jnz     short loc_140A07F7A
 * 0000000140A07F9C: mov     r12d, [rbp+0BE0h+var_C38]
 * 0000000140A07FA0: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A07FA7: mov     rdx, [r10]
 * 0000000140A07FAA: mov     eax, r11d
 * 0000000140A07FAD: sub     rdx, rax
 * 0000000140A07FB0: sub     rdx, rsi
 * 0000000140A07FB3: bt      r13d, 9
 * 0000000140A07FB8: jb      short loc_140A07FCF
 * 0000000140A07FBA: xor     rdx, [rsp+0CE0h+var_C88]
 * 0000000140A07FBF: mov     ecx, edi
 * 0000000140A07FC1: bswap   rdx
 * 0000000140A07FC4: xor     rdx, r9
 * 0000000140A07FC7: ror     rdx, cl
 * 0000000140A07FCA: xor     rdx, rdi
 * 0000000140A07FCD: jmp     short loc_140A07FD2
 * 0000000140A07FCF: xor     rdx, r9
 * 0000000140A07FD2: mov     [r10], rdx
 * 0000000140A07FD5: mov     ecx, edx
 * 0000000140A07FD7: mov     r8d, edx
 * 0000000140A07FDA: mov     eax, r11d
 * 0000000140A07FDD: xor     r8d, 0EFFh
 * 0000000140A07FE4: mov     edx, 0C8h
 * 0000000140A07FE9: sub     edx, r11d
 * 0000000140A07FEC: not     ecx
 * 0000000140A07FEE: xor     rdx, rax
 * 0000000140A07FF1: add     r10, 8
 * 0000000140A07FF5: ror     rdx, cl
 * 0000000140A07FF8: mov     cl, r8b
 * 0000000140A07FFB: xor     r9, rdx
 * 0000000140A07FFE: rol     r9, cl
 * 0000000140A08001: add     r9, rsi
 * 0000000140A08004: xor     r9, r15
 * 0000000140A08007: inc     r11d
 * 0000000140A0800A: cmp     r11d, 19h
 * 0000000140A0800E: jnz     short loc_140A08024
 * 0000000140A08010: bt      r13d, 13h
 * 0000000140A08015: lea     eax, [r11-19h]
 * 0000000140A08019: lea     ebx, [r11-18h]
 * 0000000140A0801D: cmovnb  eax, r12d
 * 0000000140A08021: add     r14d, eax
 * 0000000140A08024: cmp     r11d, r14d
 * 0000000140A08027: jb      loc_140A07F66
 * 0000000140A0802D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A08034: xor     r11d, r11d
 * 0000000140A08037: rdtsc
 * 0000000140A08039: shl     rdx, 20h
 * 0000000140A0803D: mov     r9, 7010008004002001h
 * 0000000140A08047: or      rax, rdx
 * 0000000140A0804A: mov     ebx, 1
 * 0000000140A0804F: mov     rcx, rax
 * 0000000140A08052: mov     [rbp+0BE0h+var_C38], ebx
 * 0000000140A08055: ror     rax, 3
 * 0000000140A08059: xor     rcx, rax
 * 0000000140A0805C: mov     rax, r9
 * 0000000140A0805F: mul     rcx
 * 0000000140A08062: mov     r12, rax
 * 0000000140A08065: mov     [rbp+0BE0h+var_428], rdx
 * 0000000140A0806C: xor     r12, rdx
 * 0000000140A0806F: jmp     loc_140A080FB
 * 0000000140A08074: mov     rax, r9
 * 0000000140A08077: xor     rax, rcx
 * 0000000140A0807A: mov     [r10], rax
 * 0000000140A0807D: mov     ecx, eax
 * 0000000140A0807F: mov     r8d, eax
 * 0000000140A08082: not     ecx
 * 0000000140A08084: mov     eax, r11d
 * 0000000140A08087: xor     r8d, 0EFFh
 * 0000000140A0808E: mov     edx, 0C8h
 * 0000000140A08093: add     r10, 8
 * 0000000140A08097: sub     edx, r11d
 * 0000000140A0809A: xor     rdx, rax
 * 0000000140A0809D: mov     eax, 19h
 * 0000000140A080A2: ror     rdx, cl
 * 0000000140A080A5: mov     cl, r8b
 * 0000000140A080A8: xor     r9, rdx
 * 0000000140A080AB: rol     r9, cl
 * 0000000140A080AE: add     r9, rsi
 * 0000000140A080B1: lea     ecx, [rax-18h]
 * 0000000140A080B4: xor     r9, [rbp+0BE0h+arg_8]
 * 0000000140A080BB: inc     r11d
 * 0000000140A080BE: cmp     r11d, eax
 * 0000000140A080C1: cmovz   ebx, ecx
 * 0000000140A080C4: jb      loc_140A07AF5
 * 0000000140A080CA: mov     r12, [rsp+0CE0h+var_C70]
 * 0000000140A080CF: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A080D6: mov     rax, [rsi+268h]
 * 0000000140A080DD: lea     rcx, [rsi+800h]
 * 0000000140A080E4: call    KeGuardDispatchICall
 * 0000000140A080E9: xor     r11d, r11d
 * 0000000140A080EC: mov     r9, 7010008004002001h
 * 0000000140A080F6: mov     ebx, 1
 * 0000000140A080FB: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A08102: test    dword ptr [r13+990h], 10000000h
 * 0000000140A0810D: mov     r15, [r13+7D8h]
 * 0000000140A08114: jz      short loc_140A0814B
 * 0000000140A08116: rdtsc
 * 0000000140A08118: shl     rdx, 20h
 * 0000000140A0811C: or      rax, rdx
 * 0000000140A0811F: mov     rcx, rax
 * 0000000140A08122: ror     rax, 3
 * 0000000140A08126: xor     rcx, rax
 * 0000000140A08129: mov     rax, r9
 * 0000000140A0812C: mul     rcx
 * 0000000140A0812F: mov     r15, rdx
 * 0000000140A08132: mov     [rbp+0BE0h+var_420], rdx
 * 0000000140A08139: xor     r15, rax
 * 0000000140A0813C: and     r15, 0Fh
 * 0000000140A08140: shl     r15, 4
 * 0000000140A08144: add     r15, [r13+5D0h]
 * 0000000140A0814B: mov     r8d, 28h ; '('
 * 0000000140A08151: lea     r14, [r13+8F8h]
 * 0000000140A08158: mov     rcx, r14
 * 0000000140A0815B: lea     rdx, [rbp+0BE0h+var_730]
 * 0000000140A08162: lea     r9d, [r8-23h]
 * 0000000140A08166: mov     rax, [rcx]
 * 0000000140A08169: add     r8d, 0FFFFFFF8h
 * 0000000140A0816D: mov     [rdx], rax
 * 0000000140A08170: add     rcx, 8
 * 0000000140A08174: add     rdx, 8
 * 0000000140A08178: sub     r9, rbx
 * 0000000140A0817B: jnz     short loc_140A08166
 * 0000000140A0817D: test    r8d, r8d
 * 0000000140A08180: jz      short loc_140A0819A
 * 0000000140A08182: mov     r11d, 0FFFFFFFFh
 * 0000000140A08188: mov     al, [rcx]
 * 0000000140A0818A: add     rcx, rbx
 * 0000000140A0818D: mov     [rdx], al
 * 0000000140A0818F: add     rdx, rbx
 * 0000000140A08192: add     r8d, r11d
 * 0000000140A08195: jnz     short loc_140A08188
 * 0000000140A08197: xor     r11d, r11d
 * 0000000140A0819A: mov     eax, [r13+990h]
 * 0000000140A081A1: mov     ecx, 8000h
 * 0000000140A081A6: test    ecx, eax
 * 0000000140A081A8: jnz     short loc_140A081B3
 * 0000000140A081AA: cmp     [r14], r11d
 * 0000000140A081AD: jnz     loc_140A08817
 * 0000000140A081B3: bt      eax, 1Eh
 * 0000000140A081B7: jb      loc_140A08A08
 * 0000000140A081BD: mov     al, [r13+920h]
 * 0000000140A081C4: mov     r8, r12
 * 0000000140A081C7: sub     al, bl
 * 0000000140A081C9: xor     r8, rsi
 * 0000000140A081CC: movzx   r10d, al
 * 0000000140A081D0: mov     r11d, 3Fh ; '?'
 * 0000000140A081D6: sub     r11d, r10d
 * 0000000140A081D9: rdtsc
 * 0000000140A081DB: shl     rdx, 20h
 * 0000000140A081DF: mov     rbx, 7010008004002001h
 * 0000000140A081E9: or      rax, rdx
 * 0000000140A081EC: mov     rcx, rax
 * 0000000140A081EF: ror     rax, 3
 * 0000000140A081F3: xor     rcx, rax
 * 0000000140A081F6: mov     rax, rbx
 * 0000000140A081F9: mul     rcx
 * 0000000140A081FC: mov     [rbp+0BE0h+var_418], rdx
 * 0000000140A08203: xor     rax, rdx
 * 0000000140A08206: xor     edx, edx
 * 0000000140A08208: div     r11
 * 0000000140A0820B: lea     r9d, [r10+rdx]
 * 0000000140A0820F: rdtsc
 * 0000000140A08211: shl     rdx, 20h
 * 0000000140A08215: or      rax, rdx
 * 0000000140A08218: mov     rcx, rax
 * 0000000140A0821B: ror     rax, 3
 * 0000000140A0821F: xor     rcx, rax
 * 0000000140A08222: mov     rax, rbx
 * 0000000140A08225: mul     rcx
 * 0000000140A08228: xor     rax, rdx
 * 0000000140A0822B: mov     [rbp+0BE0h+var_410], rdx
 * 0000000140A08232: xor     edx, edx
 * 0000000140A08234: div     r11
 * 0000000140A08237: add     edx, r10d
 * 0000000140A0823A: cmp     edx, r9d
 * 0000000140A0823D: jz      short loc_140A0820F
 * 0000000140A0823F: mov     rbx, [r13+790h]
 * 0000000140A08246: xor     r11d, r11d
 * 0000000140A08249: mov     rsi, [r13+788h]
 * 0000000140A08250: mov     eax, r9d
 * 0000000140A08253: bts     r8, rax
 * 0000000140A08257: mov     eax, edx
 * 0000000140A08259: btr     r8, rax
 * 0000000140A0825D: cmp     dword ptr [r13+924h], 3
 * 0000000140A08265: jnz     loc_140A083FD
 * 0000000140A0826B: mov     r13, [rbp+0BE0h+var_C40]
 * 0000000140A0826F: test    r13, r13
 * 0000000140A08272: jz      loc_140A083F6
 * 0000000140A08278: mov     rcx, [rbp+0BE0h+arg_0]
 * 0000000140A0827F: lea     edx, [r11+1]
 * 0000000140A08283: mov     rax, [rcx+370h]
 * 0000000140A0828A: mov     byte ptr [rbx], 13h
 * 0000000140A0828D: mov     [rbx+1], dl
 * 0000000140A08290: mov     [rbx+2], r11w
 * 0000000140A08295: mov     [rbx+18h], rax
 * 0000000140A08299: mov     [rbx+20h], r13
 * 0000000140A0829D: mov     [rbx+38h], r11
 * 0000000140A082A1: mov     [rbx+10h], r11
 * 0000000140A082A5: mov     [rbx+28h], r8
 * 0000000140A082A9: mov     rax, [rcx+360h]
 * 0000000140A082B0: mov     rcx, [r13+8]
 * 0000000140A082B4: mov     r8, [r13+0]
 * 0000000140A082B8: mov     edx, [r13+10h]
 * 0000000140A082BC: call    KeGuardDispatchICall
 * 0000000140A082C1: mov     r9, [r13+0]
 * 0000000140A082C5: mov     rcx, r13
 * 0000000140A082C8: rol     rcx, 11h
 * 0000000140A082CC: mov     rax, 7010008004002001h
 * 0000000140A082D6: xor     rcx, r13
 * 0000000140A082D9: mov     r10d, 4
 * 0000000140A082DF: mul     rcx
 * 0000000140A082E2: mov     [rbp+0BE0h+var_408], rdx
 * 0000000140A082E9: xor     rdx, rax
 * 0000000140A082EC: lea     rax, [r13+18h]
 * 0000000140A082F0: mov     r8, rdx
 * 0000000140A082F3: xor     r11d, r11d
 * 0000000140A082F6: lea     r13d, [r10-3]
 * 0000000140A082FA: xor     [rax], r8
 * 0000000140A082FD: mov     ecx, r10d
 * 0000000140A08300: rol     r8, cl
 * 0000000140A08303: lea     rax, [rax-8]
 * 0000000140A08307: sub     r10d, r13d
 * 0000000140A0830A: jnz     short loc_140A082FA
 * 0000000140A0830C: and     dl, 0Fh
 * 0000000140A0830F: cmp     dl, 7
 * 0000000140A08312: jnb     short loc_140A08381
 * 0000000140A08314: mov     rcx, r9
 * 0000000140A08317: mov     rax, 7010008004002001h
 * 0000000140A08321: rol     rcx, 11h
 * 0000000140A08325: mov     r10d, 6
 * 0000000140A0832B: xor     rcx, r9
 * 0000000140A0832E: mul     rcx
 * 0000000140A08331: mov     [rbp+0BE0h+var_400], rdx
 * 0000000140A08338: xor     rdx, rax
 * 0000000140A0833B: add     r8, rdx
 * 0000000140A0833E: lea     rax, [r9+28h]
 * 0000000140A08342: movsx   edx, word ptr [r9+8]
 * 0000000140A08347: xor     [rax], r8
 * 0000000140A0834A: mov     ecx, r10d
 * 0000000140A0834D: rol     r8, cl
 * 0000000140A08350: lea     rax, [rax-8]
 * 0000000140A08354: sub     r10d, r13d
 * 0000000140A08357: jnz     short loc_140A08347
 * 0000000140A08359: sub     rdx, 30h ; '0'
 * 0000000140A0835D: shr     rdx, 3
 * 0000000140A08361: test    edx, edx
 * 0000000140A08363: jz      short loc_140A08381
 * 0000000140A08365: movsxd  r10, edx
 * 0000000140A08368: add     r10, 5
 * 0000000140A0836C: lea     r10, [r9+r10*8]
 * 0000000140A08370: xor     [r10], r8
 * 0000000140A08373: mov     ecx, edx
 * 0000000140A08375: rol     r8, cl
 * 0000000140A08378: lea     r10, [r10-8]
 * 0000000140A0837C: sub     edx, r13d
 * 0000000140A0837F: jnz     short loc_140A08370
 * 0000000140A08381: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A08388: mov     [rbx+40h], r12
 * 0000000140A0838C: mov     r12, 7010008004002001h
 * 0000000140A08396: test    dword ptr [r13+990h], 100h
 * 0000000140A083A1: jz      short loc_140A08422
 * 0000000140A083A3: lea     r9, [r15-48h]
 * 0000000140A083A7: mov     [r9+40h], rbx
 * 0000000140A083AB: rdtsc
 * 0000000140A083AD: shl     rdx, 20h
 * 0000000140A083B1: mov     r8d, 19h
 * 0000000140A083B7: or      rax, rdx
 * 0000000140A083BA: mov     rcx, rax
 * 0000000140A083BD: ror     rax, 3
 * 0000000140A083C1: xor     rcx, rax
 * 0000000140A083C4: mov     rax, r12
 * 0000000140A083C7: mul     rcx
 * 0000000140A083CA: lea     r15d, [r8-18h]
 * 0000000140A083CE: mov     [rbp+0BE0h+var_3F8], rdx
 * 0000000140A083D5: xor     rdx, rax
 * 0000000140A083D8: lea     rax, [r9+48h]
 * 0000000140A083DC: xor     [rax], rdx
 * 0000000140A083DF: lea     rax, [rax+8]
 * 0000000140A083E3: sub     r8, r15
 * 0000000140A083E6: jnz     short loc_140A083DC
 * 0000000140A083E8: mov     dword ptr [r9+48h], 48513148h
 * 0000000140A083F0: mov     [r9+20h], rdx
 * 0000000140A083F4: jmp     short loc_140A0842B
 * 0000000140A083F6: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A083FD: mov     byte ptr [rbx], 13h
 * 0000000140A08400: mov     eax, 1
 * 0000000140A08405: mov     [rbx+1], al
 * 0000000140A08408: mov     [rbx+2], r11w
 * 0000000140A0840D: mov     [rbx+18h], r15
 * 0000000140A08411: mov     [rbx+20h], r8
 * 0000000140A08415: mov     [rbx+38h], r11
 * 0000000140A08419: mov     [rbx+10h], r11
 * 0000000140A0841D: jmp     loc_140A08388
 * 0000000140A08422: mov     r9, rbx
 * 0000000140A08425: mov     r15d, 1
 * 0000000140A0842B: mov     r10, [r13+0A98h]
 * 0000000140A08432: test    r10, r10
 * 0000000140A08435: jz      loc_140A084CA
 * 0000000140A0843B: mov     r10, [r10+20h]
 * 0000000140A0843F: mov     eax, 0E0E20100h
 * 0000000140A08444: mov     rcx, r10
 * 0000000140A08447: xor     rcx, rax
 * 0000000140A0844A: shr     rcx, 4
 * 0000000140A0844E: xor     rcx, r10
 * 0000000140A08451: shr     rcx, 4
 * 0000000140A08455: xor     rcx, [r13+590h]
 * 0000000140A0845C: mov     al, cl
 * 0000000140A0845E: mov     r8, rcx
 * 0000000140A08461: and     al, 0Fh
 * 0000000140A08463: movzx   r11d, al
 * 0000000140A08467: cmovz   r11d, r15d
 * 0000000140A0846B: xor     eax, eax
 * 0000000140A0846D: mov     edx, eax
 * 0000000140A0846F: test    r11b, r11b
 * 0000000140A08472: jz      short loc_140A084AB
 * 0000000140A08474: lea     r12d, [rax+0Fh]
 * 0000000140A08478: mov     rdx, rcx
 * 0000000140A0847B: and     rdx, r12
 * 0000000140A0847E: add     rdx, r10
 * 0000000140A08481: mov     r10, [rdx]
 * 0000000140A08484: mov     rax, r10
 * 0000000140A08487: xor     rax, 1DFE00h
 * 0000000140A0848D: shr     rax, 4
 * 0000000140A08491: xor     rax, r10
 * 0000000140A08494: shr     rax, 4
 * 0000000140A08498: xor     rcx, rax
 * 0000000140A0849B: add     r11b, 0FFh
 * 0000000140A0849F: jnz     short loc_140A08478
 * 0000000140A084A1: mov     r12, 7010008004002001h
 * 0000000140A084AB: mov     rax, r8
 * 0000000140A084AE: xor     r11d, r11d
 * 0000000140A084B1: xor     r8, r9
 * 0000000140A084B4: and     eax, 1000h
 * 0000000140A084B9: test    rax, rax
 * 0000000140A084BC: cmovz   r8, r9
 * 0000000140A084C0: mov     [rdx], r8
 * 0000000140A084C3: mov     r9, [r13+0A98h]
 * 0000000140A084CA: lock or [rsp+0CE0h+var_CE0], r11d
 * 0000000140A084CF: mov     ecx, [r13+838h]
 * 0000000140A084D6: test    ecx, ecx
 * 0000000140A084D8: jz      loc_140A08767
 * 0000000140A084DE: sub     ecx, 1
 * 0000000140A084E1: jz      loc_140A08750
 * 0000000140A084E7: sub     ecx, 1
 * 0000000140A084EA: jz      loc_140A0873D
 * 0000000140A084F0: sub     ecx, 1
 * 0000000140A084F3: jz      loc_140A08681
 * 0000000140A084F9: cmp     ecx, 1
 * 0000000140A084FC: jz      loc_140A08583
 * 0000000140A08502: mov     r8, [r13+998h]
 * 0000000140A08509: mov     [r8+48h], r9
 * 0000000140A0850D: lock or [rsp+0CE0h+var_CE0], r11d
 * 0000000140A08512: rdtsc
 * 0000000140A08514: shl     rdx, 20h
 * 0000000140A08518: or      rax, rdx
 * 0000000140A0851B: mov     rcx, rax
 * 0000000140A0851E: mov     rdx, rax
 * 0000000140A08521: ror     rcx, 3
 * 0000000140A08525: mov     rax, r12
 * 0000000140A08528: xor     rdx, rcx
 * 0000000140A0852B: mul     rdx
 * 0000000140A0852E: mov     rcx, rdx
 * 0000000140A08531: mov     [rbp+0BE0h+var_3F0], rdx
 * 0000000140A08538: xor     rcx, rax
 * 0000000140A0853B: mov     rax, 0ABCC77118461CEFDh
 * 0000000140A08545: mul     rcx
 * 0000000140A08548: shr     rdx, 1Ah
 * 0000000140A0854C: imul    rax, rdx, 5F5E100h
 * 0000000140A08553: sub     rcx, rax
 * 0000000140A08556: mov     rax, 0D6BF94D5E57A42BDh
 * 0000000140A08560: add     rcx, 47868C00h
 * 0000000140A08567: imul    rcx
 * 0000000140A0856A: add     rdx, rcx
 * 0000000140A0856D: sar     rdx, 17h
 * 0000000140A08571: mov     rax, rdx
 * 0000000140A08574: shr     rax, 3Fh
 * 0000000140A08578: add     rdx, rax
 * 0000000140A0857B: mov     [r8], edx
 * 0000000140A0857E: jmp     loc_140A08812
 * 0000000140A08583: mov     r8, [r13+9E0h]
 * 0000000140A0858A: xor     r9d, r9d
 * 0000000140A0858D: mov     rcx, [r13+9F0h]
 * 0000000140A08594: mov     rdx, rbx
 * 0000000140A08597: mov     rax, [r13+9E8h]
 * 0000000140A0859E: mov     rdi, [r13+998h]
 * 0000000140A085A5: mov     byte ptr [r8], 12h
 * 0000000140A085A9: mov     byte ptr [r8+2], 58h ; 'X'
 * 0000000140A085AE: mov     [r8+50h], r11b
 * 0000000140A085B2: mov     [r8+8], rdi
 * 0000000140A085B6: mov     [r8+20h], rax
 * 0000000140A085BA: mov     [r8+28h], r11
 * 0000000140A085BE: mov     [r8+30h], rcx
 * 0000000140A085C2: mov     [r8+51h], r11b
 * 0000000140A085C6: mov     [r8+38h], r11
 * 0000000140A085CA: mov     [r8+52h], r11b
 * 0000000140A085CE: xor     r8d, r8d
 * 0000000140A085D1: mov     rax, [r13+2C0h]
 * 0000000140A085D8: mov     rcx, [r13+9E0h]
 * 0000000140A085DF: call    KeGuardDispatchICall
 * 0000000140A085E4: xor     r11d, r11d
 * 0000000140A085E7: test    al, al
 * 0000000140A085E9: jnz     loc_140A08812
 * 0000000140A085EF: cmp     [r14], r11d
 * 0000000140A085F2: jnz     short loc_140A08631
 * 0000000140A085F4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A085FE: xor     edx, edx
 * 0000000140A08600: add     rax, r13
 * 0000000140A08603: mov     rcx, r13
 * 0000000140A08606: mov     [r13+900h], rax
 * 0000000140A0860D: mov     [r13+908h], r11
 * 0000000140A08614: mov     qword ptr [r13+910h], 104h
 * 0000000140A0861F: mov     [r13+918h], rdi
 * 0000000140A08626: mov     [r14], r15d
 * 0000000140A08629: call    $$b8
 * 0000000140A0862E: xor     r11d, r11d
 * 0000000140A08631: mov     edx, 28h ; '('
 * 0000000140A08636: lea     rcx, [rbp+0BE0h+var_730]
 * 0000000140A0863D: lea     r13d, [rdx-23h]
 * 0000000140A08641: mov     rax, [r14]
 * 0000000140A08644: add     edx, 0FFFFFFF8h
 * 0000000140A08647: mov     [rcx], rax
 * 0000000140A0864A: add     r14, 8
 * 0000000140A0864E: add     rcx, 8
 * 0000000140A08652: sub     r13, r15
 * 0000000140A08655: jnz     short loc_140A08641
 * 0000000140A08657: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A0865E: test    edx, edx
 * 0000000140A08660: jz      loc_140A08812
 * 0000000140A08666: mov     r11d, 0FFFFFFFFh
 * 0000000140A0866C: mov     al, [r14]
 * 0000000140A0866F: add     r14, r15
 * 0000000140A08672: mov     [rcx], al
 * 0000000140A08674: add     rcx, r15
 * 0000000140A08677: add     edx, r11d
 * 0000000140A0867A: jnz     short loc_140A0866C
 * 0000000140A0867C: jmp     loc_140A0880F
 * 0000000140A08681: mov     rdi, [r13+998h]
 * 0000000140A08688: mov     rax, [r13+698h]
 * 0000000140A0868F: mov     rcx, [rdi+rax]
 * 0000000140A08693: test    rcx, rcx
 * 0000000140A08696: jz      loc_140A08728
 * 0000000140A0869C: cmp     [r14], r11d
 * 0000000140A0869F: jnz     short loc_140A086DE
 * 0000000140A086A1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A086AB: xor     edx, edx
 * 0000000140A086AD: add     rax, r13
 * 0000000140A086B0: mov     [r13+900h], rax
 * 0000000140A086B7: mov     [r13+908h], r11
 * 0000000140A086BE: mov     qword ptr [r13+910h], 104h
 * 0000000140A086C9: mov     [r13+918h], rcx
 * 0000000140A086D0: mov     rcx, r13
 * 0000000140A086D3: mov     [r14], r15d
 * 0000000140A086D6: call    $$b8
 * 0000000140A086DB: xor     r11d, r11d
 * 0000000140A086DE: mov     edx, 28h ; '('
 * 0000000140A086E3: lea     rcx, [rbp+0BE0h+var_730]
 * 0000000140A086EA: lea     r13d, [rdx-23h]
 * 0000000140A086EE: mov     rax, [r14]
 * 0000000140A086F1: add     edx, 0FFFFFFF8h
 * 0000000140A086F4: mov     [rcx], rax
 * 0000000140A086F7: add     r14, 8
 * 0000000140A086FB: add     rcx, 8
 * 0000000140A086FF: sub     r13, r15
 * 0000000140A08702: jnz     short loc_140A086EE
 * 0000000140A08704: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A0870B: test    edx, edx
 * 0000000140A0870D: jz      short loc_140A08728
 * 0000000140A0870F: mov     r11d, 0FFFFFFFFh
 * 0000000140A08715: mov     al, [r14]
 * 0000000140A08718: add     r14, r15
 * 0000000140A0871B: mov     [rcx], al
 * 0000000140A0871D: add     rcx, r15
 * 0000000140A08720: add     edx, r11d
 * 0000000140A08723: jnz     short loc_140A08715
 * 0000000140A08725: xor     r11d, r11d
 * 0000000140A08728: lock or [rsp+0CE0h+var_CE0], r11d
 * 0000000140A0872D: mov     rax, [r13+698h]
 * 0000000140A08734: mov     [rdi+rax], rbx
 * 0000000140A08738: jmp     loc_140A08812
 * 0000000140A0873D: mov     rax, [r13+7C0h]
 * 0000000140A08744: mov     [rax+80h], r9
 * 0000000140A0874B: jmp     loc_140A08812
 * 0000000140A08750: mov     rcx, [r13+7C0h]
 * 0000000140A08757: mov     rax, [r13+630h]
 * 0000000140A0875E: mov     [rcx+rax], r9
 * 0000000140A08762: jmp     loc_140A08812
 * 0000000140A08767: rdtsc
 * 0000000140A08769: shl     rdx, 20h
 * 0000000140A0876D: or      rax, rdx
 * 0000000140A08770: mov     rcx, rax
 * 0000000140A08773: mov     rdx, rax
 * 0000000140A08776: ror     rcx, 3
 * 0000000140A0877A: mov     rax, r12
 * 0000000140A0877D: xor     rdx, rcx
 * 0000000140A08780: mul     rdx
 * 0000000140A08783: mov     rcx, rdx
 * 0000000140A08786: mov     [rbp+0BE0h+var_3E8], rdx
 * 0000000140A0878D: xor     rcx, rax
 * 0000000140A08790: mov     rax, 0ABCC77118461CEFDh
 * 0000000140A0879A: mul     rcx
 * 0000000140A0879D: shr     rdx, 1Ah
 * 0000000140A087A1: imul    rax, rdx, 5F5E100h
 * 0000000140A087A8: sub     rcx, rax
 * 0000000140A087AB: sub     rdi, rcx
 * 0000000140A087AE: rdtsc
 * 0000000140A087B0: shl     rdx, 20h
 * 0000000140A087B4: or      rax, rdx
 * 0000000140A087B7: mov     [rsp+0CE0h+BugCheckParameter4], r9
 * 0000000140A087BC: mov     rcx, rax
 * 0000000140A087BF: mov     rdx, rax
 * 0000000140A087C2: ror     rcx, 3
 * 0000000140A087C6: mov     rax, r12
 * 0000000140A087C9: xor     rdx, rcx
 * 0000000140A087CC: mov     rcx, rsi
 * 0000000140A087CF: mul     rdx
 * 0000000140A087D2: mov     r8, rdx
 * 0000000140A087D5: mov     [rbp+0BE0h+var_3E0], rdx
 * 0000000140A087DC: xor     r8, rax
 * 0000000140A087DF: mov     rax, 346DC5D63886594Bh
 * 0000000140A087E9: mul     r8
 * 0000000140A087EC: shr     rdx, 0Bh
 * 0000000140A087F0: imul    rax, rdx, 2710h
 * 0000000140A087F7: mov     rdx, rdi
 * 0000000140A087FA: sub     r8, rax
 * 0000000140A087FD: mov     rax, [r13+1D8h]
 * 0000000140A08804: mov     r9d, r8d
 * 0000000140A08807: xor     r8d, r8d
 * 0000000140A0880A: call    KeGuardDispatchICall
 * 0000000140A0880F: xor     r11d, r11d
 * 0000000140A08812: mov     ecx, 8000h
 * 0000000140A08817: cmp     [rbp+0BE0h+var_730], r11d
 * 0000000140A0881E: jz      loc_140A08A08
 * 0000000140A08824: test    [r13+990h], ecx
 * 0000000140A0882B: jnz     loc_140A08A08
 * 0000000140A08831: mov     r13, [rbp+0BE0h+var_718]
 * 0000000140A08838: mov     rbx, [rbp+0BE0h+var_710]
 * 0000000140A0883F: mov     rdi, [rbp+0BE0h+var_720]
 * 0000000140A08846: mov     r14, [rbp+0BE0h+var_728]
 * 0000000140A0884D: mov     rax, [rbp+0BE0h+arg_0]
 * 0000000140A08854: mov     [rbp+0BE0h+arg_8], r13
 * 0000000140A0885B: mov     [rsp+0CE0h+var_C70], rbx
 * 0000000140A08860: mov     [rbp+0BE0h+var_BD0], rdi
 * 0000000140A08864: mov     [rbp+0BE0h+var_C40], r14
 * 0000000140A08868: mov     [rbp+0BE0h+var_BB8], rax
 * 0000000140A0886C: mov     rax, cr8
 * 0000000140A08870: mov     r8d, 2
 * 0000000140A08876: cmp     al, r8b
 * 0000000140A08879: jnb     short loc_140A08883
 * 0000000140A0887B: mov     rax, cr8
 * 0000000140A0887F: mov     cr8, r8
 * 0000000140A08883: mov     rdx, gs:20h
 * 0000000140A0888C: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A08890: mov     rcx, [rax+638h]
 * 0000000140A08897: mov     rsi, [rdx+rcx]
 * 0000000140A0889B: mov     rcx, gs:20h
 * 0000000140A088A4: mov     r9, [rbp+0BE0h+var_BB8]
 * 0000000140A088A8: mov     rax, [r9+648h]
 * 0000000140A088AF: mov     r15, [rcx+rax]
 * 0000000140A088B3: mov     rax, [r9+640h]
 * 0000000140A088BA: mov     [rbp+0BE0h+arg_0], r15
 * 0000000140A088C1: cmp     [rdx+rax], r11b
 * 0000000140A088C5: jz      short loc_140A088E0
 * 0000000140A088C7: lea     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A088CB: cmp     rax, rsi
 * 0000000140A088CE: ja      short loc_140A088E0
 * 0000000140A088D0: lea     rax, [rsi-6000h]
 * 0000000140A088D7: lea     rcx, [rbp+0BE0h+var_BB8]
 * 0000000140A088DB: cmp     rcx, rax
 * 0000000140A088DE: jnb     short loc_140A088EF
 * 0000000140A088E0: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A088E4: mov     rcx, [rax+678h]
 * 0000000140A088EB: mov     rsi, [r15+rcx]
 * 0000000140A088EF: mov     r9, [rbp+0BE0h+var_BB8]
 * 0000000140A088F3: test    dword ptr [r9+990h], 8000000h
 * 0000000140A088FE: jnz     loc_140A08D44
 * 0000000140A08904: mov     r12, cr0
 * 0000000140A08908: mov     rax, r12
 * 0000000140A0890B: btr     rax, 10h
 * 0000000140A08910: mov     cr0, rax
 * 0000000140A08913: mov     eax, [r9+0AA0h]
 * 0000000140A0891A: lea     r14, [r9+0AA8h]
 * 0000000140A08921: shl     rax, 4
 * 0000000140A08925: lea     r10, [r9+0AA8h]
 * 0000000140A0892C: add     r14, rax
 * 0000000140A0892F: mov     r8d, r11d
 * 0000000140A08932: mov     rdx, r14
 * 0000000140A08935: cmp     [r9+0AA4h], r11d
 * 0000000140A0893C: jbe     short loc_140A0898D
 * 0000000140A0893E: mov     r11d, 1
 * 0000000140A08944: lea     r13d, [r11+0Fh]
 * 0000000140A08948: mov     rcx, [rdx]
 * 0000000140A0894B: mov     rax, [rdx+8]
 * 0000000140A0894F: mov     [rcx], rax
 * 0000000140A08952: mov     rcx, cr4
 * 0000000140A08955: test    rcx, 20080h
 * 0000000140A0895C: jz      short loc_140A0896E
 * 0000000140A0895E: mov     rax, rcx
 * 0000000140A08961: btc     rax, 7
 * 0000000140A08966: mov     cr4, rax
 * 0000000140A08969: mov     cr4, rcx
 * 0000000140A0896C: jmp     short loc_140A08974
 * 0000000140A0896E: mov     rax, cr3
 * 0000000140A08971: mov     cr3, rax
 * 0000000140A08974: add     rdx, r13
 * 0000000140A08977: add     r8d, r11d
 * 0000000140A0897A: cmp     r8d, [r9+0AA4h]
 * 0000000140A08981: jb      short loc_140A08948
 * 0000000140A08983: mov     r13, [rbp+0BE0h+arg_8]
 * 0000000140A0898A: xor     r11d, r11d
 * 0000000140A0898D: cmp     r10, r14
 * 0000000140A08990: jnb     loc_140A08D2C
 * 0000000140A08996: xor     r13d, r13d
 * 0000000140A08999: mov     r15d, 0FFFFFFFFh
 * 0000000140A0899F: mov     edi, [r10+8]
 * 0000000140A089A3: mov     rcx, rdx
 * 0000000140A089A6: mov     r8, [r10]
 * 0000000140A089A9: mov     r11d, edi
 * 0000000140A089AC: cmp     edi, 8
 * 0000000140A089AF: jb      short loc_140A089D7
 * 0000000140A089B1: mov     ebx, edi
 * 0000000140A089B3: mov     r13d, 1
 * 0000000140A089B9: shr     rbx, 3
 * 0000000140A089BD: mov     rax, [rcx]
 * 0000000140A089C0: add     r11d, 0FFFFFFF8h
 * 0000000140A089C4: mov     [r8], rax
 * 0000000140A089C7: add     rcx, 8
 * 0000000140A089CB: add     r8, 8
 * 0000000140A089CF: sub     rbx, r13
 * 0000000140A089D2: jnz     short loc_140A089BD
 * 0000000140A089D4: xor     r13d, r13d
 * 0000000140A089D7: test    r11d, r11d
 * 0000000140A089DA: jz      short loc_140A089F6
 * 0000000140A089DC: sub     r8, rcx
 * 0000000140A089DF: mov     r13d, 1
 * 0000000140A089E5: mov     al, [rcx]
 * 0000000140A089E7: mov     [r8+rcx], al
 * 0000000140A089EB: add     rcx, r13
 * 0000000140A089EE: add     r11d, r15d
 * 0000000140A089F1: jnz     short loc_140A089E5
 * 0000000140A089F3: xor     r13d, r13d
 * 0000000140A089F6: add     rdx, rdi
 * 0000000140A089F9: add     r10, 10h
 * 0000000140A089FD: cmp     r10, r14
 * 0000000140A08A00: jnb     loc_140A08D12
 * 0000000140A08A06: jmp     short loc_140A0899F
 * 0000000140A08A08: test    dword ptr [r13+990h], 40000000h
 * 0000000140A08A13: jnz     short loc_140A08A5F
 * 0000000140A08A15: cmp     [rbp+0BE0h+var_C38], r11d
 * 0000000140A08A19: jz      short loc_140A08A5F
 * 0000000140A08A1B: mov     ecx, [r13+924h]
 * 0000000140A08A22: sub     ecx, 1
 * 0000000140A08A25: jz      short loc_140A08A39
 * 0000000140A08A27: mov     eax, 2
 * 0000000140A08A2C: cmp     ecx, eax
 * 0000000140A08A2E: jnz     short loc_140A08A5F
 * 0000000140A08A30: mov     rax, [r13+368h]
 * 0000000140A08A37: jmp     short loc_140A08A58
 * 0000000140A08A39: add     qword ptr [r13+7C8h], 0FFFFFFFFFFFFFFF8h
 * 0000000140A08A41: mov     rax, [r13+7C8h]
 * 0000000140A08A48: mov     ecx, [rax]
 * 0000000140A08A4A: mov     [r13+7D0h], ecx
 * 0000000140A08A51: mov     rax, [r13+228h]
 * 0000000140A08A58: mov     [r13+100h], rax
 * 0000000140A08A5F: mov     rax, r13
 * 0000000140A08A62: add     rsp, 0CA8h
 * 0000000140A08A69: pop     r15
 * 0000000140A08A6B: pop     r14
 * 0000000140A08A6D: pop     r13
 * 0000000140A08A6F: pop     r12
 * 0000000140A08A71: pop     rdi
 * 0000000140A08A72: pop     rsi
 * 0000000140A08A73: pop     rbx
 * 0000000140A08A74: pop     rbp
 * 0000000140A08A75: retn
 * 0000000140A08A76: mov     [rbp+0BE0h+var_A24], 0D0002D61h
 * 0000000140A08A80: xor     r9d, r9d; BugCheckParameter3
 * 0000000140A08A83: mov     ecx, [rbp+0BE0h+var_A24]
 * 0000000140A08A89: mov     r8, r12; BugCheckParameter2
 * 0000000140A08A8C: xor     ecx, 2D72h
 * 0000000140A08A92: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A08A97: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A08A9A: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140A08A9E: call    KeBugCheckEx
 * 0000000140A08AA4: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A08AA9: mov     r9, r15; BugCheckParameter3
 * 0000000140A08AAC: mov     [rbp+0BE0h+var_9F0], 0D0002D61h
 * 0000000140A08AB6: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140A08ABB: mov     ecx, [rbp+0BE0h+var_9F0]
 * 0000000140A08AC1: xor     ecx, 2D72h
 * 0000000140A08AC7: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A08ACC: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A08ACF: call    KeBugCheckEx
 * 0000000140A08AD5: mov     [rbp+0BE0h+var_9EC], 0D0002D61h
 * 0000000140A08ADF: mov     ecx, [rbp+0BE0h+var_9EC]
 * 0000000140A08AE5: xor     ecx, 2D72h
 * 0000000140A08AEB: mov     r9d, edx; BugCheckParameter3
 * 0000000140A08AEE: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A08AF1: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140A08AF6: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A08AFB: call    KeBugCheckEx
 * 0000000140A08B01: mov     [rbp+0BE0h+var_9E8], 0D0002D61h
 * 0000000140A08B0B: mov     ecx, [rbp+0BE0h+var_9E8]
 * 0000000140A08B11: xor     ecx, 2D72h
 * 0000000140A08B17: mov     r9d, edx; BugCheckParameter3
 * 0000000140A08B1A: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A08B1D: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140A08B22: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A08B27: call    KeBugCheckEx
 * 0000000140A08B2D: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A08B32: mov     r9d, 2; BugCheckParameter3
 * 0000000140A08B38: mov     [rbp+0BE0h+var_A5C], 0D0002D61h
 * 0000000140A08B42: mov     ecx, [rbp+0BE0h+var_A5C]
 * 0000000140A08B48: xor     ecx, 2D72h
 * 0000000140A08B4E: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A08B53: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A08B56: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140A08B5A: call    KeBugCheckEx
 * 0000000140A08B60: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A08B65: mov     r9d, 3; BugCheckParameter3
 * 0000000140A08B6B: mov     [rbp+0BE0h+var_9E4], 0D0002D61h
 * 0000000140A08B75: mov     ecx, [rbp+0BE0h+var_9E4]
 * 0000000140A08B7B: xor     ecx, 2D72h
 * 0000000140A08B81: mov     [rsp+0CE0h+BugCheckParameter4], rdx; BugCheckParameter4
 * 0000000140A08B86: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A08B89: lea     edx, [r9+7]; BugCheckParameter1
 * 0000000140A08B8D: call    KeBugCheckEx
 * 0000000140A08B93: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A08B98: mov     r9d, 6; BugCheckParameter3
 * 0000000140A08B9E: mov     [rbp+0BE0h+var_9E0], 0D0002D61h
 * 0000000140A08BA8: mov     ecx, [rbp+0BE0h+var_9E0]
 * 0000000140A08BAE: xor     ecx, 2D72h
 * 0000000140A08BB4: mov     [rsp+0CE0h+BugCheckParameter4], rdx; BugCheckParameter4
 * 0000000140A08BB9: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A08BBC: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140A08BC0: call    KeBugCheckEx
 * 0000000140A08BC6: mov     [rbp+0BE0h+var_A78], 0D0002D61h
 * 0000000140A08BD0: xor     r9d, r9d; BugCheckParameter3
 * 0000000140A08BD3: mov     ecx, [rbp+0BE0h+var_A78]
 * 0000000140A08BD9: mov     r8, r14; BugCheckParameter2
 * 0000000140A08BDC: xor     ecx, 2D72h
 * 0000000140A08BE2: mov     [rsp+0CE0h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140A08BE7: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A08BEA: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140A08BEE: call    KeBugCheckEx
 * 0000000140A08BF4: xor     eax, eax
 * 0000000140A08BF6: mov     [rbp+0BE0h+var_A64], 0D0002D61h
 * 0000000140A08C00: mov     ecx, [rbp+0BE0h+var_A64]
 * 0000000140A08C06: mov     r8, r14; BugCheckParameter2
 * 0000000140A08C09: xor     ecx, 2D72h
 * 0000000140A08C0F: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A08C14: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A08C17: lea     r9d, [rax+3]; BugCheckParameter3
 * 0000000140A08C1B: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140A08C1E: call    KeBugCheckEx
 * 0000000140A08C24: mov     [rbp+0BE0h+var_A74], 0D0002D61h
 * 0000000140A08C2E: mov     r8, r14; BugCheckParameter2
 * 0000000140A08C31: mov     ecx, [rbp+0BE0h+var_A74]
 * 0000000140A08C37: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140A08C3C: xor     ecx, 2D72h
 * 0000000140A08C42: mov     [rsp+0CE0h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140A08C47: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A08C4A: mov     r9, r13; BugCheckParameter3
 * 0000000140A08C4D: call    KeBugCheckEx
 * 0000000140A08C53: xor     eax, eax
 * 0000000140A08C55: mov     [rbp+0BE0h+var_A70], 0D0002D61h
 * 0000000140A08C5F: mov     ecx, [rbp+0BE0h+var_A70]
 * 0000000140A08C65: mov     r8, r14; BugCheckParameter2
 * 0000000140A08C68: xor     ecx, 2D72h
 * 0000000140A08C6E: mov     r9d, edx; BugCheckParameter3
 * 0000000140A08C71: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A08C74: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140A08C77: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A08C7C: call    KeBugCheckEx
 * 0000000140A08C82: xor     eax, eax
 * 0000000140A08C84: mov     [rbp+0BE0h+var_A6C], 0D0002D61h
 * 0000000140A08C8E: mov     ecx, [rbp+0BE0h+var_A6C]
 * 0000000140A08C94: xor     ecx, 2D72h
 * 0000000140A08C9A: mov     r9d, edx; BugCheckParameter3
 * 0000000140A08C9D: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A08CA0: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140A08CA3: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A08CA8: call    KeBugCheckEx
 * 0000000140A08CAE: mov     [rsp+0CE0h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140A08CB3: mov     r8, r14; BugCheckParameter2
 * 0000000140A08CB6: mov     r9d, 2; BugCheckParameter3
 * 0000000140A08CBC: mov     [rbp+0BE0h+var_A68], 0D0002D61h
 * 0000000140A08CC6: mov     ecx, [rbp+0BE0h+var_A68]
 * 0000000140A08CCC: xor     ecx, 2D72h
 * 0000000140A08CD2: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A08CD5: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140A08CD9: call    KeBugCheckEx
 * 0000000140A08CDF: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A08CE4: mov     r9d, 6; BugCheckParameter3
 * 0000000140A08CEA: mov     [rbp+0BE0h+var_A60], 0D0002D61h
 * 0000000140A08CF4: mov     ecx, [rbp+0BE0h+var_A60]
 * 0000000140A08CFA: xor     ecx, 2D72h
 * 0000000140A08D00: mov     [rsp+0CE0h+BugCheckParameter4], rsi; BugCheckParameter4
 * 0000000140A08D05: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A08D08: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140A08D0C: call    KeBugCheckEx
 * 0000000140A08D12: mov     r15, [rbp+0BE0h+arg_0]
 * 0000000140A08D19: xor     r11d, r11d
 * 0000000140A08D1C: mov     r13, [rbp+0BE0h+arg_8]
 * 0000000140A08D23: mov     rbx, [rsp+0CE0h+var_C70]
 * 0000000140A08D28: mov     rdi, [rbp+0BE0h+var_BD0]
 * 0000000140A08D2C: mov     rax, [r9+218h]
 * 0000000140A08D33: mov     byte ptr [rax], 0C3h
 * 0000000140A08D36: mov     cr0, r12
 * 0000000140A08D3A: mov     r14, [rbp+0BE0h+var_C40]
 * 0000000140A08D3E: mov     r8d, 2
 * 0000000140A08D44: mov     r9, [rbp+0BE0h+var_BB8]
 * 0000000140A08D48: mov     ecx, [r9+928h]
 * 0000000140A08D4F: test    ecx, ecx
 * 0000000140A08D51: jz      loc_140A08E37
 * 0000000140A08D57: mov     rax, cr8
 * 0000000140A08D5B: cmp     al, r8b
 * 0000000140A08D5E: jnb     short loc_140A08D6F
 * 0000000140A08D60: mov     rax, cr8
 * 0000000140A08D64: mov     cr8, r8
 * 0000000140A08D68: mov     ecx, [r9+928h]
 * 0000000140A08D6F: test    ecx, ecx
 * 0000000140A08D71: jz      loc_140A08E37
 * 0000000140A08D77: sub     ecx, 1
 * 0000000140A08D7A: jz      loc_140A08E2A
 * 0000000140A08D80: sub     ecx, 1
 * 0000000140A08D83: jz      loc_140A08E21
 * 0000000140A08D89: sub     ecx, 1
 * 0000000140A08D8C: jz      loc_140A08E18
 * 0000000140A08D92: sub     ecx, 1
 * 0000000140A08D95: jz      short loc_140A08DDC
 * 0000000140A08D97: cmp     ecx, 1
 * 0000000140A08D9A: jz      short loc_140A08DB5
 * 0000000140A08D9C: mov     rax, [r9+5B8h]
 * 0000000140A08DA3: mov     ecx, 1
 * 0000000140A08DA8: lock or [rax+340h], rcx
 * 0000000140A08DB0: jmp     loc_140A08E37
 * 0000000140A08DB5: mov     rcx, gs:20h
 * 0000000140A08DBE: mov     rax, [r9+648h]
 * 0000000140A08DC5: mov     edx, [r9+990h]
 * 0000000140A08DCC: shr     edx, 0Ah
 * 0000000140A08DCF: and     edx, 1Fh
 * 0000000140A08DD2: mov     rcx, [rax+rcx]
 * 0000000140A08DD6: lock bts [rcx], edx
 * 0000000140A08DDA: jmp     short loc_140A08E37
 * 0000000140A08DDC: mov     rcx, gs:20h
 * 0000000140A08DE5: mov     rax, [r9+648h]
 * 0000000140A08DEC: mov     r8d, [r9+990h]
 * 0000000140A08DF3: shr     r8d, 0Ah
 * 0000000140A08DF7: and     r8d, 1Fh
 * 0000000140A08DFB: mov     rcx, [rax+rcx]
 * 0000000140A08DFF: add     rcx, [r9+6A8h]
 * 0000000140A08E06: mov     rax, [r9+688h]
 * 0000000140A08E0D: mov     rdx, [rcx+rax]
 * 0000000140A08E11: lock bts [rdx], r8d
 * 0000000140A08E16: jmp     short loc_140A08E37
 * 0000000140A08E18: mov     rax, [r9+560h]
 * 0000000140A08E1F: jmp     short loc_140A08E31
 * 0000000140A08E21: mov     rax, [r9+558h]
 * 0000000140A08E28: jmp     short loc_140A08E31
 * 0000000140A08E2A: mov     rax, [r9+548h]
 * 0000000140A08E31: lock bts qword ptr [rax], 0
 * 0000000140A08E37: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A08E3B: mov     rcx, [rax+690h]
 * 0000000140A08E42: mov     [r15+rcx], r11
 * 0000000140A08E46: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A08E4A: mov     r10, [rax+6A0h]
 * 0000000140A08E51: mov     [r15+r10], r11
 * 0000000140A08E55: mov     rcx, [rbp+0BE0h+var_BB8]
 * 0000000140A08E59: mov     rcx, [rcx+158h]; Target
 * 0000000140A08E60: call    KeGuardCheckICall
 * 0000000140A08E65: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A08E69: mov     r9, rbx
 * 0000000140A08E6C: mov     [rsp+0CE0h+var_CB0], rsi
 * 0000000140A08E71: mov     r8, rdi
 * 0000000140A08E74: mov     rdx, r14
 * 0000000140A08E77: mov     ecx, 109h
 * 0000000140A08E7C: mov     r10, [rax+158h]
 * 0000000140A08E83: mov     [rsp+0CE0h+var_CB8], r10
 * 0000000140A08E88: mov     [rsp+0CE0h+BugCheckParameter4], r13
 * 0000000140A08E8D: call    SdbpCheckDll
 */
