/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x1409F9010
 * Callers:
 *     KiDecodeMcaFault @ 0x1403DBEB0 (KiDecodeMcaFault.c)
 *     sub_1403EA3E0 @ 0x1403EA3E0 (sub_1403EA3E0.c)
 *     FsRtlUninitializeSmallMcb @ 0x140A120D0 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     sub_1403EA5FC @ 0x1403EA5FC (sub_1403EA5FC.c)
 *     sub_1403EA6DC @ 0x1403EA6DC (sub_1403EA6DC.c)
 *     sub_1403EB648 @ 0x1403EB648 (sub_1403EB648.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     sub_140A0D0FC @ 0x140A0D0FC (sub_140A0D0FC.c)
 *     sub_140A0F098 @ 0x140A0F098 (sub_140A0F098.c)
 *     sub_140A0FB30 @ 0x140A0FB30 (sub_140A0FB30.c)
 *     $$b8 @ 0x140A103CC ($$b8.c)
 *     sub_140A105E8 @ 0x140A105E8 (sub_140A105E8.c)
 *     sub_140A10C50 @ 0x140A10C50 (sub_140A10C50.c)
 *     KiGetGdtIdt @ 0x140A11F60 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x140A11F70 (KiGetLdtr.c)
 *     KiGetSs @ 0x140A11F80 (KiGetSs.c)
 *     KiGetTr @ 0x140A11F90 (KiGetTr.c)
 *     KiErrata361Present @ 0x140A11FA0 (KiErrata361Present.c)
 *     KiErrataSkx55Present @ 0x140A11FC0 (KiErrataSkx55Present.c)
 *     KiErrata704Present @ 0x140A11FD0 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x140A12080 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140A12330 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140A12340 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x140A12550 (RtlInitMinimalBarrier.c)
 *     sub_140A1CFE4 @ 0x140A1CFE4 (sub_140A1CFE4.c)
 */

/*
 * Hex-Rays decompilation failed for FsRtlMdlReadCompleteDevEx @ 0x1409F9010
 * Reason: Hex-Rays returned no pseudocode for 0x1409F9010
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001409F9010: mov     [rsp-8+arg_0], rcx
 * 00000001409F9015: push    rbp
 * 00000001409F9016: push    rbx
 * 00000001409F9017: push    rsi
 * 00000001409F9018: push    rdi
 * 00000001409F9019: push    r12
 * 00000001409F901B: push    r13
 * 00000001409F901D: push    r14
 * 00000001409F901F: push    r15
 * 00000001409F9021: lea     rbp, [rsp-0BA8h]
 * 00000001409F9029: sub     rsp, 0CA8h
 * 00000001409F9030: mov     eax, [rcx+990h]
 * 00000001409F9036: xor     r9d, r9d
 * 00000001409F9039: mov     r12, rcx
 * 00000001409F903C: mov     [rbp+0BE0h+var_448], rcx
 * 00000001409F9043: mov     ecx, 110000h
 * 00000001409F9048: mov     edi, 0FFFFFFF8h
 * 00000001409F904D: and     eax, ecx
 * 00000001409F904F: mov     r11d, 0FFFFFFFFh
 * 00000001409F9055: lea     esi, [r9+1]
 * 00000001409F9059: mov     r10d, 12Fh
 * 00000001409F905F: cmp     eax, ecx
 * 00000001409F9061: jz      loc_1409F911E
 * 00000001409F9067: mov     rdx, [r12+8E0h]
 * 00000001409F906F: lea     ecx, [r10+1]
 * 00000001409F9073: mov     rax, rdx
 * 00000001409F9076: lea     r8d, [r9+26h]
 * 00000001409F907A: mov     [rax], r9
 * 00000001409F907D: add     ecx, edi
 * 00000001409F907F: add     rax, 8
 * 00000001409F9083: sub     r8, rsi
 * 00000001409F9086: jnz     short loc_1409F907A
 * 00000001409F9088: test    ecx, ecx
 * 00000001409F908A: jz      short loc_1409F9097
 * 00000001409F908C: mov     [rax], r9b
 * 00000001409F908F: add     rax, rsi
 * 00000001409F9092: add     ecx, r11d
 * 00000001409F9095: jnz     short loc_1409F908C
 * 00000001409F9097: movups  xmm0, xmmword ptr [r12+848h]
 * 00000001409F90A0: lea     rax, [r12+878h]
 * 00000001409F90A8: mov     rcx, rax
 * 00000001409F90AB: movdqu  xmmword ptr [rdx+10h], xmm0
 * 00000001409F90B0: shr     rcx, 10h
 * 00000001409F90B4: movups  xmm1, xmmword ptr [r12+858h]
 * 00000001409F90BD: movdqu  xmmword ptr [rdx+20h], xmm1
 * 00000001409F90C2: movups  xmm0, xmmword ptr [r12+868h]
 * 00000001409F90CB: movdqu  xmmword ptr [rdx+120h], xmm0
 * 00000001409F90D3: mov     [rbp+2F2h], rdx
 * 00000001409F90DA: mov     word ptr [rbp+0BE0h+var_8F0], r10w
 * 00000001409F90E2: mov     [rdx+10h], ax
 * 00000001409F90E6: shr     rax, 20h
 * 00000001409F90EA: mov     [rdx+16h], cx
 * 00000001409F90EE: mov     [rdx+18h], eax
 * 00000001409F90F1: cli
 * 00000001409F90F2: xor     eax, eax
 * 00000001409F90F4: cmp     [r12+990h], eax
 * 00000001409F90FC: jge     short loc_1409F9104
 * 00000001409F90FE: mov     dr7, rax
 * 00000001409F9101: sti
 * 00000001409F9102: jmp     short loc_1409F9120
 * 00000001409F9104: sidt    fword ptr [rbp+0BE0h+var_760]
 * 00000001409F910B: lidt    fword ptr [rbp+0BE0h+var_8F0]
 * 00000001409F9112: mov     dr7, rax
 * 00000001409F9115: lidt    fword ptr [rbp+0BE0h+var_760]
 * 00000001409F911C: jmp     short loc_1409F9101
 * 00000001409F911E: xor     eax, eax
 * 00000001409F9120: test    dword ptr [r12+994h], 100h
 * 00000001409F912C: mov     [rbp+0BE0h+var_BD0], rax
 * 00000001409F9130: jz      short loc_1409F9147
 * 00000001409F9132: lea     rcx, [rbp+0BE8h]
 * 00000001409F9139: mov     rax, [rcx]
 * 00000001409F913C: mov     [rbp+0BE0h+var_BD0], rax
 * 00000001409F9140: xor     eax, eax
 * 00000001409F9142: mov     [rcx], rax
 * 00000001409F9145: jmp     short loc_1409F9149
 * 00000001409F9147: xor     eax, eax
 * 00000001409F9149: mov     r13d, 20h ; ' '
 * 00000001409F914F: mov     [r12+828h], eax
 * 00000001409F9157: test    dword ptr [r12+990h], 40000000h
 * 00000001409F9163: mov     r14, 7010008004002001h
 * 00000001409F916D: lea     r15d, [r13-1Ch]
 * 00000001409F9171: jz      short loc_1409F9183
 * 00000001409F9173: xor     eax, eax
 * 00000001409F9175: cmp     [r12+0A78h], rax
 * 00000001409F917D: jnz     loc_1409F9419
 * 00000001409F9183: mov     r14, [r12+7B8h]
 * 00000001409F918B: lea     rbx, [r12+798h]
 * 00000001409F9193: mov     [rbp+0BE0h+arg_8], r14
 * 00000001409F919A: lea     rdx, [rbp+0BE0h+var_110]
 * 00000001409F91A1: mov     rcx, rbx
 * 00000001409F91A4: mov     r8d, r13d
 * 00000001409F91A7: mov     r9, r15
 * 00000001409F91AA: mov     rax, [rcx]
 * 00000001409F91AD: add     r8d, edi
 * 00000001409F91B0: mov     [rdx], rax
 * 00000001409F91B3: add     rcx, 8
 * 00000001409F91B7: add     rdx, 8
 * 00000001409F91BB: sub     r9, rsi
 * 00000001409F91BE: jnz     short loc_1409F91AA
 * 00000001409F91C0: xor     eax, eax
 * 00000001409F91C2: test    r8d, r8d
 * 00000001409F91C5: jz      short loc_1409F91D8
 * 00000001409F91C7: mov     al, [rcx]
 * 00000001409F91C9: add     rcx, rsi
 * 00000001409F91CC: mov     [rdx], al
 * 00000001409F91CE: add     rdx, rsi
 * 00000001409F91D1: add     r8d, r11d
 * 00000001409F91D4: jnz     short loc_1409F91C7
 * 00000001409F91D6: xor     eax, eax
 * 00000001409F91D8: mov     [r12+7B8h], rax
 * 00000001409F91E0: mov     ecx, r13d
 * 00000001409F91E3: mov     [r12+828h], eax
 * 00000001409F91EB: mov     rdx, r15
 * 00000001409F91EE: mov     rax, rbx
 * 00000001409F91F1: xor     r8d, r8d
 * 00000001409F91F4: mov     [rax], r8
 * 00000001409F91F7: add     ecx, edi
 * 00000001409F91F9: add     rax, 8
 * 00000001409F91FD: sub     rdx, rsi
 * 00000001409F9200: jnz     short loc_1409F91F4
 * 00000001409F9202: test    ecx, ecx
 * 00000001409F9204: jz      short loc_1409F9211
 * 00000001409F9206: mov     [rax], r8b
 * 00000001409F9209: add     rax, rsi
 * 00000001409F920C: add     ecx, r11d
 * 00000001409F920F: jnz     short loc_1409F9206
 * 00000001409F9211: mov     eax, [r12+7E4h]
 * 00000001409F9219: mov     r9, r12
 * 00000001409F921C: add     [r12+828h], eax
 * 00000001409F9224: mov     rax, r12
 * 00000001409F9227: mov     r10d, [r12+7E4h]
 * 00000001409F922F: mov     r11d, [r12+814h]
 * 00000001409F9237: mov     rsi, [r12+818h]
 * 00000001409F923F: lea     rcx, [r12+r10]
 * 00000001409F9243: cmp     r12, rcx
 * 00000001409F9246: jnb     short loc_1409F9258
 * 00000001409F9248: mov     edx, 40h ; '@'
 * 00000001409F924D: prefetchnta byte ptr [rax]
 * 00000001409F9250: add     rax, rdx
 * 00000001409F9253: cmp     rax, rcx
 * 00000001409F9256: jb      short loc_1409F924D
 * 00000001409F9258: mov     edi, r10d
 * 00000001409F925B: mov     r8, rsi
 * 00000001409F925E: shr     edi, 7
 * 00000001409F9261: test    edi, edi
 * 00000001409F9263: jz      short loc_1409F92E0
 * 00000001409F9265: mov     r14, 7010008004002001h
 * 00000001409F926F: mov     edx, 8
 * 00000001409F9274: lea     r12d, [rdx-7]
 * 00000001409F9278: mov     rax, [r9]
 * 00000001409F927B: mov     ecx, r11d
 * 00000001409F927E: xor     rax, r8
 * 00000001409F9281: mov     r8, [r9+8]
 * 00000001409F9285: rol     rax, cl
 * 00000001409F9288: add     r9, 10h
 * 00000001409F928C: xor     r8, rax
 * 00000001409F928F: rol     r8, cl
 * 00000001409F9292: sub     rdx, r12
 * 00000001409F9295: jnz     short loc_1409F9278
 * 00000001409F9297: mov     r12, [rbp+0BE0h+arg_0]
 * 00000001409F929E: mov     rcx, r9
 * 00000001409F92A1: sub     rcx, r12
 * 00000001409F92A4: xor     rcx, rsi
 * 00000001409F92A7: mov     rax, rcx
 * 00000001409F92AA: rol     rax, 11h
 * 00000001409F92AE: xor     rcx, rax
 * 00000001409F92B1: mov     rax, r14
 * 00000001409F92B4: mul     rcx
 * 00000001409F92B7: xor     eax, edx
 * 00000001409F92B9: mov     [rbp+0BE0h+var_3D8], rdx
 * 00000001409F92C0: xor     r11d, eax
 * 00000001409F92C3: mov     eax, 1
 * 00000001409F92C8: and     r11d, 3Fh
 * 00000001409F92CC: cmovz   r11d, eax
 * 00000001409F92D0: mov     eax, 0FFFFFFFFh
 * 00000001409F92D5: add     edi, eax
 * 00000001409F92D7: jnz     short loc_1409F926F
 * 00000001409F92D9: mov     r14, [rbp+0BE0h+arg_8]
 * 00000001409F92E0: and     r10d, 7Fh
 * 00000001409F92E4: mov     esi, 1
 * 00000001409F92E9: cmp     r10d, 8
 * 00000001409F92ED: jb      short loc_1409F930C
 * 00000001409F92EF: mov     edx, r10d
 * 00000001409F92F2: shr     rdx, 3
 * 00000001409F92F6: xor     r8, [r9]
 * 00000001409F92F9: mov     ecx, r11d
 * 00000001409F92FC: rol     r8, cl
 * 00000001409F92FF: add     r9, 8
 * 00000001409F9303: add     r10d, 0FFFFFFF8h
 * 00000001409F9307: sub     rdx, rsi
 * 00000001409F930A: jnz     short loc_1409F92F6
 * 00000001409F930C: test    r10d, r10d
 * 00000001409F930F: jz      short loc_1409F9333
 * 00000001409F9311: mov     r12d, 0FFFFFFFFh
 * 00000001409F9317: movzx   eax, byte ptr [r9]
 * 00000001409F931B: mov     ecx, r11d
 * 00000001409F931E: xor     r8, rax
 * 00000001409F9321: add     r9, rsi
 * 00000001409F9324: rol     r8, cl
 * 00000001409F9327: add     r10d, r12d
 * 00000001409F932A: jnz     short loc_1409F9317
 * 00000001409F932C: mov     r12, [rbp+0BE0h+arg_0]
 * 00000001409F9333: mov     [r12+7B8h], r14
 * 00000001409F933B: lea     rcx, [rbp+0BE0h+var_110]
 * 00000001409F9342: mov     edx, r13d
 * 00000001409F9345: mov     r9, r15
 * 00000001409F9348: mov     rax, [rcx]
 * 00000001409F934B: add     edx, 0FFFFFFF8h
 * 00000001409F934E: mov     [rbx], rax
 * 00000001409F9351: add     rcx, 8
 * 00000001409F9355: add     rbx, 8
 * 00000001409F9359: sub     r9, rsi
 * 00000001409F935C: jnz     short loc_1409F9348
 * 00000001409F935E: test    edx, edx
 * 00000001409F9360: jz      short loc_1409F9377
 * 00000001409F9362: mov     r11d, 0FFFFFFFFh
 * 00000001409F9368: mov     al, [rcx]
 * 00000001409F936A: add     rcx, rsi
 * 00000001409F936D: mov     [rbx], al
 * 00000001409F936F: add     rbx, rsi
 * 00000001409F9372: add     edx, r11d
 * 00000001409F9375: jnz     short loc_1409F9368
 * 00000001409F9377: cmp     [r12+7B8h], r8
 * 00000001409F937F: jz      loc_1409F940F
 * 00000001409F9385: mov     rax, [r12+590h]
 * 00000001409F938D: xor     edx, edx
 * 00000001409F938F: mov     ecx, [r12+7E4h]
 * 00000001409F9397: mov     [rax], r12
 * 00000001409F939A: mov     [rax+10h], ecx
 * 00000001409F939D: mov     eax, [r12+8F8h]
 * 00000001409F93A5: mov     rcx, [r12+7B8h]
 * 00000001409F93AD: test    eax, eax
 * 00000001409F93AF: jnz     short loc_1409F940F
 * 00000001409F93B1: mov     rax, [r12+590h]
 * 00000001409F93B9: xor     rcx, r8
 * 00000001409F93BC: mov     [rax+18h], rcx
 * 00000001409F93C0: mov     eax, [r12+8F8h]
 * 00000001409F93C8: test    eax, eax
 * 00000001409F93CA: jnz     short loc_1409F940F
 * 00000001409F93CC: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F93D6: mov     rcx, r12
 * 00000001409F93D9: add     rax, r12
 * 00000001409F93DC: mov     [r12+900h], rax
 * 00000001409F93E4: xor     eax, eax
 * 00000001409F93E6: mov     [r12+908h], rax
 * 00000001409F93EE: mov     qword ptr [r12+910h], 101h
 * 00000001409F93FA: mov     [r12+918h], r8
 * 00000001409F9402: mov     [r12+8F8h], esi
 * 00000001409F940A: call    $$b8
 * 00000001409F940F: mov     r14, 7010008004002001h
 * 00000001409F9419: or      [r12+990h], r15d
 * 00000001409F9421: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F9428: add     [r12+834h], esi
 * 00000001409F9430: mov     r8, 0ABCC77118461CEFDh
 * 00000001409F943A: mov     eax, [r12+990h]
 * 00000001409F9442: test    al, 8
 * 00000001409F9444: jz      loc_1409F9874
 * 00000001409F944A: bt      eax, 17h
 * 00000001409F944E: jb      loc_1409F9874
 * 00000001409F9454: mov     eax, [r12+994h]
 * 00000001409F945C: mov     r10, [r12+0A70h]
 * 00000001409F9464: mov     r13d, [r12+7E4h]
 * 00000001409F946C: mov     r11, [r12+9F8h]
 * 00000001409F9474: mov     r15d, [r12+808h]
 * 00000001409F947C: mov     [rbp+0BE0h+arg_8], r10
 * 00000001409F9483: and     eax, esi
 * 00000001409F9485: jz      short loc_1409F948F
 * 00000001409F9487: mov     r11, [r12+5D8h]
 * 00000001409F948F: mov     rbx, [rbp+0BE0h+arg_0]
 * 00000001409F9496: mov     r12, [r12+160h]
 * 00000001409F949E: mov     [rbp+0BE0h+var_C40], r12
 * 00000001409F94A2: mov     rax, [rbx+2C8h]
 * 00000001409F94A9: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409F94AE: mov     rax, [rbx+340h]
 * 00000001409F94B5: mov     [rbp+0BE0h+var_C30], rax
 * 00000001409F94B9: rdtsc
 * 00000001409F94BB: shl     rdx, 20h
 * 00000001409F94BF: mov     r9, rdi
 * 00000001409F94C2: or      rax, rdx
 * 00000001409F94C5: mov     rcx, rax
 * 00000001409F94C8: ror     rax, 3
 * 00000001409F94CC: xor     rcx, rax
 * 00000001409F94CF: mov     rax, r14
 * 00000001409F94D2: mul     rcx
 * 00000001409F94D5: mov     rcx, rdx
 * 00000001409F94D8: mov     [rbp+0BE0h+var_3D0], rdx
 * 00000001409F94DF: xor     rcx, rax
 * 00000001409F94E2: mov     rax, r8
 * 00000001409F94E5: mul     rcx
 * 00000001409F94E8: shr     rdx, 1Ah
 * 00000001409F94EC: imul    rax, rdx, 5F5E100h
 * 00000001409F94F3: sub     rcx, rax
 * 00000001409F94F6: sub     r9, rcx
 * 00000001409F94F9: mov     [rbp+0BE0h+var_AB8], r9
 * 00000001409F9500: mov     r8d, [rbx+990h]
 * 00000001409F9507: bt      r8d, 1Ah
 * 00000001409F950C: jnb     loc_1409F95B3
 * 00000001409F9512: rdtsc
 * 00000001409F9514: shl     rdx, 20h
 * 00000001409F9518: or      rax, rdx
 * 00000001409F951B: mov     rcx, rax
 * 00000001409F951E: ror     rax, 3
 * 00000001409F9522: xor     rcx, rax
 * 00000001409F9525: mov     rax, r14
 * 00000001409F9528: mul     rcx
 * 00000001409F952B: mov     rcx, rdx
 * 00000001409F952E: mov     [rbp+0BE0h+var_3C8], rdx
 * 00000001409F9535: xor     rcx, rax
 * 00000001409F9538: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001409F9542: mul     rcx
 * 00000001409F9545: shr     rdx, 3
 * 00000001409F9549: lea     rax, [rdx+rdx*4]
 * 00000001409F954D: add     rax, rax
 * 00000001409F9550: sub     rcx, rax
 * 00000001409F9553: mov     eax, 2
 * 00000001409F9558: cmp     rcx, rax
 * 00000001409F955B: jnb     short loc_1409F95B3
 * 00000001409F955D: rdtsc
 * 00000001409F955F: shl     rdx, 20h
 * 00000001409F9563: or      rax, rdx
 * 00000001409F9566: mov     rcx, rax
 * 00000001409F9569: ror     rax, 3
 * 00000001409F956D: xor     rcx, rax
 * 00000001409F9570: mov     rax, r14
 * 00000001409F9573: mul     rcx
 * 00000001409F9576: mov     rcx, rdx
 * 00000001409F9579: mov     [rbp+0BE0h+var_3C0], rdx
 * 00000001409F9580: xor     rcx, rax
 * 00000001409F9583: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001409F958D: mul     rcx
 * 00000001409F9590: shr     rdx, 3
 * 00000001409F9594: lea     rax, [rdx+rdx*4]
 * 00000001409F9598: add     rax, rax
 * 00000001409F959B: sub     rcx, rax
 * 00000001409F959E: add     rcx, rsi
 * 00000001409F95A1: imul    rcx, r9
 * 00000001409F95A5: mov     [rbp+0BE0h+var_AB8], rcx
 * 00000001409F95AC: mov     r8d, [rbx+990h]
 * 00000001409F95B3: xor     eax, eax
 * 00000001409F95B5: mov     esi, r15d
 * 00000001409F95B8: mov     ebx, eax
 * 00000001409F95BA: mov     r14d, eax
 * 00000001409F95BD: lea     ecx, [rax+2]
 * 00000001409F95C0: test    cl, r8b
 * 00000001409F95C3: cmovnz  esi, r13d
 * 00000001409F95C7: test    r8b, r8b
 * 00000001409F95CA: js      short loc_1409F95D4
 * 00000001409F95CC: mov     r13d, eax
 * 00000001409F95CF: jmp     loc_1409F96B3
 * 00000001409F95D4: mov     r9d, 1
 * 00000001409F95DA: mov     r13d, r9d
 * 00000001409F95DD: rdtsc
 * 00000001409F95DF: shl     rdx, 20h
 * 00000001409F95E3: or      rax, rdx
 * 00000001409F95E6: mov     rcx, rax
 * 00000001409F95E9: ror     rax, 3
 * 00000001409F95ED: xor     rcx, rax
 * 00000001409F95F0: mov     rax, 7010008004002001h
 * 00000001409F95FA: mul     rcx
 * 00000001409F95FD: mov     ecx, 154h
 * 00000001409F9602: mov     rbx, rdx
 * 00000001409F9605: mov     [rbp+0BE0h+var_3B8], rdx
 * 00000001409F960C: mov     rdx, [rbp+0BE0h+arg_0]
 * 00000001409F9613: xor     rbx, rax
 * 00000001409F9616: mov     r14, rbx
 * 00000001409F9619: mov     r8, rbx
 * 00000001409F961C: xor     r14, rdx
 * 00000001409F961F: lea     rax, [rdx+0A98h]
 * 00000001409F9626: xor     [rax], r8
 * 00000001409F9629: lea     rax, [rax-8]
 * 00000001409F962D: ror     r8, cl
 * 00000001409F9630: sub     ecx, r9d
 * 00000001409F9633: jnz     short loc_1409F9626
 * 00000001409F9635: lea     r9, [r15-0AA0h]
 * 00000001409F963C: mov     r12, r15
 * 00000001409F963F: shr     r9, 3
 * 00000001409F9643: test    r9d, r9d
 * 00000001409F9646: jz      short loc_1409F9686
 * 00000001409F9648: movsxd  r10, r9d
 * 00000001409F964B: mov     rdi, r13
 * 00000001409F964E: add     r10, 153h
 * 00000001409F9655: lea     r10, [rdx+r10*8]
 * 00000001409F9659: mov     rdx, [r10]
 * 00000001409F965C: lea     rax, [r14+r14]
 * 00000001409F9660: mov     ecx, r9d
 * 00000001409F9663: lea     r10, [r10-8]
 * 00000001409F9667: ror     rdx, cl
 * 00000001409F966A: mov     r14, rdx
 * 00000001409F966D: xor     r14, rax
 * 00000001409F9670: sub     r9d, edi
 * 00000001409F9673: jnz     short loc_1409F9659
 * 00000001409F9675: mov     r10, [rbp+0BE0h+arg_8]
 * 00000001409F967C: mov     r12, r15
 * 00000001409F967F: mov     rdx, [rbp+0BE0h+arg_0]
 * 00000001409F9686: mov     ecx, esi
 * 00000001409F9688: add     rdx, r12
 * 00000001409F968B: sub     ecx, r15d
 * 00000001409F968E: shr     ecx, 3
 * 00000001409F9691: test    ecx, ecx
 * 00000001409F9693: jz      short loc_1409F96AF
 * 00000001409F9695: lea     rdx, [rdx+rcx*8]
 * 00000001409F9699: mov     r9, r13
 * 00000001409F969C: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 00000001409F96A0: xor     [rdx], r8
 * 00000001409F96A3: lea     rdx, [rdx-8]
 * 00000001409F96A7: ror     r8, cl
 * 00000001409F96AA: sub     ecx, r9d
 * 00000001409F96AD: jnz     short loc_1409F96A0
 * 00000001409F96AF: mov     r12, [rbp+0BE0h+var_C40]
 * 00000001409F96B3: test    r10, r10
 * 00000001409F96B6: jz      short loc_1409F96DE
 * 00000001409F96B8: mov     rax, [rbp+0BE0h+var_C30]
 * 00000001409F96BC: lea     r8, [rbp+0BE0h+var_AB8]
 * 00000001409F96C3: mov     r9, r12
 * 00000001409F96C6: mov     [rsp+0CE0h+BugCheckParameter4], r10
 * 00000001409F96CB: mov     r12, [rbp+0BE0h+arg_0]
 * 00000001409F96D2: mov     edx, esi
 * 00000001409F96D4: mov     rcx, r12
 * 00000001409F96D7: call    KeGuardDispatchICall
 * 00000001409F96DC: jmp     short loc_1409F971E
 * 00000001409F96DE: xor     edx, edx
 * 00000001409F96E0: test    r11, r11
 * 00000001409F96E3: jnz     short loc_1409F96F8
 * 00000001409F96E5: lea     r8, [rbp+0BE0h+var_AB8]
 * 00000001409F96EC: xor     ecx, ecx
 * 00000001409F96EE: mov     rax, r12
 * 00000001409F96F1: call    KeGuardDispatchICall
 * 00000001409F96F6: jmp     short loc_1409F9717
 * 00000001409F96F8: lea     rax, [rbp+0BE0h+var_AB8]
 * 00000001409F96FF: xor     r9d, r9d
 * 00000001409F9702: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 00000001409F9707: xor     r8d, r8d
 * 00000001409F970A: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409F970F: mov     rcx, r11
 * 00000001409F9712: call    KeGuardDispatchICall
 * 00000001409F9717: mov     r12, [rbp+0BE0h+arg_0]
 * 00000001409F971E: xor     eax, eax
 * 00000001409F9720: test    r13d, r13d
 * 00000001409F9723: jz      loc_1409F985A
 * 00000001409F9729: mov     r8, rbx
 * 00000001409F972C: lea     rax, [r12+0A98h]
 * 00000001409F9734: xor     r8, r12
 * 00000001409F9737: mov     ecx, 154h
 * 00000001409F973C: mov     r13d, 1
 * 00000001409F9742: xor     [rax], rbx
 * 00000001409F9745: lea     rax, [rax-8]
 * 00000001409F9749: ror     rbx, cl
 * 00000001409F974C: sub     ecx, r13d
 * 00000001409F974F: jnz     short loc_1409F9742
 * 00000001409F9751: lea     r9, [r15-0AA0h]
 * 00000001409F9758: mov     r11, r15
 * 00000001409F975B: shr     r9, 3
 * 00000001409F975F: test    r9d, r9d
 * 00000001409F9762: jz      short loc_1409F9791
 * 00000001409F9764: movsxd  r10, r9d
 * 00000001409F9767: add     r10, 153h
 * 00000001409F976E: lea     r10, [r12+r10*8]
 * 00000001409F9772: mov     rdx, [r10]
 * 00000001409F9775: lea     rax, [r8+r8]
 * 00000001409F9779: mov     ecx, r9d
 * 00000001409F977C: lea     r10, [r10-8]
 * 00000001409F9780: ror     rdx, cl
 * 00000001409F9783: mov     r8, rdx
 * 00000001409F9786: xor     r8, rax
 * 00000001409F9789: sub     r9d, r13d
 * 00000001409F978C: jnz     short loc_1409F9772
 * 00000001409F978E: mov     r11, r15
 * 00000001409F9791: sub     esi, r15d
 * 00000001409F9794: lea     rcx, [r11+r12]
 * 00000001409F9798: shr     esi, 3
 * 00000001409F979B: test    esi, esi
 * 00000001409F979D: jz      short loc_1409F97B9
 * 00000001409F979F: mov     eax, esi
 * 00000001409F97A1: dec     rax
 * 00000001409F97A4: lea     rdx, [rcx+rax*8]
 * 00000001409F97A8: xor     [rdx], rbx
 * 00000001409F97AB: mov     ecx, esi
 * 00000001409F97AD: ror     rbx, cl
 * 00000001409F97B0: lea     rdx, [rdx-8]
 * 00000001409F97B4: sub     esi, r13d
 * 00000001409F97B7: jnz     short loc_1409F97A8
 * 00000001409F97B9: cmp     r8, r14
 * 00000001409F97BC: jz      loc_1409F986A
 * 00000001409F97C2: mov     rax, [r12+590h]
 * 00000001409F97CA: xor     edx, edx
 * 00000001409F97CC: mov     ecx, [r12+7E4h]
 * 00000001409F97D4: mov     [rax], r12
 * 00000001409F97D7: mov     [rax+10h], ecx
 * 00000001409F97DA: mov     eax, [r12+8F8h]
 * 00000001409F97E2: test    eax, eax
 * 00000001409F97E4: jnz     loc_1409F986A
 * 00000001409F97EA: mov     rax, [r12+590h]
 * 00000001409F97F2: mov     rcx, r8
 * 00000001409F97F5: xor     rcx, r14
 * 00000001409F97F8: mov     [rax+18h], rcx
 * 00000001409F97FC: mov     eax, [r12+8F8h]
 * 00000001409F9804: test    eax, eax
 * 00000001409F9806: jnz     short loc_1409F986A
 * 00000001409F9808: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F9812: mov     r14, r13
 * 00000001409F9815: add     rax, r12
 * 00000001409F9818: mov     rcx, r12
 * 00000001409F981B: mov     [r12+900h], rax
 * 00000001409F9823: xor     eax, eax
 * 00000001409F9825: mov     [r12+908h], rax
 * 00000001409F982D: mov     qword ptr [r12+910h], 10Eh
 * 00000001409F9839: mov     [r12+918h], r8
 * 00000001409F9841: mov     [r12+8F8h], r14d
 * 00000001409F9849: call    $$b8
 * 00000001409F984E: mov     r15d, 4
 * 00000001409F9854: lea     r13d, [r15+1Ch]
 * 00000001409F9858: jmp     short loc_1409F987A
 * 00000001409F985A: mov     r15d, 4
 * 00000001409F9860: lea     r13d, [r15+1Ch]
 * 00000001409F9864: lea     r14d, [r15-3]
 * 00000001409F9868: jmp     short loc_1409F987C
 * 00000001409F986A: mov     r13d, 20h ; ' '
 * 00000001409F9870: lea     r15d, [r13-1Ch]
 * 00000001409F9874: mov     r14d, 1
 * 00000001409F987A: xor     eax, eax
 * 00000001409F987C: mov     esi, [r12+0C4h]
 * 00000001409F9884: lea     rcx, [r12+620h]
 * 00000001409F988C: mov     [r12+0C4h], eax
 * 00000001409F9894: mov     r9, r12
 * 00000001409F9897: add     dword ptr [r12+828h], 620h
 * 00000001409F98A3: mov     rax, r12
 * 00000001409F98A6: mov     r10d, [r12+814h]
 * 00000001409F98AE: mov     r11, [r12+818h]
 * 00000001409F98B6: cmp     r12, rcx
 * 00000001409F98B9: jnb     short loc_1409F98CB
 * 00000001409F98BB: mov     edx, 40h ; '@'
 * 00000001409F98C0: prefetchnta byte ptr [rax]
 * 00000001409F98C3: add     rax, rdx
 * 00000001409F98C6: cmp     rax, rcx
 * 00000001409F98C9: jb      short loc_1409F98C0
 * 00000001409F98CB: mov     r8, r11
 * 00000001409F98CE: mov     ebx, 0Ch
 * 00000001409F98D3: mov     rdi, 7010008004002001h
 * 00000001409F98DD: mov     edx, 8
 * 00000001409F98E2: mov     rax, [r9]
 * 00000001409F98E5: mov     ecx, r10d
 * 00000001409F98E8: xor     rax, r8
 * 00000001409F98EB: mov     r8, [r9+8]
 * 00000001409F98EF: rol     rax, cl
 * 00000001409F98F2: add     r9, 10h
 * 00000001409F98F6: xor     r8, rax
 * 00000001409F98F9: rol     r8, cl
 * 00000001409F98FC: sub     rdx, r14
 * 00000001409F98FF: jnz     short loc_1409F98E2
 * 00000001409F9901: mov     rcx, r9
 * 00000001409F9904: sub     rcx, r12
 * 00000001409F9907: xor     rcx, r11
 * 00000001409F990A: mov     rax, rcx
 * 00000001409F990D: rol     rax, 11h
 * 00000001409F9911: xor     rcx, rax
 * 00000001409F9914: mov     rax, rdi
 * 00000001409F9917: mul     rcx
 * 00000001409F991A: xor     eax, edx
 * 00000001409F991C: mov     [rbp+0BE0h+var_3B0], rdx
 * 00000001409F9923: xor     r10d, eax
 * 00000001409F9926: mov     eax, 0FFFFFFFFh
 * 00000001409F992B: and     r10d, 3Fh
 * 00000001409F992F: cmovz   r10d, r14d
 * 00000001409F9933: add     ebx, eax
 * 00000001409F9935: jnz     short loc_1409F98DD
 * 00000001409F9937: mov     edx, r13d
 * 00000001409F993A: mov     r11, r15
 * 00000001409F993D: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F9944: xor     r8, [r9]
 * 00000001409F9947: mov     ecx, r10d
 * 00000001409F994A: rol     r8, cl
 * 00000001409F994D: add     r9, 8
 * 00000001409F9951: add     edx, 0FFFFFFF8h
 * 00000001409F9954: sub     r11, r14
 * 00000001409F9957: jnz     short loc_1409F9944
 * 00000001409F9959: mov     r13d, 0FFFFFFFFh
 * 00000001409F995F: test    edx, edx
 * 00000001409F9961: jz      short loc_1409F9978
 * 00000001409F9963: movzx   eax, byte ptr [r9]
 * 00000001409F9967: mov     ecx, r10d
 * 00000001409F996A: xor     r8, rax
 * 00000001409F996D: add     r9, r14
 * 00000001409F9970: rol     r8, cl
 * 00000001409F9973: add     edx, r13d
 * 00000001409F9976: jnz     short loc_1409F9963
 * 00000001409F9978: mov     [r12+0C4h], esi
 * 00000001409F9980: cmp     [r12+0A20h], r8
 * 00000001409F9988: jz      loc_1409F9A1B
 * 00000001409F998E: mov     rax, [r12+590h]
 * 00000001409F9996: mov     ecx, [r12+7E4h]
 * 00000001409F999E: mov     [rax], r12
 * 00000001409F99A1: mov     [rax+10h], ecx
 * 00000001409F99A4: mov     eax, [r12+8F8h]
 * 00000001409F99AC: mov     rdx, [r12+0A20h]
 * 00000001409F99B4: test    eax, eax
 * 00000001409F99B6: jnz     short loc_1409F9A1B
 * 00000001409F99B8: mov     rax, [r12+590h]
 * 00000001409F99C0: mov     rcx, r8
 * 00000001409F99C3: xor     rcx, rdx
 * 00000001409F99C6: mov     [rax+18h], rcx
 * 00000001409F99CA: mov     eax, [r12+8F8h]
 * 00000001409F99D2: test    eax, eax
 * 00000001409F99D4: jnz     short loc_1409F9A1B
 * 00000001409F99D6: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F99E0: xor     edx, edx
 * 00000001409F99E2: add     rax, r12
 * 00000001409F99E5: mov     rcx, r12
 * 00000001409F99E8: mov     [r12+900h], rax
 * 00000001409F99F0: xor     eax, eax
 * 00000001409F99F2: mov     [r12+908h], rax
 * 00000001409F99FA: mov     qword ptr [r12+910h], 109h
 * 00000001409F9A06: mov     [r12+918h], r8
 * 00000001409F9A0E: mov     [r12+8F8h], r14d
 * 00000001409F9A16: call    $$b8
 * 00000001409F9A1B: xor     edx, edx
 * 00000001409F9A1D: mov     rcx, r12
 * 00000001409F9A20: call    $$b8
 * 00000001409F9A25: mov     ecx, [r12+970h]
 * 00000001409F9A2D: xor     eax, eax
 * 00000001409F9A2F: mov     [rsp+0CE0h+var_C80], r12
 * 00000001409F9A34: mov     rsi, r12
 * 00000001409F9A37: mov     [rbp+0BE0h+var_BC8], eax
 * 00000001409F9A3A: mov     r10, 2E8BA2E8BA2E8BA3h
 * 00000001409F9A44: mov     [rbp+0BE0h+var_C38], eax
 * 00000001409F9A47: lea     r9d, [rax+5]
 * 00000001409F9A4B: lea     r8d, [rax+6]
 * 00000001409F9A4F: cmp     ecx, r13d
 * 00000001409F9A52: jz      loc_1409F9B51
 * 00000001409F9A58: mov     rax, [r12+278h]
 * 00000001409F9A60: call    KeGuardDispatchICall
 * 00000001409F9A65: mov     rbx, rax
 * 00000001409F9A68: test    rax, rax
 * 00000001409F9A6B: jnz     short loc_1409F9A88
 * 00000001409F9A6D: mov     rax, [r12+280h]
 * 00000001409F9A75: xor     ecx, ecx
 * 00000001409F9A77: call    KeGuardDispatchICall
 * 00000001409F9A7C: mov     rbx, rax
 * 00000001409F9A7F: test    rax, rax
 * 00000001409F9A82: jz      loc_1409F9B3D
 * 00000001409F9A88: mov     rax, [r12+290h]
 * 00000001409F9A90: lea     rdx, [rbp+0BE0h+var_6C0]
 * 00000001409F9A97: mov     rcx, rbx
 * 00000001409F9A9A: call    KeGuardDispatchICall
 * 00000001409F9A9F: mov     r14d, eax
 * 00000001409F9AA2: test    eax, eax
 * 00000001409F9AA4: jns     short loc_1409F9ABA
 * 00000001409F9AA6: mov     rax, [r12+288h]
 * 00000001409F9AAE: mov     rcx, rbx
 * 00000001409F9AB1: call    KeGuardDispatchICall
 * 00000001409F9AB6: xor     eax, eax
 * 00000001409F9AB8: jmp     short loc_1409F9B29
 * 00000001409F9ABA: mov     [r12+980h], rbx
 * 00000001409F9AC2: mov     rax, [r12+2B8h]
 * 00000001409F9ACA: call    KeGuardDispatchICall
 * 00000001409F9ACF: mov     rbx, rax
 * 00000001409F9AD2: mov     rax, [r12+2D8h]
 * 00000001409F9ADA: mov     rcx, rbx
 * 00000001409F9ADD: call    KeGuardDispatchICall
 * 00000001409F9AE2: mov     rdx, rax
 * 00000001409F9AE5: test    rax, rax
 * 00000001409F9AE8: jnz     short loc_1409F9AEF
 * 00000001409F9AEA: mov     ecx, r15d
 * 00000001409F9AED: jmp     short loc_1409F9B03
 * 00000001409F9AEF: mov     rax, [r12+2E8h]
 * 00000001409F9AF7: mov     rcx, rbx
 * 00000001409F9AFA: call    KeGuardDispatchICall
 * 00000001409F9AFF: xor     eax, eax
 * 00000001409F9B01: mov     ecx, eax
 * 00000001409F9B03: mov     eax, [r12+994h]
 * 00000001409F9B0B: and     eax, 0FFFFFFFBh
 * 00000001409F9B0E: or      eax, ecx
 * 00000001409F9B10: mov     [r12+994h], eax
 * 00000001409F9B18: add     dword ptr [r12+828h], 10000h
 * 00000001409F9B24: xor     eax, eax
 * 00000001409F9B26: mov     r14d, eax
 * 00000001409F9B29: test    r14d, r14d
 * 00000001409F9B2C: js      short loc_1409F9B3D
 * 00000001409F9B2E: mov     r13d, 1
 * 00000001409F9B34: mov     [rbp+0BE0h+var_C38], r13d
 * 00000001409F9B38: jmp     loc_1409F9EB6
 * 00000001409F9B3D: mov     r9d, 5
 * 00000001409F9B43: mov     r10, 2E8BA2E8BA2E8BA3h
 * 00000001409F9B4D: lea     r8d, [r9+1]
 * 00000001409F9B51: mov     eax, [r12+994h]
 * 00000001409F9B59: test    al, 8
 * 00000001409F9B5B: jz      loc_1409F9EAB
 * 00000001409F9B61: bt      eax, 0Ch
 * 00000001409F9B65: jb      loc_1409F9EAB
 * 00000001409F9B6B: rdtsc
 * 00000001409F9B6D: shl     rdx, 20h
 * 00000001409F9B71: mov     rbx, 7010008004002001h
 * 00000001409F9B7B: or      rax, rdx
 * 00000001409F9B7E: mov     rcx, rax
 * 00000001409F9B81: ror     rax, 3
 * 00000001409F9B85: xor     rcx, rax
 * 00000001409F9B88: mov     rax, rbx
 * 00000001409F9B8B: mul     rcx
 * 00000001409F9B8E: mov     [rbp+0BE0h+var_3A8], rdx
 * 00000001409F9B95: xor     dl, al
 * 00000001409F9B97: test    dl, 3
 * 00000001409F9B9A: jnz     loc_1409F9EAB
 * 00000001409F9BA0: rdtsc
 * 00000001409F9BA2: shl     rdx, 20h
 * 00000001409F9BA6: or      rax, rdx
 * 00000001409F9BA9: mov     rcx, rax
 * 00000001409F9BAC: ror     rax, 3
 * 00000001409F9BB0: xor     rcx, rax
 * 00000001409F9BB3: mov     rax, rbx
 * 00000001409F9BB6: mul     rcx
 * 00000001409F9BB9: mov     rcx, rdx
 * 00000001409F9BBC: mov     [rbp+0BE0h+var_3A0], rdx
 * 00000001409F9BC3: xor     rcx, rax
 * 00000001409F9BC6: mov     rax, r10
 * 00000001409F9BC9: mul     rcx
 * 00000001409F9BCC: shr     rdx, 1
 * 00000001409F9BCF: imul    rax, rdx, 0Bh
 * 00000001409F9BD3: sub     rcx, rax
 * 00000001409F9BD6: cmp     ecx, r9d
 * 00000001409F9BD9: ja      loc_1409F9C97
 * 00000001409F9BDF: jz      loc_1409F9C7D
 * 00000001409F9BE5: test    ecx, ecx
 * 00000001409F9BE7: jz      short loc_1409F9C63
 * 00000001409F9BE9: sub     ecx, 1
 * 00000001409F9BEC: jz      short loc_1409F9C4A
 * 00000001409F9BEE: sub     ecx, 1
 * 00000001409F9BF1: jz      short loc_1409F9C30
 * 00000001409F9BF3: cmp     ecx, 1
 * 00000001409F9BF6: jz      short loc_1409F9C12
 * 00000001409F9BF8: mov     [rbp+0BE0h+var_A50], 67076494h
 * 00000001409F9C02: mov     r9d, [rbp+0BE0h+var_A50]
 * 00000001409F9C09: rol     r9d, 4
 * 00000001409F9C0D: jmp     loc_1409F9DBC
 * 00000001409F9C12: mov     [rbp+0BE0h+var_A4C], 0A8223938h
 * 00000001409F9C1C: mov     r9d, [rbp+0BE0h+var_A4C]
 * 00000001409F9C23: xor     r9d, 3
 * 00000001409F9C27: ror     r9d, 0Fh
 * 00000001409F9C2B: jmp     loc_1409F9DBC
 * 00000001409F9C30: mov     [rbp+0BE0h+var_A48], 85B5910Dh
 * 00000001409F9C3A: mov     r9d, [rbp+0BE0h+var_A48]
 * 00000001409F9C41: ror     r9d, 2
 * 00000001409F9C45: jmp     loc_1409F9DBC
 * 00000001409F9C4A: mov     [rbp+0BE0h+var_A44], 0B2AD31A1h
 * 00000001409F9C54: mov     r9d, [rbp+0BE0h+var_A44]
 * 00000001409F9C5B: rol     r9d, 1
 * 00000001409F9C5E: jmp     loc_1409F9DBC
 * 00000001409F9C63: mov     [rbp+0BE0h+var_A40], 0D098D0D8h
 * 00000001409F9C6D: mov     r9d, [rbp+0BE0h+var_A40]
 * 00000001409F9C74: ror     r9d, 6
 * 00000001409F9C78: jmp     loc_1409F9DBC
 * 00000001409F9C7D: mov     [rbp+0BE0h+var_A3C], 288C49EDh
 * 00000001409F9C87: mov     r9d, [rbp+0BE0h+var_A3C]
 * 00000001409F9C8E: ror     r9d, 5
 * 00000001409F9C92: jmp     loc_1409F9DBC
 * 00000001409F9C97: sub     ecx, r8d
 * 00000001409F9C9A: jz      loc_1409F9DA4
 * 00000001409F9CA0: sub     ecx, 1
 * 00000001409F9CA3: jz      loc_1409F9D8D
 * 00000001409F9CA9: sub     ecx, 1
 * 00000001409F9CAC: jz      loc_1409F9D76
 * 00000001409F9CB2: cmp     ecx, 1
 * 00000001409F9CB5: jz      loc_1409F9D5B
 * 00000001409F9CBB: rdtsc
 * 00000001409F9CBD: shl     rdx, 20h
 * 00000001409F9CC1: or      rax, rdx
 * 00000001409F9CC4: mov     rcx, rax
 * 00000001409F9CC7: ror     rax, 3
 * 00000001409F9CCB: xor     rcx, rax
 * 00000001409F9CCE: mov     rax, rbx
 * 00000001409F9CD1: mul     rcx
 * 00000001409F9CD4: mov     r9, rax
 * 00000001409F9CD7: mov     [rbp+0BE0h+var_398], rdx
 * 00000001409F9CDE: xor     r9d, edx
 * 00000001409F9CE1: mov     eax, 4EC4EC4Fh
 * 00000001409F9CE6: mul     r9d
 * 00000001409F9CE9: mov     ecx, r9d
 * 00000001409F9CEC: shr     r9d, 5
 * 00000001409F9CF0: shr     edx, 3
 * 00000001409F9CF3: mov     r8d, r9d
 * 00000001409F9CF6: imul    eax, edx, 1Ah
 * 00000001409F9CF9: sub     ecx, eax
 * 00000001409F9CFB: mov     eax, 4EC4EC4Fh
 * 00000001409F9D00: mul     r9d
 * 00000001409F9D03: add     ecx, 61h ; 'a'
 * 00000001409F9D06: shr     r9d, 5
 * 00000001409F9D0A: shl     ecx, 8
 * 00000001409F9D0D: shr     edx, 3
 * 00000001409F9D10: imul    eax, edx, 1Ah
 * 00000001409F9D13: sub     r8d, eax
 * 00000001409F9D16: mov     eax, 4EC4EC4Fh
 * 00000001409F9D1B: mul     r9d
 * 00000001409F9D1E: add     r8d, 41h ; 'A'
 * 00000001409F9D22: or      r8d, ecx
 * 00000001409F9D25: shr     edx, 3
 * 00000001409F9D28: imul    eax, edx, 1Ah
 * 00000001409F9D2B: mov     ecx, r9d
 * 00000001409F9D2E: shr     r9d, 5
 * 00000001409F9D32: shl     r8d, 8
 * 00000001409F9D36: sub     ecx, eax
 * 00000001409F9D38: mov     eax, 4EC4EC4Fh
 * 00000001409F9D3D: mul     r9d
 * 00000001409F9D40: add     ecx, 61h ; 'a'
 * 00000001409F9D43: shr     edx, 3
 * 00000001409F9D46: or      ecx, r8d
 * 00000001409F9D49: imul    eax, edx, 1Ah
 * 00000001409F9D4C: shl     ecx, 8
 * 00000001409F9D4F: sub     r9d, eax
 * 00000001409F9D52: add     r9d, 41h ; 'A'
 * 00000001409F9D56: or      r9d, ecx
 * 00000001409F9D59: jmp     short loc_1409F9DBC
 * 00000001409F9D5B: mov     [rbp+0BE0h+var_A38], 0B0869E85h
 * 00000001409F9D65: mov     r9d, [rbp+0BE0h+var_A38]
 * 00000001409F9D6C: xor     r9d, 9
 * 00000001409F9D70: ror     r9d, 21h
 * 00000001409F9D74: jmp     short loc_1409F9DBC
 * 00000001409F9D76: mov     [rbp+0BE0h+var_A34], 64664142h
 * 00000001409F9D80: mov     r9d, [rbp+0BE0h+var_A34]
 * 00000001409F9D87: ror     r9d, 8
 * 00000001409F9D8B: jmp     short loc_1409F9DBC
 * 00000001409F9D8D: mov     [rbp+0BE0h+var_A30], 82C6A6D8h
 * 00000001409F9D97: mov     r9d, [rbp+0BE0h+var_A30]
 * 00000001409F9D9E: rol     r9d, 7
 * 00000001409F9DA2: jmp     short loc_1409F9DBC
 * 00000001409F9DA4: mov     [rbp+0BE0h+var_A2C], 4E574672h
 * 00000001409F9DAE: mov     r9d, [rbp+0BE0h+var_A2C]
 * 00000001409F9DB5: xor     r9d, r8d
 * 00000001409F9DB8: ror     r9d, 18h
 * 00000001409F9DBC: mov     rax, [r12+0F8h]
 * 00000001409F9DC4: mov     r8d, r9d
 * 00000001409F9DC7: mov     rdx, [r12+768h]
 * 00000001409F9DCF: mov     ecx, 200h
 * 00000001409F9DD4: call    KeGuardDispatchICall
 * 00000001409F9DD9: mov     r15, rax
 * 00000001409F9DDC: xor     eax, eax
 * 00000001409F9DDE: test    r15, r15
 * 00000001409F9DE1: jz      loc_1409F9EAD
 * 00000001409F9DE7: mov     rcx, [r12+6E8h]
 * 00000001409F9DEF: mov     rax, [r12+518h]
 * 00000001409F9DF7: mov     r14d, [rcx+rax]
 * 00000001409F9DFB: test    r14d, r14d
 * 00000001409F9DFE: jz      short loc_1409F9E2B
 * 00000001409F9E00: rdtsc
 * 00000001409F9E02: shl     rdx, 20h
 * 00000001409F9E06: or      rax, rdx
 * 00000001409F9E09: mov     rcx, rax
 * 00000001409F9E0C: ror     rax, 3
 * 00000001409F9E10: xor     rcx, rax
 * 00000001409F9E13: mov     rax, rbx
 * 00000001409F9E16: mul     rcx
 * 00000001409F9E19: mov     [rbp+0BE0h+var_390], rdx
 * 00000001409F9E20: xor     rax, rdx
 * 00000001409F9E23: xor     edx, edx
 * 00000001409F9E25: div     r14
 * 00000001409F9E28: mov     r14, rdx
 * 00000001409F9E2B: mov     rax, [r12+3B0h]
 * 00000001409F9E33: xor     ecx, ecx
 * 00000001409F9E35: call    KeGuardDispatchICall
 * 00000001409F9E3A: mov     rbx, rax
 * 00000001409F9E3D: test    rax, rax
 * 00000001409F9E40: jz      short loc_1409F9E9B
 * 00000001409F9E42: test    r14d, r14d
 * 00000001409F9E45: jz      short loc_1409F9E62
 * 00000001409F9E47: mov     rax, [r12+3B0h]
 * 00000001409F9E4F: mov     rcx, rbx
 * 00000001409F9E52: add     r14d, r13d
 * 00000001409F9E55: call    KeGuardDispatchICall
 * 00000001409F9E5A: mov     rbx, rax
 * 00000001409F9E5D: test    rax, rax
 * 00000001409F9E60: jnz     short loc_1409F9E42
 * 00000001409F9E62: mov     rsi, r12
 * 00000001409F9E65: test    rbx, rbx
 * 00000001409F9E68: jz      short loc_1409F9E9B
 * 00000001409F9E6A: mov     rax, [r12+3A0h]
 * 00000001409F9E72: mov     rcx, rbx
 * 00000001409F9E75: call    KeGuardDispatchICall
 * 00000001409F9E7A: test    eax, eax
 * 00000001409F9E7C: jns     short loc_1409F9E92
 * 00000001409F9E7E: mov     rax, [r12+3B8h]
 * 00000001409F9E86: mov     rcx, rbx
 * 00000001409F9E89: call    KeGuardDispatchICall
 * 00000001409F9E8E: xor     eax, eax
 * 00000001409F9E90: mov     ebx, eax
 * 00000001409F9E92: test    rbx, rbx
 * 00000001409F9E95: jnz     loc_1409F9F6C
 * 00000001409F9E9B: mov     rax, [r12+100h]
 * 00000001409F9EA3: mov     rcx, r15
 * 00000001409F9EA6: call    KeGuardDispatchICall
 * 00000001409F9EAB: xor     eax, eax
 * 00000001409F9EAD: mov     r13d, 1
 * 00000001409F9EB3: mov     [rbp+0BE0h+var_BC8], eax
 * 00000001409F9EB6: mov     [rbp+0BE0h+var_B10], rax
 * 00000001409F9EBD: mov     ecx, 4
 * 00000001409F9EC2: lea     rax, [rbp+0BE0h+var_B08]
 * 00000001409F9EC9: xor     r15d, r15d
 * 00000001409F9ECC: mov     r9d, 0FFFFFFFFh
 * 00000001409F9ED2: mov     [rax], r15b
 * 00000001409F9ED5: add     rax, r13
 * 00000001409F9ED8: add     ecx, r9d
 * 00000001409F9EDB: jnz     short loc_1409F9ED2
 * 00000001409F9EDD: mov     ecx, [r12+820h]
 * 00000001409F9EE5: mov     r11d, 19h
 * 00000001409F9EEB: mov     rdx, [rbp+0BE0h+arg_0]
 * 00000001409F9EF2: add     r12, 82Ch
 * 00000001409F9EF9: mov     [rbp+0BE0h+var_C08], r12
 * 00000001409F9EFD: mov     r14d, 8000h
 * 00000001409F9F03: mov     [rbp+0BE0h+var_C18], 0C000009Ah
 * 00000001409F9F0A: mov     eax, [r12]
 * 00000001409F9F0E: cmp     [rdx+828h], eax
 * 00000001409F9F14: jge     loc_140A0566C
 * 00000001409F9F1A: mov     rbx, [rbp+0BE0h+var_380]
 * 00000001409F9F21: lea     edx, [r11-18h]
 * 00000001409F9F25: mov     r14, [rbp+0BE0h+var_378]
 * 00000001409F9F2C: mov     r15d, [rbp+0BE0h+var_89C]
 * 00000001409F9F33: mov     r10d, [rbp+0BE0h+var_8D0]
 * 00000001409F9F3A: mov     [rbp+0BE0h+var_C30], rbx
 * 00000001409F9F3E: mov     [rbp+0BE0h+var_C40], r14
 * 00000001409F9F42: mov     [rbp+0BE0h+var_C28], r15d
 * 00000001409F9F46: mov     [rbp+0BE0h+var_BA0], r10d
 * 00000001409F9F4A: mov     eax, [rsi+990h]
 * 00000001409F9F50: mov     r8d, 110000h
 * 00000001409F9F56: and     eax, r8d
 * 00000001409F9F59: cmp     eax, r8d
 * 00000001409F9F5C: jz      loc_1409FA0A8
 * 00000001409F9F62: xor     eax, eax
 * 00000001409F9F64: mov     dr7, rax
 * 00000001409F9F67: jmp     loc_1409FA0AA
 * 00000001409F9F6C: mov     rax, [r12+438h]
 * 00000001409F9F74: lea     rdx, [rbp+0BE0h+var_6C0]
 * 00000001409F9F7B: mov     rcx, rbx
 * 00000001409F9F7E: call    KeGuardDispatchICall
 * 00000001409F9F83: mov     rax, [r12+1C0h]
 * 00000001409F9F8B: xor     r9d, r9d
 * 00000001409F9F8E: xor     r8d, r8d
 * 00000001409F9F91: mov     rdx, r15
 * 00000001409F9F94: mov     rcx, rbx
 * 00000001409F9F97: call    KeGuardDispatchICall
 * 00000001409F9F9C: rdtsc
 * 00000001409F9F9E: shl     rdx, 20h
 * 00000001409F9FA2: or      rax, rdx
 * 00000001409F9FA5: mov     rcx, rax
 * 00000001409F9FA8: ror     rax, 3
 * 00000001409F9FAC: xor     rcx, rax
 * 00000001409F9FAF: mov     rax, 7010008004002001h
 * 00000001409F9FB9: mul     rcx
 * 00000001409F9FBC: mov     rcx, r15
 * 00000001409F9FBF: mov     rbx, rdx
 * 00000001409F9FC2: mov     [rbp+0BE0h+var_388], rdx
 * 00000001409F9FC9: xor     rbx, rax
 * 00000001409F9FCC: mov     rax, [r12+1B8h]
 * 00000001409F9FD4: call    KeGuardDispatchICall
 * 00000001409F9FD9: mov     ecx, eax
 * 00000001409F9FDB: xor     edx, edx
 * 00000001409F9FDD: mov     rax, rbx
 * 00000001409F9FE0: div     rcx
 * 00000001409F9FE3: mov     rbx, rdx
 * 00000001409F9FE6: cli
 * 00000001409F9FE7: mov     rcx, gs:20h
 * 00000001409F9FF0: mov     rax, [r12+648h]
 * 00000001409F9FF8: mov     rcx, [rcx+rax]
 * 00000001409F9FFC: sti
 * 00000001409F9FFD: mov     rax, [r12+1C8h]
 * 00000001409FA005: lea     rdx, [rbp+0BE0h+var_6D0]
 * 00000001409FA00C: call    KeGuardDispatchICall
 * 00000001409FA011: mov     rax, [r12+1A8h]
 * 00000001409FA019: lea     rcx, [rbp+0BE0h+var_240]
 * 00000001409FA020: mov     rdx, r15
 * 00000001409FA023: call    KeGuardDispatchICall
 * 00000001409FA028: jmp     short loc_1409FA031
 * 00000001409FA02A: test    ebx, ebx
 * 00000001409FA02C: jz      short loc_1409FA052
 * 00000001409FA02E: add     ebx, r13d
 * 00000001409FA031: mov     rax, [r12+1B0h]
 * 00000001409FA039: lea     rdx, [rbp+0BE0h+var_240]
 * 00000001409FA040: lea     rcx, [rbp+0BE0h+var_B1C]
 * 00000001409FA047: call    KeGuardDispatchICall
 * 00000001409FA04C: test    eax, eax
 * 00000001409FA04E: jns     short loc_1409FA02A
 * 00000001409FA050: jmp     short loc_1409FA06C
 * 00000001409FA052: mov     rax, [r12+1A0h]
 * 00000001409FA05A: lea     rcx, [rbp+0BE0h+var_6D0]
 * 00000001409FA061: mov     edx, [rbp+0BE0h+var_B1C]
 * 00000001409FA067: call    KeGuardDispatchICall
 * 00000001409FA06C: mov     rax, [r12+1D0h]
 * 00000001409FA074: lea     rdx, [rbp+0BE0h+var_260]
 * 00000001409FA07B: lea     rcx, [rbp+0BE0h+var_6D0]
 * 00000001409FA082: call    KeGuardDispatchICall
 * 00000001409FA087: mov     rax, [r12+100h]
 * 00000001409FA08F: mov     rcx, r15
 * 00000001409FA092: call    KeGuardDispatchICall
 * 00000001409FA097: mov     r13d, 1
 * 00000001409FA09D: xor     eax, eax
 * 00000001409FA09F: mov     [rbp+0BE0h+var_BC8], r13d
 * 00000001409FA0A3: jmp     loc_1409F9EB6
 * 00000001409FA0A8: xor     eax, eax
 * 00000001409FA0AA: cmp     ecx, [rsi+80Ch]
 * 00000001409FA0B0: jnz     short loc_1409FA0E8
 * 00000001409FA0B2: add     [rsi+830h], edx
 * 00000001409FA0B8: mov     ecx, eax
 * 00000001409FA0BA: cmp     dword ptr [rsi+958h], 0Bh
 * 00000001409FA0C1: jnz     short loc_1409FA0E8
 * 00000001409FA0C3: mov     eax, [rsi+990h]
 * 00000001409FA0C9: test    dl, al
 * 00000001409FA0CB: jnz     short loc_1409FA0E8
 * 00000001409FA0CD: cmp     [rsi+970h], r9d
 * 00000001409FA0D4: jnz     short loc_1409FA0E0
 * 00000001409FA0D6: xor     eax, eax
 * 00000001409FA0D8: mov     [rsi+970h], eax
 * 00000001409FA0DE: jmp     short loc_1409FA0E8
 * 00000001409FA0E0: or      eax, edx
 * 00000001409FA0E2: mov     [rsi+990h], eax
 * 00000001409FA0E8: mov     rax, [rsi+0A78h]
 * 00000001409FA0EF: mov     r9, rsi
 * 00000001409FA0F2: test    rax, rax
 * 00000001409FA0F5: mov     [rbp+0BE0h+var_BE8], ecx
 * 00000001409FA0F8: cmovnz  r9, rax
 * 00000001409FA0FC: xor     eax, eax
 * 00000001409FA0FE: mov     r8d, eax
 * 00000001409FA101: mov     r13d, [r9+808h]
 * 00000001409FA108: add     r13, r9
 * 00000001409FA10B: mov     [rsp+0CE0h+var_C90], r13
 * 00000001409FA110: cmp     dword ptr [rbp+0BE0h+var_B10], eax
 * 00000001409FA116: jz      short loc_1409FA136
 * 00000001409FA118: cmp     dword ptr [rbp+0BE0h+var_B10+4], ecx
 * 00000001409FA11E: ja      short loc_1409FA136
 * 00000001409FA120: mov     r13d, [rbp+0BE0h+var_B08]
 * 00000001409FA127: mov     r8d, dword ptr [rbp+0BE0h+var_B10+4]
 * 00000001409FA12E: add     r13, r9
 * 00000001409FA131: mov     [rsp+0CE0h+var_C90], r13
 * 00000001409FA136: mov     edx, 1
 * 00000001409FA13B: cmp     r8d, ecx
 * 00000001409FA13E: jz      loc_1409FA26F
 * 00000001409FA144: sub     ecx, r8d
 * 00000001409FA147: lea     ebx, [rdx+1]
 * 00000001409FA14A: mov     r10d, ecx
 * 00000001409FA14D: lea     r14d, [rdx+0Bh]
 * 00000001409FA151: add     r8d, ecx
 * 00000001409FA154: mov     rsi, 0AAAAAAAAAAAAAAABh
 * 00000001409FA15E: mov     ecx, [r13+0]
 * 00000001409FA162: cmp     ecx, r14d
 * 00000001409FA165: jg      short loc_1409FA1AA
 * 00000001409FA167: jz      short loc_1409FA1C7
 * 00000001409FA169: sub     ecx, 1
 * 00000001409FA16C: jz      short loc_1409FA1C7
 * 00000001409FA16E: sub     ecx, 6
 * 00000001409FA171: jz      short loc_1409FA199
 * 00000001409FA173: sub     ecx, 1
 * 00000001409FA176: jz      short loc_1409FA18F
 * 00000001409FA178: cmp     ecx, ebx
 * 00000001409FA17A: jnz     loc_1409FA20B
 * 00000001409FA180: mov     eax, [r13+1Ch]
 * 00000001409FA184: add     eax, 3
 * 00000001409FA187: shl     eax, 4
 * 00000001409FA18A: jmp     loc_1409FA249
 * 00000001409FA18F: movzx   eax, word ptr [r13+20h]
 * 00000001409FA194: jmp     loc_1409FA243
 * 00000001409FA199: mov     eax, [r13+18h]
 * 00000001409FA19D: add     eax, ebx
 * 00000001409FA19F: lea     eax, [rax+rax*2]
 * 00000001409FA1A2: shl     eax, 3
 * 00000001409FA1A5: jmp     loc_1409FA249
 * 00000001409FA1AA: cmp     ecx, 1Ch
 * 00000001409FA1AD: jz      loc_1409FA23E
 * 00000001409FA1B3: cmp     ecx, 1Eh
 * 00000001409FA1B6: jz      short loc_1409FA212
 * 00000001409FA1B8: cmp     ecx, 20h ; ' '
 * 00000001409FA1BB: jle     short loc_1409FA20B
 * 00000001409FA1BD: cmp     ecx, 22h ; '"'
 * 00000001409FA1C0: jle     short loc_1409FA1E3
 * 00000001409FA1C2: cmp     ecx, 2Bh ; '+'
 * 00000001409FA1C5: jnz     short loc_1409FA20B
 * 00000001409FA1C7: mov     ecx, [r13+10h]
 * 00000001409FA1CB: mov     rax, rsi
 * 00000001409FA1CE: mul     rcx
 * 00000001409FA1D1: shr     rdx, 3
 * 00000001409FA1D5: lea     eax, ds:30h[rdx*4]
 * 00000001409FA1DC: mov     edx, 1
 * 00000001409FA1E1: jmp     short loc_1409FA249
 * 00000001409FA1E3: mov     ecx, [r13+20h]
 * 00000001409FA1E7: mov     edx, [r13+28h]
 * 00000001409FA1EB: and     ecx, 0FFFh
 * 00000001409FA1F1: add     rdx, 0FFFh
 * 00000001409FA1F8: add     rdx, rcx
 * 00000001409FA1FB: shr     rdx, 0Ch
 * 00000001409FA1FF: lea     eax, [rdx+rdx*4]
 * 00000001409FA202: lea     eax, ds:30h[rax*4]
 * 00000001409FA209: jmp     short loc_1409FA1DC
 * 00000001409FA20B: mov     eax, 30h ; '0'
 * 00000001409FA210: jmp     short loc_1409FA249
 * 00000001409FA212: mov     eax, [r13+24h]
 * 00000001409FA216: lea     ecx, [rax-1]
 * 00000001409FA219: neg     eax
 * 00000001409FA21B: sbb     eax, eax
 * 00000001409FA21D: and     ecx, eax
 * 00000001409FA21F: mov     rax, rsi
 * 00000001409FA222: mul     rcx
 * 00000001409FA225: movzx   eax, word ptr [r13+28h]
 * 00000001409FA22A: shr     rdx, 3
 * 00000001409FA22E: add     edx, 7
 * 00000001409FA231: and     edx, 0FFFFFFF8h
 * 00000001409FA234: add     eax, ebx
 * 00000001409FA236: lea     eax, [rax+rax*2]
 * 00000001409FA239: lea     eax, [rdx+rax*8]
 * 00000001409FA23C: jmp     short loc_1409FA1DC
 * 00000001409FA23E: movzx   eax, word ptr [r13+28h]
 * 00000001409FA243: add     eax, 37h ; '7'
 * 00000001409FA246: and     eax, 0FFFFFFF8h
 * 00000001409FA249: add     r13, rax
 * 00000001409FA24C: sub     r10, rdx
 * 00000001409FA24F: jnz     loc_1409FA15E
 * 00000001409FA255: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FA25A: mov     r12, [rbp+0BE0h+var_C08]
 * 00000001409FA25E: mov     rbx, [rbp+0BE0h+var_C30]
 * 00000001409FA262: mov     r14, [rbp+0BE0h+var_C40]
 * 00000001409FA266: mov     r15d, [rbp+0BE0h+var_C28]
 * 00000001409FA26A: mov     [rsp+0CE0h+var_C90], r13
 * 00000001409FA26F: mov     eax, r13d
 * 00000001409FA272: mov     dword ptr [rbp+0BE0h+var_B10], edx
 * 00000001409FA278: sub     eax, r9d
 * 00000001409FA27B: mov     dword ptr [rbp+0BE0h+var_B10+4], r8d
 * 00000001409FA282: mov     [rbp+0BE0h+var_B08], eax
 * 00000001409FA288: mov     r10d, [r13+0]
 * 00000001409FA28C: mov     dword ptr [rbp+0BE0h+arg_8], r10d
 * 00000001409FA293: cmp     r10d, 1Ch
 * 00000001409FA297: jg      loc_1409FFA01
 * 00000001409FA29D: jz      loc_1409FEFCE
 * 00000001409FA2A3: mov     r8d, 0Ch
 * 00000001409FA2A9: cmp     r10d, r8d
 * 00000001409FA2AC: jg      loc_1409FB844
 * 00000001409FA2B2: jz      loc_140A03549
 * 00000001409FA2B8: xor     eax, eax
 * 00000001409FA2BA: mov     ecx, r10d
 * 00000001409FA2BD: test    r10d, r10d
 * 00000001409FA2C0: jz      loc_1409FB61F
 * 00000001409FA2C6: sub     ecx, 1
 * 00000001409FA2C9: jz      loc_140A0354B
 * 00000001409FA2CF: sub     ecx, 3
 * 00000001409FA2D2: jz      loc_1409FB38A
 * 00000001409FA2D8: sub     ecx, 1
 * 00000001409FA2DB: jz      loc_1409FB054
 * 00000001409FA2E1: lea     r14d, [r8-0Ah]
 * 00000001409FA2E5: sub     ecx, r14d
 * 00000001409FA2E8: jz      loc_1409FAEE4
 * 00000001409FA2EE: sub     ecx, 1
 * 00000001409FA2F1: jz      loc_1409FAA98
 * 00000001409FA2F7: sub     ecx, r14d
 * 00000001409FA2FA: jz      loc_1409FA701
 * 00000001409FA300: cmp     ecx, 1
 * 00000001409FA303: jnz     loc_140A04767
 * 00000001409FA309: cmp     [rsi+980h], rax
 * 00000001409FA310: jnz     short loc_1409FA37B
 * 00000001409FA312: mov     [rsi+824h], eax
 * 00000001409FA318: xor     r15d, r15d
 * 00000001409FA31B: mov     r14d, 8000h
 * 00000001409FA321: mov     edx, [rbp+0BE0h+var_BE8]
 * 00000001409FA324: cmp     dword ptr [rsi+824h], 0
 * 00000001409FA32B: lea     ecx, [rdx-1]
 * 00000001409FA32E: cmovz   ecx, edx
 * 00000001409FA331: mov     edx, 1
 * 00000001409FA336: add     ecx, edx
 * 00000001409FA338: cmp     [rsi+8F8h], r15d
 * 00000001409FA33F: jnz     loc_140A05669
 * 00000001409FA345: lea     r12, [rsi+82Ch]
 * 00000001409FA34C: mov     eax, [r12]
 * 00000001409FA350: mov     [rbp+0BE0h+var_C08], r12
 * 00000001409FA354: cmp     [rsi+828h], eax
 * 00000001409FA35A: jge     loc_140A05669
 * 00000001409FA360: mov     rbx, [rbp+0BE0h+var_C30]
 * 00000001409FA364: lea     r11d, [rdx+18h]
 * 00000001409FA368: mov     r14, [rbp+0BE0h+var_C40]
 * 00000001409FA36C: mov     r9d, 0FFFFFFFFh
 * 00000001409FA372: mov     r15d, [rbp+0BE0h+var_C28]
 * 00000001409FA376: jmp     loc_1409F9F4A
 * 00000001409FA37B: cmp     [rsi+824h], eax
 * 00000001409FA381: jnz     short loc_1409FA3D9
 * 00000001409FA383: mov     eax, [rsi+994h]
 * 00000001409FA389: mov     ecx, eax
 * 00000001409FA38B: shl     ecx, 3
 * 00000001409FA38E: xor     ecx, eax
 * 00000001409FA390: and     ecx, 20h
 * 00000001409FA393: xor     ecx, eax
 * 00000001409FA395: mov     [rsi+994h], ecx
 * 00000001409FA39B: test    cl, 4
 * 00000001409FA39E: jz      loc_1409FA489
 * 00000001409FA3A4: mov     r14d, [r13+8]
 * 00000001409FA3A8: mov     ecx, [r13+10h]
 * 00000001409FA3AC: and     r14d, 0FFFh
 * 00000001409FA3B3: mov     rbx, [r13+8]
 * 00000001409FA3B7: add     r14, 0FFFh
 * 00000001409FA3BE: add     r14, rcx
 * 00000001409FA3C1: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001409FA3C8: shr     r14, 0Ch
 * 00000001409FA3CC: test    r14, r14
 * 00000001409FA3CF: jz      loc_1409FA318
 * 00000001409FA3D5: xor     edi, edi
 * 00000001409FA3D7: jmp     short loc_1409FA3F6
 * 00000001409FA3D9: mov     ecx, [rsi+994h]
 * 00000001409FA3DF: mov     eax, ecx
 * 00000001409FA3E1: shr     eax, 3
 * 00000001409FA3E4: xor     eax, ecx
 * 00000001409FA3E6: test    al, 4
 * 00000001409FA3E8: jz      short loc_1409FA39B
 * 00000001409FA3EA: xor     eax, eax
 * 00000001409FA3EC: jmp     loc_1409FA312
 * 00000001409FA3F1: mov     edx, 1
 * 00000001409FA3F6: mov     rax, [rsi+2B0h]
 * 00000001409FA3FD: mov     rcx, rbx
 * 00000001409FA400: sub     r14, rdx
 * 00000001409FA403: call    KeGuardDispatchICall
 * 00000001409FA408: test    al, al
 * 00000001409FA40A: jz      short loc_1409FA463
 * 00000001409FA40C: cmp     [rsi+8F8h], edi
 * 00000001409FA412: jnz     short loc_1409FA463
 * 00000001409FA414: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FA41E: xor     edx, edx
 * 00000001409FA420: add     rax, rsi
 * 00000001409FA423: mov     rcx, rsi
 * 00000001409FA426: mov     [rsi+900h], rax
 * 00000001409FA42D: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FA437: add     rax, r13
 * 00000001409FA43A: mov     [rsi+908h], rax
 * 00000001409FA441: movsxd  rax, dword ptr [r13+0]
 * 00000001409FA445: mov     [rsi+910h], rax
 * 00000001409FA44C: mov     eax, 1
 * 00000001409FA451: mov     [rsi+918h], rbx
 * 00000001409FA458: mov     [rsi+8F8h], eax
 * 00000001409FA45E: call    $$b8
 * 00000001409FA463: add     dword ptr [rsi+828h], 100h
 * 00000001409FA46D: add     rbx, 1000h
 * 00000001409FA474: test    r14, r14
 * 00000001409FA477: jnz     loc_1409FA3F1
 * 00000001409FA47D: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FA484: jmp     loc_1409FA318
 * 00000001409FA489: mov     r14, [r13+8]
 * 00000001409FA48D: mov     r8d, [r13+10h]
 * 00000001409FA491: mov     r9, r14
 * 00000001409FA494: add     [rsi+828h], r8d
 * 00000001409FA49B: mov     rax, r14
 * 00000001409FA49E: mov     r10d, [rsi+814h]
 * 00000001409FA4A5: mov     r15, [rsi+818h]
 * 00000001409FA4AC: lea     rcx, [r14+r8]
 * 00000001409FA4B0: cmp     r14, rcx
 * 00000001409FA4B3: jnb     short loc_1409FA4C5
 * 00000001409FA4B5: mov     edx, 40h ; '@'
 * 00000001409FA4BA: prefetchnta byte ptr [rax]
 * 00000001409FA4BD: add     rax, rdx
 * 00000001409FA4C0: cmp     rax, rcx
 * 00000001409FA4C3: jb      short loc_1409FA4BA
 * 00000001409FA4C5: mov     r11d, r8d
 * 00000001409FA4C8: mov     rbx, r15
 * 00000001409FA4CB: shr     r11d, 7
 * 00000001409FA4CF: mov     r12d, 1
 * 00000001409FA4D5: test    r11d, r11d
 * 00000001409FA4D8: jz      short loc_1409FA545
 * 00000001409FA4DA: mov     rsi, 7010008004002001h
 * 00000001409FA4E4: mov     edx, 8
 * 00000001409FA4E9: mov     rax, [r9]
 * 00000001409FA4EC: mov     ecx, r10d
 * 00000001409FA4EF: xor     rax, rbx
 * 00000001409FA4F2: mov     rbx, [r9+8]
 * 00000001409FA4F6: rol     rax, cl
 * 00000001409FA4F9: add     r9, 10h
 * 00000001409FA4FD: xor     rbx, rax
 * 00000001409FA500: rol     rbx, cl
 * 00000001409FA503: sub     rdx, r12
 * 00000001409FA506: jnz     short loc_1409FA4E9
 * 00000001409FA508: mov     rcx, r9
 * 00000001409FA50B: sub     rcx, r14
 * 00000001409FA50E: xor     rcx, r15
 * 00000001409FA511: mov     rax, rcx
 * 00000001409FA514: rol     rax, 11h
 * 00000001409FA518: xor     rcx, rax
 * 00000001409FA51B: mov     rax, rsi
 * 00000001409FA51E: mul     rcx
 * 00000001409FA521: xor     r10d, eax
 * 00000001409FA524: mov     [rbp+0BE0h+var_370], rdx
 * 00000001409FA52B: xor     r10d, edx
 * 00000001409FA52E: mov     eax, 0FFFFFFFFh
 * 00000001409FA533: and     r10d, 3Fh
 * 00000001409FA537: cmovz   r10d, r12d
 * 00000001409FA53B: add     r11d, eax
 * 00000001409FA53E: jnz     short loc_1409FA4E4
 * 00000001409FA540: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FA545: and     r8d, 7Fh
 * 00000001409FA549: cmp     r8d, 8
 * 00000001409FA54D: jb      short loc_1409FA56C
 * 00000001409FA54F: mov     edx, r8d
 * 00000001409FA552: shr     rdx, 3
 * 00000001409FA556: xor     rbx, [r9]
 * 00000001409FA559: mov     ecx, r10d
 * 00000001409FA55C: rol     rbx, cl
 * 00000001409FA55F: add     r9, 8
 * 00000001409FA563: add     r8d, 0FFFFFFF8h
 * 00000001409FA567: sub     rdx, r12
 * 00000001409FA56A: jnz     short loc_1409FA556
 * 00000001409FA56C: test    r8d, r8d
 * 00000001409FA56F: jz      short loc_1409FA590
 * 00000001409FA571: mov     esi, 0FFFFFFFFh
 * 00000001409FA576: movzx   eax, byte ptr [r9]
 * 00000001409FA57A: mov     ecx, r10d
 * 00000001409FA57D: xor     rbx, rax
 * 00000001409FA580: add     r9, r12
 * 00000001409FA583: rol     rbx, cl
 * 00000001409FA586: add     r8d, esi
 * 00000001409FA589: jnz     short loc_1409FA576
 * 00000001409FA58B: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FA590: mov     rax, rbx
 * 00000001409FA593: shr     rax, 1Fh
 * 00000001409FA597: xor     r15d, r15d
 * 00000001409FA59A: jmp     short loc_1409FA5A2
 * 00000001409FA59C: xor     ebx, eax
 * 00000001409FA59E: shr     rax, 1Fh
 * 00000001409FA5A2: test    rax, rax
 * 00000001409FA5A5: jnz     short loc_1409FA59C
 * 00000001409FA5A7: mov     edx, [r13+14h]
 * 00000001409FA5AB: btr     ebx, 1Fh
 * 00000001409FA5AF: cmp     ebx, edx
 * 00000001409FA5B1: jz      loc_1409FA31B
 * 00000001409FA5B7: mov     ecx, [r13+10h]
 * 00000001409FA5BB: mov     r8, [r13+8]
 * 00000001409FA5BF: test    rcx, rcx
 * 00000001409FA5C2: jz      loc_1409FA67C
 * 00000001409FA5C8: mov     eax, [rsi+994h]
 * 00000001409FA5CE: mov     r9d, 40h ; '@'
 * 00000001409FA5D4: test    r9b, al
 * 00000001409FA5D7: jz      loc_1409FA67C
 * 00000001409FA5DD: mov     r12, cr8
 * 00000001409FA5E1: lea     eax, [r9-3Eh]
 * 00000001409FA5E5: mov     cr8, rax
 * 00000001409FA5E9: mov     r14, r8
 * 00000001409FA5EC: lea     rax, [rcx-1]
 * 00000001409FA5F0: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FA5F7: add     rax, r8
 * 00000001409FA5FA: or      rax, 0FFFh
 * 00000001409FA600: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FA607: lea     r13, [r14-1]
 * 00000001409FA60B: movzx   r15d, r12b
 * 00000001409FA60F: mov     rax, [rsi+468h]
 * 00000001409FA616: xor     edx, edx
 * 00000001409FA618: mov     rcx, r14
 * 00000001409FA61B: call    KeGuardDispatchICall
 * 00000001409FA620: cmp     eax, 0C000022Dh
 * 00000001409FA625: jnz     short loc_1409FA64B
 * 00000001409FA627: mov     eax, 1
 * 00000001409FA62C: cmp     r12b, al
 * 00000001409FA62F: ja      short loc_1409FA64F
 * 00000001409FA631: movzx   r15d, r12b
 * 00000001409FA635: mov     cr8, r15
 * 00000001409FA639: mov     al, [r14]
 * 00000001409FA63C: mov     rax, cr8
 * 00000001409FA640: mov     eax, 2
 * 00000001409FA645: mov     cr8, rax
 * 00000001409FA649: jmp     short loc_1409FA60F
 * 00000001409FA64B: test    eax, eax
 * 00000001409FA64D: js      short loc_1409FA66F
 * 00000001409FA64F: add     r14, 1000h
 * 00000001409FA656: add     r13, 1000h
 * 00000001409FA65D: cmp     r13, [rbp+0BE0h+arg_8]
 * 00000001409FA664: jnz     short loc_1409FA60B
 * 00000001409FA666: mov     cr8, r15
 * 00000001409FA66A: jmp     loc_1409FA318
 * 00000001409FA66F: mov     cr8, r15
 * 00000001409FA673: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FA678: mov     edx, [r13+14h]
 * 00000001409FA67C: mov     eax, [rsi+8F8h]
 * 00000001409FA682: xor     r15d, r15d
 * 00000001409FA685: test    eax, eax
 * 00000001409FA687: jnz     short loc_1409FA6A1
 * 00000001409FA689: mov     ecx, ebx
 * 00000001409FA68B: mov     eax, edx
 * 00000001409FA68D: xor     rcx, rax
 * 00000001409FA690: mov     rax, [rsi+590h]
 * 00000001409FA697: mov     [rax+18h], rcx
 * 00000001409FA69B: mov     eax, [rsi+8F8h]
 * 00000001409FA6A1: mov     rcx, [r13+8]
 * 00000001409FA6A5: test    eax, eax
 * 00000001409FA6A7: jnz     loc_1409FA31B
 * 00000001409FA6AD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FA6B7: add     rax, rsi
 * 00000001409FA6BA: mov     [rsi+900h], rax
 * 00000001409FA6C1: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FA6CB: add     rax, r13
 * 00000001409FA6CE: mov     [rsi+908h], rax
 * 00000001409FA6D5: movsxd  rax, dword ptr [r13+0]
 * 00000001409FA6D9: mov     [rsi+910h], rax
 * 00000001409FA6E0: mov     [rsi+918h], rcx
 * 00000001409FA6E7: mov     eax, 1
 * 00000001409FA6EC: mov     [rsi+8F8h], eax
 * 00000001409FA6F2: xor     edx, edx
 * 00000001409FA6F4: mov     rcx, rsi
 * 00000001409FA6F7: call    $$b8
 * 00000001409FA6FC: jmp     loc_1409FA31B
 * 00000001409FA701: cmp     [r13+18h], eax
 * 00000001409FA705: jz      short loc_1409FA748
 * 00000001409FA707: cmp     [rsi+980h], rax
 * 00000001409FA70E: jz      loc_1409FA8B9
 * 00000001409FA714: mov     ecx, [rsi+994h]
 * 00000001409FA71A: test    cl, 4
 * 00000001409FA71D: jnz     loc_1409FA8B9
 * 00000001409FA723: lea     rax, [rsi+824h]
 * 00000001409FA72A: xor     r15d, r15d
 * 00000001409FA72D: cmp     [rax], r15d
 * 00000001409FA730: jnz     loc_1409FA8A8
 * 00000001409FA736: mov     eax, ecx
 * 00000001409FA738: shl     eax, 3
 * 00000001409FA73B: xor     eax, ecx
 * 00000001409FA73D: and     eax, 20h
 * 00000001409FA740: xor     eax, ecx
 * 00000001409FA742: mov     [rsi+994h], eax
 * 00000001409FA748: mov     edx, [r13+1Ch]
 * 00000001409FA74C: lea     rax, [rsi+824h]
 * 00000001409FA753: mov     r14d, [rax]
 * 00000001409FA756: lea     rcx, [r13+30h]
 * 00000001409FA75A: shl     r14, 4
 * 00000001409FA75E: add     r14, rcx
 * 00000001409FA761: shl     rdx, 4
 * 00000001409FA765: add     rdx, rcx
 * 00000001409FA768: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409FA76C: mov     [rbp+0BE0h+arg_8], rdx
 * 00000001409FA773: mov     [rsp+0CE0h+var_C88], r14
 * 00000001409FA778: xor     eax, eax
 * 00000001409FA77A: cmp     [r14], eax
 * 00000001409FA77D: jl      loc_1409FA9A4
 * 00000001409FA783: mov     rdi, [r14+8]
 * 00000001409FA787: mov     r8d, [r14+4]
 * 00000001409FA78B: mov     r9, rdi
 * 00000001409FA78E: add     [rsi+828h], r8d
 * 00000001409FA795: mov     rax, rdi
 * 00000001409FA798: mov     r11d, [rsi+814h]
 * 00000001409FA79F: mov     r12d, r8d
 * 00000001409FA7A2: mov     r15, [rsi+818h]
 * 00000001409FA7A9: lea     rcx, [rdi+r8]
 * 00000001409FA7AD: cmp     rdi, rcx
 * 00000001409FA7B0: jnb     short loc_1409FA7C3
 * 00000001409FA7B2: mov     r10d, 40h ; '@'
 * 00000001409FA7B8: prefetchnta byte ptr [rax]
 * 00000001409FA7BB: add     rax, r10
 * 00000001409FA7BE: cmp     rax, rcx
 * 00000001409FA7C1: jb      short loc_1409FA7B8
 * 00000001409FA7C3: mov     r10d, r8d
 * 00000001409FA7C6: mov     rbx, r15
 * 00000001409FA7C9: shr     r10d, 7
 * 00000001409FA7CD: test    r10d, r10d
 * 00000001409FA7D0: jz      short loc_1409FA84B
 * 00000001409FA7D2: mov     esi, 1
 * 00000001409FA7D7: mov     r12d, 0FFFFFFFFh
 * 00000001409FA7DD: mov     r14, 7010008004002001h
 * 00000001409FA7E7: mov     eax, 8
 * 00000001409FA7EC: xor     rbx, [r9]
 * 00000001409FA7EF: mov     ecx, r11d
 * 00000001409FA7F2: rol     rbx, cl
 * 00000001409FA7F5: xor     rbx, [r9+8]
 * 00000001409FA7F9: add     r9, 10h
 * 00000001409FA7FD: rol     rbx, cl
 * 00000001409FA800: sub     rax, rsi
 * 00000001409FA803: jnz     short loc_1409FA7EC
 * 00000001409FA805: mov     rcx, r9
 * 00000001409FA808: sub     rcx, rdi
 * 00000001409FA80B: xor     rcx, r15
 * 00000001409FA80E: mov     rax, rcx
 * 00000001409FA811: rol     rax, 11h
 * 00000001409FA815: xor     rcx, rax
 * 00000001409FA818: mov     rax, r14
 * 00000001409FA81B: mul     rcx
 * 00000001409FA81E: xor     eax, edx
 * 00000001409FA820: mov     [rbp+0BE0h+var_368], rdx
 * 00000001409FA827: xor     r11d, eax
 * 00000001409FA82A: and     r11d, 3Fh
 * 00000001409FA82E: cmovz   r11d, esi
 * 00000001409FA832: add     r10d, r12d
 * 00000001409FA835: jnz     short loc_1409FA7E7
 * 00000001409FA837: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FA83C: mov     r12, r8
 * 00000001409FA83F: mov     r14, [rsp+0CE0h+var_C88]
 * 00000001409FA844: mov     rdx, [rbp+0BE0h+arg_8]
 * 00000001409FA84B: and     r8d, 7Fh
 * 00000001409FA84F: mov     r10d, 1
 * 00000001409FA855: cmp     r8d, 8
 * 00000001409FA859: jb      short loc_1409FA878
 * 00000001409FA85B: mov     eax, r8d
 * 00000001409FA85E: shr     rax, 3
 * 00000001409FA862: xor     rbx, [r9]
 * 00000001409FA865: mov     ecx, r11d
 * 00000001409FA868: rol     rbx, cl
 * 00000001409FA86B: add     r9, 8
 * 00000001409FA86F: add     r8d, 0FFFFFFF8h
 * 00000001409FA873: sub     rax, r10
 * 00000001409FA876: jnz     short loc_1409FA862
 * 00000001409FA878: test    r8d, r8d
 * 00000001409FA87B: jz      short loc_1409FA89C
 * 00000001409FA87D: mov     esi, 0FFFFFFFFh
 * 00000001409FA882: movzx   eax, byte ptr [r9]
 * 00000001409FA886: mov     ecx, r11d
 * 00000001409FA889: xor     rbx, rax
 * 00000001409FA88C: add     r9, r10
 * 00000001409FA88F: rol     rbx, cl
 * 00000001409FA892: add     r8d, esi
 * 00000001409FA895: jnz     short loc_1409FA882
 * 00000001409FA897: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FA89C: mov     rax, rbx
 * 00000001409FA89F: shr     rax, 1Fh
 * 00000001409FA8A3: xor     r15d, r15d
 * 00000001409FA8A6: jmp     short loc_1409FA8D1
 * 00000001409FA8A8: test    cl, 20h
 * 00000001409FA8AB: jz      loc_1409FA748
 * 00000001409FA8B1: mov     r14d, r15d
 * 00000001409FA8B4: jmp     loc_1409FAA90
 * 00000001409FA8B9: mov     r14d, eax
 * 00000001409FA8BC: xor     r15d, r15d
 * 00000001409FA8BF: lea     rax, [rsi+824h]
 * 00000001409FA8C6: jmp     loc_1409FAA90
 * 00000001409FA8CB: xor     ebx, eax
 * 00000001409FA8CD: shr     rax, 1Fh
 * 00000001409FA8D1: test    rax, rax
 * 00000001409FA8D4: jnz     short loc_1409FA8CB
 * 00000001409FA8D6: mov     ecx, [r14]
 * 00000001409FA8D9: btr     ebx, 1Fh
 * 00000001409FA8DD: mov     eax, ecx
 * 00000001409FA8DF: btr     eax, 1Fh
 * 00000001409FA8E3: cmp     ebx, eax
 * 00000001409FA8E5: jz      loc_1409FAA73
 * 00000001409FA8EB: test    r12, r12
 * 00000001409FA8EE: jz      loc_1409FA9F3
 * 00000001409FA8F4: mov     eax, [rsi+994h]
 * 00000001409FA8FA: mov     edx, 40h ; '@'
 * 00000001409FA8FF: test    dl, al
 * 00000001409FA901: jz      loc_1409FA9F3
 * 00000001409FA907: mov     r13, cr8
 * 00000001409FA90B: lea     eax, [rdx-3Eh]
 * 00000001409FA90E: mov     cr8, rax
 * 00000001409FA912: mov     r15, rdi
 * 00000001409FA915: lea     rax, [rdi-1]
 * 00000001409FA919: and     r15, 0FFFFFFFFFFFFF000h
 * 00000001409FA920: add     rax, r12
 * 00000001409FA923: or      rax, 0FFFh
 * 00000001409FA929: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409FA92D: lea     rax, [r15-1]
 * 00000001409FA931: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FA936: movzx   r12d, r13b
 * 00000001409FA93A: mov     rax, [rsi+468h]
 * 00000001409FA941: xor     edx, edx
 * 00000001409FA943: mov     rcx, r15
 * 00000001409FA946: call    KeGuardDispatchICall
 * 00000001409FA94B: cmp     eax, 0C000022Dh
 * 00000001409FA950: jnz     short loc_1409FA976
 * 00000001409FA952: mov     eax, 1
 * 00000001409FA957: cmp     r13b, al
 * 00000001409FA95A: ja      short loc_1409FA97A
 * 00000001409FA95C: movzx   r12d, r13b
 * 00000001409FA960: mov     cr8, r12
 * 00000001409FA964: mov     al, [r15]
 * 00000001409FA967: mov     rax, cr8
 * 00000001409FA96B: mov     eax, 2
 * 00000001409FA970: mov     cr8, rax
 * 00000001409FA974: jmp     short loc_1409FA93A
 * 00000001409FA976: test    eax, eax
 * 00000001409FA978: js      short loc_1409FA9E7
 * 00000001409FA97A: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409FA97F: mov     ecx, 1000h
 * 00000001409FA984: add     rax, rcx
 * 00000001409FA987: add     r15, rcx
 * 00000001409FA98A: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FA98F: cmp     rax, [rbp+0BE0h+var_C50]
 * 00000001409FA993: jnz     short loc_1409FA936
 * 00000001409FA995: mov     cr8, r12
 * 00000001409FA999: mov     rdx, [rbp+0BE0h+arg_8]
 * 00000001409FA9A0: mov     r12, [rbp+0BE0h+var_C08]
 * 00000001409FA9A4: xor     r15d, r15d
 * 00000001409FA9A7: add     r14, 10h
 * 00000001409FA9AB: mov     [rsp+0CE0h+var_C88], r14
 * 00000001409FA9B0: cmp     r14, rdx
 * 00000001409FA9B3: jnb     short loc_1409FA9CD
 * 00000001409FA9B5: mov     eax, [r12]
 * 00000001409FA9B9: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FA9BE: cmp     [rsi+828h], eax
 * 00000001409FA9C4: jl      loc_1409FA778
 * 00000001409FA9CA: cmp     r14, rdx
 * 00000001409FA9CD: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FA9D4: jnz     loc_1409FAA7C
 * 00000001409FA9DA: xor     eax, eax
 * 00000001409FA9DC: mov     r14d, eax
 * 00000001409FA9DF: xor     r15d, r15d
 * 00000001409FA9E2: jmp     loc_1409FAA8C
 * 00000001409FA9E7: mov     cr8, r12
 * 00000001409FA9EB: mov     ecx, [r14]
 * 00000001409FA9EE: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FA9F3: mov     eax, ecx
 * 00000001409FA9F5: xor     edx, edx
 * 00000001409FA9F7: mov     ecx, [rsi+8F8h]
 * 00000001409FA9FD: btr     eax, 1Fh
 * 00000001409FAA01: test    ecx, ecx
 * 00000001409FAA03: jnz     short loc_1409FA999
 * 00000001409FAA05: mov     ecx, ebx
 * 00000001409FAA07: xor     rcx, rax
 * 00000001409FAA0A: mov     rax, [rsi+590h]
 * 00000001409FAA11: mov     [rax+18h], rcx
 * 00000001409FAA15: mov     ecx, [rsi+8F8h]
 * 00000001409FAA1B: test    ecx, ecx
 * 00000001409FAA1D: jnz     loc_1409FA999
 * 00000001409FAA23: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FAA2D: mov     rcx, rsi
 * 00000001409FAA30: add     rax, rsi
 * 00000001409FAA33: mov     [rsi+900h], rax
 * 00000001409FAA3A: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FAA44: add     rax, r13
 * 00000001409FAA47: mov     [rsi+908h], rax
 * 00000001409FAA4E: movsxd  rax, dword ptr [r13+0]
 * 00000001409FAA52: mov     [rsi+910h], rax
 * 00000001409FAA59: lea     eax, [rdx+1]
 * 00000001409FAA5C: mov     [rsi+918h], rdi
 * 00000001409FAA63: mov     [rsi+8F8h], eax
 * 00000001409FAA69: call    $$b8
 * 00000001409FAA6E: jmp     loc_1409FA999
 * 00000001409FAA73: mov     r12, [rbp+0BE0h+var_C08]
 * 00000001409FAA77: jmp     loc_1409FA9A7
 * 00000001409FAA7C: mov     rax, [rsp+0CE0h+var_C90]
 * 00000001409FAA81: add     rax, 30h ; '0'
 * 00000001409FAA85: sub     r14, rax
 * 00000001409FAA88: sar     r14, 4
 * 00000001409FAA8C: mov     rax, [rbp+0BE0h+var_C60]
 * 00000001409FAA90: mov     [rax], r14d
 * 00000001409FAA93: jmp     loc_1409FA31B
 * 00000001409FAA98: mov     rbx, [r13+18h]
 * 00000001409FAA9C: mov     r12d, 1
 * 00000001409FAAA2: mov     rcx, [rsi+6F0h]
 * 00000001409FAAA9: mov     r14, 0B3B74BDEE4453415h
 * 00000001409FAAB3: mov     rax, [rsi+720h]
 * 00000001409FAABA: add     rcx, rbx
 * 00000001409FAABD: movzx   edx, word ptr [r13+22h]
 * 00000001409FAAC2: mov     r15, 0A3A03F5891C8B4E8h
 * 00000001409FAACC: cmp     [rcx+rax], dx
 * 00000001409FAAD0: jz      short loc_1409FAB1A
 * 00000001409FAAD2: xor     eax, eax
 * 00000001409FAAD4: cmp     [rsi+8F8h], eax
 * 00000001409FAADA: jnz     short loc_1409FAB1A
 * 00000001409FAADC: lea     rax, [rsi+r15]
 * 00000001409FAAE0: xor     edx, edx
 * 00000001409FAAE2: mov     [rsi+900h], rax
 * 00000001409FAAE9: mov     rcx, rsi
 * 00000001409FAAEC: lea     rax, [r14+r13]
 * 00000001409FAAF0: mov     [rsi+908h], rax
 * 00000001409FAAF7: movsxd  rax, dword ptr [r13+0]
 * 00000001409FAAFB: mov     [rsi+910h], rax
 * 00000001409FAB02: mov     [rsi+918h], rbx
 * 00000001409FAB09: mov     [rsi+8F8h], r12d
 * 00000001409FAB10: call    $$b8
 * 00000001409FAB15: movzx   edx, word ptr [r13+22h]
 * 00000001409FAB1A: test    [rsi+728h], dx
 * 00000001409FAB21: jnz     short loc_1409FAB75
 * 00000001409FAB23: mov     rcx, [rsi+6F8h]
 * 00000001409FAB2A: add     rcx, rbx
 * 00000001409FAB2D: cmp     [rcx], rcx
 * 00000001409FAB30: jz      short loc_1409FAB75
 * 00000001409FAB32: xor     eax, eax
 * 00000001409FAB34: cmp     [rsi+8F8h], eax
 * 00000001409FAB3A: jnz     short loc_1409FAB75
 * 00000001409FAB3C: lea     rax, [rsi+r15]
 * 00000001409FAB40: xor     edx, edx
 * 00000001409FAB42: mov     [rsi+900h], rax
 * 00000001409FAB49: mov     rcx, rsi
 * 00000001409FAB4C: lea     rax, [r14+r13]
 * 00000001409FAB50: mov     [rsi+908h], rax
 * 00000001409FAB57: movsxd  rax, dword ptr [r13+0]
 * 00000001409FAB5B: mov     [rsi+910h], rax
 * 00000001409FAB62: mov     [rsi+918h], rbx
 * 00000001409FAB69: mov     [rsi+8F8h], r12d
 * 00000001409FAB70: call    $$b8
 * 00000001409FAB75: mov     r14, [r13+8]
 * 00000001409FAB79: mov     r8d, [r13+10h]
 * 00000001409FAB7D: mov     r9, r14
 * 00000001409FAB80: add     [rsi+828h], r8d
 * 00000001409FAB87: mov     rax, r14
 * 00000001409FAB8A: mov     r11d, [rsi+814h]
 * 00000001409FAB91: mov     r15, [rsi+818h]
 * 00000001409FAB98: lea     rcx, [r14+r8]
 * 00000001409FAB9C: cmp     r14, rcx
 * 00000001409FAB9F: jnb     short loc_1409FABB1
 * 00000001409FABA1: mov     edx, 40h ; '@'
 * 00000001409FABA6: prefetchnta byte ptr [rax]
 * 00000001409FABA9: add     rax, rdx
 * 00000001409FABAC: cmp     rax, rcx
 * 00000001409FABAF: jb      short loc_1409FABA6
 * 00000001409FABB1: mov     r10d, r8d
 * 00000001409FABB4: mov     rbx, r15
 * 00000001409FABB7: shr     r10d, 7
 * 00000001409FABBB: mov     r13d, 0FFFFFFFFh
 * 00000001409FABC1: test    r10d, r10d
 * 00000001409FABC4: jz      short loc_1409FAC2B
 * 00000001409FABC6: mov     rsi, 7010008004002001h
 * 00000001409FABD0: mov     edx, 8
 * 00000001409FABD5: mov     rax, [r9]
 * 00000001409FABD8: mov     ecx, r11d
 * 00000001409FABDB: xor     rax, rbx
 * 00000001409FABDE: mov     rbx, [r9+8]
 * 00000001409FABE2: rol     rax, cl
 * 00000001409FABE5: add     r9, 10h
 * 00000001409FABE9: xor     rbx, rax
 * 00000001409FABEC: rol     rbx, cl
 * 00000001409FABEF: sub     rdx, r12
 * 00000001409FABF2: jnz     short loc_1409FABD5
 * 00000001409FABF4: mov     rcx, r9
 * 00000001409FABF7: sub     rcx, r14
 * 00000001409FABFA: xor     rcx, r15
 * 00000001409FABFD: mov     rax, rcx
 * 00000001409FAC00: rol     rax, 11h
 * 00000001409FAC04: xor     rcx, rax
 * 00000001409FAC07: mov     rax, rsi
 * 00000001409FAC0A: mul     rcx
 * 00000001409FAC0D: mov     [rbp+0BE0h+var_360], rdx
 * 00000001409FAC14: xor     edx, eax
 * 00000001409FAC16: xor     r11d, edx
 * 00000001409FAC19: and     r11d, 3Fh
 * 00000001409FAC1D: cmovz   r11d, r12d
 * 00000001409FAC21: add     r10d, r13d
 * 00000001409FAC24: jnz     short loc_1409FABD0
 * 00000001409FAC26: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FAC2B: and     r8d, 7Fh
 * 00000001409FAC2F: cmp     r8d, 8
 * 00000001409FAC33: jb      short loc_1409FAC52
 * 00000001409FAC35: mov     edx, r8d
 * 00000001409FAC38: shr     rdx, 3
 * 00000001409FAC3C: xor     rbx, [r9]
 * 00000001409FAC3F: mov     ecx, r11d
 * 00000001409FAC42: rol     rbx, cl
 * 00000001409FAC45: add     r9, 8
 * 00000001409FAC49: add     r8d, 0FFFFFFF8h
 * 00000001409FAC4D: sub     rdx, r12
 * 00000001409FAC50: jnz     short loc_1409FAC3C
 * 00000001409FAC52: test    r8d, r8d
 * 00000001409FAC55: jz      short loc_1409FAC6C
 * 00000001409FAC57: movzx   eax, byte ptr [r9]
 * 00000001409FAC5B: mov     ecx, r11d
 * 00000001409FAC5E: xor     rbx, rax
 * 00000001409FAC61: add     r9, r12
 * 00000001409FAC64: rol     rbx, cl
 * 00000001409FAC67: add     r8d, r13d
 * 00000001409FAC6A: jnz     short loc_1409FAC57
 * 00000001409FAC6C: mov     rax, rbx
 * 00000001409FAC6F: jmp     short loc_1409FAC73
 * 00000001409FAC71: xor     ebx, eax
 * 00000001409FAC73: shr     rax, 1Fh
 * 00000001409FAC77: test    rax, rax
 * 00000001409FAC7A: jnz     short loc_1409FAC71
 * 00000001409FAC7C: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409FAC81: btr     ebx, 1Fh
 * 00000001409FAC85: mov     r13d, eax
 * 00000001409FAC88: cmp     ebx, [r14+14h]
 * 00000001409FAC8C: jz      loc_1409FAD70
 * 00000001409FAC92: cmp     [r14], eax
 * 00000001409FAC95: jnz     short loc_1409FAC9F
 * 00000001409FAC97: cmp     [r14+18h], eax
 * 00000001409FAC9B: cmovnz  r13d, r12d
 * 00000001409FAC9F: mov     ecx, [r14+10h]
 * 00000001409FACA3: mov     rdx, [r14+8]
 * 00000001409FACA7: test    rcx, rcx
 * 00000001409FACAA: jz      loc_1409FAE5F
 * 00000001409FACB0: mov     eax, [rsi+994h]
 * 00000001409FACB6: mov     r8d, 40h ; '@'
 * 00000001409FACBC: test    r8b, al
 * 00000001409FACBF: jz      loc_1409FAE5F
 * 00000001409FACC5: mov     r12, cr8
 * 00000001409FACC9: lea     eax, [r8-3Eh]
 * 00000001409FACCD: mov     cr8, rax
 * 00000001409FACD1: mov     r14, rdx
 * 00000001409FACD4: lea     rax, [rcx-1]
 * 00000001409FACD8: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FACDF: add     rax, rdx
 * 00000001409FACE2: or      rax, 0FFFh
 * 00000001409FACE8: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FACED: lea     rax, [r14-1]
 * 00000001409FACF1: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FACF8: movzx   r15d, r12b
 * 00000001409FACFC: mov     rax, [rsi+468h]
 * 00000001409FAD03: xor     edx, edx
 * 00000001409FAD05: mov     rcx, r14
 * 00000001409FAD08: call    KeGuardDispatchICall
 * 00000001409FAD0D: cmp     eax, 0C000022Dh
 * 00000001409FAD12: jnz     short loc_1409FAD3F
 * 00000001409FAD14: test    r13d, r13d
 * 00000001409FAD17: jnz     loc_1409FAE56
 * 00000001409FAD1D: lea     eax, [r13+1]
 * 00000001409FAD21: cmp     r12b, al
 * 00000001409FAD24: ja      short loc_1409FAD47
 * 00000001409FAD26: movzx   r15d, r12b
 * 00000001409FAD2A: mov     cr8, r15
 * 00000001409FAD2E: mov     al, [r14]
 * 00000001409FAD31: mov     rax, cr8
 * 00000001409FAD35: lea     eax, [r13+2]
 * 00000001409FAD39: mov     cr8, rax
 * 00000001409FAD3D: jmp     short loc_1409FACFC
 * 00000001409FAD3F: test    eax, eax
 * 00000001409FAD41: js      loc_1409FAE56
 * 00000001409FAD47: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409FAD4E: mov     ecx, 1000h
 * 00000001409FAD53: add     rax, rcx
 * 00000001409FAD56: add     r14, rcx
 * 00000001409FAD59: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FAD60: cmp     rax, [rsp+0CE0h+var_C88]
 * 00000001409FAD65: jnz     short loc_1409FACF8
 * 00000001409FAD67: mov     cr8, r15
 * 00000001409FAD6B: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409FAD70: mov     r13, 0A3A03F5891C8B4E8h
 * 00000001409FAD7A: mov     r12, 0B3B74BDEE4453415h
 * 00000001409FAD84: mov     ebx, 1
 * 00000001409FAD89: lea     rax, [r14+30h]
 * 00000001409FAD8D: xor     r9d, r9d
 * 00000001409FAD90: mov     [rbp+0BE0h+var_870], rax
 * 00000001409FAD97: lea     rcx, [rbp+0BE0h+var_878]
 * 00000001409FAD9E: movzx   eax, word ptr [r14+20h]
 * 00000001409FADA3: xor     r8d, r8d
 * 00000001409FADA6: mov     [rbp+0BE0h+var_878], ax
 * 00000001409FADAD: xor     edx, edx
 * 00000001409FADAF: mov     [rbp+0BE0h+var_876], ax
 * 00000001409FADB6: lea     rax, [rbp+0BE0h+var_970]
 * 00000001409FADBD: mov     [rsp+0CE0h+var_CA8], rax
 * 00000001409FADC2: xor     eax, eax
 * 00000001409FADC4: mov     [rsp+0CE0h+var_CB0], rax
 * 00000001409FADC9: mov     byte ptr [rsp+0CE0h+var_CB8], al
 * 00000001409FADCD: mov     rax, [rsi+508h]
 * 00000001409FADD4: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 00000001409FADD9: mov     rax, [rsi+1E8h]
 * 00000001409FADE0: call    KeGuardDispatchICall
 * 00000001409FADE5: xor     r15d, r15d
 * 00000001409FADE8: test    eax, eax
 * 00000001409FADEA: js      loc_1409FA31B
 * 00000001409FADF0: mov     rcx, [rbp+0BE0h+var_970]
 * 00000001409FADF7: cmp     rcx, [r14+18h]
 * 00000001409FADFB: jz      short loc_1409FAE45
 * 00000001409FADFD: xor     eax, eax
 * 00000001409FADFF: cmp     [rsi+8F8h], eax
 * 00000001409FAE05: jnz     short loc_1409FAE45
 * 00000001409FAE07: lea     rax, [rsi+r13]
 * 00000001409FAE0B: xor     edx, edx
 * 00000001409FAE0D: mov     [rsi+900h], rax
 * 00000001409FAE14: lea     rax, [r14+r12]
 * 00000001409FAE18: mov     [rsi+908h], rax
 * 00000001409FAE1F: movsxd  rax, dword ptr [r14]
 * 00000001409FAE22: mov     [rsi+910h], rax
 * 00000001409FAE29: mov     [rsi+918h], rcx
 * 00000001409FAE30: mov     rcx, rsi
 * 00000001409FAE33: mov     [rsi+8F8h], ebx
 * 00000001409FAE39: call    $$b8
 * 00000001409FAE3E: mov     rcx, [rbp+0BE0h+var_970]
 * 00000001409FAE45: mov     rax, [rsi+1E0h]
 * 00000001409FAE4C: call    KeGuardDispatchICall
 * 00000001409FAE51: jmp     loc_1409FA31B
 * 00000001409FAE56: mov     cr8, r15
 * 00000001409FAE5A: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409FAE5F: mov     eax, [rsi+8F8h]
 * 00000001409FAE65: xor     edx, edx
 * 00000001409FAE67: mov     ecx, [r14+14h]
 * 00000001409FAE6B: test    eax, eax
 * 00000001409FAE6D: jnz     short loc_1409FAE85
 * 00000001409FAE6F: mov     eax, ebx
 * 00000001409FAE71: xor     rcx, rax
 * 00000001409FAE74: mov     rax, [rsi+590h]
 * 00000001409FAE7B: mov     [rax+18h], rcx
 * 00000001409FAE7F: mov     eax, [rsi+8F8h]
 * 00000001409FAE85: mov     rcx, [r14+8]
 * 00000001409FAE89: mov     r13, 0A3A03F5891C8B4E8h
 * 00000001409FAE93: mov     r12, 0B3B74BDEE4453415h
 * 00000001409FAE9D: mov     ebx, 1
 * 00000001409FAEA2: test    eax, eax
 * 00000001409FAEA4: jnz     loc_1409FAD89
 * 00000001409FAEAA: lea     rax, [rsi+r13]
 * 00000001409FAEAE: mov     [rsi+900h], rax
 * 00000001409FAEB5: lea     rax, [r14+r12]
 * 00000001409FAEB9: mov     [rsi+908h], rax
 * 00000001409FAEC0: movsxd  rax, dword ptr [r14]
 * 00000001409FAEC3: mov     [rsi+910h], rax
 * 00000001409FAECA: mov     [rsi+918h], rcx
 * 00000001409FAED1: mov     rcx, rsi
 * 00000001409FAED4: mov     [rsi+8F8h], ebx
 * 00000001409FAEDA: call    $$b8
 * 00000001409FAEDF: jmp     loc_1409FAD89
 * 00000001409FAEE4: mov     rax, [rsi+1A0h]
 * 00000001409FAEEB: lea     rcx, [rbp+0BE0h+var_1A0]
 * 00000001409FAEF2: mov     edx, [r13+1Ch]
 * 00000001409FAEF6: call    KeGuardDispatchICall
 * 00000001409FAEFB: mov     rax, [rsi+1D0h]
 * 00000001409FAF02: lea     rdx, [rbp+0BE0h+var_320]
 * 00000001409FAF09: lea     rcx, [rbp+0BE0h+var_1A0]
 * 00000001409FAF10: call    KeGuardDispatchICall
 * 00000001409FAF15: xor     eax, eax
 * 00000001409FAF17: mov     ebx, eax
 * 00000001409FAF19: cmp     [r13+18h], eax
 * 00000001409FAF1D: jbe     loc_1409FB02F
 * 00000001409FAF23: mov     eax, ebx
 * 00000001409FAF25: lea     r10, [rax+rax*2]
 * 00000001409FAF29: mov     r9d, [r13+r10*8+40h]
 * 00000001409FAF2E: test    [rsi+87Bh], r14b
 * 00000001409FAF35: jz      short loc_1409FAF5A
 * 00000001409FAF37: mov     eax, 0C0000082h
 * 00000001409FAF3C: cmp     r9d, eax
 * 00000001409FAF3F: jnz     short loc_1409FAF5A
 * 00000001409FAF41: mov     eax, gs:1A4h
 * 00000001409FAF49: cmp     eax, [rsi+8F0h]
 * 00000001409FAF4F: jnz     short loc_1409FAF5A
 * 00000001409FAF51: mov     rdx, [rsi+8E8h]
 * 00000001409FAF58: jmp     short loc_1409FAF66
 * 00000001409FAF5A: mov     ecx, r9d
 * 00000001409FAF5D: rdmsr
 * 00000001409FAF5F: shl     rdx, 20h
 * 00000001409FAF63: or      rdx, rax
 * 00000001409FAF66: mov     r8, [r13+r10*8+30h]
 * 00000001409FAF6B: mov     rcx, [r13+r10*8+38h]
 * 00000001409FAF70: and     rdx, r8
 * 00000001409FAF73: cmp     rdx, rcx
 * 00000001409FAF76: jz      loc_1409FAFFE
 * 00000001409FAF7C: mov     r8d, [r13+1Ch]
 * 00000001409FAF80: mov     eax, [rsi+8F8h]
 * 00000001409FAF86: shl     r8, 20h
 * 00000001409FAF8A: or      r8, r9
 * 00000001409FAF8D: test    eax, eax
 * 00000001409FAF8F: jnz     loc_1409FB01C
 * 00000001409FAF95: mov     rax, [rsi+590h]
 * 00000001409FAF9C: xor     rcx, rdx
 * 00000001409FAF9F: mov     [rax+18h], rcx
 * 00000001409FAFA3: mov     eax, [rsi+8F8h]
 * 00000001409FAFA9: test    eax, eax
 * 00000001409FAFAB: jnz     short loc_1409FB01C
 * 00000001409FAFAD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FAFB7: xor     edx, edx
 * 00000001409FAFB9: add     rax, rsi
 * 00000001409FAFBC: mov     rcx, rsi
 * 00000001409FAFBF: mov     [rsi+900h], rax
 * 00000001409FAFC6: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FAFD0: add     rax, r13
 * 00000001409FAFD3: mov     [rsi+908h], rax
 * 00000001409FAFDA: movsxd  rax, dword ptr [r13+0]
 * 00000001409FAFDE: mov     [rsi+910h], rax
 * 00000001409FAFE5: mov     eax, 1
 * 00000001409FAFEA: mov     [rsi+918h], r8
 * 00000001409FAFF1: mov     [rsi+8F8h], eax
 * 00000001409FAFF7: call    $$b8
 * 00000001409FAFFC: jmp     short loc_1409FB01C
 * 00000001409FAFFE: test    dword ptr [rsi+994h], 200h
 * 00000001409FB008: jz      short loc_1409FB01C
 * 00000001409FB00A: cmp     r8, 0FFFFFFFFFFFFFFFFh
 * 00000001409FB00E: jnz     short loc_1409FB01C
 * 00000001409FB010: mov     rax, rdx
 * 00000001409FB013: mov     ecx, r9d
 * 00000001409FB016: shr     rdx, 20h
 * 00000001409FB01A: wrmsr
 * 00000001409FB01C: inc     ebx
 * 00000001409FB01E: cmp     ebx, [r13+18h]
 * 00000001409FB022: jb      loc_1409FAF23
 * 00000001409FB028: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FB02F: mov     rax, [rsi+198h]
 * 00000001409FB036: lea     rcx, [rbp+0BE0h+var_320]
 * 00000001409FB03D: call    KeGuardDispatchICall
 * 00000001409FB042: mov     eax, [r13+18h]
 * 00000001409FB046: shl     eax, 0Fh
 * 00000001409FB049: add     [rsi+828h], eax
 * 00000001409FB04F: jmp     loc_1409FA318
 * 00000001409FB054: mov     ecx, [rsi+830h]
 * 00000001409FB05A: test    dl, cl
 * 00000001409FB05C: jz      loc_1409FA318
 * 00000001409FB062: mov     r12d, 40000000h
 * 00000001409FB068: test    [rsi+990h], r12d
 * 00000001409FB06F: jnz     short loc_1409FB087
 * 00000001409FB071: mov     r14d, eax
 * 00000001409FB074: and     ecx, 3
 * 00000001409FB077: cmp     cl, 3
 * 00000001409FB07A: setz    r14b
 * 00000001409FB07E: mov     dword ptr [rbp+0BE0h+arg_8], r14d
 * 00000001409FB085: jmp     short loc_1409FB0DB
 * 00000001409FB087: rdtsc
 * 00000001409FB089: shl     rdx, 20h
 * 00000001409FB08D: or      rax, rdx
 * 00000001409FB090: mov     rcx, rax
 * 00000001409FB093: ror     rax, 3
 * 00000001409FB097: xor     rcx, rax
 * 00000001409FB09A: mov     rax, 7010008004002001h
 * 00000001409FB0A4: mul     rcx
 * 00000001409FB0A7: mov     rcx, rdx
 * 00000001409FB0AA: mov     [rbp+0BE0h+var_358], rdx
 * 00000001409FB0B1: xor     rcx, rax
 * 00000001409FB0B4: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001409FB0BE: mul     rcx
 * 00000001409FB0C1: shr     rdx, 1
 * 00000001409FB0C4: lea     rax, [rdx+rdx*2]
 * 00000001409FB0C8: cmp     rcx, rax
 * 00000001409FB0CB: mov     eax, 0
 * 00000001409FB0D0: setz    al
 * 00000001409FB0D3: mov     dword ptr [rbp+0BE0h+arg_8], eax
 * 00000001409FB0D9: xor     eax, eax
 * 00000001409FB0DB: mov     rbx, [rsi+548h]
 * 00000001409FB0E2: mov     r15d, eax
 * 00000001409FB0E5: mov     [rbp+0BE0h+var_C58], eax
 * 00000001409FB0E8: mov     rax, [rsi+178h]
 * 00000001409FB0EF: call    KeGuardDispatchICall
 * 00000001409FB0F4: test    [rsi+990h], r12d
 * 00000001409FB0FB: jnz     short loc_1409FB116
 * 00000001409FB0FD: mov     ecx, [rsi+950h]
 * 00000001409FB103: cmp     ecx, 7
 * 00000001409FB106: jnb     short loc_1409FB116
 * 00000001409FB108: mov     r12d, 1
 * 00000001409FB10E: mov     r14d, r12d
 * 00000001409FB111: shl     r14b, cl
 * 00000001409FB114: jmp     short loc_1409FB134
 * 00000001409FB116: mov     rax, [rsi+128h]
 * 00000001409FB11D: xor     edx, edx
 * 00000001409FB11F: mov     rcx, [rsi+0A00h]
 * 00000001409FB126: call    KeGuardDispatchICall
 * 00000001409FB12B: mov     r14b, 80h
 * 00000001409FB12E: mov     r12d, 1
 * 00000001409FB134: mov     rax, [rsi+138h]
 * 00000001409FB13B: xor     edx, edx
 * 00000001409FB13D: mov     rcx, rbx
 * 00000001409FB140: call    KeGuardDispatchICall
 * 00000001409FB145: mov     r8, [rsi+520h]
 * 00000001409FB14C: mov     rdx, [r8]
 * 00000001409FB14F: cmp     rdx, r8
 * 00000001409FB152: jz      short loc_1409FB179
 * 00000001409FB154: mov     rax, [rsi+6B8h]
 * 00000001409FB15B: mov     rcx, rdx
 * 00000001409FB15E: sub     rcx, [rsi+6D0h]
 * 00000001409FB165: lock or [rcx+rax], r14b
 * 00000001409FB16A: mov     rdx, [rdx]
 * 00000001409FB16D: add     r15d, r12d
 * 00000001409FB170: cmp     rdx, r8
 * 00000001409FB173: jnz     short loc_1409FB154
 * 00000001409FB175: mov     [rbp+0BE0h+var_C58], r15d
 * 00000001409FB179: mov     rax, [rsi+550h]
 * 00000001409FB180: mov     r15d, 4
 * 00000001409FB186: mov     edi, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FB18C: mov     r13, [rax]
 * 00000001409FB18F: mov     rax, [rsi+730h]
 * 00000001409FB196: mov     ebx, [rax+r13]
 * 00000001409FB19A: mov     [rsp+0CE0h+var_C88], rbx
 * 00000001409FB19F: mov     rax, [rsi+108h]
 * 00000001409FB1A6: mov     rdx, r15
 * 00000001409FB1A9: mov     rcx, r13
 * 00000001409FB1AC: call    KeGuardDispatchICall
 * 00000001409FB1B1: mov     r12, rax
 * 00000001409FB1B4: xor     eax, eax
 * 00000001409FB1B6: test    r12, r12
 * 00000001409FB1B9: jz      loc_1409FB329
 * 00000001409FB1BF: mov     rbx, [r12]
 * 00000001409FB1C3: sar     rbx, 10h
 * 00000001409FB1C7: and     rbx, 0FFFFFFFFFFFFFFF0h
 * 00000001409FB1CB: mov     al, [rbx]
 * 00000001409FB1CD: and     al, 7Fh
 * 00000001409FB1CF: cmp     al, 3
 * 00000001409FB1D1: jnz     loc_1409FB26B
 * 00000001409FB1D7: mov     r8, [rsi+6B8h]
 * 00000001409FB1DE: mov     rdx, r8
 * 00000001409FB1E1: test    [rbx+r8], r14b
 * 00000001409FB1E5: jnz     short loc_1409FB25D
 * 00000001409FB1E7: mov     rax, [rsi+6C0h]
 * 00000001409FB1EE: mov     ecx, [rbx+rax]
 * 00000001409FB1F1: test    [rsi+6D8h], ecx
 * 00000001409FB1F7: jz      short loc_1409FB25D
 * 00000001409FB1F9: xor     eax, eax
 * 00000001409FB1FB: cmp     [rsi+8F8h], eax
 * 00000001409FB201: jnz     short loc_1409FB25D
 * 00000001409FB203: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FB208: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FB212: add     rax, rsi
 * 00000001409FB215: xor     edx, edx
 * 00000001409FB217: mov     [rsi+900h], rax
 * 00000001409FB21E: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FB228: add     rax, rcx
 * 00000001409FB22B: mov     [rsi+908h], rax
 * 00000001409FB232: movsxd  rax, dword ptr [rcx]
 * 00000001409FB235: mov     rcx, rsi
 * 00000001409FB238: mov     [rsi+910h], rax
 * 00000001409FB23F: mov     eax, 1
 * 00000001409FB244: mov     [rsi+918h], rbx
 * 00000001409FB24B: mov     [rsi+8F8h], eax
 * 00000001409FB251: call    $$b8
 * 00000001409FB256: mov     rdx, [rsi+6B8h]
 * 00000001409FB25D: mov     al, r14b
 * 00000001409FB260: not     al
 * 00000001409FB262: lock and [rbx+rdx], al
 * 00000001409FB266: jmp     loc_1409FB312
 * 00000001409FB26B: cmp     al, 6
 * 00000001409FB26D: jnz     short loc_1409FB2B1
 * 00000001409FB26F: test    edi, edi
 * 00000001409FB271: jz      loc_1409FB312
 * 00000001409FB277: mov     rcx, [rsi+680h]
 * 00000001409FB27E: mov     rax, [rbx+rcx+20h]
 * 00000001409FB283: cmp     rax, [rsi+320h]
 * 00000001409FB28A: jz      short loc_1409FB295
 * 00000001409FB28C: cmp     rax, [rsi+328h]
 * 00000001409FB293: jnz     short loc_1409FB2B5
 * 00000001409FB295: mov     rax, [rsi+330h]
 * 00000001409FB29C: cmp     [rbx+rcx+30h], rax
 * 00000001409FB2A1: jnz     short loc_1409FB2B5
 * 00000001409FB2A3: mov     rax, [rsi+338h]
 * 00000001409FB2AA: cmp     [rbx+rcx+28h], rax
 * 00000001409FB2AF: jmp     short loc_1409FB2B3
 * 00000001409FB2B1: test    al, al
 * 00000001409FB2B3: jz      short loc_1409FB312
 * 00000001409FB2B5: xor     eax, eax
 * 00000001409FB2B7: cmp     [rsi+8F8h], eax
 * 00000001409FB2BD: jnz     short loc_1409FB312
 * 00000001409FB2BF: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FB2C4: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FB2CE: add     rax, rsi
 * 00000001409FB2D1: xor     edx, edx
 * 00000001409FB2D3: mov     [rsi+900h], rax
 * 00000001409FB2DA: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FB2E4: add     rax, rcx
 * 00000001409FB2E7: mov     [rsi+908h], rax
 * 00000001409FB2EE: movsxd  rax, dword ptr [rcx]
 * 00000001409FB2F1: mov     rcx, rsi
 * 00000001409FB2F4: mov     [rsi+910h], rax
 * 00000001409FB2FB: mov     eax, 1
 * 00000001409FB300: mov     [rsi+918h], rbx
 * 00000001409FB307: mov     [rsi+8F8h], eax
 * 00000001409FB30D: call    $$b8
 * 00000001409FB312: mov     rax, [rsi+120h]
 * 00000001409FB319: mov     rdx, r12
 * 00000001409FB31C: mov     rcx, r13
 * 00000001409FB31F: call    KeGuardDispatchICall
 * 00000001409FB324: mov     rbx, [rsp+0CE0h+var_C88]
 * 00000001409FB329: add     r15, 4
 * 00000001409FB32D: cmp     r15, rbx
 * 00000001409FB330: jb      loc_1409FB19F
 * 00000001409FB336: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FB33D: cmp     r14b, 80h
 * 00000001409FB341: jnz     short loc_1409FB358
 * 00000001409FB343: mov     rax, [rsi+130h]
 * 00000001409FB34A: xor     edx, edx
 * 00000001409FB34C: mov     rcx, [rsi+0A00h]
 * 00000001409FB353: call    KeGuardDispatchICall
 * 00000001409FB358: mov     rcx, [rsi+548h]
 * 00000001409FB35F: xor     edx, edx
 * 00000001409FB361: mov     rax, [rsi+140h]
 * 00000001409FB368: call    KeGuardDispatchICall
 * 00000001409FB36D: mov     rax, [rsi+180h]
 * 00000001409FB374: call    KeGuardDispatchICall
 * 00000001409FB379: mov     eax, [rbp+0BE0h+var_C58]
 * 00000001409FB37C: shr     rbx, 2
 * 00000001409FB380: add     eax, ebx
 * 00000001409FB382: shl     eax, 8
 * 00000001409FB385: jmp     loc_1409FB049
 * 00000001409FB38A: mov     eax, [rsi+830h]
 * 00000001409FB390: test    dl, al
 * 00000001409FB392: jnz     loc_1409FA318
 * 00000001409FB398: mov     rbx, [rsi+548h]
 * 00000001409FB39F: xor     eax, eax
 * 00000001409FB3A1: mov     r13d, eax
 * 00000001409FB3A4: mov     [rbp+0BE0h+var_C58], eax
 * 00000001409FB3A7: mov     rax, [rsi+178h]
 * 00000001409FB3AE: call    KeGuardDispatchICall
 * 00000001409FB3B3: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FB3BD: jnz     short loc_1409FB3D5
 * 00000001409FB3BF: mov     ecx, [rsi+950h]
 * 00000001409FB3C5: cmp     ecx, 7
 * 00000001409FB3C8: jnb     short loc_1409FB3D5
 * 00000001409FB3CA: mov     r14d, 1
 * 00000001409FB3D0: shl     r14b, cl
 * 00000001409FB3D3: jmp     short loc_1409FB3ED
 * 00000001409FB3D5: mov     rax, [rsi+128h]
 * 00000001409FB3DC: xor     edx, edx
 * 00000001409FB3DE: mov     rcx, [rsi+0A00h]
 * 00000001409FB3E5: call    KeGuardDispatchICall
 * 00000001409FB3EA: mov     r14b, 80h
 * 00000001409FB3ED: mov     rax, [rsi+138h]
 * 00000001409FB3F4: xor     edx, edx
 * 00000001409FB3F6: mov     rcx, rbx
 * 00000001409FB3F9: mov     dword ptr [rbp+0BE0h+arg_8], r14d
 * 00000001409FB400: call    KeGuardDispatchICall
 * 00000001409FB405: mov     r12, [rsi+520h]
 * 00000001409FB40C: mov     r15, [r12]
 * 00000001409FB410: cmp     r15, r12
 * 00000001409FB413: jz      loc_1409FB4D1
 * 00000001409FB419: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FB41E: mov     rbx, r15
 * 00000001409FB421: sub     rbx, [rsi+6D0h]
 * 00000001409FB428: cmp     r14b, 80h
 * 00000001409FB42C: jz      short loc_1409FB4AB
 * 00000001409FB42E: mov     rax, [rsi+6B8h]
 * 00000001409FB435: test    [rbx+rax], r14b
 * 00000001409FB439: jz      short loc_1409FB4AB
 * 00000001409FB43B: mov     rax, [rsi+6C0h]
 * 00000001409FB442: mov     ecx, [rbx+rax]
 * 00000001409FB445: test    [rsi+6D8h], ecx
 * 00000001409FB44B: jz      short loc_1409FB4AB
 * 00000001409FB44D: xor     eax, eax
 * 00000001409FB44F: cmp     [rsi+8F8h], eax
 * 00000001409FB455: jnz     short loc_1409FB4AB
 * 00000001409FB457: mov     ecx, 1
 * 00000001409FB45C: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FB466: add     rax, rsi
 * 00000001409FB469: xor     edx, edx
 * 00000001409FB46B: mov     [rsi+900h], rax
 * 00000001409FB472: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FB47C: add     rax, rdi
 * 00000001409FB47F: mov     [rsi+908h], rax
 * 00000001409FB486: movsxd  rax, dword ptr [rdi]
 * 00000001409FB489: mov     [rsi+910h], rax
 * 00000001409FB490: mov     rax, rbx
 * 00000001409FB493: or      rax, rcx
 * 00000001409FB496: mov     [rsi+918h], rax
 * 00000001409FB49D: mov     [rsi+8F8h], ecx
 * 00000001409FB4A3: mov     rcx, rsi
 * 00000001409FB4A6: call    $$b8
 * 00000001409FB4AB: mov     rax, [rsi+6B8h]
 * 00000001409FB4B2: lock or [rbx+rax], r14b
 * 00000001409FB4B7: mov     r15, [r15]
 * 00000001409FB4BA: inc     r13d
 * 00000001409FB4BD: cmp     r15, r12
 * 00000001409FB4C0: jnz     loc_1409FB41E
 * 00000001409FB4C6: mov     [rbp+0BE0h+var_C58], r13d
 * 00000001409FB4CA: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FB4D1: mov     rcx, [rsi+500h]
 * 00000001409FB4D8: mov     rax, cr8
 * 00000001409FB4DC: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FB4E1: mov     eax, 0Ch
 * 00000001409FB4E6: mov     cr8, rax
 * 00000001409FB4EA: mov     rax, [rsi+148h]
 * 00000001409FB4F1: lea     rdx, [rbp+0BE0h+var_128]
 * 00000001409FB4F8: call    KeGuardDispatchICall
 * 00000001409FB4FD: mov     r13, [rsi+4F8h]
 * 00000001409FB504: mov     r15, [r13+0]
 * 00000001409FB508: cmp     r15, r13
 * 00000001409FB50B: jz      loc_1409FB5BF
 * 00000001409FB511: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FB516: mov     r12b, r14b
 * 00000001409FB519: movzx   edx, r14b
 * 00000001409FB51D: not     r12b
 * 00000001409FB520: mov     [rbp+0BE0h+var_BF0], edx
 * 00000001409FB523: xor     r14d, r14d
 * 00000001409FB526: mov     rcx, [rsi+6B8h]
 * 00000001409FB52D: mov     rbx, r15
 * 00000001409FB530: sub     rbx, [rsi+6B0h]
 * 00000001409FB537: movsx   eax, byte ptr [rcx+rbx]
 * 00000001409FB53B: test    edx, eax
 * 00000001409FB53D: jnz     short loc_1409FB5A0
 * 00000001409FB53F: cmp     [rsi+8F8h], r14d
 * 00000001409FB546: jnz     short loc_1409FB5A0
 * 00000001409FB548: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FB552: xor     edx, edx
 * 00000001409FB554: add     rax, rsi
 * 00000001409FB557: mov     rcx, rsi
 * 00000001409FB55A: mov     [rsi+900h], rax
 * 00000001409FB561: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FB56B: add     rax, rdi
 * 00000001409FB56E: mov     [rsi+908h], rax
 * 00000001409FB575: movsxd  rax, dword ptr [rdi]
 * 00000001409FB578: mov     [rsi+910h], rax
 * 00000001409FB57F: mov     eax, 1
 * 00000001409FB584: mov     [rsi+918h], rbx
 * 00000001409FB58B: mov     [rsi+8F8h], eax
 * 00000001409FB591: call    $$b8
 * 00000001409FB596: mov     rcx, [rsi+6B8h]
 * 00000001409FB59D: mov     edx, [rbp+0BE0h+var_BF0]
 * 00000001409FB5A0: lock and [rbx+rcx], r12b
 * 00000001409FB5A5: mov     r15, [r15]
 * 00000001409FB5A8: cmp     r15, r13
 * 00000001409FB5AB: jnz     loc_1409FB526
 * 00000001409FB5B1: mov     r14d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FB5B8: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FB5BF: mov     rax, [rsi+188h]
 * 00000001409FB5C6: lea     rcx, [rbp+0BE0h+var_128]
 * 00000001409FB5CD: call    KeGuardDispatchICall
 * 00000001409FB5D2: movzx   eax, byte ptr [rsp+0CE0h+var_C88]
 * 00000001409FB5D7: mov     cr8, rax
 * 00000001409FB5DB: cmp     r14b, 80h
 * 00000001409FB5DF: jnz     short loc_1409FB5F6
 * 00000001409FB5E1: mov     rax, [rsi+130h]
 * 00000001409FB5E8: xor     edx, edx
 * 00000001409FB5EA: mov     rcx, [rsi+0A00h]
 * 00000001409FB5F1: call    KeGuardDispatchICall
 * 00000001409FB5F6: mov     rcx, [rsi+548h]
 * 00000001409FB5FD: xor     edx, edx
 * 00000001409FB5FF: mov     rax, [rsi+140h]
 * 00000001409FB606: call    KeGuardDispatchICall
 * 00000001409FB60B: mov     rax, [rsi+180h]
 * 00000001409FB612: call    KeGuardDispatchICall
 * 00000001409FB617: mov     eax, [rbp+0BE0h+var_C58]
 * 00000001409FB61A: jmp     loc_1409FB382
 * 00000001409FB61F: mov     r14, [r13+8]
 * 00000001409FB623: mov     r8d, [r13+10h]
 * 00000001409FB627: mov     r9, r14
 * 00000001409FB62A: add     [rsi+828h], r8d
 * 00000001409FB631: mov     rax, r14
 * 00000001409FB634: mov     r11d, [rsi+814h]
 * 00000001409FB63B: mov     r15, [rsi+818h]
 * 00000001409FB642: lea     rcx, [r14+r8]
 * 00000001409FB646: cmp     r14, rcx
 * 00000001409FB649: jnb     short loc_1409FB65B
 * 00000001409FB64B: mov     edx, 40h ; '@'
 * 00000001409FB650: prefetchnta byte ptr [rax]
 * 00000001409FB653: add     rax, rdx
 * 00000001409FB656: cmp     rax, rcx
 * 00000001409FB659: jb      short loc_1409FB650
 * 00000001409FB65B: mov     r10d, r8d
 * 00000001409FB65E: mov     rbx, r15
 * 00000001409FB661: shr     r10d, 7
 * 00000001409FB665: mov     r12d, 1
 * 00000001409FB66B: test    r10d, r10d
 * 00000001409FB66E: jz      short loc_1409FB6DA
 * 00000001409FB670: mov     rsi, 7010008004002001h
 * 00000001409FB67A: mov     edx, 8
 * 00000001409FB67F: mov     rax, [r9]
 * 00000001409FB682: mov     ecx, r11d
 * 00000001409FB685: xor     rax, rbx
 * 00000001409FB688: mov     rbx, [r9+8]
 * 00000001409FB68C: rol     rax, cl
 * 00000001409FB68F: add     r9, 10h
 * 00000001409FB693: xor     rbx, rax
 * 00000001409FB696: rol     rbx, cl
 * 00000001409FB699: sub     rdx, r12
 * 00000001409FB69C: jnz     short loc_1409FB67F
 * 00000001409FB69E: mov     rcx, r9
 * 00000001409FB6A1: sub     rcx, r14
 * 00000001409FB6A4: xor     rcx, r15
 * 00000001409FB6A7: mov     rax, rcx
 * 00000001409FB6AA: rol     rax, 11h
 * 00000001409FB6AE: xor     rcx, rax
 * 00000001409FB6B1: mov     rax, rsi
 * 00000001409FB6B4: mul     rcx
 * 00000001409FB6B7: mov     [rbp+0BE0h+var_350], rdx
 * 00000001409FB6BE: xor     edx, eax
 * 00000001409FB6C0: xor     r11d, edx
 * 00000001409FB6C3: mov     eax, 0FFFFFFFFh
 * 00000001409FB6C8: and     r11d, 3Fh
 * 00000001409FB6CC: cmovz   r11d, r12d
 * 00000001409FB6D0: add     r10d, eax
 * 00000001409FB6D3: jnz     short loc_1409FB67A
 * 00000001409FB6D5: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FB6DA: and     r8d, 7Fh
 * 00000001409FB6DE: cmp     r8d, 8
 * 00000001409FB6E2: jb      short loc_1409FB701
 * 00000001409FB6E4: mov     edx, r8d
 * 00000001409FB6E7: shr     rdx, 3
 * 00000001409FB6EB: xor     rbx, [r9]
 * 00000001409FB6EE: mov     ecx, r11d
 * 00000001409FB6F1: rol     rbx, cl
 * 00000001409FB6F4: add     r9, 8
 * 00000001409FB6F8: add     r8d, 0FFFFFFF8h
 * 00000001409FB6FC: sub     rdx, r12
 * 00000001409FB6FF: jnz     short loc_1409FB6EB
 * 00000001409FB701: test    r8d, r8d
 * 00000001409FB704: jz      short loc_1409FB725
 * 00000001409FB706: mov     esi, 0FFFFFFFFh
 * 00000001409FB70B: movzx   eax, byte ptr [r9]
 * 00000001409FB70F: mov     ecx, r11d
 * 00000001409FB712: xor     rbx, rax
 * 00000001409FB715: add     r9, r12
 * 00000001409FB718: rol     rbx, cl
 * 00000001409FB71B: add     r8d, esi
 * 00000001409FB71E: jnz     short loc_1409FB70B
 * 00000001409FB720: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FB725: mov     rax, rbx
 * 00000001409FB728: jmp     short loc_1409FB72C
 * 00000001409FB72A: xor     ebx, eax
 * 00000001409FB72C: shr     rax, 1Fh
 * 00000001409FB730: test    rax, rax
 * 00000001409FB733: jnz     short loc_1409FB72A
 * 00000001409FB735: btr     ebx, 1Fh
 * 00000001409FB739: mov     r12d, eax
 * 00000001409FB73C: cmp     ebx, [r13+14h]
 * 00000001409FB740: jz      loc_1409FA318
 * 00000001409FB746: cmp     [r13+0], eax
 * 00000001409FB74A: jnz     short loc_1409FB757
 * 00000001409FB74C: cmp     [r13+18h], eax
 * 00000001409FB750: lea     ecx, [rax+1]
 * 00000001409FB753: cmovnz  r12d, ecx
 * 00000001409FB757: mov     ecx, [r13+10h]
 * 00000001409FB75B: mov     rdx, [r13+8]
 * 00000001409FB75F: test    rcx, rcx
 * 00000001409FB762: jz      loc_1409FB828
 * 00000001409FB768: mov     eax, [rsi+994h]
 * 00000001409FB76E: mov     r8d, 40h ; '@'
 * 00000001409FB774: test    r8b, al
 * 00000001409FB777: jz      loc_1409FB828
 * 00000001409FB77D: mov     r13, cr8
 * 00000001409FB781: lea     eax, [r8-3Eh]
 * 00000001409FB785: mov     cr8, rax
 * 00000001409FB789: mov     r14, rdx
 * 00000001409FB78C: lea     rax, [rcx-1]
 * 00000001409FB790: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FB797: add     rax, rdx
 * 00000001409FB79A: or      rax, 0FFFh
 * 00000001409FB7A0: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FB7A5: lea     rax, [r14-1]
 * 00000001409FB7A9: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FB7B0: movzx   r15d, r13b
 * 00000001409FB7B4: mov     rax, [rsi+468h]
 * 00000001409FB7BB: xor     edx, edx
 * 00000001409FB7BD: mov     rcx, r14
 * 00000001409FB7C0: call    KeGuardDispatchICall
 * 00000001409FB7C5: cmp     eax, 0C000022Dh
 * 00000001409FB7CA: jnz     short loc_1409FB7F5
 * 00000001409FB7CC: test    r12d, r12d
 * 00000001409FB7CF: jnz     short loc_1409FB81F
 * 00000001409FB7D1: lea     eax, [r12+1]
 * 00000001409FB7D6: cmp     r13b, al
 * 00000001409FB7D9: ja      short loc_1409FB7F9
 * 00000001409FB7DB: movzx   r15d, r13b
 * 00000001409FB7DF: mov     cr8, r15
 * 00000001409FB7E3: mov     al, [r14]
 * 00000001409FB7E6: mov     rax, cr8
 * 00000001409FB7EA: lea     eax, [r12+2]
 * 00000001409FB7EF: mov     cr8, rax
 * 00000001409FB7F3: jmp     short loc_1409FB7B4
 * 00000001409FB7F5: test    eax, eax
 * 00000001409FB7F7: js      short loc_1409FB81F
 * 00000001409FB7F9: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409FB800: mov     r11d, 1000h
 * 00000001409FB806: add     rax, r11
 * 00000001409FB809: add     r14, r11
 * 00000001409FB80C: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FB813: cmp     rax, [rsp+0CE0h+var_C88]
 * 00000001409FB818: jnz     short loc_1409FB7B0
 * 00000001409FB81A: jmp     loc_1409FA666
 * 00000001409FB81F: mov     cr8, r15
 * 00000001409FB823: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FB828: mov     eax, [rsi+8F8h]
 * 00000001409FB82E: xor     r15d, r15d
 * 00000001409FB831: mov     ecx, [r13+14h]
 * 00000001409FB835: test    eax, eax
 * 00000001409FB837: jnz     loc_1409FA6A1
 * 00000001409FB83D: mov     eax, ebx
 * 00000001409FB83F: jmp     loc_1409FA68D
 * 00000001409FB844: cmp     r10d, 0Eh
 * 00000001409FB848: jle     loc_1409FEB1B
 * 00000001409FB84E: mov     ebx, 0Fh
 * 00000001409FB853: cmp     r10d, ebx
 * 00000001409FB856: jz      loc_1409FE9C7
 * 00000001409FB85C: cmp     r10d, 15h
 * 00000001409FB860: jz      loc_1409FE8CA
 * 00000001409FB866: cmp     r10d, 18h
 * 00000001409FB86A: jz      loc_1409FC1B5
 * 00000001409FB870: cmp     r10d, r11d
 * 00000001409FB873: jz      loc_1409FBD77
 * 00000001409FB879: cmp     r10d, 1Ah
 * 00000001409FB87D: jz      loc_1409FBB53
 * 00000001409FB883: cmp     r10d, 1Bh
 * 00000001409FB887: jnz     loc_140A0476C
 * 00000001409FB88D: mov     eax, [rsi+830h]
 * 00000001409FB893: test    dl, al
 * 00000001409FB895: jz      loc_1409FA318
 * 00000001409FB89B: mov     r14, [rsi+5A8h]
 * 00000001409FB8A2: xor     eax, eax
 * 00000001409FB8A4: mov     r15, [rsi+5B0h]
 * 00000001409FB8AB: mov     rbx, [rsi+548h]
 * 00000001409FB8B2: mov     [rsp+0CE0h+var_C78], eax
 * 00000001409FB8B6: mov     rax, [rsi+178h]
 * 00000001409FB8BD: mov     [rbp+0BE0h+var_C50], r14
 * 00000001409FB8C1: mov     [rsp+0CE0h+var_C88], r15
 * 00000001409FB8C6: call    KeGuardDispatchICall
 * 00000001409FB8CB: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FB8D5: jnz     short loc_1409FB8F0
 * 00000001409FB8D7: mov     ecx, [rsi+950h]
 * 00000001409FB8DD: cmp     ecx, 7
 * 00000001409FB8E0: jnb     short loc_1409FB8F0
 * 00000001409FB8E2: mov     r12d, 1
 * 00000001409FB8E8: mov     r13d, r12d
 * 00000001409FB8EB: shl     r13b, cl
 * 00000001409FB8EE: jmp     short loc_1409FB90E
 * 00000001409FB8F0: mov     rax, [rsi+128h]
 * 00000001409FB8F7: xor     edx, edx
 * 00000001409FB8F9: mov     rcx, [rsi+0A00h]
 * 00000001409FB900: call    KeGuardDispatchICall
 * 00000001409FB905: mov     r13b, 80h
 * 00000001409FB908: mov     r12d, 1
 * 00000001409FB90E: mov     rax, [rsi+138h]
 * 00000001409FB915: xor     edx, edx
 * 00000001409FB917: mov     rcx, rbx
 * 00000001409FB91A: mov     [rbp+0BE0h+var_C58], r13d
 * 00000001409FB91E: call    KeGuardDispatchICall
 * 00000001409FB923: mov     rax, [rsi+138h]
 * 00000001409FB92A: xor     edx, edx
 * 00000001409FB92C: mov     rcx, r14
 * 00000001409FB92F: call    KeGuardDispatchICall
 * 00000001409FB934: mov     r9, [rsi+5A0h]
 * 00000001409FB93B: xor     eax, eax
 * 00000001409FB93D: mov     r10d, eax
 * 00000001409FB940: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409FB944: mov     r8, [r9]
 * 00000001409FB947: cmp     r8, r9
 * 00000001409FB94A: jz      short loc_1409FB99E
 * 00000001409FB94C: lea     rdx, [r8-18h]
 * 00000001409FB950: cmp     rdx, r15
 * 00000001409FB953: jz      short loc_1409FB98B
 * 00000001409FB955: mov     rax, [rsi+738h]
 * 00000001409FB95C: mov     rdx, [rdx+rax]
 * 00000001409FB960: mov     rax, [rsi+6C0h]
 * 00000001409FB967: mov     ecx, [rdx+rax]
 * 00000001409FB96A: test    [rsi+6D8h], ecx
 * 00000001409FB970: jnz     short loc_1409FB97F
 * 00000001409FB972: test    r10, r10
 * 00000001409FB975: mov     rax, rdx
 * 00000001409FB978: cmovnz  rax, r12
 * 00000001409FB97C: mov     r10, rax
 * 00000001409FB97F: mov     rax, [rsi+6B8h]
 * 00000001409FB986: lock or [rdx+rax], r13b
 * 00000001409FB98B: mov     r8, [r8]
 * 00000001409FB98E: cmp     r8, r9
 * 00000001409FB991: jnz     short loc_1409FB94C
 * 00000001409FB993: mov     [rbp+0BE0h+var_C60], r10
 * 00000001409FB997: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FB99E: mov     r12, [rsi+520h]
 * 00000001409FB9A5: mov     r14, [r12]
 * 00000001409FB9A9: cmp     r14, r12
 * 00000001409FB9AC: jz      loc_1409FBA9E
 * 00000001409FB9B2: mov     rdi, [rsp+0CE0h+var_C88]
 * 00000001409FB9B7: mov     r15b, r13b
 * 00000001409FB9BA: movzx   r8d, r13b
 * 00000001409FB9BE: not     r15b
 * 00000001409FB9C1: mov     r13d, [rsp+0CE0h+var_C78]
 * 00000001409FB9C6: mov     dword ptr [rbp+0BE0h+arg_8], r8d
 * 00000001409FB9CD: mov     rdx, [rsi+6B8h]
 * 00000001409FB9D4: mov     rbx, r14
 * 00000001409FB9D7: sub     rbx, [rsi+6D0h]
 * 00000001409FB9DE: mov     rcx, rdx
 * 00000001409FB9E1: movsx   eax, byte ptr [rdx+rbx]
 * 00000001409FB9E5: test    r8d, eax
 * 00000001409FB9E8: jnz     loc_1409FBA6E
 * 00000001409FB9EE: mov     rax, [rsi+6C8h]
 * 00000001409FB9F5: mov     r8, [rbx+rax]
 * 00000001409FB9F9: xor     eax, eax
 * 00000001409FB9FB: test    r8, r8
 * 00000001409FB9FE: jz      short loc_1409FBA67
 * 00000001409FBA00: cmp     r8, rdi
 * 00000001409FBA03: jz      short loc_1409FBA67
 * 00000001409FBA05: cmp     [rsi+8F8h], eax
 * 00000001409FBA0B: jnz     short loc_1409FBA67
 * 00000001409FBA0D: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FBA12: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FBA1C: add     rax, rsi
 * 00000001409FBA1F: xor     edx, edx
 * 00000001409FBA21: mov     [rsi+900h], rax
 * 00000001409FBA28: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FBA32: add     rax, rcx
 * 00000001409FBA35: mov     [rsi+908h], rax
 * 00000001409FBA3C: movsxd  rax, dword ptr [rcx]
 * 00000001409FBA3F: mov     rcx, rsi
 * 00000001409FBA42: mov     [rsi+910h], rax
 * 00000001409FBA49: mov     eax, 1
 * 00000001409FBA4E: mov     [rsi+918h], rbx
 * 00000001409FBA55: mov     [rsi+8F8h], eax
 * 00000001409FBA5B: call    $$b8
 * 00000001409FBA60: mov     rcx, [rsi+6B8h]
 * 00000001409FBA67: mov     r8d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FBA6E: lock and [rcx+rbx], r15b
 * 00000001409FBA73: mov     r14, [r14]
 * 00000001409FBA76: mov     ecx, 1
 * 00000001409FBA7B: add     r13d, ecx
 * 00000001409FBA7E: cmp     r14, r12
 * 00000001409FBA81: jnz     loc_1409FB9CD
 * 00000001409FBA87: mov     r15, [rsp+0CE0h+var_C88]
 * 00000001409FBA8C: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FBA93: mov     [rsp+0CE0h+var_C78], r13d
 * 00000001409FBA98: mov     r13d, [rbp+0BE0h+var_C58]
 * 00000001409FBA9C: jmp     short loc_1409FBAA3
 * 00000001409FBA9E: mov     ecx, 1
 * 00000001409FBAA3: mov     rdx, [rbp+0BE0h+var_C60]
 * 00000001409FBAA7: test    rdx, rdx
 * 00000001409FBAAA: jz      short loc_1409FBAFC
 * 00000001409FBAAC: cmp     rdx, rcx
 * 00000001409FBAAF: jz      short loc_1409FBAC3
 * 00000001409FBAB1: mov     rax, [rsi+6B8h]
 * 00000001409FBAB8: mov     cl, r13b
 * 00000001409FBABB: not     cl
 * 00000001409FBABD: lock and [rdx+rax], cl
 * 00000001409FBAC1: jmp     short loc_1409FBAFC
 * 00000001409FBAC3: mov     r10, [rsi+5A0h]
 * 00000001409FBACA: mov     r9, [r10]
 * 00000001409FBACD: jmp     short loc_1409FBAF7
 * 00000001409FBACF: lea     r8, [r9-18h]
 * 00000001409FBAD3: cmp     r8, r15
 * 00000001409FBAD6: jz      short loc_1409FBAF4
 * 00000001409FBAD8: mov     rax, [rsi+738h]
 * 00000001409FBADF: mov     dl, r13b
 * 00000001409FBAE2: not     dl
 * 00000001409FBAE4: mov     r8, [r8+rax]
 * 00000001409FBAE8: mov     rax, [rsi+6B8h]
 * 00000001409FBAEF: lock and [r8+rax], dl
 * 00000001409FBAF4: mov     r9, [r9]
 * 00000001409FBAF7: cmp     r9, r10
 * 00000001409FBAFA: jnz     short loc_1409FBACF
 * 00000001409FBAFC: mov     rax, [rsi+140h]
 * 00000001409FBB03: xor     edx, edx
 * 00000001409FBB05: mov     rcx, [rbp+0BE0h+var_C50]
 * 00000001409FBB09: call    KeGuardDispatchICall
 * 00000001409FBB0E: cmp     r13b, 80h
 * 00000001409FBB12: jnz     short loc_1409FBB29
 * 00000001409FBB14: mov     rax, [rsi+130h]
 * 00000001409FBB1B: xor     edx, edx
 * 00000001409FBB1D: mov     rcx, [rsi+0A00h]
 * 00000001409FBB24: call    KeGuardDispatchICall
 * 00000001409FBB29: mov     rcx, [rsi+548h]
 * 00000001409FBB30: xor     edx, edx
 * 00000001409FBB32: mov     rax, [rsi+140h]
 * 00000001409FBB39: call    KeGuardDispatchICall
 * 00000001409FBB3E: mov     rax, [rsi+180h]
 * 00000001409FBB45: call    KeGuardDispatchICall
 * 00000001409FBB4A: mov     eax, [rsp+0CE0h+var_C78]
 * 00000001409FBB4E: jmp     loc_1409FB382
 * 00000001409FBB53: mov     eax, [rsi+830h]
 * 00000001409FBB59: test    dl, al
 * 00000001409FBB5B: jnz     loc_1409FA318
 * 00000001409FBB61: mov     r14, [rsi+5A8h]
 * 00000001409FBB68: xor     eax, eax
 * 00000001409FBB6A: mov     rbx, [rsi+548h]
 * 00000001409FBB71: mov     r13d, eax
 * 00000001409FBB74: mov     dword ptr [rbp+0BE0h+arg_8], eax
 * 00000001409FBB7A: mov     rax, [rsi+5B0h]
 * 00000001409FBB81: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FBB86: mov     rax, [rsi+178h]
 * 00000001409FBB8D: mov     [rbp+0BE0h+var_C60], r14
 * 00000001409FBB91: call    KeGuardDispatchICall
 * 00000001409FBB96: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FBBA0: jnz     short loc_1409FBBBB
 * 00000001409FBBA2: mov     ecx, [rsi+950h]
 * 00000001409FBBA8: cmp     ecx, 7
 * 00000001409FBBAB: jnb     short loc_1409FBBBB
 * 00000001409FBBAD: mov     r12d, 1
 * 00000001409FBBB3: mov     r15d, r12d
 * 00000001409FBBB6: shl     r15b, cl
 * 00000001409FBBB9: jmp     short loc_1409FBBD9
 * 00000001409FBBBB: mov     rax, [rsi+128h]
 * 00000001409FBBC2: xor     edx, edx
 * 00000001409FBBC4: mov     rcx, [rsi+0A00h]
 * 00000001409FBBCB: call    KeGuardDispatchICall
 * 00000001409FBBD0: mov     r15b, 80h
 * 00000001409FBBD3: mov     r12d, 1
 * 00000001409FBBD9: mov     rax, [rsi+138h]
 * 00000001409FBBE0: xor     edx, edx
 * 00000001409FBBE2: mov     rcx, rbx
 * 00000001409FBBE5: call    KeGuardDispatchICall
 * 00000001409FBBEA: mov     r8, [rsi+520h]
 * 00000001409FBBF1: mov     rdx, [r8]
 * 00000001409FBBF4: cmp     rdx, r8
 * 00000001409FBBF7: jz      short loc_1409FBC21
 * 00000001409FBBF9: mov     rax, [rsi+6B8h]
 * 00000001409FBC00: mov     rcx, rdx
 * 00000001409FBC03: sub     rcx, [rsi+6D0h]
 * 00000001409FBC0A: lock or [rcx+rax], r15b
 * 00000001409FBC0F: mov     rdx, [rdx]
 * 00000001409FBC12: add     r13d, r12d
 * 00000001409FBC15: cmp     rdx, r8
 * 00000001409FBC18: jnz     short loc_1409FBBF9
 * 00000001409FBC1A: mov     dword ptr [rbp+0BE0h+arg_8], r13d
 * 00000001409FBC21: mov     rax, [rsi+138h]
 * 00000001409FBC28: xor     edx, edx
 * 00000001409FBC2A: mov     rcx, r14
 * 00000001409FBC2D: call    KeGuardDispatchICall
 * 00000001409FBC32: mov     r12, [rsi+5A0h]
 * 00000001409FBC39: mov     r14, [r12]
 * 00000001409FBC3D: cmp     r14, r12
 * 00000001409FBC40: jz      loc_1409FBD19
 * 00000001409FBC46: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409FBC4B: xor     r13d, r13d
 * 00000001409FBC4E: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FBC53: mov     rcx, r14
 * 00000001409FBC56: sub     rcx, [rsi+740h]
 * 00000001409FBC5D: cmp     rcx, rax
 * 00000001409FBC60: jz      loc_1409FBCFF
 * 00000001409FBC66: mov     r8, [rsi+6B8h]
 * 00000001409FBC6D: mov     rax, [rsi+738h]
 * 00000001409FBC74: mov     rdx, r8
 * 00000001409FBC77: mov     rbx, [rcx+rax]
 * 00000001409FBC7B: test    [r8+rbx], r15b
 * 00000001409FBC7F: jnz     short loc_1409FBCF1
 * 00000001409FBC81: mov     rax, [rsi+6C0h]
 * 00000001409FBC88: mov     ecx, [rbx+rax]
 * 00000001409FBC8B: test    [rsi+6D8h], ecx
 * 00000001409FBC91: jz      short loc_1409FBCF1
 * 00000001409FBC93: cmp     [rsi+8F8h], r13d
 * 00000001409FBC9A: jnz     short loc_1409FBCF1
 * 00000001409FBC9C: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FBCA6: xor     edx, edx
 * 00000001409FBCA8: add     rax, rsi
 * 00000001409FBCAB: mov     rcx, rsi
 * 00000001409FBCAE: mov     [rsi+900h], rax
 * 00000001409FBCB5: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FBCBF: add     rax, rdi
 * 00000001409FBCC2: mov     [rsi+908h], rax
 * 00000001409FBCC9: movsxd  rax, dword ptr [rdi]
 * 00000001409FBCCC: mov     [rsi+910h], rax
 * 00000001409FBCD3: mov     eax, 1
 * 00000001409FBCD8: mov     [rsi+918h], rbx
 * 00000001409FBCDF: mov     [rsi+8F8h], eax
 * 00000001409FBCE5: call    $$b8
 * 00000001409FBCEA: mov     rdx, [rsi+6B8h]
 * 00000001409FBCF1: mov     al, r15b
 * 00000001409FBCF4: not     al
 * 00000001409FBCF6: lock and [rbx+rdx], al
 * 00000001409FBCFA: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409FBCFF: mov     r14, [r14]
 * 00000001409FBD02: cmp     r14, r12
 * 00000001409FBD05: jnz     loc_1409FBC53
 * 00000001409FBD0B: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FBD12: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FBD19: mov     rax, [rsi+140h]
 * 00000001409FBD20: xor     edx, edx
 * 00000001409FBD22: mov     rcx, [rbp+0BE0h+var_C60]
 * 00000001409FBD26: call    KeGuardDispatchICall
 * 00000001409FBD2B: cmp     r15b, 80h
 * 00000001409FBD2F: jnz     short loc_1409FBD46
 * 00000001409FBD31: mov     rax, [rsi+130h]
 * 00000001409FBD38: xor     edx, edx
 * 00000001409FBD3A: mov     rcx, [rsi+0A00h]
 * 00000001409FBD41: call    KeGuardDispatchICall
 * 00000001409FBD46: mov     rcx, [rsi+548h]
 * 00000001409FBD4D: xor     edx, edx
 * 00000001409FBD4F: mov     rax, [rsi+140h]
 * 00000001409FBD56: call    KeGuardDispatchICall
 * 00000001409FBD5B: mov     rax, [rsi+180h]
 * 00000001409FBD62: call    KeGuardDispatchICall
 * 00000001409FBD67: shl     r13d, 8
 * 00000001409FBD6B: add     [rsi+828h], r13d
 * 00000001409FBD72: jmp     loc_1409FA318
 * 00000001409FBD77: mov     r12, [rsi+530h]
 * 00000001409FBD7E: xor     eax, eax
 * 00000001409FBD80: mov     [rsp+0CE0h+var_C78], eax
 * 00000001409FBD84: mov     rax, [rsi+378h]
 * 00000001409FBD8B: call    KeGuardDispatchICall
 * 00000001409FBD90: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409FBD94: cli
 * 00000001409FBD95: mov     rcx, gs:20h
 * 00000001409FBD9E: mov     rax, [rsi+648h]
 * 00000001409FBDA5: mov     rcx, [rcx+rax]
 * 00000001409FBDA9: sti
 * 00000001409FBDAA: mov     rax, [rsi+168h]
 * 00000001409FBDB1: call    KeGuardDispatchICall
 * 00000001409FBDB6: mov     rcx, [rsi+538h]
 * 00000001409FBDBD: mov     ebx, 1
 * 00000001409FBDC2: mov     rax, [rsi+0F0h]
 * 00000001409FBDC9: mov     dl, bl
 * 00000001409FBDCB: call    KeGuardDispatchICall
 * 00000001409FBDD0: mov     rax, [rsi+610h]
 * 00000001409FBDD7: mov     rcx, [rax]
 * 00000001409FBDDA: mov     r13d, [rcx]
 * 00000001409FBDDD: lea     rdx, [rcx+10h]
 * 00000001409FBDE1: mov     [rsp+0CE0h+var_C88], rdx
 * 00000001409FBDE6: lea     rax, ds:0[r13*2]
 * 00000001409FBDEE: add     rax, r13
 * 00000001409FBDF1: lea     rax, [rdx+rax*8]
 * 00000001409FBDF5: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409FBDF9: xor     eax, eax
 * 00000001409FBDFB: mov     dword ptr [rbp+0BE0h+arg_8], eax
 * 00000001409FBE01: cmp     [rcx+0Ch], al
 * 00000001409FBE04: jz      short loc_1409FBE1A
 * 00000001409FBE06: mov     r13d, eax
 * 00000001409FBE09: mov     rax, [r12]
 * 00000001409FBE0D: jmp     short loc_1409FBE15
 * 00000001409FBE0F: mov     rax, [rax]
 * 00000001409FBE12: add     r13d, ebx
 * 00000001409FBE15: cmp     rax, r12
 * 00000001409FBE18: jnz     short loc_1409FBE0F
 * 00000001409FBE1A: mov     r8d, [rsi+810h]
 * 00000001409FBE21: mov     r15d, r13d
 * 00000001409FBE24: shl     r15d, 3
 * 00000001409FBE28: rdtsc
 * 00000001409FBE2A: shl     rdx, 20h
 * 00000001409FBE2E: mov     r9, 7010008004002001h
 * 00000001409FBE38: or      rax, rdx
 * 00000001409FBE3B: mov     rcx, rax
 * 00000001409FBE3E: ror     rax, 3
 * 00000001409FBE42: xor     rcx, rax
 * 00000001409FBE45: mov     rax, r9
 * 00000001409FBE48: mul     rcx
 * 00000001409FBE4B: mov     rbx, rdx
 * 00000001409FBE4E: mov     [rbp+0BE0h+var_348], rdx
 * 00000001409FBE55: xor     ebx, eax
 * 00000001409FBE57: and     ebx, 7FFh
 * 00000001409FBE5D: rdtsc
 * 00000001409FBE5F: shl     rdx, 20h
 * 00000001409FBE63: or      rax, rdx
 * 00000001409FBE66: mov     rcx, rax
 * 00000001409FBE69: ror     rax, 3
 * 00000001409FBE6D: xor     rcx, rax
 * 00000001409FBE70: mov     rax, r9
 * 00000001409FBE73: mul     rcx
 * 00000001409FBE76: lea     ecx, [rbx+1]
 * 00000001409FBE79: xor     rax, rdx
 * 00000001409FBE7C: mov     [rbp+0BE0h+var_340], rdx
 * 00000001409FBE83: xor     edx, edx
 * 00000001409FBE85: div     rcx
 * 00000001409FBE88: mov     rax, [rsi+0F8h]
 * 00000001409FBE8F: mov     ecx, 200h
 * 00000001409FBE94: mov     r14, rdx
 * 00000001409FBE97: lea     edx, [rbx+r15]
 * 00000001409FBE9B: call    KeGuardDispatchICall
 * 00000001409FBEA0: mov     r11, rax
 * 00000001409FBEA3: xor     eax, eax
 * 00000001409FBEA5: test    r11, r11
 * 00000001409FBEA8: jnz     short loc_1409FBEB8
 * 00000001409FBEAA: lea     ecx, [rax+1]
 * 00000001409FBEAD: add     [rsi+0A18h], ecx
 * 00000001409FBEB3: jmp     loc_1409FC00A
 * 00000001409FBEB8: mov     r10d, r14d
 * 00000001409FBEBB: mov     r9, r11
 * 00000001409FBEBE: cmp     r14d, 8
 * 00000001409FBEC2: jb      short loc_1409FBF19
 * 00000001409FBEC4: mov     r8d, r14d
 * 00000001409FBEC7: mov     esi, 1
 * 00000001409FBECC: shr     r8, 3
 * 00000001409FBED0: mov     rdi, 7010008004002001h
 * 00000001409FBEDA: rdtsc
 * 00000001409FBEDC: shl     rdx, 20h
 * 00000001409FBEE0: add     r10d, 0FFFFFFF8h
 * 00000001409FBEE4: or      rax, rdx
 * 00000001409FBEE7: mov     rcx, rax
 * 00000001409FBEEA: ror     rax, 3
 * 00000001409FBEEE: xor     rcx, rax
 * 00000001409FBEF1: mov     rax, rdi
 * 00000001409FBEF4: mul     rcx
 * 00000001409FBEF7: mov     [rbp+0BE0h+var_338], rdx
 * 00000001409FBEFE: xor     rdx, rax
 * 00000001409FBF01: mov     [r9], rdx
 * 00000001409FBF04: add     r9, 8
 * 00000001409FBF08: sub     r8, rsi
 * 00000001409FBF0B: jnz     short loc_1409FBEDA
 * 00000001409FBF0D: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FBF12: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FBF19: test    r10d, r10d
 * 00000001409FBF1C: jz      short loc_1409FBF61
 * 00000001409FBF1E: rdtsc
 * 00000001409FBF20: shl     rdx, 20h
 * 00000001409FBF24: or      rax, rdx
 * 00000001409FBF27: mov     rcx, rax
 * 00000001409FBF2A: ror     rax, 3
 * 00000001409FBF2E: xor     rcx, rax
 * 00000001409FBF31: mov     rax, 7010008004002001h
 * 00000001409FBF3B: mul     rcx
 * 00000001409FBF3E: mov     ecx, 0FFFFFFFFh
 * 00000001409FBF43: mov     [rbp+0BE0h+var_330], rdx
 * 00000001409FBF4A: xor     rdx, rax
 * 00000001409FBF4D: mov     eax, 1
 * 00000001409FBF52: mov     [r9], dl
 * 00000001409FBF55: add     r9, rax
 * 00000001409FBF58: shr     rdx, 8
 * 00000001409FBF5C: add     r10d, ecx
 * 00000001409FBF5F: jnz     short loc_1409FBF52
 * 00000001409FBF61: mov     r8d, r15d
 * 00000001409FBF64: sub     ebx, r14d
 * 00000001409FBF67: add     r8, r11
 * 00000001409FBF6A: mov     r10d, r14d
 * 00000001409FBF6D: add     r8, r10
 * 00000001409FBF70: mov     r14d, 1
 * 00000001409FBF76: mov     r15, 7010008004002001h
 * 00000001409FBF80: cmp     ebx, 8
 * 00000001409FBF83: jb      short loc_1409FBFBE
 * 00000001409FBF85: mov     r9d, ebx
 * 00000001409FBF88: shr     r9, 3
 * 00000001409FBF8C: rdtsc
 * 00000001409FBF8E: shl     rdx, 20h
 * 00000001409FBF92: add     ebx, 0FFFFFFF8h
 * 00000001409FBF95: or      rax, rdx
 * 00000001409FBF98: mov     rcx, rax
 * 00000001409FBF9B: ror     rax, 3
 * 00000001409FBF9F: xor     rcx, rax
 * 00000001409FBFA2: mov     rax, r15
 * 00000001409FBFA5: mul     rcx
 * 00000001409FBFA8: mov     [rbp+0BE0h+var_250], rdx
 * 00000001409FBFAF: xor     rdx, rax
 * 00000001409FBFB2: mov     [r8], rdx
 * 00000001409FBFB5: add     r8, 8
 * 00000001409FBFB9: sub     r9, r14
 * 00000001409FBFBC: jnz     short loc_1409FBF8C
 * 00000001409FBFBE: test    ebx, ebx
 * 00000001409FBFC0: jz      short loc_1409FBFF8
 * 00000001409FBFC2: rdtsc
 * 00000001409FBFC4: shl     rdx, 20h
 * 00000001409FBFC8: or      rax, rdx
 * 00000001409FBFCB: mov     rcx, rax
 * 00000001409FBFCE: ror     rax, 3
 * 00000001409FBFD2: xor     rcx, rax
 * 00000001409FBFD5: mov     rax, r15
 * 00000001409FBFD8: mul     rcx
 * 00000001409FBFDB: mov     [rbp+0BE0h+var_248], rdx
 * 00000001409FBFE2: xor     rdx, rax
 * 00000001409FBFE5: mov     eax, 0FFFFFFFFh
 * 00000001409FBFEA: mov     [r8], dl
 * 00000001409FBFED: add     r8, r14
 * 00000001409FBFF0: shr     rdx, 8
 * 00000001409FBFF4: add     ebx, eax
 * 00000001409FBFF6: jnz     short loc_1409FBFEA
 * 00000001409FBFF8: lea     r15, [r11+r10]
 * 00000001409FBFFC: mov     [rbp+0BE0h+var_A20], r11
 * 00000001409FC003: test    r15, r15
 * 00000001409FC006: jnz     short loc_1409FC016
 * 00000001409FC008: xor     eax, eax
 * 00000001409FC00A: mov     [rbp+0BE0h+var_A20], rax
 * 00000001409FC011: jmp     loc_1409FC152
 * 00000001409FC016: mov     rbx, [r12]
 * 00000001409FC01A: cmp     rbx, r12
 * 00000001409FC01D: jz      short loc_1409FC06C
 * 00000001409FC01F: mov     edi, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FC025: mov     rax, [rsi+750h]
 * 00000001409FC02C: mov     rcx, rbx
 * 00000001409FC02F: sub     rcx, [rsi+748h]
 * 00000001409FC036: mov     r14, [rcx+rax]
 * 00000001409FC03A: mov     rax, [rsi+2A8h]
 * 00000001409FC041: mov     rcx, r14
 * 00000001409FC044: call    KeGuardDispatchICall
 * 00000001409FC049: test    eax, eax
 * 00000001409FC04B: jnz     short loc_1409FC05A
 * 00000001409FC04D: cmp     edi, r13d
 * 00000001409FC050: jnb     short loc_1409FC05A
 * 00000001409FC052: mov     eax, edi
 * 00000001409FC054: inc     edi
 * 00000001409FC056: mov     [r15+rax*8], r14
 * 00000001409FC05A: mov     rbx, [rbx]
 * 00000001409FC05D: inc     [rsp+0CE0h+var_C78]
 * 00000001409FC061: cmp     rbx, r12
 * 00000001409FC064: jnz     short loc_1409FC025
 * 00000001409FC066: mov     dword ptr [rbp+0BE0h+arg_8], edi
 * 00000001409FC06C: mov     r14d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FC073: mov     rcx, r15
 * 00000001409FC076: mov     rax, [rsi+398h]
 * 00000001409FC07D: mov     edx, r14d
 * 00000001409FC080: call    KeGuardDispatchICall
 * 00000001409FC085: mov     r12, [rsp+0CE0h+var_C88]
 * 00000001409FC08A: mov     r13, [rbp+0BE0h+var_C60]
 * 00000001409FC08E: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FC093: mov     rbx, [r12+8]
 * 00000001409FC098: mov     rax, [rsi+2A8h]
 * 00000001409FC09F: mov     rcx, rbx
 * 00000001409FC0A2: call    KeGuardDispatchICall
 * 00000001409FC0A7: test    eax, eax
 * 00000001409FC0A9: jnz     loc_1409FC13E
 * 00000001409FC0AF: xor     eax, eax
 * 00000001409FC0B1: lea     edx, [r14-1]
 * 00000001409FC0B5: mov     r8d, eax
 * 00000001409FC0B8: test    edx, edx
 * 00000001409FC0BA: js      short loc_1409FC0E8
 * 00000001409FC0BC: lea     ecx, [rdx+r8]
 * 00000001409FC0C0: sar     ecx, 1
 * 00000001409FC0C2: movsxd  rax, ecx
 * 00000001409FC0C5: cmp     rbx, [r15+rax*8]
 * 00000001409FC0C9: jnb     short loc_1409FC0D6
 * 00000001409FC0CB: xor     eax, eax
 * 00000001409FC0CD: test    ecx, ecx
 * 00000001409FC0CF: jz      short loc_1409FC0E8
 * 00000001409FC0D1: lea     edx, [rcx-1]
 * 00000001409FC0D4: jmp     short loc_1409FC0DC
 * 00000001409FC0D6: jbe     short loc_1409FC0E1
 * 00000001409FC0D8: lea     r8d, [rcx+1]
 * 00000001409FC0DC: cmp     edx, r8d
 * 00000001409FC0DF: jge     short loc_1409FC0BC
 * 00000001409FC0E1: cmp     edx, r8d
 * 00000001409FC0E4: jge     short loc_1409FC13E
 * 00000001409FC0E6: xor     eax, eax
 * 00000001409FC0E8: cmp     [rsi+8F8h], eax
 * 00000001409FC0EE: jnz     short loc_1409FC13E
 * 00000001409FC0F0: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC0FA: xor     edx, edx
 * 00000001409FC0FC: add     rax, rsi
 * 00000001409FC0FF: mov     rcx, rsi
 * 00000001409FC102: mov     [rsi+900h], rax
 * 00000001409FC109: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FC113: add     rax, rdi
 * 00000001409FC116: mov     [rsi+908h], rax
 * 00000001409FC11D: movsxd  rax, dword ptr [rdi]
 * 00000001409FC120: mov     [rsi+910h], rax
 * 00000001409FC127: mov     eax, 1
 * 00000001409FC12C: mov     [rsi+918h], rbx
 * 00000001409FC133: mov     [rsi+8F8h], eax
 * 00000001409FC139: call    $$b8
 * 00000001409FC13E: add     r12, 18h
 * 00000001409FC142: cmp     r12, r13
 * 00000001409FC145: jb      loc_1409FC093
 * 00000001409FC14B: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FC152: mov     rcx, [rsi+538h]
 * 00000001409FC159: mov     rax, [rsi+118h]
 * 00000001409FC160: call    KeGuardDispatchICall
 * 00000001409FC165: mov     rax, [rsi+170h]
 * 00000001409FC16C: call    KeGuardDispatchICall
 * 00000001409FC171: mov     rax, [rsi+380h]
 * 00000001409FC178: mov     rcx, [rbp+0BE0h+var_C50]
 * 00000001409FC17C: call    KeGuardDispatchICall
 * 00000001409FC181: xor     eax, eax
 * 00000001409FC183: cmp     [rbp+0BE0h+var_A20], rax
 * 00000001409FC18A: jz      loc_1409FA318
 * 00000001409FC190: mov     eax, [rsp+0CE0h+var_C78]
 * 00000001409FC194: shl     eax, 9
 * 00000001409FC197: add     [rsi+828h], eax
 * 00000001409FC19D: mov     rax, [rsi+100h]
 * 00000001409FC1A4: mov     rcx, [rbp+0BE0h+var_A20]
 * 00000001409FC1AB: call    KeGuardDispatchICall
 * 00000001409FC1B0: jmp     loc_1409FA318
 * 00000001409FC1B5: mov     r12d, 40000000h
 * 00000001409FC1BB: test    [rsi+990h], r12d
 * 00000001409FC1C2: jz      short loc_1409FC220
 * 00000001409FC1C4: test    dword ptr [rsi+994h], 1000h
 * 00000001409FC1CE: jnz     short loc_1409FC220
 * 00000001409FC1D0: rdtsc
 * 00000001409FC1D2: shl     rdx, 20h
 * 00000001409FC1D6: or      rax, rdx
 * 00000001409FC1D9: mov     rcx, rax
 * 00000001409FC1DC: ror     rax, 3
 * 00000001409FC1E0: xor     rcx, rax
 * 00000001409FC1E3: mov     rax, 7010008004002001h
 * 00000001409FC1ED: mul     rcx
 * 00000001409FC1F0: mov     rcx, rdx
 * 00000001409FC1F3: mov     [rbp+0BE0h+var_1E0], rdx
 * 00000001409FC1FA: xor     rcx, rax
 * 00000001409FC1FD: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001409FC207: mul     rcx
 * 00000001409FC20A: shr     rdx, 2
 * 00000001409FC20E: lea     rax, [rdx+rdx*4]
 * 00000001409FC212: mov     edx, 1
 * 00000001409FC217: sub     rcx, rax
 * 00000001409FC21A: mov     [rsi+824h], ecx
 * 00000001409FC220: mov     ecx, [rsi+824h]
 * 00000001409FC226: xor     eax, eax
 * 00000001409FC228: test    ecx, ecx
 * 00000001409FC22A: jz      loc_1409FE739
 * 00000001409FC230: sub     ecx, 1
 * 00000001409FC233: jz      loc_1409FE5CF
 * 00000001409FC239: sub     ecx, 1
 * 00000001409FC23C: jz      loc_1409FE427
 * 00000001409FC242: sub     ecx, 1
 * 00000001409FC245: jz      loc_1409FC5A7
 * 00000001409FC24B: sub     ecx, 1
 * 00000001409FC24E: jz      loc_1409FC3FC
 * 00000001409FC254: cmp     ecx, 1
 * 00000001409FC257: jnz     loc_1409FE8BA
 * 00000001409FC25D: mov     rbx, r13
 * 00000001409FC260: mov     [rbp+0BE0h+arg_10], 0FFh
 * 00000001409FC267: mov     r13d, eax
 * 00000001409FC26A: mov     r14d, eax
 * 00000001409FC26D: mov     r15d, eax
 * 00000001409FC270: jmp     short loc_1409FC274
 * 00000001409FC272: xor     eax, eax
 * 00000001409FC274: mov     [rbp+0BE0h+var_960], rax
 * 00000001409FC27B: lea     r9, [rbp+0BE0h+var_A98]
 * 00000001409FC282: mov     rax, [rsi+430h]
 * 00000001409FC289: lea     r8, [rbp+0BE0h+arg_10]
 * 00000001409FC290: lea     rdx, [rbp+0BE0h+var_960]
 * 00000001409FC297: mov     ecx, r14d
 * 00000001409FC29A: call    KeGuardDispatchICall
 * 00000001409FC29F: test    eax, eax
 * 00000001409FC2A1: jz      loc_1409FC3DB
 * 00000001409FC2A7: mov     r12d, 1
 * 00000001409FC2AD: mov     rax, [rsi+208h]
 * 00000001409FC2B4: lea     rdx, [rbp+0BE0h+var_1D8]
 * 00000001409FC2BB: mov     rcx, [rbp+0BE0h+var_A98]
 * 00000001409FC2C2: add     r13d, r12d
 * 00000001409FC2C5: call    KeGuardDispatchICall
 * 00000001409FC2CA: test    rax, rax
 * 00000001409FC2CD: jnz     loc_1409FC3AF
 * 00000001409FC2D3: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FC2DD: jz      short loc_1409FC326
 * 00000001409FC2DF: mov     rcx, [rsi+0A80h]
 * 00000001409FC2E6: lea     edx, [rax+30h]
 * 00000001409FC2E9: lea     r8d, [rax+6]
 * 00000001409FC2ED: mov     rax, [rbx]
 * 00000001409FC2F0: add     edx, 0FFFFFFF8h
 * 00000001409FC2F3: mov     [rcx], rax
 * 00000001409FC2F6: add     rbx, 8
 * 00000001409FC2FA: add     rcx, 8
 * 00000001409FC2FE: sub     r8, r12
 * 00000001409FC301: jnz     short loc_1409FC2ED
 * 00000001409FC303: test    edx, edx
 * 00000001409FC305: jz      short loc_1409FC31F
 * 00000001409FC307: mov     esi, 0FFFFFFFFh
 * 00000001409FC30C: mov     al, [rbx]
 * 00000001409FC30E: add     rbx, r12
 * 00000001409FC311: mov     [rcx], al
 * 00000001409FC313: add     rcx, r12
 * 00000001409FC316: add     edx, esi
 * 00000001409FC318: jnz     short loc_1409FC30C
 * 00000001409FC31A: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FC31F: mov     rbx, [rsi+0A80h]
 * 00000001409FC326: mov     rax, [rbp+0BE0h+var_A98]
 * 00000001409FC32D: mov     [rbx+18h], rax
 * 00000001409FC331: mov     rax, [rsi+590h]
 * 00000001409FC338: mov     [rax], rbx
 * 00000001409FC33B: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FC342: mov     rax, [rbp+0BE0h+var_A98]
 * 00000001409FC349: mov     rcx, [rsi+590h]
 * 00000001409FC350: mov     [rcx+8], rax
 * 00000001409FC354: xor     eax, eax
 * 00000001409FC356: mov     dword ptr [rcx+14h], 1000h
 * 00000001409FC35D: cmp     [rsi+8F8h], eax
 * 00000001409FC363: jnz     short loc_1409FC3AF
 * 00000001409FC365: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC36F: xor     edx, edx
 * 00000001409FC371: add     rax, rsi
 * 00000001409FC374: mov     rcx, rsi
 * 00000001409FC377: mov     [rsi+900h], rax
 * 00000001409FC37E: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FC388: add     rax, rbx
 * 00000001409FC38B: mov     [rsi+908h], rax
 * 00000001409FC392: movsxd  rax, dword ptr [rbx]
 * 00000001409FC395: mov     [rsi+910h], rax
 * 00000001409FC39C: mov     [rsi+918h], r15
 * 00000001409FC3A3: mov     [rsi+8F8h], r12d
 * 00000001409FC3AA: call    $$b8
 * 00000001409FC3AF: mov     rax, [rsi+430h]
 * 00000001409FC3B6: lea     r9, [rbp+0BE0h+var_A98]
 * 00000001409FC3BD: lea     r8, [rbp+0BE0h+arg_10]
 * 00000001409FC3C4: mov     ecx, r14d
 * 00000001409FC3C7: lea     rdx, [rbp+0BE0h+var_960]
 * 00000001409FC3CE: call    KeGuardDispatchICall
 * 00000001409FC3D3: test    eax, eax
 * 00000001409FC3D5: jnz     loc_1409FC2AD
 * 00000001409FC3DB: mov     edx, 1
 * 00000001409FC3E0: add     r14d, edx
 * 00000001409FC3E3: add     r15, rdx
 * 00000001409FC3E6: cmp     r14d, 3
 * 00000001409FC3EA: jb      loc_1409FC272
 * 00000001409FC3F0: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FC3F7: jmp     loc_1409FE885
 * 00000001409FC3FC: mov     r13d, eax
 * 00000001409FC3FF: mov     [rbp+0BE0h+var_BE0], eax
 * 00000001409FC402: mov     rax, [rsi+318h]
 * 00000001409FC409: xor     ecx, ecx
 * 00000001409FC40B: call    KeGuardDispatchICall
 * 00000001409FC410: mov     r15, rax
 * 00000001409FC413: xor     eax, eax
 * 00000001409FC415: test    r15, r15
 * 00000001409FC418: jz      loc_1409FE880
 * 00000001409FC41E: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FC423: mov     [rbp+0BE0h+var_968], rax
 * 00000001409FC42A: lea     rdx, [rbp+0BE0h+var_968]
 * 00000001409FC431: mov     rax, [rsi+310h]
 * 00000001409FC438: mov     rcx, r15
 * 00000001409FC43B: mov     rbx, rdi
 * 00000001409FC43E: mov     r12d, 1
 * 00000001409FC444: call    KeGuardDispatchICall
 * 00000001409FC449: mov     r14, rax
 * 00000001409FC44C: test    rax, rax
 * 00000001409FC44F: jz      loc_1409FC57E
 * 00000001409FC455: lea     edi, [r12+5]
 * 00000001409FC45A: xor     r13d, r13d
 * 00000001409FC45D: mov     rax, [rsi+208h]
 * 00000001409FC464: lea     rdx, [rbp+0BE0h+var_1D0]
 * 00000001409FC46B: mov     rcx, r14
 * 00000001409FC46E: inc     r12d
 * 00000001409FC471: call    KeGuardDispatchICall
 * 00000001409FC476: test    rax, rax
 * 00000001409FC479: jnz     loc_1409FC553
 * 00000001409FC47F: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FC489: lea     r9d, [rax+1]
 * 00000001409FC48D: jz      short loc_1409FC4D5
 * 00000001409FC48F: mov     rcx, [rsi+0A80h]
 * 00000001409FC496: lea     edx, [rax+30h]
 * 00000001409FC499: mov     r8, rdi
 * 00000001409FC49C: mov     rax, [rbx]
 * 00000001409FC49F: add     edx, 0FFFFFFF8h
 * 00000001409FC4A2: mov     [rcx], rax
 * 00000001409FC4A5: add     rbx, 8
 * 00000001409FC4A9: add     rcx, 8
 * 00000001409FC4AD: sub     r8, r9
 * 00000001409FC4B0: jnz     short loc_1409FC49C
 * 00000001409FC4B2: test    edx, edx
 * 00000001409FC4B4: jz      short loc_1409FC4CE
 * 00000001409FC4B6: mov     r13d, 0FFFFFFFFh
 * 00000001409FC4BC: mov     al, [rbx]
 * 00000001409FC4BE: add     rbx, r9
 * 00000001409FC4C1: mov     [rcx], al
 * 00000001409FC4C3: add     rcx, r9
 * 00000001409FC4C6: add     edx, r13d
 * 00000001409FC4C9: jnz     short loc_1409FC4BC
 * 00000001409FC4CB: xor     r13d, r13d
 * 00000001409FC4CE: mov     rbx, [rsi+0A80h]
 * 00000001409FC4D5: mov     [rbx+18h], r14
 * 00000001409FC4D9: mov     [rbx+20h], r15
 * 00000001409FC4DD: mov     rax, [rsi+590h]
 * 00000001409FC4E4: mov     [rax], rbx
 * 00000001409FC4E7: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FC4EE: mov     rax, [rsi+590h]
 * 00000001409FC4F5: mov     [rax+8], r14
 * 00000001409FC4F9: mov     dword ptr [rax+14h], 1000h
 * 00000001409FC500: cmp     [rsi+8F8h], r13d
 * 00000001409FC507: jnz     short loc_1409FC553
 * 00000001409FC509: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC513: xor     edx, edx
 * 00000001409FC515: add     rax, rsi
 * 00000001409FC518: mov     rcx, rsi
 * 00000001409FC51B: mov     [rsi+900h], rax
 * 00000001409FC522: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FC52C: add     rax, rbx
 * 00000001409FC52F: mov     [rsi+908h], rax
 * 00000001409FC536: movsxd  rax, dword ptr [rbx]
 * 00000001409FC539: mov     [rsi+910h], rax
 * 00000001409FC540: mov     [rsi+918h], rdi
 * 00000001409FC547: mov     [rsi+8F8h], r9d
 * 00000001409FC54E: call    $$b8
 * 00000001409FC553: mov     rax, [rsi+310h]
 * 00000001409FC55A: lea     rdx, [rbp+0BE0h+var_968]
 * 00000001409FC561: mov     rcx, r15
 * 00000001409FC564: call    KeGuardDispatchICall
 * 00000001409FC569: mov     r14, rax
 * 00000001409FC56C: test    rax, rax
 * 00000001409FC56F: jnz     loc_1409FC45D
 * 00000001409FC575: mov     r13d, [rbp+0BE0h+var_BE0]
 * 00000001409FC579: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FC57E: mov     rax, [rsi+318h]
 * 00000001409FC585: add     r13d, r12d
 * 00000001409FC588: mov     rcx, r15
 * 00000001409FC58B: mov     [rbp+0BE0h+var_BE0], r13d
 * 00000001409FC58F: call    KeGuardDispatchICall
 * 00000001409FC594: mov     r15, rax
 * 00000001409FC597: xor     eax, eax
 * 00000001409FC599: test    r15, r15
 * 00000001409FC59C: jnz     loc_1409FC423
 * 00000001409FC5A2: jmp     loc_1409FE879
 * 00000001409FC5A7: mov     r13d, eax
 * 00000001409FC5AA: mov     rax, [rsi+4F0h]
 * 00000001409FC5B1: mov     rbx, rsi
 * 00000001409FC5B4: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409FC5BB: mov     r14, [rax]
 * 00000001409FC5BE: mov     [rbp+0BE0h+var_C08], r14
 * 00000001409FC5C2: test    [rsi+990h], r12d
 * 00000001409FC5C9: jz      short loc_1409FC5D2
 * 00000001409FC5CB: xor     eax, eax
 * 00000001409FC5CD: jmp     loc_1409FE885
 * 00000001409FC5D2: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FC5D7: mov     rax, [rcx+28h]
 * 00000001409FC5DB: test    rax, rax
 * 00000001409FC5DE: jz      loc_1409FC67F
 * 00000001409FC5E4: mov     edx, 1
 * 00000001409FC5E9: mov     r13d, edx
 * 00000001409FC5EC: cmp     r14, rax
 * 00000001409FC5EF: jz      loc_1409FE885
 * 00000001409FC5F5: mov     [rcx+18h], r14
 * 00000001409FC5F9: mov     rax, [rsi+590h]
 * 00000001409FC600: mov     [rax], rcx
 * 00000001409FC603: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FC60A: mov     rax, [rsi+590h]
 * 00000001409FC611: mov     [rax+8], r14
 * 00000001409FC615: mov     dword ptr [rax+14h], 1000h
 * 00000001409FC61C: xor     eax, eax
 * 00000001409FC61E: cmp     [rsi+8F8h], eax
 * 00000001409FC624: jnz     loc_1409FE885
 * 00000001409FC62A: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC634: add     rax, rsi
 * 00000001409FC637: mov     [rsi+900h], rax
 * 00000001409FC63E: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FC648: add     rax, rcx
 * 00000001409FC64B: mov     [rsi+908h], rax
 * 00000001409FC652: movsxd  rax, dword ptr [rcx]
 * 00000001409FC655: mov     rcx, rsi
 * 00000001409FC658: mov     [rsi+910h], rax
 * 00000001409FC65F: mov     qword ptr [rsi+918h], 5
 * 00000001409FC66A: mov     [rsi+8F8h], edx
 * 00000001409FC670: xor     edx, edx
 * 00000001409FC672: call    $$b8
 * 00000001409FC677: mov     rdx, r13
 * 00000001409FC67A: jmp     loc_1409FE885
 * 00000001409FC67F: test    r14, r14
 * 00000001409FC682: jz      loc_1409FE880
 * 00000001409FC688: mov     rax, [rsi+200h]
 * 00000001409FC68F: lea     rdx, [rbp+0BE0h+var_228]
 * 00000001409FC696: mov     r15d, 1
 * 00000001409FC69C: mov     [rbp+0BE0h+var_B98], rsi
 * 00000001409FC6A0: mov     rcx, r14
 * 00000001409FC6A3: mov     [rbp+0BE0h+var_BE0], r15d
 * 00000001409FC6A7: call    KeGuardDispatchICall
 * 00000001409FC6AC: mov     r13, [rbp+0BE0h+var_220]
 * 00000001409FC6B3: mov     r12d, [rbp+0BE0h+var_214]
 * 00000001409FC6BA: mov     [rbp+0BE0h+var_C48], rax
 * 00000001409FC6BE: xor     eax, eax
 * 00000001409FC6C0: mov     dword ptr [rbp+0BE0h+arg_8], r12d
 * 00000001409FC6C7: mov     [rbp+0BE0h+var_BE4], r12d
 * 00000001409FC6CB: mov     [rsp+0CE0h+BugCheckParameter2], r13
 * 00000001409FC6D0: test    r13, r13
 * 00000001409FC6D3: jnz     short loc_1409FC6DF
 * 00000001409FC6D5: mov     ecx, 0C000007Bh
 * 00000001409FC6DA: jmp     loc_1409FE3EB
 * 00000001409FC6DF: mov     [rbp+0BE0h+var_AD8], rax
 * 00000001409FC6E6: mov     ecx, 4
 * 00000001409FC6EB: lea     rax, [rbp+0BE0h+var_AD0]
 * 00000001409FC6F2: xor     edx, edx
 * 00000001409FC6F4: mov     r8d, 0FFFFFFFFh
 * 00000001409FC6FA: mov     [rax], dl
 * 00000001409FC6FC: add     rax, r15
 * 00000001409FC6FF: add     ecx, r8d
 * 00000001409FC702: jnz     short loc_1409FC6FA
 * 00000001409FC704: xor     eax, eax
 * 00000001409FC706: mov     r15d, eax
 * 00000001409FC709: cmp     [rsi+80Ch], eax
 * 00000001409FC70F: jbe     loc_1409FC90E
 * 00000001409FC715: mov     edx, [rbp+0BE0h+var_AD0]
 * 00000001409FC71B: mov     r9d, dword ptr [rbp+0BE0h+var_AD8+4]
 * 00000001409FC722: mov     r10d, dword ptr [rbp+0BE0h+var_AD8]
 * 00000001409FC729: mov     rax, [rsi+0A78h]
 * 00000001409FC730: mov     r14, rsi
 * 00000001409FC733: test    rax, rax
 * 00000001409FC736: cmovnz  r14, rax
 * 00000001409FC73A: xor     eax, eax
 * 00000001409FC73C: mov     [rsp+0CE0h+var_C88], r14
 * 00000001409FC741: mov     r11d, eax
 * 00000001409FC744: mov     r8d, [r14+808h]
 * 00000001409FC74B: add     r8, r14
 * 00000001409FC74E: test    r10d, r10d
 * 00000001409FC751: jz      short loc_1409FC761
 * 00000001409FC753: cmp     r9d, r15d
 * 00000001409FC756: ja      short loc_1409FC761
 * 00000001409FC758: mov     r8d, edx
 * 00000001409FC75B: mov     r11d, r9d
 * 00000001409FC75E: add     r8, r14
 * 00000001409FC761: cmp     r11d, r15d
 * 00000001409FC764: jz      loc_1409FC89E
 * 00000001409FC76A: mov     edi, 2
 * 00000001409FC76F: mov     eax, r15d
 * 00000001409FC772: sub     eax, r11d
 * 00000001409FC775: mov     r14, 0AAAAAAAAAAAAAAABh
 * 00000001409FC77F: mov     r9d, eax
 * 00000001409FC782: add     r11d, eax
 * 00000001409FC785: lea     r12d, [rdi+0Ah]
 * 00000001409FC789: mov     ecx, [r8]
 * 00000001409FC78C: cmp     ecx, r12d
 * 00000001409FC78F: jg      short loc_1409FC7D4
 * 00000001409FC791: jz      short loc_1409FC7F1
 * 00000001409FC793: sub     ecx, 1
 * 00000001409FC796: jz      short loc_1409FC7F1
 * 00000001409FC798: sub     ecx, 6
 * 00000001409FC79B: jz      short loc_1409FC7C3
 * 00000001409FC79D: sub     ecx, 1
 * 00000001409FC7A0: jz      short loc_1409FC7B9
 * 00000001409FC7A2: cmp     ecx, edi
 * 00000001409FC7A4: jnz     loc_1409FC830
 * 00000001409FC7AA: mov     eax, [r8+1Ch]
 * 00000001409FC7AE: add     eax, 3
 * 00000001409FC7B1: shl     eax, 4
 * 00000001409FC7B4: jmp     loc_1409FC86E
 * 00000001409FC7B9: movzx   eax, word ptr [r8+20h]
 * 00000001409FC7BE: jmp     loc_1409FC868
 * 00000001409FC7C3: mov     eax, [r8+18h]
 * 00000001409FC7C7: add     eax, edi
 * 00000001409FC7C9: lea     eax, [rax+rax*2]
 * 00000001409FC7CC: shl     eax, 3
 * 00000001409FC7CF: jmp     loc_1409FC86E
 * 00000001409FC7D4: cmp     ecx, 1Ch
 * 00000001409FC7D7: jz      loc_1409FC863
 * 00000001409FC7DD: cmp     ecx, 1Eh
 * 00000001409FC7E0: jz      short loc_1409FC837
 * 00000001409FC7E2: cmp     ecx, 20h ; ' '
 * 00000001409FC7E5: jle     short loc_1409FC830
 * 00000001409FC7E7: cmp     ecx, 22h ; '"'
 * 00000001409FC7EA: jle     short loc_1409FC808
 * 00000001409FC7EC: cmp     ecx, 2Bh ; '+'
 * 00000001409FC7EF: jnz     short loc_1409FC830
 * 00000001409FC7F1: mov     ecx, [r8+10h]
 * 00000001409FC7F5: mov     rax, r14
 * 00000001409FC7F8: mul     rcx
 * 00000001409FC7FB: shr     rdx, 3
 * 00000001409FC7FF: lea     eax, ds:30h[rdx*4]
 * 00000001409FC806: jmp     short loc_1409FC86E
 * 00000001409FC808: mov     ecx, [r8+20h]
 * 00000001409FC80C: mov     edx, [r8+28h]
 * 00000001409FC810: and     ecx, 0FFFh
 * 00000001409FC816: add     rdx, 0FFFh
 * 00000001409FC81D: add     rdx, rcx
 * 00000001409FC820: shr     rdx, 0Ch
 * 00000001409FC824: lea     eax, [rdx+rdx*4]
 * 00000001409FC827: lea     eax, ds:30h[rax*4]
 * 00000001409FC82E: jmp     short loc_1409FC86E
 * 00000001409FC830: mov     eax, 30h ; '0'
 * 00000001409FC835: jmp     short loc_1409FC86E
 * 00000001409FC837: mov     eax, [r8+24h]
 * 00000001409FC83B: lea     ecx, [rax-1]
 * 00000001409FC83E: neg     eax
 * 00000001409FC840: sbb     eax, eax
 * 00000001409FC842: and     ecx, eax
 * 00000001409FC844: mov     rax, r14
 * 00000001409FC847: mul     rcx
 * 00000001409FC84A: movzx   eax, word ptr [r8+28h]
 * 00000001409FC84F: shr     rdx, 3
 * 00000001409FC853: add     edx, 7
 * 00000001409FC856: and     edx, 0FFFFFFF8h
 * 00000001409FC859: add     eax, edi
 * 00000001409FC85B: lea     eax, [rax+rax*2]
 * 00000001409FC85E: lea     eax, [rdx+rax*8]
 * 00000001409FC861: jmp     short loc_1409FC86E
 * 00000001409FC863: movzx   eax, word ptr [r8+28h]
 * 00000001409FC868: add     eax, 37h ; '7'
 * 00000001409FC86B: and     eax, 0FFFFFFF8h
 * 00000001409FC86E: add     r8, rax
 * 00000001409FC871: mov     eax, 1
 * 00000001409FC876: sub     r9, rax
 * 00000001409FC879: jnz     loc_1409FC789
 * 00000001409FC87F: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FC884: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FC88B: mov     r14, [rsp+0CE0h+var_C88]
 * 00000001409FC890: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FC897: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FC89C: jmp     short loc_1409FC8A3
 * 00000001409FC89E: mov     eax, 1
 * 00000001409FC8A3: mov     edx, r8d
 * 00000001409FC8A6: mov     dword ptr [rbp+0BE0h+var_AD8], eax
 * 00000001409FC8AC: sub     edx, r14d
 * 00000001409FC8AF: mov     dword ptr [rbp+0BE0h+var_AD8+4], r11d
 * 00000001409FC8B6: mov     [rbp+0BE0h+var_AD0], edx
 * 00000001409FC8BC: mov     r10d, eax
 * 00000001409FC8BF: movsxd  rcx, dword ptr [r8]
 * 00000001409FC8C2: mov     r9d, r11d
 * 00000001409FC8C5: cmp     ecx, 2Bh ; '+'
 * 00000001409FC8C8: ja      short loc_1409FC8EA
 * 00000001409FC8CA: mov     r11, 80000001002h
 * 00000001409FC8D4: bt      r11, rcx
 * 00000001409FC8D8: jnb     short loc_1409FC8EA
 * 00000001409FC8DA: mov     rax, [rbp+0BE0h+var_C48]
 * 00000001409FC8DE: cmp     [r8+8], rax
 * 00000001409FC8E2: jnz     short loc_1409FC8EA
 * 00000001409FC8E4: cmp     [r8+10h], r12d
 * 00000001409FC8E8: jz      short loc_1409FC911
 * 00000001409FC8EA: lea     eax, [rcx-21h]
 * 00000001409FC8ED: mov     ecx, 1
 * 00000001409FC8F2: cmp     eax, ecx
 * 00000001409FC8F4: ja      short loc_1409FC8FC
 * 00000001409FC8F6: cmp     [r8+20h], r13
 * 00000001409FC8FA: jz      short loc_1409FC911
 * 00000001409FC8FC: add     r15d, ecx
 * 00000001409FC8FF: cmp     r15d, [rsi+80Ch]
 * 00000001409FC906: jb      loc_1409FC729
 * 00000001409FC90C: xor     eax, eax
 * 00000001409FC90E: mov     r8, rax
 * 00000001409FC911: mov     r14, [rbp+0BE0h+var_C08]
 * 00000001409FC915: mov     [rbp+0BE0h+var_B38], r8
 * 00000001409FC91C: test    r8, r8
 * 00000001409FC91F: jz      short loc_1409FC92B
 * 00000001409FC921: mov     ecx, 0C000010Eh
 * 00000001409FC926: jmp     loc_1409FE3EB
 * 00000001409FC92B: mov     rax, [rsi+2A8h]
 * 00000001409FC932: mov     rcx, r14
 * 00000001409FC935: call    KeGuardDispatchICall
 * 00000001409FC93A: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FC944: mov     r15d, eax
 * 00000001409FC947: mov     dword ptr [rbp+0BE0h+var_BF8], eax
 * 00000001409FC94A: mov     eax, [rbp+0BE0h+var_BE4]
 * 00000001409FC94D: mov     [rbp+0BE0h+var_C58], eax
 * 00000001409FC950: jz      short loc_1409FC973
 * 00000001409FC952: mov     r8d, 9
 * 00000001409FC958: lea     rcx, [rbp+0BE0h+var_B50]
 * 00000001409FC95F: mov     rdx, r13
 * 00000001409FC962: call    sub_140A1CFE4
 * 00000001409FC967: mov     rbx, [rbp+0BE0h+var_B50]
 * 00000001409FC96E: jmp     loc_1409FE3E9
 * 00000001409FC973: xor     eax, eax
 * 00000001409FC975: lea     r9, [rbp+0BE0h+var_BE4]
 * 00000001409FC979: xor     r8d, r8d
 * 00000001409FC97C: mov     [rbp+0BE0h+var_7B0], rax
 * 00000001409FC983: mov     [rbp+0BE0h+var_9B8], eax
 * 00000001409FC989: mov     rcx, r13
 * 00000001409FC98C: mov     rax, [rsi+1F0h]
 * 00000001409FC993: lea     r12d, [r8+1]
 * 00000001409FC997: mov     dl, r12b
 * 00000001409FC99A: call    KeGuardDispatchICall
 * 00000001409FC99F: mov     rdx, rax
 * 00000001409FC9A2: lea     r8d, [r12+0Bh]
 * 00000001409FC9A7: neg     rax
 * 00000001409FC9AA: mov     [rbp+0BE0h+var_7C8], rdx
 * 00000001409FC9B1: lea     r9, [rbp+0BE0h+var_BE4]
 * 00000001409FC9B5: mov     dl, r12b
 * 00000001409FC9B8: sbb     ecx, ecx
 * 00000001409FC9BA: and     ecx, [rbp+0BE0h+var_BE4]
 * 00000001409FC9BD: mov     [rbp+0BE0h+var_BE4], ecx
 * 00000001409FC9C0: mov     rax, [rsi+1F0h]
 * 00000001409FC9C7: mov     [rbp+0BE0h+var_9C4], ecx
 * 00000001409FC9CD: mov     rcx, r13
 * 00000001409FC9D0: call    KeGuardDispatchICall
 * 00000001409FC9D5: mov     rdx, rax
 * 00000001409FC9D8: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409FC9DC: neg     rax
 * 00000001409FC9DF: mov     [rbp+0BE0h+var_7C0], rdx
 * 00000001409FC9E6: lea     r8d, [r12+9]
 * 00000001409FC9EB: mov     dl, r12b
 * 00000001409FC9EE: sbb     ecx, ecx
 * 00000001409FC9F0: lea     r9, [rbp+0BE0h+var_BE4]
 * 00000001409FC9F4: and     ecx, [rbp+0BE0h+var_BE4]
 * 00000001409FC9F7: mov     [rbp+0BE0h+var_BE4], ecx
 * 00000001409FC9FA: mov     rax, [rsi+1F0h]
 * 00000001409FCA01: mov     [rsp+0CE0h+var_C78], ecx
 * 00000001409FCA05: mov     [rbp+0BE0h+var_9C0], ecx
 * 00000001409FCA0B: mov     rcx, r13
 * 00000001409FCA0E: call    KeGuardDispatchICall
 * 00000001409FCA13: mov     rdx, rax
 * 00000001409FCA16: neg     rax
 * 00000001409FCA19: mov     [rbp+0BE0h+var_7B8], rdx
 * 00000001409FCA20: sbb     ecx, ecx
 * 00000001409FCA22: and     ecx, [rbp+0BE0h+var_BE4]
 * 00000001409FCA25: mov     [rbp+0BE0h+var_BE4], ecx
 * 00000001409FCA28: mov     rax, [rsi+1F8h]
 * 00000001409FCA2F: mov     [rbp+0BE0h+var_9BC], ecx
 * 00000001409FCA35: mov     rcx, r13
 * 00000001409FCA38: call    KeGuardDispatchICall
 * 00000001409FCA3D: mov     r14, rax
 * 00000001409FCA40: test    rax, rax
 * 00000001409FCA43: jnz     short loc_1409FCA53
 * 00000001409FCA45: mov     ecx, 0C000007Bh
 * 00000001409FCA4A: mov     r14, [rbp+0BE0h+var_C08]
 * 00000001409FCA4E: jmp     loc_1409FE3EB
 * 00000001409FCA53: mov     rax, [rsi+498h]
 * 00000001409FCA5A: lea     rdx, [rbp+0BE0h+var_888]
 * 00000001409FCA61: mov     rcx, r13
 * 00000001409FCA64: call    KeGuardDispatchICall
 * 00000001409FCA69: mov     r8d, [rsi+924h]
 * 00000001409FCA70: mov     [rbp+0BE0h+var_7A8], rax
 * 00000001409FCA77: mov     eax, [rbp+0BE0h+var_888]
 * 00000001409FCA7D: mov     [rbp+0BE0h+var_9B4], eax
 * 00000001409FCA83: mov     eax, [r14+54h]
 * 00000001409FCA87: mov     [rbp+0BE0h+var_9C8], eax
 * 00000001409FCA8D: mov     eax, r15d
 * 00000001409FCA90: mov     r15d, [rsi+7E4h]
 * 00000001409FCA97: neg     eax
 * 00000001409FCA99: mov     [rbp+0BE0h+var_7D0], r13
 * 00000001409FCAA0: sbb     r9d, r9d
 * 00000001409FCAA3: and     r9d, 0Bh
 * 00000001409FCAA7: lea     eax, [r15+120h]
 * 00000001409FCAAE: mov     dword ptr [rbp+0BE0h+arg_8], r9d
 * 00000001409FCAB5: cmp     eax, [rsi+0A1Ch]
 * 00000001409FCABB: jbe     loc_1409FCBC8
 * 00000001409FCAC1: mov     edx, eax
 * 00000001409FCAC3: mov     rcx, rsi
 * 00000001409FCAC6: call    sub_140A0FB30
 * 00000001409FCACB: mov     r14, rax
 * 00000001409FCACE: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FCAD3: xor     eax, eax
 * 00000001409FCAD5: test    r14, r14
 * 00000001409FCAD8: jz      loc_1409FCBBA
 * 00000001409FCADE: mov     ecx, [rsi+990h]
 * 00000001409FCAE4: test    cl, 4
 * 00000001409FCAE7: jnz     loc_1409FCBA9
 * 00000001409FCAED: mov     eax, [rsi+7E4h]
 * 00000001409FCAF3: and     ecx, 20000000h
 * 00000001409FCAF9: mov     r9, [rsi+7C8h]
 * 00000001409FCB00: neg     ecx
 * 00000001409FCB02: mov     rcx, rsi
 * 00000001409FCB05: sbb     r8d, r8d
 * 00000001409FCB08: and     r8d, [rsi+924h]
 * 00000001409FCB0F: cmp     eax, 8
 * 00000001409FCB12: jb      short loc_1409FCB35
 * 00000001409FCB14: mov     edx, eax
 * 00000001409FCB16: shr     rdx, 3
 * 00000001409FCB1A: xor     r12d, r12d
 * 00000001409FCB1D: lea     r10d, [r12+1]
 * 00000001409FCB22: mov     [rcx], r12
 * 00000001409FCB25: add     eax, 0FFFFFFF8h
 * 00000001409FCB28: add     rcx, 8
 * 00000001409FCB2C: sub     rdx, r10
 * 00000001409FCB2F: jnz     short loc_1409FCB22
 * 00000001409FCB31: lea     r12d, [rdx+1]
 * 00000001409FCB35: xor     edx, edx
 * 00000001409FCB37: test    eax, eax
 * 00000001409FCB39: jz      short loc_1409FCB4B
 * 00000001409FCB3B: mov     r10d, 0FFFFFFFFh
 * 00000001409FCB41: mov     [rcx], dl
 * 00000001409FCB43: add     rcx, r12
 * 00000001409FCB46: add     eax, r10d
 * 00000001409FCB49: jnz     short loc_1409FCB41
 * 00000001409FCB4B: mov     ebx, [r14+924h]
 * 00000001409FCB52: mov     [r14+924h], r8d
 * 00000001409FCB59: cmp     r8d, 3
 * 00000001409FCB5D: jz      short loc_1409FCB93
 * 00000001409FCB5F: test    dword ptr [r14+990h], 10000000h
 * 00000001409FCB6A: mov     rcx, rdx
 * 00000001409FCB6D: cmovz   ecx, r8d
 * 00000001409FCB71: test    ecx, ecx
 * 00000001409FCB73: jz      short loc_1409FCB8A
 * 00000001409FCB75: mov     rax, [r14+228h]
 * 00000001409FCB7C: lea     rcx, [r9-8]
 * 00000001409FCB80: mov     rdx, [rcx]
 * 00000001409FCB83: call    KeGuardDispatchICall
 * 00000001409FCB88: jmp     short loc_1409FCBA2
 * 00000001409FCB8A: mov     rax, [r14+100h]
 * 00000001409FCB91: jmp     short loc_1409FCB9A
 * 00000001409FCB93: mov     rax, [r14+368h]
 * 00000001409FCB9A: mov     rcx, r9
 * 00000001409FCB9D: call    KeGuardDispatchICall
 * 00000001409FCBA2: mov     [r14+924h], ebx
 * 00000001409FCBA9: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 00000001409FCBB1: mov     r9d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FCBB8: jmp     short loc_1409FCBD6
 * 00000001409FCBBA: mov     [rbp+0BE0h+var_B98], rax
 * 00000001409FCBBE: mov     ecx, 0C000009Ah
 * 00000001409FCBC3: jmp     loc_1409FCA4A
 * 00000001409FCBC8: mov     r14, rsi
 * 00000001409FCBCB: mov     [rsp+0CE0h+var_C88], rsi
 * 00000001409FCBD0: mov     [rsi+7E4h], eax
 * 00000001409FCBD6: mov     eax, 6
 * 00000001409FCBDB: lea     r12, [r14+r15]
 * 00000001409FCBDF: add     [r14+80Ch], eax
 * 00000001409FCBE6: lea     rdi, [rbp+0BE0h+var_7D0]
 * 00000001409FCBED: mov     [rbp+0BE0h+var_958], r12
 * 00000001409FCBF4: lea     rsi, [rbp+0BE0h+var_9C8]
 * 00000001409FCBFB: mov     [rbp+0BE0h+var_B38], r12
 * 00000001409FCC02: xor     r10d, r10d
 * 00000001409FCC05: lea     r11d, [rax-5]
 * 00000001409FCC09: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409FCC0D: mov     r13d, [rsi]
 * 00000001409FCC10: mov     rdx, rax
 * 00000001409FCC13: mov     r15, [rdi]
 * 00000001409FCC16: mov     ecx, 30h ; '0'
 * 00000001409FCC1B: mov     [rbp+0BE0h+var_BF0], r13d
 * 00000001409FCC1F: mov     rax, r12
 * 00000001409FCC22: mov     [rax], r10
 * 00000001409FCC25: add     ecx, 0FFFFFFF8h
 * 00000001409FCC28: add     rax, 8
 * 00000001409FCC2C: sub     rdx, r11
 * 00000001409FCC2F: jnz     short loc_1409FCC22
 * 00000001409FCC31: test    ecx, ecx
 * 00000001409FCC33: jz      short loc_1409FCC44
 * 00000001409FCC35: mov     edx, 0FFFFFFFFh
 * 00000001409FCC3A: mov     [rax], r10b
 * 00000001409FCC3D: add     rax, r11
 * 00000001409FCC40: add     ecx, edx
 * 00000001409FCC42: jnz     short loc_1409FCC3A
 * 00000001409FCC44: mov     [r12], r9d
 * 00000001409FCC48: lea     rcx, [r15+r13]
 * 00000001409FCC4C: mov     [r12+8], r15
 * 00000001409FCC51: mov     r10, r15
 * 00000001409FCC54: mov     [r12+10h], r13d
 * 00000001409FCC59: mov     rax, r15
 * 00000001409FCC5C: add     [r14+828h], r13d
 * 00000001409FCC63: mov     ebx, [r14+814h]
 * 00000001409FCC6A: mov     r11, [r14+818h]
 * 00000001409FCC71: cmp     r15, rcx
 * 00000001409FCC74: jnb     short loc_1409FCC86
 * 00000001409FCC76: mov     edx, 40h ; '@'
 * 00000001409FCC7B: prefetchnta byte ptr [rax]
 * 00000001409FCC7E: add     rax, rdx
 * 00000001409FCC81: cmp     rax, rcx
 * 00000001409FCC84: jb      short loc_1409FCC7B
 * 00000001409FCC86: mov     r9d, r13d
 * 00000001409FCC89: mov     r8, r11
 * 00000001409FCC8C: shr     r9d, 7
 * 00000001409FCC90: test    r9d, r9d
 * 00000001409FCC93: jz      short loc_1409FCD06
 * 00000001409FCC95: mov     r13, 7010008004002001h
 * 00000001409FCC9F: mov     edx, 8
 * 00000001409FCCA4: lea     r14d, [rdx-7]
 * 00000001409FCCA8: mov     rax, [r10]
 * 00000001409FCCAB: mov     ecx, ebx
 * 00000001409FCCAD: xor     rax, r8
 * 00000001409FCCB0: mov     r8, [r10+8]
 * 00000001409FCCB4: rol     rax, cl
 * 00000001409FCCB7: add     r10, 10h
 * 00000001409FCCBB: xor     r8, rax
 * 00000001409FCCBE: rol     r8, cl
 * 00000001409FCCC1: sub     rdx, r14
 * 00000001409FCCC4: jnz     short loc_1409FCCA8
 * 00000001409FCCC6: mov     rcx, r10
 * 00000001409FCCC9: sub     rcx, r15
 * 00000001409FCCCC: xor     rcx, r11
 * 00000001409FCCCF: mov     rax, rcx
 * 00000001409FCCD2: rol     rax, 11h
 * 00000001409FCCD6: xor     rcx, rax
 * 00000001409FCCD9: mov     rax, r13
 * 00000001409FCCDC: mul     rcx
 * 00000001409FCCDF: xor     ebx, edx
 * 00000001409FCCE1: mov     [rbp+0BE0h+var_1C8], rdx
 * 00000001409FCCE8: xor     ebx, eax
 * 00000001409FCCEA: mov     rax, r14
 * 00000001409FCCED: and     ebx, 3Fh
 * 00000001409FCCF0: cmovz   ebx, eax
 * 00000001409FCCF3: mov     eax, 0FFFFFFFFh
 * 00000001409FCCF8: add     r9d, eax
 * 00000001409FCCFB: jnz     short loc_1409FCC9F
 * 00000001409FCCFD: mov     r14, [rsp+0CE0h+var_C88]
 * 00000001409FCD02: mov     r13d, [rbp+0BE0h+var_BF0]
 * 00000001409FCD06: mov     edx, r13d
 * 00000001409FCD09: mov     r11d, 1
 * 00000001409FCD0F: and     edx, 7Fh
 * 00000001409FCD12: cmp     edx, 8
 * 00000001409FCD15: jb      short loc_1409FCD32
 * 00000001409FCD17: mov     r9d, edx
 * 00000001409FCD1A: shr     r9, 3
 * 00000001409FCD1E: xor     r8, [r10]
 * 00000001409FCD21: mov     ecx, ebx
 * 00000001409FCD23: rol     r8, cl
 * 00000001409FCD26: add     r10, 8
 * 00000001409FCD2A: add     edx, 0FFFFFFF8h
 * 00000001409FCD2D: sub     r9, r11
 * 00000001409FCD30: jnz     short loc_1409FCD1E
 * 00000001409FCD32: test    edx, edx
 * 00000001409FCD34: jz      short loc_1409FCD55
 * 00000001409FCD36: mov     r14d, 0FFFFFFFFh
 * 00000001409FCD3C: movzx   eax, byte ptr [r10]
 * 00000001409FCD40: mov     ecx, ebx
 * 00000001409FCD42: xor     r8, rax
 * 00000001409FCD45: add     r10, r11
 * 00000001409FCD48: rol     r8, cl
 * 00000001409FCD4B: add     edx, r14d
 * 00000001409FCD4E: jnz     short loc_1409FCD3C
 * 00000001409FCD50: mov     r14, [rsp+0CE0h+var_C88]
 * 00000001409FCD55: mov     rax, r8
 * 00000001409FCD58: shr     rax, 1Fh
 * 00000001409FCD5C: xor     r10d, r10d
 * 00000001409FCD5F: jmp     short loc_1409FCD68
 * 00000001409FCD61: xor     r8d, eax
 * 00000001409FCD64: shr     rax, 1Fh
 * 00000001409FCD68: test    rax, rax
 * 00000001409FCD6B: jnz     short loc_1409FCD61
 * 00000001409FCD6D: mov     r9d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FCD74: btr     r8d, 1Fh
 * 00000001409FCD79: mov     [r12+14h], r8d
 * 00000001409FCD7E: add     rdi, 8
 * 00000001409FCD82: add     [r14+828h], r13d
 * 00000001409FCD89: lea     r13d, [rax+4]
 * 00000001409FCD8D: mov     r12, [rbp+0BE0h+var_958]
 * 00000001409FCD94: lea     eax, [r13+2]
 * 00000001409FCD98: add     r12, 30h ; '0'
 * 00000001409FCD9C: add     rsi, r13
 * 00000001409FCD9F: sub     [rbp+0BE0h+var_C60], r11
 * 00000001409FCDA3: mov     [rbp+0BE0h+var_958], r12
 * 00000001409FCDAA: jnz     loc_1409FCC0D
 * 00000001409FCDB0: mov     rbx, [rbp+0BE0h+var_B38]
 * 00000001409FCDB7: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FCDBE: mov     r12, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FCDC3: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FCDC8: mov     r15d, dword ptr [rbp+0BE0h+var_BF8]
 * 00000001409FCDCC: mov     dword ptr [rbx], 2Ch ; ','
 * 00000001409FCDD2: mov     [rbx+18h], r12
 * 00000001409FCDD6: test    dword ptr [r14+990h], 10200000h
 * 00000001409FCDE1: jnz     short loc_1409FCE0C
 * 00000001409FCDE3: test    r15d, r15d
 * 00000001409FCDE6: jnz     short loc_1409FCE11
 * 00000001409FCDE8: test    dword ptr [r14+994h], 8000h
 * 00000001409FCDF3: jz      short loc_1409FCE19
 * 00000001409FCDF5: or      [rbx+20h], r11d
 * 00000001409FCDF9: mov     rdx, r12
 * 00000001409FCDFC: mov     rcx, r14
 * 00000001409FCDFF: call    sub_140A10C50
 * 00000001409FCE04: test    eax, eax
 * 00000001409FCE06: jz      short loc_1409FCE19
 * 00000001409FCE08: or      [rbx+20h], r13d
 * 00000001409FCE0C: test    r15d, r15d
 * 00000001409FCE0F: jz      short loc_1409FCE19
 * 00000001409FCE11: mov     eax, 2
 * 00000001409FCE16: or      [rbx+20h], eax
 * 00000001409FCE19: mov     r8d, [rbp+0BE0h+var_C58]
 * 00000001409FCE1D: lea     rax, [rbp+0BE0h+var_A28]
 * 00000001409FCE24: mov     rdx, [rbp+0BE0h+var_C48]
 * 00000001409FCE28: lea     rcx, [rbp+0BE0h+var_B98]
 * 00000001409FCE2C: mov     [rsp+0CE0h+var_CA8], rax
 * 00000001409FCE31: mov     rbx, r14
 * 00000001409FCE34: lea     rax, [rbp+0BE0h+var_B24]
 * 00000001409FCE3B: mov     [rbp+0BE0h+var_B98], r14
 * 00000001409FCE3F: mov     [rsp+0CE0h+var_CB0], rax
 * 00000001409FCE44: mov     r9, r12
 * 00000001409FCE47: mov     dword ptr [rsp+0CE0h+var_CB8], 9
 * 00000001409FCE4F: mov     dword ptr [rsp+0CE0h+BugCheckParameter4], r15d
 * 00000001409FCE54: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409FCE5B: call    sub_140A0F098
 * 00000001409FCE60: mov     ecx, eax
 * 00000001409FCE62: test    eax, eax
 * 00000001409FCE64: js      loc_1409FCA4A
 * 00000001409FCE6A: mov     rbx, [rbp+0BE0h+var_B98]
 * 00000001409FCE6E: mov     rcx, [rbp+0BE0h+var_B38]
 * 00000001409FCE75: mov     rax, rbx
 * 00000001409FCE78: mov     r9d, [rbp+0BE0h+var_A28]
 * 00000001409FCE7F: sub     rax, r14
 * 00000001409FCE82: mov     r15d, [rbp+0BE0h+var_B24]
 * 00000001409FCE89: add     rcx, rax
 * 00000001409FCE8C: sub     r9d, [rbp+0BE0h+var_B24]
 * 00000001409FCE93: add     r15, r12
 * 00000001409FCE96: mov     [rbp+0BE0h+var_B38], rcx
 * 00000001409FCE9D: xor     r8d, r8d
 * 00000001409FCEA0: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409FCEA7: lea     r13, [rcx+0C0h]
 * 00000001409FCEAE: mov     ecx, 30h ; '0'
 * 00000001409FCEB3: mov     [rsp+0CE0h+var_C88], r13
 * 00000001409FCEB8: mov     rax, r13
 * 00000001409FCEBB: lea     edx, [rcx-2Ah]
 * 00000001409FCEBE: lea     r10d, [rcx-2Fh]
 * 00000001409FCEC2: mov     [rax], r8
 * 00000001409FCEC5: add     ecx, 0FFFFFFF8h
 * 00000001409FCEC8: add     rax, 8
 * 00000001409FCECC: sub     rdx, r10
 * 00000001409FCECF: jnz     short loc_1409FCEC2
 * 00000001409FCED1: mov     rdx, r10
 * 00000001409FCED4: test    ecx, ecx
 * 00000001409FCED6: jz      short loc_1409FCEE9
 * 00000001409FCED8: mov     r10d, 0FFFFFFFFh
 * 00000001409FCEDE: mov     [rax], r8b
 * 00000001409FCEE1: add     rax, rdx
 * 00000001409FCEE4: add     ecx, r10d
 * 00000001409FCEE7: jnz     short loc_1409FCEDE
 * 00000001409FCEE9: mov     eax, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FCEEF: mov     r10, r15
 * 00000001409FCEF2: mov     [r13+0], eax
 * 00000001409FCEF6: mov     rax, r15
 * 00000001409FCEF9: mov     [r13+8], r15
 * 00000001409FCEFD: mov     [r13+10h], r9d
 * 00000001409FCF01: add     [rbx+828h], r9d
 * 00000001409FCF08: mov     r14d, [rbx+814h]
 * 00000001409FCF0F: mov     r12, [rbx+818h]
 * 00000001409FCF16: mov     ecx, r9d
 * 00000001409FCF19: add     rcx, r15
 * 00000001409FCF1C: cmp     r15, rcx
 * 00000001409FCF1F: jnb     short loc_1409FCF32
 * 00000001409FCF21: mov     r8d, 40h ; '@'
 * 00000001409FCF27: prefetchnta byte ptr [rax]
 * 00000001409FCF2A: add     rax, r8
 * 00000001409FCF2D: cmp     rax, rcx
 * 00000001409FCF30: jb      short loc_1409FCF27
 * 00000001409FCF32: mov     r11d, r9d
 * 00000001409FCF35: mov     r8, r12
 * 00000001409FCF38: shr     r11d, 7
 * 00000001409FCF3C: test    r11d, r11d
 * 00000001409FCF3F: jz      short loc_1409FCFB7
 * 00000001409FCF41: mov     edi, 0FFFFFFFFh
 * 00000001409FCF46: mov     r13, 7010008004002001h
 * 00000001409FCF50: mov     eax, 8
 * 00000001409FCF55: xor     r8, [r10]
 * 00000001409FCF58: mov     ecx, r14d
 * 00000001409FCF5B: rol     r8, cl
 * 00000001409FCF5E: xor     r8, [r10+8]
 * 00000001409FCF62: add     r10, 10h
 * 00000001409FCF66: rol     r8, cl
 * 00000001409FCF69: sub     rax, rdx
 * 00000001409FCF6C: jnz     short loc_1409FCF55
 * 00000001409FCF6E: mov     rcx, r10
 * 00000001409FCF71: sub     rcx, r15
 * 00000001409FCF74: xor     rcx, r12
 * 00000001409FCF77: mov     rax, rcx
 * 00000001409FCF7A: rol     rax, 11h
 * 00000001409FCF7E: xor     rcx, rax
 * 00000001409FCF81: mov     rax, r13
 * 00000001409FCF84: mul     rcx
 * 00000001409FCF87: xor     r14d, edx
 * 00000001409FCF8A: mov     [rbp+0BE0h+var_1C0], rdx
 * 00000001409FCF91: xor     r14d, eax
 * 00000001409FCF94: mov     edx, 1
 * 00000001409FCF99: and     r14d, 3Fh
 * 00000001409FCF9D: cmovz   r14d, edx
 * 00000001409FCFA1: add     r11d, edi
 * 00000001409FCFA4: jnz     short loc_1409FCF50
 * 00000001409FCFA6: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FCFAB: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FCFB2: mov     r13, [rsp+0CE0h+var_C88]
 * 00000001409FCFB7: and     r9d, 7Fh
 * 00000001409FCFBB: cmp     r9d, 8
 * 00000001409FCFBF: jb      short loc_1409FCFDE
 * 00000001409FCFC1: mov     eax, r9d
 * 00000001409FCFC4: shr     rax, 3
 * 00000001409FCFC8: xor     r8, [r10]
 * 00000001409FCFCB: mov     ecx, r14d
 * 00000001409FCFCE: rol     r8, cl
 * 00000001409FCFD1: add     r10, 8
 * 00000001409FCFD5: add     r9d, 0FFFFFFF8h
 * 00000001409FCFD9: sub     rax, rdx
 * 00000001409FCFDC: jnz     short loc_1409FCFC8
 * 00000001409FCFDE: test    r9d, r9d
 * 00000001409FCFE1: jz      short loc_1409FD002
 * 00000001409FCFE3: mov     esi, 0FFFFFFFFh
 * 00000001409FCFE8: movzx   eax, byte ptr [r10]
 * 00000001409FCFEC: mov     ecx, r14d
 * 00000001409FCFEF: xor     r8, rax
 * 00000001409FCFF2: add     r10, rdx
 * 00000001409FCFF5: rol     r8, cl
 * 00000001409FCFF8: add     r9d, esi
 * 00000001409FCFFB: jnz     short loc_1409FCFE8
 * 00000001409FCFFD: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FD002: mov     rax, r8
 * 00000001409FD005: shr     rax, 1Fh
 * 00000001409FD009: xor     ecx, ecx
 * 00000001409FD00B: jmp     short loc_1409FD014
 * 00000001409FD00D: xor     r8d, eax
 * 00000001409FD010: shr     rax, 1Fh
 * 00000001409FD014: test    rax, rax
 * 00000001409FD017: jnz     short loc_1409FD00D
 * 00000001409FD019: mov     r15d, dword ptr [rbp+0BE0h+var_BF8]
 * 00000001409FD01D: btr     r8d, 1Fh
 * 00000001409FD022: mov     [r13+14h], r8d
 * 00000001409FD026: mov     rdx, [rbp+0BE0h+var_B38]
 * 00000001409FD02D: mov     dword ptr [rdx+0F0h], 30h ; '0'
 * 00000001409FD037: cmp     [rdx+100h], eax
 * 00000001409FD03D: jz      short loc_1409FD056
 * 00000001409FD03F: mov     eax, [rdx+108h]
 * 00000001409FD045: test    r15d, r15d
 * 00000001409FD048: setnz   cl
 * 00000001409FD04B: and     eax, 0FFFFFFFEh
 * 00000001409FD04E: or      ecx, eax
 * 00000001409FD050: mov     [rdx+108h], ecx
 * 00000001409FD056: mov     rcx, [rbp+0BE0h+var_B38]
 * 00000001409FD05D: mov     eax, r15d
 * 00000001409FD060: add     rcx, 60h ; '`'
 * 00000001409FD064: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409FD06B: neg     eax
 * 00000001409FD06D: mov     [rbp+0BE0h+var_AB0], rcx
 * 00000001409FD074: sbb     r12d, r12d
 * 00000001409FD077: neg     r12d
 * 00000001409FD07A: add     r12d, 0Dh
 * 00000001409FD07E: test    rcx, rcx
 * 00000001409FD081: jnz     loc_1409FD328
 * 00000001409FD087: mov     r15d, [rbx+7E4h]
 * 00000001409FD08E: mov     r8d, [rbx+924h]
 * 00000001409FD095: lea     eax, [r15+30h]
 * 00000001409FD099: cmp     eax, [rbx+0A1Ch]
 * 00000001409FD09F: jbe     loc_1409FD185
 * 00000001409FD0A5: mov     edx, eax
 * 00000001409FD0A7: mov     rcx, rbx
 * 00000001409FD0AA: call    sub_140A0FB30
 * 00000001409FD0AF: mov     r14, rax
 * 00000001409FD0B2: xor     eax, eax
 * 00000001409FD0B4: test    r14, r14
 * 00000001409FD0B7: jz      loc_1409FCBBA
 * 00000001409FD0BD: mov     ecx, [rbx+990h]
 * 00000001409FD0C3: test    cl, 4
 * 00000001409FD0C6: jnz     loc_1409FD17B
 * 00000001409FD0CC: mov     eax, [rbx+7E4h]
 * 00000001409FD0D2: and     ecx, 20000000h
 * 00000001409FD0D8: mov     r8, [rbx+7C8h]
 * 00000001409FD0DF: neg     ecx
 * 00000001409FD0E1: mov     r10d, 1
 * 00000001409FD0E7: sbb     edx, edx
 * 00000001409FD0E9: and     edx, [rbx+924h]
 * 00000001409FD0EF: cmp     eax, 8
 * 00000001409FD0F2: jb      short loc_1409FD10C
 * 00000001409FD0F4: mov     ecx, eax
 * 00000001409FD0F6: shr     rcx, 3
 * 00000001409FD0FA: xor     r9d, r9d
 * 00000001409FD0FD: mov     [rbx], r9
 * 00000001409FD100: add     eax, 0FFFFFFF8h
 * 00000001409FD103: add     rbx, 8
 * 00000001409FD107: sub     rcx, r10
 * 00000001409FD10A: jnz     short loc_1409FD0FD
 * 00000001409FD10C: xor     ecx, ecx
 * 00000001409FD10E: test    eax, eax
 * 00000001409FD110: jz      short loc_1409FD122
 * 00000001409FD112: mov     r9d, 0FFFFFFFFh
 * 00000001409FD118: mov     [rbx], cl
 * 00000001409FD11A: add     rbx, r10
 * 00000001409FD11D: add     eax, r9d
 * 00000001409FD120: jnz     short loc_1409FD118
 * 00000001409FD122: mov     ebx, [r14+924h]
 * 00000001409FD129: mov     [r14+924h], edx
 * 00000001409FD130: cmp     edx, 3
 * 00000001409FD133: jz      short loc_1409FD165
 * 00000001409FD135: test    dword ptr [r14+990h], 10000000h
 * 00000001409FD140: cmovz   ecx, edx
 * 00000001409FD143: test    ecx, ecx
 * 00000001409FD145: jz      short loc_1409FD15C
 * 00000001409FD147: mov     rax, [r14+228h]
 * 00000001409FD14E: lea     rcx, [r8-8]
 * 00000001409FD152: mov     rdx, [rcx]
 * 00000001409FD155: call    KeGuardDispatchICall
 * 00000001409FD15A: jmp     short loc_1409FD174
 * 00000001409FD15C: mov     rax, [r14+100h]
 * 00000001409FD163: jmp     short loc_1409FD16C
 * 00000001409FD165: mov     rax, [r14+368h]
 * 00000001409FD16C: mov     rcx, r8
 * 00000001409FD16F: call    KeGuardDispatchICall
 * 00000001409FD174: mov     [r14+924h], ebx
 * 00000001409FD17B: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 00000001409FD183: jmp     short loc_1409FD18E
 * 00000001409FD185: mov     r14, rbx
 * 00000001409FD188: mov     [rbx+7E4h], eax
 * 00000001409FD18E: add     r15, r14
 * 00000001409FD191: mov     r9d, 1
 * 00000001409FD197: add     [r14+80Ch], r9d
 * 00000001409FD19E: mov     rax, r15
 * 00000001409FD1A1: mov     [rbp+0BE0h+var_880], r15
 * 00000001409FD1A8: xor     r8d, r8d
 * 00000001409FD1AB: lea     ecx, [r9+2Fh]
 * 00000001409FD1AF: lea     edx, [rcx-2Ah]
 * 00000001409FD1B2: mov     [rax], r8
 * 00000001409FD1B5: add     ecx, 0FFFFFFF8h
 * 00000001409FD1B8: add     rax, 8
 * 00000001409FD1BC: sub     rdx, r9
 * 00000001409FD1BF: jnz     short loc_1409FD1B2
 * 00000001409FD1C1: test    ecx, ecx
 * 00000001409FD1C3: jz      short loc_1409FD1D4
 * 00000001409FD1C5: mov     edx, 0FFFFFFFFh
 * 00000001409FD1CA: mov     [rax], r8b
 * 00000001409FD1CD: add     rax, r9
 * 00000001409FD1D0: add     ecx, edx
 * 00000001409FD1D2: jnz     short loc_1409FD1CA
 * 00000001409FD1D4: mov     r13, [rbp+0BE0h+var_C50]
 * 00000001409FD1D8: mov     [r15], r12d
 * 00000001409FD1DB: mov     r9, r13
 * 00000001409FD1DE: mov     r12d, [rsp+0CE0h+var_C78]
 * 00000001409FD1E3: mov     [r15+8], r13
 * 00000001409FD1E7: mov     [r15+10h], r12d
 * 00000001409FD1EB: add     [r14+828h], r12d
 * 00000001409FD1F2: mov     r11d, [r14+814h]
 * 00000001409FD1F9: lea     rcx, [r12+r13]
 * 00000001409FD1FD: mov     rbx, [r14+818h]
 * 00000001409FD204: cmp     r13, rcx
 * 00000001409FD207: jnb     short loc_1409FD21C
 * 00000001409FD209: mov     rax, r13
 * 00000001409FD20C: mov     edx, 40h ; '@'
 * 00000001409FD211: prefetchnta byte ptr [rax]
 * 00000001409FD214: add     rax, rdx
 * 00000001409FD217: cmp     rax, rcx
 * 00000001409FD21A: jb      short loc_1409FD211
 * 00000001409FD21C: mov     r10d, r12d
 * 00000001409FD21F: mov     r8, rbx
 * 00000001409FD222: shr     r10d, 7
 * 00000001409FD226: test    r10d, r10d
 * 00000001409FD229: jz      short loc_1409FD2A2
 * 00000001409FD22B: mov     esi, 1
 * 00000001409FD230: mov     rdi, 7010008004002001h
 * 00000001409FD23A: mov     r12d, 0FFFFFFFFh
 * 00000001409FD240: mov     eax, 8
 * 00000001409FD245: xor     r8, [r9]
 * 00000001409FD248: mov     ecx, r11d
 * 00000001409FD24B: rol     r8, cl
 * 00000001409FD24E: xor     r8, [r9+8]
 * 00000001409FD252: add     r9, 10h
 * 00000001409FD256: rol     r8, cl
 * 00000001409FD259: sub     rax, rsi
 * 00000001409FD25C: jnz     short loc_1409FD245
 * 00000001409FD25E: mov     rcx, r9
 * 00000001409FD261: sub     rcx, r13
 * 00000001409FD264: xor     rcx, rbx
 * 00000001409FD267: mov     rax, rcx
 * 00000001409FD26A: rol     rax, 11h
 * 00000001409FD26E: xor     rcx, rax
 * 00000001409FD271: mov     rax, rdi
 * 00000001409FD274: mul     rcx
 * 00000001409FD277: xor     r11d, edx
 * 00000001409FD27A: mov     [rbp+0BE0h+var_1B8], rdx
 * 00000001409FD281: xor     r11d, eax
 * 00000001409FD284: and     r11d, 3Fh
 * 00000001409FD288: cmovz   r11d, esi
 * 00000001409FD28C: add     r10d, r12d
 * 00000001409FD28F: jnz     short loc_1409FD240
 * 00000001409FD291: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FD296: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FD29D: mov     r12d, [rsp+0CE0h+var_C78]
 * 00000001409FD2A2: mov     edx, r12d
 * 00000001409FD2A5: mov     r10d, 1
 * 00000001409FD2AB: and     edx, 7Fh
 * 00000001409FD2AE: cmp     edx, 8
 * 00000001409FD2B1: jb      short loc_1409FD2CE
 * 00000001409FD2B3: mov     eax, edx
 * 00000001409FD2B5: shr     rax, 3
 * 00000001409FD2B9: xor     r8, [r9]
 * 00000001409FD2BC: mov     ecx, r11d
 * 00000001409FD2BF: rol     r8, cl
 * 00000001409FD2C2: add     r9, 8
 * 00000001409FD2C6: add     edx, 0FFFFFFF8h
 * 00000001409FD2C9: sub     rax, r10
 * 00000001409FD2CC: jnz     short loc_1409FD2B9
 * 00000001409FD2CE: test    edx, edx
 * 00000001409FD2D0: jz      short loc_1409FD2F0
 * 00000001409FD2D2: mov     esi, 0FFFFFFFFh
 * 00000001409FD2D7: movzx   eax, byte ptr [r9]
 * 00000001409FD2DB: mov     ecx, r11d
 * 00000001409FD2DE: xor     r8, rax
 * 00000001409FD2E1: add     r9, r10
 * 00000001409FD2E4: rol     r8, cl
 * 00000001409FD2E7: add     edx, esi
 * 00000001409FD2E9: jnz     short loc_1409FD2D7
 * 00000001409FD2EB: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FD2F0: mov     rax, r8
 * 00000001409FD2F3: jmp     short loc_1409FD2F8
 * 00000001409FD2F5: xor     r8d, eax
 * 00000001409FD2F8: shr     rax, 1Fh
 * 00000001409FD2FC: test    rax, rax
 * 00000001409FD2FF: jnz     short loc_1409FD2F5
 * 00000001409FD301: btr     r8d, 1Fh
 * 00000001409FD306: mov     rbx, r14
 * 00000001409FD309: mov     [r15+14h], r8d
 * 00000001409FD30D: mov     rax, [rbp+0BE0h+var_880]
 * 00000001409FD314: mov     r15d, dword ptr [rbp+0BE0h+var_BF8]
 * 00000001409FD318: mov     [rbp+0BE0h+var_AB0], rax
 * 00000001409FD31F: add     [r14+828h], r12d
 * 00000001409FD326: jmp     short loc_1409FD334
 * 00000001409FD328: mov     r13, [rbp+0BE0h+var_C50]
 * 00000001409FD32C: mov     [rcx], r12d
 * 00000001409FD32F: mov     r12d, [rsp+0CE0h+var_C78]
 * 00000001409FD334: test    dword ptr [rbx+990h], 40000000h
 * 00000001409FD33E: jz      short loc_1409FD35E
 * 00000001409FD340: test    r12d, r12d
 * 00000001409FD343: jz      short loc_1409FD35E
 * 00000001409FD345: mov     r9, [rbp+0BE0h+var_AB0]
 * 00000001409FD34C: mov     r8d, r12d
 * 00000001409FD34F: add     r9, 1Ch
 * 00000001409FD353: mov     rdx, r13
 * 00000001409FD356: mov     rcx, rbx
 * 00000001409FD359: call    sub_1403EA5FC
 * 00000001409FD35E: mov     rax, [rbp+0BE0h+var_AB0]
 * 00000001409FD365: xor     ecx, ecx
 * 00000001409FD367: mov     r12, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FD36C: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409FD373: mov     [rax+18h], ecx
 * 00000001409FD376: lea     r13d, [rcx+1]
 * 00000001409FD37A: mov     rax, [rbp+0BE0h+var_AB0]
 * 00000001409FD381: or      [rax+18h], r13d
 * 00000001409FD385: xor     eax, eax
 * 00000001409FD387: mov     r14, [rbp+0BE0h+var_B38]
 * 00000001409FD38E: test    r15d, r15d
 * 00000001409FD391: setnz   cl
 * 00000001409FD394: mov     dword ptr [r14+90h], 23h ; '#'
 * 00000001409FD39F: mov     eax, [r14+0B8h]
 * 00000001409FD3A6: and     eax, 0FFFFFFFEh
 * 00000001409FD3A9: or      ecx, eax
 * 00000001409FD3AB: mov     [r14+0B8h], ecx
 * 00000001409FD3B2: cmp     dword ptr [r14+0A0h], 94h
 * 00000001409FD3BD: jb      short loc_1409FD430
 * 00000001409FD3BF: mov     rax, [rbx+1F8h]
 * 00000001409FD3C6: mov     rcx, r12
 * 00000001409FD3C9: mov     r15, [r14+98h]
 * 00000001409FD3D0: call    KeGuardDispatchICall
 * 00000001409FD3D5: test    rax, rax
 * 00000001409FD3D8: jz      loc_1409FCBBA
 * 00000001409FD3DE: mov     ecx, [rax+50h]
 * 00000001409FD3E1: mov     eax, 2
 * 00000001409FD3E6: or      [r14+0B8h], eax
 * 00000001409FD3ED: add     rcx, r12
 * 00000001409FD3F0: mov     rax, [r15+70h]
 * 00000001409FD3F4: cmp     rax, r12
 * 00000001409FD3F7: jb      short loc_1409FD410
 * 00000001409FD3F9: cmp     rax, rcx
 * 00000001409FD3FC: jnb     short loc_1409FD410
 * 00000001409FD3FE: mov     rax, [rax]
 * 00000001409FD401: mov     [r14+0A8h], rax
 * 00000001409FD408: or      dword ptr [r14+0B8h], 4
 * 00000001409FD410: mov     rax, [r15+78h]
 * 00000001409FD414: cmp     rax, r12
 * 00000001409FD417: jb      short loc_1409FD430
 * 00000001409FD419: cmp     rax, rcx
 * 00000001409FD41C: jnb     short loc_1409FD430
 * 00000001409FD41E: mov     rax, [rax]
 * 00000001409FD421: mov     [r14+0B0h], rax
 * 00000001409FD428: or      dword ptr [r14+0B8h], 8
 * 00000001409FD430: test    dword ptr [rbx+990h], 400000h
 * 00000001409FD43A: mov     [rbp+0BE0h+var_B98], rbx
 * 00000001409FD43E: jz      loc_1409FE3DC
 * 00000001409FD444: mov     rax, [rbx+1F8h]
 * 00000001409FD44B: mov     rcx, r12
 * 00000001409FD44E: call    KeGuardDispatchICall
 * 00000001409FD453: mov     [rbp+0BE0h+var_C20], rax
 * 00000001409FD457: mov     r15, rax
 * 00000001409FD45A: test    rax, rax
 * 00000001409FD45D: jz      loc_1409FCA45
 * 00000001409FD463: movzx   r10d, word ptr [r15+6]
 * 00000001409FD468: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001409FD472: mov     ecx, [rbp+0BE0h+var_C58]
 * 00000001409FD475: mul     rcx
 * 00000001409FD478: xor     eax, eax
 * 00000001409FD47A: mov     word ptr [rbp+0BE0h+arg_8], r10w
 * 00000001409FD482: mov     r9, rdx
 * 00000001409FD485: shr     r9, 3
 * 00000001409FD489: mov     [rbp+0BE0h+var_C50], r9
 * 00000001409FD48D: test    r10w, r10w
 * 00000001409FD491: jnz     short loc_1409FD4F4
 * 00000001409FD493: test    dword ptr [rbx+990h], 200000h
 * 00000001409FD49D: jz      loc_140A0CA76
 * 00000001409FD4A3: cmp     [rbx+8F8h], eax
 * 00000001409FD4A9: jnz     loc_1409FCA45
 * 00000001409FD4AF: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD4B9: add     rax, rbx
 * 00000001409FD4BC: mov     [rbx+900h], rax
 * 00000001409FD4C3: xor     eax, eax
 * 00000001409FD4C5: mov     [rbx+908h], rax
 * 00000001409FD4CC: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409FD4D7: mov     [rbx+918h], r12
 * 00000001409FD4DE: mov     [rbx+8F8h], r13d
 * 00000001409FD4E5: xor     edx, edx
 * 00000001409FD4E7: mov     rcx, rbx
 * 00000001409FD4EA: call    $$b8
 * 00000001409FD4EF: jmp     loc_1409FCA45
 * 00000001409FD4F4: mov     rdx, [rbp+0BE0h+var_C48]
 * 00000001409FD4F8: movzx   r11d, word ptr [r15+14h]
 * 00000001409FD4FD: mov     r13, rdx
 * 00000001409FD500: mov     eax, r9d
 * 00000001409FD503: add     r11, 18h
 * 00000001409FD507: add     r11, r15
 * 00000001409FD50A: mov     [rsp+0CE0h+var_C88], r11
 * 00000001409FD50F: lea     r12, [rax+rax*2]
 * 00000001409FD513: shl     r12, 2
 * 00000001409FD517: mov     [rsp+0CE0h+var_C70], r12
 * 00000001409FD51C: lea     rax, [r12+rdx]
 * 00000001409FD520: xor     edx, edx
 * 00000001409FD522: mov     [rbp+0BE0h+var_C10], rax
 * 00000001409FD526: xor     eax, eax
 * 00000001409FD528: mov     r14, [rbp+0BE0h+var_C10]
 * 00000001409FD52C: mov     ecx, eax
 * 00000001409FD52E: mov     [rsp+0CE0h+var_C78], eax
 * 00000001409FD532: movzx   eax, r10w
 * 00000001409FD536: test    eax, eax
 * 00000001409FD538: jz      loc_1409FD770
 * 00000001409FD53E: mov     r8, r11
 * 00000001409FD541: mov     [rbp+0BE0h+var_C60], r11
 * 00000001409FD545: lea     r15d, [rdx+1]
 * 00000001409FD549: mov     edx, [r8+10h]
 * 00000001409FD54D: mov     eax, [r8+8]
 * 00000001409FD551: cmp     edx, eax
 * 00000001409FD553: mov     r9d, [r8+0Ch]
 * 00000001409FD557: cmovbe  edx, eax
 * 00000001409FD55A: mov     [rbp+0BE0h+var_BF0], r9d
 * 00000001409FD55E: add     edx, r9d
 * 00000001409FD561: mov     [rbp+0BE0h+var_BC4], edx
 * 00000001409FD564: test    ecx, ecx
 * 00000001409FD566: jz      short loc_1409FD57E
 * 00000001409FD568: lea     eax, [rcx-1]
 * 00000001409FD56B: lea     rax, [rax+rax*4]
 * 00000001409FD56F: cmp     edx, [r11+rax*8+0Ch]
 * 00000001409FD574: jb      loc_1409FD78D
 * 00000001409FD57A: mov     ecx, [rsp+0CE0h+var_C78]
 * 00000001409FD57E: cmp     r13, r14
 * 00000001409FD581: jz      loc_1409FD746
 * 00000001409FD587: mov     ecx, [r13+0]
 * 00000001409FD58B: mov     eax, [r13+4]
 * 00000001409FD58F: cmp     ecx, edx
 * 00000001409FD591: jnb     loc_1409FD72B
 * 00000001409FD597: cmp     eax, r9d
 * 00000001409FD59A: jbe     loc_1409FD72B
 * 00000001409FD5A0: cmp     ecx, r9d
 * 00000001409FD5A3: jb      loc_1409FD7EB
 * 00000001409FD5A9: cmp     eax, edx
 * 00000001409FD5AB: ja      loc_1409FD7EB
 * 00000001409FD5B1: mov     eax, [r13+8]
 * 00000001409FD5B5: mov     ecx, 1
 * 00000001409FD5BA: test    cl, al
 * 00000001409FD5BC: mov     [rbp+0BE0h+var_1B0], r13
 * 00000001409FD5C3: mov     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FD5C8: jnz     short loc_1409FD5D5
 * 00000001409FD5CA: mov     al, [rax+rcx]
 * 00000001409FD5CD: test    al, 20h
 * 00000001409FD5CF: jz      loc_1409FD71D
 * 00000001409FD5D5: mov     eax, [r8+8]
 * 00000001409FD5D9: mov     rdx, rcx
 * 00000001409FD5DC: mov     r15d, [r8+10h]
 * 00000001409FD5E0: mov     rcx, r13
 * 00000001409FD5E3: mov     r12d, [r8+0Ch]
 * 00000001409FD5E7: cmp     r15d, eax
 * 00000001409FD5EA: cmovbe  r15d, eax
 * 00000001409FD5EE: mov     rax, [rbx+418h]
 * 00000001409FD5F5: add     r15d, r12d
 * 00000001409FD5F8: call    KeGuardDispatchICall
 * 00000001409FD5FD: mov     r14, rax
 * 00000001409FD600: cmp     [rax], r12d
 * 00000001409FD603: jb      short loc_1409FD60B
 * 00000001409FD605: cmp     [rax+4], r15d
 * 00000001409FD609: jbe     short loc_1409FD67B
 * 00000001409FD60B: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 00000001409FD610: mov     eax, 80000000h
 * 00000001409FD615: mov     edx, r14d
 * 00000001409FD618: sub     edx, r8d
 * 00000001409FD61B: or      edx, eax
 * 00000001409FD61D: xor     eax, eax
 * 00000001409FD61F: test    dword ptr [rbx+990h], 200000h
 * 00000001409FD629: jz      loc_140A0CB01
 * 00000001409FD62F: cmp     [rbx+8F8h], eax
 * 00000001409FD635: jnz     short loc_1409FD67B
 * 00000001409FD637: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD641: xor     edx, edx
 * 00000001409FD643: add     rax, rbx
 * 00000001409FD646: mov     rcx, rbx
 * 00000001409FD649: mov     [rbx+900h], rax
 * 00000001409FD650: xor     eax, eax
 * 00000001409FD652: mov     [rbx+908h], rax
 * 00000001409FD659: mov     eax, 1
 * 00000001409FD65E: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409FD669: mov     [rbx+918h], r8
 * 00000001409FD670: mov     [rbx+8F8h], eax
 * 00000001409FD676: call    $$b8
 * 00000001409FD67B: mov     r8d, [r14]
 * 00000001409FD67E: mov     rcx, r14
 * 00000001409FD681: add     r8, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FD686: mov     rax, [rbx+420h]
 * 00000001409FD68D: mov     rdx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FD692: call    KeGuardDispatchICall
 * 00000001409FD697: mov     rdx, rax
 * 00000001409FD69A: cmp     [rax], r12d
 * 00000001409FD69D: jb      short loc_1409FD6A5
 * 00000001409FD69F: cmp     [rax+4], r15d
 * 00000001409FD6A3: jbe     short loc_1409FD712
 * 00000001409FD6A5: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 00000001409FD6AA: mov     eax, 80000000h
 * 00000001409FD6AF: sub     edx, r8d
 * 00000001409FD6B2: or      edx, eax
 * 00000001409FD6B4: xor     eax, eax
 * 00000001409FD6B6: test    dword ptr [rbx+990h], 200000h
 * 00000001409FD6C0: jz      loc_140A0CAD5
 * 00000001409FD6C6: cmp     [rbx+8F8h], eax
 * 00000001409FD6CC: jnz     short loc_1409FD712
 * 00000001409FD6CE: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD6D8: xor     edx, edx
 * 00000001409FD6DA: add     rax, rbx
 * 00000001409FD6DD: mov     rcx, rbx
 * 00000001409FD6E0: mov     [rbx+900h], rax
 * 00000001409FD6E7: xor     eax, eax
 * 00000001409FD6E9: mov     [rbx+908h], rax
 * 00000001409FD6F0: mov     eax, 1
 * 00000001409FD6F5: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409FD700: mov     [rbx+918h], r8
 * 00000001409FD707: mov     [rbx+8F8h], eax
 * 00000001409FD70D: call    $$b8
 * 00000001409FD712: mov     edx, [rbp+0BE0h+var_BC4]
 * 00000001409FD715: mov     r8, [rbp+0BE0h+var_C60]
 * 00000001409FD719: mov     r9d, [rbp+0BE0h+var_BF0]
 * 00000001409FD71D: add     r13, 0Ch
 * 00000001409FD721: cmp     r13, [rbp+0BE0h+var_C10]
 * 00000001409FD725: jnz     loc_1409FD587
 * 00000001409FD72B: mov     ecx, [rsp+0CE0h+var_C78]
 * 00000001409FD72F: mov     r15d, 1
 * 00000001409FD735: movzx   r10d, word ptr [rbp+0BE0h+arg_8]
 * 00000001409FD73D: mov     r11, [rsp+0CE0h+var_C88]
 * 00000001409FD742: mov     r14, [rbp+0BE0h+var_C10]
 * 00000001409FD746: add     ecx, r15d
 * 00000001409FD749: movzx   eax, r10w
 * 00000001409FD74D: add     r8, 28h ; '('
 * 00000001409FD751: mov     [rsp+0CE0h+var_C78], ecx
 * 00000001409FD755: mov     [rbp+0BE0h+var_C60], r8
 * 00000001409FD759: cmp     ecx, eax
 * 00000001409FD75B: jb      loc_1409FD549
 * 00000001409FD761: mov     r9, [rbp+0BE0h+var_C50]
 * 00000001409FD765: xor     edx, edx
 * 00000001409FD767: mov     r15, [rbp+0BE0h+var_C20]
 * 00000001409FD76B: mov     r12, [rsp+0CE0h+var_C70]
 * 00000001409FD770: cmp     r13, r14
 * 00000001409FD773: jz      loc_1409FD84D
 * 00000001409FD779: test    dword ptr [rbx+990h], 200000h
 * 00000001409FD783: jz      loc_140A0CB60
 * 00000001409FD789: xor     eax, eax
 * 00000001409FD78B: jmp     short loc_1409FD7FD
 * 00000001409FD78D: xor     eax, eax
 * 00000001409FD78F: test    dword ptr [rbx+990h], 200000h
 * 00000001409FD799: jz      loc_140A0CAA4
 * 00000001409FD79F: cmp     [rbx+8F8h], eax
 * 00000001409FD7A5: jnz     loc_1409FCA45
 * 00000001409FD7AB: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD7B5: add     rax, rbx
 * 00000001409FD7B8: mov     [rbx+900h], rax
 * 00000001409FD7BF: xor     eax, eax
 * 00000001409FD7C1: mov     [rbx+908h], rax
 * 00000001409FD7C8: mov     rax, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FD7CD: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409FD7D8: mov     [rbx+918h], rax
 * 00000001409FD7DF: mov     [rbx+8F8h], r15d
 * 00000001409FD7E6: jmp     loc_1409FD4E5
 * 00000001409FD7EB: xor     eax, eax
 * 00000001409FD7ED: test    dword ptr [rbx+990h], 200000h
 * 00000001409FD7F7: jz      loc_140A0CB2D
 * 00000001409FD7FD: cmp     [rbx+8F8h], eax
 * 00000001409FD803: jnz     loc_1409FCA45
 * 00000001409FD809: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD813: add     rax, rbx
 * 00000001409FD816: mov     [rbx+900h], rax
 * 00000001409FD81D: xor     eax, eax
 * 00000001409FD81F: mov     [rbx+908h], rax
 * 00000001409FD826: mov     rax, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FD82B: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409FD836: mov     [rbx+918h], rax
 * 00000001409FD83D: mov     eax, 1
 * 00000001409FD842: mov     [rbx+8F8h], eax
 * 00000001409FD848: jmp     loc_1409FD4E5
 * 00000001409FD84D: xor     r11d, r11d
 * 00000001409FD850: test    r9d, r9d
 * 00000001409FD853: jz      short loc_1409FD85E
 * 00000001409FD855: lea     ecx, [r9+6]
 * 00000001409FD859: and     ecx, 0FFFFFFF8h
 * 00000001409FD85C: jmp     short loc_1409FD861
 * 00000001409FD85E: mov     ecx, r11d
 * 00000001409FD861: mov     r14d, [rbx+7E4h]
 * 00000001409FD868: lea     eax, [rax+rax*2]
 * 00000001409FD86B: mov     r8d, [rbx+924h]
 * 00000001409FD872: lea     ecx, [rcx+rax*8]
 * 00000001409FD875: lea     eax, [r14+30h]
 * 00000001409FD879: add     eax, ecx
 * 00000001409FD87B: cmp     eax, [rbx+0A1Ch]
 * 00000001409FD881: jbe     loc_1409FD978
 * 00000001409FD887: mov     edx, eax
 * 00000001409FD889: mov     rcx, rbx
 * 00000001409FD88C: call    sub_140A0FB30
 * 00000001409FD891: mov     [rbp+0BE0h+var_C20], rax
 * 00000001409FD895: mov     r13, rax
 * 00000001409FD898: test    rax, rax
 * 00000001409FD89B: jz      loc_1409FCBBE
 * 00000001409FD8A1: mov     ecx, [rbx+990h]
 * 00000001409FD8A7: test    cl, 4
 * 00000001409FD8AA: jnz     loc_1409FD95F
 * 00000001409FD8B0: mov     eax, [rbx+7E4h]
 * 00000001409FD8B6: and     ecx, 20000000h
 * 00000001409FD8BC: mov     r8, [rbx+7C8h]
 * 00000001409FD8C3: neg     ecx
 * 00000001409FD8C5: mov     r10d, 1
 * 00000001409FD8CB: sbb     edx, edx
 * 00000001409FD8CD: and     edx, [rbx+924h]
 * 00000001409FD8D3: cmp     eax, 8
 * 00000001409FD8D6: jb      short loc_1409FD8F0
 * 00000001409FD8D8: mov     ecx, eax
 * 00000001409FD8DA: shr     rcx, 3
 * 00000001409FD8DE: xor     r9d, r9d
 * 00000001409FD8E1: mov     [rbx], r9
 * 00000001409FD8E4: add     eax, 0FFFFFFF8h
 * 00000001409FD8E7: add     rbx, 8
 * 00000001409FD8EB: sub     rcx, r10
 * 00000001409FD8EE: jnz     short loc_1409FD8E1
 * 00000001409FD8F0: xor     ecx, ecx
 * 00000001409FD8F2: test    eax, eax
 * 00000001409FD8F4: jz      short loc_1409FD906
 * 00000001409FD8F6: mov     r9d, 0FFFFFFFFh
 * 00000001409FD8FC: mov     [rbx], cl
 * 00000001409FD8FE: add     rbx, r10
 * 00000001409FD901: add     eax, r9d
 * 00000001409FD904: jnz     short loc_1409FD8FC
 * 00000001409FD906: mov     ebx, [r13+924h]
 * 00000001409FD90D: mov     [r13+924h], edx
 * 00000001409FD914: cmp     edx, 3
 * 00000001409FD917: jz      short loc_1409FD949
 * 00000001409FD919: test    dword ptr [r13+990h], 10000000h
 * 00000001409FD924: cmovz   ecx, edx
 * 00000001409FD927: test    ecx, ecx
 * 00000001409FD929: jz      short loc_1409FD940
 * 00000001409FD92B: mov     rax, [r13+228h]
 * 00000001409FD932: lea     rcx, [r8-8]
 * 00000001409FD936: mov     rdx, [rcx]
 * 00000001409FD939: call    KeGuardDispatchICall
 * 00000001409FD93E: jmp     short loc_1409FD958
 * 00000001409FD940: mov     rax, [r13+100h]
 * 00000001409FD947: jmp     short loc_1409FD950
 * 00000001409FD949: mov     rax, [r13+368h]
 * 00000001409FD950: mov     rcx, r8
 * 00000001409FD953: call    KeGuardDispatchICall
 * 00000001409FD958: mov     [r13+924h], ebx
 * 00000001409FD95F: and     dword ptr [r13+990h], 0FFFFFFFBh
 * 00000001409FD967: mov     r9, [rbp+0BE0h+var_C50]
 * 00000001409FD96B: xor     r11d, r11d
 * 00000001409FD96E: movzx   r10d, word ptr [rbp+0BE0h+arg_8]
 * 00000001409FD976: jmp     short loc_1409FD985
 * 00000001409FD978: mov     r13, rbx
 * 00000001409FD97B: mov     [rbp+0BE0h+var_C20], rbx
 * 00000001409FD97F: mov     [rbx+7E4h], eax
 * 00000001409FD985: mov     ebx, 1
 * 00000001409FD98A: lea     r8, [r14+r13]
 * 00000001409FD98E: add     [r13+80Ch], ebx
 * 00000001409FD995: mov     rax, r8
 * 00000001409FD998: mov     [rbp+0BE0h+var_848], r8
 * 00000001409FD99F: lea     ecx, [rbx+2Fh]
 * 00000001409FD9A2: lea     edx, [rbx+5]
 * 00000001409FD9A5: mov     [rax], r11
 * 00000001409FD9A8: add     ecx, 0FFFFFFF8h
 * 00000001409FD9AB: add     rax, 8
 * 00000001409FD9AF: sub     rdx, rbx
 * 00000001409FD9B2: jnz     short loc_1409FD9A5
 * 00000001409FD9B4: test    ecx, ecx
 * 00000001409FD9B6: jz      short loc_1409FD9C7
 * 00000001409FD9B8: mov     edx, 0FFFFFFFFh
 * 00000001409FD9BD: mov     [rax], r11b
 * 00000001409FD9C0: add     rax, rbx
 * 00000001409FD9C3: add     ecx, edx
 * 00000001409FD9C5: jnz     short loc_1409FD9BD
 * 00000001409FD9C7: mov     rax, [rbp+0BE0h+var_C48]
 * 00000001409FD9CB: mov     dword ptr [r8], 1Eh
 * 00000001409FD9D2: mov     [r8+8], rax
 * 00000001409FD9D6: xor     eax, eax
 * 00000001409FD9D8: mov     [r8+10h], eax
 * 00000001409FD9DC: mov     rcx, [r13+818h]
 * 00000001409FD9E3: mov     rax, rcx
 * 00000001409FD9E6: jmp     short loc_1409FD9EA
 * 00000001409FD9E8: xor     ecx, eax
 * 00000001409FD9EA: shr     rax, 1Fh
 * 00000001409FD9EE: test    rax, rax
 * 00000001409FD9F1: jnz     short loc_1409FD9E8
 * 00000001409FD9F3: btr     ecx, 1Fh
 * 00000001409FD9F7: mov     rbx, r13
 * 00000001409FD9FA: mov     [r8+14h], ecx
 * 00000001409FD9FE: mov     r8d, 0FFFEh
 * 00000001409FDA04: mov     rax, [rbp+0BE0h+var_848]
 * 00000001409FDA0B: mov     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FDA10: mov     [rbp+0BE0h+var_B18], rax
 * 00000001409FDA17: mov     [rbp+0BE0h+var_B98], rbx
 * 00000001409FDA1B: mov     [rax+18h], rcx
 * 00000001409FDA1F: mov     ecx, [r15+50h]
 * 00000001409FDA23: mov     rax, [rbp+0BE0h+var_B18]
 * 00000001409FDA2A: mov     [rax+20h], ecx
 * 00000001409FDA2D: mov     rax, [rbp+0BE0h+var_B18]
 * 00000001409FDA34: mov     ecx, [rbp+0BE0h+var_C58]
 * 00000001409FDA37: mov     [rax+24h], ecx
 * 00000001409FDA3A: mov     rax, [rbp+0BE0h+var_B18]
 * 00000001409FDA41: mov     [rax+28h], r10w
 * 00000001409FDA46: xor     eax, eax
 * 00000001409FDA48: cmp     dword ptr [rbp+0BE0h+var_BF8], eax
 * 00000001409FDA4B: mov     ecx, eax
 * 00000001409FDA4D: mov     rdx, [rbp+0BE0h+var_B18]
 * 00000001409FDA54: setnz   cl
 * 00000001409FDA57: movzx   eax, word ptr [rdx+2Ah]
 * 00000001409FDA5B: and     ax, r8w
 * 00000001409FDA5F: or      cx, ax
 * 00000001409FDA62: mov     [rdx+2Ah], cx
 * 00000001409FDA66: mov     rcx, [rbp+0BE0h+var_B18]
 * 00000001409FDA6D: lea     rdx, [rcx+30h]
 * 00000001409FDA71: mov     [rbp+0BE0h+var_C50], rdx
 * 00000001409FDA75: test    r9d, r9d
 * 00000001409FDA78: jz      short loc_1409FDA8B
 * 00000001409FDA7A: lea     r14d, [r9-1]
 * 00000001409FDA7E: add     r14, 7
 * 00000001409FDA82: and     r14, 0FFFFFFFFFFFFFFF8h
 * 00000001409FDA86: add     r14, rdx
 * 00000001409FDA89: jmp     short loc_1409FDA8E
 * 00000001409FDA8B: mov     r14, rdx
 * 00000001409FDA8E: movzx   eax, word ptr [rcx+28h]
 * 00000001409FDA92: mov     [rbp+0BE0h+var_C60], r14
 * 00000001409FDA96: lea     rcx, [rax+rax*2]
 * 00000001409FDA9A: xor     eax, eax
 * 00000001409FDA9C: test    r9d, r9d
 * 00000001409FDA9F: lea     r8, [r14+rcx*8]
 * 00000001409FDAA3: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FDAA7: mov     [rsp+0CE0h+var_C70], r8
 * 00000001409FDAAC: lea     r15d, [rax+0Ch]
 * 00000001409FDAB0: cmovz   r15, r12
 * 00000001409FDAB4: add     r15, r9
 * 00000001409FDAB7: mov     [rbp+0BE0h+var_BF8], r15
 * 00000001409FDABB: cmp     ax, r10w
 * 00000001409FDABF: jnb     short loc_1409FDAFD
 * 00000001409FDAC1: movzx   edx, r10w
 * 00000001409FDAC5: lea     rax, [r14+8]
 * 00000001409FDAC9: xor     r10d, r10d
 * 00000001409FDACC: mov     r12d, 80000000h
 * 00000001409FDAD2: lea     esi, [r10+2]
 * 00000001409FDAD6: lea     r11d, [r10+1]
 * 00000001409FDADA: mov     rcx, rsi
 * 00000001409FDADD: mov     [rax-8], r10d
 * 00000001409FDAE1: mov     [rax-4], r10d
 * 00000001409FDAE5: mov     [rax], r12d
 * 00000001409FDAE8: add     rax, 0Ch
 * 00000001409FDAEC: sub     rcx, r11
 * 00000001409FDAEF: jnz     short loc_1409FDADD
 * 00000001409FDAF1: sub     rdx, r11
 * 00000001409FDAF4: jnz     short loc_1409FDADA
 * 00000001409FDAF6: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FDAFB: xor     eax, eax
 * 00000001409FDAFD: cmp     r14, r8
 * 00000001409FDB00: jz      loc_1409FE3DC
 * 00000001409FDB06: mov     r12, [rsp+0CE0h+var_C88]
 * 00000001409FDB0B: jmp     short loc_1409FDB0F
 * 00000001409FDB0D: xor     eax, eax
 * 00000001409FDB0F: mov     r11d, eax
 * 00000001409FDB12: mov     eax, [r12+24h]
 * 00000001409FDB17: bt      eax, 19h
 * 00000001409FDB1B: jb      loc_1409FDD21
 * 00000001409FDB21: mov     ecx, [r12]
 * 00000001409FDB25: cmp     ecx, 54494E49h
 * 00000001409FDB2B: jnz     short loc_1409FDB3C
 * 00000001409FDB2D: cmp     dword ptr [r12+4], 4742444Bh
 * 00000001409FDB36: jz      loc_1409FDD21
 * 00000001409FDB3C: cmp     ecx, 45474150h
 * 00000001409FDB42: jnz     short loc_1409FDB74
 * 00000001409FDB44: movzx   eax, word ptr [r12+4]
 * 00000001409FDB4A: mov     edx, 7877h
 * 00000001409FDB4F: cmp     ax, dx
 * 00000001409FDB52: jz      loc_1409FDD21
 * 00000001409FDB58: mov     edx, 7277h
 * 00000001409FDB5D: cmp     ax, dx
 * 00000001409FDB60: jz      loc_1409FDD21
 * 00000001409FDB66: mov     edx, 7777h
 * 00000001409FDB6B: cmp     ax, dx
 * 00000001409FDB6E: jz      loc_1409FDD21
 * 00000001409FDB74: cmp     ecx, 41525245h
 * 00000001409FDB7A: jnz     short loc_1409FDB8D
 * 00000001409FDB7C: mov     eax, 4154h
 * 00000001409FDB81: cmp     [r12+4], ax
 * 00000001409FDB87: jz      loc_1409FDD21
 * 00000001409FDB8D: mov     rax, [r13+938h]
 * 00000001409FDB94: mov     r10d, 7
 * 00000001409FDB9A: mov     r8, [r13+930h]
 * 00000001409FDBA1: mov     r9, r12
 * 00000001409FDBA4: mov     [rbp+0BE0h+var_828], rax
 * 00000001409FDBAB: mov     rax, [r13+940h]
 * 00000001409FDBB2: mov     [rbp+0BE0h+var_820], rax
 * 00000001409FDBB9: lea     ebx, [r10-6]
 * 00000001409FDBBD: mov     rax, [r13+948h]
 * 00000001409FDBC4: mov     [rbp+0BE0h+var_818], rax
 * 00000001409FDBCB: mov     [rbp+0BE0h+var_830], r8
 * 00000001409FDBD2: movzx   edx, byte ptr [r9]
 * 00000001409FDBD6: add     r9, rbx
 * 00000001409FDBD9: movzx   eax, byte ptr [r8]
 * 00000001409FDBDD: add     r8, rbx
 * 00000001409FDBE0: cmp     rdx, rax
 * 00000001409FDBE3: jnz     short loc_1409FDBF4
 * 00000001409FDBE5: mov     eax, 0FFFFFFFFh
 * 00000001409FDBEA: add     r10d, eax
 * 00000001409FDBED: jnz     short loc_1409FDBD2
 * 00000001409FDBEF: jmp     loc_1409FDCA1
 * 00000001409FDBF4: mov     r9, [rbp+0BE0h+var_828]
 * 00000001409FDBFB: mov     r8d, 8
 * 00000001409FDC01: mov     r10, r12
 * 00000001409FDC04: mov     rcx, [r10]
 * 00000001409FDC07: add     r10, 8
 * 00000001409FDC0B: mov     rax, [r9]
 * 00000001409FDC0E: add     r9, 8
 * 00000001409FDC12: cmp     rcx, rax
 * 00000001409FDC15: jnz     short loc_1409FDC45
 * 00000001409FDC17: add     r8d, 0FFFFFFF8h
 * 00000001409FDC1B: cmp     r8d, 8
 * 00000001409FDC1F: jnb     short loc_1409FDC04
 * 00000001409FDC21: test    r8d, r8d
 * 00000001409FDC24: jz      short loc_1409FDCA1
 * 00000001409FDC26: movzx   edx, byte ptr [r10]
 * 00000001409FDC2A: add     r10, rbx
 * 00000001409FDC2D: movzx   eax, byte ptr [r9]
 * 00000001409FDC31: add     r9, rbx
 * 00000001409FDC34: cmp     rdx, rax
 * 00000001409FDC37: jnz     short loc_1409FDC45
 * 00000001409FDC39: mov     eax, 0FFFFFFFFh
 * 00000001409FDC3E: add     r8d, eax
 * 00000001409FDC41: jnz     short loc_1409FDC26
 * 00000001409FDC43: jmp     short loc_1409FDCA1
 * 00000001409FDC45: mov     r8, [rbp+0BE0h+var_820]
 * 00000001409FDC4C: mov     r10d, 4
 * 00000001409FDC52: mov     r9, r12
 * 00000001409FDC55: movzx   edx, byte ptr [r9]
 * 00000001409FDC59: add     r9, rbx
 * 00000001409FDC5C: movzx   eax, byte ptr [r8]
 * 00000001409FDC60: add     r8, rbx
 * 00000001409FDC63: cmp     rdx, rax
 * 00000001409FDC66: jnz     short loc_1409FDC74
 * 00000001409FDC68: mov     eax, 0FFFFFFFFh
 * 00000001409FDC6D: add     r10d, eax
 * 00000001409FDC70: jnz     short loc_1409FDC55
 * 00000001409FDC72: jmp     short loc_1409FDCA1
 * 00000001409FDC74: mov     r8, [rbp+0BE0h+var_818]
 * 00000001409FDC7B: mov     r10d, 6
 * 00000001409FDC81: mov     r9, r12
 * 00000001409FDC84: movzx   edx, byte ptr [r9]
 * 00000001409FDC88: add     r9, rbx
 * 00000001409FDC8B: movzx   eax, byte ptr [r8]
 * 00000001409FDC8F: add     r8, rbx
 * 00000001409FDC92: cmp     rdx, rax
 * 00000001409FDC95: jnz     short loc_1409FDCA4
 * 00000001409FDC97: mov     eax, 0FFFFFFFFh
 * 00000001409FDC9C: add     r10d, eax
 * 00000001409FDC9F: jnz     short loc_1409FDC84
 * 00000001409FDCA1: mov     r11d, ebx
 * 00000001409FDCA4: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FDCA8: mov     ecx, [r12+24h]
 * 00000001409FDCAD: xor     eax, eax
 * 00000001409FDCAF: test    ecx, ecx
 * 00000001409FDCB1: cmovs   r11d, ebx
 * 00000001409FDCB5: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 00000001409FDCBC: test    r11d, r11d
 * 00000001409FDCBF: jz      short loc_1409FDCEC
 * 00000001409FDCC1: cmp     dword ptr [r12], 54494E49h
 * 00000001409FDCC9: jnz     short loc_1409FDCEC
 * 00000001409FDCCB: cmp     dword ptr [r12+4], 4742444Bh
 * 00000001409FDCD4: jnz     short loc_1409FDCEC
 * 00000001409FDCD6: test    dword ptr [r13+994h], 2000h
 * 00000001409FDCE1: cmovnz  r11d, eax
 * 00000001409FDCE5: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 00000001409FDCEC: test    dword ptr [r13+994h], 4000h
 * 00000001409FDCF7: jz      short loc_1409FDD2E
 * 00000001409FDCF9: bt      ecx, 1Dh
 * 00000001409FDCFD: mov     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FDD02: jnb     short loc_1409FDD33
 * 00000001409FDD04: cmp     rcx, [r13+5E8h]
 * 00000001409FDD0B: jz      short loc_1409FDD16
 * 00000001409FDD0D: cmp     rcx, [r13+5F0h]
 * 00000001409FDD14: jnz     short loc_1409FDD33
 * 00000001409FDD16: mov     r11d, ebx
 * 00000001409FDD19: mov     dword ptr [rbp+0BE0h+arg_8], ebx
 * 00000001409FDD1F: jmp     short loc_1409FDD33
 * 00000001409FDD21: mov     ebx, 1
 * 00000001409FDD26: mov     r11d, ebx
 * 00000001409FDD29: jmp     loc_1409FDCA8
 * 00000001409FDD2E: mov     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FDD33: mov     ebx, [r12+0Ch]
 * 00000001409FDD38: mov     r12d, [r12+10h]
 * 00000001409FDD3D: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409FDD42: mov     r8, [rbp+0BE0h+var_C10]
 * 00000001409FDD46: mov     [rsp+0CE0h+var_C78], ebx
 * 00000001409FDD4A: mov     eax, [rax+8]
 * 00000001409FDD4D: cmp     r12d, eax
 * 00000001409FDD50: cmovbe  r12d, eax
 * 00000001409FDD54: add     r12d, ebx
 * 00000001409FDD57: mov     [rbp+0BE0h+var_BF0], r12d
 * 00000001409FDD5B: cmp     r9, r8
 * 00000001409FDD5E: jz      short loc_1409FDD69
 * 00000001409FDD60: mov     r13d, [r9]
 * 00000001409FDD63: mov     eax, [r9+4]
 * 00000001409FDD67: jmp     short loc_1409FDD6E
 * 00000001409FDD69: xor     eax, eax
 * 00000001409FDD6B: mov     r13d, eax
 * 00000001409FDD6E: mov     [rbp+0BE0h+var_BC4], eax
 * 00000001409FDD71: mov     [rbp+0BE0h+var_C58], ebx
 * 00000001409FDD74: cmp     r9, r8
 * 00000001409FDD77: jz      loc_1409FDF30
 * 00000001409FDD7D: cmp     r13d, ebx
 * 00000001409FDD80: jbe     loc_1409FDF30
 * 00000001409FDD86: cmp     eax, r12d
 * 00000001409FDD89: ja      loc_1409FDF30
 * 00000001409FDD8F: test    r11d, r11d
 * 00000001409FDD92: jnz     loc_1409FDF30
 * 00000001409FDD98: mov     [r14], ebx
 * 00000001409FDD9B: lea     rdx, [rbp+0BE0h+var_9C8]
 * 00000001409FDDA2: mov     [r14+4], r13d
 * 00000001409FDDA6: lea     r8, [rbp+0BE0h+var_7D0]
 * 00000001409FDDAD: mov     eax, [r14]
 * 00000001409FDDB0: mov     r10d, r13d
 * 00000001409FDDB3: sub     r10d, eax
 * 00000001409FDDB6: mov     [rbp+0BE0h+var_C58], r13d
 * 00000001409FDDBA: mov     r11d, r10d
 * 00000001409FDDBD: lea     r14, [rcx+rax]
 * 00000001409FDDC1: add     r11, r14
 * 00000001409FDDC4: xor     eax, eax
 * 00000001409FDDC6: mov     r9d, eax
 * 00000001409FDDC9: mov     rcx, [r8]
 * 00000001409FDDCC: mov     eax, [rdx]
 * 00000001409FDDCE: add     rax, rcx
 * 00000001409FDDD1: cmp     r14, rax
 * 00000001409FDDD4: jnb     short loc_1409FDDDF
 * 00000001409FDDD6: cmp     r11, rcx
 * 00000001409FDDD9: ja      loc_1409FDF28
 * 00000001409FDDDF: inc     r9d
 * 00000001409FDDE2: add     r8, 8
 * 00000001409FDDE6: add     rdx, 4
 * 00000001409FDDEA: cmp     r9d, 6
 * 00000001409FDDEE: jb      short loc_1409FDDC9
 * 00000001409FDDF0: mov     r15, [rbp+0BE0h+var_C20]
 * 00000001409FDDF4: mov     rbx, r14
 * 00000001409FDDF7: mov     rax, r14
 * 00000001409FDDFA: add     [r15+828h], r10d
 * 00000001409FDE01: mov     r12d, [r15+814h]
 * 00000001409FDE08: mov     r15, [r15+818h]
 * 00000001409FDE0F: cmp     r14, r11
 * 00000001409FDE12: jnb     short loc_1409FDE24
 * 00000001409FDE14: mov     ecx, 40h ; '@'
 * 00000001409FDE19: prefetchnta byte ptr [rax]
 * 00000001409FDE1C: add     rax, rcx
 * 00000001409FDE1F: cmp     rax, r11
 * 00000001409FDE22: jb      short loc_1409FDE19
 * 00000001409FDE24: mov     r9d, r10d
 * 00000001409FDE27: mov     r8, r15
 * 00000001409FDE2A: shr     r9d, 7
 * 00000001409FDE2E: mov     r11d, 1
 * 00000001409FDE34: test    r9d, r9d
 * 00000001409FDE37: jz      short loc_1409FDEA4
 * 00000001409FDE39: mov     rsi, 7010008004002001h
 * 00000001409FDE43: mov     edx, 8
 * 00000001409FDE48: mov     rax, [rbx]
 * 00000001409FDE4B: mov     ecx, r12d
 * 00000001409FDE4E: xor     rax, r8
 * 00000001409FDE51: mov     r8, [rbx+8]
 * 00000001409FDE55: rol     rax, cl
 * 00000001409FDE58: add     rbx, 10h
 * 00000001409FDE5C: xor     r8, rax
 * 00000001409FDE5F: rol     r8, cl
 * 00000001409FDE62: sub     rdx, r11
 * 00000001409FDE65: jnz     short loc_1409FDE48
 * 00000001409FDE67: mov     rcx, rbx
 * 00000001409FDE6A: sub     rcx, r14
 * 00000001409FDE6D: xor     rcx, r15
 * 00000001409FDE70: mov     rax, rcx
 * 00000001409FDE73: rol     rax, 11h
 * 00000001409FDE77: xor     rcx, rax
 * 00000001409FDE7A: mov     rax, rsi
 * 00000001409FDE7D: mul     rcx
 * 00000001409FDE80: xor     r12d, edx
 * 00000001409FDE83: mov     [rbp+0BE0h+var_1A8], rdx
 * 00000001409FDE8A: xor     r12d, eax
 * 00000001409FDE8D: mov     eax, 0FFFFFFFFh
 * 00000001409FDE92: and     r12d, 3Fh
 * 00000001409FDE96: cmovz   r12d, r11d
 * 00000001409FDE9A: add     r9d, eax
 * 00000001409FDE9D: jnz     short loc_1409FDE43
 * 00000001409FDE9F: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FDEA4: and     r10d, 7Fh
 * 00000001409FDEA8: cmp     r10d, 8
 * 00000001409FDEAC: jb      short loc_1409FDECB
 * 00000001409FDEAE: mov     edx, r10d
 * 00000001409FDEB1: shr     rdx, 3
 * 00000001409FDEB5: xor     r8, [rbx]
 * 00000001409FDEB8: mov     ecx, r12d
 * 00000001409FDEBB: rol     r8, cl
 * 00000001409FDEBE: add     rbx, 8
 * 00000001409FDEC2: add     r10d, 0FFFFFFF8h
 * 00000001409FDEC6: sub     rdx, r11
 * 00000001409FDEC9: jnz     short loc_1409FDEB5
 * 00000001409FDECB: test    r10d, r10d
 * 00000001409FDECE: jz      short loc_1409FDEEE
 * 00000001409FDED0: mov     esi, 0FFFFFFFFh
 * 00000001409FDED5: movzx   eax, byte ptr [rbx]
 * 00000001409FDED8: mov     ecx, r12d
 * 00000001409FDEDB: xor     r8, rax
 * 00000001409FDEDE: add     rbx, r11
 * 00000001409FDEE1: rol     r8, cl
 * 00000001409FDEE4: add     r10d, esi
 * 00000001409FDEE7: jnz     short loc_1409FDED5
 * 00000001409FDEE9: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FDEEE: mov     rax, r8
 * 00000001409FDEF1: shr     rax, 1Fh
 * 00000001409FDEF5: xor     edx, edx
 * 00000001409FDEF7: jmp     short loc_1409FDF00
 * 00000001409FDEF9: xor     r8d, eax
 * 00000001409FDEFC: shr     rax, 1Fh
 * 00000001409FDF00: test    rax, rax
 * 00000001409FDF03: jnz     short loc_1409FDEF9
 * 00000001409FDF05: mov     rax, [rbp+0BE0h+var_C60]
 * 00000001409FDF09: btr     r8d, 1Fh
 * 00000001409FDF0E: mov     r12d, [rbp+0BE0h+var_BF0]
 * 00000001409FDF12: mov     ebx, [rsp+0CE0h+var_C78]
 * 00000001409FDF16: mov     r15, [rbp+0BE0h+var_BF8]
 * 00000001409FDF1A: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FDF1E: mov     [rax+8], r8d
 * 00000001409FDF22: mov     r8, [rbp+0BE0h+var_C10]
 * 00000001409FDF26: jmp     short loc_1409FDF32
 * 00000001409FDF28: mov     r8, [rbp+0BE0h+var_C10]
 * 00000001409FDF2C: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FDF30: xor     edx, edx
 * 00000001409FDF32: cmp     r13d, ebx
 * 00000001409FDF35: jb      loc_1409FE1BF
 * 00000001409FDF3B: cmp     [rbp+0BE0h+var_BC4], r12d
 * 00000001409FDF3F: ja      loc_1409FE1BF
 * 00000001409FDF45: cmp     r9, r8
 * 00000001409FDF48: jz      loc_1409FE1BF
 * 00000001409FDF4E: mov     r13d, [r15+4]
 * 00000001409FDF52: cmp     r13d, r12d
 * 00000001409FDF55: ja      loc_1409FE1BF
 * 00000001409FDF5B: mov     rax, [rbp+0BE0h+var_C50]
 * 00000001409FDF5F: mov     ecx, 1
 * 00000001409FDF64: cmp     r15, r8
 * 00000001409FDF67: jz      loc_1409FE1BF
 * 00000001409FDF6D: cmp     dword ptr [rbp+0BE0h+arg_8], edx
 * 00000001409FDF73: jz      short loc_1409FDF7D
 * 00000001409FDF75: mov     r8b, 80h
 * 00000001409FDF78: jmp     loc_1409FE187
 * 00000001409FDF7D: mov     r15d, [r15]
 * 00000001409FDF80: mov     ebx, [r9+4]
 * 00000001409FDF84: mov     r11, [rbp+0BE0h+var_C20]
 * 00000001409FDF88: mov     [rbp+0BE0h+var_C58], r15d
 * 00000001409FDF8C: cmp     r15d, ebx
 * 00000001409FDF8F: jnb     short loc_1409FDFFB
 * 00000001409FDF91: test    dword ptr [r11+990h], 200000h
 * 00000001409FDF9C: jz      loc_140A0CB93
 * 00000001409FDFA2: xor     eax, eax
 * 00000001409FDFA4: cmp     [r11+8F8h], eax
 * 00000001409FDFAB: jnz     short loc_1409FDFFB
 * 00000001409FDFAD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FDFB7: xor     edx, edx
 * 00000001409FDFB9: add     rax, r11
 * 00000001409FDFBC: mov     rcx, r11
 * 00000001409FDFBF: mov     [r11+900h], rax
 * 00000001409FDFC6: xor     eax, eax
 * 00000001409FDFC8: mov     [r11+908h], rax
 * 00000001409FDFCF: mov     rax, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FDFD4: mov     qword ptr [r11+910h], 10Fh
 * 00000001409FDFDF: mov     [r11+918h], rax
 * 00000001409FDFE6: mov     eax, 1
 * 00000001409FDFEB: mov     [r11+8F8h], eax
 * 00000001409FDFF2: call    $$b8
 * 00000001409FDFF7: mov     r11, [rbp+0BE0h+var_C20]
 * 00000001409FDFFB: mov     r14, rbx
 * 00000001409FDFFE: lea     rdx, [rbp+0BE0h+var_9C8]
 * 00000001409FE005: add     r14, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FE00A: lea     r8, [rbp+0BE0h+var_7D0]
 * 00000001409FE011: mov     r9d, r15d
 * 00000001409FE014: sub     r9d, ebx
 * 00000001409FE017: mov     ebx, r9d
 * 00000001409FE01A: add     rbx, r14
 * 00000001409FE01D: xor     eax, eax
 * 00000001409FE01F: mov     r10d, eax
 * 00000001409FE022: mov     rcx, [r8]
 * 00000001409FE025: mov     eax, [rdx]
 * 00000001409FE027: add     rax, rcx
 * 00000001409FE02A: cmp     r14, rax
 * 00000001409FE02D: jnb     short loc_1409FE038
 * 00000001409FE02F: cmp     rbx, rcx
 * 00000001409FE032: ja      loc_1409FE171
 * 00000001409FE038: mov     eax, 4
 * 00000001409FE03D: inc     r10d
 * 00000001409FE040: add     rdx, rax
 * 00000001409FE043: add     r8, 8
 * 00000001409FE047: cmp     r10d, 6
 * 00000001409FE04B: jb      short loc_1409FE022
 * 00000001409FE04D: cmp     r9d, eax
 * 00000001409FE050: jb      loc_1409FE171
 * 00000001409FE056: add     [r11+828h], r9d
 * 00000001409FE05D: mov     rax, r14
 * 00000001409FE060: mov     r12d, [r11+814h]
 * 00000001409FE067: mov     r15, [r11+818h]
 * 00000001409FE06E: mov     r11, r14
 * 00000001409FE071: cmp     r14, rbx
 * 00000001409FE074: jnb     short loc_1409FE086
 * 00000001409FE076: mov     ecx, 40h ; '@'
 * 00000001409FE07B: prefetchnta byte ptr [rax]
 * 00000001409FE07E: add     rax, rcx
 * 00000001409FE081: cmp     rax, rbx
 * 00000001409FE084: jb      short loc_1409FE07B
 * 00000001409FE086: mov     r10d, r9d
 * 00000001409FE089: mov     r8, r15
 * 00000001409FE08C: shr     r10d, 7
 * 00000001409FE090: mov     ebx, 1
 * 00000001409FE095: test    r10d, r10d
 * 00000001409FE098: jz      short loc_1409FE105
 * 00000001409FE09A: mov     rsi, 7010008004002001h
 * 00000001409FE0A4: mov     edx, 8
 * 00000001409FE0A9: mov     rax, [r11]
 * 00000001409FE0AC: mov     ecx, r12d
 * 00000001409FE0AF: xor     rax, r8
 * 00000001409FE0B2: mov     r8, [r11+8]
 * 00000001409FE0B6: rol     rax, cl
 * 00000001409FE0B9: add     r11, 10h
 * 00000001409FE0BD: xor     r8, rax
 * 00000001409FE0C0: rol     r8, cl
 * 00000001409FE0C3: sub     rdx, rbx
 * 00000001409FE0C6: jnz     short loc_1409FE0A9
 * 00000001409FE0C8: mov     rcx, r11
 * 00000001409FE0CB: sub     rcx, r14
 * 00000001409FE0CE: xor     rcx, r15
 * 00000001409FE0D1: mov     rax, rcx
 * 00000001409FE0D4: rol     rax, 11h
 * 00000001409FE0D8: xor     rcx, rax
 * 00000001409FE0DB: mov     rax, rsi
 * 00000001409FE0DE: mul     rcx
 * 00000001409FE0E1: xor     r12d, edx
 * 00000001409FE0E4: mov     [rbp+0BE0h+var_690], rdx
 * 00000001409FE0EB: xor     r12d, eax
 * 00000001409FE0EE: mov     eax, 0FFFFFFFFh
 * 00000001409FE0F3: and     r12d, 3Fh
 * 00000001409FE0F7: cmovz   r12d, ebx
 * 00000001409FE0FB: add     r10d, eax
 * 00000001409FE0FE: jnz     short loc_1409FE0A4
 * 00000001409FE100: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FE105: and     r9d, 7Fh
 * 00000001409FE109: cmp     r9d, 8
 * 00000001409FE10D: jb      short loc_1409FE12C
 * 00000001409FE10F: mov     edx, r9d
 * 00000001409FE112: shr     rdx, 3
 * 00000001409FE116: xor     r8, [r11]
 * 00000001409FE119: mov     ecx, r12d
 * 00000001409FE11C: rol     r8, cl
 * 00000001409FE11F: add     r11, 8
 * 00000001409FE123: add     r9d, 0FFFFFFF8h
 * 00000001409FE127: sub     rdx, rbx
 * 00000001409FE12A: jnz     short loc_1409FE116
 * 00000001409FE12C: test    r9d, r9d
 * 00000001409FE12F: jz      short loc_1409FE150
 * 00000001409FE131: mov     esi, 0FFFFFFFFh
 * 00000001409FE136: movzx   eax, byte ptr [r11]
 * 00000001409FE13A: mov     ecx, r12d
 * 00000001409FE13D: xor     r8, rax
 * 00000001409FE140: add     r11, rbx
 * 00000001409FE143: rol     r8, cl
 * 00000001409FE146: add     r9d, esi
 * 00000001409FE149: jnz     short loc_1409FE136
 * 00000001409FE14B: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FE150: mov     rax, r8
 * 00000001409FE153: shr     rax, 7
 * 00000001409FE157: xor     edx, edx
 * 00000001409FE159: jmp     short loc_1409FE162
 * 00000001409FE15B: xor     r8b, al
 * 00000001409FE15E: shr     rax, 7
 * 00000001409FE162: test    rax, rax
 * 00000001409FE165: jnz     short loc_1409FE15B
 * 00000001409FE167: mov     r12d, [rbp+0BE0h+var_BF0]
 * 00000001409FE16B: and     r8b, 7Fh
 * 00000001409FE16F: jmp     short loc_1409FE176
 * 00000001409FE171: xor     edx, edx
 * 00000001409FE173: mov     r8b, 80h
 * 00000001409FE176: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FE17A: mov     ecx, 1
 * 00000001409FE17F: mov     r15, [rbp+0BE0h+var_BF8]
 * 00000001409FE183: mov     rax, [rbp+0BE0h+var_C50]
 * 00000001409FE187: mov     [rax], r8b
 * 00000001409FE18A: mov     r8d, 0Ch
 * 00000001409FE190: mov     rax, [rbp+0BE0h+var_C50]
 * 00000001409FE194: add     r9, r8
 * 00000001409FE197: add     r15, r8
 * 00000001409FE19A: mov     [rbp+0BE0h+var_C48], r9
 * 00000001409FE19E: mov     r8, [rbp+0BE0h+var_C10]
 * 00000001409FE1A2: add     rax, rcx
 * 00000001409FE1A5: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409FE1A9: mov     [rbp+0BE0h+var_BF8], r15
 * 00000001409FE1AD: cmp     r15, r8
 * 00000001409FE1B0: jz      short loc_1409FE1B6
 * 00000001409FE1B2: mov     r13d, [r15+4]
 * 00000001409FE1B6: cmp     r13d, r12d
 * 00000001409FE1B9: jbe     loc_1409FDF64
 * 00000001409FE1BF: mov     r14, [rbp+0BE0h+var_C60]
 * 00000001409FE1C3: xor     eax, eax
 * 00000001409FE1C5: cmp     dword ptr [rbp+0BE0h+arg_8], eax
 * 00000001409FE1CB: jnz     loc_1409FE367
 * 00000001409FE1D1: mov     eax, [rbp+0BE0h+var_C58]
 * 00000001409FE1D4: cmp     eax, r12d
 * 00000001409FE1D7: jz      loc_1409FE367
 * 00000001409FE1DD: mov     [r14+0Ch], eax
 * 00000001409FE1E1: lea     rdx, [rbp+0BE0h+var_9C8]
 * 00000001409FE1E8: mov     [r14+10h], r12d
 * 00000001409FE1EC: lea     r8, [rbp+0BE0h+var_7D0]
 * 00000001409FE1F3: mov     eax, [r14+0Ch]
 * 00000001409FE1F7: mov     r9d, r12d
 * 00000001409FE1FA: mov     ebx, eax
 * 00000001409FE1FC: sub     r9d, eax
 * 00000001409FE1FF: add     rbx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FE204: mov     r11d, r9d
 * 00000001409FE207: add     r11, rbx
 * 00000001409FE20A: xor     eax, eax
 * 00000001409FE20C: mov     r10d, eax
 * 00000001409FE20F: mov     rcx, [r8]
 * 00000001409FE212: mov     eax, [rdx]
 * 00000001409FE214: add     rax, rcx
 * 00000001409FE217: cmp     rbx, rax
 * 00000001409FE21A: jnb     short loc_1409FE225
 * 00000001409FE21C: cmp     r11, rcx
 * 00000001409FE21F: ja      loc_1409FE363
 * 00000001409FE225: inc     r10d
 * 00000001409FE228: add     r8, 8
 * 00000001409FE22C: add     rdx, 4
 * 00000001409FE230: cmp     r10d, 6
 * 00000001409FE234: jb      short loc_1409FE20F
 * 00000001409FE236: mov     r13, [rbp+0BE0h+var_C20]
 * 00000001409FE23A: mov     r10, rbx
 * 00000001409FE23D: mov     rax, rbx
 * 00000001409FE240: add     [r13+828h], r9d
 * 00000001409FE247: mov     r14d, [r13+814h]
 * 00000001409FE24E: mov     r15, [r13+818h]
 * 00000001409FE255: cmp     rbx, r11
 * 00000001409FE258: jnb     short loc_1409FE26A
 * 00000001409FE25A: mov     ecx, 40h ; '@'
 * 00000001409FE25F: prefetchnta byte ptr [rax]
 * 00000001409FE262: add     rax, rcx
 * 00000001409FE265: cmp     rax, r11
 * 00000001409FE268: jb      short loc_1409FE25F
 * 00000001409FE26A: mov     r11d, r9d
 * 00000001409FE26D: mov     r8, r15
 * 00000001409FE270: shr     r11d, 7
 * 00000001409FE274: test    r11d, r11d
 * 00000001409FE277: jz      short loc_1409FE2EE
 * 00000001409FE279: mov     r13, 7010008004002001h
 * 00000001409FE283: mov     edx, 8
 * 00000001409FE288: lea     esi, [rdx-7]
 * 00000001409FE28B: mov     rax, [r10]
 * 00000001409FE28E: mov     ecx, r14d
 * 00000001409FE291: xor     rax, r8
 * 00000001409FE294: mov     r8, [r10+8]
 * 00000001409FE298: rol     rax, cl
 * 00000001409FE29B: add     r10, 10h
 * 00000001409FE29F: xor     r8, rax
 * 00000001409FE2A2: rol     r8, cl
 * 00000001409FE2A5: sub     rdx, rsi
 * 00000001409FE2A8: jnz     short loc_1409FE28B
 * 00000001409FE2AA: mov     rcx, r10
 * 00000001409FE2AD: sub     rcx, rbx
 * 00000001409FE2B0: xor     rcx, r15
 * 00000001409FE2B3: mov     rax, rcx
 * 00000001409FE2B6: rol     rax, 11h
 * 00000001409FE2BA: xor     rcx, rax
 * 00000001409FE2BD: mov     rax, r13
 * 00000001409FE2C0: mul     rcx
 * 00000001409FE2C3: xor     r14d, edx
 * 00000001409FE2C6: mov     [rbp+0BE0h+var_688], rdx
 * 00000001409FE2CD: xor     r14d, eax
 * 00000001409FE2D0: mov     rax, rsi
 * 00000001409FE2D3: and     r14d, 3Fh
 * 00000001409FE2D7: cmovz   r14d, eax
 * 00000001409FE2DB: mov     eax, 0FFFFFFFFh
 * 00000001409FE2E0: add     r11d, eax
 * 00000001409FE2E3: jnz     short loc_1409FE283
 * 00000001409FE2E5: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FE2EA: mov     r13, [rbp+0BE0h+var_C20]
 * 00000001409FE2EE: and     r9d, 7Fh
 * 00000001409FE2F2: mov     r11d, 1
 * 00000001409FE2F8: cmp     r9d, 8
 * 00000001409FE2FC: jb      short loc_1409FE31B
 * 00000001409FE2FE: mov     edx, r9d
 * 00000001409FE301: shr     rdx, 3
 * 00000001409FE305: xor     r8, [r10]
 * 00000001409FE308: mov     ecx, r14d
 * 00000001409FE30B: rol     r8, cl
 * 00000001409FE30E: add     r10, 8
 * 00000001409FE312: add     r9d, 0FFFFFFF8h
 * 00000001409FE316: sub     rdx, r11
 * 00000001409FE319: jnz     short loc_1409FE305
 * 00000001409FE31B: test    r9d, r9d
 * 00000001409FE31E: jz      short loc_1409FE33F
 * 00000001409FE320: mov     r12d, 0FFFFFFFFh
 * 00000001409FE326: movzx   eax, byte ptr [r10]
 * 00000001409FE32A: mov     ecx, r14d
 * 00000001409FE32D: xor     r8, rax
 * 00000001409FE330: add     r10, r11
 * 00000001409FE333: rol     r8, cl
 * 00000001409FE336: add     r9d, r12d
 * 00000001409FE339: jnz     short loc_1409FE326
 * 00000001409FE33B: mov     r12d, [rbp+0BE0h+var_BF0]
 * 00000001409FE33F: mov     rax, r8
 * 00000001409FE342: jmp     short loc_1409FE347
 * 00000001409FE344: xor     r8d, eax
 * 00000001409FE347: shr     rax, 1Fh
 * 00000001409FE34B: test    rax, rax
 * 00000001409FE34E: jnz     short loc_1409FE344
 * 00000001409FE350: mov     r14, [rbp+0BE0h+var_C60]
 * 00000001409FE354: btr     r8d, 1Fh
 * 00000001409FE359: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FE35D: mov     [r14+14h], r8d
 * 00000001409FE361: jmp     short loc_1409FE36B
 * 00000001409FE363: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FE367: mov     r13, [rbp+0BE0h+var_C20]
 * 00000001409FE36B: mov     rdx, [rbp+0BE0h+var_C10]
 * 00000001409FE36F: mov     r15, [rbp+0BE0h+var_BF8]
 * 00000001409FE373: cmp     r9, rdx
 * 00000001409FE376: jz      short loc_1409FE3B7
 * 00000001409FE378: mov     eax, [r9]
 * 00000001409FE37B: mov     ecx, [r9+4]
 * 00000001409FE37F: cmp     eax, [rsp+0CE0h+var_C78]
 * 00000001409FE383: jb      short loc_1409FE3B7
 * 00000001409FE385: cmp     ecx, r12d
 * 00000001409FE388: ja      short loc_1409FE3B7
 * 00000001409FE38A: cmp     r15, rdx
 * 00000001409FE38D: jz      short loc_1409FE3AB
 * 00000001409FE38F: mov     rax, [rbp+0BE0h+var_C50]
 * 00000001409FE393: mov     byte ptr [rax], 80h
 * 00000001409FE396: inc     rax
 * 00000001409FE399: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409FE39D: mov     eax, 0Ch
 * 00000001409FE3A2: add     r15, rax
 * 00000001409FE3A5: mov     [rbp+0BE0h+var_BF8], r15
 * 00000001409FE3A9: jmp     short loc_1409FE3B0
 * 00000001409FE3AB: mov     eax, 0Ch
 * 00000001409FE3B0: add     r9, rax
 * 00000001409FE3B3: mov     [rbp+0BE0h+var_C48], r9
 * 00000001409FE3B7: mov     r12, [rsp+0CE0h+var_C88]
 * 00000001409FE3BC: add     r14, 18h
 * 00000001409FE3C0: add     r12, 28h ; '('
 * 00000001409FE3C4: mov     [rbp+0BE0h+var_C60], r14
 * 00000001409FE3C8: mov     [rsp+0CE0h+var_C88], r12
 * 00000001409FE3CD: cmp     r14, [rsp+0CE0h+var_C70]
 * 00000001409FE3D2: jnz     loc_1409FDB0D
 * 00000001409FE3D8: mov     rbx, [rbp+0BE0h+var_B98]
 * 00000001409FE3DC: mov     r14, [rbp+0BE0h+var_C08]
 * 00000001409FE3E0: xor     eax, eax
 * 00000001409FE3E2: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409FE3E9: mov     ecx, eax
 * 00000001409FE3EB: mov     rdx, [rsp+0CE0h+var_C90]
 * 00000001409FE3F0: mov     r8d, 80000000h
 * 00000001409FE3F6: sub     rdx, rsi
 * 00000001409FE3F9: mov     [rsp+0CE0h+var_C80], rbx
 * 00000001409FE3FE: add     rdx, rbx
 * 00000001409FE401: mov     rsi, rbx
 * 00000001409FE404: mov     [rsp+0CE0h+var_C90], rdx
 * 00000001409FE409: lea     eax, [rcx+r8]
 * 00000001409FE40D: test    r8d, eax
 * 00000001409FE410: jnz     short loc_1409FE41A
 * 00000001409FE412: cmp     ecx, 0C000010Eh
 * 00000001409FE418: jnz     short loc_1409FE41E
 * 00000001409FE41A: mov     [rdx+28h], r14
 * 00000001409FE41E: mov     r13d, [rbp+0BE0h+var_BE0]
 * 00000001409FE422: jmp     loc_1409FC677
 * 00000001409FE427: mov     rbx, r13
 * 00000001409FE42A: mov     [rbp+0BE0h+var_BE0], eax
 * 00000001409FE42D: mov     r13, rax
 * 00000001409FE430: mov     r15d, eax
 * 00000001409FE433: mov     r12d, eax
 * 00000001409FE436: jmp     short loc_1409FE43A
 * 00000001409FE438: xor     eax, eax
 * 00000001409FE43A: mov     [rbp+0BE0h+var_B20], eax
 * 00000001409FE440: mov     rax, [rsi+2F8h]
 * 00000001409FE447: lea     r8, [rbp+0BE0h+var_A18]
 * 00000001409FE44E: lea     rdx, [rbp+0BE0h+var_B20]
 * 00000001409FE455: mov     ecx, r12d
 * 00000001409FE458: call    KeGuardDispatchICall
 * 00000001409FE45D: test    eax, eax
 * 00000001409FE45F: jz      loc_1409FE5A7
 * 00000001409FE465: mov     rax, [rsi+2D8h]
 * 00000001409FE46C: mov     rcx, [rbp+0BE0h+var_A18]
 * 00000001409FE473: call    KeGuardDispatchICall
 * 00000001409FE478: mov     r14, rax
 * 00000001409FE47B: test    rax, rax
 * 00000001409FE47E: jz      short loc_1409FE440
 * 00000001409FE480: mov     rax, [rsi+2E0h]
 * 00000001409FE487: mov     edi, 1
 * 00000001409FE48C: add     r15d, edi
 * 00000001409FE48F: mov     rcx, r14
 * 00000001409FE492: mov     [rbp+0BE0h+var_BE0], r15d
 * 00000001409FE496: call    KeGuardDispatchICall
 * 00000001409FE49B: mov     r15, rax
 * 00000001409FE49E: lea     rdx, [rbp+0BE0h+var_680]
 * 00000001409FE4A5: mov     rax, [rsi+208h]
 * 00000001409FE4AC: mov     rcx, r15
 * 00000001409FE4AF: call    KeGuardDispatchICall
 * 00000001409FE4B4: test    rax, rax
 * 00000001409FE4B7: jz      short loc_1409FE4D8
 * 00000001409FE4B9: mov     rax, [rsi+2E8h]
 * 00000001409FE4C0: mov     rdx, r14
 * 00000001409FE4C3: mov     rcx, [rbp+0BE0h+var_A18]
 * 00000001409FE4CA: call    KeGuardDispatchICall
 * 00000001409FE4CF: mov     r15d, [rbp+0BE0h+var_BE0]
 * 00000001409FE4D3: jmp     loc_1409FE440
 * 00000001409FE4D8: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FE4E2: jz      short loc_1409FE52D
 * 00000001409FE4E4: mov     rcx, [rsi+0A80h]
 * 00000001409FE4EB: mov     edx, 30h ; '0'
 * 00000001409FE4F0: lea     r8d, [rdx-2Ah]
 * 00000001409FE4F4: mov     rax, [rbx]
 * 00000001409FE4F7: add     edx, 0FFFFFFF8h
 * 00000001409FE4FA: mov     [rcx], rax
 * 00000001409FE4FD: add     rbx, 8
 * 00000001409FE501: add     rcx, 8
 * 00000001409FE505: sub     r8, rdi
 * 00000001409FE508: jnz     short loc_1409FE4F4
 * 00000001409FE50A: test    edx, edx
 * 00000001409FE50C: jz      short loc_1409FE526
 * 00000001409FE50E: mov     esi, 0FFFFFFFFh
 * 00000001409FE513: mov     al, [rbx]
 * 00000001409FE515: add     rbx, rdi
 * 00000001409FE518: mov     [rcx], al
 * 00000001409FE51A: add     rcx, rdi
 * 00000001409FE51D: add     edx, esi
 * 00000001409FE51F: jnz     short loc_1409FE513
 * 00000001409FE521: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FE526: mov     rbx, [rsi+0A80h]
 * 00000001409FE52D: mov     [rbx+18h], r15
 * 00000001409FE531: mov     rax, [rsi+590h]
 * 00000001409FE538: mov     [rax], rbx
 * 00000001409FE53B: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FE542: mov     rax, [rsi+590h]
 * 00000001409FE549: mov     [rax+8], r15
 * 00000001409FE54D: mov     dword ptr [rax+14h], 1000h
 * 00000001409FE554: xor     eax, eax
 * 00000001409FE556: cmp     [rsi+8F8h], eax
 * 00000001409FE55C: jnz     short loc_1409FE5A7
 * 00000001409FE55E: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FE568: xor     edx, edx
 * 00000001409FE56A: add     rax, rsi
 * 00000001409FE56D: mov     rcx, rsi
 * 00000001409FE570: mov     [rsi+900h], rax
 * 00000001409FE577: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FE581: add     rax, rbx
 * 00000001409FE584: mov     [rsi+908h], rax
 * 00000001409FE58B: movsxd  rax, dword ptr [rbx]
 * 00000001409FE58E: mov     [rsi+910h], rax
 * 00000001409FE595: mov     [rsi+918h], r13
 * 00000001409FE59C: mov     [rsi+8F8h], edi
 * 00000001409FE5A2: call    $$b8
 * 00000001409FE5A7: mov     r15d, [rbp+0BE0h+var_BE0]
 * 00000001409FE5AB: mov     edx, 1
 * 00000001409FE5B0: add     r12d, edx
 * 00000001409FE5B3: add     r13, rdx
 * 00000001409FE5B6: cmp     r12d, 3
 * 00000001409FE5BA: jb      loc_1409FE438
 * 00000001409FE5C0: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FE5C7: mov     r13d, r15d
 * 00000001409FE5CA: jmp     loc_1409FE885
 * 00000001409FE5CF: mov     rbx, r13
 * 00000001409FE5D2: mov     [rbp+0BE0h+var_950], rax
 * 00000001409FE5D9: mov     r13d, eax
 * 00000001409FE5DC: mov     r15, cr8
 * 00000001409FE5E0: mov     [rbp+0BE0h+arg_8], r15
 * 00000001409FE5E7: mov     cr8, r8
 * 00000001409FE5EB: mov     rax, [rsi+308h]
 * 00000001409FE5F2: lea     rcx, [rbp+0BE0h+var_950]
 * 00000001409FE5F9: call    KeGuardDispatchICall
 * 00000001409FE5FE: mov     r14, rax
 * 00000001409FE601: test    rax, rax
 * 00000001409FE604: jz      loc_1409FE72C
 * 00000001409FE60A: mov     edi, 1
 * 00000001409FE60F: mov     rax, [rsi+208h]
 * 00000001409FE616: lea     rdx, [rbp+0BE0h+var_678]
 * 00000001409FE61D: mov     rcx, r14
 * 00000001409FE620: add     r13d, edi
 * 00000001409FE623: call    KeGuardDispatchICall
 * 00000001409FE628: test    rax, rax
 * 00000001409FE62B: jnz     loc_1409FE6FF
 * 00000001409FE631: test    [rsi+990h], r12d
 * 00000001409FE638: jz      short loc_1409FE681
 * 00000001409FE63A: mov     rcx, [rsi+0A80h]
 * 00000001409FE641: lea     edx, [rax+30h]
 * 00000001409FE644: lea     r8d, [rax+6]
 * 00000001409FE648: mov     rax, [rbx]
 * 00000001409FE64B: add     edx, 0FFFFFFF8h
 * 00000001409FE64E: mov     [rcx], rax
 * 00000001409FE651: add     rbx, 8
 * 00000001409FE655: add     rcx, 8
 * 00000001409FE659: sub     r8, rdi
 * 00000001409FE65C: jnz     short loc_1409FE648
 * 00000001409FE65E: test    edx, edx
 * 00000001409FE660: jz      short loc_1409FE67A
 * 00000001409FE662: mov     esi, 0FFFFFFFFh
 * 00000001409FE667: mov     al, [rbx]
 * 00000001409FE669: add     rbx, rdi
 * 00000001409FE66C: mov     [rcx], al
 * 00000001409FE66E: add     rcx, rdi
 * 00000001409FE671: add     edx, esi
 * 00000001409FE673: jnz     short loc_1409FE667
 * 00000001409FE675: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FE67A: mov     rbx, [rsi+0A80h]
 * 00000001409FE681: mov     [rbx+18h], r14
 * 00000001409FE685: mov     rax, [rsi+590h]
 * 00000001409FE68C: mov     [rax], rbx
 * 00000001409FE68F: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FE696: mov     rax, [rsi+590h]
 * 00000001409FE69D: mov     [rax+8], r14
 * 00000001409FE6A1: mov     dword ptr [rax+14h], 1000h
 * 00000001409FE6A8: xor     eax, eax
 * 00000001409FE6AA: cmp     [rsi+8F8h], eax
 * 00000001409FE6B0: jnz     short loc_1409FE6FF
 * 00000001409FE6B2: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FE6BC: xor     edx, edx
 * 00000001409FE6BE: add     rax, rsi
 * 00000001409FE6C1: mov     rcx, rsi
 * 00000001409FE6C4: mov     [rsi+900h], rax
 * 00000001409FE6CB: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FE6D5: add     rax, rbx
 * 00000001409FE6D8: mov     [rsi+908h], rax
 * 00000001409FE6DF: movsxd  rax, dword ptr [rbx]
 * 00000001409FE6E2: mov     [rsi+910h], rax
 * 00000001409FE6E9: mov     qword ptr [rsi+918h], 4
 * 00000001409FE6F4: mov     [rsi+8F8h], edi
 * 00000001409FE6FA: call    $$b8
 * 00000001409FE6FF: mov     rax, [rsi+308h]
 * 00000001409FE706: lea     rcx, [rbp+0BE0h+var_950]
 * 00000001409FE70D: call    KeGuardDispatchICall
 * 00000001409FE712: mov     r14, rax
 * 00000001409FE715: test    rax, rax
 * 00000001409FE718: jnz     loc_1409FE60F
 * 00000001409FE71E: mov     r15, [rbp+0BE0h+arg_8]
 * 00000001409FE725: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FE72C: movzx   eax, r15b
 * 00000001409FE730: mov     cr8, rax
 * 00000001409FE734: jmp     loc_1409FE880
 * 00000001409FE739: mov     [rbp+0BE0h+var_948], rax
 * 00000001409FE740: lea     rcx, [rbp+0BE0h+var_948]
 * 00000001409FE747: mov     rbx, r13
 * 00000001409FE74A: mov     r13d, eax
 * 00000001409FE74D: mov     rax, [rsi+300h]
 * 00000001409FE754: call    KeGuardDispatchICall
 * 00000001409FE759: mov     r14, rax
 * 00000001409FE75C: test    rax, rax
 * 00000001409FE75F: jz      loc_1409FE880
 * 00000001409FE765: mov     edi, 1
 * 00000001409FE76A: mov     rax, [rsi+208h]
 * 00000001409FE771: lea     rdx, [rbp+0BE0h+var_670]
 * 00000001409FE778: mov     rcx, r14
 * 00000001409FE77B: add     r13d, edi
 * 00000001409FE77E: call    KeGuardDispatchICall
 * 00000001409FE783: test    rax, rax
 * 00000001409FE786: jnz     loc_1409FE85A
 * 00000001409FE78C: test    [rsi+990h], r12d
 * 00000001409FE793: jz      short loc_1409FE7DC
 * 00000001409FE795: mov     rcx, [rsi+0A80h]
 * 00000001409FE79C: lea     edx, [rax+30h]
 * 00000001409FE79F: lea     r8d, [rax+6]
 * 00000001409FE7A3: mov     rax, [rbx]
 * 00000001409FE7A6: add     edx, 0FFFFFFF8h
 * 00000001409FE7A9: mov     [rcx], rax
 * 00000001409FE7AC: add     rbx, 8
 * 00000001409FE7B0: add     rcx, 8
 * 00000001409FE7B4: sub     r8, rdi
 * 00000001409FE7B7: jnz     short loc_1409FE7A3
 * 00000001409FE7B9: test    edx, edx
 * 00000001409FE7BB: jz      short loc_1409FE7D5
 * 00000001409FE7BD: mov     esi, 0FFFFFFFFh
 * 00000001409FE7C2: mov     al, [rbx]
 * 00000001409FE7C4: add     rbx, rdi
 * 00000001409FE7C7: mov     [rcx], al
 * 00000001409FE7C9: add     rcx, rdi
 * 00000001409FE7CC: add     edx, esi
 * 00000001409FE7CE: jnz     short loc_1409FE7C2
 * 00000001409FE7D0: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FE7D5: mov     rbx, [rsi+0A80h]
 * 00000001409FE7DC: mov     [rbx+18h], r14
 * 00000001409FE7E0: mov     rax, [rsi+590h]
 * 00000001409FE7E7: mov     [rax], rbx
 * 00000001409FE7EA: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FE7F1: mov     rax, [rsi+590h]
 * 00000001409FE7F8: mov     [rax+8], r14
 * 00000001409FE7FC: mov     dword ptr [rax+14h], 1000h
 * 00000001409FE803: xor     eax, eax
 * 00000001409FE805: cmp     [rsi+8F8h], eax
 * 00000001409FE80B: jnz     short loc_1409FE85A
 * 00000001409FE80D: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FE817: xor     edx, edx
 * 00000001409FE819: add     rax, rsi
 * 00000001409FE81C: mov     rcx, rsi
 * 00000001409FE81F: mov     [rsi+900h], rax
 * 00000001409FE826: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FE830: add     rax, rbx
 * 00000001409FE833: mov     [rsi+908h], rax
 * 00000001409FE83A: movsxd  rax, dword ptr [rbx]
 * 00000001409FE83D: mov     [rsi+910h], rax
 * 00000001409FE844: mov     qword ptr [rsi+918h], 3
 * 00000001409FE84F: mov     [rsi+8F8h], edi
 * 00000001409FE855: call    $$b8
 * 00000001409FE85A: mov     rax, [rsi+300h]
 * 00000001409FE861: lea     rcx, [rbp+0BE0h+var_948]
 * 00000001409FE868: call    KeGuardDispatchICall
 * 00000001409FE86D: mov     r14, rax
 * 00000001409FE870: test    rax, rax
 * 00000001409FE873: jnz     loc_1409FE76A
 * 00000001409FE879: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FE880: mov     edx, 1
 * 00000001409FE885: shl     r13d, 0Ch
 * 00000001409FE889: add     [rsi+828h], r13d
 * 00000001409FE890: add     [rsi+824h], edx
 * 00000001409FE896: mov     eax, [rsi+82Ch]
 * 00000001409FE89C: cmp     [rsi+828h], eax
 * 00000001409FE8A2: jge     short loc_1409FE8C0
 * 00000001409FE8A4: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FE8A9: mov     r8d, 0Ch
 * 00000001409FE8AF: mov     r12d, 40000000h
 * 00000001409FE8B5: jmp     loc_1409FC220
 * 00000001409FE8BA: mov     [rsi+824h], eax
 * 00000001409FE8C0: mov     [rsp+0CE0h+var_C80], rsi
 * 00000001409FE8C5: jmp     loc_1409FA318
 * 00000001409FE8CA: mov     edx, [r13+2Ch]
 * 00000001409FE8CE: lea     rcx, [rbp+0BE0h+var_310]
 * 00000001409FE8D5: mov     rax, [rsi+1A0h]
 * 00000001409FE8DC: mov     ebx, [r13+28h]
 * 00000001409FE8E0: call    KeGuardDispatchICall
 * 00000001409FE8E5: mov     rax, [rsi+1D0h]
 * 00000001409FE8EC: lea     rdx, [rbp+0BE0h+var_300]
 * 00000001409FE8F3: lea     rcx, [rbp+0BE0h+var_310]
 * 00000001409FE8FA: call    KeGuardDispatchICall
 * 00000001409FE8FF: cmp     dword ptr [rbp+0BE0h+arg_8], 26h ; '&'
 * 00000001409FE906: jz      short loc_1409FE916
 * 00000001409FE908: test    ebx, ebx
 * 00000001409FE90A: jz      short loc_1409FE911
 * 00000001409FE90C: mov     rbx, cr4
 * 00000001409FE90F: jmp     short loc_1409FE925
 * 00000001409FE911: mov     rbx, cr0
 * 00000001409FE914: jmp     short loc_1409FE925
 * 00000001409FE916: xor     ecx, ecx
 * 00000001409FE918: xgetbv
 * 00000001409FE91B: shl     rdx, 20h
 * 00000001409FE91F: or      rdx, rax
 * 00000001409FE922: mov     rbx, rdx
 * 00000001409FE925: mov     rax, [rsi+198h]
 * 00000001409FE92C: lea     rcx, [rbp+0BE0h+var_300]
 * 00000001409FE933: call    KeGuardDispatchICall
 * 00000001409FE938: mov     r8, [r13+18h]
 * 00000001409FE93C: xor     r15d, r15d
 * 00000001409FE93F: mov     rcx, [r13+20h]
 * 00000001409FE943: and     r8, rbx
 * 00000001409FE946: cmp     r8, rcx
 * 00000001409FE949: jz      loc_1409FA31B
 * 00000001409FE94F: mov     eax, [r13+28h]
 * 00000001409FE953: mov     edx, [r13+2Ch]
 * 00000001409FE957: shl     rdx, 20h
 * 00000001409FE95B: or      rdx, rax
 * 00000001409FE95E: mov     eax, [rsi+8F8h]
 * 00000001409FE964: test    eax, eax
 * 00000001409FE966: jnz     loc_1409FA31B
 * 00000001409FE96C: mov     rax, [rsi+590h]
 * 00000001409FE973: xor     rcx, r8
 * 00000001409FE976: mov     [rax+18h], rcx
 * 00000001409FE97A: mov     eax, [rsi+8F8h]
 * 00000001409FE980: test    eax, eax
 * 00000001409FE982: jnz     loc_1409FA31B
 * 00000001409FE988: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FE992: add     rax, rsi
 * 00000001409FE995: mov     [rsi+900h], rax
 * 00000001409FE99C: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FE9A6: add     rax, r13
 * 00000001409FE9A9: mov     [rsi+908h], rax
 * 00000001409FE9B0: movsxd  rax, dword ptr [r13+0]
 * 00000001409FE9B4: mov     [rsi+910h], rax
 * 00000001409FE9BB: mov     [rsi+918h], rdx
 * 00000001409FE9C2: jmp     loc_1409FA6E7
 * 00000001409FE9C7: cmp     dword ptr [rsi+958h], 0Bh
 * 00000001409FE9CE: jnz     loc_1409FA318
 * 00000001409FE9D4: add     dword ptr [rsi+828h], 100h
 * 00000001409FE9DE: mov     r15, [rsi+588h]
 * 00000001409FE9E5: mov     rax, [rsi+2D8h]
 * 00000001409FE9EC: mov     rcx, r15
 * 00000001409FE9EF: call    KeGuardDispatchICall
 * 00000001409FE9F4: mov     r14, rax
 * 00000001409FE9F7: test    rax, rax
 * 00000001409FE9FA: jz      loc_1409FA318
 * 00000001409FEA00: mov     rax, [rsi+2E0h]
 * 00000001409FEA07: mov     rcx, r14
 * 00000001409FEA0A: call    KeGuardDispatchICall
 * 00000001409FEA0F: mov     rbx, rax
 * 00000001409FEA12: xor     edx, edx
 * 00000001409FEA14: mov     rax, [r13+18h]
 * 00000001409FEA18: test    rax, rax
 * 00000001409FEA1B: jz      short loc_1409FEA84
 * 00000001409FEA1D: cmp     rax, rbx
 * 00000001409FEA20: jz      loc_1409FEB04
 * 00000001409FEA26: xor     eax, eax
 * 00000001409FEA28: cmp     [rsi+8F8h], eax
 * 00000001409FEA2E: jnz     loc_1409FEB04
 * 00000001409FEA34: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FEA3E: mov     rcx, rsi
 * 00000001409FEA41: add     rax, rsi
 * 00000001409FEA44: mov     [rsi+900h], rax
 * 00000001409FEA4B: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FEA55: add     rax, r13
 * 00000001409FEA58: mov     [rsi+908h], rax
 * 00000001409FEA5F: movsxd  rax, dword ptr [r13+0]
 * 00000001409FEA63: mov     [rsi+910h], rax
 * 00000001409FEA6A: lea     eax, [rdx+1]
 * 00000001409FEA6D: mov     [rsi+918h], rbx
 * 00000001409FEA74: mov     [rsi+8F8h], eax
 * 00000001409FEA7A: call    $$b8
 * 00000001409FEA7F: jmp     loc_1409FEB04
 * 00000001409FEA84: mov     eax, [rsi+974h]
 * 00000001409FEA8A: mov     rcx, [rsi+978h]
 * 00000001409FEA91: test    rax, rax
 * 00000001409FEA94: jz      short loc_1409FEAA7
 * 00000001409FEA96: lea     rdx, [rax-1]
 * 00000001409FEA9A: add     rdx, rcx
 * 00000001409FEA9D: cmp     rbx, rcx
 * 00000001409FEAA0: jb      short loc_1409FEAA7
 * 00000001409FEAA2: cmp     rbx, rdx
 * 00000001409FEAA5: jbe     short loc_1409FEB00
 * 00000001409FEAA7: xor     eax, eax
 * 00000001409FEAA9: cmp     [rsi+8F8h], eax
 * 00000001409FEAAF: jnz     short loc_1409FEB00
 * 00000001409FEAB1: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FEABB: xor     edx, edx
 * 00000001409FEABD: add     rax, rsi
 * 00000001409FEAC0: mov     rcx, rsi
 * 00000001409FEAC3: mov     [rsi+900h], rax
 * 00000001409FEACA: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FEAD4: add     rax, r13
 * 00000001409FEAD7: mov     [rsi+908h], rax
 * 00000001409FEADE: movsxd  rax, dword ptr [r13+0]
 * 00000001409FEAE2: mov     [rsi+910h], rax
 * 00000001409FEAE9: mov     eax, 1
 * 00000001409FEAEE: mov     [rsi+918h], rbx
 * 00000001409FEAF5: mov     [rsi+8F8h], eax
 * 00000001409FEAFB: call    $$b8
 * 00000001409FEB00: mov     [r13+18h], rbx
 * 00000001409FEB04: mov     rax, [rsi+2E8h]
 * 00000001409FEB0B: mov     rdx, r14
 * 00000001409FEB0E: mov     rcx, r15
 * 00000001409FEB11: call    KeGuardDispatchICall
 * 00000001409FEB16: jmp     loc_1409FA318
 * 00000001409FEB1B: jnz     short loc_1409FEB6D
 * 00000001409FEB1D: xor     eax, eax
 * 00000001409FEB1F: cmp     [rsi+980h], rax
 * 00000001409FEB26: jz      loc_1409FA312
 * 00000001409FEB2C: mov     ecx, [rsi+994h]
 * 00000001409FEB32: mov     eax, ecx
 * 00000001409FEB34: shr     eax, 2
 * 00000001409FEB37: and     eax, edx
 * 00000001409FEB39: jnz     loc_1409FA3EA
 * 00000001409FEB3F: xor     edx, edx
 * 00000001409FEB41: cmp     [rsi+824h], edx
 * 00000001409FEB47: lea     edx, [rax+1]
 * 00000001409FEB4A: jnz     short loc_1409FEB60
 * 00000001409FEB4C: mov     eax, ecx
 * 00000001409FEB4E: shl     eax, 3
 * 00000001409FEB51: xor     eax, ecx
 * 00000001409FEB53: and     eax, 20h
 * 00000001409FEB56: xor     eax, ecx
 * 00000001409FEB58: mov     [rsi+994h], eax
 * 00000001409FEB5E: jmp     short loc_1409FEB6D
 * 00000001409FEB60: shr     ecx, 5
 * 00000001409FEB63: and     ecx, edx
 * 00000001409FEB65: cmp     eax, ecx
 * 00000001409FEB67: jnz     loc_1409FA3EA
 * 00000001409FEB6D: mov     r14, [r13+8]
 * 00000001409FEB71: mov     r8d, [r13+10h]
 * 00000001409FEB75: mov     r9, r14
 * 00000001409FEB78: add     [rsi+828h], r8d
 * 00000001409FEB7F: mov     rax, r14
 * 00000001409FEB82: mov     r10d, [rsi+814h]
 * 00000001409FEB89: mov     r15, [rsi+818h]
 * 00000001409FEB90: lea     rcx, [r14+r8]
 * 00000001409FEB94: cmp     r14, rcx
 * 00000001409FEB97: jnb     short loc_1409FEBAA
 * 00000001409FEB99: mov     r11d, 40h ; '@'
 * 00000001409FEB9F: prefetchnta byte ptr [rax]
 * 00000001409FEBA2: add     rax, r11
 * 00000001409FEBA5: cmp     rax, rcx
 * 00000001409FEBA8: jb      short loc_1409FEB9F
 * 00000001409FEBAA: mov     r11d, r8d
 * 00000001409FEBAD: mov     rbx, r15
 * 00000001409FEBB0: shr     r11d, 7
 * 00000001409FEBB4: mov     r12d, 0FFFFFFFFh
 * 00000001409FEBBA: test    r11d, r11d
 * 00000001409FEBBD: jz      short loc_1409FEC2B
 * 00000001409FEBBF: mov     rdi, 7010008004002001h
 * 00000001409FEBC9: mov     eax, 8
 * 00000001409FEBCE: xor     rbx, [r9]
 * 00000001409FEBD1: mov     ecx, r10d
 * 00000001409FEBD4: rol     rbx, cl
 * 00000001409FEBD7: xor     rbx, [r9+8]
 * 00000001409FEBDB: add     r9, 10h
 * 00000001409FEBDF: rol     rbx, cl
 * 00000001409FEBE2: sub     rax, rdx
 * 00000001409FEBE5: jnz     short loc_1409FEBCE
 * 00000001409FEBE7: mov     rcx, r9
 * 00000001409FEBEA: sub     rcx, r14
 * 00000001409FEBED: xor     rcx, r15
 * 00000001409FEBF0: mov     rax, rcx
 * 00000001409FEBF3: rol     rax, 11h
 * 00000001409FEBF7: xor     rcx, rax
 * 00000001409FEBFA: mov     rax, rdi
 * 00000001409FEBFD: mul     rcx
 * 00000001409FEC00: xor     r10d, edx
 * 00000001409FEC03: mov     [rbp+0BE0h+var_668], rdx
 * 00000001409FEC0A: xor     r10d, eax
 * 00000001409FEC0D: mov     edx, 1
 * 00000001409FEC12: and     r10d, 3Fh
 * 00000001409FEC16: cmovz   r10d, edx
 * 00000001409FEC1A: add     r11d, r12d
 * 00000001409FEC1D: jnz     short loc_1409FEBC9
 * 00000001409FEC1F: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FEC24: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FEC2B: and     r8d, 7Fh
 * 00000001409FEC2F: cmp     r8d, 8
 * 00000001409FEC33: jb      short loc_1409FEC52
 * 00000001409FEC35: mov     eax, r8d
 * 00000001409FEC38: shr     rax, 3
 * 00000001409FEC3C: xor     rbx, [r9]
 * 00000001409FEC3F: mov     ecx, r10d
 * 00000001409FEC42: rol     rbx, cl
 * 00000001409FEC45: add     r9, 8
 * 00000001409FEC49: add     r8d, 0FFFFFFF8h
 * 00000001409FEC4D: sub     rax, rdx
 * 00000001409FEC50: jnz     short loc_1409FEC3C
 * 00000001409FEC52: test    r8d, r8d
 * 00000001409FEC55: jz      short loc_1409FEC6C
 * 00000001409FEC57: movzx   eax, byte ptr [r9]
 * 00000001409FEC5B: mov     ecx, r10d
 * 00000001409FEC5E: xor     rbx, rax
 * 00000001409FEC61: add     r9, rdx
 * 00000001409FEC64: rol     rbx, cl
 * 00000001409FEC67: add     r8d, r12d
 * 00000001409FEC6A: jnz     short loc_1409FEC57
 * 00000001409FEC6C: mov     rax, rbx
 * 00000001409FEC6F: shr     rax, 1Fh
 * 00000001409FEC73: xor     r15d, r15d
 * 00000001409FEC76: jmp     short loc_1409FEC7E
 * 00000001409FEC78: xor     ebx, eax
 * 00000001409FEC7A: shr     rax, 1Fh
 * 00000001409FEC7E: test    rax, rax
 * 00000001409FEC81: jnz     short loc_1409FEC78
 * 00000001409FEC83: btr     ebx, 1Fh
 * 00000001409FEC87: cmp     ebx, [r13+14h]
 * 00000001409FEC8B: jz      loc_1409FED6B
 * 00000001409FEC91: lock or [rsp+0CE0h+var_CE0], eax
 * 00000001409FEC95: mov     eax, [r13+18h]
 * 00000001409FEC99: test    dl, al
 * 00000001409FEC9B: jz      short loc_1409FECAE
 * 00000001409FEC9D: mov     rax, [rsi+580h]
 * 00000001409FECA4: mov     cl, [rax]
 * 00000001409FECA6: test    cl, cl
 * 00000001409FECA8: jnz     loc_1409FED6B
 * 00000001409FECAE: mov     ecx, [r13+10h]
 * 00000001409FECB2: mov     rdx, [r13+8]
 * 00000001409FECB6: test    rcx, rcx
 * 00000001409FECB9: jz      loc_1409FEE0A
 * 00000001409FECBF: mov     eax, [rsi+994h]
 * 00000001409FECC5: mov     r8d, 40h ; '@'
 * 00000001409FECCB: test    r8b, al
 * 00000001409FECCE: jz      loc_1409FEE0A
 * 00000001409FECD4: mov     r12, cr8
 * 00000001409FECD8: lea     eax, [r8-3Eh]
 * 00000001409FECDC: mov     cr8, rax
 * 00000001409FECE0: mov     r14, rdx
 * 00000001409FECE3: lea     rax, [rcx-1]
 * 00000001409FECE7: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FECEE: add     rax, rdx
 * 00000001409FECF1: or      rax, 0FFFh
 * 00000001409FECF7: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FECFE: lea     r13, [r14-1]
 * 00000001409FED02: movzx   r15d, r12b
 * 00000001409FED06: mov     rax, [rsi+468h]
 * 00000001409FED0D: xor     edx, edx
 * 00000001409FED0F: mov     rcx, r14
 * 00000001409FED12: call    KeGuardDispatchICall
 * 00000001409FED17: cmp     eax, 0C000022Dh
 * 00000001409FED1C: jnz     short loc_1409FED42
 * 00000001409FED1E: mov     eax, 1
 * 00000001409FED23: cmp     r12b, al
 * 00000001409FED26: ja      short loc_1409FED4A
 * 00000001409FED28: movzx   r15d, r12b
 * 00000001409FED2C: mov     cr8, r15
 * 00000001409FED30: mov     al, [r14]
 * 00000001409FED33: mov     rax, cr8
 * 00000001409FED37: mov     eax, 2
 * 00000001409FED3C: mov     cr8, rax
 * 00000001409FED40: jmp     short loc_1409FED06
 * 00000001409FED42: test    eax, eax
 * 00000001409FED44: js      loc_1409FEE01
 * 00000001409FED4A: mov     r11d, 1000h
 * 00000001409FED50: add     r14, r11
 * 00000001409FED53: add     r13, r11
 * 00000001409FED56: cmp     r13, [rbp+0BE0h+arg_8]
 * 00000001409FED5D: jnz     short loc_1409FED02
 * 00000001409FED5F: mov     cr8, r15
 * 00000001409FED63: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FED68: xor     r15d, r15d
 * 00000001409FED6B: mov     ebx, 1
 * 00000001409FED70: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FED7A: jz      loc_1409FA31B
 * 00000001409FED80: mov     r8d, [r13+10h]
 * 00000001409FED84: test    r8d, r8d
 * 00000001409FED87: jz      loc_1409FA318
 * 00000001409FED8D: mov     rdx, [r13+8]
 * 00000001409FED91: lea     r9, [rbp+0BE0h+var_2F0]
 * 00000001409FED98: mov     rcx, rsi
 * 00000001409FED9B: call    sub_1403EA5FC
 * 00000001409FEDA0: mov     r8d, 10h
 * 00000001409FEDA6: lea     r9, [r13+1Ch]
 * 00000001409FEDAA: lea     r10, [rbp+0BE0h+var_2F0]
 * 00000001409FEDB1: mov     rcx, [r10]
 * 00000001409FEDB4: add     r10, 8
 * 00000001409FEDB8: mov     rax, [r9]
 * 00000001409FEDBB: add     r9, 8
 * 00000001409FEDBF: cmp     rcx, rax
 * 00000001409FEDC2: jnz     loc_1409FEE91
 * 00000001409FEDC8: add     r8d, 0FFFFFFF8h
 * 00000001409FEDCC: cmp     r8d, 8
 * 00000001409FEDD0: jnb     short loc_1409FEDB1
 * 00000001409FEDD2: test    r8d, r8d
 * 00000001409FEDD5: jz      loc_1409FEFBE
 * 00000001409FEDDB: movzx   edx, byte ptr [r10]
 * 00000001409FEDDF: add     r10, rbx
 * 00000001409FEDE2: movzx   eax, byte ptr [r9]
 * 00000001409FEDE6: add     r9, rbx
 * 00000001409FEDE9: cmp     rdx, rax
 * 00000001409FEDEC: jnz     loc_1409FEE91
 * 00000001409FEDF2: mov     eax, 0FFFFFFFFh
 * 00000001409FEDF7: add     r8d, eax
 * 00000001409FEDFA: jnz     short loc_1409FEDDB
 * 00000001409FEDFC: jmp     loc_1409FEFBE
 * 00000001409FEE01: mov     cr8, r15
 * 00000001409FEE05: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FEE0A: mov     eax, [rsi+8F8h]
 * 00000001409FEE10: xor     r15d, r15d
 * 00000001409FEE13: mov     ecx, [r13+14h]
 * 00000001409FEE17: test    eax, eax
 * 00000001409FEE19: jnz     short loc_1409FEE31
 * 00000001409FEE1B: mov     eax, ebx
 * 00000001409FEE1D: xor     rcx, rax
 * 00000001409FEE20: mov     rax, [rsi+590h]
 * 00000001409FEE27: mov     [rax+18h], rcx
 * 00000001409FEE2B: mov     eax, [rsi+8F8h]
 * 00000001409FEE31: mov     rcx, [r13+8]
 * 00000001409FEE35: mov     ebx, 1
 * 00000001409FEE3A: test    eax, eax
 * 00000001409FEE3C: jnz     loc_1409FED70
 * 00000001409FEE42: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FEE4C: xor     edx, edx
 * 00000001409FEE4E: add     rax, rsi
 * 00000001409FEE51: mov     [rsi+900h], rax
 * 00000001409FEE58: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FEE62: add     rax, r13
 * 00000001409FEE65: mov     [rsi+908h], rax
 * 00000001409FEE6C: movsxd  rax, dword ptr [r13+0]
 * 00000001409FEE70: mov     [rsi+910h], rax
 * 00000001409FEE77: mov     [rsi+918h], rcx
 * 00000001409FEE7E: mov     rcx, rsi
 * 00000001409FEE81: mov     [rsi+8F8h], ebx
 * 00000001409FEE87: call    $$b8
 * 00000001409FEE8C: jmp     loc_1409FED70
 * 00000001409FEE91: xor     eax, eax
 * 00000001409FEE93: lock or [rsp+0CE0h+var_CE0], eax
 * 00000001409FEE97: mov     eax, [r13+18h]
 * 00000001409FEE9B: test    bl, al
 * 00000001409FEE9D: jz      short loc_1409FEEB0
 * 00000001409FEE9F: mov     rax, [rsi+580h]
 * 00000001409FEEA6: mov     cl, [rax]
 * 00000001409FEEA8: test    cl, cl
 * 00000001409FEEAA: jnz     loc_1409FEFBE
 * 00000001409FEEB0: mov     edx, [r13+10h]
 * 00000001409FEEB4: mov     rcx, [r13+8]
 * 00000001409FEEB8: test    rdx, rdx
 * 00000001409FEEBB: jz      loc_1409FEF6A
 * 00000001409FEEC1: mov     eax, [rsi+994h]
 * 00000001409FEEC7: mov     r8d, 40h ; '@'
 * 00000001409FEECD: test    r8b, al
 * 00000001409FEED0: jz      loc_1409FEF6A
 * 00000001409FEED6: mov     r15, cr8
 * 00000001409FEEDA: lea     eax, [r8-3Eh]
 * 00000001409FEEDE: mov     cr8, rax
 * 00000001409FEEE2: mov     rbx, rcx
 * 00000001409FEEE5: lea     r13, [rdx-1]
 * 00000001409FEEE9: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001409FEEF0: add     r13, rcx
 * 00000001409FEEF3: or      r13, 0FFFh
 * 00000001409FEEFA: lea     r12, [rbx-1]
 * 00000001409FEEFE: movzx   r14d, r15b
 * 00000001409FEF02: mov     rax, [rsi+468h]
 * 00000001409FEF09: xor     edx, edx
 * 00000001409FEF0B: mov     rcx, rbx
 * 00000001409FEF0E: call    KeGuardDispatchICall
 * 00000001409FEF13: cmp     eax, 0C000022Dh
 * 00000001409FEF18: jnz     short loc_1409FEF3D
 * 00000001409FEF1A: mov     eax, 1
 * 00000001409FEF1F: cmp     r15b, al
 * 00000001409FEF22: ja      short loc_1409FEF41
 * 00000001409FEF24: movzx   r14d, r15b
 * 00000001409FEF28: mov     cr8, r14
 * 00000001409FEF2C: mov     al, [rbx]
 * 00000001409FEF2E: mov     rax, cr8
 * 00000001409FEF32: mov     eax, 2
 * 00000001409FEF37: mov     cr8, rax
 * 00000001409FEF3B: jmp     short loc_1409FEF02
 * 00000001409FEF3D: test    eax, eax
 * 00000001409FEF3F: js      short loc_1409FEF58
 * 00000001409FEF41: mov     r11d, 1000h
 * 00000001409FEF47: add     rbx, r11
 * 00000001409FEF4A: add     r12, r11
 * 00000001409FEF4D: cmp     r12, r13
 * 00000001409FEF50: jnz     short loc_1409FEEFE
 * 00000001409FEF52: mov     cr8, r14
 * 00000001409FEF56: jmp     short loc_1409FEFBE
 * 00000001409FEF58: mov     cr8, r14
 * 00000001409FEF5C: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FEF61: mov     ebx, 1
 * 00000001409FEF66: mov     rcx, [r13+8]
 * 00000001409FEF6A: xor     eax, eax
 * 00000001409FEF6C: cmp     [rsi+8F8h], eax
 * 00000001409FEF72: jnz     short loc_1409FEFBE
 * 00000001409FEF74: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FEF7E: xor     edx, edx
 * 00000001409FEF80: add     rax, rsi
 * 00000001409FEF83: mov     [rsi+900h], rax
 * 00000001409FEF8A: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FEF94: add     rax, r13
 * 00000001409FEF97: mov     [rsi+908h], rax
 * 00000001409FEF9E: movsxd  rax, dword ptr [r13+0]
 * 00000001409FEFA2: mov     [rsi+910h], rax
 * 00000001409FEFA9: mov     [rsi+918h], rcx
 * 00000001409FEFB0: mov     rcx, rsi
 * 00000001409FEFB3: mov     [rsi+8F8h], ebx
 * 00000001409FEFB9: call    $$b8
 * 00000001409FEFBE: mov     rax, [rsp+0CE0h+var_C90]
 * 00000001409FEFC3: mov     eax, [rax+10h]
 * 00000001409FEFC6: shl     eax, 4
 * 00000001409FEFC9: jmp     loc_1409FB049
 * 00000001409FEFCE: mov     r8d, [r13+10h]
 * 00000001409FEFD2: test    r8d, r8d
 * 00000001409FEFD5: jnz     loc_1409FF5B3
 * 00000001409FEFDB: lea     rax, [r13+30h]
 * 00000001409FEFDF: xor     r9d, r9d
 * 00000001409FEFE2: mov     [rbp+0BE0h+var_860], rax
 * 00000001409FEFE9: lea     rcx, [rbp+0BE0h+var_868]
 * 00000001409FEFF0: movzx   eax, word ptr [r13+28h]
 * 00000001409FEFF5: xor     r8d, r8d
 * 00000001409FEFF8: mov     [rbp+0BE0h+var_868], ax
 * 00000001409FEFFF: xor     edx, edx
 * 00000001409FF001: mov     [rbp+0BE0h+var_866], ax
 * 00000001409FF008: lea     rax, [rbp+0BE0h+var_B30]
 * 00000001409FF00F: mov     [rsp+0CE0h+var_CA8], rax
 * 00000001409FF014: xor     eax, eax
 * 00000001409FF016: mov     [rsp+0CE0h+var_CB0], rax
 * 00000001409FF01B: mov     byte ptr [rsp+0CE0h+var_CB8], al
 * 00000001409FF01F: mov     rax, [rsi+510h]
 * 00000001409FF026: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 00000001409FF02B: mov     rax, [rsi+1E8h]
 * 00000001409FF032: call    KeGuardDispatchICall
 * 00000001409FF037: test    eax, eax
 * 00000001409FF039: js      loc_1409FA318
 * 00000001409FF03F: mov     rax, [rbp+0BE0h+var_B30]
 * 00000001409FF046: mov     ecx, [rax+10h]
 * 00000001409FF049: mov     eax, 10h
 * 00000001409FF04E: test    al, cl
 * 00000001409FF050: jnz     short loc_1409FF065
 * 00000001409FF052: mov     rax, [rsi+1E0h]
 * 00000001409FF059: mov     rcx, [rbp+0BE0h+var_B30]
 * 00000001409FF060: jmp     loc_1409FC1AB
 * 00000001409FF065: mov     rcx, [rsi+1E8h]
 * 00000001409FF06C: lea     rdx, [rbp+0BE0h+var_170]
 * 00000001409FF073: mov     rax, [rsi+200h]
 * 00000001409FF07A: call    KeGuardDispatchICall
 * 00000001409FF07F: mov     rcx, [rbp+0BE0h+var_168]
 * 00000001409FF086: test    rcx, rcx
 * 00000001409FF089: jz      short loc_1409FF0AB
 * 00000001409FF08B: mov     rax, [rsi+1F8h]
 * 00000001409FF092: mov     rbx, rcx
 * 00000001409FF095: mov     [rbp+0BE0h+var_C30], rcx
 * 00000001409FF099: call    KeGuardDispatchICall
 * 00000001409FF09E: test    rax, rax
 * 00000001409FF0A1: jz      short loc_1409FF0AB
 * 00000001409FF0A3: mov     r15d, [rax+50h]
 * 00000001409FF0A7: mov     [rbp+0BE0h+var_C28], r15d
 * 00000001409FF0AB: mov     rcx, [r13+18h]
 * 00000001409FF0AF: lea     rdx, [rbp+0BE0h+var_158]
 * 00000001409FF0B6: mov     rax, [rsi+200h]
 * 00000001409FF0BD: call    KeGuardDispatchICall
 * 00000001409FF0C2: mov     rcx, [rbp+0BE0h+var_150]
 * 00000001409FF0C9: test    rcx, rcx
 * 00000001409FF0CC: jz      short loc_1409FF0F0
 * 00000001409FF0CE: mov     rax, [rsi+1F8h]
 * 00000001409FF0D5: mov     r14, rcx
 * 00000001409FF0D8: mov     [rbp+0BE0h+var_C40], rcx
 * 00000001409FF0DC: call    KeGuardDispatchICall
 * 00000001409FF0E1: test    rax, rax
 * 00000001409FF0E4: jz      short loc_1409FF0F0
 * 00000001409FF0E6: mov     r10d, [rax+50h]
 * 00000001409FF0EA: mov     [rbp+0BE0h+var_BA0], r10d
 * 00000001409FF0EE: jmp     short loc_1409FF0F4
 * 00000001409FF0F0: mov     r10d, [rbp+0BE0h+var_BA0]
 * 00000001409FF0F4: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FF0FE: jnz     short loc_1409FF117
 * 00000001409FF100: mov     rax, [rbp+0BE0h+var_B30]
 * 00000001409FF107: add     rax, 70h ; 'p'
 * 00000001409FF10B: mov     [r13+8], rax
 * 00000001409FF10F: mov     dword ptr [r13+10h], 0E0h
 * 00000001409FF117: mov     rcx, [rbp+0BE0h+var_B30]
 * 00000001409FF11E: xor     eax, eax
 * 00000001409FF120: mov     r12d, r15d
 * 00000001409FF123: mov     dl, al
 * 00000001409FF125: mov     [rbp+0BE0h+arg_8], r12
 * 00000001409FF12C: lea     r11d, [rax+1]
 * 00000001409FF130: movzx   eax, dl
 * 00000001409FF133: mov     r9, [rcx+rax*8+70h]
 * 00000001409FF138: test    r12, r12
 * 00000001409FF13B: jz      short loc_1409FF152
 * 00000001409FF13D: lea     rax, [rbx-1]
 * 00000001409FF141: add     rax, r12
 * 00000001409FF144: cmp     r9, rbx
 * 00000001409FF147: jb      short loc_1409FF152
 * 00000001409FF149: cmp     r9, rax
 * 00000001409FF14C: jbe     loc_1409FF237
 * 00000001409FF152: xor     r15d, r15d
 * 00000001409FF155: mov     eax, r10d
 * 00000001409FF158: test    r10d, r10d
 * 00000001409FF15B: jz      short loc_1409FF172
 * 00000001409FF15D: lea     r8, [r14-1]
 * 00000001409FF161: add     r8, rax
 * 00000001409FF164: cmp     r9, r14
 * 00000001409FF167: jb      short loc_1409FF172
 * 00000001409FF169: cmp     r9, r8
 * 00000001409FF16C: jbe     loc_1409FF23A
 * 00000001409FF172: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FF17C: jz      short loc_1409FF1CA
 * 00000001409FF17E: mov     rcx, [rsi+0A80h]
 * 00000001409FF185: mov     edx, 30h ; '0'
 * 00000001409FF18A: lea     r8d, [rdx-2Ah]
 * 00000001409FF18E: mov     rax, [r13+0]
 * 00000001409FF192: add     edx, 0FFFFFFF8h
 * 00000001409FF195: mov     [rcx], rax
 * 00000001409FF198: add     r13, 8
 * 00000001409FF19C: add     rcx, 8
 * 00000001409FF1A0: sub     r8, r11
 * 00000001409FF1A3: jnz     short loc_1409FF18E
 * 00000001409FF1A5: test    edx, edx
 * 00000001409FF1A7: jz      short loc_1409FF1C3
 * 00000001409FF1A9: mov     esi, 0FFFFFFFFh
 * 00000001409FF1AE: mov     al, [r13+0]
 * 00000001409FF1B2: add     r13, r11
 * 00000001409FF1B5: mov     [rcx], al
 * 00000001409FF1B7: add     rcx, r11
 * 00000001409FF1BA: add     edx, esi
 * 00000001409FF1BC: jnz     short loc_1409FF1AE
 * 00000001409FF1BE: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FF1C3: mov     r13, [rsi+0A80h]
 * 00000001409FF1CA: mov     [r13+20h], r9
 * 00000001409FF1CE: mov     rax, [rsi+590h]
 * 00000001409FF1D5: mov     [rax], r13
 * 00000001409FF1D8: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FF1DF: xor     eax, eax
 * 00000001409FF1E1: mov     rcx, [r13+8]
 * 00000001409FF1E5: cmp     [rsi+8F8h], eax
 * 00000001409FF1EB: jnz     loc_1409FA31B
 * 00000001409FF1F1: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF1FB: add     rax, rsi
 * 00000001409FF1FE: mov     [rsi+900h], rax
 * 00000001409FF205: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FF20F: add     rax, r13
 * 00000001409FF212: mov     [rsi+908h], rax
 * 00000001409FF219: movsxd  rax, dword ptr [r13+0]
 * 00000001409FF21D: mov     [rsi+910h], rax
 * 00000001409FF224: mov     [rsi+918h], rcx
 * 00000001409FF22B: mov     [rsi+8F8h], r11d
 * 00000001409FF232: jmp     loc_1409FA6F2
 * 00000001409FF237: xor     r15d, r15d
 * 00000001409FF23A: add     dl, r11b
 * 00000001409FF23D: cmp     dl, 1Ch
 * 00000001409FF240: jb      loc_1409FF130
 * 00000001409FF246: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FF250: jnz     loc_1409FAE45
 * 00000001409FF256: mov     r14, [r13+8]
 * 00000001409FF25A: mov     r9d, [r13+10h]
 * 00000001409FF25E: mov     r10, r14
 * 00000001409FF261: add     [rsi+828h], r9d
 * 00000001409FF268: mov     rax, r14
 * 00000001409FF26B: mov     ebx, [rsi+814h]
 * 00000001409FF271: mov     r15, [rsi+818h]
 * 00000001409FF278: lea     rcx, [r14+r9]
 * 00000001409FF27C: cmp     r14, rcx
 * 00000001409FF27F: jnb     short loc_1409FF291
 * 00000001409FF281: mov     edx, 40h ; '@'
 * 00000001409FF286: prefetchnta byte ptr [rax]
 * 00000001409FF289: add     rax, rdx
 * 00000001409FF28C: cmp     rax, rcx
 * 00000001409FF28F: jb      short loc_1409FF286
 * 00000001409FF291: mov     r11d, r9d
 * 00000001409FF294: mov     r8, r15
 * 00000001409FF297: shr     r11d, 7
 * 00000001409FF29B: mov     edx, 1
 * 00000001409FF2A0: test    r11d, r11d
 * 00000001409FF2A3: jz      short loc_1409FF318
 * 00000001409FF2A5: mov     edi, 0FFFFFFFFh
 * 00000001409FF2AA: mov     r12, 7010008004002001h
 * 00000001409FF2B4: mov     eax, 8
 * 00000001409FF2B9: xor     r8, [r10]
 * 00000001409FF2BC: mov     ecx, ebx
 * 00000001409FF2BE: rol     r8, cl
 * 00000001409FF2C1: xor     r8, [r10+8]
 * 00000001409FF2C5: add     r10, 10h
 * 00000001409FF2C9: rol     r8, cl
 * 00000001409FF2CC: sub     rax, rdx
 * 00000001409FF2CF: jnz     short loc_1409FF2B9
 * 00000001409FF2D1: mov     rcx, r10
 * 00000001409FF2D4: sub     rcx, r14
 * 00000001409FF2D7: xor     rcx, r15
 * 00000001409FF2DA: mov     rax, rcx
 * 00000001409FF2DD: rol     rax, 11h
 * 00000001409FF2E1: xor     rcx, rax
 * 00000001409FF2E4: mov     rax, r12
 * 00000001409FF2E7: mul     rcx
 * 00000001409FF2EA: xor     ebx, edx
 * 00000001409FF2EC: mov     [rbp+0BE0h+var_660], rdx
 * 00000001409FF2F3: xor     ebx, eax
 * 00000001409FF2F5: mov     edx, 1
 * 00000001409FF2FA: and     ebx, 3Fh
 * 00000001409FF2FD: cmovz   ebx, edx
 * 00000001409FF300: add     r11d, edi
 * 00000001409FF303: jnz     short loc_1409FF2B4
 * 00000001409FF305: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FF30A: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FF311: mov     r12, [rbp+0BE0h+arg_8]
 * 00000001409FF318: and     r9d, 7Fh
 * 00000001409FF31C: cmp     r9d, 8
 * 00000001409FF320: jb      short loc_1409FF33E
 * 00000001409FF322: mov     eax, r9d
 * 00000001409FF325: shr     rax, 3
 * 00000001409FF329: xor     r8, [r10]
 * 00000001409FF32C: mov     ecx, ebx
 * 00000001409FF32E: rol     r8, cl
 * 00000001409FF331: add     r10, 8
 * 00000001409FF335: add     r9d, 0FFFFFFF8h
 * 00000001409FF339: sub     rax, rdx
 * 00000001409FF33C: jnz     short loc_1409FF329
 * 00000001409FF33E: test    r9d, r9d
 * 00000001409FF341: jz      short loc_1409FF361
 * 00000001409FF343: mov     esi, 0FFFFFFFFh
 * 00000001409FF348: movzx   eax, byte ptr [r10]
 * 00000001409FF34C: mov     ecx, ebx
 * 00000001409FF34E: xor     r8, rax
 * 00000001409FF351: add     r10, rdx
 * 00000001409FF354: rol     r8, cl
 * 00000001409FF357: add     r9d, esi
 * 00000001409FF35A: jnz     short loc_1409FF348
 * 00000001409FF35C: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FF361: mov     rax, r8
 * 00000001409FF364: jmp     short loc_1409FF369
 * 00000001409FF366: xor     r8d, eax
 * 00000001409FF369: shr     rax, 1Fh
 * 00000001409FF36D: test    rax, rax
 * 00000001409FF370: jnz     short loc_1409FF366
 * 00000001409FF372: btr     r8d, 1Fh
 * 00000001409FF377: mov     [r13+14h], r8d
 * 00000001409FF37B: mov     rax, [rbp+0BE0h+var_B30]
 * 00000001409FF382: mov     r14, [rax+50h]
 * 00000001409FF386: xor     eax, eax
 * 00000001409FF388: mov     r10d, eax
 * 00000001409FF38B: test    r14, r14
 * 00000001409FF38E: jz      short loc_1409FF409
 * 00000001409FF390: mov     r10d, [r14]
 * 00000001409FF393: mov     r8b, al
 * 00000001409FF396: lea     r9d, [r10-8]
 * 00000001409FF39A: shr     r9d, 3
 * 00000001409FF39E: test    r9d, r9d
 * 00000001409FF3A1: jz      short loc_1409FF409
 * 00000001409FF3A3: mov     r11, [rbp+0BE0h+var_C30]
 * 00000001409FF3A7: mov     rbx, [rbp+0BE0h+var_C40]
 * 00000001409FF3AB: mov     r15d, [rbp+0BE0h+var_BA0]
 * 00000001409FF3AF: movzx   eax, r8b
 * 00000001409FF3B3: mov     rcx, [r14+rax*8+8]
 * 00000001409FF3B8: test    rcx, rcx
 * 00000001409FF3BB: jz      short loc_1409FF3FD
 * 00000001409FF3BD: test    r12, r12
 * 00000001409FF3C0: jz      short loc_1409FF3D3
 * 00000001409FF3C2: lea     rax, [r11-1]
 * 00000001409FF3C6: add     rax, r12
 * 00000001409FF3C9: cmp     rcx, r11
 * 00000001409FF3CC: jb      short loc_1409FF3D3
 * 00000001409FF3CE: cmp     rcx, rax
 * 00000001409FF3D1: jbe     short loc_1409FF3FD
 * 00000001409FF3D3: mov     rax, r15
 * 00000001409FF3D6: test    r15d, r15d
 * 00000001409FF3D9: jz      loc_1409FF522
 * 00000001409FF3DF: lea     rdx, [rbx-1]
 * 00000001409FF3E3: add     rdx, rax
 * 00000001409FF3E6: cmp     rcx, rbx
 * 00000001409FF3E9: jb      loc_1409FF522
 * 00000001409FF3EF: cmp     rcx, rdx
 * 00000001409FF3F2: ja      loc_1409FF522
 * 00000001409FF3F8: mov     edx, 1
 * 00000001409FF3FD: add     r8b, dl
 * 00000001409FF400: movzx   eax, r8b
 * 00000001409FF404: cmp     eax, r9d
 * 00000001409FF407: jb      short loc_1409FF3AF
 * 00000001409FF409: add     [rsi+828h], r10d
 * 00000001409FF410: mov     r9, r14
 * 00000001409FF413: mov     r11d, [rsi+814h]
 * 00000001409FF41A: mov     rax, r14
 * 00000001409FF41D: mov     r15, [rsi+818h]
 * 00000001409FF424: mov     ecx, r10d
 * 00000001409FF427: add     rcx, r14
 * 00000001409FF42A: cmp     r14, rcx
 * 00000001409FF42D: jnb     short loc_1409FF440
 * 00000001409FF42F: mov     r8d, 40h ; '@'
 * 00000001409FF435: prefetchnta byte ptr [rax]
 * 00000001409FF438: add     rax, r8
 * 00000001409FF43B: cmp     rax, rcx
 * 00000001409FF43E: jb      short loc_1409FF435
 * 00000001409FF440: mov     ebx, r10d
 * 00000001409FF443: mov     r8, r15
 * 00000001409FF446: shr     ebx, 7
 * 00000001409FF449: mov     r12d, 0FFFFFFFFh
 * 00000001409FF44F: test    ebx, ebx
 * 00000001409FF451: jz      short loc_1409FF4C6
 * 00000001409FF453: mov     rdi, 7010008004002001h
 * 00000001409FF45D: mov     edx, 8
 * 00000001409FF462: lea     esi, [rdx-7]
 * 00000001409FF465: mov     rax, [r9]
 * 00000001409FF468: mov     ecx, r11d
 * 00000001409FF46B: xor     rax, r8
 * 00000001409FF46E: mov     r8, [r9+8]
 * 00000001409FF472: rol     rax, cl
 * 00000001409FF475: add     r9, 10h
 * 00000001409FF479: xor     r8, rax
 * 00000001409FF47C: rol     r8, cl
 * 00000001409FF47F: sub     rdx, rsi
 * 00000001409FF482: jnz     short loc_1409FF465
 * 00000001409FF484: mov     rcx, r9
 * 00000001409FF487: sub     rcx, r14
 * 00000001409FF48A: xor     rcx, r15
 * 00000001409FF48D: mov     rax, rcx
 * 00000001409FF490: rol     rax, 11h
 * 00000001409FF494: xor     rcx, rax
 * 00000001409FF497: mov     rax, rdi
 * 00000001409FF49A: mul     rcx
 * 00000001409FF49D: xor     r11d, edx
 * 00000001409FF4A0: mov     [rbp+0BE0h+var_658], rdx
 * 00000001409FF4A7: xor     r11d, eax
 * 00000001409FF4AA: mov     rdx, rsi
 * 00000001409FF4AD: and     r11d, 3Fh
 * 00000001409FF4B1: cmovz   r11d, edx
 * 00000001409FF4B5: add     ebx, r12d
 * 00000001409FF4B8: jnz     short loc_1409FF45D
 * 00000001409FF4BA: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FF4BF: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FF4C6: and     r10d, 7Fh
 * 00000001409FF4CA: cmp     r10d, 8
 * 00000001409FF4CE: jb      short loc_1409FF4FC
 * 00000001409FF4D0: mov     edx, r10d
 * 00000001409FF4D3: mov     esi, 1
 * 00000001409FF4D8: shr     rdx, 3
 * 00000001409FF4DC: xor     r8, [r9]
 * 00000001409FF4DF: mov     ecx, r11d
 * 00000001409FF4E2: rol     r8, cl
 * 00000001409FF4E5: add     r9, 8
 * 00000001409FF4E9: add     r10d, 0FFFFFFF8h
 * 00000001409FF4ED: sub     rdx, rsi
 * 00000001409FF4F0: jnz     short loc_1409FF4DC
 * 00000001409FF4F2: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FF4F7: mov     edx, 1
 * 00000001409FF4FC: test    r10d, r10d
 * 00000001409FF4FF: jz      short loc_1409FF516
 * 00000001409FF501: movzx   eax, byte ptr [r9]
 * 00000001409FF505: mov     ecx, r11d
 * 00000001409FF508: xor     r8, rax
 * 00000001409FF50B: add     r9, rdx
 * 00000001409FF50E: rol     r8, cl
 * 00000001409FF511: add     r10d, r12d
 * 00000001409FF514: jnz     short loc_1409FF501
 * 00000001409FF516: mov     rax, r8
 * 00000001409FF519: shr     rax, 1Fh
 * 00000001409FF51D: xor     r15d, r15d
 * 00000001409FF520: jmp     short loc_1409FF5A0
 * 00000001409FF522: mov     [r13+20h], rcx
 * 00000001409FF526: mov     rax, [rsi+590h]
 * 00000001409FF52D: mov     [rax], r13
 * 00000001409FF530: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FF537: xor     eax, eax
 * 00000001409FF539: cmp     [rsi+8F8h], eax
 * 00000001409FF53F: jnz     loc_1409FA318
 * 00000001409FF545: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF54F: add     rax, rsi
 * 00000001409FF552: mov     [rsi+900h], rax
 * 00000001409FF559: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FF563: add     rax, r13
 * 00000001409FF566: mov     [rsi+908h], rax
 * 00000001409FF56D: movsxd  rax, dword ptr [r13+0]
 * 00000001409FF571: mov     [rsi+910h], rax
 * 00000001409FF578: mov     [rsi+918h], r14
 * 00000001409FF57F: mov     eax, 1
 * 00000001409FF584: mov     [rsi+8F8h], eax
 * 00000001409FF58A: xor     edx, edx
 * 00000001409FF58C: mov     rcx, rsi
 * 00000001409FF58F: call    $$b8
 * 00000001409FF594: jmp     loc_1409FA318
 * 00000001409FF599: xor     r8d, eax
 * 00000001409FF59C: shr     rax, 1Fh
 * 00000001409FF5A0: test    rax, rax
 * 00000001409FF5A3: jnz     short loc_1409FF599
 * 00000001409FF5A5: btr     r8d, 1Fh
 * 00000001409FF5AA: mov     [r13+2Ch], r8d
 * 00000001409FF5AE: jmp     loc_1409FA31B
 * 00000001409FF5B3: mov     r14, [r13+8]
 * 00000001409FF5B7: add     [rsi+828h], r8d
 * 00000001409FF5BE: mov     r9, r14
 * 00000001409FF5C1: mov     r11d, [rsi+814h]
 * 00000001409FF5C8: mov     rax, r14
 * 00000001409FF5CB: mov     r15, [rsi+818h]
 * 00000001409FF5D2: lea     rcx, [r14+r8]
 * 00000001409FF5D6: cmp     r14, rcx
 * 00000001409FF5D9: jnb     short loc_1409FF5EC
 * 00000001409FF5DB: mov     r10d, 40h ; '@'
 * 00000001409FF5E1: prefetchnta byte ptr [rax]
 * 00000001409FF5E4: add     rax, r10
 * 00000001409FF5E7: cmp     rax, rcx
 * 00000001409FF5EA: jb      short loc_1409FF5E1
 * 00000001409FF5EC: mov     r10d, r8d
 * 00000001409FF5EF: mov     rbx, r15
 * 00000001409FF5F2: shr     r10d, 7
 * 00000001409FF5F6: mov     r12d, 0FFFFFFFFh
 * 00000001409FF5FC: test    r10d, r10d
 * 00000001409FF5FF: jz      short loc_1409FF66D
 * 00000001409FF601: mov     rdi, 7010008004002001h
 * 00000001409FF60B: mov     eax, 8
 * 00000001409FF610: xor     rbx, [r9]
 * 00000001409FF613: mov     ecx, r11d
 * 00000001409FF616: rol     rbx, cl
 * 00000001409FF619: xor     rbx, [r9+8]
 * 00000001409FF61D: add     r9, 10h
 * 00000001409FF621: rol     rbx, cl
 * 00000001409FF624: sub     rax, rdx
 * 00000001409FF627: jnz     short loc_1409FF610
 * 00000001409FF629: mov     rcx, r9
 * 00000001409FF62C: sub     rcx, r14
 * 00000001409FF62F: xor     rcx, r15
 * 00000001409FF632: mov     rax, rcx
 * 00000001409FF635: rol     rax, 11h
 * 00000001409FF639: xor     rcx, rax
 * 00000001409FF63C: mov     rax, rdi
 * 00000001409FF63F: mul     rcx
 * 00000001409FF642: xor     r11d, edx
 * 00000001409FF645: mov     [rbp+0BE0h+var_650], rdx
 * 00000001409FF64C: xor     r11d, eax
 * 00000001409FF64F: mov     edx, 1
 * 00000001409FF654: and     r11d, 3Fh
 * 00000001409FF658: cmovz   r11d, edx
 * 00000001409FF65C: add     r10d, r12d
 * 00000001409FF65F: jnz     short loc_1409FF60B
 * 00000001409FF661: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FF666: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FF66D: and     r8d, 7Fh
 * 00000001409FF671: cmp     r8d, 8
 * 00000001409FF675: jb      short loc_1409FF694
 * 00000001409FF677: mov     eax, r8d
 * 00000001409FF67A: shr     rax, 3
 * 00000001409FF67E: xor     rbx, [r9]
 * 00000001409FF681: mov     ecx, r11d
 * 00000001409FF684: rol     rbx, cl
 * 00000001409FF687: add     r9, 8
 * 00000001409FF68B: add     r8d, 0FFFFFFF8h
 * 00000001409FF68F: sub     rax, rdx
 * 00000001409FF692: jnz     short loc_1409FF67E
 * 00000001409FF694: test    r8d, r8d
 * 00000001409FF697: jz      short loc_1409FF6AE
 * 00000001409FF699: movzx   eax, byte ptr [r9]
 * 00000001409FF69D: mov     ecx, r11d
 * 00000001409FF6A0: xor     rbx, rax
 * 00000001409FF6A3: add     r9, rdx
 * 00000001409FF6A6: rol     rbx, cl
 * 00000001409FF6A9: add     r8d, r12d
 * 00000001409FF6AC: jnz     short loc_1409FF699
 * 00000001409FF6AE: mov     rax, rbx
 * 00000001409FF6B1: jmp     short loc_1409FF6B5
 * 00000001409FF6B3: xor     ebx, eax
 * 00000001409FF6B5: shr     rax, 1Fh
 * 00000001409FF6B9: test    rax, rax
 * 00000001409FF6BC: jnz     short loc_1409FF6B3
 * 00000001409FF6BE: mov     r12, [rsp+0CE0h+var_C90]
 * 00000001409FF6C3: btr     ebx, 1Fh
 * 00000001409FF6C7: mov     r13d, eax
 * 00000001409FF6CA: cmp     ebx, [r12+14h]
 * 00000001409FF6CF: jz      loc_1409FF7B7
 * 00000001409FF6D5: cmp     [r12], eax
 * 00000001409FF6D9: jnz     short loc_1409FF6E4
 * 00000001409FF6DB: cmp     [r12+18h], eax
 * 00000001409FF6E0: cmovnz  r13d, edx
 * 00000001409FF6E4: mov     ecx, [r12+10h]
 * 00000001409FF6E9: mov     rdx, [r12+8]
 * 00000001409FF6EE: test    rcx, rcx
 * 00000001409FF6F1: jz      loc_1409FF8E7
 * 00000001409FF6F7: mov     eax, [rsi+994h]
 * 00000001409FF6FD: mov     r8d, 40h ; '@'
 * 00000001409FF703: test    r8b, al
 * 00000001409FF706: jz      loc_1409FF8E7
 * 00000001409FF70C: mov     r12, cr8
 * 00000001409FF710: lea     eax, [r8-3Eh]
 * 00000001409FF714: mov     cr8, rax
 * 00000001409FF718: mov     r14, rdx
 * 00000001409FF71B: lea     rax, [rcx-1]
 * 00000001409FF71F: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FF726: add     rax, rdx
 * 00000001409FF729: or      rax, 0FFFh
 * 00000001409FF72F: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FF734: lea     rax, [r14-1]
 * 00000001409FF738: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FF73F: movzx   r15d, r12b
 * 00000001409FF743: mov     rax, [rsi+468h]
 * 00000001409FF74A: xor     edx, edx
 * 00000001409FF74C: mov     rcx, r14
 * 00000001409FF74F: call    KeGuardDispatchICall
 * 00000001409FF754: cmp     eax, 0C000022Dh
 * 00000001409FF759: jnz     short loc_1409FF786
 * 00000001409FF75B: test    r13d, r13d
 * 00000001409FF75E: jnz     loc_1409FF8DE
 * 00000001409FF764: lea     eax, [r13+1]
 * 00000001409FF768: cmp     r12b, al
 * 00000001409FF76B: ja      short loc_1409FF78E
 * 00000001409FF76D: movzx   r15d, r12b
 * 00000001409FF771: mov     cr8, r15
 * 00000001409FF775: mov     al, [r14]
 * 00000001409FF778: mov     rax, cr8
 * 00000001409FF77C: lea     eax, [r13+2]
 * 00000001409FF780: mov     cr8, rax
 * 00000001409FF784: jmp     short loc_1409FF743
 * 00000001409FF786: test    eax, eax
 * 00000001409FF788: js      loc_1409FF8DE
 * 00000001409FF78E: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409FF795: mov     ecx, 1000h
 * 00000001409FF79A: add     rax, rcx
 * 00000001409FF79D: add     r14, rcx
 * 00000001409FF7A0: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FF7A7: cmp     rax, [rsp+0CE0h+var_C70]
 * 00000001409FF7AC: jnz     short loc_1409FF73F
 * 00000001409FF7AE: mov     cr8, r15
 * 00000001409FF7B2: mov     r12, [rsp+0CE0h+var_C90]
 * 00000001409FF7B7: mov     r13d, 1
 * 00000001409FF7BD: mov     rax, [r12+8]
 * 00000001409FF7C2: sub     rax, 70h ; 'p'
 * 00000001409FF7C6: mov     [rbp+0BE0h+var_B30], rax
 * 00000001409FF7CD: mov     r15, [rax+50h]
 * 00000001409FF7D1: xor     eax, eax
 * 00000001409FF7D3: mov     r9d, eax
 * 00000001409FF7D6: test    r15, r15
 * 00000001409FF7D9: jz      short loc_1409FF7DE
 * 00000001409FF7DB: mov     r9d, [r15]
 * 00000001409FF7DE: add     [rsi+828h], r9d
 * 00000001409FF7E5: mov     r10, r15
 * 00000001409FF7E8: mov     r11d, [rsi+814h]
 * 00000001409FF7EF: mov     rax, r15
 * 00000001409FF7F2: mov     r14, [rsi+818h]
 * 00000001409FF7F9: mov     ecx, r9d
 * 00000001409FF7FC: add     rcx, r15
 * 00000001409FF7FF: cmp     r15, rcx
 * 00000001409FF802: jnb     short loc_1409FF814
 * 00000001409FF804: mov     edx, 40h ; '@'
 * 00000001409FF809: prefetchnta byte ptr [rax]
 * 00000001409FF80C: add     rax, rdx
 * 00000001409FF80F: cmp     rax, rcx
 * 00000001409FF812: jb      short loc_1409FF809
 * 00000001409FF814: mov     ebx, r9d
 * 00000001409FF817: mov     r8, r14
 * 00000001409FF81A: shr     ebx, 7
 * 00000001409FF81D: test    ebx, ebx
 * 00000001409FF81F: jz      short loc_1409FF88B
 * 00000001409FF821: mov     rsi, 7010008004002001h
 * 00000001409FF82B: mov     edx, 8
 * 00000001409FF830: mov     rax, [r10]
 * 00000001409FF833: mov     ecx, r11d
 * 00000001409FF836: xor     rax, r8
 * 00000001409FF839: mov     r8, [r10+8]
 * 00000001409FF83D: rol     rax, cl
 * 00000001409FF840: add     r10, 10h
 * 00000001409FF844: xor     r8, rax
 * 00000001409FF847: rol     r8, cl
 * 00000001409FF84A: sub     rdx, r13
 * 00000001409FF84D: jnz     short loc_1409FF830
 * 00000001409FF84F: mov     rcx, r10
 * 00000001409FF852: sub     rcx, r15
 * 00000001409FF855: xor     rcx, r14
 * 00000001409FF858: mov     rax, rcx
 * 00000001409FF85B: rol     rax, 11h
 * 00000001409FF85F: xor     rcx, rax
 * 00000001409FF862: mov     rax, rsi
 * 00000001409FF865: mul     rcx
 * 00000001409FF868: xor     r11d, edx
 * 00000001409FF86B: mov     [rbp+0BE0h+var_648], rdx
 * 00000001409FF872: xor     r11d, eax
 * 00000001409FF875: mov     eax, 0FFFFFFFFh
 * 00000001409FF87A: and     r11d, 3Fh
 * 00000001409FF87E: cmovz   r11d, r13d
 * 00000001409FF882: add     ebx, eax
 * 00000001409FF884: jnz     short loc_1409FF82B
 * 00000001409FF886: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FF88B: and     r9d, 7Fh
 * 00000001409FF88F: cmp     r9d, 8
 * 00000001409FF893: jb      short loc_1409FF8B2
 * 00000001409FF895: mov     edx, r9d
 * 00000001409FF898: shr     rdx, 3
 * 00000001409FF89C: xor     r8, [r10]
 * 00000001409FF89F: mov     ecx, r11d
 * 00000001409FF8A2: rol     r8, cl
 * 00000001409FF8A5: add     r10, 8
 * 00000001409FF8A9: add     r9d, 0FFFFFFF8h
 * 00000001409FF8AD: sub     rdx, r13
 * 00000001409FF8B0: jnz     short loc_1409FF89C
 * 00000001409FF8B2: test    r9d, r9d
 * 00000001409FF8B5: jz      short loc_1409FF8D6
 * 00000001409FF8B7: mov     esi, 0FFFFFFFFh
 * 00000001409FF8BC: movzx   eax, byte ptr [r10]
 * 00000001409FF8C0: mov     ecx, r11d
 * 00000001409FF8C3: xor     r8, rax
 * 00000001409FF8C6: add     r10, r13
 * 00000001409FF8C9: rol     r8, cl
 * 00000001409FF8CC: add     r9d, esi
 * 00000001409FF8CF: jnz     short loc_1409FF8BC
 * 00000001409FF8D1: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FF8D6: mov     rax, r8
 * 00000001409FF8D9: jmp     loc_1409FF972
 * 00000001409FF8DE: mov     cr8, r15
 * 00000001409FF8E2: mov     r12, [rsp+0CE0h+var_C90]
 * 00000001409FF8E7: mov     eax, [rsi+8F8h]
 * 00000001409FF8ED: mov     edx, [r12+14h]
 * 00000001409FF8F2: test    eax, eax
 * 00000001409FF8F4: jnz     short loc_1409FF90C
 * 00000001409FF8F6: mov     rax, [rsi+590h]
 * 00000001409FF8FD: mov     ecx, ebx
 * 00000001409FF8FF: xor     rcx, rdx
 * 00000001409FF902: mov     [rax+18h], rcx
 * 00000001409FF906: mov     eax, [rsi+8F8h]
 * 00000001409FF90C: mov     rcx, [r12+8]
 * 00000001409FF911: mov     r13d, 1
 * 00000001409FF917: test    eax, eax
 * 00000001409FF919: jnz     loc_1409FF7BD
 * 00000001409FF91F: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF929: xor     edx, edx
 * 00000001409FF92B: add     rax, rsi
 * 00000001409FF92E: mov     [rsi+900h], rax
 * 00000001409FF935: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FF93F: add     rax, r12
 * 00000001409FF942: mov     [rsi+908h], rax
 * 00000001409FF949: movsxd  rax, dword ptr [r12]
 * 00000001409FF94D: mov     [rsi+910h], rax
 * 00000001409FF954: mov     [rsi+918h], rcx
 * 00000001409FF95B: mov     rcx, rsi
 * 00000001409FF95E: mov     [rsi+8F8h], r13d
 * 00000001409FF965: call    $$b8
 * 00000001409FF96A: jmp     loc_1409FF7BD
 * 00000001409FF96F: xor     r8d, eax
 * 00000001409FF972: shr     rax, 1Fh
 * 00000001409FF976: test    rax, rax
 * 00000001409FF979: jnz     short loc_1409FF96F
 * 00000001409FF97B: mov     edx, [r12+2Ch]
 * 00000001409FF980: btr     r8d, 1Fh
 * 00000001409FF985: cmp     r8d, edx
 * 00000001409FF988: jz      loc_1409FA318
 * 00000001409FF98E: mov     eax, [rsi+8F8h]
 * 00000001409FF994: test    eax, eax
 * 00000001409FF996: jnz     loc_1409FA318
 * 00000001409FF99C: mov     rax, [rsi+590h]
 * 00000001409FF9A3: mov     ecx, r8d
 * 00000001409FF9A6: xor     rcx, rdx
 * 00000001409FF9A9: mov     [rax+18h], rcx
 * 00000001409FF9AD: mov     eax, [rsi+8F8h]
 * 00000001409FF9B3: test    eax, eax
 * 00000001409FF9B5: jnz     loc_1409FA318
 * 00000001409FF9BB: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF9C5: add     rax, rsi
 * 00000001409FF9C8: mov     [rsi+900h], rax
 * 00000001409FF9CF: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FF9D9: add     rax, r12
 * 00000001409FF9DC: mov     [rsi+908h], rax
 * 00000001409FF9E3: movsxd  rax, dword ptr [r12]
 * 00000001409FF9E7: mov     [rsi+910h], rax
 * 00000001409FF9EE: mov     [rsi+918h], r15
 * 00000001409FF9F5: mov     [rsi+8F8h], r13d
 * 00000001409FF9FC: jmp     loc_1409FF58A
 * 00000001409FFA01: cmp     r10d, 25h ; '%'
 * 00000001409FFA05: jg      loc_140A01FD0
 * 00000001409FFA0B: jz      loc_140A01F5A
 * 00000001409FFA11: mov     ecx, r10d
 * 00000001409FFA14: sub     ecx, 1Dh
 * 00000001409FFA17: jz      loc_140A01B0C
 * 00000001409FFA1D: sub     ecx, 1
 * 00000001409FFA20: jz      loc_140A0137D
 * 00000001409FFA26: sub     ecx, 1
 * 00000001409FFA29: jz      loc_140A006D9
 * 00000001409FFA2F: sub     ecx, 1
 * 00000001409FFA32: jz      loc_140A006C9
 * 00000001409FFA38: sub     ecx, 1
 * 00000001409FFA3B: jz      loc_140A006B9
 * 00000001409FFA41: sub     ecx, 2
 * 00000001409FFA44: jz      loc_1409FFF5C
 * 00000001409FFA4A: cmp     ecx, 1
 * 00000001409FFA4D: jnz     loc_140A04767
 * 00000001409FFA53: mov     r14, [r13+8]
 * 00000001409FFA57: mov     r8d, [r13+10h]
 * 00000001409FFA5B: mov     r9, r14
 * 00000001409FFA5E: add     [rsi+828h], r8d
 * 00000001409FFA65: mov     rax, r14
 * 00000001409FFA68: mov     r10d, [rsi+814h]
 * 00000001409FFA6F: mov     r15, [rsi+818h]
 * 00000001409FFA76: lea     rcx, [r14+r8]
 * 00000001409FFA7A: cmp     r14, rcx
 * 00000001409FFA7D: jnb     short loc_1409FFA90
 * 00000001409FFA7F: mov     r11d, 40h ; '@'
 * 00000001409FFA85: prefetchnta byte ptr [rax]
 * 00000001409FFA88: add     rax, r11
 * 00000001409FFA8B: cmp     rax, rcx
 * 00000001409FFA8E: jb      short loc_1409FFA85
 * 00000001409FFA90: mov     r11d, r8d
 * 00000001409FFA93: mov     rbx, r15
 * 00000001409FFA96: shr     r11d, 7
 * 00000001409FFA9A: mov     r12d, 0FFFFFFFFh
 * 00000001409FFAA0: test    r11d, r11d
 * 00000001409FFAA3: jz      short loc_1409FFB11
 * 00000001409FFAA5: mov     rdi, 7010008004002001h
 * 00000001409FFAAF: mov     eax, 8
 * 00000001409FFAB4: xor     rbx, [r9]
 * 00000001409FFAB7: mov     ecx, r10d
 * 00000001409FFABA: rol     rbx, cl
 * 00000001409FFABD: xor     rbx, [r9+8]
 * 00000001409FFAC1: add     r9, 10h
 * 00000001409FFAC5: rol     rbx, cl
 * 00000001409FFAC8: sub     rax, rdx
 * 00000001409FFACB: jnz     short loc_1409FFAB4
 * 00000001409FFACD: mov     rcx, r9
 * 00000001409FFAD0: sub     rcx, r14
 * 00000001409FFAD3: xor     rcx, r15
 * 00000001409FFAD6: mov     rax, rcx
 * 00000001409FFAD9: rol     rax, 11h
 * 00000001409FFADD: xor     rcx, rax
 * 00000001409FFAE0: mov     rax, rdi
 * 00000001409FFAE3: mul     rcx
 * 00000001409FFAE6: xor     r10d, edx
 * 00000001409FFAE9: mov     [rbp+0BE0h+var_640], rdx
 * 00000001409FFAF0: xor     r10d, eax
 * 00000001409FFAF3: mov     edx, 1
 * 00000001409FFAF8: and     r10d, 3Fh
 * 00000001409FFAFC: cmovz   r10d, edx
 * 00000001409FFB00: add     r11d, r12d
 * 00000001409FFB03: jnz     short loc_1409FFAAF
 * 00000001409FFB05: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FFB0A: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FFB11: and     r8d, 7Fh
 * 00000001409FFB15: cmp     r8d, 8
 * 00000001409FFB19: jb      short loc_1409FFB38
 * 00000001409FFB1B: mov     eax, r8d
 * 00000001409FFB1E: shr     rax, 3
 * 00000001409FFB22: xor     rbx, [r9]
 * 00000001409FFB25: mov     ecx, r10d
 * 00000001409FFB28: rol     rbx, cl
 * 00000001409FFB2B: add     r9, 8
 * 00000001409FFB2F: add     r8d, 0FFFFFFF8h
 * 00000001409FFB33: sub     rax, rdx
 * 00000001409FFB36: jnz     short loc_1409FFB22
 * 00000001409FFB38: test    r8d, r8d
 * 00000001409FFB3B: jz      short loc_1409FFB52
 * 00000001409FFB3D: movzx   eax, byte ptr [r9]
 * 00000001409FFB41: mov     ecx, r10d
 * 00000001409FFB44: xor     rbx, rax
 * 00000001409FFB47: add     r9, rdx
 * 00000001409FFB4A: rol     rbx, cl
 * 00000001409FFB4D: add     r8d, r12d
 * 00000001409FFB50: jnz     short loc_1409FFB3D
 * 00000001409FFB52: mov     rax, rbx
 * 00000001409FFB55: jmp     short loc_1409FFB59
 * 00000001409FFB57: xor     ebx, eax
 * 00000001409FFB59: shr     rax, 1Fh
 * 00000001409FFB5D: test    rax, rax
 * 00000001409FFB60: jnz     short loc_1409FFB57
 * 00000001409FFB62: btr     ebx, 1Fh
 * 00000001409FFB66: mov     r12d, eax
 * 00000001409FFB69: cmp     ebx, [r13+14h]
 * 00000001409FFB6D: jz      loc_1409FFCD0
 * 00000001409FFB73: cmp     [r13+0], eax
 * 00000001409FFB77: jnz     short loc_1409FFB81
 * 00000001409FFB79: cmp     [r13+18h], eax
 * 00000001409FFB7D: cmovnz  r12d, edx
 * 00000001409FFB81: mov     ecx, [r13+10h]
 * 00000001409FFB85: mov     rdx, [r13+8]
 * 00000001409FFB89: test    rcx, rcx
 * 00000001409FFB8C: jz      loc_1409FFC55
 * 00000001409FFB92: mov     eax, [rsi+994h]
 * 00000001409FFB98: mov     r8d, 40h ; '@'
 * 00000001409FFB9E: test    r8b, al
 * 00000001409FFBA1: jz      loc_1409FFC55
 * 00000001409FFBA7: mov     r13, cr8
 * 00000001409FFBAB: lea     eax, [r8-3Eh]
 * 00000001409FFBAF: mov     cr8, rax
 * 00000001409FFBB3: mov     r14, rdx
 * 00000001409FFBB6: lea     rax, [rcx-1]
 * 00000001409FFBBA: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FFBC1: add     rax, rdx
 * 00000001409FFBC4: or      rax, 0FFFh
 * 00000001409FFBCA: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FFBCF: lea     rax, [r14-1]
 * 00000001409FFBD3: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FFBDA: movzx   r15d, r13b
 * 00000001409FFBDE: mov     rax, [rsi+468h]
 * 00000001409FFBE5: xor     edx, edx
 * 00000001409FFBE7: mov     rcx, r14
 * 00000001409FFBEA: call    KeGuardDispatchICall
 * 00000001409FFBEF: cmp     eax, 0C000022Dh
 * 00000001409FFBF4: jnz     short loc_1409FFC1F
 * 00000001409FFBF6: test    r12d, r12d
 * 00000001409FFBF9: jnz     short loc_1409FFC4C
 * 00000001409FFBFB: lea     eax, [r12+1]
 * 00000001409FFC00: cmp     r13b, al
 * 00000001409FFC03: ja      short loc_1409FFC23
 * 00000001409FFC05: movzx   r15d, r13b
 * 00000001409FFC09: mov     cr8, r15
 * 00000001409FFC0D: mov     al, [r14]
 * 00000001409FFC10: mov     rax, cr8
 * 00000001409FFC14: lea     eax, [r12+2]
 * 00000001409FFC19: mov     cr8, rax
 * 00000001409FFC1D: jmp     short loc_1409FFBDE
 * 00000001409FFC1F: test    eax, eax
 * 00000001409FFC21: js      short loc_1409FFC4C
 * 00000001409FFC23: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409FFC2A: mov     ecx, 1000h
 * 00000001409FFC2F: add     rax, rcx
 * 00000001409FFC32: add     r14, rcx
 * 00000001409FFC35: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FFC3C: cmp     rax, [rsp+0CE0h+var_C70]
 * 00000001409FFC41: jnz     short loc_1409FFBDA
 * 00000001409FFC43: mov     cr8, r15
 * 00000001409FFC47: jmp     loc_1409FFCD0
 * 00000001409FFC4C: mov     cr8, r15
 * 00000001409FFC50: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FFC55: mov     eax, [rsi+8F8h]
 * 00000001409FFC5B: mov     edx, [r13+14h]
 * 00000001409FFC5F: test    eax, eax
 * 00000001409FFC61: jnz     short loc_1409FFC79
 * 00000001409FFC63: mov     rax, [rsi+590h]
 * 00000001409FFC6A: mov     ecx, ebx
 * 00000001409FFC6C: xor     rcx, rdx
 * 00000001409FFC6F: mov     [rax+18h], rcx
 * 00000001409FFC73: mov     eax, [rsi+8F8h]
 * 00000001409FFC79: mov     rcx, [r13+8]
 * 00000001409FFC7D: test    eax, eax
 * 00000001409FFC7F: jnz     short loc_1409FFCD0
 * 00000001409FFC81: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FFC8B: xor     edx, edx
 * 00000001409FFC8D: add     rax, rsi
 * 00000001409FFC90: mov     [rsi+900h], rax
 * 00000001409FFC97: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FFCA1: add     rax, r13
 * 00000001409FFCA4: mov     [rsi+908h], rax
 * 00000001409FFCAB: movsxd  rax, dword ptr [r13+0]
 * 00000001409FFCAF: mov     [rsi+910h], rax
 * 00000001409FFCB6: mov     eax, 1
 * 00000001409FFCBB: mov     [rsi+918h], rcx
 * 00000001409FFCC2: mov     rcx, rsi
 * 00000001409FFCC5: mov     [rsi+8F8h], eax
 * 00000001409FFCCB: call    $$b8
 * 00000001409FFCD0: mov     rcx, [rsi+540h]
 * 00000001409FFCD7: mov     r14, cr8
 * 00000001409FFCDB: mov     eax, 0Fh
 * 00000001409FFCE0: mov     cr8, rax
 * 00000001409FFCE4: mov     rax, [rsi+150h]
 * 00000001409FFCEB: call    KeGuardDispatchICall
 * 00000001409FFCF0: mov     rax, [rsi+610h]
 * 00000001409FFCF7: mov     r12, [rsp+0CE0h+var_C90]
 * 00000001409FFCFC: mov     rcx, [rax]
 * 00000001409FFCFF: mov     eax, [rcx]
 * 00000001409FFD01: lea     rbx, [rcx+10h]
 * 00000001409FFD05: mov     r15b, [rcx+0Ch]
 * 00000001409FFD09: lea     rcx, [rax+rax*2]
 * 00000001409FFD0D: lea     r13, [rbx+rcx*8]
 * 00000001409FFD11: mov     r8d, 18h
 * 00000001409FFD17: lea     r9, [r12+18h]
 * 00000001409FFD1C: mov     r10, rbx
 * 00000001409FFD1F: mov     rcx, [r10]
 * 00000001409FFD22: add     r10, 8
 * 00000001409FFD26: mov     rax, [r9]
 * 00000001409FFD29: add     r9, 8
 * 00000001409FFD2D: cmp     rcx, rax
 * 00000001409FFD30: jnz     short loc_1409FFD66
 * 00000001409FFD32: add     r8d, 0FFFFFFF8h
 * 00000001409FFD36: cmp     r8d, 8
 * 00000001409FFD3A: jnb     short loc_1409FFD1F
 * 00000001409FFD3C: test    r8d, r8d
 * 00000001409FFD3F: jz      short loc_1409FFD6F
 * 00000001409FFD41: mov     r11d, 1
 * 00000001409FFD47: movzx   edx, byte ptr [r10]
 * 00000001409FFD4B: add     r10, r11
 * 00000001409FFD4E: movzx   eax, byte ptr [r9]
 * 00000001409FFD52: add     r9, r11
 * 00000001409FFD55: cmp     rdx, rax
 * 00000001409FFD58: jnz     short loc_1409FFD66
 * 00000001409FFD5A: mov     eax, 0FFFFFFFFh
 * 00000001409FFD5F: add     r8d, eax
 * 00000001409FFD62: jz      short loc_1409FFD6F
 * 00000001409FFD64: jmp     short loc_1409FFD47
 * 00000001409FFD66: add     rbx, 18h
 * 00000001409FFD6A: cmp     rbx, r13
 * 00000001409FFD6D: jb      short loc_1409FFD11
 * 00000001409FFD6F: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FFD74: mov     rcx, [rsi+540h]
 * 00000001409FFD7B: mov     rax, [rsi+190h]
 * 00000001409FFD82: call    KeGuardDispatchICall
 * 00000001409FFD87: movzx   eax, r14b
 * 00000001409FFD8B: mov     cr8, rax
 * 00000001409FFD8F: xor     eax, eax
 * 00000001409FFD91: test    r15b, r15b
 * 00000001409FFD94: jz      short loc_1409FFE12
 * 00000001409FFD96: mov     eax, [rsi+994h]
 * 00000001409FFD9C: mov     ecx, 10h
 * 00000001409FFDA1: test    cl, al
 * 00000001409FFDA3: jz      short loc_1409FFE02
 * 00000001409FFDA5: xor     eax, eax
 * 00000001409FFDA7: cmp     [rsi+8F8h], eax
 * 00000001409FFDAD: jnz     short loc_1409FFE02
 * 00000001409FFDAF: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FFDB4: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FFDBE: add     rax, rsi
 * 00000001409FFDC1: xor     edx, edx
 * 00000001409FFDC3: mov     [rsi+900h], rax
 * 00000001409FFDCA: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FFDD4: add     rax, rcx
 * 00000001409FFDD7: mov     [rsi+908h], rax
 * 00000001409FFDDE: movsxd  rax, dword ptr [rcx]
 * 00000001409FFDE1: mov     rcx, rsi
 * 00000001409FFDE4: mov     [rsi+910h], rax
 * 00000001409FFDEB: mov     eax, 1
 * 00000001409FFDF0: mov     [rsi+918h], rax
 * 00000001409FFDF7: mov     [rsi+8F8h], eax
 * 00000001409FFDFD: call    $$b8
 * 00000001409FFE02: mov     ecx, 1
 * 00000001409FFE07: cmp     [r12+18h], rcx
 * 00000001409FFE0C: jz      short loc_1409FFE76
 * 00000001409FFE0E: xor     eax, eax
 * 00000001409FFE10: jmp     short loc_1409FFE17
 * 00000001409FFE12: mov     ecx, 1
 * 00000001409FFE17: cmp     rbx, r13
 * 00000001409FFE1A: jnz     short loc_1409FFE76
 * 00000001409FFE1C: mov     r13, 0B3B74BDEE4453415h
 * 00000001409FFE26: mov     r12, [rsp+0CE0h+var_C90]
 * 00000001409FFE2B: cmp     [rsi+8F8h], eax
 * 00000001409FFE31: jnz     short loc_1409FFE85
 * 00000001409FFE33: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FFE3D: xor     edx, edx
 * 00000001409FFE3F: add     rax, rsi
 * 00000001409FFE42: mov     [rsi+900h], rax
 * 00000001409FFE49: lea     rax, [r12+r13]
 * 00000001409FFE4D: mov     [rsi+908h], rax
 * 00000001409FFE54: movsxd  rax, dword ptr [r12]
 * 00000001409FFE58: mov     [rsi+910h], rax
 * 00000001409FFE5F: mov     [rsi+918h], rbx
 * 00000001409FFE66: mov     [rsi+8F8h], ecx
 * 00000001409FFE6C: mov     rcx, rsi
 * 00000001409FFE6F: call    $$b8
 * 00000001409FFE74: jmp     short loc_1409FFE85
 * 00000001409FFE76: mov     r12, [rsp+0CE0h+var_C90]
 * 00000001409FFE7B: mov     r13, 0B3B74BDEE4453415h
 * 00000001409FFE85: mov     rcx, [rsi+540h]
 * 00000001409FFE8C: mov     r15, cr8
 * 00000001409FFE90: mov     eax, 0Fh
 * 00000001409FFE95: mov     cr8, rax
 * 00000001409FFE99: mov     rax, [rsi+150h]
 * 00000001409FFEA0: call    KeGuardDispatchICall
 * 00000001409FFEA5: mov     rax, [rsi+610h]
 * 00000001409FFEAC: mov     rcx, [rax]
 * 00000001409FFEAF: mov     eax, [rcx]
 * 00000001409FFEB1: lea     rbx, [rcx+10h]
 * 00000001409FFEB5: lea     rcx, [rax+rax*2]
 * 00000001409FFEB9: xor     eax, eax
 * 00000001409FFEBB: lea     r14, [rbx+rcx*8]
 * 00000001409FFEBF: jmp     short loc_1409FFEE8
 * 00000001409FFEC1: mov     rcx, [rbx+8]
 * 00000001409FFEC5: cmp     rcx, rdx
 * 00000001409FFEC8: jb      short loc_1409FFEF4
 * 00000001409FFECA: mov     rax, rcx
 * 00000001409FFECD: and     rax, 0FFFFFFFFFFFFF000h
 * 00000001409FFED3: cmp     rax, rcx
 * 00000001409FFED6: jnz     short loc_1409FFEF4
 * 00000001409FFED8: mov     eax, [rbx+10h]
 * 00000001409FFEDB: add     rax, rcx
 * 00000001409FFEDE: cmp     rax, rcx
 * 00000001409FFEE1: jbe     short loc_1409FFEF4
 * 00000001409FFEE3: cmp     rax, rdx
 * 00000001409FFEE6: jz      short loc_1409FFEF4
 * 00000001409FFEE8: add     rbx, 18h
 * 00000001409FFEEC: mov     rdx, rax
 * 00000001409FFEEF: cmp     rbx, r14
 * 00000001409FFEF2: jb      short loc_1409FFEC1
 * 00000001409FFEF4: mov     rcx, [rsi+540h]
 * 00000001409FFEFB: mov     rax, [rsi+190h]
 * 00000001409FFF02: call    KeGuardDispatchICall
 * 00000001409FFF07: movzx   eax, r15b
 * 00000001409FFF0B: mov     cr8, rax
 * 00000001409FFF0F: cmp     rbx, r14
 * 00000001409FFF12: jz      loc_1409FA318
 * 00000001409FFF18: xor     eax, eax
 * 00000001409FFF1A: cmp     [rsi+8F8h], eax
 * 00000001409FFF20: jnz     loc_1409FA318
 * 00000001409FFF26: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FFF30: add     rax, rsi
 * 00000001409FFF33: mov     [rsi+900h], rax
 * 00000001409FFF3A: lea     rax, [r12+r13]
 * 00000001409FFF3E: mov     [rsi+908h], rax
 * 00000001409FFF45: movsxd  rax, dword ptr [r12]
 * 00000001409FFF49: mov     [rsi+910h], rax
 * 00000001409FFF50: mov     [rsi+918h], rbx
 * 00000001409FFF57: jmp     loc_1409FF57F
 * 00000001409FFF5C: mov     ecx, [r13+28h]
 * 00000001409FFF60: and     ecx, edx
 * 00000001409FFF62: jz      short loc_1409FFF81
 * 00000001409FFF64: xor     eax, eax
 * 00000001409FFF66: cmp     [rsi+980h], rax
 * 00000001409FFF6D: jz      loc_1409FA312
 * 00000001409FFF73: mov     eax, [rsi+994h]
 * 00000001409FFF79: test    al, 4
 * 00000001409FFF7B: jnz     loc_1409FA3EA
 * 00000001409FFF81: xor     eax, eax
 * 00000001409FFF83: test    ecx, ecx
 * 00000001409FFF85: jz      loc_140A0049C
 * 00000001409FFF8B: mov     edx, [rsi+994h]
 * 00000001409FFF91: mov     ecx, edx
 * 00000001409FFF93: cmp     [rsi+824h], eax
 * 00000001409FFF99: jnz     short loc_1409FFFAD
 * 00000001409FFF9B: shl     ecx, 3
 * 00000001409FFF9E: xor     ecx, edx
 * 00000001409FFFA0: and     ecx, 20h
 * 00000001409FFFA3: xor     ecx, edx
 * 00000001409FFFA5: mov     [rsi+994h], ecx
 * 00000001409FFFAB: jmp     short loc_1409FFFBE
 * 00000001409FFFAD: mov     eax, edx
 * 00000001409FFFAF: shr     eax, 3
 * 00000001409FFFB2: xor     eax, edx
 * 00000001409FFFB4: test    al, 4
 * 00000001409FFFB6: jnz     loc_1409FA3EA
 * 00000001409FFFBC: xor     eax, eax
 * 00000001409FFFBE: cmp     [rsi+980h], rax
 * 00000001409FFFC5: jz      loc_140A00491
 * 00000001409FFFCB: mov     edx, ecx
 * 00000001409FFFCD: cmp     [rsi+824h], eax
 * 00000001409FFFD3: jnz     short loc_1409FFFE7
 * 00000001409FFFD5: shl     edx, 3
 * 00000001409FFFD8: xor     edx, ecx
 * 00000001409FFFDA: and     edx, 20h
 * 00000001409FFFDD: xor     edx, ecx
 * 00000001409FFFDF: mov     [rsi+994h], edx
 * 00000001409FFFE5: jmp     short loc_1409FFFF6
 * 00000001409FFFE7: mov     eax, ecx
 * 00000001409FFFE9: shr     eax, 3
 * 00000001409FFFEC: xor     eax, ecx
 * 00000001409FFFEE: test    al, 4
 * 00000001409FFFF0: jnz     loc_140A0048F
 * 00000001409FFFF6: test    dl, 4
 * 00000001409FFFF9: jz      loc_140A00209
 * 00000001409FFFFF: mov     r14d, [r13+8]
 * 0000000140A00003: mov     r12d, 1
 * 0000000140A00009: mov     ecx, [r13+10h]
 * 0000000140A0000D: and     r14d, 0FFFh
 * 0000000140A00014: mov     rbx, [r13+8]
 * 0000000140A00018: add     r14, 0FFFh
 * 0000000140A0001F: add     r14, rcx
 * 0000000140A00022: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A00029: shr     r14, 0Ch
 * 0000000140A0002D: test    r14, r14
 * 0000000140A00030: jz      loc_140A000BE
 * 0000000140A00036: xor     edi, edi
 * 0000000140A00038: mov     rax, [rsi+2B0h]
 * 0000000140A0003F: mov     rcx, rbx
 * 0000000140A00042: sub     r14, r12
 * 0000000140A00045: call    KeGuardDispatchICall
 * 0000000140A0004A: test    al, al
 * 0000000140A0004C: jz      short loc_140A000A1
 * 0000000140A0004E: cmp     [rsi+8F8h], edi
 * 0000000140A00054: jnz     short loc_140A000A1
 * 0000000140A00056: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00060: xor     edx, edx
 * 0000000140A00062: add     rax, rsi
 * 0000000140A00065: mov     rcx, rsi
 * 0000000140A00068: mov     [rsi+900h], rax
 * 0000000140A0006F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00079: add     rax, r13
 * 0000000140A0007C: mov     [rsi+908h], rax
 * 0000000140A00083: movsxd  rax, dword ptr [r13+0]
 * 0000000140A00087: mov     [rsi+910h], rax
 * 0000000140A0008E: mov     [rsi+918h], rbx
 * 0000000140A00095: mov     [rsi+8F8h], r12d
 * 0000000140A0009C: call    $$b8
 * 0000000140A000A1: add     dword ptr [rsi+828h], 100h
 * 0000000140A000AB: add     rbx, 1000h
 * 0000000140A000B2: test    r14, r14
 * 0000000140A000B5: jnz     short loc_140A00038
 * 0000000140A000B7: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A000BE: xor     r15d, r15d
 * 0000000140A000C1: mov     r14, 0B3B74BDEE4453415h
 * 0000000140A000CB: mov     eax, [r13+28h]
 * 0000000140A000CF: mov     ecx, 2
 * 0000000140A000D4: test    cl, al
 * 0000000140A000D6: jz      loc_1409FA31B
 * 0000000140A000DC: mov     rbx, [r13+8]
 * 0000000140A000E0: test    al, 4
 * 0000000140A000E2: jz      loc_140A00171
 * 0000000140A000E8: mov     rax, [rbx+70h]
 * 0000000140A000EC: mov     rdx, [r13+18h]
 * 0000000140A000F0: mov     rcx, [rax]
 * 0000000140A000F3: cmp     rcx, rdx
 * 0000000140A000F6: jz      short loc_140A00171
 * 0000000140A000F8: mov     rax, [rsi+590h]
 * 0000000140A000FF: mov     [rax], rcx
 * 0000000140A00102: mov     dword ptr [rax+10h], 100h
 * 0000000140A00109: mov     eax, [rsi+8F8h]
 * 0000000140A0010F: test    eax, eax
 * 0000000140A00111: jnz     short loc_140A00127
 * 0000000140A00113: mov     rax, [rsi+590h]
 * 0000000140A0011A: xor     rcx, rdx
 * 0000000140A0011D: mov     [rax+18h], rcx
 * 0000000140A00121: mov     eax, [rsi+8F8h]
 * 0000000140A00127: mov     rcx, [rbx+70h]
 * 0000000140A0012B: test    eax, eax
 * 0000000140A0012D: jnz     short loc_140A00171
 * 0000000140A0012F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00139: xor     edx, edx
 * 0000000140A0013B: add     rax, rsi
 * 0000000140A0013E: mov     [rsi+900h], rax
 * 0000000140A00145: lea     rax, [r14+r13]
 * 0000000140A00149: mov     [rsi+908h], rax
 * 0000000140A00150: movsxd  rax, dword ptr [r13+0]
 * 0000000140A00154: mov     [rsi+910h], rax
 * 0000000140A0015B: mov     [rsi+918h], rcx
 * 0000000140A00162: mov     rcx, rsi
 * 0000000140A00165: mov     [rsi+8F8h], r12d
 * 0000000140A0016C: call    $$b8
 * 0000000140A00171: mov     eax, [r13+28h]
 * 0000000140A00175: test    al, 8
 * 0000000140A00177: jz      loc_1409FA31B
 * 0000000140A0017D: mov     rax, [rbx+78h]
 * 0000000140A00181: mov     rdx, [r13+20h]
 * 0000000140A00185: mov     rcx, [rax]
 * 0000000140A00188: cmp     rcx, rdx
 * 0000000140A0018B: jz      loc_1409FA31B
 * 0000000140A00191: mov     rax, [rsi+590h]
 * 0000000140A00198: mov     [rax], rcx
 * 0000000140A0019B: mov     dword ptr [rax+10h], 100h
 * 0000000140A001A2: mov     eax, [rsi+8F8h]
 * 0000000140A001A8: test    eax, eax
 * 0000000140A001AA: jnz     short loc_140A001C0
 * 0000000140A001AC: mov     rax, [rsi+590h]
 * 0000000140A001B3: xor     rcx, rdx
 * 0000000140A001B6: mov     [rax+18h], rcx
 * 0000000140A001BA: mov     eax, [rsi+8F8h]
 * 0000000140A001C0: mov     rcx, [rbx+78h]
 * 0000000140A001C4: test    eax, eax
 * 0000000140A001C6: jnz     loc_1409FA31B
 * 0000000140A001CC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A001D6: add     rax, rsi
 * 0000000140A001D9: mov     [rsi+900h], rax
 * 0000000140A001E0: lea     rax, [r14+r13]
 * 0000000140A001E4: mov     [rsi+908h], rax
 * 0000000140A001EB: movsxd  rax, dword ptr [r13+0]
 * 0000000140A001EF: mov     [rsi+910h], rax
 * 0000000140A001F6: mov     [rsi+918h], rcx
 * 0000000140A001FD: mov     [rsi+8F8h], r12d
 * 0000000140A00204: jmp     loc_1409FA6F2
 * 0000000140A00209: mov     r14, [r13+8]
 * 0000000140A0020D: mov     r8d, [r13+10h]
 * 0000000140A00211: mov     r9, r14
 * 0000000140A00214: add     [rsi+828h], r8d
 * 0000000140A0021B: mov     rax, r14
 * 0000000140A0021E: mov     r11d, [rsi+814h]
 * 0000000140A00225: mov     r15, [rsi+818h]
 * 0000000140A0022C: lea     rcx, [r14+r8]
 * 0000000140A00230: cmp     r14, rcx
 * 0000000140A00233: jnb     short loc_140A00245
 * 0000000140A00235: mov     edx, 40h ; '@'
 * 0000000140A0023A: prefetchnta byte ptr [rax]
 * 0000000140A0023D: add     rax, rdx
 * 0000000140A00240: cmp     rax, rcx
 * 0000000140A00243: jb      short loc_140A0023A
 * 0000000140A00245: mov     r10d, r8d
 * 0000000140A00248: mov     rbx, r15
 * 0000000140A0024B: shr     r10d, 7
 * 0000000140A0024F: mov     r12d, 1
 * 0000000140A00255: test    r10d, r10d
 * 0000000140A00258: jz      short loc_140A002C5
 * 0000000140A0025A: mov     rsi, 7010008004002001h
 * 0000000140A00264: mov     edx, 8
 * 0000000140A00269: mov     rax, [r9]
 * 0000000140A0026C: mov     ecx, r11d
 * 0000000140A0026F: xor     rax, rbx
 * 0000000140A00272: mov     rbx, [r9+8]
 * 0000000140A00276: rol     rax, cl
 * 0000000140A00279: add     r9, 10h
 * 0000000140A0027D: xor     rbx, rax
 * 0000000140A00280: rol     rbx, cl
 * 0000000140A00283: sub     rdx, r12
 * 0000000140A00286: jnz     short loc_140A00269
 * 0000000140A00288: mov     rcx, r9
 * 0000000140A0028B: sub     rcx, r14
 * 0000000140A0028E: xor     rcx, r15
 * 0000000140A00291: mov     rax, rcx
 * 0000000140A00294: rol     rax, 11h
 * 0000000140A00298: xor     rcx, rax
 * 0000000140A0029B: mov     rax, rsi
 * 0000000140A0029E: mul     rcx
 * 0000000140A002A1: xor     r11d, edx
 * 0000000140A002A4: mov     [rbp+0BE0h+var_638], rdx
 * 0000000140A002AB: xor     r11d, eax
 * 0000000140A002AE: mov     eax, 0FFFFFFFFh
 * 0000000140A002B3: and     r11d, 3Fh
 * 0000000140A002B7: cmovz   r11d, r12d
 * 0000000140A002BB: add     r10d, eax
 * 0000000140A002BE: jnz     short loc_140A00264
 * 0000000140A002C0: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A002C5: and     r8d, 7Fh
 * 0000000140A002C9: cmp     r8d, 8
 * 0000000140A002CD: jb      short loc_140A002EC
 * 0000000140A002CF: mov     edx, r8d
 * 0000000140A002D2: shr     rdx, 3
 * 0000000140A002D6: xor     rbx, [r9]
 * 0000000140A002D9: mov     ecx, r11d
 * 0000000140A002DC: rol     rbx, cl
 * 0000000140A002DF: add     r9, 8
 * 0000000140A002E3: add     r8d, 0FFFFFFF8h
 * 0000000140A002E7: sub     rdx, r12
 * 0000000140A002EA: jnz     short loc_140A002D6
 * 0000000140A002EC: test    r8d, r8d
 * 0000000140A002EF: jz      short loc_140A00310
 * 0000000140A002F1: mov     esi, 0FFFFFFFFh
 * 0000000140A002F6: movzx   eax, byte ptr [r9]
 * 0000000140A002FA: mov     ecx, r11d
 * 0000000140A002FD: xor     rbx, rax
 * 0000000140A00300: add     r9, r12
 * 0000000140A00303: rol     rbx, cl
 * 0000000140A00306: add     r8d, esi
 * 0000000140A00309: jnz     short loc_140A002F6
 * 0000000140A0030B: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A00310: mov     rax, rbx
 * 0000000140A00313: shr     rax, 1Fh
 * 0000000140A00317: xor     r15d, r15d
 * 0000000140A0031A: jmp     short loc_140A00322
 * 0000000140A0031C: xor     ebx, eax
 * 0000000140A0031E: shr     rax, 1Fh
 * 0000000140A00322: test    rax, rax
 * 0000000140A00325: jnz     short loc_140A0031C
 * 0000000140A00327: mov     r8d, [r13+14h]
 * 0000000140A0032B: btr     ebx, 1Fh
 * 0000000140A0032F: cmp     ebx, r8d
 * 0000000140A00332: jz      loc_140A000C1
 * 0000000140A00338: mov     ecx, [r13+10h]
 * 0000000140A0033C: mov     rdx, [r13+8]
 * 0000000140A00340: test    rcx, rcx
 * 0000000140A00343: jz      loc_140A00406
 * 0000000140A00349: mov     eax, [rsi+994h]
 * 0000000140A0034F: mov     r9d, 40h ; '@'
 * 0000000140A00355: test    r9b, al
 * 0000000140A00358: jz      loc_140A00406
 * 0000000140A0035E: mov     r12, cr8
 * 0000000140A00362: lea     eax, [r9-3Eh]
 * 0000000140A00366: mov     cr8, rax
 * 0000000140A0036A: mov     r14, rdx
 * 0000000140A0036D: lea     rax, [rcx-1]
 * 0000000140A00371: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A00378: add     rax, rdx
 * 0000000140A0037B: or      rax, 0FFFh
 * 0000000140A00381: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A00388: lea     r13, [r14-1]
 * 0000000140A0038C: movzx   r15d, r12b
 * 0000000140A00390: mov     rax, [rsi+468h]
 * 0000000140A00397: xor     edx, edx
 * 0000000140A00399: mov     rcx, r14
 * 0000000140A0039C: call    KeGuardDispatchICall
 * 0000000140A003A1: cmp     eax, 0C000022Dh
 * 0000000140A003A6: jnz     short loc_140A003CC
 * 0000000140A003A8: mov     eax, 1
 * 0000000140A003AD: cmp     r12b, al
 * 0000000140A003B0: ja      short loc_140A003D0
 * 0000000140A003B2: movzx   r15d, r12b
 * 0000000140A003B6: mov     cr8, r15
 * 0000000140A003BA: mov     al, [r14]
 * 0000000140A003BD: mov     rax, cr8
 * 0000000140A003C1: mov     eax, 2
 * 0000000140A003C6: mov     cr8, rax
 * 0000000140A003CA: jmp     short loc_140A00390
 * 0000000140A003CC: test    eax, eax
 * 0000000140A003CE: js      short loc_140A003F9
 * 0000000140A003D0: mov     r11d, 1000h
 * 0000000140A003D6: add     r14, r11
 * 0000000140A003D9: add     r13, r11
 * 0000000140A003DC: cmp     r13, [rbp+0BE0h+arg_8]
 * 0000000140A003E3: jnz     short loc_140A0038C
 * 0000000140A003E5: mov     cr8, r15
 * 0000000140A003E9: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A003EE: mov     r12d, 1
 * 0000000140A003F4: jmp     loc_140A000BE
 * 0000000140A003F9: mov     cr8, r15
 * 0000000140A003FD: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A00402: mov     r8d, [r13+14h]
 * 0000000140A00406: mov     eax, [rsi+8F8h]
 * 0000000140A0040C: xor     r15d, r15d
 * 0000000140A0040F: test    eax, eax
 * 0000000140A00411: jnz     short loc_140A0042C
 * 0000000140A00413: mov     ecx, r8d
 * 0000000140A00416: mov     eax, ebx
 * 0000000140A00418: xor     rcx, rax
 * 0000000140A0041B: mov     rax, [rsi+590h]
 * 0000000140A00422: mov     [rax+18h], rcx
 * 0000000140A00426: mov     eax, [rsi+8F8h]
 * 0000000140A0042C: mov     rcx, [r13+8]
 * 0000000140A00430: mov     r14, 0B3B74BDEE4453415h
 * 0000000140A0043A: mov     r12d, 1
 * 0000000140A00440: test    eax, eax
 * 0000000140A00442: jnz     loc_140A000CB
 * 0000000140A00448: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00452: xor     edx, edx
 * 0000000140A00454: add     rax, rsi
 * 0000000140A00457: mov     [rsi+900h], rax
 * 0000000140A0045E: lea     rax, [r14+r13]
 * 0000000140A00462: mov     [rsi+908h], rax
 * 0000000140A00469: movsxd  rax, dword ptr [r13+0]
 * 0000000140A0046D: mov     [rsi+910h], rax
 * 0000000140A00474: mov     [rsi+918h], rcx
 * 0000000140A0047B: mov     rcx, rsi
 * 0000000140A0047E: mov     [rsi+8F8h], r12d
 * 0000000140A00485: call    $$b8
 * 0000000140A0048A: jmp     loc_140A000CB
 * 0000000140A0048F: xor     eax, eax
 * 0000000140A00491: mov     [rsi+824h], eax
 * 0000000140A00497: jmp     loc_140A003EE
 * 0000000140A0049C: mov     r14, [r13+8]
 * 0000000140A004A0: mov     r8d, [r13+10h]
 * 0000000140A004A4: mov     r9, r14
 * 0000000140A004A7: add     [rsi+828h], r8d
 * 0000000140A004AE: mov     rax, r14
 * 0000000140A004B1: mov     r10d, [rsi+814h]
 * 0000000140A004B8: mov     r15, [rsi+818h]
 * 0000000140A004BF: lea     rcx, [r14+r8]
 * 0000000140A004C3: cmp     r14, rcx
 * 0000000140A004C6: jnb     short loc_140A004D9
 * 0000000140A004C8: mov     r11d, 40h ; '@'
 * 0000000140A004CE: prefetchnta byte ptr [rax]
 * 0000000140A004D1: add     rax, r11
 * 0000000140A004D4: cmp     rax, rcx
 * 0000000140A004D7: jb      short loc_140A004CE
 * 0000000140A004D9: mov     r11d, r8d
 * 0000000140A004DC: mov     rbx, r15
 * 0000000140A004DF: shr     r11d, 7
 * 0000000140A004E3: mov     r12d, 0FFFFFFFFh
 * 0000000140A004E9: test    r11d, r11d
 * 0000000140A004EC: jz      short loc_140A0055A
 * 0000000140A004EE: mov     rdi, 7010008004002001h
 * 0000000140A004F8: mov     eax, 8
 * 0000000140A004FD: xor     rbx, [r9]
 * 0000000140A00500: mov     ecx, r10d
 * 0000000140A00503: rol     rbx, cl
 * 0000000140A00506: xor     rbx, [r9+8]
 * 0000000140A0050A: add     r9, 10h
 * 0000000140A0050E: rol     rbx, cl
 * 0000000140A00511: sub     rax, rdx
 * 0000000140A00514: jnz     short loc_140A004FD
 * 0000000140A00516: mov     rcx, r9
 * 0000000140A00519: sub     rcx, r14
 * 0000000140A0051C: xor     rcx, r15
 * 0000000140A0051F: mov     rax, rcx
 * 0000000140A00522: rol     rax, 11h
 * 0000000140A00526: xor     rcx, rax
 * 0000000140A00529: mov     rax, rdi
 * 0000000140A0052C: mul     rcx
 * 0000000140A0052F: xor     r10d, edx
 * 0000000140A00532: mov     [rbp+0BE0h+var_630], rdx
 * 0000000140A00539: xor     r10d, eax
 * 0000000140A0053C: mov     edx, 1
 * 0000000140A00541: and     r10d, 3Fh
 * 0000000140A00545: cmovz   r10d, edx
 * 0000000140A00549: add     r11d, r12d
 * 0000000140A0054C: jnz     short loc_140A004F8
 * 0000000140A0054E: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A00553: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0055A: and     r8d, 7Fh
 * 0000000140A0055E: cmp     r8d, 8
 * 0000000140A00562: jb      short loc_140A00581
 * 0000000140A00564: mov     eax, r8d
 * 0000000140A00567: shr     rax, 3
 * 0000000140A0056B: xor     rbx, [r9]
 * 0000000140A0056E: mov     ecx, r10d
 * 0000000140A00571: rol     rbx, cl
 * 0000000140A00574: add     r9, 8
 * 0000000140A00578: add     r8d, 0FFFFFFF8h
 * 0000000140A0057C: sub     rax, rdx
 * 0000000140A0057F: jnz     short loc_140A0056B
 * 0000000140A00581: test    r8d, r8d
 * 0000000140A00584: jz      short loc_140A0059B
 * 0000000140A00586: movzx   eax, byte ptr [r9]
 * 0000000140A0058A: mov     ecx, r10d
 * 0000000140A0058D: xor     rbx, rax
 * 0000000140A00590: add     r9, rdx
 * 0000000140A00593: rol     rbx, cl
 * 0000000140A00596: add     r8d, r12d
 * 0000000140A00599: jnz     short loc_140A00586
 * 0000000140A0059B: mov     rax, rbx
 * 0000000140A0059E: shr     rax, 1Fh
 * 0000000140A005A2: xor     ecx, ecx
 * 0000000140A005A4: jmp     short loc_140A005AC
 * 0000000140A005A6: xor     ebx, eax
 * 0000000140A005A8: shr     rax, 1Fh
 * 0000000140A005AC: test    rax, rax
 * 0000000140A005AF: jnz     short loc_140A005A6
 * 0000000140A005B1: mov     r13d, eax
 * 0000000140A005B4: btr     ebx, 1Fh
 * 0000000140A005B8: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A005BD: cmp     ebx, [rax+14h]
 * 0000000140A005C0: jz      loc_140A003E9
 * 0000000140A005C6: cmp     [rax], ecx
 * 0000000140A005C8: jnz     short loc_140A005D1
 * 0000000140A005CA: cmp     [rax+18h], ecx
 * 0000000140A005CD: cmovnz  r13d, edx
 * 0000000140A005D1: mov     ecx, [rax+10h]
 * 0000000140A005D4: mov     rdx, [rax+8]
 * 0000000140A005D8: test    rcx, rcx
 * 0000000140A005DB: jz      loc_140A0069A
 * 0000000140A005E1: mov     eax, [rsi+994h]
 * 0000000140A005E7: mov     r8d, 40h ; '@'
 * 0000000140A005ED: test    r8b, al
 * 0000000140A005F0: jz      loc_140A0069A
 * 0000000140A005F6: mov     r12, cr8
 * 0000000140A005FA: lea     eax, [r8-3Eh]
 * 0000000140A005FE: mov     cr8, rax
 * 0000000140A00602: mov     r14, rdx
 * 0000000140A00605: lea     rax, [rcx-1]
 * 0000000140A00609: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A00610: add     rax, rdx
 * 0000000140A00613: or      rax, 0FFFh
 * 0000000140A00619: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A0061E: lea     rax, [r14-1]
 * 0000000140A00622: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A00629: movzx   r15d, r12b
 * 0000000140A0062D: mov     rax, [rsi+468h]
 * 0000000140A00634: xor     edx, edx
 * 0000000140A00636: mov     rcx, r14
 * 0000000140A00639: call    KeGuardDispatchICall
 * 0000000140A0063E: cmp     eax, 0C000022Dh
 * 0000000140A00643: jnz     short loc_140A0066C
 * 0000000140A00645: test    r13d, r13d
 * 0000000140A00648: jnz     short loc_140A00696
 * 0000000140A0064A: lea     eax, [r13+1]
 * 0000000140A0064E: cmp     r12b, al
 * 0000000140A00651: ja      short loc_140A00670
 * 0000000140A00653: movzx   r15d, r12b
 * 0000000140A00657: mov     cr8, r15
 * 0000000140A0065B: mov     al, [r14]
 * 0000000140A0065E: mov     rax, cr8
 * 0000000140A00662: lea     eax, [r13+2]
 * 0000000140A00666: mov     cr8, rax
 * 0000000140A0066A: jmp     short loc_140A0062D
 * 0000000140A0066C: test    eax, eax
 * 0000000140A0066E: js      short loc_140A00696
 * 0000000140A00670: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A00677: mov     r11d, 1000h
 * 0000000140A0067D: add     rax, r11
 * 0000000140A00680: add     r14, r11
 * 0000000140A00683: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A0068A: cmp     rax, [rsp+0CE0h+var_C70]
 * 0000000140A0068F: jnz     short loc_140A00629
 * 0000000140A00691: jmp     loc_140A003E5
 * 0000000140A00696: mov     cr8, r15
 * 0000000140A0069A: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A0069F: xor     r15d, r15d
 * 0000000140A006A2: mov     eax, [rsi+8F8h]
 * 0000000140A006A8: mov     ecx, [r13+14h]
 * 0000000140A006AC: test    eax, eax
 * 0000000140A006AE: jnz     loc_140A0042C
 * 0000000140A006B4: jmp     loc_140A00416
 * 0000000140A006B9: mov     rdx, r13
 * 0000000140A006BC: mov     rcx, rsi
 * 0000000140A006BF: call    sub_1403EA6DC
 * 0000000140A006C4: jmp     loc_1409FA318
 * 0000000140A006C9: mov     rdx, r13
 * 0000000140A006CC: mov     rcx, rsi
 * 0000000140A006CF: call    sub_1403EB648
 * 0000000140A006D4: jmp     loc_1409FA318
 * 0000000140A006D9: mov     eax, [rsi+830h]
 * 0000000140A006DF: test    dl, al
 * 0000000140A006E1: jz      loc_1409FA318
 * 0000000140A006E7: xor     eax, eax
 * 0000000140A006E9: cmp     [rsi+980h], rax
 * 0000000140A006F0: jz      short loc_140A0072E
 * 0000000140A006F2: mov     eax, [rsi+994h]
 * 0000000140A006F8: test    al, 4
 * 0000000140A006FA: jnz     short loc_140A0072C
 * 0000000140A006FC: mov     rax, [rsi+3D0h]
 * 0000000140A00703: lea     rdx, [rbp+0BE0h+var_840]
 * 0000000140A0070A: xor     r9d, r9d
 * 0000000140A0070D: xor     r8d, r8d
 * 0000000140A00710: lea     ecx, [r9+1Ah]
 * 0000000140A00714: call    KeGuardDispatchICall
 * 0000000140A00719: mov     rbx, [rbp+0BE0h+var_840]
 * 0000000140A00720: xor     ecx, ecx
 * 0000000140A00722: test    eax, eax
 * 0000000140A00724: mov     eax, ecx
 * 0000000140A00726: cmovs   rbx, rcx
 * 0000000140A0072A: jmp     short loc_140A00731
 * 0000000140A0072C: xor     eax, eax
 * 0000000140A0072E: mov     rbx, rax
 * 0000000140A00731: mov     r14d, eax
 * 0000000140A00734: mov     [rsp+0CE0h+var_C78], eax
 * 0000000140A00738: mov     rax, [rsi+3B0h]
 * 0000000140A0073F: xor     ecx, ecx
 * 0000000140A00741: mov     [rsp+0CE0h+var_C88], rbx
 * 0000000140A00746: call    KeGuardDispatchICall
 * 0000000140A0074B: xor     r15d, r15d
 * 0000000140A0074E: lea     r12d, [r15+1]
 * 0000000140A00752: test    rax, rax
 * 0000000140A00755: jz      loc_140A00F64
 * 0000000140A0075B: mov     rdi, rax
 * 0000000140A0075E: mov     rcx, rdi
 * 0000000140A00761: cmp     rbx, rdi
 * 0000000140A00764: jnz     loc_140A00B2B
 * 0000000140A0076A: mov     rax, [rsi+3A0h]
 * 0000000140A00771: mov     r12, r13
 * 0000000140A00774: call    KeGuardDispatchICall
 * 0000000140A00779: test    eax, eax
 * 0000000140A0077B: js      loc_140A00F34
 * 0000000140A00781: mov     rax, [rsi+3E0h]
 * 0000000140A00788: mov     rcx, rdi
 * 0000000140A0078B: call    KeGuardDispatchICall
 * 0000000140A00790: mov     bl, al
 * 0000000140A00792: mov     [rbp+0BE0h+var_B40], al
 * 0000000140A00798: mov     rax, [rsi+3E8h]
 * 0000000140A0079F: lea     rdx, [rbp+0BE0h+arg_18]
 * 0000000140A007A6: mov     rcx, rdi
 * 0000000140A007A9: call    KeGuardDispatchICall
 * 0000000140A007AE: mov     byte ptr [rbp+0BE0h+arg_8], al
 * 0000000140A007B4: mov     rcx, rdi
 * 0000000140A007B7: mov     rax, [rsi+3F0h]
 * 0000000140A007BE: call    KeGuardDispatchICall
 * 0000000140A007C3: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A007C8: cmp     bl, 61h ; 'a'
 * 0000000140A007CB: jz      short loc_140A00846
 * 0000000140A007CD: mov     eax, [rsi+8F8h]
 * 0000000140A007D3: test    eax, eax
 * 0000000140A007D5: jnz     short loc_140A00846
 * 0000000140A007D7: mov     rax, [rsi+590h]
 * 0000000140A007DE: movzx   ecx, bl
 * 0000000140A007E1: xor     rcx, 61h
 * 0000000140A007E5: mov     [rax+18h], rcx
 * 0000000140A007E9: mov     eax, [rsi+8F8h]
 * 0000000140A007EF: test    eax, eax
 * 0000000140A007F1: jnz     short loc_140A00846
 * 0000000140A007F3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A007FD: mov     r15d, 1
 * 0000000140A00803: add     rax, rsi
 * 0000000140A00806: xor     edx, edx
 * 0000000140A00808: mov     [rsi+900h], rax
 * 0000000140A0080F: mov     rcx, rsi
 * 0000000140A00812: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0081C: add     rax, r13
 * 0000000140A0081F: mov     [rsi+908h], rax
 * 0000000140A00826: movsxd  rax, dword ptr [r13+0]
 * 0000000140A0082A: mov     [rsi+910h], rax
 * 0000000140A00831: mov     [rsi+918h], rdi
 * 0000000140A00838: mov     [rsi+8F8h], r15d
 * 0000000140A0083F: call    $$b8
 * 0000000140A00844: jmp     short loc_140A0084C
 * 0000000140A00846: mov     r15d, 1
 * 0000000140A0084C: xor     eax, eax
 * 0000000140A0084E: movzx   ecx, bl
 * 0000000140A00851: and     ecx, 7
 * 0000000140A00854: mov     r14b, al
 * 0000000140A00857: mov     r13b, al
 * 0000000140A0085A: sub     ecx, 1
 * 0000000140A0085D: jz      short loc_140A008CF
 * 0000000140A0085F: cmp     ecx, 1
 * 0000000140A00862: jz      short loc_140A008C2
 * 0000000140A00864: test    bl, 7
 * 0000000140A00867: jz      short loc_140A008D2
 * 0000000140A00869: cmp     [rsi+8F8h], eax
 * 0000000140A0086F: jnz     short loc_140A008D2
 * 0000000140A00871: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0087B: xor     edx, edx
 * 0000000140A0087D: add     rax, rsi
 * 0000000140A00880: mov     rcx, rsi
 * 0000000140A00883: mov     [rsi+900h], rax
 * 0000000140A0088A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00894: add     rax, r12
 * 0000000140A00897: mov     [rsi+908h], rax
 * 0000000140A0089E: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A008A3: movsxd  rax, dword ptr [rax]
 * 0000000140A008A6: mov     [rsi+910h], rax
 * 0000000140A008AD: mov     [rsi+918h], rdi
 * 0000000140A008B4: mov     [rsi+8F8h], r15d
 * 0000000140A008BB: call    $$b8
 * 0000000140A008C0: jmp     short loc_140A008D2
 * 0000000140A008C2: mov     eax, 10h
 * 0000000140A008C7: mov     r14b, al
 * 0000000140A008CA: mov     r13b, al
 * 0000000140A008CD: jmp     short loc_140A008D2
 * 0000000140A008CF: mov     r14b, 30h ; '0'
 * 0000000140A008D2: mov     r15, [rsi+5C8h]
 * 0000000140A008D9: movzx   ebx, bl
 * 0000000140A008DC: shr     rbx, 4
 * 0000000140A008E0: mov     al, [r15+rbx*2]
 * 0000000140A008E4: or      al, r14b
 * 0000000140A008E7: mov     r14, [rsp+0CE0h+var_C90]
 * 0000000140A008EC: cmp     al, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A008F2: jz      short loc_140A0094C
 * 0000000140A008F4: xor     eax, eax
 * 0000000140A008F6: cmp     [rsi+8F8h], eax
 * 0000000140A008FC: jnz     short loc_140A0094C
 * 0000000140A008FE: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00908: xor     edx, edx
 * 0000000140A0090A: add     rax, rsi
 * 0000000140A0090D: mov     rcx, rsi
 * 0000000140A00910: mov     [rsi+900h], rax
 * 0000000140A00917: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00921: add     rax, r12
 * 0000000140A00924: mov     [rsi+908h], rax
 * 0000000140A0092B: movsxd  rax, dword ptr [r14]
 * 0000000140A0092E: mov     [rsi+910h], rax
 * 0000000140A00935: mov     eax, 1
 * 0000000140A0093A: mov     [rsi+918h], rdi
 * 0000000140A00941: mov     [rsi+8F8h], eax
 * 0000000140A00947: call    $$b8
 * 0000000140A0094C: mov     al, [r15+rbx*2+1]
 * 0000000140A00951: mov     ebx, 1
 * 0000000140A00956: or      al, r13b
 * 0000000140A00959: cmp     al, [rbp+0BE0h+arg_18]
 * 0000000140A0095F: jz      short loc_140A009B4
 * 0000000140A00961: xor     eax, eax
 * 0000000140A00963: cmp     [rsi+8F8h], eax
 * 0000000140A00969: jnz     short loc_140A009B6
 * 0000000140A0096B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00975: xor     edx, edx
 * 0000000140A00977: add     rax, rsi
 * 0000000140A0097A: mov     rcx, rsi
 * 0000000140A0097D: mov     [rsi+900h], rax
 * 0000000140A00984: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0098E: add     rax, r12
 * 0000000140A00991: mov     [rsi+908h], rax
 * 0000000140A00998: movsxd  rax, dword ptr [r14]
 * 0000000140A0099B: mov     [rsi+910h], rax
 * 0000000140A009A2: mov     [rsi+918h], rdi
 * 0000000140A009A9: mov     [rsi+8F8h], ebx
 * 0000000140A009AF: call    $$b8
 * 0000000140A009B4: xor     eax, eax
 * 0000000140A009B6: cmp     rdi, [rsi+4E0h]
 * 0000000140A009BD: jz      short loc_140A009D0
 * 0000000140A009BF: mov     rax, [rsi+3D8h]
 * 0000000140A009C6: mov     edx, ebx
 * 0000000140A009C8: mov     rcx, rdi
 * 0000000140A009CB: call    KeGuardDispatchICall
 * 0000000140A009D0: mov     [rbp+0BE0h+var_C60], rax
 * 0000000140A009D4: mov     r14, rax
 * 0000000140A009D7: test    rax, rax
 * 0000000140A009DA: jz      loc_140A00F08
 * 0000000140A009E0: mov     rcx, [rax]
 * 0000000140A009E3: mov     rbx, rax
 * 0000000140A009E6: test    rcx, rcx
 * 0000000140A009E9: jz      loc_140A00EF9
 * 0000000140A009EF: mov     r14b, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A009F6: mov     r13, [rsp+0CE0h+var_C70]
 * 0000000140A009FB: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140A009FF: mov     [rbx], rcx
 * 0000000140A00A02: mov     rax, [rsi+1E0h]
 * 0000000140A00A09: call    KeGuardDispatchICall
 * 0000000140A00A0E: mov     rcx, [rbx+8]
 * 0000000140A00A12: movzx   edx, [rbp+0BE0h+arg_18]
 * 0000000140A00A19: mov     r15, rcx
 * 0000000140A00A1C: movzx   eax, r14b
 * 0000000140A00A20: and     r15, 0FFFFFFFFFFFF0000h
 * 0000000140A00A27: cmp     r15, r13
 * 0000000140A00A2A: cmovz   edx, eax
 * 0000000140A00A2D: mov     rax, [rsi+3F8h]
 * 0000000140A00A34: shr     rcx, 6
 * 0000000140A00A38: and     cl, 0Fh
 * 0000000140A00A3B: call    KeGuardDispatchICall
 * 0000000140A00A40: test    eax, eax
 * 0000000140A00A42: jnz     loc_140A00B16
 * 0000000140A00A48: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A00A52: lea     r9d, [rax+1]
 * 0000000140A00A56: jz      short loc_140A00AA6
 * 0000000140A00A58: mov     rcx, [rsi+0A80h]
 * 0000000140A00A5F: lea     edx, [rax+30h]
 * 0000000140A00A62: lea     r8d, [rax+6]
 * 0000000140A00A66: mov     rax, [r12]
 * 0000000140A00A6A: add     edx, 0FFFFFFF8h
 * 0000000140A00A6D: mov     [rcx], rax
 * 0000000140A00A70: add     r12, 8
 * 0000000140A00A74: add     rcx, 8
 * 0000000140A00A78: sub     r8, r9
 * 0000000140A00A7B: jnz     short loc_140A00A66
 * 0000000140A00A7D: test    edx, edx
 * 0000000140A00A7F: jz      short loc_140A00A9F
 * 0000000140A00A81: mov     r14d, 0FFFFFFFFh
 * 0000000140A00A87: mov     al, [r12]
 * 0000000140A00A8B: add     r12, r9
 * 0000000140A00A8E: mov     [rcx], al
 * 0000000140A00A90: add     rcx, r9
 * 0000000140A00A93: add     edx, r14d
 * 0000000140A00A96: jnz     short loc_140A00A87
 * 0000000140A00A98: mov     r14b, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A00A9F: mov     r12, [rsi+0A80h]
 * 0000000140A00AA6: mov     [r12+18h], r15
 * 0000000140A00AAB: mov     rax, [rbx]
 * 0000000140A00AAE: mov     [r12+20h], rax
 * 0000000140A00AB3: mov     eax, [rbx+8]
 * 0000000140A00AB6: shr     rax, 6
 * 0000000140A00ABA: and     al, 0Fh
 * 0000000140A00ABC: mov     [r12+28h], al
 * 0000000140A00AC1: xor     eax, eax
 * 0000000140A00AC3: cmp     [rsi+8F8h], eax
 * 0000000140A00AC9: jnz     short loc_140A00B16
 * 0000000140A00ACB: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00AD5: xor     edx, edx
 * 0000000140A00AD7: add     rax, rsi
 * 0000000140A00ADA: mov     rcx, rsi
 * 0000000140A00ADD: mov     [rsi+900h], rax
 * 0000000140A00AE4: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00AEE: add     rax, r12
 * 0000000140A00AF1: mov     [rsi+908h], rax
 * 0000000140A00AF8: movsxd  rax, dword ptr [r12]
 * 0000000140A00AFC: mov     [rsi+910h], rax
 * 0000000140A00B03: mov     [rsi+918h], rdi
 * 0000000140A00B0A: mov     [rsi+8F8h], r9d
 * 0000000140A00B11: call    $$b8
 * 0000000140A00B16: add     rbx, 30h ; '0'
 * 0000000140A00B1A: mov     rcx, [rbx]
 * 0000000140A00B1D: test    rcx, rcx
 * 0000000140A00B20: jnz     loc_140A009FB
 * 0000000140A00B26: jmp     loc_140A00EF5
 * 0000000140A00B2B: mov     rax, [rsi+3C8h]
 * 0000000140A00B32: call    KeGuardDispatchICall
 * 0000000140A00B37: test    eax, eax
 * 0000000140A00B39: jz      loc_140A00F3A
 * 0000000140A00B3F: mov     rax, [rsi+3A0h]
 * 0000000140A00B46: mov     rcx, rdi
 * 0000000140A00B49: mov     r12, r13
 * 0000000140A00B4C: call    KeGuardDispatchICall
 * 0000000140A00B51: test    eax, eax
 * 0000000140A00B53: js      loc_140A00F34
 * 0000000140A00B59: mov     rax, [rsi+3E0h]
 * 0000000140A00B60: mov     rcx, rdi
 * 0000000140A00B63: call    KeGuardDispatchICall
 * 0000000140A00B68: mov     bl, al
 * 0000000140A00B6A: mov     [rbp+0BE0h+var_B3F], al
 * 0000000140A00B70: mov     rax, [rsi+3E8h]
 * 0000000140A00B77: lea     rdx, [rbp+0BE0h+var_BEC]
 * 0000000140A00B7B: mov     rcx, rdi
 * 0000000140A00B7E: call    KeGuardDispatchICall
 * 0000000140A00B83: mov     byte ptr [rbp+0BE0h+arg_8], al
 * 0000000140A00B89: mov     rcx, rdi
 * 0000000140A00B8C: mov     rax, [rsi+3F0h]
 * 0000000140A00B93: call    KeGuardDispatchICall
 * 0000000140A00B98: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A00B9D: cmp     bl, 61h ; 'a'
 * 0000000140A00BA0: jz      short loc_140A00C1B
 * 0000000140A00BA2: mov     eax, [rsi+8F8h]
 * 0000000140A00BA8: test    eax, eax
 * 0000000140A00BAA: jnz     short loc_140A00C1B
 * 0000000140A00BAC: mov     rax, [rsi+590h]
 * 0000000140A00BB3: movzx   ecx, bl
 * 0000000140A00BB6: xor     rcx, 61h
 * 0000000140A00BBA: mov     [rax+18h], rcx
 * 0000000140A00BBE: mov     eax, [rsi+8F8h]
 * 0000000140A00BC4: test    eax, eax
 * 0000000140A00BC6: jnz     short loc_140A00C1B
 * 0000000140A00BC8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00BD2: mov     r15d, 1
 * 0000000140A00BD8: add     rax, rsi
 * 0000000140A00BDB: xor     edx, edx
 * 0000000140A00BDD: mov     [rsi+900h], rax
 * 0000000140A00BE4: mov     rcx, rsi
 * 0000000140A00BE7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00BF1: add     rax, r13
 * 0000000140A00BF4: mov     [rsi+908h], rax
 * 0000000140A00BFB: movsxd  rax, dword ptr [r13+0]
 * 0000000140A00BFF: mov     [rsi+910h], rax
 * 0000000140A00C06: mov     [rsi+918h], rdi
 * 0000000140A00C0D: mov     [rsi+8F8h], r15d
 * 0000000140A00C14: call    $$b8
 * 0000000140A00C19: jmp     short loc_140A00C21
 * 0000000140A00C1B: mov     r15d, 1
 * 0000000140A00C21: xor     eax, eax
 * 0000000140A00C23: movzx   ecx, bl
 * 0000000140A00C26: and     ecx, 7
 * 0000000140A00C29: mov     r14b, al
 * 0000000140A00C2C: mov     r13b, al
 * 0000000140A00C2F: sub     ecx, 1
 * 0000000140A00C32: jz      short loc_140A00CA4
 * 0000000140A00C34: cmp     ecx, 1
 * 0000000140A00C37: jz      short loc_140A00C97
 * 0000000140A00C39: test    bl, 7
 * 0000000140A00C3C: jz      short loc_140A00CA7
 * 0000000140A00C3E: cmp     [rsi+8F8h], eax
 * 0000000140A00C44: jnz     short loc_140A00CA7
 * 0000000140A00C46: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00C50: xor     edx, edx
 * 0000000140A00C52: add     rax, rsi
 * 0000000140A00C55: mov     rcx, rsi
 * 0000000140A00C58: mov     [rsi+900h], rax
 * 0000000140A00C5F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00C69: add     rax, r12
 * 0000000140A00C6C: mov     [rsi+908h], rax
 * 0000000140A00C73: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A00C78: movsxd  rax, dword ptr [rax]
 * 0000000140A00C7B: mov     [rsi+910h], rax
 * 0000000140A00C82: mov     [rsi+918h], rdi
 * 0000000140A00C89: mov     [rsi+8F8h], r15d
 * 0000000140A00C90: call    $$b8
 * 0000000140A00C95: jmp     short loc_140A00CA7
 * 0000000140A00C97: mov     eax, 10h
 * 0000000140A00C9C: mov     r14b, al
 * 0000000140A00C9F: mov     r13b, al
 * 0000000140A00CA2: jmp     short loc_140A00CA7
 * 0000000140A00CA4: mov     r14b, 30h ; '0'
 * 0000000140A00CA7: mov     r15, [rsi+5C8h]
 * 0000000140A00CAE: movzx   ebx, bl
 * 0000000140A00CB1: shr     rbx, 4
 * 0000000140A00CB5: mov     al, [r15+rbx*2]
 * 0000000140A00CB9: or      al, r14b
 * 0000000140A00CBC: mov     r14, [rsp+0CE0h+var_C90]
 * 0000000140A00CC1: cmp     al, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A00CC7: jz      short loc_140A00D21
 * 0000000140A00CC9: xor     eax, eax
 * 0000000140A00CCB: cmp     [rsi+8F8h], eax
 * 0000000140A00CD1: jnz     short loc_140A00D21
 * 0000000140A00CD3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00CDD: xor     edx, edx
 * 0000000140A00CDF: add     rax, rsi
 * 0000000140A00CE2: mov     rcx, rsi
 * 0000000140A00CE5: mov     [rsi+900h], rax
 * 0000000140A00CEC: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00CF6: add     rax, r12
 * 0000000140A00CF9: mov     [rsi+908h], rax
 * 0000000140A00D00: movsxd  rax, dword ptr [r14]
 * 0000000140A00D03: mov     [rsi+910h], rax
 * 0000000140A00D0A: mov     eax, 1
 * 0000000140A00D0F: mov     [rsi+918h], rdi
 * 0000000140A00D16: mov     [rsi+8F8h], eax
 * 0000000140A00D1C: call    $$b8
 * 0000000140A00D21: mov     al, [r15+rbx*2+1]
 * 0000000140A00D26: mov     ebx, 1
 * 0000000140A00D2B: or      al, r13b
 * 0000000140A00D2E: cmp     al, [rbp+0BE0h+var_BEC]
 * 0000000140A00D31: jz      short loc_140A00D86
 * 0000000140A00D33: xor     eax, eax
 * 0000000140A00D35: cmp     [rsi+8F8h], eax
 * 0000000140A00D3B: jnz     short loc_140A00D88
 * 0000000140A00D3D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00D47: xor     edx, edx
 * 0000000140A00D49: add     rax, rsi
 * 0000000140A00D4C: mov     rcx, rsi
 * 0000000140A00D4F: mov     [rsi+900h], rax
 * 0000000140A00D56: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00D60: add     rax, r12
 * 0000000140A00D63: mov     [rsi+908h], rax
 * 0000000140A00D6A: movsxd  rax, dword ptr [r14]
 * 0000000140A00D6D: mov     [rsi+910h], rax
 * 0000000140A00D74: mov     [rsi+918h], rdi
 * 0000000140A00D7B: mov     [rsi+8F8h], ebx
 * 0000000140A00D81: call    $$b8
 * 0000000140A00D86: xor     eax, eax
 * 0000000140A00D88: cmp     rdi, [rsi+4E0h]
 * 0000000140A00D8F: jz      short loc_140A00DA2
 * 0000000140A00D91: mov     rax, [rsi+3D8h]
 * 0000000140A00D98: mov     edx, ebx
 * 0000000140A00D9A: mov     rcx, rdi
 * 0000000140A00D9D: call    KeGuardDispatchICall
 * 0000000140A00DA2: mov     [rbp+0BE0h+var_C60], rax
 * 0000000140A00DA6: mov     r14, rax
 * 0000000140A00DA9: test    rax, rax
 * 0000000140A00DAC: jz      loc_140A00F08
 * 0000000140A00DB2: mov     rcx, [rax]
 * 0000000140A00DB5: mov     rbx, rax
 * 0000000140A00DB8: test    rcx, rcx
 * 0000000140A00DBB: jz      loc_140A00EF9
 * 0000000140A00DC1: mov     r14b, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A00DC8: mov     r13, [rsp+0CE0h+var_C70]
 * 0000000140A00DCD: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140A00DD1: mov     [rbx], rcx
 * 0000000140A00DD4: mov     rax, [rsi+1E0h]
 * 0000000140A00DDB: call    KeGuardDispatchICall
 * 0000000140A00DE0: mov     rcx, [rbx+8]
 * 0000000140A00DE4: movzx   edx, [rbp+0BE0h+var_BEC]
 * 0000000140A00DE8: mov     r15, rcx
 * 0000000140A00DEB: movzx   eax, r14b
 * 0000000140A00DEF: and     r15, 0FFFFFFFFFFFF0000h
 * 0000000140A00DF6: cmp     r15, r13
 * 0000000140A00DF9: cmovz   edx, eax
 * 0000000140A00DFC: mov     rax, [rsi+3F8h]
 * 0000000140A00E03: shr     rcx, 6
 * 0000000140A00E07: and     cl, 0Fh
 * 0000000140A00E0A: call    KeGuardDispatchICall
 * 0000000140A00E0F: test    eax, eax
 * 0000000140A00E11: jnz     loc_140A00EE5
 * 0000000140A00E17: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A00E21: lea     r9d, [rax+1]
 * 0000000140A00E25: jz      short loc_140A00E75
 * 0000000140A00E27: mov     rcx, [rsi+0A80h]
 * 0000000140A00E2E: lea     edx, [rax+30h]
 * 0000000140A00E31: lea     r8d, [rax+6]
 * 0000000140A00E35: mov     rax, [r12]
 * 0000000140A00E39: add     edx, 0FFFFFFF8h
 * 0000000140A00E3C: mov     [rcx], rax
 * 0000000140A00E3F: add     r12, 8
 * 0000000140A00E43: add     rcx, 8
 * 0000000140A00E47: sub     r8, r9
 * 0000000140A00E4A: jnz     short loc_140A00E35
 * 0000000140A00E4C: test    edx, edx
 * 0000000140A00E4E: jz      short loc_140A00E6E
 * 0000000140A00E50: mov     r14d, 0FFFFFFFFh
 * 0000000140A00E56: mov     al, [r12]
 * 0000000140A00E5A: add     r12, r9
 * 0000000140A00E5D: mov     [rcx], al
 * 0000000140A00E5F: add     rcx, r9
 * 0000000140A00E62: add     edx, r14d
 * 0000000140A00E65: jnz     short loc_140A00E56
 * 0000000140A00E67: mov     r14b, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A00E6E: mov     r12, [rsi+0A80h]
 * 0000000140A00E75: mov     [r12+18h], r15
 * 0000000140A00E7A: mov     rax, [rbx]
 * 0000000140A00E7D: mov     [r12+20h], rax
 * 0000000140A00E82: mov     eax, [rbx+8]
 * 0000000140A00E85: shr     rax, 6
 * 0000000140A00E89: and     al, 0Fh
 * 0000000140A00E8B: mov     [r12+28h], al
 * 0000000140A00E90: xor     eax, eax
 * 0000000140A00E92: cmp     [rsi+8F8h], eax
 * 0000000140A00E98: jnz     short loc_140A00EE5
 * 0000000140A00E9A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00EA4: xor     edx, edx
 * 0000000140A00EA6: add     rax, rsi
 * 0000000140A00EA9: mov     rcx, rsi
 * 0000000140A00EAC: mov     [rsi+900h], rax
 * 0000000140A00EB3: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00EBD: add     rax, r12
 * 0000000140A00EC0: mov     [rsi+908h], rax
 * 0000000140A00EC7: movsxd  rax, dword ptr [r12]
 * 0000000140A00ECB: mov     [rsi+910h], rax
 * 0000000140A00ED2: mov     [rsi+918h], rdi
 * 0000000140A00ED9: mov     [rsi+8F8h], r9d
 * 0000000140A00EE0: call    $$b8
 * 0000000140A00EE5: add     rbx, 30h ; '0'
 * 0000000140A00EE9: mov     rcx, [rbx]
 * 0000000140A00EEC: test    rcx, rcx
 * 0000000140A00EEF: jnz     loc_140A00DCD
 * 0000000140A00EF5: mov     r14, [rbp+0BE0h+var_C60]
 * 0000000140A00EF9: mov     rax, [rsi+100h]
 * 0000000140A00F00: mov     rcx, r14
 * 0000000140A00F03: call    KeGuardDispatchICall
 * 0000000140A00F08: mov     rax, [rsi+3A8h]
 * 0000000140A00F0F: mov     rcx, rdi
 * 0000000140A00F12: call    KeGuardDispatchICall
 * 0000000140A00F17: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A00F1C: mov     eax, 8000h
 * 0000000140A00F21: add     [rsi+828h], eax
 * 0000000140A00F27: mov     r14d, [rsp+0CE0h+var_C78]
 * 0000000140A00F2C: xor     r15d, r15d
 * 0000000140A00F2F: mov     rbx, [rsp+0CE0h+var_C88]
 * 0000000140A00F34: mov     r12d, 1
 * 0000000140A00F3A: mov     rax, [rsi+3B0h]
 * 0000000140A00F41: add     r14d, r12d
 * 0000000140A00F44: mov     rcx, rdi
 * 0000000140A00F47: mov     [rsp+0CE0h+var_C78], r14d
 * 0000000140A00F4C: call    KeGuardDispatchICall
 * 0000000140A00F51: mov     rdi, rax
 * 0000000140A00F54: test    rax, rax
 * 0000000140A00F57: jnz     loc_140A0075E
 * 0000000140A00F5D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A00F64: mov     r13, [rsi+4E0h]
 * 0000000140A00F6B: mov     rax, [rsi+3A0h]
 * 0000000140A00F72: mov     rcx, r13
 * 0000000140A00F75: call    KeGuardDispatchICall
 * 0000000140A00F7A: test    eax, eax
 * 0000000140A00F7C: js      loc_140A01357
 * 0000000140A00F82: mov     rax, [rsi+3E0h]
 * 0000000140A00F89: mov     rcx, r13
 * 0000000140A00F8C: call    KeGuardDispatchICall
 * 0000000140A00F91: mov     bl, al
 * 0000000140A00F93: mov     [rbp+0BE0h+var_B3E], al
 * 0000000140A00F99: mov     rax, [rsi+3E8h]
 * 0000000140A00FA0: lea     rdx, [rbp+0BE0h+var_C00]
 * 0000000140A00FA4: mov     rcx, r13
 * 0000000140A00FA7: call    KeGuardDispatchICall
 * 0000000140A00FAC: mov     byte ptr [rbp+0BE0h+arg_8], al
 * 0000000140A00FB2: mov     rcx, r13
 * 0000000140A00FB5: mov     rax, [rsi+3F0h]
 * 0000000140A00FBC: call    KeGuardDispatchICall
 * 0000000140A00FC1: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A00FC6: cmp     bl, 72h ; 'r'
 * 0000000140A00FC9: jz      short loc_140A01042
 * 0000000140A00FCB: mov     eax, [rsi+8F8h]
 * 0000000140A00FD1: test    eax, eax
 * 0000000140A00FD3: jnz     short loc_140A01042
 * 0000000140A00FD5: mov     rax, [rsi+590h]
 * 0000000140A00FDC: movzx   ecx, bl
 * 0000000140A00FDF: xor     rcx, 72h
 * 0000000140A00FE3: mov     [rax+18h], rcx
 * 0000000140A00FE7: mov     eax, [rsi+8F8h]
 * 0000000140A00FED: test    eax, eax
 * 0000000140A00FEF: jnz     short loc_140A01042
 * 0000000140A00FF1: mov     r15, [rsp+0CE0h+var_C90]
 * 0000000140A00FF6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A01000: add     rax, rsi
 * 0000000140A01003: xor     edx, edx
 * 0000000140A01005: mov     [rsi+900h], rax
 * 0000000140A0100C: mov     rcx, rsi
 * 0000000140A0100F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A01019: add     rax, r15
 * 0000000140A0101C: mov     [rsi+908h], rax
 * 0000000140A01023: movsxd  rax, dword ptr [r15]
 * 0000000140A01026: mov     [rsi+910h], rax
 * 0000000140A0102D: mov     [rsi+918h], r13
 * 0000000140A01034: mov     [rsi+8F8h], r12d
 * 0000000140A0103B: call    $$b8
 * 0000000140A01040: jmp     short loc_140A01047
 * 0000000140A01042: mov     r15, [rsp+0CE0h+var_C90]
 * 0000000140A01047: xor     edx, edx
 * 0000000140A01049: movzx   ecx, bl
 * 0000000140A0104C: and     ecx, 7
 * 0000000140A0104F: mov     r14b, dl
 * 0000000140A01052: mov     r12b, dl
 * 0000000140A01055: sub     ecx, 1
 * 0000000140A01058: jz      short loc_140A010C7
 * 0000000140A0105A: cmp     ecx, 1
 * 0000000140A0105D: jz      short loc_140A010BA
 * 0000000140A0105F: test    bl, 7
 * 0000000140A01062: jz      short loc_140A010CA
 * 0000000140A01064: cmp     [rsi+8F8h], edx
 * 0000000140A0106A: jnz     short loc_140A010CA
 * 0000000140A0106C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A01076: mov     rcx, rsi
 * 0000000140A01079: add     rax, rsi
 * 0000000140A0107C: mov     [rsi+900h], rax
 * 0000000140A01083: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0108D: add     rax, r15
 * 0000000140A01090: mov     [rsi+908h], rax
 * 0000000140A01097: movsxd  rax, dword ptr [r15]
 * 0000000140A0109A: mov     [rsi+910h], rax
 * 0000000140A010A1: lea     eax, [rdx+1]
 * 0000000140A010A4: mov     [rsi+918h], r13
 * 0000000140A010AB: mov     [rsi+8F8h], eax
 * 0000000140A010B1: call    $$b8
 * 0000000140A010B6: xor     edx, edx
 * 0000000140A010B8: jmp     short loc_140A010CA
 * 0000000140A010BA: mov     eax, 10h
 * 0000000140A010BF: mov     r14b, al
 * 0000000140A010C2: mov     r12b, al
 * 0000000140A010C5: jmp     short loc_140A010CA
 * 0000000140A010C7: mov     r14b, 30h ; '0'
 * 0000000140A010CA: mov     r15, [rsi+5C8h]
 * 0000000140A010D1: movzx   ebx, bl
 * 0000000140A010D4: shr     rbx, 4
 * 0000000140A010D8: mov     al, [r15+rbx*2]
 * 0000000140A010DC: or      al, r14b
 * 0000000140A010DF: mov     r14, [rsp+0CE0h+var_C90]
 * 0000000140A010E4: cmp     al, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A010EA: jz      short loc_140A01142
 * 0000000140A010EC: cmp     [rsi+8F8h], edx
 * 0000000140A010F2: jnz     short loc_140A01142
 * 0000000140A010F4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A010FE: xor     edx, edx
 * 0000000140A01100: add     rax, rsi
 * 0000000140A01103: mov     rcx, rsi
 * 0000000140A01106: mov     [rsi+900h], rax
 * 0000000140A0110D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A01117: add     rax, r14
 * 0000000140A0111A: mov     [rsi+908h], rax
 * 0000000140A01121: movsxd  rax, dword ptr [r14]
 * 0000000140A01124: mov     [rsi+910h], rax
 * 0000000140A0112B: mov     eax, 1
 * 0000000140A01130: mov     [rsi+918h], r13
 * 0000000140A01137: mov     [rsi+8F8h], eax
 * 0000000140A0113D: call    $$b8
 * 0000000140A01142: mov     al, [r15+rbx*2+1]
 * 0000000140A01147: xor     r15d, r15d
 * 0000000140A0114A: or      al, r12b
 * 0000000140A0114D: lea     ebx, [r15+1]
 * 0000000140A01151: cmp     al, [rbp+0BE0h+var_C00]
 * 0000000140A01154: jz      short loc_140A011A8
 * 0000000140A01156: cmp     [rsi+8F8h], r15d
 * 0000000140A0115D: jnz     short loc_140A011A8
 * 0000000140A0115F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A01169: xor     edx, edx
 * 0000000140A0116B: add     rax, rsi
 * 0000000140A0116E: mov     rcx, rsi
 * 0000000140A01171: mov     [rsi+900h], rax
 * 0000000140A01178: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A01182: add     rax, r14
 * 0000000140A01185: mov     [rsi+908h], rax
 * 0000000140A0118C: movsxd  rax, dword ptr [r14]
 * 0000000140A0118F: mov     [rsi+910h], rax
 * 0000000140A01196: mov     [rsi+918h], r13
 * 0000000140A0119D: mov     [rsi+8F8h], ebx
 * 0000000140A011A3: call    $$b8
 * 0000000140A011A8: cmp     r13, [rsi+4E0h]
 * 0000000140A011AF: jz      short loc_140A011C7
 * 0000000140A011B1: mov     rax, [rsi+3D8h]
 * 0000000140A011B8: mov     edx, ebx
 * 0000000140A011BA: mov     rcx, r13
 * 0000000140A011BD: call    KeGuardDispatchICall
 * 0000000140A011C2: mov     r14, rax
 * 0000000140A011C5: jmp     short loc_140A011CA
 * 0000000140A011C7: mov     r14, r15
 * 0000000140A011CA: mov     [rbp+0BE0h+var_C60], r14
 * 0000000140A011CE: test    r14, r14
 * 0000000140A011D1: jz      loc_140A01338
 * 0000000140A011D7: mov     rcx, [r14]
 * 0000000140A011DA: mov     rbx, r14
 * 0000000140A011DD: test    rcx, rcx
 * 0000000140A011E0: jz      loc_140A01329
 * 0000000140A011E6: mov     dil, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A011ED: mov     r12, [rsp+0CE0h+var_C70]
 * 0000000140A011F2: mov     r14, [rsp+0CE0h+var_C90]
 * 0000000140A011F7: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140A011FB: mov     [rbx], rcx
 * 0000000140A011FE: mov     rax, [rsi+1E0h]
 * 0000000140A01205: call    KeGuardDispatchICall
 * 0000000140A0120A: mov     rcx, [rbx+8]
 * 0000000140A0120E: movzx   edx, [rbp+0BE0h+var_C00]
 * 0000000140A01212: mov     r15, rcx
 * 0000000140A01215: movzx   eax, dil
 * 0000000140A01219: and     r15, 0FFFFFFFFFFFF0000h
 * 0000000140A01220: cmp     r15, r12
 * 0000000140A01223: cmovz   edx, eax
 * 0000000140A01226: mov     rax, [rsi+3F8h]
 * 0000000140A0122D: shr     rcx, 6
 * 0000000140A01231: and     cl, 0Fh
 * 0000000140A01234: call    KeGuardDispatchICall
 * 0000000140A01239: test    eax, eax
 * 0000000140A0123B: jnz     loc_140A0130B
 * 0000000140A01241: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A0124B: lea     r10d, [rax+1]
 * 0000000140A0124F: jz      short loc_140A0129B
 * 0000000140A01251: mov     rcx, [rsi+0A80h]
 * 0000000140A01258: lea     edx, [rax+30h]
 * 0000000140A0125B: lea     r8d, [rax+6]
 * 0000000140A0125F: mov     rax, [r14]
 * 0000000140A01262: add     edx, 0FFFFFFF8h
 * 0000000140A01265: mov     [rcx], rax
 * 0000000140A01268: add     r14, 8
 * 0000000140A0126C: add     rcx, 8
 * 0000000140A01270: sub     r8, r10
 * 0000000140A01273: jnz     short loc_140A0125F
 * 0000000140A01275: test    edx, edx
 * 0000000140A01277: jz      short loc_140A01294
 * 0000000140A01279: mov     edi, 0FFFFFFFFh
 * 0000000140A0127E: mov     al, [r14]
 * 0000000140A01281: add     r14, r10
 * 0000000140A01284: mov     [rcx], al
 * 0000000140A01286: add     rcx, r10
 * 0000000140A01289: add     edx, edi
 * 0000000140A0128B: jnz     short loc_140A0127E
 * 0000000140A0128D: mov     dil, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A01294: mov     r14, [rsi+0A80h]
 * 0000000140A0129B: mov     [r14+18h], r15
 * 0000000140A0129F: xor     r15d, r15d
 * 0000000140A012A2: mov     rax, [rbx]
 * 0000000140A012A5: mov     [r14+20h], rax
 * 0000000140A012A9: mov     eax, [rbx+8]
 * 0000000140A012AC: shr     rax, 6
 * 0000000140A012B0: and     al, 0Fh
 * 0000000140A012B2: mov     [r14+28h], al
 * 0000000140A012B6: cmp     [rsi+8F8h], r15d
 * 0000000140A012BD: jnz     short loc_140A0130E
 * 0000000140A012BF: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A012C9: xor     edx, edx
 * 0000000140A012CB: add     rax, rsi
 * 0000000140A012CE: mov     rcx, rsi
 * 0000000140A012D1: mov     [rsi+900h], rax
 * 0000000140A012D8: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A012E2: add     rax, r14
 * 0000000140A012E5: mov     [rsi+908h], rax
 * 0000000140A012EC: movsxd  rax, dword ptr [r14]
 * 0000000140A012EF: mov     [rsi+910h], rax
 * 0000000140A012F6: mov     [rsi+918h], r13
 * 0000000140A012FD: mov     [rsi+8F8h], r10d
 * 0000000140A01304: call    $$b8
 * 0000000140A01309: jmp     short loc_140A0130E
 * 0000000140A0130B: xor     r15d, r15d
 * 0000000140A0130E: add     rbx, 30h ; '0'
 * 0000000140A01312: mov     rcx, [rbx]
 * 0000000140A01315: test    rcx, rcx
 * 0000000140A01318: jnz     loc_140A011F7
 * 0000000140A0131E: mov     r14, [rbp+0BE0h+var_C60]
 * 0000000140A01322: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A01329: mov     rax, [rsi+100h]
 * 0000000140A01330: mov     rcx, r14
 * 0000000140A01333: call    KeGuardDispatchICall
 * 0000000140A01338: mov     rax, [rsi+3A8h]
 * 0000000140A0133F: mov     rcx, r13
 * 0000000140A01342: call    KeGuardDispatchICall
 * 0000000140A01347: mov     r14d, [rsp+0CE0h+var_C78]
 * 0000000140A0134C: mov     eax, 8000h
 * 0000000140A01351: add     [rsi+828h], eax
 * 0000000140A01357: mov     rcx, [rsp+0CE0h+var_C88]
 * 0000000140A0135C: test    rcx, rcx
 * 0000000140A0135F: jz      short loc_140A0136D
 * 0000000140A01361: mov     rax, [rsi+1E0h]
 * 0000000140A01368: call    KeGuardDispatchICall
 * 0000000140A0136D: shl     r14d, 8
 * 0000000140A01371: add     [rsi+828h], r14d
 * 0000000140A01378: jmp     loc_1409FA31B
 * 0000000140A0137D: test    [r13+2Ah], dl
 * 0000000140A01381: jz      short loc_140A013C1
 * 0000000140A01383: xor     r15d, r15d
 * 0000000140A01386: cmp     [rsi+980h], r15
 * 0000000140A0138D: jz      loc_140A0144D
 * 0000000140A01393: mov     ecx, [rsi+994h]
 * 0000000140A01399: test    cl, 4
 * 0000000140A0139C: jnz     loc_140A0144D
 * 0000000140A013A2: cmp     [rsi+824h], r15d
 * 0000000140A013A9: jnz     loc_140A01444
 * 0000000140A013AF: mov     eax, ecx
 * 0000000140A013B1: shl     eax, 3
 * 0000000140A013B4: xor     eax, ecx
 * 0000000140A013B6: and     eax, 20h
 * 0000000140A013B9: xor     eax, ecx
 * 0000000140A013BB: mov     [rsi+994h], eax
 * 0000000140A013C1: mov     r10, [r13+8]
 * 0000000140A013C5: xor     r14d, r14d
 * 0000000140A013C8: mov     r8d, [rsi+824h]
 * 0000000140A013CF: mov     [rbp+0BE0h+var_C10], r10
 * 0000000140A013D3: lea     rax, [r8+r8*2]
 * 0000000140A013D7: lea     rcx, [r10+rax*4]
 * 0000000140A013DB: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A013E5: lea     r11, [rcx+0Ch]
 * 0000000140A013E9: mov     [rsp+0CE0h+var_C70], rcx
 * 0000000140A013EE: mov     ecx, [r13+24h]
 * 0000000140A013F2: mul     rcx
 * 0000000140A013F5: mov     [rbp+0BE0h+var_C60], r11
 * 0000000140A013F9: mov     r9, rdx
 * 0000000140A013FC: shr     r9, 3
 * 0000000140A01400: mov     eax, r9d
 * 0000000140A01403: mov     [rbp+0BE0h+var_C48], r9
 * 0000000140A01407: lea     rcx, [rax+rax*2]
 * 0000000140A0140B: lea     rax, [r10+rcx*4]
 * 0000000140A0140F: mov     [rbp+0BE0h+var_C20], rax
 * 0000000140A01413: lea     rax, [r13+30h]
 * 0000000140A01417: lea     r15, [rax+r8]
 * 0000000140A0141B: mov     [rsp+0CE0h+var_C88], r15
 * 0000000140A01420: lea     r10d, [r9-1]
 * 0000000140A01424: mov     dword ptr [rbp+0BE0h+arg_8], r10d
 * 0000000140A0142B: test    r9d, r9d
 * 0000000140A0142E: jz      short loc_140A01459
 * 0000000140A01430: mov     edx, r10d
 * 0000000140A01433: add     rdx, 7
 * 0000000140A01437: and     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140A0143B: add     rdx, rax
 * 0000000140A0143E: mov     [rbp+0BE0h+var_C50], rdx
 * 0000000140A01442: jmp     short loc_140A01467
 * 0000000140A01444: test    cl, 20h
 * 0000000140A01447: jz      loc_140A013C1
 * 0000000140A0144D: mov     [rsi+824h], r15d
 * 0000000140A01454: jmp     loc_1409FA31B
 * 0000000140A01459: mov     rdx, rax
 * 0000000140A0145C: mov     [rbp+0BE0h+var_C50], rax
 * 0000000140A01460: mov     dword ptr [rbp+0BE0h+arg_8], r10d
 * 0000000140A01467: movzx   eax, word ptr [r13+28h]
 * 0000000140A0146C: lea     rcx, [rax+rax*2]
 * 0000000140A01470: lea     rax, [rdx+rcx*8]
 * 0000000140A01474: mov     [rsp+0CE0h+BugCheckParameter2], rax
 * 0000000140A01479: test    r9d, r9d
 * 0000000140A0147C: jz      loc_140A017AB
 * 0000000140A01482: cmp     r8d, r10d
 * 0000000140A01485: jnb     loc_140A017AB
 * 0000000140A0148B: mov     rdi, [rsp+0CE0h+var_C70]
 * 0000000140A01490: cmp     [r15], r14b
 * 0000000140A01493: jl      loc_140A01738
 * 0000000140A01499: mov     eax, [rdi+4]
 * 0000000140A0149C: mov     r9d, [r11]
 * 0000000140A0149F: mov     r13d, eax
 * 0000000140A014A2: sub     r9d, eax
 * 0000000140A014A5: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A014AA: mov     r12d, r9d
 * 0000000140A014AD: add     r13, [rax+18h]
 * 0000000140A014B1: add     [rsi+828h], r9d
 * 0000000140A014B8: mov     r10, r13
 * 0000000140A014BB: mov     ebx, [rsi+814h]
 * 0000000140A014C1: mov     rax, r13
 * 0000000140A014C4: mov     r14, [rsi+818h]
 * 0000000140A014CB: lea     rcx, [r9+r13]
 * 0000000140A014CF: mov     [rsp+0CE0h+var_C70], r13
 * 0000000140A014D4: cmp     r13, rcx
 * 0000000140A014D7: jnb     short loc_140A014E9
 * 0000000140A014D9: mov     edx, 40h ; '@'
 * 0000000140A014DE: prefetchnta byte ptr [rax]
 * 0000000140A014E1: add     rax, rdx
 * 0000000140A014E4: cmp     rax, rcx
 * 0000000140A014E7: jb      short loc_140A014DE
 * 0000000140A014E9: mov     r11d, r9d
 * 0000000140A014EC: mov     r8, r14
 * 0000000140A014EF: shr     r11d, 7
 * 0000000140A014F3: test    r11d, r11d
 * 0000000140A014F6: jz      short loc_140A0156A
 * 0000000140A014F8: mov     rsi, 7010008004002001h
 * 0000000140A01502: mov     edx, 8
 * 0000000140A01507: lea     r15d, [rdx-7]
 * 0000000140A0150B: mov     rax, [r10]
 * 0000000140A0150E: mov     ecx, ebx
 * 0000000140A01510: xor     rax, r8
 * 0000000140A01513: mov     r8, [r10+8]
 * 0000000140A01517: rol     rax, cl
 * 0000000140A0151A: add     r10, 10h
 * 0000000140A0151E: xor     r8, rax
 * 0000000140A01521: rol     r8, cl
 * 0000000140A01524: sub     rdx, r15
 * 0000000140A01527: jnz     short loc_140A0150B
 * 0000000140A01529: mov     rcx, r10
 * 0000000140A0152C: sub     rcx, r13
 * 0000000140A0152F: xor     rcx, r14
 * 0000000140A01532: mov     rax, rcx
 * 0000000140A01535: rol     rax, 11h
 * 0000000140A01539: xor     rcx, rax
 * 0000000140A0153C: mov     rax, rsi
 * 0000000140A0153F: mul     rcx
 * 0000000140A01542: xor     ebx, edx
 * 0000000140A01544: mov     [rbp+0BE0h+var_628], rdx
 * 0000000140A0154B: xor     ebx, eax
 * 0000000140A0154D: mov     rax, r15
 * 0000000140A01550: and     ebx, 3Fh
 * 0000000140A01553: cmovz   ebx, eax
 * 0000000140A01556: mov     eax, 0FFFFFFFFh
 * 0000000140A0155B: add     r11d, eax
 * 0000000140A0155E: jnz     short loc_140A01502
 * 0000000140A01560: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A01565: mov     r15, [rsp+0CE0h+var_C88]
 * 0000000140A0156A: and     r9d, 7Fh
 * 0000000140A0156E: mov     r11d, 1
 * 0000000140A01574: cmp     r9d, 8
 * 0000000140A01578: jb      short loc_140A01596
 * 0000000140A0157A: mov     edx, r9d
 * 0000000140A0157D: shr     rdx, 3
 * 0000000140A01581: xor     r8, [r10]
 * 0000000140A01584: mov     ecx, ebx
 * 0000000140A01586: rol     r8, cl
 * 0000000140A01589: add     r10, 8
 * 0000000140A0158D: add     r9d, 0FFFFFFF8h
 * 0000000140A01591: sub     rdx, r11
 * 0000000140A01594: jnz     short loc_140A01581
 * 0000000140A01596: xor     r14d, r14d
 * 0000000140A01599: test    r9d, r9d
 * 0000000140A0159C: jz      short loc_140A015BB
 * 0000000140A0159E: mov     r14d, 0FFFFFFFFh
 * 0000000140A015A4: movzx   eax, byte ptr [r10]
 * 0000000140A015A8: mov     ecx, ebx
 * 0000000140A015AA: xor     r8, rax
 * 0000000140A015AD: add     r10, r11
 * 0000000140A015B0: rol     r8, cl
 * 0000000140A015B3: add     r9d, r14d
 * 0000000140A015B6: jnz     short loc_140A015A4
 * 0000000140A015B8: xor     r14d, r14d
 * 0000000140A015BB: mov     rax, r8
 * 0000000140A015BE: jmp     short loc_140A015C3
 * 0000000140A015C0: xor     r8b, al
 * 0000000140A015C3: shr     rax, 7
 * 0000000140A015C7: test    rax, rax
 * 0000000140A015CA: jnz     short loc_140A015C0
 * 0000000140A015CC: movzx   ecx, byte ptr [r15]
 * 0000000140A015D0: mov     eax, ecx
 * 0000000140A015D2: movzx   edx, r8b
 * 0000000140A015D6: and     edx, 7Fh
 * 0000000140A015D9: and     eax, 7Fh
 * 0000000140A015DC: mov     [rbp+0BE0h+var_C58], edx
 * 0000000140A015DF: cmp     edx, eax
 * 0000000140A015E1: jz      loc_140A01720
 * 0000000140A015E7: test    r12, r12
 * 0000000140A015EA: jz      loc_140A016A3
 * 0000000140A015F0: mov     eax, [rsi+994h]
 * 0000000140A015F6: mov     r8d, 40h ; '@'
 * 0000000140A015FC: test    r8b, al
 * 0000000140A015FF: jz      loc_140A016A3
 * 0000000140A01605: mov     r15, cr8
 * 0000000140A01609: lea     eax, [r8-3Eh]
 * 0000000140A0160D: mov     cr8, rax
 * 0000000140A01611: mov     rbx, r13
 * 0000000140A01614: dec     r12
 * 0000000140A01617: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A0161E: add     r13, r12
 * 0000000140A01621: or      r13, 0FFFh
 * 0000000140A01628: lea     r12, [rbx-1]
 * 0000000140A0162C: movzx   r14d, r15b
 * 0000000140A01630: mov     rax, [rsi+468h]
 * 0000000140A01637: xor     edx, edx
 * 0000000140A01639: mov     rcx, rbx
 * 0000000140A0163C: call    KeGuardDispatchICall
 * 0000000140A01641: cmp     eax, 0C000022Dh
 * 0000000140A01646: jnz     short loc_140A0166B
 * 0000000140A01648: mov     eax, 1
 * 0000000140A0164D: cmp     r15b, al
 * 0000000140A01650: ja      short loc_140A01671
 * 0000000140A01652: movzx   r14d, r15b
 * 0000000140A01656: mov     cr8, r14
 * 0000000140A0165A: mov     al, [rbx]
 * 0000000140A0165C: mov     rax, cr8
 * 0000000140A01660: mov     eax, 2
 * 0000000140A01665: mov     cr8, rax
 * 0000000140A01669: jmp     short loc_140A01630
 * 0000000140A0166B: xor     ecx, ecx
 * 0000000140A0166D: test    eax, eax
 * 0000000140A0166F: js      short loc_140A0168D
 * 0000000140A01671: mov     eax, 1000h
 * 0000000140A01676: add     rbx, rax
 * 0000000140A01679: add     r12, rax
 * 0000000140A0167C: cmp     r12, r13
 * 0000000140A0167F: jnz     short loc_140A0162C
 * 0000000140A01681: mov     cr8, r14
 * 0000000140A01685: xor     r14d, r14d
 * 0000000140A01688: jmp     loc_140A01720
 * 0000000140A0168D: mov     cr8, r14
 * 0000000140A01691: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A01696: xor     r14d, r14d
 * 0000000140A01699: mov     edx, [rbp+0BE0h+var_C58]
 * 0000000140A0169C: mov     r13, [rsp+0CE0h+var_C70]
 * 0000000140A016A1: mov     cl, [rax]
 * 0000000140A016A3: movzx   eax, cl
 * 0000000140A016A6: mov     ecx, [rsi+8F8h]
 * 0000000140A016AC: and     eax, 7Fh
 * 0000000140A016AF: test    ecx, ecx
 * 0000000140A016B1: jnz     short loc_140A01720
 * 0000000140A016B3: mov     ecx, edx
 * 0000000140A016B5: xor     rcx, rax
 * 0000000140A016B8: mov     rax, [rsi+590h]
 * 0000000140A016BF: mov     [rax+18h], rcx
 * 0000000140A016C3: mov     ecx, [rsi+8F8h]
 * 0000000140A016C9: test    ecx, ecx
 * 0000000140A016CB: jnz     short loc_140A01720
 * 0000000140A016CD: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A016D2: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A016DC: add     rax, rsi
 * 0000000140A016DF: xor     edx, edx
 * 0000000140A016E1: mov     [rsi+900h], rax
 * 0000000140A016E8: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A016F2: add     rax, rcx
 * 0000000140A016F5: mov     [rsi+908h], rax
 * 0000000140A016FC: movsxd  rax, dword ptr [rcx]
 * 0000000140A016FF: mov     rcx, rsi
 * 0000000140A01702: mov     [rsi+910h], rax
 * 0000000140A01709: mov     eax, 1
 * 0000000140A0170E: mov     [rsi+918h], r13
 * 0000000140A01715: mov     [rsi+8F8h], eax
 * 0000000140A0171B: call    $$b8
 * 0000000140A01720: mov     r15, [rsp+0CE0h+var_C88]
 * 0000000140A01725: mov     eax, 40h ; '@'
 * 0000000140A0172A: add     [rsi+828h], eax
 * 0000000140A01730: mov     r11, [rbp+0BE0h+var_C60]
 * 0000000140A01734: mov     r12, [rbp+0BE0h+var_C08]
 * 0000000140A01738: mov     eax, 0Ch
 * 0000000140A0173D: inc     r15
 * 0000000140A01740: add     r11, rax
 * 0000000140A01743: mov     [rsp+0CE0h+var_C88], r15
 * 0000000140A01748: add     rdi, rax
 * 0000000140A0174B: mov     [rbp+0BE0h+var_C60], r11
 * 0000000140A0174F: cmp     r11, [rbp+0BE0h+var_C20]
 * 0000000140A01753: jnb     short loc_140A01765
 * 0000000140A01755: mov     eax, [r12]
 * 0000000140A01759: cmp     [rsi+828h], eax
 * 0000000140A0175F: jl      loc_140A01490
 * 0000000140A01765: sub     rdi, [rbp+0BE0h+var_C10]
 * 0000000140A01769: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140A01773: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0177A: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A0177E: imul    rdi
 * 0000000140A01781: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A01788: sar     rdx, 1
 * 0000000140A0178B: mov     rax, rdx
 * 0000000140A0178E: shr     rax, 3Fh
 * 0000000140A01792: add     rdx, rax
 * 0000000140A01795: mov     r8d, edx
 * 0000000140A01798: mov     [rsi+824h], edx
 * 0000000140A0179E: mov     rdx, [rbp+0BE0h+var_C50]
 * 0000000140A017A2: cmp     r8d, r10d
 * 0000000140A017A5: jb      loc_1409FA318
 * 0000000140A017AB: mov     eax, [rsi+82Ch]
 * 0000000140A017B1: xor     r15d, r15d
 * 0000000140A017B4: cmp     [rsi+828h], eax
 * 0000000140A017BA: jge     loc_1409FA31B
 * 0000000140A017C0: test    r9d, r9d
 * 0000000140A017C3: jz      short loc_140A017CB
 * 0000000140A017C5: sub     r8d, r9d
 * 0000000140A017C8: inc     r8d
 * 0000000140A017CB: mov     eax, r8d
 * 0000000140A017CE: lea     rcx, [rax+rax*2]
 * 0000000140A017D2: lea     rcx, [rdx+rcx*8]
 * 0000000140A017D6: mov     [rbp+0BE0h+var_C60], rcx
 * 0000000140A017DA: mov     rdi, [rsp+0CE0h+var_C90]
 * 0000000140A017DF: lea     rdx, [rcx+8]
 * 0000000140A017E3: mov     eax, 2
 * 0000000140A017E8: mov     [rbp+0BE0h+arg_8], rdx
 * 0000000140A017EF: mov     r12d, eax
 * 0000000140A017F2: mov     [rsp+0CE0h+var_C88], rax
 * 0000000140A017F7: lea     eax, [r12-1]
 * 0000000140A017FC: lea     ecx, [rax+0Bh]
 * 0000000140A017FF: cmp     [rdx], r15d
 * 0000000140A01802: jl      loc_140A01A16
 * 0000000140A01808: mov     eax, [rdx-8]
 * 0000000140A0180B: mov     r8d, [rdx-4]
 * 0000000140A0180F: mov     r13d, eax
 * 0000000140A01812: add     r13, [rdi+18h]
 * 0000000140A01816: sub     r8d, eax
 * 0000000140A01819: add     [rsi+828h], r8d
 * 0000000140A01820: mov     r9, r13
 * 0000000140A01823: mov     r10d, [rsi+814h]
 * 0000000140A0182A: mov     rax, r13
 * 0000000140A0182D: mov     r14, [rsi+818h]
 * 0000000140A01834: lea     rcx, [r8+r13]
 * 0000000140A01838: mov     r15d, r8d
 * 0000000140A0183B: mov     [rbp+0BE0h+var_C50], r13
 * 0000000140A0183F: mov     [rsp+0CE0h+var_C70], r15
 * 0000000140A01844: cmp     r13, rcx
 * 0000000140A01847: jnb     short loc_140A0185A
 * 0000000140A01849: mov     r11d, 40h ; '@'
 * 0000000140A0184F: prefetchnta byte ptr [rax]
 * 0000000140A01852: add     rax, r11
 * 0000000140A01855: cmp     rax, rcx
 * 0000000140A01858: jb      short loc_140A0184F
 * 0000000140A0185A: mov     r11d, r8d
 * 0000000140A0185D: mov     rbx, r14
 * 0000000140A01860: shr     r11d, 7
 * 0000000140A01864: test    r11d, r11d
 * 0000000140A01867: jz      short loc_140A018E5
 * 0000000140A01869: mov     esi, 0FFFFFFFFh
 * 0000000140A0186E: mov     r12d, 1
 * 0000000140A01874: mov     r15, 7010008004002001h
 * 0000000140A0187E: mov     eax, 8
 * 0000000140A01883: xor     rbx, [r9]
 * 0000000140A01886: mov     ecx, r10d
 * 0000000140A01889: rol     rbx, cl
 * 0000000140A0188C: xor     rbx, [r9+8]
 * 0000000140A01890: add     r9, 10h
 * 0000000140A01894: rol     rbx, cl
 * 0000000140A01897: sub     rax, r12
 * 0000000140A0189A: jnz     short loc_140A01883
 * 0000000140A0189C: mov     rcx, r9
 * 0000000140A0189F: sub     rcx, r13
 * 0000000140A018A2: xor     rcx, r14
 * 0000000140A018A5: mov     rax, rcx
 * 0000000140A018A8: rol     rax, 11h
 * 0000000140A018AC: xor     rcx, rax
 * 0000000140A018AF: mov     rax, r15
 * 0000000140A018B2: mul     rcx
 * 0000000140A018B5: xor     r10d, edx
 * 0000000140A018B8: mov     [rbp+0BE0h+var_620], rdx
 * 0000000140A018BF: xor     r10d, eax
 * 0000000140A018C2: and     r10d, 3Fh
 * 0000000140A018C6: cmovz   r10d, r12d
 * 0000000140A018CA: add     r11d, esi
 * 0000000140A018CD: jnz     short loc_140A0187E
 * 0000000140A018CF: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A018D4: mov     r15, [rsp+0CE0h+var_C70]
 * 0000000140A018D9: mov     rdx, [rbp+0BE0h+arg_8]
 * 0000000140A018E0: mov     r12, [rsp+0CE0h+var_C88]
 * 0000000140A018E5: and     r8d, 7Fh
 * 0000000140A018E9: mov     r14d, 1
 * 0000000140A018EF: cmp     r8d, 8
 * 0000000140A018F3: jb      short loc_140A01912
 * 0000000140A018F5: mov     eax, r8d
 * 0000000140A018F8: shr     rax, 3
 * 0000000140A018FC: xor     rbx, [r9]
 * 0000000140A018FF: mov     ecx, r10d
 * 0000000140A01902: rol     rbx, cl
 * 0000000140A01905: add     r9, 8
 * 0000000140A01909: add     r8d, 0FFFFFFF8h
 * 0000000140A0190D: sub     rax, r14
 * 0000000140A01910: jnz     short loc_140A018FC
 * 0000000140A01912: test    r8d, r8d
 * 0000000140A01915: jz      short loc_140A01932
 * 0000000140A01917: mov     r11d, 0FFFFFFFFh
 * 0000000140A0191D: movzx   eax, byte ptr [r9]
 * 0000000140A01921: mov     ecx, r10d
 * 0000000140A01924: xor     rbx, rax
 * 0000000140A01927: add     r9, r14
 * 0000000140A0192A: rol     rbx, cl
 * 0000000140A0192D: add     r8d, r11d
 * 0000000140A01930: jnz     short loc_140A0191D
 * 0000000140A01932: mov     rax, rbx
 * 0000000140A01935: jmp     short loc_140A01939
 * 0000000140A01937: xor     ebx, eax
 * 0000000140A01939: shr     rax, 1Fh
 * 0000000140A0193D: test    rax, rax
 * 0000000140A01940: jnz     short loc_140A01937
 * 0000000140A01942: mov     ecx, [rdx]
 * 0000000140A01944: btr     ebx, 1Fh
 * 0000000140A01948: mov     eax, ecx
 * 0000000140A0194A: btr     eax, 1Fh
 * 0000000140A0194E: cmp     ebx, eax
 * 0000000140A01950: jz      loc_140A01A0B
 * 0000000140A01956: test    r15, r15
 * 0000000140A01959: jz      loc_140A01A7F
 * 0000000140A0195F: mov     eax, [rsi+994h]
 * 0000000140A01965: mov     r8d, 40h ; '@'
 * 0000000140A0196B: test    r8b, al
 * 0000000140A0196E: jz      loc_140A01A7F
 * 0000000140A01974: mov     r12, cr8
 * 0000000140A01978: lea     eax, [r8-3Eh]
 * 0000000140A0197C: mov     cr8, rax
 * 0000000140A01980: mov     r14, r13
 * 0000000140A01983: lea     rax, [r13-1]
 * 0000000140A01987: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A0198E: add     rax, r15
 * 0000000140A01991: or      rax, 0FFFh
 * 0000000140A01997: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A0199C: lea     r13, [r14-1]
 * 0000000140A019A0: movzx   r15d, r12b
 * 0000000140A019A4: mov     rax, [rsi+468h]
 * 0000000140A019AB: xor     edx, edx
 * 0000000140A019AD: mov     rcx, r14
 * 0000000140A019B0: call    KeGuardDispatchICall
 * 0000000140A019B5: cmp     eax, 0C000022Dh
 * 0000000140A019BA: jnz     short loc_140A019E0
 * 0000000140A019BC: mov     eax, 1
 * 0000000140A019C1: cmp     r12b, al
 * 0000000140A019C4: ja      short loc_140A019E8
 * 0000000140A019C6: movzx   r15d, r12b
 * 0000000140A019CA: mov     cr8, r15
 * 0000000140A019CE: mov     al, [r14]
 * 0000000140A019D1: mov     rax, cr8
 * 0000000140A019D5: mov     eax, 2
 * 0000000140A019DA: mov     cr8, rax
 * 0000000140A019DE: jmp     short loc_140A019A4
 * 0000000140A019E0: test    eax, eax
 * 0000000140A019E2: js      loc_140A01A69
 * 0000000140A019E8: mov     r11d, 1000h
 * 0000000140A019EE: add     r14, r11
 * 0000000140A019F1: add     r13, r11
 * 0000000140A019F4: cmp     r13, [rsp+0CE0h+var_C70]
 * 0000000140A019F9: jnz     short loc_140A019A0
 * 0000000140A019FB: mov     cr8, r15
 * 0000000140A019FF: mov     rdx, [rbp+0BE0h+arg_8]
 * 0000000140A01A06: mov     r12, [rsp+0CE0h+var_C88]
 * 0000000140A01A0B: xor     r15d, r15d
 * 0000000140A01A0E: mov     ecx, 0Ch
 * 0000000140A01A13: lea     eax, [rcx-0Bh]
 * 0000000140A01A16: add     rdx, rcx
 * 0000000140A01A19: sub     r12, rax
 * 0000000140A01A1C: mov     [rbp+0BE0h+arg_8], rdx
 * 0000000140A01A23: mov     [rsp+0CE0h+var_C88], r12
 * 0000000140A01A28: jnz     loc_140A017FF
 * 0000000140A01A2E: mov     rcx, [rbp+0BE0h+var_C60]
 * 0000000140A01A32: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A01A39: add     [rsi+824h], eax
 * 0000000140A01A3F: add     rcx, 18h
 * 0000000140A01A43: mov     [rbp+0BE0h+var_C60], rcx
 * 0000000140A01A47: cmp     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A01A4C: jz      loc_140A0144D
 * 0000000140A01A52: mov     eax, [rsi+82Ch]
 * 0000000140A01A58: cmp     [rsi+828h], eax
 * 0000000140A01A5E: jl      loc_140A017DA
 * 0000000140A01A64: jmp     loc_1409FA31B
 * 0000000140A01A69: mov     cr8, r15
 * 0000000140A01A6D: mov     rdx, [rbp+0BE0h+arg_8]
 * 0000000140A01A74: mov     r13, [rbp+0BE0h+var_C50]
 * 0000000140A01A78: mov     r12, [rsp+0CE0h+var_C88]
 * 0000000140A01A7D: mov     ecx, [rdx]
 * 0000000140A01A7F: mov     eax, ecx
 * 0000000140A01A81: xor     r15d, r15d
 * 0000000140A01A84: mov     ecx, [rsi+8F8h]
 * 0000000140A01A8A: btr     eax, 1Fh
 * 0000000140A01A8E: test    ecx, ecx
 * 0000000140A01A90: jnz     loc_140A01A0E
 * 0000000140A01A96: mov     ecx, ebx
 * 0000000140A01A98: xor     rcx, rax
 * 0000000140A01A9B: mov     rax, [rsi+590h]
 * 0000000140A01AA2: mov     [rax+18h], rcx
 * 0000000140A01AA6: mov     ecx, [rsi+8F8h]
 * 0000000140A01AAC: test    ecx, ecx
 * 0000000140A01AAE: jnz     loc_140A01A0E
 * 0000000140A01AB4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A01ABE: xor     edx, edx
 * 0000000140A01AC0: add     rax, rsi
 * 0000000140A01AC3: mov     [rsi+900h], rax
 * 0000000140A01ACA: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A01AD4: add     rax, rdi
 * 0000000140A01AD7: mov     [rsi+908h], rax
 * 0000000140A01ADE: movsxd  rax, dword ptr [rdi]
 * 0000000140A01AE1: mov     [rsi+910h], rax
 * 0000000140A01AE8: lea     eax, [rcx+1]
 * 0000000140A01AEB: mov     [rsi+918h], r13
 * 0000000140A01AF2: mov     rcx, rsi
 * 0000000140A01AF5: mov     [rsi+8F8h], eax
 * 0000000140A01AFB: call    $$b8
 * 0000000140A01B00: mov     rdx, [rbp+0BE0h+arg_8]
 * 0000000140A01B07: jmp     loc_140A01A0E
 * 0000000140A01B0C: mov     r14, [r13+8]
 * 0000000140A01B10: mov     r8d, [r13+10h]
 * 0000000140A01B14: mov     r9, r14
 * 0000000140A01B17: add     [rsi+828h], r8d
 * 0000000140A01B1E: mov     rax, r14
 * 0000000140A01B21: mov     r10d, [rsi+814h]
 * 0000000140A01B28: mov     r15, [rsi+818h]
 * 0000000140A01B2F: lea     rcx, [r14+r8]
 * 0000000140A01B33: cmp     r14, rcx
 * 0000000140A01B36: jnb     short loc_140A01B49
 * 0000000140A01B38: mov     r11d, 40h ; '@'
 * 0000000140A01B3E: prefetchnta byte ptr [rax]
 * 0000000140A01B41: add     rax, r11
 * 0000000140A01B44: cmp     rax, rcx
 * 0000000140A01B47: jb      short loc_140A01B3E
 * 0000000140A01B49: mov     r11d, r8d
 * 0000000140A01B4C: mov     rbx, r15
 * 0000000140A01B4F: shr     r11d, 7
 * 0000000140A01B53: mov     r12d, 0FFFFFFFFh
 * 0000000140A01B59: test    r11d, r11d
 * 0000000140A01B5C: jz      short loc_140A01BCA
 * 0000000140A01B5E: mov     rdi, 7010008004002001h
 * 0000000140A01B68: mov     eax, 8
 * 0000000140A01B6D: xor     rbx, [r9]
 * 0000000140A01B70: mov     ecx, r10d
 * 0000000140A01B73: rol     rbx, cl
 * 0000000140A01B76: xor     rbx, [r9+8]
 * 0000000140A01B7A: add     r9, 10h
 * 0000000140A01B7E: rol     rbx, cl
 * 0000000140A01B81: sub     rax, rdx
 * 0000000140A01B84: jnz     short loc_140A01B6D
 * 0000000140A01B86: mov     rcx, r9
 * 0000000140A01B89: sub     rcx, r14
 * 0000000140A01B8C: xor     rcx, r15
 * 0000000140A01B8F: mov     rax, rcx
 * 0000000140A01B92: rol     rax, 11h
 * 0000000140A01B96: xor     rcx, rax
 * 0000000140A01B99: mov     rax, rdi
 * 0000000140A01B9C: mul     rcx
 * 0000000140A01B9F: xor     r10d, eax
 * 0000000140A01BA2: mov     [rbp+0BE0h+var_618], rdx
 * 0000000140A01BA9: xor     r10d, edx
 * 0000000140A01BAC: mov     edx, 1
 * 0000000140A01BB1: and     r10d, 3Fh
 * 0000000140A01BB5: cmovz   r10d, edx
 * 0000000140A01BB9: add     r11d, r12d
 * 0000000140A01BBC: jnz     short loc_140A01B68
 * 0000000140A01BBE: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A01BC3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A01BCA: and     r8d, 7Fh
 * 0000000140A01BCE: cmp     r8d, 8
 * 0000000140A01BD2: jb      short loc_140A01BF1
 * 0000000140A01BD4: mov     eax, r8d
 * 0000000140A01BD7: shr     rax, 3
 * 0000000140A01BDB: xor     rbx, [r9]
 * 0000000140A01BDE: mov     ecx, r10d
 * 0000000140A01BE1: rol     rbx, cl
 * 0000000140A01BE4: add     r9, 8
 * 0000000140A01BE8: add     r8d, 0FFFFFFF8h
 * 0000000140A01BEC: sub     rax, rdx
 * 0000000140A01BEF: jnz     short loc_140A01BDB
 * 0000000140A01BF1: xor     r15d, r15d
 * 0000000140A01BF4: test    r8d, r8d
 * 0000000140A01BF7: jz      short loc_140A01C0E
 * 0000000140A01BF9: movzx   eax, byte ptr [r9]
 * 0000000140A01BFD: mov     ecx, r10d
 * 0000000140A01C00: xor     rbx, rax
 * 0000000140A01C03: add     r9, rdx
 * 0000000140A01C06: rol     rbx, cl
 * 0000000140A01C09: add     r8d, r12d
 * 0000000140A01C0C: jnz     short loc_140A01BF9
 * 0000000140A01C0E: mov     rax, rbx
 * 0000000140A01C11: jmp     short loc_140A01C15
 * 0000000140A01C13: xor     ebx, eax
 * 0000000140A01C15: shr     rax, 1Fh
 * 0000000140A01C19: test    rax, rax
 * 0000000140A01C1C: jnz     short loc_140A01C13
 * 0000000140A01C1E: btr     ebx, 1Fh
 * 0000000140A01C22: mov     r12d, r15d
 * 0000000140A01C25: cmp     ebx, [r13+14h]
 * 0000000140A01C29: jz      loc_140A01D14
 * 0000000140A01C2F: cmp     [r13+0], r15d
 * 0000000140A01C33: jnz     short loc_140A01C3D
 * 0000000140A01C35: cmp     [r13+18h], r15d
 * 0000000140A01C39: cmovnz  r12d, edx
 * 0000000140A01C3D: mov     ecx, [r13+10h]
 * 0000000140A01C41: mov     rdx, [r13+8]
 * 0000000140A01C45: test    rcx, rcx
 * 0000000140A01C48: jz      loc_140A01ED4
 * 0000000140A01C4E: mov     eax, [rsi+994h]
 * 0000000140A01C54: mov     r8d, 40h ; '@'
 * 0000000140A01C5A: test    r8b, al
 * 0000000140A01C5D: jz      loc_140A01ED4
 * 0000000140A01C63: mov     r13, cr8
 * 0000000140A01C67: lea     eax, [r8-3Eh]
 * 0000000140A01C6B: mov     cr8, rax
 * 0000000140A01C6F: mov     r14, rdx
 * 0000000140A01C72: lea     rax, [rcx-1]
 * 0000000140A01C76: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A01C7D: add     rax, rdx
 * 0000000140A01C80: or      rax, 0FFFh
 * 0000000140A01C86: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A01C8B: lea     rax, [r14-1]
 * 0000000140A01C8F: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A01C96: movzx   r15d, r13b
 * 0000000140A01C9A: mov     rax, [rsi+468h]
 * 0000000140A01CA1: xor     edx, edx
 * 0000000140A01CA3: mov     rcx, r14
 * 0000000140A01CA6: call    KeGuardDispatchICall
 * 0000000140A01CAB: cmp     eax, 0C000022Dh
 * 0000000140A01CB0: jnz     short loc_140A01CDF
 * 0000000140A01CB2: test    r12d, r12d
 * 0000000140A01CB5: jnz     loc_140A01EC8
 * 0000000140A01CBB: lea     eax, [r12+1]
 * 0000000140A01CC0: cmp     r13b, al
 * 0000000140A01CC3: ja      short loc_140A01CE7
 * 0000000140A01CC5: movzx   r15d, r13b
 * 0000000140A01CC9: mov     cr8, r15
 * 0000000140A01CCD: mov     al, [r14]
 * 0000000140A01CD0: mov     rax, cr8
 * 0000000140A01CD4: lea     eax, [r12+2]
 * 0000000140A01CD9: mov     cr8, rax
 * 0000000140A01CDD: jmp     short loc_140A01C9A
 * 0000000140A01CDF: test    eax, eax
 * 0000000140A01CE1: js      loc_140A01EC8
 * 0000000140A01CE7: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A01CEE: mov     r11d, 1000h
 * 0000000140A01CF4: add     rax, r11
 * 0000000140A01CF7: add     r14, r11
 * 0000000140A01CFA: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A01D01: cmp     rax, [rsp+0CE0h+var_C70]
 * 0000000140A01D06: jnz     short loc_140A01C96
 * 0000000140A01D08: mov     cr8, r15
 * 0000000140A01D0C: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A01D11: xor     r15d, r15d
 * 0000000140A01D14: mov     r14d, 1
 * 0000000140A01D1A: mov     eax, [r13+10h]
 * 0000000140A01D1E: mov     r12, [r13+8]
 * 0000000140A01D22: shr     eax, 4
 * 0000000140A01D25: mov     [rbp+0BE0h+arg_8], r12
 * 0000000140A01D2C: test    eax, eax
 * 0000000140A01D2E: jz      loc_1409FA31B
 * 0000000140A01D34: mov     edi, eax
 * 0000000140A01D36: mov     [rsp+0CE0h+var_C88], rdi
 * 0000000140A01D3B: mov     rax, [r12]
 * 0000000140A01D3F: lea     rdx, [rbp+0BE0h+var_988]
 * 0000000140A01D46: mov     rbx, r13
 * 0000000140A01D49: mov     r13d, r14d
 * 0000000140A01D4C: mov     r15, [rax]
 * 0000000140A01D4F: xor     eax, eax
 * 0000000140A01D51: mov     [rbp+0BE0h+var_988], rax
 * 0000000140A01D58: mov     rcx, r15
 * 0000000140A01D5B: mov     rax, [rsi+310h]
 * 0000000140A01D62: call    KeGuardDispatchICall
 * 0000000140A01D67: mov     r14, rax
 * 0000000140A01D6A: test    rax, rax
 * 0000000140A01D6D: jz      loc_140A01E9F
 * 0000000140A01D73: mov     edi, 6
 * 0000000140A01D78: xor     r12d, r12d
 * 0000000140A01D7B: mov     rax, [rsi+208h]
 * 0000000140A01D82: lea     rdx, [rbp+0BE0h+var_610]
 * 0000000140A01D89: mov     rcx, r14
 * 0000000140A01D8C: inc     r13d
 * 0000000140A01D8F: call    KeGuardDispatchICall
 * 0000000140A01D94: test    rax, rax
 * 0000000140A01D97: jnz     loc_140A01E71
 * 0000000140A01D9D: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A01DA7: lea     r9d, [rax+1]
 * 0000000140A01DAB: jz      short loc_140A01DF3
 * 0000000140A01DAD: mov     rcx, [rsi+0A80h]
 * 0000000140A01DB4: lea     edx, [rax+30h]
 * 0000000140A01DB7: mov     r8, rdi
 * 0000000140A01DBA: mov     rax, [rbx]
 * 0000000140A01DBD: add     edx, 0FFFFFFF8h
 * 0000000140A01DC0: mov     [rcx], rax
 * 0000000140A01DC3: add     rbx, 8
 * 0000000140A01DC7: add     rcx, 8
 * 0000000140A01DCB: sub     r8, r9
 * 0000000140A01DCE: jnz     short loc_140A01DBA
 * 0000000140A01DD0: test    edx, edx
 * 0000000140A01DD2: jz      short loc_140A01DEC
 * 0000000140A01DD4: mov     r12d, 0FFFFFFFFh
 * 0000000140A01DDA: mov     al, [rbx]
 * 0000000140A01DDC: add     rbx, r9
 * 0000000140A01DDF: mov     [rcx], al
 * 0000000140A01DE1: add     rcx, r9
 * 0000000140A01DE4: add     edx, r12d
 * 0000000140A01DE7: jnz     short loc_140A01DDA
 * 0000000140A01DE9: xor     r12d, r12d
 * 0000000140A01DEC: mov     rbx, [rsi+0A80h]
 * 0000000140A01DF3: mov     [rbx+18h], r14
 * 0000000140A01DF7: mov     [rbx+20h], r15
 * 0000000140A01DFB: mov     rax, [rsi+590h]
 * 0000000140A01E02: mov     [rax], rbx
 * 0000000140A01E05: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140A01E0C: mov     rax, [rsi+590h]
 * 0000000140A01E13: mov     [rax+8], r14
 * 0000000140A01E17: mov     dword ptr [rax+14h], 1000h
 * 0000000140A01E1E: cmp     [rsi+8F8h], r12d
 * 0000000140A01E25: jnz     short loc_140A01E71
 * 0000000140A01E27: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A01E31: xor     edx, edx
 * 0000000140A01E33: add     rax, rsi
 * 0000000140A01E36: mov     rcx, rsi
 * 0000000140A01E39: mov     [rsi+900h], rax
 * 0000000140A01E40: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A01E4A: add     rax, rbx
 * 0000000140A01E4D: mov     [rsi+908h], rax
 * 0000000140A01E54: movsxd  rax, dword ptr [rbx]
 * 0000000140A01E57: mov     [rsi+910h], rax
 * 0000000140A01E5E: mov     [rsi+918h], rdi
 * 0000000140A01E65: mov     [rsi+8F8h], r9d
 * 0000000140A01E6C: call    $$b8
 * 0000000140A01E71: mov     rax, [rsi+310h]
 * 0000000140A01E78: lea     rdx, [rbp+0BE0h+var_988]
 * 0000000140A01E7F: mov     rcx, r15
 * 0000000140A01E82: call    KeGuardDispatchICall
 * 0000000140A01E87: mov     r14, rax
 * 0000000140A01E8A: test    rax, rax
 * 0000000140A01E8D: jnz     loc_140A01D7B
 * 0000000140A01E93: mov     r12, [rbp+0BE0h+arg_8]
 * 0000000140A01E9A: mov     rdi, [rsp+0CE0h+var_C88]
 * 0000000140A01E9F: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A01EA4: add     r12, 10h
 * 0000000140A01EA8: mov     r14d, 1
 * 0000000140A01EAE: mov     [rbp+0BE0h+arg_8], r12
 * 0000000140A01EB5: sub     rdi, r14
 * 0000000140A01EB8: mov     [rsp+0CE0h+var_C88], rdi
 * 0000000140A01EBD: jnz     loc_140A01D3B
 * 0000000140A01EC3: jmp     loc_1409FA47D
 * 0000000140A01EC8: mov     cr8, r15
 * 0000000140A01ECC: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A01ED1: xor     r15d, r15d
 * 0000000140A01ED4: mov     eax, [rsi+8F8h]
 * 0000000140A01EDA: mov     edx, [r13+14h]
 * 0000000140A01EDE: test    eax, eax
 * 0000000140A01EE0: jnz     short loc_140A01EF8
 * 0000000140A01EE2: mov     rax, [rsi+590h]
 * 0000000140A01EE9: mov     ecx, ebx
 * 0000000140A01EEB: xor     rcx, rdx
 * 0000000140A01EEE: mov     [rax+18h], rcx
 * 0000000140A01EF2: mov     eax, [rsi+8F8h]
 * 0000000140A01EF8: mov     rcx, [r13+8]
 * 0000000140A01EFC: mov     r14d, 1
 * 0000000140A01F02: test    eax, eax
 * 0000000140A01F04: jnz     loc_140A01D1A
 * 0000000140A01F0A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A01F14: xor     edx, edx
 * 0000000140A01F16: add     rax, rsi
 * 0000000140A01F19: mov     [rsi+900h], rax
 * 0000000140A01F20: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A01F2A: add     rax, r13
 * 0000000140A01F2D: mov     [rsi+908h], rax
 * 0000000140A01F34: movsxd  rax, dword ptr [r13+0]
 * 0000000140A01F38: mov     [rsi+910h], rax
 * 0000000140A01F3F: mov     [rsi+918h], rcx
 * 0000000140A01F46: mov     rcx, rsi
 * 0000000140A01F49: mov     [rsi+8F8h], r14d
 * 0000000140A01F50: call    $$b8
 * 0000000140A01F55: jmp     loc_140A01D1A
 * 0000000140A01F5A: mov     eax, [rsi+994h]
 * 0000000140A01F60: mov     ecx, 2
 * 0000000140A01F65: test    cl, al
 * 0000000140A01F67: jnz     loc_1409FA318
 * 0000000140A01F6D: mov     rax, [rsi+428h]
 * 0000000140A01F74: call    KeGuardDispatchICall
 * 0000000140A01F79: xor     r15d, r15d
 * 0000000140A01F7C: test    al, al
 * 0000000140A01F7E: jz      loc_1409FA31B
 * 0000000140A01F84: cmp     [rsi+8F8h], r15d
 * 0000000140A01F8B: jnz     loc_1409FA31B
 * 0000000140A01F91: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A01F9B: add     rax, rsi
 * 0000000140A01F9E: mov     [rsi+900h], rax
 * 0000000140A01FA5: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A01FAF: add     rax, r13
 * 0000000140A01FB2: mov     [rsi+908h], rax
 * 0000000140A01FB9: movsxd  rax, dword ptr [r13+0]
 * 0000000140A01FBD: mov     [rsi+910h], rax
 * 0000000140A01FC4: mov     [rsi+918h], r15
 * 0000000140A01FCB: jmp     loc_1409FA6E7
 * 0000000140A01FD0: cmp     r10d, 26h ; '&'
 * 0000000140A01FD4: jz      loc_140A055C9
 * 0000000140A01FDA: jle     loc_140A04767
 * 0000000140A01FE0: cmp     r10d, 2Ah ; '*'
 * 0000000140A01FE4: jle     loc_140A0461F
 * 0000000140A01FEA: cmp     r10d, 2Bh ; '+'
 * 0000000140A01FEE: jz      loc_140A03543
 * 0000000140A01FF4: cmp     r10d, 2Ch ; ','
 * 0000000140A01FF8: jz      loc_140A02988
 * 0000000140A01FFE: cmp     r10d, 2Eh ; '.'
 * 0000000140A02002: jz      loc_140A02892
 * 0000000140A02008: cmp     r10d, 2Fh ; '/'
 * 0000000140A0200C: jz      loc_140A02686
 * 0000000140A02012: cmp     r10d, 30h ; '0'
 * 0000000140A02016: jnz     loc_140A04767
 * 0000000140A0201C: xor     r15d, r15d
 * 0000000140A0201F: cmp     [r13+10h], r15d
 * 0000000140A02023: jz      loc_1409FA31B
 * 0000000140A02029: test    dword ptr [rsi+994h], 4000h
 * 0000000140A02033: jz      short loc_140A02054
 * 0000000140A02035: mov     rcx, [rsi+4E0h]
 * 0000000140A0203C: cli
 * 0000000140A0203D: mov     eax, [rsi+990h]
 * 0000000140A02043: shr     eax, 0Ah
 * 0000000140A02046: and     eax, 1Fh
 * 0000000140A02049: lock bts [rcx], eax
 * 0000000140A0204D: jnb     short loc_140A02054
 * 0000000140A0204F: sti
 * 0000000140A02050: pause
 * 0000000140A02052: jmp     short loc_140A0203C
 * 0000000140A02054: mov     eax, [r13+18h]
 * 0000000140A02058: test    dl, al
 * 0000000140A0205A: jnz     loc_140A022F3
 * 0000000140A02060: mov     r14, [r13+8]
 * 0000000140A02064: mov     r8d, [r13+10h]
 * 0000000140A02068: mov     r9, r14
 * 0000000140A0206B: add     [rsi+828h], r8d
 * 0000000140A02072: mov     rax, r14
 * 0000000140A02075: mov     r10d, [rsi+814h]
 * 0000000140A0207C: mov     r15, [rsi+818h]
 * 0000000140A02083: lea     rcx, [r14+r8]
 * 0000000140A02087: cmp     r14, rcx
 * 0000000140A0208A: jnb     short loc_140A0209D
 * 0000000140A0208C: mov     r11d, 40h ; '@'
 * 0000000140A02092: prefetchnta byte ptr [rax]
 * 0000000140A02095: add     rax, r11
 * 0000000140A02098: cmp     rax, rcx
 * 0000000140A0209B: jb      short loc_140A02092
 * 0000000140A0209D: mov     r11d, r8d
 * 0000000140A020A0: mov     rbx, r15
 * 0000000140A020A3: shr     r11d, 7
 * 0000000140A020A7: mov     r12d, 0FFFFFFFFh
 * 0000000140A020AD: test    r11d, r11d
 * 0000000140A020B0: jz      short loc_140A0211E
 * 0000000140A020B2: mov     rdi, 7010008004002001h
 * 0000000140A020BC: mov     eax, 8
 * 0000000140A020C1: xor     rbx, [r9]
 * 0000000140A020C4: mov     ecx, r10d
 * 0000000140A020C7: rol     rbx, cl
 * 0000000140A020CA: xor     rbx, [r9+8]
 * 0000000140A020CE: add     r9, 10h
 * 0000000140A020D2: rol     rbx, cl
 * 0000000140A020D5: sub     rax, rdx
 * 0000000140A020D8: jnz     short loc_140A020C1
 * 0000000140A020DA: mov     rcx, r9
 * 0000000140A020DD: sub     rcx, r14
 * 0000000140A020E0: xor     rcx, r15
 * 0000000140A020E3: mov     rax, rcx
 * 0000000140A020E6: rol     rax, 11h
 * 0000000140A020EA: xor     rcx, rax
 * 0000000140A020ED: mov     rax, rdi
 * 0000000140A020F0: mul     rcx
 * 0000000140A020F3: xor     r10d, eax
 * 0000000140A020F6: mov     [rbp+0BE0h+var_608], rdx
 * 0000000140A020FD: xor     r10d, edx
 * 0000000140A02100: mov     edx, 1
 * 0000000140A02105: and     r10d, 3Fh
 * 0000000140A02109: cmovz   r10d, edx
 * 0000000140A0210D: add     r11d, r12d
 * 0000000140A02110: jnz     short loc_140A020BC
 * 0000000140A02112: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A02117: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0211E: and     r8d, 7Fh
 * 0000000140A02122: cmp     r8d, 8
 * 0000000140A02126: jb      short loc_140A02145
 * 0000000140A02128: mov     eax, r8d
 * 0000000140A0212B: shr     rax, 3
 * 0000000140A0212F: xor     rbx, [r9]
 * 0000000140A02132: mov     ecx, r10d
 * 0000000140A02135: rol     rbx, cl
 * 0000000140A02138: add     r9, 8
 * 0000000140A0213C: add     r8d, 0FFFFFFF8h
 * 0000000140A02140: sub     rax, rdx
 * 0000000140A02143: jnz     short loc_140A0212F
 * 0000000140A02145: xor     r15d, r15d
 * 0000000140A02148: test    r8d, r8d
 * 0000000140A0214B: jz      short loc_140A02162
 * 0000000140A0214D: movzx   eax, byte ptr [r9]
 * 0000000140A02151: mov     ecx, r10d
 * 0000000140A02154: xor     rbx, rax
 * 0000000140A02157: add     r9, rdx
 * 0000000140A0215A: rol     rbx, cl
 * 0000000140A0215D: add     r8d, r12d
 * 0000000140A02160: jnz     short loc_140A0214D
 * 0000000140A02162: mov     rax, rbx
 * 0000000140A02165: jmp     short loc_140A02169
 * 0000000140A02167: xor     ebx, eax
 * 0000000140A02169: shr     rax, 1Fh
 * 0000000140A0216D: test    rax, rax
 * 0000000140A02170: jnz     short loc_140A02167
 * 0000000140A02172: mov     r8, [rsp+0CE0h+var_C90]
 * 0000000140A02177: btr     ebx, 1Fh
 * 0000000140A0217B: mov     r13d, r15d
 * 0000000140A0217E: cmp     ebx, [r8+14h]
 * 0000000140A02182: jz      loc_140A0264C
 * 0000000140A02188: cmp     [r8], r15d
 * 0000000140A0218B: jnz     short loc_140A02195
 * 0000000140A0218D: cmp     [r8+18h], r15d
 * 0000000140A02191: cmovnz  r13d, edx
 * 0000000140A02195: mov     ecx, [r8+10h]
 * 0000000140A02199: mov     rdx, [r8+8]
 * 0000000140A0219D: test    rcx, rcx
 * 0000000140A021A0: jz      loc_140A0226E
 * 0000000140A021A6: mov     eax, [rsi+994h]
 * 0000000140A021AC: mov     r9d, 40h ; '@'
 * 0000000140A021B2: test    r9b, al
 * 0000000140A021B5: jz      loc_140A0226E
 * 0000000140A021BB: mov     r12, cr8
 * 0000000140A021BF: lea     eax, [r9-3Eh]
 * 0000000140A021C3: mov     cr8, rax
 * 0000000140A021C7: mov     r14, rdx
 * 0000000140A021CA: lea     rax, [rcx-1]
 * 0000000140A021CE: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A021D5: add     rax, rdx
 * 0000000140A021D8: or      rax, 0FFFh
 * 0000000140A021DE: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A021E3: lea     rax, [r14-1]
 * 0000000140A021E7: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A021EE: movzx   r15d, r12b
 * 0000000140A021F2: mov     rax, [rsi+468h]
 * 0000000140A021F9: xor     edx, edx
 * 0000000140A021FB: mov     rcx, r14
 * 0000000140A021FE: call    KeGuardDispatchICall
 * 0000000140A02203: cmp     eax, 0C000022Dh
 * 0000000140A02208: jnz     short loc_140A02231
 * 0000000140A0220A: test    r13d, r13d
 * 0000000140A0220D: jnz     short loc_140A02262
 * 0000000140A0220F: lea     eax, [r13+1]
 * 0000000140A02213: cmp     r12b, al
 * 0000000140A02216: ja      short loc_140A02235
 * 0000000140A02218: movzx   r15d, r12b
 * 0000000140A0221C: mov     cr8, r15
 * 0000000140A02220: mov     al, [r14]
 * 0000000140A02223: mov     rax, cr8
 * 0000000140A02227: lea     eax, [r13+2]
 * 0000000140A0222B: mov     cr8, rax
 * 0000000140A0222F: jmp     short loc_140A021F2
 * 0000000140A02231: test    eax, eax
 * 0000000140A02233: js      short loc_140A02262
 * 0000000140A02235: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A0223C: mov     r11d, 1000h
 * 0000000140A02242: add     rax, r11
 * 0000000140A02245: add     r14, r11
 * 0000000140A02248: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A0224F: cmp     rax, [rsp+0CE0h+var_C70]
 * 0000000140A02254: jnz     short loc_140A021EE
 * 0000000140A02256: mov     cr8, r15
 * 0000000140A0225A: xor     r15d, r15d
 * 0000000140A0225D: jmp     loc_140A0264C
 * 0000000140A02262: mov     cr8, r15
 * 0000000140A02266: mov     r8, [rsp+0CE0h+var_C90]
 * 0000000140A0226B: xor     r15d, r15d
 * 0000000140A0226E: mov     eax, [rsi+8F8h]
 * 0000000140A02274: mov     edx, [r8+14h]
 * 0000000140A02278: test    eax, eax
 * 0000000140A0227A: jnz     short loc_140A02292
 * 0000000140A0227C: mov     rax, [rsi+590h]
 * 0000000140A02283: mov     ecx, ebx
 * 0000000140A02285: xor     rcx, rdx
 * 0000000140A02288: mov     [rax+18h], rcx
 * 0000000140A0228C: mov     eax, [rsi+8F8h]
 * 0000000140A02292: mov     rcx, [r8+8]
 * 0000000140A02296: test    eax, eax
 * 0000000140A02298: jnz     loc_140A0264C
 * 0000000140A0229E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A022A8: add     rax, rsi
 * 0000000140A022AB: mov     [rsi+900h], rax
 * 0000000140A022B2: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A022BC: add     rax, r8
 * 0000000140A022BF: mov     [rsi+908h], rax
 * 0000000140A022C6: movsxd  rax, dword ptr [r8]
 * 0000000140A022C9: mov     [rsi+910h], rax
 * 0000000140A022D0: mov     r12d, 1
 * 0000000140A022D6: mov     [rsi+918h], rcx
 * 0000000140A022DD: xor     edx, edx
 * 0000000140A022DF: mov     rcx, rsi
 * 0000000140A022E2: mov     [rsi+8F8h], r12d
 * 0000000140A022E9: call    $$b8
 * 0000000140A022EE: jmp     loc_140A02652
 * 0000000140A022F3: cmp     [rsi+980h], r15
 * 0000000140A022FA: jz      loc_140A02645
 * 0000000140A02300: mov     edx, [rsi+994h]
 * 0000000140A02306: mov     ecx, edx
 * 0000000140A02308: cmp     [rsi+824h], r15d
 * 0000000140A0230F: jnz     short loc_140A02323
 * 0000000140A02311: shl     ecx, 3
 * 0000000140A02314: xor     ecx, edx
 * 0000000140A02316: and     ecx, 20h
 * 0000000140A02319: xor     ecx, edx
 * 0000000140A0231B: mov     [rsi+994h], ecx
 * 0000000140A02321: jmp     short loc_140A02332
 * 0000000140A02323: mov     eax, edx
 * 0000000140A02325: shr     eax, 3
 * 0000000140A02328: xor     eax, edx
 * 0000000140A0232A: test    al, 4
 * 0000000140A0232C: jnz     loc_140A02645
 * 0000000140A02332: test    cl, 4
 * 0000000140A02335: jz      loc_140A023FE
 * 0000000140A0233B: mov     ecx, [r13+8]
 * 0000000140A0233F: mov     r14d, [r13+10h]
 * 0000000140A02343: and     ecx, 0FFFh
 * 0000000140A02349: mov     rbx, [r13+8]
 * 0000000140A0234D: add     r14, 0FFFh
 * 0000000140A02354: add     r14, rcx
 * 0000000140A02357: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A0235E: shr     r14, 0Ch
 * 0000000140A02362: test    r14, r14
 * 0000000140A02365: jz      loc_140A0264C
 * 0000000140A0236B: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140A02375: mov     r12d, 1
 * 0000000140A0237B: mov     rax, [rsi+2B0h]
 * 0000000140A02382: mov     rcx, rbx
 * 0000000140A02385: sub     r14, r12
 * 0000000140A02388: call    KeGuardDispatchICall
 * 0000000140A0238D: test    al, al
 * 0000000140A0238F: jz      short loc_140A023DC
 * 0000000140A02391: cmp     [rsi+8F8h], r15d
 * 0000000140A02398: jnz     short loc_140A023DC
 * 0000000140A0239A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A023A4: xor     edx, edx
 * 0000000140A023A6: add     rax, rsi
 * 0000000140A023A9: mov     rcx, rsi
 * 0000000140A023AC: mov     [rsi+900h], rax
 * 0000000140A023B3: lea     rax, [rdi+r13]
 * 0000000140A023B7: mov     [rsi+908h], rax
 * 0000000140A023BE: movsxd  rax, dword ptr [r13+0]
 * 0000000140A023C2: mov     [rsi+910h], rax
 * 0000000140A023C9: mov     [rsi+918h], rbx
 * 0000000140A023D0: mov     [rsi+8F8h], r12d
 * 0000000140A023D7: call    $$b8
 * 0000000140A023DC: add     dword ptr [rsi+828h], 100h
 * 0000000140A023E6: add     rbx, 1000h
 * 0000000140A023ED: test    r14, r14
 * 0000000140A023F0: jnz     short loc_140A0237B
 * 0000000140A023F2: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A023F9: jmp     loc_140A02652
 * 0000000140A023FE: mov     r14, [r13+8]
 * 0000000140A02402: mov     r8d, [r13+10h]
 * 0000000140A02406: mov     r9, r14
 * 0000000140A02409: add     [rsi+828h], r8d
 * 0000000140A02410: mov     rax, r14
 * 0000000140A02413: mov     r10d, [rsi+814h]
 * 0000000140A0241A: mov     r15, [rsi+818h]
 * 0000000140A02421: lea     rcx, [r14+r8]
 * 0000000140A02425: cmp     r14, rcx
 * 0000000140A02428: jnb     short loc_140A0243A
 * 0000000140A0242A: mov     edx, 40h ; '@'
 * 0000000140A0242F: prefetchnta byte ptr [rax]
 * 0000000140A02432: add     rax, rdx
 * 0000000140A02435: cmp     rax, rcx
 * 0000000140A02438: jb      short loc_140A0242F
 * 0000000140A0243A: mov     r11d, r8d
 * 0000000140A0243D: mov     rbx, r15
 * 0000000140A02440: shr     r11d, 7
 * 0000000140A02444: mov     r12d, 1
 * 0000000140A0244A: test    r11d, r11d
 * 0000000140A0244D: jz      short loc_140A024BD
 * 0000000140A0244F: mov     rdi, 7010008004002001h
 * 0000000140A02459: mov     eax, 8
 * 0000000140A0245E: xor     rbx, [r9]
 * 0000000140A02461: mov     ecx, r10d
 * 0000000140A02464: rol     rbx, cl
 * 0000000140A02467: xor     rbx, [r9+8]
 * 0000000140A0246B: add     r9, 10h
 * 0000000140A0246F: rol     rbx, cl
 * 0000000140A02472: sub     rax, r12
 * 0000000140A02475: jnz     short loc_140A0245E
 * 0000000140A02477: mov     rcx, r9
 * 0000000140A0247A: sub     rcx, r14
 * 0000000140A0247D: xor     rcx, r15
 * 0000000140A02480: mov     rax, rcx
 * 0000000140A02483: rol     rax, 11h
 * 0000000140A02487: xor     rcx, rax
 * 0000000140A0248A: mov     rax, rdi
 * 0000000140A0248D: mul     rcx
 * 0000000140A02490: xor     r10d, eax
 * 0000000140A02493: mov     [rbp+0BE0h+var_600], rdx
 * 0000000140A0249A: xor     r10d, edx
 * 0000000140A0249D: mov     edx, 0FFFFFFFFh
 * 0000000140A024A2: and     r10d, 3Fh
 * 0000000140A024A6: cmovz   r10d, r12d
 * 0000000140A024AA: add     r11d, edx
 * 0000000140A024AD: jnz     short loc_140A02459
 * 0000000140A024AF: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A024B4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A024BB: jmp     short loc_140A024C2
 * 0000000140A024BD: mov     edx, 0FFFFFFFFh
 * 0000000140A024C2: and     r8d, 7Fh
 * 0000000140A024C6: cmp     r8d, 8
 * 0000000140A024CA: jb      short loc_140A024E9
 * 0000000140A024CC: mov     eax, r8d
 * 0000000140A024CF: shr     rax, 3
 * 0000000140A024D3: xor     rbx, [r9]
 * 0000000140A024D6: mov     ecx, r10d
 * 0000000140A024D9: rol     rbx, cl
 * 0000000140A024DC: add     r9, 8
 * 0000000140A024E0: add     r8d, 0FFFFFFF8h
 * 0000000140A024E4: sub     rax, r12
 * 0000000140A024E7: jnz     short loc_140A024D3
 * 0000000140A024E9: xor     r15d, r15d
 * 0000000140A024EC: test    r8d, r8d
 * 0000000140A024EF: jz      short loc_140A02506
 * 0000000140A024F1: movzx   eax, byte ptr [r9]
 * 0000000140A024F5: mov     ecx, r10d
 * 0000000140A024F8: xor     rbx, rax
 * 0000000140A024FB: add     r9, r12
 * 0000000140A024FE: rol     rbx, cl
 * 0000000140A02501: add     r8d, edx
 * 0000000140A02504: jnz     short loc_140A024F1
 * 0000000140A02506: mov     rax, rbx
 * 0000000140A02509: jmp     short loc_140A0250D
 * 0000000140A0250B: xor     ebx, eax
 * 0000000140A0250D: shr     rax, 1Fh
 * 0000000140A02511: test    rax, rax
 * 0000000140A02514: jnz     short loc_140A0250B
 * 0000000140A02516: mov     r8d, [r13+14h]
 * 0000000140A0251A: btr     ebx, 1Fh
 * 0000000140A0251E: cmp     ebx, r8d
 * 0000000140A02521: jz      loc_140A0264C
 * 0000000140A02527: mov     ecx, [r13+10h]
 * 0000000140A0252B: mov     rdx, [r13+8]
 * 0000000140A0252F: test    rcx, rcx
 * 0000000140A02532: jz      loc_140A025E9
 * 0000000140A02538: mov     eax, [rsi+994h]
 * 0000000140A0253E: mov     r9d, 40h ; '@'
 * 0000000140A02544: test    r9b, al
 * 0000000140A02547: jz      loc_140A025E9
 * 0000000140A0254D: mov     r12, cr8
 * 0000000140A02551: lea     eax, [r9-3Eh]
 * 0000000140A02555: mov     cr8, rax
 * 0000000140A02559: mov     r14, rdx
 * 0000000140A0255C: lea     rax, [rcx-1]
 * 0000000140A02560: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A02567: add     rax, rdx
 * 0000000140A0256A: or      rax, 0FFFh
 * 0000000140A02570: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A02577: lea     r13, [r14-1]
 * 0000000140A0257B: movzx   r15d, r12b
 * 0000000140A0257F: mov     rax, [rsi+468h]
 * 0000000140A02586: xor     edx, edx
 * 0000000140A02588: mov     rcx, r14
 * 0000000140A0258B: call    KeGuardDispatchICall
 * 0000000140A02590: cmp     eax, 0C000022Dh
 * 0000000140A02595: jnz     short loc_140A025BB
 * 0000000140A02597: mov     eax, 1
 * 0000000140A0259C: cmp     r12b, al
 * 0000000140A0259F: ja      short loc_140A025BF
 * 0000000140A025A1: movzx   r15d, r12b
 * 0000000140A025A5: mov     cr8, r15
 * 0000000140A025A9: mov     al, [r14]
 * 0000000140A025AC: mov     rax, cr8
 * 0000000140A025B0: mov     eax, 2
 * 0000000140A025B5: mov     cr8, rax
 * 0000000140A025B9: jmp     short loc_140A0257F
 * 0000000140A025BB: test    eax, eax
 * 0000000140A025BD: js      short loc_140A025D9
 * 0000000140A025BF: mov     r11d, 1000h
 * 0000000140A025C5: add     r14, r11
 * 0000000140A025C8: add     r13, r11
 * 0000000140A025CB: cmp     r13, [rbp+0BE0h+arg_8]
 * 0000000140A025D2: jnz     short loc_140A0257B
 * 0000000140A025D4: jmp     loc_140A02256
 * 0000000140A025D9: mov     cr8, r15
 * 0000000140A025DD: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A025E2: xor     r15d, r15d
 * 0000000140A025E5: mov     r8d, [r13+14h]
 * 0000000140A025E9: mov     eax, [rsi+8F8h]
 * 0000000140A025EF: test    eax, eax
 * 0000000140A025F1: jnz     short loc_140A0260C
 * 0000000140A025F3: mov     eax, r8d
 * 0000000140A025F6: mov     ecx, ebx
 * 0000000140A025F8: xor     rcx, rax
 * 0000000140A025FB: mov     rax, [rsi+590h]
 * 0000000140A02602: mov     [rax+18h], rcx
 * 0000000140A02606: mov     eax, [rsi+8F8h]
 * 0000000140A0260C: mov     rcx, [r13+8]
 * 0000000140A02610: test    eax, eax
 * 0000000140A02612: jnz     short loc_140A0264C
 * 0000000140A02614: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0261E: add     rax, rsi
 * 0000000140A02621: mov     [rsi+900h], rax
 * 0000000140A02628: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A02632: add     rax, r13
 * 0000000140A02635: mov     [rsi+908h], rax
 * 0000000140A0263C: movsxd  rax, dword ptr [r13+0]
 * 0000000140A02640: jmp     loc_140A022C9
 * 0000000140A02645: mov     [rsi+824h], r15d
 * 0000000140A0264C: mov     r12d, 1
 * 0000000140A02652: test    dword ptr [rsi+994h], 4000h
 * 0000000140A0265C: jz      loc_1409FA31B
 * 0000000140A02662: mov     ecx, [rsi+990h]
 * 0000000140A02668: mov     edx, r12d
 * 0000000140A0266B: mov     r8, [rsi+4E0h]
 * 0000000140A02672: shr     ecx, 0Ah
 * 0000000140A02675: and     ecx, 1Fh
 * 0000000140A02678: shl     edx, cl
 * 0000000140A0267A: not     edx
 * 0000000140A0267C: lock and [r8], edx
 * 0000000140A02680: sti
 * 0000000140A02681: jmp     loc_1409FA31B
 * 0000000140A02686: mov     rcx, gs:20h
 * 0000000140A0268F: mov     rax, [rsi+648h]
 * 0000000140A02696: mov     rcx, [rax+rcx]
 * 0000000140A0269A: mov     rax, [rsi+688h]
 * 0000000140A026A1: add     rcx, [rsi+6A8h]
 * 0000000140A026A8: mov     rcx, [rcx+rax]
 * 0000000140A026AC: mov     [rbp+0BE0h+var_BC0], rcx
 * 0000000140A026B0: mov     rax, [rsi+490h]
 * 0000000140A026B7: call    KeGuardDispatchICall
 * 0000000140A026BC: mov     r9d, 0FFFFFFFFh
 * 0000000140A026C2: xor     r15d, r15d
 * 0000000140A026C5: mov     r14, rax
 * 0000000140A026C8: cmp     rax, r9
 * 0000000140A026CB: jnz     loc_140A02802
 * 0000000140A026D1: mov     [rbp+0BE0h+var_BC0], r15
 * 0000000140A026D5: mov     rcx, [rsi+988h]
 * 0000000140A026DC: test    rcx, rcx
 * 0000000140A026DF: jz      short loc_140A02704
 * 0000000140A026E1: mov     rax, [rsi+480h]
 * 0000000140A026E8: lea     rdx, [rbp+0BE0h+var_BC0]
 * 0000000140A026EC: call    KeGuardDispatchICall
 * 0000000140A026F1: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A026F5: test    eax, eax
 * 0000000140A026F7: cmovs   rcx, r15
 * 0000000140A026FB: mov     [rbp+0BE0h+var_BC0], rcx
 * 0000000140A026FF: test    rcx, rcx
 * 0000000140A02702: jnz     short loc_140A02716
 * 0000000140A02704: mov     rax, [rsi+3C0h]
 * 0000000140A0270B: xor     ecx, ecx
 * 0000000140A0270D: call    KeGuardDispatchICall
 * 0000000140A02712: mov     [rbp+0BE0h+var_BC0], rax
 * 0000000140A02716: mov     [rsi+988h], r15
 * 0000000140A0271D: mov     ebx, r15d
 * 0000000140A02720: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A02724: test    rcx, rcx
 * 0000000140A02727: jz      loc_140A027F4
 * 0000000140A0272D: mov     r12d, 1
 * 0000000140A02733: mov     rax, [rsi+3A0h]
 * 0000000140A0273A: add     ebx, r12d
 * 0000000140A0273D: call    KeGuardDispatchICall
 * 0000000140A02742: test    eax, eax
 * 0000000140A02744: js      short loc_140A027A1
 * 0000000140A02746: mov     rax, [rsi+438h]
 * 0000000140A0274D: lea     rdx, [rbp+0BE0h+var_70]
 * 0000000140A02754: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A02758: call    KeGuardDispatchICall
 * 0000000140A0275D: mov     rax, [rsi+490h]
 * 0000000140A02764: call    KeGuardDispatchICall
 * 0000000140A02769: mov     r14, rax
 * 0000000140A0276C: lea     rcx, [rbp+0BE0h+var_70]
 * 0000000140A02773: mov     rax, [rsi+440h]
 * 0000000140A0277A: call    KeGuardDispatchICall
 * 0000000140A0277F: mov     rax, [rsi+3A8h]
 * 0000000140A02786: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A0278A: call    KeGuardDispatchICall
 * 0000000140A0278F: mov     eax, 0FFFFFFFFh
 * 0000000140A02794: cmp     r14, rax
 * 0000000140A02797: jnz     short loc_140A027C2
 * 0000000140A02799: cmp     ebx, 100h
 * 0000000140A0279F: ja      short loc_140A027C2
 * 0000000140A027A1: mov     rax, [rsi+3C0h]
 * 0000000140A027A8: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A027AC: call    KeGuardDispatchICall
 * 0000000140A027B1: mov     [rbp+0BE0h+var_BC0], rax
 * 0000000140A027B5: mov     rcx, rax
 * 0000000140A027B8: test    rax, rax
 * 0000000140A027BB: jz      short loc_140A027F4
 * 0000000140A027BD: jmp     loc_140A02733
 * 0000000140A027C2: mov     rax, [rsi+488h]
 * 0000000140A027C9: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A027CD: call    KeGuardDispatchICall
 * 0000000140A027D2: mov     [rsi+988h], rax
 * 0000000140A027D9: mov     rax, [rsi+1E0h]
 * 0000000140A027E0: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A027E4: call    KeGuardDispatchICall
 * 0000000140A027E9: mov     r9d, 0FFFFFFFFh
 * 0000000140A027EF: cmp     r14, r9
 * 0000000140A027F2: jnz     short loc_140A02808
 * 0000000140A027F4: shl     ebx, 0Ch
 * 0000000140A027F7: add     [rsi+828h], ebx
 * 0000000140A027FD: jmp     loc_1409FA31B
 * 0000000140A02802: mov     r12d, 1
 * 0000000140A02808: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A02812: jz      short loc_140A02857
 * 0000000140A02814: mov     rcx, [rsi+0A80h]
 * 0000000140A0281B: mov     edx, 30h ; '0'
 * 0000000140A02820: lea     r8d, [rdx-2Ah]
 * 0000000140A02824: mov     rax, [r13+0]
 * 0000000140A02828: add     edx, 0FFFFFFF8h
 * 0000000140A0282B: mov     [rcx], rax
 * 0000000140A0282E: add     r13, 8
 * 0000000140A02832: add     rcx, 8
 * 0000000140A02836: sub     r8, r12
 * 0000000140A02839: jnz     short loc_140A02824
 * 0000000140A0283B: test    edx, edx
 * 0000000140A0283D: jz      short loc_140A02850
 * 0000000140A0283F: mov     al, [r13+0]
 * 0000000140A02843: add     r13, r12
 * 0000000140A02846: mov     [rcx], al
 * 0000000140A02848: add     rcx, r12
 * 0000000140A0284B: add     edx, r9d
 * 0000000140A0284E: jnz     short loc_140A0283F
 * 0000000140A02850: mov     r13, [rsi+0A80h]
 * 0000000140A02857: mov     [r13+18h], r14
 * 0000000140A0285B: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A0285F: cmp     [rsi+8F8h], r15d
 * 0000000140A02866: jnz     loc_1409FA31B
 * 0000000140A0286C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02876: add     rax, rsi
 * 0000000140A02879: mov     [rsi+900h], rax
 * 0000000140A02880: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0288A: add     rax, r13
 * 0000000140A0288D: jmp     loc_140A001E4
 * 0000000140A02892: mov     eax, [rsi+830h]
 * 0000000140A02898: test    dl, al
 * 0000000140A0289A: jnz     loc_1409FA318
 * 0000000140A028A0: mov     r15, [rsi+548h]
 * 0000000140A028A7: xor     eax, eax
 * 0000000140A028A9: mov     r14d, eax
 * 0000000140A028AC: mov     rax, [rsi+178h]
 * 0000000140A028B3: call    KeGuardDispatchICall
 * 0000000140A028B8: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A028C2: jnz     short loc_140A028DC
 * 0000000140A028C4: mov     ecx, [rsi+950h]
 * 0000000140A028CA: cmp     ecx, 7
 * 0000000140A028CD: jnb     short loc_140A028DC
 * 0000000140A028CF: mov     r12d, 1
 * 0000000140A028D5: mov     ebx, r12d
 * 0000000140A028D8: shl     bl, cl
 * 0000000140A028DA: jmp     short loc_140A028F9
 * 0000000140A028DC: mov     rax, [rsi+128h]
 * 0000000140A028E3: xor     edx, edx
 * 0000000140A028E5: mov     rcx, [rsi+0A00h]
 * 0000000140A028EC: call    KeGuardDispatchICall
 * 0000000140A028F1: mov     bl, 80h
 * 0000000140A028F3: mov     r12d, 1
 * 0000000140A028F9: mov     rax, [rsi+138h]
 * 0000000140A02900: xor     edx, edx
 * 0000000140A02902: mov     rcx, r15
 * 0000000140A02905: call    KeGuardDispatchICall
 * 0000000140A0290A: cmp     bl, 80h
 * 0000000140A0290D: jz      short loc_140A02942
 * 0000000140A0290F: mov     r8, [rsi+520h]
 * 0000000140A02916: mov     rdx, [r8]
 * 0000000140A02919: cmp     rdx, r8
 * 0000000140A0291C: jz      short loc_140A02957
 * 0000000140A0291E: not     bl
 * 0000000140A02920: mov     rax, [rsi+6B8h]
 * 0000000140A02927: mov     rcx, rdx
 * 0000000140A0292A: sub     rcx, [rsi+6D0h]
 * 0000000140A02931: lock and [rcx+rax], bl
 * 0000000140A02935: mov     rdx, [rdx]
 * 0000000140A02938: add     r14d, r12d
 * 0000000140A0293B: cmp     rdx, r8
 * 0000000140A0293E: jnz     short loc_140A02920
 * 0000000140A02940: jmp     short loc_140A02957
 * 0000000140A02942: mov     rax, [rsi+130h]
 * 0000000140A02949: xor     edx, edx
 * 0000000140A0294B: mov     rcx, [rsi+0A00h]
 * 0000000140A02952: call    KeGuardDispatchICall
 * 0000000140A02957: mov     rcx, [rsi+548h]
 * 0000000140A0295E: xor     edx, edx
 * 0000000140A02960: mov     rax, [rsi+140h]
 * 0000000140A02967: call    KeGuardDispatchICall
 * 0000000140A0296C: mov     rax, [rsi+180h]
 * 0000000140A02973: call    KeGuardDispatchICall
 * 0000000140A02978: shl     r14d, 7
 * 0000000140A0297C: add     [rsi+828h], r14d
 * 0000000140A02983: jmp     loc_1409FA318
 * 0000000140A02988: mov     ecx, [r13+20h]
 * 0000000140A0298C: mov     edx, 2
 * 0000000140A02991: xor     r15d, r15d
 * 0000000140A02994: mov     [rbp+0BE0h+var_C48], rsi
 * 0000000140A02998: test    dl, cl
 * 0000000140A0299A: jz      loc_140A02E1A
 * 0000000140A029A0: cmp     [rsi+980h], r15
 * 0000000140A029A7: jz      loc_140A0144D
 * 0000000140A029AD: mov     eax, [rsi+994h]
 * 0000000140A029B3: test    al, 4
 * 0000000140A029B5: jnz     loc_140A0144D
 * 0000000140A029BB: test    dl, cl
 * 0000000140A029BD: jz      loc_140A02E1A
 * 0000000140A029C3: mov     edx, eax
 * 0000000140A029C5: mov     ecx, eax
 * 0000000140A029C7: cmp     [rsi+824h], r15d
 * 0000000140A029CE: jnz     short loc_140A029E2
 * 0000000140A029D0: shl     ecx, 3
 * 0000000140A029D3: xor     ecx, eax
 * 0000000140A029D5: and     ecx, 20h
 * 0000000140A029D8: xor     ecx, eax
 * 0000000140A029DA: mov     [rsi+994h], ecx
 * 0000000140A029E0: jmp     short loc_140A029F1
 * 0000000140A029E2: mov     eax, edx
 * 0000000140A029E4: shr     eax, 3
 * 0000000140A029E7: xor     eax, edx
 * 0000000140A029E9: test    al, 4
 * 0000000140A029EB: jnz     loc_140A0144D
 * 0000000140A029F1: cmp     [rsi+980h], r15
 * 0000000140A029F8: jz      loc_140A02E0E
 * 0000000140A029FE: mov     edx, ecx
 * 0000000140A02A00: cmp     [rsi+824h], r15d
 * 0000000140A02A07: jnz     short loc_140A02A1B
 * 0000000140A02A09: shl     edx, 3
 * 0000000140A02A0C: xor     edx, ecx
 * 0000000140A02A0E: and     edx, 20h
 * 0000000140A02A11: xor     edx, ecx
 * 0000000140A02A13: mov     [rsi+994h], edx
 * 0000000140A02A19: jmp     short loc_140A02A2A
 * 0000000140A02A1B: mov     eax, ecx
 * 0000000140A02A1D: shr     eax, 3
 * 0000000140A02A20: xor     eax, ecx
 * 0000000140A02A22: test    al, 4
 * 0000000140A02A24: jnz     loc_140A02E0E
 * 0000000140A02A2A: test    dl, 4
 * 0000000140A02A2D: jz      loc_140A02AF7
 * 0000000140A02A33: mov     r14d, [r13+8]
 * 0000000140A02A37: mov     ecx, [r13+10h]
 * 0000000140A02A3B: and     r14d, 0FFFh
 * 0000000140A02A42: mov     rbx, [r13+8]
 * 0000000140A02A46: add     r14, 0FFFh
 * 0000000140A02A4D: add     r14, rcx
 * 0000000140A02A50: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A02A57: shr     r14, 0Ch
 * 0000000140A02A5B: test    r14, r14
 * 0000000140A02A5E: jz      loc_140A02CE4
 * 0000000140A02A64: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140A02A6E: mov     r12d, 1
 * 0000000140A02A74: mov     rax, [rsi+2B0h]
 * 0000000140A02A7B: mov     rcx, rbx
 * 0000000140A02A7E: sub     r14, r12
 * 0000000140A02A81: call    KeGuardDispatchICall
 * 0000000140A02A86: test    al, al
 * 0000000140A02A88: jz      short loc_140A02AD5
 * 0000000140A02A8A: cmp     [rsi+8F8h], r15d
 * 0000000140A02A91: jnz     short loc_140A02AD5
 * 0000000140A02A93: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02A9D: xor     edx, edx
 * 0000000140A02A9F: add     rax, rsi
 * 0000000140A02AA2: mov     rcx, rsi
 * 0000000140A02AA5: mov     [rsi+900h], rax
 * 0000000140A02AAC: lea     rax, [rdi+r13]
 * 0000000140A02AB0: mov     [rsi+908h], rax
 * 0000000140A02AB7: movsxd  rax, dword ptr [r13+0]
 * 0000000140A02ABB: mov     [rsi+910h], rax
 * 0000000140A02AC2: mov     [rsi+918h], rbx
 * 0000000140A02AC9: mov     [rsi+8F8h], r12d
 * 0000000140A02AD0: call    $$b8
 * 0000000140A02AD5: add     dword ptr [rsi+828h], 100h
 * 0000000140A02ADF: add     rbx, 1000h
 * 0000000140A02AE6: test    r14, r14
 * 0000000140A02AE9: jnz     short loc_140A02A74
 * 0000000140A02AEB: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A02AF2: jmp     loc_140A02CE4
 * 0000000140A02AF7: mov     r14, [r13+8]
 * 0000000140A02AFB: mov     r8d, [r13+10h]
 * 0000000140A02AFF: mov     r9, r14
 * 0000000140A02B02: add     [rsi+828h], r8d
 * 0000000140A02B09: mov     rax, r14
 * 0000000140A02B0C: mov     r11d, [rsi+814h]
 * 0000000140A02B13: mov     r15, [rsi+818h]
 * 0000000140A02B1A: lea     rcx, [r14+r8]
 * 0000000140A02B1E: cmp     r14, rcx
 * 0000000140A02B21: jnb     short loc_140A02B33
 * 0000000140A02B23: mov     edx, 40h ; '@'
 * 0000000140A02B28: prefetchnta byte ptr [rax]
 * 0000000140A02B2B: add     rax, rdx
 * 0000000140A02B2E: cmp     rax, rcx
 * 0000000140A02B31: jb      short loc_140A02B28
 * 0000000140A02B33: mov     r10d, r8d
 * 0000000140A02B36: mov     rbx, r15
 * 0000000140A02B39: shr     r10d, 7
 * 0000000140A02B3D: test    r10d, r10d
 * 0000000140A02B40: jz      short loc_140A02BB3
 * 0000000140A02B42: mov     rsi, 7010008004002001h
 * 0000000140A02B4C: mov     r12d, 1
 * 0000000140A02B52: mov     edx, 8
 * 0000000140A02B57: mov     rax, [r9]
 * 0000000140A02B5A: mov     ecx, r11d
 * 0000000140A02B5D: xor     rax, rbx
 * 0000000140A02B60: mov     rbx, [r9+8]
 * 0000000140A02B64: rol     rax, cl
 * 0000000140A02B67: add     r9, 10h
 * 0000000140A02B6B: xor     rbx, rax
 * 0000000140A02B6E: rol     rbx, cl
 * 0000000140A02B71: sub     rdx, r12
 * 0000000140A02B74: jnz     short loc_140A02B57
 * 0000000140A02B76: mov     rcx, r9
 * 0000000140A02B79: sub     rcx, r14
 * 0000000140A02B7C: xor     rcx, r15
 * 0000000140A02B7F: mov     rax, rcx
 * 0000000140A02B82: rol     rax, 11h
 * 0000000140A02B86: xor     rcx, rax
 * 0000000140A02B89: mov     rax, rsi
 * 0000000140A02B8C: mul     rcx
 * 0000000140A02B8F: xor     r11d, eax
 * 0000000140A02B92: mov     [rbp+0BE0h+var_5F8], rdx
 * 0000000140A02B99: xor     r11d, edx
 * 0000000140A02B9C: mov     eax, 0FFFFFFFFh
 * 0000000140A02BA1: and     r11d, 3Fh
 * 0000000140A02BA5: cmovz   r11d, r12d
 * 0000000140A02BA9: add     r10d, eax
 * 0000000140A02BAC: jnz     short loc_140A02B52
 * 0000000140A02BAE: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A02BB3: and     r8d, 7Fh
 * 0000000140A02BB7: mov     r10d, 1
 * 0000000140A02BBD: cmp     r8d, 8
 * 0000000140A02BC1: jb      short loc_140A02BE0
 * 0000000140A02BC3: mov     edx, r8d
 * 0000000140A02BC6: shr     rdx, 3
 * 0000000140A02BCA: xor     rbx, [r9]
 * 0000000140A02BCD: mov     ecx, r11d
 * 0000000140A02BD0: rol     rbx, cl
 * 0000000140A02BD3: add     r9, 8
 * 0000000140A02BD7: add     r8d, 0FFFFFFF8h
 * 0000000140A02BDB: sub     rdx, r10
 * 0000000140A02BDE: jnz     short loc_140A02BCA
 * 0000000140A02BE0: xor     r15d, r15d
 * 0000000140A02BE3: test    r8d, r8d
 * 0000000140A02BE6: jz      short loc_140A02C06
 * 0000000140A02BE8: mov     r15d, 0FFFFFFFFh
 * 0000000140A02BEE: movzx   eax, byte ptr [r9]
 * 0000000140A02BF2: mov     ecx, r11d
 * 0000000140A02BF5: xor     rbx, rax
 * 0000000140A02BF8: add     r9, r10
 * 0000000140A02BFB: rol     rbx, cl
 * 0000000140A02BFE: add     r8d, r15d
 * 0000000140A02C01: jnz     short loc_140A02BEE
 * 0000000140A02C03: xor     r15d, r15d
 * 0000000140A02C06: mov     rax, rbx
 * 0000000140A02C09: jmp     short loc_140A02C0D
 * 0000000140A02C0B: xor     ebx, eax
 * 0000000140A02C0D: shr     rax, 1Fh
 * 0000000140A02C11: test    rax, rax
 * 0000000140A02C14: jnz     short loc_140A02C0B
 * 0000000140A02C16: mov     r8d, [r13+14h]
 * 0000000140A02C1A: btr     ebx, 1Fh
 * 0000000140A02C1E: cmp     ebx, r8d
 * 0000000140A02C21: jz      loc_140A02CE4
 * 0000000140A02C27: mov     ecx, [r13+10h]
 * 0000000140A02C2B: mov     rdx, [r13+8]
 * 0000000140A02C2F: test    rcx, rcx
 * 0000000140A02C32: jz      loc_140A02D8B
 * 0000000140A02C38: mov     eax, [rsi+994h]
 * 0000000140A02C3E: mov     r9d, 40h ; '@'
 * 0000000140A02C44: test    r9b, al
 * 0000000140A02C47: jz      loc_140A02D8B
 * 0000000140A02C4D: mov     r12, cr8
 * 0000000140A02C51: lea     eax, [r9-3Eh]
 * 0000000140A02C55: mov     cr8, rax
 * 0000000140A02C59: mov     r14, rdx
 * 0000000140A02C5C: lea     rax, [rcx-1]
 * 0000000140A02C60: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A02C67: add     rax, rdx
 * 0000000140A02C6A: or      rax, 0FFFh
 * 0000000140A02C70: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A02C77: lea     r13, [r14-1]
 * 0000000140A02C7B: movzx   r15d, r12b
 * 0000000140A02C7F: mov     rax, [rsi+468h]
 * 0000000140A02C86: xor     edx, edx
 * 0000000140A02C88: mov     rcx, r14
 * 0000000140A02C8B: call    KeGuardDispatchICall
 * 0000000140A02C90: cmp     eax, 0C000022Dh
 * 0000000140A02C95: jnz     short loc_140A02CBB
 * 0000000140A02C97: mov     eax, 1
 * 0000000140A02C9C: cmp     r12b, al
 * 0000000140A02C9F: ja      short loc_140A02CC3
 * 0000000140A02CA1: movzx   r15d, r12b
 * 0000000140A02CA5: mov     cr8, r15
 * 0000000140A02CA9: mov     al, [r14]
 * 0000000140A02CAC: mov     rax, cr8
 * 0000000140A02CB0: mov     eax, 2
 * 0000000140A02CB5: mov     cr8, rax
 * 0000000140A02CB9: jmp     short loc_140A02C7F
 * 0000000140A02CBB: test    eax, eax
 * 0000000140A02CBD: js      loc_140A02D7B
 * 0000000140A02CC3: mov     r11d, 1000h
 * 0000000140A02CC9: add     r14, r11
 * 0000000140A02CCC: add     r13, r11
 * 0000000140A02CCF: cmp     r13, [rbp+0BE0h+arg_8]
 * 0000000140A02CD6: jnz     short loc_140A02C7B
 * 0000000140A02CD8: mov     cr8, r15
 * 0000000140A02CDC: xor     r15d, r15d
 * 0000000140A02CDF: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A02CE4: mov     eax, [r13+20h]
 * 0000000140A02CE8: mov     r14d, 1
 * 0000000140A02CEE: test    r14b, al
 * 0000000140A02CF1: jz      loc_1409FA31B
 * 0000000140A02CF7: mov     rbx, [r13+18h]
 * 0000000140A02CFB: mov     rax, [rsi+1F8h]
 * 0000000140A02D02: mov     rcx, rbx
 * 0000000140A02D05: mov     [rsp+0CE0h+var_C88], rbx
 * 0000000140A02D0A: call    KeGuardDispatchICall
 * 0000000140A02D0F: movzx   r15d, word ptr [rax+14h]
 * 0000000140A02D14: add     r15, 18h
 * 0000000140A02D18: add     r15, rax
 * 0000000140A02D1B: movzx   eax, word ptr [rax+6]
 * 0000000140A02D1F: lea     rcx, [rax+rax*4]
 * 0000000140A02D23: lea     rax, [r15+rcx*8]
 * 0000000140A02D27: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A02D2C: cmp     r15, rax
 * 0000000140A02D2F: jz      loc_1409FA318
 * 0000000140A02D35: mov     r12d, [rsi+824h]
 * 0000000140A02D3C: xor     edx, edx
 * 0000000140A02D3E: test    r12d, r12d
 * 0000000140A02D41: jnz     short loc_140A02D53
 * 0000000140A02D43: mov     dword ptr [rsi+824h], 1000h
 * 0000000140A02D4D: mov     r12d, 1000h
 * 0000000140A02D53: mov     eax, r12d
 * 0000000140A02D56: cmp     rbx, [rsi+5E8h]
 * 0000000140A02D5D: jz      loc_140A0303F
 * 0000000140A02D63: cmp     rbx, [rsi+5F0h]
 * 0000000140A02D6A: jz      loc_140A0303F
 * 0000000140A02D70: mov     dword ptr [rbp+0BE0h+arg_8], edx
 * 0000000140A02D76: jmp     loc_140A03049
 * 0000000140A02D7B: mov     cr8, r15
 * 0000000140A02D7F: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A02D84: xor     r15d, r15d
 * 0000000140A02D87: mov     r8d, [r13+14h]
 * 0000000140A02D8B: mov     eax, [rsi+8F8h]
 * 0000000140A02D91: test    eax, eax
 * 0000000140A02D93: jnz     short loc_140A02DAE
 * 0000000140A02D95: mov     ecx, r8d
 * 0000000140A02D98: mov     eax, ebx
 * 0000000140A02D9A: xor     rcx, rax
 * 0000000140A02D9D: mov     rax, [rsi+590h]
 * 0000000140A02DA4: mov     [rax+18h], rcx
 * 0000000140A02DA8: mov     eax, [rsi+8F8h]
 * 0000000140A02DAE: mov     rcx, [r13+8]
 * 0000000140A02DB2: test    eax, eax
 * 0000000140A02DB4: jnz     loc_140A02CE4
 * 0000000140A02DBA: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02DC4: xor     edx, edx
 * 0000000140A02DC6: add     rax, rsi
 * 0000000140A02DC9: mov     [rsi+900h], rax
 * 0000000140A02DD0: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A02DDA: add     rax, r13
 * 0000000140A02DDD: mov     [rsi+908h], rax
 * 0000000140A02DE4: movsxd  rax, dword ptr [r13+0]
 * 0000000140A02DE8: mov     [rsi+910h], rax
 * 0000000140A02DEF: mov     eax, 1
 * 0000000140A02DF4: mov     [rsi+918h], rcx
 * 0000000140A02DFB: mov     rcx, rsi
 * 0000000140A02DFE: mov     [rsi+8F8h], eax
 * 0000000140A02E04: call    $$b8
 * 0000000140A02E09: jmp     loc_140A02CE4
 * 0000000140A02E0E: mov     [rsi+824h], r15d
 * 0000000140A02E15: jmp     loc_140A02CE4
 * 0000000140A02E1A: mov     r14, [r13+8]
 * 0000000140A02E1E: mov     r8d, [r13+10h]
 * 0000000140A02E22: mov     r9, r14
 * 0000000140A02E25: add     [rsi+828h], r8d
 * 0000000140A02E2C: mov     rax, r14
 * 0000000140A02E2F: mov     r10d, [rsi+814h]
 * 0000000140A02E36: mov     r15, [rsi+818h]
 * 0000000140A02E3D: lea     rcx, [r14+r8]
 * 0000000140A02E41: cmp     r14, rcx
 * 0000000140A02E44: jnb     short loc_140A02E56
 * 0000000140A02E46: mov     edx, 40h ; '@'
 * 0000000140A02E4B: prefetchnta byte ptr [rax]
 * 0000000140A02E4E: add     rax, rdx
 * 0000000140A02E51: cmp     rax, rcx
 * 0000000140A02E54: jb      short loc_140A02E4B
 * 0000000140A02E56: mov     r11d, r8d
 * 0000000140A02E59: mov     rbx, r15
 * 0000000140A02E5C: shr     r11d, 7
 * 0000000140A02E60: mov     edx, 1
 * 0000000140A02E65: mov     r12d, 0FFFFFFFFh
 * 0000000140A02E6B: test    r11d, r11d
 * 0000000140A02E6E: jz      short loc_140A02EDC
 * 0000000140A02E70: mov     rdi, 7010008004002001h
 * 0000000140A02E7A: mov     eax, 8
 * 0000000140A02E7F: xor     rbx, [r9]
 * 0000000140A02E82: mov     ecx, r10d
 * 0000000140A02E85: rol     rbx, cl
 * 0000000140A02E88: xor     rbx, [r9+8]
 * 0000000140A02E8C: add     r9, 10h
 * 0000000140A02E90: rol     rbx, cl
 * 0000000140A02E93: sub     rax, rdx
 * 0000000140A02E96: jnz     short loc_140A02E7F
 * 0000000140A02E98: mov     rcx, r9
 * 0000000140A02E9B: sub     rcx, r14
 * 0000000140A02E9E: xor     rcx, r15
 * 0000000140A02EA1: mov     rax, rcx
 * 0000000140A02EA4: rol     rax, 11h
 * 0000000140A02EA8: xor     rcx, rax
 * 0000000140A02EAB: mov     rax, rdi
 * 0000000140A02EAE: mul     rcx
 * 0000000140A02EB1: xor     r10d, eax
 * 0000000140A02EB4: mov     [rbp+0BE0h+var_5F0], rdx
 * 0000000140A02EBB: xor     r10d, edx
 * 0000000140A02EBE: mov     edx, 1
 * 0000000140A02EC3: and     r10d, 3Fh
 * 0000000140A02EC7: cmovz   r10d, edx
 * 0000000140A02ECB: add     r11d, r12d
 * 0000000140A02ECE: jnz     short loc_140A02E7A
 * 0000000140A02ED0: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A02ED5: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A02EDC: and     r8d, 7Fh
 * 0000000140A02EE0: cmp     r8d, 8
 * 0000000140A02EE4: jb      short loc_140A02F03
 * 0000000140A02EE6: mov     eax, r8d
 * 0000000140A02EE9: shr     rax, 3
 * 0000000140A02EED: xor     rbx, [r9]
 * 0000000140A02EF0: mov     ecx, r10d
 * 0000000140A02EF3: rol     rbx, cl
 * 0000000140A02EF6: add     r9, 8
 * 0000000140A02EFA: add     r8d, 0FFFFFFF8h
 * 0000000140A02EFE: sub     rax, rdx
 * 0000000140A02F01: jnz     short loc_140A02EED
 * 0000000140A02F03: xor     r15d, r15d
 * 0000000140A02F06: test    r8d, r8d
 * 0000000140A02F09: jz      short loc_140A02F20
 * 0000000140A02F0B: movzx   eax, byte ptr [r9]
 * 0000000140A02F0F: mov     ecx, r10d
 * 0000000140A02F12: xor     rbx, rax
 * 0000000140A02F15: add     r9, rdx
 * 0000000140A02F18: rol     rbx, cl
 * 0000000140A02F1B: add     r8d, r12d
 * 0000000140A02F1E: jnz     short loc_140A02F0B
 * 0000000140A02F20: mov     rax, rbx
 * 0000000140A02F23: jmp     short loc_140A02F27
 * 0000000140A02F25: xor     ebx, eax
 * 0000000140A02F27: shr     rax, 1Fh
 * 0000000140A02F2B: test    rax, rax
 * 0000000140A02F2E: jnz     short loc_140A02F25
 * 0000000140A02F30: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A02F35: btr     ebx, 1Fh
 * 0000000140A02F39: mov     r13d, r15d
 * 0000000140A02F3C: cmp     ebx, [rax+14h]
 * 0000000140A02F3F: jz      loc_140A02CDF
 * 0000000140A02F45: cmp     [rax], r15d
 * 0000000140A02F48: jnz     short loc_140A02F52
 * 0000000140A02F4A: cmp     [rax+18h], r15d
 * 0000000140A02F4E: cmovnz  r13d, edx
 * 0000000140A02F52: mov     ecx, [rax+10h]
 * 0000000140A02F55: mov     rdx, [rax+8]
 * 0000000140A02F59: test    rcx, rcx
 * 0000000140A02F5C: jz      loc_140A0301E
 * 0000000140A02F62: mov     eax, [rsi+994h]
 * 0000000140A02F68: mov     r8d, 40h ; '@'
 * 0000000140A02F6E: test    r8b, al
 * 0000000140A02F71: jz      loc_140A0301E
 * 0000000140A02F77: mov     r12, cr8
 * 0000000140A02F7B: lea     eax, [r8-3Eh]
 * 0000000140A02F7F: mov     cr8, rax
 * 0000000140A02F83: mov     r14, rdx
 * 0000000140A02F86: lea     rax, [rcx-1]
 * 0000000140A02F8A: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A02F91: add     rax, rdx
 * 0000000140A02F94: or      rax, 0FFFh
 * 0000000140A02F9A: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A02F9F: lea     rax, [r14-1]
 * 0000000140A02FA3: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A02FAA: movzx   r15d, r12b
 * 0000000140A02FAE: mov     rax, [rsi+468h]
 * 0000000140A02FB5: xor     edx, edx
 * 0000000140A02FB7: mov     rcx, r14
 * 0000000140A02FBA: call    KeGuardDispatchICall
 * 0000000140A02FBF: cmp     eax, 0C000022Dh
 * 0000000140A02FC4: jnz     short loc_140A02FED
 * 0000000140A02FC6: test    r13d, r13d
 * 0000000140A02FC9: jnz     short loc_140A03017
 * 0000000140A02FCB: lea     eax, [r13+1]
 * 0000000140A02FCF: cmp     r12b, al
 * 0000000140A02FD2: ja      short loc_140A02FF1
 * 0000000140A02FD4: movzx   r15d, r12b
 * 0000000140A02FD8: mov     cr8, r15
 * 0000000140A02FDC: mov     al, [r14]
 * 0000000140A02FDF: mov     rax, cr8
 * 0000000140A02FE3: lea     eax, [r13+2]
 * 0000000140A02FE7: mov     cr8, rax
 * 0000000140A02FEB: jmp     short loc_140A02FAE
 * 0000000140A02FED: test    eax, eax
 * 0000000140A02FEF: js      short loc_140A03017
 * 0000000140A02FF1: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A02FF8: mov     r11d, 1000h
 * 0000000140A02FFE: add     rax, r11
 * 0000000140A03001: add     r14, r11
 * 0000000140A03004: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A0300B: cmp     rax, [rsp+0CE0h+var_C70]
 * 0000000140A03010: jnz     short loc_140A02FAA
 * 0000000140A03012: jmp     loc_140A02CD8
 * 0000000140A03017: mov     cr8, r15
 * 0000000140A0301B: xor     r15d, r15d
 * 0000000140A0301E: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A03023: mov     eax, [rsi+8F8h]
 * 0000000140A03029: mov     edx, [r13+14h]
 * 0000000140A0302D: test    eax, eax
 * 0000000140A0302F: jnz     loc_140A02DAE
 * 0000000140A03035: mov     ecx, ebx
 * 0000000140A03037: xor     rcx, rdx
 * 0000000140A0303A: jmp     loc_140A02D9D
 * 0000000140A0303F: mov     dword ptr [rbp+0BE0h+arg_8], r14d
 * 0000000140A03046: mov     r12d, eax
 * 0000000140A03049: mov     esi, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0304F: mov     rdi, [rsp+0CE0h+var_C70]
 * 0000000140A03054: mov     ecx, [r15+10h]
 * 0000000140A03058: mov     eax, [r15+8]
 * 0000000140A0305C: cmp     ecx, eax
 * 0000000140A0305E: mov     r11d, [r15+0Ch]
 * 0000000140A03062: cmovbe  ecx, eax
 * 0000000140A03065: lea     r13d, [r11+0FFFh]
 * 0000000140A0306C: add     r13d, ecx
 * 0000000140A0306F: and     r13d, 0FFFFF000h
 * 0000000140A03076: cmp     r12d, r13d
 * 0000000140A03079: jnb     loc_140A0318D
 * 0000000140A0307F: mov     eax, [r15+24h]
 * 0000000140A03083: bt      eax, 19h
 * 0000000140A03087: jb      loc_140A0318A
 * 0000000140A0308D: mov     ecx, [r15]
 * 0000000140A03090: cmp     ecx, 54494E49h
 * 0000000140A03096: jnz     short loc_140A030A6
 * 0000000140A03098: cmp     dword ptr [r15+4], 4742444Bh
 * 0000000140A030A0: jz      loc_140A0318A
 * 0000000140A030A6: cmp     ecx, 45474150h
 * 0000000140A030AC: jnz     short loc_140A030E3
 * 0000000140A030AE: movzx   eax, word ptr [r15+4]
 * 0000000140A030B3: mov     r8d, 7877h
 * 0000000140A030B9: cmp     ax, r8w
 * 0000000140A030BD: jz      loc_140A0318A
 * 0000000140A030C3: mov     r8d, 7277h
 * 0000000140A030C9: cmp     ax, r8w
 * 0000000140A030CD: jz      loc_140A0318A
 * 0000000140A030D3: mov     r8d, 7777h
 * 0000000140A030D9: cmp     ax, r8w
 * 0000000140A030DD: jz      loc_140A0318A
 * 0000000140A030E3: cmp     ecx, 41525245h
 * 0000000140A030E9: jnz     short loc_140A030FB
 * 0000000140A030EB: mov     eax, 4154h
 * 0000000140A030F0: cmp     [r15+4], ax
 * 0000000140A030F5: jz      loc_140A0318A
 * 0000000140A030FB: mov     rcx, [rbp+0BE0h+var_C48]
 * 0000000140A030FF: test    rcx, rcx
 * 0000000140A03102: jz      short loc_140A0313E
 * 0000000140A03104: mov     rax, [rcx+938h]
 * 0000000140A0310B: mov     r8, [rcx+930h]
 * 0000000140A03112: mov     qword ptr [rbp+0BE0h+var_940+8], rax
 * 0000000140A03119: mov     rax, [rcx+940h]
 * 0000000140A03120: mov     qword ptr [rbp+0BE0h+var_930], rax
 * 0000000140A03127: mov     rax, [rcx+948h]
 * 0000000140A0312E: mov     qword ptr [rbp+0BE0h+var_930+8], rax
 * 0000000140A03135: mov     qword ptr [rbp+0BE0h+var_940], r8
 * 0000000140A0313C: jmp     short loc_140A03161
 * 0000000140A0313E: movups  xmm0, xmmword ptr cs:VfExcludeSections
 * 0000000140A03145: movups  xmm1, xmmword ptr cs:off_140C0F060; "INIT"
 * 0000000140A0314C: movups  [rbp+0BE0h+var_940], xmm0
 * 0000000140A03153: mov     r8, qword ptr [rbp+0BE0h+var_940]
 * 0000000140A0315A: movups  [rbp+0BE0h+var_930], xmm1
 * 0000000140A03161: mov     r10d, 7
 * 0000000140A03167: mov     r9, r15
 * 0000000140A0316A: mov     r14d, 0FFFFFFFFh
 * 0000000140A03170: movzx   edx, byte ptr [r9]
 * 0000000140A03174: inc     r9
 * 0000000140A03177: movzx   eax, byte ptr [r8]
 * 0000000140A0317B: inc     r8
 * 0000000140A0317E: cmp     rdx, rax
 * 0000000140A03181: jnz     short loc_140A031CB
 * 0000000140A03183: add     r10d, r14d
 * 0000000140A03186: jnz     short loc_140A03170
 * 0000000140A03188: xor     edx, edx
 * 0000000140A0318A: mov     r12d, r13d
 * 0000000140A0318D: mov     r8, [rbp+0BE0h+var_C48]
 * 0000000140A03191: add     r15, 28h ; '('
 * 0000000140A03195: cmp     r15, rdi
 * 0000000140A03198: jnz     loc_140A03054
 * 0000000140A0319E: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A031A3: cmp     r15, rdi
 * 0000000140A031A6: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A031AD: jnz     loc_140A03537
 * 0000000140A031B3: cmp     r12d, r13d
 * 0000000140A031B6: jb      loc_140A03537
 * 0000000140A031BC: xor     r15d, r15d
 * 0000000140A031BF: mov     [r8+824h], r15d
 * 0000000140A031C6: jmp     loc_1409FA31B
 * 0000000140A031CB: mov     r9, qword ptr [rbp+0BE0h+var_940+8]
 * 0000000140A031D2: mov     r8d, 8
 * 0000000140A031D8: mov     r10, r15
 * 0000000140A031DB: mov     rcx, [r10]
 * 0000000140A031DE: add     r10, 8
 * 0000000140A031E2: mov     rax, [r9]
 * 0000000140A031E5: add     r9, 8
 * 0000000140A031E9: cmp     rcx, rax
 * 0000000140A031EC: jnz     short loc_140A0321C
 * 0000000140A031EE: add     r8d, 0FFFFFFF8h
 * 0000000140A031F2: cmp     r8d, 8
 * 0000000140A031F6: jnb     short loc_140A031DB
 * 0000000140A031F8: xor     edx, edx
 * 0000000140A031FA: test    r8d, r8d
 * 0000000140A031FD: jz      short loc_140A0318A
 * 0000000140A031FF: movzx   edx, byte ptr [r10]
 * 0000000140A03203: inc     r10
 * 0000000140A03206: movzx   eax, byte ptr [r9]
 * 0000000140A0320A: inc     r9
 * 0000000140A0320D: cmp     rdx, rax
 * 0000000140A03210: jnz     short loc_140A0321C
 * 0000000140A03212: add     r8d, r14d
 * 0000000140A03215: jnz     short loc_140A031FF
 * 0000000140A03217: jmp     loc_140A03188
 * 0000000140A0321C: mov     r8, qword ptr [rbp+0BE0h+var_930]
 * 0000000140A03223: mov     r10d, 4
 * 0000000140A03229: mov     r9, r15
 * 0000000140A0322C: movzx   edx, byte ptr [r9]
 * 0000000140A03230: inc     r9
 * 0000000140A03233: movzx   eax, byte ptr [r8]
 * 0000000140A03237: inc     r8
 * 0000000140A0323A: cmp     rdx, rax
 * 0000000140A0323D: jnz     short loc_140A03249
 * 0000000140A0323F: add     r10d, r14d
 * 0000000140A03242: jnz     short loc_140A0322C
 * 0000000140A03244: jmp     loc_140A03188
 * 0000000140A03249: mov     r8, qword ptr [rbp+0BE0h+var_930+8]
 * 0000000140A03250: mov     r10d, 6
 * 0000000140A03256: mov     r9, r15
 * 0000000140A03259: movzx   edx, byte ptr [r9]
 * 0000000140A0325D: inc     r9
 * 0000000140A03260: movzx   eax, byte ptr [r8]
 * 0000000140A03264: inc     r8
 * 0000000140A03267: cmp     rdx, rax
 * 0000000140A0326A: jnz     short loc_140A03276
 * 0000000140A0326C: add     r10d, r14d
 * 0000000140A0326F: jnz     short loc_140A03259
 * 0000000140A03271: jmp     loc_140A03188
 * 0000000140A03276: mov     eax, [r15+24h]
 * 0000000140A0327A: xor     edx, edx
 * 0000000140A0327C: test    eax, eax
 * 0000000140A0327E: js      loc_140A0318A
 * 0000000140A03284: bt      eax, 1Dh
 * 0000000140A03288: jnb     loc_140A0318A
 * 0000000140A0328E: lea     r9d, [rdx+1]
 * 0000000140A03292: mov     r14d, r9d
 * 0000000140A03295: test    esi, esi
 * 0000000140A03297: jz      short loc_140A032AC
 * 0000000140A03299: mov     eax, [r15]
 * 0000000140A0329C: cmp     eax, 2E656461h
 * 0000000140A032A1: jz      short loc_140A032AC
 * 0000000140A032A3: cmp     eax, 45474150h
 * 0000000140A032A8: cmovnz  r14d, edx
 * 0000000140A032AC: mov     r8, [rbp+0BE0h+var_C48]
 * 0000000140A032B0: cmp     r12d, r11d
 * 0000000140A032B3: cmovnb  r11d, r12d
 * 0000000140A032B7: mov     r12d, r11d
 * 0000000140A032BA: mov     eax, r12d
 * 0000000140A032BD: add     rbx, rax
 * 0000000140A032C0: test    byte ptr [r8+87Bh], 4
 * 0000000140A032C8: jz      short loc_140A0332F
 * 0000000140A032CA: mov     ecx, 0FFFFFFFFh
 * 0000000140A032CF: mov     eax, ecx
 * 0000000140A032D1: xbegin  $+6
 * 0000000140A032D7: cmp     eax, ecx
 * 0000000140A032D9: jnz     short loc_140A032E2
 * 0000000140A032DB: mov     al, [rbx]
 * 0000000140A032DD: xend
 * 0000000140A032E0: jmp     short loc_140A03316
 * 0000000140A032E2: rdtsc
 * 0000000140A032E4: shl     rdx, 20h
 * 0000000140A032E8: or      rax, rdx
 * 0000000140A032EB: mov     rcx, rax
 * 0000000140A032EE: ror     rax, 3
 * 0000000140A032F2: xor     rcx, rax
 * 0000000140A032F5: mov     rax, 7010008004002001h
 * 0000000140A032FF: mul     rcx
 * 0000000140A03302: mov     [rbp+0BE0h+var_5E8], rdx
 * 0000000140A03309: xor     dl, al
 * 0000000140A0330B: mov     eax, 0Fh
 * 0000000140A03310: test    al, dl
 * 0000000140A03312: jz      short loc_140A0332D
 * 0000000140A03314: xor     edx, edx
 * 0000000140A03316: add     [r8+83Ch], r9d
 * 0000000140A0331D: add     dword ptr [r8+828h], 100h
 * 0000000140A03328: jmp     loc_140A033D7
 * 0000000140A0332D: xor     edx, edx
 * 0000000140A0332F: test    r14d, r14d
 * 0000000140A03332: jz      loc_140A03413
 * 0000000140A03338: mov     rax, [r8+450h]
 * 0000000140A0333F: lea     rcx, [rbp+0BE0h+var_708]
 * 0000000140A03346: mov     rdx, rbx
 * 0000000140A03349: call    KeGuardDispatchICall
 * 0000000140A0334E: xor     edx, edx
 * 0000000140A03350: test    eax, eax
 * 0000000140A03352: jns     loc_140A0348C
 * 0000000140A03358: cmp     eax, 0C0000005h
 * 0000000140A0335D: jnz     short loc_140A033CD
 * 0000000140A0335F: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A03364: mov     eax, [rcx+20h]
 * 0000000140A03367: test    al, 4
 * 0000000140A03369: jz      short loc_140A03371
 * 0000000140A0336B: cmp     [r15+24h], edx
 * 0000000140A0336F: jge     short loc_140A033CD
 * 0000000140A03371: mov     r8, [rbp+0BE0h+var_C48]
 * 0000000140A03375: cmp     [r8+8F8h], edx
 * 0000000140A0337C: jnz     short loc_140A033D1
 * 0000000140A0337E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A03388: add     rax, r8
 * 0000000140A0338B: mov     [r8+900h], rax
 * 0000000140A03392: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0339C: add     rax, rcx
 * 0000000140A0339F: mov     [r8+908h], rax
 * 0000000140A033A6: movsxd  rax, dword ptr [rcx]
 * 0000000140A033A9: mov     rcx, r8
 * 0000000140A033AC: mov     [r8+910h], rax
 * 0000000140A033B3: mov     eax, 1
 * 0000000140A033B8: mov     [r8+918h], rbx
 * 0000000140A033BF: mov     [r8+8F8h], eax
 * 0000000140A033C6: call    $$b8
 * 0000000140A033CB: xor     edx, edx
 * 0000000140A033CD: mov     r8, [rbp+0BE0h+var_C48]
 * 0000000140A033D1: mov     r9d, 1
 * 0000000140A033D7: mov     eax, [r8+828h]
 * 0000000140A033DE: add     r12d, 1000h
 * 0000000140A033E5: cmp     r12d, r13d
 * 0000000140A033E8: jnb     short loc_140A033FC
 * 0000000140A033EA: mov     rbx, [rsp+0CE0h+var_C88]
 * 0000000140A033EF: cmp     eax, [r8+82Ch]
 * 0000000140A033F6: jl      loc_140A032BA
 * 0000000140A033FC: cmp     eax, [r8+82Ch]
 * 0000000140A03403: jge     loc_140A0319E
 * 0000000140A03409: mov     rbx, [rsp+0CE0h+var_C88]
 * 0000000140A0340E: jmp     loc_140A03191
 * 0000000140A03413: mov     r9d, 0FFFh
 * 0000000140A03419: mov     [rbp+0BE0h+var_708], rdx
 * 0000000140A03420: mov     [rbp+0BE0h+var_6FE], dx
 * 0000000140A03427: mov     rax, rbx
 * 0000000140A0342A: and     rax, r9
 * 0000000140A0342D: mov     [rbp+0BE0h+var_6E0], 1000h
 * 0000000140A03437: add     rax, 1FFFh
 * 0000000140A0343D: mov     rcx, rbx
 * 0000000140A03440: shr     rax, 0Ch
 * 0000000140A03444: add     ax, 6
 * 0000000140A03448: shl     ax, 3
 * 0000000140A0344C: mov     [rbp+0BE0h+var_700], ax
 * 0000000140A03453: mov     rax, rbx
 * 0000000140A03456: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140A0345C: mov     [rbp+0BE0h+var_6E8], rax
 * 0000000140A03463: mov     eax, ebx
 * 0000000140A03465: and     eax, r9d
 * 0000000140A03468: mov     [rbp+0BE0h+var_6DC], eax
 * 0000000140A0346E: mov     rax, [r8+458h]
 * 0000000140A03475: call    KeGuardDispatchICall
 * 0000000140A0347A: mov     [rbp+0BE0h+var_5E0], rax
 * 0000000140A03481: shr     rax, 0Ch
 * 0000000140A03485: mov     [rbp+0BE0h+var_6D8], rax
 * 0000000140A0348C: mov     rcx, [rbp+0BE0h+var_C48]
 * 0000000140A03490: mov     eax, 1
 * 0000000140A03495: add     [rcx+840h], eax
 * 0000000140A0349B: mov     eax, [rbp+0BE0h+var_6DC]
 * 0000000140A034A1: add     rax, [rbp+0BE0h+var_6E8]
 * 0000000140A034A8: mov     [rcx+0A68h], rax
 * 0000000140A034AF: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A034B4: mov     [rcx+0A60h], rax
 * 0000000140A034BB: mov     rbx, cr8
 * 0000000140A034BF: mov     eax, 2
 * 0000000140A034C4: mov     cr8, rax
 * 0000000140A034C8: mov     rax, [rcx+5F8h]
 * 0000000140A034CF: xor     r8d, r8d
 * 0000000140A034D2: add     rcx, 0A40h
 * 0000000140A034D9: mov     edx, [rax]
 * 0000000140A034DB: call    RtlInitMinimalBarrier
 * 0000000140A034E0: mov     rdx, [rbp+0BE0h+var_C48]
 * 0000000140A034E4: mov     ecx, [rdx+7F4h]
 * 0000000140A034EA: mov     rax, [rdx+448h]
 * 0000000140A034F1: add     rcx, rdx
 * 0000000140A034F4: call    KeGuardDispatchICall
 * 0000000140A034F9: mov     r8, rax
 * 0000000140A034FC: mov     [rbp+0BE0h+var_C48], rax
 * 0000000140A03500: movzx   eax, bl
 * 0000000140A03503: mov     cr8, rax
 * 0000000140A03507: xor     edx, edx
 * 0000000140A03509: test    r14d, r14d
 * 0000000140A0350C: jz      short loc_140A03527
 * 0000000140A0350E: mov     rax, [r8+460h]
 * 0000000140A03515: lea     rcx, [rbp+0BE0h+var_708]
 * 0000000140A0351C: call    KeGuardDispatchICall
 * 0000000140A03521: mov     r8, [rbp+0BE0h+var_C48]
 * 0000000140A03525: xor     edx, edx
 * 0000000140A03527: add     dword ptr [r8+828h], 14000h
 * 0000000140A03532: jmp     loc_140A033D1
 * 0000000140A03537: mov     [r8+824h], r12d
 * 0000000140A0353E: jmp     loc_1409FA318
 * 0000000140A03543: mov     r8d, 0Ch
 * 0000000140A03549: xor     eax, eax
 * 0000000140A0354B: cmp     r10d, r8d
 * 0000000140A0354E: jnz     loc_140A03878
 * 0000000140A03554: cmp     [rsi+980h], rax
 * 0000000140A0355B: jz      loc_1409FA312
 * 0000000140A03561: mov     edx, [rsi+994h]
 * 0000000140A03567: mov     ecx, edx
 * 0000000140A03569: cmp     [rsi+824h], eax
 * 0000000140A0356F: jnz     short loc_140A03583
 * 0000000140A03571: shl     ecx, 3
 * 0000000140A03574: xor     ecx, edx
 * 0000000140A03576: and     ecx, 20h
 * 0000000140A03579: xor     ecx, edx
 * 0000000140A0357B: mov     [rsi+994h], ecx
 * 0000000140A03581: jmp     short loc_140A03594
 * 0000000140A03583: mov     eax, edx
 * 0000000140A03585: shr     eax, 3
 * 0000000140A03588: xor     eax, edx
 * 0000000140A0358A: test    al, 4
 * 0000000140A0358C: jnz     loc_1409FA3EA
 * 0000000140A03592: xor     eax, eax
 * 0000000140A03594: test    cl, 4
 * 0000000140A03597: jz      loc_140A03873
 * 0000000140A0359D: mov     r15, [r13+20h]
 * 0000000140A035A1: mov     eax, [r13+28h]
 * 0000000140A035A5: test    r15, r15
 * 0000000140A035A8: jz      short loc_140A035D2
 * 0000000140A035AA: mov     ebx, [rsi+824h]
 * 0000000140A035B0: sub     eax, ebx
 * 0000000140A035B2: mov     r14d, eax
 * 0000000140A035B5: add     r14, 0FFFh
 * 0000000140A035BC: lea     ecx, [r15+rbx]
 * 0000000140A035C0: and     ecx, 0FFFh
 * 0000000140A035C6: add     r14, rcx
 * 0000000140A035C9: shr     r14, 0Ch
 * 0000000140A035CD: add     rbx, r15
 * 0000000140A035D0: jmp     short loc_140A035F3
 * 0000000140A035D2: mov     r14d, [r13+8]
 * 0000000140A035D6: mov     ecx, [r13+10h]
 * 0000000140A035DA: and     r14d, 0FFFh
 * 0000000140A035E1: mov     rbx, [r13+8]
 * 0000000140A035E5: add     r14, 0FFFh
 * 0000000140A035EC: add     r14, rcx
 * 0000000140A035EF: shr     r14, 0Ch
 * 0000000140A035F3: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A035FA: test    r14, r14
 * 0000000140A035FD: jz      loc_140A036AE
 * 0000000140A03603: xor     edi, edi
 * 0000000140A03605: mov     rax, [rsi+2B0h]
 * 0000000140A0360C: mov     rcx, rbx
 * 0000000140A0360F: dec     r14
 * 0000000140A03612: call    KeGuardDispatchICall
 * 0000000140A03617: test    al, al
 * 0000000140A03619: jz      short loc_140A03672
 * 0000000140A0361B: cmp     [rsi+8F8h], edi
 * 0000000140A03621: jnz     short loc_140A03672
 * 0000000140A03623: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0362D: xor     edx, edx
 * 0000000140A0362F: add     rax, rsi
 * 0000000140A03632: mov     rcx, rsi
 * 0000000140A03635: mov     [rsi+900h], rax
 * 0000000140A0363C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A03646: add     rax, r13
 * 0000000140A03649: mov     [rsi+908h], rax
 * 0000000140A03650: movsxd  rax, dword ptr [r13+0]
 * 0000000140A03654: mov     [rsi+910h], rax
 * 0000000140A0365B: mov     eax, 1
 * 0000000140A03660: mov     [rsi+918h], rbx
 * 0000000140A03667: mov     [rsi+8F8h], eax
 * 0000000140A0366D: call    $$b8
 * 0000000140A03672: add     dword ptr [rsi+828h], 100h
 * 0000000140A0367C: add     rbx, 1000h
 * 0000000140A03683: test    r15, r15
 * 0000000140A03686: jz      short loc_140A0369E
 * 0000000140A03688: add     dword ptr [rsi+824h], 1000h
 * 0000000140A03692: mov     eax, [r12]
 * 0000000140A03696: cmp     [rsi+828h], eax
 * 0000000140A0369C: jge     short loc_140A036A7
 * 0000000140A0369E: test    r14, r14
 * 0000000140A036A1: jnz     loc_140A03605
 * 0000000140A036A7: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A036AE: test    r15, r15
 * 0000000140A036B1: jz      short loc_140A036C2
 * 0000000140A036B3: xor     r15d, r15d
 * 0000000140A036B6: test    r14, r14
 * 0000000140A036B9: jnz     short loc_140A036C2
 * 0000000140A036BB: mov     [rsi+824h], r15d
 * 0000000140A036C2: cmp     [rsi+824h], r15d
 * 0000000140A036C9: jnz     loc_1409FA31B
 * 0000000140A036CF: mov     rcx, [rsi+540h]
 * 0000000140A036D6: mov     r15, cr8
 * 0000000140A036DA: mov     eax, 0Fh
 * 0000000140A036DF: mov     cr8, rax
 * 0000000140A036E3: mov     rax, [rsi+150h]
 * 0000000140A036EA: call    KeGuardDispatchICall
 * 0000000140A036EF: mov     rax, [rsi+610h]
 * 0000000140A036F6: mov     r14, [rsp+0CE0h+var_C90]
 * 0000000140A036FB: mov     rcx, [rax]
 * 0000000140A036FE: mov     eax, [rcx]
 * 0000000140A03700: lea     rbx, [rcx+10h]
 * 0000000140A03704: mov     r12b, [rcx+0Ch]
 * 0000000140A03708: lea     rcx, [rax+rax*2]
 * 0000000140A0370C: lea     r13, [rbx+rcx*8]
 * 0000000140A03710: mov     r8d, 18h
 * 0000000140A03716: lea     r9, [r14+18h]
 * 0000000140A0371A: mov     r10, rbx
 * 0000000140A0371D: mov     rcx, [r10]
 * 0000000140A03720: add     r10, 8
 * 0000000140A03724: mov     rax, [r9]
 * 0000000140A03727: add     r9, 8
 * 0000000140A0372B: cmp     rcx, rax
 * 0000000140A0372E: jnz     short loc_140A03764
 * 0000000140A03730: add     r8d, 0FFFFFFF8h
 * 0000000140A03734: cmp     r8d, 8
 * 0000000140A03738: jnb     short loc_140A0371D
 * 0000000140A0373A: test    r8d, r8d
 * 0000000140A0373D: jz      short loc_140A0376D
 * 0000000140A0373F: mov     r11d, 1
 * 0000000140A03745: movzx   edx, byte ptr [r10]
 * 0000000140A03749: add     r10, r11
 * 0000000140A0374C: movzx   eax, byte ptr [r9]
 * 0000000140A03750: add     r9, r11
 * 0000000140A03753: cmp     rdx, rax
 * 0000000140A03756: jnz     short loc_140A03764
 * 0000000140A03758: mov     eax, 0FFFFFFFFh
 * 0000000140A0375D: add     r8d, eax
 * 0000000140A03760: jz      short loc_140A0376D
 * 0000000140A03762: jmp     short loc_140A03745
 * 0000000140A03764: add     rbx, 18h
 * 0000000140A03768: cmp     rbx, r13
 * 0000000140A0376B: jb      short loc_140A03710
 * 0000000140A0376D: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A03772: mov     rcx, [rsi+540h]
 * 0000000140A03779: mov     rax, [rsi+190h]
 * 0000000140A03780: call    KeGuardDispatchICall
 * 0000000140A03785: movzx   eax, r15b
 * 0000000140A03789: mov     cr8, rax
 * 0000000140A0378D: xor     r15d, r15d
 * 0000000140A03790: test    r12b, r12b
 * 0000000140A03793: jz      short loc_140A0380F
 * 0000000140A03795: mov     eax, [rsi+994h]
 * 0000000140A0379B: lea     ecx, [r15+10h]
 * 0000000140A0379F: test    cl, al
 * 0000000140A037A1: jz      short loc_140A037FE
 * 0000000140A037A3: cmp     [rsi+8F8h], r15d
 * 0000000140A037AA: jnz     short loc_140A037FE
 * 0000000140A037AC: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A037B1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A037BB: add     rax, rsi
 * 0000000140A037BE: xor     edx, edx
 * 0000000140A037C0: mov     [rsi+900h], rax
 * 0000000140A037C7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A037D1: add     rax, rcx
 * 0000000140A037D4: mov     [rsi+908h], rax
 * 0000000140A037DB: movsxd  rax, dword ptr [rcx]
 * 0000000140A037DE: mov     rcx, rsi
 * 0000000140A037E1: mov     [rsi+910h], rax
 * 0000000140A037E8: lea     eax, [r15+1]
 * 0000000140A037EC: mov     [rsi+918h], rax
 * 0000000140A037F3: mov     [rsi+8F8h], eax
 * 0000000140A037F9: call    $$b8
 * 0000000140A037FE: mov     edx, 1
 * 0000000140A03803: cmp     [r14+18h], rdx
 * 0000000140A03807: jz      loc_1409FA31B
 * 0000000140A0380D: jmp     short loc_140A03814
 * 0000000140A0380F: mov     edx, 1
 * 0000000140A03814: cmp     rbx, r13
 * 0000000140A03817: jnz     loc_1409FA31B
 * 0000000140A0381D: cmp     [rsi+8F8h], r15d
 * 0000000140A03824: jnz     loc_1409FA31B
 * 0000000140A0382A: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A0382F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A03839: add     rax, rsi
 * 0000000140A0383C: mov     [rsi+900h], rax
 * 0000000140A03843: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0384D: add     rax, rcx
 * 0000000140A03850: mov     [rsi+908h], rax
 * 0000000140A03857: movsxd  rax, dword ptr [rcx]
 * 0000000140A0385A: mov     [rsi+910h], rax
 * 0000000140A03861: mov     [rsi+918h], rbx
 * 0000000140A03868: mov     [rsi+8F8h], edx
 * 0000000140A0386E: jmp     loc_1409FA6F2
 * 0000000140A03873: mov     edx, 1
 * 0000000140A03878: cmp     [rsi+824h], eax
 * 0000000140A0387E: jnz     short loc_140A0389C
 * 0000000140A03880: cmp     r10d, r8d
 * 0000000140A03883: jnz     loc_140A03DB2
 * 0000000140A03889: cmp     [rsi+980h], rax
 * 0000000140A03890: jnz     loc_140A03A35
 * 0000000140A03896: mov     [rsi+824h], eax
 * 0000000140A0389C: xor     r15d, r15d
 * 0000000140A0389F: mov     r9, [r13+8]
 * 0000000140A038A3: mov     r8d, [rsi+824h]
 * 0000000140A038AA: mov     ecx, [r13+10h]
 * 0000000140A038AE: mov     [rbp+0BE0h+var_C10], r9
 * 0000000140A038B2: lea     rax, [r8+r8*2]
 * 0000000140A038B6: lea     r14, [r9+rax*4]
 * 0000000140A038BA: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A038C4: mul     rcx
 * 0000000140A038C7: mov     [rsp+0CE0h+var_C88], r14
 * 0000000140A038CC: shr     rdx, 3
 * 0000000140A038D0: lea     rax, [rdx+rdx*2]
 * 0000000140A038D4: lea     r12, [r9+rax*4]
 * 0000000140A038D8: mov     [rbp+0BE0h+var_C20], r12
 * 0000000140A038DC: lea     r12, ds:30h[r8*4]
 * 0000000140A038E4: add     r12, r13
 * 0000000140A038E7: mov     [rbp+0BE0h+var_C50], r12
 * 0000000140A038EB: cmp     r14, [rbp+0BE0h+var_C20]
 * 0000000140A038EF: jz      loc_140A04471
 * 0000000140A038F5: mov     rdi, [rbp+0BE0h+var_C20]
 * 0000000140A038F9: cmp     [r12], r15d
 * 0000000140A038FD: jl      loc_140A04369
 * 0000000140A03903: mov     eax, [r14]
 * 0000000140A03906: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A0390B: mov     r13d, eax
 * 0000000140A0390E: mov     r15d, [r14+4]
 * 0000000140A03912: sub     r15d, eax
 * 0000000140A03915: add     r13, [rcx+20h]
 * 0000000140A03919: mov     [rsp+0CE0h+var_C70], r13
 * 0000000140A0391E: cmp     r10d, 2Bh ; '+'
 * 0000000140A03922: jz      loc_140A04009
 * 0000000140A03928: add     [rsi+828h], r15d
 * 0000000140A0392F: mov     r9, r13
 * 0000000140A03932: mov     r10d, [rsi+814h]
 * 0000000140A03939: mov     rax, r13
 * 0000000140A0393C: mov     r11, [rsi+818h]
 * 0000000140A03943: mov     ecx, r15d
 * 0000000140A03946: add     rcx, r13
 * 0000000140A03949: cmp     r13, rcx
 * 0000000140A0394C: jnb     short loc_140A0395E
 * 0000000140A0394E: mov     edx, 40h ; '@'
 * 0000000140A03953: prefetchnta byte ptr [rax]
 * 0000000140A03956: add     rax, rdx
 * 0000000140A03959: cmp     rax, rcx
 * 0000000140A0395C: jb      short loc_140A03953
 * 0000000140A0395E: mov     r8d, r15d
 * 0000000140A03961: mov     rbx, r11
 * 0000000140A03964: shr     r8d, 7
 * 0000000140A03968: test    r8d, r8d
 * 0000000140A0396B: jz      short loc_140A039E1
 * 0000000140A0396D: mov     r12, 7010008004002001h
 * 0000000140A03977: mov     edx, 8
 * 0000000140A0397C: lea     edi, [rdx-7]
 * 0000000140A0397F: mov     rax, [r9]
 * 0000000140A03982: mov     ecx, r10d
 * 0000000140A03985: xor     rax, rbx
 * 0000000140A03988: mov     rbx, [r9+8]
 * 0000000140A0398C: rol     rax, cl
 * 0000000140A0398F: add     r9, 10h
 * 0000000140A03993: xor     rbx, rax
 * 0000000140A03996: rol     rbx, cl
 * 0000000140A03999: sub     rdx, rdi
 * 0000000140A0399C: jnz     short loc_140A0397F
 * 0000000140A0399E: mov     rcx, r9
 * 0000000140A039A1: sub     rcx, r13
 * 0000000140A039A4: xor     rcx, r11
 * 0000000140A039A7: mov     rax, rcx
 * 0000000140A039AA: rol     rax, 11h
 * 0000000140A039AE: xor     rcx, rax
 * 0000000140A039B1: mov     rax, r12
 * 0000000140A039B4: mul     rcx
 * 0000000140A039B7: xor     r10d, eax
 * 0000000140A039BA: mov     [rbp+0BE0h+var_5C8], rdx
 * 0000000140A039C1: xor     r10d, edx
 * 0000000140A039C4: mov     rax, rdi
 * 0000000140A039C7: and     r10d, 3Fh
 * 0000000140A039CB: cmovz   r10d, eax
 * 0000000140A039CF: mov     eax, 0FFFFFFFFh
 * 0000000140A039D4: add     r8d, eax
 * 0000000140A039D7: jnz     short loc_140A03977
 * 0000000140A039D9: mov     r12, [rbp+0BE0h+var_C50]
 * 0000000140A039DD: mov     rdi, [rbp+0BE0h+var_C20]
 * 0000000140A039E1: mov     edx, r15d
 * 0000000140A039E4: mov     r11d, 1
 * 0000000140A039EA: and     edx, 7Fh
 * 0000000140A039ED: cmp     edx, 8
 * 0000000140A039F0: jb      short loc_140A03A0E
 * 0000000140A039F2: mov     r8d, edx
 * 0000000140A039F5: shr     r8, 3
 * 0000000140A039F9: xor     rbx, [r9]
 * 0000000140A039FC: mov     ecx, r10d
 * 0000000140A039FF: rol     rbx, cl
 * 0000000140A03A02: add     r9, 8
 * 0000000140A03A06: add     edx, 0FFFFFFF8h
 * 0000000140A03A09: sub     r8, r11
 * 0000000140A03A0C: jnz     short loc_140A039F9
 * 0000000140A03A0E: test    edx, edx
 * 0000000140A03A10: jz      short loc_140A03A2D
 * 0000000140A03A12: mov     r8d, 0FFFFFFFFh
 * 0000000140A03A18: movzx   eax, byte ptr [r9]
 * 0000000140A03A1C: mov     ecx, r10d
 * 0000000140A03A1F: xor     rbx, rax
 * 0000000140A03A22: add     r9, r11
 * 0000000140A03A25: rol     rbx, cl
 * 0000000140A03A28: add     edx, r8d
 * 0000000140A03A2B: jnz     short loc_140A03A18
 * 0000000140A03A2D: mov     rax, rbx
 * 0000000140A03A30: jmp     loc_140A03FF3
 * 0000000140A03A35: mov     eax, [rsi+994h]
 * 0000000140A03A3B: mov     ecx, eax
 * 0000000140A03A3D: shl     ecx, 3
 * 0000000140A03A40: xor     ecx, eax
 * 0000000140A03A42: and     ecx, 20h
 * 0000000140A03A45: xor     ecx, eax
 * 0000000140A03A47: mov     [rsi+994h], ecx
 * 0000000140A03A4D: test    cl, 4
 * 0000000140A03A50: jz      loc_140A03B25
 * 0000000140A03A56: mov     r14d, [r13+8]
 * 0000000140A03A5A: xor     r15d, r15d
 * 0000000140A03A5D: mov     ecx, [r13+10h]
 * 0000000140A03A61: and     r14d, 0FFFh
 * 0000000140A03A68: mov     rbx, [r13+8]
 * 0000000140A03A6C: add     r14, 0FFFh
 * 0000000140A03A73: add     r14, rcx
 * 0000000140A03A76: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A03A7D: shr     r14, 0Ch
 * 0000000140A03A81: test    r14, r14
 * 0000000140A03A84: jz      loc_140A0389F
 * 0000000140A03A8A: jmp     short loc_140A03A91
 * 0000000140A03A8C: mov     edx, 1
 * 0000000140A03A91: mov     rax, [rsi+2B0h]
 * 0000000140A03A98: mov     rcx, rbx
 * 0000000140A03A9B: sub     r14, rdx
 * 0000000140A03A9E: call    KeGuardDispatchICall
 * 0000000140A03AA3: test    al, al
 * 0000000140A03AA5: jz      short loc_140A03AFF
 * 0000000140A03AA7: cmp     [rsi+8F8h], r15d
 * 0000000140A03AAE: jnz     short loc_140A03AFF
 * 0000000140A03AB0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A03ABA: mov     edi, 1
 * 0000000140A03ABF: add     rax, rsi
 * 0000000140A03AC2: xor     edx, edx
 * 0000000140A03AC4: mov     [rsi+900h], rax
 * 0000000140A03ACB: mov     rcx, rsi
 * 0000000140A03ACE: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A03AD8: add     rax, r13
 * 0000000140A03ADB: mov     [rsi+908h], rax
 * 0000000140A03AE2: movsxd  rax, dword ptr [r13+0]
 * 0000000140A03AE6: mov     [rsi+910h], rax
 * 0000000140A03AED: mov     [rsi+918h], rbx
 * 0000000140A03AF4: mov     [rsi+8F8h], edi
 * 0000000140A03AFA: call    $$b8
 * 0000000140A03AFF: add     dword ptr [rsi+828h], 100h
 * 0000000140A03B09: add     rbx, 1000h
 * 0000000140A03B10: test    r14, r14
 * 0000000140A03B13: jnz     loc_140A03A8C
 * 0000000140A03B19: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A03B20: jmp     loc_140A03DA6
 * 0000000140A03B25: mov     r14, [r13+8]
 * 0000000140A03B29: mov     r8d, [r13+10h]
 * 0000000140A03B2D: mov     r9, r14
 * 0000000140A03B30: add     [rsi+828h], r8d
 * 0000000140A03B37: mov     rax, r14
 * 0000000140A03B3A: mov     r11d, [rsi+814h]
 * 0000000140A03B41: mov     r15, [rsi+818h]
 * 0000000140A03B48: lea     rcx, [r14+r8]
 * 0000000140A03B4C: cmp     r14, rcx
 * 0000000140A03B4F: jnb     short loc_140A03B62
 * 0000000140A03B51: mov     r10d, 40h ; '@'
 * 0000000140A03B57: prefetchnta byte ptr [rax]
 * 0000000140A03B5A: add     rax, r10
 * 0000000140A03B5D: cmp     rax, rcx
 * 0000000140A03B60: jb      short loc_140A03B57
 * 0000000140A03B62: mov     r10d, r8d
 * 0000000140A03B65: mov     rbx, r15
 * 0000000140A03B68: shr     r10d, 7
 * 0000000140A03B6C: mov     r12d, 0FFFFFFFFh
 * 0000000140A03B72: test    r10d, r10d
 * 0000000140A03B75: jz      short loc_140A03BEA
 * 0000000140A03B77: mov     rdi, 7010008004002001h
 * 0000000140A03B81: mov     edx, 8
 * 0000000140A03B86: lea     esi, [rdx-7]
 * 0000000140A03B89: mov     rax, [r9]
 * 0000000140A03B8C: mov     ecx, r11d
 * 0000000140A03B8F: xor     rax, rbx
 * 0000000140A03B92: mov     rbx, [r9+8]
 * 0000000140A03B96: rol     rax, cl
 * 0000000140A03B99: add     r9, 10h
 * 0000000140A03B9D: xor     rbx, rax
 * 0000000140A03BA0: rol     rbx, cl
 * 0000000140A03BA3: sub     rdx, rsi
 * 0000000140A03BA6: jnz     short loc_140A03B89
 * 0000000140A03BA8: mov     rcx, r9
 * 0000000140A03BAB: sub     rcx, r14
 * 0000000140A03BAE: xor     rcx, r15
 * 0000000140A03BB1: mov     rax, rcx
 * 0000000140A03BB4: rol     rax, 11h
 * 0000000140A03BB8: xor     rcx, rax
 * 0000000140A03BBB: mov     rax, rdi
 * 0000000140A03BBE: mul     rcx
 * 0000000140A03BC1: xor     r11d, eax
 * 0000000140A03BC4: mov     [rbp+0BE0h+var_5D8], rdx
 * 0000000140A03BCB: xor     r11d, edx
 * 0000000140A03BCE: mov     rdx, rsi
 * 0000000140A03BD1: and     r11d, 3Fh
 * 0000000140A03BD5: cmovz   r11d, edx
 * 0000000140A03BD9: add     r10d, r12d
 * 0000000140A03BDC: jnz     short loc_140A03B81
 * 0000000140A03BDE: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A03BE3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A03BEA: and     r8d, 7Fh
 * 0000000140A03BEE: cmp     r8d, 8
 * 0000000140A03BF2: jb      short loc_140A03C20
 * 0000000140A03BF4: mov     edx, r8d
 * 0000000140A03BF7: mov     esi, 1
 * 0000000140A03BFC: shr     rdx, 3
 * 0000000140A03C00: xor     rbx, [r9]
 * 0000000140A03C03: mov     ecx, r11d
 * 0000000140A03C06: rol     rbx, cl
 * 0000000140A03C09: add     r9, 8
 * 0000000140A03C0D: add     r8d, 0FFFFFFF8h
 * 0000000140A03C11: sub     rdx, rsi
 * 0000000140A03C14: jnz     short loc_140A03C00
 * 0000000140A03C16: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A03C1B: mov     edx, 1
 * 0000000140A03C20: xor     r15d, r15d
 * 0000000140A03C23: test    r8d, r8d
 * 0000000140A03C26: jz      short loc_140A03C3D
 * 0000000140A03C28: movzx   eax, byte ptr [r9]
 * 0000000140A03C2C: mov     ecx, r11d
 * 0000000140A03C2F: xor     rbx, rax
 * 0000000140A03C32: add     r9, rdx
 * 0000000140A03C35: rol     rbx, cl
 * 0000000140A03C38: add     r8d, r12d
 * 0000000140A03C3B: jnz     short loc_140A03C28
 * 0000000140A03C3D: mov     rax, rbx
 * 0000000140A03C40: jmp     short loc_140A03C44
 * 0000000140A03C42: xor     ebx, eax
 * 0000000140A03C44: shr     rax, 1Fh
 * 0000000140A03C48: test    rax, rax
 * 0000000140A03C4B: jnz     short loc_140A03C42
 * 0000000140A03C4D: mov     r8d, [r13+14h]
 * 0000000140A03C51: btr     ebx, 1Fh
 * 0000000140A03C55: cmp     ebx, r8d
 * 0000000140A03C58: jz      loc_140A03DA6
 * 0000000140A03C5E: mov     ecx, [r13+10h]
 * 0000000140A03C62: mov     rdx, [r13+8]
 * 0000000140A03C66: test    rcx, rcx
 * 0000000140A03C69: jz      loc_140A03D2C
 * 0000000140A03C6F: mov     eax, [rsi+994h]
 * 0000000140A03C75: mov     r9d, 40h ; '@'
 * 0000000140A03C7B: test    r9b, al
 * 0000000140A03C7E: jz      loc_140A03D2C
 * 0000000140A03C84: mov     r12, cr8
 * 0000000140A03C88: lea     eax, [r9-3Eh]
 * 0000000140A03C8C: mov     cr8, rax
 * 0000000140A03C90: mov     r14, rdx
 * 0000000140A03C93: lea     rax, [rcx-1]
 * 0000000140A03C97: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A03C9E: add     rax, rdx
 * 0000000140A03CA1: or      rax, 0FFFh
 * 0000000140A03CA7: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A03CAC: lea     r13, [r14-1]
 * 0000000140A03CB0: movzx   r15d, r12b
 * 0000000140A03CB4: mov     rax, [rsi+468h]
 * 0000000140A03CBB: xor     edx, edx
 * 0000000140A03CBD: mov     rcx, r14
 * 0000000140A03CC0: call    KeGuardDispatchICall
 * 0000000140A03CC5: cmp     eax, 0C000022Dh
 * 0000000140A03CCA: jnz     short loc_140A03CF0
 * 0000000140A03CCC: mov     eax, 1
 * 0000000140A03CD1: cmp     r12b, al
 * 0000000140A03CD4: ja      short loc_140A03CF4
 * 0000000140A03CD6: movzx   r15d, r12b
 * 0000000140A03CDA: mov     cr8, r15
 * 0000000140A03CDE: mov     al, [r14]
 * 0000000140A03CE1: mov     rax, cr8
 * 0000000140A03CE5: mov     eax, 2
 * 0000000140A03CEA: mov     cr8, rax
 * 0000000140A03CEE: jmp     short loc_140A03CB4
 * 0000000140A03CF0: test    eax, eax
 * 0000000140A03CF2: js      short loc_140A03D1C
 * 0000000140A03CF4: mov     r11d, 1000h
 * 0000000140A03CFA: add     r14, r11
 * 0000000140A03CFD: add     r13, r11
 * 0000000140A03D00: cmp     r13, [rsp+0CE0h+var_C70]
 * 0000000140A03D05: jnz     short loc_140A03CB0
 * 0000000140A03D07: mov     cr8, r15
 * 0000000140A03D0B: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A03D12: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A03D17: jmp     loc_140A0389C
 * 0000000140A03D1C: mov     cr8, r15
 * 0000000140A03D20: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A03D25: xor     r15d, r15d
 * 0000000140A03D28: mov     r8d, [r13+14h]
 * 0000000140A03D2C: mov     eax, [rsi+8F8h]
 * 0000000140A03D32: test    eax, eax
 * 0000000140A03D34: jnz     short loc_140A03D51
 * 0000000140A03D36: mov     ecx, ebx
 * 0000000140A03D38: mov     eax, r8d
 * 0000000140A03D3B: xor     rcx, rax
 * 0000000140A03D3E: mov     rax, [rsi+590h]
 * 0000000140A03D45: mov     [rax+18h], rcx
 * 0000000140A03D49: mov     eax, [rsi+8F8h]
 * 0000000140A03D4F: test    eax, eax
 * 0000000140A03D51: mov     rcx, [r13+8]
 * 0000000140A03D55: jnz     short loc_140A03DA6
 * 0000000140A03D57: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A03D61: xor     edx, edx
 * 0000000140A03D63: add     rax, rsi
 * 0000000140A03D66: mov     [rsi+900h], rax
 * 0000000140A03D6D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A03D77: add     rax, r13
 * 0000000140A03D7A: mov     [rsi+908h], rax
 * 0000000140A03D81: movsxd  rax, dword ptr [r13+0]
 * 0000000140A03D85: mov     [rsi+910h], rax
 * 0000000140A03D8C: mov     eax, 1
 * 0000000140A03D91: mov     [rsi+918h], rcx
 * 0000000140A03D98: mov     rcx, rsi
 * 0000000140A03D9B: mov     [rsi+8F8h], eax
 * 0000000140A03DA1: call    $$b8
 * 0000000140A03DA6: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A03DAD: jmp     loc_140A0389F
 * 0000000140A03DB2: mov     r14, [r13+8]
 * 0000000140A03DB6: mov     r8d, [r13+10h]
 * 0000000140A03DBA: mov     r9, r14
 * 0000000140A03DBD: add     [rsi+828h], r8d
 * 0000000140A03DC4: mov     rax, r14
 * 0000000140A03DC7: mov     r10d, [rsi+814h]
 * 0000000140A03DCE: mov     r15, [rsi+818h]
 * 0000000140A03DD5: lea     rcx, [r14+r8]
 * 0000000140A03DD9: cmp     r14, rcx
 * 0000000140A03DDC: jnb     short loc_140A03DEF
 * 0000000140A03DDE: mov     r11d, 40h ; '@'
 * 0000000140A03DE4: prefetchnta byte ptr [rax]
 * 0000000140A03DE7: add     rax, r11
 * 0000000140A03DEA: cmp     rax, rcx
 * 0000000140A03DED: jb      short loc_140A03DE4
 * 0000000140A03DEF: mov     r11d, r8d
 * 0000000140A03DF2: mov     rbx, r15
 * 0000000140A03DF5: shr     r11d, 7
 * 0000000140A03DF9: mov     r12d, 0FFFFFFFFh
 * 0000000140A03DFF: test    r11d, r11d
 * 0000000140A03E02: jz      short loc_140A03E77
 * 0000000140A03E04: mov     rdi, 7010008004002001h
 * 0000000140A03E0E: mov     edx, 8
 * 0000000140A03E13: lea     esi, [rdx-7]
 * 0000000140A03E16: mov     rax, [r9]
 * 0000000140A03E19: mov     ecx, r10d
 * 0000000140A03E1C: xor     rax, rbx
 * 0000000140A03E1F: mov     rbx, [r9+8]
 * 0000000140A03E23: rol     rax, cl
 * 0000000140A03E26: add     r9, 10h
 * 0000000140A03E2A: xor     rbx, rax
 * 0000000140A03E2D: rol     rbx, cl
 * 0000000140A03E30: sub     rdx, rsi
 * 0000000140A03E33: jnz     short loc_140A03E16
 * 0000000140A03E35: mov     rcx, r9
 * 0000000140A03E38: sub     rcx, r14
 * 0000000140A03E3B: xor     rcx, r15
 * 0000000140A03E3E: mov     rax, rcx
 * 0000000140A03E41: rol     rax, 11h
 * 0000000140A03E45: xor     rcx, rax
 * 0000000140A03E48: mov     rax, rdi
 * 0000000140A03E4B: mul     rcx
 * 0000000140A03E4E: xor     r10d, eax
 * 0000000140A03E51: mov     [rbp+0BE0h+var_5D0], rdx
 * 0000000140A03E58: xor     r10d, edx
 * 0000000140A03E5B: mov     rdx, rsi
 * 0000000140A03E5E: and     r10d, 3Fh
 * 0000000140A03E62: cmovz   r10d, edx
 * 0000000140A03E66: add     r11d, r12d
 * 0000000140A03E69: jnz     short loc_140A03E0E
 * 0000000140A03E6B: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A03E70: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A03E77: and     r8d, 7Fh
 * 0000000140A03E7B: cmp     r8d, 8
 * 0000000140A03E7F: jb      short loc_140A03EAD
 * 0000000140A03E81: mov     edx, r8d
 * 0000000140A03E84: mov     esi, 1
 * 0000000140A03E89: shr     rdx, 3
 * 0000000140A03E8D: xor     rbx, [r9]
 * 0000000140A03E90: mov     ecx, r10d
 * 0000000140A03E93: rol     rbx, cl
 * 0000000140A03E96: add     r9, 8
 * 0000000140A03E9A: add     r8d, 0FFFFFFF8h
 * 0000000140A03E9E: sub     rdx, rsi
 * 0000000140A03EA1: jnz     short loc_140A03E8D
 * 0000000140A03EA3: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A03EA8: mov     edx, 1
 * 0000000140A03EAD: xor     r15d, r15d
 * 0000000140A03EB0: test    r8d, r8d
 * 0000000140A03EB3: jz      short loc_140A03ECA
 * 0000000140A03EB5: movzx   eax, byte ptr [r9]
 * 0000000140A03EB9: mov     ecx, r10d
 * 0000000140A03EBC: xor     rbx, rax
 * 0000000140A03EBF: add     r9, rdx
 * 0000000140A03EC2: rol     rbx, cl
 * 0000000140A03EC5: add     r8d, r12d
 * 0000000140A03EC8: jnz     short loc_140A03EB5
 * 0000000140A03ECA: mov     rax, rbx
 * 0000000140A03ECD: jmp     short loc_140A03ED1
 * 0000000140A03ECF: xor     ebx, eax
 * 0000000140A03ED1: shr     rax, 1Fh
 * 0000000140A03ED5: test    rax, rax
 * 0000000140A03ED8: jnz     short loc_140A03ECF
 * 0000000140A03EDA: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A03EDF: btr     ebx, 1Fh
 * 0000000140A03EE3: mov     r13d, r15d
 * 0000000140A03EE6: cmp     ebx, [rax+14h]
 * 0000000140A03EE9: jz      loc_140A03FE0
 * 0000000140A03EEF: cmp     [rax], r15d
 * 0000000140A03EF2: jnz     short loc_140A03EFC
 * 0000000140A03EF4: cmp     [rax+18h], r15d
 * 0000000140A03EF8: cmovnz  r13d, edx
 * 0000000140A03EFC: mov     ecx, [rax+10h]
 * 0000000140A03EFF: mov     rdx, [rax+8]
 * 0000000140A03F03: test    rcx, rcx
 * 0000000140A03F06: jz      loc_140A03FC2
 * 0000000140A03F0C: mov     eax, [rsi+994h]
 * 0000000140A03F12: mov     r8d, 40h ; '@'
 * 0000000140A03F18: test    r8b, al
 * 0000000140A03F1B: jz      loc_140A03FC2
 * 0000000140A03F21: mov     r12, cr8
 * 0000000140A03F25: lea     eax, [r8-3Eh]
 * 0000000140A03F29: mov     cr8, rax
 * 0000000140A03F2D: mov     r14, rdx
 * 0000000140A03F30: lea     rax, [rcx-1]
 * 0000000140A03F34: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A03F3B: add     rax, rdx
 * 0000000140A03F3E: or      rax, 0FFFh
 * 0000000140A03F44: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A03F49: lea     rax, [r14-1]
 * 0000000140A03F4D: mov     [rsp+0CE0h+var_C88], rax
 * 0000000140A03F52: movzx   r15d, r12b
 * 0000000140A03F56: mov     rax, [rsi+468h]
 * 0000000140A03F5D: xor     edx, edx
 * 0000000140A03F5F: mov     rcx, r14
 * 0000000140A03F62: call    KeGuardDispatchICall
 * 0000000140A03F67: cmp     eax, 0C000022Dh
 * 0000000140A03F6C: jnz     short loc_140A03F95
 * 0000000140A03F6E: test    r13d, r13d
 * 0000000140A03F71: jnz     short loc_140A03FBB
 * 0000000140A03F73: lea     eax, [r13+1]
 * 0000000140A03F77: cmp     r12b, al
 * 0000000140A03F7A: ja      short loc_140A03F99
 * 0000000140A03F7C: movzx   r15d, r12b
 * 0000000140A03F80: mov     cr8, r15
 * 0000000140A03F84: mov     al, [r14]
 * 0000000140A03F87: mov     rax, cr8
 * 0000000140A03F8B: lea     eax, [r13+2]
 * 0000000140A03F8F: mov     cr8, rax
 * 0000000140A03F93: jmp     short loc_140A03F56
 * 0000000140A03F95: test    eax, eax
 * 0000000140A03F97: js      short loc_140A03FBB
 * 0000000140A03F99: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A03F9E: mov     r11d, 1000h
 * 0000000140A03FA4: add     rax, r11
 * 0000000140A03FA7: add     r14, r11
 * 0000000140A03FAA: mov     [rsp+0CE0h+var_C88], rax
 * 0000000140A03FAF: cmp     rax, [rsp+0CE0h+var_C70]
 * 0000000140A03FB4: jnz     short loc_140A03F52
 * 0000000140A03FB6: jmp     loc_140A03D07
 * 0000000140A03FBB: mov     cr8, r15
 * 0000000140A03FBF: xor     r15d, r15d
 * 0000000140A03FC2: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A03FC7: mov     eax, [rsi+8F8h]
 * 0000000140A03FCD: mov     ecx, [r13+14h]
 * 0000000140A03FD1: test    eax, eax
 * 0000000140A03FD3: jnz     loc_140A03D51
 * 0000000140A03FD9: mov     eax, ebx
 * 0000000140A03FDB: jmp     loc_140A03D3B
 * 0000000140A03FE0: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A03FE7: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A03FEC: jmp     loc_140A0389F
 * 0000000140A03FF1: xor     ebx, eax
 * 0000000140A03FF3: shr     rax, 1Fh
 * 0000000140A03FF7: test    rax, rax
 * 0000000140A03FFA: jnz     short loc_140A03FF1
 * 0000000140A03FFC: btr     ebx, 1Fh
 * 0000000140A04000: mov     [rbp+0BE0h+var_C60], rbx
 * 0000000140A04004: jmp     loc_140A042A7
 * 0000000140A04009: mov     r8d, r15d
 * 0000000140A0400C: mov     rdx, r13
 * 0000000140A0400F: mov     rcx, rsi
 * 0000000140A04012: call    sub_140A105E8
 * 0000000140A04017: mov     ebx, eax
 * 0000000140A04019: mov     eax, r15d
 * 0000000140A0401C: shl     eax, 3
 * 0000000140A0401F: add     [rsi+828h], eax
 * 0000000140A04025: mov     eax, [rsi+994h]
 * 0000000140A0402B: mov     [rbp+0BE0h+var_C60], rbx
 * 0000000140A0402F: bt      eax, 0Bh
 * 0000000140A04033: jnb     loc_140A042A7
 * 0000000140A04039: lea     rbx, [r13-6]
 * 0000000140A0403D: xor     r10d, r10d
 * 0000000140A04040: lea     r14, [rbx+5]
 * 0000000140A04044: mov     al, [r14]
 * 0000000140A04047: cmp     byte ptr [rbx], 4Ch ; 'L'
 * 0000000140A0404A: jnz     loc_140A04242
 * 0000000140A04050: cmp     byte ptr [rbx+1], 87h
 * 0000000140A04054: jnz     loc_140A04242
 * 0000000140A0405A: cmp     [rbx+2], r10b
 * 0000000140A0405E: jnz     loc_140A04242
 * 0000000140A04064: cmp     byte ptr [rbx+3], 98h
 * 0000000140A04068: jnz     loc_140A04242
 * 0000000140A0406E: cmp     byte ptr [rbx+4], 0C3h
 * 0000000140A04072: jnz     loc_140A04242
 * 0000000140A04078: cmp     al, 90h
 * 0000000140A0407A: jz      short loc_140A04084
 * 0000000140A0407C: cmp     al, 0F1h
 * 0000000140A0407E: jnz     loc_140A04242
 * 0000000140A04084: mov     rcx, [rsi+4E0h]
 * 0000000140A0408B: cli
 * 0000000140A0408C: mov     eax, [rsi+990h]
 * 0000000140A04092: shr     eax, 0Ah
 * 0000000140A04095: and     eax, 1Fh
 * 0000000140A04098: lock bts [rcx], eax
 * 0000000140A0409C: jnb     short loc_140A040A3
 * 0000000140A0409E: sti
 * 0000000140A0409F: pause
 * 0000000140A040A1: jmp     short loc_140A0408B
 * 0000000140A040A3: mov     rdx, [rsi+8E0h]
 * 0000000140A040AA: mov     r8d, 26h ; '&'
 * 0000000140A040B0: mov     ecx, 130h
 * 0000000140A040B5: mov     rax, rdx
 * 0000000140A040B8: lea     r9d, [r8-25h]
 * 0000000140A040BC: mov     [rax], r10
 * 0000000140A040BF: add     ecx, 0FFFFFFF8h
 * 0000000140A040C2: add     rax, 8
 * 0000000140A040C6: sub     r8, r9
 * 0000000140A040C9: jnz     short loc_140A040BC
 * 0000000140A040CB: test    ecx, ecx
 * 0000000140A040CD: jz      short loc_140A040E0
 * 0000000140A040CF: mov     r8d, 0FFFFFFFFh
 * 0000000140A040D5: mov     [rax], r10b
 * 0000000140A040D8: add     rax, r9
 * 0000000140A040DB: add     ecx, r8d
 * 0000000140A040DE: jnz     short loc_140A040D5
 * 0000000140A040E0: movups  xmm0, xmmword ptr [rsi+848h]
 * 0000000140A040E7: mov     eax, 12Fh
 * 0000000140A040EC: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140A040F1: movups  xmm1, xmmword ptr [rsi+858h]
 * 0000000140A040F8: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140A040FD: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140A04104: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140A0410C: mov     word ptr [rbp+0BE0h+var_8E0], ax
 * 0000000140A04113: lea     rax, [rsi+88Ch]
 * 0000000140A0411A: mov     [rbp+302h], rdx
 * 0000000140A04121: mov     rcx, rax
 * 0000000140A04124: mov     [rdx+10h], ax
 * 0000000140A04128: shr     rcx, 10h
 * 0000000140A0412C: mov     [rbp+0BE0h+var_5C0], rax
 * 0000000140A04133: shr     rax, 20h
 * 0000000140A04137: mov     [rdx+16h], cx
 * 0000000140A0413B: mov     [rdx+18h], eax
 * 0000000140A0413E: sidt    fword ptr [rbp+0BE0h+var_740]
 * 0000000140A04145: lidt    fword ptr [rbp+0BE0h+var_8E0]
 * 0000000140A0414C: mov     byte ptr [r14], 0F1h
 * 0000000140A04150: mov     al, [r14]
 * 0000000140A04153: cmp     al, 0F1h
 * 0000000140A04155: jnz     loc_140A041FD
 * 0000000140A0415B: test    dword ptr [rsi+994h], 20000h
 * 0000000140A04165: jnz     short loc_140A041AD
 * 0000000140A04167: mov     rdx, gs:20h
 * 0000000140A04170: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A0417A: mov     rax, [rsi+4C0h]
 * 0000000140A04181: add     rcx, rsi
 * 0000000140A04184: mov     [rax], rcx
 * 0000000140A04187: lea     rcx, [rbx+6]
 * 0000000140A0418B: mov     rax, [rsi+4C8h]
 * 0000000140A04192: mov     [rax], rdx
 * 0000000140A04195: mov     rax, [rsi+4D0h]
 * 0000000140A0419C: mov     [rax], rcx
 * 0000000140A0419F: mov     rax, [rsi+4D8h]
 * 0000000140A041A6: mov     qword ptr [rax], 113h
 * 0000000140A041AD: mov     rax, r14
 * 0000000140A041B0: call    KeGuardDispatchICall
 * 0000000140A041B5: xor     r10d, r10d
 * 0000000140A041B8: test    dword ptr [rsi+994h], 20000h
 * 0000000140A041C2: jnz     short loc_140A041F6
 * 0000000140A041C4: mov     rax, [rsi+4C0h]
 * 0000000140A041CB: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A041D5: mov     [rax], rcx
 * 0000000140A041D8: mov     rax, [rsi+4C8h]
 * 0000000140A041DF: mov     [rax], r10
 * 0000000140A041E2: mov     rax, [rsi+4D0h]
 * 0000000140A041E9: mov     [rax], r10
 * 0000000140A041EC: mov     rax, [rsi+4D8h]
 * 0000000140A041F3: mov     [rax], r10
 * 0000000140A041F6: mov     al, [r14]
 * 0000000140A041F9: cmp     al, 0F1h
 * 0000000140A041FB: jz      short loc_140A04202
 * 0000000140A041FD: mov     r9d, r10d
 * 0000000140A04200: jmp     short loc_140A04215
 * 0000000140A04202: mov     byte ptr [r14], 90h
 * 0000000140A04206: mov     r9d, 1
 * 0000000140A0420C: mov     al, [r14]
 * 0000000140A0420F: cmp     al, 90h
 * 0000000140A04211: cmovnz  r9d, r10d
 * 0000000140A04215: lidt    fword ptr [rbp+0BE0h+var_740]
 * 0000000140A0421C: mov     ecx, [rsi+990h]
 * 0000000140A04222: mov     edx, 1
 * 0000000140A04227: mov     r8, [rsi+4E0h]
 * 0000000140A0422E: shr     ecx, 0Ah
 * 0000000140A04231: and     ecx, 1Fh
 * 0000000140A04234: shl     edx, cl
 * 0000000140A04236: not     edx
 * 0000000140A04238: lock and [r8], edx
 * 0000000140A0423C: sti
 * 0000000140A0423D: test    r9d, r9d
 * 0000000140A04240: jnz     short loc_140A0429E
 * 0000000140A04242: cmp     [rsi+8F8h], r10d
 * 0000000140A04249: jnz     short loc_140A0429E
 * 0000000140A0424B: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A04250: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0425A: add     rax, rsi
 * 0000000140A0425D: xor     edx, edx
 * 0000000140A0425F: mov     [rsi+900h], rax
 * 0000000140A04266: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A04270: add     rax, rcx
 * 0000000140A04273: mov     [rsi+908h], rax
 * 0000000140A0427A: movsxd  rax, dword ptr [rcx]
 * 0000000140A0427D: mov     rcx, rsi
 * 0000000140A04280: mov     [rsi+910h], rax
 * 0000000140A04287: mov     eax, 1
 * 0000000140A0428C: mov     [rsi+918h], rbx
 * 0000000140A04293: mov     [rsi+8F8h], eax
 * 0000000140A04299: call    $$b8
 * 0000000140A0429E: mov     rbx, [rbp+0BE0h+var_C60]
 * 0000000140A042A2: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A042A7: mov     ecx, [r12]
 * 0000000140A042AB: mov     eax, ecx
 * 0000000140A042AD: btr     eax, 1Fh
 * 0000000140A042B1: cmp     ebx, eax
 * 0000000140A042B3: jz      loc_140A04366
 * 0000000140A042B9: mov     edx, r15d
 * 0000000140A042BC: xor     r15d, r15d
 * 0000000140A042BF: test    rdx, rdx
 * 0000000140A042C2: jz      loc_140A043EA
 * 0000000140A042C8: mov     eax, [rsi+994h]
 * 0000000140A042CE: lea     r8d, [r15+40h]
 * 0000000140A042D2: test    r8b, al
 * 0000000140A042D5: jz      loc_140A043EA
 * 0000000140A042DB: mov     r15, cr8
 * 0000000140A042DF: lea     eax, [r8-3Eh]
 * 0000000140A042E3: mov     cr8, rax
 * 0000000140A042E7: mov     rbx, r13
 * 0000000140A042EA: dec     r13
 * 0000000140A042ED: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A042F4: add     r13, rdx
 * 0000000140A042F7: or      r13, 0FFFh
 * 0000000140A042FE: lea     r12, [rbx-1]
 * 0000000140A04302: movzx   r14d, r15b
 * 0000000140A04306: mov     rax, [rsi+468h]
 * 0000000140A0430D: xor     edx, edx
 * 0000000140A0430F: mov     rcx, rbx
 * 0000000140A04312: call    KeGuardDispatchICall
 * 0000000140A04317: cmp     eax, 0C000022Dh
 * 0000000140A0431C: jnz     short loc_140A04341
 * 0000000140A0431E: mov     eax, 1
 * 0000000140A04323: cmp     r15b, al
 * 0000000140A04326: ja      short loc_140A04349
 * 0000000140A04328: movzx   r14d, r15b
 * 0000000140A0432C: mov     cr8, r14
 * 0000000140A04330: mov     al, [rbx]
 * 0000000140A04332: mov     rax, cr8
 * 0000000140A04336: mov     eax, 2
 * 0000000140A0433B: mov     cr8, rax
 * 0000000140A0433F: jmp     short loc_140A04306
 * 0000000140A04341: test    eax, eax
 * 0000000140A04343: js      loc_140A043D2
 * 0000000140A04349: mov     eax, 1000h
 * 0000000140A0434E: add     rbx, rax
 * 0000000140A04351: add     r12, rax
 * 0000000140A04354: cmp     r12, r13
 * 0000000140A04357: jnz     short loc_140A04302
 * 0000000140A04359: mov     cr8, r14
 * 0000000140A0435D: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A04362: mov     r12, [rbp+0BE0h+var_C50]
 * 0000000140A04366: xor     r15d, r15d
 * 0000000140A04369: add     r12, 4
 * 0000000140A0436D: add     r14, 0Ch
 * 0000000140A04371: mov     [rbp+0BE0h+var_C50], r12
 * 0000000140A04375: mov     [rsp+0CE0h+var_C88], r14
 * 0000000140A0437A: cmp     r14, rdi
 * 0000000140A0437D: jnb     short loc_140A04398
 * 0000000140A0437F: mov     rax, [rbp+0BE0h+var_C08]
 * 0000000140A04383: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0438A: mov     eax, [rax]
 * 0000000140A0438C: cmp     [rsi+828h], eax
 * 0000000140A04392: jl      loc_140A038F9
 * 0000000140A04398: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0439F: cmp     r14, [rbp+0BE0h+var_C20]
 * 0000000140A043A3: jz      loc_140A04471
 * 0000000140A043A9: sub     r14, [rbp+0BE0h+var_C10]
 * 0000000140A043AD: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140A043B7: imul    r14
 * 0000000140A043BA: sar     rdx, 1
 * 0000000140A043BD: mov     rax, rdx
 * 0000000140A043C0: shr     rax, 3Fh
 * 0000000140A043C4: add     rdx, rax
 * 0000000140A043C7: mov     [rsi+824h], edx
 * 0000000140A043CD: jmp     loc_1409FA31B
 * 0000000140A043D2: mov     cr8, r14
 * 0000000140A043D6: mov     r12, [rbp+0BE0h+var_C50]
 * 0000000140A043DA: xor     r15d, r15d
 * 0000000140A043DD: mov     rbx, [rbp+0BE0h+var_C60]
 * 0000000140A043E1: mov     r13, [rsp+0CE0h+var_C70]
 * 0000000140A043E6: mov     ecx, [r12]
 * 0000000140A043EA: mov     eax, ecx
 * 0000000140A043EC: mov     ecx, [rsi+8F8h]
 * 0000000140A043F2: btr     eax, 1Fh
 * 0000000140A043F6: test    ecx, ecx
 * 0000000140A043F8: jnz     short loc_140A04467
 * 0000000140A043FA: mov     ecx, ebx
 * 0000000140A043FC: xor     rcx, rax
 * 0000000140A043FF: mov     rax, [rsi+590h]
 * 0000000140A04406: mov     [rax+18h], rcx
 * 0000000140A0440A: mov     ecx, [rsi+8F8h]
 * 0000000140A04410: test    ecx, ecx
 * 0000000140A04412: jnz     short loc_140A04467
 * 0000000140A04414: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A04419: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A04423: add     rax, rsi
 * 0000000140A04426: xor     edx, edx
 * 0000000140A04428: mov     [rsi+900h], rax
 * 0000000140A0442F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A04439: add     rax, rcx
 * 0000000140A0443C: mov     [rsi+908h], rax
 * 0000000140A04443: movsxd  rax, dword ptr [rcx]
 * 0000000140A04446: mov     rcx, rsi
 * 0000000140A04449: mov     [rsi+910h], rax
 * 0000000140A04450: mov     eax, 1
 * 0000000140A04455: mov     [rsi+918h], r13
 * 0000000140A0445C: mov     [rsi+8F8h], eax
 * 0000000140A04462: call    $$b8
 * 0000000140A04467: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A0446C: jmp     loc_140A04369
 * 0000000140A04471: mov     rcx, [rsi+540h]
 * 0000000140A04478: mov     r15, cr8
 * 0000000140A0447C: mov     eax, 0Fh
 * 0000000140A04481: mov     cr8, rax
 * 0000000140A04485: mov     rax, [rsi+150h]
 * 0000000140A0448C: call    KeGuardDispatchICall
 * 0000000140A04491: mov     rax, [rsi+610h]
 * 0000000140A04498: mov     r14, [rsp+0CE0h+var_C90]
 * 0000000140A0449D: mov     rcx, [rax]
 * 0000000140A044A0: mov     eax, [rcx]
 * 0000000140A044A2: lea     rbx, [rcx+10h]
 * 0000000140A044A6: mov     r12b, [rcx+0Ch]
 * 0000000140A044AA: lea     rcx, [rax+rax*2]
 * 0000000140A044AE: lea     r13, [rbx+rcx*8]
 * 0000000140A044B2: mov     r8d, 18h
 * 0000000140A044B8: lea     r9, [r14+18h]
 * 0000000140A044BC: mov     r10, rbx
 * 0000000140A044BF: mov     rcx, [r10]
 * 0000000140A044C2: add     r10, 8
 * 0000000140A044C6: mov     rax, [r9]
 * 0000000140A044C9: add     r9, 8
 * 0000000140A044CD: cmp     rcx, rax
 * 0000000140A044D0: jnz     short loc_140A04506
 * 0000000140A044D2: add     r8d, 0FFFFFFF8h
 * 0000000140A044D6: cmp     r8d, 8
 * 0000000140A044DA: jnb     short loc_140A044BF
 * 0000000140A044DC: test    r8d, r8d
 * 0000000140A044DF: jz      short loc_140A0450F
 * 0000000140A044E1: mov     r11d, 1
 * 0000000140A044E7: movzx   edx, byte ptr [r10]
 * 0000000140A044EB: add     r10, r11
 * 0000000140A044EE: movzx   eax, byte ptr [r9]
 * 0000000140A044F2: add     r9, r11
 * 0000000140A044F5: cmp     rdx, rax
 * 0000000140A044F8: jnz     short loc_140A04506
 * 0000000140A044FA: mov     eax, 0FFFFFFFFh
 * 0000000140A044FF: add     r8d, eax
 * 0000000140A04502: jz      short loc_140A0450F
 * 0000000140A04504: jmp     short loc_140A044E7
 * 0000000140A04506: add     rbx, 18h
 * 0000000140A0450A: cmp     rbx, r13
 * 0000000140A0450D: jb      short loc_140A044B2
 * 0000000140A0450F: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A04514: mov     rcx, [rsi+540h]
 * 0000000140A0451B: mov     rax, [rsi+190h]
 * 0000000140A04522: call    KeGuardDispatchICall
 * 0000000140A04527: movzx   eax, r15b
 * 0000000140A0452B: mov     cr8, rax
 * 0000000140A0452F: xor     r15d, r15d
 * 0000000140A04532: test    r12b, r12b
 * 0000000140A04535: jz      short loc_140A045B1
 * 0000000140A04537: mov     eax, [rsi+994h]
 * 0000000140A0453D: lea     ecx, [r15+10h]
 * 0000000140A04541: test    cl, al
 * 0000000140A04543: jz      short loc_140A045A0
 * 0000000140A04545: cmp     [rsi+8F8h], r15d
 * 0000000140A0454C: jnz     short loc_140A045A0
 * 0000000140A0454E: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A04553: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0455D: add     rax, rsi
 * 0000000140A04560: xor     edx, edx
 * 0000000140A04562: mov     [rsi+900h], rax
 * 0000000140A04569: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A04573: add     rax, rcx
 * 0000000140A04576: mov     [rsi+908h], rax
 * 0000000140A0457D: movsxd  rax, dword ptr [rcx]
 * 0000000140A04580: mov     rcx, rsi
 * 0000000140A04583: mov     [rsi+910h], rax
 * 0000000140A0458A: lea     eax, [r15+1]
 * 0000000140A0458E: mov     [rsi+918h], rax
 * 0000000140A04595: mov     [rsi+8F8h], eax
 * 0000000140A0459B: call    $$b8
 * 0000000140A045A0: mov     edx, 1
 * 0000000140A045A5: cmp     [r14+18h], rdx
 * 0000000140A045A9: jz      loc_140A0144D
 * 0000000140A045AF: jmp     short loc_140A045B6
 * 0000000140A045B1: mov     edx, 1
 * 0000000140A045B6: cmp     rbx, r13
 * 0000000140A045B9: jnz     loc_140A0144D
 * 0000000140A045BF: cmp     [rsi+8F8h], r15d
 * 0000000140A045C6: jnz     loc_140A0144D
 * 0000000140A045CC: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A045D1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A045DB: add     rax, rsi
 * 0000000140A045DE: mov     [rsi+900h], rax
 * 0000000140A045E5: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A045EF: add     rax, rcx
 * 0000000140A045F2: mov     [rsi+908h], rax
 * 0000000140A045F9: movsxd  rax, dword ptr [rcx]
 * 0000000140A045FC: mov     rcx, rsi
 * 0000000140A045FF: mov     [rsi+910h], rax
 * 0000000140A04606: mov     [rsi+918h], rbx
 * 0000000140A0460D: mov     [rsi+8F8h], edx
 * 0000000140A04613: xor     edx, edx
 * 0000000140A04615: call    $$b8
 * 0000000140A0461A: jmp     loc_140A0144D
 * 0000000140A0461F: mov     eax, [r13+24h]
 * 0000000140A04623: add     [rsi+828h], eax
 * 0000000140A04629: mov     ebx, [r13+20h]
 * 0000000140A0462D: mov     r9d, [r13+24h]
 * 0000000140A04631: add     rbx, rsi
 * 0000000140A04634: mov     r11d, [rsi+814h]
 * 0000000140A0463B: mov     r10, rbx
 * 0000000140A0463E: mov     r15, [rsi+818h]
 * 0000000140A04645: mov     rax, rbx
 * 0000000140A04648: lea     rcx, [rbx+r9]
 * 0000000140A0464C: cmp     rbx, rcx
 * 0000000140A0464F: jnb     short loc_140A04661
 * 0000000140A04651: mov     edx, 40h ; '@'
 * 0000000140A04656: prefetchnta byte ptr [rax]
 * 0000000140A04659: add     rax, rdx
 * 0000000140A0465C: cmp     rax, rcx
 * 0000000140A0465F: jb      short loc_140A04656
 * 0000000140A04661: mov     r14d, r9d
 * 0000000140A04664: mov     r8, r15
 * 0000000140A04667: shr     r14d, 7
 * 0000000140A0466B: mov     r12d, 1
 * 0000000140A04671: test    r14d, r14d
 * 0000000140A04674: jz      short loc_140A046E1
 * 0000000140A04676: mov     rsi, 7010008004002001h
 * 0000000140A04680: mov     edx, 8
 * 0000000140A04685: mov     rax, [r10]
 * 0000000140A04688: mov     ecx, r11d
 * 0000000140A0468B: xor     rax, r8
 * 0000000140A0468E: mov     r8, [r10+8]
 * 0000000140A04692: rol     rax, cl
 * 0000000140A04695: add     r10, 10h
 * 0000000140A04699: xor     r8, rax
 * 0000000140A0469C: rol     r8, cl
 * 0000000140A0469F: sub     rdx, r12
 * 0000000140A046A2: jnz     short loc_140A04685
 * 0000000140A046A4: mov     rcx, r10
 * 0000000140A046A7: sub     rcx, rbx
 * 0000000140A046AA: xor     rcx, r15
 * 0000000140A046AD: mov     rax, rcx
 * 0000000140A046B0: rol     rax, 11h
 * 0000000140A046B4: xor     rcx, rax
 * 0000000140A046B7: mov     rax, rsi
 * 0000000140A046BA: mul     rcx
 * 0000000140A046BD: xor     r11d, eax
 * 0000000140A046C0: mov     [rbp+0BE0h+var_5B8], rdx
 * 0000000140A046C7: xor     r11d, edx
 * 0000000140A046CA: mov     eax, 0FFFFFFFFh
 * 0000000140A046CF: and     r11d, 3Fh
 * 0000000140A046D3: cmovz   r11d, r12d
 * 0000000140A046D7: add     r14d, eax
 * 0000000140A046DA: jnz     short loc_140A04680
 * 0000000140A046DC: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A046E1: and     r9d, 7Fh
 * 0000000140A046E5: cmp     r9d, 8
 * 0000000140A046E9: jb      short loc_140A04708
 * 0000000140A046EB: mov     edx, r9d
 * 0000000140A046EE: shr     rdx, 3
 * 0000000140A046F2: xor     r8, [r10]
 * 0000000140A046F5: mov     ecx, r11d
 * 0000000140A046F8: rol     r8, cl
 * 0000000140A046FB: add     r10, 8
 * 0000000140A046FF: add     r9d, 0FFFFFFF8h
 * 0000000140A04703: sub     rdx, r12
 * 0000000140A04706: jnz     short loc_140A046F2
 * 0000000140A04708: xor     r15d, r15d
 * 0000000140A0470B: test    r9d, r9d
 * 0000000140A0470E: jz      short loc_140A0472E
 * 0000000140A04710: mov     r15d, 0FFFFFFFFh
 * 0000000140A04716: movzx   eax, byte ptr [r10]
 * 0000000140A0471A: mov     ecx, r11d
 * 0000000140A0471D: xor     r8, rax
 * 0000000140A04720: add     r10, r12
 * 0000000140A04723: rol     r8, cl
 * 0000000140A04726: add     r9d, r15d
 * 0000000140A04729: jnz     short loc_140A04716
 * 0000000140A0472B: xor     r15d, r15d
 * 0000000140A0472E: mov     rcx, [r13+18h]
 * 0000000140A04732: cmp     r8, rcx
 * 0000000140A04735: jz      loc_1409FA31B
 * 0000000140A0473B: mov     eax, [rsi+8F8h]
 * 0000000140A04741: test    eax, eax
 * 0000000140A04743: jnz     short loc_140A04759
 * 0000000140A04745: mov     rax, [rsi+590h]
 * 0000000140A0474C: xor     rcx, r8
 * 0000000140A0474F: mov     [rax+18h], rcx
 * 0000000140A04753: mov     eax, [rsi+8F8h]
 * 0000000140A04759: mov     ecx, [r13+20h]
 * 0000000140A0475D: add     rcx, rsi
 * 0000000140A04760: test    eax, eax
 * 0000000140A04762: jmp     loc_140A02866
 * 0000000140A04767: mov     ebx, 0Fh
 * 0000000140A0476C: sub     r10d, 2
 * 0000000140A04770: jz      loc_140A04F48
 * 0000000140A04776: sub     r10d, 1
 * 0000000140A0477A: jz      loc_140A04B3A
 * 0000000140A04780: cmp     r10d, 14h
 * 0000000140A04784: jz      short loc_140A047D5
 * 0000000140A04786: xor     r15d, r15d
 * 0000000140A04789: cmp     [rsi+8F8h], r15d
 * 0000000140A04790: jnz     loc_1409FA31B
 * 0000000140A04796: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A047A0: add     rax, rsi
 * 0000000140A047A3: mov     [rsi+900h], rax
 * 0000000140A047AA: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A047B4: add     rax, r13
 * 0000000140A047B7: mov     [rsi+908h], rax
 * 0000000140A047BE: mov     qword ptr [rsi+910h], 101h
 * 0000000140A047C9: mov     [rsi+918h], r15
 * 0000000140A047D0: jmp     loc_140A03868
 * 0000000140A047D5: mov     edx, [r13+28h]
 * 0000000140A047D9: lea     rcx, [rbp+0BE0h+var_2E0]
 * 0000000140A047E0: mov     rax, [rsi+1A0h]
 * 0000000140A047E7: call    KeGuardDispatchICall
 * 0000000140A047EC: mov     rax, [rsi+1D0h]
 * 0000000140A047F3: lea     rdx, [rbp+0BE0h+var_2D0]
 * 0000000140A047FA: lea     rcx, [rbp+0BE0h+var_2E0]
 * 0000000140A04801: call    KeGuardDispatchICall
 * 0000000140A04806: mov     r8, [rsi+0A10h]
 * 0000000140A0480D: xor     r15d, r15d
 * 0000000140A04810: test    r8, r8
 * 0000000140A04813: jz      short loc_140A04825
 * 0000000140A04815: mov     ebx, [r8+320h]
 * 0000000140A0481C: mov     r8, [rsi+0A10h]
 * 0000000140A04823: jmp     short loc_140A04836
 * 0000000140A04825: mov     ecx, 832h
 * 0000000140A0482A: rdmsr
 * 0000000140A0482C: shl     rdx, 20h
 * 0000000140A04830: or      rax, rdx
 * 0000000140A04833: mov     rbx, rax
 * 0000000140A04836: test    r8, r8
 * 0000000140A04839: jz      short loc_140A04844
 * 0000000140A0483B: mov     r14d, [r8+340h]
 * 0000000140A04842: jmp     short loc_140A04855
 * 0000000140A04844: mov     ecx, 834h
 * 0000000140A04849: rdmsr
 * 0000000140A0484B: shl     rdx, 20h
 * 0000000140A0484F: or      rax, rdx
 * 0000000140A04852: mov     r14, rax
 * 0000000140A04855: mov     rax, [rsi+198h]
 * 0000000140A0485C: lea     rcx, [rbp+0BE0h+var_2D0]
 * 0000000140A04863: call    KeGuardDispatchICall
 * 0000000140A04868: mov     ecx, 10h
 * 0000000140A0486D: test    [rsi+87Bh], cl
 * 0000000140A04873: jz      loc_140A049BE
 * 0000000140A04879: cli
 * 0000000140A0487A: mov     rdx, [rsi+8E0h]
 * 0000000140A04881: mov     r8d, 26h ; '&'
 * 0000000140A04887: mov     ecx, 130h
 * 0000000140A0488C: mov     rax, rdx
 * 0000000140A0488F: lea     r12d, [r8-25h]
 * 0000000140A04893: mov     [rax], r15
 * 0000000140A04896: add     ecx, 0FFFFFFF8h
 * 0000000140A04899: add     rax, 8
 * 0000000140A0489D: sub     r8, r12
 * 0000000140A048A0: jnz     short loc_140A04893
 * 0000000140A048A2: test    ecx, ecx
 * 0000000140A048A4: jz      short loc_140A048B7
 * 0000000140A048A6: mov     r8d, 0FFFFFFFFh
 * 0000000140A048AC: mov     [rax], r15b
 * 0000000140A048AF: add     rax, r12
 * 0000000140A048B2: add     ecx, r8d
 * 0000000140A048B5: jnz     short loc_140A048AC
 * 0000000140A048B7: movups  xmm0, xmmword ptr [rsi+848h]
 * 0000000140A048BE: mov     eax, 12Fh
 * 0000000140A048C3: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140A048C8: movups  xmm1, xmmword ptr [rsi+858h]
 * 0000000140A048CF: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140A048D4: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140A048DB: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140A048E3: mov     word ptr [rbp+0BE0h+var_920], ax
 * 0000000140A048EA: lea     rax, [rsi+878h]
 * 0000000140A048F1: mov     [rbp+2C2h], rdx
 * 0000000140A048F8: mov     rcx, rax
 * 0000000140A048FB: mov     [rdx+10h], ax
 * 0000000140A048FF: shr     rcx, 10h
 * 0000000140A04903: mov     [rbp+0BE0h+var_5B0], rax
 * 0000000140A0490A: shr     rax, 20h
 * 0000000140A0490E: mov     [rdx+16h], cx
 * 0000000140A04912: mov     [rdx+18h], eax
 * 0000000140A04915: sidt    fword ptr [rbp+0BE0h+var_770]
 * 0000000140A0491C: lidt    fword ptr [rbp+0BE0h+var_920]
 * 0000000140A04923: test    dword ptr [rsi+994h], 20000h
 * 0000000140A0492D: jnz     short loc_140A04971
 * 0000000140A0492F: mov     rdx, gs:20h
 * 0000000140A04938: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A04942: mov     rax, [rsi+4C0h]
 * 0000000140A04949: add     rcx, rsi
 * 0000000140A0494C: mov     [rax], rcx
 * 0000000140A0494F: mov     rax, [rsi+4C8h]
 * 0000000140A04956: mov     [rax], rdx
 * 0000000140A04959: mov     rax, [rsi+4D0h]
 * 0000000140A04960: mov     [rax], r15
 * 0000000140A04963: mov     rax, [rsi+4D8h]
 * 0000000140A0496A: mov     qword ptr [rax], 115h
 * 0000000140A04971: call    KiErrata361Present
 * 0000000140A04976: test    dword ptr [rsi+994h], 20000h
 * 0000000140A04980: jnz     short loc_140A049B4
 * 0000000140A04982: mov     rax, [rsi+4C0h]
 * 0000000140A04989: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A04993: mov     [rax], rcx
 * 0000000140A04996: mov     rax, [rsi+4C8h]
 * 0000000140A0499D: mov     [rax], r15
 * 0000000140A049A0: mov     rax, [rsi+4D0h]
 * 0000000140A049A7: mov     [rax], r15
 * 0000000140A049AA: mov     rax, [rsi+4D8h]
 * 0000000140A049B1: mov     [rax], r15
 * 0000000140A049B4: lidt    fword ptr [rbp+0BE0h+var_770]
 * 0000000140A049BB: sti
 * 0000000140A049BC: jmp     short loc_140A049C4
 * 0000000140A049BE: mov     r12d, 1
 * 0000000140A049C4: mov     eax, [r13+1Ch]
 * 0000000140A049C8: mov     r8d, [r13+18h]
 * 0000000140A049CC: and     eax, ebx
 * 0000000140A049CE: cmp     eax, r8d
 * 0000000140A049D1: jnz     short loc_140A049F2
 * 0000000140A049D3: bt      ebx, 10h
 * 0000000140A049D7: jb      loc_140A04A7C
 * 0000000140A049DD: cmp     bl, 0D1h
 * 0000000140A049E0: jz      loc_140A04A7C
 * 0000000140A049E6: lea     eax, [rbx+3]
 * 0000000140A049E9: cmp     al, r12b
 * 0000000140A049EC: jbe     loc_140A04A7C
 * 0000000140A049F2: mov     edx, [r13+28h]
 * 0000000140A049F6: mov     rax, 32000000000h
 * 0000000140A04A00: shl     rdx, 30h
 * 0000000140A04A04: or      rdx, r8
 * 0000000140A04A07: or      rdx, rax
 * 0000000140A04A0A: mov     eax, [rsi+8F8h]
 * 0000000140A04A10: test    eax, eax
 * 0000000140A04A12: jnz     short loc_140A04A7C
 * 0000000140A04A14: mov     rax, [rsi+590h]
 * 0000000140A04A1B: mov     ecx, ebx
 * 0000000140A04A1D: xor     rcx, r8
 * 0000000140A04A20: mov     [rax+18h], rcx
 * 0000000140A04A24: mov     eax, [rsi+8F8h]
 * 0000000140A04A2A: test    eax, eax
 * 0000000140A04A2C: jnz     short loc_140A04A7C
 * 0000000140A04A2E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A04A38: mov     rbx, 0B3B74BDEE4453415h
 * 0000000140A04A42: add     rax, rsi
 * 0000000140A04A45: mov     rcx, rsi
 * 0000000140A04A48: mov     [rsi+900h], rax
 * 0000000140A04A4F: lea     rax, [rbx+r13]
 * 0000000140A04A53: mov     [rsi+908h], rax
 * 0000000140A04A5A: movsxd  rax, dword ptr [r13+0]
 * 0000000140A04A5E: mov     [rsi+910h], rax
 * 0000000140A04A65: mov     [rsi+918h], rdx
 * 0000000140A04A6C: xor     edx, edx
 * 0000000140A04A6E: mov     [rsi+8F8h], r12d
 * 0000000140A04A75: call    $$b8
 * 0000000140A04A7A: jmp     short loc_140A04A86
 * 0000000140A04A7C: mov     rbx, 0B3B74BDEE4453415h
 * 0000000140A04A86: mov     eax, [r13+24h]
 * 0000000140A04A8A: mov     r8d, [r13+20h]
 * 0000000140A04A8E: and     eax, r14d
 * 0000000140A04A91: cmp     eax, r8d
 * 0000000140A04A94: jnz     short loc_140A04AB8
 * 0000000140A04A96: bt      r14d, 10h
 * 0000000140A04A9B: jb      loc_140A04F36
 * 0000000140A04AA1: cmp     r14b, 0D1h
 * 0000000140A04AA5: jz      loc_140A04F36
 * 0000000140A04AAB: lea     eax, [r14+3]
 * 0000000140A04AAF: cmp     al, r12b
 * 0000000140A04AB2: jbe     loc_140A04F36
 * 0000000140A04AB8: mov     edx, [r13+28h]
 * 0000000140A04ABC: mov     rax, 34000000000h
 * 0000000140A04AC6: shl     rdx, 30h
 * 0000000140A04ACA: or      rdx, r8
 * 0000000140A04ACD: or      rdx, rax
 * 0000000140A04AD0: mov     eax, [rsi+8F8h]
 * 0000000140A04AD6: test    eax, eax
 * 0000000140A04AD8: jnz     loc_140A04F36
 * 0000000140A04ADE: mov     rax, [rsi+590h]
 * 0000000140A04AE5: mov     ecx, r14d
 * 0000000140A04AE8: xor     rcx, r8
 * 0000000140A04AEB: mov     [rax+18h], rcx
 * 0000000140A04AEF: mov     eax, [rsi+8F8h]
 * 0000000140A04AF5: test    eax, eax
 * 0000000140A04AF7: jnz     loc_140A04F36
 * 0000000140A04AFD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A04B07: add     rax, rsi
 * 0000000140A04B0A: mov     [rsi+900h], rax
 * 0000000140A04B11: lea     rax, [rbx+r13]
 * 0000000140A04B15: mov     [rsi+908h], rax
 * 0000000140A04B1C: movsxd  rax, dword ptr [r13+0]
 * 0000000140A04B20: mov     [rsi+910h], rax
 * 0000000140A04B27: mov     [rsi+918h], rdx
 * 0000000140A04B2E: mov     [rsi+8F8h], r12d
 * 0000000140A04B35: jmp     loc_140A04F2C
 * 0000000140A04B3A: mov     edx, [r13+28h]
 * 0000000140A04B3E: lea     rcx, [rbp+0BE0h+var_2C0]
 * 0000000140A04B45: mov     rax, [rsi+1A0h]
 * 0000000140A04B4C: call    KeGuardDispatchICall
 * 0000000140A04B51: mov     rax, [rsi+1D0h]
 * 0000000140A04B58: lea     rdx, [rbp+0BE0h+var_2B0]
 * 0000000140A04B5F: lea     rcx, [rbp+0BE0h+var_2C0]
 * 0000000140A04B66: call    KeGuardDispatchICall
 * 0000000140A04B6B: lea     rdx, [rbp+0BE0h+var_190]
 * 0000000140A04B72: lea     rcx, [rbp+0BE0h+var_998]
 * 0000000140A04B79: call    KiGetGdtIdt
 * 0000000140A04B7E: mov     r15, [rbp+0BE0h+var_996]
 * 0000000140A04B85: mov     ecx, 2
 * 0000000140A04B8A: mov     r14d, [r13+10h]
 * 0000000140A04B8E: test    [rsi+87Bh], cl
 * 0000000140A04B94: jz      loc_140A04CC6
 * 0000000140A04B9A: mov     rdx, [rsi+8E0h]
 * 0000000140A04BA1: mov     r8d, 26h ; '&'
 * 0000000140A04BA7: mov     ecx, 130h
 * 0000000140A04BAC: mov     rax, rdx
 * 0000000140A04BAF: xor     r12d, r12d
 * 0000000140A04BB2: lea     r9d, [r8-25h]
 * 0000000140A04BB6: mov     [rax], r12
 * 0000000140A04BB9: add     ecx, 0FFFFFFF8h
 * 0000000140A04BBC: add     rax, 8
 * 0000000140A04BC0: sub     r8, r9
 * 0000000140A04BC3: jnz     short loc_140A04BB6
 * 0000000140A04BC5: test    ecx, ecx
 * 0000000140A04BC7: jz      short loc_140A04BDA
 * 0000000140A04BC9: mov     r8d, 0FFFFFFFFh
 * 0000000140A04BCF: mov     [rax], r12b
 * 0000000140A04BD2: add     rax, r9
 * 0000000140A04BD5: add     ecx, r8d
 * 0000000140A04BD8: jnz     short loc_140A04BCF
 * 0000000140A04BDA: movups  xmm0, xmmword ptr [rsi+848h]
 * 0000000140A04BE1: mov     eax, 12Fh
 * 0000000140A04BE6: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140A04BEB: movups  xmm1, xmmword ptr [rsi+858h]
 * 0000000140A04BF2: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140A04BF7: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140A04BFE: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140A04C06: mov     word ptr [rbp+0BE0h+var_910], ax
 * 0000000140A04C0D: lea     rax, [rsi+878h]
 * 0000000140A04C14: mov     [rbp+2D2h], rdx
 * 0000000140A04C1B: mov     rcx, rax
 * 0000000140A04C1E: mov     [rdx+10h], ax
 * 0000000140A04C22: shr     rcx, 10h
 * 0000000140A04C26: mov     [rbp+0BE0h+var_5A8], rax
 * 0000000140A04C2D: shr     rax, 20h
 * 0000000140A04C31: mov     [rdx+16h], cx
 * 0000000140A04C35: mov     [rdx+18h], eax
 * 0000000140A04C38: cli
 * 0000000140A04C39: sidt    fword ptr [rbp+0BE0h+var_750]
 * 0000000140A04C40: lidt    fword ptr [rbp+0BE0h+var_910]
 * 0000000140A04C47: mov     dr7, r12
 * 0000000140A04C4B: lea     rax, [rsi+87Eh]
 * 0000000140A04C52: mov     [rdx+10h], ax
 * 0000000140A04C56: mov     rcx, rax
 * 0000000140A04C59: shr     rcx, 10h
 * 0000000140A04C5D: shr     rax, 20h
 * 0000000140A04C61: mov     [rdx+16h], cx
 * 0000000140A04C65: mov     [rdx+18h], eax
 * 0000000140A04C68: test    byte ptr [rsi+87Bh], 20h
 * 0000000140A04C6F: jnz     short loc_140A04C7F
 * 0000000140A04C71: call    KiErrata704Present
 * 0000000140A04C76: mov     [rsi+8E8h], rax
 * 0000000140A04C7D: jmp     short loc_140A04CB0
 * 0000000140A04C7F: lea     rbx, [rsi+8AAh]
 * 0000000140A04C86: call    KiGetSs
 * 0000000140A04C8B: mov     [rbx], ax
 * 0000000140A04C8E: mov     dr0, rbx
 * 0000000140A04C91: mov     eax, 70001h
 * 0000000140A04C96: mov     dr7, rax
 * 0000000140A04C99: mov     rcx, rbx
 * 0000000140A04C9C: call    KiErrataSkx55Present
 * 0000000140A04CA1: mov     [rsi+8E8h], rax
 * 0000000140A04CA8: mov     dr7, r12
 * 0000000140A04CAC: mov     dr0, r12
 * 0000000140A04CB0: mov     eax, gs:1A4h
 * 0000000140A04CB8: mov     [rsi+8F0h], eax
 * 0000000140A04CBE: lidt    fword ptr [rbp+0BE0h+var_750]
 * 0000000140A04CC5: sti
 * 0000000140A04CC6: call    KiGetLdtr
 * 0000000140A04CCB: movzx   r12d, ax
 * 0000000140A04CCF: call    KiGetTr
 * 0000000140A04CD4: add     [rsi+828h], r14d
 * 0000000140A04CDB: lea     rcx, [r15+r14]
 * 0000000140A04CDF: mov     r9d, [rsi+814h]
 * 0000000140A04CE6: movzx   r13d, ax
 * 0000000140A04CEA: mov     r11, [rsi+818h]
 * 0000000140A04CF1: mov     r8, r15
 * 0000000140A04CF4: mov     rax, r15
 * 0000000140A04CF7: cmp     r15, rcx
 * 0000000140A04CFA: jnb     short loc_140A04D0C
 * 0000000140A04CFC: mov     edx, 40h ; '@'
 * 0000000140A04D01: prefetchnta byte ptr [rax]
 * 0000000140A04D04: add     rax, rdx
 * 0000000140A04D07: cmp     rax, rcx
 * 0000000140A04D0A: jb      short loc_140A04D01
 * 0000000140A04D0C: mov     r10d, r14d
 * 0000000140A04D0F: mov     rbx, r11
 * 0000000140A04D12: shr     r10d, 7
 * 0000000140A04D16: test    r10d, r10d
 * 0000000140A04D19: jz      short loc_140A04D93
 * 0000000140A04D1B: mov     rdi, 7010008004002001h
 * 0000000140A04D25: mov     edx, 8
 * 0000000140A04D2A: lea     esi, [rdx-7]
 * 0000000140A04D2D: mov     rax, [r8]
 * 0000000140A04D30: mov     ecx, r9d
 * 0000000140A04D33: xor     rax, rbx
 * 0000000140A04D36: mov     rbx, [r8+8]
 * 0000000140A04D3A: rol     rax, cl
 * 0000000140A04D3D: add     r8, 10h
 * 0000000140A04D41: xor     rbx, rax
 * 0000000140A04D44: rol     rbx, cl
 * 0000000140A04D47: sub     rdx, rsi
 * 0000000140A04D4A: jnz     short loc_140A04D2D
 * 0000000140A04D4C: mov     rcx, r8
 * 0000000140A04D4F: sub     rcx, r15
 * 0000000140A04D52: xor     rcx, r11
 * 0000000140A04D55: mov     rax, rcx
 * 0000000140A04D58: rol     rax, 11h
 * 0000000140A04D5C: xor     rcx, rax
 * 0000000140A04D5F: mov     rax, rdi
 * 0000000140A04D62: mul     rcx
 * 0000000140A04D65: xor     r9d, eax
 * 0000000140A04D68: mov     [rbp+0BE0h+var_5A0], rdx
 * 0000000140A04D6F: xor     r9d, edx
 * 0000000140A04D72: mov     rax, rsi
 * 0000000140A04D75: and     r9d, 3Fh
 * 0000000140A04D79: cmovz   r9d, eax
 * 0000000140A04D7D: mov     eax, 0FFFFFFFFh
 * 0000000140A04D82: add     r10d, eax
 * 0000000140A04D85: jnz     short loc_140A04D25
 * 0000000140A04D87: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A04D8C: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A04D93: and     r14d, 7Fh
 * 0000000140A04D97: mov     r10d, 1
 * 0000000140A04D9D: cmp     r14d, 8
 * 0000000140A04DA1: jb      short loc_140A04DC0
 * 0000000140A04DA3: mov     edx, r14d
 * 0000000140A04DA6: shr     rdx, 3
 * 0000000140A04DAA: xor     rbx, [r8]
 * 0000000140A04DAD: mov     ecx, r9d
 * 0000000140A04DB0: rol     rbx, cl
 * 0000000140A04DB3: add     r8, 8
 * 0000000140A04DB7: add     r14d, 0FFFFFFF8h
 * 0000000140A04DBB: sub     rdx, r10
 * 0000000140A04DBE: jnz     short loc_140A04DAA
 * 0000000140A04DC0: xor     r15d, r15d
 * 0000000140A04DC3: test    r14d, r14d
 * 0000000140A04DC6: jz      short loc_140A04DE6
 * 0000000140A04DC8: mov     r15d, 0FFFFFFFFh
 * 0000000140A04DCE: movzx   eax, byte ptr [r8]
 * 0000000140A04DD2: mov     ecx, r9d
 * 0000000140A04DD5: xor     rbx, rax
 * 0000000140A04DD8: add     r8, r10
 * 0000000140A04DDB: rol     rbx, cl
 * 0000000140A04DDE: add     r14d, r15d
 * 0000000140A04DE1: jnz     short loc_140A04DCE
 * 0000000140A04DE3: xor     r15d, r15d
 * 0000000140A04DE6: mov     rax, rbx
 * 0000000140A04DE9: jmp     short loc_140A04DED
 * 0000000140A04DEB: xor     ebx, eax
 * 0000000140A04DED: shr     rax, 1Fh
 * 0000000140A04DF1: test    rax, rax
 * 0000000140A04DF4: jnz     short loc_140A04DEB
 * 0000000140A04DF6: mov     rax, [rsi+198h]
 * 0000000140A04DFD: lea     rcx, [rbp+0BE0h+var_2B0]
 * 0000000140A04E04: btr     ebx, 1Fh
 * 0000000140A04E08: call    KeGuardDispatchICall
 * 0000000140A04E0D: mov     r9, [rsp+0CE0h+var_C90]
 * 0000000140A04E12: mov     r11d, 40h ; '@'
 * 0000000140A04E18: cmp     ebx, [r9+14h]
 * 0000000140A04E1C: jnz     short loc_140A04E3C
 * 0000000140A04E1E: movzx   eax, word ptr [r9+2Ch]
 * 0000000140A04E23: cmp     [rbp+0BE0h+var_998], ax
 * 0000000140A04E2A: jnz     short loc_140A04E3C
 * 0000000140A04E2C: test    r12w, r12w
 * 0000000140A04E30: jnz     short loc_140A04E3C
 * 0000000140A04E32: cmp     r13w, r11w
 * 0000000140A04E36: jz      loc_140A04F36
 * 0000000140A04E3C: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A04E46: mov     r10d, 1
 * 0000000140A04E4C: jz      short loc_140A04E97
 * 0000000140A04E4E: mov     rcx, [rsi+0A80h]
 * 0000000140A04E55: lea     edx, [r10+2Fh]
 * 0000000140A04E59: lea     r8d, [r10+5]
 * 0000000140A04E5D: mov     rax, [r9]
 * 0000000140A04E60: add     edx, 0FFFFFFF8h
 * 0000000140A04E63: mov     [rcx], rax
 * 0000000140A04E66: add     r9, 8
 * 0000000140A04E6A: add     rcx, 8
 * 0000000140A04E6E: sub     r8, r10
 * 0000000140A04E71: jnz     short loc_140A04E5D
 * 0000000140A04E73: test    edx, edx
 * 0000000140A04E75: jz      short loc_140A04E90
 * 0000000140A04E77: mov     r15d, 0FFFFFFFFh
 * 0000000140A04E7D: mov     al, [r9]
 * 0000000140A04E80: add     r9, r10
 * 0000000140A04E83: mov     [rcx], al
 * 0000000140A04E85: add     rcx, r10
 * 0000000140A04E88: add     edx, r15d
 * 0000000140A04E8B: jnz     short loc_140A04E7D
 * 0000000140A04E8D: xor     r15d, r15d
 * 0000000140A04E90: mov     r9, [rsi+0A80h]
 * 0000000140A04E97: mov     rax, [rbp+0BE0h+var_996]
 * 0000000140A04E9E: mov     ecx, ebx
 * 0000000140A04EA0: mov     [r9+18h], rax
 * 0000000140A04EA4: mov     [r9+20h], rcx
 * 0000000140A04EA8: test    r12w, r12w
 * 0000000140A04EAC: jz      short loc_140A04EB4
 * 0000000140A04EAE: movzx   eax, r12w
 * 0000000140A04EB2: jmp     short loc_140A04EBE
 * 0000000140A04EB4: cmp     r13w, r11w
 * 0000000140A04EB8: jz      short loc_140A04EC2
 * 0000000140A04EBA: movzx   eax, r13w
 * 0000000140A04EBE: mov     [r9+18h], rax
 * 0000000140A04EC2: mov     eax, [rsi+8F8h]
 * 0000000140A04EC8: mov     edx, [r9+14h]
 * 0000000140A04ECC: test    eax, eax
 * 0000000140A04ECE: jnz     short loc_140A04EE4
 * 0000000140A04ED0: mov     rax, [rsi+590h]
 * 0000000140A04ED7: xor     rcx, rdx
 * 0000000140A04EDA: mov     [rax+18h], rcx
 * 0000000140A04EDE: mov     eax, [rsi+8F8h]
 * 0000000140A04EE4: mov     rcx, [r9+8]
 * 0000000140A04EE8: test    eax, eax
 * 0000000140A04EEA: jnz     short loc_140A04F36
 * 0000000140A04EEC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A04EF6: add     rax, rsi
 * 0000000140A04EF9: mov     [rsi+900h], rax
 * 0000000140A04F00: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A04F0A: add     rax, r9
 * 0000000140A04F0D: mov     [rsi+908h], rax
 * 0000000140A04F14: movsxd  rax, dword ptr [r9]
 * 0000000140A04F17: mov     [rsi+910h], rax
 * 0000000140A04F1E: mov     [rsi+918h], rcx
 * 0000000140A04F25: mov     [rsi+8F8h], r10d
 * 0000000140A04F2C: xor     edx, edx
 * 0000000140A04F2E: mov     rcx, rsi
 * 0000000140A04F31: call    $$b8
 * 0000000140A04F36: mov     r14d, 8000h
 * 0000000140A04F3C: add     [rsi+828h], r14d
 * 0000000140A04F43: jmp     loc_1409FA321
 * 0000000140A04F48: mov     edx, [r13+28h]
 * 0000000140A04F4C: lea     rcx, [rbp+0BE0h+var_2A0]
 * 0000000140A04F53: mov     rax, [rsi+1A0h]
 * 0000000140A04F5A: xor     r15d, r15d
 * 0000000140A04F5D: mov     dword ptr [rbp+0BE0h+var_BF8], r15d
 * 0000000140A04F61: call    KeGuardDispatchICall
 * 0000000140A04F66: mov     rax, [rsi+1D0h]
 * 0000000140A04F6D: lea     rdx, [rbp+0BE0h+var_290]
 * 0000000140A04F74: lea     rcx, [rbp+0BE0h+var_2A0]
 * 0000000140A04F7B: call    KeGuardDispatchICall
 * 0000000140A04F80: lea     rdx, [rbp+0BE0h+var_900]
 * 0000000140A04F87: lea     rcx, [rbp+0BE0h+var_180]
 * 0000000140A04F8E: call    KiGetGdtIdt
 * 0000000140A04F93: mov     rcx, [rbp+0BE0h+var_8FE]
 * 0000000140A04F9A: mov     edi, r15d
 * 0000000140A04F9D: mov     [rsp+0CE0h+var_C70], rcx
 * 0000000140A04FA2: add     rcx, 4
 * 0000000140A04FA6: mov     [rsp+0CE0h+var_C88], rcx
 * 0000000140A04FAB: mov     rax, [rsi+8C8h]
 * 0000000140A04FB2: mov     r10, r15
 * 0000000140A04FB5: mov     [rbp+0BE0h+var_B00], rax
 * 0000000140A04FBC: mov     r14, r15
 * 0000000140A04FBF: mov     r8, [rsi+8D0h]
 * 0000000140A04FC6: mov     r12d, [rsi+8ACh]
 * 0000000140A04FCD: mov     r13d, [rsi+8B0h]
 * 0000000140A04FD4: mov     [rbp+0BE0h+var_C60], r8
 * 0000000140A04FD8: mov     [rsp+0CE0h+BugCheckParameter2], r15
 * 0000000140A04FDD: mov     [rbp+0BE0h+var_C50], r15
 * 0000000140A04FE1: mov     r15, cr8
 * 0000000140A04FE5: mov     cr8, rbx
 * 0000000140A04FE9: movzx   eax, word ptr [rcx-4]
 * 0000000140A04FED: movzx   r9d, word ptr [rcx]
 * 0000000140A04FF1: mov     word ptr [rbp+0BE0h+var_BD8], ax
 * 0000000140A04FF5: movzx   eax, word ptr [rcx+2]
 * 0000000140A04FF9: mov     word ptr [rbp+0BE0h+var_BD8+2], ax
 * 0000000140A04FFD: mov     eax, [rcx+4]
 * 0000000140A05000: mov     rcx, [rsi+618h]
 * 0000000140A05007: mov     dword ptr [rbp+0BE0h+var_BD8+4], eax
 * 0000000140A0500A: mov     rbx, [rbp+0BE0h+var_BD8]
 * 0000000140A0500E: mov     eax, edi
 * 0000000140A05010: mov     word ptr [rbp+0BE0h+arg_8], r9w
 * 0000000140A05018: lea     rdx, [rcx+rax*8]
 * 0000000140A0501C: cmp     rbx, rdx
 * 0000000140A0501F: jnz     short loc_140A05089
 * 0000000140A05021: mov     eax, 6000h
 * 0000000140A05026: test    ax, r9w
 * 0000000140A0502A: jz      short loc_140A0503C
 * 0000000140A0502C: movzx   eax, r15b
 * 0000000140A05030: mov     cr8, rax
 * 0000000140A05034: xor     r15d, r15d
 * 0000000140A05037: jmp     loc_140A05200
 * 0000000140A0503C: mov     rax, [rsi+470h]
 * 0000000140A05043: mov     ecx, edi
 * 0000000140A05045: call    KeGuardDispatchICall
 * 0000000140A0504A: mov     r14, [rax]
 * 0000000140A0504D: test    r14, r14
 * 0000000140A05050: jz      short loc_140A0507B
 * 0000000140A05052: mov     r12, [r12+r14]
 * 0000000140A05056: mov     [rsp+0CE0h+BugCheckParameter2], r12
 * 0000000140A0505B: cmp     edi, 30h ; '0'
 * 0000000140A0505E: jnb     short loc_140A05070
 * 0000000140A05060: movzx   eax, r15b
 * 0000000140A05064: mov     cr8, rax
 * 0000000140A05068: xor     r15d, r15d
 * 0000000140A0506B: jmp     loc_140A051FB
 * 0000000140A05070: mov     r13, [r13+r14+0]
 * 0000000140A05075: mov     r8, [rbp+0BE0h+var_C60]
 * 0000000140A05079: jmp     short loc_140A05091
 * 0000000140A0507B: mov     r8, [rbp+0BE0h+var_C60]
 * 0000000140A0507F: or      r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140A05083: mov     r13, [rbp+0BE0h+var_C50]
 * 0000000140A05087: jmp     short loc_140A0508C
 * 0000000140A05089: mov     r13, r10
 * 0000000140A0508C: mov     r12, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A05091: movzx   eax, r15b
 * 0000000140A05095: mov     cr8, rax
 * 0000000140A05099: xor     r15d, r15d
 * 0000000140A0509C: test    r14, r14
 * 0000000140A0509F: jnz     short loc_140A050EA
 * 0000000140A050A1: mov     rdx, [rbp+0BE0h+var_B00]
 * 0000000140A050A8: cmp     rbx, rdx
 * 0000000140A050AB: jb      loc_140A051FB
 * 0000000140A050B1: cmp     rbx, r8
 * 0000000140A050B4: ja      loc_140A051FB
 * 0000000140A050BA: mov     r8d, dword ptr [rbp+0BE0h+var_BD8]
 * 0000000140A050BE: mov     rcx, [rsi+8D8h]
 * 0000000140A050C5: sub     r8d, edx
 * 0000000140A050C8: mov     rax, [rsi+210h]
 * 0000000140A050CF: call    KeGuardDispatchICall
 * 0000000140A050D4: test    rax, rax
 * 0000000140A050D7: jz      loc_140A051FB
 * 0000000140A050DD: mov     eax, [rax+24h]
 * 0000000140A050E0: bt      eax, 19h
 * 0000000140A050E4: jb      loc_140A051FB
 * 0000000140A050EA: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A050EF: mov     ecx, 10h
 * 0000000140A050F4: cmp     [rax-2], cx
 * 0000000140A050F8: jnz     loc_140A051FB
 * 0000000140A050FE: movzx   ecx, word ptr [rax]
 * 0000000140A05101: mov     edx, 1F00h
 * 0000000140A05106: movzx   eax, cx
 * 0000000140A05109: and     ax, dx
 * 0000000140A0510C: mov     edx, 0E00h
 * 0000000140A05111: cmp     ax, dx
 * 0000000140A05114: jnz     loc_140A051FB
 * 0000000140A0511A: mov     eax, 8000h
 * 0000000140A0511F: test    ax, cx
 * 0000000140A05122: jz      loc_140A051FB
 * 0000000140A05128: mov     rax, [rsi+260h]
 * 0000000140A0512F: lea     rdx, [rbp+0BE0h+var_B00]
 * 0000000140A05136: xor     r8d, r8d
 * 0000000140A05139: mov     rcx, rbx
 * 0000000140A0513C: call    KeGuardDispatchICall
 * 0000000140A05141: test    rax, rax
 * 0000000140A05144: jz      short loc_140A0516A
 * 0000000140A05146: mov     eax, [rax]
 * 0000000140A05148: mov     rcx, [rbp+0BE0h+var_B00]
 * 0000000140A0514F: add     rax, rcx
 * 0000000140A05152: cmp     rax, rbx
 * 0000000140A05155: jnz     short loc_140A0516A
 * 0000000140A05157: cmp     rcx, [rsi+8C8h]
 * 0000000140A0515E: jnz     short loc_140A0516A
 * 0000000140A05160: test    r14, r14
 * 0000000140A05163: jnz     short loc_140A05173
 * 0000000140A05165: jmp     loc_140A0522F
 * 0000000140A0516A: test    r14, r14
 * 0000000140A0516D: jz      loc_140A051FB
 * 0000000140A05173: mov     eax, 6000h
 * 0000000140A05178: test    word ptr [rbp+0BE0h+arg_8], ax
 * 0000000140A0517F: jnz     short loc_140A051FB
 * 0000000140A05181: cmp     r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140A05185: jz      loc_140A0522F
 * 0000000140A0518B: mov     rax, [rsi+260h]
 * 0000000140A05192: lea     rdx, [rbp+0BE0h+var_B00]
 * 0000000140A05199: xor     r8d, r8d
 * 0000000140A0519C: mov     rcx, r12
 * 0000000140A0519F: call    KeGuardDispatchICall
 * 0000000140A051A4: test    rax, rax
 * 0000000140A051A7: jz      short loc_140A051FB
 * 0000000140A051A9: mov     eax, [rax]
 * 0000000140A051AB: mov     rdx, [rbp+0BE0h+var_B00]
 * 0000000140A051B2: add     rax, rdx
 * 0000000140A051B5: cmp     rax, r12
 * 0000000140A051B8: jnz     short loc_140A051FB
 * 0000000140A051BA: cmp     rdx, [rsi+8C8h]
 * 0000000140A051C1: jnz     short loc_140A051FB
 * 0000000140A051C3: mov     rcx, [rsi+8D8h]
 * 0000000140A051CA: mov     r8d, r12d
 * 0000000140A051CD: mov     rax, [rsi+210h]
 * 0000000140A051D4: sub     r8d, edx
 * 0000000140A051D7: call    KeGuardDispatchICall
 * 0000000140A051DC: test    rax, rax
 * 0000000140A051DF: jz      short loc_140A051FB
 * 0000000140A051E1: mov     eax, [rax+24h]
 * 0000000140A051E4: bt      eax, 19h
 * 0000000140A051E8: jb      short loc_140A051FB
 * 0000000140A051EA: cmp     edi, 0FEh
 * 0000000140A051F0: jnz     short loc_140A0522F
 * 0000000140A051F2: cmp     r13, [rsi+8B8h]
 * 0000000140A051F9: jz      short loc_140A0522F
 * 0000000140A051FB: mov     r10, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A05200: mov     rax, [rsi+590h]
 * 0000000140A05207: mov     [rax], rbx
 * 0000000140A0520A: mov     dword ptr [rax+10h], 80h
 * 0000000140A05211: test    r10, r10
 * 0000000140A05214: jz      short loc_140A05228
 * 0000000140A05216: mov     rax, [rsi+590h]
 * 0000000140A0521D: mov     [rax+8], r10
 * 0000000140A05221: mov     dword ptr [rax+14h], 80h
 * 0000000140A05228: mov     dword ptr [rbp+0BE0h+var_BF8], 1
 * 0000000140A0522F: mov     rcx, [rsp+0CE0h+var_C88]
 * 0000000140A05234: inc     edi
 * 0000000140A05236: add     rcx, 10h
 * 0000000140A0523A: mov     ebx, 0Fh
 * 0000000140A0523F: mov     [rsp+0CE0h+var_C88], rcx
 * 0000000140A05244: cmp     edi, 0FFh
 * 0000000140A0524A: jbe     loc_140A04FAB
 * 0000000140A05250: lea     ecx, [rbx-0Eh]
 * 0000000140A05253: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0525A: test    [rsi+87Bh], cl
 * 0000000140A05260: jz      loc_140A05334
 * 0000000140A05266: cli
 * 0000000140A05267: mov     r14d, 0C0000082h
 * 0000000140A0526D: mov     ecx, r14d
 * 0000000140A05270: rdmsr
 * 0000000140A05272: shl     rdx, 20h
 * 0000000140A05276: or      rax, rdx
 * 0000000140A05279: lea     rdx, [rsi+87Ah]
 * 0000000140A05280: mov     rbx, rax
 * 0000000140A05283: mov     rax, rdx
 * 0000000140A05286: shr     rdx, 20h
 * 0000000140A0528A: wrmsr
 * 0000000140A0528C: mov     r13d, 20000h
 * 0000000140A05292: test    [rsi+994h], r13d
 * 0000000140A05299: jnz     short loc_140A052DD
 * 0000000140A0529B: mov     rdx, gs:20h
 * 0000000140A052A4: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A052AE: mov     rax, [rsi+4C0h]
 * 0000000140A052B5: add     rcx, rsi
 * 0000000140A052B8: mov     [rax], rcx
 * 0000000140A052BB: mov     rax, [rsi+4C8h]
 * 0000000140A052C2: mov     [rax], rdx
 * 0000000140A052C5: mov     rax, [rsi+4D0h]
 * 0000000140A052CC: mov     [rax], r14
 * 0000000140A052CF: mov     rax, [rsi+4D8h]
 * 0000000140A052D6: mov     qword ptr [rax], 112h
 * 0000000140A052DD: lea     rax, [rsi+87Ch]
 * 0000000140A052E4: call    KeGuardDispatchICall
 * 0000000140A052E9: test    [rsi+994h], r13d
 * 0000000140A052F0: jnz     short loc_140A05324
 * 0000000140A052F2: mov     rax, [rsi+4C0h]
 * 0000000140A052F9: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A05303: mov     [rax], rcx
 * 0000000140A05306: mov     rax, [rsi+4C8h]
 * 0000000140A0530D: mov     [rax], r15
 * 0000000140A05310: mov     rax, [rsi+4D0h]
 * 0000000140A05317: mov     [rax], r15
 * 0000000140A0531A: mov     rax, [rsi+4D8h]
 * 0000000140A05321: mov     [rax], r15
 * 0000000140A05324: mov     rdx, rbx
 * 0000000140A05327: mov     rax, rbx
 * 0000000140A0532A: shr     rdx, 20h
 * 0000000140A0532E: mov     ecx, r14d
 * 0000000140A05331: wrmsr
 * 0000000140A05333: sti
 * 0000000140A05334: mov     r15, [rsp+0CE0h+var_C70]
 * 0000000140A05339: add     dword ptr [rsi+828h], 350h
 * 0000000140A05343: mov     r8, r15
 * 0000000140A05346: mov     ebx, [rsi+828h]
 * 0000000140A0534C: mov     rax, r15
 * 0000000140A0534F: mov     r9d, [rsi+814h]
 * 0000000140A05356: mov     r11, [rsi+818h]
 * 0000000140A0535D: lea     rcx, [r15+350h]
 * 0000000140A05364: cmp     r15, rcx
 * 0000000140A05367: jnb     short loc_140A05379
 * 0000000140A05369: mov     edx, 40h ; '@'
 * 0000000140A0536E: prefetchnta byte ptr [rax]
 * 0000000140A05371: add     rax, rdx
 * 0000000140A05374: cmp     rax, rcx
 * 0000000140A05377: jb      short loc_140A0536E
 * 0000000140A05379: mov     r10d, 6
 * 0000000140A0537F: mov     r14, r11
 * 0000000140A05382: mov     rsi, 7010008004002001h
 * 0000000140A0538C: lea     r13d, [r10+2]
 * 0000000140A05390: mov     rdx, r13
 * 0000000140A05393: mov     r12d, 1
 * 0000000140A05399: mov     rax, [r8]
 * 0000000140A0539C: mov     ecx, r9d
 * 0000000140A0539F: xor     rax, r14
 * 0000000140A053A2: add     r8, r13
 * 0000000140A053A5: rol     rax, cl
 * 0000000140A053A8: mov     r14, [r8]
 * 0000000140A053AB: add     r8, r13
 * 0000000140A053AE: xor     r14, rax
 * 0000000140A053B1: rol     r14, cl
 * 0000000140A053B4: sub     rdx, r12
 * 0000000140A053B7: jnz     short loc_140A05399
 * 0000000140A053B9: mov     rcx, r8
 * 0000000140A053BC: sub     rcx, r15
 * 0000000140A053BF: xor     rcx, r11
 * 0000000140A053C2: mov     rax, rcx
 * 0000000140A053C5: rol     rax, 11h
 * 0000000140A053C9: xor     rcx, rax
 * 0000000140A053CC: mov     rax, rsi
 * 0000000140A053CF: mul     rcx
 * 0000000140A053D2: xor     r9d, eax
 * 0000000140A053D5: mov     [rbp+0BE0h+var_598], rdx
 * 0000000140A053DC: xor     r9d, edx
 * 0000000140A053DF: mov     rax, r12
 * 0000000140A053E2: and     r9d, 3Fh
 * 0000000140A053E6: cmovz   r9d, eax
 * 0000000140A053EA: mov     eax, 0FFFFFFFFh
 * 0000000140A053EF: add     r10d, eax
 * 0000000140A053F2: jnz     short loc_140A05390
 * 0000000140A053F4: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A053F9: lea     edx, [r10+50h]
 * 0000000140A053FD: mov     r12d, dword ptr [rbp+0BE0h+var_BF8]
 * 0000000140A05401: lea     r10d, [rdx-46h]
 * 0000000140A05405: lea     r11d, [rdx-4Fh]
 * 0000000140A05409: xor     r14, [r8]
 * 0000000140A0540C: mov     ecx, r9d
 * 0000000140A0540F: rol     r14, cl
 * 0000000140A05412: add     r8, r13
 * 0000000140A05415: add     edx, 0FFFFFFF8h
 * 0000000140A05418: sub     r10, r11
 * 0000000140A0541B: jnz     short loc_140A05409
 * 0000000140A0541D: test    edx, edx
 * 0000000140A0541F: jz      short loc_140A05439
 * 0000000140A05421: mov     r10, rax
 * 0000000140A05424: movzx   eax, byte ptr [r8]
 * 0000000140A05428: mov     ecx, r9d
 * 0000000140A0542B: xor     r14, rax
 * 0000000140A0542E: add     r8, r11
 * 0000000140A05431: rol     r14, cl
 * 0000000140A05434: add     edx, r10d
 * 0000000140A05437: jnz     short loc_140A05424
 * 0000000140A05439: mov     rax, r14
 * 0000000140A0543C: jmp     short loc_140A05441
 * 0000000140A0543E: xor     r14d, eax
 * 0000000140A05441: shr     rax, 1Fh
 * 0000000140A05445: test    rax, rax
 * 0000000140A05448: jnz     short loc_140A0543E
 * 0000000140A0544A: lea     eax, [rbx+10h]
 * 0000000140A0544D: btr     r14d, 1Fh
 * 0000000140A05452: mov     [rsi+828h], eax
 * 0000000140A05458: lea     rdx, [r15+0E10h]
 * 0000000140A0545F: mov     r9d, [rsi+814h]
 * 0000000140A05466: lea     rcx, [r15+0E20h]
 * 0000000140A0546D: mov     rbx, [rsi+818h]
 * 0000000140A05474: mov     rax, rdx
 * 0000000140A05477: cmp     rdx, rcx
 * 0000000140A0547A: jnb     short loc_140A0548D
 * 0000000140A0547C: mov     r8d, 40h ; '@'
 * 0000000140A05482: prefetchnta byte ptr [rax]
 * 0000000140A05485: add     rax, r8
 * 0000000140A05488: cmp     rax, rcx
 * 0000000140A0548B: jb      short loc_140A05482
 * 0000000140A0548D: mov     eax, 2
 * 0000000140A05492: lea     r8d, [rax+0Eh]
 * 0000000140A05496: xor     rbx, [rdx]
 * 0000000140A05499: mov     ecx, r9d
 * 0000000140A0549C: rol     rbx, cl
 * 0000000140A0549F: add     rdx, r13
 * 0000000140A054A2: add     r8d, 0FFFFFFF8h
 * 0000000140A054A6: sub     rax, r11
 * 0000000140A054A9: jnz     short loc_140A05496
 * 0000000140A054AB: xor     r15d, r15d
 * 0000000140A054AE: test    r8d, r8d
 * 0000000140A054B1: jz      short loc_140A054D0
 * 0000000140A054B3: mov     r15d, 0FFFFFFFFh
 * 0000000140A054B9: movzx   eax, byte ptr [rdx]
 * 0000000140A054BC: mov     ecx, r9d
 * 0000000140A054BF: xor     rbx, rax
 * 0000000140A054C2: add     rdx, r11
 * 0000000140A054C5: rol     rbx, cl
 * 0000000140A054C8: add     r8d, r15d
 * 0000000140A054CB: jnz     short loc_140A054B9
 * 0000000140A054CD: xor     r15d, r15d
 * 0000000140A054D0: mov     rax, rbx
 * 0000000140A054D3: jmp     short loc_140A054D7
 * 0000000140A054D5: xor     ebx, eax
 * 0000000140A054D7: shr     rax, 1Fh
 * 0000000140A054DB: test    rax, rax
 * 0000000140A054DE: jnz     short loc_140A054D5
 * 0000000140A054E0: mov     rax, [rsi+198h]
 * 0000000140A054E7: lea     rcx, [rbp+0BE0h+var_290]
 * 0000000140A054EE: btr     ebx, 1Fh
 * 0000000140A054F2: call    KeGuardDispatchICall
 * 0000000140A054F7: mov     r8, [rsp+0CE0h+var_C90]
 * 0000000140A054FC: mov     edx, [r8+14h]
 * 0000000140A05500: cmp     r14d, edx
 * 0000000140A05503: jnz     short loc_140A05524
 * 0000000140A05505: mov     eax, ebx
 * 0000000140A05507: cmp     rax, [r8+18h]
 * 0000000140A0550B: jnz     short loc_140A05524
 * 0000000140A0550D: movzx   eax, word ptr [r8+2Ch]
 * 0000000140A05512: cmp     [rbp+0BE0h+var_900], ax
 * 0000000140A05519: jnz     short loc_140A05524
 * 0000000140A0551B: test    r12d, r12d
 * 0000000140A0551E: jz      loc_140A055BA
 * 0000000140A05524: test    r12d, r12d
 * 0000000140A05527: jnz     short loc_140A0555F
 * 0000000140A05529: mov     eax, ebx
 * 0000000140A0552B: cmp     rax, [r8+18h]
 * 0000000140A0552F: jnz     short loc_140A05542
 * 0000000140A05531: cmp     [rsi+8F8h], r15d
 * 0000000140A05538: jnz     short loc_140A0555F
 * 0000000140A0553A: mov     ecx, r14d
 * 0000000140A0553D: xor     rcx, rdx
 * 0000000140A05540: jmp     short loc_140A05554
 * 0000000140A05542: mov     eax, [r8+18h]
 * 0000000140A05546: cmp     [rsi+8F8h], r15d
 * 0000000140A0554D: jnz     short loc_140A0555F
 * 0000000140A0554F: mov     ecx, ebx
 * 0000000140A05551: xor     rcx, rax
 * 0000000140A05554: mov     rax, [rsi+590h]
 * 0000000140A0555B: mov     [rax+18h], rcx
 * 0000000140A0555F: mov     rcx, [r8+8]
 * 0000000140A05563: cmp     [rsi+8F8h], r15d
 * 0000000140A0556A: jnz     short loc_140A055BA
 * 0000000140A0556C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A05576: xor     edx, edx
 * 0000000140A05578: add     rax, rsi
 * 0000000140A0557B: mov     [rsi+900h], rax
 * 0000000140A05582: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0558C: add     rax, r8
 * 0000000140A0558F: mov     [rsi+908h], rax
 * 0000000140A05596: movsxd  rax, dword ptr [r8]
 * 0000000140A05599: mov     [rsi+910h], rax
 * 0000000140A055A0: mov     eax, 1
 * 0000000140A055A5: mov     [rsi+918h], rcx
 * 0000000140A055AC: mov     rcx, rsi
 * 0000000140A055AF: mov     [rsi+8F8h], eax
 * 0000000140A055B5: call    $$b8
 * 0000000140A055BA: add     dword ptr [rsi+828h], 10000h
 * 0000000140A055C4: jmp     loc_1409FA31B
 * 0000000140A055C9: mov     edx, [r13+2Ch]
 * 0000000140A055CD: lea     rcx, [rbp+0BE0h+var_280]
 * 0000000140A055D4: mov     rax, [rsi+1A0h]
 * 0000000140A055DB: call    KeGuardDispatchICall
 * 0000000140A055E0: mov     rax, [rsi+1D0h]
 * 0000000140A055E7: lea     rdx, [rbp+0BE0h+var_270]
 * 0000000140A055EE: lea     rcx, [rbp+0BE0h+var_280]
 * 0000000140A055F5: call    KeGuardDispatchICall
 * 0000000140A055FA: xor     ecx, ecx
 * 0000000140A055FC: xgetbv
 * 0000000140A055FF: shl     rdx, 20h
 * 0000000140A05603: lea     rcx, [rbp+0BE0h+var_270]
 * 0000000140A0560A: or      rdx, rax
 * 0000000140A0560D: mov     rax, [rsi+198h]
 * 0000000140A05614: mov     rbx, rdx
 * 0000000140A05617: call    KeGuardDispatchICall
 * 0000000140A0561C: mov     r8, [r13+18h]
 * 0000000140A05620: xor     r15d, r15d
 * 0000000140A05623: mov     rdx, [r13+20h]
 * 0000000140A05627: and     r8, rbx
 * 0000000140A0562A: cmp     r8, rdx
 * 0000000140A0562D: jz      loc_1409FA31B
 * 0000000140A05633: mov     eax, [r13+28h]
 * 0000000140A05637: mov     ecx, [r13+2Ch]
 * 0000000140A0563B: shl     rcx, 20h
 * 0000000140A0563F: or      rcx, rax
 * 0000000140A05642: mov     eax, [rsi+8F8h]
 * 0000000140A05648: test    eax, eax
 * 0000000140A0564A: jnz     loc_1409FA31B
 * 0000000140A05650: mov     rax, [rsi+590h]
 * 0000000140A05657: xor     rdx, r8
 * 0000000140A0565A: mov     [rax+18h], rdx
 * 0000000140A0565E: mov     eax, [rsi+8F8h]
 * 0000000140A05664: jmp     loc_1409FA6A5
 * 0000000140A05669: mov     r13, rdx
 * 0000000140A0566C: mov     [rsi+820h], ecx
 * 0000000140A05672: cmp     [rbp+0BE0h+var_BC8], r15d
 * 0000000140A05676: jz      short loc_140A056E2
 * 0000000140A05678: mov     rcx, gs:20h
 * 0000000140A05681: mov     rax, [rsi+648h]
 * 0000000140A05688: mov     rdx, [rax+rcx]
 * 0000000140A0568C: lea     rcx, [rbp+0BE0h+var_260]
 * 0000000140A05693: mov     rax, [rsi+688h]
 * 0000000140A0569A: add     rdx, [rsi+6A8h]
 * 0000000140A056A1: mov     rbx, [rdx+rax]
 * 0000000140A056A5: mov     rax, [rsi+198h]
 * 0000000140A056AC: call    KeGuardDispatchICall
 * 0000000140A056B1: mov     rax, [rsi+440h]
 * 0000000140A056B8: lea     rcx, [rbp+0BE0h+var_6C0]
 * 0000000140A056BF: call    KeGuardDispatchICall
 * 0000000140A056C4: mov     rax, [rsi+3A8h]
 * 0000000140A056CB: mov     rcx, rbx
 * 0000000140A056CE: call    KeGuardDispatchICall
 * 0000000140A056D3: mov     rax, [rsi+3B8h]
 * 0000000140A056DA: mov     rcx, rbx
 * 0000000140A056DD: call    KeGuardDispatchICall
 * 0000000140A056E2: cmp     [rbp+0BE0h+var_C38], r15d
 * 0000000140A056E6: jz      loc_140A0577D
 * 0000000140A056EC: test    [rsi+990h], r14d
 * 0000000140A056F3: jnz     short loc_140A056FE
 * 0000000140A056F5: cmp     [rsi+8F8h], r15d
 * 0000000140A056FC: jnz     short loc_140A0577D
 * 0000000140A056FE: mov     rbx, [rsi+980h]
 * 0000000140A05705: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A0570C: mov     [rsi+980h], r15
 * 0000000140A05713: mov     rcx, rbx
 * 0000000140A05716: mov     rax, [rsi+298h]
 * 0000000140A0571D: call    KeGuardDispatchICall
 * 0000000140A05722: mov     eax, [rsi+990h]
 * 0000000140A05728: test    r13b, al
 * 0000000140A0572B: jz      short loc_140A05769
 * 0000000140A0572D: and     eax, 0FFFFFFFEh
 * 0000000140A05730: mov     rcx, rbx
 * 0000000140A05733: mov     [rsi+990h], eax
 * 0000000140A05739: mov     rax, [rsi+280h]
 * 0000000140A05740: call    KeGuardDispatchICall
 * 0000000140A05745: mov     rbx, rax
 * 0000000140A05748: test    rax, rax
 * 0000000140A0574B: jz      short loc_140A0575E
 * 0000000140A0574D: mov     rax, [rsi+2A0h]
 * 0000000140A05754: mov     rcx, rbx
 * 0000000140A05757: call    KeGuardDispatchICall
 * 0000000140A0575C: jmp     short loc_140A05763
 * 0000000140A0575E: mov     eax, 0FFFFFFFFh
 * 0000000140A05763: mov     [rsi+970h], eax
 * 0000000140A05769: test    rbx, rbx
 * 0000000140A0576C: jz      short loc_140A0577D
 * 0000000140A0576E: mov     rax, [rsi+288h]
 * 0000000140A05775: mov     rcx, rbx
 * 0000000140A05778: call    KeGuardDispatchICall
 * 0000000140A0577D: mov     eax, [rsi+990h]
 * 0000000140A05783: mov     ecx, 800008h
 * 0000000140A05788: and     eax, ecx
 * 0000000140A0578A: cmp     eax, ecx
 * 0000000140A0578C: jnz     loc_140A05B73
 * 0000000140A05792: mov     eax, [rsi+994h]
 * 0000000140A05798: mov     r11d, [rsi+808h]
 * 0000000140A0579F: and     eax, r13d
 * 0000000140A057A2: mov     rax, [rsi+0A70h]
 * 0000000140A057A9: mov     r10d, [rsi+7E4h]
 * 0000000140A057B0: mov     r12, [rsi+9F8h]
 * 0000000140A057B7: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A057BC: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 0000000140A057C3: jz      short loc_140A057CC
 * 0000000140A057C5: mov     r12, [rsi+5D8h]
 * 0000000140A057CC: mov     rax, [rsi+160h]
 * 0000000140A057D3: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A057D7: mov     rax, [rsi+2C8h]
 * 0000000140A057DE: mov     [rbp+0BE0h+var_BD8], rax
 * 0000000140A057E2: mov     rax, [rsi+340h]
 * 0000000140A057E9: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A057ED: rdtsc
 * 0000000140A057EF: shl     rdx, 20h
 * 0000000140A057F3: mov     rbx, 7010008004002001h
 * 0000000140A057FD: or      rax, rdx
 * 0000000140A05800: mov     r9, rdi
 * 0000000140A05803: mov     rcx, rax
 * 0000000140A05806: ror     rax, 3
 * 0000000140A0580A: xor     rcx, rax
 * 0000000140A0580D: mov     rax, rbx
 * 0000000140A05810: mul     rcx
 * 0000000140A05813: mov     rcx, rdx
 * 0000000140A05816: mov     [rbp+0BE0h+var_590], rdx
 * 0000000140A0581D: xor     rcx, rax
 * 0000000140A05820: mov     rax, 0ABCC77118461CEFDh
 * 0000000140A0582A: mul     rcx
 * 0000000140A0582D: shr     rdx, 1Ah
 * 0000000140A05831: imul    rax, rdx, 5F5E100h
 * 0000000140A05838: sub     rcx, rax
 * 0000000140A0583B: sub     r9, rcx
 * 0000000140A0583E: mov     [rbp+0BE0h+var_AA8], r9
 * 0000000140A05845: mov     r8d, [rsi+990h]
 * 0000000140A0584C: bt      r8d, 1Ah
 * 0000000140A05851: jnb     loc_140A058F4
 * 0000000140A05857: rdtsc
 * 0000000140A05859: shl     rdx, 20h
 * 0000000140A0585D: mov     r14, 0CCCCCCCCCCCCCCCDh
 * 0000000140A05867: or      rax, rdx
 * 0000000140A0586A: mov     rcx, rax
 * 0000000140A0586D: ror     rax, 3
 * 0000000140A05871: xor     rcx, rax
 * 0000000140A05874: mov     rax, rbx
 * 0000000140A05877: mul     rcx
 * 0000000140A0587A: mov     rcx, rdx
 * 0000000140A0587D: mov     [rbp+0BE0h+var_588], rdx
 * 0000000140A05884: xor     rcx, rax
 * 0000000140A05887: mov     rax, r14
 * 0000000140A0588A: mul     rcx
 * 0000000140A0588D: shr     rdx, 3
 * 0000000140A05891: lea     rax, [rdx+rdx*4]
 * 0000000140A05895: add     rax, rax
 * 0000000140A05898: sub     rcx, rax
 * 0000000140A0589B: mov     eax, 2
 * 0000000140A058A0: cmp     rcx, rax
 * 0000000140A058A3: jnb     short loc_140A058F4
 * 0000000140A058A5: rdtsc
 * 0000000140A058A7: shl     rdx, 20h
 * 0000000140A058AB: or      rax, rdx
 * 0000000140A058AE: mov     rcx, rax
 * 0000000140A058B1: ror     rax, 3
 * 0000000140A058B5: xor     rcx, rax
 * 0000000140A058B8: mov     rax, rbx
 * 0000000140A058BB: mul     rcx
 * 0000000140A058BE: mov     rcx, rdx
 * 0000000140A058C1: mov     [rbp+0BE0h+var_580], rdx
 * 0000000140A058C8: xor     rcx, rax
 * 0000000140A058CB: mov     rax, r14
 * 0000000140A058CE: mul     rcx
 * 0000000140A058D1: shr     rdx, 3
 * 0000000140A058D5: lea     rax, [rdx+rdx*4]
 * 0000000140A058D9: add     rax, rax
 * 0000000140A058DC: sub     rcx, rax
 * 0000000140A058DF: add     rcx, r13
 * 0000000140A058E2: imul    rcx, r9
 * 0000000140A058E6: mov     [rbp+0BE0h+var_AA8], rcx
 * 0000000140A058ED: mov     r8d, [rsi+990h]
 * 0000000140A058F4: mov     ecx, 2
 * 0000000140A058F9: mov     r14d, r11d
 * 0000000140A058FC: test    cl, r8b
 * 0000000140A058FF: mov     rbx, r15
 * 0000000140A05902: cmovnz  r14d, r10d
 * 0000000140A05906: test    r8b, r8b
 * 0000000140A05909: js      short loc_140A05916
 * 0000000140A0590B: xor     r9d, r9d
 * 0000000140A0590E: mov     r13d, r9d
 * 0000000140A05911: jmp     loc_140A059E0
 * 0000000140A05916: rdtsc
 * 0000000140A05918: shl     rdx, 20h
 * 0000000140A0591C: or      rax, rdx
 * 0000000140A0591F: mov     rcx, rax
 * 0000000140A05922: ror     rax, 3
 * 0000000140A05926: xor     rcx, rax
 * 0000000140A05929: mov     rax, 7010008004002001h
 * 0000000140A05933: mul     rcx
 * 0000000140A05936: mov     ecx, 154h
 * 0000000140A0593B: mov     rbx, rdx
 * 0000000140A0593E: mov     [rbp+0BE0h+var_578], rdx
 * 0000000140A05945: xor     rbx, rax
 * 0000000140A05948: mov     edx, 1
 * 0000000140A0594D: mov     r15, rbx
 * 0000000140A05950: lea     rax, [rsi+0A98h]
 * 0000000140A05957: xor     r15, rsi
 * 0000000140A0595A: mov     r10, rbx
 * 0000000140A0595D: xor     [rax], r10
 * 0000000140A05960: lea     rax, [rax-8]
 * 0000000140A05964: ror     r10, cl
 * 0000000140A05967: sub     ecx, edx
 * 0000000140A05969: jnz     short loc_140A0595D
 * 0000000140A0596B: lea     r8, [r11-0AA0h]
 * 0000000140A05972: shr     r8, 3
 * 0000000140A05976: test    r8d, r8d
 * 0000000140A05979: jz      short loc_140A059B4
 * 0000000140A0597B: movsxd  r9, r8d
 * 0000000140A0597E: add     rsi, 0A98h
 * 0000000140A05985: mov     rdi, rdx
 * 0000000140A05988: lea     r9, [rsi+r9*8]
 * 0000000140A0598C: mov     rdx, [r9]
 * 0000000140A0598F: lea     rax, [r15+r15]
 * 0000000140A05993: mov     ecx, r8d
 * 0000000140A05996: lea     r9, [r9-8]
 * 0000000140A0599A: ror     rdx, cl
 * 0000000140A0599D: mov     r15, rdx
 * 0000000140A059A0: xor     r15, rax
 * 0000000140A059A3: sub     r8d, edi
 * 0000000140A059A6: jnz     short loc_140A0598C
 * 0000000140A059A8: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A059AD: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A059B4: mov     ecx, r14d
 * 0000000140A059B7: lea     rdx, [rsi+r11]
 * 0000000140A059BB: sub     ecx, r11d
 * 0000000140A059BE: shr     ecx, 3
 * 0000000140A059C1: test    ecx, ecx
 * 0000000140A059C3: jz      short loc_140A059E0
 * 0000000140A059C5: lea     rdx, [rdx+rcx*8]
 * 0000000140A059C9: mov     eax, 1
 * 0000000140A059CE: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140A059D2: xor     [rdx], r10
 * 0000000140A059D5: lea     rdx, [rdx-8]
 * 0000000140A059D9: ror     r10, cl
 * 0000000140A059DC: sub     ecx, eax
 * 0000000140A059DE: jnz     short loc_140A059D2
 * 0000000140A059E0: mov     rax, [rsp+0CE0h+var_C70]
 * 0000000140A059E5: test    rax, rax
 * 0000000140A059E8: jz      short loc_140A05A0B
 * 0000000140A059EA: mov     r9, [rbp+0BE0h+var_C40]
 * 0000000140A059EE: lea     r8, [rbp+0BE0h+var_AA8]
 * 0000000140A059F5: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 0000000140A059FA: mov     edx, r14d
 * 0000000140A059FD: mov     rax, [rbp+0BE0h+var_C30]
 * 0000000140A05A01: mov     rcx, rsi
 * 0000000140A05A04: call    KeGuardDispatchICall
 * 0000000140A05A09: jmp     short loc_140A05A44
 * 0000000140A05A0B: xor     edx, edx
 * 0000000140A05A0D: test    r12, r12
 * 0000000140A05A10: jnz     short loc_140A05A26
 * 0000000140A05A12: mov     rax, [rbp+0BE0h+var_C40]
 * 0000000140A05A16: lea     r8, [rbp+0BE0h+var_AA8]
 * 0000000140A05A1D: xor     ecx, ecx
 * 0000000140A05A1F: call    KeGuardDispatchICall
 * 0000000140A05A24: jmp     short loc_140A05A44
 * 0000000140A05A26: lea     rax, [rbp+0BE0h+var_AA8]
 * 0000000140A05A2D: xor     r9d, r9d
 * 0000000140A05A30: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 0000000140A05A35: xor     r8d, r8d
 * 0000000140A05A38: mov     rax, [rbp+0BE0h+var_BD8]
 * 0000000140A05A3C: mov     rcx, r12
 * 0000000140A05A3F: call    KeGuardDispatchICall
 * 0000000140A05A44: test    r13d, r13d
 * 0000000140A05A47: jz      loc_140A05B70
 * 0000000140A05A4D: mov     r9, rbx
 * 0000000140A05A50: lea     rax, [rsi+0A98h]
 * 0000000140A05A57: xor     r9, rsi
 * 0000000140A05A5A: mov     ecx, 154h
 * 0000000140A05A5F: mov     r10d, 1
 * 0000000140A05A65: xor     [rax], rbx
 * 0000000140A05A68: lea     rax, [rax-8]
 * 0000000140A05A6C: ror     rbx, cl
 * 0000000140A05A6F: sub     ecx, r10d
 * 0000000140A05A72: jnz     short loc_140A05A65
 * 0000000140A05A74: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A05A7B: mov     r11d, r12d
 * 0000000140A05A7E: lea     r8, [r12-0AA0h]
 * 0000000140A05A86: shr     r8, 3
 * 0000000140A05A8A: test    r8d, r8d
 * 0000000140A05A8D: jz      short loc_140A05AC4
 * 0000000140A05A8F: movsxd  r10, r8d
 * 0000000140A05A92: lea     r11d, [rcx+1]
 * 0000000140A05A96: add     r10, 153h
 * 0000000140A05A9D: lea     r10, [rsi+r10*8]
 * 0000000140A05AA1: mov     rdx, [r10]
 * 0000000140A05AA4: lea     rax, [r9+r9]
 * 0000000140A05AA8: mov     ecx, r8d
 * 0000000140A05AAB: lea     r10, [r10-8]
 * 0000000140A05AAF: ror     rdx, cl
 * 0000000140A05AB2: mov     r9, rdx
 * 0000000140A05AB5: xor     r9, rax
 * 0000000140A05AB8: sub     r8d, r11d
 * 0000000140A05ABB: jnz     short loc_140A05AA1
 * 0000000140A05ABD: mov     r11, r12
 * 0000000140A05AC0: lea     r10d, [r8+1]
 * 0000000140A05AC4: sub     r14d, r12d
 * 0000000140A05AC7: lea     rcx, [rsi+r11]
 * 0000000140A05ACB: shr     r14d, 3
 * 0000000140A05ACF: test    r14d, r14d
 * 0000000140A05AD2: jz      short loc_140A05AF0
 * 0000000140A05AD4: mov     edx, r14d
 * 0000000140A05AD7: dec     rdx
 * 0000000140A05ADA: lea     rdx, [rcx+rdx*8]
 * 0000000140A05ADE: xor     [rdx], rbx
 * 0000000140A05AE1: mov     ecx, r14d
 * 0000000140A05AE4: ror     rbx, cl
 * 0000000140A05AE7: lea     rdx, [rdx-8]
 * 0000000140A05AEB: sub     r14d, r10d
 * 0000000140A05AEE: jnz     short loc_140A05ADE
 * 0000000140A05AF0: cmp     r9, r15
 * 0000000140A05AF3: jz      short loc_140A05B70
 * 0000000140A05AF5: mov     rax, [rsi+590h]
 * 0000000140A05AFC: mov     ecx, [rsi+7E4h]
 * 0000000140A05B02: mov     [rax], rsi
 * 0000000140A05B05: mov     [rax+10h], ecx
 * 0000000140A05B08: mov     eax, [rsi+8F8h]
 * 0000000140A05B0E: test    eax, eax
 * 0000000140A05B10: jnz     short loc_140A05B29
 * 0000000140A05B12: mov     rax, [rsi+590h]
 * 0000000140A05B19: mov     rcx, r9
 * 0000000140A05B1C: xor     rcx, r15
 * 0000000140A05B1F: mov     [rax+18h], rcx
 * 0000000140A05B23: mov     eax, [rsi+8F8h]
 * 0000000140A05B29: xor     r15d, r15d
 * 0000000140A05B2C: test    eax, eax
 * 0000000140A05B2E: jnz     short loc_140A05B73
 * 0000000140A05B30: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A05B3A: xor     edx, edx
 * 0000000140A05B3C: add     rax, rsi
 * 0000000140A05B3F: mov     rcx, rsi
 * 0000000140A05B42: mov     [rsi+900h], rax
 * 0000000140A05B49: mov     [rsi+908h], r15
 * 0000000140A05B50: mov     qword ptr [rsi+910h], 10Eh
 * 0000000140A05B5B: mov     [rsi+918h], r9
 * 0000000140A05B62: mov     [rsi+8F8h], r10d
 * 0000000140A05B69: call    $$b8
 * 0000000140A05B6E: jmp     short loc_140A05B73
 * 0000000140A05B70: xor     r15d, r15d
 * 0000000140A05B73: mov     eax, [rsi+958h]
 * 0000000140A05B79: mov     r12d, 1
 * 0000000140A05B7F: cmp     eax, 0Bh
 * 0000000140A05B82: jz      loc_140A0A51C
 * 0000000140A05B88: cmp     eax, r12d
 * 0000000140A05B8B: jz      loc_140A0A51C
 * 0000000140A05B91: cmp     [rsi+8F8h], r15d
 * 0000000140A05B98: jnz     loc_140A0A521
 * 0000000140A05B9E: mov     rax, [rsi+960h]
 * 0000000140A05BA5: mov     rcx, [rax]
 * 0000000140A05BA8: cmp     rcx, [rsi+968h]
 * 0000000140A05BAF: jz      loc_140A0A2D6
 * 0000000140A05BB5: mov     ecx, [rsi+970h]
 * 0000000140A05BBB: mov     r13d, 0FFFFFFFFh
 * 0000000140A05BC1: mov     rbx, rsi
 * 0000000140A05BC4: mov     [rbp+0BE0h+var_C60], rbx
 * 0000000140A05BC8: cmp     ecx, r13d
 * 0000000140A05BCB: jz      short loc_140A05BDE
 * 0000000140A05BCD: mov     rax, [rsi+278h]
 * 0000000140A05BD4: call    KeGuardDispatchICall
 * 0000000140A05BD9: mov     r14, rax
 * 0000000140A05BDC: jmp     short loc_140A05BE1
 * 0000000140A05BDE: mov     r14, r15
 * 0000000140A05BE1: test    r14, r14
 * 0000000140A05BE4: jnz     short loc_140A05C00
 * 0000000140A05BE6: mov     rax, [rsi+280h]
 * 0000000140A05BED: xor     ecx, ecx
 * 0000000140A05BEF: call    KeGuardDispatchICall
 * 0000000140A05BF4: mov     r14, rax
 * 0000000140A05BF7: test    rax, rax
 * 0000000140A05BFA: jz      loc_140A0A51C
 * 0000000140A05C00: mov     rax, [rsi+290h]
 * 0000000140A05C07: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A05C0E: mov     rcx, r14
 * 0000000140A05C11: call    KeGuardDispatchICall
 * 0000000140A05C16: xor     r12d, r12d
 * 0000000140A05C19: mov     r15d, eax
 * 0000000140A05C1C: test    eax, eax
 * 0000000140A05C1E: jns     short loc_140A05C31
 * 0000000140A05C20: mov     rax, [rsi+288h]
 * 0000000140A05C27: mov     rcx, r14
 * 0000000140A05C2A: call    KeGuardDispatchICall
 * 0000000140A05C2F: jmp     short loc_140A05C93
 * 0000000140A05C31: mov     [rsi+980h], r14
 * 0000000140A05C38: mov     rax, [rsi+2B8h]
 * 0000000140A05C3F: call    KeGuardDispatchICall
 * 0000000140A05C44: mov     r14, rax
 * 0000000140A05C47: mov     rax, [rsi+2D8h]
 * 0000000140A05C4E: mov     rcx, r14
 * 0000000140A05C51: call    KeGuardDispatchICall
 * 0000000140A05C56: mov     rdx, rax
 * 0000000140A05C59: test    rax, rax
 * 0000000140A05C5C: jnz     short loc_140A05C63
 * 0000000140A05C5E: lea     ecx, [rax+4]
 * 0000000140A05C61: jmp     short loc_140A05C75
 * 0000000140A05C63: mov     rax, [rsi+2E8h]
 * 0000000140A05C6A: mov     rcx, r14
 * 0000000140A05C6D: call    KeGuardDispatchICall
 * 0000000140A05C72: mov     ecx, r12d
 * 0000000140A05C75: mov     eax, [rsi+994h]
 * 0000000140A05C7B: mov     r15d, r12d
 * 0000000140A05C7E: and     eax, 0FFFFFFFBh
 * 0000000140A05C81: or      eax, ecx
 * 0000000140A05C83: mov     [rsi+994h], eax
 * 0000000140A05C89: add     dword ptr [rsi+828h], 10000h
 * 0000000140A05C93: test    r15d, r15d
 * 0000000140A05C96: js      loc_140A0A515
 * 0000000140A05C9C: mov     rax, [rsi+2A0h]
 * 0000000140A05CA3: mov     rcx, [rsi+980h]
 * 0000000140A05CAA: call    KeGuardDispatchICall
 * 0000000140A05CAF: xor     r15d, r15d
 * 0000000140A05CB2: test    eax, eax
 * 0000000140A05CB4: jnz     loc_140A0A2A7
 * 0000000140A05CBA: mov     rax, [rsi+578h]
 * 0000000140A05CC1: lea     ecx, [r15+20h]
 * 0000000140A05CC5: mov     rdx, [rsi+968h]
 * 0000000140A05CCC: lea     rbx, [rbp+0BE0h+var_858]
 * 0000000140A05CD3: add     rax, rcx
 * 0000000140A05CD6: mov     [rsp+0CE0h+var_C88], r15
 * 0000000140A05CDB: mov     [rbp+0BE0h+var_858], rax
 * 0000000140A05CE2: mov     rax, [rsi+570h]
 * 0000000140A05CE9: add     rax, rcx
 * 0000000140A05CEC: mov     [rbp+0BE0h+var_BD8], rdx
 * 0000000140A05CF0: mov     [rbp+0BE0h+var_850], rax
 * 0000000140A05CF7: mov     rax, [rsi+960h]
 * 0000000140A05CFE: mov     esi, r15d
 * 0000000140A05D01: mov     [rbp+0BE0h+var_C50], rax
 * 0000000140A05D05: mov     [rbp+0BE0h+var_C40], rbx
 * 0000000140A05D09: mov     [rbp+0BE0h+var_C30], 2
 * 0000000140A05D11: mov     r12, [rbx]
 * 0000000140A05D14: xor     rsi, rax
 * 0000000140A05D17: mov     r9d, esi
 * 0000000140A05D1A: mov     [rsp+0CE0h+var_C70], r12
 * 0000000140A05D1F: mov     r13d, 3Fh ; '?'
 * 0000000140A05D25: and     r9d, r13d
 * 0000000140A05D28: mov     rdi, [r12]
 * 0000000140A05D2C: mov     r15d, [r12+10h]
 * 0000000140A05D31: mov     r10, rdi
 * 0000000140A05D34: mov     r11d, r15d
 * 0000000140A05D37: mov     dword ptr [rbp+0BE0h+arg_8], r15d
 * 0000000140A05D3E: shl     r11d, 2
 * 0000000140A05D42: mov     rax, rdi
 * 0000000140A05D45: mov     ecx, r11d
 * 0000000140A05D48: add     rcx, rdi
 * 0000000140A05D4B: cmp     rdi, rcx
 * 0000000140A05D4E: jnb     short loc_140A05D5F
 * 0000000140A05D50: lea     r8d, [r13+1]
 * 0000000140A05D54: prefetchnta byte ptr [rax]
 * 0000000140A05D57: add     rax, r8
 * 0000000140A05D5A: cmp     rax, rcx
 * 0000000140A05D5D: jb      short loc_140A05D54
 * 0000000140A05D5F: mov     r14d, r11d
 * 0000000140A05D62: mov     r8, rsi
 * 0000000140A05D65: shr     r14d, 7
 * 0000000140A05D69: test    r14d, r14d
 * 0000000140A05D6C: jz      short loc_140A05DE7
 * 0000000140A05D6E: mov     ebx, 0FFFFFFFFh
 * 0000000140A05D73: mov     r12d, 1
 * 0000000140A05D79: mov     r15, 7010008004002001h
 * 0000000140A05D83: mov     eax, 8
 * 0000000140A05D88: xor     r8, [r10]
 * 0000000140A05D8B: mov     ecx, r9d
 * 0000000140A05D8E: rol     r8, cl
 * 0000000140A05D91: xor     r8, [r10+8]
 * 0000000140A05D95: add     r10, 10h
 * 0000000140A05D99: rol     r8, cl
 * 0000000140A05D9C: sub     rax, r12
 * 0000000140A05D9F: jnz     short loc_140A05D88
 * 0000000140A05DA1: mov     rcx, r10
 * 0000000140A05DA4: sub     rcx, rdi
 * 0000000140A05DA7: xor     rcx, rsi
 * 0000000140A05DAA: mov     rax, rcx
 * 0000000140A05DAD: rol     rax, 11h
 * 0000000140A05DB1: xor     rcx, rax
 * 0000000140A05DB4: mov     rax, r15
 * 0000000140A05DB7: mul     rcx
 * 0000000140A05DBA: xor     r9d, edx
 * 0000000140A05DBD: mov     [rbp+0BE0h+var_570], rdx
 * 0000000140A05DC4: xor     r9d, eax
 * 0000000140A05DC7: and     r9d, r13d
 * 0000000140A05DCA: cmovz   r9d, r12d
 * 0000000140A05DCE: add     r14d, ebx
 * 0000000140A05DD1: jnz     short loc_140A05D83
 * 0000000140A05DD3: mov     r15d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A05DDA: mov     r12, [rsp+0CE0h+var_C70]
 * 0000000140A05DDF: mov     rbx, [rbp+0BE0h+var_C40]
 * 0000000140A05DE3: mov     rdx, [rbp+0BE0h+var_BD8]
 * 0000000140A05DE7: and     r11d, 7Fh
 * 0000000140A05DEB: mov     r14d, 1
 * 0000000140A05DF1: cmp     r11d, 8
 * 0000000140A05DF5: jb      short loc_140A05E14
 * 0000000140A05DF7: mov     eax, r11d
 * 0000000140A05DFA: shr     rax, 3
 * 0000000140A05DFE: xor     r8, [r10]
 * 0000000140A05E01: mov     ecx, r9d
 * 0000000140A05E04: rol     r8, cl
 * 0000000140A05E07: add     r10, 8
 * 0000000140A05E0B: add     r11d, 0FFFFFFF8h
 * 0000000140A05E0F: sub     rax, r14
 * 0000000140A05E12: jnz     short loc_140A05DFE
 * 0000000140A05E14: test    r11d, r11d
 * 0000000140A05E17: jz      short loc_140A05E33
 * 0000000140A05E19: mov     esi, 0FFFFFFFFh
 * 0000000140A05E1E: movzx   eax, byte ptr [r10]
 * 0000000140A05E22: mov     ecx, r9d
 * 0000000140A05E25: xor     r8, rax
 * 0000000140A05E28: add     r10, r14
 * 0000000140A05E2B: rol     r8, cl
 * 0000000140A05E2E: add     r11d, esi
 * 0000000140A05E31: jnz     short loc_140A05E1E
 * 0000000140A05E33: mov     r12, [r12+18h]
 * 0000000140A05E38: xor     r8, rdx
 * 0000000140A05E3B: mov     r11d, r8d
 * 0000000140A05E3E: mov     r10, r12
 * 0000000140A05E41: and     r11d, r13d
 * 0000000140A05E44: mov     rax, r12
 * 0000000140A05E47: mov     r13d, r15d
 * 0000000140A05E4A: lea     rcx, [r12+r13]
 * 0000000140A05E4E: cmp     r12, rcx
 * 0000000140A05E51: jnb     short loc_140A05E63
 * 0000000140A05E53: mov     edx, 40h ; '@'
 * 0000000140A05E58: prefetchnta byte ptr [rax]
 * 0000000140A05E5B: add     rax, rdx
 * 0000000140A05E5E: cmp     rax, rcx
 * 0000000140A05E61: jb      short loc_140A05E58
 * 0000000140A05E63: mov     r14d, r15d
 * 0000000140A05E66: mov     r9, r8
 * 0000000140A05E69: shr     r14d, 7
 * 0000000140A05E6D: test    r14d, r14d
 * 0000000140A05E70: jz      short loc_140A05EE1
 * 0000000140A05E72: mov     rbx, 7010008004002001h
 * 0000000140A05E7C: mov     edx, 8
 * 0000000140A05E81: lea     esi, [rdx-7]
 * 0000000140A05E84: mov     rax, [r10]
 * 0000000140A05E87: mov     ecx, r11d
 * 0000000140A05E8A: xor     rax, r9
 * 0000000140A05E8D: mov     r9, [r10+8]
 * 0000000140A05E91: rol     rax, cl
 * 0000000140A05E94: add     r10, 10h
 * 0000000140A05E98: xor     r9, rax
 * 0000000140A05E9B: rol     r9, cl
 * 0000000140A05E9E: sub     rdx, rsi
 * 0000000140A05EA1: jnz     short loc_140A05E84
 * 0000000140A05EA3: mov     rcx, r10
 * 0000000140A05EA6: sub     rcx, r12
 * 0000000140A05EA9: xor     rcx, r8
 * 0000000140A05EAC: mov     rax, rcx
 * 0000000140A05EAF: rol     rax, 11h
 * 0000000140A05EB3: xor     rcx, rax
 * 0000000140A05EB6: mov     rax, rbx
 * 0000000140A05EB9: mul     rcx
 * 0000000140A05EBC: mov     [rbp+0BE0h+var_568], rdx
 * 0000000140A05EC3: xor     edx, eax
 * 0000000140A05EC5: xor     r11d, edx
 * 0000000140A05EC8: mov     rax, rsi
 * 0000000140A05ECB: and     r11d, 3Fh
 * 0000000140A05ECF: cmovz   r11d, eax
 * 0000000140A05ED3: mov     eax, 0FFFFFFFFh
 * 0000000140A05ED8: add     r14d, eax
 * 0000000140A05EDB: jnz     short loc_140A05E7C
 * 0000000140A05EDD: mov     rbx, [rbp+0BE0h+var_C40]
 * 0000000140A05EE1: and     r15d, 7Fh
 * 0000000140A05EE5: mov     r12d, 1
 * 0000000140A05EEB: cmp     r15d, 8
 * 0000000140A05EEF: jb      short loc_140A05F0E
 * 0000000140A05EF1: mov     edx, r15d
 * 0000000140A05EF4: shr     rdx, 3
 * 0000000140A05EF8: xor     r9, [r10]
 * 0000000140A05EFB: mov     ecx, r11d
 * 0000000140A05EFE: rol     r9, cl
 * 0000000140A05F01: add     r10, 8
 * 0000000140A05F05: add     r15d, 0FFFFFFF8h
 * 0000000140A05F09: sub     rdx, r12
 * 0000000140A05F0C: jnz     short loc_140A05EF8
 * 0000000140A05F0E: mov     r14d, 0FFFFFFFFh
 * 0000000140A05F14: test    r15d, r15d
 * 0000000140A05F17: jz      short loc_140A05F2E
 * 0000000140A05F19: movzx   eax, byte ptr [r10]
 * 0000000140A05F1D: mov     ecx, r11d
 * 0000000140A05F20: xor     r9, rax
 * 0000000140A05F23: add     r10, r12
 * 0000000140A05F26: rol     r9, cl
 * 0000000140A05F29: add     r15d, r14d
 * 0000000140A05F2C: jnz     short loc_140A05F19
 * 0000000140A05F2E: mov     rax, [rbp+0BE0h+var_C50]
 * 0000000140A05F32: add     rbx, 8
 * 0000000140A05F36: mov     rdx, [rbp+0BE0h+var_BD8]
 * 0000000140A05F3A: mov     rsi, rdi
 * 0000000140A05F3D: xor     rsi, r13
 * 0000000140A05F40: mov     [rbp+0BE0h+var_C40], rbx
 * 0000000140A05F44: xor     rsi, r9
 * 0000000140A05F47: sub     [rbp+0BE0h+var_C30], r12
 * 0000000140A05F4B: jnz     loc_140A05D11
 * 0000000140A05F51: mov     [rsp+0CE0h+var_C88], rsi
 * 0000000140A05F56: lea     rdx, [rbp+0BE0h+var_980]
 * 0000000140A05F5D: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A05F62: mov     rcx, rdi
 * 0000000140A05F65: mov     rax, [rsi+208h]
 * 0000000140A05F6C: call    KeGuardDispatchICall
 * 0000000140A05F71: mov     rbx, [rbp+0BE0h+var_C60]
 * 0000000140A05F75: xor     r15d, r15d
 * 0000000140A05F78: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A05F7F: cmp     [rbp+0BE0h+var_980], r15
 * 0000000140A05F86: jz      loc_140A0673F
 * 0000000140A05F8C: rdtsc
 * 0000000140A05F8E: shl     rdx, 20h
 * 0000000140A05F92: mov     r8, 7010008004002001h
 * 0000000140A05F9C: or      rax, rdx
 * 0000000140A05F9F: mov     rcx, rax
 * 0000000140A05FA2: ror     rax, 3
 * 0000000140A05FA6: xor     rcx, rax
 * 0000000140A05FA9: mov     rax, r8
 * 0000000140A05FAC: mul     rcx
 * 0000000140A05FAF: mov     rcx, rdx
 * 0000000140A05FB2: mov     [rbp+0BE0h+var_560], rdx
 * 0000000140A05FB9: xor     rcx, rax
 * 0000000140A05FBC: mov     rax, 2E8BA2E8BA2E8BA3h
 * 0000000140A05FC6: mul     rcx
 * 0000000140A05FC9: shr     rdx, 1
 * 0000000140A05FCC: imul    rax, rdx, 0Bh
 * 0000000140A05FD0: sub     rcx, rax
 * 0000000140A05FD3: lea     eax, [r15+5]
 * 0000000140A05FD7: cmp     ecx, eax
 * 0000000140A05FD9: ja      loc_140A06097
 * 0000000140A05FDF: jz      loc_140A0607D
 * 0000000140A05FE5: test    ecx, ecx
 * 0000000140A05FE7: jz      short loc_140A06063
 * 0000000140A05FE9: sub     ecx, 1
 * 0000000140A05FEC: jz      short loc_140A0604A
 * 0000000140A05FEE: sub     ecx, 1
 * 0000000140A05FF1: jz      short loc_140A06030
 * 0000000140A05FF3: cmp     ecx, 1
 * 0000000140A05FF6: jz      short loc_140A06012
 * 0000000140A05FF8: mov     [rbp+0BE0h+var_9DC], 67076494h
 * 0000000140A06002: mov     r9d, [rbp+0BE0h+var_9DC]
 * 0000000140A06009: rol     r9d, 4
 * 0000000140A0600D: jmp     loc_140A061BB
 * 0000000140A06012: mov     [rbp+0BE0h+var_9D8], 0A8223938h
 * 0000000140A0601C: mov     r9d, [rbp+0BE0h+var_9D8]
 * 0000000140A06023: xor     r9d, 3
 * 0000000140A06027: ror     r9d, 0Fh
 * 0000000140A0602B: jmp     loc_140A061BB
 * 0000000140A06030: mov     [rbp+0BE0h+var_9D4], 85B5910Dh
 * 0000000140A0603A: mov     r9d, [rbp+0BE0h+var_9D4]
 * 0000000140A06041: ror     r9d, 2
 * 0000000140A06045: jmp     loc_140A061BB
 * 0000000140A0604A: mov     [rbp+0BE0h+var_9D0], 0B2AD31A1h
 * 0000000140A06054: mov     r9d, [rbp+0BE0h+var_9D0]
 * 0000000140A0605B: rol     r9d, 1
 * 0000000140A0605E: jmp     loc_140A061BB
 * 0000000140A06063: mov     [rbp+0BE0h+var_9CC], 0D098D0D8h
 * 0000000140A0606D: mov     r9d, [rbp+0BE0h+var_9CC]
 * 0000000140A06074: ror     r9d, 6
 * 0000000140A06078: jmp     loc_140A061BB
 * 0000000140A0607D: mov     [rbp+0BE0h+var_A90], 288C49EDh
 * 0000000140A06087: mov     r9d, [rbp+0BE0h+var_A90]
 * 0000000140A0608E: ror     r9d, 5
 * 0000000140A06092: jmp     loc_140A061BB
 * 0000000140A06097: sub     ecx, 6
 * 0000000140A0609A: jz      loc_140A061A2
 * 0000000140A060A0: sub     ecx, 1
 * 0000000140A060A3: jz      loc_140A0618B
 * 0000000140A060A9: sub     ecx, 1
 * 0000000140A060AC: jz      loc_140A06174
 * 0000000140A060B2: cmp     ecx, 1
 * 0000000140A060B5: jz      loc_140A06159
 * 0000000140A060BB: rdtsc
 * 0000000140A060BD: shl     rdx, 20h
 * 0000000140A060C1: mov     r10d, 4EC4EC4Fh
 * 0000000140A060C7: or      rax, rdx
 * 0000000140A060CA: mov     rcx, rax
 * 0000000140A060CD: ror     rax, 3
 * 0000000140A060D1: xor     rcx, rax
 * 0000000140A060D4: mov     rax, r8
 * 0000000140A060D7: mul     rcx
 * 0000000140A060DA: mov     r9, rdx
 * 0000000140A060DD: mov     [rbp+0BE0h+var_558], rdx
 * 0000000140A060E4: xor     r9d, eax
 * 0000000140A060E7: mov     eax, r10d
 * 0000000140A060EA: mul     r9d
 * 0000000140A060ED: mov     ecx, r9d
 * 0000000140A060F0: shr     r9d, 5
 * 0000000140A060F4: shr     edx, 3
 * 0000000140A060F7: mov     r8d, r9d
 * 0000000140A060FA: imul    eax, edx, 1Ah
 * 0000000140A060FD: sub     ecx, eax
 * 0000000140A060FF: mov     eax, r10d
 * 0000000140A06102: mul     r9d
 * 0000000140A06105: add     ecx, 61h ; 'a'
 * 0000000140A06108: shr     r9d, 5
 * 0000000140A0610C: shl     ecx, 8
 * 0000000140A0610F: shr     edx, 3
 * 0000000140A06112: imul    eax, edx, 1Ah
 * 0000000140A06115: sub     r8d, eax
 * 0000000140A06118: mov     eax, r10d
 * 0000000140A0611B: mul     r9d
 * 0000000140A0611E: add     r8d, 41h ; 'A'
 * 0000000140A06122: or      r8d, ecx
 * 0000000140A06125: shr     edx, 3
 * 0000000140A06128: imul    eax, edx, 1Ah
 * 0000000140A0612B: mov     ecx, r9d
 * 0000000140A0612E: shr     r9d, 5
 * 0000000140A06132: shl     r8d, 8
 * 0000000140A06136: sub     ecx, eax
 * 0000000140A06138: mov     eax, r10d
 * 0000000140A0613B: mul     r9d
 * 0000000140A0613E: add     ecx, 61h ; 'a'
 * 0000000140A06141: shr     edx, 3
 * 0000000140A06144: or      ecx, r8d
 * 0000000140A06147: imul    eax, edx, 1Ah
 * 0000000140A0614A: shl     ecx, 8
 * 0000000140A0614D: sub     r9d, eax
 * 0000000140A06150: add     r9d, 41h ; 'A'
 * 0000000140A06154: or      r9d, ecx
 * 0000000140A06157: jmp     short loc_140A061BB
 * 0000000140A06159: mov     [rbp+0BE0h+var_A8C], 0B0869E85h
 * 0000000140A06163: mov     r9d, [rbp+0BE0h+var_A8C]
 * 0000000140A0616A: xor     r9d, 9
 * 0000000140A0616E: ror     r9d, 21h
 * 0000000140A06172: jmp     short loc_140A061BB
 * 0000000140A06174: mov     [rbp+0BE0h+var_A88], 64664142h
 * 0000000140A0617E: mov     r9d, [rbp+0BE0h+var_A88]
 * 0000000140A06185: ror     r9d, 8
 * 0000000140A06189: jmp     short loc_140A061BB
 * 0000000140A0618B: mov     [rbp+0BE0h+var_A84], 82C6A6D8h
 * 0000000140A06195: mov     r9d, [rbp+0BE0h+var_A84]
 * 0000000140A0619C: rol     r9d, 7
 * 0000000140A061A0: jmp     short loc_140A061BB
 * 0000000140A061A2: mov     [rbp+0BE0h+var_A80], 4E574672h
 * 0000000140A061AC: mov     r9d, [rbp+0BE0h+var_A80]
 * 0000000140A061B3: xor     r9d, 6
 * 0000000140A061B7: ror     r9d, 18h
 * 0000000140A061BB: mov     rax, [rsi+0F8h]
 * 0000000140A061C2: mov     r13d, 80h
 * 0000000140A061C8: mov     edx, r13d
 * 0000000140A061CB: mov     r8d, r9d
 * 0000000140A061CE: mov     ecx, 200h
 * 0000000140A061D3: call    KeGuardDispatchICall
 * 0000000140A061D8: mov     [rbp+0BE0h+var_BD8], rax
 * 0000000140A061DC: mov     r9, rax
 * 0000000140A061DF: test    rax, rax
 * 0000000140A061E2: jz      loc_140A06AB7
 * 0000000140A061E8: mov     ecx, r13d
 * 0000000140A061EB: lea     edx, [r13-70h]
 * 0000000140A061EF: mov     [rax], r15
 * 0000000140A061F2: add     ecx, 0FFFFFFF8h
 * 0000000140A061F5: add     rax, 8
 * 0000000140A061F9: sub     rdx, r12
 * 0000000140A061FC: jnz     short loc_140A061EF
 * 0000000140A061FE: test    ecx, ecx
 * 0000000140A06200: jz      short loc_140A0620D
 * 0000000140A06202: mov     [rax], r15b
 * 0000000140A06205: add     rax, r12
 * 0000000140A06208: add     ecx, r14d
 * 0000000140A0620B: jnz     short loc_140A06202
 * 0000000140A0620D: mov     rax, [rbp+0BE0h+var_980]
 * 0000000140A06214: mov     rcx, r15
 * 0000000140A06217: mov     [rbp+0BE0h+var_AF8], rax
 * 0000000140A0621E: mov     [r9], rax
 * 0000000140A06221: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A06226: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A0622A: mov     dword ptr [rbp+0BE0h+arg_8], r15d
 * 0000000140A06231: mov     [rbp+0BE0h+var_C08], rcx
 * 0000000140A06235: mov     rcx, [r9+rcx*8]
 * 0000000140A06239: mov     [rbp+0BE0h+var_AF8], rcx
 * 0000000140A06240: test    rcx, rcx
 * 0000000140A06243: jz      loc_140A06737
 * 0000000140A06249: mov     r13d, eax
 * 0000000140A0624C: mov     rax, [rsi+1F8h]
 * 0000000140A06253: and     r13d, 3Fh
 * 0000000140A06257: call    KeGuardDispatchICall
 * 0000000140A0625C: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A06260: test    rax, rax
 * 0000000140A06263: jz      loc_140A066B0
 * 0000000140A06269: movzx   r14d, word ptr [rax+14h]
 * 0000000140A0626E: mov     rbx, [rbp+0BE0h+var_C30]
 * 0000000140A06272: add     r14, 18h
 * 0000000140A06276: add     r14, rax
 * 0000000140A06279: movzx   eax, word ptr [rax+6]
 * 0000000140A0627D: lea     rcx, [rax+rax*4]
 * 0000000140A06281: lea     rax, [r14+rcx*8]
 * 0000000140A06285: mov     [rbp+0BE0h+var_C50], rax
 * 0000000140A06289: mov     rdi, rax
 * 0000000140A0628C: mov     eax, [r14+24h]
 * 0000000140A06290: mov     r11d, r15d
 * 0000000140A06293: bt      eax, 19h
 * 0000000140A06297: jb      loc_140A06418
 * 0000000140A0629D: mov     ecx, [r14]
 * 0000000140A062A0: cmp     ecx, 54494E49h
 * 0000000140A062A6: jnz     short loc_140A062B6
 * 0000000140A062A8: cmp     dword ptr [r14+4], 4742444Bh
 * 0000000140A062B0: jz      loc_140A06418
 * 0000000140A062B6: cmp     ecx, 45474150h
 * 0000000140A062BC: jnz     short loc_140A062ED
 * 0000000140A062BE: movzx   eax, word ptr [r14+4]
 * 0000000140A062C3: mov     edx, 7877h
 * 0000000140A062C8: cmp     ax, dx
 * 0000000140A062CB: jz      loc_140A06418
 * 0000000140A062D1: mov     edx, 7277h
 * 0000000140A062D6: cmp     ax, dx
 * 0000000140A062D9: jz      loc_140A06418
 * 0000000140A062DF: mov     edx, 7777h
 * 0000000140A062E4: cmp     ax, dx
 * 0000000140A062E7: jz      loc_140A06418
 * 0000000140A062ED: cmp     ecx, 41525245h
 * 0000000140A062F3: jnz     short loc_140A06305
 * 0000000140A062F5: mov     eax, 4154h
 * 0000000140A062FA: cmp     [r14+4], ax
 * 0000000140A062FF: jz      loc_140A06418
 * 0000000140A06305: mov     rax, [rsi+938h]
 * 0000000140A0630C: mov     r9, r14
 * 0000000140A0630F: mov     r8, [rsi+930h]
 * 0000000140A06316: mov     r10d, 7
 * 0000000140A0631C: mov     [rbp+0BE0h+var_808], rax
 * 0000000140A06323: sub     r9, r8
 * 0000000140A06326: mov     rax, [rsi+940h]
 * 0000000140A0632D: mov     [rbp+0BE0h+var_800], rax
 * 0000000140A06334: mov     rax, [rsi+948h]
 * 0000000140A0633B: mov     [rbp+0BE0h+var_7F8], rax
 * 0000000140A06342: mov     [rbp+0BE0h+var_810], r8
 * 0000000140A06349: movzx   edx, byte ptr [r9+r8]
 * 0000000140A0634E: movzx   eax, byte ptr [r8]
 * 0000000140A06352: add     r8, r12
 * 0000000140A06355: cmp     rdx, rax
 * 0000000140A06358: jnz     short loc_140A06369
 * 0000000140A0635A: mov     eax, 0FFFFFFFFh
 * 0000000140A0635F: add     r10d, eax
 * 0000000140A06362: jnz     short loc_140A06349
 * 0000000140A06364: jmp     loc_140A06418
 * 0000000140A06369: mov     r9, [rbp+0BE0h+var_808]
 * 0000000140A06370: mov     r8d, 8
 * 0000000140A06376: mov     r10, r14
 * 0000000140A06379: mov     rcx, [r10]
 * 0000000140A0637C: add     r10, 8
 * 0000000140A06380: mov     rax, [r9]
 * 0000000140A06383: add     r9, 8
 * 0000000140A06387: cmp     rcx, rax
 * 0000000140A0638A: jnz     short loc_140A063BA
 * 0000000140A0638C: add     r8d, 0FFFFFFF8h
 * 0000000140A06390: cmp     r8d, 8
 * 0000000140A06394: jnb     short loc_140A06379
 * 0000000140A06396: test    r8d, r8d
 * 0000000140A06399: jz      short loc_140A06418
 * 0000000140A0639B: movzx   edx, byte ptr [r10]
 * 0000000140A0639F: add     r10, r12
 * 0000000140A063A2: movzx   eax, byte ptr [r9]
 * 0000000140A063A6: add     r9, r12
 * 0000000140A063A9: cmp     rdx, rax
 * 0000000140A063AC: jnz     short loc_140A063BA
 * 0000000140A063AE: mov     eax, 0FFFFFFFFh
 * 0000000140A063B3: add     r8d, eax
 * 0000000140A063B6: jnz     short loc_140A0639B
 * 0000000140A063B8: jmp     short loc_140A06418
 * 0000000140A063BA: mov     r8, [rbp+0BE0h+var_800]
 * 0000000140A063C1: mov     r9, r14
 * 0000000140A063C4: sub     r9, r8
 * 0000000140A063C7: mov     r10d, 4
 * 0000000140A063CD: movzx   edx, byte ptr [r9+r8]
 * 0000000140A063D2: movzx   eax, byte ptr [r8]
 * 0000000140A063D6: add     r8, r12
 * 0000000140A063D9: cmp     rdx, rax
 * 0000000140A063DC: jnz     short loc_140A063EA
 * 0000000140A063DE: mov     eax, 0FFFFFFFFh
 * 0000000140A063E3: add     r10d, eax
 * 0000000140A063E6: jnz     short loc_140A063CD
 * 0000000140A063E8: jmp     short loc_140A06418
 * 0000000140A063EA: mov     r8, [rbp+0BE0h+var_7F8]
 * 0000000140A063F1: mov     r9, r14
 * 0000000140A063F4: sub     r9, r8
 * 0000000140A063F7: mov     r10d, 6
 * 0000000140A063FD: movzx   edx, byte ptr [r9+r8]
 * 0000000140A06402: movzx   eax, byte ptr [r8]
 * 0000000140A06406: add     r8, r12
 * 0000000140A06409: cmp     rdx, rax
 * 0000000140A0640C: jnz     short loc_140A0641B
 * 0000000140A0640E: mov     eax, 0FFFFFFFFh
 * 0000000140A06413: add     r10d, eax
 * 0000000140A06416: jnz     short loc_140A063FD
 * 0000000140A06418: mov     r11d, r12d
 * 0000000140A0641B: cmp     [r14+24h], r15d
 * 0000000140A0641F: mov     eax, [r14+8]
 * 0000000140A06423: mov     r9d, [r14+10h]
 * 0000000140A06427: cmovl   r11d, r12d
 * 0000000140A0642B: cmp     r9d, eax
 * 0000000140A0642E: cmovbe  r9d, eax
 * 0000000140A06432: mov     eax, [r14+0Ch]
 * 0000000140A06436: test    r11d, r11d
 * 0000000140A06439: jnz     loc_140A0653E
 * 0000000140A0643F: mov     r15d, eax
 * 0000000140A06442: mov     ecx, r9d
 * 0000000140A06445: add     r15, [rbp+0BE0h+var_AF8]
 * 0000000140A0644C: mov     r11d, r13d
 * 0000000140A0644F: add     rcx, r15
 * 0000000140A06452: mov     r10, r15
 * 0000000140A06455: mov     rax, r15
 * 0000000140A06458: cmp     r15, rcx
 * 0000000140A0645B: jnb     short loc_140A0646D
 * 0000000140A0645D: mov     edx, 40h ; '@'
 * 0000000140A06462: prefetchnta byte ptr [rax]
 * 0000000140A06465: add     rax, rdx
 * 0000000140A06468: cmp     rax, rcx
 * 0000000140A0646B: jb      short loc_140A06462
 * 0000000140A0646D: mov     r12d, r9d
 * 0000000140A06470: mov     r8, rbx
 * 0000000140A06473: shr     r12d, 7
 * 0000000140A06477: test    r12d, r12d
 * 0000000140A0647A: jz      short loc_140A064EC
 * 0000000140A0647C: mov     edi, 1
 * 0000000140A06481: mov     rsi, 7010008004002001h
 * 0000000140A0648B: mov     eax, 8
 * 0000000140A06490: xor     r8, [r10]
 * 0000000140A06493: mov     ecx, r11d
 * 0000000140A06496: rol     r8, cl
 * 0000000140A06499: xor     r8, [r10+8]
 * 0000000140A0649D: add     r10, 10h
 * 0000000140A064A1: rol     r8, cl
 * 0000000140A064A4: sub     rax, rdi
 * 0000000140A064A7: jnz     short loc_140A06490
 * 0000000140A064A9: mov     rcx, r10
 * 0000000140A064AC: sub     rcx, r15
 * 0000000140A064AF: xor     rcx, rbx
 * 0000000140A064B2: mov     rax, rcx
 * 0000000140A064B5: rol     rax, 11h
 * 0000000140A064B9: xor     rcx, rax
 * 0000000140A064BC: mov     rax, rsi
 * 0000000140A064BF: mul     rcx
 * 0000000140A064C2: xor     r11d, edx
 * 0000000140A064C5: mov     [rbp+0BE0h+var_550], rdx
 * 0000000140A064CC: xor     r11d, eax
 * 0000000140A064CF: mov     edx, 0FFFFFFFFh
 * 0000000140A064D4: and     r11d, 3Fh
 * 0000000140A064D8: cmovz   r11d, edi
 * 0000000140A064DC: add     r12d, edx
 * 0000000140A064DF: jnz     short loc_140A0648B
 * 0000000140A064E1: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A064E6: mov     rdi, [rbp+0BE0h+var_C50]
 * 0000000140A064EA: jmp     short loc_140A064F1
 * 0000000140A064EC: mov     edx, 0FFFFFFFFh
 * 0000000140A064F1: and     r9d, 7Fh
 * 0000000140A064F5: mov     r12d, 1
 * 0000000140A064FB: cmp     r9d, 8
 * 0000000140A064FF: jb      short loc_140A0651E
 * 0000000140A06501: mov     eax, r9d
 * 0000000140A06504: shr     rax, 3
 * 0000000140A06508: xor     r8, [r10]
 * 0000000140A0650B: mov     ecx, r11d
 * 0000000140A0650E: rol     r8, cl
 * 0000000140A06511: add     r10, 8
 * 0000000140A06515: add     r9d, 0FFFFFFF8h
 * 0000000140A06519: sub     rax, r12
 * 0000000140A0651C: jnz     short loc_140A06508
 * 0000000140A0651E: xor     r15d, r15d
 * 0000000140A06521: test    r9d, r9d
 * 0000000140A06524: jz      short loc_140A0653B
 * 0000000140A06526: movzx   eax, byte ptr [r10]
 * 0000000140A0652A: mov     ecx, r11d
 * 0000000140A0652D: xor     r8, rax
 * 0000000140A06530: add     r10, r12
 * 0000000140A06533: rol     r8, cl
 * 0000000140A06536: add     r9d, edx
 * 0000000140A06539: jnz     short loc_140A06526
 * 0000000140A0653B: mov     rbx, r8
 * 0000000140A0653E: add     r14, 28h ; '('
 * 0000000140A06542: cmp     r14, rdi
 * 0000000140A06545: jnz     loc_140A0628C
 * 0000000140A0654B: mov     r8d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A06552: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A06559: mov     [rbp+0BE0h+var_C30], rbx
 * 0000000140A0655D: test    r8d, r8d
 * 0000000140A06560: jnz     loc_140A0667F
 * 0000000140A06566: mov     rdx, [rbp+0BE0h+var_C40]
 * 0000000140A0656A: mov     r13, [rbp+0BE0h+var_AF8]
 * 0000000140A06571: mov     ecx, [rdx+94h]
 * 0000000140A06577: cmp     ecx, 14h
 * 0000000140A0657A: jb      loc_140A0667F
 * 0000000140A06580: mov     eax, [rdx+90h]
 * 0000000140A06586: lea     r12, [rax+rcx]
 * 0000000140A0658A: add     r12, r13
 * 0000000140A0658D: lea     r15, [rax+r13]
 * 0000000140A06591: cmp     r15, r12
 * 0000000140A06594: jz      loc_140A06676
 * 0000000140A0659A: xor     r10d, r10d
 * 0000000140A0659D: cmp     [r15+0Ch], r10d
 * 0000000140A065A1: jz      loc_140A0666F
 * 0000000140A065A7: mov     eax, [r15+10h]
 * 0000000140A065AB: test    eax, eax
 * 0000000140A065AD: jz      loc_140A0666F
 * 0000000140A065B3: mov     r14, [rax+r13]
 * 0000000140A065B7: test    r14, r14
 * 0000000140A065BA: jz      loc_140A0664C
 * 0000000140A065C0: cmp     r14, r13
 * 0000000140A065C3: jb      short loc_140A065D0
 * 0000000140A065C5: mov     eax, [rdx+50h]
 * 0000000140A065C8: add     rax, r13
 * 0000000140A065CB: cmp     r14, rax
 * 0000000140A065CE: jb      short loc_140A0664C
 * 0000000140A065D0: mov     rax, [rsi+2A8h]
 * 0000000140A065D7: mov     rcx, r14
 * 0000000140A065DA: call    KeGuardDispatchICall
 * 0000000140A065DF: xor     r10d, r10d
 * 0000000140A065E2: test    eax, eax
 * 0000000140A065E4: jz      short loc_140A06648
 * 0000000140A065E6: mov     rax, [rsi+208h]
 * 0000000140A065ED: lea     rdx, [rbp+0BE0h+var_AF8]
 * 0000000140A065F4: mov     rcx, r14
 * 0000000140A065F7: call    KeGuardDispatchICall
 * 0000000140A065FC: mov     rdx, [rbp+0BE0h+var_AF8]
 * 0000000140A06603: xor     r10d, r10d
 * 0000000140A06606: lea     r11d, [r10+10h]
 * 0000000140A0660A: test    rdx, rdx
 * 0000000140A0660D: jz      short loc_140A06642
 * 0000000140A0660F: mov     r9, [rbp+0BE0h+var_BD8]
 * 0000000140A06613: mov     ecx, r10d
 * 0000000140A06616: mov     rax, r9
 * 0000000140A06619: mov     r8, [rax]
 * 0000000140A0661C: cmp     r8, rdx
 * 0000000140A0661F: jz      short loc_140A06639
 * 0000000140A06621: test    r8, r8
 * 0000000140A06624: jz      short loc_140A06633
 * 0000000140A06626: inc     ecx
 * 0000000140A06628: add     rax, 8
 * 0000000140A0662C: cmp     ecx, r11d
 * 0000000140A0662F: jb      short loc_140A06619
 * 0000000140A06631: jmp     short loc_140A06639
 * 0000000140A06633: mov     eax, ecx
 * 0000000140A06635: mov     [r9+rax*8], rdx
 * 0000000140A06639: cmp     ecx, r11d
 * 0000000140A0663C: jz      loc_140A0672D
 * 0000000140A06642: mov     rdx, [rbp+0BE0h+var_C40]
 * 0000000140A06646: jmp     short loc_140A06652
 * 0000000140A06648: mov     rdx, [rbp+0BE0h+var_C40]
 * 0000000140A0664C: mov     r11d, 10h
 * 0000000140A06652: add     r15, 14h
 * 0000000140A06656: cmp     r15, r12
 * 0000000140A06659: jnz     loc_140A0659D
 * 0000000140A0665F: mov     r8d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A06666: xor     r15d, r15d
 * 0000000140A06669: lea     r12d, [r15+1]
 * 0000000140A0666D: jmp     short loc_140A06685
 * 0000000140A0666F: mov     r8d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A06676: mov     r12d, 1
 * 0000000140A0667C: xor     r15d, r15d
 * 0000000140A0667F: mov     r11d, 10h
 * 0000000140A06685: mov     rcx, [rbp+0BE0h+var_C08]
 * 0000000140A06689: add     r8d, r12d
 * 0000000140A0668C: mov     rax, [rbp+0BE0h+var_C30]
 * 0000000140A06690: add     rcx, r12
 * 0000000140A06693: mov     r9, [rbp+0BE0h+var_BD8]
 * 0000000140A06697: mov     dword ptr [rbp+0BE0h+arg_8], r8d
 * 0000000140A0669E: mov     [rbp+0BE0h+var_C08], rcx
 * 0000000140A066A2: cmp     r8d, r11d
 * 0000000140A066A5: jb      loc_140A06235
 * 0000000140A066AB: jmp     loc_140A06737
 * 0000000140A066B0: cmp     [rsi+8F8h], r15d
 * 0000000140A066B7: jnz     short loc_140A066FB
 * 0000000140A066B9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A066C3: xor     edx, edx
 * 0000000140A066C5: add     rax, rsi
 * 0000000140A066C8: mov     rcx, rsi
 * 0000000140A066CB: mov     [rsi+900h], rax
 * 0000000140A066D2: mov     [rsi+908h], r15
 * 0000000140A066D9: mov     qword ptr [rsi+910h], 102h
 * 0000000140A066E4: mov     qword ptr [rsi+918h], 0FFFFFFFFC000007Bh
 * 0000000140A066EF: mov     [rsi+8F8h], r12d
 * 0000000140A066F6: call    $$b8
 * 0000000140A066FB: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A06700: cmp     r14, [rsi+968h]
 * 0000000140A06707: jz      short loc_140A0670E
 * 0000000140A06709: test    r14, r14
 * 0000000140A0670C: jnz     short loc_140A0671B
 * 0000000140A0670E: mov     rax, 95EA5DE843D5D824h
 * 0000000140A06718: xor     r14, rax
 * 0000000140A0671B: mov     rax, [rsi+100h]
 * 0000000140A06722: mov     rcx, [rbp+0BE0h+var_BD8]
 * 0000000140A06726: call    KeGuardDispatchICall
 * 0000000140A0672B: jmp     short loc_140A06744
 * 0000000140A0672D: mov     rax, [rbp+0BE0h+var_C30]
 * 0000000140A06731: mov     r12d, 1
 * 0000000140A06737: mov     r14, rax
 * 0000000140A0673A: xor     r15d, r15d
 * 0000000140A0673D: jmp     short loc_140A06700
 * 0000000140A0673F: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A06744: mov     rax, [rsi+960h]
 * 0000000140A0674B: mov     rcx, [rax]
 * 0000000140A0674E: cmp     r14, rcx
 * 0000000140A06751: jz      short loc_140A067CF
 * 0000000140A06753: mov     eax, [rsi+994h]
 * 0000000140A06759: mov     ecx, 40h ; '@'
 * 0000000140A0675E: test    cl, al
 * 0000000140A06760: jnz     short loc_140A067CF
 * 0000000140A06762: mov     rax, [rsi+960h]
 * 0000000140A06769: mov     rdx, [rax]
 * 0000000140A0676C: mov     eax, [rsi+8F8h]
 * 0000000140A06772: test    eax, eax
 * 0000000140A06774: jnz     short loc_140A067CF
 * 0000000140A06776: mov     rax, [rsi+590h]
 * 0000000140A0677D: mov     rcx, r14
 * 0000000140A06780: xor     rcx, rdx
 * 0000000140A06783: mov     [rax+18h], rcx
 * 0000000140A06787: mov     eax, [rsi+8F8h]
 * 0000000140A0678D: test    eax, eax
 * 0000000140A0678F: jnz     short loc_140A067CF
 * 0000000140A06791: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0679B: xor     edx, edx
 * 0000000140A0679D: add     rax, rsi
 * 0000000140A067A0: mov     rcx, rsi
 * 0000000140A067A3: mov     [rsi+900h], rax
 * 0000000140A067AA: mov     [rsi+908h], r15
 * 0000000140A067B1: mov     qword ptr [rsi+910h], 102h
 * 0000000140A067BC: mov     [rsi+918h], r14
 * 0000000140A067C3: mov     [rsi+8F8h], r12d
 * 0000000140A067CA: call    $$b8
 * 0000000140A067CF: mov     r10d, r15d
 * 0000000140A067D2: mov     r12d, 2
 * 0000000140A067D8: lea     r15, [rbp+0BE0h+var_850]
 * 0000000140A067DF: xor     ebx, ebx
 * 0000000140A067E1: mov     r14d, 0FFFFFFFFh
 * 0000000140A067E7: mov     rax, [r15]
 * 0000000140A067EA: mov     r9d, ebx
 * 0000000140A067ED: mov     r11, [rax]
 * 0000000140A067F0: lea     r8d, [r10+rax]
 * 0000000140A067F4: mov     r13d, [rax+10h]
 * 0000000140A067F8: add     r8d, r11d
 * 0000000140A067FB: test    r13d, r13d
 * 0000000140A067FE: jz      short loc_140A0682C
 * 0000000140A06800: mov     r14, r11
 * 0000000140A06803: movsxd  rdx, dword ptr [r14]
 * 0000000140A06806: inc     r9d
 * 0000000140A06809: mov     rax, rdx
 * 0000000140A0680C: lea     r14, [r14+4]
 * 0000000140A06810: sar     rax, 4
 * 0000000140A06814: mov     ecx, [rax+r11]
 * 0000000140A06818: add     ecx, edx
 * 0000000140A0681A: xor     r8d, ecx
 * 0000000140A0681D: imul    r8d, r9d
 * 0000000140A06821: cmp     r9d, r13d
 * 0000000140A06824: jb      short loc_140A06803
 * 0000000140A06826: mov     r14d, 0FFFFFFFFh
 * 0000000140A0682C: lea     r10d, [r10+r8*2]
 * 0000000140A06830: sub     r15, 8
 * 0000000140A06834: add     r8d, r8d
 * 0000000140A06837: add     r12d, r14d
 * 0000000140A0683A: jnz     short loc_140A067E7
 * 0000000140A0683C: mov     rax, [rsi+598h]
 * 0000000140A06843: mov     rbx, [rbp+0BE0h+var_C60]
 * 0000000140A06847: mov     r9d, [rax]
 * 0000000140A0684A: cmp     r10d, r9d
 * 0000000140A0684D: jz      short loc_140A068CA
 * 0000000140A0684F: xor     r15d, r15d
 * 0000000140A06852: test    dword ptr [rsi+990h], 20000h
 * 0000000140A0685C: jz      short loc_140A068CD
 * 0000000140A0685E: mov     eax, [rsi+8F8h]
 * 0000000140A06864: test    eax, eax
 * 0000000140A06866: jnz     short loc_140A0687F
 * 0000000140A06868: mov     rdx, [rsi+590h]
 * 0000000140A0686F: mov     ecx, r8d
 * 0000000140A06872: xor     rcx, r9
 * 0000000140A06875: mov     [rdx+18h], rcx
 * 0000000140A06879: mov     eax, [rsi+8F8h]
 * 0000000140A0687F: mov     ecx, r8d
 * 0000000140A06882: test    eax, eax
 * 0000000140A06884: jnz     short loc_140A068CD
 * 0000000140A06886: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A06890: xor     edx, edx
 * 0000000140A06892: add     rax, rsi
 * 0000000140A06895: mov     [rsi+900h], rax
 * 0000000140A0689C: mov     eax, 1
 * 0000000140A068A1: mov     [rsi+908h], r15
 * 0000000140A068A8: mov     qword ptr [rsi+910h], 107h
 * 0000000140A068B3: mov     [rsi+918h], rcx
 * 0000000140A068BA: mov     rcx, rsi
 * 0000000140A068BD: mov     [rsi+8F8h], eax
 * 0000000140A068C3: call    $$b8
 * 0000000140A068C8: jmp     short loc_140A068CD
 * 0000000140A068CA: xor     r15d, r15d
 * 0000000140A068CD: mov     eax, [rsi+958h]
 * 0000000140A068D3: cmp     eax, 7
 * 0000000140A068D6: jl      loc_140A06B48
 * 0000000140A068DC: jz      loc_140A07D3A
 * 0000000140A068E2: cmp     eax, 8
 * 0000000140A068E5: jz      loc_140A09D4D
 * 0000000140A068EB: cmp     eax, 9
 * 0000000140A068EE: jnz     loc_140A0A24F
 * 0000000140A068F4: xor     r10d, r10d
 * 0000000140A068F7: mov     r15, [rbx+600h]
 * 0000000140A068FE: test    r15, r15
 * 0000000140A06901: jz      loc_140A0A24C
 * 0000000140A06907: mov     r15, [r15]
 * 0000000140A0690A: test    r15, r15
 * 0000000140A0690D: jz      loc_140A0A24C
 * 0000000140A06913: lock or [rsp+0CE0h+var_CE0], r10d
 * 0000000140A06918: mov     r12d, [r15+7E4h]
 * 0000000140A0691F: mov     r9, r15
 * 0000000140A06922: mov     r10d, [r15+814h]
 * 0000000140A06929: mov     rax, r15
 * 0000000140A0692C: mov     r14, [r15+818h]
 * 0000000140A06933: mov     dword ptr [rbp+0BE0h+arg_8], r12d
 * 0000000140A0693A: lea     rcx, [r15+r12]
 * 0000000140A0693E: cmp     r15, rcx
 * 0000000140A06941: jnb     short loc_140A06953
 * 0000000140A06943: mov     edx, 40h ; '@'
 * 0000000140A06948: prefetchnta byte ptr [rax]
 * 0000000140A0694B: add     rax, rdx
 * 0000000140A0694E: cmp     rax, rcx
 * 0000000140A06951: jb      short loc_140A06948
 * 0000000140A06953: mov     r11d, r12d
 * 0000000140A06956: mov     r8, r14
 * 0000000140A06959: shr     r11d, 7
 * 0000000140A0695D: mov     r13d, 1
 * 0000000140A06963: test    r11d, r11d
 * 0000000140A06966: jz      short loc_140A069D4
 * 0000000140A06968: mov     r12, 7010008004002001h
 * 0000000140A06972: mov     edx, 8
 * 0000000140A06977: mov     rax, [r9]
 * 0000000140A0697A: mov     ecx, r10d
 * 0000000140A0697D: xor     rax, r8
 * 0000000140A06980: mov     r8, [r9+8]
 * 0000000140A06984: rol     rax, cl
 * 0000000140A06987: add     r9, 10h
 * 0000000140A0698B: xor     r8, rax
 * 0000000140A0698E: rol     r8, cl
 * 0000000140A06991: sub     rdx, r13
 * 0000000140A06994: jnz     short loc_140A06977
 * 0000000140A06996: mov     rcx, r9
 * 0000000140A06999: sub     rcx, r15
 * 0000000140A0699C: xor     rcx, r14
 * 0000000140A0699F: mov     rax, rcx
 * 0000000140A069A2: rol     rax, 11h
 * 0000000140A069A6: xor     rcx, rax
 * 0000000140A069A9: mov     rax, r12
 * 0000000140A069AC: mul     rcx
 * 0000000140A069AF: mov     [rbp+0BE0h+var_4E0], rdx
 * 0000000140A069B6: xor     edx, eax
 * 0000000140A069B8: xor     r10d, edx
 * 0000000140A069BB: mov     eax, 0FFFFFFFFh
 * 0000000140A069C0: and     r10d, 3Fh
 * 0000000140A069C4: cmovz   r10d, r13d
 * 0000000140A069C8: add     r11d, eax
 * 0000000140A069CB: jnz     short loc_140A06972
 * 0000000140A069CD: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A069D4: mov     edx, r12d
 * 0000000140A069D7: and     edx, 7Fh
 * 0000000140A069DA: cmp     edx, 8
 * 0000000140A069DD: jb      short loc_140A069FB
 * 0000000140A069DF: mov     r11d, edx
 * 0000000140A069E2: shr     r11, 3
 * 0000000140A069E6: xor     r8, [r9]
 * 0000000140A069E9: mov     ecx, r10d
 * 0000000140A069EC: rol     r8, cl
 * 0000000140A069EF: add     r9, 8
 * 0000000140A069F3: add     edx, 0FFFFFFF8h
 * 0000000140A069F6: sub     r11, r13
 * 0000000140A069F9: jnz     short loc_140A069E6
 * 0000000140A069FB: xor     r11d, r11d
 * 0000000140A069FE: test    edx, edx
 * 0000000140A06A00: jz      short loc_140A06A20
 * 0000000140A06A02: mov     r11d, 0FFFFFFFFh
 * 0000000140A06A08: movzx   eax, byte ptr [r9]
 * 0000000140A06A0C: mov     ecx, r10d
 * 0000000140A06A0F: xor     r8, rax
 * 0000000140A06A12: add     r9, r13
 * 0000000140A06A15: rol     r8, cl
 * 0000000140A06A18: add     edx, r11d
 * 0000000140A06A1B: jnz     short loc_140A06A08
 * 0000000140A06A1D: xor     r11d, r11d
 * 0000000140A06A20: mov     rax, [rbx+608h]
 * 0000000140A06A27: cmp     r8, [rax]
 * 0000000140A06A2A: jz      loc_140A09F83
 * 0000000140A06A30: mov     rax, [rbx+590h]
 * 0000000140A06A37: mov     [rax], r15
 * 0000000140A06A3A: xor     r15d, r15d
 * 0000000140A06A3D: mov     [rax+10h], r12d
 * 0000000140A06A41: mov     rax, [rbx+608h]
 * 0000000140A06A48: mov     rcx, [rax]
 * 0000000140A06A4B: mov     eax, [rbx+8F8h]
 * 0000000140A06A51: test    eax, eax
 * 0000000140A06A53: jnz     loc_140A07D8D
 * 0000000140A06A59: mov     rax, [rbx+590h]
 * 0000000140A06A60: xor     rcx, r8
 * 0000000140A06A63: mov     [rax+18h], rcx
 * 0000000140A06A67: mov     eax, [rbx+8F8h]
 * 0000000140A06A6D: test    eax, eax
 * 0000000140A06A6F: jnz     loc_140A07D8D
 * 0000000140A06A75: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A06A7F: lea     r12d, [r15+1]
 * 0000000140A06A83: add     rax, rbx
 * 0000000140A06A86: mov     [rbx+900h], rax
 * 0000000140A06A8D: mov     [rbx+908h], r15
 * 0000000140A06A94: mov     qword ptr [rbx+910h], 111h
 * 0000000140A06A9F: mov     [rbx+918h], r8
 * 0000000140A06AA6: xor     edx, edx
 * 0000000140A06AA8: mov     [rbx+8F8h], r12d
 * 0000000140A06AAF: mov     rcx, rbx
 * 0000000140A06AB2: call    $$b8
 * 0000000140A06AB7: mov     r13d, 0FFFFFFFFh
 * 0000000140A06ABD: mov     ecx, 8000h
 * 0000000140A06AC2: test    [rbx+990h], ecx
 * 0000000140A06AC8: jnz     short loc_140A06AD7
 * 0000000140A06ACA: cmp     [rbx+8F8h], r15d
 * 0000000140A06AD1: jnz     loc_140A0A51C
 * 0000000140A06AD7: mov     r14, [rbx+980h]
 * 0000000140A06ADE: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A06AE5: mov     [rbx+980h], r15
 * 0000000140A06AEC: mov     rcx, r14
 * 0000000140A06AEF: mov     rax, [rbx+298h]
 * 0000000140A06AF6: call    KeGuardDispatchICall
 * 0000000140A06AFB: mov     eax, [rbx+990h]
 * 0000000140A06B01: test    r12b, al
 * 0000000140A06B04: jz      loc_140A0A2B9
 * 0000000140A06B0A: and     eax, 0FFFFFFFEh
 * 0000000140A06B0D: mov     rcx, r14
 * 0000000140A06B10: mov     [rbx+990h], eax
 * 0000000140A06B16: mov     rax, [rbx+280h]
 * 0000000140A06B1D: call    KeGuardDispatchICall
 * 0000000140A06B22: mov     r14, rax
 * 0000000140A06B25: test    rax, rax
 * 0000000140A06B28: jz      loc_140A0A2B2
 * 0000000140A06B2E: mov     rax, [rbx+2A0h]
 * 0000000140A06B35: mov     rcx, r14
 * 0000000140A06B38: call    KeGuardDispatchICall
 * 0000000140A06B3D: mov     [rbx+970h], eax
 * 0000000140A06B43: jmp     loc_140A0A2B9
 * 0000000140A06B48: mov     rdx, [rsi+578h]
 * 0000000140A06B4F: mov     rcx, [rsi+570h]
 * 0000000140A06B56: mov     [rbp+0BE0h+arg_8], rdx
 * 0000000140A06B5D: add     rdx, 20h ; ' '
 * 0000000140A06B61: mov     [rbp+0BE0h+var_C30], rdx
 * 0000000140A06B65: mov     edx, 2
 * 0000000140A06B6A: mov     [rbp+0BE0h+var_C40], rcx
 * 0000000140A06B6E: lea     r13, [rcx+20h]
 * 0000000140A06B72: mov     [rsp+0CE0h+var_C70], r13
 * 0000000140A06B77: cmp     eax, edx
 * 0000000140A06B79: jge     loc_140A06E1E
 * 0000000140A06B7F: mov     r12, [r13+0]
 * 0000000140A06B83: mov     r13d, [rsi+7E4h]
 * 0000000140A06B8A: mov     r15d, [rcx+30h]
 * 0000000140A06B8E: mov     r8d, [rsi+924h]
 * 0000000140A06B95: shl     r15d, 2
 * 0000000140A06B99: lea     eax, [r13+30h]
 * 0000000140A06B9D: cmp     eax, [rsi+0A1Ch]
 * 0000000140A06BA3: jbe     loc_140A06C85
 * 0000000140A06BA9: mov     edx, eax
 * 0000000140A06BAB: mov     rcx, rsi
 * 0000000140A06BAE: call    sub_140A0FB30
 * 0000000140A06BB3: xor     r9d, r9d
 * 0000000140A06BB6: mov     r14, rax
 * 0000000140A06BB9: test    rax, rax
 * 0000000140A06BBC: jz      loc_140A07D98
 * 0000000140A06BC2: mov     ecx, [rsi+990h]
 * 0000000140A06BC8: test    cl, 4
 * 0000000140A06BCB: jnz     loc_140A06C7B
 * 0000000140A06BD1: mov     eax, [rsi+7E4h]
 * 0000000140A06BD7: lea     r10d, [r9+1]
 * 0000000140A06BDB: mov     r8, [rsi+7C8h]
 * 0000000140A06BE2: and     ecx, 20000000h
 * 0000000140A06BE8: neg     ecx
 * 0000000140A06BEA: sbb     edx, edx
 * 0000000140A06BEC: and     edx, [rsi+924h]
 * 0000000140A06BF2: cmp     eax, 8
 * 0000000140A06BF5: jb      short loc_140A06C0C
 * 0000000140A06BF7: mov     ecx, eax
 * 0000000140A06BF9: shr     rcx, 3
 * 0000000140A06BFD: mov     [rsi], r9
 * 0000000140A06C00: add     eax, 0FFFFFFF8h
 * 0000000140A06C03: add     rsi, 8
 * 0000000140A06C07: sub     rcx, r10
 * 0000000140A06C0A: jnz     short loc_140A06BFD
 * 0000000140A06C0C: test    eax, eax
 * 0000000140A06C0E: jz      short loc_140A06C1F
 * 0000000140A06C10: mov     ecx, 0FFFFFFFFh
 * 0000000140A06C15: mov     [rsi], r9b
 * 0000000140A06C18: add     rsi, r10
 * 0000000140A06C1B: add     eax, ecx
 * 0000000140A06C1D: jnz     short loc_140A06C15
 * 0000000140A06C1F: mov     ebx, [r14+924h]
 * 0000000140A06C26: mov     [r14+924h], edx
 * 0000000140A06C2D: cmp     edx, 3
 * 0000000140A06C30: jz      short loc_140A06C65
 * 0000000140A06C32: test    dword ptr [r14+990h], 10000000h
 * 0000000140A06C3D: mov     ecx, r9d
 * 0000000140A06C40: cmovz   ecx, edx
 * 0000000140A06C43: test    ecx, ecx
 * 0000000140A06C45: jz      short loc_140A06C5C
 * 0000000140A06C47: mov     rax, [r14+228h]
 * 0000000140A06C4E: lea     rcx, [r8-8]
 * 0000000140A06C52: mov     rdx, [rcx]
 * 0000000140A06C55: call    KeGuardDispatchICall
 * 0000000140A06C5A: jmp     short loc_140A06C74
 * 0000000140A06C5C: mov     rax, [r14+100h]
 * 0000000140A06C63: jmp     short loc_140A06C6C
 * 0000000140A06C65: mov     rax, [r14+368h]
 * 0000000140A06C6C: mov     rcx, r8
 * 0000000140A06C6F: call    KeGuardDispatchICall
 * 0000000140A06C74: mov     [r14+924h], ebx
 * 0000000140A06C7B: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140A06C83: jmp     short loc_140A06C8E
 * 0000000140A06C85: mov     r14, rsi
 * 0000000140A06C88: mov     [rsi+7E4h], eax
 * 0000000140A06C8E: lea     rbx, [r14+r13]
 * 0000000140A06C92: mov     r8d, 1
 * 0000000140A06C98: add     [r14+80Ch], r8d
 * 0000000140A06C9F: mov     rax, rbx
 * 0000000140A06CA2: mov     [rbp+0BE0h+var_548], rbx
 * 0000000140A06CA9: xor     r13d, r13d
 * 0000000140A06CAC: lea     ecx, [r8+2Fh]
 * 0000000140A06CB0: lea     edx, [rcx-2Ah]
 * 0000000140A06CB3: mov     [rax], r13
 * 0000000140A06CB6: add     ecx, 0FFFFFFF8h
 * 0000000140A06CB9: add     rax, 8
 * 0000000140A06CBD: sub     rdx, r8
 * 0000000140A06CC0: jnz     short loc_140A06CB3
 * 0000000140A06CC2: test    ecx, ecx
 * 0000000140A06CC4: jz      short loc_140A06CD5
 * 0000000140A06CC6: mov     edx, 0FFFFFFFFh
 * 0000000140A06CCB: mov     [rax], r13b
 * 0000000140A06CCE: add     rax, r8
 * 0000000140A06CD1: add     ecx, edx
 * 0000000140A06CD3: jnz     short loc_140A06CCB
 * 0000000140A06CD5: mov     dword ptr [rbx], 0Bh
 * 0000000140A06CDB: mov     r9, r12
 * 0000000140A06CDE: mov     [rbx+8], r12
 * 0000000140A06CE2: mov     rax, r12
 * 0000000140A06CE5: mov     [rbx+10h], r15d
 * 0000000140A06CE9: add     [r14+828h], r15d
 * 0000000140A06CF0: mov     r10d, [r14+814h]
 * 0000000140A06CF7: mov     rsi, [r14+818h]
 * 0000000140A06CFE: mov     ecx, r15d
 * 0000000140A06D01: add     rcx, r12
 * 0000000140A06D04: cmp     r12, rcx
 * 0000000140A06D07: jnb     short loc_140A06D19
 * 0000000140A06D09: mov     edx, 40h ; '@'
 * 0000000140A06D0E: prefetchnta byte ptr [rax]
 * 0000000140A06D11: add     rax, rdx
 * 0000000140A06D14: cmp     rax, rcx
 * 0000000140A06D17: jb      short loc_140A06D0E
 * 0000000140A06D19: mov     r11d, r15d
 * 0000000140A06D1C: mov     r8, rsi
 * 0000000140A06D1F: shr     r11d, 7
 * 0000000140A06D23: mov     r13d, 1
 * 0000000140A06D29: test    r11d, r11d
 * 0000000140A06D2C: jz      short loc_140A06D9B
 * 0000000140A06D2E: mov     rdi, 7010008004002001h
 * 0000000140A06D38: mov     edx, 8
 * 0000000140A06D3D: mov     rax, [r9]
 * 0000000140A06D40: mov     ecx, r10d
 * 0000000140A06D43: xor     rax, r8
 * 0000000140A06D46: mov     r8, [r9+8]
 * 0000000140A06D4A: rol     rax, cl
 * 0000000140A06D4D: add     r9, 10h
 * 0000000140A06D51: xor     r8, rax
 * 0000000140A06D54: rol     r8, cl
 * 0000000140A06D57: sub     rdx, r13
 * 0000000140A06D5A: jnz     short loc_140A06D3D
 * 0000000140A06D5C: mov     rcx, r9
 * 0000000140A06D5F: sub     rcx, r12
 * 0000000140A06D62: xor     rcx, rsi
 * 0000000140A06D65: mov     rax, rcx
 * 0000000140A06D68: rol     rax, 11h
 * 0000000140A06D6C: xor     rcx, rax
 * 0000000140A06D6F: mov     rax, rdi
 * 0000000140A06D72: mul     rcx
 * 0000000140A06D75: xor     r10d, edx
 * 0000000140A06D78: mov     [rbp+0BE0h+var_540], rdx
 * 0000000140A06D7F: xor     r10d, eax
 * 0000000140A06D82: mov     eax, 0FFFFFFFFh
 * 0000000140A06D87: and     r10d, 3Fh
 * 0000000140A06D8B: cmovz   r10d, r13d
 * 0000000140A06D8F: add     r11d, eax
 * 0000000140A06D92: jnz     short loc_140A06D38
 * 0000000140A06D94: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A06D9B: mov     edx, r15d
 * 0000000140A06D9E: and     edx, 7Fh
 * 0000000140A06DA1: cmp     edx, 8
 * 0000000140A06DA4: jb      short loc_140A06DC2
 * 0000000140A06DA6: mov     r11d, edx
 * 0000000140A06DA9: shr     r11, 3
 * 0000000140A06DAD: xor     r8, [r9]
 * 0000000140A06DB0: mov     ecx, r10d
 * 0000000140A06DB3: rol     r8, cl
 * 0000000140A06DB6: add     r9, 8
 * 0000000140A06DBA: add     edx, 0FFFFFFF8h
 * 0000000140A06DBD: sub     r11, r13
 * 0000000140A06DC0: jnz     short loc_140A06DAD
 * 0000000140A06DC2: xor     r11d, r11d
 * 0000000140A06DC5: test    edx, edx
 * 0000000140A06DC7: jz      short loc_140A06DE7
 * 0000000140A06DC9: mov     r11d, 0FFFFFFFFh
 * 0000000140A06DCF: movzx   eax, byte ptr [r9]
 * 0000000140A06DD3: mov     ecx, r10d
 * 0000000140A06DD6: xor     r8, rax
 * 0000000140A06DD9: add     r9, r13
 * 0000000140A06DDC: rol     r8, cl
 * 0000000140A06DDF: add     edx, r11d
 * 0000000140A06DE2: jnz     short loc_140A06DCF
 * 0000000140A06DE4: xor     r11d, r11d
 * 0000000140A06DE7: mov     rax, r8
 * 0000000140A06DEA: jmp     short loc_140A06DEF
 * 0000000140A06DEC: xor     r8d, eax
 * 0000000140A06DEF: shr     rax, 1Fh
 * 0000000140A06DF3: test    rax, rax
 * 0000000140A06DF6: jnz     short loc_140A06DEC
 * 0000000140A06DF8: mov     r13, [rsp+0CE0h+var_C70]
 * 0000000140A06DFD: btr     r8d, 1Fh
 * 0000000140A06E02: mov     [rbx+14h], r8d
 * 0000000140A06E06: mov     eax, 2
 * 0000000140A06E0B: add     [r14+828h], r15d
 * 0000000140A06E12: mov     rbx, r14
 * 0000000140A06E15: mov     [r14+958h], eax
 * 0000000140A06E1C: jmp     short loc_140A06E21
 * 0000000140A06E1E: xor     r11d, r11d
 * 0000000140A06E21: cmp     dword ptr [rbx+958h], 3
 * 0000000140A06E28: jge     loc_140A07065
 * 0000000140A06E2E: mov     r14d, [rbx+7E4h]
 * 0000000140A06E35: mov     r15d, 20h ; ' '
 * 0000000140A06E3B: mov     r12d, [rbx+838h]
 * 0000000140A06E42: cmp     r12d, 7
 * 0000000140A06E46: mov     r8d, [rbx+924h]
 * 0000000140A06E4D: cmovnz  r15d, r11d
 * 0000000140A06E51: lea     eax, [r14+30h]
 * 0000000140A06E55: cmp     eax, [rbx+0A1Ch]
 * 0000000140A06E5B: jbe     loc_140A06F3B
 * 0000000140A06E61: mov     edx, eax
 * 0000000140A06E63: mov     rcx, rbx
 * 0000000140A06E66: call    sub_140A0FB30
 * 0000000140A06E6B: xor     r11d, r11d
 * 0000000140A06E6E: mov     rsi, rax
 * 0000000140A06E71: test    rax, rax
 * 0000000140A06E74: jz      loc_140A07D98
 * 0000000140A06E7A: mov     ecx, [rbx+990h]
 * 0000000140A06E80: test    cl, 4
 * 0000000140A06E83: jnz     loc_140A06F32
 * 0000000140A06E89: mov     eax, [rbx+7E4h]
 * 0000000140A06E8F: lea     r9d, [r11+1]
 * 0000000140A06E93: mov     r8, [rbx+7C8h]
 * 0000000140A06E9A: and     ecx, 20000000h
 * 0000000140A06EA0: neg     ecx
 * 0000000140A06EA2: sbb     edx, edx
 * 0000000140A06EA4: and     edx, [rbx+924h]
 * 0000000140A06EAA: cmp     eax, 8
 * 0000000140A06EAD: jb      short loc_140A06EC4
 * 0000000140A06EAF: mov     ecx, eax
 * 0000000140A06EB1: shr     rcx, 3
 * 0000000140A06EB5: mov     [rbx], r11
 * 0000000140A06EB8: add     eax, 0FFFFFFF8h
 * 0000000140A06EBB: add     rbx, 8
 * 0000000140A06EBF: sub     rcx, r9
 * 0000000140A06EC2: jnz     short loc_140A06EB5
 * 0000000140A06EC4: test    eax, eax
 * 0000000140A06EC6: jz      short loc_140A06ED7
 * 0000000140A06EC8: mov     ecx, 0FFFFFFFFh
 * 0000000140A06ECD: mov     [rbx], r11b
 * 0000000140A06ED0: add     rbx, r9
 * 0000000140A06ED3: add     eax, ecx
 * 0000000140A06ED5: jnz     short loc_140A06ECD
 * 0000000140A06ED7: mov     ebx, [rsi+924h]
 * 0000000140A06EDD: mov     [rsi+924h], edx
 * 0000000140A06EE3: cmp     edx, 3
 * 0000000140A06EE6: jz      short loc_140A06F1A
 * 0000000140A06EE8: test    dword ptr [rsi+990h], 10000000h
 * 0000000140A06EF2: mov     ecx, r11d
 * 0000000140A06EF5: cmovz   ecx, edx
 * 0000000140A06EF8: test    ecx, ecx
 * 0000000140A06EFA: jz      short loc_140A06F11
 * 0000000140A06EFC: mov     rax, [rsi+228h]
 * 0000000140A06F03: lea     rcx, [r8-8]
 * 0000000140A06F07: mov     rdx, [rcx]
 * 0000000140A06F0A: call    KeGuardDispatchICall
 * 0000000140A06F0F: jmp     short loc_140A06F29
 * 0000000140A06F11: mov     rax, [rsi+100h]
 * 0000000140A06F18: jmp     short loc_140A06F21
 * 0000000140A06F1A: mov     rax, [rsi+368h]
 * 0000000140A06F21: mov     rcx, r8
 * 0000000140A06F24: call    KeGuardDispatchICall
 * 0000000140A06F29: mov     [rsi+924h], ebx
 * 0000000140A06F2F: xor     r11d, r11d
 * 0000000140A06F32: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140A06F39: jmp     short loc_140A06F44
 * 0000000140A06F3B: mov     rsi, rbx
 * 0000000140A06F3E: mov     [rbx+7E4h], eax
 * 0000000140A06F44: mov     r8d, 1
 * 0000000140A06F4A: lea     rbx, [rsi+r14]
 * 0000000140A06F4E: add     [rsi+80Ch], r8d
 * 0000000140A06F55: mov     rax, rbx
 * 0000000140A06F58: mov     [rbp+0BE0h+var_538], rbx
 * 0000000140A06F5F: lea     ecx, [r8+2Fh]
 * 0000000140A06F63: lea     edx, [rcx-2Ah]
 * 0000000140A06F66: mov     [rax], r11
 * 0000000140A06F69: add     ecx, 0FFFFFFF8h
 * 0000000140A06F6C: add     rax, 8
 * 0000000140A06F70: sub     rdx, r8
 * 0000000140A06F73: jnz     short loc_140A06F66
 * 0000000140A06F75: test    ecx, ecx
 * 0000000140A06F77: jz      short loc_140A06F88
 * 0000000140A06F79: mov     edx, 0FFFFFFFFh
 * 0000000140A06F7E: mov     [rax], r11b
 * 0000000140A06F81: add     rax, r8
 * 0000000140A06F84: add     ecx, edx
 * 0000000140A06F86: jnz     short loc_140A06F7E
 * 0000000140A06F88: mov     [rbx], r15d
 * 0000000140A06F8B: mov     r14d, 20h ; ' '
 * 0000000140A06F91: mov     [rbx+8], r13
 * 0000000140A06F95: cmp     r12d, 7
 * 0000000140A06F99: jnz     short loc_140A06FAD
 * 0000000140A06F9B: lea     r9, [rbx+18h]
 * 0000000140A06F9F: mov     r8d, r14d
 * 0000000140A06FA2: mov     rdx, r13
 * 0000000140A06FA5: mov     rcx, rsi
 * 0000000140A06FA8: call    sub_1403EA5FC
 * 0000000140A06FAD: mov     rcx, [rbp+0BE0h+var_C40]
 * 0000000140A06FB1: mov     r8, r13
 * 0000000140A06FB4: mov     [rbx+10h], r14d
 * 0000000140A06FB8: add     rcx, 40h ; '@'
 * 0000000140A06FBC: add     [rsi+828h], r14d
 * 0000000140A06FC3: mov     rax, r13
 * 0000000140A06FC6: mov     r11d, [rsi+814h]
 * 0000000140A06FCD: mov     rdx, [rsi+818h]
 * 0000000140A06FD4: cmp     r13, rcx
 * 0000000140A06FD7: jnb     short loc_140A06FEA
 * 0000000140A06FD9: mov     r9d, 40h ; '@'
 * 0000000140A06FDF: prefetchnta byte ptr [rax]
 * 0000000140A06FE2: add     rax, r9
 * 0000000140A06FE5: cmp     rax, rcx
 * 0000000140A06FE8: jb      short loc_140A06FDF
 * 0000000140A06FEA: mov     r10d, 4
 * 0000000140A06FF0: mov     r9d, r14d
 * 0000000140A06FF3: lea     r15d, [r10-3]
 * 0000000140A06FF7: xor     rdx, [r8]
 * 0000000140A06FFA: mov     ecx, r11d
 * 0000000140A06FFD: rol     rdx, cl
 * 0000000140A07000: add     r8, 8
 * 0000000140A07004: add     r9d, 0FFFFFFF8h
 * 0000000140A07008: sub     r10, r15
 * 0000000140A0700B: jnz     short loc_140A06FF7
 * 0000000140A0700D: test    r9d, r9d
 * 0000000140A07010: jz      short loc_140A07033
 * 0000000140A07012: mov     edi, 0FFFFFFFFh
 * 0000000140A07017: movzx   eax, byte ptr [r8]
 * 0000000140A0701B: mov     ecx, r11d
 * 0000000140A0701E: xor     rdx, rax
 * 0000000140A07021: add     r8, r15
 * 0000000140A07024: rol     rdx, cl
 * 0000000140A07027: add     r9d, edi
 * 0000000140A0702A: jnz     short loc_140A07017
 * 0000000140A0702C: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A07033: mov     rax, rdx
 * 0000000140A07036: shr     rax, 1Fh
 * 0000000140A0703A: xor     r11d, r11d
 * 0000000140A0703D: jmp     short loc_140A07045
 * 0000000140A0703F: xor     edx, eax
 * 0000000140A07041: shr     rax, 1Fh
 * 0000000140A07045: test    rax, rax
 * 0000000140A07048: jnz     short loc_140A0703F
 * 0000000140A0704A: btr     edx, 1Fh
 * 0000000140A0704E: mov     [rbx+14h], edx
 * 0000000140A07051: mov     rbx, rsi
 * 0000000140A07054: add     [rsi+828h], r14d
 * 0000000140A0705B: mov     dword ptr [rsi+958h], 3
 * 0000000140A07065: cmp     dword ptr [rbx+958h], 4
 * 0000000140A0706C: mov     r13, [rbp+0BE0h+var_C30]
 * 0000000140A07070: jge     loc_140A07318
 * 0000000140A07076: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A0707D: mov     r14d, [rbx+7E4h]
 * 0000000140A07084: mov     r12, [r13+0]
 * 0000000140A07088: mov     r8d, [rbx+924h]
 * 0000000140A0708F: mov     r15d, [rax+30h]
 * 0000000140A07093: shl     r15d, 2
 * 0000000140A07097: lea     eax, [r14+30h]
 * 0000000140A0709B: cmp     eax, [rbx+0A1Ch]
 * 0000000140A070A1: jbe     loc_140A07181
 * 0000000140A070A7: mov     edx, eax
 * 0000000140A070A9: mov     rcx, rbx
 * 0000000140A070AC: call    sub_140A0FB30
 * 0000000140A070B1: xor     r11d, r11d
 * 0000000140A070B4: mov     rsi, rax
 * 0000000140A070B7: test    rax, rax
 * 0000000140A070BA: jz      loc_140A07D98
 * 0000000140A070C0: mov     ecx, [rbx+990h]
 * 0000000140A070C6: test    cl, 4
 * 0000000140A070C9: jnz     loc_140A07178
 * 0000000140A070CF: mov     eax, [rbx+7E4h]
 * 0000000140A070D5: lea     r9d, [r11+1]
 * 0000000140A070D9: mov     r8, [rbx+7C8h]
 * 0000000140A070E0: and     ecx, 20000000h
 * 0000000140A070E6: neg     ecx
 * 0000000140A070E8: sbb     edx, edx
 * 0000000140A070EA: and     edx, [rbx+924h]
 * 0000000140A070F0: cmp     eax, 8
 * 0000000140A070F3: jb      short loc_140A0710A
 * 0000000140A070F5: mov     ecx, eax
 * 0000000140A070F7: shr     rcx, 3
 * 0000000140A070FB: mov     [rbx], r11
 * 0000000140A070FE: add     eax, 0FFFFFFF8h
 * 0000000140A07101: add     rbx, 8
 * 0000000140A07105: sub     rcx, r9
 * 0000000140A07108: jnz     short loc_140A070FB
 * 0000000140A0710A: test    eax, eax
 * 0000000140A0710C: jz      short loc_140A0711D
 * 0000000140A0710E: mov     ecx, 0FFFFFFFFh
 * 0000000140A07113: mov     [rbx], r11b
 * 0000000140A07116: add     rbx, r9
 * 0000000140A07119: add     eax, ecx
 * 0000000140A0711B: jnz     short loc_140A07113
 * 0000000140A0711D: mov     ebx, [rsi+924h]
 * 0000000140A07123: mov     [rsi+924h], edx
 * 0000000140A07129: cmp     edx, 3
 * 0000000140A0712C: jz      short loc_140A07160
 * 0000000140A0712E: test    dword ptr [rsi+990h], 10000000h
 * 0000000140A07138: mov     ecx, r11d
 * 0000000140A0713B: cmovz   ecx, edx
 * 0000000140A0713E: test    ecx, ecx
 * 0000000140A07140: jz      short loc_140A07157
 * 0000000140A07142: mov     rax, [rsi+228h]
 * 0000000140A07149: lea     rcx, [r8-8]
 * 0000000140A0714D: mov     rdx, [rcx]
 * 0000000140A07150: call    KeGuardDispatchICall
 * 0000000140A07155: jmp     short loc_140A0716F
 * 0000000140A07157: mov     rax, [rsi+100h]
 * 0000000140A0715E: jmp     short loc_140A07167
 * 0000000140A07160: mov     rax, [rsi+368h]
 * 0000000140A07167: mov     rcx, r8
 * 0000000140A0716A: call    KeGuardDispatchICall
 * 0000000140A0716F: mov     [rsi+924h], ebx
 * 0000000140A07175: xor     r11d, r11d
 * 0000000140A07178: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140A0717F: jmp     short loc_140A0718A
 * 0000000140A07181: mov     rsi, rbx
 * 0000000140A07184: mov     [rbx+7E4h], eax
 * 0000000140A0718A: mov     r8d, 1
 * 0000000140A07190: lea     rbx, [rsi+r14]
 * 0000000140A07194: add     [rsi+80Ch], r8d
 * 0000000140A0719B: mov     rax, rbx
 * 0000000140A0719E: mov     [rbp+0BE0h+var_530], rbx
 * 0000000140A071A5: lea     ecx, [r8+2Fh]
 * 0000000140A071A9: lea     edx, [rcx-2Ah]
 * 0000000140A071AC: mov     [rax], r11
 * 0000000140A071AF: add     ecx, 0FFFFFFF8h
 * 0000000140A071B2: add     rax, 8
 * 0000000140A071B6: sub     rdx, r8
 * 0000000140A071B9: jnz     short loc_140A071AC
 * 0000000140A071BB: test    ecx, ecx
 * 0000000140A071BD: jz      short loc_140A071CE
 * 0000000140A071BF: mov     edx, 0FFFFFFFFh
 * 0000000140A071C4: mov     [rax], r11b
 * 0000000140A071C7: add     rax, r8
 * 0000000140A071CA: add     ecx, edx
 * 0000000140A071CC: jnz     short loc_140A071C4
 * 0000000140A071CE: mov     dword ptr [rbx], 0Bh
 * 0000000140A071D4: mov     r9, r12
 * 0000000140A071D7: mov     [rbx+8], r12
 * 0000000140A071DB: mov     rax, r12
 * 0000000140A071DE: mov     [rbx+10h], r15d
 * 0000000140A071E2: add     [rsi+828h], r15d
 * 0000000140A071E9: mov     r10d, [rsi+814h]
 * 0000000140A071F0: mov     r14, [rsi+818h]
 * 0000000140A071F7: mov     ecx, r15d
 * 0000000140A071FA: add     rcx, r12
 * 0000000140A071FD: cmp     r12, rcx
 * 0000000140A07200: jnb     short loc_140A07212
 * 0000000140A07202: mov     edx, 40h ; '@'
 * 0000000140A07207: prefetchnta byte ptr [rax]
 * 0000000140A0720A: add     rax, rdx
 * 0000000140A0720D: cmp     rax, rcx
 * 0000000140A07210: jb      short loc_140A07207
 * 0000000140A07212: mov     r11d, r15d
 * 0000000140A07215: mov     r8, r14
 * 0000000140A07218: shr     r11d, 7
 * 0000000140A0721C: test    r11d, r11d
 * 0000000140A0721F: jz      short loc_140A07298
 * 0000000140A07221: mov     rdi, 7010008004002001h
 * 0000000140A0722B: mov     edx, 8
 * 0000000140A07230: lea     r13d, [rdx-7]
 * 0000000140A07234: mov     rax, [r9]
 * 0000000140A07237: mov     ecx, r10d
 * 0000000140A0723A: xor     rax, r8
 * 0000000140A0723D: mov     r8, [r9+8]
 * 0000000140A07241: rol     rax, cl
 * 0000000140A07244: add     r9, 10h
 * 0000000140A07248: xor     r8, rax
 * 0000000140A0724B: rol     r8, cl
 * 0000000140A0724E: sub     rdx, r13
 * 0000000140A07251: jnz     short loc_140A07234
 * 0000000140A07253: mov     rcx, r9
 * 0000000140A07256: sub     rcx, r12
 * 0000000140A07259: xor     rcx, r14
 * 0000000140A0725C: mov     rax, rcx
 * 0000000140A0725F: rol     rax, 11h
 * 0000000140A07263: xor     rcx, rax
 * 0000000140A07266: mov     rax, rdi
 * 0000000140A07269: mul     rcx
 * 0000000140A0726C: mov     [rbp+0BE0h+var_528], rdx
 * 0000000140A07273: xor     edx, eax
 * 0000000140A07275: xor     r10d, edx
 * 0000000140A07278: mov     rax, r13
 * 0000000140A0727B: and     r10d, 3Fh
 * 0000000140A0727F: cmovz   r10d, eax
 * 0000000140A07283: mov     eax, 0FFFFFFFFh
 * 0000000140A07288: add     r11d, eax
 * 0000000140A0728B: jnz     short loc_140A0722B
 * 0000000140A0728D: mov     r13, [rbp+0BE0h+var_C30]
 * 0000000140A07291: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A07298: mov     edx, r15d
 * 0000000140A0729B: mov     r14d, 1
 * 0000000140A072A1: and     edx, 7Fh
 * 0000000140A072A4: cmp     edx, 8
 * 0000000140A072A7: jb      short loc_140A072C5
 * 0000000140A072A9: mov     r11d, edx
 * 0000000140A072AC: shr     r11, 3
 * 0000000140A072B0: xor     r8, [r9]
 * 0000000140A072B3: mov     ecx, r10d
 * 0000000140A072B6: rol     r8, cl
 * 0000000140A072B9: add     r9, 8
 * 0000000140A072BD: add     edx, 0FFFFFFF8h
 * 0000000140A072C0: sub     r11, r14
 * 0000000140A072C3: jnz     short loc_140A072B0
 * 0000000140A072C5: xor     r11d, r11d
 * 0000000140A072C8: test    edx, edx
 * 0000000140A072CA: jz      short loc_140A072EA
 * 0000000140A072CC: mov     r11d, 0FFFFFFFFh
 * 0000000140A072D2: movzx   eax, byte ptr [r9]
 * 0000000140A072D6: mov     ecx, r10d
 * 0000000140A072D9: xor     r8, rax
 * 0000000140A072DC: add     r9, r14
 * 0000000140A072DF: rol     r8, cl
 * 0000000140A072E2: add     edx, r11d
 * 0000000140A072E5: jnz     short loc_140A072D2
 * 0000000140A072E7: xor     r11d, r11d
 * 0000000140A072EA: mov     rax, r8
 * 0000000140A072ED: jmp     short loc_140A072F2
 * 0000000140A072EF: xor     r8d, eax
 * 0000000140A072F2: shr     rax, 1Fh
 * 0000000140A072F6: test    rax, rax
 * 0000000140A072F9: jnz     short loc_140A072EF
 * 0000000140A072FB: btr     r8d, 1Fh
 * 0000000140A07300: mov     [rbx+14h], r8d
 * 0000000140A07304: mov     rbx, rsi
 * 0000000140A07307: add     [rsi+828h], r15d
 * 0000000140A0730E: mov     dword ptr [rsi+958h], 4
 * 0000000140A07318: cmp     dword ptr [rbx+958h], 5
 * 0000000140A0731F: jge     loc_140A0755A
 * 0000000140A07325: mov     r14d, [rbx+7E4h]
 * 0000000140A0732C: mov     r15d, 20h ; ' '
 * 0000000140A07332: mov     r12d, [rbx+838h]
 * 0000000140A07339: cmp     r12d, 7
 * 0000000140A0733D: mov     r8d, [rbx+924h]
 * 0000000140A07344: cmovnz  r15d, r11d
 * 0000000140A07348: lea     eax, [r14+30h]
 * 0000000140A0734C: cmp     eax, [rbx+0A1Ch]
 * 0000000140A07352: jbe     loc_140A07432
 * 0000000140A07358: mov     edx, eax
 * 0000000140A0735A: mov     rcx, rbx
 * 0000000140A0735D: call    sub_140A0FB30
 * 0000000140A07362: xor     r11d, r11d
 * 0000000140A07365: mov     rsi, rax
 * 0000000140A07368: test    rax, rax
 * 0000000140A0736B: jz      loc_140A07D98
 * 0000000140A07371: mov     ecx, [rbx+990h]
 * 0000000140A07377: test    cl, 4
 * 0000000140A0737A: jnz     loc_140A07429
 * 0000000140A07380: mov     eax, [rbx+7E4h]
 * 0000000140A07386: lea     r9d, [r11+1]
 * 0000000140A0738A: mov     r8, [rbx+7C8h]
 * 0000000140A07391: and     ecx, 20000000h
 * 0000000140A07397: neg     ecx
 * 0000000140A07399: sbb     edx, edx
 * 0000000140A0739B: and     edx, [rbx+924h]
 * 0000000140A073A1: cmp     eax, 8
 * 0000000140A073A4: jb      short loc_140A073BB
 * 0000000140A073A6: mov     ecx, eax
 * 0000000140A073A8: shr     rcx, 3
 * 0000000140A073AC: mov     [rbx], r11
 * 0000000140A073AF: add     eax, 0FFFFFFF8h
 * 0000000140A073B2: add     rbx, 8
 * 0000000140A073B6: sub     rcx, r9
 * 0000000140A073B9: jnz     short loc_140A073AC
 * 0000000140A073BB: test    eax, eax
 * 0000000140A073BD: jz      short loc_140A073CE
 * 0000000140A073BF: mov     ecx, 0FFFFFFFFh
 * 0000000140A073C4: mov     [rbx], r11b
 * 0000000140A073C7: add     rbx, r9
 * 0000000140A073CA: add     eax, ecx
 * 0000000140A073CC: jnz     short loc_140A073C4
 * 0000000140A073CE: mov     ebx, [rsi+924h]
 * 0000000140A073D4: mov     [rsi+924h], edx
 * 0000000140A073DA: cmp     edx, 3
 * 0000000140A073DD: jz      short loc_140A07411
 * 0000000140A073DF: test    dword ptr [rsi+990h], 10000000h
 * 0000000140A073E9: mov     ecx, r11d
 * 0000000140A073EC: cmovz   ecx, edx
 * 0000000140A073EF: test    ecx, ecx
 * 0000000140A073F1: jz      short loc_140A07408
 * 0000000140A073F3: mov     rax, [rsi+228h]
 * 0000000140A073FA: lea     rcx, [r8-8]
 * 0000000140A073FE: mov     rdx, [rcx]
 * 0000000140A07401: call    KeGuardDispatchICall
 * 0000000140A07406: jmp     short loc_140A07420
 * 0000000140A07408: mov     rax, [rsi+100h]
 * 0000000140A0740F: jmp     short loc_140A07418
 * 0000000140A07411: mov     rax, [rsi+368h]
 * 0000000140A07418: mov     rcx, r8
 * 0000000140A0741B: call    KeGuardDispatchICall
 * 0000000140A07420: mov     [rsi+924h], ebx
 * 0000000140A07426: xor     r11d, r11d
 * 0000000140A07429: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140A07430: jmp     short loc_140A0743B
 * 0000000140A07432: mov     rsi, rbx
 * 0000000140A07435: mov     [rbx+7E4h], eax
 * 0000000140A0743B: mov     r8d, 1
 * 0000000140A07441: lea     rbx, [rsi+r14]
 * 0000000140A07445: add     [rsi+80Ch], r8d
 * 0000000140A0744C: mov     rax, rbx
 * 0000000140A0744F: mov     [rbp+0BE0h+var_520], rbx
 * 0000000140A07456: lea     ecx, [r8+2Fh]
 * 0000000140A0745A: lea     edx, [rcx-2Ah]
 * 0000000140A0745D: mov     [rax], r11
 * 0000000140A07460: add     ecx, 0FFFFFFF8h
 * 0000000140A07463: add     rax, 8
 * 0000000140A07467: sub     rdx, r8
 * 0000000140A0746A: jnz     short loc_140A0745D
 * 0000000140A0746C: test    ecx, ecx
 * 0000000140A0746E: jz      short loc_140A0747F
 * 0000000140A07470: mov     edx, 0FFFFFFFFh
 * 0000000140A07475: mov     [rax], r11b
 * 0000000140A07478: add     rax, r8
 * 0000000140A0747B: add     ecx, edx
 * 0000000140A0747D: jnz     short loc_140A07475
 * 0000000140A0747F: mov     [rbx], r15d
 * 0000000140A07482: mov     r14d, 20h ; ' '
 * 0000000140A07488: mov     [rbx+8], r13
 * 0000000140A0748C: cmp     r12d, 7
 * 0000000140A07490: jnz     short loc_140A074A4
 * 0000000140A07492: lea     r9, [rbx+18h]
 * 0000000140A07496: mov     r8d, r14d
 * 0000000140A07499: mov     rdx, r13
 * 0000000140A0749C: mov     rcx, rsi
 * 0000000140A0749F: call    sub_1403EA5FC
 * 0000000140A074A4: mov     rcx, [rbp+0BE0h+arg_8]
 * 0000000140A074AB: mov     r8, r13
 * 0000000140A074AE: mov     [rbx+10h], r14d
 * 0000000140A074B2: add     rcx, 40h ; '@'
 * 0000000140A074B6: add     [rsi+828h], r14d
 * 0000000140A074BD: mov     rax, r13
 * 0000000140A074C0: mov     r11d, [rsi+814h]
 * 0000000140A074C7: mov     rdx, [rsi+818h]
 * 0000000140A074CE: cmp     r13, rcx
 * 0000000140A074D1: jnb     short loc_140A074E4
 * 0000000140A074D3: mov     r9d, 40h ; '@'
 * 0000000140A074D9: prefetchnta byte ptr [rax]
 * 0000000140A074DC: add     rax, r9
 * 0000000140A074DF: cmp     rax, rcx
 * 0000000140A074E2: jb      short loc_140A074D9
 * 0000000140A074E4: mov     r10d, 4
 * 0000000140A074EA: mov     r9d, r14d
 * 0000000140A074ED: lea     r12d, [r10-3]
 * 0000000140A074F1: xor     rdx, [r8]
 * 0000000140A074F4: mov     ecx, r11d
 * 0000000140A074F7: rol     rdx, cl
 * 0000000140A074FA: add     r8, 8
 * 0000000140A074FE: add     r9d, 0FFFFFFF8h
 * 0000000140A07502: sub     r10, r12
 * 0000000140A07505: jnz     short loc_140A074F1
 * 0000000140A07507: xor     r15d, r15d
 * 0000000140A0750A: test    r9d, r9d
 * 0000000140A0750D: jz      short loc_140A0752D
 * 0000000140A0750F: mov     r15d, 0FFFFFFFFh
 * 0000000140A07515: movzx   eax, byte ptr [r8]
 * 0000000140A07519: mov     ecx, r11d
 * 0000000140A0751C: xor     rdx, rax
 * 0000000140A0751F: add     r8, r12
 * 0000000140A07522: rol     rdx, cl
 * 0000000140A07525: add     r9d, r15d
 * 0000000140A07528: jnz     short loc_140A07515
 * 0000000140A0752A: xor     r15d, r15d
 * 0000000140A0752D: mov     rax, rdx
 * 0000000140A07530: jmp     short loc_140A07534
 * 0000000140A07532: xor     edx, eax
 * 0000000140A07534: shr     rax, 1Fh
 * 0000000140A07538: test    rax, rax
 * 0000000140A0753B: jnz     short loc_140A07532
 * 0000000140A0753D: btr     edx, 1Fh
 * 0000000140A07541: mov     [rbx+14h], edx
 * 0000000140A07544: mov     rbx, rsi
 * 0000000140A07547: add     [rsi+828h], r14d
 * 0000000140A0754E: mov     dword ptr [rsi+958h], 5
 * 0000000140A07558: jmp     short loc_140A0755D
 * 0000000140A0755A: xor     r15d, r15d
 * 0000000140A0755D: mov     eax, [rbx+958h]
 * 0000000140A07563: mov     r12d, 6
 * 0000000140A07569: mov     rsi, rbx
 * 0000000140A0756C: mov     r14, rbx
 * 0000000140A0756F: cmp     eax, r12d
 * 0000000140A07572: jge     loc_140A0794C
 * 0000000140A07578: test    dword ptr [rbx+990h], 40000000h
 * 0000000140A07582: mov     r13d, r15d
 * 0000000140A07585: mov     r15, [rbp+0BE0h+var_C40]
 * 0000000140A07589: mov     rax, [r15+20h]
 * 0000000140A0758D: mov     [rbp+0BE0h+var_BD8], rax
 * 0000000140A07591: jnz     loc_140A07931
 * 0000000140A07597: xor     eax, eax
 * 0000000140A07599: mov     ebx, eax
 * 0000000140A0759B: cmp     [r15+30h], eax
 * 0000000140A0759F: jbe     loc_140A07931
 * 0000000140A075A5: mov     rdi, [rbp+0BE0h+var_BD8]
 * 0000000140A075A9: mov     eax, ebx
 * 0000000140A075AB: lea     rdx, [rbp+0BE0h+var_898]
 * 0000000140A075B2: xor     r8d, r8d
 * 0000000140A075B5: movsxd  rcx, dword ptr [rdi+rax*4]
 * 0000000140A075B9: mov     rax, [rsi+260h]
 * 0000000140A075C0: sar     rcx, 4
 * 0000000140A075C4: add     rcx, rdi
 * 0000000140A075C7: call    KeGuardDispatchICall
 * 0000000140A075CC: mov     r9d, 1
 * 0000000140A075D2: test    rax, rax
 * 0000000140A075D5: jnz     short loc_140A075DA
 * 0000000140A075D7: add     r13d, r9d
 * 0000000140A075DA: add     ebx, r9d
 * 0000000140A075DD: cmp     ebx, [r15+30h]
 * 0000000140A075E1: jb      short loc_140A075A9
 * 0000000140A075E3: xor     r15d, r15d
 * 0000000140A075E6: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A075ED: test    r13d, r13d
 * 0000000140A075F0: jz      loc_140A07934
 * 0000000140A075F6: mov     r14d, [rsi+7E4h]
 * 0000000140A075FD: mov     ecx, r13d
 * 0000000140A07600: mov     r8d, [rsi+924h]
 * 0000000140A07607: shl     ecx, 4
 * 0000000140A0760A: add     ecx, 30h ; '0'
 * 0000000140A0760D: add     ecx, r14d
 * 0000000140A07610: cmp     ecx, [rsi+0A1Ch]
 * 0000000140A07616: jbe     loc_140A07703
 * 0000000140A0761C: mov     edx, ecx
 * 0000000140A0761E: mov     rcx, rsi
 * 0000000140A07621: call    sub_140A0FB30
 * 0000000140A07626: mov     rbx, rax
 * 0000000140A07629: test    rax, rax
 * 0000000140A0762C: jz      loc_140A076F6
 * 0000000140A07632: mov     ecx, [rsi+990h]
 * 0000000140A07638: test    cl, 4
 * 0000000140A0763B: jnz     loc_140A076E7
 * 0000000140A07641: mov     eax, [rsi+7E4h]
 * 0000000140A07647: lea     r9d, [r15+1]
 * 0000000140A0764B: mov     r8, [rsi+7C8h]
 * 0000000140A07652: and     ecx, 20000000h
 * 0000000140A07658: neg     ecx
 * 0000000140A0765A: sbb     edx, edx
 * 0000000140A0765C: and     edx, [rsi+924h]
 * 0000000140A07662: cmp     eax, 8
 * 0000000140A07665: jb      short loc_140A0767C
 * 0000000140A07667: mov     ecx, eax
 * 0000000140A07669: shr     rcx, 3
 * 0000000140A0766D: mov     [rsi], r15
 * 0000000140A07670: add     eax, 0FFFFFFF8h
 * 0000000140A07673: add     rsi, 8
 * 0000000140A07677: sub     rcx, r9
 * 0000000140A0767A: jnz     short loc_140A0766D
 * 0000000140A0767C: test    eax, eax
 * 0000000140A0767E: jz      short loc_140A0768F
 * 0000000140A07680: mov     ecx, 0FFFFFFFFh
 * 0000000140A07685: mov     [rsi], r15b
 * 0000000140A07688: add     rsi, r9
 * 0000000140A0768B: add     eax, ecx
 * 0000000140A0768D: jnz     short loc_140A07685
 * 0000000140A0768F: mov     esi, [rbx+924h]
 * 0000000140A07695: mov     [rbx+924h], edx
 * 0000000140A0769B: cmp     edx, 3
 * 0000000140A0769E: jz      short loc_140A076D2
 * 0000000140A076A0: test    dword ptr [rbx+990h], 10000000h
 * 0000000140A076AA: mov     ecx, r15d
 * 0000000140A076AD: cmovz   ecx, edx
 * 0000000140A076B0: test    ecx, ecx
 * 0000000140A076B2: jz      short loc_140A076C9
 * 0000000140A076B4: mov     rax, [rbx+228h]
 * 0000000140A076BB: lea     rcx, [r8-8]
 * 0000000140A076BF: mov     rdx, [rcx]
 * 0000000140A076C2: call    KeGuardDispatchICall
 * 0000000140A076C7: jmp     short loc_140A076E1
 * 0000000140A076C9: mov     rax, [rbx+100h]
 * 0000000140A076D0: jmp     short loc_140A076D9
 * 0000000140A076D2: mov     rax, [rbx+368h]
 * 0000000140A076D9: mov     rcx, r8
 * 0000000140A076DC: call    KeGuardDispatchICall
 * 0000000140A076E1: mov     [rbx+924h], esi
 * 0000000140A076E7: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140A076EE: mov     r9d, 1
 * 0000000140A076F4: jmp     short loc_140A0770C
 * 0000000140A076F6: mov     eax, 0C000022Dh
 * 0000000140A076FB: mov     r14, rsi
 * 0000000140A076FE: jmp     loc_140A07937
 * 0000000140A07703: mov     rbx, rsi
 * 0000000140A07706: mov     [rsi+7E4h], ecx
 * 0000000140A0770C: add     [rbx+80Ch], r9d
 * 0000000140A07713: lea     rcx, [rbx+r14]
 * 0000000140A07717: mov     [rbp+0BE0h+var_838], rcx
 * 0000000140A0771E: mov     rax, rcx
 * 0000000140A07721: mov     edx, 30h ; '0'
 * 0000000140A07726: mov     r8, r12
 * 0000000140A07729: mov     [rax], r15
 * 0000000140A0772C: add     edx, 0FFFFFFF8h
 * 0000000140A0772F: add     rax, 8
 * 0000000140A07733: sub     r8, r9
 * 0000000140A07736: jnz     short loc_140A07729
 * 0000000140A07738: test    edx, edx
 * 0000000140A0773A: jz      short loc_140A0774D
 * 0000000140A0773C: mov     r8d, 0FFFFFFFFh
 * 0000000140A07742: mov     [rax], r15b
 * 0000000140A07745: add     rax, r9
 * 0000000140A07748: add     edx, r8d
 * 0000000140A0774B: jnz     short loc_140A07742
 * 0000000140A0774D: mov     dword ptr [rcx], 0Ah
 * 0000000140A07753: mov     [rcx+8], r15
 * 0000000140A07757: mov     [rcx+10h], r15d
 * 0000000140A0775B: mov     rdx, [rbx+818h]
 * 0000000140A07762: mov     rax, rdx
 * 0000000140A07765: jmp     short loc_140A07769
 * 0000000140A07767: xor     edx, eax
 * 0000000140A07769: shr     rax, 1Fh
 * 0000000140A0776D: test    rax, rax
 * 0000000140A07770: jnz     short loc_140A07767
 * 0000000140A07772: btr     edx, 1Fh
 * 0000000140A07776: mov     r14, rbx
 * 0000000140A07779: mov     [rcx+14h], edx
 * 0000000140A0777C: mov     rax, [rbp+0BE0h+var_838]
 * 0000000140A07783: mov     [rbp+0BE0h+var_A10], rax
 * 0000000140A0778A: mov     [rax+18h], r9d
 * 0000000140A0778E: mov     rax, [rbp+0BE0h+var_A10]
 * 0000000140A07795: mov     r9, [rbp+0BE0h+var_C40]
 * 0000000140A07799: mov     [rax+1Ch], r13d
 * 0000000140A0779D: xor     eax, eax
 * 0000000140A0779F: mov     r12d, eax
 * 0000000140A077A2: mov     rcx, [rbp+0BE0h+var_A10]
 * 0000000140A077A9: lea     r15, [rcx+30h]
 * 0000000140A077AD: cmp     [r9+30h], eax
 * 0000000140A077B1: jbe     loc_140A078A9
 * 0000000140A077B7: mov     rcx, [rbp+0BE0h+var_BD8]
 * 0000000140A077BB: lea     rdx, [rbp+0BE0h+var_898]
 * 0000000140A077C2: mov     eax, r12d
 * 0000000140A077C5: xor     r8d, r8d
 * 0000000140A077C8: movsxd  rsi, dword ptr [rcx+rax*4]
 * 0000000140A077CC: mov     rax, [rbx+260h]
 * 0000000140A077D3: sar     rsi, 4
 * 0000000140A077D7: add     rsi, rcx
 * 0000000140A077DA: mov     rcx, rsi
 * 0000000140A077DD: mov     [rsp+0CE0h+var_C70], rsi
 * 0000000140A077E2: call    KeGuardDispatchICall
 * 0000000140A077E7: test    rax, rax
 * 0000000140A077EA: jnz     loc_140A07889
 * 0000000140A077F0: lea     r11d, [rax+4]
 * 0000000140A077F4: mov     r8, rsi
 * 0000000140A077F7: add     [rbx+828h], r11d
 * 0000000140A077FE: lea     rcx, [rsi+4]
 * 0000000140A07802: mov     r10d, [rbx+814h]
 * 0000000140A07809: mov     rax, rsi
 * 0000000140A0780C: mov     rdx, [rbx+818h]
 * 0000000140A07813: cmp     rsi, rcx
 * 0000000140A07816: jnb     short loc_140A07827
 * 0000000140A07818: lea     r9d, [r11+3Ch]
 * 0000000140A0781C: prefetchnta byte ptr [rax]
 * 0000000140A0781F: add     rax, r9
 * 0000000140A07822: cmp     rax, rcx
 * 0000000140A07825: jb      short loc_140A0781C
 * 0000000140A07827: mov     r9d, r11d
 * 0000000140A0782A: mov     edi, 1
 * 0000000140A0782F: mov     esi, 0FFFFFFFFh
 * 0000000140A07834: movzx   eax, byte ptr [r8]
 * 0000000140A07838: mov     ecx, r10d
 * 0000000140A0783B: xor     rdx, rax
 * 0000000140A0783E: add     r8, rdi
 * 0000000140A07841: rol     rdx, cl
 * 0000000140A07844: add     r9d, esi
 * 0000000140A07847: jnz     short loc_140A07834
 * 0000000140A07849: mov     rsi, [rsp+0CE0h+var_C70]
 * 0000000140A0784E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A07855: mov     rax, rdx
 * 0000000140A07858: jmp     short loc_140A0785C
 * 0000000140A0785A: xor     edx, eax
 * 0000000140A0785C: shr     rax, 1Fh
 * 0000000140A07860: test    rax, rax
 * 0000000140A07863: jnz     short loc_140A0785A
 * 0000000140A07865: xor     edx, [r15]
 * 0000000140A07868: mov     eax, 0FFFFFFFFh
 * 0000000140A0786D: btr     edx, 1Fh
 * 0000000140A07871: xor     [r15], edx
 * 0000000140A07874: mov     [r15+4], r11d
 * 0000000140A07878: mov     [r15+8], rsi
 * 0000000140A0787C: add     r15, 10h
 * 0000000140A07880: add     r13d, eax
 * 0000000140A07883: jz      loc_140A0792B
 * 0000000140A07889: mov     rax, [rbp+0BE0h+var_C40]
 * 0000000140A0788D: mov     r9d, 1
 * 0000000140A07893: add     r12d, r9d
 * 0000000140A07896: cmp     r12d, [rax+30h]
 * 0000000140A0789A: jb      loc_140A077B7
 * 0000000140A078A0: mov     rcx, [rbp+0BE0h+var_A10]
 * 0000000140A078A7: jmp     short loc_140A078AF
 * 0000000140A078A9: mov     r9d, 1
 * 0000000140A078AF: xor     r15d, r15d
 * 0000000140A078B2: test    r13d, r13d
 * 0000000140A078B5: jz      loc_140A07AAE
 * 0000000140A078BB: cmp     [rbx+8F8h], r15d
 * 0000000140A078C2: jnz     loc_140A07D9B
 * 0000000140A078C8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A078D2: add     rax, rbx
 * 0000000140A078D5: mov     [rbx+900h], rax
 * 0000000140A078DC: test    rcx, rcx
 * 0000000140A078DF: jz      short loc_140A078F0
 * 0000000140A078E1: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A078EB: add     rax, rcx
 * 0000000140A078EE: jmp     short loc_140A078F3
 * 0000000140A078F0: mov     rax, r15
 * 0000000140A078F3: mov     [rbx+908h], rax
 * 0000000140A078FA: test    rcx, rcx
 * 0000000140A078FD: jz      short loc_140A07904
 * 0000000140A078FF: movsxd  rax, dword ptr [rcx]
 * 0000000140A07902: jmp     short loc_140A07907
 * 0000000140A07904: mov     rax, r15
 * 0000000140A07907: mov     [rbx+910h], rax
 * 0000000140A0790E: mov     [rbx+918h], r15
 * 0000000140A07915: mov     [rbx+8F8h], r9d
 * 0000000140A0791C: xor     edx, edx
 * 0000000140A0791E: mov     rcx, rbx
 * 0000000140A07921: call    $$b8
 * 0000000140A07926: jmp     loc_140A07D9B
 * 0000000140A0792B: mov     r12d, 6
 * 0000000140A07931: xor     r15d, r15d
 * 0000000140A07934: mov     eax, r15d
 * 0000000140A07937: mov     rbx, r14
 * 0000000140A0793A: test    eax, eax
 * 0000000140A0793C: js      loc_140A07D9B
 * 0000000140A07942: mov     [r14+958h], r12d
 * 0000000140A07949: mov     eax, r12d
 * 0000000140A0794C: cmp     eax, 7
 * 0000000140A0794F: jge     loc_140A07D2A
 * 0000000140A07955: test    dword ptr [r14+990h], 40000000h
 * 0000000140A07960: mov     r13d, r15d
 * 0000000140A07963: mov     rdx, [rbp+0BE0h+var_C30]
 * 0000000140A07967: mov     rsi, [rdx]
 * 0000000140A0796A: mov     [rbp+0BE0h+var_C40], rsi
 * 0000000140A0796E: jnz     loc_140A07D15
 * 0000000140A07974: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A0797B: mov     ebx, r15d
 * 0000000140A0797E: cmp     [rax+30h], r15d
 * 0000000140A07982: jbe     loc_140A07D15
 * 0000000140A07988: mov     rdi, rax
 * 0000000140A0798B: mov     eax, ebx
 * 0000000140A0798D: lea     rdx, [rbp+0BE0h+var_8C0]
 * 0000000140A07994: xor     r8d, r8d
 * 0000000140A07997: movsxd  rcx, dword ptr [rsi+rax*4]
 * 0000000140A0799B: mov     rax, [r14+260h]
 * 0000000140A079A2: sar     rcx, 4
 * 0000000140A079A6: add     rcx, rsi
 * 0000000140A079A9: call    KeGuardDispatchICall
 * 0000000140A079AE: mov     r10d, 1
 * 0000000140A079B4: test    rax, rax
 * 0000000140A079B7: jnz     short loc_140A079BC
 * 0000000140A079B9: add     r13d, r10d
 * 0000000140A079BC: add     ebx, r10d
 * 0000000140A079BF: cmp     ebx, [rdi+30h]
 * 0000000140A079C2: jb      short loc_140A0798B
 * 0000000140A079C4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A079CB: test    r13d, r13d
 * 0000000140A079CE: jz      loc_140A07D15
 * 0000000140A079D4: mov     r15d, [r14+7E4h]
 * 0000000140A079DB: mov     ecx, r13d
 * 0000000140A079DE: mov     r8d, [r14+924h]
 * 0000000140A079E5: shl     ecx, 4
 * 0000000140A079E8: add     ecx, 30h ; '0'
 * 0000000140A079EB: add     ecx, r15d
 * 0000000140A079EE: cmp     ecx, [r14+0A1Ch]
 * 0000000140A079F5: jbe     loc_140A07AF7
 * 0000000140A079FB: mov     edx, ecx
 * 0000000140A079FD: mov     rcx, r14
 * 0000000140A07A00: call    sub_140A0FB30
 * 0000000140A07A05: xor     r9d, r9d
 * 0000000140A07A08: mov     rbx, rax
 * 0000000140A07A0B: test    rax, rax
 * 0000000140A07A0E: jz      loc_140A07AEA
 * 0000000140A07A14: mov     ecx, [r14+990h]
 * 0000000140A07A1B: test    cl, 4
 * 0000000140A07A1E: jnz     loc_140A07ADB
 * 0000000140A07A24: mov     eax, [r14+7E4h]
 * 0000000140A07A2B: lea     r10d, [r9+1]
 * 0000000140A07A2F: mov     r8, [r14+7C8h]
 * 0000000140A07A36: and     ecx, 20000000h
 * 0000000140A07A3C: neg     ecx
 * 0000000140A07A3E: sbb     edx, edx
 * 0000000140A07A40: and     edx, [r14+924h]
 * 0000000140A07A47: cmp     eax, 8
 * 0000000140A07A4A: jb      short loc_140A07A61
 * 0000000140A07A4C: mov     ecx, eax
 * 0000000140A07A4E: shr     rcx, 3
 * 0000000140A07A52: mov     [r14], r9
 * 0000000140A07A55: add     eax, 0FFFFFFF8h
 * 0000000140A07A58: add     r14, 8
 * 0000000140A07A5C: sub     rcx, r10
 * 0000000140A07A5F: jnz     short loc_140A07A52
 * 0000000140A07A61: test    eax, eax
 * 0000000140A07A63: jz      short loc_140A07A74
 * 0000000140A07A65: mov     ecx, 0FFFFFFFFh
 * 0000000140A07A6A: mov     [r14], r9b
 * 0000000140A07A6D: add     r14, r10
 * 0000000140A07A70: add     eax, ecx
 * 0000000140A07A72: jnz     short loc_140A07A6A
 * 0000000140A07A74: mov     esi, [rbx+924h]
 * 0000000140A07A7A: mov     [rbx+924h], edx
 * 0000000140A07A80: cmp     edx, 3
 * 0000000140A07A83: jz      short loc_140A07AC2
 * 0000000140A07A85: test    dword ptr [rbx+990h], 10000000h
 * 0000000140A07A8F: mov     ecx, r9d
 * 0000000140A07A92: cmovz   ecx, edx
 * 0000000140A07A95: test    ecx, ecx
 * 0000000140A07A97: jz      short loc_140A07AB9
 * 0000000140A07A99: mov     rax, [rbx+228h]
 * 0000000140A07AA0: lea     rcx, [r8-8]
 * 0000000140A07AA4: mov     rdx, [rcx]
 * 0000000140A07AA7: call    KeGuardDispatchICall
 * 0000000140A07AAC: jmp     short loc_140A07AD1
 * 0000000140A07AAE: mov     r12d, 6
 * 0000000140A07AB4: jmp     loc_140A07934
 * 0000000140A07AB9: mov     rax, [rbx+100h]
 * 0000000140A07AC0: jmp     short loc_140A07AC9
 * 0000000140A07AC2: mov     rax, [rbx+368h]
 * 0000000140A07AC9: mov     rcx, r8
 * 0000000140A07ACC: call    KeGuardDispatchICall
 * 0000000140A07AD1: mov     [rbx+924h], esi
 * 0000000140A07AD7: mov     rsi, [rbp+0BE0h+var_C40]
 * 0000000140A07ADB: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140A07AE2: mov     r10d, 1
 * 0000000140A07AE8: jmp     short loc_140A07B01
 * 0000000140A07AEA: mov     eax, 0C000022Dh
 * 0000000140A07AEF: xor     r15d, r15d
 * 0000000140A07AF2: jmp     loc_140A07D18
 * 0000000140A07AF7: mov     rbx, r14
 * 0000000140A07AFA: mov     [r14+7E4h], ecx
 * 0000000140A07B01: add     [rbx+80Ch], r10d
 * 0000000140A07B08: lea     rcx, [rbx+r15]
 * 0000000140A07B0C: mov     [rbp+0BE0h+var_8C8], rcx
 * 0000000140A07B13: mov     rax, rcx
 * 0000000140A07B16: xor     r9d, r9d
 * 0000000140A07B19: mov     edx, 30h ; '0'
 * 0000000140A07B1E: mov     r8, r12
 * 0000000140A07B21: mov     [rax], r9
 * 0000000140A07B24: add     edx, 0FFFFFFF8h
 * 0000000140A07B27: add     rax, 8
 * 0000000140A07B2B: sub     r8, r10
 * 0000000140A07B2E: jnz     short loc_140A07B21
 * 0000000140A07B30: test    edx, edx
 * 0000000140A07B32: jz      short loc_140A07B45
 * 0000000140A07B34: mov     r8d, 0FFFFFFFFh
 * 0000000140A07B3A: mov     [rax], r9b
 * 0000000140A07B3D: add     rax, r10
 * 0000000140A07B40: add     edx, r8d
 * 0000000140A07B43: jnz     short loc_140A07B3A
 * 0000000140A07B45: mov     dword ptr [rcx], 0Ah
 * 0000000140A07B4B: mov     [rcx+8], r9
 * 0000000140A07B4F: mov     [rcx+10h], r9d
 * 0000000140A07B53: mov     rdx, [rbx+818h]
 * 0000000140A07B5A: mov     rax, rdx
 * 0000000140A07B5D: jmp     short loc_140A07B61
 * 0000000140A07B5F: xor     edx, eax
 * 0000000140A07B61: shr     rax, 1Fh
 * 0000000140A07B65: test    rax, rax
 * 0000000140A07B68: jnz     short loc_140A07B5F
 * 0000000140A07B6A: btr     edx, 1Fh
 * 0000000140A07B6E: mov     r14, rbx
 * 0000000140A07B71: mov     [rcx+14h], edx
 * 0000000140A07B74: mov     r12d, r9d
 * 0000000140A07B77: mov     rax, [rbp+0BE0h+var_8C8]
 * 0000000140A07B7E: mov     [rbp+0BE0h+var_A58], rax
 * 0000000140A07B85: mov     [rax+18h], r10d
 * 0000000140A07B89: mov     rax, [rbp+0BE0h+var_A58]
 * 0000000140A07B90: mov     [rax+1Ch], r13d
 * 0000000140A07B94: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A07B9B: mov     rcx, [rbp+0BE0h+var_A58]
 * 0000000140A07BA2: lea     r15, [rcx+30h]
 * 0000000140A07BA6: cmp     [rax+30h], r9d
 * 0000000140A07BAA: jbe     loc_140A07CA4
 * 0000000140A07BB0: mov     eax, r12d
 * 0000000140A07BB3: lea     rdx, [rbp+0BE0h+var_8C0]
 * 0000000140A07BBA: xor     r8d, r8d
 * 0000000140A07BBD: movsxd  rsi, dword ptr [rsi+rax*4]
 * 0000000140A07BC1: mov     rax, [rbx+260h]
 * 0000000140A07BC8: sar     rsi, 4
 * 0000000140A07BCC: add     rsi, [rbp+0BE0h+var_C40]
 * 0000000140A07BD0: mov     rcx, rsi
 * 0000000140A07BD3: mov     [rsp+0CE0h+var_C70], rsi
 * 0000000140A07BD8: call    KeGuardDispatchICall
 * 0000000140A07BDD: test    rax, rax
 * 0000000140A07BE0: jnz     loc_140A07C7F
 * 0000000140A07BE6: lea     r11d, [rax+4]
 * 0000000140A07BEA: mov     r8, rsi
 * 0000000140A07BED: add     [rbx+828h], r11d
 * 0000000140A07BF4: lea     rcx, [rsi+4]
 * 0000000140A07BF8: mov     r10d, [rbx+814h]
 * 0000000140A07BFF: mov     rax, rsi
 * 0000000140A07C02: mov     rdx, [rbx+818h]
 * 0000000140A07C09: cmp     rsi, rcx
 * 0000000140A07C0C: jnb     short loc_140A07C1D
 * 0000000140A07C0E: lea     r9d, [r11+3Ch]
 * 0000000140A07C12: prefetchnta byte ptr [rax]
 * 0000000140A07C15: add     rax, r9
 * 0000000140A07C18: cmp     rax, rcx
 * 0000000140A07C1B: jb      short loc_140A07C12
 * 0000000140A07C1D: mov     r9d, r11d
 * 0000000140A07C20: mov     edi, 1
 * 0000000140A07C25: mov     esi, 0FFFFFFFFh
 * 0000000140A07C2A: movzx   eax, byte ptr [r8]
 * 0000000140A07C2E: mov     ecx, r10d
 * 0000000140A07C31: xor     rdx, rax
 * 0000000140A07C34: add     r8, rdi
 * 0000000140A07C37: rol     rdx, cl
 * 0000000140A07C3A: add     r9d, esi
 * 0000000140A07C3D: jnz     short loc_140A07C2A
 * 0000000140A07C3F: mov     rsi, [rsp+0CE0h+var_C70]
 * 0000000140A07C44: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A07C4B: mov     rax, rdx
 * 0000000140A07C4E: jmp     short loc_140A07C52
 * 0000000140A07C50: xor     edx, eax
 * 0000000140A07C52: shr     rax, 1Fh
 * 0000000140A07C56: test    rax, rax
 * 0000000140A07C59: jnz     short loc_140A07C50
 * 0000000140A07C5B: xor     edx, [r15]
 * 0000000140A07C5E: mov     eax, 0FFFFFFFFh
 * 0000000140A07C63: btr     edx, 1Fh
 * 0000000140A07C67: xor     [r15], edx
 * 0000000140A07C6A: mov     [r15+4], r11d
 * 0000000140A07C6E: mov     [r15+8], rsi
 * 0000000140A07C72: add     r15, 10h
 * 0000000140A07C76: add     r13d, eax
 * 0000000140A07C79: jz      loc_140A07D12
 * 0000000140A07C7F: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A07C86: mov     r10d, 1
 * 0000000140A07C8C: mov     rsi, [rbp+0BE0h+var_C40]
 * 0000000140A07C90: add     r12d, r10d
 * 0000000140A07C93: cmp     r12d, [rax+30h]
 * 0000000140A07C97: jb      loc_140A07BB0
 * 0000000140A07C9D: mov     rcx, [rbp+0BE0h+var_A58]
 * 0000000140A07CA4: xor     r15d, r15d
 * 0000000140A07CA7: test    r13d, r13d
 * 0000000140A07CAA: jz      short loc_140A07D15
 * 0000000140A07CAC: cmp     [rbx+8F8h], r15d
 * 0000000140A07CB3: jnz     loc_140A07D9B
 * 0000000140A07CB9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A07CC3: add     rax, rbx
 * 0000000140A07CC6: mov     [rbx+900h], rax
 * 0000000140A07CCD: test    rcx, rcx
 * 0000000140A07CD0: jz      short loc_140A07CE1
 * 0000000140A07CD2: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A07CDC: add     rax, rcx
 * 0000000140A07CDF: jmp     short loc_140A07CE4
 * 0000000140A07CE1: mov     rax, r15
 * 0000000140A07CE4: mov     [rbx+908h], rax
 * 0000000140A07CEB: test    rcx, rcx
 * 0000000140A07CEE: jz      short loc_140A07CF5
 * 0000000140A07CF0: movsxd  rax, dword ptr [rcx]
 * 0000000140A07CF3: jmp     short loc_140A07CF8
 * 0000000140A07CF5: mov     rax, r15
 * 0000000140A07CF8: mov     [rbx+910h], rax
 * 0000000140A07CFF: mov     [rbx+918h], r15
 * 0000000140A07D06: mov     [rbx+8F8h], r10d
 * 0000000140A07D0D: jmp     loc_140A0791C
 * 0000000140A07D12: xor     r15d, r15d
 * 0000000140A07D15: mov     eax, r15d
 * 0000000140A07D18: mov     rbx, r14
 * 0000000140A07D1B: test    eax, eax
 * 0000000140A07D1D: js      short loc_140A07D9B
 * 0000000140A07D1F: mov     dword ptr [r14+958h], 7
 * 0000000140A07D2A: mov     eax, r15d
 * 0000000140A07D2D: mov     rsi, rbx
 * 0000000140A07D30: test    eax, eax
 * 0000000140A07D32: js      short loc_140A07D8D
 * 0000000140A07D34: mov     r14d, 0FFFFFFFFh
 * 0000000140A07D3A: mov     rax, [rbx+570h]
 * 0000000140A07D41: lea     rdx, [rbp+0BE0h+var_210]
 * 0000000140A07D48: mov     rsi, rbx
 * 0000000140A07D4B: mov     [rsp+0CE0h+var_C80], rbx
 * 0000000140A07D50: mov     [rbp+0BE0h+var_BA8], rbx
 * 0000000140A07D54: mov     rcx, [rax+20h]
 * 0000000140A07D58: mov     rax, [rbx+200h]
 * 0000000140A07D5F: mov     [rbp+0BE0h+var_C40], rcx
 * 0000000140A07D63: call    KeGuardDispatchICall
 * 0000000140A07D68: mov     r13d, [rbp+0BE0h+var_1FC]
 * 0000000140A07D6F: mov     r12, rax
 * 0000000140A07D72: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A07D76: mov     rax, [rbp+0BE0h+var_208]
 * 0000000140A07D7D: mov     dword ptr [rbp+0BE0h+arg_8], r13d
 * 0000000140A07D84: mov     [rbp+0BE0h+var_C08], rax
 * 0000000140A07D88: test    rax, rax
 * 0000000140A07D8B: jnz     short loc_140A07DA2
 * 0000000140A07D8D: mov     r12d, 1
 * 0000000140A07D93: jmp     loc_140A06AB7
 * 0000000140A07D98: xor     r15d, r15d
 * 0000000140A07D9B: mov     eax, 0C000022Dh
 * 0000000140A07DA0: jmp     short loc_140A07D2D
 * 0000000140A07DA2: mov     ecx, 4
 * 0000000140A07DA7: mov     [rbp+0BE0h+var_AE8], r15
 * 0000000140A07DAE: lea     rax, [rbp+0BE0h+var_AE0]
 * 0000000140A07DB5: lea     edx, [rcx-3]
 * 0000000140A07DB8: mov     [rax], r15b
 * 0000000140A07DBB: add     rax, rdx
 * 0000000140A07DBE: add     ecx, r14d
 * 0000000140A07DC1: jnz     short loc_140A07DB8
 * 0000000140A07DC3: xor     edx, edx
 * 0000000140A07DC5: cmp     [rbx+80Ch], edx
 * 0000000140A07DCB: jbe     loc_140A07FCF
 * 0000000140A07DD1: mov     ecx, [rbp+0BE0h+var_AE0]
 * 0000000140A07DD7: mov     r9d, dword ptr [rbp+0BE0h+var_AE8+4]
 * 0000000140A07DDE: mov     r11d, dword ptr [rbp+0BE0h+var_AE8]
 * 0000000140A07DE5: mov     rax, [rbx+0A78h]
 * 0000000140A07DEC: mov     r14, rbx
 * 0000000140A07DEF: test    rax, rax
 * 0000000140A07DF2: mov     r10d, edx
 * 0000000140A07DF5: cmovnz  r14, rax
 * 0000000140A07DF9: mov     [rsp+0CE0h+var_C70], r14
 * 0000000140A07DFE: mov     r8d, [r14+808h]
 * 0000000140A07E05: add     r8, r14
 * 0000000140A07E08: test    r11d, r11d
 * 0000000140A07E0B: jz      short loc_140A07E1B
 * 0000000140A07E0D: cmp     r9d, r15d
 * 0000000140A07E10: ja      short loc_140A07E1B
 * 0000000140A07E12: mov     r8d, ecx
 * 0000000140A07E15: mov     r10d, r9d
 * 0000000140A07E18: add     r8, r14
 * 0000000140A07E1B: cmp     r10d, r15d
 * 0000000140A07E1E: jz      loc_140A07F59
 * 0000000140A07E24: mov     esi, 0Ch
 * 0000000140A07E29: mov     eax, r15d
 * 0000000140A07E2C: sub     eax, r10d
 * 0000000140A07E2F: mov     r14, 0AAAAAAAAAAAAAAABh
 * 0000000140A07E39: mov     r9d, eax
 * 0000000140A07E3C: add     r10d, eax
 * 0000000140A07E3F: lea     r12d, [rsi-0Ah]
 * 0000000140A07E43: mov     ecx, [r8]
 * 0000000140A07E46: cmp     ecx, esi
 * 0000000140A07E48: jg      short loc_140A07E8F
 * 0000000140A07E4A: jz      short loc_140A07EAC
 * 0000000140A07E4C: sub     ecx, 1
 * 0000000140A07E4F: jz      short loc_140A07EAC
 * 0000000140A07E51: sub     ecx, 6
 * 0000000140A07E54: jz      short loc_140A07E7D
 * 0000000140A07E56: sub     ecx, 1
 * 0000000140A07E59: jz      short loc_140A07E73
 * 0000000140A07E5B: cmp     ecx, r12d
 * 0000000140A07E5E: jnz     loc_140A07EEB
 * 0000000140A07E64: mov     eax, [r8+1Ch]
 * 0000000140A07E68: add     eax, 3
 * 0000000140A07E6B: shl     eax, 4
 * 0000000140A07E6E: jmp     loc_140A07F2A
 * 0000000140A07E73: movzx   eax, word ptr [r8+20h]
 * 0000000140A07E78: jmp     loc_140A07F24
 * 0000000140A07E7D: mov     eax, [r8+18h]
 * 0000000140A07E81: add     eax, r12d
 * 0000000140A07E84: lea     eax, [rax+rax*2]
 * 0000000140A07E87: shl     eax, 3
 * 0000000140A07E8A: jmp     loc_140A07F2A
 * 0000000140A07E8F: cmp     ecx, 1Ch
 * 0000000140A07E92: jz      loc_140A07F1F
 * 0000000140A07E98: cmp     ecx, 1Eh
 * 0000000140A07E9B: jz      short loc_140A07EF2
 * 0000000140A07E9D: cmp     ecx, 20h ; ' '
 * 0000000140A07EA0: jle     short loc_140A07EEB
 * 0000000140A07EA2: cmp     ecx, 22h ; '"'
 * 0000000140A07EA5: jle     short loc_140A07EC3
 * 0000000140A07EA7: cmp     ecx, 2Bh ; '+'
 * 0000000140A07EAA: jnz     short loc_140A07EEB
 * 0000000140A07EAC: mov     ecx, [r8+10h]
 * 0000000140A07EB0: mov     rax, r14
 * 0000000140A07EB3: mul     rcx
 * 0000000140A07EB6: shr     rdx, 3
 * 0000000140A07EBA: lea     eax, ds:30h[rdx*4]
 * 0000000140A07EC1: jmp     short loc_140A07F2A
 * 0000000140A07EC3: mov     ecx, [r8+20h]
 * 0000000140A07EC7: mov     edx, [r8+28h]
 * 0000000140A07ECB: and     ecx, 0FFFh
 * 0000000140A07ED1: add     rdx, 0FFFh
 * 0000000140A07ED8: add     rdx, rcx
 * 0000000140A07EDB: shr     rdx, 0Ch
 * 0000000140A07EDF: lea     eax, [rdx+rdx*4]
 * 0000000140A07EE2: lea     eax, ds:30h[rax*4]
 * 0000000140A07EE9: jmp     short loc_140A07F2A
 * 0000000140A07EEB: mov     eax, 30h ; '0'
 * 0000000140A07EF0: jmp     short loc_140A07F2A
 * 0000000140A07EF2: mov     eax, [r8+24h]
 * 0000000140A07EF6: lea     ecx, [rax-1]
 * 0000000140A07EF9: neg     eax
 * 0000000140A07EFB: sbb     eax, eax
 * 0000000140A07EFD: and     ecx, eax
 * 0000000140A07EFF: mov     rax, r14
 * 0000000140A07F02: mul     rcx
 * 0000000140A07F05: movzx   eax, word ptr [r8+28h]
 * 0000000140A07F0A: shr     rdx, 3
 * 0000000140A07F0E: add     edx, 7
 * 0000000140A07F11: and     edx, 0FFFFFFF8h
 * 0000000140A07F14: add     eax, r12d
 * 0000000140A07F17: lea     eax, [rax+rax*2]
 * 0000000140A07F1A: lea     eax, [rdx+rax*8]
 * 0000000140A07F1D: jmp     short loc_140A07F2A
 * 0000000140A07F1F: movzx   eax, word ptr [r8+28h]
 * 0000000140A07F24: add     eax, 37h ; '7'
 * 0000000140A07F27: and     eax, 0FFFFFFF8h
 * 0000000140A07F2A: add     r8, rax
 * 0000000140A07F2D: mov     eax, 1
 * 0000000140A07F32: sub     r9, rax
 * 0000000140A07F35: jnz     loc_140A07E43
 * 0000000140A07F3B: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A07F40: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A07F47: mov     r14, [rsp+0CE0h+var_C70]
 * 0000000140A07F4C: mov     r12, [rbp+0BE0h+var_C30]
 * 0000000140A07F50: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A07F57: jmp     short loc_140A07F5E
 * 0000000140A07F59: mov     eax, 1
 * 0000000140A07F5E: mov     ecx, r8d
 * 0000000140A07F61: mov     dword ptr [rbp+0BE0h+var_AE8], eax
 * 0000000140A07F67: sub     ecx, r14d
 * 0000000140A07F6A: mov     dword ptr [rbp+0BE0h+var_AE8+4], r10d
 * 0000000140A07F71: mov     [rbp+0BE0h+var_AE0], ecx
 * 0000000140A07F77: mov     r11d, eax
 * 0000000140A07F7A: movsxd  rdx, dword ptr [r8]
 * 0000000140A07F7D: mov     r9d, r10d
 * 0000000140A07F80: cmp     edx, 2Bh ; '+'
 * 0000000140A07F83: ja      short loc_140A07FA1
 * 0000000140A07F85: mov     r10, 80000001002h
 * 0000000140A07F8F: bt      r10, rdx
 * 0000000140A07F93: jnb     short loc_140A07FA1
 * 0000000140A07F95: cmp     [r8+8], r12
 * 0000000140A07F99: jnz     short loc_140A07FA1
 * 0000000140A07F9B: cmp     [r8+10h], r13d
 * 0000000140A07F9F: jz      short loc_140A07FCA
 * 0000000140A07FA1: lea     eax, [rdx-21h]
 * 0000000140A07FA4: mov     edx, 1
 * 0000000140A07FA9: cmp     eax, edx
 * 0000000140A07FAB: ja      short loc_140A07FB7
 * 0000000140A07FAD: mov     rax, [rbp+0BE0h+var_C08]
 * 0000000140A07FB1: cmp     [r8+20h], rax
 * 0000000140A07FB5: jz      short loc_140A07FCA
 * 0000000140A07FB7: add     r15d, edx
 * 0000000140A07FBA: cmp     r15d, [rbx+80Ch]
 * 0000000140A07FC1: jnb     short loc_140A07FCF
 * 0000000140A07FC3: xor     edx, edx
 * 0000000140A07FC5: jmp     loc_140A07DE5
 * 0000000140A07FCA: xor     r15d, r15d
 * 0000000140A07FCD: jmp     short loc_140A07FD5
 * 0000000140A07FCF: xor     r15d, r15d
 * 0000000140A07FD2: mov     r8d, r15d
 * 0000000140A07FD5: test    r8, r8
 * 0000000140A07FD8: jz      short loc_140A07FE2
 * 0000000140A07FDA: mov     rsi, rbx
 * 0000000140A07FDD: jmp     loc_140A09CF0
 * 0000000140A07FE2: mov     r13, [rbp+0BE0h+var_C40]
 * 0000000140A07FE6: lea     rdx, [rbp+0BE0h+var_1F8]
 * 0000000140A07FED: mov     rax, [rbx+200h]
 * 0000000140A07FF4: mov     rcx, r13
 * 0000000140A07FF7: mov     [rbp+0BE0h+var_BB0], rbx
 * 0000000140A07FFB: call    KeGuardDispatchICall
 * 0000000140A08000: mov     r12d, [rbp+0BE0h+var_1E4]
 * 0000000140A08007: mov     [rbp+0BE0h+var_C10], rax
 * 0000000140A0800B: mov     rax, [rbp+0BE0h+var_1F0]
 * 0000000140A08012: mov     dword ptr [rbp+0BE0h+arg_8], r12d
 * 0000000140A08019: mov     [rbp+0BE0h+var_BDC], r12d
 * 0000000140A0801D: mov     [rsp+0CE0h+BugCheckParameter2], rax
 * 0000000140A08022: test    rax, rax
 * 0000000140A08025: jnz     short loc_140A08039
 * 0000000140A08027: mov     [rbp+0BE0h+var_C18], 0C000007Bh
 * 0000000140A0802E: mov     r13d, 80000000h
 * 0000000140A08034: jmp     loc_140A09C3F
 * 0000000140A08039: mov     ecx, 4
 * 0000000140A0803E: mov     [rbp+0BE0h+var_AC8], r15
 * 0000000140A08045: lea     rax, [rbp+0BE0h+var_AC0]
 * 0000000140A0804C: mov     r8d, 0FFFFFFFFh
 * 0000000140A08052: lea     edx, [rcx-3]
 * 0000000140A08055: mov     [rax], r15b
 * 0000000140A08058: add     rax, rdx
 * 0000000140A0805B: add     ecx, r8d
 * 0000000140A0805E: jnz     short loc_140A08055
 * 0000000140A08060: xor     edx, edx
 * 0000000140A08062: cmp     [rbx+80Ch], edx
 * 0000000140A08068: jbe     loc_140A08276
 * 0000000140A0806E: mov     ecx, [rbp+0BE0h+var_AC0]
 * 0000000140A08074: mov     r9d, dword ptr [rbp+0BE0h+var_AC8+4]
 * 0000000140A0807B: mov     r11d, dword ptr [rbp+0BE0h+var_AC8]
 * 0000000140A08082: mov     rax, [rbx+0A78h]
 * 0000000140A08089: mov     r14, rbx
 * 0000000140A0808C: test    rax, rax
 * 0000000140A0808F: mov     r10d, edx
 * 0000000140A08092: cmovnz  r14, rax
 * 0000000140A08096: mov     [rsp+0CE0h+var_C70], r14
 * 0000000140A0809B: mov     r8d, [r14+808h]
 * 0000000140A080A2: add     r8, r14
 * 0000000140A080A5: test    r11d, r11d
 * 0000000140A080A8: jz      short loc_140A080B8
 * 0000000140A080AA: cmp     r9d, r15d
 * 0000000140A080AD: ja      short loc_140A080B8
 * 0000000140A080AF: mov     r8d, ecx
 * 0000000140A080B2: mov     r10d, r9d
 * 0000000140A080B5: add     r8, r14
 * 0000000140A080B8: cmp     r10d, r15d
 * 0000000140A080BB: jz      loc_140A081F6
 * 0000000140A080C1: mov     esi, 0Ch
 * 0000000140A080C6: mov     eax, r15d
 * 0000000140A080C9: sub     eax, r10d
 * 0000000140A080CC: mov     r14, 0AAAAAAAAAAAAAAABh
 * 0000000140A080D6: mov     r9d, eax
 * 0000000140A080D9: add     r10d, eax
 * 0000000140A080DC: lea     r12d, [rsi-0Ah]
 * 0000000140A080E0: mov     ecx, [r8]
 * 0000000140A080E3: cmp     ecx, esi
 * 0000000140A080E5: jg      short loc_140A0812C
 * 0000000140A080E7: jz      short loc_140A08149
 * 0000000140A080E9: sub     ecx, 1
 * 0000000140A080EC: jz      short loc_140A08149
 * 0000000140A080EE: sub     ecx, 6
 * 0000000140A080F1: jz      short loc_140A0811A
 * 0000000140A080F3: sub     ecx, 1
 * 0000000140A080F6: jz      short loc_140A08110
 * 0000000140A080F8: cmp     ecx, r12d
 * 0000000140A080FB: jnz     loc_140A08188
 * 0000000140A08101: mov     eax, [r8+1Ch]
 * 0000000140A08105: add     eax, 3
 * 0000000140A08108: shl     eax, 4
 * 0000000140A0810B: jmp     loc_140A081C7
 * 0000000140A08110: movzx   eax, word ptr [r8+20h]
 * 0000000140A08115: jmp     loc_140A081C1
 * 0000000140A0811A: mov     eax, [r8+18h]
 * 0000000140A0811E: add     eax, r12d
 * 0000000140A08121: lea     eax, [rax+rax*2]
 * 0000000140A08124: shl     eax, 3
 * 0000000140A08127: jmp     loc_140A081C7
 * 0000000140A0812C: cmp     ecx, 1Ch
 * 0000000140A0812F: jz      loc_140A081BC
 * 0000000140A08135: cmp     ecx, 1Eh
 * 0000000140A08138: jz      short loc_140A0818F
 * 0000000140A0813A: cmp     ecx, 20h ; ' '
 * 0000000140A0813D: jle     short loc_140A08188
 * 0000000140A0813F: cmp     ecx, 22h ; '"'
 * 0000000140A08142: jle     short loc_140A08160
 * 0000000140A08144: cmp     ecx, 2Bh ; '+'
 * 0000000140A08147: jnz     short loc_140A08188
 * 0000000140A08149: mov     ecx, [r8+10h]
 * 0000000140A0814D: mov     rax, r14
 * 0000000140A08150: mul     rcx
 * 0000000140A08153: shr     rdx, 3
 * 0000000140A08157: lea     eax, ds:30h[rdx*4]
 * 0000000140A0815E: jmp     short loc_140A081C7
 * 0000000140A08160: mov     ecx, [r8+20h]
 * 0000000140A08164: mov     edx, [r8+28h]
 * 0000000140A08168: and     ecx, 0FFFh
 * 0000000140A0816E: add     rdx, 0FFFh
 * 0000000140A08175: add     rdx, rcx
 * 0000000140A08178: shr     rdx, 0Ch
 * 0000000140A0817C: lea     eax, [rdx+rdx*4]
 * 0000000140A0817F: lea     eax, ds:30h[rax*4]
 * 0000000140A08186: jmp     short loc_140A081C7
 * 0000000140A08188: mov     eax, 30h ; '0'
 * 0000000140A0818D: jmp     short loc_140A081C7
 * 0000000140A0818F: mov     eax, [r8+24h]
 * 0000000140A08193: lea     ecx, [rax-1]
 * 0000000140A08196: neg     eax
 * 0000000140A08198: sbb     eax, eax
 * 0000000140A0819A: and     ecx, eax
 * 0000000140A0819C: mov     rax, r14
 * 0000000140A0819F: mul     rcx
 * 0000000140A081A2: movzx   eax, word ptr [r8+28h]
 * 0000000140A081A7: shr     rdx, 3
 * 0000000140A081AB: add     edx, 7
 * 0000000140A081AE: and     edx, 0FFFFFFF8h
 * 0000000140A081B1: add     eax, r12d
 * 0000000140A081B4: lea     eax, [rax+rax*2]
 * 0000000140A081B7: lea     eax, [rdx+rax*8]
 * 0000000140A081BA: jmp     short loc_140A081C7
 * 0000000140A081BC: movzx   eax, word ptr [r8+28h]
 * 0000000140A081C1: add     eax, 37h ; '7'
 * 0000000140A081C4: and     eax, 0FFFFFFF8h
 * 0000000140A081C7: add     r8, rax
 * 0000000140A081CA: mov     eax, 1
 * 0000000140A081CF: sub     r9, rax
 * 0000000140A081D2: jnz     loc_140A080E0
 * 0000000140A081D8: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A081DD: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A081E4: mov     r14, [rsp+0CE0h+var_C70]
 * 0000000140A081E9: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A081F0: mov     r13, [rbp+0BE0h+var_C40]
 * 0000000140A081F4: jmp     short loc_140A081FB
 * 0000000140A081F6: mov     eax, 1
 * 0000000140A081FB: mov     ecx, r8d
 * 0000000140A081FE: mov     dword ptr [rbp+0BE0h+var_AC8], eax
 * 0000000140A08204: sub     ecx, r14d
 * 0000000140A08207: mov     dword ptr [rbp+0BE0h+var_AC8+4], r10d
 * 0000000140A0820E: mov     [rbp+0BE0h+var_AC0], ecx
 * 0000000140A08214: mov     r11d, eax
 * 0000000140A08217: movsxd  rdx, dword ptr [r8]
 * 0000000140A0821A: mov     r9d, r10d
 * 0000000140A0821D: cmp     edx, 2Bh ; '+'
 * 0000000140A08220: ja      short loc_140A08242
 * 0000000140A08222: mov     r10, 80000001002h
 * 0000000140A0822C: bt      r10, rdx
 * 0000000140A08230: jnb     short loc_140A08242
 * 0000000140A08232: mov     rax, [rbp+0BE0h+var_C10]
 * 0000000140A08236: cmp     [r8+8], rax
 * 0000000140A0823A: jnz     short loc_140A08242
 * 0000000140A0823C: cmp     [r8+10h], r12d
 * 0000000140A08240: jz      short loc_140A0826C
 * 0000000140A08242: lea     eax, [rdx-21h]
 * 0000000140A08245: mov     edx, 1
 * 0000000140A0824A: cmp     eax, edx
 * 0000000140A0824C: ja      short loc_140A08259
 * 0000000140A0824E: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A08253: cmp     [r8+20h], r14
 * 0000000140A08257: jz      short loc_140A08271
 * 0000000140A08259: add     r15d, edx
 * 0000000140A0825C: cmp     r15d, [rbx+80Ch]
 * 0000000140A08263: jnb     short loc_140A08276
 * 0000000140A08265: xor     edx, edx
 * 0000000140A08267: jmp     loc_140A08082
 * 0000000140A0826C: xor     r15d, r15d
 * 0000000140A0826F: jmp     short loc_140A0827C
 * 0000000140A08271: xor     r15d, r15d
 * 0000000140A08274: jmp     short loc_140A08281
 * 0000000140A08276: xor     r15d, r15d
 * 0000000140A08279: mov     r8d, r15d
 * 0000000140A0827C: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A08281: mov     [rbp+0BE0h+var_B48], r8
 * 0000000140A08288: test    r8, r8
 * 0000000140A0828B: jnz     loc_140A09C47
 * 0000000140A08291: mov     rax, [rbx+2A8h]
 * 0000000140A08298: mov     rcx, r13
 * 0000000140A0829B: call    KeGuardDispatchICall
 * 0000000140A082A0: mov     ecx, [rbp+0BE0h+var_BDC]
 * 0000000140A082A3: mov     [rbp+0BE0h+var_C58], ecx
 * 0000000140A082A6: mov     [rbp+0BE0h+var_C38], eax
 * 0000000140A082A9: test    eax, eax
 * 0000000140A082AB: jz      loc_140A09C47
 * 0000000140A082B1: test    dword ptr [rbx+990h], 40000000h
 * 0000000140A082BB: jz      short loc_140A082DD
 * 0000000140A082BD: mov     r8d, 0Fh
 * 0000000140A082C3: lea     rcx, [rbp+0BE0h+var_BA8]
 * 0000000140A082C7: mov     rdx, r14
 * 0000000140A082CA: call    sub_140A1CFE4
 * 0000000140A082CF: mov     rsi, [rbp+0BE0h+var_BA8]
 * 0000000140A082D3: mov     ecx, eax
 * 0000000140A082D5: mov     [rbp+0BE0h+var_C18], eax
 * 0000000140A082D8: jmp     loc_140A09C25
 * 0000000140A082DD: mov     rax, [rbx+1F0h]
 * 0000000140A082E4: lea     r9, [rbp+0BE0h+var_BDC]
 * 0000000140A082E8: xor     r8d, r8d
 * 0000000140A082EB: mov     [rbp+0BE0h+var_780], r15
 * 0000000140A082F2: mov     [rbp+0BE0h+var_9A0], r15d
 * 0000000140A082F9: mov     r15, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A082FE: mov     rcx, r15
 * 0000000140A08301: lea     r13d, [r8+1]
 * 0000000140A08305: mov     dl, r13b
 * 0000000140A08308: call    KeGuardDispatchICall
 * 0000000140A0830D: mov     rdx, rax
 * 0000000140A08310: lea     r8d, [r13+0Bh]
 * 0000000140A08314: neg     rax
 * 0000000140A08317: mov     [rbp+0BE0h+var_798], rdx
 * 0000000140A0831E: lea     r9, [rbp+0BE0h+var_BDC]
 * 0000000140A08322: mov     dl, r13b
 * 0000000140A08325: sbb     ecx, ecx
 * 0000000140A08327: and     ecx, [rbp+0BE0h+var_BDC]
 * 0000000140A0832A: mov     [rbp+0BE0h+var_BDC], ecx
 * 0000000140A0832D: mov     rax, [rbx+1F0h]
 * 0000000140A08334: mov     [rbp+0BE0h+var_9AC], ecx
 * 0000000140A0833A: mov     rcx, r15
 * 0000000140A0833D: call    KeGuardDispatchICall
 * 0000000140A08342: mov     rdx, rax
 * 0000000140A08345: mov     [rbp+0BE0h+var_BD8], rax
 * 0000000140A08349: neg     rax
 * 0000000140A0834C: mov     [rbp+0BE0h+var_790], rdx
 * 0000000140A08353: lea     r8d, [r13+9]
 * 0000000140A08357: mov     dl, r13b
 * 0000000140A0835A: sbb     ecx, ecx
 * 0000000140A0835C: lea     r9, [rbp+0BE0h+var_BDC]
 * 0000000140A08360: and     ecx, [rbp+0BE0h+var_BDC]
 * 0000000140A08363: mov     [rbp+0BE0h+var_BDC], ecx
 * 0000000140A08366: mov     rax, [rbx+1F0h]
 * 0000000140A0836D: mov     dword ptr [rbp+0BE0h+arg_8], ecx
 * 0000000140A08373: mov     [rbp+0BE0h+var_9A8], ecx
 * 0000000140A08379: mov     rcx, r15
 * 0000000140A0837C: call    KeGuardDispatchICall
 * 0000000140A08381: mov     rdx, rax
 * 0000000140A08384: neg     rax
 * 0000000140A08387: mov     [rbp+0BE0h+var_788], rdx
 * 0000000140A0838E: sbb     ecx, ecx
 * 0000000140A08390: and     ecx, [rbp+0BE0h+var_BDC]
 * 0000000140A08393: mov     [rbp+0BE0h+var_BDC], ecx
 * 0000000140A08396: mov     rax, [rbx+1F8h]
 * 0000000140A0839D: mov     [rbp+0BE0h+var_9A4], ecx
 * 0000000140A083A3: mov     rcx, r15
 * 0000000140A083A6: call    KeGuardDispatchICall
 * 0000000140A083AB: xor     r12d, r12d
 * 0000000140A083AE: mov     r14, rax
 * 0000000140A083B1: test    rax, rax
 * 0000000140A083B4: jnz     short loc_140A083BE
 * 0000000140A083B6: xor     r15d, r15d
 * 0000000140A083B9: jmp     loc_140A08027
 * 0000000140A083BE: mov     rax, [rbx+498h]
 * 0000000140A083C5: lea     rdx, [rbp+0BE0h+var_8B8]
 * 0000000140A083CC: mov     rcx, r15
 * 0000000140A083CF: call    KeGuardDispatchICall
 * 0000000140A083D4: mov     r8d, [rbx+924h]
 * 0000000140A083DB: mov     [rbp+0BE0h+var_778], rax
 * 0000000140A083E2: mov     eax, [rbp+0BE0h+var_8B8]
 * 0000000140A083E8: mov     [rbp+0BE0h+var_99C], eax
 * 0000000140A083EE: mov     eax, [r14+54h]
 * 0000000140A083F2: mov     [rbp+0BE0h+var_7A0], r15
 * 0000000140A083F9: mov     r15d, [rbx+7E4h]
 * 0000000140A08400: mov     [rbp+0BE0h+var_9B0], eax
 * 0000000140A08406: lea     eax, [r15+120h]
 * 0000000140A0840D: cmp     eax, [rbx+0A1Ch]
 * 0000000140A08413: jbe     loc_140A084FE
 * 0000000140A08419: mov     edx, eax
 * 0000000140A0841B: mov     rcx, rbx
 * 0000000140A0841E: call    sub_140A0FB30
 * 0000000140A08423: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A08427: mov     r14, rax
 * 0000000140A0842A: test    rax, rax
 * 0000000140A0842D: jz      loc_140A084F2
 * 0000000140A08433: mov     ecx, [rbx+990h]
 * 0000000140A08439: test    cl, 4
 * 0000000140A0843C: jnz     loc_140A084E8
 * 0000000140A08442: mov     eax, [rbx+7E4h]
 * 0000000140A08448: and     ecx, 20000000h
 * 0000000140A0844E: mov     r8, [rbx+7C8h]
 * 0000000140A08455: neg     ecx
 * 0000000140A08457: sbb     edx, edx
 * 0000000140A08459: and     edx, [rbx+924h]
 * 0000000140A0845F: cmp     eax, 8
 * 0000000140A08462: jb      short loc_140A08479
 * 0000000140A08464: mov     ecx, eax
 * 0000000140A08466: shr     rcx, 3
 * 0000000140A0846A: mov     [rbx], r12
 * 0000000140A0846D: add     eax, 0FFFFFFF8h
 * 0000000140A08470: add     rbx, 8
 * 0000000140A08474: sub     rcx, r13
 * 0000000140A08477: jnz     short loc_140A0846A
 * 0000000140A08479: test    eax, eax
 * 0000000140A0847B: jz      short loc_140A0848C
 * 0000000140A0847D: mov     ecx, 0FFFFFFFFh
 * 0000000140A08482: mov     [rbx], r12b
 * 0000000140A08485: add     rbx, r13
 * 0000000140A08488: add     eax, ecx
 * 0000000140A0848A: jnz     short loc_140A08482
 * 0000000140A0848C: mov     ebx, [r14+924h]
 * 0000000140A08493: mov     [r14+924h], edx
 * 0000000140A0849A: cmp     edx, 3
 * 0000000140A0849D: jz      short loc_140A084D2
 * 0000000140A0849F: test    dword ptr [r14+990h], 10000000h
 * 0000000140A084AA: mov     ecx, r12d
 * 0000000140A084AD: cmovz   ecx, edx
 * 0000000140A084B0: test    ecx, ecx
 * 0000000140A084B2: jz      short loc_140A084C9
 * 0000000140A084B4: mov     rax, [r14+228h]
 * 0000000140A084BB: lea     rcx, [r8-8]
 * 0000000140A084BF: mov     rdx, [rcx]
 * 0000000140A084C2: call    KeGuardDispatchICall
 * 0000000140A084C7: jmp     short loc_140A084E1
 * 0000000140A084C9: mov     rax, [r14+100h]
 * 0000000140A084D0: jmp     short loc_140A084D9
 * 0000000140A084D2: mov     rax, [r14+368h]
 * 0000000140A084D9: mov     rcx, r8
 * 0000000140A084DC: call    KeGuardDispatchICall
 * 0000000140A084E1: mov     [r14+924h], ebx
 * 0000000140A084E8: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140A084F0: jmp     short loc_140A0850B
 * 0000000140A084F2: xor     r15d, r15d
 * 0000000140A084F5: mov     [rbp+0BE0h+var_BB0], r15
 * 0000000140A084F9: jmp     loc_140A0802E
 * 0000000140A084FE: mov     r14, rbx
 * 0000000140A08501: mov     [rbp+0BE0h+var_C40], rbx
 * 0000000140A08505: mov     [rbx+7E4h], eax
 * 0000000140A0850B: mov     eax, 6
 * 0000000140A08510: lea     r10, [r14+r15]
 * 0000000140A08514: add     [r14+80Ch], eax
 * 0000000140A0851B: lea     r13, [rbp+0BE0h+var_7A0]
 * 0000000140A08522: mov     [rbp+0BE0h+var_978], r10
 * 0000000140A08529: lea     rdi, [rbp+0BE0h+var_9B0]
 * 0000000140A08530: mov     [rbp+0BE0h+var_B48], r10
 * 0000000140A08537: lea     ebx, [rax-5]
 * 0000000140A0853A: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A0853E: mov     r15d, [rdi]
 * 0000000140A08541: mov     rdx, rax
 * 0000000140A08544: mov     rsi, [r13+0]
 * 0000000140A08548: mov     ecx, 30h ; '0'
 * 0000000140A0854D: mov     [rbp+0BE0h+var_BE8], r15d
 * 0000000140A08551: mov     rax, r10
 * 0000000140A08554: mov     [rax], r12
 * 0000000140A08557: add     ecx, 0FFFFFFF8h
 * 0000000140A0855A: add     rax, 8
 * 0000000140A0855E: sub     rdx, rbx
 * 0000000140A08561: jnz     short loc_140A08554
 * 0000000140A08563: test    ecx, ecx
 * 0000000140A08565: jz      short loc_140A08576
 * 0000000140A08567: mov     edx, 0FFFFFFFFh
 * 0000000140A0856C: mov     [rax], r12b
 * 0000000140A0856F: add     rax, rbx
 * 0000000140A08572: add     ecx, edx
 * 0000000140A08574: jnz     short loc_140A0856C
 * 0000000140A08576: mov     dword ptr [r10], 0Bh
 * 0000000140A0857D: lea     rcx, [rsi+r15]
 * 0000000140A08581: mov     [r10+8], rsi
 * 0000000140A08585: mov     r9, rsi
 * 0000000140A08588: mov     [r10+10h], r15d
 * 0000000140A0858C: mov     rax, rsi
 * 0000000140A0858F: add     [r14+828h], r15d
 * 0000000140A08596: mov     r11d, [r14+814h]
 * 0000000140A0859D: mov     r12, [r14+818h]
 * 0000000140A085A4: cmp     rsi, rcx
 * 0000000140A085A7: jnb     short loc_140A085B9
 * 0000000140A085A9: mov     edx, 40h ; '@'
 * 0000000140A085AE: prefetchnta byte ptr [rax]
 * 0000000140A085B1: add     rax, rdx
 * 0000000140A085B4: cmp     rax, rcx
 * 0000000140A085B7: jb      short loc_140A085AE
 * 0000000140A085B9: mov     ebx, r15d
 * 0000000140A085BC: mov     r8, r12
 * 0000000140A085BF: shr     ebx, 7
 * 0000000140A085C2: test    ebx, ebx
 * 0000000140A085C4: jz      short loc_140A08639
 * 0000000140A085C6: mov     r15, 7010008004002001h
 * 0000000140A085D0: mov     edx, 8
 * 0000000140A085D5: lea     r14d, [rdx-7]
 * 0000000140A085D9: mov     rax, [r9]
 * 0000000140A085DC: mov     ecx, r11d
 * 0000000140A085DF: xor     rax, r8
 * 0000000140A085E2: mov     r8, [r9+8]
 * 0000000140A085E6: rol     rax, cl
 * 0000000140A085E9: add     r9, 10h
 * 0000000140A085ED: xor     r8, rax
 * 0000000140A085F0: rol     r8, cl
 * 0000000140A085F3: sub     rdx, r14
 * 0000000140A085F6: jnz     short loc_140A085D9
 * 0000000140A085F8: mov     rcx, r9
 * 0000000140A085FB: sub     rcx, rsi
 * 0000000140A085FE: xor     rcx, r12
 * 0000000140A08601: mov     rax, rcx
 * 0000000140A08604: rol     rax, 11h
 * 0000000140A08608: xor     rcx, rax
 * 0000000140A0860B: mov     rax, r15
 * 0000000140A0860E: mul     rcx
 * 0000000140A08611: mov     [rbp+0BE0h+var_518], rdx
 * 0000000140A08618: xor     edx, eax
 * 0000000140A0861A: xor     r11d, edx
 * 0000000140A0861D: mov     rax, r14
 * 0000000140A08620: and     r11d, 3Fh
 * 0000000140A08624: cmovz   r11d, eax
 * 0000000140A08628: mov     eax, 0FFFFFFFFh
 * 0000000140A0862D: add     ebx, eax
 * 0000000140A0862F: jnz     short loc_140A085D0
 * 0000000140A08631: mov     r14, [rbp+0BE0h+var_C40]
 * 0000000140A08635: mov     r15d, [rbp+0BE0h+var_BE8]
 * 0000000140A08639: mov     edx, r15d
 * 0000000140A0863C: and     edx, 7Fh
 * 0000000140A0863F: cmp     edx, 8
 * 0000000140A08642: jb      short loc_140A08669
 * 0000000140A08644: mov     ebx, edx
 * 0000000140A08646: mov     r14d, 1
 * 0000000140A0864C: shr     rbx, 3
 * 0000000140A08650: xor     r8, [r9]
 * 0000000140A08653: mov     ecx, r11d
 * 0000000140A08656: rol     r8, cl
 * 0000000140A08659: add     r9, 8
 * 0000000140A0865D: add     edx, 0FFFFFFF8h
 * 0000000140A08660: sub     rbx, r14
 * 0000000140A08663: jnz     short loc_140A08650
 * 0000000140A08665: mov     r14, [rbp+0BE0h+var_C40]
 * 0000000140A08669: xor     r12d, r12d
 * 0000000140A0866C: lea     ebx, [r12+1]
 * 0000000140A08671: test    edx, edx
 * 0000000140A08673: jz      short loc_140A08693
 * 0000000140A08675: mov     r12d, 0FFFFFFFFh
 * 0000000140A0867B: movzx   eax, byte ptr [r9]
 * 0000000140A0867F: mov     ecx, r11d
 * 0000000140A08682: xor     r8, rax
 * 0000000140A08685: add     r9, rbx
 * 0000000140A08688: rol     r8, cl
 * 0000000140A0868B: add     edx, r12d
 * 0000000140A0868E: jnz     short loc_140A0867B
 * 0000000140A08690: xor     r12d, r12d
 * 0000000140A08693: mov     rax, r8
 * 0000000140A08696: jmp     short loc_140A0869B
 * 0000000140A08698: xor     r8d, eax
 * 0000000140A0869B: shr     rax, 1Fh
 * 0000000140A0869F: test    rax, rax
 * 0000000140A086A2: jnz     short loc_140A08698
 * 0000000140A086A4: btr     r8d, 1Fh
 * 0000000140A086A9: add     rdi, 4
 * 0000000140A086AD: mov     [r10+14h], r8d
 * 0000000140A086B1: add     r13, 8
 * 0000000140A086B5: add     [r14+828h], r15d
 * 0000000140A086BC: mov     eax, 6
 * 0000000140A086C1: mov     r10, [rbp+0BE0h+var_978]
 * 0000000140A086C8: add     r10, 30h ; '0'
 * 0000000140A086CC: sub     [rbp+0BE0h+var_C30], rbx
 * 0000000140A086D0: mov     [rbp+0BE0h+var_978], r10
 * 0000000140A086D7: jnz     loc_140A0853E
 * 0000000140A086DD: mov     rax, [rbp+0BE0h+var_B48]
 * 0000000140A086E4: mov     ecx, 2
 * 0000000140A086E9: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A086EE: mov     rsi, r14
 * 0000000140A086F1: mov     r8d, [rbp+0BE0h+var_C58]
 * 0000000140A086F5: mov     r9, r13
 * 0000000140A086F8: mov     rdx, [rbp+0BE0h+var_C10]
 * 0000000140A086FC: mov     dword ptr [rax], 2Ch ; ','
 * 0000000140A08702: mov     [rax+18h], r13
 * 0000000140A08706: or      [rax+20h], ecx
 * 0000000140A08709: lea     rax, [rbp+0BE0h+var_A7C]
 * 0000000140A08710: mov     [rsp+0CE0h+var_CA8], rax
 * 0000000140A08715: lea     rax, [rbp+0BE0h+var_B28]
 * 0000000140A0871C: mov     [rsp+0CE0h+var_CB0], rax
 * 0000000140A08721: lea     eax, [rcx+0Dh]
 * 0000000140A08724: mov     dword ptr [rsp+0CE0h+var_CB8], eax
 * 0000000140A08728: lea     rcx, [rbp+0BE0h+var_BB0]
 * 0000000140A0872C: mov     eax, [rbp+0BE0h+var_C38]
 * 0000000140A0872F: mov     dword ptr [rsp+0CE0h+BugCheckParameter4], eax
 * 0000000140A08733: mov     [rbp+0BE0h+var_BB0], r14
 * 0000000140A08737: mov     [rbp+0BE0h+var_BA8], r14
 * 0000000140A0873B: call    sub_140A0F098
 * 0000000140A08740: xor     r15d, r15d
 * 0000000140A08743: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0874A: test    eax, eax
 * 0000000140A0874C: jns     short loc_140A08758
 * 0000000140A0874E: mov     ecx, eax
 * 0000000140A08750: mov     [rbp+0BE0h+var_C18], eax
 * 0000000140A08753: jmp     loc_140A09C25
 * 0000000140A08758: mov     rsi, [rbp+0BE0h+var_BB0]
 * 0000000140A0875C: mov     rcx, [rbp+0BE0h+var_B48]
 * 0000000140A08763: mov     rax, rsi
 * 0000000140A08766: mov     r9d, [rbp+0BE0h+var_A7C]
 * 0000000140A0876D: sub     rax, r14
 * 0000000140A08770: sub     r9d, [rbp+0BE0h+var_B28]
 * 0000000140A08777: add     rcx, rax
 * 0000000140A0877A: mov     ebx, [rbp+0BE0h+var_B28]
 * 0000000140A08780: mov     [rbp+0BE0h+var_B48], rcx
 * 0000000140A08787: add     rbx, r13
 * 0000000140A0878A: mov     [rbp+0BE0h+var_BA8], rsi
 * 0000000140A0878E: lea     r12, [rcx+0C0h]
 * 0000000140A08795: mov     ecx, 30h ; '0'
 * 0000000140A0879A: mov     rax, r12
 * 0000000140A0879D: lea     edx, [rcx-2Ah]
 * 0000000140A087A0: lea     r8d, [rcx-2Fh]
 * 0000000140A087A4: mov     [rax], r15
 * 0000000140A087A7: add     ecx, 0FFFFFFF8h
 * 0000000140A087AA: add     rax, 8
 * 0000000140A087AE: sub     rdx, r8
 * 0000000140A087B1: jnz     short loc_140A087A4
 * 0000000140A087B3: mov     rdx, r8
 * 0000000140A087B6: test    ecx, ecx
 * 0000000140A087B8: jz      short loc_140A087CB
 * 0000000140A087BA: mov     r8d, 0FFFFFFFFh
 * 0000000140A087C0: mov     [rax], r15b
 * 0000000140A087C3: add     rax, rdx
 * 0000000140A087C6: add     ecx, r8d
 * 0000000140A087C9: jnz     short loc_140A087C0
 * 0000000140A087CB: mov     dword ptr [r12], 0Bh
 * 0000000140A087D3: mov     r10, rbx
 * 0000000140A087D6: mov     [r12+8], rbx
 * 0000000140A087DB: mov     rax, rbx
 * 0000000140A087DE: mov     [r12+10h], r9d
 * 0000000140A087E3: add     [rsi+828h], r9d
 * 0000000140A087EA: mov     r11d, [rsi+814h]
 * 0000000140A087F1: mov     r15, [rsi+818h]
 * 0000000140A087F8: mov     ecx, r9d
 * 0000000140A087FB: add     rcx, rbx
 * 0000000140A087FE: cmp     rbx, rcx
 * 0000000140A08801: jnb     short loc_140A08814
 * 0000000140A08803: mov     r8d, 40h ; '@'
 * 0000000140A08809: prefetchnta byte ptr [rax]
 * 0000000140A0880C: add     rax, r8
 * 0000000140A0880F: cmp     rax, rcx
 * 0000000140A08812: jb      short loc_140A08809
 * 0000000140A08814: mov     r14d, r9d
 * 0000000140A08817: mov     r8, r15
 * 0000000140A0881A: shr     r14d, 7
 * 0000000140A0881E: test    r14d, r14d
 * 0000000140A08821: jz      short loc_140A0889B
 * 0000000140A08823: mov     rdi, 7010008004002001h
 * 0000000140A0882D: mov     edx, 8
 * 0000000140A08832: lea     r13d, [rdx-7]
 * 0000000140A08836: mov     rax, [r10]
 * 0000000140A08839: mov     ecx, r11d
 * 0000000140A0883C: xor     rax, r8
 * 0000000140A0883F: mov     r8, [r10+8]
 * 0000000140A08843: rol     rax, cl
 * 0000000140A08846: add     r10, 10h
 * 0000000140A0884A: xor     r8, rax
 * 0000000140A0884D: rol     r8, cl
 * 0000000140A08850: sub     rdx, r13
 * 0000000140A08853: jnz     short loc_140A08836
 * 0000000140A08855: mov     rcx, r10
 * 0000000140A08858: sub     rcx, rbx
 * 0000000140A0885B: xor     rcx, r15
 * 0000000140A0885E: mov     rax, rcx
 * 0000000140A08861: rol     rax, 11h
 * 0000000140A08865: xor     rcx, rax
 * 0000000140A08868: mov     rax, rdi
 * 0000000140A0886B: mul     rcx
 * 0000000140A0886E: mov     [rbp+0BE0h+var_510], rdx
 * 0000000140A08875: xor     edx, eax
 * 0000000140A08877: xor     r11d, edx
 * 0000000140A0887A: mov     eax, 0FFFFFFFFh
 * 0000000140A0887F: and     r11d, 3Fh
 * 0000000140A08883: mov     rdx, r13
 * 0000000140A08886: cmovz   r11d, edx
 * 0000000140A0888A: add     r14d, eax
 * 0000000140A0888D: jnz     short loc_140A0882D
 * 0000000140A0888F: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A08894: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0889B: and     r9d, 7Fh
 * 0000000140A0889F: cmp     r9d, 8
 * 0000000140A088A3: jb      short loc_140A088D2
 * 0000000140A088A5: mov     edx, r9d
 * 0000000140A088A8: mov     r13d, 1
 * 0000000140A088AE: shr     rdx, 3
 * 0000000140A088B2: xor     r8, [r10]
 * 0000000140A088B5: mov     ecx, r11d
 * 0000000140A088B8: rol     r8, cl
 * 0000000140A088BB: add     r10, 8
 * 0000000140A088BF: add     r9d, 0FFFFFFF8h
 * 0000000140A088C3: sub     rdx, r13
 * 0000000140A088C6: jnz     short loc_140A088B2
 * 0000000140A088C8: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A088CD: mov     edx, 1
 * 0000000140A088D2: xor     r15d, r15d
 * 0000000140A088D5: test    r9d, r9d
 * 0000000140A088D8: jz      short loc_140A088F8
 * 0000000140A088DA: mov     r15d, 0FFFFFFFFh
 * 0000000140A088E0: movzx   eax, byte ptr [r10]
 * 0000000140A088E4: mov     ecx, r11d
 * 0000000140A088E7: xor     r8, rax
 * 0000000140A088EA: add     r10, rdx
 * 0000000140A088ED: rol     r8, cl
 * 0000000140A088F0: add     r9d, r15d
 * 0000000140A088F3: jnz     short loc_140A088E0
 * 0000000140A088F5: xor     r15d, r15d
 * 0000000140A088F8: mov     rax, r8
 * 0000000140A088FB: jmp     short loc_140A08900
 * 0000000140A088FD: xor     r8d, eax
 * 0000000140A08900: shr     rax, 1Fh
 * 0000000140A08904: test    rax, rax
 * 0000000140A08907: jnz     short loc_140A088FD
 * 0000000140A08909: btr     r8d, 1Fh
 * 0000000140A0890E: mov     [r12+14h], r8d
 * 0000000140A08913: mov     r12d, 1
 * 0000000140A08919: mov     rax, [rbp+0BE0h+var_B48]
 * 0000000140A08920: mov     dword ptr [rax+0F0h], 30h ; '0'
 * 0000000140A0892A: cmp     [rax+100h], r15d
 * 0000000140A08931: jz      short loc_140A0893A
 * 0000000140A08933: or      [rax+108h], r12d
 * 0000000140A0893A: mov     rax, [rbp+0BE0h+var_B48]
 * 0000000140A08941: add     rax, 60h ; '`'
 * 0000000140A08945: mov     [rbp+0BE0h+var_BA8], rsi
 * 0000000140A08949: mov     [rbp+0BE0h+var_AA0], rax
 * 0000000140A08950: jnz     loc_140A08BF3
 * 0000000140A08956: mov     r14d, [rsi+7E4h]
 * 0000000140A0895D: mov     r8d, [rsi+924h]
 * 0000000140A08964: lea     eax, [r14+30h]
 * 0000000140A08968: cmp     eax, [rsi+0A1Ch]
 * 0000000140A0896E: jbe     loc_140A08A57
 * 0000000140A08974: mov     edx, eax
 * 0000000140A08976: mov     rcx, rsi
 * 0000000140A08979: call    sub_140A0FB30
 * 0000000140A0897E: mov     rbx, rax
 * 0000000140A08981: test    rax, rax
 * 0000000140A08984: jz      loc_140A08A44
 * 0000000140A0898A: mov     ecx, [rsi+990h]
 * 0000000140A08990: test    cl, 4
 * 0000000140A08993: jnz     loc_140A08A3B
 * 0000000140A08999: mov     eax, [rsi+7E4h]
 * 0000000140A0899F: and     ecx, 20000000h
 * 0000000140A089A5: mov     r8, [rsi+7C8h]
 * 0000000140A089AC: neg     ecx
 * 0000000140A089AE: sbb     edx, edx
 * 0000000140A089B0: and     edx, [rsi+924h]
 * 0000000140A089B6: cmp     eax, 8
 * 0000000140A089B9: jb      short loc_140A089D0
 * 0000000140A089BB: mov     ecx, eax
 * 0000000140A089BD: shr     rcx, 3
 * 0000000140A089C1: mov     [rsi], r15
 * 0000000140A089C4: add     eax, 0FFFFFFF8h
 * 0000000140A089C7: add     rsi, 8
 * 0000000140A089CB: sub     rcx, r12
 * 0000000140A089CE: jnz     short loc_140A089C1
 * 0000000140A089D0: test    eax, eax
 * 0000000140A089D2: jz      short loc_140A089E3
 * 0000000140A089D4: mov     ecx, 0FFFFFFFFh
 * 0000000140A089D9: mov     [rsi], r15b
 * 0000000140A089DC: add     rsi, r12
 * 0000000140A089DF: add     eax, ecx
 * 0000000140A089E1: jnz     short loc_140A089D9
 * 0000000140A089E3: mov     esi, [rbx+924h]
 * 0000000140A089E9: mov     [rbx+924h], edx
 * 0000000140A089EF: cmp     edx, 3
 * 0000000140A089F2: jz      short loc_140A08A26
 * 0000000140A089F4: test    dword ptr [rbx+990h], 10000000h
 * 0000000140A089FE: mov     ecx, r15d
 * 0000000140A08A01: cmovz   ecx, edx
 * 0000000140A08A04: test    ecx, ecx
 * 0000000140A08A06: jz      short loc_140A08A1D
 * 0000000140A08A08: mov     rax, [rbx+228h]
 * 0000000140A08A0F: lea     rcx, [r8-8]
 * 0000000140A08A13: mov     rdx, [rcx]
 * 0000000140A08A16: call    KeGuardDispatchICall
 * 0000000140A08A1B: jmp     short loc_140A08A35
 * 0000000140A08A1D: mov     rax, [rbx+100h]
 * 0000000140A08A24: jmp     short loc_140A08A2D
 * 0000000140A08A26: mov     rax, [rbx+368h]
 * 0000000140A08A2D: mov     rcx, r8
 * 0000000140A08A30: call    KeGuardDispatchICall
 * 0000000140A08A35: mov     [rbx+924h], esi
 * 0000000140A08A3B: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140A08A42: jmp     short loc_140A08A60
 * 0000000140A08A44: mov     [rbp+0BE0h+var_BB0], r15
 * 0000000140A08A48: mov     rbx, rsi
 * 0000000140A08A4B: mov     [rbp+0BE0h+var_C18], 0C000009Ah
 * 0000000140A08A52: jmp     loc_140A0802E
 * 0000000140A08A57: mov     rbx, rsi
 * 0000000140A08A5A: mov     [rsi+7E4h], eax
 * 0000000140A08A60: add     [rbx+80Ch], r12d
 * 0000000140A08A67: lea     rsi, [rbx+r14]
 * 0000000140A08A6B: mov     ecx, 30h ; '0'
 * 0000000140A08A70: mov     [rbp+0BE0h+var_8B0], rsi
 * 0000000140A08A77: mov     rax, rsi
 * 0000000140A08A7A: lea     edx, [rcx-2Ah]
 * 0000000140A08A7D: mov     [rax], r15
 * 0000000140A08A80: add     ecx, 0FFFFFFF8h
 * 0000000140A08A83: add     rax, 8
 * 0000000140A08A87: sub     rdx, r12
 * 0000000140A08A8A: jnz     short loc_140A08A7D
 * 0000000140A08A8C: test    ecx, ecx
 * 0000000140A08A8E: jz      short loc_140A08A9F
 * 0000000140A08A90: mov     edx, 0FFFFFFFFh
 * 0000000140A08A95: mov     [rax], r15b
 * 0000000140A08A98: add     rax, r12
 * 0000000140A08A9B: add     ecx, edx
 * 0000000140A08A9D: jnz     short loc_140A08A95
 * 0000000140A08A9F: mov     r12, [rbp+0BE0h+var_BD8]
 * 0000000140A08AA3: mov     r15d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A08AAA: mov     r9, r12
 * 0000000140A08AAD: mov     dword ptr [rsi], 0Eh
 * 0000000140A08AB3: mov     [rsi+8], r12
 * 0000000140A08AB7: mov     [rsi+10h], r15d
 * 0000000140A08ABB: add     [rbx+828h], r15d
 * 0000000140A08AC2: lea     rcx, [r12+r15]
 * 0000000140A08AC6: mov     r10d, [rbx+814h]
 * 0000000140A08ACD: mov     r14, [rbx+818h]
 * 0000000140A08AD4: cmp     r12, rcx
 * 0000000140A08AD7: jnb     short loc_140A08AEC
 * 0000000140A08AD9: mov     rax, r12
 * 0000000140A08ADC: mov     edx, 40h ; '@'
 * 0000000140A08AE1: prefetchnta byte ptr [rax]
 * 0000000140A08AE4: add     rax, rdx
 * 0000000140A08AE7: cmp     rax, rcx
 * 0000000140A08AEA: jb      short loc_140A08AE1
 * 0000000140A08AEC: mov     r11d, r15d
 * 0000000140A08AEF: mov     r8, r14
 * 0000000140A08AF2: shr     r11d, 7
 * 0000000140A08AF6: test    r11d, r11d
 * 0000000140A08AF9: jz      short loc_140A08B74
 * 0000000140A08AFB: mov     rdi, 7010008004002001h
 * 0000000140A08B05: mov     r13d, 1
 * 0000000140A08B0B: mov     r15d, 0FFFFFFFFh
 * 0000000140A08B11: mov     eax, 8
 * 0000000140A08B16: xor     r8, [r9]
 * 0000000140A08B19: mov     ecx, r10d
 * 0000000140A08B1C: rol     r8, cl
 * 0000000140A08B1F: xor     r8, [r9+8]
 * 0000000140A08B23: add     r9, 10h
 * 0000000140A08B27: rol     r8, cl
 * 0000000140A08B2A: sub     rax, r13
 * 0000000140A08B2D: jnz     short loc_140A08B16
 * 0000000140A08B2F: mov     rcx, r9
 * 0000000140A08B32: sub     rcx, r12
 * 0000000140A08B35: xor     rcx, r14
 * 0000000140A08B38: mov     rax, rcx
 * 0000000140A08B3B: rol     rax, 11h
 * 0000000140A08B3F: xor     rcx, rax
 * 0000000140A08B42: mov     rax, rdi
 * 0000000140A08B45: mul     rcx
 * 0000000140A08B48: mov     [rbp+0BE0h+var_508], rdx
 * 0000000140A08B4F: xor     edx, eax
 * 0000000140A08B51: xor     r10d, edx
 * 0000000140A08B54: and     r10d, 3Fh
 * 0000000140A08B58: cmovz   r10d, r13d
 * 0000000140A08B5C: add     r11d, r15d
 * 0000000140A08B5F: jnz     short loc_140A08B11
 * 0000000140A08B61: mov     r15d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A08B68: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A08B6F: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A08B74: mov     edx, r15d
 * 0000000140A08B77: mov     r14d, 1
 * 0000000140A08B7D: and     edx, 7Fh
 * 0000000140A08B80: cmp     edx, 8
 * 0000000140A08B83: jb      short loc_140A08BA0
 * 0000000140A08B85: mov     eax, edx
 * 0000000140A08B87: shr     rax, 3
 * 0000000140A08B8B: xor     r8, [r9]
 * 0000000140A08B8E: mov     ecx, r10d
 * 0000000140A08B91: rol     r8, cl
 * 0000000140A08B94: add     r9, 8
 * 0000000140A08B98: add     edx, 0FFFFFFF8h
 * 0000000140A08B9B: sub     rax, r14
 * 0000000140A08B9E: jnz     short loc_140A08B8B
 * 0000000140A08BA0: test    edx, edx
 * 0000000140A08BA2: jz      short loc_140A08BBF
 * 0000000140A08BA4: mov     r11d, 0FFFFFFFFh
 * 0000000140A08BAA: movzx   eax, byte ptr [r9]
 * 0000000140A08BAE: mov     ecx, r10d
 * 0000000140A08BB1: xor     r8, rax
 * 0000000140A08BB4: add     r9, r14
 * 0000000140A08BB7: rol     r8, cl
 * 0000000140A08BBA: add     edx, r11d
 * 0000000140A08BBD: jnz     short loc_140A08BAA
 * 0000000140A08BBF: mov     rax, r8
 * 0000000140A08BC2: jmp     short loc_140A08BC7
 * 0000000140A08BC4: xor     r8d, eax
 * 0000000140A08BC7: shr     rax, 1Fh
 * 0000000140A08BCB: test    rax, rax
 * 0000000140A08BCE: jnz     short loc_140A08BC4
 * 0000000140A08BD0: btr     r8d, 1Fh
 * 0000000140A08BD5: mov     [rsi+14h], r8d
 * 0000000140A08BD9: mov     rsi, rbx
 * 0000000140A08BDC: mov     rax, [rbp+0BE0h+var_8B0]
 * 0000000140A08BE3: mov     [rbp+0BE0h+var_AA0], rax
 * 0000000140A08BEA: add     [rbx+828h], r15d
 * 0000000140A08BF1: jmp     short loc_140A08C04
 * 0000000140A08BF3: mov     r15d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A08BFA: mov     r12, [rbp+0BE0h+var_BD8]
 * 0000000140A08BFE: mov     dword ptr [rax], 0Eh
 * 0000000140A08C04: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A08C0E: jz      short loc_140A08C2E
 * 0000000140A08C10: test    r15d, r15d
 * 0000000140A08C13: jz      short loc_140A08C2E
 * 0000000140A08C15: mov     r9, [rbp+0BE0h+var_AA0]
 * 0000000140A08C1C: mov     r8d, r15d
 * 0000000140A08C1F: add     r9, 1Ch
 * 0000000140A08C23: mov     rdx, r12
 * 0000000140A08C26: mov     rcx, rsi
 * 0000000140A08C29: call    sub_1403EA5FC
 * 0000000140A08C2E: mov     rax, [rbp+0BE0h+var_AA0]
 * 0000000140A08C35: xor     r15d, r15d
 * 0000000140A08C38: mov     [rbp+0BE0h+var_BA8], rsi
 * 0000000140A08C3C: mov     [rax+18h], r15d
 * 0000000140A08C40: lea     ecx, [r15+1]
 * 0000000140A08C44: mov     rax, [rbp+0BE0h+var_AA0]
 * 0000000140A08C4B: or      [rax+18h], ecx
 * 0000000140A08C4E: mov     rbx, [rbp+0BE0h+var_B48]
 * 0000000140A08C55: mov     dword ptr [rbx+90h], 23h ; '#'
 * 0000000140A08C5F: or      [rbx+0B8h], ecx
 * 0000000140A08C65: cmp     dword ptr [rbx+0A0h], 94h
 * 0000000140A08C6F: jb      short loc_140A08CE5
 * 0000000140A08C71: mov     rax, [rsi+1F8h]
 * 0000000140A08C78: mov     rcx, r13
 * 0000000140A08C7B: mov     r14, [rbx+98h]
 * 0000000140A08C82: call    KeGuardDispatchICall
 * 0000000140A08C87: test    rax, rax
 * 0000000140A08C8A: jz      loc_140A08A44
 * 0000000140A08C90: mov     ecx, [rax+50h]
 * 0000000140A08C93: lea     eax, [r15+2]
 * 0000000140A08C97: or      [rbx+0B8h], eax
 * 0000000140A08C9D: add     rcx, r13
 * 0000000140A08CA0: mov     rax, [r14+70h]
 * 0000000140A08CA4: cmp     rax, r13
 * 0000000140A08CA7: jb      short loc_140A08CBF
 * 0000000140A08CA9: cmp     rax, rcx
 * 0000000140A08CAC: jnb     short loc_140A08CBF
 * 0000000140A08CAE: mov     rax, [rax]
 * 0000000140A08CB1: mov     [rbx+0A8h], rax
 * 0000000140A08CB8: or      dword ptr [rbx+0B8h], 4
 * 0000000140A08CBF: mov     rax, [r14+78h]
 * 0000000140A08CC3: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A08CC8: cmp     rax, r14
 * 0000000140A08CCB: jb      short loc_140A08CEA
 * 0000000140A08CCD: cmp     rax, rcx
 * 0000000140A08CD0: jnb     short loc_140A08CEA
 * 0000000140A08CD2: mov     rax, [rax]
 * 0000000140A08CD5: mov     [rbx+0B0h], rax
 * 0000000140A08CDC: or      dword ptr [rbx+0B8h], 8
 * 0000000140A08CE3: jmp     short loc_140A08CEA
 * 0000000140A08CE5: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A08CEA: test    dword ptr [rsi+990h], 400000h
 * 0000000140A08CF4: mov     [rbp+0BE0h+var_BB0], rsi
 * 0000000140A08CF8: jz      loc_140A09C1B
 * 0000000140A08CFE: mov     rax, [rsi+1F8h]
 * 0000000140A08D05: mov     rcx, r14
 * 0000000140A08D08: call    KeGuardDispatchICall
 * 0000000140A08D0D: xor     r11d, r11d
 * 0000000140A08D10: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A08D15: mov     r15, rax
 * 0000000140A08D18: test    rax, rax
 * 0000000140A08D1B: jnz     short loc_140A08D2A
 * 0000000140A08D1D: mov     ecx, 0C000007Bh
 * 0000000140A08D22: xor     r15d, r15d
 * 0000000140A08D25: jmp     loc_140A09C22
 * 0000000140A08D2A: movzx   r10d, word ptr [r15+6]
 * 0000000140A08D2F: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A08D39: mov     r12d, [rbp+0BE0h+var_C58]
 * 0000000140A08D3D: mul     r12
 * 0000000140A08D40: mov     word ptr [rbp+0BE0h+arg_8], r10w
 * 0000000140A08D48: mov     r9, rdx
 * 0000000140A08D4B: shr     r9, 3
 * 0000000140A08D4F: mov     [rbp+0BE0h+var_C40], r9
 * 0000000140A08D53: test    r10w, r10w
 * 0000000140A08D57: jnz     short loc_140A08DC0
 * 0000000140A08D59: test    dword ptr [rsi+990h], 200000h
 * 0000000140A08D63: jz      loc_140A0CBC6
 * 0000000140A08D69: xor     r15d, r15d
 * 0000000140A08D6C: cmp     [rsi+8F8h], r15d
 * 0000000140A08D73: jnz     short loc_140A08DB6
 * 0000000140A08D75: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A08D7F: add     rax, rsi
 * 0000000140A08D82: mov     [rsi+900h], rax
 * 0000000140A08D89: lea     eax, [r15+1]
 * 0000000140A08D8D: mov     [rsi+908h], r15
 * 0000000140A08D94: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140A08D9F: mov     [rsi+918h], r14
 * 0000000140A08DA6: mov     [rsi+8F8h], eax
 * 0000000140A08DAC: xor     edx, edx
 * 0000000140A08DAE: mov     rcx, rsi
 * 0000000140A08DB1: call    $$b8
 * 0000000140A08DB6: mov     ecx, 0C000007Bh
 * 0000000140A08DBB: jmp     loc_140A09C22
 * 0000000140A08DC0: mov     rdx, [rbp+0BE0h+var_C10]
 * 0000000140A08DC4: lea     r8, [r15+18h]
 * 0000000140A08DC8: mov     eax, r9d
 * 0000000140A08DCB: mov     ecx, r11d
 * 0000000140A08DCE: mov     rbx, rdx
 * 0000000140A08DD1: mov     [rsp+0CE0h+var_C78], ecx
 * 0000000140A08DD5: lea     r13, [rax+rax*2]
 * 0000000140A08DD9: shl     r13, 2
 * 0000000140A08DDD: mov     [rbp+0BE0h+var_C30], r13
 * 0000000140A08DE1: lea     rax, [rdx+r13]
 * 0000000140A08DE5: mov     [rbp+0BE0h+var_C48], rax
 * 0000000140A08DE9: movzx   eax, word ptr [r15+14h]
 * 0000000140A08DEE: mov     r11, [rbp+0BE0h+var_C48]
 * 0000000140A08DF2: add     r8, rax
 * 0000000140A08DF5: movzx   eax, r10w
 * 0000000140A08DF9: mov     [rbp+0BE0h+var_C50], r8
 * 0000000140A08DFD: test    eax, eax
 * 0000000140A08DFF: jz      loc_140A09030
 * 0000000140A08E05: xor     r9d, r9d
 * 0000000140A08E08: lea     r12, [r8+8]
 * 0000000140A08E0C: lea     r13d, [r9+1]
 * 0000000140A08E10: mov     r15d, [r12+8]
 * 0000000140A08E15: mov     eax, [r12]
 * 0000000140A08E19: cmp     r15d, eax
 * 0000000140A08E1C: mov     edx, [r12+4]
 * 0000000140A08E21: cmovbe  r15d, eax
 * 0000000140A08E25: mov     [rbp+0BE0h+var_C28], edx
 * 0000000140A08E28: add     r15d, edx
 * 0000000140A08E2B: test    ecx, ecx
 * 0000000140A08E2D: jz      short loc_140A08E45
 * 0000000140A08E2F: lea     eax, [rcx-1]
 * 0000000140A08E32: lea     rax, [rax+rax*4]
 * 0000000140A08E36: cmp     r15d, [r8+rax*8+0Ch]
 * 0000000140A08E3B: jb      loc_140A0904E
 * 0000000140A08E41: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A08E45: cmp     rbx, r11
 * 0000000140A08E48: jz      loc_140A09008
 * 0000000140A08E4E: mov     ecx, [rbx]
 * 0000000140A08E50: mov     eax, [rbx+4]
 * 0000000140A08E53: cmp     ecx, r15d
 * 0000000140A08E56: jnb     loc_140A08FEE
 * 0000000140A08E5C: cmp     eax, edx
 * 0000000140A08E5E: jbe     loc_140A08FEE
 * 0000000140A08E64: cmp     ecx, edx
 * 0000000140A08E66: jb      loc_140A090A7
 * 0000000140A08E6C: cmp     eax, r15d
 * 0000000140A08E6F: ja      loc_140A090A7
 * 0000000140A08E75: mov     eax, [rbx+8]
 * 0000000140A08E78: mov     ecx, 1
 * 0000000140A08E7D: test    cl, al
 * 0000000140A08E7F: jnz     short loc_140A08E8D
 * 0000000140A08E81: mov     al, [rax+r14]
 * 0000000140A08E85: test    al, 20h
 * 0000000140A08E87: jz      loc_140A08FE0
 * 0000000140A08E8D: mov     eax, [r12]
 * 0000000140A08E91: mov     ecx, [r12+4]
 * 0000000140A08E96: mov     r14d, [r12+8]
 * 0000000140A08E9B: cmp     r14d, eax
 * 0000000140A08E9E: mov     rdx, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A08EA3: cmovbe  r14d, eax
 * 0000000140A08EA7: mov     [rbp+0BE0h+var_C38], ecx
 * 0000000140A08EAA: mov     rax, [rsi+418h]
 * 0000000140A08EB1: add     r14d, ecx
 * 0000000140A08EB4: mov     rcx, rbx
 * 0000000140A08EB7: call    KeGuardDispatchICall
 * 0000000140A08EBC: mov     r13, rax
 * 0000000140A08EBF: mov     eax, [rbp+0BE0h+var_C38]
 * 0000000140A08EC2: cmp     [r13+0], eax
 * 0000000140A08EC6: jb      short loc_140A08ECE
 * 0000000140A08EC8: cmp     [r13+4], r14d
 * 0000000140A08ECC: jbe     short loc_140A08F3A
 * 0000000140A08ECE: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A08ED3: mov     edx, r13d
 * 0000000140A08ED6: sub     edx, r8d
 * 0000000140A08ED9: mov     eax, 80000000h
 * 0000000140A08EDE: or      edx, eax
 * 0000000140A08EE0: test    dword ptr [rsi+990h], 200000h
 * 0000000140A08EEA: jz      loc_140A0CC82
 * 0000000140A08EF0: xor     ecx, ecx
 * 0000000140A08EF2: cmp     [rsi+8F8h], ecx
 * 0000000140A08EF8: jnz     short loc_140A08F3A
 * 0000000140A08EFA: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A08F04: xor     edx, edx
 * 0000000140A08F06: add     rax, rsi
 * 0000000140A08F09: mov     [rsi+900h], rax
 * 0000000140A08F10: lea     eax, [rcx+1]
 * 0000000140A08F13: mov     [rsi+908h], rcx
 * 0000000140A08F1A: mov     rcx, rsi
 * 0000000140A08F1D: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140A08F28: mov     [rsi+918h], r8
 * 0000000140A08F2F: mov     [rsi+8F8h], eax
 * 0000000140A08F35: call    $$b8
 * 0000000140A08F3A: mov     r8d, [r13+0]
 * 0000000140A08F3E: mov     rcx, r13
 * 0000000140A08F41: add     r8, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A08F46: mov     rax, [rsi+420h]
 * 0000000140A08F4D: mov     rdx, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A08F52: call    KeGuardDispatchICall
 * 0000000140A08F57: mov     rdx, rax
 * 0000000140A08F5A: mov     eax, [rbp+0BE0h+var_C38]
 * 0000000140A08F5D: cmp     [rdx], eax
 * 0000000140A08F5F: jb      short loc_140A08F67
 * 0000000140A08F61: cmp     [rdx+4], r14d
 * 0000000140A08F65: jbe     short loc_140A08FD5
 * 0000000140A08F67: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A08F6C: mov     eax, 80000000h
 * 0000000140A08F71: sub     edx, r14d
 * 0000000140A08F74: or      edx, eax
 * 0000000140A08F76: test    dword ptr [rsi+990h], 200000h
 * 0000000140A08F80: jz      loc_140A0CC53
 * 0000000140A08F86: xor     r9d, r9d
 * 0000000140A08F89: cmp     [rsi+8F8h], r9d
 * 0000000140A08F90: jnz     short loc_140A08FDD
 * 0000000140A08F92: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A08F9C: xor     edx, edx
 * 0000000140A08F9E: add     rax, rsi
 * 0000000140A08FA1: mov     rcx, rsi
 * 0000000140A08FA4: mov     [rsi+900h], rax
 * 0000000140A08FAB: lea     eax, [r9+1]
 * 0000000140A08FAF: mov     [rsi+908h], r9
 * 0000000140A08FB6: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140A08FC1: mov     [rsi+918h], r14
 * 0000000140A08FC8: mov     [rsi+8F8h], eax
 * 0000000140A08FCE: call    $$b8
 * 0000000140A08FD3: jmp     short loc_140A08FDA
 * 0000000140A08FD5: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A08FDA: xor     r9d, r9d
 * 0000000140A08FDD: mov     edx, [rbp+0BE0h+var_C28]
 * 0000000140A08FE0: add     rbx, 0Ch
 * 0000000140A08FE4: cmp     rbx, [rbp+0BE0h+var_C48]
 * 0000000140A08FE8: jnz     loc_140A08E4E
 * 0000000140A08FEE: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A08FF2: mov     r13d, 1
 * 0000000140A08FF8: movzx   r10d, word ptr [rbp+0BE0h+arg_8]
 * 0000000140A09000: mov     r8, [rbp+0BE0h+var_C50]
 * 0000000140A09004: mov     r11, [rbp+0BE0h+var_C48]
 * 0000000140A09008: add     ecx, r13d
 * 0000000140A0900B: movzx   eax, r10w
 * 0000000140A0900F: add     r12, 28h ; '('
 * 0000000140A09013: mov     [rsp+0CE0h+var_C78], ecx
 * 0000000140A09017: cmp     ecx, eax
 * 0000000140A09019: jb      loc_140A08E10
 * 0000000140A0901F: mov     r9, [rbp+0BE0h+var_C40]
 * 0000000140A09023: mov     r15, [rsp+0CE0h+var_C70]
 * 0000000140A09028: mov     r13, [rbp+0BE0h+var_C30]
 * 0000000140A0902C: mov     r12d, [rbp+0BE0h+var_C58]
 * 0000000140A09030: cmp     rbx, r11
 * 0000000140A09033: jz      loc_140A090BC
 * 0000000140A09039: test    dword ptr [rsi+990h], 200000h
 * 0000000140A09043: jz      loc_140A0CBF4
 * 0000000140A09049: jmp     loc_140A08D69
 * 0000000140A0904E: test    dword ptr [rsi+990h], 200000h
 * 0000000140A09058: jz      loc_140A0CC24
 * 0000000140A0905E: xor     r15d, r15d
 * 0000000140A09061: cmp     [rsi+8F8h], r15d
 * 0000000140A09068: jnz     loc_140A08DB6
 * 0000000140A0906E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A09078: add     rax, rsi
 * 0000000140A0907B: mov     [rsi+900h], rax
 * 0000000140A09082: mov     [rsi+908h], r15
 * 0000000140A09089: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140A09094: mov     [rsi+918h], r14
 * 0000000140A0909B: mov     [rsi+8F8h], r13d
 * 0000000140A090A2: jmp     loc_140A08DAC
 * 0000000140A090A7: test    dword ptr [rsi+990h], 200000h
 * 0000000140A090B1: jz      loc_140A0CCAE
 * 0000000140A090B7: jmp     loc_140A08D69
 * 0000000140A090BC: xor     r11d, r11d
 * 0000000140A090BF: test    r9d, r9d
 * 0000000140A090C2: jz      short loc_140A090CD
 * 0000000140A090C4: lea     ecx, [r9+6]
 * 0000000140A090C8: and     ecx, 0FFFFFFF8h
 * 0000000140A090CB: jmp     short loc_140A090D0
 * 0000000140A090CD: mov     ecx, r11d
 * 0000000140A090D0: mov     r14d, [rsi+7E4h]
 * 0000000140A090D7: lea     eax, [rax+rax*2]
 * 0000000140A090DA: mov     r8d, [rsi+924h]
 * 0000000140A090E1: lea     eax, [rax+6]
 * 0000000140A090E4: lea     eax, [rcx+rax*8]
 * 0000000140A090E7: add     eax, r14d
 * 0000000140A090EA: cmp     eax, [rsi+0A1Ch]
 * 0000000140A090F0: jbe     loc_140A091EA
 * 0000000140A090F6: mov     edx, eax
 * 0000000140A090F8: mov     rcx, rsi
 * 0000000140A090FB: call    sub_140A0FB30
 * 0000000140A09100: xor     r11d, r11d
 * 0000000140A09103: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A09107: mov     rbx, rax
 * 0000000140A0910A: test    rax, rax
 * 0000000140A0910D: jz      loc_140A091E0
 * 0000000140A09113: mov     ecx, [rsi+990h]
 * 0000000140A09119: test    cl, 4
 * 0000000140A0911C: jnz     loc_140A091CB
 * 0000000140A09122: mov     eax, [rsi+7E4h]
 * 0000000140A09128: lea     r9d, [r11+1]
 * 0000000140A0912C: mov     r8, [rsi+7C8h]
 * 0000000140A09133: and     ecx, 20000000h
 * 0000000140A09139: neg     ecx
 * 0000000140A0913B: sbb     edx, edx
 * 0000000140A0913D: and     edx, [rsi+924h]
 * 0000000140A09143: cmp     eax, 8
 * 0000000140A09146: jb      short loc_140A0915D
 * 0000000140A09148: mov     ecx, eax
 * 0000000140A0914A: shr     rcx, 3
 * 0000000140A0914E: mov     [rsi], r11
 * 0000000140A09151: add     eax, 0FFFFFFF8h
 * 0000000140A09154: add     rsi, 8
 * 0000000140A09158: sub     rcx, r9
 * 0000000140A0915B: jnz     short loc_140A0914E
 * 0000000140A0915D: test    eax, eax
 * 0000000140A0915F: jz      short loc_140A09170
 * 0000000140A09161: mov     ecx, 0FFFFFFFFh
 * 0000000140A09166: mov     [rsi], r11b
 * 0000000140A09169: add     rsi, r9
 * 0000000140A0916C: add     eax, ecx
 * 0000000140A0916E: jnz     short loc_140A09166
 * 0000000140A09170: mov     esi, [rbx+924h]
 * 0000000140A09176: mov     [rbx+924h], edx
 * 0000000140A0917C: cmp     edx, 3
 * 0000000140A0917F: jz      short loc_140A091B3
 * 0000000140A09181: test    dword ptr [rbx+990h], 10000000h
 * 0000000140A0918B: mov     ecx, r11d
 * 0000000140A0918E: cmovz   ecx, edx
 * 0000000140A09191: test    ecx, ecx
 * 0000000140A09193: jz      short loc_140A091AA
 * 0000000140A09195: mov     rax, [rbx+228h]
 * 0000000140A0919C: lea     rcx, [r8-8]
 * 0000000140A091A0: mov     rdx, [rcx]
 * 0000000140A091A3: call    KeGuardDispatchICall
 * 0000000140A091A8: jmp     short loc_140A091C2
 * 0000000140A091AA: mov     rax, [rbx+100h]
 * 0000000140A091B1: jmp     short loc_140A091BA
 * 0000000140A091B3: mov     rax, [rbx+368h]
 * 0000000140A091BA: mov     rcx, r8
 * 0000000140A091BD: call    KeGuardDispatchICall
 * 0000000140A091C2: mov     [rbx+924h], esi
 * 0000000140A091C8: xor     r11d, r11d
 * 0000000140A091CB: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140A091D2: mov     r9, [rbp+0BE0h+var_C40]
 * 0000000140A091D6: movzx   r10d, word ptr [rbp+0BE0h+arg_8]
 * 0000000140A091DE: jmp     short loc_140A091F7
 * 0000000140A091E0: mov     ecx, 0C000009Ah
 * 0000000140A091E5: jmp     loc_140A08D22
 * 0000000140A091EA: mov     rbx, rsi
 * 0000000140A091ED: mov     [rsi+7E4h], eax
 * 0000000140A091F3: mov     [rbp+0BE0h+var_C30], rbx
 * 0000000140A091F7: mov     esi, 1
 * 0000000140A091FC: lea     rcx, [rbx+r14]
 * 0000000140A09200: add     [rbx+80Ch], esi
 * 0000000140A09206: mov     rax, rcx
 * 0000000140A09209: mov     [rbp+0BE0h+var_8A8], rcx
 * 0000000140A09210: lea     edx, [rsi+2Fh]
 * 0000000140A09213: lea     r8d, [rsi+5]
 * 0000000140A09217: mov     [rax], r11
 * 0000000140A0921A: add     edx, 0FFFFFFF8h
 * 0000000140A0921D: add     rax, 8
 * 0000000140A09221: sub     r8, rsi
 * 0000000140A09224: jnz     short loc_140A09217
 * 0000000140A09226: test    edx, edx
 * 0000000140A09228: jz      short loc_140A0923B
 * 0000000140A0922A: mov     r8d, 0FFFFFFFFh
 * 0000000140A09230: mov     [rax], r11b
 * 0000000140A09233: add     rax, rsi
 * 0000000140A09236: add     edx, r8d
 * 0000000140A09239: jnz     short loc_140A09230
 * 0000000140A0923B: mov     rax, [rbp+0BE0h+var_C10]
 * 0000000140A0923F: mov     dword ptr [rcx], 1Eh
 * 0000000140A09245: mov     [rcx+8], rax
 * 0000000140A09249: mov     [rcx+10h], r11d
 * 0000000140A0924D: mov     rdx, [rbx+818h]
 * 0000000140A09254: mov     rax, rdx
 * 0000000140A09257: jmp     short loc_140A0925B
 * 0000000140A09259: xor     edx, eax
 * 0000000140A0925B: shr     rax, 1Fh
 * 0000000140A0925F: test    rax, rax
 * 0000000140A09262: jnz     short loc_140A09259
 * 0000000140A09264: mov     r8, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A09269: btr     edx, 1Fh
 * 0000000140A0926D: mov     [rcx+14h], edx
 * 0000000140A09270: mov     rsi, rbx
 * 0000000140A09273: mov     rax, [rbp+0BE0h+var_8A8]
 * 0000000140A0927A: mov     [rbp+0BE0h+var_AF0], rax
 * 0000000140A09281: mov     [rbp+0BE0h+var_BB0], rbx
 * 0000000140A09285: mov     [rax+18h], r8
 * 0000000140A09289: mov     ecx, [r15+50h]
 * 0000000140A0928D: xor     r15d, r15d
 * 0000000140A09290: mov     rax, [rbp+0BE0h+var_AF0]
 * 0000000140A09297: mov     [rax+20h], ecx
 * 0000000140A0929A: mov     ecx, 1
 * 0000000140A0929F: mov     rax, [rbp+0BE0h+var_AF0]
 * 0000000140A092A6: mov     [rax+24h], r12d
 * 0000000140A092AA: mov     rax, [rbp+0BE0h+var_AF0]
 * 0000000140A092B1: mov     [rax+28h], r10w
 * 0000000140A092B6: mov     rax, [rbp+0BE0h+var_AF0]
 * 0000000140A092BD: or      [rax+2Ah], cx
 * 0000000140A092C1: mov     rcx, [rbp+0BE0h+var_AF0]
 * 0000000140A092C8: lea     rdx, [rcx+30h]
 * 0000000140A092CC: mov     [rsp+0CE0h+var_C88], rdx
 * 0000000140A092D1: test    r9d, r9d
 * 0000000140A092D4: jz      short loc_140A092E7
 * 0000000140A092D6: lea     r12d, [r9-1]
 * 0000000140A092DA: add     r12, 7
 * 0000000140A092DE: and     r12, 0FFFFFFFFFFFFFFF8h
 * 0000000140A092E2: add     r12, rdx
 * 0000000140A092E5: jmp     short loc_140A092EA
 * 0000000140A092E7: mov     r12, rdx
 * 0000000140A092EA: movzx   eax, word ptr [rcx+28h]
 * 0000000140A092EE: test    r9d, r9d
 * 0000000140A092F1: mov     r14d, 0Ch
 * 0000000140A092F7: mov     [rbp+0BE0h+var_C60], r12
 * 0000000140A092FB: cmovz   r14, r13
 * 0000000140A092FF: mov     r9d, 1
 * 0000000140A09305: mov     r13, [rbp+0BE0h+var_C10]
 * 0000000140A09309: add     r14, r13
 * 0000000140A0930C: lea     rcx, [rax+rax*2]
 * 0000000140A09310: mov     [rsp+0CE0h+var_C80], r14
 * 0000000140A09315: lea     r11, [r12+rcx*8]
 * 0000000140A09319: mov     [rsp+0CE0h+var_C70], r11
 * 0000000140A0931E: cmp     r15w, r10w
 * 0000000140A09322: jnb     short loc_140A09358
 * 0000000140A09324: movzx   edx, r10w
 * 0000000140A09328: lea     rax, [r12+8]
 * 0000000140A0932D: mov     r10d, 80000000h
 * 0000000140A09333: lea     r14d, [r9+1]
 * 0000000140A09337: mov     rcx, r14
 * 0000000140A0933A: mov     [rax-8], r15d
 * 0000000140A0933E: mov     [rax-4], r15d
 * 0000000140A09342: mov     [rax], r10d
 * 0000000140A09345: add     rax, 0Ch
 * 0000000140A09349: sub     rcx, r9
 * 0000000140A0934C: jnz     short loc_140A0933A
 * 0000000140A0934E: sub     rdx, r9
 * 0000000140A09351: jnz     short loc_140A09337
 * 0000000140A09353: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A09358: cmp     r12, r11
 * 0000000140A0935B: jz      loc_140A09C1B
 * 0000000140A09361: mov     rsi, [rbp+0BE0h+var_C50]
 * 0000000140A09365: mov     eax, [rsi+24h]
 * 0000000140A09368: mov     r11d, r15d
 * 0000000140A0936B: bt      eax, 19h
 * 0000000140A0936F: jb      loc_140A094F7
 * 0000000140A09375: mov     ecx, [rsi]
 * 0000000140A09377: cmp     ecx, 54494E49h
 * 0000000140A0937D: jnz     short loc_140A0938C
 * 0000000140A0937F: cmp     dword ptr [rsi+4], 4742444Bh
 * 0000000140A09386: jz      loc_140A094F7
 * 0000000140A0938C: cmp     ecx, 45474150h
 * 0000000140A09392: jnz     short loc_140A093C2
 * 0000000140A09394: movzx   eax, word ptr [rsi+4]
 * 0000000140A09398: mov     edx, 7877h
 * 0000000140A0939D: cmp     ax, dx
 * 0000000140A093A0: jz      loc_140A094F7
 * 0000000140A093A6: mov     edx, 7277h
 * 0000000140A093AB: cmp     ax, dx
 * 0000000140A093AE: jz      loc_140A094F7
 * 0000000140A093B4: mov     edx, 7777h
 * 0000000140A093B9: cmp     ax, dx
 * 0000000140A093BC: jz      loc_140A094F7
 * 0000000140A093C2: cmp     ecx, 41525245h
 * 0000000140A093C8: jnz     short loc_140A093D9
 * 0000000140A093CA: mov     eax, 4154h
 * 0000000140A093CF: cmp     [rsi+4], ax
 * 0000000140A093D3: jz      loc_140A094F7
 * 0000000140A093D9: mov     rax, [rbx+938h]
 * 0000000140A093E0: mov     r9, rsi
 * 0000000140A093E3: mov     r8, [rbx+930h]
 * 0000000140A093EA: mov     r10d, 7
 * 0000000140A093F0: mov     [rbp+0BE0h+var_7E8], rax
 * 0000000140A093F7: sub     r9, r8
 * 0000000140A093FA: mov     rax, [rbx+940h]
 * 0000000140A09401: mov     [rbp+0BE0h+var_7E0], rax
 * 0000000140A09408: mov     rax, [rbx+948h]
 * 0000000140A0940F: mov     [rbp+0BE0h+var_7D8], rax
 * 0000000140A09416: mov     [rbp+0BE0h+var_7F0], r8
 * 0000000140A0941D: movzx   edx, byte ptr [r8+r9]
 * 0000000140A09422: movzx   eax, byte ptr [r8]
 * 0000000140A09426: inc     r8
 * 0000000140A09429: cmp     rdx, rax
 * 0000000140A0942C: jnz     short loc_140A0943D
 * 0000000140A0942E: mov     eax, 0FFFFFFFFh
 * 0000000140A09433: add     r10d, eax
 * 0000000140A09436: jnz     short loc_140A0941D
 * 0000000140A09438: jmp     loc_140A094EC
 * 0000000140A0943D: mov     r9, [rbp+0BE0h+var_7E8]
 * 0000000140A09444: mov     r8d, 8
 * 0000000140A0944A: mov     r10, rsi
 * 0000000140A0944D: mov     rcx, [r10]
 * 0000000140A09450: add     r10, 8
 * 0000000140A09454: mov     rax, [r9]
 * 0000000140A09457: add     r9, 8
 * 0000000140A0945B: cmp     rcx, rax
 * 0000000140A0945E: jnz     short loc_140A0948E
 * 0000000140A09460: add     r8d, 0FFFFFFF8h
 * 0000000140A09464: cmp     r8d, 8
 * 0000000140A09468: jnb     short loc_140A0944D
 * 0000000140A0946A: test    r8d, r8d
 * 0000000140A0946D: jz      short loc_140A094EC
 * 0000000140A0946F: movzx   edx, byte ptr [r10]
 * 0000000140A09473: inc     r10
 * 0000000140A09476: movzx   eax, byte ptr [r9]
 * 0000000140A0947A: inc     r9
 * 0000000140A0947D: cmp     rdx, rax
 * 0000000140A09480: jnz     short loc_140A0948E
 * 0000000140A09482: mov     eax, 0FFFFFFFFh
 * 0000000140A09487: add     r8d, eax
 * 0000000140A0948A: jnz     short loc_140A0946F
 * 0000000140A0948C: jmp     short loc_140A094EC
 * 0000000140A0948E: mov     r8, [rbp+0BE0h+var_7E0]
 * 0000000140A09495: mov     r9, rsi
 * 0000000140A09498: sub     r9, r8
 * 0000000140A0949B: mov     r10d, 4
 * 0000000140A094A1: movzx   edx, byte ptr [r9+r8]
 * 0000000140A094A6: movzx   eax, byte ptr [r8]
 * 0000000140A094AA: inc     r8
 * 0000000140A094AD: cmp     rdx, rax
 * 0000000140A094B0: jnz     short loc_140A094BE
 * 0000000140A094B2: mov     eax, 0FFFFFFFFh
 * 0000000140A094B7: add     r10d, eax
 * 0000000140A094BA: jnz     short loc_140A094A1
 * 0000000140A094BC: jmp     short loc_140A094EC
 * 0000000140A094BE: mov     r8, [rbp+0BE0h+var_7D8]
 * 0000000140A094C5: mov     r9, rsi
 * 0000000140A094C8: sub     r9, r8
 * 0000000140A094CB: mov     r10d, 6
 * 0000000140A094D1: movzx   edx, byte ptr [r9+r8]
 * 0000000140A094D6: movzx   eax, byte ptr [r8]
 * 0000000140A094DA: inc     r8
 * 0000000140A094DD: cmp     rdx, rax
 * 0000000140A094E0: jnz     short loc_140A094FC
 * 0000000140A094E2: mov     eax, 0FFFFFFFFh
 * 0000000140A094E7: add     r10d, eax
 * 0000000140A094EA: jnz     short loc_140A094D1
 * 0000000140A094EC: mov     r9d, 1
 * 0000000140A094F2: mov     r11d, r9d
 * 0000000140A094F5: jmp     short loc_140A09502
 * 0000000140A094F7: mov     r11d, r9d
 * 0000000140A094FA: jmp     short loc_140A09507
 * 0000000140A094FC: mov     r9d, 1
 * 0000000140A09502: mov     r8, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A09507: mov     ecx, [rsi+24h]
 * 0000000140A0950A: test    ecx, ecx
 * 0000000140A0950C: cmovs   r11d, r9d
 * 0000000140A09510: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 0000000140A09517: test    r11d, r11d
 * 0000000140A0951A: jz      short loc_140A09542
 * 0000000140A0951C: cmp     dword ptr [rsi], 54494E49h
 * 0000000140A09522: jnz     short loc_140A09542
 * 0000000140A09524: cmp     dword ptr [rsi+4], 4742444Bh
 * 0000000140A0952B: jnz     short loc_140A09542
 * 0000000140A0952D: test    dword ptr [rbx+994h], 2000h
 * 0000000140A09537: cmovnz  r11d, r15d
 * 0000000140A0953B: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 0000000140A09542: test    dword ptr [rbx+994h], 4000h
 * 0000000140A0954C: jz      short loc_140A09570
 * 0000000140A0954E: bt      ecx, 1Dh
 * 0000000140A09552: jnb     short loc_140A09570
 * 0000000140A09554: cmp     r8, [rbx+5E8h]
 * 0000000140A0955B: jz      short loc_140A09566
 * 0000000140A0955D: cmp     r8, [rbx+5F0h]
 * 0000000140A09564: jnz     short loc_140A09570
 * 0000000140A09566: mov     r11d, r9d
 * 0000000140A09569: mov     dword ptr [rbp+0BE0h+arg_8], r9d
 * 0000000140A09570: mov     ecx, [rsi+10h]
 * 0000000140A09573: mov     eax, [rsi+8]
 * 0000000140A09576: cmp     ecx, eax
 * 0000000140A09578: mov     edx, [rsi+0Ch]
 * 0000000140A0957B: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A0957F: cmovbe  ecx, eax
 * 0000000140A09582: add     ecx, edx
 * 0000000140A09584: mov     [rbp+0BE0h+var_C58], edx
 * 0000000140A09587: xor     r10d, r10d
 * 0000000140A0958A: mov     [rsp+0CE0h+var_C78], ecx
 * 0000000140A0958E: cmp     r13, r9
 * 0000000140A09591: jz      short loc_140A0959D
 * 0000000140A09593: mov     r15d, [r13+0]
 * 0000000140A09597: mov     r13d, [r13+4]
 * 0000000140A0959B: jmp     short loc_140A095A0
 * 0000000140A0959D: mov     r13d, r10d
 * 0000000140A095A0: mov     [rbp+0BE0h+var_C28], edx
 * 0000000140A095A3: cmp     [rbp+0BE0h+var_C10], r9
 * 0000000140A095A7: jz      loc_140A09766
 * 0000000140A095AD: cmp     r15d, edx
 * 0000000140A095B0: jbe     loc_140A09766
 * 0000000140A095B6: cmp     r13d, ecx
 * 0000000140A095B9: ja      loc_140A09766
 * 0000000140A095BF: test    r11d, r11d
 * 0000000140A095C2: jnz     loc_140A09766
 * 0000000140A095C8: mov     [r12], edx
 * 0000000140A095CC: lea     rcx, [rbp+0BE0h+var_9B0]
 * 0000000140A095D3: mov     [r12+4], r15d
 * 0000000140A095D8: lea     rdx, [rbp+0BE0h+var_7A0]
 * 0000000140A095DF: mov     eax, [r12]
 * 0000000140A095E3: mov     r9d, r15d
 * 0000000140A095E6: sub     r9d, eax
 * 0000000140A095E9: mov     [rbp+0BE0h+var_C28], r15d
 * 0000000140A095ED: mov     r14d, r9d
 * 0000000140A095F0: lea     rsi, [r8+rax]
 * 0000000140A095F4: mov     r8d, r10d
 * 0000000140A095F7: add     r14, rsi
 * 0000000140A095FA: mov     r10, [rdx]
 * 0000000140A095FD: mov     eax, [rcx]
 * 0000000140A095FF: add     rax, r10
 * 0000000140A09602: cmp     rsi, rax
 * 0000000140A09605: jnb     short loc_140A09610
 * 0000000140A09607: cmp     r14, r10
 * 0000000140A0960A: ja      loc_140A09756
 * 0000000140A09610: inc     r8d
 * 0000000140A09613: add     rdx, 8
 * 0000000140A09617: add     rcx, 4
 * 0000000140A0961B: cmp     r8d, 6
 * 0000000140A0961F: jb      short loc_140A095FA
 * 0000000140A09621: add     [rbx+828h], r9d
 * 0000000140A09628: mov     r10, rsi
 * 0000000140A0962B: mov     r11d, [rbx+814h]
 * 0000000140A09632: mov     rax, rsi
 * 0000000140A09635: mov     r12, [rbx+818h]
 * 0000000140A0963C: cmp     rsi, r14
 * 0000000140A0963F: jnb     short loc_140A09651
 * 0000000140A09641: mov     ecx, 40h ; '@'
 * 0000000140A09646: prefetchnta byte ptr [rax]
 * 0000000140A09649: add     rax, rcx
 * 0000000140A0964C: cmp     rax, r14
 * 0000000140A0964F: jb      short loc_140A09646
 * 0000000140A09651: mov     r14d, r9d
 * 0000000140A09654: mov     r8, r12
 * 0000000140A09657: shr     r14d, 7
 * 0000000140A0965B: test    r14d, r14d
 * 0000000140A0965E: jz      short loc_140A096D6
 * 0000000140A09660: mov     rbx, 7010008004002001h
 * 0000000140A0966A: mov     edx, 8
 * 0000000140A0966F: lea     edi, [rdx-7]
 * 0000000140A09672: mov     rax, [r10]
 * 0000000140A09675: mov     ecx, r11d
 * 0000000140A09678: xor     rax, r8
 * 0000000140A0967B: mov     r8, [r10+8]
 * 0000000140A0967F: rol     rax, cl
 * 0000000140A09682: add     r10, 10h
 * 0000000140A09686: xor     r8, rax
 * 0000000140A09689: rol     r8, cl
 * 0000000140A0968C: sub     rdx, rdi
 * 0000000140A0968F: jnz     short loc_140A09672
 * 0000000140A09691: mov     rcx, r10
 * 0000000140A09694: sub     rcx, rsi
 * 0000000140A09697: xor     rcx, r12
 * 0000000140A0969A: mov     rax, rcx
 * 0000000140A0969D: rol     rax, 11h
 * 0000000140A096A1: xor     rcx, rax
 * 0000000140A096A4: mov     rax, rbx
 * 0000000140A096A7: mul     rcx
 * 0000000140A096AA: mov     [rbp+0BE0h+var_500], rdx
 * 0000000140A096B1: xor     edx, eax
 * 0000000140A096B3: xor     r11d, edx
 * 0000000140A096B6: mov     rax, rdi
 * 0000000140A096B9: and     r11d, 3Fh
 * 0000000140A096BD: cmovz   r11d, eax
 * 0000000140A096C1: mov     eax, 0FFFFFFFFh
 * 0000000140A096C6: add     r14d, eax
 * 0000000140A096C9: jnz     short loc_140A0966A
 * 0000000140A096CB: mov     rbx, [rbp+0BE0h+var_C30]
 * 0000000140A096CF: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A096D6: and     r9d, 7Fh
 * 0000000140A096DA: mov     r14d, 1
 * 0000000140A096E0: cmp     r9d, 8
 * 0000000140A096E4: jb      short loc_140A09703
 * 0000000140A096E6: mov     edx, r9d
 * 0000000140A096E9: shr     rdx, 3
 * 0000000140A096ED: xor     r8, [r10]
 * 0000000140A096F0: mov     ecx, r11d
 * 0000000140A096F3: rol     r8, cl
 * 0000000140A096F6: add     r10, 8
 * 0000000140A096FA: add     r9d, 0FFFFFFF8h
 * 0000000140A096FE: sub     rdx, r14
 * 0000000140A09701: jnz     short loc_140A096ED
 * 0000000140A09703: xor     esi, esi
 * 0000000140A09705: test    r9d, r9d
 * 0000000140A09708: jz      short loc_140A09726
 * 0000000140A0970A: mov     esi, 0FFFFFFFFh
 * 0000000140A0970F: movzx   eax, byte ptr [r10]
 * 0000000140A09713: mov     ecx, r11d
 * 0000000140A09716: xor     r8, rax
 * 0000000140A09719: add     r10, r14
 * 0000000140A0971C: rol     r8, cl
 * 0000000140A0971F: add     r9d, esi
 * 0000000140A09722: jnz     short loc_140A0970F
 * 0000000140A09724: xor     esi, esi
 * 0000000140A09726: mov     rax, r8
 * 0000000140A09729: jmp     short loc_140A0972E
 * 0000000140A0972B: xor     r8d, eax
 * 0000000140A0972E: shr     rax, 1Fh
 * 0000000140A09732: test    rax, rax
 * 0000000140A09735: jnz     short loc_140A0972B
 * 0000000140A09737: mov     rax, [rbp+0BE0h+var_C60]
 * 0000000140A0973B: btr     r8d, 1Fh
 * 0000000140A09740: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A09744: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A09749: mov     edx, [rbp+0BE0h+var_C58]
 * 0000000140A0974C: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A09750: mov     [rax+8], r8d
 * 0000000140A09754: jmp     short loc_140A09768
 * 0000000140A09756: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A0975A: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A0975F: mov     edx, [rbp+0BE0h+var_C58]
 * 0000000140A09762: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A09766: xor     esi, esi
 * 0000000140A09768: cmp     r15d, edx
 * 0000000140A0976B: jb      loc_140A09A06
 * 0000000140A09771: cmp     r13d, ecx
 * 0000000140A09774: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0977B: ja      loc_140A09A0D
 * 0000000140A09781: mov     r8, [rbp+0BE0h+var_C10]
 * 0000000140A09785: cmp     r8, r9
 * 0000000140A09788: jz      loc_140A09A0D
 * 0000000140A0978E: mov     r12d, [r14+4]
 * 0000000140A09792: cmp     r12d, ecx
 * 0000000140A09795: ja      loc_140A09A0D
 * 0000000140A0979B: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A097A0: mov     edx, 1
 * 0000000140A097A5: lea     r10d, [rdx+0Bh]
 * 0000000140A097A9: cmp     r14, r9
 * 0000000140A097AC: jz      loc_140A09A0D
 * 0000000140A097B2: test    r13d, r13d
 * 0000000140A097B5: jz      short loc_140A097BF
 * 0000000140A097B7: mov     r8b, 80h
 * 0000000140A097BA: jmp     loc_140A099CF
 * 0000000140A097BF: mov     rax, [rsp+0CE0h+var_C80]
 * 0000000140A097C4: mov     r14d, [r8+4]
 * 0000000140A097C8: mov     r15d, [rax]
 * 0000000140A097CB: mov     [rbp+0BE0h+var_C28], r15d
 * 0000000140A097CF: cmp     r15d, r14d
 * 0000000140A097D2: jnb     short loc_140A09833
 * 0000000140A097D4: test    dword ptr [rbx+990h], 200000h
 * 0000000140A097DE: jz      loc_140A0CCDF
 * 0000000140A097E4: cmp     [rbx+8F8h], esi
 * 0000000140A097EA: jnz     short loc_140A09833
 * 0000000140A097EC: mov     rdx, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A097F1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A097FB: add     rax, rbx
 * 0000000140A097FE: mov     rcx, rbx
 * 0000000140A09801: mov     [rbx+900h], rax
 * 0000000140A09808: mov     eax, 1
 * 0000000140A0980D: mov     [rbx+908h], rsi
 * 0000000140A09814: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140A0981F: mov     [rbx+918h], rdx
 * 0000000140A09826: xor     edx, edx
 * 0000000140A09828: mov     [rbx+8F8h], eax
 * 0000000140A0982E: call    $$b8
 * 0000000140A09833: mov     rsi, r14
 * 0000000140A09836: lea     rcx, [rbp+0BE0h+var_9B0]
 * 0000000140A0983D: add     rsi, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A09842: lea     rdx, [rbp+0BE0h+var_7A0]
 * 0000000140A09849: mov     r9d, r15d
 * 0000000140A0984C: sub     r9d, r14d
 * 0000000140A0984F: mov     r14d, r9d
 * 0000000140A09852: add     r14, rsi
 * 0000000140A09855: xor     eax, eax
 * 0000000140A09857: mov     r8d, eax
 * 0000000140A0985A: mov     r10, [rdx]
 * 0000000140A0985D: mov     eax, [rcx]
 * 0000000140A0985F: add     rax, r10
 * 0000000140A09862: cmp     rsi, rax
 * 0000000140A09865: jnb     short loc_140A09870
 * 0000000140A09867: cmp     r14, r10
 * 0000000140A0986A: ja      loc_140A099AE
 * 0000000140A09870: mov     eax, 4
 * 0000000140A09875: inc     r8d
 * 0000000140A09878: add     rcx, rax
 * 0000000140A0987B: add     rdx, 8
 * 0000000140A0987F: cmp     r8d, 6
 * 0000000140A09883: jb      short loc_140A0985A
 * 0000000140A09885: cmp     r9d, eax
 * 0000000140A09888: jb      loc_140A099AE
 * 0000000140A0988E: add     [rbx+828h], r9d
 * 0000000140A09895: mov     r10, rsi
 * 0000000140A09898: mov     r11d, [rbx+814h]
 * 0000000140A0989F: mov     rax, rsi
 * 0000000140A098A2: mov     r15, [rbx+818h]
 * 0000000140A098A9: cmp     rsi, r14
 * 0000000140A098AC: jnb     short loc_140A098BE
 * 0000000140A098AE: mov     ecx, 40h ; '@'
 * 0000000140A098B3: prefetchnta byte ptr [rax]
 * 0000000140A098B6: add     rax, rcx
 * 0000000140A098B9: cmp     rax, r14
 * 0000000140A098BC: jb      short loc_140A098B3
 * 0000000140A098BE: mov     r14d, r9d
 * 0000000140A098C1: mov     r8, r15
 * 0000000140A098C4: shr     r14d, 7
 * 0000000140A098C8: test    r14d, r14d
 * 0000000140A098CB: jz      short loc_140A09947
 * 0000000140A098CD: mov     rdi, 7010008004002001h
 * 0000000140A098D7: mov     edx, 8
 * 0000000140A098DC: lea     r13d, [rdx-7]
 * 0000000140A098E0: mov     rax, [r10]
 * 0000000140A098E3: mov     ecx, r11d
 * 0000000140A098E6: xor     rax, r8
 * 0000000140A098E9: mov     r8, [r10+8]
 * 0000000140A098ED: rol     rax, cl
 * 0000000140A098F0: add     r10, 10h
 * 0000000140A098F4: xor     r8, rax
 * 0000000140A098F7: rol     r8, cl
 * 0000000140A098FA: sub     rdx, r13
 * 0000000140A098FD: jnz     short loc_140A098E0
 * 0000000140A098FF: mov     rcx, r10
 * 0000000140A09902: sub     rcx, rsi
 * 0000000140A09905: xor     rcx, r15
 * 0000000140A09908: mov     rax, rcx
 * 0000000140A0990B: rol     rax, 11h
 * 0000000140A0990F: xor     rcx, rax
 * 0000000140A09912: mov     rax, rdi
 * 0000000140A09915: mul     rcx
 * 0000000140A09918: mov     [rbp+0BE0h+var_4F8], rdx
 * 0000000140A0991F: xor     edx, eax
 * 0000000140A09921: xor     r11d, edx
 * 0000000140A09924: mov     rax, r13
 * 0000000140A09927: and     r11d, 3Fh
 * 0000000140A0992B: cmovz   r11d, eax
 * 0000000140A0992F: mov     eax, 0FFFFFFFFh
 * 0000000140A09934: add     r14d, eax
 * 0000000140A09937: jnz     short loc_140A098D7
 * 0000000140A09939: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A09940: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A09947: and     r9d, 7Fh
 * 0000000140A0994B: mov     r14d, 1
 * 0000000140A09951: cmp     r9d, 8
 * 0000000140A09955: jb      short loc_140A09974
 * 0000000140A09957: mov     edx, r9d
 * 0000000140A0995A: shr     rdx, 3
 * 0000000140A0995E: xor     r8, [r10]
 * 0000000140A09961: mov     ecx, r11d
 * 0000000140A09964: rol     r8, cl
 * 0000000140A09967: add     r10, 8
 * 0000000140A0996B: add     r9d, 0FFFFFFF8h
 * 0000000140A0996F: sub     rdx, r14
 * 0000000140A09972: jnz     short loc_140A0995E
 * 0000000140A09974: xor     esi, esi
 * 0000000140A09976: test    r9d, r9d
 * 0000000140A09979: jz      short loc_140A09997
 * 0000000140A0997B: mov     esi, 0FFFFFFFFh
 * 0000000140A09980: movzx   eax, byte ptr [r10]
 * 0000000140A09984: mov     ecx, r11d
 * 0000000140A09987: xor     r8, rax
 * 0000000140A0998A: add     r10, r14
 * 0000000140A0998D: rol     r8, cl
 * 0000000140A09990: add     r9d, esi
 * 0000000140A09993: jnz     short loc_140A09980
 * 0000000140A09995: xor     esi, esi
 * 0000000140A09997: mov     rax, r8
 * 0000000140A0999A: jmp     short loc_140A0999F
 * 0000000140A0999C: xor     r8b, al
 * 0000000140A0999F: shr     rax, 7
 * 0000000140A099A3: test    rax, rax
 * 0000000140A099A6: jnz     short loc_140A0999C
 * 0000000140A099A8: and     r8b, 7Fh
 * 0000000140A099AC: jmp     short loc_140A099B3
 * 0000000140A099AE: xor     esi, esi
 * 0000000140A099B0: mov     r8b, 80h
 * 0000000140A099B3: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A099B7: mov     r10d, 0Ch
 * 0000000140A099BD: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A099C2: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A099C6: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A099CB: lea     edx, [r10-0Bh]
 * 0000000140A099CF: mov     [rax], r8b
 * 0000000140A099D2: add     r14, r10
 * 0000000140A099D5: mov     r8, [rbp+0BE0h+var_C10]
 * 0000000140A099D9: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A099DE: add     r8, r10
 * 0000000140A099E1: add     rax, rdx
 * 0000000140A099E4: mov     [rbp+0BE0h+var_C10], r8
 * 0000000140A099E8: mov     [rsp+0CE0h+var_C88], rax
 * 0000000140A099ED: mov     [rsp+0CE0h+var_C80], r14
 * 0000000140A099F2: cmp     r14, r9
 * 0000000140A099F5: jz      short loc_140A099FB
 * 0000000140A099F7: mov     r12d, [r14+4]
 * 0000000140A099FB: cmp     r12d, ecx
 * 0000000140A099FE: jbe     loc_140A097A9
 * 0000000140A09A04: jmp     short loc_140A09A0D
 * 0000000140A09A06: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A09A0D: mov     r12, [rbp+0BE0h+var_C60]
 * 0000000140A09A11: xor     r15d, r15d
 * 0000000140A09A14: test    r13d, r13d
 * 0000000140A09A17: jnz     loc_140A09B97
 * 0000000140A09A1D: mov     eax, [rbp+0BE0h+var_C28]
 * 0000000140A09A20: cmp     eax, ecx
 * 0000000140A09A22: jz      loc_140A09B97
 * 0000000140A09A28: mov     rsi, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A09A2D: lea     rdx, [rbp+0BE0h+var_7A0]
 * 0000000140A09A34: mov     [r12+0Ch], eax
 * 0000000140A09A39: lea     r13d, [r15+1]
 * 0000000140A09A3D: mov     [r12+10h], ecx
 * 0000000140A09A42: mov     r9d, ecx
 * 0000000140A09A45: mov     eax, [r12+0Ch]
 * 0000000140A09A4A: lea     rcx, [rbp+0BE0h+var_9B0]
 * 0000000140A09A51: sub     r9d, eax
 * 0000000140A09A54: add     rsi, rax
 * 0000000140A09A57: mov     r14d, r9d
 * 0000000140A09A5A: mov     r8d, r15d
 * 0000000140A09A5D: add     r14, rsi
 * 0000000140A09A60: mov     r10, [rdx]
 * 0000000140A09A63: mov     eax, [rcx]
 * 0000000140A09A65: add     rax, r10
 * 0000000140A09A68: cmp     rsi, rax
 * 0000000140A09A6B: jnb     short loc_140A09A76
 * 0000000140A09A6D: cmp     r14, r10
 * 0000000140A09A70: ja      loc_140A09B97
 * 0000000140A09A76: add     r8d, r13d
 * 0000000140A09A79: add     rdx, 8
 * 0000000140A09A7D: add     rcx, 4
 * 0000000140A09A81: cmp     r8d, 6
 * 0000000140A09A85: jb      short loc_140A09A60
 * 0000000140A09A87: add     [rbx+828h], r9d
 * 0000000140A09A8E: mov     r10, rsi
 * 0000000140A09A91: mov     r11d, [rbx+814h]
 * 0000000140A09A98: mov     rax, rsi
 * 0000000140A09A9B: mov     r15, [rbx+818h]
 * 0000000140A09AA2: cmp     rsi, r14
 * 0000000140A09AA5: jnb     short loc_140A09AB7
 * 0000000140A09AA7: mov     ecx, 40h ; '@'
 * 0000000140A09AAC: prefetchnta byte ptr [rax]
 * 0000000140A09AAF: add     rax, rcx
 * 0000000140A09AB2: cmp     rax, r14
 * 0000000140A09AB5: jb      short loc_140A09AAC
 * 0000000140A09AB7: mov     r14d, r9d
 * 0000000140A09ABA: mov     r8, r15
 * 0000000140A09ABD: shr     r14d, 7
 * 0000000140A09AC1: test    r14d, r14d
 * 0000000140A09AC4: jz      short loc_140A09B2F
 * 0000000140A09AC6: mov     r12, 7010008004002001h
 * 0000000140A09AD0: mov     edx, 8
 * 0000000140A09AD5: mov     rax, [r10]
 * 0000000140A09AD8: mov     ecx, r11d
 * 0000000140A09ADB: xor     rax, r8
 * 0000000140A09ADE: mov     r8, [r10+8]
 * 0000000140A09AE2: rol     rax, cl
 * 0000000140A09AE5: add     r10, 10h
 * 0000000140A09AE9: xor     r8, rax
 * 0000000140A09AEC: rol     r8, cl
 * 0000000140A09AEF: sub     rdx, r13
 * 0000000140A09AF2: jnz     short loc_140A09AD5
 * 0000000140A09AF4: mov     rcx, r10
 * 0000000140A09AF7: sub     rcx, rsi
 * 0000000140A09AFA: xor     rcx, r15
 * 0000000140A09AFD: mov     rax, rcx
 * 0000000140A09B00: rol     rax, 11h
 * 0000000140A09B04: xor     rcx, rax
 * 0000000140A09B07: mov     rax, r12
 * 0000000140A09B0A: mul     rcx
 * 0000000140A09B0D: mov     [rbp+0BE0h+var_4F0], rdx
 * 0000000140A09B14: xor     edx, eax
 * 0000000140A09B16: xor     r11d, edx
 * 0000000140A09B19: mov     eax, 0FFFFFFFFh
 * 0000000140A09B1E: and     r11d, 3Fh
 * 0000000140A09B22: cmovz   r11d, r13d
 * 0000000140A09B26: add     r14d, eax
 * 0000000140A09B29: jnz     short loc_140A09AD0
 * 0000000140A09B2B: mov     r12, [rbp+0BE0h+var_C60]
 * 0000000140A09B2F: and     r9d, 7Fh
 * 0000000140A09B33: cmp     r9d, 8
 * 0000000140A09B37: jb      short loc_140A09B56
 * 0000000140A09B39: mov     edx, r9d
 * 0000000140A09B3C: shr     rdx, 3
 * 0000000140A09B40: xor     r8, [r10]
 * 0000000140A09B43: mov     ecx, r11d
 * 0000000140A09B46: rol     r8, cl
 * 0000000140A09B49: add     r10, 8
 * 0000000140A09B4D: add     r9d, 0FFFFFFF8h
 * 0000000140A09B51: sub     rdx, r13
 * 0000000140A09B54: jnz     short loc_140A09B40
 * 0000000140A09B56: xor     r15d, r15d
 * 0000000140A09B59: test    r9d, r9d
 * 0000000140A09B5C: jz      short loc_140A09B7C
 * 0000000140A09B5E: mov     r15d, 0FFFFFFFFh
 * 0000000140A09B64: movzx   eax, byte ptr [r10]
 * 0000000140A09B68: mov     ecx, r11d
 * 0000000140A09B6B: xor     r8, rax
 * 0000000140A09B6E: add     r10, r13
 * 0000000140A09B71: rol     r8, cl
 * 0000000140A09B74: add     r9d, r15d
 * 0000000140A09B77: jnz     short loc_140A09B64
 * 0000000140A09B79: xor     r15d, r15d
 * 0000000140A09B7C: mov     rax, r8
 * 0000000140A09B7F: jmp     short loc_140A09B84
 * 0000000140A09B81: xor     r8d, eax
 * 0000000140A09B84: shr     rax, 1Fh
 * 0000000140A09B88: test    rax, rax
 * 0000000140A09B8B: jnz     short loc_140A09B81
 * 0000000140A09B8D: btr     r8d, 1Fh
 * 0000000140A09B92: mov     [r12+14h], r8d
 * 0000000140A09B97: mov     rdx, [rbp+0BE0h+var_C48]
 * 0000000140A09B9B: mov     r13, [rbp+0BE0h+var_C10]
 * 0000000140A09B9F: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A09BA4: cmp     r13, rdx
 * 0000000140A09BA7: jz      short loc_140A09BEC
 * 0000000140A09BA9: mov     eax, [r13+0]
 * 0000000140A09BAD: mov     ecx, [r13+4]
 * 0000000140A09BB1: cmp     eax, [rbp+0BE0h+var_C58]
 * 0000000140A09BB4: jb      short loc_140A09BEC
 * 0000000140A09BB6: cmp     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A09BBA: ja      short loc_140A09BEC
 * 0000000140A09BBC: cmp     r14, rdx
 * 0000000140A09BBF: jz      short loc_140A09BE0
 * 0000000140A09BC1: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A09BC6: mov     byte ptr [rax], 80h
 * 0000000140A09BC9: inc     rax
 * 0000000140A09BCC: mov     [rsp+0CE0h+var_C88], rax
 * 0000000140A09BD1: mov     eax, 0Ch
 * 0000000140A09BD6: add     r14, rax
 * 0000000140A09BD9: mov     [rsp+0CE0h+var_C80], r14
 * 0000000140A09BDE: jmp     short loc_140A09BE5
 * 0000000140A09BE0: mov     eax, 0Ch
 * 0000000140A09BE5: add     r13, rax
 * 0000000140A09BE8: mov     [rbp+0BE0h+var_C10], r13
 * 0000000140A09BEC: mov     rsi, [rbp+0BE0h+var_C50]
 * 0000000140A09BF0: add     r12, 18h
 * 0000000140A09BF4: add     rsi, 28h ; '('
 * 0000000140A09BF8: mov     [rbp+0BE0h+var_C60], r12
 * 0000000140A09BFC: mov     [rbp+0BE0h+var_C50], rsi
 * 0000000140A09C00: cmp     r12, [rsp+0CE0h+var_C70]
 * 0000000140A09C05: jz      short loc_140A09C17
 * 0000000140A09C07: mov     r8, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A09C0C: mov     r9d, 1
 * 0000000140A09C12: jmp     loc_140A09365
 * 0000000140A09C17: mov     rsi, [rbp+0BE0h+var_BB0]
 * 0000000140A09C1B: mov     [rbp+0BE0h+var_BA8], rsi
 * 0000000140A09C1F: mov     ecx, r15d
 * 0000000140A09C22: mov     [rbp+0BE0h+var_C18], ecx
 * 0000000140A09C25: mov     r13d, 80000000h
 * 0000000140A09C2B: mov     rbx, rsi
 * 0000000140A09C2E: lea     eax, [rcx+r13]
 * 0000000140A09C32: test    r13d, eax
 * 0000000140A09C35: jnz     short loc_140A09C4D
 * 0000000140A09C37: cmp     ecx, 0C000010Eh
 * 0000000140A09C3D: jz      short loc_140A09C4D
 * 0000000140A09C3F: mov     ecx, [rbp+0BE0h+var_C18]
 * 0000000140A09C42: jmp     loc_140A09CDB
 * 0000000140A09C47: mov     r13d, 80000000h
 * 0000000140A09C4D: mov     r12, [rbp+0BE0h+var_C08]
 * 0000000140A09C51: mov     rax, [rsi+1F8h]
 * 0000000140A09C58: mov     rcx, r12
 * 0000000140A09C5B: call    KeGuardDispatchICall
 * 0000000140A09C60: mov     ecx, [rax+94h]
 * 0000000140A09C66: cmp     ecx, 14h
 * 0000000140A09C69: jb      loc_140A07FDA
 * 0000000140A09C6F: mov     eax, [rax+90h]
 * 0000000140A09C75: lea     r15, [r12+rcx]
 * 0000000140A09C79: add     r15, rax
 * 0000000140A09C7C: lea     r14, [r12+rax]
 * 0000000140A09C80: cmp     r14, r15
 * 0000000140A09C83: jz      short loc_140A09CD5
 * 0000000140A09C85: xor     ecx, ecx
 * 0000000140A09C87: cmp     [r14+0Ch], ecx
 * 0000000140A09C8B: jz      short loc_140A09CD5
 * 0000000140A09C8D: mov     eax, [r14+10h]
 * 0000000140A09C91: test    eax, eax
 * 0000000140A09C93: jz      short loc_140A09CD5
 * 0000000140A09C95: mov     rdx, [rax+r12]
 * 0000000140A09C99: test    rdx, rdx
 * 0000000140A09C9C: jz      short loc_140A09CCC
 * 0000000140A09C9E: mov     r8d, 8000000Fh
 * 0000000140A09CA4: lea     rcx, [rbp+0BE0h+var_BA8]
 * 0000000140A09CA8: call    sub_140A0D0FC
 * 0000000140A09CAD: mov     rsi, [rbp+0BE0h+var_BA8]
 * 0000000140A09CB1: mov     ecx, eax
 * 0000000140A09CB3: add     eax, r13d
 * 0000000140A09CB6: mov     rbx, rsi
 * 0000000140A09CB9: test    r13d, eax
 * 0000000140A09CBC: jnz     short loc_140A09CCA
 * 0000000140A09CBE: cmp     ecx, 0C000010Eh
 * 0000000140A09CC4: jnz     loc_140A09E54
 * 0000000140A09CCA: xor     ecx, ecx
 * 0000000140A09CCC: add     r14, 14h
 * 0000000140A09CD0: cmp     r14, r15
 * 0000000140A09CD3: jnz     short loc_140A09C87
 * 0000000140A09CD5: xor     r15d, r15d
 * 0000000140A09CD8: mov     ecx, r15d
 * 0000000140A09CDB: lea     eax, [rcx+r13]
 * 0000000140A09CDF: test    r13d, eax
 * 0000000140A09CE2: jnz     short loc_140A09CF0
 * 0000000140A09CE4: cmp     ecx, 0C000010Eh
 * 0000000140A09CEA: jnz     loc_140A07D8D
 * 0000000140A09CF0: mov     rax, [rbx+570h]
 * 0000000140A09CF7: lea     rdx, [rbp+0BE0h+var_140]
 * 0000000140A09CFE: mov     rcx, [rax+20h]
 * 0000000140A09D02: mov     rax, [rbx+200h]
 * 0000000140A09D09: call    KeGuardDispatchICall
 * 0000000140A09D0E: mov     rcx, [rbp+0BE0h+var_138]
 * 0000000140A09D15: test    rcx, rcx
 * 0000000140A09D18: jz      loc_140A0A25E
 * 0000000140A09D1E: mov     [rbx+978h], rcx
 * 0000000140A09D25: mov     rax, [rbx+1F8h]
 * 0000000140A09D2C: call    KeGuardDispatchICall
 * 0000000140A09D31: test    rax, rax
 * 0000000140A09D34: jz      loc_140A0A25E
 * 0000000140A09D3A: mov     eax, [rax+50h]
 * 0000000140A09D3D: mov     [rbx+974h], eax
 * 0000000140A09D43: mov     dword ptr [rbx+958h], 8
 * 0000000140A09D4D: mov     r15, [rbx+600h]
 * 0000000140A09D54: xor     r10d, r10d
 * 0000000140A09D57: test    r15, r15
 * 0000000140A09D5A: jz      loc_140A09F74
 * 0000000140A09D60: cmp     [r15], r10
 * 0000000140A09D63: jz      loc_140A09F74
 * 0000000140A09D69: mov     r9d, [rbx+838h]
 * 0000000140A09D70: lea     r12d, [r10+20h]
 * 0000000140A09D74: mov     r13d, [rbx+7E4h]
 * 0000000140A09D7B: cmp     r9d, 7
 * 0000000140A09D7F: mov     r8d, [rbx+924h]
 * 0000000140A09D86: cmovnz  r12d, r10d
 * 0000000140A09D8A: mov     dword ptr [rbp+0BE0h+arg_8], r9d
 * 0000000140A09D91: lea     eax, [r13+30h]
 * 0000000140A09D95: cmp     eax, [rbx+0A1Ch]
 * 0000000140A09D9B: jbe     loc_140A09E9A
 * 0000000140A09DA1: mov     edx, eax
 * 0000000140A09DA3: mov     rcx, rbx
 * 0000000140A09DA6: call    sub_140A0FB30
 * 0000000140A09DAB: xor     r10d, r10d
 * 0000000140A09DAE: mov     r14, rax
 * 0000000140A09DB1: test    rax, rax
 * 0000000140A09DB4: jz      loc_140A09E8F
 * 0000000140A09DBA: mov     ecx, [rbx+990h]
 * 0000000140A09DC0: test    cl, 4
 * 0000000140A09DC3: jnz     loc_140A09E7E
 * 0000000140A09DC9: mov     eax, [rbx+7E4h]
 * 0000000140A09DCF: lea     r9d, [r10+1]
 * 0000000140A09DD3: mov     r8, [rbx+7C8h]
 * 0000000140A09DDA: and     ecx, 20000000h
 * 0000000140A09DE0: neg     ecx
 * 0000000140A09DE2: sbb     edx, edx
 * 0000000140A09DE4: and     edx, [rbx+924h]
 * 0000000140A09DEA: cmp     eax, 8
 * 0000000140A09DED: jb      short loc_140A09E04
 * 0000000140A09DEF: mov     ecx, eax
 * 0000000140A09DF1: shr     rcx, 3
 * 0000000140A09DF5: mov     [rbx], r10
 * 0000000140A09DF8: add     eax, 0FFFFFFF8h
 * 0000000140A09DFB: add     rbx, 8
 * 0000000140A09DFF: sub     rcx, r9
 * 0000000140A09E02: jnz     short loc_140A09DF5
 * 0000000140A09E04: test    eax, eax
 * 0000000140A09E06: jz      short loc_140A09E17
 * 0000000140A09E08: mov     ecx, 0FFFFFFFFh
 * 0000000140A09E0D: mov     [rbx], r10b
 * 0000000140A09E10: add     rbx, r9
 * 0000000140A09E13: add     eax, ecx
 * 0000000140A09E15: jnz     short loc_140A09E0D
 * 0000000140A09E17: mov     ebx, [r14+924h]
 * 0000000140A09E1E: mov     [r14+924h], edx
 * 0000000140A09E25: cmp     edx, 3
 * 0000000140A09E28: jz      short loc_140A09E65
 * 0000000140A09E2A: test    dword ptr [r14+990h], 10000000h
 * 0000000140A09E35: mov     ecx, r10d
 * 0000000140A09E38: cmovz   ecx, edx
 * 0000000140A09E3B: test    ecx, ecx
 * 0000000140A09E3D: jz      short loc_140A09E5C
 * 0000000140A09E3F: mov     rax, [r14+228h]
 * 0000000140A09E46: lea     rcx, [r8-8]
 * 0000000140A09E4A: mov     rdx, [rcx]
 * 0000000140A09E4D: call    KeGuardDispatchICall
 * 0000000140A09E52: jmp     short loc_140A09E74
 * 0000000140A09E54: xor     r15d, r15d
 * 0000000140A09E57: jmp     loc_140A09CDB
 * 0000000140A09E5C: mov     rax, [r14+100h]
 * 0000000140A09E63: jmp     short loc_140A09E6C
 * 0000000140A09E65: mov     rax, [r14+368h]
 * 0000000140A09E6C: mov     rcx, r8
 * 0000000140A09E6F: call    KeGuardDispatchICall
 * 0000000140A09E74: mov     [r14+924h], ebx
 * 0000000140A09E7B: xor     r10d, r10d
 * 0000000140A09E7E: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140A09E86: mov     r9d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A09E8D: jmp     short loc_140A09EA3
 * 0000000140A09E8F: mov     rbx, rsi
 * 0000000140A09E92: xor     r15d, r15d
 * 0000000140A09E95: jmp     loc_140A07D8D
 * 0000000140A09E9A: mov     r14, rbx
 * 0000000140A09E9D: mov     [rbx+7E4h], eax
 * 0000000140A09EA3: mov     r8d, 1
 * 0000000140A09EA9: lea     rbx, [r14+r13]
 * 0000000140A09EAD: add     [r14+80Ch], r8d
 * 0000000140A09EB4: mov     rax, rbx
 * 0000000140A09EB7: mov     [rbp+0BE0h+var_4E8], rbx
 * 0000000140A09EBE: lea     ecx, [r8+2Fh]
 * 0000000140A09EC2: lea     edx, [rcx-2Ah]
 * 0000000140A09EC5: mov     [rax], r10
 * 0000000140A09EC8: add     ecx, 0FFFFFFF8h
 * 0000000140A09ECB: add     rax, 8
 * 0000000140A09ECF: sub     rdx, r8
 * 0000000140A09ED2: jnz     short loc_140A09EC5
 * 0000000140A09ED4: test    ecx, ecx
 * 0000000140A09ED6: jz      short loc_140A09EE7
 * 0000000140A09ED8: mov     edx, 0FFFFFFFFh
 * 0000000140A09EDD: mov     [rax], r10b
 * 0000000140A09EE0: add     rax, r8
 * 0000000140A09EE3: add     ecx, edx
 * 0000000140A09EE5: jnz     short loc_140A09EDD
 * 0000000140A09EE7: mov     [rbx], r12d
 * 0000000140A09EEA: mov     [rbx+8], r15
 * 0000000140A09EEE: cmp     r9d, 7
 * 0000000140A09EF2: jnz     short loc_140A09F0C
 * 0000000140A09EF4: lea     r9, [rbx+18h]
 * 0000000140A09EF8: mov     r8d, 8
 * 0000000140A09EFE: mov     rdx, r15
 * 0000000140A09F01: mov     rcx, r14
 * 0000000140A09F04: call    sub_1403EA5FC
 * 0000000140A09F09: xor     r10d, r10d
 * 0000000140A09F0C: mov     dword ptr [rbx+10h], 8
 * 0000000140A09F13: lea     rdx, [r15+8]
 * 0000000140A09F17: add     dword ptr [r14+828h], 8
 * 0000000140A09F1F: mov     rax, r15
 * 0000000140A09F22: mov     ecx, [r14+814h]
 * 0000000140A09F29: mov     r8, [r14+818h]
 * 0000000140A09F30: cmp     r15, rdx
 * 0000000140A09F33: jnb     short loc_140A09F46
 * 0000000140A09F35: mov     r9d, 40h ; '@'
 * 0000000140A09F3B: prefetchnta byte ptr [rax]
 * 0000000140A09F3E: add     rax, r9
 * 0000000140A09F41: cmp     rax, rdx
 * 0000000140A09F44: jb      short loc_140A09F3B
 * 0000000140A09F46: mov     rax, [r15]
 * 0000000140A09F49: xor     rax, r8
 * 0000000140A09F4C: rol     rax, cl
 * 0000000140A09F4F: mov     rcx, rax
 * 0000000140A09F52: jmp     short loc_140A09F56
 * 0000000140A09F54: xor     eax, ecx
 * 0000000140A09F56: shr     rcx, 1Fh
 * 0000000140A09F5A: test    rcx, rcx
 * 0000000140A09F5D: jnz     short loc_140A09F54
 * 0000000140A09F5F: btr     eax, 1Fh
 * 0000000140A09F63: mov     rsi, r14
 * 0000000140A09F66: mov     [rbx+14h], eax
 * 0000000140A09F69: mov     rbx, r14
 * 0000000140A09F6C: add     dword ptr [r14+828h], 8
 * 0000000140A09F74: mov     dword ptr [rbx+958h], 9
 * 0000000140A09F7E: jmp     loc_140A068F7
 * 0000000140A09F83: mov     r9d, [rbx+838h]
 * 0000000140A09F8A: mov     r13d, 20h ; ' '
 * 0000000140A09F90: mov     eax, [rbx+7E4h]
 * 0000000140A09F96: cmp     r9d, 7
 * 0000000140A09F9A: mov     r8d, [rbx+924h]
 * 0000000140A09FA1: cmovnz  r13d, r11d
 * 0000000140A09FA5: mov     [rbp+0BE0h+var_C38], eax
 * 0000000140A09FA8: add     eax, 30h ; '0'
 * 0000000140A09FAB: mov     [rbp+0BE0h+var_BE8], r9d
 * 0000000140A09FAF: cmp     eax, [rbx+0A1Ch]
 * 0000000140A09FB5: jbe     loc_140A0A09E
 * 0000000140A09FBB: mov     edx, eax
 * 0000000140A09FBD: mov     rcx, rbx
 * 0000000140A09FC0: call    sub_140A0FB30
 * 0000000140A09FC5: xor     r11d, r11d
 * 0000000140A09FC8: mov     r14, rax
 * 0000000140A09FCB: test    rax, rax
 * 0000000140A09FCE: jz      loc_140A09E8F
 * 0000000140A09FD4: mov     ecx, [rbx+990h]
 * 0000000140A09FDA: test    cl, 4
 * 0000000140A09FDD: jnz     loc_140A0A090
 * 0000000140A09FE3: mov     eax, [rbx+7E4h]
 * 0000000140A09FE9: lea     r9d, [r11+1]
 * 0000000140A09FED: mov     r8, [rbx+7C8h]
 * 0000000140A09FF4: and     ecx, 20000000h
 * 0000000140A09FFA: neg     ecx
 * 0000000140A09FFC: sbb     edx, edx
 * 0000000140A09FFE: and     edx, [rbx+924h]
 * 0000000140A0A004: cmp     eax, 8
 * 0000000140A0A007: jb      short loc_140A0A01E
 * 0000000140A0A009: mov     ecx, eax
 * 0000000140A0A00B: shr     rcx, 3
 * 0000000140A0A00F: mov     [rbx], r11
 * 0000000140A0A012: add     eax, 0FFFFFFF8h
 * 0000000140A0A015: add     rbx, 8
 * 0000000140A0A019: sub     rcx, r9
 * 0000000140A0A01C: jnz     short loc_140A0A00F
 * 0000000140A0A01E: test    eax, eax
 * 0000000140A0A020: jz      short loc_140A0A031
 * 0000000140A0A022: mov     ecx, 0FFFFFFFFh
 * 0000000140A0A027: mov     [rbx], r11b
 * 0000000140A0A02A: add     rbx, r9
 * 0000000140A0A02D: add     eax, ecx
 * 0000000140A0A02F: jnz     short loc_140A0A027
 * 0000000140A0A031: mov     ebx, [r14+924h]
 * 0000000140A0A038: mov     [r14+924h], edx
 * 0000000140A0A03F: cmp     edx, 3
 * 0000000140A0A042: jz      short loc_140A0A077
 * 0000000140A0A044: test    dword ptr [r14+990h], 10000000h
 * 0000000140A0A04F: mov     ecx, r11d
 * 0000000140A0A052: cmovz   ecx, edx
 * 0000000140A0A055: test    ecx, ecx
 * 0000000140A0A057: jz      short loc_140A0A06E
 * 0000000140A0A059: mov     rax, [r14+228h]
 * 0000000140A0A060: lea     rcx, [r8-8]
 * 0000000140A0A064: mov     rdx, [rcx]
 * 0000000140A0A067: call    KeGuardDispatchICall
 * 0000000140A0A06C: jmp     short loc_140A0A086
 * 0000000140A0A06E: mov     rax, [r14+100h]
 * 0000000140A0A075: jmp     short loc_140A0A07E
 * 0000000140A0A077: mov     rax, [r14+368h]
 * 0000000140A0A07E: mov     rcx, r8
 * 0000000140A0A081: call    KeGuardDispatchICall
 * 0000000140A0A086: mov     [r14+924h], ebx
 * 0000000140A0A08D: xor     r11d, r11d
 * 0000000140A0A090: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140A0A098: mov     r9d, [rbp+0BE0h+var_BE8]
 * 0000000140A0A09C: jmp     short loc_140A0A0A7
 * 0000000140A0A09E: mov     r14, rbx
 * 0000000140A0A0A1: mov     [rbx+7E4h], eax
 * 0000000140A0A0A7: mov     ebx, [rbp+0BE0h+var_C38]
 * 0000000140A0A0AA: mov     r8d, 1
 * 0000000140A0A0B0: add     [r14+80Ch], r8d
 * 0000000140A0A0B7: add     rbx, r14
 * 0000000140A0A0BA: mov     [rsp+0CE0h+var_C70], rbx
 * 0000000140A0A0BF: mov     rax, rbx
 * 0000000140A0A0C2: lea     ecx, [r8+2Fh]
 * 0000000140A0A0C6: mov     [rbp+0BE0h+var_4D8], rbx
 * 0000000140A0A0CD: lea     edx, [rcx-2Ah]
 * 0000000140A0A0D0: mov     [rax], r11
 * 0000000140A0A0D3: add     ecx, 0FFFFFFF8h
 * 0000000140A0A0D6: add     rax, 8
 * 0000000140A0A0DA: sub     rdx, r8
 * 0000000140A0A0DD: jnz     short loc_140A0A0D0
 * 0000000140A0A0DF: test    ecx, ecx
 * 0000000140A0A0E1: jz      short loc_140A0A0F2
 * 0000000140A0A0E3: mov     edx, 0FFFFFFFFh
 * 0000000140A0A0E8: mov     [rax], r11b
 * 0000000140A0A0EB: add     rax, r8
 * 0000000140A0A0EE: add     ecx, edx
 * 0000000140A0A0F0: jnz     short loc_140A0A0E8
 * 0000000140A0A0F2: mov     [rbx], r13d
 * 0000000140A0A0F5: mov     [rbx+8], r15
 * 0000000140A0A0F9: cmp     r9d, 7
 * 0000000140A0A0FD: jnz     short loc_140A0A116
 * 0000000140A0A0FF: test    r12d, r12d
 * 0000000140A0A102: jz      short loc_140A0A116
 * 0000000140A0A104: lea     r9, [rbx+18h]
 * 0000000140A0A108: mov     r8d, r12d
 * 0000000140A0A10B: mov     rdx, r15
 * 0000000140A0A10E: mov     rcx, r14
 * 0000000140A0A111: call    sub_1403EA5FC
 * 0000000140A0A116: mov     [rbx+10h], r12d
 * 0000000140A0A11A: mov     r9, r15
 * 0000000140A0A11D: add     [r14+828h], r12d
 * 0000000140A0A124: mov     rax, r15
 * 0000000140A0A127: mov     r10d, [r14+814h]
 * 0000000140A0A12E: mov     rsi, [r14+818h]
 * 0000000140A0A135: mov     ecx, r12d
 * 0000000140A0A138: add     rcx, r15
 * 0000000140A0A13B: cmp     r15, rcx
 * 0000000140A0A13E: jnb     short loc_140A0A150
 * 0000000140A0A140: mov     edx, 40h ; '@'
 * 0000000140A0A145: prefetchnta byte ptr [rax]
 * 0000000140A0A148: add     rax, rdx
 * 0000000140A0A14B: cmp     rax, rcx
 * 0000000140A0A14E: jb      short loc_140A0A145
 * 0000000140A0A150: mov     r11d, r12d
 * 0000000140A0A153: mov     r8, rsi
 * 0000000140A0A156: shr     r11d, 7
 * 0000000140A0A15A: mov     r13d, 1
 * 0000000140A0A160: test    r11d, r11d
 * 0000000140A0A163: jz      short loc_140A0A1D8
 * 0000000140A0A165: mov     ebx, 0FFFFFFFFh
 * 0000000140A0A16A: mov     r12, 7010008004002001h
 * 0000000140A0A174: mov     eax, 8
 * 0000000140A0A179: xor     r8, [r9]
 * 0000000140A0A17C: mov     ecx, r10d
 * 0000000140A0A17F: rol     r8, cl
 * 0000000140A0A182: xor     r8, [r9+8]
 * 0000000140A0A186: add     r9, 10h
 * 0000000140A0A18A: rol     r8, cl
 * 0000000140A0A18D: sub     rax, r13
 * 0000000140A0A190: jnz     short loc_140A0A179
 * 0000000140A0A192: mov     rcx, r9
 * 0000000140A0A195: sub     rcx, r15
 * 0000000140A0A198: xor     rcx, rsi
 * 0000000140A0A19B: mov     rax, rcx
 * 0000000140A0A19E: rol     rax, 11h
 * 0000000140A0A1A2: xor     rcx, rax
 * 0000000140A0A1A5: mov     rax, r12
 * 0000000140A0A1A8: mul     rcx
 * 0000000140A0A1AB: xor     r10d, edx
 * 0000000140A0A1AE: mov     [rbp+0BE0h+var_4D0], rdx
 * 0000000140A0A1B5: xor     r10d, eax
 * 0000000140A0A1B8: and     r10d, 3Fh
 * 0000000140A0A1BC: cmovz   r10d, r13d
 * 0000000140A0A1C0: add     r11d, ebx
 * 0000000140A0A1C3: jnz     short loc_140A0A174
 * 0000000140A0A1C5: mov     rbx, [rsp+0CE0h+var_C70]
 * 0000000140A0A1CA: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0A1D1: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0A1D8: mov     edx, r12d
 * 0000000140A0A1DB: and     edx, 7Fh
 * 0000000140A0A1DE: cmp     edx, 8
 * 0000000140A0A1E1: jb      short loc_140A0A1FE
 * 0000000140A0A1E3: mov     eax, edx
 * 0000000140A0A1E5: shr     rax, 3
 * 0000000140A0A1E9: xor     r8, [r9]
 * 0000000140A0A1EC: mov     ecx, r10d
 * 0000000140A0A1EF: rol     r8, cl
 * 0000000140A0A1F2: add     r9, 8
 * 0000000140A0A1F6: add     edx, 0FFFFFFF8h
 * 0000000140A0A1F9: sub     rax, r13
 * 0000000140A0A1FC: jnz     short loc_140A0A1E9
 * 0000000140A0A1FE: xor     r15d, r15d
 * 0000000140A0A201: test    edx, edx
 * 0000000140A0A203: jz      short loc_140A0A223
 * 0000000140A0A205: mov     r15d, 0FFFFFFFFh
 * 0000000140A0A20B: movzx   eax, byte ptr [r9]
 * 0000000140A0A20F: mov     ecx, r10d
 * 0000000140A0A212: xor     r8, rax
 * 0000000140A0A215: add     r9, r13
 * 0000000140A0A218: rol     r8, cl
 * 0000000140A0A21B: add     edx, r15d
 * 0000000140A0A21E: jnz     short loc_140A0A20B
 * 0000000140A0A220: xor     r15d, r15d
 * 0000000140A0A223: mov     rax, r8
 * 0000000140A0A226: jmp     short loc_140A0A22B
 * 0000000140A0A228: xor     r8d, eax
 * 0000000140A0A22B: shr     rax, 1Fh
 * 0000000140A0A22F: test    rax, rax
 * 0000000140A0A232: jnz     short loc_140A0A228
 * 0000000140A0A234: btr     r8d, 1Fh
 * 0000000140A0A239: mov     rsi, r14
 * 0000000140A0A23C: mov     [rbx+14h], r8d
 * 0000000140A0A240: mov     rbx, r14
 * 0000000140A0A243: add     [r14+828h], r12d
 * 0000000140A0A24A: jmp     short loc_140A0A24F
 * 0000000140A0A24C: xor     r15d, r15d
 * 0000000140A0A24F: mov     dword ptr [rbx+958h], 0Bh
 * 0000000140A0A259: jmp     loc_140A07D8D
 * 0000000140A0A25E: mov     r12d, 1
 * 0000000140A0A264: cmp     [rbx+8F8h], r15d
 * 0000000140A0A26B: jnz     loc_140A06AB7
 * 0000000140A0A271: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0A27B: add     rax, rbx
 * 0000000140A0A27E: mov     [rbx+900h], rax
 * 0000000140A0A285: mov     [rbx+908h], r15
 * 0000000140A0A28C: mov     qword ptr [rbx+910h], 105h
 * 0000000140A0A297: mov     qword ptr [rbx+918h], 0FFFFFFFFC000007Bh
 * 0000000140A0A2A2: jmp     loc_140A06AA6
 * 0000000140A0A2A7: mov     r12d, 1
 * 0000000140A0A2AD: jmp     loc_140A06ABD
 * 0000000140A0A2B2: mov     [rbx+970h], r13d
 * 0000000140A0A2B9: test    r14, r14
 * 0000000140A0A2BC: jz      loc_140A0A51C
 * 0000000140A0A2C2: mov     rax, [rbx+288h]
 * 0000000140A0A2C9: mov     rcx, r14
 * 0000000140A0A2CC: call    KeGuardDispatchICall
 * 0000000140A0A2D1: jmp     loc_140A0A51C
 * 0000000140A0A2D6: mov     eax, [rsi+830h]
 * 0000000140A0A2DC: test    r12b, al
 * 0000000140A0A2DF: jz      loc_140A0A51C
 * 0000000140A0A2E5: mov     ecx, [rsi+970h]
 * 0000000140A0A2EB: mov     r13d, 0FFFFFFFFh
 * 0000000140A0A2F1: cmp     ecx, r13d
 * 0000000140A0A2F4: jz      short loc_140A0A307
 * 0000000140A0A2F6: mov     rax, [rsi+278h]
 * 0000000140A0A2FD: call    KeGuardDispatchICall
 * 0000000140A0A302: mov     rbx, rax
 * 0000000140A0A305: jmp     short loc_140A0A30A
 * 0000000140A0A307: mov     rbx, r15
 * 0000000140A0A30A: test    rbx, rbx
 * 0000000140A0A30D: jnz     short loc_140A0A329
 * 0000000140A0A30F: mov     rax, [rsi+280h]
 * 0000000140A0A316: xor     ecx, ecx
 * 0000000140A0A318: call    KeGuardDispatchICall
 * 0000000140A0A31D: mov     rbx, rax
 * 0000000140A0A320: test    rax, rax
 * 0000000140A0A323: jz      loc_140A0A51C
 * 0000000140A0A329: mov     rax, [rsi+290h]
 * 0000000140A0A330: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A0A337: mov     rcx, rbx
 * 0000000140A0A33A: call    KeGuardDispatchICall
 * 0000000140A0A33F: mov     r14d, eax
 * 0000000140A0A342: test    eax, eax
 * 0000000140A0A344: jns     short loc_140A0A357
 * 0000000140A0A346: mov     rax, [rsi+288h]
 * 0000000140A0A34D: mov     rcx, rbx
 * 0000000140A0A350: call    KeGuardDispatchICall
 * 0000000140A0A355: jmp     short loc_140A0A3B9
 * 0000000140A0A357: mov     [rsi+980h], rbx
 * 0000000140A0A35E: mov     rax, [rsi+2B8h]
 * 0000000140A0A365: call    KeGuardDispatchICall
 * 0000000140A0A36A: mov     rbx, rax
 * 0000000140A0A36D: mov     rax, [rsi+2D8h]
 * 0000000140A0A374: mov     rcx, rbx
 * 0000000140A0A377: call    KeGuardDispatchICall
 * 0000000140A0A37C: mov     rdx, rax
 * 0000000140A0A37F: test    rax, rax
 * 0000000140A0A382: jnz     short loc_140A0A389
 * 0000000140A0A384: lea     ecx, [rax+4]
 * 0000000140A0A387: jmp     short loc_140A0A39B
 * 0000000140A0A389: mov     rax, [rsi+2E8h]
 * 0000000140A0A390: mov     rcx, rbx
 * 0000000140A0A393: call    KeGuardDispatchICall
 * 0000000140A0A398: mov     ecx, r15d
 * 0000000140A0A39B: mov     eax, [rsi+994h]
 * 0000000140A0A3A1: mov     r14d, r15d
 * 0000000140A0A3A4: and     eax, 0FFFFFFFBh
 * 0000000140A0A3A7: or      eax, ecx
 * 0000000140A0A3A9: mov     [rsi+994h], eax
 * 0000000140A0A3AF: add     dword ptr [rsi+828h], 10000h
 * 0000000140A0A3B9: test    r14d, r14d
 * 0000000140A0A3BC: js      loc_140A0A51C
 * 0000000140A0A3C2: mov     rax, [rsi+960h]
 * 0000000140A0A3C9: mov     rcx, [rax]
 * 0000000140A0A3CC: cmp     rcx, [rsi+968h]
 * 0000000140A0A3D3: jnz     loc_140A0A47A
 * 0000000140A0A3D9: mov     rax, [rsi+570h]
 * 0000000140A0A3E0: cmp     [rax+30h], r15d
 * 0000000140A0A3E4: jz      loc_140A0A47A
 * 0000000140A0A3EA: lock or [rsp+0CE0h+var_CE0], r15d
 * 0000000140A0A3EF: mov     rax, [rsi+960h]
 * 0000000140A0A3F6: mov     rcx, [rax]
 * 0000000140A0A3F9: cmp     rcx, [rsi+968h]
 * 0000000140A0A400: jnz     short loc_140A0A47A
 * 0000000140A0A402: mov     rax, [rsi+960h]
 * 0000000140A0A409: mov     rdx, [rax]
 * 0000000140A0A40C: mov     eax, [rsi+8F8h]
 * 0000000140A0A412: mov     rcx, [rsi+968h]
 * 0000000140A0A419: test    eax, eax
 * 0000000140A0A41B: jnz     short loc_140A0A47A
 * 0000000140A0A41D: mov     rax, [rsi+590h]
 * 0000000140A0A424: xor     rcx, rdx
 * 0000000140A0A427: mov     [rax+18h], rcx
 * 0000000140A0A42B: mov     eax, [rsi+8F8h]
 * 0000000140A0A431: mov     rcx, [rsi+968h]
 * 0000000140A0A438: test    eax, eax
 * 0000000140A0A43A: jnz     short loc_140A0A47A
 * 0000000140A0A43C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0A446: xor     edx, edx
 * 0000000140A0A448: add     rax, rsi
 * 0000000140A0A44B: mov     [rsi+900h], rax
 * 0000000140A0A452: mov     [rsi+908h], r15
 * 0000000140A0A459: mov     qword ptr [rsi+910h], 103h
 * 0000000140A0A464: mov     [rsi+918h], rcx
 * 0000000140A0A46B: mov     rcx, rsi
 * 0000000140A0A46E: mov     [rsi+8F8h], r12d
 * 0000000140A0A475: call    $$b8
 * 0000000140A0A47A: mov     ecx, 8000h
 * 0000000140A0A47F: test    [rsi+990h], ecx
 * 0000000140A0A485: jnz     short loc_140A0A494
 * 0000000140A0A487: cmp     [rsi+8F8h], r15d
 * 0000000140A0A48E: jnz     loc_140A0A51C
 * 0000000140A0A494: mov     rbx, [rsi+980h]
 * 0000000140A0A49B: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A0A4A2: mov     [rsi+980h], r15
 * 0000000140A0A4A9: mov     rcx, rbx
 * 0000000140A0A4AC: mov     rax, [rsi+298h]
 * 0000000140A0A4B3: call    KeGuardDispatchICall
 * 0000000140A0A4B8: mov     eax, [rsi+990h]
 * 0000000140A0A4BE: test    r12b, al
 * 0000000140A0A4C1: jz      short loc_140A0A501
 * 0000000140A0A4C3: and     eax, 0FFFFFFFEh
 * 0000000140A0A4C6: mov     rcx, rbx
 * 0000000140A0A4C9: mov     [rsi+990h], eax
 * 0000000140A0A4CF: mov     rax, [rsi+280h]
 * 0000000140A0A4D6: call    KeGuardDispatchICall
 * 0000000140A0A4DB: mov     rbx, rax
 * 0000000140A0A4DE: test    rax, rax
 * 0000000140A0A4E1: jz      short loc_140A0A4FA
 * 0000000140A0A4E3: mov     rax, [rsi+2A0h]
 * 0000000140A0A4EA: mov     rcx, rbx
 * 0000000140A0A4ED: call    KeGuardDispatchICall
 * 0000000140A0A4F2: mov     [rsi+970h], eax
 * 0000000140A0A4F8: jmp     short loc_140A0A501
 * 0000000140A0A4FA: mov     [rsi+970h], r13d
 * 0000000140A0A501: test    rbx, rbx
 * 0000000140A0A504: jz      short loc_140A0A51C
 * 0000000140A0A506: mov     rax, [rsi+288h]
 * 0000000140A0A50D: mov     rcx, rbx
 * 0000000140A0A510: jmp     loc_140A0A2CC
 * 0000000140A0A515: xor     r15d, r15d
 * 0000000140A0A518: lea     r12d, [r15+1]
 * 0000000140A0A51C: mov     [rsp+0CE0h+var_C80], rsi
 * 0000000140A0A521: test    dword ptr [rsi+990h], 2000000h
 * 0000000140A0A52B: jz      short loc_140A0A5AA
 * 0000000140A0A52D: mov     rbx, [rsi+998h]
 * 0000000140A0A534: mov     rax, [rsi+390h]
 * 0000000140A0A53B: mov     rcx, rbx
 * 0000000140A0A53E: call    KeGuardDispatchICall
 * 0000000140A0A543: test    eax, eax
 * 0000000140A0A545: jz      short loc_140A0A58E
 * 0000000140A0A547: cmp     [rsi+8F8h], r15d
 * 0000000140A0A54E: jnz     short loc_140A0A58E
 * 0000000140A0A550: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0A55A: xor     edx, edx
 * 0000000140A0A55C: add     rax, rsi
 * 0000000140A0A55F: mov     rcx, rsi
 * 0000000140A0A562: mov     [rsi+900h], rax
 * 0000000140A0A569: mov     [rsi+908h], r15
 * 0000000140A0A570: mov     qword ptr [rsi+910h], 110h
 * 0000000140A0A57B: mov     [rsi+918h], r15
 * 0000000140A0A582: mov     [rsi+8F8h], r12d
 * 0000000140A0A589: call    $$b8
 * 0000000140A0A58E: mov     rax, [rsi+388h]
 * 0000000140A0A595: lea     rdx, sub_140A11EF0
 * 0000000140A0A59C: xor     r9d, r9d
 * 0000000140A0A59F: mov     r8, rsi
 * 0000000140A0A5A2: mov     rcx, rbx
 * 0000000140A0A5A5: call    KeGuardDispatchICall
 * 0000000140A0A5AA: mov     edx, r12d
 * 0000000140A0A5AD: mov     rcx, rsi
 * 0000000140A0A5B0: call    $$b8
 * 0000000140A0A5B5: test    dword ptr [rsi+994h], 100h
 * 0000000140A0A5BF: jz      short loc_140A0A5CC
 * 0000000140A0A5C1: mov     rax, [rbp+0BE0h+var_BD0]
 * 0000000140A0A5C5: mov     [rbp+0BE8h], rax
 * 0000000140A0A5CC: mov     r9d, [rsi+990h]
 * 0000000140A0A5D3: mov     r8d, r9d
 * 0000000140A0A5D6: bt      r9d, 12h
 * 0000000140A0A5DB: jnb     loc_140A0A681
 * 0000000140A0A5E1: rdtsc
 * 0000000140A0A5E3: shl     rdx, 20h
 * 0000000140A0A5E7: or      rax, rdx
 * 0000000140A0A5EA: mov     rcx, rax
 * 0000000140A0A5ED: ror     rax, 3
 * 0000000140A0A5F1: xor     rcx, rax
 * 0000000140A0A5F4: mov     rax, 7010008004002001h
 * 0000000140A0A5FE: mul     rcx
 * 0000000140A0A601: mov     rcx, rdx
 * 0000000140A0A604: mov     [rbp+0BE0h+var_4C8], rdx
 * 0000000140A0A60B: xor     rcx, rax
 * 0000000140A0A60E: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140A0A618: mul     rcx
 * 0000000140A0A61B: shr     rdx, 3
 * 0000000140A0A61F: lea     rax, [rdx+rdx*4]
 * 0000000140A0A623: add     rax, rax
 * 0000000140A0A626: sub     rcx, rax
 * 0000000140A0A629: mov     eax, 2
 * 0000000140A0A62E: cmp     rcx, rax
 * 0000000140A0A631: jnb     short loc_140A0A681
 * 0000000140A0A633: cmp     [rsi+8F8h], r15d
 * 0000000140A0A63A: jnz     short loc_140A0A681
 * 0000000140A0A63C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0A646: xor     edx, edx
 * 0000000140A0A648: add     rax, rsi
 * 0000000140A0A64B: mov     rcx, rsi
 * 0000000140A0A64E: mov     [rsi+900h], rax
 * 0000000140A0A655: mov     [rsi+908h], r15
 * 0000000140A0A65C: mov     qword ptr [rsi+910h], 108h
 * 0000000140A0A667: mov     [rsi+918h], r15
 * 0000000140A0A66E: mov     [rsi+8F8h], r12d
 * 0000000140A0A675: call    $$b8
 * 0000000140A0A67A: mov     r8d, [rsi+990h]
 * 0000000140A0A681: mov     r10d, 8000h
 * 0000000140A0A687: bt      r8d, 1Eh
 * 0000000140A0A68C: jb      short loc_140A0A6FD
 * 0000000140A0A68E: test    r10d, r8d
 * 0000000140A0A691: jnz     short loc_140A0A69C
 * 0000000140A0A693: cmp     [rsi+8F8h], r15d
 * 0000000140A0A69A: jnz     short loc_140A0A6FD
 * 0000000140A0A69C: mov     rcx, [rbp+0BE0h+arg_0]
 * 0000000140A0A6A3: test    [rcx+990h], r10d
 * 0000000140A0A6AA: jnz     short loc_140A0A6FD
 * 0000000140A0A6AC: add     rcx, 8F8h
 * 0000000140A0A6B3: cmp     [rcx], r15d
 * 0000000140A0A6B6: jz      short loc_140A0A6FD
 * 0000000140A0A6B8: mov     r8d, 28h ; '('
 * 0000000140A0A6BE: lea     rdx, [rsi+8F8h]
 * 0000000140A0A6C5: lea     r9d, [r8-23h]
 * 0000000140A0A6C9: mov     rax, [rdx]
 * 0000000140A0A6CC: add     r8d, 0FFFFFFF8h
 * 0000000140A0A6D0: mov     [rcx], rax
 * 0000000140A0A6D3: add     rdx, 8
 * 0000000140A0A6D7: add     rcx, 8
 * 0000000140A0A6DB: sub     r9, r12
 * 0000000140A0A6DE: jnz     short loc_140A0A6C9
 * 0000000140A0A6E0: test    r8d, r8d
 * 0000000140A0A6E3: jz      short loc_140A0A6FD
 * 0000000140A0A6E5: mov     r15d, 0FFFFFFFFh
 * 0000000140A0A6EB: mov     al, [rdx]
 * 0000000140A0A6ED: add     rdx, r12
 * 0000000140A0A6F0: mov     [rcx], al
 * 0000000140A0A6F2: add     rcx, r12
 * 0000000140A0A6F5: add     r8d, r15d
 * 0000000140A0A6F8: jnz     short loc_140A0A6EB
 * 0000000140A0A6FA: xor     r15d, r15d
 * 0000000140A0A6FD: test    [rsi+990h], r10d
 * 0000000140A0A704: jnz     short loc_140A0A713
 * 0000000140A0A706: cmp     [rsi+8F8h], r15d
 * 0000000140A0A70D: jnz     loc_140A0B664
 * 0000000140A0A713: mov     eax, [rsi+0A28h]
 * 0000000140A0A719: test    eax, eax
 * 0000000140A0A71B: jz      loc_140A0B664
 * 0000000140A0A721: lea     r14, [rsi+rax]
 * 0000000140A0A725: mov     r11, [r14+8]
 * 0000000140A0A729: mov     [rbp+0BE0h+var_C20], r14
 * 0000000140A0A72D: test    r11, r11
 * 0000000140A0A730: jz      loc_140A0A9F4
 * 0000000140A0A736: mov     r9d, [r14+10h]
 * 0000000140A0A73A: mov     r8, r11
 * 0000000140A0A73D: add     [rsi+828h], r9d
 * 0000000140A0A744: mov     rax, r11
 * 0000000140A0A747: mov     r10d, [rsi+814h]
 * 0000000140A0A74E: mov     r12, [rsi+818h]
 * 0000000140A0A755: lea     rcx, [r11+r9]
 * 0000000140A0A759: cmp     r11, rcx
 * 0000000140A0A75C: jnb     short loc_140A0A76E
 * 0000000140A0A75E: mov     edx, 40h ; '@'
 * 0000000140A0A763: prefetchnta byte ptr [rax]
 * 0000000140A0A766: add     rax, rdx
 * 0000000140A0A769: cmp     rax, rcx
 * 0000000140A0A76C: jb      short loc_140A0A763
 * 0000000140A0A76E: mov     r15d, r9d
 * 0000000140A0A771: mov     rbx, r12
 * 0000000140A0A774: shr     r15d, 7
 * 0000000140A0A778: mov     r13d, 1
 * 0000000140A0A77E: test    r15d, r15d
 * 0000000140A0A781: jz      short loc_140A0A7EC
 * 0000000140A0A783: mov     rdi, 7010008004002001h
 * 0000000140A0A78D: mov     eax, 8
 * 0000000140A0A792: xor     rbx, [r8]
 * 0000000140A0A795: mov     ecx, r10d
 * 0000000140A0A798: rol     rbx, cl
 * 0000000140A0A79B: xor     rbx, [r8+8]
 * 0000000140A0A79F: add     r8, 10h
 * 0000000140A0A7A3: rol     rbx, cl
 * 0000000140A0A7A6: sub     rax, r13
 * 0000000140A0A7A9: jnz     short loc_140A0A792
 * 0000000140A0A7AB: mov     rcx, r8
 * 0000000140A0A7AE: sub     rcx, r11
 * 0000000140A0A7B1: xor     rcx, r12
 * 0000000140A0A7B4: mov     rax, rcx
 * 0000000140A0A7B7: rol     rax, 11h
 * 0000000140A0A7BB: xor     rcx, rax
 * 0000000140A0A7BE: mov     rax, rdi
 * 0000000140A0A7C1: mul     rcx
 * 0000000140A0A7C4: xor     r10d, edx
 * 0000000140A0A7C7: mov     [rbp+0BE0h+var_4C0], rdx
 * 0000000140A0A7CE: xor     r10d, eax
 * 0000000140A0A7D1: mov     edx, 0FFFFFFFFh
 * 0000000140A0A7D6: and     r10d, 3Fh
 * 0000000140A0A7DA: cmovz   r10d, r13d
 * 0000000140A0A7DE: add     r15d, edx
 * 0000000140A0A7E1: jnz     short loc_140A0A78D
 * 0000000140A0A7E3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0A7EA: jmp     short loc_140A0A7F1
 * 0000000140A0A7EC: mov     edx, 0FFFFFFFFh
 * 0000000140A0A7F1: and     r9d, 7Fh
 * 0000000140A0A7F5: cmp     r9d, 8
 * 0000000140A0A7F9: jb      short loc_140A0A818
 * 0000000140A0A7FB: mov     eax, r9d
 * 0000000140A0A7FE: shr     rax, 3
 * 0000000140A0A802: xor     rbx, [r8]
 * 0000000140A0A805: mov     ecx, r10d
 * 0000000140A0A808: rol     rbx, cl
 * 0000000140A0A80B: add     r8, 8
 * 0000000140A0A80F: add     r9d, 0FFFFFFF8h
 * 0000000140A0A813: sub     rax, r13
 * 0000000140A0A816: jnz     short loc_140A0A802
 * 0000000140A0A818: xor     r15d, r15d
 * 0000000140A0A81B: test    r9d, r9d
 * 0000000140A0A81E: jz      short loc_140A0A835
 * 0000000140A0A820: movzx   eax, byte ptr [r8]
 * 0000000140A0A824: mov     ecx, r10d
 * 0000000140A0A827: xor     rbx, rax
 * 0000000140A0A82A: add     r8, r13
 * 0000000140A0A82D: rol     rbx, cl
 * 0000000140A0A830: add     r9d, edx
 * 0000000140A0A833: jnz     short loc_140A0A820
 * 0000000140A0A835: mov     rax, rbx
 * 0000000140A0A838: jmp     short loc_140A0A83C
 * 0000000140A0A83A: xor     ebx, eax
 * 0000000140A0A83C: shr     rax, 1Fh
 * 0000000140A0A840: test    rax, rax
 * 0000000140A0A843: jnz     short loc_140A0A83A
 * 0000000140A0A845: btr     ebx, 1Fh
 * 0000000140A0A849: mov     r12d, r15d
 * 0000000140A0A84C: cmp     ebx, [r14+14h]
 * 0000000140A0A850: jz      loc_140A0A9BD
 * 0000000140A0A856: cmp     [r14], r15d
 * 0000000140A0A859: jnz     short loc_140A0A863
 * 0000000140A0A85B: cmp     [r14+18h], r15d
 * 0000000140A0A85F: cmovnz  r12d, r13d
 * 0000000140A0A863: mov     ecx, [r14+10h]
 * 0000000140A0A867: mov     rdx, [r14+8]
 * 0000000140A0A86B: test    rcx, rcx
 * 0000000140A0A86E: jz      loc_140A0A943
 * 0000000140A0A874: mov     eax, [rsi+994h]
 * 0000000140A0A87A: mov     r8d, 40h ; '@'
 * 0000000140A0A880: test    r8b, al
 * 0000000140A0A883: jz      loc_140A0A943
 * 0000000140A0A889: mov     rax, cr8
 * 0000000140A0A88D: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A0A894: mov     r8d, 2
 * 0000000140A0A89A: mov     cr8, r8
 * 0000000140A0A89E: dec     rcx
 * 0000000140A0A8A1: mov     r15, rdx
 * 0000000140A0A8A4: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140A0A8AB: add     rcx, rdx
 * 0000000140A0A8AE: or      rcx, 0FFFh
 * 0000000140A0A8B5: mov     [rsp+0CE0h+var_C70], rcx
 * 0000000140A0A8BA: lea     rcx, [r15-1]
 * 0000000140A0A8BE: mov     [rbp+0BE0h+var_BD0], rcx
 * 0000000140A0A8C2: movzx   r13d, al
 * 0000000140A0A8C6: mov     rax, [rsi+468h]
 * 0000000140A0A8CD: xor     edx, edx
 * 0000000140A0A8CF: mov     rcx, r15
 * 0000000140A0A8D2: call    KeGuardDispatchICall
 * 0000000140A0A8D7: cmp     eax, 0C000022Dh
 * 0000000140A0A8DC: jnz     short loc_140A0A90B
 * 0000000140A0A8DE: test    r12d, r12d
 * 0000000140A0A8E1: jnz     short loc_140A0A93C
 * 0000000140A0A8E3: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A0A8EA: lea     ecx, [r12+1]
 * 0000000140A0A8EF: cmp     al, cl
 * 0000000140A0A8F1: ja      short loc_140A0A916
 * 0000000140A0A8F3: movzx   r13d, al
 * 0000000140A0A8F7: mov     cr8, r13
 * 0000000140A0A8FB: mov     al, [r15]
 * 0000000140A0A8FE: mov     rax, cr8
 * 0000000140A0A902: lea     eax, [rcx+1]
 * 0000000140A0A905: mov     cr8, rax
 * 0000000140A0A909: jmp     short loc_140A0A8C6
 * 0000000140A0A90B: test    eax, eax
 * 0000000140A0A90D: js      short loc_140A0A93C
 * 0000000140A0A90F: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A0A916: mov     rcx, [rbp+0BE0h+var_BD0]
 * 0000000140A0A91A: mov     edx, 1000h
 * 0000000140A0A91F: add     rcx, rdx
 * 0000000140A0A922: add     r15, rdx
 * 0000000140A0A925: mov     [rbp+0BE0h+var_BD0], rcx
 * 0000000140A0A929: cmp     rcx, [rsp+0CE0h+var_C70]
 * 0000000140A0A92E: jnz     short loc_140A0A8C2
 * 0000000140A0A930: mov     cr8, r13
 * 0000000140A0A934: xor     r15d, r15d
 * 0000000140A0A937: jmp     loc_140A0A9BD
 * 0000000140A0A93C: mov     cr8, r13
 * 0000000140A0A940: xor     r15d, r15d
 * 0000000140A0A943: mov     eax, [rsi+8F8h]
 * 0000000140A0A949: mov     edx, [r14+14h]
 * 0000000140A0A94D: test    eax, eax
 * 0000000140A0A94F: jnz     short loc_140A0A967
 * 0000000140A0A951: mov     rax, [rsi+590h]
 * 0000000140A0A958: mov     ecx, ebx
 * 0000000140A0A95A: xor     rcx, rdx
 * 0000000140A0A95D: mov     [rax+18h], rcx
 * 0000000140A0A961: mov     eax, [rsi+8F8h]
 * 0000000140A0A967: mov     rcx, [r14+8]
 * 0000000140A0A96B: test    eax, eax
 * 0000000140A0A96D: jnz     short loc_140A0A9BD
 * 0000000140A0A96F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0A979: xor     edx, edx
 * 0000000140A0A97B: add     rax, rsi
 * 0000000140A0A97E: mov     [rsi+900h], rax
 * 0000000140A0A985: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0A98F: add     rax, r14
 * 0000000140A0A992: mov     [rsi+908h], rax
 * 0000000140A0A999: movsxd  rax, dword ptr [r14]
 * 0000000140A0A99C: mov     [rsi+910h], rax
 * 0000000140A0A9A3: mov     eax, 1
 * 0000000140A0A9A8: mov     [rsi+918h], rcx
 * 0000000140A0A9AF: mov     rcx, rsi
 * 0000000140A0A9B2: mov     [rsi+8F8h], eax
 * 0000000140A0A9B8: call    $$b8
 * 0000000140A0A9BD: mov     rcx, [r14+18h]
 * 0000000140A0A9C1: mov     rax, [rsi+100h]
 * 0000000140A0A9C8: call    KeGuardDispatchICall
 * 0000000140A0A9CD: mov     [r14+8], r15
 * 0000000140A0A9D1: mov     [r14+10h], r15d
 * 0000000140A0A9D5: mov     rcx, [rsi+818h]
 * 0000000140A0A9DC: mov     rax, rcx
 * 0000000140A0A9DF: jmp     short loc_140A0A9E3
 * 0000000140A0A9E1: xor     ecx, eax
 * 0000000140A0A9E3: shr     rax, 1Fh
 * 0000000140A0A9E7: test    rax, rax
 * 0000000140A0A9EA: jnz     short loc_140A0A9E1
 * 0000000140A0A9EC: btr     ecx, 1Fh
 * 0000000140A0A9F0: mov     [r14+14h], ecx
 * 0000000140A0A9F4: rdtsc
 * 0000000140A0A9F6: shl     rdx, 20h
 * 0000000140A0A9FA: mov     r9, 7010008004002001h
 * 0000000140A0AA04: or      rax, rdx
 * 0000000140A0AA07: mov     rcx, rax
 * 0000000140A0AA0A: ror     rax, 3
 * 0000000140A0AA0E: xor     rcx, rax
 * 0000000140A0AA11: mov     rax, r9
 * 0000000140A0AA14: mul     rcx
 * 0000000140A0AA17: mov     rcx, rdx
 * 0000000140A0AA1A: mov     [rbp+0BE0h+var_4B8], rdx
 * 0000000140A0AA21: xor     rcx, rax
 * 0000000140A0AA24: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A0AA2E: mul     rcx
 * 0000000140A0AA31: shr     rdx, 1
 * 0000000140A0AA34: lea     rax, [rdx+rdx*2]
 * 0000000140A0AA38: cmp     rcx, rax
 * 0000000140A0AA3B: jnz     loc_140A0B670
 * 0000000140A0AA41: mov     r8d, [rsi+810h]
 * 0000000140A0AA48: lea     r12, [r14+18h]
 * 0000000140A0AA4C: rdtsc
 * 0000000140A0AA4E: shl     rdx, 20h
 * 0000000140A0AA52: or      rax, rdx
 * 0000000140A0AA55: mov     rcx, rax
 * 0000000140A0AA58: ror     rax, 3
 * 0000000140A0AA5C: xor     rcx, rax
 * 0000000140A0AA5F: mov     rax, r9
 * 0000000140A0AA62: mul     rcx
 * 0000000140A0AA65: mov     rbx, rdx
 * 0000000140A0AA68: mov     [rbp+0BE0h+var_4B0], rdx
 * 0000000140A0AA6F: xor     ebx, eax
 * 0000000140A0AA71: and     ebx, 7FFh
 * 0000000140A0AA77: rdtsc
 * 0000000140A0AA79: shl     rdx, 20h
 * 0000000140A0AA7D: or      rax, rdx
 * 0000000140A0AA80: mov     rcx, rax
 * 0000000140A0AA83: ror     rax, 3
 * 0000000140A0AA87: xor     rcx, rax
 * 0000000140A0AA8A: mov     rax, r9
 * 0000000140A0AA8D: mul     rcx
 * 0000000140A0AA90: mov     ecx, [rsi+990h]
 * 0000000140A0AA96: lea     r9d, [rbx+1]
 * 0000000140A0AA9A: xor     rax, rdx
 * 0000000140A0AA9D: mov     [rbp+0BE0h+var_4A8], rdx
 * 0000000140A0AAA4: xor     edx, edx
 * 0000000140A0AAA6: shr     ecx, 13h
 * 0000000140A0AAA9: div     r9
 * 0000000140A0AAAC: mov     rax, [rsi+0F8h]
 * 0000000140A0AAB3: and     ecx, 200h
 * 0000000140A0AAB9: mov     r15, rdx
 * 0000000140A0AABC: lea     edx, [rbx+0AA0h]
 * 0000000140A0AAC2: call    KeGuardDispatchICall
 * 0000000140A0AAC7: mov     r11, rax
 * 0000000140A0AACA: test    rax, rax
 * 0000000140A0AACD: jnz     loc_140A0AE7E
 * 0000000140A0AAD3: lea     r15d, [rax+1]
 * 0000000140A0AAD7: add     [rsi+0A18h], r15d
 * 0000000140A0AADE: mov     r9, 7010008004002001h
 * 0000000140A0AAE8: mov     r13d, [rsi+990h]
 * 0000000140A0AAEF: mov     [rbp+0BE0h+var_C38], r11d
 * 0000000140A0AAF3: mov     [rbp+0BE0h+var_C40], r11
 * 0000000140A0AAF7: mov     dword ptr [rbp+0BE0h+arg_8], r13d
 * 0000000140A0AAFE: bt      r13d, 1Eh
 * 0000000140A0AB03: jb      loc_140A0BA53
 * 0000000140A0AB09: mov     r14, [rbp+0BE0h+arg_0]
 * 0000000140A0AB10: cmp     rsi, r14
 * 0000000140A0AB13: jnz     loc_140A0BB56
 * 0000000140A0AB19: mov     eax, 8000h
 * 0000000140A0AB1E: test    eax, r13d
 * 0000000140A0AB21: jnz     short loc_140A0AB30
 * 0000000140A0AB23: cmp     [rsi+8F8h], r11d
 * 0000000140A0AB2A: jnz     loc_140A0B811
 * 0000000140A0AB30: mov     r8d, [r14+924h]
 * 0000000140A0AB37: mov     rcx, r14
 * 0000000140A0AB3A: mov     edx, [r14+7E4h]
 * 0000000140A0AB41: call    sub_140A0FB30
 * 0000000140A0AB46: mov     rsi, rax
 * 0000000140A0AB49: test    rax, rax
 * 0000000140A0AB4C: jz      loc_140A0B811
 * 0000000140A0AB52: mov     ecx, [rsi+954h]
 * 0000000140A0AB58: mov     r15, 7010008004002001h
 * 0000000140A0AB62: mov     r12d, [rsi+0A2Ch]
 * 0000000140A0AB69: mov     rax, [rax+7C8h]
 * 0000000140A0AB70: add     r12d, 0FFFFFF38h
 * 0000000140A0AB77: mov     [rbp+0BE0h+var_C28], ecx
 * 0000000140A0AB7A: mov     ecx, [rsi+990h]
 * 0000000140A0AB80: mov     [rbp+0BE0h+var_C38], ecx
 * 0000000140A0AB83: mov     rcx, [rsi+4E8h]
 * 0000000140A0AB8A: shr     r12d, 3
 * 0000000140A0AB8E: mov     [rbp+0BE0h+var_C30], rcx
 * 0000000140A0AB92: mov     rcx, [rsi+5C0h]
 * 0000000140A0AB99: mov     [rbp+0BE0h+var_BD0], rcx
 * 0000000140A0AB9D: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A0ABA1: mov     dword ptr [rbp+0BE0h+arg_8], r12d
 * 0000000140A0ABA8: mov     [rsi+0C4h], r12d
 * 0000000140A0ABAF: rdtsc
 * 0000000140A0ABB1: shl     rdx, 20h
 * 0000000140A0ABB5: or      rax, rdx
 * 0000000140A0ABB8: mov     rcx, rax
 * 0000000140A0ABBB: ror     rax, 3
 * 0000000140A0ABBF: xor     rcx, rax
 * 0000000140A0ABC2: mov     rax, r15
 * 0000000140A0ABC5: mul     rcx
 * 0000000140A0ABC8: mov     rbx, rdx
 * 0000000140A0ABCB: mov     [rbp+0BE0h+var_460], rdx
 * 0000000140A0ABD2: xor     rbx, rax
 * 0000000140A0ABD5: jz      short loc_140A0ABAF
 * 0000000140A0ABD7: mov     rax, [rsi+7B8h]
 * 0000000140A0ABDE: lea     r14, [rsi+798h]
 * 0000000140A0ABE5: mov     r11d, 20h ; ' '
 * 0000000140A0ABEB: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A0ABF0: mov     eax, [rsi+828h]
 * 0000000140A0ABF6: lea     rdx, [rbp+0BE0h+var_D0]
 * 0000000140A0ABFD: mov     [rbp+0BE0h+var_BE8], eax
 * 0000000140A0AC00: mov     r8d, r11d
 * 0000000140A0AC03: mov     rcx, r14
 * 0000000140A0AC06: xor     r15d, r15d
 * 0000000140A0AC09: lea     r10d, [r11-1Ch]
 * 0000000140A0AC0D: mov     r9d, r10d
 * 0000000140A0AC10: lea     r13d, [r11-1Fh]
 * 0000000140A0AC14: mov     rax, [rcx]
 * 0000000140A0AC17: add     r8d, 0FFFFFFF8h
 * 0000000140A0AC1B: mov     [rdx], rax
 * 0000000140A0AC1E: add     rcx, 8
 * 0000000140A0AC22: add     rdx, 8
 * 0000000140A0AC26: sub     r9, r13
 * 0000000140A0AC29: jnz     short loc_140A0AC14
 * 0000000140A0AC2B: test    r8d, r8d
 * 0000000140A0AC2E: jz      short loc_140A0AC48
 * 0000000140A0AC30: mov     r15d, 0FFFFFFFFh
 * 0000000140A0AC36: mov     al, [rcx]
 * 0000000140A0AC38: add     rcx, r13
 * 0000000140A0AC3B: mov     [rdx], al
 * 0000000140A0AC3D: add     rdx, r13
 * 0000000140A0AC40: add     r8d, r15d
 * 0000000140A0AC43: jnz     short loc_140A0AC36
 * 0000000140A0AC45: xor     r15d, r15d
 * 0000000140A0AC48: mov     [rsi+7B8h], r15
 * 0000000140A0AC4F: mov     ecx, r11d
 * 0000000140A0AC52: mov     [rsi+828h], r15d
 * 0000000140A0AC59: mov     rax, r14
 * 0000000140A0AC5C: mov     rdx, r10
 * 0000000140A0AC5F: mov     [rax], r15
 * 0000000140A0AC62: add     ecx, 0FFFFFFF8h
 * 0000000140A0AC65: add     rax, 8
 * 0000000140A0AC69: sub     rdx, r13
 * 0000000140A0AC6C: jnz     short loc_140A0AC5F
 * 0000000140A0AC6E: mov     edx, 0FFFFFFFFh
 * 0000000140A0AC73: test    ecx, ecx
 * 0000000140A0AC75: jz      short loc_140A0AC81
 * 0000000140A0AC77: mov     [rax], r15b
 * 0000000140A0AC7A: add     rax, r13
 * 0000000140A0AC7D: add     ecx, edx
 * 0000000140A0AC7F: jnz     short loc_140A0AC77
 * 0000000140A0AC81: mov     eax, [rsi+7E4h]
 * 0000000140A0AC87: mov     r10, rsi
 * 0000000140A0AC8A: add     [rsi+828h], eax
 * 0000000140A0AC90: mov     rax, rsi
 * 0000000140A0AC93: mov     r11d, [rsi+7E4h]
 * 0000000140A0AC9A: mov     r9d, [rsi+814h]
 * 0000000140A0ACA1: mov     r13, [rsi+818h]
 * 0000000140A0ACA8: lea     rcx, [rsi+r11]
 * 0000000140A0ACAC: cmp     rsi, rcx
 * 0000000140A0ACAF: jnb     short loc_140A0ACC2
 * 0000000140A0ACB1: mov     r8d, 40h ; '@'
 * 0000000140A0ACB7: prefetchnta byte ptr [rax]
 * 0000000140A0ACBA: add     rax, r8
 * 0000000140A0ACBD: cmp     rax, rcx
 * 0000000140A0ACC0: jb      short loc_140A0ACB7
 * 0000000140A0ACC2: mov     r15d, r11d
 * 0000000140A0ACC5: mov     r8, r13
 * 0000000140A0ACC8: shr     r15d, 7
 * 0000000140A0ACCC: test    r15d, r15d
 * 0000000140A0ACCF: jz      short loc_140A0AD4B
 * 0000000140A0ACD1: mov     r12, 7010008004002001h
 * 0000000140A0ACDB: mov     edx, 8
 * 0000000140A0ACE0: lea     edi, [rdx-7]
 * 0000000140A0ACE3: mov     rax, [r10]
 * 0000000140A0ACE6: mov     ecx, r9d
 * 0000000140A0ACE9: xor     rax, r8
 * 0000000140A0ACEC: mov     r8, [r10+8]
 * 0000000140A0ACF0: rol     rax, cl
 * 0000000140A0ACF3: add     r10, 10h
 * 0000000140A0ACF7: xor     r8, rax
 * 0000000140A0ACFA: rol     r8, cl
 * 0000000140A0ACFD: sub     rdx, rdi
 * 0000000140A0AD00: jnz     short loc_140A0ACE3
 * 0000000140A0AD02: mov     rcx, r10
 * 0000000140A0AD05: sub     rcx, rsi
 * 0000000140A0AD08: xor     rcx, r13
 * 0000000140A0AD0B: mov     rax, rcx
 * 0000000140A0AD0E: rol     rax, 11h
 * 0000000140A0AD12: xor     rcx, rax
 * 0000000140A0AD15: mov     rax, r12
 * 0000000140A0AD18: mul     rcx
 * 0000000140A0AD1B: xor     r9d, eax
 * 0000000140A0AD1E: mov     [rbp+0BE0h+var_458], rdx
 * 0000000140A0AD25: xor     r9d, edx
 * 0000000140A0AD28: mov     rax, rdi
 * 0000000140A0AD2B: and     r9d, 3Fh
 * 0000000140A0AD2F: mov     edx, 0FFFFFFFFh
 * 0000000140A0AD34: cmovz   r9d, eax
 * 0000000140A0AD38: add     r15d, edx
 * 0000000140A0AD3B: jnz     short loc_140A0ACDB
 * 0000000140A0AD3D: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0AD44: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0AD4B: and     r11d, 7Fh
 * 0000000140A0AD4F: mov     r13d, 1
 * 0000000140A0AD55: cmp     r11d, 8
 * 0000000140A0AD59: jb      short loc_140A0AD7D
 * 0000000140A0AD5B: mov     edx, r11d
 * 0000000140A0AD5E: shr     rdx, 3
 * 0000000140A0AD62: xor     r8, [r10]
 * 0000000140A0AD65: mov     ecx, r9d
 * 0000000140A0AD68: rol     r8, cl
 * 0000000140A0AD6B: add     r10, 8
 * 0000000140A0AD6F: add     r11d, 0FFFFFFF8h
 * 0000000140A0AD73: sub     rdx, r13
 * 0000000140A0AD76: jnz     short loc_140A0AD62
 * 0000000140A0AD78: mov     edx, 0FFFFFFFFh
 * 0000000140A0AD7D: test    r11d, r11d
 * 0000000140A0AD80: jz      short loc_140A0AD97
 * 0000000140A0AD82: movzx   eax, byte ptr [r10]
 * 0000000140A0AD86: mov     ecx, r9d
 * 0000000140A0AD89: xor     r8, rax
 * 0000000140A0AD8C: add     r10, r13
 * 0000000140A0AD8F: rol     r8, cl
 * 0000000140A0AD92: add     r11d, edx
 * 0000000140A0AD95: jnz     short loc_140A0AD82
 * 0000000140A0AD97: mov     rax, [rsp+0CE0h+var_C70]
 * 0000000140A0AD9C: lea     rcx, [rbp+0BE0h+var_D0]
 * 0000000140A0ADA3: mov     r9d, 4
 * 0000000140A0ADA9: mov     [rsi+7B8h], rax
 * 0000000140A0ADB0: mov     eax, [rbp+0BE0h+var_BE8]
 * 0000000140A0ADB3: mov     edx, r9d
 * 0000000140A0ADB6: add     [rsi+828h], eax
 * 0000000140A0ADBC: lea     r10d, [r9+1Ch]
 * 0000000140A0ADC0: mov     rax, [rcx]
 * 0000000140A0ADC3: add     r10d, 0FFFFFFF8h
 * 0000000140A0ADC7: mov     [r14], rax
 * 0000000140A0ADCA: add     rcx, 8
 * 0000000140A0ADCE: add     r14, 8
 * 0000000140A0ADD2: sub     rdx, r13
 * 0000000140A0ADD5: jnz     short loc_140A0ADC0
 * 0000000140A0ADD7: xor     r11d, r11d
 * 0000000140A0ADDA: test    r10d, r10d
 * 0000000140A0ADDD: jz      short loc_140A0ADF8
 * 0000000140A0ADDF: mov     r11d, 0FFFFFFFFh
 * 0000000140A0ADE5: mov     al, [rcx]
 * 0000000140A0ADE7: add     rcx, r13
 * 0000000140A0ADEA: mov     [r14], al
 * 0000000140A0ADED: add     r14, r13
 * 0000000140A0ADF0: add     r10d, r11d
 * 0000000140A0ADF3: jnz     short loc_140A0ADE5
 * 0000000140A0ADF5: xor     r11d, r11d
 * 0000000140A0ADF8: mov     [rsi+7B8h], r8
 * 0000000140A0ADFF: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A0AE09: jnz     loc_140A0C037
 * 0000000140A0AE0F: mov     eax, r11d
 * 0000000140A0AE12: mov     rcx, rsi
 * 0000000140A0AE15: mov     r11d, 19h
 * 0000000140A0AE1B: xor     [rcx], rbx
 * 0000000140A0AE1E: add     eax, r13d
 * 0000000140A0AE21: lea     rcx, [rcx+8]
 * 0000000140A0AE25: cmp     eax, r11d
 * 0000000140A0AE28: jb      short loc_140A0AE1B
 * 0000000140A0AE2A: xor     r15d, r15d
 * 0000000140A0AE2D: mov     [rbp+0BE0h+var_A00], rbx
 * 0000000140A0AE34: mov     r8d, r12d
 * 0000000140A0AE37: test    r12d, r12d
 * 0000000140A0AE3A: jz      loc_140A0B67C
 * 0000000140A0AE40: mov     edx, r12d
 * 0000000140A0AE43: dec     rdx
 * 0000000140A0AE46: lea     rdx, [rcx+rdx*8]
 * 0000000140A0AE4A: xor     [rdx], rbx
 * 0000000140A0AE4D: lea     rax, [rbp+0BE0h+var_A00]
 * 0000000140A0AE54: mov     ecx, r8d
 * 0000000140A0AE57: lea     rdx, [rdx-8]
 * 0000000140A0AE5B: ror     rbx, cl
 * 0000000140A0AE5E: mov     [rbp+0BE0h+var_A00], rbx
 * 0000000140A0AE65: and     ebx, 3Fh
 * 0000000140A0AE68: btc     [rax], rbx
 * 0000000140A0AE6C: sub     r8d, r13d
 * 0000000140A0AE6F: jz      loc_140A0B67C
 * 0000000140A0AE75: mov     rbx, [rbp+0BE0h+var_A00]
 * 0000000140A0AE7C: jmp     short loc_140A0AE4A
 * 0000000140A0AE7E: mov     r9d, r15d
 * 0000000140A0AE81: mov     r8, r11
 * 0000000140A0AE84: cmp     r15d, 8
 * 0000000140A0AE88: jb      short loc_140A0AED8
 * 0000000140A0AE8A: mov     r10d, r15d
 * 0000000140A0AE8D: mov     r13d, 1
 * 0000000140A0AE93: shr     r10, 3
 * 0000000140A0AE97: mov     r14, 7010008004002001h
 * 0000000140A0AEA1: rdtsc
 * 0000000140A0AEA3: shl     rdx, 20h
 * 0000000140A0AEA7: add     r9d, 0FFFFFFF8h
 * 0000000140A0AEAB: or      rax, rdx
 * 0000000140A0AEAE: mov     rcx, rax
 * 0000000140A0AEB1: ror     rax, 3
 * 0000000140A0AEB5: xor     rcx, rax
 * 0000000140A0AEB8: mov     rax, r14
 * 0000000140A0AEBB: mul     rcx
 * 0000000140A0AEBE: mov     [rbp+0BE0h+var_4A0], rdx
 * 0000000140A0AEC5: xor     rdx, rax
 * 0000000140A0AEC8: mov     [r8], rdx
 * 0000000140A0AECB: add     r8, 8
 * 0000000140A0AECF: sub     r10, r13
 * 0000000140A0AED2: jnz     short loc_140A0AEA1
 * 0000000140A0AED4: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0AED8: test    r9d, r9d
 * 0000000140A0AEDB: jz      short loc_140A0AF20
 * 0000000140A0AEDD: rdtsc
 * 0000000140A0AEDF: shl     rdx, 20h
 * 0000000140A0AEE3: or      rax, rdx
 * 0000000140A0AEE6: mov     rcx, rax
 * 0000000140A0AEE9: ror     rax, 3
 * 0000000140A0AEED: xor     rcx, rax
 * 0000000140A0AEF0: mov     rax, 7010008004002001h
 * 0000000140A0AEFA: mul     rcx
 * 0000000140A0AEFD: mov     ecx, 0FFFFFFFFh
 * 0000000140A0AF02: mov     [rbp+0BE0h+var_498], rdx
 * 0000000140A0AF09: xor     rdx, rax
 * 0000000140A0AF0C: mov     eax, 1
 * 0000000140A0AF11: mov     [r8], dl
 * 0000000140A0AF14: add     r8, rax
 * 0000000140A0AF17: shr     rdx, 8
 * 0000000140A0AF1B: add     r9d, ecx
 * 0000000140A0AF1E: jnz     short loc_140A0AF11
 * 0000000140A0AF20: mov     r9d, r15d
 * 0000000140A0AF23: sub     ebx, r15d
 * 0000000140A0AF26: add     r9, r11
 * 0000000140A0AF29: mov     r15d, 1
 * 0000000140A0AF2F: lea     r8, [r9+0AA0h]
 * 0000000140A0AF36: cmp     ebx, 8
 * 0000000140A0AF39: jb      short loc_140A0AF7E
 * 0000000140A0AF3B: mov     r10d, ebx
 * 0000000140A0AF3E: mov     r13, 7010008004002001h
 * 0000000140A0AF48: shr     r10, 3
 * 0000000140A0AF4C: rdtsc
 * 0000000140A0AF4E: shl     rdx, 20h
 * 0000000140A0AF52: add     ebx, 0FFFFFFF8h
 * 0000000140A0AF55: or      rax, rdx
 * 0000000140A0AF58: mov     rcx, rax
 * 0000000140A0AF5B: ror     rax, 3
 * 0000000140A0AF5F: xor     rcx, rax
 * 0000000140A0AF62: mov     rax, r13
 * 0000000140A0AF65: mul     rcx
 * 0000000140A0AF68: mov     [rbp+0BE0h+var_490], rdx
 * 0000000140A0AF6F: xor     rdx, rax
 * 0000000140A0AF72: mov     [r8], rdx
 * 0000000140A0AF75: add     r8, 8
 * 0000000140A0AF79: sub     r10, r15
 * 0000000140A0AF7C: jnz     short loc_140A0AF4C
 * 0000000140A0AF7E: test    ebx, ebx
 * 0000000140A0AF80: jz      short loc_140A0AFBF
 * 0000000140A0AF82: rdtsc
 * 0000000140A0AF84: shl     rdx, 20h
 * 0000000140A0AF88: or      rax, rdx
 * 0000000140A0AF8B: mov     rcx, rax
 * 0000000140A0AF8E: ror     rax, 3
 * 0000000140A0AF92: xor     rcx, rax
 * 0000000140A0AF95: mov     rax, 7010008004002001h
 * 0000000140A0AF9F: mul     rcx
 * 0000000140A0AFA2: mov     [rbp+0BE0h+var_488], rdx
 * 0000000140A0AFA9: xor     rdx, rax
 * 0000000140A0AFAC: mov     eax, 0FFFFFFFFh
 * 0000000140A0AFB1: mov     [r8], dl
 * 0000000140A0AFB4: add     r8, r15
 * 0000000140A0AFB7: shr     rdx, 8
 * 0000000140A0AFBB: add     ebx, eax
 * 0000000140A0AFBD: jnz     short loc_140A0AFB1
 * 0000000140A0AFBF: test    r12, r12
 * 0000000140A0AFC2: jz      short loc_140A0AFC8
 * 0000000140A0AFC4: mov     [r12], r11
 * 0000000140A0AFC8: xor     r11d, r11d
 * 0000000140A0AFCB: test    r9, r9
 * 0000000140A0AFCE: jz      loc_140A0AADE
 * 0000000140A0AFD4: mov     r10d, 0AA0h
 * 0000000140A0AFDA: mov     [r14+8], r9
 * 0000000140A0AFDE: mov     [r14+10h], r10d
 * 0000000140A0AFE2: mov     r8d, r10d
 * 0000000140A0AFE5: mov     r14d, 154h
 * 0000000140A0AFEB: mov     rcx, rsi
 * 0000000140A0AFEE: mov     rdx, r9
 * 0000000140A0AFF1: mov     rax, [rcx]
 * 0000000140A0AFF4: add     r8d, 0FFFFFFF8h
 * 0000000140A0AFF8: mov     [rdx], rax
 * 0000000140A0AFFB: add     rcx, 8
 * 0000000140A0AFFF: add     rdx, 8
 * 0000000140A0B003: sub     r14, r15
 * 0000000140A0B006: jnz     short loc_140A0AFF1
 * 0000000140A0B008: test    r8d, r8d
 * 0000000140A0B00B: jz      short loc_140A0B028
 * 0000000140A0B00D: mov     r10d, 0FFFFFFFFh
 * 0000000140A0B013: mov     al, [rcx]
 * 0000000140A0B015: add     rcx, r15
 * 0000000140A0B018: mov     [rdx], al
 * 0000000140A0B01A: add     rdx, r15
 * 0000000140A0B01D: add     r8d, r10d
 * 0000000140A0B020: jnz     short loc_140A0B013
 * 0000000140A0B022: mov     r10d, 0AA0h
 * 0000000140A0B028: bts     dword ptr [r9+990h], 13h
 * 0000000140A0B031: mov     r14, 7010008004002001h
 * 0000000140A0B03B: mov     [r9+7E4h], r10d
 * 0000000140A0B042: mov     [r9+808h], r10d
 * 0000000140A0B049: and     dword ptr [r9+990h], 0FFFFFFFDh
 * 0000000140A0B051: mov     eax, [r9+7E4h]
 * 0000000140A0B058: mov     [r9+0A2Ch], eax
 * 0000000140A0B05F: add     eax, 0FFFFFF38h
 * 0000000140A0B064: mov     ecx, [r9+954h]
 * 0000000140A0B06B: mov     [rbp+0BE0h+var_C28], ecx
 * 0000000140A0B06E: mov     ecx, [r9+990h]
 * 0000000140A0B075: mov     dword ptr [rbp+0BE0h+arg_8], ecx
 * 0000000140A0B07B: mov     rcx, [r9+4E8h]
 * 0000000140A0B082: shr     eax, 3
 * 0000000140A0B085: mov     [rbp+0BE0h+var_C30], rcx
 * 0000000140A0B089: mov     rcx, [r9+5C0h]
 * 0000000140A0B090: mov     [rbp+0BE0h+var_C40], rcx
 * 0000000140A0B094: mov     [rbp+0BE0h+var_C38], eax
 * 0000000140A0B097: mov     [r9+0C4h], eax
 * 0000000140A0B09E: rdtsc
 * 0000000140A0B0A0: shl     rdx, 20h
 * 0000000140A0B0A4: or      rax, rdx
 * 0000000140A0B0A7: mov     rcx, rax
 * 0000000140A0B0AA: ror     rax, 3
 * 0000000140A0B0AE: xor     rcx, rax
 * 0000000140A0B0B1: mov     rax, r14
 * 0000000140A0B0B4: mul     rcx
 * 0000000140A0B0B7: mov     rbx, rdx
 * 0000000140A0B0BA: mov     [rbp+0BE0h+var_480], rdx
 * 0000000140A0B0C1: xor     rbx, rax
 * 0000000140A0B0C4: jz      short loc_140A0B09E
 * 0000000140A0B0C6: mov     rax, [r9+7B8h]
 * 0000000140A0B0CD: lea     r12, [r9+798h]
 * 0000000140A0B0D4: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0B0D8: lea     rdx, [rbp+0BE0h+var_F0]
 * 0000000140A0B0DF: mov     r15d, 20h ; ' '
 * 0000000140A0B0E5: mov     [rbp+0BE0h+var_BD0], rax
 * 0000000140A0B0E9: mov     eax, [r9+828h]
 * 0000000140A0B0F0: mov     r8d, r15d
 * 0000000140A0B0F3: mov     [rbp+0BE0h+var_BE8], eax
 * 0000000140A0B0F6: mov     rcx, r12
 * 0000000140A0B0F9: lea     r11d, [r15-1Ch]
 * 0000000140A0B0FD: mov     r10d, r11d
 * 0000000140A0B100: lea     r13d, [r15-1Fh]
 * 0000000140A0B104: mov     rax, [rcx]
 * 0000000140A0B107: add     r8d, 0FFFFFFF8h
 * 0000000140A0B10B: mov     [rdx], rax
 * 0000000140A0B10E: add     rcx, 8
 * 0000000140A0B112: add     rdx, 8
 * 0000000140A0B116: sub     r10, r13
 * 0000000140A0B119: jnz     short loc_140A0B104
 * 0000000140A0B11B: test    r8d, r8d
 * 0000000140A0B11E: jz      short loc_140A0B138
 * 0000000140A0B120: mov     r10d, 0FFFFFFFFh
 * 0000000140A0B126: mov     al, [rcx]
 * 0000000140A0B128: add     rcx, r13
 * 0000000140A0B12B: mov     [rdx], al
 * 0000000140A0B12D: add     rdx, r13
 * 0000000140A0B130: add     r8d, r10d
 * 0000000140A0B133: jnz     short loc_140A0B126
 * 0000000140A0B135: xor     r10d, r10d
 * 0000000140A0B138: mov     [r9+7B8h], r10
 * 0000000140A0B13F: mov     ecx, r15d
 * 0000000140A0B142: mov     [r9+828h], r10d
 * 0000000140A0B149: mov     rax, r12
 * 0000000140A0B14C: mov     rdx, r11
 * 0000000140A0B14F: mov     [rax], r10
 * 0000000140A0B152: add     ecx, 0FFFFFFF8h
 * 0000000140A0B155: add     rax, 8
 * 0000000140A0B159: sub     rdx, r13
 * 0000000140A0B15C: jnz     short loc_140A0B14F
 * 0000000140A0B15E: test    ecx, ecx
 * 0000000140A0B160: jz      short loc_140A0B171
 * 0000000140A0B162: mov     edx, 0FFFFFFFFh
 * 0000000140A0B167: mov     [rax], r10b
 * 0000000140A0B16A: add     rax, r13
 * 0000000140A0B16D: add     ecx, edx
 * 0000000140A0B16F: jnz     short loc_140A0B167
 * 0000000140A0B171: mov     eax, [r9+7E4h]
 * 0000000140A0B178: mov     r10, r9
 * 0000000140A0B17B: add     [r9+828h], eax
 * 0000000140A0B182: mov     rax, r9
 * 0000000140A0B185: mov     r11d, [r9+7E4h]
 * 0000000140A0B18C: mov     r15d, [r9+814h]
 * 0000000140A0B193: mov     rdx, [r9+818h]
 * 0000000140A0B19A: lea     rcx, [r9+r11]
 * 0000000140A0B19E: cmp     r9, rcx
 * 0000000140A0B1A1: jnb     short loc_140A0B1B4
 * 0000000140A0B1A3: mov     r8d, 40h ; '@'
 * 0000000140A0B1A9: prefetchnta byte ptr [rax]
 * 0000000140A0B1AC: add     rax, r8
 * 0000000140A0B1AF: cmp     rax, rcx
 * 0000000140A0B1B2: jb      short loc_140A0B1A9
 * 0000000140A0B1B4: mov     r13d, r11d
 * 0000000140A0B1B7: mov     r8, rdx
 * 0000000140A0B1BA: shr     r13d, 7
 * 0000000140A0B1BE: test    r13d, r13d
 * 0000000140A0B1C1: jz      loc_140A0B248
 * 0000000140A0B1C7: mov     rdi, rdx
 * 0000000140A0B1CA: mov     r12, 7010008004002001h
 * 0000000140A0B1D4: mov     edx, 8
 * 0000000140A0B1D9: lea     r14d, [rdx-7]
 * 0000000140A0B1DD: mov     rax, [r10]
 * 0000000140A0B1E0: mov     ecx, r15d
 * 0000000140A0B1E3: xor     rax, r8
 * 0000000140A0B1E6: mov     r8, [r10+8]
 * 0000000140A0B1EA: rol     rax, cl
 * 0000000140A0B1ED: add     r10, 10h
 * 0000000140A0B1F1: xor     r8, rax
 * 0000000140A0B1F4: rol     r8, cl
 * 0000000140A0B1F7: sub     rdx, r14
 * 0000000140A0B1FA: jnz     short loc_140A0B1DD
 * 0000000140A0B1FC: mov     rcx, r10
 * 0000000140A0B1FF: sub     rcx, r9
 * 0000000140A0B202: xor     rcx, rdi
 * 0000000140A0B205: mov     rax, rcx
 * 0000000140A0B208: rol     rax, 11h
 * 0000000140A0B20C: xor     rcx, rax
 * 0000000140A0B20F: mov     rax, r12
 * 0000000140A0B212: mul     rcx
 * 0000000140A0B215: mov     [rbp+0BE0h+var_478], rdx
 * 0000000140A0B21C: xor     edx, eax
 * 0000000140A0B21E: xor     r15d, edx
 * 0000000140A0B221: mov     rax, r14
 * 0000000140A0B224: and     r15d, 3Fh
 * 0000000140A0B228: cmovz   r15d, eax
 * 0000000140A0B22C: mov     eax, 0FFFFFFFFh
 * 0000000140A0B231: add     r13d, eax
 * 0000000140A0B234: jnz     short loc_140A0B1D4
 * 0000000140A0B236: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0B23A: lea     r12, [r9+798h]
 * 0000000140A0B241: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0B248: and     r11d, 7Fh
 * 0000000140A0B24C: mov     r13d, 1
 * 0000000140A0B252: cmp     r11d, 8
 * 0000000140A0B256: jb      short loc_140A0B275
 * 0000000140A0B258: mov     edx, r11d
 * 0000000140A0B25B: shr     rdx, 3
 * 0000000140A0B25F: xor     r8, [r10]
 * 0000000140A0B262: mov     ecx, r15d
 * 0000000140A0B265: rol     r8, cl
 * 0000000140A0B268: add     r10, 8
 * 0000000140A0B26C: add     r11d, 0FFFFFFF8h
 * 0000000140A0B270: sub     rdx, r13
 * 0000000140A0B273: jnz     short loc_140A0B25F
 * 0000000140A0B275: test    r11d, r11d
 * 0000000140A0B278: jz      short loc_140A0B299
 * 0000000140A0B27A: mov     r14d, 0FFFFFFFFh
 * 0000000140A0B280: movzx   eax, byte ptr [r10]
 * 0000000140A0B284: mov     ecx, r15d
 * 0000000140A0B287: xor     r8, rax
 * 0000000140A0B28A: add     r10, r13
 * 0000000140A0B28D: rol     r8, cl
 * 0000000140A0B290: add     r11d, r14d
 * 0000000140A0B293: jnz     short loc_140A0B280
 * 0000000140A0B295: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0B299: mov     rax, [rbp+0BE0h+var_BD0]
 * 0000000140A0B29D: lea     rcx, [rbp+0BE0h+var_F0]
 * 0000000140A0B2A4: mov     [r9+7B8h], rax
 * 0000000140A0B2AB: mov     edx, 20h ; ' '
 * 0000000140A0B2B0: mov     eax, [rbp+0BE0h+var_BE8]
 * 0000000140A0B2B3: add     [r9+828h], eax
 * 0000000140A0B2BA: lea     r11d, [rdx-1Ch]
 * 0000000140A0B2BE: mov     r10d, r11d
 * 0000000140A0B2C1: mov     rax, [rcx]
 * 0000000140A0B2C4: add     edx, 0FFFFFFF8h
 * 0000000140A0B2C7: mov     [r12], rax
 * 0000000140A0B2CB: add     rcx, 8
 * 0000000140A0B2CF: add     r12, 8
 * 0000000140A0B2D3: sub     r10, r13
 * 0000000140A0B2D6: jnz     short loc_140A0B2C1
 * 0000000140A0B2D8: test    edx, edx
 * 0000000140A0B2DA: jz      short loc_140A0B2F6
 * 0000000140A0B2DC: mov     r10d, 0FFFFFFFFh
 * 0000000140A0B2E2: mov     al, [rcx]
 * 0000000140A0B2E4: add     rcx, r13
 * 0000000140A0B2E7: mov     [r12], al
 * 0000000140A0B2EB: add     r12, r13
 * 0000000140A0B2EE: add     edx, r10d
 * 0000000140A0B2F1: jnz     short loc_140A0B2E2
 * 0000000140A0B2F3: xor     r10d, r10d
 * 0000000140A0B2F6: mov     [r9+7B8h], r8
 * 0000000140A0B2FD: test    dword ptr [r9+990h], 40000000h
 * 0000000140A0B308: jnz     loc_140A0B52C
 * 0000000140A0B30E: mov     rcx, r9
 * 0000000140A0B311: mov     eax, r10d
 * 0000000140A0B314: mov     r15d, 19h
 * 0000000140A0B31A: xor     [rcx], rbx
 * 0000000140A0B31D: add     eax, r13d
 * 0000000140A0B320: lea     rcx, [rcx+8]
 * 0000000140A0B324: cmp     eax, r15d
 * 0000000140A0B327: jb      short loc_140A0B31A
 * 0000000140A0B329: mov     r13d, [rbp+0BE0h+var_C38]
 * 0000000140A0B32D: mov     [rbp+0BE0h+var_A08], rbx
 * 0000000140A0B334: mov     r8d, r13d
 * 0000000140A0B337: test    r13d, r13d
 * 0000000140A0B33A: jz      short loc_140A0B37E
 * 0000000140A0B33C: lea     rdx, [r13-1]
 * 0000000140A0B340: mov     r14d, 1
 * 0000000140A0B346: lea     rdx, [rcx+rdx*8]
 * 0000000140A0B34A: xor     [rdx], rbx
 * 0000000140A0B34D: lea     rax, [rbp+0BE0h+var_A08]
 * 0000000140A0B354: mov     ecx, r8d
 * 0000000140A0B357: lea     rdx, [rdx-8]
 * 0000000140A0B35B: ror     rbx, cl
 * 0000000140A0B35E: mov     [rbp+0BE0h+var_A08], rbx
 * 0000000140A0B365: and     ebx, 3Fh
 * 0000000140A0B368: btc     [rax], rbx
 * 0000000140A0B36C: sub     r8d, r14d
 * 0000000140A0B36F: jz      short loc_140A0B37A
 * 0000000140A0B371: mov     rbx, [rbp+0BE0h+var_A08]
 * 0000000140A0B378: jmp     short loc_140A0B34A
 * 0000000140A0B37A: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0B37E: mov     eax, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0B384: bt      eax, 13h
 * 0000000140A0B388: jnb     short loc_140A0B3D5
 * 0000000140A0B38A: rdtsc
 * 0000000140A0B38C: shl     rdx, 20h
 * 0000000140A0B390: or      rax, rdx
 * 0000000140A0B393: mov     rcx, rax
 * 0000000140A0B396: ror     rax, 3
 * 0000000140A0B39A: xor     rcx, rax
 * 0000000140A0B39D: mov     rax, 7010008004002001h
 * 0000000140A0B3A7: mul     rcx
 * 0000000140A0B3AA: mov     rcx, rdx
 * 0000000140A0B3AD: mov     [rbp+0BE0h+var_470], rdx
 * 0000000140A0B3B4: xor     rcx, rax
 * 0000000140A0B3B7: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A0B3C1: mul     rcx
 * 0000000140A0B3C4: shr     rdx, 1
 * 0000000140A0B3C7: lea     rax, [rdx+rdx*2]
 * 0000000140A0B3CB: cmp     rcx, rax
 * 0000000140A0B3CE: jz      short loc_140A0B3DF
 * 0000000140A0B3D0: jmp     loc_140A0B526
 * 0000000140A0B3D5: bt      eax, 8
 * 0000000140A0B3D9: jb      loc_140A0B526
 * 0000000140A0B3DF: mov     r14d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0B3E6: mov     eax, 1
 * 0000000140A0B3EB: mov     rsi, [rbp+0BE0h+var_C40]
 * 0000000140A0B3EF: mov     ecx, r9d
 * 0000000140A0B3F2: mov     [rbp+0BE0h+var_B7D], al
 * 0000000140A0B3F5: mov     r12d, r15d
 * 0000000140A0B3F8: mov     eax, 2
 * 0000000140A0B3FD: mov     [rbp+0BE0h+var_B80], r10b
 * 0000000140A0B401: mov     [rbp+0BE0h+var_B7B], al
 * 0000000140A0B404: mov     r10, r9
 * 0000000140A0B407: mov     eax, 0Ch
 * 0000000140A0B40C: ror     r10, cl
 * 0000000140A0B40F: mov     [rbp+0BE0h+var_B7F], al
 * 0000000140A0B412: xor     ecx, ecx
 * 0000000140A0B414: mov     eax, 0Fh
 * 0000000140A0B419: mov     [rbp+0BE0h+var_B7A], r11b
 * 0000000140A0B41D: mov     [rbp+0BE0h+var_B7E], al
 * 0000000140A0B420: mov     r11, r9
 * 0000000140A0B423: mov     [rbp+0BE0h+var_B78], 3
 * 0000000140A0B427: mov     ebx, ecx
 * 0000000140A0B429: mov     [rbp+0BE0h+var_B77], 5
 * 0000000140A0B42D: lea     r15d, [rax+1]
 * 0000000140A0B431: mov     [rbp+0BE0h+var_B74], 6
 * 0000000140A0B435: mov     eax, [rbp+0BE0h+var_C28]
 * 0000000140A0B438: mov     [rbp+0BE0h+var_BD0], rax
 * 0000000140A0B43C: mov     edi, eax
 * 0000000140A0B43E: mov     [rbp+0BE0h+var_B79], 7
 * 0000000140A0B442: mov     [rbp+0BE0h+var_B73], 8
 * 0000000140A0B446: mov     [rbp+0BE0h+var_B76], 9
 * 0000000140A0B44A: mov     [rbp+0BE0h+var_B72], 0Ah
 * 0000000140A0B44E: mov     [rbp+0BE0h+var_B7C], 0Bh
 * 0000000140A0B452: mov     [rbp+0BE0h+var_B71], 0Dh
 * 0000000140A0B456: mov     [rbp+0BE0h+var_B75], 0Eh
 * 0000000140A0B45A: test    r15d, r15d
 * 0000000140A0B45D: jz      short loc_140A0B495
 * 0000000140A0B45F: mov     rdx, [r11]
 * 0000000140A0B462: mov     edi, 0Fh
 * 0000000140A0B467: mov     r8d, r15d
 * 0000000140A0B46A: lea     r13d, [rdi-0Eh]
 * 0000000140A0B46E: movzx   eax, byte ptr [r11]
 * 0000000140A0B472: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140A0B476: and     rax, rdi
 * 0000000140A0B479: movzx   ecx, [rbp+rax+0BE0h+var_B80]
 * 0000000140A0B47E: or      rdx, rcx
 * 0000000140A0B481: ror     rdx, 4
 * 0000000140A0B485: mov     [r11], rdx
 * 0000000140A0B488: sub     r8, r13
 * 0000000140A0B48B: jnz     short loc_140A0B46E
 * 0000000140A0B48D: mov     r13d, [rbp+0BE0h+var_C38]
 * 0000000140A0B491: mov     rdi, [rbp+0BE0h+var_BD0]
 * 0000000140A0B495: mov     rdx, [r11]
 * 0000000140A0B498: mov     eax, ebx
 * 0000000140A0B49A: sub     rdx, rax
 * 0000000140A0B49D: sub     rdx, r9
 * 0000000140A0B4A0: bt      r14d, 9
 * 0000000140A0B4A5: jb      short loc_140A0B4BB
 * 0000000140A0B4A7: xor     rdx, [rbp+0BE0h+var_C30]
 * 0000000140A0B4AB: mov     ecx, esi
 * 0000000140A0B4AD: bswap   rdx
 * 0000000140A0B4B0: xor     rdx, r10
 * 0000000140A0B4B3: ror     rdx, cl
 * 0000000140A0B4B6: xor     rdx, rsi
 * 0000000140A0B4B9: jmp     short loc_140A0B4BE
 * 0000000140A0B4BB: xor     rdx, r10
 * 0000000140A0B4BE: mov     [r11], rdx
 * 0000000140A0B4C1: mov     ecx, edx
 * 0000000140A0B4C3: mov     r8d, edx
 * 0000000140A0B4C6: mov     eax, ebx
 * 0000000140A0B4C8: xor     r8d, 0EFFh
 * 0000000140A0B4CF: mov     edx, 0C8h
 * 0000000140A0B4D4: sub     edx, ebx
 * 0000000140A0B4D6: not     ecx
 * 0000000140A0B4D8: xor     rdx, rax
 * 0000000140A0B4DB: add     r11, 8
 * 0000000140A0B4DF: ror     rdx, cl
 * 0000000140A0B4E2: mov     cl, r8b
 * 0000000140A0B4E5: xor     r10, rdx
 * 0000000140A0B4E8: rol     r10, cl
 * 0000000140A0B4EB: add     r10, r9
 * 0000000140A0B4EE: xor     r10, rdi
 * 0000000140A0B4F1: inc     ebx
 * 0000000140A0B4F3: cmp     ebx, 19h
 * 0000000140A0B4F6: jnz     short loc_140A0B50D
 * 0000000140A0B4F8: bt      r14d, 13h
 * 0000000140A0B4FD: lea     ecx, [rbx-19h]
 * 0000000140A0B500: mov     eax, ecx
 * 0000000140A0B502: lea     r15d, [rbx-18h]
 * 0000000140A0B506: cmovnb  eax, r13d
 * 0000000140A0B50A: add     r12d, eax
 * 0000000140A0B50D: cmp     ebx, r12d
 * 0000000140A0B510: jb      loc_140A0B45A
 * 0000000140A0B516: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A0B51B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0B522: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0B526: mov     r13d, 1
 * 0000000140A0B52C: mov     r15, [r14+8]
 * 0000000140A0B530: mov     r11d, [r14+10h]
 * 0000000140A0B534: mov     r10, r15
 * 0000000140A0B537: add     [rsi+828h], r11d
 * 0000000140A0B53E: mov     rax, r15
 * 0000000140A0B541: mov     r9d, [rsi+814h]
 * 0000000140A0B548: mov     r12, [rsi+818h]
 * 0000000140A0B54F: lea     rcx, [r15+r11]
 * 0000000140A0B553: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 0000000140A0B55A: cmp     r15, rcx
 * 0000000140A0B55D: jnb     short loc_140A0B56F
 * 0000000140A0B55F: mov     edx, 40h ; '@'
 * 0000000140A0B564: prefetchnta byte ptr [rax]
 * 0000000140A0B567: add     rax, rdx
 * 0000000140A0B56A: cmp     rax, rcx
 * 0000000140A0B56D: jb      short loc_140A0B564
 * 0000000140A0B56F: mov     ebx, r11d
 * 0000000140A0B572: mov     r8, r12
 * 0000000140A0B575: shr     ebx, 7
 * 0000000140A0B578: test    ebx, ebx
 * 0000000140A0B57A: jz      short loc_140A0B5ED
 * 0000000140A0B57C: mov     edi, 0FFFFFFFFh
 * 0000000140A0B581: mov     r11, 7010008004002001h
 * 0000000140A0B58B: mov     eax, 8
 * 0000000140A0B590: xor     r8, [r10]
 * 0000000140A0B593: mov     ecx, r9d
 * 0000000140A0B596: rol     r8, cl
 * 0000000140A0B599: xor     r8, [r10+8]
 * 0000000140A0B59D: add     r10, 10h
 * 0000000140A0B5A1: rol     r8, cl
 * 0000000140A0B5A4: sub     rax, r13
 * 0000000140A0B5A7: jnz     short loc_140A0B590
 * 0000000140A0B5A9: mov     rcx, r10
 * 0000000140A0B5AC: sub     rcx, r15
 * 0000000140A0B5AF: xor     rcx, r12
 * 0000000140A0B5B2: mov     rax, rcx
 * 0000000140A0B5B5: rol     rax, 11h
 * 0000000140A0B5B9: xor     rcx, rax
 * 0000000140A0B5BC: mov     rax, r11
 * 0000000140A0B5BF: mul     rcx
 * 0000000140A0B5C2: xor     r9d, eax
 * 0000000140A0B5C5: mov     [rbp+0BE0h+var_468], rdx
 * 0000000140A0B5CC: xor     r9d, edx
 * 0000000140A0B5CF: and     r9d, 3Fh
 * 0000000140A0B5D3: cmovz   r9d, r13d
 * 0000000140A0B5D7: add     ebx, edi
 * 0000000140A0B5D9: jnz     short loc_140A0B58B
 * 0000000140A0B5DB: mov     r11d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0B5E2: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0B5E9: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0B5ED: and     r11d, 7Fh
 * 0000000140A0B5F1: mov     r15d, 1
 * 0000000140A0B5F7: cmp     r11d, 8
 * 0000000140A0B5FB: jb      short loc_140A0B61A
 * 0000000140A0B5FD: mov     eax, r11d
 * 0000000140A0B600: shr     rax, 3
 * 0000000140A0B604: xor     r8, [r10]
 * 0000000140A0B607: mov     ecx, r9d
 * 0000000140A0B60A: rol     r8, cl
 * 0000000140A0B60D: add     r10, 8
 * 0000000140A0B611: add     r11d, 0FFFFFFF8h
 * 0000000140A0B615: sub     rax, r15
 * 0000000140A0B618: jnz     short loc_140A0B604
 * 0000000140A0B61A: test    r11d, r11d
 * 0000000140A0B61D: jz      short loc_140A0B63E
 * 0000000140A0B61F: mov     r14d, 0FFFFFFFFh
 * 0000000140A0B625: movzx   eax, byte ptr [r10]
 * 0000000140A0B629: mov     ecx, r9d
 * 0000000140A0B62C: xor     r8, rax
 * 0000000140A0B62F: add     r10, r15
 * 0000000140A0B632: rol     r8, cl
 * 0000000140A0B635: add     r11d, r14d
 * 0000000140A0B638: jnz     short loc_140A0B625
 * 0000000140A0B63A: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0B63E: mov     rax, r8
 * 0000000140A0B641: shr     rax, 1Fh
 * 0000000140A0B645: xor     r11d, r11d
 * 0000000140A0B648: jmp     short loc_140A0B651
 * 0000000140A0B64A: xor     r8d, eax
 * 0000000140A0B64D: shr     rax, 1Fh
 * 0000000140A0B651: test    rax, rax
 * 0000000140A0B654: jnz     short loc_140A0B64A
 * 0000000140A0B656: btr     r8d, 1Fh
 * 0000000140A0B65B: mov     [r14+14h], r8d
 * 0000000140A0B65F: jmp     loc_140A0AADE
 * 0000000140A0B664: xor     r11d, r11d
 * 0000000140A0B667: lea     r15d, [r11+1]
 * 0000000140A0B66B: jmp     loc_140A0AADE
 * 0000000140A0B670: xor     r11d, r11d
 * 0000000140A0B673: lea     r15d, [r11+1]
 * 0000000140A0B677: jmp     loc_140A0AAE8
 * 0000000140A0B67C: mov     r13d, [rbp+0BE0h+var_C38]
 * 0000000140A0B680: bt      r13d, 13h
 * 0000000140A0B685: jnb     short loc_140A0B6D2
 * 0000000140A0B687: rdtsc
 * 0000000140A0B689: shl     rdx, 20h
 * 0000000140A0B68D: or      rax, rdx
 * 0000000140A0B690: mov     rcx, rax
 * 0000000140A0B693: ror     rax, 3
 * 0000000140A0B697: xor     rcx, rax
 * 0000000140A0B69A: mov     rax, 7010008004002001h
 * 0000000140A0B6A4: mul     rcx
 * 0000000140A0B6A7: mov     rcx, rdx
 * 0000000140A0B6AA: mov     [rbp+0BE0h+var_450], rdx
 * 0000000140A0B6B1: xor     rcx, rax
 * 0000000140A0B6B4: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A0B6BE: mul     rcx
 * 0000000140A0B6C1: shr     rdx, 1
 * 0000000140A0B6C4: lea     rax, [rdx+rdx*2]
 * 0000000140A0B6C8: cmp     rcx, rax
 * 0000000140A0B6CB: jz      short loc_140A0B6DD
 * 0000000140A0B6CD: jmp     loc_140A0C034
 * 0000000140A0B6D2: bt      r13d, 8
 * 0000000140A0B6D7: jb      loc_140A0C034
 * 0000000140A0B6DD: mov     rdi, [rbp+0BE0h+var_BD0]
 * 0000000140A0B6E1: mov     eax, 1
 * 0000000140A0B6E6: mov     [rbp+0BE0h+var_B6D], al
 * 0000000140A0B6E9: mov     ecx, esi
 * 0000000140A0B6EB: mov     eax, 2
 * 0000000140A0B6F0: mov     [rbp+0BE0h+var_B6A], r9b
 * 0000000140A0B6F4: mov     [rbp+0BE0h+var_B6B], al
 * 0000000140A0B6F7: mov     r9, rsi
 * 0000000140A0B6FA: mov     eax, 0Ch
 * 0000000140A0B6FF: mov     [rbp+0BE0h+var_B70], r15b
 * 0000000140A0B703: mov     [rbp+0BE0h+var_B6F], al
 * 0000000140A0B706: mov     r14d, r11d
 * 0000000140A0B709: mov     eax, 0Fh
 * 0000000140A0B70E: mov     [rbp+0BE0h+var_B68], 3
 * 0000000140A0B712: mov     r11d, r15d
 * 0000000140A0B715: mov     [rbp+0BE0h+var_B67], 5
 * 0000000140A0B719: mov     r15d, [rbp+0BE0h+var_C28]
 * 0000000140A0B71D: mov     r10, rsi
 * 0000000140A0B720: mov     [rbp+0BE0h+var_B64], 6
 * 0000000140A0B724: lea     ebx, [rax+1]
 * 0000000140A0B727: mov     [rbp+0BE0h+var_B69], 7
 * 0000000140A0B72B: mov     [rbp+0BE0h+var_B63], 8
 * 0000000140A0B72F: mov     [rbp+0BE0h+var_B66], 9
 * 0000000140A0B733: mov     [rbp+0BE0h+var_B62], 0Ah
 * 0000000140A0B737: mov     [rbp+0BE0h+var_B6C], 0Bh
 * 0000000140A0B73B: mov     [rbp+0BE0h+var_B61], 0Dh
 * 0000000140A0B73F: mov     [rbp+0BE0h+var_B65], 0Eh
 * 0000000140A0B743: mov     [rbp+0BE0h+var_B6E], al
 * 0000000140A0B746: ror     r9, cl
 * 0000000140A0B749: test    ebx, ebx
 * 0000000140A0B74B: jz      short loc_140A0B787
 * 0000000140A0B74D: mov     rdx, [r10]
 * 0000000140A0B750: mov     r13d, 1
 * 0000000140A0B756: mov     r8d, ebx
 * 0000000140A0B759: lea     r12d, [r13+0Eh]
 * 0000000140A0B75D: movzx   eax, byte ptr [r10]
 * 0000000140A0B761: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140A0B765: and     rax, r12
 * 0000000140A0B768: movzx   ecx, [rbp+rax+0BE0h+var_B70]
 * 0000000140A0B76D: or      rdx, rcx
 * 0000000140A0B770: ror     rdx, 4
 * 0000000140A0B774: mov     [r10], rdx
 * 0000000140A0B777: sub     r8, r13
 * 0000000140A0B77A: jnz     short loc_140A0B75D
 * 0000000140A0B77C: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0B783: mov     r13d, [rbp+0BE0h+var_C38]
 * 0000000140A0B787: mov     rdx, [r10]
 * 0000000140A0B78A: mov     eax, r11d
 * 0000000140A0B78D: sub     rdx, rax
 * 0000000140A0B790: sub     rdx, rsi
 * 0000000140A0B793: bt      r13d, 9
 * 0000000140A0B798: jb      short loc_140A0B7AE
 * 0000000140A0B79A: xor     rdx, [rbp+0BE0h+var_C30]
 * 0000000140A0B79E: mov     ecx, edi
 * 0000000140A0B7A0: bswap   rdx
 * 0000000140A0B7A3: xor     rdx, r9
 * 0000000140A0B7A6: ror     rdx, cl
 * 0000000140A0B7A9: xor     rdx, rdi
 * 0000000140A0B7AC: jmp     short loc_140A0B7B1
 * 0000000140A0B7AE: xor     rdx, r9
 * 0000000140A0B7B1: mov     [r10], rdx
 * 0000000140A0B7B4: mov     ecx, edx
 * 0000000140A0B7B6: mov     r8d, edx
 * 0000000140A0B7B9: mov     eax, r11d
 * 0000000140A0B7BC: xor     r8d, 0EFFh
 * 0000000140A0B7C3: mov     edx, 0C8h
 * 0000000140A0B7C8: sub     edx, r11d
 * 0000000140A0B7CB: not     ecx
 * 0000000140A0B7CD: xor     rdx, rax
 * 0000000140A0B7D0: add     r10, 8
 * 0000000140A0B7D4: ror     rdx, cl
 * 0000000140A0B7D7: mov     cl, r8b
 * 0000000140A0B7DA: xor     r9, rdx
 * 0000000140A0B7DD: rol     r9, cl
 * 0000000140A0B7E0: add     r9, rsi
 * 0000000140A0B7E3: xor     r9, r15
 * 0000000140A0B7E6: inc     r11d
 * 0000000140A0B7E9: cmp     r11d, 19h
 * 0000000140A0B7ED: jnz     short loc_140A0B803
 * 0000000140A0B7EF: bt      r13d, 13h
 * 0000000140A0B7F4: lea     eax, [r11-19h]
 * 0000000140A0B7F8: lea     ebx, [r11-18h]
 * 0000000140A0B7FC: cmovnb  eax, r12d
 * 0000000140A0B800: add     r14d, eax
 * 0000000140A0B803: cmp     r11d, r14d
 * 0000000140A0B806: jb      loc_140A0B749
 * 0000000140A0B80C: jmp     loc_140A0C02D
 * 0000000140A0B811: mov     r15d, 1
 * 0000000140A0B817: lea     rbx, [r14+798h]
 * 0000000140A0B81E: mov     [r14+0C4h], r15d
 * 0000000140A0B825: lea     rdx, [rbp+0BE0h+var_B0]
 * 0000000140A0B82C: mov     r12, [r14+7B8h]
 * 0000000140A0B833: mov     rsi, r14
 * 0000000140A0B836: mov     r13d, [r14+828h]
 * 0000000140A0B83D: mov     rcx, rbx
 * 0000000140A0B840: lea     r11d, [r15+1Fh]
 * 0000000140A0B844: mov     [rbp+0BE0h+var_BD0], r12
 * 0000000140A0B848: lea     r10d, [r15+3]
 * 0000000140A0B84C: mov     dword ptr [rbp+0BE0h+arg_8], r13d
 * 0000000140A0B853: mov     r8d, r11d
 * 0000000140A0B856: mov     [rsp+0CE0h+var_C70], rbx
 * 0000000140A0B85B: mov     r9d, r10d
 * 0000000140A0B85E: mov     rax, [rcx]
 * 0000000140A0B861: add     r8d, 0FFFFFFF8h
 * 0000000140A0B865: mov     [rdx], rax
 * 0000000140A0B868: add     rcx, 8
 * 0000000140A0B86C: add     rdx, 8
 * 0000000140A0B870: sub     r9, r15
 * 0000000140A0B873: jnz     short loc_140A0B85E
 * 0000000140A0B875: xor     r15d, r15d
 * 0000000140A0B878: lea     r9d, [r15+1]
 * 0000000140A0B87C: test    r8d, r8d
 * 0000000140A0B87F: jz      short loc_140A0B899
 * 0000000140A0B881: mov     r15d, 0FFFFFFFFh
 * 0000000140A0B887: mov     al, [rcx]
 * 0000000140A0B889: add     rcx, r9
 * 0000000140A0B88C: mov     [rdx], al
 * 0000000140A0B88E: add     rdx, r9
 * 0000000140A0B891: add     r8d, r15d
 * 0000000140A0B894: jnz     short loc_140A0B887
 * 0000000140A0B896: xor     r15d, r15d
 * 0000000140A0B899: mov     [r14+7B8h], r15
 * 0000000140A0B8A0: mov     ecx, r11d
 * 0000000140A0B8A3: mov     [r14+828h], r15d
 * 0000000140A0B8AA: mov     rax, rbx
 * 0000000140A0B8AD: mov     rdx, r10
 * 0000000140A0B8B0: mov     [rax], r15
 * 0000000140A0B8B3: add     ecx, 0FFFFFFF8h
 * 0000000140A0B8B6: add     rax, 8
 * 0000000140A0B8BA: sub     rdx, r9
 * 0000000140A0B8BD: jnz     short loc_140A0B8B0
 * 0000000140A0B8BF: test    ecx, ecx
 * 0000000140A0B8C1: jz      short loc_140A0B8D2
 * 0000000140A0B8C3: mov     edx, 0FFFFFFFFh
 * 0000000140A0B8C8: mov     [rax], r15b
 * 0000000140A0B8CB: add     rax, r9
 * 0000000140A0B8CE: add     ecx, edx
 * 0000000140A0B8D0: jnz     short loc_140A0B8C8
 * 0000000140A0B8D2: mov     eax, [r14+7E4h]
 * 0000000140A0B8D9: mov     r10, r14
 * 0000000140A0B8DC: add     [r14+828h], eax
 * 0000000140A0B8E3: mov     rax, r14
 * 0000000140A0B8E6: mov     r11d, [r14+7E4h]
 * 0000000140A0B8ED: mov     r9d, [r14+814h]
 * 0000000140A0B8F4: mov     r15, [r14+818h]
 * 0000000140A0B8FB: lea     rcx, [r14+r11]
 * 0000000140A0B8FF: cmp     r14, rcx
 * 0000000140A0B902: jnb     short loc_140A0B914
 * 0000000140A0B904: mov     edx, 40h ; '@'
 * 0000000140A0B909: prefetchnta byte ptr [rax]
 * 0000000140A0B90C: add     rax, rdx
 * 0000000140A0B90F: cmp     rax, rcx
 * 0000000140A0B912: jb      short loc_140A0B909
 * 0000000140A0B914: mov     r14d, r11d
 * 0000000140A0B917: mov     r8, r15
 * 0000000140A0B91A: shr     r14d, 7
 * 0000000140A0B91E: test    r14d, r14d
 * 0000000140A0B921: jz      loc_140A0B9AC
 * 0000000140A0B927: mov     rdi, [rbp+0BE0h+arg_0]
 * 0000000140A0B92E: mov     rbx, 7010008004002001h
 * 0000000140A0B938: mov     r12d, 1
 * 0000000140A0B93E: mov     r13d, 0FFFFFFFFh
 * 0000000140A0B944: mov     eax, 8
 * 0000000140A0B949: xor     r8, [r10]
 * 0000000140A0B94C: mov     ecx, r9d
 * 0000000140A0B94F: rol     r8, cl
 * 0000000140A0B952: xor     r8, [r10+8]
 * 0000000140A0B956: add     r10, 10h
 * 0000000140A0B95A: rol     r8, cl
 * 0000000140A0B95D: sub     rax, r12
 * 0000000140A0B960: jnz     short loc_140A0B949
 * 0000000140A0B962: mov     rcx, r10
 * 0000000140A0B965: sub     rcx, rdi
 * 0000000140A0B968: xor     rcx, r15
 * 0000000140A0B96B: mov     rax, rcx
 * 0000000140A0B96E: rol     rax, 11h
 * 0000000140A0B972: xor     rcx, rax
 * 0000000140A0B975: mov     rax, rbx
 * 0000000140A0B978: mul     rcx
 * 0000000140A0B97B: xor     r9d, eax
 * 0000000140A0B97E: mov     [rbp+0BE0h+var_328], rdx
 * 0000000140A0B985: xor     r9d, edx
 * 0000000140A0B988: and     r9d, 3Fh
 * 0000000140A0B98C: cmovz   r9d, r12d
 * 0000000140A0B990: add     r14d, r13d
 * 0000000140A0B993: jnz     short loc_140A0B944
 * 0000000140A0B995: mov     rbx, [rsp+0CE0h+var_C70]
 * 0000000140A0B99A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0B9A1: mov     r12, [rbp+0BE0h+var_BD0]
 * 0000000140A0B9A5: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0B9AC: and     r11d, 7Fh
 * 0000000140A0B9B0: mov     r15d, 1
 * 0000000140A0B9B6: cmp     r11d, 8
 * 0000000140A0B9BA: jb      short loc_140A0B9D9
 * 0000000140A0B9BC: mov     eax, r11d
 * 0000000140A0B9BF: shr     rax, 3
 * 0000000140A0B9C3: xor     r8, [r10]
 * 0000000140A0B9C6: mov     ecx, r9d
 * 0000000140A0B9C9: rol     r8, cl
 * 0000000140A0B9CC: add     r10, 8
 * 0000000140A0B9D0: add     r11d, 0FFFFFFF8h
 * 0000000140A0B9D4: sub     rax, r15
 * 0000000140A0B9D7: jnz     short loc_140A0B9C3
 * 0000000140A0B9D9: mov     r14d, 0FFFFFFFFh
 * 0000000140A0B9DF: test    r11d, r11d
 * 0000000140A0B9E2: jz      short loc_140A0B9F9
 * 0000000140A0B9E4: movzx   eax, byte ptr [r10]
 * 0000000140A0B9E8: mov     ecx, r9d
 * 0000000140A0B9EB: xor     r8, rax
 * 0000000140A0B9EE: add     r10, r15
 * 0000000140A0B9F1: rol     r8, cl
 * 0000000140A0B9F4: add     r11d, r14d
 * 0000000140A0B9F7: jnz     short loc_140A0B9E4
 * 0000000140A0B9F9: mov     r9, [rbp+0BE0h+arg_0]
 * 0000000140A0BA00: lea     rcx, [rbp+0BE0h+var_B0]
 * 0000000140A0BA07: mov     edx, 4
 * 0000000140A0BA0C: mov     [r9+7B8h], r12
 * 0000000140A0BA13: add     [r9+828h], r13d
 * 0000000140A0BA1A: lea     r10d, [rdx+1Ch]
 * 0000000140A0BA1E: mov     rax, [rcx]
 * 0000000140A0BA21: add     r10d, 0FFFFFFF8h
 * 0000000140A0BA25: mov     [rbx], rax
 * 0000000140A0BA28: add     rcx, 8
 * 0000000140A0BA2C: add     rbx, 8
 * 0000000140A0BA30: sub     rdx, r15
 * 0000000140A0BA33: jnz     short loc_140A0BA1E
 * 0000000140A0BA35: xor     r11d, r11d
 * 0000000140A0BA38: test    r10d, r10d
 * 0000000140A0BA3B: jz      short loc_140A0BA4C
 * 0000000140A0BA3D: mov     al, [rcx]
 * 0000000140A0BA3F: add     rcx, r15
 * 0000000140A0BA42: mov     [rbx], al
 * 0000000140A0BA44: add     rbx, r15
 * 0000000140A0BA47: add     r10d, r14d
 * 0000000140A0BA4A: jnz     short loc_140A0BA3D
 * 0000000140A0BA4C: mov     [r9+7B8h], r8
 * 0000000140A0BA53: mov     r14d, [rsi+990h]
 * 0000000140A0BA5A: mov     r12, r11
 * 0000000140A0BA5D: mov     [rsp+0CE0h+var_C70], r11
 * 0000000140A0BA62: bt      r14d, 1Eh
 * 0000000140A0BA67: jb      loc_140A0C0EC
 * 0000000140A0BA6D: bt      r14d, 8
 * 0000000140A0BA72: jb      loc_140A0C0D6
 * 0000000140A0BA78: mov     eax, [rsi+954h]
 * 0000000140A0BA7E: mov     ecx, 1
 * 0000000140A0BA83: mov     r15, [rsi+5C0h]
 * 0000000140A0BA8A: mov     r9, rsi
 * 0000000140A0BA8D: mov     r13, [rsi+4E8h]
 * 0000000140A0BA94: mov     r10, rsi
 * 0000000140A0BA97: mov     [rbp+0BE0h+var_B8D], cl
 * 0000000140A0BA9A: mov     ecx, 2
 * 0000000140A0BA9F: mov     [rbp+0BE0h+var_B8B], cl
 * 0000000140A0BAA2: mov     ecx, 0Ch
 * 0000000140A0BAA7: mov     [rbp+0BE0h+var_B8F], cl
 * 0000000140A0BAAA: mov     [rbp+0BE0h+var_B90], r11b
 * 0000000140A0BAAE: mov     [rbp+0BE0h+var_B88], 3
 * 0000000140A0BAB2: lea     r12d, [rcx+3]
 * 0000000140A0BAB6: mov     [rbp+0BE0h+var_B8A], 4
 * 0000000140A0BABA: mov     ecx, esi
 * 0000000140A0BABC: mov     [rbp+0BE0h+var_B87], 5
 * 0000000140A0BAC0: ror     r9, cl
 * 0000000140A0BAC3: lea     ebx, [r12+1]
 * 0000000140A0BAC8: xor     edi, edi
 * 0000000140A0BACA: mov     [rbp+0BE0h+var_B84], 6
 * 0000000140A0BACE: mov     [rbp+0BE0h+var_B89], 7
 * 0000000140A0BAD2: mov     [rbp+0BE0h+var_B83], 8
 * 0000000140A0BAD6: mov     [rbp+0BE0h+var_B86], 9
 * 0000000140A0BADA: mov     [rbp+0BE0h+var_B82], 0Ah
 * 0000000140A0BADE: mov     [rbp+0BE0h+var_B8C], 0Bh
 * 0000000140A0BAE2: mov     [rbp+0BE0h+var_B81], 0Dh
 * 0000000140A0BAE6: mov     [rbp+0BE0h+var_B85], 0Eh
 * 0000000140A0BAEA: mov     [rbp+0BE0h+var_B8E], r12b
 * 0000000140A0BAEE: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A0BAF5: test    ebx, ebx
 * 0000000140A0BAF7: jz      short loc_140A0BB25
 * 0000000140A0BAF9: mov     rdx, [r10]
 * 0000000140A0BAFC: mov     edi, 1
 * 0000000140A0BB01: mov     r8d, ebx
 * 0000000140A0BB04: movzx   eax, byte ptr [r10]
 * 0000000140A0BB08: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140A0BB0C: and     rax, r12
 * 0000000140A0BB0F: movzx   ecx, [rbp+rax+0BE0h+var_B90]
 * 0000000140A0BB14: or      rdx, rcx
 * 0000000140A0BB17: ror     rdx, 4
 * 0000000140A0BB1B: mov     [r10], rdx
 * 0000000140A0BB1E: sub     r8, rdi
 * 0000000140A0BB21: jnz     short loc_140A0BB04
 * 0000000140A0BB23: xor     edi, edi
 * 0000000140A0BB25: mov     rcx, [r10]
 * 0000000140A0BB28: mov     eax, r11d
 * 0000000140A0BB2B: sub     rcx, rax
 * 0000000140A0BB2E: sub     rcx, rsi
 * 0000000140A0BB31: bt      r14d, 9
 * 0000000140A0BB36: jb      loc_140A0C074
 * 0000000140A0BB3C: mov     rax, r13
 * 0000000140A0BB3F: xor     rax, rcx
 * 0000000140A0BB42: mov     ecx, r15d
 * 0000000140A0BB45: bswap   rax
 * 0000000140A0BB48: xor     rax, r9
 * 0000000140A0BB4B: ror     rax, cl
 * 0000000140A0BB4E: xor     rax, r15
 * 0000000140A0BB51: jmp     loc_140A0C07A
 * 0000000140A0BB56: mov     ecx, [rsi+954h]
 * 0000000140A0BB5C: mov     r12d, [rsi+0A2Ch]
 * 0000000140A0BB63: mov     rax, [rsi+7C8h]
 * 0000000140A0BB6A: add     r12d, 0FFFFFF38h
 * 0000000140A0BB71: mov     [rbp+0BE0h+var_C28], ecx
 * 0000000140A0BB74: mov     rcx, [rsi+4E8h]
 * 0000000140A0BB7B: shr     r12d, 3
 * 0000000140A0BB7F: mov     [rsp+0CE0h+var_C88], rcx
 * 0000000140A0BB84: mov     rcx, [rsi+5C0h]
 * 0000000140A0BB8B: mov     [rbp+0BE0h+var_C30], rcx
 * 0000000140A0BB8F: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A0BB93: mov     [rbp+0BE0h+var_C38], r12d
 * 0000000140A0BB97: mov     [rsi+0C4h], r12d
 * 0000000140A0BB9E: rdtsc
 * 0000000140A0BBA0: shl     rdx, 20h
 * 0000000140A0BBA4: or      rax, rdx
 * 0000000140A0BBA7: mov     rcx, rax
 * 0000000140A0BBAA: ror     rax, 3
 * 0000000140A0BBAE: xor     rcx, rax
 * 0000000140A0BBB1: mov     rax, r9
 * 0000000140A0BBB4: mul     rcx
 * 0000000140A0BBB7: mov     rbx, rdx
 * 0000000140A0BBBA: mov     [rbp+0BE0h+var_440], rdx
 * 0000000140A0BBC1: xor     rbx, rax
 * 0000000140A0BBC4: jz      short loc_140A0BB9E
 * 0000000140A0BBC6: mov     rax, [rsi+7B8h]
 * 0000000140A0BBCD: lea     r14, [rsi+798h]
 * 0000000140A0BBD4: mov     r11d, 20h ; ' '
 * 0000000140A0BBDA: mov     [rbp+0BE0h+var_BD0], rax
 * 0000000140A0BBDE: mov     eax, [rsi+828h]
 * 0000000140A0BBE4: lea     rdx, [rbp+0BE0h+var_90]
 * 0000000140A0BBEB: mov     [rbp+0BE0h+var_BE8], eax
 * 0000000140A0BBEE: mov     r8d, r11d
 * 0000000140A0BBF1: mov     rcx, r14
 * 0000000140A0BBF4: lea     r10d, [r11-1Ch]
 * 0000000140A0BBF8: mov     r9d, r10d
 * 0000000140A0BBFB: mov     rax, [rcx]
 * 0000000140A0BBFE: add     r8d, 0FFFFFFF8h
 * 0000000140A0BC02: mov     [rdx], rax
 * 0000000140A0BC05: add     rcx, 8
 * 0000000140A0BC09: add     rdx, 8
 * 0000000140A0BC0D: sub     r9, r15
 * 0000000140A0BC10: jnz     short loc_140A0BBFB
 * 0000000140A0BC12: test    r8d, r8d
 * 0000000140A0BC15: jz      short loc_140A0BC2F
 * 0000000140A0BC17: mov     r9d, 0FFFFFFFFh
 * 0000000140A0BC1D: mov     al, [rcx]
 * 0000000140A0BC1F: add     rcx, r15
 * 0000000140A0BC22: mov     [rdx], al
 * 0000000140A0BC24: add     rdx, r15
 * 0000000140A0BC27: add     r8d, r9d
 * 0000000140A0BC2A: jnz     short loc_140A0BC1D
 * 0000000140A0BC2C: xor     r9d, r9d
 * 0000000140A0BC2F: mov     [rsi+7B8h], r9
 * 0000000140A0BC36: mov     ecx, r11d
 * 0000000140A0BC39: mov     [rsi+828h], r9d
 * 0000000140A0BC40: mov     rax, r14
 * 0000000140A0BC43: mov     rdx, r10
 * 0000000140A0BC46: mov     [rax], r9
 * 0000000140A0BC49: add     ecx, 0FFFFFFF8h
 * 0000000140A0BC4C: add     rax, 8
 * 0000000140A0BC50: sub     rdx, r15
 * 0000000140A0BC53: jnz     short loc_140A0BC46
 * 0000000140A0BC55: test    ecx, ecx
 * 0000000140A0BC57: jz      short loc_140A0BC68
 * 0000000140A0BC59: mov     edx, 0FFFFFFFFh
 * 0000000140A0BC5E: mov     [rax], r9b
 * 0000000140A0BC61: add     rax, r15
 * 0000000140A0BC64: add     ecx, edx
 * 0000000140A0BC66: jnz     short loc_140A0BC5E
 * 0000000140A0BC68: mov     eax, [rsi+7E4h]
 * 0000000140A0BC6E: mov     r9, rsi
 * 0000000140A0BC71: add     [rsi+828h], eax
 * 0000000140A0BC77: mov     r11d, [rsi+7E4h]
 * 0000000140A0BC7E: mov     r10d, [rsi+814h]
 * 0000000140A0BC85: mov     r8, [rsi+818h]
 * 0000000140A0BC8C: lea     rcx, [rsi+r11]
 * 0000000140A0BC90: cmp     rsi, rcx
 * 0000000140A0BC93: jnb     short loc_140A0BCA8
 * 0000000140A0BC95: mov     rax, rsi
 * 0000000140A0BC98: mov     edx, 40h ; '@'
 * 0000000140A0BC9D: prefetchnta byte ptr [rax]
 * 0000000140A0BCA0: add     rax, rdx
 * 0000000140A0BCA3: cmp     rax, rcx
 * 0000000140A0BCA6: jb      short loc_140A0BC9D
 * 0000000140A0BCA8: mov     r15d, r11d
 * 0000000140A0BCAB: shr     r15d, 7
 * 0000000140A0BCAF: test    r15d, r15d
 * 0000000140A0BCB2: jz      loc_140A0BD3B
 * 0000000140A0BCB8: mov     rdi, r8
 * 0000000140A0BCBB: mov     r13d, 1
 * 0000000140A0BCC1: mov     r12d, 0FFFFFFFFh
 * 0000000140A0BCC7: mov     r14, 7010008004002001h
 * 0000000140A0BCD1: mov     eax, 8
 * 0000000140A0BCD6: xor     r8, [r9]
 * 0000000140A0BCD9: mov     ecx, r10d
 * 0000000140A0BCDC: rol     r8, cl
 * 0000000140A0BCDF: xor     r8, [r9+8]
 * 0000000140A0BCE3: add     r9, 10h
 * 0000000140A0BCE7: rol     r8, cl
 * 0000000140A0BCEA: sub     rax, r13
 * 0000000140A0BCED: jnz     short loc_140A0BCD6
 * 0000000140A0BCEF: mov     rcx, r9
 * 0000000140A0BCF2: sub     rcx, rsi
 * 0000000140A0BCF5: xor     rcx, rdi
 * 0000000140A0BCF8: mov     rax, rcx
 * 0000000140A0BCFB: rol     rax, 11h
 * 0000000140A0BCFF: xor     rcx, rax
 * 0000000140A0BD02: mov     rax, r14
 * 0000000140A0BD05: mul     rcx
 * 0000000140A0BD08: xor     r10d, eax
 * 0000000140A0BD0B: mov     [rbp+0BE0h+var_438], rdx
 * 0000000140A0BD12: xor     r10d, edx
 * 0000000140A0BD15: and     r10d, 3Fh
 * 0000000140A0BD19: cmovz   r10d, r13d
 * 0000000140A0BD1D: add     r15d, r12d
 * 0000000140A0BD20: jnz     short loc_140A0BCD1
 * 0000000140A0BD22: mov     r12d, [rbp+0BE0h+var_C38]
 * 0000000140A0BD26: lea     r14, [rsi+798h]
 * 0000000140A0BD2D: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0BD34: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0BD3B: and     r11d, 7Fh
 * 0000000140A0BD3F: mov     r15d, 1
 * 0000000140A0BD45: cmp     r11d, 8
 * 0000000140A0BD49: jb      short loc_140A0BD68
 * 0000000140A0BD4B: mov     eax, r11d
 * 0000000140A0BD4E: shr     rax, 3
 * 0000000140A0BD52: xor     r8, [r9]
 * 0000000140A0BD55: mov     ecx, r10d
 * 0000000140A0BD58: rol     r8, cl
 * 0000000140A0BD5B: add     r9, 8
 * 0000000140A0BD5F: add     r11d, 0FFFFFFF8h
 * 0000000140A0BD63: sub     rax, r15
 * 0000000140A0BD66: jnz     short loc_140A0BD52
 * 0000000140A0BD68: test    r11d, r11d
 * 0000000140A0BD6B: jz      short loc_140A0BD8F
 * 0000000140A0BD6D: mov     r13d, 0FFFFFFFFh
 * 0000000140A0BD73: movzx   eax, byte ptr [r9]
 * 0000000140A0BD77: mov     ecx, r10d
 * 0000000140A0BD7A: xor     r8, rax
 * 0000000140A0BD7D: add     r9, r15
 * 0000000140A0BD80: rol     r8, cl
 * 0000000140A0BD83: add     r11d, r13d
 * 0000000140A0BD86: jnz     short loc_140A0BD73
 * 0000000140A0BD88: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0BD8F: mov     rax, [rbp+0BE0h+var_BD0]
 * 0000000140A0BD93: lea     rcx, [rbp+0BE0h+var_90]
 * 0000000140A0BD9A: mov     r9d, 4
 * 0000000140A0BDA0: mov     [rsi+7B8h], rax
 * 0000000140A0BDA7: mov     eax, [rbp+0BE0h+var_BE8]
 * 0000000140A0BDAA: mov     edx, r9d
 * 0000000140A0BDAD: add     [rsi+828h], eax
 * 0000000140A0BDB3: lea     r10d, [r9+1Ch]
 * 0000000140A0BDB7: mov     rax, [rcx]
 * 0000000140A0BDBA: add     r10d, 0FFFFFFF8h
 * 0000000140A0BDBE: mov     [r14], rax
 * 0000000140A0BDC1: add     rcx, 8
 * 0000000140A0BDC5: add     r14, 8
 * 0000000140A0BDC9: sub     rdx, r15
 * 0000000140A0BDCC: jnz     short loc_140A0BDB7
 * 0000000140A0BDCE: xor     r11d, r11d
 * 0000000140A0BDD1: test    r10d, r10d
 * 0000000140A0BDD4: jz      short loc_140A0BDEF
 * 0000000140A0BDD6: mov     r11d, 0FFFFFFFFh
 * 0000000140A0BDDC: mov     al, [rcx]
 * 0000000140A0BDDE: add     rcx, r15
 * 0000000140A0BDE1: mov     [r14], al
 * 0000000140A0BDE4: add     r14, r15
 * 0000000140A0BDE7: add     r10d, r11d
 * 0000000140A0BDEA: jnz     short loc_140A0BDDC
 * 0000000140A0BDEC: xor     r11d, r11d
 * 0000000140A0BDEF: mov     [rsi+7B8h], r8
 * 0000000140A0BDF6: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A0BE00: jnz     loc_140A0C037
 * 0000000140A0BE06: mov     eax, r11d
 * 0000000140A0BE09: mov     rcx, rsi
 * 0000000140A0BE0C: mov     r11d, 19h
 * 0000000140A0BE12: xor     [rcx], rbx
 * 0000000140A0BE15: add     eax, r15d
 * 0000000140A0BE18: lea     rcx, [rcx+8]
 * 0000000140A0BE1C: cmp     eax, r11d
 * 0000000140A0BE1F: jb      short loc_140A0BE12
 * 0000000140A0BE21: xor     r15d, r15d
 * 0000000140A0BE24: mov     [rbp+0BE0h+var_9F8], rbx
 * 0000000140A0BE2B: mov     r8d, r12d
 * 0000000140A0BE2E: lea     r10d, [r15+1]
 * 0000000140A0BE32: test    r12d, r12d
 * 0000000140A0BE35: jz      short loc_140A0BE71
 * 0000000140A0BE37: mov     edx, r12d
 * 0000000140A0BE3A: dec     rdx
 * 0000000140A0BE3D: lea     rdx, [rcx+rdx*8]
 * 0000000140A0BE41: xor     [rdx], rbx
 * 0000000140A0BE44: lea     rax, [rbp+0BE0h+var_9F8]
 * 0000000140A0BE4B: mov     ecx, r8d
 * 0000000140A0BE4E: lea     rdx, [rdx-8]
 * 0000000140A0BE52: ror     rbx, cl
 * 0000000140A0BE55: mov     [rbp+0BE0h+var_9F8], rbx
 * 0000000140A0BE5C: and     ebx, 3Fh
 * 0000000140A0BE5F: btc     [rax], rbx
 * 0000000140A0BE63: sub     r8d, r10d
 * 0000000140A0BE66: jz      short loc_140A0BE71
 * 0000000140A0BE68: mov     rbx, [rbp+0BE0h+var_9F8]
 * 0000000140A0BE6F: jmp     short loc_140A0BE41
 * 0000000140A0BE71: bt      r13d, 13h
 * 0000000140A0BE76: jnb     short loc_140A0BEC3
 * 0000000140A0BE78: rdtsc
 * 0000000140A0BE7A: shl     rdx, 20h
 * 0000000140A0BE7E: or      rax, rdx
 * 0000000140A0BE81: mov     rcx, rax
 * 0000000140A0BE84: ror     rax, 3
 * 0000000140A0BE88: xor     rcx, rax
 * 0000000140A0BE8B: mov     rax, 7010008004002001h
 * 0000000140A0BE95: mul     rcx
 * 0000000140A0BE98: mov     rcx, rdx
 * 0000000140A0BE9B: mov     [rbp+0BE0h+var_430], rdx
 * 0000000140A0BEA2: xor     rcx, rax
 * 0000000140A0BEA5: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A0BEAF: mul     rcx
 * 0000000140A0BEB2: shr     rdx, 1
 * 0000000140A0BEB5: lea     rax, [rdx+rdx*2]
 * 0000000140A0BEB9: cmp     rcx, rax
 * 0000000140A0BEBC: jz      short loc_140A0BECE
 * 0000000140A0BEBE: jmp     loc_140A0C034
 * 0000000140A0BEC3: bt      r13d, 8
 * 0000000140A0BEC8: jb      loc_140A0C034
 * 0000000140A0BECE: mov     rdi, [rbp+0BE0h+var_C30]
 * 0000000140A0BED2: mov     eax, 2
 * 0000000140A0BED7: mov     [rbp+0BE0h+var_B5B], al
 * 0000000140A0BEDD: mov     ecx, esi
 * 0000000140A0BEDF: mov     eax, 0Ch
 * 0000000140A0BEE4: mov     [rbp+0BE0h+var_B5A], r9b
 * 0000000140A0BEEB: mov     [rbp+0BE0h+var_B5F], al
 * 0000000140A0BEF1: mov     r9, rsi
 * 0000000140A0BEF4: mov     eax, 0Fh
 * 0000000140A0BEF9: mov     [rbp+0BE0h+var_B60], r15b
 * 0000000140A0BF00: mov     r14d, r11d
 * 0000000140A0BF03: mov     [rbp+0BE0h+var_B5D], r10b
 * 0000000140A0BF0A: mov     r11d, r15d
 * 0000000140A0BF0D: mov     [rbp+0BE0h+var_B58], 3
 * 0000000140A0BF14: mov     r15d, [rbp+0BE0h+var_C28]
 * 0000000140A0BF18: mov     r10, rsi
 * 0000000140A0BF1B: lea     ebx, [rax+1]
 * 0000000140A0BF1E: mov     [rbp+0BE0h+var_B57], 5
 * 0000000140A0BF25: mov     [rbp+0BE0h+var_B54], 6
 * 0000000140A0BF2C: mov     [rbp+0BE0h+var_B59], 7
 * 0000000140A0BF33: mov     [rbp+0BE0h+var_B53], 8
 * 0000000140A0BF3A: mov     [rbp+0BE0h+var_B56], 9
 * 0000000140A0BF41: mov     [rbp+0BE0h+var_B52], 0Ah
 * 0000000140A0BF48: mov     [rbp+0BE0h+var_B5C], 0Bh
 * 0000000140A0BF4F: mov     [rbp+0BE0h+var_B51], 0Dh
 * 0000000140A0BF56: mov     [rbp+0BE0h+var_B55], 0Eh
 * 0000000140A0BF5D: mov     [rbp+0BE0h+var_B5E], al
 * 0000000140A0BF63: ror     r9, cl
 * 0000000140A0BF66: test    ebx, ebx
 * 0000000140A0BF68: jz      short loc_140A0BFA7
 * 0000000140A0BF6A: mov     rdx, [r10]
 * 0000000140A0BF6D: mov     r13d, 1
 * 0000000140A0BF73: mov     r8d, ebx
 * 0000000140A0BF76: lea     r12d, [r13+0Eh]
 * 0000000140A0BF7A: movzx   eax, byte ptr [r10]
 * 0000000140A0BF7E: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140A0BF82: and     rax, r12
 * 0000000140A0BF85: movzx   ecx, [rbp+rax+0BE0h+var_B60]
 * 0000000140A0BF8D: or      rdx, rcx
 * 0000000140A0BF90: ror     rdx, 4
 * 0000000140A0BF94: mov     [r10], rdx
 * 0000000140A0BF97: sub     r8, r13
 * 0000000140A0BF9A: jnz     short loc_140A0BF7A
 * 0000000140A0BF9C: mov     r12d, [rbp+0BE0h+var_C38]
 * 0000000140A0BFA0: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0BFA7: mov     rdx, [r10]
 * 0000000140A0BFAA: mov     eax, r11d
 * 0000000140A0BFAD: sub     rdx, rax
 * 0000000140A0BFB0: sub     rdx, rsi
 * 0000000140A0BFB3: bt      r13d, 9
 * 0000000140A0BFB8: jb      short loc_140A0BFCF
 * 0000000140A0BFBA: xor     rdx, [rsp+0CE0h+var_C88]
 * 0000000140A0BFBF: mov     ecx, edi
 * 0000000140A0BFC1: bswap   rdx
 * 0000000140A0BFC4: xor     rdx, r9
 * 0000000140A0BFC7: ror     rdx, cl
 * 0000000140A0BFCA: xor     rdx, rdi
 * 0000000140A0BFCD: jmp     short loc_140A0BFD2
 * 0000000140A0BFCF: xor     rdx, r9
 * 0000000140A0BFD2: mov     [r10], rdx
 * 0000000140A0BFD5: mov     ecx, edx
 * 0000000140A0BFD7: mov     r8d, edx
 * 0000000140A0BFDA: mov     eax, r11d
 * 0000000140A0BFDD: xor     r8d, 0EFFh
 * 0000000140A0BFE4: mov     edx, 0C8h
 * 0000000140A0BFE9: sub     edx, r11d
 * 0000000140A0BFEC: not     ecx
 * 0000000140A0BFEE: xor     rdx, rax
 * 0000000140A0BFF1: add     r10, 8
 * 0000000140A0BFF5: ror     rdx, cl
 * 0000000140A0BFF8: mov     cl, r8b
 * 0000000140A0BFFB: xor     r9, rdx
 * 0000000140A0BFFE: rol     r9, cl
 * 0000000140A0C001: add     r9, rsi
 * 0000000140A0C004: xor     r9, r15
 * 0000000140A0C007: inc     r11d
 * 0000000140A0C00A: cmp     r11d, 19h
 * 0000000140A0C00E: jnz     short loc_140A0C024
 * 0000000140A0C010: bt      r13d, 13h
 * 0000000140A0C015: lea     eax, [r11-19h]
 * 0000000140A0C019: lea     ebx, [r11-18h]
 * 0000000140A0C01D: cmovnb  eax, r12d
 * 0000000140A0C021: add     r14d, eax
 * 0000000140A0C024: cmp     r11d, r14d
 * 0000000140A0C027: jb      loc_140A0BF66
 * 0000000140A0C02D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0C034: xor     r11d, r11d
 * 0000000140A0C037: rdtsc
 * 0000000140A0C039: shl     rdx, 20h
 * 0000000140A0C03D: mov     r9, 7010008004002001h
 * 0000000140A0C047: or      rax, rdx
 * 0000000140A0C04A: mov     ebx, 1
 * 0000000140A0C04F: mov     rcx, rax
 * 0000000140A0C052: mov     [rbp+0BE0h+var_C38], ebx
 * 0000000140A0C055: ror     rax, 3
 * 0000000140A0C059: xor     rcx, rax
 * 0000000140A0C05C: mov     rax, r9
 * 0000000140A0C05F: mul     rcx
 * 0000000140A0C062: mov     r12, rax
 * 0000000140A0C065: mov     [rbp+0BE0h+var_428], rdx
 * 0000000140A0C06C: xor     r12, rdx
 * 0000000140A0C06F: jmp     loc_140A0C0FB
 * 0000000140A0C074: mov     rax, r9
 * 0000000140A0C077: xor     rax, rcx
 * 0000000140A0C07A: mov     [r10], rax
 * 0000000140A0C07D: mov     ecx, eax
 * 0000000140A0C07F: mov     r8d, eax
 * 0000000140A0C082: not     ecx
 * 0000000140A0C084: mov     eax, r11d
 * 0000000140A0C087: xor     r8d, 0EFFh
 * 0000000140A0C08E: mov     edx, 0C8h
 * 0000000140A0C093: add     r10, 8
 * 0000000140A0C097: sub     edx, r11d
 * 0000000140A0C09A: xor     rdx, rax
 * 0000000140A0C09D: mov     eax, 19h
 * 0000000140A0C0A2: ror     rdx, cl
 * 0000000140A0C0A5: mov     cl, r8b
 * 0000000140A0C0A8: xor     r9, rdx
 * 0000000140A0C0AB: rol     r9, cl
 * 0000000140A0C0AE: add     r9, rsi
 * 0000000140A0C0B1: lea     ecx, [rax-18h]
 * 0000000140A0C0B4: xor     r9, [rbp+0BE0h+arg_8]
 * 0000000140A0C0BB: inc     r11d
 * 0000000140A0C0BE: cmp     r11d, eax
 * 0000000140A0C0C1: cmovz   ebx, ecx
 * 0000000140A0C0C4: jb      loc_140A0BAF5
 * 0000000140A0C0CA: mov     r12, [rsp+0CE0h+var_C70]
 * 0000000140A0C0CF: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0C0D6: mov     rax, [rsi+268h]
 * 0000000140A0C0DD: lea     rcx, [rsi+800h]
 * 0000000140A0C0E4: call    KeGuardDispatchICall
 * 0000000140A0C0E9: xor     r11d, r11d
 * 0000000140A0C0EC: mov     r9, 7010008004002001h
 * 0000000140A0C0F6: mov     ebx, 1
 * 0000000140A0C0FB: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A0C102: test    dword ptr [r13+990h], 10000000h
 * 0000000140A0C10D: mov     r15, [r13+7D8h]
 * 0000000140A0C114: jz      short loc_140A0C14B
 * 0000000140A0C116: rdtsc
 * 0000000140A0C118: shl     rdx, 20h
 * 0000000140A0C11C: or      rax, rdx
 * 0000000140A0C11F: mov     rcx, rax
 * 0000000140A0C122: ror     rax, 3
 * 0000000140A0C126: xor     rcx, rax
 * 0000000140A0C129: mov     rax, r9
 * 0000000140A0C12C: mul     rcx
 * 0000000140A0C12F: mov     r15, rdx
 * 0000000140A0C132: mov     [rbp+0BE0h+var_420], rdx
 * 0000000140A0C139: xor     r15, rax
 * 0000000140A0C13C: and     r15, 0Fh
 * 0000000140A0C140: shl     r15, 4
 * 0000000140A0C144: add     r15, [r13+5D0h]
 * 0000000140A0C14B: mov     r8d, 28h ; '('
 * 0000000140A0C151: lea     r14, [r13+8F8h]
 * 0000000140A0C158: mov     rcx, r14
 * 0000000140A0C15B: lea     rdx, [rbp+0BE0h+var_730]
 * 0000000140A0C162: lea     r9d, [r8-23h]
 * 0000000140A0C166: mov     rax, [rcx]
 * 0000000140A0C169: add     r8d, 0FFFFFFF8h
 * 0000000140A0C16D: mov     [rdx], rax
 * 0000000140A0C170: add     rcx, 8
 * 0000000140A0C174: add     rdx, 8
 * 0000000140A0C178: sub     r9, rbx
 * 0000000140A0C17B: jnz     short loc_140A0C166
 * 0000000140A0C17D: test    r8d, r8d
 * 0000000140A0C180: jz      short loc_140A0C19A
 * 0000000140A0C182: mov     r11d, 0FFFFFFFFh
 * 0000000140A0C188: mov     al, [rcx]
 * 0000000140A0C18A: add     rcx, rbx
 * 0000000140A0C18D: mov     [rdx], al
 * 0000000140A0C18F: add     rdx, rbx
 * 0000000140A0C192: add     r8d, r11d
 * 0000000140A0C195: jnz     short loc_140A0C188
 * 0000000140A0C197: xor     r11d, r11d
 * 0000000140A0C19A: mov     eax, [r13+990h]
 * 0000000140A0C1A1: mov     ecx, 8000h
 * 0000000140A0C1A6: test    ecx, eax
 * 0000000140A0C1A8: jnz     short loc_140A0C1B3
 * 0000000140A0C1AA: cmp     [r14], r11d
 * 0000000140A0C1AD: jnz     loc_140A0C817
 * 0000000140A0C1B3: bt      eax, 1Eh
 * 0000000140A0C1B7: jb      loc_140A0CA08
 * 0000000140A0C1BD: mov     al, [r13+920h]
 * 0000000140A0C1C4: mov     r8, r12
 * 0000000140A0C1C7: sub     al, bl
 * 0000000140A0C1C9: xor     r8, rsi
 * 0000000140A0C1CC: movzx   r10d, al
 * 0000000140A0C1D0: mov     r11d, 3Fh ; '?'
 * 0000000140A0C1D6: sub     r11d, r10d
 * 0000000140A0C1D9: rdtsc
 * 0000000140A0C1DB: shl     rdx, 20h
 * 0000000140A0C1DF: mov     rbx, 7010008004002001h
 * 0000000140A0C1E9: or      rax, rdx
 * 0000000140A0C1EC: mov     rcx, rax
 * 0000000140A0C1EF: ror     rax, 3
 * 0000000140A0C1F3: xor     rcx, rax
 * 0000000140A0C1F6: mov     rax, rbx
 * 0000000140A0C1F9: mul     rcx
 * 0000000140A0C1FC: mov     [rbp+0BE0h+var_418], rdx
 * 0000000140A0C203: xor     rax, rdx
 * 0000000140A0C206: xor     edx, edx
 * 0000000140A0C208: div     r11
 * 0000000140A0C20B: lea     r9d, [r10+rdx]
 * 0000000140A0C20F: rdtsc
 * 0000000140A0C211: shl     rdx, 20h
 * 0000000140A0C215: or      rax, rdx
 * 0000000140A0C218: mov     rcx, rax
 * 0000000140A0C21B: ror     rax, 3
 * 0000000140A0C21F: xor     rcx, rax
 * 0000000140A0C222: mov     rax, rbx
 * 0000000140A0C225: mul     rcx
 * 0000000140A0C228: xor     rax, rdx
 * 0000000140A0C22B: mov     [rbp+0BE0h+var_410], rdx
 * 0000000140A0C232: xor     edx, edx
 * 0000000140A0C234: div     r11
 * 0000000140A0C237: add     edx, r10d
 * 0000000140A0C23A: cmp     edx, r9d
 * 0000000140A0C23D: jz      short loc_140A0C20F
 * 0000000140A0C23F: mov     rbx, [r13+790h]
 * 0000000140A0C246: xor     r11d, r11d
 * 0000000140A0C249: mov     rsi, [r13+788h]
 * 0000000140A0C250: mov     eax, r9d
 * 0000000140A0C253: bts     r8, rax
 * 0000000140A0C257: mov     eax, edx
 * 0000000140A0C259: btr     r8, rax
 * 0000000140A0C25D: cmp     dword ptr [r13+924h], 3
 * 0000000140A0C265: jnz     loc_140A0C3FD
 * 0000000140A0C26B: mov     r13, [rbp+0BE0h+var_C40]
 * 0000000140A0C26F: test    r13, r13
 * 0000000140A0C272: jz      loc_140A0C3F6
 * 0000000140A0C278: mov     rcx, [rbp+0BE0h+arg_0]
 * 0000000140A0C27F: lea     edx, [r11+1]
 * 0000000140A0C283: mov     rax, [rcx+370h]
 * 0000000140A0C28A: mov     byte ptr [rbx], 13h
 * 0000000140A0C28D: mov     [rbx+1], dl
 * 0000000140A0C290: mov     [rbx+2], r11w
 * 0000000140A0C295: mov     [rbx+18h], rax
 * 0000000140A0C299: mov     [rbx+20h], r13
 * 0000000140A0C29D: mov     [rbx+38h], r11
 * 0000000140A0C2A1: mov     [rbx+10h], r11
 * 0000000140A0C2A5: mov     [rbx+28h], r8
 * 0000000140A0C2A9: mov     rax, [rcx+360h]
 * 0000000140A0C2B0: mov     rcx, [r13+8]
 * 0000000140A0C2B4: mov     r8, [r13+0]
 * 0000000140A0C2B8: mov     edx, [r13+10h]
 * 0000000140A0C2BC: call    KeGuardDispatchICall
 * 0000000140A0C2C1: mov     r9, [r13+0]
 * 0000000140A0C2C5: mov     rcx, r13
 * 0000000140A0C2C8: rol     rcx, 11h
 * 0000000140A0C2CC: mov     rax, 7010008004002001h
 * 0000000140A0C2D6: xor     rcx, r13
 * 0000000140A0C2D9: mov     r10d, 4
 * 0000000140A0C2DF: mul     rcx
 * 0000000140A0C2E2: mov     [rbp+0BE0h+var_408], rdx
 * 0000000140A0C2E9: xor     rdx, rax
 * 0000000140A0C2EC: lea     rax, [r13+18h]
 * 0000000140A0C2F0: mov     r8, rdx
 * 0000000140A0C2F3: xor     r11d, r11d
 * 0000000140A0C2F6: lea     r13d, [r10-3]
 * 0000000140A0C2FA: xor     [rax], r8
 * 0000000140A0C2FD: mov     ecx, r10d
 * 0000000140A0C300: rol     r8, cl
 * 0000000140A0C303: lea     rax, [rax-8]
 * 0000000140A0C307: sub     r10d, r13d
 * 0000000140A0C30A: jnz     short loc_140A0C2FA
 * 0000000140A0C30C: and     dl, 0Fh
 * 0000000140A0C30F: cmp     dl, 7
 * 0000000140A0C312: jnb     short loc_140A0C381
 * 0000000140A0C314: mov     rcx, r9
 * 0000000140A0C317: mov     rax, 7010008004002001h
 * 0000000140A0C321: rol     rcx, 11h
 * 0000000140A0C325: mov     r10d, 6
 * 0000000140A0C32B: xor     rcx, r9
 * 0000000140A0C32E: mul     rcx
 * 0000000140A0C331: mov     [rbp+0BE0h+var_400], rdx
 * 0000000140A0C338: xor     rdx, rax
 * 0000000140A0C33B: add     r8, rdx
 * 0000000140A0C33E: lea     rax, [r9+28h]
 * 0000000140A0C342: movsx   edx, word ptr [r9+8]
 * 0000000140A0C347: xor     [rax], r8
 * 0000000140A0C34A: mov     ecx, r10d
 * 0000000140A0C34D: rol     r8, cl
 * 0000000140A0C350: lea     rax, [rax-8]
 * 0000000140A0C354: sub     r10d, r13d
 * 0000000140A0C357: jnz     short loc_140A0C347
 * 0000000140A0C359: sub     rdx, 30h ; '0'
 * 0000000140A0C35D: shr     rdx, 3
 * 0000000140A0C361: test    edx, edx
 * 0000000140A0C363: jz      short loc_140A0C381
 * 0000000140A0C365: movsxd  r10, edx
 * 0000000140A0C368: add     r10, 5
 * 0000000140A0C36C: lea     r10, [r9+r10*8]
 * 0000000140A0C370: xor     [r10], r8
 * 0000000140A0C373: mov     ecx, edx
 * 0000000140A0C375: rol     r8, cl
 * 0000000140A0C378: lea     r10, [r10-8]
 * 0000000140A0C37C: sub     edx, r13d
 * 0000000140A0C37F: jnz     short loc_140A0C370
 * 0000000140A0C381: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A0C388: mov     [rbx+40h], r12
 * 0000000140A0C38C: mov     r12, 7010008004002001h
 * 0000000140A0C396: test    dword ptr [r13+990h], 100h
 * 0000000140A0C3A1: jz      short loc_140A0C422
 * 0000000140A0C3A3: lea     r9, [r15-48h]
 * 0000000140A0C3A7: mov     [r9+40h], rbx
 * 0000000140A0C3AB: rdtsc
 * 0000000140A0C3AD: shl     rdx, 20h
 * 0000000140A0C3B1: mov     r8d, 19h
 * 0000000140A0C3B7: or      rax, rdx
 * 0000000140A0C3BA: mov     rcx, rax
 * 0000000140A0C3BD: ror     rax, 3
 * 0000000140A0C3C1: xor     rcx, rax
 * 0000000140A0C3C4: mov     rax, r12
 * 0000000140A0C3C7: mul     rcx
 * 0000000140A0C3CA: lea     r15d, [r8-18h]
 * 0000000140A0C3CE: mov     [rbp+0BE0h+var_3F8], rdx
 * 0000000140A0C3D5: xor     rdx, rax
 * 0000000140A0C3D8: lea     rax, [r9+48h]
 * 0000000140A0C3DC: xor     [rax], rdx
 * 0000000140A0C3DF: lea     rax, [rax+8]
 * 0000000140A0C3E3: sub     r8, r15
 * 0000000140A0C3E6: jnz     short loc_140A0C3DC
 * 0000000140A0C3E8: mov     dword ptr [r9+48h], 48513148h
 * 0000000140A0C3F0: mov     [r9+20h], rdx
 * 0000000140A0C3F4: jmp     short loc_140A0C42B
 * 0000000140A0C3F6: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A0C3FD: mov     byte ptr [rbx], 13h
 * 0000000140A0C400: mov     eax, 1
 * 0000000140A0C405: mov     [rbx+1], al
 * 0000000140A0C408: mov     [rbx+2], r11w
 * 0000000140A0C40D: mov     [rbx+18h], r15
 * 0000000140A0C411: mov     [rbx+20h], r8
 * 0000000140A0C415: mov     [rbx+38h], r11
 * 0000000140A0C419: mov     [rbx+10h], r11
 * 0000000140A0C41D: jmp     loc_140A0C388
 * 0000000140A0C422: mov     r9, rbx
 * 0000000140A0C425: mov     r15d, 1
 * 0000000140A0C42B: mov     r10, [r13+0A98h]
 * 0000000140A0C432: test    r10, r10
 * 0000000140A0C435: jz      loc_140A0C4CA
 * 0000000140A0C43B: mov     r10, [r10+20h]
 * 0000000140A0C43F: mov     eax, 0E0E20100h
 * 0000000140A0C444: mov     rcx, r10
 * 0000000140A0C447: xor     rcx, rax
 * 0000000140A0C44A: shr     rcx, 4
 * 0000000140A0C44E: xor     rcx, r10
 * 0000000140A0C451: shr     rcx, 4
 * 0000000140A0C455: xor     rcx, [r13+590h]
 * 0000000140A0C45C: mov     al, cl
 * 0000000140A0C45E: mov     r8, rcx
 * 0000000140A0C461: and     al, 0Fh
 * 0000000140A0C463: movzx   r11d, al
 * 0000000140A0C467: cmovz   r11d, r15d
 * 0000000140A0C46B: xor     eax, eax
 * 0000000140A0C46D: mov     edx, eax
 * 0000000140A0C46F: test    r11b, r11b
 * 0000000140A0C472: jz      short loc_140A0C4AB
 * 0000000140A0C474: lea     r12d, [rax+0Fh]
 * 0000000140A0C478: mov     rdx, rcx
 * 0000000140A0C47B: and     rdx, r12
 * 0000000140A0C47E: add     rdx, r10
 * 0000000140A0C481: mov     r10, [rdx]
 * 0000000140A0C484: mov     rax, r10
 * 0000000140A0C487: xor     rax, 1DFE00h
 * 0000000140A0C48D: shr     rax, 4
 * 0000000140A0C491: xor     rax, r10
 * 0000000140A0C494: shr     rax, 4
 * 0000000140A0C498: xor     rcx, rax
 * 0000000140A0C49B: add     r11b, 0FFh
 * 0000000140A0C49F: jnz     short loc_140A0C478
 * 0000000140A0C4A1: mov     r12, 7010008004002001h
 * 0000000140A0C4AB: mov     rax, r8
 * 0000000140A0C4AE: xor     r11d, r11d
 * 0000000140A0C4B1: xor     r8, r9
 * 0000000140A0C4B4: and     eax, 1000h
 * 0000000140A0C4B9: test    rax, rax
 * 0000000140A0C4BC: cmovz   r8, r9
 * 0000000140A0C4C0: mov     [rdx], r8
 * 0000000140A0C4C3: mov     r9, [r13+0A98h]
 * 0000000140A0C4CA: lock or [rsp+0CE0h+var_CE0], r11d
 * 0000000140A0C4CF: mov     ecx, [r13+838h]
 * 0000000140A0C4D6: test    ecx, ecx
 * 0000000140A0C4D8: jz      loc_140A0C767
 * 0000000140A0C4DE: sub     ecx, 1
 * 0000000140A0C4E1: jz      loc_140A0C750
 * 0000000140A0C4E7: sub     ecx, 1
 * 0000000140A0C4EA: jz      loc_140A0C73D
 * 0000000140A0C4F0: sub     ecx, 1
 * 0000000140A0C4F3: jz      loc_140A0C681
 * 0000000140A0C4F9: cmp     ecx, 1
 * 0000000140A0C4FC: jz      loc_140A0C583
 * 0000000140A0C502: mov     r8, [r13+998h]
 * 0000000140A0C509: mov     [r8+48h], r9
 * 0000000140A0C50D: lock or [rsp+0CE0h+var_CE0], r11d
 * 0000000140A0C512: rdtsc
 * 0000000140A0C514: shl     rdx, 20h
 * 0000000140A0C518: or      rax, rdx
 * 0000000140A0C51B: mov     rcx, rax
 * 0000000140A0C51E: mov     rdx, rax
 * 0000000140A0C521: ror     rcx, 3
 * 0000000140A0C525: mov     rax, r12
 * 0000000140A0C528: xor     rdx, rcx
 * 0000000140A0C52B: mul     rdx
 * 0000000140A0C52E: mov     rcx, rdx
 * 0000000140A0C531: mov     [rbp+0BE0h+var_3F0], rdx
 * 0000000140A0C538: xor     rcx, rax
 * 0000000140A0C53B: mov     rax, 0ABCC77118461CEFDh
 * 0000000140A0C545: mul     rcx
 * 0000000140A0C548: shr     rdx, 1Ah
 * 0000000140A0C54C: imul    rax, rdx, 5F5E100h
 * 0000000140A0C553: sub     rcx, rax
 * 0000000140A0C556: mov     rax, 0D6BF94D5E57A42BDh
 * 0000000140A0C560: add     rcx, 47868C00h
 * 0000000140A0C567: imul    rcx
 * 0000000140A0C56A: add     rdx, rcx
 * 0000000140A0C56D: sar     rdx, 17h
 * 0000000140A0C571: mov     rax, rdx
 * 0000000140A0C574: shr     rax, 3Fh
 * 0000000140A0C578: add     rdx, rax
 * 0000000140A0C57B: mov     [r8], edx
 * 0000000140A0C57E: jmp     loc_140A0C812
 * 0000000140A0C583: mov     r8, [r13+9E0h]
 * 0000000140A0C58A: xor     r9d, r9d
 * 0000000140A0C58D: mov     rcx, [r13+9F0h]
 * 0000000140A0C594: mov     rdx, rbx
 * 0000000140A0C597: mov     rax, [r13+9E8h]
 * 0000000140A0C59E: mov     rdi, [r13+998h]
 * 0000000140A0C5A5: mov     byte ptr [r8], 12h
 * 0000000140A0C5A9: mov     byte ptr [r8+2], 58h ; 'X'
 * 0000000140A0C5AE: mov     [r8+50h], r11b
 * 0000000140A0C5B2: mov     [r8+8], rdi
 * 0000000140A0C5B6: mov     [r8+20h], rax
 * 0000000140A0C5BA: mov     [r8+28h], r11
 * 0000000140A0C5BE: mov     [r8+30h], rcx
 * 0000000140A0C5C2: mov     [r8+51h], r11b
 * 0000000140A0C5C6: mov     [r8+38h], r11
 * 0000000140A0C5CA: mov     [r8+52h], r11b
 * 0000000140A0C5CE: xor     r8d, r8d
 * 0000000140A0C5D1: mov     rax, [r13+2C0h]
 * 0000000140A0C5D8: mov     rcx, [r13+9E0h]
 * 0000000140A0C5DF: call    KeGuardDispatchICall
 * 0000000140A0C5E4: xor     r11d, r11d
 * 0000000140A0C5E7: test    al, al
 * 0000000140A0C5E9: jnz     loc_140A0C812
 * 0000000140A0C5EF: cmp     [r14], r11d
 * 0000000140A0C5F2: jnz     short loc_140A0C631
 * 0000000140A0C5F4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0C5FE: xor     edx, edx
 * 0000000140A0C600: add     rax, r13
 * 0000000140A0C603: mov     rcx, r13
 * 0000000140A0C606: mov     [r13+900h], rax
 * 0000000140A0C60D: mov     [r13+908h], r11
 * 0000000140A0C614: mov     qword ptr [r13+910h], 104h
 * 0000000140A0C61F: mov     [r13+918h], rdi
 * 0000000140A0C626: mov     [r14], r15d
 * 0000000140A0C629: call    $$b8
 * 0000000140A0C62E: xor     r11d, r11d
 * 0000000140A0C631: mov     edx, 28h ; '('
 * 0000000140A0C636: lea     rcx, [rbp+0BE0h+var_730]
 * 0000000140A0C63D: lea     r13d, [rdx-23h]
 * 0000000140A0C641: mov     rax, [r14]
 * 0000000140A0C644: add     edx, 0FFFFFFF8h
 * 0000000140A0C647: mov     [rcx], rax
 * 0000000140A0C64A: add     r14, 8
 * 0000000140A0C64E: add     rcx, 8
 * 0000000140A0C652: sub     r13, r15
 * 0000000140A0C655: jnz     short loc_140A0C641
 * 0000000140A0C657: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A0C65E: test    edx, edx
 * 0000000140A0C660: jz      loc_140A0C812
 * 0000000140A0C666: mov     r11d, 0FFFFFFFFh
 * 0000000140A0C66C: mov     al, [r14]
 * 0000000140A0C66F: add     r14, r15
 * 0000000140A0C672: mov     [rcx], al
 * 0000000140A0C674: add     rcx, r15
 * 0000000140A0C677: add     edx, r11d
 * 0000000140A0C67A: jnz     short loc_140A0C66C
 * 0000000140A0C67C: jmp     loc_140A0C80F
 * 0000000140A0C681: mov     rdi, [r13+998h]
 * 0000000140A0C688: mov     rax, [r13+698h]
 * 0000000140A0C68F: mov     rcx, [rdi+rax]
 * 0000000140A0C693: test    rcx, rcx
 * 0000000140A0C696: jz      loc_140A0C728
 * 0000000140A0C69C: cmp     [r14], r11d
 * 0000000140A0C69F: jnz     short loc_140A0C6DE
 * 0000000140A0C6A1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0C6AB: xor     edx, edx
 * 0000000140A0C6AD: add     rax, r13
 * 0000000140A0C6B0: mov     [r13+900h], rax
 * 0000000140A0C6B7: mov     [r13+908h], r11
 * 0000000140A0C6BE: mov     qword ptr [r13+910h], 104h
 * 0000000140A0C6C9: mov     [r13+918h], rcx
 * 0000000140A0C6D0: mov     rcx, r13
 * 0000000140A0C6D3: mov     [r14], r15d
 * 0000000140A0C6D6: call    $$b8
 * 0000000140A0C6DB: xor     r11d, r11d
 * 0000000140A0C6DE: mov     edx, 28h ; '('
 * 0000000140A0C6E3: lea     rcx, [rbp+0BE0h+var_730]
 * 0000000140A0C6EA: lea     r13d, [rdx-23h]
 * 0000000140A0C6EE: mov     rax, [r14]
 * 0000000140A0C6F1: add     edx, 0FFFFFFF8h
 * 0000000140A0C6F4: mov     [rcx], rax
 * 0000000140A0C6F7: add     r14, 8
 * 0000000140A0C6FB: add     rcx, 8
 * 0000000140A0C6FF: sub     r13, r15
 * 0000000140A0C702: jnz     short loc_140A0C6EE
 * 0000000140A0C704: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A0C70B: test    edx, edx
 * 0000000140A0C70D: jz      short loc_140A0C728
 * 0000000140A0C70F: mov     r11d, 0FFFFFFFFh
 * 0000000140A0C715: mov     al, [r14]
 * 0000000140A0C718: add     r14, r15
 * 0000000140A0C71B: mov     [rcx], al
 * 0000000140A0C71D: add     rcx, r15
 * 0000000140A0C720: add     edx, r11d
 * 0000000140A0C723: jnz     short loc_140A0C715
 * 0000000140A0C725: xor     r11d, r11d
 * 0000000140A0C728: lock or [rsp+0CE0h+var_CE0], r11d
 * 0000000140A0C72D: mov     rax, [r13+698h]
 * 0000000140A0C734: mov     [rdi+rax], rbx
 * 0000000140A0C738: jmp     loc_140A0C812
 * 0000000140A0C73D: mov     rax, [r13+7C0h]
 * 0000000140A0C744: mov     [rax+80h], r9
 * 0000000140A0C74B: jmp     loc_140A0C812
 * 0000000140A0C750: mov     rcx, [r13+7C0h]
 * 0000000140A0C757: mov     rax, [r13+630h]
 * 0000000140A0C75E: mov     [rcx+rax], r9
 * 0000000140A0C762: jmp     loc_140A0C812
 * 0000000140A0C767: rdtsc
 * 0000000140A0C769: shl     rdx, 20h
 * 0000000140A0C76D: or      rax, rdx
 * 0000000140A0C770: mov     rcx, rax
 * 0000000140A0C773: mov     rdx, rax
 * 0000000140A0C776: ror     rcx, 3
 * 0000000140A0C77A: mov     rax, r12
 * 0000000140A0C77D: xor     rdx, rcx
 * 0000000140A0C780: mul     rdx
 * 0000000140A0C783: mov     rcx, rdx
 * 0000000140A0C786: mov     [rbp+0BE0h+var_3E8], rdx
 * 0000000140A0C78D: xor     rcx, rax
 * 0000000140A0C790: mov     rax, 0ABCC77118461CEFDh
 * 0000000140A0C79A: mul     rcx
 * 0000000140A0C79D: shr     rdx, 1Ah
 * 0000000140A0C7A1: imul    rax, rdx, 5F5E100h
 * 0000000140A0C7A8: sub     rcx, rax
 * 0000000140A0C7AB: sub     rdi, rcx
 * 0000000140A0C7AE: rdtsc
 * 0000000140A0C7B0: shl     rdx, 20h
 * 0000000140A0C7B4: or      rax, rdx
 * 0000000140A0C7B7: mov     [rsp+0CE0h+BugCheckParameter4], r9
 * 0000000140A0C7BC: mov     rcx, rax
 * 0000000140A0C7BF: mov     rdx, rax
 * 0000000140A0C7C2: ror     rcx, 3
 * 0000000140A0C7C6: mov     rax, r12
 * 0000000140A0C7C9: xor     rdx, rcx
 * 0000000140A0C7CC: mov     rcx, rsi
 * 0000000140A0C7CF: mul     rdx
 * 0000000140A0C7D2: mov     r8, rdx
 * 0000000140A0C7D5: mov     [rbp+0BE0h+var_3E0], rdx
 * 0000000140A0C7DC: xor     r8, rax
 * 0000000140A0C7DF: mov     rax, 346DC5D63886594Bh
 * 0000000140A0C7E9: mul     r8
 * 0000000140A0C7EC: shr     rdx, 0Bh
 * 0000000140A0C7F0: imul    rax, rdx, 2710h
 * 0000000140A0C7F7: mov     rdx, rdi
 * 0000000140A0C7FA: sub     r8, rax
 * 0000000140A0C7FD: mov     rax, [r13+1D8h]
 * 0000000140A0C804: mov     r9d, r8d
 * 0000000140A0C807: xor     r8d, r8d
 * 0000000140A0C80A: call    KeGuardDispatchICall
 * 0000000140A0C80F: xor     r11d, r11d
 * 0000000140A0C812: mov     ecx, 8000h
 * 0000000140A0C817: cmp     [rbp+0BE0h+var_730], r11d
 * 0000000140A0C81E: jz      loc_140A0CA08
 * 0000000140A0C824: test    [r13+990h], ecx
 * 0000000140A0C82B: jnz     loc_140A0CA08
 * 0000000140A0C831: mov     r13, [rbp+0BE0h+var_718]
 * 0000000140A0C838: mov     rbx, [rbp+0BE0h+var_710]
 * 0000000140A0C83F: mov     rdi, [rbp+0BE0h+var_720]
 * 0000000140A0C846: mov     r14, [rbp+0BE0h+var_728]
 * 0000000140A0C84D: mov     rax, [rbp+0BE0h+arg_0]
 * 0000000140A0C854: mov     [rbp+0BE0h+arg_8], r13
 * 0000000140A0C85B: mov     [rsp+0CE0h+var_C70], rbx
 * 0000000140A0C860: mov     [rbp+0BE0h+var_BD0], rdi
 * 0000000140A0C864: mov     [rbp+0BE0h+var_C40], r14
 * 0000000140A0C868: mov     [rbp+0BE0h+var_BB8], rax
 * 0000000140A0C86C: mov     rax, cr8
 * 0000000140A0C870: mov     r8d, 2
 * 0000000140A0C876: cmp     al, r8b
 * 0000000140A0C879: jnb     short loc_140A0C883
 * 0000000140A0C87B: mov     rax, cr8
 * 0000000140A0C87F: mov     cr8, r8
 * 0000000140A0C883: mov     rdx, gs:20h
 * 0000000140A0C88C: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A0C890: mov     rcx, [rax+638h]
 * 0000000140A0C897: mov     rsi, [rdx+rcx]
 * 0000000140A0C89B: mov     rcx, gs:20h
 * 0000000140A0C8A4: mov     r9, [rbp+0BE0h+var_BB8]
 * 0000000140A0C8A8: mov     rax, [r9+648h]
 * 0000000140A0C8AF: mov     r15, [rcx+rax]
 * 0000000140A0C8B3: mov     rax, [r9+640h]
 * 0000000140A0C8BA: mov     [rbp+0BE0h+arg_0], r15
 * 0000000140A0C8C1: cmp     [rdx+rax], r11b
 * 0000000140A0C8C5: jz      short loc_140A0C8E0
 * 0000000140A0C8C7: lea     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A0C8CB: cmp     rax, rsi
 * 0000000140A0C8CE: ja      short loc_140A0C8E0
 * 0000000140A0C8D0: lea     rax, [rsi-6000h]
 * 0000000140A0C8D7: lea     rcx, [rbp+0BE0h+var_BB8]
 * 0000000140A0C8DB: cmp     rcx, rax
 * 0000000140A0C8DE: jnb     short loc_140A0C8EF
 * 0000000140A0C8E0: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A0C8E4: mov     rcx, [rax+678h]
 * 0000000140A0C8EB: mov     rsi, [r15+rcx]
 * 0000000140A0C8EF: mov     r9, [rbp+0BE0h+var_BB8]
 * 0000000140A0C8F3: test    dword ptr [r9+990h], 8000000h
 * 0000000140A0C8FE: jnz     loc_140A0CD44
 * 0000000140A0C904: mov     r12, cr0
 * 0000000140A0C908: mov     rax, r12
 * 0000000140A0C90B: btr     rax, 10h
 * 0000000140A0C910: mov     cr0, rax
 * 0000000140A0C913: mov     eax, [r9+0AA0h]
 * 0000000140A0C91A: lea     r14, [r9+0AA8h]
 * 0000000140A0C921: shl     rax, 4
 * 0000000140A0C925: lea     r10, [r9+0AA8h]
 * 0000000140A0C92C: add     r14, rax
 * 0000000140A0C92F: mov     r8d, r11d
 * 0000000140A0C932: mov     rdx, r14
 * 0000000140A0C935: cmp     [r9+0AA4h], r11d
 * 0000000140A0C93C: jbe     short loc_140A0C98D
 * 0000000140A0C93E: mov     r11d, 1
 * 0000000140A0C944: lea     r13d, [r11+0Fh]
 * 0000000140A0C948: mov     rcx, [rdx]
 * 0000000140A0C94B: mov     rax, [rdx+8]
 * 0000000140A0C94F: mov     [rcx], rax
 * 0000000140A0C952: mov     rcx, cr4
 * 0000000140A0C955: test    rcx, 20080h
 * 0000000140A0C95C: jz      short loc_140A0C96E
 * 0000000140A0C95E: mov     rax, rcx
 * 0000000140A0C961: btc     rax, 7
 * 0000000140A0C966: mov     cr4, rax
 * 0000000140A0C969: mov     cr4, rcx
 * 0000000140A0C96C: jmp     short loc_140A0C974
 * 0000000140A0C96E: mov     rax, cr3
 * 0000000140A0C971: mov     cr3, rax
 * 0000000140A0C974: add     rdx, r13
 * 0000000140A0C977: add     r8d, r11d
 * 0000000140A0C97A: cmp     r8d, [r9+0AA4h]
 * 0000000140A0C981: jb      short loc_140A0C948
 * 0000000140A0C983: mov     r13, [rbp+0BE0h+arg_8]
 * 0000000140A0C98A: xor     r11d, r11d
 * 0000000140A0C98D: cmp     r10, r14
 * 0000000140A0C990: jnb     loc_140A0CD2C
 * 0000000140A0C996: xor     r13d, r13d
 * 0000000140A0C999: mov     r15d, 0FFFFFFFFh
 * 0000000140A0C99F: mov     edi, [r10+8]
 * 0000000140A0C9A3: mov     rcx, rdx
 * 0000000140A0C9A6: mov     r8, [r10]
 * 0000000140A0C9A9: mov     r11d, edi
 * 0000000140A0C9AC: cmp     edi, 8
 * 0000000140A0C9AF: jb      short loc_140A0C9D7
 * 0000000140A0C9B1: mov     ebx, edi
 * 0000000140A0C9B3: mov     r13d, 1
 * 0000000140A0C9B9: shr     rbx, 3
 * 0000000140A0C9BD: mov     rax, [rcx]
 * 0000000140A0C9C0: add     r11d, 0FFFFFFF8h
 * 0000000140A0C9C4: mov     [r8], rax
 * 0000000140A0C9C7: add     rcx, 8
 * 0000000140A0C9CB: add     r8, 8
 * 0000000140A0C9CF: sub     rbx, r13
 * 0000000140A0C9D2: jnz     short loc_140A0C9BD
 * 0000000140A0C9D4: xor     r13d, r13d
 * 0000000140A0C9D7: test    r11d, r11d
 * 0000000140A0C9DA: jz      short loc_140A0C9F6
 * 0000000140A0C9DC: sub     r8, rcx
 * 0000000140A0C9DF: mov     r13d, 1
 * 0000000140A0C9E5: mov     al, [rcx]
 * 0000000140A0C9E7: mov     [r8+rcx], al
 * 0000000140A0C9EB: add     rcx, r13
 * 0000000140A0C9EE: add     r11d, r15d
 * 0000000140A0C9F1: jnz     short loc_140A0C9E5
 * 0000000140A0C9F3: xor     r13d, r13d
 * 0000000140A0C9F6: add     rdx, rdi
 * 0000000140A0C9F9: add     r10, 10h
 * 0000000140A0C9FD: cmp     r10, r14
 * 0000000140A0CA00: jnb     loc_140A0CD12
 * 0000000140A0CA06: jmp     short loc_140A0C99F
 * 0000000140A0CA08: test    dword ptr [r13+990h], 40000000h
 * 0000000140A0CA13: jnz     short loc_140A0CA5F
 * 0000000140A0CA15: cmp     [rbp+0BE0h+var_C38], r11d
 * 0000000140A0CA19: jz      short loc_140A0CA5F
 * 0000000140A0CA1B: mov     ecx, [r13+924h]
 * 0000000140A0CA22: sub     ecx, 1
 * 0000000140A0CA25: jz      short loc_140A0CA39
 * 0000000140A0CA27: mov     eax, 2
 * 0000000140A0CA2C: cmp     ecx, eax
 * 0000000140A0CA2E: jnz     short loc_140A0CA5F
 * 0000000140A0CA30: mov     rax, [r13+368h]
 * 0000000140A0CA37: jmp     short loc_140A0CA58
 * 0000000140A0CA39: add     qword ptr [r13+7C8h], 0FFFFFFFFFFFFFFF8h
 * 0000000140A0CA41: mov     rax, [r13+7C8h]
 * 0000000140A0CA48: mov     ecx, [rax]
 * 0000000140A0CA4A: mov     [r13+7D0h], ecx
 * 0000000140A0CA51: mov     rax, [r13+228h]
 * 0000000140A0CA58: mov     [r13+100h], rax
 * 0000000140A0CA5F: mov     rax, r13
 * 0000000140A0CA62: add     rsp, 0CA8h
 * 0000000140A0CA69: pop     r15
 * 0000000140A0CA6B: pop     r14
 * 0000000140A0CA6D: pop     r13
 * 0000000140A0CA6F: pop     r12
 * 0000000140A0CA71: pop     rdi
 * 0000000140A0CA72: pop     rsi
 * 0000000140A0CA73: pop     rbx
 * 0000000140A0CA74: pop     rbp
 * 0000000140A0CA75: retn
 * 0000000140A0CA76: mov     [rbp+0BE0h+var_A24], 0D0002D61h
 * 0000000140A0CA80: xor     r9d, r9d; BugCheckParameter3
 * 0000000140A0CA83: mov     ecx, [rbp+0BE0h+var_A24]
 * 0000000140A0CA89: mov     r8, r12; BugCheckParameter2
 * 0000000140A0CA8C: xor     ecx, 2D72h
 * 0000000140A0CA92: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0CA97: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0CA9A: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140A0CA9E: call    KeBugCheckEx
 * 0000000140A0CAA4: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A0CAA9: mov     r9, r15; BugCheckParameter3
 * 0000000140A0CAAC: mov     [rbp+0BE0h+var_9F0], 0D0002D61h
 * 0000000140A0CAB6: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140A0CABB: mov     ecx, [rbp+0BE0h+var_9F0]
 * 0000000140A0CAC1: xor     ecx, 2D72h
 * 0000000140A0CAC7: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0CACC: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0CACF: call    KeBugCheckEx
 * 0000000140A0CAD5: mov     [rbp+0BE0h+var_9EC], 0D0002D61h
 * 0000000140A0CADF: mov     ecx, [rbp+0BE0h+var_9EC]
 * 0000000140A0CAE5: xor     ecx, 2D72h
 * 0000000140A0CAEB: mov     r9d, edx; BugCheckParameter3
 * 0000000140A0CAEE: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0CAF1: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140A0CAF6: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0CAFB: call    KeBugCheckEx
 * 0000000140A0CB01: mov     [rbp+0BE0h+var_9E8], 0D0002D61h
 * 0000000140A0CB0B: mov     ecx, [rbp+0BE0h+var_9E8]
 * 0000000140A0CB11: xor     ecx, 2D72h
 * 0000000140A0CB17: mov     r9d, edx; BugCheckParameter3
 * 0000000140A0CB1A: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0CB1D: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140A0CB22: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0CB27: call    KeBugCheckEx
 * 0000000140A0CB2D: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A0CB32: mov     r9d, 2; BugCheckParameter3
 * 0000000140A0CB38: mov     [rbp+0BE0h+var_A5C], 0D0002D61h
 * 0000000140A0CB42: mov     ecx, [rbp+0BE0h+var_A5C]
 * 0000000140A0CB48: xor     ecx, 2D72h
 * 0000000140A0CB4E: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0CB53: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0CB56: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140A0CB5A: call    KeBugCheckEx
 * 0000000140A0CB60: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A0CB65: mov     r9d, 3; BugCheckParameter3
 * 0000000140A0CB6B: mov     [rbp+0BE0h+var_9E4], 0D0002D61h
 * 0000000140A0CB75: mov     ecx, [rbp+0BE0h+var_9E4]
 * 0000000140A0CB7B: xor     ecx, 2D72h
 * 0000000140A0CB81: mov     [rsp+0CE0h+BugCheckParameter4], rdx; BugCheckParameter4
 * 0000000140A0CB86: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0CB89: lea     edx, [r9+7]; BugCheckParameter1
 * 0000000140A0CB8D: call    KeBugCheckEx
 * 0000000140A0CB93: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A0CB98: mov     r9d, 6; BugCheckParameter3
 * 0000000140A0CB9E: mov     [rbp+0BE0h+var_9E0], 0D0002D61h
 * 0000000140A0CBA8: mov     ecx, [rbp+0BE0h+var_9E0]
 * 0000000140A0CBAE: xor     ecx, 2D72h
 * 0000000140A0CBB4: mov     [rsp+0CE0h+BugCheckParameter4], rdx; BugCheckParameter4
 * 0000000140A0CBB9: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0CBBC: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140A0CBC0: call    KeBugCheckEx
 * 0000000140A0CBC6: mov     [rbp+0BE0h+var_A78], 0D0002D61h
 * 0000000140A0CBD0: xor     r9d, r9d; BugCheckParameter3
 * 0000000140A0CBD3: mov     ecx, [rbp+0BE0h+var_A78]
 * 0000000140A0CBD9: mov     r8, r14; BugCheckParameter2
 * 0000000140A0CBDC: xor     ecx, 2D72h
 * 0000000140A0CBE2: mov     [rsp+0CE0h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140A0CBE7: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0CBEA: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140A0CBEE: call    KeBugCheckEx
 * 0000000140A0CBF4: xor     eax, eax
 * 0000000140A0CBF6: mov     [rbp+0BE0h+var_A64], 0D0002D61h
 * 0000000140A0CC00: mov     ecx, [rbp+0BE0h+var_A64]
 * 0000000140A0CC06: mov     r8, r14; BugCheckParameter2
 * 0000000140A0CC09: xor     ecx, 2D72h
 * 0000000140A0CC0F: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0CC14: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0CC17: lea     r9d, [rax+3]; BugCheckParameter3
 * 0000000140A0CC1B: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140A0CC1E: call    KeBugCheckEx
 * 0000000140A0CC24: mov     [rbp+0BE0h+var_A74], 0D0002D61h
 * 0000000140A0CC2E: mov     r8, r14; BugCheckParameter2
 * 0000000140A0CC31: mov     ecx, [rbp+0BE0h+var_A74]
 * 0000000140A0CC37: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140A0CC3C: xor     ecx, 2D72h
 * 0000000140A0CC42: mov     [rsp+0CE0h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140A0CC47: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0CC4A: mov     r9, r13; BugCheckParameter3
 * 0000000140A0CC4D: call    KeBugCheckEx
 * 0000000140A0CC53: xor     eax, eax
 * 0000000140A0CC55: mov     [rbp+0BE0h+var_A70], 0D0002D61h
 * 0000000140A0CC5F: mov     ecx, [rbp+0BE0h+var_A70]
 * 0000000140A0CC65: mov     r8, r14; BugCheckParameter2
 * 0000000140A0CC68: xor     ecx, 2D72h
 * 0000000140A0CC6E: mov     r9d, edx; BugCheckParameter3
 * 0000000140A0CC71: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0CC74: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140A0CC77: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0CC7C: call    KeBugCheckEx
 * 0000000140A0CC82: xor     eax, eax
 * 0000000140A0CC84: mov     [rbp+0BE0h+var_A6C], 0D0002D61h
 * 0000000140A0CC8E: mov     ecx, [rbp+0BE0h+var_A6C]
 * 0000000140A0CC94: xor     ecx, 2D72h
 * 0000000140A0CC9A: mov     r9d, edx; BugCheckParameter3
 * 0000000140A0CC9D: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0CCA0: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140A0CCA3: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0CCA8: call    KeBugCheckEx
 * 0000000140A0CCAE: mov     [rsp+0CE0h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140A0CCB3: mov     r8, r14; BugCheckParameter2
 * 0000000140A0CCB6: mov     r9d, 2; BugCheckParameter3
 * 0000000140A0CCBC: mov     [rbp+0BE0h+var_A68], 0D0002D61h
 * 0000000140A0CCC6: mov     ecx, [rbp+0BE0h+var_A68]
 * 0000000140A0CCCC: xor     ecx, 2D72h
 * 0000000140A0CCD2: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0CCD5: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140A0CCD9: call    KeBugCheckEx
 * 0000000140A0CCDF: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A0CCE4: mov     r9d, 6; BugCheckParameter3
 * 0000000140A0CCEA: mov     [rbp+0BE0h+var_A60], 0D0002D61h
 * 0000000140A0CCF4: mov     ecx, [rbp+0BE0h+var_A60]
 * 0000000140A0CCFA: xor     ecx, 2D72h
 * 0000000140A0CD00: mov     [rsp+0CE0h+BugCheckParameter4], rsi; BugCheckParameter4
 * 0000000140A0CD05: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0CD08: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140A0CD0C: call    KeBugCheckEx
 * 0000000140A0CD12: mov     r15, [rbp+0BE0h+arg_0]
 * 0000000140A0CD19: xor     r11d, r11d
 * 0000000140A0CD1C: mov     r13, [rbp+0BE0h+arg_8]
 * 0000000140A0CD23: mov     rbx, [rsp+0CE0h+var_C70]
 * 0000000140A0CD28: mov     rdi, [rbp+0BE0h+var_BD0]
 * 0000000140A0CD2C: mov     rax, [r9+218h]
 * 0000000140A0CD33: mov     byte ptr [rax], 0C3h
 * 0000000140A0CD36: mov     cr0, r12
 * 0000000140A0CD3A: mov     r14, [rbp+0BE0h+var_C40]
 * 0000000140A0CD3E: mov     r8d, 2
 * 0000000140A0CD44: mov     r9, [rbp+0BE0h+var_BB8]
 * 0000000140A0CD48: mov     ecx, [r9+928h]
 * 0000000140A0CD4F: test    ecx, ecx
 * 0000000140A0CD51: jz      loc_140A0CE37
 * 0000000140A0CD57: mov     rax, cr8
 * 0000000140A0CD5B: cmp     al, r8b
 * 0000000140A0CD5E: jnb     short loc_140A0CD6F
 * 0000000140A0CD60: mov     rax, cr8
 * 0000000140A0CD64: mov     cr8, r8
 * 0000000140A0CD68: mov     ecx, [r9+928h]
 * 0000000140A0CD6F: test    ecx, ecx
 * 0000000140A0CD71: jz      loc_140A0CE37
 * 0000000140A0CD77: sub     ecx, 1
 * 0000000140A0CD7A: jz      loc_140A0CE2A
 * 0000000140A0CD80: sub     ecx, 1
 * 0000000140A0CD83: jz      loc_140A0CE21
 * 0000000140A0CD89: sub     ecx, 1
 * 0000000140A0CD8C: jz      loc_140A0CE18
 * 0000000140A0CD92: sub     ecx, 1
 * 0000000140A0CD95: jz      short loc_140A0CDDC
 * 0000000140A0CD97: cmp     ecx, 1
 * 0000000140A0CD9A: jz      short loc_140A0CDB5
 * 0000000140A0CD9C: mov     rax, [r9+5B8h]
 * 0000000140A0CDA3: mov     ecx, 1
 * 0000000140A0CDA8: lock or [rax+340h], rcx
 * 0000000140A0CDB0: jmp     loc_140A0CE37
 * 0000000140A0CDB5: mov     rcx, gs:20h
 * 0000000140A0CDBE: mov     rax, [r9+648h]
 * 0000000140A0CDC5: mov     edx, [r9+990h]
 * 0000000140A0CDCC: shr     edx, 0Ah
 * 0000000140A0CDCF: and     edx, 1Fh
 * 0000000140A0CDD2: mov     rcx, [rax+rcx]
 * 0000000140A0CDD6: lock bts [rcx], edx
 * 0000000140A0CDDA: jmp     short loc_140A0CE37
 * 0000000140A0CDDC: mov     rcx, gs:20h
 * 0000000140A0CDE5: mov     rax, [r9+648h]
 * 0000000140A0CDEC: mov     r8d, [r9+990h]
 * 0000000140A0CDF3: shr     r8d, 0Ah
 * 0000000140A0CDF7: and     r8d, 1Fh
 * 0000000140A0CDFB: mov     rcx, [rax+rcx]
 * 0000000140A0CDFF: add     rcx, [r9+6A8h]
 * 0000000140A0CE06: mov     rax, [r9+688h]
 * 0000000140A0CE0D: mov     rdx, [rcx+rax]
 * 0000000140A0CE11: lock bts [rdx], r8d
 * 0000000140A0CE16: jmp     short loc_140A0CE37
 * 0000000140A0CE18: mov     rax, [r9+560h]
 * 0000000140A0CE1F: jmp     short loc_140A0CE31
 * 0000000140A0CE21: mov     rax, [r9+558h]
 * 0000000140A0CE28: jmp     short loc_140A0CE31
 * 0000000140A0CE2A: mov     rax, [r9+548h]
 * 0000000140A0CE31: lock bts qword ptr [rax], 0
 * 0000000140A0CE37: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A0CE3B: mov     rcx, [rax+690h]
 * 0000000140A0CE42: mov     [r15+rcx], r11
 * 0000000140A0CE46: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A0CE4A: mov     r10, [rax+6A0h]
 * 0000000140A0CE51: mov     [r15+r10], r11
 * 0000000140A0CE55: mov     rcx, [rbp+0BE0h+var_BB8]
 * 0000000140A0CE59: mov     rcx, [rcx+158h]; Target
 * 0000000140A0CE60: call    KeGuardCheckICall
 * 0000000140A0CE65: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A0CE69: mov     r9, rbx
 * 0000000140A0CE6C: mov     [rsp+0CE0h+var_CB0], rsi
 * 0000000140A0CE71: mov     r8, rdi
 * 0000000140A0CE74: mov     rdx, r14
 * 0000000140A0CE77: mov     ecx, 109h
 * 0000000140A0CE7C: mov     r10, [rax+158h]
 * 0000000140A0CE83: mov     [rsp+0CE0h+var_CB8], r10
 * 0000000140A0CE88: mov     [rsp+0CE0h+BugCheckParameter4], r13
 * 0000000140A0CE8D: call    SdbpCheckDll
 */
