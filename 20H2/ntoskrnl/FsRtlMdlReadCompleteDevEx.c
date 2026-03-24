/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x1409FB010
 * Callers:
 *     KiDecodeMcaFault @ 0x1403DB3D0 (KiDecodeMcaFault.c)
 *     sub_1403E9900 @ 0x1403E9900 (sub_1403E9900.c)
 *     FsRtlUninitializeSmallMcb @ 0x140A140D0 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     sub_1403E9B1C @ 0x1403E9B1C (sub_1403E9B1C.c)
 *     sub_1403E9BFC @ 0x1403E9BFC (sub_1403E9BFC.c)
 *     sub_1403EAB68 @ 0x1403EAB68 (sub_1403EAB68.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     sub_140A0F0FC @ 0x140A0F0FC (sub_140A0F0FC.c)
 *     sub_140A11098 @ 0x140A11098 (sub_140A11098.c)
 *     sub_140A11B30 @ 0x140A11B30 (sub_140A11B30.c)
 *     $$b8 @ 0x140A123CC ($$b8.c)
 *     sub_140A125E8 @ 0x140A125E8 (sub_140A125E8.c)
 *     sub_140A12C50 @ 0x140A12C50 (sub_140A12C50.c)
 *     KiGetGdtIdt @ 0x140A13F60 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x140A13F70 (KiGetLdtr.c)
 *     KiGetSs @ 0x140A13F80 (KiGetSs.c)
 *     KiGetTr @ 0x140A13F90 (KiGetTr.c)
 *     KiErrata361Present @ 0x140A13FA0 (KiErrata361Present.c)
 *     KiErrataSkx55Present @ 0x140A13FC0 (KiErrataSkx55Present.c)
 *     KiErrata704Present @ 0x140A13FD0 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x140A14080 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140A14330 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140A14340 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x140A14550 (RtlInitMinimalBarrier.c)
 *     sub_140A1EFE4 @ 0x140A1EFE4 (sub_140A1EFE4.c)
 */

/*
 * Hex-Rays decompilation failed for FsRtlMdlReadCompleteDevEx @ 0x1409FB010
 * Reason: Hex-Rays returned no pseudocode for 0x1409FB010
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001409FB010: mov     [rsp-8+arg_0], rcx
 * 00000001409FB015: push    rbp
 * 00000001409FB016: push    rbx
 * 00000001409FB017: push    rsi
 * 00000001409FB018: push    rdi
 * 00000001409FB019: push    r12
 * 00000001409FB01B: push    r13
 * 00000001409FB01D: push    r14
 * 00000001409FB01F: push    r15
 * 00000001409FB021: lea     rbp, [rsp-0BA8h]
 * 00000001409FB029: sub     rsp, 0CA8h
 * 00000001409FB030: mov     eax, [rcx+990h]
 * 00000001409FB036: xor     r9d, r9d
 * 00000001409FB039: mov     r12, rcx
 * 00000001409FB03C: mov     [rbp+0BE0h+var_448], rcx
 * 00000001409FB043: mov     ecx, 110000h
 * 00000001409FB048: mov     edi, 0FFFFFFF8h
 * 00000001409FB04D: and     eax, ecx
 * 00000001409FB04F: mov     r11d, 0FFFFFFFFh
 * 00000001409FB055: lea     esi, [r9+1]
 * 00000001409FB059: mov     r10d, 12Fh
 * 00000001409FB05F: cmp     eax, ecx
 * 00000001409FB061: jz      loc_1409FB11E
 * 00000001409FB067: mov     rdx, [r12+8E0h]
 * 00000001409FB06F: lea     ecx, [r10+1]
 * 00000001409FB073: mov     rax, rdx
 * 00000001409FB076: lea     r8d, [r9+26h]
 * 00000001409FB07A: mov     [rax], r9
 * 00000001409FB07D: add     ecx, edi
 * 00000001409FB07F: add     rax, 8
 * 00000001409FB083: sub     r8, rsi
 * 00000001409FB086: jnz     short loc_1409FB07A
 * 00000001409FB088: test    ecx, ecx
 * 00000001409FB08A: jz      short loc_1409FB097
 * 00000001409FB08C: mov     [rax], r9b
 * 00000001409FB08F: add     rax, rsi
 * 00000001409FB092: add     ecx, r11d
 * 00000001409FB095: jnz     short loc_1409FB08C
 * 00000001409FB097: movups  xmm0, xmmword ptr [r12+848h]
 * 00000001409FB0A0: lea     rax, [r12+878h]
 * 00000001409FB0A8: mov     rcx, rax
 * 00000001409FB0AB: movdqu  xmmword ptr [rdx+10h], xmm0
 * 00000001409FB0B0: shr     rcx, 10h
 * 00000001409FB0B4: movups  xmm1, xmmword ptr [r12+858h]
 * 00000001409FB0BD: movdqu  xmmword ptr [rdx+20h], xmm1
 * 00000001409FB0C2: movups  xmm0, xmmword ptr [r12+868h]
 * 00000001409FB0CB: movdqu  xmmword ptr [rdx+120h], xmm0
 * 00000001409FB0D3: mov     [rbp+2F2h], rdx
 * 00000001409FB0DA: mov     word ptr [rbp+0BE0h+var_8F0], r10w
 * 00000001409FB0E2: mov     [rdx+10h], ax
 * 00000001409FB0E6: shr     rax, 20h
 * 00000001409FB0EA: mov     [rdx+16h], cx
 * 00000001409FB0EE: mov     [rdx+18h], eax
 * 00000001409FB0F1: cli
 * 00000001409FB0F2: xor     eax, eax
 * 00000001409FB0F4: cmp     [r12+990h], eax
 * 00000001409FB0FC: jge     short loc_1409FB104
 * 00000001409FB0FE: mov     dr7, rax
 * 00000001409FB101: sti
 * 00000001409FB102: jmp     short loc_1409FB120
 * 00000001409FB104: sidt    fword ptr [rbp+0BE0h+var_760]
 * 00000001409FB10B: lidt    fword ptr [rbp+0BE0h+var_8F0]
 * 00000001409FB112: mov     dr7, rax
 * 00000001409FB115: lidt    fword ptr [rbp+0BE0h+var_760]
 * 00000001409FB11C: jmp     short loc_1409FB101
 * 00000001409FB11E: xor     eax, eax
 * 00000001409FB120: test    dword ptr [r12+994h], 100h
 * 00000001409FB12C: mov     [rbp+0BE0h+var_BD0], rax
 * 00000001409FB130: jz      short loc_1409FB147
 * 00000001409FB132: lea     rcx, [rbp+0BE8h]
 * 00000001409FB139: mov     rax, [rcx]
 * 00000001409FB13C: mov     [rbp+0BE0h+var_BD0], rax
 * 00000001409FB140: xor     eax, eax
 * 00000001409FB142: mov     [rcx], rax
 * 00000001409FB145: jmp     short loc_1409FB149
 * 00000001409FB147: xor     eax, eax
 * 00000001409FB149: mov     r13d, 20h ; ' '
 * 00000001409FB14F: mov     [r12+828h], eax
 * 00000001409FB157: test    dword ptr [r12+990h], 40000000h
 * 00000001409FB163: mov     r14, 7010008004002001h
 * 00000001409FB16D: lea     r15d, [r13-1Ch]
 * 00000001409FB171: jz      short loc_1409FB183
 * 00000001409FB173: xor     eax, eax
 * 00000001409FB175: cmp     [r12+0A78h], rax
 * 00000001409FB17D: jnz     loc_1409FB419
 * 00000001409FB183: mov     r14, [r12+7B8h]
 * 00000001409FB18B: lea     rbx, [r12+798h]
 * 00000001409FB193: mov     [rbp+0BE0h+arg_8], r14
 * 00000001409FB19A: lea     rdx, [rbp+0BE0h+var_110]
 * 00000001409FB1A1: mov     rcx, rbx
 * 00000001409FB1A4: mov     r8d, r13d
 * 00000001409FB1A7: mov     r9, r15
 * 00000001409FB1AA: mov     rax, [rcx]
 * 00000001409FB1AD: add     r8d, edi
 * 00000001409FB1B0: mov     [rdx], rax
 * 00000001409FB1B3: add     rcx, 8
 * 00000001409FB1B7: add     rdx, 8
 * 00000001409FB1BB: sub     r9, rsi
 * 00000001409FB1BE: jnz     short loc_1409FB1AA
 * 00000001409FB1C0: xor     eax, eax
 * 00000001409FB1C2: test    r8d, r8d
 * 00000001409FB1C5: jz      short loc_1409FB1D8
 * 00000001409FB1C7: mov     al, [rcx]
 * 00000001409FB1C9: add     rcx, rsi
 * 00000001409FB1CC: mov     [rdx], al
 * 00000001409FB1CE: add     rdx, rsi
 * 00000001409FB1D1: add     r8d, r11d
 * 00000001409FB1D4: jnz     short loc_1409FB1C7
 * 00000001409FB1D6: xor     eax, eax
 * 00000001409FB1D8: mov     [r12+7B8h], rax
 * 00000001409FB1E0: mov     ecx, r13d
 * 00000001409FB1E3: mov     [r12+828h], eax
 * 00000001409FB1EB: mov     rdx, r15
 * 00000001409FB1EE: mov     rax, rbx
 * 00000001409FB1F1: xor     r8d, r8d
 * 00000001409FB1F4: mov     [rax], r8
 * 00000001409FB1F7: add     ecx, edi
 * 00000001409FB1F9: add     rax, 8
 * 00000001409FB1FD: sub     rdx, rsi
 * 00000001409FB200: jnz     short loc_1409FB1F4
 * 00000001409FB202: test    ecx, ecx
 * 00000001409FB204: jz      short loc_1409FB211
 * 00000001409FB206: mov     [rax], r8b
 * 00000001409FB209: add     rax, rsi
 * 00000001409FB20C: add     ecx, r11d
 * 00000001409FB20F: jnz     short loc_1409FB206
 * 00000001409FB211: mov     eax, [r12+7E4h]
 * 00000001409FB219: mov     r9, r12
 * 00000001409FB21C: add     [r12+828h], eax
 * 00000001409FB224: mov     rax, r12
 * 00000001409FB227: mov     r10d, [r12+7E4h]
 * 00000001409FB22F: mov     r11d, [r12+814h]
 * 00000001409FB237: mov     rsi, [r12+818h]
 * 00000001409FB23F: lea     rcx, [r12+r10]
 * 00000001409FB243: cmp     r12, rcx
 * 00000001409FB246: jnb     short loc_1409FB258
 * 00000001409FB248: mov     edx, 40h ; '@'
 * 00000001409FB24D: prefetchnta byte ptr [rax]
 * 00000001409FB250: add     rax, rdx
 * 00000001409FB253: cmp     rax, rcx
 * 00000001409FB256: jb      short loc_1409FB24D
 * 00000001409FB258: mov     edi, r10d
 * 00000001409FB25B: mov     r8, rsi
 * 00000001409FB25E: shr     edi, 7
 * 00000001409FB261: test    edi, edi
 * 00000001409FB263: jz      short loc_1409FB2E0
 * 00000001409FB265: mov     r14, 7010008004002001h
 * 00000001409FB26F: mov     edx, 8
 * 00000001409FB274: lea     r12d, [rdx-7]
 * 00000001409FB278: mov     rax, [r9]
 * 00000001409FB27B: mov     ecx, r11d
 * 00000001409FB27E: xor     rax, r8
 * 00000001409FB281: mov     r8, [r9+8]
 * 00000001409FB285: rol     rax, cl
 * 00000001409FB288: add     r9, 10h
 * 00000001409FB28C: xor     r8, rax
 * 00000001409FB28F: rol     r8, cl
 * 00000001409FB292: sub     rdx, r12
 * 00000001409FB295: jnz     short loc_1409FB278
 * 00000001409FB297: mov     r12, [rbp+0BE0h+arg_0]
 * 00000001409FB29E: mov     rcx, r9
 * 00000001409FB2A1: sub     rcx, r12
 * 00000001409FB2A4: xor     rcx, rsi
 * 00000001409FB2A7: mov     rax, rcx
 * 00000001409FB2AA: rol     rax, 11h
 * 00000001409FB2AE: xor     rcx, rax
 * 00000001409FB2B1: mov     rax, r14
 * 00000001409FB2B4: mul     rcx
 * 00000001409FB2B7: xor     eax, edx
 * 00000001409FB2B9: mov     [rbp+0BE0h+var_3D8], rdx
 * 00000001409FB2C0: xor     r11d, eax
 * 00000001409FB2C3: mov     eax, 1
 * 00000001409FB2C8: and     r11d, 3Fh
 * 00000001409FB2CC: cmovz   r11d, eax
 * 00000001409FB2D0: mov     eax, 0FFFFFFFFh
 * 00000001409FB2D5: add     edi, eax
 * 00000001409FB2D7: jnz     short loc_1409FB26F
 * 00000001409FB2D9: mov     r14, [rbp+0BE0h+arg_8]
 * 00000001409FB2E0: and     r10d, 7Fh
 * 00000001409FB2E4: mov     esi, 1
 * 00000001409FB2E9: cmp     r10d, 8
 * 00000001409FB2ED: jb      short loc_1409FB30C
 * 00000001409FB2EF: mov     edx, r10d
 * 00000001409FB2F2: shr     rdx, 3
 * 00000001409FB2F6: xor     r8, [r9]
 * 00000001409FB2F9: mov     ecx, r11d
 * 00000001409FB2FC: rol     r8, cl
 * 00000001409FB2FF: add     r9, 8
 * 00000001409FB303: add     r10d, 0FFFFFFF8h
 * 00000001409FB307: sub     rdx, rsi
 * 00000001409FB30A: jnz     short loc_1409FB2F6
 * 00000001409FB30C: test    r10d, r10d
 * 00000001409FB30F: jz      short loc_1409FB333
 * 00000001409FB311: mov     r12d, 0FFFFFFFFh
 * 00000001409FB317: movzx   eax, byte ptr [r9]
 * 00000001409FB31B: mov     ecx, r11d
 * 00000001409FB31E: xor     r8, rax
 * 00000001409FB321: add     r9, rsi
 * 00000001409FB324: rol     r8, cl
 * 00000001409FB327: add     r10d, r12d
 * 00000001409FB32A: jnz     short loc_1409FB317
 * 00000001409FB32C: mov     r12, [rbp+0BE0h+arg_0]
 * 00000001409FB333: mov     [r12+7B8h], r14
 * 00000001409FB33B: lea     rcx, [rbp+0BE0h+var_110]
 * 00000001409FB342: mov     edx, r13d
 * 00000001409FB345: mov     r9, r15
 * 00000001409FB348: mov     rax, [rcx]
 * 00000001409FB34B: add     edx, 0FFFFFFF8h
 * 00000001409FB34E: mov     [rbx], rax
 * 00000001409FB351: add     rcx, 8
 * 00000001409FB355: add     rbx, 8
 * 00000001409FB359: sub     r9, rsi
 * 00000001409FB35C: jnz     short loc_1409FB348
 * 00000001409FB35E: test    edx, edx
 * 00000001409FB360: jz      short loc_1409FB377
 * 00000001409FB362: mov     r11d, 0FFFFFFFFh
 * 00000001409FB368: mov     al, [rcx]
 * 00000001409FB36A: add     rcx, rsi
 * 00000001409FB36D: mov     [rbx], al
 * 00000001409FB36F: add     rbx, rsi
 * 00000001409FB372: add     edx, r11d
 * 00000001409FB375: jnz     short loc_1409FB368
 * 00000001409FB377: cmp     [r12+7B8h], r8
 * 00000001409FB37F: jz      loc_1409FB40F
 * 00000001409FB385: mov     rax, [r12+590h]
 * 00000001409FB38D: xor     edx, edx
 * 00000001409FB38F: mov     ecx, [r12+7E4h]
 * 00000001409FB397: mov     [rax], r12
 * 00000001409FB39A: mov     [rax+10h], ecx
 * 00000001409FB39D: mov     eax, [r12+8F8h]
 * 00000001409FB3A5: mov     rcx, [r12+7B8h]
 * 00000001409FB3AD: test    eax, eax
 * 00000001409FB3AF: jnz     short loc_1409FB40F
 * 00000001409FB3B1: mov     rax, [r12+590h]
 * 00000001409FB3B9: xor     rcx, r8
 * 00000001409FB3BC: mov     [rax+18h], rcx
 * 00000001409FB3C0: mov     eax, [r12+8F8h]
 * 00000001409FB3C8: test    eax, eax
 * 00000001409FB3CA: jnz     short loc_1409FB40F
 * 00000001409FB3CC: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FB3D6: mov     rcx, r12
 * 00000001409FB3D9: add     rax, r12
 * 00000001409FB3DC: mov     [r12+900h], rax
 * 00000001409FB3E4: xor     eax, eax
 * 00000001409FB3E6: mov     [r12+908h], rax
 * 00000001409FB3EE: mov     qword ptr [r12+910h], 101h
 * 00000001409FB3FA: mov     [r12+918h], r8
 * 00000001409FB402: mov     [r12+8F8h], esi
 * 00000001409FB40A: call    $$b8
 * 00000001409FB40F: mov     r14, 7010008004002001h
 * 00000001409FB419: or      [r12+990h], r15d
 * 00000001409FB421: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FB428: add     [r12+834h], esi
 * 00000001409FB430: mov     r8, 0ABCC77118461CEFDh
 * 00000001409FB43A: mov     eax, [r12+990h]
 * 00000001409FB442: test    al, 8
 * 00000001409FB444: jz      loc_1409FB874
 * 00000001409FB44A: bt      eax, 17h
 * 00000001409FB44E: jb      loc_1409FB874
 * 00000001409FB454: mov     eax, [r12+994h]
 * 00000001409FB45C: mov     r10, [r12+0A70h]
 * 00000001409FB464: mov     r13d, [r12+7E4h]
 * 00000001409FB46C: mov     r11, [r12+9F8h]
 * 00000001409FB474: mov     r15d, [r12+808h]
 * 00000001409FB47C: mov     [rbp+0BE0h+arg_8], r10
 * 00000001409FB483: and     eax, esi
 * 00000001409FB485: jz      short loc_1409FB48F
 * 00000001409FB487: mov     r11, [r12+5D8h]
 * 00000001409FB48F: mov     rbx, [rbp+0BE0h+arg_0]
 * 00000001409FB496: mov     r12, [r12+160h]
 * 00000001409FB49E: mov     [rbp+0BE0h+var_C40], r12
 * 00000001409FB4A2: mov     rax, [rbx+2C8h]
 * 00000001409FB4A9: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FB4AE: mov     rax, [rbx+340h]
 * 00000001409FB4B5: mov     [rbp+0BE0h+var_C30], rax
 * 00000001409FB4B9: rdtsc
 * 00000001409FB4BB: shl     rdx, 20h
 * 00000001409FB4BF: mov     r9, rdi
 * 00000001409FB4C2: or      rax, rdx
 * 00000001409FB4C5: mov     rcx, rax
 * 00000001409FB4C8: ror     rax, 3
 * 00000001409FB4CC: xor     rcx, rax
 * 00000001409FB4CF: mov     rax, r14
 * 00000001409FB4D2: mul     rcx
 * 00000001409FB4D5: mov     rcx, rdx
 * 00000001409FB4D8: mov     [rbp+0BE0h+var_3D0], rdx
 * 00000001409FB4DF: xor     rcx, rax
 * 00000001409FB4E2: mov     rax, r8
 * 00000001409FB4E5: mul     rcx
 * 00000001409FB4E8: shr     rdx, 1Ah
 * 00000001409FB4EC: imul    rax, rdx, 5F5E100h
 * 00000001409FB4F3: sub     rcx, rax
 * 00000001409FB4F6: sub     r9, rcx
 * 00000001409FB4F9: mov     [rbp+0BE0h+var_AB8], r9
 * 00000001409FB500: mov     r8d, [rbx+990h]
 * 00000001409FB507: bt      r8d, 1Ah
 * 00000001409FB50C: jnb     loc_1409FB5B3
 * 00000001409FB512: rdtsc
 * 00000001409FB514: shl     rdx, 20h
 * 00000001409FB518: or      rax, rdx
 * 00000001409FB51B: mov     rcx, rax
 * 00000001409FB51E: ror     rax, 3
 * 00000001409FB522: xor     rcx, rax
 * 00000001409FB525: mov     rax, r14
 * 00000001409FB528: mul     rcx
 * 00000001409FB52B: mov     rcx, rdx
 * 00000001409FB52E: mov     [rbp+0BE0h+var_3C8], rdx
 * 00000001409FB535: xor     rcx, rax
 * 00000001409FB538: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001409FB542: mul     rcx
 * 00000001409FB545: shr     rdx, 3
 * 00000001409FB549: lea     rax, [rdx+rdx*4]
 * 00000001409FB54D: add     rax, rax
 * 00000001409FB550: sub     rcx, rax
 * 00000001409FB553: mov     eax, 2
 * 00000001409FB558: cmp     rcx, rax
 * 00000001409FB55B: jnb     short loc_1409FB5B3
 * 00000001409FB55D: rdtsc
 * 00000001409FB55F: shl     rdx, 20h
 * 00000001409FB563: or      rax, rdx
 * 00000001409FB566: mov     rcx, rax
 * 00000001409FB569: ror     rax, 3
 * 00000001409FB56D: xor     rcx, rax
 * 00000001409FB570: mov     rax, r14
 * 00000001409FB573: mul     rcx
 * 00000001409FB576: mov     rcx, rdx
 * 00000001409FB579: mov     [rbp+0BE0h+var_3C0], rdx
 * 00000001409FB580: xor     rcx, rax
 * 00000001409FB583: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001409FB58D: mul     rcx
 * 00000001409FB590: shr     rdx, 3
 * 00000001409FB594: lea     rax, [rdx+rdx*4]
 * 00000001409FB598: add     rax, rax
 * 00000001409FB59B: sub     rcx, rax
 * 00000001409FB59E: add     rcx, rsi
 * 00000001409FB5A1: imul    rcx, r9
 * 00000001409FB5A5: mov     [rbp+0BE0h+var_AB8], rcx
 * 00000001409FB5AC: mov     r8d, [rbx+990h]
 * 00000001409FB5B3: xor     eax, eax
 * 00000001409FB5B5: mov     esi, r15d
 * 00000001409FB5B8: mov     ebx, eax
 * 00000001409FB5BA: mov     r14d, eax
 * 00000001409FB5BD: lea     ecx, [rax+2]
 * 00000001409FB5C0: test    cl, r8b
 * 00000001409FB5C3: cmovnz  esi, r13d
 * 00000001409FB5C7: test    r8b, r8b
 * 00000001409FB5CA: js      short loc_1409FB5D4
 * 00000001409FB5CC: mov     r13d, eax
 * 00000001409FB5CF: jmp     loc_1409FB6B3
 * 00000001409FB5D4: mov     r9d, 1
 * 00000001409FB5DA: mov     r13d, r9d
 * 00000001409FB5DD: rdtsc
 * 00000001409FB5DF: shl     rdx, 20h
 * 00000001409FB5E3: or      rax, rdx
 * 00000001409FB5E6: mov     rcx, rax
 * 00000001409FB5E9: ror     rax, 3
 * 00000001409FB5ED: xor     rcx, rax
 * 00000001409FB5F0: mov     rax, 7010008004002001h
 * 00000001409FB5FA: mul     rcx
 * 00000001409FB5FD: mov     ecx, 154h
 * 00000001409FB602: mov     rbx, rdx
 * 00000001409FB605: mov     [rbp+0BE0h+var_3B8], rdx
 * 00000001409FB60C: mov     rdx, [rbp+0BE0h+arg_0]
 * 00000001409FB613: xor     rbx, rax
 * 00000001409FB616: mov     r14, rbx
 * 00000001409FB619: mov     r8, rbx
 * 00000001409FB61C: xor     r14, rdx
 * 00000001409FB61F: lea     rax, [rdx+0A98h]
 * 00000001409FB626: xor     [rax], r8
 * 00000001409FB629: lea     rax, [rax-8]
 * 00000001409FB62D: ror     r8, cl
 * 00000001409FB630: sub     ecx, r9d
 * 00000001409FB633: jnz     short loc_1409FB626
 * 00000001409FB635: lea     r9, [r15-0AA0h]
 * 00000001409FB63C: mov     r12, r15
 * 00000001409FB63F: shr     r9, 3
 * 00000001409FB643: test    r9d, r9d
 * 00000001409FB646: jz      short loc_1409FB686
 * 00000001409FB648: movsxd  r10, r9d
 * 00000001409FB64B: mov     rdi, r13
 * 00000001409FB64E: add     r10, 153h
 * 00000001409FB655: lea     r10, [rdx+r10*8]
 * 00000001409FB659: mov     rdx, [r10]
 * 00000001409FB65C: lea     rax, [r14+r14]
 * 00000001409FB660: mov     ecx, r9d
 * 00000001409FB663: lea     r10, [r10-8]
 * 00000001409FB667: ror     rdx, cl
 * 00000001409FB66A: mov     r14, rdx
 * 00000001409FB66D: xor     r14, rax
 * 00000001409FB670: sub     r9d, edi
 * 00000001409FB673: jnz     short loc_1409FB659
 * 00000001409FB675: mov     r10, [rbp+0BE0h+arg_8]
 * 00000001409FB67C: mov     r12, r15
 * 00000001409FB67F: mov     rdx, [rbp+0BE0h+arg_0]
 * 00000001409FB686: mov     ecx, esi
 * 00000001409FB688: add     rdx, r12
 * 00000001409FB68B: sub     ecx, r15d
 * 00000001409FB68E: shr     ecx, 3
 * 00000001409FB691: test    ecx, ecx
 * 00000001409FB693: jz      short loc_1409FB6AF
 * 00000001409FB695: lea     rdx, [rdx+rcx*8]
 * 00000001409FB699: mov     r9, r13
 * 00000001409FB69C: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 00000001409FB6A0: xor     [rdx], r8
 * 00000001409FB6A3: lea     rdx, [rdx-8]
 * 00000001409FB6A7: ror     r8, cl
 * 00000001409FB6AA: sub     ecx, r9d
 * 00000001409FB6AD: jnz     short loc_1409FB6A0
 * 00000001409FB6AF: mov     r12, [rbp+0BE0h+var_C40]
 * 00000001409FB6B3: test    r10, r10
 * 00000001409FB6B6: jz      short loc_1409FB6DE
 * 00000001409FB6B8: mov     rax, [rbp+0BE0h+var_C30]
 * 00000001409FB6BC: lea     r8, [rbp+0BE0h+var_AB8]
 * 00000001409FB6C3: mov     r9, r12
 * 00000001409FB6C6: mov     [rsp+0CE0h+BugCheckParameter4], r10
 * 00000001409FB6CB: mov     r12, [rbp+0BE0h+arg_0]
 * 00000001409FB6D2: mov     edx, esi
 * 00000001409FB6D4: mov     rcx, r12
 * 00000001409FB6D7: call    KeGuardDispatchICall
 * 00000001409FB6DC: jmp     short loc_1409FB71E
 * 00000001409FB6DE: xor     edx, edx
 * 00000001409FB6E0: test    r11, r11
 * 00000001409FB6E3: jnz     short loc_1409FB6F8
 * 00000001409FB6E5: lea     r8, [rbp+0BE0h+var_AB8]
 * 00000001409FB6EC: xor     ecx, ecx
 * 00000001409FB6EE: mov     rax, r12
 * 00000001409FB6F1: call    KeGuardDispatchICall
 * 00000001409FB6F6: jmp     short loc_1409FB717
 * 00000001409FB6F8: lea     rax, [rbp+0BE0h+var_AB8]
 * 00000001409FB6FF: xor     r9d, r9d
 * 00000001409FB702: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 00000001409FB707: xor     r8d, r8d
 * 00000001409FB70A: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409FB70F: mov     rcx, r11
 * 00000001409FB712: call    KeGuardDispatchICall
 * 00000001409FB717: mov     r12, [rbp+0BE0h+arg_0]
 * 00000001409FB71E: xor     eax, eax
 * 00000001409FB720: test    r13d, r13d
 * 00000001409FB723: jz      loc_1409FB85A
 * 00000001409FB729: mov     r8, rbx
 * 00000001409FB72C: lea     rax, [r12+0A98h]
 * 00000001409FB734: xor     r8, r12
 * 00000001409FB737: mov     ecx, 154h
 * 00000001409FB73C: mov     r13d, 1
 * 00000001409FB742: xor     [rax], rbx
 * 00000001409FB745: lea     rax, [rax-8]
 * 00000001409FB749: ror     rbx, cl
 * 00000001409FB74C: sub     ecx, r13d
 * 00000001409FB74F: jnz     short loc_1409FB742
 * 00000001409FB751: lea     r9, [r15-0AA0h]
 * 00000001409FB758: mov     r11, r15
 * 00000001409FB75B: shr     r9, 3
 * 00000001409FB75F: test    r9d, r9d
 * 00000001409FB762: jz      short loc_1409FB791
 * 00000001409FB764: movsxd  r10, r9d
 * 00000001409FB767: add     r10, 153h
 * 00000001409FB76E: lea     r10, [r12+r10*8]
 * 00000001409FB772: mov     rdx, [r10]
 * 00000001409FB775: lea     rax, [r8+r8]
 * 00000001409FB779: mov     ecx, r9d
 * 00000001409FB77C: lea     r10, [r10-8]
 * 00000001409FB780: ror     rdx, cl
 * 00000001409FB783: mov     r8, rdx
 * 00000001409FB786: xor     r8, rax
 * 00000001409FB789: sub     r9d, r13d
 * 00000001409FB78C: jnz     short loc_1409FB772
 * 00000001409FB78E: mov     r11, r15
 * 00000001409FB791: sub     esi, r15d
 * 00000001409FB794: lea     rcx, [r11+r12]
 * 00000001409FB798: shr     esi, 3
 * 00000001409FB79B: test    esi, esi
 * 00000001409FB79D: jz      short loc_1409FB7B9
 * 00000001409FB79F: mov     eax, esi
 * 00000001409FB7A1: dec     rax
 * 00000001409FB7A4: lea     rdx, [rcx+rax*8]
 * 00000001409FB7A8: xor     [rdx], rbx
 * 00000001409FB7AB: mov     ecx, esi
 * 00000001409FB7AD: ror     rbx, cl
 * 00000001409FB7B0: lea     rdx, [rdx-8]
 * 00000001409FB7B4: sub     esi, r13d
 * 00000001409FB7B7: jnz     short loc_1409FB7A8
 * 00000001409FB7B9: cmp     r8, r14
 * 00000001409FB7BC: jz      loc_1409FB86A
 * 00000001409FB7C2: mov     rax, [r12+590h]
 * 00000001409FB7CA: xor     edx, edx
 * 00000001409FB7CC: mov     ecx, [r12+7E4h]
 * 00000001409FB7D4: mov     [rax], r12
 * 00000001409FB7D7: mov     [rax+10h], ecx
 * 00000001409FB7DA: mov     eax, [r12+8F8h]
 * 00000001409FB7E2: test    eax, eax
 * 00000001409FB7E4: jnz     loc_1409FB86A
 * 00000001409FB7EA: mov     rax, [r12+590h]
 * 00000001409FB7F2: mov     rcx, r8
 * 00000001409FB7F5: xor     rcx, r14
 * 00000001409FB7F8: mov     [rax+18h], rcx
 * 00000001409FB7FC: mov     eax, [r12+8F8h]
 * 00000001409FB804: test    eax, eax
 * 00000001409FB806: jnz     short loc_1409FB86A
 * 00000001409FB808: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FB812: mov     r14, r13
 * 00000001409FB815: add     rax, r12
 * 00000001409FB818: mov     rcx, r12
 * 00000001409FB81B: mov     [r12+900h], rax
 * 00000001409FB823: xor     eax, eax
 * 00000001409FB825: mov     [r12+908h], rax
 * 00000001409FB82D: mov     qword ptr [r12+910h], 10Eh
 * 00000001409FB839: mov     [r12+918h], r8
 * 00000001409FB841: mov     [r12+8F8h], r14d
 * 00000001409FB849: call    $$b8
 * 00000001409FB84E: mov     r15d, 4
 * 00000001409FB854: lea     r13d, [r15+1Ch]
 * 00000001409FB858: jmp     short loc_1409FB87A
 * 00000001409FB85A: mov     r15d, 4
 * 00000001409FB860: lea     r13d, [r15+1Ch]
 * 00000001409FB864: lea     r14d, [r15-3]
 * 00000001409FB868: jmp     short loc_1409FB87C
 * 00000001409FB86A: mov     r13d, 20h ; ' '
 * 00000001409FB870: lea     r15d, [r13-1Ch]
 * 00000001409FB874: mov     r14d, 1
 * 00000001409FB87A: xor     eax, eax
 * 00000001409FB87C: mov     esi, [r12+0C4h]
 * 00000001409FB884: lea     rcx, [r12+620h]
 * 00000001409FB88C: mov     [r12+0C4h], eax
 * 00000001409FB894: mov     r9, r12
 * 00000001409FB897: add     dword ptr [r12+828h], 620h
 * 00000001409FB8A3: mov     rax, r12
 * 00000001409FB8A6: mov     r10d, [r12+814h]
 * 00000001409FB8AE: mov     r11, [r12+818h]
 * 00000001409FB8B6: cmp     r12, rcx
 * 00000001409FB8B9: jnb     short loc_1409FB8CB
 * 00000001409FB8BB: mov     edx, 40h ; '@'
 * 00000001409FB8C0: prefetchnta byte ptr [rax]
 * 00000001409FB8C3: add     rax, rdx
 * 00000001409FB8C6: cmp     rax, rcx
 * 00000001409FB8C9: jb      short loc_1409FB8C0
 * 00000001409FB8CB: mov     r8, r11
 * 00000001409FB8CE: mov     ebx, 0Ch
 * 00000001409FB8D3: mov     rdi, 7010008004002001h
 * 00000001409FB8DD: mov     edx, 8
 * 00000001409FB8E2: mov     rax, [r9]
 * 00000001409FB8E5: mov     ecx, r10d
 * 00000001409FB8E8: xor     rax, r8
 * 00000001409FB8EB: mov     r8, [r9+8]
 * 00000001409FB8EF: rol     rax, cl
 * 00000001409FB8F2: add     r9, 10h
 * 00000001409FB8F6: xor     r8, rax
 * 00000001409FB8F9: rol     r8, cl
 * 00000001409FB8FC: sub     rdx, r14
 * 00000001409FB8FF: jnz     short loc_1409FB8E2
 * 00000001409FB901: mov     rcx, r9
 * 00000001409FB904: sub     rcx, r12
 * 00000001409FB907: xor     rcx, r11
 * 00000001409FB90A: mov     rax, rcx
 * 00000001409FB90D: rol     rax, 11h
 * 00000001409FB911: xor     rcx, rax
 * 00000001409FB914: mov     rax, rdi
 * 00000001409FB917: mul     rcx
 * 00000001409FB91A: xor     eax, edx
 * 00000001409FB91C: mov     [rbp+0BE0h+var_3B0], rdx
 * 00000001409FB923: xor     r10d, eax
 * 00000001409FB926: mov     eax, 0FFFFFFFFh
 * 00000001409FB92B: and     r10d, 3Fh
 * 00000001409FB92F: cmovz   r10d, r14d
 * 00000001409FB933: add     ebx, eax
 * 00000001409FB935: jnz     short loc_1409FB8DD
 * 00000001409FB937: mov     edx, r13d
 * 00000001409FB93A: mov     r11, r15
 * 00000001409FB93D: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FB944: xor     r8, [r9]
 * 00000001409FB947: mov     ecx, r10d
 * 00000001409FB94A: rol     r8, cl
 * 00000001409FB94D: add     r9, 8
 * 00000001409FB951: add     edx, 0FFFFFFF8h
 * 00000001409FB954: sub     r11, r14
 * 00000001409FB957: jnz     short loc_1409FB944
 * 00000001409FB959: mov     r13d, 0FFFFFFFFh
 * 00000001409FB95F: test    edx, edx
 * 00000001409FB961: jz      short loc_1409FB978
 * 00000001409FB963: movzx   eax, byte ptr [r9]
 * 00000001409FB967: mov     ecx, r10d
 * 00000001409FB96A: xor     r8, rax
 * 00000001409FB96D: add     r9, r14
 * 00000001409FB970: rol     r8, cl
 * 00000001409FB973: add     edx, r13d
 * 00000001409FB976: jnz     short loc_1409FB963
 * 00000001409FB978: mov     [r12+0C4h], esi
 * 00000001409FB980: cmp     [r12+0A20h], r8
 * 00000001409FB988: jz      loc_1409FBA1B
 * 00000001409FB98E: mov     rax, [r12+590h]
 * 00000001409FB996: mov     ecx, [r12+7E4h]
 * 00000001409FB99E: mov     [rax], r12
 * 00000001409FB9A1: mov     [rax+10h], ecx
 * 00000001409FB9A4: mov     eax, [r12+8F8h]
 * 00000001409FB9AC: mov     rdx, [r12+0A20h]
 * 00000001409FB9B4: test    eax, eax
 * 00000001409FB9B6: jnz     short loc_1409FBA1B
 * 00000001409FB9B8: mov     rax, [r12+590h]
 * 00000001409FB9C0: mov     rcx, r8
 * 00000001409FB9C3: xor     rcx, rdx
 * 00000001409FB9C6: mov     [rax+18h], rcx
 * 00000001409FB9CA: mov     eax, [r12+8F8h]
 * 00000001409FB9D2: test    eax, eax
 * 00000001409FB9D4: jnz     short loc_1409FBA1B
 * 00000001409FB9D6: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FB9E0: xor     edx, edx
 * 00000001409FB9E2: add     rax, r12
 * 00000001409FB9E5: mov     rcx, r12
 * 00000001409FB9E8: mov     [r12+900h], rax
 * 00000001409FB9F0: xor     eax, eax
 * 00000001409FB9F2: mov     [r12+908h], rax
 * 00000001409FB9FA: mov     qword ptr [r12+910h], 109h
 * 00000001409FBA06: mov     [r12+918h], r8
 * 00000001409FBA0E: mov     [r12+8F8h], r14d
 * 00000001409FBA16: call    $$b8
 * 00000001409FBA1B: xor     edx, edx
 * 00000001409FBA1D: mov     rcx, r12
 * 00000001409FBA20: call    $$b8
 * 00000001409FBA25: mov     ecx, [r12+970h]
 * 00000001409FBA2D: xor     eax, eax
 * 00000001409FBA2F: mov     [rsp+0CE0h+var_C80], r12
 * 00000001409FBA34: mov     rsi, r12
 * 00000001409FBA37: mov     [rbp+0BE0h+var_BC8], eax
 * 00000001409FBA3A: mov     r10, 2E8BA2E8BA2E8BA3h
 * 00000001409FBA44: mov     [rbp+0BE0h+var_C38], eax
 * 00000001409FBA47: lea     r9d, [rax+5]
 * 00000001409FBA4B: lea     r8d, [rax+6]
 * 00000001409FBA4F: cmp     ecx, r13d
 * 00000001409FBA52: jz      loc_1409FBB51
 * 00000001409FBA58: mov     rax, [r12+278h]
 * 00000001409FBA60: call    KeGuardDispatchICall
 * 00000001409FBA65: mov     rbx, rax
 * 00000001409FBA68: test    rax, rax
 * 00000001409FBA6B: jnz     short loc_1409FBA88
 * 00000001409FBA6D: mov     rax, [r12+280h]
 * 00000001409FBA75: xor     ecx, ecx
 * 00000001409FBA77: call    KeGuardDispatchICall
 * 00000001409FBA7C: mov     rbx, rax
 * 00000001409FBA7F: test    rax, rax
 * 00000001409FBA82: jz      loc_1409FBB3D
 * 00000001409FBA88: mov     rax, [r12+290h]
 * 00000001409FBA90: lea     rdx, [rbp+0BE0h+var_6C0]
 * 00000001409FBA97: mov     rcx, rbx
 * 00000001409FBA9A: call    KeGuardDispatchICall
 * 00000001409FBA9F: mov     r14d, eax
 * 00000001409FBAA2: test    eax, eax
 * 00000001409FBAA4: jns     short loc_1409FBABA
 * 00000001409FBAA6: mov     rax, [r12+288h]
 * 00000001409FBAAE: mov     rcx, rbx
 * 00000001409FBAB1: call    KeGuardDispatchICall
 * 00000001409FBAB6: xor     eax, eax
 * 00000001409FBAB8: jmp     short loc_1409FBB29
 * 00000001409FBABA: mov     [r12+980h], rbx
 * 00000001409FBAC2: mov     rax, [r12+2B8h]
 * 00000001409FBACA: call    KeGuardDispatchICall
 * 00000001409FBACF: mov     rbx, rax
 * 00000001409FBAD2: mov     rax, [r12+2D8h]
 * 00000001409FBADA: mov     rcx, rbx
 * 00000001409FBADD: call    KeGuardDispatchICall
 * 00000001409FBAE2: mov     rdx, rax
 * 00000001409FBAE5: test    rax, rax
 * 00000001409FBAE8: jnz     short loc_1409FBAEF
 * 00000001409FBAEA: mov     ecx, r15d
 * 00000001409FBAED: jmp     short loc_1409FBB03
 * 00000001409FBAEF: mov     rax, [r12+2E8h]
 * 00000001409FBAF7: mov     rcx, rbx
 * 00000001409FBAFA: call    KeGuardDispatchICall
 * 00000001409FBAFF: xor     eax, eax
 * 00000001409FBB01: mov     ecx, eax
 * 00000001409FBB03: mov     eax, [r12+994h]
 * 00000001409FBB0B: and     eax, 0FFFFFFFBh
 * 00000001409FBB0E: or      eax, ecx
 * 00000001409FBB10: mov     [r12+994h], eax
 * 00000001409FBB18: add     dword ptr [r12+828h], 10000h
 * 00000001409FBB24: xor     eax, eax
 * 00000001409FBB26: mov     r14d, eax
 * 00000001409FBB29: test    r14d, r14d
 * 00000001409FBB2C: js      short loc_1409FBB3D
 * 00000001409FBB2E: mov     r13d, 1
 * 00000001409FBB34: mov     [rbp+0BE0h+var_C38], r13d
 * 00000001409FBB38: jmp     loc_1409FBEB6
 * 00000001409FBB3D: mov     r9d, 5
 * 00000001409FBB43: mov     r10, 2E8BA2E8BA2E8BA3h
 * 00000001409FBB4D: lea     r8d, [r9+1]
 * 00000001409FBB51: mov     eax, [r12+994h]
 * 00000001409FBB59: test    al, 8
 * 00000001409FBB5B: jz      loc_1409FBEAB
 * 00000001409FBB61: bt      eax, 0Ch
 * 00000001409FBB65: jb      loc_1409FBEAB
 * 00000001409FBB6B: rdtsc
 * 00000001409FBB6D: shl     rdx, 20h
 * 00000001409FBB71: mov     rbx, 7010008004002001h
 * 00000001409FBB7B: or      rax, rdx
 * 00000001409FBB7E: mov     rcx, rax
 * 00000001409FBB81: ror     rax, 3
 * 00000001409FBB85: xor     rcx, rax
 * 00000001409FBB88: mov     rax, rbx
 * 00000001409FBB8B: mul     rcx
 * 00000001409FBB8E: mov     [rbp+0BE0h+var_3A8], rdx
 * 00000001409FBB95: xor     dl, al
 * 00000001409FBB97: test    dl, 3
 * 00000001409FBB9A: jnz     loc_1409FBEAB
 * 00000001409FBBA0: rdtsc
 * 00000001409FBBA2: shl     rdx, 20h
 * 00000001409FBBA6: or      rax, rdx
 * 00000001409FBBA9: mov     rcx, rax
 * 00000001409FBBAC: ror     rax, 3
 * 00000001409FBBB0: xor     rcx, rax
 * 00000001409FBBB3: mov     rax, rbx
 * 00000001409FBBB6: mul     rcx
 * 00000001409FBBB9: mov     rcx, rdx
 * 00000001409FBBBC: mov     [rbp+0BE0h+var_3A0], rdx
 * 00000001409FBBC3: xor     rcx, rax
 * 00000001409FBBC6: mov     rax, r10
 * 00000001409FBBC9: mul     rcx
 * 00000001409FBBCC: shr     rdx, 1
 * 00000001409FBBCF: imul    rax, rdx, 0Bh
 * 00000001409FBBD3: sub     rcx, rax
 * 00000001409FBBD6: cmp     ecx, r9d
 * 00000001409FBBD9: ja      loc_1409FBC97
 * 00000001409FBBDF: jz      loc_1409FBC7D
 * 00000001409FBBE5: test    ecx, ecx
 * 00000001409FBBE7: jz      short loc_1409FBC63
 * 00000001409FBBE9: sub     ecx, 1
 * 00000001409FBBEC: jz      short loc_1409FBC4A
 * 00000001409FBBEE: sub     ecx, 1
 * 00000001409FBBF1: jz      short loc_1409FBC30
 * 00000001409FBBF3: cmp     ecx, 1
 * 00000001409FBBF6: jz      short loc_1409FBC12
 * 00000001409FBBF8: mov     [rbp+0BE0h+var_A50], 67076494h
 * 00000001409FBC02: mov     r9d, [rbp+0BE0h+var_A50]
 * 00000001409FBC09: rol     r9d, 4
 * 00000001409FBC0D: jmp     loc_1409FBDBC
 * 00000001409FBC12: mov     [rbp+0BE0h+var_A4C], 0A8223938h
 * 00000001409FBC1C: mov     r9d, [rbp+0BE0h+var_A4C]
 * 00000001409FBC23: xor     r9d, 3
 * 00000001409FBC27: ror     r9d, 0Fh
 * 00000001409FBC2B: jmp     loc_1409FBDBC
 * 00000001409FBC30: mov     [rbp+0BE0h+var_A48], 85B5910Dh
 * 00000001409FBC3A: mov     r9d, [rbp+0BE0h+var_A48]
 * 00000001409FBC41: ror     r9d, 2
 * 00000001409FBC45: jmp     loc_1409FBDBC
 * 00000001409FBC4A: mov     [rbp+0BE0h+var_A44], 0B2AD31A1h
 * 00000001409FBC54: mov     r9d, [rbp+0BE0h+var_A44]
 * 00000001409FBC5B: rol     r9d, 1
 * 00000001409FBC5E: jmp     loc_1409FBDBC
 * 00000001409FBC63: mov     [rbp+0BE0h+var_A40], 0D098D0D8h
 * 00000001409FBC6D: mov     r9d, [rbp+0BE0h+var_A40]
 * 00000001409FBC74: ror     r9d, 6
 * 00000001409FBC78: jmp     loc_1409FBDBC
 * 00000001409FBC7D: mov     [rbp+0BE0h+var_A3C], 288C49EDh
 * 00000001409FBC87: mov     r9d, [rbp+0BE0h+var_A3C]
 * 00000001409FBC8E: ror     r9d, 5
 * 00000001409FBC92: jmp     loc_1409FBDBC
 * 00000001409FBC97: sub     ecx, r8d
 * 00000001409FBC9A: jz      loc_1409FBDA4
 * 00000001409FBCA0: sub     ecx, 1
 * 00000001409FBCA3: jz      loc_1409FBD8D
 * 00000001409FBCA9: sub     ecx, 1
 * 00000001409FBCAC: jz      loc_1409FBD76
 * 00000001409FBCB2: cmp     ecx, 1
 * 00000001409FBCB5: jz      loc_1409FBD5B
 * 00000001409FBCBB: rdtsc
 * 00000001409FBCBD: shl     rdx, 20h
 * 00000001409FBCC1: or      rax, rdx
 * 00000001409FBCC4: mov     rcx, rax
 * 00000001409FBCC7: ror     rax, 3
 * 00000001409FBCCB: xor     rcx, rax
 * 00000001409FBCCE: mov     rax, rbx
 * 00000001409FBCD1: mul     rcx
 * 00000001409FBCD4: mov     r9, rax
 * 00000001409FBCD7: mov     [rbp+0BE0h+var_398], rdx
 * 00000001409FBCDE: xor     r9d, edx
 * 00000001409FBCE1: mov     eax, 4EC4EC4Fh
 * 00000001409FBCE6: mul     r9d
 * 00000001409FBCE9: mov     ecx, r9d
 * 00000001409FBCEC: shr     r9d, 5
 * 00000001409FBCF0: shr     edx, 3
 * 00000001409FBCF3: mov     r8d, r9d
 * 00000001409FBCF6: imul    eax, edx, 1Ah
 * 00000001409FBCF9: sub     ecx, eax
 * 00000001409FBCFB: mov     eax, 4EC4EC4Fh
 * 00000001409FBD00: mul     r9d
 * 00000001409FBD03: add     ecx, 61h ; 'a'
 * 00000001409FBD06: shr     r9d, 5
 * 00000001409FBD0A: shl     ecx, 8
 * 00000001409FBD0D: shr     edx, 3
 * 00000001409FBD10: imul    eax, edx, 1Ah
 * 00000001409FBD13: sub     r8d, eax
 * 00000001409FBD16: mov     eax, 4EC4EC4Fh
 * 00000001409FBD1B: mul     r9d
 * 00000001409FBD1E: add     r8d, 41h ; 'A'
 * 00000001409FBD22: or      r8d, ecx
 * 00000001409FBD25: shr     edx, 3
 * 00000001409FBD28: imul    eax, edx, 1Ah
 * 00000001409FBD2B: mov     ecx, r9d
 * 00000001409FBD2E: shr     r9d, 5
 * 00000001409FBD32: shl     r8d, 8
 * 00000001409FBD36: sub     ecx, eax
 * 00000001409FBD38: mov     eax, 4EC4EC4Fh
 * 00000001409FBD3D: mul     r9d
 * 00000001409FBD40: add     ecx, 61h ; 'a'
 * 00000001409FBD43: shr     edx, 3
 * 00000001409FBD46: or      ecx, r8d
 * 00000001409FBD49: imul    eax, edx, 1Ah
 * 00000001409FBD4C: shl     ecx, 8
 * 00000001409FBD4F: sub     r9d, eax
 * 00000001409FBD52: add     r9d, 41h ; 'A'
 * 00000001409FBD56: or      r9d, ecx
 * 00000001409FBD59: jmp     short loc_1409FBDBC
 * 00000001409FBD5B: mov     [rbp+0BE0h+var_A38], 0B0869E85h
 * 00000001409FBD65: mov     r9d, [rbp+0BE0h+var_A38]
 * 00000001409FBD6C: xor     r9d, 9
 * 00000001409FBD70: ror     r9d, 21h
 * 00000001409FBD74: jmp     short loc_1409FBDBC
 * 00000001409FBD76: mov     [rbp+0BE0h+var_A34], 64664142h
 * 00000001409FBD80: mov     r9d, [rbp+0BE0h+var_A34]
 * 00000001409FBD87: ror     r9d, 8
 * 00000001409FBD8B: jmp     short loc_1409FBDBC
 * 00000001409FBD8D: mov     [rbp+0BE0h+var_A30], 82C6A6D8h
 * 00000001409FBD97: mov     r9d, [rbp+0BE0h+var_A30]
 * 00000001409FBD9E: rol     r9d, 7
 * 00000001409FBDA2: jmp     short loc_1409FBDBC
 * 00000001409FBDA4: mov     [rbp+0BE0h+var_A2C], 4E574672h
 * 00000001409FBDAE: mov     r9d, [rbp+0BE0h+var_A2C]
 * 00000001409FBDB5: xor     r9d, r8d
 * 00000001409FBDB8: ror     r9d, 18h
 * 00000001409FBDBC: mov     rax, [r12+0F8h]
 * 00000001409FBDC4: mov     r8d, r9d
 * 00000001409FBDC7: mov     rdx, [r12+768h]
 * 00000001409FBDCF: mov     ecx, 200h
 * 00000001409FBDD4: call    KeGuardDispatchICall
 * 00000001409FBDD9: mov     r15, rax
 * 00000001409FBDDC: xor     eax, eax
 * 00000001409FBDDE: test    r15, r15
 * 00000001409FBDE1: jz      loc_1409FBEAD
 * 00000001409FBDE7: mov     rcx, [r12+6E8h]
 * 00000001409FBDEF: mov     rax, [r12+518h]
 * 00000001409FBDF7: mov     r14d, [rcx+rax]
 * 00000001409FBDFB: test    r14d, r14d
 * 00000001409FBDFE: jz      short loc_1409FBE2B
 * 00000001409FBE00: rdtsc
 * 00000001409FBE02: shl     rdx, 20h
 * 00000001409FBE06: or      rax, rdx
 * 00000001409FBE09: mov     rcx, rax
 * 00000001409FBE0C: ror     rax, 3
 * 00000001409FBE10: xor     rcx, rax
 * 00000001409FBE13: mov     rax, rbx
 * 00000001409FBE16: mul     rcx
 * 00000001409FBE19: mov     [rbp+0BE0h+var_390], rdx
 * 00000001409FBE20: xor     rax, rdx
 * 00000001409FBE23: xor     edx, edx
 * 00000001409FBE25: div     r14
 * 00000001409FBE28: mov     r14, rdx
 * 00000001409FBE2B: mov     rax, [r12+3B0h]
 * 00000001409FBE33: xor     ecx, ecx
 * 00000001409FBE35: call    KeGuardDispatchICall
 * 00000001409FBE3A: mov     rbx, rax
 * 00000001409FBE3D: test    rax, rax
 * 00000001409FBE40: jz      short loc_1409FBE9B
 * 00000001409FBE42: test    r14d, r14d
 * 00000001409FBE45: jz      short loc_1409FBE62
 * 00000001409FBE47: mov     rax, [r12+3B0h]
 * 00000001409FBE4F: mov     rcx, rbx
 * 00000001409FBE52: add     r14d, r13d
 * 00000001409FBE55: call    KeGuardDispatchICall
 * 00000001409FBE5A: mov     rbx, rax
 * 00000001409FBE5D: test    rax, rax
 * 00000001409FBE60: jnz     short loc_1409FBE42
 * 00000001409FBE62: mov     rsi, r12
 * 00000001409FBE65: test    rbx, rbx
 * 00000001409FBE68: jz      short loc_1409FBE9B
 * 00000001409FBE6A: mov     rax, [r12+3A0h]
 * 00000001409FBE72: mov     rcx, rbx
 * 00000001409FBE75: call    KeGuardDispatchICall
 * 00000001409FBE7A: test    eax, eax
 * 00000001409FBE7C: jns     short loc_1409FBE92
 * 00000001409FBE7E: mov     rax, [r12+3B8h]
 * 00000001409FBE86: mov     rcx, rbx
 * 00000001409FBE89: call    KeGuardDispatchICall
 * 00000001409FBE8E: xor     eax, eax
 * 00000001409FBE90: mov     ebx, eax
 * 00000001409FBE92: test    rbx, rbx
 * 00000001409FBE95: jnz     loc_1409FBF6C
 * 00000001409FBE9B: mov     rax, [r12+100h]
 * 00000001409FBEA3: mov     rcx, r15
 * 00000001409FBEA6: call    KeGuardDispatchICall
 * 00000001409FBEAB: xor     eax, eax
 * 00000001409FBEAD: mov     r13d, 1
 * 00000001409FBEB3: mov     [rbp+0BE0h+var_BC8], eax
 * 00000001409FBEB6: mov     [rbp+0BE0h+var_B10], rax
 * 00000001409FBEBD: mov     ecx, 4
 * 00000001409FBEC2: lea     rax, [rbp+0BE0h+var_B08]
 * 00000001409FBEC9: xor     r15d, r15d
 * 00000001409FBECC: mov     r9d, 0FFFFFFFFh
 * 00000001409FBED2: mov     [rax], r15b
 * 00000001409FBED5: add     rax, r13
 * 00000001409FBED8: add     ecx, r9d
 * 00000001409FBEDB: jnz     short loc_1409FBED2
 * 00000001409FBEDD: mov     ecx, [r12+820h]
 * 00000001409FBEE5: mov     r11d, 19h
 * 00000001409FBEEB: mov     rdx, [rbp+0BE0h+arg_0]
 * 00000001409FBEF2: add     r12, 82Ch
 * 00000001409FBEF9: mov     [rbp+0BE0h+var_C08], r12
 * 00000001409FBEFD: mov     r14d, 8000h
 * 00000001409FBF03: mov     [rbp+0BE0h+var_C18], 0C000009Ah
 * 00000001409FBF0A: mov     eax, [r12]
 * 00000001409FBF0E: cmp     [rdx+828h], eax
 * 00000001409FBF14: jge     loc_140A0766C
 * 00000001409FBF1A: mov     rbx, [rbp+0BE0h+var_380]
 * 00000001409FBF21: lea     edx, [r11-18h]
 * 00000001409FBF25: mov     r14, [rbp+0BE0h+var_378]
 * 00000001409FBF2C: mov     r15d, [rbp+0BE0h+var_89C]
 * 00000001409FBF33: mov     r10d, [rbp+0BE0h+var_8D0]
 * 00000001409FBF3A: mov     [rbp+0BE0h+var_C30], rbx
 * 00000001409FBF3E: mov     [rbp+0BE0h+var_C40], r14
 * 00000001409FBF42: mov     [rbp+0BE0h+var_C28], r15d
 * 00000001409FBF46: mov     [rbp+0BE0h+var_BA0], r10d
 * 00000001409FBF4A: mov     eax, [rsi+990h]
 * 00000001409FBF50: mov     r8d, 110000h
 * 00000001409FBF56: and     eax, r8d
 * 00000001409FBF59: cmp     eax, r8d
 * 00000001409FBF5C: jz      loc_1409FC0A8
 * 00000001409FBF62: xor     eax, eax
 * 00000001409FBF64: mov     dr7, rax
 * 00000001409FBF67: jmp     loc_1409FC0AA
 * 00000001409FBF6C: mov     rax, [r12+438h]
 * 00000001409FBF74: lea     rdx, [rbp+0BE0h+var_6C0]
 * 00000001409FBF7B: mov     rcx, rbx
 * 00000001409FBF7E: call    KeGuardDispatchICall
 * 00000001409FBF83: mov     rax, [r12+1C0h]
 * 00000001409FBF8B: xor     r9d, r9d
 * 00000001409FBF8E: xor     r8d, r8d
 * 00000001409FBF91: mov     rdx, r15
 * 00000001409FBF94: mov     rcx, rbx
 * 00000001409FBF97: call    KeGuardDispatchICall
 * 00000001409FBF9C: rdtsc
 * 00000001409FBF9E: shl     rdx, 20h
 * 00000001409FBFA2: or      rax, rdx
 * 00000001409FBFA5: mov     rcx, rax
 * 00000001409FBFA8: ror     rax, 3
 * 00000001409FBFAC: xor     rcx, rax
 * 00000001409FBFAF: mov     rax, 7010008004002001h
 * 00000001409FBFB9: mul     rcx
 * 00000001409FBFBC: mov     rcx, r15
 * 00000001409FBFBF: mov     rbx, rdx
 * 00000001409FBFC2: mov     [rbp+0BE0h+var_388], rdx
 * 00000001409FBFC9: xor     rbx, rax
 * 00000001409FBFCC: mov     rax, [r12+1B8h]
 * 00000001409FBFD4: call    KeGuardDispatchICall
 * 00000001409FBFD9: mov     ecx, eax
 * 00000001409FBFDB: xor     edx, edx
 * 00000001409FBFDD: mov     rax, rbx
 * 00000001409FBFE0: div     rcx
 * 00000001409FBFE3: mov     rbx, rdx
 * 00000001409FBFE6: cli
 * 00000001409FBFE7: mov     rcx, gs:20h
 * 00000001409FBFF0: mov     rax, [r12+648h]
 * 00000001409FBFF8: mov     rcx, [rcx+rax]
 * 00000001409FBFFC: sti
 * 00000001409FBFFD: mov     rax, [r12+1C8h]
 * 00000001409FC005: lea     rdx, [rbp+0BE0h+var_6D0]
 * 00000001409FC00C: call    KeGuardDispatchICall
 * 00000001409FC011: mov     rax, [r12+1A8h]
 * 00000001409FC019: lea     rcx, [rbp+0BE0h+var_240]
 * 00000001409FC020: mov     rdx, r15
 * 00000001409FC023: call    KeGuardDispatchICall
 * 00000001409FC028: jmp     short loc_1409FC031
 * 00000001409FC02A: test    ebx, ebx
 * 00000001409FC02C: jz      short loc_1409FC052
 * 00000001409FC02E: add     ebx, r13d
 * 00000001409FC031: mov     rax, [r12+1B0h]
 * 00000001409FC039: lea     rdx, [rbp+0BE0h+var_240]
 * 00000001409FC040: lea     rcx, [rbp+0BE0h+var_B1C]
 * 00000001409FC047: call    KeGuardDispatchICall
 * 00000001409FC04C: test    eax, eax
 * 00000001409FC04E: jns     short loc_1409FC02A
 * 00000001409FC050: jmp     short loc_1409FC06C
 * 00000001409FC052: mov     rax, [r12+1A0h]
 * 00000001409FC05A: lea     rcx, [rbp+0BE0h+var_6D0]
 * 00000001409FC061: mov     edx, [rbp+0BE0h+var_B1C]
 * 00000001409FC067: call    KeGuardDispatchICall
 * 00000001409FC06C: mov     rax, [r12+1D0h]
 * 00000001409FC074: lea     rdx, [rbp+0BE0h+var_260]
 * 00000001409FC07B: lea     rcx, [rbp+0BE0h+var_6D0]
 * 00000001409FC082: call    KeGuardDispatchICall
 * 00000001409FC087: mov     rax, [r12+100h]
 * 00000001409FC08F: mov     rcx, r15
 * 00000001409FC092: call    KeGuardDispatchICall
 * 00000001409FC097: mov     r13d, 1
 * 00000001409FC09D: xor     eax, eax
 * 00000001409FC09F: mov     [rbp+0BE0h+var_BC8], r13d
 * 00000001409FC0A3: jmp     loc_1409FBEB6
 * 00000001409FC0A8: xor     eax, eax
 * 00000001409FC0AA: cmp     ecx, [rsi+80Ch]
 * 00000001409FC0B0: jnz     short loc_1409FC0E8
 * 00000001409FC0B2: add     [rsi+830h], edx
 * 00000001409FC0B8: mov     ecx, eax
 * 00000001409FC0BA: cmp     dword ptr [rsi+958h], 0Bh
 * 00000001409FC0C1: jnz     short loc_1409FC0E8
 * 00000001409FC0C3: mov     eax, [rsi+990h]
 * 00000001409FC0C9: test    dl, al
 * 00000001409FC0CB: jnz     short loc_1409FC0E8
 * 00000001409FC0CD: cmp     [rsi+970h], r9d
 * 00000001409FC0D4: jnz     short loc_1409FC0E0
 * 00000001409FC0D6: xor     eax, eax
 * 00000001409FC0D8: mov     [rsi+970h], eax
 * 00000001409FC0DE: jmp     short loc_1409FC0E8
 * 00000001409FC0E0: or      eax, edx
 * 00000001409FC0E2: mov     [rsi+990h], eax
 * 00000001409FC0E8: mov     rax, [rsi+0A78h]
 * 00000001409FC0EF: mov     r9, rsi
 * 00000001409FC0F2: test    rax, rax
 * 00000001409FC0F5: mov     [rbp+0BE0h+var_BE8], ecx
 * 00000001409FC0F8: cmovnz  r9, rax
 * 00000001409FC0FC: xor     eax, eax
 * 00000001409FC0FE: mov     r8d, eax
 * 00000001409FC101: mov     r13d, [r9+808h]
 * 00000001409FC108: add     r13, r9
 * 00000001409FC10B: mov     [rsp+0CE0h+var_C90], r13
 * 00000001409FC110: cmp     dword ptr [rbp+0BE0h+var_B10], eax
 * 00000001409FC116: jz      short loc_1409FC136
 * 00000001409FC118: cmp     dword ptr [rbp+0BE0h+var_B10+4], ecx
 * 00000001409FC11E: ja      short loc_1409FC136
 * 00000001409FC120: mov     r13d, [rbp+0BE0h+var_B08]
 * 00000001409FC127: mov     r8d, dword ptr [rbp+0BE0h+var_B10+4]
 * 00000001409FC12E: add     r13, r9
 * 00000001409FC131: mov     [rsp+0CE0h+var_C90], r13
 * 00000001409FC136: mov     edx, 1
 * 00000001409FC13B: cmp     r8d, ecx
 * 00000001409FC13E: jz      loc_1409FC26F
 * 00000001409FC144: sub     ecx, r8d
 * 00000001409FC147: lea     ebx, [rdx+1]
 * 00000001409FC14A: mov     r10d, ecx
 * 00000001409FC14D: lea     r14d, [rdx+0Bh]
 * 00000001409FC151: add     r8d, ecx
 * 00000001409FC154: mov     rsi, 0AAAAAAAAAAAAAAABh
 * 00000001409FC15E: mov     ecx, [r13+0]
 * 00000001409FC162: cmp     ecx, r14d
 * 00000001409FC165: jg      short loc_1409FC1AA
 * 00000001409FC167: jz      short loc_1409FC1C7
 * 00000001409FC169: sub     ecx, 1
 * 00000001409FC16C: jz      short loc_1409FC1C7
 * 00000001409FC16E: sub     ecx, 6
 * 00000001409FC171: jz      short loc_1409FC199
 * 00000001409FC173: sub     ecx, 1
 * 00000001409FC176: jz      short loc_1409FC18F
 * 00000001409FC178: cmp     ecx, ebx
 * 00000001409FC17A: jnz     loc_1409FC20B
 * 00000001409FC180: mov     eax, [r13+1Ch]
 * 00000001409FC184: add     eax, 3
 * 00000001409FC187: shl     eax, 4
 * 00000001409FC18A: jmp     loc_1409FC249
 * 00000001409FC18F: movzx   eax, word ptr [r13+20h]
 * 00000001409FC194: jmp     loc_1409FC243
 * 00000001409FC199: mov     eax, [r13+18h]
 * 00000001409FC19D: add     eax, ebx
 * 00000001409FC19F: lea     eax, [rax+rax*2]
 * 00000001409FC1A2: shl     eax, 3
 * 00000001409FC1A5: jmp     loc_1409FC249
 * 00000001409FC1AA: cmp     ecx, 1Ch
 * 00000001409FC1AD: jz      loc_1409FC23E
 * 00000001409FC1B3: cmp     ecx, 1Eh
 * 00000001409FC1B6: jz      short loc_1409FC212
 * 00000001409FC1B8: cmp     ecx, 20h ; ' '
 * 00000001409FC1BB: jle     short loc_1409FC20B
 * 00000001409FC1BD: cmp     ecx, 22h ; '"'
 * 00000001409FC1C0: jle     short loc_1409FC1E3
 * 00000001409FC1C2: cmp     ecx, 2Bh ; '+'
 * 00000001409FC1C5: jnz     short loc_1409FC20B
 * 00000001409FC1C7: mov     ecx, [r13+10h]
 * 00000001409FC1CB: mov     rax, rsi
 * 00000001409FC1CE: mul     rcx
 * 00000001409FC1D1: shr     rdx, 3
 * 00000001409FC1D5: lea     eax, ds:30h[rdx*4]
 * 00000001409FC1DC: mov     edx, 1
 * 00000001409FC1E1: jmp     short loc_1409FC249
 * 00000001409FC1E3: mov     ecx, [r13+20h]
 * 00000001409FC1E7: mov     edx, [r13+28h]
 * 00000001409FC1EB: and     ecx, 0FFFh
 * 00000001409FC1F1: add     rdx, 0FFFh
 * 00000001409FC1F8: add     rdx, rcx
 * 00000001409FC1FB: shr     rdx, 0Ch
 * 00000001409FC1FF: lea     eax, [rdx+rdx*4]
 * 00000001409FC202: lea     eax, ds:30h[rax*4]
 * 00000001409FC209: jmp     short loc_1409FC1DC
 * 00000001409FC20B: mov     eax, 30h ; '0'
 * 00000001409FC210: jmp     short loc_1409FC249
 * 00000001409FC212: mov     eax, [r13+24h]
 * 00000001409FC216: lea     ecx, [rax-1]
 * 00000001409FC219: neg     eax
 * 00000001409FC21B: sbb     eax, eax
 * 00000001409FC21D: and     ecx, eax
 * 00000001409FC21F: mov     rax, rsi
 * 00000001409FC222: mul     rcx
 * 00000001409FC225: movzx   eax, word ptr [r13+28h]
 * 00000001409FC22A: shr     rdx, 3
 * 00000001409FC22E: add     edx, 7
 * 00000001409FC231: and     edx, 0FFFFFFF8h
 * 00000001409FC234: add     eax, ebx
 * 00000001409FC236: lea     eax, [rax+rax*2]
 * 00000001409FC239: lea     eax, [rdx+rax*8]
 * 00000001409FC23C: jmp     short loc_1409FC1DC
 * 00000001409FC23E: movzx   eax, word ptr [r13+28h]
 * 00000001409FC243: add     eax, 37h ; '7'
 * 00000001409FC246: and     eax, 0FFFFFFF8h
 * 00000001409FC249: add     r13, rax
 * 00000001409FC24C: sub     r10, rdx
 * 00000001409FC24F: jnz     loc_1409FC15E
 * 00000001409FC255: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FC25A: mov     r12, [rbp+0BE0h+var_C08]
 * 00000001409FC25E: mov     rbx, [rbp+0BE0h+var_C30]
 * 00000001409FC262: mov     r14, [rbp+0BE0h+var_C40]
 * 00000001409FC266: mov     r15d, [rbp+0BE0h+var_C28]
 * 00000001409FC26A: mov     [rsp+0CE0h+var_C90], r13
 * 00000001409FC26F: mov     eax, r13d
 * 00000001409FC272: mov     dword ptr [rbp+0BE0h+var_B10], edx
 * 00000001409FC278: sub     eax, r9d
 * 00000001409FC27B: mov     dword ptr [rbp+0BE0h+var_B10+4], r8d
 * 00000001409FC282: mov     [rbp+0BE0h+var_B08], eax
 * 00000001409FC288: mov     r10d, [r13+0]
 * 00000001409FC28C: mov     dword ptr [rbp+0BE0h+arg_8], r10d
 * 00000001409FC293: cmp     r10d, 1Ch
 * 00000001409FC297: jg      loc_140A01A01
 * 00000001409FC29D: jz      loc_140A00FCE
 * 00000001409FC2A3: mov     r8d, 0Ch
 * 00000001409FC2A9: cmp     r10d, r8d
 * 00000001409FC2AC: jg      loc_1409FD844
 * 00000001409FC2B2: jz      loc_140A05549
 * 00000001409FC2B8: xor     eax, eax
 * 00000001409FC2BA: mov     ecx, r10d
 * 00000001409FC2BD: test    r10d, r10d
 * 00000001409FC2C0: jz      loc_1409FD61F
 * 00000001409FC2C6: sub     ecx, 1
 * 00000001409FC2C9: jz      loc_140A0554B
 * 00000001409FC2CF: sub     ecx, 3
 * 00000001409FC2D2: jz      loc_1409FD38A
 * 00000001409FC2D8: sub     ecx, 1
 * 00000001409FC2DB: jz      loc_1409FD054
 * 00000001409FC2E1: lea     r14d, [r8-0Ah]
 * 00000001409FC2E5: sub     ecx, r14d
 * 00000001409FC2E8: jz      loc_1409FCEE4
 * 00000001409FC2EE: sub     ecx, 1
 * 00000001409FC2F1: jz      loc_1409FCA98
 * 00000001409FC2F7: sub     ecx, r14d
 * 00000001409FC2FA: jz      loc_1409FC701
 * 00000001409FC300: cmp     ecx, 1
 * 00000001409FC303: jnz     loc_140A06767
 * 00000001409FC309: cmp     [rsi+980h], rax
 * 00000001409FC310: jnz     short loc_1409FC37B
 * 00000001409FC312: mov     [rsi+824h], eax
 * 00000001409FC318: xor     r15d, r15d
 * 00000001409FC31B: mov     r14d, 8000h
 * 00000001409FC321: mov     edx, [rbp+0BE0h+var_BE8]
 * 00000001409FC324: cmp     dword ptr [rsi+824h], 0
 * 00000001409FC32B: lea     ecx, [rdx-1]
 * 00000001409FC32E: cmovz   ecx, edx
 * 00000001409FC331: mov     edx, 1
 * 00000001409FC336: add     ecx, edx
 * 00000001409FC338: cmp     [rsi+8F8h], r15d
 * 00000001409FC33F: jnz     loc_140A07669
 * 00000001409FC345: lea     r12, [rsi+82Ch]
 * 00000001409FC34C: mov     eax, [r12]
 * 00000001409FC350: mov     [rbp+0BE0h+var_C08], r12
 * 00000001409FC354: cmp     [rsi+828h], eax
 * 00000001409FC35A: jge     loc_140A07669
 * 00000001409FC360: mov     rbx, [rbp+0BE0h+var_C30]
 * 00000001409FC364: lea     r11d, [rdx+18h]
 * 00000001409FC368: mov     r14, [rbp+0BE0h+var_C40]
 * 00000001409FC36C: mov     r9d, 0FFFFFFFFh
 * 00000001409FC372: mov     r15d, [rbp+0BE0h+var_C28]
 * 00000001409FC376: jmp     loc_1409FBF4A
 * 00000001409FC37B: cmp     [rsi+824h], eax
 * 00000001409FC381: jnz     short loc_1409FC3D9
 * 00000001409FC383: mov     eax, [rsi+994h]
 * 00000001409FC389: mov     ecx, eax
 * 00000001409FC38B: shl     ecx, 3
 * 00000001409FC38E: xor     ecx, eax
 * 00000001409FC390: and     ecx, 20h
 * 00000001409FC393: xor     ecx, eax
 * 00000001409FC395: mov     [rsi+994h], ecx
 * 00000001409FC39B: test    cl, 4
 * 00000001409FC39E: jz      loc_1409FC489
 * 00000001409FC3A4: mov     r14d, [r13+8]
 * 00000001409FC3A8: mov     ecx, [r13+10h]
 * 00000001409FC3AC: and     r14d, 0FFFh
 * 00000001409FC3B3: mov     rbx, [r13+8]
 * 00000001409FC3B7: add     r14, 0FFFh
 * 00000001409FC3BE: add     r14, rcx
 * 00000001409FC3C1: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001409FC3C8: shr     r14, 0Ch
 * 00000001409FC3CC: test    r14, r14
 * 00000001409FC3CF: jz      loc_1409FC318
 * 00000001409FC3D5: xor     edi, edi
 * 00000001409FC3D7: jmp     short loc_1409FC3F6
 * 00000001409FC3D9: mov     ecx, [rsi+994h]
 * 00000001409FC3DF: mov     eax, ecx
 * 00000001409FC3E1: shr     eax, 3
 * 00000001409FC3E4: xor     eax, ecx
 * 00000001409FC3E6: test    al, 4
 * 00000001409FC3E8: jz      short loc_1409FC39B
 * 00000001409FC3EA: xor     eax, eax
 * 00000001409FC3EC: jmp     loc_1409FC312
 * 00000001409FC3F1: mov     edx, 1
 * 00000001409FC3F6: mov     rax, [rsi+2B0h]
 * 00000001409FC3FD: mov     rcx, rbx
 * 00000001409FC400: sub     r14, rdx
 * 00000001409FC403: call    KeGuardDispatchICall
 * 00000001409FC408: test    al, al
 * 00000001409FC40A: jz      short loc_1409FC463
 * 00000001409FC40C: cmp     [rsi+8F8h], edi
 * 00000001409FC412: jnz     short loc_1409FC463
 * 00000001409FC414: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC41E: xor     edx, edx
 * 00000001409FC420: add     rax, rsi
 * 00000001409FC423: mov     rcx, rsi
 * 00000001409FC426: mov     [rsi+900h], rax
 * 00000001409FC42D: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FC437: add     rax, r13
 * 00000001409FC43A: mov     [rsi+908h], rax
 * 00000001409FC441: movsxd  rax, dword ptr [r13+0]
 * 00000001409FC445: mov     [rsi+910h], rax
 * 00000001409FC44C: mov     eax, 1
 * 00000001409FC451: mov     [rsi+918h], rbx
 * 00000001409FC458: mov     [rsi+8F8h], eax
 * 00000001409FC45E: call    $$b8
 * 00000001409FC463: add     dword ptr [rsi+828h], 100h
 * 00000001409FC46D: add     rbx, 1000h
 * 00000001409FC474: test    r14, r14
 * 00000001409FC477: jnz     loc_1409FC3F1
 * 00000001409FC47D: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FC484: jmp     loc_1409FC318
 * 00000001409FC489: mov     r14, [r13+8]
 * 00000001409FC48D: mov     r8d, [r13+10h]
 * 00000001409FC491: mov     r9, r14
 * 00000001409FC494: add     [rsi+828h], r8d
 * 00000001409FC49B: mov     rax, r14
 * 00000001409FC49E: mov     r10d, [rsi+814h]
 * 00000001409FC4A5: mov     r15, [rsi+818h]
 * 00000001409FC4AC: lea     rcx, [r14+r8]
 * 00000001409FC4B0: cmp     r14, rcx
 * 00000001409FC4B3: jnb     short loc_1409FC4C5
 * 00000001409FC4B5: mov     edx, 40h ; '@'
 * 00000001409FC4BA: prefetchnta byte ptr [rax]
 * 00000001409FC4BD: add     rax, rdx
 * 00000001409FC4C0: cmp     rax, rcx
 * 00000001409FC4C3: jb      short loc_1409FC4BA
 * 00000001409FC4C5: mov     r11d, r8d
 * 00000001409FC4C8: mov     rbx, r15
 * 00000001409FC4CB: shr     r11d, 7
 * 00000001409FC4CF: mov     r12d, 1
 * 00000001409FC4D5: test    r11d, r11d
 * 00000001409FC4D8: jz      short loc_1409FC545
 * 00000001409FC4DA: mov     rsi, 7010008004002001h
 * 00000001409FC4E4: mov     edx, 8
 * 00000001409FC4E9: mov     rax, [r9]
 * 00000001409FC4EC: mov     ecx, r10d
 * 00000001409FC4EF: xor     rax, rbx
 * 00000001409FC4F2: mov     rbx, [r9+8]
 * 00000001409FC4F6: rol     rax, cl
 * 00000001409FC4F9: add     r9, 10h
 * 00000001409FC4FD: xor     rbx, rax
 * 00000001409FC500: rol     rbx, cl
 * 00000001409FC503: sub     rdx, r12
 * 00000001409FC506: jnz     short loc_1409FC4E9
 * 00000001409FC508: mov     rcx, r9
 * 00000001409FC50B: sub     rcx, r14
 * 00000001409FC50E: xor     rcx, r15
 * 00000001409FC511: mov     rax, rcx
 * 00000001409FC514: rol     rax, 11h
 * 00000001409FC518: xor     rcx, rax
 * 00000001409FC51B: mov     rax, rsi
 * 00000001409FC51E: mul     rcx
 * 00000001409FC521: xor     r10d, eax
 * 00000001409FC524: mov     [rbp+0BE0h+var_370], rdx
 * 00000001409FC52B: xor     r10d, edx
 * 00000001409FC52E: mov     eax, 0FFFFFFFFh
 * 00000001409FC533: and     r10d, 3Fh
 * 00000001409FC537: cmovz   r10d, r12d
 * 00000001409FC53B: add     r11d, eax
 * 00000001409FC53E: jnz     short loc_1409FC4E4
 * 00000001409FC540: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FC545: and     r8d, 7Fh
 * 00000001409FC549: cmp     r8d, 8
 * 00000001409FC54D: jb      short loc_1409FC56C
 * 00000001409FC54F: mov     edx, r8d
 * 00000001409FC552: shr     rdx, 3
 * 00000001409FC556: xor     rbx, [r9]
 * 00000001409FC559: mov     ecx, r10d
 * 00000001409FC55C: rol     rbx, cl
 * 00000001409FC55F: add     r9, 8
 * 00000001409FC563: add     r8d, 0FFFFFFF8h
 * 00000001409FC567: sub     rdx, r12
 * 00000001409FC56A: jnz     short loc_1409FC556
 * 00000001409FC56C: test    r8d, r8d
 * 00000001409FC56F: jz      short loc_1409FC590
 * 00000001409FC571: mov     esi, 0FFFFFFFFh
 * 00000001409FC576: movzx   eax, byte ptr [r9]
 * 00000001409FC57A: mov     ecx, r10d
 * 00000001409FC57D: xor     rbx, rax
 * 00000001409FC580: add     r9, r12
 * 00000001409FC583: rol     rbx, cl
 * 00000001409FC586: add     r8d, esi
 * 00000001409FC589: jnz     short loc_1409FC576
 * 00000001409FC58B: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FC590: mov     rax, rbx
 * 00000001409FC593: shr     rax, 1Fh
 * 00000001409FC597: xor     r15d, r15d
 * 00000001409FC59A: jmp     short loc_1409FC5A2
 * 00000001409FC59C: xor     ebx, eax
 * 00000001409FC59E: shr     rax, 1Fh
 * 00000001409FC5A2: test    rax, rax
 * 00000001409FC5A5: jnz     short loc_1409FC59C
 * 00000001409FC5A7: mov     edx, [r13+14h]
 * 00000001409FC5AB: btr     ebx, 1Fh
 * 00000001409FC5AF: cmp     ebx, edx
 * 00000001409FC5B1: jz      loc_1409FC31B
 * 00000001409FC5B7: mov     ecx, [r13+10h]
 * 00000001409FC5BB: mov     r8, [r13+8]
 * 00000001409FC5BF: test    rcx, rcx
 * 00000001409FC5C2: jz      loc_1409FC67C
 * 00000001409FC5C8: mov     eax, [rsi+994h]
 * 00000001409FC5CE: mov     r9d, 40h ; '@'
 * 00000001409FC5D4: test    r9b, al
 * 00000001409FC5D7: jz      loc_1409FC67C
 * 00000001409FC5DD: mov     r12, cr8
 * 00000001409FC5E1: lea     eax, [r9-3Eh]
 * 00000001409FC5E5: mov     cr8, rax
 * 00000001409FC5E9: mov     r14, r8
 * 00000001409FC5EC: lea     rax, [rcx-1]
 * 00000001409FC5F0: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FC5F7: add     rax, r8
 * 00000001409FC5FA: or      rax, 0FFFh
 * 00000001409FC600: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FC607: lea     r13, [r14-1]
 * 00000001409FC60B: movzx   r15d, r12b
 * 00000001409FC60F: mov     rax, [rsi+468h]
 * 00000001409FC616: xor     edx, edx
 * 00000001409FC618: mov     rcx, r14
 * 00000001409FC61B: call    KeGuardDispatchICall
 * 00000001409FC620: cmp     eax, 0C000022Dh
 * 00000001409FC625: jnz     short loc_1409FC64B
 * 00000001409FC627: mov     eax, 1
 * 00000001409FC62C: cmp     r12b, al
 * 00000001409FC62F: ja      short loc_1409FC64F
 * 00000001409FC631: movzx   r15d, r12b
 * 00000001409FC635: mov     cr8, r15
 * 00000001409FC639: mov     al, [r14]
 * 00000001409FC63C: mov     rax, cr8
 * 00000001409FC640: mov     eax, 2
 * 00000001409FC645: mov     cr8, rax
 * 00000001409FC649: jmp     short loc_1409FC60F
 * 00000001409FC64B: test    eax, eax
 * 00000001409FC64D: js      short loc_1409FC66F
 * 00000001409FC64F: add     r14, 1000h
 * 00000001409FC656: add     r13, 1000h
 * 00000001409FC65D: cmp     r13, [rbp+0BE0h+arg_8]
 * 00000001409FC664: jnz     short loc_1409FC60B
 * 00000001409FC666: mov     cr8, r15
 * 00000001409FC66A: jmp     loc_1409FC318
 * 00000001409FC66F: mov     cr8, r15
 * 00000001409FC673: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FC678: mov     edx, [r13+14h]
 * 00000001409FC67C: mov     eax, [rsi+8F8h]
 * 00000001409FC682: xor     r15d, r15d
 * 00000001409FC685: test    eax, eax
 * 00000001409FC687: jnz     short loc_1409FC6A1
 * 00000001409FC689: mov     ecx, ebx
 * 00000001409FC68B: mov     eax, edx
 * 00000001409FC68D: xor     rcx, rax
 * 00000001409FC690: mov     rax, [rsi+590h]
 * 00000001409FC697: mov     [rax+18h], rcx
 * 00000001409FC69B: mov     eax, [rsi+8F8h]
 * 00000001409FC6A1: mov     rcx, [r13+8]
 * 00000001409FC6A5: test    eax, eax
 * 00000001409FC6A7: jnz     loc_1409FC31B
 * 00000001409FC6AD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC6B7: add     rax, rsi
 * 00000001409FC6BA: mov     [rsi+900h], rax
 * 00000001409FC6C1: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FC6CB: add     rax, r13
 * 00000001409FC6CE: mov     [rsi+908h], rax
 * 00000001409FC6D5: movsxd  rax, dword ptr [r13+0]
 * 00000001409FC6D9: mov     [rsi+910h], rax
 * 00000001409FC6E0: mov     [rsi+918h], rcx
 * 00000001409FC6E7: mov     eax, 1
 * 00000001409FC6EC: mov     [rsi+8F8h], eax
 * 00000001409FC6F2: xor     edx, edx
 * 00000001409FC6F4: mov     rcx, rsi
 * 00000001409FC6F7: call    $$b8
 * 00000001409FC6FC: jmp     loc_1409FC31B
 * 00000001409FC701: cmp     [r13+18h], eax
 * 00000001409FC705: jz      short loc_1409FC748
 * 00000001409FC707: cmp     [rsi+980h], rax
 * 00000001409FC70E: jz      loc_1409FC8B9
 * 00000001409FC714: mov     ecx, [rsi+994h]
 * 00000001409FC71A: test    cl, 4
 * 00000001409FC71D: jnz     loc_1409FC8B9
 * 00000001409FC723: lea     rax, [rsi+824h]
 * 00000001409FC72A: xor     r15d, r15d
 * 00000001409FC72D: cmp     [rax], r15d
 * 00000001409FC730: jnz     loc_1409FC8A8
 * 00000001409FC736: mov     eax, ecx
 * 00000001409FC738: shl     eax, 3
 * 00000001409FC73B: xor     eax, ecx
 * 00000001409FC73D: and     eax, 20h
 * 00000001409FC740: xor     eax, ecx
 * 00000001409FC742: mov     [rsi+994h], eax
 * 00000001409FC748: mov     edx, [r13+1Ch]
 * 00000001409FC74C: lea     rax, [rsi+824h]
 * 00000001409FC753: mov     r14d, [rax]
 * 00000001409FC756: lea     rcx, [r13+30h]
 * 00000001409FC75A: shl     r14, 4
 * 00000001409FC75E: add     r14, rcx
 * 00000001409FC761: shl     rdx, 4
 * 00000001409FC765: add     rdx, rcx
 * 00000001409FC768: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409FC76C: mov     [rbp+0BE0h+arg_8], rdx
 * 00000001409FC773: mov     [rsp+0CE0h+var_C88], r14
 * 00000001409FC778: xor     eax, eax
 * 00000001409FC77A: cmp     [r14], eax
 * 00000001409FC77D: jl      loc_1409FC9A4
 * 00000001409FC783: mov     rdi, [r14+8]
 * 00000001409FC787: mov     r8d, [r14+4]
 * 00000001409FC78B: mov     r9, rdi
 * 00000001409FC78E: add     [rsi+828h], r8d
 * 00000001409FC795: mov     rax, rdi
 * 00000001409FC798: mov     r11d, [rsi+814h]
 * 00000001409FC79F: mov     r12d, r8d
 * 00000001409FC7A2: mov     r15, [rsi+818h]
 * 00000001409FC7A9: lea     rcx, [rdi+r8]
 * 00000001409FC7AD: cmp     rdi, rcx
 * 00000001409FC7B0: jnb     short loc_1409FC7C3
 * 00000001409FC7B2: mov     r10d, 40h ; '@'
 * 00000001409FC7B8: prefetchnta byte ptr [rax]
 * 00000001409FC7BB: add     rax, r10
 * 00000001409FC7BE: cmp     rax, rcx
 * 00000001409FC7C1: jb      short loc_1409FC7B8
 * 00000001409FC7C3: mov     r10d, r8d
 * 00000001409FC7C6: mov     rbx, r15
 * 00000001409FC7C9: shr     r10d, 7
 * 00000001409FC7CD: test    r10d, r10d
 * 00000001409FC7D0: jz      short loc_1409FC84B
 * 00000001409FC7D2: mov     esi, 1
 * 00000001409FC7D7: mov     r12d, 0FFFFFFFFh
 * 00000001409FC7DD: mov     r14, 7010008004002001h
 * 00000001409FC7E7: mov     eax, 8
 * 00000001409FC7EC: xor     rbx, [r9]
 * 00000001409FC7EF: mov     ecx, r11d
 * 00000001409FC7F2: rol     rbx, cl
 * 00000001409FC7F5: xor     rbx, [r9+8]
 * 00000001409FC7F9: add     r9, 10h
 * 00000001409FC7FD: rol     rbx, cl
 * 00000001409FC800: sub     rax, rsi
 * 00000001409FC803: jnz     short loc_1409FC7EC
 * 00000001409FC805: mov     rcx, r9
 * 00000001409FC808: sub     rcx, rdi
 * 00000001409FC80B: xor     rcx, r15
 * 00000001409FC80E: mov     rax, rcx
 * 00000001409FC811: rol     rax, 11h
 * 00000001409FC815: xor     rcx, rax
 * 00000001409FC818: mov     rax, r14
 * 00000001409FC81B: mul     rcx
 * 00000001409FC81E: xor     eax, edx
 * 00000001409FC820: mov     [rbp+0BE0h+var_368], rdx
 * 00000001409FC827: xor     r11d, eax
 * 00000001409FC82A: and     r11d, 3Fh
 * 00000001409FC82E: cmovz   r11d, esi
 * 00000001409FC832: add     r10d, r12d
 * 00000001409FC835: jnz     short loc_1409FC7E7
 * 00000001409FC837: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FC83C: mov     r12, r8
 * 00000001409FC83F: mov     r14, [rsp+0CE0h+var_C88]
 * 00000001409FC844: mov     rdx, [rbp+0BE0h+arg_8]
 * 00000001409FC84B: and     r8d, 7Fh
 * 00000001409FC84F: mov     r10d, 1
 * 00000001409FC855: cmp     r8d, 8
 * 00000001409FC859: jb      short loc_1409FC878
 * 00000001409FC85B: mov     eax, r8d
 * 00000001409FC85E: shr     rax, 3
 * 00000001409FC862: xor     rbx, [r9]
 * 00000001409FC865: mov     ecx, r11d
 * 00000001409FC868: rol     rbx, cl
 * 00000001409FC86B: add     r9, 8
 * 00000001409FC86F: add     r8d, 0FFFFFFF8h
 * 00000001409FC873: sub     rax, r10
 * 00000001409FC876: jnz     short loc_1409FC862
 * 00000001409FC878: test    r8d, r8d
 * 00000001409FC87B: jz      short loc_1409FC89C
 * 00000001409FC87D: mov     esi, 0FFFFFFFFh
 * 00000001409FC882: movzx   eax, byte ptr [r9]
 * 00000001409FC886: mov     ecx, r11d
 * 00000001409FC889: xor     rbx, rax
 * 00000001409FC88C: add     r9, r10
 * 00000001409FC88F: rol     rbx, cl
 * 00000001409FC892: add     r8d, esi
 * 00000001409FC895: jnz     short loc_1409FC882
 * 00000001409FC897: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FC89C: mov     rax, rbx
 * 00000001409FC89F: shr     rax, 1Fh
 * 00000001409FC8A3: xor     r15d, r15d
 * 00000001409FC8A6: jmp     short loc_1409FC8D1
 * 00000001409FC8A8: test    cl, 20h
 * 00000001409FC8AB: jz      loc_1409FC748
 * 00000001409FC8B1: mov     r14d, r15d
 * 00000001409FC8B4: jmp     loc_1409FCA90
 * 00000001409FC8B9: mov     r14d, eax
 * 00000001409FC8BC: xor     r15d, r15d
 * 00000001409FC8BF: lea     rax, [rsi+824h]
 * 00000001409FC8C6: jmp     loc_1409FCA90
 * 00000001409FC8CB: xor     ebx, eax
 * 00000001409FC8CD: shr     rax, 1Fh
 * 00000001409FC8D1: test    rax, rax
 * 00000001409FC8D4: jnz     short loc_1409FC8CB
 * 00000001409FC8D6: mov     ecx, [r14]
 * 00000001409FC8D9: btr     ebx, 1Fh
 * 00000001409FC8DD: mov     eax, ecx
 * 00000001409FC8DF: btr     eax, 1Fh
 * 00000001409FC8E3: cmp     ebx, eax
 * 00000001409FC8E5: jz      loc_1409FCA73
 * 00000001409FC8EB: test    r12, r12
 * 00000001409FC8EE: jz      loc_1409FC9F3
 * 00000001409FC8F4: mov     eax, [rsi+994h]
 * 00000001409FC8FA: mov     edx, 40h ; '@'
 * 00000001409FC8FF: test    dl, al
 * 00000001409FC901: jz      loc_1409FC9F3
 * 00000001409FC907: mov     r13, cr8
 * 00000001409FC90B: lea     eax, [rdx-3Eh]
 * 00000001409FC90E: mov     cr8, rax
 * 00000001409FC912: mov     r15, rdi
 * 00000001409FC915: lea     rax, [rdi-1]
 * 00000001409FC919: and     r15, 0FFFFFFFFFFFFF000h
 * 00000001409FC920: add     rax, r12
 * 00000001409FC923: or      rax, 0FFFh
 * 00000001409FC929: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409FC92D: lea     rax, [r15-1]
 * 00000001409FC931: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FC936: movzx   r12d, r13b
 * 00000001409FC93A: mov     rax, [rsi+468h]
 * 00000001409FC941: xor     edx, edx
 * 00000001409FC943: mov     rcx, r15
 * 00000001409FC946: call    KeGuardDispatchICall
 * 00000001409FC94B: cmp     eax, 0C000022Dh
 * 00000001409FC950: jnz     short loc_1409FC976
 * 00000001409FC952: mov     eax, 1
 * 00000001409FC957: cmp     r13b, al
 * 00000001409FC95A: ja      short loc_1409FC97A
 * 00000001409FC95C: movzx   r12d, r13b
 * 00000001409FC960: mov     cr8, r12
 * 00000001409FC964: mov     al, [r15]
 * 00000001409FC967: mov     rax, cr8
 * 00000001409FC96B: mov     eax, 2
 * 00000001409FC970: mov     cr8, rax
 * 00000001409FC974: jmp     short loc_1409FC93A
 * 00000001409FC976: test    eax, eax
 * 00000001409FC978: js      short loc_1409FC9E7
 * 00000001409FC97A: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409FC97F: mov     ecx, 1000h
 * 00000001409FC984: add     rax, rcx
 * 00000001409FC987: add     r15, rcx
 * 00000001409FC98A: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FC98F: cmp     rax, [rbp+0BE0h+var_C50]
 * 00000001409FC993: jnz     short loc_1409FC936
 * 00000001409FC995: mov     cr8, r12
 * 00000001409FC999: mov     rdx, [rbp+0BE0h+arg_8]
 * 00000001409FC9A0: mov     r12, [rbp+0BE0h+var_C08]
 * 00000001409FC9A4: xor     r15d, r15d
 * 00000001409FC9A7: add     r14, 10h
 * 00000001409FC9AB: mov     [rsp+0CE0h+var_C88], r14
 * 00000001409FC9B0: cmp     r14, rdx
 * 00000001409FC9B3: jnb     short loc_1409FC9CD
 * 00000001409FC9B5: mov     eax, [r12]
 * 00000001409FC9B9: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FC9BE: cmp     [rsi+828h], eax
 * 00000001409FC9C4: jl      loc_1409FC778
 * 00000001409FC9CA: cmp     r14, rdx
 * 00000001409FC9CD: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FC9D4: jnz     loc_1409FCA7C
 * 00000001409FC9DA: xor     eax, eax
 * 00000001409FC9DC: mov     r14d, eax
 * 00000001409FC9DF: xor     r15d, r15d
 * 00000001409FC9E2: jmp     loc_1409FCA8C
 * 00000001409FC9E7: mov     cr8, r12
 * 00000001409FC9EB: mov     ecx, [r14]
 * 00000001409FC9EE: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FC9F3: mov     eax, ecx
 * 00000001409FC9F5: xor     edx, edx
 * 00000001409FC9F7: mov     ecx, [rsi+8F8h]
 * 00000001409FC9FD: btr     eax, 1Fh
 * 00000001409FCA01: test    ecx, ecx
 * 00000001409FCA03: jnz     short loc_1409FC999
 * 00000001409FCA05: mov     ecx, ebx
 * 00000001409FCA07: xor     rcx, rax
 * 00000001409FCA0A: mov     rax, [rsi+590h]
 * 00000001409FCA11: mov     [rax+18h], rcx
 * 00000001409FCA15: mov     ecx, [rsi+8F8h]
 * 00000001409FCA1B: test    ecx, ecx
 * 00000001409FCA1D: jnz     loc_1409FC999
 * 00000001409FCA23: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FCA2D: mov     rcx, rsi
 * 00000001409FCA30: add     rax, rsi
 * 00000001409FCA33: mov     [rsi+900h], rax
 * 00000001409FCA3A: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FCA44: add     rax, r13
 * 00000001409FCA47: mov     [rsi+908h], rax
 * 00000001409FCA4E: movsxd  rax, dword ptr [r13+0]
 * 00000001409FCA52: mov     [rsi+910h], rax
 * 00000001409FCA59: lea     eax, [rdx+1]
 * 00000001409FCA5C: mov     [rsi+918h], rdi
 * 00000001409FCA63: mov     [rsi+8F8h], eax
 * 00000001409FCA69: call    $$b8
 * 00000001409FCA6E: jmp     loc_1409FC999
 * 00000001409FCA73: mov     r12, [rbp+0BE0h+var_C08]
 * 00000001409FCA77: jmp     loc_1409FC9A7
 * 00000001409FCA7C: mov     rax, [rsp+0CE0h+var_C90]
 * 00000001409FCA81: add     rax, 30h ; '0'
 * 00000001409FCA85: sub     r14, rax
 * 00000001409FCA88: sar     r14, 4
 * 00000001409FCA8C: mov     rax, [rbp+0BE0h+var_C60]
 * 00000001409FCA90: mov     [rax], r14d
 * 00000001409FCA93: jmp     loc_1409FC31B
 * 00000001409FCA98: mov     rbx, [r13+18h]
 * 00000001409FCA9C: mov     r12d, 1
 * 00000001409FCAA2: mov     rcx, [rsi+6F0h]
 * 00000001409FCAA9: mov     r14, 0B3B74BDEE4453415h
 * 00000001409FCAB3: mov     rax, [rsi+720h]
 * 00000001409FCABA: add     rcx, rbx
 * 00000001409FCABD: movzx   edx, word ptr [r13+22h]
 * 00000001409FCAC2: mov     r15, 0A3A03F5891C8B4E8h
 * 00000001409FCACC: cmp     [rcx+rax], dx
 * 00000001409FCAD0: jz      short loc_1409FCB1A
 * 00000001409FCAD2: xor     eax, eax
 * 00000001409FCAD4: cmp     [rsi+8F8h], eax
 * 00000001409FCADA: jnz     short loc_1409FCB1A
 * 00000001409FCADC: lea     rax, [rsi+r15]
 * 00000001409FCAE0: xor     edx, edx
 * 00000001409FCAE2: mov     [rsi+900h], rax
 * 00000001409FCAE9: mov     rcx, rsi
 * 00000001409FCAEC: lea     rax, [r14+r13]
 * 00000001409FCAF0: mov     [rsi+908h], rax
 * 00000001409FCAF7: movsxd  rax, dword ptr [r13+0]
 * 00000001409FCAFB: mov     [rsi+910h], rax
 * 00000001409FCB02: mov     [rsi+918h], rbx
 * 00000001409FCB09: mov     [rsi+8F8h], r12d
 * 00000001409FCB10: call    $$b8
 * 00000001409FCB15: movzx   edx, word ptr [r13+22h]
 * 00000001409FCB1A: test    [rsi+728h], dx
 * 00000001409FCB21: jnz     short loc_1409FCB75
 * 00000001409FCB23: mov     rcx, [rsi+6F8h]
 * 00000001409FCB2A: add     rcx, rbx
 * 00000001409FCB2D: cmp     [rcx], rcx
 * 00000001409FCB30: jz      short loc_1409FCB75
 * 00000001409FCB32: xor     eax, eax
 * 00000001409FCB34: cmp     [rsi+8F8h], eax
 * 00000001409FCB3A: jnz     short loc_1409FCB75
 * 00000001409FCB3C: lea     rax, [rsi+r15]
 * 00000001409FCB40: xor     edx, edx
 * 00000001409FCB42: mov     [rsi+900h], rax
 * 00000001409FCB49: mov     rcx, rsi
 * 00000001409FCB4C: lea     rax, [r14+r13]
 * 00000001409FCB50: mov     [rsi+908h], rax
 * 00000001409FCB57: movsxd  rax, dword ptr [r13+0]
 * 00000001409FCB5B: mov     [rsi+910h], rax
 * 00000001409FCB62: mov     [rsi+918h], rbx
 * 00000001409FCB69: mov     [rsi+8F8h], r12d
 * 00000001409FCB70: call    $$b8
 * 00000001409FCB75: mov     r14, [r13+8]
 * 00000001409FCB79: mov     r8d, [r13+10h]
 * 00000001409FCB7D: mov     r9, r14
 * 00000001409FCB80: add     [rsi+828h], r8d
 * 00000001409FCB87: mov     rax, r14
 * 00000001409FCB8A: mov     r11d, [rsi+814h]
 * 00000001409FCB91: mov     r15, [rsi+818h]
 * 00000001409FCB98: lea     rcx, [r14+r8]
 * 00000001409FCB9C: cmp     r14, rcx
 * 00000001409FCB9F: jnb     short loc_1409FCBB1
 * 00000001409FCBA1: mov     edx, 40h ; '@'
 * 00000001409FCBA6: prefetchnta byte ptr [rax]
 * 00000001409FCBA9: add     rax, rdx
 * 00000001409FCBAC: cmp     rax, rcx
 * 00000001409FCBAF: jb      short loc_1409FCBA6
 * 00000001409FCBB1: mov     r10d, r8d
 * 00000001409FCBB4: mov     rbx, r15
 * 00000001409FCBB7: shr     r10d, 7
 * 00000001409FCBBB: mov     r13d, 0FFFFFFFFh
 * 00000001409FCBC1: test    r10d, r10d
 * 00000001409FCBC4: jz      short loc_1409FCC2B
 * 00000001409FCBC6: mov     rsi, 7010008004002001h
 * 00000001409FCBD0: mov     edx, 8
 * 00000001409FCBD5: mov     rax, [r9]
 * 00000001409FCBD8: mov     ecx, r11d
 * 00000001409FCBDB: xor     rax, rbx
 * 00000001409FCBDE: mov     rbx, [r9+8]
 * 00000001409FCBE2: rol     rax, cl
 * 00000001409FCBE5: add     r9, 10h
 * 00000001409FCBE9: xor     rbx, rax
 * 00000001409FCBEC: rol     rbx, cl
 * 00000001409FCBEF: sub     rdx, r12
 * 00000001409FCBF2: jnz     short loc_1409FCBD5
 * 00000001409FCBF4: mov     rcx, r9
 * 00000001409FCBF7: sub     rcx, r14
 * 00000001409FCBFA: xor     rcx, r15
 * 00000001409FCBFD: mov     rax, rcx
 * 00000001409FCC00: rol     rax, 11h
 * 00000001409FCC04: xor     rcx, rax
 * 00000001409FCC07: mov     rax, rsi
 * 00000001409FCC0A: mul     rcx
 * 00000001409FCC0D: mov     [rbp+0BE0h+var_360], rdx
 * 00000001409FCC14: xor     edx, eax
 * 00000001409FCC16: xor     r11d, edx
 * 00000001409FCC19: and     r11d, 3Fh
 * 00000001409FCC1D: cmovz   r11d, r12d
 * 00000001409FCC21: add     r10d, r13d
 * 00000001409FCC24: jnz     short loc_1409FCBD0
 * 00000001409FCC26: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FCC2B: and     r8d, 7Fh
 * 00000001409FCC2F: cmp     r8d, 8
 * 00000001409FCC33: jb      short loc_1409FCC52
 * 00000001409FCC35: mov     edx, r8d
 * 00000001409FCC38: shr     rdx, 3
 * 00000001409FCC3C: xor     rbx, [r9]
 * 00000001409FCC3F: mov     ecx, r11d
 * 00000001409FCC42: rol     rbx, cl
 * 00000001409FCC45: add     r9, 8
 * 00000001409FCC49: add     r8d, 0FFFFFFF8h
 * 00000001409FCC4D: sub     rdx, r12
 * 00000001409FCC50: jnz     short loc_1409FCC3C
 * 00000001409FCC52: test    r8d, r8d
 * 00000001409FCC55: jz      short loc_1409FCC6C
 * 00000001409FCC57: movzx   eax, byte ptr [r9]
 * 00000001409FCC5B: mov     ecx, r11d
 * 00000001409FCC5E: xor     rbx, rax
 * 00000001409FCC61: add     r9, r12
 * 00000001409FCC64: rol     rbx, cl
 * 00000001409FCC67: add     r8d, r13d
 * 00000001409FCC6A: jnz     short loc_1409FCC57
 * 00000001409FCC6C: mov     rax, rbx
 * 00000001409FCC6F: jmp     short loc_1409FCC73
 * 00000001409FCC71: xor     ebx, eax
 * 00000001409FCC73: shr     rax, 1Fh
 * 00000001409FCC77: test    rax, rax
 * 00000001409FCC7A: jnz     short loc_1409FCC71
 * 00000001409FCC7C: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409FCC81: btr     ebx, 1Fh
 * 00000001409FCC85: mov     r13d, eax
 * 00000001409FCC88: cmp     ebx, [r14+14h]
 * 00000001409FCC8C: jz      loc_1409FCD70
 * 00000001409FCC92: cmp     [r14], eax
 * 00000001409FCC95: jnz     short loc_1409FCC9F
 * 00000001409FCC97: cmp     [r14+18h], eax
 * 00000001409FCC9B: cmovnz  r13d, r12d
 * 00000001409FCC9F: mov     ecx, [r14+10h]
 * 00000001409FCCA3: mov     rdx, [r14+8]
 * 00000001409FCCA7: test    rcx, rcx
 * 00000001409FCCAA: jz      loc_1409FCE5F
 * 00000001409FCCB0: mov     eax, [rsi+994h]
 * 00000001409FCCB6: mov     r8d, 40h ; '@'
 * 00000001409FCCBC: test    r8b, al
 * 00000001409FCCBF: jz      loc_1409FCE5F
 * 00000001409FCCC5: mov     r12, cr8
 * 00000001409FCCC9: lea     eax, [r8-3Eh]
 * 00000001409FCCCD: mov     cr8, rax
 * 00000001409FCCD1: mov     r14, rdx
 * 00000001409FCCD4: lea     rax, [rcx-1]
 * 00000001409FCCD8: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FCCDF: add     rax, rdx
 * 00000001409FCCE2: or      rax, 0FFFh
 * 00000001409FCCE8: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FCCED: lea     rax, [r14-1]
 * 00000001409FCCF1: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FCCF8: movzx   r15d, r12b
 * 00000001409FCCFC: mov     rax, [rsi+468h]
 * 00000001409FCD03: xor     edx, edx
 * 00000001409FCD05: mov     rcx, r14
 * 00000001409FCD08: call    KeGuardDispatchICall
 * 00000001409FCD0D: cmp     eax, 0C000022Dh
 * 00000001409FCD12: jnz     short loc_1409FCD3F
 * 00000001409FCD14: test    r13d, r13d
 * 00000001409FCD17: jnz     loc_1409FCE56
 * 00000001409FCD1D: lea     eax, [r13+1]
 * 00000001409FCD21: cmp     r12b, al
 * 00000001409FCD24: ja      short loc_1409FCD47
 * 00000001409FCD26: movzx   r15d, r12b
 * 00000001409FCD2A: mov     cr8, r15
 * 00000001409FCD2E: mov     al, [r14]
 * 00000001409FCD31: mov     rax, cr8
 * 00000001409FCD35: lea     eax, [r13+2]
 * 00000001409FCD39: mov     cr8, rax
 * 00000001409FCD3D: jmp     short loc_1409FCCFC
 * 00000001409FCD3F: test    eax, eax
 * 00000001409FCD41: js      loc_1409FCE56
 * 00000001409FCD47: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409FCD4E: mov     ecx, 1000h
 * 00000001409FCD53: add     rax, rcx
 * 00000001409FCD56: add     r14, rcx
 * 00000001409FCD59: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FCD60: cmp     rax, [rsp+0CE0h+var_C88]
 * 00000001409FCD65: jnz     short loc_1409FCCF8
 * 00000001409FCD67: mov     cr8, r15
 * 00000001409FCD6B: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409FCD70: mov     r13, 0A3A03F5891C8B4E8h
 * 00000001409FCD7A: mov     r12, 0B3B74BDEE4453415h
 * 00000001409FCD84: mov     ebx, 1
 * 00000001409FCD89: lea     rax, [r14+30h]
 * 00000001409FCD8D: xor     r9d, r9d
 * 00000001409FCD90: mov     [rbp+0BE0h+var_870], rax
 * 00000001409FCD97: lea     rcx, [rbp+0BE0h+var_878]
 * 00000001409FCD9E: movzx   eax, word ptr [r14+20h]
 * 00000001409FCDA3: xor     r8d, r8d
 * 00000001409FCDA6: mov     [rbp+0BE0h+var_878], ax
 * 00000001409FCDAD: xor     edx, edx
 * 00000001409FCDAF: mov     [rbp+0BE0h+var_876], ax
 * 00000001409FCDB6: lea     rax, [rbp+0BE0h+var_970]
 * 00000001409FCDBD: mov     [rsp+0CE0h+var_CA8], rax
 * 00000001409FCDC2: xor     eax, eax
 * 00000001409FCDC4: mov     [rsp+0CE0h+var_CB0], rax
 * 00000001409FCDC9: mov     byte ptr [rsp+0CE0h+var_CB8], al
 * 00000001409FCDCD: mov     rax, [rsi+508h]
 * 00000001409FCDD4: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 00000001409FCDD9: mov     rax, [rsi+1E8h]
 * 00000001409FCDE0: call    KeGuardDispatchICall
 * 00000001409FCDE5: xor     r15d, r15d
 * 00000001409FCDE8: test    eax, eax
 * 00000001409FCDEA: js      loc_1409FC31B
 * 00000001409FCDF0: mov     rcx, [rbp+0BE0h+var_970]
 * 00000001409FCDF7: cmp     rcx, [r14+18h]
 * 00000001409FCDFB: jz      short loc_1409FCE45
 * 00000001409FCDFD: xor     eax, eax
 * 00000001409FCDFF: cmp     [rsi+8F8h], eax
 * 00000001409FCE05: jnz     short loc_1409FCE45
 * 00000001409FCE07: lea     rax, [rsi+r13]
 * 00000001409FCE0B: xor     edx, edx
 * 00000001409FCE0D: mov     [rsi+900h], rax
 * 00000001409FCE14: lea     rax, [r14+r12]
 * 00000001409FCE18: mov     [rsi+908h], rax
 * 00000001409FCE1F: movsxd  rax, dword ptr [r14]
 * 00000001409FCE22: mov     [rsi+910h], rax
 * 00000001409FCE29: mov     [rsi+918h], rcx
 * 00000001409FCE30: mov     rcx, rsi
 * 00000001409FCE33: mov     [rsi+8F8h], ebx
 * 00000001409FCE39: call    $$b8
 * 00000001409FCE3E: mov     rcx, [rbp+0BE0h+var_970]
 * 00000001409FCE45: mov     rax, [rsi+1E0h]
 * 00000001409FCE4C: call    KeGuardDispatchICall
 * 00000001409FCE51: jmp     loc_1409FC31B
 * 00000001409FCE56: mov     cr8, r15
 * 00000001409FCE5A: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409FCE5F: mov     eax, [rsi+8F8h]
 * 00000001409FCE65: xor     edx, edx
 * 00000001409FCE67: mov     ecx, [r14+14h]
 * 00000001409FCE6B: test    eax, eax
 * 00000001409FCE6D: jnz     short loc_1409FCE85
 * 00000001409FCE6F: mov     eax, ebx
 * 00000001409FCE71: xor     rcx, rax
 * 00000001409FCE74: mov     rax, [rsi+590h]
 * 00000001409FCE7B: mov     [rax+18h], rcx
 * 00000001409FCE7F: mov     eax, [rsi+8F8h]
 * 00000001409FCE85: mov     rcx, [r14+8]
 * 00000001409FCE89: mov     r13, 0A3A03F5891C8B4E8h
 * 00000001409FCE93: mov     r12, 0B3B74BDEE4453415h
 * 00000001409FCE9D: mov     ebx, 1
 * 00000001409FCEA2: test    eax, eax
 * 00000001409FCEA4: jnz     loc_1409FCD89
 * 00000001409FCEAA: lea     rax, [rsi+r13]
 * 00000001409FCEAE: mov     [rsi+900h], rax
 * 00000001409FCEB5: lea     rax, [r14+r12]
 * 00000001409FCEB9: mov     [rsi+908h], rax
 * 00000001409FCEC0: movsxd  rax, dword ptr [r14]
 * 00000001409FCEC3: mov     [rsi+910h], rax
 * 00000001409FCECA: mov     [rsi+918h], rcx
 * 00000001409FCED1: mov     rcx, rsi
 * 00000001409FCED4: mov     [rsi+8F8h], ebx
 * 00000001409FCEDA: call    $$b8
 * 00000001409FCEDF: jmp     loc_1409FCD89
 * 00000001409FCEE4: mov     rax, [rsi+1A0h]
 * 00000001409FCEEB: lea     rcx, [rbp+0BE0h+var_1A0]
 * 00000001409FCEF2: mov     edx, [r13+1Ch]
 * 00000001409FCEF6: call    KeGuardDispatchICall
 * 00000001409FCEFB: mov     rax, [rsi+1D0h]
 * 00000001409FCF02: lea     rdx, [rbp+0BE0h+var_320]
 * 00000001409FCF09: lea     rcx, [rbp+0BE0h+var_1A0]
 * 00000001409FCF10: call    KeGuardDispatchICall
 * 00000001409FCF15: xor     eax, eax
 * 00000001409FCF17: mov     ebx, eax
 * 00000001409FCF19: cmp     [r13+18h], eax
 * 00000001409FCF1D: jbe     loc_1409FD02F
 * 00000001409FCF23: mov     eax, ebx
 * 00000001409FCF25: lea     r10, [rax+rax*2]
 * 00000001409FCF29: mov     r9d, [r13+r10*8+40h]
 * 00000001409FCF2E: test    [rsi+87Bh], r14b
 * 00000001409FCF35: jz      short loc_1409FCF5A
 * 00000001409FCF37: mov     eax, 0C0000082h
 * 00000001409FCF3C: cmp     r9d, eax
 * 00000001409FCF3F: jnz     short loc_1409FCF5A
 * 00000001409FCF41: mov     eax, gs:1A4h
 * 00000001409FCF49: cmp     eax, [rsi+8F0h]
 * 00000001409FCF4F: jnz     short loc_1409FCF5A
 * 00000001409FCF51: mov     rdx, [rsi+8E8h]
 * 00000001409FCF58: jmp     short loc_1409FCF66
 * 00000001409FCF5A: mov     ecx, r9d
 * 00000001409FCF5D: rdmsr
 * 00000001409FCF5F: shl     rdx, 20h
 * 00000001409FCF63: or      rdx, rax
 * 00000001409FCF66: mov     r8, [r13+r10*8+30h]
 * 00000001409FCF6B: mov     rcx, [r13+r10*8+38h]
 * 00000001409FCF70: and     rdx, r8
 * 00000001409FCF73: cmp     rdx, rcx
 * 00000001409FCF76: jz      loc_1409FCFFE
 * 00000001409FCF7C: mov     r8d, [r13+1Ch]
 * 00000001409FCF80: mov     eax, [rsi+8F8h]
 * 00000001409FCF86: shl     r8, 20h
 * 00000001409FCF8A: or      r8, r9
 * 00000001409FCF8D: test    eax, eax
 * 00000001409FCF8F: jnz     loc_1409FD01C
 * 00000001409FCF95: mov     rax, [rsi+590h]
 * 00000001409FCF9C: xor     rcx, rdx
 * 00000001409FCF9F: mov     [rax+18h], rcx
 * 00000001409FCFA3: mov     eax, [rsi+8F8h]
 * 00000001409FCFA9: test    eax, eax
 * 00000001409FCFAB: jnz     short loc_1409FD01C
 * 00000001409FCFAD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FCFB7: xor     edx, edx
 * 00000001409FCFB9: add     rax, rsi
 * 00000001409FCFBC: mov     rcx, rsi
 * 00000001409FCFBF: mov     [rsi+900h], rax
 * 00000001409FCFC6: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FCFD0: add     rax, r13
 * 00000001409FCFD3: mov     [rsi+908h], rax
 * 00000001409FCFDA: movsxd  rax, dword ptr [r13+0]
 * 00000001409FCFDE: mov     [rsi+910h], rax
 * 00000001409FCFE5: mov     eax, 1
 * 00000001409FCFEA: mov     [rsi+918h], r8
 * 00000001409FCFF1: mov     [rsi+8F8h], eax
 * 00000001409FCFF7: call    $$b8
 * 00000001409FCFFC: jmp     short loc_1409FD01C
 * 00000001409FCFFE: test    dword ptr [rsi+994h], 200h
 * 00000001409FD008: jz      short loc_1409FD01C
 * 00000001409FD00A: cmp     r8, 0FFFFFFFFFFFFFFFFh
 * 00000001409FD00E: jnz     short loc_1409FD01C
 * 00000001409FD010: mov     rax, rdx
 * 00000001409FD013: mov     ecx, r9d
 * 00000001409FD016: shr     rdx, 20h
 * 00000001409FD01A: wrmsr
 * 00000001409FD01C: inc     ebx
 * 00000001409FD01E: cmp     ebx, [r13+18h]
 * 00000001409FD022: jb      loc_1409FCF23
 * 00000001409FD028: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FD02F: mov     rax, [rsi+198h]
 * 00000001409FD036: lea     rcx, [rbp+0BE0h+var_320]
 * 00000001409FD03D: call    KeGuardDispatchICall
 * 00000001409FD042: mov     eax, [r13+18h]
 * 00000001409FD046: shl     eax, 0Fh
 * 00000001409FD049: add     [rsi+828h], eax
 * 00000001409FD04F: jmp     loc_1409FC318
 * 00000001409FD054: mov     ecx, [rsi+830h]
 * 00000001409FD05A: test    dl, cl
 * 00000001409FD05C: jz      loc_1409FC318
 * 00000001409FD062: mov     r12d, 40000000h
 * 00000001409FD068: test    [rsi+990h], r12d
 * 00000001409FD06F: jnz     short loc_1409FD087
 * 00000001409FD071: mov     r14d, eax
 * 00000001409FD074: and     ecx, 3
 * 00000001409FD077: cmp     cl, 3
 * 00000001409FD07A: setz    r14b
 * 00000001409FD07E: mov     dword ptr [rbp+0BE0h+arg_8], r14d
 * 00000001409FD085: jmp     short loc_1409FD0DB
 * 00000001409FD087: rdtsc
 * 00000001409FD089: shl     rdx, 20h
 * 00000001409FD08D: or      rax, rdx
 * 00000001409FD090: mov     rcx, rax
 * 00000001409FD093: ror     rax, 3
 * 00000001409FD097: xor     rcx, rax
 * 00000001409FD09A: mov     rax, 7010008004002001h
 * 00000001409FD0A4: mul     rcx
 * 00000001409FD0A7: mov     rcx, rdx
 * 00000001409FD0AA: mov     [rbp+0BE0h+var_358], rdx
 * 00000001409FD0B1: xor     rcx, rax
 * 00000001409FD0B4: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001409FD0BE: mul     rcx
 * 00000001409FD0C1: shr     rdx, 1
 * 00000001409FD0C4: lea     rax, [rdx+rdx*2]
 * 00000001409FD0C8: cmp     rcx, rax
 * 00000001409FD0CB: mov     eax, 0
 * 00000001409FD0D0: setz    al
 * 00000001409FD0D3: mov     dword ptr [rbp+0BE0h+arg_8], eax
 * 00000001409FD0D9: xor     eax, eax
 * 00000001409FD0DB: mov     rbx, [rsi+548h]
 * 00000001409FD0E2: mov     r15d, eax
 * 00000001409FD0E5: mov     [rbp+0BE0h+var_C58], eax
 * 00000001409FD0E8: mov     rax, [rsi+178h]
 * 00000001409FD0EF: call    KeGuardDispatchICall
 * 00000001409FD0F4: test    [rsi+990h], r12d
 * 00000001409FD0FB: jnz     short loc_1409FD116
 * 00000001409FD0FD: mov     ecx, [rsi+950h]
 * 00000001409FD103: cmp     ecx, 7
 * 00000001409FD106: jnb     short loc_1409FD116
 * 00000001409FD108: mov     r12d, 1
 * 00000001409FD10E: mov     r14d, r12d
 * 00000001409FD111: shl     r14b, cl
 * 00000001409FD114: jmp     short loc_1409FD134
 * 00000001409FD116: mov     rax, [rsi+128h]
 * 00000001409FD11D: xor     edx, edx
 * 00000001409FD11F: mov     rcx, [rsi+0A00h]
 * 00000001409FD126: call    KeGuardDispatchICall
 * 00000001409FD12B: mov     r14b, 80h
 * 00000001409FD12E: mov     r12d, 1
 * 00000001409FD134: mov     rax, [rsi+138h]
 * 00000001409FD13B: xor     edx, edx
 * 00000001409FD13D: mov     rcx, rbx
 * 00000001409FD140: call    KeGuardDispatchICall
 * 00000001409FD145: mov     r8, [rsi+520h]
 * 00000001409FD14C: mov     rdx, [r8]
 * 00000001409FD14F: cmp     rdx, r8
 * 00000001409FD152: jz      short loc_1409FD179
 * 00000001409FD154: mov     rax, [rsi+6B8h]
 * 00000001409FD15B: mov     rcx, rdx
 * 00000001409FD15E: sub     rcx, [rsi+6D0h]
 * 00000001409FD165: lock or [rcx+rax], r14b
 * 00000001409FD16A: mov     rdx, [rdx]
 * 00000001409FD16D: add     r15d, r12d
 * 00000001409FD170: cmp     rdx, r8
 * 00000001409FD173: jnz     short loc_1409FD154
 * 00000001409FD175: mov     [rbp+0BE0h+var_C58], r15d
 * 00000001409FD179: mov     rax, [rsi+550h]
 * 00000001409FD180: mov     r15d, 4
 * 00000001409FD186: mov     edi, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FD18C: mov     r13, [rax]
 * 00000001409FD18F: mov     rax, [rsi+730h]
 * 00000001409FD196: mov     ebx, [rax+r13]
 * 00000001409FD19A: mov     [rsp+0CE0h+var_C88], rbx
 * 00000001409FD19F: mov     rax, [rsi+108h]
 * 00000001409FD1A6: mov     rdx, r15
 * 00000001409FD1A9: mov     rcx, r13
 * 00000001409FD1AC: call    KeGuardDispatchICall
 * 00000001409FD1B1: mov     r12, rax
 * 00000001409FD1B4: xor     eax, eax
 * 00000001409FD1B6: test    r12, r12
 * 00000001409FD1B9: jz      loc_1409FD329
 * 00000001409FD1BF: mov     rbx, [r12]
 * 00000001409FD1C3: sar     rbx, 10h
 * 00000001409FD1C7: and     rbx, 0FFFFFFFFFFFFFFF0h
 * 00000001409FD1CB: mov     al, [rbx]
 * 00000001409FD1CD: and     al, 7Fh
 * 00000001409FD1CF: cmp     al, 3
 * 00000001409FD1D1: jnz     loc_1409FD26B
 * 00000001409FD1D7: mov     r8, [rsi+6B8h]
 * 00000001409FD1DE: mov     rdx, r8
 * 00000001409FD1E1: test    [rbx+r8], r14b
 * 00000001409FD1E5: jnz     short loc_1409FD25D
 * 00000001409FD1E7: mov     rax, [rsi+6C0h]
 * 00000001409FD1EE: mov     ecx, [rbx+rax]
 * 00000001409FD1F1: test    [rsi+6D8h], ecx
 * 00000001409FD1F7: jz      short loc_1409FD25D
 * 00000001409FD1F9: xor     eax, eax
 * 00000001409FD1FB: cmp     [rsi+8F8h], eax
 * 00000001409FD201: jnz     short loc_1409FD25D
 * 00000001409FD203: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FD208: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD212: add     rax, rsi
 * 00000001409FD215: xor     edx, edx
 * 00000001409FD217: mov     [rsi+900h], rax
 * 00000001409FD21E: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FD228: add     rax, rcx
 * 00000001409FD22B: mov     [rsi+908h], rax
 * 00000001409FD232: movsxd  rax, dword ptr [rcx]
 * 00000001409FD235: mov     rcx, rsi
 * 00000001409FD238: mov     [rsi+910h], rax
 * 00000001409FD23F: mov     eax, 1
 * 00000001409FD244: mov     [rsi+918h], rbx
 * 00000001409FD24B: mov     [rsi+8F8h], eax
 * 00000001409FD251: call    $$b8
 * 00000001409FD256: mov     rdx, [rsi+6B8h]
 * 00000001409FD25D: mov     al, r14b
 * 00000001409FD260: not     al
 * 00000001409FD262: lock and [rbx+rdx], al
 * 00000001409FD266: jmp     loc_1409FD312
 * 00000001409FD26B: cmp     al, 6
 * 00000001409FD26D: jnz     short loc_1409FD2B1
 * 00000001409FD26F: test    edi, edi
 * 00000001409FD271: jz      loc_1409FD312
 * 00000001409FD277: mov     rcx, [rsi+680h]
 * 00000001409FD27E: mov     rax, [rbx+rcx+20h]
 * 00000001409FD283: cmp     rax, [rsi+320h]
 * 00000001409FD28A: jz      short loc_1409FD295
 * 00000001409FD28C: cmp     rax, [rsi+328h]
 * 00000001409FD293: jnz     short loc_1409FD2B5
 * 00000001409FD295: mov     rax, [rsi+330h]
 * 00000001409FD29C: cmp     [rbx+rcx+30h], rax
 * 00000001409FD2A1: jnz     short loc_1409FD2B5
 * 00000001409FD2A3: mov     rax, [rsi+338h]
 * 00000001409FD2AA: cmp     [rbx+rcx+28h], rax
 * 00000001409FD2AF: jmp     short loc_1409FD2B3
 * 00000001409FD2B1: test    al, al
 * 00000001409FD2B3: jz      short loc_1409FD312
 * 00000001409FD2B5: xor     eax, eax
 * 00000001409FD2B7: cmp     [rsi+8F8h], eax
 * 00000001409FD2BD: jnz     short loc_1409FD312
 * 00000001409FD2BF: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FD2C4: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD2CE: add     rax, rsi
 * 00000001409FD2D1: xor     edx, edx
 * 00000001409FD2D3: mov     [rsi+900h], rax
 * 00000001409FD2DA: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FD2E4: add     rax, rcx
 * 00000001409FD2E7: mov     [rsi+908h], rax
 * 00000001409FD2EE: movsxd  rax, dword ptr [rcx]
 * 00000001409FD2F1: mov     rcx, rsi
 * 00000001409FD2F4: mov     [rsi+910h], rax
 * 00000001409FD2FB: mov     eax, 1
 * 00000001409FD300: mov     [rsi+918h], rbx
 * 00000001409FD307: mov     [rsi+8F8h], eax
 * 00000001409FD30D: call    $$b8
 * 00000001409FD312: mov     rax, [rsi+120h]
 * 00000001409FD319: mov     rdx, r12
 * 00000001409FD31C: mov     rcx, r13
 * 00000001409FD31F: call    KeGuardDispatchICall
 * 00000001409FD324: mov     rbx, [rsp+0CE0h+var_C88]
 * 00000001409FD329: add     r15, 4
 * 00000001409FD32D: cmp     r15, rbx
 * 00000001409FD330: jb      loc_1409FD19F
 * 00000001409FD336: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FD33D: cmp     r14b, 80h
 * 00000001409FD341: jnz     short loc_1409FD358
 * 00000001409FD343: mov     rax, [rsi+130h]
 * 00000001409FD34A: xor     edx, edx
 * 00000001409FD34C: mov     rcx, [rsi+0A00h]
 * 00000001409FD353: call    KeGuardDispatchICall
 * 00000001409FD358: mov     rcx, [rsi+548h]
 * 00000001409FD35F: xor     edx, edx
 * 00000001409FD361: mov     rax, [rsi+140h]
 * 00000001409FD368: call    KeGuardDispatchICall
 * 00000001409FD36D: mov     rax, [rsi+180h]
 * 00000001409FD374: call    KeGuardDispatchICall
 * 00000001409FD379: mov     eax, [rbp+0BE0h+var_C58]
 * 00000001409FD37C: shr     rbx, 2
 * 00000001409FD380: add     eax, ebx
 * 00000001409FD382: shl     eax, 8
 * 00000001409FD385: jmp     loc_1409FD049
 * 00000001409FD38A: mov     eax, [rsi+830h]
 * 00000001409FD390: test    dl, al
 * 00000001409FD392: jnz     loc_1409FC318
 * 00000001409FD398: mov     rbx, [rsi+548h]
 * 00000001409FD39F: xor     eax, eax
 * 00000001409FD3A1: mov     r13d, eax
 * 00000001409FD3A4: mov     [rbp+0BE0h+var_C58], eax
 * 00000001409FD3A7: mov     rax, [rsi+178h]
 * 00000001409FD3AE: call    KeGuardDispatchICall
 * 00000001409FD3B3: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FD3BD: jnz     short loc_1409FD3D5
 * 00000001409FD3BF: mov     ecx, [rsi+950h]
 * 00000001409FD3C5: cmp     ecx, 7
 * 00000001409FD3C8: jnb     short loc_1409FD3D5
 * 00000001409FD3CA: mov     r14d, 1
 * 00000001409FD3D0: shl     r14b, cl
 * 00000001409FD3D3: jmp     short loc_1409FD3ED
 * 00000001409FD3D5: mov     rax, [rsi+128h]
 * 00000001409FD3DC: xor     edx, edx
 * 00000001409FD3DE: mov     rcx, [rsi+0A00h]
 * 00000001409FD3E5: call    KeGuardDispatchICall
 * 00000001409FD3EA: mov     r14b, 80h
 * 00000001409FD3ED: mov     rax, [rsi+138h]
 * 00000001409FD3F4: xor     edx, edx
 * 00000001409FD3F6: mov     rcx, rbx
 * 00000001409FD3F9: mov     dword ptr [rbp+0BE0h+arg_8], r14d
 * 00000001409FD400: call    KeGuardDispatchICall
 * 00000001409FD405: mov     r12, [rsi+520h]
 * 00000001409FD40C: mov     r15, [r12]
 * 00000001409FD410: cmp     r15, r12
 * 00000001409FD413: jz      loc_1409FD4D1
 * 00000001409FD419: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FD41E: mov     rbx, r15
 * 00000001409FD421: sub     rbx, [rsi+6D0h]
 * 00000001409FD428: cmp     r14b, 80h
 * 00000001409FD42C: jz      short loc_1409FD4AB
 * 00000001409FD42E: mov     rax, [rsi+6B8h]
 * 00000001409FD435: test    [rbx+rax], r14b
 * 00000001409FD439: jz      short loc_1409FD4AB
 * 00000001409FD43B: mov     rax, [rsi+6C0h]
 * 00000001409FD442: mov     ecx, [rbx+rax]
 * 00000001409FD445: test    [rsi+6D8h], ecx
 * 00000001409FD44B: jz      short loc_1409FD4AB
 * 00000001409FD44D: xor     eax, eax
 * 00000001409FD44F: cmp     [rsi+8F8h], eax
 * 00000001409FD455: jnz     short loc_1409FD4AB
 * 00000001409FD457: mov     ecx, 1
 * 00000001409FD45C: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD466: add     rax, rsi
 * 00000001409FD469: xor     edx, edx
 * 00000001409FD46B: mov     [rsi+900h], rax
 * 00000001409FD472: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FD47C: add     rax, rdi
 * 00000001409FD47F: mov     [rsi+908h], rax
 * 00000001409FD486: movsxd  rax, dword ptr [rdi]
 * 00000001409FD489: mov     [rsi+910h], rax
 * 00000001409FD490: mov     rax, rbx
 * 00000001409FD493: or      rax, rcx
 * 00000001409FD496: mov     [rsi+918h], rax
 * 00000001409FD49D: mov     [rsi+8F8h], ecx
 * 00000001409FD4A3: mov     rcx, rsi
 * 00000001409FD4A6: call    $$b8
 * 00000001409FD4AB: mov     rax, [rsi+6B8h]
 * 00000001409FD4B2: lock or [rbx+rax], r14b
 * 00000001409FD4B7: mov     r15, [r15]
 * 00000001409FD4BA: inc     r13d
 * 00000001409FD4BD: cmp     r15, r12
 * 00000001409FD4C0: jnz     loc_1409FD41E
 * 00000001409FD4C6: mov     [rbp+0BE0h+var_C58], r13d
 * 00000001409FD4CA: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FD4D1: mov     rcx, [rsi+500h]
 * 00000001409FD4D8: mov     rax, cr8
 * 00000001409FD4DC: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FD4E1: mov     eax, 0Ch
 * 00000001409FD4E6: mov     cr8, rax
 * 00000001409FD4EA: mov     rax, [rsi+148h]
 * 00000001409FD4F1: lea     rdx, [rbp+0BE0h+var_128]
 * 00000001409FD4F8: call    KeGuardDispatchICall
 * 00000001409FD4FD: mov     r13, [rsi+4F8h]
 * 00000001409FD504: mov     r15, [r13+0]
 * 00000001409FD508: cmp     r15, r13
 * 00000001409FD50B: jz      loc_1409FD5BF
 * 00000001409FD511: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FD516: mov     r12b, r14b
 * 00000001409FD519: movzx   edx, r14b
 * 00000001409FD51D: not     r12b
 * 00000001409FD520: mov     [rbp+0BE0h+var_BF0], edx
 * 00000001409FD523: xor     r14d, r14d
 * 00000001409FD526: mov     rcx, [rsi+6B8h]
 * 00000001409FD52D: mov     rbx, r15
 * 00000001409FD530: sub     rbx, [rsi+6B0h]
 * 00000001409FD537: movsx   eax, byte ptr [rcx+rbx]
 * 00000001409FD53B: test    edx, eax
 * 00000001409FD53D: jnz     short loc_1409FD5A0
 * 00000001409FD53F: cmp     [rsi+8F8h], r14d
 * 00000001409FD546: jnz     short loc_1409FD5A0
 * 00000001409FD548: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD552: xor     edx, edx
 * 00000001409FD554: add     rax, rsi
 * 00000001409FD557: mov     rcx, rsi
 * 00000001409FD55A: mov     [rsi+900h], rax
 * 00000001409FD561: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FD56B: add     rax, rdi
 * 00000001409FD56E: mov     [rsi+908h], rax
 * 00000001409FD575: movsxd  rax, dword ptr [rdi]
 * 00000001409FD578: mov     [rsi+910h], rax
 * 00000001409FD57F: mov     eax, 1
 * 00000001409FD584: mov     [rsi+918h], rbx
 * 00000001409FD58B: mov     [rsi+8F8h], eax
 * 00000001409FD591: call    $$b8
 * 00000001409FD596: mov     rcx, [rsi+6B8h]
 * 00000001409FD59D: mov     edx, [rbp+0BE0h+var_BF0]
 * 00000001409FD5A0: lock and [rbx+rcx], r12b
 * 00000001409FD5A5: mov     r15, [r15]
 * 00000001409FD5A8: cmp     r15, r13
 * 00000001409FD5AB: jnz     loc_1409FD526
 * 00000001409FD5B1: mov     r14d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FD5B8: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FD5BF: mov     rax, [rsi+188h]
 * 00000001409FD5C6: lea     rcx, [rbp+0BE0h+var_128]
 * 00000001409FD5CD: call    KeGuardDispatchICall
 * 00000001409FD5D2: movzx   eax, byte ptr [rsp+0CE0h+var_C88]
 * 00000001409FD5D7: mov     cr8, rax
 * 00000001409FD5DB: cmp     r14b, 80h
 * 00000001409FD5DF: jnz     short loc_1409FD5F6
 * 00000001409FD5E1: mov     rax, [rsi+130h]
 * 00000001409FD5E8: xor     edx, edx
 * 00000001409FD5EA: mov     rcx, [rsi+0A00h]
 * 00000001409FD5F1: call    KeGuardDispatchICall
 * 00000001409FD5F6: mov     rcx, [rsi+548h]
 * 00000001409FD5FD: xor     edx, edx
 * 00000001409FD5FF: mov     rax, [rsi+140h]
 * 00000001409FD606: call    KeGuardDispatchICall
 * 00000001409FD60B: mov     rax, [rsi+180h]
 * 00000001409FD612: call    KeGuardDispatchICall
 * 00000001409FD617: mov     eax, [rbp+0BE0h+var_C58]
 * 00000001409FD61A: jmp     loc_1409FD382
 * 00000001409FD61F: mov     r14, [r13+8]
 * 00000001409FD623: mov     r8d, [r13+10h]
 * 00000001409FD627: mov     r9, r14
 * 00000001409FD62A: add     [rsi+828h], r8d
 * 00000001409FD631: mov     rax, r14
 * 00000001409FD634: mov     r11d, [rsi+814h]
 * 00000001409FD63B: mov     r15, [rsi+818h]
 * 00000001409FD642: lea     rcx, [r14+r8]
 * 00000001409FD646: cmp     r14, rcx
 * 00000001409FD649: jnb     short loc_1409FD65B
 * 00000001409FD64B: mov     edx, 40h ; '@'
 * 00000001409FD650: prefetchnta byte ptr [rax]
 * 00000001409FD653: add     rax, rdx
 * 00000001409FD656: cmp     rax, rcx
 * 00000001409FD659: jb      short loc_1409FD650
 * 00000001409FD65B: mov     r10d, r8d
 * 00000001409FD65E: mov     rbx, r15
 * 00000001409FD661: shr     r10d, 7
 * 00000001409FD665: mov     r12d, 1
 * 00000001409FD66B: test    r10d, r10d
 * 00000001409FD66E: jz      short loc_1409FD6DA
 * 00000001409FD670: mov     rsi, 7010008004002001h
 * 00000001409FD67A: mov     edx, 8
 * 00000001409FD67F: mov     rax, [r9]
 * 00000001409FD682: mov     ecx, r11d
 * 00000001409FD685: xor     rax, rbx
 * 00000001409FD688: mov     rbx, [r9+8]
 * 00000001409FD68C: rol     rax, cl
 * 00000001409FD68F: add     r9, 10h
 * 00000001409FD693: xor     rbx, rax
 * 00000001409FD696: rol     rbx, cl
 * 00000001409FD699: sub     rdx, r12
 * 00000001409FD69C: jnz     short loc_1409FD67F
 * 00000001409FD69E: mov     rcx, r9
 * 00000001409FD6A1: sub     rcx, r14
 * 00000001409FD6A4: xor     rcx, r15
 * 00000001409FD6A7: mov     rax, rcx
 * 00000001409FD6AA: rol     rax, 11h
 * 00000001409FD6AE: xor     rcx, rax
 * 00000001409FD6B1: mov     rax, rsi
 * 00000001409FD6B4: mul     rcx
 * 00000001409FD6B7: mov     [rbp+0BE0h+var_350], rdx
 * 00000001409FD6BE: xor     edx, eax
 * 00000001409FD6C0: xor     r11d, edx
 * 00000001409FD6C3: mov     eax, 0FFFFFFFFh
 * 00000001409FD6C8: and     r11d, 3Fh
 * 00000001409FD6CC: cmovz   r11d, r12d
 * 00000001409FD6D0: add     r10d, eax
 * 00000001409FD6D3: jnz     short loc_1409FD67A
 * 00000001409FD6D5: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FD6DA: and     r8d, 7Fh
 * 00000001409FD6DE: cmp     r8d, 8
 * 00000001409FD6E2: jb      short loc_1409FD701
 * 00000001409FD6E4: mov     edx, r8d
 * 00000001409FD6E7: shr     rdx, 3
 * 00000001409FD6EB: xor     rbx, [r9]
 * 00000001409FD6EE: mov     ecx, r11d
 * 00000001409FD6F1: rol     rbx, cl
 * 00000001409FD6F4: add     r9, 8
 * 00000001409FD6F8: add     r8d, 0FFFFFFF8h
 * 00000001409FD6FC: sub     rdx, r12
 * 00000001409FD6FF: jnz     short loc_1409FD6EB
 * 00000001409FD701: test    r8d, r8d
 * 00000001409FD704: jz      short loc_1409FD725
 * 00000001409FD706: mov     esi, 0FFFFFFFFh
 * 00000001409FD70B: movzx   eax, byte ptr [r9]
 * 00000001409FD70F: mov     ecx, r11d
 * 00000001409FD712: xor     rbx, rax
 * 00000001409FD715: add     r9, r12
 * 00000001409FD718: rol     rbx, cl
 * 00000001409FD71B: add     r8d, esi
 * 00000001409FD71E: jnz     short loc_1409FD70B
 * 00000001409FD720: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FD725: mov     rax, rbx
 * 00000001409FD728: jmp     short loc_1409FD72C
 * 00000001409FD72A: xor     ebx, eax
 * 00000001409FD72C: shr     rax, 1Fh
 * 00000001409FD730: test    rax, rax
 * 00000001409FD733: jnz     short loc_1409FD72A
 * 00000001409FD735: btr     ebx, 1Fh
 * 00000001409FD739: mov     r12d, eax
 * 00000001409FD73C: cmp     ebx, [r13+14h]
 * 00000001409FD740: jz      loc_1409FC318
 * 00000001409FD746: cmp     [r13+0], eax
 * 00000001409FD74A: jnz     short loc_1409FD757
 * 00000001409FD74C: cmp     [r13+18h], eax
 * 00000001409FD750: lea     ecx, [rax+1]
 * 00000001409FD753: cmovnz  r12d, ecx
 * 00000001409FD757: mov     ecx, [r13+10h]
 * 00000001409FD75B: mov     rdx, [r13+8]
 * 00000001409FD75F: test    rcx, rcx
 * 00000001409FD762: jz      loc_1409FD828
 * 00000001409FD768: mov     eax, [rsi+994h]
 * 00000001409FD76E: mov     r8d, 40h ; '@'
 * 00000001409FD774: test    r8b, al
 * 00000001409FD777: jz      loc_1409FD828
 * 00000001409FD77D: mov     r13, cr8
 * 00000001409FD781: lea     eax, [r8-3Eh]
 * 00000001409FD785: mov     cr8, rax
 * 00000001409FD789: mov     r14, rdx
 * 00000001409FD78C: lea     rax, [rcx-1]
 * 00000001409FD790: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FD797: add     rax, rdx
 * 00000001409FD79A: or      rax, 0FFFh
 * 00000001409FD7A0: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FD7A5: lea     rax, [r14-1]
 * 00000001409FD7A9: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FD7B0: movzx   r15d, r13b
 * 00000001409FD7B4: mov     rax, [rsi+468h]
 * 00000001409FD7BB: xor     edx, edx
 * 00000001409FD7BD: mov     rcx, r14
 * 00000001409FD7C0: call    KeGuardDispatchICall
 * 00000001409FD7C5: cmp     eax, 0C000022Dh
 * 00000001409FD7CA: jnz     short loc_1409FD7F5
 * 00000001409FD7CC: test    r12d, r12d
 * 00000001409FD7CF: jnz     short loc_1409FD81F
 * 00000001409FD7D1: lea     eax, [r12+1]
 * 00000001409FD7D6: cmp     r13b, al
 * 00000001409FD7D9: ja      short loc_1409FD7F9
 * 00000001409FD7DB: movzx   r15d, r13b
 * 00000001409FD7DF: mov     cr8, r15
 * 00000001409FD7E3: mov     al, [r14]
 * 00000001409FD7E6: mov     rax, cr8
 * 00000001409FD7EA: lea     eax, [r12+2]
 * 00000001409FD7EF: mov     cr8, rax
 * 00000001409FD7F3: jmp     short loc_1409FD7B4
 * 00000001409FD7F5: test    eax, eax
 * 00000001409FD7F7: js      short loc_1409FD81F
 * 00000001409FD7F9: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409FD800: mov     r11d, 1000h
 * 00000001409FD806: add     rax, r11
 * 00000001409FD809: add     r14, r11
 * 00000001409FD80C: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FD813: cmp     rax, [rsp+0CE0h+var_C88]
 * 00000001409FD818: jnz     short loc_1409FD7B0
 * 00000001409FD81A: jmp     loc_1409FC666
 * 00000001409FD81F: mov     cr8, r15
 * 00000001409FD823: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FD828: mov     eax, [rsi+8F8h]
 * 00000001409FD82E: xor     r15d, r15d
 * 00000001409FD831: mov     ecx, [r13+14h]
 * 00000001409FD835: test    eax, eax
 * 00000001409FD837: jnz     loc_1409FC6A1
 * 00000001409FD83D: mov     eax, ebx
 * 00000001409FD83F: jmp     loc_1409FC68D
 * 00000001409FD844: cmp     r10d, 0Eh
 * 00000001409FD848: jle     loc_140A00B1B
 * 00000001409FD84E: mov     ebx, 0Fh
 * 00000001409FD853: cmp     r10d, ebx
 * 00000001409FD856: jz      loc_140A009C7
 * 00000001409FD85C: cmp     r10d, 15h
 * 00000001409FD860: jz      loc_140A008CA
 * 00000001409FD866: cmp     r10d, 18h
 * 00000001409FD86A: jz      loc_1409FE1B5
 * 00000001409FD870: cmp     r10d, r11d
 * 00000001409FD873: jz      loc_1409FDD77
 * 00000001409FD879: cmp     r10d, 1Ah
 * 00000001409FD87D: jz      loc_1409FDB53
 * 00000001409FD883: cmp     r10d, 1Bh
 * 00000001409FD887: jnz     loc_140A0676C
 * 00000001409FD88D: mov     eax, [rsi+830h]
 * 00000001409FD893: test    dl, al
 * 00000001409FD895: jz      loc_1409FC318
 * 00000001409FD89B: mov     r14, [rsi+5A8h]
 * 00000001409FD8A2: xor     eax, eax
 * 00000001409FD8A4: mov     r15, [rsi+5B0h]
 * 00000001409FD8AB: mov     rbx, [rsi+548h]
 * 00000001409FD8B2: mov     [rsp+0CE0h+var_C78], eax
 * 00000001409FD8B6: mov     rax, [rsi+178h]
 * 00000001409FD8BD: mov     [rbp+0BE0h+var_C50], r14
 * 00000001409FD8C1: mov     [rsp+0CE0h+var_C88], r15
 * 00000001409FD8C6: call    KeGuardDispatchICall
 * 00000001409FD8CB: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FD8D5: jnz     short loc_1409FD8F0
 * 00000001409FD8D7: mov     ecx, [rsi+950h]
 * 00000001409FD8DD: cmp     ecx, 7
 * 00000001409FD8E0: jnb     short loc_1409FD8F0
 * 00000001409FD8E2: mov     r12d, 1
 * 00000001409FD8E8: mov     r13d, r12d
 * 00000001409FD8EB: shl     r13b, cl
 * 00000001409FD8EE: jmp     short loc_1409FD90E
 * 00000001409FD8F0: mov     rax, [rsi+128h]
 * 00000001409FD8F7: xor     edx, edx
 * 00000001409FD8F9: mov     rcx, [rsi+0A00h]
 * 00000001409FD900: call    KeGuardDispatchICall
 * 00000001409FD905: mov     r13b, 80h
 * 00000001409FD908: mov     r12d, 1
 * 00000001409FD90E: mov     rax, [rsi+138h]
 * 00000001409FD915: xor     edx, edx
 * 00000001409FD917: mov     rcx, rbx
 * 00000001409FD91A: mov     [rbp+0BE0h+var_C58], r13d
 * 00000001409FD91E: call    KeGuardDispatchICall
 * 00000001409FD923: mov     rax, [rsi+138h]
 * 00000001409FD92A: xor     edx, edx
 * 00000001409FD92C: mov     rcx, r14
 * 00000001409FD92F: call    KeGuardDispatchICall
 * 00000001409FD934: mov     r9, [rsi+5A0h]
 * 00000001409FD93B: xor     eax, eax
 * 00000001409FD93D: mov     r10d, eax
 * 00000001409FD940: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409FD944: mov     r8, [r9]
 * 00000001409FD947: cmp     r8, r9
 * 00000001409FD94A: jz      short loc_1409FD99E
 * 00000001409FD94C: lea     rdx, [r8-18h]
 * 00000001409FD950: cmp     rdx, r15
 * 00000001409FD953: jz      short loc_1409FD98B
 * 00000001409FD955: mov     rax, [rsi+738h]
 * 00000001409FD95C: mov     rdx, [rdx+rax]
 * 00000001409FD960: mov     rax, [rsi+6C0h]
 * 00000001409FD967: mov     ecx, [rdx+rax]
 * 00000001409FD96A: test    [rsi+6D8h], ecx
 * 00000001409FD970: jnz     short loc_1409FD97F
 * 00000001409FD972: test    r10, r10
 * 00000001409FD975: mov     rax, rdx
 * 00000001409FD978: cmovnz  rax, r12
 * 00000001409FD97C: mov     r10, rax
 * 00000001409FD97F: mov     rax, [rsi+6B8h]
 * 00000001409FD986: lock or [rdx+rax], r13b
 * 00000001409FD98B: mov     r8, [r8]
 * 00000001409FD98E: cmp     r8, r9
 * 00000001409FD991: jnz     short loc_1409FD94C
 * 00000001409FD993: mov     [rbp+0BE0h+var_C60], r10
 * 00000001409FD997: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FD99E: mov     r12, [rsi+520h]
 * 00000001409FD9A5: mov     r14, [r12]
 * 00000001409FD9A9: cmp     r14, r12
 * 00000001409FD9AC: jz      loc_1409FDA9E
 * 00000001409FD9B2: mov     rdi, [rsp+0CE0h+var_C88]
 * 00000001409FD9B7: mov     r15b, r13b
 * 00000001409FD9BA: movzx   r8d, r13b
 * 00000001409FD9BE: not     r15b
 * 00000001409FD9C1: mov     r13d, [rsp+0CE0h+var_C78]
 * 00000001409FD9C6: mov     dword ptr [rbp+0BE0h+arg_8], r8d
 * 00000001409FD9CD: mov     rdx, [rsi+6B8h]
 * 00000001409FD9D4: mov     rbx, r14
 * 00000001409FD9D7: sub     rbx, [rsi+6D0h]
 * 00000001409FD9DE: mov     rcx, rdx
 * 00000001409FD9E1: movsx   eax, byte ptr [rdx+rbx]
 * 00000001409FD9E5: test    r8d, eax
 * 00000001409FD9E8: jnz     loc_1409FDA6E
 * 00000001409FD9EE: mov     rax, [rsi+6C8h]
 * 00000001409FD9F5: mov     r8, [rbx+rax]
 * 00000001409FD9F9: xor     eax, eax
 * 00000001409FD9FB: test    r8, r8
 * 00000001409FD9FE: jz      short loc_1409FDA67
 * 00000001409FDA00: cmp     r8, rdi
 * 00000001409FDA03: jz      short loc_1409FDA67
 * 00000001409FDA05: cmp     [rsi+8F8h], eax
 * 00000001409FDA0B: jnz     short loc_1409FDA67
 * 00000001409FDA0D: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FDA12: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FDA1C: add     rax, rsi
 * 00000001409FDA1F: xor     edx, edx
 * 00000001409FDA21: mov     [rsi+900h], rax
 * 00000001409FDA28: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FDA32: add     rax, rcx
 * 00000001409FDA35: mov     [rsi+908h], rax
 * 00000001409FDA3C: movsxd  rax, dword ptr [rcx]
 * 00000001409FDA3F: mov     rcx, rsi
 * 00000001409FDA42: mov     [rsi+910h], rax
 * 00000001409FDA49: mov     eax, 1
 * 00000001409FDA4E: mov     [rsi+918h], rbx
 * 00000001409FDA55: mov     [rsi+8F8h], eax
 * 00000001409FDA5B: call    $$b8
 * 00000001409FDA60: mov     rcx, [rsi+6B8h]
 * 00000001409FDA67: mov     r8d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FDA6E: lock and [rcx+rbx], r15b
 * 00000001409FDA73: mov     r14, [r14]
 * 00000001409FDA76: mov     ecx, 1
 * 00000001409FDA7B: add     r13d, ecx
 * 00000001409FDA7E: cmp     r14, r12
 * 00000001409FDA81: jnz     loc_1409FD9CD
 * 00000001409FDA87: mov     r15, [rsp+0CE0h+var_C88]
 * 00000001409FDA8C: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FDA93: mov     [rsp+0CE0h+var_C78], r13d
 * 00000001409FDA98: mov     r13d, [rbp+0BE0h+var_C58]
 * 00000001409FDA9C: jmp     short loc_1409FDAA3
 * 00000001409FDA9E: mov     ecx, 1
 * 00000001409FDAA3: mov     rdx, [rbp+0BE0h+var_C60]
 * 00000001409FDAA7: test    rdx, rdx
 * 00000001409FDAAA: jz      short loc_1409FDAFC
 * 00000001409FDAAC: cmp     rdx, rcx
 * 00000001409FDAAF: jz      short loc_1409FDAC3
 * 00000001409FDAB1: mov     rax, [rsi+6B8h]
 * 00000001409FDAB8: mov     cl, r13b
 * 00000001409FDABB: not     cl
 * 00000001409FDABD: lock and [rdx+rax], cl
 * 00000001409FDAC1: jmp     short loc_1409FDAFC
 * 00000001409FDAC3: mov     r10, [rsi+5A0h]
 * 00000001409FDACA: mov     r9, [r10]
 * 00000001409FDACD: jmp     short loc_1409FDAF7
 * 00000001409FDACF: lea     r8, [r9-18h]
 * 00000001409FDAD3: cmp     r8, r15
 * 00000001409FDAD6: jz      short loc_1409FDAF4
 * 00000001409FDAD8: mov     rax, [rsi+738h]
 * 00000001409FDADF: mov     dl, r13b
 * 00000001409FDAE2: not     dl
 * 00000001409FDAE4: mov     r8, [r8+rax]
 * 00000001409FDAE8: mov     rax, [rsi+6B8h]
 * 00000001409FDAEF: lock and [r8+rax], dl
 * 00000001409FDAF4: mov     r9, [r9]
 * 00000001409FDAF7: cmp     r9, r10
 * 00000001409FDAFA: jnz     short loc_1409FDACF
 * 00000001409FDAFC: mov     rax, [rsi+140h]
 * 00000001409FDB03: xor     edx, edx
 * 00000001409FDB05: mov     rcx, [rbp+0BE0h+var_C50]
 * 00000001409FDB09: call    KeGuardDispatchICall
 * 00000001409FDB0E: cmp     r13b, 80h
 * 00000001409FDB12: jnz     short loc_1409FDB29
 * 00000001409FDB14: mov     rax, [rsi+130h]
 * 00000001409FDB1B: xor     edx, edx
 * 00000001409FDB1D: mov     rcx, [rsi+0A00h]
 * 00000001409FDB24: call    KeGuardDispatchICall
 * 00000001409FDB29: mov     rcx, [rsi+548h]
 * 00000001409FDB30: xor     edx, edx
 * 00000001409FDB32: mov     rax, [rsi+140h]
 * 00000001409FDB39: call    KeGuardDispatchICall
 * 00000001409FDB3E: mov     rax, [rsi+180h]
 * 00000001409FDB45: call    KeGuardDispatchICall
 * 00000001409FDB4A: mov     eax, [rsp+0CE0h+var_C78]
 * 00000001409FDB4E: jmp     loc_1409FD382
 * 00000001409FDB53: mov     eax, [rsi+830h]
 * 00000001409FDB59: test    dl, al
 * 00000001409FDB5B: jnz     loc_1409FC318
 * 00000001409FDB61: mov     r14, [rsi+5A8h]
 * 00000001409FDB68: xor     eax, eax
 * 00000001409FDB6A: mov     rbx, [rsi+548h]
 * 00000001409FDB71: mov     r13d, eax
 * 00000001409FDB74: mov     dword ptr [rbp+0BE0h+arg_8], eax
 * 00000001409FDB7A: mov     rax, [rsi+5B0h]
 * 00000001409FDB81: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FDB86: mov     rax, [rsi+178h]
 * 00000001409FDB8D: mov     [rbp+0BE0h+var_C60], r14
 * 00000001409FDB91: call    KeGuardDispatchICall
 * 00000001409FDB96: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FDBA0: jnz     short loc_1409FDBBB
 * 00000001409FDBA2: mov     ecx, [rsi+950h]
 * 00000001409FDBA8: cmp     ecx, 7
 * 00000001409FDBAB: jnb     short loc_1409FDBBB
 * 00000001409FDBAD: mov     r12d, 1
 * 00000001409FDBB3: mov     r15d, r12d
 * 00000001409FDBB6: shl     r15b, cl
 * 00000001409FDBB9: jmp     short loc_1409FDBD9
 * 00000001409FDBBB: mov     rax, [rsi+128h]
 * 00000001409FDBC2: xor     edx, edx
 * 00000001409FDBC4: mov     rcx, [rsi+0A00h]
 * 00000001409FDBCB: call    KeGuardDispatchICall
 * 00000001409FDBD0: mov     r15b, 80h
 * 00000001409FDBD3: mov     r12d, 1
 * 00000001409FDBD9: mov     rax, [rsi+138h]
 * 00000001409FDBE0: xor     edx, edx
 * 00000001409FDBE2: mov     rcx, rbx
 * 00000001409FDBE5: call    KeGuardDispatchICall
 * 00000001409FDBEA: mov     r8, [rsi+520h]
 * 00000001409FDBF1: mov     rdx, [r8]
 * 00000001409FDBF4: cmp     rdx, r8
 * 00000001409FDBF7: jz      short loc_1409FDC21
 * 00000001409FDBF9: mov     rax, [rsi+6B8h]
 * 00000001409FDC00: mov     rcx, rdx
 * 00000001409FDC03: sub     rcx, [rsi+6D0h]
 * 00000001409FDC0A: lock or [rcx+rax], r15b
 * 00000001409FDC0F: mov     rdx, [rdx]
 * 00000001409FDC12: add     r13d, r12d
 * 00000001409FDC15: cmp     rdx, r8
 * 00000001409FDC18: jnz     short loc_1409FDBF9
 * 00000001409FDC1A: mov     dword ptr [rbp+0BE0h+arg_8], r13d
 * 00000001409FDC21: mov     rax, [rsi+138h]
 * 00000001409FDC28: xor     edx, edx
 * 00000001409FDC2A: mov     rcx, r14
 * 00000001409FDC2D: call    KeGuardDispatchICall
 * 00000001409FDC32: mov     r12, [rsi+5A0h]
 * 00000001409FDC39: mov     r14, [r12]
 * 00000001409FDC3D: cmp     r14, r12
 * 00000001409FDC40: jz      loc_1409FDD19
 * 00000001409FDC46: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409FDC4B: xor     r13d, r13d
 * 00000001409FDC4E: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FDC53: mov     rcx, r14
 * 00000001409FDC56: sub     rcx, [rsi+740h]
 * 00000001409FDC5D: cmp     rcx, rax
 * 00000001409FDC60: jz      loc_1409FDCFF
 * 00000001409FDC66: mov     r8, [rsi+6B8h]
 * 00000001409FDC6D: mov     rax, [rsi+738h]
 * 00000001409FDC74: mov     rdx, r8
 * 00000001409FDC77: mov     rbx, [rcx+rax]
 * 00000001409FDC7B: test    [r8+rbx], r15b
 * 00000001409FDC7F: jnz     short loc_1409FDCF1
 * 00000001409FDC81: mov     rax, [rsi+6C0h]
 * 00000001409FDC88: mov     ecx, [rbx+rax]
 * 00000001409FDC8B: test    [rsi+6D8h], ecx
 * 00000001409FDC91: jz      short loc_1409FDCF1
 * 00000001409FDC93: cmp     [rsi+8F8h], r13d
 * 00000001409FDC9A: jnz     short loc_1409FDCF1
 * 00000001409FDC9C: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FDCA6: xor     edx, edx
 * 00000001409FDCA8: add     rax, rsi
 * 00000001409FDCAB: mov     rcx, rsi
 * 00000001409FDCAE: mov     [rsi+900h], rax
 * 00000001409FDCB5: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FDCBF: add     rax, rdi
 * 00000001409FDCC2: mov     [rsi+908h], rax
 * 00000001409FDCC9: movsxd  rax, dword ptr [rdi]
 * 00000001409FDCCC: mov     [rsi+910h], rax
 * 00000001409FDCD3: mov     eax, 1
 * 00000001409FDCD8: mov     [rsi+918h], rbx
 * 00000001409FDCDF: mov     [rsi+8F8h], eax
 * 00000001409FDCE5: call    $$b8
 * 00000001409FDCEA: mov     rdx, [rsi+6B8h]
 * 00000001409FDCF1: mov     al, r15b
 * 00000001409FDCF4: not     al
 * 00000001409FDCF6: lock and [rbx+rdx], al
 * 00000001409FDCFA: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409FDCFF: mov     r14, [r14]
 * 00000001409FDD02: cmp     r14, r12
 * 00000001409FDD05: jnz     loc_1409FDC53
 * 00000001409FDD0B: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FDD12: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FDD19: mov     rax, [rsi+140h]
 * 00000001409FDD20: xor     edx, edx
 * 00000001409FDD22: mov     rcx, [rbp+0BE0h+var_C60]
 * 00000001409FDD26: call    KeGuardDispatchICall
 * 00000001409FDD2B: cmp     r15b, 80h
 * 00000001409FDD2F: jnz     short loc_1409FDD46
 * 00000001409FDD31: mov     rax, [rsi+130h]
 * 00000001409FDD38: xor     edx, edx
 * 00000001409FDD3A: mov     rcx, [rsi+0A00h]
 * 00000001409FDD41: call    KeGuardDispatchICall
 * 00000001409FDD46: mov     rcx, [rsi+548h]
 * 00000001409FDD4D: xor     edx, edx
 * 00000001409FDD4F: mov     rax, [rsi+140h]
 * 00000001409FDD56: call    KeGuardDispatchICall
 * 00000001409FDD5B: mov     rax, [rsi+180h]
 * 00000001409FDD62: call    KeGuardDispatchICall
 * 00000001409FDD67: shl     r13d, 8
 * 00000001409FDD6B: add     [rsi+828h], r13d
 * 00000001409FDD72: jmp     loc_1409FC318
 * 00000001409FDD77: mov     r12, [rsi+530h]
 * 00000001409FDD7E: xor     eax, eax
 * 00000001409FDD80: mov     [rsp+0CE0h+var_C78], eax
 * 00000001409FDD84: mov     rax, [rsi+378h]
 * 00000001409FDD8B: call    KeGuardDispatchICall
 * 00000001409FDD90: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409FDD94: cli
 * 00000001409FDD95: mov     rcx, gs:20h
 * 00000001409FDD9E: mov     rax, [rsi+648h]
 * 00000001409FDDA5: mov     rcx, [rcx+rax]
 * 00000001409FDDA9: sti
 * 00000001409FDDAA: mov     rax, [rsi+168h]
 * 00000001409FDDB1: call    KeGuardDispatchICall
 * 00000001409FDDB6: mov     rcx, [rsi+538h]
 * 00000001409FDDBD: mov     ebx, 1
 * 00000001409FDDC2: mov     rax, [rsi+0F0h]
 * 00000001409FDDC9: mov     dl, bl
 * 00000001409FDDCB: call    KeGuardDispatchICall
 * 00000001409FDDD0: mov     rax, [rsi+610h]
 * 00000001409FDDD7: mov     rcx, [rax]
 * 00000001409FDDDA: mov     r13d, [rcx]
 * 00000001409FDDDD: lea     rdx, [rcx+10h]
 * 00000001409FDDE1: mov     [rsp+0CE0h+var_C88], rdx
 * 00000001409FDDE6: lea     rax, ds:0[r13*2]
 * 00000001409FDDEE: add     rax, r13
 * 00000001409FDDF1: lea     rax, [rdx+rax*8]
 * 00000001409FDDF5: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409FDDF9: xor     eax, eax
 * 00000001409FDDFB: mov     dword ptr [rbp+0BE0h+arg_8], eax
 * 00000001409FDE01: cmp     [rcx+0Ch], al
 * 00000001409FDE04: jz      short loc_1409FDE1A
 * 00000001409FDE06: mov     r13d, eax
 * 00000001409FDE09: mov     rax, [r12]
 * 00000001409FDE0D: jmp     short loc_1409FDE15
 * 00000001409FDE0F: mov     rax, [rax]
 * 00000001409FDE12: add     r13d, ebx
 * 00000001409FDE15: cmp     rax, r12
 * 00000001409FDE18: jnz     short loc_1409FDE0F
 * 00000001409FDE1A: mov     r8d, [rsi+810h]
 * 00000001409FDE21: mov     r15d, r13d
 * 00000001409FDE24: shl     r15d, 3
 * 00000001409FDE28: rdtsc
 * 00000001409FDE2A: shl     rdx, 20h
 * 00000001409FDE2E: mov     r9, 7010008004002001h
 * 00000001409FDE38: or      rax, rdx
 * 00000001409FDE3B: mov     rcx, rax
 * 00000001409FDE3E: ror     rax, 3
 * 00000001409FDE42: xor     rcx, rax
 * 00000001409FDE45: mov     rax, r9
 * 00000001409FDE48: mul     rcx
 * 00000001409FDE4B: mov     rbx, rdx
 * 00000001409FDE4E: mov     [rbp+0BE0h+var_348], rdx
 * 00000001409FDE55: xor     ebx, eax
 * 00000001409FDE57: and     ebx, 7FFh
 * 00000001409FDE5D: rdtsc
 * 00000001409FDE5F: shl     rdx, 20h
 * 00000001409FDE63: or      rax, rdx
 * 00000001409FDE66: mov     rcx, rax
 * 00000001409FDE69: ror     rax, 3
 * 00000001409FDE6D: xor     rcx, rax
 * 00000001409FDE70: mov     rax, r9
 * 00000001409FDE73: mul     rcx
 * 00000001409FDE76: lea     ecx, [rbx+1]
 * 00000001409FDE79: xor     rax, rdx
 * 00000001409FDE7C: mov     [rbp+0BE0h+var_340], rdx
 * 00000001409FDE83: xor     edx, edx
 * 00000001409FDE85: div     rcx
 * 00000001409FDE88: mov     rax, [rsi+0F8h]
 * 00000001409FDE8F: mov     ecx, 200h
 * 00000001409FDE94: mov     r14, rdx
 * 00000001409FDE97: lea     edx, [rbx+r15]
 * 00000001409FDE9B: call    KeGuardDispatchICall
 * 00000001409FDEA0: mov     r11, rax
 * 00000001409FDEA3: xor     eax, eax
 * 00000001409FDEA5: test    r11, r11
 * 00000001409FDEA8: jnz     short loc_1409FDEB8
 * 00000001409FDEAA: lea     ecx, [rax+1]
 * 00000001409FDEAD: add     [rsi+0A18h], ecx
 * 00000001409FDEB3: jmp     loc_1409FE00A
 * 00000001409FDEB8: mov     r10d, r14d
 * 00000001409FDEBB: mov     r9, r11
 * 00000001409FDEBE: cmp     r14d, 8
 * 00000001409FDEC2: jb      short loc_1409FDF19
 * 00000001409FDEC4: mov     r8d, r14d
 * 00000001409FDEC7: mov     esi, 1
 * 00000001409FDECC: shr     r8, 3
 * 00000001409FDED0: mov     rdi, 7010008004002001h
 * 00000001409FDEDA: rdtsc
 * 00000001409FDEDC: shl     rdx, 20h
 * 00000001409FDEE0: add     r10d, 0FFFFFFF8h
 * 00000001409FDEE4: or      rax, rdx
 * 00000001409FDEE7: mov     rcx, rax
 * 00000001409FDEEA: ror     rax, 3
 * 00000001409FDEEE: xor     rcx, rax
 * 00000001409FDEF1: mov     rax, rdi
 * 00000001409FDEF4: mul     rcx
 * 00000001409FDEF7: mov     [rbp+0BE0h+var_338], rdx
 * 00000001409FDEFE: xor     rdx, rax
 * 00000001409FDF01: mov     [r9], rdx
 * 00000001409FDF04: add     r9, 8
 * 00000001409FDF08: sub     r8, rsi
 * 00000001409FDF0B: jnz     short loc_1409FDEDA
 * 00000001409FDF0D: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FDF12: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FDF19: test    r10d, r10d
 * 00000001409FDF1C: jz      short loc_1409FDF61
 * 00000001409FDF1E: rdtsc
 * 00000001409FDF20: shl     rdx, 20h
 * 00000001409FDF24: or      rax, rdx
 * 00000001409FDF27: mov     rcx, rax
 * 00000001409FDF2A: ror     rax, 3
 * 00000001409FDF2E: xor     rcx, rax
 * 00000001409FDF31: mov     rax, 7010008004002001h
 * 00000001409FDF3B: mul     rcx
 * 00000001409FDF3E: mov     ecx, 0FFFFFFFFh
 * 00000001409FDF43: mov     [rbp+0BE0h+var_330], rdx
 * 00000001409FDF4A: xor     rdx, rax
 * 00000001409FDF4D: mov     eax, 1
 * 00000001409FDF52: mov     [r9], dl
 * 00000001409FDF55: add     r9, rax
 * 00000001409FDF58: shr     rdx, 8
 * 00000001409FDF5C: add     r10d, ecx
 * 00000001409FDF5F: jnz     short loc_1409FDF52
 * 00000001409FDF61: mov     r8d, r15d
 * 00000001409FDF64: sub     ebx, r14d
 * 00000001409FDF67: add     r8, r11
 * 00000001409FDF6A: mov     r10d, r14d
 * 00000001409FDF6D: add     r8, r10
 * 00000001409FDF70: mov     r14d, 1
 * 00000001409FDF76: mov     r15, 7010008004002001h
 * 00000001409FDF80: cmp     ebx, 8
 * 00000001409FDF83: jb      short loc_1409FDFBE
 * 00000001409FDF85: mov     r9d, ebx
 * 00000001409FDF88: shr     r9, 3
 * 00000001409FDF8C: rdtsc
 * 00000001409FDF8E: shl     rdx, 20h
 * 00000001409FDF92: add     ebx, 0FFFFFFF8h
 * 00000001409FDF95: or      rax, rdx
 * 00000001409FDF98: mov     rcx, rax
 * 00000001409FDF9B: ror     rax, 3
 * 00000001409FDF9F: xor     rcx, rax
 * 00000001409FDFA2: mov     rax, r15
 * 00000001409FDFA5: mul     rcx
 * 00000001409FDFA8: mov     [rbp+0BE0h+var_250], rdx
 * 00000001409FDFAF: xor     rdx, rax
 * 00000001409FDFB2: mov     [r8], rdx
 * 00000001409FDFB5: add     r8, 8
 * 00000001409FDFB9: sub     r9, r14
 * 00000001409FDFBC: jnz     short loc_1409FDF8C
 * 00000001409FDFBE: test    ebx, ebx
 * 00000001409FDFC0: jz      short loc_1409FDFF8
 * 00000001409FDFC2: rdtsc
 * 00000001409FDFC4: shl     rdx, 20h
 * 00000001409FDFC8: or      rax, rdx
 * 00000001409FDFCB: mov     rcx, rax
 * 00000001409FDFCE: ror     rax, 3
 * 00000001409FDFD2: xor     rcx, rax
 * 00000001409FDFD5: mov     rax, r15
 * 00000001409FDFD8: mul     rcx
 * 00000001409FDFDB: mov     [rbp+0BE0h+var_248], rdx
 * 00000001409FDFE2: xor     rdx, rax
 * 00000001409FDFE5: mov     eax, 0FFFFFFFFh
 * 00000001409FDFEA: mov     [r8], dl
 * 00000001409FDFED: add     r8, r14
 * 00000001409FDFF0: shr     rdx, 8
 * 00000001409FDFF4: add     ebx, eax
 * 00000001409FDFF6: jnz     short loc_1409FDFEA
 * 00000001409FDFF8: lea     r15, [r11+r10]
 * 00000001409FDFFC: mov     [rbp+0BE0h+var_A20], r11
 * 00000001409FE003: test    r15, r15
 * 00000001409FE006: jnz     short loc_1409FE016
 * 00000001409FE008: xor     eax, eax
 * 00000001409FE00A: mov     [rbp+0BE0h+var_A20], rax
 * 00000001409FE011: jmp     loc_1409FE152
 * 00000001409FE016: mov     rbx, [r12]
 * 00000001409FE01A: cmp     rbx, r12
 * 00000001409FE01D: jz      short loc_1409FE06C
 * 00000001409FE01F: mov     edi, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FE025: mov     rax, [rsi+750h]
 * 00000001409FE02C: mov     rcx, rbx
 * 00000001409FE02F: sub     rcx, [rsi+748h]
 * 00000001409FE036: mov     r14, [rcx+rax]
 * 00000001409FE03A: mov     rax, [rsi+2A8h]
 * 00000001409FE041: mov     rcx, r14
 * 00000001409FE044: call    KeGuardDispatchICall
 * 00000001409FE049: test    eax, eax
 * 00000001409FE04B: jnz     short loc_1409FE05A
 * 00000001409FE04D: cmp     edi, r13d
 * 00000001409FE050: jnb     short loc_1409FE05A
 * 00000001409FE052: mov     eax, edi
 * 00000001409FE054: inc     edi
 * 00000001409FE056: mov     [r15+rax*8], r14
 * 00000001409FE05A: mov     rbx, [rbx]
 * 00000001409FE05D: inc     [rsp+0CE0h+var_C78]
 * 00000001409FE061: cmp     rbx, r12
 * 00000001409FE064: jnz     short loc_1409FE025
 * 00000001409FE066: mov     dword ptr [rbp+0BE0h+arg_8], edi
 * 00000001409FE06C: mov     r14d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FE073: mov     rcx, r15
 * 00000001409FE076: mov     rax, [rsi+398h]
 * 00000001409FE07D: mov     edx, r14d
 * 00000001409FE080: call    KeGuardDispatchICall
 * 00000001409FE085: mov     r12, [rsp+0CE0h+var_C88]
 * 00000001409FE08A: mov     r13, [rbp+0BE0h+var_C60]
 * 00000001409FE08E: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FE093: mov     rbx, [r12+8]
 * 00000001409FE098: mov     rax, [rsi+2A8h]
 * 00000001409FE09F: mov     rcx, rbx
 * 00000001409FE0A2: call    KeGuardDispatchICall
 * 00000001409FE0A7: test    eax, eax
 * 00000001409FE0A9: jnz     loc_1409FE13E
 * 00000001409FE0AF: xor     eax, eax
 * 00000001409FE0B1: lea     edx, [r14-1]
 * 00000001409FE0B5: mov     r8d, eax
 * 00000001409FE0B8: test    edx, edx
 * 00000001409FE0BA: js      short loc_1409FE0E8
 * 00000001409FE0BC: lea     ecx, [rdx+r8]
 * 00000001409FE0C0: sar     ecx, 1
 * 00000001409FE0C2: movsxd  rax, ecx
 * 00000001409FE0C5: cmp     rbx, [r15+rax*8]
 * 00000001409FE0C9: jnb     short loc_1409FE0D6
 * 00000001409FE0CB: xor     eax, eax
 * 00000001409FE0CD: test    ecx, ecx
 * 00000001409FE0CF: jz      short loc_1409FE0E8
 * 00000001409FE0D1: lea     edx, [rcx-1]
 * 00000001409FE0D4: jmp     short loc_1409FE0DC
 * 00000001409FE0D6: jbe     short loc_1409FE0E1
 * 00000001409FE0D8: lea     r8d, [rcx+1]
 * 00000001409FE0DC: cmp     edx, r8d
 * 00000001409FE0DF: jge     short loc_1409FE0BC
 * 00000001409FE0E1: cmp     edx, r8d
 * 00000001409FE0E4: jge     short loc_1409FE13E
 * 00000001409FE0E6: xor     eax, eax
 * 00000001409FE0E8: cmp     [rsi+8F8h], eax
 * 00000001409FE0EE: jnz     short loc_1409FE13E
 * 00000001409FE0F0: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FE0FA: xor     edx, edx
 * 00000001409FE0FC: add     rax, rsi
 * 00000001409FE0FF: mov     rcx, rsi
 * 00000001409FE102: mov     [rsi+900h], rax
 * 00000001409FE109: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FE113: add     rax, rdi
 * 00000001409FE116: mov     [rsi+908h], rax
 * 00000001409FE11D: movsxd  rax, dword ptr [rdi]
 * 00000001409FE120: mov     [rsi+910h], rax
 * 00000001409FE127: mov     eax, 1
 * 00000001409FE12C: mov     [rsi+918h], rbx
 * 00000001409FE133: mov     [rsi+8F8h], eax
 * 00000001409FE139: call    $$b8
 * 00000001409FE13E: add     r12, 18h
 * 00000001409FE142: cmp     r12, r13
 * 00000001409FE145: jb      loc_1409FE093
 * 00000001409FE14B: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FE152: mov     rcx, [rsi+538h]
 * 00000001409FE159: mov     rax, [rsi+118h]
 * 00000001409FE160: call    KeGuardDispatchICall
 * 00000001409FE165: mov     rax, [rsi+170h]
 * 00000001409FE16C: call    KeGuardDispatchICall
 * 00000001409FE171: mov     rax, [rsi+380h]
 * 00000001409FE178: mov     rcx, [rbp+0BE0h+var_C50]
 * 00000001409FE17C: call    KeGuardDispatchICall
 * 00000001409FE181: xor     eax, eax
 * 00000001409FE183: cmp     [rbp+0BE0h+var_A20], rax
 * 00000001409FE18A: jz      loc_1409FC318
 * 00000001409FE190: mov     eax, [rsp+0CE0h+var_C78]
 * 00000001409FE194: shl     eax, 9
 * 00000001409FE197: add     [rsi+828h], eax
 * 00000001409FE19D: mov     rax, [rsi+100h]
 * 00000001409FE1A4: mov     rcx, [rbp+0BE0h+var_A20]
 * 00000001409FE1AB: call    KeGuardDispatchICall
 * 00000001409FE1B0: jmp     loc_1409FC318
 * 00000001409FE1B5: mov     r12d, 40000000h
 * 00000001409FE1BB: test    [rsi+990h], r12d
 * 00000001409FE1C2: jz      short loc_1409FE220
 * 00000001409FE1C4: test    dword ptr [rsi+994h], 1000h
 * 00000001409FE1CE: jnz     short loc_1409FE220
 * 00000001409FE1D0: rdtsc
 * 00000001409FE1D2: shl     rdx, 20h
 * 00000001409FE1D6: or      rax, rdx
 * 00000001409FE1D9: mov     rcx, rax
 * 00000001409FE1DC: ror     rax, 3
 * 00000001409FE1E0: xor     rcx, rax
 * 00000001409FE1E3: mov     rax, 7010008004002001h
 * 00000001409FE1ED: mul     rcx
 * 00000001409FE1F0: mov     rcx, rdx
 * 00000001409FE1F3: mov     [rbp+0BE0h+var_1E0], rdx
 * 00000001409FE1FA: xor     rcx, rax
 * 00000001409FE1FD: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001409FE207: mul     rcx
 * 00000001409FE20A: shr     rdx, 2
 * 00000001409FE20E: lea     rax, [rdx+rdx*4]
 * 00000001409FE212: mov     edx, 1
 * 00000001409FE217: sub     rcx, rax
 * 00000001409FE21A: mov     [rsi+824h], ecx
 * 00000001409FE220: mov     ecx, [rsi+824h]
 * 00000001409FE226: xor     eax, eax
 * 00000001409FE228: test    ecx, ecx
 * 00000001409FE22A: jz      loc_140A00739
 * 00000001409FE230: sub     ecx, 1
 * 00000001409FE233: jz      loc_140A005CF
 * 00000001409FE239: sub     ecx, 1
 * 00000001409FE23C: jz      loc_140A00427
 * 00000001409FE242: sub     ecx, 1
 * 00000001409FE245: jz      loc_1409FE5A7
 * 00000001409FE24B: sub     ecx, 1
 * 00000001409FE24E: jz      loc_1409FE3FC
 * 00000001409FE254: cmp     ecx, 1
 * 00000001409FE257: jnz     loc_140A008BA
 * 00000001409FE25D: mov     rbx, r13
 * 00000001409FE260: mov     [rbp+0BE0h+arg_10], 0FFh
 * 00000001409FE267: mov     r13d, eax
 * 00000001409FE26A: mov     r14d, eax
 * 00000001409FE26D: mov     r15d, eax
 * 00000001409FE270: jmp     short loc_1409FE274
 * 00000001409FE272: xor     eax, eax
 * 00000001409FE274: mov     [rbp+0BE0h+var_960], rax
 * 00000001409FE27B: lea     r9, [rbp+0BE0h+var_A98]
 * 00000001409FE282: mov     rax, [rsi+430h]
 * 00000001409FE289: lea     r8, [rbp+0BE0h+arg_10]
 * 00000001409FE290: lea     rdx, [rbp+0BE0h+var_960]
 * 00000001409FE297: mov     ecx, r14d
 * 00000001409FE29A: call    KeGuardDispatchICall
 * 00000001409FE29F: test    eax, eax
 * 00000001409FE2A1: jz      loc_1409FE3DB
 * 00000001409FE2A7: mov     r12d, 1
 * 00000001409FE2AD: mov     rax, [rsi+208h]
 * 00000001409FE2B4: lea     rdx, [rbp+0BE0h+var_1D8]
 * 00000001409FE2BB: mov     rcx, [rbp+0BE0h+var_A98]
 * 00000001409FE2C2: add     r13d, r12d
 * 00000001409FE2C5: call    KeGuardDispatchICall
 * 00000001409FE2CA: test    rax, rax
 * 00000001409FE2CD: jnz     loc_1409FE3AF
 * 00000001409FE2D3: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FE2DD: jz      short loc_1409FE326
 * 00000001409FE2DF: mov     rcx, [rsi+0A80h]
 * 00000001409FE2E6: lea     edx, [rax+30h]
 * 00000001409FE2E9: lea     r8d, [rax+6]
 * 00000001409FE2ED: mov     rax, [rbx]
 * 00000001409FE2F0: add     edx, 0FFFFFFF8h
 * 00000001409FE2F3: mov     [rcx], rax
 * 00000001409FE2F6: add     rbx, 8
 * 00000001409FE2FA: add     rcx, 8
 * 00000001409FE2FE: sub     r8, r12
 * 00000001409FE301: jnz     short loc_1409FE2ED
 * 00000001409FE303: test    edx, edx
 * 00000001409FE305: jz      short loc_1409FE31F
 * 00000001409FE307: mov     esi, 0FFFFFFFFh
 * 00000001409FE30C: mov     al, [rbx]
 * 00000001409FE30E: add     rbx, r12
 * 00000001409FE311: mov     [rcx], al
 * 00000001409FE313: add     rcx, r12
 * 00000001409FE316: add     edx, esi
 * 00000001409FE318: jnz     short loc_1409FE30C
 * 00000001409FE31A: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FE31F: mov     rbx, [rsi+0A80h]
 * 00000001409FE326: mov     rax, [rbp+0BE0h+var_A98]
 * 00000001409FE32D: mov     [rbx+18h], rax
 * 00000001409FE331: mov     rax, [rsi+590h]
 * 00000001409FE338: mov     [rax], rbx
 * 00000001409FE33B: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FE342: mov     rax, [rbp+0BE0h+var_A98]
 * 00000001409FE349: mov     rcx, [rsi+590h]
 * 00000001409FE350: mov     [rcx+8], rax
 * 00000001409FE354: xor     eax, eax
 * 00000001409FE356: mov     dword ptr [rcx+14h], 1000h
 * 00000001409FE35D: cmp     [rsi+8F8h], eax
 * 00000001409FE363: jnz     short loc_1409FE3AF
 * 00000001409FE365: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FE36F: xor     edx, edx
 * 00000001409FE371: add     rax, rsi
 * 00000001409FE374: mov     rcx, rsi
 * 00000001409FE377: mov     [rsi+900h], rax
 * 00000001409FE37E: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FE388: add     rax, rbx
 * 00000001409FE38B: mov     [rsi+908h], rax
 * 00000001409FE392: movsxd  rax, dword ptr [rbx]
 * 00000001409FE395: mov     [rsi+910h], rax
 * 00000001409FE39C: mov     [rsi+918h], r15
 * 00000001409FE3A3: mov     [rsi+8F8h], r12d
 * 00000001409FE3AA: call    $$b8
 * 00000001409FE3AF: mov     rax, [rsi+430h]
 * 00000001409FE3B6: lea     r9, [rbp+0BE0h+var_A98]
 * 00000001409FE3BD: lea     r8, [rbp+0BE0h+arg_10]
 * 00000001409FE3C4: mov     ecx, r14d
 * 00000001409FE3C7: lea     rdx, [rbp+0BE0h+var_960]
 * 00000001409FE3CE: call    KeGuardDispatchICall
 * 00000001409FE3D3: test    eax, eax
 * 00000001409FE3D5: jnz     loc_1409FE2AD
 * 00000001409FE3DB: mov     edx, 1
 * 00000001409FE3E0: add     r14d, edx
 * 00000001409FE3E3: add     r15, rdx
 * 00000001409FE3E6: cmp     r14d, 3
 * 00000001409FE3EA: jb      loc_1409FE272
 * 00000001409FE3F0: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FE3F7: jmp     loc_140A00885
 * 00000001409FE3FC: mov     r13d, eax
 * 00000001409FE3FF: mov     [rbp+0BE0h+var_BE0], eax
 * 00000001409FE402: mov     rax, [rsi+318h]
 * 00000001409FE409: xor     ecx, ecx
 * 00000001409FE40B: call    KeGuardDispatchICall
 * 00000001409FE410: mov     r15, rax
 * 00000001409FE413: xor     eax, eax
 * 00000001409FE415: test    r15, r15
 * 00000001409FE418: jz      loc_140A00880
 * 00000001409FE41E: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FE423: mov     [rbp+0BE0h+var_968], rax
 * 00000001409FE42A: lea     rdx, [rbp+0BE0h+var_968]
 * 00000001409FE431: mov     rax, [rsi+310h]
 * 00000001409FE438: mov     rcx, r15
 * 00000001409FE43B: mov     rbx, rdi
 * 00000001409FE43E: mov     r12d, 1
 * 00000001409FE444: call    KeGuardDispatchICall
 * 00000001409FE449: mov     r14, rax
 * 00000001409FE44C: test    rax, rax
 * 00000001409FE44F: jz      loc_1409FE57E
 * 00000001409FE455: lea     edi, [r12+5]
 * 00000001409FE45A: xor     r13d, r13d
 * 00000001409FE45D: mov     rax, [rsi+208h]
 * 00000001409FE464: lea     rdx, [rbp+0BE0h+var_1D0]
 * 00000001409FE46B: mov     rcx, r14
 * 00000001409FE46E: inc     r12d
 * 00000001409FE471: call    KeGuardDispatchICall
 * 00000001409FE476: test    rax, rax
 * 00000001409FE479: jnz     loc_1409FE553
 * 00000001409FE47F: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FE489: lea     r9d, [rax+1]
 * 00000001409FE48D: jz      short loc_1409FE4D5
 * 00000001409FE48F: mov     rcx, [rsi+0A80h]
 * 00000001409FE496: lea     edx, [rax+30h]
 * 00000001409FE499: mov     r8, rdi
 * 00000001409FE49C: mov     rax, [rbx]
 * 00000001409FE49F: add     edx, 0FFFFFFF8h
 * 00000001409FE4A2: mov     [rcx], rax
 * 00000001409FE4A5: add     rbx, 8
 * 00000001409FE4A9: add     rcx, 8
 * 00000001409FE4AD: sub     r8, r9
 * 00000001409FE4B0: jnz     short loc_1409FE49C
 * 00000001409FE4B2: test    edx, edx
 * 00000001409FE4B4: jz      short loc_1409FE4CE
 * 00000001409FE4B6: mov     r13d, 0FFFFFFFFh
 * 00000001409FE4BC: mov     al, [rbx]
 * 00000001409FE4BE: add     rbx, r9
 * 00000001409FE4C1: mov     [rcx], al
 * 00000001409FE4C3: add     rcx, r9
 * 00000001409FE4C6: add     edx, r13d
 * 00000001409FE4C9: jnz     short loc_1409FE4BC
 * 00000001409FE4CB: xor     r13d, r13d
 * 00000001409FE4CE: mov     rbx, [rsi+0A80h]
 * 00000001409FE4D5: mov     [rbx+18h], r14
 * 00000001409FE4D9: mov     [rbx+20h], r15
 * 00000001409FE4DD: mov     rax, [rsi+590h]
 * 00000001409FE4E4: mov     [rax], rbx
 * 00000001409FE4E7: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FE4EE: mov     rax, [rsi+590h]
 * 00000001409FE4F5: mov     [rax+8], r14
 * 00000001409FE4F9: mov     dword ptr [rax+14h], 1000h
 * 00000001409FE500: cmp     [rsi+8F8h], r13d
 * 00000001409FE507: jnz     short loc_1409FE553
 * 00000001409FE509: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FE513: xor     edx, edx
 * 00000001409FE515: add     rax, rsi
 * 00000001409FE518: mov     rcx, rsi
 * 00000001409FE51B: mov     [rsi+900h], rax
 * 00000001409FE522: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FE52C: add     rax, rbx
 * 00000001409FE52F: mov     [rsi+908h], rax
 * 00000001409FE536: movsxd  rax, dword ptr [rbx]
 * 00000001409FE539: mov     [rsi+910h], rax
 * 00000001409FE540: mov     [rsi+918h], rdi
 * 00000001409FE547: mov     [rsi+8F8h], r9d
 * 00000001409FE54E: call    $$b8
 * 00000001409FE553: mov     rax, [rsi+310h]
 * 00000001409FE55A: lea     rdx, [rbp+0BE0h+var_968]
 * 00000001409FE561: mov     rcx, r15
 * 00000001409FE564: call    KeGuardDispatchICall
 * 00000001409FE569: mov     r14, rax
 * 00000001409FE56C: test    rax, rax
 * 00000001409FE56F: jnz     loc_1409FE45D
 * 00000001409FE575: mov     r13d, [rbp+0BE0h+var_BE0]
 * 00000001409FE579: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FE57E: mov     rax, [rsi+318h]
 * 00000001409FE585: add     r13d, r12d
 * 00000001409FE588: mov     rcx, r15
 * 00000001409FE58B: mov     [rbp+0BE0h+var_BE0], r13d
 * 00000001409FE58F: call    KeGuardDispatchICall
 * 00000001409FE594: mov     r15, rax
 * 00000001409FE597: xor     eax, eax
 * 00000001409FE599: test    r15, r15
 * 00000001409FE59C: jnz     loc_1409FE423
 * 00000001409FE5A2: jmp     loc_140A00879
 * 00000001409FE5A7: mov     r13d, eax
 * 00000001409FE5AA: mov     rax, [rsi+4F0h]
 * 00000001409FE5B1: mov     rbx, rsi
 * 00000001409FE5B4: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409FE5BB: mov     r14, [rax]
 * 00000001409FE5BE: mov     [rbp+0BE0h+var_C08], r14
 * 00000001409FE5C2: test    [rsi+990h], r12d
 * 00000001409FE5C9: jz      short loc_1409FE5D2
 * 00000001409FE5CB: xor     eax, eax
 * 00000001409FE5CD: jmp     loc_140A00885
 * 00000001409FE5D2: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FE5D7: mov     rax, [rcx+28h]
 * 00000001409FE5DB: test    rax, rax
 * 00000001409FE5DE: jz      loc_1409FE67F
 * 00000001409FE5E4: mov     edx, 1
 * 00000001409FE5E9: mov     r13d, edx
 * 00000001409FE5EC: cmp     r14, rax
 * 00000001409FE5EF: jz      loc_140A00885
 * 00000001409FE5F5: mov     [rcx+18h], r14
 * 00000001409FE5F9: mov     rax, [rsi+590h]
 * 00000001409FE600: mov     [rax], rcx
 * 00000001409FE603: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FE60A: mov     rax, [rsi+590h]
 * 00000001409FE611: mov     [rax+8], r14
 * 00000001409FE615: mov     dword ptr [rax+14h], 1000h
 * 00000001409FE61C: xor     eax, eax
 * 00000001409FE61E: cmp     [rsi+8F8h], eax
 * 00000001409FE624: jnz     loc_140A00885
 * 00000001409FE62A: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FE634: add     rax, rsi
 * 00000001409FE637: mov     [rsi+900h], rax
 * 00000001409FE63E: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FE648: add     rax, rcx
 * 00000001409FE64B: mov     [rsi+908h], rax
 * 00000001409FE652: movsxd  rax, dword ptr [rcx]
 * 00000001409FE655: mov     rcx, rsi
 * 00000001409FE658: mov     [rsi+910h], rax
 * 00000001409FE65F: mov     qword ptr [rsi+918h], 5
 * 00000001409FE66A: mov     [rsi+8F8h], edx
 * 00000001409FE670: xor     edx, edx
 * 00000001409FE672: call    $$b8
 * 00000001409FE677: mov     rdx, r13
 * 00000001409FE67A: jmp     loc_140A00885
 * 00000001409FE67F: test    r14, r14
 * 00000001409FE682: jz      loc_140A00880
 * 00000001409FE688: mov     rax, [rsi+200h]
 * 00000001409FE68F: lea     rdx, [rbp+0BE0h+var_228]
 * 00000001409FE696: mov     r15d, 1
 * 00000001409FE69C: mov     [rbp+0BE0h+var_B98], rsi
 * 00000001409FE6A0: mov     rcx, r14
 * 00000001409FE6A3: mov     [rbp+0BE0h+var_BE0], r15d
 * 00000001409FE6A7: call    KeGuardDispatchICall
 * 00000001409FE6AC: mov     r13, [rbp+0BE0h+var_220]
 * 00000001409FE6B3: mov     r12d, [rbp+0BE0h+var_214]
 * 00000001409FE6BA: mov     [rbp+0BE0h+var_C48], rax
 * 00000001409FE6BE: xor     eax, eax
 * 00000001409FE6C0: mov     dword ptr [rbp+0BE0h+arg_8], r12d
 * 00000001409FE6C7: mov     [rbp+0BE0h+var_BE4], r12d
 * 00000001409FE6CB: mov     [rsp+0CE0h+BugCheckParameter2], r13
 * 00000001409FE6D0: test    r13, r13
 * 00000001409FE6D3: jnz     short loc_1409FE6DF
 * 00000001409FE6D5: mov     ecx, 0C000007Bh
 * 00000001409FE6DA: jmp     loc_140A003EB
 * 00000001409FE6DF: mov     [rbp+0BE0h+var_AD8], rax
 * 00000001409FE6E6: mov     ecx, 4
 * 00000001409FE6EB: lea     rax, [rbp+0BE0h+var_AD0]
 * 00000001409FE6F2: xor     edx, edx
 * 00000001409FE6F4: mov     r8d, 0FFFFFFFFh
 * 00000001409FE6FA: mov     [rax], dl
 * 00000001409FE6FC: add     rax, r15
 * 00000001409FE6FF: add     ecx, r8d
 * 00000001409FE702: jnz     short loc_1409FE6FA
 * 00000001409FE704: xor     eax, eax
 * 00000001409FE706: mov     r15d, eax
 * 00000001409FE709: cmp     [rsi+80Ch], eax
 * 00000001409FE70F: jbe     loc_1409FE90E
 * 00000001409FE715: mov     edx, [rbp+0BE0h+var_AD0]
 * 00000001409FE71B: mov     r9d, dword ptr [rbp+0BE0h+var_AD8+4]
 * 00000001409FE722: mov     r10d, dword ptr [rbp+0BE0h+var_AD8]
 * 00000001409FE729: mov     rax, [rsi+0A78h]
 * 00000001409FE730: mov     r14, rsi
 * 00000001409FE733: test    rax, rax
 * 00000001409FE736: cmovnz  r14, rax
 * 00000001409FE73A: xor     eax, eax
 * 00000001409FE73C: mov     [rsp+0CE0h+var_C88], r14
 * 00000001409FE741: mov     r11d, eax
 * 00000001409FE744: mov     r8d, [r14+808h]
 * 00000001409FE74B: add     r8, r14
 * 00000001409FE74E: test    r10d, r10d
 * 00000001409FE751: jz      short loc_1409FE761
 * 00000001409FE753: cmp     r9d, r15d
 * 00000001409FE756: ja      short loc_1409FE761
 * 00000001409FE758: mov     r8d, edx
 * 00000001409FE75B: mov     r11d, r9d
 * 00000001409FE75E: add     r8, r14
 * 00000001409FE761: cmp     r11d, r15d
 * 00000001409FE764: jz      loc_1409FE89E
 * 00000001409FE76A: mov     edi, 2
 * 00000001409FE76F: mov     eax, r15d
 * 00000001409FE772: sub     eax, r11d
 * 00000001409FE775: mov     r14, 0AAAAAAAAAAAAAAABh
 * 00000001409FE77F: mov     r9d, eax
 * 00000001409FE782: add     r11d, eax
 * 00000001409FE785: lea     r12d, [rdi+0Ah]
 * 00000001409FE789: mov     ecx, [r8]
 * 00000001409FE78C: cmp     ecx, r12d
 * 00000001409FE78F: jg      short loc_1409FE7D4
 * 00000001409FE791: jz      short loc_1409FE7F1
 * 00000001409FE793: sub     ecx, 1
 * 00000001409FE796: jz      short loc_1409FE7F1
 * 00000001409FE798: sub     ecx, 6
 * 00000001409FE79B: jz      short loc_1409FE7C3
 * 00000001409FE79D: sub     ecx, 1
 * 00000001409FE7A0: jz      short loc_1409FE7B9
 * 00000001409FE7A2: cmp     ecx, edi
 * 00000001409FE7A4: jnz     loc_1409FE830
 * 00000001409FE7AA: mov     eax, [r8+1Ch]
 * 00000001409FE7AE: add     eax, 3
 * 00000001409FE7B1: shl     eax, 4
 * 00000001409FE7B4: jmp     loc_1409FE86E
 * 00000001409FE7B9: movzx   eax, word ptr [r8+20h]
 * 00000001409FE7BE: jmp     loc_1409FE868
 * 00000001409FE7C3: mov     eax, [r8+18h]
 * 00000001409FE7C7: add     eax, edi
 * 00000001409FE7C9: lea     eax, [rax+rax*2]
 * 00000001409FE7CC: shl     eax, 3
 * 00000001409FE7CF: jmp     loc_1409FE86E
 * 00000001409FE7D4: cmp     ecx, 1Ch
 * 00000001409FE7D7: jz      loc_1409FE863
 * 00000001409FE7DD: cmp     ecx, 1Eh
 * 00000001409FE7E0: jz      short loc_1409FE837
 * 00000001409FE7E2: cmp     ecx, 20h ; ' '
 * 00000001409FE7E5: jle     short loc_1409FE830
 * 00000001409FE7E7: cmp     ecx, 22h ; '"'
 * 00000001409FE7EA: jle     short loc_1409FE808
 * 00000001409FE7EC: cmp     ecx, 2Bh ; '+'
 * 00000001409FE7EF: jnz     short loc_1409FE830
 * 00000001409FE7F1: mov     ecx, [r8+10h]
 * 00000001409FE7F5: mov     rax, r14
 * 00000001409FE7F8: mul     rcx
 * 00000001409FE7FB: shr     rdx, 3
 * 00000001409FE7FF: lea     eax, ds:30h[rdx*4]
 * 00000001409FE806: jmp     short loc_1409FE86E
 * 00000001409FE808: mov     ecx, [r8+20h]
 * 00000001409FE80C: mov     edx, [r8+28h]
 * 00000001409FE810: and     ecx, 0FFFh
 * 00000001409FE816: add     rdx, 0FFFh
 * 00000001409FE81D: add     rdx, rcx
 * 00000001409FE820: shr     rdx, 0Ch
 * 00000001409FE824: lea     eax, [rdx+rdx*4]
 * 00000001409FE827: lea     eax, ds:30h[rax*4]
 * 00000001409FE82E: jmp     short loc_1409FE86E
 * 00000001409FE830: mov     eax, 30h ; '0'
 * 00000001409FE835: jmp     short loc_1409FE86E
 * 00000001409FE837: mov     eax, [r8+24h]
 * 00000001409FE83B: lea     ecx, [rax-1]
 * 00000001409FE83E: neg     eax
 * 00000001409FE840: sbb     eax, eax
 * 00000001409FE842: and     ecx, eax
 * 00000001409FE844: mov     rax, r14
 * 00000001409FE847: mul     rcx
 * 00000001409FE84A: movzx   eax, word ptr [r8+28h]
 * 00000001409FE84F: shr     rdx, 3
 * 00000001409FE853: add     edx, 7
 * 00000001409FE856: and     edx, 0FFFFFFF8h
 * 00000001409FE859: add     eax, edi
 * 00000001409FE85B: lea     eax, [rax+rax*2]
 * 00000001409FE85E: lea     eax, [rdx+rax*8]
 * 00000001409FE861: jmp     short loc_1409FE86E
 * 00000001409FE863: movzx   eax, word ptr [r8+28h]
 * 00000001409FE868: add     eax, 37h ; '7'
 * 00000001409FE86B: and     eax, 0FFFFFFF8h
 * 00000001409FE86E: add     r8, rax
 * 00000001409FE871: mov     eax, 1
 * 00000001409FE876: sub     r9, rax
 * 00000001409FE879: jnz     loc_1409FE789
 * 00000001409FE87F: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FE884: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FE88B: mov     r14, [rsp+0CE0h+var_C88]
 * 00000001409FE890: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FE897: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FE89C: jmp     short loc_1409FE8A3
 * 00000001409FE89E: mov     eax, 1
 * 00000001409FE8A3: mov     edx, r8d
 * 00000001409FE8A6: mov     dword ptr [rbp+0BE0h+var_AD8], eax
 * 00000001409FE8AC: sub     edx, r14d
 * 00000001409FE8AF: mov     dword ptr [rbp+0BE0h+var_AD8+4], r11d
 * 00000001409FE8B6: mov     [rbp+0BE0h+var_AD0], edx
 * 00000001409FE8BC: mov     r10d, eax
 * 00000001409FE8BF: movsxd  rcx, dword ptr [r8]
 * 00000001409FE8C2: mov     r9d, r11d
 * 00000001409FE8C5: cmp     ecx, 2Bh ; '+'
 * 00000001409FE8C8: ja      short loc_1409FE8EA
 * 00000001409FE8CA: mov     r11, 80000001002h
 * 00000001409FE8D4: bt      r11, rcx
 * 00000001409FE8D8: jnb     short loc_1409FE8EA
 * 00000001409FE8DA: mov     rax, [rbp+0BE0h+var_C48]
 * 00000001409FE8DE: cmp     [r8+8], rax
 * 00000001409FE8E2: jnz     short loc_1409FE8EA
 * 00000001409FE8E4: cmp     [r8+10h], r12d
 * 00000001409FE8E8: jz      short loc_1409FE911
 * 00000001409FE8EA: lea     eax, [rcx-21h]
 * 00000001409FE8ED: mov     ecx, 1
 * 00000001409FE8F2: cmp     eax, ecx
 * 00000001409FE8F4: ja      short loc_1409FE8FC
 * 00000001409FE8F6: cmp     [r8+20h], r13
 * 00000001409FE8FA: jz      short loc_1409FE911
 * 00000001409FE8FC: add     r15d, ecx
 * 00000001409FE8FF: cmp     r15d, [rsi+80Ch]
 * 00000001409FE906: jb      loc_1409FE729
 * 00000001409FE90C: xor     eax, eax
 * 00000001409FE90E: mov     r8, rax
 * 00000001409FE911: mov     r14, [rbp+0BE0h+var_C08]
 * 00000001409FE915: mov     [rbp+0BE0h+var_B38], r8
 * 00000001409FE91C: test    r8, r8
 * 00000001409FE91F: jz      short loc_1409FE92B
 * 00000001409FE921: mov     ecx, 0C000010Eh
 * 00000001409FE926: jmp     loc_140A003EB
 * 00000001409FE92B: mov     rax, [rsi+2A8h]
 * 00000001409FE932: mov     rcx, r14
 * 00000001409FE935: call    KeGuardDispatchICall
 * 00000001409FE93A: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FE944: mov     r15d, eax
 * 00000001409FE947: mov     dword ptr [rbp+0BE0h+var_BF8], eax
 * 00000001409FE94A: mov     eax, [rbp+0BE0h+var_BE4]
 * 00000001409FE94D: mov     [rbp+0BE0h+var_C58], eax
 * 00000001409FE950: jz      short loc_1409FE973
 * 00000001409FE952: mov     r8d, 9
 * 00000001409FE958: lea     rcx, [rbp+0BE0h+var_B50]
 * 00000001409FE95F: mov     rdx, r13
 * 00000001409FE962: call    sub_140A1EFE4
 * 00000001409FE967: mov     rbx, [rbp+0BE0h+var_B50]
 * 00000001409FE96E: jmp     loc_140A003E9
 * 00000001409FE973: xor     eax, eax
 * 00000001409FE975: lea     r9, [rbp+0BE0h+var_BE4]
 * 00000001409FE979: xor     r8d, r8d
 * 00000001409FE97C: mov     [rbp+0BE0h+var_7B0], rax
 * 00000001409FE983: mov     [rbp+0BE0h+var_9B8], eax
 * 00000001409FE989: mov     rcx, r13
 * 00000001409FE98C: mov     rax, [rsi+1F0h]
 * 00000001409FE993: lea     r12d, [r8+1]
 * 00000001409FE997: mov     dl, r12b
 * 00000001409FE99A: call    KeGuardDispatchICall
 * 00000001409FE99F: mov     rdx, rax
 * 00000001409FE9A2: lea     r8d, [r12+0Bh]
 * 00000001409FE9A7: neg     rax
 * 00000001409FE9AA: mov     [rbp+0BE0h+var_7C8], rdx
 * 00000001409FE9B1: lea     r9, [rbp+0BE0h+var_BE4]
 * 00000001409FE9B5: mov     dl, r12b
 * 00000001409FE9B8: sbb     ecx, ecx
 * 00000001409FE9BA: and     ecx, [rbp+0BE0h+var_BE4]
 * 00000001409FE9BD: mov     [rbp+0BE0h+var_BE4], ecx
 * 00000001409FE9C0: mov     rax, [rsi+1F0h]
 * 00000001409FE9C7: mov     [rbp+0BE0h+var_9C4], ecx
 * 00000001409FE9CD: mov     rcx, r13
 * 00000001409FE9D0: call    KeGuardDispatchICall
 * 00000001409FE9D5: mov     rdx, rax
 * 00000001409FE9D8: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409FE9DC: neg     rax
 * 00000001409FE9DF: mov     [rbp+0BE0h+var_7C0], rdx
 * 00000001409FE9E6: lea     r8d, [r12+9]
 * 00000001409FE9EB: mov     dl, r12b
 * 00000001409FE9EE: sbb     ecx, ecx
 * 00000001409FE9F0: lea     r9, [rbp+0BE0h+var_BE4]
 * 00000001409FE9F4: and     ecx, [rbp+0BE0h+var_BE4]
 * 00000001409FE9F7: mov     [rbp+0BE0h+var_BE4], ecx
 * 00000001409FE9FA: mov     rax, [rsi+1F0h]
 * 00000001409FEA01: mov     [rsp+0CE0h+var_C78], ecx
 * 00000001409FEA05: mov     [rbp+0BE0h+var_9C0], ecx
 * 00000001409FEA0B: mov     rcx, r13
 * 00000001409FEA0E: call    KeGuardDispatchICall
 * 00000001409FEA13: mov     rdx, rax
 * 00000001409FEA16: neg     rax
 * 00000001409FEA19: mov     [rbp+0BE0h+var_7B8], rdx
 * 00000001409FEA20: sbb     ecx, ecx
 * 00000001409FEA22: and     ecx, [rbp+0BE0h+var_BE4]
 * 00000001409FEA25: mov     [rbp+0BE0h+var_BE4], ecx
 * 00000001409FEA28: mov     rax, [rsi+1F8h]
 * 00000001409FEA2F: mov     [rbp+0BE0h+var_9BC], ecx
 * 00000001409FEA35: mov     rcx, r13
 * 00000001409FEA38: call    KeGuardDispatchICall
 * 00000001409FEA3D: mov     r14, rax
 * 00000001409FEA40: test    rax, rax
 * 00000001409FEA43: jnz     short loc_1409FEA53
 * 00000001409FEA45: mov     ecx, 0C000007Bh
 * 00000001409FEA4A: mov     r14, [rbp+0BE0h+var_C08]
 * 00000001409FEA4E: jmp     loc_140A003EB
 * 00000001409FEA53: mov     rax, [rsi+498h]
 * 00000001409FEA5A: lea     rdx, [rbp+0BE0h+var_888]
 * 00000001409FEA61: mov     rcx, r13
 * 00000001409FEA64: call    KeGuardDispatchICall
 * 00000001409FEA69: mov     r8d, [rsi+924h]
 * 00000001409FEA70: mov     [rbp+0BE0h+var_7A8], rax
 * 00000001409FEA77: mov     eax, [rbp+0BE0h+var_888]
 * 00000001409FEA7D: mov     [rbp+0BE0h+var_9B4], eax
 * 00000001409FEA83: mov     eax, [r14+54h]
 * 00000001409FEA87: mov     [rbp+0BE0h+var_9C8], eax
 * 00000001409FEA8D: mov     eax, r15d
 * 00000001409FEA90: mov     r15d, [rsi+7E4h]
 * 00000001409FEA97: neg     eax
 * 00000001409FEA99: mov     [rbp+0BE0h+var_7D0], r13
 * 00000001409FEAA0: sbb     r9d, r9d
 * 00000001409FEAA3: and     r9d, 0Bh
 * 00000001409FEAA7: lea     eax, [r15+120h]
 * 00000001409FEAAE: mov     dword ptr [rbp+0BE0h+arg_8], r9d
 * 00000001409FEAB5: cmp     eax, [rsi+0A1Ch]
 * 00000001409FEABB: jbe     loc_1409FEBC8
 * 00000001409FEAC1: mov     edx, eax
 * 00000001409FEAC3: mov     rcx, rsi
 * 00000001409FEAC6: call    sub_140A11B30
 * 00000001409FEACB: mov     r14, rax
 * 00000001409FEACE: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FEAD3: xor     eax, eax
 * 00000001409FEAD5: test    r14, r14
 * 00000001409FEAD8: jz      loc_1409FEBBA
 * 00000001409FEADE: mov     ecx, [rsi+990h]
 * 00000001409FEAE4: test    cl, 4
 * 00000001409FEAE7: jnz     loc_1409FEBA9
 * 00000001409FEAED: mov     eax, [rsi+7E4h]
 * 00000001409FEAF3: and     ecx, 20000000h
 * 00000001409FEAF9: mov     r9, [rsi+7C8h]
 * 00000001409FEB00: neg     ecx
 * 00000001409FEB02: mov     rcx, rsi
 * 00000001409FEB05: sbb     r8d, r8d
 * 00000001409FEB08: and     r8d, [rsi+924h]
 * 00000001409FEB0F: cmp     eax, 8
 * 00000001409FEB12: jb      short loc_1409FEB35
 * 00000001409FEB14: mov     edx, eax
 * 00000001409FEB16: shr     rdx, 3
 * 00000001409FEB1A: xor     r12d, r12d
 * 00000001409FEB1D: lea     r10d, [r12+1]
 * 00000001409FEB22: mov     [rcx], r12
 * 00000001409FEB25: add     eax, 0FFFFFFF8h
 * 00000001409FEB28: add     rcx, 8
 * 00000001409FEB2C: sub     rdx, r10
 * 00000001409FEB2F: jnz     short loc_1409FEB22
 * 00000001409FEB31: lea     r12d, [rdx+1]
 * 00000001409FEB35: xor     edx, edx
 * 00000001409FEB37: test    eax, eax
 * 00000001409FEB39: jz      short loc_1409FEB4B
 * 00000001409FEB3B: mov     r10d, 0FFFFFFFFh
 * 00000001409FEB41: mov     [rcx], dl
 * 00000001409FEB43: add     rcx, r12
 * 00000001409FEB46: add     eax, r10d
 * 00000001409FEB49: jnz     short loc_1409FEB41
 * 00000001409FEB4B: mov     ebx, [r14+924h]
 * 00000001409FEB52: mov     [r14+924h], r8d
 * 00000001409FEB59: cmp     r8d, 3
 * 00000001409FEB5D: jz      short loc_1409FEB93
 * 00000001409FEB5F: test    dword ptr [r14+990h], 10000000h
 * 00000001409FEB6A: mov     rcx, rdx
 * 00000001409FEB6D: cmovz   ecx, r8d
 * 00000001409FEB71: test    ecx, ecx
 * 00000001409FEB73: jz      short loc_1409FEB8A
 * 00000001409FEB75: mov     rax, [r14+228h]
 * 00000001409FEB7C: lea     rcx, [r9-8]
 * 00000001409FEB80: mov     rdx, [rcx]
 * 00000001409FEB83: call    KeGuardDispatchICall
 * 00000001409FEB88: jmp     short loc_1409FEBA2
 * 00000001409FEB8A: mov     rax, [r14+100h]
 * 00000001409FEB91: jmp     short loc_1409FEB9A
 * 00000001409FEB93: mov     rax, [r14+368h]
 * 00000001409FEB9A: mov     rcx, r9
 * 00000001409FEB9D: call    KeGuardDispatchICall
 * 00000001409FEBA2: mov     [r14+924h], ebx
 * 00000001409FEBA9: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 00000001409FEBB1: mov     r9d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FEBB8: jmp     short loc_1409FEBD6
 * 00000001409FEBBA: mov     [rbp+0BE0h+var_B98], rax
 * 00000001409FEBBE: mov     ecx, 0C000009Ah
 * 00000001409FEBC3: jmp     loc_1409FEA4A
 * 00000001409FEBC8: mov     r14, rsi
 * 00000001409FEBCB: mov     [rsp+0CE0h+var_C88], rsi
 * 00000001409FEBD0: mov     [rsi+7E4h], eax
 * 00000001409FEBD6: mov     eax, 6
 * 00000001409FEBDB: lea     r12, [r14+r15]
 * 00000001409FEBDF: add     [r14+80Ch], eax
 * 00000001409FEBE6: lea     rdi, [rbp+0BE0h+var_7D0]
 * 00000001409FEBED: mov     [rbp+0BE0h+var_958], r12
 * 00000001409FEBF4: lea     rsi, [rbp+0BE0h+var_9C8]
 * 00000001409FEBFB: mov     [rbp+0BE0h+var_B38], r12
 * 00000001409FEC02: xor     r10d, r10d
 * 00000001409FEC05: lea     r11d, [rax-5]
 * 00000001409FEC09: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409FEC0D: mov     r13d, [rsi]
 * 00000001409FEC10: mov     rdx, rax
 * 00000001409FEC13: mov     r15, [rdi]
 * 00000001409FEC16: mov     ecx, 30h ; '0'
 * 00000001409FEC1B: mov     [rbp+0BE0h+var_BF0], r13d
 * 00000001409FEC1F: mov     rax, r12
 * 00000001409FEC22: mov     [rax], r10
 * 00000001409FEC25: add     ecx, 0FFFFFFF8h
 * 00000001409FEC28: add     rax, 8
 * 00000001409FEC2C: sub     rdx, r11
 * 00000001409FEC2F: jnz     short loc_1409FEC22
 * 00000001409FEC31: test    ecx, ecx
 * 00000001409FEC33: jz      short loc_1409FEC44
 * 00000001409FEC35: mov     edx, 0FFFFFFFFh
 * 00000001409FEC3A: mov     [rax], r10b
 * 00000001409FEC3D: add     rax, r11
 * 00000001409FEC40: add     ecx, edx
 * 00000001409FEC42: jnz     short loc_1409FEC3A
 * 00000001409FEC44: mov     [r12], r9d
 * 00000001409FEC48: lea     rcx, [r15+r13]
 * 00000001409FEC4C: mov     [r12+8], r15
 * 00000001409FEC51: mov     r10, r15
 * 00000001409FEC54: mov     [r12+10h], r13d
 * 00000001409FEC59: mov     rax, r15
 * 00000001409FEC5C: add     [r14+828h], r13d
 * 00000001409FEC63: mov     ebx, [r14+814h]
 * 00000001409FEC6A: mov     r11, [r14+818h]
 * 00000001409FEC71: cmp     r15, rcx
 * 00000001409FEC74: jnb     short loc_1409FEC86
 * 00000001409FEC76: mov     edx, 40h ; '@'
 * 00000001409FEC7B: prefetchnta byte ptr [rax]
 * 00000001409FEC7E: add     rax, rdx
 * 00000001409FEC81: cmp     rax, rcx
 * 00000001409FEC84: jb      short loc_1409FEC7B
 * 00000001409FEC86: mov     r9d, r13d
 * 00000001409FEC89: mov     r8, r11
 * 00000001409FEC8C: shr     r9d, 7
 * 00000001409FEC90: test    r9d, r9d
 * 00000001409FEC93: jz      short loc_1409FED06
 * 00000001409FEC95: mov     r13, 7010008004002001h
 * 00000001409FEC9F: mov     edx, 8
 * 00000001409FECA4: lea     r14d, [rdx-7]
 * 00000001409FECA8: mov     rax, [r10]
 * 00000001409FECAB: mov     ecx, ebx
 * 00000001409FECAD: xor     rax, r8
 * 00000001409FECB0: mov     r8, [r10+8]
 * 00000001409FECB4: rol     rax, cl
 * 00000001409FECB7: add     r10, 10h
 * 00000001409FECBB: xor     r8, rax
 * 00000001409FECBE: rol     r8, cl
 * 00000001409FECC1: sub     rdx, r14
 * 00000001409FECC4: jnz     short loc_1409FECA8
 * 00000001409FECC6: mov     rcx, r10
 * 00000001409FECC9: sub     rcx, r15
 * 00000001409FECCC: xor     rcx, r11
 * 00000001409FECCF: mov     rax, rcx
 * 00000001409FECD2: rol     rax, 11h
 * 00000001409FECD6: xor     rcx, rax
 * 00000001409FECD9: mov     rax, r13
 * 00000001409FECDC: mul     rcx
 * 00000001409FECDF: xor     ebx, edx
 * 00000001409FECE1: mov     [rbp+0BE0h+var_1C8], rdx
 * 00000001409FECE8: xor     ebx, eax
 * 00000001409FECEA: mov     rax, r14
 * 00000001409FECED: and     ebx, 3Fh
 * 00000001409FECF0: cmovz   ebx, eax
 * 00000001409FECF3: mov     eax, 0FFFFFFFFh
 * 00000001409FECF8: add     r9d, eax
 * 00000001409FECFB: jnz     short loc_1409FEC9F
 * 00000001409FECFD: mov     r14, [rsp+0CE0h+var_C88]
 * 00000001409FED02: mov     r13d, [rbp+0BE0h+var_BF0]
 * 00000001409FED06: mov     edx, r13d
 * 00000001409FED09: mov     r11d, 1
 * 00000001409FED0F: and     edx, 7Fh
 * 00000001409FED12: cmp     edx, 8
 * 00000001409FED15: jb      short loc_1409FED32
 * 00000001409FED17: mov     r9d, edx
 * 00000001409FED1A: shr     r9, 3
 * 00000001409FED1E: xor     r8, [r10]
 * 00000001409FED21: mov     ecx, ebx
 * 00000001409FED23: rol     r8, cl
 * 00000001409FED26: add     r10, 8
 * 00000001409FED2A: add     edx, 0FFFFFFF8h
 * 00000001409FED2D: sub     r9, r11
 * 00000001409FED30: jnz     short loc_1409FED1E
 * 00000001409FED32: test    edx, edx
 * 00000001409FED34: jz      short loc_1409FED55
 * 00000001409FED36: mov     r14d, 0FFFFFFFFh
 * 00000001409FED3C: movzx   eax, byte ptr [r10]
 * 00000001409FED40: mov     ecx, ebx
 * 00000001409FED42: xor     r8, rax
 * 00000001409FED45: add     r10, r11
 * 00000001409FED48: rol     r8, cl
 * 00000001409FED4B: add     edx, r14d
 * 00000001409FED4E: jnz     short loc_1409FED3C
 * 00000001409FED50: mov     r14, [rsp+0CE0h+var_C88]
 * 00000001409FED55: mov     rax, r8
 * 00000001409FED58: shr     rax, 1Fh
 * 00000001409FED5C: xor     r10d, r10d
 * 00000001409FED5F: jmp     short loc_1409FED68
 * 00000001409FED61: xor     r8d, eax
 * 00000001409FED64: shr     rax, 1Fh
 * 00000001409FED68: test    rax, rax
 * 00000001409FED6B: jnz     short loc_1409FED61
 * 00000001409FED6D: mov     r9d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FED74: btr     r8d, 1Fh
 * 00000001409FED79: mov     [r12+14h], r8d
 * 00000001409FED7E: add     rdi, 8
 * 00000001409FED82: add     [r14+828h], r13d
 * 00000001409FED89: lea     r13d, [rax+4]
 * 00000001409FED8D: mov     r12, [rbp+0BE0h+var_958]
 * 00000001409FED94: lea     eax, [r13+2]
 * 00000001409FED98: add     r12, 30h ; '0'
 * 00000001409FED9C: add     rsi, r13
 * 00000001409FED9F: sub     [rbp+0BE0h+var_C60], r11
 * 00000001409FEDA3: mov     [rbp+0BE0h+var_958], r12
 * 00000001409FEDAA: jnz     loc_1409FEC0D
 * 00000001409FEDB0: mov     rbx, [rbp+0BE0h+var_B38]
 * 00000001409FEDB7: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FEDBE: mov     r12, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FEDC3: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FEDC8: mov     r15d, dword ptr [rbp+0BE0h+var_BF8]
 * 00000001409FEDCC: mov     dword ptr [rbx], 2Ch ; ','
 * 00000001409FEDD2: mov     [rbx+18h], r12
 * 00000001409FEDD6: test    dword ptr [r14+990h], 10200000h
 * 00000001409FEDE1: jnz     short loc_1409FEE0C
 * 00000001409FEDE3: test    r15d, r15d
 * 00000001409FEDE6: jnz     short loc_1409FEE11
 * 00000001409FEDE8: test    dword ptr [r14+994h], 8000h
 * 00000001409FEDF3: jz      short loc_1409FEE19
 * 00000001409FEDF5: or      [rbx+20h], r11d
 * 00000001409FEDF9: mov     rdx, r12
 * 00000001409FEDFC: mov     rcx, r14
 * 00000001409FEDFF: call    sub_140A12C50
 * 00000001409FEE04: test    eax, eax
 * 00000001409FEE06: jz      short loc_1409FEE19
 * 00000001409FEE08: or      [rbx+20h], r13d
 * 00000001409FEE0C: test    r15d, r15d
 * 00000001409FEE0F: jz      short loc_1409FEE19
 * 00000001409FEE11: mov     eax, 2
 * 00000001409FEE16: or      [rbx+20h], eax
 * 00000001409FEE19: mov     r8d, [rbp+0BE0h+var_C58]
 * 00000001409FEE1D: lea     rax, [rbp+0BE0h+var_A28]
 * 00000001409FEE24: mov     rdx, [rbp+0BE0h+var_C48]
 * 00000001409FEE28: lea     rcx, [rbp+0BE0h+var_B98]
 * 00000001409FEE2C: mov     [rsp+0CE0h+var_CA8], rax
 * 00000001409FEE31: mov     rbx, r14
 * 00000001409FEE34: lea     rax, [rbp+0BE0h+var_B24]
 * 00000001409FEE3B: mov     [rbp+0BE0h+var_B98], r14
 * 00000001409FEE3F: mov     [rsp+0CE0h+var_CB0], rax
 * 00000001409FEE44: mov     r9, r12
 * 00000001409FEE47: mov     dword ptr [rsp+0CE0h+var_CB8], 9
 * 00000001409FEE4F: mov     dword ptr [rsp+0CE0h+BugCheckParameter4], r15d
 * 00000001409FEE54: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409FEE5B: call    sub_140A11098
 * 00000001409FEE60: mov     ecx, eax
 * 00000001409FEE62: test    eax, eax
 * 00000001409FEE64: js      loc_1409FEA4A
 * 00000001409FEE6A: mov     rbx, [rbp+0BE0h+var_B98]
 * 00000001409FEE6E: mov     rcx, [rbp+0BE0h+var_B38]
 * 00000001409FEE75: mov     rax, rbx
 * 00000001409FEE78: mov     r9d, [rbp+0BE0h+var_A28]
 * 00000001409FEE7F: sub     rax, r14
 * 00000001409FEE82: mov     r15d, [rbp+0BE0h+var_B24]
 * 00000001409FEE89: add     rcx, rax
 * 00000001409FEE8C: sub     r9d, [rbp+0BE0h+var_B24]
 * 00000001409FEE93: add     r15, r12
 * 00000001409FEE96: mov     [rbp+0BE0h+var_B38], rcx
 * 00000001409FEE9D: xor     r8d, r8d
 * 00000001409FEEA0: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409FEEA7: lea     r13, [rcx+0C0h]
 * 00000001409FEEAE: mov     ecx, 30h ; '0'
 * 00000001409FEEB3: mov     [rsp+0CE0h+var_C88], r13
 * 00000001409FEEB8: mov     rax, r13
 * 00000001409FEEBB: lea     edx, [rcx-2Ah]
 * 00000001409FEEBE: lea     r10d, [rcx-2Fh]
 * 00000001409FEEC2: mov     [rax], r8
 * 00000001409FEEC5: add     ecx, 0FFFFFFF8h
 * 00000001409FEEC8: add     rax, 8
 * 00000001409FEECC: sub     rdx, r10
 * 00000001409FEECF: jnz     short loc_1409FEEC2
 * 00000001409FEED1: mov     rdx, r10
 * 00000001409FEED4: test    ecx, ecx
 * 00000001409FEED6: jz      short loc_1409FEEE9
 * 00000001409FEED8: mov     r10d, 0FFFFFFFFh
 * 00000001409FEEDE: mov     [rax], r8b
 * 00000001409FEEE1: add     rax, rdx
 * 00000001409FEEE4: add     ecx, r10d
 * 00000001409FEEE7: jnz     short loc_1409FEEDE
 * 00000001409FEEE9: mov     eax, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FEEEF: mov     r10, r15
 * 00000001409FEEF2: mov     [r13+0], eax
 * 00000001409FEEF6: mov     rax, r15
 * 00000001409FEEF9: mov     [r13+8], r15
 * 00000001409FEEFD: mov     [r13+10h], r9d
 * 00000001409FEF01: add     [rbx+828h], r9d
 * 00000001409FEF08: mov     r14d, [rbx+814h]
 * 00000001409FEF0F: mov     r12, [rbx+818h]
 * 00000001409FEF16: mov     ecx, r9d
 * 00000001409FEF19: add     rcx, r15
 * 00000001409FEF1C: cmp     r15, rcx
 * 00000001409FEF1F: jnb     short loc_1409FEF32
 * 00000001409FEF21: mov     r8d, 40h ; '@'
 * 00000001409FEF27: prefetchnta byte ptr [rax]
 * 00000001409FEF2A: add     rax, r8
 * 00000001409FEF2D: cmp     rax, rcx
 * 00000001409FEF30: jb      short loc_1409FEF27
 * 00000001409FEF32: mov     r11d, r9d
 * 00000001409FEF35: mov     r8, r12
 * 00000001409FEF38: shr     r11d, 7
 * 00000001409FEF3C: test    r11d, r11d
 * 00000001409FEF3F: jz      short loc_1409FEFB7
 * 00000001409FEF41: mov     edi, 0FFFFFFFFh
 * 00000001409FEF46: mov     r13, 7010008004002001h
 * 00000001409FEF50: mov     eax, 8
 * 00000001409FEF55: xor     r8, [r10]
 * 00000001409FEF58: mov     ecx, r14d
 * 00000001409FEF5B: rol     r8, cl
 * 00000001409FEF5E: xor     r8, [r10+8]
 * 00000001409FEF62: add     r10, 10h
 * 00000001409FEF66: rol     r8, cl
 * 00000001409FEF69: sub     rax, rdx
 * 00000001409FEF6C: jnz     short loc_1409FEF55
 * 00000001409FEF6E: mov     rcx, r10
 * 00000001409FEF71: sub     rcx, r15
 * 00000001409FEF74: xor     rcx, r12
 * 00000001409FEF77: mov     rax, rcx
 * 00000001409FEF7A: rol     rax, 11h
 * 00000001409FEF7E: xor     rcx, rax
 * 00000001409FEF81: mov     rax, r13
 * 00000001409FEF84: mul     rcx
 * 00000001409FEF87: xor     r14d, edx
 * 00000001409FEF8A: mov     [rbp+0BE0h+var_1C0], rdx
 * 00000001409FEF91: xor     r14d, eax
 * 00000001409FEF94: mov     edx, 1
 * 00000001409FEF99: and     r14d, 3Fh
 * 00000001409FEF9D: cmovz   r14d, edx
 * 00000001409FEFA1: add     r11d, edi
 * 00000001409FEFA4: jnz     short loc_1409FEF50
 * 00000001409FEFA6: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FEFAB: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FEFB2: mov     r13, [rsp+0CE0h+var_C88]
 * 00000001409FEFB7: and     r9d, 7Fh
 * 00000001409FEFBB: cmp     r9d, 8
 * 00000001409FEFBF: jb      short loc_1409FEFDE
 * 00000001409FEFC1: mov     eax, r9d
 * 00000001409FEFC4: shr     rax, 3
 * 00000001409FEFC8: xor     r8, [r10]
 * 00000001409FEFCB: mov     ecx, r14d
 * 00000001409FEFCE: rol     r8, cl
 * 00000001409FEFD1: add     r10, 8
 * 00000001409FEFD5: add     r9d, 0FFFFFFF8h
 * 00000001409FEFD9: sub     rax, rdx
 * 00000001409FEFDC: jnz     short loc_1409FEFC8
 * 00000001409FEFDE: test    r9d, r9d
 * 00000001409FEFE1: jz      short loc_1409FF002
 * 00000001409FEFE3: mov     esi, 0FFFFFFFFh
 * 00000001409FEFE8: movzx   eax, byte ptr [r10]
 * 00000001409FEFEC: mov     ecx, r14d
 * 00000001409FEFEF: xor     r8, rax
 * 00000001409FEFF2: add     r10, rdx
 * 00000001409FEFF5: rol     r8, cl
 * 00000001409FEFF8: add     r9d, esi
 * 00000001409FEFFB: jnz     short loc_1409FEFE8
 * 00000001409FEFFD: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FF002: mov     rax, r8
 * 00000001409FF005: shr     rax, 1Fh
 * 00000001409FF009: xor     ecx, ecx
 * 00000001409FF00B: jmp     short loc_1409FF014
 * 00000001409FF00D: xor     r8d, eax
 * 00000001409FF010: shr     rax, 1Fh
 * 00000001409FF014: test    rax, rax
 * 00000001409FF017: jnz     short loc_1409FF00D
 * 00000001409FF019: mov     r15d, dword ptr [rbp+0BE0h+var_BF8]
 * 00000001409FF01D: btr     r8d, 1Fh
 * 00000001409FF022: mov     [r13+14h], r8d
 * 00000001409FF026: mov     rdx, [rbp+0BE0h+var_B38]
 * 00000001409FF02D: mov     dword ptr [rdx+0F0h], 30h ; '0'
 * 00000001409FF037: cmp     [rdx+100h], eax
 * 00000001409FF03D: jz      short loc_1409FF056
 * 00000001409FF03F: mov     eax, [rdx+108h]
 * 00000001409FF045: test    r15d, r15d
 * 00000001409FF048: setnz   cl
 * 00000001409FF04B: and     eax, 0FFFFFFFEh
 * 00000001409FF04E: or      ecx, eax
 * 00000001409FF050: mov     [rdx+108h], ecx
 * 00000001409FF056: mov     rcx, [rbp+0BE0h+var_B38]
 * 00000001409FF05D: mov     eax, r15d
 * 00000001409FF060: add     rcx, 60h ; '`'
 * 00000001409FF064: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409FF06B: neg     eax
 * 00000001409FF06D: mov     [rbp+0BE0h+var_AB0], rcx
 * 00000001409FF074: sbb     r12d, r12d
 * 00000001409FF077: neg     r12d
 * 00000001409FF07A: add     r12d, 0Dh
 * 00000001409FF07E: test    rcx, rcx
 * 00000001409FF081: jnz     loc_1409FF328
 * 00000001409FF087: mov     r15d, [rbx+7E4h]
 * 00000001409FF08E: mov     r8d, [rbx+924h]
 * 00000001409FF095: lea     eax, [r15+30h]
 * 00000001409FF099: cmp     eax, [rbx+0A1Ch]
 * 00000001409FF09F: jbe     loc_1409FF185
 * 00000001409FF0A5: mov     edx, eax
 * 00000001409FF0A7: mov     rcx, rbx
 * 00000001409FF0AA: call    sub_140A11B30
 * 00000001409FF0AF: mov     r14, rax
 * 00000001409FF0B2: xor     eax, eax
 * 00000001409FF0B4: test    r14, r14
 * 00000001409FF0B7: jz      loc_1409FEBBA
 * 00000001409FF0BD: mov     ecx, [rbx+990h]
 * 00000001409FF0C3: test    cl, 4
 * 00000001409FF0C6: jnz     loc_1409FF17B
 * 00000001409FF0CC: mov     eax, [rbx+7E4h]
 * 00000001409FF0D2: and     ecx, 20000000h
 * 00000001409FF0D8: mov     r8, [rbx+7C8h]
 * 00000001409FF0DF: neg     ecx
 * 00000001409FF0E1: mov     r10d, 1
 * 00000001409FF0E7: sbb     edx, edx
 * 00000001409FF0E9: and     edx, [rbx+924h]
 * 00000001409FF0EF: cmp     eax, 8
 * 00000001409FF0F2: jb      short loc_1409FF10C
 * 00000001409FF0F4: mov     ecx, eax
 * 00000001409FF0F6: shr     rcx, 3
 * 00000001409FF0FA: xor     r9d, r9d
 * 00000001409FF0FD: mov     [rbx], r9
 * 00000001409FF100: add     eax, 0FFFFFFF8h
 * 00000001409FF103: add     rbx, 8
 * 00000001409FF107: sub     rcx, r10
 * 00000001409FF10A: jnz     short loc_1409FF0FD
 * 00000001409FF10C: xor     ecx, ecx
 * 00000001409FF10E: test    eax, eax
 * 00000001409FF110: jz      short loc_1409FF122
 * 00000001409FF112: mov     r9d, 0FFFFFFFFh
 * 00000001409FF118: mov     [rbx], cl
 * 00000001409FF11A: add     rbx, r10
 * 00000001409FF11D: add     eax, r9d
 * 00000001409FF120: jnz     short loc_1409FF118
 * 00000001409FF122: mov     ebx, [r14+924h]
 * 00000001409FF129: mov     [r14+924h], edx
 * 00000001409FF130: cmp     edx, 3
 * 00000001409FF133: jz      short loc_1409FF165
 * 00000001409FF135: test    dword ptr [r14+990h], 10000000h
 * 00000001409FF140: cmovz   ecx, edx
 * 00000001409FF143: test    ecx, ecx
 * 00000001409FF145: jz      short loc_1409FF15C
 * 00000001409FF147: mov     rax, [r14+228h]
 * 00000001409FF14E: lea     rcx, [r8-8]
 * 00000001409FF152: mov     rdx, [rcx]
 * 00000001409FF155: call    KeGuardDispatchICall
 * 00000001409FF15A: jmp     short loc_1409FF174
 * 00000001409FF15C: mov     rax, [r14+100h]
 * 00000001409FF163: jmp     short loc_1409FF16C
 * 00000001409FF165: mov     rax, [r14+368h]
 * 00000001409FF16C: mov     rcx, r8
 * 00000001409FF16F: call    KeGuardDispatchICall
 * 00000001409FF174: mov     [r14+924h], ebx
 * 00000001409FF17B: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 00000001409FF183: jmp     short loc_1409FF18E
 * 00000001409FF185: mov     r14, rbx
 * 00000001409FF188: mov     [rbx+7E4h], eax
 * 00000001409FF18E: add     r15, r14
 * 00000001409FF191: mov     r9d, 1
 * 00000001409FF197: add     [r14+80Ch], r9d
 * 00000001409FF19E: mov     rax, r15
 * 00000001409FF1A1: mov     [rbp+0BE0h+var_880], r15
 * 00000001409FF1A8: xor     r8d, r8d
 * 00000001409FF1AB: lea     ecx, [r9+2Fh]
 * 00000001409FF1AF: lea     edx, [rcx-2Ah]
 * 00000001409FF1B2: mov     [rax], r8
 * 00000001409FF1B5: add     ecx, 0FFFFFFF8h
 * 00000001409FF1B8: add     rax, 8
 * 00000001409FF1BC: sub     rdx, r9
 * 00000001409FF1BF: jnz     short loc_1409FF1B2
 * 00000001409FF1C1: test    ecx, ecx
 * 00000001409FF1C3: jz      short loc_1409FF1D4
 * 00000001409FF1C5: mov     edx, 0FFFFFFFFh
 * 00000001409FF1CA: mov     [rax], r8b
 * 00000001409FF1CD: add     rax, r9
 * 00000001409FF1D0: add     ecx, edx
 * 00000001409FF1D2: jnz     short loc_1409FF1CA
 * 00000001409FF1D4: mov     r13, [rbp+0BE0h+var_C50]
 * 00000001409FF1D8: mov     [r15], r12d
 * 00000001409FF1DB: mov     r9, r13
 * 00000001409FF1DE: mov     r12d, [rsp+0CE0h+var_C78]
 * 00000001409FF1E3: mov     [r15+8], r13
 * 00000001409FF1E7: mov     [r15+10h], r12d
 * 00000001409FF1EB: add     [r14+828h], r12d
 * 00000001409FF1F2: mov     r11d, [r14+814h]
 * 00000001409FF1F9: lea     rcx, [r12+r13]
 * 00000001409FF1FD: mov     rbx, [r14+818h]
 * 00000001409FF204: cmp     r13, rcx
 * 00000001409FF207: jnb     short loc_1409FF21C
 * 00000001409FF209: mov     rax, r13
 * 00000001409FF20C: mov     edx, 40h ; '@'
 * 00000001409FF211: prefetchnta byte ptr [rax]
 * 00000001409FF214: add     rax, rdx
 * 00000001409FF217: cmp     rax, rcx
 * 00000001409FF21A: jb      short loc_1409FF211
 * 00000001409FF21C: mov     r10d, r12d
 * 00000001409FF21F: mov     r8, rbx
 * 00000001409FF222: shr     r10d, 7
 * 00000001409FF226: test    r10d, r10d
 * 00000001409FF229: jz      short loc_1409FF2A2
 * 00000001409FF22B: mov     esi, 1
 * 00000001409FF230: mov     rdi, 7010008004002001h
 * 00000001409FF23A: mov     r12d, 0FFFFFFFFh
 * 00000001409FF240: mov     eax, 8
 * 00000001409FF245: xor     r8, [r9]
 * 00000001409FF248: mov     ecx, r11d
 * 00000001409FF24B: rol     r8, cl
 * 00000001409FF24E: xor     r8, [r9+8]
 * 00000001409FF252: add     r9, 10h
 * 00000001409FF256: rol     r8, cl
 * 00000001409FF259: sub     rax, rsi
 * 00000001409FF25C: jnz     short loc_1409FF245
 * 00000001409FF25E: mov     rcx, r9
 * 00000001409FF261: sub     rcx, r13
 * 00000001409FF264: xor     rcx, rbx
 * 00000001409FF267: mov     rax, rcx
 * 00000001409FF26A: rol     rax, 11h
 * 00000001409FF26E: xor     rcx, rax
 * 00000001409FF271: mov     rax, rdi
 * 00000001409FF274: mul     rcx
 * 00000001409FF277: xor     r11d, edx
 * 00000001409FF27A: mov     [rbp+0BE0h+var_1B8], rdx
 * 00000001409FF281: xor     r11d, eax
 * 00000001409FF284: and     r11d, 3Fh
 * 00000001409FF288: cmovz   r11d, esi
 * 00000001409FF28C: add     r10d, r12d
 * 00000001409FF28F: jnz     short loc_1409FF240
 * 00000001409FF291: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FF296: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FF29D: mov     r12d, [rsp+0CE0h+var_C78]
 * 00000001409FF2A2: mov     edx, r12d
 * 00000001409FF2A5: mov     r10d, 1
 * 00000001409FF2AB: and     edx, 7Fh
 * 00000001409FF2AE: cmp     edx, 8
 * 00000001409FF2B1: jb      short loc_1409FF2CE
 * 00000001409FF2B3: mov     eax, edx
 * 00000001409FF2B5: shr     rax, 3
 * 00000001409FF2B9: xor     r8, [r9]
 * 00000001409FF2BC: mov     ecx, r11d
 * 00000001409FF2BF: rol     r8, cl
 * 00000001409FF2C2: add     r9, 8
 * 00000001409FF2C6: add     edx, 0FFFFFFF8h
 * 00000001409FF2C9: sub     rax, r10
 * 00000001409FF2CC: jnz     short loc_1409FF2B9
 * 00000001409FF2CE: test    edx, edx
 * 00000001409FF2D0: jz      short loc_1409FF2F0
 * 00000001409FF2D2: mov     esi, 0FFFFFFFFh
 * 00000001409FF2D7: movzx   eax, byte ptr [r9]
 * 00000001409FF2DB: mov     ecx, r11d
 * 00000001409FF2DE: xor     r8, rax
 * 00000001409FF2E1: add     r9, r10
 * 00000001409FF2E4: rol     r8, cl
 * 00000001409FF2E7: add     edx, esi
 * 00000001409FF2E9: jnz     short loc_1409FF2D7
 * 00000001409FF2EB: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FF2F0: mov     rax, r8
 * 00000001409FF2F3: jmp     short loc_1409FF2F8
 * 00000001409FF2F5: xor     r8d, eax
 * 00000001409FF2F8: shr     rax, 1Fh
 * 00000001409FF2FC: test    rax, rax
 * 00000001409FF2FF: jnz     short loc_1409FF2F5
 * 00000001409FF301: btr     r8d, 1Fh
 * 00000001409FF306: mov     rbx, r14
 * 00000001409FF309: mov     [r15+14h], r8d
 * 00000001409FF30D: mov     rax, [rbp+0BE0h+var_880]
 * 00000001409FF314: mov     r15d, dword ptr [rbp+0BE0h+var_BF8]
 * 00000001409FF318: mov     [rbp+0BE0h+var_AB0], rax
 * 00000001409FF31F: add     [r14+828h], r12d
 * 00000001409FF326: jmp     short loc_1409FF334
 * 00000001409FF328: mov     r13, [rbp+0BE0h+var_C50]
 * 00000001409FF32C: mov     [rcx], r12d
 * 00000001409FF32F: mov     r12d, [rsp+0CE0h+var_C78]
 * 00000001409FF334: test    dword ptr [rbx+990h], 40000000h
 * 00000001409FF33E: jz      short loc_1409FF35E
 * 00000001409FF340: test    r12d, r12d
 * 00000001409FF343: jz      short loc_1409FF35E
 * 00000001409FF345: mov     r9, [rbp+0BE0h+var_AB0]
 * 00000001409FF34C: mov     r8d, r12d
 * 00000001409FF34F: add     r9, 1Ch
 * 00000001409FF353: mov     rdx, r13
 * 00000001409FF356: mov     rcx, rbx
 * 00000001409FF359: call    sub_1403E9B1C
 * 00000001409FF35E: mov     rax, [rbp+0BE0h+var_AB0]
 * 00000001409FF365: xor     ecx, ecx
 * 00000001409FF367: mov     r12, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FF36C: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409FF373: mov     [rax+18h], ecx
 * 00000001409FF376: lea     r13d, [rcx+1]
 * 00000001409FF37A: mov     rax, [rbp+0BE0h+var_AB0]
 * 00000001409FF381: or      [rax+18h], r13d
 * 00000001409FF385: xor     eax, eax
 * 00000001409FF387: mov     r14, [rbp+0BE0h+var_B38]
 * 00000001409FF38E: test    r15d, r15d
 * 00000001409FF391: setnz   cl
 * 00000001409FF394: mov     dword ptr [r14+90h], 23h ; '#'
 * 00000001409FF39F: mov     eax, [r14+0B8h]
 * 00000001409FF3A6: and     eax, 0FFFFFFFEh
 * 00000001409FF3A9: or      ecx, eax
 * 00000001409FF3AB: mov     [r14+0B8h], ecx
 * 00000001409FF3B2: cmp     dword ptr [r14+0A0h], 94h
 * 00000001409FF3BD: jb      short loc_1409FF430
 * 00000001409FF3BF: mov     rax, [rbx+1F8h]
 * 00000001409FF3C6: mov     rcx, r12
 * 00000001409FF3C9: mov     r15, [r14+98h]
 * 00000001409FF3D0: call    KeGuardDispatchICall
 * 00000001409FF3D5: test    rax, rax
 * 00000001409FF3D8: jz      loc_1409FEBBA
 * 00000001409FF3DE: mov     ecx, [rax+50h]
 * 00000001409FF3E1: mov     eax, 2
 * 00000001409FF3E6: or      [r14+0B8h], eax
 * 00000001409FF3ED: add     rcx, r12
 * 00000001409FF3F0: mov     rax, [r15+70h]
 * 00000001409FF3F4: cmp     rax, r12
 * 00000001409FF3F7: jb      short loc_1409FF410
 * 00000001409FF3F9: cmp     rax, rcx
 * 00000001409FF3FC: jnb     short loc_1409FF410
 * 00000001409FF3FE: mov     rax, [rax]
 * 00000001409FF401: mov     [r14+0A8h], rax
 * 00000001409FF408: or      dword ptr [r14+0B8h], 4
 * 00000001409FF410: mov     rax, [r15+78h]
 * 00000001409FF414: cmp     rax, r12
 * 00000001409FF417: jb      short loc_1409FF430
 * 00000001409FF419: cmp     rax, rcx
 * 00000001409FF41C: jnb     short loc_1409FF430
 * 00000001409FF41E: mov     rax, [rax]
 * 00000001409FF421: mov     [r14+0B0h], rax
 * 00000001409FF428: or      dword ptr [r14+0B8h], 8
 * 00000001409FF430: test    dword ptr [rbx+990h], 400000h
 * 00000001409FF43A: mov     [rbp+0BE0h+var_B98], rbx
 * 00000001409FF43E: jz      loc_140A003DC
 * 00000001409FF444: mov     rax, [rbx+1F8h]
 * 00000001409FF44B: mov     rcx, r12
 * 00000001409FF44E: call    KeGuardDispatchICall
 * 00000001409FF453: mov     [rbp+0BE0h+var_C20], rax
 * 00000001409FF457: mov     r15, rax
 * 00000001409FF45A: test    rax, rax
 * 00000001409FF45D: jz      loc_1409FEA45
 * 00000001409FF463: movzx   r10d, word ptr [r15+6]
 * 00000001409FF468: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001409FF472: mov     ecx, [rbp+0BE0h+var_C58]
 * 00000001409FF475: mul     rcx
 * 00000001409FF478: xor     eax, eax
 * 00000001409FF47A: mov     word ptr [rbp+0BE0h+arg_8], r10w
 * 00000001409FF482: mov     r9, rdx
 * 00000001409FF485: shr     r9, 3
 * 00000001409FF489: mov     [rbp+0BE0h+var_C50], r9
 * 00000001409FF48D: test    r10w, r10w
 * 00000001409FF491: jnz     short loc_1409FF4F4
 * 00000001409FF493: test    dword ptr [rbx+990h], 200000h
 * 00000001409FF49D: jz      loc_140A0EA76
 * 00000001409FF4A3: cmp     [rbx+8F8h], eax
 * 00000001409FF4A9: jnz     loc_1409FEA45
 * 00000001409FF4AF: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF4B9: add     rax, rbx
 * 00000001409FF4BC: mov     [rbx+900h], rax
 * 00000001409FF4C3: xor     eax, eax
 * 00000001409FF4C5: mov     [rbx+908h], rax
 * 00000001409FF4CC: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409FF4D7: mov     [rbx+918h], r12
 * 00000001409FF4DE: mov     [rbx+8F8h], r13d
 * 00000001409FF4E5: xor     edx, edx
 * 00000001409FF4E7: mov     rcx, rbx
 * 00000001409FF4EA: call    $$b8
 * 00000001409FF4EF: jmp     loc_1409FEA45
 * 00000001409FF4F4: mov     rdx, [rbp+0BE0h+var_C48]
 * 00000001409FF4F8: movzx   r11d, word ptr [r15+14h]
 * 00000001409FF4FD: mov     r13, rdx
 * 00000001409FF500: mov     eax, r9d
 * 00000001409FF503: add     r11, 18h
 * 00000001409FF507: add     r11, r15
 * 00000001409FF50A: mov     [rsp+0CE0h+var_C88], r11
 * 00000001409FF50F: lea     r12, [rax+rax*2]
 * 00000001409FF513: shl     r12, 2
 * 00000001409FF517: mov     [rsp+0CE0h+var_C70], r12
 * 00000001409FF51C: lea     rax, [r12+rdx]
 * 00000001409FF520: xor     edx, edx
 * 00000001409FF522: mov     [rbp+0BE0h+var_C10], rax
 * 00000001409FF526: xor     eax, eax
 * 00000001409FF528: mov     r14, [rbp+0BE0h+var_C10]
 * 00000001409FF52C: mov     ecx, eax
 * 00000001409FF52E: mov     [rsp+0CE0h+var_C78], eax
 * 00000001409FF532: movzx   eax, r10w
 * 00000001409FF536: test    eax, eax
 * 00000001409FF538: jz      loc_1409FF770
 * 00000001409FF53E: mov     r8, r11
 * 00000001409FF541: mov     [rbp+0BE0h+var_C60], r11
 * 00000001409FF545: lea     r15d, [rdx+1]
 * 00000001409FF549: mov     edx, [r8+10h]
 * 00000001409FF54D: mov     eax, [r8+8]
 * 00000001409FF551: cmp     edx, eax
 * 00000001409FF553: mov     r9d, [r8+0Ch]
 * 00000001409FF557: cmovbe  edx, eax
 * 00000001409FF55A: mov     [rbp+0BE0h+var_BF0], r9d
 * 00000001409FF55E: add     edx, r9d
 * 00000001409FF561: mov     [rbp+0BE0h+var_BC4], edx
 * 00000001409FF564: test    ecx, ecx
 * 00000001409FF566: jz      short loc_1409FF57E
 * 00000001409FF568: lea     eax, [rcx-1]
 * 00000001409FF56B: lea     rax, [rax+rax*4]
 * 00000001409FF56F: cmp     edx, [r11+rax*8+0Ch]
 * 00000001409FF574: jb      loc_1409FF78D
 * 00000001409FF57A: mov     ecx, [rsp+0CE0h+var_C78]
 * 00000001409FF57E: cmp     r13, r14
 * 00000001409FF581: jz      loc_1409FF746
 * 00000001409FF587: mov     ecx, [r13+0]
 * 00000001409FF58B: mov     eax, [r13+4]
 * 00000001409FF58F: cmp     ecx, edx
 * 00000001409FF591: jnb     loc_1409FF72B
 * 00000001409FF597: cmp     eax, r9d
 * 00000001409FF59A: jbe     loc_1409FF72B
 * 00000001409FF5A0: cmp     ecx, r9d
 * 00000001409FF5A3: jb      loc_1409FF7EB
 * 00000001409FF5A9: cmp     eax, edx
 * 00000001409FF5AB: ja      loc_1409FF7EB
 * 00000001409FF5B1: mov     eax, [r13+8]
 * 00000001409FF5B5: mov     ecx, 1
 * 00000001409FF5BA: test    cl, al
 * 00000001409FF5BC: mov     [rbp+0BE0h+var_1B0], r13
 * 00000001409FF5C3: mov     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FF5C8: jnz     short loc_1409FF5D5
 * 00000001409FF5CA: mov     al, [rax+rcx]
 * 00000001409FF5CD: test    al, 20h
 * 00000001409FF5CF: jz      loc_1409FF71D
 * 00000001409FF5D5: mov     eax, [r8+8]
 * 00000001409FF5D9: mov     rdx, rcx
 * 00000001409FF5DC: mov     r15d, [r8+10h]
 * 00000001409FF5E0: mov     rcx, r13
 * 00000001409FF5E3: mov     r12d, [r8+0Ch]
 * 00000001409FF5E7: cmp     r15d, eax
 * 00000001409FF5EA: cmovbe  r15d, eax
 * 00000001409FF5EE: mov     rax, [rbx+418h]
 * 00000001409FF5F5: add     r15d, r12d
 * 00000001409FF5F8: call    KeGuardDispatchICall
 * 00000001409FF5FD: mov     r14, rax
 * 00000001409FF600: cmp     [rax], r12d
 * 00000001409FF603: jb      short loc_1409FF60B
 * 00000001409FF605: cmp     [rax+4], r15d
 * 00000001409FF609: jbe     short loc_1409FF67B
 * 00000001409FF60B: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 00000001409FF610: mov     eax, 80000000h
 * 00000001409FF615: mov     edx, r14d
 * 00000001409FF618: sub     edx, r8d
 * 00000001409FF61B: or      edx, eax
 * 00000001409FF61D: xor     eax, eax
 * 00000001409FF61F: test    dword ptr [rbx+990h], 200000h
 * 00000001409FF629: jz      loc_140A0EB01
 * 00000001409FF62F: cmp     [rbx+8F8h], eax
 * 00000001409FF635: jnz     short loc_1409FF67B
 * 00000001409FF637: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF641: xor     edx, edx
 * 00000001409FF643: add     rax, rbx
 * 00000001409FF646: mov     rcx, rbx
 * 00000001409FF649: mov     [rbx+900h], rax
 * 00000001409FF650: xor     eax, eax
 * 00000001409FF652: mov     [rbx+908h], rax
 * 00000001409FF659: mov     eax, 1
 * 00000001409FF65E: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409FF669: mov     [rbx+918h], r8
 * 00000001409FF670: mov     [rbx+8F8h], eax
 * 00000001409FF676: call    $$b8
 * 00000001409FF67B: mov     r8d, [r14]
 * 00000001409FF67E: mov     rcx, r14
 * 00000001409FF681: add     r8, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FF686: mov     rax, [rbx+420h]
 * 00000001409FF68D: mov     rdx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FF692: call    KeGuardDispatchICall
 * 00000001409FF697: mov     rdx, rax
 * 00000001409FF69A: cmp     [rax], r12d
 * 00000001409FF69D: jb      short loc_1409FF6A5
 * 00000001409FF69F: cmp     [rax+4], r15d
 * 00000001409FF6A3: jbe     short loc_1409FF712
 * 00000001409FF6A5: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 00000001409FF6AA: mov     eax, 80000000h
 * 00000001409FF6AF: sub     edx, r8d
 * 00000001409FF6B2: or      edx, eax
 * 00000001409FF6B4: xor     eax, eax
 * 00000001409FF6B6: test    dword ptr [rbx+990h], 200000h
 * 00000001409FF6C0: jz      loc_140A0EAD5
 * 00000001409FF6C6: cmp     [rbx+8F8h], eax
 * 00000001409FF6CC: jnz     short loc_1409FF712
 * 00000001409FF6CE: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF6D8: xor     edx, edx
 * 00000001409FF6DA: add     rax, rbx
 * 00000001409FF6DD: mov     rcx, rbx
 * 00000001409FF6E0: mov     [rbx+900h], rax
 * 00000001409FF6E7: xor     eax, eax
 * 00000001409FF6E9: mov     [rbx+908h], rax
 * 00000001409FF6F0: mov     eax, 1
 * 00000001409FF6F5: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409FF700: mov     [rbx+918h], r8
 * 00000001409FF707: mov     [rbx+8F8h], eax
 * 00000001409FF70D: call    $$b8
 * 00000001409FF712: mov     edx, [rbp+0BE0h+var_BC4]
 * 00000001409FF715: mov     r8, [rbp+0BE0h+var_C60]
 * 00000001409FF719: mov     r9d, [rbp+0BE0h+var_BF0]
 * 00000001409FF71D: add     r13, 0Ch
 * 00000001409FF721: cmp     r13, [rbp+0BE0h+var_C10]
 * 00000001409FF725: jnz     loc_1409FF587
 * 00000001409FF72B: mov     ecx, [rsp+0CE0h+var_C78]
 * 00000001409FF72F: mov     r15d, 1
 * 00000001409FF735: movzx   r10d, word ptr [rbp+0BE0h+arg_8]
 * 00000001409FF73D: mov     r11, [rsp+0CE0h+var_C88]
 * 00000001409FF742: mov     r14, [rbp+0BE0h+var_C10]
 * 00000001409FF746: add     ecx, r15d
 * 00000001409FF749: movzx   eax, r10w
 * 00000001409FF74D: add     r8, 28h ; '('
 * 00000001409FF751: mov     [rsp+0CE0h+var_C78], ecx
 * 00000001409FF755: mov     [rbp+0BE0h+var_C60], r8
 * 00000001409FF759: cmp     ecx, eax
 * 00000001409FF75B: jb      loc_1409FF549
 * 00000001409FF761: mov     r9, [rbp+0BE0h+var_C50]
 * 00000001409FF765: xor     edx, edx
 * 00000001409FF767: mov     r15, [rbp+0BE0h+var_C20]
 * 00000001409FF76B: mov     r12, [rsp+0CE0h+var_C70]
 * 00000001409FF770: cmp     r13, r14
 * 00000001409FF773: jz      loc_1409FF84D
 * 00000001409FF779: test    dword ptr [rbx+990h], 200000h
 * 00000001409FF783: jz      loc_140A0EB60
 * 00000001409FF789: xor     eax, eax
 * 00000001409FF78B: jmp     short loc_1409FF7FD
 * 00000001409FF78D: xor     eax, eax
 * 00000001409FF78F: test    dword ptr [rbx+990h], 200000h
 * 00000001409FF799: jz      loc_140A0EAA4
 * 00000001409FF79F: cmp     [rbx+8F8h], eax
 * 00000001409FF7A5: jnz     loc_1409FEA45
 * 00000001409FF7AB: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF7B5: add     rax, rbx
 * 00000001409FF7B8: mov     [rbx+900h], rax
 * 00000001409FF7BF: xor     eax, eax
 * 00000001409FF7C1: mov     [rbx+908h], rax
 * 00000001409FF7C8: mov     rax, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FF7CD: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409FF7D8: mov     [rbx+918h], rax
 * 00000001409FF7DF: mov     [rbx+8F8h], r15d
 * 00000001409FF7E6: jmp     loc_1409FF4E5
 * 00000001409FF7EB: xor     eax, eax
 * 00000001409FF7ED: test    dword ptr [rbx+990h], 200000h
 * 00000001409FF7F7: jz      loc_140A0EB2D
 * 00000001409FF7FD: cmp     [rbx+8F8h], eax
 * 00000001409FF803: jnz     loc_1409FEA45
 * 00000001409FF809: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF813: add     rax, rbx
 * 00000001409FF816: mov     [rbx+900h], rax
 * 00000001409FF81D: xor     eax, eax
 * 00000001409FF81F: mov     [rbx+908h], rax
 * 00000001409FF826: mov     rax, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FF82B: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409FF836: mov     [rbx+918h], rax
 * 00000001409FF83D: mov     eax, 1
 * 00000001409FF842: mov     [rbx+8F8h], eax
 * 00000001409FF848: jmp     loc_1409FF4E5
 * 00000001409FF84D: xor     r11d, r11d
 * 00000001409FF850: test    r9d, r9d
 * 00000001409FF853: jz      short loc_1409FF85E
 * 00000001409FF855: lea     ecx, [r9+6]
 * 00000001409FF859: and     ecx, 0FFFFFFF8h
 * 00000001409FF85C: jmp     short loc_1409FF861
 * 00000001409FF85E: mov     ecx, r11d
 * 00000001409FF861: mov     r14d, [rbx+7E4h]
 * 00000001409FF868: lea     eax, [rax+rax*2]
 * 00000001409FF86B: mov     r8d, [rbx+924h]
 * 00000001409FF872: lea     ecx, [rcx+rax*8]
 * 00000001409FF875: lea     eax, [r14+30h]
 * 00000001409FF879: add     eax, ecx
 * 00000001409FF87B: cmp     eax, [rbx+0A1Ch]
 * 00000001409FF881: jbe     loc_1409FF978
 * 00000001409FF887: mov     edx, eax
 * 00000001409FF889: mov     rcx, rbx
 * 00000001409FF88C: call    sub_140A11B30
 * 00000001409FF891: mov     [rbp+0BE0h+var_C20], rax
 * 00000001409FF895: mov     r13, rax
 * 00000001409FF898: test    rax, rax
 * 00000001409FF89B: jz      loc_1409FEBBE
 * 00000001409FF8A1: mov     ecx, [rbx+990h]
 * 00000001409FF8A7: test    cl, 4
 * 00000001409FF8AA: jnz     loc_1409FF95F
 * 00000001409FF8B0: mov     eax, [rbx+7E4h]
 * 00000001409FF8B6: and     ecx, 20000000h
 * 00000001409FF8BC: mov     r8, [rbx+7C8h]
 * 00000001409FF8C3: neg     ecx
 * 00000001409FF8C5: mov     r10d, 1
 * 00000001409FF8CB: sbb     edx, edx
 * 00000001409FF8CD: and     edx, [rbx+924h]
 * 00000001409FF8D3: cmp     eax, 8
 * 00000001409FF8D6: jb      short loc_1409FF8F0
 * 00000001409FF8D8: mov     ecx, eax
 * 00000001409FF8DA: shr     rcx, 3
 * 00000001409FF8DE: xor     r9d, r9d
 * 00000001409FF8E1: mov     [rbx], r9
 * 00000001409FF8E4: add     eax, 0FFFFFFF8h
 * 00000001409FF8E7: add     rbx, 8
 * 00000001409FF8EB: sub     rcx, r10
 * 00000001409FF8EE: jnz     short loc_1409FF8E1
 * 00000001409FF8F0: xor     ecx, ecx
 * 00000001409FF8F2: test    eax, eax
 * 00000001409FF8F4: jz      short loc_1409FF906
 * 00000001409FF8F6: mov     r9d, 0FFFFFFFFh
 * 00000001409FF8FC: mov     [rbx], cl
 * 00000001409FF8FE: add     rbx, r10
 * 00000001409FF901: add     eax, r9d
 * 00000001409FF904: jnz     short loc_1409FF8FC
 * 00000001409FF906: mov     ebx, [r13+924h]
 * 00000001409FF90D: mov     [r13+924h], edx
 * 00000001409FF914: cmp     edx, 3
 * 00000001409FF917: jz      short loc_1409FF949
 * 00000001409FF919: test    dword ptr [r13+990h], 10000000h
 * 00000001409FF924: cmovz   ecx, edx
 * 00000001409FF927: test    ecx, ecx
 * 00000001409FF929: jz      short loc_1409FF940
 * 00000001409FF92B: mov     rax, [r13+228h]
 * 00000001409FF932: lea     rcx, [r8-8]
 * 00000001409FF936: mov     rdx, [rcx]
 * 00000001409FF939: call    KeGuardDispatchICall
 * 00000001409FF93E: jmp     short loc_1409FF958
 * 00000001409FF940: mov     rax, [r13+100h]
 * 00000001409FF947: jmp     short loc_1409FF950
 * 00000001409FF949: mov     rax, [r13+368h]
 * 00000001409FF950: mov     rcx, r8
 * 00000001409FF953: call    KeGuardDispatchICall
 * 00000001409FF958: mov     [r13+924h], ebx
 * 00000001409FF95F: and     dword ptr [r13+990h], 0FFFFFFFBh
 * 00000001409FF967: mov     r9, [rbp+0BE0h+var_C50]
 * 00000001409FF96B: xor     r11d, r11d
 * 00000001409FF96E: movzx   r10d, word ptr [rbp+0BE0h+arg_8]
 * 00000001409FF976: jmp     short loc_1409FF985
 * 00000001409FF978: mov     r13, rbx
 * 00000001409FF97B: mov     [rbp+0BE0h+var_C20], rbx
 * 00000001409FF97F: mov     [rbx+7E4h], eax
 * 00000001409FF985: mov     ebx, 1
 * 00000001409FF98A: lea     r8, [r14+r13]
 * 00000001409FF98E: add     [r13+80Ch], ebx
 * 00000001409FF995: mov     rax, r8
 * 00000001409FF998: mov     [rbp+0BE0h+var_848], r8
 * 00000001409FF99F: lea     ecx, [rbx+2Fh]
 * 00000001409FF9A2: lea     edx, [rbx+5]
 * 00000001409FF9A5: mov     [rax], r11
 * 00000001409FF9A8: add     ecx, 0FFFFFFF8h
 * 00000001409FF9AB: add     rax, 8
 * 00000001409FF9AF: sub     rdx, rbx
 * 00000001409FF9B2: jnz     short loc_1409FF9A5
 * 00000001409FF9B4: test    ecx, ecx
 * 00000001409FF9B6: jz      short loc_1409FF9C7
 * 00000001409FF9B8: mov     edx, 0FFFFFFFFh
 * 00000001409FF9BD: mov     [rax], r11b
 * 00000001409FF9C0: add     rax, rbx
 * 00000001409FF9C3: add     ecx, edx
 * 00000001409FF9C5: jnz     short loc_1409FF9BD
 * 00000001409FF9C7: mov     rax, [rbp+0BE0h+var_C48]
 * 00000001409FF9CB: mov     dword ptr [r8], 1Eh
 * 00000001409FF9D2: mov     [r8+8], rax
 * 00000001409FF9D6: xor     eax, eax
 * 00000001409FF9D8: mov     [r8+10h], eax
 * 00000001409FF9DC: mov     rcx, [r13+818h]
 * 00000001409FF9E3: mov     rax, rcx
 * 00000001409FF9E6: jmp     short loc_1409FF9EA
 * 00000001409FF9E8: xor     ecx, eax
 * 00000001409FF9EA: shr     rax, 1Fh
 * 00000001409FF9EE: test    rax, rax
 * 00000001409FF9F1: jnz     short loc_1409FF9E8
 * 00000001409FF9F3: btr     ecx, 1Fh
 * 00000001409FF9F7: mov     rbx, r13
 * 00000001409FF9FA: mov     [r8+14h], ecx
 * 00000001409FF9FE: mov     r8d, 0FFFEh
 * 00000001409FFA04: mov     rax, [rbp+0BE0h+var_848]
 * 00000001409FFA0B: mov     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FFA10: mov     [rbp+0BE0h+var_B18], rax
 * 00000001409FFA17: mov     [rbp+0BE0h+var_B98], rbx
 * 00000001409FFA1B: mov     [rax+18h], rcx
 * 00000001409FFA1F: mov     ecx, [r15+50h]
 * 00000001409FFA23: mov     rax, [rbp+0BE0h+var_B18]
 * 00000001409FFA2A: mov     [rax+20h], ecx
 * 00000001409FFA2D: mov     rax, [rbp+0BE0h+var_B18]
 * 00000001409FFA34: mov     ecx, [rbp+0BE0h+var_C58]
 * 00000001409FFA37: mov     [rax+24h], ecx
 * 00000001409FFA3A: mov     rax, [rbp+0BE0h+var_B18]
 * 00000001409FFA41: mov     [rax+28h], r10w
 * 00000001409FFA46: xor     eax, eax
 * 00000001409FFA48: cmp     dword ptr [rbp+0BE0h+var_BF8], eax
 * 00000001409FFA4B: mov     ecx, eax
 * 00000001409FFA4D: mov     rdx, [rbp+0BE0h+var_B18]
 * 00000001409FFA54: setnz   cl
 * 00000001409FFA57: movzx   eax, word ptr [rdx+2Ah]
 * 00000001409FFA5B: and     ax, r8w
 * 00000001409FFA5F: or      cx, ax
 * 00000001409FFA62: mov     [rdx+2Ah], cx
 * 00000001409FFA66: mov     rcx, [rbp+0BE0h+var_B18]
 * 00000001409FFA6D: lea     rdx, [rcx+30h]
 * 00000001409FFA71: mov     [rbp+0BE0h+var_C50], rdx
 * 00000001409FFA75: test    r9d, r9d
 * 00000001409FFA78: jz      short loc_1409FFA8B
 * 00000001409FFA7A: lea     r14d, [r9-1]
 * 00000001409FFA7E: add     r14, 7
 * 00000001409FFA82: and     r14, 0FFFFFFFFFFFFFFF8h
 * 00000001409FFA86: add     r14, rdx
 * 00000001409FFA89: jmp     short loc_1409FFA8E
 * 00000001409FFA8B: mov     r14, rdx
 * 00000001409FFA8E: movzx   eax, word ptr [rcx+28h]
 * 00000001409FFA92: mov     [rbp+0BE0h+var_C60], r14
 * 00000001409FFA96: lea     rcx, [rax+rax*2]
 * 00000001409FFA9A: xor     eax, eax
 * 00000001409FFA9C: test    r9d, r9d
 * 00000001409FFA9F: lea     r8, [r14+rcx*8]
 * 00000001409FFAA3: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FFAA7: mov     [rsp+0CE0h+var_C70], r8
 * 00000001409FFAAC: lea     r15d, [rax+0Ch]
 * 00000001409FFAB0: cmovz   r15, r12
 * 00000001409FFAB4: add     r15, r9
 * 00000001409FFAB7: mov     [rbp+0BE0h+var_BF8], r15
 * 00000001409FFABB: cmp     ax, r10w
 * 00000001409FFABF: jnb     short loc_1409FFAFD
 * 00000001409FFAC1: movzx   edx, r10w
 * 00000001409FFAC5: lea     rax, [r14+8]
 * 00000001409FFAC9: xor     r10d, r10d
 * 00000001409FFACC: mov     r12d, 80000000h
 * 00000001409FFAD2: lea     esi, [r10+2]
 * 00000001409FFAD6: lea     r11d, [r10+1]
 * 00000001409FFADA: mov     rcx, rsi
 * 00000001409FFADD: mov     [rax-8], r10d
 * 00000001409FFAE1: mov     [rax-4], r10d
 * 00000001409FFAE5: mov     [rax], r12d
 * 00000001409FFAE8: add     rax, 0Ch
 * 00000001409FFAEC: sub     rcx, r11
 * 00000001409FFAEF: jnz     short loc_1409FFADD
 * 00000001409FFAF1: sub     rdx, r11
 * 00000001409FFAF4: jnz     short loc_1409FFADA
 * 00000001409FFAF6: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FFAFB: xor     eax, eax
 * 00000001409FFAFD: cmp     r14, r8
 * 00000001409FFB00: jz      loc_140A003DC
 * 00000001409FFB06: mov     r12, [rsp+0CE0h+var_C88]
 * 00000001409FFB0B: jmp     short loc_1409FFB0F
 * 00000001409FFB0D: xor     eax, eax
 * 00000001409FFB0F: mov     r11d, eax
 * 00000001409FFB12: mov     eax, [r12+24h]
 * 00000001409FFB17: bt      eax, 19h
 * 00000001409FFB1B: jb      loc_1409FFD21
 * 00000001409FFB21: mov     ecx, [r12]
 * 00000001409FFB25: cmp     ecx, 54494E49h
 * 00000001409FFB2B: jnz     short loc_1409FFB3C
 * 00000001409FFB2D: cmp     dword ptr [r12+4], 4742444Bh
 * 00000001409FFB36: jz      loc_1409FFD21
 * 00000001409FFB3C: cmp     ecx, 45474150h
 * 00000001409FFB42: jnz     short loc_1409FFB74
 * 00000001409FFB44: movzx   eax, word ptr [r12+4]
 * 00000001409FFB4A: mov     edx, 7877h
 * 00000001409FFB4F: cmp     ax, dx
 * 00000001409FFB52: jz      loc_1409FFD21
 * 00000001409FFB58: mov     edx, 7277h
 * 00000001409FFB5D: cmp     ax, dx
 * 00000001409FFB60: jz      loc_1409FFD21
 * 00000001409FFB66: mov     edx, 7777h
 * 00000001409FFB6B: cmp     ax, dx
 * 00000001409FFB6E: jz      loc_1409FFD21
 * 00000001409FFB74: cmp     ecx, 41525245h
 * 00000001409FFB7A: jnz     short loc_1409FFB8D
 * 00000001409FFB7C: mov     eax, 4154h
 * 00000001409FFB81: cmp     [r12+4], ax
 * 00000001409FFB87: jz      loc_1409FFD21
 * 00000001409FFB8D: mov     rax, [r13+938h]
 * 00000001409FFB94: mov     r10d, 7
 * 00000001409FFB9A: mov     r8, [r13+930h]
 * 00000001409FFBA1: mov     r9, r12
 * 00000001409FFBA4: mov     [rbp+0BE0h+var_828], rax
 * 00000001409FFBAB: mov     rax, [r13+940h]
 * 00000001409FFBB2: mov     [rbp+0BE0h+var_820], rax
 * 00000001409FFBB9: lea     ebx, [r10-6]
 * 00000001409FFBBD: mov     rax, [r13+948h]
 * 00000001409FFBC4: mov     [rbp+0BE0h+var_818], rax
 * 00000001409FFBCB: mov     [rbp+0BE0h+var_830], r8
 * 00000001409FFBD2: movzx   edx, byte ptr [r9]
 * 00000001409FFBD6: add     r9, rbx
 * 00000001409FFBD9: movzx   eax, byte ptr [r8]
 * 00000001409FFBDD: add     r8, rbx
 * 00000001409FFBE0: cmp     rdx, rax
 * 00000001409FFBE3: jnz     short loc_1409FFBF4
 * 00000001409FFBE5: mov     eax, 0FFFFFFFFh
 * 00000001409FFBEA: add     r10d, eax
 * 00000001409FFBED: jnz     short loc_1409FFBD2
 * 00000001409FFBEF: jmp     loc_1409FFCA1
 * 00000001409FFBF4: mov     r9, [rbp+0BE0h+var_828]
 * 00000001409FFBFB: mov     r8d, 8
 * 00000001409FFC01: mov     r10, r12
 * 00000001409FFC04: mov     rcx, [r10]
 * 00000001409FFC07: add     r10, 8
 * 00000001409FFC0B: mov     rax, [r9]
 * 00000001409FFC0E: add     r9, 8
 * 00000001409FFC12: cmp     rcx, rax
 * 00000001409FFC15: jnz     short loc_1409FFC45
 * 00000001409FFC17: add     r8d, 0FFFFFFF8h
 * 00000001409FFC1B: cmp     r8d, 8
 * 00000001409FFC1F: jnb     short loc_1409FFC04
 * 00000001409FFC21: test    r8d, r8d
 * 00000001409FFC24: jz      short loc_1409FFCA1
 * 00000001409FFC26: movzx   edx, byte ptr [r10]
 * 00000001409FFC2A: add     r10, rbx
 * 00000001409FFC2D: movzx   eax, byte ptr [r9]
 * 00000001409FFC31: add     r9, rbx
 * 00000001409FFC34: cmp     rdx, rax
 * 00000001409FFC37: jnz     short loc_1409FFC45
 * 00000001409FFC39: mov     eax, 0FFFFFFFFh
 * 00000001409FFC3E: add     r8d, eax
 * 00000001409FFC41: jnz     short loc_1409FFC26
 * 00000001409FFC43: jmp     short loc_1409FFCA1
 * 00000001409FFC45: mov     r8, [rbp+0BE0h+var_820]
 * 00000001409FFC4C: mov     r10d, 4
 * 00000001409FFC52: mov     r9, r12
 * 00000001409FFC55: movzx   edx, byte ptr [r9]
 * 00000001409FFC59: add     r9, rbx
 * 00000001409FFC5C: movzx   eax, byte ptr [r8]
 * 00000001409FFC60: add     r8, rbx
 * 00000001409FFC63: cmp     rdx, rax
 * 00000001409FFC66: jnz     short loc_1409FFC74
 * 00000001409FFC68: mov     eax, 0FFFFFFFFh
 * 00000001409FFC6D: add     r10d, eax
 * 00000001409FFC70: jnz     short loc_1409FFC55
 * 00000001409FFC72: jmp     short loc_1409FFCA1
 * 00000001409FFC74: mov     r8, [rbp+0BE0h+var_818]
 * 00000001409FFC7B: mov     r10d, 6
 * 00000001409FFC81: mov     r9, r12
 * 00000001409FFC84: movzx   edx, byte ptr [r9]
 * 00000001409FFC88: add     r9, rbx
 * 00000001409FFC8B: movzx   eax, byte ptr [r8]
 * 00000001409FFC8F: add     r8, rbx
 * 00000001409FFC92: cmp     rdx, rax
 * 00000001409FFC95: jnz     short loc_1409FFCA4
 * 00000001409FFC97: mov     eax, 0FFFFFFFFh
 * 00000001409FFC9C: add     r10d, eax
 * 00000001409FFC9F: jnz     short loc_1409FFC84
 * 00000001409FFCA1: mov     r11d, ebx
 * 00000001409FFCA4: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FFCA8: mov     ecx, [r12+24h]
 * 00000001409FFCAD: xor     eax, eax
 * 00000001409FFCAF: test    ecx, ecx
 * 00000001409FFCB1: cmovs   r11d, ebx
 * 00000001409FFCB5: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 00000001409FFCBC: test    r11d, r11d
 * 00000001409FFCBF: jz      short loc_1409FFCEC
 * 00000001409FFCC1: cmp     dword ptr [r12], 54494E49h
 * 00000001409FFCC9: jnz     short loc_1409FFCEC
 * 00000001409FFCCB: cmp     dword ptr [r12+4], 4742444Bh
 * 00000001409FFCD4: jnz     short loc_1409FFCEC
 * 00000001409FFCD6: test    dword ptr [r13+994h], 2000h
 * 00000001409FFCE1: cmovnz  r11d, eax
 * 00000001409FFCE5: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 00000001409FFCEC: test    dword ptr [r13+994h], 4000h
 * 00000001409FFCF7: jz      short loc_1409FFD2E
 * 00000001409FFCF9: bt      ecx, 1Dh
 * 00000001409FFCFD: mov     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FFD02: jnb     short loc_1409FFD33
 * 00000001409FFD04: cmp     rcx, [r13+5E8h]
 * 00000001409FFD0B: jz      short loc_1409FFD16
 * 00000001409FFD0D: cmp     rcx, [r13+5F0h]
 * 00000001409FFD14: jnz     short loc_1409FFD33
 * 00000001409FFD16: mov     r11d, ebx
 * 00000001409FFD19: mov     dword ptr [rbp+0BE0h+arg_8], ebx
 * 00000001409FFD1F: jmp     short loc_1409FFD33
 * 00000001409FFD21: mov     ebx, 1
 * 00000001409FFD26: mov     r11d, ebx
 * 00000001409FFD29: jmp     loc_1409FFCA8
 * 00000001409FFD2E: mov     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FFD33: mov     ebx, [r12+0Ch]
 * 00000001409FFD38: mov     r12d, [r12+10h]
 * 00000001409FFD3D: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409FFD42: mov     r8, [rbp+0BE0h+var_C10]
 * 00000001409FFD46: mov     [rsp+0CE0h+var_C78], ebx
 * 00000001409FFD4A: mov     eax, [rax+8]
 * 00000001409FFD4D: cmp     r12d, eax
 * 00000001409FFD50: cmovbe  r12d, eax
 * 00000001409FFD54: add     r12d, ebx
 * 00000001409FFD57: mov     [rbp+0BE0h+var_BF0], r12d
 * 00000001409FFD5B: cmp     r9, r8
 * 00000001409FFD5E: jz      short loc_1409FFD69
 * 00000001409FFD60: mov     r13d, [r9]
 * 00000001409FFD63: mov     eax, [r9+4]
 * 00000001409FFD67: jmp     short loc_1409FFD6E
 * 00000001409FFD69: xor     eax, eax
 * 00000001409FFD6B: mov     r13d, eax
 * 00000001409FFD6E: mov     [rbp+0BE0h+var_BC4], eax
 * 00000001409FFD71: mov     [rbp+0BE0h+var_C58], ebx
 * 00000001409FFD74: cmp     r9, r8
 * 00000001409FFD77: jz      loc_1409FFF30
 * 00000001409FFD7D: cmp     r13d, ebx
 * 00000001409FFD80: jbe     loc_1409FFF30
 * 00000001409FFD86: cmp     eax, r12d
 * 00000001409FFD89: ja      loc_1409FFF30
 * 00000001409FFD8F: test    r11d, r11d
 * 00000001409FFD92: jnz     loc_1409FFF30
 * 00000001409FFD98: mov     [r14], ebx
 * 00000001409FFD9B: lea     rdx, [rbp+0BE0h+var_9C8]
 * 00000001409FFDA2: mov     [r14+4], r13d
 * 00000001409FFDA6: lea     r8, [rbp+0BE0h+var_7D0]
 * 00000001409FFDAD: mov     eax, [r14]
 * 00000001409FFDB0: mov     r10d, r13d
 * 00000001409FFDB3: sub     r10d, eax
 * 00000001409FFDB6: mov     [rbp+0BE0h+var_C58], r13d
 * 00000001409FFDBA: mov     r11d, r10d
 * 00000001409FFDBD: lea     r14, [rcx+rax]
 * 00000001409FFDC1: add     r11, r14
 * 00000001409FFDC4: xor     eax, eax
 * 00000001409FFDC6: mov     r9d, eax
 * 00000001409FFDC9: mov     rcx, [r8]
 * 00000001409FFDCC: mov     eax, [rdx]
 * 00000001409FFDCE: add     rax, rcx
 * 00000001409FFDD1: cmp     r14, rax
 * 00000001409FFDD4: jnb     short loc_1409FFDDF
 * 00000001409FFDD6: cmp     r11, rcx
 * 00000001409FFDD9: ja      loc_1409FFF28
 * 00000001409FFDDF: inc     r9d
 * 00000001409FFDE2: add     r8, 8
 * 00000001409FFDE6: add     rdx, 4
 * 00000001409FFDEA: cmp     r9d, 6
 * 00000001409FFDEE: jb      short loc_1409FFDC9
 * 00000001409FFDF0: mov     r15, [rbp+0BE0h+var_C20]
 * 00000001409FFDF4: mov     rbx, r14
 * 00000001409FFDF7: mov     rax, r14
 * 00000001409FFDFA: add     [r15+828h], r10d
 * 00000001409FFE01: mov     r12d, [r15+814h]
 * 00000001409FFE08: mov     r15, [r15+818h]
 * 00000001409FFE0F: cmp     r14, r11
 * 00000001409FFE12: jnb     short loc_1409FFE24
 * 00000001409FFE14: mov     ecx, 40h ; '@'
 * 00000001409FFE19: prefetchnta byte ptr [rax]
 * 00000001409FFE1C: add     rax, rcx
 * 00000001409FFE1F: cmp     rax, r11
 * 00000001409FFE22: jb      short loc_1409FFE19
 * 00000001409FFE24: mov     r9d, r10d
 * 00000001409FFE27: mov     r8, r15
 * 00000001409FFE2A: shr     r9d, 7
 * 00000001409FFE2E: mov     r11d, 1
 * 00000001409FFE34: test    r9d, r9d
 * 00000001409FFE37: jz      short loc_1409FFEA4
 * 00000001409FFE39: mov     rsi, 7010008004002001h
 * 00000001409FFE43: mov     edx, 8
 * 00000001409FFE48: mov     rax, [rbx]
 * 00000001409FFE4B: mov     ecx, r12d
 * 00000001409FFE4E: xor     rax, r8
 * 00000001409FFE51: mov     r8, [rbx+8]
 * 00000001409FFE55: rol     rax, cl
 * 00000001409FFE58: add     rbx, 10h
 * 00000001409FFE5C: xor     r8, rax
 * 00000001409FFE5F: rol     r8, cl
 * 00000001409FFE62: sub     rdx, r11
 * 00000001409FFE65: jnz     short loc_1409FFE48
 * 00000001409FFE67: mov     rcx, rbx
 * 00000001409FFE6A: sub     rcx, r14
 * 00000001409FFE6D: xor     rcx, r15
 * 00000001409FFE70: mov     rax, rcx
 * 00000001409FFE73: rol     rax, 11h
 * 00000001409FFE77: xor     rcx, rax
 * 00000001409FFE7A: mov     rax, rsi
 * 00000001409FFE7D: mul     rcx
 * 00000001409FFE80: xor     r12d, edx
 * 00000001409FFE83: mov     [rbp+0BE0h+var_1A8], rdx
 * 00000001409FFE8A: xor     r12d, eax
 * 00000001409FFE8D: mov     eax, 0FFFFFFFFh
 * 00000001409FFE92: and     r12d, 3Fh
 * 00000001409FFE96: cmovz   r12d, r11d
 * 00000001409FFE9A: add     r9d, eax
 * 00000001409FFE9D: jnz     short loc_1409FFE43
 * 00000001409FFE9F: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FFEA4: and     r10d, 7Fh
 * 00000001409FFEA8: cmp     r10d, 8
 * 00000001409FFEAC: jb      short loc_1409FFECB
 * 00000001409FFEAE: mov     edx, r10d
 * 00000001409FFEB1: shr     rdx, 3
 * 00000001409FFEB5: xor     r8, [rbx]
 * 00000001409FFEB8: mov     ecx, r12d
 * 00000001409FFEBB: rol     r8, cl
 * 00000001409FFEBE: add     rbx, 8
 * 00000001409FFEC2: add     r10d, 0FFFFFFF8h
 * 00000001409FFEC6: sub     rdx, r11
 * 00000001409FFEC9: jnz     short loc_1409FFEB5
 * 00000001409FFECB: test    r10d, r10d
 * 00000001409FFECE: jz      short loc_1409FFEEE
 * 00000001409FFED0: mov     esi, 0FFFFFFFFh
 * 00000001409FFED5: movzx   eax, byte ptr [rbx]
 * 00000001409FFED8: mov     ecx, r12d
 * 00000001409FFEDB: xor     r8, rax
 * 00000001409FFEDE: add     rbx, r11
 * 00000001409FFEE1: rol     r8, cl
 * 00000001409FFEE4: add     r10d, esi
 * 00000001409FFEE7: jnz     short loc_1409FFED5
 * 00000001409FFEE9: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FFEEE: mov     rax, r8
 * 00000001409FFEF1: shr     rax, 1Fh
 * 00000001409FFEF5: xor     edx, edx
 * 00000001409FFEF7: jmp     short loc_1409FFF00
 * 00000001409FFEF9: xor     r8d, eax
 * 00000001409FFEFC: shr     rax, 1Fh
 * 00000001409FFF00: test    rax, rax
 * 00000001409FFF03: jnz     short loc_1409FFEF9
 * 00000001409FFF05: mov     rax, [rbp+0BE0h+var_C60]
 * 00000001409FFF09: btr     r8d, 1Fh
 * 00000001409FFF0E: mov     r12d, [rbp+0BE0h+var_BF0]
 * 00000001409FFF12: mov     ebx, [rsp+0CE0h+var_C78]
 * 00000001409FFF16: mov     r15, [rbp+0BE0h+var_BF8]
 * 00000001409FFF1A: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FFF1E: mov     [rax+8], r8d
 * 00000001409FFF22: mov     r8, [rbp+0BE0h+var_C10]
 * 00000001409FFF26: jmp     short loc_1409FFF32
 * 00000001409FFF28: mov     r8, [rbp+0BE0h+var_C10]
 * 00000001409FFF2C: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FFF30: xor     edx, edx
 * 00000001409FFF32: cmp     r13d, ebx
 * 00000001409FFF35: jb      loc_140A001BF
 * 00000001409FFF3B: cmp     [rbp+0BE0h+var_BC4], r12d
 * 00000001409FFF3F: ja      loc_140A001BF
 * 00000001409FFF45: cmp     r9, r8
 * 00000001409FFF48: jz      loc_140A001BF
 * 00000001409FFF4E: mov     r13d, [r15+4]
 * 00000001409FFF52: cmp     r13d, r12d
 * 00000001409FFF55: ja      loc_140A001BF
 * 00000001409FFF5B: mov     rax, [rbp+0BE0h+var_C50]
 * 00000001409FFF5F: mov     ecx, 1
 * 00000001409FFF64: cmp     r15, r8
 * 00000001409FFF67: jz      loc_140A001BF
 * 00000001409FFF6D: cmp     dword ptr [rbp+0BE0h+arg_8], edx
 * 00000001409FFF73: jz      short loc_1409FFF7D
 * 00000001409FFF75: mov     r8b, 80h
 * 00000001409FFF78: jmp     loc_140A00187
 * 00000001409FFF7D: mov     r15d, [r15]
 * 00000001409FFF80: mov     ebx, [r9+4]
 * 00000001409FFF84: mov     r11, [rbp+0BE0h+var_C20]
 * 00000001409FFF88: mov     [rbp+0BE0h+var_C58], r15d
 * 00000001409FFF8C: cmp     r15d, ebx
 * 00000001409FFF8F: jnb     short loc_1409FFFFB
 * 00000001409FFF91: test    dword ptr [r11+990h], 200000h
 * 00000001409FFF9C: jz      loc_140A0EB93
 * 00000001409FFFA2: xor     eax, eax
 * 00000001409FFFA4: cmp     [r11+8F8h], eax
 * 00000001409FFFAB: jnz     short loc_1409FFFFB
 * 00000001409FFFAD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FFFB7: xor     edx, edx
 * 00000001409FFFB9: add     rax, r11
 * 00000001409FFFBC: mov     rcx, r11
 * 00000001409FFFBF: mov     [r11+900h], rax
 * 00000001409FFFC6: xor     eax, eax
 * 00000001409FFFC8: mov     [r11+908h], rax
 * 00000001409FFFCF: mov     rax, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FFFD4: mov     qword ptr [r11+910h], 10Fh
 * 00000001409FFFDF: mov     [r11+918h], rax
 * 00000001409FFFE6: mov     eax, 1
 * 00000001409FFFEB: mov     [r11+8F8h], eax
 * 00000001409FFFF2: call    $$b8
 * 00000001409FFFF7: mov     r11, [rbp+0BE0h+var_C20]
 * 00000001409FFFFB: mov     r14, rbx
 * 00000001409FFFFE: lea     rdx, [rbp+0BE0h+var_9C8]
 * 0000000140A00005: add     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0000A: lea     r8, [rbp+0BE0h+var_7D0]
 * 0000000140A00011: mov     r9d, r15d
 * 0000000140A00014: sub     r9d, ebx
 * 0000000140A00017: mov     ebx, r9d
 * 0000000140A0001A: add     rbx, r14
 * 0000000140A0001D: xor     eax, eax
 * 0000000140A0001F: mov     r10d, eax
 * 0000000140A00022: mov     rcx, [r8]
 * 0000000140A00025: mov     eax, [rdx]
 * 0000000140A00027: add     rax, rcx
 * 0000000140A0002A: cmp     r14, rax
 * 0000000140A0002D: jnb     short loc_140A00038
 * 0000000140A0002F: cmp     rbx, rcx
 * 0000000140A00032: ja      loc_140A00171
 * 0000000140A00038: mov     eax, 4
 * 0000000140A0003D: inc     r10d
 * 0000000140A00040: add     rdx, rax
 * 0000000140A00043: add     r8, 8
 * 0000000140A00047: cmp     r10d, 6
 * 0000000140A0004B: jb      short loc_140A00022
 * 0000000140A0004D: cmp     r9d, eax
 * 0000000140A00050: jb      loc_140A00171
 * 0000000140A00056: add     [r11+828h], r9d
 * 0000000140A0005D: mov     rax, r14
 * 0000000140A00060: mov     r12d, [r11+814h]
 * 0000000140A00067: mov     r15, [r11+818h]
 * 0000000140A0006E: mov     r11, r14
 * 0000000140A00071: cmp     r14, rbx
 * 0000000140A00074: jnb     short loc_140A00086
 * 0000000140A00076: mov     ecx, 40h ; '@'
 * 0000000140A0007B: prefetchnta byte ptr [rax]
 * 0000000140A0007E: add     rax, rcx
 * 0000000140A00081: cmp     rax, rbx
 * 0000000140A00084: jb      short loc_140A0007B
 * 0000000140A00086: mov     r10d, r9d
 * 0000000140A00089: mov     r8, r15
 * 0000000140A0008C: shr     r10d, 7
 * 0000000140A00090: mov     ebx, 1
 * 0000000140A00095: test    r10d, r10d
 * 0000000140A00098: jz      short loc_140A00105
 * 0000000140A0009A: mov     rsi, 7010008004002001h
 * 0000000140A000A4: mov     edx, 8
 * 0000000140A000A9: mov     rax, [r11]
 * 0000000140A000AC: mov     ecx, r12d
 * 0000000140A000AF: xor     rax, r8
 * 0000000140A000B2: mov     r8, [r11+8]
 * 0000000140A000B6: rol     rax, cl
 * 0000000140A000B9: add     r11, 10h
 * 0000000140A000BD: xor     r8, rax
 * 0000000140A000C0: rol     r8, cl
 * 0000000140A000C3: sub     rdx, rbx
 * 0000000140A000C6: jnz     short loc_140A000A9
 * 0000000140A000C8: mov     rcx, r11
 * 0000000140A000CB: sub     rcx, r14
 * 0000000140A000CE: xor     rcx, r15
 * 0000000140A000D1: mov     rax, rcx
 * 0000000140A000D4: rol     rax, 11h
 * 0000000140A000D8: xor     rcx, rax
 * 0000000140A000DB: mov     rax, rsi
 * 0000000140A000DE: mul     rcx
 * 0000000140A000E1: xor     r12d, edx
 * 0000000140A000E4: mov     [rbp+0BE0h+var_690], rdx
 * 0000000140A000EB: xor     r12d, eax
 * 0000000140A000EE: mov     eax, 0FFFFFFFFh
 * 0000000140A000F3: and     r12d, 3Fh
 * 0000000140A000F7: cmovz   r12d, ebx
 * 0000000140A000FB: add     r10d, eax
 * 0000000140A000FE: jnz     short loc_140A000A4
 * 0000000140A00100: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A00105: and     r9d, 7Fh
 * 0000000140A00109: cmp     r9d, 8
 * 0000000140A0010D: jb      short loc_140A0012C
 * 0000000140A0010F: mov     edx, r9d
 * 0000000140A00112: shr     rdx, 3
 * 0000000140A00116: xor     r8, [r11]
 * 0000000140A00119: mov     ecx, r12d
 * 0000000140A0011C: rol     r8, cl
 * 0000000140A0011F: add     r11, 8
 * 0000000140A00123: add     r9d, 0FFFFFFF8h
 * 0000000140A00127: sub     rdx, rbx
 * 0000000140A0012A: jnz     short loc_140A00116
 * 0000000140A0012C: test    r9d, r9d
 * 0000000140A0012F: jz      short loc_140A00150
 * 0000000140A00131: mov     esi, 0FFFFFFFFh
 * 0000000140A00136: movzx   eax, byte ptr [r11]
 * 0000000140A0013A: mov     ecx, r12d
 * 0000000140A0013D: xor     r8, rax
 * 0000000140A00140: add     r11, rbx
 * 0000000140A00143: rol     r8, cl
 * 0000000140A00146: add     r9d, esi
 * 0000000140A00149: jnz     short loc_140A00136
 * 0000000140A0014B: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A00150: mov     rax, r8
 * 0000000140A00153: shr     rax, 7
 * 0000000140A00157: xor     edx, edx
 * 0000000140A00159: jmp     short loc_140A00162
 * 0000000140A0015B: xor     r8b, al
 * 0000000140A0015E: shr     rax, 7
 * 0000000140A00162: test    rax, rax
 * 0000000140A00165: jnz     short loc_140A0015B
 * 0000000140A00167: mov     r12d, [rbp+0BE0h+var_BF0]
 * 0000000140A0016B: and     r8b, 7Fh
 * 0000000140A0016F: jmp     short loc_140A00176
 * 0000000140A00171: xor     edx, edx
 * 0000000140A00173: mov     r8b, 80h
 * 0000000140A00176: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A0017A: mov     ecx, 1
 * 0000000140A0017F: mov     r15, [rbp+0BE0h+var_BF8]
 * 0000000140A00183: mov     rax, [rbp+0BE0h+var_C50]
 * 0000000140A00187: mov     [rax], r8b
 * 0000000140A0018A: mov     r8d, 0Ch
 * 0000000140A00190: mov     rax, [rbp+0BE0h+var_C50]
 * 0000000140A00194: add     r9, r8
 * 0000000140A00197: add     r15, r8
 * 0000000140A0019A: mov     [rbp+0BE0h+var_C48], r9
 * 0000000140A0019E: mov     r8, [rbp+0BE0h+var_C10]
 * 0000000140A001A2: add     rax, rcx
 * 0000000140A001A5: mov     [rbp+0BE0h+var_C50], rax
 * 0000000140A001A9: mov     [rbp+0BE0h+var_BF8], r15
 * 0000000140A001AD: cmp     r15, r8
 * 0000000140A001B0: jz      short loc_140A001B6
 * 0000000140A001B2: mov     r13d, [r15+4]
 * 0000000140A001B6: cmp     r13d, r12d
 * 0000000140A001B9: jbe     loc_1409FFF64
 * 0000000140A001BF: mov     r14, [rbp+0BE0h+var_C60]
 * 0000000140A001C3: xor     eax, eax
 * 0000000140A001C5: cmp     dword ptr [rbp+0BE0h+arg_8], eax
 * 0000000140A001CB: jnz     loc_140A00367
 * 0000000140A001D1: mov     eax, [rbp+0BE0h+var_C58]
 * 0000000140A001D4: cmp     eax, r12d
 * 0000000140A001D7: jz      loc_140A00367
 * 0000000140A001DD: mov     [r14+0Ch], eax
 * 0000000140A001E1: lea     rdx, [rbp+0BE0h+var_9C8]
 * 0000000140A001E8: mov     [r14+10h], r12d
 * 0000000140A001EC: lea     r8, [rbp+0BE0h+var_7D0]
 * 0000000140A001F3: mov     eax, [r14+0Ch]
 * 0000000140A001F7: mov     r9d, r12d
 * 0000000140A001FA: mov     ebx, eax
 * 0000000140A001FC: sub     r9d, eax
 * 0000000140A001FF: add     rbx, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A00204: mov     r11d, r9d
 * 0000000140A00207: add     r11, rbx
 * 0000000140A0020A: xor     eax, eax
 * 0000000140A0020C: mov     r10d, eax
 * 0000000140A0020F: mov     rcx, [r8]
 * 0000000140A00212: mov     eax, [rdx]
 * 0000000140A00214: add     rax, rcx
 * 0000000140A00217: cmp     rbx, rax
 * 0000000140A0021A: jnb     short loc_140A00225
 * 0000000140A0021C: cmp     r11, rcx
 * 0000000140A0021F: ja      loc_140A00363
 * 0000000140A00225: inc     r10d
 * 0000000140A00228: add     r8, 8
 * 0000000140A0022C: add     rdx, 4
 * 0000000140A00230: cmp     r10d, 6
 * 0000000140A00234: jb      short loc_140A0020F
 * 0000000140A00236: mov     r13, [rbp+0BE0h+var_C20]
 * 0000000140A0023A: mov     r10, rbx
 * 0000000140A0023D: mov     rax, rbx
 * 0000000140A00240: add     [r13+828h], r9d
 * 0000000140A00247: mov     r14d, [r13+814h]
 * 0000000140A0024E: mov     r15, [r13+818h]
 * 0000000140A00255: cmp     rbx, r11
 * 0000000140A00258: jnb     short loc_140A0026A
 * 0000000140A0025A: mov     ecx, 40h ; '@'
 * 0000000140A0025F: prefetchnta byte ptr [rax]
 * 0000000140A00262: add     rax, rcx
 * 0000000140A00265: cmp     rax, r11
 * 0000000140A00268: jb      short loc_140A0025F
 * 0000000140A0026A: mov     r11d, r9d
 * 0000000140A0026D: mov     r8, r15
 * 0000000140A00270: shr     r11d, 7
 * 0000000140A00274: test    r11d, r11d
 * 0000000140A00277: jz      short loc_140A002EE
 * 0000000140A00279: mov     r13, 7010008004002001h
 * 0000000140A00283: mov     edx, 8
 * 0000000140A00288: lea     esi, [rdx-7]
 * 0000000140A0028B: mov     rax, [r10]
 * 0000000140A0028E: mov     ecx, r14d
 * 0000000140A00291: xor     rax, r8
 * 0000000140A00294: mov     r8, [r10+8]
 * 0000000140A00298: rol     rax, cl
 * 0000000140A0029B: add     r10, 10h
 * 0000000140A0029F: xor     r8, rax
 * 0000000140A002A2: rol     r8, cl
 * 0000000140A002A5: sub     rdx, rsi
 * 0000000140A002A8: jnz     short loc_140A0028B
 * 0000000140A002AA: mov     rcx, r10
 * 0000000140A002AD: sub     rcx, rbx
 * 0000000140A002B0: xor     rcx, r15
 * 0000000140A002B3: mov     rax, rcx
 * 0000000140A002B6: rol     rax, 11h
 * 0000000140A002BA: xor     rcx, rax
 * 0000000140A002BD: mov     rax, r13
 * 0000000140A002C0: mul     rcx
 * 0000000140A002C3: xor     r14d, edx
 * 0000000140A002C6: mov     [rbp+0BE0h+var_688], rdx
 * 0000000140A002CD: xor     r14d, eax
 * 0000000140A002D0: mov     rax, rsi
 * 0000000140A002D3: and     r14d, 3Fh
 * 0000000140A002D7: cmovz   r14d, eax
 * 0000000140A002DB: mov     eax, 0FFFFFFFFh
 * 0000000140A002E0: add     r11d, eax
 * 0000000140A002E3: jnz     short loc_140A00283
 * 0000000140A002E5: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A002EA: mov     r13, [rbp+0BE0h+var_C20]
 * 0000000140A002EE: and     r9d, 7Fh
 * 0000000140A002F2: mov     r11d, 1
 * 0000000140A002F8: cmp     r9d, 8
 * 0000000140A002FC: jb      short loc_140A0031B
 * 0000000140A002FE: mov     edx, r9d
 * 0000000140A00301: shr     rdx, 3
 * 0000000140A00305: xor     r8, [r10]
 * 0000000140A00308: mov     ecx, r14d
 * 0000000140A0030B: rol     r8, cl
 * 0000000140A0030E: add     r10, 8
 * 0000000140A00312: add     r9d, 0FFFFFFF8h
 * 0000000140A00316: sub     rdx, r11
 * 0000000140A00319: jnz     short loc_140A00305
 * 0000000140A0031B: test    r9d, r9d
 * 0000000140A0031E: jz      short loc_140A0033F
 * 0000000140A00320: mov     r12d, 0FFFFFFFFh
 * 0000000140A00326: movzx   eax, byte ptr [r10]
 * 0000000140A0032A: mov     ecx, r14d
 * 0000000140A0032D: xor     r8, rax
 * 0000000140A00330: add     r10, r11
 * 0000000140A00333: rol     r8, cl
 * 0000000140A00336: add     r9d, r12d
 * 0000000140A00339: jnz     short loc_140A00326
 * 0000000140A0033B: mov     r12d, [rbp+0BE0h+var_BF0]
 * 0000000140A0033F: mov     rax, r8
 * 0000000140A00342: jmp     short loc_140A00347
 * 0000000140A00344: xor     r8d, eax
 * 0000000140A00347: shr     rax, 1Fh
 * 0000000140A0034B: test    rax, rax
 * 0000000140A0034E: jnz     short loc_140A00344
 * 0000000140A00350: mov     r14, [rbp+0BE0h+var_C60]
 * 0000000140A00354: btr     r8d, 1Fh
 * 0000000140A00359: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A0035D: mov     [r14+14h], r8d
 * 0000000140A00361: jmp     short loc_140A0036B
 * 0000000140A00363: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A00367: mov     r13, [rbp+0BE0h+var_C20]
 * 0000000140A0036B: mov     rdx, [rbp+0BE0h+var_C10]
 * 0000000140A0036F: mov     r15, [rbp+0BE0h+var_BF8]
 * 0000000140A00373: cmp     r9, rdx
 * 0000000140A00376: jz      short loc_140A003B7
 * 0000000140A00378: mov     eax, [r9]
 * 0000000140A0037B: mov     ecx, [r9+4]
 * 0000000140A0037F: cmp     eax, [rsp+0CE0h+var_C78]
 * 0000000140A00383: jb      short loc_140A003B7
 * 0000000140A00385: cmp     ecx, r12d
 * 0000000140A00388: ja      short loc_140A003B7
 * 0000000140A0038A: cmp     r15, rdx
 * 0000000140A0038D: jz      short loc_140A003AB
 * 0000000140A0038F: mov     rax, [rbp+0BE0h+var_C50]
 * 0000000140A00393: mov     byte ptr [rax], 80h
 * 0000000140A00396: inc     rax
 * 0000000140A00399: mov     [rbp+0BE0h+var_C50], rax
 * 0000000140A0039D: mov     eax, 0Ch
 * 0000000140A003A2: add     r15, rax
 * 0000000140A003A5: mov     [rbp+0BE0h+var_BF8], r15
 * 0000000140A003A9: jmp     short loc_140A003B0
 * 0000000140A003AB: mov     eax, 0Ch
 * 0000000140A003B0: add     r9, rax
 * 0000000140A003B3: mov     [rbp+0BE0h+var_C48], r9
 * 0000000140A003B7: mov     r12, [rsp+0CE0h+var_C88]
 * 0000000140A003BC: add     r14, 18h
 * 0000000140A003C0: add     r12, 28h ; '('
 * 0000000140A003C4: mov     [rbp+0BE0h+var_C60], r14
 * 0000000140A003C8: mov     [rsp+0CE0h+var_C88], r12
 * 0000000140A003CD: cmp     r14, [rsp+0CE0h+var_C70]
 * 0000000140A003D2: jnz     loc_1409FFB0D
 * 0000000140A003D8: mov     rbx, [rbp+0BE0h+var_B98]
 * 0000000140A003DC: mov     r14, [rbp+0BE0h+var_C08]
 * 0000000140A003E0: xor     eax, eax
 * 0000000140A003E2: mov     [rbp+0BE0h+var_B50], rbx
 * 0000000140A003E9: mov     ecx, eax
 * 0000000140A003EB: mov     rdx, [rsp+0CE0h+var_C90]
 * 0000000140A003F0: mov     r8d, 80000000h
 * 0000000140A003F6: sub     rdx, rsi
 * 0000000140A003F9: mov     [rsp+0CE0h+var_C80], rbx
 * 0000000140A003FE: add     rdx, rbx
 * 0000000140A00401: mov     rsi, rbx
 * 0000000140A00404: mov     [rsp+0CE0h+var_C90], rdx
 * 0000000140A00409: lea     eax, [rcx+r8]
 * 0000000140A0040D: test    r8d, eax
 * 0000000140A00410: jnz     short loc_140A0041A
 * 0000000140A00412: cmp     ecx, 0C000010Eh
 * 0000000140A00418: jnz     short loc_140A0041E
 * 0000000140A0041A: mov     [rdx+28h], r14
 * 0000000140A0041E: mov     r13d, [rbp+0BE0h+var_BE0]
 * 0000000140A00422: jmp     loc_1409FE677
 * 0000000140A00427: mov     rbx, r13
 * 0000000140A0042A: mov     [rbp+0BE0h+var_BE0], eax
 * 0000000140A0042D: mov     r13, rax
 * 0000000140A00430: mov     r15d, eax
 * 0000000140A00433: mov     r12d, eax
 * 0000000140A00436: jmp     short loc_140A0043A
 * 0000000140A00438: xor     eax, eax
 * 0000000140A0043A: mov     [rbp+0BE0h+var_B20], eax
 * 0000000140A00440: mov     rax, [rsi+2F8h]
 * 0000000140A00447: lea     r8, [rbp+0BE0h+var_A18]
 * 0000000140A0044E: lea     rdx, [rbp+0BE0h+var_B20]
 * 0000000140A00455: mov     ecx, r12d
 * 0000000140A00458: call    KeGuardDispatchICall
 * 0000000140A0045D: test    eax, eax
 * 0000000140A0045F: jz      loc_140A005A7
 * 0000000140A00465: mov     rax, [rsi+2D8h]
 * 0000000140A0046C: mov     rcx, [rbp+0BE0h+var_A18]
 * 0000000140A00473: call    KeGuardDispatchICall
 * 0000000140A00478: mov     r14, rax
 * 0000000140A0047B: test    rax, rax
 * 0000000140A0047E: jz      short loc_140A00440
 * 0000000140A00480: mov     rax, [rsi+2E0h]
 * 0000000140A00487: mov     edi, 1
 * 0000000140A0048C: add     r15d, edi
 * 0000000140A0048F: mov     rcx, r14
 * 0000000140A00492: mov     [rbp+0BE0h+var_BE0], r15d
 * 0000000140A00496: call    KeGuardDispatchICall
 * 0000000140A0049B: mov     r15, rax
 * 0000000140A0049E: lea     rdx, [rbp+0BE0h+var_680]
 * 0000000140A004A5: mov     rax, [rsi+208h]
 * 0000000140A004AC: mov     rcx, r15
 * 0000000140A004AF: call    KeGuardDispatchICall
 * 0000000140A004B4: test    rax, rax
 * 0000000140A004B7: jz      short loc_140A004D8
 * 0000000140A004B9: mov     rax, [rsi+2E8h]
 * 0000000140A004C0: mov     rdx, r14
 * 0000000140A004C3: mov     rcx, [rbp+0BE0h+var_A18]
 * 0000000140A004CA: call    KeGuardDispatchICall
 * 0000000140A004CF: mov     r15d, [rbp+0BE0h+var_BE0]
 * 0000000140A004D3: jmp     loc_140A00440
 * 0000000140A004D8: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A004E2: jz      short loc_140A0052D
 * 0000000140A004E4: mov     rcx, [rsi+0A80h]
 * 0000000140A004EB: mov     edx, 30h ; '0'
 * 0000000140A004F0: lea     r8d, [rdx-2Ah]
 * 0000000140A004F4: mov     rax, [rbx]
 * 0000000140A004F7: add     edx, 0FFFFFFF8h
 * 0000000140A004FA: mov     [rcx], rax
 * 0000000140A004FD: add     rbx, 8
 * 0000000140A00501: add     rcx, 8
 * 0000000140A00505: sub     r8, rdi
 * 0000000140A00508: jnz     short loc_140A004F4
 * 0000000140A0050A: test    edx, edx
 * 0000000140A0050C: jz      short loc_140A00526
 * 0000000140A0050E: mov     esi, 0FFFFFFFFh
 * 0000000140A00513: mov     al, [rbx]
 * 0000000140A00515: add     rbx, rdi
 * 0000000140A00518: mov     [rcx], al
 * 0000000140A0051A: add     rcx, rdi
 * 0000000140A0051D: add     edx, esi
 * 0000000140A0051F: jnz     short loc_140A00513
 * 0000000140A00521: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A00526: mov     rbx, [rsi+0A80h]
 * 0000000140A0052D: mov     [rbx+18h], r15
 * 0000000140A00531: mov     rax, [rsi+590h]
 * 0000000140A00538: mov     [rax], rbx
 * 0000000140A0053B: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140A00542: mov     rax, [rsi+590h]
 * 0000000140A00549: mov     [rax+8], r15
 * 0000000140A0054D: mov     dword ptr [rax+14h], 1000h
 * 0000000140A00554: xor     eax, eax
 * 0000000140A00556: cmp     [rsi+8F8h], eax
 * 0000000140A0055C: jnz     short loc_140A005A7
 * 0000000140A0055E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00568: xor     edx, edx
 * 0000000140A0056A: add     rax, rsi
 * 0000000140A0056D: mov     rcx, rsi
 * 0000000140A00570: mov     [rsi+900h], rax
 * 0000000140A00577: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00581: add     rax, rbx
 * 0000000140A00584: mov     [rsi+908h], rax
 * 0000000140A0058B: movsxd  rax, dword ptr [rbx]
 * 0000000140A0058E: mov     [rsi+910h], rax
 * 0000000140A00595: mov     [rsi+918h], r13
 * 0000000140A0059C: mov     [rsi+8F8h], edi
 * 0000000140A005A2: call    $$b8
 * 0000000140A005A7: mov     r15d, [rbp+0BE0h+var_BE0]
 * 0000000140A005AB: mov     edx, 1
 * 0000000140A005B0: add     r12d, edx
 * 0000000140A005B3: add     r13, rdx
 * 0000000140A005B6: cmp     r12d, 3
 * 0000000140A005BA: jb      loc_140A00438
 * 0000000140A005C0: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A005C7: mov     r13d, r15d
 * 0000000140A005CA: jmp     loc_140A00885
 * 0000000140A005CF: mov     rbx, r13
 * 0000000140A005D2: mov     [rbp+0BE0h+var_950], rax
 * 0000000140A005D9: mov     r13d, eax
 * 0000000140A005DC: mov     r15, cr8
 * 0000000140A005E0: mov     [rbp+0BE0h+arg_8], r15
 * 0000000140A005E7: mov     cr8, r8
 * 0000000140A005EB: mov     rax, [rsi+308h]
 * 0000000140A005F2: lea     rcx, [rbp+0BE0h+var_950]
 * 0000000140A005F9: call    KeGuardDispatchICall
 * 0000000140A005FE: mov     r14, rax
 * 0000000140A00601: test    rax, rax
 * 0000000140A00604: jz      loc_140A0072C
 * 0000000140A0060A: mov     edi, 1
 * 0000000140A0060F: mov     rax, [rsi+208h]
 * 0000000140A00616: lea     rdx, [rbp+0BE0h+var_678]
 * 0000000140A0061D: mov     rcx, r14
 * 0000000140A00620: add     r13d, edi
 * 0000000140A00623: call    KeGuardDispatchICall
 * 0000000140A00628: test    rax, rax
 * 0000000140A0062B: jnz     loc_140A006FF
 * 0000000140A00631: test    [rsi+990h], r12d
 * 0000000140A00638: jz      short loc_140A00681
 * 0000000140A0063A: mov     rcx, [rsi+0A80h]
 * 0000000140A00641: lea     edx, [rax+30h]
 * 0000000140A00644: lea     r8d, [rax+6]
 * 0000000140A00648: mov     rax, [rbx]
 * 0000000140A0064B: add     edx, 0FFFFFFF8h
 * 0000000140A0064E: mov     [rcx], rax
 * 0000000140A00651: add     rbx, 8
 * 0000000140A00655: add     rcx, 8
 * 0000000140A00659: sub     r8, rdi
 * 0000000140A0065C: jnz     short loc_140A00648
 * 0000000140A0065E: test    edx, edx
 * 0000000140A00660: jz      short loc_140A0067A
 * 0000000140A00662: mov     esi, 0FFFFFFFFh
 * 0000000140A00667: mov     al, [rbx]
 * 0000000140A00669: add     rbx, rdi
 * 0000000140A0066C: mov     [rcx], al
 * 0000000140A0066E: add     rcx, rdi
 * 0000000140A00671: add     edx, esi
 * 0000000140A00673: jnz     short loc_140A00667
 * 0000000140A00675: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A0067A: mov     rbx, [rsi+0A80h]
 * 0000000140A00681: mov     [rbx+18h], r14
 * 0000000140A00685: mov     rax, [rsi+590h]
 * 0000000140A0068C: mov     [rax], rbx
 * 0000000140A0068F: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140A00696: mov     rax, [rsi+590h]
 * 0000000140A0069D: mov     [rax+8], r14
 * 0000000140A006A1: mov     dword ptr [rax+14h], 1000h
 * 0000000140A006A8: xor     eax, eax
 * 0000000140A006AA: cmp     [rsi+8F8h], eax
 * 0000000140A006B0: jnz     short loc_140A006FF
 * 0000000140A006B2: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A006BC: xor     edx, edx
 * 0000000140A006BE: add     rax, rsi
 * 0000000140A006C1: mov     rcx, rsi
 * 0000000140A006C4: mov     [rsi+900h], rax
 * 0000000140A006CB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A006D5: add     rax, rbx
 * 0000000140A006D8: mov     [rsi+908h], rax
 * 0000000140A006DF: movsxd  rax, dword ptr [rbx]
 * 0000000140A006E2: mov     [rsi+910h], rax
 * 0000000140A006E9: mov     qword ptr [rsi+918h], 4
 * 0000000140A006F4: mov     [rsi+8F8h], edi
 * 0000000140A006FA: call    $$b8
 * 0000000140A006FF: mov     rax, [rsi+308h]
 * 0000000140A00706: lea     rcx, [rbp+0BE0h+var_950]
 * 0000000140A0070D: call    KeGuardDispatchICall
 * 0000000140A00712: mov     r14, rax
 * 0000000140A00715: test    rax, rax
 * 0000000140A00718: jnz     loc_140A0060F
 * 0000000140A0071E: mov     r15, [rbp+0BE0h+arg_8]
 * 0000000140A00725: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0072C: movzx   eax, r15b
 * 0000000140A00730: mov     cr8, rax
 * 0000000140A00734: jmp     loc_140A00880
 * 0000000140A00739: mov     [rbp+0BE0h+var_948], rax
 * 0000000140A00740: lea     rcx, [rbp+0BE0h+var_948]
 * 0000000140A00747: mov     rbx, r13
 * 0000000140A0074A: mov     r13d, eax
 * 0000000140A0074D: mov     rax, [rsi+300h]
 * 0000000140A00754: call    KeGuardDispatchICall
 * 0000000140A00759: mov     r14, rax
 * 0000000140A0075C: test    rax, rax
 * 0000000140A0075F: jz      loc_140A00880
 * 0000000140A00765: mov     edi, 1
 * 0000000140A0076A: mov     rax, [rsi+208h]
 * 0000000140A00771: lea     rdx, [rbp+0BE0h+var_670]
 * 0000000140A00778: mov     rcx, r14
 * 0000000140A0077B: add     r13d, edi
 * 0000000140A0077E: call    KeGuardDispatchICall
 * 0000000140A00783: test    rax, rax
 * 0000000140A00786: jnz     loc_140A0085A
 * 0000000140A0078C: test    [rsi+990h], r12d
 * 0000000140A00793: jz      short loc_140A007DC
 * 0000000140A00795: mov     rcx, [rsi+0A80h]
 * 0000000140A0079C: lea     edx, [rax+30h]
 * 0000000140A0079F: lea     r8d, [rax+6]
 * 0000000140A007A3: mov     rax, [rbx]
 * 0000000140A007A6: add     edx, 0FFFFFFF8h
 * 0000000140A007A9: mov     [rcx], rax
 * 0000000140A007AC: add     rbx, 8
 * 0000000140A007B0: add     rcx, 8
 * 0000000140A007B4: sub     r8, rdi
 * 0000000140A007B7: jnz     short loc_140A007A3
 * 0000000140A007B9: test    edx, edx
 * 0000000140A007BB: jz      short loc_140A007D5
 * 0000000140A007BD: mov     esi, 0FFFFFFFFh
 * 0000000140A007C2: mov     al, [rbx]
 * 0000000140A007C4: add     rbx, rdi
 * 0000000140A007C7: mov     [rcx], al
 * 0000000140A007C9: add     rcx, rdi
 * 0000000140A007CC: add     edx, esi
 * 0000000140A007CE: jnz     short loc_140A007C2
 * 0000000140A007D0: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A007D5: mov     rbx, [rsi+0A80h]
 * 0000000140A007DC: mov     [rbx+18h], r14
 * 0000000140A007E0: mov     rax, [rsi+590h]
 * 0000000140A007E7: mov     [rax], rbx
 * 0000000140A007EA: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140A007F1: mov     rax, [rsi+590h]
 * 0000000140A007F8: mov     [rax+8], r14
 * 0000000140A007FC: mov     dword ptr [rax+14h], 1000h
 * 0000000140A00803: xor     eax, eax
 * 0000000140A00805: cmp     [rsi+8F8h], eax
 * 0000000140A0080B: jnz     short loc_140A0085A
 * 0000000140A0080D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00817: xor     edx, edx
 * 0000000140A00819: add     rax, rsi
 * 0000000140A0081C: mov     rcx, rsi
 * 0000000140A0081F: mov     [rsi+900h], rax
 * 0000000140A00826: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00830: add     rax, rbx
 * 0000000140A00833: mov     [rsi+908h], rax
 * 0000000140A0083A: movsxd  rax, dword ptr [rbx]
 * 0000000140A0083D: mov     [rsi+910h], rax
 * 0000000140A00844: mov     qword ptr [rsi+918h], 3
 * 0000000140A0084F: mov     [rsi+8F8h], edi
 * 0000000140A00855: call    $$b8
 * 0000000140A0085A: mov     rax, [rsi+300h]
 * 0000000140A00861: lea     rcx, [rbp+0BE0h+var_948]
 * 0000000140A00868: call    KeGuardDispatchICall
 * 0000000140A0086D: mov     r14, rax
 * 0000000140A00870: test    rax, rax
 * 0000000140A00873: jnz     loc_140A0076A
 * 0000000140A00879: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A00880: mov     edx, 1
 * 0000000140A00885: shl     r13d, 0Ch
 * 0000000140A00889: add     [rsi+828h], r13d
 * 0000000140A00890: add     [rsi+824h], edx
 * 0000000140A00896: mov     eax, [rsi+82Ch]
 * 0000000140A0089C: cmp     [rsi+828h], eax
 * 0000000140A008A2: jge     short loc_140A008C0
 * 0000000140A008A4: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A008A9: mov     r8d, 0Ch
 * 0000000140A008AF: mov     r12d, 40000000h
 * 0000000140A008B5: jmp     loc_1409FE220
 * 0000000140A008BA: mov     [rsi+824h], eax
 * 0000000140A008C0: mov     [rsp+0CE0h+var_C80], rsi
 * 0000000140A008C5: jmp     loc_1409FC318
 * 0000000140A008CA: mov     edx, [r13+2Ch]
 * 0000000140A008CE: lea     rcx, [rbp+0BE0h+var_310]
 * 0000000140A008D5: mov     rax, [rsi+1A0h]
 * 0000000140A008DC: mov     ebx, [r13+28h]
 * 0000000140A008E0: call    KeGuardDispatchICall
 * 0000000140A008E5: mov     rax, [rsi+1D0h]
 * 0000000140A008EC: lea     rdx, [rbp+0BE0h+var_300]
 * 0000000140A008F3: lea     rcx, [rbp+0BE0h+var_310]
 * 0000000140A008FA: call    KeGuardDispatchICall
 * 0000000140A008FF: cmp     dword ptr [rbp+0BE0h+arg_8], 26h ; '&'
 * 0000000140A00906: jz      short loc_140A00916
 * 0000000140A00908: test    ebx, ebx
 * 0000000140A0090A: jz      short loc_140A00911
 * 0000000140A0090C: mov     rbx, cr4
 * 0000000140A0090F: jmp     short loc_140A00925
 * 0000000140A00911: mov     rbx, cr0
 * 0000000140A00914: jmp     short loc_140A00925
 * 0000000140A00916: xor     ecx, ecx
 * 0000000140A00918: xgetbv
 * 0000000140A0091B: shl     rdx, 20h
 * 0000000140A0091F: or      rdx, rax
 * 0000000140A00922: mov     rbx, rdx
 * 0000000140A00925: mov     rax, [rsi+198h]
 * 0000000140A0092C: lea     rcx, [rbp+0BE0h+var_300]
 * 0000000140A00933: call    KeGuardDispatchICall
 * 0000000140A00938: mov     r8, [r13+18h]
 * 0000000140A0093C: xor     r15d, r15d
 * 0000000140A0093F: mov     rcx, [r13+20h]
 * 0000000140A00943: and     r8, rbx
 * 0000000140A00946: cmp     r8, rcx
 * 0000000140A00949: jz      loc_1409FC31B
 * 0000000140A0094F: mov     eax, [r13+28h]
 * 0000000140A00953: mov     edx, [r13+2Ch]
 * 0000000140A00957: shl     rdx, 20h
 * 0000000140A0095B: or      rdx, rax
 * 0000000140A0095E: mov     eax, [rsi+8F8h]
 * 0000000140A00964: test    eax, eax
 * 0000000140A00966: jnz     loc_1409FC31B
 * 0000000140A0096C: mov     rax, [rsi+590h]
 * 0000000140A00973: xor     rcx, r8
 * 0000000140A00976: mov     [rax+18h], rcx
 * 0000000140A0097A: mov     eax, [rsi+8F8h]
 * 0000000140A00980: test    eax, eax
 * 0000000140A00982: jnz     loc_1409FC31B
 * 0000000140A00988: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00992: add     rax, rsi
 * 0000000140A00995: mov     [rsi+900h], rax
 * 0000000140A0099C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A009A6: add     rax, r13
 * 0000000140A009A9: mov     [rsi+908h], rax
 * 0000000140A009B0: movsxd  rax, dword ptr [r13+0]
 * 0000000140A009B4: mov     [rsi+910h], rax
 * 0000000140A009BB: mov     [rsi+918h], rdx
 * 0000000140A009C2: jmp     loc_1409FC6E7
 * 0000000140A009C7: cmp     dword ptr [rsi+958h], 0Bh
 * 0000000140A009CE: jnz     loc_1409FC318
 * 0000000140A009D4: add     dword ptr [rsi+828h], 100h
 * 0000000140A009DE: mov     r15, [rsi+588h]
 * 0000000140A009E5: mov     rax, [rsi+2D8h]
 * 0000000140A009EC: mov     rcx, r15
 * 0000000140A009EF: call    KeGuardDispatchICall
 * 0000000140A009F4: mov     r14, rax
 * 0000000140A009F7: test    rax, rax
 * 0000000140A009FA: jz      loc_1409FC318
 * 0000000140A00A00: mov     rax, [rsi+2E0h]
 * 0000000140A00A07: mov     rcx, r14
 * 0000000140A00A0A: call    KeGuardDispatchICall
 * 0000000140A00A0F: mov     rbx, rax
 * 0000000140A00A12: xor     edx, edx
 * 0000000140A00A14: mov     rax, [r13+18h]
 * 0000000140A00A18: test    rax, rax
 * 0000000140A00A1B: jz      short loc_140A00A84
 * 0000000140A00A1D: cmp     rax, rbx
 * 0000000140A00A20: jz      loc_140A00B04
 * 0000000140A00A26: xor     eax, eax
 * 0000000140A00A28: cmp     [rsi+8F8h], eax
 * 0000000140A00A2E: jnz     loc_140A00B04
 * 0000000140A00A34: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00A3E: mov     rcx, rsi
 * 0000000140A00A41: add     rax, rsi
 * 0000000140A00A44: mov     [rsi+900h], rax
 * 0000000140A00A4B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00A55: add     rax, r13
 * 0000000140A00A58: mov     [rsi+908h], rax
 * 0000000140A00A5F: movsxd  rax, dword ptr [r13+0]
 * 0000000140A00A63: mov     [rsi+910h], rax
 * 0000000140A00A6A: lea     eax, [rdx+1]
 * 0000000140A00A6D: mov     [rsi+918h], rbx
 * 0000000140A00A74: mov     [rsi+8F8h], eax
 * 0000000140A00A7A: call    $$b8
 * 0000000140A00A7F: jmp     loc_140A00B04
 * 0000000140A00A84: mov     eax, [rsi+974h]
 * 0000000140A00A8A: mov     rcx, [rsi+978h]
 * 0000000140A00A91: test    rax, rax
 * 0000000140A00A94: jz      short loc_140A00AA7
 * 0000000140A00A96: lea     rdx, [rax-1]
 * 0000000140A00A9A: add     rdx, rcx
 * 0000000140A00A9D: cmp     rbx, rcx
 * 0000000140A00AA0: jb      short loc_140A00AA7
 * 0000000140A00AA2: cmp     rbx, rdx
 * 0000000140A00AA5: jbe     short loc_140A00B00
 * 0000000140A00AA7: xor     eax, eax
 * 0000000140A00AA9: cmp     [rsi+8F8h], eax
 * 0000000140A00AAF: jnz     short loc_140A00B00
 * 0000000140A00AB1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00ABB: xor     edx, edx
 * 0000000140A00ABD: add     rax, rsi
 * 0000000140A00AC0: mov     rcx, rsi
 * 0000000140A00AC3: mov     [rsi+900h], rax
 * 0000000140A00ACA: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00AD4: add     rax, r13
 * 0000000140A00AD7: mov     [rsi+908h], rax
 * 0000000140A00ADE: movsxd  rax, dword ptr [r13+0]
 * 0000000140A00AE2: mov     [rsi+910h], rax
 * 0000000140A00AE9: mov     eax, 1
 * 0000000140A00AEE: mov     [rsi+918h], rbx
 * 0000000140A00AF5: mov     [rsi+8F8h], eax
 * 0000000140A00AFB: call    $$b8
 * 0000000140A00B00: mov     [r13+18h], rbx
 * 0000000140A00B04: mov     rax, [rsi+2E8h]
 * 0000000140A00B0B: mov     rdx, r14
 * 0000000140A00B0E: mov     rcx, r15
 * 0000000140A00B11: call    KeGuardDispatchICall
 * 0000000140A00B16: jmp     loc_1409FC318
 * 0000000140A00B1B: jnz     short loc_140A00B6D
 * 0000000140A00B1D: xor     eax, eax
 * 0000000140A00B1F: cmp     [rsi+980h], rax
 * 0000000140A00B26: jz      loc_1409FC312
 * 0000000140A00B2C: mov     ecx, [rsi+994h]
 * 0000000140A00B32: mov     eax, ecx
 * 0000000140A00B34: shr     eax, 2
 * 0000000140A00B37: and     eax, edx
 * 0000000140A00B39: jnz     loc_1409FC3EA
 * 0000000140A00B3F: xor     edx, edx
 * 0000000140A00B41: cmp     [rsi+824h], edx
 * 0000000140A00B47: lea     edx, [rax+1]
 * 0000000140A00B4A: jnz     short loc_140A00B60
 * 0000000140A00B4C: mov     eax, ecx
 * 0000000140A00B4E: shl     eax, 3
 * 0000000140A00B51: xor     eax, ecx
 * 0000000140A00B53: and     eax, 20h
 * 0000000140A00B56: xor     eax, ecx
 * 0000000140A00B58: mov     [rsi+994h], eax
 * 0000000140A00B5E: jmp     short loc_140A00B6D
 * 0000000140A00B60: shr     ecx, 5
 * 0000000140A00B63: and     ecx, edx
 * 0000000140A00B65: cmp     eax, ecx
 * 0000000140A00B67: jnz     loc_1409FC3EA
 * 0000000140A00B6D: mov     r14, [r13+8]
 * 0000000140A00B71: mov     r8d, [r13+10h]
 * 0000000140A00B75: mov     r9, r14
 * 0000000140A00B78: add     [rsi+828h], r8d
 * 0000000140A00B7F: mov     rax, r14
 * 0000000140A00B82: mov     r10d, [rsi+814h]
 * 0000000140A00B89: mov     r15, [rsi+818h]
 * 0000000140A00B90: lea     rcx, [r14+r8]
 * 0000000140A00B94: cmp     r14, rcx
 * 0000000140A00B97: jnb     short loc_140A00BAA
 * 0000000140A00B99: mov     r11d, 40h ; '@'
 * 0000000140A00B9F: prefetchnta byte ptr [rax]
 * 0000000140A00BA2: add     rax, r11
 * 0000000140A00BA5: cmp     rax, rcx
 * 0000000140A00BA8: jb      short loc_140A00B9F
 * 0000000140A00BAA: mov     r11d, r8d
 * 0000000140A00BAD: mov     rbx, r15
 * 0000000140A00BB0: shr     r11d, 7
 * 0000000140A00BB4: mov     r12d, 0FFFFFFFFh
 * 0000000140A00BBA: test    r11d, r11d
 * 0000000140A00BBD: jz      short loc_140A00C2B
 * 0000000140A00BBF: mov     rdi, 7010008004002001h
 * 0000000140A00BC9: mov     eax, 8
 * 0000000140A00BCE: xor     rbx, [r9]
 * 0000000140A00BD1: mov     ecx, r10d
 * 0000000140A00BD4: rol     rbx, cl
 * 0000000140A00BD7: xor     rbx, [r9+8]
 * 0000000140A00BDB: add     r9, 10h
 * 0000000140A00BDF: rol     rbx, cl
 * 0000000140A00BE2: sub     rax, rdx
 * 0000000140A00BE5: jnz     short loc_140A00BCE
 * 0000000140A00BE7: mov     rcx, r9
 * 0000000140A00BEA: sub     rcx, r14
 * 0000000140A00BED: xor     rcx, r15
 * 0000000140A00BF0: mov     rax, rcx
 * 0000000140A00BF3: rol     rax, 11h
 * 0000000140A00BF7: xor     rcx, rax
 * 0000000140A00BFA: mov     rax, rdi
 * 0000000140A00BFD: mul     rcx
 * 0000000140A00C00: xor     r10d, edx
 * 0000000140A00C03: mov     [rbp+0BE0h+var_668], rdx
 * 0000000140A00C0A: xor     r10d, eax
 * 0000000140A00C0D: mov     edx, 1
 * 0000000140A00C12: and     r10d, 3Fh
 * 0000000140A00C16: cmovz   r10d, edx
 * 0000000140A00C1A: add     r11d, r12d
 * 0000000140A00C1D: jnz     short loc_140A00BC9
 * 0000000140A00C1F: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A00C24: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A00C2B: and     r8d, 7Fh
 * 0000000140A00C2F: cmp     r8d, 8
 * 0000000140A00C33: jb      short loc_140A00C52
 * 0000000140A00C35: mov     eax, r8d
 * 0000000140A00C38: shr     rax, 3
 * 0000000140A00C3C: xor     rbx, [r9]
 * 0000000140A00C3F: mov     ecx, r10d
 * 0000000140A00C42: rol     rbx, cl
 * 0000000140A00C45: add     r9, 8
 * 0000000140A00C49: add     r8d, 0FFFFFFF8h
 * 0000000140A00C4D: sub     rax, rdx
 * 0000000140A00C50: jnz     short loc_140A00C3C
 * 0000000140A00C52: test    r8d, r8d
 * 0000000140A00C55: jz      short loc_140A00C6C
 * 0000000140A00C57: movzx   eax, byte ptr [r9]
 * 0000000140A00C5B: mov     ecx, r10d
 * 0000000140A00C5E: xor     rbx, rax
 * 0000000140A00C61: add     r9, rdx
 * 0000000140A00C64: rol     rbx, cl
 * 0000000140A00C67: add     r8d, r12d
 * 0000000140A00C6A: jnz     short loc_140A00C57
 * 0000000140A00C6C: mov     rax, rbx
 * 0000000140A00C6F: shr     rax, 1Fh
 * 0000000140A00C73: xor     r15d, r15d
 * 0000000140A00C76: jmp     short loc_140A00C7E
 * 0000000140A00C78: xor     ebx, eax
 * 0000000140A00C7A: shr     rax, 1Fh
 * 0000000140A00C7E: test    rax, rax
 * 0000000140A00C81: jnz     short loc_140A00C78
 * 0000000140A00C83: btr     ebx, 1Fh
 * 0000000140A00C87: cmp     ebx, [r13+14h]
 * 0000000140A00C8B: jz      loc_140A00D6B
 * 0000000140A00C91: lock or [rsp+0CE0h+var_CE0], eax
 * 0000000140A00C95: mov     eax, [r13+18h]
 * 0000000140A00C99: test    dl, al
 * 0000000140A00C9B: jz      short loc_140A00CAE
 * 0000000140A00C9D: mov     rax, [rsi+580h]
 * 0000000140A00CA4: mov     cl, [rax]
 * 0000000140A00CA6: test    cl, cl
 * 0000000140A00CA8: jnz     loc_140A00D6B
 * 0000000140A00CAE: mov     ecx, [r13+10h]
 * 0000000140A00CB2: mov     rdx, [r13+8]
 * 0000000140A00CB6: test    rcx, rcx
 * 0000000140A00CB9: jz      loc_140A00E0A
 * 0000000140A00CBF: mov     eax, [rsi+994h]
 * 0000000140A00CC5: mov     r8d, 40h ; '@'
 * 0000000140A00CCB: test    r8b, al
 * 0000000140A00CCE: jz      loc_140A00E0A
 * 0000000140A00CD4: mov     r12, cr8
 * 0000000140A00CD8: lea     eax, [r8-3Eh]
 * 0000000140A00CDC: mov     cr8, rax
 * 0000000140A00CE0: mov     r14, rdx
 * 0000000140A00CE3: lea     rax, [rcx-1]
 * 0000000140A00CE7: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A00CEE: add     rax, rdx
 * 0000000140A00CF1: or      rax, 0FFFh
 * 0000000140A00CF7: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A00CFE: lea     r13, [r14-1]
 * 0000000140A00D02: movzx   r15d, r12b
 * 0000000140A00D06: mov     rax, [rsi+468h]
 * 0000000140A00D0D: xor     edx, edx
 * 0000000140A00D0F: mov     rcx, r14
 * 0000000140A00D12: call    KeGuardDispatchICall
 * 0000000140A00D17: cmp     eax, 0C000022Dh
 * 0000000140A00D1C: jnz     short loc_140A00D42
 * 0000000140A00D1E: mov     eax, 1
 * 0000000140A00D23: cmp     r12b, al
 * 0000000140A00D26: ja      short loc_140A00D4A
 * 0000000140A00D28: movzx   r15d, r12b
 * 0000000140A00D2C: mov     cr8, r15
 * 0000000140A00D30: mov     al, [r14]
 * 0000000140A00D33: mov     rax, cr8
 * 0000000140A00D37: mov     eax, 2
 * 0000000140A00D3C: mov     cr8, rax
 * 0000000140A00D40: jmp     short loc_140A00D06
 * 0000000140A00D42: test    eax, eax
 * 0000000140A00D44: js      loc_140A00E01
 * 0000000140A00D4A: mov     r11d, 1000h
 * 0000000140A00D50: add     r14, r11
 * 0000000140A00D53: add     r13, r11
 * 0000000140A00D56: cmp     r13, [rbp+0BE0h+arg_8]
 * 0000000140A00D5D: jnz     short loc_140A00D02
 * 0000000140A00D5F: mov     cr8, r15
 * 0000000140A00D63: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A00D68: xor     r15d, r15d
 * 0000000140A00D6B: mov     ebx, 1
 * 0000000140A00D70: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A00D7A: jz      loc_1409FC31B
 * 0000000140A00D80: mov     r8d, [r13+10h]
 * 0000000140A00D84: test    r8d, r8d
 * 0000000140A00D87: jz      loc_1409FC318
 * 0000000140A00D8D: mov     rdx, [r13+8]
 * 0000000140A00D91: lea     r9, [rbp+0BE0h+var_2F0]
 * 0000000140A00D98: mov     rcx, rsi
 * 0000000140A00D9B: call    sub_1403E9B1C
 * 0000000140A00DA0: mov     r8d, 10h
 * 0000000140A00DA6: lea     r9, [r13+1Ch]
 * 0000000140A00DAA: lea     r10, [rbp+0BE0h+var_2F0]
 * 0000000140A00DB1: mov     rcx, [r10]
 * 0000000140A00DB4: add     r10, 8
 * 0000000140A00DB8: mov     rax, [r9]
 * 0000000140A00DBB: add     r9, 8
 * 0000000140A00DBF: cmp     rcx, rax
 * 0000000140A00DC2: jnz     loc_140A00E91
 * 0000000140A00DC8: add     r8d, 0FFFFFFF8h
 * 0000000140A00DCC: cmp     r8d, 8
 * 0000000140A00DD0: jnb     short loc_140A00DB1
 * 0000000140A00DD2: test    r8d, r8d
 * 0000000140A00DD5: jz      loc_140A00FBE
 * 0000000140A00DDB: movzx   edx, byte ptr [r10]
 * 0000000140A00DDF: add     r10, rbx
 * 0000000140A00DE2: movzx   eax, byte ptr [r9]
 * 0000000140A00DE6: add     r9, rbx
 * 0000000140A00DE9: cmp     rdx, rax
 * 0000000140A00DEC: jnz     loc_140A00E91
 * 0000000140A00DF2: mov     eax, 0FFFFFFFFh
 * 0000000140A00DF7: add     r8d, eax
 * 0000000140A00DFA: jnz     short loc_140A00DDB
 * 0000000140A00DFC: jmp     loc_140A00FBE
 * 0000000140A00E01: mov     cr8, r15
 * 0000000140A00E05: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A00E0A: mov     eax, [rsi+8F8h]
 * 0000000140A00E10: xor     r15d, r15d
 * 0000000140A00E13: mov     ecx, [r13+14h]
 * 0000000140A00E17: test    eax, eax
 * 0000000140A00E19: jnz     short loc_140A00E31
 * 0000000140A00E1B: mov     eax, ebx
 * 0000000140A00E1D: xor     rcx, rax
 * 0000000140A00E20: mov     rax, [rsi+590h]
 * 0000000140A00E27: mov     [rax+18h], rcx
 * 0000000140A00E2B: mov     eax, [rsi+8F8h]
 * 0000000140A00E31: mov     rcx, [r13+8]
 * 0000000140A00E35: mov     ebx, 1
 * 0000000140A00E3A: test    eax, eax
 * 0000000140A00E3C: jnz     loc_140A00D70
 * 0000000140A00E42: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00E4C: xor     edx, edx
 * 0000000140A00E4E: add     rax, rsi
 * 0000000140A00E51: mov     [rsi+900h], rax
 * 0000000140A00E58: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00E62: add     rax, r13
 * 0000000140A00E65: mov     [rsi+908h], rax
 * 0000000140A00E6C: movsxd  rax, dword ptr [r13+0]
 * 0000000140A00E70: mov     [rsi+910h], rax
 * 0000000140A00E77: mov     [rsi+918h], rcx
 * 0000000140A00E7E: mov     rcx, rsi
 * 0000000140A00E81: mov     [rsi+8F8h], ebx
 * 0000000140A00E87: call    $$b8
 * 0000000140A00E8C: jmp     loc_140A00D70
 * 0000000140A00E91: xor     eax, eax
 * 0000000140A00E93: lock or [rsp+0CE0h+var_CE0], eax
 * 0000000140A00E97: mov     eax, [r13+18h]
 * 0000000140A00E9B: test    bl, al
 * 0000000140A00E9D: jz      short loc_140A00EB0
 * 0000000140A00E9F: mov     rax, [rsi+580h]
 * 0000000140A00EA6: mov     cl, [rax]
 * 0000000140A00EA8: test    cl, cl
 * 0000000140A00EAA: jnz     loc_140A00FBE
 * 0000000140A00EB0: mov     edx, [r13+10h]
 * 0000000140A00EB4: mov     rcx, [r13+8]
 * 0000000140A00EB8: test    rdx, rdx
 * 0000000140A00EBB: jz      loc_140A00F6A
 * 0000000140A00EC1: mov     eax, [rsi+994h]
 * 0000000140A00EC7: mov     r8d, 40h ; '@'
 * 0000000140A00ECD: test    r8b, al
 * 0000000140A00ED0: jz      loc_140A00F6A
 * 0000000140A00ED6: mov     r15, cr8
 * 0000000140A00EDA: lea     eax, [r8-3Eh]
 * 0000000140A00EDE: mov     cr8, rax
 * 0000000140A00EE2: mov     rbx, rcx
 * 0000000140A00EE5: lea     r13, [rdx-1]
 * 0000000140A00EE9: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A00EF0: add     r13, rcx
 * 0000000140A00EF3: or      r13, 0FFFh
 * 0000000140A00EFA: lea     r12, [rbx-1]
 * 0000000140A00EFE: movzx   r14d, r15b
 * 0000000140A00F02: mov     rax, [rsi+468h]
 * 0000000140A00F09: xor     edx, edx
 * 0000000140A00F0B: mov     rcx, rbx
 * 0000000140A00F0E: call    KeGuardDispatchICall
 * 0000000140A00F13: cmp     eax, 0C000022Dh
 * 0000000140A00F18: jnz     short loc_140A00F3D
 * 0000000140A00F1A: mov     eax, 1
 * 0000000140A00F1F: cmp     r15b, al
 * 0000000140A00F22: ja      short loc_140A00F41
 * 0000000140A00F24: movzx   r14d, r15b
 * 0000000140A00F28: mov     cr8, r14
 * 0000000140A00F2C: mov     al, [rbx]
 * 0000000140A00F2E: mov     rax, cr8
 * 0000000140A00F32: mov     eax, 2
 * 0000000140A00F37: mov     cr8, rax
 * 0000000140A00F3B: jmp     short loc_140A00F02
 * 0000000140A00F3D: test    eax, eax
 * 0000000140A00F3F: js      short loc_140A00F58
 * 0000000140A00F41: mov     r11d, 1000h
 * 0000000140A00F47: add     rbx, r11
 * 0000000140A00F4A: add     r12, r11
 * 0000000140A00F4D: cmp     r12, r13
 * 0000000140A00F50: jnz     short loc_140A00EFE
 * 0000000140A00F52: mov     cr8, r14
 * 0000000140A00F56: jmp     short loc_140A00FBE
 * 0000000140A00F58: mov     cr8, r14
 * 0000000140A00F5C: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A00F61: mov     ebx, 1
 * 0000000140A00F66: mov     rcx, [r13+8]
 * 0000000140A00F6A: xor     eax, eax
 * 0000000140A00F6C: cmp     [rsi+8F8h], eax
 * 0000000140A00F72: jnz     short loc_140A00FBE
 * 0000000140A00F74: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00F7E: xor     edx, edx
 * 0000000140A00F80: add     rax, rsi
 * 0000000140A00F83: mov     [rsi+900h], rax
 * 0000000140A00F8A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00F94: add     rax, r13
 * 0000000140A00F97: mov     [rsi+908h], rax
 * 0000000140A00F9E: movsxd  rax, dword ptr [r13+0]
 * 0000000140A00FA2: mov     [rsi+910h], rax
 * 0000000140A00FA9: mov     [rsi+918h], rcx
 * 0000000140A00FB0: mov     rcx, rsi
 * 0000000140A00FB3: mov     [rsi+8F8h], ebx
 * 0000000140A00FB9: call    $$b8
 * 0000000140A00FBE: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A00FC3: mov     eax, [rax+10h]
 * 0000000140A00FC6: shl     eax, 4
 * 0000000140A00FC9: jmp     loc_1409FD049
 * 0000000140A00FCE: mov     r8d, [r13+10h]
 * 0000000140A00FD2: test    r8d, r8d
 * 0000000140A00FD5: jnz     loc_140A015B3
 * 0000000140A00FDB: lea     rax, [r13+30h]
 * 0000000140A00FDF: xor     r9d, r9d
 * 0000000140A00FE2: mov     [rbp+0BE0h+var_860], rax
 * 0000000140A00FE9: lea     rcx, [rbp+0BE0h+var_868]
 * 0000000140A00FF0: movzx   eax, word ptr [r13+28h]
 * 0000000140A00FF5: xor     r8d, r8d
 * 0000000140A00FF8: mov     [rbp+0BE0h+var_868], ax
 * 0000000140A00FFF: xor     edx, edx
 * 0000000140A01001: mov     [rbp+0BE0h+var_866], ax
 * 0000000140A01008: lea     rax, [rbp+0BE0h+var_B30]
 * 0000000140A0100F: mov     [rsp+0CE0h+var_CA8], rax
 * 0000000140A01014: xor     eax, eax
 * 0000000140A01016: mov     [rsp+0CE0h+var_CB0], rax
 * 0000000140A0101B: mov     byte ptr [rsp+0CE0h+var_CB8], al
 * 0000000140A0101F: mov     rax, [rsi+510h]
 * 0000000140A01026: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 0000000140A0102B: mov     rax, [rsi+1E8h]
 * 0000000140A01032: call    KeGuardDispatchICall
 * 0000000140A01037: test    eax, eax
 * 0000000140A01039: js      loc_1409FC318
 * 0000000140A0103F: mov     rax, [rbp+0BE0h+var_B30]
 * 0000000140A01046: mov     ecx, [rax+10h]
 * 0000000140A01049: mov     eax, 10h
 * 0000000140A0104E: test    al, cl
 * 0000000140A01050: jnz     short loc_140A01065
 * 0000000140A01052: mov     rax, [rsi+1E0h]
 * 0000000140A01059: mov     rcx, [rbp+0BE0h+var_B30]
 * 0000000140A01060: jmp     loc_1409FE1AB
 * 0000000140A01065: mov     rcx, [rsi+1E8h]
 * 0000000140A0106C: lea     rdx, [rbp+0BE0h+var_170]
 * 0000000140A01073: mov     rax, [rsi+200h]
 * 0000000140A0107A: call    KeGuardDispatchICall
 * 0000000140A0107F: mov     rcx, [rbp+0BE0h+var_168]
 * 0000000140A01086: test    rcx, rcx
 * 0000000140A01089: jz      short loc_140A010AB
 * 0000000140A0108B: mov     rax, [rsi+1F8h]
 * 0000000140A01092: mov     rbx, rcx
 * 0000000140A01095: mov     [rbp+0BE0h+var_C30], rcx
 * 0000000140A01099: call    KeGuardDispatchICall
 * 0000000140A0109E: test    rax, rax
 * 0000000140A010A1: jz      short loc_140A010AB
 * 0000000140A010A3: mov     r15d, [rax+50h]
 * 0000000140A010A7: mov     [rbp+0BE0h+var_C28], r15d
 * 0000000140A010AB: mov     rcx, [r13+18h]
 * 0000000140A010AF: lea     rdx, [rbp+0BE0h+var_158]
 * 0000000140A010B6: mov     rax, [rsi+200h]
 * 0000000140A010BD: call    KeGuardDispatchICall
 * 0000000140A010C2: mov     rcx, [rbp+0BE0h+var_150]
 * 0000000140A010C9: test    rcx, rcx
 * 0000000140A010CC: jz      short loc_140A010F0
 * 0000000140A010CE: mov     rax, [rsi+1F8h]
 * 0000000140A010D5: mov     r14, rcx
 * 0000000140A010D8: mov     [rbp+0BE0h+var_C40], rcx
 * 0000000140A010DC: call    KeGuardDispatchICall
 * 0000000140A010E1: test    rax, rax
 * 0000000140A010E4: jz      short loc_140A010F0
 * 0000000140A010E6: mov     r10d, [rax+50h]
 * 0000000140A010EA: mov     [rbp+0BE0h+var_BA0], r10d
 * 0000000140A010EE: jmp     short loc_140A010F4
 * 0000000140A010F0: mov     r10d, [rbp+0BE0h+var_BA0]
 * 0000000140A010F4: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A010FE: jnz     short loc_140A01117
 * 0000000140A01100: mov     rax, [rbp+0BE0h+var_B30]
 * 0000000140A01107: add     rax, 70h ; 'p'
 * 0000000140A0110B: mov     [r13+8], rax
 * 0000000140A0110F: mov     dword ptr [r13+10h], 0E0h
 * 0000000140A01117: mov     rcx, [rbp+0BE0h+var_B30]
 * 0000000140A0111E: xor     eax, eax
 * 0000000140A01120: mov     r12d, r15d
 * 0000000140A01123: mov     dl, al
 * 0000000140A01125: mov     [rbp+0BE0h+arg_8], r12
 * 0000000140A0112C: lea     r11d, [rax+1]
 * 0000000140A01130: movzx   eax, dl
 * 0000000140A01133: mov     r9, [rcx+rax*8+70h]
 * 0000000140A01138: test    r12, r12
 * 0000000140A0113B: jz      short loc_140A01152
 * 0000000140A0113D: lea     rax, [rbx-1]
 * 0000000140A01141: add     rax, r12
 * 0000000140A01144: cmp     r9, rbx
 * 0000000140A01147: jb      short loc_140A01152
 * 0000000140A01149: cmp     r9, rax
 * 0000000140A0114C: jbe     loc_140A01237
 * 0000000140A01152: xor     r15d, r15d
 * 0000000140A01155: mov     eax, r10d
 * 0000000140A01158: test    r10d, r10d
 * 0000000140A0115B: jz      short loc_140A01172
 * 0000000140A0115D: lea     r8, [r14-1]
 * 0000000140A01161: add     r8, rax
 * 0000000140A01164: cmp     r9, r14
 * 0000000140A01167: jb      short loc_140A01172
 * 0000000140A01169: cmp     r9, r8
 * 0000000140A0116C: jbe     loc_140A0123A
 * 0000000140A01172: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A0117C: jz      short loc_140A011CA
 * 0000000140A0117E: mov     rcx, [rsi+0A80h]
 * 0000000140A01185: mov     edx, 30h ; '0'
 * 0000000140A0118A: lea     r8d, [rdx-2Ah]
 * 0000000140A0118E: mov     rax, [r13+0]
 * 0000000140A01192: add     edx, 0FFFFFFF8h
 * 0000000140A01195: mov     [rcx], rax
 * 0000000140A01198: add     r13, 8
 * 0000000140A0119C: add     rcx, 8
 * 0000000140A011A0: sub     r8, r11
 * 0000000140A011A3: jnz     short loc_140A0118E
 * 0000000140A011A5: test    edx, edx
 * 0000000140A011A7: jz      short loc_140A011C3
 * 0000000140A011A9: mov     esi, 0FFFFFFFFh
 * 0000000140A011AE: mov     al, [r13+0]
 * 0000000140A011B2: add     r13, r11
 * 0000000140A011B5: mov     [rcx], al
 * 0000000140A011B7: add     rcx, r11
 * 0000000140A011BA: add     edx, esi
 * 0000000140A011BC: jnz     short loc_140A011AE
 * 0000000140A011BE: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A011C3: mov     r13, [rsi+0A80h]
 * 0000000140A011CA: mov     [r13+20h], r9
 * 0000000140A011CE: mov     rax, [rsi+590h]
 * 0000000140A011D5: mov     [rax], r13
 * 0000000140A011D8: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140A011DF: xor     eax, eax
 * 0000000140A011E1: mov     rcx, [r13+8]
 * 0000000140A011E5: cmp     [rsi+8F8h], eax
 * 0000000140A011EB: jnz     loc_1409FC31B
 * 0000000140A011F1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A011FB: add     rax, rsi
 * 0000000140A011FE: mov     [rsi+900h], rax
 * 0000000140A01205: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0120F: add     rax, r13
 * 0000000140A01212: mov     [rsi+908h], rax
 * 0000000140A01219: movsxd  rax, dword ptr [r13+0]
 * 0000000140A0121D: mov     [rsi+910h], rax
 * 0000000140A01224: mov     [rsi+918h], rcx
 * 0000000140A0122B: mov     [rsi+8F8h], r11d
 * 0000000140A01232: jmp     loc_1409FC6F2
 * 0000000140A01237: xor     r15d, r15d
 * 0000000140A0123A: add     dl, r11b
 * 0000000140A0123D: cmp     dl, 1Ch
 * 0000000140A01240: jb      loc_140A01130
 * 0000000140A01246: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A01250: jnz     loc_1409FCE45
 * 0000000140A01256: mov     r14, [r13+8]
 * 0000000140A0125A: mov     r9d, [r13+10h]
 * 0000000140A0125E: mov     r10, r14
 * 0000000140A01261: add     [rsi+828h], r9d
 * 0000000140A01268: mov     rax, r14
 * 0000000140A0126B: mov     ebx, [rsi+814h]
 * 0000000140A01271: mov     r15, [rsi+818h]
 * 0000000140A01278: lea     rcx, [r14+r9]
 * 0000000140A0127C: cmp     r14, rcx
 * 0000000140A0127F: jnb     short loc_140A01291
 * 0000000140A01281: mov     edx, 40h ; '@'
 * 0000000140A01286: prefetchnta byte ptr [rax]
 * 0000000140A01289: add     rax, rdx
 * 0000000140A0128C: cmp     rax, rcx
 * 0000000140A0128F: jb      short loc_140A01286
 * 0000000140A01291: mov     r11d, r9d
 * 0000000140A01294: mov     r8, r15
 * 0000000140A01297: shr     r11d, 7
 * 0000000140A0129B: mov     edx, 1
 * 0000000140A012A0: test    r11d, r11d
 * 0000000140A012A3: jz      short loc_140A01318
 * 0000000140A012A5: mov     edi, 0FFFFFFFFh
 * 0000000140A012AA: mov     r12, 7010008004002001h
 * 0000000140A012B4: mov     eax, 8
 * 0000000140A012B9: xor     r8, [r10]
 * 0000000140A012BC: mov     ecx, ebx
 * 0000000140A012BE: rol     r8, cl
 * 0000000140A012C1: xor     r8, [r10+8]
 * 0000000140A012C5: add     r10, 10h
 * 0000000140A012C9: rol     r8, cl
 * 0000000140A012CC: sub     rax, rdx
 * 0000000140A012CF: jnz     short loc_140A012B9
 * 0000000140A012D1: mov     rcx, r10
 * 0000000140A012D4: sub     rcx, r14
 * 0000000140A012D7: xor     rcx, r15
 * 0000000140A012DA: mov     rax, rcx
 * 0000000140A012DD: rol     rax, 11h
 * 0000000140A012E1: xor     rcx, rax
 * 0000000140A012E4: mov     rax, r12
 * 0000000140A012E7: mul     rcx
 * 0000000140A012EA: xor     ebx, edx
 * 0000000140A012EC: mov     [rbp+0BE0h+var_660], rdx
 * 0000000140A012F3: xor     ebx, eax
 * 0000000140A012F5: mov     edx, 1
 * 0000000140A012FA: and     ebx, 3Fh
 * 0000000140A012FD: cmovz   ebx, edx
 * 0000000140A01300: add     r11d, edi
 * 0000000140A01303: jnz     short loc_140A012B4
 * 0000000140A01305: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A0130A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A01311: mov     r12, [rbp+0BE0h+arg_8]
 * 0000000140A01318: and     r9d, 7Fh
 * 0000000140A0131C: cmp     r9d, 8
 * 0000000140A01320: jb      short loc_140A0133E
 * 0000000140A01322: mov     eax, r9d
 * 0000000140A01325: shr     rax, 3
 * 0000000140A01329: xor     r8, [r10]
 * 0000000140A0132C: mov     ecx, ebx
 * 0000000140A0132E: rol     r8, cl
 * 0000000140A01331: add     r10, 8
 * 0000000140A01335: add     r9d, 0FFFFFFF8h
 * 0000000140A01339: sub     rax, rdx
 * 0000000140A0133C: jnz     short loc_140A01329
 * 0000000140A0133E: test    r9d, r9d
 * 0000000140A01341: jz      short loc_140A01361
 * 0000000140A01343: mov     esi, 0FFFFFFFFh
 * 0000000140A01348: movzx   eax, byte ptr [r10]
 * 0000000140A0134C: mov     ecx, ebx
 * 0000000140A0134E: xor     r8, rax
 * 0000000140A01351: add     r10, rdx
 * 0000000140A01354: rol     r8, cl
 * 0000000140A01357: add     r9d, esi
 * 0000000140A0135A: jnz     short loc_140A01348
 * 0000000140A0135C: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A01361: mov     rax, r8
 * 0000000140A01364: jmp     short loc_140A01369
 * 0000000140A01366: xor     r8d, eax
 * 0000000140A01369: shr     rax, 1Fh
 * 0000000140A0136D: test    rax, rax
 * 0000000140A01370: jnz     short loc_140A01366
 * 0000000140A01372: btr     r8d, 1Fh
 * 0000000140A01377: mov     [r13+14h], r8d
 * 0000000140A0137B: mov     rax, [rbp+0BE0h+var_B30]
 * 0000000140A01382: mov     r14, [rax+50h]
 * 0000000140A01386: xor     eax, eax
 * 0000000140A01388: mov     r10d, eax
 * 0000000140A0138B: test    r14, r14
 * 0000000140A0138E: jz      short loc_140A01409
 * 0000000140A01390: mov     r10d, [r14]
 * 0000000140A01393: mov     r8b, al
 * 0000000140A01396: lea     r9d, [r10-8]
 * 0000000140A0139A: shr     r9d, 3
 * 0000000140A0139E: test    r9d, r9d
 * 0000000140A013A1: jz      short loc_140A01409
 * 0000000140A013A3: mov     r11, [rbp+0BE0h+var_C30]
 * 0000000140A013A7: mov     rbx, [rbp+0BE0h+var_C40]
 * 0000000140A013AB: mov     r15d, [rbp+0BE0h+var_BA0]
 * 0000000140A013AF: movzx   eax, r8b
 * 0000000140A013B3: mov     rcx, [r14+rax*8+8]
 * 0000000140A013B8: test    rcx, rcx
 * 0000000140A013BB: jz      short loc_140A013FD
 * 0000000140A013BD: test    r12, r12
 * 0000000140A013C0: jz      short loc_140A013D3
 * 0000000140A013C2: lea     rax, [r11-1]
 * 0000000140A013C6: add     rax, r12
 * 0000000140A013C9: cmp     rcx, r11
 * 0000000140A013CC: jb      short loc_140A013D3
 * 0000000140A013CE: cmp     rcx, rax
 * 0000000140A013D1: jbe     short loc_140A013FD
 * 0000000140A013D3: mov     rax, r15
 * 0000000140A013D6: test    r15d, r15d
 * 0000000140A013D9: jz      loc_140A01522
 * 0000000140A013DF: lea     rdx, [rbx-1]
 * 0000000140A013E3: add     rdx, rax
 * 0000000140A013E6: cmp     rcx, rbx
 * 0000000140A013E9: jb      loc_140A01522
 * 0000000140A013EF: cmp     rcx, rdx
 * 0000000140A013F2: ja      loc_140A01522
 * 0000000140A013F8: mov     edx, 1
 * 0000000140A013FD: add     r8b, dl
 * 0000000140A01400: movzx   eax, r8b
 * 0000000140A01404: cmp     eax, r9d
 * 0000000140A01407: jb      short loc_140A013AF
 * 0000000140A01409: add     [rsi+828h], r10d
 * 0000000140A01410: mov     r9, r14
 * 0000000140A01413: mov     r11d, [rsi+814h]
 * 0000000140A0141A: mov     rax, r14
 * 0000000140A0141D: mov     r15, [rsi+818h]
 * 0000000140A01424: mov     ecx, r10d
 * 0000000140A01427: add     rcx, r14
 * 0000000140A0142A: cmp     r14, rcx
 * 0000000140A0142D: jnb     short loc_140A01440
 * 0000000140A0142F: mov     r8d, 40h ; '@'
 * 0000000140A01435: prefetchnta byte ptr [rax]
 * 0000000140A01438: add     rax, r8
 * 0000000140A0143B: cmp     rax, rcx
 * 0000000140A0143E: jb      short loc_140A01435
 * 0000000140A01440: mov     ebx, r10d
 * 0000000140A01443: mov     r8, r15
 * 0000000140A01446: shr     ebx, 7
 * 0000000140A01449: mov     r12d, 0FFFFFFFFh
 * 0000000140A0144F: test    ebx, ebx
 * 0000000140A01451: jz      short loc_140A014C6
 * 0000000140A01453: mov     rdi, 7010008004002001h
 * 0000000140A0145D: mov     edx, 8
 * 0000000140A01462: lea     esi, [rdx-7]
 * 0000000140A01465: mov     rax, [r9]
 * 0000000140A01468: mov     ecx, r11d
 * 0000000140A0146B: xor     rax, r8
 * 0000000140A0146E: mov     r8, [r9+8]
 * 0000000140A01472: rol     rax, cl
 * 0000000140A01475: add     r9, 10h
 * 0000000140A01479: xor     r8, rax
 * 0000000140A0147C: rol     r8, cl
 * 0000000140A0147F: sub     rdx, rsi
 * 0000000140A01482: jnz     short loc_140A01465
 * 0000000140A01484: mov     rcx, r9
 * 0000000140A01487: sub     rcx, r14
 * 0000000140A0148A: xor     rcx, r15
 * 0000000140A0148D: mov     rax, rcx
 * 0000000140A01490: rol     rax, 11h
 * 0000000140A01494: xor     rcx, rax
 * 0000000140A01497: mov     rax, rdi
 * 0000000140A0149A: mul     rcx
 * 0000000140A0149D: xor     r11d, edx
 * 0000000140A014A0: mov     [rbp+0BE0h+var_658], rdx
 * 0000000140A014A7: xor     r11d, eax
 * 0000000140A014AA: mov     rdx, rsi
 * 0000000140A014AD: and     r11d, 3Fh
 * 0000000140A014B1: cmovz   r11d, edx
 * 0000000140A014B5: add     ebx, r12d
 * 0000000140A014B8: jnz     short loc_140A0145D
 * 0000000140A014BA: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A014BF: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A014C6: and     r10d, 7Fh
 * 0000000140A014CA: cmp     r10d, 8
 * 0000000140A014CE: jb      short loc_140A014FC
 * 0000000140A014D0: mov     edx, r10d
 * 0000000140A014D3: mov     esi, 1
 * 0000000140A014D8: shr     rdx, 3
 * 0000000140A014DC: xor     r8, [r9]
 * 0000000140A014DF: mov     ecx, r11d
 * 0000000140A014E2: rol     r8, cl
 * 0000000140A014E5: add     r9, 8
 * 0000000140A014E9: add     r10d, 0FFFFFFF8h
 * 0000000140A014ED: sub     rdx, rsi
 * 0000000140A014F0: jnz     short loc_140A014DC
 * 0000000140A014F2: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A014F7: mov     edx, 1
 * 0000000140A014FC: test    r10d, r10d
 * 0000000140A014FF: jz      short loc_140A01516
 * 0000000140A01501: movzx   eax, byte ptr [r9]
 * 0000000140A01505: mov     ecx, r11d
 * 0000000140A01508: xor     r8, rax
 * 0000000140A0150B: add     r9, rdx
 * 0000000140A0150E: rol     r8, cl
 * 0000000140A01511: add     r10d, r12d
 * 0000000140A01514: jnz     short loc_140A01501
 * 0000000140A01516: mov     rax, r8
 * 0000000140A01519: shr     rax, 1Fh
 * 0000000140A0151D: xor     r15d, r15d
 * 0000000140A01520: jmp     short loc_140A015A0
 * 0000000140A01522: mov     [r13+20h], rcx
 * 0000000140A01526: mov     rax, [rsi+590h]
 * 0000000140A0152D: mov     [rax], r13
 * 0000000140A01530: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140A01537: xor     eax, eax
 * 0000000140A01539: cmp     [rsi+8F8h], eax
 * 0000000140A0153F: jnz     loc_1409FC318
 * 0000000140A01545: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0154F: add     rax, rsi
 * 0000000140A01552: mov     [rsi+900h], rax
 * 0000000140A01559: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A01563: add     rax, r13
 * 0000000140A01566: mov     [rsi+908h], rax
 * 0000000140A0156D: movsxd  rax, dword ptr [r13+0]
 * 0000000140A01571: mov     [rsi+910h], rax
 * 0000000140A01578: mov     [rsi+918h], r14
 * 0000000140A0157F: mov     eax, 1
 * 0000000140A01584: mov     [rsi+8F8h], eax
 * 0000000140A0158A: xor     edx, edx
 * 0000000140A0158C: mov     rcx, rsi
 * 0000000140A0158F: call    $$b8
 * 0000000140A01594: jmp     loc_1409FC318
 * 0000000140A01599: xor     r8d, eax
 * 0000000140A0159C: shr     rax, 1Fh
 * 0000000140A015A0: test    rax, rax
 * 0000000140A015A3: jnz     short loc_140A01599
 * 0000000140A015A5: btr     r8d, 1Fh
 * 0000000140A015AA: mov     [r13+2Ch], r8d
 * 0000000140A015AE: jmp     loc_1409FC31B
 * 0000000140A015B3: mov     r14, [r13+8]
 * 0000000140A015B7: add     [rsi+828h], r8d
 * 0000000140A015BE: mov     r9, r14
 * 0000000140A015C1: mov     r11d, [rsi+814h]
 * 0000000140A015C8: mov     rax, r14
 * 0000000140A015CB: mov     r15, [rsi+818h]
 * 0000000140A015D2: lea     rcx, [r14+r8]
 * 0000000140A015D6: cmp     r14, rcx
 * 0000000140A015D9: jnb     short loc_140A015EC
 * 0000000140A015DB: mov     r10d, 40h ; '@'
 * 0000000140A015E1: prefetchnta byte ptr [rax]
 * 0000000140A015E4: add     rax, r10
 * 0000000140A015E7: cmp     rax, rcx
 * 0000000140A015EA: jb      short loc_140A015E1
 * 0000000140A015EC: mov     r10d, r8d
 * 0000000140A015EF: mov     rbx, r15
 * 0000000140A015F2: shr     r10d, 7
 * 0000000140A015F6: mov     r12d, 0FFFFFFFFh
 * 0000000140A015FC: test    r10d, r10d
 * 0000000140A015FF: jz      short loc_140A0166D
 * 0000000140A01601: mov     rdi, 7010008004002001h
 * 0000000140A0160B: mov     eax, 8
 * 0000000140A01610: xor     rbx, [r9]
 * 0000000140A01613: mov     ecx, r11d
 * 0000000140A01616: rol     rbx, cl
 * 0000000140A01619: xor     rbx, [r9+8]
 * 0000000140A0161D: add     r9, 10h
 * 0000000140A01621: rol     rbx, cl
 * 0000000140A01624: sub     rax, rdx
 * 0000000140A01627: jnz     short loc_140A01610
 * 0000000140A01629: mov     rcx, r9
 * 0000000140A0162C: sub     rcx, r14
 * 0000000140A0162F: xor     rcx, r15
 * 0000000140A01632: mov     rax, rcx
 * 0000000140A01635: rol     rax, 11h
 * 0000000140A01639: xor     rcx, rax
 * 0000000140A0163C: mov     rax, rdi
 * 0000000140A0163F: mul     rcx
 * 0000000140A01642: xor     r11d, edx
 * 0000000140A01645: mov     [rbp+0BE0h+var_650], rdx
 * 0000000140A0164C: xor     r11d, eax
 * 0000000140A0164F: mov     edx, 1
 * 0000000140A01654: and     r11d, 3Fh
 * 0000000140A01658: cmovz   r11d, edx
 * 0000000140A0165C: add     r10d, r12d
 * 0000000140A0165F: jnz     short loc_140A0160B
 * 0000000140A01661: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A01666: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0166D: and     r8d, 7Fh
 * 0000000140A01671: cmp     r8d, 8
 * 0000000140A01675: jb      short loc_140A01694
 * 0000000140A01677: mov     eax, r8d
 * 0000000140A0167A: shr     rax, 3
 * 0000000140A0167E: xor     rbx, [r9]
 * 0000000140A01681: mov     ecx, r11d
 * 0000000140A01684: rol     rbx, cl
 * 0000000140A01687: add     r9, 8
 * 0000000140A0168B: add     r8d, 0FFFFFFF8h
 * 0000000140A0168F: sub     rax, rdx
 * 0000000140A01692: jnz     short loc_140A0167E
 * 0000000140A01694: test    r8d, r8d
 * 0000000140A01697: jz      short loc_140A016AE
 * 0000000140A01699: movzx   eax, byte ptr [r9]
 * 0000000140A0169D: mov     ecx, r11d
 * 0000000140A016A0: xor     rbx, rax
 * 0000000140A016A3: add     r9, rdx
 * 0000000140A016A6: rol     rbx, cl
 * 0000000140A016A9: add     r8d, r12d
 * 0000000140A016AC: jnz     short loc_140A01699
 * 0000000140A016AE: mov     rax, rbx
 * 0000000140A016B1: jmp     short loc_140A016B5
 * 0000000140A016B3: xor     ebx, eax
 * 0000000140A016B5: shr     rax, 1Fh
 * 0000000140A016B9: test    rax, rax
 * 0000000140A016BC: jnz     short loc_140A016B3
 * 0000000140A016BE: mov     r12, [rsp+0CE0h+var_C90]
 * 0000000140A016C3: btr     ebx, 1Fh
 * 0000000140A016C7: mov     r13d, eax
 * 0000000140A016CA: cmp     ebx, [r12+14h]
 * 0000000140A016CF: jz      loc_140A017B7
 * 0000000140A016D5: cmp     [r12], eax
 * 0000000140A016D9: jnz     short loc_140A016E4
 * 0000000140A016DB: cmp     [r12+18h], eax
 * 0000000140A016E0: cmovnz  r13d, edx
 * 0000000140A016E4: mov     ecx, [r12+10h]
 * 0000000140A016E9: mov     rdx, [r12+8]
 * 0000000140A016EE: test    rcx, rcx
 * 0000000140A016F1: jz      loc_140A018E7
 * 0000000140A016F7: mov     eax, [rsi+994h]
 * 0000000140A016FD: mov     r8d, 40h ; '@'
 * 0000000140A01703: test    r8b, al
 * 0000000140A01706: jz      loc_140A018E7
 * 0000000140A0170C: mov     r12, cr8
 * 0000000140A01710: lea     eax, [r8-3Eh]
 * 0000000140A01714: mov     cr8, rax
 * 0000000140A01718: mov     r14, rdx
 * 0000000140A0171B: lea     rax, [rcx-1]
 * 0000000140A0171F: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A01726: add     rax, rdx
 * 0000000140A01729: or      rax, 0FFFh
 * 0000000140A0172F: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A01734: lea     rax, [r14-1]
 * 0000000140A01738: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A0173F: movzx   r15d, r12b
 * 0000000140A01743: mov     rax, [rsi+468h]
 * 0000000140A0174A: xor     edx, edx
 * 0000000140A0174C: mov     rcx, r14
 * 0000000140A0174F: call    KeGuardDispatchICall
 * 0000000140A01754: cmp     eax, 0C000022Dh
 * 0000000140A01759: jnz     short loc_140A01786
 * 0000000140A0175B: test    r13d, r13d
 * 0000000140A0175E: jnz     loc_140A018DE
 * 0000000140A01764: lea     eax, [r13+1]
 * 0000000140A01768: cmp     r12b, al
 * 0000000140A0176B: ja      short loc_140A0178E
 * 0000000140A0176D: movzx   r15d, r12b
 * 0000000140A01771: mov     cr8, r15
 * 0000000140A01775: mov     al, [r14]
 * 0000000140A01778: mov     rax, cr8
 * 0000000140A0177C: lea     eax, [r13+2]
 * 0000000140A01780: mov     cr8, rax
 * 0000000140A01784: jmp     short loc_140A01743
 * 0000000140A01786: test    eax, eax
 * 0000000140A01788: js      loc_140A018DE
 * 0000000140A0178E: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A01795: mov     ecx, 1000h
 * 0000000140A0179A: add     rax, rcx
 * 0000000140A0179D: add     r14, rcx
 * 0000000140A017A0: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A017A7: cmp     rax, [rsp+0CE0h+var_C70]
 * 0000000140A017AC: jnz     short loc_140A0173F
 * 0000000140A017AE: mov     cr8, r15
 * 0000000140A017B2: mov     r12, [rsp+0CE0h+var_C90]
 * 0000000140A017B7: mov     r13d, 1
 * 0000000140A017BD: mov     rax, [r12+8]
 * 0000000140A017C2: sub     rax, 70h ; 'p'
 * 0000000140A017C6: mov     [rbp+0BE0h+var_B30], rax
 * 0000000140A017CD: mov     r15, [rax+50h]
 * 0000000140A017D1: xor     eax, eax
 * 0000000140A017D3: mov     r9d, eax
 * 0000000140A017D6: test    r15, r15
 * 0000000140A017D9: jz      short loc_140A017DE
 * 0000000140A017DB: mov     r9d, [r15]
 * 0000000140A017DE: add     [rsi+828h], r9d
 * 0000000140A017E5: mov     r10, r15
 * 0000000140A017E8: mov     r11d, [rsi+814h]
 * 0000000140A017EF: mov     rax, r15
 * 0000000140A017F2: mov     r14, [rsi+818h]
 * 0000000140A017F9: mov     ecx, r9d
 * 0000000140A017FC: add     rcx, r15
 * 0000000140A017FF: cmp     r15, rcx
 * 0000000140A01802: jnb     short loc_140A01814
 * 0000000140A01804: mov     edx, 40h ; '@'
 * 0000000140A01809: prefetchnta byte ptr [rax]
 * 0000000140A0180C: add     rax, rdx
 * 0000000140A0180F: cmp     rax, rcx
 * 0000000140A01812: jb      short loc_140A01809
 * 0000000140A01814: mov     ebx, r9d
 * 0000000140A01817: mov     r8, r14
 * 0000000140A0181A: shr     ebx, 7
 * 0000000140A0181D: test    ebx, ebx
 * 0000000140A0181F: jz      short loc_140A0188B
 * 0000000140A01821: mov     rsi, 7010008004002001h
 * 0000000140A0182B: mov     edx, 8
 * 0000000140A01830: mov     rax, [r10]
 * 0000000140A01833: mov     ecx, r11d
 * 0000000140A01836: xor     rax, r8
 * 0000000140A01839: mov     r8, [r10+8]
 * 0000000140A0183D: rol     rax, cl
 * 0000000140A01840: add     r10, 10h
 * 0000000140A01844: xor     r8, rax
 * 0000000140A01847: rol     r8, cl
 * 0000000140A0184A: sub     rdx, r13
 * 0000000140A0184D: jnz     short loc_140A01830
 * 0000000140A0184F: mov     rcx, r10
 * 0000000140A01852: sub     rcx, r15
 * 0000000140A01855: xor     rcx, r14
 * 0000000140A01858: mov     rax, rcx
 * 0000000140A0185B: rol     rax, 11h
 * 0000000140A0185F: xor     rcx, rax
 * 0000000140A01862: mov     rax, rsi
 * 0000000140A01865: mul     rcx
 * 0000000140A01868: xor     r11d, edx
 * 0000000140A0186B: mov     [rbp+0BE0h+var_648], rdx
 * 0000000140A01872: xor     r11d, eax
 * 0000000140A01875: mov     eax, 0FFFFFFFFh
 * 0000000140A0187A: and     r11d, 3Fh
 * 0000000140A0187E: cmovz   r11d, r13d
 * 0000000140A01882: add     ebx, eax
 * 0000000140A01884: jnz     short loc_140A0182B
 * 0000000140A01886: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A0188B: and     r9d, 7Fh
 * 0000000140A0188F: cmp     r9d, 8
 * 0000000140A01893: jb      short loc_140A018B2
 * 0000000140A01895: mov     edx, r9d
 * 0000000140A01898: shr     rdx, 3
 * 0000000140A0189C: xor     r8, [r10]
 * 0000000140A0189F: mov     ecx, r11d
 * 0000000140A018A2: rol     r8, cl
 * 0000000140A018A5: add     r10, 8
 * 0000000140A018A9: add     r9d, 0FFFFFFF8h
 * 0000000140A018AD: sub     rdx, r13
 * 0000000140A018B0: jnz     short loc_140A0189C
 * 0000000140A018B2: test    r9d, r9d
 * 0000000140A018B5: jz      short loc_140A018D6
 * 0000000140A018B7: mov     esi, 0FFFFFFFFh
 * 0000000140A018BC: movzx   eax, byte ptr [r10]
 * 0000000140A018C0: mov     ecx, r11d
 * 0000000140A018C3: xor     r8, rax
 * 0000000140A018C6: add     r10, r13
 * 0000000140A018C9: rol     r8, cl
 * 0000000140A018CC: add     r9d, esi
 * 0000000140A018CF: jnz     short loc_140A018BC
 * 0000000140A018D1: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A018D6: mov     rax, r8
 * 0000000140A018D9: jmp     loc_140A01972
 * 0000000140A018DE: mov     cr8, r15
 * 0000000140A018E2: mov     r12, [rsp+0CE0h+var_C90]
 * 0000000140A018E7: mov     eax, [rsi+8F8h]
 * 0000000140A018ED: mov     edx, [r12+14h]
 * 0000000140A018F2: test    eax, eax
 * 0000000140A018F4: jnz     short loc_140A0190C
 * 0000000140A018F6: mov     rax, [rsi+590h]
 * 0000000140A018FD: mov     ecx, ebx
 * 0000000140A018FF: xor     rcx, rdx
 * 0000000140A01902: mov     [rax+18h], rcx
 * 0000000140A01906: mov     eax, [rsi+8F8h]
 * 0000000140A0190C: mov     rcx, [r12+8]
 * 0000000140A01911: mov     r13d, 1
 * 0000000140A01917: test    eax, eax
 * 0000000140A01919: jnz     loc_140A017BD
 * 0000000140A0191F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A01929: xor     edx, edx
 * 0000000140A0192B: add     rax, rsi
 * 0000000140A0192E: mov     [rsi+900h], rax
 * 0000000140A01935: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0193F: add     rax, r12
 * 0000000140A01942: mov     [rsi+908h], rax
 * 0000000140A01949: movsxd  rax, dword ptr [r12]
 * 0000000140A0194D: mov     [rsi+910h], rax
 * 0000000140A01954: mov     [rsi+918h], rcx
 * 0000000140A0195B: mov     rcx, rsi
 * 0000000140A0195E: mov     [rsi+8F8h], r13d
 * 0000000140A01965: call    $$b8
 * 0000000140A0196A: jmp     loc_140A017BD
 * 0000000140A0196F: xor     r8d, eax
 * 0000000140A01972: shr     rax, 1Fh
 * 0000000140A01976: test    rax, rax
 * 0000000140A01979: jnz     short loc_140A0196F
 * 0000000140A0197B: mov     edx, [r12+2Ch]
 * 0000000140A01980: btr     r8d, 1Fh
 * 0000000140A01985: cmp     r8d, edx
 * 0000000140A01988: jz      loc_1409FC318
 * 0000000140A0198E: mov     eax, [rsi+8F8h]
 * 0000000140A01994: test    eax, eax
 * 0000000140A01996: jnz     loc_1409FC318
 * 0000000140A0199C: mov     rax, [rsi+590h]
 * 0000000140A019A3: mov     ecx, r8d
 * 0000000140A019A6: xor     rcx, rdx
 * 0000000140A019A9: mov     [rax+18h], rcx
 * 0000000140A019AD: mov     eax, [rsi+8F8h]
 * 0000000140A019B3: test    eax, eax
 * 0000000140A019B5: jnz     loc_1409FC318
 * 0000000140A019BB: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A019C5: add     rax, rsi
 * 0000000140A019C8: mov     [rsi+900h], rax
 * 0000000140A019CF: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A019D9: add     rax, r12
 * 0000000140A019DC: mov     [rsi+908h], rax
 * 0000000140A019E3: movsxd  rax, dword ptr [r12]
 * 0000000140A019E7: mov     [rsi+910h], rax
 * 0000000140A019EE: mov     [rsi+918h], r15
 * 0000000140A019F5: mov     [rsi+8F8h], r13d
 * 0000000140A019FC: jmp     loc_140A0158A
 * 0000000140A01A01: cmp     r10d, 25h ; '%'
 * 0000000140A01A05: jg      loc_140A03FD0
 * 0000000140A01A0B: jz      loc_140A03F5A
 * 0000000140A01A11: mov     ecx, r10d
 * 0000000140A01A14: sub     ecx, 1Dh
 * 0000000140A01A17: jz      loc_140A03B0C
 * 0000000140A01A1D: sub     ecx, 1
 * 0000000140A01A20: jz      loc_140A0337D
 * 0000000140A01A26: sub     ecx, 1
 * 0000000140A01A29: jz      loc_140A026D9
 * 0000000140A01A2F: sub     ecx, 1
 * 0000000140A01A32: jz      loc_140A026C9
 * 0000000140A01A38: sub     ecx, 1
 * 0000000140A01A3B: jz      loc_140A026B9
 * 0000000140A01A41: sub     ecx, 2
 * 0000000140A01A44: jz      loc_140A01F5C
 * 0000000140A01A4A: cmp     ecx, 1
 * 0000000140A01A4D: jnz     loc_140A06767
 * 0000000140A01A53: mov     r14, [r13+8]
 * 0000000140A01A57: mov     r8d, [r13+10h]
 * 0000000140A01A5B: mov     r9, r14
 * 0000000140A01A5E: add     [rsi+828h], r8d
 * 0000000140A01A65: mov     rax, r14
 * 0000000140A01A68: mov     r10d, [rsi+814h]
 * 0000000140A01A6F: mov     r15, [rsi+818h]
 * 0000000140A01A76: lea     rcx, [r14+r8]
 * 0000000140A01A7A: cmp     r14, rcx
 * 0000000140A01A7D: jnb     short loc_140A01A90
 * 0000000140A01A7F: mov     r11d, 40h ; '@'
 * 0000000140A01A85: prefetchnta byte ptr [rax]
 * 0000000140A01A88: add     rax, r11
 * 0000000140A01A8B: cmp     rax, rcx
 * 0000000140A01A8E: jb      short loc_140A01A85
 * 0000000140A01A90: mov     r11d, r8d
 * 0000000140A01A93: mov     rbx, r15
 * 0000000140A01A96: shr     r11d, 7
 * 0000000140A01A9A: mov     r12d, 0FFFFFFFFh
 * 0000000140A01AA0: test    r11d, r11d
 * 0000000140A01AA3: jz      short loc_140A01B11
 * 0000000140A01AA5: mov     rdi, 7010008004002001h
 * 0000000140A01AAF: mov     eax, 8
 * 0000000140A01AB4: xor     rbx, [r9]
 * 0000000140A01AB7: mov     ecx, r10d
 * 0000000140A01ABA: rol     rbx, cl
 * 0000000140A01ABD: xor     rbx, [r9+8]
 * 0000000140A01AC1: add     r9, 10h
 * 0000000140A01AC5: rol     rbx, cl
 * 0000000140A01AC8: sub     rax, rdx
 * 0000000140A01ACB: jnz     short loc_140A01AB4
 * 0000000140A01ACD: mov     rcx, r9
 * 0000000140A01AD0: sub     rcx, r14
 * 0000000140A01AD3: xor     rcx, r15
 * 0000000140A01AD6: mov     rax, rcx
 * 0000000140A01AD9: rol     rax, 11h
 * 0000000140A01ADD: xor     rcx, rax
 * 0000000140A01AE0: mov     rax, rdi
 * 0000000140A01AE3: mul     rcx
 * 0000000140A01AE6: xor     r10d, edx
 * 0000000140A01AE9: mov     [rbp+0BE0h+var_640], rdx
 * 0000000140A01AF0: xor     r10d, eax
 * 0000000140A01AF3: mov     edx, 1
 * 0000000140A01AF8: and     r10d, 3Fh
 * 0000000140A01AFC: cmovz   r10d, edx
 * 0000000140A01B00: add     r11d, r12d
 * 0000000140A01B03: jnz     short loc_140A01AAF
 * 0000000140A01B05: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A01B0A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A01B11: and     r8d, 7Fh
 * 0000000140A01B15: cmp     r8d, 8
 * 0000000140A01B19: jb      short loc_140A01B38
 * 0000000140A01B1B: mov     eax, r8d
 * 0000000140A01B1E: shr     rax, 3
 * 0000000140A01B22: xor     rbx, [r9]
 * 0000000140A01B25: mov     ecx, r10d
 * 0000000140A01B28: rol     rbx, cl
 * 0000000140A01B2B: add     r9, 8
 * 0000000140A01B2F: add     r8d, 0FFFFFFF8h
 * 0000000140A01B33: sub     rax, rdx
 * 0000000140A01B36: jnz     short loc_140A01B22
 * 0000000140A01B38: test    r8d, r8d
 * 0000000140A01B3B: jz      short loc_140A01B52
 * 0000000140A01B3D: movzx   eax, byte ptr [r9]
 * 0000000140A01B41: mov     ecx, r10d
 * 0000000140A01B44: xor     rbx, rax
 * 0000000140A01B47: add     r9, rdx
 * 0000000140A01B4A: rol     rbx, cl
 * 0000000140A01B4D: add     r8d, r12d
 * 0000000140A01B50: jnz     short loc_140A01B3D
 * 0000000140A01B52: mov     rax, rbx
 * 0000000140A01B55: jmp     short loc_140A01B59
 * 0000000140A01B57: xor     ebx, eax
 * 0000000140A01B59: shr     rax, 1Fh
 * 0000000140A01B5D: test    rax, rax
 * 0000000140A01B60: jnz     short loc_140A01B57
 * 0000000140A01B62: btr     ebx, 1Fh
 * 0000000140A01B66: mov     r12d, eax
 * 0000000140A01B69: cmp     ebx, [r13+14h]
 * 0000000140A01B6D: jz      loc_140A01CD0
 * 0000000140A01B73: cmp     [r13+0], eax
 * 0000000140A01B77: jnz     short loc_140A01B81
 * 0000000140A01B79: cmp     [r13+18h], eax
 * 0000000140A01B7D: cmovnz  r12d, edx
 * 0000000140A01B81: mov     ecx, [r13+10h]
 * 0000000140A01B85: mov     rdx, [r13+8]
 * 0000000140A01B89: test    rcx, rcx
 * 0000000140A01B8C: jz      loc_140A01C55
 * 0000000140A01B92: mov     eax, [rsi+994h]
 * 0000000140A01B98: mov     r8d, 40h ; '@'
 * 0000000140A01B9E: test    r8b, al
 * 0000000140A01BA1: jz      loc_140A01C55
 * 0000000140A01BA7: mov     r13, cr8
 * 0000000140A01BAB: lea     eax, [r8-3Eh]
 * 0000000140A01BAF: mov     cr8, rax
 * 0000000140A01BB3: mov     r14, rdx
 * 0000000140A01BB6: lea     rax, [rcx-1]
 * 0000000140A01BBA: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A01BC1: add     rax, rdx
 * 0000000140A01BC4: or      rax, 0FFFh
 * 0000000140A01BCA: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A01BCF: lea     rax, [r14-1]
 * 0000000140A01BD3: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A01BDA: movzx   r15d, r13b
 * 0000000140A01BDE: mov     rax, [rsi+468h]
 * 0000000140A01BE5: xor     edx, edx
 * 0000000140A01BE7: mov     rcx, r14
 * 0000000140A01BEA: call    KeGuardDispatchICall
 * 0000000140A01BEF: cmp     eax, 0C000022Dh
 * 0000000140A01BF4: jnz     short loc_140A01C1F
 * 0000000140A01BF6: test    r12d, r12d
 * 0000000140A01BF9: jnz     short loc_140A01C4C
 * 0000000140A01BFB: lea     eax, [r12+1]
 * 0000000140A01C00: cmp     r13b, al
 * 0000000140A01C03: ja      short loc_140A01C23
 * 0000000140A01C05: movzx   r15d, r13b
 * 0000000140A01C09: mov     cr8, r15
 * 0000000140A01C0D: mov     al, [r14]
 * 0000000140A01C10: mov     rax, cr8
 * 0000000140A01C14: lea     eax, [r12+2]
 * 0000000140A01C19: mov     cr8, rax
 * 0000000140A01C1D: jmp     short loc_140A01BDE
 * 0000000140A01C1F: test    eax, eax
 * 0000000140A01C21: js      short loc_140A01C4C
 * 0000000140A01C23: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A01C2A: mov     ecx, 1000h
 * 0000000140A01C2F: add     rax, rcx
 * 0000000140A01C32: add     r14, rcx
 * 0000000140A01C35: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A01C3C: cmp     rax, [rsp+0CE0h+var_C70]
 * 0000000140A01C41: jnz     short loc_140A01BDA
 * 0000000140A01C43: mov     cr8, r15
 * 0000000140A01C47: jmp     loc_140A01CD0
 * 0000000140A01C4C: mov     cr8, r15
 * 0000000140A01C50: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A01C55: mov     eax, [rsi+8F8h]
 * 0000000140A01C5B: mov     edx, [r13+14h]
 * 0000000140A01C5F: test    eax, eax
 * 0000000140A01C61: jnz     short loc_140A01C79
 * 0000000140A01C63: mov     rax, [rsi+590h]
 * 0000000140A01C6A: mov     ecx, ebx
 * 0000000140A01C6C: xor     rcx, rdx
 * 0000000140A01C6F: mov     [rax+18h], rcx
 * 0000000140A01C73: mov     eax, [rsi+8F8h]
 * 0000000140A01C79: mov     rcx, [r13+8]
 * 0000000140A01C7D: test    eax, eax
 * 0000000140A01C7F: jnz     short loc_140A01CD0
 * 0000000140A01C81: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A01C8B: xor     edx, edx
 * 0000000140A01C8D: add     rax, rsi
 * 0000000140A01C90: mov     [rsi+900h], rax
 * 0000000140A01C97: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A01CA1: add     rax, r13
 * 0000000140A01CA4: mov     [rsi+908h], rax
 * 0000000140A01CAB: movsxd  rax, dword ptr [r13+0]
 * 0000000140A01CAF: mov     [rsi+910h], rax
 * 0000000140A01CB6: mov     eax, 1
 * 0000000140A01CBB: mov     [rsi+918h], rcx
 * 0000000140A01CC2: mov     rcx, rsi
 * 0000000140A01CC5: mov     [rsi+8F8h], eax
 * 0000000140A01CCB: call    $$b8
 * 0000000140A01CD0: mov     rcx, [rsi+540h]
 * 0000000140A01CD7: mov     r14, cr8
 * 0000000140A01CDB: mov     eax, 0Fh
 * 0000000140A01CE0: mov     cr8, rax
 * 0000000140A01CE4: mov     rax, [rsi+150h]
 * 0000000140A01CEB: call    KeGuardDispatchICall
 * 0000000140A01CF0: mov     rax, [rsi+610h]
 * 0000000140A01CF7: mov     r12, [rsp+0CE0h+var_C90]
 * 0000000140A01CFC: mov     rcx, [rax]
 * 0000000140A01CFF: mov     eax, [rcx]
 * 0000000140A01D01: lea     rbx, [rcx+10h]
 * 0000000140A01D05: mov     r15b, [rcx+0Ch]
 * 0000000140A01D09: lea     rcx, [rax+rax*2]
 * 0000000140A01D0D: lea     r13, [rbx+rcx*8]
 * 0000000140A01D11: mov     r8d, 18h
 * 0000000140A01D17: lea     r9, [r12+18h]
 * 0000000140A01D1C: mov     r10, rbx
 * 0000000140A01D1F: mov     rcx, [r10]
 * 0000000140A01D22: add     r10, 8
 * 0000000140A01D26: mov     rax, [r9]
 * 0000000140A01D29: add     r9, 8
 * 0000000140A01D2D: cmp     rcx, rax
 * 0000000140A01D30: jnz     short loc_140A01D66
 * 0000000140A01D32: add     r8d, 0FFFFFFF8h
 * 0000000140A01D36: cmp     r8d, 8
 * 0000000140A01D3A: jnb     short loc_140A01D1F
 * 0000000140A01D3C: test    r8d, r8d
 * 0000000140A01D3F: jz      short loc_140A01D6F
 * 0000000140A01D41: mov     r11d, 1
 * 0000000140A01D47: movzx   edx, byte ptr [r10]
 * 0000000140A01D4B: add     r10, r11
 * 0000000140A01D4E: movzx   eax, byte ptr [r9]
 * 0000000140A01D52: add     r9, r11
 * 0000000140A01D55: cmp     rdx, rax
 * 0000000140A01D58: jnz     short loc_140A01D66
 * 0000000140A01D5A: mov     eax, 0FFFFFFFFh
 * 0000000140A01D5F: add     r8d, eax
 * 0000000140A01D62: jz      short loc_140A01D6F
 * 0000000140A01D64: jmp     short loc_140A01D47
 * 0000000140A01D66: add     rbx, 18h
 * 0000000140A01D6A: cmp     rbx, r13
 * 0000000140A01D6D: jb      short loc_140A01D11
 * 0000000140A01D6F: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A01D74: mov     rcx, [rsi+540h]
 * 0000000140A01D7B: mov     rax, [rsi+190h]
 * 0000000140A01D82: call    KeGuardDispatchICall
 * 0000000140A01D87: movzx   eax, r14b
 * 0000000140A01D8B: mov     cr8, rax
 * 0000000140A01D8F: xor     eax, eax
 * 0000000140A01D91: test    r15b, r15b
 * 0000000140A01D94: jz      short loc_140A01E12
 * 0000000140A01D96: mov     eax, [rsi+994h]
 * 0000000140A01D9C: mov     ecx, 10h
 * 0000000140A01DA1: test    cl, al
 * 0000000140A01DA3: jz      short loc_140A01E02
 * 0000000140A01DA5: xor     eax, eax
 * 0000000140A01DA7: cmp     [rsi+8F8h], eax
 * 0000000140A01DAD: jnz     short loc_140A01E02
 * 0000000140A01DAF: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A01DB4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A01DBE: add     rax, rsi
 * 0000000140A01DC1: xor     edx, edx
 * 0000000140A01DC3: mov     [rsi+900h], rax
 * 0000000140A01DCA: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A01DD4: add     rax, rcx
 * 0000000140A01DD7: mov     [rsi+908h], rax
 * 0000000140A01DDE: movsxd  rax, dword ptr [rcx]
 * 0000000140A01DE1: mov     rcx, rsi
 * 0000000140A01DE4: mov     [rsi+910h], rax
 * 0000000140A01DEB: mov     eax, 1
 * 0000000140A01DF0: mov     [rsi+918h], rax
 * 0000000140A01DF7: mov     [rsi+8F8h], eax
 * 0000000140A01DFD: call    $$b8
 * 0000000140A01E02: mov     ecx, 1
 * 0000000140A01E07: cmp     [r12+18h], rcx
 * 0000000140A01E0C: jz      short loc_140A01E76
 * 0000000140A01E0E: xor     eax, eax
 * 0000000140A01E10: jmp     short loc_140A01E17
 * 0000000140A01E12: mov     ecx, 1
 * 0000000140A01E17: cmp     rbx, r13
 * 0000000140A01E1A: jnz     short loc_140A01E76
 * 0000000140A01E1C: mov     r13, 0B3B74BDEE4453415h
 * 0000000140A01E26: mov     r12, [rsp+0CE0h+var_C90]
 * 0000000140A01E2B: cmp     [rsi+8F8h], eax
 * 0000000140A01E31: jnz     short loc_140A01E85
 * 0000000140A01E33: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A01E3D: xor     edx, edx
 * 0000000140A01E3F: add     rax, rsi
 * 0000000140A01E42: mov     [rsi+900h], rax
 * 0000000140A01E49: lea     rax, [r12+r13]
 * 0000000140A01E4D: mov     [rsi+908h], rax
 * 0000000140A01E54: movsxd  rax, dword ptr [r12]
 * 0000000140A01E58: mov     [rsi+910h], rax
 * 0000000140A01E5F: mov     [rsi+918h], rbx
 * 0000000140A01E66: mov     [rsi+8F8h], ecx
 * 0000000140A01E6C: mov     rcx, rsi
 * 0000000140A01E6F: call    $$b8
 * 0000000140A01E74: jmp     short loc_140A01E85
 * 0000000140A01E76: mov     r12, [rsp+0CE0h+var_C90]
 * 0000000140A01E7B: mov     r13, 0B3B74BDEE4453415h
 * 0000000140A01E85: mov     rcx, [rsi+540h]
 * 0000000140A01E8C: mov     r15, cr8
 * 0000000140A01E90: mov     eax, 0Fh
 * 0000000140A01E95: mov     cr8, rax
 * 0000000140A01E99: mov     rax, [rsi+150h]
 * 0000000140A01EA0: call    KeGuardDispatchICall
 * 0000000140A01EA5: mov     rax, [rsi+610h]
 * 0000000140A01EAC: mov     rcx, [rax]
 * 0000000140A01EAF: mov     eax, [rcx]
 * 0000000140A01EB1: lea     rbx, [rcx+10h]
 * 0000000140A01EB5: lea     rcx, [rax+rax*2]
 * 0000000140A01EB9: xor     eax, eax
 * 0000000140A01EBB: lea     r14, [rbx+rcx*8]
 * 0000000140A01EBF: jmp     short loc_140A01EE8
 * 0000000140A01EC1: mov     rcx, [rbx+8]
 * 0000000140A01EC5: cmp     rcx, rdx
 * 0000000140A01EC8: jb      short loc_140A01EF4
 * 0000000140A01ECA: mov     rax, rcx
 * 0000000140A01ECD: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140A01ED3: cmp     rax, rcx
 * 0000000140A01ED6: jnz     short loc_140A01EF4
 * 0000000140A01ED8: mov     eax, [rbx+10h]
 * 0000000140A01EDB: add     rax, rcx
 * 0000000140A01EDE: cmp     rax, rcx
 * 0000000140A01EE1: jbe     short loc_140A01EF4
 * 0000000140A01EE3: cmp     rax, rdx
 * 0000000140A01EE6: jz      short loc_140A01EF4
 * 0000000140A01EE8: add     rbx, 18h
 * 0000000140A01EEC: mov     rdx, rax
 * 0000000140A01EEF: cmp     rbx, r14
 * 0000000140A01EF2: jb      short loc_140A01EC1
 * 0000000140A01EF4: mov     rcx, [rsi+540h]
 * 0000000140A01EFB: mov     rax, [rsi+190h]
 * 0000000140A01F02: call    KeGuardDispatchICall
 * 0000000140A01F07: movzx   eax, r15b
 * 0000000140A01F0B: mov     cr8, rax
 * 0000000140A01F0F: cmp     rbx, r14
 * 0000000140A01F12: jz      loc_1409FC318
 * 0000000140A01F18: xor     eax, eax
 * 0000000140A01F1A: cmp     [rsi+8F8h], eax
 * 0000000140A01F20: jnz     loc_1409FC318
 * 0000000140A01F26: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A01F30: add     rax, rsi
 * 0000000140A01F33: mov     [rsi+900h], rax
 * 0000000140A01F3A: lea     rax, [r12+r13]
 * 0000000140A01F3E: mov     [rsi+908h], rax
 * 0000000140A01F45: movsxd  rax, dword ptr [r12]
 * 0000000140A01F49: mov     [rsi+910h], rax
 * 0000000140A01F50: mov     [rsi+918h], rbx
 * 0000000140A01F57: jmp     loc_140A0157F
 * 0000000140A01F5C: mov     ecx, [r13+28h]
 * 0000000140A01F60: and     ecx, edx
 * 0000000140A01F62: jz      short loc_140A01F81
 * 0000000140A01F64: xor     eax, eax
 * 0000000140A01F66: cmp     [rsi+980h], rax
 * 0000000140A01F6D: jz      loc_1409FC312
 * 0000000140A01F73: mov     eax, [rsi+994h]
 * 0000000140A01F79: test    al, 4
 * 0000000140A01F7B: jnz     loc_1409FC3EA
 * 0000000140A01F81: xor     eax, eax
 * 0000000140A01F83: test    ecx, ecx
 * 0000000140A01F85: jz      loc_140A0249C
 * 0000000140A01F8B: mov     edx, [rsi+994h]
 * 0000000140A01F91: mov     ecx, edx
 * 0000000140A01F93: cmp     [rsi+824h], eax
 * 0000000140A01F99: jnz     short loc_140A01FAD
 * 0000000140A01F9B: shl     ecx, 3
 * 0000000140A01F9E: xor     ecx, edx
 * 0000000140A01FA0: and     ecx, 20h
 * 0000000140A01FA3: xor     ecx, edx
 * 0000000140A01FA5: mov     [rsi+994h], ecx
 * 0000000140A01FAB: jmp     short loc_140A01FBE
 * 0000000140A01FAD: mov     eax, edx
 * 0000000140A01FAF: shr     eax, 3
 * 0000000140A01FB2: xor     eax, edx
 * 0000000140A01FB4: test    al, 4
 * 0000000140A01FB6: jnz     loc_1409FC3EA
 * 0000000140A01FBC: xor     eax, eax
 * 0000000140A01FBE: cmp     [rsi+980h], rax
 * 0000000140A01FC5: jz      loc_140A02491
 * 0000000140A01FCB: mov     edx, ecx
 * 0000000140A01FCD: cmp     [rsi+824h], eax
 * 0000000140A01FD3: jnz     short loc_140A01FE7
 * 0000000140A01FD5: shl     edx, 3
 * 0000000140A01FD8: xor     edx, ecx
 * 0000000140A01FDA: and     edx, 20h
 * 0000000140A01FDD: xor     edx, ecx
 * 0000000140A01FDF: mov     [rsi+994h], edx
 * 0000000140A01FE5: jmp     short loc_140A01FF6
 * 0000000140A01FE7: mov     eax, ecx
 * 0000000140A01FE9: shr     eax, 3
 * 0000000140A01FEC: xor     eax, ecx
 * 0000000140A01FEE: test    al, 4
 * 0000000140A01FF0: jnz     loc_140A0248F
 * 0000000140A01FF6: test    dl, 4
 * 0000000140A01FF9: jz      loc_140A02209
 * 0000000140A01FFF: mov     r14d, [r13+8]
 * 0000000140A02003: mov     r12d, 1
 * 0000000140A02009: mov     ecx, [r13+10h]
 * 0000000140A0200D: and     r14d, 0FFFh
 * 0000000140A02014: mov     rbx, [r13+8]
 * 0000000140A02018: add     r14, 0FFFh
 * 0000000140A0201F: add     r14, rcx
 * 0000000140A02022: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A02029: shr     r14, 0Ch
 * 0000000140A0202D: test    r14, r14
 * 0000000140A02030: jz      loc_140A020BE
 * 0000000140A02036: xor     edi, edi
 * 0000000140A02038: mov     rax, [rsi+2B0h]
 * 0000000140A0203F: mov     rcx, rbx
 * 0000000140A02042: sub     r14, r12
 * 0000000140A02045: call    KeGuardDispatchICall
 * 0000000140A0204A: test    al, al
 * 0000000140A0204C: jz      short loc_140A020A1
 * 0000000140A0204E: cmp     [rsi+8F8h], edi
 * 0000000140A02054: jnz     short loc_140A020A1
 * 0000000140A02056: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02060: xor     edx, edx
 * 0000000140A02062: add     rax, rsi
 * 0000000140A02065: mov     rcx, rsi
 * 0000000140A02068: mov     [rsi+900h], rax
 * 0000000140A0206F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A02079: add     rax, r13
 * 0000000140A0207C: mov     [rsi+908h], rax
 * 0000000140A02083: movsxd  rax, dword ptr [r13+0]
 * 0000000140A02087: mov     [rsi+910h], rax
 * 0000000140A0208E: mov     [rsi+918h], rbx
 * 0000000140A02095: mov     [rsi+8F8h], r12d
 * 0000000140A0209C: call    $$b8
 * 0000000140A020A1: add     dword ptr [rsi+828h], 100h
 * 0000000140A020AB: add     rbx, 1000h
 * 0000000140A020B2: test    r14, r14
 * 0000000140A020B5: jnz     short loc_140A02038
 * 0000000140A020B7: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A020BE: xor     r15d, r15d
 * 0000000140A020C1: mov     r14, 0B3B74BDEE4453415h
 * 0000000140A020CB: mov     eax, [r13+28h]
 * 0000000140A020CF: mov     ecx, 2
 * 0000000140A020D4: test    cl, al
 * 0000000140A020D6: jz      loc_1409FC31B
 * 0000000140A020DC: mov     rbx, [r13+8]
 * 0000000140A020E0: test    al, 4
 * 0000000140A020E2: jz      loc_140A02171
 * 0000000140A020E8: mov     rax, [rbx+70h]
 * 0000000140A020EC: mov     rdx, [r13+18h]
 * 0000000140A020F0: mov     rcx, [rax]
 * 0000000140A020F3: cmp     rcx, rdx
 * 0000000140A020F6: jz      short loc_140A02171
 * 0000000140A020F8: mov     rax, [rsi+590h]
 * 0000000140A020FF: mov     [rax], rcx
 * 0000000140A02102: mov     dword ptr [rax+10h], 100h
 * 0000000140A02109: mov     eax, [rsi+8F8h]
 * 0000000140A0210F: test    eax, eax
 * 0000000140A02111: jnz     short loc_140A02127
 * 0000000140A02113: mov     rax, [rsi+590h]
 * 0000000140A0211A: xor     rcx, rdx
 * 0000000140A0211D: mov     [rax+18h], rcx
 * 0000000140A02121: mov     eax, [rsi+8F8h]
 * 0000000140A02127: mov     rcx, [rbx+70h]
 * 0000000140A0212B: test    eax, eax
 * 0000000140A0212D: jnz     short loc_140A02171
 * 0000000140A0212F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02139: xor     edx, edx
 * 0000000140A0213B: add     rax, rsi
 * 0000000140A0213E: mov     [rsi+900h], rax
 * 0000000140A02145: lea     rax, [r14+r13]
 * 0000000140A02149: mov     [rsi+908h], rax
 * 0000000140A02150: movsxd  rax, dword ptr [r13+0]
 * 0000000140A02154: mov     [rsi+910h], rax
 * 0000000140A0215B: mov     [rsi+918h], rcx
 * 0000000140A02162: mov     rcx, rsi
 * 0000000140A02165: mov     [rsi+8F8h], r12d
 * 0000000140A0216C: call    $$b8
 * 0000000140A02171: mov     eax, [r13+28h]
 * 0000000140A02175: test    al, 8
 * 0000000140A02177: jz      loc_1409FC31B
 * 0000000140A0217D: mov     rax, [rbx+78h]
 * 0000000140A02181: mov     rdx, [r13+20h]
 * 0000000140A02185: mov     rcx, [rax]
 * 0000000140A02188: cmp     rcx, rdx
 * 0000000140A0218B: jz      loc_1409FC31B
 * 0000000140A02191: mov     rax, [rsi+590h]
 * 0000000140A02198: mov     [rax], rcx
 * 0000000140A0219B: mov     dword ptr [rax+10h], 100h
 * 0000000140A021A2: mov     eax, [rsi+8F8h]
 * 0000000140A021A8: test    eax, eax
 * 0000000140A021AA: jnz     short loc_140A021C0
 * 0000000140A021AC: mov     rax, [rsi+590h]
 * 0000000140A021B3: xor     rcx, rdx
 * 0000000140A021B6: mov     [rax+18h], rcx
 * 0000000140A021BA: mov     eax, [rsi+8F8h]
 * 0000000140A021C0: mov     rcx, [rbx+78h]
 * 0000000140A021C4: test    eax, eax
 * 0000000140A021C6: jnz     loc_1409FC31B
 * 0000000140A021CC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A021D6: add     rax, rsi
 * 0000000140A021D9: mov     [rsi+900h], rax
 * 0000000140A021E0: lea     rax, [r14+r13]
 * 0000000140A021E4: mov     [rsi+908h], rax
 * 0000000140A021EB: movsxd  rax, dword ptr [r13+0]
 * 0000000140A021EF: mov     [rsi+910h], rax
 * 0000000140A021F6: mov     [rsi+918h], rcx
 * 0000000140A021FD: mov     [rsi+8F8h], r12d
 * 0000000140A02204: jmp     loc_1409FC6F2
 * 0000000140A02209: mov     r14, [r13+8]
 * 0000000140A0220D: mov     r8d, [r13+10h]
 * 0000000140A02211: mov     r9, r14
 * 0000000140A02214: add     [rsi+828h], r8d
 * 0000000140A0221B: mov     rax, r14
 * 0000000140A0221E: mov     r11d, [rsi+814h]
 * 0000000140A02225: mov     r15, [rsi+818h]
 * 0000000140A0222C: lea     rcx, [r14+r8]
 * 0000000140A02230: cmp     r14, rcx
 * 0000000140A02233: jnb     short loc_140A02245
 * 0000000140A02235: mov     edx, 40h ; '@'
 * 0000000140A0223A: prefetchnta byte ptr [rax]
 * 0000000140A0223D: add     rax, rdx
 * 0000000140A02240: cmp     rax, rcx
 * 0000000140A02243: jb      short loc_140A0223A
 * 0000000140A02245: mov     r10d, r8d
 * 0000000140A02248: mov     rbx, r15
 * 0000000140A0224B: shr     r10d, 7
 * 0000000140A0224F: mov     r12d, 1
 * 0000000140A02255: test    r10d, r10d
 * 0000000140A02258: jz      short loc_140A022C5
 * 0000000140A0225A: mov     rsi, 7010008004002001h
 * 0000000140A02264: mov     edx, 8
 * 0000000140A02269: mov     rax, [r9]
 * 0000000140A0226C: mov     ecx, r11d
 * 0000000140A0226F: xor     rax, rbx
 * 0000000140A02272: mov     rbx, [r9+8]
 * 0000000140A02276: rol     rax, cl
 * 0000000140A02279: add     r9, 10h
 * 0000000140A0227D: xor     rbx, rax
 * 0000000140A02280: rol     rbx, cl
 * 0000000140A02283: sub     rdx, r12
 * 0000000140A02286: jnz     short loc_140A02269
 * 0000000140A02288: mov     rcx, r9
 * 0000000140A0228B: sub     rcx, r14
 * 0000000140A0228E: xor     rcx, r15
 * 0000000140A02291: mov     rax, rcx
 * 0000000140A02294: rol     rax, 11h
 * 0000000140A02298: xor     rcx, rax
 * 0000000140A0229B: mov     rax, rsi
 * 0000000140A0229E: mul     rcx
 * 0000000140A022A1: xor     r11d, edx
 * 0000000140A022A4: mov     [rbp+0BE0h+var_638], rdx
 * 0000000140A022AB: xor     r11d, eax
 * 0000000140A022AE: mov     eax, 0FFFFFFFFh
 * 0000000140A022B3: and     r11d, 3Fh
 * 0000000140A022B7: cmovz   r11d, r12d
 * 0000000140A022BB: add     r10d, eax
 * 0000000140A022BE: jnz     short loc_140A02264
 * 0000000140A022C0: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A022C5: and     r8d, 7Fh
 * 0000000140A022C9: cmp     r8d, 8
 * 0000000140A022CD: jb      short loc_140A022EC
 * 0000000140A022CF: mov     edx, r8d
 * 0000000140A022D2: shr     rdx, 3
 * 0000000140A022D6: xor     rbx, [r9]
 * 0000000140A022D9: mov     ecx, r11d
 * 0000000140A022DC: rol     rbx, cl
 * 0000000140A022DF: add     r9, 8
 * 0000000140A022E3: add     r8d, 0FFFFFFF8h
 * 0000000140A022E7: sub     rdx, r12
 * 0000000140A022EA: jnz     short loc_140A022D6
 * 0000000140A022EC: test    r8d, r8d
 * 0000000140A022EF: jz      short loc_140A02310
 * 0000000140A022F1: mov     esi, 0FFFFFFFFh
 * 0000000140A022F6: movzx   eax, byte ptr [r9]
 * 0000000140A022FA: mov     ecx, r11d
 * 0000000140A022FD: xor     rbx, rax
 * 0000000140A02300: add     r9, r12
 * 0000000140A02303: rol     rbx, cl
 * 0000000140A02306: add     r8d, esi
 * 0000000140A02309: jnz     short loc_140A022F6
 * 0000000140A0230B: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A02310: mov     rax, rbx
 * 0000000140A02313: shr     rax, 1Fh
 * 0000000140A02317: xor     r15d, r15d
 * 0000000140A0231A: jmp     short loc_140A02322
 * 0000000140A0231C: xor     ebx, eax
 * 0000000140A0231E: shr     rax, 1Fh
 * 0000000140A02322: test    rax, rax
 * 0000000140A02325: jnz     short loc_140A0231C
 * 0000000140A02327: mov     r8d, [r13+14h]
 * 0000000140A0232B: btr     ebx, 1Fh
 * 0000000140A0232F: cmp     ebx, r8d
 * 0000000140A02332: jz      loc_140A020C1
 * 0000000140A02338: mov     ecx, [r13+10h]
 * 0000000140A0233C: mov     rdx, [r13+8]
 * 0000000140A02340: test    rcx, rcx
 * 0000000140A02343: jz      loc_140A02406
 * 0000000140A02349: mov     eax, [rsi+994h]
 * 0000000140A0234F: mov     r9d, 40h ; '@'
 * 0000000140A02355: test    r9b, al
 * 0000000140A02358: jz      loc_140A02406
 * 0000000140A0235E: mov     r12, cr8
 * 0000000140A02362: lea     eax, [r9-3Eh]
 * 0000000140A02366: mov     cr8, rax
 * 0000000140A0236A: mov     r14, rdx
 * 0000000140A0236D: lea     rax, [rcx-1]
 * 0000000140A02371: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A02378: add     rax, rdx
 * 0000000140A0237B: or      rax, 0FFFh
 * 0000000140A02381: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A02388: lea     r13, [r14-1]
 * 0000000140A0238C: movzx   r15d, r12b
 * 0000000140A02390: mov     rax, [rsi+468h]
 * 0000000140A02397: xor     edx, edx
 * 0000000140A02399: mov     rcx, r14
 * 0000000140A0239C: call    KeGuardDispatchICall
 * 0000000140A023A1: cmp     eax, 0C000022Dh
 * 0000000140A023A6: jnz     short loc_140A023CC
 * 0000000140A023A8: mov     eax, 1
 * 0000000140A023AD: cmp     r12b, al
 * 0000000140A023B0: ja      short loc_140A023D0
 * 0000000140A023B2: movzx   r15d, r12b
 * 0000000140A023B6: mov     cr8, r15
 * 0000000140A023BA: mov     al, [r14]
 * 0000000140A023BD: mov     rax, cr8
 * 0000000140A023C1: mov     eax, 2
 * 0000000140A023C6: mov     cr8, rax
 * 0000000140A023CA: jmp     short loc_140A02390
 * 0000000140A023CC: test    eax, eax
 * 0000000140A023CE: js      short loc_140A023F9
 * 0000000140A023D0: mov     r11d, 1000h
 * 0000000140A023D6: add     r14, r11
 * 0000000140A023D9: add     r13, r11
 * 0000000140A023DC: cmp     r13, [rbp+0BE0h+arg_8]
 * 0000000140A023E3: jnz     short loc_140A0238C
 * 0000000140A023E5: mov     cr8, r15
 * 0000000140A023E9: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A023EE: mov     r12d, 1
 * 0000000140A023F4: jmp     loc_140A020BE
 * 0000000140A023F9: mov     cr8, r15
 * 0000000140A023FD: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A02402: mov     r8d, [r13+14h]
 * 0000000140A02406: mov     eax, [rsi+8F8h]
 * 0000000140A0240C: xor     r15d, r15d
 * 0000000140A0240F: test    eax, eax
 * 0000000140A02411: jnz     short loc_140A0242C
 * 0000000140A02413: mov     ecx, r8d
 * 0000000140A02416: mov     eax, ebx
 * 0000000140A02418: xor     rcx, rax
 * 0000000140A0241B: mov     rax, [rsi+590h]
 * 0000000140A02422: mov     [rax+18h], rcx
 * 0000000140A02426: mov     eax, [rsi+8F8h]
 * 0000000140A0242C: mov     rcx, [r13+8]
 * 0000000140A02430: mov     r14, 0B3B74BDEE4453415h
 * 0000000140A0243A: mov     r12d, 1
 * 0000000140A02440: test    eax, eax
 * 0000000140A02442: jnz     loc_140A020CB
 * 0000000140A02448: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02452: xor     edx, edx
 * 0000000140A02454: add     rax, rsi
 * 0000000140A02457: mov     [rsi+900h], rax
 * 0000000140A0245E: lea     rax, [r14+r13]
 * 0000000140A02462: mov     [rsi+908h], rax
 * 0000000140A02469: movsxd  rax, dword ptr [r13+0]
 * 0000000140A0246D: mov     [rsi+910h], rax
 * 0000000140A02474: mov     [rsi+918h], rcx
 * 0000000140A0247B: mov     rcx, rsi
 * 0000000140A0247E: mov     [rsi+8F8h], r12d
 * 0000000140A02485: call    $$b8
 * 0000000140A0248A: jmp     loc_140A020CB
 * 0000000140A0248F: xor     eax, eax
 * 0000000140A02491: mov     [rsi+824h], eax
 * 0000000140A02497: jmp     loc_140A023EE
 * 0000000140A0249C: mov     r14, [r13+8]
 * 0000000140A024A0: mov     r8d, [r13+10h]
 * 0000000140A024A4: mov     r9, r14
 * 0000000140A024A7: add     [rsi+828h], r8d
 * 0000000140A024AE: mov     rax, r14
 * 0000000140A024B1: mov     r10d, [rsi+814h]
 * 0000000140A024B8: mov     r15, [rsi+818h]
 * 0000000140A024BF: lea     rcx, [r14+r8]
 * 0000000140A024C3: cmp     r14, rcx
 * 0000000140A024C6: jnb     short loc_140A024D9
 * 0000000140A024C8: mov     r11d, 40h ; '@'
 * 0000000140A024CE: prefetchnta byte ptr [rax]
 * 0000000140A024D1: add     rax, r11
 * 0000000140A024D4: cmp     rax, rcx
 * 0000000140A024D7: jb      short loc_140A024CE
 * 0000000140A024D9: mov     r11d, r8d
 * 0000000140A024DC: mov     rbx, r15
 * 0000000140A024DF: shr     r11d, 7
 * 0000000140A024E3: mov     r12d, 0FFFFFFFFh
 * 0000000140A024E9: test    r11d, r11d
 * 0000000140A024EC: jz      short loc_140A0255A
 * 0000000140A024EE: mov     rdi, 7010008004002001h
 * 0000000140A024F8: mov     eax, 8
 * 0000000140A024FD: xor     rbx, [r9]
 * 0000000140A02500: mov     ecx, r10d
 * 0000000140A02503: rol     rbx, cl
 * 0000000140A02506: xor     rbx, [r9+8]
 * 0000000140A0250A: add     r9, 10h
 * 0000000140A0250E: rol     rbx, cl
 * 0000000140A02511: sub     rax, rdx
 * 0000000140A02514: jnz     short loc_140A024FD
 * 0000000140A02516: mov     rcx, r9
 * 0000000140A02519: sub     rcx, r14
 * 0000000140A0251C: xor     rcx, r15
 * 0000000140A0251F: mov     rax, rcx
 * 0000000140A02522: rol     rax, 11h
 * 0000000140A02526: xor     rcx, rax
 * 0000000140A02529: mov     rax, rdi
 * 0000000140A0252C: mul     rcx
 * 0000000140A0252F: xor     r10d, edx
 * 0000000140A02532: mov     [rbp+0BE0h+var_630], rdx
 * 0000000140A02539: xor     r10d, eax
 * 0000000140A0253C: mov     edx, 1
 * 0000000140A02541: and     r10d, 3Fh
 * 0000000140A02545: cmovz   r10d, edx
 * 0000000140A02549: add     r11d, r12d
 * 0000000140A0254C: jnz     short loc_140A024F8
 * 0000000140A0254E: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A02553: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0255A: and     r8d, 7Fh
 * 0000000140A0255E: cmp     r8d, 8
 * 0000000140A02562: jb      short loc_140A02581
 * 0000000140A02564: mov     eax, r8d
 * 0000000140A02567: shr     rax, 3
 * 0000000140A0256B: xor     rbx, [r9]
 * 0000000140A0256E: mov     ecx, r10d
 * 0000000140A02571: rol     rbx, cl
 * 0000000140A02574: add     r9, 8
 * 0000000140A02578: add     r8d, 0FFFFFFF8h
 * 0000000140A0257C: sub     rax, rdx
 * 0000000140A0257F: jnz     short loc_140A0256B
 * 0000000140A02581: test    r8d, r8d
 * 0000000140A02584: jz      short loc_140A0259B
 * 0000000140A02586: movzx   eax, byte ptr [r9]
 * 0000000140A0258A: mov     ecx, r10d
 * 0000000140A0258D: xor     rbx, rax
 * 0000000140A02590: add     r9, rdx
 * 0000000140A02593: rol     rbx, cl
 * 0000000140A02596: add     r8d, r12d
 * 0000000140A02599: jnz     short loc_140A02586
 * 0000000140A0259B: mov     rax, rbx
 * 0000000140A0259E: shr     rax, 1Fh
 * 0000000140A025A2: xor     ecx, ecx
 * 0000000140A025A4: jmp     short loc_140A025AC
 * 0000000140A025A6: xor     ebx, eax
 * 0000000140A025A8: shr     rax, 1Fh
 * 0000000140A025AC: test    rax, rax
 * 0000000140A025AF: jnz     short loc_140A025A6
 * 0000000140A025B1: mov     r13d, eax
 * 0000000140A025B4: btr     ebx, 1Fh
 * 0000000140A025B8: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A025BD: cmp     ebx, [rax+14h]
 * 0000000140A025C0: jz      loc_140A023E9
 * 0000000140A025C6: cmp     [rax], ecx
 * 0000000140A025C8: jnz     short loc_140A025D1
 * 0000000140A025CA: cmp     [rax+18h], ecx
 * 0000000140A025CD: cmovnz  r13d, edx
 * 0000000140A025D1: mov     ecx, [rax+10h]
 * 0000000140A025D4: mov     rdx, [rax+8]
 * 0000000140A025D8: test    rcx, rcx
 * 0000000140A025DB: jz      loc_140A0269A
 * 0000000140A025E1: mov     eax, [rsi+994h]
 * 0000000140A025E7: mov     r8d, 40h ; '@'
 * 0000000140A025ED: test    r8b, al
 * 0000000140A025F0: jz      loc_140A0269A
 * 0000000140A025F6: mov     r12, cr8
 * 0000000140A025FA: lea     eax, [r8-3Eh]
 * 0000000140A025FE: mov     cr8, rax
 * 0000000140A02602: mov     r14, rdx
 * 0000000140A02605: lea     rax, [rcx-1]
 * 0000000140A02609: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A02610: add     rax, rdx
 * 0000000140A02613: or      rax, 0FFFh
 * 0000000140A02619: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A0261E: lea     rax, [r14-1]
 * 0000000140A02622: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A02629: movzx   r15d, r12b
 * 0000000140A0262D: mov     rax, [rsi+468h]
 * 0000000140A02634: xor     edx, edx
 * 0000000140A02636: mov     rcx, r14
 * 0000000140A02639: call    KeGuardDispatchICall
 * 0000000140A0263E: cmp     eax, 0C000022Dh
 * 0000000140A02643: jnz     short loc_140A0266C
 * 0000000140A02645: test    r13d, r13d
 * 0000000140A02648: jnz     short loc_140A02696
 * 0000000140A0264A: lea     eax, [r13+1]
 * 0000000140A0264E: cmp     r12b, al
 * 0000000140A02651: ja      short loc_140A02670
 * 0000000140A02653: movzx   r15d, r12b
 * 0000000140A02657: mov     cr8, r15
 * 0000000140A0265B: mov     al, [r14]
 * 0000000140A0265E: mov     rax, cr8
 * 0000000140A02662: lea     eax, [r13+2]
 * 0000000140A02666: mov     cr8, rax
 * 0000000140A0266A: jmp     short loc_140A0262D
 * 0000000140A0266C: test    eax, eax
 * 0000000140A0266E: js      short loc_140A02696
 * 0000000140A02670: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A02677: mov     r11d, 1000h
 * 0000000140A0267D: add     rax, r11
 * 0000000140A02680: add     r14, r11
 * 0000000140A02683: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A0268A: cmp     rax, [rsp+0CE0h+var_C70]
 * 0000000140A0268F: jnz     short loc_140A02629
 * 0000000140A02691: jmp     loc_140A023E5
 * 0000000140A02696: mov     cr8, r15
 * 0000000140A0269A: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A0269F: xor     r15d, r15d
 * 0000000140A026A2: mov     eax, [rsi+8F8h]
 * 0000000140A026A8: mov     ecx, [r13+14h]
 * 0000000140A026AC: test    eax, eax
 * 0000000140A026AE: jnz     loc_140A0242C
 * 0000000140A026B4: jmp     loc_140A02416
 * 0000000140A026B9: mov     rdx, r13
 * 0000000140A026BC: mov     rcx, rsi
 * 0000000140A026BF: call    sub_1403E9BFC
 * 0000000140A026C4: jmp     loc_1409FC318
 * 0000000140A026C9: mov     rdx, r13
 * 0000000140A026CC: mov     rcx, rsi
 * 0000000140A026CF: call    sub_1403EAB68
 * 0000000140A026D4: jmp     loc_1409FC318
 * 0000000140A026D9: mov     eax, [rsi+830h]
 * 0000000140A026DF: test    dl, al
 * 0000000140A026E1: jz      loc_1409FC318
 * 0000000140A026E7: xor     eax, eax
 * 0000000140A026E9: cmp     [rsi+980h], rax
 * 0000000140A026F0: jz      short loc_140A0272E
 * 0000000140A026F2: mov     eax, [rsi+994h]
 * 0000000140A026F8: test    al, 4
 * 0000000140A026FA: jnz     short loc_140A0272C
 * 0000000140A026FC: mov     rax, [rsi+3D0h]
 * 0000000140A02703: lea     rdx, [rbp+0BE0h+var_840]
 * 0000000140A0270A: xor     r9d, r9d
 * 0000000140A0270D: xor     r8d, r8d
 * 0000000140A02710: lea     ecx, [r9+1Ah]
 * 0000000140A02714: call    KeGuardDispatchICall
 * 0000000140A02719: mov     rbx, [rbp+0BE0h+var_840]
 * 0000000140A02720: xor     ecx, ecx
 * 0000000140A02722: test    eax, eax
 * 0000000140A02724: mov     eax, ecx
 * 0000000140A02726: cmovs   rbx, rcx
 * 0000000140A0272A: jmp     short loc_140A02731
 * 0000000140A0272C: xor     eax, eax
 * 0000000140A0272E: mov     rbx, rax
 * 0000000140A02731: mov     r14d, eax
 * 0000000140A02734: mov     [rsp+0CE0h+var_C78], eax
 * 0000000140A02738: mov     rax, [rsi+3B0h]
 * 0000000140A0273F: xor     ecx, ecx
 * 0000000140A02741: mov     [rsp+0CE0h+var_C88], rbx
 * 0000000140A02746: call    KeGuardDispatchICall
 * 0000000140A0274B: xor     r15d, r15d
 * 0000000140A0274E: lea     r12d, [r15+1]
 * 0000000140A02752: test    rax, rax
 * 0000000140A02755: jz      loc_140A02F64
 * 0000000140A0275B: mov     rdi, rax
 * 0000000140A0275E: mov     rcx, rdi
 * 0000000140A02761: cmp     rbx, rdi
 * 0000000140A02764: jnz     loc_140A02B2B
 * 0000000140A0276A: mov     rax, [rsi+3A0h]
 * 0000000140A02771: mov     r12, r13
 * 0000000140A02774: call    KeGuardDispatchICall
 * 0000000140A02779: test    eax, eax
 * 0000000140A0277B: js      loc_140A02F34
 * 0000000140A02781: mov     rax, [rsi+3E0h]
 * 0000000140A02788: mov     rcx, rdi
 * 0000000140A0278B: call    KeGuardDispatchICall
 * 0000000140A02790: mov     bl, al
 * 0000000140A02792: mov     [rbp+0BE0h+var_B40], al
 * 0000000140A02798: mov     rax, [rsi+3E8h]
 * 0000000140A0279F: lea     rdx, [rbp+0BE0h+arg_18]
 * 0000000140A027A6: mov     rcx, rdi
 * 0000000140A027A9: call    KeGuardDispatchICall
 * 0000000140A027AE: mov     byte ptr [rbp+0BE0h+arg_8], al
 * 0000000140A027B4: mov     rcx, rdi
 * 0000000140A027B7: mov     rax, [rsi+3F0h]
 * 0000000140A027BE: call    KeGuardDispatchICall
 * 0000000140A027C3: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A027C8: cmp     bl, 61h ; 'a'
 * 0000000140A027CB: jz      short loc_140A02846
 * 0000000140A027CD: mov     eax, [rsi+8F8h]
 * 0000000140A027D3: test    eax, eax
 * 0000000140A027D5: jnz     short loc_140A02846
 * 0000000140A027D7: mov     rax, [rsi+590h]
 * 0000000140A027DE: movzx   ecx, bl
 * 0000000140A027E1: xor     rcx, 61h
 * 0000000140A027E5: mov     [rax+18h], rcx
 * 0000000140A027E9: mov     eax, [rsi+8F8h]
 * 0000000140A027EF: test    eax, eax
 * 0000000140A027F1: jnz     short loc_140A02846
 * 0000000140A027F3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A027FD: mov     r15d, 1
 * 0000000140A02803: add     rax, rsi
 * 0000000140A02806: xor     edx, edx
 * 0000000140A02808: mov     [rsi+900h], rax
 * 0000000140A0280F: mov     rcx, rsi
 * 0000000140A02812: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0281C: add     rax, r13
 * 0000000140A0281F: mov     [rsi+908h], rax
 * 0000000140A02826: movsxd  rax, dword ptr [r13+0]
 * 0000000140A0282A: mov     [rsi+910h], rax
 * 0000000140A02831: mov     [rsi+918h], rdi
 * 0000000140A02838: mov     [rsi+8F8h], r15d
 * 0000000140A0283F: call    $$b8
 * 0000000140A02844: jmp     short loc_140A0284C
 * 0000000140A02846: mov     r15d, 1
 * 0000000140A0284C: xor     eax, eax
 * 0000000140A0284E: movzx   ecx, bl
 * 0000000140A02851: and     ecx, 7
 * 0000000140A02854: mov     r14b, al
 * 0000000140A02857: mov     r13b, al
 * 0000000140A0285A: sub     ecx, 1
 * 0000000140A0285D: jz      short loc_140A028CF
 * 0000000140A0285F: cmp     ecx, 1
 * 0000000140A02862: jz      short loc_140A028C2
 * 0000000140A02864: test    bl, 7
 * 0000000140A02867: jz      short loc_140A028D2
 * 0000000140A02869: cmp     [rsi+8F8h], eax
 * 0000000140A0286F: jnz     short loc_140A028D2
 * 0000000140A02871: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0287B: xor     edx, edx
 * 0000000140A0287D: add     rax, rsi
 * 0000000140A02880: mov     rcx, rsi
 * 0000000140A02883: mov     [rsi+900h], rax
 * 0000000140A0288A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A02894: add     rax, r12
 * 0000000140A02897: mov     [rsi+908h], rax
 * 0000000140A0289E: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A028A3: movsxd  rax, dword ptr [rax]
 * 0000000140A028A6: mov     [rsi+910h], rax
 * 0000000140A028AD: mov     [rsi+918h], rdi
 * 0000000140A028B4: mov     [rsi+8F8h], r15d
 * 0000000140A028BB: call    $$b8
 * 0000000140A028C0: jmp     short loc_140A028D2
 * 0000000140A028C2: mov     eax, 10h
 * 0000000140A028C7: mov     r14b, al
 * 0000000140A028CA: mov     r13b, al
 * 0000000140A028CD: jmp     short loc_140A028D2
 * 0000000140A028CF: mov     r14b, 30h ; '0'
 * 0000000140A028D2: mov     r15, [rsi+5C8h]
 * 0000000140A028D9: movzx   ebx, bl
 * 0000000140A028DC: shr     rbx, 4
 * 0000000140A028E0: mov     al, [r15+rbx*2]
 * 0000000140A028E4: or      al, r14b
 * 0000000140A028E7: mov     r14, [rsp+0CE0h+var_C90]
 * 0000000140A028EC: cmp     al, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A028F2: jz      short loc_140A0294C
 * 0000000140A028F4: xor     eax, eax
 * 0000000140A028F6: cmp     [rsi+8F8h], eax
 * 0000000140A028FC: jnz     short loc_140A0294C
 * 0000000140A028FE: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02908: xor     edx, edx
 * 0000000140A0290A: add     rax, rsi
 * 0000000140A0290D: mov     rcx, rsi
 * 0000000140A02910: mov     [rsi+900h], rax
 * 0000000140A02917: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A02921: add     rax, r12
 * 0000000140A02924: mov     [rsi+908h], rax
 * 0000000140A0292B: movsxd  rax, dword ptr [r14]
 * 0000000140A0292E: mov     [rsi+910h], rax
 * 0000000140A02935: mov     eax, 1
 * 0000000140A0293A: mov     [rsi+918h], rdi
 * 0000000140A02941: mov     [rsi+8F8h], eax
 * 0000000140A02947: call    $$b8
 * 0000000140A0294C: mov     al, [r15+rbx*2+1]
 * 0000000140A02951: mov     ebx, 1
 * 0000000140A02956: or      al, r13b
 * 0000000140A02959: cmp     al, [rbp+0BE0h+arg_18]
 * 0000000140A0295F: jz      short loc_140A029B4
 * 0000000140A02961: xor     eax, eax
 * 0000000140A02963: cmp     [rsi+8F8h], eax
 * 0000000140A02969: jnz     short loc_140A029B6
 * 0000000140A0296B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02975: xor     edx, edx
 * 0000000140A02977: add     rax, rsi
 * 0000000140A0297A: mov     rcx, rsi
 * 0000000140A0297D: mov     [rsi+900h], rax
 * 0000000140A02984: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0298E: add     rax, r12
 * 0000000140A02991: mov     [rsi+908h], rax
 * 0000000140A02998: movsxd  rax, dword ptr [r14]
 * 0000000140A0299B: mov     [rsi+910h], rax
 * 0000000140A029A2: mov     [rsi+918h], rdi
 * 0000000140A029A9: mov     [rsi+8F8h], ebx
 * 0000000140A029AF: call    $$b8
 * 0000000140A029B4: xor     eax, eax
 * 0000000140A029B6: cmp     rdi, [rsi+4E0h]
 * 0000000140A029BD: jz      short loc_140A029D0
 * 0000000140A029BF: mov     rax, [rsi+3D8h]
 * 0000000140A029C6: mov     edx, ebx
 * 0000000140A029C8: mov     rcx, rdi
 * 0000000140A029CB: call    KeGuardDispatchICall
 * 0000000140A029D0: mov     [rbp+0BE0h+var_C60], rax
 * 0000000140A029D4: mov     r14, rax
 * 0000000140A029D7: test    rax, rax
 * 0000000140A029DA: jz      loc_140A02F08
 * 0000000140A029E0: mov     rcx, [rax]
 * 0000000140A029E3: mov     rbx, rax
 * 0000000140A029E6: test    rcx, rcx
 * 0000000140A029E9: jz      loc_140A02EF9
 * 0000000140A029EF: mov     r14b, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A029F6: mov     r13, [rsp+0CE0h+var_C70]
 * 0000000140A029FB: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140A029FF: mov     [rbx], rcx
 * 0000000140A02A02: mov     rax, [rsi+1E0h]
 * 0000000140A02A09: call    KeGuardDispatchICall
 * 0000000140A02A0E: mov     rcx, [rbx+8]
 * 0000000140A02A12: movzx   edx, [rbp+0BE0h+arg_18]
 * 0000000140A02A19: mov     r15, rcx
 * 0000000140A02A1C: movzx   eax, r14b
 * 0000000140A02A20: and     r15, 0FFFFFFFFFFFF0000h
 * 0000000140A02A27: cmp     r15, r13
 * 0000000140A02A2A: cmovz   edx, eax
 * 0000000140A02A2D: mov     rax, [rsi+3F8h]
 * 0000000140A02A34: shr     rcx, 6
 * 0000000140A02A38: and     cl, 0Fh
 * 0000000140A02A3B: call    KeGuardDispatchICall
 * 0000000140A02A40: test    eax, eax
 * 0000000140A02A42: jnz     loc_140A02B16
 * 0000000140A02A48: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A02A52: lea     r9d, [rax+1]
 * 0000000140A02A56: jz      short loc_140A02AA6
 * 0000000140A02A58: mov     rcx, [rsi+0A80h]
 * 0000000140A02A5F: lea     edx, [rax+30h]
 * 0000000140A02A62: lea     r8d, [rax+6]
 * 0000000140A02A66: mov     rax, [r12]
 * 0000000140A02A6A: add     edx, 0FFFFFFF8h
 * 0000000140A02A6D: mov     [rcx], rax
 * 0000000140A02A70: add     r12, 8
 * 0000000140A02A74: add     rcx, 8
 * 0000000140A02A78: sub     r8, r9
 * 0000000140A02A7B: jnz     short loc_140A02A66
 * 0000000140A02A7D: test    edx, edx
 * 0000000140A02A7F: jz      short loc_140A02A9F
 * 0000000140A02A81: mov     r14d, 0FFFFFFFFh
 * 0000000140A02A87: mov     al, [r12]
 * 0000000140A02A8B: add     r12, r9
 * 0000000140A02A8E: mov     [rcx], al
 * 0000000140A02A90: add     rcx, r9
 * 0000000140A02A93: add     edx, r14d
 * 0000000140A02A96: jnz     short loc_140A02A87
 * 0000000140A02A98: mov     r14b, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A02A9F: mov     r12, [rsi+0A80h]
 * 0000000140A02AA6: mov     [r12+18h], r15
 * 0000000140A02AAB: mov     rax, [rbx]
 * 0000000140A02AAE: mov     [r12+20h], rax
 * 0000000140A02AB3: mov     eax, [rbx+8]
 * 0000000140A02AB6: shr     rax, 6
 * 0000000140A02ABA: and     al, 0Fh
 * 0000000140A02ABC: mov     [r12+28h], al
 * 0000000140A02AC1: xor     eax, eax
 * 0000000140A02AC3: cmp     [rsi+8F8h], eax
 * 0000000140A02AC9: jnz     short loc_140A02B16
 * 0000000140A02ACB: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02AD5: xor     edx, edx
 * 0000000140A02AD7: add     rax, rsi
 * 0000000140A02ADA: mov     rcx, rsi
 * 0000000140A02ADD: mov     [rsi+900h], rax
 * 0000000140A02AE4: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A02AEE: add     rax, r12
 * 0000000140A02AF1: mov     [rsi+908h], rax
 * 0000000140A02AF8: movsxd  rax, dword ptr [r12]
 * 0000000140A02AFC: mov     [rsi+910h], rax
 * 0000000140A02B03: mov     [rsi+918h], rdi
 * 0000000140A02B0A: mov     [rsi+8F8h], r9d
 * 0000000140A02B11: call    $$b8
 * 0000000140A02B16: add     rbx, 30h ; '0'
 * 0000000140A02B1A: mov     rcx, [rbx]
 * 0000000140A02B1D: test    rcx, rcx
 * 0000000140A02B20: jnz     loc_140A029FB
 * 0000000140A02B26: jmp     loc_140A02EF5
 * 0000000140A02B2B: mov     rax, [rsi+3C8h]
 * 0000000140A02B32: call    KeGuardDispatchICall
 * 0000000140A02B37: test    eax, eax
 * 0000000140A02B39: jz      loc_140A02F3A
 * 0000000140A02B3F: mov     rax, [rsi+3A0h]
 * 0000000140A02B46: mov     rcx, rdi
 * 0000000140A02B49: mov     r12, r13
 * 0000000140A02B4C: call    KeGuardDispatchICall
 * 0000000140A02B51: test    eax, eax
 * 0000000140A02B53: js      loc_140A02F34
 * 0000000140A02B59: mov     rax, [rsi+3E0h]
 * 0000000140A02B60: mov     rcx, rdi
 * 0000000140A02B63: call    KeGuardDispatchICall
 * 0000000140A02B68: mov     bl, al
 * 0000000140A02B6A: mov     [rbp+0BE0h+var_B3F], al
 * 0000000140A02B70: mov     rax, [rsi+3E8h]
 * 0000000140A02B77: lea     rdx, [rbp+0BE0h+var_BEC]
 * 0000000140A02B7B: mov     rcx, rdi
 * 0000000140A02B7E: call    KeGuardDispatchICall
 * 0000000140A02B83: mov     byte ptr [rbp+0BE0h+arg_8], al
 * 0000000140A02B89: mov     rcx, rdi
 * 0000000140A02B8C: mov     rax, [rsi+3F0h]
 * 0000000140A02B93: call    KeGuardDispatchICall
 * 0000000140A02B98: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A02B9D: cmp     bl, 61h ; 'a'
 * 0000000140A02BA0: jz      short loc_140A02C1B
 * 0000000140A02BA2: mov     eax, [rsi+8F8h]
 * 0000000140A02BA8: test    eax, eax
 * 0000000140A02BAA: jnz     short loc_140A02C1B
 * 0000000140A02BAC: mov     rax, [rsi+590h]
 * 0000000140A02BB3: movzx   ecx, bl
 * 0000000140A02BB6: xor     rcx, 61h
 * 0000000140A02BBA: mov     [rax+18h], rcx
 * 0000000140A02BBE: mov     eax, [rsi+8F8h]
 * 0000000140A02BC4: test    eax, eax
 * 0000000140A02BC6: jnz     short loc_140A02C1B
 * 0000000140A02BC8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02BD2: mov     r15d, 1
 * 0000000140A02BD8: add     rax, rsi
 * 0000000140A02BDB: xor     edx, edx
 * 0000000140A02BDD: mov     [rsi+900h], rax
 * 0000000140A02BE4: mov     rcx, rsi
 * 0000000140A02BE7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A02BF1: add     rax, r13
 * 0000000140A02BF4: mov     [rsi+908h], rax
 * 0000000140A02BFB: movsxd  rax, dword ptr [r13+0]
 * 0000000140A02BFF: mov     [rsi+910h], rax
 * 0000000140A02C06: mov     [rsi+918h], rdi
 * 0000000140A02C0D: mov     [rsi+8F8h], r15d
 * 0000000140A02C14: call    $$b8
 * 0000000140A02C19: jmp     short loc_140A02C21
 * 0000000140A02C1B: mov     r15d, 1
 * 0000000140A02C21: xor     eax, eax
 * 0000000140A02C23: movzx   ecx, bl
 * 0000000140A02C26: and     ecx, 7
 * 0000000140A02C29: mov     r14b, al
 * 0000000140A02C2C: mov     r13b, al
 * 0000000140A02C2F: sub     ecx, 1
 * 0000000140A02C32: jz      short loc_140A02CA4
 * 0000000140A02C34: cmp     ecx, 1
 * 0000000140A02C37: jz      short loc_140A02C97
 * 0000000140A02C39: test    bl, 7
 * 0000000140A02C3C: jz      short loc_140A02CA7
 * 0000000140A02C3E: cmp     [rsi+8F8h], eax
 * 0000000140A02C44: jnz     short loc_140A02CA7
 * 0000000140A02C46: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02C50: xor     edx, edx
 * 0000000140A02C52: add     rax, rsi
 * 0000000140A02C55: mov     rcx, rsi
 * 0000000140A02C58: mov     [rsi+900h], rax
 * 0000000140A02C5F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A02C69: add     rax, r12
 * 0000000140A02C6C: mov     [rsi+908h], rax
 * 0000000140A02C73: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A02C78: movsxd  rax, dword ptr [rax]
 * 0000000140A02C7B: mov     [rsi+910h], rax
 * 0000000140A02C82: mov     [rsi+918h], rdi
 * 0000000140A02C89: mov     [rsi+8F8h], r15d
 * 0000000140A02C90: call    $$b8
 * 0000000140A02C95: jmp     short loc_140A02CA7
 * 0000000140A02C97: mov     eax, 10h
 * 0000000140A02C9C: mov     r14b, al
 * 0000000140A02C9F: mov     r13b, al
 * 0000000140A02CA2: jmp     short loc_140A02CA7
 * 0000000140A02CA4: mov     r14b, 30h ; '0'
 * 0000000140A02CA7: mov     r15, [rsi+5C8h]
 * 0000000140A02CAE: movzx   ebx, bl
 * 0000000140A02CB1: shr     rbx, 4
 * 0000000140A02CB5: mov     al, [r15+rbx*2]
 * 0000000140A02CB9: or      al, r14b
 * 0000000140A02CBC: mov     r14, [rsp+0CE0h+var_C90]
 * 0000000140A02CC1: cmp     al, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A02CC7: jz      short loc_140A02D21
 * 0000000140A02CC9: xor     eax, eax
 * 0000000140A02CCB: cmp     [rsi+8F8h], eax
 * 0000000140A02CD1: jnz     short loc_140A02D21
 * 0000000140A02CD3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02CDD: xor     edx, edx
 * 0000000140A02CDF: add     rax, rsi
 * 0000000140A02CE2: mov     rcx, rsi
 * 0000000140A02CE5: mov     [rsi+900h], rax
 * 0000000140A02CEC: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A02CF6: add     rax, r12
 * 0000000140A02CF9: mov     [rsi+908h], rax
 * 0000000140A02D00: movsxd  rax, dword ptr [r14]
 * 0000000140A02D03: mov     [rsi+910h], rax
 * 0000000140A02D0A: mov     eax, 1
 * 0000000140A02D0F: mov     [rsi+918h], rdi
 * 0000000140A02D16: mov     [rsi+8F8h], eax
 * 0000000140A02D1C: call    $$b8
 * 0000000140A02D21: mov     al, [r15+rbx*2+1]
 * 0000000140A02D26: mov     ebx, 1
 * 0000000140A02D2B: or      al, r13b
 * 0000000140A02D2E: cmp     al, [rbp+0BE0h+var_BEC]
 * 0000000140A02D31: jz      short loc_140A02D86
 * 0000000140A02D33: xor     eax, eax
 * 0000000140A02D35: cmp     [rsi+8F8h], eax
 * 0000000140A02D3B: jnz     short loc_140A02D88
 * 0000000140A02D3D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02D47: xor     edx, edx
 * 0000000140A02D49: add     rax, rsi
 * 0000000140A02D4C: mov     rcx, rsi
 * 0000000140A02D4F: mov     [rsi+900h], rax
 * 0000000140A02D56: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A02D60: add     rax, r12
 * 0000000140A02D63: mov     [rsi+908h], rax
 * 0000000140A02D6A: movsxd  rax, dword ptr [r14]
 * 0000000140A02D6D: mov     [rsi+910h], rax
 * 0000000140A02D74: mov     [rsi+918h], rdi
 * 0000000140A02D7B: mov     [rsi+8F8h], ebx
 * 0000000140A02D81: call    $$b8
 * 0000000140A02D86: xor     eax, eax
 * 0000000140A02D88: cmp     rdi, [rsi+4E0h]
 * 0000000140A02D8F: jz      short loc_140A02DA2
 * 0000000140A02D91: mov     rax, [rsi+3D8h]
 * 0000000140A02D98: mov     edx, ebx
 * 0000000140A02D9A: mov     rcx, rdi
 * 0000000140A02D9D: call    KeGuardDispatchICall
 * 0000000140A02DA2: mov     [rbp+0BE0h+var_C60], rax
 * 0000000140A02DA6: mov     r14, rax
 * 0000000140A02DA9: test    rax, rax
 * 0000000140A02DAC: jz      loc_140A02F08
 * 0000000140A02DB2: mov     rcx, [rax]
 * 0000000140A02DB5: mov     rbx, rax
 * 0000000140A02DB8: test    rcx, rcx
 * 0000000140A02DBB: jz      loc_140A02EF9
 * 0000000140A02DC1: mov     r14b, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A02DC8: mov     r13, [rsp+0CE0h+var_C70]
 * 0000000140A02DCD: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140A02DD1: mov     [rbx], rcx
 * 0000000140A02DD4: mov     rax, [rsi+1E0h]
 * 0000000140A02DDB: call    KeGuardDispatchICall
 * 0000000140A02DE0: mov     rcx, [rbx+8]
 * 0000000140A02DE4: movzx   edx, [rbp+0BE0h+var_BEC]
 * 0000000140A02DE8: mov     r15, rcx
 * 0000000140A02DEB: movzx   eax, r14b
 * 0000000140A02DEF: and     r15, 0FFFFFFFFFFFF0000h
 * 0000000140A02DF6: cmp     r15, r13
 * 0000000140A02DF9: cmovz   edx, eax
 * 0000000140A02DFC: mov     rax, [rsi+3F8h]
 * 0000000140A02E03: shr     rcx, 6
 * 0000000140A02E07: and     cl, 0Fh
 * 0000000140A02E0A: call    KeGuardDispatchICall
 * 0000000140A02E0F: test    eax, eax
 * 0000000140A02E11: jnz     loc_140A02EE5
 * 0000000140A02E17: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A02E21: lea     r9d, [rax+1]
 * 0000000140A02E25: jz      short loc_140A02E75
 * 0000000140A02E27: mov     rcx, [rsi+0A80h]
 * 0000000140A02E2E: lea     edx, [rax+30h]
 * 0000000140A02E31: lea     r8d, [rax+6]
 * 0000000140A02E35: mov     rax, [r12]
 * 0000000140A02E39: add     edx, 0FFFFFFF8h
 * 0000000140A02E3C: mov     [rcx], rax
 * 0000000140A02E3F: add     r12, 8
 * 0000000140A02E43: add     rcx, 8
 * 0000000140A02E47: sub     r8, r9
 * 0000000140A02E4A: jnz     short loc_140A02E35
 * 0000000140A02E4C: test    edx, edx
 * 0000000140A02E4E: jz      short loc_140A02E6E
 * 0000000140A02E50: mov     r14d, 0FFFFFFFFh
 * 0000000140A02E56: mov     al, [r12]
 * 0000000140A02E5A: add     r12, r9
 * 0000000140A02E5D: mov     [rcx], al
 * 0000000140A02E5F: add     rcx, r9
 * 0000000140A02E62: add     edx, r14d
 * 0000000140A02E65: jnz     short loc_140A02E56
 * 0000000140A02E67: mov     r14b, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A02E6E: mov     r12, [rsi+0A80h]
 * 0000000140A02E75: mov     [r12+18h], r15
 * 0000000140A02E7A: mov     rax, [rbx]
 * 0000000140A02E7D: mov     [r12+20h], rax
 * 0000000140A02E82: mov     eax, [rbx+8]
 * 0000000140A02E85: shr     rax, 6
 * 0000000140A02E89: and     al, 0Fh
 * 0000000140A02E8B: mov     [r12+28h], al
 * 0000000140A02E90: xor     eax, eax
 * 0000000140A02E92: cmp     [rsi+8F8h], eax
 * 0000000140A02E98: jnz     short loc_140A02EE5
 * 0000000140A02E9A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02EA4: xor     edx, edx
 * 0000000140A02EA6: add     rax, rsi
 * 0000000140A02EA9: mov     rcx, rsi
 * 0000000140A02EAC: mov     [rsi+900h], rax
 * 0000000140A02EB3: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A02EBD: add     rax, r12
 * 0000000140A02EC0: mov     [rsi+908h], rax
 * 0000000140A02EC7: movsxd  rax, dword ptr [r12]
 * 0000000140A02ECB: mov     [rsi+910h], rax
 * 0000000140A02ED2: mov     [rsi+918h], rdi
 * 0000000140A02ED9: mov     [rsi+8F8h], r9d
 * 0000000140A02EE0: call    $$b8
 * 0000000140A02EE5: add     rbx, 30h ; '0'
 * 0000000140A02EE9: mov     rcx, [rbx]
 * 0000000140A02EEC: test    rcx, rcx
 * 0000000140A02EEF: jnz     loc_140A02DCD
 * 0000000140A02EF5: mov     r14, [rbp+0BE0h+var_C60]
 * 0000000140A02EF9: mov     rax, [rsi+100h]
 * 0000000140A02F00: mov     rcx, r14
 * 0000000140A02F03: call    KeGuardDispatchICall
 * 0000000140A02F08: mov     rax, [rsi+3A8h]
 * 0000000140A02F0F: mov     rcx, rdi
 * 0000000140A02F12: call    KeGuardDispatchICall
 * 0000000140A02F17: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A02F1C: mov     eax, 8000h
 * 0000000140A02F21: add     [rsi+828h], eax
 * 0000000140A02F27: mov     r14d, [rsp+0CE0h+var_C78]
 * 0000000140A02F2C: xor     r15d, r15d
 * 0000000140A02F2F: mov     rbx, [rsp+0CE0h+var_C88]
 * 0000000140A02F34: mov     r12d, 1
 * 0000000140A02F3A: mov     rax, [rsi+3B0h]
 * 0000000140A02F41: add     r14d, r12d
 * 0000000140A02F44: mov     rcx, rdi
 * 0000000140A02F47: mov     [rsp+0CE0h+var_C78], r14d
 * 0000000140A02F4C: call    KeGuardDispatchICall
 * 0000000140A02F51: mov     rdi, rax
 * 0000000140A02F54: test    rax, rax
 * 0000000140A02F57: jnz     loc_140A0275E
 * 0000000140A02F5D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A02F64: mov     r13, [rsi+4E0h]
 * 0000000140A02F6B: mov     rax, [rsi+3A0h]
 * 0000000140A02F72: mov     rcx, r13
 * 0000000140A02F75: call    KeGuardDispatchICall
 * 0000000140A02F7A: test    eax, eax
 * 0000000140A02F7C: js      loc_140A03357
 * 0000000140A02F82: mov     rax, [rsi+3E0h]
 * 0000000140A02F89: mov     rcx, r13
 * 0000000140A02F8C: call    KeGuardDispatchICall
 * 0000000140A02F91: mov     bl, al
 * 0000000140A02F93: mov     [rbp+0BE0h+var_B3E], al
 * 0000000140A02F99: mov     rax, [rsi+3E8h]
 * 0000000140A02FA0: lea     rdx, [rbp+0BE0h+var_C00]
 * 0000000140A02FA4: mov     rcx, r13
 * 0000000140A02FA7: call    KeGuardDispatchICall
 * 0000000140A02FAC: mov     byte ptr [rbp+0BE0h+arg_8], al
 * 0000000140A02FB2: mov     rcx, r13
 * 0000000140A02FB5: mov     rax, [rsi+3F0h]
 * 0000000140A02FBC: call    KeGuardDispatchICall
 * 0000000140A02FC1: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A02FC6: cmp     bl, 72h ; 'r'
 * 0000000140A02FC9: jz      short loc_140A03042
 * 0000000140A02FCB: mov     eax, [rsi+8F8h]
 * 0000000140A02FD1: test    eax, eax
 * 0000000140A02FD3: jnz     short loc_140A03042
 * 0000000140A02FD5: mov     rax, [rsi+590h]
 * 0000000140A02FDC: movzx   ecx, bl
 * 0000000140A02FDF: xor     rcx, 72h
 * 0000000140A02FE3: mov     [rax+18h], rcx
 * 0000000140A02FE7: mov     eax, [rsi+8F8h]
 * 0000000140A02FED: test    eax, eax
 * 0000000140A02FEF: jnz     short loc_140A03042
 * 0000000140A02FF1: mov     r15, [rsp+0CE0h+var_C90]
 * 0000000140A02FF6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A03000: add     rax, rsi
 * 0000000140A03003: xor     edx, edx
 * 0000000140A03005: mov     [rsi+900h], rax
 * 0000000140A0300C: mov     rcx, rsi
 * 0000000140A0300F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A03019: add     rax, r15
 * 0000000140A0301C: mov     [rsi+908h], rax
 * 0000000140A03023: movsxd  rax, dword ptr [r15]
 * 0000000140A03026: mov     [rsi+910h], rax
 * 0000000140A0302D: mov     [rsi+918h], r13
 * 0000000140A03034: mov     [rsi+8F8h], r12d
 * 0000000140A0303B: call    $$b8
 * 0000000140A03040: jmp     short loc_140A03047
 * 0000000140A03042: mov     r15, [rsp+0CE0h+var_C90]
 * 0000000140A03047: xor     edx, edx
 * 0000000140A03049: movzx   ecx, bl
 * 0000000140A0304C: and     ecx, 7
 * 0000000140A0304F: mov     r14b, dl
 * 0000000140A03052: mov     r12b, dl
 * 0000000140A03055: sub     ecx, 1
 * 0000000140A03058: jz      short loc_140A030C7
 * 0000000140A0305A: cmp     ecx, 1
 * 0000000140A0305D: jz      short loc_140A030BA
 * 0000000140A0305F: test    bl, 7
 * 0000000140A03062: jz      short loc_140A030CA
 * 0000000140A03064: cmp     [rsi+8F8h], edx
 * 0000000140A0306A: jnz     short loc_140A030CA
 * 0000000140A0306C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A03076: mov     rcx, rsi
 * 0000000140A03079: add     rax, rsi
 * 0000000140A0307C: mov     [rsi+900h], rax
 * 0000000140A03083: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0308D: add     rax, r15
 * 0000000140A03090: mov     [rsi+908h], rax
 * 0000000140A03097: movsxd  rax, dword ptr [r15]
 * 0000000140A0309A: mov     [rsi+910h], rax
 * 0000000140A030A1: lea     eax, [rdx+1]
 * 0000000140A030A4: mov     [rsi+918h], r13
 * 0000000140A030AB: mov     [rsi+8F8h], eax
 * 0000000140A030B1: call    $$b8
 * 0000000140A030B6: xor     edx, edx
 * 0000000140A030B8: jmp     short loc_140A030CA
 * 0000000140A030BA: mov     eax, 10h
 * 0000000140A030BF: mov     r14b, al
 * 0000000140A030C2: mov     r12b, al
 * 0000000140A030C5: jmp     short loc_140A030CA
 * 0000000140A030C7: mov     r14b, 30h ; '0'
 * 0000000140A030CA: mov     r15, [rsi+5C8h]
 * 0000000140A030D1: movzx   ebx, bl
 * 0000000140A030D4: shr     rbx, 4
 * 0000000140A030D8: mov     al, [r15+rbx*2]
 * 0000000140A030DC: or      al, r14b
 * 0000000140A030DF: mov     r14, [rsp+0CE0h+var_C90]
 * 0000000140A030E4: cmp     al, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A030EA: jz      short loc_140A03142
 * 0000000140A030EC: cmp     [rsi+8F8h], edx
 * 0000000140A030F2: jnz     short loc_140A03142
 * 0000000140A030F4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A030FE: xor     edx, edx
 * 0000000140A03100: add     rax, rsi
 * 0000000140A03103: mov     rcx, rsi
 * 0000000140A03106: mov     [rsi+900h], rax
 * 0000000140A0310D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A03117: add     rax, r14
 * 0000000140A0311A: mov     [rsi+908h], rax
 * 0000000140A03121: movsxd  rax, dword ptr [r14]
 * 0000000140A03124: mov     [rsi+910h], rax
 * 0000000140A0312B: mov     eax, 1
 * 0000000140A03130: mov     [rsi+918h], r13
 * 0000000140A03137: mov     [rsi+8F8h], eax
 * 0000000140A0313D: call    $$b8
 * 0000000140A03142: mov     al, [r15+rbx*2+1]
 * 0000000140A03147: xor     r15d, r15d
 * 0000000140A0314A: or      al, r12b
 * 0000000140A0314D: lea     ebx, [r15+1]
 * 0000000140A03151: cmp     al, [rbp+0BE0h+var_C00]
 * 0000000140A03154: jz      short loc_140A031A8
 * 0000000140A03156: cmp     [rsi+8F8h], r15d
 * 0000000140A0315D: jnz     short loc_140A031A8
 * 0000000140A0315F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A03169: xor     edx, edx
 * 0000000140A0316B: add     rax, rsi
 * 0000000140A0316E: mov     rcx, rsi
 * 0000000140A03171: mov     [rsi+900h], rax
 * 0000000140A03178: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A03182: add     rax, r14
 * 0000000140A03185: mov     [rsi+908h], rax
 * 0000000140A0318C: movsxd  rax, dword ptr [r14]
 * 0000000140A0318F: mov     [rsi+910h], rax
 * 0000000140A03196: mov     [rsi+918h], r13
 * 0000000140A0319D: mov     [rsi+8F8h], ebx
 * 0000000140A031A3: call    $$b8
 * 0000000140A031A8: cmp     r13, [rsi+4E0h]
 * 0000000140A031AF: jz      short loc_140A031C7
 * 0000000140A031B1: mov     rax, [rsi+3D8h]
 * 0000000140A031B8: mov     edx, ebx
 * 0000000140A031BA: mov     rcx, r13
 * 0000000140A031BD: call    KeGuardDispatchICall
 * 0000000140A031C2: mov     r14, rax
 * 0000000140A031C5: jmp     short loc_140A031CA
 * 0000000140A031C7: mov     r14, r15
 * 0000000140A031CA: mov     [rbp+0BE0h+var_C60], r14
 * 0000000140A031CE: test    r14, r14
 * 0000000140A031D1: jz      loc_140A03338
 * 0000000140A031D7: mov     rcx, [r14]
 * 0000000140A031DA: mov     rbx, r14
 * 0000000140A031DD: test    rcx, rcx
 * 0000000140A031E0: jz      loc_140A03329
 * 0000000140A031E6: mov     dil, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A031ED: mov     r12, [rsp+0CE0h+var_C70]
 * 0000000140A031F2: mov     r14, [rsp+0CE0h+var_C90]
 * 0000000140A031F7: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140A031FB: mov     [rbx], rcx
 * 0000000140A031FE: mov     rax, [rsi+1E0h]
 * 0000000140A03205: call    KeGuardDispatchICall
 * 0000000140A0320A: mov     rcx, [rbx+8]
 * 0000000140A0320E: movzx   edx, [rbp+0BE0h+var_C00]
 * 0000000140A03212: mov     r15, rcx
 * 0000000140A03215: movzx   eax, dil
 * 0000000140A03219: and     r15, 0FFFFFFFFFFFF0000h
 * 0000000140A03220: cmp     r15, r12
 * 0000000140A03223: cmovz   edx, eax
 * 0000000140A03226: mov     rax, [rsi+3F8h]
 * 0000000140A0322D: shr     rcx, 6
 * 0000000140A03231: and     cl, 0Fh
 * 0000000140A03234: call    KeGuardDispatchICall
 * 0000000140A03239: test    eax, eax
 * 0000000140A0323B: jnz     loc_140A0330B
 * 0000000140A03241: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A0324B: lea     r10d, [rax+1]
 * 0000000140A0324F: jz      short loc_140A0329B
 * 0000000140A03251: mov     rcx, [rsi+0A80h]
 * 0000000140A03258: lea     edx, [rax+30h]
 * 0000000140A0325B: lea     r8d, [rax+6]
 * 0000000140A0325F: mov     rax, [r14]
 * 0000000140A03262: add     edx, 0FFFFFFF8h
 * 0000000140A03265: mov     [rcx], rax
 * 0000000140A03268: add     r14, 8
 * 0000000140A0326C: add     rcx, 8
 * 0000000140A03270: sub     r8, r10
 * 0000000140A03273: jnz     short loc_140A0325F
 * 0000000140A03275: test    edx, edx
 * 0000000140A03277: jz      short loc_140A03294
 * 0000000140A03279: mov     edi, 0FFFFFFFFh
 * 0000000140A0327E: mov     al, [r14]
 * 0000000140A03281: add     r14, r10
 * 0000000140A03284: mov     [rcx], al
 * 0000000140A03286: add     rcx, r10
 * 0000000140A03289: add     edx, edi
 * 0000000140A0328B: jnz     short loc_140A0327E
 * 0000000140A0328D: mov     dil, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A03294: mov     r14, [rsi+0A80h]
 * 0000000140A0329B: mov     [r14+18h], r15
 * 0000000140A0329F: xor     r15d, r15d
 * 0000000140A032A2: mov     rax, [rbx]
 * 0000000140A032A5: mov     [r14+20h], rax
 * 0000000140A032A9: mov     eax, [rbx+8]
 * 0000000140A032AC: shr     rax, 6
 * 0000000140A032B0: and     al, 0Fh
 * 0000000140A032B2: mov     [r14+28h], al
 * 0000000140A032B6: cmp     [rsi+8F8h], r15d
 * 0000000140A032BD: jnz     short loc_140A0330E
 * 0000000140A032BF: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A032C9: xor     edx, edx
 * 0000000140A032CB: add     rax, rsi
 * 0000000140A032CE: mov     rcx, rsi
 * 0000000140A032D1: mov     [rsi+900h], rax
 * 0000000140A032D8: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A032E2: add     rax, r14
 * 0000000140A032E5: mov     [rsi+908h], rax
 * 0000000140A032EC: movsxd  rax, dword ptr [r14]
 * 0000000140A032EF: mov     [rsi+910h], rax
 * 0000000140A032F6: mov     [rsi+918h], r13
 * 0000000140A032FD: mov     [rsi+8F8h], r10d
 * 0000000140A03304: call    $$b8
 * 0000000140A03309: jmp     short loc_140A0330E
 * 0000000140A0330B: xor     r15d, r15d
 * 0000000140A0330E: add     rbx, 30h ; '0'
 * 0000000140A03312: mov     rcx, [rbx]
 * 0000000140A03315: test    rcx, rcx
 * 0000000140A03318: jnz     loc_140A031F7
 * 0000000140A0331E: mov     r14, [rbp+0BE0h+var_C60]
 * 0000000140A03322: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A03329: mov     rax, [rsi+100h]
 * 0000000140A03330: mov     rcx, r14
 * 0000000140A03333: call    KeGuardDispatchICall
 * 0000000140A03338: mov     rax, [rsi+3A8h]
 * 0000000140A0333F: mov     rcx, r13
 * 0000000140A03342: call    KeGuardDispatchICall
 * 0000000140A03347: mov     r14d, [rsp+0CE0h+var_C78]
 * 0000000140A0334C: mov     eax, 8000h
 * 0000000140A03351: add     [rsi+828h], eax
 * 0000000140A03357: mov     rcx, [rsp+0CE0h+var_C88]
 * 0000000140A0335C: test    rcx, rcx
 * 0000000140A0335F: jz      short loc_140A0336D
 * 0000000140A03361: mov     rax, [rsi+1E0h]
 * 0000000140A03368: call    KeGuardDispatchICall
 * 0000000140A0336D: shl     r14d, 8
 * 0000000140A03371: add     [rsi+828h], r14d
 * 0000000140A03378: jmp     loc_1409FC31B
 * 0000000140A0337D: test    [r13+2Ah], dl
 * 0000000140A03381: jz      short loc_140A033C1
 * 0000000140A03383: xor     r15d, r15d
 * 0000000140A03386: cmp     [rsi+980h], r15
 * 0000000140A0338D: jz      loc_140A0344D
 * 0000000140A03393: mov     ecx, [rsi+994h]
 * 0000000140A03399: test    cl, 4
 * 0000000140A0339C: jnz     loc_140A0344D
 * 0000000140A033A2: cmp     [rsi+824h], r15d
 * 0000000140A033A9: jnz     loc_140A03444
 * 0000000140A033AF: mov     eax, ecx
 * 0000000140A033B1: shl     eax, 3
 * 0000000140A033B4: xor     eax, ecx
 * 0000000140A033B6: and     eax, 20h
 * 0000000140A033B9: xor     eax, ecx
 * 0000000140A033BB: mov     [rsi+994h], eax
 * 0000000140A033C1: mov     r10, [r13+8]
 * 0000000140A033C5: xor     r14d, r14d
 * 0000000140A033C8: mov     r8d, [rsi+824h]
 * 0000000140A033CF: mov     [rbp+0BE0h+var_C10], r10
 * 0000000140A033D3: lea     rax, [r8+r8*2]
 * 0000000140A033D7: lea     rcx, [r10+rax*4]
 * 0000000140A033DB: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A033E5: lea     r11, [rcx+0Ch]
 * 0000000140A033E9: mov     [rsp+0CE0h+var_C70], rcx
 * 0000000140A033EE: mov     ecx, [r13+24h]
 * 0000000140A033F2: mul     rcx
 * 0000000140A033F5: mov     [rbp+0BE0h+var_C60], r11
 * 0000000140A033F9: mov     r9, rdx
 * 0000000140A033FC: shr     r9, 3
 * 0000000140A03400: mov     eax, r9d
 * 0000000140A03403: mov     [rbp+0BE0h+var_C48], r9
 * 0000000140A03407: lea     rcx, [rax+rax*2]
 * 0000000140A0340B: lea     rax, [r10+rcx*4]
 * 0000000140A0340F: mov     [rbp+0BE0h+var_C20], rax
 * 0000000140A03413: lea     rax, [r13+30h]
 * 0000000140A03417: lea     r15, [rax+r8]
 * 0000000140A0341B: mov     [rsp+0CE0h+var_C88], r15
 * 0000000140A03420: lea     r10d, [r9-1]
 * 0000000140A03424: mov     dword ptr [rbp+0BE0h+arg_8], r10d
 * 0000000140A0342B: test    r9d, r9d
 * 0000000140A0342E: jz      short loc_140A03459
 * 0000000140A03430: mov     edx, r10d
 * 0000000140A03433: add     rdx, 7
 * 0000000140A03437: and     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140A0343B: add     rdx, rax
 * 0000000140A0343E: mov     [rbp+0BE0h+var_C50], rdx
 * 0000000140A03442: jmp     short loc_140A03467
 * 0000000140A03444: test    cl, 20h
 * 0000000140A03447: jz      loc_140A033C1
 * 0000000140A0344D: mov     [rsi+824h], r15d
 * 0000000140A03454: jmp     loc_1409FC31B
 * 0000000140A03459: mov     rdx, rax
 * 0000000140A0345C: mov     [rbp+0BE0h+var_C50], rax
 * 0000000140A03460: mov     dword ptr [rbp+0BE0h+arg_8], r10d
 * 0000000140A03467: movzx   eax, word ptr [r13+28h]
 * 0000000140A0346C: lea     rcx, [rax+rax*2]
 * 0000000140A03470: lea     rax, [rdx+rcx*8]
 * 0000000140A03474: mov     [rsp+0CE0h+BugCheckParameter2], rax
 * 0000000140A03479: test    r9d, r9d
 * 0000000140A0347C: jz      loc_140A037AB
 * 0000000140A03482: cmp     r8d, r10d
 * 0000000140A03485: jnb     loc_140A037AB
 * 0000000140A0348B: mov     rdi, [rsp+0CE0h+var_C70]
 * 0000000140A03490: cmp     [r15], r14b
 * 0000000140A03493: jl      loc_140A03738
 * 0000000140A03499: mov     eax, [rdi+4]
 * 0000000140A0349C: mov     r9d, [r11]
 * 0000000140A0349F: mov     r13d, eax
 * 0000000140A034A2: sub     r9d, eax
 * 0000000140A034A5: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A034AA: mov     r12d, r9d
 * 0000000140A034AD: add     r13, [rax+18h]
 * 0000000140A034B1: add     [rsi+828h], r9d
 * 0000000140A034B8: mov     r10, r13
 * 0000000140A034BB: mov     ebx, [rsi+814h]
 * 0000000140A034C1: mov     rax, r13
 * 0000000140A034C4: mov     r14, [rsi+818h]
 * 0000000140A034CB: lea     rcx, [r9+r13]
 * 0000000140A034CF: mov     [rsp+0CE0h+var_C70], r13
 * 0000000140A034D4: cmp     r13, rcx
 * 0000000140A034D7: jnb     short loc_140A034E9
 * 0000000140A034D9: mov     edx, 40h ; '@'
 * 0000000140A034DE: prefetchnta byte ptr [rax]
 * 0000000140A034E1: add     rax, rdx
 * 0000000140A034E4: cmp     rax, rcx
 * 0000000140A034E7: jb      short loc_140A034DE
 * 0000000140A034E9: mov     r11d, r9d
 * 0000000140A034EC: mov     r8, r14
 * 0000000140A034EF: shr     r11d, 7
 * 0000000140A034F3: test    r11d, r11d
 * 0000000140A034F6: jz      short loc_140A0356A
 * 0000000140A034F8: mov     rsi, 7010008004002001h
 * 0000000140A03502: mov     edx, 8
 * 0000000140A03507: lea     r15d, [rdx-7]
 * 0000000140A0350B: mov     rax, [r10]
 * 0000000140A0350E: mov     ecx, ebx
 * 0000000140A03510: xor     rax, r8
 * 0000000140A03513: mov     r8, [r10+8]
 * 0000000140A03517: rol     rax, cl
 * 0000000140A0351A: add     r10, 10h
 * 0000000140A0351E: xor     r8, rax
 * 0000000140A03521: rol     r8, cl
 * 0000000140A03524: sub     rdx, r15
 * 0000000140A03527: jnz     short loc_140A0350B
 * 0000000140A03529: mov     rcx, r10
 * 0000000140A0352C: sub     rcx, r13
 * 0000000140A0352F: xor     rcx, r14
 * 0000000140A03532: mov     rax, rcx
 * 0000000140A03535: rol     rax, 11h
 * 0000000140A03539: xor     rcx, rax
 * 0000000140A0353C: mov     rax, rsi
 * 0000000140A0353F: mul     rcx
 * 0000000140A03542: xor     ebx, edx
 * 0000000140A03544: mov     [rbp+0BE0h+var_628], rdx
 * 0000000140A0354B: xor     ebx, eax
 * 0000000140A0354D: mov     rax, r15
 * 0000000140A03550: and     ebx, 3Fh
 * 0000000140A03553: cmovz   ebx, eax
 * 0000000140A03556: mov     eax, 0FFFFFFFFh
 * 0000000140A0355B: add     r11d, eax
 * 0000000140A0355E: jnz     short loc_140A03502
 * 0000000140A03560: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A03565: mov     r15, [rsp+0CE0h+var_C88]
 * 0000000140A0356A: and     r9d, 7Fh
 * 0000000140A0356E: mov     r11d, 1
 * 0000000140A03574: cmp     r9d, 8
 * 0000000140A03578: jb      short loc_140A03596
 * 0000000140A0357A: mov     edx, r9d
 * 0000000140A0357D: shr     rdx, 3
 * 0000000140A03581: xor     r8, [r10]
 * 0000000140A03584: mov     ecx, ebx
 * 0000000140A03586: rol     r8, cl
 * 0000000140A03589: add     r10, 8
 * 0000000140A0358D: add     r9d, 0FFFFFFF8h
 * 0000000140A03591: sub     rdx, r11
 * 0000000140A03594: jnz     short loc_140A03581
 * 0000000140A03596: xor     r14d, r14d
 * 0000000140A03599: test    r9d, r9d
 * 0000000140A0359C: jz      short loc_140A035BB
 * 0000000140A0359E: mov     r14d, 0FFFFFFFFh
 * 0000000140A035A4: movzx   eax, byte ptr [r10]
 * 0000000140A035A8: mov     ecx, ebx
 * 0000000140A035AA: xor     r8, rax
 * 0000000140A035AD: add     r10, r11
 * 0000000140A035B0: rol     r8, cl
 * 0000000140A035B3: add     r9d, r14d
 * 0000000140A035B6: jnz     short loc_140A035A4
 * 0000000140A035B8: xor     r14d, r14d
 * 0000000140A035BB: mov     rax, r8
 * 0000000140A035BE: jmp     short loc_140A035C3
 * 0000000140A035C0: xor     r8b, al
 * 0000000140A035C3: shr     rax, 7
 * 0000000140A035C7: test    rax, rax
 * 0000000140A035CA: jnz     short loc_140A035C0
 * 0000000140A035CC: movzx   ecx, byte ptr [r15]
 * 0000000140A035D0: mov     eax, ecx
 * 0000000140A035D2: movzx   edx, r8b
 * 0000000140A035D6: and     edx, 7Fh
 * 0000000140A035D9: and     eax, 7Fh
 * 0000000140A035DC: mov     [rbp+0BE0h+var_C58], edx
 * 0000000140A035DF: cmp     edx, eax
 * 0000000140A035E1: jz      loc_140A03720
 * 0000000140A035E7: test    r12, r12
 * 0000000140A035EA: jz      loc_140A036A3
 * 0000000140A035F0: mov     eax, [rsi+994h]
 * 0000000140A035F6: mov     r8d, 40h ; '@'
 * 0000000140A035FC: test    r8b, al
 * 0000000140A035FF: jz      loc_140A036A3
 * 0000000140A03605: mov     r15, cr8
 * 0000000140A03609: lea     eax, [r8-3Eh]
 * 0000000140A0360D: mov     cr8, rax
 * 0000000140A03611: mov     rbx, r13
 * 0000000140A03614: dec     r12
 * 0000000140A03617: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A0361E: add     r13, r12
 * 0000000140A03621: or      r13, 0FFFh
 * 0000000140A03628: lea     r12, [rbx-1]
 * 0000000140A0362C: movzx   r14d, r15b
 * 0000000140A03630: mov     rax, [rsi+468h]
 * 0000000140A03637: xor     edx, edx
 * 0000000140A03639: mov     rcx, rbx
 * 0000000140A0363C: call    KeGuardDispatchICall
 * 0000000140A03641: cmp     eax, 0C000022Dh
 * 0000000140A03646: jnz     short loc_140A0366B
 * 0000000140A03648: mov     eax, 1
 * 0000000140A0364D: cmp     r15b, al
 * 0000000140A03650: ja      short loc_140A03671
 * 0000000140A03652: movzx   r14d, r15b
 * 0000000140A03656: mov     cr8, r14
 * 0000000140A0365A: mov     al, [rbx]
 * 0000000140A0365C: mov     rax, cr8
 * 0000000140A03660: mov     eax, 2
 * 0000000140A03665: mov     cr8, rax
 * 0000000140A03669: jmp     short loc_140A03630
 * 0000000140A0366B: xor     ecx, ecx
 * 0000000140A0366D: test    eax, eax
 * 0000000140A0366F: js      short loc_140A0368D
 * 0000000140A03671: mov     eax, 1000h
 * 0000000140A03676: add     rbx, rax
 * 0000000140A03679: add     r12, rax
 * 0000000140A0367C: cmp     r12, r13
 * 0000000140A0367F: jnz     short loc_140A0362C
 * 0000000140A03681: mov     cr8, r14
 * 0000000140A03685: xor     r14d, r14d
 * 0000000140A03688: jmp     loc_140A03720
 * 0000000140A0368D: mov     cr8, r14
 * 0000000140A03691: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A03696: xor     r14d, r14d
 * 0000000140A03699: mov     edx, [rbp+0BE0h+var_C58]
 * 0000000140A0369C: mov     r13, [rsp+0CE0h+var_C70]
 * 0000000140A036A1: mov     cl, [rax]
 * 0000000140A036A3: movzx   eax, cl
 * 0000000140A036A6: mov     ecx, [rsi+8F8h]
 * 0000000140A036AC: and     eax, 7Fh
 * 0000000140A036AF: test    ecx, ecx
 * 0000000140A036B1: jnz     short loc_140A03720
 * 0000000140A036B3: mov     ecx, edx
 * 0000000140A036B5: xor     rcx, rax
 * 0000000140A036B8: mov     rax, [rsi+590h]
 * 0000000140A036BF: mov     [rax+18h], rcx
 * 0000000140A036C3: mov     ecx, [rsi+8F8h]
 * 0000000140A036C9: test    ecx, ecx
 * 0000000140A036CB: jnz     short loc_140A03720
 * 0000000140A036CD: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A036D2: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A036DC: add     rax, rsi
 * 0000000140A036DF: xor     edx, edx
 * 0000000140A036E1: mov     [rsi+900h], rax
 * 0000000140A036E8: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A036F2: add     rax, rcx
 * 0000000140A036F5: mov     [rsi+908h], rax
 * 0000000140A036FC: movsxd  rax, dword ptr [rcx]
 * 0000000140A036FF: mov     rcx, rsi
 * 0000000140A03702: mov     [rsi+910h], rax
 * 0000000140A03709: mov     eax, 1
 * 0000000140A0370E: mov     [rsi+918h], r13
 * 0000000140A03715: mov     [rsi+8F8h], eax
 * 0000000140A0371B: call    $$b8
 * 0000000140A03720: mov     r15, [rsp+0CE0h+var_C88]
 * 0000000140A03725: mov     eax, 40h ; '@'
 * 0000000140A0372A: add     [rsi+828h], eax
 * 0000000140A03730: mov     r11, [rbp+0BE0h+var_C60]
 * 0000000140A03734: mov     r12, [rbp+0BE0h+var_C08]
 * 0000000140A03738: mov     eax, 0Ch
 * 0000000140A0373D: inc     r15
 * 0000000140A03740: add     r11, rax
 * 0000000140A03743: mov     [rsp+0CE0h+var_C88], r15
 * 0000000140A03748: add     rdi, rax
 * 0000000140A0374B: mov     [rbp+0BE0h+var_C60], r11
 * 0000000140A0374F: cmp     r11, [rbp+0BE0h+var_C20]
 * 0000000140A03753: jnb     short loc_140A03765
 * 0000000140A03755: mov     eax, [r12]
 * 0000000140A03759: cmp     [rsi+828h], eax
 * 0000000140A0375F: jl      loc_140A03490
 * 0000000140A03765: sub     rdi, [rbp+0BE0h+var_C10]
 * 0000000140A03769: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140A03773: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0377A: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A0377E: imul    rdi
 * 0000000140A03781: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A03788: sar     rdx, 1
 * 0000000140A0378B: mov     rax, rdx
 * 0000000140A0378E: shr     rax, 3Fh
 * 0000000140A03792: add     rdx, rax
 * 0000000140A03795: mov     r8d, edx
 * 0000000140A03798: mov     [rsi+824h], edx
 * 0000000140A0379E: mov     rdx, [rbp+0BE0h+var_C50]
 * 0000000140A037A2: cmp     r8d, r10d
 * 0000000140A037A5: jb      loc_1409FC318
 * 0000000140A037AB: mov     eax, [rsi+82Ch]
 * 0000000140A037B1: xor     r15d, r15d
 * 0000000140A037B4: cmp     [rsi+828h], eax
 * 0000000140A037BA: jge     loc_1409FC31B
 * 0000000140A037C0: test    r9d, r9d
 * 0000000140A037C3: jz      short loc_140A037CB
 * 0000000140A037C5: sub     r8d, r9d
 * 0000000140A037C8: inc     r8d
 * 0000000140A037CB: mov     eax, r8d
 * 0000000140A037CE: lea     rcx, [rax+rax*2]
 * 0000000140A037D2: lea     rcx, [rdx+rcx*8]
 * 0000000140A037D6: mov     [rbp+0BE0h+var_C60], rcx
 * 0000000140A037DA: mov     rdi, [rsp+0CE0h+var_C90]
 * 0000000140A037DF: lea     rdx, [rcx+8]
 * 0000000140A037E3: mov     eax, 2
 * 0000000140A037E8: mov     [rbp+0BE0h+arg_8], rdx
 * 0000000140A037EF: mov     r12d, eax
 * 0000000140A037F2: mov     [rsp+0CE0h+var_C88], rax
 * 0000000140A037F7: lea     eax, [r12-1]
 * 0000000140A037FC: lea     ecx, [rax+0Bh]
 * 0000000140A037FF: cmp     [rdx], r15d
 * 0000000140A03802: jl      loc_140A03A16
 * 0000000140A03808: mov     eax, [rdx-8]
 * 0000000140A0380B: mov     r8d, [rdx-4]
 * 0000000140A0380F: mov     r13d, eax
 * 0000000140A03812: add     r13, [rdi+18h]
 * 0000000140A03816: sub     r8d, eax
 * 0000000140A03819: add     [rsi+828h], r8d
 * 0000000140A03820: mov     r9, r13
 * 0000000140A03823: mov     r10d, [rsi+814h]
 * 0000000140A0382A: mov     rax, r13
 * 0000000140A0382D: mov     r14, [rsi+818h]
 * 0000000140A03834: lea     rcx, [r8+r13]
 * 0000000140A03838: mov     r15d, r8d
 * 0000000140A0383B: mov     [rbp+0BE0h+var_C50], r13
 * 0000000140A0383F: mov     [rsp+0CE0h+var_C70], r15
 * 0000000140A03844: cmp     r13, rcx
 * 0000000140A03847: jnb     short loc_140A0385A
 * 0000000140A03849: mov     r11d, 40h ; '@'
 * 0000000140A0384F: prefetchnta byte ptr [rax]
 * 0000000140A03852: add     rax, r11
 * 0000000140A03855: cmp     rax, rcx
 * 0000000140A03858: jb      short loc_140A0384F
 * 0000000140A0385A: mov     r11d, r8d
 * 0000000140A0385D: mov     rbx, r14
 * 0000000140A03860: shr     r11d, 7
 * 0000000140A03864: test    r11d, r11d
 * 0000000140A03867: jz      short loc_140A038E5
 * 0000000140A03869: mov     esi, 0FFFFFFFFh
 * 0000000140A0386E: mov     r12d, 1
 * 0000000140A03874: mov     r15, 7010008004002001h
 * 0000000140A0387E: mov     eax, 8
 * 0000000140A03883: xor     rbx, [r9]
 * 0000000140A03886: mov     ecx, r10d
 * 0000000140A03889: rol     rbx, cl
 * 0000000140A0388C: xor     rbx, [r9+8]
 * 0000000140A03890: add     r9, 10h
 * 0000000140A03894: rol     rbx, cl
 * 0000000140A03897: sub     rax, r12
 * 0000000140A0389A: jnz     short loc_140A03883
 * 0000000140A0389C: mov     rcx, r9
 * 0000000140A0389F: sub     rcx, r13
 * 0000000140A038A2: xor     rcx, r14
 * 0000000140A038A5: mov     rax, rcx
 * 0000000140A038A8: rol     rax, 11h
 * 0000000140A038AC: xor     rcx, rax
 * 0000000140A038AF: mov     rax, r15
 * 0000000140A038B2: mul     rcx
 * 0000000140A038B5: xor     r10d, edx
 * 0000000140A038B8: mov     [rbp+0BE0h+var_620], rdx
 * 0000000140A038BF: xor     r10d, eax
 * 0000000140A038C2: and     r10d, 3Fh
 * 0000000140A038C6: cmovz   r10d, r12d
 * 0000000140A038CA: add     r11d, esi
 * 0000000140A038CD: jnz     short loc_140A0387E
 * 0000000140A038CF: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A038D4: mov     r15, [rsp+0CE0h+var_C70]
 * 0000000140A038D9: mov     rdx, [rbp+0BE0h+arg_8]
 * 0000000140A038E0: mov     r12, [rsp+0CE0h+var_C88]
 * 0000000140A038E5: and     r8d, 7Fh
 * 0000000140A038E9: mov     r14d, 1
 * 0000000140A038EF: cmp     r8d, 8
 * 0000000140A038F3: jb      short loc_140A03912
 * 0000000140A038F5: mov     eax, r8d
 * 0000000140A038F8: shr     rax, 3
 * 0000000140A038FC: xor     rbx, [r9]
 * 0000000140A038FF: mov     ecx, r10d
 * 0000000140A03902: rol     rbx, cl
 * 0000000140A03905: add     r9, 8
 * 0000000140A03909: add     r8d, 0FFFFFFF8h
 * 0000000140A0390D: sub     rax, r14
 * 0000000140A03910: jnz     short loc_140A038FC
 * 0000000140A03912: test    r8d, r8d
 * 0000000140A03915: jz      short loc_140A03932
 * 0000000140A03917: mov     r11d, 0FFFFFFFFh
 * 0000000140A0391D: movzx   eax, byte ptr [r9]
 * 0000000140A03921: mov     ecx, r10d
 * 0000000140A03924: xor     rbx, rax
 * 0000000140A03927: add     r9, r14
 * 0000000140A0392A: rol     rbx, cl
 * 0000000140A0392D: add     r8d, r11d
 * 0000000140A03930: jnz     short loc_140A0391D
 * 0000000140A03932: mov     rax, rbx
 * 0000000140A03935: jmp     short loc_140A03939
 * 0000000140A03937: xor     ebx, eax
 * 0000000140A03939: shr     rax, 1Fh
 * 0000000140A0393D: test    rax, rax
 * 0000000140A03940: jnz     short loc_140A03937
 * 0000000140A03942: mov     ecx, [rdx]
 * 0000000140A03944: btr     ebx, 1Fh
 * 0000000140A03948: mov     eax, ecx
 * 0000000140A0394A: btr     eax, 1Fh
 * 0000000140A0394E: cmp     ebx, eax
 * 0000000140A03950: jz      loc_140A03A0B
 * 0000000140A03956: test    r15, r15
 * 0000000140A03959: jz      loc_140A03A7F
 * 0000000140A0395F: mov     eax, [rsi+994h]
 * 0000000140A03965: mov     r8d, 40h ; '@'
 * 0000000140A0396B: test    r8b, al
 * 0000000140A0396E: jz      loc_140A03A7F
 * 0000000140A03974: mov     r12, cr8
 * 0000000140A03978: lea     eax, [r8-3Eh]
 * 0000000140A0397C: mov     cr8, rax
 * 0000000140A03980: mov     r14, r13
 * 0000000140A03983: lea     rax, [r13-1]
 * 0000000140A03987: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A0398E: add     rax, r15
 * 0000000140A03991: or      rax, 0FFFh
 * 0000000140A03997: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A0399C: lea     r13, [r14-1]
 * 0000000140A039A0: movzx   r15d, r12b
 * 0000000140A039A4: mov     rax, [rsi+468h]
 * 0000000140A039AB: xor     edx, edx
 * 0000000140A039AD: mov     rcx, r14
 * 0000000140A039B0: call    KeGuardDispatchICall
 * 0000000140A039B5: cmp     eax, 0C000022Dh
 * 0000000140A039BA: jnz     short loc_140A039E0
 * 0000000140A039BC: mov     eax, 1
 * 0000000140A039C1: cmp     r12b, al
 * 0000000140A039C4: ja      short loc_140A039E8
 * 0000000140A039C6: movzx   r15d, r12b
 * 0000000140A039CA: mov     cr8, r15
 * 0000000140A039CE: mov     al, [r14]
 * 0000000140A039D1: mov     rax, cr8
 * 0000000140A039D5: mov     eax, 2
 * 0000000140A039DA: mov     cr8, rax
 * 0000000140A039DE: jmp     short loc_140A039A4
 * 0000000140A039E0: test    eax, eax
 * 0000000140A039E2: js      loc_140A03A69
 * 0000000140A039E8: mov     r11d, 1000h
 * 0000000140A039EE: add     r14, r11
 * 0000000140A039F1: add     r13, r11
 * 0000000140A039F4: cmp     r13, [rsp+0CE0h+var_C70]
 * 0000000140A039F9: jnz     short loc_140A039A0
 * 0000000140A039FB: mov     cr8, r15
 * 0000000140A039FF: mov     rdx, [rbp+0BE0h+arg_8]
 * 0000000140A03A06: mov     r12, [rsp+0CE0h+var_C88]
 * 0000000140A03A0B: xor     r15d, r15d
 * 0000000140A03A0E: mov     ecx, 0Ch
 * 0000000140A03A13: lea     eax, [rcx-0Bh]
 * 0000000140A03A16: add     rdx, rcx
 * 0000000140A03A19: sub     r12, rax
 * 0000000140A03A1C: mov     [rbp+0BE0h+arg_8], rdx
 * 0000000140A03A23: mov     [rsp+0CE0h+var_C88], r12
 * 0000000140A03A28: jnz     loc_140A037FF
 * 0000000140A03A2E: mov     rcx, [rbp+0BE0h+var_C60]
 * 0000000140A03A32: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A03A39: add     [rsi+824h], eax
 * 0000000140A03A3F: add     rcx, 18h
 * 0000000140A03A43: mov     [rbp+0BE0h+var_C60], rcx
 * 0000000140A03A47: cmp     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A03A4C: jz      loc_140A0344D
 * 0000000140A03A52: mov     eax, [rsi+82Ch]
 * 0000000140A03A58: cmp     [rsi+828h], eax
 * 0000000140A03A5E: jl      loc_140A037DA
 * 0000000140A03A64: jmp     loc_1409FC31B
 * 0000000140A03A69: mov     cr8, r15
 * 0000000140A03A6D: mov     rdx, [rbp+0BE0h+arg_8]
 * 0000000140A03A74: mov     r13, [rbp+0BE0h+var_C50]
 * 0000000140A03A78: mov     r12, [rsp+0CE0h+var_C88]
 * 0000000140A03A7D: mov     ecx, [rdx]
 * 0000000140A03A7F: mov     eax, ecx
 * 0000000140A03A81: xor     r15d, r15d
 * 0000000140A03A84: mov     ecx, [rsi+8F8h]
 * 0000000140A03A8A: btr     eax, 1Fh
 * 0000000140A03A8E: test    ecx, ecx
 * 0000000140A03A90: jnz     loc_140A03A0E
 * 0000000140A03A96: mov     ecx, ebx
 * 0000000140A03A98: xor     rcx, rax
 * 0000000140A03A9B: mov     rax, [rsi+590h]
 * 0000000140A03AA2: mov     [rax+18h], rcx
 * 0000000140A03AA6: mov     ecx, [rsi+8F8h]
 * 0000000140A03AAC: test    ecx, ecx
 * 0000000140A03AAE: jnz     loc_140A03A0E
 * 0000000140A03AB4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A03ABE: xor     edx, edx
 * 0000000140A03AC0: add     rax, rsi
 * 0000000140A03AC3: mov     [rsi+900h], rax
 * 0000000140A03ACA: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A03AD4: add     rax, rdi
 * 0000000140A03AD7: mov     [rsi+908h], rax
 * 0000000140A03ADE: movsxd  rax, dword ptr [rdi]
 * 0000000140A03AE1: mov     [rsi+910h], rax
 * 0000000140A03AE8: lea     eax, [rcx+1]
 * 0000000140A03AEB: mov     [rsi+918h], r13
 * 0000000140A03AF2: mov     rcx, rsi
 * 0000000140A03AF5: mov     [rsi+8F8h], eax
 * 0000000140A03AFB: call    $$b8
 * 0000000140A03B00: mov     rdx, [rbp+0BE0h+arg_8]
 * 0000000140A03B07: jmp     loc_140A03A0E
 * 0000000140A03B0C: mov     r14, [r13+8]
 * 0000000140A03B10: mov     r8d, [r13+10h]
 * 0000000140A03B14: mov     r9, r14
 * 0000000140A03B17: add     [rsi+828h], r8d
 * 0000000140A03B1E: mov     rax, r14
 * 0000000140A03B21: mov     r10d, [rsi+814h]
 * 0000000140A03B28: mov     r15, [rsi+818h]
 * 0000000140A03B2F: lea     rcx, [r14+r8]
 * 0000000140A03B33: cmp     r14, rcx
 * 0000000140A03B36: jnb     short loc_140A03B49
 * 0000000140A03B38: mov     r11d, 40h ; '@'
 * 0000000140A03B3E: prefetchnta byte ptr [rax]
 * 0000000140A03B41: add     rax, r11
 * 0000000140A03B44: cmp     rax, rcx
 * 0000000140A03B47: jb      short loc_140A03B3E
 * 0000000140A03B49: mov     r11d, r8d
 * 0000000140A03B4C: mov     rbx, r15
 * 0000000140A03B4F: shr     r11d, 7
 * 0000000140A03B53: mov     r12d, 0FFFFFFFFh
 * 0000000140A03B59: test    r11d, r11d
 * 0000000140A03B5C: jz      short loc_140A03BCA
 * 0000000140A03B5E: mov     rdi, 7010008004002001h
 * 0000000140A03B68: mov     eax, 8
 * 0000000140A03B6D: xor     rbx, [r9]
 * 0000000140A03B70: mov     ecx, r10d
 * 0000000140A03B73: rol     rbx, cl
 * 0000000140A03B76: xor     rbx, [r9+8]
 * 0000000140A03B7A: add     r9, 10h
 * 0000000140A03B7E: rol     rbx, cl
 * 0000000140A03B81: sub     rax, rdx
 * 0000000140A03B84: jnz     short loc_140A03B6D
 * 0000000140A03B86: mov     rcx, r9
 * 0000000140A03B89: sub     rcx, r14
 * 0000000140A03B8C: xor     rcx, r15
 * 0000000140A03B8F: mov     rax, rcx
 * 0000000140A03B92: rol     rax, 11h
 * 0000000140A03B96: xor     rcx, rax
 * 0000000140A03B99: mov     rax, rdi
 * 0000000140A03B9C: mul     rcx
 * 0000000140A03B9F: xor     r10d, eax
 * 0000000140A03BA2: mov     [rbp+0BE0h+var_618], rdx
 * 0000000140A03BA9: xor     r10d, edx
 * 0000000140A03BAC: mov     edx, 1
 * 0000000140A03BB1: and     r10d, 3Fh
 * 0000000140A03BB5: cmovz   r10d, edx
 * 0000000140A03BB9: add     r11d, r12d
 * 0000000140A03BBC: jnz     short loc_140A03B68
 * 0000000140A03BBE: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A03BC3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A03BCA: and     r8d, 7Fh
 * 0000000140A03BCE: cmp     r8d, 8
 * 0000000140A03BD2: jb      short loc_140A03BF1
 * 0000000140A03BD4: mov     eax, r8d
 * 0000000140A03BD7: shr     rax, 3
 * 0000000140A03BDB: xor     rbx, [r9]
 * 0000000140A03BDE: mov     ecx, r10d
 * 0000000140A03BE1: rol     rbx, cl
 * 0000000140A03BE4: add     r9, 8
 * 0000000140A03BE8: add     r8d, 0FFFFFFF8h
 * 0000000140A03BEC: sub     rax, rdx
 * 0000000140A03BEF: jnz     short loc_140A03BDB
 * 0000000140A03BF1: xor     r15d, r15d
 * 0000000140A03BF4: test    r8d, r8d
 * 0000000140A03BF7: jz      short loc_140A03C0E
 * 0000000140A03BF9: movzx   eax, byte ptr [r9]
 * 0000000140A03BFD: mov     ecx, r10d
 * 0000000140A03C00: xor     rbx, rax
 * 0000000140A03C03: add     r9, rdx
 * 0000000140A03C06: rol     rbx, cl
 * 0000000140A03C09: add     r8d, r12d
 * 0000000140A03C0C: jnz     short loc_140A03BF9
 * 0000000140A03C0E: mov     rax, rbx
 * 0000000140A03C11: jmp     short loc_140A03C15
 * 0000000140A03C13: xor     ebx, eax
 * 0000000140A03C15: shr     rax, 1Fh
 * 0000000140A03C19: test    rax, rax
 * 0000000140A03C1C: jnz     short loc_140A03C13
 * 0000000140A03C1E: btr     ebx, 1Fh
 * 0000000140A03C22: mov     r12d, r15d
 * 0000000140A03C25: cmp     ebx, [r13+14h]
 * 0000000140A03C29: jz      loc_140A03D14
 * 0000000140A03C2F: cmp     [r13+0], r15d
 * 0000000140A03C33: jnz     short loc_140A03C3D
 * 0000000140A03C35: cmp     [r13+18h], r15d
 * 0000000140A03C39: cmovnz  r12d, edx
 * 0000000140A03C3D: mov     ecx, [r13+10h]
 * 0000000140A03C41: mov     rdx, [r13+8]
 * 0000000140A03C45: test    rcx, rcx
 * 0000000140A03C48: jz      loc_140A03ED4
 * 0000000140A03C4E: mov     eax, [rsi+994h]
 * 0000000140A03C54: mov     r8d, 40h ; '@'
 * 0000000140A03C5A: test    r8b, al
 * 0000000140A03C5D: jz      loc_140A03ED4
 * 0000000140A03C63: mov     r13, cr8
 * 0000000140A03C67: lea     eax, [r8-3Eh]
 * 0000000140A03C6B: mov     cr8, rax
 * 0000000140A03C6F: mov     r14, rdx
 * 0000000140A03C72: lea     rax, [rcx-1]
 * 0000000140A03C76: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A03C7D: add     rax, rdx
 * 0000000140A03C80: or      rax, 0FFFh
 * 0000000140A03C86: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A03C8B: lea     rax, [r14-1]
 * 0000000140A03C8F: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A03C96: movzx   r15d, r13b
 * 0000000140A03C9A: mov     rax, [rsi+468h]
 * 0000000140A03CA1: xor     edx, edx
 * 0000000140A03CA3: mov     rcx, r14
 * 0000000140A03CA6: call    KeGuardDispatchICall
 * 0000000140A03CAB: cmp     eax, 0C000022Dh
 * 0000000140A03CB0: jnz     short loc_140A03CDF
 * 0000000140A03CB2: test    r12d, r12d
 * 0000000140A03CB5: jnz     loc_140A03EC8
 * 0000000140A03CBB: lea     eax, [r12+1]
 * 0000000140A03CC0: cmp     r13b, al
 * 0000000140A03CC3: ja      short loc_140A03CE7
 * 0000000140A03CC5: movzx   r15d, r13b
 * 0000000140A03CC9: mov     cr8, r15
 * 0000000140A03CCD: mov     al, [r14]
 * 0000000140A03CD0: mov     rax, cr8
 * 0000000140A03CD4: lea     eax, [r12+2]
 * 0000000140A03CD9: mov     cr8, rax
 * 0000000140A03CDD: jmp     short loc_140A03C9A
 * 0000000140A03CDF: test    eax, eax
 * 0000000140A03CE1: js      loc_140A03EC8
 * 0000000140A03CE7: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A03CEE: mov     r11d, 1000h
 * 0000000140A03CF4: add     rax, r11
 * 0000000140A03CF7: add     r14, r11
 * 0000000140A03CFA: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A03D01: cmp     rax, [rsp+0CE0h+var_C70]
 * 0000000140A03D06: jnz     short loc_140A03C96
 * 0000000140A03D08: mov     cr8, r15
 * 0000000140A03D0C: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A03D11: xor     r15d, r15d
 * 0000000140A03D14: mov     r14d, 1
 * 0000000140A03D1A: mov     eax, [r13+10h]
 * 0000000140A03D1E: mov     r12, [r13+8]
 * 0000000140A03D22: shr     eax, 4
 * 0000000140A03D25: mov     [rbp+0BE0h+arg_8], r12
 * 0000000140A03D2C: test    eax, eax
 * 0000000140A03D2E: jz      loc_1409FC31B
 * 0000000140A03D34: mov     edi, eax
 * 0000000140A03D36: mov     [rsp+0CE0h+var_C88], rdi
 * 0000000140A03D3B: mov     rax, [r12]
 * 0000000140A03D3F: lea     rdx, [rbp+0BE0h+var_988]
 * 0000000140A03D46: mov     rbx, r13
 * 0000000140A03D49: mov     r13d, r14d
 * 0000000140A03D4C: mov     r15, [rax]
 * 0000000140A03D4F: xor     eax, eax
 * 0000000140A03D51: mov     [rbp+0BE0h+var_988], rax
 * 0000000140A03D58: mov     rcx, r15
 * 0000000140A03D5B: mov     rax, [rsi+310h]
 * 0000000140A03D62: call    KeGuardDispatchICall
 * 0000000140A03D67: mov     r14, rax
 * 0000000140A03D6A: test    rax, rax
 * 0000000140A03D6D: jz      loc_140A03E9F
 * 0000000140A03D73: mov     edi, 6
 * 0000000140A03D78: xor     r12d, r12d
 * 0000000140A03D7B: mov     rax, [rsi+208h]
 * 0000000140A03D82: lea     rdx, [rbp+0BE0h+var_610]
 * 0000000140A03D89: mov     rcx, r14
 * 0000000140A03D8C: inc     r13d
 * 0000000140A03D8F: call    KeGuardDispatchICall
 * 0000000140A03D94: test    rax, rax
 * 0000000140A03D97: jnz     loc_140A03E71
 * 0000000140A03D9D: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A03DA7: lea     r9d, [rax+1]
 * 0000000140A03DAB: jz      short loc_140A03DF3
 * 0000000140A03DAD: mov     rcx, [rsi+0A80h]
 * 0000000140A03DB4: lea     edx, [rax+30h]
 * 0000000140A03DB7: mov     r8, rdi
 * 0000000140A03DBA: mov     rax, [rbx]
 * 0000000140A03DBD: add     edx, 0FFFFFFF8h
 * 0000000140A03DC0: mov     [rcx], rax
 * 0000000140A03DC3: add     rbx, 8
 * 0000000140A03DC7: add     rcx, 8
 * 0000000140A03DCB: sub     r8, r9
 * 0000000140A03DCE: jnz     short loc_140A03DBA
 * 0000000140A03DD0: test    edx, edx
 * 0000000140A03DD2: jz      short loc_140A03DEC
 * 0000000140A03DD4: mov     r12d, 0FFFFFFFFh
 * 0000000140A03DDA: mov     al, [rbx]
 * 0000000140A03DDC: add     rbx, r9
 * 0000000140A03DDF: mov     [rcx], al
 * 0000000140A03DE1: add     rcx, r9
 * 0000000140A03DE4: add     edx, r12d
 * 0000000140A03DE7: jnz     short loc_140A03DDA
 * 0000000140A03DE9: xor     r12d, r12d
 * 0000000140A03DEC: mov     rbx, [rsi+0A80h]
 * 0000000140A03DF3: mov     [rbx+18h], r14
 * 0000000140A03DF7: mov     [rbx+20h], r15
 * 0000000140A03DFB: mov     rax, [rsi+590h]
 * 0000000140A03E02: mov     [rax], rbx
 * 0000000140A03E05: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140A03E0C: mov     rax, [rsi+590h]
 * 0000000140A03E13: mov     [rax+8], r14
 * 0000000140A03E17: mov     dword ptr [rax+14h], 1000h
 * 0000000140A03E1E: cmp     [rsi+8F8h], r12d
 * 0000000140A03E25: jnz     short loc_140A03E71
 * 0000000140A03E27: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A03E31: xor     edx, edx
 * 0000000140A03E33: add     rax, rsi
 * 0000000140A03E36: mov     rcx, rsi
 * 0000000140A03E39: mov     [rsi+900h], rax
 * 0000000140A03E40: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A03E4A: add     rax, rbx
 * 0000000140A03E4D: mov     [rsi+908h], rax
 * 0000000140A03E54: movsxd  rax, dword ptr [rbx]
 * 0000000140A03E57: mov     [rsi+910h], rax
 * 0000000140A03E5E: mov     [rsi+918h], rdi
 * 0000000140A03E65: mov     [rsi+8F8h], r9d
 * 0000000140A03E6C: call    $$b8
 * 0000000140A03E71: mov     rax, [rsi+310h]
 * 0000000140A03E78: lea     rdx, [rbp+0BE0h+var_988]
 * 0000000140A03E7F: mov     rcx, r15
 * 0000000140A03E82: call    KeGuardDispatchICall
 * 0000000140A03E87: mov     r14, rax
 * 0000000140A03E8A: test    rax, rax
 * 0000000140A03E8D: jnz     loc_140A03D7B
 * 0000000140A03E93: mov     r12, [rbp+0BE0h+arg_8]
 * 0000000140A03E9A: mov     rdi, [rsp+0CE0h+var_C88]
 * 0000000140A03E9F: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A03EA4: add     r12, 10h
 * 0000000140A03EA8: mov     r14d, 1
 * 0000000140A03EAE: mov     [rbp+0BE0h+arg_8], r12
 * 0000000140A03EB5: sub     rdi, r14
 * 0000000140A03EB8: mov     [rsp+0CE0h+var_C88], rdi
 * 0000000140A03EBD: jnz     loc_140A03D3B
 * 0000000140A03EC3: jmp     loc_1409FC47D
 * 0000000140A03EC8: mov     cr8, r15
 * 0000000140A03ECC: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A03ED1: xor     r15d, r15d
 * 0000000140A03ED4: mov     eax, [rsi+8F8h]
 * 0000000140A03EDA: mov     edx, [r13+14h]
 * 0000000140A03EDE: test    eax, eax
 * 0000000140A03EE0: jnz     short loc_140A03EF8
 * 0000000140A03EE2: mov     rax, [rsi+590h]
 * 0000000140A03EE9: mov     ecx, ebx
 * 0000000140A03EEB: xor     rcx, rdx
 * 0000000140A03EEE: mov     [rax+18h], rcx
 * 0000000140A03EF2: mov     eax, [rsi+8F8h]
 * 0000000140A03EF8: mov     rcx, [r13+8]
 * 0000000140A03EFC: mov     r14d, 1
 * 0000000140A03F02: test    eax, eax
 * 0000000140A03F04: jnz     loc_140A03D1A
 * 0000000140A03F0A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A03F14: xor     edx, edx
 * 0000000140A03F16: add     rax, rsi
 * 0000000140A03F19: mov     [rsi+900h], rax
 * 0000000140A03F20: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A03F2A: add     rax, r13
 * 0000000140A03F2D: mov     [rsi+908h], rax
 * 0000000140A03F34: movsxd  rax, dword ptr [r13+0]
 * 0000000140A03F38: mov     [rsi+910h], rax
 * 0000000140A03F3F: mov     [rsi+918h], rcx
 * 0000000140A03F46: mov     rcx, rsi
 * 0000000140A03F49: mov     [rsi+8F8h], r14d
 * 0000000140A03F50: call    $$b8
 * 0000000140A03F55: jmp     loc_140A03D1A
 * 0000000140A03F5A: mov     eax, [rsi+994h]
 * 0000000140A03F60: mov     ecx, 2
 * 0000000140A03F65: test    cl, al
 * 0000000140A03F67: jnz     loc_1409FC318
 * 0000000140A03F6D: mov     rax, [rsi+428h]
 * 0000000140A03F74: call    KeGuardDispatchICall
 * 0000000140A03F79: xor     r15d, r15d
 * 0000000140A03F7C: test    al, al
 * 0000000140A03F7E: jz      loc_1409FC31B
 * 0000000140A03F84: cmp     [rsi+8F8h], r15d
 * 0000000140A03F8B: jnz     loc_1409FC31B
 * 0000000140A03F91: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A03F9B: add     rax, rsi
 * 0000000140A03F9E: mov     [rsi+900h], rax
 * 0000000140A03FA5: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A03FAF: add     rax, r13
 * 0000000140A03FB2: mov     [rsi+908h], rax
 * 0000000140A03FB9: movsxd  rax, dword ptr [r13+0]
 * 0000000140A03FBD: mov     [rsi+910h], rax
 * 0000000140A03FC4: mov     [rsi+918h], r15
 * 0000000140A03FCB: jmp     loc_1409FC6E7
 * 0000000140A03FD0: cmp     r10d, 26h ; '&'
 * 0000000140A03FD4: jz      loc_140A075C9
 * 0000000140A03FDA: jle     loc_140A06767
 * 0000000140A03FE0: cmp     r10d, 2Ah ; '*'
 * 0000000140A03FE4: jle     loc_140A0661F
 * 0000000140A03FEA: cmp     r10d, 2Bh ; '+'
 * 0000000140A03FEE: jz      loc_140A05543
 * 0000000140A03FF4: cmp     r10d, 2Ch ; ','
 * 0000000140A03FF8: jz      loc_140A04988
 * 0000000140A03FFE: cmp     r10d, 2Eh ; '.'
 * 0000000140A04002: jz      loc_140A04892
 * 0000000140A04008: cmp     r10d, 2Fh ; '/'
 * 0000000140A0400C: jz      loc_140A04686
 * 0000000140A04012: cmp     r10d, 30h ; '0'
 * 0000000140A04016: jnz     loc_140A06767
 * 0000000140A0401C: xor     r15d, r15d
 * 0000000140A0401F: cmp     [r13+10h], r15d
 * 0000000140A04023: jz      loc_1409FC31B
 * 0000000140A04029: test    dword ptr [rsi+994h], 4000h
 * 0000000140A04033: jz      short loc_140A04054
 * 0000000140A04035: mov     rcx, [rsi+4E0h]
 * 0000000140A0403C: cli
 * 0000000140A0403D: mov     eax, [rsi+990h]
 * 0000000140A04043: shr     eax, 0Ah
 * 0000000140A04046: and     eax, 1Fh
 * 0000000140A04049: lock bts [rcx], eax
 * 0000000140A0404D: jnb     short loc_140A04054
 * 0000000140A0404F: sti
 * 0000000140A04050: pause
 * 0000000140A04052: jmp     short loc_140A0403C
 * 0000000140A04054: mov     eax, [r13+18h]
 * 0000000140A04058: test    dl, al
 * 0000000140A0405A: jnz     loc_140A042F3
 * 0000000140A04060: mov     r14, [r13+8]
 * 0000000140A04064: mov     r8d, [r13+10h]
 * 0000000140A04068: mov     r9, r14
 * 0000000140A0406B: add     [rsi+828h], r8d
 * 0000000140A04072: mov     rax, r14
 * 0000000140A04075: mov     r10d, [rsi+814h]
 * 0000000140A0407C: mov     r15, [rsi+818h]
 * 0000000140A04083: lea     rcx, [r14+r8]
 * 0000000140A04087: cmp     r14, rcx
 * 0000000140A0408A: jnb     short loc_140A0409D
 * 0000000140A0408C: mov     r11d, 40h ; '@'
 * 0000000140A04092: prefetchnta byte ptr [rax]
 * 0000000140A04095: add     rax, r11
 * 0000000140A04098: cmp     rax, rcx
 * 0000000140A0409B: jb      short loc_140A04092
 * 0000000140A0409D: mov     r11d, r8d
 * 0000000140A040A0: mov     rbx, r15
 * 0000000140A040A3: shr     r11d, 7
 * 0000000140A040A7: mov     r12d, 0FFFFFFFFh
 * 0000000140A040AD: test    r11d, r11d
 * 0000000140A040B0: jz      short loc_140A0411E
 * 0000000140A040B2: mov     rdi, 7010008004002001h
 * 0000000140A040BC: mov     eax, 8
 * 0000000140A040C1: xor     rbx, [r9]
 * 0000000140A040C4: mov     ecx, r10d
 * 0000000140A040C7: rol     rbx, cl
 * 0000000140A040CA: xor     rbx, [r9+8]
 * 0000000140A040CE: add     r9, 10h
 * 0000000140A040D2: rol     rbx, cl
 * 0000000140A040D5: sub     rax, rdx
 * 0000000140A040D8: jnz     short loc_140A040C1
 * 0000000140A040DA: mov     rcx, r9
 * 0000000140A040DD: sub     rcx, r14
 * 0000000140A040E0: xor     rcx, r15
 * 0000000140A040E3: mov     rax, rcx
 * 0000000140A040E6: rol     rax, 11h
 * 0000000140A040EA: xor     rcx, rax
 * 0000000140A040ED: mov     rax, rdi
 * 0000000140A040F0: mul     rcx
 * 0000000140A040F3: xor     r10d, eax
 * 0000000140A040F6: mov     [rbp+0BE0h+var_608], rdx
 * 0000000140A040FD: xor     r10d, edx
 * 0000000140A04100: mov     edx, 1
 * 0000000140A04105: and     r10d, 3Fh
 * 0000000140A04109: cmovz   r10d, edx
 * 0000000140A0410D: add     r11d, r12d
 * 0000000140A04110: jnz     short loc_140A040BC
 * 0000000140A04112: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A04117: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0411E: and     r8d, 7Fh
 * 0000000140A04122: cmp     r8d, 8
 * 0000000140A04126: jb      short loc_140A04145
 * 0000000140A04128: mov     eax, r8d
 * 0000000140A0412B: shr     rax, 3
 * 0000000140A0412F: xor     rbx, [r9]
 * 0000000140A04132: mov     ecx, r10d
 * 0000000140A04135: rol     rbx, cl
 * 0000000140A04138: add     r9, 8
 * 0000000140A0413C: add     r8d, 0FFFFFFF8h
 * 0000000140A04140: sub     rax, rdx
 * 0000000140A04143: jnz     short loc_140A0412F
 * 0000000140A04145: xor     r15d, r15d
 * 0000000140A04148: test    r8d, r8d
 * 0000000140A0414B: jz      short loc_140A04162
 * 0000000140A0414D: movzx   eax, byte ptr [r9]
 * 0000000140A04151: mov     ecx, r10d
 * 0000000140A04154: xor     rbx, rax
 * 0000000140A04157: add     r9, rdx
 * 0000000140A0415A: rol     rbx, cl
 * 0000000140A0415D: add     r8d, r12d
 * 0000000140A04160: jnz     short loc_140A0414D
 * 0000000140A04162: mov     rax, rbx
 * 0000000140A04165: jmp     short loc_140A04169
 * 0000000140A04167: xor     ebx, eax
 * 0000000140A04169: shr     rax, 1Fh
 * 0000000140A0416D: test    rax, rax
 * 0000000140A04170: jnz     short loc_140A04167
 * 0000000140A04172: mov     r8, [rsp+0CE0h+var_C90]
 * 0000000140A04177: btr     ebx, 1Fh
 * 0000000140A0417B: mov     r13d, r15d
 * 0000000140A0417E: cmp     ebx, [r8+14h]
 * 0000000140A04182: jz      loc_140A0464C
 * 0000000140A04188: cmp     [r8], r15d
 * 0000000140A0418B: jnz     short loc_140A04195
 * 0000000140A0418D: cmp     [r8+18h], r15d
 * 0000000140A04191: cmovnz  r13d, edx
 * 0000000140A04195: mov     ecx, [r8+10h]
 * 0000000140A04199: mov     rdx, [r8+8]
 * 0000000140A0419D: test    rcx, rcx
 * 0000000140A041A0: jz      loc_140A0426E
 * 0000000140A041A6: mov     eax, [rsi+994h]
 * 0000000140A041AC: mov     r9d, 40h ; '@'
 * 0000000140A041B2: test    r9b, al
 * 0000000140A041B5: jz      loc_140A0426E
 * 0000000140A041BB: mov     r12, cr8
 * 0000000140A041BF: lea     eax, [r9-3Eh]
 * 0000000140A041C3: mov     cr8, rax
 * 0000000140A041C7: mov     r14, rdx
 * 0000000140A041CA: lea     rax, [rcx-1]
 * 0000000140A041CE: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A041D5: add     rax, rdx
 * 0000000140A041D8: or      rax, 0FFFh
 * 0000000140A041DE: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A041E3: lea     rax, [r14-1]
 * 0000000140A041E7: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A041EE: movzx   r15d, r12b
 * 0000000140A041F2: mov     rax, [rsi+468h]
 * 0000000140A041F9: xor     edx, edx
 * 0000000140A041FB: mov     rcx, r14
 * 0000000140A041FE: call    KeGuardDispatchICall
 * 0000000140A04203: cmp     eax, 0C000022Dh
 * 0000000140A04208: jnz     short loc_140A04231
 * 0000000140A0420A: test    r13d, r13d
 * 0000000140A0420D: jnz     short loc_140A04262
 * 0000000140A0420F: lea     eax, [r13+1]
 * 0000000140A04213: cmp     r12b, al
 * 0000000140A04216: ja      short loc_140A04235
 * 0000000140A04218: movzx   r15d, r12b
 * 0000000140A0421C: mov     cr8, r15
 * 0000000140A04220: mov     al, [r14]
 * 0000000140A04223: mov     rax, cr8
 * 0000000140A04227: lea     eax, [r13+2]
 * 0000000140A0422B: mov     cr8, rax
 * 0000000140A0422F: jmp     short loc_140A041F2
 * 0000000140A04231: test    eax, eax
 * 0000000140A04233: js      short loc_140A04262
 * 0000000140A04235: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A0423C: mov     r11d, 1000h
 * 0000000140A04242: add     rax, r11
 * 0000000140A04245: add     r14, r11
 * 0000000140A04248: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A0424F: cmp     rax, [rsp+0CE0h+var_C70]
 * 0000000140A04254: jnz     short loc_140A041EE
 * 0000000140A04256: mov     cr8, r15
 * 0000000140A0425A: xor     r15d, r15d
 * 0000000140A0425D: jmp     loc_140A0464C
 * 0000000140A04262: mov     cr8, r15
 * 0000000140A04266: mov     r8, [rsp+0CE0h+var_C90]
 * 0000000140A0426B: xor     r15d, r15d
 * 0000000140A0426E: mov     eax, [rsi+8F8h]
 * 0000000140A04274: mov     edx, [r8+14h]
 * 0000000140A04278: test    eax, eax
 * 0000000140A0427A: jnz     short loc_140A04292
 * 0000000140A0427C: mov     rax, [rsi+590h]
 * 0000000140A04283: mov     ecx, ebx
 * 0000000140A04285: xor     rcx, rdx
 * 0000000140A04288: mov     [rax+18h], rcx
 * 0000000140A0428C: mov     eax, [rsi+8F8h]
 * 0000000140A04292: mov     rcx, [r8+8]
 * 0000000140A04296: test    eax, eax
 * 0000000140A04298: jnz     loc_140A0464C
 * 0000000140A0429E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A042A8: add     rax, rsi
 * 0000000140A042AB: mov     [rsi+900h], rax
 * 0000000140A042B2: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A042BC: add     rax, r8
 * 0000000140A042BF: mov     [rsi+908h], rax
 * 0000000140A042C6: movsxd  rax, dword ptr [r8]
 * 0000000140A042C9: mov     [rsi+910h], rax
 * 0000000140A042D0: mov     r12d, 1
 * 0000000140A042D6: mov     [rsi+918h], rcx
 * 0000000140A042DD: xor     edx, edx
 * 0000000140A042DF: mov     rcx, rsi
 * 0000000140A042E2: mov     [rsi+8F8h], r12d
 * 0000000140A042E9: call    $$b8
 * 0000000140A042EE: jmp     loc_140A04652
 * 0000000140A042F3: cmp     [rsi+980h], r15
 * 0000000140A042FA: jz      loc_140A04645
 * 0000000140A04300: mov     edx, [rsi+994h]
 * 0000000140A04306: mov     ecx, edx
 * 0000000140A04308: cmp     [rsi+824h], r15d
 * 0000000140A0430F: jnz     short loc_140A04323
 * 0000000140A04311: shl     ecx, 3
 * 0000000140A04314: xor     ecx, edx
 * 0000000140A04316: and     ecx, 20h
 * 0000000140A04319: xor     ecx, edx
 * 0000000140A0431B: mov     [rsi+994h], ecx
 * 0000000140A04321: jmp     short loc_140A04332
 * 0000000140A04323: mov     eax, edx
 * 0000000140A04325: shr     eax, 3
 * 0000000140A04328: xor     eax, edx
 * 0000000140A0432A: test    al, 4
 * 0000000140A0432C: jnz     loc_140A04645
 * 0000000140A04332: test    cl, 4
 * 0000000140A04335: jz      loc_140A043FE
 * 0000000140A0433B: mov     ecx, [r13+8]
 * 0000000140A0433F: mov     r14d, [r13+10h]
 * 0000000140A04343: and     ecx, 0FFFh
 * 0000000140A04349: mov     rbx, [r13+8]
 * 0000000140A0434D: add     r14, 0FFFh
 * 0000000140A04354: add     r14, rcx
 * 0000000140A04357: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A0435E: shr     r14, 0Ch
 * 0000000140A04362: test    r14, r14
 * 0000000140A04365: jz      loc_140A0464C
 * 0000000140A0436B: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140A04375: mov     r12d, 1
 * 0000000140A0437B: mov     rax, [rsi+2B0h]
 * 0000000140A04382: mov     rcx, rbx
 * 0000000140A04385: sub     r14, r12
 * 0000000140A04388: call    KeGuardDispatchICall
 * 0000000140A0438D: test    al, al
 * 0000000140A0438F: jz      short loc_140A043DC
 * 0000000140A04391: cmp     [rsi+8F8h], r15d
 * 0000000140A04398: jnz     short loc_140A043DC
 * 0000000140A0439A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A043A4: xor     edx, edx
 * 0000000140A043A6: add     rax, rsi
 * 0000000140A043A9: mov     rcx, rsi
 * 0000000140A043AC: mov     [rsi+900h], rax
 * 0000000140A043B3: lea     rax, [rdi+r13]
 * 0000000140A043B7: mov     [rsi+908h], rax
 * 0000000140A043BE: movsxd  rax, dword ptr [r13+0]
 * 0000000140A043C2: mov     [rsi+910h], rax
 * 0000000140A043C9: mov     [rsi+918h], rbx
 * 0000000140A043D0: mov     [rsi+8F8h], r12d
 * 0000000140A043D7: call    $$b8
 * 0000000140A043DC: add     dword ptr [rsi+828h], 100h
 * 0000000140A043E6: add     rbx, 1000h
 * 0000000140A043ED: test    r14, r14
 * 0000000140A043F0: jnz     short loc_140A0437B
 * 0000000140A043F2: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A043F9: jmp     loc_140A04652
 * 0000000140A043FE: mov     r14, [r13+8]
 * 0000000140A04402: mov     r8d, [r13+10h]
 * 0000000140A04406: mov     r9, r14
 * 0000000140A04409: add     [rsi+828h], r8d
 * 0000000140A04410: mov     rax, r14
 * 0000000140A04413: mov     r10d, [rsi+814h]
 * 0000000140A0441A: mov     r15, [rsi+818h]
 * 0000000140A04421: lea     rcx, [r14+r8]
 * 0000000140A04425: cmp     r14, rcx
 * 0000000140A04428: jnb     short loc_140A0443A
 * 0000000140A0442A: mov     edx, 40h ; '@'
 * 0000000140A0442F: prefetchnta byte ptr [rax]
 * 0000000140A04432: add     rax, rdx
 * 0000000140A04435: cmp     rax, rcx
 * 0000000140A04438: jb      short loc_140A0442F
 * 0000000140A0443A: mov     r11d, r8d
 * 0000000140A0443D: mov     rbx, r15
 * 0000000140A04440: shr     r11d, 7
 * 0000000140A04444: mov     r12d, 1
 * 0000000140A0444A: test    r11d, r11d
 * 0000000140A0444D: jz      short loc_140A044BD
 * 0000000140A0444F: mov     rdi, 7010008004002001h
 * 0000000140A04459: mov     eax, 8
 * 0000000140A0445E: xor     rbx, [r9]
 * 0000000140A04461: mov     ecx, r10d
 * 0000000140A04464: rol     rbx, cl
 * 0000000140A04467: xor     rbx, [r9+8]
 * 0000000140A0446B: add     r9, 10h
 * 0000000140A0446F: rol     rbx, cl
 * 0000000140A04472: sub     rax, r12
 * 0000000140A04475: jnz     short loc_140A0445E
 * 0000000140A04477: mov     rcx, r9
 * 0000000140A0447A: sub     rcx, r14
 * 0000000140A0447D: xor     rcx, r15
 * 0000000140A04480: mov     rax, rcx
 * 0000000140A04483: rol     rax, 11h
 * 0000000140A04487: xor     rcx, rax
 * 0000000140A0448A: mov     rax, rdi
 * 0000000140A0448D: mul     rcx
 * 0000000140A04490: xor     r10d, eax
 * 0000000140A04493: mov     [rbp+0BE0h+var_600], rdx
 * 0000000140A0449A: xor     r10d, edx
 * 0000000140A0449D: mov     edx, 0FFFFFFFFh
 * 0000000140A044A2: and     r10d, 3Fh
 * 0000000140A044A6: cmovz   r10d, r12d
 * 0000000140A044AA: add     r11d, edx
 * 0000000140A044AD: jnz     short loc_140A04459
 * 0000000140A044AF: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A044B4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A044BB: jmp     short loc_140A044C2
 * 0000000140A044BD: mov     edx, 0FFFFFFFFh
 * 0000000140A044C2: and     r8d, 7Fh
 * 0000000140A044C6: cmp     r8d, 8
 * 0000000140A044CA: jb      short loc_140A044E9
 * 0000000140A044CC: mov     eax, r8d
 * 0000000140A044CF: shr     rax, 3
 * 0000000140A044D3: xor     rbx, [r9]
 * 0000000140A044D6: mov     ecx, r10d
 * 0000000140A044D9: rol     rbx, cl
 * 0000000140A044DC: add     r9, 8
 * 0000000140A044E0: add     r8d, 0FFFFFFF8h
 * 0000000140A044E4: sub     rax, r12
 * 0000000140A044E7: jnz     short loc_140A044D3
 * 0000000140A044E9: xor     r15d, r15d
 * 0000000140A044EC: test    r8d, r8d
 * 0000000140A044EF: jz      short loc_140A04506
 * 0000000140A044F1: movzx   eax, byte ptr [r9]
 * 0000000140A044F5: mov     ecx, r10d
 * 0000000140A044F8: xor     rbx, rax
 * 0000000140A044FB: add     r9, r12
 * 0000000140A044FE: rol     rbx, cl
 * 0000000140A04501: add     r8d, edx
 * 0000000140A04504: jnz     short loc_140A044F1
 * 0000000140A04506: mov     rax, rbx
 * 0000000140A04509: jmp     short loc_140A0450D
 * 0000000140A0450B: xor     ebx, eax
 * 0000000140A0450D: shr     rax, 1Fh
 * 0000000140A04511: test    rax, rax
 * 0000000140A04514: jnz     short loc_140A0450B
 * 0000000140A04516: mov     r8d, [r13+14h]
 * 0000000140A0451A: btr     ebx, 1Fh
 * 0000000140A0451E: cmp     ebx, r8d
 * 0000000140A04521: jz      loc_140A0464C
 * 0000000140A04527: mov     ecx, [r13+10h]
 * 0000000140A0452B: mov     rdx, [r13+8]
 * 0000000140A0452F: test    rcx, rcx
 * 0000000140A04532: jz      loc_140A045E9
 * 0000000140A04538: mov     eax, [rsi+994h]
 * 0000000140A0453E: mov     r9d, 40h ; '@'
 * 0000000140A04544: test    r9b, al
 * 0000000140A04547: jz      loc_140A045E9
 * 0000000140A0454D: mov     r12, cr8
 * 0000000140A04551: lea     eax, [r9-3Eh]
 * 0000000140A04555: mov     cr8, rax
 * 0000000140A04559: mov     r14, rdx
 * 0000000140A0455C: lea     rax, [rcx-1]
 * 0000000140A04560: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A04567: add     rax, rdx
 * 0000000140A0456A: or      rax, 0FFFh
 * 0000000140A04570: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A04577: lea     r13, [r14-1]
 * 0000000140A0457B: movzx   r15d, r12b
 * 0000000140A0457F: mov     rax, [rsi+468h]
 * 0000000140A04586: xor     edx, edx
 * 0000000140A04588: mov     rcx, r14
 * 0000000140A0458B: call    KeGuardDispatchICall
 * 0000000140A04590: cmp     eax, 0C000022Dh
 * 0000000140A04595: jnz     short loc_140A045BB
 * 0000000140A04597: mov     eax, 1
 * 0000000140A0459C: cmp     r12b, al
 * 0000000140A0459F: ja      short loc_140A045BF
 * 0000000140A045A1: movzx   r15d, r12b
 * 0000000140A045A5: mov     cr8, r15
 * 0000000140A045A9: mov     al, [r14]
 * 0000000140A045AC: mov     rax, cr8
 * 0000000140A045B0: mov     eax, 2
 * 0000000140A045B5: mov     cr8, rax
 * 0000000140A045B9: jmp     short loc_140A0457F
 * 0000000140A045BB: test    eax, eax
 * 0000000140A045BD: js      short loc_140A045D9
 * 0000000140A045BF: mov     r11d, 1000h
 * 0000000140A045C5: add     r14, r11
 * 0000000140A045C8: add     r13, r11
 * 0000000140A045CB: cmp     r13, [rbp+0BE0h+arg_8]
 * 0000000140A045D2: jnz     short loc_140A0457B
 * 0000000140A045D4: jmp     loc_140A04256
 * 0000000140A045D9: mov     cr8, r15
 * 0000000140A045DD: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A045E2: xor     r15d, r15d
 * 0000000140A045E5: mov     r8d, [r13+14h]
 * 0000000140A045E9: mov     eax, [rsi+8F8h]
 * 0000000140A045EF: test    eax, eax
 * 0000000140A045F1: jnz     short loc_140A0460C
 * 0000000140A045F3: mov     eax, r8d
 * 0000000140A045F6: mov     ecx, ebx
 * 0000000140A045F8: xor     rcx, rax
 * 0000000140A045FB: mov     rax, [rsi+590h]
 * 0000000140A04602: mov     [rax+18h], rcx
 * 0000000140A04606: mov     eax, [rsi+8F8h]
 * 0000000140A0460C: mov     rcx, [r13+8]
 * 0000000140A04610: test    eax, eax
 * 0000000140A04612: jnz     short loc_140A0464C
 * 0000000140A04614: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0461E: add     rax, rsi
 * 0000000140A04621: mov     [rsi+900h], rax
 * 0000000140A04628: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A04632: add     rax, r13
 * 0000000140A04635: mov     [rsi+908h], rax
 * 0000000140A0463C: movsxd  rax, dword ptr [r13+0]
 * 0000000140A04640: jmp     loc_140A042C9
 * 0000000140A04645: mov     [rsi+824h], r15d
 * 0000000140A0464C: mov     r12d, 1
 * 0000000140A04652: test    dword ptr [rsi+994h], 4000h
 * 0000000140A0465C: jz      loc_1409FC31B
 * 0000000140A04662: mov     ecx, [rsi+990h]
 * 0000000140A04668: mov     edx, r12d
 * 0000000140A0466B: mov     r8, [rsi+4E0h]
 * 0000000140A04672: shr     ecx, 0Ah
 * 0000000140A04675: and     ecx, 1Fh
 * 0000000140A04678: shl     edx, cl
 * 0000000140A0467A: not     edx
 * 0000000140A0467C: lock and [r8], edx
 * 0000000140A04680: sti
 * 0000000140A04681: jmp     loc_1409FC31B
 * 0000000140A04686: mov     rcx, gs:20h
 * 0000000140A0468F: mov     rax, [rsi+648h]
 * 0000000140A04696: mov     rcx, [rax+rcx]
 * 0000000140A0469A: mov     rax, [rsi+688h]
 * 0000000140A046A1: add     rcx, [rsi+6A8h]
 * 0000000140A046A8: mov     rcx, [rcx+rax]
 * 0000000140A046AC: mov     [rbp+0BE0h+var_BC0], rcx
 * 0000000140A046B0: mov     rax, [rsi+490h]
 * 0000000140A046B7: call    KeGuardDispatchICall
 * 0000000140A046BC: mov     r9d, 0FFFFFFFFh
 * 0000000140A046C2: xor     r15d, r15d
 * 0000000140A046C5: mov     r14, rax
 * 0000000140A046C8: cmp     rax, r9
 * 0000000140A046CB: jnz     loc_140A04802
 * 0000000140A046D1: mov     [rbp+0BE0h+var_BC0], r15
 * 0000000140A046D5: mov     rcx, [rsi+988h]
 * 0000000140A046DC: test    rcx, rcx
 * 0000000140A046DF: jz      short loc_140A04704
 * 0000000140A046E1: mov     rax, [rsi+480h]
 * 0000000140A046E8: lea     rdx, [rbp+0BE0h+var_BC0]
 * 0000000140A046EC: call    KeGuardDispatchICall
 * 0000000140A046F1: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A046F5: test    eax, eax
 * 0000000140A046F7: cmovs   rcx, r15
 * 0000000140A046FB: mov     [rbp+0BE0h+var_BC0], rcx
 * 0000000140A046FF: test    rcx, rcx
 * 0000000140A04702: jnz     short loc_140A04716
 * 0000000140A04704: mov     rax, [rsi+3C0h]
 * 0000000140A0470B: xor     ecx, ecx
 * 0000000140A0470D: call    KeGuardDispatchICall
 * 0000000140A04712: mov     [rbp+0BE0h+var_BC0], rax
 * 0000000140A04716: mov     [rsi+988h], r15
 * 0000000140A0471D: mov     ebx, r15d
 * 0000000140A04720: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A04724: test    rcx, rcx
 * 0000000140A04727: jz      loc_140A047F4
 * 0000000140A0472D: mov     r12d, 1
 * 0000000140A04733: mov     rax, [rsi+3A0h]
 * 0000000140A0473A: add     ebx, r12d
 * 0000000140A0473D: call    KeGuardDispatchICall
 * 0000000140A04742: test    eax, eax
 * 0000000140A04744: js      short loc_140A047A1
 * 0000000140A04746: mov     rax, [rsi+438h]
 * 0000000140A0474D: lea     rdx, [rbp+0BE0h+var_70]
 * 0000000140A04754: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A04758: call    KeGuardDispatchICall
 * 0000000140A0475D: mov     rax, [rsi+490h]
 * 0000000140A04764: call    KeGuardDispatchICall
 * 0000000140A04769: mov     r14, rax
 * 0000000140A0476C: lea     rcx, [rbp+0BE0h+var_70]
 * 0000000140A04773: mov     rax, [rsi+440h]
 * 0000000140A0477A: call    KeGuardDispatchICall
 * 0000000140A0477F: mov     rax, [rsi+3A8h]
 * 0000000140A04786: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A0478A: call    KeGuardDispatchICall
 * 0000000140A0478F: mov     eax, 0FFFFFFFFh
 * 0000000140A04794: cmp     r14, rax
 * 0000000140A04797: jnz     short loc_140A047C2
 * 0000000140A04799: cmp     ebx, 100h
 * 0000000140A0479F: ja      short loc_140A047C2
 * 0000000140A047A1: mov     rax, [rsi+3C0h]
 * 0000000140A047A8: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A047AC: call    KeGuardDispatchICall
 * 0000000140A047B1: mov     [rbp+0BE0h+var_BC0], rax
 * 0000000140A047B5: mov     rcx, rax
 * 0000000140A047B8: test    rax, rax
 * 0000000140A047BB: jz      short loc_140A047F4
 * 0000000140A047BD: jmp     loc_140A04733
 * 0000000140A047C2: mov     rax, [rsi+488h]
 * 0000000140A047C9: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A047CD: call    KeGuardDispatchICall
 * 0000000140A047D2: mov     [rsi+988h], rax
 * 0000000140A047D9: mov     rax, [rsi+1E0h]
 * 0000000140A047E0: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A047E4: call    KeGuardDispatchICall
 * 0000000140A047E9: mov     r9d, 0FFFFFFFFh
 * 0000000140A047EF: cmp     r14, r9
 * 0000000140A047F2: jnz     short loc_140A04808
 * 0000000140A047F4: shl     ebx, 0Ch
 * 0000000140A047F7: add     [rsi+828h], ebx
 * 0000000140A047FD: jmp     loc_1409FC31B
 * 0000000140A04802: mov     r12d, 1
 * 0000000140A04808: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A04812: jz      short loc_140A04857
 * 0000000140A04814: mov     rcx, [rsi+0A80h]
 * 0000000140A0481B: mov     edx, 30h ; '0'
 * 0000000140A04820: lea     r8d, [rdx-2Ah]
 * 0000000140A04824: mov     rax, [r13+0]
 * 0000000140A04828: add     edx, 0FFFFFFF8h
 * 0000000140A0482B: mov     [rcx], rax
 * 0000000140A0482E: add     r13, 8
 * 0000000140A04832: add     rcx, 8
 * 0000000140A04836: sub     r8, r12
 * 0000000140A04839: jnz     short loc_140A04824
 * 0000000140A0483B: test    edx, edx
 * 0000000140A0483D: jz      short loc_140A04850
 * 0000000140A0483F: mov     al, [r13+0]
 * 0000000140A04843: add     r13, r12
 * 0000000140A04846: mov     [rcx], al
 * 0000000140A04848: add     rcx, r12
 * 0000000140A0484B: add     edx, r9d
 * 0000000140A0484E: jnz     short loc_140A0483F
 * 0000000140A04850: mov     r13, [rsi+0A80h]
 * 0000000140A04857: mov     [r13+18h], r14
 * 0000000140A0485B: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A0485F: cmp     [rsi+8F8h], r15d
 * 0000000140A04866: jnz     loc_1409FC31B
 * 0000000140A0486C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A04876: add     rax, rsi
 * 0000000140A04879: mov     [rsi+900h], rax
 * 0000000140A04880: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0488A: add     rax, r13
 * 0000000140A0488D: jmp     loc_140A021E4
 * 0000000140A04892: mov     eax, [rsi+830h]
 * 0000000140A04898: test    dl, al
 * 0000000140A0489A: jnz     loc_1409FC318
 * 0000000140A048A0: mov     r15, [rsi+548h]
 * 0000000140A048A7: xor     eax, eax
 * 0000000140A048A9: mov     r14d, eax
 * 0000000140A048AC: mov     rax, [rsi+178h]
 * 0000000140A048B3: call    KeGuardDispatchICall
 * 0000000140A048B8: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A048C2: jnz     short loc_140A048DC
 * 0000000140A048C4: mov     ecx, [rsi+950h]
 * 0000000140A048CA: cmp     ecx, 7
 * 0000000140A048CD: jnb     short loc_140A048DC
 * 0000000140A048CF: mov     r12d, 1
 * 0000000140A048D5: mov     ebx, r12d
 * 0000000140A048D8: shl     bl, cl
 * 0000000140A048DA: jmp     short loc_140A048F9
 * 0000000140A048DC: mov     rax, [rsi+128h]
 * 0000000140A048E3: xor     edx, edx
 * 0000000140A048E5: mov     rcx, [rsi+0A00h]
 * 0000000140A048EC: call    KeGuardDispatchICall
 * 0000000140A048F1: mov     bl, 80h
 * 0000000140A048F3: mov     r12d, 1
 * 0000000140A048F9: mov     rax, [rsi+138h]
 * 0000000140A04900: xor     edx, edx
 * 0000000140A04902: mov     rcx, r15
 * 0000000140A04905: call    KeGuardDispatchICall
 * 0000000140A0490A: cmp     bl, 80h
 * 0000000140A0490D: jz      short loc_140A04942
 * 0000000140A0490F: mov     r8, [rsi+520h]
 * 0000000140A04916: mov     rdx, [r8]
 * 0000000140A04919: cmp     rdx, r8
 * 0000000140A0491C: jz      short loc_140A04957
 * 0000000140A0491E: not     bl
 * 0000000140A04920: mov     rax, [rsi+6B8h]
 * 0000000140A04927: mov     rcx, rdx
 * 0000000140A0492A: sub     rcx, [rsi+6D0h]
 * 0000000140A04931: lock and [rcx+rax], bl
 * 0000000140A04935: mov     rdx, [rdx]
 * 0000000140A04938: add     r14d, r12d
 * 0000000140A0493B: cmp     rdx, r8
 * 0000000140A0493E: jnz     short loc_140A04920
 * 0000000140A04940: jmp     short loc_140A04957
 * 0000000140A04942: mov     rax, [rsi+130h]
 * 0000000140A04949: xor     edx, edx
 * 0000000140A0494B: mov     rcx, [rsi+0A00h]
 * 0000000140A04952: call    KeGuardDispatchICall
 * 0000000140A04957: mov     rcx, [rsi+548h]
 * 0000000140A0495E: xor     edx, edx
 * 0000000140A04960: mov     rax, [rsi+140h]
 * 0000000140A04967: call    KeGuardDispatchICall
 * 0000000140A0496C: mov     rax, [rsi+180h]
 * 0000000140A04973: call    KeGuardDispatchICall
 * 0000000140A04978: shl     r14d, 7
 * 0000000140A0497C: add     [rsi+828h], r14d
 * 0000000140A04983: jmp     loc_1409FC318
 * 0000000140A04988: mov     ecx, [r13+20h]
 * 0000000140A0498C: mov     edx, 2
 * 0000000140A04991: xor     r15d, r15d
 * 0000000140A04994: mov     [rbp+0BE0h+var_C48], rsi
 * 0000000140A04998: test    dl, cl
 * 0000000140A0499A: jz      loc_140A04E1A
 * 0000000140A049A0: cmp     [rsi+980h], r15
 * 0000000140A049A7: jz      loc_140A0344D
 * 0000000140A049AD: mov     eax, [rsi+994h]
 * 0000000140A049B3: test    al, 4
 * 0000000140A049B5: jnz     loc_140A0344D
 * 0000000140A049BB: test    dl, cl
 * 0000000140A049BD: jz      loc_140A04E1A
 * 0000000140A049C3: mov     edx, eax
 * 0000000140A049C5: mov     ecx, eax
 * 0000000140A049C7: cmp     [rsi+824h], r15d
 * 0000000140A049CE: jnz     short loc_140A049E2
 * 0000000140A049D0: shl     ecx, 3
 * 0000000140A049D3: xor     ecx, eax
 * 0000000140A049D5: and     ecx, 20h
 * 0000000140A049D8: xor     ecx, eax
 * 0000000140A049DA: mov     [rsi+994h], ecx
 * 0000000140A049E0: jmp     short loc_140A049F1
 * 0000000140A049E2: mov     eax, edx
 * 0000000140A049E4: shr     eax, 3
 * 0000000140A049E7: xor     eax, edx
 * 0000000140A049E9: test    al, 4
 * 0000000140A049EB: jnz     loc_140A0344D
 * 0000000140A049F1: cmp     [rsi+980h], r15
 * 0000000140A049F8: jz      loc_140A04E0E
 * 0000000140A049FE: mov     edx, ecx
 * 0000000140A04A00: cmp     [rsi+824h], r15d
 * 0000000140A04A07: jnz     short loc_140A04A1B
 * 0000000140A04A09: shl     edx, 3
 * 0000000140A04A0C: xor     edx, ecx
 * 0000000140A04A0E: and     edx, 20h
 * 0000000140A04A11: xor     edx, ecx
 * 0000000140A04A13: mov     [rsi+994h], edx
 * 0000000140A04A19: jmp     short loc_140A04A2A
 * 0000000140A04A1B: mov     eax, ecx
 * 0000000140A04A1D: shr     eax, 3
 * 0000000140A04A20: xor     eax, ecx
 * 0000000140A04A22: test    al, 4
 * 0000000140A04A24: jnz     loc_140A04E0E
 * 0000000140A04A2A: test    dl, 4
 * 0000000140A04A2D: jz      loc_140A04AF7
 * 0000000140A04A33: mov     r14d, [r13+8]
 * 0000000140A04A37: mov     ecx, [r13+10h]
 * 0000000140A04A3B: and     r14d, 0FFFh
 * 0000000140A04A42: mov     rbx, [r13+8]
 * 0000000140A04A46: add     r14, 0FFFh
 * 0000000140A04A4D: add     r14, rcx
 * 0000000140A04A50: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A04A57: shr     r14, 0Ch
 * 0000000140A04A5B: test    r14, r14
 * 0000000140A04A5E: jz      loc_140A04CE4
 * 0000000140A04A64: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140A04A6E: mov     r12d, 1
 * 0000000140A04A74: mov     rax, [rsi+2B0h]
 * 0000000140A04A7B: mov     rcx, rbx
 * 0000000140A04A7E: sub     r14, r12
 * 0000000140A04A81: call    KeGuardDispatchICall
 * 0000000140A04A86: test    al, al
 * 0000000140A04A88: jz      short loc_140A04AD5
 * 0000000140A04A8A: cmp     [rsi+8F8h], r15d
 * 0000000140A04A91: jnz     short loc_140A04AD5
 * 0000000140A04A93: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A04A9D: xor     edx, edx
 * 0000000140A04A9F: add     rax, rsi
 * 0000000140A04AA2: mov     rcx, rsi
 * 0000000140A04AA5: mov     [rsi+900h], rax
 * 0000000140A04AAC: lea     rax, [rdi+r13]
 * 0000000140A04AB0: mov     [rsi+908h], rax
 * 0000000140A04AB7: movsxd  rax, dword ptr [r13+0]
 * 0000000140A04ABB: mov     [rsi+910h], rax
 * 0000000140A04AC2: mov     [rsi+918h], rbx
 * 0000000140A04AC9: mov     [rsi+8F8h], r12d
 * 0000000140A04AD0: call    $$b8
 * 0000000140A04AD5: add     dword ptr [rsi+828h], 100h
 * 0000000140A04ADF: add     rbx, 1000h
 * 0000000140A04AE6: test    r14, r14
 * 0000000140A04AE9: jnz     short loc_140A04A74
 * 0000000140A04AEB: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A04AF2: jmp     loc_140A04CE4
 * 0000000140A04AF7: mov     r14, [r13+8]
 * 0000000140A04AFB: mov     r8d, [r13+10h]
 * 0000000140A04AFF: mov     r9, r14
 * 0000000140A04B02: add     [rsi+828h], r8d
 * 0000000140A04B09: mov     rax, r14
 * 0000000140A04B0C: mov     r11d, [rsi+814h]
 * 0000000140A04B13: mov     r15, [rsi+818h]
 * 0000000140A04B1A: lea     rcx, [r14+r8]
 * 0000000140A04B1E: cmp     r14, rcx
 * 0000000140A04B21: jnb     short loc_140A04B33
 * 0000000140A04B23: mov     edx, 40h ; '@'
 * 0000000140A04B28: prefetchnta byte ptr [rax]
 * 0000000140A04B2B: add     rax, rdx
 * 0000000140A04B2E: cmp     rax, rcx
 * 0000000140A04B31: jb      short loc_140A04B28
 * 0000000140A04B33: mov     r10d, r8d
 * 0000000140A04B36: mov     rbx, r15
 * 0000000140A04B39: shr     r10d, 7
 * 0000000140A04B3D: test    r10d, r10d
 * 0000000140A04B40: jz      short loc_140A04BB3
 * 0000000140A04B42: mov     rsi, 7010008004002001h
 * 0000000140A04B4C: mov     r12d, 1
 * 0000000140A04B52: mov     edx, 8
 * 0000000140A04B57: mov     rax, [r9]
 * 0000000140A04B5A: mov     ecx, r11d
 * 0000000140A04B5D: xor     rax, rbx
 * 0000000140A04B60: mov     rbx, [r9+8]
 * 0000000140A04B64: rol     rax, cl
 * 0000000140A04B67: add     r9, 10h
 * 0000000140A04B6B: xor     rbx, rax
 * 0000000140A04B6E: rol     rbx, cl
 * 0000000140A04B71: sub     rdx, r12
 * 0000000140A04B74: jnz     short loc_140A04B57
 * 0000000140A04B76: mov     rcx, r9
 * 0000000140A04B79: sub     rcx, r14
 * 0000000140A04B7C: xor     rcx, r15
 * 0000000140A04B7F: mov     rax, rcx
 * 0000000140A04B82: rol     rax, 11h
 * 0000000140A04B86: xor     rcx, rax
 * 0000000140A04B89: mov     rax, rsi
 * 0000000140A04B8C: mul     rcx
 * 0000000140A04B8F: xor     r11d, eax
 * 0000000140A04B92: mov     [rbp+0BE0h+var_5F8], rdx
 * 0000000140A04B99: xor     r11d, edx
 * 0000000140A04B9C: mov     eax, 0FFFFFFFFh
 * 0000000140A04BA1: and     r11d, 3Fh
 * 0000000140A04BA5: cmovz   r11d, r12d
 * 0000000140A04BA9: add     r10d, eax
 * 0000000140A04BAC: jnz     short loc_140A04B52
 * 0000000140A04BAE: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A04BB3: and     r8d, 7Fh
 * 0000000140A04BB7: mov     r10d, 1
 * 0000000140A04BBD: cmp     r8d, 8
 * 0000000140A04BC1: jb      short loc_140A04BE0
 * 0000000140A04BC3: mov     edx, r8d
 * 0000000140A04BC6: shr     rdx, 3
 * 0000000140A04BCA: xor     rbx, [r9]
 * 0000000140A04BCD: mov     ecx, r11d
 * 0000000140A04BD0: rol     rbx, cl
 * 0000000140A04BD3: add     r9, 8
 * 0000000140A04BD7: add     r8d, 0FFFFFFF8h
 * 0000000140A04BDB: sub     rdx, r10
 * 0000000140A04BDE: jnz     short loc_140A04BCA
 * 0000000140A04BE0: xor     r15d, r15d
 * 0000000140A04BE3: test    r8d, r8d
 * 0000000140A04BE6: jz      short loc_140A04C06
 * 0000000140A04BE8: mov     r15d, 0FFFFFFFFh
 * 0000000140A04BEE: movzx   eax, byte ptr [r9]
 * 0000000140A04BF2: mov     ecx, r11d
 * 0000000140A04BF5: xor     rbx, rax
 * 0000000140A04BF8: add     r9, r10
 * 0000000140A04BFB: rol     rbx, cl
 * 0000000140A04BFE: add     r8d, r15d
 * 0000000140A04C01: jnz     short loc_140A04BEE
 * 0000000140A04C03: xor     r15d, r15d
 * 0000000140A04C06: mov     rax, rbx
 * 0000000140A04C09: jmp     short loc_140A04C0D
 * 0000000140A04C0B: xor     ebx, eax
 * 0000000140A04C0D: shr     rax, 1Fh
 * 0000000140A04C11: test    rax, rax
 * 0000000140A04C14: jnz     short loc_140A04C0B
 * 0000000140A04C16: mov     r8d, [r13+14h]
 * 0000000140A04C1A: btr     ebx, 1Fh
 * 0000000140A04C1E: cmp     ebx, r8d
 * 0000000140A04C21: jz      loc_140A04CE4
 * 0000000140A04C27: mov     ecx, [r13+10h]
 * 0000000140A04C2B: mov     rdx, [r13+8]
 * 0000000140A04C2F: test    rcx, rcx
 * 0000000140A04C32: jz      loc_140A04D8B
 * 0000000140A04C38: mov     eax, [rsi+994h]
 * 0000000140A04C3E: mov     r9d, 40h ; '@'
 * 0000000140A04C44: test    r9b, al
 * 0000000140A04C47: jz      loc_140A04D8B
 * 0000000140A04C4D: mov     r12, cr8
 * 0000000140A04C51: lea     eax, [r9-3Eh]
 * 0000000140A04C55: mov     cr8, rax
 * 0000000140A04C59: mov     r14, rdx
 * 0000000140A04C5C: lea     rax, [rcx-1]
 * 0000000140A04C60: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A04C67: add     rax, rdx
 * 0000000140A04C6A: or      rax, 0FFFh
 * 0000000140A04C70: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A04C77: lea     r13, [r14-1]
 * 0000000140A04C7B: movzx   r15d, r12b
 * 0000000140A04C7F: mov     rax, [rsi+468h]
 * 0000000140A04C86: xor     edx, edx
 * 0000000140A04C88: mov     rcx, r14
 * 0000000140A04C8B: call    KeGuardDispatchICall
 * 0000000140A04C90: cmp     eax, 0C000022Dh
 * 0000000140A04C95: jnz     short loc_140A04CBB
 * 0000000140A04C97: mov     eax, 1
 * 0000000140A04C9C: cmp     r12b, al
 * 0000000140A04C9F: ja      short loc_140A04CC3
 * 0000000140A04CA1: movzx   r15d, r12b
 * 0000000140A04CA5: mov     cr8, r15
 * 0000000140A04CA9: mov     al, [r14]
 * 0000000140A04CAC: mov     rax, cr8
 * 0000000140A04CB0: mov     eax, 2
 * 0000000140A04CB5: mov     cr8, rax
 * 0000000140A04CB9: jmp     short loc_140A04C7F
 * 0000000140A04CBB: test    eax, eax
 * 0000000140A04CBD: js      loc_140A04D7B
 * 0000000140A04CC3: mov     r11d, 1000h
 * 0000000140A04CC9: add     r14, r11
 * 0000000140A04CCC: add     r13, r11
 * 0000000140A04CCF: cmp     r13, [rbp+0BE0h+arg_8]
 * 0000000140A04CD6: jnz     short loc_140A04C7B
 * 0000000140A04CD8: mov     cr8, r15
 * 0000000140A04CDC: xor     r15d, r15d
 * 0000000140A04CDF: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A04CE4: mov     eax, [r13+20h]
 * 0000000140A04CE8: mov     r14d, 1
 * 0000000140A04CEE: test    r14b, al
 * 0000000140A04CF1: jz      loc_1409FC31B
 * 0000000140A04CF7: mov     rbx, [r13+18h]
 * 0000000140A04CFB: mov     rax, [rsi+1F8h]
 * 0000000140A04D02: mov     rcx, rbx
 * 0000000140A04D05: mov     [rsp+0CE0h+var_C88], rbx
 * 0000000140A04D0A: call    KeGuardDispatchICall
 * 0000000140A04D0F: movzx   r15d, word ptr [rax+14h]
 * 0000000140A04D14: add     r15, 18h
 * 0000000140A04D18: add     r15, rax
 * 0000000140A04D1B: movzx   eax, word ptr [rax+6]
 * 0000000140A04D1F: lea     rcx, [rax+rax*4]
 * 0000000140A04D23: lea     rax, [r15+rcx*8]
 * 0000000140A04D27: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A04D2C: cmp     r15, rax
 * 0000000140A04D2F: jz      loc_1409FC318
 * 0000000140A04D35: mov     r12d, [rsi+824h]
 * 0000000140A04D3C: xor     edx, edx
 * 0000000140A04D3E: test    r12d, r12d
 * 0000000140A04D41: jnz     short loc_140A04D53
 * 0000000140A04D43: mov     dword ptr [rsi+824h], 1000h
 * 0000000140A04D4D: mov     r12d, 1000h
 * 0000000140A04D53: mov     eax, r12d
 * 0000000140A04D56: cmp     rbx, [rsi+5E8h]
 * 0000000140A04D5D: jz      loc_140A0503F
 * 0000000140A04D63: cmp     rbx, [rsi+5F0h]
 * 0000000140A04D6A: jz      loc_140A0503F
 * 0000000140A04D70: mov     dword ptr [rbp+0BE0h+arg_8], edx
 * 0000000140A04D76: jmp     loc_140A05049
 * 0000000140A04D7B: mov     cr8, r15
 * 0000000140A04D7F: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A04D84: xor     r15d, r15d
 * 0000000140A04D87: mov     r8d, [r13+14h]
 * 0000000140A04D8B: mov     eax, [rsi+8F8h]
 * 0000000140A04D91: test    eax, eax
 * 0000000140A04D93: jnz     short loc_140A04DAE
 * 0000000140A04D95: mov     ecx, r8d
 * 0000000140A04D98: mov     eax, ebx
 * 0000000140A04D9A: xor     rcx, rax
 * 0000000140A04D9D: mov     rax, [rsi+590h]
 * 0000000140A04DA4: mov     [rax+18h], rcx
 * 0000000140A04DA8: mov     eax, [rsi+8F8h]
 * 0000000140A04DAE: mov     rcx, [r13+8]
 * 0000000140A04DB2: test    eax, eax
 * 0000000140A04DB4: jnz     loc_140A04CE4
 * 0000000140A04DBA: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A04DC4: xor     edx, edx
 * 0000000140A04DC6: add     rax, rsi
 * 0000000140A04DC9: mov     [rsi+900h], rax
 * 0000000140A04DD0: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A04DDA: add     rax, r13
 * 0000000140A04DDD: mov     [rsi+908h], rax
 * 0000000140A04DE4: movsxd  rax, dword ptr [r13+0]
 * 0000000140A04DE8: mov     [rsi+910h], rax
 * 0000000140A04DEF: mov     eax, 1
 * 0000000140A04DF4: mov     [rsi+918h], rcx
 * 0000000140A04DFB: mov     rcx, rsi
 * 0000000140A04DFE: mov     [rsi+8F8h], eax
 * 0000000140A04E04: call    $$b8
 * 0000000140A04E09: jmp     loc_140A04CE4
 * 0000000140A04E0E: mov     [rsi+824h], r15d
 * 0000000140A04E15: jmp     loc_140A04CE4
 * 0000000140A04E1A: mov     r14, [r13+8]
 * 0000000140A04E1E: mov     r8d, [r13+10h]
 * 0000000140A04E22: mov     r9, r14
 * 0000000140A04E25: add     [rsi+828h], r8d
 * 0000000140A04E2C: mov     rax, r14
 * 0000000140A04E2F: mov     r10d, [rsi+814h]
 * 0000000140A04E36: mov     r15, [rsi+818h]
 * 0000000140A04E3D: lea     rcx, [r14+r8]
 * 0000000140A04E41: cmp     r14, rcx
 * 0000000140A04E44: jnb     short loc_140A04E56
 * 0000000140A04E46: mov     edx, 40h ; '@'
 * 0000000140A04E4B: prefetchnta byte ptr [rax]
 * 0000000140A04E4E: add     rax, rdx
 * 0000000140A04E51: cmp     rax, rcx
 * 0000000140A04E54: jb      short loc_140A04E4B
 * 0000000140A04E56: mov     r11d, r8d
 * 0000000140A04E59: mov     rbx, r15
 * 0000000140A04E5C: shr     r11d, 7
 * 0000000140A04E60: mov     edx, 1
 * 0000000140A04E65: mov     r12d, 0FFFFFFFFh
 * 0000000140A04E6B: test    r11d, r11d
 * 0000000140A04E6E: jz      short loc_140A04EDC
 * 0000000140A04E70: mov     rdi, 7010008004002001h
 * 0000000140A04E7A: mov     eax, 8
 * 0000000140A04E7F: xor     rbx, [r9]
 * 0000000140A04E82: mov     ecx, r10d
 * 0000000140A04E85: rol     rbx, cl
 * 0000000140A04E88: xor     rbx, [r9+8]
 * 0000000140A04E8C: add     r9, 10h
 * 0000000140A04E90: rol     rbx, cl
 * 0000000140A04E93: sub     rax, rdx
 * 0000000140A04E96: jnz     short loc_140A04E7F
 * 0000000140A04E98: mov     rcx, r9
 * 0000000140A04E9B: sub     rcx, r14
 * 0000000140A04E9E: xor     rcx, r15
 * 0000000140A04EA1: mov     rax, rcx
 * 0000000140A04EA4: rol     rax, 11h
 * 0000000140A04EA8: xor     rcx, rax
 * 0000000140A04EAB: mov     rax, rdi
 * 0000000140A04EAE: mul     rcx
 * 0000000140A04EB1: xor     r10d, eax
 * 0000000140A04EB4: mov     [rbp+0BE0h+var_5F0], rdx
 * 0000000140A04EBB: xor     r10d, edx
 * 0000000140A04EBE: mov     edx, 1
 * 0000000140A04EC3: and     r10d, 3Fh
 * 0000000140A04EC7: cmovz   r10d, edx
 * 0000000140A04ECB: add     r11d, r12d
 * 0000000140A04ECE: jnz     short loc_140A04E7A
 * 0000000140A04ED0: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A04ED5: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A04EDC: and     r8d, 7Fh
 * 0000000140A04EE0: cmp     r8d, 8
 * 0000000140A04EE4: jb      short loc_140A04F03
 * 0000000140A04EE6: mov     eax, r8d
 * 0000000140A04EE9: shr     rax, 3
 * 0000000140A04EED: xor     rbx, [r9]
 * 0000000140A04EF0: mov     ecx, r10d
 * 0000000140A04EF3: rol     rbx, cl
 * 0000000140A04EF6: add     r9, 8
 * 0000000140A04EFA: add     r8d, 0FFFFFFF8h
 * 0000000140A04EFE: sub     rax, rdx
 * 0000000140A04F01: jnz     short loc_140A04EED
 * 0000000140A04F03: xor     r15d, r15d
 * 0000000140A04F06: test    r8d, r8d
 * 0000000140A04F09: jz      short loc_140A04F20
 * 0000000140A04F0B: movzx   eax, byte ptr [r9]
 * 0000000140A04F0F: mov     ecx, r10d
 * 0000000140A04F12: xor     rbx, rax
 * 0000000140A04F15: add     r9, rdx
 * 0000000140A04F18: rol     rbx, cl
 * 0000000140A04F1B: add     r8d, r12d
 * 0000000140A04F1E: jnz     short loc_140A04F0B
 * 0000000140A04F20: mov     rax, rbx
 * 0000000140A04F23: jmp     short loc_140A04F27
 * 0000000140A04F25: xor     ebx, eax
 * 0000000140A04F27: shr     rax, 1Fh
 * 0000000140A04F2B: test    rax, rax
 * 0000000140A04F2E: jnz     short loc_140A04F25
 * 0000000140A04F30: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A04F35: btr     ebx, 1Fh
 * 0000000140A04F39: mov     r13d, r15d
 * 0000000140A04F3C: cmp     ebx, [rax+14h]
 * 0000000140A04F3F: jz      loc_140A04CDF
 * 0000000140A04F45: cmp     [rax], r15d
 * 0000000140A04F48: jnz     short loc_140A04F52
 * 0000000140A04F4A: cmp     [rax+18h], r15d
 * 0000000140A04F4E: cmovnz  r13d, edx
 * 0000000140A04F52: mov     ecx, [rax+10h]
 * 0000000140A04F55: mov     rdx, [rax+8]
 * 0000000140A04F59: test    rcx, rcx
 * 0000000140A04F5C: jz      loc_140A0501E
 * 0000000140A04F62: mov     eax, [rsi+994h]
 * 0000000140A04F68: mov     r8d, 40h ; '@'
 * 0000000140A04F6E: test    r8b, al
 * 0000000140A04F71: jz      loc_140A0501E
 * 0000000140A04F77: mov     r12, cr8
 * 0000000140A04F7B: lea     eax, [r8-3Eh]
 * 0000000140A04F7F: mov     cr8, rax
 * 0000000140A04F83: mov     r14, rdx
 * 0000000140A04F86: lea     rax, [rcx-1]
 * 0000000140A04F8A: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A04F91: add     rax, rdx
 * 0000000140A04F94: or      rax, 0FFFh
 * 0000000140A04F9A: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A04F9F: lea     rax, [r14-1]
 * 0000000140A04FA3: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A04FAA: movzx   r15d, r12b
 * 0000000140A04FAE: mov     rax, [rsi+468h]
 * 0000000140A04FB5: xor     edx, edx
 * 0000000140A04FB7: mov     rcx, r14
 * 0000000140A04FBA: call    KeGuardDispatchICall
 * 0000000140A04FBF: cmp     eax, 0C000022Dh
 * 0000000140A04FC4: jnz     short loc_140A04FED
 * 0000000140A04FC6: test    r13d, r13d
 * 0000000140A04FC9: jnz     short loc_140A05017
 * 0000000140A04FCB: lea     eax, [r13+1]
 * 0000000140A04FCF: cmp     r12b, al
 * 0000000140A04FD2: ja      short loc_140A04FF1
 * 0000000140A04FD4: movzx   r15d, r12b
 * 0000000140A04FD8: mov     cr8, r15
 * 0000000140A04FDC: mov     al, [r14]
 * 0000000140A04FDF: mov     rax, cr8
 * 0000000140A04FE3: lea     eax, [r13+2]
 * 0000000140A04FE7: mov     cr8, rax
 * 0000000140A04FEB: jmp     short loc_140A04FAE
 * 0000000140A04FED: test    eax, eax
 * 0000000140A04FEF: js      short loc_140A05017
 * 0000000140A04FF1: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A04FF8: mov     r11d, 1000h
 * 0000000140A04FFE: add     rax, r11
 * 0000000140A05001: add     r14, r11
 * 0000000140A05004: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A0500B: cmp     rax, [rsp+0CE0h+var_C70]
 * 0000000140A05010: jnz     short loc_140A04FAA
 * 0000000140A05012: jmp     loc_140A04CD8
 * 0000000140A05017: mov     cr8, r15
 * 0000000140A0501B: xor     r15d, r15d
 * 0000000140A0501E: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A05023: mov     eax, [rsi+8F8h]
 * 0000000140A05029: mov     edx, [r13+14h]
 * 0000000140A0502D: test    eax, eax
 * 0000000140A0502F: jnz     loc_140A04DAE
 * 0000000140A05035: mov     ecx, ebx
 * 0000000140A05037: xor     rcx, rdx
 * 0000000140A0503A: jmp     loc_140A04D9D
 * 0000000140A0503F: mov     dword ptr [rbp+0BE0h+arg_8], r14d
 * 0000000140A05046: mov     r12d, eax
 * 0000000140A05049: mov     esi, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0504F: mov     rdi, [rsp+0CE0h+var_C70]
 * 0000000140A05054: mov     ecx, [r15+10h]
 * 0000000140A05058: mov     eax, [r15+8]
 * 0000000140A0505C: cmp     ecx, eax
 * 0000000140A0505E: mov     r11d, [r15+0Ch]
 * 0000000140A05062: cmovbe  ecx, eax
 * 0000000140A05065: lea     r13d, [r11+0FFFh]
 * 0000000140A0506C: add     r13d, ecx
 * 0000000140A0506F: and     r13d, 0FFFFF000h
 * 0000000140A05076: cmp     r12d, r13d
 * 0000000140A05079: jnb     loc_140A0518D
 * 0000000140A0507F: mov     eax, [r15+24h]
 * 0000000140A05083: bt      eax, 19h
 * 0000000140A05087: jb      loc_140A0518A
 * 0000000140A0508D: mov     ecx, [r15]
 * 0000000140A05090: cmp     ecx, 54494E49h
 * 0000000140A05096: jnz     short loc_140A050A6
 * 0000000140A05098: cmp     dword ptr [r15+4], 4742444Bh
 * 0000000140A050A0: jz      loc_140A0518A
 * 0000000140A050A6: cmp     ecx, 45474150h
 * 0000000140A050AC: jnz     short loc_140A050E3
 * 0000000140A050AE: movzx   eax, word ptr [r15+4]
 * 0000000140A050B3: mov     r8d, 7877h
 * 0000000140A050B9: cmp     ax, r8w
 * 0000000140A050BD: jz      loc_140A0518A
 * 0000000140A050C3: mov     r8d, 7277h
 * 0000000140A050C9: cmp     ax, r8w
 * 0000000140A050CD: jz      loc_140A0518A
 * 0000000140A050D3: mov     r8d, 7777h
 * 0000000140A050D9: cmp     ax, r8w
 * 0000000140A050DD: jz      loc_140A0518A
 * 0000000140A050E3: cmp     ecx, 41525245h
 * 0000000140A050E9: jnz     short loc_140A050FB
 * 0000000140A050EB: mov     eax, 4154h
 * 0000000140A050F0: cmp     [r15+4], ax
 * 0000000140A050F5: jz      loc_140A0518A
 * 0000000140A050FB: mov     rcx, [rbp+0BE0h+var_C48]
 * 0000000140A050FF: test    rcx, rcx
 * 0000000140A05102: jz      short loc_140A0513E
 * 0000000140A05104: mov     rax, [rcx+938h]
 * 0000000140A0510B: mov     r8, [rcx+930h]
 * 0000000140A05112: mov     qword ptr [rbp+0BE0h+var_940+8], rax
 * 0000000140A05119: mov     rax, [rcx+940h]
 * 0000000140A05120: mov     qword ptr [rbp+0BE0h+var_930], rax
 * 0000000140A05127: mov     rax, [rcx+948h]
 * 0000000140A0512E: mov     qword ptr [rbp+0BE0h+var_930+8], rax
 * 0000000140A05135: mov     qword ptr [rbp+0BE0h+var_940], r8
 * 0000000140A0513C: jmp     short loc_140A05161
 * 0000000140A0513E: movups  xmm0, xmmword ptr cs:VfExcludeSections
 * 0000000140A05145: movups  xmm1, xmmword ptr cs:off_140C0EFE0; "INIT"
 * 0000000140A0514C: movups  [rbp+0BE0h+var_940], xmm0
 * 0000000140A05153: mov     r8, qword ptr [rbp+0BE0h+var_940]
 * 0000000140A0515A: movups  [rbp+0BE0h+var_930], xmm1
 * 0000000140A05161: mov     r10d, 7
 * 0000000140A05167: mov     r9, r15
 * 0000000140A0516A: mov     r14d, 0FFFFFFFFh
 * 0000000140A05170: movzx   edx, byte ptr [r9]
 * 0000000140A05174: inc     r9
 * 0000000140A05177: movzx   eax, byte ptr [r8]
 * 0000000140A0517B: inc     r8
 * 0000000140A0517E: cmp     rdx, rax
 * 0000000140A05181: jnz     short loc_140A051CB
 * 0000000140A05183: add     r10d, r14d
 * 0000000140A05186: jnz     short loc_140A05170
 * 0000000140A05188: xor     edx, edx
 * 0000000140A0518A: mov     r12d, r13d
 * 0000000140A0518D: mov     r8, [rbp+0BE0h+var_C48]
 * 0000000140A05191: add     r15, 28h ; '('
 * 0000000140A05195: cmp     r15, rdi
 * 0000000140A05198: jnz     loc_140A05054
 * 0000000140A0519E: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A051A3: cmp     r15, rdi
 * 0000000140A051A6: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A051AD: jnz     loc_140A05537
 * 0000000140A051B3: cmp     r12d, r13d
 * 0000000140A051B6: jb      loc_140A05537
 * 0000000140A051BC: xor     r15d, r15d
 * 0000000140A051BF: mov     [r8+824h], r15d
 * 0000000140A051C6: jmp     loc_1409FC31B
 * 0000000140A051CB: mov     r9, qword ptr [rbp+0BE0h+var_940+8]
 * 0000000140A051D2: mov     r8d, 8
 * 0000000140A051D8: mov     r10, r15
 * 0000000140A051DB: mov     rcx, [r10]
 * 0000000140A051DE: add     r10, 8
 * 0000000140A051E2: mov     rax, [r9]
 * 0000000140A051E5: add     r9, 8
 * 0000000140A051E9: cmp     rcx, rax
 * 0000000140A051EC: jnz     short loc_140A0521C
 * 0000000140A051EE: add     r8d, 0FFFFFFF8h
 * 0000000140A051F2: cmp     r8d, 8
 * 0000000140A051F6: jnb     short loc_140A051DB
 * 0000000140A051F8: xor     edx, edx
 * 0000000140A051FA: test    r8d, r8d
 * 0000000140A051FD: jz      short loc_140A0518A
 * 0000000140A051FF: movzx   edx, byte ptr [r10]
 * 0000000140A05203: inc     r10
 * 0000000140A05206: movzx   eax, byte ptr [r9]
 * 0000000140A0520A: inc     r9
 * 0000000140A0520D: cmp     rdx, rax
 * 0000000140A05210: jnz     short loc_140A0521C
 * 0000000140A05212: add     r8d, r14d
 * 0000000140A05215: jnz     short loc_140A051FF
 * 0000000140A05217: jmp     loc_140A05188
 * 0000000140A0521C: mov     r8, qword ptr [rbp+0BE0h+var_930]
 * 0000000140A05223: mov     r10d, 4
 * 0000000140A05229: mov     r9, r15
 * 0000000140A0522C: movzx   edx, byte ptr [r9]
 * 0000000140A05230: inc     r9
 * 0000000140A05233: movzx   eax, byte ptr [r8]
 * 0000000140A05237: inc     r8
 * 0000000140A0523A: cmp     rdx, rax
 * 0000000140A0523D: jnz     short loc_140A05249
 * 0000000140A0523F: add     r10d, r14d
 * 0000000140A05242: jnz     short loc_140A0522C
 * 0000000140A05244: jmp     loc_140A05188
 * 0000000140A05249: mov     r8, qword ptr [rbp+0BE0h+var_930+8]
 * 0000000140A05250: mov     r10d, 6
 * 0000000140A05256: mov     r9, r15
 * 0000000140A05259: movzx   edx, byte ptr [r9]
 * 0000000140A0525D: inc     r9
 * 0000000140A05260: movzx   eax, byte ptr [r8]
 * 0000000140A05264: inc     r8
 * 0000000140A05267: cmp     rdx, rax
 * 0000000140A0526A: jnz     short loc_140A05276
 * 0000000140A0526C: add     r10d, r14d
 * 0000000140A0526F: jnz     short loc_140A05259
 * 0000000140A05271: jmp     loc_140A05188
 * 0000000140A05276: mov     eax, [r15+24h]
 * 0000000140A0527A: xor     edx, edx
 * 0000000140A0527C: test    eax, eax
 * 0000000140A0527E: js      loc_140A0518A
 * 0000000140A05284: bt      eax, 1Dh
 * 0000000140A05288: jnb     loc_140A0518A
 * 0000000140A0528E: lea     r9d, [rdx+1]
 * 0000000140A05292: mov     r14d, r9d
 * 0000000140A05295: test    esi, esi
 * 0000000140A05297: jz      short loc_140A052AC
 * 0000000140A05299: mov     eax, [r15]
 * 0000000140A0529C: cmp     eax, 2E656461h
 * 0000000140A052A1: jz      short loc_140A052AC
 * 0000000140A052A3: cmp     eax, 45474150h
 * 0000000140A052A8: cmovnz  r14d, edx
 * 0000000140A052AC: mov     r8, [rbp+0BE0h+var_C48]
 * 0000000140A052B0: cmp     r12d, r11d
 * 0000000140A052B3: cmovnb  r11d, r12d
 * 0000000140A052B7: mov     r12d, r11d
 * 0000000140A052BA: mov     eax, r12d
 * 0000000140A052BD: add     rbx, rax
 * 0000000140A052C0: test    byte ptr [r8+87Bh], 4
 * 0000000140A052C8: jz      short loc_140A0532F
 * 0000000140A052CA: mov     ecx, 0FFFFFFFFh
 * 0000000140A052CF: mov     eax, ecx
 * 0000000140A052D1: xbegin  $+6
 * 0000000140A052D7: cmp     eax, ecx
 * 0000000140A052D9: jnz     short loc_140A052E2
 * 0000000140A052DB: mov     al, [rbx]
 * 0000000140A052DD: xend
 * 0000000140A052E0: jmp     short loc_140A05316
 * 0000000140A052E2: rdtsc
 * 0000000140A052E4: shl     rdx, 20h
 * 0000000140A052E8: or      rax, rdx
 * 0000000140A052EB: mov     rcx, rax
 * 0000000140A052EE: ror     rax, 3
 * 0000000140A052F2: xor     rcx, rax
 * 0000000140A052F5: mov     rax, 7010008004002001h
 * 0000000140A052FF: mul     rcx
 * 0000000140A05302: mov     [rbp+0BE0h+var_5E8], rdx
 * 0000000140A05309: xor     dl, al
 * 0000000140A0530B: mov     eax, 0Fh
 * 0000000140A05310: test    al, dl
 * 0000000140A05312: jz      short loc_140A0532D
 * 0000000140A05314: xor     edx, edx
 * 0000000140A05316: add     [r8+83Ch], r9d
 * 0000000140A0531D: add     dword ptr [r8+828h], 100h
 * 0000000140A05328: jmp     loc_140A053D7
 * 0000000140A0532D: xor     edx, edx
 * 0000000140A0532F: test    r14d, r14d
 * 0000000140A05332: jz      loc_140A05413
 * 0000000140A05338: mov     rax, [r8+450h]
 * 0000000140A0533F: lea     rcx, [rbp+0BE0h+var_708]
 * 0000000140A05346: mov     rdx, rbx
 * 0000000140A05349: call    KeGuardDispatchICall
 * 0000000140A0534E: xor     edx, edx
 * 0000000140A05350: test    eax, eax
 * 0000000140A05352: jns     loc_140A0548C
 * 0000000140A05358: cmp     eax, 0C0000005h
 * 0000000140A0535D: jnz     short loc_140A053CD
 * 0000000140A0535F: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A05364: mov     eax, [rcx+20h]
 * 0000000140A05367: test    al, 4
 * 0000000140A05369: jz      short loc_140A05371
 * 0000000140A0536B: cmp     [r15+24h], edx
 * 0000000140A0536F: jge     short loc_140A053CD
 * 0000000140A05371: mov     r8, [rbp+0BE0h+var_C48]
 * 0000000140A05375: cmp     [r8+8F8h], edx
 * 0000000140A0537C: jnz     short loc_140A053D1
 * 0000000140A0537E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A05388: add     rax, r8
 * 0000000140A0538B: mov     [r8+900h], rax
 * 0000000140A05392: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0539C: add     rax, rcx
 * 0000000140A0539F: mov     [r8+908h], rax
 * 0000000140A053A6: movsxd  rax, dword ptr [rcx]
 * 0000000140A053A9: mov     rcx, r8
 * 0000000140A053AC: mov     [r8+910h], rax
 * 0000000140A053B3: mov     eax, 1
 * 0000000140A053B8: mov     [r8+918h], rbx
 * 0000000140A053BF: mov     [r8+8F8h], eax
 * 0000000140A053C6: call    $$b8
 * 0000000140A053CB: xor     edx, edx
 * 0000000140A053CD: mov     r8, [rbp+0BE0h+var_C48]
 * 0000000140A053D1: mov     r9d, 1
 * 0000000140A053D7: mov     eax, [r8+828h]
 * 0000000140A053DE: add     r12d, 1000h
 * 0000000140A053E5: cmp     r12d, r13d
 * 0000000140A053E8: jnb     short loc_140A053FC
 * 0000000140A053EA: mov     rbx, [rsp+0CE0h+var_C88]
 * 0000000140A053EF: cmp     eax, [r8+82Ch]
 * 0000000140A053F6: jl      loc_140A052BA
 * 0000000140A053FC: cmp     eax, [r8+82Ch]
 * 0000000140A05403: jge     loc_140A0519E
 * 0000000140A05409: mov     rbx, [rsp+0CE0h+var_C88]
 * 0000000140A0540E: jmp     loc_140A05191
 * 0000000140A05413: mov     r9d, 0FFFh
 * 0000000140A05419: mov     [rbp+0BE0h+var_708], rdx
 * 0000000140A05420: mov     [rbp+0BE0h+var_6FE], dx
 * 0000000140A05427: mov     rax, rbx
 * 0000000140A0542A: and     rax, r9
 * 0000000140A0542D: mov     [rbp+0BE0h+var_6E0], 1000h
 * 0000000140A05437: add     rax, 1FFFh
 * 0000000140A0543D: mov     rcx, rbx
 * 0000000140A05440: shr     rax, 0Ch
 * 0000000140A05444: add     ax, 6
 * 0000000140A05448: shl     ax, 3
 * 0000000140A0544C: mov     [rbp+0BE0h+var_700], ax
 * 0000000140A05453: mov     rax, rbx
 * 0000000140A05456: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140A0545C: mov     [rbp+0BE0h+var_6E8], rax
 * 0000000140A05463: mov     eax, ebx
 * 0000000140A05465: and     eax, r9d
 * 0000000140A05468: mov     [rbp+0BE0h+var_6DC], eax
 * 0000000140A0546E: mov     rax, [r8+458h]
 * 0000000140A05475: call    KeGuardDispatchICall
 * 0000000140A0547A: mov     [rbp+0BE0h+var_5E0], rax
 * 0000000140A05481: shr     rax, 0Ch
 * 0000000140A05485: mov     [rbp+0BE0h+var_6D8], rax
 * 0000000140A0548C: mov     rcx, [rbp+0BE0h+var_C48]
 * 0000000140A05490: mov     eax, 1
 * 0000000140A05495: add     [rcx+840h], eax
 * 0000000140A0549B: mov     eax, [rbp+0BE0h+var_6DC]
 * 0000000140A054A1: add     rax, [rbp+0BE0h+var_6E8]
 * 0000000140A054A8: mov     [rcx+0A68h], rax
 * 0000000140A054AF: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A054B4: mov     [rcx+0A60h], rax
 * 0000000140A054BB: mov     rbx, cr8
 * 0000000140A054BF: mov     eax, 2
 * 0000000140A054C4: mov     cr8, rax
 * 0000000140A054C8: mov     rax, [rcx+5F8h]
 * 0000000140A054CF: xor     r8d, r8d
 * 0000000140A054D2: add     rcx, 0A40h
 * 0000000140A054D9: mov     edx, [rax]
 * 0000000140A054DB: call    RtlInitMinimalBarrier
 * 0000000140A054E0: mov     rdx, [rbp+0BE0h+var_C48]
 * 0000000140A054E4: mov     ecx, [rdx+7F4h]
 * 0000000140A054EA: mov     rax, [rdx+448h]
 * 0000000140A054F1: add     rcx, rdx
 * 0000000140A054F4: call    KeGuardDispatchICall
 * 0000000140A054F9: mov     r8, rax
 * 0000000140A054FC: mov     [rbp+0BE0h+var_C48], rax
 * 0000000140A05500: movzx   eax, bl
 * 0000000140A05503: mov     cr8, rax
 * 0000000140A05507: xor     edx, edx
 * 0000000140A05509: test    r14d, r14d
 * 0000000140A0550C: jz      short loc_140A05527
 * 0000000140A0550E: mov     rax, [r8+460h]
 * 0000000140A05515: lea     rcx, [rbp+0BE0h+var_708]
 * 0000000140A0551C: call    KeGuardDispatchICall
 * 0000000140A05521: mov     r8, [rbp+0BE0h+var_C48]
 * 0000000140A05525: xor     edx, edx
 * 0000000140A05527: add     dword ptr [r8+828h], 14000h
 * 0000000140A05532: jmp     loc_140A053D1
 * 0000000140A05537: mov     [r8+824h], r12d
 * 0000000140A0553E: jmp     loc_1409FC318
 * 0000000140A05543: mov     r8d, 0Ch
 * 0000000140A05549: xor     eax, eax
 * 0000000140A0554B: cmp     r10d, r8d
 * 0000000140A0554E: jnz     loc_140A05878
 * 0000000140A05554: cmp     [rsi+980h], rax
 * 0000000140A0555B: jz      loc_1409FC312
 * 0000000140A05561: mov     edx, [rsi+994h]
 * 0000000140A05567: mov     ecx, edx
 * 0000000140A05569: cmp     [rsi+824h], eax
 * 0000000140A0556F: jnz     short loc_140A05583
 * 0000000140A05571: shl     ecx, 3
 * 0000000140A05574: xor     ecx, edx
 * 0000000140A05576: and     ecx, 20h
 * 0000000140A05579: xor     ecx, edx
 * 0000000140A0557B: mov     [rsi+994h], ecx
 * 0000000140A05581: jmp     short loc_140A05594
 * 0000000140A05583: mov     eax, edx
 * 0000000140A05585: shr     eax, 3
 * 0000000140A05588: xor     eax, edx
 * 0000000140A0558A: test    al, 4
 * 0000000140A0558C: jnz     loc_1409FC3EA
 * 0000000140A05592: xor     eax, eax
 * 0000000140A05594: test    cl, 4
 * 0000000140A05597: jz      loc_140A05873
 * 0000000140A0559D: mov     r15, [r13+20h]
 * 0000000140A055A1: mov     eax, [r13+28h]
 * 0000000140A055A5: test    r15, r15
 * 0000000140A055A8: jz      short loc_140A055D2
 * 0000000140A055AA: mov     ebx, [rsi+824h]
 * 0000000140A055B0: sub     eax, ebx
 * 0000000140A055B2: mov     r14d, eax
 * 0000000140A055B5: add     r14, 0FFFh
 * 0000000140A055BC: lea     ecx, [r15+rbx]
 * 0000000140A055C0: and     ecx, 0FFFh
 * 0000000140A055C6: add     r14, rcx
 * 0000000140A055C9: shr     r14, 0Ch
 * 0000000140A055CD: add     rbx, r15
 * 0000000140A055D0: jmp     short loc_140A055F3
 * 0000000140A055D2: mov     r14d, [r13+8]
 * 0000000140A055D6: mov     ecx, [r13+10h]
 * 0000000140A055DA: and     r14d, 0FFFh
 * 0000000140A055E1: mov     rbx, [r13+8]
 * 0000000140A055E5: add     r14, 0FFFh
 * 0000000140A055EC: add     r14, rcx
 * 0000000140A055EF: shr     r14, 0Ch
 * 0000000140A055F3: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A055FA: test    r14, r14
 * 0000000140A055FD: jz      loc_140A056AE
 * 0000000140A05603: xor     edi, edi
 * 0000000140A05605: mov     rax, [rsi+2B0h]
 * 0000000140A0560C: mov     rcx, rbx
 * 0000000140A0560F: dec     r14
 * 0000000140A05612: call    KeGuardDispatchICall
 * 0000000140A05617: test    al, al
 * 0000000140A05619: jz      short loc_140A05672
 * 0000000140A0561B: cmp     [rsi+8F8h], edi
 * 0000000140A05621: jnz     short loc_140A05672
 * 0000000140A05623: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0562D: xor     edx, edx
 * 0000000140A0562F: add     rax, rsi
 * 0000000140A05632: mov     rcx, rsi
 * 0000000140A05635: mov     [rsi+900h], rax
 * 0000000140A0563C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A05646: add     rax, r13
 * 0000000140A05649: mov     [rsi+908h], rax
 * 0000000140A05650: movsxd  rax, dword ptr [r13+0]
 * 0000000140A05654: mov     [rsi+910h], rax
 * 0000000140A0565B: mov     eax, 1
 * 0000000140A05660: mov     [rsi+918h], rbx
 * 0000000140A05667: mov     [rsi+8F8h], eax
 * 0000000140A0566D: call    $$b8
 * 0000000140A05672: add     dword ptr [rsi+828h], 100h
 * 0000000140A0567C: add     rbx, 1000h
 * 0000000140A05683: test    r15, r15
 * 0000000140A05686: jz      short loc_140A0569E
 * 0000000140A05688: add     dword ptr [rsi+824h], 1000h
 * 0000000140A05692: mov     eax, [r12]
 * 0000000140A05696: cmp     [rsi+828h], eax
 * 0000000140A0569C: jge     short loc_140A056A7
 * 0000000140A0569E: test    r14, r14
 * 0000000140A056A1: jnz     loc_140A05605
 * 0000000140A056A7: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A056AE: test    r15, r15
 * 0000000140A056B1: jz      short loc_140A056C2
 * 0000000140A056B3: xor     r15d, r15d
 * 0000000140A056B6: test    r14, r14
 * 0000000140A056B9: jnz     short loc_140A056C2
 * 0000000140A056BB: mov     [rsi+824h], r15d
 * 0000000140A056C2: cmp     [rsi+824h], r15d
 * 0000000140A056C9: jnz     loc_1409FC31B
 * 0000000140A056CF: mov     rcx, [rsi+540h]
 * 0000000140A056D6: mov     r15, cr8
 * 0000000140A056DA: mov     eax, 0Fh
 * 0000000140A056DF: mov     cr8, rax
 * 0000000140A056E3: mov     rax, [rsi+150h]
 * 0000000140A056EA: call    KeGuardDispatchICall
 * 0000000140A056EF: mov     rax, [rsi+610h]
 * 0000000140A056F6: mov     r14, [rsp+0CE0h+var_C90]
 * 0000000140A056FB: mov     rcx, [rax]
 * 0000000140A056FE: mov     eax, [rcx]
 * 0000000140A05700: lea     rbx, [rcx+10h]
 * 0000000140A05704: mov     r12b, [rcx+0Ch]
 * 0000000140A05708: lea     rcx, [rax+rax*2]
 * 0000000140A0570C: lea     r13, [rbx+rcx*8]
 * 0000000140A05710: mov     r8d, 18h
 * 0000000140A05716: lea     r9, [r14+18h]
 * 0000000140A0571A: mov     r10, rbx
 * 0000000140A0571D: mov     rcx, [r10]
 * 0000000140A05720: add     r10, 8
 * 0000000140A05724: mov     rax, [r9]
 * 0000000140A05727: add     r9, 8
 * 0000000140A0572B: cmp     rcx, rax
 * 0000000140A0572E: jnz     short loc_140A05764
 * 0000000140A05730: add     r8d, 0FFFFFFF8h
 * 0000000140A05734: cmp     r8d, 8
 * 0000000140A05738: jnb     short loc_140A0571D
 * 0000000140A0573A: test    r8d, r8d
 * 0000000140A0573D: jz      short loc_140A0576D
 * 0000000140A0573F: mov     r11d, 1
 * 0000000140A05745: movzx   edx, byte ptr [r10]
 * 0000000140A05749: add     r10, r11
 * 0000000140A0574C: movzx   eax, byte ptr [r9]
 * 0000000140A05750: add     r9, r11
 * 0000000140A05753: cmp     rdx, rax
 * 0000000140A05756: jnz     short loc_140A05764
 * 0000000140A05758: mov     eax, 0FFFFFFFFh
 * 0000000140A0575D: add     r8d, eax
 * 0000000140A05760: jz      short loc_140A0576D
 * 0000000140A05762: jmp     short loc_140A05745
 * 0000000140A05764: add     rbx, 18h
 * 0000000140A05768: cmp     rbx, r13
 * 0000000140A0576B: jb      short loc_140A05710
 * 0000000140A0576D: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A05772: mov     rcx, [rsi+540h]
 * 0000000140A05779: mov     rax, [rsi+190h]
 * 0000000140A05780: call    KeGuardDispatchICall
 * 0000000140A05785: movzx   eax, r15b
 * 0000000140A05789: mov     cr8, rax
 * 0000000140A0578D: xor     r15d, r15d
 * 0000000140A05790: test    r12b, r12b
 * 0000000140A05793: jz      short loc_140A0580F
 * 0000000140A05795: mov     eax, [rsi+994h]
 * 0000000140A0579B: lea     ecx, [r15+10h]
 * 0000000140A0579F: test    cl, al
 * 0000000140A057A1: jz      short loc_140A057FE
 * 0000000140A057A3: cmp     [rsi+8F8h], r15d
 * 0000000140A057AA: jnz     short loc_140A057FE
 * 0000000140A057AC: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A057B1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A057BB: add     rax, rsi
 * 0000000140A057BE: xor     edx, edx
 * 0000000140A057C0: mov     [rsi+900h], rax
 * 0000000140A057C7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A057D1: add     rax, rcx
 * 0000000140A057D4: mov     [rsi+908h], rax
 * 0000000140A057DB: movsxd  rax, dword ptr [rcx]
 * 0000000140A057DE: mov     rcx, rsi
 * 0000000140A057E1: mov     [rsi+910h], rax
 * 0000000140A057E8: lea     eax, [r15+1]
 * 0000000140A057EC: mov     [rsi+918h], rax
 * 0000000140A057F3: mov     [rsi+8F8h], eax
 * 0000000140A057F9: call    $$b8
 * 0000000140A057FE: mov     edx, 1
 * 0000000140A05803: cmp     [r14+18h], rdx
 * 0000000140A05807: jz      loc_1409FC31B
 * 0000000140A0580D: jmp     short loc_140A05814
 * 0000000140A0580F: mov     edx, 1
 * 0000000140A05814: cmp     rbx, r13
 * 0000000140A05817: jnz     loc_1409FC31B
 * 0000000140A0581D: cmp     [rsi+8F8h], r15d
 * 0000000140A05824: jnz     loc_1409FC31B
 * 0000000140A0582A: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A0582F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A05839: add     rax, rsi
 * 0000000140A0583C: mov     [rsi+900h], rax
 * 0000000140A05843: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0584D: add     rax, rcx
 * 0000000140A05850: mov     [rsi+908h], rax
 * 0000000140A05857: movsxd  rax, dword ptr [rcx]
 * 0000000140A0585A: mov     [rsi+910h], rax
 * 0000000140A05861: mov     [rsi+918h], rbx
 * 0000000140A05868: mov     [rsi+8F8h], edx
 * 0000000140A0586E: jmp     loc_1409FC6F2
 * 0000000140A05873: mov     edx, 1
 * 0000000140A05878: cmp     [rsi+824h], eax
 * 0000000140A0587E: jnz     short loc_140A0589C
 * 0000000140A05880: cmp     r10d, r8d
 * 0000000140A05883: jnz     loc_140A05DB2
 * 0000000140A05889: cmp     [rsi+980h], rax
 * 0000000140A05890: jnz     loc_140A05A35
 * 0000000140A05896: mov     [rsi+824h], eax
 * 0000000140A0589C: xor     r15d, r15d
 * 0000000140A0589F: mov     r9, [r13+8]
 * 0000000140A058A3: mov     r8d, [rsi+824h]
 * 0000000140A058AA: mov     ecx, [r13+10h]
 * 0000000140A058AE: mov     [rbp+0BE0h+var_C10], r9
 * 0000000140A058B2: lea     rax, [r8+r8*2]
 * 0000000140A058B6: lea     r14, [r9+rax*4]
 * 0000000140A058BA: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A058C4: mul     rcx
 * 0000000140A058C7: mov     [rsp+0CE0h+var_C88], r14
 * 0000000140A058CC: shr     rdx, 3
 * 0000000140A058D0: lea     rax, [rdx+rdx*2]
 * 0000000140A058D4: lea     r12, [r9+rax*4]
 * 0000000140A058D8: mov     [rbp+0BE0h+var_C20], r12
 * 0000000140A058DC: lea     r12, ds:30h[r8*4]
 * 0000000140A058E4: add     r12, r13
 * 0000000140A058E7: mov     [rbp+0BE0h+var_C50], r12
 * 0000000140A058EB: cmp     r14, [rbp+0BE0h+var_C20]
 * 0000000140A058EF: jz      loc_140A06471
 * 0000000140A058F5: mov     rdi, [rbp+0BE0h+var_C20]
 * 0000000140A058F9: cmp     [r12], r15d
 * 0000000140A058FD: jl      loc_140A06369
 * 0000000140A05903: mov     eax, [r14]
 * 0000000140A05906: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A0590B: mov     r13d, eax
 * 0000000140A0590E: mov     r15d, [r14+4]
 * 0000000140A05912: sub     r15d, eax
 * 0000000140A05915: add     r13, [rcx+20h]
 * 0000000140A05919: mov     [rsp+0CE0h+var_C70], r13
 * 0000000140A0591E: cmp     r10d, 2Bh ; '+'
 * 0000000140A05922: jz      loc_140A06009
 * 0000000140A05928: add     [rsi+828h], r15d
 * 0000000140A0592F: mov     r9, r13
 * 0000000140A05932: mov     r10d, [rsi+814h]
 * 0000000140A05939: mov     rax, r13
 * 0000000140A0593C: mov     r11, [rsi+818h]
 * 0000000140A05943: mov     ecx, r15d
 * 0000000140A05946: add     rcx, r13
 * 0000000140A05949: cmp     r13, rcx
 * 0000000140A0594C: jnb     short loc_140A0595E
 * 0000000140A0594E: mov     edx, 40h ; '@'
 * 0000000140A05953: prefetchnta byte ptr [rax]
 * 0000000140A05956: add     rax, rdx
 * 0000000140A05959: cmp     rax, rcx
 * 0000000140A0595C: jb      short loc_140A05953
 * 0000000140A0595E: mov     r8d, r15d
 * 0000000140A05961: mov     rbx, r11
 * 0000000140A05964: shr     r8d, 7
 * 0000000140A05968: test    r8d, r8d
 * 0000000140A0596B: jz      short loc_140A059E1
 * 0000000140A0596D: mov     r12, 7010008004002001h
 * 0000000140A05977: mov     edx, 8
 * 0000000140A0597C: lea     edi, [rdx-7]
 * 0000000140A0597F: mov     rax, [r9]
 * 0000000140A05982: mov     ecx, r10d
 * 0000000140A05985: xor     rax, rbx
 * 0000000140A05988: mov     rbx, [r9+8]
 * 0000000140A0598C: rol     rax, cl
 * 0000000140A0598F: add     r9, 10h
 * 0000000140A05993: xor     rbx, rax
 * 0000000140A05996: rol     rbx, cl
 * 0000000140A05999: sub     rdx, rdi
 * 0000000140A0599C: jnz     short loc_140A0597F
 * 0000000140A0599E: mov     rcx, r9
 * 0000000140A059A1: sub     rcx, r13
 * 0000000140A059A4: xor     rcx, r11
 * 0000000140A059A7: mov     rax, rcx
 * 0000000140A059AA: rol     rax, 11h
 * 0000000140A059AE: xor     rcx, rax
 * 0000000140A059B1: mov     rax, r12
 * 0000000140A059B4: mul     rcx
 * 0000000140A059B7: xor     r10d, eax
 * 0000000140A059BA: mov     [rbp+0BE0h+var_5C8], rdx
 * 0000000140A059C1: xor     r10d, edx
 * 0000000140A059C4: mov     rax, rdi
 * 0000000140A059C7: and     r10d, 3Fh
 * 0000000140A059CB: cmovz   r10d, eax
 * 0000000140A059CF: mov     eax, 0FFFFFFFFh
 * 0000000140A059D4: add     r8d, eax
 * 0000000140A059D7: jnz     short loc_140A05977
 * 0000000140A059D9: mov     r12, [rbp+0BE0h+var_C50]
 * 0000000140A059DD: mov     rdi, [rbp+0BE0h+var_C20]
 * 0000000140A059E1: mov     edx, r15d
 * 0000000140A059E4: mov     r11d, 1
 * 0000000140A059EA: and     edx, 7Fh
 * 0000000140A059ED: cmp     edx, 8
 * 0000000140A059F0: jb      short loc_140A05A0E
 * 0000000140A059F2: mov     r8d, edx
 * 0000000140A059F5: shr     r8, 3
 * 0000000140A059F9: xor     rbx, [r9]
 * 0000000140A059FC: mov     ecx, r10d
 * 0000000140A059FF: rol     rbx, cl
 * 0000000140A05A02: add     r9, 8
 * 0000000140A05A06: add     edx, 0FFFFFFF8h
 * 0000000140A05A09: sub     r8, r11
 * 0000000140A05A0C: jnz     short loc_140A059F9
 * 0000000140A05A0E: test    edx, edx
 * 0000000140A05A10: jz      short loc_140A05A2D
 * 0000000140A05A12: mov     r8d, 0FFFFFFFFh
 * 0000000140A05A18: movzx   eax, byte ptr [r9]
 * 0000000140A05A1C: mov     ecx, r10d
 * 0000000140A05A1F: xor     rbx, rax
 * 0000000140A05A22: add     r9, r11
 * 0000000140A05A25: rol     rbx, cl
 * 0000000140A05A28: add     edx, r8d
 * 0000000140A05A2B: jnz     short loc_140A05A18
 * 0000000140A05A2D: mov     rax, rbx
 * 0000000140A05A30: jmp     loc_140A05FF3
 * 0000000140A05A35: mov     eax, [rsi+994h]
 * 0000000140A05A3B: mov     ecx, eax
 * 0000000140A05A3D: shl     ecx, 3
 * 0000000140A05A40: xor     ecx, eax
 * 0000000140A05A42: and     ecx, 20h
 * 0000000140A05A45: xor     ecx, eax
 * 0000000140A05A47: mov     [rsi+994h], ecx
 * 0000000140A05A4D: test    cl, 4
 * 0000000140A05A50: jz      loc_140A05B25
 * 0000000140A05A56: mov     r14d, [r13+8]
 * 0000000140A05A5A: xor     r15d, r15d
 * 0000000140A05A5D: mov     ecx, [r13+10h]
 * 0000000140A05A61: and     r14d, 0FFFh
 * 0000000140A05A68: mov     rbx, [r13+8]
 * 0000000140A05A6C: add     r14, 0FFFh
 * 0000000140A05A73: add     r14, rcx
 * 0000000140A05A76: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A05A7D: shr     r14, 0Ch
 * 0000000140A05A81: test    r14, r14
 * 0000000140A05A84: jz      loc_140A0589F
 * 0000000140A05A8A: jmp     short loc_140A05A91
 * 0000000140A05A8C: mov     edx, 1
 * 0000000140A05A91: mov     rax, [rsi+2B0h]
 * 0000000140A05A98: mov     rcx, rbx
 * 0000000140A05A9B: sub     r14, rdx
 * 0000000140A05A9E: call    KeGuardDispatchICall
 * 0000000140A05AA3: test    al, al
 * 0000000140A05AA5: jz      short loc_140A05AFF
 * 0000000140A05AA7: cmp     [rsi+8F8h], r15d
 * 0000000140A05AAE: jnz     short loc_140A05AFF
 * 0000000140A05AB0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A05ABA: mov     edi, 1
 * 0000000140A05ABF: add     rax, rsi
 * 0000000140A05AC2: xor     edx, edx
 * 0000000140A05AC4: mov     [rsi+900h], rax
 * 0000000140A05ACB: mov     rcx, rsi
 * 0000000140A05ACE: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A05AD8: add     rax, r13
 * 0000000140A05ADB: mov     [rsi+908h], rax
 * 0000000140A05AE2: movsxd  rax, dword ptr [r13+0]
 * 0000000140A05AE6: mov     [rsi+910h], rax
 * 0000000140A05AED: mov     [rsi+918h], rbx
 * 0000000140A05AF4: mov     [rsi+8F8h], edi
 * 0000000140A05AFA: call    $$b8
 * 0000000140A05AFF: add     dword ptr [rsi+828h], 100h
 * 0000000140A05B09: add     rbx, 1000h
 * 0000000140A05B10: test    r14, r14
 * 0000000140A05B13: jnz     loc_140A05A8C
 * 0000000140A05B19: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A05B20: jmp     loc_140A05DA6
 * 0000000140A05B25: mov     r14, [r13+8]
 * 0000000140A05B29: mov     r8d, [r13+10h]
 * 0000000140A05B2D: mov     r9, r14
 * 0000000140A05B30: add     [rsi+828h], r8d
 * 0000000140A05B37: mov     rax, r14
 * 0000000140A05B3A: mov     r11d, [rsi+814h]
 * 0000000140A05B41: mov     r15, [rsi+818h]
 * 0000000140A05B48: lea     rcx, [r14+r8]
 * 0000000140A05B4C: cmp     r14, rcx
 * 0000000140A05B4F: jnb     short loc_140A05B62
 * 0000000140A05B51: mov     r10d, 40h ; '@'
 * 0000000140A05B57: prefetchnta byte ptr [rax]
 * 0000000140A05B5A: add     rax, r10
 * 0000000140A05B5D: cmp     rax, rcx
 * 0000000140A05B60: jb      short loc_140A05B57
 * 0000000140A05B62: mov     r10d, r8d
 * 0000000140A05B65: mov     rbx, r15
 * 0000000140A05B68: shr     r10d, 7
 * 0000000140A05B6C: mov     r12d, 0FFFFFFFFh
 * 0000000140A05B72: test    r10d, r10d
 * 0000000140A05B75: jz      short loc_140A05BEA
 * 0000000140A05B77: mov     rdi, 7010008004002001h
 * 0000000140A05B81: mov     edx, 8
 * 0000000140A05B86: lea     esi, [rdx-7]
 * 0000000140A05B89: mov     rax, [r9]
 * 0000000140A05B8C: mov     ecx, r11d
 * 0000000140A05B8F: xor     rax, rbx
 * 0000000140A05B92: mov     rbx, [r9+8]
 * 0000000140A05B96: rol     rax, cl
 * 0000000140A05B99: add     r9, 10h
 * 0000000140A05B9D: xor     rbx, rax
 * 0000000140A05BA0: rol     rbx, cl
 * 0000000140A05BA3: sub     rdx, rsi
 * 0000000140A05BA6: jnz     short loc_140A05B89
 * 0000000140A05BA8: mov     rcx, r9
 * 0000000140A05BAB: sub     rcx, r14
 * 0000000140A05BAE: xor     rcx, r15
 * 0000000140A05BB1: mov     rax, rcx
 * 0000000140A05BB4: rol     rax, 11h
 * 0000000140A05BB8: xor     rcx, rax
 * 0000000140A05BBB: mov     rax, rdi
 * 0000000140A05BBE: mul     rcx
 * 0000000140A05BC1: xor     r11d, eax
 * 0000000140A05BC4: mov     [rbp+0BE0h+var_5D8], rdx
 * 0000000140A05BCB: xor     r11d, edx
 * 0000000140A05BCE: mov     rdx, rsi
 * 0000000140A05BD1: and     r11d, 3Fh
 * 0000000140A05BD5: cmovz   r11d, edx
 * 0000000140A05BD9: add     r10d, r12d
 * 0000000140A05BDC: jnz     short loc_140A05B81
 * 0000000140A05BDE: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A05BE3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A05BEA: and     r8d, 7Fh
 * 0000000140A05BEE: cmp     r8d, 8
 * 0000000140A05BF2: jb      short loc_140A05C20
 * 0000000140A05BF4: mov     edx, r8d
 * 0000000140A05BF7: mov     esi, 1
 * 0000000140A05BFC: shr     rdx, 3
 * 0000000140A05C00: xor     rbx, [r9]
 * 0000000140A05C03: mov     ecx, r11d
 * 0000000140A05C06: rol     rbx, cl
 * 0000000140A05C09: add     r9, 8
 * 0000000140A05C0D: add     r8d, 0FFFFFFF8h
 * 0000000140A05C11: sub     rdx, rsi
 * 0000000140A05C14: jnz     short loc_140A05C00
 * 0000000140A05C16: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A05C1B: mov     edx, 1
 * 0000000140A05C20: xor     r15d, r15d
 * 0000000140A05C23: test    r8d, r8d
 * 0000000140A05C26: jz      short loc_140A05C3D
 * 0000000140A05C28: movzx   eax, byte ptr [r9]
 * 0000000140A05C2C: mov     ecx, r11d
 * 0000000140A05C2F: xor     rbx, rax
 * 0000000140A05C32: add     r9, rdx
 * 0000000140A05C35: rol     rbx, cl
 * 0000000140A05C38: add     r8d, r12d
 * 0000000140A05C3B: jnz     short loc_140A05C28
 * 0000000140A05C3D: mov     rax, rbx
 * 0000000140A05C40: jmp     short loc_140A05C44
 * 0000000140A05C42: xor     ebx, eax
 * 0000000140A05C44: shr     rax, 1Fh
 * 0000000140A05C48: test    rax, rax
 * 0000000140A05C4B: jnz     short loc_140A05C42
 * 0000000140A05C4D: mov     r8d, [r13+14h]
 * 0000000140A05C51: btr     ebx, 1Fh
 * 0000000140A05C55: cmp     ebx, r8d
 * 0000000140A05C58: jz      loc_140A05DA6
 * 0000000140A05C5E: mov     ecx, [r13+10h]
 * 0000000140A05C62: mov     rdx, [r13+8]
 * 0000000140A05C66: test    rcx, rcx
 * 0000000140A05C69: jz      loc_140A05D2C
 * 0000000140A05C6F: mov     eax, [rsi+994h]
 * 0000000140A05C75: mov     r9d, 40h ; '@'
 * 0000000140A05C7B: test    r9b, al
 * 0000000140A05C7E: jz      loc_140A05D2C
 * 0000000140A05C84: mov     r12, cr8
 * 0000000140A05C88: lea     eax, [r9-3Eh]
 * 0000000140A05C8C: mov     cr8, rax
 * 0000000140A05C90: mov     r14, rdx
 * 0000000140A05C93: lea     rax, [rcx-1]
 * 0000000140A05C97: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A05C9E: add     rax, rdx
 * 0000000140A05CA1: or      rax, 0FFFh
 * 0000000140A05CA7: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A05CAC: lea     r13, [r14-1]
 * 0000000140A05CB0: movzx   r15d, r12b
 * 0000000140A05CB4: mov     rax, [rsi+468h]
 * 0000000140A05CBB: xor     edx, edx
 * 0000000140A05CBD: mov     rcx, r14
 * 0000000140A05CC0: call    KeGuardDispatchICall
 * 0000000140A05CC5: cmp     eax, 0C000022Dh
 * 0000000140A05CCA: jnz     short loc_140A05CF0
 * 0000000140A05CCC: mov     eax, 1
 * 0000000140A05CD1: cmp     r12b, al
 * 0000000140A05CD4: ja      short loc_140A05CF4
 * 0000000140A05CD6: movzx   r15d, r12b
 * 0000000140A05CDA: mov     cr8, r15
 * 0000000140A05CDE: mov     al, [r14]
 * 0000000140A05CE1: mov     rax, cr8
 * 0000000140A05CE5: mov     eax, 2
 * 0000000140A05CEA: mov     cr8, rax
 * 0000000140A05CEE: jmp     short loc_140A05CB4
 * 0000000140A05CF0: test    eax, eax
 * 0000000140A05CF2: js      short loc_140A05D1C
 * 0000000140A05CF4: mov     r11d, 1000h
 * 0000000140A05CFA: add     r14, r11
 * 0000000140A05CFD: add     r13, r11
 * 0000000140A05D00: cmp     r13, [rsp+0CE0h+var_C70]
 * 0000000140A05D05: jnz     short loc_140A05CB0
 * 0000000140A05D07: mov     cr8, r15
 * 0000000140A05D0B: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A05D12: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A05D17: jmp     loc_140A0589C
 * 0000000140A05D1C: mov     cr8, r15
 * 0000000140A05D20: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A05D25: xor     r15d, r15d
 * 0000000140A05D28: mov     r8d, [r13+14h]
 * 0000000140A05D2C: mov     eax, [rsi+8F8h]
 * 0000000140A05D32: test    eax, eax
 * 0000000140A05D34: jnz     short loc_140A05D51
 * 0000000140A05D36: mov     ecx, ebx
 * 0000000140A05D38: mov     eax, r8d
 * 0000000140A05D3B: xor     rcx, rax
 * 0000000140A05D3E: mov     rax, [rsi+590h]
 * 0000000140A05D45: mov     [rax+18h], rcx
 * 0000000140A05D49: mov     eax, [rsi+8F8h]
 * 0000000140A05D4F: test    eax, eax
 * 0000000140A05D51: mov     rcx, [r13+8]
 * 0000000140A05D55: jnz     short loc_140A05DA6
 * 0000000140A05D57: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A05D61: xor     edx, edx
 * 0000000140A05D63: add     rax, rsi
 * 0000000140A05D66: mov     [rsi+900h], rax
 * 0000000140A05D6D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A05D77: add     rax, r13
 * 0000000140A05D7A: mov     [rsi+908h], rax
 * 0000000140A05D81: movsxd  rax, dword ptr [r13+0]
 * 0000000140A05D85: mov     [rsi+910h], rax
 * 0000000140A05D8C: mov     eax, 1
 * 0000000140A05D91: mov     [rsi+918h], rcx
 * 0000000140A05D98: mov     rcx, rsi
 * 0000000140A05D9B: mov     [rsi+8F8h], eax
 * 0000000140A05DA1: call    $$b8
 * 0000000140A05DA6: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A05DAD: jmp     loc_140A0589F
 * 0000000140A05DB2: mov     r14, [r13+8]
 * 0000000140A05DB6: mov     r8d, [r13+10h]
 * 0000000140A05DBA: mov     r9, r14
 * 0000000140A05DBD: add     [rsi+828h], r8d
 * 0000000140A05DC4: mov     rax, r14
 * 0000000140A05DC7: mov     r10d, [rsi+814h]
 * 0000000140A05DCE: mov     r15, [rsi+818h]
 * 0000000140A05DD5: lea     rcx, [r14+r8]
 * 0000000140A05DD9: cmp     r14, rcx
 * 0000000140A05DDC: jnb     short loc_140A05DEF
 * 0000000140A05DDE: mov     r11d, 40h ; '@'
 * 0000000140A05DE4: prefetchnta byte ptr [rax]
 * 0000000140A05DE7: add     rax, r11
 * 0000000140A05DEA: cmp     rax, rcx
 * 0000000140A05DED: jb      short loc_140A05DE4
 * 0000000140A05DEF: mov     r11d, r8d
 * 0000000140A05DF2: mov     rbx, r15
 * 0000000140A05DF5: shr     r11d, 7
 * 0000000140A05DF9: mov     r12d, 0FFFFFFFFh
 * 0000000140A05DFF: test    r11d, r11d
 * 0000000140A05E02: jz      short loc_140A05E77
 * 0000000140A05E04: mov     rdi, 7010008004002001h
 * 0000000140A05E0E: mov     edx, 8
 * 0000000140A05E13: lea     esi, [rdx-7]
 * 0000000140A05E16: mov     rax, [r9]
 * 0000000140A05E19: mov     ecx, r10d
 * 0000000140A05E1C: xor     rax, rbx
 * 0000000140A05E1F: mov     rbx, [r9+8]
 * 0000000140A05E23: rol     rax, cl
 * 0000000140A05E26: add     r9, 10h
 * 0000000140A05E2A: xor     rbx, rax
 * 0000000140A05E2D: rol     rbx, cl
 * 0000000140A05E30: sub     rdx, rsi
 * 0000000140A05E33: jnz     short loc_140A05E16
 * 0000000140A05E35: mov     rcx, r9
 * 0000000140A05E38: sub     rcx, r14
 * 0000000140A05E3B: xor     rcx, r15
 * 0000000140A05E3E: mov     rax, rcx
 * 0000000140A05E41: rol     rax, 11h
 * 0000000140A05E45: xor     rcx, rax
 * 0000000140A05E48: mov     rax, rdi
 * 0000000140A05E4B: mul     rcx
 * 0000000140A05E4E: xor     r10d, eax
 * 0000000140A05E51: mov     [rbp+0BE0h+var_5D0], rdx
 * 0000000140A05E58: xor     r10d, edx
 * 0000000140A05E5B: mov     rdx, rsi
 * 0000000140A05E5E: and     r10d, 3Fh
 * 0000000140A05E62: cmovz   r10d, edx
 * 0000000140A05E66: add     r11d, r12d
 * 0000000140A05E69: jnz     short loc_140A05E0E
 * 0000000140A05E6B: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A05E70: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A05E77: and     r8d, 7Fh
 * 0000000140A05E7B: cmp     r8d, 8
 * 0000000140A05E7F: jb      short loc_140A05EAD
 * 0000000140A05E81: mov     edx, r8d
 * 0000000140A05E84: mov     esi, 1
 * 0000000140A05E89: shr     rdx, 3
 * 0000000140A05E8D: xor     rbx, [r9]
 * 0000000140A05E90: mov     ecx, r10d
 * 0000000140A05E93: rol     rbx, cl
 * 0000000140A05E96: add     r9, 8
 * 0000000140A05E9A: add     r8d, 0FFFFFFF8h
 * 0000000140A05E9E: sub     rdx, rsi
 * 0000000140A05EA1: jnz     short loc_140A05E8D
 * 0000000140A05EA3: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A05EA8: mov     edx, 1
 * 0000000140A05EAD: xor     r15d, r15d
 * 0000000140A05EB0: test    r8d, r8d
 * 0000000140A05EB3: jz      short loc_140A05ECA
 * 0000000140A05EB5: movzx   eax, byte ptr [r9]
 * 0000000140A05EB9: mov     ecx, r10d
 * 0000000140A05EBC: xor     rbx, rax
 * 0000000140A05EBF: add     r9, rdx
 * 0000000140A05EC2: rol     rbx, cl
 * 0000000140A05EC5: add     r8d, r12d
 * 0000000140A05EC8: jnz     short loc_140A05EB5
 * 0000000140A05ECA: mov     rax, rbx
 * 0000000140A05ECD: jmp     short loc_140A05ED1
 * 0000000140A05ECF: xor     ebx, eax
 * 0000000140A05ED1: shr     rax, 1Fh
 * 0000000140A05ED5: test    rax, rax
 * 0000000140A05ED8: jnz     short loc_140A05ECF
 * 0000000140A05EDA: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A05EDF: btr     ebx, 1Fh
 * 0000000140A05EE3: mov     r13d, r15d
 * 0000000140A05EE6: cmp     ebx, [rax+14h]
 * 0000000140A05EE9: jz      loc_140A05FE0
 * 0000000140A05EEF: cmp     [rax], r15d
 * 0000000140A05EF2: jnz     short loc_140A05EFC
 * 0000000140A05EF4: cmp     [rax+18h], r15d
 * 0000000140A05EF8: cmovnz  r13d, edx
 * 0000000140A05EFC: mov     ecx, [rax+10h]
 * 0000000140A05EFF: mov     rdx, [rax+8]
 * 0000000140A05F03: test    rcx, rcx
 * 0000000140A05F06: jz      loc_140A05FC2
 * 0000000140A05F0C: mov     eax, [rsi+994h]
 * 0000000140A05F12: mov     r8d, 40h ; '@'
 * 0000000140A05F18: test    r8b, al
 * 0000000140A05F1B: jz      loc_140A05FC2
 * 0000000140A05F21: mov     r12, cr8
 * 0000000140A05F25: lea     eax, [r8-3Eh]
 * 0000000140A05F29: mov     cr8, rax
 * 0000000140A05F2D: mov     r14, rdx
 * 0000000140A05F30: lea     rax, [rcx-1]
 * 0000000140A05F34: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A05F3B: add     rax, rdx
 * 0000000140A05F3E: or      rax, 0FFFh
 * 0000000140A05F44: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A05F49: lea     rax, [r14-1]
 * 0000000140A05F4D: mov     [rsp+0CE0h+var_C88], rax
 * 0000000140A05F52: movzx   r15d, r12b
 * 0000000140A05F56: mov     rax, [rsi+468h]
 * 0000000140A05F5D: xor     edx, edx
 * 0000000140A05F5F: mov     rcx, r14
 * 0000000140A05F62: call    KeGuardDispatchICall
 * 0000000140A05F67: cmp     eax, 0C000022Dh
 * 0000000140A05F6C: jnz     short loc_140A05F95
 * 0000000140A05F6E: test    r13d, r13d
 * 0000000140A05F71: jnz     short loc_140A05FBB
 * 0000000140A05F73: lea     eax, [r13+1]
 * 0000000140A05F77: cmp     r12b, al
 * 0000000140A05F7A: ja      short loc_140A05F99
 * 0000000140A05F7C: movzx   r15d, r12b
 * 0000000140A05F80: mov     cr8, r15
 * 0000000140A05F84: mov     al, [r14]
 * 0000000140A05F87: mov     rax, cr8
 * 0000000140A05F8B: lea     eax, [r13+2]
 * 0000000140A05F8F: mov     cr8, rax
 * 0000000140A05F93: jmp     short loc_140A05F56
 * 0000000140A05F95: test    eax, eax
 * 0000000140A05F97: js      short loc_140A05FBB
 * 0000000140A05F99: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A05F9E: mov     r11d, 1000h
 * 0000000140A05FA4: add     rax, r11
 * 0000000140A05FA7: add     r14, r11
 * 0000000140A05FAA: mov     [rsp+0CE0h+var_C88], rax
 * 0000000140A05FAF: cmp     rax, [rsp+0CE0h+var_C70]
 * 0000000140A05FB4: jnz     short loc_140A05F52
 * 0000000140A05FB6: jmp     loc_140A05D07
 * 0000000140A05FBB: mov     cr8, r15
 * 0000000140A05FBF: xor     r15d, r15d
 * 0000000140A05FC2: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A05FC7: mov     eax, [rsi+8F8h]
 * 0000000140A05FCD: mov     ecx, [r13+14h]
 * 0000000140A05FD1: test    eax, eax
 * 0000000140A05FD3: jnz     loc_140A05D51
 * 0000000140A05FD9: mov     eax, ebx
 * 0000000140A05FDB: jmp     loc_140A05D3B
 * 0000000140A05FE0: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A05FE7: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A05FEC: jmp     loc_140A0589F
 * 0000000140A05FF1: xor     ebx, eax
 * 0000000140A05FF3: shr     rax, 1Fh
 * 0000000140A05FF7: test    rax, rax
 * 0000000140A05FFA: jnz     short loc_140A05FF1
 * 0000000140A05FFC: btr     ebx, 1Fh
 * 0000000140A06000: mov     [rbp+0BE0h+var_C60], rbx
 * 0000000140A06004: jmp     loc_140A062A7
 * 0000000140A06009: mov     r8d, r15d
 * 0000000140A0600C: mov     rdx, r13
 * 0000000140A0600F: mov     rcx, rsi
 * 0000000140A06012: call    sub_140A125E8
 * 0000000140A06017: mov     ebx, eax
 * 0000000140A06019: mov     eax, r15d
 * 0000000140A0601C: shl     eax, 3
 * 0000000140A0601F: add     [rsi+828h], eax
 * 0000000140A06025: mov     eax, [rsi+994h]
 * 0000000140A0602B: mov     [rbp+0BE0h+var_C60], rbx
 * 0000000140A0602F: bt      eax, 0Bh
 * 0000000140A06033: jnb     loc_140A062A7
 * 0000000140A06039: lea     rbx, [r13-6]
 * 0000000140A0603D: xor     r10d, r10d
 * 0000000140A06040: lea     r14, [rbx+5]
 * 0000000140A06044: mov     al, [r14]
 * 0000000140A06047: cmp     byte ptr [rbx], 4Ch ; 'L'
 * 0000000140A0604A: jnz     loc_140A06242
 * 0000000140A06050: cmp     byte ptr [rbx+1], 87h
 * 0000000140A06054: jnz     loc_140A06242
 * 0000000140A0605A: cmp     [rbx+2], r10b
 * 0000000140A0605E: jnz     loc_140A06242
 * 0000000140A06064: cmp     byte ptr [rbx+3], 98h
 * 0000000140A06068: jnz     loc_140A06242
 * 0000000140A0606E: cmp     byte ptr [rbx+4], 0C3h
 * 0000000140A06072: jnz     loc_140A06242
 * 0000000140A06078: cmp     al, 90h
 * 0000000140A0607A: jz      short loc_140A06084
 * 0000000140A0607C: cmp     al, 0F1h
 * 0000000140A0607E: jnz     loc_140A06242
 * 0000000140A06084: mov     rcx, [rsi+4E0h]
 * 0000000140A0608B: cli
 * 0000000140A0608C: mov     eax, [rsi+990h]
 * 0000000140A06092: shr     eax, 0Ah
 * 0000000140A06095: and     eax, 1Fh
 * 0000000140A06098: lock bts [rcx], eax
 * 0000000140A0609C: jnb     short loc_140A060A3
 * 0000000140A0609E: sti
 * 0000000140A0609F: pause
 * 0000000140A060A1: jmp     short loc_140A0608B
 * 0000000140A060A3: mov     rdx, [rsi+8E0h]
 * 0000000140A060AA: mov     r8d, 26h ; '&'
 * 0000000140A060B0: mov     ecx, 130h
 * 0000000140A060B5: mov     rax, rdx
 * 0000000140A060B8: lea     r9d, [r8-25h]
 * 0000000140A060BC: mov     [rax], r10
 * 0000000140A060BF: add     ecx, 0FFFFFFF8h
 * 0000000140A060C2: add     rax, 8
 * 0000000140A060C6: sub     r8, r9
 * 0000000140A060C9: jnz     short loc_140A060BC
 * 0000000140A060CB: test    ecx, ecx
 * 0000000140A060CD: jz      short loc_140A060E0
 * 0000000140A060CF: mov     r8d, 0FFFFFFFFh
 * 0000000140A060D5: mov     [rax], r10b
 * 0000000140A060D8: add     rax, r9
 * 0000000140A060DB: add     ecx, r8d
 * 0000000140A060DE: jnz     short loc_140A060D5
 * 0000000140A060E0: movups  xmm0, xmmword ptr [rsi+848h]
 * 0000000140A060E7: mov     eax, 12Fh
 * 0000000140A060EC: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140A060F1: movups  xmm1, xmmword ptr [rsi+858h]
 * 0000000140A060F8: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140A060FD: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140A06104: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140A0610C: mov     word ptr [rbp+0BE0h+var_8E0], ax
 * 0000000140A06113: lea     rax, [rsi+88Ch]
 * 0000000140A0611A: mov     [rbp+302h], rdx
 * 0000000140A06121: mov     rcx, rax
 * 0000000140A06124: mov     [rdx+10h], ax
 * 0000000140A06128: shr     rcx, 10h
 * 0000000140A0612C: mov     [rbp+0BE0h+var_5C0], rax
 * 0000000140A06133: shr     rax, 20h
 * 0000000140A06137: mov     [rdx+16h], cx
 * 0000000140A0613B: mov     [rdx+18h], eax
 * 0000000140A0613E: sidt    fword ptr [rbp+0BE0h+var_740]
 * 0000000140A06145: lidt    fword ptr [rbp+0BE0h+var_8E0]
 * 0000000140A0614C: mov     byte ptr [r14], 0F1h
 * 0000000140A06150: mov     al, [r14]
 * 0000000140A06153: cmp     al, 0F1h
 * 0000000140A06155: jnz     loc_140A061FD
 * 0000000140A0615B: test    dword ptr [rsi+994h], 20000h
 * 0000000140A06165: jnz     short loc_140A061AD
 * 0000000140A06167: mov     rdx, gs:20h
 * 0000000140A06170: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A0617A: mov     rax, [rsi+4C0h]
 * 0000000140A06181: add     rcx, rsi
 * 0000000140A06184: mov     [rax], rcx
 * 0000000140A06187: lea     rcx, [rbx+6]
 * 0000000140A0618B: mov     rax, [rsi+4C8h]
 * 0000000140A06192: mov     [rax], rdx
 * 0000000140A06195: mov     rax, [rsi+4D0h]
 * 0000000140A0619C: mov     [rax], rcx
 * 0000000140A0619F: mov     rax, [rsi+4D8h]
 * 0000000140A061A6: mov     qword ptr [rax], 113h
 * 0000000140A061AD: mov     rax, r14
 * 0000000140A061B0: call    KeGuardDispatchICall
 * 0000000140A061B5: xor     r10d, r10d
 * 0000000140A061B8: test    dword ptr [rsi+994h], 20000h
 * 0000000140A061C2: jnz     short loc_140A061F6
 * 0000000140A061C4: mov     rax, [rsi+4C0h]
 * 0000000140A061CB: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A061D5: mov     [rax], rcx
 * 0000000140A061D8: mov     rax, [rsi+4C8h]
 * 0000000140A061DF: mov     [rax], r10
 * 0000000140A061E2: mov     rax, [rsi+4D0h]
 * 0000000140A061E9: mov     [rax], r10
 * 0000000140A061EC: mov     rax, [rsi+4D8h]
 * 0000000140A061F3: mov     [rax], r10
 * 0000000140A061F6: mov     al, [r14]
 * 0000000140A061F9: cmp     al, 0F1h
 * 0000000140A061FB: jz      short loc_140A06202
 * 0000000140A061FD: mov     r9d, r10d
 * 0000000140A06200: jmp     short loc_140A06215
 * 0000000140A06202: mov     byte ptr [r14], 90h
 * 0000000140A06206: mov     r9d, 1
 * 0000000140A0620C: mov     al, [r14]
 * 0000000140A0620F: cmp     al, 90h
 * 0000000140A06211: cmovnz  r9d, r10d
 * 0000000140A06215: lidt    fword ptr [rbp+0BE0h+var_740]
 * 0000000140A0621C: mov     ecx, [rsi+990h]
 * 0000000140A06222: mov     edx, 1
 * 0000000140A06227: mov     r8, [rsi+4E0h]
 * 0000000140A0622E: shr     ecx, 0Ah
 * 0000000140A06231: and     ecx, 1Fh
 * 0000000140A06234: shl     edx, cl
 * 0000000140A06236: not     edx
 * 0000000140A06238: lock and [r8], edx
 * 0000000140A0623C: sti
 * 0000000140A0623D: test    r9d, r9d
 * 0000000140A06240: jnz     short loc_140A0629E
 * 0000000140A06242: cmp     [rsi+8F8h], r10d
 * 0000000140A06249: jnz     short loc_140A0629E
 * 0000000140A0624B: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A06250: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0625A: add     rax, rsi
 * 0000000140A0625D: xor     edx, edx
 * 0000000140A0625F: mov     [rsi+900h], rax
 * 0000000140A06266: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A06270: add     rax, rcx
 * 0000000140A06273: mov     [rsi+908h], rax
 * 0000000140A0627A: movsxd  rax, dword ptr [rcx]
 * 0000000140A0627D: mov     rcx, rsi
 * 0000000140A06280: mov     [rsi+910h], rax
 * 0000000140A06287: mov     eax, 1
 * 0000000140A0628C: mov     [rsi+918h], rbx
 * 0000000140A06293: mov     [rsi+8F8h], eax
 * 0000000140A06299: call    $$b8
 * 0000000140A0629E: mov     rbx, [rbp+0BE0h+var_C60]
 * 0000000140A062A2: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A062A7: mov     ecx, [r12]
 * 0000000140A062AB: mov     eax, ecx
 * 0000000140A062AD: btr     eax, 1Fh
 * 0000000140A062B1: cmp     ebx, eax
 * 0000000140A062B3: jz      loc_140A06366
 * 0000000140A062B9: mov     edx, r15d
 * 0000000140A062BC: xor     r15d, r15d
 * 0000000140A062BF: test    rdx, rdx
 * 0000000140A062C2: jz      loc_140A063EA
 * 0000000140A062C8: mov     eax, [rsi+994h]
 * 0000000140A062CE: lea     r8d, [r15+40h]
 * 0000000140A062D2: test    r8b, al
 * 0000000140A062D5: jz      loc_140A063EA
 * 0000000140A062DB: mov     r15, cr8
 * 0000000140A062DF: lea     eax, [r8-3Eh]
 * 0000000140A062E3: mov     cr8, rax
 * 0000000140A062E7: mov     rbx, r13
 * 0000000140A062EA: dec     r13
 * 0000000140A062ED: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A062F4: add     r13, rdx
 * 0000000140A062F7: or      r13, 0FFFh
 * 0000000140A062FE: lea     r12, [rbx-1]
 * 0000000140A06302: movzx   r14d, r15b
 * 0000000140A06306: mov     rax, [rsi+468h]
 * 0000000140A0630D: xor     edx, edx
 * 0000000140A0630F: mov     rcx, rbx
 * 0000000140A06312: call    KeGuardDispatchICall
 * 0000000140A06317: cmp     eax, 0C000022Dh
 * 0000000140A0631C: jnz     short loc_140A06341
 * 0000000140A0631E: mov     eax, 1
 * 0000000140A06323: cmp     r15b, al
 * 0000000140A06326: ja      short loc_140A06349
 * 0000000140A06328: movzx   r14d, r15b
 * 0000000140A0632C: mov     cr8, r14
 * 0000000140A06330: mov     al, [rbx]
 * 0000000140A06332: mov     rax, cr8
 * 0000000140A06336: mov     eax, 2
 * 0000000140A0633B: mov     cr8, rax
 * 0000000140A0633F: jmp     short loc_140A06306
 * 0000000140A06341: test    eax, eax
 * 0000000140A06343: js      loc_140A063D2
 * 0000000140A06349: mov     eax, 1000h
 * 0000000140A0634E: add     rbx, rax
 * 0000000140A06351: add     r12, rax
 * 0000000140A06354: cmp     r12, r13
 * 0000000140A06357: jnz     short loc_140A06302
 * 0000000140A06359: mov     cr8, r14
 * 0000000140A0635D: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A06362: mov     r12, [rbp+0BE0h+var_C50]
 * 0000000140A06366: xor     r15d, r15d
 * 0000000140A06369: add     r12, 4
 * 0000000140A0636D: add     r14, 0Ch
 * 0000000140A06371: mov     [rbp+0BE0h+var_C50], r12
 * 0000000140A06375: mov     [rsp+0CE0h+var_C88], r14
 * 0000000140A0637A: cmp     r14, rdi
 * 0000000140A0637D: jnb     short loc_140A06398
 * 0000000140A0637F: mov     rax, [rbp+0BE0h+var_C08]
 * 0000000140A06383: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0638A: mov     eax, [rax]
 * 0000000140A0638C: cmp     [rsi+828h], eax
 * 0000000140A06392: jl      loc_140A058F9
 * 0000000140A06398: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0639F: cmp     r14, [rbp+0BE0h+var_C20]
 * 0000000140A063A3: jz      loc_140A06471
 * 0000000140A063A9: sub     r14, [rbp+0BE0h+var_C10]
 * 0000000140A063AD: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140A063B7: imul    r14
 * 0000000140A063BA: sar     rdx, 1
 * 0000000140A063BD: mov     rax, rdx
 * 0000000140A063C0: shr     rax, 3Fh
 * 0000000140A063C4: add     rdx, rax
 * 0000000140A063C7: mov     [rsi+824h], edx
 * 0000000140A063CD: jmp     loc_1409FC31B
 * 0000000140A063D2: mov     cr8, r14
 * 0000000140A063D6: mov     r12, [rbp+0BE0h+var_C50]
 * 0000000140A063DA: xor     r15d, r15d
 * 0000000140A063DD: mov     rbx, [rbp+0BE0h+var_C60]
 * 0000000140A063E1: mov     r13, [rsp+0CE0h+var_C70]
 * 0000000140A063E6: mov     ecx, [r12]
 * 0000000140A063EA: mov     eax, ecx
 * 0000000140A063EC: mov     ecx, [rsi+8F8h]
 * 0000000140A063F2: btr     eax, 1Fh
 * 0000000140A063F6: test    ecx, ecx
 * 0000000140A063F8: jnz     short loc_140A06467
 * 0000000140A063FA: mov     ecx, ebx
 * 0000000140A063FC: xor     rcx, rax
 * 0000000140A063FF: mov     rax, [rsi+590h]
 * 0000000140A06406: mov     [rax+18h], rcx
 * 0000000140A0640A: mov     ecx, [rsi+8F8h]
 * 0000000140A06410: test    ecx, ecx
 * 0000000140A06412: jnz     short loc_140A06467
 * 0000000140A06414: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A06419: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A06423: add     rax, rsi
 * 0000000140A06426: xor     edx, edx
 * 0000000140A06428: mov     [rsi+900h], rax
 * 0000000140A0642F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A06439: add     rax, rcx
 * 0000000140A0643C: mov     [rsi+908h], rax
 * 0000000140A06443: movsxd  rax, dword ptr [rcx]
 * 0000000140A06446: mov     rcx, rsi
 * 0000000140A06449: mov     [rsi+910h], rax
 * 0000000140A06450: mov     eax, 1
 * 0000000140A06455: mov     [rsi+918h], r13
 * 0000000140A0645C: mov     [rsi+8F8h], eax
 * 0000000140A06462: call    $$b8
 * 0000000140A06467: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A0646C: jmp     loc_140A06369
 * 0000000140A06471: mov     rcx, [rsi+540h]
 * 0000000140A06478: mov     r15, cr8
 * 0000000140A0647C: mov     eax, 0Fh
 * 0000000140A06481: mov     cr8, rax
 * 0000000140A06485: mov     rax, [rsi+150h]
 * 0000000140A0648C: call    KeGuardDispatchICall
 * 0000000140A06491: mov     rax, [rsi+610h]
 * 0000000140A06498: mov     r14, [rsp+0CE0h+var_C90]
 * 0000000140A0649D: mov     rcx, [rax]
 * 0000000140A064A0: mov     eax, [rcx]
 * 0000000140A064A2: lea     rbx, [rcx+10h]
 * 0000000140A064A6: mov     r12b, [rcx+0Ch]
 * 0000000140A064AA: lea     rcx, [rax+rax*2]
 * 0000000140A064AE: lea     r13, [rbx+rcx*8]
 * 0000000140A064B2: mov     r8d, 18h
 * 0000000140A064B8: lea     r9, [r14+18h]
 * 0000000140A064BC: mov     r10, rbx
 * 0000000140A064BF: mov     rcx, [r10]
 * 0000000140A064C2: add     r10, 8
 * 0000000140A064C6: mov     rax, [r9]
 * 0000000140A064C9: add     r9, 8
 * 0000000140A064CD: cmp     rcx, rax
 * 0000000140A064D0: jnz     short loc_140A06506
 * 0000000140A064D2: add     r8d, 0FFFFFFF8h
 * 0000000140A064D6: cmp     r8d, 8
 * 0000000140A064DA: jnb     short loc_140A064BF
 * 0000000140A064DC: test    r8d, r8d
 * 0000000140A064DF: jz      short loc_140A0650F
 * 0000000140A064E1: mov     r11d, 1
 * 0000000140A064E7: movzx   edx, byte ptr [r10]
 * 0000000140A064EB: add     r10, r11
 * 0000000140A064EE: movzx   eax, byte ptr [r9]
 * 0000000140A064F2: add     r9, r11
 * 0000000140A064F5: cmp     rdx, rax
 * 0000000140A064F8: jnz     short loc_140A06506
 * 0000000140A064FA: mov     eax, 0FFFFFFFFh
 * 0000000140A064FF: add     r8d, eax
 * 0000000140A06502: jz      short loc_140A0650F
 * 0000000140A06504: jmp     short loc_140A064E7
 * 0000000140A06506: add     rbx, 18h
 * 0000000140A0650A: cmp     rbx, r13
 * 0000000140A0650D: jb      short loc_140A064B2
 * 0000000140A0650F: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A06514: mov     rcx, [rsi+540h]
 * 0000000140A0651B: mov     rax, [rsi+190h]
 * 0000000140A06522: call    KeGuardDispatchICall
 * 0000000140A06527: movzx   eax, r15b
 * 0000000140A0652B: mov     cr8, rax
 * 0000000140A0652F: xor     r15d, r15d
 * 0000000140A06532: test    r12b, r12b
 * 0000000140A06535: jz      short loc_140A065B1
 * 0000000140A06537: mov     eax, [rsi+994h]
 * 0000000140A0653D: lea     ecx, [r15+10h]
 * 0000000140A06541: test    cl, al
 * 0000000140A06543: jz      short loc_140A065A0
 * 0000000140A06545: cmp     [rsi+8F8h], r15d
 * 0000000140A0654C: jnz     short loc_140A065A0
 * 0000000140A0654E: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A06553: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0655D: add     rax, rsi
 * 0000000140A06560: xor     edx, edx
 * 0000000140A06562: mov     [rsi+900h], rax
 * 0000000140A06569: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A06573: add     rax, rcx
 * 0000000140A06576: mov     [rsi+908h], rax
 * 0000000140A0657D: movsxd  rax, dword ptr [rcx]
 * 0000000140A06580: mov     rcx, rsi
 * 0000000140A06583: mov     [rsi+910h], rax
 * 0000000140A0658A: lea     eax, [r15+1]
 * 0000000140A0658E: mov     [rsi+918h], rax
 * 0000000140A06595: mov     [rsi+8F8h], eax
 * 0000000140A0659B: call    $$b8
 * 0000000140A065A0: mov     edx, 1
 * 0000000140A065A5: cmp     [r14+18h], rdx
 * 0000000140A065A9: jz      loc_140A0344D
 * 0000000140A065AF: jmp     short loc_140A065B6
 * 0000000140A065B1: mov     edx, 1
 * 0000000140A065B6: cmp     rbx, r13
 * 0000000140A065B9: jnz     loc_140A0344D
 * 0000000140A065BF: cmp     [rsi+8F8h], r15d
 * 0000000140A065C6: jnz     loc_140A0344D
 * 0000000140A065CC: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A065D1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A065DB: add     rax, rsi
 * 0000000140A065DE: mov     [rsi+900h], rax
 * 0000000140A065E5: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A065EF: add     rax, rcx
 * 0000000140A065F2: mov     [rsi+908h], rax
 * 0000000140A065F9: movsxd  rax, dword ptr [rcx]
 * 0000000140A065FC: mov     rcx, rsi
 * 0000000140A065FF: mov     [rsi+910h], rax
 * 0000000140A06606: mov     [rsi+918h], rbx
 * 0000000140A0660D: mov     [rsi+8F8h], edx
 * 0000000140A06613: xor     edx, edx
 * 0000000140A06615: call    $$b8
 * 0000000140A0661A: jmp     loc_140A0344D
 * 0000000140A0661F: mov     eax, [r13+24h]
 * 0000000140A06623: add     [rsi+828h], eax
 * 0000000140A06629: mov     ebx, [r13+20h]
 * 0000000140A0662D: mov     r9d, [r13+24h]
 * 0000000140A06631: add     rbx, rsi
 * 0000000140A06634: mov     r11d, [rsi+814h]
 * 0000000140A0663B: mov     r10, rbx
 * 0000000140A0663E: mov     r15, [rsi+818h]
 * 0000000140A06645: mov     rax, rbx
 * 0000000140A06648: lea     rcx, [rbx+r9]
 * 0000000140A0664C: cmp     rbx, rcx
 * 0000000140A0664F: jnb     short loc_140A06661
 * 0000000140A06651: mov     edx, 40h ; '@'
 * 0000000140A06656: prefetchnta byte ptr [rax]
 * 0000000140A06659: add     rax, rdx
 * 0000000140A0665C: cmp     rax, rcx
 * 0000000140A0665F: jb      short loc_140A06656
 * 0000000140A06661: mov     r14d, r9d
 * 0000000140A06664: mov     r8, r15
 * 0000000140A06667: shr     r14d, 7
 * 0000000140A0666B: mov     r12d, 1
 * 0000000140A06671: test    r14d, r14d
 * 0000000140A06674: jz      short loc_140A066E1
 * 0000000140A06676: mov     rsi, 7010008004002001h
 * 0000000140A06680: mov     edx, 8
 * 0000000140A06685: mov     rax, [r10]
 * 0000000140A06688: mov     ecx, r11d
 * 0000000140A0668B: xor     rax, r8
 * 0000000140A0668E: mov     r8, [r10+8]
 * 0000000140A06692: rol     rax, cl
 * 0000000140A06695: add     r10, 10h
 * 0000000140A06699: xor     r8, rax
 * 0000000140A0669C: rol     r8, cl
 * 0000000140A0669F: sub     rdx, r12
 * 0000000140A066A2: jnz     short loc_140A06685
 * 0000000140A066A4: mov     rcx, r10
 * 0000000140A066A7: sub     rcx, rbx
 * 0000000140A066AA: xor     rcx, r15
 * 0000000140A066AD: mov     rax, rcx
 * 0000000140A066B0: rol     rax, 11h
 * 0000000140A066B4: xor     rcx, rax
 * 0000000140A066B7: mov     rax, rsi
 * 0000000140A066BA: mul     rcx
 * 0000000140A066BD: xor     r11d, eax
 * 0000000140A066C0: mov     [rbp+0BE0h+var_5B8], rdx
 * 0000000140A066C7: xor     r11d, edx
 * 0000000140A066CA: mov     eax, 0FFFFFFFFh
 * 0000000140A066CF: and     r11d, 3Fh
 * 0000000140A066D3: cmovz   r11d, r12d
 * 0000000140A066D7: add     r14d, eax
 * 0000000140A066DA: jnz     short loc_140A06680
 * 0000000140A066DC: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A066E1: and     r9d, 7Fh
 * 0000000140A066E5: cmp     r9d, 8
 * 0000000140A066E9: jb      short loc_140A06708
 * 0000000140A066EB: mov     edx, r9d
 * 0000000140A066EE: shr     rdx, 3
 * 0000000140A066F2: xor     r8, [r10]
 * 0000000140A066F5: mov     ecx, r11d
 * 0000000140A066F8: rol     r8, cl
 * 0000000140A066FB: add     r10, 8
 * 0000000140A066FF: add     r9d, 0FFFFFFF8h
 * 0000000140A06703: sub     rdx, r12
 * 0000000140A06706: jnz     short loc_140A066F2
 * 0000000140A06708: xor     r15d, r15d
 * 0000000140A0670B: test    r9d, r9d
 * 0000000140A0670E: jz      short loc_140A0672E
 * 0000000140A06710: mov     r15d, 0FFFFFFFFh
 * 0000000140A06716: movzx   eax, byte ptr [r10]
 * 0000000140A0671A: mov     ecx, r11d
 * 0000000140A0671D: xor     r8, rax
 * 0000000140A06720: add     r10, r12
 * 0000000140A06723: rol     r8, cl
 * 0000000140A06726: add     r9d, r15d
 * 0000000140A06729: jnz     short loc_140A06716
 * 0000000140A0672B: xor     r15d, r15d
 * 0000000140A0672E: mov     rcx, [r13+18h]
 * 0000000140A06732: cmp     r8, rcx
 * 0000000140A06735: jz      loc_1409FC31B
 * 0000000140A0673B: mov     eax, [rsi+8F8h]
 * 0000000140A06741: test    eax, eax
 * 0000000140A06743: jnz     short loc_140A06759
 * 0000000140A06745: mov     rax, [rsi+590h]
 * 0000000140A0674C: xor     rcx, r8
 * 0000000140A0674F: mov     [rax+18h], rcx
 * 0000000140A06753: mov     eax, [rsi+8F8h]
 * 0000000140A06759: mov     ecx, [r13+20h]
 * 0000000140A0675D: add     rcx, rsi
 * 0000000140A06760: test    eax, eax
 * 0000000140A06762: jmp     loc_140A04866
 * 0000000140A06767: mov     ebx, 0Fh
 * 0000000140A0676C: sub     r10d, 2
 * 0000000140A06770: jz      loc_140A06F48
 * 0000000140A06776: sub     r10d, 1
 * 0000000140A0677A: jz      loc_140A06B3A
 * 0000000140A06780: cmp     r10d, 14h
 * 0000000140A06784: jz      short loc_140A067D5
 * 0000000140A06786: xor     r15d, r15d
 * 0000000140A06789: cmp     [rsi+8F8h], r15d
 * 0000000140A06790: jnz     loc_1409FC31B
 * 0000000140A06796: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A067A0: add     rax, rsi
 * 0000000140A067A3: mov     [rsi+900h], rax
 * 0000000140A067AA: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A067B4: add     rax, r13
 * 0000000140A067B7: mov     [rsi+908h], rax
 * 0000000140A067BE: mov     qword ptr [rsi+910h], 101h
 * 0000000140A067C9: mov     [rsi+918h], r15
 * 0000000140A067D0: jmp     loc_140A05868
 * 0000000140A067D5: mov     edx, [r13+28h]
 * 0000000140A067D9: lea     rcx, [rbp+0BE0h+var_2E0]
 * 0000000140A067E0: mov     rax, [rsi+1A0h]
 * 0000000140A067E7: call    KeGuardDispatchICall
 * 0000000140A067EC: mov     rax, [rsi+1D0h]
 * 0000000140A067F3: lea     rdx, [rbp+0BE0h+var_2D0]
 * 0000000140A067FA: lea     rcx, [rbp+0BE0h+var_2E0]
 * 0000000140A06801: call    KeGuardDispatchICall
 * 0000000140A06806: mov     r8, [rsi+0A10h]
 * 0000000140A0680D: xor     r15d, r15d
 * 0000000140A06810: test    r8, r8
 * 0000000140A06813: jz      short loc_140A06825
 * 0000000140A06815: mov     ebx, [r8+320h]
 * 0000000140A0681C: mov     r8, [rsi+0A10h]
 * 0000000140A06823: jmp     short loc_140A06836
 * 0000000140A06825: mov     ecx, 832h
 * 0000000140A0682A: rdmsr
 * 0000000140A0682C: shl     rdx, 20h
 * 0000000140A06830: or      rax, rdx
 * 0000000140A06833: mov     rbx, rax
 * 0000000140A06836: test    r8, r8
 * 0000000140A06839: jz      short loc_140A06844
 * 0000000140A0683B: mov     r14d, [r8+340h]
 * 0000000140A06842: jmp     short loc_140A06855
 * 0000000140A06844: mov     ecx, 834h
 * 0000000140A06849: rdmsr
 * 0000000140A0684B: shl     rdx, 20h
 * 0000000140A0684F: or      rax, rdx
 * 0000000140A06852: mov     r14, rax
 * 0000000140A06855: mov     rax, [rsi+198h]
 * 0000000140A0685C: lea     rcx, [rbp+0BE0h+var_2D0]
 * 0000000140A06863: call    KeGuardDispatchICall
 * 0000000140A06868: mov     ecx, 10h
 * 0000000140A0686D: test    [rsi+87Bh], cl
 * 0000000140A06873: jz      loc_140A069BE
 * 0000000140A06879: cli
 * 0000000140A0687A: mov     rdx, [rsi+8E0h]
 * 0000000140A06881: mov     r8d, 26h ; '&'
 * 0000000140A06887: mov     ecx, 130h
 * 0000000140A0688C: mov     rax, rdx
 * 0000000140A0688F: lea     r12d, [r8-25h]
 * 0000000140A06893: mov     [rax], r15
 * 0000000140A06896: add     ecx, 0FFFFFFF8h
 * 0000000140A06899: add     rax, 8
 * 0000000140A0689D: sub     r8, r12
 * 0000000140A068A0: jnz     short loc_140A06893
 * 0000000140A068A2: test    ecx, ecx
 * 0000000140A068A4: jz      short loc_140A068B7
 * 0000000140A068A6: mov     r8d, 0FFFFFFFFh
 * 0000000140A068AC: mov     [rax], r15b
 * 0000000140A068AF: add     rax, r12
 * 0000000140A068B2: add     ecx, r8d
 * 0000000140A068B5: jnz     short loc_140A068AC
 * 0000000140A068B7: movups  xmm0, xmmword ptr [rsi+848h]
 * 0000000140A068BE: mov     eax, 12Fh
 * 0000000140A068C3: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140A068C8: movups  xmm1, xmmword ptr [rsi+858h]
 * 0000000140A068CF: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140A068D4: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140A068DB: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140A068E3: mov     word ptr [rbp+0BE0h+var_920], ax
 * 0000000140A068EA: lea     rax, [rsi+878h]
 * 0000000140A068F1: mov     [rbp+2C2h], rdx
 * 0000000140A068F8: mov     rcx, rax
 * 0000000140A068FB: mov     [rdx+10h], ax
 * 0000000140A068FF: shr     rcx, 10h
 * 0000000140A06903: mov     [rbp+0BE0h+var_5B0], rax
 * 0000000140A0690A: shr     rax, 20h
 * 0000000140A0690E: mov     [rdx+16h], cx
 * 0000000140A06912: mov     [rdx+18h], eax
 * 0000000140A06915: sidt    fword ptr [rbp+0BE0h+var_770]
 * 0000000140A0691C: lidt    fword ptr [rbp+0BE0h+var_920]
 * 0000000140A06923: test    dword ptr [rsi+994h], 20000h
 * 0000000140A0692D: jnz     short loc_140A06971
 * 0000000140A0692F: mov     rdx, gs:20h
 * 0000000140A06938: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A06942: mov     rax, [rsi+4C0h]
 * 0000000140A06949: add     rcx, rsi
 * 0000000140A0694C: mov     [rax], rcx
 * 0000000140A0694F: mov     rax, [rsi+4C8h]
 * 0000000140A06956: mov     [rax], rdx
 * 0000000140A06959: mov     rax, [rsi+4D0h]
 * 0000000140A06960: mov     [rax], r15
 * 0000000140A06963: mov     rax, [rsi+4D8h]
 * 0000000140A0696A: mov     qword ptr [rax], 115h
 * 0000000140A06971: call    KiErrata361Present
 * 0000000140A06976: test    dword ptr [rsi+994h], 20000h
 * 0000000140A06980: jnz     short loc_140A069B4
 * 0000000140A06982: mov     rax, [rsi+4C0h]
 * 0000000140A06989: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A06993: mov     [rax], rcx
 * 0000000140A06996: mov     rax, [rsi+4C8h]
 * 0000000140A0699D: mov     [rax], r15
 * 0000000140A069A0: mov     rax, [rsi+4D0h]
 * 0000000140A069A7: mov     [rax], r15
 * 0000000140A069AA: mov     rax, [rsi+4D8h]
 * 0000000140A069B1: mov     [rax], r15
 * 0000000140A069B4: lidt    fword ptr [rbp+0BE0h+var_770]
 * 0000000140A069BB: sti
 * 0000000140A069BC: jmp     short loc_140A069C4
 * 0000000140A069BE: mov     r12d, 1
 * 0000000140A069C4: mov     eax, [r13+1Ch]
 * 0000000140A069C8: mov     r8d, [r13+18h]
 * 0000000140A069CC: and     eax, ebx
 * 0000000140A069CE: cmp     eax, r8d
 * 0000000140A069D1: jnz     short loc_140A069F2
 * 0000000140A069D3: bt      ebx, 10h
 * 0000000140A069D7: jb      loc_140A06A7C
 * 0000000140A069DD: cmp     bl, 0D1h
 * 0000000140A069E0: jz      loc_140A06A7C
 * 0000000140A069E6: lea     eax, [rbx+3]
 * 0000000140A069E9: cmp     al, r12b
 * 0000000140A069EC: jbe     loc_140A06A7C
 * 0000000140A069F2: mov     edx, [r13+28h]
 * 0000000140A069F6: mov     rax, 32000000000h
 * 0000000140A06A00: shl     rdx, 30h
 * 0000000140A06A04: or      rdx, r8
 * 0000000140A06A07: or      rdx, rax
 * 0000000140A06A0A: mov     eax, [rsi+8F8h]
 * 0000000140A06A10: test    eax, eax
 * 0000000140A06A12: jnz     short loc_140A06A7C
 * 0000000140A06A14: mov     rax, [rsi+590h]
 * 0000000140A06A1B: mov     ecx, ebx
 * 0000000140A06A1D: xor     rcx, r8
 * 0000000140A06A20: mov     [rax+18h], rcx
 * 0000000140A06A24: mov     eax, [rsi+8F8h]
 * 0000000140A06A2A: test    eax, eax
 * 0000000140A06A2C: jnz     short loc_140A06A7C
 * 0000000140A06A2E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A06A38: mov     rbx, 0B3B74BDEE4453415h
 * 0000000140A06A42: add     rax, rsi
 * 0000000140A06A45: mov     rcx, rsi
 * 0000000140A06A48: mov     [rsi+900h], rax
 * 0000000140A06A4F: lea     rax, [rbx+r13]
 * 0000000140A06A53: mov     [rsi+908h], rax
 * 0000000140A06A5A: movsxd  rax, dword ptr [r13+0]
 * 0000000140A06A5E: mov     [rsi+910h], rax
 * 0000000140A06A65: mov     [rsi+918h], rdx
 * 0000000140A06A6C: xor     edx, edx
 * 0000000140A06A6E: mov     [rsi+8F8h], r12d
 * 0000000140A06A75: call    $$b8
 * 0000000140A06A7A: jmp     short loc_140A06A86
 * 0000000140A06A7C: mov     rbx, 0B3B74BDEE4453415h
 * 0000000140A06A86: mov     eax, [r13+24h]
 * 0000000140A06A8A: mov     r8d, [r13+20h]
 * 0000000140A06A8E: and     eax, r14d
 * 0000000140A06A91: cmp     eax, r8d
 * 0000000140A06A94: jnz     short loc_140A06AB8
 * 0000000140A06A96: bt      r14d, 10h
 * 0000000140A06A9B: jb      loc_140A06F36
 * 0000000140A06AA1: cmp     r14b, 0D1h
 * 0000000140A06AA5: jz      loc_140A06F36
 * 0000000140A06AAB: lea     eax, [r14+3]
 * 0000000140A06AAF: cmp     al, r12b
 * 0000000140A06AB2: jbe     loc_140A06F36
 * 0000000140A06AB8: mov     edx, [r13+28h]
 * 0000000140A06ABC: mov     rax, 34000000000h
 * 0000000140A06AC6: shl     rdx, 30h
 * 0000000140A06ACA: or      rdx, r8
 * 0000000140A06ACD: or      rdx, rax
 * 0000000140A06AD0: mov     eax, [rsi+8F8h]
 * 0000000140A06AD6: test    eax, eax
 * 0000000140A06AD8: jnz     loc_140A06F36
 * 0000000140A06ADE: mov     rax, [rsi+590h]
 * 0000000140A06AE5: mov     ecx, r14d
 * 0000000140A06AE8: xor     rcx, r8
 * 0000000140A06AEB: mov     [rax+18h], rcx
 * 0000000140A06AEF: mov     eax, [rsi+8F8h]
 * 0000000140A06AF5: test    eax, eax
 * 0000000140A06AF7: jnz     loc_140A06F36
 * 0000000140A06AFD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A06B07: add     rax, rsi
 * 0000000140A06B0A: mov     [rsi+900h], rax
 * 0000000140A06B11: lea     rax, [rbx+r13]
 * 0000000140A06B15: mov     [rsi+908h], rax
 * 0000000140A06B1C: movsxd  rax, dword ptr [r13+0]
 * 0000000140A06B20: mov     [rsi+910h], rax
 * 0000000140A06B27: mov     [rsi+918h], rdx
 * 0000000140A06B2E: mov     [rsi+8F8h], r12d
 * 0000000140A06B35: jmp     loc_140A06F2C
 * 0000000140A06B3A: mov     edx, [r13+28h]
 * 0000000140A06B3E: lea     rcx, [rbp+0BE0h+var_2C0]
 * 0000000140A06B45: mov     rax, [rsi+1A0h]
 * 0000000140A06B4C: call    KeGuardDispatchICall
 * 0000000140A06B51: mov     rax, [rsi+1D0h]
 * 0000000140A06B58: lea     rdx, [rbp+0BE0h+var_2B0]
 * 0000000140A06B5F: lea     rcx, [rbp+0BE0h+var_2C0]
 * 0000000140A06B66: call    KeGuardDispatchICall
 * 0000000140A06B6B: lea     rdx, [rbp+0BE0h+var_190]
 * 0000000140A06B72: lea     rcx, [rbp+0BE0h+var_998]
 * 0000000140A06B79: call    KiGetGdtIdt
 * 0000000140A06B7E: mov     r15, [rbp+0BE0h+var_996]
 * 0000000140A06B85: mov     ecx, 2
 * 0000000140A06B8A: mov     r14d, [r13+10h]
 * 0000000140A06B8E: test    [rsi+87Bh], cl
 * 0000000140A06B94: jz      loc_140A06CC6
 * 0000000140A06B9A: mov     rdx, [rsi+8E0h]
 * 0000000140A06BA1: mov     r8d, 26h ; '&'
 * 0000000140A06BA7: mov     ecx, 130h
 * 0000000140A06BAC: mov     rax, rdx
 * 0000000140A06BAF: xor     r12d, r12d
 * 0000000140A06BB2: lea     r9d, [r8-25h]
 * 0000000140A06BB6: mov     [rax], r12
 * 0000000140A06BB9: add     ecx, 0FFFFFFF8h
 * 0000000140A06BBC: add     rax, 8
 * 0000000140A06BC0: sub     r8, r9
 * 0000000140A06BC3: jnz     short loc_140A06BB6
 * 0000000140A06BC5: test    ecx, ecx
 * 0000000140A06BC7: jz      short loc_140A06BDA
 * 0000000140A06BC9: mov     r8d, 0FFFFFFFFh
 * 0000000140A06BCF: mov     [rax], r12b
 * 0000000140A06BD2: add     rax, r9
 * 0000000140A06BD5: add     ecx, r8d
 * 0000000140A06BD8: jnz     short loc_140A06BCF
 * 0000000140A06BDA: movups  xmm0, xmmword ptr [rsi+848h]
 * 0000000140A06BE1: mov     eax, 12Fh
 * 0000000140A06BE6: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140A06BEB: movups  xmm1, xmmword ptr [rsi+858h]
 * 0000000140A06BF2: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140A06BF7: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140A06BFE: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140A06C06: mov     word ptr [rbp+0BE0h+var_910], ax
 * 0000000140A06C0D: lea     rax, [rsi+878h]
 * 0000000140A06C14: mov     [rbp+2D2h], rdx
 * 0000000140A06C1B: mov     rcx, rax
 * 0000000140A06C1E: mov     [rdx+10h], ax
 * 0000000140A06C22: shr     rcx, 10h
 * 0000000140A06C26: mov     [rbp+0BE0h+var_5A8], rax
 * 0000000140A06C2D: shr     rax, 20h
 * 0000000140A06C31: mov     [rdx+16h], cx
 * 0000000140A06C35: mov     [rdx+18h], eax
 * 0000000140A06C38: cli
 * 0000000140A06C39: sidt    fword ptr [rbp+0BE0h+var_750]
 * 0000000140A06C40: lidt    fword ptr [rbp+0BE0h+var_910]
 * 0000000140A06C47: mov     dr7, r12
 * 0000000140A06C4B: lea     rax, [rsi+87Eh]
 * 0000000140A06C52: mov     [rdx+10h], ax
 * 0000000140A06C56: mov     rcx, rax
 * 0000000140A06C59: shr     rcx, 10h
 * 0000000140A06C5D: shr     rax, 20h
 * 0000000140A06C61: mov     [rdx+16h], cx
 * 0000000140A06C65: mov     [rdx+18h], eax
 * 0000000140A06C68: test    byte ptr [rsi+87Bh], 20h
 * 0000000140A06C6F: jnz     short loc_140A06C7F
 * 0000000140A06C71: call    KiErrata704Present
 * 0000000140A06C76: mov     [rsi+8E8h], rax
 * 0000000140A06C7D: jmp     short loc_140A06CB0
 * 0000000140A06C7F: lea     rbx, [rsi+8AAh]
 * 0000000140A06C86: call    KiGetSs
 * 0000000140A06C8B: mov     [rbx], ax
 * 0000000140A06C8E: mov     dr0, rbx
 * 0000000140A06C91: mov     eax, 70001h
 * 0000000140A06C96: mov     dr7, rax
 * 0000000140A06C99: mov     rcx, rbx
 * 0000000140A06C9C: call    KiErrataSkx55Present
 * 0000000140A06CA1: mov     [rsi+8E8h], rax
 * 0000000140A06CA8: mov     dr7, r12
 * 0000000140A06CAC: mov     dr0, r12
 * 0000000140A06CB0: mov     eax, gs:1A4h
 * 0000000140A06CB8: mov     [rsi+8F0h], eax
 * 0000000140A06CBE: lidt    fword ptr [rbp+0BE0h+var_750]
 * 0000000140A06CC5: sti
 * 0000000140A06CC6: call    KiGetLdtr
 * 0000000140A06CCB: movzx   r12d, ax
 * 0000000140A06CCF: call    KiGetTr
 * 0000000140A06CD4: add     [rsi+828h], r14d
 * 0000000140A06CDB: lea     rcx, [r15+r14]
 * 0000000140A06CDF: mov     r9d, [rsi+814h]
 * 0000000140A06CE6: movzx   r13d, ax
 * 0000000140A06CEA: mov     r11, [rsi+818h]
 * 0000000140A06CF1: mov     r8, r15
 * 0000000140A06CF4: mov     rax, r15
 * 0000000140A06CF7: cmp     r15, rcx
 * 0000000140A06CFA: jnb     short loc_140A06D0C
 * 0000000140A06CFC: mov     edx, 40h ; '@'
 * 0000000140A06D01: prefetchnta byte ptr [rax]
 * 0000000140A06D04: add     rax, rdx
 * 0000000140A06D07: cmp     rax, rcx
 * 0000000140A06D0A: jb      short loc_140A06D01
 * 0000000140A06D0C: mov     r10d, r14d
 * 0000000140A06D0F: mov     rbx, r11
 * 0000000140A06D12: shr     r10d, 7
 * 0000000140A06D16: test    r10d, r10d
 * 0000000140A06D19: jz      short loc_140A06D93
 * 0000000140A06D1B: mov     rdi, 7010008004002001h
 * 0000000140A06D25: mov     edx, 8
 * 0000000140A06D2A: lea     esi, [rdx-7]
 * 0000000140A06D2D: mov     rax, [r8]
 * 0000000140A06D30: mov     ecx, r9d
 * 0000000140A06D33: xor     rax, rbx
 * 0000000140A06D36: mov     rbx, [r8+8]
 * 0000000140A06D3A: rol     rax, cl
 * 0000000140A06D3D: add     r8, 10h
 * 0000000140A06D41: xor     rbx, rax
 * 0000000140A06D44: rol     rbx, cl
 * 0000000140A06D47: sub     rdx, rsi
 * 0000000140A06D4A: jnz     short loc_140A06D2D
 * 0000000140A06D4C: mov     rcx, r8
 * 0000000140A06D4F: sub     rcx, r15
 * 0000000140A06D52: xor     rcx, r11
 * 0000000140A06D55: mov     rax, rcx
 * 0000000140A06D58: rol     rax, 11h
 * 0000000140A06D5C: xor     rcx, rax
 * 0000000140A06D5F: mov     rax, rdi
 * 0000000140A06D62: mul     rcx
 * 0000000140A06D65: xor     r9d, eax
 * 0000000140A06D68: mov     [rbp+0BE0h+var_5A0], rdx
 * 0000000140A06D6F: xor     r9d, edx
 * 0000000140A06D72: mov     rax, rsi
 * 0000000140A06D75: and     r9d, 3Fh
 * 0000000140A06D79: cmovz   r9d, eax
 * 0000000140A06D7D: mov     eax, 0FFFFFFFFh
 * 0000000140A06D82: add     r10d, eax
 * 0000000140A06D85: jnz     short loc_140A06D25
 * 0000000140A06D87: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A06D8C: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A06D93: and     r14d, 7Fh
 * 0000000140A06D97: mov     r10d, 1
 * 0000000140A06D9D: cmp     r14d, 8
 * 0000000140A06DA1: jb      short loc_140A06DC0
 * 0000000140A06DA3: mov     edx, r14d
 * 0000000140A06DA6: shr     rdx, 3
 * 0000000140A06DAA: xor     rbx, [r8]
 * 0000000140A06DAD: mov     ecx, r9d
 * 0000000140A06DB0: rol     rbx, cl
 * 0000000140A06DB3: add     r8, 8
 * 0000000140A06DB7: add     r14d, 0FFFFFFF8h
 * 0000000140A06DBB: sub     rdx, r10
 * 0000000140A06DBE: jnz     short loc_140A06DAA
 * 0000000140A06DC0: xor     r15d, r15d
 * 0000000140A06DC3: test    r14d, r14d
 * 0000000140A06DC6: jz      short loc_140A06DE6
 * 0000000140A06DC8: mov     r15d, 0FFFFFFFFh
 * 0000000140A06DCE: movzx   eax, byte ptr [r8]
 * 0000000140A06DD2: mov     ecx, r9d
 * 0000000140A06DD5: xor     rbx, rax
 * 0000000140A06DD8: add     r8, r10
 * 0000000140A06DDB: rol     rbx, cl
 * 0000000140A06DDE: add     r14d, r15d
 * 0000000140A06DE1: jnz     short loc_140A06DCE
 * 0000000140A06DE3: xor     r15d, r15d
 * 0000000140A06DE6: mov     rax, rbx
 * 0000000140A06DE9: jmp     short loc_140A06DED
 * 0000000140A06DEB: xor     ebx, eax
 * 0000000140A06DED: shr     rax, 1Fh
 * 0000000140A06DF1: test    rax, rax
 * 0000000140A06DF4: jnz     short loc_140A06DEB
 * 0000000140A06DF6: mov     rax, [rsi+198h]
 * 0000000140A06DFD: lea     rcx, [rbp+0BE0h+var_2B0]
 * 0000000140A06E04: btr     ebx, 1Fh
 * 0000000140A06E08: call    KeGuardDispatchICall
 * 0000000140A06E0D: mov     r9, [rsp+0CE0h+var_C90]
 * 0000000140A06E12: mov     r11d, 40h ; '@'
 * 0000000140A06E18: cmp     ebx, [r9+14h]
 * 0000000140A06E1C: jnz     short loc_140A06E3C
 * 0000000140A06E1E: movzx   eax, word ptr [r9+2Ch]
 * 0000000140A06E23: cmp     [rbp+0BE0h+var_998], ax
 * 0000000140A06E2A: jnz     short loc_140A06E3C
 * 0000000140A06E2C: test    r12w, r12w
 * 0000000140A06E30: jnz     short loc_140A06E3C
 * 0000000140A06E32: cmp     r13w, r11w
 * 0000000140A06E36: jz      loc_140A06F36
 * 0000000140A06E3C: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A06E46: mov     r10d, 1
 * 0000000140A06E4C: jz      short loc_140A06E97
 * 0000000140A06E4E: mov     rcx, [rsi+0A80h]
 * 0000000140A06E55: lea     edx, [r10+2Fh]
 * 0000000140A06E59: lea     r8d, [r10+5]
 * 0000000140A06E5D: mov     rax, [r9]
 * 0000000140A06E60: add     edx, 0FFFFFFF8h
 * 0000000140A06E63: mov     [rcx], rax
 * 0000000140A06E66: add     r9, 8
 * 0000000140A06E6A: add     rcx, 8
 * 0000000140A06E6E: sub     r8, r10
 * 0000000140A06E71: jnz     short loc_140A06E5D
 * 0000000140A06E73: test    edx, edx
 * 0000000140A06E75: jz      short loc_140A06E90
 * 0000000140A06E77: mov     r15d, 0FFFFFFFFh
 * 0000000140A06E7D: mov     al, [r9]
 * 0000000140A06E80: add     r9, r10
 * 0000000140A06E83: mov     [rcx], al
 * 0000000140A06E85: add     rcx, r10
 * 0000000140A06E88: add     edx, r15d
 * 0000000140A06E8B: jnz     short loc_140A06E7D
 * 0000000140A06E8D: xor     r15d, r15d
 * 0000000140A06E90: mov     r9, [rsi+0A80h]
 * 0000000140A06E97: mov     rax, [rbp+0BE0h+var_996]
 * 0000000140A06E9E: mov     ecx, ebx
 * 0000000140A06EA0: mov     [r9+18h], rax
 * 0000000140A06EA4: mov     [r9+20h], rcx
 * 0000000140A06EA8: test    r12w, r12w
 * 0000000140A06EAC: jz      short loc_140A06EB4
 * 0000000140A06EAE: movzx   eax, r12w
 * 0000000140A06EB2: jmp     short loc_140A06EBE
 * 0000000140A06EB4: cmp     r13w, r11w
 * 0000000140A06EB8: jz      short loc_140A06EC2
 * 0000000140A06EBA: movzx   eax, r13w
 * 0000000140A06EBE: mov     [r9+18h], rax
 * 0000000140A06EC2: mov     eax, [rsi+8F8h]
 * 0000000140A06EC8: mov     edx, [r9+14h]
 * 0000000140A06ECC: test    eax, eax
 * 0000000140A06ECE: jnz     short loc_140A06EE4
 * 0000000140A06ED0: mov     rax, [rsi+590h]
 * 0000000140A06ED7: xor     rcx, rdx
 * 0000000140A06EDA: mov     [rax+18h], rcx
 * 0000000140A06EDE: mov     eax, [rsi+8F8h]
 * 0000000140A06EE4: mov     rcx, [r9+8]
 * 0000000140A06EE8: test    eax, eax
 * 0000000140A06EEA: jnz     short loc_140A06F36
 * 0000000140A06EEC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A06EF6: add     rax, rsi
 * 0000000140A06EF9: mov     [rsi+900h], rax
 * 0000000140A06F00: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A06F0A: add     rax, r9
 * 0000000140A06F0D: mov     [rsi+908h], rax
 * 0000000140A06F14: movsxd  rax, dword ptr [r9]
 * 0000000140A06F17: mov     [rsi+910h], rax
 * 0000000140A06F1E: mov     [rsi+918h], rcx
 * 0000000140A06F25: mov     [rsi+8F8h], r10d
 * 0000000140A06F2C: xor     edx, edx
 * 0000000140A06F2E: mov     rcx, rsi
 * 0000000140A06F31: call    $$b8
 * 0000000140A06F36: mov     r14d, 8000h
 * 0000000140A06F3C: add     [rsi+828h], r14d
 * 0000000140A06F43: jmp     loc_1409FC321
 * 0000000140A06F48: mov     edx, [r13+28h]
 * 0000000140A06F4C: lea     rcx, [rbp+0BE0h+var_2A0]
 * 0000000140A06F53: mov     rax, [rsi+1A0h]
 * 0000000140A06F5A: xor     r15d, r15d
 * 0000000140A06F5D: mov     dword ptr [rbp+0BE0h+var_BF8], r15d
 * 0000000140A06F61: call    KeGuardDispatchICall
 * 0000000140A06F66: mov     rax, [rsi+1D0h]
 * 0000000140A06F6D: lea     rdx, [rbp+0BE0h+var_290]
 * 0000000140A06F74: lea     rcx, [rbp+0BE0h+var_2A0]
 * 0000000140A06F7B: call    KeGuardDispatchICall
 * 0000000140A06F80: lea     rdx, [rbp+0BE0h+var_900]
 * 0000000140A06F87: lea     rcx, [rbp+0BE0h+var_180]
 * 0000000140A06F8E: call    KiGetGdtIdt
 * 0000000140A06F93: mov     rcx, [rbp+0BE0h+var_8FE]
 * 0000000140A06F9A: mov     edi, r15d
 * 0000000140A06F9D: mov     [rsp+0CE0h+var_C70], rcx
 * 0000000140A06FA2: add     rcx, 4
 * 0000000140A06FA6: mov     [rsp+0CE0h+var_C88], rcx
 * 0000000140A06FAB: mov     rax, [rsi+8C8h]
 * 0000000140A06FB2: mov     r10, r15
 * 0000000140A06FB5: mov     [rbp+0BE0h+var_B00], rax
 * 0000000140A06FBC: mov     r14, r15
 * 0000000140A06FBF: mov     r8, [rsi+8D0h]
 * 0000000140A06FC6: mov     r12d, [rsi+8ACh]
 * 0000000140A06FCD: mov     r13d, [rsi+8B0h]
 * 0000000140A06FD4: mov     [rbp+0BE0h+var_C60], r8
 * 0000000140A06FD8: mov     [rsp+0CE0h+BugCheckParameter2], r15
 * 0000000140A06FDD: mov     [rbp+0BE0h+var_C50], r15
 * 0000000140A06FE1: mov     r15, cr8
 * 0000000140A06FE5: mov     cr8, rbx
 * 0000000140A06FE9: movzx   eax, word ptr [rcx-4]
 * 0000000140A06FED: movzx   r9d, word ptr [rcx]
 * 0000000140A06FF1: mov     word ptr [rbp+0BE0h+var_BD8], ax
 * 0000000140A06FF5: movzx   eax, word ptr [rcx+2]
 * 0000000140A06FF9: mov     word ptr [rbp+0BE0h+var_BD8+2], ax
 * 0000000140A06FFD: mov     eax, [rcx+4]
 * 0000000140A07000: mov     rcx, [rsi+618h]
 * 0000000140A07007: mov     dword ptr [rbp+0BE0h+var_BD8+4], eax
 * 0000000140A0700A: mov     rbx, [rbp+0BE0h+var_BD8]
 * 0000000140A0700E: mov     eax, edi
 * 0000000140A07010: mov     word ptr [rbp+0BE0h+arg_8], r9w
 * 0000000140A07018: lea     rdx, [rcx+rax*8]
 * 0000000140A0701C: cmp     rbx, rdx
 * 0000000140A0701F: jnz     short loc_140A07089
 * 0000000140A07021: mov     eax, 6000h
 * 0000000140A07026: test    ax, r9w
 * 0000000140A0702A: jz      short loc_140A0703C
 * 0000000140A0702C: movzx   eax, r15b
 * 0000000140A07030: mov     cr8, rax
 * 0000000140A07034: xor     r15d, r15d
 * 0000000140A07037: jmp     loc_140A07200
 * 0000000140A0703C: mov     rax, [rsi+470h]
 * 0000000140A07043: mov     ecx, edi
 * 0000000140A07045: call    KeGuardDispatchICall
 * 0000000140A0704A: mov     r14, [rax]
 * 0000000140A0704D: test    r14, r14
 * 0000000140A07050: jz      short loc_140A0707B
 * 0000000140A07052: mov     r12, [r12+r14]
 * 0000000140A07056: mov     [rsp+0CE0h+BugCheckParameter2], r12
 * 0000000140A0705B: cmp     edi, 30h ; '0'
 * 0000000140A0705E: jnb     short loc_140A07070
 * 0000000140A07060: movzx   eax, r15b
 * 0000000140A07064: mov     cr8, rax
 * 0000000140A07068: xor     r15d, r15d
 * 0000000140A0706B: jmp     loc_140A071FB
 * 0000000140A07070: mov     r13, [r13+r14+0]
 * 0000000140A07075: mov     r8, [rbp+0BE0h+var_C60]
 * 0000000140A07079: jmp     short loc_140A07091
 * 0000000140A0707B: mov     r8, [rbp+0BE0h+var_C60]
 * 0000000140A0707F: or      r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140A07083: mov     r13, [rbp+0BE0h+var_C50]
 * 0000000140A07087: jmp     short loc_140A0708C
 * 0000000140A07089: mov     r13, r10
 * 0000000140A0708C: mov     r12, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A07091: movzx   eax, r15b
 * 0000000140A07095: mov     cr8, rax
 * 0000000140A07099: xor     r15d, r15d
 * 0000000140A0709C: test    r14, r14
 * 0000000140A0709F: jnz     short loc_140A070EA
 * 0000000140A070A1: mov     rdx, [rbp+0BE0h+var_B00]
 * 0000000140A070A8: cmp     rbx, rdx
 * 0000000140A070AB: jb      loc_140A071FB
 * 0000000140A070B1: cmp     rbx, r8
 * 0000000140A070B4: ja      loc_140A071FB
 * 0000000140A070BA: mov     r8d, dword ptr [rbp+0BE0h+var_BD8]
 * 0000000140A070BE: mov     rcx, [rsi+8D8h]
 * 0000000140A070C5: sub     r8d, edx
 * 0000000140A070C8: mov     rax, [rsi+210h]
 * 0000000140A070CF: call    KeGuardDispatchICall
 * 0000000140A070D4: test    rax, rax
 * 0000000140A070D7: jz      loc_140A071FB
 * 0000000140A070DD: mov     eax, [rax+24h]
 * 0000000140A070E0: bt      eax, 19h
 * 0000000140A070E4: jb      loc_140A071FB
 * 0000000140A070EA: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A070EF: mov     ecx, 10h
 * 0000000140A070F4: cmp     [rax-2], cx
 * 0000000140A070F8: jnz     loc_140A071FB
 * 0000000140A070FE: movzx   ecx, word ptr [rax]
 * 0000000140A07101: mov     edx, 1F00h
 * 0000000140A07106: movzx   eax, cx
 * 0000000140A07109: and     ax, dx
 * 0000000140A0710C: mov     edx, 0E00h
 * 0000000140A07111: cmp     ax, dx
 * 0000000140A07114: jnz     loc_140A071FB
 * 0000000140A0711A: mov     eax, 8000h
 * 0000000140A0711F: test    ax, cx
 * 0000000140A07122: jz      loc_140A071FB
 * 0000000140A07128: mov     rax, [rsi+260h]
 * 0000000140A0712F: lea     rdx, [rbp+0BE0h+var_B00]
 * 0000000140A07136: xor     r8d, r8d
 * 0000000140A07139: mov     rcx, rbx
 * 0000000140A0713C: call    KeGuardDispatchICall
 * 0000000140A07141: test    rax, rax
 * 0000000140A07144: jz      short loc_140A0716A
 * 0000000140A07146: mov     eax, [rax]
 * 0000000140A07148: mov     rcx, [rbp+0BE0h+var_B00]
 * 0000000140A0714F: add     rax, rcx
 * 0000000140A07152: cmp     rax, rbx
 * 0000000140A07155: jnz     short loc_140A0716A
 * 0000000140A07157: cmp     rcx, [rsi+8C8h]
 * 0000000140A0715E: jnz     short loc_140A0716A
 * 0000000140A07160: test    r14, r14
 * 0000000140A07163: jnz     short loc_140A07173
 * 0000000140A07165: jmp     loc_140A0722F
 * 0000000140A0716A: test    r14, r14
 * 0000000140A0716D: jz      loc_140A071FB
 * 0000000140A07173: mov     eax, 6000h
 * 0000000140A07178: test    word ptr [rbp+0BE0h+arg_8], ax
 * 0000000140A0717F: jnz     short loc_140A071FB
 * 0000000140A07181: cmp     r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140A07185: jz      loc_140A0722F
 * 0000000140A0718B: mov     rax, [rsi+260h]
 * 0000000140A07192: lea     rdx, [rbp+0BE0h+var_B00]
 * 0000000140A07199: xor     r8d, r8d
 * 0000000140A0719C: mov     rcx, r12
 * 0000000140A0719F: call    KeGuardDispatchICall
 * 0000000140A071A4: test    rax, rax
 * 0000000140A071A7: jz      short loc_140A071FB
 * 0000000140A071A9: mov     eax, [rax]
 * 0000000140A071AB: mov     rdx, [rbp+0BE0h+var_B00]
 * 0000000140A071B2: add     rax, rdx
 * 0000000140A071B5: cmp     rax, r12
 * 0000000140A071B8: jnz     short loc_140A071FB
 * 0000000140A071BA: cmp     rdx, [rsi+8C8h]
 * 0000000140A071C1: jnz     short loc_140A071FB
 * 0000000140A071C3: mov     rcx, [rsi+8D8h]
 * 0000000140A071CA: mov     r8d, r12d
 * 0000000140A071CD: mov     rax, [rsi+210h]
 * 0000000140A071D4: sub     r8d, edx
 * 0000000140A071D7: call    KeGuardDispatchICall
 * 0000000140A071DC: test    rax, rax
 * 0000000140A071DF: jz      short loc_140A071FB
 * 0000000140A071E1: mov     eax, [rax+24h]
 * 0000000140A071E4: bt      eax, 19h
 * 0000000140A071E8: jb      short loc_140A071FB
 * 0000000140A071EA: cmp     edi, 0FEh
 * 0000000140A071F0: jnz     short loc_140A0722F
 * 0000000140A071F2: cmp     r13, [rsi+8B8h]
 * 0000000140A071F9: jz      short loc_140A0722F
 * 0000000140A071FB: mov     r10, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A07200: mov     rax, [rsi+590h]
 * 0000000140A07207: mov     [rax], rbx
 * 0000000140A0720A: mov     dword ptr [rax+10h], 80h
 * 0000000140A07211: test    r10, r10
 * 0000000140A07214: jz      short loc_140A07228
 * 0000000140A07216: mov     rax, [rsi+590h]
 * 0000000140A0721D: mov     [rax+8], r10
 * 0000000140A07221: mov     dword ptr [rax+14h], 80h
 * 0000000140A07228: mov     dword ptr [rbp+0BE0h+var_BF8], 1
 * 0000000140A0722F: mov     rcx, [rsp+0CE0h+var_C88]
 * 0000000140A07234: inc     edi
 * 0000000140A07236: add     rcx, 10h
 * 0000000140A0723A: mov     ebx, 0Fh
 * 0000000140A0723F: mov     [rsp+0CE0h+var_C88], rcx
 * 0000000140A07244: cmp     edi, 0FFh
 * 0000000140A0724A: jbe     loc_140A06FAB
 * 0000000140A07250: lea     ecx, [rbx-0Eh]
 * 0000000140A07253: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0725A: test    [rsi+87Bh], cl
 * 0000000140A07260: jz      loc_140A07334
 * 0000000140A07266: cli
 * 0000000140A07267: mov     r14d, 0C0000082h
 * 0000000140A0726D: mov     ecx, r14d
 * 0000000140A07270: rdmsr
 * 0000000140A07272: shl     rdx, 20h
 * 0000000140A07276: or      rax, rdx
 * 0000000140A07279: lea     rdx, [rsi+87Ah]
 * 0000000140A07280: mov     rbx, rax
 * 0000000140A07283: mov     rax, rdx
 * 0000000140A07286: shr     rdx, 20h
 * 0000000140A0728A: wrmsr
 * 0000000140A0728C: mov     r13d, 20000h
 * 0000000140A07292: test    [rsi+994h], r13d
 * 0000000140A07299: jnz     short loc_140A072DD
 * 0000000140A0729B: mov     rdx, gs:20h
 * 0000000140A072A4: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A072AE: mov     rax, [rsi+4C0h]
 * 0000000140A072B5: add     rcx, rsi
 * 0000000140A072B8: mov     [rax], rcx
 * 0000000140A072BB: mov     rax, [rsi+4C8h]
 * 0000000140A072C2: mov     [rax], rdx
 * 0000000140A072C5: mov     rax, [rsi+4D0h]
 * 0000000140A072CC: mov     [rax], r14
 * 0000000140A072CF: mov     rax, [rsi+4D8h]
 * 0000000140A072D6: mov     qword ptr [rax], 112h
 * 0000000140A072DD: lea     rax, [rsi+87Ch]
 * 0000000140A072E4: call    KeGuardDispatchICall
 * 0000000140A072E9: test    [rsi+994h], r13d
 * 0000000140A072F0: jnz     short loc_140A07324
 * 0000000140A072F2: mov     rax, [rsi+4C0h]
 * 0000000140A072F9: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A07303: mov     [rax], rcx
 * 0000000140A07306: mov     rax, [rsi+4C8h]
 * 0000000140A0730D: mov     [rax], r15
 * 0000000140A07310: mov     rax, [rsi+4D0h]
 * 0000000140A07317: mov     [rax], r15
 * 0000000140A0731A: mov     rax, [rsi+4D8h]
 * 0000000140A07321: mov     [rax], r15
 * 0000000140A07324: mov     rdx, rbx
 * 0000000140A07327: mov     rax, rbx
 * 0000000140A0732A: shr     rdx, 20h
 * 0000000140A0732E: mov     ecx, r14d
 * 0000000140A07331: wrmsr
 * 0000000140A07333: sti
 * 0000000140A07334: mov     r15, [rsp+0CE0h+var_C70]
 * 0000000140A07339: add     dword ptr [rsi+828h], 350h
 * 0000000140A07343: mov     r8, r15
 * 0000000140A07346: mov     ebx, [rsi+828h]
 * 0000000140A0734C: mov     rax, r15
 * 0000000140A0734F: mov     r9d, [rsi+814h]
 * 0000000140A07356: mov     r11, [rsi+818h]
 * 0000000140A0735D: lea     rcx, [r15+350h]
 * 0000000140A07364: cmp     r15, rcx
 * 0000000140A07367: jnb     short loc_140A07379
 * 0000000140A07369: mov     edx, 40h ; '@'
 * 0000000140A0736E: prefetchnta byte ptr [rax]
 * 0000000140A07371: add     rax, rdx
 * 0000000140A07374: cmp     rax, rcx
 * 0000000140A07377: jb      short loc_140A0736E
 * 0000000140A07379: mov     r10d, 6
 * 0000000140A0737F: mov     r14, r11
 * 0000000140A07382: mov     rsi, 7010008004002001h
 * 0000000140A0738C: lea     r13d, [r10+2]
 * 0000000140A07390: mov     rdx, r13
 * 0000000140A07393: mov     r12d, 1
 * 0000000140A07399: mov     rax, [r8]
 * 0000000140A0739C: mov     ecx, r9d
 * 0000000140A0739F: xor     rax, r14
 * 0000000140A073A2: add     r8, r13
 * 0000000140A073A5: rol     rax, cl
 * 0000000140A073A8: mov     r14, [r8]
 * 0000000140A073AB: add     r8, r13
 * 0000000140A073AE: xor     r14, rax
 * 0000000140A073B1: rol     r14, cl
 * 0000000140A073B4: sub     rdx, r12
 * 0000000140A073B7: jnz     short loc_140A07399
 * 0000000140A073B9: mov     rcx, r8
 * 0000000140A073BC: sub     rcx, r15
 * 0000000140A073BF: xor     rcx, r11
 * 0000000140A073C2: mov     rax, rcx
 * 0000000140A073C5: rol     rax, 11h
 * 0000000140A073C9: xor     rcx, rax
 * 0000000140A073CC: mov     rax, rsi
 * 0000000140A073CF: mul     rcx
 * 0000000140A073D2: xor     r9d, eax
 * 0000000140A073D5: mov     [rbp+0BE0h+var_598], rdx
 * 0000000140A073DC: xor     r9d, edx
 * 0000000140A073DF: mov     rax, r12
 * 0000000140A073E2: and     r9d, 3Fh
 * 0000000140A073E6: cmovz   r9d, eax
 * 0000000140A073EA: mov     eax, 0FFFFFFFFh
 * 0000000140A073EF: add     r10d, eax
 * 0000000140A073F2: jnz     short loc_140A07390
 * 0000000140A073F4: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A073F9: lea     edx, [r10+50h]
 * 0000000140A073FD: mov     r12d, dword ptr [rbp+0BE0h+var_BF8]
 * 0000000140A07401: lea     r10d, [rdx-46h]
 * 0000000140A07405: lea     r11d, [rdx-4Fh]
 * 0000000140A07409: xor     r14, [r8]
 * 0000000140A0740C: mov     ecx, r9d
 * 0000000140A0740F: rol     r14, cl
 * 0000000140A07412: add     r8, r13
 * 0000000140A07415: add     edx, 0FFFFFFF8h
 * 0000000140A07418: sub     r10, r11
 * 0000000140A0741B: jnz     short loc_140A07409
 * 0000000140A0741D: test    edx, edx
 * 0000000140A0741F: jz      short loc_140A07439
 * 0000000140A07421: mov     r10, rax
 * 0000000140A07424: movzx   eax, byte ptr [r8]
 * 0000000140A07428: mov     ecx, r9d
 * 0000000140A0742B: xor     r14, rax
 * 0000000140A0742E: add     r8, r11
 * 0000000140A07431: rol     r14, cl
 * 0000000140A07434: add     edx, r10d
 * 0000000140A07437: jnz     short loc_140A07424
 * 0000000140A07439: mov     rax, r14
 * 0000000140A0743C: jmp     short loc_140A07441
 * 0000000140A0743E: xor     r14d, eax
 * 0000000140A07441: shr     rax, 1Fh
 * 0000000140A07445: test    rax, rax
 * 0000000140A07448: jnz     short loc_140A0743E
 * 0000000140A0744A: lea     eax, [rbx+10h]
 * 0000000140A0744D: btr     r14d, 1Fh
 * 0000000140A07452: mov     [rsi+828h], eax
 * 0000000140A07458: lea     rdx, [r15+0E10h]
 * 0000000140A0745F: mov     r9d, [rsi+814h]
 * 0000000140A07466: lea     rcx, [r15+0E20h]
 * 0000000140A0746D: mov     rbx, [rsi+818h]
 * 0000000140A07474: mov     rax, rdx
 * 0000000140A07477: cmp     rdx, rcx
 * 0000000140A0747A: jnb     short loc_140A0748D
 * 0000000140A0747C: mov     r8d, 40h ; '@'
 * 0000000140A07482: prefetchnta byte ptr [rax]
 * 0000000140A07485: add     rax, r8
 * 0000000140A07488: cmp     rax, rcx
 * 0000000140A0748B: jb      short loc_140A07482
 * 0000000140A0748D: mov     eax, 2
 * 0000000140A07492: lea     r8d, [rax+0Eh]
 * 0000000140A07496: xor     rbx, [rdx]
 * 0000000140A07499: mov     ecx, r9d
 * 0000000140A0749C: rol     rbx, cl
 * 0000000140A0749F: add     rdx, r13
 * 0000000140A074A2: add     r8d, 0FFFFFFF8h
 * 0000000140A074A6: sub     rax, r11
 * 0000000140A074A9: jnz     short loc_140A07496
 * 0000000140A074AB: xor     r15d, r15d
 * 0000000140A074AE: test    r8d, r8d
 * 0000000140A074B1: jz      short loc_140A074D0
 * 0000000140A074B3: mov     r15d, 0FFFFFFFFh
 * 0000000140A074B9: movzx   eax, byte ptr [rdx]
 * 0000000140A074BC: mov     ecx, r9d
 * 0000000140A074BF: xor     rbx, rax
 * 0000000140A074C2: add     rdx, r11
 * 0000000140A074C5: rol     rbx, cl
 * 0000000140A074C8: add     r8d, r15d
 * 0000000140A074CB: jnz     short loc_140A074B9
 * 0000000140A074CD: xor     r15d, r15d
 * 0000000140A074D0: mov     rax, rbx
 * 0000000140A074D3: jmp     short loc_140A074D7
 * 0000000140A074D5: xor     ebx, eax
 * 0000000140A074D7: shr     rax, 1Fh
 * 0000000140A074DB: test    rax, rax
 * 0000000140A074DE: jnz     short loc_140A074D5
 * 0000000140A074E0: mov     rax, [rsi+198h]
 * 0000000140A074E7: lea     rcx, [rbp+0BE0h+var_290]
 * 0000000140A074EE: btr     ebx, 1Fh
 * 0000000140A074F2: call    KeGuardDispatchICall
 * 0000000140A074F7: mov     r8, [rsp+0CE0h+var_C90]
 * 0000000140A074FC: mov     edx, [r8+14h]
 * 0000000140A07500: cmp     r14d, edx
 * 0000000140A07503: jnz     short loc_140A07524
 * 0000000140A07505: mov     eax, ebx
 * 0000000140A07507: cmp     rax, [r8+18h]
 * 0000000140A0750B: jnz     short loc_140A07524
 * 0000000140A0750D: movzx   eax, word ptr [r8+2Ch]
 * 0000000140A07512: cmp     [rbp+0BE0h+var_900], ax
 * 0000000140A07519: jnz     short loc_140A07524
 * 0000000140A0751B: test    r12d, r12d
 * 0000000140A0751E: jz      loc_140A075BA
 * 0000000140A07524: test    r12d, r12d
 * 0000000140A07527: jnz     short loc_140A0755F
 * 0000000140A07529: mov     eax, ebx
 * 0000000140A0752B: cmp     rax, [r8+18h]
 * 0000000140A0752F: jnz     short loc_140A07542
 * 0000000140A07531: cmp     [rsi+8F8h], r15d
 * 0000000140A07538: jnz     short loc_140A0755F
 * 0000000140A0753A: mov     ecx, r14d
 * 0000000140A0753D: xor     rcx, rdx
 * 0000000140A07540: jmp     short loc_140A07554
 * 0000000140A07542: mov     eax, [r8+18h]
 * 0000000140A07546: cmp     [rsi+8F8h], r15d
 * 0000000140A0754D: jnz     short loc_140A0755F
 * 0000000140A0754F: mov     ecx, ebx
 * 0000000140A07551: xor     rcx, rax
 * 0000000140A07554: mov     rax, [rsi+590h]
 * 0000000140A0755B: mov     [rax+18h], rcx
 * 0000000140A0755F: mov     rcx, [r8+8]
 * 0000000140A07563: cmp     [rsi+8F8h], r15d
 * 0000000140A0756A: jnz     short loc_140A075BA
 * 0000000140A0756C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A07576: xor     edx, edx
 * 0000000140A07578: add     rax, rsi
 * 0000000140A0757B: mov     [rsi+900h], rax
 * 0000000140A07582: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0758C: add     rax, r8
 * 0000000140A0758F: mov     [rsi+908h], rax
 * 0000000140A07596: movsxd  rax, dword ptr [r8]
 * 0000000140A07599: mov     [rsi+910h], rax
 * 0000000140A075A0: mov     eax, 1
 * 0000000140A075A5: mov     [rsi+918h], rcx
 * 0000000140A075AC: mov     rcx, rsi
 * 0000000140A075AF: mov     [rsi+8F8h], eax
 * 0000000140A075B5: call    $$b8
 * 0000000140A075BA: add     dword ptr [rsi+828h], 10000h
 * 0000000140A075C4: jmp     loc_1409FC31B
 * 0000000140A075C9: mov     edx, [r13+2Ch]
 * 0000000140A075CD: lea     rcx, [rbp+0BE0h+var_280]
 * 0000000140A075D4: mov     rax, [rsi+1A0h]
 * 0000000140A075DB: call    KeGuardDispatchICall
 * 0000000140A075E0: mov     rax, [rsi+1D0h]
 * 0000000140A075E7: lea     rdx, [rbp+0BE0h+var_270]
 * 0000000140A075EE: lea     rcx, [rbp+0BE0h+var_280]
 * 0000000140A075F5: call    KeGuardDispatchICall
 * 0000000140A075FA: xor     ecx, ecx
 * 0000000140A075FC: xgetbv
 * 0000000140A075FF: shl     rdx, 20h
 * 0000000140A07603: lea     rcx, [rbp+0BE0h+var_270]
 * 0000000140A0760A: or      rdx, rax
 * 0000000140A0760D: mov     rax, [rsi+198h]
 * 0000000140A07614: mov     rbx, rdx
 * 0000000140A07617: call    KeGuardDispatchICall
 * 0000000140A0761C: mov     r8, [r13+18h]
 * 0000000140A07620: xor     r15d, r15d
 * 0000000140A07623: mov     rdx, [r13+20h]
 * 0000000140A07627: and     r8, rbx
 * 0000000140A0762A: cmp     r8, rdx
 * 0000000140A0762D: jz      loc_1409FC31B
 * 0000000140A07633: mov     eax, [r13+28h]
 * 0000000140A07637: mov     ecx, [r13+2Ch]
 * 0000000140A0763B: shl     rcx, 20h
 * 0000000140A0763F: or      rcx, rax
 * 0000000140A07642: mov     eax, [rsi+8F8h]
 * 0000000140A07648: test    eax, eax
 * 0000000140A0764A: jnz     loc_1409FC31B
 * 0000000140A07650: mov     rax, [rsi+590h]
 * 0000000140A07657: xor     rdx, r8
 * 0000000140A0765A: mov     [rax+18h], rdx
 * 0000000140A0765E: mov     eax, [rsi+8F8h]
 * 0000000140A07664: jmp     loc_1409FC6A5
 * 0000000140A07669: mov     r13, rdx
 * 0000000140A0766C: mov     [rsi+820h], ecx
 * 0000000140A07672: cmp     [rbp+0BE0h+var_BC8], r15d
 * 0000000140A07676: jz      short loc_140A076E2
 * 0000000140A07678: mov     rcx, gs:20h
 * 0000000140A07681: mov     rax, [rsi+648h]
 * 0000000140A07688: mov     rdx, [rax+rcx]
 * 0000000140A0768C: lea     rcx, [rbp+0BE0h+var_260]
 * 0000000140A07693: mov     rax, [rsi+688h]
 * 0000000140A0769A: add     rdx, [rsi+6A8h]
 * 0000000140A076A1: mov     rbx, [rdx+rax]
 * 0000000140A076A5: mov     rax, [rsi+198h]
 * 0000000140A076AC: call    KeGuardDispatchICall
 * 0000000140A076B1: mov     rax, [rsi+440h]
 * 0000000140A076B8: lea     rcx, [rbp+0BE0h+var_6C0]
 * 0000000140A076BF: call    KeGuardDispatchICall
 * 0000000140A076C4: mov     rax, [rsi+3A8h]
 * 0000000140A076CB: mov     rcx, rbx
 * 0000000140A076CE: call    KeGuardDispatchICall
 * 0000000140A076D3: mov     rax, [rsi+3B8h]
 * 0000000140A076DA: mov     rcx, rbx
 * 0000000140A076DD: call    KeGuardDispatchICall
 * 0000000140A076E2: cmp     [rbp+0BE0h+var_C38], r15d
 * 0000000140A076E6: jz      loc_140A0777D
 * 0000000140A076EC: test    [rsi+990h], r14d
 * 0000000140A076F3: jnz     short loc_140A076FE
 * 0000000140A076F5: cmp     [rsi+8F8h], r15d
 * 0000000140A076FC: jnz     short loc_140A0777D
 * 0000000140A076FE: mov     rbx, [rsi+980h]
 * 0000000140A07705: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A0770C: mov     [rsi+980h], r15
 * 0000000140A07713: mov     rcx, rbx
 * 0000000140A07716: mov     rax, [rsi+298h]
 * 0000000140A0771D: call    KeGuardDispatchICall
 * 0000000140A07722: mov     eax, [rsi+990h]
 * 0000000140A07728: test    r13b, al
 * 0000000140A0772B: jz      short loc_140A07769
 * 0000000140A0772D: and     eax, 0FFFFFFFEh
 * 0000000140A07730: mov     rcx, rbx
 * 0000000140A07733: mov     [rsi+990h], eax
 * 0000000140A07739: mov     rax, [rsi+280h]
 * 0000000140A07740: call    KeGuardDispatchICall
 * 0000000140A07745: mov     rbx, rax
 * 0000000140A07748: test    rax, rax
 * 0000000140A0774B: jz      short loc_140A0775E
 * 0000000140A0774D: mov     rax, [rsi+2A0h]
 * 0000000140A07754: mov     rcx, rbx
 * 0000000140A07757: call    KeGuardDispatchICall
 * 0000000140A0775C: jmp     short loc_140A07763
 * 0000000140A0775E: mov     eax, 0FFFFFFFFh
 * 0000000140A07763: mov     [rsi+970h], eax
 * 0000000140A07769: test    rbx, rbx
 * 0000000140A0776C: jz      short loc_140A0777D
 * 0000000140A0776E: mov     rax, [rsi+288h]
 * 0000000140A07775: mov     rcx, rbx
 * 0000000140A07778: call    KeGuardDispatchICall
 * 0000000140A0777D: mov     eax, [rsi+990h]
 * 0000000140A07783: mov     ecx, 800008h
 * 0000000140A07788: and     eax, ecx
 * 0000000140A0778A: cmp     eax, ecx
 * 0000000140A0778C: jnz     loc_140A07B73
 * 0000000140A07792: mov     eax, [rsi+994h]
 * 0000000140A07798: mov     r11d, [rsi+808h]
 * 0000000140A0779F: and     eax, r13d
 * 0000000140A077A2: mov     rax, [rsi+0A70h]
 * 0000000140A077A9: mov     r10d, [rsi+7E4h]
 * 0000000140A077B0: mov     r12, [rsi+9F8h]
 * 0000000140A077B7: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A077BC: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 0000000140A077C3: jz      short loc_140A077CC
 * 0000000140A077C5: mov     r12, [rsi+5D8h]
 * 0000000140A077CC: mov     rax, [rsi+160h]
 * 0000000140A077D3: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A077D7: mov     rax, [rsi+2C8h]
 * 0000000140A077DE: mov     [rbp+0BE0h+var_BD8], rax
 * 0000000140A077E2: mov     rax, [rsi+340h]
 * 0000000140A077E9: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A077ED: rdtsc
 * 0000000140A077EF: shl     rdx, 20h
 * 0000000140A077F3: mov     rbx, 7010008004002001h
 * 0000000140A077FD: or      rax, rdx
 * 0000000140A07800: mov     r9, rdi
 * 0000000140A07803: mov     rcx, rax
 * 0000000140A07806: ror     rax, 3
 * 0000000140A0780A: xor     rcx, rax
 * 0000000140A0780D: mov     rax, rbx
 * 0000000140A07810: mul     rcx
 * 0000000140A07813: mov     rcx, rdx
 * 0000000140A07816: mov     [rbp+0BE0h+var_590], rdx
 * 0000000140A0781D: xor     rcx, rax
 * 0000000140A07820: mov     rax, 0ABCC77118461CEFDh
 * 0000000140A0782A: mul     rcx
 * 0000000140A0782D: shr     rdx, 1Ah
 * 0000000140A07831: imul    rax, rdx, 5F5E100h
 * 0000000140A07838: sub     rcx, rax
 * 0000000140A0783B: sub     r9, rcx
 * 0000000140A0783E: mov     [rbp+0BE0h+var_AA8], r9
 * 0000000140A07845: mov     r8d, [rsi+990h]
 * 0000000140A0784C: bt      r8d, 1Ah
 * 0000000140A07851: jnb     loc_140A078F4
 * 0000000140A07857: rdtsc
 * 0000000140A07859: shl     rdx, 20h
 * 0000000140A0785D: mov     r14, 0CCCCCCCCCCCCCCCDh
 * 0000000140A07867: or      rax, rdx
 * 0000000140A0786A: mov     rcx, rax
 * 0000000140A0786D: ror     rax, 3
 * 0000000140A07871: xor     rcx, rax
 * 0000000140A07874: mov     rax, rbx
 * 0000000140A07877: mul     rcx
 * 0000000140A0787A: mov     rcx, rdx
 * 0000000140A0787D: mov     [rbp+0BE0h+var_588], rdx
 * 0000000140A07884: xor     rcx, rax
 * 0000000140A07887: mov     rax, r14
 * 0000000140A0788A: mul     rcx
 * 0000000140A0788D: shr     rdx, 3
 * 0000000140A07891: lea     rax, [rdx+rdx*4]
 * 0000000140A07895: add     rax, rax
 * 0000000140A07898: sub     rcx, rax
 * 0000000140A0789B: mov     eax, 2
 * 0000000140A078A0: cmp     rcx, rax
 * 0000000140A078A3: jnb     short loc_140A078F4
 * 0000000140A078A5: rdtsc
 * 0000000140A078A7: shl     rdx, 20h
 * 0000000140A078AB: or      rax, rdx
 * 0000000140A078AE: mov     rcx, rax
 * 0000000140A078B1: ror     rax, 3
 * 0000000140A078B5: xor     rcx, rax
 * 0000000140A078B8: mov     rax, rbx
 * 0000000140A078BB: mul     rcx
 * 0000000140A078BE: mov     rcx, rdx
 * 0000000140A078C1: mov     [rbp+0BE0h+var_580], rdx
 * 0000000140A078C8: xor     rcx, rax
 * 0000000140A078CB: mov     rax, r14
 * 0000000140A078CE: mul     rcx
 * 0000000140A078D1: shr     rdx, 3
 * 0000000140A078D5: lea     rax, [rdx+rdx*4]
 * 0000000140A078D9: add     rax, rax
 * 0000000140A078DC: sub     rcx, rax
 * 0000000140A078DF: add     rcx, r13
 * 0000000140A078E2: imul    rcx, r9
 * 0000000140A078E6: mov     [rbp+0BE0h+var_AA8], rcx
 * 0000000140A078ED: mov     r8d, [rsi+990h]
 * 0000000140A078F4: mov     ecx, 2
 * 0000000140A078F9: mov     r14d, r11d
 * 0000000140A078FC: test    cl, r8b
 * 0000000140A078FF: mov     rbx, r15
 * 0000000140A07902: cmovnz  r14d, r10d
 * 0000000140A07906: test    r8b, r8b
 * 0000000140A07909: js      short loc_140A07916
 * 0000000140A0790B: xor     r9d, r9d
 * 0000000140A0790E: mov     r13d, r9d
 * 0000000140A07911: jmp     loc_140A079E0
 * 0000000140A07916: rdtsc
 * 0000000140A07918: shl     rdx, 20h
 * 0000000140A0791C: or      rax, rdx
 * 0000000140A0791F: mov     rcx, rax
 * 0000000140A07922: ror     rax, 3
 * 0000000140A07926: xor     rcx, rax
 * 0000000140A07929: mov     rax, 7010008004002001h
 * 0000000140A07933: mul     rcx
 * 0000000140A07936: mov     ecx, 154h
 * 0000000140A0793B: mov     rbx, rdx
 * 0000000140A0793E: mov     [rbp+0BE0h+var_578], rdx
 * 0000000140A07945: xor     rbx, rax
 * 0000000140A07948: mov     edx, 1
 * 0000000140A0794D: mov     r15, rbx
 * 0000000140A07950: lea     rax, [rsi+0A98h]
 * 0000000140A07957: xor     r15, rsi
 * 0000000140A0795A: mov     r10, rbx
 * 0000000140A0795D: xor     [rax], r10
 * 0000000140A07960: lea     rax, [rax-8]
 * 0000000140A07964: ror     r10, cl
 * 0000000140A07967: sub     ecx, edx
 * 0000000140A07969: jnz     short loc_140A0795D
 * 0000000140A0796B: lea     r8, [r11-0AA0h]
 * 0000000140A07972: shr     r8, 3
 * 0000000140A07976: test    r8d, r8d
 * 0000000140A07979: jz      short loc_140A079B4
 * 0000000140A0797B: movsxd  r9, r8d
 * 0000000140A0797E: add     rsi, 0A98h
 * 0000000140A07985: mov     rdi, rdx
 * 0000000140A07988: lea     r9, [rsi+r9*8]
 * 0000000140A0798C: mov     rdx, [r9]
 * 0000000140A0798F: lea     rax, [r15+r15]
 * 0000000140A07993: mov     ecx, r8d
 * 0000000140A07996: lea     r9, [r9-8]
 * 0000000140A0799A: ror     rdx, cl
 * 0000000140A0799D: mov     r15, rdx
 * 0000000140A079A0: xor     r15, rax
 * 0000000140A079A3: sub     r8d, edi
 * 0000000140A079A6: jnz     short loc_140A0798C
 * 0000000140A079A8: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A079AD: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A079B4: mov     ecx, r14d
 * 0000000140A079B7: lea     rdx, [rsi+r11]
 * 0000000140A079BB: sub     ecx, r11d
 * 0000000140A079BE: shr     ecx, 3
 * 0000000140A079C1: test    ecx, ecx
 * 0000000140A079C3: jz      short loc_140A079E0
 * 0000000140A079C5: lea     rdx, [rdx+rcx*8]
 * 0000000140A079C9: mov     eax, 1
 * 0000000140A079CE: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140A079D2: xor     [rdx], r10
 * 0000000140A079D5: lea     rdx, [rdx-8]
 * 0000000140A079D9: ror     r10, cl
 * 0000000140A079DC: sub     ecx, eax
 * 0000000140A079DE: jnz     short loc_140A079D2
 * 0000000140A079E0: mov     rax, [rsp+0CE0h+var_C70]
 * 0000000140A079E5: test    rax, rax
 * 0000000140A079E8: jz      short loc_140A07A0B
 * 0000000140A079EA: mov     r9, [rbp+0BE0h+var_C40]
 * 0000000140A079EE: lea     r8, [rbp+0BE0h+var_AA8]
 * 0000000140A079F5: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 0000000140A079FA: mov     edx, r14d
 * 0000000140A079FD: mov     rax, [rbp+0BE0h+var_C30]
 * 0000000140A07A01: mov     rcx, rsi
 * 0000000140A07A04: call    KeGuardDispatchICall
 * 0000000140A07A09: jmp     short loc_140A07A44
 * 0000000140A07A0B: xor     edx, edx
 * 0000000140A07A0D: test    r12, r12
 * 0000000140A07A10: jnz     short loc_140A07A26
 * 0000000140A07A12: mov     rax, [rbp+0BE0h+var_C40]
 * 0000000140A07A16: lea     r8, [rbp+0BE0h+var_AA8]
 * 0000000140A07A1D: xor     ecx, ecx
 * 0000000140A07A1F: call    KeGuardDispatchICall
 * 0000000140A07A24: jmp     short loc_140A07A44
 * 0000000140A07A26: lea     rax, [rbp+0BE0h+var_AA8]
 * 0000000140A07A2D: xor     r9d, r9d
 * 0000000140A07A30: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 0000000140A07A35: xor     r8d, r8d
 * 0000000140A07A38: mov     rax, [rbp+0BE0h+var_BD8]
 * 0000000140A07A3C: mov     rcx, r12
 * 0000000140A07A3F: call    KeGuardDispatchICall
 * 0000000140A07A44: test    r13d, r13d
 * 0000000140A07A47: jz      loc_140A07B70
 * 0000000140A07A4D: mov     r9, rbx
 * 0000000140A07A50: lea     rax, [rsi+0A98h]
 * 0000000140A07A57: xor     r9, rsi
 * 0000000140A07A5A: mov     ecx, 154h
 * 0000000140A07A5F: mov     r10d, 1
 * 0000000140A07A65: xor     [rax], rbx
 * 0000000140A07A68: lea     rax, [rax-8]
 * 0000000140A07A6C: ror     rbx, cl
 * 0000000140A07A6F: sub     ecx, r10d
 * 0000000140A07A72: jnz     short loc_140A07A65
 * 0000000140A07A74: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A07A7B: mov     r11d, r12d
 * 0000000140A07A7E: lea     r8, [r12-0AA0h]
 * 0000000140A07A86: shr     r8, 3
 * 0000000140A07A8A: test    r8d, r8d
 * 0000000140A07A8D: jz      short loc_140A07AC4
 * 0000000140A07A8F: movsxd  r10, r8d
 * 0000000140A07A92: lea     r11d, [rcx+1]
 * 0000000140A07A96: add     r10, 153h
 * 0000000140A07A9D: lea     r10, [rsi+r10*8]
 * 0000000140A07AA1: mov     rdx, [r10]
 * 0000000140A07AA4: lea     rax, [r9+r9]
 * 0000000140A07AA8: mov     ecx, r8d
 * 0000000140A07AAB: lea     r10, [r10-8]
 * 0000000140A07AAF: ror     rdx, cl
 * 0000000140A07AB2: mov     r9, rdx
 * 0000000140A07AB5: xor     r9, rax
 * 0000000140A07AB8: sub     r8d, r11d
 * 0000000140A07ABB: jnz     short loc_140A07AA1
 * 0000000140A07ABD: mov     r11, r12
 * 0000000140A07AC0: lea     r10d, [r8+1]
 * 0000000140A07AC4: sub     r14d, r12d
 * 0000000140A07AC7: lea     rcx, [rsi+r11]
 * 0000000140A07ACB: shr     r14d, 3
 * 0000000140A07ACF: test    r14d, r14d
 * 0000000140A07AD2: jz      short loc_140A07AF0
 * 0000000140A07AD4: mov     edx, r14d
 * 0000000140A07AD7: dec     rdx
 * 0000000140A07ADA: lea     rdx, [rcx+rdx*8]
 * 0000000140A07ADE: xor     [rdx], rbx
 * 0000000140A07AE1: mov     ecx, r14d
 * 0000000140A07AE4: ror     rbx, cl
 * 0000000140A07AE7: lea     rdx, [rdx-8]
 * 0000000140A07AEB: sub     r14d, r10d
 * 0000000140A07AEE: jnz     short loc_140A07ADE
 * 0000000140A07AF0: cmp     r9, r15
 * 0000000140A07AF3: jz      short loc_140A07B70
 * 0000000140A07AF5: mov     rax, [rsi+590h]
 * 0000000140A07AFC: mov     ecx, [rsi+7E4h]
 * 0000000140A07B02: mov     [rax], rsi
 * 0000000140A07B05: mov     [rax+10h], ecx
 * 0000000140A07B08: mov     eax, [rsi+8F8h]
 * 0000000140A07B0E: test    eax, eax
 * 0000000140A07B10: jnz     short loc_140A07B29
 * 0000000140A07B12: mov     rax, [rsi+590h]
 * 0000000140A07B19: mov     rcx, r9
 * 0000000140A07B1C: xor     rcx, r15
 * 0000000140A07B1F: mov     [rax+18h], rcx
 * 0000000140A07B23: mov     eax, [rsi+8F8h]
 * 0000000140A07B29: xor     r15d, r15d
 * 0000000140A07B2C: test    eax, eax
 * 0000000140A07B2E: jnz     short loc_140A07B73
 * 0000000140A07B30: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A07B3A: xor     edx, edx
 * 0000000140A07B3C: add     rax, rsi
 * 0000000140A07B3F: mov     rcx, rsi
 * 0000000140A07B42: mov     [rsi+900h], rax
 * 0000000140A07B49: mov     [rsi+908h], r15
 * 0000000140A07B50: mov     qword ptr [rsi+910h], 10Eh
 * 0000000140A07B5B: mov     [rsi+918h], r9
 * 0000000140A07B62: mov     [rsi+8F8h], r10d
 * 0000000140A07B69: call    $$b8
 * 0000000140A07B6E: jmp     short loc_140A07B73
 * 0000000140A07B70: xor     r15d, r15d
 * 0000000140A07B73: mov     eax, [rsi+958h]
 * 0000000140A07B79: mov     r12d, 1
 * 0000000140A07B7F: cmp     eax, 0Bh
 * 0000000140A07B82: jz      loc_140A0C51C
 * 0000000140A07B88: cmp     eax, r12d
 * 0000000140A07B8B: jz      loc_140A0C51C
 * 0000000140A07B91: cmp     [rsi+8F8h], r15d
 * 0000000140A07B98: jnz     loc_140A0C521
 * 0000000140A07B9E: mov     rax, [rsi+960h]
 * 0000000140A07BA5: mov     rcx, [rax]
 * 0000000140A07BA8: cmp     rcx, [rsi+968h]
 * 0000000140A07BAF: jz      loc_140A0C2D6
 * 0000000140A07BB5: mov     ecx, [rsi+970h]
 * 0000000140A07BBB: mov     r13d, 0FFFFFFFFh
 * 0000000140A07BC1: mov     rbx, rsi
 * 0000000140A07BC4: mov     [rbp+0BE0h+var_C60], rbx
 * 0000000140A07BC8: cmp     ecx, r13d
 * 0000000140A07BCB: jz      short loc_140A07BDE
 * 0000000140A07BCD: mov     rax, [rsi+278h]
 * 0000000140A07BD4: call    KeGuardDispatchICall
 * 0000000140A07BD9: mov     r14, rax
 * 0000000140A07BDC: jmp     short loc_140A07BE1
 * 0000000140A07BDE: mov     r14, r15
 * 0000000140A07BE1: test    r14, r14
 * 0000000140A07BE4: jnz     short loc_140A07C00
 * 0000000140A07BE6: mov     rax, [rsi+280h]
 * 0000000140A07BED: xor     ecx, ecx
 * 0000000140A07BEF: call    KeGuardDispatchICall
 * 0000000140A07BF4: mov     r14, rax
 * 0000000140A07BF7: test    rax, rax
 * 0000000140A07BFA: jz      loc_140A0C51C
 * 0000000140A07C00: mov     rax, [rsi+290h]
 * 0000000140A07C07: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A07C0E: mov     rcx, r14
 * 0000000140A07C11: call    KeGuardDispatchICall
 * 0000000140A07C16: xor     r12d, r12d
 * 0000000140A07C19: mov     r15d, eax
 * 0000000140A07C1C: test    eax, eax
 * 0000000140A07C1E: jns     short loc_140A07C31
 * 0000000140A07C20: mov     rax, [rsi+288h]
 * 0000000140A07C27: mov     rcx, r14
 * 0000000140A07C2A: call    KeGuardDispatchICall
 * 0000000140A07C2F: jmp     short loc_140A07C93
 * 0000000140A07C31: mov     [rsi+980h], r14
 * 0000000140A07C38: mov     rax, [rsi+2B8h]
 * 0000000140A07C3F: call    KeGuardDispatchICall
 * 0000000140A07C44: mov     r14, rax
 * 0000000140A07C47: mov     rax, [rsi+2D8h]
 * 0000000140A07C4E: mov     rcx, r14
 * 0000000140A07C51: call    KeGuardDispatchICall
 * 0000000140A07C56: mov     rdx, rax
 * 0000000140A07C59: test    rax, rax
 * 0000000140A07C5C: jnz     short loc_140A07C63
 * 0000000140A07C5E: lea     ecx, [rax+4]
 * 0000000140A07C61: jmp     short loc_140A07C75
 * 0000000140A07C63: mov     rax, [rsi+2E8h]
 * 0000000140A07C6A: mov     rcx, r14
 * 0000000140A07C6D: call    KeGuardDispatchICall
 * 0000000140A07C72: mov     ecx, r12d
 * 0000000140A07C75: mov     eax, [rsi+994h]
 * 0000000140A07C7B: mov     r15d, r12d
 * 0000000140A07C7E: and     eax, 0FFFFFFFBh
 * 0000000140A07C81: or      eax, ecx
 * 0000000140A07C83: mov     [rsi+994h], eax
 * 0000000140A07C89: add     dword ptr [rsi+828h], 10000h
 * 0000000140A07C93: test    r15d, r15d
 * 0000000140A07C96: js      loc_140A0C515
 * 0000000140A07C9C: mov     rax, [rsi+2A0h]
 * 0000000140A07CA3: mov     rcx, [rsi+980h]
 * 0000000140A07CAA: call    KeGuardDispatchICall
 * 0000000140A07CAF: xor     r15d, r15d
 * 0000000140A07CB2: test    eax, eax
 * 0000000140A07CB4: jnz     loc_140A0C2A7
 * 0000000140A07CBA: mov     rax, [rsi+578h]
 * 0000000140A07CC1: lea     ecx, [r15+20h]
 * 0000000140A07CC5: mov     rdx, [rsi+968h]
 * 0000000140A07CCC: lea     rbx, [rbp+0BE0h+var_858]
 * 0000000140A07CD3: add     rax, rcx
 * 0000000140A07CD6: mov     [rsp+0CE0h+var_C88], r15
 * 0000000140A07CDB: mov     [rbp+0BE0h+var_858], rax
 * 0000000140A07CE2: mov     rax, [rsi+570h]
 * 0000000140A07CE9: add     rax, rcx
 * 0000000140A07CEC: mov     [rbp+0BE0h+var_BD8], rdx
 * 0000000140A07CF0: mov     [rbp+0BE0h+var_850], rax
 * 0000000140A07CF7: mov     rax, [rsi+960h]
 * 0000000140A07CFE: mov     esi, r15d
 * 0000000140A07D01: mov     [rbp+0BE0h+var_C50], rax
 * 0000000140A07D05: mov     [rbp+0BE0h+var_C40], rbx
 * 0000000140A07D09: mov     [rbp+0BE0h+var_C30], 2
 * 0000000140A07D11: mov     r12, [rbx]
 * 0000000140A07D14: xor     rsi, rax
 * 0000000140A07D17: mov     r9d, esi
 * 0000000140A07D1A: mov     [rsp+0CE0h+var_C70], r12
 * 0000000140A07D1F: mov     r13d, 3Fh ; '?'
 * 0000000140A07D25: and     r9d, r13d
 * 0000000140A07D28: mov     rdi, [r12]
 * 0000000140A07D2C: mov     r15d, [r12+10h]
 * 0000000140A07D31: mov     r10, rdi
 * 0000000140A07D34: mov     r11d, r15d
 * 0000000140A07D37: mov     dword ptr [rbp+0BE0h+arg_8], r15d
 * 0000000140A07D3E: shl     r11d, 2
 * 0000000140A07D42: mov     rax, rdi
 * 0000000140A07D45: mov     ecx, r11d
 * 0000000140A07D48: add     rcx, rdi
 * 0000000140A07D4B: cmp     rdi, rcx
 * 0000000140A07D4E: jnb     short loc_140A07D5F
 * 0000000140A07D50: lea     r8d, [r13+1]
 * 0000000140A07D54: prefetchnta byte ptr [rax]
 * 0000000140A07D57: add     rax, r8
 * 0000000140A07D5A: cmp     rax, rcx
 * 0000000140A07D5D: jb      short loc_140A07D54
 * 0000000140A07D5F: mov     r14d, r11d
 * 0000000140A07D62: mov     r8, rsi
 * 0000000140A07D65: shr     r14d, 7
 * 0000000140A07D69: test    r14d, r14d
 * 0000000140A07D6C: jz      short loc_140A07DE7
 * 0000000140A07D6E: mov     ebx, 0FFFFFFFFh
 * 0000000140A07D73: mov     r12d, 1
 * 0000000140A07D79: mov     r15, 7010008004002001h
 * 0000000140A07D83: mov     eax, 8
 * 0000000140A07D88: xor     r8, [r10]
 * 0000000140A07D8B: mov     ecx, r9d
 * 0000000140A07D8E: rol     r8, cl
 * 0000000140A07D91: xor     r8, [r10+8]
 * 0000000140A07D95: add     r10, 10h
 * 0000000140A07D99: rol     r8, cl
 * 0000000140A07D9C: sub     rax, r12
 * 0000000140A07D9F: jnz     short loc_140A07D88
 * 0000000140A07DA1: mov     rcx, r10
 * 0000000140A07DA4: sub     rcx, rdi
 * 0000000140A07DA7: xor     rcx, rsi
 * 0000000140A07DAA: mov     rax, rcx
 * 0000000140A07DAD: rol     rax, 11h
 * 0000000140A07DB1: xor     rcx, rax
 * 0000000140A07DB4: mov     rax, r15
 * 0000000140A07DB7: mul     rcx
 * 0000000140A07DBA: xor     r9d, edx
 * 0000000140A07DBD: mov     [rbp+0BE0h+var_570], rdx
 * 0000000140A07DC4: xor     r9d, eax
 * 0000000140A07DC7: and     r9d, r13d
 * 0000000140A07DCA: cmovz   r9d, r12d
 * 0000000140A07DCE: add     r14d, ebx
 * 0000000140A07DD1: jnz     short loc_140A07D83
 * 0000000140A07DD3: mov     r15d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A07DDA: mov     r12, [rsp+0CE0h+var_C70]
 * 0000000140A07DDF: mov     rbx, [rbp+0BE0h+var_C40]
 * 0000000140A07DE3: mov     rdx, [rbp+0BE0h+var_BD8]
 * 0000000140A07DE7: and     r11d, 7Fh
 * 0000000140A07DEB: mov     r14d, 1
 * 0000000140A07DF1: cmp     r11d, 8
 * 0000000140A07DF5: jb      short loc_140A07E14
 * 0000000140A07DF7: mov     eax, r11d
 * 0000000140A07DFA: shr     rax, 3
 * 0000000140A07DFE: xor     r8, [r10]
 * 0000000140A07E01: mov     ecx, r9d
 * 0000000140A07E04: rol     r8, cl
 * 0000000140A07E07: add     r10, 8
 * 0000000140A07E0B: add     r11d, 0FFFFFFF8h
 * 0000000140A07E0F: sub     rax, r14
 * 0000000140A07E12: jnz     short loc_140A07DFE
 * 0000000140A07E14: test    r11d, r11d
 * 0000000140A07E17: jz      short loc_140A07E33
 * 0000000140A07E19: mov     esi, 0FFFFFFFFh
 * 0000000140A07E1E: movzx   eax, byte ptr [r10]
 * 0000000140A07E22: mov     ecx, r9d
 * 0000000140A07E25: xor     r8, rax
 * 0000000140A07E28: add     r10, r14
 * 0000000140A07E2B: rol     r8, cl
 * 0000000140A07E2E: add     r11d, esi
 * 0000000140A07E31: jnz     short loc_140A07E1E
 * 0000000140A07E33: mov     r12, [r12+18h]
 * 0000000140A07E38: xor     r8, rdx
 * 0000000140A07E3B: mov     r11d, r8d
 * 0000000140A07E3E: mov     r10, r12
 * 0000000140A07E41: and     r11d, r13d
 * 0000000140A07E44: mov     rax, r12
 * 0000000140A07E47: mov     r13d, r15d
 * 0000000140A07E4A: lea     rcx, [r12+r13]
 * 0000000140A07E4E: cmp     r12, rcx
 * 0000000140A07E51: jnb     short loc_140A07E63
 * 0000000140A07E53: mov     edx, 40h ; '@'
 * 0000000140A07E58: prefetchnta byte ptr [rax]
 * 0000000140A07E5B: add     rax, rdx
 * 0000000140A07E5E: cmp     rax, rcx
 * 0000000140A07E61: jb      short loc_140A07E58
 * 0000000140A07E63: mov     r14d, r15d
 * 0000000140A07E66: mov     r9, r8
 * 0000000140A07E69: shr     r14d, 7
 * 0000000140A07E6D: test    r14d, r14d
 * 0000000140A07E70: jz      short loc_140A07EE1
 * 0000000140A07E72: mov     rbx, 7010008004002001h
 * 0000000140A07E7C: mov     edx, 8
 * 0000000140A07E81: lea     esi, [rdx-7]
 * 0000000140A07E84: mov     rax, [r10]
 * 0000000140A07E87: mov     ecx, r11d
 * 0000000140A07E8A: xor     rax, r9
 * 0000000140A07E8D: mov     r9, [r10+8]
 * 0000000140A07E91: rol     rax, cl
 * 0000000140A07E94: add     r10, 10h
 * 0000000140A07E98: xor     r9, rax
 * 0000000140A07E9B: rol     r9, cl
 * 0000000140A07E9E: sub     rdx, rsi
 * 0000000140A07EA1: jnz     short loc_140A07E84
 * 0000000140A07EA3: mov     rcx, r10
 * 0000000140A07EA6: sub     rcx, r12
 * 0000000140A07EA9: xor     rcx, r8
 * 0000000140A07EAC: mov     rax, rcx
 * 0000000140A07EAF: rol     rax, 11h
 * 0000000140A07EB3: xor     rcx, rax
 * 0000000140A07EB6: mov     rax, rbx
 * 0000000140A07EB9: mul     rcx
 * 0000000140A07EBC: mov     [rbp+0BE0h+var_568], rdx
 * 0000000140A07EC3: xor     edx, eax
 * 0000000140A07EC5: xor     r11d, edx
 * 0000000140A07EC8: mov     rax, rsi
 * 0000000140A07ECB: and     r11d, 3Fh
 * 0000000140A07ECF: cmovz   r11d, eax
 * 0000000140A07ED3: mov     eax, 0FFFFFFFFh
 * 0000000140A07ED8: add     r14d, eax
 * 0000000140A07EDB: jnz     short loc_140A07E7C
 * 0000000140A07EDD: mov     rbx, [rbp+0BE0h+var_C40]
 * 0000000140A07EE1: and     r15d, 7Fh
 * 0000000140A07EE5: mov     r12d, 1
 * 0000000140A07EEB: cmp     r15d, 8
 * 0000000140A07EEF: jb      short loc_140A07F0E
 * 0000000140A07EF1: mov     edx, r15d
 * 0000000140A07EF4: shr     rdx, 3
 * 0000000140A07EF8: xor     r9, [r10]
 * 0000000140A07EFB: mov     ecx, r11d
 * 0000000140A07EFE: rol     r9, cl
 * 0000000140A07F01: add     r10, 8
 * 0000000140A07F05: add     r15d, 0FFFFFFF8h
 * 0000000140A07F09: sub     rdx, r12
 * 0000000140A07F0C: jnz     short loc_140A07EF8
 * 0000000140A07F0E: mov     r14d, 0FFFFFFFFh
 * 0000000140A07F14: test    r15d, r15d
 * 0000000140A07F17: jz      short loc_140A07F2E
 * 0000000140A07F19: movzx   eax, byte ptr [r10]
 * 0000000140A07F1D: mov     ecx, r11d
 * 0000000140A07F20: xor     r9, rax
 * 0000000140A07F23: add     r10, r12
 * 0000000140A07F26: rol     r9, cl
 * 0000000140A07F29: add     r15d, r14d
 * 0000000140A07F2C: jnz     short loc_140A07F19
 * 0000000140A07F2E: mov     rax, [rbp+0BE0h+var_C50]
 * 0000000140A07F32: add     rbx, 8
 * 0000000140A07F36: mov     rdx, [rbp+0BE0h+var_BD8]
 * 0000000140A07F3A: mov     rsi, rdi
 * 0000000140A07F3D: xor     rsi, r13
 * 0000000140A07F40: mov     [rbp+0BE0h+var_C40], rbx
 * 0000000140A07F44: xor     rsi, r9
 * 0000000140A07F47: sub     [rbp+0BE0h+var_C30], r12
 * 0000000140A07F4B: jnz     loc_140A07D11
 * 0000000140A07F51: mov     [rsp+0CE0h+var_C88], rsi
 * 0000000140A07F56: lea     rdx, [rbp+0BE0h+var_980]
 * 0000000140A07F5D: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A07F62: mov     rcx, rdi
 * 0000000140A07F65: mov     rax, [rsi+208h]
 * 0000000140A07F6C: call    KeGuardDispatchICall
 * 0000000140A07F71: mov     rbx, [rbp+0BE0h+var_C60]
 * 0000000140A07F75: xor     r15d, r15d
 * 0000000140A07F78: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A07F7F: cmp     [rbp+0BE0h+var_980], r15
 * 0000000140A07F86: jz      loc_140A0873F
 * 0000000140A07F8C: rdtsc
 * 0000000140A07F8E: shl     rdx, 20h
 * 0000000140A07F92: mov     r8, 7010008004002001h
 * 0000000140A07F9C: or      rax, rdx
 * 0000000140A07F9F: mov     rcx, rax
 * 0000000140A07FA2: ror     rax, 3
 * 0000000140A07FA6: xor     rcx, rax
 * 0000000140A07FA9: mov     rax, r8
 * 0000000140A07FAC: mul     rcx
 * 0000000140A07FAF: mov     rcx, rdx
 * 0000000140A07FB2: mov     [rbp+0BE0h+var_560], rdx
 * 0000000140A07FB9: xor     rcx, rax
 * 0000000140A07FBC: mov     rax, 2E8BA2E8BA2E8BA3h
 * 0000000140A07FC6: mul     rcx
 * 0000000140A07FC9: shr     rdx, 1
 * 0000000140A07FCC: imul    rax, rdx, 0Bh
 * 0000000140A07FD0: sub     rcx, rax
 * 0000000140A07FD3: lea     eax, [r15+5]
 * 0000000140A07FD7: cmp     ecx, eax
 * 0000000140A07FD9: ja      loc_140A08097
 * 0000000140A07FDF: jz      loc_140A0807D
 * 0000000140A07FE5: test    ecx, ecx
 * 0000000140A07FE7: jz      short loc_140A08063
 * 0000000140A07FE9: sub     ecx, 1
 * 0000000140A07FEC: jz      short loc_140A0804A
 * 0000000140A07FEE: sub     ecx, 1
 * 0000000140A07FF1: jz      short loc_140A08030
 * 0000000140A07FF3: cmp     ecx, 1
 * 0000000140A07FF6: jz      short loc_140A08012
 * 0000000140A07FF8: mov     [rbp+0BE0h+var_9DC], 67076494h
 * 0000000140A08002: mov     r9d, [rbp+0BE0h+var_9DC]
 * 0000000140A08009: rol     r9d, 4
 * 0000000140A0800D: jmp     loc_140A081BB
 * 0000000140A08012: mov     [rbp+0BE0h+var_9D8], 0A8223938h
 * 0000000140A0801C: mov     r9d, [rbp+0BE0h+var_9D8]
 * 0000000140A08023: xor     r9d, 3
 * 0000000140A08027: ror     r9d, 0Fh
 * 0000000140A0802B: jmp     loc_140A081BB
 * 0000000140A08030: mov     [rbp+0BE0h+var_9D4], 85B5910Dh
 * 0000000140A0803A: mov     r9d, [rbp+0BE0h+var_9D4]
 * 0000000140A08041: ror     r9d, 2
 * 0000000140A08045: jmp     loc_140A081BB
 * 0000000140A0804A: mov     [rbp+0BE0h+var_9D0], 0B2AD31A1h
 * 0000000140A08054: mov     r9d, [rbp+0BE0h+var_9D0]
 * 0000000140A0805B: rol     r9d, 1
 * 0000000140A0805E: jmp     loc_140A081BB
 * 0000000140A08063: mov     [rbp+0BE0h+var_9CC], 0D098D0D8h
 * 0000000140A0806D: mov     r9d, [rbp+0BE0h+var_9CC]
 * 0000000140A08074: ror     r9d, 6
 * 0000000140A08078: jmp     loc_140A081BB
 * 0000000140A0807D: mov     [rbp+0BE0h+var_A90], 288C49EDh
 * 0000000140A08087: mov     r9d, [rbp+0BE0h+var_A90]
 * 0000000140A0808E: ror     r9d, 5
 * 0000000140A08092: jmp     loc_140A081BB
 * 0000000140A08097: sub     ecx, 6
 * 0000000140A0809A: jz      loc_140A081A2
 * 0000000140A080A0: sub     ecx, 1
 * 0000000140A080A3: jz      loc_140A0818B
 * 0000000140A080A9: sub     ecx, 1
 * 0000000140A080AC: jz      loc_140A08174
 * 0000000140A080B2: cmp     ecx, 1
 * 0000000140A080B5: jz      loc_140A08159
 * 0000000140A080BB: rdtsc
 * 0000000140A080BD: shl     rdx, 20h
 * 0000000140A080C1: mov     r10d, 4EC4EC4Fh
 * 0000000140A080C7: or      rax, rdx
 * 0000000140A080CA: mov     rcx, rax
 * 0000000140A080CD: ror     rax, 3
 * 0000000140A080D1: xor     rcx, rax
 * 0000000140A080D4: mov     rax, r8
 * 0000000140A080D7: mul     rcx
 * 0000000140A080DA: mov     r9, rdx
 * 0000000140A080DD: mov     [rbp+0BE0h+var_558], rdx
 * 0000000140A080E4: xor     r9d, eax
 * 0000000140A080E7: mov     eax, r10d
 * 0000000140A080EA: mul     r9d
 * 0000000140A080ED: mov     ecx, r9d
 * 0000000140A080F0: shr     r9d, 5
 * 0000000140A080F4: shr     edx, 3
 * 0000000140A080F7: mov     r8d, r9d
 * 0000000140A080FA: imul    eax, edx, 1Ah
 * 0000000140A080FD: sub     ecx, eax
 * 0000000140A080FF: mov     eax, r10d
 * 0000000140A08102: mul     r9d
 * 0000000140A08105: add     ecx, 61h ; 'a'
 * 0000000140A08108: shr     r9d, 5
 * 0000000140A0810C: shl     ecx, 8
 * 0000000140A0810F: shr     edx, 3
 * 0000000140A08112: imul    eax, edx, 1Ah
 * 0000000140A08115: sub     r8d, eax
 * 0000000140A08118: mov     eax, r10d
 * 0000000140A0811B: mul     r9d
 * 0000000140A0811E: add     r8d, 41h ; 'A'
 * 0000000140A08122: or      r8d, ecx
 * 0000000140A08125: shr     edx, 3
 * 0000000140A08128: imul    eax, edx, 1Ah
 * 0000000140A0812B: mov     ecx, r9d
 * 0000000140A0812E: shr     r9d, 5
 * 0000000140A08132: shl     r8d, 8
 * 0000000140A08136: sub     ecx, eax
 * 0000000140A08138: mov     eax, r10d
 * 0000000140A0813B: mul     r9d
 * 0000000140A0813E: add     ecx, 61h ; 'a'
 * 0000000140A08141: shr     edx, 3
 * 0000000140A08144: or      ecx, r8d
 * 0000000140A08147: imul    eax, edx, 1Ah
 * 0000000140A0814A: shl     ecx, 8
 * 0000000140A0814D: sub     r9d, eax
 * 0000000140A08150: add     r9d, 41h ; 'A'
 * 0000000140A08154: or      r9d, ecx
 * 0000000140A08157: jmp     short loc_140A081BB
 * 0000000140A08159: mov     [rbp+0BE0h+var_A8C], 0B0869E85h
 * 0000000140A08163: mov     r9d, [rbp+0BE0h+var_A8C]
 * 0000000140A0816A: xor     r9d, 9
 * 0000000140A0816E: ror     r9d, 21h
 * 0000000140A08172: jmp     short loc_140A081BB
 * 0000000140A08174: mov     [rbp+0BE0h+var_A88], 64664142h
 * 0000000140A0817E: mov     r9d, [rbp+0BE0h+var_A88]
 * 0000000140A08185: ror     r9d, 8
 * 0000000140A08189: jmp     short loc_140A081BB
 * 0000000140A0818B: mov     [rbp+0BE0h+var_A84], 82C6A6D8h
 * 0000000140A08195: mov     r9d, [rbp+0BE0h+var_A84]
 * 0000000140A0819C: rol     r9d, 7
 * 0000000140A081A0: jmp     short loc_140A081BB
 * 0000000140A081A2: mov     [rbp+0BE0h+var_A80], 4E574672h
 * 0000000140A081AC: mov     r9d, [rbp+0BE0h+var_A80]
 * 0000000140A081B3: xor     r9d, 6
 * 0000000140A081B7: ror     r9d, 18h
 * 0000000140A081BB: mov     rax, [rsi+0F8h]
 * 0000000140A081C2: mov     r13d, 80h
 * 0000000140A081C8: mov     edx, r13d
 * 0000000140A081CB: mov     r8d, r9d
 * 0000000140A081CE: mov     ecx, 200h
 * 0000000140A081D3: call    KeGuardDispatchICall
 * 0000000140A081D8: mov     [rbp+0BE0h+var_BD8], rax
 * 0000000140A081DC: mov     r9, rax
 * 0000000140A081DF: test    rax, rax
 * 0000000140A081E2: jz      loc_140A08AB7
 * 0000000140A081E8: mov     ecx, r13d
 * 0000000140A081EB: lea     edx, [r13-70h]
 * 0000000140A081EF: mov     [rax], r15
 * 0000000140A081F2: add     ecx, 0FFFFFFF8h
 * 0000000140A081F5: add     rax, 8
 * 0000000140A081F9: sub     rdx, r12
 * 0000000140A081FC: jnz     short loc_140A081EF
 * 0000000140A081FE: test    ecx, ecx
 * 0000000140A08200: jz      short loc_140A0820D
 * 0000000140A08202: mov     [rax], r15b
 * 0000000140A08205: add     rax, r12
 * 0000000140A08208: add     ecx, r14d
 * 0000000140A0820B: jnz     short loc_140A08202
 * 0000000140A0820D: mov     rax, [rbp+0BE0h+var_980]
 * 0000000140A08214: mov     rcx, r15
 * 0000000140A08217: mov     [rbp+0BE0h+var_AF8], rax
 * 0000000140A0821E: mov     [r9], rax
 * 0000000140A08221: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A08226: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A0822A: mov     dword ptr [rbp+0BE0h+arg_8], r15d
 * 0000000140A08231: mov     [rbp+0BE0h+var_C08], rcx
 * 0000000140A08235: mov     rcx, [r9+rcx*8]
 * 0000000140A08239: mov     [rbp+0BE0h+var_AF8], rcx
 * 0000000140A08240: test    rcx, rcx
 * 0000000140A08243: jz      loc_140A08737
 * 0000000140A08249: mov     r13d, eax
 * 0000000140A0824C: mov     rax, [rsi+1F8h]
 * 0000000140A08253: and     r13d, 3Fh
 * 0000000140A08257: call    KeGuardDispatchICall
 * 0000000140A0825C: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A08260: test    rax, rax
 * 0000000140A08263: jz      loc_140A086B0
 * 0000000140A08269: movzx   r14d, word ptr [rax+14h]
 * 0000000140A0826E: mov     rbx, [rbp+0BE0h+var_C30]
 * 0000000140A08272: add     r14, 18h
 * 0000000140A08276: add     r14, rax
 * 0000000140A08279: movzx   eax, word ptr [rax+6]
 * 0000000140A0827D: lea     rcx, [rax+rax*4]
 * 0000000140A08281: lea     rax, [r14+rcx*8]
 * 0000000140A08285: mov     [rbp+0BE0h+var_C50], rax
 * 0000000140A08289: mov     rdi, rax
 * 0000000140A0828C: mov     eax, [r14+24h]
 * 0000000140A08290: mov     r11d, r15d
 * 0000000140A08293: bt      eax, 19h
 * 0000000140A08297: jb      loc_140A08418
 * 0000000140A0829D: mov     ecx, [r14]
 * 0000000140A082A0: cmp     ecx, 54494E49h
 * 0000000140A082A6: jnz     short loc_140A082B6
 * 0000000140A082A8: cmp     dword ptr [r14+4], 4742444Bh
 * 0000000140A082B0: jz      loc_140A08418
 * 0000000140A082B6: cmp     ecx, 45474150h
 * 0000000140A082BC: jnz     short loc_140A082ED
 * 0000000140A082BE: movzx   eax, word ptr [r14+4]
 * 0000000140A082C3: mov     edx, 7877h
 * 0000000140A082C8: cmp     ax, dx
 * 0000000140A082CB: jz      loc_140A08418
 * 0000000140A082D1: mov     edx, 7277h
 * 0000000140A082D6: cmp     ax, dx
 * 0000000140A082D9: jz      loc_140A08418
 * 0000000140A082DF: mov     edx, 7777h
 * 0000000140A082E4: cmp     ax, dx
 * 0000000140A082E7: jz      loc_140A08418
 * 0000000140A082ED: cmp     ecx, 41525245h
 * 0000000140A082F3: jnz     short loc_140A08305
 * 0000000140A082F5: mov     eax, 4154h
 * 0000000140A082FA: cmp     [r14+4], ax
 * 0000000140A082FF: jz      loc_140A08418
 * 0000000140A08305: mov     rax, [rsi+938h]
 * 0000000140A0830C: mov     r9, r14
 * 0000000140A0830F: mov     r8, [rsi+930h]
 * 0000000140A08316: mov     r10d, 7
 * 0000000140A0831C: mov     [rbp+0BE0h+var_808], rax
 * 0000000140A08323: sub     r9, r8
 * 0000000140A08326: mov     rax, [rsi+940h]
 * 0000000140A0832D: mov     [rbp+0BE0h+var_800], rax
 * 0000000140A08334: mov     rax, [rsi+948h]
 * 0000000140A0833B: mov     [rbp+0BE0h+var_7F8], rax
 * 0000000140A08342: mov     [rbp+0BE0h+var_810], r8
 * 0000000140A08349: movzx   edx, byte ptr [r9+r8]
 * 0000000140A0834E: movzx   eax, byte ptr [r8]
 * 0000000140A08352: add     r8, r12
 * 0000000140A08355: cmp     rdx, rax
 * 0000000140A08358: jnz     short loc_140A08369
 * 0000000140A0835A: mov     eax, 0FFFFFFFFh
 * 0000000140A0835F: add     r10d, eax
 * 0000000140A08362: jnz     short loc_140A08349
 * 0000000140A08364: jmp     loc_140A08418
 * 0000000140A08369: mov     r9, [rbp+0BE0h+var_808]
 * 0000000140A08370: mov     r8d, 8
 * 0000000140A08376: mov     r10, r14
 * 0000000140A08379: mov     rcx, [r10]
 * 0000000140A0837C: add     r10, 8
 * 0000000140A08380: mov     rax, [r9]
 * 0000000140A08383: add     r9, 8
 * 0000000140A08387: cmp     rcx, rax
 * 0000000140A0838A: jnz     short loc_140A083BA
 * 0000000140A0838C: add     r8d, 0FFFFFFF8h
 * 0000000140A08390: cmp     r8d, 8
 * 0000000140A08394: jnb     short loc_140A08379
 * 0000000140A08396: test    r8d, r8d
 * 0000000140A08399: jz      short loc_140A08418
 * 0000000140A0839B: movzx   edx, byte ptr [r10]
 * 0000000140A0839F: add     r10, r12
 * 0000000140A083A2: movzx   eax, byte ptr [r9]
 * 0000000140A083A6: add     r9, r12
 * 0000000140A083A9: cmp     rdx, rax
 * 0000000140A083AC: jnz     short loc_140A083BA
 * 0000000140A083AE: mov     eax, 0FFFFFFFFh
 * 0000000140A083B3: add     r8d, eax
 * 0000000140A083B6: jnz     short loc_140A0839B
 * 0000000140A083B8: jmp     short loc_140A08418
 * 0000000140A083BA: mov     r8, [rbp+0BE0h+var_800]
 * 0000000140A083C1: mov     r9, r14
 * 0000000140A083C4: sub     r9, r8
 * 0000000140A083C7: mov     r10d, 4
 * 0000000140A083CD: movzx   edx, byte ptr [r9+r8]
 * 0000000140A083D2: movzx   eax, byte ptr [r8]
 * 0000000140A083D6: add     r8, r12
 * 0000000140A083D9: cmp     rdx, rax
 * 0000000140A083DC: jnz     short loc_140A083EA
 * 0000000140A083DE: mov     eax, 0FFFFFFFFh
 * 0000000140A083E3: add     r10d, eax
 * 0000000140A083E6: jnz     short loc_140A083CD
 * 0000000140A083E8: jmp     short loc_140A08418
 * 0000000140A083EA: mov     r8, [rbp+0BE0h+var_7F8]
 * 0000000140A083F1: mov     r9, r14
 * 0000000140A083F4: sub     r9, r8
 * 0000000140A083F7: mov     r10d, 6
 * 0000000140A083FD: movzx   edx, byte ptr [r9+r8]
 * 0000000140A08402: movzx   eax, byte ptr [r8]
 * 0000000140A08406: add     r8, r12
 * 0000000140A08409: cmp     rdx, rax
 * 0000000140A0840C: jnz     short loc_140A0841B
 * 0000000140A0840E: mov     eax, 0FFFFFFFFh
 * 0000000140A08413: add     r10d, eax
 * 0000000140A08416: jnz     short loc_140A083FD
 * 0000000140A08418: mov     r11d, r12d
 * 0000000140A0841B: cmp     [r14+24h], r15d
 * 0000000140A0841F: mov     eax, [r14+8]
 * 0000000140A08423: mov     r9d, [r14+10h]
 * 0000000140A08427: cmovl   r11d, r12d
 * 0000000140A0842B: cmp     r9d, eax
 * 0000000140A0842E: cmovbe  r9d, eax
 * 0000000140A08432: mov     eax, [r14+0Ch]
 * 0000000140A08436: test    r11d, r11d
 * 0000000140A08439: jnz     loc_140A0853E
 * 0000000140A0843F: mov     r15d, eax
 * 0000000140A08442: mov     ecx, r9d
 * 0000000140A08445: add     r15, [rbp+0BE0h+var_AF8]
 * 0000000140A0844C: mov     r11d, r13d
 * 0000000140A0844F: add     rcx, r15
 * 0000000140A08452: mov     r10, r15
 * 0000000140A08455: mov     rax, r15
 * 0000000140A08458: cmp     r15, rcx
 * 0000000140A0845B: jnb     short loc_140A0846D
 * 0000000140A0845D: mov     edx, 40h ; '@'
 * 0000000140A08462: prefetchnta byte ptr [rax]
 * 0000000140A08465: add     rax, rdx
 * 0000000140A08468: cmp     rax, rcx
 * 0000000140A0846B: jb      short loc_140A08462
 * 0000000140A0846D: mov     r12d, r9d
 * 0000000140A08470: mov     r8, rbx
 * 0000000140A08473: shr     r12d, 7
 * 0000000140A08477: test    r12d, r12d
 * 0000000140A0847A: jz      short loc_140A084EC
 * 0000000140A0847C: mov     edi, 1
 * 0000000140A08481: mov     rsi, 7010008004002001h
 * 0000000140A0848B: mov     eax, 8
 * 0000000140A08490: xor     r8, [r10]
 * 0000000140A08493: mov     ecx, r11d
 * 0000000140A08496: rol     r8, cl
 * 0000000140A08499: xor     r8, [r10+8]
 * 0000000140A0849D: add     r10, 10h
 * 0000000140A084A1: rol     r8, cl
 * 0000000140A084A4: sub     rax, rdi
 * 0000000140A084A7: jnz     short loc_140A08490
 * 0000000140A084A9: mov     rcx, r10
 * 0000000140A084AC: sub     rcx, r15
 * 0000000140A084AF: xor     rcx, rbx
 * 0000000140A084B2: mov     rax, rcx
 * 0000000140A084B5: rol     rax, 11h
 * 0000000140A084B9: xor     rcx, rax
 * 0000000140A084BC: mov     rax, rsi
 * 0000000140A084BF: mul     rcx
 * 0000000140A084C2: xor     r11d, edx
 * 0000000140A084C5: mov     [rbp+0BE0h+var_550], rdx
 * 0000000140A084CC: xor     r11d, eax
 * 0000000140A084CF: mov     edx, 0FFFFFFFFh
 * 0000000140A084D4: and     r11d, 3Fh
 * 0000000140A084D8: cmovz   r11d, edi
 * 0000000140A084DC: add     r12d, edx
 * 0000000140A084DF: jnz     short loc_140A0848B
 * 0000000140A084E1: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A084E6: mov     rdi, [rbp+0BE0h+var_C50]
 * 0000000140A084EA: jmp     short loc_140A084F1
 * 0000000140A084EC: mov     edx, 0FFFFFFFFh
 * 0000000140A084F1: and     r9d, 7Fh
 * 0000000140A084F5: mov     r12d, 1
 * 0000000140A084FB: cmp     r9d, 8
 * 0000000140A084FF: jb      short loc_140A0851E
 * 0000000140A08501: mov     eax, r9d
 * 0000000140A08504: shr     rax, 3
 * 0000000140A08508: xor     r8, [r10]
 * 0000000140A0850B: mov     ecx, r11d
 * 0000000140A0850E: rol     r8, cl
 * 0000000140A08511: add     r10, 8
 * 0000000140A08515: add     r9d, 0FFFFFFF8h
 * 0000000140A08519: sub     rax, r12
 * 0000000140A0851C: jnz     short loc_140A08508
 * 0000000140A0851E: xor     r15d, r15d
 * 0000000140A08521: test    r9d, r9d
 * 0000000140A08524: jz      short loc_140A0853B
 * 0000000140A08526: movzx   eax, byte ptr [r10]
 * 0000000140A0852A: mov     ecx, r11d
 * 0000000140A0852D: xor     r8, rax
 * 0000000140A08530: add     r10, r12
 * 0000000140A08533: rol     r8, cl
 * 0000000140A08536: add     r9d, edx
 * 0000000140A08539: jnz     short loc_140A08526
 * 0000000140A0853B: mov     rbx, r8
 * 0000000140A0853E: add     r14, 28h ; '('
 * 0000000140A08542: cmp     r14, rdi
 * 0000000140A08545: jnz     loc_140A0828C
 * 0000000140A0854B: mov     r8d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A08552: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A08559: mov     [rbp+0BE0h+var_C30], rbx
 * 0000000140A0855D: test    r8d, r8d
 * 0000000140A08560: jnz     loc_140A0867F
 * 0000000140A08566: mov     rdx, [rbp+0BE0h+var_C40]
 * 0000000140A0856A: mov     r13, [rbp+0BE0h+var_AF8]
 * 0000000140A08571: mov     ecx, [rdx+94h]
 * 0000000140A08577: cmp     ecx, 14h
 * 0000000140A0857A: jb      loc_140A0867F
 * 0000000140A08580: mov     eax, [rdx+90h]
 * 0000000140A08586: lea     r12, [rax+rcx]
 * 0000000140A0858A: add     r12, r13
 * 0000000140A0858D: lea     r15, [rax+r13]
 * 0000000140A08591: cmp     r15, r12
 * 0000000140A08594: jz      loc_140A08676
 * 0000000140A0859A: xor     r10d, r10d
 * 0000000140A0859D: cmp     [r15+0Ch], r10d
 * 0000000140A085A1: jz      loc_140A0866F
 * 0000000140A085A7: mov     eax, [r15+10h]
 * 0000000140A085AB: test    eax, eax
 * 0000000140A085AD: jz      loc_140A0866F
 * 0000000140A085B3: mov     r14, [rax+r13]
 * 0000000140A085B7: test    r14, r14
 * 0000000140A085BA: jz      loc_140A0864C
 * 0000000140A085C0: cmp     r14, r13
 * 0000000140A085C3: jb      short loc_140A085D0
 * 0000000140A085C5: mov     eax, [rdx+50h]
 * 0000000140A085C8: add     rax, r13
 * 0000000140A085CB: cmp     r14, rax
 * 0000000140A085CE: jb      short loc_140A0864C
 * 0000000140A085D0: mov     rax, [rsi+2A8h]
 * 0000000140A085D7: mov     rcx, r14
 * 0000000140A085DA: call    KeGuardDispatchICall
 * 0000000140A085DF: xor     r10d, r10d
 * 0000000140A085E2: test    eax, eax
 * 0000000140A085E4: jz      short loc_140A08648
 * 0000000140A085E6: mov     rax, [rsi+208h]
 * 0000000140A085ED: lea     rdx, [rbp+0BE0h+var_AF8]
 * 0000000140A085F4: mov     rcx, r14
 * 0000000140A085F7: call    KeGuardDispatchICall
 * 0000000140A085FC: mov     rdx, [rbp+0BE0h+var_AF8]
 * 0000000140A08603: xor     r10d, r10d
 * 0000000140A08606: lea     r11d, [r10+10h]
 * 0000000140A0860A: test    rdx, rdx
 * 0000000140A0860D: jz      short loc_140A08642
 * 0000000140A0860F: mov     r9, [rbp+0BE0h+var_BD8]
 * 0000000140A08613: mov     ecx, r10d
 * 0000000140A08616: mov     rax, r9
 * 0000000140A08619: mov     r8, [rax]
 * 0000000140A0861C: cmp     r8, rdx
 * 0000000140A0861F: jz      short loc_140A08639
 * 0000000140A08621: test    r8, r8
 * 0000000140A08624: jz      short loc_140A08633
 * 0000000140A08626: inc     ecx
 * 0000000140A08628: add     rax, 8
 * 0000000140A0862C: cmp     ecx, r11d
 * 0000000140A0862F: jb      short loc_140A08619
 * 0000000140A08631: jmp     short loc_140A08639
 * 0000000140A08633: mov     eax, ecx
 * 0000000140A08635: mov     [r9+rax*8], rdx
 * 0000000140A08639: cmp     ecx, r11d
 * 0000000140A0863C: jz      loc_140A0872D
 * 0000000140A08642: mov     rdx, [rbp+0BE0h+var_C40]
 * 0000000140A08646: jmp     short loc_140A08652
 * 0000000140A08648: mov     rdx, [rbp+0BE0h+var_C40]
 * 0000000140A0864C: mov     r11d, 10h
 * 0000000140A08652: add     r15, 14h
 * 0000000140A08656: cmp     r15, r12
 * 0000000140A08659: jnz     loc_140A0859D
 * 0000000140A0865F: mov     r8d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A08666: xor     r15d, r15d
 * 0000000140A08669: lea     r12d, [r15+1]
 * 0000000140A0866D: jmp     short loc_140A08685
 * 0000000140A0866F: mov     r8d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A08676: mov     r12d, 1
 * 0000000140A0867C: xor     r15d, r15d
 * 0000000140A0867F: mov     r11d, 10h
 * 0000000140A08685: mov     rcx, [rbp+0BE0h+var_C08]
 * 0000000140A08689: add     r8d, r12d
 * 0000000140A0868C: mov     rax, [rbp+0BE0h+var_C30]
 * 0000000140A08690: add     rcx, r12
 * 0000000140A08693: mov     r9, [rbp+0BE0h+var_BD8]
 * 0000000140A08697: mov     dword ptr [rbp+0BE0h+arg_8], r8d
 * 0000000140A0869E: mov     [rbp+0BE0h+var_C08], rcx
 * 0000000140A086A2: cmp     r8d, r11d
 * 0000000140A086A5: jb      loc_140A08235
 * 0000000140A086AB: jmp     loc_140A08737
 * 0000000140A086B0: cmp     [rsi+8F8h], r15d
 * 0000000140A086B7: jnz     short loc_140A086FB
 * 0000000140A086B9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A086C3: xor     edx, edx
 * 0000000140A086C5: add     rax, rsi
 * 0000000140A086C8: mov     rcx, rsi
 * 0000000140A086CB: mov     [rsi+900h], rax
 * 0000000140A086D2: mov     [rsi+908h], r15
 * 0000000140A086D9: mov     qword ptr [rsi+910h], 102h
 * 0000000140A086E4: mov     qword ptr [rsi+918h], 0FFFFFFFFC000007Bh
 * 0000000140A086EF: mov     [rsi+8F8h], r12d
 * 0000000140A086F6: call    $$b8
 * 0000000140A086FB: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A08700: cmp     r14, [rsi+968h]
 * 0000000140A08707: jz      short loc_140A0870E
 * 0000000140A08709: test    r14, r14
 * 0000000140A0870C: jnz     short loc_140A0871B
 * 0000000140A0870E: mov     rax, 95EA5DE843D5D824h
 * 0000000140A08718: xor     r14, rax
 * 0000000140A0871B: mov     rax, [rsi+100h]
 * 0000000140A08722: mov     rcx, [rbp+0BE0h+var_BD8]
 * 0000000140A08726: call    KeGuardDispatchICall
 * 0000000140A0872B: jmp     short loc_140A08744
 * 0000000140A0872D: mov     rax, [rbp+0BE0h+var_C30]
 * 0000000140A08731: mov     r12d, 1
 * 0000000140A08737: mov     r14, rax
 * 0000000140A0873A: xor     r15d, r15d
 * 0000000140A0873D: jmp     short loc_140A08700
 * 0000000140A0873F: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A08744: mov     rax, [rsi+960h]
 * 0000000140A0874B: mov     rcx, [rax]
 * 0000000140A0874E: cmp     r14, rcx
 * 0000000140A08751: jz      short loc_140A087CF
 * 0000000140A08753: mov     eax, [rsi+994h]
 * 0000000140A08759: mov     ecx, 40h ; '@'
 * 0000000140A0875E: test    cl, al
 * 0000000140A08760: jnz     short loc_140A087CF
 * 0000000140A08762: mov     rax, [rsi+960h]
 * 0000000140A08769: mov     rdx, [rax]
 * 0000000140A0876C: mov     eax, [rsi+8F8h]
 * 0000000140A08772: test    eax, eax
 * 0000000140A08774: jnz     short loc_140A087CF
 * 0000000140A08776: mov     rax, [rsi+590h]
 * 0000000140A0877D: mov     rcx, r14
 * 0000000140A08780: xor     rcx, rdx
 * 0000000140A08783: mov     [rax+18h], rcx
 * 0000000140A08787: mov     eax, [rsi+8F8h]
 * 0000000140A0878D: test    eax, eax
 * 0000000140A0878F: jnz     short loc_140A087CF
 * 0000000140A08791: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0879B: xor     edx, edx
 * 0000000140A0879D: add     rax, rsi
 * 0000000140A087A0: mov     rcx, rsi
 * 0000000140A087A3: mov     [rsi+900h], rax
 * 0000000140A087AA: mov     [rsi+908h], r15
 * 0000000140A087B1: mov     qword ptr [rsi+910h], 102h
 * 0000000140A087BC: mov     [rsi+918h], r14
 * 0000000140A087C3: mov     [rsi+8F8h], r12d
 * 0000000140A087CA: call    $$b8
 * 0000000140A087CF: mov     r10d, r15d
 * 0000000140A087D2: mov     r12d, 2
 * 0000000140A087D8: lea     r15, [rbp+0BE0h+var_850]
 * 0000000140A087DF: xor     ebx, ebx
 * 0000000140A087E1: mov     r14d, 0FFFFFFFFh
 * 0000000140A087E7: mov     rax, [r15]
 * 0000000140A087EA: mov     r9d, ebx
 * 0000000140A087ED: mov     r11, [rax]
 * 0000000140A087F0: lea     r8d, [r10+rax]
 * 0000000140A087F4: mov     r13d, [rax+10h]
 * 0000000140A087F8: add     r8d, r11d
 * 0000000140A087FB: test    r13d, r13d
 * 0000000140A087FE: jz      short loc_140A0882C
 * 0000000140A08800: mov     r14, r11
 * 0000000140A08803: movsxd  rdx, dword ptr [r14]
 * 0000000140A08806: inc     r9d
 * 0000000140A08809: mov     rax, rdx
 * 0000000140A0880C: lea     r14, [r14+4]
 * 0000000140A08810: sar     rax, 4
 * 0000000140A08814: mov     ecx, [rax+r11]
 * 0000000140A08818: add     ecx, edx
 * 0000000140A0881A: xor     r8d, ecx
 * 0000000140A0881D: imul    r8d, r9d
 * 0000000140A08821: cmp     r9d, r13d
 * 0000000140A08824: jb      short loc_140A08803
 * 0000000140A08826: mov     r14d, 0FFFFFFFFh
 * 0000000140A0882C: lea     r10d, [r10+r8*2]
 * 0000000140A08830: sub     r15, 8
 * 0000000140A08834: add     r8d, r8d
 * 0000000140A08837: add     r12d, r14d
 * 0000000140A0883A: jnz     short loc_140A087E7
 * 0000000140A0883C: mov     rax, [rsi+598h]
 * 0000000140A08843: mov     rbx, [rbp+0BE0h+var_C60]
 * 0000000140A08847: mov     r9d, [rax]
 * 0000000140A0884A: cmp     r10d, r9d
 * 0000000140A0884D: jz      short loc_140A088CA
 * 0000000140A0884F: xor     r15d, r15d
 * 0000000140A08852: test    dword ptr [rsi+990h], 20000h
 * 0000000140A0885C: jz      short loc_140A088CD
 * 0000000140A0885E: mov     eax, [rsi+8F8h]
 * 0000000140A08864: test    eax, eax
 * 0000000140A08866: jnz     short loc_140A0887F
 * 0000000140A08868: mov     rdx, [rsi+590h]
 * 0000000140A0886F: mov     ecx, r8d
 * 0000000140A08872: xor     rcx, r9
 * 0000000140A08875: mov     [rdx+18h], rcx
 * 0000000140A08879: mov     eax, [rsi+8F8h]
 * 0000000140A0887F: mov     ecx, r8d
 * 0000000140A08882: test    eax, eax
 * 0000000140A08884: jnz     short loc_140A088CD
 * 0000000140A08886: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A08890: xor     edx, edx
 * 0000000140A08892: add     rax, rsi
 * 0000000140A08895: mov     [rsi+900h], rax
 * 0000000140A0889C: mov     eax, 1
 * 0000000140A088A1: mov     [rsi+908h], r15
 * 0000000140A088A8: mov     qword ptr [rsi+910h], 107h
 * 0000000140A088B3: mov     [rsi+918h], rcx
 * 0000000140A088BA: mov     rcx, rsi
 * 0000000140A088BD: mov     [rsi+8F8h], eax
 * 0000000140A088C3: call    $$b8
 * 0000000140A088C8: jmp     short loc_140A088CD
 * 0000000140A088CA: xor     r15d, r15d
 * 0000000140A088CD: mov     eax, [rsi+958h]
 * 0000000140A088D3: cmp     eax, 7
 * 0000000140A088D6: jl      loc_140A08B48
 * 0000000140A088DC: jz      loc_140A09D3A
 * 0000000140A088E2: cmp     eax, 8
 * 0000000140A088E5: jz      loc_140A0BD4D
 * 0000000140A088EB: cmp     eax, 9
 * 0000000140A088EE: jnz     loc_140A0C24F
 * 0000000140A088F4: xor     r10d, r10d
 * 0000000140A088F7: mov     r15, [rbx+600h]
 * 0000000140A088FE: test    r15, r15
 * 0000000140A08901: jz      loc_140A0C24C
 * 0000000140A08907: mov     r15, [r15]
 * 0000000140A0890A: test    r15, r15
 * 0000000140A0890D: jz      loc_140A0C24C
 * 0000000140A08913: lock or [rsp+0CE0h+var_CE0], r10d
 * 0000000140A08918: mov     r12d, [r15+7E4h]
 * 0000000140A0891F: mov     r9, r15
 * 0000000140A08922: mov     r10d, [r15+814h]
 * 0000000140A08929: mov     rax, r15
 * 0000000140A0892C: mov     r14, [r15+818h]
 * 0000000140A08933: mov     dword ptr [rbp+0BE0h+arg_8], r12d
 * 0000000140A0893A: lea     rcx, [r15+r12]
 * 0000000140A0893E: cmp     r15, rcx
 * 0000000140A08941: jnb     short loc_140A08953
 * 0000000140A08943: mov     edx, 40h ; '@'
 * 0000000140A08948: prefetchnta byte ptr [rax]
 * 0000000140A0894B: add     rax, rdx
 * 0000000140A0894E: cmp     rax, rcx
 * 0000000140A08951: jb      short loc_140A08948
 * 0000000140A08953: mov     r11d, r12d
 * 0000000140A08956: mov     r8, r14
 * 0000000140A08959: shr     r11d, 7
 * 0000000140A0895D: mov     r13d, 1
 * 0000000140A08963: test    r11d, r11d
 * 0000000140A08966: jz      short loc_140A089D4
 * 0000000140A08968: mov     r12, 7010008004002001h
 * 0000000140A08972: mov     edx, 8
 * 0000000140A08977: mov     rax, [r9]
 * 0000000140A0897A: mov     ecx, r10d
 * 0000000140A0897D: xor     rax, r8
 * 0000000140A08980: mov     r8, [r9+8]
 * 0000000140A08984: rol     rax, cl
 * 0000000140A08987: add     r9, 10h
 * 0000000140A0898B: xor     r8, rax
 * 0000000140A0898E: rol     r8, cl
 * 0000000140A08991: sub     rdx, r13
 * 0000000140A08994: jnz     short loc_140A08977
 * 0000000140A08996: mov     rcx, r9
 * 0000000140A08999: sub     rcx, r15
 * 0000000140A0899C: xor     rcx, r14
 * 0000000140A0899F: mov     rax, rcx
 * 0000000140A089A2: rol     rax, 11h
 * 0000000140A089A6: xor     rcx, rax
 * 0000000140A089A9: mov     rax, r12
 * 0000000140A089AC: mul     rcx
 * 0000000140A089AF: mov     [rbp+0BE0h+var_4E0], rdx
 * 0000000140A089B6: xor     edx, eax
 * 0000000140A089B8: xor     r10d, edx
 * 0000000140A089BB: mov     eax, 0FFFFFFFFh
 * 0000000140A089C0: and     r10d, 3Fh
 * 0000000140A089C4: cmovz   r10d, r13d
 * 0000000140A089C8: add     r11d, eax
 * 0000000140A089CB: jnz     short loc_140A08972
 * 0000000140A089CD: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A089D4: mov     edx, r12d
 * 0000000140A089D7: and     edx, 7Fh
 * 0000000140A089DA: cmp     edx, 8
 * 0000000140A089DD: jb      short loc_140A089FB
 * 0000000140A089DF: mov     r11d, edx
 * 0000000140A089E2: shr     r11, 3
 * 0000000140A089E6: xor     r8, [r9]
 * 0000000140A089E9: mov     ecx, r10d
 * 0000000140A089EC: rol     r8, cl
 * 0000000140A089EF: add     r9, 8
 * 0000000140A089F3: add     edx, 0FFFFFFF8h
 * 0000000140A089F6: sub     r11, r13
 * 0000000140A089F9: jnz     short loc_140A089E6
 * 0000000140A089FB: xor     r11d, r11d
 * 0000000140A089FE: test    edx, edx
 * 0000000140A08A00: jz      short loc_140A08A20
 * 0000000140A08A02: mov     r11d, 0FFFFFFFFh
 * 0000000140A08A08: movzx   eax, byte ptr [r9]
 * 0000000140A08A0C: mov     ecx, r10d
 * 0000000140A08A0F: xor     r8, rax
 * 0000000140A08A12: add     r9, r13
 * 0000000140A08A15: rol     r8, cl
 * 0000000140A08A18: add     edx, r11d
 * 0000000140A08A1B: jnz     short loc_140A08A08
 * 0000000140A08A1D: xor     r11d, r11d
 * 0000000140A08A20: mov     rax, [rbx+608h]
 * 0000000140A08A27: cmp     r8, [rax]
 * 0000000140A08A2A: jz      loc_140A0BF83
 * 0000000140A08A30: mov     rax, [rbx+590h]
 * 0000000140A08A37: mov     [rax], r15
 * 0000000140A08A3A: xor     r15d, r15d
 * 0000000140A08A3D: mov     [rax+10h], r12d
 * 0000000140A08A41: mov     rax, [rbx+608h]
 * 0000000140A08A48: mov     rcx, [rax]
 * 0000000140A08A4B: mov     eax, [rbx+8F8h]
 * 0000000140A08A51: test    eax, eax
 * 0000000140A08A53: jnz     loc_140A09D8D
 * 0000000140A08A59: mov     rax, [rbx+590h]
 * 0000000140A08A60: xor     rcx, r8
 * 0000000140A08A63: mov     [rax+18h], rcx
 * 0000000140A08A67: mov     eax, [rbx+8F8h]
 * 0000000140A08A6D: test    eax, eax
 * 0000000140A08A6F: jnz     loc_140A09D8D
 * 0000000140A08A75: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A08A7F: lea     r12d, [r15+1]
 * 0000000140A08A83: add     rax, rbx
 * 0000000140A08A86: mov     [rbx+900h], rax
 * 0000000140A08A8D: mov     [rbx+908h], r15
 * 0000000140A08A94: mov     qword ptr [rbx+910h], 111h
 * 0000000140A08A9F: mov     [rbx+918h], r8
 * 0000000140A08AA6: xor     edx, edx
 * 0000000140A08AA8: mov     [rbx+8F8h], r12d
 * 0000000140A08AAF: mov     rcx, rbx
 * 0000000140A08AB2: call    $$b8
 * 0000000140A08AB7: mov     r13d, 0FFFFFFFFh
 * 0000000140A08ABD: mov     ecx, 8000h
 * 0000000140A08AC2: test    [rbx+990h], ecx
 * 0000000140A08AC8: jnz     short loc_140A08AD7
 * 0000000140A08ACA: cmp     [rbx+8F8h], r15d
 * 0000000140A08AD1: jnz     loc_140A0C51C
 * 0000000140A08AD7: mov     r14, [rbx+980h]
 * 0000000140A08ADE: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A08AE5: mov     [rbx+980h], r15
 * 0000000140A08AEC: mov     rcx, r14
 * 0000000140A08AEF: mov     rax, [rbx+298h]
 * 0000000140A08AF6: call    KeGuardDispatchICall
 * 0000000140A08AFB: mov     eax, [rbx+990h]
 * 0000000140A08B01: test    r12b, al
 * 0000000140A08B04: jz      loc_140A0C2B9
 * 0000000140A08B0A: and     eax, 0FFFFFFFEh
 * 0000000140A08B0D: mov     rcx, r14
 * 0000000140A08B10: mov     [rbx+990h], eax
 * 0000000140A08B16: mov     rax, [rbx+280h]
 * 0000000140A08B1D: call    KeGuardDispatchICall
 * 0000000140A08B22: mov     r14, rax
 * 0000000140A08B25: test    rax, rax
 * 0000000140A08B28: jz      loc_140A0C2B2
 * 0000000140A08B2E: mov     rax, [rbx+2A0h]
 * 0000000140A08B35: mov     rcx, r14
 * 0000000140A08B38: call    KeGuardDispatchICall
 * 0000000140A08B3D: mov     [rbx+970h], eax
 * 0000000140A08B43: jmp     loc_140A0C2B9
 * 0000000140A08B48: mov     rdx, [rsi+578h]
 * 0000000140A08B4F: mov     rcx, [rsi+570h]
 * 0000000140A08B56: mov     [rbp+0BE0h+arg_8], rdx
 * 0000000140A08B5D: add     rdx, 20h ; ' '
 * 0000000140A08B61: mov     [rbp+0BE0h+var_C30], rdx
 * 0000000140A08B65: mov     edx, 2
 * 0000000140A08B6A: mov     [rbp+0BE0h+var_C40], rcx
 * 0000000140A08B6E: lea     r13, [rcx+20h]
 * 0000000140A08B72: mov     [rsp+0CE0h+var_C70], r13
 * 0000000140A08B77: cmp     eax, edx
 * 0000000140A08B79: jge     loc_140A08E1E
 * 0000000140A08B7F: mov     r12, [r13+0]
 * 0000000140A08B83: mov     r13d, [rsi+7E4h]
 * 0000000140A08B8A: mov     r15d, [rcx+30h]
 * 0000000140A08B8E: mov     r8d, [rsi+924h]
 * 0000000140A08B95: shl     r15d, 2
 * 0000000140A08B99: lea     eax, [r13+30h]
 * 0000000140A08B9D: cmp     eax, [rsi+0A1Ch]
 * 0000000140A08BA3: jbe     loc_140A08C85
 * 0000000140A08BA9: mov     edx, eax
 * 0000000140A08BAB: mov     rcx, rsi
 * 0000000140A08BAE: call    sub_140A11B30
 * 0000000140A08BB3: xor     r9d, r9d
 * 0000000140A08BB6: mov     r14, rax
 * 0000000140A08BB9: test    rax, rax
 * 0000000140A08BBC: jz      loc_140A09D98
 * 0000000140A08BC2: mov     ecx, [rsi+990h]
 * 0000000140A08BC8: test    cl, 4
 * 0000000140A08BCB: jnz     loc_140A08C7B
 * 0000000140A08BD1: mov     eax, [rsi+7E4h]
 * 0000000140A08BD7: lea     r10d, [r9+1]
 * 0000000140A08BDB: mov     r8, [rsi+7C8h]
 * 0000000140A08BE2: and     ecx, 20000000h
 * 0000000140A08BE8: neg     ecx
 * 0000000140A08BEA: sbb     edx, edx
 * 0000000140A08BEC: and     edx, [rsi+924h]
 * 0000000140A08BF2: cmp     eax, 8
 * 0000000140A08BF5: jb      short loc_140A08C0C
 * 0000000140A08BF7: mov     ecx, eax
 * 0000000140A08BF9: shr     rcx, 3
 * 0000000140A08BFD: mov     [rsi], r9
 * 0000000140A08C00: add     eax, 0FFFFFFF8h
 * 0000000140A08C03: add     rsi, 8
 * 0000000140A08C07: sub     rcx, r10
 * 0000000140A08C0A: jnz     short loc_140A08BFD
 * 0000000140A08C0C: test    eax, eax
 * 0000000140A08C0E: jz      short loc_140A08C1F
 * 0000000140A08C10: mov     ecx, 0FFFFFFFFh
 * 0000000140A08C15: mov     [rsi], r9b
 * 0000000140A08C18: add     rsi, r10
 * 0000000140A08C1B: add     eax, ecx
 * 0000000140A08C1D: jnz     short loc_140A08C15
 * 0000000140A08C1F: mov     ebx, [r14+924h]
 * 0000000140A08C26: mov     [r14+924h], edx
 * 0000000140A08C2D: cmp     edx, 3
 * 0000000140A08C30: jz      short loc_140A08C65
 * 0000000140A08C32: test    dword ptr [r14+990h], 10000000h
 * 0000000140A08C3D: mov     ecx, r9d
 * 0000000140A08C40: cmovz   ecx, edx
 * 0000000140A08C43: test    ecx, ecx
 * 0000000140A08C45: jz      short loc_140A08C5C
 * 0000000140A08C47: mov     rax, [r14+228h]
 * 0000000140A08C4E: lea     rcx, [r8-8]
 * 0000000140A08C52: mov     rdx, [rcx]
 * 0000000140A08C55: call    KeGuardDispatchICall
 * 0000000140A08C5A: jmp     short loc_140A08C74
 * 0000000140A08C5C: mov     rax, [r14+100h]
 * 0000000140A08C63: jmp     short loc_140A08C6C
 * 0000000140A08C65: mov     rax, [r14+368h]
 * 0000000140A08C6C: mov     rcx, r8
 * 0000000140A08C6F: call    KeGuardDispatchICall
 * 0000000140A08C74: mov     [r14+924h], ebx
 * 0000000140A08C7B: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140A08C83: jmp     short loc_140A08C8E
 * 0000000140A08C85: mov     r14, rsi
 * 0000000140A08C88: mov     [rsi+7E4h], eax
 * 0000000140A08C8E: lea     rbx, [r14+r13]
 * 0000000140A08C92: mov     r8d, 1
 * 0000000140A08C98: add     [r14+80Ch], r8d
 * 0000000140A08C9F: mov     rax, rbx
 * 0000000140A08CA2: mov     [rbp+0BE0h+var_548], rbx
 * 0000000140A08CA9: xor     r13d, r13d
 * 0000000140A08CAC: lea     ecx, [r8+2Fh]
 * 0000000140A08CB0: lea     edx, [rcx-2Ah]
 * 0000000140A08CB3: mov     [rax], r13
 * 0000000140A08CB6: add     ecx, 0FFFFFFF8h
 * 0000000140A08CB9: add     rax, 8
 * 0000000140A08CBD: sub     rdx, r8
 * 0000000140A08CC0: jnz     short loc_140A08CB3
 * 0000000140A08CC2: test    ecx, ecx
 * 0000000140A08CC4: jz      short loc_140A08CD5
 * 0000000140A08CC6: mov     edx, 0FFFFFFFFh
 * 0000000140A08CCB: mov     [rax], r13b
 * 0000000140A08CCE: add     rax, r8
 * 0000000140A08CD1: add     ecx, edx
 * 0000000140A08CD3: jnz     short loc_140A08CCB
 * 0000000140A08CD5: mov     dword ptr [rbx], 0Bh
 * 0000000140A08CDB: mov     r9, r12
 * 0000000140A08CDE: mov     [rbx+8], r12
 * 0000000140A08CE2: mov     rax, r12
 * 0000000140A08CE5: mov     [rbx+10h], r15d
 * 0000000140A08CE9: add     [r14+828h], r15d
 * 0000000140A08CF0: mov     r10d, [r14+814h]
 * 0000000140A08CF7: mov     rsi, [r14+818h]
 * 0000000140A08CFE: mov     ecx, r15d
 * 0000000140A08D01: add     rcx, r12
 * 0000000140A08D04: cmp     r12, rcx
 * 0000000140A08D07: jnb     short loc_140A08D19
 * 0000000140A08D09: mov     edx, 40h ; '@'
 * 0000000140A08D0E: prefetchnta byte ptr [rax]
 * 0000000140A08D11: add     rax, rdx
 * 0000000140A08D14: cmp     rax, rcx
 * 0000000140A08D17: jb      short loc_140A08D0E
 * 0000000140A08D19: mov     r11d, r15d
 * 0000000140A08D1C: mov     r8, rsi
 * 0000000140A08D1F: shr     r11d, 7
 * 0000000140A08D23: mov     r13d, 1
 * 0000000140A08D29: test    r11d, r11d
 * 0000000140A08D2C: jz      short loc_140A08D9B
 * 0000000140A08D2E: mov     rdi, 7010008004002001h
 * 0000000140A08D38: mov     edx, 8
 * 0000000140A08D3D: mov     rax, [r9]
 * 0000000140A08D40: mov     ecx, r10d
 * 0000000140A08D43: xor     rax, r8
 * 0000000140A08D46: mov     r8, [r9+8]
 * 0000000140A08D4A: rol     rax, cl
 * 0000000140A08D4D: add     r9, 10h
 * 0000000140A08D51: xor     r8, rax
 * 0000000140A08D54: rol     r8, cl
 * 0000000140A08D57: sub     rdx, r13
 * 0000000140A08D5A: jnz     short loc_140A08D3D
 * 0000000140A08D5C: mov     rcx, r9
 * 0000000140A08D5F: sub     rcx, r12
 * 0000000140A08D62: xor     rcx, rsi
 * 0000000140A08D65: mov     rax, rcx
 * 0000000140A08D68: rol     rax, 11h
 * 0000000140A08D6C: xor     rcx, rax
 * 0000000140A08D6F: mov     rax, rdi
 * 0000000140A08D72: mul     rcx
 * 0000000140A08D75: xor     r10d, edx
 * 0000000140A08D78: mov     [rbp+0BE0h+var_540], rdx
 * 0000000140A08D7F: xor     r10d, eax
 * 0000000140A08D82: mov     eax, 0FFFFFFFFh
 * 0000000140A08D87: and     r10d, 3Fh
 * 0000000140A08D8B: cmovz   r10d, r13d
 * 0000000140A08D8F: add     r11d, eax
 * 0000000140A08D92: jnz     short loc_140A08D38
 * 0000000140A08D94: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A08D9B: mov     edx, r15d
 * 0000000140A08D9E: and     edx, 7Fh
 * 0000000140A08DA1: cmp     edx, 8
 * 0000000140A08DA4: jb      short loc_140A08DC2
 * 0000000140A08DA6: mov     r11d, edx
 * 0000000140A08DA9: shr     r11, 3
 * 0000000140A08DAD: xor     r8, [r9]
 * 0000000140A08DB0: mov     ecx, r10d
 * 0000000140A08DB3: rol     r8, cl
 * 0000000140A08DB6: add     r9, 8
 * 0000000140A08DBA: add     edx, 0FFFFFFF8h
 * 0000000140A08DBD: sub     r11, r13
 * 0000000140A08DC0: jnz     short loc_140A08DAD
 * 0000000140A08DC2: xor     r11d, r11d
 * 0000000140A08DC5: test    edx, edx
 * 0000000140A08DC7: jz      short loc_140A08DE7
 * 0000000140A08DC9: mov     r11d, 0FFFFFFFFh
 * 0000000140A08DCF: movzx   eax, byte ptr [r9]
 * 0000000140A08DD3: mov     ecx, r10d
 * 0000000140A08DD6: xor     r8, rax
 * 0000000140A08DD9: add     r9, r13
 * 0000000140A08DDC: rol     r8, cl
 * 0000000140A08DDF: add     edx, r11d
 * 0000000140A08DE2: jnz     short loc_140A08DCF
 * 0000000140A08DE4: xor     r11d, r11d
 * 0000000140A08DE7: mov     rax, r8
 * 0000000140A08DEA: jmp     short loc_140A08DEF
 * 0000000140A08DEC: xor     r8d, eax
 * 0000000140A08DEF: shr     rax, 1Fh
 * 0000000140A08DF3: test    rax, rax
 * 0000000140A08DF6: jnz     short loc_140A08DEC
 * 0000000140A08DF8: mov     r13, [rsp+0CE0h+var_C70]
 * 0000000140A08DFD: btr     r8d, 1Fh
 * 0000000140A08E02: mov     [rbx+14h], r8d
 * 0000000140A08E06: mov     eax, 2
 * 0000000140A08E0B: add     [r14+828h], r15d
 * 0000000140A08E12: mov     rbx, r14
 * 0000000140A08E15: mov     [r14+958h], eax
 * 0000000140A08E1C: jmp     short loc_140A08E21
 * 0000000140A08E1E: xor     r11d, r11d
 * 0000000140A08E21: cmp     dword ptr [rbx+958h], 3
 * 0000000140A08E28: jge     loc_140A09065
 * 0000000140A08E2E: mov     r14d, [rbx+7E4h]
 * 0000000140A08E35: mov     r15d, 20h ; ' '
 * 0000000140A08E3B: mov     r12d, [rbx+838h]
 * 0000000140A08E42: cmp     r12d, 7
 * 0000000140A08E46: mov     r8d, [rbx+924h]
 * 0000000140A08E4D: cmovnz  r15d, r11d
 * 0000000140A08E51: lea     eax, [r14+30h]
 * 0000000140A08E55: cmp     eax, [rbx+0A1Ch]
 * 0000000140A08E5B: jbe     loc_140A08F3B
 * 0000000140A08E61: mov     edx, eax
 * 0000000140A08E63: mov     rcx, rbx
 * 0000000140A08E66: call    sub_140A11B30
 * 0000000140A08E6B: xor     r11d, r11d
 * 0000000140A08E6E: mov     rsi, rax
 * 0000000140A08E71: test    rax, rax
 * 0000000140A08E74: jz      loc_140A09D98
 * 0000000140A08E7A: mov     ecx, [rbx+990h]
 * 0000000140A08E80: test    cl, 4
 * 0000000140A08E83: jnz     loc_140A08F32
 * 0000000140A08E89: mov     eax, [rbx+7E4h]
 * 0000000140A08E8F: lea     r9d, [r11+1]
 * 0000000140A08E93: mov     r8, [rbx+7C8h]
 * 0000000140A08E9A: and     ecx, 20000000h
 * 0000000140A08EA0: neg     ecx
 * 0000000140A08EA2: sbb     edx, edx
 * 0000000140A08EA4: and     edx, [rbx+924h]
 * 0000000140A08EAA: cmp     eax, 8
 * 0000000140A08EAD: jb      short loc_140A08EC4
 * 0000000140A08EAF: mov     ecx, eax
 * 0000000140A08EB1: shr     rcx, 3
 * 0000000140A08EB5: mov     [rbx], r11
 * 0000000140A08EB8: add     eax, 0FFFFFFF8h
 * 0000000140A08EBB: add     rbx, 8
 * 0000000140A08EBF: sub     rcx, r9
 * 0000000140A08EC2: jnz     short loc_140A08EB5
 * 0000000140A08EC4: test    eax, eax
 * 0000000140A08EC6: jz      short loc_140A08ED7
 * 0000000140A08EC8: mov     ecx, 0FFFFFFFFh
 * 0000000140A08ECD: mov     [rbx], r11b
 * 0000000140A08ED0: add     rbx, r9
 * 0000000140A08ED3: add     eax, ecx
 * 0000000140A08ED5: jnz     short loc_140A08ECD
 * 0000000140A08ED7: mov     ebx, [rsi+924h]
 * 0000000140A08EDD: mov     [rsi+924h], edx
 * 0000000140A08EE3: cmp     edx, 3
 * 0000000140A08EE6: jz      short loc_140A08F1A
 * 0000000140A08EE8: test    dword ptr [rsi+990h], 10000000h
 * 0000000140A08EF2: mov     ecx, r11d
 * 0000000140A08EF5: cmovz   ecx, edx
 * 0000000140A08EF8: test    ecx, ecx
 * 0000000140A08EFA: jz      short loc_140A08F11
 * 0000000140A08EFC: mov     rax, [rsi+228h]
 * 0000000140A08F03: lea     rcx, [r8-8]
 * 0000000140A08F07: mov     rdx, [rcx]
 * 0000000140A08F0A: call    KeGuardDispatchICall
 * 0000000140A08F0F: jmp     short loc_140A08F29
 * 0000000140A08F11: mov     rax, [rsi+100h]
 * 0000000140A08F18: jmp     short loc_140A08F21
 * 0000000140A08F1A: mov     rax, [rsi+368h]
 * 0000000140A08F21: mov     rcx, r8
 * 0000000140A08F24: call    KeGuardDispatchICall
 * 0000000140A08F29: mov     [rsi+924h], ebx
 * 0000000140A08F2F: xor     r11d, r11d
 * 0000000140A08F32: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140A08F39: jmp     short loc_140A08F44
 * 0000000140A08F3B: mov     rsi, rbx
 * 0000000140A08F3E: mov     [rbx+7E4h], eax
 * 0000000140A08F44: mov     r8d, 1
 * 0000000140A08F4A: lea     rbx, [rsi+r14]
 * 0000000140A08F4E: add     [rsi+80Ch], r8d
 * 0000000140A08F55: mov     rax, rbx
 * 0000000140A08F58: mov     [rbp+0BE0h+var_538], rbx
 * 0000000140A08F5F: lea     ecx, [r8+2Fh]
 * 0000000140A08F63: lea     edx, [rcx-2Ah]
 * 0000000140A08F66: mov     [rax], r11
 * 0000000140A08F69: add     ecx, 0FFFFFFF8h
 * 0000000140A08F6C: add     rax, 8
 * 0000000140A08F70: sub     rdx, r8
 * 0000000140A08F73: jnz     short loc_140A08F66
 * 0000000140A08F75: test    ecx, ecx
 * 0000000140A08F77: jz      short loc_140A08F88
 * 0000000140A08F79: mov     edx, 0FFFFFFFFh
 * 0000000140A08F7E: mov     [rax], r11b
 * 0000000140A08F81: add     rax, r8
 * 0000000140A08F84: add     ecx, edx
 * 0000000140A08F86: jnz     short loc_140A08F7E
 * 0000000140A08F88: mov     [rbx], r15d
 * 0000000140A08F8B: mov     r14d, 20h ; ' '
 * 0000000140A08F91: mov     [rbx+8], r13
 * 0000000140A08F95: cmp     r12d, 7
 * 0000000140A08F99: jnz     short loc_140A08FAD
 * 0000000140A08F9B: lea     r9, [rbx+18h]
 * 0000000140A08F9F: mov     r8d, r14d
 * 0000000140A08FA2: mov     rdx, r13
 * 0000000140A08FA5: mov     rcx, rsi
 * 0000000140A08FA8: call    sub_1403E9B1C
 * 0000000140A08FAD: mov     rcx, [rbp+0BE0h+var_C40]
 * 0000000140A08FB1: mov     r8, r13
 * 0000000140A08FB4: mov     [rbx+10h], r14d
 * 0000000140A08FB8: add     rcx, 40h ; '@'
 * 0000000140A08FBC: add     [rsi+828h], r14d
 * 0000000140A08FC3: mov     rax, r13
 * 0000000140A08FC6: mov     r11d, [rsi+814h]
 * 0000000140A08FCD: mov     rdx, [rsi+818h]
 * 0000000140A08FD4: cmp     r13, rcx
 * 0000000140A08FD7: jnb     short loc_140A08FEA
 * 0000000140A08FD9: mov     r9d, 40h ; '@'
 * 0000000140A08FDF: prefetchnta byte ptr [rax]
 * 0000000140A08FE2: add     rax, r9
 * 0000000140A08FE5: cmp     rax, rcx
 * 0000000140A08FE8: jb      short loc_140A08FDF
 * 0000000140A08FEA: mov     r10d, 4
 * 0000000140A08FF0: mov     r9d, r14d
 * 0000000140A08FF3: lea     r15d, [r10-3]
 * 0000000140A08FF7: xor     rdx, [r8]
 * 0000000140A08FFA: mov     ecx, r11d
 * 0000000140A08FFD: rol     rdx, cl
 * 0000000140A09000: add     r8, 8
 * 0000000140A09004: add     r9d, 0FFFFFFF8h
 * 0000000140A09008: sub     r10, r15
 * 0000000140A0900B: jnz     short loc_140A08FF7
 * 0000000140A0900D: test    r9d, r9d
 * 0000000140A09010: jz      short loc_140A09033
 * 0000000140A09012: mov     edi, 0FFFFFFFFh
 * 0000000140A09017: movzx   eax, byte ptr [r8]
 * 0000000140A0901B: mov     ecx, r11d
 * 0000000140A0901E: xor     rdx, rax
 * 0000000140A09021: add     r8, r15
 * 0000000140A09024: rol     rdx, cl
 * 0000000140A09027: add     r9d, edi
 * 0000000140A0902A: jnz     short loc_140A09017
 * 0000000140A0902C: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A09033: mov     rax, rdx
 * 0000000140A09036: shr     rax, 1Fh
 * 0000000140A0903A: xor     r11d, r11d
 * 0000000140A0903D: jmp     short loc_140A09045
 * 0000000140A0903F: xor     edx, eax
 * 0000000140A09041: shr     rax, 1Fh
 * 0000000140A09045: test    rax, rax
 * 0000000140A09048: jnz     short loc_140A0903F
 * 0000000140A0904A: btr     edx, 1Fh
 * 0000000140A0904E: mov     [rbx+14h], edx
 * 0000000140A09051: mov     rbx, rsi
 * 0000000140A09054: add     [rsi+828h], r14d
 * 0000000140A0905B: mov     dword ptr [rsi+958h], 3
 * 0000000140A09065: cmp     dword ptr [rbx+958h], 4
 * 0000000140A0906C: mov     r13, [rbp+0BE0h+var_C30]
 * 0000000140A09070: jge     loc_140A09318
 * 0000000140A09076: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A0907D: mov     r14d, [rbx+7E4h]
 * 0000000140A09084: mov     r12, [r13+0]
 * 0000000140A09088: mov     r8d, [rbx+924h]
 * 0000000140A0908F: mov     r15d, [rax+30h]
 * 0000000140A09093: shl     r15d, 2
 * 0000000140A09097: lea     eax, [r14+30h]
 * 0000000140A0909B: cmp     eax, [rbx+0A1Ch]
 * 0000000140A090A1: jbe     loc_140A09181
 * 0000000140A090A7: mov     edx, eax
 * 0000000140A090A9: mov     rcx, rbx
 * 0000000140A090AC: call    sub_140A11B30
 * 0000000140A090B1: xor     r11d, r11d
 * 0000000140A090B4: mov     rsi, rax
 * 0000000140A090B7: test    rax, rax
 * 0000000140A090BA: jz      loc_140A09D98
 * 0000000140A090C0: mov     ecx, [rbx+990h]
 * 0000000140A090C6: test    cl, 4
 * 0000000140A090C9: jnz     loc_140A09178
 * 0000000140A090CF: mov     eax, [rbx+7E4h]
 * 0000000140A090D5: lea     r9d, [r11+1]
 * 0000000140A090D9: mov     r8, [rbx+7C8h]
 * 0000000140A090E0: and     ecx, 20000000h
 * 0000000140A090E6: neg     ecx
 * 0000000140A090E8: sbb     edx, edx
 * 0000000140A090EA: and     edx, [rbx+924h]
 * 0000000140A090F0: cmp     eax, 8
 * 0000000140A090F3: jb      short loc_140A0910A
 * 0000000140A090F5: mov     ecx, eax
 * 0000000140A090F7: shr     rcx, 3
 * 0000000140A090FB: mov     [rbx], r11
 * 0000000140A090FE: add     eax, 0FFFFFFF8h
 * 0000000140A09101: add     rbx, 8
 * 0000000140A09105: sub     rcx, r9
 * 0000000140A09108: jnz     short loc_140A090FB
 * 0000000140A0910A: test    eax, eax
 * 0000000140A0910C: jz      short loc_140A0911D
 * 0000000140A0910E: mov     ecx, 0FFFFFFFFh
 * 0000000140A09113: mov     [rbx], r11b
 * 0000000140A09116: add     rbx, r9
 * 0000000140A09119: add     eax, ecx
 * 0000000140A0911B: jnz     short loc_140A09113
 * 0000000140A0911D: mov     ebx, [rsi+924h]
 * 0000000140A09123: mov     [rsi+924h], edx
 * 0000000140A09129: cmp     edx, 3
 * 0000000140A0912C: jz      short loc_140A09160
 * 0000000140A0912E: test    dword ptr [rsi+990h], 10000000h
 * 0000000140A09138: mov     ecx, r11d
 * 0000000140A0913B: cmovz   ecx, edx
 * 0000000140A0913E: test    ecx, ecx
 * 0000000140A09140: jz      short loc_140A09157
 * 0000000140A09142: mov     rax, [rsi+228h]
 * 0000000140A09149: lea     rcx, [r8-8]
 * 0000000140A0914D: mov     rdx, [rcx]
 * 0000000140A09150: call    KeGuardDispatchICall
 * 0000000140A09155: jmp     short loc_140A0916F
 * 0000000140A09157: mov     rax, [rsi+100h]
 * 0000000140A0915E: jmp     short loc_140A09167
 * 0000000140A09160: mov     rax, [rsi+368h]
 * 0000000140A09167: mov     rcx, r8
 * 0000000140A0916A: call    KeGuardDispatchICall
 * 0000000140A0916F: mov     [rsi+924h], ebx
 * 0000000140A09175: xor     r11d, r11d
 * 0000000140A09178: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140A0917F: jmp     short loc_140A0918A
 * 0000000140A09181: mov     rsi, rbx
 * 0000000140A09184: mov     [rbx+7E4h], eax
 * 0000000140A0918A: mov     r8d, 1
 * 0000000140A09190: lea     rbx, [rsi+r14]
 * 0000000140A09194: add     [rsi+80Ch], r8d
 * 0000000140A0919B: mov     rax, rbx
 * 0000000140A0919E: mov     [rbp+0BE0h+var_530], rbx
 * 0000000140A091A5: lea     ecx, [r8+2Fh]
 * 0000000140A091A9: lea     edx, [rcx-2Ah]
 * 0000000140A091AC: mov     [rax], r11
 * 0000000140A091AF: add     ecx, 0FFFFFFF8h
 * 0000000140A091B2: add     rax, 8
 * 0000000140A091B6: sub     rdx, r8
 * 0000000140A091B9: jnz     short loc_140A091AC
 * 0000000140A091BB: test    ecx, ecx
 * 0000000140A091BD: jz      short loc_140A091CE
 * 0000000140A091BF: mov     edx, 0FFFFFFFFh
 * 0000000140A091C4: mov     [rax], r11b
 * 0000000140A091C7: add     rax, r8
 * 0000000140A091CA: add     ecx, edx
 * 0000000140A091CC: jnz     short loc_140A091C4
 * 0000000140A091CE: mov     dword ptr [rbx], 0Bh
 * 0000000140A091D4: mov     r9, r12
 * 0000000140A091D7: mov     [rbx+8], r12
 * 0000000140A091DB: mov     rax, r12
 * 0000000140A091DE: mov     [rbx+10h], r15d
 * 0000000140A091E2: add     [rsi+828h], r15d
 * 0000000140A091E9: mov     r10d, [rsi+814h]
 * 0000000140A091F0: mov     r14, [rsi+818h]
 * 0000000140A091F7: mov     ecx, r15d
 * 0000000140A091FA: add     rcx, r12
 * 0000000140A091FD: cmp     r12, rcx
 * 0000000140A09200: jnb     short loc_140A09212
 * 0000000140A09202: mov     edx, 40h ; '@'
 * 0000000140A09207: prefetchnta byte ptr [rax]
 * 0000000140A0920A: add     rax, rdx
 * 0000000140A0920D: cmp     rax, rcx
 * 0000000140A09210: jb      short loc_140A09207
 * 0000000140A09212: mov     r11d, r15d
 * 0000000140A09215: mov     r8, r14
 * 0000000140A09218: shr     r11d, 7
 * 0000000140A0921C: test    r11d, r11d
 * 0000000140A0921F: jz      short loc_140A09298
 * 0000000140A09221: mov     rdi, 7010008004002001h
 * 0000000140A0922B: mov     edx, 8
 * 0000000140A09230: lea     r13d, [rdx-7]
 * 0000000140A09234: mov     rax, [r9]
 * 0000000140A09237: mov     ecx, r10d
 * 0000000140A0923A: xor     rax, r8
 * 0000000140A0923D: mov     r8, [r9+8]
 * 0000000140A09241: rol     rax, cl
 * 0000000140A09244: add     r9, 10h
 * 0000000140A09248: xor     r8, rax
 * 0000000140A0924B: rol     r8, cl
 * 0000000140A0924E: sub     rdx, r13
 * 0000000140A09251: jnz     short loc_140A09234
 * 0000000140A09253: mov     rcx, r9
 * 0000000140A09256: sub     rcx, r12
 * 0000000140A09259: xor     rcx, r14
 * 0000000140A0925C: mov     rax, rcx
 * 0000000140A0925F: rol     rax, 11h
 * 0000000140A09263: xor     rcx, rax
 * 0000000140A09266: mov     rax, rdi
 * 0000000140A09269: mul     rcx
 * 0000000140A0926C: mov     [rbp+0BE0h+var_528], rdx
 * 0000000140A09273: xor     edx, eax
 * 0000000140A09275: xor     r10d, edx
 * 0000000140A09278: mov     rax, r13
 * 0000000140A0927B: and     r10d, 3Fh
 * 0000000140A0927F: cmovz   r10d, eax
 * 0000000140A09283: mov     eax, 0FFFFFFFFh
 * 0000000140A09288: add     r11d, eax
 * 0000000140A0928B: jnz     short loc_140A0922B
 * 0000000140A0928D: mov     r13, [rbp+0BE0h+var_C30]
 * 0000000140A09291: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A09298: mov     edx, r15d
 * 0000000140A0929B: mov     r14d, 1
 * 0000000140A092A1: and     edx, 7Fh
 * 0000000140A092A4: cmp     edx, 8
 * 0000000140A092A7: jb      short loc_140A092C5
 * 0000000140A092A9: mov     r11d, edx
 * 0000000140A092AC: shr     r11, 3
 * 0000000140A092B0: xor     r8, [r9]
 * 0000000140A092B3: mov     ecx, r10d
 * 0000000140A092B6: rol     r8, cl
 * 0000000140A092B9: add     r9, 8
 * 0000000140A092BD: add     edx, 0FFFFFFF8h
 * 0000000140A092C0: sub     r11, r14
 * 0000000140A092C3: jnz     short loc_140A092B0
 * 0000000140A092C5: xor     r11d, r11d
 * 0000000140A092C8: test    edx, edx
 * 0000000140A092CA: jz      short loc_140A092EA
 * 0000000140A092CC: mov     r11d, 0FFFFFFFFh
 * 0000000140A092D2: movzx   eax, byte ptr [r9]
 * 0000000140A092D6: mov     ecx, r10d
 * 0000000140A092D9: xor     r8, rax
 * 0000000140A092DC: add     r9, r14
 * 0000000140A092DF: rol     r8, cl
 * 0000000140A092E2: add     edx, r11d
 * 0000000140A092E5: jnz     short loc_140A092D2
 * 0000000140A092E7: xor     r11d, r11d
 * 0000000140A092EA: mov     rax, r8
 * 0000000140A092ED: jmp     short loc_140A092F2
 * 0000000140A092EF: xor     r8d, eax
 * 0000000140A092F2: shr     rax, 1Fh
 * 0000000140A092F6: test    rax, rax
 * 0000000140A092F9: jnz     short loc_140A092EF
 * 0000000140A092FB: btr     r8d, 1Fh
 * 0000000140A09300: mov     [rbx+14h], r8d
 * 0000000140A09304: mov     rbx, rsi
 * 0000000140A09307: add     [rsi+828h], r15d
 * 0000000140A0930E: mov     dword ptr [rsi+958h], 4
 * 0000000140A09318: cmp     dword ptr [rbx+958h], 5
 * 0000000140A0931F: jge     loc_140A0955A
 * 0000000140A09325: mov     r14d, [rbx+7E4h]
 * 0000000140A0932C: mov     r15d, 20h ; ' '
 * 0000000140A09332: mov     r12d, [rbx+838h]
 * 0000000140A09339: cmp     r12d, 7
 * 0000000140A0933D: mov     r8d, [rbx+924h]
 * 0000000140A09344: cmovnz  r15d, r11d
 * 0000000140A09348: lea     eax, [r14+30h]
 * 0000000140A0934C: cmp     eax, [rbx+0A1Ch]
 * 0000000140A09352: jbe     loc_140A09432
 * 0000000140A09358: mov     edx, eax
 * 0000000140A0935A: mov     rcx, rbx
 * 0000000140A0935D: call    sub_140A11B30
 * 0000000140A09362: xor     r11d, r11d
 * 0000000140A09365: mov     rsi, rax
 * 0000000140A09368: test    rax, rax
 * 0000000140A0936B: jz      loc_140A09D98
 * 0000000140A09371: mov     ecx, [rbx+990h]
 * 0000000140A09377: test    cl, 4
 * 0000000140A0937A: jnz     loc_140A09429
 * 0000000140A09380: mov     eax, [rbx+7E4h]
 * 0000000140A09386: lea     r9d, [r11+1]
 * 0000000140A0938A: mov     r8, [rbx+7C8h]
 * 0000000140A09391: and     ecx, 20000000h
 * 0000000140A09397: neg     ecx
 * 0000000140A09399: sbb     edx, edx
 * 0000000140A0939B: and     edx, [rbx+924h]
 * 0000000140A093A1: cmp     eax, 8
 * 0000000140A093A4: jb      short loc_140A093BB
 * 0000000140A093A6: mov     ecx, eax
 * 0000000140A093A8: shr     rcx, 3
 * 0000000140A093AC: mov     [rbx], r11
 * 0000000140A093AF: add     eax, 0FFFFFFF8h
 * 0000000140A093B2: add     rbx, 8
 * 0000000140A093B6: sub     rcx, r9
 * 0000000140A093B9: jnz     short loc_140A093AC
 * 0000000140A093BB: test    eax, eax
 * 0000000140A093BD: jz      short loc_140A093CE
 * 0000000140A093BF: mov     ecx, 0FFFFFFFFh
 * 0000000140A093C4: mov     [rbx], r11b
 * 0000000140A093C7: add     rbx, r9
 * 0000000140A093CA: add     eax, ecx
 * 0000000140A093CC: jnz     short loc_140A093C4
 * 0000000140A093CE: mov     ebx, [rsi+924h]
 * 0000000140A093D4: mov     [rsi+924h], edx
 * 0000000140A093DA: cmp     edx, 3
 * 0000000140A093DD: jz      short loc_140A09411
 * 0000000140A093DF: test    dword ptr [rsi+990h], 10000000h
 * 0000000140A093E9: mov     ecx, r11d
 * 0000000140A093EC: cmovz   ecx, edx
 * 0000000140A093EF: test    ecx, ecx
 * 0000000140A093F1: jz      short loc_140A09408
 * 0000000140A093F3: mov     rax, [rsi+228h]
 * 0000000140A093FA: lea     rcx, [r8-8]
 * 0000000140A093FE: mov     rdx, [rcx]
 * 0000000140A09401: call    KeGuardDispatchICall
 * 0000000140A09406: jmp     short loc_140A09420
 * 0000000140A09408: mov     rax, [rsi+100h]
 * 0000000140A0940F: jmp     short loc_140A09418
 * 0000000140A09411: mov     rax, [rsi+368h]
 * 0000000140A09418: mov     rcx, r8
 * 0000000140A0941B: call    KeGuardDispatchICall
 * 0000000140A09420: mov     [rsi+924h], ebx
 * 0000000140A09426: xor     r11d, r11d
 * 0000000140A09429: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140A09430: jmp     short loc_140A0943B
 * 0000000140A09432: mov     rsi, rbx
 * 0000000140A09435: mov     [rbx+7E4h], eax
 * 0000000140A0943B: mov     r8d, 1
 * 0000000140A09441: lea     rbx, [rsi+r14]
 * 0000000140A09445: add     [rsi+80Ch], r8d
 * 0000000140A0944C: mov     rax, rbx
 * 0000000140A0944F: mov     [rbp+0BE0h+var_520], rbx
 * 0000000140A09456: lea     ecx, [r8+2Fh]
 * 0000000140A0945A: lea     edx, [rcx-2Ah]
 * 0000000140A0945D: mov     [rax], r11
 * 0000000140A09460: add     ecx, 0FFFFFFF8h
 * 0000000140A09463: add     rax, 8
 * 0000000140A09467: sub     rdx, r8
 * 0000000140A0946A: jnz     short loc_140A0945D
 * 0000000140A0946C: test    ecx, ecx
 * 0000000140A0946E: jz      short loc_140A0947F
 * 0000000140A09470: mov     edx, 0FFFFFFFFh
 * 0000000140A09475: mov     [rax], r11b
 * 0000000140A09478: add     rax, r8
 * 0000000140A0947B: add     ecx, edx
 * 0000000140A0947D: jnz     short loc_140A09475
 * 0000000140A0947F: mov     [rbx], r15d
 * 0000000140A09482: mov     r14d, 20h ; ' '
 * 0000000140A09488: mov     [rbx+8], r13
 * 0000000140A0948C: cmp     r12d, 7
 * 0000000140A09490: jnz     short loc_140A094A4
 * 0000000140A09492: lea     r9, [rbx+18h]
 * 0000000140A09496: mov     r8d, r14d
 * 0000000140A09499: mov     rdx, r13
 * 0000000140A0949C: mov     rcx, rsi
 * 0000000140A0949F: call    sub_1403E9B1C
 * 0000000140A094A4: mov     rcx, [rbp+0BE0h+arg_8]
 * 0000000140A094AB: mov     r8, r13
 * 0000000140A094AE: mov     [rbx+10h], r14d
 * 0000000140A094B2: add     rcx, 40h ; '@'
 * 0000000140A094B6: add     [rsi+828h], r14d
 * 0000000140A094BD: mov     rax, r13
 * 0000000140A094C0: mov     r11d, [rsi+814h]
 * 0000000140A094C7: mov     rdx, [rsi+818h]
 * 0000000140A094CE: cmp     r13, rcx
 * 0000000140A094D1: jnb     short loc_140A094E4
 * 0000000140A094D3: mov     r9d, 40h ; '@'
 * 0000000140A094D9: prefetchnta byte ptr [rax]
 * 0000000140A094DC: add     rax, r9
 * 0000000140A094DF: cmp     rax, rcx
 * 0000000140A094E2: jb      short loc_140A094D9
 * 0000000140A094E4: mov     r10d, 4
 * 0000000140A094EA: mov     r9d, r14d
 * 0000000140A094ED: lea     r12d, [r10-3]
 * 0000000140A094F1: xor     rdx, [r8]
 * 0000000140A094F4: mov     ecx, r11d
 * 0000000140A094F7: rol     rdx, cl
 * 0000000140A094FA: add     r8, 8
 * 0000000140A094FE: add     r9d, 0FFFFFFF8h
 * 0000000140A09502: sub     r10, r12
 * 0000000140A09505: jnz     short loc_140A094F1
 * 0000000140A09507: xor     r15d, r15d
 * 0000000140A0950A: test    r9d, r9d
 * 0000000140A0950D: jz      short loc_140A0952D
 * 0000000140A0950F: mov     r15d, 0FFFFFFFFh
 * 0000000140A09515: movzx   eax, byte ptr [r8]
 * 0000000140A09519: mov     ecx, r11d
 * 0000000140A0951C: xor     rdx, rax
 * 0000000140A0951F: add     r8, r12
 * 0000000140A09522: rol     rdx, cl
 * 0000000140A09525: add     r9d, r15d
 * 0000000140A09528: jnz     short loc_140A09515
 * 0000000140A0952A: xor     r15d, r15d
 * 0000000140A0952D: mov     rax, rdx
 * 0000000140A09530: jmp     short loc_140A09534
 * 0000000140A09532: xor     edx, eax
 * 0000000140A09534: shr     rax, 1Fh
 * 0000000140A09538: test    rax, rax
 * 0000000140A0953B: jnz     short loc_140A09532
 * 0000000140A0953D: btr     edx, 1Fh
 * 0000000140A09541: mov     [rbx+14h], edx
 * 0000000140A09544: mov     rbx, rsi
 * 0000000140A09547: add     [rsi+828h], r14d
 * 0000000140A0954E: mov     dword ptr [rsi+958h], 5
 * 0000000140A09558: jmp     short loc_140A0955D
 * 0000000140A0955A: xor     r15d, r15d
 * 0000000140A0955D: mov     eax, [rbx+958h]
 * 0000000140A09563: mov     r12d, 6
 * 0000000140A09569: mov     rsi, rbx
 * 0000000140A0956C: mov     r14, rbx
 * 0000000140A0956F: cmp     eax, r12d
 * 0000000140A09572: jge     loc_140A0994C
 * 0000000140A09578: test    dword ptr [rbx+990h], 40000000h
 * 0000000140A09582: mov     r13d, r15d
 * 0000000140A09585: mov     r15, [rbp+0BE0h+var_C40]
 * 0000000140A09589: mov     rax, [r15+20h]
 * 0000000140A0958D: mov     [rbp+0BE0h+var_BD8], rax
 * 0000000140A09591: jnz     loc_140A09931
 * 0000000140A09597: xor     eax, eax
 * 0000000140A09599: mov     ebx, eax
 * 0000000140A0959B: cmp     [r15+30h], eax
 * 0000000140A0959F: jbe     loc_140A09931
 * 0000000140A095A5: mov     rdi, [rbp+0BE0h+var_BD8]
 * 0000000140A095A9: mov     eax, ebx
 * 0000000140A095AB: lea     rdx, [rbp+0BE0h+var_898]
 * 0000000140A095B2: xor     r8d, r8d
 * 0000000140A095B5: movsxd  rcx, dword ptr [rdi+rax*4]
 * 0000000140A095B9: mov     rax, [rsi+260h]
 * 0000000140A095C0: sar     rcx, 4
 * 0000000140A095C4: add     rcx, rdi
 * 0000000140A095C7: call    KeGuardDispatchICall
 * 0000000140A095CC: mov     r9d, 1
 * 0000000140A095D2: test    rax, rax
 * 0000000140A095D5: jnz     short loc_140A095DA
 * 0000000140A095D7: add     r13d, r9d
 * 0000000140A095DA: add     ebx, r9d
 * 0000000140A095DD: cmp     ebx, [r15+30h]
 * 0000000140A095E1: jb      short loc_140A095A9
 * 0000000140A095E3: xor     r15d, r15d
 * 0000000140A095E6: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A095ED: test    r13d, r13d
 * 0000000140A095F0: jz      loc_140A09934
 * 0000000140A095F6: mov     r14d, [rsi+7E4h]
 * 0000000140A095FD: mov     ecx, r13d
 * 0000000140A09600: mov     r8d, [rsi+924h]
 * 0000000140A09607: shl     ecx, 4
 * 0000000140A0960A: add     ecx, 30h ; '0'
 * 0000000140A0960D: add     ecx, r14d
 * 0000000140A09610: cmp     ecx, [rsi+0A1Ch]
 * 0000000140A09616: jbe     loc_140A09703
 * 0000000140A0961C: mov     edx, ecx
 * 0000000140A0961E: mov     rcx, rsi
 * 0000000140A09621: call    sub_140A11B30
 * 0000000140A09626: mov     rbx, rax
 * 0000000140A09629: test    rax, rax
 * 0000000140A0962C: jz      loc_140A096F6
 * 0000000140A09632: mov     ecx, [rsi+990h]
 * 0000000140A09638: test    cl, 4
 * 0000000140A0963B: jnz     loc_140A096E7
 * 0000000140A09641: mov     eax, [rsi+7E4h]
 * 0000000140A09647: lea     r9d, [r15+1]
 * 0000000140A0964B: mov     r8, [rsi+7C8h]
 * 0000000140A09652: and     ecx, 20000000h
 * 0000000140A09658: neg     ecx
 * 0000000140A0965A: sbb     edx, edx
 * 0000000140A0965C: and     edx, [rsi+924h]
 * 0000000140A09662: cmp     eax, 8
 * 0000000140A09665: jb      short loc_140A0967C
 * 0000000140A09667: mov     ecx, eax
 * 0000000140A09669: shr     rcx, 3
 * 0000000140A0966D: mov     [rsi], r15
 * 0000000140A09670: add     eax, 0FFFFFFF8h
 * 0000000140A09673: add     rsi, 8
 * 0000000140A09677: sub     rcx, r9
 * 0000000140A0967A: jnz     short loc_140A0966D
 * 0000000140A0967C: test    eax, eax
 * 0000000140A0967E: jz      short loc_140A0968F
 * 0000000140A09680: mov     ecx, 0FFFFFFFFh
 * 0000000140A09685: mov     [rsi], r15b
 * 0000000140A09688: add     rsi, r9
 * 0000000140A0968B: add     eax, ecx
 * 0000000140A0968D: jnz     short loc_140A09685
 * 0000000140A0968F: mov     esi, [rbx+924h]
 * 0000000140A09695: mov     [rbx+924h], edx
 * 0000000140A0969B: cmp     edx, 3
 * 0000000140A0969E: jz      short loc_140A096D2
 * 0000000140A096A0: test    dword ptr [rbx+990h], 10000000h
 * 0000000140A096AA: mov     ecx, r15d
 * 0000000140A096AD: cmovz   ecx, edx
 * 0000000140A096B0: test    ecx, ecx
 * 0000000140A096B2: jz      short loc_140A096C9
 * 0000000140A096B4: mov     rax, [rbx+228h]
 * 0000000140A096BB: lea     rcx, [r8-8]
 * 0000000140A096BF: mov     rdx, [rcx]
 * 0000000140A096C2: call    KeGuardDispatchICall
 * 0000000140A096C7: jmp     short loc_140A096E1
 * 0000000140A096C9: mov     rax, [rbx+100h]
 * 0000000140A096D0: jmp     short loc_140A096D9
 * 0000000140A096D2: mov     rax, [rbx+368h]
 * 0000000140A096D9: mov     rcx, r8
 * 0000000140A096DC: call    KeGuardDispatchICall
 * 0000000140A096E1: mov     [rbx+924h], esi
 * 0000000140A096E7: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140A096EE: mov     r9d, 1
 * 0000000140A096F4: jmp     short loc_140A0970C
 * 0000000140A096F6: mov     eax, 0C000022Dh
 * 0000000140A096FB: mov     r14, rsi
 * 0000000140A096FE: jmp     loc_140A09937
 * 0000000140A09703: mov     rbx, rsi
 * 0000000140A09706: mov     [rsi+7E4h], ecx
 * 0000000140A0970C: add     [rbx+80Ch], r9d
 * 0000000140A09713: lea     rcx, [rbx+r14]
 * 0000000140A09717: mov     [rbp+0BE0h+var_838], rcx
 * 0000000140A0971E: mov     rax, rcx
 * 0000000140A09721: mov     edx, 30h ; '0'
 * 0000000140A09726: mov     r8, r12
 * 0000000140A09729: mov     [rax], r15
 * 0000000140A0972C: add     edx, 0FFFFFFF8h
 * 0000000140A0972F: add     rax, 8
 * 0000000140A09733: sub     r8, r9
 * 0000000140A09736: jnz     short loc_140A09729
 * 0000000140A09738: test    edx, edx
 * 0000000140A0973A: jz      short loc_140A0974D
 * 0000000140A0973C: mov     r8d, 0FFFFFFFFh
 * 0000000140A09742: mov     [rax], r15b
 * 0000000140A09745: add     rax, r9
 * 0000000140A09748: add     edx, r8d
 * 0000000140A0974B: jnz     short loc_140A09742
 * 0000000140A0974D: mov     dword ptr [rcx], 0Ah
 * 0000000140A09753: mov     [rcx+8], r15
 * 0000000140A09757: mov     [rcx+10h], r15d
 * 0000000140A0975B: mov     rdx, [rbx+818h]
 * 0000000140A09762: mov     rax, rdx
 * 0000000140A09765: jmp     short loc_140A09769
 * 0000000140A09767: xor     edx, eax
 * 0000000140A09769: shr     rax, 1Fh
 * 0000000140A0976D: test    rax, rax
 * 0000000140A09770: jnz     short loc_140A09767
 * 0000000140A09772: btr     edx, 1Fh
 * 0000000140A09776: mov     r14, rbx
 * 0000000140A09779: mov     [rcx+14h], edx
 * 0000000140A0977C: mov     rax, [rbp+0BE0h+var_838]
 * 0000000140A09783: mov     [rbp+0BE0h+var_A10], rax
 * 0000000140A0978A: mov     [rax+18h], r9d
 * 0000000140A0978E: mov     rax, [rbp+0BE0h+var_A10]
 * 0000000140A09795: mov     r9, [rbp+0BE0h+var_C40]
 * 0000000140A09799: mov     [rax+1Ch], r13d
 * 0000000140A0979D: xor     eax, eax
 * 0000000140A0979F: mov     r12d, eax
 * 0000000140A097A2: mov     rcx, [rbp+0BE0h+var_A10]
 * 0000000140A097A9: lea     r15, [rcx+30h]
 * 0000000140A097AD: cmp     [r9+30h], eax
 * 0000000140A097B1: jbe     loc_140A098A9
 * 0000000140A097B7: mov     rcx, [rbp+0BE0h+var_BD8]
 * 0000000140A097BB: lea     rdx, [rbp+0BE0h+var_898]
 * 0000000140A097C2: mov     eax, r12d
 * 0000000140A097C5: xor     r8d, r8d
 * 0000000140A097C8: movsxd  rsi, dword ptr [rcx+rax*4]
 * 0000000140A097CC: mov     rax, [rbx+260h]
 * 0000000140A097D3: sar     rsi, 4
 * 0000000140A097D7: add     rsi, rcx
 * 0000000140A097DA: mov     rcx, rsi
 * 0000000140A097DD: mov     [rsp+0CE0h+var_C70], rsi
 * 0000000140A097E2: call    KeGuardDispatchICall
 * 0000000140A097E7: test    rax, rax
 * 0000000140A097EA: jnz     loc_140A09889
 * 0000000140A097F0: lea     r11d, [rax+4]
 * 0000000140A097F4: mov     r8, rsi
 * 0000000140A097F7: add     [rbx+828h], r11d
 * 0000000140A097FE: lea     rcx, [rsi+4]
 * 0000000140A09802: mov     r10d, [rbx+814h]
 * 0000000140A09809: mov     rax, rsi
 * 0000000140A0980C: mov     rdx, [rbx+818h]
 * 0000000140A09813: cmp     rsi, rcx
 * 0000000140A09816: jnb     short loc_140A09827
 * 0000000140A09818: lea     r9d, [r11+3Ch]
 * 0000000140A0981C: prefetchnta byte ptr [rax]
 * 0000000140A0981F: add     rax, r9
 * 0000000140A09822: cmp     rax, rcx
 * 0000000140A09825: jb      short loc_140A0981C
 * 0000000140A09827: mov     r9d, r11d
 * 0000000140A0982A: mov     edi, 1
 * 0000000140A0982F: mov     esi, 0FFFFFFFFh
 * 0000000140A09834: movzx   eax, byte ptr [r8]
 * 0000000140A09838: mov     ecx, r10d
 * 0000000140A0983B: xor     rdx, rax
 * 0000000140A0983E: add     r8, rdi
 * 0000000140A09841: rol     rdx, cl
 * 0000000140A09844: add     r9d, esi
 * 0000000140A09847: jnz     short loc_140A09834
 * 0000000140A09849: mov     rsi, [rsp+0CE0h+var_C70]
 * 0000000140A0984E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A09855: mov     rax, rdx
 * 0000000140A09858: jmp     short loc_140A0985C
 * 0000000140A0985A: xor     edx, eax
 * 0000000140A0985C: shr     rax, 1Fh
 * 0000000140A09860: test    rax, rax
 * 0000000140A09863: jnz     short loc_140A0985A
 * 0000000140A09865: xor     edx, [r15]
 * 0000000140A09868: mov     eax, 0FFFFFFFFh
 * 0000000140A0986D: btr     edx, 1Fh
 * 0000000140A09871: xor     [r15], edx
 * 0000000140A09874: mov     [r15+4], r11d
 * 0000000140A09878: mov     [r15+8], rsi
 * 0000000140A0987C: add     r15, 10h
 * 0000000140A09880: add     r13d, eax
 * 0000000140A09883: jz      loc_140A0992B
 * 0000000140A09889: mov     rax, [rbp+0BE0h+var_C40]
 * 0000000140A0988D: mov     r9d, 1
 * 0000000140A09893: add     r12d, r9d
 * 0000000140A09896: cmp     r12d, [rax+30h]
 * 0000000140A0989A: jb      loc_140A097B7
 * 0000000140A098A0: mov     rcx, [rbp+0BE0h+var_A10]
 * 0000000140A098A7: jmp     short loc_140A098AF
 * 0000000140A098A9: mov     r9d, 1
 * 0000000140A098AF: xor     r15d, r15d
 * 0000000140A098B2: test    r13d, r13d
 * 0000000140A098B5: jz      loc_140A09AAE
 * 0000000140A098BB: cmp     [rbx+8F8h], r15d
 * 0000000140A098C2: jnz     loc_140A09D9B
 * 0000000140A098C8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A098D2: add     rax, rbx
 * 0000000140A098D5: mov     [rbx+900h], rax
 * 0000000140A098DC: test    rcx, rcx
 * 0000000140A098DF: jz      short loc_140A098F0
 * 0000000140A098E1: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A098EB: add     rax, rcx
 * 0000000140A098EE: jmp     short loc_140A098F3
 * 0000000140A098F0: mov     rax, r15
 * 0000000140A098F3: mov     [rbx+908h], rax
 * 0000000140A098FA: test    rcx, rcx
 * 0000000140A098FD: jz      short loc_140A09904
 * 0000000140A098FF: movsxd  rax, dword ptr [rcx]
 * 0000000140A09902: jmp     short loc_140A09907
 * 0000000140A09904: mov     rax, r15
 * 0000000140A09907: mov     [rbx+910h], rax
 * 0000000140A0990E: mov     [rbx+918h], r15
 * 0000000140A09915: mov     [rbx+8F8h], r9d
 * 0000000140A0991C: xor     edx, edx
 * 0000000140A0991E: mov     rcx, rbx
 * 0000000140A09921: call    $$b8
 * 0000000140A09926: jmp     loc_140A09D9B
 * 0000000140A0992B: mov     r12d, 6
 * 0000000140A09931: xor     r15d, r15d
 * 0000000140A09934: mov     eax, r15d
 * 0000000140A09937: mov     rbx, r14
 * 0000000140A0993A: test    eax, eax
 * 0000000140A0993C: js      loc_140A09D9B
 * 0000000140A09942: mov     [r14+958h], r12d
 * 0000000140A09949: mov     eax, r12d
 * 0000000140A0994C: cmp     eax, 7
 * 0000000140A0994F: jge     loc_140A09D2A
 * 0000000140A09955: test    dword ptr [r14+990h], 40000000h
 * 0000000140A09960: mov     r13d, r15d
 * 0000000140A09963: mov     rdx, [rbp+0BE0h+var_C30]
 * 0000000140A09967: mov     rsi, [rdx]
 * 0000000140A0996A: mov     [rbp+0BE0h+var_C40], rsi
 * 0000000140A0996E: jnz     loc_140A09D15
 * 0000000140A09974: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A0997B: mov     ebx, r15d
 * 0000000140A0997E: cmp     [rax+30h], r15d
 * 0000000140A09982: jbe     loc_140A09D15
 * 0000000140A09988: mov     rdi, rax
 * 0000000140A0998B: mov     eax, ebx
 * 0000000140A0998D: lea     rdx, [rbp+0BE0h+var_8C0]
 * 0000000140A09994: xor     r8d, r8d
 * 0000000140A09997: movsxd  rcx, dword ptr [rsi+rax*4]
 * 0000000140A0999B: mov     rax, [r14+260h]
 * 0000000140A099A2: sar     rcx, 4
 * 0000000140A099A6: add     rcx, rsi
 * 0000000140A099A9: call    KeGuardDispatchICall
 * 0000000140A099AE: mov     r10d, 1
 * 0000000140A099B4: test    rax, rax
 * 0000000140A099B7: jnz     short loc_140A099BC
 * 0000000140A099B9: add     r13d, r10d
 * 0000000140A099BC: add     ebx, r10d
 * 0000000140A099BF: cmp     ebx, [rdi+30h]
 * 0000000140A099C2: jb      short loc_140A0998B
 * 0000000140A099C4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A099CB: test    r13d, r13d
 * 0000000140A099CE: jz      loc_140A09D15
 * 0000000140A099D4: mov     r15d, [r14+7E4h]
 * 0000000140A099DB: mov     ecx, r13d
 * 0000000140A099DE: mov     r8d, [r14+924h]
 * 0000000140A099E5: shl     ecx, 4
 * 0000000140A099E8: add     ecx, 30h ; '0'
 * 0000000140A099EB: add     ecx, r15d
 * 0000000140A099EE: cmp     ecx, [r14+0A1Ch]
 * 0000000140A099F5: jbe     loc_140A09AF7
 * 0000000140A099FB: mov     edx, ecx
 * 0000000140A099FD: mov     rcx, r14
 * 0000000140A09A00: call    sub_140A11B30
 * 0000000140A09A05: xor     r9d, r9d
 * 0000000140A09A08: mov     rbx, rax
 * 0000000140A09A0B: test    rax, rax
 * 0000000140A09A0E: jz      loc_140A09AEA
 * 0000000140A09A14: mov     ecx, [r14+990h]
 * 0000000140A09A1B: test    cl, 4
 * 0000000140A09A1E: jnz     loc_140A09ADB
 * 0000000140A09A24: mov     eax, [r14+7E4h]
 * 0000000140A09A2B: lea     r10d, [r9+1]
 * 0000000140A09A2F: mov     r8, [r14+7C8h]
 * 0000000140A09A36: and     ecx, 20000000h
 * 0000000140A09A3C: neg     ecx
 * 0000000140A09A3E: sbb     edx, edx
 * 0000000140A09A40: and     edx, [r14+924h]
 * 0000000140A09A47: cmp     eax, 8
 * 0000000140A09A4A: jb      short loc_140A09A61
 * 0000000140A09A4C: mov     ecx, eax
 * 0000000140A09A4E: shr     rcx, 3
 * 0000000140A09A52: mov     [r14], r9
 * 0000000140A09A55: add     eax, 0FFFFFFF8h
 * 0000000140A09A58: add     r14, 8
 * 0000000140A09A5C: sub     rcx, r10
 * 0000000140A09A5F: jnz     short loc_140A09A52
 * 0000000140A09A61: test    eax, eax
 * 0000000140A09A63: jz      short loc_140A09A74
 * 0000000140A09A65: mov     ecx, 0FFFFFFFFh
 * 0000000140A09A6A: mov     [r14], r9b
 * 0000000140A09A6D: add     r14, r10
 * 0000000140A09A70: add     eax, ecx
 * 0000000140A09A72: jnz     short loc_140A09A6A
 * 0000000140A09A74: mov     esi, [rbx+924h]
 * 0000000140A09A7A: mov     [rbx+924h], edx
 * 0000000140A09A80: cmp     edx, 3
 * 0000000140A09A83: jz      short loc_140A09AC2
 * 0000000140A09A85: test    dword ptr [rbx+990h], 10000000h
 * 0000000140A09A8F: mov     ecx, r9d
 * 0000000140A09A92: cmovz   ecx, edx
 * 0000000140A09A95: test    ecx, ecx
 * 0000000140A09A97: jz      short loc_140A09AB9
 * 0000000140A09A99: mov     rax, [rbx+228h]
 * 0000000140A09AA0: lea     rcx, [r8-8]
 * 0000000140A09AA4: mov     rdx, [rcx]
 * 0000000140A09AA7: call    KeGuardDispatchICall
 * 0000000140A09AAC: jmp     short loc_140A09AD1
 * 0000000140A09AAE: mov     r12d, 6
 * 0000000140A09AB4: jmp     loc_140A09934
 * 0000000140A09AB9: mov     rax, [rbx+100h]
 * 0000000140A09AC0: jmp     short loc_140A09AC9
 * 0000000140A09AC2: mov     rax, [rbx+368h]
 * 0000000140A09AC9: mov     rcx, r8
 * 0000000140A09ACC: call    KeGuardDispatchICall
 * 0000000140A09AD1: mov     [rbx+924h], esi
 * 0000000140A09AD7: mov     rsi, [rbp+0BE0h+var_C40]
 * 0000000140A09ADB: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140A09AE2: mov     r10d, 1
 * 0000000140A09AE8: jmp     short loc_140A09B01
 * 0000000140A09AEA: mov     eax, 0C000022Dh
 * 0000000140A09AEF: xor     r15d, r15d
 * 0000000140A09AF2: jmp     loc_140A09D18
 * 0000000140A09AF7: mov     rbx, r14
 * 0000000140A09AFA: mov     [r14+7E4h], ecx
 * 0000000140A09B01: add     [rbx+80Ch], r10d
 * 0000000140A09B08: lea     rcx, [rbx+r15]
 * 0000000140A09B0C: mov     [rbp+0BE0h+var_8C8], rcx
 * 0000000140A09B13: mov     rax, rcx
 * 0000000140A09B16: xor     r9d, r9d
 * 0000000140A09B19: mov     edx, 30h ; '0'
 * 0000000140A09B1E: mov     r8, r12
 * 0000000140A09B21: mov     [rax], r9
 * 0000000140A09B24: add     edx, 0FFFFFFF8h
 * 0000000140A09B27: add     rax, 8
 * 0000000140A09B2B: sub     r8, r10
 * 0000000140A09B2E: jnz     short loc_140A09B21
 * 0000000140A09B30: test    edx, edx
 * 0000000140A09B32: jz      short loc_140A09B45
 * 0000000140A09B34: mov     r8d, 0FFFFFFFFh
 * 0000000140A09B3A: mov     [rax], r9b
 * 0000000140A09B3D: add     rax, r10
 * 0000000140A09B40: add     edx, r8d
 * 0000000140A09B43: jnz     short loc_140A09B3A
 * 0000000140A09B45: mov     dword ptr [rcx], 0Ah
 * 0000000140A09B4B: mov     [rcx+8], r9
 * 0000000140A09B4F: mov     [rcx+10h], r9d
 * 0000000140A09B53: mov     rdx, [rbx+818h]
 * 0000000140A09B5A: mov     rax, rdx
 * 0000000140A09B5D: jmp     short loc_140A09B61
 * 0000000140A09B5F: xor     edx, eax
 * 0000000140A09B61: shr     rax, 1Fh
 * 0000000140A09B65: test    rax, rax
 * 0000000140A09B68: jnz     short loc_140A09B5F
 * 0000000140A09B6A: btr     edx, 1Fh
 * 0000000140A09B6E: mov     r14, rbx
 * 0000000140A09B71: mov     [rcx+14h], edx
 * 0000000140A09B74: mov     r12d, r9d
 * 0000000140A09B77: mov     rax, [rbp+0BE0h+var_8C8]
 * 0000000140A09B7E: mov     [rbp+0BE0h+var_A58], rax
 * 0000000140A09B85: mov     [rax+18h], r10d
 * 0000000140A09B89: mov     rax, [rbp+0BE0h+var_A58]
 * 0000000140A09B90: mov     [rax+1Ch], r13d
 * 0000000140A09B94: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A09B9B: mov     rcx, [rbp+0BE0h+var_A58]
 * 0000000140A09BA2: lea     r15, [rcx+30h]
 * 0000000140A09BA6: cmp     [rax+30h], r9d
 * 0000000140A09BAA: jbe     loc_140A09CA4
 * 0000000140A09BB0: mov     eax, r12d
 * 0000000140A09BB3: lea     rdx, [rbp+0BE0h+var_8C0]
 * 0000000140A09BBA: xor     r8d, r8d
 * 0000000140A09BBD: movsxd  rsi, dword ptr [rsi+rax*4]
 * 0000000140A09BC1: mov     rax, [rbx+260h]
 * 0000000140A09BC8: sar     rsi, 4
 * 0000000140A09BCC: add     rsi, [rbp+0BE0h+var_C40]
 * 0000000140A09BD0: mov     rcx, rsi
 * 0000000140A09BD3: mov     [rsp+0CE0h+var_C70], rsi
 * 0000000140A09BD8: call    KeGuardDispatchICall
 * 0000000140A09BDD: test    rax, rax
 * 0000000140A09BE0: jnz     loc_140A09C7F
 * 0000000140A09BE6: lea     r11d, [rax+4]
 * 0000000140A09BEA: mov     r8, rsi
 * 0000000140A09BED: add     [rbx+828h], r11d
 * 0000000140A09BF4: lea     rcx, [rsi+4]
 * 0000000140A09BF8: mov     r10d, [rbx+814h]
 * 0000000140A09BFF: mov     rax, rsi
 * 0000000140A09C02: mov     rdx, [rbx+818h]
 * 0000000140A09C09: cmp     rsi, rcx
 * 0000000140A09C0C: jnb     short loc_140A09C1D
 * 0000000140A09C0E: lea     r9d, [r11+3Ch]
 * 0000000140A09C12: prefetchnta byte ptr [rax]
 * 0000000140A09C15: add     rax, r9
 * 0000000140A09C18: cmp     rax, rcx
 * 0000000140A09C1B: jb      short loc_140A09C12
 * 0000000140A09C1D: mov     r9d, r11d
 * 0000000140A09C20: mov     edi, 1
 * 0000000140A09C25: mov     esi, 0FFFFFFFFh
 * 0000000140A09C2A: movzx   eax, byte ptr [r8]
 * 0000000140A09C2E: mov     ecx, r10d
 * 0000000140A09C31: xor     rdx, rax
 * 0000000140A09C34: add     r8, rdi
 * 0000000140A09C37: rol     rdx, cl
 * 0000000140A09C3A: add     r9d, esi
 * 0000000140A09C3D: jnz     short loc_140A09C2A
 * 0000000140A09C3F: mov     rsi, [rsp+0CE0h+var_C70]
 * 0000000140A09C44: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A09C4B: mov     rax, rdx
 * 0000000140A09C4E: jmp     short loc_140A09C52
 * 0000000140A09C50: xor     edx, eax
 * 0000000140A09C52: shr     rax, 1Fh
 * 0000000140A09C56: test    rax, rax
 * 0000000140A09C59: jnz     short loc_140A09C50
 * 0000000140A09C5B: xor     edx, [r15]
 * 0000000140A09C5E: mov     eax, 0FFFFFFFFh
 * 0000000140A09C63: btr     edx, 1Fh
 * 0000000140A09C67: xor     [r15], edx
 * 0000000140A09C6A: mov     [r15+4], r11d
 * 0000000140A09C6E: mov     [r15+8], rsi
 * 0000000140A09C72: add     r15, 10h
 * 0000000140A09C76: add     r13d, eax
 * 0000000140A09C79: jz      loc_140A09D12
 * 0000000140A09C7F: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A09C86: mov     r10d, 1
 * 0000000140A09C8C: mov     rsi, [rbp+0BE0h+var_C40]
 * 0000000140A09C90: add     r12d, r10d
 * 0000000140A09C93: cmp     r12d, [rax+30h]
 * 0000000140A09C97: jb      loc_140A09BB0
 * 0000000140A09C9D: mov     rcx, [rbp+0BE0h+var_A58]
 * 0000000140A09CA4: xor     r15d, r15d
 * 0000000140A09CA7: test    r13d, r13d
 * 0000000140A09CAA: jz      short loc_140A09D15
 * 0000000140A09CAC: cmp     [rbx+8F8h], r15d
 * 0000000140A09CB3: jnz     loc_140A09D9B
 * 0000000140A09CB9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A09CC3: add     rax, rbx
 * 0000000140A09CC6: mov     [rbx+900h], rax
 * 0000000140A09CCD: test    rcx, rcx
 * 0000000140A09CD0: jz      short loc_140A09CE1
 * 0000000140A09CD2: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A09CDC: add     rax, rcx
 * 0000000140A09CDF: jmp     short loc_140A09CE4
 * 0000000140A09CE1: mov     rax, r15
 * 0000000140A09CE4: mov     [rbx+908h], rax
 * 0000000140A09CEB: test    rcx, rcx
 * 0000000140A09CEE: jz      short loc_140A09CF5
 * 0000000140A09CF0: movsxd  rax, dword ptr [rcx]
 * 0000000140A09CF3: jmp     short loc_140A09CF8
 * 0000000140A09CF5: mov     rax, r15
 * 0000000140A09CF8: mov     [rbx+910h], rax
 * 0000000140A09CFF: mov     [rbx+918h], r15
 * 0000000140A09D06: mov     [rbx+8F8h], r10d
 * 0000000140A09D0D: jmp     loc_140A0991C
 * 0000000140A09D12: xor     r15d, r15d
 * 0000000140A09D15: mov     eax, r15d
 * 0000000140A09D18: mov     rbx, r14
 * 0000000140A09D1B: test    eax, eax
 * 0000000140A09D1D: js      short loc_140A09D9B
 * 0000000140A09D1F: mov     dword ptr [r14+958h], 7
 * 0000000140A09D2A: mov     eax, r15d
 * 0000000140A09D2D: mov     rsi, rbx
 * 0000000140A09D30: test    eax, eax
 * 0000000140A09D32: js      short loc_140A09D8D
 * 0000000140A09D34: mov     r14d, 0FFFFFFFFh
 * 0000000140A09D3A: mov     rax, [rbx+570h]
 * 0000000140A09D41: lea     rdx, [rbp+0BE0h+var_210]
 * 0000000140A09D48: mov     rsi, rbx
 * 0000000140A09D4B: mov     [rsp+0CE0h+var_C80], rbx
 * 0000000140A09D50: mov     [rbp+0BE0h+var_BA8], rbx
 * 0000000140A09D54: mov     rcx, [rax+20h]
 * 0000000140A09D58: mov     rax, [rbx+200h]
 * 0000000140A09D5F: mov     [rbp+0BE0h+var_C40], rcx
 * 0000000140A09D63: call    KeGuardDispatchICall
 * 0000000140A09D68: mov     r13d, [rbp+0BE0h+var_1FC]
 * 0000000140A09D6F: mov     r12, rax
 * 0000000140A09D72: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A09D76: mov     rax, [rbp+0BE0h+var_208]
 * 0000000140A09D7D: mov     dword ptr [rbp+0BE0h+arg_8], r13d
 * 0000000140A09D84: mov     [rbp+0BE0h+var_C08], rax
 * 0000000140A09D88: test    rax, rax
 * 0000000140A09D8B: jnz     short loc_140A09DA2
 * 0000000140A09D8D: mov     r12d, 1
 * 0000000140A09D93: jmp     loc_140A08AB7
 * 0000000140A09D98: xor     r15d, r15d
 * 0000000140A09D9B: mov     eax, 0C000022Dh
 * 0000000140A09DA0: jmp     short loc_140A09D2D
 * 0000000140A09DA2: mov     ecx, 4
 * 0000000140A09DA7: mov     [rbp+0BE0h+var_AE8], r15
 * 0000000140A09DAE: lea     rax, [rbp+0BE0h+var_AE0]
 * 0000000140A09DB5: lea     edx, [rcx-3]
 * 0000000140A09DB8: mov     [rax], r15b
 * 0000000140A09DBB: add     rax, rdx
 * 0000000140A09DBE: add     ecx, r14d
 * 0000000140A09DC1: jnz     short loc_140A09DB8
 * 0000000140A09DC3: xor     edx, edx
 * 0000000140A09DC5: cmp     [rbx+80Ch], edx
 * 0000000140A09DCB: jbe     loc_140A09FCF
 * 0000000140A09DD1: mov     ecx, [rbp+0BE0h+var_AE0]
 * 0000000140A09DD7: mov     r9d, dword ptr [rbp+0BE0h+var_AE8+4]
 * 0000000140A09DDE: mov     r11d, dword ptr [rbp+0BE0h+var_AE8]
 * 0000000140A09DE5: mov     rax, [rbx+0A78h]
 * 0000000140A09DEC: mov     r14, rbx
 * 0000000140A09DEF: test    rax, rax
 * 0000000140A09DF2: mov     r10d, edx
 * 0000000140A09DF5: cmovnz  r14, rax
 * 0000000140A09DF9: mov     [rsp+0CE0h+var_C70], r14
 * 0000000140A09DFE: mov     r8d, [r14+808h]
 * 0000000140A09E05: add     r8, r14
 * 0000000140A09E08: test    r11d, r11d
 * 0000000140A09E0B: jz      short loc_140A09E1B
 * 0000000140A09E0D: cmp     r9d, r15d
 * 0000000140A09E10: ja      short loc_140A09E1B
 * 0000000140A09E12: mov     r8d, ecx
 * 0000000140A09E15: mov     r10d, r9d
 * 0000000140A09E18: add     r8, r14
 * 0000000140A09E1B: cmp     r10d, r15d
 * 0000000140A09E1E: jz      loc_140A09F59
 * 0000000140A09E24: mov     esi, 0Ch
 * 0000000140A09E29: mov     eax, r15d
 * 0000000140A09E2C: sub     eax, r10d
 * 0000000140A09E2F: mov     r14, 0AAAAAAAAAAAAAAABh
 * 0000000140A09E39: mov     r9d, eax
 * 0000000140A09E3C: add     r10d, eax
 * 0000000140A09E3F: lea     r12d, [rsi-0Ah]
 * 0000000140A09E43: mov     ecx, [r8]
 * 0000000140A09E46: cmp     ecx, esi
 * 0000000140A09E48: jg      short loc_140A09E8F
 * 0000000140A09E4A: jz      short loc_140A09EAC
 * 0000000140A09E4C: sub     ecx, 1
 * 0000000140A09E4F: jz      short loc_140A09EAC
 * 0000000140A09E51: sub     ecx, 6
 * 0000000140A09E54: jz      short loc_140A09E7D
 * 0000000140A09E56: sub     ecx, 1
 * 0000000140A09E59: jz      short loc_140A09E73
 * 0000000140A09E5B: cmp     ecx, r12d
 * 0000000140A09E5E: jnz     loc_140A09EEB
 * 0000000140A09E64: mov     eax, [r8+1Ch]
 * 0000000140A09E68: add     eax, 3
 * 0000000140A09E6B: shl     eax, 4
 * 0000000140A09E6E: jmp     loc_140A09F2A
 * 0000000140A09E73: movzx   eax, word ptr [r8+20h]
 * 0000000140A09E78: jmp     loc_140A09F24
 * 0000000140A09E7D: mov     eax, [r8+18h]
 * 0000000140A09E81: add     eax, r12d
 * 0000000140A09E84: lea     eax, [rax+rax*2]
 * 0000000140A09E87: shl     eax, 3
 * 0000000140A09E8A: jmp     loc_140A09F2A
 * 0000000140A09E8F: cmp     ecx, 1Ch
 * 0000000140A09E92: jz      loc_140A09F1F
 * 0000000140A09E98: cmp     ecx, 1Eh
 * 0000000140A09E9B: jz      short loc_140A09EF2
 * 0000000140A09E9D: cmp     ecx, 20h ; ' '
 * 0000000140A09EA0: jle     short loc_140A09EEB
 * 0000000140A09EA2: cmp     ecx, 22h ; '"'
 * 0000000140A09EA5: jle     short loc_140A09EC3
 * 0000000140A09EA7: cmp     ecx, 2Bh ; '+'
 * 0000000140A09EAA: jnz     short loc_140A09EEB
 * 0000000140A09EAC: mov     ecx, [r8+10h]
 * 0000000140A09EB0: mov     rax, r14
 * 0000000140A09EB3: mul     rcx
 * 0000000140A09EB6: shr     rdx, 3
 * 0000000140A09EBA: lea     eax, ds:30h[rdx*4]
 * 0000000140A09EC1: jmp     short loc_140A09F2A
 * 0000000140A09EC3: mov     ecx, [r8+20h]
 * 0000000140A09EC7: mov     edx, [r8+28h]
 * 0000000140A09ECB: and     ecx, 0FFFh
 * 0000000140A09ED1: add     rdx, 0FFFh
 * 0000000140A09ED8: add     rdx, rcx
 * 0000000140A09EDB: shr     rdx, 0Ch
 * 0000000140A09EDF: lea     eax, [rdx+rdx*4]
 * 0000000140A09EE2: lea     eax, ds:30h[rax*4]
 * 0000000140A09EE9: jmp     short loc_140A09F2A
 * 0000000140A09EEB: mov     eax, 30h ; '0'
 * 0000000140A09EF0: jmp     short loc_140A09F2A
 * 0000000140A09EF2: mov     eax, [r8+24h]
 * 0000000140A09EF6: lea     ecx, [rax-1]
 * 0000000140A09EF9: neg     eax
 * 0000000140A09EFB: sbb     eax, eax
 * 0000000140A09EFD: and     ecx, eax
 * 0000000140A09EFF: mov     rax, r14
 * 0000000140A09F02: mul     rcx
 * 0000000140A09F05: movzx   eax, word ptr [r8+28h]
 * 0000000140A09F0A: shr     rdx, 3
 * 0000000140A09F0E: add     edx, 7
 * 0000000140A09F11: and     edx, 0FFFFFFF8h
 * 0000000140A09F14: add     eax, r12d
 * 0000000140A09F17: lea     eax, [rax+rax*2]
 * 0000000140A09F1A: lea     eax, [rdx+rax*8]
 * 0000000140A09F1D: jmp     short loc_140A09F2A
 * 0000000140A09F1F: movzx   eax, word ptr [r8+28h]
 * 0000000140A09F24: add     eax, 37h ; '7'
 * 0000000140A09F27: and     eax, 0FFFFFFF8h
 * 0000000140A09F2A: add     r8, rax
 * 0000000140A09F2D: mov     eax, 1
 * 0000000140A09F32: sub     r9, rax
 * 0000000140A09F35: jnz     loc_140A09E43
 * 0000000140A09F3B: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A09F40: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A09F47: mov     r14, [rsp+0CE0h+var_C70]
 * 0000000140A09F4C: mov     r12, [rbp+0BE0h+var_C30]
 * 0000000140A09F50: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A09F57: jmp     short loc_140A09F5E
 * 0000000140A09F59: mov     eax, 1
 * 0000000140A09F5E: mov     ecx, r8d
 * 0000000140A09F61: mov     dword ptr [rbp+0BE0h+var_AE8], eax
 * 0000000140A09F67: sub     ecx, r14d
 * 0000000140A09F6A: mov     dword ptr [rbp+0BE0h+var_AE8+4], r10d
 * 0000000140A09F71: mov     [rbp+0BE0h+var_AE0], ecx
 * 0000000140A09F77: mov     r11d, eax
 * 0000000140A09F7A: movsxd  rdx, dword ptr [r8]
 * 0000000140A09F7D: mov     r9d, r10d
 * 0000000140A09F80: cmp     edx, 2Bh ; '+'
 * 0000000140A09F83: ja      short loc_140A09FA1
 * 0000000140A09F85: mov     r10, 80000001002h
 * 0000000140A09F8F: bt      r10, rdx
 * 0000000140A09F93: jnb     short loc_140A09FA1
 * 0000000140A09F95: cmp     [r8+8], r12
 * 0000000140A09F99: jnz     short loc_140A09FA1
 * 0000000140A09F9B: cmp     [r8+10h], r13d
 * 0000000140A09F9F: jz      short loc_140A09FCA
 * 0000000140A09FA1: lea     eax, [rdx-21h]
 * 0000000140A09FA4: mov     edx, 1
 * 0000000140A09FA9: cmp     eax, edx
 * 0000000140A09FAB: ja      short loc_140A09FB7
 * 0000000140A09FAD: mov     rax, [rbp+0BE0h+var_C08]
 * 0000000140A09FB1: cmp     [r8+20h], rax
 * 0000000140A09FB5: jz      short loc_140A09FCA
 * 0000000140A09FB7: add     r15d, edx
 * 0000000140A09FBA: cmp     r15d, [rbx+80Ch]
 * 0000000140A09FC1: jnb     short loc_140A09FCF
 * 0000000140A09FC3: xor     edx, edx
 * 0000000140A09FC5: jmp     loc_140A09DE5
 * 0000000140A09FCA: xor     r15d, r15d
 * 0000000140A09FCD: jmp     short loc_140A09FD5
 * 0000000140A09FCF: xor     r15d, r15d
 * 0000000140A09FD2: mov     r8d, r15d
 * 0000000140A09FD5: test    r8, r8
 * 0000000140A09FD8: jz      short loc_140A09FE2
 * 0000000140A09FDA: mov     rsi, rbx
 * 0000000140A09FDD: jmp     loc_140A0BCF0
 * 0000000140A09FE2: mov     r13, [rbp+0BE0h+var_C40]
 * 0000000140A09FE6: lea     rdx, [rbp+0BE0h+var_1F8]
 * 0000000140A09FED: mov     rax, [rbx+200h]
 * 0000000140A09FF4: mov     rcx, r13
 * 0000000140A09FF7: mov     [rbp+0BE0h+var_BB0], rbx
 * 0000000140A09FFB: call    KeGuardDispatchICall
 * 0000000140A0A000: mov     r12d, [rbp+0BE0h+var_1E4]
 * 0000000140A0A007: mov     [rbp+0BE0h+var_C10], rax
 * 0000000140A0A00B: mov     rax, [rbp+0BE0h+var_1F0]
 * 0000000140A0A012: mov     dword ptr [rbp+0BE0h+arg_8], r12d
 * 0000000140A0A019: mov     [rbp+0BE0h+var_BDC], r12d
 * 0000000140A0A01D: mov     [rsp+0CE0h+BugCheckParameter2], rax
 * 0000000140A0A022: test    rax, rax
 * 0000000140A0A025: jnz     short loc_140A0A039
 * 0000000140A0A027: mov     [rbp+0BE0h+var_C18], 0C000007Bh
 * 0000000140A0A02E: mov     r13d, 80000000h
 * 0000000140A0A034: jmp     loc_140A0BC3F
 * 0000000140A0A039: mov     ecx, 4
 * 0000000140A0A03E: mov     [rbp+0BE0h+var_AC8], r15
 * 0000000140A0A045: lea     rax, [rbp+0BE0h+var_AC0]
 * 0000000140A0A04C: mov     r8d, 0FFFFFFFFh
 * 0000000140A0A052: lea     edx, [rcx-3]
 * 0000000140A0A055: mov     [rax], r15b
 * 0000000140A0A058: add     rax, rdx
 * 0000000140A0A05B: add     ecx, r8d
 * 0000000140A0A05E: jnz     short loc_140A0A055
 * 0000000140A0A060: xor     edx, edx
 * 0000000140A0A062: cmp     [rbx+80Ch], edx
 * 0000000140A0A068: jbe     loc_140A0A276
 * 0000000140A0A06E: mov     ecx, [rbp+0BE0h+var_AC0]
 * 0000000140A0A074: mov     r9d, dword ptr [rbp+0BE0h+var_AC8+4]
 * 0000000140A0A07B: mov     r11d, dword ptr [rbp+0BE0h+var_AC8]
 * 0000000140A0A082: mov     rax, [rbx+0A78h]
 * 0000000140A0A089: mov     r14, rbx
 * 0000000140A0A08C: test    rax, rax
 * 0000000140A0A08F: mov     r10d, edx
 * 0000000140A0A092: cmovnz  r14, rax
 * 0000000140A0A096: mov     [rsp+0CE0h+var_C70], r14
 * 0000000140A0A09B: mov     r8d, [r14+808h]
 * 0000000140A0A0A2: add     r8, r14
 * 0000000140A0A0A5: test    r11d, r11d
 * 0000000140A0A0A8: jz      short loc_140A0A0B8
 * 0000000140A0A0AA: cmp     r9d, r15d
 * 0000000140A0A0AD: ja      short loc_140A0A0B8
 * 0000000140A0A0AF: mov     r8d, ecx
 * 0000000140A0A0B2: mov     r10d, r9d
 * 0000000140A0A0B5: add     r8, r14
 * 0000000140A0A0B8: cmp     r10d, r15d
 * 0000000140A0A0BB: jz      loc_140A0A1F6
 * 0000000140A0A0C1: mov     esi, 0Ch
 * 0000000140A0A0C6: mov     eax, r15d
 * 0000000140A0A0C9: sub     eax, r10d
 * 0000000140A0A0CC: mov     r14, 0AAAAAAAAAAAAAAABh
 * 0000000140A0A0D6: mov     r9d, eax
 * 0000000140A0A0D9: add     r10d, eax
 * 0000000140A0A0DC: lea     r12d, [rsi-0Ah]
 * 0000000140A0A0E0: mov     ecx, [r8]
 * 0000000140A0A0E3: cmp     ecx, esi
 * 0000000140A0A0E5: jg      short loc_140A0A12C
 * 0000000140A0A0E7: jz      short loc_140A0A149
 * 0000000140A0A0E9: sub     ecx, 1
 * 0000000140A0A0EC: jz      short loc_140A0A149
 * 0000000140A0A0EE: sub     ecx, 6
 * 0000000140A0A0F1: jz      short loc_140A0A11A
 * 0000000140A0A0F3: sub     ecx, 1
 * 0000000140A0A0F6: jz      short loc_140A0A110
 * 0000000140A0A0F8: cmp     ecx, r12d
 * 0000000140A0A0FB: jnz     loc_140A0A188
 * 0000000140A0A101: mov     eax, [r8+1Ch]
 * 0000000140A0A105: add     eax, 3
 * 0000000140A0A108: shl     eax, 4
 * 0000000140A0A10B: jmp     loc_140A0A1C7
 * 0000000140A0A110: movzx   eax, word ptr [r8+20h]
 * 0000000140A0A115: jmp     loc_140A0A1C1
 * 0000000140A0A11A: mov     eax, [r8+18h]
 * 0000000140A0A11E: add     eax, r12d
 * 0000000140A0A121: lea     eax, [rax+rax*2]
 * 0000000140A0A124: shl     eax, 3
 * 0000000140A0A127: jmp     loc_140A0A1C7
 * 0000000140A0A12C: cmp     ecx, 1Ch
 * 0000000140A0A12F: jz      loc_140A0A1BC
 * 0000000140A0A135: cmp     ecx, 1Eh
 * 0000000140A0A138: jz      short loc_140A0A18F
 * 0000000140A0A13A: cmp     ecx, 20h ; ' '
 * 0000000140A0A13D: jle     short loc_140A0A188
 * 0000000140A0A13F: cmp     ecx, 22h ; '"'
 * 0000000140A0A142: jle     short loc_140A0A160
 * 0000000140A0A144: cmp     ecx, 2Bh ; '+'
 * 0000000140A0A147: jnz     short loc_140A0A188
 * 0000000140A0A149: mov     ecx, [r8+10h]
 * 0000000140A0A14D: mov     rax, r14
 * 0000000140A0A150: mul     rcx
 * 0000000140A0A153: shr     rdx, 3
 * 0000000140A0A157: lea     eax, ds:30h[rdx*4]
 * 0000000140A0A15E: jmp     short loc_140A0A1C7
 * 0000000140A0A160: mov     ecx, [r8+20h]
 * 0000000140A0A164: mov     edx, [r8+28h]
 * 0000000140A0A168: and     ecx, 0FFFh
 * 0000000140A0A16E: add     rdx, 0FFFh
 * 0000000140A0A175: add     rdx, rcx
 * 0000000140A0A178: shr     rdx, 0Ch
 * 0000000140A0A17C: lea     eax, [rdx+rdx*4]
 * 0000000140A0A17F: lea     eax, ds:30h[rax*4]
 * 0000000140A0A186: jmp     short loc_140A0A1C7
 * 0000000140A0A188: mov     eax, 30h ; '0'
 * 0000000140A0A18D: jmp     short loc_140A0A1C7
 * 0000000140A0A18F: mov     eax, [r8+24h]
 * 0000000140A0A193: lea     ecx, [rax-1]
 * 0000000140A0A196: neg     eax
 * 0000000140A0A198: sbb     eax, eax
 * 0000000140A0A19A: and     ecx, eax
 * 0000000140A0A19C: mov     rax, r14
 * 0000000140A0A19F: mul     rcx
 * 0000000140A0A1A2: movzx   eax, word ptr [r8+28h]
 * 0000000140A0A1A7: shr     rdx, 3
 * 0000000140A0A1AB: add     edx, 7
 * 0000000140A0A1AE: and     edx, 0FFFFFFF8h
 * 0000000140A0A1B1: add     eax, r12d
 * 0000000140A0A1B4: lea     eax, [rax+rax*2]
 * 0000000140A0A1B7: lea     eax, [rdx+rax*8]
 * 0000000140A0A1BA: jmp     short loc_140A0A1C7
 * 0000000140A0A1BC: movzx   eax, word ptr [r8+28h]
 * 0000000140A0A1C1: add     eax, 37h ; '7'
 * 0000000140A0A1C4: and     eax, 0FFFFFFF8h
 * 0000000140A0A1C7: add     r8, rax
 * 0000000140A0A1CA: mov     eax, 1
 * 0000000140A0A1CF: sub     r9, rax
 * 0000000140A0A1D2: jnz     loc_140A0A0E0
 * 0000000140A0A1D8: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A0A1DD: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0A1E4: mov     r14, [rsp+0CE0h+var_C70]
 * 0000000140A0A1E9: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0A1F0: mov     r13, [rbp+0BE0h+var_C40]
 * 0000000140A0A1F4: jmp     short loc_140A0A1FB
 * 0000000140A0A1F6: mov     eax, 1
 * 0000000140A0A1FB: mov     ecx, r8d
 * 0000000140A0A1FE: mov     dword ptr [rbp+0BE0h+var_AC8], eax
 * 0000000140A0A204: sub     ecx, r14d
 * 0000000140A0A207: mov     dword ptr [rbp+0BE0h+var_AC8+4], r10d
 * 0000000140A0A20E: mov     [rbp+0BE0h+var_AC0], ecx
 * 0000000140A0A214: mov     r11d, eax
 * 0000000140A0A217: movsxd  rdx, dword ptr [r8]
 * 0000000140A0A21A: mov     r9d, r10d
 * 0000000140A0A21D: cmp     edx, 2Bh ; '+'
 * 0000000140A0A220: ja      short loc_140A0A242
 * 0000000140A0A222: mov     r10, 80000001002h
 * 0000000140A0A22C: bt      r10, rdx
 * 0000000140A0A230: jnb     short loc_140A0A242
 * 0000000140A0A232: mov     rax, [rbp+0BE0h+var_C10]
 * 0000000140A0A236: cmp     [r8+8], rax
 * 0000000140A0A23A: jnz     short loc_140A0A242
 * 0000000140A0A23C: cmp     [r8+10h], r12d
 * 0000000140A0A240: jz      short loc_140A0A26C
 * 0000000140A0A242: lea     eax, [rdx-21h]
 * 0000000140A0A245: mov     edx, 1
 * 0000000140A0A24A: cmp     eax, edx
 * 0000000140A0A24C: ja      short loc_140A0A259
 * 0000000140A0A24E: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0A253: cmp     [r8+20h], r14
 * 0000000140A0A257: jz      short loc_140A0A271
 * 0000000140A0A259: add     r15d, edx
 * 0000000140A0A25C: cmp     r15d, [rbx+80Ch]
 * 0000000140A0A263: jnb     short loc_140A0A276
 * 0000000140A0A265: xor     edx, edx
 * 0000000140A0A267: jmp     loc_140A0A082
 * 0000000140A0A26C: xor     r15d, r15d
 * 0000000140A0A26F: jmp     short loc_140A0A27C
 * 0000000140A0A271: xor     r15d, r15d
 * 0000000140A0A274: jmp     short loc_140A0A281
 * 0000000140A0A276: xor     r15d, r15d
 * 0000000140A0A279: mov     r8d, r15d
 * 0000000140A0A27C: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0A281: mov     [rbp+0BE0h+var_B48], r8
 * 0000000140A0A288: test    r8, r8
 * 0000000140A0A28B: jnz     loc_140A0BC47
 * 0000000140A0A291: mov     rax, [rbx+2A8h]
 * 0000000140A0A298: mov     rcx, r13
 * 0000000140A0A29B: call    KeGuardDispatchICall
 * 0000000140A0A2A0: mov     ecx, [rbp+0BE0h+var_BDC]
 * 0000000140A0A2A3: mov     [rbp+0BE0h+var_C58], ecx
 * 0000000140A0A2A6: mov     [rbp+0BE0h+var_C38], eax
 * 0000000140A0A2A9: test    eax, eax
 * 0000000140A0A2AB: jz      loc_140A0BC47
 * 0000000140A0A2B1: test    dword ptr [rbx+990h], 40000000h
 * 0000000140A0A2BB: jz      short loc_140A0A2DD
 * 0000000140A0A2BD: mov     r8d, 0Fh
 * 0000000140A0A2C3: lea     rcx, [rbp+0BE0h+var_BA8]
 * 0000000140A0A2C7: mov     rdx, r14
 * 0000000140A0A2CA: call    sub_140A1EFE4
 * 0000000140A0A2CF: mov     rsi, [rbp+0BE0h+var_BA8]
 * 0000000140A0A2D3: mov     ecx, eax
 * 0000000140A0A2D5: mov     [rbp+0BE0h+var_C18], eax
 * 0000000140A0A2D8: jmp     loc_140A0BC25
 * 0000000140A0A2DD: mov     rax, [rbx+1F0h]
 * 0000000140A0A2E4: lea     r9, [rbp+0BE0h+var_BDC]
 * 0000000140A0A2E8: xor     r8d, r8d
 * 0000000140A0A2EB: mov     [rbp+0BE0h+var_780], r15
 * 0000000140A0A2F2: mov     [rbp+0BE0h+var_9A0], r15d
 * 0000000140A0A2F9: mov     r15, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0A2FE: mov     rcx, r15
 * 0000000140A0A301: lea     r13d, [r8+1]
 * 0000000140A0A305: mov     dl, r13b
 * 0000000140A0A308: call    KeGuardDispatchICall
 * 0000000140A0A30D: mov     rdx, rax
 * 0000000140A0A310: lea     r8d, [r13+0Bh]
 * 0000000140A0A314: neg     rax
 * 0000000140A0A317: mov     [rbp+0BE0h+var_798], rdx
 * 0000000140A0A31E: lea     r9, [rbp+0BE0h+var_BDC]
 * 0000000140A0A322: mov     dl, r13b
 * 0000000140A0A325: sbb     ecx, ecx
 * 0000000140A0A327: and     ecx, [rbp+0BE0h+var_BDC]
 * 0000000140A0A32A: mov     [rbp+0BE0h+var_BDC], ecx
 * 0000000140A0A32D: mov     rax, [rbx+1F0h]
 * 0000000140A0A334: mov     [rbp+0BE0h+var_9AC], ecx
 * 0000000140A0A33A: mov     rcx, r15
 * 0000000140A0A33D: call    KeGuardDispatchICall
 * 0000000140A0A342: mov     rdx, rax
 * 0000000140A0A345: mov     [rbp+0BE0h+var_BD8], rax
 * 0000000140A0A349: neg     rax
 * 0000000140A0A34C: mov     [rbp+0BE0h+var_790], rdx
 * 0000000140A0A353: lea     r8d, [r13+9]
 * 0000000140A0A357: mov     dl, r13b
 * 0000000140A0A35A: sbb     ecx, ecx
 * 0000000140A0A35C: lea     r9, [rbp+0BE0h+var_BDC]
 * 0000000140A0A360: and     ecx, [rbp+0BE0h+var_BDC]
 * 0000000140A0A363: mov     [rbp+0BE0h+var_BDC], ecx
 * 0000000140A0A366: mov     rax, [rbx+1F0h]
 * 0000000140A0A36D: mov     dword ptr [rbp+0BE0h+arg_8], ecx
 * 0000000140A0A373: mov     [rbp+0BE0h+var_9A8], ecx
 * 0000000140A0A379: mov     rcx, r15
 * 0000000140A0A37C: call    KeGuardDispatchICall
 * 0000000140A0A381: mov     rdx, rax
 * 0000000140A0A384: neg     rax
 * 0000000140A0A387: mov     [rbp+0BE0h+var_788], rdx
 * 0000000140A0A38E: sbb     ecx, ecx
 * 0000000140A0A390: and     ecx, [rbp+0BE0h+var_BDC]
 * 0000000140A0A393: mov     [rbp+0BE0h+var_BDC], ecx
 * 0000000140A0A396: mov     rax, [rbx+1F8h]
 * 0000000140A0A39D: mov     [rbp+0BE0h+var_9A4], ecx
 * 0000000140A0A3A3: mov     rcx, r15
 * 0000000140A0A3A6: call    KeGuardDispatchICall
 * 0000000140A0A3AB: xor     r12d, r12d
 * 0000000140A0A3AE: mov     r14, rax
 * 0000000140A0A3B1: test    rax, rax
 * 0000000140A0A3B4: jnz     short loc_140A0A3BE
 * 0000000140A0A3B6: xor     r15d, r15d
 * 0000000140A0A3B9: jmp     loc_140A0A027
 * 0000000140A0A3BE: mov     rax, [rbx+498h]
 * 0000000140A0A3C5: lea     rdx, [rbp+0BE0h+var_8B8]
 * 0000000140A0A3CC: mov     rcx, r15
 * 0000000140A0A3CF: call    KeGuardDispatchICall
 * 0000000140A0A3D4: mov     r8d, [rbx+924h]
 * 0000000140A0A3DB: mov     [rbp+0BE0h+var_778], rax
 * 0000000140A0A3E2: mov     eax, [rbp+0BE0h+var_8B8]
 * 0000000140A0A3E8: mov     [rbp+0BE0h+var_99C], eax
 * 0000000140A0A3EE: mov     eax, [r14+54h]
 * 0000000140A0A3F2: mov     [rbp+0BE0h+var_7A0], r15
 * 0000000140A0A3F9: mov     r15d, [rbx+7E4h]
 * 0000000140A0A400: mov     [rbp+0BE0h+var_9B0], eax
 * 0000000140A0A406: lea     eax, [r15+120h]
 * 0000000140A0A40D: cmp     eax, [rbx+0A1Ch]
 * 0000000140A0A413: jbe     loc_140A0A4FE
 * 0000000140A0A419: mov     edx, eax
 * 0000000140A0A41B: mov     rcx, rbx
 * 0000000140A0A41E: call    sub_140A11B30
 * 0000000140A0A423: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A0A427: mov     r14, rax
 * 0000000140A0A42A: test    rax, rax
 * 0000000140A0A42D: jz      loc_140A0A4F2
 * 0000000140A0A433: mov     ecx, [rbx+990h]
 * 0000000140A0A439: test    cl, 4
 * 0000000140A0A43C: jnz     loc_140A0A4E8
 * 0000000140A0A442: mov     eax, [rbx+7E4h]
 * 0000000140A0A448: and     ecx, 20000000h
 * 0000000140A0A44E: mov     r8, [rbx+7C8h]
 * 0000000140A0A455: neg     ecx
 * 0000000140A0A457: sbb     edx, edx
 * 0000000140A0A459: and     edx, [rbx+924h]
 * 0000000140A0A45F: cmp     eax, 8
 * 0000000140A0A462: jb      short loc_140A0A479
 * 0000000140A0A464: mov     ecx, eax
 * 0000000140A0A466: shr     rcx, 3
 * 0000000140A0A46A: mov     [rbx], r12
 * 0000000140A0A46D: add     eax, 0FFFFFFF8h
 * 0000000140A0A470: add     rbx, 8
 * 0000000140A0A474: sub     rcx, r13
 * 0000000140A0A477: jnz     short loc_140A0A46A
 * 0000000140A0A479: test    eax, eax
 * 0000000140A0A47B: jz      short loc_140A0A48C
 * 0000000140A0A47D: mov     ecx, 0FFFFFFFFh
 * 0000000140A0A482: mov     [rbx], r12b
 * 0000000140A0A485: add     rbx, r13
 * 0000000140A0A488: add     eax, ecx
 * 0000000140A0A48A: jnz     short loc_140A0A482
 * 0000000140A0A48C: mov     ebx, [r14+924h]
 * 0000000140A0A493: mov     [r14+924h], edx
 * 0000000140A0A49A: cmp     edx, 3
 * 0000000140A0A49D: jz      short loc_140A0A4D2
 * 0000000140A0A49F: test    dword ptr [r14+990h], 10000000h
 * 0000000140A0A4AA: mov     ecx, r12d
 * 0000000140A0A4AD: cmovz   ecx, edx
 * 0000000140A0A4B0: test    ecx, ecx
 * 0000000140A0A4B2: jz      short loc_140A0A4C9
 * 0000000140A0A4B4: mov     rax, [r14+228h]
 * 0000000140A0A4BB: lea     rcx, [r8-8]
 * 0000000140A0A4BF: mov     rdx, [rcx]
 * 0000000140A0A4C2: call    KeGuardDispatchICall
 * 0000000140A0A4C7: jmp     short loc_140A0A4E1
 * 0000000140A0A4C9: mov     rax, [r14+100h]
 * 0000000140A0A4D0: jmp     short loc_140A0A4D9
 * 0000000140A0A4D2: mov     rax, [r14+368h]
 * 0000000140A0A4D9: mov     rcx, r8
 * 0000000140A0A4DC: call    KeGuardDispatchICall
 * 0000000140A0A4E1: mov     [r14+924h], ebx
 * 0000000140A0A4E8: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140A0A4F0: jmp     short loc_140A0A50B
 * 0000000140A0A4F2: xor     r15d, r15d
 * 0000000140A0A4F5: mov     [rbp+0BE0h+var_BB0], r15
 * 0000000140A0A4F9: jmp     loc_140A0A02E
 * 0000000140A0A4FE: mov     r14, rbx
 * 0000000140A0A501: mov     [rbp+0BE0h+var_C40], rbx
 * 0000000140A0A505: mov     [rbx+7E4h], eax
 * 0000000140A0A50B: mov     eax, 6
 * 0000000140A0A510: lea     r10, [r14+r15]
 * 0000000140A0A514: add     [r14+80Ch], eax
 * 0000000140A0A51B: lea     r13, [rbp+0BE0h+var_7A0]
 * 0000000140A0A522: mov     [rbp+0BE0h+var_978], r10
 * 0000000140A0A529: lea     rdi, [rbp+0BE0h+var_9B0]
 * 0000000140A0A530: mov     [rbp+0BE0h+var_B48], r10
 * 0000000140A0A537: lea     ebx, [rax-5]
 * 0000000140A0A53A: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A0A53E: mov     r15d, [rdi]
 * 0000000140A0A541: mov     rdx, rax
 * 0000000140A0A544: mov     rsi, [r13+0]
 * 0000000140A0A548: mov     ecx, 30h ; '0'
 * 0000000140A0A54D: mov     [rbp+0BE0h+var_BE8], r15d
 * 0000000140A0A551: mov     rax, r10
 * 0000000140A0A554: mov     [rax], r12
 * 0000000140A0A557: add     ecx, 0FFFFFFF8h
 * 0000000140A0A55A: add     rax, 8
 * 0000000140A0A55E: sub     rdx, rbx
 * 0000000140A0A561: jnz     short loc_140A0A554
 * 0000000140A0A563: test    ecx, ecx
 * 0000000140A0A565: jz      short loc_140A0A576
 * 0000000140A0A567: mov     edx, 0FFFFFFFFh
 * 0000000140A0A56C: mov     [rax], r12b
 * 0000000140A0A56F: add     rax, rbx
 * 0000000140A0A572: add     ecx, edx
 * 0000000140A0A574: jnz     short loc_140A0A56C
 * 0000000140A0A576: mov     dword ptr [r10], 0Bh
 * 0000000140A0A57D: lea     rcx, [rsi+r15]
 * 0000000140A0A581: mov     [r10+8], rsi
 * 0000000140A0A585: mov     r9, rsi
 * 0000000140A0A588: mov     [r10+10h], r15d
 * 0000000140A0A58C: mov     rax, rsi
 * 0000000140A0A58F: add     [r14+828h], r15d
 * 0000000140A0A596: mov     r11d, [r14+814h]
 * 0000000140A0A59D: mov     r12, [r14+818h]
 * 0000000140A0A5A4: cmp     rsi, rcx
 * 0000000140A0A5A7: jnb     short loc_140A0A5B9
 * 0000000140A0A5A9: mov     edx, 40h ; '@'
 * 0000000140A0A5AE: prefetchnta byte ptr [rax]
 * 0000000140A0A5B1: add     rax, rdx
 * 0000000140A0A5B4: cmp     rax, rcx
 * 0000000140A0A5B7: jb      short loc_140A0A5AE
 * 0000000140A0A5B9: mov     ebx, r15d
 * 0000000140A0A5BC: mov     r8, r12
 * 0000000140A0A5BF: shr     ebx, 7
 * 0000000140A0A5C2: test    ebx, ebx
 * 0000000140A0A5C4: jz      short loc_140A0A639
 * 0000000140A0A5C6: mov     r15, 7010008004002001h
 * 0000000140A0A5D0: mov     edx, 8
 * 0000000140A0A5D5: lea     r14d, [rdx-7]
 * 0000000140A0A5D9: mov     rax, [r9]
 * 0000000140A0A5DC: mov     ecx, r11d
 * 0000000140A0A5DF: xor     rax, r8
 * 0000000140A0A5E2: mov     r8, [r9+8]
 * 0000000140A0A5E6: rol     rax, cl
 * 0000000140A0A5E9: add     r9, 10h
 * 0000000140A0A5ED: xor     r8, rax
 * 0000000140A0A5F0: rol     r8, cl
 * 0000000140A0A5F3: sub     rdx, r14
 * 0000000140A0A5F6: jnz     short loc_140A0A5D9
 * 0000000140A0A5F8: mov     rcx, r9
 * 0000000140A0A5FB: sub     rcx, rsi
 * 0000000140A0A5FE: xor     rcx, r12
 * 0000000140A0A601: mov     rax, rcx
 * 0000000140A0A604: rol     rax, 11h
 * 0000000140A0A608: xor     rcx, rax
 * 0000000140A0A60B: mov     rax, r15
 * 0000000140A0A60E: mul     rcx
 * 0000000140A0A611: mov     [rbp+0BE0h+var_518], rdx
 * 0000000140A0A618: xor     edx, eax
 * 0000000140A0A61A: xor     r11d, edx
 * 0000000140A0A61D: mov     rax, r14
 * 0000000140A0A620: and     r11d, 3Fh
 * 0000000140A0A624: cmovz   r11d, eax
 * 0000000140A0A628: mov     eax, 0FFFFFFFFh
 * 0000000140A0A62D: add     ebx, eax
 * 0000000140A0A62F: jnz     short loc_140A0A5D0
 * 0000000140A0A631: mov     r14, [rbp+0BE0h+var_C40]
 * 0000000140A0A635: mov     r15d, [rbp+0BE0h+var_BE8]
 * 0000000140A0A639: mov     edx, r15d
 * 0000000140A0A63C: and     edx, 7Fh
 * 0000000140A0A63F: cmp     edx, 8
 * 0000000140A0A642: jb      short loc_140A0A669
 * 0000000140A0A644: mov     ebx, edx
 * 0000000140A0A646: mov     r14d, 1
 * 0000000140A0A64C: shr     rbx, 3
 * 0000000140A0A650: xor     r8, [r9]
 * 0000000140A0A653: mov     ecx, r11d
 * 0000000140A0A656: rol     r8, cl
 * 0000000140A0A659: add     r9, 8
 * 0000000140A0A65D: add     edx, 0FFFFFFF8h
 * 0000000140A0A660: sub     rbx, r14
 * 0000000140A0A663: jnz     short loc_140A0A650
 * 0000000140A0A665: mov     r14, [rbp+0BE0h+var_C40]
 * 0000000140A0A669: xor     r12d, r12d
 * 0000000140A0A66C: lea     ebx, [r12+1]
 * 0000000140A0A671: test    edx, edx
 * 0000000140A0A673: jz      short loc_140A0A693
 * 0000000140A0A675: mov     r12d, 0FFFFFFFFh
 * 0000000140A0A67B: movzx   eax, byte ptr [r9]
 * 0000000140A0A67F: mov     ecx, r11d
 * 0000000140A0A682: xor     r8, rax
 * 0000000140A0A685: add     r9, rbx
 * 0000000140A0A688: rol     r8, cl
 * 0000000140A0A68B: add     edx, r12d
 * 0000000140A0A68E: jnz     short loc_140A0A67B
 * 0000000140A0A690: xor     r12d, r12d
 * 0000000140A0A693: mov     rax, r8
 * 0000000140A0A696: jmp     short loc_140A0A69B
 * 0000000140A0A698: xor     r8d, eax
 * 0000000140A0A69B: shr     rax, 1Fh
 * 0000000140A0A69F: test    rax, rax
 * 0000000140A0A6A2: jnz     short loc_140A0A698
 * 0000000140A0A6A4: btr     r8d, 1Fh
 * 0000000140A0A6A9: add     rdi, 4
 * 0000000140A0A6AD: mov     [r10+14h], r8d
 * 0000000140A0A6B1: add     r13, 8
 * 0000000140A0A6B5: add     [r14+828h], r15d
 * 0000000140A0A6BC: mov     eax, 6
 * 0000000140A0A6C1: mov     r10, [rbp+0BE0h+var_978]
 * 0000000140A0A6C8: add     r10, 30h ; '0'
 * 0000000140A0A6CC: sub     [rbp+0BE0h+var_C30], rbx
 * 0000000140A0A6D0: mov     [rbp+0BE0h+var_978], r10
 * 0000000140A0A6D7: jnz     loc_140A0A53E
 * 0000000140A0A6DD: mov     rax, [rbp+0BE0h+var_B48]
 * 0000000140A0A6E4: mov     ecx, 2
 * 0000000140A0A6E9: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0A6EE: mov     rsi, r14
 * 0000000140A0A6F1: mov     r8d, [rbp+0BE0h+var_C58]
 * 0000000140A0A6F5: mov     r9, r13
 * 0000000140A0A6F8: mov     rdx, [rbp+0BE0h+var_C10]
 * 0000000140A0A6FC: mov     dword ptr [rax], 2Ch ; ','
 * 0000000140A0A702: mov     [rax+18h], r13
 * 0000000140A0A706: or      [rax+20h], ecx
 * 0000000140A0A709: lea     rax, [rbp+0BE0h+var_A7C]
 * 0000000140A0A710: mov     [rsp+0CE0h+var_CA8], rax
 * 0000000140A0A715: lea     rax, [rbp+0BE0h+var_B28]
 * 0000000140A0A71C: mov     [rsp+0CE0h+var_CB0], rax
 * 0000000140A0A721: lea     eax, [rcx+0Dh]
 * 0000000140A0A724: mov     dword ptr [rsp+0CE0h+var_CB8], eax
 * 0000000140A0A728: lea     rcx, [rbp+0BE0h+var_BB0]
 * 0000000140A0A72C: mov     eax, [rbp+0BE0h+var_C38]
 * 0000000140A0A72F: mov     dword ptr [rsp+0CE0h+BugCheckParameter4], eax
 * 0000000140A0A733: mov     [rbp+0BE0h+var_BB0], r14
 * 0000000140A0A737: mov     [rbp+0BE0h+var_BA8], r14
 * 0000000140A0A73B: call    sub_140A11098
 * 0000000140A0A740: xor     r15d, r15d
 * 0000000140A0A743: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0A74A: test    eax, eax
 * 0000000140A0A74C: jns     short loc_140A0A758
 * 0000000140A0A74E: mov     ecx, eax
 * 0000000140A0A750: mov     [rbp+0BE0h+var_C18], eax
 * 0000000140A0A753: jmp     loc_140A0BC25
 * 0000000140A0A758: mov     rsi, [rbp+0BE0h+var_BB0]
 * 0000000140A0A75C: mov     rcx, [rbp+0BE0h+var_B48]
 * 0000000140A0A763: mov     rax, rsi
 * 0000000140A0A766: mov     r9d, [rbp+0BE0h+var_A7C]
 * 0000000140A0A76D: sub     rax, r14
 * 0000000140A0A770: sub     r9d, [rbp+0BE0h+var_B28]
 * 0000000140A0A777: add     rcx, rax
 * 0000000140A0A77A: mov     ebx, [rbp+0BE0h+var_B28]
 * 0000000140A0A780: mov     [rbp+0BE0h+var_B48], rcx
 * 0000000140A0A787: add     rbx, r13
 * 0000000140A0A78A: mov     [rbp+0BE0h+var_BA8], rsi
 * 0000000140A0A78E: lea     r12, [rcx+0C0h]
 * 0000000140A0A795: mov     ecx, 30h ; '0'
 * 0000000140A0A79A: mov     rax, r12
 * 0000000140A0A79D: lea     edx, [rcx-2Ah]
 * 0000000140A0A7A0: lea     r8d, [rcx-2Fh]
 * 0000000140A0A7A4: mov     [rax], r15
 * 0000000140A0A7A7: add     ecx, 0FFFFFFF8h
 * 0000000140A0A7AA: add     rax, 8
 * 0000000140A0A7AE: sub     rdx, r8
 * 0000000140A0A7B1: jnz     short loc_140A0A7A4
 * 0000000140A0A7B3: mov     rdx, r8
 * 0000000140A0A7B6: test    ecx, ecx
 * 0000000140A0A7B8: jz      short loc_140A0A7CB
 * 0000000140A0A7BA: mov     r8d, 0FFFFFFFFh
 * 0000000140A0A7C0: mov     [rax], r15b
 * 0000000140A0A7C3: add     rax, rdx
 * 0000000140A0A7C6: add     ecx, r8d
 * 0000000140A0A7C9: jnz     short loc_140A0A7C0
 * 0000000140A0A7CB: mov     dword ptr [r12], 0Bh
 * 0000000140A0A7D3: mov     r10, rbx
 * 0000000140A0A7D6: mov     [r12+8], rbx
 * 0000000140A0A7DB: mov     rax, rbx
 * 0000000140A0A7DE: mov     [r12+10h], r9d
 * 0000000140A0A7E3: add     [rsi+828h], r9d
 * 0000000140A0A7EA: mov     r11d, [rsi+814h]
 * 0000000140A0A7F1: mov     r15, [rsi+818h]
 * 0000000140A0A7F8: mov     ecx, r9d
 * 0000000140A0A7FB: add     rcx, rbx
 * 0000000140A0A7FE: cmp     rbx, rcx
 * 0000000140A0A801: jnb     short loc_140A0A814
 * 0000000140A0A803: mov     r8d, 40h ; '@'
 * 0000000140A0A809: prefetchnta byte ptr [rax]
 * 0000000140A0A80C: add     rax, r8
 * 0000000140A0A80F: cmp     rax, rcx
 * 0000000140A0A812: jb      short loc_140A0A809
 * 0000000140A0A814: mov     r14d, r9d
 * 0000000140A0A817: mov     r8, r15
 * 0000000140A0A81A: shr     r14d, 7
 * 0000000140A0A81E: test    r14d, r14d
 * 0000000140A0A821: jz      short loc_140A0A89B
 * 0000000140A0A823: mov     rdi, 7010008004002001h
 * 0000000140A0A82D: mov     edx, 8
 * 0000000140A0A832: lea     r13d, [rdx-7]
 * 0000000140A0A836: mov     rax, [r10]
 * 0000000140A0A839: mov     ecx, r11d
 * 0000000140A0A83C: xor     rax, r8
 * 0000000140A0A83F: mov     r8, [r10+8]
 * 0000000140A0A843: rol     rax, cl
 * 0000000140A0A846: add     r10, 10h
 * 0000000140A0A84A: xor     r8, rax
 * 0000000140A0A84D: rol     r8, cl
 * 0000000140A0A850: sub     rdx, r13
 * 0000000140A0A853: jnz     short loc_140A0A836
 * 0000000140A0A855: mov     rcx, r10
 * 0000000140A0A858: sub     rcx, rbx
 * 0000000140A0A85B: xor     rcx, r15
 * 0000000140A0A85E: mov     rax, rcx
 * 0000000140A0A861: rol     rax, 11h
 * 0000000140A0A865: xor     rcx, rax
 * 0000000140A0A868: mov     rax, rdi
 * 0000000140A0A86B: mul     rcx
 * 0000000140A0A86E: mov     [rbp+0BE0h+var_510], rdx
 * 0000000140A0A875: xor     edx, eax
 * 0000000140A0A877: xor     r11d, edx
 * 0000000140A0A87A: mov     eax, 0FFFFFFFFh
 * 0000000140A0A87F: and     r11d, 3Fh
 * 0000000140A0A883: mov     rdx, r13
 * 0000000140A0A886: cmovz   r11d, edx
 * 0000000140A0A88A: add     r14d, eax
 * 0000000140A0A88D: jnz     short loc_140A0A82D
 * 0000000140A0A88F: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0A894: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0A89B: and     r9d, 7Fh
 * 0000000140A0A89F: cmp     r9d, 8
 * 0000000140A0A8A3: jb      short loc_140A0A8D2
 * 0000000140A0A8A5: mov     edx, r9d
 * 0000000140A0A8A8: mov     r13d, 1
 * 0000000140A0A8AE: shr     rdx, 3
 * 0000000140A0A8B2: xor     r8, [r10]
 * 0000000140A0A8B5: mov     ecx, r11d
 * 0000000140A0A8B8: rol     r8, cl
 * 0000000140A0A8BB: add     r10, 8
 * 0000000140A0A8BF: add     r9d, 0FFFFFFF8h
 * 0000000140A0A8C3: sub     rdx, r13
 * 0000000140A0A8C6: jnz     short loc_140A0A8B2
 * 0000000140A0A8C8: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0A8CD: mov     edx, 1
 * 0000000140A0A8D2: xor     r15d, r15d
 * 0000000140A0A8D5: test    r9d, r9d
 * 0000000140A0A8D8: jz      short loc_140A0A8F8
 * 0000000140A0A8DA: mov     r15d, 0FFFFFFFFh
 * 0000000140A0A8E0: movzx   eax, byte ptr [r10]
 * 0000000140A0A8E4: mov     ecx, r11d
 * 0000000140A0A8E7: xor     r8, rax
 * 0000000140A0A8EA: add     r10, rdx
 * 0000000140A0A8ED: rol     r8, cl
 * 0000000140A0A8F0: add     r9d, r15d
 * 0000000140A0A8F3: jnz     short loc_140A0A8E0
 * 0000000140A0A8F5: xor     r15d, r15d
 * 0000000140A0A8F8: mov     rax, r8
 * 0000000140A0A8FB: jmp     short loc_140A0A900
 * 0000000140A0A8FD: xor     r8d, eax
 * 0000000140A0A900: shr     rax, 1Fh
 * 0000000140A0A904: test    rax, rax
 * 0000000140A0A907: jnz     short loc_140A0A8FD
 * 0000000140A0A909: btr     r8d, 1Fh
 * 0000000140A0A90E: mov     [r12+14h], r8d
 * 0000000140A0A913: mov     r12d, 1
 * 0000000140A0A919: mov     rax, [rbp+0BE0h+var_B48]
 * 0000000140A0A920: mov     dword ptr [rax+0F0h], 30h ; '0'
 * 0000000140A0A92A: cmp     [rax+100h], r15d
 * 0000000140A0A931: jz      short loc_140A0A93A
 * 0000000140A0A933: or      [rax+108h], r12d
 * 0000000140A0A93A: mov     rax, [rbp+0BE0h+var_B48]
 * 0000000140A0A941: add     rax, 60h ; '`'
 * 0000000140A0A945: mov     [rbp+0BE0h+var_BA8], rsi
 * 0000000140A0A949: mov     [rbp+0BE0h+var_AA0], rax
 * 0000000140A0A950: jnz     loc_140A0ABF3
 * 0000000140A0A956: mov     r14d, [rsi+7E4h]
 * 0000000140A0A95D: mov     r8d, [rsi+924h]
 * 0000000140A0A964: lea     eax, [r14+30h]
 * 0000000140A0A968: cmp     eax, [rsi+0A1Ch]
 * 0000000140A0A96E: jbe     loc_140A0AA57
 * 0000000140A0A974: mov     edx, eax
 * 0000000140A0A976: mov     rcx, rsi
 * 0000000140A0A979: call    sub_140A11B30
 * 0000000140A0A97E: mov     rbx, rax
 * 0000000140A0A981: test    rax, rax
 * 0000000140A0A984: jz      loc_140A0AA44
 * 0000000140A0A98A: mov     ecx, [rsi+990h]
 * 0000000140A0A990: test    cl, 4
 * 0000000140A0A993: jnz     loc_140A0AA3B
 * 0000000140A0A999: mov     eax, [rsi+7E4h]
 * 0000000140A0A99F: and     ecx, 20000000h
 * 0000000140A0A9A5: mov     r8, [rsi+7C8h]
 * 0000000140A0A9AC: neg     ecx
 * 0000000140A0A9AE: sbb     edx, edx
 * 0000000140A0A9B0: and     edx, [rsi+924h]
 * 0000000140A0A9B6: cmp     eax, 8
 * 0000000140A0A9B9: jb      short loc_140A0A9D0
 * 0000000140A0A9BB: mov     ecx, eax
 * 0000000140A0A9BD: shr     rcx, 3
 * 0000000140A0A9C1: mov     [rsi], r15
 * 0000000140A0A9C4: add     eax, 0FFFFFFF8h
 * 0000000140A0A9C7: add     rsi, 8
 * 0000000140A0A9CB: sub     rcx, r12
 * 0000000140A0A9CE: jnz     short loc_140A0A9C1
 * 0000000140A0A9D0: test    eax, eax
 * 0000000140A0A9D2: jz      short loc_140A0A9E3
 * 0000000140A0A9D4: mov     ecx, 0FFFFFFFFh
 * 0000000140A0A9D9: mov     [rsi], r15b
 * 0000000140A0A9DC: add     rsi, r12
 * 0000000140A0A9DF: add     eax, ecx
 * 0000000140A0A9E1: jnz     short loc_140A0A9D9
 * 0000000140A0A9E3: mov     esi, [rbx+924h]
 * 0000000140A0A9E9: mov     [rbx+924h], edx
 * 0000000140A0A9EF: cmp     edx, 3
 * 0000000140A0A9F2: jz      short loc_140A0AA26
 * 0000000140A0A9F4: test    dword ptr [rbx+990h], 10000000h
 * 0000000140A0A9FE: mov     ecx, r15d
 * 0000000140A0AA01: cmovz   ecx, edx
 * 0000000140A0AA04: test    ecx, ecx
 * 0000000140A0AA06: jz      short loc_140A0AA1D
 * 0000000140A0AA08: mov     rax, [rbx+228h]
 * 0000000140A0AA0F: lea     rcx, [r8-8]
 * 0000000140A0AA13: mov     rdx, [rcx]
 * 0000000140A0AA16: call    KeGuardDispatchICall
 * 0000000140A0AA1B: jmp     short loc_140A0AA35
 * 0000000140A0AA1D: mov     rax, [rbx+100h]
 * 0000000140A0AA24: jmp     short loc_140A0AA2D
 * 0000000140A0AA26: mov     rax, [rbx+368h]
 * 0000000140A0AA2D: mov     rcx, r8
 * 0000000140A0AA30: call    KeGuardDispatchICall
 * 0000000140A0AA35: mov     [rbx+924h], esi
 * 0000000140A0AA3B: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140A0AA42: jmp     short loc_140A0AA60
 * 0000000140A0AA44: mov     [rbp+0BE0h+var_BB0], r15
 * 0000000140A0AA48: mov     rbx, rsi
 * 0000000140A0AA4B: mov     [rbp+0BE0h+var_C18], 0C000009Ah
 * 0000000140A0AA52: jmp     loc_140A0A02E
 * 0000000140A0AA57: mov     rbx, rsi
 * 0000000140A0AA5A: mov     [rsi+7E4h], eax
 * 0000000140A0AA60: add     [rbx+80Ch], r12d
 * 0000000140A0AA67: lea     rsi, [rbx+r14]
 * 0000000140A0AA6B: mov     ecx, 30h ; '0'
 * 0000000140A0AA70: mov     [rbp+0BE0h+var_8B0], rsi
 * 0000000140A0AA77: mov     rax, rsi
 * 0000000140A0AA7A: lea     edx, [rcx-2Ah]
 * 0000000140A0AA7D: mov     [rax], r15
 * 0000000140A0AA80: add     ecx, 0FFFFFFF8h
 * 0000000140A0AA83: add     rax, 8
 * 0000000140A0AA87: sub     rdx, r12
 * 0000000140A0AA8A: jnz     short loc_140A0AA7D
 * 0000000140A0AA8C: test    ecx, ecx
 * 0000000140A0AA8E: jz      short loc_140A0AA9F
 * 0000000140A0AA90: mov     edx, 0FFFFFFFFh
 * 0000000140A0AA95: mov     [rax], r15b
 * 0000000140A0AA98: add     rax, r12
 * 0000000140A0AA9B: add     ecx, edx
 * 0000000140A0AA9D: jnz     short loc_140A0AA95
 * 0000000140A0AA9F: mov     r12, [rbp+0BE0h+var_BD8]
 * 0000000140A0AAA3: mov     r15d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0AAAA: mov     r9, r12
 * 0000000140A0AAAD: mov     dword ptr [rsi], 0Eh
 * 0000000140A0AAB3: mov     [rsi+8], r12
 * 0000000140A0AAB7: mov     [rsi+10h], r15d
 * 0000000140A0AABB: add     [rbx+828h], r15d
 * 0000000140A0AAC2: lea     rcx, [r12+r15]
 * 0000000140A0AAC6: mov     r10d, [rbx+814h]
 * 0000000140A0AACD: mov     r14, [rbx+818h]
 * 0000000140A0AAD4: cmp     r12, rcx
 * 0000000140A0AAD7: jnb     short loc_140A0AAEC
 * 0000000140A0AAD9: mov     rax, r12
 * 0000000140A0AADC: mov     edx, 40h ; '@'
 * 0000000140A0AAE1: prefetchnta byte ptr [rax]
 * 0000000140A0AAE4: add     rax, rdx
 * 0000000140A0AAE7: cmp     rax, rcx
 * 0000000140A0AAEA: jb      short loc_140A0AAE1
 * 0000000140A0AAEC: mov     r11d, r15d
 * 0000000140A0AAEF: mov     r8, r14
 * 0000000140A0AAF2: shr     r11d, 7
 * 0000000140A0AAF6: test    r11d, r11d
 * 0000000140A0AAF9: jz      short loc_140A0AB74
 * 0000000140A0AAFB: mov     rdi, 7010008004002001h
 * 0000000140A0AB05: mov     r13d, 1
 * 0000000140A0AB0B: mov     r15d, 0FFFFFFFFh
 * 0000000140A0AB11: mov     eax, 8
 * 0000000140A0AB16: xor     r8, [r9]
 * 0000000140A0AB19: mov     ecx, r10d
 * 0000000140A0AB1C: rol     r8, cl
 * 0000000140A0AB1F: xor     r8, [r9+8]
 * 0000000140A0AB23: add     r9, 10h
 * 0000000140A0AB27: rol     r8, cl
 * 0000000140A0AB2A: sub     rax, r13
 * 0000000140A0AB2D: jnz     short loc_140A0AB16
 * 0000000140A0AB2F: mov     rcx, r9
 * 0000000140A0AB32: sub     rcx, r12
 * 0000000140A0AB35: xor     rcx, r14
 * 0000000140A0AB38: mov     rax, rcx
 * 0000000140A0AB3B: rol     rax, 11h
 * 0000000140A0AB3F: xor     rcx, rax
 * 0000000140A0AB42: mov     rax, rdi
 * 0000000140A0AB45: mul     rcx
 * 0000000140A0AB48: mov     [rbp+0BE0h+var_508], rdx
 * 0000000140A0AB4F: xor     edx, eax
 * 0000000140A0AB51: xor     r10d, edx
 * 0000000140A0AB54: and     r10d, 3Fh
 * 0000000140A0AB58: cmovz   r10d, r13d
 * 0000000140A0AB5C: add     r11d, r15d
 * 0000000140A0AB5F: jnz     short loc_140A0AB11
 * 0000000140A0AB61: mov     r15d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0AB68: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0AB6F: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0AB74: mov     edx, r15d
 * 0000000140A0AB77: mov     r14d, 1
 * 0000000140A0AB7D: and     edx, 7Fh
 * 0000000140A0AB80: cmp     edx, 8
 * 0000000140A0AB83: jb      short loc_140A0ABA0
 * 0000000140A0AB85: mov     eax, edx
 * 0000000140A0AB87: shr     rax, 3
 * 0000000140A0AB8B: xor     r8, [r9]
 * 0000000140A0AB8E: mov     ecx, r10d
 * 0000000140A0AB91: rol     r8, cl
 * 0000000140A0AB94: add     r9, 8
 * 0000000140A0AB98: add     edx, 0FFFFFFF8h
 * 0000000140A0AB9B: sub     rax, r14
 * 0000000140A0AB9E: jnz     short loc_140A0AB8B
 * 0000000140A0ABA0: test    edx, edx
 * 0000000140A0ABA2: jz      short loc_140A0ABBF
 * 0000000140A0ABA4: mov     r11d, 0FFFFFFFFh
 * 0000000140A0ABAA: movzx   eax, byte ptr [r9]
 * 0000000140A0ABAE: mov     ecx, r10d
 * 0000000140A0ABB1: xor     r8, rax
 * 0000000140A0ABB4: add     r9, r14
 * 0000000140A0ABB7: rol     r8, cl
 * 0000000140A0ABBA: add     edx, r11d
 * 0000000140A0ABBD: jnz     short loc_140A0ABAA
 * 0000000140A0ABBF: mov     rax, r8
 * 0000000140A0ABC2: jmp     short loc_140A0ABC7
 * 0000000140A0ABC4: xor     r8d, eax
 * 0000000140A0ABC7: shr     rax, 1Fh
 * 0000000140A0ABCB: test    rax, rax
 * 0000000140A0ABCE: jnz     short loc_140A0ABC4
 * 0000000140A0ABD0: btr     r8d, 1Fh
 * 0000000140A0ABD5: mov     [rsi+14h], r8d
 * 0000000140A0ABD9: mov     rsi, rbx
 * 0000000140A0ABDC: mov     rax, [rbp+0BE0h+var_8B0]
 * 0000000140A0ABE3: mov     [rbp+0BE0h+var_AA0], rax
 * 0000000140A0ABEA: add     [rbx+828h], r15d
 * 0000000140A0ABF1: jmp     short loc_140A0AC04
 * 0000000140A0ABF3: mov     r15d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0ABFA: mov     r12, [rbp+0BE0h+var_BD8]
 * 0000000140A0ABFE: mov     dword ptr [rax], 0Eh
 * 0000000140A0AC04: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A0AC0E: jz      short loc_140A0AC2E
 * 0000000140A0AC10: test    r15d, r15d
 * 0000000140A0AC13: jz      short loc_140A0AC2E
 * 0000000140A0AC15: mov     r9, [rbp+0BE0h+var_AA0]
 * 0000000140A0AC1C: mov     r8d, r15d
 * 0000000140A0AC1F: add     r9, 1Ch
 * 0000000140A0AC23: mov     rdx, r12
 * 0000000140A0AC26: mov     rcx, rsi
 * 0000000140A0AC29: call    sub_1403E9B1C
 * 0000000140A0AC2E: mov     rax, [rbp+0BE0h+var_AA0]
 * 0000000140A0AC35: xor     r15d, r15d
 * 0000000140A0AC38: mov     [rbp+0BE0h+var_BA8], rsi
 * 0000000140A0AC3C: mov     [rax+18h], r15d
 * 0000000140A0AC40: lea     ecx, [r15+1]
 * 0000000140A0AC44: mov     rax, [rbp+0BE0h+var_AA0]
 * 0000000140A0AC4B: or      [rax+18h], ecx
 * 0000000140A0AC4E: mov     rbx, [rbp+0BE0h+var_B48]
 * 0000000140A0AC55: mov     dword ptr [rbx+90h], 23h ; '#'
 * 0000000140A0AC5F: or      [rbx+0B8h], ecx
 * 0000000140A0AC65: cmp     dword ptr [rbx+0A0h], 94h
 * 0000000140A0AC6F: jb      short loc_140A0ACE5
 * 0000000140A0AC71: mov     rax, [rsi+1F8h]
 * 0000000140A0AC78: mov     rcx, r13
 * 0000000140A0AC7B: mov     r14, [rbx+98h]
 * 0000000140A0AC82: call    KeGuardDispatchICall
 * 0000000140A0AC87: test    rax, rax
 * 0000000140A0AC8A: jz      loc_140A0AA44
 * 0000000140A0AC90: mov     ecx, [rax+50h]
 * 0000000140A0AC93: lea     eax, [r15+2]
 * 0000000140A0AC97: or      [rbx+0B8h], eax
 * 0000000140A0AC9D: add     rcx, r13
 * 0000000140A0ACA0: mov     rax, [r14+70h]
 * 0000000140A0ACA4: cmp     rax, r13
 * 0000000140A0ACA7: jb      short loc_140A0ACBF
 * 0000000140A0ACA9: cmp     rax, rcx
 * 0000000140A0ACAC: jnb     short loc_140A0ACBF
 * 0000000140A0ACAE: mov     rax, [rax]
 * 0000000140A0ACB1: mov     [rbx+0A8h], rax
 * 0000000140A0ACB8: or      dword ptr [rbx+0B8h], 4
 * 0000000140A0ACBF: mov     rax, [r14+78h]
 * 0000000140A0ACC3: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0ACC8: cmp     rax, r14
 * 0000000140A0ACCB: jb      short loc_140A0ACEA
 * 0000000140A0ACCD: cmp     rax, rcx
 * 0000000140A0ACD0: jnb     short loc_140A0ACEA
 * 0000000140A0ACD2: mov     rax, [rax]
 * 0000000140A0ACD5: mov     [rbx+0B0h], rax
 * 0000000140A0ACDC: or      dword ptr [rbx+0B8h], 8
 * 0000000140A0ACE3: jmp     short loc_140A0ACEA
 * 0000000140A0ACE5: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0ACEA: test    dword ptr [rsi+990h], 400000h
 * 0000000140A0ACF4: mov     [rbp+0BE0h+var_BB0], rsi
 * 0000000140A0ACF8: jz      loc_140A0BC1B
 * 0000000140A0ACFE: mov     rax, [rsi+1F8h]
 * 0000000140A0AD05: mov     rcx, r14
 * 0000000140A0AD08: call    KeGuardDispatchICall
 * 0000000140A0AD0D: xor     r11d, r11d
 * 0000000140A0AD10: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A0AD15: mov     r15, rax
 * 0000000140A0AD18: test    rax, rax
 * 0000000140A0AD1B: jnz     short loc_140A0AD2A
 * 0000000140A0AD1D: mov     ecx, 0C000007Bh
 * 0000000140A0AD22: xor     r15d, r15d
 * 0000000140A0AD25: jmp     loc_140A0BC22
 * 0000000140A0AD2A: movzx   r10d, word ptr [r15+6]
 * 0000000140A0AD2F: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A0AD39: mov     r12d, [rbp+0BE0h+var_C58]
 * 0000000140A0AD3D: mul     r12
 * 0000000140A0AD40: mov     word ptr [rbp+0BE0h+arg_8], r10w
 * 0000000140A0AD48: mov     r9, rdx
 * 0000000140A0AD4B: shr     r9, 3
 * 0000000140A0AD4F: mov     [rbp+0BE0h+var_C40], r9
 * 0000000140A0AD53: test    r10w, r10w
 * 0000000140A0AD57: jnz     short loc_140A0ADC0
 * 0000000140A0AD59: test    dword ptr [rsi+990h], 200000h
 * 0000000140A0AD63: jz      loc_140A0EBC6
 * 0000000140A0AD69: xor     r15d, r15d
 * 0000000140A0AD6C: cmp     [rsi+8F8h], r15d
 * 0000000140A0AD73: jnz     short loc_140A0ADB6
 * 0000000140A0AD75: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0AD7F: add     rax, rsi
 * 0000000140A0AD82: mov     [rsi+900h], rax
 * 0000000140A0AD89: lea     eax, [r15+1]
 * 0000000140A0AD8D: mov     [rsi+908h], r15
 * 0000000140A0AD94: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140A0AD9F: mov     [rsi+918h], r14
 * 0000000140A0ADA6: mov     [rsi+8F8h], eax
 * 0000000140A0ADAC: xor     edx, edx
 * 0000000140A0ADAE: mov     rcx, rsi
 * 0000000140A0ADB1: call    $$b8
 * 0000000140A0ADB6: mov     ecx, 0C000007Bh
 * 0000000140A0ADBB: jmp     loc_140A0BC22
 * 0000000140A0ADC0: mov     rdx, [rbp+0BE0h+var_C10]
 * 0000000140A0ADC4: lea     r8, [r15+18h]
 * 0000000140A0ADC8: mov     eax, r9d
 * 0000000140A0ADCB: mov     ecx, r11d
 * 0000000140A0ADCE: mov     rbx, rdx
 * 0000000140A0ADD1: mov     [rsp+0CE0h+var_C78], ecx
 * 0000000140A0ADD5: lea     r13, [rax+rax*2]
 * 0000000140A0ADD9: shl     r13, 2
 * 0000000140A0ADDD: mov     [rbp+0BE0h+var_C30], r13
 * 0000000140A0ADE1: lea     rax, [rdx+r13]
 * 0000000140A0ADE5: mov     [rbp+0BE0h+var_C48], rax
 * 0000000140A0ADE9: movzx   eax, word ptr [r15+14h]
 * 0000000140A0ADEE: mov     r11, [rbp+0BE0h+var_C48]
 * 0000000140A0ADF2: add     r8, rax
 * 0000000140A0ADF5: movzx   eax, r10w
 * 0000000140A0ADF9: mov     [rbp+0BE0h+var_C50], r8
 * 0000000140A0ADFD: test    eax, eax
 * 0000000140A0ADFF: jz      loc_140A0B030
 * 0000000140A0AE05: xor     r9d, r9d
 * 0000000140A0AE08: lea     r12, [r8+8]
 * 0000000140A0AE0C: lea     r13d, [r9+1]
 * 0000000140A0AE10: mov     r15d, [r12+8]
 * 0000000140A0AE15: mov     eax, [r12]
 * 0000000140A0AE19: cmp     r15d, eax
 * 0000000140A0AE1C: mov     edx, [r12+4]
 * 0000000140A0AE21: cmovbe  r15d, eax
 * 0000000140A0AE25: mov     [rbp+0BE0h+var_C28], edx
 * 0000000140A0AE28: add     r15d, edx
 * 0000000140A0AE2B: test    ecx, ecx
 * 0000000140A0AE2D: jz      short loc_140A0AE45
 * 0000000140A0AE2F: lea     eax, [rcx-1]
 * 0000000140A0AE32: lea     rax, [rax+rax*4]
 * 0000000140A0AE36: cmp     r15d, [r8+rax*8+0Ch]
 * 0000000140A0AE3B: jb      loc_140A0B04E
 * 0000000140A0AE41: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A0AE45: cmp     rbx, r11
 * 0000000140A0AE48: jz      loc_140A0B008
 * 0000000140A0AE4E: mov     ecx, [rbx]
 * 0000000140A0AE50: mov     eax, [rbx+4]
 * 0000000140A0AE53: cmp     ecx, r15d
 * 0000000140A0AE56: jnb     loc_140A0AFEE
 * 0000000140A0AE5C: cmp     eax, edx
 * 0000000140A0AE5E: jbe     loc_140A0AFEE
 * 0000000140A0AE64: cmp     ecx, edx
 * 0000000140A0AE66: jb      loc_140A0B0A7
 * 0000000140A0AE6C: cmp     eax, r15d
 * 0000000140A0AE6F: ja      loc_140A0B0A7
 * 0000000140A0AE75: mov     eax, [rbx+8]
 * 0000000140A0AE78: mov     ecx, 1
 * 0000000140A0AE7D: test    cl, al
 * 0000000140A0AE7F: jnz     short loc_140A0AE8D
 * 0000000140A0AE81: mov     al, [rax+r14]
 * 0000000140A0AE85: test    al, 20h
 * 0000000140A0AE87: jz      loc_140A0AFE0
 * 0000000140A0AE8D: mov     eax, [r12]
 * 0000000140A0AE91: mov     ecx, [r12+4]
 * 0000000140A0AE96: mov     r14d, [r12+8]
 * 0000000140A0AE9B: cmp     r14d, eax
 * 0000000140A0AE9E: mov     rdx, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0AEA3: cmovbe  r14d, eax
 * 0000000140A0AEA7: mov     [rbp+0BE0h+var_C38], ecx
 * 0000000140A0AEAA: mov     rax, [rsi+418h]
 * 0000000140A0AEB1: add     r14d, ecx
 * 0000000140A0AEB4: mov     rcx, rbx
 * 0000000140A0AEB7: call    KeGuardDispatchICall
 * 0000000140A0AEBC: mov     r13, rax
 * 0000000140A0AEBF: mov     eax, [rbp+0BE0h+var_C38]
 * 0000000140A0AEC2: cmp     [r13+0], eax
 * 0000000140A0AEC6: jb      short loc_140A0AECE
 * 0000000140A0AEC8: cmp     [r13+4], r14d
 * 0000000140A0AECC: jbe     short loc_140A0AF3A
 * 0000000140A0AECE: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A0AED3: mov     edx, r13d
 * 0000000140A0AED6: sub     edx, r8d
 * 0000000140A0AED9: mov     eax, 80000000h
 * 0000000140A0AEDE: or      edx, eax
 * 0000000140A0AEE0: test    dword ptr [rsi+990h], 200000h
 * 0000000140A0AEEA: jz      loc_140A0EC82
 * 0000000140A0AEF0: xor     ecx, ecx
 * 0000000140A0AEF2: cmp     [rsi+8F8h], ecx
 * 0000000140A0AEF8: jnz     short loc_140A0AF3A
 * 0000000140A0AEFA: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0AF04: xor     edx, edx
 * 0000000140A0AF06: add     rax, rsi
 * 0000000140A0AF09: mov     [rsi+900h], rax
 * 0000000140A0AF10: lea     eax, [rcx+1]
 * 0000000140A0AF13: mov     [rsi+908h], rcx
 * 0000000140A0AF1A: mov     rcx, rsi
 * 0000000140A0AF1D: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140A0AF28: mov     [rsi+918h], r8
 * 0000000140A0AF2F: mov     [rsi+8F8h], eax
 * 0000000140A0AF35: call    $$b8
 * 0000000140A0AF3A: mov     r8d, [r13+0]
 * 0000000140A0AF3E: mov     rcx, r13
 * 0000000140A0AF41: add     r8, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0AF46: mov     rax, [rsi+420h]
 * 0000000140A0AF4D: mov     rdx, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0AF52: call    KeGuardDispatchICall
 * 0000000140A0AF57: mov     rdx, rax
 * 0000000140A0AF5A: mov     eax, [rbp+0BE0h+var_C38]
 * 0000000140A0AF5D: cmp     [rdx], eax
 * 0000000140A0AF5F: jb      short loc_140A0AF67
 * 0000000140A0AF61: cmp     [rdx+4], r14d
 * 0000000140A0AF65: jbe     short loc_140A0AFD5
 * 0000000140A0AF67: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0AF6C: mov     eax, 80000000h
 * 0000000140A0AF71: sub     edx, r14d
 * 0000000140A0AF74: or      edx, eax
 * 0000000140A0AF76: test    dword ptr [rsi+990h], 200000h
 * 0000000140A0AF80: jz      loc_140A0EC53
 * 0000000140A0AF86: xor     r9d, r9d
 * 0000000140A0AF89: cmp     [rsi+8F8h], r9d
 * 0000000140A0AF90: jnz     short loc_140A0AFDD
 * 0000000140A0AF92: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0AF9C: xor     edx, edx
 * 0000000140A0AF9E: add     rax, rsi
 * 0000000140A0AFA1: mov     rcx, rsi
 * 0000000140A0AFA4: mov     [rsi+900h], rax
 * 0000000140A0AFAB: lea     eax, [r9+1]
 * 0000000140A0AFAF: mov     [rsi+908h], r9
 * 0000000140A0AFB6: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140A0AFC1: mov     [rsi+918h], r14
 * 0000000140A0AFC8: mov     [rsi+8F8h], eax
 * 0000000140A0AFCE: call    $$b8
 * 0000000140A0AFD3: jmp     short loc_140A0AFDA
 * 0000000140A0AFD5: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0AFDA: xor     r9d, r9d
 * 0000000140A0AFDD: mov     edx, [rbp+0BE0h+var_C28]
 * 0000000140A0AFE0: add     rbx, 0Ch
 * 0000000140A0AFE4: cmp     rbx, [rbp+0BE0h+var_C48]
 * 0000000140A0AFE8: jnz     loc_140A0AE4E
 * 0000000140A0AFEE: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A0AFF2: mov     r13d, 1
 * 0000000140A0AFF8: movzx   r10d, word ptr [rbp+0BE0h+arg_8]
 * 0000000140A0B000: mov     r8, [rbp+0BE0h+var_C50]
 * 0000000140A0B004: mov     r11, [rbp+0BE0h+var_C48]
 * 0000000140A0B008: add     ecx, r13d
 * 0000000140A0B00B: movzx   eax, r10w
 * 0000000140A0B00F: add     r12, 28h ; '('
 * 0000000140A0B013: mov     [rsp+0CE0h+var_C78], ecx
 * 0000000140A0B017: cmp     ecx, eax
 * 0000000140A0B019: jb      loc_140A0AE10
 * 0000000140A0B01F: mov     r9, [rbp+0BE0h+var_C40]
 * 0000000140A0B023: mov     r15, [rsp+0CE0h+var_C70]
 * 0000000140A0B028: mov     r13, [rbp+0BE0h+var_C30]
 * 0000000140A0B02C: mov     r12d, [rbp+0BE0h+var_C58]
 * 0000000140A0B030: cmp     rbx, r11
 * 0000000140A0B033: jz      loc_140A0B0BC
 * 0000000140A0B039: test    dword ptr [rsi+990h], 200000h
 * 0000000140A0B043: jz      loc_140A0EBF4
 * 0000000140A0B049: jmp     loc_140A0AD69
 * 0000000140A0B04E: test    dword ptr [rsi+990h], 200000h
 * 0000000140A0B058: jz      loc_140A0EC24
 * 0000000140A0B05E: xor     r15d, r15d
 * 0000000140A0B061: cmp     [rsi+8F8h], r15d
 * 0000000140A0B068: jnz     loc_140A0ADB6
 * 0000000140A0B06E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0B078: add     rax, rsi
 * 0000000140A0B07B: mov     [rsi+900h], rax
 * 0000000140A0B082: mov     [rsi+908h], r15
 * 0000000140A0B089: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140A0B094: mov     [rsi+918h], r14
 * 0000000140A0B09B: mov     [rsi+8F8h], r13d
 * 0000000140A0B0A2: jmp     loc_140A0ADAC
 * 0000000140A0B0A7: test    dword ptr [rsi+990h], 200000h
 * 0000000140A0B0B1: jz      loc_140A0ECAE
 * 0000000140A0B0B7: jmp     loc_140A0AD69
 * 0000000140A0B0BC: xor     r11d, r11d
 * 0000000140A0B0BF: test    r9d, r9d
 * 0000000140A0B0C2: jz      short loc_140A0B0CD
 * 0000000140A0B0C4: lea     ecx, [r9+6]
 * 0000000140A0B0C8: and     ecx, 0FFFFFFF8h
 * 0000000140A0B0CB: jmp     short loc_140A0B0D0
 * 0000000140A0B0CD: mov     ecx, r11d
 * 0000000140A0B0D0: mov     r14d, [rsi+7E4h]
 * 0000000140A0B0D7: lea     eax, [rax+rax*2]
 * 0000000140A0B0DA: mov     r8d, [rsi+924h]
 * 0000000140A0B0E1: lea     eax, [rax+6]
 * 0000000140A0B0E4: lea     eax, [rcx+rax*8]
 * 0000000140A0B0E7: add     eax, r14d
 * 0000000140A0B0EA: cmp     eax, [rsi+0A1Ch]
 * 0000000140A0B0F0: jbe     loc_140A0B1EA
 * 0000000140A0B0F6: mov     edx, eax
 * 0000000140A0B0F8: mov     rcx, rsi
 * 0000000140A0B0FB: call    sub_140A11B30
 * 0000000140A0B100: xor     r11d, r11d
 * 0000000140A0B103: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A0B107: mov     rbx, rax
 * 0000000140A0B10A: test    rax, rax
 * 0000000140A0B10D: jz      loc_140A0B1E0
 * 0000000140A0B113: mov     ecx, [rsi+990h]
 * 0000000140A0B119: test    cl, 4
 * 0000000140A0B11C: jnz     loc_140A0B1CB
 * 0000000140A0B122: mov     eax, [rsi+7E4h]
 * 0000000140A0B128: lea     r9d, [r11+1]
 * 0000000140A0B12C: mov     r8, [rsi+7C8h]
 * 0000000140A0B133: and     ecx, 20000000h
 * 0000000140A0B139: neg     ecx
 * 0000000140A0B13B: sbb     edx, edx
 * 0000000140A0B13D: and     edx, [rsi+924h]
 * 0000000140A0B143: cmp     eax, 8
 * 0000000140A0B146: jb      short loc_140A0B15D
 * 0000000140A0B148: mov     ecx, eax
 * 0000000140A0B14A: shr     rcx, 3
 * 0000000140A0B14E: mov     [rsi], r11
 * 0000000140A0B151: add     eax, 0FFFFFFF8h
 * 0000000140A0B154: add     rsi, 8
 * 0000000140A0B158: sub     rcx, r9
 * 0000000140A0B15B: jnz     short loc_140A0B14E
 * 0000000140A0B15D: test    eax, eax
 * 0000000140A0B15F: jz      short loc_140A0B170
 * 0000000140A0B161: mov     ecx, 0FFFFFFFFh
 * 0000000140A0B166: mov     [rsi], r11b
 * 0000000140A0B169: add     rsi, r9
 * 0000000140A0B16C: add     eax, ecx
 * 0000000140A0B16E: jnz     short loc_140A0B166
 * 0000000140A0B170: mov     esi, [rbx+924h]
 * 0000000140A0B176: mov     [rbx+924h], edx
 * 0000000140A0B17C: cmp     edx, 3
 * 0000000140A0B17F: jz      short loc_140A0B1B3
 * 0000000140A0B181: test    dword ptr [rbx+990h], 10000000h
 * 0000000140A0B18B: mov     ecx, r11d
 * 0000000140A0B18E: cmovz   ecx, edx
 * 0000000140A0B191: test    ecx, ecx
 * 0000000140A0B193: jz      short loc_140A0B1AA
 * 0000000140A0B195: mov     rax, [rbx+228h]
 * 0000000140A0B19C: lea     rcx, [r8-8]
 * 0000000140A0B1A0: mov     rdx, [rcx]
 * 0000000140A0B1A3: call    KeGuardDispatchICall
 * 0000000140A0B1A8: jmp     short loc_140A0B1C2
 * 0000000140A0B1AA: mov     rax, [rbx+100h]
 * 0000000140A0B1B1: jmp     short loc_140A0B1BA
 * 0000000140A0B1B3: mov     rax, [rbx+368h]
 * 0000000140A0B1BA: mov     rcx, r8
 * 0000000140A0B1BD: call    KeGuardDispatchICall
 * 0000000140A0B1C2: mov     [rbx+924h], esi
 * 0000000140A0B1C8: xor     r11d, r11d
 * 0000000140A0B1CB: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140A0B1D2: mov     r9, [rbp+0BE0h+var_C40]
 * 0000000140A0B1D6: movzx   r10d, word ptr [rbp+0BE0h+arg_8]
 * 0000000140A0B1DE: jmp     short loc_140A0B1F7
 * 0000000140A0B1E0: mov     ecx, 0C000009Ah
 * 0000000140A0B1E5: jmp     loc_140A0AD22
 * 0000000140A0B1EA: mov     rbx, rsi
 * 0000000140A0B1ED: mov     [rsi+7E4h], eax
 * 0000000140A0B1F3: mov     [rbp+0BE0h+var_C30], rbx
 * 0000000140A0B1F7: mov     esi, 1
 * 0000000140A0B1FC: lea     rcx, [rbx+r14]
 * 0000000140A0B200: add     [rbx+80Ch], esi
 * 0000000140A0B206: mov     rax, rcx
 * 0000000140A0B209: mov     [rbp+0BE0h+var_8A8], rcx
 * 0000000140A0B210: lea     edx, [rsi+2Fh]
 * 0000000140A0B213: lea     r8d, [rsi+5]
 * 0000000140A0B217: mov     [rax], r11
 * 0000000140A0B21A: add     edx, 0FFFFFFF8h
 * 0000000140A0B21D: add     rax, 8
 * 0000000140A0B221: sub     r8, rsi
 * 0000000140A0B224: jnz     short loc_140A0B217
 * 0000000140A0B226: test    edx, edx
 * 0000000140A0B228: jz      short loc_140A0B23B
 * 0000000140A0B22A: mov     r8d, 0FFFFFFFFh
 * 0000000140A0B230: mov     [rax], r11b
 * 0000000140A0B233: add     rax, rsi
 * 0000000140A0B236: add     edx, r8d
 * 0000000140A0B239: jnz     short loc_140A0B230
 * 0000000140A0B23B: mov     rax, [rbp+0BE0h+var_C10]
 * 0000000140A0B23F: mov     dword ptr [rcx], 1Eh
 * 0000000140A0B245: mov     [rcx+8], rax
 * 0000000140A0B249: mov     [rcx+10h], r11d
 * 0000000140A0B24D: mov     rdx, [rbx+818h]
 * 0000000140A0B254: mov     rax, rdx
 * 0000000140A0B257: jmp     short loc_140A0B25B
 * 0000000140A0B259: xor     edx, eax
 * 0000000140A0B25B: shr     rax, 1Fh
 * 0000000140A0B25F: test    rax, rax
 * 0000000140A0B262: jnz     short loc_140A0B259
 * 0000000140A0B264: mov     r8, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0B269: btr     edx, 1Fh
 * 0000000140A0B26D: mov     [rcx+14h], edx
 * 0000000140A0B270: mov     rsi, rbx
 * 0000000140A0B273: mov     rax, [rbp+0BE0h+var_8A8]
 * 0000000140A0B27A: mov     [rbp+0BE0h+var_AF0], rax
 * 0000000140A0B281: mov     [rbp+0BE0h+var_BB0], rbx
 * 0000000140A0B285: mov     [rax+18h], r8
 * 0000000140A0B289: mov     ecx, [r15+50h]
 * 0000000140A0B28D: xor     r15d, r15d
 * 0000000140A0B290: mov     rax, [rbp+0BE0h+var_AF0]
 * 0000000140A0B297: mov     [rax+20h], ecx
 * 0000000140A0B29A: mov     ecx, 1
 * 0000000140A0B29F: mov     rax, [rbp+0BE0h+var_AF0]
 * 0000000140A0B2A6: mov     [rax+24h], r12d
 * 0000000140A0B2AA: mov     rax, [rbp+0BE0h+var_AF0]
 * 0000000140A0B2B1: mov     [rax+28h], r10w
 * 0000000140A0B2B6: mov     rax, [rbp+0BE0h+var_AF0]
 * 0000000140A0B2BD: or      [rax+2Ah], cx
 * 0000000140A0B2C1: mov     rcx, [rbp+0BE0h+var_AF0]
 * 0000000140A0B2C8: lea     rdx, [rcx+30h]
 * 0000000140A0B2CC: mov     [rsp+0CE0h+var_C88], rdx
 * 0000000140A0B2D1: test    r9d, r9d
 * 0000000140A0B2D4: jz      short loc_140A0B2E7
 * 0000000140A0B2D6: lea     r12d, [r9-1]
 * 0000000140A0B2DA: add     r12, 7
 * 0000000140A0B2DE: and     r12, 0FFFFFFFFFFFFFFF8h
 * 0000000140A0B2E2: add     r12, rdx
 * 0000000140A0B2E5: jmp     short loc_140A0B2EA
 * 0000000140A0B2E7: mov     r12, rdx
 * 0000000140A0B2EA: movzx   eax, word ptr [rcx+28h]
 * 0000000140A0B2EE: test    r9d, r9d
 * 0000000140A0B2F1: mov     r14d, 0Ch
 * 0000000140A0B2F7: mov     [rbp+0BE0h+var_C60], r12
 * 0000000140A0B2FB: cmovz   r14, r13
 * 0000000140A0B2FF: mov     r9d, 1
 * 0000000140A0B305: mov     r13, [rbp+0BE0h+var_C10]
 * 0000000140A0B309: add     r14, r13
 * 0000000140A0B30C: lea     rcx, [rax+rax*2]
 * 0000000140A0B310: mov     [rsp+0CE0h+var_C80], r14
 * 0000000140A0B315: lea     r11, [r12+rcx*8]
 * 0000000140A0B319: mov     [rsp+0CE0h+var_C70], r11
 * 0000000140A0B31E: cmp     r15w, r10w
 * 0000000140A0B322: jnb     short loc_140A0B358
 * 0000000140A0B324: movzx   edx, r10w
 * 0000000140A0B328: lea     rax, [r12+8]
 * 0000000140A0B32D: mov     r10d, 80000000h
 * 0000000140A0B333: lea     r14d, [r9+1]
 * 0000000140A0B337: mov     rcx, r14
 * 0000000140A0B33A: mov     [rax-8], r15d
 * 0000000140A0B33E: mov     [rax-4], r15d
 * 0000000140A0B342: mov     [rax], r10d
 * 0000000140A0B345: add     rax, 0Ch
 * 0000000140A0B349: sub     rcx, r9
 * 0000000140A0B34C: jnz     short loc_140A0B33A
 * 0000000140A0B34E: sub     rdx, r9
 * 0000000140A0B351: jnz     short loc_140A0B337
 * 0000000140A0B353: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A0B358: cmp     r12, r11
 * 0000000140A0B35B: jz      loc_140A0BC1B
 * 0000000140A0B361: mov     rsi, [rbp+0BE0h+var_C50]
 * 0000000140A0B365: mov     eax, [rsi+24h]
 * 0000000140A0B368: mov     r11d, r15d
 * 0000000140A0B36B: bt      eax, 19h
 * 0000000140A0B36F: jb      loc_140A0B4F7
 * 0000000140A0B375: mov     ecx, [rsi]
 * 0000000140A0B377: cmp     ecx, 54494E49h
 * 0000000140A0B37D: jnz     short loc_140A0B38C
 * 0000000140A0B37F: cmp     dword ptr [rsi+4], 4742444Bh
 * 0000000140A0B386: jz      loc_140A0B4F7
 * 0000000140A0B38C: cmp     ecx, 45474150h
 * 0000000140A0B392: jnz     short loc_140A0B3C2
 * 0000000140A0B394: movzx   eax, word ptr [rsi+4]
 * 0000000140A0B398: mov     edx, 7877h
 * 0000000140A0B39D: cmp     ax, dx
 * 0000000140A0B3A0: jz      loc_140A0B4F7
 * 0000000140A0B3A6: mov     edx, 7277h
 * 0000000140A0B3AB: cmp     ax, dx
 * 0000000140A0B3AE: jz      loc_140A0B4F7
 * 0000000140A0B3B4: mov     edx, 7777h
 * 0000000140A0B3B9: cmp     ax, dx
 * 0000000140A0B3BC: jz      loc_140A0B4F7
 * 0000000140A0B3C2: cmp     ecx, 41525245h
 * 0000000140A0B3C8: jnz     short loc_140A0B3D9
 * 0000000140A0B3CA: mov     eax, 4154h
 * 0000000140A0B3CF: cmp     [rsi+4], ax
 * 0000000140A0B3D3: jz      loc_140A0B4F7
 * 0000000140A0B3D9: mov     rax, [rbx+938h]
 * 0000000140A0B3E0: mov     r9, rsi
 * 0000000140A0B3E3: mov     r8, [rbx+930h]
 * 0000000140A0B3EA: mov     r10d, 7
 * 0000000140A0B3F0: mov     [rbp+0BE0h+var_7E8], rax
 * 0000000140A0B3F7: sub     r9, r8
 * 0000000140A0B3FA: mov     rax, [rbx+940h]
 * 0000000140A0B401: mov     [rbp+0BE0h+var_7E0], rax
 * 0000000140A0B408: mov     rax, [rbx+948h]
 * 0000000140A0B40F: mov     [rbp+0BE0h+var_7D8], rax
 * 0000000140A0B416: mov     [rbp+0BE0h+var_7F0], r8
 * 0000000140A0B41D: movzx   edx, byte ptr [r8+r9]
 * 0000000140A0B422: movzx   eax, byte ptr [r8]
 * 0000000140A0B426: inc     r8
 * 0000000140A0B429: cmp     rdx, rax
 * 0000000140A0B42C: jnz     short loc_140A0B43D
 * 0000000140A0B42E: mov     eax, 0FFFFFFFFh
 * 0000000140A0B433: add     r10d, eax
 * 0000000140A0B436: jnz     short loc_140A0B41D
 * 0000000140A0B438: jmp     loc_140A0B4EC
 * 0000000140A0B43D: mov     r9, [rbp+0BE0h+var_7E8]
 * 0000000140A0B444: mov     r8d, 8
 * 0000000140A0B44A: mov     r10, rsi
 * 0000000140A0B44D: mov     rcx, [r10]
 * 0000000140A0B450: add     r10, 8
 * 0000000140A0B454: mov     rax, [r9]
 * 0000000140A0B457: add     r9, 8
 * 0000000140A0B45B: cmp     rcx, rax
 * 0000000140A0B45E: jnz     short loc_140A0B48E
 * 0000000140A0B460: add     r8d, 0FFFFFFF8h
 * 0000000140A0B464: cmp     r8d, 8
 * 0000000140A0B468: jnb     short loc_140A0B44D
 * 0000000140A0B46A: test    r8d, r8d
 * 0000000140A0B46D: jz      short loc_140A0B4EC
 * 0000000140A0B46F: movzx   edx, byte ptr [r10]
 * 0000000140A0B473: inc     r10
 * 0000000140A0B476: movzx   eax, byte ptr [r9]
 * 0000000140A0B47A: inc     r9
 * 0000000140A0B47D: cmp     rdx, rax
 * 0000000140A0B480: jnz     short loc_140A0B48E
 * 0000000140A0B482: mov     eax, 0FFFFFFFFh
 * 0000000140A0B487: add     r8d, eax
 * 0000000140A0B48A: jnz     short loc_140A0B46F
 * 0000000140A0B48C: jmp     short loc_140A0B4EC
 * 0000000140A0B48E: mov     r8, [rbp+0BE0h+var_7E0]
 * 0000000140A0B495: mov     r9, rsi
 * 0000000140A0B498: sub     r9, r8
 * 0000000140A0B49B: mov     r10d, 4
 * 0000000140A0B4A1: movzx   edx, byte ptr [r9+r8]
 * 0000000140A0B4A6: movzx   eax, byte ptr [r8]
 * 0000000140A0B4AA: inc     r8
 * 0000000140A0B4AD: cmp     rdx, rax
 * 0000000140A0B4B0: jnz     short loc_140A0B4BE
 * 0000000140A0B4B2: mov     eax, 0FFFFFFFFh
 * 0000000140A0B4B7: add     r10d, eax
 * 0000000140A0B4BA: jnz     short loc_140A0B4A1
 * 0000000140A0B4BC: jmp     short loc_140A0B4EC
 * 0000000140A0B4BE: mov     r8, [rbp+0BE0h+var_7D8]
 * 0000000140A0B4C5: mov     r9, rsi
 * 0000000140A0B4C8: sub     r9, r8
 * 0000000140A0B4CB: mov     r10d, 6
 * 0000000140A0B4D1: movzx   edx, byte ptr [r9+r8]
 * 0000000140A0B4D6: movzx   eax, byte ptr [r8]
 * 0000000140A0B4DA: inc     r8
 * 0000000140A0B4DD: cmp     rdx, rax
 * 0000000140A0B4E0: jnz     short loc_140A0B4FC
 * 0000000140A0B4E2: mov     eax, 0FFFFFFFFh
 * 0000000140A0B4E7: add     r10d, eax
 * 0000000140A0B4EA: jnz     short loc_140A0B4D1
 * 0000000140A0B4EC: mov     r9d, 1
 * 0000000140A0B4F2: mov     r11d, r9d
 * 0000000140A0B4F5: jmp     short loc_140A0B502
 * 0000000140A0B4F7: mov     r11d, r9d
 * 0000000140A0B4FA: jmp     short loc_140A0B507
 * 0000000140A0B4FC: mov     r9d, 1
 * 0000000140A0B502: mov     r8, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0B507: mov     ecx, [rsi+24h]
 * 0000000140A0B50A: test    ecx, ecx
 * 0000000140A0B50C: cmovs   r11d, r9d
 * 0000000140A0B510: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 0000000140A0B517: test    r11d, r11d
 * 0000000140A0B51A: jz      short loc_140A0B542
 * 0000000140A0B51C: cmp     dword ptr [rsi], 54494E49h
 * 0000000140A0B522: jnz     short loc_140A0B542
 * 0000000140A0B524: cmp     dword ptr [rsi+4], 4742444Bh
 * 0000000140A0B52B: jnz     short loc_140A0B542
 * 0000000140A0B52D: test    dword ptr [rbx+994h], 2000h
 * 0000000140A0B537: cmovnz  r11d, r15d
 * 0000000140A0B53B: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 0000000140A0B542: test    dword ptr [rbx+994h], 4000h
 * 0000000140A0B54C: jz      short loc_140A0B570
 * 0000000140A0B54E: bt      ecx, 1Dh
 * 0000000140A0B552: jnb     short loc_140A0B570
 * 0000000140A0B554: cmp     r8, [rbx+5E8h]
 * 0000000140A0B55B: jz      short loc_140A0B566
 * 0000000140A0B55D: cmp     r8, [rbx+5F0h]
 * 0000000140A0B564: jnz     short loc_140A0B570
 * 0000000140A0B566: mov     r11d, r9d
 * 0000000140A0B569: mov     dword ptr [rbp+0BE0h+arg_8], r9d
 * 0000000140A0B570: mov     ecx, [rsi+10h]
 * 0000000140A0B573: mov     eax, [rsi+8]
 * 0000000140A0B576: cmp     ecx, eax
 * 0000000140A0B578: mov     edx, [rsi+0Ch]
 * 0000000140A0B57B: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A0B57F: cmovbe  ecx, eax
 * 0000000140A0B582: add     ecx, edx
 * 0000000140A0B584: mov     [rbp+0BE0h+var_C58], edx
 * 0000000140A0B587: xor     r10d, r10d
 * 0000000140A0B58A: mov     [rsp+0CE0h+var_C78], ecx
 * 0000000140A0B58E: cmp     r13, r9
 * 0000000140A0B591: jz      short loc_140A0B59D
 * 0000000140A0B593: mov     r15d, [r13+0]
 * 0000000140A0B597: mov     r13d, [r13+4]
 * 0000000140A0B59B: jmp     short loc_140A0B5A0
 * 0000000140A0B59D: mov     r13d, r10d
 * 0000000140A0B5A0: mov     [rbp+0BE0h+var_C28], edx
 * 0000000140A0B5A3: cmp     [rbp+0BE0h+var_C10], r9
 * 0000000140A0B5A7: jz      loc_140A0B766
 * 0000000140A0B5AD: cmp     r15d, edx
 * 0000000140A0B5B0: jbe     loc_140A0B766
 * 0000000140A0B5B6: cmp     r13d, ecx
 * 0000000140A0B5B9: ja      loc_140A0B766
 * 0000000140A0B5BF: test    r11d, r11d
 * 0000000140A0B5C2: jnz     loc_140A0B766
 * 0000000140A0B5C8: mov     [r12], edx
 * 0000000140A0B5CC: lea     rcx, [rbp+0BE0h+var_9B0]
 * 0000000140A0B5D3: mov     [r12+4], r15d
 * 0000000140A0B5D8: lea     rdx, [rbp+0BE0h+var_7A0]
 * 0000000140A0B5DF: mov     eax, [r12]
 * 0000000140A0B5E3: mov     r9d, r15d
 * 0000000140A0B5E6: sub     r9d, eax
 * 0000000140A0B5E9: mov     [rbp+0BE0h+var_C28], r15d
 * 0000000140A0B5ED: mov     r14d, r9d
 * 0000000140A0B5F0: lea     rsi, [r8+rax]
 * 0000000140A0B5F4: mov     r8d, r10d
 * 0000000140A0B5F7: add     r14, rsi
 * 0000000140A0B5FA: mov     r10, [rdx]
 * 0000000140A0B5FD: mov     eax, [rcx]
 * 0000000140A0B5FF: add     rax, r10
 * 0000000140A0B602: cmp     rsi, rax
 * 0000000140A0B605: jnb     short loc_140A0B610
 * 0000000140A0B607: cmp     r14, r10
 * 0000000140A0B60A: ja      loc_140A0B756
 * 0000000140A0B610: inc     r8d
 * 0000000140A0B613: add     rdx, 8
 * 0000000140A0B617: add     rcx, 4
 * 0000000140A0B61B: cmp     r8d, 6
 * 0000000140A0B61F: jb      short loc_140A0B5FA
 * 0000000140A0B621: add     [rbx+828h], r9d
 * 0000000140A0B628: mov     r10, rsi
 * 0000000140A0B62B: mov     r11d, [rbx+814h]
 * 0000000140A0B632: mov     rax, rsi
 * 0000000140A0B635: mov     r12, [rbx+818h]
 * 0000000140A0B63C: cmp     rsi, r14
 * 0000000140A0B63F: jnb     short loc_140A0B651
 * 0000000140A0B641: mov     ecx, 40h ; '@'
 * 0000000140A0B646: prefetchnta byte ptr [rax]
 * 0000000140A0B649: add     rax, rcx
 * 0000000140A0B64C: cmp     rax, r14
 * 0000000140A0B64F: jb      short loc_140A0B646
 * 0000000140A0B651: mov     r14d, r9d
 * 0000000140A0B654: mov     r8, r12
 * 0000000140A0B657: shr     r14d, 7
 * 0000000140A0B65B: test    r14d, r14d
 * 0000000140A0B65E: jz      short loc_140A0B6D6
 * 0000000140A0B660: mov     rbx, 7010008004002001h
 * 0000000140A0B66A: mov     edx, 8
 * 0000000140A0B66F: lea     edi, [rdx-7]
 * 0000000140A0B672: mov     rax, [r10]
 * 0000000140A0B675: mov     ecx, r11d
 * 0000000140A0B678: xor     rax, r8
 * 0000000140A0B67B: mov     r8, [r10+8]
 * 0000000140A0B67F: rol     rax, cl
 * 0000000140A0B682: add     r10, 10h
 * 0000000140A0B686: xor     r8, rax
 * 0000000140A0B689: rol     r8, cl
 * 0000000140A0B68C: sub     rdx, rdi
 * 0000000140A0B68F: jnz     short loc_140A0B672
 * 0000000140A0B691: mov     rcx, r10
 * 0000000140A0B694: sub     rcx, rsi
 * 0000000140A0B697: xor     rcx, r12
 * 0000000140A0B69A: mov     rax, rcx
 * 0000000140A0B69D: rol     rax, 11h
 * 0000000140A0B6A1: xor     rcx, rax
 * 0000000140A0B6A4: mov     rax, rbx
 * 0000000140A0B6A7: mul     rcx
 * 0000000140A0B6AA: mov     [rbp+0BE0h+var_500], rdx
 * 0000000140A0B6B1: xor     edx, eax
 * 0000000140A0B6B3: xor     r11d, edx
 * 0000000140A0B6B6: mov     rax, rdi
 * 0000000140A0B6B9: and     r11d, 3Fh
 * 0000000140A0B6BD: cmovz   r11d, eax
 * 0000000140A0B6C1: mov     eax, 0FFFFFFFFh
 * 0000000140A0B6C6: add     r14d, eax
 * 0000000140A0B6C9: jnz     short loc_140A0B66A
 * 0000000140A0B6CB: mov     rbx, [rbp+0BE0h+var_C30]
 * 0000000140A0B6CF: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0B6D6: and     r9d, 7Fh
 * 0000000140A0B6DA: mov     r14d, 1
 * 0000000140A0B6E0: cmp     r9d, 8
 * 0000000140A0B6E4: jb      short loc_140A0B703
 * 0000000140A0B6E6: mov     edx, r9d
 * 0000000140A0B6E9: shr     rdx, 3
 * 0000000140A0B6ED: xor     r8, [r10]
 * 0000000140A0B6F0: mov     ecx, r11d
 * 0000000140A0B6F3: rol     r8, cl
 * 0000000140A0B6F6: add     r10, 8
 * 0000000140A0B6FA: add     r9d, 0FFFFFFF8h
 * 0000000140A0B6FE: sub     rdx, r14
 * 0000000140A0B701: jnz     short loc_140A0B6ED
 * 0000000140A0B703: xor     esi, esi
 * 0000000140A0B705: test    r9d, r9d
 * 0000000140A0B708: jz      short loc_140A0B726
 * 0000000140A0B70A: mov     esi, 0FFFFFFFFh
 * 0000000140A0B70F: movzx   eax, byte ptr [r10]
 * 0000000140A0B713: mov     ecx, r11d
 * 0000000140A0B716: xor     r8, rax
 * 0000000140A0B719: add     r10, r14
 * 0000000140A0B71C: rol     r8, cl
 * 0000000140A0B71F: add     r9d, esi
 * 0000000140A0B722: jnz     short loc_140A0B70F
 * 0000000140A0B724: xor     esi, esi
 * 0000000140A0B726: mov     rax, r8
 * 0000000140A0B729: jmp     short loc_140A0B72E
 * 0000000140A0B72B: xor     r8d, eax
 * 0000000140A0B72E: shr     rax, 1Fh
 * 0000000140A0B732: test    rax, rax
 * 0000000140A0B735: jnz     short loc_140A0B72B
 * 0000000140A0B737: mov     rax, [rbp+0BE0h+var_C60]
 * 0000000140A0B73B: btr     r8d, 1Fh
 * 0000000140A0B740: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A0B744: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A0B749: mov     edx, [rbp+0BE0h+var_C58]
 * 0000000140A0B74C: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A0B750: mov     [rax+8], r8d
 * 0000000140A0B754: jmp     short loc_140A0B768
 * 0000000140A0B756: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A0B75A: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A0B75F: mov     edx, [rbp+0BE0h+var_C58]
 * 0000000140A0B762: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A0B766: xor     esi, esi
 * 0000000140A0B768: cmp     r15d, edx
 * 0000000140A0B76B: jb      loc_140A0BA06
 * 0000000140A0B771: cmp     r13d, ecx
 * 0000000140A0B774: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0B77B: ja      loc_140A0BA0D
 * 0000000140A0B781: mov     r8, [rbp+0BE0h+var_C10]
 * 0000000140A0B785: cmp     r8, r9
 * 0000000140A0B788: jz      loc_140A0BA0D
 * 0000000140A0B78E: mov     r12d, [r14+4]
 * 0000000140A0B792: cmp     r12d, ecx
 * 0000000140A0B795: ja      loc_140A0BA0D
 * 0000000140A0B79B: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A0B7A0: mov     edx, 1
 * 0000000140A0B7A5: lea     r10d, [rdx+0Bh]
 * 0000000140A0B7A9: cmp     r14, r9
 * 0000000140A0B7AC: jz      loc_140A0BA0D
 * 0000000140A0B7B2: test    r13d, r13d
 * 0000000140A0B7B5: jz      short loc_140A0B7BF
 * 0000000140A0B7B7: mov     r8b, 80h
 * 0000000140A0B7BA: jmp     loc_140A0B9CF
 * 0000000140A0B7BF: mov     rax, [rsp+0CE0h+var_C80]
 * 0000000140A0B7C4: mov     r14d, [r8+4]
 * 0000000140A0B7C8: mov     r15d, [rax]
 * 0000000140A0B7CB: mov     [rbp+0BE0h+var_C28], r15d
 * 0000000140A0B7CF: cmp     r15d, r14d
 * 0000000140A0B7D2: jnb     short loc_140A0B833
 * 0000000140A0B7D4: test    dword ptr [rbx+990h], 200000h
 * 0000000140A0B7DE: jz      loc_140A0ECDF
 * 0000000140A0B7E4: cmp     [rbx+8F8h], esi
 * 0000000140A0B7EA: jnz     short loc_140A0B833
 * 0000000140A0B7EC: mov     rdx, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0B7F1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0B7FB: add     rax, rbx
 * 0000000140A0B7FE: mov     rcx, rbx
 * 0000000140A0B801: mov     [rbx+900h], rax
 * 0000000140A0B808: mov     eax, 1
 * 0000000140A0B80D: mov     [rbx+908h], rsi
 * 0000000140A0B814: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140A0B81F: mov     [rbx+918h], rdx
 * 0000000140A0B826: xor     edx, edx
 * 0000000140A0B828: mov     [rbx+8F8h], eax
 * 0000000140A0B82E: call    $$b8
 * 0000000140A0B833: mov     rsi, r14
 * 0000000140A0B836: lea     rcx, [rbp+0BE0h+var_9B0]
 * 0000000140A0B83D: add     rsi, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0B842: lea     rdx, [rbp+0BE0h+var_7A0]
 * 0000000140A0B849: mov     r9d, r15d
 * 0000000140A0B84C: sub     r9d, r14d
 * 0000000140A0B84F: mov     r14d, r9d
 * 0000000140A0B852: add     r14, rsi
 * 0000000140A0B855: xor     eax, eax
 * 0000000140A0B857: mov     r8d, eax
 * 0000000140A0B85A: mov     r10, [rdx]
 * 0000000140A0B85D: mov     eax, [rcx]
 * 0000000140A0B85F: add     rax, r10
 * 0000000140A0B862: cmp     rsi, rax
 * 0000000140A0B865: jnb     short loc_140A0B870
 * 0000000140A0B867: cmp     r14, r10
 * 0000000140A0B86A: ja      loc_140A0B9AE
 * 0000000140A0B870: mov     eax, 4
 * 0000000140A0B875: inc     r8d
 * 0000000140A0B878: add     rcx, rax
 * 0000000140A0B87B: add     rdx, 8
 * 0000000140A0B87F: cmp     r8d, 6
 * 0000000140A0B883: jb      short loc_140A0B85A
 * 0000000140A0B885: cmp     r9d, eax
 * 0000000140A0B888: jb      loc_140A0B9AE
 * 0000000140A0B88E: add     [rbx+828h], r9d
 * 0000000140A0B895: mov     r10, rsi
 * 0000000140A0B898: mov     r11d, [rbx+814h]
 * 0000000140A0B89F: mov     rax, rsi
 * 0000000140A0B8A2: mov     r15, [rbx+818h]
 * 0000000140A0B8A9: cmp     rsi, r14
 * 0000000140A0B8AC: jnb     short loc_140A0B8BE
 * 0000000140A0B8AE: mov     ecx, 40h ; '@'
 * 0000000140A0B8B3: prefetchnta byte ptr [rax]
 * 0000000140A0B8B6: add     rax, rcx
 * 0000000140A0B8B9: cmp     rax, r14
 * 0000000140A0B8BC: jb      short loc_140A0B8B3
 * 0000000140A0B8BE: mov     r14d, r9d
 * 0000000140A0B8C1: mov     r8, r15
 * 0000000140A0B8C4: shr     r14d, 7
 * 0000000140A0B8C8: test    r14d, r14d
 * 0000000140A0B8CB: jz      short loc_140A0B947
 * 0000000140A0B8CD: mov     rdi, 7010008004002001h
 * 0000000140A0B8D7: mov     edx, 8
 * 0000000140A0B8DC: lea     r13d, [rdx-7]
 * 0000000140A0B8E0: mov     rax, [r10]
 * 0000000140A0B8E3: mov     ecx, r11d
 * 0000000140A0B8E6: xor     rax, r8
 * 0000000140A0B8E9: mov     r8, [r10+8]
 * 0000000140A0B8ED: rol     rax, cl
 * 0000000140A0B8F0: add     r10, 10h
 * 0000000140A0B8F4: xor     r8, rax
 * 0000000140A0B8F7: rol     r8, cl
 * 0000000140A0B8FA: sub     rdx, r13
 * 0000000140A0B8FD: jnz     short loc_140A0B8E0
 * 0000000140A0B8FF: mov     rcx, r10
 * 0000000140A0B902: sub     rcx, rsi
 * 0000000140A0B905: xor     rcx, r15
 * 0000000140A0B908: mov     rax, rcx
 * 0000000140A0B90B: rol     rax, 11h
 * 0000000140A0B90F: xor     rcx, rax
 * 0000000140A0B912: mov     rax, rdi
 * 0000000140A0B915: mul     rcx
 * 0000000140A0B918: mov     [rbp+0BE0h+var_4F8], rdx
 * 0000000140A0B91F: xor     edx, eax
 * 0000000140A0B921: xor     r11d, edx
 * 0000000140A0B924: mov     rax, r13
 * 0000000140A0B927: and     r11d, 3Fh
 * 0000000140A0B92B: cmovz   r11d, eax
 * 0000000140A0B92F: mov     eax, 0FFFFFFFFh
 * 0000000140A0B934: add     r14d, eax
 * 0000000140A0B937: jnz     short loc_140A0B8D7
 * 0000000140A0B939: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0B940: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0B947: and     r9d, 7Fh
 * 0000000140A0B94B: mov     r14d, 1
 * 0000000140A0B951: cmp     r9d, 8
 * 0000000140A0B955: jb      short loc_140A0B974
 * 0000000140A0B957: mov     edx, r9d
 * 0000000140A0B95A: shr     rdx, 3
 * 0000000140A0B95E: xor     r8, [r10]
 * 0000000140A0B961: mov     ecx, r11d
 * 0000000140A0B964: rol     r8, cl
 * 0000000140A0B967: add     r10, 8
 * 0000000140A0B96B: add     r9d, 0FFFFFFF8h
 * 0000000140A0B96F: sub     rdx, r14
 * 0000000140A0B972: jnz     short loc_140A0B95E
 * 0000000140A0B974: xor     esi, esi
 * 0000000140A0B976: test    r9d, r9d
 * 0000000140A0B979: jz      short loc_140A0B997
 * 0000000140A0B97B: mov     esi, 0FFFFFFFFh
 * 0000000140A0B980: movzx   eax, byte ptr [r10]
 * 0000000140A0B984: mov     ecx, r11d
 * 0000000140A0B987: xor     r8, rax
 * 0000000140A0B98A: add     r10, r14
 * 0000000140A0B98D: rol     r8, cl
 * 0000000140A0B990: add     r9d, esi
 * 0000000140A0B993: jnz     short loc_140A0B980
 * 0000000140A0B995: xor     esi, esi
 * 0000000140A0B997: mov     rax, r8
 * 0000000140A0B99A: jmp     short loc_140A0B99F
 * 0000000140A0B99C: xor     r8b, al
 * 0000000140A0B99F: shr     rax, 7
 * 0000000140A0B9A3: test    rax, rax
 * 0000000140A0B9A6: jnz     short loc_140A0B99C
 * 0000000140A0B9A8: and     r8b, 7Fh
 * 0000000140A0B9AC: jmp     short loc_140A0B9B3
 * 0000000140A0B9AE: xor     esi, esi
 * 0000000140A0B9B0: mov     r8b, 80h
 * 0000000140A0B9B3: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A0B9B7: mov     r10d, 0Ch
 * 0000000140A0B9BD: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A0B9C2: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A0B9C6: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A0B9CB: lea     edx, [r10-0Bh]
 * 0000000140A0B9CF: mov     [rax], r8b
 * 0000000140A0B9D2: add     r14, r10
 * 0000000140A0B9D5: mov     r8, [rbp+0BE0h+var_C10]
 * 0000000140A0B9D9: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A0B9DE: add     r8, r10
 * 0000000140A0B9E1: add     rax, rdx
 * 0000000140A0B9E4: mov     [rbp+0BE0h+var_C10], r8
 * 0000000140A0B9E8: mov     [rsp+0CE0h+var_C88], rax
 * 0000000140A0B9ED: mov     [rsp+0CE0h+var_C80], r14
 * 0000000140A0B9F2: cmp     r14, r9
 * 0000000140A0B9F5: jz      short loc_140A0B9FB
 * 0000000140A0B9F7: mov     r12d, [r14+4]
 * 0000000140A0B9FB: cmp     r12d, ecx
 * 0000000140A0B9FE: jbe     loc_140A0B7A9
 * 0000000140A0BA04: jmp     short loc_140A0BA0D
 * 0000000140A0BA06: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0BA0D: mov     r12, [rbp+0BE0h+var_C60]
 * 0000000140A0BA11: xor     r15d, r15d
 * 0000000140A0BA14: test    r13d, r13d
 * 0000000140A0BA17: jnz     loc_140A0BB97
 * 0000000140A0BA1D: mov     eax, [rbp+0BE0h+var_C28]
 * 0000000140A0BA20: cmp     eax, ecx
 * 0000000140A0BA22: jz      loc_140A0BB97
 * 0000000140A0BA28: mov     rsi, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0BA2D: lea     rdx, [rbp+0BE0h+var_7A0]
 * 0000000140A0BA34: mov     [r12+0Ch], eax
 * 0000000140A0BA39: lea     r13d, [r15+1]
 * 0000000140A0BA3D: mov     [r12+10h], ecx
 * 0000000140A0BA42: mov     r9d, ecx
 * 0000000140A0BA45: mov     eax, [r12+0Ch]
 * 0000000140A0BA4A: lea     rcx, [rbp+0BE0h+var_9B0]
 * 0000000140A0BA51: sub     r9d, eax
 * 0000000140A0BA54: add     rsi, rax
 * 0000000140A0BA57: mov     r14d, r9d
 * 0000000140A0BA5A: mov     r8d, r15d
 * 0000000140A0BA5D: add     r14, rsi
 * 0000000140A0BA60: mov     r10, [rdx]
 * 0000000140A0BA63: mov     eax, [rcx]
 * 0000000140A0BA65: add     rax, r10
 * 0000000140A0BA68: cmp     rsi, rax
 * 0000000140A0BA6B: jnb     short loc_140A0BA76
 * 0000000140A0BA6D: cmp     r14, r10
 * 0000000140A0BA70: ja      loc_140A0BB97
 * 0000000140A0BA76: add     r8d, r13d
 * 0000000140A0BA79: add     rdx, 8
 * 0000000140A0BA7D: add     rcx, 4
 * 0000000140A0BA81: cmp     r8d, 6
 * 0000000140A0BA85: jb      short loc_140A0BA60
 * 0000000140A0BA87: add     [rbx+828h], r9d
 * 0000000140A0BA8E: mov     r10, rsi
 * 0000000140A0BA91: mov     r11d, [rbx+814h]
 * 0000000140A0BA98: mov     rax, rsi
 * 0000000140A0BA9B: mov     r15, [rbx+818h]
 * 0000000140A0BAA2: cmp     rsi, r14
 * 0000000140A0BAA5: jnb     short loc_140A0BAB7
 * 0000000140A0BAA7: mov     ecx, 40h ; '@'
 * 0000000140A0BAAC: prefetchnta byte ptr [rax]
 * 0000000140A0BAAF: add     rax, rcx
 * 0000000140A0BAB2: cmp     rax, r14
 * 0000000140A0BAB5: jb      short loc_140A0BAAC
 * 0000000140A0BAB7: mov     r14d, r9d
 * 0000000140A0BABA: mov     r8, r15
 * 0000000140A0BABD: shr     r14d, 7
 * 0000000140A0BAC1: test    r14d, r14d
 * 0000000140A0BAC4: jz      short loc_140A0BB2F
 * 0000000140A0BAC6: mov     r12, 7010008004002001h
 * 0000000140A0BAD0: mov     edx, 8
 * 0000000140A0BAD5: mov     rax, [r10]
 * 0000000140A0BAD8: mov     ecx, r11d
 * 0000000140A0BADB: xor     rax, r8
 * 0000000140A0BADE: mov     r8, [r10+8]
 * 0000000140A0BAE2: rol     rax, cl
 * 0000000140A0BAE5: add     r10, 10h
 * 0000000140A0BAE9: xor     r8, rax
 * 0000000140A0BAEC: rol     r8, cl
 * 0000000140A0BAEF: sub     rdx, r13
 * 0000000140A0BAF2: jnz     short loc_140A0BAD5
 * 0000000140A0BAF4: mov     rcx, r10
 * 0000000140A0BAF7: sub     rcx, rsi
 * 0000000140A0BAFA: xor     rcx, r15
 * 0000000140A0BAFD: mov     rax, rcx
 * 0000000140A0BB00: rol     rax, 11h
 * 0000000140A0BB04: xor     rcx, rax
 * 0000000140A0BB07: mov     rax, r12
 * 0000000140A0BB0A: mul     rcx
 * 0000000140A0BB0D: mov     [rbp+0BE0h+var_4F0], rdx
 * 0000000140A0BB14: xor     edx, eax
 * 0000000140A0BB16: xor     r11d, edx
 * 0000000140A0BB19: mov     eax, 0FFFFFFFFh
 * 0000000140A0BB1E: and     r11d, 3Fh
 * 0000000140A0BB22: cmovz   r11d, r13d
 * 0000000140A0BB26: add     r14d, eax
 * 0000000140A0BB29: jnz     short loc_140A0BAD0
 * 0000000140A0BB2B: mov     r12, [rbp+0BE0h+var_C60]
 * 0000000140A0BB2F: and     r9d, 7Fh
 * 0000000140A0BB33: cmp     r9d, 8
 * 0000000140A0BB37: jb      short loc_140A0BB56
 * 0000000140A0BB39: mov     edx, r9d
 * 0000000140A0BB3C: shr     rdx, 3
 * 0000000140A0BB40: xor     r8, [r10]
 * 0000000140A0BB43: mov     ecx, r11d
 * 0000000140A0BB46: rol     r8, cl
 * 0000000140A0BB49: add     r10, 8
 * 0000000140A0BB4D: add     r9d, 0FFFFFFF8h
 * 0000000140A0BB51: sub     rdx, r13
 * 0000000140A0BB54: jnz     short loc_140A0BB40
 * 0000000140A0BB56: xor     r15d, r15d
 * 0000000140A0BB59: test    r9d, r9d
 * 0000000140A0BB5C: jz      short loc_140A0BB7C
 * 0000000140A0BB5E: mov     r15d, 0FFFFFFFFh
 * 0000000140A0BB64: movzx   eax, byte ptr [r10]
 * 0000000140A0BB68: mov     ecx, r11d
 * 0000000140A0BB6B: xor     r8, rax
 * 0000000140A0BB6E: add     r10, r13
 * 0000000140A0BB71: rol     r8, cl
 * 0000000140A0BB74: add     r9d, r15d
 * 0000000140A0BB77: jnz     short loc_140A0BB64
 * 0000000140A0BB79: xor     r15d, r15d
 * 0000000140A0BB7C: mov     rax, r8
 * 0000000140A0BB7F: jmp     short loc_140A0BB84
 * 0000000140A0BB81: xor     r8d, eax
 * 0000000140A0BB84: shr     rax, 1Fh
 * 0000000140A0BB88: test    rax, rax
 * 0000000140A0BB8B: jnz     short loc_140A0BB81
 * 0000000140A0BB8D: btr     r8d, 1Fh
 * 0000000140A0BB92: mov     [r12+14h], r8d
 * 0000000140A0BB97: mov     rdx, [rbp+0BE0h+var_C48]
 * 0000000140A0BB9B: mov     r13, [rbp+0BE0h+var_C10]
 * 0000000140A0BB9F: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A0BBA4: cmp     r13, rdx
 * 0000000140A0BBA7: jz      short loc_140A0BBEC
 * 0000000140A0BBA9: mov     eax, [r13+0]
 * 0000000140A0BBAD: mov     ecx, [r13+4]
 * 0000000140A0BBB1: cmp     eax, [rbp+0BE0h+var_C58]
 * 0000000140A0BBB4: jb      short loc_140A0BBEC
 * 0000000140A0BBB6: cmp     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A0BBBA: ja      short loc_140A0BBEC
 * 0000000140A0BBBC: cmp     r14, rdx
 * 0000000140A0BBBF: jz      short loc_140A0BBE0
 * 0000000140A0BBC1: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A0BBC6: mov     byte ptr [rax], 80h
 * 0000000140A0BBC9: inc     rax
 * 0000000140A0BBCC: mov     [rsp+0CE0h+var_C88], rax
 * 0000000140A0BBD1: mov     eax, 0Ch
 * 0000000140A0BBD6: add     r14, rax
 * 0000000140A0BBD9: mov     [rsp+0CE0h+var_C80], r14
 * 0000000140A0BBDE: jmp     short loc_140A0BBE5
 * 0000000140A0BBE0: mov     eax, 0Ch
 * 0000000140A0BBE5: add     r13, rax
 * 0000000140A0BBE8: mov     [rbp+0BE0h+var_C10], r13
 * 0000000140A0BBEC: mov     rsi, [rbp+0BE0h+var_C50]
 * 0000000140A0BBF0: add     r12, 18h
 * 0000000140A0BBF4: add     rsi, 28h ; '('
 * 0000000140A0BBF8: mov     [rbp+0BE0h+var_C60], r12
 * 0000000140A0BBFC: mov     [rbp+0BE0h+var_C50], rsi
 * 0000000140A0BC00: cmp     r12, [rsp+0CE0h+var_C70]
 * 0000000140A0BC05: jz      short loc_140A0BC17
 * 0000000140A0BC07: mov     r8, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A0BC0C: mov     r9d, 1
 * 0000000140A0BC12: jmp     loc_140A0B365
 * 0000000140A0BC17: mov     rsi, [rbp+0BE0h+var_BB0]
 * 0000000140A0BC1B: mov     [rbp+0BE0h+var_BA8], rsi
 * 0000000140A0BC1F: mov     ecx, r15d
 * 0000000140A0BC22: mov     [rbp+0BE0h+var_C18], ecx
 * 0000000140A0BC25: mov     r13d, 80000000h
 * 0000000140A0BC2B: mov     rbx, rsi
 * 0000000140A0BC2E: lea     eax, [rcx+r13]
 * 0000000140A0BC32: test    r13d, eax
 * 0000000140A0BC35: jnz     short loc_140A0BC4D
 * 0000000140A0BC37: cmp     ecx, 0C000010Eh
 * 0000000140A0BC3D: jz      short loc_140A0BC4D
 * 0000000140A0BC3F: mov     ecx, [rbp+0BE0h+var_C18]
 * 0000000140A0BC42: jmp     loc_140A0BCDB
 * 0000000140A0BC47: mov     r13d, 80000000h
 * 0000000140A0BC4D: mov     r12, [rbp+0BE0h+var_C08]
 * 0000000140A0BC51: mov     rax, [rsi+1F8h]
 * 0000000140A0BC58: mov     rcx, r12
 * 0000000140A0BC5B: call    KeGuardDispatchICall
 * 0000000140A0BC60: mov     ecx, [rax+94h]
 * 0000000140A0BC66: cmp     ecx, 14h
 * 0000000140A0BC69: jb      loc_140A09FDA
 * 0000000140A0BC6F: mov     eax, [rax+90h]
 * 0000000140A0BC75: lea     r15, [r12+rcx]
 * 0000000140A0BC79: add     r15, rax
 * 0000000140A0BC7C: lea     r14, [r12+rax]
 * 0000000140A0BC80: cmp     r14, r15
 * 0000000140A0BC83: jz      short loc_140A0BCD5
 * 0000000140A0BC85: xor     ecx, ecx
 * 0000000140A0BC87: cmp     [r14+0Ch], ecx
 * 0000000140A0BC8B: jz      short loc_140A0BCD5
 * 0000000140A0BC8D: mov     eax, [r14+10h]
 * 0000000140A0BC91: test    eax, eax
 * 0000000140A0BC93: jz      short loc_140A0BCD5
 * 0000000140A0BC95: mov     rdx, [rax+r12]
 * 0000000140A0BC99: test    rdx, rdx
 * 0000000140A0BC9C: jz      short loc_140A0BCCC
 * 0000000140A0BC9E: mov     r8d, 8000000Fh
 * 0000000140A0BCA4: lea     rcx, [rbp+0BE0h+var_BA8]
 * 0000000140A0BCA8: call    sub_140A0F0FC
 * 0000000140A0BCAD: mov     rsi, [rbp+0BE0h+var_BA8]
 * 0000000140A0BCB1: mov     ecx, eax
 * 0000000140A0BCB3: add     eax, r13d
 * 0000000140A0BCB6: mov     rbx, rsi
 * 0000000140A0BCB9: test    r13d, eax
 * 0000000140A0BCBC: jnz     short loc_140A0BCCA
 * 0000000140A0BCBE: cmp     ecx, 0C000010Eh
 * 0000000140A0BCC4: jnz     loc_140A0BE54
 * 0000000140A0BCCA: xor     ecx, ecx
 * 0000000140A0BCCC: add     r14, 14h
 * 0000000140A0BCD0: cmp     r14, r15
 * 0000000140A0BCD3: jnz     short loc_140A0BC87
 * 0000000140A0BCD5: xor     r15d, r15d
 * 0000000140A0BCD8: mov     ecx, r15d
 * 0000000140A0BCDB: lea     eax, [rcx+r13]
 * 0000000140A0BCDF: test    r13d, eax
 * 0000000140A0BCE2: jnz     short loc_140A0BCF0
 * 0000000140A0BCE4: cmp     ecx, 0C000010Eh
 * 0000000140A0BCEA: jnz     loc_140A09D8D
 * 0000000140A0BCF0: mov     rax, [rbx+570h]
 * 0000000140A0BCF7: lea     rdx, [rbp+0BE0h+var_140]
 * 0000000140A0BCFE: mov     rcx, [rax+20h]
 * 0000000140A0BD02: mov     rax, [rbx+200h]
 * 0000000140A0BD09: call    KeGuardDispatchICall
 * 0000000140A0BD0E: mov     rcx, [rbp+0BE0h+var_138]
 * 0000000140A0BD15: test    rcx, rcx
 * 0000000140A0BD18: jz      loc_140A0C25E
 * 0000000140A0BD1E: mov     [rbx+978h], rcx
 * 0000000140A0BD25: mov     rax, [rbx+1F8h]
 * 0000000140A0BD2C: call    KeGuardDispatchICall
 * 0000000140A0BD31: test    rax, rax
 * 0000000140A0BD34: jz      loc_140A0C25E
 * 0000000140A0BD3A: mov     eax, [rax+50h]
 * 0000000140A0BD3D: mov     [rbx+974h], eax
 * 0000000140A0BD43: mov     dword ptr [rbx+958h], 8
 * 0000000140A0BD4D: mov     r15, [rbx+600h]
 * 0000000140A0BD54: xor     r10d, r10d
 * 0000000140A0BD57: test    r15, r15
 * 0000000140A0BD5A: jz      loc_140A0BF74
 * 0000000140A0BD60: cmp     [r15], r10
 * 0000000140A0BD63: jz      loc_140A0BF74
 * 0000000140A0BD69: mov     r9d, [rbx+838h]
 * 0000000140A0BD70: lea     r12d, [r10+20h]
 * 0000000140A0BD74: mov     r13d, [rbx+7E4h]
 * 0000000140A0BD7B: cmp     r9d, 7
 * 0000000140A0BD7F: mov     r8d, [rbx+924h]
 * 0000000140A0BD86: cmovnz  r12d, r10d
 * 0000000140A0BD8A: mov     dword ptr [rbp+0BE0h+arg_8], r9d
 * 0000000140A0BD91: lea     eax, [r13+30h]
 * 0000000140A0BD95: cmp     eax, [rbx+0A1Ch]
 * 0000000140A0BD9B: jbe     loc_140A0BE9A
 * 0000000140A0BDA1: mov     edx, eax
 * 0000000140A0BDA3: mov     rcx, rbx
 * 0000000140A0BDA6: call    sub_140A11B30
 * 0000000140A0BDAB: xor     r10d, r10d
 * 0000000140A0BDAE: mov     r14, rax
 * 0000000140A0BDB1: test    rax, rax
 * 0000000140A0BDB4: jz      loc_140A0BE8F
 * 0000000140A0BDBA: mov     ecx, [rbx+990h]
 * 0000000140A0BDC0: test    cl, 4
 * 0000000140A0BDC3: jnz     loc_140A0BE7E
 * 0000000140A0BDC9: mov     eax, [rbx+7E4h]
 * 0000000140A0BDCF: lea     r9d, [r10+1]
 * 0000000140A0BDD3: mov     r8, [rbx+7C8h]
 * 0000000140A0BDDA: and     ecx, 20000000h
 * 0000000140A0BDE0: neg     ecx
 * 0000000140A0BDE2: sbb     edx, edx
 * 0000000140A0BDE4: and     edx, [rbx+924h]
 * 0000000140A0BDEA: cmp     eax, 8
 * 0000000140A0BDED: jb      short loc_140A0BE04
 * 0000000140A0BDEF: mov     ecx, eax
 * 0000000140A0BDF1: shr     rcx, 3
 * 0000000140A0BDF5: mov     [rbx], r10
 * 0000000140A0BDF8: add     eax, 0FFFFFFF8h
 * 0000000140A0BDFB: add     rbx, 8
 * 0000000140A0BDFF: sub     rcx, r9
 * 0000000140A0BE02: jnz     short loc_140A0BDF5
 * 0000000140A0BE04: test    eax, eax
 * 0000000140A0BE06: jz      short loc_140A0BE17
 * 0000000140A0BE08: mov     ecx, 0FFFFFFFFh
 * 0000000140A0BE0D: mov     [rbx], r10b
 * 0000000140A0BE10: add     rbx, r9
 * 0000000140A0BE13: add     eax, ecx
 * 0000000140A0BE15: jnz     short loc_140A0BE0D
 * 0000000140A0BE17: mov     ebx, [r14+924h]
 * 0000000140A0BE1E: mov     [r14+924h], edx
 * 0000000140A0BE25: cmp     edx, 3
 * 0000000140A0BE28: jz      short loc_140A0BE65
 * 0000000140A0BE2A: test    dword ptr [r14+990h], 10000000h
 * 0000000140A0BE35: mov     ecx, r10d
 * 0000000140A0BE38: cmovz   ecx, edx
 * 0000000140A0BE3B: test    ecx, ecx
 * 0000000140A0BE3D: jz      short loc_140A0BE5C
 * 0000000140A0BE3F: mov     rax, [r14+228h]
 * 0000000140A0BE46: lea     rcx, [r8-8]
 * 0000000140A0BE4A: mov     rdx, [rcx]
 * 0000000140A0BE4D: call    KeGuardDispatchICall
 * 0000000140A0BE52: jmp     short loc_140A0BE74
 * 0000000140A0BE54: xor     r15d, r15d
 * 0000000140A0BE57: jmp     loc_140A0BCDB
 * 0000000140A0BE5C: mov     rax, [r14+100h]
 * 0000000140A0BE63: jmp     short loc_140A0BE6C
 * 0000000140A0BE65: mov     rax, [r14+368h]
 * 0000000140A0BE6C: mov     rcx, r8
 * 0000000140A0BE6F: call    KeGuardDispatchICall
 * 0000000140A0BE74: mov     [r14+924h], ebx
 * 0000000140A0BE7B: xor     r10d, r10d
 * 0000000140A0BE7E: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140A0BE86: mov     r9d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0BE8D: jmp     short loc_140A0BEA3
 * 0000000140A0BE8F: mov     rbx, rsi
 * 0000000140A0BE92: xor     r15d, r15d
 * 0000000140A0BE95: jmp     loc_140A09D8D
 * 0000000140A0BE9A: mov     r14, rbx
 * 0000000140A0BE9D: mov     [rbx+7E4h], eax
 * 0000000140A0BEA3: mov     r8d, 1
 * 0000000140A0BEA9: lea     rbx, [r14+r13]
 * 0000000140A0BEAD: add     [r14+80Ch], r8d
 * 0000000140A0BEB4: mov     rax, rbx
 * 0000000140A0BEB7: mov     [rbp+0BE0h+var_4E8], rbx
 * 0000000140A0BEBE: lea     ecx, [r8+2Fh]
 * 0000000140A0BEC2: lea     edx, [rcx-2Ah]
 * 0000000140A0BEC5: mov     [rax], r10
 * 0000000140A0BEC8: add     ecx, 0FFFFFFF8h
 * 0000000140A0BECB: add     rax, 8
 * 0000000140A0BECF: sub     rdx, r8
 * 0000000140A0BED2: jnz     short loc_140A0BEC5
 * 0000000140A0BED4: test    ecx, ecx
 * 0000000140A0BED6: jz      short loc_140A0BEE7
 * 0000000140A0BED8: mov     edx, 0FFFFFFFFh
 * 0000000140A0BEDD: mov     [rax], r10b
 * 0000000140A0BEE0: add     rax, r8
 * 0000000140A0BEE3: add     ecx, edx
 * 0000000140A0BEE5: jnz     short loc_140A0BEDD
 * 0000000140A0BEE7: mov     [rbx], r12d
 * 0000000140A0BEEA: mov     [rbx+8], r15
 * 0000000140A0BEEE: cmp     r9d, 7
 * 0000000140A0BEF2: jnz     short loc_140A0BF0C
 * 0000000140A0BEF4: lea     r9, [rbx+18h]
 * 0000000140A0BEF8: mov     r8d, 8
 * 0000000140A0BEFE: mov     rdx, r15
 * 0000000140A0BF01: mov     rcx, r14
 * 0000000140A0BF04: call    sub_1403E9B1C
 * 0000000140A0BF09: xor     r10d, r10d
 * 0000000140A0BF0C: mov     dword ptr [rbx+10h], 8
 * 0000000140A0BF13: lea     rdx, [r15+8]
 * 0000000140A0BF17: add     dword ptr [r14+828h], 8
 * 0000000140A0BF1F: mov     rax, r15
 * 0000000140A0BF22: mov     ecx, [r14+814h]
 * 0000000140A0BF29: mov     r8, [r14+818h]
 * 0000000140A0BF30: cmp     r15, rdx
 * 0000000140A0BF33: jnb     short loc_140A0BF46
 * 0000000140A0BF35: mov     r9d, 40h ; '@'
 * 0000000140A0BF3B: prefetchnta byte ptr [rax]
 * 0000000140A0BF3E: add     rax, r9
 * 0000000140A0BF41: cmp     rax, rdx
 * 0000000140A0BF44: jb      short loc_140A0BF3B
 * 0000000140A0BF46: mov     rax, [r15]
 * 0000000140A0BF49: xor     rax, r8
 * 0000000140A0BF4C: rol     rax, cl
 * 0000000140A0BF4F: mov     rcx, rax
 * 0000000140A0BF52: jmp     short loc_140A0BF56
 * 0000000140A0BF54: xor     eax, ecx
 * 0000000140A0BF56: shr     rcx, 1Fh
 * 0000000140A0BF5A: test    rcx, rcx
 * 0000000140A0BF5D: jnz     short loc_140A0BF54
 * 0000000140A0BF5F: btr     eax, 1Fh
 * 0000000140A0BF63: mov     rsi, r14
 * 0000000140A0BF66: mov     [rbx+14h], eax
 * 0000000140A0BF69: mov     rbx, r14
 * 0000000140A0BF6C: add     dword ptr [r14+828h], 8
 * 0000000140A0BF74: mov     dword ptr [rbx+958h], 9
 * 0000000140A0BF7E: jmp     loc_140A088F7
 * 0000000140A0BF83: mov     r9d, [rbx+838h]
 * 0000000140A0BF8A: mov     r13d, 20h ; ' '
 * 0000000140A0BF90: mov     eax, [rbx+7E4h]
 * 0000000140A0BF96: cmp     r9d, 7
 * 0000000140A0BF9A: mov     r8d, [rbx+924h]
 * 0000000140A0BFA1: cmovnz  r13d, r11d
 * 0000000140A0BFA5: mov     [rbp+0BE0h+var_C38], eax
 * 0000000140A0BFA8: add     eax, 30h ; '0'
 * 0000000140A0BFAB: mov     [rbp+0BE0h+var_BE8], r9d
 * 0000000140A0BFAF: cmp     eax, [rbx+0A1Ch]
 * 0000000140A0BFB5: jbe     loc_140A0C09E
 * 0000000140A0BFBB: mov     edx, eax
 * 0000000140A0BFBD: mov     rcx, rbx
 * 0000000140A0BFC0: call    sub_140A11B30
 * 0000000140A0BFC5: xor     r11d, r11d
 * 0000000140A0BFC8: mov     r14, rax
 * 0000000140A0BFCB: test    rax, rax
 * 0000000140A0BFCE: jz      loc_140A0BE8F
 * 0000000140A0BFD4: mov     ecx, [rbx+990h]
 * 0000000140A0BFDA: test    cl, 4
 * 0000000140A0BFDD: jnz     loc_140A0C090
 * 0000000140A0BFE3: mov     eax, [rbx+7E4h]
 * 0000000140A0BFE9: lea     r9d, [r11+1]
 * 0000000140A0BFED: mov     r8, [rbx+7C8h]
 * 0000000140A0BFF4: and     ecx, 20000000h
 * 0000000140A0BFFA: neg     ecx
 * 0000000140A0BFFC: sbb     edx, edx
 * 0000000140A0BFFE: and     edx, [rbx+924h]
 * 0000000140A0C004: cmp     eax, 8
 * 0000000140A0C007: jb      short loc_140A0C01E
 * 0000000140A0C009: mov     ecx, eax
 * 0000000140A0C00B: shr     rcx, 3
 * 0000000140A0C00F: mov     [rbx], r11
 * 0000000140A0C012: add     eax, 0FFFFFFF8h
 * 0000000140A0C015: add     rbx, 8
 * 0000000140A0C019: sub     rcx, r9
 * 0000000140A0C01C: jnz     short loc_140A0C00F
 * 0000000140A0C01E: test    eax, eax
 * 0000000140A0C020: jz      short loc_140A0C031
 * 0000000140A0C022: mov     ecx, 0FFFFFFFFh
 * 0000000140A0C027: mov     [rbx], r11b
 * 0000000140A0C02A: add     rbx, r9
 * 0000000140A0C02D: add     eax, ecx
 * 0000000140A0C02F: jnz     short loc_140A0C027
 * 0000000140A0C031: mov     ebx, [r14+924h]
 * 0000000140A0C038: mov     [r14+924h], edx
 * 0000000140A0C03F: cmp     edx, 3
 * 0000000140A0C042: jz      short loc_140A0C077
 * 0000000140A0C044: test    dword ptr [r14+990h], 10000000h
 * 0000000140A0C04F: mov     ecx, r11d
 * 0000000140A0C052: cmovz   ecx, edx
 * 0000000140A0C055: test    ecx, ecx
 * 0000000140A0C057: jz      short loc_140A0C06E
 * 0000000140A0C059: mov     rax, [r14+228h]
 * 0000000140A0C060: lea     rcx, [r8-8]
 * 0000000140A0C064: mov     rdx, [rcx]
 * 0000000140A0C067: call    KeGuardDispatchICall
 * 0000000140A0C06C: jmp     short loc_140A0C086
 * 0000000140A0C06E: mov     rax, [r14+100h]
 * 0000000140A0C075: jmp     short loc_140A0C07E
 * 0000000140A0C077: mov     rax, [r14+368h]
 * 0000000140A0C07E: mov     rcx, r8
 * 0000000140A0C081: call    KeGuardDispatchICall
 * 0000000140A0C086: mov     [r14+924h], ebx
 * 0000000140A0C08D: xor     r11d, r11d
 * 0000000140A0C090: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140A0C098: mov     r9d, [rbp+0BE0h+var_BE8]
 * 0000000140A0C09C: jmp     short loc_140A0C0A7
 * 0000000140A0C09E: mov     r14, rbx
 * 0000000140A0C0A1: mov     [rbx+7E4h], eax
 * 0000000140A0C0A7: mov     ebx, [rbp+0BE0h+var_C38]
 * 0000000140A0C0AA: mov     r8d, 1
 * 0000000140A0C0B0: add     [r14+80Ch], r8d
 * 0000000140A0C0B7: add     rbx, r14
 * 0000000140A0C0BA: mov     [rsp+0CE0h+var_C70], rbx
 * 0000000140A0C0BF: mov     rax, rbx
 * 0000000140A0C0C2: lea     ecx, [r8+2Fh]
 * 0000000140A0C0C6: mov     [rbp+0BE0h+var_4D8], rbx
 * 0000000140A0C0CD: lea     edx, [rcx-2Ah]
 * 0000000140A0C0D0: mov     [rax], r11
 * 0000000140A0C0D3: add     ecx, 0FFFFFFF8h
 * 0000000140A0C0D6: add     rax, 8
 * 0000000140A0C0DA: sub     rdx, r8
 * 0000000140A0C0DD: jnz     short loc_140A0C0D0
 * 0000000140A0C0DF: test    ecx, ecx
 * 0000000140A0C0E1: jz      short loc_140A0C0F2
 * 0000000140A0C0E3: mov     edx, 0FFFFFFFFh
 * 0000000140A0C0E8: mov     [rax], r11b
 * 0000000140A0C0EB: add     rax, r8
 * 0000000140A0C0EE: add     ecx, edx
 * 0000000140A0C0F0: jnz     short loc_140A0C0E8
 * 0000000140A0C0F2: mov     [rbx], r13d
 * 0000000140A0C0F5: mov     [rbx+8], r15
 * 0000000140A0C0F9: cmp     r9d, 7
 * 0000000140A0C0FD: jnz     short loc_140A0C116
 * 0000000140A0C0FF: test    r12d, r12d
 * 0000000140A0C102: jz      short loc_140A0C116
 * 0000000140A0C104: lea     r9, [rbx+18h]
 * 0000000140A0C108: mov     r8d, r12d
 * 0000000140A0C10B: mov     rdx, r15
 * 0000000140A0C10E: mov     rcx, r14
 * 0000000140A0C111: call    sub_1403E9B1C
 * 0000000140A0C116: mov     [rbx+10h], r12d
 * 0000000140A0C11A: mov     r9, r15
 * 0000000140A0C11D: add     [r14+828h], r12d
 * 0000000140A0C124: mov     rax, r15
 * 0000000140A0C127: mov     r10d, [r14+814h]
 * 0000000140A0C12E: mov     rsi, [r14+818h]
 * 0000000140A0C135: mov     ecx, r12d
 * 0000000140A0C138: add     rcx, r15
 * 0000000140A0C13B: cmp     r15, rcx
 * 0000000140A0C13E: jnb     short loc_140A0C150
 * 0000000140A0C140: mov     edx, 40h ; '@'
 * 0000000140A0C145: prefetchnta byte ptr [rax]
 * 0000000140A0C148: add     rax, rdx
 * 0000000140A0C14B: cmp     rax, rcx
 * 0000000140A0C14E: jb      short loc_140A0C145
 * 0000000140A0C150: mov     r11d, r12d
 * 0000000140A0C153: mov     r8, rsi
 * 0000000140A0C156: shr     r11d, 7
 * 0000000140A0C15A: mov     r13d, 1
 * 0000000140A0C160: test    r11d, r11d
 * 0000000140A0C163: jz      short loc_140A0C1D8
 * 0000000140A0C165: mov     ebx, 0FFFFFFFFh
 * 0000000140A0C16A: mov     r12, 7010008004002001h
 * 0000000140A0C174: mov     eax, 8
 * 0000000140A0C179: xor     r8, [r9]
 * 0000000140A0C17C: mov     ecx, r10d
 * 0000000140A0C17F: rol     r8, cl
 * 0000000140A0C182: xor     r8, [r9+8]
 * 0000000140A0C186: add     r9, 10h
 * 0000000140A0C18A: rol     r8, cl
 * 0000000140A0C18D: sub     rax, r13
 * 0000000140A0C190: jnz     short loc_140A0C179
 * 0000000140A0C192: mov     rcx, r9
 * 0000000140A0C195: sub     rcx, r15
 * 0000000140A0C198: xor     rcx, rsi
 * 0000000140A0C19B: mov     rax, rcx
 * 0000000140A0C19E: rol     rax, 11h
 * 0000000140A0C1A2: xor     rcx, rax
 * 0000000140A0C1A5: mov     rax, r12
 * 0000000140A0C1A8: mul     rcx
 * 0000000140A0C1AB: xor     r10d, edx
 * 0000000140A0C1AE: mov     [rbp+0BE0h+var_4D0], rdx
 * 0000000140A0C1B5: xor     r10d, eax
 * 0000000140A0C1B8: and     r10d, 3Fh
 * 0000000140A0C1BC: cmovz   r10d, r13d
 * 0000000140A0C1C0: add     r11d, ebx
 * 0000000140A0C1C3: jnz     short loc_140A0C174
 * 0000000140A0C1C5: mov     rbx, [rsp+0CE0h+var_C70]
 * 0000000140A0C1CA: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0C1D1: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0C1D8: mov     edx, r12d
 * 0000000140A0C1DB: and     edx, 7Fh
 * 0000000140A0C1DE: cmp     edx, 8
 * 0000000140A0C1E1: jb      short loc_140A0C1FE
 * 0000000140A0C1E3: mov     eax, edx
 * 0000000140A0C1E5: shr     rax, 3
 * 0000000140A0C1E9: xor     r8, [r9]
 * 0000000140A0C1EC: mov     ecx, r10d
 * 0000000140A0C1EF: rol     r8, cl
 * 0000000140A0C1F2: add     r9, 8
 * 0000000140A0C1F6: add     edx, 0FFFFFFF8h
 * 0000000140A0C1F9: sub     rax, r13
 * 0000000140A0C1FC: jnz     short loc_140A0C1E9
 * 0000000140A0C1FE: xor     r15d, r15d
 * 0000000140A0C201: test    edx, edx
 * 0000000140A0C203: jz      short loc_140A0C223
 * 0000000140A0C205: mov     r15d, 0FFFFFFFFh
 * 0000000140A0C20B: movzx   eax, byte ptr [r9]
 * 0000000140A0C20F: mov     ecx, r10d
 * 0000000140A0C212: xor     r8, rax
 * 0000000140A0C215: add     r9, r13
 * 0000000140A0C218: rol     r8, cl
 * 0000000140A0C21B: add     edx, r15d
 * 0000000140A0C21E: jnz     short loc_140A0C20B
 * 0000000140A0C220: xor     r15d, r15d
 * 0000000140A0C223: mov     rax, r8
 * 0000000140A0C226: jmp     short loc_140A0C22B
 * 0000000140A0C228: xor     r8d, eax
 * 0000000140A0C22B: shr     rax, 1Fh
 * 0000000140A0C22F: test    rax, rax
 * 0000000140A0C232: jnz     short loc_140A0C228
 * 0000000140A0C234: btr     r8d, 1Fh
 * 0000000140A0C239: mov     rsi, r14
 * 0000000140A0C23C: mov     [rbx+14h], r8d
 * 0000000140A0C240: mov     rbx, r14
 * 0000000140A0C243: add     [r14+828h], r12d
 * 0000000140A0C24A: jmp     short loc_140A0C24F
 * 0000000140A0C24C: xor     r15d, r15d
 * 0000000140A0C24F: mov     dword ptr [rbx+958h], 0Bh
 * 0000000140A0C259: jmp     loc_140A09D8D
 * 0000000140A0C25E: mov     r12d, 1
 * 0000000140A0C264: cmp     [rbx+8F8h], r15d
 * 0000000140A0C26B: jnz     loc_140A08AB7
 * 0000000140A0C271: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0C27B: add     rax, rbx
 * 0000000140A0C27E: mov     [rbx+900h], rax
 * 0000000140A0C285: mov     [rbx+908h], r15
 * 0000000140A0C28C: mov     qword ptr [rbx+910h], 105h
 * 0000000140A0C297: mov     qword ptr [rbx+918h], 0FFFFFFFFC000007Bh
 * 0000000140A0C2A2: jmp     loc_140A08AA6
 * 0000000140A0C2A7: mov     r12d, 1
 * 0000000140A0C2AD: jmp     loc_140A08ABD
 * 0000000140A0C2B2: mov     [rbx+970h], r13d
 * 0000000140A0C2B9: test    r14, r14
 * 0000000140A0C2BC: jz      loc_140A0C51C
 * 0000000140A0C2C2: mov     rax, [rbx+288h]
 * 0000000140A0C2C9: mov     rcx, r14
 * 0000000140A0C2CC: call    KeGuardDispatchICall
 * 0000000140A0C2D1: jmp     loc_140A0C51C
 * 0000000140A0C2D6: mov     eax, [rsi+830h]
 * 0000000140A0C2DC: test    r12b, al
 * 0000000140A0C2DF: jz      loc_140A0C51C
 * 0000000140A0C2E5: mov     ecx, [rsi+970h]
 * 0000000140A0C2EB: mov     r13d, 0FFFFFFFFh
 * 0000000140A0C2F1: cmp     ecx, r13d
 * 0000000140A0C2F4: jz      short loc_140A0C307
 * 0000000140A0C2F6: mov     rax, [rsi+278h]
 * 0000000140A0C2FD: call    KeGuardDispatchICall
 * 0000000140A0C302: mov     rbx, rax
 * 0000000140A0C305: jmp     short loc_140A0C30A
 * 0000000140A0C307: mov     rbx, r15
 * 0000000140A0C30A: test    rbx, rbx
 * 0000000140A0C30D: jnz     short loc_140A0C329
 * 0000000140A0C30F: mov     rax, [rsi+280h]
 * 0000000140A0C316: xor     ecx, ecx
 * 0000000140A0C318: call    KeGuardDispatchICall
 * 0000000140A0C31D: mov     rbx, rax
 * 0000000140A0C320: test    rax, rax
 * 0000000140A0C323: jz      loc_140A0C51C
 * 0000000140A0C329: mov     rax, [rsi+290h]
 * 0000000140A0C330: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A0C337: mov     rcx, rbx
 * 0000000140A0C33A: call    KeGuardDispatchICall
 * 0000000140A0C33F: mov     r14d, eax
 * 0000000140A0C342: test    eax, eax
 * 0000000140A0C344: jns     short loc_140A0C357
 * 0000000140A0C346: mov     rax, [rsi+288h]
 * 0000000140A0C34D: mov     rcx, rbx
 * 0000000140A0C350: call    KeGuardDispatchICall
 * 0000000140A0C355: jmp     short loc_140A0C3B9
 * 0000000140A0C357: mov     [rsi+980h], rbx
 * 0000000140A0C35E: mov     rax, [rsi+2B8h]
 * 0000000140A0C365: call    KeGuardDispatchICall
 * 0000000140A0C36A: mov     rbx, rax
 * 0000000140A0C36D: mov     rax, [rsi+2D8h]
 * 0000000140A0C374: mov     rcx, rbx
 * 0000000140A0C377: call    KeGuardDispatchICall
 * 0000000140A0C37C: mov     rdx, rax
 * 0000000140A0C37F: test    rax, rax
 * 0000000140A0C382: jnz     short loc_140A0C389
 * 0000000140A0C384: lea     ecx, [rax+4]
 * 0000000140A0C387: jmp     short loc_140A0C39B
 * 0000000140A0C389: mov     rax, [rsi+2E8h]
 * 0000000140A0C390: mov     rcx, rbx
 * 0000000140A0C393: call    KeGuardDispatchICall
 * 0000000140A0C398: mov     ecx, r15d
 * 0000000140A0C39B: mov     eax, [rsi+994h]
 * 0000000140A0C3A1: mov     r14d, r15d
 * 0000000140A0C3A4: and     eax, 0FFFFFFFBh
 * 0000000140A0C3A7: or      eax, ecx
 * 0000000140A0C3A9: mov     [rsi+994h], eax
 * 0000000140A0C3AF: add     dword ptr [rsi+828h], 10000h
 * 0000000140A0C3B9: test    r14d, r14d
 * 0000000140A0C3BC: js      loc_140A0C51C
 * 0000000140A0C3C2: mov     rax, [rsi+960h]
 * 0000000140A0C3C9: mov     rcx, [rax]
 * 0000000140A0C3CC: cmp     rcx, [rsi+968h]
 * 0000000140A0C3D3: jnz     loc_140A0C47A
 * 0000000140A0C3D9: mov     rax, [rsi+570h]
 * 0000000140A0C3E0: cmp     [rax+30h], r15d
 * 0000000140A0C3E4: jz      loc_140A0C47A
 * 0000000140A0C3EA: lock or [rsp+0CE0h+var_CE0], r15d
 * 0000000140A0C3EF: mov     rax, [rsi+960h]
 * 0000000140A0C3F6: mov     rcx, [rax]
 * 0000000140A0C3F9: cmp     rcx, [rsi+968h]
 * 0000000140A0C400: jnz     short loc_140A0C47A
 * 0000000140A0C402: mov     rax, [rsi+960h]
 * 0000000140A0C409: mov     rdx, [rax]
 * 0000000140A0C40C: mov     eax, [rsi+8F8h]
 * 0000000140A0C412: mov     rcx, [rsi+968h]
 * 0000000140A0C419: test    eax, eax
 * 0000000140A0C41B: jnz     short loc_140A0C47A
 * 0000000140A0C41D: mov     rax, [rsi+590h]
 * 0000000140A0C424: xor     rcx, rdx
 * 0000000140A0C427: mov     [rax+18h], rcx
 * 0000000140A0C42B: mov     eax, [rsi+8F8h]
 * 0000000140A0C431: mov     rcx, [rsi+968h]
 * 0000000140A0C438: test    eax, eax
 * 0000000140A0C43A: jnz     short loc_140A0C47A
 * 0000000140A0C43C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0C446: xor     edx, edx
 * 0000000140A0C448: add     rax, rsi
 * 0000000140A0C44B: mov     [rsi+900h], rax
 * 0000000140A0C452: mov     [rsi+908h], r15
 * 0000000140A0C459: mov     qword ptr [rsi+910h], 103h
 * 0000000140A0C464: mov     [rsi+918h], rcx
 * 0000000140A0C46B: mov     rcx, rsi
 * 0000000140A0C46E: mov     [rsi+8F8h], r12d
 * 0000000140A0C475: call    $$b8
 * 0000000140A0C47A: mov     ecx, 8000h
 * 0000000140A0C47F: test    [rsi+990h], ecx
 * 0000000140A0C485: jnz     short loc_140A0C494
 * 0000000140A0C487: cmp     [rsi+8F8h], r15d
 * 0000000140A0C48E: jnz     loc_140A0C51C
 * 0000000140A0C494: mov     rbx, [rsi+980h]
 * 0000000140A0C49B: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A0C4A2: mov     [rsi+980h], r15
 * 0000000140A0C4A9: mov     rcx, rbx
 * 0000000140A0C4AC: mov     rax, [rsi+298h]
 * 0000000140A0C4B3: call    KeGuardDispatchICall
 * 0000000140A0C4B8: mov     eax, [rsi+990h]
 * 0000000140A0C4BE: test    r12b, al
 * 0000000140A0C4C1: jz      short loc_140A0C501
 * 0000000140A0C4C3: and     eax, 0FFFFFFFEh
 * 0000000140A0C4C6: mov     rcx, rbx
 * 0000000140A0C4C9: mov     [rsi+990h], eax
 * 0000000140A0C4CF: mov     rax, [rsi+280h]
 * 0000000140A0C4D6: call    KeGuardDispatchICall
 * 0000000140A0C4DB: mov     rbx, rax
 * 0000000140A0C4DE: test    rax, rax
 * 0000000140A0C4E1: jz      short loc_140A0C4FA
 * 0000000140A0C4E3: mov     rax, [rsi+2A0h]
 * 0000000140A0C4EA: mov     rcx, rbx
 * 0000000140A0C4ED: call    KeGuardDispatchICall
 * 0000000140A0C4F2: mov     [rsi+970h], eax
 * 0000000140A0C4F8: jmp     short loc_140A0C501
 * 0000000140A0C4FA: mov     [rsi+970h], r13d
 * 0000000140A0C501: test    rbx, rbx
 * 0000000140A0C504: jz      short loc_140A0C51C
 * 0000000140A0C506: mov     rax, [rsi+288h]
 * 0000000140A0C50D: mov     rcx, rbx
 * 0000000140A0C510: jmp     loc_140A0C2CC
 * 0000000140A0C515: xor     r15d, r15d
 * 0000000140A0C518: lea     r12d, [r15+1]
 * 0000000140A0C51C: mov     [rsp+0CE0h+var_C80], rsi
 * 0000000140A0C521: test    dword ptr [rsi+990h], 2000000h
 * 0000000140A0C52B: jz      short loc_140A0C5AA
 * 0000000140A0C52D: mov     rbx, [rsi+998h]
 * 0000000140A0C534: mov     rax, [rsi+390h]
 * 0000000140A0C53B: mov     rcx, rbx
 * 0000000140A0C53E: call    KeGuardDispatchICall
 * 0000000140A0C543: test    eax, eax
 * 0000000140A0C545: jz      short loc_140A0C58E
 * 0000000140A0C547: cmp     [rsi+8F8h], r15d
 * 0000000140A0C54E: jnz     short loc_140A0C58E
 * 0000000140A0C550: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0C55A: xor     edx, edx
 * 0000000140A0C55C: add     rax, rsi
 * 0000000140A0C55F: mov     rcx, rsi
 * 0000000140A0C562: mov     [rsi+900h], rax
 * 0000000140A0C569: mov     [rsi+908h], r15
 * 0000000140A0C570: mov     qword ptr [rsi+910h], 110h
 * 0000000140A0C57B: mov     [rsi+918h], r15
 * 0000000140A0C582: mov     [rsi+8F8h], r12d
 * 0000000140A0C589: call    $$b8
 * 0000000140A0C58E: mov     rax, [rsi+388h]
 * 0000000140A0C595: lea     rdx, sub_140A13EF0
 * 0000000140A0C59C: xor     r9d, r9d
 * 0000000140A0C59F: mov     r8, rsi
 * 0000000140A0C5A2: mov     rcx, rbx
 * 0000000140A0C5A5: call    KeGuardDispatchICall
 * 0000000140A0C5AA: mov     edx, r12d
 * 0000000140A0C5AD: mov     rcx, rsi
 * 0000000140A0C5B0: call    $$b8
 * 0000000140A0C5B5: test    dword ptr [rsi+994h], 100h
 * 0000000140A0C5BF: jz      short loc_140A0C5CC
 * 0000000140A0C5C1: mov     rax, [rbp+0BE0h+var_BD0]
 * 0000000140A0C5C5: mov     [rbp+0BE8h], rax
 * 0000000140A0C5CC: mov     r9d, [rsi+990h]
 * 0000000140A0C5D3: mov     r8d, r9d
 * 0000000140A0C5D6: bt      r9d, 12h
 * 0000000140A0C5DB: jnb     loc_140A0C681
 * 0000000140A0C5E1: rdtsc
 * 0000000140A0C5E3: shl     rdx, 20h
 * 0000000140A0C5E7: or      rax, rdx
 * 0000000140A0C5EA: mov     rcx, rax
 * 0000000140A0C5ED: ror     rax, 3
 * 0000000140A0C5F1: xor     rcx, rax
 * 0000000140A0C5F4: mov     rax, 7010008004002001h
 * 0000000140A0C5FE: mul     rcx
 * 0000000140A0C601: mov     rcx, rdx
 * 0000000140A0C604: mov     [rbp+0BE0h+var_4C8], rdx
 * 0000000140A0C60B: xor     rcx, rax
 * 0000000140A0C60E: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140A0C618: mul     rcx
 * 0000000140A0C61B: shr     rdx, 3
 * 0000000140A0C61F: lea     rax, [rdx+rdx*4]
 * 0000000140A0C623: add     rax, rax
 * 0000000140A0C626: sub     rcx, rax
 * 0000000140A0C629: mov     eax, 2
 * 0000000140A0C62E: cmp     rcx, rax
 * 0000000140A0C631: jnb     short loc_140A0C681
 * 0000000140A0C633: cmp     [rsi+8F8h], r15d
 * 0000000140A0C63A: jnz     short loc_140A0C681
 * 0000000140A0C63C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0C646: xor     edx, edx
 * 0000000140A0C648: add     rax, rsi
 * 0000000140A0C64B: mov     rcx, rsi
 * 0000000140A0C64E: mov     [rsi+900h], rax
 * 0000000140A0C655: mov     [rsi+908h], r15
 * 0000000140A0C65C: mov     qword ptr [rsi+910h], 108h
 * 0000000140A0C667: mov     [rsi+918h], r15
 * 0000000140A0C66E: mov     [rsi+8F8h], r12d
 * 0000000140A0C675: call    $$b8
 * 0000000140A0C67A: mov     r8d, [rsi+990h]
 * 0000000140A0C681: mov     r10d, 8000h
 * 0000000140A0C687: bt      r8d, 1Eh
 * 0000000140A0C68C: jb      short loc_140A0C6FD
 * 0000000140A0C68E: test    r10d, r8d
 * 0000000140A0C691: jnz     short loc_140A0C69C
 * 0000000140A0C693: cmp     [rsi+8F8h], r15d
 * 0000000140A0C69A: jnz     short loc_140A0C6FD
 * 0000000140A0C69C: mov     rcx, [rbp+0BE0h+arg_0]
 * 0000000140A0C6A3: test    [rcx+990h], r10d
 * 0000000140A0C6AA: jnz     short loc_140A0C6FD
 * 0000000140A0C6AC: add     rcx, 8F8h
 * 0000000140A0C6B3: cmp     [rcx], r15d
 * 0000000140A0C6B6: jz      short loc_140A0C6FD
 * 0000000140A0C6B8: mov     r8d, 28h ; '('
 * 0000000140A0C6BE: lea     rdx, [rsi+8F8h]
 * 0000000140A0C6C5: lea     r9d, [r8-23h]
 * 0000000140A0C6C9: mov     rax, [rdx]
 * 0000000140A0C6CC: add     r8d, 0FFFFFFF8h
 * 0000000140A0C6D0: mov     [rcx], rax
 * 0000000140A0C6D3: add     rdx, 8
 * 0000000140A0C6D7: add     rcx, 8
 * 0000000140A0C6DB: sub     r9, r12
 * 0000000140A0C6DE: jnz     short loc_140A0C6C9
 * 0000000140A0C6E0: test    r8d, r8d
 * 0000000140A0C6E3: jz      short loc_140A0C6FD
 * 0000000140A0C6E5: mov     r15d, 0FFFFFFFFh
 * 0000000140A0C6EB: mov     al, [rdx]
 * 0000000140A0C6ED: add     rdx, r12
 * 0000000140A0C6F0: mov     [rcx], al
 * 0000000140A0C6F2: add     rcx, r12
 * 0000000140A0C6F5: add     r8d, r15d
 * 0000000140A0C6F8: jnz     short loc_140A0C6EB
 * 0000000140A0C6FA: xor     r15d, r15d
 * 0000000140A0C6FD: test    [rsi+990h], r10d
 * 0000000140A0C704: jnz     short loc_140A0C713
 * 0000000140A0C706: cmp     [rsi+8F8h], r15d
 * 0000000140A0C70D: jnz     loc_140A0D664
 * 0000000140A0C713: mov     eax, [rsi+0A28h]
 * 0000000140A0C719: test    eax, eax
 * 0000000140A0C71B: jz      loc_140A0D664
 * 0000000140A0C721: lea     r14, [rsi+rax]
 * 0000000140A0C725: mov     r11, [r14+8]
 * 0000000140A0C729: mov     [rbp+0BE0h+var_C20], r14
 * 0000000140A0C72D: test    r11, r11
 * 0000000140A0C730: jz      loc_140A0C9F4
 * 0000000140A0C736: mov     r9d, [r14+10h]
 * 0000000140A0C73A: mov     r8, r11
 * 0000000140A0C73D: add     [rsi+828h], r9d
 * 0000000140A0C744: mov     rax, r11
 * 0000000140A0C747: mov     r10d, [rsi+814h]
 * 0000000140A0C74E: mov     r12, [rsi+818h]
 * 0000000140A0C755: lea     rcx, [r11+r9]
 * 0000000140A0C759: cmp     r11, rcx
 * 0000000140A0C75C: jnb     short loc_140A0C76E
 * 0000000140A0C75E: mov     edx, 40h ; '@'
 * 0000000140A0C763: prefetchnta byte ptr [rax]
 * 0000000140A0C766: add     rax, rdx
 * 0000000140A0C769: cmp     rax, rcx
 * 0000000140A0C76C: jb      short loc_140A0C763
 * 0000000140A0C76E: mov     r15d, r9d
 * 0000000140A0C771: mov     rbx, r12
 * 0000000140A0C774: shr     r15d, 7
 * 0000000140A0C778: mov     r13d, 1
 * 0000000140A0C77E: test    r15d, r15d
 * 0000000140A0C781: jz      short loc_140A0C7EC
 * 0000000140A0C783: mov     rdi, 7010008004002001h
 * 0000000140A0C78D: mov     eax, 8
 * 0000000140A0C792: xor     rbx, [r8]
 * 0000000140A0C795: mov     ecx, r10d
 * 0000000140A0C798: rol     rbx, cl
 * 0000000140A0C79B: xor     rbx, [r8+8]
 * 0000000140A0C79F: add     r8, 10h
 * 0000000140A0C7A3: rol     rbx, cl
 * 0000000140A0C7A6: sub     rax, r13
 * 0000000140A0C7A9: jnz     short loc_140A0C792
 * 0000000140A0C7AB: mov     rcx, r8
 * 0000000140A0C7AE: sub     rcx, r11
 * 0000000140A0C7B1: xor     rcx, r12
 * 0000000140A0C7B4: mov     rax, rcx
 * 0000000140A0C7B7: rol     rax, 11h
 * 0000000140A0C7BB: xor     rcx, rax
 * 0000000140A0C7BE: mov     rax, rdi
 * 0000000140A0C7C1: mul     rcx
 * 0000000140A0C7C4: xor     r10d, edx
 * 0000000140A0C7C7: mov     [rbp+0BE0h+var_4C0], rdx
 * 0000000140A0C7CE: xor     r10d, eax
 * 0000000140A0C7D1: mov     edx, 0FFFFFFFFh
 * 0000000140A0C7D6: and     r10d, 3Fh
 * 0000000140A0C7DA: cmovz   r10d, r13d
 * 0000000140A0C7DE: add     r15d, edx
 * 0000000140A0C7E1: jnz     short loc_140A0C78D
 * 0000000140A0C7E3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0C7EA: jmp     short loc_140A0C7F1
 * 0000000140A0C7EC: mov     edx, 0FFFFFFFFh
 * 0000000140A0C7F1: and     r9d, 7Fh
 * 0000000140A0C7F5: cmp     r9d, 8
 * 0000000140A0C7F9: jb      short loc_140A0C818
 * 0000000140A0C7FB: mov     eax, r9d
 * 0000000140A0C7FE: shr     rax, 3
 * 0000000140A0C802: xor     rbx, [r8]
 * 0000000140A0C805: mov     ecx, r10d
 * 0000000140A0C808: rol     rbx, cl
 * 0000000140A0C80B: add     r8, 8
 * 0000000140A0C80F: add     r9d, 0FFFFFFF8h
 * 0000000140A0C813: sub     rax, r13
 * 0000000140A0C816: jnz     short loc_140A0C802
 * 0000000140A0C818: xor     r15d, r15d
 * 0000000140A0C81B: test    r9d, r9d
 * 0000000140A0C81E: jz      short loc_140A0C835
 * 0000000140A0C820: movzx   eax, byte ptr [r8]
 * 0000000140A0C824: mov     ecx, r10d
 * 0000000140A0C827: xor     rbx, rax
 * 0000000140A0C82A: add     r8, r13
 * 0000000140A0C82D: rol     rbx, cl
 * 0000000140A0C830: add     r9d, edx
 * 0000000140A0C833: jnz     short loc_140A0C820
 * 0000000140A0C835: mov     rax, rbx
 * 0000000140A0C838: jmp     short loc_140A0C83C
 * 0000000140A0C83A: xor     ebx, eax
 * 0000000140A0C83C: shr     rax, 1Fh
 * 0000000140A0C840: test    rax, rax
 * 0000000140A0C843: jnz     short loc_140A0C83A
 * 0000000140A0C845: btr     ebx, 1Fh
 * 0000000140A0C849: mov     r12d, r15d
 * 0000000140A0C84C: cmp     ebx, [r14+14h]
 * 0000000140A0C850: jz      loc_140A0C9BD
 * 0000000140A0C856: cmp     [r14], r15d
 * 0000000140A0C859: jnz     short loc_140A0C863
 * 0000000140A0C85B: cmp     [r14+18h], r15d
 * 0000000140A0C85F: cmovnz  r12d, r13d
 * 0000000140A0C863: mov     ecx, [r14+10h]
 * 0000000140A0C867: mov     rdx, [r14+8]
 * 0000000140A0C86B: test    rcx, rcx
 * 0000000140A0C86E: jz      loc_140A0C943
 * 0000000140A0C874: mov     eax, [rsi+994h]
 * 0000000140A0C87A: mov     r8d, 40h ; '@'
 * 0000000140A0C880: test    r8b, al
 * 0000000140A0C883: jz      loc_140A0C943
 * 0000000140A0C889: mov     rax, cr8
 * 0000000140A0C88D: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A0C894: mov     r8d, 2
 * 0000000140A0C89A: mov     cr8, r8
 * 0000000140A0C89E: dec     rcx
 * 0000000140A0C8A1: mov     r15, rdx
 * 0000000140A0C8A4: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140A0C8AB: add     rcx, rdx
 * 0000000140A0C8AE: or      rcx, 0FFFh
 * 0000000140A0C8B5: mov     [rsp+0CE0h+var_C70], rcx
 * 0000000140A0C8BA: lea     rcx, [r15-1]
 * 0000000140A0C8BE: mov     [rbp+0BE0h+var_BD0], rcx
 * 0000000140A0C8C2: movzx   r13d, al
 * 0000000140A0C8C6: mov     rax, [rsi+468h]
 * 0000000140A0C8CD: xor     edx, edx
 * 0000000140A0C8CF: mov     rcx, r15
 * 0000000140A0C8D2: call    KeGuardDispatchICall
 * 0000000140A0C8D7: cmp     eax, 0C000022Dh
 * 0000000140A0C8DC: jnz     short loc_140A0C90B
 * 0000000140A0C8DE: test    r12d, r12d
 * 0000000140A0C8E1: jnz     short loc_140A0C93C
 * 0000000140A0C8E3: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A0C8EA: lea     ecx, [r12+1]
 * 0000000140A0C8EF: cmp     al, cl
 * 0000000140A0C8F1: ja      short loc_140A0C916
 * 0000000140A0C8F3: movzx   r13d, al
 * 0000000140A0C8F7: mov     cr8, r13
 * 0000000140A0C8FB: mov     al, [r15]
 * 0000000140A0C8FE: mov     rax, cr8
 * 0000000140A0C902: lea     eax, [rcx+1]
 * 0000000140A0C905: mov     cr8, rax
 * 0000000140A0C909: jmp     short loc_140A0C8C6
 * 0000000140A0C90B: test    eax, eax
 * 0000000140A0C90D: js      short loc_140A0C93C
 * 0000000140A0C90F: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A0C916: mov     rcx, [rbp+0BE0h+var_BD0]
 * 0000000140A0C91A: mov     edx, 1000h
 * 0000000140A0C91F: add     rcx, rdx
 * 0000000140A0C922: add     r15, rdx
 * 0000000140A0C925: mov     [rbp+0BE0h+var_BD0], rcx
 * 0000000140A0C929: cmp     rcx, [rsp+0CE0h+var_C70]
 * 0000000140A0C92E: jnz     short loc_140A0C8C2
 * 0000000140A0C930: mov     cr8, r13
 * 0000000140A0C934: xor     r15d, r15d
 * 0000000140A0C937: jmp     loc_140A0C9BD
 * 0000000140A0C93C: mov     cr8, r13
 * 0000000140A0C940: xor     r15d, r15d
 * 0000000140A0C943: mov     eax, [rsi+8F8h]
 * 0000000140A0C949: mov     edx, [r14+14h]
 * 0000000140A0C94D: test    eax, eax
 * 0000000140A0C94F: jnz     short loc_140A0C967
 * 0000000140A0C951: mov     rax, [rsi+590h]
 * 0000000140A0C958: mov     ecx, ebx
 * 0000000140A0C95A: xor     rcx, rdx
 * 0000000140A0C95D: mov     [rax+18h], rcx
 * 0000000140A0C961: mov     eax, [rsi+8F8h]
 * 0000000140A0C967: mov     rcx, [r14+8]
 * 0000000140A0C96B: test    eax, eax
 * 0000000140A0C96D: jnz     short loc_140A0C9BD
 * 0000000140A0C96F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0C979: xor     edx, edx
 * 0000000140A0C97B: add     rax, rsi
 * 0000000140A0C97E: mov     [rsi+900h], rax
 * 0000000140A0C985: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0C98F: add     rax, r14
 * 0000000140A0C992: mov     [rsi+908h], rax
 * 0000000140A0C999: movsxd  rax, dword ptr [r14]
 * 0000000140A0C99C: mov     [rsi+910h], rax
 * 0000000140A0C9A3: mov     eax, 1
 * 0000000140A0C9A8: mov     [rsi+918h], rcx
 * 0000000140A0C9AF: mov     rcx, rsi
 * 0000000140A0C9B2: mov     [rsi+8F8h], eax
 * 0000000140A0C9B8: call    $$b8
 * 0000000140A0C9BD: mov     rcx, [r14+18h]
 * 0000000140A0C9C1: mov     rax, [rsi+100h]
 * 0000000140A0C9C8: call    KeGuardDispatchICall
 * 0000000140A0C9CD: mov     [r14+8], r15
 * 0000000140A0C9D1: mov     [r14+10h], r15d
 * 0000000140A0C9D5: mov     rcx, [rsi+818h]
 * 0000000140A0C9DC: mov     rax, rcx
 * 0000000140A0C9DF: jmp     short loc_140A0C9E3
 * 0000000140A0C9E1: xor     ecx, eax
 * 0000000140A0C9E3: shr     rax, 1Fh
 * 0000000140A0C9E7: test    rax, rax
 * 0000000140A0C9EA: jnz     short loc_140A0C9E1
 * 0000000140A0C9EC: btr     ecx, 1Fh
 * 0000000140A0C9F0: mov     [r14+14h], ecx
 * 0000000140A0C9F4: rdtsc
 * 0000000140A0C9F6: shl     rdx, 20h
 * 0000000140A0C9FA: mov     r9, 7010008004002001h
 * 0000000140A0CA04: or      rax, rdx
 * 0000000140A0CA07: mov     rcx, rax
 * 0000000140A0CA0A: ror     rax, 3
 * 0000000140A0CA0E: xor     rcx, rax
 * 0000000140A0CA11: mov     rax, r9
 * 0000000140A0CA14: mul     rcx
 * 0000000140A0CA17: mov     rcx, rdx
 * 0000000140A0CA1A: mov     [rbp+0BE0h+var_4B8], rdx
 * 0000000140A0CA21: xor     rcx, rax
 * 0000000140A0CA24: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A0CA2E: mul     rcx
 * 0000000140A0CA31: shr     rdx, 1
 * 0000000140A0CA34: lea     rax, [rdx+rdx*2]
 * 0000000140A0CA38: cmp     rcx, rax
 * 0000000140A0CA3B: jnz     loc_140A0D670
 * 0000000140A0CA41: mov     r8d, [rsi+810h]
 * 0000000140A0CA48: lea     r12, [r14+18h]
 * 0000000140A0CA4C: rdtsc
 * 0000000140A0CA4E: shl     rdx, 20h
 * 0000000140A0CA52: or      rax, rdx
 * 0000000140A0CA55: mov     rcx, rax
 * 0000000140A0CA58: ror     rax, 3
 * 0000000140A0CA5C: xor     rcx, rax
 * 0000000140A0CA5F: mov     rax, r9
 * 0000000140A0CA62: mul     rcx
 * 0000000140A0CA65: mov     rbx, rdx
 * 0000000140A0CA68: mov     [rbp+0BE0h+var_4B0], rdx
 * 0000000140A0CA6F: xor     ebx, eax
 * 0000000140A0CA71: and     ebx, 7FFh
 * 0000000140A0CA77: rdtsc
 * 0000000140A0CA79: shl     rdx, 20h
 * 0000000140A0CA7D: or      rax, rdx
 * 0000000140A0CA80: mov     rcx, rax
 * 0000000140A0CA83: ror     rax, 3
 * 0000000140A0CA87: xor     rcx, rax
 * 0000000140A0CA8A: mov     rax, r9
 * 0000000140A0CA8D: mul     rcx
 * 0000000140A0CA90: mov     ecx, [rsi+990h]
 * 0000000140A0CA96: lea     r9d, [rbx+1]
 * 0000000140A0CA9A: xor     rax, rdx
 * 0000000140A0CA9D: mov     [rbp+0BE0h+var_4A8], rdx
 * 0000000140A0CAA4: xor     edx, edx
 * 0000000140A0CAA6: shr     ecx, 13h
 * 0000000140A0CAA9: div     r9
 * 0000000140A0CAAC: mov     rax, [rsi+0F8h]
 * 0000000140A0CAB3: and     ecx, 200h
 * 0000000140A0CAB9: mov     r15, rdx
 * 0000000140A0CABC: lea     edx, [rbx+0AA0h]
 * 0000000140A0CAC2: call    KeGuardDispatchICall
 * 0000000140A0CAC7: mov     r11, rax
 * 0000000140A0CACA: test    rax, rax
 * 0000000140A0CACD: jnz     loc_140A0CE7E
 * 0000000140A0CAD3: lea     r15d, [rax+1]
 * 0000000140A0CAD7: add     [rsi+0A18h], r15d
 * 0000000140A0CADE: mov     r9, 7010008004002001h
 * 0000000140A0CAE8: mov     r13d, [rsi+990h]
 * 0000000140A0CAEF: mov     [rbp+0BE0h+var_C38], r11d
 * 0000000140A0CAF3: mov     [rbp+0BE0h+var_C40], r11
 * 0000000140A0CAF7: mov     dword ptr [rbp+0BE0h+arg_8], r13d
 * 0000000140A0CAFE: bt      r13d, 1Eh
 * 0000000140A0CB03: jb      loc_140A0DA53
 * 0000000140A0CB09: mov     r14, [rbp+0BE0h+arg_0]
 * 0000000140A0CB10: cmp     rsi, r14
 * 0000000140A0CB13: jnz     loc_140A0DB56
 * 0000000140A0CB19: mov     eax, 8000h
 * 0000000140A0CB1E: test    eax, r13d
 * 0000000140A0CB21: jnz     short loc_140A0CB30
 * 0000000140A0CB23: cmp     [rsi+8F8h], r11d
 * 0000000140A0CB2A: jnz     loc_140A0D811
 * 0000000140A0CB30: mov     r8d, [r14+924h]
 * 0000000140A0CB37: mov     rcx, r14
 * 0000000140A0CB3A: mov     edx, [r14+7E4h]
 * 0000000140A0CB41: call    sub_140A11B30
 * 0000000140A0CB46: mov     rsi, rax
 * 0000000140A0CB49: test    rax, rax
 * 0000000140A0CB4C: jz      loc_140A0D811
 * 0000000140A0CB52: mov     ecx, [rsi+954h]
 * 0000000140A0CB58: mov     r15, 7010008004002001h
 * 0000000140A0CB62: mov     r12d, [rsi+0A2Ch]
 * 0000000140A0CB69: mov     rax, [rax+7C8h]
 * 0000000140A0CB70: add     r12d, 0FFFFFF38h
 * 0000000140A0CB77: mov     [rbp+0BE0h+var_C28], ecx
 * 0000000140A0CB7A: mov     ecx, [rsi+990h]
 * 0000000140A0CB80: mov     [rbp+0BE0h+var_C38], ecx
 * 0000000140A0CB83: mov     rcx, [rsi+4E8h]
 * 0000000140A0CB8A: shr     r12d, 3
 * 0000000140A0CB8E: mov     [rbp+0BE0h+var_C30], rcx
 * 0000000140A0CB92: mov     rcx, [rsi+5C0h]
 * 0000000140A0CB99: mov     [rbp+0BE0h+var_BD0], rcx
 * 0000000140A0CB9D: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A0CBA1: mov     dword ptr [rbp+0BE0h+arg_8], r12d
 * 0000000140A0CBA8: mov     [rsi+0C4h], r12d
 * 0000000140A0CBAF: rdtsc
 * 0000000140A0CBB1: shl     rdx, 20h
 * 0000000140A0CBB5: or      rax, rdx
 * 0000000140A0CBB8: mov     rcx, rax
 * 0000000140A0CBBB: ror     rax, 3
 * 0000000140A0CBBF: xor     rcx, rax
 * 0000000140A0CBC2: mov     rax, r15
 * 0000000140A0CBC5: mul     rcx
 * 0000000140A0CBC8: mov     rbx, rdx
 * 0000000140A0CBCB: mov     [rbp+0BE0h+var_460], rdx
 * 0000000140A0CBD2: xor     rbx, rax
 * 0000000140A0CBD5: jz      short loc_140A0CBAF
 * 0000000140A0CBD7: mov     rax, [rsi+7B8h]
 * 0000000140A0CBDE: lea     r14, [rsi+798h]
 * 0000000140A0CBE5: mov     r11d, 20h ; ' '
 * 0000000140A0CBEB: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A0CBF0: mov     eax, [rsi+828h]
 * 0000000140A0CBF6: lea     rdx, [rbp+0BE0h+var_D0]
 * 0000000140A0CBFD: mov     [rbp+0BE0h+var_BE8], eax
 * 0000000140A0CC00: mov     r8d, r11d
 * 0000000140A0CC03: mov     rcx, r14
 * 0000000140A0CC06: xor     r15d, r15d
 * 0000000140A0CC09: lea     r10d, [r11-1Ch]
 * 0000000140A0CC0D: mov     r9d, r10d
 * 0000000140A0CC10: lea     r13d, [r11-1Fh]
 * 0000000140A0CC14: mov     rax, [rcx]
 * 0000000140A0CC17: add     r8d, 0FFFFFFF8h
 * 0000000140A0CC1B: mov     [rdx], rax
 * 0000000140A0CC1E: add     rcx, 8
 * 0000000140A0CC22: add     rdx, 8
 * 0000000140A0CC26: sub     r9, r13
 * 0000000140A0CC29: jnz     short loc_140A0CC14
 * 0000000140A0CC2B: test    r8d, r8d
 * 0000000140A0CC2E: jz      short loc_140A0CC48
 * 0000000140A0CC30: mov     r15d, 0FFFFFFFFh
 * 0000000140A0CC36: mov     al, [rcx]
 * 0000000140A0CC38: add     rcx, r13
 * 0000000140A0CC3B: mov     [rdx], al
 * 0000000140A0CC3D: add     rdx, r13
 * 0000000140A0CC40: add     r8d, r15d
 * 0000000140A0CC43: jnz     short loc_140A0CC36
 * 0000000140A0CC45: xor     r15d, r15d
 * 0000000140A0CC48: mov     [rsi+7B8h], r15
 * 0000000140A0CC4F: mov     ecx, r11d
 * 0000000140A0CC52: mov     [rsi+828h], r15d
 * 0000000140A0CC59: mov     rax, r14
 * 0000000140A0CC5C: mov     rdx, r10
 * 0000000140A0CC5F: mov     [rax], r15
 * 0000000140A0CC62: add     ecx, 0FFFFFFF8h
 * 0000000140A0CC65: add     rax, 8
 * 0000000140A0CC69: sub     rdx, r13
 * 0000000140A0CC6C: jnz     short loc_140A0CC5F
 * 0000000140A0CC6E: mov     edx, 0FFFFFFFFh
 * 0000000140A0CC73: test    ecx, ecx
 * 0000000140A0CC75: jz      short loc_140A0CC81
 * 0000000140A0CC77: mov     [rax], r15b
 * 0000000140A0CC7A: add     rax, r13
 * 0000000140A0CC7D: add     ecx, edx
 * 0000000140A0CC7F: jnz     short loc_140A0CC77
 * 0000000140A0CC81: mov     eax, [rsi+7E4h]
 * 0000000140A0CC87: mov     r10, rsi
 * 0000000140A0CC8A: add     [rsi+828h], eax
 * 0000000140A0CC90: mov     rax, rsi
 * 0000000140A0CC93: mov     r11d, [rsi+7E4h]
 * 0000000140A0CC9A: mov     r9d, [rsi+814h]
 * 0000000140A0CCA1: mov     r13, [rsi+818h]
 * 0000000140A0CCA8: lea     rcx, [rsi+r11]
 * 0000000140A0CCAC: cmp     rsi, rcx
 * 0000000140A0CCAF: jnb     short loc_140A0CCC2
 * 0000000140A0CCB1: mov     r8d, 40h ; '@'
 * 0000000140A0CCB7: prefetchnta byte ptr [rax]
 * 0000000140A0CCBA: add     rax, r8
 * 0000000140A0CCBD: cmp     rax, rcx
 * 0000000140A0CCC0: jb      short loc_140A0CCB7
 * 0000000140A0CCC2: mov     r15d, r11d
 * 0000000140A0CCC5: mov     r8, r13
 * 0000000140A0CCC8: shr     r15d, 7
 * 0000000140A0CCCC: test    r15d, r15d
 * 0000000140A0CCCF: jz      short loc_140A0CD4B
 * 0000000140A0CCD1: mov     r12, 7010008004002001h
 * 0000000140A0CCDB: mov     edx, 8
 * 0000000140A0CCE0: lea     edi, [rdx-7]
 * 0000000140A0CCE3: mov     rax, [r10]
 * 0000000140A0CCE6: mov     ecx, r9d
 * 0000000140A0CCE9: xor     rax, r8
 * 0000000140A0CCEC: mov     r8, [r10+8]
 * 0000000140A0CCF0: rol     rax, cl
 * 0000000140A0CCF3: add     r10, 10h
 * 0000000140A0CCF7: xor     r8, rax
 * 0000000140A0CCFA: rol     r8, cl
 * 0000000140A0CCFD: sub     rdx, rdi
 * 0000000140A0CD00: jnz     short loc_140A0CCE3
 * 0000000140A0CD02: mov     rcx, r10
 * 0000000140A0CD05: sub     rcx, rsi
 * 0000000140A0CD08: xor     rcx, r13
 * 0000000140A0CD0B: mov     rax, rcx
 * 0000000140A0CD0E: rol     rax, 11h
 * 0000000140A0CD12: xor     rcx, rax
 * 0000000140A0CD15: mov     rax, r12
 * 0000000140A0CD18: mul     rcx
 * 0000000140A0CD1B: xor     r9d, eax
 * 0000000140A0CD1E: mov     [rbp+0BE0h+var_458], rdx
 * 0000000140A0CD25: xor     r9d, edx
 * 0000000140A0CD28: mov     rax, rdi
 * 0000000140A0CD2B: and     r9d, 3Fh
 * 0000000140A0CD2F: mov     edx, 0FFFFFFFFh
 * 0000000140A0CD34: cmovz   r9d, eax
 * 0000000140A0CD38: add     r15d, edx
 * 0000000140A0CD3B: jnz     short loc_140A0CCDB
 * 0000000140A0CD3D: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0CD44: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0CD4B: and     r11d, 7Fh
 * 0000000140A0CD4F: mov     r13d, 1
 * 0000000140A0CD55: cmp     r11d, 8
 * 0000000140A0CD59: jb      short loc_140A0CD7D
 * 0000000140A0CD5B: mov     edx, r11d
 * 0000000140A0CD5E: shr     rdx, 3
 * 0000000140A0CD62: xor     r8, [r10]
 * 0000000140A0CD65: mov     ecx, r9d
 * 0000000140A0CD68: rol     r8, cl
 * 0000000140A0CD6B: add     r10, 8
 * 0000000140A0CD6F: add     r11d, 0FFFFFFF8h
 * 0000000140A0CD73: sub     rdx, r13
 * 0000000140A0CD76: jnz     short loc_140A0CD62
 * 0000000140A0CD78: mov     edx, 0FFFFFFFFh
 * 0000000140A0CD7D: test    r11d, r11d
 * 0000000140A0CD80: jz      short loc_140A0CD97
 * 0000000140A0CD82: movzx   eax, byte ptr [r10]
 * 0000000140A0CD86: mov     ecx, r9d
 * 0000000140A0CD89: xor     r8, rax
 * 0000000140A0CD8C: add     r10, r13
 * 0000000140A0CD8F: rol     r8, cl
 * 0000000140A0CD92: add     r11d, edx
 * 0000000140A0CD95: jnz     short loc_140A0CD82
 * 0000000140A0CD97: mov     rax, [rsp+0CE0h+var_C70]
 * 0000000140A0CD9C: lea     rcx, [rbp+0BE0h+var_D0]
 * 0000000140A0CDA3: mov     r9d, 4
 * 0000000140A0CDA9: mov     [rsi+7B8h], rax
 * 0000000140A0CDB0: mov     eax, [rbp+0BE0h+var_BE8]
 * 0000000140A0CDB3: mov     edx, r9d
 * 0000000140A0CDB6: add     [rsi+828h], eax
 * 0000000140A0CDBC: lea     r10d, [r9+1Ch]
 * 0000000140A0CDC0: mov     rax, [rcx]
 * 0000000140A0CDC3: add     r10d, 0FFFFFFF8h
 * 0000000140A0CDC7: mov     [r14], rax
 * 0000000140A0CDCA: add     rcx, 8
 * 0000000140A0CDCE: add     r14, 8
 * 0000000140A0CDD2: sub     rdx, r13
 * 0000000140A0CDD5: jnz     short loc_140A0CDC0
 * 0000000140A0CDD7: xor     r11d, r11d
 * 0000000140A0CDDA: test    r10d, r10d
 * 0000000140A0CDDD: jz      short loc_140A0CDF8
 * 0000000140A0CDDF: mov     r11d, 0FFFFFFFFh
 * 0000000140A0CDE5: mov     al, [rcx]
 * 0000000140A0CDE7: add     rcx, r13
 * 0000000140A0CDEA: mov     [r14], al
 * 0000000140A0CDED: add     r14, r13
 * 0000000140A0CDF0: add     r10d, r11d
 * 0000000140A0CDF3: jnz     short loc_140A0CDE5
 * 0000000140A0CDF5: xor     r11d, r11d
 * 0000000140A0CDF8: mov     [rsi+7B8h], r8
 * 0000000140A0CDFF: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A0CE09: jnz     loc_140A0E037
 * 0000000140A0CE0F: mov     eax, r11d
 * 0000000140A0CE12: mov     rcx, rsi
 * 0000000140A0CE15: mov     r11d, 19h
 * 0000000140A0CE1B: xor     [rcx], rbx
 * 0000000140A0CE1E: add     eax, r13d
 * 0000000140A0CE21: lea     rcx, [rcx+8]
 * 0000000140A0CE25: cmp     eax, r11d
 * 0000000140A0CE28: jb      short loc_140A0CE1B
 * 0000000140A0CE2A: xor     r15d, r15d
 * 0000000140A0CE2D: mov     [rbp+0BE0h+var_A00], rbx
 * 0000000140A0CE34: mov     r8d, r12d
 * 0000000140A0CE37: test    r12d, r12d
 * 0000000140A0CE3A: jz      loc_140A0D67C
 * 0000000140A0CE40: mov     edx, r12d
 * 0000000140A0CE43: dec     rdx
 * 0000000140A0CE46: lea     rdx, [rcx+rdx*8]
 * 0000000140A0CE4A: xor     [rdx], rbx
 * 0000000140A0CE4D: lea     rax, [rbp+0BE0h+var_A00]
 * 0000000140A0CE54: mov     ecx, r8d
 * 0000000140A0CE57: lea     rdx, [rdx-8]
 * 0000000140A0CE5B: ror     rbx, cl
 * 0000000140A0CE5E: mov     [rbp+0BE0h+var_A00], rbx
 * 0000000140A0CE65: and     ebx, 3Fh
 * 0000000140A0CE68: btc     [rax], rbx
 * 0000000140A0CE6C: sub     r8d, r13d
 * 0000000140A0CE6F: jz      loc_140A0D67C
 * 0000000140A0CE75: mov     rbx, [rbp+0BE0h+var_A00]
 * 0000000140A0CE7C: jmp     short loc_140A0CE4A
 * 0000000140A0CE7E: mov     r9d, r15d
 * 0000000140A0CE81: mov     r8, r11
 * 0000000140A0CE84: cmp     r15d, 8
 * 0000000140A0CE88: jb      short loc_140A0CED8
 * 0000000140A0CE8A: mov     r10d, r15d
 * 0000000140A0CE8D: mov     r13d, 1
 * 0000000140A0CE93: shr     r10, 3
 * 0000000140A0CE97: mov     r14, 7010008004002001h
 * 0000000140A0CEA1: rdtsc
 * 0000000140A0CEA3: shl     rdx, 20h
 * 0000000140A0CEA7: add     r9d, 0FFFFFFF8h
 * 0000000140A0CEAB: or      rax, rdx
 * 0000000140A0CEAE: mov     rcx, rax
 * 0000000140A0CEB1: ror     rax, 3
 * 0000000140A0CEB5: xor     rcx, rax
 * 0000000140A0CEB8: mov     rax, r14
 * 0000000140A0CEBB: mul     rcx
 * 0000000140A0CEBE: mov     [rbp+0BE0h+var_4A0], rdx
 * 0000000140A0CEC5: xor     rdx, rax
 * 0000000140A0CEC8: mov     [r8], rdx
 * 0000000140A0CECB: add     r8, 8
 * 0000000140A0CECF: sub     r10, r13
 * 0000000140A0CED2: jnz     short loc_140A0CEA1
 * 0000000140A0CED4: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0CED8: test    r9d, r9d
 * 0000000140A0CEDB: jz      short loc_140A0CF20
 * 0000000140A0CEDD: rdtsc
 * 0000000140A0CEDF: shl     rdx, 20h
 * 0000000140A0CEE3: or      rax, rdx
 * 0000000140A0CEE6: mov     rcx, rax
 * 0000000140A0CEE9: ror     rax, 3
 * 0000000140A0CEED: xor     rcx, rax
 * 0000000140A0CEF0: mov     rax, 7010008004002001h
 * 0000000140A0CEFA: mul     rcx
 * 0000000140A0CEFD: mov     ecx, 0FFFFFFFFh
 * 0000000140A0CF02: mov     [rbp+0BE0h+var_498], rdx
 * 0000000140A0CF09: xor     rdx, rax
 * 0000000140A0CF0C: mov     eax, 1
 * 0000000140A0CF11: mov     [r8], dl
 * 0000000140A0CF14: add     r8, rax
 * 0000000140A0CF17: shr     rdx, 8
 * 0000000140A0CF1B: add     r9d, ecx
 * 0000000140A0CF1E: jnz     short loc_140A0CF11
 * 0000000140A0CF20: mov     r9d, r15d
 * 0000000140A0CF23: sub     ebx, r15d
 * 0000000140A0CF26: add     r9, r11
 * 0000000140A0CF29: mov     r15d, 1
 * 0000000140A0CF2F: lea     r8, [r9+0AA0h]
 * 0000000140A0CF36: cmp     ebx, 8
 * 0000000140A0CF39: jb      short loc_140A0CF7E
 * 0000000140A0CF3B: mov     r10d, ebx
 * 0000000140A0CF3E: mov     r13, 7010008004002001h
 * 0000000140A0CF48: shr     r10, 3
 * 0000000140A0CF4C: rdtsc
 * 0000000140A0CF4E: shl     rdx, 20h
 * 0000000140A0CF52: add     ebx, 0FFFFFFF8h
 * 0000000140A0CF55: or      rax, rdx
 * 0000000140A0CF58: mov     rcx, rax
 * 0000000140A0CF5B: ror     rax, 3
 * 0000000140A0CF5F: xor     rcx, rax
 * 0000000140A0CF62: mov     rax, r13
 * 0000000140A0CF65: mul     rcx
 * 0000000140A0CF68: mov     [rbp+0BE0h+var_490], rdx
 * 0000000140A0CF6F: xor     rdx, rax
 * 0000000140A0CF72: mov     [r8], rdx
 * 0000000140A0CF75: add     r8, 8
 * 0000000140A0CF79: sub     r10, r15
 * 0000000140A0CF7C: jnz     short loc_140A0CF4C
 * 0000000140A0CF7E: test    ebx, ebx
 * 0000000140A0CF80: jz      short loc_140A0CFBF
 * 0000000140A0CF82: rdtsc
 * 0000000140A0CF84: shl     rdx, 20h
 * 0000000140A0CF88: or      rax, rdx
 * 0000000140A0CF8B: mov     rcx, rax
 * 0000000140A0CF8E: ror     rax, 3
 * 0000000140A0CF92: xor     rcx, rax
 * 0000000140A0CF95: mov     rax, 7010008004002001h
 * 0000000140A0CF9F: mul     rcx
 * 0000000140A0CFA2: mov     [rbp+0BE0h+var_488], rdx
 * 0000000140A0CFA9: xor     rdx, rax
 * 0000000140A0CFAC: mov     eax, 0FFFFFFFFh
 * 0000000140A0CFB1: mov     [r8], dl
 * 0000000140A0CFB4: add     r8, r15
 * 0000000140A0CFB7: shr     rdx, 8
 * 0000000140A0CFBB: add     ebx, eax
 * 0000000140A0CFBD: jnz     short loc_140A0CFB1
 * 0000000140A0CFBF: test    r12, r12
 * 0000000140A0CFC2: jz      short loc_140A0CFC8
 * 0000000140A0CFC4: mov     [r12], r11
 * 0000000140A0CFC8: xor     r11d, r11d
 * 0000000140A0CFCB: test    r9, r9
 * 0000000140A0CFCE: jz      loc_140A0CADE
 * 0000000140A0CFD4: mov     r10d, 0AA0h
 * 0000000140A0CFDA: mov     [r14+8], r9
 * 0000000140A0CFDE: mov     [r14+10h], r10d
 * 0000000140A0CFE2: mov     r8d, r10d
 * 0000000140A0CFE5: mov     r14d, 154h
 * 0000000140A0CFEB: mov     rcx, rsi
 * 0000000140A0CFEE: mov     rdx, r9
 * 0000000140A0CFF1: mov     rax, [rcx]
 * 0000000140A0CFF4: add     r8d, 0FFFFFFF8h
 * 0000000140A0CFF8: mov     [rdx], rax
 * 0000000140A0CFFB: add     rcx, 8
 * 0000000140A0CFFF: add     rdx, 8
 * 0000000140A0D003: sub     r14, r15
 * 0000000140A0D006: jnz     short loc_140A0CFF1
 * 0000000140A0D008: test    r8d, r8d
 * 0000000140A0D00B: jz      short loc_140A0D028
 * 0000000140A0D00D: mov     r10d, 0FFFFFFFFh
 * 0000000140A0D013: mov     al, [rcx]
 * 0000000140A0D015: add     rcx, r15
 * 0000000140A0D018: mov     [rdx], al
 * 0000000140A0D01A: add     rdx, r15
 * 0000000140A0D01D: add     r8d, r10d
 * 0000000140A0D020: jnz     short loc_140A0D013
 * 0000000140A0D022: mov     r10d, 0AA0h
 * 0000000140A0D028: bts     dword ptr [r9+990h], 13h
 * 0000000140A0D031: mov     r14, 7010008004002001h
 * 0000000140A0D03B: mov     [r9+7E4h], r10d
 * 0000000140A0D042: mov     [r9+808h], r10d
 * 0000000140A0D049: and     dword ptr [r9+990h], 0FFFFFFFDh
 * 0000000140A0D051: mov     eax, [r9+7E4h]
 * 0000000140A0D058: mov     [r9+0A2Ch], eax
 * 0000000140A0D05F: add     eax, 0FFFFFF38h
 * 0000000140A0D064: mov     ecx, [r9+954h]
 * 0000000140A0D06B: mov     [rbp+0BE0h+var_C28], ecx
 * 0000000140A0D06E: mov     ecx, [r9+990h]
 * 0000000140A0D075: mov     dword ptr [rbp+0BE0h+arg_8], ecx
 * 0000000140A0D07B: mov     rcx, [r9+4E8h]
 * 0000000140A0D082: shr     eax, 3
 * 0000000140A0D085: mov     [rbp+0BE0h+var_C30], rcx
 * 0000000140A0D089: mov     rcx, [r9+5C0h]
 * 0000000140A0D090: mov     [rbp+0BE0h+var_C40], rcx
 * 0000000140A0D094: mov     [rbp+0BE0h+var_C38], eax
 * 0000000140A0D097: mov     [r9+0C4h], eax
 * 0000000140A0D09E: rdtsc
 * 0000000140A0D0A0: shl     rdx, 20h
 * 0000000140A0D0A4: or      rax, rdx
 * 0000000140A0D0A7: mov     rcx, rax
 * 0000000140A0D0AA: ror     rax, 3
 * 0000000140A0D0AE: xor     rcx, rax
 * 0000000140A0D0B1: mov     rax, r14
 * 0000000140A0D0B4: mul     rcx
 * 0000000140A0D0B7: mov     rbx, rdx
 * 0000000140A0D0BA: mov     [rbp+0BE0h+var_480], rdx
 * 0000000140A0D0C1: xor     rbx, rax
 * 0000000140A0D0C4: jz      short loc_140A0D09E
 * 0000000140A0D0C6: mov     rax, [r9+7B8h]
 * 0000000140A0D0CD: lea     r12, [r9+798h]
 * 0000000140A0D0D4: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0D0D8: lea     rdx, [rbp+0BE0h+var_F0]
 * 0000000140A0D0DF: mov     r15d, 20h ; ' '
 * 0000000140A0D0E5: mov     [rbp+0BE0h+var_BD0], rax
 * 0000000140A0D0E9: mov     eax, [r9+828h]
 * 0000000140A0D0F0: mov     r8d, r15d
 * 0000000140A0D0F3: mov     [rbp+0BE0h+var_BE8], eax
 * 0000000140A0D0F6: mov     rcx, r12
 * 0000000140A0D0F9: lea     r11d, [r15-1Ch]
 * 0000000140A0D0FD: mov     r10d, r11d
 * 0000000140A0D100: lea     r13d, [r15-1Fh]
 * 0000000140A0D104: mov     rax, [rcx]
 * 0000000140A0D107: add     r8d, 0FFFFFFF8h
 * 0000000140A0D10B: mov     [rdx], rax
 * 0000000140A0D10E: add     rcx, 8
 * 0000000140A0D112: add     rdx, 8
 * 0000000140A0D116: sub     r10, r13
 * 0000000140A0D119: jnz     short loc_140A0D104
 * 0000000140A0D11B: test    r8d, r8d
 * 0000000140A0D11E: jz      short loc_140A0D138
 * 0000000140A0D120: mov     r10d, 0FFFFFFFFh
 * 0000000140A0D126: mov     al, [rcx]
 * 0000000140A0D128: add     rcx, r13
 * 0000000140A0D12B: mov     [rdx], al
 * 0000000140A0D12D: add     rdx, r13
 * 0000000140A0D130: add     r8d, r10d
 * 0000000140A0D133: jnz     short loc_140A0D126
 * 0000000140A0D135: xor     r10d, r10d
 * 0000000140A0D138: mov     [r9+7B8h], r10
 * 0000000140A0D13F: mov     ecx, r15d
 * 0000000140A0D142: mov     [r9+828h], r10d
 * 0000000140A0D149: mov     rax, r12
 * 0000000140A0D14C: mov     rdx, r11
 * 0000000140A0D14F: mov     [rax], r10
 * 0000000140A0D152: add     ecx, 0FFFFFFF8h
 * 0000000140A0D155: add     rax, 8
 * 0000000140A0D159: sub     rdx, r13
 * 0000000140A0D15C: jnz     short loc_140A0D14F
 * 0000000140A0D15E: test    ecx, ecx
 * 0000000140A0D160: jz      short loc_140A0D171
 * 0000000140A0D162: mov     edx, 0FFFFFFFFh
 * 0000000140A0D167: mov     [rax], r10b
 * 0000000140A0D16A: add     rax, r13
 * 0000000140A0D16D: add     ecx, edx
 * 0000000140A0D16F: jnz     short loc_140A0D167
 * 0000000140A0D171: mov     eax, [r9+7E4h]
 * 0000000140A0D178: mov     r10, r9
 * 0000000140A0D17B: add     [r9+828h], eax
 * 0000000140A0D182: mov     rax, r9
 * 0000000140A0D185: mov     r11d, [r9+7E4h]
 * 0000000140A0D18C: mov     r15d, [r9+814h]
 * 0000000140A0D193: mov     rdx, [r9+818h]
 * 0000000140A0D19A: lea     rcx, [r9+r11]
 * 0000000140A0D19E: cmp     r9, rcx
 * 0000000140A0D1A1: jnb     short loc_140A0D1B4
 * 0000000140A0D1A3: mov     r8d, 40h ; '@'
 * 0000000140A0D1A9: prefetchnta byte ptr [rax]
 * 0000000140A0D1AC: add     rax, r8
 * 0000000140A0D1AF: cmp     rax, rcx
 * 0000000140A0D1B2: jb      short loc_140A0D1A9
 * 0000000140A0D1B4: mov     r13d, r11d
 * 0000000140A0D1B7: mov     r8, rdx
 * 0000000140A0D1BA: shr     r13d, 7
 * 0000000140A0D1BE: test    r13d, r13d
 * 0000000140A0D1C1: jz      loc_140A0D248
 * 0000000140A0D1C7: mov     rdi, rdx
 * 0000000140A0D1CA: mov     r12, 7010008004002001h
 * 0000000140A0D1D4: mov     edx, 8
 * 0000000140A0D1D9: lea     r14d, [rdx-7]
 * 0000000140A0D1DD: mov     rax, [r10]
 * 0000000140A0D1E0: mov     ecx, r15d
 * 0000000140A0D1E3: xor     rax, r8
 * 0000000140A0D1E6: mov     r8, [r10+8]
 * 0000000140A0D1EA: rol     rax, cl
 * 0000000140A0D1ED: add     r10, 10h
 * 0000000140A0D1F1: xor     r8, rax
 * 0000000140A0D1F4: rol     r8, cl
 * 0000000140A0D1F7: sub     rdx, r14
 * 0000000140A0D1FA: jnz     short loc_140A0D1DD
 * 0000000140A0D1FC: mov     rcx, r10
 * 0000000140A0D1FF: sub     rcx, r9
 * 0000000140A0D202: xor     rcx, rdi
 * 0000000140A0D205: mov     rax, rcx
 * 0000000140A0D208: rol     rax, 11h
 * 0000000140A0D20C: xor     rcx, rax
 * 0000000140A0D20F: mov     rax, r12
 * 0000000140A0D212: mul     rcx
 * 0000000140A0D215: mov     [rbp+0BE0h+var_478], rdx
 * 0000000140A0D21C: xor     edx, eax
 * 0000000140A0D21E: xor     r15d, edx
 * 0000000140A0D221: mov     rax, r14
 * 0000000140A0D224: and     r15d, 3Fh
 * 0000000140A0D228: cmovz   r15d, eax
 * 0000000140A0D22C: mov     eax, 0FFFFFFFFh
 * 0000000140A0D231: add     r13d, eax
 * 0000000140A0D234: jnz     short loc_140A0D1D4
 * 0000000140A0D236: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0D23A: lea     r12, [r9+798h]
 * 0000000140A0D241: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0D248: and     r11d, 7Fh
 * 0000000140A0D24C: mov     r13d, 1
 * 0000000140A0D252: cmp     r11d, 8
 * 0000000140A0D256: jb      short loc_140A0D275
 * 0000000140A0D258: mov     edx, r11d
 * 0000000140A0D25B: shr     rdx, 3
 * 0000000140A0D25F: xor     r8, [r10]
 * 0000000140A0D262: mov     ecx, r15d
 * 0000000140A0D265: rol     r8, cl
 * 0000000140A0D268: add     r10, 8
 * 0000000140A0D26C: add     r11d, 0FFFFFFF8h
 * 0000000140A0D270: sub     rdx, r13
 * 0000000140A0D273: jnz     short loc_140A0D25F
 * 0000000140A0D275: test    r11d, r11d
 * 0000000140A0D278: jz      short loc_140A0D299
 * 0000000140A0D27A: mov     r14d, 0FFFFFFFFh
 * 0000000140A0D280: movzx   eax, byte ptr [r10]
 * 0000000140A0D284: mov     ecx, r15d
 * 0000000140A0D287: xor     r8, rax
 * 0000000140A0D28A: add     r10, r13
 * 0000000140A0D28D: rol     r8, cl
 * 0000000140A0D290: add     r11d, r14d
 * 0000000140A0D293: jnz     short loc_140A0D280
 * 0000000140A0D295: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0D299: mov     rax, [rbp+0BE0h+var_BD0]
 * 0000000140A0D29D: lea     rcx, [rbp+0BE0h+var_F0]
 * 0000000140A0D2A4: mov     [r9+7B8h], rax
 * 0000000140A0D2AB: mov     edx, 20h ; ' '
 * 0000000140A0D2B0: mov     eax, [rbp+0BE0h+var_BE8]
 * 0000000140A0D2B3: add     [r9+828h], eax
 * 0000000140A0D2BA: lea     r11d, [rdx-1Ch]
 * 0000000140A0D2BE: mov     r10d, r11d
 * 0000000140A0D2C1: mov     rax, [rcx]
 * 0000000140A0D2C4: add     edx, 0FFFFFFF8h
 * 0000000140A0D2C7: mov     [r12], rax
 * 0000000140A0D2CB: add     rcx, 8
 * 0000000140A0D2CF: add     r12, 8
 * 0000000140A0D2D3: sub     r10, r13
 * 0000000140A0D2D6: jnz     short loc_140A0D2C1
 * 0000000140A0D2D8: test    edx, edx
 * 0000000140A0D2DA: jz      short loc_140A0D2F6
 * 0000000140A0D2DC: mov     r10d, 0FFFFFFFFh
 * 0000000140A0D2E2: mov     al, [rcx]
 * 0000000140A0D2E4: add     rcx, r13
 * 0000000140A0D2E7: mov     [r12], al
 * 0000000140A0D2EB: add     r12, r13
 * 0000000140A0D2EE: add     edx, r10d
 * 0000000140A0D2F1: jnz     short loc_140A0D2E2
 * 0000000140A0D2F3: xor     r10d, r10d
 * 0000000140A0D2F6: mov     [r9+7B8h], r8
 * 0000000140A0D2FD: test    dword ptr [r9+990h], 40000000h
 * 0000000140A0D308: jnz     loc_140A0D52C
 * 0000000140A0D30E: mov     rcx, r9
 * 0000000140A0D311: mov     eax, r10d
 * 0000000140A0D314: mov     r15d, 19h
 * 0000000140A0D31A: xor     [rcx], rbx
 * 0000000140A0D31D: add     eax, r13d
 * 0000000140A0D320: lea     rcx, [rcx+8]
 * 0000000140A0D324: cmp     eax, r15d
 * 0000000140A0D327: jb      short loc_140A0D31A
 * 0000000140A0D329: mov     r13d, [rbp+0BE0h+var_C38]
 * 0000000140A0D32D: mov     [rbp+0BE0h+var_A08], rbx
 * 0000000140A0D334: mov     r8d, r13d
 * 0000000140A0D337: test    r13d, r13d
 * 0000000140A0D33A: jz      short loc_140A0D37E
 * 0000000140A0D33C: lea     rdx, [r13-1]
 * 0000000140A0D340: mov     r14d, 1
 * 0000000140A0D346: lea     rdx, [rcx+rdx*8]
 * 0000000140A0D34A: xor     [rdx], rbx
 * 0000000140A0D34D: lea     rax, [rbp+0BE0h+var_A08]
 * 0000000140A0D354: mov     ecx, r8d
 * 0000000140A0D357: lea     rdx, [rdx-8]
 * 0000000140A0D35B: ror     rbx, cl
 * 0000000140A0D35E: mov     [rbp+0BE0h+var_A08], rbx
 * 0000000140A0D365: and     ebx, 3Fh
 * 0000000140A0D368: btc     [rax], rbx
 * 0000000140A0D36C: sub     r8d, r14d
 * 0000000140A0D36F: jz      short loc_140A0D37A
 * 0000000140A0D371: mov     rbx, [rbp+0BE0h+var_A08]
 * 0000000140A0D378: jmp     short loc_140A0D34A
 * 0000000140A0D37A: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0D37E: mov     eax, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0D384: bt      eax, 13h
 * 0000000140A0D388: jnb     short loc_140A0D3D5
 * 0000000140A0D38A: rdtsc
 * 0000000140A0D38C: shl     rdx, 20h
 * 0000000140A0D390: or      rax, rdx
 * 0000000140A0D393: mov     rcx, rax
 * 0000000140A0D396: ror     rax, 3
 * 0000000140A0D39A: xor     rcx, rax
 * 0000000140A0D39D: mov     rax, 7010008004002001h
 * 0000000140A0D3A7: mul     rcx
 * 0000000140A0D3AA: mov     rcx, rdx
 * 0000000140A0D3AD: mov     [rbp+0BE0h+var_470], rdx
 * 0000000140A0D3B4: xor     rcx, rax
 * 0000000140A0D3B7: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A0D3C1: mul     rcx
 * 0000000140A0D3C4: shr     rdx, 1
 * 0000000140A0D3C7: lea     rax, [rdx+rdx*2]
 * 0000000140A0D3CB: cmp     rcx, rax
 * 0000000140A0D3CE: jz      short loc_140A0D3DF
 * 0000000140A0D3D0: jmp     loc_140A0D526
 * 0000000140A0D3D5: bt      eax, 8
 * 0000000140A0D3D9: jb      loc_140A0D526
 * 0000000140A0D3DF: mov     r14d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0D3E6: mov     eax, 1
 * 0000000140A0D3EB: mov     rsi, [rbp+0BE0h+var_C40]
 * 0000000140A0D3EF: mov     ecx, r9d
 * 0000000140A0D3F2: mov     [rbp+0BE0h+var_B7D], al
 * 0000000140A0D3F5: mov     r12d, r15d
 * 0000000140A0D3F8: mov     eax, 2
 * 0000000140A0D3FD: mov     [rbp+0BE0h+var_B80], r10b
 * 0000000140A0D401: mov     [rbp+0BE0h+var_B7B], al
 * 0000000140A0D404: mov     r10, r9
 * 0000000140A0D407: mov     eax, 0Ch
 * 0000000140A0D40C: ror     r10, cl
 * 0000000140A0D40F: mov     [rbp+0BE0h+var_B7F], al
 * 0000000140A0D412: xor     ecx, ecx
 * 0000000140A0D414: mov     eax, 0Fh
 * 0000000140A0D419: mov     [rbp+0BE0h+var_B7A], r11b
 * 0000000140A0D41D: mov     [rbp+0BE0h+var_B7E], al
 * 0000000140A0D420: mov     r11, r9
 * 0000000140A0D423: mov     [rbp+0BE0h+var_B78], 3
 * 0000000140A0D427: mov     ebx, ecx
 * 0000000140A0D429: mov     [rbp+0BE0h+var_B77], 5
 * 0000000140A0D42D: lea     r15d, [rax+1]
 * 0000000140A0D431: mov     [rbp+0BE0h+var_B74], 6
 * 0000000140A0D435: mov     eax, [rbp+0BE0h+var_C28]
 * 0000000140A0D438: mov     [rbp+0BE0h+var_BD0], rax
 * 0000000140A0D43C: mov     edi, eax
 * 0000000140A0D43E: mov     [rbp+0BE0h+var_B79], 7
 * 0000000140A0D442: mov     [rbp+0BE0h+var_B73], 8
 * 0000000140A0D446: mov     [rbp+0BE0h+var_B76], 9
 * 0000000140A0D44A: mov     [rbp+0BE0h+var_B72], 0Ah
 * 0000000140A0D44E: mov     [rbp+0BE0h+var_B7C], 0Bh
 * 0000000140A0D452: mov     [rbp+0BE0h+var_B71], 0Dh
 * 0000000140A0D456: mov     [rbp+0BE0h+var_B75], 0Eh
 * 0000000140A0D45A: test    r15d, r15d
 * 0000000140A0D45D: jz      short loc_140A0D495
 * 0000000140A0D45F: mov     rdx, [r11]
 * 0000000140A0D462: mov     edi, 0Fh
 * 0000000140A0D467: mov     r8d, r15d
 * 0000000140A0D46A: lea     r13d, [rdi-0Eh]
 * 0000000140A0D46E: movzx   eax, byte ptr [r11]
 * 0000000140A0D472: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140A0D476: and     rax, rdi
 * 0000000140A0D479: movzx   ecx, [rbp+rax+0BE0h+var_B80]
 * 0000000140A0D47E: or      rdx, rcx
 * 0000000140A0D481: ror     rdx, 4
 * 0000000140A0D485: mov     [r11], rdx
 * 0000000140A0D488: sub     r8, r13
 * 0000000140A0D48B: jnz     short loc_140A0D46E
 * 0000000140A0D48D: mov     r13d, [rbp+0BE0h+var_C38]
 * 0000000140A0D491: mov     rdi, [rbp+0BE0h+var_BD0]
 * 0000000140A0D495: mov     rdx, [r11]
 * 0000000140A0D498: mov     eax, ebx
 * 0000000140A0D49A: sub     rdx, rax
 * 0000000140A0D49D: sub     rdx, r9
 * 0000000140A0D4A0: bt      r14d, 9
 * 0000000140A0D4A5: jb      short loc_140A0D4BB
 * 0000000140A0D4A7: xor     rdx, [rbp+0BE0h+var_C30]
 * 0000000140A0D4AB: mov     ecx, esi
 * 0000000140A0D4AD: bswap   rdx
 * 0000000140A0D4B0: xor     rdx, r10
 * 0000000140A0D4B3: ror     rdx, cl
 * 0000000140A0D4B6: xor     rdx, rsi
 * 0000000140A0D4B9: jmp     short loc_140A0D4BE
 * 0000000140A0D4BB: xor     rdx, r10
 * 0000000140A0D4BE: mov     [r11], rdx
 * 0000000140A0D4C1: mov     ecx, edx
 * 0000000140A0D4C3: mov     r8d, edx
 * 0000000140A0D4C6: mov     eax, ebx
 * 0000000140A0D4C8: xor     r8d, 0EFFh
 * 0000000140A0D4CF: mov     edx, 0C8h
 * 0000000140A0D4D4: sub     edx, ebx
 * 0000000140A0D4D6: not     ecx
 * 0000000140A0D4D8: xor     rdx, rax
 * 0000000140A0D4DB: add     r11, 8
 * 0000000140A0D4DF: ror     rdx, cl
 * 0000000140A0D4E2: mov     cl, r8b
 * 0000000140A0D4E5: xor     r10, rdx
 * 0000000140A0D4E8: rol     r10, cl
 * 0000000140A0D4EB: add     r10, r9
 * 0000000140A0D4EE: xor     r10, rdi
 * 0000000140A0D4F1: inc     ebx
 * 0000000140A0D4F3: cmp     ebx, 19h
 * 0000000140A0D4F6: jnz     short loc_140A0D50D
 * 0000000140A0D4F8: bt      r14d, 13h
 * 0000000140A0D4FD: lea     ecx, [rbx-19h]
 * 0000000140A0D500: mov     eax, ecx
 * 0000000140A0D502: lea     r15d, [rbx-18h]
 * 0000000140A0D506: cmovnb  eax, r13d
 * 0000000140A0D50A: add     r12d, eax
 * 0000000140A0D50D: cmp     ebx, r12d
 * 0000000140A0D510: jb      loc_140A0D45A
 * 0000000140A0D516: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A0D51B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0D522: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0D526: mov     r13d, 1
 * 0000000140A0D52C: mov     r15, [r14+8]
 * 0000000140A0D530: mov     r11d, [r14+10h]
 * 0000000140A0D534: mov     r10, r15
 * 0000000140A0D537: add     [rsi+828h], r11d
 * 0000000140A0D53E: mov     rax, r15
 * 0000000140A0D541: mov     r9d, [rsi+814h]
 * 0000000140A0D548: mov     r12, [rsi+818h]
 * 0000000140A0D54F: lea     rcx, [r15+r11]
 * 0000000140A0D553: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 0000000140A0D55A: cmp     r15, rcx
 * 0000000140A0D55D: jnb     short loc_140A0D56F
 * 0000000140A0D55F: mov     edx, 40h ; '@'
 * 0000000140A0D564: prefetchnta byte ptr [rax]
 * 0000000140A0D567: add     rax, rdx
 * 0000000140A0D56A: cmp     rax, rcx
 * 0000000140A0D56D: jb      short loc_140A0D564
 * 0000000140A0D56F: mov     ebx, r11d
 * 0000000140A0D572: mov     r8, r12
 * 0000000140A0D575: shr     ebx, 7
 * 0000000140A0D578: test    ebx, ebx
 * 0000000140A0D57A: jz      short loc_140A0D5ED
 * 0000000140A0D57C: mov     edi, 0FFFFFFFFh
 * 0000000140A0D581: mov     r11, 7010008004002001h
 * 0000000140A0D58B: mov     eax, 8
 * 0000000140A0D590: xor     r8, [r10]
 * 0000000140A0D593: mov     ecx, r9d
 * 0000000140A0D596: rol     r8, cl
 * 0000000140A0D599: xor     r8, [r10+8]
 * 0000000140A0D59D: add     r10, 10h
 * 0000000140A0D5A1: rol     r8, cl
 * 0000000140A0D5A4: sub     rax, r13
 * 0000000140A0D5A7: jnz     short loc_140A0D590
 * 0000000140A0D5A9: mov     rcx, r10
 * 0000000140A0D5AC: sub     rcx, r15
 * 0000000140A0D5AF: xor     rcx, r12
 * 0000000140A0D5B2: mov     rax, rcx
 * 0000000140A0D5B5: rol     rax, 11h
 * 0000000140A0D5B9: xor     rcx, rax
 * 0000000140A0D5BC: mov     rax, r11
 * 0000000140A0D5BF: mul     rcx
 * 0000000140A0D5C2: xor     r9d, eax
 * 0000000140A0D5C5: mov     [rbp+0BE0h+var_468], rdx
 * 0000000140A0D5CC: xor     r9d, edx
 * 0000000140A0D5CF: and     r9d, 3Fh
 * 0000000140A0D5D3: cmovz   r9d, r13d
 * 0000000140A0D5D7: add     ebx, edi
 * 0000000140A0D5D9: jnz     short loc_140A0D58B
 * 0000000140A0D5DB: mov     r11d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0D5E2: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0D5E9: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0D5ED: and     r11d, 7Fh
 * 0000000140A0D5F1: mov     r15d, 1
 * 0000000140A0D5F7: cmp     r11d, 8
 * 0000000140A0D5FB: jb      short loc_140A0D61A
 * 0000000140A0D5FD: mov     eax, r11d
 * 0000000140A0D600: shr     rax, 3
 * 0000000140A0D604: xor     r8, [r10]
 * 0000000140A0D607: mov     ecx, r9d
 * 0000000140A0D60A: rol     r8, cl
 * 0000000140A0D60D: add     r10, 8
 * 0000000140A0D611: add     r11d, 0FFFFFFF8h
 * 0000000140A0D615: sub     rax, r15
 * 0000000140A0D618: jnz     short loc_140A0D604
 * 0000000140A0D61A: test    r11d, r11d
 * 0000000140A0D61D: jz      short loc_140A0D63E
 * 0000000140A0D61F: mov     r14d, 0FFFFFFFFh
 * 0000000140A0D625: movzx   eax, byte ptr [r10]
 * 0000000140A0D629: mov     ecx, r9d
 * 0000000140A0D62C: xor     r8, rax
 * 0000000140A0D62F: add     r10, r15
 * 0000000140A0D632: rol     r8, cl
 * 0000000140A0D635: add     r11d, r14d
 * 0000000140A0D638: jnz     short loc_140A0D625
 * 0000000140A0D63A: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0D63E: mov     rax, r8
 * 0000000140A0D641: shr     rax, 1Fh
 * 0000000140A0D645: xor     r11d, r11d
 * 0000000140A0D648: jmp     short loc_140A0D651
 * 0000000140A0D64A: xor     r8d, eax
 * 0000000140A0D64D: shr     rax, 1Fh
 * 0000000140A0D651: test    rax, rax
 * 0000000140A0D654: jnz     short loc_140A0D64A
 * 0000000140A0D656: btr     r8d, 1Fh
 * 0000000140A0D65B: mov     [r14+14h], r8d
 * 0000000140A0D65F: jmp     loc_140A0CADE
 * 0000000140A0D664: xor     r11d, r11d
 * 0000000140A0D667: lea     r15d, [r11+1]
 * 0000000140A0D66B: jmp     loc_140A0CADE
 * 0000000140A0D670: xor     r11d, r11d
 * 0000000140A0D673: lea     r15d, [r11+1]
 * 0000000140A0D677: jmp     loc_140A0CAE8
 * 0000000140A0D67C: mov     r13d, [rbp+0BE0h+var_C38]
 * 0000000140A0D680: bt      r13d, 13h
 * 0000000140A0D685: jnb     short loc_140A0D6D2
 * 0000000140A0D687: rdtsc
 * 0000000140A0D689: shl     rdx, 20h
 * 0000000140A0D68D: or      rax, rdx
 * 0000000140A0D690: mov     rcx, rax
 * 0000000140A0D693: ror     rax, 3
 * 0000000140A0D697: xor     rcx, rax
 * 0000000140A0D69A: mov     rax, 7010008004002001h
 * 0000000140A0D6A4: mul     rcx
 * 0000000140A0D6A7: mov     rcx, rdx
 * 0000000140A0D6AA: mov     [rbp+0BE0h+var_450], rdx
 * 0000000140A0D6B1: xor     rcx, rax
 * 0000000140A0D6B4: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A0D6BE: mul     rcx
 * 0000000140A0D6C1: shr     rdx, 1
 * 0000000140A0D6C4: lea     rax, [rdx+rdx*2]
 * 0000000140A0D6C8: cmp     rcx, rax
 * 0000000140A0D6CB: jz      short loc_140A0D6DD
 * 0000000140A0D6CD: jmp     loc_140A0E034
 * 0000000140A0D6D2: bt      r13d, 8
 * 0000000140A0D6D7: jb      loc_140A0E034
 * 0000000140A0D6DD: mov     rdi, [rbp+0BE0h+var_BD0]
 * 0000000140A0D6E1: mov     eax, 1
 * 0000000140A0D6E6: mov     [rbp+0BE0h+var_B6D], al
 * 0000000140A0D6E9: mov     ecx, esi
 * 0000000140A0D6EB: mov     eax, 2
 * 0000000140A0D6F0: mov     [rbp+0BE0h+var_B6A], r9b
 * 0000000140A0D6F4: mov     [rbp+0BE0h+var_B6B], al
 * 0000000140A0D6F7: mov     r9, rsi
 * 0000000140A0D6FA: mov     eax, 0Ch
 * 0000000140A0D6FF: mov     [rbp+0BE0h+var_B70], r15b
 * 0000000140A0D703: mov     [rbp+0BE0h+var_B6F], al
 * 0000000140A0D706: mov     r14d, r11d
 * 0000000140A0D709: mov     eax, 0Fh
 * 0000000140A0D70E: mov     [rbp+0BE0h+var_B68], 3
 * 0000000140A0D712: mov     r11d, r15d
 * 0000000140A0D715: mov     [rbp+0BE0h+var_B67], 5
 * 0000000140A0D719: mov     r15d, [rbp+0BE0h+var_C28]
 * 0000000140A0D71D: mov     r10, rsi
 * 0000000140A0D720: mov     [rbp+0BE0h+var_B64], 6
 * 0000000140A0D724: lea     ebx, [rax+1]
 * 0000000140A0D727: mov     [rbp+0BE0h+var_B69], 7
 * 0000000140A0D72B: mov     [rbp+0BE0h+var_B63], 8
 * 0000000140A0D72F: mov     [rbp+0BE0h+var_B66], 9
 * 0000000140A0D733: mov     [rbp+0BE0h+var_B62], 0Ah
 * 0000000140A0D737: mov     [rbp+0BE0h+var_B6C], 0Bh
 * 0000000140A0D73B: mov     [rbp+0BE0h+var_B61], 0Dh
 * 0000000140A0D73F: mov     [rbp+0BE0h+var_B65], 0Eh
 * 0000000140A0D743: mov     [rbp+0BE0h+var_B6E], al
 * 0000000140A0D746: ror     r9, cl
 * 0000000140A0D749: test    ebx, ebx
 * 0000000140A0D74B: jz      short loc_140A0D787
 * 0000000140A0D74D: mov     rdx, [r10]
 * 0000000140A0D750: mov     r13d, 1
 * 0000000140A0D756: mov     r8d, ebx
 * 0000000140A0D759: lea     r12d, [r13+0Eh]
 * 0000000140A0D75D: movzx   eax, byte ptr [r10]
 * 0000000140A0D761: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140A0D765: and     rax, r12
 * 0000000140A0D768: movzx   ecx, [rbp+rax+0BE0h+var_B70]
 * 0000000140A0D76D: or      rdx, rcx
 * 0000000140A0D770: ror     rdx, 4
 * 0000000140A0D774: mov     [r10], rdx
 * 0000000140A0D777: sub     r8, r13
 * 0000000140A0D77A: jnz     short loc_140A0D75D
 * 0000000140A0D77C: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0D783: mov     r13d, [rbp+0BE0h+var_C38]
 * 0000000140A0D787: mov     rdx, [r10]
 * 0000000140A0D78A: mov     eax, r11d
 * 0000000140A0D78D: sub     rdx, rax
 * 0000000140A0D790: sub     rdx, rsi
 * 0000000140A0D793: bt      r13d, 9
 * 0000000140A0D798: jb      short loc_140A0D7AE
 * 0000000140A0D79A: xor     rdx, [rbp+0BE0h+var_C30]
 * 0000000140A0D79E: mov     ecx, edi
 * 0000000140A0D7A0: bswap   rdx
 * 0000000140A0D7A3: xor     rdx, r9
 * 0000000140A0D7A6: ror     rdx, cl
 * 0000000140A0D7A9: xor     rdx, rdi
 * 0000000140A0D7AC: jmp     short loc_140A0D7B1
 * 0000000140A0D7AE: xor     rdx, r9
 * 0000000140A0D7B1: mov     [r10], rdx
 * 0000000140A0D7B4: mov     ecx, edx
 * 0000000140A0D7B6: mov     r8d, edx
 * 0000000140A0D7B9: mov     eax, r11d
 * 0000000140A0D7BC: xor     r8d, 0EFFh
 * 0000000140A0D7C3: mov     edx, 0C8h
 * 0000000140A0D7C8: sub     edx, r11d
 * 0000000140A0D7CB: not     ecx
 * 0000000140A0D7CD: xor     rdx, rax
 * 0000000140A0D7D0: add     r10, 8
 * 0000000140A0D7D4: ror     rdx, cl
 * 0000000140A0D7D7: mov     cl, r8b
 * 0000000140A0D7DA: xor     r9, rdx
 * 0000000140A0D7DD: rol     r9, cl
 * 0000000140A0D7E0: add     r9, rsi
 * 0000000140A0D7E3: xor     r9, r15
 * 0000000140A0D7E6: inc     r11d
 * 0000000140A0D7E9: cmp     r11d, 19h
 * 0000000140A0D7ED: jnz     short loc_140A0D803
 * 0000000140A0D7EF: bt      r13d, 13h
 * 0000000140A0D7F4: lea     eax, [r11-19h]
 * 0000000140A0D7F8: lea     ebx, [r11-18h]
 * 0000000140A0D7FC: cmovnb  eax, r12d
 * 0000000140A0D800: add     r14d, eax
 * 0000000140A0D803: cmp     r11d, r14d
 * 0000000140A0D806: jb      loc_140A0D749
 * 0000000140A0D80C: jmp     loc_140A0E02D
 * 0000000140A0D811: mov     r15d, 1
 * 0000000140A0D817: lea     rbx, [r14+798h]
 * 0000000140A0D81E: mov     [r14+0C4h], r15d
 * 0000000140A0D825: lea     rdx, [rbp+0BE0h+var_B0]
 * 0000000140A0D82C: mov     r12, [r14+7B8h]
 * 0000000140A0D833: mov     rsi, r14
 * 0000000140A0D836: mov     r13d, [r14+828h]
 * 0000000140A0D83D: mov     rcx, rbx
 * 0000000140A0D840: lea     r11d, [r15+1Fh]
 * 0000000140A0D844: mov     [rbp+0BE0h+var_BD0], r12
 * 0000000140A0D848: lea     r10d, [r15+3]
 * 0000000140A0D84C: mov     dword ptr [rbp+0BE0h+arg_8], r13d
 * 0000000140A0D853: mov     r8d, r11d
 * 0000000140A0D856: mov     [rsp+0CE0h+var_C70], rbx
 * 0000000140A0D85B: mov     r9d, r10d
 * 0000000140A0D85E: mov     rax, [rcx]
 * 0000000140A0D861: add     r8d, 0FFFFFFF8h
 * 0000000140A0D865: mov     [rdx], rax
 * 0000000140A0D868: add     rcx, 8
 * 0000000140A0D86C: add     rdx, 8
 * 0000000140A0D870: sub     r9, r15
 * 0000000140A0D873: jnz     short loc_140A0D85E
 * 0000000140A0D875: xor     r15d, r15d
 * 0000000140A0D878: lea     r9d, [r15+1]
 * 0000000140A0D87C: test    r8d, r8d
 * 0000000140A0D87F: jz      short loc_140A0D899
 * 0000000140A0D881: mov     r15d, 0FFFFFFFFh
 * 0000000140A0D887: mov     al, [rcx]
 * 0000000140A0D889: add     rcx, r9
 * 0000000140A0D88C: mov     [rdx], al
 * 0000000140A0D88E: add     rdx, r9
 * 0000000140A0D891: add     r8d, r15d
 * 0000000140A0D894: jnz     short loc_140A0D887
 * 0000000140A0D896: xor     r15d, r15d
 * 0000000140A0D899: mov     [r14+7B8h], r15
 * 0000000140A0D8A0: mov     ecx, r11d
 * 0000000140A0D8A3: mov     [r14+828h], r15d
 * 0000000140A0D8AA: mov     rax, rbx
 * 0000000140A0D8AD: mov     rdx, r10
 * 0000000140A0D8B0: mov     [rax], r15
 * 0000000140A0D8B3: add     ecx, 0FFFFFFF8h
 * 0000000140A0D8B6: add     rax, 8
 * 0000000140A0D8BA: sub     rdx, r9
 * 0000000140A0D8BD: jnz     short loc_140A0D8B0
 * 0000000140A0D8BF: test    ecx, ecx
 * 0000000140A0D8C1: jz      short loc_140A0D8D2
 * 0000000140A0D8C3: mov     edx, 0FFFFFFFFh
 * 0000000140A0D8C8: mov     [rax], r15b
 * 0000000140A0D8CB: add     rax, r9
 * 0000000140A0D8CE: add     ecx, edx
 * 0000000140A0D8D0: jnz     short loc_140A0D8C8
 * 0000000140A0D8D2: mov     eax, [r14+7E4h]
 * 0000000140A0D8D9: mov     r10, r14
 * 0000000140A0D8DC: add     [r14+828h], eax
 * 0000000140A0D8E3: mov     rax, r14
 * 0000000140A0D8E6: mov     r11d, [r14+7E4h]
 * 0000000140A0D8ED: mov     r9d, [r14+814h]
 * 0000000140A0D8F4: mov     r15, [r14+818h]
 * 0000000140A0D8FB: lea     rcx, [r14+r11]
 * 0000000140A0D8FF: cmp     r14, rcx
 * 0000000140A0D902: jnb     short loc_140A0D914
 * 0000000140A0D904: mov     edx, 40h ; '@'
 * 0000000140A0D909: prefetchnta byte ptr [rax]
 * 0000000140A0D90C: add     rax, rdx
 * 0000000140A0D90F: cmp     rax, rcx
 * 0000000140A0D912: jb      short loc_140A0D909
 * 0000000140A0D914: mov     r14d, r11d
 * 0000000140A0D917: mov     r8, r15
 * 0000000140A0D91A: shr     r14d, 7
 * 0000000140A0D91E: test    r14d, r14d
 * 0000000140A0D921: jz      loc_140A0D9AC
 * 0000000140A0D927: mov     rdi, [rbp+0BE0h+arg_0]
 * 0000000140A0D92E: mov     rbx, 7010008004002001h
 * 0000000140A0D938: mov     r12d, 1
 * 0000000140A0D93E: mov     r13d, 0FFFFFFFFh
 * 0000000140A0D944: mov     eax, 8
 * 0000000140A0D949: xor     r8, [r10]
 * 0000000140A0D94C: mov     ecx, r9d
 * 0000000140A0D94F: rol     r8, cl
 * 0000000140A0D952: xor     r8, [r10+8]
 * 0000000140A0D956: add     r10, 10h
 * 0000000140A0D95A: rol     r8, cl
 * 0000000140A0D95D: sub     rax, r12
 * 0000000140A0D960: jnz     short loc_140A0D949
 * 0000000140A0D962: mov     rcx, r10
 * 0000000140A0D965: sub     rcx, rdi
 * 0000000140A0D968: xor     rcx, r15
 * 0000000140A0D96B: mov     rax, rcx
 * 0000000140A0D96E: rol     rax, 11h
 * 0000000140A0D972: xor     rcx, rax
 * 0000000140A0D975: mov     rax, rbx
 * 0000000140A0D978: mul     rcx
 * 0000000140A0D97B: xor     r9d, eax
 * 0000000140A0D97E: mov     [rbp+0BE0h+var_328], rdx
 * 0000000140A0D985: xor     r9d, edx
 * 0000000140A0D988: and     r9d, 3Fh
 * 0000000140A0D98C: cmovz   r9d, r12d
 * 0000000140A0D990: add     r14d, r13d
 * 0000000140A0D993: jnz     short loc_140A0D944
 * 0000000140A0D995: mov     rbx, [rsp+0CE0h+var_C70]
 * 0000000140A0D99A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0D9A1: mov     r12, [rbp+0BE0h+var_BD0]
 * 0000000140A0D9A5: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0D9AC: and     r11d, 7Fh
 * 0000000140A0D9B0: mov     r15d, 1
 * 0000000140A0D9B6: cmp     r11d, 8
 * 0000000140A0D9BA: jb      short loc_140A0D9D9
 * 0000000140A0D9BC: mov     eax, r11d
 * 0000000140A0D9BF: shr     rax, 3
 * 0000000140A0D9C3: xor     r8, [r10]
 * 0000000140A0D9C6: mov     ecx, r9d
 * 0000000140A0D9C9: rol     r8, cl
 * 0000000140A0D9CC: add     r10, 8
 * 0000000140A0D9D0: add     r11d, 0FFFFFFF8h
 * 0000000140A0D9D4: sub     rax, r15
 * 0000000140A0D9D7: jnz     short loc_140A0D9C3
 * 0000000140A0D9D9: mov     r14d, 0FFFFFFFFh
 * 0000000140A0D9DF: test    r11d, r11d
 * 0000000140A0D9E2: jz      short loc_140A0D9F9
 * 0000000140A0D9E4: movzx   eax, byte ptr [r10]
 * 0000000140A0D9E8: mov     ecx, r9d
 * 0000000140A0D9EB: xor     r8, rax
 * 0000000140A0D9EE: add     r10, r15
 * 0000000140A0D9F1: rol     r8, cl
 * 0000000140A0D9F4: add     r11d, r14d
 * 0000000140A0D9F7: jnz     short loc_140A0D9E4
 * 0000000140A0D9F9: mov     r9, [rbp+0BE0h+arg_0]
 * 0000000140A0DA00: lea     rcx, [rbp+0BE0h+var_B0]
 * 0000000140A0DA07: mov     edx, 4
 * 0000000140A0DA0C: mov     [r9+7B8h], r12
 * 0000000140A0DA13: add     [r9+828h], r13d
 * 0000000140A0DA1A: lea     r10d, [rdx+1Ch]
 * 0000000140A0DA1E: mov     rax, [rcx]
 * 0000000140A0DA21: add     r10d, 0FFFFFFF8h
 * 0000000140A0DA25: mov     [rbx], rax
 * 0000000140A0DA28: add     rcx, 8
 * 0000000140A0DA2C: add     rbx, 8
 * 0000000140A0DA30: sub     rdx, r15
 * 0000000140A0DA33: jnz     short loc_140A0DA1E
 * 0000000140A0DA35: xor     r11d, r11d
 * 0000000140A0DA38: test    r10d, r10d
 * 0000000140A0DA3B: jz      short loc_140A0DA4C
 * 0000000140A0DA3D: mov     al, [rcx]
 * 0000000140A0DA3F: add     rcx, r15
 * 0000000140A0DA42: mov     [rbx], al
 * 0000000140A0DA44: add     rbx, r15
 * 0000000140A0DA47: add     r10d, r14d
 * 0000000140A0DA4A: jnz     short loc_140A0DA3D
 * 0000000140A0DA4C: mov     [r9+7B8h], r8
 * 0000000140A0DA53: mov     r14d, [rsi+990h]
 * 0000000140A0DA5A: mov     r12, r11
 * 0000000140A0DA5D: mov     [rsp+0CE0h+var_C70], r11
 * 0000000140A0DA62: bt      r14d, 1Eh
 * 0000000140A0DA67: jb      loc_140A0E0EC
 * 0000000140A0DA6D: bt      r14d, 8
 * 0000000140A0DA72: jb      loc_140A0E0D6
 * 0000000140A0DA78: mov     eax, [rsi+954h]
 * 0000000140A0DA7E: mov     ecx, 1
 * 0000000140A0DA83: mov     r15, [rsi+5C0h]
 * 0000000140A0DA8A: mov     r9, rsi
 * 0000000140A0DA8D: mov     r13, [rsi+4E8h]
 * 0000000140A0DA94: mov     r10, rsi
 * 0000000140A0DA97: mov     [rbp+0BE0h+var_B8D], cl
 * 0000000140A0DA9A: mov     ecx, 2
 * 0000000140A0DA9F: mov     [rbp+0BE0h+var_B8B], cl
 * 0000000140A0DAA2: mov     ecx, 0Ch
 * 0000000140A0DAA7: mov     [rbp+0BE0h+var_B8F], cl
 * 0000000140A0DAAA: mov     [rbp+0BE0h+var_B90], r11b
 * 0000000140A0DAAE: mov     [rbp+0BE0h+var_B88], 3
 * 0000000140A0DAB2: lea     r12d, [rcx+3]
 * 0000000140A0DAB6: mov     [rbp+0BE0h+var_B8A], 4
 * 0000000140A0DABA: mov     ecx, esi
 * 0000000140A0DABC: mov     [rbp+0BE0h+var_B87], 5
 * 0000000140A0DAC0: ror     r9, cl
 * 0000000140A0DAC3: lea     ebx, [r12+1]
 * 0000000140A0DAC8: xor     edi, edi
 * 0000000140A0DACA: mov     [rbp+0BE0h+var_B84], 6
 * 0000000140A0DACE: mov     [rbp+0BE0h+var_B89], 7
 * 0000000140A0DAD2: mov     [rbp+0BE0h+var_B83], 8
 * 0000000140A0DAD6: mov     [rbp+0BE0h+var_B86], 9
 * 0000000140A0DADA: mov     [rbp+0BE0h+var_B82], 0Ah
 * 0000000140A0DADE: mov     [rbp+0BE0h+var_B8C], 0Bh
 * 0000000140A0DAE2: mov     [rbp+0BE0h+var_B81], 0Dh
 * 0000000140A0DAE6: mov     [rbp+0BE0h+var_B85], 0Eh
 * 0000000140A0DAEA: mov     [rbp+0BE0h+var_B8E], r12b
 * 0000000140A0DAEE: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A0DAF5: test    ebx, ebx
 * 0000000140A0DAF7: jz      short loc_140A0DB25
 * 0000000140A0DAF9: mov     rdx, [r10]
 * 0000000140A0DAFC: mov     edi, 1
 * 0000000140A0DB01: mov     r8d, ebx
 * 0000000140A0DB04: movzx   eax, byte ptr [r10]
 * 0000000140A0DB08: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140A0DB0C: and     rax, r12
 * 0000000140A0DB0F: movzx   ecx, [rbp+rax+0BE0h+var_B90]
 * 0000000140A0DB14: or      rdx, rcx
 * 0000000140A0DB17: ror     rdx, 4
 * 0000000140A0DB1B: mov     [r10], rdx
 * 0000000140A0DB1E: sub     r8, rdi
 * 0000000140A0DB21: jnz     short loc_140A0DB04
 * 0000000140A0DB23: xor     edi, edi
 * 0000000140A0DB25: mov     rcx, [r10]
 * 0000000140A0DB28: mov     eax, r11d
 * 0000000140A0DB2B: sub     rcx, rax
 * 0000000140A0DB2E: sub     rcx, rsi
 * 0000000140A0DB31: bt      r14d, 9
 * 0000000140A0DB36: jb      loc_140A0E074
 * 0000000140A0DB3C: mov     rax, r13
 * 0000000140A0DB3F: xor     rax, rcx
 * 0000000140A0DB42: mov     ecx, r15d
 * 0000000140A0DB45: bswap   rax
 * 0000000140A0DB48: xor     rax, r9
 * 0000000140A0DB4B: ror     rax, cl
 * 0000000140A0DB4E: xor     rax, r15
 * 0000000140A0DB51: jmp     loc_140A0E07A
 * 0000000140A0DB56: mov     ecx, [rsi+954h]
 * 0000000140A0DB5C: mov     r12d, [rsi+0A2Ch]
 * 0000000140A0DB63: mov     rax, [rsi+7C8h]
 * 0000000140A0DB6A: add     r12d, 0FFFFFF38h
 * 0000000140A0DB71: mov     [rbp+0BE0h+var_C28], ecx
 * 0000000140A0DB74: mov     rcx, [rsi+4E8h]
 * 0000000140A0DB7B: shr     r12d, 3
 * 0000000140A0DB7F: mov     [rsp+0CE0h+var_C88], rcx
 * 0000000140A0DB84: mov     rcx, [rsi+5C0h]
 * 0000000140A0DB8B: mov     [rbp+0BE0h+var_C30], rcx
 * 0000000140A0DB8F: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A0DB93: mov     [rbp+0BE0h+var_C38], r12d
 * 0000000140A0DB97: mov     [rsi+0C4h], r12d
 * 0000000140A0DB9E: rdtsc
 * 0000000140A0DBA0: shl     rdx, 20h
 * 0000000140A0DBA4: or      rax, rdx
 * 0000000140A0DBA7: mov     rcx, rax
 * 0000000140A0DBAA: ror     rax, 3
 * 0000000140A0DBAE: xor     rcx, rax
 * 0000000140A0DBB1: mov     rax, r9
 * 0000000140A0DBB4: mul     rcx
 * 0000000140A0DBB7: mov     rbx, rdx
 * 0000000140A0DBBA: mov     [rbp+0BE0h+var_440], rdx
 * 0000000140A0DBC1: xor     rbx, rax
 * 0000000140A0DBC4: jz      short loc_140A0DB9E
 * 0000000140A0DBC6: mov     rax, [rsi+7B8h]
 * 0000000140A0DBCD: lea     r14, [rsi+798h]
 * 0000000140A0DBD4: mov     r11d, 20h ; ' '
 * 0000000140A0DBDA: mov     [rbp+0BE0h+var_BD0], rax
 * 0000000140A0DBDE: mov     eax, [rsi+828h]
 * 0000000140A0DBE4: lea     rdx, [rbp+0BE0h+var_90]
 * 0000000140A0DBEB: mov     [rbp+0BE0h+var_BE8], eax
 * 0000000140A0DBEE: mov     r8d, r11d
 * 0000000140A0DBF1: mov     rcx, r14
 * 0000000140A0DBF4: lea     r10d, [r11-1Ch]
 * 0000000140A0DBF8: mov     r9d, r10d
 * 0000000140A0DBFB: mov     rax, [rcx]
 * 0000000140A0DBFE: add     r8d, 0FFFFFFF8h
 * 0000000140A0DC02: mov     [rdx], rax
 * 0000000140A0DC05: add     rcx, 8
 * 0000000140A0DC09: add     rdx, 8
 * 0000000140A0DC0D: sub     r9, r15
 * 0000000140A0DC10: jnz     short loc_140A0DBFB
 * 0000000140A0DC12: test    r8d, r8d
 * 0000000140A0DC15: jz      short loc_140A0DC2F
 * 0000000140A0DC17: mov     r9d, 0FFFFFFFFh
 * 0000000140A0DC1D: mov     al, [rcx]
 * 0000000140A0DC1F: add     rcx, r15
 * 0000000140A0DC22: mov     [rdx], al
 * 0000000140A0DC24: add     rdx, r15
 * 0000000140A0DC27: add     r8d, r9d
 * 0000000140A0DC2A: jnz     short loc_140A0DC1D
 * 0000000140A0DC2C: xor     r9d, r9d
 * 0000000140A0DC2F: mov     [rsi+7B8h], r9
 * 0000000140A0DC36: mov     ecx, r11d
 * 0000000140A0DC39: mov     [rsi+828h], r9d
 * 0000000140A0DC40: mov     rax, r14
 * 0000000140A0DC43: mov     rdx, r10
 * 0000000140A0DC46: mov     [rax], r9
 * 0000000140A0DC49: add     ecx, 0FFFFFFF8h
 * 0000000140A0DC4C: add     rax, 8
 * 0000000140A0DC50: sub     rdx, r15
 * 0000000140A0DC53: jnz     short loc_140A0DC46
 * 0000000140A0DC55: test    ecx, ecx
 * 0000000140A0DC57: jz      short loc_140A0DC68
 * 0000000140A0DC59: mov     edx, 0FFFFFFFFh
 * 0000000140A0DC5E: mov     [rax], r9b
 * 0000000140A0DC61: add     rax, r15
 * 0000000140A0DC64: add     ecx, edx
 * 0000000140A0DC66: jnz     short loc_140A0DC5E
 * 0000000140A0DC68: mov     eax, [rsi+7E4h]
 * 0000000140A0DC6E: mov     r9, rsi
 * 0000000140A0DC71: add     [rsi+828h], eax
 * 0000000140A0DC77: mov     r11d, [rsi+7E4h]
 * 0000000140A0DC7E: mov     r10d, [rsi+814h]
 * 0000000140A0DC85: mov     r8, [rsi+818h]
 * 0000000140A0DC8C: lea     rcx, [rsi+r11]
 * 0000000140A0DC90: cmp     rsi, rcx
 * 0000000140A0DC93: jnb     short loc_140A0DCA8
 * 0000000140A0DC95: mov     rax, rsi
 * 0000000140A0DC98: mov     edx, 40h ; '@'
 * 0000000140A0DC9D: prefetchnta byte ptr [rax]
 * 0000000140A0DCA0: add     rax, rdx
 * 0000000140A0DCA3: cmp     rax, rcx
 * 0000000140A0DCA6: jb      short loc_140A0DC9D
 * 0000000140A0DCA8: mov     r15d, r11d
 * 0000000140A0DCAB: shr     r15d, 7
 * 0000000140A0DCAF: test    r15d, r15d
 * 0000000140A0DCB2: jz      loc_140A0DD3B
 * 0000000140A0DCB8: mov     rdi, r8
 * 0000000140A0DCBB: mov     r13d, 1
 * 0000000140A0DCC1: mov     r12d, 0FFFFFFFFh
 * 0000000140A0DCC7: mov     r14, 7010008004002001h
 * 0000000140A0DCD1: mov     eax, 8
 * 0000000140A0DCD6: xor     r8, [r9]
 * 0000000140A0DCD9: mov     ecx, r10d
 * 0000000140A0DCDC: rol     r8, cl
 * 0000000140A0DCDF: xor     r8, [r9+8]
 * 0000000140A0DCE3: add     r9, 10h
 * 0000000140A0DCE7: rol     r8, cl
 * 0000000140A0DCEA: sub     rax, r13
 * 0000000140A0DCED: jnz     short loc_140A0DCD6
 * 0000000140A0DCEF: mov     rcx, r9
 * 0000000140A0DCF2: sub     rcx, rsi
 * 0000000140A0DCF5: xor     rcx, rdi
 * 0000000140A0DCF8: mov     rax, rcx
 * 0000000140A0DCFB: rol     rax, 11h
 * 0000000140A0DCFF: xor     rcx, rax
 * 0000000140A0DD02: mov     rax, r14
 * 0000000140A0DD05: mul     rcx
 * 0000000140A0DD08: xor     r10d, eax
 * 0000000140A0DD0B: mov     [rbp+0BE0h+var_438], rdx
 * 0000000140A0DD12: xor     r10d, edx
 * 0000000140A0DD15: and     r10d, 3Fh
 * 0000000140A0DD19: cmovz   r10d, r13d
 * 0000000140A0DD1D: add     r15d, r12d
 * 0000000140A0DD20: jnz     short loc_140A0DCD1
 * 0000000140A0DD22: mov     r12d, [rbp+0BE0h+var_C38]
 * 0000000140A0DD26: lea     r14, [rsi+798h]
 * 0000000140A0DD2D: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0DD34: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0DD3B: and     r11d, 7Fh
 * 0000000140A0DD3F: mov     r15d, 1
 * 0000000140A0DD45: cmp     r11d, 8
 * 0000000140A0DD49: jb      short loc_140A0DD68
 * 0000000140A0DD4B: mov     eax, r11d
 * 0000000140A0DD4E: shr     rax, 3
 * 0000000140A0DD52: xor     r8, [r9]
 * 0000000140A0DD55: mov     ecx, r10d
 * 0000000140A0DD58: rol     r8, cl
 * 0000000140A0DD5B: add     r9, 8
 * 0000000140A0DD5F: add     r11d, 0FFFFFFF8h
 * 0000000140A0DD63: sub     rax, r15
 * 0000000140A0DD66: jnz     short loc_140A0DD52
 * 0000000140A0DD68: test    r11d, r11d
 * 0000000140A0DD6B: jz      short loc_140A0DD8F
 * 0000000140A0DD6D: mov     r13d, 0FFFFFFFFh
 * 0000000140A0DD73: movzx   eax, byte ptr [r9]
 * 0000000140A0DD77: mov     ecx, r10d
 * 0000000140A0DD7A: xor     r8, rax
 * 0000000140A0DD7D: add     r9, r15
 * 0000000140A0DD80: rol     r8, cl
 * 0000000140A0DD83: add     r11d, r13d
 * 0000000140A0DD86: jnz     short loc_140A0DD73
 * 0000000140A0DD88: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0DD8F: mov     rax, [rbp+0BE0h+var_BD0]
 * 0000000140A0DD93: lea     rcx, [rbp+0BE0h+var_90]
 * 0000000140A0DD9A: mov     r9d, 4
 * 0000000140A0DDA0: mov     [rsi+7B8h], rax
 * 0000000140A0DDA7: mov     eax, [rbp+0BE0h+var_BE8]
 * 0000000140A0DDAA: mov     edx, r9d
 * 0000000140A0DDAD: add     [rsi+828h], eax
 * 0000000140A0DDB3: lea     r10d, [r9+1Ch]
 * 0000000140A0DDB7: mov     rax, [rcx]
 * 0000000140A0DDBA: add     r10d, 0FFFFFFF8h
 * 0000000140A0DDBE: mov     [r14], rax
 * 0000000140A0DDC1: add     rcx, 8
 * 0000000140A0DDC5: add     r14, 8
 * 0000000140A0DDC9: sub     rdx, r15
 * 0000000140A0DDCC: jnz     short loc_140A0DDB7
 * 0000000140A0DDCE: xor     r11d, r11d
 * 0000000140A0DDD1: test    r10d, r10d
 * 0000000140A0DDD4: jz      short loc_140A0DDEF
 * 0000000140A0DDD6: mov     r11d, 0FFFFFFFFh
 * 0000000140A0DDDC: mov     al, [rcx]
 * 0000000140A0DDDE: add     rcx, r15
 * 0000000140A0DDE1: mov     [r14], al
 * 0000000140A0DDE4: add     r14, r15
 * 0000000140A0DDE7: add     r10d, r11d
 * 0000000140A0DDEA: jnz     short loc_140A0DDDC
 * 0000000140A0DDEC: xor     r11d, r11d
 * 0000000140A0DDEF: mov     [rsi+7B8h], r8
 * 0000000140A0DDF6: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A0DE00: jnz     loc_140A0E037
 * 0000000140A0DE06: mov     eax, r11d
 * 0000000140A0DE09: mov     rcx, rsi
 * 0000000140A0DE0C: mov     r11d, 19h
 * 0000000140A0DE12: xor     [rcx], rbx
 * 0000000140A0DE15: add     eax, r15d
 * 0000000140A0DE18: lea     rcx, [rcx+8]
 * 0000000140A0DE1C: cmp     eax, r11d
 * 0000000140A0DE1F: jb      short loc_140A0DE12
 * 0000000140A0DE21: xor     r15d, r15d
 * 0000000140A0DE24: mov     [rbp+0BE0h+var_9F8], rbx
 * 0000000140A0DE2B: mov     r8d, r12d
 * 0000000140A0DE2E: lea     r10d, [r15+1]
 * 0000000140A0DE32: test    r12d, r12d
 * 0000000140A0DE35: jz      short loc_140A0DE71
 * 0000000140A0DE37: mov     edx, r12d
 * 0000000140A0DE3A: dec     rdx
 * 0000000140A0DE3D: lea     rdx, [rcx+rdx*8]
 * 0000000140A0DE41: xor     [rdx], rbx
 * 0000000140A0DE44: lea     rax, [rbp+0BE0h+var_9F8]
 * 0000000140A0DE4B: mov     ecx, r8d
 * 0000000140A0DE4E: lea     rdx, [rdx-8]
 * 0000000140A0DE52: ror     rbx, cl
 * 0000000140A0DE55: mov     [rbp+0BE0h+var_9F8], rbx
 * 0000000140A0DE5C: and     ebx, 3Fh
 * 0000000140A0DE5F: btc     [rax], rbx
 * 0000000140A0DE63: sub     r8d, r10d
 * 0000000140A0DE66: jz      short loc_140A0DE71
 * 0000000140A0DE68: mov     rbx, [rbp+0BE0h+var_9F8]
 * 0000000140A0DE6F: jmp     short loc_140A0DE41
 * 0000000140A0DE71: bt      r13d, 13h
 * 0000000140A0DE76: jnb     short loc_140A0DEC3
 * 0000000140A0DE78: rdtsc
 * 0000000140A0DE7A: shl     rdx, 20h
 * 0000000140A0DE7E: or      rax, rdx
 * 0000000140A0DE81: mov     rcx, rax
 * 0000000140A0DE84: ror     rax, 3
 * 0000000140A0DE88: xor     rcx, rax
 * 0000000140A0DE8B: mov     rax, 7010008004002001h
 * 0000000140A0DE95: mul     rcx
 * 0000000140A0DE98: mov     rcx, rdx
 * 0000000140A0DE9B: mov     [rbp+0BE0h+var_430], rdx
 * 0000000140A0DEA2: xor     rcx, rax
 * 0000000140A0DEA5: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A0DEAF: mul     rcx
 * 0000000140A0DEB2: shr     rdx, 1
 * 0000000140A0DEB5: lea     rax, [rdx+rdx*2]
 * 0000000140A0DEB9: cmp     rcx, rax
 * 0000000140A0DEBC: jz      short loc_140A0DECE
 * 0000000140A0DEBE: jmp     loc_140A0E034
 * 0000000140A0DEC3: bt      r13d, 8
 * 0000000140A0DEC8: jb      loc_140A0E034
 * 0000000140A0DECE: mov     rdi, [rbp+0BE0h+var_C30]
 * 0000000140A0DED2: mov     eax, 2
 * 0000000140A0DED7: mov     [rbp+0BE0h+var_B5B], al
 * 0000000140A0DEDD: mov     ecx, esi
 * 0000000140A0DEDF: mov     eax, 0Ch
 * 0000000140A0DEE4: mov     [rbp+0BE0h+var_B5A], r9b
 * 0000000140A0DEEB: mov     [rbp+0BE0h+var_B5F], al
 * 0000000140A0DEF1: mov     r9, rsi
 * 0000000140A0DEF4: mov     eax, 0Fh
 * 0000000140A0DEF9: mov     [rbp+0BE0h+var_B60], r15b
 * 0000000140A0DF00: mov     r14d, r11d
 * 0000000140A0DF03: mov     [rbp+0BE0h+var_B5D], r10b
 * 0000000140A0DF0A: mov     r11d, r15d
 * 0000000140A0DF0D: mov     [rbp+0BE0h+var_B58], 3
 * 0000000140A0DF14: mov     r15d, [rbp+0BE0h+var_C28]
 * 0000000140A0DF18: mov     r10, rsi
 * 0000000140A0DF1B: lea     ebx, [rax+1]
 * 0000000140A0DF1E: mov     [rbp+0BE0h+var_B57], 5
 * 0000000140A0DF25: mov     [rbp+0BE0h+var_B54], 6
 * 0000000140A0DF2C: mov     [rbp+0BE0h+var_B59], 7
 * 0000000140A0DF33: mov     [rbp+0BE0h+var_B53], 8
 * 0000000140A0DF3A: mov     [rbp+0BE0h+var_B56], 9
 * 0000000140A0DF41: mov     [rbp+0BE0h+var_B52], 0Ah
 * 0000000140A0DF48: mov     [rbp+0BE0h+var_B5C], 0Bh
 * 0000000140A0DF4F: mov     [rbp+0BE0h+var_B51], 0Dh
 * 0000000140A0DF56: mov     [rbp+0BE0h+var_B55], 0Eh
 * 0000000140A0DF5D: mov     [rbp+0BE0h+var_B5E], al
 * 0000000140A0DF63: ror     r9, cl
 * 0000000140A0DF66: test    ebx, ebx
 * 0000000140A0DF68: jz      short loc_140A0DFA7
 * 0000000140A0DF6A: mov     rdx, [r10]
 * 0000000140A0DF6D: mov     r13d, 1
 * 0000000140A0DF73: mov     r8d, ebx
 * 0000000140A0DF76: lea     r12d, [r13+0Eh]
 * 0000000140A0DF7A: movzx   eax, byte ptr [r10]
 * 0000000140A0DF7E: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140A0DF82: and     rax, r12
 * 0000000140A0DF85: movzx   ecx, [rbp+rax+0BE0h+var_B60]
 * 0000000140A0DF8D: or      rdx, rcx
 * 0000000140A0DF90: ror     rdx, 4
 * 0000000140A0DF94: mov     [r10], rdx
 * 0000000140A0DF97: sub     r8, r13
 * 0000000140A0DF9A: jnz     short loc_140A0DF7A
 * 0000000140A0DF9C: mov     r12d, [rbp+0BE0h+var_C38]
 * 0000000140A0DFA0: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0DFA7: mov     rdx, [r10]
 * 0000000140A0DFAA: mov     eax, r11d
 * 0000000140A0DFAD: sub     rdx, rax
 * 0000000140A0DFB0: sub     rdx, rsi
 * 0000000140A0DFB3: bt      r13d, 9
 * 0000000140A0DFB8: jb      short loc_140A0DFCF
 * 0000000140A0DFBA: xor     rdx, [rsp+0CE0h+var_C88]
 * 0000000140A0DFBF: mov     ecx, edi
 * 0000000140A0DFC1: bswap   rdx
 * 0000000140A0DFC4: xor     rdx, r9
 * 0000000140A0DFC7: ror     rdx, cl
 * 0000000140A0DFCA: xor     rdx, rdi
 * 0000000140A0DFCD: jmp     short loc_140A0DFD2
 * 0000000140A0DFCF: xor     rdx, r9
 * 0000000140A0DFD2: mov     [r10], rdx
 * 0000000140A0DFD5: mov     ecx, edx
 * 0000000140A0DFD7: mov     r8d, edx
 * 0000000140A0DFDA: mov     eax, r11d
 * 0000000140A0DFDD: xor     r8d, 0EFFh
 * 0000000140A0DFE4: mov     edx, 0C8h
 * 0000000140A0DFE9: sub     edx, r11d
 * 0000000140A0DFEC: not     ecx
 * 0000000140A0DFEE: xor     rdx, rax
 * 0000000140A0DFF1: add     r10, 8
 * 0000000140A0DFF5: ror     rdx, cl
 * 0000000140A0DFF8: mov     cl, r8b
 * 0000000140A0DFFB: xor     r9, rdx
 * 0000000140A0DFFE: rol     r9, cl
 * 0000000140A0E001: add     r9, rsi
 * 0000000140A0E004: xor     r9, r15
 * 0000000140A0E007: inc     r11d
 * 0000000140A0E00A: cmp     r11d, 19h
 * 0000000140A0E00E: jnz     short loc_140A0E024
 * 0000000140A0E010: bt      r13d, 13h
 * 0000000140A0E015: lea     eax, [r11-19h]
 * 0000000140A0E019: lea     ebx, [r11-18h]
 * 0000000140A0E01D: cmovnb  eax, r12d
 * 0000000140A0E021: add     r14d, eax
 * 0000000140A0E024: cmp     r11d, r14d
 * 0000000140A0E027: jb      loc_140A0DF66
 * 0000000140A0E02D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0E034: xor     r11d, r11d
 * 0000000140A0E037: rdtsc
 * 0000000140A0E039: shl     rdx, 20h
 * 0000000140A0E03D: mov     r9, 7010008004002001h
 * 0000000140A0E047: or      rax, rdx
 * 0000000140A0E04A: mov     ebx, 1
 * 0000000140A0E04F: mov     rcx, rax
 * 0000000140A0E052: mov     [rbp+0BE0h+var_C38], ebx
 * 0000000140A0E055: ror     rax, 3
 * 0000000140A0E059: xor     rcx, rax
 * 0000000140A0E05C: mov     rax, r9
 * 0000000140A0E05F: mul     rcx
 * 0000000140A0E062: mov     r12, rax
 * 0000000140A0E065: mov     [rbp+0BE0h+var_428], rdx
 * 0000000140A0E06C: xor     r12, rdx
 * 0000000140A0E06F: jmp     loc_140A0E0FB
 * 0000000140A0E074: mov     rax, r9
 * 0000000140A0E077: xor     rax, rcx
 * 0000000140A0E07A: mov     [r10], rax
 * 0000000140A0E07D: mov     ecx, eax
 * 0000000140A0E07F: mov     r8d, eax
 * 0000000140A0E082: not     ecx
 * 0000000140A0E084: mov     eax, r11d
 * 0000000140A0E087: xor     r8d, 0EFFh
 * 0000000140A0E08E: mov     edx, 0C8h
 * 0000000140A0E093: add     r10, 8
 * 0000000140A0E097: sub     edx, r11d
 * 0000000140A0E09A: xor     rdx, rax
 * 0000000140A0E09D: mov     eax, 19h
 * 0000000140A0E0A2: ror     rdx, cl
 * 0000000140A0E0A5: mov     cl, r8b
 * 0000000140A0E0A8: xor     r9, rdx
 * 0000000140A0E0AB: rol     r9, cl
 * 0000000140A0E0AE: add     r9, rsi
 * 0000000140A0E0B1: lea     ecx, [rax-18h]
 * 0000000140A0E0B4: xor     r9, [rbp+0BE0h+arg_8]
 * 0000000140A0E0BB: inc     r11d
 * 0000000140A0E0BE: cmp     r11d, eax
 * 0000000140A0E0C1: cmovz   ebx, ecx
 * 0000000140A0E0C4: jb      loc_140A0DAF5
 * 0000000140A0E0CA: mov     r12, [rsp+0CE0h+var_C70]
 * 0000000140A0E0CF: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0E0D6: mov     rax, [rsi+268h]
 * 0000000140A0E0DD: lea     rcx, [rsi+800h]
 * 0000000140A0E0E4: call    KeGuardDispatchICall
 * 0000000140A0E0E9: xor     r11d, r11d
 * 0000000140A0E0EC: mov     r9, 7010008004002001h
 * 0000000140A0E0F6: mov     ebx, 1
 * 0000000140A0E0FB: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A0E102: test    dword ptr [r13+990h], 10000000h
 * 0000000140A0E10D: mov     r15, [r13+7D8h]
 * 0000000140A0E114: jz      short loc_140A0E14B
 * 0000000140A0E116: rdtsc
 * 0000000140A0E118: shl     rdx, 20h
 * 0000000140A0E11C: or      rax, rdx
 * 0000000140A0E11F: mov     rcx, rax
 * 0000000140A0E122: ror     rax, 3
 * 0000000140A0E126: xor     rcx, rax
 * 0000000140A0E129: mov     rax, r9
 * 0000000140A0E12C: mul     rcx
 * 0000000140A0E12F: mov     r15, rdx
 * 0000000140A0E132: mov     [rbp+0BE0h+var_420], rdx
 * 0000000140A0E139: xor     r15, rax
 * 0000000140A0E13C: and     r15, 0Fh
 * 0000000140A0E140: shl     r15, 4
 * 0000000140A0E144: add     r15, [r13+5D0h]
 * 0000000140A0E14B: mov     r8d, 28h ; '('
 * 0000000140A0E151: lea     r14, [r13+8F8h]
 * 0000000140A0E158: mov     rcx, r14
 * 0000000140A0E15B: lea     rdx, [rbp+0BE0h+var_730]
 * 0000000140A0E162: lea     r9d, [r8-23h]
 * 0000000140A0E166: mov     rax, [rcx]
 * 0000000140A0E169: add     r8d, 0FFFFFFF8h
 * 0000000140A0E16D: mov     [rdx], rax
 * 0000000140A0E170: add     rcx, 8
 * 0000000140A0E174: add     rdx, 8
 * 0000000140A0E178: sub     r9, rbx
 * 0000000140A0E17B: jnz     short loc_140A0E166
 * 0000000140A0E17D: test    r8d, r8d
 * 0000000140A0E180: jz      short loc_140A0E19A
 * 0000000140A0E182: mov     r11d, 0FFFFFFFFh
 * 0000000140A0E188: mov     al, [rcx]
 * 0000000140A0E18A: add     rcx, rbx
 * 0000000140A0E18D: mov     [rdx], al
 * 0000000140A0E18F: add     rdx, rbx
 * 0000000140A0E192: add     r8d, r11d
 * 0000000140A0E195: jnz     short loc_140A0E188
 * 0000000140A0E197: xor     r11d, r11d
 * 0000000140A0E19A: mov     eax, [r13+990h]
 * 0000000140A0E1A1: mov     ecx, 8000h
 * 0000000140A0E1A6: test    ecx, eax
 * 0000000140A0E1A8: jnz     short loc_140A0E1B3
 * 0000000140A0E1AA: cmp     [r14], r11d
 * 0000000140A0E1AD: jnz     loc_140A0E817
 * 0000000140A0E1B3: bt      eax, 1Eh
 * 0000000140A0E1B7: jb      loc_140A0EA08
 * 0000000140A0E1BD: mov     al, [r13+920h]
 * 0000000140A0E1C4: mov     r8, r12
 * 0000000140A0E1C7: sub     al, bl
 * 0000000140A0E1C9: xor     r8, rsi
 * 0000000140A0E1CC: movzx   r10d, al
 * 0000000140A0E1D0: mov     r11d, 3Fh ; '?'
 * 0000000140A0E1D6: sub     r11d, r10d
 * 0000000140A0E1D9: rdtsc
 * 0000000140A0E1DB: shl     rdx, 20h
 * 0000000140A0E1DF: mov     rbx, 7010008004002001h
 * 0000000140A0E1E9: or      rax, rdx
 * 0000000140A0E1EC: mov     rcx, rax
 * 0000000140A0E1EF: ror     rax, 3
 * 0000000140A0E1F3: xor     rcx, rax
 * 0000000140A0E1F6: mov     rax, rbx
 * 0000000140A0E1F9: mul     rcx
 * 0000000140A0E1FC: mov     [rbp+0BE0h+var_418], rdx
 * 0000000140A0E203: xor     rax, rdx
 * 0000000140A0E206: xor     edx, edx
 * 0000000140A0E208: div     r11
 * 0000000140A0E20B: lea     r9d, [r10+rdx]
 * 0000000140A0E20F: rdtsc
 * 0000000140A0E211: shl     rdx, 20h
 * 0000000140A0E215: or      rax, rdx
 * 0000000140A0E218: mov     rcx, rax
 * 0000000140A0E21B: ror     rax, 3
 * 0000000140A0E21F: xor     rcx, rax
 * 0000000140A0E222: mov     rax, rbx
 * 0000000140A0E225: mul     rcx
 * 0000000140A0E228: xor     rax, rdx
 * 0000000140A0E22B: mov     [rbp+0BE0h+var_410], rdx
 * 0000000140A0E232: xor     edx, edx
 * 0000000140A0E234: div     r11
 * 0000000140A0E237: add     edx, r10d
 * 0000000140A0E23A: cmp     edx, r9d
 * 0000000140A0E23D: jz      short loc_140A0E20F
 * 0000000140A0E23F: mov     rbx, [r13+790h]
 * 0000000140A0E246: xor     r11d, r11d
 * 0000000140A0E249: mov     rsi, [r13+788h]
 * 0000000140A0E250: mov     eax, r9d
 * 0000000140A0E253: bts     r8, rax
 * 0000000140A0E257: mov     eax, edx
 * 0000000140A0E259: btr     r8, rax
 * 0000000140A0E25D: cmp     dword ptr [r13+924h], 3
 * 0000000140A0E265: jnz     loc_140A0E3FD
 * 0000000140A0E26B: mov     r13, [rbp+0BE0h+var_C40]
 * 0000000140A0E26F: test    r13, r13
 * 0000000140A0E272: jz      loc_140A0E3F6
 * 0000000140A0E278: mov     rcx, [rbp+0BE0h+arg_0]
 * 0000000140A0E27F: lea     edx, [r11+1]
 * 0000000140A0E283: mov     rax, [rcx+370h]
 * 0000000140A0E28A: mov     byte ptr [rbx], 13h
 * 0000000140A0E28D: mov     [rbx+1], dl
 * 0000000140A0E290: mov     [rbx+2], r11w
 * 0000000140A0E295: mov     [rbx+18h], rax
 * 0000000140A0E299: mov     [rbx+20h], r13
 * 0000000140A0E29D: mov     [rbx+38h], r11
 * 0000000140A0E2A1: mov     [rbx+10h], r11
 * 0000000140A0E2A5: mov     [rbx+28h], r8
 * 0000000140A0E2A9: mov     rax, [rcx+360h]
 * 0000000140A0E2B0: mov     rcx, [r13+8]
 * 0000000140A0E2B4: mov     r8, [r13+0]
 * 0000000140A0E2B8: mov     edx, [r13+10h]
 * 0000000140A0E2BC: call    KeGuardDispatchICall
 * 0000000140A0E2C1: mov     r9, [r13+0]
 * 0000000140A0E2C5: mov     rcx, r13
 * 0000000140A0E2C8: rol     rcx, 11h
 * 0000000140A0E2CC: mov     rax, 7010008004002001h
 * 0000000140A0E2D6: xor     rcx, r13
 * 0000000140A0E2D9: mov     r10d, 4
 * 0000000140A0E2DF: mul     rcx
 * 0000000140A0E2E2: mov     [rbp+0BE0h+var_408], rdx
 * 0000000140A0E2E9: xor     rdx, rax
 * 0000000140A0E2EC: lea     rax, [r13+18h]
 * 0000000140A0E2F0: mov     r8, rdx
 * 0000000140A0E2F3: xor     r11d, r11d
 * 0000000140A0E2F6: lea     r13d, [r10-3]
 * 0000000140A0E2FA: xor     [rax], r8
 * 0000000140A0E2FD: mov     ecx, r10d
 * 0000000140A0E300: rol     r8, cl
 * 0000000140A0E303: lea     rax, [rax-8]
 * 0000000140A0E307: sub     r10d, r13d
 * 0000000140A0E30A: jnz     short loc_140A0E2FA
 * 0000000140A0E30C: and     dl, 0Fh
 * 0000000140A0E30F: cmp     dl, 7
 * 0000000140A0E312: jnb     short loc_140A0E381
 * 0000000140A0E314: mov     rcx, r9
 * 0000000140A0E317: mov     rax, 7010008004002001h
 * 0000000140A0E321: rol     rcx, 11h
 * 0000000140A0E325: mov     r10d, 6
 * 0000000140A0E32B: xor     rcx, r9
 * 0000000140A0E32E: mul     rcx
 * 0000000140A0E331: mov     [rbp+0BE0h+var_400], rdx
 * 0000000140A0E338: xor     rdx, rax
 * 0000000140A0E33B: add     r8, rdx
 * 0000000140A0E33E: lea     rax, [r9+28h]
 * 0000000140A0E342: movsx   edx, word ptr [r9+8]
 * 0000000140A0E347: xor     [rax], r8
 * 0000000140A0E34A: mov     ecx, r10d
 * 0000000140A0E34D: rol     r8, cl
 * 0000000140A0E350: lea     rax, [rax-8]
 * 0000000140A0E354: sub     r10d, r13d
 * 0000000140A0E357: jnz     short loc_140A0E347
 * 0000000140A0E359: sub     rdx, 30h ; '0'
 * 0000000140A0E35D: shr     rdx, 3
 * 0000000140A0E361: test    edx, edx
 * 0000000140A0E363: jz      short loc_140A0E381
 * 0000000140A0E365: movsxd  r10, edx
 * 0000000140A0E368: add     r10, 5
 * 0000000140A0E36C: lea     r10, [r9+r10*8]
 * 0000000140A0E370: xor     [r10], r8
 * 0000000140A0E373: mov     ecx, edx
 * 0000000140A0E375: rol     r8, cl
 * 0000000140A0E378: lea     r10, [r10-8]
 * 0000000140A0E37C: sub     edx, r13d
 * 0000000140A0E37F: jnz     short loc_140A0E370
 * 0000000140A0E381: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A0E388: mov     [rbx+40h], r12
 * 0000000140A0E38C: mov     r12, 7010008004002001h
 * 0000000140A0E396: test    dword ptr [r13+990h], 100h
 * 0000000140A0E3A1: jz      short loc_140A0E422
 * 0000000140A0E3A3: lea     r9, [r15-48h]
 * 0000000140A0E3A7: mov     [r9+40h], rbx
 * 0000000140A0E3AB: rdtsc
 * 0000000140A0E3AD: shl     rdx, 20h
 * 0000000140A0E3B1: mov     r8d, 19h
 * 0000000140A0E3B7: or      rax, rdx
 * 0000000140A0E3BA: mov     rcx, rax
 * 0000000140A0E3BD: ror     rax, 3
 * 0000000140A0E3C1: xor     rcx, rax
 * 0000000140A0E3C4: mov     rax, r12
 * 0000000140A0E3C7: mul     rcx
 * 0000000140A0E3CA: lea     r15d, [r8-18h]
 * 0000000140A0E3CE: mov     [rbp+0BE0h+var_3F8], rdx
 * 0000000140A0E3D5: xor     rdx, rax
 * 0000000140A0E3D8: lea     rax, [r9+48h]
 * 0000000140A0E3DC: xor     [rax], rdx
 * 0000000140A0E3DF: lea     rax, [rax+8]
 * 0000000140A0E3E3: sub     r8, r15
 * 0000000140A0E3E6: jnz     short loc_140A0E3DC
 * 0000000140A0E3E8: mov     dword ptr [r9+48h], 48513148h
 * 0000000140A0E3F0: mov     [r9+20h], rdx
 * 0000000140A0E3F4: jmp     short loc_140A0E42B
 * 0000000140A0E3F6: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A0E3FD: mov     byte ptr [rbx], 13h
 * 0000000140A0E400: mov     eax, 1
 * 0000000140A0E405: mov     [rbx+1], al
 * 0000000140A0E408: mov     [rbx+2], r11w
 * 0000000140A0E40D: mov     [rbx+18h], r15
 * 0000000140A0E411: mov     [rbx+20h], r8
 * 0000000140A0E415: mov     [rbx+38h], r11
 * 0000000140A0E419: mov     [rbx+10h], r11
 * 0000000140A0E41D: jmp     loc_140A0E388
 * 0000000140A0E422: mov     r9, rbx
 * 0000000140A0E425: mov     r15d, 1
 * 0000000140A0E42B: mov     r10, [r13+0A98h]
 * 0000000140A0E432: test    r10, r10
 * 0000000140A0E435: jz      loc_140A0E4CA
 * 0000000140A0E43B: mov     r10, [r10+20h]
 * 0000000140A0E43F: mov     eax, 0E0E20100h
 * 0000000140A0E444: mov     rcx, r10
 * 0000000140A0E447: xor     rcx, rax
 * 0000000140A0E44A: shr     rcx, 4
 * 0000000140A0E44E: xor     rcx, r10
 * 0000000140A0E451: shr     rcx, 4
 * 0000000140A0E455: xor     rcx, [r13+590h]
 * 0000000140A0E45C: mov     al, cl
 * 0000000140A0E45E: mov     r8, rcx
 * 0000000140A0E461: and     al, 0Fh
 * 0000000140A0E463: movzx   r11d, al
 * 0000000140A0E467: cmovz   r11d, r15d
 * 0000000140A0E46B: xor     eax, eax
 * 0000000140A0E46D: mov     edx, eax
 * 0000000140A0E46F: test    r11b, r11b
 * 0000000140A0E472: jz      short loc_140A0E4AB
 * 0000000140A0E474: lea     r12d, [rax+0Fh]
 * 0000000140A0E478: mov     rdx, rcx
 * 0000000140A0E47B: and     rdx, r12
 * 0000000140A0E47E: add     rdx, r10
 * 0000000140A0E481: mov     r10, [rdx]
 * 0000000140A0E484: mov     rax, r10
 * 0000000140A0E487: xor     rax, 1DFE00h
 * 0000000140A0E48D: shr     rax, 4
 * 0000000140A0E491: xor     rax, r10
 * 0000000140A0E494: shr     rax, 4
 * 0000000140A0E498: xor     rcx, rax
 * 0000000140A0E49B: add     r11b, 0FFh
 * 0000000140A0E49F: jnz     short loc_140A0E478
 * 0000000140A0E4A1: mov     r12, 7010008004002001h
 * 0000000140A0E4AB: mov     rax, r8
 * 0000000140A0E4AE: xor     r11d, r11d
 * 0000000140A0E4B1: xor     r8, r9
 * 0000000140A0E4B4: and     eax, 1000h
 * 0000000140A0E4B9: test    rax, rax
 * 0000000140A0E4BC: cmovz   r8, r9
 * 0000000140A0E4C0: mov     [rdx], r8
 * 0000000140A0E4C3: mov     r9, [r13+0A98h]
 * 0000000140A0E4CA: lock or [rsp+0CE0h+var_CE0], r11d
 * 0000000140A0E4CF: mov     ecx, [r13+838h]
 * 0000000140A0E4D6: test    ecx, ecx
 * 0000000140A0E4D8: jz      loc_140A0E767
 * 0000000140A0E4DE: sub     ecx, 1
 * 0000000140A0E4E1: jz      loc_140A0E750
 * 0000000140A0E4E7: sub     ecx, 1
 * 0000000140A0E4EA: jz      loc_140A0E73D
 * 0000000140A0E4F0: sub     ecx, 1
 * 0000000140A0E4F3: jz      loc_140A0E681
 * 0000000140A0E4F9: cmp     ecx, 1
 * 0000000140A0E4FC: jz      loc_140A0E583
 * 0000000140A0E502: mov     r8, [r13+998h]
 * 0000000140A0E509: mov     [r8+48h], r9
 * 0000000140A0E50D: lock or [rsp+0CE0h+var_CE0], r11d
 * 0000000140A0E512: rdtsc
 * 0000000140A0E514: shl     rdx, 20h
 * 0000000140A0E518: or      rax, rdx
 * 0000000140A0E51B: mov     rcx, rax
 * 0000000140A0E51E: mov     rdx, rax
 * 0000000140A0E521: ror     rcx, 3
 * 0000000140A0E525: mov     rax, r12
 * 0000000140A0E528: xor     rdx, rcx
 * 0000000140A0E52B: mul     rdx
 * 0000000140A0E52E: mov     rcx, rdx
 * 0000000140A0E531: mov     [rbp+0BE0h+var_3F0], rdx
 * 0000000140A0E538: xor     rcx, rax
 * 0000000140A0E53B: mov     rax, 0ABCC77118461CEFDh
 * 0000000140A0E545: mul     rcx
 * 0000000140A0E548: shr     rdx, 1Ah
 * 0000000140A0E54C: imul    rax, rdx, 5F5E100h
 * 0000000140A0E553: sub     rcx, rax
 * 0000000140A0E556: mov     rax, 0D6BF94D5E57A42BDh
 * 0000000140A0E560: add     rcx, 47868C00h
 * 0000000140A0E567: imul    rcx
 * 0000000140A0E56A: add     rdx, rcx
 * 0000000140A0E56D: sar     rdx, 17h
 * 0000000140A0E571: mov     rax, rdx
 * 0000000140A0E574: shr     rax, 3Fh
 * 0000000140A0E578: add     rdx, rax
 * 0000000140A0E57B: mov     [r8], edx
 * 0000000140A0E57E: jmp     loc_140A0E812
 * 0000000140A0E583: mov     r8, [r13+9E0h]
 * 0000000140A0E58A: xor     r9d, r9d
 * 0000000140A0E58D: mov     rcx, [r13+9F0h]
 * 0000000140A0E594: mov     rdx, rbx
 * 0000000140A0E597: mov     rax, [r13+9E8h]
 * 0000000140A0E59E: mov     rdi, [r13+998h]
 * 0000000140A0E5A5: mov     byte ptr [r8], 12h
 * 0000000140A0E5A9: mov     byte ptr [r8+2], 58h ; 'X'
 * 0000000140A0E5AE: mov     [r8+50h], r11b
 * 0000000140A0E5B2: mov     [r8+8], rdi
 * 0000000140A0E5B6: mov     [r8+20h], rax
 * 0000000140A0E5BA: mov     [r8+28h], r11
 * 0000000140A0E5BE: mov     [r8+30h], rcx
 * 0000000140A0E5C2: mov     [r8+51h], r11b
 * 0000000140A0E5C6: mov     [r8+38h], r11
 * 0000000140A0E5CA: mov     [r8+52h], r11b
 * 0000000140A0E5CE: xor     r8d, r8d
 * 0000000140A0E5D1: mov     rax, [r13+2C0h]
 * 0000000140A0E5D8: mov     rcx, [r13+9E0h]
 * 0000000140A0E5DF: call    KeGuardDispatchICall
 * 0000000140A0E5E4: xor     r11d, r11d
 * 0000000140A0E5E7: test    al, al
 * 0000000140A0E5E9: jnz     loc_140A0E812
 * 0000000140A0E5EF: cmp     [r14], r11d
 * 0000000140A0E5F2: jnz     short loc_140A0E631
 * 0000000140A0E5F4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0E5FE: xor     edx, edx
 * 0000000140A0E600: add     rax, r13
 * 0000000140A0E603: mov     rcx, r13
 * 0000000140A0E606: mov     [r13+900h], rax
 * 0000000140A0E60D: mov     [r13+908h], r11
 * 0000000140A0E614: mov     qword ptr [r13+910h], 104h
 * 0000000140A0E61F: mov     [r13+918h], rdi
 * 0000000140A0E626: mov     [r14], r15d
 * 0000000140A0E629: call    $$b8
 * 0000000140A0E62E: xor     r11d, r11d
 * 0000000140A0E631: mov     edx, 28h ; '('
 * 0000000140A0E636: lea     rcx, [rbp+0BE0h+var_730]
 * 0000000140A0E63D: lea     r13d, [rdx-23h]
 * 0000000140A0E641: mov     rax, [r14]
 * 0000000140A0E644: add     edx, 0FFFFFFF8h
 * 0000000140A0E647: mov     [rcx], rax
 * 0000000140A0E64A: add     r14, 8
 * 0000000140A0E64E: add     rcx, 8
 * 0000000140A0E652: sub     r13, r15
 * 0000000140A0E655: jnz     short loc_140A0E641
 * 0000000140A0E657: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A0E65E: test    edx, edx
 * 0000000140A0E660: jz      loc_140A0E812
 * 0000000140A0E666: mov     r11d, 0FFFFFFFFh
 * 0000000140A0E66C: mov     al, [r14]
 * 0000000140A0E66F: add     r14, r15
 * 0000000140A0E672: mov     [rcx], al
 * 0000000140A0E674: add     rcx, r15
 * 0000000140A0E677: add     edx, r11d
 * 0000000140A0E67A: jnz     short loc_140A0E66C
 * 0000000140A0E67C: jmp     loc_140A0E80F
 * 0000000140A0E681: mov     rdi, [r13+998h]
 * 0000000140A0E688: mov     rax, [r13+698h]
 * 0000000140A0E68F: mov     rcx, [rdi+rax]
 * 0000000140A0E693: test    rcx, rcx
 * 0000000140A0E696: jz      loc_140A0E728
 * 0000000140A0E69C: cmp     [r14], r11d
 * 0000000140A0E69F: jnz     short loc_140A0E6DE
 * 0000000140A0E6A1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0E6AB: xor     edx, edx
 * 0000000140A0E6AD: add     rax, r13
 * 0000000140A0E6B0: mov     [r13+900h], rax
 * 0000000140A0E6B7: mov     [r13+908h], r11
 * 0000000140A0E6BE: mov     qword ptr [r13+910h], 104h
 * 0000000140A0E6C9: mov     [r13+918h], rcx
 * 0000000140A0E6D0: mov     rcx, r13
 * 0000000140A0E6D3: mov     [r14], r15d
 * 0000000140A0E6D6: call    $$b8
 * 0000000140A0E6DB: xor     r11d, r11d
 * 0000000140A0E6DE: mov     edx, 28h ; '('
 * 0000000140A0E6E3: lea     rcx, [rbp+0BE0h+var_730]
 * 0000000140A0E6EA: lea     r13d, [rdx-23h]
 * 0000000140A0E6EE: mov     rax, [r14]
 * 0000000140A0E6F1: add     edx, 0FFFFFFF8h
 * 0000000140A0E6F4: mov     [rcx], rax
 * 0000000140A0E6F7: add     r14, 8
 * 0000000140A0E6FB: add     rcx, 8
 * 0000000140A0E6FF: sub     r13, r15
 * 0000000140A0E702: jnz     short loc_140A0E6EE
 * 0000000140A0E704: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A0E70B: test    edx, edx
 * 0000000140A0E70D: jz      short loc_140A0E728
 * 0000000140A0E70F: mov     r11d, 0FFFFFFFFh
 * 0000000140A0E715: mov     al, [r14]
 * 0000000140A0E718: add     r14, r15
 * 0000000140A0E71B: mov     [rcx], al
 * 0000000140A0E71D: add     rcx, r15
 * 0000000140A0E720: add     edx, r11d
 * 0000000140A0E723: jnz     short loc_140A0E715
 * 0000000140A0E725: xor     r11d, r11d
 * 0000000140A0E728: lock or [rsp+0CE0h+var_CE0], r11d
 * 0000000140A0E72D: mov     rax, [r13+698h]
 * 0000000140A0E734: mov     [rdi+rax], rbx
 * 0000000140A0E738: jmp     loc_140A0E812
 * 0000000140A0E73D: mov     rax, [r13+7C0h]
 * 0000000140A0E744: mov     [rax+80h], r9
 * 0000000140A0E74B: jmp     loc_140A0E812
 * 0000000140A0E750: mov     rcx, [r13+7C0h]
 * 0000000140A0E757: mov     rax, [r13+630h]
 * 0000000140A0E75E: mov     [rcx+rax], r9
 * 0000000140A0E762: jmp     loc_140A0E812
 * 0000000140A0E767: rdtsc
 * 0000000140A0E769: shl     rdx, 20h
 * 0000000140A0E76D: or      rax, rdx
 * 0000000140A0E770: mov     rcx, rax
 * 0000000140A0E773: mov     rdx, rax
 * 0000000140A0E776: ror     rcx, 3
 * 0000000140A0E77A: mov     rax, r12
 * 0000000140A0E77D: xor     rdx, rcx
 * 0000000140A0E780: mul     rdx
 * 0000000140A0E783: mov     rcx, rdx
 * 0000000140A0E786: mov     [rbp+0BE0h+var_3E8], rdx
 * 0000000140A0E78D: xor     rcx, rax
 * 0000000140A0E790: mov     rax, 0ABCC77118461CEFDh
 * 0000000140A0E79A: mul     rcx
 * 0000000140A0E79D: shr     rdx, 1Ah
 * 0000000140A0E7A1: imul    rax, rdx, 5F5E100h
 * 0000000140A0E7A8: sub     rcx, rax
 * 0000000140A0E7AB: sub     rdi, rcx
 * 0000000140A0E7AE: rdtsc
 * 0000000140A0E7B0: shl     rdx, 20h
 * 0000000140A0E7B4: or      rax, rdx
 * 0000000140A0E7B7: mov     [rsp+0CE0h+BugCheckParameter4], r9
 * 0000000140A0E7BC: mov     rcx, rax
 * 0000000140A0E7BF: mov     rdx, rax
 * 0000000140A0E7C2: ror     rcx, 3
 * 0000000140A0E7C6: mov     rax, r12
 * 0000000140A0E7C9: xor     rdx, rcx
 * 0000000140A0E7CC: mov     rcx, rsi
 * 0000000140A0E7CF: mul     rdx
 * 0000000140A0E7D2: mov     r8, rdx
 * 0000000140A0E7D5: mov     [rbp+0BE0h+var_3E0], rdx
 * 0000000140A0E7DC: xor     r8, rax
 * 0000000140A0E7DF: mov     rax, 346DC5D63886594Bh
 * 0000000140A0E7E9: mul     r8
 * 0000000140A0E7EC: shr     rdx, 0Bh
 * 0000000140A0E7F0: imul    rax, rdx, 2710h
 * 0000000140A0E7F7: mov     rdx, rdi
 * 0000000140A0E7FA: sub     r8, rax
 * 0000000140A0E7FD: mov     rax, [r13+1D8h]
 * 0000000140A0E804: mov     r9d, r8d
 * 0000000140A0E807: xor     r8d, r8d
 * 0000000140A0E80A: call    KeGuardDispatchICall
 * 0000000140A0E80F: xor     r11d, r11d
 * 0000000140A0E812: mov     ecx, 8000h
 * 0000000140A0E817: cmp     [rbp+0BE0h+var_730], r11d
 * 0000000140A0E81E: jz      loc_140A0EA08
 * 0000000140A0E824: test    [r13+990h], ecx
 * 0000000140A0E82B: jnz     loc_140A0EA08
 * 0000000140A0E831: mov     r13, [rbp+0BE0h+var_718]
 * 0000000140A0E838: mov     rbx, [rbp+0BE0h+var_710]
 * 0000000140A0E83F: mov     rdi, [rbp+0BE0h+var_720]
 * 0000000140A0E846: mov     r14, [rbp+0BE0h+var_728]
 * 0000000140A0E84D: mov     rax, [rbp+0BE0h+arg_0]
 * 0000000140A0E854: mov     [rbp+0BE0h+arg_8], r13
 * 0000000140A0E85B: mov     [rsp+0CE0h+var_C70], rbx
 * 0000000140A0E860: mov     [rbp+0BE0h+var_BD0], rdi
 * 0000000140A0E864: mov     [rbp+0BE0h+var_C40], r14
 * 0000000140A0E868: mov     [rbp+0BE0h+var_BB8], rax
 * 0000000140A0E86C: mov     rax, cr8
 * 0000000140A0E870: mov     r8d, 2
 * 0000000140A0E876: cmp     al, r8b
 * 0000000140A0E879: jnb     short loc_140A0E883
 * 0000000140A0E87B: mov     rax, cr8
 * 0000000140A0E87F: mov     cr8, r8
 * 0000000140A0E883: mov     rdx, gs:20h
 * 0000000140A0E88C: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A0E890: mov     rcx, [rax+638h]
 * 0000000140A0E897: mov     rsi, [rdx+rcx]
 * 0000000140A0E89B: mov     rcx, gs:20h
 * 0000000140A0E8A4: mov     r9, [rbp+0BE0h+var_BB8]
 * 0000000140A0E8A8: mov     rax, [r9+648h]
 * 0000000140A0E8AF: mov     r15, [rcx+rax]
 * 0000000140A0E8B3: mov     rax, [r9+640h]
 * 0000000140A0E8BA: mov     [rbp+0BE0h+arg_0], r15
 * 0000000140A0E8C1: cmp     [rdx+rax], r11b
 * 0000000140A0E8C5: jz      short loc_140A0E8E0
 * 0000000140A0E8C7: lea     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A0E8CB: cmp     rax, rsi
 * 0000000140A0E8CE: ja      short loc_140A0E8E0
 * 0000000140A0E8D0: lea     rax, [rsi-6000h]
 * 0000000140A0E8D7: lea     rcx, [rbp+0BE0h+var_BB8]
 * 0000000140A0E8DB: cmp     rcx, rax
 * 0000000140A0E8DE: jnb     short loc_140A0E8EF
 * 0000000140A0E8E0: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A0E8E4: mov     rcx, [rax+678h]
 * 0000000140A0E8EB: mov     rsi, [r15+rcx]
 * 0000000140A0E8EF: mov     r9, [rbp+0BE0h+var_BB8]
 * 0000000140A0E8F3: test    dword ptr [r9+990h], 8000000h
 * 0000000140A0E8FE: jnz     loc_140A0ED44
 * 0000000140A0E904: mov     r12, cr0
 * 0000000140A0E908: mov     rax, r12
 * 0000000140A0E90B: btr     rax, 10h
 * 0000000140A0E910: mov     cr0, rax
 * 0000000140A0E913: mov     eax, [r9+0AA0h]
 * 0000000140A0E91A: lea     r14, [r9+0AA8h]
 * 0000000140A0E921: shl     rax, 4
 * 0000000140A0E925: lea     r10, [r9+0AA8h]
 * 0000000140A0E92C: add     r14, rax
 * 0000000140A0E92F: mov     r8d, r11d
 * 0000000140A0E932: mov     rdx, r14
 * 0000000140A0E935: cmp     [r9+0AA4h], r11d
 * 0000000140A0E93C: jbe     short loc_140A0E98D
 * 0000000140A0E93E: mov     r11d, 1
 * 0000000140A0E944: lea     r13d, [r11+0Fh]
 * 0000000140A0E948: mov     rcx, [rdx]
 * 0000000140A0E94B: mov     rax, [rdx+8]
 * 0000000140A0E94F: mov     [rcx], rax
 * 0000000140A0E952: mov     rcx, cr4
 * 0000000140A0E955: test    rcx, 20080h
 * 0000000140A0E95C: jz      short loc_140A0E96E
 * 0000000140A0E95E: mov     rax, rcx
 * 0000000140A0E961: btc     rax, 7
 * 0000000140A0E966: mov     cr4, rax
 * 0000000140A0E969: mov     cr4, rcx
 * 0000000140A0E96C: jmp     short loc_140A0E974
 * 0000000140A0E96E: mov     rax, cr3
 * 0000000140A0E971: mov     cr3, rax
 * 0000000140A0E974: add     rdx, r13
 * 0000000140A0E977: add     r8d, r11d
 * 0000000140A0E97A: cmp     r8d, [r9+0AA4h]
 * 0000000140A0E981: jb      short loc_140A0E948
 * 0000000140A0E983: mov     r13, [rbp+0BE0h+arg_8]
 * 0000000140A0E98A: xor     r11d, r11d
 * 0000000140A0E98D: cmp     r10, r14
 * 0000000140A0E990: jnb     loc_140A0ED2C
 * 0000000140A0E996: xor     r13d, r13d
 * 0000000140A0E999: mov     r15d, 0FFFFFFFFh
 * 0000000140A0E99F: mov     edi, [r10+8]
 * 0000000140A0E9A3: mov     rcx, rdx
 * 0000000140A0E9A6: mov     r8, [r10]
 * 0000000140A0E9A9: mov     r11d, edi
 * 0000000140A0E9AC: cmp     edi, 8
 * 0000000140A0E9AF: jb      short loc_140A0E9D7
 * 0000000140A0E9B1: mov     ebx, edi
 * 0000000140A0E9B3: mov     r13d, 1
 * 0000000140A0E9B9: shr     rbx, 3
 * 0000000140A0E9BD: mov     rax, [rcx]
 * 0000000140A0E9C0: add     r11d, 0FFFFFFF8h
 * 0000000140A0E9C4: mov     [r8], rax
 * 0000000140A0E9C7: add     rcx, 8
 * 0000000140A0E9CB: add     r8, 8
 * 0000000140A0E9CF: sub     rbx, r13
 * 0000000140A0E9D2: jnz     short loc_140A0E9BD
 * 0000000140A0E9D4: xor     r13d, r13d
 * 0000000140A0E9D7: test    r11d, r11d
 * 0000000140A0E9DA: jz      short loc_140A0E9F6
 * 0000000140A0E9DC: sub     r8, rcx
 * 0000000140A0E9DF: mov     r13d, 1
 * 0000000140A0E9E5: mov     al, [rcx]
 * 0000000140A0E9E7: mov     [r8+rcx], al
 * 0000000140A0E9EB: add     rcx, r13
 * 0000000140A0E9EE: add     r11d, r15d
 * 0000000140A0E9F1: jnz     short loc_140A0E9E5
 * 0000000140A0E9F3: xor     r13d, r13d
 * 0000000140A0E9F6: add     rdx, rdi
 * 0000000140A0E9F9: add     r10, 10h
 * 0000000140A0E9FD: cmp     r10, r14
 * 0000000140A0EA00: jnb     loc_140A0ED12
 * 0000000140A0EA06: jmp     short loc_140A0E99F
 * 0000000140A0EA08: test    dword ptr [r13+990h], 40000000h
 * 0000000140A0EA13: jnz     short loc_140A0EA5F
 * 0000000140A0EA15: cmp     [rbp+0BE0h+var_C38], r11d
 * 0000000140A0EA19: jz      short loc_140A0EA5F
 * 0000000140A0EA1B: mov     ecx, [r13+924h]
 * 0000000140A0EA22: sub     ecx, 1
 * 0000000140A0EA25: jz      short loc_140A0EA39
 * 0000000140A0EA27: mov     eax, 2
 * 0000000140A0EA2C: cmp     ecx, eax
 * 0000000140A0EA2E: jnz     short loc_140A0EA5F
 * 0000000140A0EA30: mov     rax, [r13+368h]
 * 0000000140A0EA37: jmp     short loc_140A0EA58
 * 0000000140A0EA39: add     qword ptr [r13+7C8h], 0FFFFFFFFFFFFFFF8h
 * 0000000140A0EA41: mov     rax, [r13+7C8h]
 * 0000000140A0EA48: mov     ecx, [rax]
 * 0000000140A0EA4A: mov     [r13+7D0h], ecx
 * 0000000140A0EA51: mov     rax, [r13+228h]
 * 0000000140A0EA58: mov     [r13+100h], rax
 * 0000000140A0EA5F: mov     rax, r13
 * 0000000140A0EA62: add     rsp, 0CA8h
 * 0000000140A0EA69: pop     r15
 * 0000000140A0EA6B: pop     r14
 * 0000000140A0EA6D: pop     r13
 * 0000000140A0EA6F: pop     r12
 * 0000000140A0EA71: pop     rdi
 * 0000000140A0EA72: pop     rsi
 * 0000000140A0EA73: pop     rbx
 * 0000000140A0EA74: pop     rbp
 * 0000000140A0EA75: retn
 * 0000000140A0EA76: mov     [rbp+0BE0h+var_A24], 0D0002D61h
 * 0000000140A0EA80: xor     r9d, r9d; BugCheckParameter3
 * 0000000140A0EA83: mov     ecx, [rbp+0BE0h+var_A24]
 * 0000000140A0EA89: mov     r8, r12; BugCheckParameter2
 * 0000000140A0EA8C: xor     ecx, 2D72h
 * 0000000140A0EA92: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0EA97: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0EA9A: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140A0EA9E: call    KeBugCheckEx
 * 0000000140A0EAA4: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A0EAA9: mov     r9, r15; BugCheckParameter3
 * 0000000140A0EAAC: mov     [rbp+0BE0h+var_9F0], 0D0002D61h
 * 0000000140A0EAB6: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140A0EABB: mov     ecx, [rbp+0BE0h+var_9F0]
 * 0000000140A0EAC1: xor     ecx, 2D72h
 * 0000000140A0EAC7: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0EACC: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0EACF: call    KeBugCheckEx
 * 0000000140A0EAD5: mov     [rbp+0BE0h+var_9EC], 0D0002D61h
 * 0000000140A0EADF: mov     ecx, [rbp+0BE0h+var_9EC]
 * 0000000140A0EAE5: xor     ecx, 2D72h
 * 0000000140A0EAEB: mov     r9d, edx; BugCheckParameter3
 * 0000000140A0EAEE: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0EAF1: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140A0EAF6: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0EAFB: call    KeBugCheckEx
 * 0000000140A0EB01: mov     [rbp+0BE0h+var_9E8], 0D0002D61h
 * 0000000140A0EB0B: mov     ecx, [rbp+0BE0h+var_9E8]
 * 0000000140A0EB11: xor     ecx, 2D72h
 * 0000000140A0EB17: mov     r9d, edx; BugCheckParameter3
 * 0000000140A0EB1A: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0EB1D: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140A0EB22: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0EB27: call    KeBugCheckEx
 * 0000000140A0EB2D: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A0EB32: mov     r9d, 2; BugCheckParameter3
 * 0000000140A0EB38: mov     [rbp+0BE0h+var_A5C], 0D0002D61h
 * 0000000140A0EB42: mov     ecx, [rbp+0BE0h+var_A5C]
 * 0000000140A0EB48: xor     ecx, 2D72h
 * 0000000140A0EB4E: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0EB53: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0EB56: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140A0EB5A: call    KeBugCheckEx
 * 0000000140A0EB60: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A0EB65: mov     r9d, 3; BugCheckParameter3
 * 0000000140A0EB6B: mov     [rbp+0BE0h+var_9E4], 0D0002D61h
 * 0000000140A0EB75: mov     ecx, [rbp+0BE0h+var_9E4]
 * 0000000140A0EB7B: xor     ecx, 2D72h
 * 0000000140A0EB81: mov     [rsp+0CE0h+BugCheckParameter4], rdx; BugCheckParameter4
 * 0000000140A0EB86: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0EB89: lea     edx, [r9+7]; BugCheckParameter1
 * 0000000140A0EB8D: call    KeBugCheckEx
 * 0000000140A0EB93: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A0EB98: mov     r9d, 6; BugCheckParameter3
 * 0000000140A0EB9E: mov     [rbp+0BE0h+var_9E0], 0D0002D61h
 * 0000000140A0EBA8: mov     ecx, [rbp+0BE0h+var_9E0]
 * 0000000140A0EBAE: xor     ecx, 2D72h
 * 0000000140A0EBB4: mov     [rsp+0CE0h+BugCheckParameter4], rdx; BugCheckParameter4
 * 0000000140A0EBB9: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0EBBC: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140A0EBC0: call    KeBugCheckEx
 * 0000000140A0EBC6: mov     [rbp+0BE0h+var_A78], 0D0002D61h
 * 0000000140A0EBD0: xor     r9d, r9d; BugCheckParameter3
 * 0000000140A0EBD3: mov     ecx, [rbp+0BE0h+var_A78]
 * 0000000140A0EBD9: mov     r8, r14; BugCheckParameter2
 * 0000000140A0EBDC: xor     ecx, 2D72h
 * 0000000140A0EBE2: mov     [rsp+0CE0h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140A0EBE7: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0EBEA: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140A0EBEE: call    KeBugCheckEx
 * 0000000140A0EBF4: xor     eax, eax
 * 0000000140A0EBF6: mov     [rbp+0BE0h+var_A64], 0D0002D61h
 * 0000000140A0EC00: mov     ecx, [rbp+0BE0h+var_A64]
 * 0000000140A0EC06: mov     r8, r14; BugCheckParameter2
 * 0000000140A0EC09: xor     ecx, 2D72h
 * 0000000140A0EC0F: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0EC14: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0EC17: lea     r9d, [rax+3]; BugCheckParameter3
 * 0000000140A0EC1B: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140A0EC1E: call    KeBugCheckEx
 * 0000000140A0EC24: mov     [rbp+0BE0h+var_A74], 0D0002D61h
 * 0000000140A0EC2E: mov     r8, r14; BugCheckParameter2
 * 0000000140A0EC31: mov     ecx, [rbp+0BE0h+var_A74]
 * 0000000140A0EC37: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140A0EC3C: xor     ecx, 2D72h
 * 0000000140A0EC42: mov     [rsp+0CE0h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140A0EC47: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0EC4A: mov     r9, r13; BugCheckParameter3
 * 0000000140A0EC4D: call    KeBugCheckEx
 * 0000000140A0EC53: xor     eax, eax
 * 0000000140A0EC55: mov     [rbp+0BE0h+var_A70], 0D0002D61h
 * 0000000140A0EC5F: mov     ecx, [rbp+0BE0h+var_A70]
 * 0000000140A0EC65: mov     r8, r14; BugCheckParameter2
 * 0000000140A0EC68: xor     ecx, 2D72h
 * 0000000140A0EC6E: mov     r9d, edx; BugCheckParameter3
 * 0000000140A0EC71: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0EC74: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140A0EC77: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0EC7C: call    KeBugCheckEx
 * 0000000140A0EC82: xor     eax, eax
 * 0000000140A0EC84: mov     [rbp+0BE0h+var_A6C], 0D0002D61h
 * 0000000140A0EC8E: mov     ecx, [rbp+0BE0h+var_A6C]
 * 0000000140A0EC94: xor     ecx, 2D72h
 * 0000000140A0EC9A: mov     r9d, edx; BugCheckParameter3
 * 0000000140A0EC9D: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0ECA0: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140A0ECA3: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0ECA8: call    KeBugCheckEx
 * 0000000140A0ECAE: mov     [rsp+0CE0h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140A0ECB3: mov     r8, r14; BugCheckParameter2
 * 0000000140A0ECB6: mov     r9d, 2; BugCheckParameter3
 * 0000000140A0ECBC: mov     [rbp+0BE0h+var_A68], 0D0002D61h
 * 0000000140A0ECC6: mov     ecx, [rbp+0BE0h+var_A68]
 * 0000000140A0ECCC: xor     ecx, 2D72h
 * 0000000140A0ECD2: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0ECD5: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140A0ECD9: call    KeBugCheckEx
 * 0000000140A0ECDF: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A0ECE4: mov     r9d, 6; BugCheckParameter3
 * 0000000140A0ECEA: mov     [rbp+0BE0h+var_A60], 0D0002D61h
 * 0000000140A0ECF4: mov     ecx, [rbp+0BE0h+var_A60]
 * 0000000140A0ECFA: xor     ecx, 2D72h
 * 0000000140A0ED00: mov     [rsp+0CE0h+BugCheckParameter4], rsi; BugCheckParameter4
 * 0000000140A0ED05: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0ED08: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140A0ED0C: call    KeBugCheckEx
 * 0000000140A0ED12: mov     r15, [rbp+0BE0h+arg_0]
 * 0000000140A0ED19: xor     r11d, r11d
 * 0000000140A0ED1C: mov     r13, [rbp+0BE0h+arg_8]
 * 0000000140A0ED23: mov     rbx, [rsp+0CE0h+var_C70]
 * 0000000140A0ED28: mov     rdi, [rbp+0BE0h+var_BD0]
 * 0000000140A0ED2C: mov     rax, [r9+218h]
 * 0000000140A0ED33: mov     byte ptr [rax], 0C3h
 * 0000000140A0ED36: mov     cr0, r12
 * 0000000140A0ED3A: mov     r14, [rbp+0BE0h+var_C40]
 * 0000000140A0ED3E: mov     r8d, 2
 * 0000000140A0ED44: mov     r9, [rbp+0BE0h+var_BB8]
 * 0000000140A0ED48: mov     ecx, [r9+928h]
 * 0000000140A0ED4F: test    ecx, ecx
 * 0000000140A0ED51: jz      loc_140A0EE37
 * 0000000140A0ED57: mov     rax, cr8
 * 0000000140A0ED5B: cmp     al, r8b
 * 0000000140A0ED5E: jnb     short loc_140A0ED6F
 * 0000000140A0ED60: mov     rax, cr8
 * 0000000140A0ED64: mov     cr8, r8
 * 0000000140A0ED68: mov     ecx, [r9+928h]
 * 0000000140A0ED6F: test    ecx, ecx
 * 0000000140A0ED71: jz      loc_140A0EE37
 * 0000000140A0ED77: sub     ecx, 1
 * 0000000140A0ED7A: jz      loc_140A0EE2A
 * 0000000140A0ED80: sub     ecx, 1
 * 0000000140A0ED83: jz      loc_140A0EE21
 * 0000000140A0ED89: sub     ecx, 1
 * 0000000140A0ED8C: jz      loc_140A0EE18
 * 0000000140A0ED92: sub     ecx, 1
 * 0000000140A0ED95: jz      short loc_140A0EDDC
 * 0000000140A0ED97: cmp     ecx, 1
 * 0000000140A0ED9A: jz      short loc_140A0EDB5
 * 0000000140A0ED9C: mov     rax, [r9+5B8h]
 * 0000000140A0EDA3: mov     ecx, 1
 * 0000000140A0EDA8: lock or [rax+340h], rcx
 * 0000000140A0EDB0: jmp     loc_140A0EE37
 * 0000000140A0EDB5: mov     rcx, gs:20h
 * 0000000140A0EDBE: mov     rax, [r9+648h]
 * 0000000140A0EDC5: mov     edx, [r9+990h]
 * 0000000140A0EDCC: shr     edx, 0Ah
 * 0000000140A0EDCF: and     edx, 1Fh
 * 0000000140A0EDD2: mov     rcx, [rax+rcx]
 * 0000000140A0EDD6: lock bts [rcx], edx
 * 0000000140A0EDDA: jmp     short loc_140A0EE37
 * 0000000140A0EDDC: mov     rcx, gs:20h
 * 0000000140A0EDE5: mov     rax, [r9+648h]
 * 0000000140A0EDEC: mov     r8d, [r9+990h]
 * 0000000140A0EDF3: shr     r8d, 0Ah
 * 0000000140A0EDF7: and     r8d, 1Fh
 * 0000000140A0EDFB: mov     rcx, [rax+rcx]
 * 0000000140A0EDFF: add     rcx, [r9+6A8h]
 * 0000000140A0EE06: mov     rax, [r9+688h]
 * 0000000140A0EE0D: mov     rdx, [rcx+rax]
 * 0000000140A0EE11: lock bts [rdx], r8d
 * 0000000140A0EE16: jmp     short loc_140A0EE37
 * 0000000140A0EE18: mov     rax, [r9+560h]
 * 0000000140A0EE1F: jmp     short loc_140A0EE31
 * 0000000140A0EE21: mov     rax, [r9+558h]
 * 0000000140A0EE28: jmp     short loc_140A0EE31
 * 0000000140A0EE2A: mov     rax, [r9+548h]
 * 0000000140A0EE31: lock bts qword ptr [rax], 0
 * 0000000140A0EE37: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A0EE3B: mov     rcx, [rax+690h]
 * 0000000140A0EE42: mov     [r15+rcx], r11
 * 0000000140A0EE46: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A0EE4A: mov     r10, [rax+6A0h]
 * 0000000140A0EE51: mov     [r15+r10], r11
 * 0000000140A0EE55: mov     rcx, [rbp+0BE0h+var_BB8]
 * 0000000140A0EE59: mov     rcx, [rcx+158h]; Target
 * 0000000140A0EE60: call    KeGuardCheckICall
 * 0000000140A0EE65: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A0EE69: mov     r9, rbx
 * 0000000140A0EE6C: mov     [rsp+0CE0h+var_CB0], rsi
 * 0000000140A0EE71: mov     r8, rdi
 * 0000000140A0EE74: mov     rdx, r14
 * 0000000140A0EE77: mov     ecx, 109h
 * 0000000140A0EE7C: mov     r10, [rax+158h]
 * 0000000140A0EE83: mov     [rsp+0CE0h+var_CB8], r10
 * 0000000140A0EE88: mov     [rsp+0CE0h+BugCheckParameter4], r13
 * 0000000140A0EE8D: call    SdbpCheckDll
 */
