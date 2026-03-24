/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x1409F8010
 * Callers:
 *     KiDecodeMcaFault @ 0x1403DBD40 (KiDecodeMcaFault.c)
 *     sub_1403EA270 @ 0x1403EA270 (sub_1403EA270.c)
 *     FsRtlUninitializeSmallMcb @ 0x140A110D0 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     sub_1403EA48C @ 0x1403EA48C (sub_1403EA48C.c)
 *     sub_1403EA56C @ 0x1403EA56C (sub_1403EA56C.c)
 *     sub_1403EB4D8 @ 0x1403EB4D8 (sub_1403EB4D8.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     sub_140A0C0FC @ 0x140A0C0FC (sub_140A0C0FC.c)
 *     sub_140A0E098 @ 0x140A0E098 (sub_140A0E098.c)
 *     sub_140A0EB30 @ 0x140A0EB30 (sub_140A0EB30.c)
 *     $$b8 @ 0x140A0F3CC ($$b8.c)
 *     sub_140A0F5E8 @ 0x140A0F5E8 (sub_140A0F5E8.c)
 *     sub_140A0FC50 @ 0x140A0FC50 (sub_140A0FC50.c)
 *     KiGetGdtIdt @ 0x140A10F60 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x140A10F70 (KiGetLdtr.c)
 *     KiGetSs @ 0x140A10F80 (KiGetSs.c)
 *     KiGetTr @ 0x140A10F90 (KiGetTr.c)
 *     KiErrata361Present @ 0x140A10FA0 (KiErrata361Present.c)
 *     KiErrataSkx55Present @ 0x140A10FC0 (KiErrataSkx55Present.c)
 *     KiErrata704Present @ 0x140A10FD0 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x140A11080 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140A11330 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140A11340 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x140A11550 (RtlInitMinimalBarrier.c)
 *     sub_140A1BFE4 @ 0x140A1BFE4 (sub_140A1BFE4.c)
 */

/*
 * Hex-Rays decompilation failed for FsRtlMdlReadCompleteDevEx @ 0x1409F8010
 * Reason: Hex-Rays returned no pseudocode for 0x1409F8010
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001409F8010: mov     [rsp-8+arg_0], rcx
 * 00000001409F8015: push    rbp
 * 00000001409F8016: push    rbx
 * 00000001409F8017: push    rsi
 * 00000001409F8018: push    rdi
 * 00000001409F8019: push    r12
 * 00000001409F801B: push    r13
 * 00000001409F801D: push    r14
 * 00000001409F801F: push    r15
 * 00000001409F8021: lea     rbp, [rsp-0BA8h]
 * 00000001409F8029: sub     rsp, 0CA8h
 * 00000001409F8030: mov     eax, [rcx+990h]
 * 00000001409F8036: xor     r9d, r9d
 * 00000001409F8039: mov     r12, rcx
 * 00000001409F803C: mov     [rbp+0BE0h+var_448], rcx
 * 00000001409F8043: mov     ecx, 110000h
 * 00000001409F8048: mov     edi, 0FFFFFFF8h
 * 00000001409F804D: and     eax, ecx
 * 00000001409F804F: mov     r11d, 0FFFFFFFFh
 * 00000001409F8055: lea     esi, [r9+1]
 * 00000001409F8059: mov     r10d, 12Fh
 * 00000001409F805F: cmp     eax, ecx
 * 00000001409F8061: jz      loc_1409F811E
 * 00000001409F8067: mov     rdx, [r12+8E0h]
 * 00000001409F806F: lea     ecx, [r10+1]
 * 00000001409F8073: mov     rax, rdx
 * 00000001409F8076: lea     r8d, [r9+26h]
 * 00000001409F807A: mov     [rax], r9
 * 00000001409F807D: add     ecx, edi
 * 00000001409F807F: add     rax, 8
 * 00000001409F8083: sub     r8, rsi
 * 00000001409F8086: jnz     short loc_1409F807A
 * 00000001409F8088: test    ecx, ecx
 * 00000001409F808A: jz      short loc_1409F8097
 * 00000001409F808C: mov     [rax], r9b
 * 00000001409F808F: add     rax, rsi
 * 00000001409F8092: add     ecx, r11d
 * 00000001409F8095: jnz     short loc_1409F808C
 * 00000001409F8097: movups  xmm0, xmmword ptr [r12+848h]
 * 00000001409F80A0: lea     rax, [r12+878h]
 * 00000001409F80A8: mov     rcx, rax
 * 00000001409F80AB: movdqu  xmmword ptr [rdx+10h], xmm0
 * 00000001409F80B0: shr     rcx, 10h
 * 00000001409F80B4: movups  xmm1, xmmword ptr [r12+858h]
 * 00000001409F80BD: movdqu  xmmword ptr [rdx+20h], xmm1
 * 00000001409F80C2: movups  xmm0, xmmword ptr [r12+868h]
 * 00000001409F80CB: movdqu  xmmword ptr [rdx+120h], xmm0
 * 00000001409F80D3: mov     [rbp+2F2h], rdx
 * 00000001409F80DA: mov     word ptr [rbp+0BE0h+var_8F0], r10w
 * 00000001409F80E2: mov     [rdx+10h], ax
 * 00000001409F80E6: shr     rax, 20h
 * 00000001409F80EA: mov     [rdx+16h], cx
 * 00000001409F80EE: mov     [rdx+18h], eax
 * 00000001409F80F1: cli
 * 00000001409F80F2: xor     eax, eax
 * 00000001409F80F4: cmp     [r12+990h], eax
 * 00000001409F80FC: jge     short loc_1409F8104
 * 00000001409F80FE: mov     dr7, rax
 * 00000001409F8101: sti
 * 00000001409F8102: jmp     short loc_1409F8120
 * 00000001409F8104: sidt    fword ptr [rbp+0BE0h+var_760]
 * 00000001409F810B: lidt    fword ptr [rbp+0BE0h+var_8F0]
 * 00000001409F8112: mov     dr7, rax
 * 00000001409F8115: lidt    fword ptr [rbp+0BE0h+var_760]
 * 00000001409F811C: jmp     short loc_1409F8101
 * 00000001409F811E: xor     eax, eax
 * 00000001409F8120: test    dword ptr [r12+994h], 100h
 * 00000001409F812C: mov     [rbp+0BE0h+var_BD0], rax
 * 00000001409F8130: jz      short loc_1409F8147
 * 00000001409F8132: lea     rcx, [rbp+0BE8h]
 * 00000001409F8139: mov     rax, [rcx]
 * 00000001409F813C: mov     [rbp+0BE0h+var_BD0], rax
 * 00000001409F8140: xor     eax, eax
 * 00000001409F8142: mov     [rcx], rax
 * 00000001409F8145: jmp     short loc_1409F8149
 * 00000001409F8147: xor     eax, eax
 * 00000001409F8149: mov     r13d, 20h ; ' '
 * 00000001409F814F: mov     [r12+828h], eax
 * 00000001409F8157: test    dword ptr [r12+990h], 40000000h
 * 00000001409F8163: mov     r14, 7010008004002001h
 * 00000001409F816D: lea     r15d, [r13-1Ch]
 * 00000001409F8171: jz      short loc_1409F8183
 * 00000001409F8173: xor     eax, eax
 * 00000001409F8175: cmp     [r12+0A78h], rax
 * 00000001409F817D: jnz     loc_1409F8419
 * 00000001409F8183: mov     r14, [r12+7B8h]
 * 00000001409F818B: lea     rbx, [r12+798h]
 * 00000001409F8193: mov     [rbp+0BE0h+arg_8], r14
 * 00000001409F819A: lea     rdx, [rbp+0BE0h+var_110]
 * 00000001409F81A1: mov     rcx, rbx
 * 00000001409F81A4: mov     r8d, r13d
 * 00000001409F81A7: mov     r9, r15
 * 00000001409F81AA: mov     rax, [rcx]
 * 00000001409F81AD: add     r8d, edi
 * 00000001409F81B0: mov     [rdx], rax
 * 00000001409F81B3: add     rcx, 8
 * 00000001409F81B7: add     rdx, 8
 * 00000001409F81BB: sub     r9, rsi
 * 00000001409F81BE: jnz     short loc_1409F81AA
 * 00000001409F81C0: xor     eax, eax
 * 00000001409F81C2: test    r8d, r8d
 * 00000001409F81C5: jz      short loc_1409F81D8
 * 00000001409F81C7: mov     al, [rcx]
 * 00000001409F81C9: add     rcx, rsi
 * 00000001409F81CC: mov     [rdx], al
 * 00000001409F81CE: add     rdx, rsi
 * 00000001409F81D1: add     r8d, r11d
 * 00000001409F81D4: jnz     short loc_1409F81C7
 * 00000001409F81D6: xor     eax, eax
 * 00000001409F81D8: mov     [r12+7B8h], rax
 * 00000001409F81E0: mov     ecx, r13d
 * 00000001409F81E3: mov     [r12+828h], eax
 * 00000001409F81EB: mov     rdx, r15
 * 00000001409F81EE: mov     rax, rbx
 * 00000001409F81F1: xor     r8d, r8d
 * 00000001409F81F4: mov     [rax], r8
 * 00000001409F81F7: add     ecx, edi
 * 00000001409F81F9: add     rax, 8
 * 00000001409F81FD: sub     rdx, rsi
 * 00000001409F8200: jnz     short loc_1409F81F4
 * 00000001409F8202: test    ecx, ecx
 * 00000001409F8204: jz      short loc_1409F8211
 * 00000001409F8206: mov     [rax], r8b
 * 00000001409F8209: add     rax, rsi
 * 00000001409F820C: add     ecx, r11d
 * 00000001409F820F: jnz     short loc_1409F8206
 * 00000001409F8211: mov     eax, [r12+7E4h]
 * 00000001409F8219: mov     r9, r12
 * 00000001409F821C: add     [r12+828h], eax
 * 00000001409F8224: mov     rax, r12
 * 00000001409F8227: mov     r10d, [r12+7E4h]
 * 00000001409F822F: mov     r11d, [r12+814h]
 * 00000001409F8237: mov     rsi, [r12+818h]
 * 00000001409F823F: lea     rcx, [r12+r10]
 * 00000001409F8243: cmp     r12, rcx
 * 00000001409F8246: jnb     short loc_1409F8258
 * 00000001409F8248: mov     edx, 40h ; '@'
 * 00000001409F824D: prefetchnta byte ptr [rax]
 * 00000001409F8250: add     rax, rdx
 * 00000001409F8253: cmp     rax, rcx
 * 00000001409F8256: jb      short loc_1409F824D
 * 00000001409F8258: mov     edi, r10d
 * 00000001409F825B: mov     r8, rsi
 * 00000001409F825E: shr     edi, 7
 * 00000001409F8261: test    edi, edi
 * 00000001409F8263: jz      short loc_1409F82E0
 * 00000001409F8265: mov     r14, 7010008004002001h
 * 00000001409F826F: mov     edx, 8
 * 00000001409F8274: lea     r12d, [rdx-7]
 * 00000001409F8278: mov     rax, [r9]
 * 00000001409F827B: mov     ecx, r11d
 * 00000001409F827E: xor     rax, r8
 * 00000001409F8281: mov     r8, [r9+8]
 * 00000001409F8285: rol     rax, cl
 * 00000001409F8288: add     r9, 10h
 * 00000001409F828C: xor     r8, rax
 * 00000001409F828F: rol     r8, cl
 * 00000001409F8292: sub     rdx, r12
 * 00000001409F8295: jnz     short loc_1409F8278
 * 00000001409F8297: mov     r12, [rbp+0BE0h+arg_0]
 * 00000001409F829E: mov     rcx, r9
 * 00000001409F82A1: sub     rcx, r12
 * 00000001409F82A4: xor     rcx, rsi
 * 00000001409F82A7: mov     rax, rcx
 * 00000001409F82AA: rol     rax, 11h
 * 00000001409F82AE: xor     rcx, rax
 * 00000001409F82B1: mov     rax, r14
 * 00000001409F82B4: mul     rcx
 * 00000001409F82B7: xor     eax, edx
 * 00000001409F82B9: mov     [rbp+0BE0h+var_3D8], rdx
 * 00000001409F82C0: xor     r11d, eax
 * 00000001409F82C3: mov     eax, 1
 * 00000001409F82C8: and     r11d, 3Fh
 * 00000001409F82CC: cmovz   r11d, eax
 * 00000001409F82D0: mov     eax, 0FFFFFFFFh
 * 00000001409F82D5: add     edi, eax
 * 00000001409F82D7: jnz     short loc_1409F826F
 * 00000001409F82D9: mov     r14, [rbp+0BE0h+arg_8]
 * 00000001409F82E0: and     r10d, 7Fh
 * 00000001409F82E4: mov     esi, 1
 * 00000001409F82E9: cmp     r10d, 8
 * 00000001409F82ED: jb      short loc_1409F830C
 * 00000001409F82EF: mov     edx, r10d
 * 00000001409F82F2: shr     rdx, 3
 * 00000001409F82F6: xor     r8, [r9]
 * 00000001409F82F9: mov     ecx, r11d
 * 00000001409F82FC: rol     r8, cl
 * 00000001409F82FF: add     r9, 8
 * 00000001409F8303: add     r10d, 0FFFFFFF8h
 * 00000001409F8307: sub     rdx, rsi
 * 00000001409F830A: jnz     short loc_1409F82F6
 * 00000001409F830C: test    r10d, r10d
 * 00000001409F830F: jz      short loc_1409F8333
 * 00000001409F8311: mov     r12d, 0FFFFFFFFh
 * 00000001409F8317: movzx   eax, byte ptr [r9]
 * 00000001409F831B: mov     ecx, r11d
 * 00000001409F831E: xor     r8, rax
 * 00000001409F8321: add     r9, rsi
 * 00000001409F8324: rol     r8, cl
 * 00000001409F8327: add     r10d, r12d
 * 00000001409F832A: jnz     short loc_1409F8317
 * 00000001409F832C: mov     r12, [rbp+0BE0h+arg_0]
 * 00000001409F8333: mov     [r12+7B8h], r14
 * 00000001409F833B: lea     rcx, [rbp+0BE0h+var_110]
 * 00000001409F8342: mov     edx, r13d
 * 00000001409F8345: mov     r9, r15
 * 00000001409F8348: mov     rax, [rcx]
 * 00000001409F834B: add     edx, 0FFFFFFF8h
 * 00000001409F834E: mov     [rbx], rax
 * 00000001409F8351: add     rcx, 8
 * 00000001409F8355: add     rbx, 8
 * 00000001409F8359: sub     r9, rsi
 * 00000001409F835C: jnz     short loc_1409F8348
 * 00000001409F835E: test    edx, edx
 * 00000001409F8360: jz      short loc_1409F8377
 * 00000001409F8362: mov     r11d, 0FFFFFFFFh
 * 00000001409F8368: mov     al, [rcx]
 * 00000001409F836A: add     rcx, rsi
 * 00000001409F836D: mov     [rbx], al
 * 00000001409F836F: add     rbx, rsi
 * 00000001409F8372: add     edx, r11d
 * 00000001409F8375: jnz     short loc_1409F8368
 * 00000001409F8377: cmp     [r12+7B8h], r8
 * 00000001409F837F: jz      loc_1409F840F
 * 00000001409F8385: mov     rax, [r12+590h]
 * 00000001409F838D: xor     edx, edx
 * 00000001409F838F: mov     ecx, [r12+7E4h]
 * 00000001409F8397: mov     [rax], r12
 * 00000001409F839A: mov     [rax+10h], ecx
 * 00000001409F839D: mov     eax, [r12+8F8h]
 * 00000001409F83A5: mov     rcx, [r12+7B8h]
 * 00000001409F83AD: test    eax, eax
 * 00000001409F83AF: jnz     short loc_1409F840F
 * 00000001409F83B1: mov     rax, [r12+590h]
 * 00000001409F83B9: xor     rcx, r8
 * 00000001409F83BC: mov     [rax+18h], rcx
 * 00000001409F83C0: mov     eax, [r12+8F8h]
 * 00000001409F83C8: test    eax, eax
 * 00000001409F83CA: jnz     short loc_1409F840F
 * 00000001409F83CC: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F83D6: mov     rcx, r12
 * 00000001409F83D9: add     rax, r12
 * 00000001409F83DC: mov     [r12+900h], rax
 * 00000001409F83E4: xor     eax, eax
 * 00000001409F83E6: mov     [r12+908h], rax
 * 00000001409F83EE: mov     qword ptr [r12+910h], 101h
 * 00000001409F83FA: mov     [r12+918h], r8
 * 00000001409F8402: mov     [r12+8F8h], esi
 * 00000001409F840A: call    $$b8
 * 00000001409F840F: mov     r14, 7010008004002001h
 * 00000001409F8419: or      [r12+990h], r15d
 * 00000001409F8421: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F8428: add     [r12+834h], esi
 * 00000001409F8430: mov     r8, 0ABCC77118461CEFDh
 * 00000001409F843A: mov     eax, [r12+990h]
 * 00000001409F8442: test    al, 8
 * 00000001409F8444: jz      loc_1409F8874
 * 00000001409F844A: bt      eax, 17h
 * 00000001409F844E: jb      loc_1409F8874
 * 00000001409F8454: mov     eax, [r12+994h]
 * 00000001409F845C: mov     r10, [r12+0A70h]
 * 00000001409F8464: mov     r13d, [r12+7E4h]
 * 00000001409F846C: mov     r11, [r12+9F8h]
 * 00000001409F8474: mov     r15d, [r12+808h]
 * 00000001409F847C: mov     [rbp+0BE0h+arg_8], r10
 * 00000001409F8483: and     eax, esi
 * 00000001409F8485: jz      short loc_1409F848F
 * 00000001409F8487: mov     r11, [r12+5D8h]
 * 00000001409F848F: mov     rbx, [rbp+0BE0h+arg_0]
 * 00000001409F8496: mov     r12, [r12+160h]
 * 00000001409F849E: mov     [rbp+0BE0h+var_C40], r12
 * 00000001409F84A2: mov     rax, [rbx+2C8h]
 * 00000001409F84A9: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409F84AE: mov     rax, [rbx+340h]
 * 00000001409F84B5: mov     [rbp+0BE0h+var_C30], rax
 * 00000001409F84B9: rdtsc
 * 00000001409F84BB: shl     rdx, 20h
 * 00000001409F84BF: mov     r9, rdi
 * 00000001409F84C2: or      rax, rdx
 * 00000001409F84C5: mov     rcx, rax
 * 00000001409F84C8: ror     rax, 3
 * 00000001409F84CC: xor     rcx, rax
 * 00000001409F84CF: mov     rax, r14
 * 00000001409F84D2: mul     rcx
 * 00000001409F84D5: mov     rcx, rdx
 * 00000001409F84D8: mov     [rbp+0BE0h+var_3D0], rdx
 * 00000001409F84DF: xor     rcx, rax
 * 00000001409F84E2: mov     rax, r8
 * 00000001409F84E5: mul     rcx
 * 00000001409F84E8: shr     rdx, 1Ah
 * 00000001409F84EC: imul    rax, rdx, 5F5E100h
 * 00000001409F84F3: sub     rcx, rax
 * 00000001409F84F6: sub     r9, rcx
 * 00000001409F84F9: mov     [rbp+0BE0h+var_AB8], r9
 * 00000001409F8500: mov     r8d, [rbx+990h]
 * 00000001409F8507: bt      r8d, 1Ah
 * 00000001409F850C: jnb     loc_1409F85B3
 * 00000001409F8512: rdtsc
 * 00000001409F8514: shl     rdx, 20h
 * 00000001409F8518: or      rax, rdx
 * 00000001409F851B: mov     rcx, rax
 * 00000001409F851E: ror     rax, 3
 * 00000001409F8522: xor     rcx, rax
 * 00000001409F8525: mov     rax, r14
 * 00000001409F8528: mul     rcx
 * 00000001409F852B: mov     rcx, rdx
 * 00000001409F852E: mov     [rbp+0BE0h+var_3C8], rdx
 * 00000001409F8535: xor     rcx, rax
 * 00000001409F8538: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001409F8542: mul     rcx
 * 00000001409F8545: shr     rdx, 3
 * 00000001409F8549: lea     rax, [rdx+rdx*4]
 * 00000001409F854D: add     rax, rax
 * 00000001409F8550: sub     rcx, rax
 * 00000001409F8553: mov     eax, 2
 * 00000001409F8558: cmp     rcx, rax
 * 00000001409F855B: jnb     short loc_1409F85B3
 * 00000001409F855D: rdtsc
 * 00000001409F855F: shl     rdx, 20h
 * 00000001409F8563: or      rax, rdx
 * 00000001409F8566: mov     rcx, rax
 * 00000001409F8569: ror     rax, 3
 * 00000001409F856D: xor     rcx, rax
 * 00000001409F8570: mov     rax, r14
 * 00000001409F8573: mul     rcx
 * 00000001409F8576: mov     rcx, rdx
 * 00000001409F8579: mov     [rbp+0BE0h+var_3C0], rdx
 * 00000001409F8580: xor     rcx, rax
 * 00000001409F8583: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001409F858D: mul     rcx
 * 00000001409F8590: shr     rdx, 3
 * 00000001409F8594: lea     rax, [rdx+rdx*4]
 * 00000001409F8598: add     rax, rax
 * 00000001409F859B: sub     rcx, rax
 * 00000001409F859E: add     rcx, rsi
 * 00000001409F85A1: imul    rcx, r9
 * 00000001409F85A5: mov     [rbp+0BE0h+var_AB8], rcx
 * 00000001409F85AC: mov     r8d, [rbx+990h]
 * 00000001409F85B3: xor     eax, eax
 * 00000001409F85B5: mov     esi, r15d
 * 00000001409F85B8: mov     ebx, eax
 * 00000001409F85BA: mov     r14d, eax
 * 00000001409F85BD: lea     ecx, [rax+2]
 * 00000001409F85C0: test    cl, r8b
 * 00000001409F85C3: cmovnz  esi, r13d
 * 00000001409F85C7: test    r8b, r8b
 * 00000001409F85CA: js      short loc_1409F85D4
 * 00000001409F85CC: mov     r13d, eax
 * 00000001409F85CF: jmp     loc_1409F86B3
 * 00000001409F85D4: mov     r9d, 1
 * 00000001409F85DA: mov     r13d, r9d
 * 00000001409F85DD: rdtsc
 * 00000001409F85DF: shl     rdx, 20h
 * 00000001409F85E3: or      rax, rdx
 * 00000001409F85E6: mov     rcx, rax
 * 00000001409F85E9: ror     rax, 3
 * 00000001409F85ED: xor     rcx, rax
 * 00000001409F85F0: mov     rax, 7010008004002001h
 * 00000001409F85FA: mul     rcx
 * 00000001409F85FD: mov     ecx, 154h
 * 00000001409F8602: mov     rbx, rdx
 * 00000001409F8605: mov     [rbp+0BE0h+var_3B8], rdx
 * 00000001409F860C: mov     rdx, [rbp+0BE0h+arg_0]
 * 00000001409F8613: xor     rbx, rax
 * 00000001409F8616: mov     r14, rbx
 * 00000001409F8619: mov     r8, rbx
 * 00000001409F861C: xor     r14, rdx
 * 00000001409F861F: lea     rax, [rdx+0A98h]
 * 00000001409F8626: xor     [rax], r8
 * 00000001409F8629: lea     rax, [rax-8]
 * 00000001409F862D: ror     r8, cl
 * 00000001409F8630: sub     ecx, r9d
 * 00000001409F8633: jnz     short loc_1409F8626
 * 00000001409F8635: lea     r9, [r15-0AA0h]
 * 00000001409F863C: mov     r12, r15
 * 00000001409F863F: shr     r9, 3
 * 00000001409F8643: test    r9d, r9d
 * 00000001409F8646: jz      short loc_1409F8686
 * 00000001409F8648: movsxd  r10, r9d
 * 00000001409F864B: mov     rdi, r13
 * 00000001409F864E: add     r10, 153h
 * 00000001409F8655: lea     r10, [rdx+r10*8]
 * 00000001409F8659: mov     rdx, [r10]
 * 00000001409F865C: lea     rax, [r14+r14]
 * 00000001409F8660: mov     ecx, r9d
 * 00000001409F8663: lea     r10, [r10-8]
 * 00000001409F8667: ror     rdx, cl
 * 00000001409F866A: mov     r14, rdx
 * 00000001409F866D: xor     r14, rax
 * 00000001409F8670: sub     r9d, edi
 * 00000001409F8673: jnz     short loc_1409F8659
 * 00000001409F8675: mov     r10, [rbp+0BE0h+arg_8]
 * 00000001409F867C: mov     r12, r15
 * 00000001409F867F: mov     rdx, [rbp+0BE0h+arg_0]
 * 00000001409F8686: mov     ecx, esi
 * 00000001409F8688: add     rdx, r12
 * 00000001409F868B: sub     ecx, r15d
 * 00000001409F868E: shr     ecx, 3
 * 00000001409F8691: test    ecx, ecx
 * 00000001409F8693: jz      short loc_1409F86AF
 * 00000001409F8695: lea     rdx, [rdx+rcx*8]
 * 00000001409F8699: mov     r9, r13
 * 00000001409F869C: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 00000001409F86A0: xor     [rdx], r8
 * 00000001409F86A3: lea     rdx, [rdx-8]
 * 00000001409F86A7: ror     r8, cl
 * 00000001409F86AA: sub     ecx, r9d
 * 00000001409F86AD: jnz     short loc_1409F86A0
 * 00000001409F86AF: mov     r12, [rbp+0BE0h+var_C40]
 * 00000001409F86B3: test    r10, r10
 * 00000001409F86B6: jz      short loc_1409F86DE
 * 00000001409F86B8: mov     rax, [rbp+0BE0h+var_C30]
 * 00000001409F86BC: lea     r8, [rbp+0BE0h+var_AB8]
 * 00000001409F86C3: mov     r9, r12
 * 00000001409F86C6: mov     [rsp+0CE0h+BugCheckParameter4], r10
 * 00000001409F86CB: mov     r12, [rbp+0BE0h+arg_0]
 * 00000001409F86D2: mov     edx, esi
 * 00000001409F86D4: mov     rcx, r12
 * 00000001409F86D7: call    KeGuardDispatchICall
 * 00000001409F86DC: jmp     short loc_1409F871E
 * 00000001409F86DE: xor     edx, edx
 * 00000001409F86E0: test    r11, r11
 * 00000001409F86E3: jnz     short loc_1409F86F8
 * 00000001409F86E5: lea     r8, [rbp+0BE0h+var_AB8]
 * 00000001409F86EC: xor     ecx, ecx
 * 00000001409F86EE: mov     rax, r12
 * 00000001409F86F1: call    KeGuardDispatchICall
 * 00000001409F86F6: jmp     short loc_1409F8717
 * 00000001409F86F8: lea     rax, [rbp+0BE0h+var_AB8]
 * 00000001409F86FF: xor     r9d, r9d
 * 00000001409F8702: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 00000001409F8707: xor     r8d, r8d
 * 00000001409F870A: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409F870F: mov     rcx, r11
 * 00000001409F8712: call    KeGuardDispatchICall
 * 00000001409F8717: mov     r12, [rbp+0BE0h+arg_0]
 * 00000001409F871E: xor     eax, eax
 * 00000001409F8720: test    r13d, r13d
 * 00000001409F8723: jz      loc_1409F885A
 * 00000001409F8729: mov     r8, rbx
 * 00000001409F872C: lea     rax, [r12+0A98h]
 * 00000001409F8734: xor     r8, r12
 * 00000001409F8737: mov     ecx, 154h
 * 00000001409F873C: mov     r13d, 1
 * 00000001409F8742: xor     [rax], rbx
 * 00000001409F8745: lea     rax, [rax-8]
 * 00000001409F8749: ror     rbx, cl
 * 00000001409F874C: sub     ecx, r13d
 * 00000001409F874F: jnz     short loc_1409F8742
 * 00000001409F8751: lea     r9, [r15-0AA0h]
 * 00000001409F8758: mov     r11, r15
 * 00000001409F875B: shr     r9, 3
 * 00000001409F875F: test    r9d, r9d
 * 00000001409F8762: jz      short loc_1409F8791
 * 00000001409F8764: movsxd  r10, r9d
 * 00000001409F8767: add     r10, 153h
 * 00000001409F876E: lea     r10, [r12+r10*8]
 * 00000001409F8772: mov     rdx, [r10]
 * 00000001409F8775: lea     rax, [r8+r8]
 * 00000001409F8779: mov     ecx, r9d
 * 00000001409F877C: lea     r10, [r10-8]
 * 00000001409F8780: ror     rdx, cl
 * 00000001409F8783: mov     r8, rdx
 * 00000001409F8786: xor     r8, rax
 * 00000001409F8789: sub     r9d, r13d
 * 00000001409F878C: jnz     short loc_1409F8772
 * 00000001409F878E: mov     r11, r15
 * 00000001409F8791: sub     esi, r15d
 * 00000001409F8794: lea     rcx, [r11+r12]
 * 00000001409F8798: shr     esi, 3
 * 00000001409F879B: test    esi, esi
 * 00000001409F879D: jz      short loc_1409F87B9
 * 00000001409F879F: mov     eax, esi
 * 00000001409F87A1: dec     rax
 * 00000001409F87A4: lea     rdx, [rcx+rax*8]
 * 00000001409F87A8: xor     [rdx], rbx
 * 00000001409F87AB: mov     ecx, esi
 * 00000001409F87AD: ror     rbx, cl
 * 00000001409F87B0: lea     rdx, [rdx-8]
 * 00000001409F87B4: sub     esi, r13d
 * 00000001409F87B7: jnz     short loc_1409F87A8
 * 00000001409F87B9: cmp     r8, r14
 * 00000001409F87BC: jz      loc_1409F886A
 * 00000001409F87C2: mov     rax, [r12+590h]
 * 00000001409F87CA: xor     edx, edx
 * 00000001409F87CC: mov     ecx, [r12+7E4h]
 * 00000001409F87D4: mov     [rax], r12
 * 00000001409F87D7: mov     [rax+10h], ecx
 * 00000001409F87DA: mov     eax, [r12+8F8h]
 * 00000001409F87E2: test    eax, eax
 * 00000001409F87E4: jnz     loc_1409F886A
 * 00000001409F87EA: mov     rax, [r12+590h]
 * 00000001409F87F2: mov     rcx, r8
 * 00000001409F87F5: xor     rcx, r14
 * 00000001409F87F8: mov     [rax+18h], rcx
 * 00000001409F87FC: mov     eax, [r12+8F8h]
 * 00000001409F8804: test    eax, eax
 * 00000001409F8806: jnz     short loc_1409F886A
 * 00000001409F8808: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F8812: mov     r14, r13
 * 00000001409F8815: add     rax, r12
 * 00000001409F8818: mov     rcx, r12
 * 00000001409F881B: mov     [r12+900h], rax
 * 00000001409F8823: xor     eax, eax
 * 00000001409F8825: mov     [r12+908h], rax
 * 00000001409F882D: mov     qword ptr [r12+910h], 10Eh
 * 00000001409F8839: mov     [r12+918h], r8
 * 00000001409F8841: mov     [r12+8F8h], r14d
 * 00000001409F8849: call    $$b8
 * 00000001409F884E: mov     r15d, 4
 * 00000001409F8854: lea     r13d, [r15+1Ch]
 * 00000001409F8858: jmp     short loc_1409F887A
 * 00000001409F885A: mov     r15d, 4
 * 00000001409F8860: lea     r13d, [r15+1Ch]
 * 00000001409F8864: lea     r14d, [r15-3]
 * 00000001409F8868: jmp     short loc_1409F887C
 * 00000001409F886A: mov     r13d, 20h ; ' '
 * 00000001409F8870: lea     r15d, [r13-1Ch]
 * 00000001409F8874: mov     r14d, 1
 * 00000001409F887A: xor     eax, eax
 * 00000001409F887C: mov     esi, [r12+0C4h]
 * 00000001409F8884: lea     rcx, [r12+620h]
 * 00000001409F888C: mov     [r12+0C4h], eax
 * 00000001409F8894: mov     r9, r12
 * 00000001409F8897: add     dword ptr [r12+828h], 620h
 * 00000001409F88A3: mov     rax, r12
 * 00000001409F88A6: mov     r10d, [r12+814h]
 * 00000001409F88AE: mov     r11, [r12+818h]
 * 00000001409F88B6: cmp     r12, rcx
 * 00000001409F88B9: jnb     short loc_1409F88CB
 * 00000001409F88BB: mov     edx, 40h ; '@'
 * 00000001409F88C0: prefetchnta byte ptr [rax]
 * 00000001409F88C3: add     rax, rdx
 * 00000001409F88C6: cmp     rax, rcx
 * 00000001409F88C9: jb      short loc_1409F88C0
 * 00000001409F88CB: mov     r8, r11
 * 00000001409F88CE: mov     ebx, 0Ch
 * 00000001409F88D3: mov     rdi, 7010008004002001h
 * 00000001409F88DD: mov     edx, 8
 * 00000001409F88E2: mov     rax, [r9]
 * 00000001409F88E5: mov     ecx, r10d
 * 00000001409F88E8: xor     rax, r8
 * 00000001409F88EB: mov     r8, [r9+8]
 * 00000001409F88EF: rol     rax, cl
 * 00000001409F88F2: add     r9, 10h
 * 00000001409F88F6: xor     r8, rax
 * 00000001409F88F9: rol     r8, cl
 * 00000001409F88FC: sub     rdx, r14
 * 00000001409F88FF: jnz     short loc_1409F88E2
 * 00000001409F8901: mov     rcx, r9
 * 00000001409F8904: sub     rcx, r12
 * 00000001409F8907: xor     rcx, r11
 * 00000001409F890A: mov     rax, rcx
 * 00000001409F890D: rol     rax, 11h
 * 00000001409F8911: xor     rcx, rax
 * 00000001409F8914: mov     rax, rdi
 * 00000001409F8917: mul     rcx
 * 00000001409F891A: xor     eax, edx
 * 00000001409F891C: mov     [rbp+0BE0h+var_3B0], rdx
 * 00000001409F8923: xor     r10d, eax
 * 00000001409F8926: mov     eax, 0FFFFFFFFh
 * 00000001409F892B: and     r10d, 3Fh
 * 00000001409F892F: cmovz   r10d, r14d
 * 00000001409F8933: add     ebx, eax
 * 00000001409F8935: jnz     short loc_1409F88DD
 * 00000001409F8937: mov     edx, r13d
 * 00000001409F893A: mov     r11, r15
 * 00000001409F893D: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F8944: xor     r8, [r9]
 * 00000001409F8947: mov     ecx, r10d
 * 00000001409F894A: rol     r8, cl
 * 00000001409F894D: add     r9, 8
 * 00000001409F8951: add     edx, 0FFFFFFF8h
 * 00000001409F8954: sub     r11, r14
 * 00000001409F8957: jnz     short loc_1409F8944
 * 00000001409F8959: mov     r13d, 0FFFFFFFFh
 * 00000001409F895F: test    edx, edx
 * 00000001409F8961: jz      short loc_1409F8978
 * 00000001409F8963: movzx   eax, byte ptr [r9]
 * 00000001409F8967: mov     ecx, r10d
 * 00000001409F896A: xor     r8, rax
 * 00000001409F896D: add     r9, r14
 * 00000001409F8970: rol     r8, cl
 * 00000001409F8973: add     edx, r13d
 * 00000001409F8976: jnz     short loc_1409F8963
 * 00000001409F8978: mov     [r12+0C4h], esi
 * 00000001409F8980: cmp     [r12+0A20h], r8
 * 00000001409F8988: jz      loc_1409F8A1B
 * 00000001409F898E: mov     rax, [r12+590h]
 * 00000001409F8996: mov     ecx, [r12+7E4h]
 * 00000001409F899E: mov     [rax], r12
 * 00000001409F89A1: mov     [rax+10h], ecx
 * 00000001409F89A4: mov     eax, [r12+8F8h]
 * 00000001409F89AC: mov     rdx, [r12+0A20h]
 * 00000001409F89B4: test    eax, eax
 * 00000001409F89B6: jnz     short loc_1409F8A1B
 * 00000001409F89B8: mov     rax, [r12+590h]
 * 00000001409F89C0: mov     rcx, r8
 * 00000001409F89C3: xor     rcx, rdx
 * 00000001409F89C6: mov     [rax+18h], rcx
 * 00000001409F89CA: mov     eax, [r12+8F8h]
 * 00000001409F89D2: test    eax, eax
 * 00000001409F89D4: jnz     short loc_1409F8A1B
 * 00000001409F89D6: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F89E0: xor     edx, edx
 * 00000001409F89E2: add     rax, r12
 * 00000001409F89E5: mov     rcx, r12
 * 00000001409F89E8: mov     [r12+900h], rax
 * 00000001409F89F0: xor     eax, eax
 * 00000001409F89F2: mov     [r12+908h], rax
 * 00000001409F89FA: mov     qword ptr [r12+910h], 109h
 * 00000001409F8A06: mov     [r12+918h], r8
 * 00000001409F8A0E: mov     [r12+8F8h], r14d
 * 00000001409F8A16: call    $$b8
 * 00000001409F8A1B: xor     edx, edx
 * 00000001409F8A1D: mov     rcx, r12
 * 00000001409F8A20: call    $$b8
 * 00000001409F8A25: mov     ecx, [r12+970h]
 * 00000001409F8A2D: xor     eax, eax
 * 00000001409F8A2F: mov     [rsp+0CE0h+var_C80], r12
 * 00000001409F8A34: mov     rsi, r12
 * 00000001409F8A37: mov     [rbp+0BE0h+var_BC8], eax
 * 00000001409F8A3A: mov     r10, 2E8BA2E8BA2E8BA3h
 * 00000001409F8A44: mov     [rbp+0BE0h+var_C38], eax
 * 00000001409F8A47: lea     r9d, [rax+5]
 * 00000001409F8A4B: lea     r8d, [rax+6]
 * 00000001409F8A4F: cmp     ecx, r13d
 * 00000001409F8A52: jz      loc_1409F8B51
 * 00000001409F8A58: mov     rax, [r12+278h]
 * 00000001409F8A60: call    KeGuardDispatchICall
 * 00000001409F8A65: mov     rbx, rax
 * 00000001409F8A68: test    rax, rax
 * 00000001409F8A6B: jnz     short loc_1409F8A88
 * 00000001409F8A6D: mov     rax, [r12+280h]
 * 00000001409F8A75: xor     ecx, ecx
 * 00000001409F8A77: call    KeGuardDispatchICall
 * 00000001409F8A7C: mov     rbx, rax
 * 00000001409F8A7F: test    rax, rax
 * 00000001409F8A82: jz      loc_1409F8B3D
 * 00000001409F8A88: mov     rax, [r12+290h]
 * 00000001409F8A90: lea     rdx, [rbp+0BE0h+var_6C0]
 * 00000001409F8A97: mov     rcx, rbx
 * 00000001409F8A9A: call    KeGuardDispatchICall
 * 00000001409F8A9F: mov     r14d, eax
 * 00000001409F8AA2: test    eax, eax
 * 00000001409F8AA4: jns     short loc_1409F8ABA
 * 00000001409F8AA6: mov     rax, [r12+288h]
 * 00000001409F8AAE: mov     rcx, rbx
 * 00000001409F8AB1: call    KeGuardDispatchICall
 * 00000001409F8AB6: xor     eax, eax
 * 00000001409F8AB8: jmp     short loc_1409F8B29
 * 00000001409F8ABA: mov     [r12+980h], rbx
 * 00000001409F8AC2: mov     rax, [r12+2B8h]
 * 00000001409F8ACA: call    KeGuardDispatchICall
 * 00000001409F8ACF: mov     rbx, rax
 * 00000001409F8AD2: mov     rax, [r12+2D8h]
 * 00000001409F8ADA: mov     rcx, rbx
 * 00000001409F8ADD: call    KeGuardDispatchICall
 * 00000001409F8AE2: mov     rdx, rax
 * 00000001409F8AE5: test    rax, rax
 * 00000001409F8AE8: jnz     short loc_1409F8AEF
 * 00000001409F8AEA: mov     ecx, r15d
 * 00000001409F8AED: jmp     short loc_1409F8B03
 * 00000001409F8AEF: mov     rax, [r12+2E8h]
 * 00000001409F8AF7: mov     rcx, rbx
 * 00000001409F8AFA: call    KeGuardDispatchICall
 * 00000001409F8AFF: xor     eax, eax
 * 00000001409F8B01: mov     ecx, eax
 * 00000001409F8B03: mov     eax, [r12+994h]
 * 00000001409F8B0B: and     eax, 0FFFFFFFBh
 * 00000001409F8B0E: or      eax, ecx
 * 00000001409F8B10: mov     [r12+994h], eax
 * 00000001409F8B18: add     dword ptr [r12+828h], 10000h
 * 00000001409F8B24: xor     eax, eax
 * 00000001409F8B26: mov     r14d, eax
 * 00000001409F8B29: test    r14d, r14d
 * 00000001409F8B2C: js      short loc_1409F8B3D
 * 00000001409F8B2E: mov     r13d, 1
 * 00000001409F8B34: mov     [rbp+0BE0h+var_C38], r13d
 * 00000001409F8B38: jmp     loc_1409F8EB6
 * 00000001409F8B3D: mov     r9d, 5
 * 00000001409F8B43: mov     r10, 2E8BA2E8BA2E8BA3h
 * 00000001409F8B4D: lea     r8d, [r9+1]
 * 00000001409F8B51: mov     eax, [r12+994h]
 * 00000001409F8B59: test    al, 8
 * 00000001409F8B5B: jz      loc_1409F8EAB
 * 00000001409F8B61: bt      eax, 0Ch
 * 00000001409F8B65: jb      loc_1409F8EAB
 * 00000001409F8B6B: rdtsc
 * 00000001409F8B6D: shl     rdx, 20h
 * 00000001409F8B71: mov     rbx, 7010008004002001h
 * 00000001409F8B7B: or      rax, rdx
 * 00000001409F8B7E: mov     rcx, rax
 * 00000001409F8B81: ror     rax, 3
 * 00000001409F8B85: xor     rcx, rax
 * 00000001409F8B88: mov     rax, rbx
 * 00000001409F8B8B: mul     rcx
 * 00000001409F8B8E: mov     [rbp+0BE0h+var_3A8], rdx
 * 00000001409F8B95: xor     dl, al
 * 00000001409F8B97: test    dl, 3
 * 00000001409F8B9A: jnz     loc_1409F8EAB
 * 00000001409F8BA0: rdtsc
 * 00000001409F8BA2: shl     rdx, 20h
 * 00000001409F8BA6: or      rax, rdx
 * 00000001409F8BA9: mov     rcx, rax
 * 00000001409F8BAC: ror     rax, 3
 * 00000001409F8BB0: xor     rcx, rax
 * 00000001409F8BB3: mov     rax, rbx
 * 00000001409F8BB6: mul     rcx
 * 00000001409F8BB9: mov     rcx, rdx
 * 00000001409F8BBC: mov     [rbp+0BE0h+var_3A0], rdx
 * 00000001409F8BC3: xor     rcx, rax
 * 00000001409F8BC6: mov     rax, r10
 * 00000001409F8BC9: mul     rcx
 * 00000001409F8BCC: shr     rdx, 1
 * 00000001409F8BCF: imul    rax, rdx, 0Bh
 * 00000001409F8BD3: sub     rcx, rax
 * 00000001409F8BD6: cmp     ecx, r9d
 * 00000001409F8BD9: ja      loc_1409F8C97
 * 00000001409F8BDF: jz      loc_1409F8C7D
 * 00000001409F8BE5: test    ecx, ecx
 * 00000001409F8BE7: jz      short loc_1409F8C63
 * 00000001409F8BE9: sub     ecx, 1
 * 00000001409F8BEC: jz      short loc_1409F8C4A
 * 00000001409F8BEE: sub     ecx, 1
 * 00000001409F8BF1: jz      short loc_1409F8C30
 * 00000001409F8BF3: cmp     ecx, 1
 * 00000001409F8BF6: jz      short loc_1409F8C12
 * 00000001409F8BF8: mov     [rbp+0BE0h+var_A50], 67076494h
 * 00000001409F8C02: mov     r9d, [rbp+0BE0h+var_A50]
 * 00000001409F8C09: rol     r9d, 4
 * 00000001409F8C0D: jmp     loc_1409F8DBC
 * 00000001409F8C12: mov     [rbp+0BE0h+var_A4C], 0A8223938h
 * 00000001409F8C1C: mov     r9d, [rbp+0BE0h+var_A4C]
 * 00000001409F8C23: xor     r9d, 3
 * 00000001409F8C27: ror     r9d, 0Fh
 * 00000001409F8C2B: jmp     loc_1409F8DBC
 * 00000001409F8C30: mov     [rbp+0BE0h+var_A48], 85B5910Dh
 * 00000001409F8C3A: mov     r9d, [rbp+0BE0h+var_A48]
 * 00000001409F8C41: ror     r9d, 2
 * 00000001409F8C45: jmp     loc_1409F8DBC
 * 00000001409F8C4A: mov     [rbp+0BE0h+var_A44], 0B2AD31A1h
 * 00000001409F8C54: mov     r9d, [rbp+0BE0h+var_A44]
 * 00000001409F8C5B: rol     r9d, 1
 * 00000001409F8C5E: jmp     loc_1409F8DBC
 * 00000001409F8C63: mov     [rbp+0BE0h+var_A40], 0D098D0D8h
 * 00000001409F8C6D: mov     r9d, [rbp+0BE0h+var_A40]
 * 00000001409F8C74: ror     r9d, 6
 * 00000001409F8C78: jmp     loc_1409F8DBC
 * 00000001409F8C7D: mov     [rbp+0BE0h+var_A3C], 288C49EDh
 * 00000001409F8C87: mov     r9d, [rbp+0BE0h+var_A3C]
 * 00000001409F8C8E: ror     r9d, 5
 * 00000001409F8C92: jmp     loc_1409F8DBC
 * 00000001409F8C97: sub     ecx, r8d
 * 00000001409F8C9A: jz      loc_1409F8DA4
 * 00000001409F8CA0: sub     ecx, 1
 * 00000001409F8CA3: jz      loc_1409F8D8D
 * 00000001409F8CA9: sub     ecx, 1
 * 00000001409F8CAC: jz      loc_1409F8D76
 * 00000001409F8CB2: cmp     ecx, 1
 * 00000001409F8CB5: jz      loc_1409F8D5B
 * 00000001409F8CBB: rdtsc
 * 00000001409F8CBD: shl     rdx, 20h
 * 00000001409F8CC1: or      rax, rdx
 * 00000001409F8CC4: mov     rcx, rax
 * 00000001409F8CC7: ror     rax, 3
 * 00000001409F8CCB: xor     rcx, rax
 * 00000001409F8CCE: mov     rax, rbx
 * 00000001409F8CD1: mul     rcx
 * 00000001409F8CD4: mov     r9, rax
 * 00000001409F8CD7: mov     [rbp+0BE0h+var_398], rdx
 * 00000001409F8CDE: xor     r9d, edx
 * 00000001409F8CE1: mov     eax, 4EC4EC4Fh
 * 00000001409F8CE6: mul     r9d
 * 00000001409F8CE9: mov     ecx, r9d
 * 00000001409F8CEC: shr     r9d, 5
 * 00000001409F8CF0: shr     edx, 3
 * 00000001409F8CF3: mov     r8d, r9d
 * 00000001409F8CF6: imul    eax, edx, 1Ah
 * 00000001409F8CF9: sub     ecx, eax
 * 00000001409F8CFB: mov     eax, 4EC4EC4Fh
 * 00000001409F8D00: mul     r9d
 * 00000001409F8D03: add     ecx, 61h ; 'a'
 * 00000001409F8D06: shr     r9d, 5
 * 00000001409F8D0A: shl     ecx, 8
 * 00000001409F8D0D: shr     edx, 3
 * 00000001409F8D10: imul    eax, edx, 1Ah
 * 00000001409F8D13: sub     r8d, eax
 * 00000001409F8D16: mov     eax, 4EC4EC4Fh
 * 00000001409F8D1B: mul     r9d
 * 00000001409F8D1E: add     r8d, 41h ; 'A'
 * 00000001409F8D22: or      r8d, ecx
 * 00000001409F8D25: shr     edx, 3
 * 00000001409F8D28: imul    eax, edx, 1Ah
 * 00000001409F8D2B: mov     ecx, r9d
 * 00000001409F8D2E: shr     r9d, 5
 * 00000001409F8D32: shl     r8d, 8
 * 00000001409F8D36: sub     ecx, eax
 * 00000001409F8D38: mov     eax, 4EC4EC4Fh
 * 00000001409F8D3D: mul     r9d
 * 00000001409F8D40: add     ecx, 61h ; 'a'
 * 00000001409F8D43: shr     edx, 3
 * 00000001409F8D46: or      ecx, r8d
 * 00000001409F8D49: imul    eax, edx, 1Ah
 * 00000001409F8D4C: shl     ecx, 8
 * 00000001409F8D4F: sub     r9d, eax
 * 00000001409F8D52: add     r9d, 41h ; 'A'
 * 00000001409F8D56: or      r9d, ecx
 * 00000001409F8D59: jmp     short loc_1409F8DBC
 * 00000001409F8D5B: mov     [rbp+0BE0h+var_A38], 0B0869E85h
 * 00000001409F8D65: mov     r9d, [rbp+0BE0h+var_A38]
 * 00000001409F8D6C: xor     r9d, 9
 * 00000001409F8D70: ror     r9d, 21h
 * 00000001409F8D74: jmp     short loc_1409F8DBC
 * 00000001409F8D76: mov     [rbp+0BE0h+var_A34], 64664142h
 * 00000001409F8D80: mov     r9d, [rbp+0BE0h+var_A34]
 * 00000001409F8D87: ror     r9d, 8
 * 00000001409F8D8B: jmp     short loc_1409F8DBC
 * 00000001409F8D8D: mov     [rbp+0BE0h+var_A30], 82C6A6D8h
 * 00000001409F8D97: mov     r9d, [rbp+0BE0h+var_A30]
 * 00000001409F8D9E: rol     r9d, 7
 * 00000001409F8DA2: jmp     short loc_1409F8DBC
 * 00000001409F8DA4: mov     [rbp+0BE0h+var_A2C], 4E574672h
 * 00000001409F8DAE: mov     r9d, [rbp+0BE0h+var_A2C]
 * 00000001409F8DB5: xor     r9d, r8d
 * 00000001409F8DB8: ror     r9d, 18h
 * 00000001409F8DBC: mov     rax, [r12+0F8h]
 * 00000001409F8DC4: mov     r8d, r9d
 * 00000001409F8DC7: mov     rdx, [r12+768h]
 * 00000001409F8DCF: mov     ecx, 200h
 * 00000001409F8DD4: call    KeGuardDispatchICall
 * 00000001409F8DD9: mov     r15, rax
 * 00000001409F8DDC: xor     eax, eax
 * 00000001409F8DDE: test    r15, r15
 * 00000001409F8DE1: jz      loc_1409F8EAD
 * 00000001409F8DE7: mov     rcx, [r12+6E8h]
 * 00000001409F8DEF: mov     rax, [r12+518h]
 * 00000001409F8DF7: mov     r14d, [rcx+rax]
 * 00000001409F8DFB: test    r14d, r14d
 * 00000001409F8DFE: jz      short loc_1409F8E2B
 * 00000001409F8E00: rdtsc
 * 00000001409F8E02: shl     rdx, 20h
 * 00000001409F8E06: or      rax, rdx
 * 00000001409F8E09: mov     rcx, rax
 * 00000001409F8E0C: ror     rax, 3
 * 00000001409F8E10: xor     rcx, rax
 * 00000001409F8E13: mov     rax, rbx
 * 00000001409F8E16: mul     rcx
 * 00000001409F8E19: mov     [rbp+0BE0h+var_390], rdx
 * 00000001409F8E20: xor     rax, rdx
 * 00000001409F8E23: xor     edx, edx
 * 00000001409F8E25: div     r14
 * 00000001409F8E28: mov     r14, rdx
 * 00000001409F8E2B: mov     rax, [r12+3B0h]
 * 00000001409F8E33: xor     ecx, ecx
 * 00000001409F8E35: call    KeGuardDispatchICall
 * 00000001409F8E3A: mov     rbx, rax
 * 00000001409F8E3D: test    rax, rax
 * 00000001409F8E40: jz      short loc_1409F8E9B
 * 00000001409F8E42: test    r14d, r14d
 * 00000001409F8E45: jz      short loc_1409F8E62
 * 00000001409F8E47: mov     rax, [r12+3B0h]
 * 00000001409F8E4F: mov     rcx, rbx
 * 00000001409F8E52: add     r14d, r13d
 * 00000001409F8E55: call    KeGuardDispatchICall
 * 00000001409F8E5A: mov     rbx, rax
 * 00000001409F8E5D: test    rax, rax
 * 00000001409F8E60: jnz     short loc_1409F8E42
 * 00000001409F8E62: mov     rsi, r12
 * 00000001409F8E65: test    rbx, rbx
 * 00000001409F8E68: jz      short loc_1409F8E9B
 * 00000001409F8E6A: mov     rax, [r12+3A0h]
 * 00000001409F8E72: mov     rcx, rbx
 * 00000001409F8E75: call    KeGuardDispatchICall
 * 00000001409F8E7A: test    eax, eax
 * 00000001409F8E7C: jns     short loc_1409F8E92
 * 00000001409F8E7E: mov     rax, [r12+3B8h]
 * 00000001409F8E86: mov     rcx, rbx
 * 00000001409F8E89: call    KeGuardDispatchICall
 * 00000001409F8E8E: xor     eax, eax
 * 00000001409F8E90: mov     ebx, eax
 * 00000001409F8E92: test    rbx, rbx
 * 00000001409F8E95: jnz     loc_1409F8F6C
 * 00000001409F8E9B: mov     rax, [r12+100h]
 * 00000001409F8EA3: mov     rcx, r15
 * 00000001409F8EA6: call    KeGuardDispatchICall
 * 00000001409F8EAB: xor     eax, eax
 * 00000001409F8EAD: mov     r13d, 1
 * 00000001409F8EB3: mov     [rbp+0BE0h+var_BC8], eax
 * 00000001409F8EB6: mov     [rbp+0BE0h+var_B10], rax
 * 00000001409F8EBD: mov     ecx, 4
 * 00000001409F8EC2: lea     rax, [rbp+0BE0h+var_B08]
 * 00000001409F8EC9: xor     r15d, r15d
 * 00000001409F8ECC: mov     r9d, 0FFFFFFFFh
 * 00000001409F8ED2: mov     [rax], r15b
 * 00000001409F8ED5: add     rax, r13
 * 00000001409F8ED8: add     ecx, r9d
 * 00000001409F8EDB: jnz     short loc_1409F8ED2
 * 00000001409F8EDD: mov     ecx, [r12+820h]
 * 00000001409F8EE5: mov     r11d, 19h
 * 00000001409F8EEB: mov     rdx, [rbp+0BE0h+arg_0]
 * 00000001409F8EF2: add     r12, 82Ch
 * 00000001409F8EF9: mov     [rbp+0BE0h+var_C08], r12
 * 00000001409F8EFD: mov     r14d, 8000h
 * 00000001409F8F03: mov     [rbp+0BE0h+var_C18], 0C000009Ah
 * 00000001409F8F0A: mov     eax, [r12]
 * 00000001409F8F0E: cmp     [rdx+828h], eax
 * 00000001409F8F14: jge     loc_140A0466C
 * 00000001409F8F1A: mov     rbx, [rbp+0BE0h+var_380]
 * 00000001409F8F21: lea     edx, [r11-18h]
 * 00000001409F8F25: mov     r14, [rbp+0BE0h+var_378]
 * 00000001409F8F2C: mov     r15d, [rbp+0BE0h+var_89C]
 * 00000001409F8F33: mov     r10d, [rbp+0BE0h+var_8D0]
 * 00000001409F8F3A: mov     [rbp+0BE0h+var_C30], rbx
 * 00000001409F8F3E: mov     [rbp+0BE0h+var_C40], r14
 * 00000001409F8F42: mov     [rbp+0BE0h+var_C28], r15d
 * 00000001409F8F46: mov     [rbp+0BE0h+var_BA0], r10d
 * 00000001409F8F4A: mov     eax, [rsi+990h]
 * 00000001409F8F50: mov     r8d, 110000h
 * 00000001409F8F56: and     eax, r8d
 * 00000001409F8F59: cmp     eax, r8d
 * 00000001409F8F5C: jz      loc_1409F90A8
 * 00000001409F8F62: xor     eax, eax
 * 00000001409F8F64: mov     dr7, rax
 * 00000001409F8F67: jmp     loc_1409F90AA
 * 00000001409F8F6C: mov     rax, [r12+438h]
 * 00000001409F8F74: lea     rdx, [rbp+0BE0h+var_6C0]
 * 00000001409F8F7B: mov     rcx, rbx
 * 00000001409F8F7E: call    KeGuardDispatchICall
 * 00000001409F8F83: mov     rax, [r12+1C0h]
 * 00000001409F8F8B: xor     r9d, r9d
 * 00000001409F8F8E: xor     r8d, r8d
 * 00000001409F8F91: mov     rdx, r15
 * 00000001409F8F94: mov     rcx, rbx
 * 00000001409F8F97: call    KeGuardDispatchICall
 * 00000001409F8F9C: rdtsc
 * 00000001409F8F9E: shl     rdx, 20h
 * 00000001409F8FA2: or      rax, rdx
 * 00000001409F8FA5: mov     rcx, rax
 * 00000001409F8FA8: ror     rax, 3
 * 00000001409F8FAC: xor     rcx, rax
 * 00000001409F8FAF: mov     rax, 7010008004002001h
 * 00000001409F8FB9: mul     rcx
 * 00000001409F8FBC: mov     rcx, r15
 * 00000001409F8FBF: mov     rbx, rdx
 * 00000001409F8FC2: mov     [rbp+0BE0h+var_388], rdx
 * 00000001409F8FC9: xor     rbx, rax
 * 00000001409F8FCC: mov     rax, [r12+1B8h]
 * 00000001409F8FD4: call    KeGuardDispatchICall
 * 00000001409F8FD9: mov     ecx, eax
 * 00000001409F8FDB: xor     edx, edx
 * 00000001409F8FDD: mov     rax, rbx
 * 00000001409F8FE0: div     rcx
 * 00000001409F8FE3: mov     rbx, rdx
 * 00000001409F8FE6: cli
 * 00000001409F8FE7: mov     rcx, gs:20h
 * 00000001409F8FF0: mov     rax, [r12+648h]
 * 00000001409F8FF8: mov     rcx, [rcx+rax]
 * 00000001409F8FFC: sti
 * 00000001409F8FFD: mov     rax, [r12+1C8h]
 * 00000001409F9005: lea     rdx, [rbp+0BE0h+var_6D0]
 * 00000001409F900C: call    KeGuardDispatchICall
 * 00000001409F9011: mov     rax, [r12+1A8h]
 * 00000001409F9019: lea     rcx, [rbp+0BE0h+var_240]
 * 00000001409F9020: mov     rdx, r15
 * 00000001409F9023: call    KeGuardDispatchICall
 * 00000001409F9028: jmp     short loc_1409F9031
 * 00000001409F902A: test    ebx, ebx
 * 00000001409F902C: jz      short loc_1409F9052
 * 00000001409F902E: add     ebx, r13d
 * 00000001409F9031: mov     rax, [r12+1B0h]
 * 00000001409F9039: lea     rdx, [rbp+0BE0h+var_240]
 * 00000001409F9040: lea     rcx, [rbp+0BE0h+var_B1C]
 * 00000001409F9047: call    KeGuardDispatchICall
 * 00000001409F904C: test    eax, eax
 * 00000001409F904E: jns     short loc_1409F902A
 * 00000001409F9050: jmp     short loc_1409F906C
 * 00000001409F9052: mov     rax, [r12+1A0h]
 * 00000001409F905A: lea     rcx, [rbp+0BE0h+var_6D0]
 * 00000001409F9061: mov     edx, [rbp+0BE0h+var_B1C]
 * 00000001409F9067: call    KeGuardDispatchICall
 * 00000001409F906C: mov     rax, [r12+1D0h]
 * 00000001409F9074: lea     rdx, [rbp+0BE0h+var_260]
 * 00000001409F907B: lea     rcx, [rbp+0BE0h+var_6D0]
 * 00000001409F9082: call    KeGuardDispatchICall
 * 00000001409F9087: mov     rax, [r12+100h]
 * 00000001409F908F: mov     rcx, r15
 * 00000001409F9092: call    KeGuardDispatchICall
 * 00000001409F9097: mov     r13d, 1
 * 00000001409F909D: xor     eax, eax
 * 00000001409F909F: mov     [rbp+0BE0h+var_BC8], r13d
 * 00000001409F90A3: jmp     loc_1409F8EB6
 * 00000001409F90A8: xor     eax, eax
 * 00000001409F90AA: cmp     ecx, [rsi+80Ch]
 * 00000001409F90B0: jnz     short loc_1409F90E8
 * 00000001409F90B2: add     [rsi+830h], edx
 * 00000001409F90B8: mov     ecx, eax
 * 00000001409F90BA: cmp     dword ptr [rsi+958h], 0Bh
 * 00000001409F90C1: jnz     short loc_1409F90E8
 * 00000001409F90C3: mov     eax, [rsi+990h]
 * 00000001409F90C9: test    dl, al
 * 00000001409F90CB: jnz     short loc_1409F90E8
 * 00000001409F90CD: cmp     [rsi+970h], r9d
 * 00000001409F90D4: jnz     short loc_1409F90E0
 * 00000001409F90D6: xor     eax, eax
 * 00000001409F90D8: mov     [rsi+970h], eax
 * 00000001409F90DE: jmp     short loc_1409F90E8
 * 00000001409F90E0: or      eax, edx
 * 00000001409F90E2: mov     [rsi+990h], eax
 * 00000001409F90E8: mov     rax, [rsi+0A78h]
 * 00000001409F90EF: mov     r9, rsi
 * 00000001409F90F2: test    rax, rax
 * 00000001409F90F5: mov     [rbp+0BE0h+var_BE8], ecx
 * 00000001409F90F8: cmovnz  r9, rax
 * 00000001409F90FC: xor     eax, eax
 * 00000001409F90FE: mov     r8d, eax
 * 00000001409F9101: mov     r13d, [r9+808h]
 * 00000001409F9108: add     r13, r9
 * 00000001409F910B: mov     [rsp+0CE0h+var_C90], r13
 * 00000001409F9110: cmp     dword ptr [rbp+0BE0h+var_B10], eax
 * 00000001409F9116: jz      short loc_1409F9136
 * 00000001409F9118: cmp     dword ptr [rbp+0BE0h+var_B10+4], ecx
 * 00000001409F911E: ja      short loc_1409F9136
 * 00000001409F9120: mov     r13d, [rbp+0BE0h+var_B08]
 * 00000001409F9127: mov     r8d, dword ptr [rbp+0BE0h+var_B10+4]
 * 00000001409F912E: add     r13, r9
 * 00000001409F9131: mov     [rsp+0CE0h+var_C90], r13
 * 00000001409F9136: mov     edx, 1
 * 00000001409F913B: cmp     r8d, ecx
 * 00000001409F913E: jz      loc_1409F926F
 * 00000001409F9144: sub     ecx, r8d
 * 00000001409F9147: lea     ebx, [rdx+1]
 * 00000001409F914A: mov     r10d, ecx
 * 00000001409F914D: lea     r14d, [rdx+0Bh]
 * 00000001409F9151: add     r8d, ecx
 * 00000001409F9154: mov     rsi, 0AAAAAAAAAAAAAAABh
 * 00000001409F915E: mov     ecx, [r13+0]
 * 00000001409F9162: cmp     ecx, r14d
 * 00000001409F9165: jg      short loc_1409F91AA
 * 00000001409F9167: jz      short loc_1409F91C7
 * 00000001409F9169: sub     ecx, 1
 * 00000001409F916C: jz      short loc_1409F91C7
 * 00000001409F916E: sub     ecx, 6
 * 00000001409F9171: jz      short loc_1409F9199
 * 00000001409F9173: sub     ecx, 1
 * 00000001409F9176: jz      short loc_1409F918F
 * 00000001409F9178: cmp     ecx, ebx
 * 00000001409F917A: jnz     loc_1409F920B
 * 00000001409F9180: mov     eax, [r13+1Ch]
 * 00000001409F9184: add     eax, 3
 * 00000001409F9187: shl     eax, 4
 * 00000001409F918A: jmp     loc_1409F9249
 * 00000001409F918F: movzx   eax, word ptr [r13+20h]
 * 00000001409F9194: jmp     loc_1409F9243
 * 00000001409F9199: mov     eax, [r13+18h]
 * 00000001409F919D: add     eax, ebx
 * 00000001409F919F: lea     eax, [rax+rax*2]
 * 00000001409F91A2: shl     eax, 3
 * 00000001409F91A5: jmp     loc_1409F9249
 * 00000001409F91AA: cmp     ecx, 1Ch
 * 00000001409F91AD: jz      loc_1409F923E
 * 00000001409F91B3: cmp     ecx, 1Eh
 * 00000001409F91B6: jz      short loc_1409F9212
 * 00000001409F91B8: cmp     ecx, 20h ; ' '
 * 00000001409F91BB: jle     short loc_1409F920B
 * 00000001409F91BD: cmp     ecx, 22h ; '"'
 * 00000001409F91C0: jle     short loc_1409F91E3
 * 00000001409F91C2: cmp     ecx, 2Bh ; '+'
 * 00000001409F91C5: jnz     short loc_1409F920B
 * 00000001409F91C7: mov     ecx, [r13+10h]
 * 00000001409F91CB: mov     rax, rsi
 * 00000001409F91CE: mul     rcx
 * 00000001409F91D1: shr     rdx, 3
 * 00000001409F91D5: lea     eax, ds:30h[rdx*4]
 * 00000001409F91DC: mov     edx, 1
 * 00000001409F91E1: jmp     short loc_1409F9249
 * 00000001409F91E3: mov     ecx, [r13+20h]
 * 00000001409F91E7: mov     edx, [r13+28h]
 * 00000001409F91EB: and     ecx, 0FFFh
 * 00000001409F91F1: add     rdx, 0FFFh
 * 00000001409F91F8: add     rdx, rcx
 * 00000001409F91FB: shr     rdx, 0Ch
 * 00000001409F91FF: lea     eax, [rdx+rdx*4]
 * 00000001409F9202: lea     eax, ds:30h[rax*4]
 * 00000001409F9209: jmp     short loc_1409F91DC
 * 00000001409F920B: mov     eax, 30h ; '0'
 * 00000001409F9210: jmp     short loc_1409F9249
 * 00000001409F9212: mov     eax, [r13+24h]
 * 00000001409F9216: lea     ecx, [rax-1]
 * 00000001409F9219: neg     eax
 * 00000001409F921B: sbb     eax, eax
 * 00000001409F921D: and     ecx, eax
 * 00000001409F921F: mov     rax, rsi
 * 00000001409F9222: mul     rcx
 * 00000001409F9225: movzx   eax, word ptr [r13+28h]
 * 00000001409F922A: shr     rdx, 3
 * 00000001409F922E: add     edx, 7
 * 00000001409F9231: and     edx, 0FFFFFFF8h
 * 00000001409F9234: add     eax, ebx
 * 00000001409F9236: lea     eax, [rax+rax*2]
 * 00000001409F9239: lea     eax, [rdx+rax*8]
 * 00000001409F923C: jmp     short loc_1409F91DC
 * 00000001409F923E: movzx   eax, word ptr [r13+28h]
 * 00000001409F9243: add     eax, 37h ; '7'
 * 00000001409F9246: and     eax, 0FFFFFFF8h
 * 00000001409F9249: add     r13, rax
 * 00000001409F924C: sub     r10, rdx
 * 00000001409F924F: jnz     loc_1409F915E
 * 00000001409F9255: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F925A: mov     r12, [rbp+0BE0h+var_C08]
 * 00000001409F925E: mov     rbx, [rbp+0BE0h+var_C30]
 * 00000001409F9262: mov     r14, [rbp+0BE0h+var_C40]
 * 00000001409F9266: mov     r15d, [rbp+0BE0h+var_C28]
 * 00000001409F926A: mov     [rsp+0CE0h+var_C90], r13
 * 00000001409F926F: mov     eax, r13d
 * 00000001409F9272: mov     dword ptr [rbp+0BE0h+var_B10], edx
 * 00000001409F9278: sub     eax, r9d
 * 00000001409F927B: mov     dword ptr [rbp+0BE0h+var_B10+4], r8d
 * 00000001409F9282: mov     [rbp+0BE0h+var_B08], eax
 * 00000001409F9288: mov     r10d, [r13+0]
 * 00000001409F928C: mov     dword ptr [rbp+0BE0h+arg_8], r10d
 * 00000001409F9293: cmp     r10d, 1Ch
 * 00000001409F9297: jg      loc_1409FEA01
 * 00000001409F929D: jz      loc_1409FDFCE
 * 00000001409F92A3: mov     r8d, 0Ch
 * 00000001409F92A9: cmp     r10d, r8d
 * 00000001409F92AC: jg      loc_1409FA844
 * 00000001409F92B2: jz      loc_140A02549
 * 00000001409F92B8: xor     eax, eax
 * 00000001409F92BA: mov     ecx, r10d
 * 00000001409F92BD: test    r10d, r10d
 * 00000001409F92C0: jz      loc_1409FA61F
 * 00000001409F92C6: sub     ecx, 1
 * 00000001409F92C9: jz      loc_140A0254B
 * 00000001409F92CF: sub     ecx, 3
 * 00000001409F92D2: jz      loc_1409FA38A
 * 00000001409F92D8: sub     ecx, 1
 * 00000001409F92DB: jz      loc_1409FA054
 * 00000001409F92E1: lea     r14d, [r8-0Ah]
 * 00000001409F92E5: sub     ecx, r14d
 * 00000001409F92E8: jz      loc_1409F9EE4
 * 00000001409F92EE: sub     ecx, 1
 * 00000001409F92F1: jz      loc_1409F9A98
 * 00000001409F92F7: sub     ecx, r14d
 * 00000001409F92FA: jz      loc_1409F9701
 * 00000001409F9300: cmp     ecx, 1
 * 00000001409F9303: jnz     loc_140A03767
 * 00000001409F9309: cmp     [rsi+980h], rax
 * 00000001409F9310: jnz     short loc_1409F937B
 * 00000001409F9312: mov     [rsi+824h], eax
 * 00000001409F9318: xor     r15d, r15d
 * 00000001409F931B: mov     r14d, 8000h
 * 00000001409F9321: mov     edx, [rbp+0BE0h+var_BE8]
 * 00000001409F9324: cmp     dword ptr [rsi+824h], 0
 * 00000001409F932B: lea     ecx, [rdx-1]
 * 00000001409F932E: cmovz   ecx, edx
 * 00000001409F9331: mov     edx, 1
 * 00000001409F9336: add     ecx, edx
 * 00000001409F9338: cmp     [rsi+8F8h], r15d
 * 00000001409F933F: jnz     loc_140A04669
 * 00000001409F9345: lea     r12, [rsi+82Ch]
 * 00000001409F934C: mov     eax, [r12]
 * 00000001409F9350: mov     [rbp+0BE0h+var_C08], r12
 * 00000001409F9354: cmp     [rsi+828h], eax
 * 00000001409F935A: jge     loc_140A04669
 * 00000001409F9360: mov     rbx, [rbp+0BE0h+var_C30]
 * 00000001409F9364: lea     r11d, [rdx+18h]
 * 00000001409F9368: mov     r14, [rbp+0BE0h+var_C40]
 * 00000001409F936C: mov     r9d, 0FFFFFFFFh
 * 00000001409F9372: mov     r15d, [rbp+0BE0h+var_C28]
 * 00000001409F9376: jmp     loc_1409F8F4A
 * 00000001409F937B: cmp     [rsi+824h], eax
 * 00000001409F9381: jnz     short loc_1409F93D9
 * 00000001409F9383: mov     eax, [rsi+994h]
 * 00000001409F9389: mov     ecx, eax
 * 00000001409F938B: shl     ecx, 3
 * 00000001409F938E: xor     ecx, eax
 * 00000001409F9390: and     ecx, 20h
 * 00000001409F9393: xor     ecx, eax
 * 00000001409F9395: mov     [rsi+994h], ecx
 * 00000001409F939B: test    cl, 4
 * 00000001409F939E: jz      loc_1409F9489
 * 00000001409F93A4: mov     r14d, [r13+8]
 * 00000001409F93A8: mov     ecx, [r13+10h]
 * 00000001409F93AC: and     r14d, 0FFFh
 * 00000001409F93B3: mov     rbx, [r13+8]
 * 00000001409F93B7: add     r14, 0FFFh
 * 00000001409F93BE: add     r14, rcx
 * 00000001409F93C1: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001409F93C8: shr     r14, 0Ch
 * 00000001409F93CC: test    r14, r14
 * 00000001409F93CF: jz      loc_1409F9318
 * 00000001409F93D5: xor     edi, edi
 * 00000001409F93D7: jmp     short loc_1409F93F6
 * 00000001409F93D9: mov     ecx, [rsi+994h]
 * 00000001409F93DF: mov     eax, ecx
 * 00000001409F93E1: shr     eax, 3
 * 00000001409F93E4: xor     eax, ecx
 * 00000001409F93E6: test    al, 4
 * 00000001409F93E8: jz      short loc_1409F939B
 * 00000001409F93EA: xor     eax, eax
 * 00000001409F93EC: jmp     loc_1409F9312
 * 00000001409F93F1: mov     edx, 1
 * 00000001409F93F6: mov     rax, [rsi+2B0h]
 * 00000001409F93FD: mov     rcx, rbx
 * 00000001409F9400: sub     r14, rdx
 * 00000001409F9403: call    KeGuardDispatchICall
 * 00000001409F9408: test    al, al
 * 00000001409F940A: jz      short loc_1409F9463
 * 00000001409F940C: cmp     [rsi+8F8h], edi
 * 00000001409F9412: jnz     short loc_1409F9463
 * 00000001409F9414: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F941E: xor     edx, edx
 * 00000001409F9420: add     rax, rsi
 * 00000001409F9423: mov     rcx, rsi
 * 00000001409F9426: mov     [rsi+900h], rax
 * 00000001409F942D: mov     rax, 0B3B74BDEE4453415h
 * 00000001409F9437: add     rax, r13
 * 00000001409F943A: mov     [rsi+908h], rax
 * 00000001409F9441: movsxd  rax, dword ptr [r13+0]
 * 00000001409F9445: mov     [rsi+910h], rax
 * 00000001409F944C: mov     eax, 1
 * 00000001409F9451: mov     [rsi+918h], rbx
 * 00000001409F9458: mov     [rsi+8F8h], eax
 * 00000001409F945E: call    $$b8
 * 00000001409F9463: add     dword ptr [rsi+828h], 100h
 * 00000001409F946D: add     rbx, 1000h
 * 00000001409F9474: test    r14, r14
 * 00000001409F9477: jnz     loc_1409F93F1
 * 00000001409F947D: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F9484: jmp     loc_1409F9318
 * 00000001409F9489: mov     r14, [r13+8]
 * 00000001409F948D: mov     r8d, [r13+10h]
 * 00000001409F9491: mov     r9, r14
 * 00000001409F9494: add     [rsi+828h], r8d
 * 00000001409F949B: mov     rax, r14
 * 00000001409F949E: mov     r10d, [rsi+814h]
 * 00000001409F94A5: mov     r15, [rsi+818h]
 * 00000001409F94AC: lea     rcx, [r14+r8]
 * 00000001409F94B0: cmp     r14, rcx
 * 00000001409F94B3: jnb     short loc_1409F94C5
 * 00000001409F94B5: mov     edx, 40h ; '@'
 * 00000001409F94BA: prefetchnta byte ptr [rax]
 * 00000001409F94BD: add     rax, rdx
 * 00000001409F94C0: cmp     rax, rcx
 * 00000001409F94C3: jb      short loc_1409F94BA
 * 00000001409F94C5: mov     r11d, r8d
 * 00000001409F94C8: mov     rbx, r15
 * 00000001409F94CB: shr     r11d, 7
 * 00000001409F94CF: mov     r12d, 1
 * 00000001409F94D5: test    r11d, r11d
 * 00000001409F94D8: jz      short loc_1409F9545
 * 00000001409F94DA: mov     rsi, 7010008004002001h
 * 00000001409F94E4: mov     edx, 8
 * 00000001409F94E9: mov     rax, [r9]
 * 00000001409F94EC: mov     ecx, r10d
 * 00000001409F94EF: xor     rax, rbx
 * 00000001409F94F2: mov     rbx, [r9+8]
 * 00000001409F94F6: rol     rax, cl
 * 00000001409F94F9: add     r9, 10h
 * 00000001409F94FD: xor     rbx, rax
 * 00000001409F9500: rol     rbx, cl
 * 00000001409F9503: sub     rdx, r12
 * 00000001409F9506: jnz     short loc_1409F94E9
 * 00000001409F9508: mov     rcx, r9
 * 00000001409F950B: sub     rcx, r14
 * 00000001409F950E: xor     rcx, r15
 * 00000001409F9511: mov     rax, rcx
 * 00000001409F9514: rol     rax, 11h
 * 00000001409F9518: xor     rcx, rax
 * 00000001409F951B: mov     rax, rsi
 * 00000001409F951E: mul     rcx
 * 00000001409F9521: xor     r10d, eax
 * 00000001409F9524: mov     [rbp+0BE0h+var_370], rdx
 * 00000001409F952B: xor     r10d, edx
 * 00000001409F952E: mov     eax, 0FFFFFFFFh
 * 00000001409F9533: and     r10d, 3Fh
 * 00000001409F9537: cmovz   r10d, r12d
 * 00000001409F953B: add     r11d, eax
 * 00000001409F953E: jnz     short loc_1409F94E4
 * 00000001409F9540: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F9545: and     r8d, 7Fh
 * 00000001409F9549: cmp     r8d, 8
 * 00000001409F954D: jb      short loc_1409F956C
 * 00000001409F954F: mov     edx, r8d
 * 00000001409F9552: shr     rdx, 3
 * 00000001409F9556: xor     rbx, [r9]
 * 00000001409F9559: mov     ecx, r10d
 * 00000001409F955C: rol     rbx, cl
 * 00000001409F955F: add     r9, 8
 * 00000001409F9563: add     r8d, 0FFFFFFF8h
 * 00000001409F9567: sub     rdx, r12
 * 00000001409F956A: jnz     short loc_1409F9556
 * 00000001409F956C: test    r8d, r8d
 * 00000001409F956F: jz      short loc_1409F9590
 * 00000001409F9571: mov     esi, 0FFFFFFFFh
 * 00000001409F9576: movzx   eax, byte ptr [r9]
 * 00000001409F957A: mov     ecx, r10d
 * 00000001409F957D: xor     rbx, rax
 * 00000001409F9580: add     r9, r12
 * 00000001409F9583: rol     rbx, cl
 * 00000001409F9586: add     r8d, esi
 * 00000001409F9589: jnz     short loc_1409F9576
 * 00000001409F958B: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F9590: mov     rax, rbx
 * 00000001409F9593: shr     rax, 1Fh
 * 00000001409F9597: xor     r15d, r15d
 * 00000001409F959A: jmp     short loc_1409F95A2
 * 00000001409F959C: xor     ebx, eax
 * 00000001409F959E: shr     rax, 1Fh
 * 00000001409F95A2: test    rax, rax
 * 00000001409F95A5: jnz     short loc_1409F959C
 * 00000001409F95A7: mov     edx, [r13+14h]
 * 00000001409F95AB: btr     ebx, 1Fh
 * 00000001409F95AF: cmp     ebx, edx
 * 00000001409F95B1: jz      loc_1409F931B
 * 00000001409F95B7: mov     ecx, [r13+10h]
 * 00000001409F95BB: mov     r8, [r13+8]
 * 00000001409F95BF: test    rcx, rcx
 * 00000001409F95C2: jz      loc_1409F967C
 * 00000001409F95C8: mov     eax, [rsi+994h]
 * 00000001409F95CE: mov     r9d, 40h ; '@'
 * 00000001409F95D4: test    r9b, al
 * 00000001409F95D7: jz      loc_1409F967C
 * 00000001409F95DD: mov     r12, cr8
 * 00000001409F95E1: lea     eax, [r9-3Eh]
 * 00000001409F95E5: mov     cr8, rax
 * 00000001409F95E9: mov     r14, r8
 * 00000001409F95EC: lea     rax, [rcx-1]
 * 00000001409F95F0: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409F95F7: add     rax, r8
 * 00000001409F95FA: or      rax, 0FFFh
 * 00000001409F9600: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409F9607: lea     r13, [r14-1]
 * 00000001409F960B: movzx   r15d, r12b
 * 00000001409F960F: mov     rax, [rsi+468h]
 * 00000001409F9616: xor     edx, edx
 * 00000001409F9618: mov     rcx, r14
 * 00000001409F961B: call    KeGuardDispatchICall
 * 00000001409F9620: cmp     eax, 0C000022Dh
 * 00000001409F9625: jnz     short loc_1409F964B
 * 00000001409F9627: mov     eax, 1
 * 00000001409F962C: cmp     r12b, al
 * 00000001409F962F: ja      short loc_1409F964F
 * 00000001409F9631: movzx   r15d, r12b
 * 00000001409F9635: mov     cr8, r15
 * 00000001409F9639: mov     al, [r14]
 * 00000001409F963C: mov     rax, cr8
 * 00000001409F9640: mov     eax, 2
 * 00000001409F9645: mov     cr8, rax
 * 00000001409F9649: jmp     short loc_1409F960F
 * 00000001409F964B: test    eax, eax
 * 00000001409F964D: js      short loc_1409F966F
 * 00000001409F964F: add     r14, 1000h
 * 00000001409F9656: add     r13, 1000h
 * 00000001409F965D: cmp     r13, [rbp+0BE0h+arg_8]
 * 00000001409F9664: jnz     short loc_1409F960B
 * 00000001409F9666: mov     cr8, r15
 * 00000001409F966A: jmp     loc_1409F9318
 * 00000001409F966F: mov     cr8, r15
 * 00000001409F9673: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409F9678: mov     edx, [r13+14h]
 * 00000001409F967C: mov     eax, [rsi+8F8h]
 * 00000001409F9682: xor     r15d, r15d
 * 00000001409F9685: test    eax, eax
 * 00000001409F9687: jnz     short loc_1409F96A1
 * 00000001409F9689: mov     ecx, ebx
 * 00000001409F968B: mov     eax, edx
 * 00000001409F968D: xor     rcx, rax
 * 00000001409F9690: mov     rax, [rsi+590h]
 * 00000001409F9697: mov     [rax+18h], rcx
 * 00000001409F969B: mov     eax, [rsi+8F8h]
 * 00000001409F96A1: mov     rcx, [r13+8]
 * 00000001409F96A5: test    eax, eax
 * 00000001409F96A7: jnz     loc_1409F931B
 * 00000001409F96AD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F96B7: add     rax, rsi
 * 00000001409F96BA: mov     [rsi+900h], rax
 * 00000001409F96C1: mov     rax, 0B3B74BDEE4453415h
 * 00000001409F96CB: add     rax, r13
 * 00000001409F96CE: mov     [rsi+908h], rax
 * 00000001409F96D5: movsxd  rax, dword ptr [r13+0]
 * 00000001409F96D9: mov     [rsi+910h], rax
 * 00000001409F96E0: mov     [rsi+918h], rcx
 * 00000001409F96E7: mov     eax, 1
 * 00000001409F96EC: mov     [rsi+8F8h], eax
 * 00000001409F96F2: xor     edx, edx
 * 00000001409F96F4: mov     rcx, rsi
 * 00000001409F96F7: call    $$b8
 * 00000001409F96FC: jmp     loc_1409F931B
 * 00000001409F9701: cmp     [r13+18h], eax
 * 00000001409F9705: jz      short loc_1409F9748
 * 00000001409F9707: cmp     [rsi+980h], rax
 * 00000001409F970E: jz      loc_1409F98B9
 * 00000001409F9714: mov     ecx, [rsi+994h]
 * 00000001409F971A: test    cl, 4
 * 00000001409F971D: jnz     loc_1409F98B9
 * 00000001409F9723: lea     rax, [rsi+824h]
 * 00000001409F972A: xor     r15d, r15d
 * 00000001409F972D: cmp     [rax], r15d
 * 00000001409F9730: jnz     loc_1409F98A8
 * 00000001409F9736: mov     eax, ecx
 * 00000001409F9738: shl     eax, 3
 * 00000001409F973B: xor     eax, ecx
 * 00000001409F973D: and     eax, 20h
 * 00000001409F9740: xor     eax, ecx
 * 00000001409F9742: mov     [rsi+994h], eax
 * 00000001409F9748: mov     edx, [r13+1Ch]
 * 00000001409F974C: lea     rax, [rsi+824h]
 * 00000001409F9753: mov     r14d, [rax]
 * 00000001409F9756: lea     rcx, [r13+30h]
 * 00000001409F975A: shl     r14, 4
 * 00000001409F975E: add     r14, rcx
 * 00000001409F9761: shl     rdx, 4
 * 00000001409F9765: add     rdx, rcx
 * 00000001409F9768: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409F976C: mov     [rbp+0BE0h+arg_8], rdx
 * 00000001409F9773: mov     [rsp+0CE0h+var_C88], r14
 * 00000001409F9778: xor     eax, eax
 * 00000001409F977A: cmp     [r14], eax
 * 00000001409F977D: jl      loc_1409F99A4
 * 00000001409F9783: mov     rdi, [r14+8]
 * 00000001409F9787: mov     r8d, [r14+4]
 * 00000001409F978B: mov     r9, rdi
 * 00000001409F978E: add     [rsi+828h], r8d
 * 00000001409F9795: mov     rax, rdi
 * 00000001409F9798: mov     r11d, [rsi+814h]
 * 00000001409F979F: mov     r12d, r8d
 * 00000001409F97A2: mov     r15, [rsi+818h]
 * 00000001409F97A9: lea     rcx, [rdi+r8]
 * 00000001409F97AD: cmp     rdi, rcx
 * 00000001409F97B0: jnb     short loc_1409F97C3
 * 00000001409F97B2: mov     r10d, 40h ; '@'
 * 00000001409F97B8: prefetchnta byte ptr [rax]
 * 00000001409F97BB: add     rax, r10
 * 00000001409F97BE: cmp     rax, rcx
 * 00000001409F97C1: jb      short loc_1409F97B8
 * 00000001409F97C3: mov     r10d, r8d
 * 00000001409F97C6: mov     rbx, r15
 * 00000001409F97C9: shr     r10d, 7
 * 00000001409F97CD: test    r10d, r10d
 * 00000001409F97D0: jz      short loc_1409F984B
 * 00000001409F97D2: mov     esi, 1
 * 00000001409F97D7: mov     r12d, 0FFFFFFFFh
 * 00000001409F97DD: mov     r14, 7010008004002001h
 * 00000001409F97E7: mov     eax, 8
 * 00000001409F97EC: xor     rbx, [r9]
 * 00000001409F97EF: mov     ecx, r11d
 * 00000001409F97F2: rol     rbx, cl
 * 00000001409F97F5: xor     rbx, [r9+8]
 * 00000001409F97F9: add     r9, 10h
 * 00000001409F97FD: rol     rbx, cl
 * 00000001409F9800: sub     rax, rsi
 * 00000001409F9803: jnz     short loc_1409F97EC
 * 00000001409F9805: mov     rcx, r9
 * 00000001409F9808: sub     rcx, rdi
 * 00000001409F980B: xor     rcx, r15
 * 00000001409F980E: mov     rax, rcx
 * 00000001409F9811: rol     rax, 11h
 * 00000001409F9815: xor     rcx, rax
 * 00000001409F9818: mov     rax, r14
 * 00000001409F981B: mul     rcx
 * 00000001409F981E: xor     eax, edx
 * 00000001409F9820: mov     [rbp+0BE0h+var_368], rdx
 * 00000001409F9827: xor     r11d, eax
 * 00000001409F982A: and     r11d, 3Fh
 * 00000001409F982E: cmovz   r11d, esi
 * 00000001409F9832: add     r10d, r12d
 * 00000001409F9835: jnz     short loc_1409F97E7
 * 00000001409F9837: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F983C: mov     r12, r8
 * 00000001409F983F: mov     r14, [rsp+0CE0h+var_C88]
 * 00000001409F9844: mov     rdx, [rbp+0BE0h+arg_8]
 * 00000001409F984B: and     r8d, 7Fh
 * 00000001409F984F: mov     r10d, 1
 * 00000001409F9855: cmp     r8d, 8
 * 00000001409F9859: jb      short loc_1409F9878
 * 00000001409F985B: mov     eax, r8d
 * 00000001409F985E: shr     rax, 3
 * 00000001409F9862: xor     rbx, [r9]
 * 00000001409F9865: mov     ecx, r11d
 * 00000001409F9868: rol     rbx, cl
 * 00000001409F986B: add     r9, 8
 * 00000001409F986F: add     r8d, 0FFFFFFF8h
 * 00000001409F9873: sub     rax, r10
 * 00000001409F9876: jnz     short loc_1409F9862
 * 00000001409F9878: test    r8d, r8d
 * 00000001409F987B: jz      short loc_1409F989C
 * 00000001409F987D: mov     esi, 0FFFFFFFFh
 * 00000001409F9882: movzx   eax, byte ptr [r9]
 * 00000001409F9886: mov     ecx, r11d
 * 00000001409F9889: xor     rbx, rax
 * 00000001409F988C: add     r9, r10
 * 00000001409F988F: rol     rbx, cl
 * 00000001409F9892: add     r8d, esi
 * 00000001409F9895: jnz     short loc_1409F9882
 * 00000001409F9897: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F989C: mov     rax, rbx
 * 00000001409F989F: shr     rax, 1Fh
 * 00000001409F98A3: xor     r15d, r15d
 * 00000001409F98A6: jmp     short loc_1409F98D1
 * 00000001409F98A8: test    cl, 20h
 * 00000001409F98AB: jz      loc_1409F9748
 * 00000001409F98B1: mov     r14d, r15d
 * 00000001409F98B4: jmp     loc_1409F9A90
 * 00000001409F98B9: mov     r14d, eax
 * 00000001409F98BC: xor     r15d, r15d
 * 00000001409F98BF: lea     rax, [rsi+824h]
 * 00000001409F98C6: jmp     loc_1409F9A90
 * 00000001409F98CB: xor     ebx, eax
 * 00000001409F98CD: shr     rax, 1Fh
 * 00000001409F98D1: test    rax, rax
 * 00000001409F98D4: jnz     short loc_1409F98CB
 * 00000001409F98D6: mov     ecx, [r14]
 * 00000001409F98D9: btr     ebx, 1Fh
 * 00000001409F98DD: mov     eax, ecx
 * 00000001409F98DF: btr     eax, 1Fh
 * 00000001409F98E3: cmp     ebx, eax
 * 00000001409F98E5: jz      loc_1409F9A73
 * 00000001409F98EB: test    r12, r12
 * 00000001409F98EE: jz      loc_1409F99F3
 * 00000001409F98F4: mov     eax, [rsi+994h]
 * 00000001409F98FA: mov     edx, 40h ; '@'
 * 00000001409F98FF: test    dl, al
 * 00000001409F9901: jz      loc_1409F99F3
 * 00000001409F9907: mov     r13, cr8
 * 00000001409F990B: lea     eax, [rdx-3Eh]
 * 00000001409F990E: mov     cr8, rax
 * 00000001409F9912: mov     r15, rdi
 * 00000001409F9915: lea     rax, [rdi-1]
 * 00000001409F9919: and     r15, 0FFFFFFFFFFFFF000h
 * 00000001409F9920: add     rax, r12
 * 00000001409F9923: or      rax, 0FFFh
 * 00000001409F9929: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409F992D: lea     rax, [r15-1]
 * 00000001409F9931: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409F9936: movzx   r12d, r13b
 * 00000001409F993A: mov     rax, [rsi+468h]
 * 00000001409F9941: xor     edx, edx
 * 00000001409F9943: mov     rcx, r15
 * 00000001409F9946: call    KeGuardDispatchICall
 * 00000001409F994B: cmp     eax, 0C000022Dh
 * 00000001409F9950: jnz     short loc_1409F9976
 * 00000001409F9952: mov     eax, 1
 * 00000001409F9957: cmp     r13b, al
 * 00000001409F995A: ja      short loc_1409F997A
 * 00000001409F995C: movzx   r12d, r13b
 * 00000001409F9960: mov     cr8, r12
 * 00000001409F9964: mov     al, [r15]
 * 00000001409F9967: mov     rax, cr8
 * 00000001409F996B: mov     eax, 2
 * 00000001409F9970: mov     cr8, rax
 * 00000001409F9974: jmp     short loc_1409F993A
 * 00000001409F9976: test    eax, eax
 * 00000001409F9978: js      short loc_1409F99E7
 * 00000001409F997A: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409F997F: mov     ecx, 1000h
 * 00000001409F9984: add     rax, rcx
 * 00000001409F9987: add     r15, rcx
 * 00000001409F998A: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409F998F: cmp     rax, [rbp+0BE0h+var_C50]
 * 00000001409F9993: jnz     short loc_1409F9936
 * 00000001409F9995: mov     cr8, r12
 * 00000001409F9999: mov     rdx, [rbp+0BE0h+arg_8]
 * 00000001409F99A0: mov     r12, [rbp+0BE0h+var_C08]
 * 00000001409F99A4: xor     r15d, r15d
 * 00000001409F99A7: add     r14, 10h
 * 00000001409F99AB: mov     [rsp+0CE0h+var_C88], r14
 * 00000001409F99B0: cmp     r14, rdx
 * 00000001409F99B3: jnb     short loc_1409F99CD
 * 00000001409F99B5: mov     eax, [r12]
 * 00000001409F99B9: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409F99BE: cmp     [rsi+828h], eax
 * 00000001409F99C4: jl      loc_1409F9778
 * 00000001409F99CA: cmp     r14, rdx
 * 00000001409F99CD: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409F99D4: jnz     loc_1409F9A7C
 * 00000001409F99DA: xor     eax, eax
 * 00000001409F99DC: mov     r14d, eax
 * 00000001409F99DF: xor     r15d, r15d
 * 00000001409F99E2: jmp     loc_1409F9A8C
 * 00000001409F99E7: mov     cr8, r12
 * 00000001409F99EB: mov     ecx, [r14]
 * 00000001409F99EE: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409F99F3: mov     eax, ecx
 * 00000001409F99F5: xor     edx, edx
 * 00000001409F99F7: mov     ecx, [rsi+8F8h]
 * 00000001409F99FD: btr     eax, 1Fh
 * 00000001409F9A01: test    ecx, ecx
 * 00000001409F9A03: jnz     short loc_1409F9999
 * 00000001409F9A05: mov     ecx, ebx
 * 00000001409F9A07: xor     rcx, rax
 * 00000001409F9A0A: mov     rax, [rsi+590h]
 * 00000001409F9A11: mov     [rax+18h], rcx
 * 00000001409F9A15: mov     ecx, [rsi+8F8h]
 * 00000001409F9A1B: test    ecx, ecx
 * 00000001409F9A1D: jnz     loc_1409F9999
 * 00000001409F9A23: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F9A2D: mov     rcx, rsi
 * 00000001409F9A30: add     rax, rsi
 * 00000001409F9A33: mov     [rsi+900h], rax
 * 00000001409F9A3A: mov     rax, 0B3B74BDEE4453415h
 * 00000001409F9A44: add     rax, r13
 * 00000001409F9A47: mov     [rsi+908h], rax
 * 00000001409F9A4E: movsxd  rax, dword ptr [r13+0]
 * 00000001409F9A52: mov     [rsi+910h], rax
 * 00000001409F9A59: lea     eax, [rdx+1]
 * 00000001409F9A5C: mov     [rsi+918h], rdi
 * 00000001409F9A63: mov     [rsi+8F8h], eax
 * 00000001409F9A69: call    $$b8
 * 00000001409F9A6E: jmp     loc_1409F9999
 * 00000001409F9A73: mov     r12, [rbp+0BE0h+var_C08]
 * 00000001409F9A77: jmp     loc_1409F99A7
 * 00000001409F9A7C: mov     rax, [rsp+0CE0h+var_C90]
 * 00000001409F9A81: add     rax, 30h ; '0'
 * 00000001409F9A85: sub     r14, rax
 * 00000001409F9A88: sar     r14, 4
 * 00000001409F9A8C: mov     rax, [rbp+0BE0h+var_C60]
 * 00000001409F9A90: mov     [rax], r14d
 * 00000001409F9A93: jmp     loc_1409F931B
 * 00000001409F9A98: mov     rbx, [r13+18h]
 * 00000001409F9A9C: mov     r12d, 1
 * 00000001409F9AA2: mov     rcx, [rsi+6F0h]
 * 00000001409F9AA9: mov     r14, 0B3B74BDEE4453415h
 * 00000001409F9AB3: mov     rax, [rsi+720h]
 * 00000001409F9ABA: add     rcx, rbx
 * 00000001409F9ABD: movzx   edx, word ptr [r13+22h]
 * 00000001409F9AC2: mov     r15, 0A3A03F5891C8B4E8h
 * 00000001409F9ACC: cmp     [rcx+rax], dx
 * 00000001409F9AD0: jz      short loc_1409F9B1A
 * 00000001409F9AD2: xor     eax, eax
 * 00000001409F9AD4: cmp     [rsi+8F8h], eax
 * 00000001409F9ADA: jnz     short loc_1409F9B1A
 * 00000001409F9ADC: lea     rax, [rsi+r15]
 * 00000001409F9AE0: xor     edx, edx
 * 00000001409F9AE2: mov     [rsi+900h], rax
 * 00000001409F9AE9: mov     rcx, rsi
 * 00000001409F9AEC: lea     rax, [r14+r13]
 * 00000001409F9AF0: mov     [rsi+908h], rax
 * 00000001409F9AF7: movsxd  rax, dword ptr [r13+0]
 * 00000001409F9AFB: mov     [rsi+910h], rax
 * 00000001409F9B02: mov     [rsi+918h], rbx
 * 00000001409F9B09: mov     [rsi+8F8h], r12d
 * 00000001409F9B10: call    $$b8
 * 00000001409F9B15: movzx   edx, word ptr [r13+22h]
 * 00000001409F9B1A: test    [rsi+728h], dx
 * 00000001409F9B21: jnz     short loc_1409F9B75
 * 00000001409F9B23: mov     rcx, [rsi+6F8h]
 * 00000001409F9B2A: add     rcx, rbx
 * 00000001409F9B2D: cmp     [rcx], rcx
 * 00000001409F9B30: jz      short loc_1409F9B75
 * 00000001409F9B32: xor     eax, eax
 * 00000001409F9B34: cmp     [rsi+8F8h], eax
 * 00000001409F9B3A: jnz     short loc_1409F9B75
 * 00000001409F9B3C: lea     rax, [rsi+r15]
 * 00000001409F9B40: xor     edx, edx
 * 00000001409F9B42: mov     [rsi+900h], rax
 * 00000001409F9B49: mov     rcx, rsi
 * 00000001409F9B4C: lea     rax, [r14+r13]
 * 00000001409F9B50: mov     [rsi+908h], rax
 * 00000001409F9B57: movsxd  rax, dword ptr [r13+0]
 * 00000001409F9B5B: mov     [rsi+910h], rax
 * 00000001409F9B62: mov     [rsi+918h], rbx
 * 00000001409F9B69: mov     [rsi+8F8h], r12d
 * 00000001409F9B70: call    $$b8
 * 00000001409F9B75: mov     r14, [r13+8]
 * 00000001409F9B79: mov     r8d, [r13+10h]
 * 00000001409F9B7D: mov     r9, r14
 * 00000001409F9B80: add     [rsi+828h], r8d
 * 00000001409F9B87: mov     rax, r14
 * 00000001409F9B8A: mov     r11d, [rsi+814h]
 * 00000001409F9B91: mov     r15, [rsi+818h]
 * 00000001409F9B98: lea     rcx, [r14+r8]
 * 00000001409F9B9C: cmp     r14, rcx
 * 00000001409F9B9F: jnb     short loc_1409F9BB1
 * 00000001409F9BA1: mov     edx, 40h ; '@'
 * 00000001409F9BA6: prefetchnta byte ptr [rax]
 * 00000001409F9BA9: add     rax, rdx
 * 00000001409F9BAC: cmp     rax, rcx
 * 00000001409F9BAF: jb      short loc_1409F9BA6
 * 00000001409F9BB1: mov     r10d, r8d
 * 00000001409F9BB4: mov     rbx, r15
 * 00000001409F9BB7: shr     r10d, 7
 * 00000001409F9BBB: mov     r13d, 0FFFFFFFFh
 * 00000001409F9BC1: test    r10d, r10d
 * 00000001409F9BC4: jz      short loc_1409F9C2B
 * 00000001409F9BC6: mov     rsi, 7010008004002001h
 * 00000001409F9BD0: mov     edx, 8
 * 00000001409F9BD5: mov     rax, [r9]
 * 00000001409F9BD8: mov     ecx, r11d
 * 00000001409F9BDB: xor     rax, rbx
 * 00000001409F9BDE: mov     rbx, [r9+8]
 * 00000001409F9BE2: rol     rax, cl
 * 00000001409F9BE5: add     r9, 10h
 * 00000001409F9BE9: xor     rbx, rax
 * 00000001409F9BEC: rol     rbx, cl
 * 00000001409F9BEF: sub     rdx, r12
 * 00000001409F9BF2: jnz     short loc_1409F9BD5
 * 00000001409F9BF4: mov     rcx, r9
 * 00000001409F9BF7: sub     rcx, r14
 * 00000001409F9BFA: xor     rcx, r15
 * 00000001409F9BFD: mov     rax, rcx
 * 00000001409F9C00: rol     rax, 11h
 * 00000001409F9C04: xor     rcx, rax
 * 00000001409F9C07: mov     rax, rsi
 * 00000001409F9C0A: mul     rcx
 * 00000001409F9C0D: mov     [rbp+0BE0h+var_360], rdx
 * 00000001409F9C14: xor     edx, eax
 * 00000001409F9C16: xor     r11d, edx
 * 00000001409F9C19: and     r11d, 3Fh
 * 00000001409F9C1D: cmovz   r11d, r12d
 * 00000001409F9C21: add     r10d, r13d
 * 00000001409F9C24: jnz     short loc_1409F9BD0
 * 00000001409F9C26: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409F9C2B: and     r8d, 7Fh
 * 00000001409F9C2F: cmp     r8d, 8
 * 00000001409F9C33: jb      short loc_1409F9C52
 * 00000001409F9C35: mov     edx, r8d
 * 00000001409F9C38: shr     rdx, 3
 * 00000001409F9C3C: xor     rbx, [r9]
 * 00000001409F9C3F: mov     ecx, r11d
 * 00000001409F9C42: rol     rbx, cl
 * 00000001409F9C45: add     r9, 8
 * 00000001409F9C49: add     r8d, 0FFFFFFF8h
 * 00000001409F9C4D: sub     rdx, r12
 * 00000001409F9C50: jnz     short loc_1409F9C3C
 * 00000001409F9C52: test    r8d, r8d
 * 00000001409F9C55: jz      short loc_1409F9C6C
 * 00000001409F9C57: movzx   eax, byte ptr [r9]
 * 00000001409F9C5B: mov     ecx, r11d
 * 00000001409F9C5E: xor     rbx, rax
 * 00000001409F9C61: add     r9, r12
 * 00000001409F9C64: rol     rbx, cl
 * 00000001409F9C67: add     r8d, r13d
 * 00000001409F9C6A: jnz     short loc_1409F9C57
 * 00000001409F9C6C: mov     rax, rbx
 * 00000001409F9C6F: jmp     short loc_1409F9C73
 * 00000001409F9C71: xor     ebx, eax
 * 00000001409F9C73: shr     rax, 1Fh
 * 00000001409F9C77: test    rax, rax
 * 00000001409F9C7A: jnz     short loc_1409F9C71
 * 00000001409F9C7C: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409F9C81: btr     ebx, 1Fh
 * 00000001409F9C85: mov     r13d, eax
 * 00000001409F9C88: cmp     ebx, [r14+14h]
 * 00000001409F9C8C: jz      loc_1409F9D70
 * 00000001409F9C92: cmp     [r14], eax
 * 00000001409F9C95: jnz     short loc_1409F9C9F
 * 00000001409F9C97: cmp     [r14+18h], eax
 * 00000001409F9C9B: cmovnz  r13d, r12d
 * 00000001409F9C9F: mov     ecx, [r14+10h]
 * 00000001409F9CA3: mov     rdx, [r14+8]
 * 00000001409F9CA7: test    rcx, rcx
 * 00000001409F9CAA: jz      loc_1409F9E5F
 * 00000001409F9CB0: mov     eax, [rsi+994h]
 * 00000001409F9CB6: mov     r8d, 40h ; '@'
 * 00000001409F9CBC: test    r8b, al
 * 00000001409F9CBF: jz      loc_1409F9E5F
 * 00000001409F9CC5: mov     r12, cr8
 * 00000001409F9CC9: lea     eax, [r8-3Eh]
 * 00000001409F9CCD: mov     cr8, rax
 * 00000001409F9CD1: mov     r14, rdx
 * 00000001409F9CD4: lea     rax, [rcx-1]
 * 00000001409F9CD8: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409F9CDF: add     rax, rdx
 * 00000001409F9CE2: or      rax, 0FFFh
 * 00000001409F9CE8: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409F9CED: lea     rax, [r14-1]
 * 00000001409F9CF1: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409F9CF8: movzx   r15d, r12b
 * 00000001409F9CFC: mov     rax, [rsi+468h]
 * 00000001409F9D03: xor     edx, edx
 * 00000001409F9D05: mov     rcx, r14
 * 00000001409F9D08: call    KeGuardDispatchICall
 * 00000001409F9D0D: cmp     eax, 0C000022Dh
 * 00000001409F9D12: jnz     short loc_1409F9D3F
 * 00000001409F9D14: test    r13d, r13d
 * 00000001409F9D17: jnz     loc_1409F9E56
 * 00000001409F9D1D: lea     eax, [r13+1]
 * 00000001409F9D21: cmp     r12b, al
 * 00000001409F9D24: ja      short loc_1409F9D47
 * 00000001409F9D26: movzx   r15d, r12b
 * 00000001409F9D2A: mov     cr8, r15
 * 00000001409F9D2E: mov     al, [r14]
 * 00000001409F9D31: mov     rax, cr8
 * 00000001409F9D35: lea     eax, [r13+2]
 * 00000001409F9D39: mov     cr8, rax
 * 00000001409F9D3D: jmp     short loc_1409F9CFC
 * 00000001409F9D3F: test    eax, eax
 * 00000001409F9D41: js      loc_1409F9E56
 * 00000001409F9D47: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409F9D4E: mov     ecx, 1000h
 * 00000001409F9D53: add     rax, rcx
 * 00000001409F9D56: add     r14, rcx
 * 00000001409F9D59: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409F9D60: cmp     rax, [rsp+0CE0h+var_C88]
 * 00000001409F9D65: jnz     short loc_1409F9CF8
 * 00000001409F9D67: mov     cr8, r15
 * 00000001409F9D6B: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409F9D70: mov     r13, 0A3A03F5891C8B4E8h
 * 00000001409F9D7A: mov     r12, 0B3B74BDEE4453415h
 * 00000001409F9D84: mov     ebx, 1
 * 00000001409F9D89: lea     rax, [r14+30h]
 * 00000001409F9D8D: xor     r9d, r9d
 * 00000001409F9D90: mov     [rbp+0BE0h+var_870], rax
 * 00000001409F9D97: lea     rcx, [rbp+0BE0h+var_878]
 * 00000001409F9D9E: movzx   eax, word ptr [r14+20h]
 * 00000001409F9DA3: xor     r8d, r8d
 * 00000001409F9DA6: mov     [rbp+0BE0h+var_878], ax
 * 00000001409F9DAD: xor     edx, edx
 * 00000001409F9DAF: mov     [rbp+0BE0h+var_876], ax
 * 00000001409F9DB6: lea     rax, [rbp+0BE0h+var_970]
 * 00000001409F9DBD: mov     [rsp+0CE0h+var_CA8], rax
 * 00000001409F9DC2: xor     eax, eax
 * 00000001409F9DC4: mov     [rsp+0CE0h+var_CB0], rax
 * 00000001409F9DC9: mov     byte ptr [rsp+0CE0h+var_CB8], al
 * 00000001409F9DCD: mov     rax, [rsi+508h]
 * 00000001409F9DD4: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 00000001409F9DD9: mov     rax, [rsi+1E8h]
 * 00000001409F9DE0: call    KeGuardDispatchICall
 * 00000001409F9DE5: xor     r15d, r15d
 * 00000001409F9DE8: test    eax, eax
 * 00000001409F9DEA: js      loc_1409F931B
 * 00000001409F9DF0: mov     rcx, [rbp+0BE0h+var_970]
 * 00000001409F9DF7: cmp     rcx, [r14+18h]
 * 00000001409F9DFB: jz      short loc_1409F9E45
 * 00000001409F9DFD: xor     eax, eax
 * 00000001409F9DFF: cmp     [rsi+8F8h], eax
 * 00000001409F9E05: jnz     short loc_1409F9E45
 * 00000001409F9E07: lea     rax, [rsi+r13]
 * 00000001409F9E0B: xor     edx, edx
 * 00000001409F9E0D: mov     [rsi+900h], rax
 * 00000001409F9E14: lea     rax, [r14+r12]
 * 00000001409F9E18: mov     [rsi+908h], rax
 * 00000001409F9E1F: movsxd  rax, dword ptr [r14]
 * 00000001409F9E22: mov     [rsi+910h], rax
 * 00000001409F9E29: mov     [rsi+918h], rcx
 * 00000001409F9E30: mov     rcx, rsi
 * 00000001409F9E33: mov     [rsi+8F8h], ebx
 * 00000001409F9E39: call    $$b8
 * 00000001409F9E3E: mov     rcx, [rbp+0BE0h+var_970]
 * 00000001409F9E45: mov     rax, [rsi+1E0h]
 * 00000001409F9E4C: call    KeGuardDispatchICall
 * 00000001409F9E51: jmp     loc_1409F931B
 * 00000001409F9E56: mov     cr8, r15
 * 00000001409F9E5A: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409F9E5F: mov     eax, [rsi+8F8h]
 * 00000001409F9E65: xor     edx, edx
 * 00000001409F9E67: mov     ecx, [r14+14h]
 * 00000001409F9E6B: test    eax, eax
 * 00000001409F9E6D: jnz     short loc_1409F9E85
 * 00000001409F9E6F: mov     eax, ebx
 * 00000001409F9E71: xor     rcx, rax
 * 00000001409F9E74: mov     rax, [rsi+590h]
 * 00000001409F9E7B: mov     [rax+18h], rcx
 * 00000001409F9E7F: mov     eax, [rsi+8F8h]
 * 00000001409F9E85: mov     rcx, [r14+8]
 * 00000001409F9E89: mov     r13, 0A3A03F5891C8B4E8h
 * 00000001409F9E93: mov     r12, 0B3B74BDEE4453415h
 * 00000001409F9E9D: mov     ebx, 1
 * 00000001409F9EA2: test    eax, eax
 * 00000001409F9EA4: jnz     loc_1409F9D89
 * 00000001409F9EAA: lea     rax, [rsi+r13]
 * 00000001409F9EAE: mov     [rsi+900h], rax
 * 00000001409F9EB5: lea     rax, [r14+r12]
 * 00000001409F9EB9: mov     [rsi+908h], rax
 * 00000001409F9EC0: movsxd  rax, dword ptr [r14]
 * 00000001409F9EC3: mov     [rsi+910h], rax
 * 00000001409F9ECA: mov     [rsi+918h], rcx
 * 00000001409F9ED1: mov     rcx, rsi
 * 00000001409F9ED4: mov     [rsi+8F8h], ebx
 * 00000001409F9EDA: call    $$b8
 * 00000001409F9EDF: jmp     loc_1409F9D89
 * 00000001409F9EE4: mov     rax, [rsi+1A0h]
 * 00000001409F9EEB: lea     rcx, [rbp+0BE0h+var_1A0]
 * 00000001409F9EF2: mov     edx, [r13+1Ch]
 * 00000001409F9EF6: call    KeGuardDispatchICall
 * 00000001409F9EFB: mov     rax, [rsi+1D0h]
 * 00000001409F9F02: lea     rdx, [rbp+0BE0h+var_320]
 * 00000001409F9F09: lea     rcx, [rbp+0BE0h+var_1A0]
 * 00000001409F9F10: call    KeGuardDispatchICall
 * 00000001409F9F15: xor     eax, eax
 * 00000001409F9F17: mov     ebx, eax
 * 00000001409F9F19: cmp     [r13+18h], eax
 * 00000001409F9F1D: jbe     loc_1409FA02F
 * 00000001409F9F23: mov     eax, ebx
 * 00000001409F9F25: lea     r10, [rax+rax*2]
 * 00000001409F9F29: mov     r9d, [r13+r10*8+40h]
 * 00000001409F9F2E: test    [rsi+87Bh], r14b
 * 00000001409F9F35: jz      short loc_1409F9F5A
 * 00000001409F9F37: mov     eax, 0C0000082h
 * 00000001409F9F3C: cmp     r9d, eax
 * 00000001409F9F3F: jnz     short loc_1409F9F5A
 * 00000001409F9F41: mov     eax, gs:1A4h
 * 00000001409F9F49: cmp     eax, [rsi+8F0h]
 * 00000001409F9F4F: jnz     short loc_1409F9F5A
 * 00000001409F9F51: mov     rdx, [rsi+8E8h]
 * 00000001409F9F58: jmp     short loc_1409F9F66
 * 00000001409F9F5A: mov     ecx, r9d
 * 00000001409F9F5D: rdmsr
 * 00000001409F9F5F: shl     rdx, 20h
 * 00000001409F9F63: or      rdx, rax
 * 00000001409F9F66: mov     r8, [r13+r10*8+30h]
 * 00000001409F9F6B: mov     rcx, [r13+r10*8+38h]
 * 00000001409F9F70: and     rdx, r8
 * 00000001409F9F73: cmp     rdx, rcx
 * 00000001409F9F76: jz      loc_1409F9FFE
 * 00000001409F9F7C: mov     r8d, [r13+1Ch]
 * 00000001409F9F80: mov     eax, [rsi+8F8h]
 * 00000001409F9F86: shl     r8, 20h
 * 00000001409F9F8A: or      r8, r9
 * 00000001409F9F8D: test    eax, eax
 * 00000001409F9F8F: jnz     loc_1409FA01C
 * 00000001409F9F95: mov     rax, [rsi+590h]
 * 00000001409F9F9C: xor     rcx, rdx
 * 00000001409F9F9F: mov     [rax+18h], rcx
 * 00000001409F9FA3: mov     eax, [rsi+8F8h]
 * 00000001409F9FA9: test    eax, eax
 * 00000001409F9FAB: jnz     short loc_1409FA01C
 * 00000001409F9FAD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409F9FB7: xor     edx, edx
 * 00000001409F9FB9: add     rax, rsi
 * 00000001409F9FBC: mov     rcx, rsi
 * 00000001409F9FBF: mov     [rsi+900h], rax
 * 00000001409F9FC6: mov     rax, 0B3B74BDEE4453415h
 * 00000001409F9FD0: add     rax, r13
 * 00000001409F9FD3: mov     [rsi+908h], rax
 * 00000001409F9FDA: movsxd  rax, dword ptr [r13+0]
 * 00000001409F9FDE: mov     [rsi+910h], rax
 * 00000001409F9FE5: mov     eax, 1
 * 00000001409F9FEA: mov     [rsi+918h], r8
 * 00000001409F9FF1: mov     [rsi+8F8h], eax
 * 00000001409F9FF7: call    $$b8
 * 00000001409F9FFC: jmp     short loc_1409FA01C
 * 00000001409F9FFE: test    dword ptr [rsi+994h], 200h
 * 00000001409FA008: jz      short loc_1409FA01C
 * 00000001409FA00A: cmp     r8, 0FFFFFFFFFFFFFFFFh
 * 00000001409FA00E: jnz     short loc_1409FA01C
 * 00000001409FA010: mov     rax, rdx
 * 00000001409FA013: mov     ecx, r9d
 * 00000001409FA016: shr     rdx, 20h
 * 00000001409FA01A: wrmsr
 * 00000001409FA01C: inc     ebx
 * 00000001409FA01E: cmp     ebx, [r13+18h]
 * 00000001409FA022: jb      loc_1409F9F23
 * 00000001409FA028: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FA02F: mov     rax, [rsi+198h]
 * 00000001409FA036: lea     rcx, [rbp+0BE0h+var_320]
 * 00000001409FA03D: call    KeGuardDispatchICall
 * 00000001409FA042: mov     eax, [r13+18h]
 * 00000001409FA046: shl     eax, 0Fh
 * 00000001409FA049: add     [rsi+828h], eax
 * 00000001409FA04F: jmp     loc_1409F9318
 * 00000001409FA054: mov     ecx, [rsi+830h]
 * 00000001409FA05A: test    dl, cl
 * 00000001409FA05C: jz      loc_1409F9318
 * 00000001409FA062: mov     r12d, 40000000h
 * 00000001409FA068: test    [rsi+990h], r12d
 * 00000001409FA06F: jnz     short loc_1409FA087
 * 00000001409FA071: mov     r14d, eax
 * 00000001409FA074: and     ecx, 3
 * 00000001409FA077: cmp     cl, 3
 * 00000001409FA07A: setz    r14b
 * 00000001409FA07E: mov     dword ptr [rbp+0BE0h+arg_8], r14d
 * 00000001409FA085: jmp     short loc_1409FA0DB
 * 00000001409FA087: rdtsc
 * 00000001409FA089: shl     rdx, 20h
 * 00000001409FA08D: or      rax, rdx
 * 00000001409FA090: mov     rcx, rax
 * 00000001409FA093: ror     rax, 3
 * 00000001409FA097: xor     rcx, rax
 * 00000001409FA09A: mov     rax, 7010008004002001h
 * 00000001409FA0A4: mul     rcx
 * 00000001409FA0A7: mov     rcx, rdx
 * 00000001409FA0AA: mov     [rbp+0BE0h+var_358], rdx
 * 00000001409FA0B1: xor     rcx, rax
 * 00000001409FA0B4: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001409FA0BE: mul     rcx
 * 00000001409FA0C1: shr     rdx, 1
 * 00000001409FA0C4: lea     rax, [rdx+rdx*2]
 * 00000001409FA0C8: cmp     rcx, rax
 * 00000001409FA0CB: mov     eax, 0
 * 00000001409FA0D0: setz    al
 * 00000001409FA0D3: mov     dword ptr [rbp+0BE0h+arg_8], eax
 * 00000001409FA0D9: xor     eax, eax
 * 00000001409FA0DB: mov     rbx, [rsi+548h]
 * 00000001409FA0E2: mov     r15d, eax
 * 00000001409FA0E5: mov     [rbp+0BE0h+var_C58], eax
 * 00000001409FA0E8: mov     rax, [rsi+178h]
 * 00000001409FA0EF: call    KeGuardDispatchICall
 * 00000001409FA0F4: test    [rsi+990h], r12d
 * 00000001409FA0FB: jnz     short loc_1409FA116
 * 00000001409FA0FD: mov     ecx, [rsi+950h]
 * 00000001409FA103: cmp     ecx, 7
 * 00000001409FA106: jnb     short loc_1409FA116
 * 00000001409FA108: mov     r12d, 1
 * 00000001409FA10E: mov     r14d, r12d
 * 00000001409FA111: shl     r14b, cl
 * 00000001409FA114: jmp     short loc_1409FA134
 * 00000001409FA116: mov     rax, [rsi+128h]
 * 00000001409FA11D: xor     edx, edx
 * 00000001409FA11F: mov     rcx, [rsi+0A00h]
 * 00000001409FA126: call    KeGuardDispatchICall
 * 00000001409FA12B: mov     r14b, 80h
 * 00000001409FA12E: mov     r12d, 1
 * 00000001409FA134: mov     rax, [rsi+138h]
 * 00000001409FA13B: xor     edx, edx
 * 00000001409FA13D: mov     rcx, rbx
 * 00000001409FA140: call    KeGuardDispatchICall
 * 00000001409FA145: mov     r8, [rsi+520h]
 * 00000001409FA14C: mov     rdx, [r8]
 * 00000001409FA14F: cmp     rdx, r8
 * 00000001409FA152: jz      short loc_1409FA179
 * 00000001409FA154: mov     rax, [rsi+6B8h]
 * 00000001409FA15B: mov     rcx, rdx
 * 00000001409FA15E: sub     rcx, [rsi+6D0h]
 * 00000001409FA165: lock or [rcx+rax], r14b
 * 00000001409FA16A: mov     rdx, [rdx]
 * 00000001409FA16D: add     r15d, r12d
 * 00000001409FA170: cmp     rdx, r8
 * 00000001409FA173: jnz     short loc_1409FA154
 * 00000001409FA175: mov     [rbp+0BE0h+var_C58], r15d
 * 00000001409FA179: mov     rax, [rsi+550h]
 * 00000001409FA180: mov     r15d, 4
 * 00000001409FA186: mov     edi, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FA18C: mov     r13, [rax]
 * 00000001409FA18F: mov     rax, [rsi+730h]
 * 00000001409FA196: mov     ebx, [rax+r13]
 * 00000001409FA19A: mov     [rsp+0CE0h+var_C88], rbx
 * 00000001409FA19F: mov     rax, [rsi+108h]
 * 00000001409FA1A6: mov     rdx, r15
 * 00000001409FA1A9: mov     rcx, r13
 * 00000001409FA1AC: call    KeGuardDispatchICall
 * 00000001409FA1B1: mov     r12, rax
 * 00000001409FA1B4: xor     eax, eax
 * 00000001409FA1B6: test    r12, r12
 * 00000001409FA1B9: jz      loc_1409FA329
 * 00000001409FA1BF: mov     rbx, [r12]
 * 00000001409FA1C3: sar     rbx, 10h
 * 00000001409FA1C7: and     rbx, 0FFFFFFFFFFFFFFF0h
 * 00000001409FA1CB: mov     al, [rbx]
 * 00000001409FA1CD: and     al, 7Fh
 * 00000001409FA1CF: cmp     al, 3
 * 00000001409FA1D1: jnz     loc_1409FA26B
 * 00000001409FA1D7: mov     r8, [rsi+6B8h]
 * 00000001409FA1DE: mov     rdx, r8
 * 00000001409FA1E1: test    [rbx+r8], r14b
 * 00000001409FA1E5: jnz     short loc_1409FA25D
 * 00000001409FA1E7: mov     rax, [rsi+6C0h]
 * 00000001409FA1EE: mov     ecx, [rbx+rax]
 * 00000001409FA1F1: test    [rsi+6D8h], ecx
 * 00000001409FA1F7: jz      short loc_1409FA25D
 * 00000001409FA1F9: xor     eax, eax
 * 00000001409FA1FB: cmp     [rsi+8F8h], eax
 * 00000001409FA201: jnz     short loc_1409FA25D
 * 00000001409FA203: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FA208: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FA212: add     rax, rsi
 * 00000001409FA215: xor     edx, edx
 * 00000001409FA217: mov     [rsi+900h], rax
 * 00000001409FA21E: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FA228: add     rax, rcx
 * 00000001409FA22B: mov     [rsi+908h], rax
 * 00000001409FA232: movsxd  rax, dword ptr [rcx]
 * 00000001409FA235: mov     rcx, rsi
 * 00000001409FA238: mov     [rsi+910h], rax
 * 00000001409FA23F: mov     eax, 1
 * 00000001409FA244: mov     [rsi+918h], rbx
 * 00000001409FA24B: mov     [rsi+8F8h], eax
 * 00000001409FA251: call    $$b8
 * 00000001409FA256: mov     rdx, [rsi+6B8h]
 * 00000001409FA25D: mov     al, r14b
 * 00000001409FA260: not     al
 * 00000001409FA262: lock and [rbx+rdx], al
 * 00000001409FA266: jmp     loc_1409FA312
 * 00000001409FA26B: cmp     al, 6
 * 00000001409FA26D: jnz     short loc_1409FA2B1
 * 00000001409FA26F: test    edi, edi
 * 00000001409FA271: jz      loc_1409FA312
 * 00000001409FA277: mov     rcx, [rsi+680h]
 * 00000001409FA27E: mov     rax, [rbx+rcx+20h]
 * 00000001409FA283: cmp     rax, [rsi+320h]
 * 00000001409FA28A: jz      short loc_1409FA295
 * 00000001409FA28C: cmp     rax, [rsi+328h]
 * 00000001409FA293: jnz     short loc_1409FA2B5
 * 00000001409FA295: mov     rax, [rsi+330h]
 * 00000001409FA29C: cmp     [rbx+rcx+30h], rax
 * 00000001409FA2A1: jnz     short loc_1409FA2B5
 * 00000001409FA2A3: mov     rax, [rsi+338h]
 * 00000001409FA2AA: cmp     [rbx+rcx+28h], rax
 * 00000001409FA2AF: jmp     short loc_1409FA2B3
 * 00000001409FA2B1: test    al, al
 * 00000001409FA2B3: jz      short loc_1409FA312
 * 00000001409FA2B5: xor     eax, eax
 * 00000001409FA2B7: cmp     [rsi+8F8h], eax
 * 00000001409FA2BD: jnz     short loc_1409FA312
 * 00000001409FA2BF: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FA2C4: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FA2CE: add     rax, rsi
 * 00000001409FA2D1: xor     edx, edx
 * 00000001409FA2D3: mov     [rsi+900h], rax
 * 00000001409FA2DA: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FA2E4: add     rax, rcx
 * 00000001409FA2E7: mov     [rsi+908h], rax
 * 00000001409FA2EE: movsxd  rax, dword ptr [rcx]
 * 00000001409FA2F1: mov     rcx, rsi
 * 00000001409FA2F4: mov     [rsi+910h], rax
 * 00000001409FA2FB: mov     eax, 1
 * 00000001409FA300: mov     [rsi+918h], rbx
 * 00000001409FA307: mov     [rsi+8F8h], eax
 * 00000001409FA30D: call    $$b8
 * 00000001409FA312: mov     rax, [rsi+120h]
 * 00000001409FA319: mov     rdx, r12
 * 00000001409FA31C: mov     rcx, r13
 * 00000001409FA31F: call    KeGuardDispatchICall
 * 00000001409FA324: mov     rbx, [rsp+0CE0h+var_C88]
 * 00000001409FA329: add     r15, 4
 * 00000001409FA32D: cmp     r15, rbx
 * 00000001409FA330: jb      loc_1409FA19F
 * 00000001409FA336: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FA33D: cmp     r14b, 80h
 * 00000001409FA341: jnz     short loc_1409FA358
 * 00000001409FA343: mov     rax, [rsi+130h]
 * 00000001409FA34A: xor     edx, edx
 * 00000001409FA34C: mov     rcx, [rsi+0A00h]
 * 00000001409FA353: call    KeGuardDispatchICall
 * 00000001409FA358: mov     rcx, [rsi+548h]
 * 00000001409FA35F: xor     edx, edx
 * 00000001409FA361: mov     rax, [rsi+140h]
 * 00000001409FA368: call    KeGuardDispatchICall
 * 00000001409FA36D: mov     rax, [rsi+180h]
 * 00000001409FA374: call    KeGuardDispatchICall
 * 00000001409FA379: mov     eax, [rbp+0BE0h+var_C58]
 * 00000001409FA37C: shr     rbx, 2
 * 00000001409FA380: add     eax, ebx
 * 00000001409FA382: shl     eax, 8
 * 00000001409FA385: jmp     loc_1409FA049
 * 00000001409FA38A: mov     eax, [rsi+830h]
 * 00000001409FA390: test    dl, al
 * 00000001409FA392: jnz     loc_1409F9318
 * 00000001409FA398: mov     rbx, [rsi+548h]
 * 00000001409FA39F: xor     eax, eax
 * 00000001409FA3A1: mov     r13d, eax
 * 00000001409FA3A4: mov     [rbp+0BE0h+var_C58], eax
 * 00000001409FA3A7: mov     rax, [rsi+178h]
 * 00000001409FA3AE: call    KeGuardDispatchICall
 * 00000001409FA3B3: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FA3BD: jnz     short loc_1409FA3D5
 * 00000001409FA3BF: mov     ecx, [rsi+950h]
 * 00000001409FA3C5: cmp     ecx, 7
 * 00000001409FA3C8: jnb     short loc_1409FA3D5
 * 00000001409FA3CA: mov     r14d, 1
 * 00000001409FA3D0: shl     r14b, cl
 * 00000001409FA3D3: jmp     short loc_1409FA3ED
 * 00000001409FA3D5: mov     rax, [rsi+128h]
 * 00000001409FA3DC: xor     edx, edx
 * 00000001409FA3DE: mov     rcx, [rsi+0A00h]
 * 00000001409FA3E5: call    KeGuardDispatchICall
 * 00000001409FA3EA: mov     r14b, 80h
 * 00000001409FA3ED: mov     rax, [rsi+138h]
 * 00000001409FA3F4: xor     edx, edx
 * 00000001409FA3F6: mov     rcx, rbx
 * 00000001409FA3F9: mov     dword ptr [rbp+0BE0h+arg_8], r14d
 * 00000001409FA400: call    KeGuardDispatchICall
 * 00000001409FA405: mov     r12, [rsi+520h]
 * 00000001409FA40C: mov     r15, [r12]
 * 00000001409FA410: cmp     r15, r12
 * 00000001409FA413: jz      loc_1409FA4D1
 * 00000001409FA419: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FA41E: mov     rbx, r15
 * 00000001409FA421: sub     rbx, [rsi+6D0h]
 * 00000001409FA428: cmp     r14b, 80h
 * 00000001409FA42C: jz      short loc_1409FA4AB
 * 00000001409FA42E: mov     rax, [rsi+6B8h]
 * 00000001409FA435: test    [rbx+rax], r14b
 * 00000001409FA439: jz      short loc_1409FA4AB
 * 00000001409FA43B: mov     rax, [rsi+6C0h]
 * 00000001409FA442: mov     ecx, [rbx+rax]
 * 00000001409FA445: test    [rsi+6D8h], ecx
 * 00000001409FA44B: jz      short loc_1409FA4AB
 * 00000001409FA44D: xor     eax, eax
 * 00000001409FA44F: cmp     [rsi+8F8h], eax
 * 00000001409FA455: jnz     short loc_1409FA4AB
 * 00000001409FA457: mov     ecx, 1
 * 00000001409FA45C: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FA466: add     rax, rsi
 * 00000001409FA469: xor     edx, edx
 * 00000001409FA46B: mov     [rsi+900h], rax
 * 00000001409FA472: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FA47C: add     rax, rdi
 * 00000001409FA47F: mov     [rsi+908h], rax
 * 00000001409FA486: movsxd  rax, dword ptr [rdi]
 * 00000001409FA489: mov     [rsi+910h], rax
 * 00000001409FA490: mov     rax, rbx
 * 00000001409FA493: or      rax, rcx
 * 00000001409FA496: mov     [rsi+918h], rax
 * 00000001409FA49D: mov     [rsi+8F8h], ecx
 * 00000001409FA4A3: mov     rcx, rsi
 * 00000001409FA4A6: call    $$b8
 * 00000001409FA4AB: mov     rax, [rsi+6B8h]
 * 00000001409FA4B2: lock or [rbx+rax], r14b
 * 00000001409FA4B7: mov     r15, [r15]
 * 00000001409FA4BA: inc     r13d
 * 00000001409FA4BD: cmp     r15, r12
 * 00000001409FA4C0: jnz     loc_1409FA41E
 * 00000001409FA4C6: mov     [rbp+0BE0h+var_C58], r13d
 * 00000001409FA4CA: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FA4D1: mov     rcx, [rsi+500h]
 * 00000001409FA4D8: mov     rax, cr8
 * 00000001409FA4DC: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FA4E1: mov     eax, 0Ch
 * 00000001409FA4E6: mov     cr8, rax
 * 00000001409FA4EA: mov     rax, [rsi+148h]
 * 00000001409FA4F1: lea     rdx, [rbp+0BE0h+var_128]
 * 00000001409FA4F8: call    KeGuardDispatchICall
 * 00000001409FA4FD: mov     r13, [rsi+4F8h]
 * 00000001409FA504: mov     r15, [r13+0]
 * 00000001409FA508: cmp     r15, r13
 * 00000001409FA50B: jz      loc_1409FA5BF
 * 00000001409FA511: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FA516: mov     r12b, r14b
 * 00000001409FA519: movzx   edx, r14b
 * 00000001409FA51D: not     r12b
 * 00000001409FA520: mov     [rbp+0BE0h+var_BF0], edx
 * 00000001409FA523: xor     r14d, r14d
 * 00000001409FA526: mov     rcx, [rsi+6B8h]
 * 00000001409FA52D: mov     rbx, r15
 * 00000001409FA530: sub     rbx, [rsi+6B0h]
 * 00000001409FA537: movsx   eax, byte ptr [rcx+rbx]
 * 00000001409FA53B: test    edx, eax
 * 00000001409FA53D: jnz     short loc_1409FA5A0
 * 00000001409FA53F: cmp     [rsi+8F8h], r14d
 * 00000001409FA546: jnz     short loc_1409FA5A0
 * 00000001409FA548: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FA552: xor     edx, edx
 * 00000001409FA554: add     rax, rsi
 * 00000001409FA557: mov     rcx, rsi
 * 00000001409FA55A: mov     [rsi+900h], rax
 * 00000001409FA561: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FA56B: add     rax, rdi
 * 00000001409FA56E: mov     [rsi+908h], rax
 * 00000001409FA575: movsxd  rax, dword ptr [rdi]
 * 00000001409FA578: mov     [rsi+910h], rax
 * 00000001409FA57F: mov     eax, 1
 * 00000001409FA584: mov     [rsi+918h], rbx
 * 00000001409FA58B: mov     [rsi+8F8h], eax
 * 00000001409FA591: call    $$b8
 * 00000001409FA596: mov     rcx, [rsi+6B8h]
 * 00000001409FA59D: mov     edx, [rbp+0BE0h+var_BF0]
 * 00000001409FA5A0: lock and [rbx+rcx], r12b
 * 00000001409FA5A5: mov     r15, [r15]
 * 00000001409FA5A8: cmp     r15, r13
 * 00000001409FA5AB: jnz     loc_1409FA526
 * 00000001409FA5B1: mov     r14d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FA5B8: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FA5BF: mov     rax, [rsi+188h]
 * 00000001409FA5C6: lea     rcx, [rbp+0BE0h+var_128]
 * 00000001409FA5CD: call    KeGuardDispatchICall
 * 00000001409FA5D2: movzx   eax, byte ptr [rsp+0CE0h+var_C88]
 * 00000001409FA5D7: mov     cr8, rax
 * 00000001409FA5DB: cmp     r14b, 80h
 * 00000001409FA5DF: jnz     short loc_1409FA5F6
 * 00000001409FA5E1: mov     rax, [rsi+130h]
 * 00000001409FA5E8: xor     edx, edx
 * 00000001409FA5EA: mov     rcx, [rsi+0A00h]
 * 00000001409FA5F1: call    KeGuardDispatchICall
 * 00000001409FA5F6: mov     rcx, [rsi+548h]
 * 00000001409FA5FD: xor     edx, edx
 * 00000001409FA5FF: mov     rax, [rsi+140h]
 * 00000001409FA606: call    KeGuardDispatchICall
 * 00000001409FA60B: mov     rax, [rsi+180h]
 * 00000001409FA612: call    KeGuardDispatchICall
 * 00000001409FA617: mov     eax, [rbp+0BE0h+var_C58]
 * 00000001409FA61A: jmp     loc_1409FA382
 * 00000001409FA61F: mov     r14, [r13+8]
 * 00000001409FA623: mov     r8d, [r13+10h]
 * 00000001409FA627: mov     r9, r14
 * 00000001409FA62A: add     [rsi+828h], r8d
 * 00000001409FA631: mov     rax, r14
 * 00000001409FA634: mov     r11d, [rsi+814h]
 * 00000001409FA63B: mov     r15, [rsi+818h]
 * 00000001409FA642: lea     rcx, [r14+r8]
 * 00000001409FA646: cmp     r14, rcx
 * 00000001409FA649: jnb     short loc_1409FA65B
 * 00000001409FA64B: mov     edx, 40h ; '@'
 * 00000001409FA650: prefetchnta byte ptr [rax]
 * 00000001409FA653: add     rax, rdx
 * 00000001409FA656: cmp     rax, rcx
 * 00000001409FA659: jb      short loc_1409FA650
 * 00000001409FA65B: mov     r10d, r8d
 * 00000001409FA65E: mov     rbx, r15
 * 00000001409FA661: shr     r10d, 7
 * 00000001409FA665: mov     r12d, 1
 * 00000001409FA66B: test    r10d, r10d
 * 00000001409FA66E: jz      short loc_1409FA6DA
 * 00000001409FA670: mov     rsi, 7010008004002001h
 * 00000001409FA67A: mov     edx, 8
 * 00000001409FA67F: mov     rax, [r9]
 * 00000001409FA682: mov     ecx, r11d
 * 00000001409FA685: xor     rax, rbx
 * 00000001409FA688: mov     rbx, [r9+8]
 * 00000001409FA68C: rol     rax, cl
 * 00000001409FA68F: add     r9, 10h
 * 00000001409FA693: xor     rbx, rax
 * 00000001409FA696: rol     rbx, cl
 * 00000001409FA699: sub     rdx, r12
 * 00000001409FA69C: jnz     short loc_1409FA67F
 * 00000001409FA69E: mov     rcx, r9
 * 00000001409FA6A1: sub     rcx, r14
 * 00000001409FA6A4: xor     rcx, r15
 * 00000001409FA6A7: mov     rax, rcx
 * 00000001409FA6AA: rol     rax, 11h
 * 00000001409FA6AE: xor     rcx, rax
 * 00000001409FA6B1: mov     rax, rsi
 * 00000001409FA6B4: mul     rcx
 * 00000001409FA6B7: mov     [rbp+0BE0h+var_350], rdx
 * 00000001409FA6BE: xor     edx, eax
 * 00000001409FA6C0: xor     r11d, edx
 * 00000001409FA6C3: mov     eax, 0FFFFFFFFh
 * 00000001409FA6C8: and     r11d, 3Fh
 * 00000001409FA6CC: cmovz   r11d, r12d
 * 00000001409FA6D0: add     r10d, eax
 * 00000001409FA6D3: jnz     short loc_1409FA67A
 * 00000001409FA6D5: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FA6DA: and     r8d, 7Fh
 * 00000001409FA6DE: cmp     r8d, 8
 * 00000001409FA6E2: jb      short loc_1409FA701
 * 00000001409FA6E4: mov     edx, r8d
 * 00000001409FA6E7: shr     rdx, 3
 * 00000001409FA6EB: xor     rbx, [r9]
 * 00000001409FA6EE: mov     ecx, r11d
 * 00000001409FA6F1: rol     rbx, cl
 * 00000001409FA6F4: add     r9, 8
 * 00000001409FA6F8: add     r8d, 0FFFFFFF8h
 * 00000001409FA6FC: sub     rdx, r12
 * 00000001409FA6FF: jnz     short loc_1409FA6EB
 * 00000001409FA701: test    r8d, r8d
 * 00000001409FA704: jz      short loc_1409FA725
 * 00000001409FA706: mov     esi, 0FFFFFFFFh
 * 00000001409FA70B: movzx   eax, byte ptr [r9]
 * 00000001409FA70F: mov     ecx, r11d
 * 00000001409FA712: xor     rbx, rax
 * 00000001409FA715: add     r9, r12
 * 00000001409FA718: rol     rbx, cl
 * 00000001409FA71B: add     r8d, esi
 * 00000001409FA71E: jnz     short loc_1409FA70B
 * 00000001409FA720: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FA725: mov     rax, rbx
 * 00000001409FA728: jmp     short loc_1409FA72C
 * 00000001409FA72A: xor     ebx, eax
 * 00000001409FA72C: shr     rax, 1Fh
 * 00000001409FA730: test    rax, rax
 * 00000001409FA733: jnz     short loc_1409FA72A
 * 00000001409FA735: btr     ebx, 1Fh
 * 00000001409FA739: mov     r12d, eax
 * 00000001409FA73C: cmp     ebx, [r13+14h]
 * 00000001409FA740: jz      loc_1409F9318
 * 00000001409FA746: cmp     [r13+0], eax
 * 00000001409FA74A: jnz     short loc_1409FA757
 * 00000001409FA74C: cmp     [r13+18h], eax
 * 00000001409FA750: lea     ecx, [rax+1]
 * 00000001409FA753: cmovnz  r12d, ecx
 * 00000001409FA757: mov     ecx, [r13+10h]
 * 00000001409FA75B: mov     rdx, [r13+8]
 * 00000001409FA75F: test    rcx, rcx
 * 00000001409FA762: jz      loc_1409FA828
 * 00000001409FA768: mov     eax, [rsi+994h]
 * 00000001409FA76E: mov     r8d, 40h ; '@'
 * 00000001409FA774: test    r8b, al
 * 00000001409FA777: jz      loc_1409FA828
 * 00000001409FA77D: mov     r13, cr8
 * 00000001409FA781: lea     eax, [r8-3Eh]
 * 00000001409FA785: mov     cr8, rax
 * 00000001409FA789: mov     r14, rdx
 * 00000001409FA78C: lea     rax, [rcx-1]
 * 00000001409FA790: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FA797: add     rax, rdx
 * 00000001409FA79A: or      rax, 0FFFh
 * 00000001409FA7A0: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FA7A5: lea     rax, [r14-1]
 * 00000001409FA7A9: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FA7B0: movzx   r15d, r13b
 * 00000001409FA7B4: mov     rax, [rsi+468h]
 * 00000001409FA7BB: xor     edx, edx
 * 00000001409FA7BD: mov     rcx, r14
 * 00000001409FA7C0: call    KeGuardDispatchICall
 * 00000001409FA7C5: cmp     eax, 0C000022Dh
 * 00000001409FA7CA: jnz     short loc_1409FA7F5
 * 00000001409FA7CC: test    r12d, r12d
 * 00000001409FA7CF: jnz     short loc_1409FA81F
 * 00000001409FA7D1: lea     eax, [r12+1]
 * 00000001409FA7D6: cmp     r13b, al
 * 00000001409FA7D9: ja      short loc_1409FA7F9
 * 00000001409FA7DB: movzx   r15d, r13b
 * 00000001409FA7DF: mov     cr8, r15
 * 00000001409FA7E3: mov     al, [r14]
 * 00000001409FA7E6: mov     rax, cr8
 * 00000001409FA7EA: lea     eax, [r12+2]
 * 00000001409FA7EF: mov     cr8, rax
 * 00000001409FA7F3: jmp     short loc_1409FA7B4
 * 00000001409FA7F5: test    eax, eax
 * 00000001409FA7F7: js      short loc_1409FA81F
 * 00000001409FA7F9: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409FA800: mov     r11d, 1000h
 * 00000001409FA806: add     rax, r11
 * 00000001409FA809: add     r14, r11
 * 00000001409FA80C: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FA813: cmp     rax, [rsp+0CE0h+var_C88]
 * 00000001409FA818: jnz     short loc_1409FA7B0
 * 00000001409FA81A: jmp     loc_1409F9666
 * 00000001409FA81F: mov     cr8, r15
 * 00000001409FA823: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FA828: mov     eax, [rsi+8F8h]
 * 00000001409FA82E: xor     r15d, r15d
 * 00000001409FA831: mov     ecx, [r13+14h]
 * 00000001409FA835: test    eax, eax
 * 00000001409FA837: jnz     loc_1409F96A1
 * 00000001409FA83D: mov     eax, ebx
 * 00000001409FA83F: jmp     loc_1409F968D
 * 00000001409FA844: cmp     r10d, 0Eh
 * 00000001409FA848: jle     loc_1409FDB1B
 * 00000001409FA84E: mov     ebx, 0Fh
 * 00000001409FA853: cmp     r10d, ebx
 * 00000001409FA856: jz      loc_1409FD9C7
 * 00000001409FA85C: cmp     r10d, 15h
 * 00000001409FA860: jz      loc_1409FD8CA
 * 00000001409FA866: cmp     r10d, 18h
 * 00000001409FA86A: jz      loc_1409FB1B5
 * 00000001409FA870: cmp     r10d, r11d
 * 00000001409FA873: jz      loc_1409FAD77
 * 00000001409FA879: cmp     r10d, 1Ah
 * 00000001409FA87D: jz      loc_1409FAB53
 * 00000001409FA883: cmp     r10d, 1Bh
 * 00000001409FA887: jnz     loc_140A0376C
 * 00000001409FA88D: mov     eax, [rsi+830h]
 * 00000001409FA893: test    dl, al
 * 00000001409FA895: jz      loc_1409F9318
 * 00000001409FA89B: mov     r14, [rsi+5A8h]
 * 00000001409FA8A2: xor     eax, eax
 * 00000001409FA8A4: mov     r15, [rsi+5B0h]
 * 00000001409FA8AB: mov     rbx, [rsi+548h]
 * 00000001409FA8B2: mov     [rsp+0CE0h+var_C78], eax
 * 00000001409FA8B6: mov     rax, [rsi+178h]
 * 00000001409FA8BD: mov     [rbp+0BE0h+var_C50], r14
 * 00000001409FA8C1: mov     [rsp+0CE0h+var_C88], r15
 * 00000001409FA8C6: call    KeGuardDispatchICall
 * 00000001409FA8CB: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FA8D5: jnz     short loc_1409FA8F0
 * 00000001409FA8D7: mov     ecx, [rsi+950h]
 * 00000001409FA8DD: cmp     ecx, 7
 * 00000001409FA8E0: jnb     short loc_1409FA8F0
 * 00000001409FA8E2: mov     r12d, 1
 * 00000001409FA8E8: mov     r13d, r12d
 * 00000001409FA8EB: shl     r13b, cl
 * 00000001409FA8EE: jmp     short loc_1409FA90E
 * 00000001409FA8F0: mov     rax, [rsi+128h]
 * 00000001409FA8F7: xor     edx, edx
 * 00000001409FA8F9: mov     rcx, [rsi+0A00h]
 * 00000001409FA900: call    KeGuardDispatchICall
 * 00000001409FA905: mov     r13b, 80h
 * 00000001409FA908: mov     r12d, 1
 * 00000001409FA90E: mov     rax, [rsi+138h]
 * 00000001409FA915: xor     edx, edx
 * 00000001409FA917: mov     rcx, rbx
 * 00000001409FA91A: mov     [rbp+0BE0h+var_C58], r13d
 * 00000001409FA91E: call    KeGuardDispatchICall
 * 00000001409FA923: mov     rax, [rsi+138h]
 * 00000001409FA92A: xor     edx, edx
 * 00000001409FA92C: mov     rcx, r14
 * 00000001409FA92F: call    KeGuardDispatchICall
 * 00000001409FA934: mov     r9, [rsi+5A0h]
 * 00000001409FA93B: xor     eax, eax
 * 00000001409FA93D: mov     r10d, eax
 * 00000001409FA940: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409FA944: mov     r8, [r9]
 * 00000001409FA947: cmp     r8, r9
 * 00000001409FA94A: jz      short loc_1409FA99E
 * 00000001409FA94C: lea     rdx, [r8-18h]
 * 00000001409FA950: cmp     rdx, r15
 * 00000001409FA953: jz      short loc_1409FA98B
 * 00000001409FA955: mov     rax, [rsi+738h]
 * 00000001409FA95C: mov     rdx, [rdx+rax]
 * 00000001409FA960: mov     rax, [rsi+6C0h]
 * 00000001409FA967: mov     ecx, [rdx+rax]
 * 00000001409FA96A: test    [rsi+6D8h], ecx
 * 00000001409FA970: jnz     short loc_1409FA97F
 * 00000001409FA972: test    r10, r10
 * 00000001409FA975: mov     rax, rdx
 * 00000001409FA978: cmovnz  rax, r12
 * 00000001409FA97C: mov     r10, rax
 * 00000001409FA97F: mov     rax, [rsi+6B8h]
 * 00000001409FA986: lock or [rdx+rax], r13b
 * 00000001409FA98B: mov     r8, [r8]
 * 00000001409FA98E: cmp     r8, r9
 * 00000001409FA991: jnz     short loc_1409FA94C
 * 00000001409FA993: mov     [rbp+0BE0h+var_C60], r10
 * 00000001409FA997: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FA99E: mov     r12, [rsi+520h]
 * 00000001409FA9A5: mov     r14, [r12]
 * 00000001409FA9A9: cmp     r14, r12
 * 00000001409FA9AC: jz      loc_1409FAA9E
 * 00000001409FA9B2: mov     rdi, [rsp+0CE0h+var_C88]
 * 00000001409FA9B7: mov     r15b, r13b
 * 00000001409FA9BA: movzx   r8d, r13b
 * 00000001409FA9BE: not     r15b
 * 00000001409FA9C1: mov     r13d, [rsp+0CE0h+var_C78]
 * 00000001409FA9C6: mov     dword ptr [rbp+0BE0h+arg_8], r8d
 * 00000001409FA9CD: mov     rdx, [rsi+6B8h]
 * 00000001409FA9D4: mov     rbx, r14
 * 00000001409FA9D7: sub     rbx, [rsi+6D0h]
 * 00000001409FA9DE: mov     rcx, rdx
 * 00000001409FA9E1: movsx   eax, byte ptr [rdx+rbx]
 * 00000001409FA9E5: test    r8d, eax
 * 00000001409FA9E8: jnz     loc_1409FAA6E
 * 00000001409FA9EE: mov     rax, [rsi+6C8h]
 * 00000001409FA9F5: mov     r8, [rbx+rax]
 * 00000001409FA9F9: xor     eax, eax
 * 00000001409FA9FB: test    r8, r8
 * 00000001409FA9FE: jz      short loc_1409FAA67
 * 00000001409FAA00: cmp     r8, rdi
 * 00000001409FAA03: jz      short loc_1409FAA67
 * 00000001409FAA05: cmp     [rsi+8F8h], eax
 * 00000001409FAA0B: jnz     short loc_1409FAA67
 * 00000001409FAA0D: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FAA12: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FAA1C: add     rax, rsi
 * 00000001409FAA1F: xor     edx, edx
 * 00000001409FAA21: mov     [rsi+900h], rax
 * 00000001409FAA28: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FAA32: add     rax, rcx
 * 00000001409FAA35: mov     [rsi+908h], rax
 * 00000001409FAA3C: movsxd  rax, dword ptr [rcx]
 * 00000001409FAA3F: mov     rcx, rsi
 * 00000001409FAA42: mov     [rsi+910h], rax
 * 00000001409FAA49: mov     eax, 1
 * 00000001409FAA4E: mov     [rsi+918h], rbx
 * 00000001409FAA55: mov     [rsi+8F8h], eax
 * 00000001409FAA5B: call    $$b8
 * 00000001409FAA60: mov     rcx, [rsi+6B8h]
 * 00000001409FAA67: mov     r8d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FAA6E: lock and [rcx+rbx], r15b
 * 00000001409FAA73: mov     r14, [r14]
 * 00000001409FAA76: mov     ecx, 1
 * 00000001409FAA7B: add     r13d, ecx
 * 00000001409FAA7E: cmp     r14, r12
 * 00000001409FAA81: jnz     loc_1409FA9CD
 * 00000001409FAA87: mov     r15, [rsp+0CE0h+var_C88]
 * 00000001409FAA8C: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FAA93: mov     [rsp+0CE0h+var_C78], r13d
 * 00000001409FAA98: mov     r13d, [rbp+0BE0h+var_C58]
 * 00000001409FAA9C: jmp     short loc_1409FAAA3
 * 00000001409FAA9E: mov     ecx, 1
 * 00000001409FAAA3: mov     rdx, [rbp+0BE0h+var_C60]
 * 00000001409FAAA7: test    rdx, rdx
 * 00000001409FAAAA: jz      short loc_1409FAAFC
 * 00000001409FAAAC: cmp     rdx, rcx
 * 00000001409FAAAF: jz      short loc_1409FAAC3
 * 00000001409FAAB1: mov     rax, [rsi+6B8h]
 * 00000001409FAAB8: mov     cl, r13b
 * 00000001409FAABB: not     cl
 * 00000001409FAABD: lock and [rdx+rax], cl
 * 00000001409FAAC1: jmp     short loc_1409FAAFC
 * 00000001409FAAC3: mov     r10, [rsi+5A0h]
 * 00000001409FAACA: mov     r9, [r10]
 * 00000001409FAACD: jmp     short loc_1409FAAF7
 * 00000001409FAACF: lea     r8, [r9-18h]
 * 00000001409FAAD3: cmp     r8, r15
 * 00000001409FAAD6: jz      short loc_1409FAAF4
 * 00000001409FAAD8: mov     rax, [rsi+738h]
 * 00000001409FAADF: mov     dl, r13b
 * 00000001409FAAE2: not     dl
 * 00000001409FAAE4: mov     r8, [r8+rax]
 * 00000001409FAAE8: mov     rax, [rsi+6B8h]
 * 00000001409FAAEF: lock and [r8+rax], dl
 * 00000001409FAAF4: mov     r9, [r9]
 * 00000001409FAAF7: cmp     r9, r10
 * 00000001409FAAFA: jnz     short loc_1409FAACF
 * 00000001409FAAFC: mov     rax, [rsi+140h]
 * 00000001409FAB03: xor     edx, edx
 * 00000001409FAB05: mov     rcx, [rbp+0BE0h+var_C50]
 * 00000001409FAB09: call    KeGuardDispatchICall
 * 00000001409FAB0E: cmp     r13b, 80h
 * 00000001409FAB12: jnz     short loc_1409FAB29
 * 00000001409FAB14: mov     rax, [rsi+130h]
 * 00000001409FAB1B: xor     edx, edx
 * 00000001409FAB1D: mov     rcx, [rsi+0A00h]
 * 00000001409FAB24: call    KeGuardDispatchICall
 * 00000001409FAB29: mov     rcx, [rsi+548h]
 * 00000001409FAB30: xor     edx, edx
 * 00000001409FAB32: mov     rax, [rsi+140h]
 * 00000001409FAB39: call    KeGuardDispatchICall
 * 00000001409FAB3E: mov     rax, [rsi+180h]
 * 00000001409FAB45: call    KeGuardDispatchICall
 * 00000001409FAB4A: mov     eax, [rsp+0CE0h+var_C78]
 * 00000001409FAB4E: jmp     loc_1409FA382
 * 00000001409FAB53: mov     eax, [rsi+830h]
 * 00000001409FAB59: test    dl, al
 * 00000001409FAB5B: jnz     loc_1409F9318
 * 00000001409FAB61: mov     r14, [rsi+5A8h]
 * 00000001409FAB68: xor     eax, eax
 * 00000001409FAB6A: mov     rbx, [rsi+548h]
 * 00000001409FAB71: mov     r13d, eax
 * 00000001409FAB74: mov     dword ptr [rbp+0BE0h+arg_8], eax
 * 00000001409FAB7A: mov     rax, [rsi+5B0h]
 * 00000001409FAB81: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FAB86: mov     rax, [rsi+178h]
 * 00000001409FAB8D: mov     [rbp+0BE0h+var_C60], r14
 * 00000001409FAB91: call    KeGuardDispatchICall
 * 00000001409FAB96: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FABA0: jnz     short loc_1409FABBB
 * 00000001409FABA2: mov     ecx, [rsi+950h]
 * 00000001409FABA8: cmp     ecx, 7
 * 00000001409FABAB: jnb     short loc_1409FABBB
 * 00000001409FABAD: mov     r12d, 1
 * 00000001409FABB3: mov     r15d, r12d
 * 00000001409FABB6: shl     r15b, cl
 * 00000001409FABB9: jmp     short loc_1409FABD9
 * 00000001409FABBB: mov     rax, [rsi+128h]
 * 00000001409FABC2: xor     edx, edx
 * 00000001409FABC4: mov     rcx, [rsi+0A00h]
 * 00000001409FABCB: call    KeGuardDispatchICall
 * 00000001409FABD0: mov     r15b, 80h
 * 00000001409FABD3: mov     r12d, 1
 * 00000001409FABD9: mov     rax, [rsi+138h]
 * 00000001409FABE0: xor     edx, edx
 * 00000001409FABE2: mov     rcx, rbx
 * 00000001409FABE5: call    KeGuardDispatchICall
 * 00000001409FABEA: mov     r8, [rsi+520h]
 * 00000001409FABF1: mov     rdx, [r8]
 * 00000001409FABF4: cmp     rdx, r8
 * 00000001409FABF7: jz      short loc_1409FAC21
 * 00000001409FABF9: mov     rax, [rsi+6B8h]
 * 00000001409FAC00: mov     rcx, rdx
 * 00000001409FAC03: sub     rcx, [rsi+6D0h]
 * 00000001409FAC0A: lock or [rcx+rax], r15b
 * 00000001409FAC0F: mov     rdx, [rdx]
 * 00000001409FAC12: add     r13d, r12d
 * 00000001409FAC15: cmp     rdx, r8
 * 00000001409FAC18: jnz     short loc_1409FABF9
 * 00000001409FAC1A: mov     dword ptr [rbp+0BE0h+arg_8], r13d
 * 00000001409FAC21: mov     rax, [rsi+138h]
 * 00000001409FAC28: xor     edx, edx
 * 00000001409FAC2A: mov     rcx, r14
 * 00000001409FAC2D: call    KeGuardDispatchICall
 * 00000001409FAC32: mov     r12, [rsi+5A0h]
 * 00000001409FAC39: mov     r14, [r12]
 * 00000001409FAC3D: cmp     r14, r12
 * 00000001409FAC40: jz      loc_1409FAD19
 * 00000001409FAC46: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409FAC4B: xor     r13d, r13d
 * 00000001409FAC4E: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FAC53: mov     rcx, r14
 * 00000001409FAC56: sub     rcx, [rsi+740h]
 * 00000001409FAC5D: cmp     rcx, rax
 * 00000001409FAC60: jz      loc_1409FACFF
 * 00000001409FAC66: mov     r8, [rsi+6B8h]
 * 00000001409FAC6D: mov     rax, [rsi+738h]
 * 00000001409FAC74: mov     rdx, r8
 * 00000001409FAC77: mov     rbx, [rcx+rax]
 * 00000001409FAC7B: test    [r8+rbx], r15b
 * 00000001409FAC7F: jnz     short loc_1409FACF1
 * 00000001409FAC81: mov     rax, [rsi+6C0h]
 * 00000001409FAC88: mov     ecx, [rbx+rax]
 * 00000001409FAC8B: test    [rsi+6D8h], ecx
 * 00000001409FAC91: jz      short loc_1409FACF1
 * 00000001409FAC93: cmp     [rsi+8F8h], r13d
 * 00000001409FAC9A: jnz     short loc_1409FACF1
 * 00000001409FAC9C: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FACA6: xor     edx, edx
 * 00000001409FACA8: add     rax, rsi
 * 00000001409FACAB: mov     rcx, rsi
 * 00000001409FACAE: mov     [rsi+900h], rax
 * 00000001409FACB5: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FACBF: add     rax, rdi
 * 00000001409FACC2: mov     [rsi+908h], rax
 * 00000001409FACC9: movsxd  rax, dword ptr [rdi]
 * 00000001409FACCC: mov     [rsi+910h], rax
 * 00000001409FACD3: mov     eax, 1
 * 00000001409FACD8: mov     [rsi+918h], rbx
 * 00000001409FACDF: mov     [rsi+8F8h], eax
 * 00000001409FACE5: call    $$b8
 * 00000001409FACEA: mov     rdx, [rsi+6B8h]
 * 00000001409FACF1: mov     al, r15b
 * 00000001409FACF4: not     al
 * 00000001409FACF6: lock and [rbx+rdx], al
 * 00000001409FACFA: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409FACFF: mov     r14, [r14]
 * 00000001409FAD02: cmp     r14, r12
 * 00000001409FAD05: jnz     loc_1409FAC53
 * 00000001409FAD0B: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FAD12: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FAD19: mov     rax, [rsi+140h]
 * 00000001409FAD20: xor     edx, edx
 * 00000001409FAD22: mov     rcx, [rbp+0BE0h+var_C60]
 * 00000001409FAD26: call    KeGuardDispatchICall
 * 00000001409FAD2B: cmp     r15b, 80h
 * 00000001409FAD2F: jnz     short loc_1409FAD46
 * 00000001409FAD31: mov     rax, [rsi+130h]
 * 00000001409FAD38: xor     edx, edx
 * 00000001409FAD3A: mov     rcx, [rsi+0A00h]
 * 00000001409FAD41: call    KeGuardDispatchICall
 * 00000001409FAD46: mov     rcx, [rsi+548h]
 * 00000001409FAD4D: xor     edx, edx
 * 00000001409FAD4F: mov     rax, [rsi+140h]
 * 00000001409FAD56: call    KeGuardDispatchICall
 * 00000001409FAD5B: mov     rax, [rsi+180h]
 * 00000001409FAD62: call    KeGuardDispatchICall
 * 00000001409FAD67: shl     r13d, 8
 * 00000001409FAD6B: add     [rsi+828h], r13d
 * 00000001409FAD72: jmp     loc_1409F9318
 * 00000001409FAD77: mov     r12, [rsi+530h]
 * 00000001409FAD7E: xor     eax, eax
 * 00000001409FAD80: mov     [rsp+0CE0h+var_C78], eax
 * 00000001409FAD84: mov     rax, [rsi+378h]
 * 00000001409FAD8B: call    KeGuardDispatchICall
 * 00000001409FAD90: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409FAD94: cli
 * 00000001409FAD95: mov     rcx, gs:20h
 * 00000001409FAD9E: mov     rax, [rsi+648h]
 * 00000001409FADA5: mov     rcx, [rcx+rax]
 * 00000001409FADA9: sti
 * 00000001409FADAA: mov     rax, [rsi+168h]
 * 00000001409FADB1: call    KeGuardDispatchICall
 * 00000001409FADB6: mov     rcx, [rsi+538h]
 * 00000001409FADBD: mov     ebx, 1
 * 00000001409FADC2: mov     rax, [rsi+0F0h]
 * 00000001409FADC9: mov     dl, bl
 * 00000001409FADCB: call    KeGuardDispatchICall
 * 00000001409FADD0: mov     rax, [rsi+610h]
 * 00000001409FADD7: mov     rcx, [rax]
 * 00000001409FADDA: mov     r13d, [rcx]
 * 00000001409FADDD: lea     rdx, [rcx+10h]
 * 00000001409FADE1: mov     [rsp+0CE0h+var_C88], rdx
 * 00000001409FADE6: lea     rax, ds:0[r13*2]
 * 00000001409FADEE: add     rax, r13
 * 00000001409FADF1: lea     rax, [rdx+rax*8]
 * 00000001409FADF5: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409FADF9: xor     eax, eax
 * 00000001409FADFB: mov     dword ptr [rbp+0BE0h+arg_8], eax
 * 00000001409FAE01: cmp     [rcx+0Ch], al
 * 00000001409FAE04: jz      short loc_1409FAE1A
 * 00000001409FAE06: mov     r13d, eax
 * 00000001409FAE09: mov     rax, [r12]
 * 00000001409FAE0D: jmp     short loc_1409FAE15
 * 00000001409FAE0F: mov     rax, [rax]
 * 00000001409FAE12: add     r13d, ebx
 * 00000001409FAE15: cmp     rax, r12
 * 00000001409FAE18: jnz     short loc_1409FAE0F
 * 00000001409FAE1A: mov     r8d, [rsi+810h]
 * 00000001409FAE21: mov     r15d, r13d
 * 00000001409FAE24: shl     r15d, 3
 * 00000001409FAE28: rdtsc
 * 00000001409FAE2A: shl     rdx, 20h
 * 00000001409FAE2E: mov     r9, 7010008004002001h
 * 00000001409FAE38: or      rax, rdx
 * 00000001409FAE3B: mov     rcx, rax
 * 00000001409FAE3E: ror     rax, 3
 * 00000001409FAE42: xor     rcx, rax
 * 00000001409FAE45: mov     rax, r9
 * 00000001409FAE48: mul     rcx
 * 00000001409FAE4B: mov     rbx, rdx
 * 00000001409FAE4E: mov     [rbp+0BE0h+var_348], rdx
 * 00000001409FAE55: xor     ebx, eax
 * 00000001409FAE57: and     ebx, 7FFh
 * 00000001409FAE5D: rdtsc
 * 00000001409FAE5F: shl     rdx, 20h
 * 00000001409FAE63: or      rax, rdx
 * 00000001409FAE66: mov     rcx, rax
 * 00000001409FAE69: ror     rax, 3
 * 00000001409FAE6D: xor     rcx, rax
 * 00000001409FAE70: mov     rax, r9
 * 00000001409FAE73: mul     rcx
 * 00000001409FAE76: lea     ecx, [rbx+1]
 * 00000001409FAE79: xor     rax, rdx
 * 00000001409FAE7C: mov     [rbp+0BE0h+var_340], rdx
 * 00000001409FAE83: xor     edx, edx
 * 00000001409FAE85: div     rcx
 * 00000001409FAE88: mov     rax, [rsi+0F8h]
 * 00000001409FAE8F: mov     ecx, 200h
 * 00000001409FAE94: mov     r14, rdx
 * 00000001409FAE97: lea     edx, [rbx+r15]
 * 00000001409FAE9B: call    KeGuardDispatchICall
 * 00000001409FAEA0: mov     r11, rax
 * 00000001409FAEA3: xor     eax, eax
 * 00000001409FAEA5: test    r11, r11
 * 00000001409FAEA8: jnz     short loc_1409FAEB8
 * 00000001409FAEAA: lea     ecx, [rax+1]
 * 00000001409FAEAD: add     [rsi+0A18h], ecx
 * 00000001409FAEB3: jmp     loc_1409FB00A
 * 00000001409FAEB8: mov     r10d, r14d
 * 00000001409FAEBB: mov     r9, r11
 * 00000001409FAEBE: cmp     r14d, 8
 * 00000001409FAEC2: jb      short loc_1409FAF19
 * 00000001409FAEC4: mov     r8d, r14d
 * 00000001409FAEC7: mov     esi, 1
 * 00000001409FAECC: shr     r8, 3
 * 00000001409FAED0: mov     rdi, 7010008004002001h
 * 00000001409FAEDA: rdtsc
 * 00000001409FAEDC: shl     rdx, 20h
 * 00000001409FAEE0: add     r10d, 0FFFFFFF8h
 * 00000001409FAEE4: or      rax, rdx
 * 00000001409FAEE7: mov     rcx, rax
 * 00000001409FAEEA: ror     rax, 3
 * 00000001409FAEEE: xor     rcx, rax
 * 00000001409FAEF1: mov     rax, rdi
 * 00000001409FAEF4: mul     rcx
 * 00000001409FAEF7: mov     [rbp+0BE0h+var_338], rdx
 * 00000001409FAEFE: xor     rdx, rax
 * 00000001409FAF01: mov     [r9], rdx
 * 00000001409FAF04: add     r9, 8
 * 00000001409FAF08: sub     r8, rsi
 * 00000001409FAF0B: jnz     short loc_1409FAEDA
 * 00000001409FAF0D: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FAF12: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FAF19: test    r10d, r10d
 * 00000001409FAF1C: jz      short loc_1409FAF61
 * 00000001409FAF1E: rdtsc
 * 00000001409FAF20: shl     rdx, 20h
 * 00000001409FAF24: or      rax, rdx
 * 00000001409FAF27: mov     rcx, rax
 * 00000001409FAF2A: ror     rax, 3
 * 00000001409FAF2E: xor     rcx, rax
 * 00000001409FAF31: mov     rax, 7010008004002001h
 * 00000001409FAF3B: mul     rcx
 * 00000001409FAF3E: mov     ecx, 0FFFFFFFFh
 * 00000001409FAF43: mov     [rbp+0BE0h+var_330], rdx
 * 00000001409FAF4A: xor     rdx, rax
 * 00000001409FAF4D: mov     eax, 1
 * 00000001409FAF52: mov     [r9], dl
 * 00000001409FAF55: add     r9, rax
 * 00000001409FAF58: shr     rdx, 8
 * 00000001409FAF5C: add     r10d, ecx
 * 00000001409FAF5F: jnz     short loc_1409FAF52
 * 00000001409FAF61: mov     r8d, r15d
 * 00000001409FAF64: sub     ebx, r14d
 * 00000001409FAF67: add     r8, r11
 * 00000001409FAF6A: mov     r10d, r14d
 * 00000001409FAF6D: add     r8, r10
 * 00000001409FAF70: mov     r14d, 1
 * 00000001409FAF76: mov     r15, 7010008004002001h
 * 00000001409FAF80: cmp     ebx, 8
 * 00000001409FAF83: jb      short loc_1409FAFBE
 * 00000001409FAF85: mov     r9d, ebx
 * 00000001409FAF88: shr     r9, 3
 * 00000001409FAF8C: rdtsc
 * 00000001409FAF8E: shl     rdx, 20h
 * 00000001409FAF92: add     ebx, 0FFFFFFF8h
 * 00000001409FAF95: or      rax, rdx
 * 00000001409FAF98: mov     rcx, rax
 * 00000001409FAF9B: ror     rax, 3
 * 00000001409FAF9F: xor     rcx, rax
 * 00000001409FAFA2: mov     rax, r15
 * 00000001409FAFA5: mul     rcx
 * 00000001409FAFA8: mov     [rbp+0BE0h+var_250], rdx
 * 00000001409FAFAF: xor     rdx, rax
 * 00000001409FAFB2: mov     [r8], rdx
 * 00000001409FAFB5: add     r8, 8
 * 00000001409FAFB9: sub     r9, r14
 * 00000001409FAFBC: jnz     short loc_1409FAF8C
 * 00000001409FAFBE: test    ebx, ebx
 * 00000001409FAFC0: jz      short loc_1409FAFF8
 * 00000001409FAFC2: rdtsc
 * 00000001409FAFC4: shl     rdx, 20h
 * 00000001409FAFC8: or      rax, rdx
 * 00000001409FAFCB: mov     rcx, rax
 * 00000001409FAFCE: ror     rax, 3
 * 00000001409FAFD2: xor     rcx, rax
 * 00000001409FAFD5: mov     rax, r15
 * 00000001409FAFD8: mul     rcx
 * 00000001409FAFDB: mov     [rbp+0BE0h+var_248], rdx
 * 00000001409FAFE2: xor     rdx, rax
 * 00000001409FAFE5: mov     eax, 0FFFFFFFFh
 * 00000001409FAFEA: mov     [r8], dl
 * 00000001409FAFED: add     r8, r14
 * 00000001409FAFF0: shr     rdx, 8
 * 00000001409FAFF4: add     ebx, eax
 * 00000001409FAFF6: jnz     short loc_1409FAFEA
 * 00000001409FAFF8: lea     r15, [r11+r10]
 * 00000001409FAFFC: mov     [rbp+0BE0h+var_A20], r11
 * 00000001409FB003: test    r15, r15
 * 00000001409FB006: jnz     short loc_1409FB016
 * 00000001409FB008: xor     eax, eax
 * 00000001409FB00A: mov     [rbp+0BE0h+var_A20], rax
 * 00000001409FB011: jmp     loc_1409FB152
 * 00000001409FB016: mov     rbx, [r12]
 * 00000001409FB01A: cmp     rbx, r12
 * 00000001409FB01D: jz      short loc_1409FB06C
 * 00000001409FB01F: mov     edi, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FB025: mov     rax, [rsi+750h]
 * 00000001409FB02C: mov     rcx, rbx
 * 00000001409FB02F: sub     rcx, [rsi+748h]
 * 00000001409FB036: mov     r14, [rcx+rax]
 * 00000001409FB03A: mov     rax, [rsi+2A8h]
 * 00000001409FB041: mov     rcx, r14
 * 00000001409FB044: call    KeGuardDispatchICall
 * 00000001409FB049: test    eax, eax
 * 00000001409FB04B: jnz     short loc_1409FB05A
 * 00000001409FB04D: cmp     edi, r13d
 * 00000001409FB050: jnb     short loc_1409FB05A
 * 00000001409FB052: mov     eax, edi
 * 00000001409FB054: inc     edi
 * 00000001409FB056: mov     [r15+rax*8], r14
 * 00000001409FB05A: mov     rbx, [rbx]
 * 00000001409FB05D: inc     [rsp+0CE0h+var_C78]
 * 00000001409FB061: cmp     rbx, r12
 * 00000001409FB064: jnz     short loc_1409FB025
 * 00000001409FB066: mov     dword ptr [rbp+0BE0h+arg_8], edi
 * 00000001409FB06C: mov     r14d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FB073: mov     rcx, r15
 * 00000001409FB076: mov     rax, [rsi+398h]
 * 00000001409FB07D: mov     edx, r14d
 * 00000001409FB080: call    KeGuardDispatchICall
 * 00000001409FB085: mov     r12, [rsp+0CE0h+var_C88]
 * 00000001409FB08A: mov     r13, [rbp+0BE0h+var_C60]
 * 00000001409FB08E: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FB093: mov     rbx, [r12+8]
 * 00000001409FB098: mov     rax, [rsi+2A8h]
 * 00000001409FB09F: mov     rcx, rbx
 * 00000001409FB0A2: call    KeGuardDispatchICall
 * 00000001409FB0A7: test    eax, eax
 * 00000001409FB0A9: jnz     loc_1409FB13E
 * 00000001409FB0AF: xor     eax, eax
 * 00000001409FB0B1: lea     edx, [r14-1]
 * 00000001409FB0B5: mov     r8d, eax
 * 00000001409FB0B8: test    edx, edx
 * 00000001409FB0BA: js      short loc_1409FB0E8
 * 00000001409FB0BC: lea     ecx, [rdx+r8]
 * 00000001409FB0C0: sar     ecx, 1
 * 00000001409FB0C2: movsxd  rax, ecx
 * 00000001409FB0C5: cmp     rbx, [r15+rax*8]
 * 00000001409FB0C9: jnb     short loc_1409FB0D6
 * 00000001409FB0CB: xor     eax, eax
 * 00000001409FB0CD: test    ecx, ecx
 * 00000001409FB0CF: jz      short loc_1409FB0E8
 * 00000001409FB0D1: lea     edx, [rcx-1]
 * 00000001409FB0D4: jmp     short loc_1409FB0DC
 * 00000001409FB0D6: jbe     short loc_1409FB0E1
 * 00000001409FB0D8: lea     r8d, [rcx+1]
 * 00000001409FB0DC: cmp     edx, r8d
 * 00000001409FB0DF: jge     short loc_1409FB0BC
 * 00000001409FB0E1: cmp     edx, r8d
 * 00000001409FB0E4: jge     short loc_1409FB13E
 * 00000001409FB0E6: xor     eax, eax
 * 00000001409FB0E8: cmp     [rsi+8F8h], eax
 * 00000001409FB0EE: jnz     short loc_1409FB13E
 * 00000001409FB0F0: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FB0FA: xor     edx, edx
 * 00000001409FB0FC: add     rax, rsi
 * 00000001409FB0FF: mov     rcx, rsi
 * 00000001409FB102: mov     [rsi+900h], rax
 * 00000001409FB109: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FB113: add     rax, rdi
 * 00000001409FB116: mov     [rsi+908h], rax
 * 00000001409FB11D: movsxd  rax, dword ptr [rdi]
 * 00000001409FB120: mov     [rsi+910h], rax
 * 00000001409FB127: mov     eax, 1
 * 00000001409FB12C: mov     [rsi+918h], rbx
 * 00000001409FB133: mov     [rsi+8F8h], eax
 * 00000001409FB139: call    $$b8
 * 00000001409FB13E: add     r12, 18h
 * 00000001409FB142: cmp     r12, r13
 * 00000001409FB145: jb      loc_1409FB093
 * 00000001409FB14B: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FB152: mov     rcx, [rsi+538h]
 * 00000001409FB159: mov     rax, [rsi+118h]
 * 00000001409FB160: call    KeGuardDispatchICall
 * 00000001409FB165: mov     rax, [rsi+170h]
 * 00000001409FB16C: call    KeGuardDispatchICall
 * 00000001409FB171: mov     rax, [rsi+380h]
 * 00000001409FB178: mov     rcx, [rbp+0BE0h+var_C50]
 * 00000001409FB17C: call    KeGuardDispatchICall
 * 00000001409FB181: xor     eax, eax
 * 00000001409FB183: cmp     [rbp+0BE0h+var_A20], rax
 * 00000001409FB18A: jz      loc_1409F9318
 * 00000001409FB190: mov     eax, [rsp+0CE0h+var_C78]
 * 00000001409FB194: shl     eax, 9
 * 00000001409FB197: add     [rsi+828h], eax
 * 00000001409FB19D: mov     rax, [rsi+100h]
 * 00000001409FB1A4: mov     rcx, [rbp+0BE0h+var_A20]
 * 00000001409FB1AB: call    KeGuardDispatchICall
 * 00000001409FB1B0: jmp     loc_1409F9318
 * 00000001409FB1B5: mov     r12d, 40000000h
 * 00000001409FB1BB: test    [rsi+990h], r12d
 * 00000001409FB1C2: jz      short loc_1409FB220
 * 00000001409FB1C4: test    dword ptr [rsi+994h], 1000h
 * 00000001409FB1CE: jnz     short loc_1409FB220
 * 00000001409FB1D0: rdtsc
 * 00000001409FB1D2: shl     rdx, 20h
 * 00000001409FB1D6: or      rax, rdx
 * 00000001409FB1D9: mov     rcx, rax
 * 00000001409FB1DC: ror     rax, 3
 * 00000001409FB1E0: xor     rcx, rax
 * 00000001409FB1E3: mov     rax, 7010008004002001h
 * 00000001409FB1ED: mul     rcx
 * 00000001409FB1F0: mov     rcx, rdx
 * 00000001409FB1F3: mov     [rbp+0BE0h+var_1E0], rdx
 * 00000001409FB1FA: xor     rcx, rax
 * 00000001409FB1FD: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001409FB207: mul     rcx
 * 00000001409FB20A: shr     rdx, 2
 * 00000001409FB20E: lea     rax, [rdx+rdx*4]
 * 00000001409FB212: mov     edx, 1
 * 00000001409FB217: sub     rcx, rax
 * 00000001409FB21A: mov     [rsi+824h], ecx
 * 00000001409FB220: mov     ecx, [rsi+824h]
 * 00000001409FB226: xor     eax, eax
 * 00000001409FB228: test    ecx, ecx
 * 00000001409FB22A: jz      loc_1409FD739
 * 00000001409FB230: sub     ecx, 1
 * 00000001409FB233: jz      loc_1409FD5CF
 * 00000001409FB239: sub     ecx, 1
 * 00000001409FB23C: jz      loc_1409FD427
 * 00000001409FB242: sub     ecx, 1
 * 00000001409FB245: jz      loc_1409FB5A7
 * 00000001409FB24B: sub     ecx, 1
 * 00000001409FB24E: jz      loc_1409FB3FC
 * 00000001409FB254: cmp     ecx, 1
 * 00000001409FB257: jnz     loc_1409FD8BA
 * 00000001409FB25D: mov     rbx, r13
 * 00000001409FB260: mov     [rbp+0BE0h+arg_10], 0FFh
 * 00000001409FB267: mov     r13d, eax
 * 00000001409FB26A: mov     r14d, eax
 * 00000001409FB26D: mov     r15d, eax
 * 00000001409FB270: jmp     short loc_1409FB274
 * 00000001409FB272: xor     eax, eax
 * 00000001409FB274: mov     [rbp+0BE0h+var_960], rax
 * 00000001409FB27B: lea     r9, [rbp+0BE0h+var_A98]
 * 00000001409FB282: mov     rax, [rsi+430h]
 * 00000001409FB289: lea     r8, [rbp+0BE0h+arg_10]
 * 00000001409FB290: lea     rdx, [rbp+0BE0h+var_960]
 * 00000001409FB297: mov     ecx, r14d
 * 00000001409FB29A: call    KeGuardDispatchICall
 * 00000001409FB29F: test    eax, eax
 * 00000001409FB2A1: jz      loc_1409FB3DB
 * 00000001409FB2A7: mov     r12d, 1
 * 00000001409FB2AD: mov     rax, [rsi+208h]
 * 00000001409FB2B4: lea     rdx, [rbp+0BE0h+var_1D8]
 * 00000001409FB2BB: mov     rcx, [rbp+0BE0h+var_A98]
 * 00000001409FB2C2: add     r13d, r12d
 * 00000001409FB2C5: call    KeGuardDispatchICall
 * 00000001409FB2CA: test    rax, rax
 * 00000001409FB2CD: jnz     loc_1409FB3AF
 * 00000001409FB2D3: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FB2DD: jz      short loc_1409FB326
 * 00000001409FB2DF: mov     rcx, [rsi+0A80h]
 * 00000001409FB2E6: lea     edx, [rax+30h]
 * 00000001409FB2E9: lea     r8d, [rax+6]
 * 00000001409FB2ED: mov     rax, [rbx]
 * 00000001409FB2F0: add     edx, 0FFFFFFF8h
 * 00000001409FB2F3: mov     [rcx], rax
 * 00000001409FB2F6: add     rbx, 8
 * 00000001409FB2FA: add     rcx, 8
 * 00000001409FB2FE: sub     r8, r12
 * 00000001409FB301: jnz     short loc_1409FB2ED
 * 00000001409FB303: test    edx, edx
 * 00000001409FB305: jz      short loc_1409FB31F
 * 00000001409FB307: mov     esi, 0FFFFFFFFh
 * 00000001409FB30C: mov     al, [rbx]
 * 00000001409FB30E: add     rbx, r12
 * 00000001409FB311: mov     [rcx], al
 * 00000001409FB313: add     rcx, r12
 * 00000001409FB316: add     edx, esi
 * 00000001409FB318: jnz     short loc_1409FB30C
 * 00000001409FB31A: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FB31F: mov     rbx, [rsi+0A80h]
 * 00000001409FB326: mov     rax, [rbp+0BE0h+var_A98]
 * 00000001409FB32D: mov     [rbx+18h], rax
 * 00000001409FB331: mov     rax, [rsi+590h]
 * 00000001409FB338: mov     [rax], rbx
 * 00000001409FB33B: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FB342: mov     rax, [rbp+0BE0h+var_A98]
 * 00000001409FB349: mov     rcx, [rsi+590h]
 * 00000001409FB350: mov     [rcx+8], rax
 * 00000001409FB354: xor     eax, eax
 * 00000001409FB356: mov     dword ptr [rcx+14h], 1000h
 * 00000001409FB35D: cmp     [rsi+8F8h], eax
 * 00000001409FB363: jnz     short loc_1409FB3AF
 * 00000001409FB365: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FB36F: xor     edx, edx
 * 00000001409FB371: add     rax, rsi
 * 00000001409FB374: mov     rcx, rsi
 * 00000001409FB377: mov     [rsi+900h], rax
 * 00000001409FB37E: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FB388: add     rax, rbx
 * 00000001409FB38B: mov     [rsi+908h], rax
 * 00000001409FB392: movsxd  rax, dword ptr [rbx]
 * 00000001409FB395: mov     [rsi+910h], rax
 * 00000001409FB39C: mov     [rsi+918h], r15
 * 00000001409FB3A3: mov     [rsi+8F8h], r12d
 * 00000001409FB3AA: call    $$b8
 * 00000001409FB3AF: mov     rax, [rsi+430h]
 * 00000001409FB3B6: lea     r9, [rbp+0BE0h+var_A98]
 * 00000001409FB3BD: lea     r8, [rbp+0BE0h+arg_10]
 * 00000001409FB3C4: mov     ecx, r14d
 * 00000001409FB3C7: lea     rdx, [rbp+0BE0h+var_960]
 * 00000001409FB3CE: call    KeGuardDispatchICall
 * 00000001409FB3D3: test    eax, eax
 * 00000001409FB3D5: jnz     loc_1409FB2AD
 * 00000001409FB3DB: mov     edx, 1
 * 00000001409FB3E0: add     r14d, edx
 * 00000001409FB3E3: add     r15, rdx
 * 00000001409FB3E6: cmp     r14d, 3
 * 00000001409FB3EA: jb      loc_1409FB272
 * 00000001409FB3F0: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FB3F7: jmp     loc_1409FD885
 * 00000001409FB3FC: mov     r13d, eax
 * 00000001409FB3FF: mov     [rbp+0BE0h+var_BE0], eax
 * 00000001409FB402: mov     rax, [rsi+318h]
 * 00000001409FB409: xor     ecx, ecx
 * 00000001409FB40B: call    KeGuardDispatchICall
 * 00000001409FB410: mov     r15, rax
 * 00000001409FB413: xor     eax, eax
 * 00000001409FB415: test    r15, r15
 * 00000001409FB418: jz      loc_1409FD880
 * 00000001409FB41E: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FB423: mov     [rbp+0BE0h+var_968], rax
 * 00000001409FB42A: lea     rdx, [rbp+0BE0h+var_968]
 * 00000001409FB431: mov     rax, [rsi+310h]
 * 00000001409FB438: mov     rcx, r15
 * 00000001409FB43B: mov     rbx, rdi
 * 00000001409FB43E: mov     r12d, 1
 * 00000001409FB444: call    KeGuardDispatchICall
 * 00000001409FB449: mov     r14, rax
 * 00000001409FB44C: test    rax, rax
 * 00000001409FB44F: jz      loc_1409FB57E
 * 00000001409FB455: lea     edi, [r12+5]
 * 00000001409FB45A: xor     r13d, r13d
 * 00000001409FB45D: mov     rax, [rsi+208h]
 * 00000001409FB464: lea     rdx, [rbp+0BE0h+var_1D0]
 * 00000001409FB46B: mov     rcx, r14
 * 00000001409FB46E: inc     r12d
 * 00000001409FB471: call    KeGuardDispatchICall
 * 00000001409FB476: test    rax, rax
 * 00000001409FB479: jnz     loc_1409FB553
 * 00000001409FB47F: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FB489: lea     r9d, [rax+1]
 * 00000001409FB48D: jz      short loc_1409FB4D5
 * 00000001409FB48F: mov     rcx, [rsi+0A80h]
 * 00000001409FB496: lea     edx, [rax+30h]
 * 00000001409FB499: mov     r8, rdi
 * 00000001409FB49C: mov     rax, [rbx]
 * 00000001409FB49F: add     edx, 0FFFFFFF8h
 * 00000001409FB4A2: mov     [rcx], rax
 * 00000001409FB4A5: add     rbx, 8
 * 00000001409FB4A9: add     rcx, 8
 * 00000001409FB4AD: sub     r8, r9
 * 00000001409FB4B0: jnz     short loc_1409FB49C
 * 00000001409FB4B2: test    edx, edx
 * 00000001409FB4B4: jz      short loc_1409FB4CE
 * 00000001409FB4B6: mov     r13d, 0FFFFFFFFh
 * 00000001409FB4BC: mov     al, [rbx]
 * 00000001409FB4BE: add     rbx, r9
 * 00000001409FB4C1: mov     [rcx], al
 * 00000001409FB4C3: add     rcx, r9
 * 00000001409FB4C6: add     edx, r13d
 * 00000001409FB4C9: jnz     short loc_1409FB4BC
 * 00000001409FB4CB: xor     r13d, r13d
 * 00000001409FB4CE: mov     rbx, [rsi+0A80h]
 * 00000001409FB4D5: mov     [rbx+18h], r14
 * 00000001409FB4D9: mov     [rbx+20h], r15
 * 00000001409FB4DD: mov     rax, [rsi+590h]
 * 00000001409FB4E4: mov     [rax], rbx
 * 00000001409FB4E7: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FB4EE: mov     rax, [rsi+590h]
 * 00000001409FB4F5: mov     [rax+8], r14
 * 00000001409FB4F9: mov     dword ptr [rax+14h], 1000h
 * 00000001409FB500: cmp     [rsi+8F8h], r13d
 * 00000001409FB507: jnz     short loc_1409FB553
 * 00000001409FB509: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FB513: xor     edx, edx
 * 00000001409FB515: add     rax, rsi
 * 00000001409FB518: mov     rcx, rsi
 * 00000001409FB51B: mov     [rsi+900h], rax
 * 00000001409FB522: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FB52C: add     rax, rbx
 * 00000001409FB52F: mov     [rsi+908h], rax
 * 00000001409FB536: movsxd  rax, dword ptr [rbx]
 * 00000001409FB539: mov     [rsi+910h], rax
 * 00000001409FB540: mov     [rsi+918h], rdi
 * 00000001409FB547: mov     [rsi+8F8h], r9d
 * 00000001409FB54E: call    $$b8
 * 00000001409FB553: mov     rax, [rsi+310h]
 * 00000001409FB55A: lea     rdx, [rbp+0BE0h+var_968]
 * 00000001409FB561: mov     rcx, r15
 * 00000001409FB564: call    KeGuardDispatchICall
 * 00000001409FB569: mov     r14, rax
 * 00000001409FB56C: test    rax, rax
 * 00000001409FB56F: jnz     loc_1409FB45D
 * 00000001409FB575: mov     r13d, [rbp+0BE0h+var_BE0]
 * 00000001409FB579: mov     rdi, [rsp+0CE0h+var_C90]
 * 00000001409FB57E: mov     rax, [rsi+318h]
 * 00000001409FB585: add     r13d, r12d
 * 00000001409FB588: mov     rcx, r15
 * 00000001409FB58B: mov     [rbp+0BE0h+var_BE0], r13d
 * 00000001409FB58F: call    KeGuardDispatchICall
 * 00000001409FB594: mov     r15, rax
 * 00000001409FB597: xor     eax, eax
 * 00000001409FB599: test    r15, r15
 * 00000001409FB59C: jnz     loc_1409FB423
 * 00000001409FB5A2: jmp     loc_1409FD879
 * 00000001409FB5A7: mov     r13d, eax
 * 00000001409FB5AA: mov     rax, [rsi+4F0h]
 * 00000001409FB5B1: mov     rbx, rsi
 * 00000001409FB5B4: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409FB5BB: mov     r14, [rax]
 * 00000001409FB5BE: mov     [rbp+0BE0h+var_C08], r14
 * 00000001409FB5C2: test    [rsi+990h], r12d
 * 00000001409FB5C9: jz      short loc_1409FB5D2
 * 00000001409FB5CB: xor     eax, eax
 * 00000001409FB5CD: jmp     loc_1409FD885
 * 00000001409FB5D2: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FB5D7: mov     rax, [rcx+28h]
 * 00000001409FB5DB: test    rax, rax
 * 00000001409FB5DE: jz      loc_1409FB67F
 * 00000001409FB5E4: mov     edx, 1
 * 00000001409FB5E9: mov     r13d, edx
 * 00000001409FB5EC: cmp     r14, rax
 * 00000001409FB5EF: jz      loc_1409FD885
 * 00000001409FB5F5: mov     [rcx+18h], r14
 * 00000001409FB5F9: mov     rax, [rsi+590h]
 * 00000001409FB600: mov     [rax], rcx
 * 00000001409FB603: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FB60A: mov     rax, [rsi+590h]
 * 00000001409FB611: mov     [rax+8], r14
 * 00000001409FB615: mov     dword ptr [rax+14h], 1000h
 * 00000001409FB61C: xor     eax, eax
 * 00000001409FB61E: cmp     [rsi+8F8h], eax
 * 00000001409FB624: jnz     loc_1409FD885
 * 00000001409FB62A: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FB634: add     rax, rsi
 * 00000001409FB637: mov     [rsi+900h], rax
 * 00000001409FB63E: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FB648: add     rax, rcx
 * 00000001409FB64B: mov     [rsi+908h], rax
 * 00000001409FB652: movsxd  rax, dword ptr [rcx]
 * 00000001409FB655: mov     rcx, rsi
 * 00000001409FB658: mov     [rsi+910h], rax
 * 00000001409FB65F: mov     qword ptr [rsi+918h], 5
 * 00000001409FB66A: mov     [rsi+8F8h], edx
 * 00000001409FB670: xor     edx, edx
 * 00000001409FB672: call    $$b8
 * 00000001409FB677: mov     rdx, r13
 * 00000001409FB67A: jmp     loc_1409FD885
 * 00000001409FB67F: test    r14, r14
 * 00000001409FB682: jz      loc_1409FD880
 * 00000001409FB688: mov     rax, [rsi+200h]
 * 00000001409FB68F: lea     rdx, [rbp+0BE0h+var_228]
 * 00000001409FB696: mov     r15d, 1
 * 00000001409FB69C: mov     [rbp+0BE0h+var_B98], rsi
 * 00000001409FB6A0: mov     rcx, r14
 * 00000001409FB6A3: mov     [rbp+0BE0h+var_BE0], r15d
 * 00000001409FB6A7: call    KeGuardDispatchICall
 * 00000001409FB6AC: mov     r13, [rbp+0BE0h+var_220]
 * 00000001409FB6B3: mov     r12d, [rbp+0BE0h+var_214]
 * 00000001409FB6BA: mov     [rbp+0BE0h+var_C48], rax
 * 00000001409FB6BE: xor     eax, eax
 * 00000001409FB6C0: mov     dword ptr [rbp+0BE0h+arg_8], r12d
 * 00000001409FB6C7: mov     [rbp+0BE0h+var_BE4], r12d
 * 00000001409FB6CB: mov     [rsp+0CE0h+BugCheckParameter2], r13
 * 00000001409FB6D0: test    r13, r13
 * 00000001409FB6D3: jnz     short loc_1409FB6DF
 * 00000001409FB6D5: mov     ecx, 0C000007Bh
 * 00000001409FB6DA: jmp     loc_1409FD3EB
 * 00000001409FB6DF: mov     [rbp+0BE0h+var_AD8], rax
 * 00000001409FB6E6: mov     ecx, 4
 * 00000001409FB6EB: lea     rax, [rbp+0BE0h+var_AD0]
 * 00000001409FB6F2: xor     edx, edx
 * 00000001409FB6F4: mov     r8d, 0FFFFFFFFh
 * 00000001409FB6FA: mov     [rax], dl
 * 00000001409FB6FC: add     rax, r15
 * 00000001409FB6FF: add     ecx, r8d
 * 00000001409FB702: jnz     short loc_1409FB6FA
 * 00000001409FB704: xor     eax, eax
 * 00000001409FB706: mov     r15d, eax
 * 00000001409FB709: cmp     [rsi+80Ch], eax
 * 00000001409FB70F: jbe     loc_1409FB90E
 * 00000001409FB715: mov     edx, [rbp+0BE0h+var_AD0]
 * 00000001409FB71B: mov     r9d, dword ptr [rbp+0BE0h+var_AD8+4]
 * 00000001409FB722: mov     r10d, dword ptr [rbp+0BE0h+var_AD8]
 * 00000001409FB729: mov     rax, [rsi+0A78h]
 * 00000001409FB730: mov     r14, rsi
 * 00000001409FB733: test    rax, rax
 * 00000001409FB736: cmovnz  r14, rax
 * 00000001409FB73A: xor     eax, eax
 * 00000001409FB73C: mov     [rsp+0CE0h+var_C88], r14
 * 00000001409FB741: mov     r11d, eax
 * 00000001409FB744: mov     r8d, [r14+808h]
 * 00000001409FB74B: add     r8, r14
 * 00000001409FB74E: test    r10d, r10d
 * 00000001409FB751: jz      short loc_1409FB761
 * 00000001409FB753: cmp     r9d, r15d
 * 00000001409FB756: ja      short loc_1409FB761
 * 00000001409FB758: mov     r8d, edx
 * 00000001409FB75B: mov     r11d, r9d
 * 00000001409FB75E: add     r8, r14
 * 00000001409FB761: cmp     r11d, r15d
 * 00000001409FB764: jz      loc_1409FB89E
 * 00000001409FB76A: mov     edi, 2
 * 00000001409FB76F: mov     eax, r15d
 * 00000001409FB772: sub     eax, r11d
 * 00000001409FB775: mov     r14, 0AAAAAAAAAAAAAAABh
 * 00000001409FB77F: mov     r9d, eax
 * 00000001409FB782: add     r11d, eax
 * 00000001409FB785: lea     r12d, [rdi+0Ah]
 * 00000001409FB789: mov     ecx, [r8]
 * 00000001409FB78C: cmp     ecx, r12d
 * 00000001409FB78F: jg      short loc_1409FB7D4
 * 00000001409FB791: jz      short loc_1409FB7F1
 * 00000001409FB793: sub     ecx, 1
 * 00000001409FB796: jz      short loc_1409FB7F1
 * 00000001409FB798: sub     ecx, 6
 * 00000001409FB79B: jz      short loc_1409FB7C3
 * 00000001409FB79D: sub     ecx, 1
 * 00000001409FB7A0: jz      short loc_1409FB7B9
 * 00000001409FB7A2: cmp     ecx, edi
 * 00000001409FB7A4: jnz     loc_1409FB830
 * 00000001409FB7AA: mov     eax, [r8+1Ch]
 * 00000001409FB7AE: add     eax, 3
 * 00000001409FB7B1: shl     eax, 4
 * 00000001409FB7B4: jmp     loc_1409FB86E
 * 00000001409FB7B9: movzx   eax, word ptr [r8+20h]
 * 00000001409FB7BE: jmp     loc_1409FB868
 * 00000001409FB7C3: mov     eax, [r8+18h]
 * 00000001409FB7C7: add     eax, edi
 * 00000001409FB7C9: lea     eax, [rax+rax*2]
 * 00000001409FB7CC: shl     eax, 3
 * 00000001409FB7CF: jmp     loc_1409FB86E
 * 00000001409FB7D4: cmp     ecx, 1Ch
 * 00000001409FB7D7: jz      loc_1409FB863
 * 00000001409FB7DD: cmp     ecx, 1Eh
 * 00000001409FB7E0: jz      short loc_1409FB837
 * 00000001409FB7E2: cmp     ecx, 20h ; ' '
 * 00000001409FB7E5: jle     short loc_1409FB830
 * 00000001409FB7E7: cmp     ecx, 22h ; '"'
 * 00000001409FB7EA: jle     short loc_1409FB808
 * 00000001409FB7EC: cmp     ecx, 2Bh ; '+'
 * 00000001409FB7EF: jnz     short loc_1409FB830
 * 00000001409FB7F1: mov     ecx, [r8+10h]
 * 00000001409FB7F5: mov     rax, r14
 * 00000001409FB7F8: mul     rcx
 * 00000001409FB7FB: shr     rdx, 3
 * 00000001409FB7FF: lea     eax, ds:30h[rdx*4]
 * 00000001409FB806: jmp     short loc_1409FB86E
 * 00000001409FB808: mov     ecx, [r8+20h]
 * 00000001409FB80C: mov     edx, [r8+28h]
 * 00000001409FB810: and     ecx, 0FFFh
 * 00000001409FB816: add     rdx, 0FFFh
 * 00000001409FB81D: add     rdx, rcx
 * 00000001409FB820: shr     rdx, 0Ch
 * 00000001409FB824: lea     eax, [rdx+rdx*4]
 * 00000001409FB827: lea     eax, ds:30h[rax*4]
 * 00000001409FB82E: jmp     short loc_1409FB86E
 * 00000001409FB830: mov     eax, 30h ; '0'
 * 00000001409FB835: jmp     short loc_1409FB86E
 * 00000001409FB837: mov     eax, [r8+24h]
 * 00000001409FB83B: lea     ecx, [rax-1]
 * 00000001409FB83E: neg     eax
 * 00000001409FB840: sbb     eax, eax
 * 00000001409FB842: and     ecx, eax
 * 00000001409FB844: mov     rax, r14
 * 00000001409FB847: mul     rcx
 * 00000001409FB84A: movzx   eax, word ptr [r8+28h]
 * 00000001409FB84F: shr     rdx, 3
 * 00000001409FB853: add     edx, 7
 * 00000001409FB856: and     edx, 0FFFFFFF8h
 * 00000001409FB859: add     eax, edi
 * 00000001409FB85B: lea     eax, [rax+rax*2]
 * 00000001409FB85E: lea     eax, [rdx+rax*8]
 * 00000001409FB861: jmp     short loc_1409FB86E
 * 00000001409FB863: movzx   eax, word ptr [r8+28h]
 * 00000001409FB868: add     eax, 37h ; '7'
 * 00000001409FB86B: and     eax, 0FFFFFFF8h
 * 00000001409FB86E: add     r8, rax
 * 00000001409FB871: mov     eax, 1
 * 00000001409FB876: sub     r9, rax
 * 00000001409FB879: jnz     loc_1409FB789
 * 00000001409FB87F: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FB884: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FB88B: mov     r14, [rsp+0CE0h+var_C88]
 * 00000001409FB890: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FB897: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FB89C: jmp     short loc_1409FB8A3
 * 00000001409FB89E: mov     eax, 1
 * 00000001409FB8A3: mov     edx, r8d
 * 00000001409FB8A6: mov     dword ptr [rbp+0BE0h+var_AD8], eax
 * 00000001409FB8AC: sub     edx, r14d
 * 00000001409FB8AF: mov     dword ptr [rbp+0BE0h+var_AD8+4], r11d
 * 00000001409FB8B6: mov     [rbp+0BE0h+var_AD0], edx
 * 00000001409FB8BC: mov     r10d, eax
 * 00000001409FB8BF: movsxd  rcx, dword ptr [r8]
 * 00000001409FB8C2: mov     r9d, r11d
 * 00000001409FB8C5: cmp     ecx, 2Bh ; '+'
 * 00000001409FB8C8: ja      short loc_1409FB8EA
 * 00000001409FB8CA: mov     r11, 80000001002h
 * 00000001409FB8D4: bt      r11, rcx
 * 00000001409FB8D8: jnb     short loc_1409FB8EA
 * 00000001409FB8DA: mov     rax, [rbp+0BE0h+var_C48]
 * 00000001409FB8DE: cmp     [r8+8], rax
 * 00000001409FB8E2: jnz     short loc_1409FB8EA
 * 00000001409FB8E4: cmp     [r8+10h], r12d
 * 00000001409FB8E8: jz      short loc_1409FB911
 * 00000001409FB8EA: lea     eax, [rcx-21h]
 * 00000001409FB8ED: mov     ecx, 1
 * 00000001409FB8F2: cmp     eax, ecx
 * 00000001409FB8F4: ja      short loc_1409FB8FC
 * 00000001409FB8F6: cmp     [r8+20h], r13
 * 00000001409FB8FA: jz      short loc_1409FB911
 * 00000001409FB8FC: add     r15d, ecx
 * 00000001409FB8FF: cmp     r15d, [rsi+80Ch]
 * 00000001409FB906: jb      loc_1409FB729
 * 00000001409FB90C: xor     eax, eax
 * 00000001409FB90E: mov     r8, rax
 * 00000001409FB911: mov     r14, [rbp+0BE0h+var_C08]
 * 00000001409FB915: mov     [rbp+0BE0h+var_B38], r8
 * 00000001409FB91C: test    r8, r8
 * 00000001409FB91F: jz      short loc_1409FB92B
 * 00000001409FB921: mov     ecx, 0C000010Eh
 * 00000001409FB926: jmp     loc_1409FD3EB
 * 00000001409FB92B: mov     rax, [rsi+2A8h]
 * 00000001409FB932: mov     rcx, r14
 * 00000001409FB935: call    KeGuardDispatchICall
 * 00000001409FB93A: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FB944: mov     r15d, eax
 * 00000001409FB947: mov     dword ptr [rbp+0BE0h+var_BF8], eax
 * 00000001409FB94A: mov     eax, [rbp+0BE0h+var_BE4]
 * 00000001409FB94D: mov     [rbp+0BE0h+var_C58], eax
 * 00000001409FB950: jz      short loc_1409FB973
 * 00000001409FB952: mov     r8d, 9
 * 00000001409FB958: lea     rcx, [rbp+0BE0h+var_B50]
 * 00000001409FB95F: mov     rdx, r13
 * 00000001409FB962: call    sub_140A1BFE4
 * 00000001409FB967: mov     rbx, [rbp+0BE0h+var_B50]
 * 00000001409FB96E: jmp     loc_1409FD3E9
 * 00000001409FB973: xor     eax, eax
 * 00000001409FB975: lea     r9, [rbp+0BE0h+var_BE4]
 * 00000001409FB979: xor     r8d, r8d
 * 00000001409FB97C: mov     [rbp+0BE0h+var_7B0], rax
 * 00000001409FB983: mov     [rbp+0BE0h+var_9B8], eax
 * 00000001409FB989: mov     rcx, r13
 * 00000001409FB98C: mov     rax, [rsi+1F0h]
 * 00000001409FB993: lea     r12d, [r8+1]
 * 00000001409FB997: mov     dl, r12b
 * 00000001409FB99A: call    KeGuardDispatchICall
 * 00000001409FB99F: mov     rdx, rax
 * 00000001409FB9A2: lea     r8d, [r12+0Bh]
 * 00000001409FB9A7: neg     rax
 * 00000001409FB9AA: mov     [rbp+0BE0h+var_7C8], rdx
 * 00000001409FB9B1: lea     r9, [rbp+0BE0h+var_BE4]
 * 00000001409FB9B5: mov     dl, r12b
 * 00000001409FB9B8: sbb     ecx, ecx
 * 00000001409FB9BA: and     ecx, [rbp+0BE0h+var_BE4]
 * 00000001409FB9BD: mov     [rbp+0BE0h+var_BE4], ecx
 * 00000001409FB9C0: mov     rax, [rsi+1F0h]
 * 00000001409FB9C7: mov     [rbp+0BE0h+var_9C4], ecx
 * 00000001409FB9CD: mov     rcx, r13
 * 00000001409FB9D0: call    KeGuardDispatchICall
 * 00000001409FB9D5: mov     rdx, rax
 * 00000001409FB9D8: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409FB9DC: neg     rax
 * 00000001409FB9DF: mov     [rbp+0BE0h+var_7C0], rdx
 * 00000001409FB9E6: lea     r8d, [r12+9]
 * 00000001409FB9EB: mov     dl, r12b
 * 00000001409FB9EE: sbb     ecx, ecx
 * 00000001409FB9F0: lea     r9, [rbp+0BE0h+var_BE4]
 * 00000001409FB9F4: and     ecx, [rbp+0BE0h+var_BE4]
 * 00000001409FB9F7: mov     [rbp+0BE0h+var_BE4], ecx
 * 00000001409FB9FA: mov     rax, [rsi+1F0h]
 * 00000001409FBA01: mov     [rsp+0CE0h+var_C78], ecx
 * 00000001409FBA05: mov     [rbp+0BE0h+var_9C0], ecx
 * 00000001409FBA0B: mov     rcx, r13
 * 00000001409FBA0E: call    KeGuardDispatchICall
 * 00000001409FBA13: mov     rdx, rax
 * 00000001409FBA16: neg     rax
 * 00000001409FBA19: mov     [rbp+0BE0h+var_7B8], rdx
 * 00000001409FBA20: sbb     ecx, ecx
 * 00000001409FBA22: and     ecx, [rbp+0BE0h+var_BE4]
 * 00000001409FBA25: mov     [rbp+0BE0h+var_BE4], ecx
 * 00000001409FBA28: mov     rax, [rsi+1F8h]
 * 00000001409FBA2F: mov     [rbp+0BE0h+var_9BC], ecx
 * 00000001409FBA35: mov     rcx, r13
 * 00000001409FBA38: call    KeGuardDispatchICall
 * 00000001409FBA3D: mov     r14, rax
 * 00000001409FBA40: test    rax, rax
 * 00000001409FBA43: jnz     short loc_1409FBA53
 * 00000001409FBA45: mov     ecx, 0C000007Bh
 * 00000001409FBA4A: mov     r14, [rbp+0BE0h+var_C08]
 * 00000001409FBA4E: jmp     loc_1409FD3EB
 * 00000001409FBA53: mov     rax, [rsi+498h]
 * 00000001409FBA5A: lea     rdx, [rbp+0BE0h+var_888]
 * 00000001409FBA61: mov     rcx, r13
 * 00000001409FBA64: call    KeGuardDispatchICall
 * 00000001409FBA69: mov     r8d, [rsi+924h]
 * 00000001409FBA70: mov     [rbp+0BE0h+var_7A8], rax
 * 00000001409FBA77: mov     eax, [rbp+0BE0h+var_888]
 * 00000001409FBA7D: mov     [rbp+0BE0h+var_9B4], eax
 * 00000001409FBA83: mov     eax, [r14+54h]
 * 00000001409FBA87: mov     [rbp+0BE0h+var_9C8], eax
 * 00000001409FBA8D: mov     eax, r15d
 * 00000001409FBA90: mov     r15d, [rsi+7E4h]
 * 00000001409FBA97: neg     eax
 * 00000001409FBA99: mov     [rbp+0BE0h+var_7D0], r13
 * 00000001409FBAA0: sbb     r9d, r9d
 * 00000001409FBAA3: and     r9d, 0Bh
 * 00000001409FBAA7: lea     eax, [r15+120h]
 * 00000001409FBAAE: mov     dword ptr [rbp+0BE0h+arg_8], r9d
 * 00000001409FBAB5: cmp     eax, [rsi+0A1Ch]
 * 00000001409FBABB: jbe     loc_1409FBBC8
 * 00000001409FBAC1: mov     edx, eax
 * 00000001409FBAC3: mov     rcx, rsi
 * 00000001409FBAC6: call    sub_140A0EB30
 * 00000001409FBACB: mov     r14, rax
 * 00000001409FBACE: mov     [rsp+0CE0h+var_C88], rax
 * 00000001409FBAD3: xor     eax, eax
 * 00000001409FBAD5: test    r14, r14
 * 00000001409FBAD8: jz      loc_1409FBBBA
 * 00000001409FBADE: mov     ecx, [rsi+990h]
 * 00000001409FBAE4: test    cl, 4
 * 00000001409FBAE7: jnz     loc_1409FBBA9
 * 00000001409FBAED: mov     eax, [rsi+7E4h]
 * 00000001409FBAF3: and     ecx, 20000000h
 * 00000001409FBAF9: mov     r9, [rsi+7C8h]
 * 00000001409FBB00: neg     ecx
 * 00000001409FBB02: mov     rcx, rsi
 * 00000001409FBB05: sbb     r8d, r8d
 * 00000001409FBB08: and     r8d, [rsi+924h]
 * 00000001409FBB0F: cmp     eax, 8
 * 00000001409FBB12: jb      short loc_1409FBB35
 * 00000001409FBB14: mov     edx, eax
 * 00000001409FBB16: shr     rdx, 3
 * 00000001409FBB1A: xor     r12d, r12d
 * 00000001409FBB1D: lea     r10d, [r12+1]
 * 00000001409FBB22: mov     [rcx], r12
 * 00000001409FBB25: add     eax, 0FFFFFFF8h
 * 00000001409FBB28: add     rcx, 8
 * 00000001409FBB2C: sub     rdx, r10
 * 00000001409FBB2F: jnz     short loc_1409FBB22
 * 00000001409FBB31: lea     r12d, [rdx+1]
 * 00000001409FBB35: xor     edx, edx
 * 00000001409FBB37: test    eax, eax
 * 00000001409FBB39: jz      short loc_1409FBB4B
 * 00000001409FBB3B: mov     r10d, 0FFFFFFFFh
 * 00000001409FBB41: mov     [rcx], dl
 * 00000001409FBB43: add     rcx, r12
 * 00000001409FBB46: add     eax, r10d
 * 00000001409FBB49: jnz     short loc_1409FBB41
 * 00000001409FBB4B: mov     ebx, [r14+924h]
 * 00000001409FBB52: mov     [r14+924h], r8d
 * 00000001409FBB59: cmp     r8d, 3
 * 00000001409FBB5D: jz      short loc_1409FBB93
 * 00000001409FBB5F: test    dword ptr [r14+990h], 10000000h
 * 00000001409FBB6A: mov     rcx, rdx
 * 00000001409FBB6D: cmovz   ecx, r8d
 * 00000001409FBB71: test    ecx, ecx
 * 00000001409FBB73: jz      short loc_1409FBB8A
 * 00000001409FBB75: mov     rax, [r14+228h]
 * 00000001409FBB7C: lea     rcx, [r9-8]
 * 00000001409FBB80: mov     rdx, [rcx]
 * 00000001409FBB83: call    KeGuardDispatchICall
 * 00000001409FBB88: jmp     short loc_1409FBBA2
 * 00000001409FBB8A: mov     rax, [r14+100h]
 * 00000001409FBB91: jmp     short loc_1409FBB9A
 * 00000001409FBB93: mov     rax, [r14+368h]
 * 00000001409FBB9A: mov     rcx, r9
 * 00000001409FBB9D: call    KeGuardDispatchICall
 * 00000001409FBBA2: mov     [r14+924h], ebx
 * 00000001409FBBA9: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 00000001409FBBB1: mov     r9d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FBBB8: jmp     short loc_1409FBBD6
 * 00000001409FBBBA: mov     [rbp+0BE0h+var_B98], rax
 * 00000001409FBBBE: mov     ecx, 0C000009Ah
 * 00000001409FBBC3: jmp     loc_1409FBA4A
 * 00000001409FBBC8: mov     r14, rsi
 * 00000001409FBBCB: mov     [rsp+0CE0h+var_C88], rsi
 * 00000001409FBBD0: mov     [rsi+7E4h], eax
 * 00000001409FBBD6: mov     eax, 6
 * 00000001409FBBDB: lea     r12, [r14+r15]
 * 00000001409FBBDF: add     [r14+80Ch], eax
 * 00000001409FBBE6: lea     rdi, [rbp+0BE0h+var_7D0]
 * 00000001409FBBED: mov     [rbp+0BE0h+var_958], r12
 * 00000001409FBBF4: lea     rsi, [rbp+0BE0h+var_9C8]
 * 00000001409FBBFB: mov     [rbp+0BE0h+var_B38], r12
 * 00000001409FBC02: xor     r10d, r10d
 * 00000001409FBC05: lea     r11d, [rax-5]
 * 00000001409FBC09: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409FBC0D: mov     r13d, [rsi]
 * 00000001409FBC10: mov     rdx, rax
 * 00000001409FBC13: mov     r15, [rdi]
 * 00000001409FBC16: mov     ecx, 30h ; '0'
 * 00000001409FBC1B: mov     [rbp+0BE0h+var_BF0], r13d
 * 00000001409FBC1F: mov     rax, r12
 * 00000001409FBC22: mov     [rax], r10
 * 00000001409FBC25: add     ecx, 0FFFFFFF8h
 * 00000001409FBC28: add     rax, 8
 * 00000001409FBC2C: sub     rdx, r11
 * 00000001409FBC2F: jnz     short loc_1409FBC22
 * 00000001409FBC31: test    ecx, ecx
 * 00000001409FBC33: jz      short loc_1409FBC44
 * 00000001409FBC35: mov     edx, 0FFFFFFFFh
 * 00000001409FBC3A: mov     [rax], r10b
 * 00000001409FBC3D: add     rax, r11
 * 00000001409FBC40: add     ecx, edx
 * 00000001409FBC42: jnz     short loc_1409FBC3A
 * 00000001409FBC44: mov     [r12], r9d
 * 00000001409FBC48: lea     rcx, [r15+r13]
 * 00000001409FBC4C: mov     [r12+8], r15
 * 00000001409FBC51: mov     r10, r15
 * 00000001409FBC54: mov     [r12+10h], r13d
 * 00000001409FBC59: mov     rax, r15
 * 00000001409FBC5C: add     [r14+828h], r13d
 * 00000001409FBC63: mov     ebx, [r14+814h]
 * 00000001409FBC6A: mov     r11, [r14+818h]
 * 00000001409FBC71: cmp     r15, rcx
 * 00000001409FBC74: jnb     short loc_1409FBC86
 * 00000001409FBC76: mov     edx, 40h ; '@'
 * 00000001409FBC7B: prefetchnta byte ptr [rax]
 * 00000001409FBC7E: add     rax, rdx
 * 00000001409FBC81: cmp     rax, rcx
 * 00000001409FBC84: jb      short loc_1409FBC7B
 * 00000001409FBC86: mov     r9d, r13d
 * 00000001409FBC89: mov     r8, r11
 * 00000001409FBC8C: shr     r9d, 7
 * 00000001409FBC90: test    r9d, r9d
 * 00000001409FBC93: jz      short loc_1409FBD06
 * 00000001409FBC95: mov     r13, 7010008004002001h
 * 00000001409FBC9F: mov     edx, 8
 * 00000001409FBCA4: lea     r14d, [rdx-7]
 * 00000001409FBCA8: mov     rax, [r10]
 * 00000001409FBCAB: mov     ecx, ebx
 * 00000001409FBCAD: xor     rax, r8
 * 00000001409FBCB0: mov     r8, [r10+8]
 * 00000001409FBCB4: rol     rax, cl
 * 00000001409FBCB7: add     r10, 10h
 * 00000001409FBCBB: xor     r8, rax
 * 00000001409FBCBE: rol     r8, cl
 * 00000001409FBCC1: sub     rdx, r14
 * 00000001409FBCC4: jnz     short loc_1409FBCA8
 * 00000001409FBCC6: mov     rcx, r10
 * 00000001409FBCC9: sub     rcx, r15
 * 00000001409FBCCC: xor     rcx, r11
 * 00000001409FBCCF: mov     rax, rcx
 * 00000001409FBCD2: rol     rax, 11h
 * 00000001409FBCD6: xor     rcx, rax
 * 00000001409FBCD9: mov     rax, r13
 * 00000001409FBCDC: mul     rcx
 * 00000001409FBCDF: xor     ebx, edx
 * 00000001409FBCE1: mov     [rbp+0BE0h+var_1C8], rdx
 * 00000001409FBCE8: xor     ebx, eax
 * 00000001409FBCEA: mov     rax, r14
 * 00000001409FBCED: and     ebx, 3Fh
 * 00000001409FBCF0: cmovz   ebx, eax
 * 00000001409FBCF3: mov     eax, 0FFFFFFFFh
 * 00000001409FBCF8: add     r9d, eax
 * 00000001409FBCFB: jnz     short loc_1409FBC9F
 * 00000001409FBCFD: mov     r14, [rsp+0CE0h+var_C88]
 * 00000001409FBD02: mov     r13d, [rbp+0BE0h+var_BF0]
 * 00000001409FBD06: mov     edx, r13d
 * 00000001409FBD09: mov     r11d, 1
 * 00000001409FBD0F: and     edx, 7Fh
 * 00000001409FBD12: cmp     edx, 8
 * 00000001409FBD15: jb      short loc_1409FBD32
 * 00000001409FBD17: mov     r9d, edx
 * 00000001409FBD1A: shr     r9, 3
 * 00000001409FBD1E: xor     r8, [r10]
 * 00000001409FBD21: mov     ecx, ebx
 * 00000001409FBD23: rol     r8, cl
 * 00000001409FBD26: add     r10, 8
 * 00000001409FBD2A: add     edx, 0FFFFFFF8h
 * 00000001409FBD2D: sub     r9, r11
 * 00000001409FBD30: jnz     short loc_1409FBD1E
 * 00000001409FBD32: test    edx, edx
 * 00000001409FBD34: jz      short loc_1409FBD55
 * 00000001409FBD36: mov     r14d, 0FFFFFFFFh
 * 00000001409FBD3C: movzx   eax, byte ptr [r10]
 * 00000001409FBD40: mov     ecx, ebx
 * 00000001409FBD42: xor     r8, rax
 * 00000001409FBD45: add     r10, r11
 * 00000001409FBD48: rol     r8, cl
 * 00000001409FBD4B: add     edx, r14d
 * 00000001409FBD4E: jnz     short loc_1409FBD3C
 * 00000001409FBD50: mov     r14, [rsp+0CE0h+var_C88]
 * 00000001409FBD55: mov     rax, r8
 * 00000001409FBD58: shr     rax, 1Fh
 * 00000001409FBD5C: xor     r10d, r10d
 * 00000001409FBD5F: jmp     short loc_1409FBD68
 * 00000001409FBD61: xor     r8d, eax
 * 00000001409FBD64: shr     rax, 1Fh
 * 00000001409FBD68: test    rax, rax
 * 00000001409FBD6B: jnz     short loc_1409FBD61
 * 00000001409FBD6D: mov     r9d, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FBD74: btr     r8d, 1Fh
 * 00000001409FBD79: mov     [r12+14h], r8d
 * 00000001409FBD7E: add     rdi, 8
 * 00000001409FBD82: add     [r14+828h], r13d
 * 00000001409FBD89: lea     r13d, [rax+4]
 * 00000001409FBD8D: mov     r12, [rbp+0BE0h+var_958]
 * 00000001409FBD94: lea     eax, [r13+2]
 * 00000001409FBD98: add     r12, 30h ; '0'
 * 00000001409FBD9C: add     rsi, r13
 * 00000001409FBD9F: sub     [rbp+0BE0h+var_C60], r11
 * 00000001409FBDA3: mov     [rbp+0BE0h+var_958], r12
 * 00000001409FBDAA: jnz     loc_1409FBC0D
 * 00000001409FBDB0: mov     rbx, [rbp+0BE0h+var_B38]
 * 00000001409FBDB7: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FBDBE: mov     r12, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FBDC3: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FBDC8: mov     r15d, dword ptr [rbp+0BE0h+var_BF8]
 * 00000001409FBDCC: mov     dword ptr [rbx], 2Ch ; ','
 * 00000001409FBDD2: mov     [rbx+18h], r12
 * 00000001409FBDD6: test    dword ptr [r14+990h], 10200000h
 * 00000001409FBDE1: jnz     short loc_1409FBE0C
 * 00000001409FBDE3: test    r15d, r15d
 * 00000001409FBDE6: jnz     short loc_1409FBE11
 * 00000001409FBDE8: test    dword ptr [r14+994h], 8000h
 * 00000001409FBDF3: jz      short loc_1409FBE19
 * 00000001409FBDF5: or      [rbx+20h], r11d
 * 00000001409FBDF9: mov     rdx, r12
 * 00000001409FBDFC: mov     rcx, r14
 * 00000001409FBDFF: call    sub_140A0FC50
 * 00000001409FBE04: test    eax, eax
 * 00000001409FBE06: jz      short loc_1409FBE19
 * 00000001409FBE08: or      [rbx+20h], r13d
 * 00000001409FBE0C: test    r15d, r15d
 * 00000001409FBE0F: jz      short loc_1409FBE19
 * 00000001409FBE11: mov     eax, 2
 * 00000001409FBE16: or      [rbx+20h], eax
 * 00000001409FBE19: mov     r8d, [rbp+0BE0h+var_C58]
 * 00000001409FBE1D: lea     rax, [rbp+0BE0h+var_A28]
 * 00000001409FBE24: mov     rdx, [rbp+0BE0h+var_C48]
 * 00000001409FBE28: lea     rcx, [rbp+0BE0h+var_B98]
 * 00000001409FBE2C: mov     [rsp+0CE0h+var_CA8], rax
 * 00000001409FBE31: mov     rbx, r14
 * 00000001409FBE34: lea     rax, [rbp+0BE0h+var_B24]
 * 00000001409FBE3B: mov     [rbp+0BE0h+var_B98], r14
 * 00000001409FBE3F: mov     [rsp+0CE0h+var_CB0], rax
 * 00000001409FBE44: mov     r9, r12
 * 00000001409FBE47: mov     dword ptr [rsp+0CE0h+var_CB8], 9
 * 00000001409FBE4F: mov     dword ptr [rsp+0CE0h+BugCheckParameter4], r15d
 * 00000001409FBE54: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409FBE5B: call    sub_140A0E098
 * 00000001409FBE60: mov     ecx, eax
 * 00000001409FBE62: test    eax, eax
 * 00000001409FBE64: js      loc_1409FBA4A
 * 00000001409FBE6A: mov     rbx, [rbp+0BE0h+var_B98]
 * 00000001409FBE6E: mov     rcx, [rbp+0BE0h+var_B38]
 * 00000001409FBE75: mov     rax, rbx
 * 00000001409FBE78: mov     r9d, [rbp+0BE0h+var_A28]
 * 00000001409FBE7F: sub     rax, r14
 * 00000001409FBE82: mov     r15d, [rbp+0BE0h+var_B24]
 * 00000001409FBE89: add     rcx, rax
 * 00000001409FBE8C: sub     r9d, [rbp+0BE0h+var_B24]
 * 00000001409FBE93: add     r15, r12
 * 00000001409FBE96: mov     [rbp+0BE0h+var_B38], rcx
 * 00000001409FBE9D: xor     r8d, r8d
 * 00000001409FBEA0: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409FBEA7: lea     r13, [rcx+0C0h]
 * 00000001409FBEAE: mov     ecx, 30h ; '0'
 * 00000001409FBEB3: mov     [rsp+0CE0h+var_C88], r13
 * 00000001409FBEB8: mov     rax, r13
 * 00000001409FBEBB: lea     edx, [rcx-2Ah]
 * 00000001409FBEBE: lea     r10d, [rcx-2Fh]
 * 00000001409FBEC2: mov     [rax], r8
 * 00000001409FBEC5: add     ecx, 0FFFFFFF8h
 * 00000001409FBEC8: add     rax, 8
 * 00000001409FBECC: sub     rdx, r10
 * 00000001409FBECF: jnz     short loc_1409FBEC2
 * 00000001409FBED1: mov     rdx, r10
 * 00000001409FBED4: test    ecx, ecx
 * 00000001409FBED6: jz      short loc_1409FBEE9
 * 00000001409FBED8: mov     r10d, 0FFFFFFFFh
 * 00000001409FBEDE: mov     [rax], r8b
 * 00000001409FBEE1: add     rax, rdx
 * 00000001409FBEE4: add     ecx, r10d
 * 00000001409FBEE7: jnz     short loc_1409FBEDE
 * 00000001409FBEE9: mov     eax, dword ptr [rbp+0BE0h+arg_8]
 * 00000001409FBEEF: mov     r10, r15
 * 00000001409FBEF2: mov     [r13+0], eax
 * 00000001409FBEF6: mov     rax, r15
 * 00000001409FBEF9: mov     [r13+8], r15
 * 00000001409FBEFD: mov     [r13+10h], r9d
 * 00000001409FBF01: add     [rbx+828h], r9d
 * 00000001409FBF08: mov     r14d, [rbx+814h]
 * 00000001409FBF0F: mov     r12, [rbx+818h]
 * 00000001409FBF16: mov     ecx, r9d
 * 00000001409FBF19: add     rcx, r15
 * 00000001409FBF1C: cmp     r15, rcx
 * 00000001409FBF1F: jnb     short loc_1409FBF32
 * 00000001409FBF21: mov     r8d, 40h ; '@'
 * 00000001409FBF27: prefetchnta byte ptr [rax]
 * 00000001409FBF2A: add     rax, r8
 * 00000001409FBF2D: cmp     rax, rcx
 * 00000001409FBF30: jb      short loc_1409FBF27
 * 00000001409FBF32: mov     r11d, r9d
 * 00000001409FBF35: mov     r8, r12
 * 00000001409FBF38: shr     r11d, 7
 * 00000001409FBF3C: test    r11d, r11d
 * 00000001409FBF3F: jz      short loc_1409FBFB7
 * 00000001409FBF41: mov     edi, 0FFFFFFFFh
 * 00000001409FBF46: mov     r13, 7010008004002001h
 * 00000001409FBF50: mov     eax, 8
 * 00000001409FBF55: xor     r8, [r10]
 * 00000001409FBF58: mov     ecx, r14d
 * 00000001409FBF5B: rol     r8, cl
 * 00000001409FBF5E: xor     r8, [r10+8]
 * 00000001409FBF62: add     r10, 10h
 * 00000001409FBF66: rol     r8, cl
 * 00000001409FBF69: sub     rax, rdx
 * 00000001409FBF6C: jnz     short loc_1409FBF55
 * 00000001409FBF6E: mov     rcx, r10
 * 00000001409FBF71: sub     rcx, r15
 * 00000001409FBF74: xor     rcx, r12
 * 00000001409FBF77: mov     rax, rcx
 * 00000001409FBF7A: rol     rax, 11h
 * 00000001409FBF7E: xor     rcx, rax
 * 00000001409FBF81: mov     rax, r13
 * 00000001409FBF84: mul     rcx
 * 00000001409FBF87: xor     r14d, edx
 * 00000001409FBF8A: mov     [rbp+0BE0h+var_1C0], rdx
 * 00000001409FBF91: xor     r14d, eax
 * 00000001409FBF94: mov     edx, 1
 * 00000001409FBF99: and     r14d, 3Fh
 * 00000001409FBF9D: cmovz   r14d, edx
 * 00000001409FBFA1: add     r11d, edi
 * 00000001409FBFA4: jnz     short loc_1409FBF50
 * 00000001409FBFA6: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FBFAB: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FBFB2: mov     r13, [rsp+0CE0h+var_C88]
 * 00000001409FBFB7: and     r9d, 7Fh
 * 00000001409FBFBB: cmp     r9d, 8
 * 00000001409FBFBF: jb      short loc_1409FBFDE
 * 00000001409FBFC1: mov     eax, r9d
 * 00000001409FBFC4: shr     rax, 3
 * 00000001409FBFC8: xor     r8, [r10]
 * 00000001409FBFCB: mov     ecx, r14d
 * 00000001409FBFCE: rol     r8, cl
 * 00000001409FBFD1: add     r10, 8
 * 00000001409FBFD5: add     r9d, 0FFFFFFF8h
 * 00000001409FBFD9: sub     rax, rdx
 * 00000001409FBFDC: jnz     short loc_1409FBFC8
 * 00000001409FBFDE: test    r9d, r9d
 * 00000001409FBFE1: jz      short loc_1409FC002
 * 00000001409FBFE3: mov     esi, 0FFFFFFFFh
 * 00000001409FBFE8: movzx   eax, byte ptr [r10]
 * 00000001409FBFEC: mov     ecx, r14d
 * 00000001409FBFEF: xor     r8, rax
 * 00000001409FBFF2: add     r10, rdx
 * 00000001409FBFF5: rol     r8, cl
 * 00000001409FBFF8: add     r9d, esi
 * 00000001409FBFFB: jnz     short loc_1409FBFE8
 * 00000001409FBFFD: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FC002: mov     rax, r8
 * 00000001409FC005: shr     rax, 1Fh
 * 00000001409FC009: xor     ecx, ecx
 * 00000001409FC00B: jmp     short loc_1409FC014
 * 00000001409FC00D: xor     r8d, eax
 * 00000001409FC010: shr     rax, 1Fh
 * 00000001409FC014: test    rax, rax
 * 00000001409FC017: jnz     short loc_1409FC00D
 * 00000001409FC019: mov     r15d, dword ptr [rbp+0BE0h+var_BF8]
 * 00000001409FC01D: btr     r8d, 1Fh
 * 00000001409FC022: mov     [r13+14h], r8d
 * 00000001409FC026: mov     rdx, [rbp+0BE0h+var_B38]
 * 00000001409FC02D: mov     dword ptr [rdx+0F0h], 30h ; '0'
 * 00000001409FC037: cmp     [rdx+100h], eax
 * 00000001409FC03D: jz      short loc_1409FC056
 * 00000001409FC03F: mov     eax, [rdx+108h]
 * 00000001409FC045: test    r15d, r15d
 * 00000001409FC048: setnz   cl
 * 00000001409FC04B: and     eax, 0FFFFFFFEh
 * 00000001409FC04E: or      ecx, eax
 * 00000001409FC050: mov     [rdx+108h], ecx
 * 00000001409FC056: mov     rcx, [rbp+0BE0h+var_B38]
 * 00000001409FC05D: mov     eax, r15d
 * 00000001409FC060: add     rcx, 60h ; '`'
 * 00000001409FC064: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409FC06B: neg     eax
 * 00000001409FC06D: mov     [rbp+0BE0h+var_AB0], rcx
 * 00000001409FC074: sbb     r12d, r12d
 * 00000001409FC077: neg     r12d
 * 00000001409FC07A: add     r12d, 0Dh
 * 00000001409FC07E: test    rcx, rcx
 * 00000001409FC081: jnz     loc_1409FC328
 * 00000001409FC087: mov     r15d, [rbx+7E4h]
 * 00000001409FC08E: mov     r8d, [rbx+924h]
 * 00000001409FC095: lea     eax, [r15+30h]
 * 00000001409FC099: cmp     eax, [rbx+0A1Ch]
 * 00000001409FC09F: jbe     loc_1409FC185
 * 00000001409FC0A5: mov     edx, eax
 * 00000001409FC0A7: mov     rcx, rbx
 * 00000001409FC0AA: call    sub_140A0EB30
 * 00000001409FC0AF: mov     r14, rax
 * 00000001409FC0B2: xor     eax, eax
 * 00000001409FC0B4: test    r14, r14
 * 00000001409FC0B7: jz      loc_1409FBBBA
 * 00000001409FC0BD: mov     ecx, [rbx+990h]
 * 00000001409FC0C3: test    cl, 4
 * 00000001409FC0C6: jnz     loc_1409FC17B
 * 00000001409FC0CC: mov     eax, [rbx+7E4h]
 * 00000001409FC0D2: and     ecx, 20000000h
 * 00000001409FC0D8: mov     r8, [rbx+7C8h]
 * 00000001409FC0DF: neg     ecx
 * 00000001409FC0E1: mov     r10d, 1
 * 00000001409FC0E7: sbb     edx, edx
 * 00000001409FC0E9: and     edx, [rbx+924h]
 * 00000001409FC0EF: cmp     eax, 8
 * 00000001409FC0F2: jb      short loc_1409FC10C
 * 00000001409FC0F4: mov     ecx, eax
 * 00000001409FC0F6: shr     rcx, 3
 * 00000001409FC0FA: xor     r9d, r9d
 * 00000001409FC0FD: mov     [rbx], r9
 * 00000001409FC100: add     eax, 0FFFFFFF8h
 * 00000001409FC103: add     rbx, 8
 * 00000001409FC107: sub     rcx, r10
 * 00000001409FC10A: jnz     short loc_1409FC0FD
 * 00000001409FC10C: xor     ecx, ecx
 * 00000001409FC10E: test    eax, eax
 * 00000001409FC110: jz      short loc_1409FC122
 * 00000001409FC112: mov     r9d, 0FFFFFFFFh
 * 00000001409FC118: mov     [rbx], cl
 * 00000001409FC11A: add     rbx, r10
 * 00000001409FC11D: add     eax, r9d
 * 00000001409FC120: jnz     short loc_1409FC118
 * 00000001409FC122: mov     ebx, [r14+924h]
 * 00000001409FC129: mov     [r14+924h], edx
 * 00000001409FC130: cmp     edx, 3
 * 00000001409FC133: jz      short loc_1409FC165
 * 00000001409FC135: test    dword ptr [r14+990h], 10000000h
 * 00000001409FC140: cmovz   ecx, edx
 * 00000001409FC143: test    ecx, ecx
 * 00000001409FC145: jz      short loc_1409FC15C
 * 00000001409FC147: mov     rax, [r14+228h]
 * 00000001409FC14E: lea     rcx, [r8-8]
 * 00000001409FC152: mov     rdx, [rcx]
 * 00000001409FC155: call    KeGuardDispatchICall
 * 00000001409FC15A: jmp     short loc_1409FC174
 * 00000001409FC15C: mov     rax, [r14+100h]
 * 00000001409FC163: jmp     short loc_1409FC16C
 * 00000001409FC165: mov     rax, [r14+368h]
 * 00000001409FC16C: mov     rcx, r8
 * 00000001409FC16F: call    KeGuardDispatchICall
 * 00000001409FC174: mov     [r14+924h], ebx
 * 00000001409FC17B: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 00000001409FC183: jmp     short loc_1409FC18E
 * 00000001409FC185: mov     r14, rbx
 * 00000001409FC188: mov     [rbx+7E4h], eax
 * 00000001409FC18E: add     r15, r14
 * 00000001409FC191: mov     r9d, 1
 * 00000001409FC197: add     [r14+80Ch], r9d
 * 00000001409FC19E: mov     rax, r15
 * 00000001409FC1A1: mov     [rbp+0BE0h+var_880], r15
 * 00000001409FC1A8: xor     r8d, r8d
 * 00000001409FC1AB: lea     ecx, [r9+2Fh]
 * 00000001409FC1AF: lea     edx, [rcx-2Ah]
 * 00000001409FC1B2: mov     [rax], r8
 * 00000001409FC1B5: add     ecx, 0FFFFFFF8h
 * 00000001409FC1B8: add     rax, 8
 * 00000001409FC1BC: sub     rdx, r9
 * 00000001409FC1BF: jnz     short loc_1409FC1B2
 * 00000001409FC1C1: test    ecx, ecx
 * 00000001409FC1C3: jz      short loc_1409FC1D4
 * 00000001409FC1C5: mov     edx, 0FFFFFFFFh
 * 00000001409FC1CA: mov     [rax], r8b
 * 00000001409FC1CD: add     rax, r9
 * 00000001409FC1D0: add     ecx, edx
 * 00000001409FC1D2: jnz     short loc_1409FC1CA
 * 00000001409FC1D4: mov     r13, [rbp+0BE0h+var_C50]
 * 00000001409FC1D8: mov     [r15], r12d
 * 00000001409FC1DB: mov     r9, r13
 * 00000001409FC1DE: mov     r12d, [rsp+0CE0h+var_C78]
 * 00000001409FC1E3: mov     [r15+8], r13
 * 00000001409FC1E7: mov     [r15+10h], r12d
 * 00000001409FC1EB: add     [r14+828h], r12d
 * 00000001409FC1F2: mov     r11d, [r14+814h]
 * 00000001409FC1F9: lea     rcx, [r12+r13]
 * 00000001409FC1FD: mov     rbx, [r14+818h]
 * 00000001409FC204: cmp     r13, rcx
 * 00000001409FC207: jnb     short loc_1409FC21C
 * 00000001409FC209: mov     rax, r13
 * 00000001409FC20C: mov     edx, 40h ; '@'
 * 00000001409FC211: prefetchnta byte ptr [rax]
 * 00000001409FC214: add     rax, rdx
 * 00000001409FC217: cmp     rax, rcx
 * 00000001409FC21A: jb      short loc_1409FC211
 * 00000001409FC21C: mov     r10d, r12d
 * 00000001409FC21F: mov     r8, rbx
 * 00000001409FC222: shr     r10d, 7
 * 00000001409FC226: test    r10d, r10d
 * 00000001409FC229: jz      short loc_1409FC2A2
 * 00000001409FC22B: mov     esi, 1
 * 00000001409FC230: mov     rdi, 7010008004002001h
 * 00000001409FC23A: mov     r12d, 0FFFFFFFFh
 * 00000001409FC240: mov     eax, 8
 * 00000001409FC245: xor     r8, [r9]
 * 00000001409FC248: mov     ecx, r11d
 * 00000001409FC24B: rol     r8, cl
 * 00000001409FC24E: xor     r8, [r9+8]
 * 00000001409FC252: add     r9, 10h
 * 00000001409FC256: rol     r8, cl
 * 00000001409FC259: sub     rax, rsi
 * 00000001409FC25C: jnz     short loc_1409FC245
 * 00000001409FC25E: mov     rcx, r9
 * 00000001409FC261: sub     rcx, r13
 * 00000001409FC264: xor     rcx, rbx
 * 00000001409FC267: mov     rax, rcx
 * 00000001409FC26A: rol     rax, 11h
 * 00000001409FC26E: xor     rcx, rax
 * 00000001409FC271: mov     rax, rdi
 * 00000001409FC274: mul     rcx
 * 00000001409FC277: xor     r11d, edx
 * 00000001409FC27A: mov     [rbp+0BE0h+var_1B8], rdx
 * 00000001409FC281: xor     r11d, eax
 * 00000001409FC284: and     r11d, 3Fh
 * 00000001409FC288: cmovz   r11d, esi
 * 00000001409FC28C: add     r10d, r12d
 * 00000001409FC28F: jnz     short loc_1409FC240
 * 00000001409FC291: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FC296: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FC29D: mov     r12d, [rsp+0CE0h+var_C78]
 * 00000001409FC2A2: mov     edx, r12d
 * 00000001409FC2A5: mov     r10d, 1
 * 00000001409FC2AB: and     edx, 7Fh
 * 00000001409FC2AE: cmp     edx, 8
 * 00000001409FC2B1: jb      short loc_1409FC2CE
 * 00000001409FC2B3: mov     eax, edx
 * 00000001409FC2B5: shr     rax, 3
 * 00000001409FC2B9: xor     r8, [r9]
 * 00000001409FC2BC: mov     ecx, r11d
 * 00000001409FC2BF: rol     r8, cl
 * 00000001409FC2C2: add     r9, 8
 * 00000001409FC2C6: add     edx, 0FFFFFFF8h
 * 00000001409FC2C9: sub     rax, r10
 * 00000001409FC2CC: jnz     short loc_1409FC2B9
 * 00000001409FC2CE: test    edx, edx
 * 00000001409FC2D0: jz      short loc_1409FC2F0
 * 00000001409FC2D2: mov     esi, 0FFFFFFFFh
 * 00000001409FC2D7: movzx   eax, byte ptr [r9]
 * 00000001409FC2DB: mov     ecx, r11d
 * 00000001409FC2DE: xor     r8, rax
 * 00000001409FC2E1: add     r9, r10
 * 00000001409FC2E4: rol     r8, cl
 * 00000001409FC2E7: add     edx, esi
 * 00000001409FC2E9: jnz     short loc_1409FC2D7
 * 00000001409FC2EB: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FC2F0: mov     rax, r8
 * 00000001409FC2F3: jmp     short loc_1409FC2F8
 * 00000001409FC2F5: xor     r8d, eax
 * 00000001409FC2F8: shr     rax, 1Fh
 * 00000001409FC2FC: test    rax, rax
 * 00000001409FC2FF: jnz     short loc_1409FC2F5
 * 00000001409FC301: btr     r8d, 1Fh
 * 00000001409FC306: mov     rbx, r14
 * 00000001409FC309: mov     [r15+14h], r8d
 * 00000001409FC30D: mov     rax, [rbp+0BE0h+var_880]
 * 00000001409FC314: mov     r15d, dword ptr [rbp+0BE0h+var_BF8]
 * 00000001409FC318: mov     [rbp+0BE0h+var_AB0], rax
 * 00000001409FC31F: add     [r14+828h], r12d
 * 00000001409FC326: jmp     short loc_1409FC334
 * 00000001409FC328: mov     r13, [rbp+0BE0h+var_C50]
 * 00000001409FC32C: mov     [rcx], r12d
 * 00000001409FC32F: mov     r12d, [rsp+0CE0h+var_C78]
 * 00000001409FC334: test    dword ptr [rbx+990h], 40000000h
 * 00000001409FC33E: jz      short loc_1409FC35E
 * 00000001409FC340: test    r12d, r12d
 * 00000001409FC343: jz      short loc_1409FC35E
 * 00000001409FC345: mov     r9, [rbp+0BE0h+var_AB0]
 * 00000001409FC34C: mov     r8d, r12d
 * 00000001409FC34F: add     r9, 1Ch
 * 00000001409FC353: mov     rdx, r13
 * 00000001409FC356: mov     rcx, rbx
 * 00000001409FC359: call    sub_1403EA48C
 * 00000001409FC35E: mov     rax, [rbp+0BE0h+var_AB0]
 * 00000001409FC365: xor     ecx, ecx
 * 00000001409FC367: mov     r12, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FC36C: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409FC373: mov     [rax+18h], ecx
 * 00000001409FC376: lea     r13d, [rcx+1]
 * 00000001409FC37A: mov     rax, [rbp+0BE0h+var_AB0]
 * 00000001409FC381: or      [rax+18h], r13d
 * 00000001409FC385: xor     eax, eax
 * 00000001409FC387: mov     r14, [rbp+0BE0h+var_B38]
 * 00000001409FC38E: test    r15d, r15d
 * 00000001409FC391: setnz   cl
 * 00000001409FC394: mov     dword ptr [r14+90h], 23h ; '#'
 * 00000001409FC39F: mov     eax, [r14+0B8h]
 * 00000001409FC3A6: and     eax, 0FFFFFFFEh
 * 00000001409FC3A9: or      ecx, eax
 * 00000001409FC3AB: mov     [r14+0B8h], ecx
 * 00000001409FC3B2: cmp     dword ptr [r14+0A0h], 94h
 * 00000001409FC3BD: jb      short loc_1409FC430
 * 00000001409FC3BF: mov     rax, [rbx+1F8h]
 * 00000001409FC3C6: mov     rcx, r12
 * 00000001409FC3C9: mov     r15, [r14+98h]
 * 00000001409FC3D0: call    KeGuardDispatchICall
 * 00000001409FC3D5: test    rax, rax
 * 00000001409FC3D8: jz      loc_1409FBBBA
 * 00000001409FC3DE: mov     ecx, [rax+50h]
 * 00000001409FC3E1: mov     eax, 2
 * 00000001409FC3E6: or      [r14+0B8h], eax
 * 00000001409FC3ED: add     rcx, r12
 * 00000001409FC3F0: mov     rax, [r15+70h]
 * 00000001409FC3F4: cmp     rax, r12
 * 00000001409FC3F7: jb      short loc_1409FC410
 * 00000001409FC3F9: cmp     rax, rcx
 * 00000001409FC3FC: jnb     short loc_1409FC410
 * 00000001409FC3FE: mov     rax, [rax]
 * 00000001409FC401: mov     [r14+0A8h], rax
 * 00000001409FC408: or      dword ptr [r14+0B8h], 4
 * 00000001409FC410: mov     rax, [r15+78h]
 * 00000001409FC414: cmp     rax, r12
 * 00000001409FC417: jb      short loc_1409FC430
 * 00000001409FC419: cmp     rax, rcx
 * 00000001409FC41C: jnb     short loc_1409FC430
 * 00000001409FC41E: mov     rax, [rax]
 * 00000001409FC421: mov     [r14+0B0h], rax
 * 00000001409FC428: or      dword ptr [r14+0B8h], 8
 * 00000001409FC430: test    dword ptr [rbx+990h], 400000h
 * 00000001409FC43A: mov     [rbp+0BE0h+var_B98], rbx
 * 00000001409FC43E: jz      loc_1409FD3DC
 * 00000001409FC444: mov     rax, [rbx+1F8h]
 * 00000001409FC44B: mov     rcx, r12
 * 00000001409FC44E: call    KeGuardDispatchICall
 * 00000001409FC453: mov     [rbp+0BE0h+var_C20], rax
 * 00000001409FC457: mov     r15, rax
 * 00000001409FC45A: test    rax, rax
 * 00000001409FC45D: jz      loc_1409FBA45
 * 00000001409FC463: movzx   r10d, word ptr [r15+6]
 * 00000001409FC468: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001409FC472: mov     ecx, [rbp+0BE0h+var_C58]
 * 00000001409FC475: mul     rcx
 * 00000001409FC478: xor     eax, eax
 * 00000001409FC47A: mov     word ptr [rbp+0BE0h+arg_8], r10w
 * 00000001409FC482: mov     r9, rdx
 * 00000001409FC485: shr     r9, 3
 * 00000001409FC489: mov     [rbp+0BE0h+var_C50], r9
 * 00000001409FC48D: test    r10w, r10w
 * 00000001409FC491: jnz     short loc_1409FC4F4
 * 00000001409FC493: test    dword ptr [rbx+990h], 200000h
 * 00000001409FC49D: jz      loc_140A0BA76
 * 00000001409FC4A3: cmp     [rbx+8F8h], eax
 * 00000001409FC4A9: jnz     loc_1409FBA45
 * 00000001409FC4AF: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC4B9: add     rax, rbx
 * 00000001409FC4BC: mov     [rbx+900h], rax
 * 00000001409FC4C3: xor     eax, eax
 * 00000001409FC4C5: mov     [rbx+908h], rax
 * 00000001409FC4CC: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409FC4D7: mov     [rbx+918h], r12
 * 00000001409FC4DE: mov     [rbx+8F8h], r13d
 * 00000001409FC4E5: xor     edx, edx
 * 00000001409FC4E7: mov     rcx, rbx
 * 00000001409FC4EA: call    $$b8
 * 00000001409FC4EF: jmp     loc_1409FBA45
 * 00000001409FC4F4: mov     rdx, [rbp+0BE0h+var_C48]
 * 00000001409FC4F8: movzx   r11d, word ptr [r15+14h]
 * 00000001409FC4FD: mov     r13, rdx
 * 00000001409FC500: mov     eax, r9d
 * 00000001409FC503: add     r11, 18h
 * 00000001409FC507: add     r11, r15
 * 00000001409FC50A: mov     [rsp+0CE0h+var_C88], r11
 * 00000001409FC50F: lea     r12, [rax+rax*2]
 * 00000001409FC513: shl     r12, 2
 * 00000001409FC517: mov     [rsp+0CE0h+var_C70], r12
 * 00000001409FC51C: lea     rax, [r12+rdx]
 * 00000001409FC520: xor     edx, edx
 * 00000001409FC522: mov     [rbp+0BE0h+var_C10], rax
 * 00000001409FC526: xor     eax, eax
 * 00000001409FC528: mov     r14, [rbp+0BE0h+var_C10]
 * 00000001409FC52C: mov     ecx, eax
 * 00000001409FC52E: mov     [rsp+0CE0h+var_C78], eax
 * 00000001409FC532: movzx   eax, r10w
 * 00000001409FC536: test    eax, eax
 * 00000001409FC538: jz      loc_1409FC770
 * 00000001409FC53E: mov     r8, r11
 * 00000001409FC541: mov     [rbp+0BE0h+var_C60], r11
 * 00000001409FC545: lea     r15d, [rdx+1]
 * 00000001409FC549: mov     edx, [r8+10h]
 * 00000001409FC54D: mov     eax, [r8+8]
 * 00000001409FC551: cmp     edx, eax
 * 00000001409FC553: mov     r9d, [r8+0Ch]
 * 00000001409FC557: cmovbe  edx, eax
 * 00000001409FC55A: mov     [rbp+0BE0h+var_BF0], r9d
 * 00000001409FC55E: add     edx, r9d
 * 00000001409FC561: mov     [rbp+0BE0h+var_BC4], edx
 * 00000001409FC564: test    ecx, ecx
 * 00000001409FC566: jz      short loc_1409FC57E
 * 00000001409FC568: lea     eax, [rcx-1]
 * 00000001409FC56B: lea     rax, [rax+rax*4]
 * 00000001409FC56F: cmp     edx, [r11+rax*8+0Ch]
 * 00000001409FC574: jb      loc_1409FC78D
 * 00000001409FC57A: mov     ecx, [rsp+0CE0h+var_C78]
 * 00000001409FC57E: cmp     r13, r14
 * 00000001409FC581: jz      loc_1409FC746
 * 00000001409FC587: mov     ecx, [r13+0]
 * 00000001409FC58B: mov     eax, [r13+4]
 * 00000001409FC58F: cmp     ecx, edx
 * 00000001409FC591: jnb     loc_1409FC72B
 * 00000001409FC597: cmp     eax, r9d
 * 00000001409FC59A: jbe     loc_1409FC72B
 * 00000001409FC5A0: cmp     ecx, r9d
 * 00000001409FC5A3: jb      loc_1409FC7EB
 * 00000001409FC5A9: cmp     eax, edx
 * 00000001409FC5AB: ja      loc_1409FC7EB
 * 00000001409FC5B1: mov     eax, [r13+8]
 * 00000001409FC5B5: mov     ecx, 1
 * 00000001409FC5BA: test    cl, al
 * 00000001409FC5BC: mov     [rbp+0BE0h+var_1B0], r13
 * 00000001409FC5C3: mov     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FC5C8: jnz     short loc_1409FC5D5
 * 00000001409FC5CA: mov     al, [rax+rcx]
 * 00000001409FC5CD: test    al, 20h
 * 00000001409FC5CF: jz      loc_1409FC71D
 * 00000001409FC5D5: mov     eax, [r8+8]
 * 00000001409FC5D9: mov     rdx, rcx
 * 00000001409FC5DC: mov     r15d, [r8+10h]
 * 00000001409FC5E0: mov     rcx, r13
 * 00000001409FC5E3: mov     r12d, [r8+0Ch]
 * 00000001409FC5E7: cmp     r15d, eax
 * 00000001409FC5EA: cmovbe  r15d, eax
 * 00000001409FC5EE: mov     rax, [rbx+418h]
 * 00000001409FC5F5: add     r15d, r12d
 * 00000001409FC5F8: call    KeGuardDispatchICall
 * 00000001409FC5FD: mov     r14, rax
 * 00000001409FC600: cmp     [rax], r12d
 * 00000001409FC603: jb      short loc_1409FC60B
 * 00000001409FC605: cmp     [rax+4], r15d
 * 00000001409FC609: jbe     short loc_1409FC67B
 * 00000001409FC60B: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 00000001409FC610: mov     eax, 80000000h
 * 00000001409FC615: mov     edx, r14d
 * 00000001409FC618: sub     edx, r8d
 * 00000001409FC61B: or      edx, eax
 * 00000001409FC61D: xor     eax, eax
 * 00000001409FC61F: test    dword ptr [rbx+990h], 200000h
 * 00000001409FC629: jz      loc_140A0BB01
 * 00000001409FC62F: cmp     [rbx+8F8h], eax
 * 00000001409FC635: jnz     short loc_1409FC67B
 * 00000001409FC637: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC641: xor     edx, edx
 * 00000001409FC643: add     rax, rbx
 * 00000001409FC646: mov     rcx, rbx
 * 00000001409FC649: mov     [rbx+900h], rax
 * 00000001409FC650: xor     eax, eax
 * 00000001409FC652: mov     [rbx+908h], rax
 * 00000001409FC659: mov     eax, 1
 * 00000001409FC65E: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409FC669: mov     [rbx+918h], r8
 * 00000001409FC670: mov     [rbx+8F8h], eax
 * 00000001409FC676: call    $$b8
 * 00000001409FC67B: mov     r8d, [r14]
 * 00000001409FC67E: mov     rcx, r14
 * 00000001409FC681: add     r8, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FC686: mov     rax, [rbx+420h]
 * 00000001409FC68D: mov     rdx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FC692: call    KeGuardDispatchICall
 * 00000001409FC697: mov     rdx, rax
 * 00000001409FC69A: cmp     [rax], r12d
 * 00000001409FC69D: jb      short loc_1409FC6A5
 * 00000001409FC69F: cmp     [rax+4], r15d
 * 00000001409FC6A3: jbe     short loc_1409FC712
 * 00000001409FC6A5: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 00000001409FC6AA: mov     eax, 80000000h
 * 00000001409FC6AF: sub     edx, r8d
 * 00000001409FC6B2: or      edx, eax
 * 00000001409FC6B4: xor     eax, eax
 * 00000001409FC6B6: test    dword ptr [rbx+990h], 200000h
 * 00000001409FC6C0: jz      loc_140A0BAD5
 * 00000001409FC6C6: cmp     [rbx+8F8h], eax
 * 00000001409FC6CC: jnz     short loc_1409FC712
 * 00000001409FC6CE: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC6D8: xor     edx, edx
 * 00000001409FC6DA: add     rax, rbx
 * 00000001409FC6DD: mov     rcx, rbx
 * 00000001409FC6E0: mov     [rbx+900h], rax
 * 00000001409FC6E7: xor     eax, eax
 * 00000001409FC6E9: mov     [rbx+908h], rax
 * 00000001409FC6F0: mov     eax, 1
 * 00000001409FC6F5: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409FC700: mov     [rbx+918h], r8
 * 00000001409FC707: mov     [rbx+8F8h], eax
 * 00000001409FC70D: call    $$b8
 * 00000001409FC712: mov     edx, [rbp+0BE0h+var_BC4]
 * 00000001409FC715: mov     r8, [rbp+0BE0h+var_C60]
 * 00000001409FC719: mov     r9d, [rbp+0BE0h+var_BF0]
 * 00000001409FC71D: add     r13, 0Ch
 * 00000001409FC721: cmp     r13, [rbp+0BE0h+var_C10]
 * 00000001409FC725: jnz     loc_1409FC587
 * 00000001409FC72B: mov     ecx, [rsp+0CE0h+var_C78]
 * 00000001409FC72F: mov     r15d, 1
 * 00000001409FC735: movzx   r10d, word ptr [rbp+0BE0h+arg_8]
 * 00000001409FC73D: mov     r11, [rsp+0CE0h+var_C88]
 * 00000001409FC742: mov     r14, [rbp+0BE0h+var_C10]
 * 00000001409FC746: add     ecx, r15d
 * 00000001409FC749: movzx   eax, r10w
 * 00000001409FC74D: add     r8, 28h ; '('
 * 00000001409FC751: mov     [rsp+0CE0h+var_C78], ecx
 * 00000001409FC755: mov     [rbp+0BE0h+var_C60], r8
 * 00000001409FC759: cmp     ecx, eax
 * 00000001409FC75B: jb      loc_1409FC549
 * 00000001409FC761: mov     r9, [rbp+0BE0h+var_C50]
 * 00000001409FC765: xor     edx, edx
 * 00000001409FC767: mov     r15, [rbp+0BE0h+var_C20]
 * 00000001409FC76B: mov     r12, [rsp+0CE0h+var_C70]
 * 00000001409FC770: cmp     r13, r14
 * 00000001409FC773: jz      loc_1409FC84D
 * 00000001409FC779: test    dword ptr [rbx+990h], 200000h
 * 00000001409FC783: jz      loc_140A0BB60
 * 00000001409FC789: xor     eax, eax
 * 00000001409FC78B: jmp     short loc_1409FC7FD
 * 00000001409FC78D: xor     eax, eax
 * 00000001409FC78F: test    dword ptr [rbx+990h], 200000h
 * 00000001409FC799: jz      loc_140A0BAA4
 * 00000001409FC79F: cmp     [rbx+8F8h], eax
 * 00000001409FC7A5: jnz     loc_1409FBA45
 * 00000001409FC7AB: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC7B5: add     rax, rbx
 * 00000001409FC7B8: mov     [rbx+900h], rax
 * 00000001409FC7BF: xor     eax, eax
 * 00000001409FC7C1: mov     [rbx+908h], rax
 * 00000001409FC7C8: mov     rax, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FC7CD: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409FC7D8: mov     [rbx+918h], rax
 * 00000001409FC7DF: mov     [rbx+8F8h], r15d
 * 00000001409FC7E6: jmp     loc_1409FC4E5
 * 00000001409FC7EB: xor     eax, eax
 * 00000001409FC7ED: test    dword ptr [rbx+990h], 200000h
 * 00000001409FC7F7: jz      loc_140A0BB2D
 * 00000001409FC7FD: cmp     [rbx+8F8h], eax
 * 00000001409FC803: jnz     loc_1409FBA45
 * 00000001409FC809: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FC813: add     rax, rbx
 * 00000001409FC816: mov     [rbx+900h], rax
 * 00000001409FC81D: xor     eax, eax
 * 00000001409FC81F: mov     [rbx+908h], rax
 * 00000001409FC826: mov     rax, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FC82B: mov     qword ptr [rbx+910h], 10Fh
 * 00000001409FC836: mov     [rbx+918h], rax
 * 00000001409FC83D: mov     eax, 1
 * 00000001409FC842: mov     [rbx+8F8h], eax
 * 00000001409FC848: jmp     loc_1409FC4E5
 * 00000001409FC84D: xor     r11d, r11d
 * 00000001409FC850: test    r9d, r9d
 * 00000001409FC853: jz      short loc_1409FC85E
 * 00000001409FC855: lea     ecx, [r9+6]
 * 00000001409FC859: and     ecx, 0FFFFFFF8h
 * 00000001409FC85C: jmp     short loc_1409FC861
 * 00000001409FC85E: mov     ecx, r11d
 * 00000001409FC861: mov     r14d, [rbx+7E4h]
 * 00000001409FC868: lea     eax, [rax+rax*2]
 * 00000001409FC86B: mov     r8d, [rbx+924h]
 * 00000001409FC872: lea     ecx, [rcx+rax*8]
 * 00000001409FC875: lea     eax, [r14+30h]
 * 00000001409FC879: add     eax, ecx
 * 00000001409FC87B: cmp     eax, [rbx+0A1Ch]
 * 00000001409FC881: jbe     loc_1409FC978
 * 00000001409FC887: mov     edx, eax
 * 00000001409FC889: mov     rcx, rbx
 * 00000001409FC88C: call    sub_140A0EB30
 * 00000001409FC891: mov     [rbp+0BE0h+var_C20], rax
 * 00000001409FC895: mov     r13, rax
 * 00000001409FC898: test    rax, rax
 * 00000001409FC89B: jz      loc_1409FBBBE
 * 00000001409FC8A1: mov     ecx, [rbx+990h]
 * 00000001409FC8A7: test    cl, 4
 * 00000001409FC8AA: jnz     loc_1409FC95F
 * 00000001409FC8B0: mov     eax, [rbx+7E4h]
 * 00000001409FC8B6: and     ecx, 20000000h
 * 00000001409FC8BC: mov     r8, [rbx+7C8h]
 * 00000001409FC8C3: neg     ecx
 * 00000001409FC8C5: mov     r10d, 1
 * 00000001409FC8CB: sbb     edx, edx
 * 00000001409FC8CD: and     edx, [rbx+924h]
 * 00000001409FC8D3: cmp     eax, 8
 * 00000001409FC8D6: jb      short loc_1409FC8F0
 * 00000001409FC8D8: mov     ecx, eax
 * 00000001409FC8DA: shr     rcx, 3
 * 00000001409FC8DE: xor     r9d, r9d
 * 00000001409FC8E1: mov     [rbx], r9
 * 00000001409FC8E4: add     eax, 0FFFFFFF8h
 * 00000001409FC8E7: add     rbx, 8
 * 00000001409FC8EB: sub     rcx, r10
 * 00000001409FC8EE: jnz     short loc_1409FC8E1
 * 00000001409FC8F0: xor     ecx, ecx
 * 00000001409FC8F2: test    eax, eax
 * 00000001409FC8F4: jz      short loc_1409FC906
 * 00000001409FC8F6: mov     r9d, 0FFFFFFFFh
 * 00000001409FC8FC: mov     [rbx], cl
 * 00000001409FC8FE: add     rbx, r10
 * 00000001409FC901: add     eax, r9d
 * 00000001409FC904: jnz     short loc_1409FC8FC
 * 00000001409FC906: mov     ebx, [r13+924h]
 * 00000001409FC90D: mov     [r13+924h], edx
 * 00000001409FC914: cmp     edx, 3
 * 00000001409FC917: jz      short loc_1409FC949
 * 00000001409FC919: test    dword ptr [r13+990h], 10000000h
 * 00000001409FC924: cmovz   ecx, edx
 * 00000001409FC927: test    ecx, ecx
 * 00000001409FC929: jz      short loc_1409FC940
 * 00000001409FC92B: mov     rax, [r13+228h]
 * 00000001409FC932: lea     rcx, [r8-8]
 * 00000001409FC936: mov     rdx, [rcx]
 * 00000001409FC939: call    KeGuardDispatchICall
 * 00000001409FC93E: jmp     short loc_1409FC958
 * 00000001409FC940: mov     rax, [r13+100h]
 * 00000001409FC947: jmp     short loc_1409FC950
 * 00000001409FC949: mov     rax, [r13+368h]
 * 00000001409FC950: mov     rcx, r8
 * 00000001409FC953: call    KeGuardDispatchICall
 * 00000001409FC958: mov     [r13+924h], ebx
 * 00000001409FC95F: and     dword ptr [r13+990h], 0FFFFFFFBh
 * 00000001409FC967: mov     r9, [rbp+0BE0h+var_C50]
 * 00000001409FC96B: xor     r11d, r11d
 * 00000001409FC96E: movzx   r10d, word ptr [rbp+0BE0h+arg_8]
 * 00000001409FC976: jmp     short loc_1409FC985
 * 00000001409FC978: mov     r13, rbx
 * 00000001409FC97B: mov     [rbp+0BE0h+var_C20], rbx
 * 00000001409FC97F: mov     [rbx+7E4h], eax
 * 00000001409FC985: mov     ebx, 1
 * 00000001409FC98A: lea     r8, [r14+r13]
 * 00000001409FC98E: add     [r13+80Ch], ebx
 * 00000001409FC995: mov     rax, r8
 * 00000001409FC998: mov     [rbp+0BE0h+var_848], r8
 * 00000001409FC99F: lea     ecx, [rbx+2Fh]
 * 00000001409FC9A2: lea     edx, [rbx+5]
 * 00000001409FC9A5: mov     [rax], r11
 * 00000001409FC9A8: add     ecx, 0FFFFFFF8h
 * 00000001409FC9AB: add     rax, 8
 * 00000001409FC9AF: sub     rdx, rbx
 * 00000001409FC9B2: jnz     short loc_1409FC9A5
 * 00000001409FC9B4: test    ecx, ecx
 * 00000001409FC9B6: jz      short loc_1409FC9C7
 * 00000001409FC9B8: mov     edx, 0FFFFFFFFh
 * 00000001409FC9BD: mov     [rax], r11b
 * 00000001409FC9C0: add     rax, rbx
 * 00000001409FC9C3: add     ecx, edx
 * 00000001409FC9C5: jnz     short loc_1409FC9BD
 * 00000001409FC9C7: mov     rax, [rbp+0BE0h+var_C48]
 * 00000001409FC9CB: mov     dword ptr [r8], 1Eh
 * 00000001409FC9D2: mov     [r8+8], rax
 * 00000001409FC9D6: xor     eax, eax
 * 00000001409FC9D8: mov     [r8+10h], eax
 * 00000001409FC9DC: mov     rcx, [r13+818h]
 * 00000001409FC9E3: mov     rax, rcx
 * 00000001409FC9E6: jmp     short loc_1409FC9EA
 * 00000001409FC9E8: xor     ecx, eax
 * 00000001409FC9EA: shr     rax, 1Fh
 * 00000001409FC9EE: test    rax, rax
 * 00000001409FC9F1: jnz     short loc_1409FC9E8
 * 00000001409FC9F3: btr     ecx, 1Fh
 * 00000001409FC9F7: mov     rbx, r13
 * 00000001409FC9FA: mov     [r8+14h], ecx
 * 00000001409FC9FE: mov     r8d, 0FFFEh
 * 00000001409FCA04: mov     rax, [rbp+0BE0h+var_848]
 * 00000001409FCA0B: mov     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FCA10: mov     [rbp+0BE0h+var_B18], rax
 * 00000001409FCA17: mov     [rbp+0BE0h+var_B98], rbx
 * 00000001409FCA1B: mov     [rax+18h], rcx
 * 00000001409FCA1F: mov     ecx, [r15+50h]
 * 00000001409FCA23: mov     rax, [rbp+0BE0h+var_B18]
 * 00000001409FCA2A: mov     [rax+20h], ecx
 * 00000001409FCA2D: mov     rax, [rbp+0BE0h+var_B18]
 * 00000001409FCA34: mov     ecx, [rbp+0BE0h+var_C58]
 * 00000001409FCA37: mov     [rax+24h], ecx
 * 00000001409FCA3A: mov     rax, [rbp+0BE0h+var_B18]
 * 00000001409FCA41: mov     [rax+28h], r10w
 * 00000001409FCA46: xor     eax, eax
 * 00000001409FCA48: cmp     dword ptr [rbp+0BE0h+var_BF8], eax
 * 00000001409FCA4B: mov     ecx, eax
 * 00000001409FCA4D: mov     rdx, [rbp+0BE0h+var_B18]
 * 00000001409FCA54: setnz   cl
 * 00000001409FCA57: movzx   eax, word ptr [rdx+2Ah]
 * 00000001409FCA5B: and     ax, r8w
 * 00000001409FCA5F: or      cx, ax
 * 00000001409FCA62: mov     [rdx+2Ah], cx
 * 00000001409FCA66: mov     rcx, [rbp+0BE0h+var_B18]
 * 00000001409FCA6D: lea     rdx, [rcx+30h]
 * 00000001409FCA71: mov     [rbp+0BE0h+var_C50], rdx
 * 00000001409FCA75: test    r9d, r9d
 * 00000001409FCA78: jz      short loc_1409FCA8B
 * 00000001409FCA7A: lea     r14d, [r9-1]
 * 00000001409FCA7E: add     r14, 7
 * 00000001409FCA82: and     r14, 0FFFFFFFFFFFFFFF8h
 * 00000001409FCA86: add     r14, rdx
 * 00000001409FCA89: jmp     short loc_1409FCA8E
 * 00000001409FCA8B: mov     r14, rdx
 * 00000001409FCA8E: movzx   eax, word ptr [rcx+28h]
 * 00000001409FCA92: mov     [rbp+0BE0h+var_C60], r14
 * 00000001409FCA96: lea     rcx, [rax+rax*2]
 * 00000001409FCA9A: xor     eax, eax
 * 00000001409FCA9C: test    r9d, r9d
 * 00000001409FCA9F: lea     r8, [r14+rcx*8]
 * 00000001409FCAA3: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FCAA7: mov     [rsp+0CE0h+var_C70], r8
 * 00000001409FCAAC: lea     r15d, [rax+0Ch]
 * 00000001409FCAB0: cmovz   r15, r12
 * 00000001409FCAB4: add     r15, r9
 * 00000001409FCAB7: mov     [rbp+0BE0h+var_BF8], r15
 * 00000001409FCABB: cmp     ax, r10w
 * 00000001409FCABF: jnb     short loc_1409FCAFD
 * 00000001409FCAC1: movzx   edx, r10w
 * 00000001409FCAC5: lea     rax, [r14+8]
 * 00000001409FCAC9: xor     r10d, r10d
 * 00000001409FCACC: mov     r12d, 80000000h
 * 00000001409FCAD2: lea     esi, [r10+2]
 * 00000001409FCAD6: lea     r11d, [r10+1]
 * 00000001409FCADA: mov     rcx, rsi
 * 00000001409FCADD: mov     [rax-8], r10d
 * 00000001409FCAE1: mov     [rax-4], r10d
 * 00000001409FCAE5: mov     [rax], r12d
 * 00000001409FCAE8: add     rax, 0Ch
 * 00000001409FCAEC: sub     rcx, r11
 * 00000001409FCAEF: jnz     short loc_1409FCADD
 * 00000001409FCAF1: sub     rdx, r11
 * 00000001409FCAF4: jnz     short loc_1409FCADA
 * 00000001409FCAF6: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FCAFB: xor     eax, eax
 * 00000001409FCAFD: cmp     r14, r8
 * 00000001409FCB00: jz      loc_1409FD3DC
 * 00000001409FCB06: mov     r12, [rsp+0CE0h+var_C88]
 * 00000001409FCB0B: jmp     short loc_1409FCB0F
 * 00000001409FCB0D: xor     eax, eax
 * 00000001409FCB0F: mov     r11d, eax
 * 00000001409FCB12: mov     eax, [r12+24h]
 * 00000001409FCB17: bt      eax, 19h
 * 00000001409FCB1B: jb      loc_1409FCD21
 * 00000001409FCB21: mov     ecx, [r12]
 * 00000001409FCB25: cmp     ecx, 54494E49h
 * 00000001409FCB2B: jnz     short loc_1409FCB3C
 * 00000001409FCB2D: cmp     dword ptr [r12+4], 4742444Bh
 * 00000001409FCB36: jz      loc_1409FCD21
 * 00000001409FCB3C: cmp     ecx, 45474150h
 * 00000001409FCB42: jnz     short loc_1409FCB74
 * 00000001409FCB44: movzx   eax, word ptr [r12+4]
 * 00000001409FCB4A: mov     edx, 7877h
 * 00000001409FCB4F: cmp     ax, dx
 * 00000001409FCB52: jz      loc_1409FCD21
 * 00000001409FCB58: mov     edx, 7277h
 * 00000001409FCB5D: cmp     ax, dx
 * 00000001409FCB60: jz      loc_1409FCD21
 * 00000001409FCB66: mov     edx, 7777h
 * 00000001409FCB6B: cmp     ax, dx
 * 00000001409FCB6E: jz      loc_1409FCD21
 * 00000001409FCB74: cmp     ecx, 41525245h
 * 00000001409FCB7A: jnz     short loc_1409FCB8D
 * 00000001409FCB7C: mov     eax, 4154h
 * 00000001409FCB81: cmp     [r12+4], ax
 * 00000001409FCB87: jz      loc_1409FCD21
 * 00000001409FCB8D: mov     rax, [r13+938h]
 * 00000001409FCB94: mov     r10d, 7
 * 00000001409FCB9A: mov     r8, [r13+930h]
 * 00000001409FCBA1: mov     r9, r12
 * 00000001409FCBA4: mov     [rbp+0BE0h+var_828], rax
 * 00000001409FCBAB: mov     rax, [r13+940h]
 * 00000001409FCBB2: mov     [rbp+0BE0h+var_820], rax
 * 00000001409FCBB9: lea     ebx, [r10-6]
 * 00000001409FCBBD: mov     rax, [r13+948h]
 * 00000001409FCBC4: mov     [rbp+0BE0h+var_818], rax
 * 00000001409FCBCB: mov     [rbp+0BE0h+var_830], r8
 * 00000001409FCBD2: movzx   edx, byte ptr [r9]
 * 00000001409FCBD6: add     r9, rbx
 * 00000001409FCBD9: movzx   eax, byte ptr [r8]
 * 00000001409FCBDD: add     r8, rbx
 * 00000001409FCBE0: cmp     rdx, rax
 * 00000001409FCBE3: jnz     short loc_1409FCBF4
 * 00000001409FCBE5: mov     eax, 0FFFFFFFFh
 * 00000001409FCBEA: add     r10d, eax
 * 00000001409FCBED: jnz     short loc_1409FCBD2
 * 00000001409FCBEF: jmp     loc_1409FCCA1
 * 00000001409FCBF4: mov     r9, [rbp+0BE0h+var_828]
 * 00000001409FCBFB: mov     r8d, 8
 * 00000001409FCC01: mov     r10, r12
 * 00000001409FCC04: mov     rcx, [r10]
 * 00000001409FCC07: add     r10, 8
 * 00000001409FCC0B: mov     rax, [r9]
 * 00000001409FCC0E: add     r9, 8
 * 00000001409FCC12: cmp     rcx, rax
 * 00000001409FCC15: jnz     short loc_1409FCC45
 * 00000001409FCC17: add     r8d, 0FFFFFFF8h
 * 00000001409FCC1B: cmp     r8d, 8
 * 00000001409FCC1F: jnb     short loc_1409FCC04
 * 00000001409FCC21: test    r8d, r8d
 * 00000001409FCC24: jz      short loc_1409FCCA1
 * 00000001409FCC26: movzx   edx, byte ptr [r10]
 * 00000001409FCC2A: add     r10, rbx
 * 00000001409FCC2D: movzx   eax, byte ptr [r9]
 * 00000001409FCC31: add     r9, rbx
 * 00000001409FCC34: cmp     rdx, rax
 * 00000001409FCC37: jnz     short loc_1409FCC45
 * 00000001409FCC39: mov     eax, 0FFFFFFFFh
 * 00000001409FCC3E: add     r8d, eax
 * 00000001409FCC41: jnz     short loc_1409FCC26
 * 00000001409FCC43: jmp     short loc_1409FCCA1
 * 00000001409FCC45: mov     r8, [rbp+0BE0h+var_820]
 * 00000001409FCC4C: mov     r10d, 4
 * 00000001409FCC52: mov     r9, r12
 * 00000001409FCC55: movzx   edx, byte ptr [r9]
 * 00000001409FCC59: add     r9, rbx
 * 00000001409FCC5C: movzx   eax, byte ptr [r8]
 * 00000001409FCC60: add     r8, rbx
 * 00000001409FCC63: cmp     rdx, rax
 * 00000001409FCC66: jnz     short loc_1409FCC74
 * 00000001409FCC68: mov     eax, 0FFFFFFFFh
 * 00000001409FCC6D: add     r10d, eax
 * 00000001409FCC70: jnz     short loc_1409FCC55
 * 00000001409FCC72: jmp     short loc_1409FCCA1
 * 00000001409FCC74: mov     r8, [rbp+0BE0h+var_818]
 * 00000001409FCC7B: mov     r10d, 6
 * 00000001409FCC81: mov     r9, r12
 * 00000001409FCC84: movzx   edx, byte ptr [r9]
 * 00000001409FCC88: add     r9, rbx
 * 00000001409FCC8B: movzx   eax, byte ptr [r8]
 * 00000001409FCC8F: add     r8, rbx
 * 00000001409FCC92: cmp     rdx, rax
 * 00000001409FCC95: jnz     short loc_1409FCCA4
 * 00000001409FCC97: mov     eax, 0FFFFFFFFh
 * 00000001409FCC9C: add     r10d, eax
 * 00000001409FCC9F: jnz     short loc_1409FCC84
 * 00000001409FCCA1: mov     r11d, ebx
 * 00000001409FCCA4: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FCCA8: mov     ecx, [r12+24h]
 * 00000001409FCCAD: xor     eax, eax
 * 00000001409FCCAF: test    ecx, ecx
 * 00000001409FCCB1: cmovs   r11d, ebx
 * 00000001409FCCB5: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 00000001409FCCBC: test    r11d, r11d
 * 00000001409FCCBF: jz      short loc_1409FCCEC
 * 00000001409FCCC1: cmp     dword ptr [r12], 54494E49h
 * 00000001409FCCC9: jnz     short loc_1409FCCEC
 * 00000001409FCCCB: cmp     dword ptr [r12+4], 4742444Bh
 * 00000001409FCCD4: jnz     short loc_1409FCCEC
 * 00000001409FCCD6: test    dword ptr [r13+994h], 2000h
 * 00000001409FCCE1: cmovnz  r11d, eax
 * 00000001409FCCE5: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 00000001409FCCEC: test    dword ptr [r13+994h], 4000h
 * 00000001409FCCF7: jz      short loc_1409FCD2E
 * 00000001409FCCF9: bt      ecx, 1Dh
 * 00000001409FCCFD: mov     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FCD02: jnb     short loc_1409FCD33
 * 00000001409FCD04: cmp     rcx, [r13+5E8h]
 * 00000001409FCD0B: jz      short loc_1409FCD16
 * 00000001409FCD0D: cmp     rcx, [r13+5F0h]
 * 00000001409FCD14: jnz     short loc_1409FCD33
 * 00000001409FCD16: mov     r11d, ebx
 * 00000001409FCD19: mov     dword ptr [rbp+0BE0h+arg_8], ebx
 * 00000001409FCD1F: jmp     short loc_1409FCD33
 * 00000001409FCD21: mov     ebx, 1
 * 00000001409FCD26: mov     r11d, ebx
 * 00000001409FCD29: jmp     loc_1409FCCA8
 * 00000001409FCD2E: mov     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FCD33: mov     ebx, [r12+0Ch]
 * 00000001409FCD38: mov     r12d, [r12+10h]
 * 00000001409FCD3D: mov     rax, [rsp+0CE0h+var_C88]
 * 00000001409FCD42: mov     r8, [rbp+0BE0h+var_C10]
 * 00000001409FCD46: mov     [rsp+0CE0h+var_C78], ebx
 * 00000001409FCD4A: mov     eax, [rax+8]
 * 00000001409FCD4D: cmp     r12d, eax
 * 00000001409FCD50: cmovbe  r12d, eax
 * 00000001409FCD54: add     r12d, ebx
 * 00000001409FCD57: mov     [rbp+0BE0h+var_BF0], r12d
 * 00000001409FCD5B: cmp     r9, r8
 * 00000001409FCD5E: jz      short loc_1409FCD69
 * 00000001409FCD60: mov     r13d, [r9]
 * 00000001409FCD63: mov     eax, [r9+4]
 * 00000001409FCD67: jmp     short loc_1409FCD6E
 * 00000001409FCD69: xor     eax, eax
 * 00000001409FCD6B: mov     r13d, eax
 * 00000001409FCD6E: mov     [rbp+0BE0h+var_BC4], eax
 * 00000001409FCD71: mov     [rbp+0BE0h+var_C58], ebx
 * 00000001409FCD74: cmp     r9, r8
 * 00000001409FCD77: jz      loc_1409FCF30
 * 00000001409FCD7D: cmp     r13d, ebx
 * 00000001409FCD80: jbe     loc_1409FCF30
 * 00000001409FCD86: cmp     eax, r12d
 * 00000001409FCD89: ja      loc_1409FCF30
 * 00000001409FCD8F: test    r11d, r11d
 * 00000001409FCD92: jnz     loc_1409FCF30
 * 00000001409FCD98: mov     [r14], ebx
 * 00000001409FCD9B: lea     rdx, [rbp+0BE0h+var_9C8]
 * 00000001409FCDA2: mov     [r14+4], r13d
 * 00000001409FCDA6: lea     r8, [rbp+0BE0h+var_7D0]
 * 00000001409FCDAD: mov     eax, [r14]
 * 00000001409FCDB0: mov     r10d, r13d
 * 00000001409FCDB3: sub     r10d, eax
 * 00000001409FCDB6: mov     [rbp+0BE0h+var_C58], r13d
 * 00000001409FCDBA: mov     r11d, r10d
 * 00000001409FCDBD: lea     r14, [rcx+rax]
 * 00000001409FCDC1: add     r11, r14
 * 00000001409FCDC4: xor     eax, eax
 * 00000001409FCDC6: mov     r9d, eax
 * 00000001409FCDC9: mov     rcx, [r8]
 * 00000001409FCDCC: mov     eax, [rdx]
 * 00000001409FCDCE: add     rax, rcx
 * 00000001409FCDD1: cmp     r14, rax
 * 00000001409FCDD4: jnb     short loc_1409FCDDF
 * 00000001409FCDD6: cmp     r11, rcx
 * 00000001409FCDD9: ja      loc_1409FCF28
 * 00000001409FCDDF: inc     r9d
 * 00000001409FCDE2: add     r8, 8
 * 00000001409FCDE6: add     rdx, 4
 * 00000001409FCDEA: cmp     r9d, 6
 * 00000001409FCDEE: jb      short loc_1409FCDC9
 * 00000001409FCDF0: mov     r15, [rbp+0BE0h+var_C20]
 * 00000001409FCDF4: mov     rbx, r14
 * 00000001409FCDF7: mov     rax, r14
 * 00000001409FCDFA: add     [r15+828h], r10d
 * 00000001409FCE01: mov     r12d, [r15+814h]
 * 00000001409FCE08: mov     r15, [r15+818h]
 * 00000001409FCE0F: cmp     r14, r11
 * 00000001409FCE12: jnb     short loc_1409FCE24
 * 00000001409FCE14: mov     ecx, 40h ; '@'
 * 00000001409FCE19: prefetchnta byte ptr [rax]
 * 00000001409FCE1C: add     rax, rcx
 * 00000001409FCE1F: cmp     rax, r11
 * 00000001409FCE22: jb      short loc_1409FCE19
 * 00000001409FCE24: mov     r9d, r10d
 * 00000001409FCE27: mov     r8, r15
 * 00000001409FCE2A: shr     r9d, 7
 * 00000001409FCE2E: mov     r11d, 1
 * 00000001409FCE34: test    r9d, r9d
 * 00000001409FCE37: jz      short loc_1409FCEA4
 * 00000001409FCE39: mov     rsi, 7010008004002001h
 * 00000001409FCE43: mov     edx, 8
 * 00000001409FCE48: mov     rax, [rbx]
 * 00000001409FCE4B: mov     ecx, r12d
 * 00000001409FCE4E: xor     rax, r8
 * 00000001409FCE51: mov     r8, [rbx+8]
 * 00000001409FCE55: rol     rax, cl
 * 00000001409FCE58: add     rbx, 10h
 * 00000001409FCE5C: xor     r8, rax
 * 00000001409FCE5F: rol     r8, cl
 * 00000001409FCE62: sub     rdx, r11
 * 00000001409FCE65: jnz     short loc_1409FCE48
 * 00000001409FCE67: mov     rcx, rbx
 * 00000001409FCE6A: sub     rcx, r14
 * 00000001409FCE6D: xor     rcx, r15
 * 00000001409FCE70: mov     rax, rcx
 * 00000001409FCE73: rol     rax, 11h
 * 00000001409FCE77: xor     rcx, rax
 * 00000001409FCE7A: mov     rax, rsi
 * 00000001409FCE7D: mul     rcx
 * 00000001409FCE80: xor     r12d, edx
 * 00000001409FCE83: mov     [rbp+0BE0h+var_1A8], rdx
 * 00000001409FCE8A: xor     r12d, eax
 * 00000001409FCE8D: mov     eax, 0FFFFFFFFh
 * 00000001409FCE92: and     r12d, 3Fh
 * 00000001409FCE96: cmovz   r12d, r11d
 * 00000001409FCE9A: add     r9d, eax
 * 00000001409FCE9D: jnz     short loc_1409FCE43
 * 00000001409FCE9F: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FCEA4: and     r10d, 7Fh
 * 00000001409FCEA8: cmp     r10d, 8
 * 00000001409FCEAC: jb      short loc_1409FCECB
 * 00000001409FCEAE: mov     edx, r10d
 * 00000001409FCEB1: shr     rdx, 3
 * 00000001409FCEB5: xor     r8, [rbx]
 * 00000001409FCEB8: mov     ecx, r12d
 * 00000001409FCEBB: rol     r8, cl
 * 00000001409FCEBE: add     rbx, 8
 * 00000001409FCEC2: add     r10d, 0FFFFFFF8h
 * 00000001409FCEC6: sub     rdx, r11
 * 00000001409FCEC9: jnz     short loc_1409FCEB5
 * 00000001409FCECB: test    r10d, r10d
 * 00000001409FCECE: jz      short loc_1409FCEEE
 * 00000001409FCED0: mov     esi, 0FFFFFFFFh
 * 00000001409FCED5: movzx   eax, byte ptr [rbx]
 * 00000001409FCED8: mov     ecx, r12d
 * 00000001409FCEDB: xor     r8, rax
 * 00000001409FCEDE: add     rbx, r11
 * 00000001409FCEE1: rol     r8, cl
 * 00000001409FCEE4: add     r10d, esi
 * 00000001409FCEE7: jnz     short loc_1409FCED5
 * 00000001409FCEE9: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FCEEE: mov     rax, r8
 * 00000001409FCEF1: shr     rax, 1Fh
 * 00000001409FCEF5: xor     edx, edx
 * 00000001409FCEF7: jmp     short loc_1409FCF00
 * 00000001409FCEF9: xor     r8d, eax
 * 00000001409FCEFC: shr     rax, 1Fh
 * 00000001409FCF00: test    rax, rax
 * 00000001409FCF03: jnz     short loc_1409FCEF9
 * 00000001409FCF05: mov     rax, [rbp+0BE0h+var_C60]
 * 00000001409FCF09: btr     r8d, 1Fh
 * 00000001409FCF0E: mov     r12d, [rbp+0BE0h+var_BF0]
 * 00000001409FCF12: mov     ebx, [rsp+0CE0h+var_C78]
 * 00000001409FCF16: mov     r15, [rbp+0BE0h+var_BF8]
 * 00000001409FCF1A: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FCF1E: mov     [rax+8], r8d
 * 00000001409FCF22: mov     r8, [rbp+0BE0h+var_C10]
 * 00000001409FCF26: jmp     short loc_1409FCF32
 * 00000001409FCF28: mov     r8, [rbp+0BE0h+var_C10]
 * 00000001409FCF2C: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FCF30: xor     edx, edx
 * 00000001409FCF32: cmp     r13d, ebx
 * 00000001409FCF35: jb      loc_1409FD1BF
 * 00000001409FCF3B: cmp     [rbp+0BE0h+var_BC4], r12d
 * 00000001409FCF3F: ja      loc_1409FD1BF
 * 00000001409FCF45: cmp     r9, r8
 * 00000001409FCF48: jz      loc_1409FD1BF
 * 00000001409FCF4E: mov     r13d, [r15+4]
 * 00000001409FCF52: cmp     r13d, r12d
 * 00000001409FCF55: ja      loc_1409FD1BF
 * 00000001409FCF5B: mov     rax, [rbp+0BE0h+var_C50]
 * 00000001409FCF5F: mov     ecx, 1
 * 00000001409FCF64: cmp     r15, r8
 * 00000001409FCF67: jz      loc_1409FD1BF
 * 00000001409FCF6D: cmp     dword ptr [rbp+0BE0h+arg_8], edx
 * 00000001409FCF73: jz      short loc_1409FCF7D
 * 00000001409FCF75: mov     r8b, 80h
 * 00000001409FCF78: jmp     loc_1409FD187
 * 00000001409FCF7D: mov     r15d, [r15]
 * 00000001409FCF80: mov     ebx, [r9+4]
 * 00000001409FCF84: mov     r11, [rbp+0BE0h+var_C20]
 * 00000001409FCF88: mov     [rbp+0BE0h+var_C58], r15d
 * 00000001409FCF8C: cmp     r15d, ebx
 * 00000001409FCF8F: jnb     short loc_1409FCFFB
 * 00000001409FCF91: test    dword ptr [r11+990h], 200000h
 * 00000001409FCF9C: jz      loc_140A0BB93
 * 00000001409FCFA2: xor     eax, eax
 * 00000001409FCFA4: cmp     [r11+8F8h], eax
 * 00000001409FCFAB: jnz     short loc_1409FCFFB
 * 00000001409FCFAD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FCFB7: xor     edx, edx
 * 00000001409FCFB9: add     rax, r11
 * 00000001409FCFBC: mov     rcx, r11
 * 00000001409FCFBF: mov     [r11+900h], rax
 * 00000001409FCFC6: xor     eax, eax
 * 00000001409FCFC8: mov     [r11+908h], rax
 * 00000001409FCFCF: mov     rax, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FCFD4: mov     qword ptr [r11+910h], 10Fh
 * 00000001409FCFDF: mov     [r11+918h], rax
 * 00000001409FCFE6: mov     eax, 1
 * 00000001409FCFEB: mov     [r11+8F8h], eax
 * 00000001409FCFF2: call    $$b8
 * 00000001409FCFF7: mov     r11, [rbp+0BE0h+var_C20]
 * 00000001409FCFFB: mov     r14, rbx
 * 00000001409FCFFE: lea     rdx, [rbp+0BE0h+var_9C8]
 * 00000001409FD005: add     r14, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FD00A: lea     r8, [rbp+0BE0h+var_7D0]
 * 00000001409FD011: mov     r9d, r15d
 * 00000001409FD014: sub     r9d, ebx
 * 00000001409FD017: mov     ebx, r9d
 * 00000001409FD01A: add     rbx, r14
 * 00000001409FD01D: xor     eax, eax
 * 00000001409FD01F: mov     r10d, eax
 * 00000001409FD022: mov     rcx, [r8]
 * 00000001409FD025: mov     eax, [rdx]
 * 00000001409FD027: add     rax, rcx
 * 00000001409FD02A: cmp     r14, rax
 * 00000001409FD02D: jnb     short loc_1409FD038
 * 00000001409FD02F: cmp     rbx, rcx
 * 00000001409FD032: ja      loc_1409FD171
 * 00000001409FD038: mov     eax, 4
 * 00000001409FD03D: inc     r10d
 * 00000001409FD040: add     rdx, rax
 * 00000001409FD043: add     r8, 8
 * 00000001409FD047: cmp     r10d, 6
 * 00000001409FD04B: jb      short loc_1409FD022
 * 00000001409FD04D: cmp     r9d, eax
 * 00000001409FD050: jb      loc_1409FD171
 * 00000001409FD056: add     [r11+828h], r9d
 * 00000001409FD05D: mov     rax, r14
 * 00000001409FD060: mov     r12d, [r11+814h]
 * 00000001409FD067: mov     r15, [r11+818h]
 * 00000001409FD06E: mov     r11, r14
 * 00000001409FD071: cmp     r14, rbx
 * 00000001409FD074: jnb     short loc_1409FD086
 * 00000001409FD076: mov     ecx, 40h ; '@'
 * 00000001409FD07B: prefetchnta byte ptr [rax]
 * 00000001409FD07E: add     rax, rcx
 * 00000001409FD081: cmp     rax, rbx
 * 00000001409FD084: jb      short loc_1409FD07B
 * 00000001409FD086: mov     r10d, r9d
 * 00000001409FD089: mov     r8, r15
 * 00000001409FD08C: shr     r10d, 7
 * 00000001409FD090: mov     ebx, 1
 * 00000001409FD095: test    r10d, r10d
 * 00000001409FD098: jz      short loc_1409FD105
 * 00000001409FD09A: mov     rsi, 7010008004002001h
 * 00000001409FD0A4: mov     edx, 8
 * 00000001409FD0A9: mov     rax, [r11]
 * 00000001409FD0AC: mov     ecx, r12d
 * 00000001409FD0AF: xor     rax, r8
 * 00000001409FD0B2: mov     r8, [r11+8]
 * 00000001409FD0B6: rol     rax, cl
 * 00000001409FD0B9: add     r11, 10h
 * 00000001409FD0BD: xor     r8, rax
 * 00000001409FD0C0: rol     r8, cl
 * 00000001409FD0C3: sub     rdx, rbx
 * 00000001409FD0C6: jnz     short loc_1409FD0A9
 * 00000001409FD0C8: mov     rcx, r11
 * 00000001409FD0CB: sub     rcx, r14
 * 00000001409FD0CE: xor     rcx, r15
 * 00000001409FD0D1: mov     rax, rcx
 * 00000001409FD0D4: rol     rax, 11h
 * 00000001409FD0D8: xor     rcx, rax
 * 00000001409FD0DB: mov     rax, rsi
 * 00000001409FD0DE: mul     rcx
 * 00000001409FD0E1: xor     r12d, edx
 * 00000001409FD0E4: mov     [rbp+0BE0h+var_690], rdx
 * 00000001409FD0EB: xor     r12d, eax
 * 00000001409FD0EE: mov     eax, 0FFFFFFFFh
 * 00000001409FD0F3: and     r12d, 3Fh
 * 00000001409FD0F7: cmovz   r12d, ebx
 * 00000001409FD0FB: add     r10d, eax
 * 00000001409FD0FE: jnz     short loc_1409FD0A4
 * 00000001409FD100: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FD105: and     r9d, 7Fh
 * 00000001409FD109: cmp     r9d, 8
 * 00000001409FD10D: jb      short loc_1409FD12C
 * 00000001409FD10F: mov     edx, r9d
 * 00000001409FD112: shr     rdx, 3
 * 00000001409FD116: xor     r8, [r11]
 * 00000001409FD119: mov     ecx, r12d
 * 00000001409FD11C: rol     r8, cl
 * 00000001409FD11F: add     r11, 8
 * 00000001409FD123: add     r9d, 0FFFFFFF8h
 * 00000001409FD127: sub     rdx, rbx
 * 00000001409FD12A: jnz     short loc_1409FD116
 * 00000001409FD12C: test    r9d, r9d
 * 00000001409FD12F: jz      short loc_1409FD150
 * 00000001409FD131: mov     esi, 0FFFFFFFFh
 * 00000001409FD136: movzx   eax, byte ptr [r11]
 * 00000001409FD13A: mov     ecx, r12d
 * 00000001409FD13D: xor     r8, rax
 * 00000001409FD140: add     r11, rbx
 * 00000001409FD143: rol     r8, cl
 * 00000001409FD146: add     r9d, esi
 * 00000001409FD149: jnz     short loc_1409FD136
 * 00000001409FD14B: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FD150: mov     rax, r8
 * 00000001409FD153: shr     rax, 7
 * 00000001409FD157: xor     edx, edx
 * 00000001409FD159: jmp     short loc_1409FD162
 * 00000001409FD15B: xor     r8b, al
 * 00000001409FD15E: shr     rax, 7
 * 00000001409FD162: test    rax, rax
 * 00000001409FD165: jnz     short loc_1409FD15B
 * 00000001409FD167: mov     r12d, [rbp+0BE0h+var_BF0]
 * 00000001409FD16B: and     r8b, 7Fh
 * 00000001409FD16F: jmp     short loc_1409FD176
 * 00000001409FD171: xor     edx, edx
 * 00000001409FD173: mov     r8b, 80h
 * 00000001409FD176: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FD17A: mov     ecx, 1
 * 00000001409FD17F: mov     r15, [rbp+0BE0h+var_BF8]
 * 00000001409FD183: mov     rax, [rbp+0BE0h+var_C50]
 * 00000001409FD187: mov     [rax], r8b
 * 00000001409FD18A: mov     r8d, 0Ch
 * 00000001409FD190: mov     rax, [rbp+0BE0h+var_C50]
 * 00000001409FD194: add     r9, r8
 * 00000001409FD197: add     r15, r8
 * 00000001409FD19A: mov     [rbp+0BE0h+var_C48], r9
 * 00000001409FD19E: mov     r8, [rbp+0BE0h+var_C10]
 * 00000001409FD1A2: add     rax, rcx
 * 00000001409FD1A5: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409FD1A9: mov     [rbp+0BE0h+var_BF8], r15
 * 00000001409FD1AD: cmp     r15, r8
 * 00000001409FD1B0: jz      short loc_1409FD1B6
 * 00000001409FD1B2: mov     r13d, [r15+4]
 * 00000001409FD1B6: cmp     r13d, r12d
 * 00000001409FD1B9: jbe     loc_1409FCF64
 * 00000001409FD1BF: mov     r14, [rbp+0BE0h+var_C60]
 * 00000001409FD1C3: xor     eax, eax
 * 00000001409FD1C5: cmp     dword ptr [rbp+0BE0h+arg_8], eax
 * 00000001409FD1CB: jnz     loc_1409FD367
 * 00000001409FD1D1: mov     eax, [rbp+0BE0h+var_C58]
 * 00000001409FD1D4: cmp     eax, r12d
 * 00000001409FD1D7: jz      loc_1409FD367
 * 00000001409FD1DD: mov     [r14+0Ch], eax
 * 00000001409FD1E1: lea     rdx, [rbp+0BE0h+var_9C8]
 * 00000001409FD1E8: mov     [r14+10h], r12d
 * 00000001409FD1EC: lea     r8, [rbp+0BE0h+var_7D0]
 * 00000001409FD1F3: mov     eax, [r14+0Ch]
 * 00000001409FD1F7: mov     r9d, r12d
 * 00000001409FD1FA: mov     ebx, eax
 * 00000001409FD1FC: sub     r9d, eax
 * 00000001409FD1FF: add     rbx, [rsp+0CE0h+BugCheckParameter2]
 * 00000001409FD204: mov     r11d, r9d
 * 00000001409FD207: add     r11, rbx
 * 00000001409FD20A: xor     eax, eax
 * 00000001409FD20C: mov     r10d, eax
 * 00000001409FD20F: mov     rcx, [r8]
 * 00000001409FD212: mov     eax, [rdx]
 * 00000001409FD214: add     rax, rcx
 * 00000001409FD217: cmp     rbx, rax
 * 00000001409FD21A: jnb     short loc_1409FD225
 * 00000001409FD21C: cmp     r11, rcx
 * 00000001409FD21F: ja      loc_1409FD363
 * 00000001409FD225: inc     r10d
 * 00000001409FD228: add     r8, 8
 * 00000001409FD22C: add     rdx, 4
 * 00000001409FD230: cmp     r10d, 6
 * 00000001409FD234: jb      short loc_1409FD20F
 * 00000001409FD236: mov     r13, [rbp+0BE0h+var_C20]
 * 00000001409FD23A: mov     r10, rbx
 * 00000001409FD23D: mov     rax, rbx
 * 00000001409FD240: add     [r13+828h], r9d
 * 00000001409FD247: mov     r14d, [r13+814h]
 * 00000001409FD24E: mov     r15, [r13+818h]
 * 00000001409FD255: cmp     rbx, r11
 * 00000001409FD258: jnb     short loc_1409FD26A
 * 00000001409FD25A: mov     ecx, 40h ; '@'
 * 00000001409FD25F: prefetchnta byte ptr [rax]
 * 00000001409FD262: add     rax, rcx
 * 00000001409FD265: cmp     rax, r11
 * 00000001409FD268: jb      short loc_1409FD25F
 * 00000001409FD26A: mov     r11d, r9d
 * 00000001409FD26D: mov     r8, r15
 * 00000001409FD270: shr     r11d, 7
 * 00000001409FD274: test    r11d, r11d
 * 00000001409FD277: jz      short loc_1409FD2EE
 * 00000001409FD279: mov     r13, 7010008004002001h
 * 00000001409FD283: mov     edx, 8
 * 00000001409FD288: lea     esi, [rdx-7]
 * 00000001409FD28B: mov     rax, [r10]
 * 00000001409FD28E: mov     ecx, r14d
 * 00000001409FD291: xor     rax, r8
 * 00000001409FD294: mov     r8, [r10+8]
 * 00000001409FD298: rol     rax, cl
 * 00000001409FD29B: add     r10, 10h
 * 00000001409FD29F: xor     r8, rax
 * 00000001409FD2A2: rol     r8, cl
 * 00000001409FD2A5: sub     rdx, rsi
 * 00000001409FD2A8: jnz     short loc_1409FD28B
 * 00000001409FD2AA: mov     rcx, r10
 * 00000001409FD2AD: sub     rcx, rbx
 * 00000001409FD2B0: xor     rcx, r15
 * 00000001409FD2B3: mov     rax, rcx
 * 00000001409FD2B6: rol     rax, 11h
 * 00000001409FD2BA: xor     rcx, rax
 * 00000001409FD2BD: mov     rax, r13
 * 00000001409FD2C0: mul     rcx
 * 00000001409FD2C3: xor     r14d, edx
 * 00000001409FD2C6: mov     [rbp+0BE0h+var_688], rdx
 * 00000001409FD2CD: xor     r14d, eax
 * 00000001409FD2D0: mov     rax, rsi
 * 00000001409FD2D3: and     r14d, 3Fh
 * 00000001409FD2D7: cmovz   r14d, eax
 * 00000001409FD2DB: mov     eax, 0FFFFFFFFh
 * 00000001409FD2E0: add     r11d, eax
 * 00000001409FD2E3: jnz     short loc_1409FD283
 * 00000001409FD2E5: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FD2EA: mov     r13, [rbp+0BE0h+var_C20]
 * 00000001409FD2EE: and     r9d, 7Fh
 * 00000001409FD2F2: mov     r11d, 1
 * 00000001409FD2F8: cmp     r9d, 8
 * 00000001409FD2FC: jb      short loc_1409FD31B
 * 00000001409FD2FE: mov     edx, r9d
 * 00000001409FD301: shr     rdx, 3
 * 00000001409FD305: xor     r8, [r10]
 * 00000001409FD308: mov     ecx, r14d
 * 00000001409FD30B: rol     r8, cl
 * 00000001409FD30E: add     r10, 8
 * 00000001409FD312: add     r9d, 0FFFFFFF8h
 * 00000001409FD316: sub     rdx, r11
 * 00000001409FD319: jnz     short loc_1409FD305
 * 00000001409FD31B: test    r9d, r9d
 * 00000001409FD31E: jz      short loc_1409FD33F
 * 00000001409FD320: mov     r12d, 0FFFFFFFFh
 * 00000001409FD326: movzx   eax, byte ptr [r10]
 * 00000001409FD32A: mov     ecx, r14d
 * 00000001409FD32D: xor     r8, rax
 * 00000001409FD330: add     r10, r11
 * 00000001409FD333: rol     r8, cl
 * 00000001409FD336: add     r9d, r12d
 * 00000001409FD339: jnz     short loc_1409FD326
 * 00000001409FD33B: mov     r12d, [rbp+0BE0h+var_BF0]
 * 00000001409FD33F: mov     rax, r8
 * 00000001409FD342: jmp     short loc_1409FD347
 * 00000001409FD344: xor     r8d, eax
 * 00000001409FD347: shr     rax, 1Fh
 * 00000001409FD34B: test    rax, rax
 * 00000001409FD34E: jnz     short loc_1409FD344
 * 00000001409FD350: mov     r14, [rbp+0BE0h+var_C60]
 * 00000001409FD354: btr     r8d, 1Fh
 * 00000001409FD359: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FD35D: mov     [r14+14h], r8d
 * 00000001409FD361: jmp     short loc_1409FD36B
 * 00000001409FD363: mov     r9, [rbp+0BE0h+var_C48]
 * 00000001409FD367: mov     r13, [rbp+0BE0h+var_C20]
 * 00000001409FD36B: mov     rdx, [rbp+0BE0h+var_C10]
 * 00000001409FD36F: mov     r15, [rbp+0BE0h+var_BF8]
 * 00000001409FD373: cmp     r9, rdx
 * 00000001409FD376: jz      short loc_1409FD3B7
 * 00000001409FD378: mov     eax, [r9]
 * 00000001409FD37B: mov     ecx, [r9+4]
 * 00000001409FD37F: cmp     eax, [rsp+0CE0h+var_C78]
 * 00000001409FD383: jb      short loc_1409FD3B7
 * 00000001409FD385: cmp     ecx, r12d
 * 00000001409FD388: ja      short loc_1409FD3B7
 * 00000001409FD38A: cmp     r15, rdx
 * 00000001409FD38D: jz      short loc_1409FD3AB
 * 00000001409FD38F: mov     rax, [rbp+0BE0h+var_C50]
 * 00000001409FD393: mov     byte ptr [rax], 80h
 * 00000001409FD396: inc     rax
 * 00000001409FD399: mov     [rbp+0BE0h+var_C50], rax
 * 00000001409FD39D: mov     eax, 0Ch
 * 00000001409FD3A2: add     r15, rax
 * 00000001409FD3A5: mov     [rbp+0BE0h+var_BF8], r15
 * 00000001409FD3A9: jmp     short loc_1409FD3B0
 * 00000001409FD3AB: mov     eax, 0Ch
 * 00000001409FD3B0: add     r9, rax
 * 00000001409FD3B3: mov     [rbp+0BE0h+var_C48], r9
 * 00000001409FD3B7: mov     r12, [rsp+0CE0h+var_C88]
 * 00000001409FD3BC: add     r14, 18h
 * 00000001409FD3C0: add     r12, 28h ; '('
 * 00000001409FD3C4: mov     [rbp+0BE0h+var_C60], r14
 * 00000001409FD3C8: mov     [rsp+0CE0h+var_C88], r12
 * 00000001409FD3CD: cmp     r14, [rsp+0CE0h+var_C70]
 * 00000001409FD3D2: jnz     loc_1409FCB0D
 * 00000001409FD3D8: mov     rbx, [rbp+0BE0h+var_B98]
 * 00000001409FD3DC: mov     r14, [rbp+0BE0h+var_C08]
 * 00000001409FD3E0: xor     eax, eax
 * 00000001409FD3E2: mov     [rbp+0BE0h+var_B50], rbx
 * 00000001409FD3E9: mov     ecx, eax
 * 00000001409FD3EB: mov     rdx, [rsp+0CE0h+var_C90]
 * 00000001409FD3F0: mov     r8d, 80000000h
 * 00000001409FD3F6: sub     rdx, rsi
 * 00000001409FD3F9: mov     [rsp+0CE0h+var_C80], rbx
 * 00000001409FD3FE: add     rdx, rbx
 * 00000001409FD401: mov     rsi, rbx
 * 00000001409FD404: mov     [rsp+0CE0h+var_C90], rdx
 * 00000001409FD409: lea     eax, [rcx+r8]
 * 00000001409FD40D: test    r8d, eax
 * 00000001409FD410: jnz     short loc_1409FD41A
 * 00000001409FD412: cmp     ecx, 0C000010Eh
 * 00000001409FD418: jnz     short loc_1409FD41E
 * 00000001409FD41A: mov     [rdx+28h], r14
 * 00000001409FD41E: mov     r13d, [rbp+0BE0h+var_BE0]
 * 00000001409FD422: jmp     loc_1409FB677
 * 00000001409FD427: mov     rbx, r13
 * 00000001409FD42A: mov     [rbp+0BE0h+var_BE0], eax
 * 00000001409FD42D: mov     r13, rax
 * 00000001409FD430: mov     r15d, eax
 * 00000001409FD433: mov     r12d, eax
 * 00000001409FD436: jmp     short loc_1409FD43A
 * 00000001409FD438: xor     eax, eax
 * 00000001409FD43A: mov     [rbp+0BE0h+var_B20], eax
 * 00000001409FD440: mov     rax, [rsi+2F8h]
 * 00000001409FD447: lea     r8, [rbp+0BE0h+var_A18]
 * 00000001409FD44E: lea     rdx, [rbp+0BE0h+var_B20]
 * 00000001409FD455: mov     ecx, r12d
 * 00000001409FD458: call    KeGuardDispatchICall
 * 00000001409FD45D: test    eax, eax
 * 00000001409FD45F: jz      loc_1409FD5A7
 * 00000001409FD465: mov     rax, [rsi+2D8h]
 * 00000001409FD46C: mov     rcx, [rbp+0BE0h+var_A18]
 * 00000001409FD473: call    KeGuardDispatchICall
 * 00000001409FD478: mov     r14, rax
 * 00000001409FD47B: test    rax, rax
 * 00000001409FD47E: jz      short loc_1409FD440
 * 00000001409FD480: mov     rax, [rsi+2E0h]
 * 00000001409FD487: mov     edi, 1
 * 00000001409FD48C: add     r15d, edi
 * 00000001409FD48F: mov     rcx, r14
 * 00000001409FD492: mov     [rbp+0BE0h+var_BE0], r15d
 * 00000001409FD496: call    KeGuardDispatchICall
 * 00000001409FD49B: mov     r15, rax
 * 00000001409FD49E: lea     rdx, [rbp+0BE0h+var_680]
 * 00000001409FD4A5: mov     rax, [rsi+208h]
 * 00000001409FD4AC: mov     rcx, r15
 * 00000001409FD4AF: call    KeGuardDispatchICall
 * 00000001409FD4B4: test    rax, rax
 * 00000001409FD4B7: jz      short loc_1409FD4D8
 * 00000001409FD4B9: mov     rax, [rsi+2E8h]
 * 00000001409FD4C0: mov     rdx, r14
 * 00000001409FD4C3: mov     rcx, [rbp+0BE0h+var_A18]
 * 00000001409FD4CA: call    KeGuardDispatchICall
 * 00000001409FD4CF: mov     r15d, [rbp+0BE0h+var_BE0]
 * 00000001409FD4D3: jmp     loc_1409FD440
 * 00000001409FD4D8: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FD4E2: jz      short loc_1409FD52D
 * 00000001409FD4E4: mov     rcx, [rsi+0A80h]
 * 00000001409FD4EB: mov     edx, 30h ; '0'
 * 00000001409FD4F0: lea     r8d, [rdx-2Ah]
 * 00000001409FD4F4: mov     rax, [rbx]
 * 00000001409FD4F7: add     edx, 0FFFFFFF8h
 * 00000001409FD4FA: mov     [rcx], rax
 * 00000001409FD4FD: add     rbx, 8
 * 00000001409FD501: add     rcx, 8
 * 00000001409FD505: sub     r8, rdi
 * 00000001409FD508: jnz     short loc_1409FD4F4
 * 00000001409FD50A: test    edx, edx
 * 00000001409FD50C: jz      short loc_1409FD526
 * 00000001409FD50E: mov     esi, 0FFFFFFFFh
 * 00000001409FD513: mov     al, [rbx]
 * 00000001409FD515: add     rbx, rdi
 * 00000001409FD518: mov     [rcx], al
 * 00000001409FD51A: add     rcx, rdi
 * 00000001409FD51D: add     edx, esi
 * 00000001409FD51F: jnz     short loc_1409FD513
 * 00000001409FD521: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FD526: mov     rbx, [rsi+0A80h]
 * 00000001409FD52D: mov     [rbx+18h], r15
 * 00000001409FD531: mov     rax, [rsi+590h]
 * 00000001409FD538: mov     [rax], rbx
 * 00000001409FD53B: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FD542: mov     rax, [rsi+590h]
 * 00000001409FD549: mov     [rax+8], r15
 * 00000001409FD54D: mov     dword ptr [rax+14h], 1000h
 * 00000001409FD554: xor     eax, eax
 * 00000001409FD556: cmp     [rsi+8F8h], eax
 * 00000001409FD55C: jnz     short loc_1409FD5A7
 * 00000001409FD55E: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD568: xor     edx, edx
 * 00000001409FD56A: add     rax, rsi
 * 00000001409FD56D: mov     rcx, rsi
 * 00000001409FD570: mov     [rsi+900h], rax
 * 00000001409FD577: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FD581: add     rax, rbx
 * 00000001409FD584: mov     [rsi+908h], rax
 * 00000001409FD58B: movsxd  rax, dword ptr [rbx]
 * 00000001409FD58E: mov     [rsi+910h], rax
 * 00000001409FD595: mov     [rsi+918h], r13
 * 00000001409FD59C: mov     [rsi+8F8h], edi
 * 00000001409FD5A2: call    $$b8
 * 00000001409FD5A7: mov     r15d, [rbp+0BE0h+var_BE0]
 * 00000001409FD5AB: mov     edx, 1
 * 00000001409FD5B0: add     r12d, edx
 * 00000001409FD5B3: add     r13, rdx
 * 00000001409FD5B6: cmp     r12d, 3
 * 00000001409FD5BA: jb      loc_1409FD438
 * 00000001409FD5C0: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FD5C7: mov     r13d, r15d
 * 00000001409FD5CA: jmp     loc_1409FD885
 * 00000001409FD5CF: mov     rbx, r13
 * 00000001409FD5D2: mov     [rbp+0BE0h+var_950], rax
 * 00000001409FD5D9: mov     r13d, eax
 * 00000001409FD5DC: mov     r15, cr8
 * 00000001409FD5E0: mov     [rbp+0BE0h+arg_8], r15
 * 00000001409FD5E7: mov     cr8, r8
 * 00000001409FD5EB: mov     rax, [rsi+308h]
 * 00000001409FD5F2: lea     rcx, [rbp+0BE0h+var_950]
 * 00000001409FD5F9: call    KeGuardDispatchICall
 * 00000001409FD5FE: mov     r14, rax
 * 00000001409FD601: test    rax, rax
 * 00000001409FD604: jz      loc_1409FD72C
 * 00000001409FD60A: mov     edi, 1
 * 00000001409FD60F: mov     rax, [rsi+208h]
 * 00000001409FD616: lea     rdx, [rbp+0BE0h+var_678]
 * 00000001409FD61D: mov     rcx, r14
 * 00000001409FD620: add     r13d, edi
 * 00000001409FD623: call    KeGuardDispatchICall
 * 00000001409FD628: test    rax, rax
 * 00000001409FD62B: jnz     loc_1409FD6FF
 * 00000001409FD631: test    [rsi+990h], r12d
 * 00000001409FD638: jz      short loc_1409FD681
 * 00000001409FD63A: mov     rcx, [rsi+0A80h]
 * 00000001409FD641: lea     edx, [rax+30h]
 * 00000001409FD644: lea     r8d, [rax+6]
 * 00000001409FD648: mov     rax, [rbx]
 * 00000001409FD64B: add     edx, 0FFFFFFF8h
 * 00000001409FD64E: mov     [rcx], rax
 * 00000001409FD651: add     rbx, 8
 * 00000001409FD655: add     rcx, 8
 * 00000001409FD659: sub     r8, rdi
 * 00000001409FD65C: jnz     short loc_1409FD648
 * 00000001409FD65E: test    edx, edx
 * 00000001409FD660: jz      short loc_1409FD67A
 * 00000001409FD662: mov     esi, 0FFFFFFFFh
 * 00000001409FD667: mov     al, [rbx]
 * 00000001409FD669: add     rbx, rdi
 * 00000001409FD66C: mov     [rcx], al
 * 00000001409FD66E: add     rcx, rdi
 * 00000001409FD671: add     edx, esi
 * 00000001409FD673: jnz     short loc_1409FD667
 * 00000001409FD675: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FD67A: mov     rbx, [rsi+0A80h]
 * 00000001409FD681: mov     [rbx+18h], r14
 * 00000001409FD685: mov     rax, [rsi+590h]
 * 00000001409FD68C: mov     [rax], rbx
 * 00000001409FD68F: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FD696: mov     rax, [rsi+590h]
 * 00000001409FD69D: mov     [rax+8], r14
 * 00000001409FD6A1: mov     dword ptr [rax+14h], 1000h
 * 00000001409FD6A8: xor     eax, eax
 * 00000001409FD6AA: cmp     [rsi+8F8h], eax
 * 00000001409FD6B0: jnz     short loc_1409FD6FF
 * 00000001409FD6B2: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD6BC: xor     edx, edx
 * 00000001409FD6BE: add     rax, rsi
 * 00000001409FD6C1: mov     rcx, rsi
 * 00000001409FD6C4: mov     [rsi+900h], rax
 * 00000001409FD6CB: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FD6D5: add     rax, rbx
 * 00000001409FD6D8: mov     [rsi+908h], rax
 * 00000001409FD6DF: movsxd  rax, dword ptr [rbx]
 * 00000001409FD6E2: mov     [rsi+910h], rax
 * 00000001409FD6E9: mov     qword ptr [rsi+918h], 4
 * 00000001409FD6F4: mov     [rsi+8F8h], edi
 * 00000001409FD6FA: call    $$b8
 * 00000001409FD6FF: mov     rax, [rsi+308h]
 * 00000001409FD706: lea     rcx, [rbp+0BE0h+var_950]
 * 00000001409FD70D: call    KeGuardDispatchICall
 * 00000001409FD712: mov     r14, rax
 * 00000001409FD715: test    rax, rax
 * 00000001409FD718: jnz     loc_1409FD60F
 * 00000001409FD71E: mov     r15, [rbp+0BE0h+arg_8]
 * 00000001409FD725: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FD72C: movzx   eax, r15b
 * 00000001409FD730: mov     cr8, rax
 * 00000001409FD734: jmp     loc_1409FD880
 * 00000001409FD739: mov     [rbp+0BE0h+var_948], rax
 * 00000001409FD740: lea     rcx, [rbp+0BE0h+var_948]
 * 00000001409FD747: mov     rbx, r13
 * 00000001409FD74A: mov     r13d, eax
 * 00000001409FD74D: mov     rax, [rsi+300h]
 * 00000001409FD754: call    KeGuardDispatchICall
 * 00000001409FD759: mov     r14, rax
 * 00000001409FD75C: test    rax, rax
 * 00000001409FD75F: jz      loc_1409FD880
 * 00000001409FD765: mov     edi, 1
 * 00000001409FD76A: mov     rax, [rsi+208h]
 * 00000001409FD771: lea     rdx, [rbp+0BE0h+var_670]
 * 00000001409FD778: mov     rcx, r14
 * 00000001409FD77B: add     r13d, edi
 * 00000001409FD77E: call    KeGuardDispatchICall
 * 00000001409FD783: test    rax, rax
 * 00000001409FD786: jnz     loc_1409FD85A
 * 00000001409FD78C: test    [rsi+990h], r12d
 * 00000001409FD793: jz      short loc_1409FD7DC
 * 00000001409FD795: mov     rcx, [rsi+0A80h]
 * 00000001409FD79C: lea     edx, [rax+30h]
 * 00000001409FD79F: lea     r8d, [rax+6]
 * 00000001409FD7A3: mov     rax, [rbx]
 * 00000001409FD7A6: add     edx, 0FFFFFFF8h
 * 00000001409FD7A9: mov     [rcx], rax
 * 00000001409FD7AC: add     rbx, 8
 * 00000001409FD7B0: add     rcx, 8
 * 00000001409FD7B4: sub     r8, rdi
 * 00000001409FD7B7: jnz     short loc_1409FD7A3
 * 00000001409FD7B9: test    edx, edx
 * 00000001409FD7BB: jz      short loc_1409FD7D5
 * 00000001409FD7BD: mov     esi, 0FFFFFFFFh
 * 00000001409FD7C2: mov     al, [rbx]
 * 00000001409FD7C4: add     rbx, rdi
 * 00000001409FD7C7: mov     [rcx], al
 * 00000001409FD7C9: add     rcx, rdi
 * 00000001409FD7CC: add     edx, esi
 * 00000001409FD7CE: jnz     short loc_1409FD7C2
 * 00000001409FD7D0: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FD7D5: mov     rbx, [rsi+0A80h]
 * 00000001409FD7DC: mov     [rbx+18h], r14
 * 00000001409FD7E0: mov     rax, [rsi+590h]
 * 00000001409FD7E7: mov     [rax], rbx
 * 00000001409FD7EA: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FD7F1: mov     rax, [rsi+590h]
 * 00000001409FD7F8: mov     [rax+8], r14
 * 00000001409FD7FC: mov     dword ptr [rax+14h], 1000h
 * 00000001409FD803: xor     eax, eax
 * 00000001409FD805: cmp     [rsi+8F8h], eax
 * 00000001409FD80B: jnz     short loc_1409FD85A
 * 00000001409FD80D: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD817: xor     edx, edx
 * 00000001409FD819: add     rax, rsi
 * 00000001409FD81C: mov     rcx, rsi
 * 00000001409FD81F: mov     [rsi+900h], rax
 * 00000001409FD826: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FD830: add     rax, rbx
 * 00000001409FD833: mov     [rsi+908h], rax
 * 00000001409FD83A: movsxd  rax, dword ptr [rbx]
 * 00000001409FD83D: mov     [rsi+910h], rax
 * 00000001409FD844: mov     qword ptr [rsi+918h], 3
 * 00000001409FD84F: mov     [rsi+8F8h], edi
 * 00000001409FD855: call    $$b8
 * 00000001409FD85A: mov     rax, [rsi+300h]
 * 00000001409FD861: lea     rcx, [rbp+0BE0h+var_948]
 * 00000001409FD868: call    KeGuardDispatchICall
 * 00000001409FD86D: mov     r14, rax
 * 00000001409FD870: test    rax, rax
 * 00000001409FD873: jnz     loc_1409FD76A
 * 00000001409FD879: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FD880: mov     edx, 1
 * 00000001409FD885: shl     r13d, 0Ch
 * 00000001409FD889: add     [rsi+828h], r13d
 * 00000001409FD890: add     [rsi+824h], edx
 * 00000001409FD896: mov     eax, [rsi+82Ch]
 * 00000001409FD89C: cmp     [rsi+828h], eax
 * 00000001409FD8A2: jge     short loc_1409FD8C0
 * 00000001409FD8A4: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FD8A9: mov     r8d, 0Ch
 * 00000001409FD8AF: mov     r12d, 40000000h
 * 00000001409FD8B5: jmp     loc_1409FB220
 * 00000001409FD8BA: mov     [rsi+824h], eax
 * 00000001409FD8C0: mov     [rsp+0CE0h+var_C80], rsi
 * 00000001409FD8C5: jmp     loc_1409F9318
 * 00000001409FD8CA: mov     edx, [r13+2Ch]
 * 00000001409FD8CE: lea     rcx, [rbp+0BE0h+var_310]
 * 00000001409FD8D5: mov     rax, [rsi+1A0h]
 * 00000001409FD8DC: mov     ebx, [r13+28h]
 * 00000001409FD8E0: call    KeGuardDispatchICall
 * 00000001409FD8E5: mov     rax, [rsi+1D0h]
 * 00000001409FD8EC: lea     rdx, [rbp+0BE0h+var_300]
 * 00000001409FD8F3: lea     rcx, [rbp+0BE0h+var_310]
 * 00000001409FD8FA: call    KeGuardDispatchICall
 * 00000001409FD8FF: cmp     dword ptr [rbp+0BE0h+arg_8], 26h ; '&'
 * 00000001409FD906: jz      short loc_1409FD916
 * 00000001409FD908: test    ebx, ebx
 * 00000001409FD90A: jz      short loc_1409FD911
 * 00000001409FD90C: mov     rbx, cr4
 * 00000001409FD90F: jmp     short loc_1409FD925
 * 00000001409FD911: mov     rbx, cr0
 * 00000001409FD914: jmp     short loc_1409FD925
 * 00000001409FD916: xor     ecx, ecx
 * 00000001409FD918: xgetbv
 * 00000001409FD91B: shl     rdx, 20h
 * 00000001409FD91F: or      rdx, rax
 * 00000001409FD922: mov     rbx, rdx
 * 00000001409FD925: mov     rax, [rsi+198h]
 * 00000001409FD92C: lea     rcx, [rbp+0BE0h+var_300]
 * 00000001409FD933: call    KeGuardDispatchICall
 * 00000001409FD938: mov     r8, [r13+18h]
 * 00000001409FD93C: xor     r15d, r15d
 * 00000001409FD93F: mov     rcx, [r13+20h]
 * 00000001409FD943: and     r8, rbx
 * 00000001409FD946: cmp     r8, rcx
 * 00000001409FD949: jz      loc_1409F931B
 * 00000001409FD94F: mov     eax, [r13+28h]
 * 00000001409FD953: mov     edx, [r13+2Ch]
 * 00000001409FD957: shl     rdx, 20h
 * 00000001409FD95B: or      rdx, rax
 * 00000001409FD95E: mov     eax, [rsi+8F8h]
 * 00000001409FD964: test    eax, eax
 * 00000001409FD966: jnz     loc_1409F931B
 * 00000001409FD96C: mov     rax, [rsi+590h]
 * 00000001409FD973: xor     rcx, r8
 * 00000001409FD976: mov     [rax+18h], rcx
 * 00000001409FD97A: mov     eax, [rsi+8F8h]
 * 00000001409FD980: test    eax, eax
 * 00000001409FD982: jnz     loc_1409F931B
 * 00000001409FD988: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FD992: add     rax, rsi
 * 00000001409FD995: mov     [rsi+900h], rax
 * 00000001409FD99C: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FD9A6: add     rax, r13
 * 00000001409FD9A9: mov     [rsi+908h], rax
 * 00000001409FD9B0: movsxd  rax, dword ptr [r13+0]
 * 00000001409FD9B4: mov     [rsi+910h], rax
 * 00000001409FD9BB: mov     [rsi+918h], rdx
 * 00000001409FD9C2: jmp     loc_1409F96E7
 * 00000001409FD9C7: cmp     dword ptr [rsi+958h], 0Bh
 * 00000001409FD9CE: jnz     loc_1409F9318
 * 00000001409FD9D4: add     dword ptr [rsi+828h], 100h
 * 00000001409FD9DE: mov     r15, [rsi+588h]
 * 00000001409FD9E5: mov     rax, [rsi+2D8h]
 * 00000001409FD9EC: mov     rcx, r15
 * 00000001409FD9EF: call    KeGuardDispatchICall
 * 00000001409FD9F4: mov     r14, rax
 * 00000001409FD9F7: test    rax, rax
 * 00000001409FD9FA: jz      loc_1409F9318
 * 00000001409FDA00: mov     rax, [rsi+2E0h]
 * 00000001409FDA07: mov     rcx, r14
 * 00000001409FDA0A: call    KeGuardDispatchICall
 * 00000001409FDA0F: mov     rbx, rax
 * 00000001409FDA12: xor     edx, edx
 * 00000001409FDA14: mov     rax, [r13+18h]
 * 00000001409FDA18: test    rax, rax
 * 00000001409FDA1B: jz      short loc_1409FDA84
 * 00000001409FDA1D: cmp     rax, rbx
 * 00000001409FDA20: jz      loc_1409FDB04
 * 00000001409FDA26: xor     eax, eax
 * 00000001409FDA28: cmp     [rsi+8F8h], eax
 * 00000001409FDA2E: jnz     loc_1409FDB04
 * 00000001409FDA34: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FDA3E: mov     rcx, rsi
 * 00000001409FDA41: add     rax, rsi
 * 00000001409FDA44: mov     [rsi+900h], rax
 * 00000001409FDA4B: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FDA55: add     rax, r13
 * 00000001409FDA58: mov     [rsi+908h], rax
 * 00000001409FDA5F: movsxd  rax, dword ptr [r13+0]
 * 00000001409FDA63: mov     [rsi+910h], rax
 * 00000001409FDA6A: lea     eax, [rdx+1]
 * 00000001409FDA6D: mov     [rsi+918h], rbx
 * 00000001409FDA74: mov     [rsi+8F8h], eax
 * 00000001409FDA7A: call    $$b8
 * 00000001409FDA7F: jmp     loc_1409FDB04
 * 00000001409FDA84: mov     eax, [rsi+974h]
 * 00000001409FDA8A: mov     rcx, [rsi+978h]
 * 00000001409FDA91: test    rax, rax
 * 00000001409FDA94: jz      short loc_1409FDAA7
 * 00000001409FDA96: lea     rdx, [rax-1]
 * 00000001409FDA9A: add     rdx, rcx
 * 00000001409FDA9D: cmp     rbx, rcx
 * 00000001409FDAA0: jb      short loc_1409FDAA7
 * 00000001409FDAA2: cmp     rbx, rdx
 * 00000001409FDAA5: jbe     short loc_1409FDB00
 * 00000001409FDAA7: xor     eax, eax
 * 00000001409FDAA9: cmp     [rsi+8F8h], eax
 * 00000001409FDAAF: jnz     short loc_1409FDB00
 * 00000001409FDAB1: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FDABB: xor     edx, edx
 * 00000001409FDABD: add     rax, rsi
 * 00000001409FDAC0: mov     rcx, rsi
 * 00000001409FDAC3: mov     [rsi+900h], rax
 * 00000001409FDACA: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FDAD4: add     rax, r13
 * 00000001409FDAD7: mov     [rsi+908h], rax
 * 00000001409FDADE: movsxd  rax, dword ptr [r13+0]
 * 00000001409FDAE2: mov     [rsi+910h], rax
 * 00000001409FDAE9: mov     eax, 1
 * 00000001409FDAEE: mov     [rsi+918h], rbx
 * 00000001409FDAF5: mov     [rsi+8F8h], eax
 * 00000001409FDAFB: call    $$b8
 * 00000001409FDB00: mov     [r13+18h], rbx
 * 00000001409FDB04: mov     rax, [rsi+2E8h]
 * 00000001409FDB0B: mov     rdx, r14
 * 00000001409FDB0E: mov     rcx, r15
 * 00000001409FDB11: call    KeGuardDispatchICall
 * 00000001409FDB16: jmp     loc_1409F9318
 * 00000001409FDB1B: jnz     short loc_1409FDB6D
 * 00000001409FDB1D: xor     eax, eax
 * 00000001409FDB1F: cmp     [rsi+980h], rax
 * 00000001409FDB26: jz      loc_1409F9312
 * 00000001409FDB2C: mov     ecx, [rsi+994h]
 * 00000001409FDB32: mov     eax, ecx
 * 00000001409FDB34: shr     eax, 2
 * 00000001409FDB37: and     eax, edx
 * 00000001409FDB39: jnz     loc_1409F93EA
 * 00000001409FDB3F: xor     edx, edx
 * 00000001409FDB41: cmp     [rsi+824h], edx
 * 00000001409FDB47: lea     edx, [rax+1]
 * 00000001409FDB4A: jnz     short loc_1409FDB60
 * 00000001409FDB4C: mov     eax, ecx
 * 00000001409FDB4E: shl     eax, 3
 * 00000001409FDB51: xor     eax, ecx
 * 00000001409FDB53: and     eax, 20h
 * 00000001409FDB56: xor     eax, ecx
 * 00000001409FDB58: mov     [rsi+994h], eax
 * 00000001409FDB5E: jmp     short loc_1409FDB6D
 * 00000001409FDB60: shr     ecx, 5
 * 00000001409FDB63: and     ecx, edx
 * 00000001409FDB65: cmp     eax, ecx
 * 00000001409FDB67: jnz     loc_1409F93EA
 * 00000001409FDB6D: mov     r14, [r13+8]
 * 00000001409FDB71: mov     r8d, [r13+10h]
 * 00000001409FDB75: mov     r9, r14
 * 00000001409FDB78: add     [rsi+828h], r8d
 * 00000001409FDB7F: mov     rax, r14
 * 00000001409FDB82: mov     r10d, [rsi+814h]
 * 00000001409FDB89: mov     r15, [rsi+818h]
 * 00000001409FDB90: lea     rcx, [r14+r8]
 * 00000001409FDB94: cmp     r14, rcx
 * 00000001409FDB97: jnb     short loc_1409FDBAA
 * 00000001409FDB99: mov     r11d, 40h ; '@'
 * 00000001409FDB9F: prefetchnta byte ptr [rax]
 * 00000001409FDBA2: add     rax, r11
 * 00000001409FDBA5: cmp     rax, rcx
 * 00000001409FDBA8: jb      short loc_1409FDB9F
 * 00000001409FDBAA: mov     r11d, r8d
 * 00000001409FDBAD: mov     rbx, r15
 * 00000001409FDBB0: shr     r11d, 7
 * 00000001409FDBB4: mov     r12d, 0FFFFFFFFh
 * 00000001409FDBBA: test    r11d, r11d
 * 00000001409FDBBD: jz      short loc_1409FDC2B
 * 00000001409FDBBF: mov     rdi, 7010008004002001h
 * 00000001409FDBC9: mov     eax, 8
 * 00000001409FDBCE: xor     rbx, [r9]
 * 00000001409FDBD1: mov     ecx, r10d
 * 00000001409FDBD4: rol     rbx, cl
 * 00000001409FDBD7: xor     rbx, [r9+8]
 * 00000001409FDBDB: add     r9, 10h
 * 00000001409FDBDF: rol     rbx, cl
 * 00000001409FDBE2: sub     rax, rdx
 * 00000001409FDBE5: jnz     short loc_1409FDBCE
 * 00000001409FDBE7: mov     rcx, r9
 * 00000001409FDBEA: sub     rcx, r14
 * 00000001409FDBED: xor     rcx, r15
 * 00000001409FDBF0: mov     rax, rcx
 * 00000001409FDBF3: rol     rax, 11h
 * 00000001409FDBF7: xor     rcx, rax
 * 00000001409FDBFA: mov     rax, rdi
 * 00000001409FDBFD: mul     rcx
 * 00000001409FDC00: xor     r10d, edx
 * 00000001409FDC03: mov     [rbp+0BE0h+var_668], rdx
 * 00000001409FDC0A: xor     r10d, eax
 * 00000001409FDC0D: mov     edx, 1
 * 00000001409FDC12: and     r10d, 3Fh
 * 00000001409FDC16: cmovz   r10d, edx
 * 00000001409FDC1A: add     r11d, r12d
 * 00000001409FDC1D: jnz     short loc_1409FDBC9
 * 00000001409FDC1F: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FDC24: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FDC2B: and     r8d, 7Fh
 * 00000001409FDC2F: cmp     r8d, 8
 * 00000001409FDC33: jb      short loc_1409FDC52
 * 00000001409FDC35: mov     eax, r8d
 * 00000001409FDC38: shr     rax, 3
 * 00000001409FDC3C: xor     rbx, [r9]
 * 00000001409FDC3F: mov     ecx, r10d
 * 00000001409FDC42: rol     rbx, cl
 * 00000001409FDC45: add     r9, 8
 * 00000001409FDC49: add     r8d, 0FFFFFFF8h
 * 00000001409FDC4D: sub     rax, rdx
 * 00000001409FDC50: jnz     short loc_1409FDC3C
 * 00000001409FDC52: test    r8d, r8d
 * 00000001409FDC55: jz      short loc_1409FDC6C
 * 00000001409FDC57: movzx   eax, byte ptr [r9]
 * 00000001409FDC5B: mov     ecx, r10d
 * 00000001409FDC5E: xor     rbx, rax
 * 00000001409FDC61: add     r9, rdx
 * 00000001409FDC64: rol     rbx, cl
 * 00000001409FDC67: add     r8d, r12d
 * 00000001409FDC6A: jnz     short loc_1409FDC57
 * 00000001409FDC6C: mov     rax, rbx
 * 00000001409FDC6F: shr     rax, 1Fh
 * 00000001409FDC73: xor     r15d, r15d
 * 00000001409FDC76: jmp     short loc_1409FDC7E
 * 00000001409FDC78: xor     ebx, eax
 * 00000001409FDC7A: shr     rax, 1Fh
 * 00000001409FDC7E: test    rax, rax
 * 00000001409FDC81: jnz     short loc_1409FDC78
 * 00000001409FDC83: btr     ebx, 1Fh
 * 00000001409FDC87: cmp     ebx, [r13+14h]
 * 00000001409FDC8B: jz      loc_1409FDD6B
 * 00000001409FDC91: lock or [rsp+0CE0h+var_CE0], eax
 * 00000001409FDC95: mov     eax, [r13+18h]
 * 00000001409FDC99: test    dl, al
 * 00000001409FDC9B: jz      short loc_1409FDCAE
 * 00000001409FDC9D: mov     rax, [rsi+580h]
 * 00000001409FDCA4: mov     cl, [rax]
 * 00000001409FDCA6: test    cl, cl
 * 00000001409FDCA8: jnz     loc_1409FDD6B
 * 00000001409FDCAE: mov     ecx, [r13+10h]
 * 00000001409FDCB2: mov     rdx, [r13+8]
 * 00000001409FDCB6: test    rcx, rcx
 * 00000001409FDCB9: jz      loc_1409FDE0A
 * 00000001409FDCBF: mov     eax, [rsi+994h]
 * 00000001409FDCC5: mov     r8d, 40h ; '@'
 * 00000001409FDCCB: test    r8b, al
 * 00000001409FDCCE: jz      loc_1409FDE0A
 * 00000001409FDCD4: mov     r12, cr8
 * 00000001409FDCD8: lea     eax, [r8-3Eh]
 * 00000001409FDCDC: mov     cr8, rax
 * 00000001409FDCE0: mov     r14, rdx
 * 00000001409FDCE3: lea     rax, [rcx-1]
 * 00000001409FDCE7: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FDCEE: add     rax, rdx
 * 00000001409FDCF1: or      rax, 0FFFh
 * 00000001409FDCF7: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FDCFE: lea     r13, [r14-1]
 * 00000001409FDD02: movzx   r15d, r12b
 * 00000001409FDD06: mov     rax, [rsi+468h]
 * 00000001409FDD0D: xor     edx, edx
 * 00000001409FDD0F: mov     rcx, r14
 * 00000001409FDD12: call    KeGuardDispatchICall
 * 00000001409FDD17: cmp     eax, 0C000022Dh
 * 00000001409FDD1C: jnz     short loc_1409FDD42
 * 00000001409FDD1E: mov     eax, 1
 * 00000001409FDD23: cmp     r12b, al
 * 00000001409FDD26: ja      short loc_1409FDD4A
 * 00000001409FDD28: movzx   r15d, r12b
 * 00000001409FDD2C: mov     cr8, r15
 * 00000001409FDD30: mov     al, [r14]
 * 00000001409FDD33: mov     rax, cr8
 * 00000001409FDD37: mov     eax, 2
 * 00000001409FDD3C: mov     cr8, rax
 * 00000001409FDD40: jmp     short loc_1409FDD06
 * 00000001409FDD42: test    eax, eax
 * 00000001409FDD44: js      loc_1409FDE01
 * 00000001409FDD4A: mov     r11d, 1000h
 * 00000001409FDD50: add     r14, r11
 * 00000001409FDD53: add     r13, r11
 * 00000001409FDD56: cmp     r13, [rbp+0BE0h+arg_8]
 * 00000001409FDD5D: jnz     short loc_1409FDD02
 * 00000001409FDD5F: mov     cr8, r15
 * 00000001409FDD63: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FDD68: xor     r15d, r15d
 * 00000001409FDD6B: mov     ebx, 1
 * 00000001409FDD70: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FDD7A: jz      loc_1409F931B
 * 00000001409FDD80: mov     r8d, [r13+10h]
 * 00000001409FDD84: test    r8d, r8d
 * 00000001409FDD87: jz      loc_1409F9318
 * 00000001409FDD8D: mov     rdx, [r13+8]
 * 00000001409FDD91: lea     r9, [rbp+0BE0h+var_2F0]
 * 00000001409FDD98: mov     rcx, rsi
 * 00000001409FDD9B: call    sub_1403EA48C
 * 00000001409FDDA0: mov     r8d, 10h
 * 00000001409FDDA6: lea     r9, [r13+1Ch]
 * 00000001409FDDAA: lea     r10, [rbp+0BE0h+var_2F0]
 * 00000001409FDDB1: mov     rcx, [r10]
 * 00000001409FDDB4: add     r10, 8
 * 00000001409FDDB8: mov     rax, [r9]
 * 00000001409FDDBB: add     r9, 8
 * 00000001409FDDBF: cmp     rcx, rax
 * 00000001409FDDC2: jnz     loc_1409FDE91
 * 00000001409FDDC8: add     r8d, 0FFFFFFF8h
 * 00000001409FDDCC: cmp     r8d, 8
 * 00000001409FDDD0: jnb     short loc_1409FDDB1
 * 00000001409FDDD2: test    r8d, r8d
 * 00000001409FDDD5: jz      loc_1409FDFBE
 * 00000001409FDDDB: movzx   edx, byte ptr [r10]
 * 00000001409FDDDF: add     r10, rbx
 * 00000001409FDDE2: movzx   eax, byte ptr [r9]
 * 00000001409FDDE6: add     r9, rbx
 * 00000001409FDDE9: cmp     rdx, rax
 * 00000001409FDDEC: jnz     loc_1409FDE91
 * 00000001409FDDF2: mov     eax, 0FFFFFFFFh
 * 00000001409FDDF7: add     r8d, eax
 * 00000001409FDDFA: jnz     short loc_1409FDDDB
 * 00000001409FDDFC: jmp     loc_1409FDFBE
 * 00000001409FDE01: mov     cr8, r15
 * 00000001409FDE05: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FDE0A: mov     eax, [rsi+8F8h]
 * 00000001409FDE10: xor     r15d, r15d
 * 00000001409FDE13: mov     ecx, [r13+14h]
 * 00000001409FDE17: test    eax, eax
 * 00000001409FDE19: jnz     short loc_1409FDE31
 * 00000001409FDE1B: mov     eax, ebx
 * 00000001409FDE1D: xor     rcx, rax
 * 00000001409FDE20: mov     rax, [rsi+590h]
 * 00000001409FDE27: mov     [rax+18h], rcx
 * 00000001409FDE2B: mov     eax, [rsi+8F8h]
 * 00000001409FDE31: mov     rcx, [r13+8]
 * 00000001409FDE35: mov     ebx, 1
 * 00000001409FDE3A: test    eax, eax
 * 00000001409FDE3C: jnz     loc_1409FDD70
 * 00000001409FDE42: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FDE4C: xor     edx, edx
 * 00000001409FDE4E: add     rax, rsi
 * 00000001409FDE51: mov     [rsi+900h], rax
 * 00000001409FDE58: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FDE62: add     rax, r13
 * 00000001409FDE65: mov     [rsi+908h], rax
 * 00000001409FDE6C: movsxd  rax, dword ptr [r13+0]
 * 00000001409FDE70: mov     [rsi+910h], rax
 * 00000001409FDE77: mov     [rsi+918h], rcx
 * 00000001409FDE7E: mov     rcx, rsi
 * 00000001409FDE81: mov     [rsi+8F8h], ebx
 * 00000001409FDE87: call    $$b8
 * 00000001409FDE8C: jmp     loc_1409FDD70
 * 00000001409FDE91: xor     eax, eax
 * 00000001409FDE93: lock or [rsp+0CE0h+var_CE0], eax
 * 00000001409FDE97: mov     eax, [r13+18h]
 * 00000001409FDE9B: test    bl, al
 * 00000001409FDE9D: jz      short loc_1409FDEB0
 * 00000001409FDE9F: mov     rax, [rsi+580h]
 * 00000001409FDEA6: mov     cl, [rax]
 * 00000001409FDEA8: test    cl, cl
 * 00000001409FDEAA: jnz     loc_1409FDFBE
 * 00000001409FDEB0: mov     edx, [r13+10h]
 * 00000001409FDEB4: mov     rcx, [r13+8]
 * 00000001409FDEB8: test    rdx, rdx
 * 00000001409FDEBB: jz      loc_1409FDF6A
 * 00000001409FDEC1: mov     eax, [rsi+994h]
 * 00000001409FDEC7: mov     r8d, 40h ; '@'
 * 00000001409FDECD: test    r8b, al
 * 00000001409FDED0: jz      loc_1409FDF6A
 * 00000001409FDED6: mov     r15, cr8
 * 00000001409FDEDA: lea     eax, [r8-3Eh]
 * 00000001409FDEDE: mov     cr8, rax
 * 00000001409FDEE2: mov     rbx, rcx
 * 00000001409FDEE5: lea     r13, [rdx-1]
 * 00000001409FDEE9: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001409FDEF0: add     r13, rcx
 * 00000001409FDEF3: or      r13, 0FFFh
 * 00000001409FDEFA: lea     r12, [rbx-1]
 * 00000001409FDEFE: movzx   r14d, r15b
 * 00000001409FDF02: mov     rax, [rsi+468h]
 * 00000001409FDF09: xor     edx, edx
 * 00000001409FDF0B: mov     rcx, rbx
 * 00000001409FDF0E: call    KeGuardDispatchICall
 * 00000001409FDF13: cmp     eax, 0C000022Dh
 * 00000001409FDF18: jnz     short loc_1409FDF3D
 * 00000001409FDF1A: mov     eax, 1
 * 00000001409FDF1F: cmp     r15b, al
 * 00000001409FDF22: ja      short loc_1409FDF41
 * 00000001409FDF24: movzx   r14d, r15b
 * 00000001409FDF28: mov     cr8, r14
 * 00000001409FDF2C: mov     al, [rbx]
 * 00000001409FDF2E: mov     rax, cr8
 * 00000001409FDF32: mov     eax, 2
 * 00000001409FDF37: mov     cr8, rax
 * 00000001409FDF3B: jmp     short loc_1409FDF02
 * 00000001409FDF3D: test    eax, eax
 * 00000001409FDF3F: js      short loc_1409FDF58
 * 00000001409FDF41: mov     r11d, 1000h
 * 00000001409FDF47: add     rbx, r11
 * 00000001409FDF4A: add     r12, r11
 * 00000001409FDF4D: cmp     r12, r13
 * 00000001409FDF50: jnz     short loc_1409FDEFE
 * 00000001409FDF52: mov     cr8, r14
 * 00000001409FDF56: jmp     short loc_1409FDFBE
 * 00000001409FDF58: mov     cr8, r14
 * 00000001409FDF5C: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FDF61: mov     ebx, 1
 * 00000001409FDF66: mov     rcx, [r13+8]
 * 00000001409FDF6A: xor     eax, eax
 * 00000001409FDF6C: cmp     [rsi+8F8h], eax
 * 00000001409FDF72: jnz     short loc_1409FDFBE
 * 00000001409FDF74: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FDF7E: xor     edx, edx
 * 00000001409FDF80: add     rax, rsi
 * 00000001409FDF83: mov     [rsi+900h], rax
 * 00000001409FDF8A: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FDF94: add     rax, r13
 * 00000001409FDF97: mov     [rsi+908h], rax
 * 00000001409FDF9E: movsxd  rax, dword ptr [r13+0]
 * 00000001409FDFA2: mov     [rsi+910h], rax
 * 00000001409FDFA9: mov     [rsi+918h], rcx
 * 00000001409FDFB0: mov     rcx, rsi
 * 00000001409FDFB3: mov     [rsi+8F8h], ebx
 * 00000001409FDFB9: call    $$b8
 * 00000001409FDFBE: mov     rax, [rsp+0CE0h+var_C90]
 * 00000001409FDFC3: mov     eax, [rax+10h]
 * 00000001409FDFC6: shl     eax, 4
 * 00000001409FDFC9: jmp     loc_1409FA049
 * 00000001409FDFCE: mov     r8d, [r13+10h]
 * 00000001409FDFD2: test    r8d, r8d
 * 00000001409FDFD5: jnz     loc_1409FE5B3
 * 00000001409FDFDB: lea     rax, [r13+30h]
 * 00000001409FDFDF: xor     r9d, r9d
 * 00000001409FDFE2: mov     [rbp+0BE0h+var_860], rax
 * 00000001409FDFE9: lea     rcx, [rbp+0BE0h+var_868]
 * 00000001409FDFF0: movzx   eax, word ptr [r13+28h]
 * 00000001409FDFF5: xor     r8d, r8d
 * 00000001409FDFF8: mov     [rbp+0BE0h+var_868], ax
 * 00000001409FDFFF: xor     edx, edx
 * 00000001409FE001: mov     [rbp+0BE0h+var_866], ax
 * 00000001409FE008: lea     rax, [rbp+0BE0h+var_B30]
 * 00000001409FE00F: mov     [rsp+0CE0h+var_CA8], rax
 * 00000001409FE014: xor     eax, eax
 * 00000001409FE016: mov     [rsp+0CE0h+var_CB0], rax
 * 00000001409FE01B: mov     byte ptr [rsp+0CE0h+var_CB8], al
 * 00000001409FE01F: mov     rax, [rsi+510h]
 * 00000001409FE026: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 00000001409FE02B: mov     rax, [rsi+1E8h]
 * 00000001409FE032: call    KeGuardDispatchICall
 * 00000001409FE037: test    eax, eax
 * 00000001409FE039: js      loc_1409F9318
 * 00000001409FE03F: mov     rax, [rbp+0BE0h+var_B30]
 * 00000001409FE046: mov     ecx, [rax+10h]
 * 00000001409FE049: mov     eax, 10h
 * 00000001409FE04E: test    al, cl
 * 00000001409FE050: jnz     short loc_1409FE065
 * 00000001409FE052: mov     rax, [rsi+1E0h]
 * 00000001409FE059: mov     rcx, [rbp+0BE0h+var_B30]
 * 00000001409FE060: jmp     loc_1409FB1AB
 * 00000001409FE065: mov     rcx, [rsi+1E8h]
 * 00000001409FE06C: lea     rdx, [rbp+0BE0h+var_170]
 * 00000001409FE073: mov     rax, [rsi+200h]
 * 00000001409FE07A: call    KeGuardDispatchICall
 * 00000001409FE07F: mov     rcx, [rbp+0BE0h+var_168]
 * 00000001409FE086: test    rcx, rcx
 * 00000001409FE089: jz      short loc_1409FE0AB
 * 00000001409FE08B: mov     rax, [rsi+1F8h]
 * 00000001409FE092: mov     rbx, rcx
 * 00000001409FE095: mov     [rbp+0BE0h+var_C30], rcx
 * 00000001409FE099: call    KeGuardDispatchICall
 * 00000001409FE09E: test    rax, rax
 * 00000001409FE0A1: jz      short loc_1409FE0AB
 * 00000001409FE0A3: mov     r15d, [rax+50h]
 * 00000001409FE0A7: mov     [rbp+0BE0h+var_C28], r15d
 * 00000001409FE0AB: mov     rcx, [r13+18h]
 * 00000001409FE0AF: lea     rdx, [rbp+0BE0h+var_158]
 * 00000001409FE0B6: mov     rax, [rsi+200h]
 * 00000001409FE0BD: call    KeGuardDispatchICall
 * 00000001409FE0C2: mov     rcx, [rbp+0BE0h+var_150]
 * 00000001409FE0C9: test    rcx, rcx
 * 00000001409FE0CC: jz      short loc_1409FE0F0
 * 00000001409FE0CE: mov     rax, [rsi+1F8h]
 * 00000001409FE0D5: mov     r14, rcx
 * 00000001409FE0D8: mov     [rbp+0BE0h+var_C40], rcx
 * 00000001409FE0DC: call    KeGuardDispatchICall
 * 00000001409FE0E1: test    rax, rax
 * 00000001409FE0E4: jz      short loc_1409FE0F0
 * 00000001409FE0E6: mov     r10d, [rax+50h]
 * 00000001409FE0EA: mov     [rbp+0BE0h+var_BA0], r10d
 * 00000001409FE0EE: jmp     short loc_1409FE0F4
 * 00000001409FE0F0: mov     r10d, [rbp+0BE0h+var_BA0]
 * 00000001409FE0F4: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FE0FE: jnz     short loc_1409FE117
 * 00000001409FE100: mov     rax, [rbp+0BE0h+var_B30]
 * 00000001409FE107: add     rax, 70h ; 'p'
 * 00000001409FE10B: mov     [r13+8], rax
 * 00000001409FE10F: mov     dword ptr [r13+10h], 0E0h
 * 00000001409FE117: mov     rcx, [rbp+0BE0h+var_B30]
 * 00000001409FE11E: xor     eax, eax
 * 00000001409FE120: mov     r12d, r15d
 * 00000001409FE123: mov     dl, al
 * 00000001409FE125: mov     [rbp+0BE0h+arg_8], r12
 * 00000001409FE12C: lea     r11d, [rax+1]
 * 00000001409FE130: movzx   eax, dl
 * 00000001409FE133: mov     r9, [rcx+rax*8+70h]
 * 00000001409FE138: test    r12, r12
 * 00000001409FE13B: jz      short loc_1409FE152
 * 00000001409FE13D: lea     rax, [rbx-1]
 * 00000001409FE141: add     rax, r12
 * 00000001409FE144: cmp     r9, rbx
 * 00000001409FE147: jb      short loc_1409FE152
 * 00000001409FE149: cmp     r9, rax
 * 00000001409FE14C: jbe     loc_1409FE237
 * 00000001409FE152: xor     r15d, r15d
 * 00000001409FE155: mov     eax, r10d
 * 00000001409FE158: test    r10d, r10d
 * 00000001409FE15B: jz      short loc_1409FE172
 * 00000001409FE15D: lea     r8, [r14-1]
 * 00000001409FE161: add     r8, rax
 * 00000001409FE164: cmp     r9, r14
 * 00000001409FE167: jb      short loc_1409FE172
 * 00000001409FE169: cmp     r9, r8
 * 00000001409FE16C: jbe     loc_1409FE23A
 * 00000001409FE172: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FE17C: jz      short loc_1409FE1CA
 * 00000001409FE17E: mov     rcx, [rsi+0A80h]
 * 00000001409FE185: mov     edx, 30h ; '0'
 * 00000001409FE18A: lea     r8d, [rdx-2Ah]
 * 00000001409FE18E: mov     rax, [r13+0]
 * 00000001409FE192: add     edx, 0FFFFFFF8h
 * 00000001409FE195: mov     [rcx], rax
 * 00000001409FE198: add     r13, 8
 * 00000001409FE19C: add     rcx, 8
 * 00000001409FE1A0: sub     r8, r11
 * 00000001409FE1A3: jnz     short loc_1409FE18E
 * 00000001409FE1A5: test    edx, edx
 * 00000001409FE1A7: jz      short loc_1409FE1C3
 * 00000001409FE1A9: mov     esi, 0FFFFFFFFh
 * 00000001409FE1AE: mov     al, [r13+0]
 * 00000001409FE1B2: add     r13, r11
 * 00000001409FE1B5: mov     [rcx], al
 * 00000001409FE1B7: add     rcx, r11
 * 00000001409FE1BA: add     edx, esi
 * 00000001409FE1BC: jnz     short loc_1409FE1AE
 * 00000001409FE1BE: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FE1C3: mov     r13, [rsi+0A80h]
 * 00000001409FE1CA: mov     [r13+20h], r9
 * 00000001409FE1CE: mov     rax, [rsi+590h]
 * 00000001409FE1D5: mov     [rax], r13
 * 00000001409FE1D8: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FE1DF: xor     eax, eax
 * 00000001409FE1E1: mov     rcx, [r13+8]
 * 00000001409FE1E5: cmp     [rsi+8F8h], eax
 * 00000001409FE1EB: jnz     loc_1409F931B
 * 00000001409FE1F1: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FE1FB: add     rax, rsi
 * 00000001409FE1FE: mov     [rsi+900h], rax
 * 00000001409FE205: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FE20F: add     rax, r13
 * 00000001409FE212: mov     [rsi+908h], rax
 * 00000001409FE219: movsxd  rax, dword ptr [r13+0]
 * 00000001409FE21D: mov     [rsi+910h], rax
 * 00000001409FE224: mov     [rsi+918h], rcx
 * 00000001409FE22B: mov     [rsi+8F8h], r11d
 * 00000001409FE232: jmp     loc_1409F96F2
 * 00000001409FE237: xor     r15d, r15d
 * 00000001409FE23A: add     dl, r11b
 * 00000001409FE23D: cmp     dl, 1Ch
 * 00000001409FE240: jb      loc_1409FE130
 * 00000001409FE246: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FE250: jnz     loc_1409F9E45
 * 00000001409FE256: mov     r14, [r13+8]
 * 00000001409FE25A: mov     r9d, [r13+10h]
 * 00000001409FE25E: mov     r10, r14
 * 00000001409FE261: add     [rsi+828h], r9d
 * 00000001409FE268: mov     rax, r14
 * 00000001409FE26B: mov     ebx, [rsi+814h]
 * 00000001409FE271: mov     r15, [rsi+818h]
 * 00000001409FE278: lea     rcx, [r14+r9]
 * 00000001409FE27C: cmp     r14, rcx
 * 00000001409FE27F: jnb     short loc_1409FE291
 * 00000001409FE281: mov     edx, 40h ; '@'
 * 00000001409FE286: prefetchnta byte ptr [rax]
 * 00000001409FE289: add     rax, rdx
 * 00000001409FE28C: cmp     rax, rcx
 * 00000001409FE28F: jb      short loc_1409FE286
 * 00000001409FE291: mov     r11d, r9d
 * 00000001409FE294: mov     r8, r15
 * 00000001409FE297: shr     r11d, 7
 * 00000001409FE29B: mov     edx, 1
 * 00000001409FE2A0: test    r11d, r11d
 * 00000001409FE2A3: jz      short loc_1409FE318
 * 00000001409FE2A5: mov     edi, 0FFFFFFFFh
 * 00000001409FE2AA: mov     r12, 7010008004002001h
 * 00000001409FE2B4: mov     eax, 8
 * 00000001409FE2B9: xor     r8, [r10]
 * 00000001409FE2BC: mov     ecx, ebx
 * 00000001409FE2BE: rol     r8, cl
 * 00000001409FE2C1: xor     r8, [r10+8]
 * 00000001409FE2C5: add     r10, 10h
 * 00000001409FE2C9: rol     r8, cl
 * 00000001409FE2CC: sub     rax, rdx
 * 00000001409FE2CF: jnz     short loc_1409FE2B9
 * 00000001409FE2D1: mov     rcx, r10
 * 00000001409FE2D4: sub     rcx, r14
 * 00000001409FE2D7: xor     rcx, r15
 * 00000001409FE2DA: mov     rax, rcx
 * 00000001409FE2DD: rol     rax, 11h
 * 00000001409FE2E1: xor     rcx, rax
 * 00000001409FE2E4: mov     rax, r12
 * 00000001409FE2E7: mul     rcx
 * 00000001409FE2EA: xor     ebx, edx
 * 00000001409FE2EC: mov     [rbp+0BE0h+var_660], rdx
 * 00000001409FE2F3: xor     ebx, eax
 * 00000001409FE2F5: mov     edx, 1
 * 00000001409FE2FA: and     ebx, 3Fh
 * 00000001409FE2FD: cmovz   ebx, edx
 * 00000001409FE300: add     r11d, edi
 * 00000001409FE303: jnz     short loc_1409FE2B4
 * 00000001409FE305: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FE30A: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FE311: mov     r12, [rbp+0BE0h+arg_8]
 * 00000001409FE318: and     r9d, 7Fh
 * 00000001409FE31C: cmp     r9d, 8
 * 00000001409FE320: jb      short loc_1409FE33E
 * 00000001409FE322: mov     eax, r9d
 * 00000001409FE325: shr     rax, 3
 * 00000001409FE329: xor     r8, [r10]
 * 00000001409FE32C: mov     ecx, ebx
 * 00000001409FE32E: rol     r8, cl
 * 00000001409FE331: add     r10, 8
 * 00000001409FE335: add     r9d, 0FFFFFFF8h
 * 00000001409FE339: sub     rax, rdx
 * 00000001409FE33C: jnz     short loc_1409FE329
 * 00000001409FE33E: test    r9d, r9d
 * 00000001409FE341: jz      short loc_1409FE361
 * 00000001409FE343: mov     esi, 0FFFFFFFFh
 * 00000001409FE348: movzx   eax, byte ptr [r10]
 * 00000001409FE34C: mov     ecx, ebx
 * 00000001409FE34E: xor     r8, rax
 * 00000001409FE351: add     r10, rdx
 * 00000001409FE354: rol     r8, cl
 * 00000001409FE357: add     r9d, esi
 * 00000001409FE35A: jnz     short loc_1409FE348
 * 00000001409FE35C: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FE361: mov     rax, r8
 * 00000001409FE364: jmp     short loc_1409FE369
 * 00000001409FE366: xor     r8d, eax
 * 00000001409FE369: shr     rax, 1Fh
 * 00000001409FE36D: test    rax, rax
 * 00000001409FE370: jnz     short loc_1409FE366
 * 00000001409FE372: btr     r8d, 1Fh
 * 00000001409FE377: mov     [r13+14h], r8d
 * 00000001409FE37B: mov     rax, [rbp+0BE0h+var_B30]
 * 00000001409FE382: mov     r14, [rax+50h]
 * 00000001409FE386: xor     eax, eax
 * 00000001409FE388: mov     r10d, eax
 * 00000001409FE38B: test    r14, r14
 * 00000001409FE38E: jz      short loc_1409FE409
 * 00000001409FE390: mov     r10d, [r14]
 * 00000001409FE393: mov     r8b, al
 * 00000001409FE396: lea     r9d, [r10-8]
 * 00000001409FE39A: shr     r9d, 3
 * 00000001409FE39E: test    r9d, r9d
 * 00000001409FE3A1: jz      short loc_1409FE409
 * 00000001409FE3A3: mov     r11, [rbp+0BE0h+var_C30]
 * 00000001409FE3A7: mov     rbx, [rbp+0BE0h+var_C40]
 * 00000001409FE3AB: mov     r15d, [rbp+0BE0h+var_BA0]
 * 00000001409FE3AF: movzx   eax, r8b
 * 00000001409FE3B3: mov     rcx, [r14+rax*8+8]
 * 00000001409FE3B8: test    rcx, rcx
 * 00000001409FE3BB: jz      short loc_1409FE3FD
 * 00000001409FE3BD: test    r12, r12
 * 00000001409FE3C0: jz      short loc_1409FE3D3
 * 00000001409FE3C2: lea     rax, [r11-1]
 * 00000001409FE3C6: add     rax, r12
 * 00000001409FE3C9: cmp     rcx, r11
 * 00000001409FE3CC: jb      short loc_1409FE3D3
 * 00000001409FE3CE: cmp     rcx, rax
 * 00000001409FE3D1: jbe     short loc_1409FE3FD
 * 00000001409FE3D3: mov     rax, r15
 * 00000001409FE3D6: test    r15d, r15d
 * 00000001409FE3D9: jz      loc_1409FE522
 * 00000001409FE3DF: lea     rdx, [rbx-1]
 * 00000001409FE3E3: add     rdx, rax
 * 00000001409FE3E6: cmp     rcx, rbx
 * 00000001409FE3E9: jb      loc_1409FE522
 * 00000001409FE3EF: cmp     rcx, rdx
 * 00000001409FE3F2: ja      loc_1409FE522
 * 00000001409FE3F8: mov     edx, 1
 * 00000001409FE3FD: add     r8b, dl
 * 00000001409FE400: movzx   eax, r8b
 * 00000001409FE404: cmp     eax, r9d
 * 00000001409FE407: jb      short loc_1409FE3AF
 * 00000001409FE409: add     [rsi+828h], r10d
 * 00000001409FE410: mov     r9, r14
 * 00000001409FE413: mov     r11d, [rsi+814h]
 * 00000001409FE41A: mov     rax, r14
 * 00000001409FE41D: mov     r15, [rsi+818h]
 * 00000001409FE424: mov     ecx, r10d
 * 00000001409FE427: add     rcx, r14
 * 00000001409FE42A: cmp     r14, rcx
 * 00000001409FE42D: jnb     short loc_1409FE440
 * 00000001409FE42F: mov     r8d, 40h ; '@'
 * 00000001409FE435: prefetchnta byte ptr [rax]
 * 00000001409FE438: add     rax, r8
 * 00000001409FE43B: cmp     rax, rcx
 * 00000001409FE43E: jb      short loc_1409FE435
 * 00000001409FE440: mov     ebx, r10d
 * 00000001409FE443: mov     r8, r15
 * 00000001409FE446: shr     ebx, 7
 * 00000001409FE449: mov     r12d, 0FFFFFFFFh
 * 00000001409FE44F: test    ebx, ebx
 * 00000001409FE451: jz      short loc_1409FE4C6
 * 00000001409FE453: mov     rdi, 7010008004002001h
 * 00000001409FE45D: mov     edx, 8
 * 00000001409FE462: lea     esi, [rdx-7]
 * 00000001409FE465: mov     rax, [r9]
 * 00000001409FE468: mov     ecx, r11d
 * 00000001409FE46B: xor     rax, r8
 * 00000001409FE46E: mov     r8, [r9+8]
 * 00000001409FE472: rol     rax, cl
 * 00000001409FE475: add     r9, 10h
 * 00000001409FE479: xor     r8, rax
 * 00000001409FE47C: rol     r8, cl
 * 00000001409FE47F: sub     rdx, rsi
 * 00000001409FE482: jnz     short loc_1409FE465
 * 00000001409FE484: mov     rcx, r9
 * 00000001409FE487: sub     rcx, r14
 * 00000001409FE48A: xor     rcx, r15
 * 00000001409FE48D: mov     rax, rcx
 * 00000001409FE490: rol     rax, 11h
 * 00000001409FE494: xor     rcx, rax
 * 00000001409FE497: mov     rax, rdi
 * 00000001409FE49A: mul     rcx
 * 00000001409FE49D: xor     r11d, edx
 * 00000001409FE4A0: mov     [rbp+0BE0h+var_658], rdx
 * 00000001409FE4A7: xor     r11d, eax
 * 00000001409FE4AA: mov     rdx, rsi
 * 00000001409FE4AD: and     r11d, 3Fh
 * 00000001409FE4B1: cmovz   r11d, edx
 * 00000001409FE4B5: add     ebx, r12d
 * 00000001409FE4B8: jnz     short loc_1409FE45D
 * 00000001409FE4BA: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FE4BF: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FE4C6: and     r10d, 7Fh
 * 00000001409FE4CA: cmp     r10d, 8
 * 00000001409FE4CE: jb      short loc_1409FE4FC
 * 00000001409FE4D0: mov     edx, r10d
 * 00000001409FE4D3: mov     esi, 1
 * 00000001409FE4D8: shr     rdx, 3
 * 00000001409FE4DC: xor     r8, [r9]
 * 00000001409FE4DF: mov     ecx, r11d
 * 00000001409FE4E2: rol     r8, cl
 * 00000001409FE4E5: add     r9, 8
 * 00000001409FE4E9: add     r10d, 0FFFFFFF8h
 * 00000001409FE4ED: sub     rdx, rsi
 * 00000001409FE4F0: jnz     short loc_1409FE4DC
 * 00000001409FE4F2: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FE4F7: mov     edx, 1
 * 00000001409FE4FC: test    r10d, r10d
 * 00000001409FE4FF: jz      short loc_1409FE516
 * 00000001409FE501: movzx   eax, byte ptr [r9]
 * 00000001409FE505: mov     ecx, r11d
 * 00000001409FE508: xor     r8, rax
 * 00000001409FE50B: add     r9, rdx
 * 00000001409FE50E: rol     r8, cl
 * 00000001409FE511: add     r10d, r12d
 * 00000001409FE514: jnz     short loc_1409FE501
 * 00000001409FE516: mov     rax, r8
 * 00000001409FE519: shr     rax, 1Fh
 * 00000001409FE51D: xor     r15d, r15d
 * 00000001409FE520: jmp     short loc_1409FE5A0
 * 00000001409FE522: mov     [r13+20h], rcx
 * 00000001409FE526: mov     rax, [rsi+590h]
 * 00000001409FE52D: mov     [rax], r13
 * 00000001409FE530: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001409FE537: xor     eax, eax
 * 00000001409FE539: cmp     [rsi+8F8h], eax
 * 00000001409FE53F: jnz     loc_1409F9318
 * 00000001409FE545: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FE54F: add     rax, rsi
 * 00000001409FE552: mov     [rsi+900h], rax
 * 00000001409FE559: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FE563: add     rax, r13
 * 00000001409FE566: mov     [rsi+908h], rax
 * 00000001409FE56D: movsxd  rax, dword ptr [r13+0]
 * 00000001409FE571: mov     [rsi+910h], rax
 * 00000001409FE578: mov     [rsi+918h], r14
 * 00000001409FE57F: mov     eax, 1
 * 00000001409FE584: mov     [rsi+8F8h], eax
 * 00000001409FE58A: xor     edx, edx
 * 00000001409FE58C: mov     rcx, rsi
 * 00000001409FE58F: call    $$b8
 * 00000001409FE594: jmp     loc_1409F9318
 * 00000001409FE599: xor     r8d, eax
 * 00000001409FE59C: shr     rax, 1Fh
 * 00000001409FE5A0: test    rax, rax
 * 00000001409FE5A3: jnz     short loc_1409FE599
 * 00000001409FE5A5: btr     r8d, 1Fh
 * 00000001409FE5AA: mov     [r13+2Ch], r8d
 * 00000001409FE5AE: jmp     loc_1409F931B
 * 00000001409FE5B3: mov     r14, [r13+8]
 * 00000001409FE5B7: add     [rsi+828h], r8d
 * 00000001409FE5BE: mov     r9, r14
 * 00000001409FE5C1: mov     r11d, [rsi+814h]
 * 00000001409FE5C8: mov     rax, r14
 * 00000001409FE5CB: mov     r15, [rsi+818h]
 * 00000001409FE5D2: lea     rcx, [r14+r8]
 * 00000001409FE5D6: cmp     r14, rcx
 * 00000001409FE5D9: jnb     short loc_1409FE5EC
 * 00000001409FE5DB: mov     r10d, 40h ; '@'
 * 00000001409FE5E1: prefetchnta byte ptr [rax]
 * 00000001409FE5E4: add     rax, r10
 * 00000001409FE5E7: cmp     rax, rcx
 * 00000001409FE5EA: jb      short loc_1409FE5E1
 * 00000001409FE5EC: mov     r10d, r8d
 * 00000001409FE5EF: mov     rbx, r15
 * 00000001409FE5F2: shr     r10d, 7
 * 00000001409FE5F6: mov     r12d, 0FFFFFFFFh
 * 00000001409FE5FC: test    r10d, r10d
 * 00000001409FE5FF: jz      short loc_1409FE66D
 * 00000001409FE601: mov     rdi, 7010008004002001h
 * 00000001409FE60B: mov     eax, 8
 * 00000001409FE610: xor     rbx, [r9]
 * 00000001409FE613: mov     ecx, r11d
 * 00000001409FE616: rol     rbx, cl
 * 00000001409FE619: xor     rbx, [r9+8]
 * 00000001409FE61D: add     r9, 10h
 * 00000001409FE621: rol     rbx, cl
 * 00000001409FE624: sub     rax, rdx
 * 00000001409FE627: jnz     short loc_1409FE610
 * 00000001409FE629: mov     rcx, r9
 * 00000001409FE62C: sub     rcx, r14
 * 00000001409FE62F: xor     rcx, r15
 * 00000001409FE632: mov     rax, rcx
 * 00000001409FE635: rol     rax, 11h
 * 00000001409FE639: xor     rcx, rax
 * 00000001409FE63C: mov     rax, rdi
 * 00000001409FE63F: mul     rcx
 * 00000001409FE642: xor     r11d, edx
 * 00000001409FE645: mov     [rbp+0BE0h+var_650], rdx
 * 00000001409FE64C: xor     r11d, eax
 * 00000001409FE64F: mov     edx, 1
 * 00000001409FE654: and     r11d, 3Fh
 * 00000001409FE658: cmovz   r11d, edx
 * 00000001409FE65C: add     r10d, r12d
 * 00000001409FE65F: jnz     short loc_1409FE60B
 * 00000001409FE661: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FE666: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FE66D: and     r8d, 7Fh
 * 00000001409FE671: cmp     r8d, 8
 * 00000001409FE675: jb      short loc_1409FE694
 * 00000001409FE677: mov     eax, r8d
 * 00000001409FE67A: shr     rax, 3
 * 00000001409FE67E: xor     rbx, [r9]
 * 00000001409FE681: mov     ecx, r11d
 * 00000001409FE684: rol     rbx, cl
 * 00000001409FE687: add     r9, 8
 * 00000001409FE68B: add     r8d, 0FFFFFFF8h
 * 00000001409FE68F: sub     rax, rdx
 * 00000001409FE692: jnz     short loc_1409FE67E
 * 00000001409FE694: test    r8d, r8d
 * 00000001409FE697: jz      short loc_1409FE6AE
 * 00000001409FE699: movzx   eax, byte ptr [r9]
 * 00000001409FE69D: mov     ecx, r11d
 * 00000001409FE6A0: xor     rbx, rax
 * 00000001409FE6A3: add     r9, rdx
 * 00000001409FE6A6: rol     rbx, cl
 * 00000001409FE6A9: add     r8d, r12d
 * 00000001409FE6AC: jnz     short loc_1409FE699
 * 00000001409FE6AE: mov     rax, rbx
 * 00000001409FE6B1: jmp     short loc_1409FE6B5
 * 00000001409FE6B3: xor     ebx, eax
 * 00000001409FE6B5: shr     rax, 1Fh
 * 00000001409FE6B9: test    rax, rax
 * 00000001409FE6BC: jnz     short loc_1409FE6B3
 * 00000001409FE6BE: mov     r12, [rsp+0CE0h+var_C90]
 * 00000001409FE6C3: btr     ebx, 1Fh
 * 00000001409FE6C7: mov     r13d, eax
 * 00000001409FE6CA: cmp     ebx, [r12+14h]
 * 00000001409FE6CF: jz      loc_1409FE7B7
 * 00000001409FE6D5: cmp     [r12], eax
 * 00000001409FE6D9: jnz     short loc_1409FE6E4
 * 00000001409FE6DB: cmp     [r12+18h], eax
 * 00000001409FE6E0: cmovnz  r13d, edx
 * 00000001409FE6E4: mov     ecx, [r12+10h]
 * 00000001409FE6E9: mov     rdx, [r12+8]
 * 00000001409FE6EE: test    rcx, rcx
 * 00000001409FE6F1: jz      loc_1409FE8E7
 * 00000001409FE6F7: mov     eax, [rsi+994h]
 * 00000001409FE6FD: mov     r8d, 40h ; '@'
 * 00000001409FE703: test    r8b, al
 * 00000001409FE706: jz      loc_1409FE8E7
 * 00000001409FE70C: mov     r12, cr8
 * 00000001409FE710: lea     eax, [r8-3Eh]
 * 00000001409FE714: mov     cr8, rax
 * 00000001409FE718: mov     r14, rdx
 * 00000001409FE71B: lea     rax, [rcx-1]
 * 00000001409FE71F: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FE726: add     rax, rdx
 * 00000001409FE729: or      rax, 0FFFh
 * 00000001409FE72F: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FE734: lea     rax, [r14-1]
 * 00000001409FE738: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FE73F: movzx   r15d, r12b
 * 00000001409FE743: mov     rax, [rsi+468h]
 * 00000001409FE74A: xor     edx, edx
 * 00000001409FE74C: mov     rcx, r14
 * 00000001409FE74F: call    KeGuardDispatchICall
 * 00000001409FE754: cmp     eax, 0C000022Dh
 * 00000001409FE759: jnz     short loc_1409FE786
 * 00000001409FE75B: test    r13d, r13d
 * 00000001409FE75E: jnz     loc_1409FE8DE
 * 00000001409FE764: lea     eax, [r13+1]
 * 00000001409FE768: cmp     r12b, al
 * 00000001409FE76B: ja      short loc_1409FE78E
 * 00000001409FE76D: movzx   r15d, r12b
 * 00000001409FE771: mov     cr8, r15
 * 00000001409FE775: mov     al, [r14]
 * 00000001409FE778: mov     rax, cr8
 * 00000001409FE77C: lea     eax, [r13+2]
 * 00000001409FE780: mov     cr8, rax
 * 00000001409FE784: jmp     short loc_1409FE743
 * 00000001409FE786: test    eax, eax
 * 00000001409FE788: js      loc_1409FE8DE
 * 00000001409FE78E: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409FE795: mov     ecx, 1000h
 * 00000001409FE79A: add     rax, rcx
 * 00000001409FE79D: add     r14, rcx
 * 00000001409FE7A0: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FE7A7: cmp     rax, [rsp+0CE0h+var_C70]
 * 00000001409FE7AC: jnz     short loc_1409FE73F
 * 00000001409FE7AE: mov     cr8, r15
 * 00000001409FE7B2: mov     r12, [rsp+0CE0h+var_C90]
 * 00000001409FE7B7: mov     r13d, 1
 * 00000001409FE7BD: mov     rax, [r12+8]
 * 00000001409FE7C2: sub     rax, 70h ; 'p'
 * 00000001409FE7C6: mov     [rbp+0BE0h+var_B30], rax
 * 00000001409FE7CD: mov     r15, [rax+50h]
 * 00000001409FE7D1: xor     eax, eax
 * 00000001409FE7D3: mov     r9d, eax
 * 00000001409FE7D6: test    r15, r15
 * 00000001409FE7D9: jz      short loc_1409FE7DE
 * 00000001409FE7DB: mov     r9d, [r15]
 * 00000001409FE7DE: add     [rsi+828h], r9d
 * 00000001409FE7E5: mov     r10, r15
 * 00000001409FE7E8: mov     r11d, [rsi+814h]
 * 00000001409FE7EF: mov     rax, r15
 * 00000001409FE7F2: mov     r14, [rsi+818h]
 * 00000001409FE7F9: mov     ecx, r9d
 * 00000001409FE7FC: add     rcx, r15
 * 00000001409FE7FF: cmp     r15, rcx
 * 00000001409FE802: jnb     short loc_1409FE814
 * 00000001409FE804: mov     edx, 40h ; '@'
 * 00000001409FE809: prefetchnta byte ptr [rax]
 * 00000001409FE80C: add     rax, rdx
 * 00000001409FE80F: cmp     rax, rcx
 * 00000001409FE812: jb      short loc_1409FE809
 * 00000001409FE814: mov     ebx, r9d
 * 00000001409FE817: mov     r8, r14
 * 00000001409FE81A: shr     ebx, 7
 * 00000001409FE81D: test    ebx, ebx
 * 00000001409FE81F: jz      short loc_1409FE88B
 * 00000001409FE821: mov     rsi, 7010008004002001h
 * 00000001409FE82B: mov     edx, 8
 * 00000001409FE830: mov     rax, [r10]
 * 00000001409FE833: mov     ecx, r11d
 * 00000001409FE836: xor     rax, r8
 * 00000001409FE839: mov     r8, [r10+8]
 * 00000001409FE83D: rol     rax, cl
 * 00000001409FE840: add     r10, 10h
 * 00000001409FE844: xor     r8, rax
 * 00000001409FE847: rol     r8, cl
 * 00000001409FE84A: sub     rdx, r13
 * 00000001409FE84D: jnz     short loc_1409FE830
 * 00000001409FE84F: mov     rcx, r10
 * 00000001409FE852: sub     rcx, r15
 * 00000001409FE855: xor     rcx, r14
 * 00000001409FE858: mov     rax, rcx
 * 00000001409FE85B: rol     rax, 11h
 * 00000001409FE85F: xor     rcx, rax
 * 00000001409FE862: mov     rax, rsi
 * 00000001409FE865: mul     rcx
 * 00000001409FE868: xor     r11d, edx
 * 00000001409FE86B: mov     [rbp+0BE0h+var_648], rdx
 * 00000001409FE872: xor     r11d, eax
 * 00000001409FE875: mov     eax, 0FFFFFFFFh
 * 00000001409FE87A: and     r11d, 3Fh
 * 00000001409FE87E: cmovz   r11d, r13d
 * 00000001409FE882: add     ebx, eax
 * 00000001409FE884: jnz     short loc_1409FE82B
 * 00000001409FE886: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FE88B: and     r9d, 7Fh
 * 00000001409FE88F: cmp     r9d, 8
 * 00000001409FE893: jb      short loc_1409FE8B2
 * 00000001409FE895: mov     edx, r9d
 * 00000001409FE898: shr     rdx, 3
 * 00000001409FE89C: xor     r8, [r10]
 * 00000001409FE89F: mov     ecx, r11d
 * 00000001409FE8A2: rol     r8, cl
 * 00000001409FE8A5: add     r10, 8
 * 00000001409FE8A9: add     r9d, 0FFFFFFF8h
 * 00000001409FE8AD: sub     rdx, r13
 * 00000001409FE8B0: jnz     short loc_1409FE89C
 * 00000001409FE8B2: test    r9d, r9d
 * 00000001409FE8B5: jz      short loc_1409FE8D6
 * 00000001409FE8B7: mov     esi, 0FFFFFFFFh
 * 00000001409FE8BC: movzx   eax, byte ptr [r10]
 * 00000001409FE8C0: mov     ecx, r11d
 * 00000001409FE8C3: xor     r8, rax
 * 00000001409FE8C6: add     r10, r13
 * 00000001409FE8C9: rol     r8, cl
 * 00000001409FE8CC: add     r9d, esi
 * 00000001409FE8CF: jnz     short loc_1409FE8BC
 * 00000001409FE8D1: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FE8D6: mov     rax, r8
 * 00000001409FE8D9: jmp     loc_1409FE972
 * 00000001409FE8DE: mov     cr8, r15
 * 00000001409FE8E2: mov     r12, [rsp+0CE0h+var_C90]
 * 00000001409FE8E7: mov     eax, [rsi+8F8h]
 * 00000001409FE8ED: mov     edx, [r12+14h]
 * 00000001409FE8F2: test    eax, eax
 * 00000001409FE8F4: jnz     short loc_1409FE90C
 * 00000001409FE8F6: mov     rax, [rsi+590h]
 * 00000001409FE8FD: mov     ecx, ebx
 * 00000001409FE8FF: xor     rcx, rdx
 * 00000001409FE902: mov     [rax+18h], rcx
 * 00000001409FE906: mov     eax, [rsi+8F8h]
 * 00000001409FE90C: mov     rcx, [r12+8]
 * 00000001409FE911: mov     r13d, 1
 * 00000001409FE917: test    eax, eax
 * 00000001409FE919: jnz     loc_1409FE7BD
 * 00000001409FE91F: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FE929: xor     edx, edx
 * 00000001409FE92B: add     rax, rsi
 * 00000001409FE92E: mov     [rsi+900h], rax
 * 00000001409FE935: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FE93F: add     rax, r12
 * 00000001409FE942: mov     [rsi+908h], rax
 * 00000001409FE949: movsxd  rax, dword ptr [r12]
 * 00000001409FE94D: mov     [rsi+910h], rax
 * 00000001409FE954: mov     [rsi+918h], rcx
 * 00000001409FE95B: mov     rcx, rsi
 * 00000001409FE95E: mov     [rsi+8F8h], r13d
 * 00000001409FE965: call    $$b8
 * 00000001409FE96A: jmp     loc_1409FE7BD
 * 00000001409FE96F: xor     r8d, eax
 * 00000001409FE972: shr     rax, 1Fh
 * 00000001409FE976: test    rax, rax
 * 00000001409FE979: jnz     short loc_1409FE96F
 * 00000001409FE97B: mov     edx, [r12+2Ch]
 * 00000001409FE980: btr     r8d, 1Fh
 * 00000001409FE985: cmp     r8d, edx
 * 00000001409FE988: jz      loc_1409F9318
 * 00000001409FE98E: mov     eax, [rsi+8F8h]
 * 00000001409FE994: test    eax, eax
 * 00000001409FE996: jnz     loc_1409F9318
 * 00000001409FE99C: mov     rax, [rsi+590h]
 * 00000001409FE9A3: mov     ecx, r8d
 * 00000001409FE9A6: xor     rcx, rdx
 * 00000001409FE9A9: mov     [rax+18h], rcx
 * 00000001409FE9AD: mov     eax, [rsi+8F8h]
 * 00000001409FE9B3: test    eax, eax
 * 00000001409FE9B5: jnz     loc_1409F9318
 * 00000001409FE9BB: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FE9C5: add     rax, rsi
 * 00000001409FE9C8: mov     [rsi+900h], rax
 * 00000001409FE9CF: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FE9D9: add     rax, r12
 * 00000001409FE9DC: mov     [rsi+908h], rax
 * 00000001409FE9E3: movsxd  rax, dword ptr [r12]
 * 00000001409FE9E7: mov     [rsi+910h], rax
 * 00000001409FE9EE: mov     [rsi+918h], r15
 * 00000001409FE9F5: mov     [rsi+8F8h], r13d
 * 00000001409FE9FC: jmp     loc_1409FE58A
 * 00000001409FEA01: cmp     r10d, 25h ; '%'
 * 00000001409FEA05: jg      loc_140A00FD0
 * 00000001409FEA0B: jz      loc_140A00F5A
 * 00000001409FEA11: mov     ecx, r10d
 * 00000001409FEA14: sub     ecx, 1Dh
 * 00000001409FEA17: jz      loc_140A00B0C
 * 00000001409FEA1D: sub     ecx, 1
 * 00000001409FEA20: jz      loc_140A0037D
 * 00000001409FEA26: sub     ecx, 1
 * 00000001409FEA29: jz      loc_1409FF6D9
 * 00000001409FEA2F: sub     ecx, 1
 * 00000001409FEA32: jz      loc_1409FF6C9
 * 00000001409FEA38: sub     ecx, 1
 * 00000001409FEA3B: jz      loc_1409FF6B9
 * 00000001409FEA41: sub     ecx, 2
 * 00000001409FEA44: jz      loc_1409FEF5C
 * 00000001409FEA4A: cmp     ecx, 1
 * 00000001409FEA4D: jnz     loc_140A03767
 * 00000001409FEA53: mov     r14, [r13+8]
 * 00000001409FEA57: mov     r8d, [r13+10h]
 * 00000001409FEA5B: mov     r9, r14
 * 00000001409FEA5E: add     [rsi+828h], r8d
 * 00000001409FEA65: mov     rax, r14
 * 00000001409FEA68: mov     r10d, [rsi+814h]
 * 00000001409FEA6F: mov     r15, [rsi+818h]
 * 00000001409FEA76: lea     rcx, [r14+r8]
 * 00000001409FEA7A: cmp     r14, rcx
 * 00000001409FEA7D: jnb     short loc_1409FEA90
 * 00000001409FEA7F: mov     r11d, 40h ; '@'
 * 00000001409FEA85: prefetchnta byte ptr [rax]
 * 00000001409FEA88: add     rax, r11
 * 00000001409FEA8B: cmp     rax, rcx
 * 00000001409FEA8E: jb      short loc_1409FEA85
 * 00000001409FEA90: mov     r11d, r8d
 * 00000001409FEA93: mov     rbx, r15
 * 00000001409FEA96: shr     r11d, 7
 * 00000001409FEA9A: mov     r12d, 0FFFFFFFFh
 * 00000001409FEAA0: test    r11d, r11d
 * 00000001409FEAA3: jz      short loc_1409FEB11
 * 00000001409FEAA5: mov     rdi, 7010008004002001h
 * 00000001409FEAAF: mov     eax, 8
 * 00000001409FEAB4: xor     rbx, [r9]
 * 00000001409FEAB7: mov     ecx, r10d
 * 00000001409FEABA: rol     rbx, cl
 * 00000001409FEABD: xor     rbx, [r9+8]
 * 00000001409FEAC1: add     r9, 10h
 * 00000001409FEAC5: rol     rbx, cl
 * 00000001409FEAC8: sub     rax, rdx
 * 00000001409FEACB: jnz     short loc_1409FEAB4
 * 00000001409FEACD: mov     rcx, r9
 * 00000001409FEAD0: sub     rcx, r14
 * 00000001409FEAD3: xor     rcx, r15
 * 00000001409FEAD6: mov     rax, rcx
 * 00000001409FEAD9: rol     rax, 11h
 * 00000001409FEADD: xor     rcx, rax
 * 00000001409FEAE0: mov     rax, rdi
 * 00000001409FEAE3: mul     rcx
 * 00000001409FEAE6: xor     r10d, edx
 * 00000001409FEAE9: mov     [rbp+0BE0h+var_640], rdx
 * 00000001409FEAF0: xor     r10d, eax
 * 00000001409FEAF3: mov     edx, 1
 * 00000001409FEAF8: and     r10d, 3Fh
 * 00000001409FEAFC: cmovz   r10d, edx
 * 00000001409FEB00: add     r11d, r12d
 * 00000001409FEB03: jnz     short loc_1409FEAAF
 * 00000001409FEB05: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FEB0A: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FEB11: and     r8d, 7Fh
 * 00000001409FEB15: cmp     r8d, 8
 * 00000001409FEB19: jb      short loc_1409FEB38
 * 00000001409FEB1B: mov     eax, r8d
 * 00000001409FEB1E: shr     rax, 3
 * 00000001409FEB22: xor     rbx, [r9]
 * 00000001409FEB25: mov     ecx, r10d
 * 00000001409FEB28: rol     rbx, cl
 * 00000001409FEB2B: add     r9, 8
 * 00000001409FEB2F: add     r8d, 0FFFFFFF8h
 * 00000001409FEB33: sub     rax, rdx
 * 00000001409FEB36: jnz     short loc_1409FEB22
 * 00000001409FEB38: test    r8d, r8d
 * 00000001409FEB3B: jz      short loc_1409FEB52
 * 00000001409FEB3D: movzx   eax, byte ptr [r9]
 * 00000001409FEB41: mov     ecx, r10d
 * 00000001409FEB44: xor     rbx, rax
 * 00000001409FEB47: add     r9, rdx
 * 00000001409FEB4A: rol     rbx, cl
 * 00000001409FEB4D: add     r8d, r12d
 * 00000001409FEB50: jnz     short loc_1409FEB3D
 * 00000001409FEB52: mov     rax, rbx
 * 00000001409FEB55: jmp     short loc_1409FEB59
 * 00000001409FEB57: xor     ebx, eax
 * 00000001409FEB59: shr     rax, 1Fh
 * 00000001409FEB5D: test    rax, rax
 * 00000001409FEB60: jnz     short loc_1409FEB57
 * 00000001409FEB62: btr     ebx, 1Fh
 * 00000001409FEB66: mov     r12d, eax
 * 00000001409FEB69: cmp     ebx, [r13+14h]
 * 00000001409FEB6D: jz      loc_1409FECD0
 * 00000001409FEB73: cmp     [r13+0], eax
 * 00000001409FEB77: jnz     short loc_1409FEB81
 * 00000001409FEB79: cmp     [r13+18h], eax
 * 00000001409FEB7D: cmovnz  r12d, edx
 * 00000001409FEB81: mov     ecx, [r13+10h]
 * 00000001409FEB85: mov     rdx, [r13+8]
 * 00000001409FEB89: test    rcx, rcx
 * 00000001409FEB8C: jz      loc_1409FEC55
 * 00000001409FEB92: mov     eax, [rsi+994h]
 * 00000001409FEB98: mov     r8d, 40h ; '@'
 * 00000001409FEB9E: test    r8b, al
 * 00000001409FEBA1: jz      loc_1409FEC55
 * 00000001409FEBA7: mov     r13, cr8
 * 00000001409FEBAB: lea     eax, [r8-3Eh]
 * 00000001409FEBAF: mov     cr8, rax
 * 00000001409FEBB3: mov     r14, rdx
 * 00000001409FEBB6: lea     rax, [rcx-1]
 * 00000001409FEBBA: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FEBC1: add     rax, rdx
 * 00000001409FEBC4: or      rax, 0FFFh
 * 00000001409FEBCA: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FEBCF: lea     rax, [r14-1]
 * 00000001409FEBD3: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FEBDA: movzx   r15d, r13b
 * 00000001409FEBDE: mov     rax, [rsi+468h]
 * 00000001409FEBE5: xor     edx, edx
 * 00000001409FEBE7: mov     rcx, r14
 * 00000001409FEBEA: call    KeGuardDispatchICall
 * 00000001409FEBEF: cmp     eax, 0C000022Dh
 * 00000001409FEBF4: jnz     short loc_1409FEC1F
 * 00000001409FEBF6: test    r12d, r12d
 * 00000001409FEBF9: jnz     short loc_1409FEC4C
 * 00000001409FEBFB: lea     eax, [r12+1]
 * 00000001409FEC00: cmp     r13b, al
 * 00000001409FEC03: ja      short loc_1409FEC23
 * 00000001409FEC05: movzx   r15d, r13b
 * 00000001409FEC09: mov     cr8, r15
 * 00000001409FEC0D: mov     al, [r14]
 * 00000001409FEC10: mov     rax, cr8
 * 00000001409FEC14: lea     eax, [r12+2]
 * 00000001409FEC19: mov     cr8, rax
 * 00000001409FEC1D: jmp     short loc_1409FEBDE
 * 00000001409FEC1F: test    eax, eax
 * 00000001409FEC21: js      short loc_1409FEC4C
 * 00000001409FEC23: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409FEC2A: mov     ecx, 1000h
 * 00000001409FEC2F: add     rax, rcx
 * 00000001409FEC32: add     r14, rcx
 * 00000001409FEC35: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FEC3C: cmp     rax, [rsp+0CE0h+var_C70]
 * 00000001409FEC41: jnz     short loc_1409FEBDA
 * 00000001409FEC43: mov     cr8, r15
 * 00000001409FEC47: jmp     loc_1409FECD0
 * 00000001409FEC4C: mov     cr8, r15
 * 00000001409FEC50: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FEC55: mov     eax, [rsi+8F8h]
 * 00000001409FEC5B: mov     edx, [r13+14h]
 * 00000001409FEC5F: test    eax, eax
 * 00000001409FEC61: jnz     short loc_1409FEC79
 * 00000001409FEC63: mov     rax, [rsi+590h]
 * 00000001409FEC6A: mov     ecx, ebx
 * 00000001409FEC6C: xor     rcx, rdx
 * 00000001409FEC6F: mov     [rax+18h], rcx
 * 00000001409FEC73: mov     eax, [rsi+8F8h]
 * 00000001409FEC79: mov     rcx, [r13+8]
 * 00000001409FEC7D: test    eax, eax
 * 00000001409FEC7F: jnz     short loc_1409FECD0
 * 00000001409FEC81: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FEC8B: xor     edx, edx
 * 00000001409FEC8D: add     rax, rsi
 * 00000001409FEC90: mov     [rsi+900h], rax
 * 00000001409FEC97: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FECA1: add     rax, r13
 * 00000001409FECA4: mov     [rsi+908h], rax
 * 00000001409FECAB: movsxd  rax, dword ptr [r13+0]
 * 00000001409FECAF: mov     [rsi+910h], rax
 * 00000001409FECB6: mov     eax, 1
 * 00000001409FECBB: mov     [rsi+918h], rcx
 * 00000001409FECC2: mov     rcx, rsi
 * 00000001409FECC5: mov     [rsi+8F8h], eax
 * 00000001409FECCB: call    $$b8
 * 00000001409FECD0: mov     rcx, [rsi+540h]
 * 00000001409FECD7: mov     r14, cr8
 * 00000001409FECDB: mov     eax, 0Fh
 * 00000001409FECE0: mov     cr8, rax
 * 00000001409FECE4: mov     rax, [rsi+150h]
 * 00000001409FECEB: call    KeGuardDispatchICall
 * 00000001409FECF0: mov     rax, [rsi+610h]
 * 00000001409FECF7: mov     r12, [rsp+0CE0h+var_C90]
 * 00000001409FECFC: mov     rcx, [rax]
 * 00000001409FECFF: mov     eax, [rcx]
 * 00000001409FED01: lea     rbx, [rcx+10h]
 * 00000001409FED05: mov     r15b, [rcx+0Ch]
 * 00000001409FED09: lea     rcx, [rax+rax*2]
 * 00000001409FED0D: lea     r13, [rbx+rcx*8]
 * 00000001409FED11: mov     r8d, 18h
 * 00000001409FED17: lea     r9, [r12+18h]
 * 00000001409FED1C: mov     r10, rbx
 * 00000001409FED1F: mov     rcx, [r10]
 * 00000001409FED22: add     r10, 8
 * 00000001409FED26: mov     rax, [r9]
 * 00000001409FED29: add     r9, 8
 * 00000001409FED2D: cmp     rcx, rax
 * 00000001409FED30: jnz     short loc_1409FED66
 * 00000001409FED32: add     r8d, 0FFFFFFF8h
 * 00000001409FED36: cmp     r8d, 8
 * 00000001409FED3A: jnb     short loc_1409FED1F
 * 00000001409FED3C: test    r8d, r8d
 * 00000001409FED3F: jz      short loc_1409FED6F
 * 00000001409FED41: mov     r11d, 1
 * 00000001409FED47: movzx   edx, byte ptr [r10]
 * 00000001409FED4B: add     r10, r11
 * 00000001409FED4E: movzx   eax, byte ptr [r9]
 * 00000001409FED52: add     r9, r11
 * 00000001409FED55: cmp     rdx, rax
 * 00000001409FED58: jnz     short loc_1409FED66
 * 00000001409FED5A: mov     eax, 0FFFFFFFFh
 * 00000001409FED5F: add     r8d, eax
 * 00000001409FED62: jz      short loc_1409FED6F
 * 00000001409FED64: jmp     short loc_1409FED47
 * 00000001409FED66: add     rbx, 18h
 * 00000001409FED6A: cmp     rbx, r13
 * 00000001409FED6D: jb      short loc_1409FED11
 * 00000001409FED6F: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FED74: mov     rcx, [rsi+540h]
 * 00000001409FED7B: mov     rax, [rsi+190h]
 * 00000001409FED82: call    KeGuardDispatchICall
 * 00000001409FED87: movzx   eax, r14b
 * 00000001409FED8B: mov     cr8, rax
 * 00000001409FED8F: xor     eax, eax
 * 00000001409FED91: test    r15b, r15b
 * 00000001409FED94: jz      short loc_1409FEE12
 * 00000001409FED96: mov     eax, [rsi+994h]
 * 00000001409FED9C: mov     ecx, 10h
 * 00000001409FEDA1: test    cl, al
 * 00000001409FEDA3: jz      short loc_1409FEE02
 * 00000001409FEDA5: xor     eax, eax
 * 00000001409FEDA7: cmp     [rsi+8F8h], eax
 * 00000001409FEDAD: jnz     short loc_1409FEE02
 * 00000001409FEDAF: mov     rcx, [rsp+0CE0h+var_C90]
 * 00000001409FEDB4: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FEDBE: add     rax, rsi
 * 00000001409FEDC1: xor     edx, edx
 * 00000001409FEDC3: mov     [rsi+900h], rax
 * 00000001409FEDCA: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FEDD4: add     rax, rcx
 * 00000001409FEDD7: mov     [rsi+908h], rax
 * 00000001409FEDDE: movsxd  rax, dword ptr [rcx]
 * 00000001409FEDE1: mov     rcx, rsi
 * 00000001409FEDE4: mov     [rsi+910h], rax
 * 00000001409FEDEB: mov     eax, 1
 * 00000001409FEDF0: mov     [rsi+918h], rax
 * 00000001409FEDF7: mov     [rsi+8F8h], eax
 * 00000001409FEDFD: call    $$b8
 * 00000001409FEE02: mov     ecx, 1
 * 00000001409FEE07: cmp     [r12+18h], rcx
 * 00000001409FEE0C: jz      short loc_1409FEE76
 * 00000001409FEE0E: xor     eax, eax
 * 00000001409FEE10: jmp     short loc_1409FEE17
 * 00000001409FEE12: mov     ecx, 1
 * 00000001409FEE17: cmp     rbx, r13
 * 00000001409FEE1A: jnz     short loc_1409FEE76
 * 00000001409FEE1C: mov     r13, 0B3B74BDEE4453415h
 * 00000001409FEE26: mov     r12, [rsp+0CE0h+var_C90]
 * 00000001409FEE2B: cmp     [rsi+8F8h], eax
 * 00000001409FEE31: jnz     short loc_1409FEE85
 * 00000001409FEE33: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FEE3D: xor     edx, edx
 * 00000001409FEE3F: add     rax, rsi
 * 00000001409FEE42: mov     [rsi+900h], rax
 * 00000001409FEE49: lea     rax, [r12+r13]
 * 00000001409FEE4D: mov     [rsi+908h], rax
 * 00000001409FEE54: movsxd  rax, dword ptr [r12]
 * 00000001409FEE58: mov     [rsi+910h], rax
 * 00000001409FEE5F: mov     [rsi+918h], rbx
 * 00000001409FEE66: mov     [rsi+8F8h], ecx
 * 00000001409FEE6C: mov     rcx, rsi
 * 00000001409FEE6F: call    $$b8
 * 00000001409FEE74: jmp     short loc_1409FEE85
 * 00000001409FEE76: mov     r12, [rsp+0CE0h+var_C90]
 * 00000001409FEE7B: mov     r13, 0B3B74BDEE4453415h
 * 00000001409FEE85: mov     rcx, [rsi+540h]
 * 00000001409FEE8C: mov     r15, cr8
 * 00000001409FEE90: mov     eax, 0Fh
 * 00000001409FEE95: mov     cr8, rax
 * 00000001409FEE99: mov     rax, [rsi+150h]
 * 00000001409FEEA0: call    KeGuardDispatchICall
 * 00000001409FEEA5: mov     rax, [rsi+610h]
 * 00000001409FEEAC: mov     rcx, [rax]
 * 00000001409FEEAF: mov     eax, [rcx]
 * 00000001409FEEB1: lea     rbx, [rcx+10h]
 * 00000001409FEEB5: lea     rcx, [rax+rax*2]
 * 00000001409FEEB9: xor     eax, eax
 * 00000001409FEEBB: lea     r14, [rbx+rcx*8]
 * 00000001409FEEBF: jmp     short loc_1409FEEE8
 * 00000001409FEEC1: mov     rcx, [rbx+8]
 * 00000001409FEEC5: cmp     rcx, rdx
 * 00000001409FEEC8: jb      short loc_1409FEEF4
 * 00000001409FEECA: mov     rax, rcx
 * 00000001409FEECD: and     rax, 0FFFFFFFFFFFFF000h
 * 00000001409FEED3: cmp     rax, rcx
 * 00000001409FEED6: jnz     short loc_1409FEEF4
 * 00000001409FEED8: mov     eax, [rbx+10h]
 * 00000001409FEEDB: add     rax, rcx
 * 00000001409FEEDE: cmp     rax, rcx
 * 00000001409FEEE1: jbe     short loc_1409FEEF4
 * 00000001409FEEE3: cmp     rax, rdx
 * 00000001409FEEE6: jz      short loc_1409FEEF4
 * 00000001409FEEE8: add     rbx, 18h
 * 00000001409FEEEC: mov     rdx, rax
 * 00000001409FEEEF: cmp     rbx, r14
 * 00000001409FEEF2: jb      short loc_1409FEEC1
 * 00000001409FEEF4: mov     rcx, [rsi+540h]
 * 00000001409FEEFB: mov     rax, [rsi+190h]
 * 00000001409FEF02: call    KeGuardDispatchICall
 * 00000001409FEF07: movzx   eax, r15b
 * 00000001409FEF0B: mov     cr8, rax
 * 00000001409FEF0F: cmp     rbx, r14
 * 00000001409FEF12: jz      loc_1409F9318
 * 00000001409FEF18: xor     eax, eax
 * 00000001409FEF1A: cmp     [rsi+8F8h], eax
 * 00000001409FEF20: jnz     loc_1409F9318
 * 00000001409FEF26: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FEF30: add     rax, rsi
 * 00000001409FEF33: mov     [rsi+900h], rax
 * 00000001409FEF3A: lea     rax, [r12+r13]
 * 00000001409FEF3E: mov     [rsi+908h], rax
 * 00000001409FEF45: movsxd  rax, dword ptr [r12]
 * 00000001409FEF49: mov     [rsi+910h], rax
 * 00000001409FEF50: mov     [rsi+918h], rbx
 * 00000001409FEF57: jmp     loc_1409FE57F
 * 00000001409FEF5C: mov     ecx, [r13+28h]
 * 00000001409FEF60: and     ecx, edx
 * 00000001409FEF62: jz      short loc_1409FEF81
 * 00000001409FEF64: xor     eax, eax
 * 00000001409FEF66: cmp     [rsi+980h], rax
 * 00000001409FEF6D: jz      loc_1409F9312
 * 00000001409FEF73: mov     eax, [rsi+994h]
 * 00000001409FEF79: test    al, 4
 * 00000001409FEF7B: jnz     loc_1409F93EA
 * 00000001409FEF81: xor     eax, eax
 * 00000001409FEF83: test    ecx, ecx
 * 00000001409FEF85: jz      loc_1409FF49C
 * 00000001409FEF8B: mov     edx, [rsi+994h]
 * 00000001409FEF91: mov     ecx, edx
 * 00000001409FEF93: cmp     [rsi+824h], eax
 * 00000001409FEF99: jnz     short loc_1409FEFAD
 * 00000001409FEF9B: shl     ecx, 3
 * 00000001409FEF9E: xor     ecx, edx
 * 00000001409FEFA0: and     ecx, 20h
 * 00000001409FEFA3: xor     ecx, edx
 * 00000001409FEFA5: mov     [rsi+994h], ecx
 * 00000001409FEFAB: jmp     short loc_1409FEFBE
 * 00000001409FEFAD: mov     eax, edx
 * 00000001409FEFAF: shr     eax, 3
 * 00000001409FEFB2: xor     eax, edx
 * 00000001409FEFB4: test    al, 4
 * 00000001409FEFB6: jnz     loc_1409F93EA
 * 00000001409FEFBC: xor     eax, eax
 * 00000001409FEFBE: cmp     [rsi+980h], rax
 * 00000001409FEFC5: jz      loc_1409FF491
 * 00000001409FEFCB: mov     edx, ecx
 * 00000001409FEFCD: cmp     [rsi+824h], eax
 * 00000001409FEFD3: jnz     short loc_1409FEFE7
 * 00000001409FEFD5: shl     edx, 3
 * 00000001409FEFD8: xor     edx, ecx
 * 00000001409FEFDA: and     edx, 20h
 * 00000001409FEFDD: xor     edx, ecx
 * 00000001409FEFDF: mov     [rsi+994h], edx
 * 00000001409FEFE5: jmp     short loc_1409FEFF6
 * 00000001409FEFE7: mov     eax, ecx
 * 00000001409FEFE9: shr     eax, 3
 * 00000001409FEFEC: xor     eax, ecx
 * 00000001409FEFEE: test    al, 4
 * 00000001409FEFF0: jnz     loc_1409FF48F
 * 00000001409FEFF6: test    dl, 4
 * 00000001409FEFF9: jz      loc_1409FF209
 * 00000001409FEFFF: mov     r14d, [r13+8]
 * 00000001409FF003: mov     r12d, 1
 * 00000001409FF009: mov     ecx, [r13+10h]
 * 00000001409FF00D: and     r14d, 0FFFh
 * 00000001409FF014: mov     rbx, [r13+8]
 * 00000001409FF018: add     r14, 0FFFh
 * 00000001409FF01F: add     r14, rcx
 * 00000001409FF022: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001409FF029: shr     r14, 0Ch
 * 00000001409FF02D: test    r14, r14
 * 00000001409FF030: jz      loc_1409FF0BE
 * 00000001409FF036: xor     edi, edi
 * 00000001409FF038: mov     rax, [rsi+2B0h]
 * 00000001409FF03F: mov     rcx, rbx
 * 00000001409FF042: sub     r14, r12
 * 00000001409FF045: call    KeGuardDispatchICall
 * 00000001409FF04A: test    al, al
 * 00000001409FF04C: jz      short loc_1409FF0A1
 * 00000001409FF04E: cmp     [rsi+8F8h], edi
 * 00000001409FF054: jnz     short loc_1409FF0A1
 * 00000001409FF056: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF060: xor     edx, edx
 * 00000001409FF062: add     rax, rsi
 * 00000001409FF065: mov     rcx, rsi
 * 00000001409FF068: mov     [rsi+900h], rax
 * 00000001409FF06F: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FF079: add     rax, r13
 * 00000001409FF07C: mov     [rsi+908h], rax
 * 00000001409FF083: movsxd  rax, dword ptr [r13+0]
 * 00000001409FF087: mov     [rsi+910h], rax
 * 00000001409FF08E: mov     [rsi+918h], rbx
 * 00000001409FF095: mov     [rsi+8F8h], r12d
 * 00000001409FF09C: call    $$b8
 * 00000001409FF0A1: add     dword ptr [rsi+828h], 100h
 * 00000001409FF0AB: add     rbx, 1000h
 * 00000001409FF0B2: test    r14, r14
 * 00000001409FF0B5: jnz     short loc_1409FF038
 * 00000001409FF0B7: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FF0BE: xor     r15d, r15d
 * 00000001409FF0C1: mov     r14, 0B3B74BDEE4453415h
 * 00000001409FF0CB: mov     eax, [r13+28h]
 * 00000001409FF0CF: mov     ecx, 2
 * 00000001409FF0D4: test    cl, al
 * 00000001409FF0D6: jz      loc_1409F931B
 * 00000001409FF0DC: mov     rbx, [r13+8]
 * 00000001409FF0E0: test    al, 4
 * 00000001409FF0E2: jz      loc_1409FF171
 * 00000001409FF0E8: mov     rax, [rbx+70h]
 * 00000001409FF0EC: mov     rdx, [r13+18h]
 * 00000001409FF0F0: mov     rcx, [rax]
 * 00000001409FF0F3: cmp     rcx, rdx
 * 00000001409FF0F6: jz      short loc_1409FF171
 * 00000001409FF0F8: mov     rax, [rsi+590h]
 * 00000001409FF0FF: mov     [rax], rcx
 * 00000001409FF102: mov     dword ptr [rax+10h], 100h
 * 00000001409FF109: mov     eax, [rsi+8F8h]
 * 00000001409FF10F: test    eax, eax
 * 00000001409FF111: jnz     short loc_1409FF127
 * 00000001409FF113: mov     rax, [rsi+590h]
 * 00000001409FF11A: xor     rcx, rdx
 * 00000001409FF11D: mov     [rax+18h], rcx
 * 00000001409FF121: mov     eax, [rsi+8F8h]
 * 00000001409FF127: mov     rcx, [rbx+70h]
 * 00000001409FF12B: test    eax, eax
 * 00000001409FF12D: jnz     short loc_1409FF171
 * 00000001409FF12F: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF139: xor     edx, edx
 * 00000001409FF13B: add     rax, rsi
 * 00000001409FF13E: mov     [rsi+900h], rax
 * 00000001409FF145: lea     rax, [r14+r13]
 * 00000001409FF149: mov     [rsi+908h], rax
 * 00000001409FF150: movsxd  rax, dword ptr [r13+0]
 * 00000001409FF154: mov     [rsi+910h], rax
 * 00000001409FF15B: mov     [rsi+918h], rcx
 * 00000001409FF162: mov     rcx, rsi
 * 00000001409FF165: mov     [rsi+8F8h], r12d
 * 00000001409FF16C: call    $$b8
 * 00000001409FF171: mov     eax, [r13+28h]
 * 00000001409FF175: test    al, 8
 * 00000001409FF177: jz      loc_1409F931B
 * 00000001409FF17D: mov     rax, [rbx+78h]
 * 00000001409FF181: mov     rdx, [r13+20h]
 * 00000001409FF185: mov     rcx, [rax]
 * 00000001409FF188: cmp     rcx, rdx
 * 00000001409FF18B: jz      loc_1409F931B
 * 00000001409FF191: mov     rax, [rsi+590h]
 * 00000001409FF198: mov     [rax], rcx
 * 00000001409FF19B: mov     dword ptr [rax+10h], 100h
 * 00000001409FF1A2: mov     eax, [rsi+8F8h]
 * 00000001409FF1A8: test    eax, eax
 * 00000001409FF1AA: jnz     short loc_1409FF1C0
 * 00000001409FF1AC: mov     rax, [rsi+590h]
 * 00000001409FF1B3: xor     rcx, rdx
 * 00000001409FF1B6: mov     [rax+18h], rcx
 * 00000001409FF1BA: mov     eax, [rsi+8F8h]
 * 00000001409FF1C0: mov     rcx, [rbx+78h]
 * 00000001409FF1C4: test    eax, eax
 * 00000001409FF1C6: jnz     loc_1409F931B
 * 00000001409FF1CC: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF1D6: add     rax, rsi
 * 00000001409FF1D9: mov     [rsi+900h], rax
 * 00000001409FF1E0: lea     rax, [r14+r13]
 * 00000001409FF1E4: mov     [rsi+908h], rax
 * 00000001409FF1EB: movsxd  rax, dword ptr [r13+0]
 * 00000001409FF1EF: mov     [rsi+910h], rax
 * 00000001409FF1F6: mov     [rsi+918h], rcx
 * 00000001409FF1FD: mov     [rsi+8F8h], r12d
 * 00000001409FF204: jmp     loc_1409F96F2
 * 00000001409FF209: mov     r14, [r13+8]
 * 00000001409FF20D: mov     r8d, [r13+10h]
 * 00000001409FF211: mov     r9, r14
 * 00000001409FF214: add     [rsi+828h], r8d
 * 00000001409FF21B: mov     rax, r14
 * 00000001409FF21E: mov     r11d, [rsi+814h]
 * 00000001409FF225: mov     r15, [rsi+818h]
 * 00000001409FF22C: lea     rcx, [r14+r8]
 * 00000001409FF230: cmp     r14, rcx
 * 00000001409FF233: jnb     short loc_1409FF245
 * 00000001409FF235: mov     edx, 40h ; '@'
 * 00000001409FF23A: prefetchnta byte ptr [rax]
 * 00000001409FF23D: add     rax, rdx
 * 00000001409FF240: cmp     rax, rcx
 * 00000001409FF243: jb      short loc_1409FF23A
 * 00000001409FF245: mov     r10d, r8d
 * 00000001409FF248: mov     rbx, r15
 * 00000001409FF24B: shr     r10d, 7
 * 00000001409FF24F: mov     r12d, 1
 * 00000001409FF255: test    r10d, r10d
 * 00000001409FF258: jz      short loc_1409FF2C5
 * 00000001409FF25A: mov     rsi, 7010008004002001h
 * 00000001409FF264: mov     edx, 8
 * 00000001409FF269: mov     rax, [r9]
 * 00000001409FF26C: mov     ecx, r11d
 * 00000001409FF26F: xor     rax, rbx
 * 00000001409FF272: mov     rbx, [r9+8]
 * 00000001409FF276: rol     rax, cl
 * 00000001409FF279: add     r9, 10h
 * 00000001409FF27D: xor     rbx, rax
 * 00000001409FF280: rol     rbx, cl
 * 00000001409FF283: sub     rdx, r12
 * 00000001409FF286: jnz     short loc_1409FF269
 * 00000001409FF288: mov     rcx, r9
 * 00000001409FF28B: sub     rcx, r14
 * 00000001409FF28E: xor     rcx, r15
 * 00000001409FF291: mov     rax, rcx
 * 00000001409FF294: rol     rax, 11h
 * 00000001409FF298: xor     rcx, rax
 * 00000001409FF29B: mov     rax, rsi
 * 00000001409FF29E: mul     rcx
 * 00000001409FF2A1: xor     r11d, edx
 * 00000001409FF2A4: mov     [rbp+0BE0h+var_638], rdx
 * 00000001409FF2AB: xor     r11d, eax
 * 00000001409FF2AE: mov     eax, 0FFFFFFFFh
 * 00000001409FF2B3: and     r11d, 3Fh
 * 00000001409FF2B7: cmovz   r11d, r12d
 * 00000001409FF2BB: add     r10d, eax
 * 00000001409FF2BE: jnz     short loc_1409FF264
 * 00000001409FF2C0: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FF2C5: and     r8d, 7Fh
 * 00000001409FF2C9: cmp     r8d, 8
 * 00000001409FF2CD: jb      short loc_1409FF2EC
 * 00000001409FF2CF: mov     edx, r8d
 * 00000001409FF2D2: shr     rdx, 3
 * 00000001409FF2D6: xor     rbx, [r9]
 * 00000001409FF2D9: mov     ecx, r11d
 * 00000001409FF2DC: rol     rbx, cl
 * 00000001409FF2DF: add     r9, 8
 * 00000001409FF2E3: add     r8d, 0FFFFFFF8h
 * 00000001409FF2E7: sub     rdx, r12
 * 00000001409FF2EA: jnz     short loc_1409FF2D6
 * 00000001409FF2EC: test    r8d, r8d
 * 00000001409FF2EF: jz      short loc_1409FF310
 * 00000001409FF2F1: mov     esi, 0FFFFFFFFh
 * 00000001409FF2F6: movzx   eax, byte ptr [r9]
 * 00000001409FF2FA: mov     ecx, r11d
 * 00000001409FF2FD: xor     rbx, rax
 * 00000001409FF300: add     r9, r12
 * 00000001409FF303: rol     rbx, cl
 * 00000001409FF306: add     r8d, esi
 * 00000001409FF309: jnz     short loc_1409FF2F6
 * 00000001409FF30B: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FF310: mov     rax, rbx
 * 00000001409FF313: shr     rax, 1Fh
 * 00000001409FF317: xor     r15d, r15d
 * 00000001409FF31A: jmp     short loc_1409FF322
 * 00000001409FF31C: xor     ebx, eax
 * 00000001409FF31E: shr     rax, 1Fh
 * 00000001409FF322: test    rax, rax
 * 00000001409FF325: jnz     short loc_1409FF31C
 * 00000001409FF327: mov     r8d, [r13+14h]
 * 00000001409FF32B: btr     ebx, 1Fh
 * 00000001409FF32F: cmp     ebx, r8d
 * 00000001409FF332: jz      loc_1409FF0C1
 * 00000001409FF338: mov     ecx, [r13+10h]
 * 00000001409FF33C: mov     rdx, [r13+8]
 * 00000001409FF340: test    rcx, rcx
 * 00000001409FF343: jz      loc_1409FF406
 * 00000001409FF349: mov     eax, [rsi+994h]
 * 00000001409FF34F: mov     r9d, 40h ; '@'
 * 00000001409FF355: test    r9b, al
 * 00000001409FF358: jz      loc_1409FF406
 * 00000001409FF35E: mov     r12, cr8
 * 00000001409FF362: lea     eax, [r9-3Eh]
 * 00000001409FF366: mov     cr8, rax
 * 00000001409FF36A: mov     r14, rdx
 * 00000001409FF36D: lea     rax, [rcx-1]
 * 00000001409FF371: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FF378: add     rax, rdx
 * 00000001409FF37B: or      rax, 0FFFh
 * 00000001409FF381: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FF388: lea     r13, [r14-1]
 * 00000001409FF38C: movzx   r15d, r12b
 * 00000001409FF390: mov     rax, [rsi+468h]
 * 00000001409FF397: xor     edx, edx
 * 00000001409FF399: mov     rcx, r14
 * 00000001409FF39C: call    KeGuardDispatchICall
 * 00000001409FF3A1: cmp     eax, 0C000022Dh
 * 00000001409FF3A6: jnz     short loc_1409FF3CC
 * 00000001409FF3A8: mov     eax, 1
 * 00000001409FF3AD: cmp     r12b, al
 * 00000001409FF3B0: ja      short loc_1409FF3D0
 * 00000001409FF3B2: movzx   r15d, r12b
 * 00000001409FF3B6: mov     cr8, r15
 * 00000001409FF3BA: mov     al, [r14]
 * 00000001409FF3BD: mov     rax, cr8
 * 00000001409FF3C1: mov     eax, 2
 * 00000001409FF3C6: mov     cr8, rax
 * 00000001409FF3CA: jmp     short loc_1409FF390
 * 00000001409FF3CC: test    eax, eax
 * 00000001409FF3CE: js      short loc_1409FF3F9
 * 00000001409FF3D0: mov     r11d, 1000h
 * 00000001409FF3D6: add     r14, r11
 * 00000001409FF3D9: add     r13, r11
 * 00000001409FF3DC: cmp     r13, [rbp+0BE0h+arg_8]
 * 00000001409FF3E3: jnz     short loc_1409FF38C
 * 00000001409FF3E5: mov     cr8, r15
 * 00000001409FF3E9: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FF3EE: mov     r12d, 1
 * 00000001409FF3F4: jmp     loc_1409FF0BE
 * 00000001409FF3F9: mov     cr8, r15
 * 00000001409FF3FD: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FF402: mov     r8d, [r13+14h]
 * 00000001409FF406: mov     eax, [rsi+8F8h]
 * 00000001409FF40C: xor     r15d, r15d
 * 00000001409FF40F: test    eax, eax
 * 00000001409FF411: jnz     short loc_1409FF42C
 * 00000001409FF413: mov     ecx, r8d
 * 00000001409FF416: mov     eax, ebx
 * 00000001409FF418: xor     rcx, rax
 * 00000001409FF41B: mov     rax, [rsi+590h]
 * 00000001409FF422: mov     [rax+18h], rcx
 * 00000001409FF426: mov     eax, [rsi+8F8h]
 * 00000001409FF42C: mov     rcx, [r13+8]
 * 00000001409FF430: mov     r14, 0B3B74BDEE4453415h
 * 00000001409FF43A: mov     r12d, 1
 * 00000001409FF440: test    eax, eax
 * 00000001409FF442: jnz     loc_1409FF0CB
 * 00000001409FF448: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF452: xor     edx, edx
 * 00000001409FF454: add     rax, rsi
 * 00000001409FF457: mov     [rsi+900h], rax
 * 00000001409FF45E: lea     rax, [r14+r13]
 * 00000001409FF462: mov     [rsi+908h], rax
 * 00000001409FF469: movsxd  rax, dword ptr [r13+0]
 * 00000001409FF46D: mov     [rsi+910h], rax
 * 00000001409FF474: mov     [rsi+918h], rcx
 * 00000001409FF47B: mov     rcx, rsi
 * 00000001409FF47E: mov     [rsi+8F8h], r12d
 * 00000001409FF485: call    $$b8
 * 00000001409FF48A: jmp     loc_1409FF0CB
 * 00000001409FF48F: xor     eax, eax
 * 00000001409FF491: mov     [rsi+824h], eax
 * 00000001409FF497: jmp     loc_1409FF3EE
 * 00000001409FF49C: mov     r14, [r13+8]
 * 00000001409FF4A0: mov     r8d, [r13+10h]
 * 00000001409FF4A4: mov     r9, r14
 * 00000001409FF4A7: add     [rsi+828h], r8d
 * 00000001409FF4AE: mov     rax, r14
 * 00000001409FF4B1: mov     r10d, [rsi+814h]
 * 00000001409FF4B8: mov     r15, [rsi+818h]
 * 00000001409FF4BF: lea     rcx, [r14+r8]
 * 00000001409FF4C3: cmp     r14, rcx
 * 00000001409FF4C6: jnb     short loc_1409FF4D9
 * 00000001409FF4C8: mov     r11d, 40h ; '@'
 * 00000001409FF4CE: prefetchnta byte ptr [rax]
 * 00000001409FF4D1: add     rax, r11
 * 00000001409FF4D4: cmp     rax, rcx
 * 00000001409FF4D7: jb      short loc_1409FF4CE
 * 00000001409FF4D9: mov     r11d, r8d
 * 00000001409FF4DC: mov     rbx, r15
 * 00000001409FF4DF: shr     r11d, 7
 * 00000001409FF4E3: mov     r12d, 0FFFFFFFFh
 * 00000001409FF4E9: test    r11d, r11d
 * 00000001409FF4EC: jz      short loc_1409FF55A
 * 00000001409FF4EE: mov     rdi, 7010008004002001h
 * 00000001409FF4F8: mov     eax, 8
 * 00000001409FF4FD: xor     rbx, [r9]
 * 00000001409FF500: mov     ecx, r10d
 * 00000001409FF503: rol     rbx, cl
 * 00000001409FF506: xor     rbx, [r9+8]
 * 00000001409FF50A: add     r9, 10h
 * 00000001409FF50E: rol     rbx, cl
 * 00000001409FF511: sub     rax, rdx
 * 00000001409FF514: jnz     short loc_1409FF4FD
 * 00000001409FF516: mov     rcx, r9
 * 00000001409FF519: sub     rcx, r14
 * 00000001409FF51C: xor     rcx, r15
 * 00000001409FF51F: mov     rax, rcx
 * 00000001409FF522: rol     rax, 11h
 * 00000001409FF526: xor     rcx, rax
 * 00000001409FF529: mov     rax, rdi
 * 00000001409FF52C: mul     rcx
 * 00000001409FF52F: xor     r10d, edx
 * 00000001409FF532: mov     [rbp+0BE0h+var_630], rdx
 * 00000001409FF539: xor     r10d, eax
 * 00000001409FF53C: mov     edx, 1
 * 00000001409FF541: and     r10d, 3Fh
 * 00000001409FF545: cmovz   r10d, edx
 * 00000001409FF549: add     r11d, r12d
 * 00000001409FF54C: jnz     short loc_1409FF4F8
 * 00000001409FF54E: mov     rsi, [rsp+0CE0h+var_C80]
 * 00000001409FF553: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FF55A: and     r8d, 7Fh
 * 00000001409FF55E: cmp     r8d, 8
 * 00000001409FF562: jb      short loc_1409FF581
 * 00000001409FF564: mov     eax, r8d
 * 00000001409FF567: shr     rax, 3
 * 00000001409FF56B: xor     rbx, [r9]
 * 00000001409FF56E: mov     ecx, r10d
 * 00000001409FF571: rol     rbx, cl
 * 00000001409FF574: add     r9, 8
 * 00000001409FF578: add     r8d, 0FFFFFFF8h
 * 00000001409FF57C: sub     rax, rdx
 * 00000001409FF57F: jnz     short loc_1409FF56B
 * 00000001409FF581: test    r8d, r8d
 * 00000001409FF584: jz      short loc_1409FF59B
 * 00000001409FF586: movzx   eax, byte ptr [r9]
 * 00000001409FF58A: mov     ecx, r10d
 * 00000001409FF58D: xor     rbx, rax
 * 00000001409FF590: add     r9, rdx
 * 00000001409FF593: rol     rbx, cl
 * 00000001409FF596: add     r8d, r12d
 * 00000001409FF599: jnz     short loc_1409FF586
 * 00000001409FF59B: mov     rax, rbx
 * 00000001409FF59E: shr     rax, 1Fh
 * 00000001409FF5A2: xor     ecx, ecx
 * 00000001409FF5A4: jmp     short loc_1409FF5AC
 * 00000001409FF5A6: xor     ebx, eax
 * 00000001409FF5A8: shr     rax, 1Fh
 * 00000001409FF5AC: test    rax, rax
 * 00000001409FF5AF: jnz     short loc_1409FF5A6
 * 00000001409FF5B1: mov     r13d, eax
 * 00000001409FF5B4: btr     ebx, 1Fh
 * 00000001409FF5B8: mov     rax, [rsp+0CE0h+var_C90]
 * 00000001409FF5BD: cmp     ebx, [rax+14h]
 * 00000001409FF5C0: jz      loc_1409FF3E9
 * 00000001409FF5C6: cmp     [rax], ecx
 * 00000001409FF5C8: jnz     short loc_1409FF5D1
 * 00000001409FF5CA: cmp     [rax+18h], ecx
 * 00000001409FF5CD: cmovnz  r13d, edx
 * 00000001409FF5D1: mov     ecx, [rax+10h]
 * 00000001409FF5D4: mov     rdx, [rax+8]
 * 00000001409FF5D8: test    rcx, rcx
 * 00000001409FF5DB: jz      loc_1409FF69A
 * 00000001409FF5E1: mov     eax, [rsi+994h]
 * 00000001409FF5E7: mov     r8d, 40h ; '@'
 * 00000001409FF5ED: test    r8b, al
 * 00000001409FF5F0: jz      loc_1409FF69A
 * 00000001409FF5F6: mov     r12, cr8
 * 00000001409FF5FA: lea     eax, [r8-3Eh]
 * 00000001409FF5FE: mov     cr8, rax
 * 00000001409FF602: mov     r14, rdx
 * 00000001409FF605: lea     rax, [rcx-1]
 * 00000001409FF609: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001409FF610: add     rax, rdx
 * 00000001409FF613: or      rax, 0FFFh
 * 00000001409FF619: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FF61E: lea     rax, [r14-1]
 * 00000001409FF622: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FF629: movzx   r15d, r12b
 * 00000001409FF62D: mov     rax, [rsi+468h]
 * 00000001409FF634: xor     edx, edx
 * 00000001409FF636: mov     rcx, r14
 * 00000001409FF639: call    KeGuardDispatchICall
 * 00000001409FF63E: cmp     eax, 0C000022Dh
 * 00000001409FF643: jnz     short loc_1409FF66C
 * 00000001409FF645: test    r13d, r13d
 * 00000001409FF648: jnz     short loc_1409FF696
 * 00000001409FF64A: lea     eax, [r13+1]
 * 00000001409FF64E: cmp     r12b, al
 * 00000001409FF651: ja      short loc_1409FF670
 * 00000001409FF653: movzx   r15d, r12b
 * 00000001409FF657: mov     cr8, r15
 * 00000001409FF65B: mov     al, [r14]
 * 00000001409FF65E: mov     rax, cr8
 * 00000001409FF662: lea     eax, [r13+2]
 * 00000001409FF666: mov     cr8, rax
 * 00000001409FF66A: jmp     short loc_1409FF62D
 * 00000001409FF66C: test    eax, eax
 * 00000001409FF66E: js      short loc_1409FF696
 * 00000001409FF670: mov     rax, [rbp+0BE0h+arg_8]
 * 00000001409FF677: mov     r11d, 1000h
 * 00000001409FF67D: add     rax, r11
 * 00000001409FF680: add     r14, r11
 * 00000001409FF683: mov     [rbp+0BE0h+arg_8], rax
 * 00000001409FF68A: cmp     rax, [rsp+0CE0h+var_C70]
 * 00000001409FF68F: jnz     short loc_1409FF629
 * 00000001409FF691: jmp     loc_1409FF3E5
 * 00000001409FF696: mov     cr8, r15
 * 00000001409FF69A: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FF69F: xor     r15d, r15d
 * 00000001409FF6A2: mov     eax, [rsi+8F8h]
 * 00000001409FF6A8: mov     ecx, [r13+14h]
 * 00000001409FF6AC: test    eax, eax
 * 00000001409FF6AE: jnz     loc_1409FF42C
 * 00000001409FF6B4: jmp     loc_1409FF416
 * 00000001409FF6B9: mov     rdx, r13
 * 00000001409FF6BC: mov     rcx, rsi
 * 00000001409FF6BF: call    sub_1403EA56C
 * 00000001409FF6C4: jmp     loc_1409F9318
 * 00000001409FF6C9: mov     rdx, r13
 * 00000001409FF6CC: mov     rcx, rsi
 * 00000001409FF6CF: call    sub_1403EB4D8
 * 00000001409FF6D4: jmp     loc_1409F9318
 * 00000001409FF6D9: mov     eax, [rsi+830h]
 * 00000001409FF6DF: test    dl, al
 * 00000001409FF6E1: jz      loc_1409F9318
 * 00000001409FF6E7: xor     eax, eax
 * 00000001409FF6E9: cmp     [rsi+980h], rax
 * 00000001409FF6F0: jz      short loc_1409FF72E
 * 00000001409FF6F2: mov     eax, [rsi+994h]
 * 00000001409FF6F8: test    al, 4
 * 00000001409FF6FA: jnz     short loc_1409FF72C
 * 00000001409FF6FC: mov     rax, [rsi+3D0h]
 * 00000001409FF703: lea     rdx, [rbp+0BE0h+var_840]
 * 00000001409FF70A: xor     r9d, r9d
 * 00000001409FF70D: xor     r8d, r8d
 * 00000001409FF710: lea     ecx, [r9+1Ah]
 * 00000001409FF714: call    KeGuardDispatchICall
 * 00000001409FF719: mov     rbx, [rbp+0BE0h+var_840]
 * 00000001409FF720: xor     ecx, ecx
 * 00000001409FF722: test    eax, eax
 * 00000001409FF724: mov     eax, ecx
 * 00000001409FF726: cmovs   rbx, rcx
 * 00000001409FF72A: jmp     short loc_1409FF731
 * 00000001409FF72C: xor     eax, eax
 * 00000001409FF72E: mov     rbx, rax
 * 00000001409FF731: mov     r14d, eax
 * 00000001409FF734: mov     [rsp+0CE0h+var_C78], eax
 * 00000001409FF738: mov     rax, [rsi+3B0h]
 * 00000001409FF73F: xor     ecx, ecx
 * 00000001409FF741: mov     [rsp+0CE0h+var_C88], rbx
 * 00000001409FF746: call    KeGuardDispatchICall
 * 00000001409FF74B: xor     r15d, r15d
 * 00000001409FF74E: lea     r12d, [r15+1]
 * 00000001409FF752: test    rax, rax
 * 00000001409FF755: jz      loc_1409FFF64
 * 00000001409FF75B: mov     rdi, rax
 * 00000001409FF75E: mov     rcx, rdi
 * 00000001409FF761: cmp     rbx, rdi
 * 00000001409FF764: jnz     loc_1409FFB2B
 * 00000001409FF76A: mov     rax, [rsi+3A0h]
 * 00000001409FF771: mov     r12, r13
 * 00000001409FF774: call    KeGuardDispatchICall
 * 00000001409FF779: test    eax, eax
 * 00000001409FF77B: js      loc_1409FFF34
 * 00000001409FF781: mov     rax, [rsi+3E0h]
 * 00000001409FF788: mov     rcx, rdi
 * 00000001409FF78B: call    KeGuardDispatchICall
 * 00000001409FF790: mov     bl, al
 * 00000001409FF792: mov     [rbp+0BE0h+var_B40], al
 * 00000001409FF798: mov     rax, [rsi+3E8h]
 * 00000001409FF79F: lea     rdx, [rbp+0BE0h+arg_18]
 * 00000001409FF7A6: mov     rcx, rdi
 * 00000001409FF7A9: call    KeGuardDispatchICall
 * 00000001409FF7AE: mov     byte ptr [rbp+0BE0h+arg_8], al
 * 00000001409FF7B4: mov     rcx, rdi
 * 00000001409FF7B7: mov     rax, [rsi+3F0h]
 * 00000001409FF7BE: call    KeGuardDispatchICall
 * 00000001409FF7C3: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FF7C8: cmp     bl, 61h ; 'a'
 * 00000001409FF7CB: jz      short loc_1409FF846
 * 00000001409FF7CD: mov     eax, [rsi+8F8h]
 * 00000001409FF7D3: test    eax, eax
 * 00000001409FF7D5: jnz     short loc_1409FF846
 * 00000001409FF7D7: mov     rax, [rsi+590h]
 * 00000001409FF7DE: movzx   ecx, bl
 * 00000001409FF7E1: xor     rcx, 61h
 * 00000001409FF7E5: mov     [rax+18h], rcx
 * 00000001409FF7E9: mov     eax, [rsi+8F8h]
 * 00000001409FF7EF: test    eax, eax
 * 00000001409FF7F1: jnz     short loc_1409FF846
 * 00000001409FF7F3: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF7FD: mov     r15d, 1
 * 00000001409FF803: add     rax, rsi
 * 00000001409FF806: xor     edx, edx
 * 00000001409FF808: mov     [rsi+900h], rax
 * 00000001409FF80F: mov     rcx, rsi
 * 00000001409FF812: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FF81C: add     rax, r13
 * 00000001409FF81F: mov     [rsi+908h], rax
 * 00000001409FF826: movsxd  rax, dword ptr [r13+0]
 * 00000001409FF82A: mov     [rsi+910h], rax
 * 00000001409FF831: mov     [rsi+918h], rdi
 * 00000001409FF838: mov     [rsi+8F8h], r15d
 * 00000001409FF83F: call    $$b8
 * 00000001409FF844: jmp     short loc_1409FF84C
 * 00000001409FF846: mov     r15d, 1
 * 00000001409FF84C: xor     eax, eax
 * 00000001409FF84E: movzx   ecx, bl
 * 00000001409FF851: and     ecx, 7
 * 00000001409FF854: mov     r14b, al
 * 00000001409FF857: mov     r13b, al
 * 00000001409FF85A: sub     ecx, 1
 * 00000001409FF85D: jz      short loc_1409FF8CF
 * 00000001409FF85F: cmp     ecx, 1
 * 00000001409FF862: jz      short loc_1409FF8C2
 * 00000001409FF864: test    bl, 7
 * 00000001409FF867: jz      short loc_1409FF8D2
 * 00000001409FF869: cmp     [rsi+8F8h], eax
 * 00000001409FF86F: jnz     short loc_1409FF8D2
 * 00000001409FF871: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF87B: xor     edx, edx
 * 00000001409FF87D: add     rax, rsi
 * 00000001409FF880: mov     rcx, rsi
 * 00000001409FF883: mov     [rsi+900h], rax
 * 00000001409FF88A: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FF894: add     rax, r12
 * 00000001409FF897: mov     [rsi+908h], rax
 * 00000001409FF89E: mov     rax, [rsp+0CE0h+var_C90]
 * 00000001409FF8A3: movsxd  rax, dword ptr [rax]
 * 00000001409FF8A6: mov     [rsi+910h], rax
 * 00000001409FF8AD: mov     [rsi+918h], rdi
 * 00000001409FF8B4: mov     [rsi+8F8h], r15d
 * 00000001409FF8BB: call    $$b8
 * 00000001409FF8C0: jmp     short loc_1409FF8D2
 * 00000001409FF8C2: mov     eax, 10h
 * 00000001409FF8C7: mov     r14b, al
 * 00000001409FF8CA: mov     r13b, al
 * 00000001409FF8CD: jmp     short loc_1409FF8D2
 * 00000001409FF8CF: mov     r14b, 30h ; '0'
 * 00000001409FF8D2: mov     r15, [rsi+5C8h]
 * 00000001409FF8D9: movzx   ebx, bl
 * 00000001409FF8DC: shr     rbx, 4
 * 00000001409FF8E0: mov     al, [r15+rbx*2]
 * 00000001409FF8E4: or      al, r14b
 * 00000001409FF8E7: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409FF8EC: cmp     al, byte ptr [rbp+0BE0h+arg_8]
 * 00000001409FF8F2: jz      short loc_1409FF94C
 * 00000001409FF8F4: xor     eax, eax
 * 00000001409FF8F6: cmp     [rsi+8F8h], eax
 * 00000001409FF8FC: jnz     short loc_1409FF94C
 * 00000001409FF8FE: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF908: xor     edx, edx
 * 00000001409FF90A: add     rax, rsi
 * 00000001409FF90D: mov     rcx, rsi
 * 00000001409FF910: mov     [rsi+900h], rax
 * 00000001409FF917: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FF921: add     rax, r12
 * 00000001409FF924: mov     [rsi+908h], rax
 * 00000001409FF92B: movsxd  rax, dword ptr [r14]
 * 00000001409FF92E: mov     [rsi+910h], rax
 * 00000001409FF935: mov     eax, 1
 * 00000001409FF93A: mov     [rsi+918h], rdi
 * 00000001409FF941: mov     [rsi+8F8h], eax
 * 00000001409FF947: call    $$b8
 * 00000001409FF94C: mov     al, [r15+rbx*2+1]
 * 00000001409FF951: mov     ebx, 1
 * 00000001409FF956: or      al, r13b
 * 00000001409FF959: cmp     al, [rbp+0BE0h+arg_18]
 * 00000001409FF95F: jz      short loc_1409FF9B4
 * 00000001409FF961: xor     eax, eax
 * 00000001409FF963: cmp     [rsi+8F8h], eax
 * 00000001409FF969: jnz     short loc_1409FF9B6
 * 00000001409FF96B: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FF975: xor     edx, edx
 * 00000001409FF977: add     rax, rsi
 * 00000001409FF97A: mov     rcx, rsi
 * 00000001409FF97D: mov     [rsi+900h], rax
 * 00000001409FF984: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FF98E: add     rax, r12
 * 00000001409FF991: mov     [rsi+908h], rax
 * 00000001409FF998: movsxd  rax, dword ptr [r14]
 * 00000001409FF99B: mov     [rsi+910h], rax
 * 00000001409FF9A2: mov     [rsi+918h], rdi
 * 00000001409FF9A9: mov     [rsi+8F8h], ebx
 * 00000001409FF9AF: call    $$b8
 * 00000001409FF9B4: xor     eax, eax
 * 00000001409FF9B6: cmp     rdi, [rsi+4E0h]
 * 00000001409FF9BD: jz      short loc_1409FF9D0
 * 00000001409FF9BF: mov     rax, [rsi+3D8h]
 * 00000001409FF9C6: mov     edx, ebx
 * 00000001409FF9C8: mov     rcx, rdi
 * 00000001409FF9CB: call    KeGuardDispatchICall
 * 00000001409FF9D0: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409FF9D4: mov     r14, rax
 * 00000001409FF9D7: test    rax, rax
 * 00000001409FF9DA: jz      loc_1409FFF08
 * 00000001409FF9E0: mov     rcx, [rax]
 * 00000001409FF9E3: mov     rbx, rax
 * 00000001409FF9E6: test    rcx, rcx
 * 00000001409FF9E9: jz      loc_1409FFEF9
 * 00000001409FF9EF: mov     r14b, byte ptr [rbp+0BE0h+arg_8]
 * 00000001409FF9F6: mov     r13, [rsp+0CE0h+var_C70]
 * 00000001409FF9FB: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 00000001409FF9FF: mov     [rbx], rcx
 * 00000001409FFA02: mov     rax, [rsi+1E0h]
 * 00000001409FFA09: call    KeGuardDispatchICall
 * 00000001409FFA0E: mov     rcx, [rbx+8]
 * 00000001409FFA12: movzx   edx, [rbp+0BE0h+arg_18]
 * 00000001409FFA19: mov     r15, rcx
 * 00000001409FFA1C: movzx   eax, r14b
 * 00000001409FFA20: and     r15, 0FFFFFFFFFFFF0000h
 * 00000001409FFA27: cmp     r15, r13
 * 00000001409FFA2A: cmovz   edx, eax
 * 00000001409FFA2D: mov     rax, [rsi+3F8h]
 * 00000001409FFA34: shr     rcx, 6
 * 00000001409FFA38: and     cl, 0Fh
 * 00000001409FFA3B: call    KeGuardDispatchICall
 * 00000001409FFA40: test    eax, eax
 * 00000001409FFA42: jnz     loc_1409FFB16
 * 00000001409FFA48: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FFA52: lea     r9d, [rax+1]
 * 00000001409FFA56: jz      short loc_1409FFAA6
 * 00000001409FFA58: mov     rcx, [rsi+0A80h]
 * 00000001409FFA5F: lea     edx, [rax+30h]
 * 00000001409FFA62: lea     r8d, [rax+6]
 * 00000001409FFA66: mov     rax, [r12]
 * 00000001409FFA6A: add     edx, 0FFFFFFF8h
 * 00000001409FFA6D: mov     [rcx], rax
 * 00000001409FFA70: add     r12, 8
 * 00000001409FFA74: add     rcx, 8
 * 00000001409FFA78: sub     r8, r9
 * 00000001409FFA7B: jnz     short loc_1409FFA66
 * 00000001409FFA7D: test    edx, edx
 * 00000001409FFA7F: jz      short loc_1409FFA9F
 * 00000001409FFA81: mov     r14d, 0FFFFFFFFh
 * 00000001409FFA87: mov     al, [r12]
 * 00000001409FFA8B: add     r12, r9
 * 00000001409FFA8E: mov     [rcx], al
 * 00000001409FFA90: add     rcx, r9
 * 00000001409FFA93: add     edx, r14d
 * 00000001409FFA96: jnz     short loc_1409FFA87
 * 00000001409FFA98: mov     r14b, byte ptr [rbp+0BE0h+arg_8]
 * 00000001409FFA9F: mov     r12, [rsi+0A80h]
 * 00000001409FFAA6: mov     [r12+18h], r15
 * 00000001409FFAAB: mov     rax, [rbx]
 * 00000001409FFAAE: mov     [r12+20h], rax
 * 00000001409FFAB3: mov     eax, [rbx+8]
 * 00000001409FFAB6: shr     rax, 6
 * 00000001409FFABA: and     al, 0Fh
 * 00000001409FFABC: mov     [r12+28h], al
 * 00000001409FFAC1: xor     eax, eax
 * 00000001409FFAC3: cmp     [rsi+8F8h], eax
 * 00000001409FFAC9: jnz     short loc_1409FFB16
 * 00000001409FFACB: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FFAD5: xor     edx, edx
 * 00000001409FFAD7: add     rax, rsi
 * 00000001409FFADA: mov     rcx, rsi
 * 00000001409FFADD: mov     [rsi+900h], rax
 * 00000001409FFAE4: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FFAEE: add     rax, r12
 * 00000001409FFAF1: mov     [rsi+908h], rax
 * 00000001409FFAF8: movsxd  rax, dword ptr [r12]
 * 00000001409FFAFC: mov     [rsi+910h], rax
 * 00000001409FFB03: mov     [rsi+918h], rdi
 * 00000001409FFB0A: mov     [rsi+8F8h], r9d
 * 00000001409FFB11: call    $$b8
 * 00000001409FFB16: add     rbx, 30h ; '0'
 * 00000001409FFB1A: mov     rcx, [rbx]
 * 00000001409FFB1D: test    rcx, rcx
 * 00000001409FFB20: jnz     loc_1409FF9FB
 * 00000001409FFB26: jmp     loc_1409FFEF5
 * 00000001409FFB2B: mov     rax, [rsi+3C8h]
 * 00000001409FFB32: call    KeGuardDispatchICall
 * 00000001409FFB37: test    eax, eax
 * 00000001409FFB39: jz      loc_1409FFF3A
 * 00000001409FFB3F: mov     rax, [rsi+3A0h]
 * 00000001409FFB46: mov     rcx, rdi
 * 00000001409FFB49: mov     r12, r13
 * 00000001409FFB4C: call    KeGuardDispatchICall
 * 00000001409FFB51: test    eax, eax
 * 00000001409FFB53: js      loc_1409FFF34
 * 00000001409FFB59: mov     rax, [rsi+3E0h]
 * 00000001409FFB60: mov     rcx, rdi
 * 00000001409FFB63: call    KeGuardDispatchICall
 * 00000001409FFB68: mov     bl, al
 * 00000001409FFB6A: mov     [rbp+0BE0h+var_B3F], al
 * 00000001409FFB70: mov     rax, [rsi+3E8h]
 * 00000001409FFB77: lea     rdx, [rbp+0BE0h+var_BEC]
 * 00000001409FFB7B: mov     rcx, rdi
 * 00000001409FFB7E: call    KeGuardDispatchICall
 * 00000001409FFB83: mov     byte ptr [rbp+0BE0h+arg_8], al
 * 00000001409FFB89: mov     rcx, rdi
 * 00000001409FFB8C: mov     rax, [rsi+3F0h]
 * 00000001409FFB93: call    KeGuardDispatchICall
 * 00000001409FFB98: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FFB9D: cmp     bl, 61h ; 'a'
 * 00000001409FFBA0: jz      short loc_1409FFC1B
 * 00000001409FFBA2: mov     eax, [rsi+8F8h]
 * 00000001409FFBA8: test    eax, eax
 * 00000001409FFBAA: jnz     short loc_1409FFC1B
 * 00000001409FFBAC: mov     rax, [rsi+590h]
 * 00000001409FFBB3: movzx   ecx, bl
 * 00000001409FFBB6: xor     rcx, 61h
 * 00000001409FFBBA: mov     [rax+18h], rcx
 * 00000001409FFBBE: mov     eax, [rsi+8F8h]
 * 00000001409FFBC4: test    eax, eax
 * 00000001409FFBC6: jnz     short loc_1409FFC1B
 * 00000001409FFBC8: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FFBD2: mov     r15d, 1
 * 00000001409FFBD8: add     rax, rsi
 * 00000001409FFBDB: xor     edx, edx
 * 00000001409FFBDD: mov     [rsi+900h], rax
 * 00000001409FFBE4: mov     rcx, rsi
 * 00000001409FFBE7: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FFBF1: add     rax, r13
 * 00000001409FFBF4: mov     [rsi+908h], rax
 * 00000001409FFBFB: movsxd  rax, dword ptr [r13+0]
 * 00000001409FFBFF: mov     [rsi+910h], rax
 * 00000001409FFC06: mov     [rsi+918h], rdi
 * 00000001409FFC0D: mov     [rsi+8F8h], r15d
 * 00000001409FFC14: call    $$b8
 * 00000001409FFC19: jmp     short loc_1409FFC21
 * 00000001409FFC1B: mov     r15d, 1
 * 00000001409FFC21: xor     eax, eax
 * 00000001409FFC23: movzx   ecx, bl
 * 00000001409FFC26: and     ecx, 7
 * 00000001409FFC29: mov     r14b, al
 * 00000001409FFC2C: mov     r13b, al
 * 00000001409FFC2F: sub     ecx, 1
 * 00000001409FFC32: jz      short loc_1409FFCA4
 * 00000001409FFC34: cmp     ecx, 1
 * 00000001409FFC37: jz      short loc_1409FFC97
 * 00000001409FFC39: test    bl, 7
 * 00000001409FFC3C: jz      short loc_1409FFCA7
 * 00000001409FFC3E: cmp     [rsi+8F8h], eax
 * 00000001409FFC44: jnz     short loc_1409FFCA7
 * 00000001409FFC46: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FFC50: xor     edx, edx
 * 00000001409FFC52: add     rax, rsi
 * 00000001409FFC55: mov     rcx, rsi
 * 00000001409FFC58: mov     [rsi+900h], rax
 * 00000001409FFC5F: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FFC69: add     rax, r12
 * 00000001409FFC6C: mov     [rsi+908h], rax
 * 00000001409FFC73: mov     rax, [rsp+0CE0h+var_C90]
 * 00000001409FFC78: movsxd  rax, dword ptr [rax]
 * 00000001409FFC7B: mov     [rsi+910h], rax
 * 00000001409FFC82: mov     [rsi+918h], rdi
 * 00000001409FFC89: mov     [rsi+8F8h], r15d
 * 00000001409FFC90: call    $$b8
 * 00000001409FFC95: jmp     short loc_1409FFCA7
 * 00000001409FFC97: mov     eax, 10h
 * 00000001409FFC9C: mov     r14b, al
 * 00000001409FFC9F: mov     r13b, al
 * 00000001409FFCA2: jmp     short loc_1409FFCA7
 * 00000001409FFCA4: mov     r14b, 30h ; '0'
 * 00000001409FFCA7: mov     r15, [rsi+5C8h]
 * 00000001409FFCAE: movzx   ebx, bl
 * 00000001409FFCB1: shr     rbx, 4
 * 00000001409FFCB5: mov     al, [r15+rbx*2]
 * 00000001409FFCB9: or      al, r14b
 * 00000001409FFCBC: mov     r14, [rsp+0CE0h+var_C90]
 * 00000001409FFCC1: cmp     al, byte ptr [rbp+0BE0h+arg_8]
 * 00000001409FFCC7: jz      short loc_1409FFD21
 * 00000001409FFCC9: xor     eax, eax
 * 00000001409FFCCB: cmp     [rsi+8F8h], eax
 * 00000001409FFCD1: jnz     short loc_1409FFD21
 * 00000001409FFCD3: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FFCDD: xor     edx, edx
 * 00000001409FFCDF: add     rax, rsi
 * 00000001409FFCE2: mov     rcx, rsi
 * 00000001409FFCE5: mov     [rsi+900h], rax
 * 00000001409FFCEC: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FFCF6: add     rax, r12
 * 00000001409FFCF9: mov     [rsi+908h], rax
 * 00000001409FFD00: movsxd  rax, dword ptr [r14]
 * 00000001409FFD03: mov     [rsi+910h], rax
 * 00000001409FFD0A: mov     eax, 1
 * 00000001409FFD0F: mov     [rsi+918h], rdi
 * 00000001409FFD16: mov     [rsi+8F8h], eax
 * 00000001409FFD1C: call    $$b8
 * 00000001409FFD21: mov     al, [r15+rbx*2+1]
 * 00000001409FFD26: mov     ebx, 1
 * 00000001409FFD2B: or      al, r13b
 * 00000001409FFD2E: cmp     al, [rbp+0BE0h+var_BEC]
 * 00000001409FFD31: jz      short loc_1409FFD86
 * 00000001409FFD33: xor     eax, eax
 * 00000001409FFD35: cmp     [rsi+8F8h], eax
 * 00000001409FFD3B: jnz     short loc_1409FFD88
 * 00000001409FFD3D: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FFD47: xor     edx, edx
 * 00000001409FFD49: add     rax, rsi
 * 00000001409FFD4C: mov     rcx, rsi
 * 00000001409FFD4F: mov     [rsi+900h], rax
 * 00000001409FFD56: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FFD60: add     rax, r12
 * 00000001409FFD63: mov     [rsi+908h], rax
 * 00000001409FFD6A: movsxd  rax, dword ptr [r14]
 * 00000001409FFD6D: mov     [rsi+910h], rax
 * 00000001409FFD74: mov     [rsi+918h], rdi
 * 00000001409FFD7B: mov     [rsi+8F8h], ebx
 * 00000001409FFD81: call    $$b8
 * 00000001409FFD86: xor     eax, eax
 * 00000001409FFD88: cmp     rdi, [rsi+4E0h]
 * 00000001409FFD8F: jz      short loc_1409FFDA2
 * 00000001409FFD91: mov     rax, [rsi+3D8h]
 * 00000001409FFD98: mov     edx, ebx
 * 00000001409FFD9A: mov     rcx, rdi
 * 00000001409FFD9D: call    KeGuardDispatchICall
 * 00000001409FFDA2: mov     [rbp+0BE0h+var_C60], rax
 * 00000001409FFDA6: mov     r14, rax
 * 00000001409FFDA9: test    rax, rax
 * 00000001409FFDAC: jz      loc_1409FFF08
 * 00000001409FFDB2: mov     rcx, [rax]
 * 00000001409FFDB5: mov     rbx, rax
 * 00000001409FFDB8: test    rcx, rcx
 * 00000001409FFDBB: jz      loc_1409FFEF9
 * 00000001409FFDC1: mov     r14b, byte ptr [rbp+0BE0h+arg_8]
 * 00000001409FFDC8: mov     r13, [rsp+0CE0h+var_C70]
 * 00000001409FFDCD: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 00000001409FFDD1: mov     [rbx], rcx
 * 00000001409FFDD4: mov     rax, [rsi+1E0h]
 * 00000001409FFDDB: call    KeGuardDispatchICall
 * 00000001409FFDE0: mov     rcx, [rbx+8]
 * 00000001409FFDE4: movzx   edx, [rbp+0BE0h+var_BEC]
 * 00000001409FFDE8: mov     r15, rcx
 * 00000001409FFDEB: movzx   eax, r14b
 * 00000001409FFDEF: and     r15, 0FFFFFFFFFFFF0000h
 * 00000001409FFDF6: cmp     r15, r13
 * 00000001409FFDF9: cmovz   edx, eax
 * 00000001409FFDFC: mov     rax, [rsi+3F8h]
 * 00000001409FFE03: shr     rcx, 6
 * 00000001409FFE07: and     cl, 0Fh
 * 00000001409FFE0A: call    KeGuardDispatchICall
 * 00000001409FFE0F: test    eax, eax
 * 00000001409FFE11: jnz     loc_1409FFEE5
 * 00000001409FFE17: test    dword ptr [rsi+990h], 40000000h
 * 00000001409FFE21: lea     r9d, [rax+1]
 * 00000001409FFE25: jz      short loc_1409FFE75
 * 00000001409FFE27: mov     rcx, [rsi+0A80h]
 * 00000001409FFE2E: lea     edx, [rax+30h]
 * 00000001409FFE31: lea     r8d, [rax+6]
 * 00000001409FFE35: mov     rax, [r12]
 * 00000001409FFE39: add     edx, 0FFFFFFF8h
 * 00000001409FFE3C: mov     [rcx], rax
 * 00000001409FFE3F: add     r12, 8
 * 00000001409FFE43: add     rcx, 8
 * 00000001409FFE47: sub     r8, r9
 * 00000001409FFE4A: jnz     short loc_1409FFE35
 * 00000001409FFE4C: test    edx, edx
 * 00000001409FFE4E: jz      short loc_1409FFE6E
 * 00000001409FFE50: mov     r14d, 0FFFFFFFFh
 * 00000001409FFE56: mov     al, [r12]
 * 00000001409FFE5A: add     r12, r9
 * 00000001409FFE5D: mov     [rcx], al
 * 00000001409FFE5F: add     rcx, r9
 * 00000001409FFE62: add     edx, r14d
 * 00000001409FFE65: jnz     short loc_1409FFE56
 * 00000001409FFE67: mov     r14b, byte ptr [rbp+0BE0h+arg_8]
 * 00000001409FFE6E: mov     r12, [rsi+0A80h]
 * 00000001409FFE75: mov     [r12+18h], r15
 * 00000001409FFE7A: mov     rax, [rbx]
 * 00000001409FFE7D: mov     [r12+20h], rax
 * 00000001409FFE82: mov     eax, [rbx+8]
 * 00000001409FFE85: shr     rax, 6
 * 00000001409FFE89: and     al, 0Fh
 * 00000001409FFE8B: mov     [r12+28h], al
 * 00000001409FFE90: xor     eax, eax
 * 00000001409FFE92: cmp     [rsi+8F8h], eax
 * 00000001409FFE98: jnz     short loc_1409FFEE5
 * 00000001409FFE9A: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001409FFEA4: xor     edx, edx
 * 00000001409FFEA6: add     rax, rsi
 * 00000001409FFEA9: mov     rcx, rsi
 * 00000001409FFEAC: mov     [rsi+900h], rax
 * 00000001409FFEB3: mov     rax, 0B3B74BDEE4453415h
 * 00000001409FFEBD: add     rax, r12
 * 00000001409FFEC0: mov     [rsi+908h], rax
 * 00000001409FFEC7: movsxd  rax, dword ptr [r12]
 * 00000001409FFECB: mov     [rsi+910h], rax
 * 00000001409FFED2: mov     [rsi+918h], rdi
 * 00000001409FFED9: mov     [rsi+8F8h], r9d
 * 00000001409FFEE0: call    $$b8
 * 00000001409FFEE5: add     rbx, 30h ; '0'
 * 00000001409FFEE9: mov     rcx, [rbx]
 * 00000001409FFEEC: test    rcx, rcx
 * 00000001409FFEEF: jnz     loc_1409FFDCD
 * 00000001409FFEF5: mov     r14, [rbp+0BE0h+var_C60]
 * 00000001409FFEF9: mov     rax, [rsi+100h]
 * 00000001409FFF00: mov     rcx, r14
 * 00000001409FFF03: call    KeGuardDispatchICall
 * 00000001409FFF08: mov     rax, [rsi+3A8h]
 * 00000001409FFF0F: mov     rcx, rdi
 * 00000001409FFF12: call    KeGuardDispatchICall
 * 00000001409FFF17: mov     r13, [rsp+0CE0h+var_C90]
 * 00000001409FFF1C: mov     eax, 8000h
 * 00000001409FFF21: add     [rsi+828h], eax
 * 00000001409FFF27: mov     r14d, [rsp+0CE0h+var_C78]
 * 00000001409FFF2C: xor     r15d, r15d
 * 00000001409FFF2F: mov     rbx, [rsp+0CE0h+var_C88]
 * 00000001409FFF34: mov     r12d, 1
 * 00000001409FFF3A: mov     rax, [rsi+3B0h]
 * 00000001409FFF41: add     r14d, r12d
 * 00000001409FFF44: mov     rcx, rdi
 * 00000001409FFF47: mov     [rsp+0CE0h+var_C78], r14d
 * 00000001409FFF4C: call    KeGuardDispatchICall
 * 00000001409FFF51: mov     rdi, rax
 * 00000001409FFF54: test    rax, rax
 * 00000001409FFF57: jnz     loc_1409FF75E
 * 00000001409FFF5D: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001409FFF64: mov     r13, [rsi+4E0h]
 * 00000001409FFF6B: mov     rax, [rsi+3A0h]
 * 00000001409FFF72: mov     rcx, r13
 * 00000001409FFF75: call    KeGuardDispatchICall
 * 00000001409FFF7A: test    eax, eax
 * 00000001409FFF7C: js      loc_140A00357
 * 00000001409FFF82: mov     rax, [rsi+3E0h]
 * 00000001409FFF89: mov     rcx, r13
 * 00000001409FFF8C: call    KeGuardDispatchICall
 * 00000001409FFF91: mov     bl, al
 * 00000001409FFF93: mov     [rbp+0BE0h+var_B3E], al
 * 00000001409FFF99: mov     rax, [rsi+3E8h]
 * 00000001409FFFA0: lea     rdx, [rbp+0BE0h+var_C00]
 * 00000001409FFFA4: mov     rcx, r13
 * 00000001409FFFA7: call    KeGuardDispatchICall
 * 00000001409FFFAC: mov     byte ptr [rbp+0BE0h+arg_8], al
 * 00000001409FFFB2: mov     rcx, r13
 * 00000001409FFFB5: mov     rax, [rsi+3F0h]
 * 00000001409FFFBC: call    KeGuardDispatchICall
 * 00000001409FFFC1: mov     [rsp+0CE0h+var_C70], rax
 * 00000001409FFFC6: cmp     bl, 72h ; 'r'
 * 00000001409FFFC9: jz      short loc_140A00042
 * 00000001409FFFCB: mov     eax, [rsi+8F8h]
 * 00000001409FFFD1: test    eax, eax
 * 00000001409FFFD3: jnz     short loc_140A00042
 * 00000001409FFFD5: mov     rax, [rsi+590h]
 * 00000001409FFFDC: movzx   ecx, bl
 * 00000001409FFFDF: xor     rcx, 72h
 * 00000001409FFFE3: mov     [rax+18h], rcx
 * 00000001409FFFE7: mov     eax, [rsi+8F8h]
 * 00000001409FFFED: test    eax, eax
 * 00000001409FFFEF: jnz     short loc_140A00042
 * 00000001409FFFF1: mov     r15, [rsp+0CE0h+var_C90]
 * 00000001409FFFF6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00000: add     rax, rsi
 * 0000000140A00003: xor     edx, edx
 * 0000000140A00005: mov     [rsi+900h], rax
 * 0000000140A0000C: mov     rcx, rsi
 * 0000000140A0000F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00019: add     rax, r15
 * 0000000140A0001C: mov     [rsi+908h], rax
 * 0000000140A00023: movsxd  rax, dword ptr [r15]
 * 0000000140A00026: mov     [rsi+910h], rax
 * 0000000140A0002D: mov     [rsi+918h], r13
 * 0000000140A00034: mov     [rsi+8F8h], r12d
 * 0000000140A0003B: call    $$b8
 * 0000000140A00040: jmp     short loc_140A00047
 * 0000000140A00042: mov     r15, [rsp+0CE0h+var_C90]
 * 0000000140A00047: xor     edx, edx
 * 0000000140A00049: movzx   ecx, bl
 * 0000000140A0004C: and     ecx, 7
 * 0000000140A0004F: mov     r14b, dl
 * 0000000140A00052: mov     r12b, dl
 * 0000000140A00055: sub     ecx, 1
 * 0000000140A00058: jz      short loc_140A000C7
 * 0000000140A0005A: cmp     ecx, 1
 * 0000000140A0005D: jz      short loc_140A000BA
 * 0000000140A0005F: test    bl, 7
 * 0000000140A00062: jz      short loc_140A000CA
 * 0000000140A00064: cmp     [rsi+8F8h], edx
 * 0000000140A0006A: jnz     short loc_140A000CA
 * 0000000140A0006C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00076: mov     rcx, rsi
 * 0000000140A00079: add     rax, rsi
 * 0000000140A0007C: mov     [rsi+900h], rax
 * 0000000140A00083: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0008D: add     rax, r15
 * 0000000140A00090: mov     [rsi+908h], rax
 * 0000000140A00097: movsxd  rax, dword ptr [r15]
 * 0000000140A0009A: mov     [rsi+910h], rax
 * 0000000140A000A1: lea     eax, [rdx+1]
 * 0000000140A000A4: mov     [rsi+918h], r13
 * 0000000140A000AB: mov     [rsi+8F8h], eax
 * 0000000140A000B1: call    $$b8
 * 0000000140A000B6: xor     edx, edx
 * 0000000140A000B8: jmp     short loc_140A000CA
 * 0000000140A000BA: mov     eax, 10h
 * 0000000140A000BF: mov     r14b, al
 * 0000000140A000C2: mov     r12b, al
 * 0000000140A000C5: jmp     short loc_140A000CA
 * 0000000140A000C7: mov     r14b, 30h ; '0'
 * 0000000140A000CA: mov     r15, [rsi+5C8h]
 * 0000000140A000D1: movzx   ebx, bl
 * 0000000140A000D4: shr     rbx, 4
 * 0000000140A000D8: mov     al, [r15+rbx*2]
 * 0000000140A000DC: or      al, r14b
 * 0000000140A000DF: mov     r14, [rsp+0CE0h+var_C90]
 * 0000000140A000E4: cmp     al, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A000EA: jz      short loc_140A00142
 * 0000000140A000EC: cmp     [rsi+8F8h], edx
 * 0000000140A000F2: jnz     short loc_140A00142
 * 0000000140A000F4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A000FE: xor     edx, edx
 * 0000000140A00100: add     rax, rsi
 * 0000000140A00103: mov     rcx, rsi
 * 0000000140A00106: mov     [rsi+900h], rax
 * 0000000140A0010D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00117: add     rax, r14
 * 0000000140A0011A: mov     [rsi+908h], rax
 * 0000000140A00121: movsxd  rax, dword ptr [r14]
 * 0000000140A00124: mov     [rsi+910h], rax
 * 0000000140A0012B: mov     eax, 1
 * 0000000140A00130: mov     [rsi+918h], r13
 * 0000000140A00137: mov     [rsi+8F8h], eax
 * 0000000140A0013D: call    $$b8
 * 0000000140A00142: mov     al, [r15+rbx*2+1]
 * 0000000140A00147: xor     r15d, r15d
 * 0000000140A0014A: or      al, r12b
 * 0000000140A0014D: lea     ebx, [r15+1]
 * 0000000140A00151: cmp     al, [rbp+0BE0h+var_C00]
 * 0000000140A00154: jz      short loc_140A001A8
 * 0000000140A00156: cmp     [rsi+8F8h], r15d
 * 0000000140A0015D: jnz     short loc_140A001A8
 * 0000000140A0015F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00169: xor     edx, edx
 * 0000000140A0016B: add     rax, rsi
 * 0000000140A0016E: mov     rcx, rsi
 * 0000000140A00171: mov     [rsi+900h], rax
 * 0000000140A00178: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00182: add     rax, r14
 * 0000000140A00185: mov     [rsi+908h], rax
 * 0000000140A0018C: movsxd  rax, dword ptr [r14]
 * 0000000140A0018F: mov     [rsi+910h], rax
 * 0000000140A00196: mov     [rsi+918h], r13
 * 0000000140A0019D: mov     [rsi+8F8h], ebx
 * 0000000140A001A3: call    $$b8
 * 0000000140A001A8: cmp     r13, [rsi+4E0h]
 * 0000000140A001AF: jz      short loc_140A001C7
 * 0000000140A001B1: mov     rax, [rsi+3D8h]
 * 0000000140A001B8: mov     edx, ebx
 * 0000000140A001BA: mov     rcx, r13
 * 0000000140A001BD: call    KeGuardDispatchICall
 * 0000000140A001C2: mov     r14, rax
 * 0000000140A001C5: jmp     short loc_140A001CA
 * 0000000140A001C7: mov     r14, r15
 * 0000000140A001CA: mov     [rbp+0BE0h+var_C60], r14
 * 0000000140A001CE: test    r14, r14
 * 0000000140A001D1: jz      loc_140A00338
 * 0000000140A001D7: mov     rcx, [r14]
 * 0000000140A001DA: mov     rbx, r14
 * 0000000140A001DD: test    rcx, rcx
 * 0000000140A001E0: jz      loc_140A00329
 * 0000000140A001E6: mov     dil, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A001ED: mov     r12, [rsp+0CE0h+var_C70]
 * 0000000140A001F2: mov     r14, [rsp+0CE0h+var_C90]
 * 0000000140A001F7: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140A001FB: mov     [rbx], rcx
 * 0000000140A001FE: mov     rax, [rsi+1E0h]
 * 0000000140A00205: call    KeGuardDispatchICall
 * 0000000140A0020A: mov     rcx, [rbx+8]
 * 0000000140A0020E: movzx   edx, [rbp+0BE0h+var_C00]
 * 0000000140A00212: mov     r15, rcx
 * 0000000140A00215: movzx   eax, dil
 * 0000000140A00219: and     r15, 0FFFFFFFFFFFF0000h
 * 0000000140A00220: cmp     r15, r12
 * 0000000140A00223: cmovz   edx, eax
 * 0000000140A00226: mov     rax, [rsi+3F8h]
 * 0000000140A0022D: shr     rcx, 6
 * 0000000140A00231: and     cl, 0Fh
 * 0000000140A00234: call    KeGuardDispatchICall
 * 0000000140A00239: test    eax, eax
 * 0000000140A0023B: jnz     loc_140A0030B
 * 0000000140A00241: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A0024B: lea     r10d, [rax+1]
 * 0000000140A0024F: jz      short loc_140A0029B
 * 0000000140A00251: mov     rcx, [rsi+0A80h]
 * 0000000140A00258: lea     edx, [rax+30h]
 * 0000000140A0025B: lea     r8d, [rax+6]
 * 0000000140A0025F: mov     rax, [r14]
 * 0000000140A00262: add     edx, 0FFFFFFF8h
 * 0000000140A00265: mov     [rcx], rax
 * 0000000140A00268: add     r14, 8
 * 0000000140A0026C: add     rcx, 8
 * 0000000140A00270: sub     r8, r10
 * 0000000140A00273: jnz     short loc_140A0025F
 * 0000000140A00275: test    edx, edx
 * 0000000140A00277: jz      short loc_140A00294
 * 0000000140A00279: mov     edi, 0FFFFFFFFh
 * 0000000140A0027E: mov     al, [r14]
 * 0000000140A00281: add     r14, r10
 * 0000000140A00284: mov     [rcx], al
 * 0000000140A00286: add     rcx, r10
 * 0000000140A00289: add     edx, edi
 * 0000000140A0028B: jnz     short loc_140A0027E
 * 0000000140A0028D: mov     dil, byte ptr [rbp+0BE0h+arg_8]
 * 0000000140A00294: mov     r14, [rsi+0A80h]
 * 0000000140A0029B: mov     [r14+18h], r15
 * 0000000140A0029F: xor     r15d, r15d
 * 0000000140A002A2: mov     rax, [rbx]
 * 0000000140A002A5: mov     [r14+20h], rax
 * 0000000140A002A9: mov     eax, [rbx+8]
 * 0000000140A002AC: shr     rax, 6
 * 0000000140A002B0: and     al, 0Fh
 * 0000000140A002B2: mov     [r14+28h], al
 * 0000000140A002B6: cmp     [rsi+8F8h], r15d
 * 0000000140A002BD: jnz     short loc_140A0030E
 * 0000000140A002BF: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A002C9: xor     edx, edx
 * 0000000140A002CB: add     rax, rsi
 * 0000000140A002CE: mov     rcx, rsi
 * 0000000140A002D1: mov     [rsi+900h], rax
 * 0000000140A002D8: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A002E2: add     rax, r14
 * 0000000140A002E5: mov     [rsi+908h], rax
 * 0000000140A002EC: movsxd  rax, dword ptr [r14]
 * 0000000140A002EF: mov     [rsi+910h], rax
 * 0000000140A002F6: mov     [rsi+918h], r13
 * 0000000140A002FD: mov     [rsi+8F8h], r10d
 * 0000000140A00304: call    $$b8
 * 0000000140A00309: jmp     short loc_140A0030E
 * 0000000140A0030B: xor     r15d, r15d
 * 0000000140A0030E: add     rbx, 30h ; '0'
 * 0000000140A00312: mov     rcx, [rbx]
 * 0000000140A00315: test    rcx, rcx
 * 0000000140A00318: jnz     loc_140A001F7
 * 0000000140A0031E: mov     r14, [rbp+0BE0h+var_C60]
 * 0000000140A00322: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A00329: mov     rax, [rsi+100h]
 * 0000000140A00330: mov     rcx, r14
 * 0000000140A00333: call    KeGuardDispatchICall
 * 0000000140A00338: mov     rax, [rsi+3A8h]
 * 0000000140A0033F: mov     rcx, r13
 * 0000000140A00342: call    KeGuardDispatchICall
 * 0000000140A00347: mov     r14d, [rsp+0CE0h+var_C78]
 * 0000000140A0034C: mov     eax, 8000h
 * 0000000140A00351: add     [rsi+828h], eax
 * 0000000140A00357: mov     rcx, [rsp+0CE0h+var_C88]
 * 0000000140A0035C: test    rcx, rcx
 * 0000000140A0035F: jz      short loc_140A0036D
 * 0000000140A00361: mov     rax, [rsi+1E0h]
 * 0000000140A00368: call    KeGuardDispatchICall
 * 0000000140A0036D: shl     r14d, 8
 * 0000000140A00371: add     [rsi+828h], r14d
 * 0000000140A00378: jmp     loc_1409F931B
 * 0000000140A0037D: test    [r13+2Ah], dl
 * 0000000140A00381: jz      short loc_140A003C1
 * 0000000140A00383: xor     r15d, r15d
 * 0000000140A00386: cmp     [rsi+980h], r15
 * 0000000140A0038D: jz      loc_140A0044D
 * 0000000140A00393: mov     ecx, [rsi+994h]
 * 0000000140A00399: test    cl, 4
 * 0000000140A0039C: jnz     loc_140A0044D
 * 0000000140A003A2: cmp     [rsi+824h], r15d
 * 0000000140A003A9: jnz     loc_140A00444
 * 0000000140A003AF: mov     eax, ecx
 * 0000000140A003B1: shl     eax, 3
 * 0000000140A003B4: xor     eax, ecx
 * 0000000140A003B6: and     eax, 20h
 * 0000000140A003B9: xor     eax, ecx
 * 0000000140A003BB: mov     [rsi+994h], eax
 * 0000000140A003C1: mov     r10, [r13+8]
 * 0000000140A003C5: xor     r14d, r14d
 * 0000000140A003C8: mov     r8d, [rsi+824h]
 * 0000000140A003CF: mov     [rbp+0BE0h+var_C10], r10
 * 0000000140A003D3: lea     rax, [r8+r8*2]
 * 0000000140A003D7: lea     rcx, [r10+rax*4]
 * 0000000140A003DB: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A003E5: lea     r11, [rcx+0Ch]
 * 0000000140A003E9: mov     [rsp+0CE0h+var_C70], rcx
 * 0000000140A003EE: mov     ecx, [r13+24h]
 * 0000000140A003F2: mul     rcx
 * 0000000140A003F5: mov     [rbp+0BE0h+var_C60], r11
 * 0000000140A003F9: mov     r9, rdx
 * 0000000140A003FC: shr     r9, 3
 * 0000000140A00400: mov     eax, r9d
 * 0000000140A00403: mov     [rbp+0BE0h+var_C48], r9
 * 0000000140A00407: lea     rcx, [rax+rax*2]
 * 0000000140A0040B: lea     rax, [r10+rcx*4]
 * 0000000140A0040F: mov     [rbp+0BE0h+var_C20], rax
 * 0000000140A00413: lea     rax, [r13+30h]
 * 0000000140A00417: lea     r15, [rax+r8]
 * 0000000140A0041B: mov     [rsp+0CE0h+var_C88], r15
 * 0000000140A00420: lea     r10d, [r9-1]
 * 0000000140A00424: mov     dword ptr [rbp+0BE0h+arg_8], r10d
 * 0000000140A0042B: test    r9d, r9d
 * 0000000140A0042E: jz      short loc_140A00459
 * 0000000140A00430: mov     edx, r10d
 * 0000000140A00433: add     rdx, 7
 * 0000000140A00437: and     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140A0043B: add     rdx, rax
 * 0000000140A0043E: mov     [rbp+0BE0h+var_C50], rdx
 * 0000000140A00442: jmp     short loc_140A00467
 * 0000000140A00444: test    cl, 20h
 * 0000000140A00447: jz      loc_140A003C1
 * 0000000140A0044D: mov     [rsi+824h], r15d
 * 0000000140A00454: jmp     loc_1409F931B
 * 0000000140A00459: mov     rdx, rax
 * 0000000140A0045C: mov     [rbp+0BE0h+var_C50], rax
 * 0000000140A00460: mov     dword ptr [rbp+0BE0h+arg_8], r10d
 * 0000000140A00467: movzx   eax, word ptr [r13+28h]
 * 0000000140A0046C: lea     rcx, [rax+rax*2]
 * 0000000140A00470: lea     rax, [rdx+rcx*8]
 * 0000000140A00474: mov     [rsp+0CE0h+BugCheckParameter2], rax
 * 0000000140A00479: test    r9d, r9d
 * 0000000140A0047C: jz      loc_140A007AB
 * 0000000140A00482: cmp     r8d, r10d
 * 0000000140A00485: jnb     loc_140A007AB
 * 0000000140A0048B: mov     rdi, [rsp+0CE0h+var_C70]
 * 0000000140A00490: cmp     [r15], r14b
 * 0000000140A00493: jl      loc_140A00738
 * 0000000140A00499: mov     eax, [rdi+4]
 * 0000000140A0049C: mov     r9d, [r11]
 * 0000000140A0049F: mov     r13d, eax
 * 0000000140A004A2: sub     r9d, eax
 * 0000000140A004A5: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A004AA: mov     r12d, r9d
 * 0000000140A004AD: add     r13, [rax+18h]
 * 0000000140A004B1: add     [rsi+828h], r9d
 * 0000000140A004B8: mov     r10, r13
 * 0000000140A004BB: mov     ebx, [rsi+814h]
 * 0000000140A004C1: mov     rax, r13
 * 0000000140A004C4: mov     r14, [rsi+818h]
 * 0000000140A004CB: lea     rcx, [r9+r13]
 * 0000000140A004CF: mov     [rsp+0CE0h+var_C70], r13
 * 0000000140A004D4: cmp     r13, rcx
 * 0000000140A004D7: jnb     short loc_140A004E9
 * 0000000140A004D9: mov     edx, 40h ; '@'
 * 0000000140A004DE: prefetchnta byte ptr [rax]
 * 0000000140A004E1: add     rax, rdx
 * 0000000140A004E4: cmp     rax, rcx
 * 0000000140A004E7: jb      short loc_140A004DE
 * 0000000140A004E9: mov     r11d, r9d
 * 0000000140A004EC: mov     r8, r14
 * 0000000140A004EF: shr     r11d, 7
 * 0000000140A004F3: test    r11d, r11d
 * 0000000140A004F6: jz      short loc_140A0056A
 * 0000000140A004F8: mov     rsi, 7010008004002001h
 * 0000000140A00502: mov     edx, 8
 * 0000000140A00507: lea     r15d, [rdx-7]
 * 0000000140A0050B: mov     rax, [r10]
 * 0000000140A0050E: mov     ecx, ebx
 * 0000000140A00510: xor     rax, r8
 * 0000000140A00513: mov     r8, [r10+8]
 * 0000000140A00517: rol     rax, cl
 * 0000000140A0051A: add     r10, 10h
 * 0000000140A0051E: xor     r8, rax
 * 0000000140A00521: rol     r8, cl
 * 0000000140A00524: sub     rdx, r15
 * 0000000140A00527: jnz     short loc_140A0050B
 * 0000000140A00529: mov     rcx, r10
 * 0000000140A0052C: sub     rcx, r13
 * 0000000140A0052F: xor     rcx, r14
 * 0000000140A00532: mov     rax, rcx
 * 0000000140A00535: rol     rax, 11h
 * 0000000140A00539: xor     rcx, rax
 * 0000000140A0053C: mov     rax, rsi
 * 0000000140A0053F: mul     rcx
 * 0000000140A00542: xor     ebx, edx
 * 0000000140A00544: mov     [rbp+0BE0h+var_628], rdx
 * 0000000140A0054B: xor     ebx, eax
 * 0000000140A0054D: mov     rax, r15
 * 0000000140A00550: and     ebx, 3Fh
 * 0000000140A00553: cmovz   ebx, eax
 * 0000000140A00556: mov     eax, 0FFFFFFFFh
 * 0000000140A0055B: add     r11d, eax
 * 0000000140A0055E: jnz     short loc_140A00502
 * 0000000140A00560: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A00565: mov     r15, [rsp+0CE0h+var_C88]
 * 0000000140A0056A: and     r9d, 7Fh
 * 0000000140A0056E: mov     r11d, 1
 * 0000000140A00574: cmp     r9d, 8
 * 0000000140A00578: jb      short loc_140A00596
 * 0000000140A0057A: mov     edx, r9d
 * 0000000140A0057D: shr     rdx, 3
 * 0000000140A00581: xor     r8, [r10]
 * 0000000140A00584: mov     ecx, ebx
 * 0000000140A00586: rol     r8, cl
 * 0000000140A00589: add     r10, 8
 * 0000000140A0058D: add     r9d, 0FFFFFFF8h
 * 0000000140A00591: sub     rdx, r11
 * 0000000140A00594: jnz     short loc_140A00581
 * 0000000140A00596: xor     r14d, r14d
 * 0000000140A00599: test    r9d, r9d
 * 0000000140A0059C: jz      short loc_140A005BB
 * 0000000140A0059E: mov     r14d, 0FFFFFFFFh
 * 0000000140A005A4: movzx   eax, byte ptr [r10]
 * 0000000140A005A8: mov     ecx, ebx
 * 0000000140A005AA: xor     r8, rax
 * 0000000140A005AD: add     r10, r11
 * 0000000140A005B0: rol     r8, cl
 * 0000000140A005B3: add     r9d, r14d
 * 0000000140A005B6: jnz     short loc_140A005A4
 * 0000000140A005B8: xor     r14d, r14d
 * 0000000140A005BB: mov     rax, r8
 * 0000000140A005BE: jmp     short loc_140A005C3
 * 0000000140A005C0: xor     r8b, al
 * 0000000140A005C3: shr     rax, 7
 * 0000000140A005C7: test    rax, rax
 * 0000000140A005CA: jnz     short loc_140A005C0
 * 0000000140A005CC: movzx   ecx, byte ptr [r15]
 * 0000000140A005D0: mov     eax, ecx
 * 0000000140A005D2: movzx   edx, r8b
 * 0000000140A005D6: and     edx, 7Fh
 * 0000000140A005D9: and     eax, 7Fh
 * 0000000140A005DC: mov     [rbp+0BE0h+var_C58], edx
 * 0000000140A005DF: cmp     edx, eax
 * 0000000140A005E1: jz      loc_140A00720
 * 0000000140A005E7: test    r12, r12
 * 0000000140A005EA: jz      loc_140A006A3
 * 0000000140A005F0: mov     eax, [rsi+994h]
 * 0000000140A005F6: mov     r8d, 40h ; '@'
 * 0000000140A005FC: test    r8b, al
 * 0000000140A005FF: jz      loc_140A006A3
 * 0000000140A00605: mov     r15, cr8
 * 0000000140A00609: lea     eax, [r8-3Eh]
 * 0000000140A0060D: mov     cr8, rax
 * 0000000140A00611: mov     rbx, r13
 * 0000000140A00614: dec     r12
 * 0000000140A00617: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A0061E: add     r13, r12
 * 0000000140A00621: or      r13, 0FFFh
 * 0000000140A00628: lea     r12, [rbx-1]
 * 0000000140A0062C: movzx   r14d, r15b
 * 0000000140A00630: mov     rax, [rsi+468h]
 * 0000000140A00637: xor     edx, edx
 * 0000000140A00639: mov     rcx, rbx
 * 0000000140A0063C: call    KeGuardDispatchICall
 * 0000000140A00641: cmp     eax, 0C000022Dh
 * 0000000140A00646: jnz     short loc_140A0066B
 * 0000000140A00648: mov     eax, 1
 * 0000000140A0064D: cmp     r15b, al
 * 0000000140A00650: ja      short loc_140A00671
 * 0000000140A00652: movzx   r14d, r15b
 * 0000000140A00656: mov     cr8, r14
 * 0000000140A0065A: mov     al, [rbx]
 * 0000000140A0065C: mov     rax, cr8
 * 0000000140A00660: mov     eax, 2
 * 0000000140A00665: mov     cr8, rax
 * 0000000140A00669: jmp     short loc_140A00630
 * 0000000140A0066B: xor     ecx, ecx
 * 0000000140A0066D: test    eax, eax
 * 0000000140A0066F: js      short loc_140A0068D
 * 0000000140A00671: mov     eax, 1000h
 * 0000000140A00676: add     rbx, rax
 * 0000000140A00679: add     r12, rax
 * 0000000140A0067C: cmp     r12, r13
 * 0000000140A0067F: jnz     short loc_140A0062C
 * 0000000140A00681: mov     cr8, r14
 * 0000000140A00685: xor     r14d, r14d
 * 0000000140A00688: jmp     loc_140A00720
 * 0000000140A0068D: mov     cr8, r14
 * 0000000140A00691: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A00696: xor     r14d, r14d
 * 0000000140A00699: mov     edx, [rbp+0BE0h+var_C58]
 * 0000000140A0069C: mov     r13, [rsp+0CE0h+var_C70]
 * 0000000140A006A1: mov     cl, [rax]
 * 0000000140A006A3: movzx   eax, cl
 * 0000000140A006A6: mov     ecx, [rsi+8F8h]
 * 0000000140A006AC: and     eax, 7Fh
 * 0000000140A006AF: test    ecx, ecx
 * 0000000140A006B1: jnz     short loc_140A00720
 * 0000000140A006B3: mov     ecx, edx
 * 0000000140A006B5: xor     rcx, rax
 * 0000000140A006B8: mov     rax, [rsi+590h]
 * 0000000140A006BF: mov     [rax+18h], rcx
 * 0000000140A006C3: mov     ecx, [rsi+8F8h]
 * 0000000140A006C9: test    ecx, ecx
 * 0000000140A006CB: jnz     short loc_140A00720
 * 0000000140A006CD: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A006D2: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A006DC: add     rax, rsi
 * 0000000140A006DF: xor     edx, edx
 * 0000000140A006E1: mov     [rsi+900h], rax
 * 0000000140A006E8: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A006F2: add     rax, rcx
 * 0000000140A006F5: mov     [rsi+908h], rax
 * 0000000140A006FC: movsxd  rax, dword ptr [rcx]
 * 0000000140A006FF: mov     rcx, rsi
 * 0000000140A00702: mov     [rsi+910h], rax
 * 0000000140A00709: mov     eax, 1
 * 0000000140A0070E: mov     [rsi+918h], r13
 * 0000000140A00715: mov     [rsi+8F8h], eax
 * 0000000140A0071B: call    $$b8
 * 0000000140A00720: mov     r15, [rsp+0CE0h+var_C88]
 * 0000000140A00725: mov     eax, 40h ; '@'
 * 0000000140A0072A: add     [rsi+828h], eax
 * 0000000140A00730: mov     r11, [rbp+0BE0h+var_C60]
 * 0000000140A00734: mov     r12, [rbp+0BE0h+var_C08]
 * 0000000140A00738: mov     eax, 0Ch
 * 0000000140A0073D: inc     r15
 * 0000000140A00740: add     r11, rax
 * 0000000140A00743: mov     [rsp+0CE0h+var_C88], r15
 * 0000000140A00748: add     rdi, rax
 * 0000000140A0074B: mov     [rbp+0BE0h+var_C60], r11
 * 0000000140A0074F: cmp     r11, [rbp+0BE0h+var_C20]
 * 0000000140A00753: jnb     short loc_140A00765
 * 0000000140A00755: mov     eax, [r12]
 * 0000000140A00759: cmp     [rsi+828h], eax
 * 0000000140A0075F: jl      loc_140A00490
 * 0000000140A00765: sub     rdi, [rbp+0BE0h+var_C10]
 * 0000000140A00769: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140A00773: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0077A: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A0077E: imul    rdi
 * 0000000140A00781: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A00788: sar     rdx, 1
 * 0000000140A0078B: mov     rax, rdx
 * 0000000140A0078E: shr     rax, 3Fh
 * 0000000140A00792: add     rdx, rax
 * 0000000140A00795: mov     r8d, edx
 * 0000000140A00798: mov     [rsi+824h], edx
 * 0000000140A0079E: mov     rdx, [rbp+0BE0h+var_C50]
 * 0000000140A007A2: cmp     r8d, r10d
 * 0000000140A007A5: jb      loc_1409F9318
 * 0000000140A007AB: mov     eax, [rsi+82Ch]
 * 0000000140A007B1: xor     r15d, r15d
 * 0000000140A007B4: cmp     [rsi+828h], eax
 * 0000000140A007BA: jge     loc_1409F931B
 * 0000000140A007C0: test    r9d, r9d
 * 0000000140A007C3: jz      short loc_140A007CB
 * 0000000140A007C5: sub     r8d, r9d
 * 0000000140A007C8: inc     r8d
 * 0000000140A007CB: mov     eax, r8d
 * 0000000140A007CE: lea     rcx, [rax+rax*2]
 * 0000000140A007D2: lea     rcx, [rdx+rcx*8]
 * 0000000140A007D6: mov     [rbp+0BE0h+var_C60], rcx
 * 0000000140A007DA: mov     rdi, [rsp+0CE0h+var_C90]
 * 0000000140A007DF: lea     rdx, [rcx+8]
 * 0000000140A007E3: mov     eax, 2
 * 0000000140A007E8: mov     [rbp+0BE0h+arg_8], rdx
 * 0000000140A007EF: mov     r12d, eax
 * 0000000140A007F2: mov     [rsp+0CE0h+var_C88], rax
 * 0000000140A007F7: lea     eax, [r12-1]
 * 0000000140A007FC: lea     ecx, [rax+0Bh]
 * 0000000140A007FF: cmp     [rdx], r15d
 * 0000000140A00802: jl      loc_140A00A16
 * 0000000140A00808: mov     eax, [rdx-8]
 * 0000000140A0080B: mov     r8d, [rdx-4]
 * 0000000140A0080F: mov     r13d, eax
 * 0000000140A00812: add     r13, [rdi+18h]
 * 0000000140A00816: sub     r8d, eax
 * 0000000140A00819: add     [rsi+828h], r8d
 * 0000000140A00820: mov     r9, r13
 * 0000000140A00823: mov     r10d, [rsi+814h]
 * 0000000140A0082A: mov     rax, r13
 * 0000000140A0082D: mov     r14, [rsi+818h]
 * 0000000140A00834: lea     rcx, [r8+r13]
 * 0000000140A00838: mov     r15d, r8d
 * 0000000140A0083B: mov     [rbp+0BE0h+var_C50], r13
 * 0000000140A0083F: mov     [rsp+0CE0h+var_C70], r15
 * 0000000140A00844: cmp     r13, rcx
 * 0000000140A00847: jnb     short loc_140A0085A
 * 0000000140A00849: mov     r11d, 40h ; '@'
 * 0000000140A0084F: prefetchnta byte ptr [rax]
 * 0000000140A00852: add     rax, r11
 * 0000000140A00855: cmp     rax, rcx
 * 0000000140A00858: jb      short loc_140A0084F
 * 0000000140A0085A: mov     r11d, r8d
 * 0000000140A0085D: mov     rbx, r14
 * 0000000140A00860: shr     r11d, 7
 * 0000000140A00864: test    r11d, r11d
 * 0000000140A00867: jz      short loc_140A008E5
 * 0000000140A00869: mov     esi, 0FFFFFFFFh
 * 0000000140A0086E: mov     r12d, 1
 * 0000000140A00874: mov     r15, 7010008004002001h
 * 0000000140A0087E: mov     eax, 8
 * 0000000140A00883: xor     rbx, [r9]
 * 0000000140A00886: mov     ecx, r10d
 * 0000000140A00889: rol     rbx, cl
 * 0000000140A0088C: xor     rbx, [r9+8]
 * 0000000140A00890: add     r9, 10h
 * 0000000140A00894: rol     rbx, cl
 * 0000000140A00897: sub     rax, r12
 * 0000000140A0089A: jnz     short loc_140A00883
 * 0000000140A0089C: mov     rcx, r9
 * 0000000140A0089F: sub     rcx, r13
 * 0000000140A008A2: xor     rcx, r14
 * 0000000140A008A5: mov     rax, rcx
 * 0000000140A008A8: rol     rax, 11h
 * 0000000140A008AC: xor     rcx, rax
 * 0000000140A008AF: mov     rax, r15
 * 0000000140A008B2: mul     rcx
 * 0000000140A008B5: xor     r10d, edx
 * 0000000140A008B8: mov     [rbp+0BE0h+var_620], rdx
 * 0000000140A008BF: xor     r10d, eax
 * 0000000140A008C2: and     r10d, 3Fh
 * 0000000140A008C6: cmovz   r10d, r12d
 * 0000000140A008CA: add     r11d, esi
 * 0000000140A008CD: jnz     short loc_140A0087E
 * 0000000140A008CF: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A008D4: mov     r15, [rsp+0CE0h+var_C70]
 * 0000000140A008D9: mov     rdx, [rbp+0BE0h+arg_8]
 * 0000000140A008E0: mov     r12, [rsp+0CE0h+var_C88]
 * 0000000140A008E5: and     r8d, 7Fh
 * 0000000140A008E9: mov     r14d, 1
 * 0000000140A008EF: cmp     r8d, 8
 * 0000000140A008F3: jb      short loc_140A00912
 * 0000000140A008F5: mov     eax, r8d
 * 0000000140A008F8: shr     rax, 3
 * 0000000140A008FC: xor     rbx, [r9]
 * 0000000140A008FF: mov     ecx, r10d
 * 0000000140A00902: rol     rbx, cl
 * 0000000140A00905: add     r9, 8
 * 0000000140A00909: add     r8d, 0FFFFFFF8h
 * 0000000140A0090D: sub     rax, r14
 * 0000000140A00910: jnz     short loc_140A008FC
 * 0000000140A00912: test    r8d, r8d
 * 0000000140A00915: jz      short loc_140A00932
 * 0000000140A00917: mov     r11d, 0FFFFFFFFh
 * 0000000140A0091D: movzx   eax, byte ptr [r9]
 * 0000000140A00921: mov     ecx, r10d
 * 0000000140A00924: xor     rbx, rax
 * 0000000140A00927: add     r9, r14
 * 0000000140A0092A: rol     rbx, cl
 * 0000000140A0092D: add     r8d, r11d
 * 0000000140A00930: jnz     short loc_140A0091D
 * 0000000140A00932: mov     rax, rbx
 * 0000000140A00935: jmp     short loc_140A00939
 * 0000000140A00937: xor     ebx, eax
 * 0000000140A00939: shr     rax, 1Fh
 * 0000000140A0093D: test    rax, rax
 * 0000000140A00940: jnz     short loc_140A00937
 * 0000000140A00942: mov     ecx, [rdx]
 * 0000000140A00944: btr     ebx, 1Fh
 * 0000000140A00948: mov     eax, ecx
 * 0000000140A0094A: btr     eax, 1Fh
 * 0000000140A0094E: cmp     ebx, eax
 * 0000000140A00950: jz      loc_140A00A0B
 * 0000000140A00956: test    r15, r15
 * 0000000140A00959: jz      loc_140A00A7F
 * 0000000140A0095F: mov     eax, [rsi+994h]
 * 0000000140A00965: mov     r8d, 40h ; '@'
 * 0000000140A0096B: test    r8b, al
 * 0000000140A0096E: jz      loc_140A00A7F
 * 0000000140A00974: mov     r12, cr8
 * 0000000140A00978: lea     eax, [r8-3Eh]
 * 0000000140A0097C: mov     cr8, rax
 * 0000000140A00980: mov     r14, r13
 * 0000000140A00983: lea     rax, [r13-1]
 * 0000000140A00987: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A0098E: add     rax, r15
 * 0000000140A00991: or      rax, 0FFFh
 * 0000000140A00997: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A0099C: lea     r13, [r14-1]
 * 0000000140A009A0: movzx   r15d, r12b
 * 0000000140A009A4: mov     rax, [rsi+468h]
 * 0000000140A009AB: xor     edx, edx
 * 0000000140A009AD: mov     rcx, r14
 * 0000000140A009B0: call    KeGuardDispatchICall
 * 0000000140A009B5: cmp     eax, 0C000022Dh
 * 0000000140A009BA: jnz     short loc_140A009E0
 * 0000000140A009BC: mov     eax, 1
 * 0000000140A009C1: cmp     r12b, al
 * 0000000140A009C4: ja      short loc_140A009E8
 * 0000000140A009C6: movzx   r15d, r12b
 * 0000000140A009CA: mov     cr8, r15
 * 0000000140A009CE: mov     al, [r14]
 * 0000000140A009D1: mov     rax, cr8
 * 0000000140A009D5: mov     eax, 2
 * 0000000140A009DA: mov     cr8, rax
 * 0000000140A009DE: jmp     short loc_140A009A4
 * 0000000140A009E0: test    eax, eax
 * 0000000140A009E2: js      loc_140A00A69
 * 0000000140A009E8: mov     r11d, 1000h
 * 0000000140A009EE: add     r14, r11
 * 0000000140A009F1: add     r13, r11
 * 0000000140A009F4: cmp     r13, [rsp+0CE0h+var_C70]
 * 0000000140A009F9: jnz     short loc_140A009A0
 * 0000000140A009FB: mov     cr8, r15
 * 0000000140A009FF: mov     rdx, [rbp+0BE0h+arg_8]
 * 0000000140A00A06: mov     r12, [rsp+0CE0h+var_C88]
 * 0000000140A00A0B: xor     r15d, r15d
 * 0000000140A00A0E: mov     ecx, 0Ch
 * 0000000140A00A13: lea     eax, [rcx-0Bh]
 * 0000000140A00A16: add     rdx, rcx
 * 0000000140A00A19: sub     r12, rax
 * 0000000140A00A1C: mov     [rbp+0BE0h+arg_8], rdx
 * 0000000140A00A23: mov     [rsp+0CE0h+var_C88], r12
 * 0000000140A00A28: jnz     loc_140A007FF
 * 0000000140A00A2E: mov     rcx, [rbp+0BE0h+var_C60]
 * 0000000140A00A32: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A00A39: add     [rsi+824h], eax
 * 0000000140A00A3F: add     rcx, 18h
 * 0000000140A00A43: mov     [rbp+0BE0h+var_C60], rcx
 * 0000000140A00A47: cmp     rcx, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A00A4C: jz      loc_140A0044D
 * 0000000140A00A52: mov     eax, [rsi+82Ch]
 * 0000000140A00A58: cmp     [rsi+828h], eax
 * 0000000140A00A5E: jl      loc_140A007DA
 * 0000000140A00A64: jmp     loc_1409F931B
 * 0000000140A00A69: mov     cr8, r15
 * 0000000140A00A6D: mov     rdx, [rbp+0BE0h+arg_8]
 * 0000000140A00A74: mov     r13, [rbp+0BE0h+var_C50]
 * 0000000140A00A78: mov     r12, [rsp+0CE0h+var_C88]
 * 0000000140A00A7D: mov     ecx, [rdx]
 * 0000000140A00A7F: mov     eax, ecx
 * 0000000140A00A81: xor     r15d, r15d
 * 0000000140A00A84: mov     ecx, [rsi+8F8h]
 * 0000000140A00A8A: btr     eax, 1Fh
 * 0000000140A00A8E: test    ecx, ecx
 * 0000000140A00A90: jnz     loc_140A00A0E
 * 0000000140A00A96: mov     ecx, ebx
 * 0000000140A00A98: xor     rcx, rax
 * 0000000140A00A9B: mov     rax, [rsi+590h]
 * 0000000140A00AA2: mov     [rax+18h], rcx
 * 0000000140A00AA6: mov     ecx, [rsi+8F8h]
 * 0000000140A00AAC: test    ecx, ecx
 * 0000000140A00AAE: jnz     loc_140A00A0E
 * 0000000140A00AB4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00ABE: xor     edx, edx
 * 0000000140A00AC0: add     rax, rsi
 * 0000000140A00AC3: mov     [rsi+900h], rax
 * 0000000140A00ACA: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00AD4: add     rax, rdi
 * 0000000140A00AD7: mov     [rsi+908h], rax
 * 0000000140A00ADE: movsxd  rax, dword ptr [rdi]
 * 0000000140A00AE1: mov     [rsi+910h], rax
 * 0000000140A00AE8: lea     eax, [rcx+1]
 * 0000000140A00AEB: mov     [rsi+918h], r13
 * 0000000140A00AF2: mov     rcx, rsi
 * 0000000140A00AF5: mov     [rsi+8F8h], eax
 * 0000000140A00AFB: call    $$b8
 * 0000000140A00B00: mov     rdx, [rbp+0BE0h+arg_8]
 * 0000000140A00B07: jmp     loc_140A00A0E
 * 0000000140A00B0C: mov     r14, [r13+8]
 * 0000000140A00B10: mov     r8d, [r13+10h]
 * 0000000140A00B14: mov     r9, r14
 * 0000000140A00B17: add     [rsi+828h], r8d
 * 0000000140A00B1E: mov     rax, r14
 * 0000000140A00B21: mov     r10d, [rsi+814h]
 * 0000000140A00B28: mov     r15, [rsi+818h]
 * 0000000140A00B2F: lea     rcx, [r14+r8]
 * 0000000140A00B33: cmp     r14, rcx
 * 0000000140A00B36: jnb     short loc_140A00B49
 * 0000000140A00B38: mov     r11d, 40h ; '@'
 * 0000000140A00B3E: prefetchnta byte ptr [rax]
 * 0000000140A00B41: add     rax, r11
 * 0000000140A00B44: cmp     rax, rcx
 * 0000000140A00B47: jb      short loc_140A00B3E
 * 0000000140A00B49: mov     r11d, r8d
 * 0000000140A00B4C: mov     rbx, r15
 * 0000000140A00B4F: shr     r11d, 7
 * 0000000140A00B53: mov     r12d, 0FFFFFFFFh
 * 0000000140A00B59: test    r11d, r11d
 * 0000000140A00B5C: jz      short loc_140A00BCA
 * 0000000140A00B5E: mov     rdi, 7010008004002001h
 * 0000000140A00B68: mov     eax, 8
 * 0000000140A00B6D: xor     rbx, [r9]
 * 0000000140A00B70: mov     ecx, r10d
 * 0000000140A00B73: rol     rbx, cl
 * 0000000140A00B76: xor     rbx, [r9+8]
 * 0000000140A00B7A: add     r9, 10h
 * 0000000140A00B7E: rol     rbx, cl
 * 0000000140A00B81: sub     rax, rdx
 * 0000000140A00B84: jnz     short loc_140A00B6D
 * 0000000140A00B86: mov     rcx, r9
 * 0000000140A00B89: sub     rcx, r14
 * 0000000140A00B8C: xor     rcx, r15
 * 0000000140A00B8F: mov     rax, rcx
 * 0000000140A00B92: rol     rax, 11h
 * 0000000140A00B96: xor     rcx, rax
 * 0000000140A00B99: mov     rax, rdi
 * 0000000140A00B9C: mul     rcx
 * 0000000140A00B9F: xor     r10d, eax
 * 0000000140A00BA2: mov     [rbp+0BE0h+var_618], rdx
 * 0000000140A00BA9: xor     r10d, edx
 * 0000000140A00BAC: mov     edx, 1
 * 0000000140A00BB1: and     r10d, 3Fh
 * 0000000140A00BB5: cmovz   r10d, edx
 * 0000000140A00BB9: add     r11d, r12d
 * 0000000140A00BBC: jnz     short loc_140A00B68
 * 0000000140A00BBE: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A00BC3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A00BCA: and     r8d, 7Fh
 * 0000000140A00BCE: cmp     r8d, 8
 * 0000000140A00BD2: jb      short loc_140A00BF1
 * 0000000140A00BD4: mov     eax, r8d
 * 0000000140A00BD7: shr     rax, 3
 * 0000000140A00BDB: xor     rbx, [r9]
 * 0000000140A00BDE: mov     ecx, r10d
 * 0000000140A00BE1: rol     rbx, cl
 * 0000000140A00BE4: add     r9, 8
 * 0000000140A00BE8: add     r8d, 0FFFFFFF8h
 * 0000000140A00BEC: sub     rax, rdx
 * 0000000140A00BEF: jnz     short loc_140A00BDB
 * 0000000140A00BF1: xor     r15d, r15d
 * 0000000140A00BF4: test    r8d, r8d
 * 0000000140A00BF7: jz      short loc_140A00C0E
 * 0000000140A00BF9: movzx   eax, byte ptr [r9]
 * 0000000140A00BFD: mov     ecx, r10d
 * 0000000140A00C00: xor     rbx, rax
 * 0000000140A00C03: add     r9, rdx
 * 0000000140A00C06: rol     rbx, cl
 * 0000000140A00C09: add     r8d, r12d
 * 0000000140A00C0C: jnz     short loc_140A00BF9
 * 0000000140A00C0E: mov     rax, rbx
 * 0000000140A00C11: jmp     short loc_140A00C15
 * 0000000140A00C13: xor     ebx, eax
 * 0000000140A00C15: shr     rax, 1Fh
 * 0000000140A00C19: test    rax, rax
 * 0000000140A00C1C: jnz     short loc_140A00C13
 * 0000000140A00C1E: btr     ebx, 1Fh
 * 0000000140A00C22: mov     r12d, r15d
 * 0000000140A00C25: cmp     ebx, [r13+14h]
 * 0000000140A00C29: jz      loc_140A00D14
 * 0000000140A00C2F: cmp     [r13+0], r15d
 * 0000000140A00C33: jnz     short loc_140A00C3D
 * 0000000140A00C35: cmp     [r13+18h], r15d
 * 0000000140A00C39: cmovnz  r12d, edx
 * 0000000140A00C3D: mov     ecx, [r13+10h]
 * 0000000140A00C41: mov     rdx, [r13+8]
 * 0000000140A00C45: test    rcx, rcx
 * 0000000140A00C48: jz      loc_140A00ED4
 * 0000000140A00C4E: mov     eax, [rsi+994h]
 * 0000000140A00C54: mov     r8d, 40h ; '@'
 * 0000000140A00C5A: test    r8b, al
 * 0000000140A00C5D: jz      loc_140A00ED4
 * 0000000140A00C63: mov     r13, cr8
 * 0000000140A00C67: lea     eax, [r8-3Eh]
 * 0000000140A00C6B: mov     cr8, rax
 * 0000000140A00C6F: mov     r14, rdx
 * 0000000140A00C72: lea     rax, [rcx-1]
 * 0000000140A00C76: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A00C7D: add     rax, rdx
 * 0000000140A00C80: or      rax, 0FFFh
 * 0000000140A00C86: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A00C8B: lea     rax, [r14-1]
 * 0000000140A00C8F: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A00C96: movzx   r15d, r13b
 * 0000000140A00C9A: mov     rax, [rsi+468h]
 * 0000000140A00CA1: xor     edx, edx
 * 0000000140A00CA3: mov     rcx, r14
 * 0000000140A00CA6: call    KeGuardDispatchICall
 * 0000000140A00CAB: cmp     eax, 0C000022Dh
 * 0000000140A00CB0: jnz     short loc_140A00CDF
 * 0000000140A00CB2: test    r12d, r12d
 * 0000000140A00CB5: jnz     loc_140A00EC8
 * 0000000140A00CBB: lea     eax, [r12+1]
 * 0000000140A00CC0: cmp     r13b, al
 * 0000000140A00CC3: ja      short loc_140A00CE7
 * 0000000140A00CC5: movzx   r15d, r13b
 * 0000000140A00CC9: mov     cr8, r15
 * 0000000140A00CCD: mov     al, [r14]
 * 0000000140A00CD0: mov     rax, cr8
 * 0000000140A00CD4: lea     eax, [r12+2]
 * 0000000140A00CD9: mov     cr8, rax
 * 0000000140A00CDD: jmp     short loc_140A00C9A
 * 0000000140A00CDF: test    eax, eax
 * 0000000140A00CE1: js      loc_140A00EC8
 * 0000000140A00CE7: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A00CEE: mov     r11d, 1000h
 * 0000000140A00CF4: add     rax, r11
 * 0000000140A00CF7: add     r14, r11
 * 0000000140A00CFA: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A00D01: cmp     rax, [rsp+0CE0h+var_C70]
 * 0000000140A00D06: jnz     short loc_140A00C96
 * 0000000140A00D08: mov     cr8, r15
 * 0000000140A00D0C: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A00D11: xor     r15d, r15d
 * 0000000140A00D14: mov     r14d, 1
 * 0000000140A00D1A: mov     eax, [r13+10h]
 * 0000000140A00D1E: mov     r12, [r13+8]
 * 0000000140A00D22: shr     eax, 4
 * 0000000140A00D25: mov     [rbp+0BE0h+arg_8], r12
 * 0000000140A00D2C: test    eax, eax
 * 0000000140A00D2E: jz      loc_1409F931B
 * 0000000140A00D34: mov     edi, eax
 * 0000000140A00D36: mov     [rsp+0CE0h+var_C88], rdi
 * 0000000140A00D3B: mov     rax, [r12]
 * 0000000140A00D3F: lea     rdx, [rbp+0BE0h+var_988]
 * 0000000140A00D46: mov     rbx, r13
 * 0000000140A00D49: mov     r13d, r14d
 * 0000000140A00D4C: mov     r15, [rax]
 * 0000000140A00D4F: xor     eax, eax
 * 0000000140A00D51: mov     [rbp+0BE0h+var_988], rax
 * 0000000140A00D58: mov     rcx, r15
 * 0000000140A00D5B: mov     rax, [rsi+310h]
 * 0000000140A00D62: call    KeGuardDispatchICall
 * 0000000140A00D67: mov     r14, rax
 * 0000000140A00D6A: test    rax, rax
 * 0000000140A00D6D: jz      loc_140A00E9F
 * 0000000140A00D73: mov     edi, 6
 * 0000000140A00D78: xor     r12d, r12d
 * 0000000140A00D7B: mov     rax, [rsi+208h]
 * 0000000140A00D82: lea     rdx, [rbp+0BE0h+var_610]
 * 0000000140A00D89: mov     rcx, r14
 * 0000000140A00D8C: inc     r13d
 * 0000000140A00D8F: call    KeGuardDispatchICall
 * 0000000140A00D94: test    rax, rax
 * 0000000140A00D97: jnz     loc_140A00E71
 * 0000000140A00D9D: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A00DA7: lea     r9d, [rax+1]
 * 0000000140A00DAB: jz      short loc_140A00DF3
 * 0000000140A00DAD: mov     rcx, [rsi+0A80h]
 * 0000000140A00DB4: lea     edx, [rax+30h]
 * 0000000140A00DB7: mov     r8, rdi
 * 0000000140A00DBA: mov     rax, [rbx]
 * 0000000140A00DBD: add     edx, 0FFFFFFF8h
 * 0000000140A00DC0: mov     [rcx], rax
 * 0000000140A00DC3: add     rbx, 8
 * 0000000140A00DC7: add     rcx, 8
 * 0000000140A00DCB: sub     r8, r9
 * 0000000140A00DCE: jnz     short loc_140A00DBA
 * 0000000140A00DD0: test    edx, edx
 * 0000000140A00DD2: jz      short loc_140A00DEC
 * 0000000140A00DD4: mov     r12d, 0FFFFFFFFh
 * 0000000140A00DDA: mov     al, [rbx]
 * 0000000140A00DDC: add     rbx, r9
 * 0000000140A00DDF: mov     [rcx], al
 * 0000000140A00DE1: add     rcx, r9
 * 0000000140A00DE4: add     edx, r12d
 * 0000000140A00DE7: jnz     short loc_140A00DDA
 * 0000000140A00DE9: xor     r12d, r12d
 * 0000000140A00DEC: mov     rbx, [rsi+0A80h]
 * 0000000140A00DF3: mov     [rbx+18h], r14
 * 0000000140A00DF7: mov     [rbx+20h], r15
 * 0000000140A00DFB: mov     rax, [rsi+590h]
 * 0000000140A00E02: mov     [rax], rbx
 * 0000000140A00E05: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140A00E0C: mov     rax, [rsi+590h]
 * 0000000140A00E13: mov     [rax+8], r14
 * 0000000140A00E17: mov     dword ptr [rax+14h], 1000h
 * 0000000140A00E1E: cmp     [rsi+8F8h], r12d
 * 0000000140A00E25: jnz     short loc_140A00E71
 * 0000000140A00E27: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00E31: xor     edx, edx
 * 0000000140A00E33: add     rax, rsi
 * 0000000140A00E36: mov     rcx, rsi
 * 0000000140A00E39: mov     [rsi+900h], rax
 * 0000000140A00E40: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00E4A: add     rax, rbx
 * 0000000140A00E4D: mov     [rsi+908h], rax
 * 0000000140A00E54: movsxd  rax, dword ptr [rbx]
 * 0000000140A00E57: mov     [rsi+910h], rax
 * 0000000140A00E5E: mov     [rsi+918h], rdi
 * 0000000140A00E65: mov     [rsi+8F8h], r9d
 * 0000000140A00E6C: call    $$b8
 * 0000000140A00E71: mov     rax, [rsi+310h]
 * 0000000140A00E78: lea     rdx, [rbp+0BE0h+var_988]
 * 0000000140A00E7F: mov     rcx, r15
 * 0000000140A00E82: call    KeGuardDispatchICall
 * 0000000140A00E87: mov     r14, rax
 * 0000000140A00E8A: test    rax, rax
 * 0000000140A00E8D: jnz     loc_140A00D7B
 * 0000000140A00E93: mov     r12, [rbp+0BE0h+arg_8]
 * 0000000140A00E9A: mov     rdi, [rsp+0CE0h+var_C88]
 * 0000000140A00E9F: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A00EA4: add     r12, 10h
 * 0000000140A00EA8: mov     r14d, 1
 * 0000000140A00EAE: mov     [rbp+0BE0h+arg_8], r12
 * 0000000140A00EB5: sub     rdi, r14
 * 0000000140A00EB8: mov     [rsp+0CE0h+var_C88], rdi
 * 0000000140A00EBD: jnz     loc_140A00D3B
 * 0000000140A00EC3: jmp     loc_1409F947D
 * 0000000140A00EC8: mov     cr8, r15
 * 0000000140A00ECC: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A00ED1: xor     r15d, r15d
 * 0000000140A00ED4: mov     eax, [rsi+8F8h]
 * 0000000140A00EDA: mov     edx, [r13+14h]
 * 0000000140A00EDE: test    eax, eax
 * 0000000140A00EE0: jnz     short loc_140A00EF8
 * 0000000140A00EE2: mov     rax, [rsi+590h]
 * 0000000140A00EE9: mov     ecx, ebx
 * 0000000140A00EEB: xor     rcx, rdx
 * 0000000140A00EEE: mov     [rax+18h], rcx
 * 0000000140A00EF2: mov     eax, [rsi+8F8h]
 * 0000000140A00EF8: mov     rcx, [r13+8]
 * 0000000140A00EFC: mov     r14d, 1
 * 0000000140A00F02: test    eax, eax
 * 0000000140A00F04: jnz     loc_140A00D1A
 * 0000000140A00F0A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00F14: xor     edx, edx
 * 0000000140A00F16: add     rax, rsi
 * 0000000140A00F19: mov     [rsi+900h], rax
 * 0000000140A00F20: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00F2A: add     rax, r13
 * 0000000140A00F2D: mov     [rsi+908h], rax
 * 0000000140A00F34: movsxd  rax, dword ptr [r13+0]
 * 0000000140A00F38: mov     [rsi+910h], rax
 * 0000000140A00F3F: mov     [rsi+918h], rcx
 * 0000000140A00F46: mov     rcx, rsi
 * 0000000140A00F49: mov     [rsi+8F8h], r14d
 * 0000000140A00F50: call    $$b8
 * 0000000140A00F55: jmp     loc_140A00D1A
 * 0000000140A00F5A: mov     eax, [rsi+994h]
 * 0000000140A00F60: mov     ecx, 2
 * 0000000140A00F65: test    cl, al
 * 0000000140A00F67: jnz     loc_1409F9318
 * 0000000140A00F6D: mov     rax, [rsi+428h]
 * 0000000140A00F74: call    KeGuardDispatchICall
 * 0000000140A00F79: xor     r15d, r15d
 * 0000000140A00F7C: test    al, al
 * 0000000140A00F7E: jz      loc_1409F931B
 * 0000000140A00F84: cmp     [rsi+8F8h], r15d
 * 0000000140A00F8B: jnz     loc_1409F931B
 * 0000000140A00F91: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A00F9B: add     rax, rsi
 * 0000000140A00F9E: mov     [rsi+900h], rax
 * 0000000140A00FA5: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A00FAF: add     rax, r13
 * 0000000140A00FB2: mov     [rsi+908h], rax
 * 0000000140A00FB9: movsxd  rax, dword ptr [r13+0]
 * 0000000140A00FBD: mov     [rsi+910h], rax
 * 0000000140A00FC4: mov     [rsi+918h], r15
 * 0000000140A00FCB: jmp     loc_1409F96E7
 * 0000000140A00FD0: cmp     r10d, 26h ; '&'
 * 0000000140A00FD4: jz      loc_140A045C9
 * 0000000140A00FDA: jle     loc_140A03767
 * 0000000140A00FE0: cmp     r10d, 2Ah ; '*'
 * 0000000140A00FE4: jle     loc_140A0361F
 * 0000000140A00FEA: cmp     r10d, 2Bh ; '+'
 * 0000000140A00FEE: jz      loc_140A02543
 * 0000000140A00FF4: cmp     r10d, 2Ch ; ','
 * 0000000140A00FF8: jz      loc_140A01988
 * 0000000140A00FFE: cmp     r10d, 2Eh ; '.'
 * 0000000140A01002: jz      loc_140A01892
 * 0000000140A01008: cmp     r10d, 2Fh ; '/'
 * 0000000140A0100C: jz      loc_140A01686
 * 0000000140A01012: cmp     r10d, 30h ; '0'
 * 0000000140A01016: jnz     loc_140A03767
 * 0000000140A0101C: xor     r15d, r15d
 * 0000000140A0101F: cmp     [r13+10h], r15d
 * 0000000140A01023: jz      loc_1409F931B
 * 0000000140A01029: test    dword ptr [rsi+994h], 4000h
 * 0000000140A01033: jz      short loc_140A01054
 * 0000000140A01035: mov     rcx, [rsi+4E0h]
 * 0000000140A0103C: cli
 * 0000000140A0103D: mov     eax, [rsi+990h]
 * 0000000140A01043: shr     eax, 0Ah
 * 0000000140A01046: and     eax, 1Fh
 * 0000000140A01049: lock bts [rcx], eax
 * 0000000140A0104D: jnb     short loc_140A01054
 * 0000000140A0104F: sti
 * 0000000140A01050: pause
 * 0000000140A01052: jmp     short loc_140A0103C
 * 0000000140A01054: mov     eax, [r13+18h]
 * 0000000140A01058: test    dl, al
 * 0000000140A0105A: jnz     loc_140A012F3
 * 0000000140A01060: mov     r14, [r13+8]
 * 0000000140A01064: mov     r8d, [r13+10h]
 * 0000000140A01068: mov     r9, r14
 * 0000000140A0106B: add     [rsi+828h], r8d
 * 0000000140A01072: mov     rax, r14
 * 0000000140A01075: mov     r10d, [rsi+814h]
 * 0000000140A0107C: mov     r15, [rsi+818h]
 * 0000000140A01083: lea     rcx, [r14+r8]
 * 0000000140A01087: cmp     r14, rcx
 * 0000000140A0108A: jnb     short loc_140A0109D
 * 0000000140A0108C: mov     r11d, 40h ; '@'
 * 0000000140A01092: prefetchnta byte ptr [rax]
 * 0000000140A01095: add     rax, r11
 * 0000000140A01098: cmp     rax, rcx
 * 0000000140A0109B: jb      short loc_140A01092
 * 0000000140A0109D: mov     r11d, r8d
 * 0000000140A010A0: mov     rbx, r15
 * 0000000140A010A3: shr     r11d, 7
 * 0000000140A010A7: mov     r12d, 0FFFFFFFFh
 * 0000000140A010AD: test    r11d, r11d
 * 0000000140A010B0: jz      short loc_140A0111E
 * 0000000140A010B2: mov     rdi, 7010008004002001h
 * 0000000140A010BC: mov     eax, 8
 * 0000000140A010C1: xor     rbx, [r9]
 * 0000000140A010C4: mov     ecx, r10d
 * 0000000140A010C7: rol     rbx, cl
 * 0000000140A010CA: xor     rbx, [r9+8]
 * 0000000140A010CE: add     r9, 10h
 * 0000000140A010D2: rol     rbx, cl
 * 0000000140A010D5: sub     rax, rdx
 * 0000000140A010D8: jnz     short loc_140A010C1
 * 0000000140A010DA: mov     rcx, r9
 * 0000000140A010DD: sub     rcx, r14
 * 0000000140A010E0: xor     rcx, r15
 * 0000000140A010E3: mov     rax, rcx
 * 0000000140A010E6: rol     rax, 11h
 * 0000000140A010EA: xor     rcx, rax
 * 0000000140A010ED: mov     rax, rdi
 * 0000000140A010F0: mul     rcx
 * 0000000140A010F3: xor     r10d, eax
 * 0000000140A010F6: mov     [rbp+0BE0h+var_608], rdx
 * 0000000140A010FD: xor     r10d, edx
 * 0000000140A01100: mov     edx, 1
 * 0000000140A01105: and     r10d, 3Fh
 * 0000000140A01109: cmovz   r10d, edx
 * 0000000140A0110D: add     r11d, r12d
 * 0000000140A01110: jnz     short loc_140A010BC
 * 0000000140A01112: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A01117: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0111E: and     r8d, 7Fh
 * 0000000140A01122: cmp     r8d, 8
 * 0000000140A01126: jb      short loc_140A01145
 * 0000000140A01128: mov     eax, r8d
 * 0000000140A0112B: shr     rax, 3
 * 0000000140A0112F: xor     rbx, [r9]
 * 0000000140A01132: mov     ecx, r10d
 * 0000000140A01135: rol     rbx, cl
 * 0000000140A01138: add     r9, 8
 * 0000000140A0113C: add     r8d, 0FFFFFFF8h
 * 0000000140A01140: sub     rax, rdx
 * 0000000140A01143: jnz     short loc_140A0112F
 * 0000000140A01145: xor     r15d, r15d
 * 0000000140A01148: test    r8d, r8d
 * 0000000140A0114B: jz      short loc_140A01162
 * 0000000140A0114D: movzx   eax, byte ptr [r9]
 * 0000000140A01151: mov     ecx, r10d
 * 0000000140A01154: xor     rbx, rax
 * 0000000140A01157: add     r9, rdx
 * 0000000140A0115A: rol     rbx, cl
 * 0000000140A0115D: add     r8d, r12d
 * 0000000140A01160: jnz     short loc_140A0114D
 * 0000000140A01162: mov     rax, rbx
 * 0000000140A01165: jmp     short loc_140A01169
 * 0000000140A01167: xor     ebx, eax
 * 0000000140A01169: shr     rax, 1Fh
 * 0000000140A0116D: test    rax, rax
 * 0000000140A01170: jnz     short loc_140A01167
 * 0000000140A01172: mov     r8, [rsp+0CE0h+var_C90]
 * 0000000140A01177: btr     ebx, 1Fh
 * 0000000140A0117B: mov     r13d, r15d
 * 0000000140A0117E: cmp     ebx, [r8+14h]
 * 0000000140A01182: jz      loc_140A0164C
 * 0000000140A01188: cmp     [r8], r15d
 * 0000000140A0118B: jnz     short loc_140A01195
 * 0000000140A0118D: cmp     [r8+18h], r15d
 * 0000000140A01191: cmovnz  r13d, edx
 * 0000000140A01195: mov     ecx, [r8+10h]
 * 0000000140A01199: mov     rdx, [r8+8]
 * 0000000140A0119D: test    rcx, rcx
 * 0000000140A011A0: jz      loc_140A0126E
 * 0000000140A011A6: mov     eax, [rsi+994h]
 * 0000000140A011AC: mov     r9d, 40h ; '@'
 * 0000000140A011B2: test    r9b, al
 * 0000000140A011B5: jz      loc_140A0126E
 * 0000000140A011BB: mov     r12, cr8
 * 0000000140A011BF: lea     eax, [r9-3Eh]
 * 0000000140A011C3: mov     cr8, rax
 * 0000000140A011C7: mov     r14, rdx
 * 0000000140A011CA: lea     rax, [rcx-1]
 * 0000000140A011CE: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A011D5: add     rax, rdx
 * 0000000140A011D8: or      rax, 0FFFh
 * 0000000140A011DE: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A011E3: lea     rax, [r14-1]
 * 0000000140A011E7: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A011EE: movzx   r15d, r12b
 * 0000000140A011F2: mov     rax, [rsi+468h]
 * 0000000140A011F9: xor     edx, edx
 * 0000000140A011FB: mov     rcx, r14
 * 0000000140A011FE: call    KeGuardDispatchICall
 * 0000000140A01203: cmp     eax, 0C000022Dh
 * 0000000140A01208: jnz     short loc_140A01231
 * 0000000140A0120A: test    r13d, r13d
 * 0000000140A0120D: jnz     short loc_140A01262
 * 0000000140A0120F: lea     eax, [r13+1]
 * 0000000140A01213: cmp     r12b, al
 * 0000000140A01216: ja      short loc_140A01235
 * 0000000140A01218: movzx   r15d, r12b
 * 0000000140A0121C: mov     cr8, r15
 * 0000000140A01220: mov     al, [r14]
 * 0000000140A01223: mov     rax, cr8
 * 0000000140A01227: lea     eax, [r13+2]
 * 0000000140A0122B: mov     cr8, rax
 * 0000000140A0122F: jmp     short loc_140A011F2
 * 0000000140A01231: test    eax, eax
 * 0000000140A01233: js      short loc_140A01262
 * 0000000140A01235: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A0123C: mov     r11d, 1000h
 * 0000000140A01242: add     rax, r11
 * 0000000140A01245: add     r14, r11
 * 0000000140A01248: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A0124F: cmp     rax, [rsp+0CE0h+var_C70]
 * 0000000140A01254: jnz     short loc_140A011EE
 * 0000000140A01256: mov     cr8, r15
 * 0000000140A0125A: xor     r15d, r15d
 * 0000000140A0125D: jmp     loc_140A0164C
 * 0000000140A01262: mov     cr8, r15
 * 0000000140A01266: mov     r8, [rsp+0CE0h+var_C90]
 * 0000000140A0126B: xor     r15d, r15d
 * 0000000140A0126E: mov     eax, [rsi+8F8h]
 * 0000000140A01274: mov     edx, [r8+14h]
 * 0000000140A01278: test    eax, eax
 * 0000000140A0127A: jnz     short loc_140A01292
 * 0000000140A0127C: mov     rax, [rsi+590h]
 * 0000000140A01283: mov     ecx, ebx
 * 0000000140A01285: xor     rcx, rdx
 * 0000000140A01288: mov     [rax+18h], rcx
 * 0000000140A0128C: mov     eax, [rsi+8F8h]
 * 0000000140A01292: mov     rcx, [r8+8]
 * 0000000140A01296: test    eax, eax
 * 0000000140A01298: jnz     loc_140A0164C
 * 0000000140A0129E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A012A8: add     rax, rsi
 * 0000000140A012AB: mov     [rsi+900h], rax
 * 0000000140A012B2: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A012BC: add     rax, r8
 * 0000000140A012BF: mov     [rsi+908h], rax
 * 0000000140A012C6: movsxd  rax, dword ptr [r8]
 * 0000000140A012C9: mov     [rsi+910h], rax
 * 0000000140A012D0: mov     r12d, 1
 * 0000000140A012D6: mov     [rsi+918h], rcx
 * 0000000140A012DD: xor     edx, edx
 * 0000000140A012DF: mov     rcx, rsi
 * 0000000140A012E2: mov     [rsi+8F8h], r12d
 * 0000000140A012E9: call    $$b8
 * 0000000140A012EE: jmp     loc_140A01652
 * 0000000140A012F3: cmp     [rsi+980h], r15
 * 0000000140A012FA: jz      loc_140A01645
 * 0000000140A01300: mov     edx, [rsi+994h]
 * 0000000140A01306: mov     ecx, edx
 * 0000000140A01308: cmp     [rsi+824h], r15d
 * 0000000140A0130F: jnz     short loc_140A01323
 * 0000000140A01311: shl     ecx, 3
 * 0000000140A01314: xor     ecx, edx
 * 0000000140A01316: and     ecx, 20h
 * 0000000140A01319: xor     ecx, edx
 * 0000000140A0131B: mov     [rsi+994h], ecx
 * 0000000140A01321: jmp     short loc_140A01332
 * 0000000140A01323: mov     eax, edx
 * 0000000140A01325: shr     eax, 3
 * 0000000140A01328: xor     eax, edx
 * 0000000140A0132A: test    al, 4
 * 0000000140A0132C: jnz     loc_140A01645
 * 0000000140A01332: test    cl, 4
 * 0000000140A01335: jz      loc_140A013FE
 * 0000000140A0133B: mov     ecx, [r13+8]
 * 0000000140A0133F: mov     r14d, [r13+10h]
 * 0000000140A01343: and     ecx, 0FFFh
 * 0000000140A01349: mov     rbx, [r13+8]
 * 0000000140A0134D: add     r14, 0FFFh
 * 0000000140A01354: add     r14, rcx
 * 0000000140A01357: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A0135E: shr     r14, 0Ch
 * 0000000140A01362: test    r14, r14
 * 0000000140A01365: jz      loc_140A0164C
 * 0000000140A0136B: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140A01375: mov     r12d, 1
 * 0000000140A0137B: mov     rax, [rsi+2B0h]
 * 0000000140A01382: mov     rcx, rbx
 * 0000000140A01385: sub     r14, r12
 * 0000000140A01388: call    KeGuardDispatchICall
 * 0000000140A0138D: test    al, al
 * 0000000140A0138F: jz      short loc_140A013DC
 * 0000000140A01391: cmp     [rsi+8F8h], r15d
 * 0000000140A01398: jnz     short loc_140A013DC
 * 0000000140A0139A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A013A4: xor     edx, edx
 * 0000000140A013A6: add     rax, rsi
 * 0000000140A013A9: mov     rcx, rsi
 * 0000000140A013AC: mov     [rsi+900h], rax
 * 0000000140A013B3: lea     rax, [rdi+r13]
 * 0000000140A013B7: mov     [rsi+908h], rax
 * 0000000140A013BE: movsxd  rax, dword ptr [r13+0]
 * 0000000140A013C2: mov     [rsi+910h], rax
 * 0000000140A013C9: mov     [rsi+918h], rbx
 * 0000000140A013D0: mov     [rsi+8F8h], r12d
 * 0000000140A013D7: call    $$b8
 * 0000000140A013DC: add     dword ptr [rsi+828h], 100h
 * 0000000140A013E6: add     rbx, 1000h
 * 0000000140A013ED: test    r14, r14
 * 0000000140A013F0: jnz     short loc_140A0137B
 * 0000000140A013F2: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A013F9: jmp     loc_140A01652
 * 0000000140A013FE: mov     r14, [r13+8]
 * 0000000140A01402: mov     r8d, [r13+10h]
 * 0000000140A01406: mov     r9, r14
 * 0000000140A01409: add     [rsi+828h], r8d
 * 0000000140A01410: mov     rax, r14
 * 0000000140A01413: mov     r10d, [rsi+814h]
 * 0000000140A0141A: mov     r15, [rsi+818h]
 * 0000000140A01421: lea     rcx, [r14+r8]
 * 0000000140A01425: cmp     r14, rcx
 * 0000000140A01428: jnb     short loc_140A0143A
 * 0000000140A0142A: mov     edx, 40h ; '@'
 * 0000000140A0142F: prefetchnta byte ptr [rax]
 * 0000000140A01432: add     rax, rdx
 * 0000000140A01435: cmp     rax, rcx
 * 0000000140A01438: jb      short loc_140A0142F
 * 0000000140A0143A: mov     r11d, r8d
 * 0000000140A0143D: mov     rbx, r15
 * 0000000140A01440: shr     r11d, 7
 * 0000000140A01444: mov     r12d, 1
 * 0000000140A0144A: test    r11d, r11d
 * 0000000140A0144D: jz      short loc_140A014BD
 * 0000000140A0144F: mov     rdi, 7010008004002001h
 * 0000000140A01459: mov     eax, 8
 * 0000000140A0145E: xor     rbx, [r9]
 * 0000000140A01461: mov     ecx, r10d
 * 0000000140A01464: rol     rbx, cl
 * 0000000140A01467: xor     rbx, [r9+8]
 * 0000000140A0146B: add     r9, 10h
 * 0000000140A0146F: rol     rbx, cl
 * 0000000140A01472: sub     rax, r12
 * 0000000140A01475: jnz     short loc_140A0145E
 * 0000000140A01477: mov     rcx, r9
 * 0000000140A0147A: sub     rcx, r14
 * 0000000140A0147D: xor     rcx, r15
 * 0000000140A01480: mov     rax, rcx
 * 0000000140A01483: rol     rax, 11h
 * 0000000140A01487: xor     rcx, rax
 * 0000000140A0148A: mov     rax, rdi
 * 0000000140A0148D: mul     rcx
 * 0000000140A01490: xor     r10d, eax
 * 0000000140A01493: mov     [rbp+0BE0h+var_600], rdx
 * 0000000140A0149A: xor     r10d, edx
 * 0000000140A0149D: mov     edx, 0FFFFFFFFh
 * 0000000140A014A2: and     r10d, 3Fh
 * 0000000140A014A6: cmovz   r10d, r12d
 * 0000000140A014AA: add     r11d, edx
 * 0000000140A014AD: jnz     short loc_140A01459
 * 0000000140A014AF: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A014B4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A014BB: jmp     short loc_140A014C2
 * 0000000140A014BD: mov     edx, 0FFFFFFFFh
 * 0000000140A014C2: and     r8d, 7Fh
 * 0000000140A014C6: cmp     r8d, 8
 * 0000000140A014CA: jb      short loc_140A014E9
 * 0000000140A014CC: mov     eax, r8d
 * 0000000140A014CF: shr     rax, 3
 * 0000000140A014D3: xor     rbx, [r9]
 * 0000000140A014D6: mov     ecx, r10d
 * 0000000140A014D9: rol     rbx, cl
 * 0000000140A014DC: add     r9, 8
 * 0000000140A014E0: add     r8d, 0FFFFFFF8h
 * 0000000140A014E4: sub     rax, r12
 * 0000000140A014E7: jnz     short loc_140A014D3
 * 0000000140A014E9: xor     r15d, r15d
 * 0000000140A014EC: test    r8d, r8d
 * 0000000140A014EF: jz      short loc_140A01506
 * 0000000140A014F1: movzx   eax, byte ptr [r9]
 * 0000000140A014F5: mov     ecx, r10d
 * 0000000140A014F8: xor     rbx, rax
 * 0000000140A014FB: add     r9, r12
 * 0000000140A014FE: rol     rbx, cl
 * 0000000140A01501: add     r8d, edx
 * 0000000140A01504: jnz     short loc_140A014F1
 * 0000000140A01506: mov     rax, rbx
 * 0000000140A01509: jmp     short loc_140A0150D
 * 0000000140A0150B: xor     ebx, eax
 * 0000000140A0150D: shr     rax, 1Fh
 * 0000000140A01511: test    rax, rax
 * 0000000140A01514: jnz     short loc_140A0150B
 * 0000000140A01516: mov     r8d, [r13+14h]
 * 0000000140A0151A: btr     ebx, 1Fh
 * 0000000140A0151E: cmp     ebx, r8d
 * 0000000140A01521: jz      loc_140A0164C
 * 0000000140A01527: mov     ecx, [r13+10h]
 * 0000000140A0152B: mov     rdx, [r13+8]
 * 0000000140A0152F: test    rcx, rcx
 * 0000000140A01532: jz      loc_140A015E9
 * 0000000140A01538: mov     eax, [rsi+994h]
 * 0000000140A0153E: mov     r9d, 40h ; '@'
 * 0000000140A01544: test    r9b, al
 * 0000000140A01547: jz      loc_140A015E9
 * 0000000140A0154D: mov     r12, cr8
 * 0000000140A01551: lea     eax, [r9-3Eh]
 * 0000000140A01555: mov     cr8, rax
 * 0000000140A01559: mov     r14, rdx
 * 0000000140A0155C: lea     rax, [rcx-1]
 * 0000000140A01560: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A01567: add     rax, rdx
 * 0000000140A0156A: or      rax, 0FFFh
 * 0000000140A01570: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A01577: lea     r13, [r14-1]
 * 0000000140A0157B: movzx   r15d, r12b
 * 0000000140A0157F: mov     rax, [rsi+468h]
 * 0000000140A01586: xor     edx, edx
 * 0000000140A01588: mov     rcx, r14
 * 0000000140A0158B: call    KeGuardDispatchICall
 * 0000000140A01590: cmp     eax, 0C000022Dh
 * 0000000140A01595: jnz     short loc_140A015BB
 * 0000000140A01597: mov     eax, 1
 * 0000000140A0159C: cmp     r12b, al
 * 0000000140A0159F: ja      short loc_140A015BF
 * 0000000140A015A1: movzx   r15d, r12b
 * 0000000140A015A5: mov     cr8, r15
 * 0000000140A015A9: mov     al, [r14]
 * 0000000140A015AC: mov     rax, cr8
 * 0000000140A015B0: mov     eax, 2
 * 0000000140A015B5: mov     cr8, rax
 * 0000000140A015B9: jmp     short loc_140A0157F
 * 0000000140A015BB: test    eax, eax
 * 0000000140A015BD: js      short loc_140A015D9
 * 0000000140A015BF: mov     r11d, 1000h
 * 0000000140A015C5: add     r14, r11
 * 0000000140A015C8: add     r13, r11
 * 0000000140A015CB: cmp     r13, [rbp+0BE0h+arg_8]
 * 0000000140A015D2: jnz     short loc_140A0157B
 * 0000000140A015D4: jmp     loc_140A01256
 * 0000000140A015D9: mov     cr8, r15
 * 0000000140A015DD: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A015E2: xor     r15d, r15d
 * 0000000140A015E5: mov     r8d, [r13+14h]
 * 0000000140A015E9: mov     eax, [rsi+8F8h]
 * 0000000140A015EF: test    eax, eax
 * 0000000140A015F1: jnz     short loc_140A0160C
 * 0000000140A015F3: mov     eax, r8d
 * 0000000140A015F6: mov     ecx, ebx
 * 0000000140A015F8: xor     rcx, rax
 * 0000000140A015FB: mov     rax, [rsi+590h]
 * 0000000140A01602: mov     [rax+18h], rcx
 * 0000000140A01606: mov     eax, [rsi+8F8h]
 * 0000000140A0160C: mov     rcx, [r13+8]
 * 0000000140A01610: test    eax, eax
 * 0000000140A01612: jnz     short loc_140A0164C
 * 0000000140A01614: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0161E: add     rax, rsi
 * 0000000140A01621: mov     [rsi+900h], rax
 * 0000000140A01628: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A01632: add     rax, r13
 * 0000000140A01635: mov     [rsi+908h], rax
 * 0000000140A0163C: movsxd  rax, dword ptr [r13+0]
 * 0000000140A01640: jmp     loc_140A012C9
 * 0000000140A01645: mov     [rsi+824h], r15d
 * 0000000140A0164C: mov     r12d, 1
 * 0000000140A01652: test    dword ptr [rsi+994h], 4000h
 * 0000000140A0165C: jz      loc_1409F931B
 * 0000000140A01662: mov     ecx, [rsi+990h]
 * 0000000140A01668: mov     edx, r12d
 * 0000000140A0166B: mov     r8, [rsi+4E0h]
 * 0000000140A01672: shr     ecx, 0Ah
 * 0000000140A01675: and     ecx, 1Fh
 * 0000000140A01678: shl     edx, cl
 * 0000000140A0167A: not     edx
 * 0000000140A0167C: lock and [r8], edx
 * 0000000140A01680: sti
 * 0000000140A01681: jmp     loc_1409F931B
 * 0000000140A01686: mov     rcx, gs:20h
 * 0000000140A0168F: mov     rax, [rsi+648h]
 * 0000000140A01696: mov     rcx, [rax+rcx]
 * 0000000140A0169A: mov     rax, [rsi+688h]
 * 0000000140A016A1: add     rcx, [rsi+6A8h]
 * 0000000140A016A8: mov     rcx, [rcx+rax]
 * 0000000140A016AC: mov     [rbp+0BE0h+var_BC0], rcx
 * 0000000140A016B0: mov     rax, [rsi+490h]
 * 0000000140A016B7: call    KeGuardDispatchICall
 * 0000000140A016BC: mov     r9d, 0FFFFFFFFh
 * 0000000140A016C2: xor     r15d, r15d
 * 0000000140A016C5: mov     r14, rax
 * 0000000140A016C8: cmp     rax, r9
 * 0000000140A016CB: jnz     loc_140A01802
 * 0000000140A016D1: mov     [rbp+0BE0h+var_BC0], r15
 * 0000000140A016D5: mov     rcx, [rsi+988h]
 * 0000000140A016DC: test    rcx, rcx
 * 0000000140A016DF: jz      short loc_140A01704
 * 0000000140A016E1: mov     rax, [rsi+480h]
 * 0000000140A016E8: lea     rdx, [rbp+0BE0h+var_BC0]
 * 0000000140A016EC: call    KeGuardDispatchICall
 * 0000000140A016F1: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A016F5: test    eax, eax
 * 0000000140A016F7: cmovs   rcx, r15
 * 0000000140A016FB: mov     [rbp+0BE0h+var_BC0], rcx
 * 0000000140A016FF: test    rcx, rcx
 * 0000000140A01702: jnz     short loc_140A01716
 * 0000000140A01704: mov     rax, [rsi+3C0h]
 * 0000000140A0170B: xor     ecx, ecx
 * 0000000140A0170D: call    KeGuardDispatchICall
 * 0000000140A01712: mov     [rbp+0BE0h+var_BC0], rax
 * 0000000140A01716: mov     [rsi+988h], r15
 * 0000000140A0171D: mov     ebx, r15d
 * 0000000140A01720: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A01724: test    rcx, rcx
 * 0000000140A01727: jz      loc_140A017F4
 * 0000000140A0172D: mov     r12d, 1
 * 0000000140A01733: mov     rax, [rsi+3A0h]
 * 0000000140A0173A: add     ebx, r12d
 * 0000000140A0173D: call    KeGuardDispatchICall
 * 0000000140A01742: test    eax, eax
 * 0000000140A01744: js      short loc_140A017A1
 * 0000000140A01746: mov     rax, [rsi+438h]
 * 0000000140A0174D: lea     rdx, [rbp+0BE0h+var_70]
 * 0000000140A01754: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A01758: call    KeGuardDispatchICall
 * 0000000140A0175D: mov     rax, [rsi+490h]
 * 0000000140A01764: call    KeGuardDispatchICall
 * 0000000140A01769: mov     r14, rax
 * 0000000140A0176C: lea     rcx, [rbp+0BE0h+var_70]
 * 0000000140A01773: mov     rax, [rsi+440h]
 * 0000000140A0177A: call    KeGuardDispatchICall
 * 0000000140A0177F: mov     rax, [rsi+3A8h]
 * 0000000140A01786: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A0178A: call    KeGuardDispatchICall
 * 0000000140A0178F: mov     eax, 0FFFFFFFFh
 * 0000000140A01794: cmp     r14, rax
 * 0000000140A01797: jnz     short loc_140A017C2
 * 0000000140A01799: cmp     ebx, 100h
 * 0000000140A0179F: ja      short loc_140A017C2
 * 0000000140A017A1: mov     rax, [rsi+3C0h]
 * 0000000140A017A8: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A017AC: call    KeGuardDispatchICall
 * 0000000140A017B1: mov     [rbp+0BE0h+var_BC0], rax
 * 0000000140A017B5: mov     rcx, rax
 * 0000000140A017B8: test    rax, rax
 * 0000000140A017BB: jz      short loc_140A017F4
 * 0000000140A017BD: jmp     loc_140A01733
 * 0000000140A017C2: mov     rax, [rsi+488h]
 * 0000000140A017C9: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A017CD: call    KeGuardDispatchICall
 * 0000000140A017D2: mov     [rsi+988h], rax
 * 0000000140A017D9: mov     rax, [rsi+1E0h]
 * 0000000140A017E0: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A017E4: call    KeGuardDispatchICall
 * 0000000140A017E9: mov     r9d, 0FFFFFFFFh
 * 0000000140A017EF: cmp     r14, r9
 * 0000000140A017F2: jnz     short loc_140A01808
 * 0000000140A017F4: shl     ebx, 0Ch
 * 0000000140A017F7: add     [rsi+828h], ebx
 * 0000000140A017FD: jmp     loc_1409F931B
 * 0000000140A01802: mov     r12d, 1
 * 0000000140A01808: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A01812: jz      short loc_140A01857
 * 0000000140A01814: mov     rcx, [rsi+0A80h]
 * 0000000140A0181B: mov     edx, 30h ; '0'
 * 0000000140A01820: lea     r8d, [rdx-2Ah]
 * 0000000140A01824: mov     rax, [r13+0]
 * 0000000140A01828: add     edx, 0FFFFFFF8h
 * 0000000140A0182B: mov     [rcx], rax
 * 0000000140A0182E: add     r13, 8
 * 0000000140A01832: add     rcx, 8
 * 0000000140A01836: sub     r8, r12
 * 0000000140A01839: jnz     short loc_140A01824
 * 0000000140A0183B: test    edx, edx
 * 0000000140A0183D: jz      short loc_140A01850
 * 0000000140A0183F: mov     al, [r13+0]
 * 0000000140A01843: add     r13, r12
 * 0000000140A01846: mov     [rcx], al
 * 0000000140A01848: add     rcx, r12
 * 0000000140A0184B: add     edx, r9d
 * 0000000140A0184E: jnz     short loc_140A0183F
 * 0000000140A01850: mov     r13, [rsi+0A80h]
 * 0000000140A01857: mov     [r13+18h], r14
 * 0000000140A0185B: mov     rcx, [rbp+0BE0h+var_BC0]
 * 0000000140A0185F: cmp     [rsi+8F8h], r15d
 * 0000000140A01866: jnz     loc_1409F931B
 * 0000000140A0186C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A01876: add     rax, rsi
 * 0000000140A01879: mov     [rsi+900h], rax
 * 0000000140A01880: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0188A: add     rax, r13
 * 0000000140A0188D: jmp     loc_1409FF1E4
 * 0000000140A01892: mov     eax, [rsi+830h]
 * 0000000140A01898: test    dl, al
 * 0000000140A0189A: jnz     loc_1409F9318
 * 0000000140A018A0: mov     r15, [rsi+548h]
 * 0000000140A018A7: xor     eax, eax
 * 0000000140A018A9: mov     r14d, eax
 * 0000000140A018AC: mov     rax, [rsi+178h]
 * 0000000140A018B3: call    KeGuardDispatchICall
 * 0000000140A018B8: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A018C2: jnz     short loc_140A018DC
 * 0000000140A018C4: mov     ecx, [rsi+950h]
 * 0000000140A018CA: cmp     ecx, 7
 * 0000000140A018CD: jnb     short loc_140A018DC
 * 0000000140A018CF: mov     r12d, 1
 * 0000000140A018D5: mov     ebx, r12d
 * 0000000140A018D8: shl     bl, cl
 * 0000000140A018DA: jmp     short loc_140A018F9
 * 0000000140A018DC: mov     rax, [rsi+128h]
 * 0000000140A018E3: xor     edx, edx
 * 0000000140A018E5: mov     rcx, [rsi+0A00h]
 * 0000000140A018EC: call    KeGuardDispatchICall
 * 0000000140A018F1: mov     bl, 80h
 * 0000000140A018F3: mov     r12d, 1
 * 0000000140A018F9: mov     rax, [rsi+138h]
 * 0000000140A01900: xor     edx, edx
 * 0000000140A01902: mov     rcx, r15
 * 0000000140A01905: call    KeGuardDispatchICall
 * 0000000140A0190A: cmp     bl, 80h
 * 0000000140A0190D: jz      short loc_140A01942
 * 0000000140A0190F: mov     r8, [rsi+520h]
 * 0000000140A01916: mov     rdx, [r8]
 * 0000000140A01919: cmp     rdx, r8
 * 0000000140A0191C: jz      short loc_140A01957
 * 0000000140A0191E: not     bl
 * 0000000140A01920: mov     rax, [rsi+6B8h]
 * 0000000140A01927: mov     rcx, rdx
 * 0000000140A0192A: sub     rcx, [rsi+6D0h]
 * 0000000140A01931: lock and [rcx+rax], bl
 * 0000000140A01935: mov     rdx, [rdx]
 * 0000000140A01938: add     r14d, r12d
 * 0000000140A0193B: cmp     rdx, r8
 * 0000000140A0193E: jnz     short loc_140A01920
 * 0000000140A01940: jmp     short loc_140A01957
 * 0000000140A01942: mov     rax, [rsi+130h]
 * 0000000140A01949: xor     edx, edx
 * 0000000140A0194B: mov     rcx, [rsi+0A00h]
 * 0000000140A01952: call    KeGuardDispatchICall
 * 0000000140A01957: mov     rcx, [rsi+548h]
 * 0000000140A0195E: xor     edx, edx
 * 0000000140A01960: mov     rax, [rsi+140h]
 * 0000000140A01967: call    KeGuardDispatchICall
 * 0000000140A0196C: mov     rax, [rsi+180h]
 * 0000000140A01973: call    KeGuardDispatchICall
 * 0000000140A01978: shl     r14d, 7
 * 0000000140A0197C: add     [rsi+828h], r14d
 * 0000000140A01983: jmp     loc_1409F9318
 * 0000000140A01988: mov     ecx, [r13+20h]
 * 0000000140A0198C: mov     edx, 2
 * 0000000140A01991: xor     r15d, r15d
 * 0000000140A01994: mov     [rbp+0BE0h+var_C48], rsi
 * 0000000140A01998: test    dl, cl
 * 0000000140A0199A: jz      loc_140A01E1A
 * 0000000140A019A0: cmp     [rsi+980h], r15
 * 0000000140A019A7: jz      loc_140A0044D
 * 0000000140A019AD: mov     eax, [rsi+994h]
 * 0000000140A019B3: test    al, 4
 * 0000000140A019B5: jnz     loc_140A0044D
 * 0000000140A019BB: test    dl, cl
 * 0000000140A019BD: jz      loc_140A01E1A
 * 0000000140A019C3: mov     edx, eax
 * 0000000140A019C5: mov     ecx, eax
 * 0000000140A019C7: cmp     [rsi+824h], r15d
 * 0000000140A019CE: jnz     short loc_140A019E2
 * 0000000140A019D0: shl     ecx, 3
 * 0000000140A019D3: xor     ecx, eax
 * 0000000140A019D5: and     ecx, 20h
 * 0000000140A019D8: xor     ecx, eax
 * 0000000140A019DA: mov     [rsi+994h], ecx
 * 0000000140A019E0: jmp     short loc_140A019F1
 * 0000000140A019E2: mov     eax, edx
 * 0000000140A019E4: shr     eax, 3
 * 0000000140A019E7: xor     eax, edx
 * 0000000140A019E9: test    al, 4
 * 0000000140A019EB: jnz     loc_140A0044D
 * 0000000140A019F1: cmp     [rsi+980h], r15
 * 0000000140A019F8: jz      loc_140A01E0E
 * 0000000140A019FE: mov     edx, ecx
 * 0000000140A01A00: cmp     [rsi+824h], r15d
 * 0000000140A01A07: jnz     short loc_140A01A1B
 * 0000000140A01A09: shl     edx, 3
 * 0000000140A01A0C: xor     edx, ecx
 * 0000000140A01A0E: and     edx, 20h
 * 0000000140A01A11: xor     edx, ecx
 * 0000000140A01A13: mov     [rsi+994h], edx
 * 0000000140A01A19: jmp     short loc_140A01A2A
 * 0000000140A01A1B: mov     eax, ecx
 * 0000000140A01A1D: shr     eax, 3
 * 0000000140A01A20: xor     eax, ecx
 * 0000000140A01A22: test    al, 4
 * 0000000140A01A24: jnz     loc_140A01E0E
 * 0000000140A01A2A: test    dl, 4
 * 0000000140A01A2D: jz      loc_140A01AF7
 * 0000000140A01A33: mov     r14d, [r13+8]
 * 0000000140A01A37: mov     ecx, [r13+10h]
 * 0000000140A01A3B: and     r14d, 0FFFh
 * 0000000140A01A42: mov     rbx, [r13+8]
 * 0000000140A01A46: add     r14, 0FFFh
 * 0000000140A01A4D: add     r14, rcx
 * 0000000140A01A50: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A01A57: shr     r14, 0Ch
 * 0000000140A01A5B: test    r14, r14
 * 0000000140A01A5E: jz      loc_140A01CE4
 * 0000000140A01A64: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140A01A6E: mov     r12d, 1
 * 0000000140A01A74: mov     rax, [rsi+2B0h]
 * 0000000140A01A7B: mov     rcx, rbx
 * 0000000140A01A7E: sub     r14, r12
 * 0000000140A01A81: call    KeGuardDispatchICall
 * 0000000140A01A86: test    al, al
 * 0000000140A01A88: jz      short loc_140A01AD5
 * 0000000140A01A8A: cmp     [rsi+8F8h], r15d
 * 0000000140A01A91: jnz     short loc_140A01AD5
 * 0000000140A01A93: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A01A9D: xor     edx, edx
 * 0000000140A01A9F: add     rax, rsi
 * 0000000140A01AA2: mov     rcx, rsi
 * 0000000140A01AA5: mov     [rsi+900h], rax
 * 0000000140A01AAC: lea     rax, [rdi+r13]
 * 0000000140A01AB0: mov     [rsi+908h], rax
 * 0000000140A01AB7: movsxd  rax, dword ptr [r13+0]
 * 0000000140A01ABB: mov     [rsi+910h], rax
 * 0000000140A01AC2: mov     [rsi+918h], rbx
 * 0000000140A01AC9: mov     [rsi+8F8h], r12d
 * 0000000140A01AD0: call    $$b8
 * 0000000140A01AD5: add     dword ptr [rsi+828h], 100h
 * 0000000140A01ADF: add     rbx, 1000h
 * 0000000140A01AE6: test    r14, r14
 * 0000000140A01AE9: jnz     short loc_140A01A74
 * 0000000140A01AEB: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A01AF2: jmp     loc_140A01CE4
 * 0000000140A01AF7: mov     r14, [r13+8]
 * 0000000140A01AFB: mov     r8d, [r13+10h]
 * 0000000140A01AFF: mov     r9, r14
 * 0000000140A01B02: add     [rsi+828h], r8d
 * 0000000140A01B09: mov     rax, r14
 * 0000000140A01B0C: mov     r11d, [rsi+814h]
 * 0000000140A01B13: mov     r15, [rsi+818h]
 * 0000000140A01B1A: lea     rcx, [r14+r8]
 * 0000000140A01B1E: cmp     r14, rcx
 * 0000000140A01B21: jnb     short loc_140A01B33
 * 0000000140A01B23: mov     edx, 40h ; '@'
 * 0000000140A01B28: prefetchnta byte ptr [rax]
 * 0000000140A01B2B: add     rax, rdx
 * 0000000140A01B2E: cmp     rax, rcx
 * 0000000140A01B31: jb      short loc_140A01B28
 * 0000000140A01B33: mov     r10d, r8d
 * 0000000140A01B36: mov     rbx, r15
 * 0000000140A01B39: shr     r10d, 7
 * 0000000140A01B3D: test    r10d, r10d
 * 0000000140A01B40: jz      short loc_140A01BB3
 * 0000000140A01B42: mov     rsi, 7010008004002001h
 * 0000000140A01B4C: mov     r12d, 1
 * 0000000140A01B52: mov     edx, 8
 * 0000000140A01B57: mov     rax, [r9]
 * 0000000140A01B5A: mov     ecx, r11d
 * 0000000140A01B5D: xor     rax, rbx
 * 0000000140A01B60: mov     rbx, [r9+8]
 * 0000000140A01B64: rol     rax, cl
 * 0000000140A01B67: add     r9, 10h
 * 0000000140A01B6B: xor     rbx, rax
 * 0000000140A01B6E: rol     rbx, cl
 * 0000000140A01B71: sub     rdx, r12
 * 0000000140A01B74: jnz     short loc_140A01B57
 * 0000000140A01B76: mov     rcx, r9
 * 0000000140A01B79: sub     rcx, r14
 * 0000000140A01B7C: xor     rcx, r15
 * 0000000140A01B7F: mov     rax, rcx
 * 0000000140A01B82: rol     rax, 11h
 * 0000000140A01B86: xor     rcx, rax
 * 0000000140A01B89: mov     rax, rsi
 * 0000000140A01B8C: mul     rcx
 * 0000000140A01B8F: xor     r11d, eax
 * 0000000140A01B92: mov     [rbp+0BE0h+var_5F8], rdx
 * 0000000140A01B99: xor     r11d, edx
 * 0000000140A01B9C: mov     eax, 0FFFFFFFFh
 * 0000000140A01BA1: and     r11d, 3Fh
 * 0000000140A01BA5: cmovz   r11d, r12d
 * 0000000140A01BA9: add     r10d, eax
 * 0000000140A01BAC: jnz     short loc_140A01B52
 * 0000000140A01BAE: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A01BB3: and     r8d, 7Fh
 * 0000000140A01BB7: mov     r10d, 1
 * 0000000140A01BBD: cmp     r8d, 8
 * 0000000140A01BC1: jb      short loc_140A01BE0
 * 0000000140A01BC3: mov     edx, r8d
 * 0000000140A01BC6: shr     rdx, 3
 * 0000000140A01BCA: xor     rbx, [r9]
 * 0000000140A01BCD: mov     ecx, r11d
 * 0000000140A01BD0: rol     rbx, cl
 * 0000000140A01BD3: add     r9, 8
 * 0000000140A01BD7: add     r8d, 0FFFFFFF8h
 * 0000000140A01BDB: sub     rdx, r10
 * 0000000140A01BDE: jnz     short loc_140A01BCA
 * 0000000140A01BE0: xor     r15d, r15d
 * 0000000140A01BE3: test    r8d, r8d
 * 0000000140A01BE6: jz      short loc_140A01C06
 * 0000000140A01BE8: mov     r15d, 0FFFFFFFFh
 * 0000000140A01BEE: movzx   eax, byte ptr [r9]
 * 0000000140A01BF2: mov     ecx, r11d
 * 0000000140A01BF5: xor     rbx, rax
 * 0000000140A01BF8: add     r9, r10
 * 0000000140A01BFB: rol     rbx, cl
 * 0000000140A01BFE: add     r8d, r15d
 * 0000000140A01C01: jnz     short loc_140A01BEE
 * 0000000140A01C03: xor     r15d, r15d
 * 0000000140A01C06: mov     rax, rbx
 * 0000000140A01C09: jmp     short loc_140A01C0D
 * 0000000140A01C0B: xor     ebx, eax
 * 0000000140A01C0D: shr     rax, 1Fh
 * 0000000140A01C11: test    rax, rax
 * 0000000140A01C14: jnz     short loc_140A01C0B
 * 0000000140A01C16: mov     r8d, [r13+14h]
 * 0000000140A01C1A: btr     ebx, 1Fh
 * 0000000140A01C1E: cmp     ebx, r8d
 * 0000000140A01C21: jz      loc_140A01CE4
 * 0000000140A01C27: mov     ecx, [r13+10h]
 * 0000000140A01C2B: mov     rdx, [r13+8]
 * 0000000140A01C2F: test    rcx, rcx
 * 0000000140A01C32: jz      loc_140A01D8B
 * 0000000140A01C38: mov     eax, [rsi+994h]
 * 0000000140A01C3E: mov     r9d, 40h ; '@'
 * 0000000140A01C44: test    r9b, al
 * 0000000140A01C47: jz      loc_140A01D8B
 * 0000000140A01C4D: mov     r12, cr8
 * 0000000140A01C51: lea     eax, [r9-3Eh]
 * 0000000140A01C55: mov     cr8, rax
 * 0000000140A01C59: mov     r14, rdx
 * 0000000140A01C5C: lea     rax, [rcx-1]
 * 0000000140A01C60: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A01C67: add     rax, rdx
 * 0000000140A01C6A: or      rax, 0FFFh
 * 0000000140A01C70: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A01C77: lea     r13, [r14-1]
 * 0000000140A01C7B: movzx   r15d, r12b
 * 0000000140A01C7F: mov     rax, [rsi+468h]
 * 0000000140A01C86: xor     edx, edx
 * 0000000140A01C88: mov     rcx, r14
 * 0000000140A01C8B: call    KeGuardDispatchICall
 * 0000000140A01C90: cmp     eax, 0C000022Dh
 * 0000000140A01C95: jnz     short loc_140A01CBB
 * 0000000140A01C97: mov     eax, 1
 * 0000000140A01C9C: cmp     r12b, al
 * 0000000140A01C9F: ja      short loc_140A01CC3
 * 0000000140A01CA1: movzx   r15d, r12b
 * 0000000140A01CA5: mov     cr8, r15
 * 0000000140A01CA9: mov     al, [r14]
 * 0000000140A01CAC: mov     rax, cr8
 * 0000000140A01CB0: mov     eax, 2
 * 0000000140A01CB5: mov     cr8, rax
 * 0000000140A01CB9: jmp     short loc_140A01C7F
 * 0000000140A01CBB: test    eax, eax
 * 0000000140A01CBD: js      loc_140A01D7B
 * 0000000140A01CC3: mov     r11d, 1000h
 * 0000000140A01CC9: add     r14, r11
 * 0000000140A01CCC: add     r13, r11
 * 0000000140A01CCF: cmp     r13, [rbp+0BE0h+arg_8]
 * 0000000140A01CD6: jnz     short loc_140A01C7B
 * 0000000140A01CD8: mov     cr8, r15
 * 0000000140A01CDC: xor     r15d, r15d
 * 0000000140A01CDF: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A01CE4: mov     eax, [r13+20h]
 * 0000000140A01CE8: mov     r14d, 1
 * 0000000140A01CEE: test    r14b, al
 * 0000000140A01CF1: jz      loc_1409F931B
 * 0000000140A01CF7: mov     rbx, [r13+18h]
 * 0000000140A01CFB: mov     rax, [rsi+1F8h]
 * 0000000140A01D02: mov     rcx, rbx
 * 0000000140A01D05: mov     [rsp+0CE0h+var_C88], rbx
 * 0000000140A01D0A: call    KeGuardDispatchICall
 * 0000000140A01D0F: movzx   r15d, word ptr [rax+14h]
 * 0000000140A01D14: add     r15, 18h
 * 0000000140A01D18: add     r15, rax
 * 0000000140A01D1B: movzx   eax, word ptr [rax+6]
 * 0000000140A01D1F: lea     rcx, [rax+rax*4]
 * 0000000140A01D23: lea     rax, [r15+rcx*8]
 * 0000000140A01D27: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A01D2C: cmp     r15, rax
 * 0000000140A01D2F: jz      loc_1409F9318
 * 0000000140A01D35: mov     r12d, [rsi+824h]
 * 0000000140A01D3C: xor     edx, edx
 * 0000000140A01D3E: test    r12d, r12d
 * 0000000140A01D41: jnz     short loc_140A01D53
 * 0000000140A01D43: mov     dword ptr [rsi+824h], 1000h
 * 0000000140A01D4D: mov     r12d, 1000h
 * 0000000140A01D53: mov     eax, r12d
 * 0000000140A01D56: cmp     rbx, [rsi+5E8h]
 * 0000000140A01D5D: jz      loc_140A0203F
 * 0000000140A01D63: cmp     rbx, [rsi+5F0h]
 * 0000000140A01D6A: jz      loc_140A0203F
 * 0000000140A01D70: mov     dword ptr [rbp+0BE0h+arg_8], edx
 * 0000000140A01D76: jmp     loc_140A02049
 * 0000000140A01D7B: mov     cr8, r15
 * 0000000140A01D7F: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A01D84: xor     r15d, r15d
 * 0000000140A01D87: mov     r8d, [r13+14h]
 * 0000000140A01D8B: mov     eax, [rsi+8F8h]
 * 0000000140A01D91: test    eax, eax
 * 0000000140A01D93: jnz     short loc_140A01DAE
 * 0000000140A01D95: mov     ecx, r8d
 * 0000000140A01D98: mov     eax, ebx
 * 0000000140A01D9A: xor     rcx, rax
 * 0000000140A01D9D: mov     rax, [rsi+590h]
 * 0000000140A01DA4: mov     [rax+18h], rcx
 * 0000000140A01DA8: mov     eax, [rsi+8F8h]
 * 0000000140A01DAE: mov     rcx, [r13+8]
 * 0000000140A01DB2: test    eax, eax
 * 0000000140A01DB4: jnz     loc_140A01CE4
 * 0000000140A01DBA: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A01DC4: xor     edx, edx
 * 0000000140A01DC6: add     rax, rsi
 * 0000000140A01DC9: mov     [rsi+900h], rax
 * 0000000140A01DD0: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A01DDA: add     rax, r13
 * 0000000140A01DDD: mov     [rsi+908h], rax
 * 0000000140A01DE4: movsxd  rax, dword ptr [r13+0]
 * 0000000140A01DE8: mov     [rsi+910h], rax
 * 0000000140A01DEF: mov     eax, 1
 * 0000000140A01DF4: mov     [rsi+918h], rcx
 * 0000000140A01DFB: mov     rcx, rsi
 * 0000000140A01DFE: mov     [rsi+8F8h], eax
 * 0000000140A01E04: call    $$b8
 * 0000000140A01E09: jmp     loc_140A01CE4
 * 0000000140A01E0E: mov     [rsi+824h], r15d
 * 0000000140A01E15: jmp     loc_140A01CE4
 * 0000000140A01E1A: mov     r14, [r13+8]
 * 0000000140A01E1E: mov     r8d, [r13+10h]
 * 0000000140A01E22: mov     r9, r14
 * 0000000140A01E25: add     [rsi+828h], r8d
 * 0000000140A01E2C: mov     rax, r14
 * 0000000140A01E2F: mov     r10d, [rsi+814h]
 * 0000000140A01E36: mov     r15, [rsi+818h]
 * 0000000140A01E3D: lea     rcx, [r14+r8]
 * 0000000140A01E41: cmp     r14, rcx
 * 0000000140A01E44: jnb     short loc_140A01E56
 * 0000000140A01E46: mov     edx, 40h ; '@'
 * 0000000140A01E4B: prefetchnta byte ptr [rax]
 * 0000000140A01E4E: add     rax, rdx
 * 0000000140A01E51: cmp     rax, rcx
 * 0000000140A01E54: jb      short loc_140A01E4B
 * 0000000140A01E56: mov     r11d, r8d
 * 0000000140A01E59: mov     rbx, r15
 * 0000000140A01E5C: shr     r11d, 7
 * 0000000140A01E60: mov     edx, 1
 * 0000000140A01E65: mov     r12d, 0FFFFFFFFh
 * 0000000140A01E6B: test    r11d, r11d
 * 0000000140A01E6E: jz      short loc_140A01EDC
 * 0000000140A01E70: mov     rdi, 7010008004002001h
 * 0000000140A01E7A: mov     eax, 8
 * 0000000140A01E7F: xor     rbx, [r9]
 * 0000000140A01E82: mov     ecx, r10d
 * 0000000140A01E85: rol     rbx, cl
 * 0000000140A01E88: xor     rbx, [r9+8]
 * 0000000140A01E8C: add     r9, 10h
 * 0000000140A01E90: rol     rbx, cl
 * 0000000140A01E93: sub     rax, rdx
 * 0000000140A01E96: jnz     short loc_140A01E7F
 * 0000000140A01E98: mov     rcx, r9
 * 0000000140A01E9B: sub     rcx, r14
 * 0000000140A01E9E: xor     rcx, r15
 * 0000000140A01EA1: mov     rax, rcx
 * 0000000140A01EA4: rol     rax, 11h
 * 0000000140A01EA8: xor     rcx, rax
 * 0000000140A01EAB: mov     rax, rdi
 * 0000000140A01EAE: mul     rcx
 * 0000000140A01EB1: xor     r10d, eax
 * 0000000140A01EB4: mov     [rbp+0BE0h+var_5F0], rdx
 * 0000000140A01EBB: xor     r10d, edx
 * 0000000140A01EBE: mov     edx, 1
 * 0000000140A01EC3: and     r10d, 3Fh
 * 0000000140A01EC7: cmovz   r10d, edx
 * 0000000140A01ECB: add     r11d, r12d
 * 0000000140A01ECE: jnz     short loc_140A01E7A
 * 0000000140A01ED0: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A01ED5: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A01EDC: and     r8d, 7Fh
 * 0000000140A01EE0: cmp     r8d, 8
 * 0000000140A01EE4: jb      short loc_140A01F03
 * 0000000140A01EE6: mov     eax, r8d
 * 0000000140A01EE9: shr     rax, 3
 * 0000000140A01EED: xor     rbx, [r9]
 * 0000000140A01EF0: mov     ecx, r10d
 * 0000000140A01EF3: rol     rbx, cl
 * 0000000140A01EF6: add     r9, 8
 * 0000000140A01EFA: add     r8d, 0FFFFFFF8h
 * 0000000140A01EFE: sub     rax, rdx
 * 0000000140A01F01: jnz     short loc_140A01EED
 * 0000000140A01F03: xor     r15d, r15d
 * 0000000140A01F06: test    r8d, r8d
 * 0000000140A01F09: jz      short loc_140A01F20
 * 0000000140A01F0B: movzx   eax, byte ptr [r9]
 * 0000000140A01F0F: mov     ecx, r10d
 * 0000000140A01F12: xor     rbx, rax
 * 0000000140A01F15: add     r9, rdx
 * 0000000140A01F18: rol     rbx, cl
 * 0000000140A01F1B: add     r8d, r12d
 * 0000000140A01F1E: jnz     short loc_140A01F0B
 * 0000000140A01F20: mov     rax, rbx
 * 0000000140A01F23: jmp     short loc_140A01F27
 * 0000000140A01F25: xor     ebx, eax
 * 0000000140A01F27: shr     rax, 1Fh
 * 0000000140A01F2B: test    rax, rax
 * 0000000140A01F2E: jnz     short loc_140A01F25
 * 0000000140A01F30: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A01F35: btr     ebx, 1Fh
 * 0000000140A01F39: mov     r13d, r15d
 * 0000000140A01F3C: cmp     ebx, [rax+14h]
 * 0000000140A01F3F: jz      loc_140A01CDF
 * 0000000140A01F45: cmp     [rax], r15d
 * 0000000140A01F48: jnz     short loc_140A01F52
 * 0000000140A01F4A: cmp     [rax+18h], r15d
 * 0000000140A01F4E: cmovnz  r13d, edx
 * 0000000140A01F52: mov     ecx, [rax+10h]
 * 0000000140A01F55: mov     rdx, [rax+8]
 * 0000000140A01F59: test    rcx, rcx
 * 0000000140A01F5C: jz      loc_140A0201E
 * 0000000140A01F62: mov     eax, [rsi+994h]
 * 0000000140A01F68: mov     r8d, 40h ; '@'
 * 0000000140A01F6E: test    r8b, al
 * 0000000140A01F71: jz      loc_140A0201E
 * 0000000140A01F77: mov     r12, cr8
 * 0000000140A01F7B: lea     eax, [r8-3Eh]
 * 0000000140A01F7F: mov     cr8, rax
 * 0000000140A01F83: mov     r14, rdx
 * 0000000140A01F86: lea     rax, [rcx-1]
 * 0000000140A01F8A: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A01F91: add     rax, rdx
 * 0000000140A01F94: or      rax, 0FFFh
 * 0000000140A01F9A: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A01F9F: lea     rax, [r14-1]
 * 0000000140A01FA3: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A01FAA: movzx   r15d, r12b
 * 0000000140A01FAE: mov     rax, [rsi+468h]
 * 0000000140A01FB5: xor     edx, edx
 * 0000000140A01FB7: mov     rcx, r14
 * 0000000140A01FBA: call    KeGuardDispatchICall
 * 0000000140A01FBF: cmp     eax, 0C000022Dh
 * 0000000140A01FC4: jnz     short loc_140A01FED
 * 0000000140A01FC6: test    r13d, r13d
 * 0000000140A01FC9: jnz     short loc_140A02017
 * 0000000140A01FCB: lea     eax, [r13+1]
 * 0000000140A01FCF: cmp     r12b, al
 * 0000000140A01FD2: ja      short loc_140A01FF1
 * 0000000140A01FD4: movzx   r15d, r12b
 * 0000000140A01FD8: mov     cr8, r15
 * 0000000140A01FDC: mov     al, [r14]
 * 0000000140A01FDF: mov     rax, cr8
 * 0000000140A01FE3: lea     eax, [r13+2]
 * 0000000140A01FE7: mov     cr8, rax
 * 0000000140A01FEB: jmp     short loc_140A01FAE
 * 0000000140A01FED: test    eax, eax
 * 0000000140A01FEF: js      short loc_140A02017
 * 0000000140A01FF1: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A01FF8: mov     r11d, 1000h
 * 0000000140A01FFE: add     rax, r11
 * 0000000140A02001: add     r14, r11
 * 0000000140A02004: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A0200B: cmp     rax, [rsp+0CE0h+var_C70]
 * 0000000140A02010: jnz     short loc_140A01FAA
 * 0000000140A02012: jmp     loc_140A01CD8
 * 0000000140A02017: mov     cr8, r15
 * 0000000140A0201B: xor     r15d, r15d
 * 0000000140A0201E: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A02023: mov     eax, [rsi+8F8h]
 * 0000000140A02029: mov     edx, [r13+14h]
 * 0000000140A0202D: test    eax, eax
 * 0000000140A0202F: jnz     loc_140A01DAE
 * 0000000140A02035: mov     ecx, ebx
 * 0000000140A02037: xor     rcx, rdx
 * 0000000140A0203A: jmp     loc_140A01D9D
 * 0000000140A0203F: mov     dword ptr [rbp+0BE0h+arg_8], r14d
 * 0000000140A02046: mov     r12d, eax
 * 0000000140A02049: mov     esi, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0204F: mov     rdi, [rsp+0CE0h+var_C70]
 * 0000000140A02054: mov     ecx, [r15+10h]
 * 0000000140A02058: mov     eax, [r15+8]
 * 0000000140A0205C: cmp     ecx, eax
 * 0000000140A0205E: mov     r11d, [r15+0Ch]
 * 0000000140A02062: cmovbe  ecx, eax
 * 0000000140A02065: lea     r13d, [r11+0FFFh]
 * 0000000140A0206C: add     r13d, ecx
 * 0000000140A0206F: and     r13d, 0FFFFF000h
 * 0000000140A02076: cmp     r12d, r13d
 * 0000000140A02079: jnb     loc_140A0218D
 * 0000000140A0207F: mov     eax, [r15+24h]
 * 0000000140A02083: bt      eax, 19h
 * 0000000140A02087: jb      loc_140A0218A
 * 0000000140A0208D: mov     ecx, [r15]
 * 0000000140A02090: cmp     ecx, 54494E49h
 * 0000000140A02096: jnz     short loc_140A020A6
 * 0000000140A02098: cmp     dword ptr [r15+4], 4742444Bh
 * 0000000140A020A0: jz      loc_140A0218A
 * 0000000140A020A6: cmp     ecx, 45474150h
 * 0000000140A020AC: jnz     short loc_140A020E3
 * 0000000140A020AE: movzx   eax, word ptr [r15+4]
 * 0000000140A020B3: mov     r8d, 7877h
 * 0000000140A020B9: cmp     ax, r8w
 * 0000000140A020BD: jz      loc_140A0218A
 * 0000000140A020C3: mov     r8d, 7277h
 * 0000000140A020C9: cmp     ax, r8w
 * 0000000140A020CD: jz      loc_140A0218A
 * 0000000140A020D3: mov     r8d, 7777h
 * 0000000140A020D9: cmp     ax, r8w
 * 0000000140A020DD: jz      loc_140A0218A
 * 0000000140A020E3: cmp     ecx, 41525245h
 * 0000000140A020E9: jnz     short loc_140A020FB
 * 0000000140A020EB: mov     eax, 4154h
 * 0000000140A020F0: cmp     [r15+4], ax
 * 0000000140A020F5: jz      loc_140A0218A
 * 0000000140A020FB: mov     rcx, [rbp+0BE0h+var_C48]
 * 0000000140A020FF: test    rcx, rcx
 * 0000000140A02102: jz      short loc_140A0213E
 * 0000000140A02104: mov     rax, [rcx+938h]
 * 0000000140A0210B: mov     r8, [rcx+930h]
 * 0000000140A02112: mov     qword ptr [rbp+0BE0h+var_940+8], rax
 * 0000000140A02119: mov     rax, [rcx+940h]
 * 0000000140A02120: mov     qword ptr [rbp+0BE0h+var_930], rax
 * 0000000140A02127: mov     rax, [rcx+948h]
 * 0000000140A0212E: mov     qword ptr [rbp+0BE0h+var_930+8], rax
 * 0000000140A02135: mov     qword ptr [rbp+0BE0h+var_940], r8
 * 0000000140A0213C: jmp     short loc_140A02161
 * 0000000140A0213E: movups  xmm0, xmmword ptr cs:VfExcludeSections
 * 0000000140A02145: movups  xmm1, xmmword ptr cs:off_140C0F050; "INIT"
 * 0000000140A0214C: movups  [rbp+0BE0h+var_940], xmm0
 * 0000000140A02153: mov     r8, qword ptr [rbp+0BE0h+var_940]
 * 0000000140A0215A: movups  [rbp+0BE0h+var_930], xmm1
 * 0000000140A02161: mov     r10d, 7
 * 0000000140A02167: mov     r9, r15
 * 0000000140A0216A: mov     r14d, 0FFFFFFFFh
 * 0000000140A02170: movzx   edx, byte ptr [r9]
 * 0000000140A02174: inc     r9
 * 0000000140A02177: movzx   eax, byte ptr [r8]
 * 0000000140A0217B: inc     r8
 * 0000000140A0217E: cmp     rdx, rax
 * 0000000140A02181: jnz     short loc_140A021CB
 * 0000000140A02183: add     r10d, r14d
 * 0000000140A02186: jnz     short loc_140A02170
 * 0000000140A02188: xor     edx, edx
 * 0000000140A0218A: mov     r12d, r13d
 * 0000000140A0218D: mov     r8, [rbp+0BE0h+var_C48]
 * 0000000140A02191: add     r15, 28h ; '('
 * 0000000140A02195: cmp     r15, rdi
 * 0000000140A02198: jnz     loc_140A02054
 * 0000000140A0219E: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A021A3: cmp     r15, rdi
 * 0000000140A021A6: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A021AD: jnz     loc_140A02537
 * 0000000140A021B3: cmp     r12d, r13d
 * 0000000140A021B6: jb      loc_140A02537
 * 0000000140A021BC: xor     r15d, r15d
 * 0000000140A021BF: mov     [r8+824h], r15d
 * 0000000140A021C6: jmp     loc_1409F931B
 * 0000000140A021CB: mov     r9, qword ptr [rbp+0BE0h+var_940+8]
 * 0000000140A021D2: mov     r8d, 8
 * 0000000140A021D8: mov     r10, r15
 * 0000000140A021DB: mov     rcx, [r10]
 * 0000000140A021DE: add     r10, 8
 * 0000000140A021E2: mov     rax, [r9]
 * 0000000140A021E5: add     r9, 8
 * 0000000140A021E9: cmp     rcx, rax
 * 0000000140A021EC: jnz     short loc_140A0221C
 * 0000000140A021EE: add     r8d, 0FFFFFFF8h
 * 0000000140A021F2: cmp     r8d, 8
 * 0000000140A021F6: jnb     short loc_140A021DB
 * 0000000140A021F8: xor     edx, edx
 * 0000000140A021FA: test    r8d, r8d
 * 0000000140A021FD: jz      short loc_140A0218A
 * 0000000140A021FF: movzx   edx, byte ptr [r10]
 * 0000000140A02203: inc     r10
 * 0000000140A02206: movzx   eax, byte ptr [r9]
 * 0000000140A0220A: inc     r9
 * 0000000140A0220D: cmp     rdx, rax
 * 0000000140A02210: jnz     short loc_140A0221C
 * 0000000140A02212: add     r8d, r14d
 * 0000000140A02215: jnz     short loc_140A021FF
 * 0000000140A02217: jmp     loc_140A02188
 * 0000000140A0221C: mov     r8, qword ptr [rbp+0BE0h+var_930]
 * 0000000140A02223: mov     r10d, 4
 * 0000000140A02229: mov     r9, r15
 * 0000000140A0222C: movzx   edx, byte ptr [r9]
 * 0000000140A02230: inc     r9
 * 0000000140A02233: movzx   eax, byte ptr [r8]
 * 0000000140A02237: inc     r8
 * 0000000140A0223A: cmp     rdx, rax
 * 0000000140A0223D: jnz     short loc_140A02249
 * 0000000140A0223F: add     r10d, r14d
 * 0000000140A02242: jnz     short loc_140A0222C
 * 0000000140A02244: jmp     loc_140A02188
 * 0000000140A02249: mov     r8, qword ptr [rbp+0BE0h+var_930+8]
 * 0000000140A02250: mov     r10d, 6
 * 0000000140A02256: mov     r9, r15
 * 0000000140A02259: movzx   edx, byte ptr [r9]
 * 0000000140A0225D: inc     r9
 * 0000000140A02260: movzx   eax, byte ptr [r8]
 * 0000000140A02264: inc     r8
 * 0000000140A02267: cmp     rdx, rax
 * 0000000140A0226A: jnz     short loc_140A02276
 * 0000000140A0226C: add     r10d, r14d
 * 0000000140A0226F: jnz     short loc_140A02259
 * 0000000140A02271: jmp     loc_140A02188
 * 0000000140A02276: mov     eax, [r15+24h]
 * 0000000140A0227A: xor     edx, edx
 * 0000000140A0227C: test    eax, eax
 * 0000000140A0227E: js      loc_140A0218A
 * 0000000140A02284: bt      eax, 1Dh
 * 0000000140A02288: jnb     loc_140A0218A
 * 0000000140A0228E: lea     r9d, [rdx+1]
 * 0000000140A02292: mov     r14d, r9d
 * 0000000140A02295: test    esi, esi
 * 0000000140A02297: jz      short loc_140A022AC
 * 0000000140A02299: mov     eax, [r15]
 * 0000000140A0229C: cmp     eax, 2E656461h
 * 0000000140A022A1: jz      short loc_140A022AC
 * 0000000140A022A3: cmp     eax, 45474150h
 * 0000000140A022A8: cmovnz  r14d, edx
 * 0000000140A022AC: mov     r8, [rbp+0BE0h+var_C48]
 * 0000000140A022B0: cmp     r12d, r11d
 * 0000000140A022B3: cmovnb  r11d, r12d
 * 0000000140A022B7: mov     r12d, r11d
 * 0000000140A022BA: mov     eax, r12d
 * 0000000140A022BD: add     rbx, rax
 * 0000000140A022C0: test    byte ptr [r8+87Bh], 4
 * 0000000140A022C8: jz      short loc_140A0232F
 * 0000000140A022CA: mov     ecx, 0FFFFFFFFh
 * 0000000140A022CF: mov     eax, ecx
 * 0000000140A022D1: xbegin  $+6
 * 0000000140A022D7: cmp     eax, ecx
 * 0000000140A022D9: jnz     short loc_140A022E2
 * 0000000140A022DB: mov     al, [rbx]
 * 0000000140A022DD: xend
 * 0000000140A022E0: jmp     short loc_140A02316
 * 0000000140A022E2: rdtsc
 * 0000000140A022E4: shl     rdx, 20h
 * 0000000140A022E8: or      rax, rdx
 * 0000000140A022EB: mov     rcx, rax
 * 0000000140A022EE: ror     rax, 3
 * 0000000140A022F2: xor     rcx, rax
 * 0000000140A022F5: mov     rax, 7010008004002001h
 * 0000000140A022FF: mul     rcx
 * 0000000140A02302: mov     [rbp+0BE0h+var_5E8], rdx
 * 0000000140A02309: xor     dl, al
 * 0000000140A0230B: mov     eax, 0Fh
 * 0000000140A02310: test    al, dl
 * 0000000140A02312: jz      short loc_140A0232D
 * 0000000140A02314: xor     edx, edx
 * 0000000140A02316: add     [r8+83Ch], r9d
 * 0000000140A0231D: add     dword ptr [r8+828h], 100h
 * 0000000140A02328: jmp     loc_140A023D7
 * 0000000140A0232D: xor     edx, edx
 * 0000000140A0232F: test    r14d, r14d
 * 0000000140A02332: jz      loc_140A02413
 * 0000000140A02338: mov     rax, [r8+450h]
 * 0000000140A0233F: lea     rcx, [rbp+0BE0h+var_708]
 * 0000000140A02346: mov     rdx, rbx
 * 0000000140A02349: call    KeGuardDispatchICall
 * 0000000140A0234E: xor     edx, edx
 * 0000000140A02350: test    eax, eax
 * 0000000140A02352: jns     loc_140A0248C
 * 0000000140A02358: cmp     eax, 0C0000005h
 * 0000000140A0235D: jnz     short loc_140A023CD
 * 0000000140A0235F: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A02364: mov     eax, [rcx+20h]
 * 0000000140A02367: test    al, 4
 * 0000000140A02369: jz      short loc_140A02371
 * 0000000140A0236B: cmp     [r15+24h], edx
 * 0000000140A0236F: jge     short loc_140A023CD
 * 0000000140A02371: mov     r8, [rbp+0BE0h+var_C48]
 * 0000000140A02375: cmp     [r8+8F8h], edx
 * 0000000140A0237C: jnz     short loc_140A023D1
 * 0000000140A0237E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02388: add     rax, r8
 * 0000000140A0238B: mov     [r8+900h], rax
 * 0000000140A02392: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0239C: add     rax, rcx
 * 0000000140A0239F: mov     [r8+908h], rax
 * 0000000140A023A6: movsxd  rax, dword ptr [rcx]
 * 0000000140A023A9: mov     rcx, r8
 * 0000000140A023AC: mov     [r8+910h], rax
 * 0000000140A023B3: mov     eax, 1
 * 0000000140A023B8: mov     [r8+918h], rbx
 * 0000000140A023BF: mov     [r8+8F8h], eax
 * 0000000140A023C6: call    $$b8
 * 0000000140A023CB: xor     edx, edx
 * 0000000140A023CD: mov     r8, [rbp+0BE0h+var_C48]
 * 0000000140A023D1: mov     r9d, 1
 * 0000000140A023D7: mov     eax, [r8+828h]
 * 0000000140A023DE: add     r12d, 1000h
 * 0000000140A023E5: cmp     r12d, r13d
 * 0000000140A023E8: jnb     short loc_140A023FC
 * 0000000140A023EA: mov     rbx, [rsp+0CE0h+var_C88]
 * 0000000140A023EF: cmp     eax, [r8+82Ch]
 * 0000000140A023F6: jl      loc_140A022BA
 * 0000000140A023FC: cmp     eax, [r8+82Ch]
 * 0000000140A02403: jge     loc_140A0219E
 * 0000000140A02409: mov     rbx, [rsp+0CE0h+var_C88]
 * 0000000140A0240E: jmp     loc_140A02191
 * 0000000140A02413: mov     r9d, 0FFFh
 * 0000000140A02419: mov     [rbp+0BE0h+var_708], rdx
 * 0000000140A02420: mov     [rbp+0BE0h+var_6FE], dx
 * 0000000140A02427: mov     rax, rbx
 * 0000000140A0242A: and     rax, r9
 * 0000000140A0242D: mov     [rbp+0BE0h+var_6E0], 1000h
 * 0000000140A02437: add     rax, 1FFFh
 * 0000000140A0243D: mov     rcx, rbx
 * 0000000140A02440: shr     rax, 0Ch
 * 0000000140A02444: add     ax, 6
 * 0000000140A02448: shl     ax, 3
 * 0000000140A0244C: mov     [rbp+0BE0h+var_700], ax
 * 0000000140A02453: mov     rax, rbx
 * 0000000140A02456: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140A0245C: mov     [rbp+0BE0h+var_6E8], rax
 * 0000000140A02463: mov     eax, ebx
 * 0000000140A02465: and     eax, r9d
 * 0000000140A02468: mov     [rbp+0BE0h+var_6DC], eax
 * 0000000140A0246E: mov     rax, [r8+458h]
 * 0000000140A02475: call    KeGuardDispatchICall
 * 0000000140A0247A: mov     [rbp+0BE0h+var_5E0], rax
 * 0000000140A02481: shr     rax, 0Ch
 * 0000000140A02485: mov     [rbp+0BE0h+var_6D8], rax
 * 0000000140A0248C: mov     rcx, [rbp+0BE0h+var_C48]
 * 0000000140A02490: mov     eax, 1
 * 0000000140A02495: add     [rcx+840h], eax
 * 0000000140A0249B: mov     eax, [rbp+0BE0h+var_6DC]
 * 0000000140A024A1: add     rax, [rbp+0BE0h+var_6E8]
 * 0000000140A024A8: mov     [rcx+0A68h], rax
 * 0000000140A024AF: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A024B4: mov     [rcx+0A60h], rax
 * 0000000140A024BB: mov     rbx, cr8
 * 0000000140A024BF: mov     eax, 2
 * 0000000140A024C4: mov     cr8, rax
 * 0000000140A024C8: mov     rax, [rcx+5F8h]
 * 0000000140A024CF: xor     r8d, r8d
 * 0000000140A024D2: add     rcx, 0A40h
 * 0000000140A024D9: mov     edx, [rax]
 * 0000000140A024DB: call    RtlInitMinimalBarrier
 * 0000000140A024E0: mov     rdx, [rbp+0BE0h+var_C48]
 * 0000000140A024E4: mov     ecx, [rdx+7F4h]
 * 0000000140A024EA: mov     rax, [rdx+448h]
 * 0000000140A024F1: add     rcx, rdx
 * 0000000140A024F4: call    KeGuardDispatchICall
 * 0000000140A024F9: mov     r8, rax
 * 0000000140A024FC: mov     [rbp+0BE0h+var_C48], rax
 * 0000000140A02500: movzx   eax, bl
 * 0000000140A02503: mov     cr8, rax
 * 0000000140A02507: xor     edx, edx
 * 0000000140A02509: test    r14d, r14d
 * 0000000140A0250C: jz      short loc_140A02527
 * 0000000140A0250E: mov     rax, [r8+460h]
 * 0000000140A02515: lea     rcx, [rbp+0BE0h+var_708]
 * 0000000140A0251C: call    KeGuardDispatchICall
 * 0000000140A02521: mov     r8, [rbp+0BE0h+var_C48]
 * 0000000140A02525: xor     edx, edx
 * 0000000140A02527: add     dword ptr [r8+828h], 14000h
 * 0000000140A02532: jmp     loc_140A023D1
 * 0000000140A02537: mov     [r8+824h], r12d
 * 0000000140A0253E: jmp     loc_1409F9318
 * 0000000140A02543: mov     r8d, 0Ch
 * 0000000140A02549: xor     eax, eax
 * 0000000140A0254B: cmp     r10d, r8d
 * 0000000140A0254E: jnz     loc_140A02878
 * 0000000140A02554: cmp     [rsi+980h], rax
 * 0000000140A0255B: jz      loc_1409F9312
 * 0000000140A02561: mov     edx, [rsi+994h]
 * 0000000140A02567: mov     ecx, edx
 * 0000000140A02569: cmp     [rsi+824h], eax
 * 0000000140A0256F: jnz     short loc_140A02583
 * 0000000140A02571: shl     ecx, 3
 * 0000000140A02574: xor     ecx, edx
 * 0000000140A02576: and     ecx, 20h
 * 0000000140A02579: xor     ecx, edx
 * 0000000140A0257B: mov     [rsi+994h], ecx
 * 0000000140A02581: jmp     short loc_140A02594
 * 0000000140A02583: mov     eax, edx
 * 0000000140A02585: shr     eax, 3
 * 0000000140A02588: xor     eax, edx
 * 0000000140A0258A: test    al, 4
 * 0000000140A0258C: jnz     loc_1409F93EA
 * 0000000140A02592: xor     eax, eax
 * 0000000140A02594: test    cl, 4
 * 0000000140A02597: jz      loc_140A02873
 * 0000000140A0259D: mov     r15, [r13+20h]
 * 0000000140A025A1: mov     eax, [r13+28h]
 * 0000000140A025A5: test    r15, r15
 * 0000000140A025A8: jz      short loc_140A025D2
 * 0000000140A025AA: mov     ebx, [rsi+824h]
 * 0000000140A025B0: sub     eax, ebx
 * 0000000140A025B2: mov     r14d, eax
 * 0000000140A025B5: add     r14, 0FFFh
 * 0000000140A025BC: lea     ecx, [r15+rbx]
 * 0000000140A025C0: and     ecx, 0FFFh
 * 0000000140A025C6: add     r14, rcx
 * 0000000140A025C9: shr     r14, 0Ch
 * 0000000140A025CD: add     rbx, r15
 * 0000000140A025D0: jmp     short loc_140A025F3
 * 0000000140A025D2: mov     r14d, [r13+8]
 * 0000000140A025D6: mov     ecx, [r13+10h]
 * 0000000140A025DA: and     r14d, 0FFFh
 * 0000000140A025E1: mov     rbx, [r13+8]
 * 0000000140A025E5: add     r14, 0FFFh
 * 0000000140A025EC: add     r14, rcx
 * 0000000140A025EF: shr     r14, 0Ch
 * 0000000140A025F3: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A025FA: test    r14, r14
 * 0000000140A025FD: jz      loc_140A026AE
 * 0000000140A02603: xor     edi, edi
 * 0000000140A02605: mov     rax, [rsi+2B0h]
 * 0000000140A0260C: mov     rcx, rbx
 * 0000000140A0260F: dec     r14
 * 0000000140A02612: call    KeGuardDispatchICall
 * 0000000140A02617: test    al, al
 * 0000000140A02619: jz      short loc_140A02672
 * 0000000140A0261B: cmp     [rsi+8F8h], edi
 * 0000000140A02621: jnz     short loc_140A02672
 * 0000000140A02623: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0262D: xor     edx, edx
 * 0000000140A0262F: add     rax, rsi
 * 0000000140A02632: mov     rcx, rsi
 * 0000000140A02635: mov     [rsi+900h], rax
 * 0000000140A0263C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A02646: add     rax, r13
 * 0000000140A02649: mov     [rsi+908h], rax
 * 0000000140A02650: movsxd  rax, dword ptr [r13+0]
 * 0000000140A02654: mov     [rsi+910h], rax
 * 0000000140A0265B: mov     eax, 1
 * 0000000140A02660: mov     [rsi+918h], rbx
 * 0000000140A02667: mov     [rsi+8F8h], eax
 * 0000000140A0266D: call    $$b8
 * 0000000140A02672: add     dword ptr [rsi+828h], 100h
 * 0000000140A0267C: add     rbx, 1000h
 * 0000000140A02683: test    r15, r15
 * 0000000140A02686: jz      short loc_140A0269E
 * 0000000140A02688: add     dword ptr [rsi+824h], 1000h
 * 0000000140A02692: mov     eax, [r12]
 * 0000000140A02696: cmp     [rsi+828h], eax
 * 0000000140A0269C: jge     short loc_140A026A7
 * 0000000140A0269E: test    r14, r14
 * 0000000140A026A1: jnz     loc_140A02605
 * 0000000140A026A7: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A026AE: test    r15, r15
 * 0000000140A026B1: jz      short loc_140A026C2
 * 0000000140A026B3: xor     r15d, r15d
 * 0000000140A026B6: test    r14, r14
 * 0000000140A026B9: jnz     short loc_140A026C2
 * 0000000140A026BB: mov     [rsi+824h], r15d
 * 0000000140A026C2: cmp     [rsi+824h], r15d
 * 0000000140A026C9: jnz     loc_1409F931B
 * 0000000140A026CF: mov     rcx, [rsi+540h]
 * 0000000140A026D6: mov     r15, cr8
 * 0000000140A026DA: mov     eax, 0Fh
 * 0000000140A026DF: mov     cr8, rax
 * 0000000140A026E3: mov     rax, [rsi+150h]
 * 0000000140A026EA: call    KeGuardDispatchICall
 * 0000000140A026EF: mov     rax, [rsi+610h]
 * 0000000140A026F6: mov     r14, [rsp+0CE0h+var_C90]
 * 0000000140A026FB: mov     rcx, [rax]
 * 0000000140A026FE: mov     eax, [rcx]
 * 0000000140A02700: lea     rbx, [rcx+10h]
 * 0000000140A02704: mov     r12b, [rcx+0Ch]
 * 0000000140A02708: lea     rcx, [rax+rax*2]
 * 0000000140A0270C: lea     r13, [rbx+rcx*8]
 * 0000000140A02710: mov     r8d, 18h
 * 0000000140A02716: lea     r9, [r14+18h]
 * 0000000140A0271A: mov     r10, rbx
 * 0000000140A0271D: mov     rcx, [r10]
 * 0000000140A02720: add     r10, 8
 * 0000000140A02724: mov     rax, [r9]
 * 0000000140A02727: add     r9, 8
 * 0000000140A0272B: cmp     rcx, rax
 * 0000000140A0272E: jnz     short loc_140A02764
 * 0000000140A02730: add     r8d, 0FFFFFFF8h
 * 0000000140A02734: cmp     r8d, 8
 * 0000000140A02738: jnb     short loc_140A0271D
 * 0000000140A0273A: test    r8d, r8d
 * 0000000140A0273D: jz      short loc_140A0276D
 * 0000000140A0273F: mov     r11d, 1
 * 0000000140A02745: movzx   edx, byte ptr [r10]
 * 0000000140A02749: add     r10, r11
 * 0000000140A0274C: movzx   eax, byte ptr [r9]
 * 0000000140A02750: add     r9, r11
 * 0000000140A02753: cmp     rdx, rax
 * 0000000140A02756: jnz     short loc_140A02764
 * 0000000140A02758: mov     eax, 0FFFFFFFFh
 * 0000000140A0275D: add     r8d, eax
 * 0000000140A02760: jz      short loc_140A0276D
 * 0000000140A02762: jmp     short loc_140A02745
 * 0000000140A02764: add     rbx, 18h
 * 0000000140A02768: cmp     rbx, r13
 * 0000000140A0276B: jb      short loc_140A02710
 * 0000000140A0276D: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A02772: mov     rcx, [rsi+540h]
 * 0000000140A02779: mov     rax, [rsi+190h]
 * 0000000140A02780: call    KeGuardDispatchICall
 * 0000000140A02785: movzx   eax, r15b
 * 0000000140A02789: mov     cr8, rax
 * 0000000140A0278D: xor     r15d, r15d
 * 0000000140A02790: test    r12b, r12b
 * 0000000140A02793: jz      short loc_140A0280F
 * 0000000140A02795: mov     eax, [rsi+994h]
 * 0000000140A0279B: lea     ecx, [r15+10h]
 * 0000000140A0279F: test    cl, al
 * 0000000140A027A1: jz      short loc_140A027FE
 * 0000000140A027A3: cmp     [rsi+8F8h], r15d
 * 0000000140A027AA: jnz     short loc_140A027FE
 * 0000000140A027AC: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A027B1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A027BB: add     rax, rsi
 * 0000000140A027BE: xor     edx, edx
 * 0000000140A027C0: mov     [rsi+900h], rax
 * 0000000140A027C7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A027D1: add     rax, rcx
 * 0000000140A027D4: mov     [rsi+908h], rax
 * 0000000140A027DB: movsxd  rax, dword ptr [rcx]
 * 0000000140A027DE: mov     rcx, rsi
 * 0000000140A027E1: mov     [rsi+910h], rax
 * 0000000140A027E8: lea     eax, [r15+1]
 * 0000000140A027EC: mov     [rsi+918h], rax
 * 0000000140A027F3: mov     [rsi+8F8h], eax
 * 0000000140A027F9: call    $$b8
 * 0000000140A027FE: mov     edx, 1
 * 0000000140A02803: cmp     [r14+18h], rdx
 * 0000000140A02807: jz      loc_1409F931B
 * 0000000140A0280D: jmp     short loc_140A02814
 * 0000000140A0280F: mov     edx, 1
 * 0000000140A02814: cmp     rbx, r13
 * 0000000140A02817: jnz     loc_1409F931B
 * 0000000140A0281D: cmp     [rsi+8F8h], r15d
 * 0000000140A02824: jnz     loc_1409F931B
 * 0000000140A0282A: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A0282F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02839: add     rax, rsi
 * 0000000140A0283C: mov     [rsi+900h], rax
 * 0000000140A02843: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0284D: add     rax, rcx
 * 0000000140A02850: mov     [rsi+908h], rax
 * 0000000140A02857: movsxd  rax, dword ptr [rcx]
 * 0000000140A0285A: mov     [rsi+910h], rax
 * 0000000140A02861: mov     [rsi+918h], rbx
 * 0000000140A02868: mov     [rsi+8F8h], edx
 * 0000000140A0286E: jmp     loc_1409F96F2
 * 0000000140A02873: mov     edx, 1
 * 0000000140A02878: cmp     [rsi+824h], eax
 * 0000000140A0287E: jnz     short loc_140A0289C
 * 0000000140A02880: cmp     r10d, r8d
 * 0000000140A02883: jnz     loc_140A02DB2
 * 0000000140A02889: cmp     [rsi+980h], rax
 * 0000000140A02890: jnz     loc_140A02A35
 * 0000000140A02896: mov     [rsi+824h], eax
 * 0000000140A0289C: xor     r15d, r15d
 * 0000000140A0289F: mov     r9, [r13+8]
 * 0000000140A028A3: mov     r8d, [rsi+824h]
 * 0000000140A028AA: mov     ecx, [r13+10h]
 * 0000000140A028AE: mov     [rbp+0BE0h+var_C10], r9
 * 0000000140A028B2: lea     rax, [r8+r8*2]
 * 0000000140A028B6: lea     r14, [r9+rax*4]
 * 0000000140A028BA: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A028C4: mul     rcx
 * 0000000140A028C7: mov     [rsp+0CE0h+var_C88], r14
 * 0000000140A028CC: shr     rdx, 3
 * 0000000140A028D0: lea     rax, [rdx+rdx*2]
 * 0000000140A028D4: lea     r12, [r9+rax*4]
 * 0000000140A028D8: mov     [rbp+0BE0h+var_C20], r12
 * 0000000140A028DC: lea     r12, ds:30h[r8*4]
 * 0000000140A028E4: add     r12, r13
 * 0000000140A028E7: mov     [rbp+0BE0h+var_C50], r12
 * 0000000140A028EB: cmp     r14, [rbp+0BE0h+var_C20]
 * 0000000140A028EF: jz      loc_140A03471
 * 0000000140A028F5: mov     rdi, [rbp+0BE0h+var_C20]
 * 0000000140A028F9: cmp     [r12], r15d
 * 0000000140A028FD: jl      loc_140A03369
 * 0000000140A02903: mov     eax, [r14]
 * 0000000140A02906: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A0290B: mov     r13d, eax
 * 0000000140A0290E: mov     r15d, [r14+4]
 * 0000000140A02912: sub     r15d, eax
 * 0000000140A02915: add     r13, [rcx+20h]
 * 0000000140A02919: mov     [rsp+0CE0h+var_C70], r13
 * 0000000140A0291E: cmp     r10d, 2Bh ; '+'
 * 0000000140A02922: jz      loc_140A03009
 * 0000000140A02928: add     [rsi+828h], r15d
 * 0000000140A0292F: mov     r9, r13
 * 0000000140A02932: mov     r10d, [rsi+814h]
 * 0000000140A02939: mov     rax, r13
 * 0000000140A0293C: mov     r11, [rsi+818h]
 * 0000000140A02943: mov     ecx, r15d
 * 0000000140A02946: add     rcx, r13
 * 0000000140A02949: cmp     r13, rcx
 * 0000000140A0294C: jnb     short loc_140A0295E
 * 0000000140A0294E: mov     edx, 40h ; '@'
 * 0000000140A02953: prefetchnta byte ptr [rax]
 * 0000000140A02956: add     rax, rdx
 * 0000000140A02959: cmp     rax, rcx
 * 0000000140A0295C: jb      short loc_140A02953
 * 0000000140A0295E: mov     r8d, r15d
 * 0000000140A02961: mov     rbx, r11
 * 0000000140A02964: shr     r8d, 7
 * 0000000140A02968: test    r8d, r8d
 * 0000000140A0296B: jz      short loc_140A029E1
 * 0000000140A0296D: mov     r12, 7010008004002001h
 * 0000000140A02977: mov     edx, 8
 * 0000000140A0297C: lea     edi, [rdx-7]
 * 0000000140A0297F: mov     rax, [r9]
 * 0000000140A02982: mov     ecx, r10d
 * 0000000140A02985: xor     rax, rbx
 * 0000000140A02988: mov     rbx, [r9+8]
 * 0000000140A0298C: rol     rax, cl
 * 0000000140A0298F: add     r9, 10h
 * 0000000140A02993: xor     rbx, rax
 * 0000000140A02996: rol     rbx, cl
 * 0000000140A02999: sub     rdx, rdi
 * 0000000140A0299C: jnz     short loc_140A0297F
 * 0000000140A0299E: mov     rcx, r9
 * 0000000140A029A1: sub     rcx, r13
 * 0000000140A029A4: xor     rcx, r11
 * 0000000140A029A7: mov     rax, rcx
 * 0000000140A029AA: rol     rax, 11h
 * 0000000140A029AE: xor     rcx, rax
 * 0000000140A029B1: mov     rax, r12
 * 0000000140A029B4: mul     rcx
 * 0000000140A029B7: xor     r10d, eax
 * 0000000140A029BA: mov     [rbp+0BE0h+var_5C8], rdx
 * 0000000140A029C1: xor     r10d, edx
 * 0000000140A029C4: mov     rax, rdi
 * 0000000140A029C7: and     r10d, 3Fh
 * 0000000140A029CB: cmovz   r10d, eax
 * 0000000140A029CF: mov     eax, 0FFFFFFFFh
 * 0000000140A029D4: add     r8d, eax
 * 0000000140A029D7: jnz     short loc_140A02977
 * 0000000140A029D9: mov     r12, [rbp+0BE0h+var_C50]
 * 0000000140A029DD: mov     rdi, [rbp+0BE0h+var_C20]
 * 0000000140A029E1: mov     edx, r15d
 * 0000000140A029E4: mov     r11d, 1
 * 0000000140A029EA: and     edx, 7Fh
 * 0000000140A029ED: cmp     edx, 8
 * 0000000140A029F0: jb      short loc_140A02A0E
 * 0000000140A029F2: mov     r8d, edx
 * 0000000140A029F5: shr     r8, 3
 * 0000000140A029F9: xor     rbx, [r9]
 * 0000000140A029FC: mov     ecx, r10d
 * 0000000140A029FF: rol     rbx, cl
 * 0000000140A02A02: add     r9, 8
 * 0000000140A02A06: add     edx, 0FFFFFFF8h
 * 0000000140A02A09: sub     r8, r11
 * 0000000140A02A0C: jnz     short loc_140A029F9
 * 0000000140A02A0E: test    edx, edx
 * 0000000140A02A10: jz      short loc_140A02A2D
 * 0000000140A02A12: mov     r8d, 0FFFFFFFFh
 * 0000000140A02A18: movzx   eax, byte ptr [r9]
 * 0000000140A02A1C: mov     ecx, r10d
 * 0000000140A02A1F: xor     rbx, rax
 * 0000000140A02A22: add     r9, r11
 * 0000000140A02A25: rol     rbx, cl
 * 0000000140A02A28: add     edx, r8d
 * 0000000140A02A2B: jnz     short loc_140A02A18
 * 0000000140A02A2D: mov     rax, rbx
 * 0000000140A02A30: jmp     loc_140A02FF3
 * 0000000140A02A35: mov     eax, [rsi+994h]
 * 0000000140A02A3B: mov     ecx, eax
 * 0000000140A02A3D: shl     ecx, 3
 * 0000000140A02A40: xor     ecx, eax
 * 0000000140A02A42: and     ecx, 20h
 * 0000000140A02A45: xor     ecx, eax
 * 0000000140A02A47: mov     [rsi+994h], ecx
 * 0000000140A02A4D: test    cl, 4
 * 0000000140A02A50: jz      loc_140A02B25
 * 0000000140A02A56: mov     r14d, [r13+8]
 * 0000000140A02A5A: xor     r15d, r15d
 * 0000000140A02A5D: mov     ecx, [r13+10h]
 * 0000000140A02A61: and     r14d, 0FFFh
 * 0000000140A02A68: mov     rbx, [r13+8]
 * 0000000140A02A6C: add     r14, 0FFFh
 * 0000000140A02A73: add     r14, rcx
 * 0000000140A02A76: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A02A7D: shr     r14, 0Ch
 * 0000000140A02A81: test    r14, r14
 * 0000000140A02A84: jz      loc_140A0289F
 * 0000000140A02A8A: jmp     short loc_140A02A91
 * 0000000140A02A8C: mov     edx, 1
 * 0000000140A02A91: mov     rax, [rsi+2B0h]
 * 0000000140A02A98: mov     rcx, rbx
 * 0000000140A02A9B: sub     r14, rdx
 * 0000000140A02A9E: call    KeGuardDispatchICall
 * 0000000140A02AA3: test    al, al
 * 0000000140A02AA5: jz      short loc_140A02AFF
 * 0000000140A02AA7: cmp     [rsi+8F8h], r15d
 * 0000000140A02AAE: jnz     short loc_140A02AFF
 * 0000000140A02AB0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02ABA: mov     edi, 1
 * 0000000140A02ABF: add     rax, rsi
 * 0000000140A02AC2: xor     edx, edx
 * 0000000140A02AC4: mov     [rsi+900h], rax
 * 0000000140A02ACB: mov     rcx, rsi
 * 0000000140A02ACE: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A02AD8: add     rax, r13
 * 0000000140A02ADB: mov     [rsi+908h], rax
 * 0000000140A02AE2: movsxd  rax, dword ptr [r13+0]
 * 0000000140A02AE6: mov     [rsi+910h], rax
 * 0000000140A02AED: mov     [rsi+918h], rbx
 * 0000000140A02AF4: mov     [rsi+8F8h], edi
 * 0000000140A02AFA: call    $$b8
 * 0000000140A02AFF: add     dword ptr [rsi+828h], 100h
 * 0000000140A02B09: add     rbx, 1000h
 * 0000000140A02B10: test    r14, r14
 * 0000000140A02B13: jnz     loc_140A02A8C
 * 0000000140A02B19: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A02B20: jmp     loc_140A02DA6
 * 0000000140A02B25: mov     r14, [r13+8]
 * 0000000140A02B29: mov     r8d, [r13+10h]
 * 0000000140A02B2D: mov     r9, r14
 * 0000000140A02B30: add     [rsi+828h], r8d
 * 0000000140A02B37: mov     rax, r14
 * 0000000140A02B3A: mov     r11d, [rsi+814h]
 * 0000000140A02B41: mov     r15, [rsi+818h]
 * 0000000140A02B48: lea     rcx, [r14+r8]
 * 0000000140A02B4C: cmp     r14, rcx
 * 0000000140A02B4F: jnb     short loc_140A02B62
 * 0000000140A02B51: mov     r10d, 40h ; '@'
 * 0000000140A02B57: prefetchnta byte ptr [rax]
 * 0000000140A02B5A: add     rax, r10
 * 0000000140A02B5D: cmp     rax, rcx
 * 0000000140A02B60: jb      short loc_140A02B57
 * 0000000140A02B62: mov     r10d, r8d
 * 0000000140A02B65: mov     rbx, r15
 * 0000000140A02B68: shr     r10d, 7
 * 0000000140A02B6C: mov     r12d, 0FFFFFFFFh
 * 0000000140A02B72: test    r10d, r10d
 * 0000000140A02B75: jz      short loc_140A02BEA
 * 0000000140A02B77: mov     rdi, 7010008004002001h
 * 0000000140A02B81: mov     edx, 8
 * 0000000140A02B86: lea     esi, [rdx-7]
 * 0000000140A02B89: mov     rax, [r9]
 * 0000000140A02B8C: mov     ecx, r11d
 * 0000000140A02B8F: xor     rax, rbx
 * 0000000140A02B92: mov     rbx, [r9+8]
 * 0000000140A02B96: rol     rax, cl
 * 0000000140A02B99: add     r9, 10h
 * 0000000140A02B9D: xor     rbx, rax
 * 0000000140A02BA0: rol     rbx, cl
 * 0000000140A02BA3: sub     rdx, rsi
 * 0000000140A02BA6: jnz     short loc_140A02B89
 * 0000000140A02BA8: mov     rcx, r9
 * 0000000140A02BAB: sub     rcx, r14
 * 0000000140A02BAE: xor     rcx, r15
 * 0000000140A02BB1: mov     rax, rcx
 * 0000000140A02BB4: rol     rax, 11h
 * 0000000140A02BB8: xor     rcx, rax
 * 0000000140A02BBB: mov     rax, rdi
 * 0000000140A02BBE: mul     rcx
 * 0000000140A02BC1: xor     r11d, eax
 * 0000000140A02BC4: mov     [rbp+0BE0h+var_5D8], rdx
 * 0000000140A02BCB: xor     r11d, edx
 * 0000000140A02BCE: mov     rdx, rsi
 * 0000000140A02BD1: and     r11d, 3Fh
 * 0000000140A02BD5: cmovz   r11d, edx
 * 0000000140A02BD9: add     r10d, r12d
 * 0000000140A02BDC: jnz     short loc_140A02B81
 * 0000000140A02BDE: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A02BE3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A02BEA: and     r8d, 7Fh
 * 0000000140A02BEE: cmp     r8d, 8
 * 0000000140A02BF2: jb      short loc_140A02C20
 * 0000000140A02BF4: mov     edx, r8d
 * 0000000140A02BF7: mov     esi, 1
 * 0000000140A02BFC: shr     rdx, 3
 * 0000000140A02C00: xor     rbx, [r9]
 * 0000000140A02C03: mov     ecx, r11d
 * 0000000140A02C06: rol     rbx, cl
 * 0000000140A02C09: add     r9, 8
 * 0000000140A02C0D: add     r8d, 0FFFFFFF8h
 * 0000000140A02C11: sub     rdx, rsi
 * 0000000140A02C14: jnz     short loc_140A02C00
 * 0000000140A02C16: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A02C1B: mov     edx, 1
 * 0000000140A02C20: xor     r15d, r15d
 * 0000000140A02C23: test    r8d, r8d
 * 0000000140A02C26: jz      short loc_140A02C3D
 * 0000000140A02C28: movzx   eax, byte ptr [r9]
 * 0000000140A02C2C: mov     ecx, r11d
 * 0000000140A02C2F: xor     rbx, rax
 * 0000000140A02C32: add     r9, rdx
 * 0000000140A02C35: rol     rbx, cl
 * 0000000140A02C38: add     r8d, r12d
 * 0000000140A02C3B: jnz     short loc_140A02C28
 * 0000000140A02C3D: mov     rax, rbx
 * 0000000140A02C40: jmp     short loc_140A02C44
 * 0000000140A02C42: xor     ebx, eax
 * 0000000140A02C44: shr     rax, 1Fh
 * 0000000140A02C48: test    rax, rax
 * 0000000140A02C4B: jnz     short loc_140A02C42
 * 0000000140A02C4D: mov     r8d, [r13+14h]
 * 0000000140A02C51: btr     ebx, 1Fh
 * 0000000140A02C55: cmp     ebx, r8d
 * 0000000140A02C58: jz      loc_140A02DA6
 * 0000000140A02C5E: mov     ecx, [r13+10h]
 * 0000000140A02C62: mov     rdx, [r13+8]
 * 0000000140A02C66: test    rcx, rcx
 * 0000000140A02C69: jz      loc_140A02D2C
 * 0000000140A02C6F: mov     eax, [rsi+994h]
 * 0000000140A02C75: mov     r9d, 40h ; '@'
 * 0000000140A02C7B: test    r9b, al
 * 0000000140A02C7E: jz      loc_140A02D2C
 * 0000000140A02C84: mov     r12, cr8
 * 0000000140A02C88: lea     eax, [r9-3Eh]
 * 0000000140A02C8C: mov     cr8, rax
 * 0000000140A02C90: mov     r14, rdx
 * 0000000140A02C93: lea     rax, [rcx-1]
 * 0000000140A02C97: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A02C9E: add     rax, rdx
 * 0000000140A02CA1: or      rax, 0FFFh
 * 0000000140A02CA7: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A02CAC: lea     r13, [r14-1]
 * 0000000140A02CB0: movzx   r15d, r12b
 * 0000000140A02CB4: mov     rax, [rsi+468h]
 * 0000000140A02CBB: xor     edx, edx
 * 0000000140A02CBD: mov     rcx, r14
 * 0000000140A02CC0: call    KeGuardDispatchICall
 * 0000000140A02CC5: cmp     eax, 0C000022Dh
 * 0000000140A02CCA: jnz     short loc_140A02CF0
 * 0000000140A02CCC: mov     eax, 1
 * 0000000140A02CD1: cmp     r12b, al
 * 0000000140A02CD4: ja      short loc_140A02CF4
 * 0000000140A02CD6: movzx   r15d, r12b
 * 0000000140A02CDA: mov     cr8, r15
 * 0000000140A02CDE: mov     al, [r14]
 * 0000000140A02CE1: mov     rax, cr8
 * 0000000140A02CE5: mov     eax, 2
 * 0000000140A02CEA: mov     cr8, rax
 * 0000000140A02CEE: jmp     short loc_140A02CB4
 * 0000000140A02CF0: test    eax, eax
 * 0000000140A02CF2: js      short loc_140A02D1C
 * 0000000140A02CF4: mov     r11d, 1000h
 * 0000000140A02CFA: add     r14, r11
 * 0000000140A02CFD: add     r13, r11
 * 0000000140A02D00: cmp     r13, [rsp+0CE0h+var_C70]
 * 0000000140A02D05: jnz     short loc_140A02CB0
 * 0000000140A02D07: mov     cr8, r15
 * 0000000140A02D0B: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A02D12: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A02D17: jmp     loc_140A0289C
 * 0000000140A02D1C: mov     cr8, r15
 * 0000000140A02D20: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A02D25: xor     r15d, r15d
 * 0000000140A02D28: mov     r8d, [r13+14h]
 * 0000000140A02D2C: mov     eax, [rsi+8F8h]
 * 0000000140A02D32: test    eax, eax
 * 0000000140A02D34: jnz     short loc_140A02D51
 * 0000000140A02D36: mov     ecx, ebx
 * 0000000140A02D38: mov     eax, r8d
 * 0000000140A02D3B: xor     rcx, rax
 * 0000000140A02D3E: mov     rax, [rsi+590h]
 * 0000000140A02D45: mov     [rax+18h], rcx
 * 0000000140A02D49: mov     eax, [rsi+8F8h]
 * 0000000140A02D4F: test    eax, eax
 * 0000000140A02D51: mov     rcx, [r13+8]
 * 0000000140A02D55: jnz     short loc_140A02DA6
 * 0000000140A02D57: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A02D61: xor     edx, edx
 * 0000000140A02D63: add     rax, rsi
 * 0000000140A02D66: mov     [rsi+900h], rax
 * 0000000140A02D6D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A02D77: add     rax, r13
 * 0000000140A02D7A: mov     [rsi+908h], rax
 * 0000000140A02D81: movsxd  rax, dword ptr [r13+0]
 * 0000000140A02D85: mov     [rsi+910h], rax
 * 0000000140A02D8C: mov     eax, 1
 * 0000000140A02D91: mov     [rsi+918h], rcx
 * 0000000140A02D98: mov     rcx, rsi
 * 0000000140A02D9B: mov     [rsi+8F8h], eax
 * 0000000140A02DA1: call    $$b8
 * 0000000140A02DA6: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A02DAD: jmp     loc_140A0289F
 * 0000000140A02DB2: mov     r14, [r13+8]
 * 0000000140A02DB6: mov     r8d, [r13+10h]
 * 0000000140A02DBA: mov     r9, r14
 * 0000000140A02DBD: add     [rsi+828h], r8d
 * 0000000140A02DC4: mov     rax, r14
 * 0000000140A02DC7: mov     r10d, [rsi+814h]
 * 0000000140A02DCE: mov     r15, [rsi+818h]
 * 0000000140A02DD5: lea     rcx, [r14+r8]
 * 0000000140A02DD9: cmp     r14, rcx
 * 0000000140A02DDC: jnb     short loc_140A02DEF
 * 0000000140A02DDE: mov     r11d, 40h ; '@'
 * 0000000140A02DE4: prefetchnta byte ptr [rax]
 * 0000000140A02DE7: add     rax, r11
 * 0000000140A02DEA: cmp     rax, rcx
 * 0000000140A02DED: jb      short loc_140A02DE4
 * 0000000140A02DEF: mov     r11d, r8d
 * 0000000140A02DF2: mov     rbx, r15
 * 0000000140A02DF5: shr     r11d, 7
 * 0000000140A02DF9: mov     r12d, 0FFFFFFFFh
 * 0000000140A02DFF: test    r11d, r11d
 * 0000000140A02E02: jz      short loc_140A02E77
 * 0000000140A02E04: mov     rdi, 7010008004002001h
 * 0000000140A02E0E: mov     edx, 8
 * 0000000140A02E13: lea     esi, [rdx-7]
 * 0000000140A02E16: mov     rax, [r9]
 * 0000000140A02E19: mov     ecx, r10d
 * 0000000140A02E1C: xor     rax, rbx
 * 0000000140A02E1F: mov     rbx, [r9+8]
 * 0000000140A02E23: rol     rax, cl
 * 0000000140A02E26: add     r9, 10h
 * 0000000140A02E2A: xor     rbx, rax
 * 0000000140A02E2D: rol     rbx, cl
 * 0000000140A02E30: sub     rdx, rsi
 * 0000000140A02E33: jnz     short loc_140A02E16
 * 0000000140A02E35: mov     rcx, r9
 * 0000000140A02E38: sub     rcx, r14
 * 0000000140A02E3B: xor     rcx, r15
 * 0000000140A02E3E: mov     rax, rcx
 * 0000000140A02E41: rol     rax, 11h
 * 0000000140A02E45: xor     rcx, rax
 * 0000000140A02E48: mov     rax, rdi
 * 0000000140A02E4B: mul     rcx
 * 0000000140A02E4E: xor     r10d, eax
 * 0000000140A02E51: mov     [rbp+0BE0h+var_5D0], rdx
 * 0000000140A02E58: xor     r10d, edx
 * 0000000140A02E5B: mov     rdx, rsi
 * 0000000140A02E5E: and     r10d, 3Fh
 * 0000000140A02E62: cmovz   r10d, edx
 * 0000000140A02E66: add     r11d, r12d
 * 0000000140A02E69: jnz     short loc_140A02E0E
 * 0000000140A02E6B: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A02E70: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A02E77: and     r8d, 7Fh
 * 0000000140A02E7B: cmp     r8d, 8
 * 0000000140A02E7F: jb      short loc_140A02EAD
 * 0000000140A02E81: mov     edx, r8d
 * 0000000140A02E84: mov     esi, 1
 * 0000000140A02E89: shr     rdx, 3
 * 0000000140A02E8D: xor     rbx, [r9]
 * 0000000140A02E90: mov     ecx, r10d
 * 0000000140A02E93: rol     rbx, cl
 * 0000000140A02E96: add     r9, 8
 * 0000000140A02E9A: add     r8d, 0FFFFFFF8h
 * 0000000140A02E9E: sub     rdx, rsi
 * 0000000140A02EA1: jnz     short loc_140A02E8D
 * 0000000140A02EA3: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A02EA8: mov     edx, 1
 * 0000000140A02EAD: xor     r15d, r15d
 * 0000000140A02EB0: test    r8d, r8d
 * 0000000140A02EB3: jz      short loc_140A02ECA
 * 0000000140A02EB5: movzx   eax, byte ptr [r9]
 * 0000000140A02EB9: mov     ecx, r10d
 * 0000000140A02EBC: xor     rbx, rax
 * 0000000140A02EBF: add     r9, rdx
 * 0000000140A02EC2: rol     rbx, cl
 * 0000000140A02EC5: add     r8d, r12d
 * 0000000140A02EC8: jnz     short loc_140A02EB5
 * 0000000140A02ECA: mov     rax, rbx
 * 0000000140A02ECD: jmp     short loc_140A02ED1
 * 0000000140A02ECF: xor     ebx, eax
 * 0000000140A02ED1: shr     rax, 1Fh
 * 0000000140A02ED5: test    rax, rax
 * 0000000140A02ED8: jnz     short loc_140A02ECF
 * 0000000140A02EDA: mov     rax, [rsp+0CE0h+var_C90]
 * 0000000140A02EDF: btr     ebx, 1Fh
 * 0000000140A02EE3: mov     r13d, r15d
 * 0000000140A02EE6: cmp     ebx, [rax+14h]
 * 0000000140A02EE9: jz      loc_140A02FE0
 * 0000000140A02EEF: cmp     [rax], r15d
 * 0000000140A02EF2: jnz     short loc_140A02EFC
 * 0000000140A02EF4: cmp     [rax+18h], r15d
 * 0000000140A02EF8: cmovnz  r13d, edx
 * 0000000140A02EFC: mov     ecx, [rax+10h]
 * 0000000140A02EFF: mov     rdx, [rax+8]
 * 0000000140A02F03: test    rcx, rcx
 * 0000000140A02F06: jz      loc_140A02FC2
 * 0000000140A02F0C: mov     eax, [rsi+994h]
 * 0000000140A02F12: mov     r8d, 40h ; '@'
 * 0000000140A02F18: test    r8b, al
 * 0000000140A02F1B: jz      loc_140A02FC2
 * 0000000140A02F21: mov     r12, cr8
 * 0000000140A02F25: lea     eax, [r8-3Eh]
 * 0000000140A02F29: mov     cr8, rax
 * 0000000140A02F2D: mov     r14, rdx
 * 0000000140A02F30: lea     rax, [rcx-1]
 * 0000000140A02F34: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140A02F3B: add     rax, rdx
 * 0000000140A02F3E: or      rax, 0FFFh
 * 0000000140A02F44: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A02F49: lea     rax, [r14-1]
 * 0000000140A02F4D: mov     [rsp+0CE0h+var_C88], rax
 * 0000000140A02F52: movzx   r15d, r12b
 * 0000000140A02F56: mov     rax, [rsi+468h]
 * 0000000140A02F5D: xor     edx, edx
 * 0000000140A02F5F: mov     rcx, r14
 * 0000000140A02F62: call    KeGuardDispatchICall
 * 0000000140A02F67: cmp     eax, 0C000022Dh
 * 0000000140A02F6C: jnz     short loc_140A02F95
 * 0000000140A02F6E: test    r13d, r13d
 * 0000000140A02F71: jnz     short loc_140A02FBB
 * 0000000140A02F73: lea     eax, [r13+1]
 * 0000000140A02F77: cmp     r12b, al
 * 0000000140A02F7A: ja      short loc_140A02F99
 * 0000000140A02F7C: movzx   r15d, r12b
 * 0000000140A02F80: mov     cr8, r15
 * 0000000140A02F84: mov     al, [r14]
 * 0000000140A02F87: mov     rax, cr8
 * 0000000140A02F8B: lea     eax, [r13+2]
 * 0000000140A02F8F: mov     cr8, rax
 * 0000000140A02F93: jmp     short loc_140A02F56
 * 0000000140A02F95: test    eax, eax
 * 0000000140A02F97: js      short loc_140A02FBB
 * 0000000140A02F99: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A02F9E: mov     r11d, 1000h
 * 0000000140A02FA4: add     rax, r11
 * 0000000140A02FA7: add     r14, r11
 * 0000000140A02FAA: mov     [rsp+0CE0h+var_C88], rax
 * 0000000140A02FAF: cmp     rax, [rsp+0CE0h+var_C70]
 * 0000000140A02FB4: jnz     short loc_140A02F52
 * 0000000140A02FB6: jmp     loc_140A02D07
 * 0000000140A02FBB: mov     cr8, r15
 * 0000000140A02FBF: xor     r15d, r15d
 * 0000000140A02FC2: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A02FC7: mov     eax, [rsi+8F8h]
 * 0000000140A02FCD: mov     ecx, [r13+14h]
 * 0000000140A02FD1: test    eax, eax
 * 0000000140A02FD3: jnz     loc_140A02D51
 * 0000000140A02FD9: mov     eax, ebx
 * 0000000140A02FDB: jmp     loc_140A02D3B
 * 0000000140A02FE0: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A02FE7: mov     r13, [rsp+0CE0h+var_C90]
 * 0000000140A02FEC: jmp     loc_140A0289F
 * 0000000140A02FF1: xor     ebx, eax
 * 0000000140A02FF3: shr     rax, 1Fh
 * 0000000140A02FF7: test    rax, rax
 * 0000000140A02FFA: jnz     short loc_140A02FF1
 * 0000000140A02FFC: btr     ebx, 1Fh
 * 0000000140A03000: mov     [rbp+0BE0h+var_C60], rbx
 * 0000000140A03004: jmp     loc_140A032A7
 * 0000000140A03009: mov     r8d, r15d
 * 0000000140A0300C: mov     rdx, r13
 * 0000000140A0300F: mov     rcx, rsi
 * 0000000140A03012: call    sub_140A0F5E8
 * 0000000140A03017: mov     ebx, eax
 * 0000000140A03019: mov     eax, r15d
 * 0000000140A0301C: shl     eax, 3
 * 0000000140A0301F: add     [rsi+828h], eax
 * 0000000140A03025: mov     eax, [rsi+994h]
 * 0000000140A0302B: mov     [rbp+0BE0h+var_C60], rbx
 * 0000000140A0302F: bt      eax, 0Bh
 * 0000000140A03033: jnb     loc_140A032A7
 * 0000000140A03039: lea     rbx, [r13-6]
 * 0000000140A0303D: xor     r10d, r10d
 * 0000000140A03040: lea     r14, [rbx+5]
 * 0000000140A03044: mov     al, [r14]
 * 0000000140A03047: cmp     byte ptr [rbx], 4Ch ; 'L'
 * 0000000140A0304A: jnz     loc_140A03242
 * 0000000140A03050: cmp     byte ptr [rbx+1], 87h
 * 0000000140A03054: jnz     loc_140A03242
 * 0000000140A0305A: cmp     [rbx+2], r10b
 * 0000000140A0305E: jnz     loc_140A03242
 * 0000000140A03064: cmp     byte ptr [rbx+3], 98h
 * 0000000140A03068: jnz     loc_140A03242
 * 0000000140A0306E: cmp     byte ptr [rbx+4], 0C3h
 * 0000000140A03072: jnz     loc_140A03242
 * 0000000140A03078: cmp     al, 90h
 * 0000000140A0307A: jz      short loc_140A03084
 * 0000000140A0307C: cmp     al, 0F1h
 * 0000000140A0307E: jnz     loc_140A03242
 * 0000000140A03084: mov     rcx, [rsi+4E0h]
 * 0000000140A0308B: cli
 * 0000000140A0308C: mov     eax, [rsi+990h]
 * 0000000140A03092: shr     eax, 0Ah
 * 0000000140A03095: and     eax, 1Fh
 * 0000000140A03098: lock bts [rcx], eax
 * 0000000140A0309C: jnb     short loc_140A030A3
 * 0000000140A0309E: sti
 * 0000000140A0309F: pause
 * 0000000140A030A1: jmp     short loc_140A0308B
 * 0000000140A030A3: mov     rdx, [rsi+8E0h]
 * 0000000140A030AA: mov     r8d, 26h ; '&'
 * 0000000140A030B0: mov     ecx, 130h
 * 0000000140A030B5: mov     rax, rdx
 * 0000000140A030B8: lea     r9d, [r8-25h]
 * 0000000140A030BC: mov     [rax], r10
 * 0000000140A030BF: add     ecx, 0FFFFFFF8h
 * 0000000140A030C2: add     rax, 8
 * 0000000140A030C6: sub     r8, r9
 * 0000000140A030C9: jnz     short loc_140A030BC
 * 0000000140A030CB: test    ecx, ecx
 * 0000000140A030CD: jz      short loc_140A030E0
 * 0000000140A030CF: mov     r8d, 0FFFFFFFFh
 * 0000000140A030D5: mov     [rax], r10b
 * 0000000140A030D8: add     rax, r9
 * 0000000140A030DB: add     ecx, r8d
 * 0000000140A030DE: jnz     short loc_140A030D5
 * 0000000140A030E0: movups  xmm0, xmmword ptr [rsi+848h]
 * 0000000140A030E7: mov     eax, 12Fh
 * 0000000140A030EC: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140A030F1: movups  xmm1, xmmword ptr [rsi+858h]
 * 0000000140A030F8: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140A030FD: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140A03104: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140A0310C: mov     word ptr [rbp+0BE0h+var_8E0], ax
 * 0000000140A03113: lea     rax, [rsi+88Ch]
 * 0000000140A0311A: mov     [rbp+302h], rdx
 * 0000000140A03121: mov     rcx, rax
 * 0000000140A03124: mov     [rdx+10h], ax
 * 0000000140A03128: shr     rcx, 10h
 * 0000000140A0312C: mov     [rbp+0BE0h+var_5C0], rax
 * 0000000140A03133: shr     rax, 20h
 * 0000000140A03137: mov     [rdx+16h], cx
 * 0000000140A0313B: mov     [rdx+18h], eax
 * 0000000140A0313E: sidt    fword ptr [rbp+0BE0h+var_740]
 * 0000000140A03145: lidt    fword ptr [rbp+0BE0h+var_8E0]
 * 0000000140A0314C: mov     byte ptr [r14], 0F1h
 * 0000000140A03150: mov     al, [r14]
 * 0000000140A03153: cmp     al, 0F1h
 * 0000000140A03155: jnz     loc_140A031FD
 * 0000000140A0315B: test    dword ptr [rsi+994h], 20000h
 * 0000000140A03165: jnz     short loc_140A031AD
 * 0000000140A03167: mov     rdx, gs:20h
 * 0000000140A03170: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A0317A: mov     rax, [rsi+4C0h]
 * 0000000140A03181: add     rcx, rsi
 * 0000000140A03184: mov     [rax], rcx
 * 0000000140A03187: lea     rcx, [rbx+6]
 * 0000000140A0318B: mov     rax, [rsi+4C8h]
 * 0000000140A03192: mov     [rax], rdx
 * 0000000140A03195: mov     rax, [rsi+4D0h]
 * 0000000140A0319C: mov     [rax], rcx
 * 0000000140A0319F: mov     rax, [rsi+4D8h]
 * 0000000140A031A6: mov     qword ptr [rax], 113h
 * 0000000140A031AD: mov     rax, r14
 * 0000000140A031B0: call    KeGuardDispatchICall
 * 0000000140A031B5: xor     r10d, r10d
 * 0000000140A031B8: test    dword ptr [rsi+994h], 20000h
 * 0000000140A031C2: jnz     short loc_140A031F6
 * 0000000140A031C4: mov     rax, [rsi+4C0h]
 * 0000000140A031CB: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A031D5: mov     [rax], rcx
 * 0000000140A031D8: mov     rax, [rsi+4C8h]
 * 0000000140A031DF: mov     [rax], r10
 * 0000000140A031E2: mov     rax, [rsi+4D0h]
 * 0000000140A031E9: mov     [rax], r10
 * 0000000140A031EC: mov     rax, [rsi+4D8h]
 * 0000000140A031F3: mov     [rax], r10
 * 0000000140A031F6: mov     al, [r14]
 * 0000000140A031F9: cmp     al, 0F1h
 * 0000000140A031FB: jz      short loc_140A03202
 * 0000000140A031FD: mov     r9d, r10d
 * 0000000140A03200: jmp     short loc_140A03215
 * 0000000140A03202: mov     byte ptr [r14], 90h
 * 0000000140A03206: mov     r9d, 1
 * 0000000140A0320C: mov     al, [r14]
 * 0000000140A0320F: cmp     al, 90h
 * 0000000140A03211: cmovnz  r9d, r10d
 * 0000000140A03215: lidt    fword ptr [rbp+0BE0h+var_740]
 * 0000000140A0321C: mov     ecx, [rsi+990h]
 * 0000000140A03222: mov     edx, 1
 * 0000000140A03227: mov     r8, [rsi+4E0h]
 * 0000000140A0322E: shr     ecx, 0Ah
 * 0000000140A03231: and     ecx, 1Fh
 * 0000000140A03234: shl     edx, cl
 * 0000000140A03236: not     edx
 * 0000000140A03238: lock and [r8], edx
 * 0000000140A0323C: sti
 * 0000000140A0323D: test    r9d, r9d
 * 0000000140A03240: jnz     short loc_140A0329E
 * 0000000140A03242: cmp     [rsi+8F8h], r10d
 * 0000000140A03249: jnz     short loc_140A0329E
 * 0000000140A0324B: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A03250: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0325A: add     rax, rsi
 * 0000000140A0325D: xor     edx, edx
 * 0000000140A0325F: mov     [rsi+900h], rax
 * 0000000140A03266: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A03270: add     rax, rcx
 * 0000000140A03273: mov     [rsi+908h], rax
 * 0000000140A0327A: movsxd  rax, dword ptr [rcx]
 * 0000000140A0327D: mov     rcx, rsi
 * 0000000140A03280: mov     [rsi+910h], rax
 * 0000000140A03287: mov     eax, 1
 * 0000000140A0328C: mov     [rsi+918h], rbx
 * 0000000140A03293: mov     [rsi+8F8h], eax
 * 0000000140A03299: call    $$b8
 * 0000000140A0329E: mov     rbx, [rbp+0BE0h+var_C60]
 * 0000000140A032A2: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A032A7: mov     ecx, [r12]
 * 0000000140A032AB: mov     eax, ecx
 * 0000000140A032AD: btr     eax, 1Fh
 * 0000000140A032B1: cmp     ebx, eax
 * 0000000140A032B3: jz      loc_140A03366
 * 0000000140A032B9: mov     edx, r15d
 * 0000000140A032BC: xor     r15d, r15d
 * 0000000140A032BF: test    rdx, rdx
 * 0000000140A032C2: jz      loc_140A033EA
 * 0000000140A032C8: mov     eax, [rsi+994h]
 * 0000000140A032CE: lea     r8d, [r15+40h]
 * 0000000140A032D2: test    r8b, al
 * 0000000140A032D5: jz      loc_140A033EA
 * 0000000140A032DB: mov     r15, cr8
 * 0000000140A032DF: lea     eax, [r8-3Eh]
 * 0000000140A032E3: mov     cr8, rax
 * 0000000140A032E7: mov     rbx, r13
 * 0000000140A032EA: dec     r13
 * 0000000140A032ED: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140A032F4: add     r13, rdx
 * 0000000140A032F7: or      r13, 0FFFh
 * 0000000140A032FE: lea     r12, [rbx-1]
 * 0000000140A03302: movzx   r14d, r15b
 * 0000000140A03306: mov     rax, [rsi+468h]
 * 0000000140A0330D: xor     edx, edx
 * 0000000140A0330F: mov     rcx, rbx
 * 0000000140A03312: call    KeGuardDispatchICall
 * 0000000140A03317: cmp     eax, 0C000022Dh
 * 0000000140A0331C: jnz     short loc_140A03341
 * 0000000140A0331E: mov     eax, 1
 * 0000000140A03323: cmp     r15b, al
 * 0000000140A03326: ja      short loc_140A03349
 * 0000000140A03328: movzx   r14d, r15b
 * 0000000140A0332C: mov     cr8, r14
 * 0000000140A03330: mov     al, [rbx]
 * 0000000140A03332: mov     rax, cr8
 * 0000000140A03336: mov     eax, 2
 * 0000000140A0333B: mov     cr8, rax
 * 0000000140A0333F: jmp     short loc_140A03306
 * 0000000140A03341: test    eax, eax
 * 0000000140A03343: js      loc_140A033D2
 * 0000000140A03349: mov     eax, 1000h
 * 0000000140A0334E: add     rbx, rax
 * 0000000140A03351: add     r12, rax
 * 0000000140A03354: cmp     r12, r13
 * 0000000140A03357: jnz     short loc_140A03302
 * 0000000140A03359: mov     cr8, r14
 * 0000000140A0335D: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A03362: mov     r12, [rbp+0BE0h+var_C50]
 * 0000000140A03366: xor     r15d, r15d
 * 0000000140A03369: add     r12, 4
 * 0000000140A0336D: add     r14, 0Ch
 * 0000000140A03371: mov     [rbp+0BE0h+var_C50], r12
 * 0000000140A03375: mov     [rsp+0CE0h+var_C88], r14
 * 0000000140A0337A: cmp     r14, rdi
 * 0000000140A0337D: jnb     short loc_140A03398
 * 0000000140A0337F: mov     rax, [rbp+0BE0h+var_C08]
 * 0000000140A03383: mov     r10d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0338A: mov     eax, [rax]
 * 0000000140A0338C: cmp     [rsi+828h], eax
 * 0000000140A03392: jl      loc_140A028F9
 * 0000000140A03398: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0339F: cmp     r14, [rbp+0BE0h+var_C20]
 * 0000000140A033A3: jz      loc_140A03471
 * 0000000140A033A9: sub     r14, [rbp+0BE0h+var_C10]
 * 0000000140A033AD: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140A033B7: imul    r14
 * 0000000140A033BA: sar     rdx, 1
 * 0000000140A033BD: mov     rax, rdx
 * 0000000140A033C0: shr     rax, 3Fh
 * 0000000140A033C4: add     rdx, rax
 * 0000000140A033C7: mov     [rsi+824h], edx
 * 0000000140A033CD: jmp     loc_1409F931B
 * 0000000140A033D2: mov     cr8, r14
 * 0000000140A033D6: mov     r12, [rbp+0BE0h+var_C50]
 * 0000000140A033DA: xor     r15d, r15d
 * 0000000140A033DD: mov     rbx, [rbp+0BE0h+var_C60]
 * 0000000140A033E1: mov     r13, [rsp+0CE0h+var_C70]
 * 0000000140A033E6: mov     ecx, [r12]
 * 0000000140A033EA: mov     eax, ecx
 * 0000000140A033EC: mov     ecx, [rsi+8F8h]
 * 0000000140A033F2: btr     eax, 1Fh
 * 0000000140A033F6: test    ecx, ecx
 * 0000000140A033F8: jnz     short loc_140A03467
 * 0000000140A033FA: mov     ecx, ebx
 * 0000000140A033FC: xor     rcx, rax
 * 0000000140A033FF: mov     rax, [rsi+590h]
 * 0000000140A03406: mov     [rax+18h], rcx
 * 0000000140A0340A: mov     ecx, [rsi+8F8h]
 * 0000000140A03410: test    ecx, ecx
 * 0000000140A03412: jnz     short loc_140A03467
 * 0000000140A03414: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A03419: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A03423: add     rax, rsi
 * 0000000140A03426: xor     edx, edx
 * 0000000140A03428: mov     [rsi+900h], rax
 * 0000000140A0342F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A03439: add     rax, rcx
 * 0000000140A0343C: mov     [rsi+908h], rax
 * 0000000140A03443: movsxd  rax, dword ptr [rcx]
 * 0000000140A03446: mov     rcx, rsi
 * 0000000140A03449: mov     [rsi+910h], rax
 * 0000000140A03450: mov     eax, 1
 * 0000000140A03455: mov     [rsi+918h], r13
 * 0000000140A0345C: mov     [rsi+8F8h], eax
 * 0000000140A03462: call    $$b8
 * 0000000140A03467: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A0346C: jmp     loc_140A03369
 * 0000000140A03471: mov     rcx, [rsi+540h]
 * 0000000140A03478: mov     r15, cr8
 * 0000000140A0347C: mov     eax, 0Fh
 * 0000000140A03481: mov     cr8, rax
 * 0000000140A03485: mov     rax, [rsi+150h]
 * 0000000140A0348C: call    KeGuardDispatchICall
 * 0000000140A03491: mov     rax, [rsi+610h]
 * 0000000140A03498: mov     r14, [rsp+0CE0h+var_C90]
 * 0000000140A0349D: mov     rcx, [rax]
 * 0000000140A034A0: mov     eax, [rcx]
 * 0000000140A034A2: lea     rbx, [rcx+10h]
 * 0000000140A034A6: mov     r12b, [rcx+0Ch]
 * 0000000140A034AA: lea     rcx, [rax+rax*2]
 * 0000000140A034AE: lea     r13, [rbx+rcx*8]
 * 0000000140A034B2: mov     r8d, 18h
 * 0000000140A034B8: lea     r9, [r14+18h]
 * 0000000140A034BC: mov     r10, rbx
 * 0000000140A034BF: mov     rcx, [r10]
 * 0000000140A034C2: add     r10, 8
 * 0000000140A034C6: mov     rax, [r9]
 * 0000000140A034C9: add     r9, 8
 * 0000000140A034CD: cmp     rcx, rax
 * 0000000140A034D0: jnz     short loc_140A03506
 * 0000000140A034D2: add     r8d, 0FFFFFFF8h
 * 0000000140A034D6: cmp     r8d, 8
 * 0000000140A034DA: jnb     short loc_140A034BF
 * 0000000140A034DC: test    r8d, r8d
 * 0000000140A034DF: jz      short loc_140A0350F
 * 0000000140A034E1: mov     r11d, 1
 * 0000000140A034E7: movzx   edx, byte ptr [r10]
 * 0000000140A034EB: add     r10, r11
 * 0000000140A034EE: movzx   eax, byte ptr [r9]
 * 0000000140A034F2: add     r9, r11
 * 0000000140A034F5: cmp     rdx, rax
 * 0000000140A034F8: jnz     short loc_140A03506
 * 0000000140A034FA: mov     eax, 0FFFFFFFFh
 * 0000000140A034FF: add     r8d, eax
 * 0000000140A03502: jz      short loc_140A0350F
 * 0000000140A03504: jmp     short loc_140A034E7
 * 0000000140A03506: add     rbx, 18h
 * 0000000140A0350A: cmp     rbx, r13
 * 0000000140A0350D: jb      short loc_140A034B2
 * 0000000140A0350F: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A03514: mov     rcx, [rsi+540h]
 * 0000000140A0351B: mov     rax, [rsi+190h]
 * 0000000140A03522: call    KeGuardDispatchICall
 * 0000000140A03527: movzx   eax, r15b
 * 0000000140A0352B: mov     cr8, rax
 * 0000000140A0352F: xor     r15d, r15d
 * 0000000140A03532: test    r12b, r12b
 * 0000000140A03535: jz      short loc_140A035B1
 * 0000000140A03537: mov     eax, [rsi+994h]
 * 0000000140A0353D: lea     ecx, [r15+10h]
 * 0000000140A03541: test    cl, al
 * 0000000140A03543: jz      short loc_140A035A0
 * 0000000140A03545: cmp     [rsi+8F8h], r15d
 * 0000000140A0354C: jnz     short loc_140A035A0
 * 0000000140A0354E: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A03553: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0355D: add     rax, rsi
 * 0000000140A03560: xor     edx, edx
 * 0000000140A03562: mov     [rsi+900h], rax
 * 0000000140A03569: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A03573: add     rax, rcx
 * 0000000140A03576: mov     [rsi+908h], rax
 * 0000000140A0357D: movsxd  rax, dword ptr [rcx]
 * 0000000140A03580: mov     rcx, rsi
 * 0000000140A03583: mov     [rsi+910h], rax
 * 0000000140A0358A: lea     eax, [r15+1]
 * 0000000140A0358E: mov     [rsi+918h], rax
 * 0000000140A03595: mov     [rsi+8F8h], eax
 * 0000000140A0359B: call    $$b8
 * 0000000140A035A0: mov     edx, 1
 * 0000000140A035A5: cmp     [r14+18h], rdx
 * 0000000140A035A9: jz      loc_140A0044D
 * 0000000140A035AF: jmp     short loc_140A035B6
 * 0000000140A035B1: mov     edx, 1
 * 0000000140A035B6: cmp     rbx, r13
 * 0000000140A035B9: jnz     loc_140A0044D
 * 0000000140A035BF: cmp     [rsi+8F8h], r15d
 * 0000000140A035C6: jnz     loc_140A0044D
 * 0000000140A035CC: mov     rcx, [rsp+0CE0h+var_C90]
 * 0000000140A035D1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A035DB: add     rax, rsi
 * 0000000140A035DE: mov     [rsi+900h], rax
 * 0000000140A035E5: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A035EF: add     rax, rcx
 * 0000000140A035F2: mov     [rsi+908h], rax
 * 0000000140A035F9: movsxd  rax, dword ptr [rcx]
 * 0000000140A035FC: mov     rcx, rsi
 * 0000000140A035FF: mov     [rsi+910h], rax
 * 0000000140A03606: mov     [rsi+918h], rbx
 * 0000000140A0360D: mov     [rsi+8F8h], edx
 * 0000000140A03613: xor     edx, edx
 * 0000000140A03615: call    $$b8
 * 0000000140A0361A: jmp     loc_140A0044D
 * 0000000140A0361F: mov     eax, [r13+24h]
 * 0000000140A03623: add     [rsi+828h], eax
 * 0000000140A03629: mov     ebx, [r13+20h]
 * 0000000140A0362D: mov     r9d, [r13+24h]
 * 0000000140A03631: add     rbx, rsi
 * 0000000140A03634: mov     r11d, [rsi+814h]
 * 0000000140A0363B: mov     r10, rbx
 * 0000000140A0363E: mov     r15, [rsi+818h]
 * 0000000140A03645: mov     rax, rbx
 * 0000000140A03648: lea     rcx, [rbx+r9]
 * 0000000140A0364C: cmp     rbx, rcx
 * 0000000140A0364F: jnb     short loc_140A03661
 * 0000000140A03651: mov     edx, 40h ; '@'
 * 0000000140A03656: prefetchnta byte ptr [rax]
 * 0000000140A03659: add     rax, rdx
 * 0000000140A0365C: cmp     rax, rcx
 * 0000000140A0365F: jb      short loc_140A03656
 * 0000000140A03661: mov     r14d, r9d
 * 0000000140A03664: mov     r8, r15
 * 0000000140A03667: shr     r14d, 7
 * 0000000140A0366B: mov     r12d, 1
 * 0000000140A03671: test    r14d, r14d
 * 0000000140A03674: jz      short loc_140A036E1
 * 0000000140A03676: mov     rsi, 7010008004002001h
 * 0000000140A03680: mov     edx, 8
 * 0000000140A03685: mov     rax, [r10]
 * 0000000140A03688: mov     ecx, r11d
 * 0000000140A0368B: xor     rax, r8
 * 0000000140A0368E: mov     r8, [r10+8]
 * 0000000140A03692: rol     rax, cl
 * 0000000140A03695: add     r10, 10h
 * 0000000140A03699: xor     r8, rax
 * 0000000140A0369C: rol     r8, cl
 * 0000000140A0369F: sub     rdx, r12
 * 0000000140A036A2: jnz     short loc_140A03685
 * 0000000140A036A4: mov     rcx, r10
 * 0000000140A036A7: sub     rcx, rbx
 * 0000000140A036AA: xor     rcx, r15
 * 0000000140A036AD: mov     rax, rcx
 * 0000000140A036B0: rol     rax, 11h
 * 0000000140A036B4: xor     rcx, rax
 * 0000000140A036B7: mov     rax, rsi
 * 0000000140A036BA: mul     rcx
 * 0000000140A036BD: xor     r11d, eax
 * 0000000140A036C0: mov     [rbp+0BE0h+var_5B8], rdx
 * 0000000140A036C7: xor     r11d, edx
 * 0000000140A036CA: mov     eax, 0FFFFFFFFh
 * 0000000140A036CF: and     r11d, 3Fh
 * 0000000140A036D3: cmovz   r11d, r12d
 * 0000000140A036D7: add     r14d, eax
 * 0000000140A036DA: jnz     short loc_140A03680
 * 0000000140A036DC: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A036E1: and     r9d, 7Fh
 * 0000000140A036E5: cmp     r9d, 8
 * 0000000140A036E9: jb      short loc_140A03708
 * 0000000140A036EB: mov     edx, r9d
 * 0000000140A036EE: shr     rdx, 3
 * 0000000140A036F2: xor     r8, [r10]
 * 0000000140A036F5: mov     ecx, r11d
 * 0000000140A036F8: rol     r8, cl
 * 0000000140A036FB: add     r10, 8
 * 0000000140A036FF: add     r9d, 0FFFFFFF8h
 * 0000000140A03703: sub     rdx, r12
 * 0000000140A03706: jnz     short loc_140A036F2
 * 0000000140A03708: xor     r15d, r15d
 * 0000000140A0370B: test    r9d, r9d
 * 0000000140A0370E: jz      short loc_140A0372E
 * 0000000140A03710: mov     r15d, 0FFFFFFFFh
 * 0000000140A03716: movzx   eax, byte ptr [r10]
 * 0000000140A0371A: mov     ecx, r11d
 * 0000000140A0371D: xor     r8, rax
 * 0000000140A03720: add     r10, r12
 * 0000000140A03723: rol     r8, cl
 * 0000000140A03726: add     r9d, r15d
 * 0000000140A03729: jnz     short loc_140A03716
 * 0000000140A0372B: xor     r15d, r15d
 * 0000000140A0372E: mov     rcx, [r13+18h]
 * 0000000140A03732: cmp     r8, rcx
 * 0000000140A03735: jz      loc_1409F931B
 * 0000000140A0373B: mov     eax, [rsi+8F8h]
 * 0000000140A03741: test    eax, eax
 * 0000000140A03743: jnz     short loc_140A03759
 * 0000000140A03745: mov     rax, [rsi+590h]
 * 0000000140A0374C: xor     rcx, r8
 * 0000000140A0374F: mov     [rax+18h], rcx
 * 0000000140A03753: mov     eax, [rsi+8F8h]
 * 0000000140A03759: mov     ecx, [r13+20h]
 * 0000000140A0375D: add     rcx, rsi
 * 0000000140A03760: test    eax, eax
 * 0000000140A03762: jmp     loc_140A01866
 * 0000000140A03767: mov     ebx, 0Fh
 * 0000000140A0376C: sub     r10d, 2
 * 0000000140A03770: jz      loc_140A03F48
 * 0000000140A03776: sub     r10d, 1
 * 0000000140A0377A: jz      loc_140A03B3A
 * 0000000140A03780: cmp     r10d, 14h
 * 0000000140A03784: jz      short loc_140A037D5
 * 0000000140A03786: xor     r15d, r15d
 * 0000000140A03789: cmp     [rsi+8F8h], r15d
 * 0000000140A03790: jnz     loc_1409F931B
 * 0000000140A03796: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A037A0: add     rax, rsi
 * 0000000140A037A3: mov     [rsi+900h], rax
 * 0000000140A037AA: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A037B4: add     rax, r13
 * 0000000140A037B7: mov     [rsi+908h], rax
 * 0000000140A037BE: mov     qword ptr [rsi+910h], 101h
 * 0000000140A037C9: mov     [rsi+918h], r15
 * 0000000140A037D0: jmp     loc_140A02868
 * 0000000140A037D5: mov     edx, [r13+28h]
 * 0000000140A037D9: lea     rcx, [rbp+0BE0h+var_2E0]
 * 0000000140A037E0: mov     rax, [rsi+1A0h]
 * 0000000140A037E7: call    KeGuardDispatchICall
 * 0000000140A037EC: mov     rax, [rsi+1D0h]
 * 0000000140A037F3: lea     rdx, [rbp+0BE0h+var_2D0]
 * 0000000140A037FA: lea     rcx, [rbp+0BE0h+var_2E0]
 * 0000000140A03801: call    KeGuardDispatchICall
 * 0000000140A03806: mov     r8, [rsi+0A10h]
 * 0000000140A0380D: xor     r15d, r15d
 * 0000000140A03810: test    r8, r8
 * 0000000140A03813: jz      short loc_140A03825
 * 0000000140A03815: mov     ebx, [r8+320h]
 * 0000000140A0381C: mov     r8, [rsi+0A10h]
 * 0000000140A03823: jmp     short loc_140A03836
 * 0000000140A03825: mov     ecx, 832h
 * 0000000140A0382A: rdmsr
 * 0000000140A0382C: shl     rdx, 20h
 * 0000000140A03830: or      rax, rdx
 * 0000000140A03833: mov     rbx, rax
 * 0000000140A03836: test    r8, r8
 * 0000000140A03839: jz      short loc_140A03844
 * 0000000140A0383B: mov     r14d, [r8+340h]
 * 0000000140A03842: jmp     short loc_140A03855
 * 0000000140A03844: mov     ecx, 834h
 * 0000000140A03849: rdmsr
 * 0000000140A0384B: shl     rdx, 20h
 * 0000000140A0384F: or      rax, rdx
 * 0000000140A03852: mov     r14, rax
 * 0000000140A03855: mov     rax, [rsi+198h]
 * 0000000140A0385C: lea     rcx, [rbp+0BE0h+var_2D0]
 * 0000000140A03863: call    KeGuardDispatchICall
 * 0000000140A03868: mov     ecx, 10h
 * 0000000140A0386D: test    [rsi+87Bh], cl
 * 0000000140A03873: jz      loc_140A039BE
 * 0000000140A03879: cli
 * 0000000140A0387A: mov     rdx, [rsi+8E0h]
 * 0000000140A03881: mov     r8d, 26h ; '&'
 * 0000000140A03887: mov     ecx, 130h
 * 0000000140A0388C: mov     rax, rdx
 * 0000000140A0388F: lea     r12d, [r8-25h]
 * 0000000140A03893: mov     [rax], r15
 * 0000000140A03896: add     ecx, 0FFFFFFF8h
 * 0000000140A03899: add     rax, 8
 * 0000000140A0389D: sub     r8, r12
 * 0000000140A038A0: jnz     short loc_140A03893
 * 0000000140A038A2: test    ecx, ecx
 * 0000000140A038A4: jz      short loc_140A038B7
 * 0000000140A038A6: mov     r8d, 0FFFFFFFFh
 * 0000000140A038AC: mov     [rax], r15b
 * 0000000140A038AF: add     rax, r12
 * 0000000140A038B2: add     ecx, r8d
 * 0000000140A038B5: jnz     short loc_140A038AC
 * 0000000140A038B7: movups  xmm0, xmmword ptr [rsi+848h]
 * 0000000140A038BE: mov     eax, 12Fh
 * 0000000140A038C3: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140A038C8: movups  xmm1, xmmword ptr [rsi+858h]
 * 0000000140A038CF: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140A038D4: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140A038DB: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140A038E3: mov     word ptr [rbp+0BE0h+var_920], ax
 * 0000000140A038EA: lea     rax, [rsi+878h]
 * 0000000140A038F1: mov     [rbp+2C2h], rdx
 * 0000000140A038F8: mov     rcx, rax
 * 0000000140A038FB: mov     [rdx+10h], ax
 * 0000000140A038FF: shr     rcx, 10h
 * 0000000140A03903: mov     [rbp+0BE0h+var_5B0], rax
 * 0000000140A0390A: shr     rax, 20h
 * 0000000140A0390E: mov     [rdx+16h], cx
 * 0000000140A03912: mov     [rdx+18h], eax
 * 0000000140A03915: sidt    fword ptr [rbp+0BE0h+var_770]
 * 0000000140A0391C: lidt    fword ptr [rbp+0BE0h+var_920]
 * 0000000140A03923: test    dword ptr [rsi+994h], 20000h
 * 0000000140A0392D: jnz     short loc_140A03971
 * 0000000140A0392F: mov     rdx, gs:20h
 * 0000000140A03938: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A03942: mov     rax, [rsi+4C0h]
 * 0000000140A03949: add     rcx, rsi
 * 0000000140A0394C: mov     [rax], rcx
 * 0000000140A0394F: mov     rax, [rsi+4C8h]
 * 0000000140A03956: mov     [rax], rdx
 * 0000000140A03959: mov     rax, [rsi+4D0h]
 * 0000000140A03960: mov     [rax], r15
 * 0000000140A03963: mov     rax, [rsi+4D8h]
 * 0000000140A0396A: mov     qword ptr [rax], 115h
 * 0000000140A03971: call    KiErrata361Present
 * 0000000140A03976: test    dword ptr [rsi+994h], 20000h
 * 0000000140A03980: jnz     short loc_140A039B4
 * 0000000140A03982: mov     rax, [rsi+4C0h]
 * 0000000140A03989: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A03993: mov     [rax], rcx
 * 0000000140A03996: mov     rax, [rsi+4C8h]
 * 0000000140A0399D: mov     [rax], r15
 * 0000000140A039A0: mov     rax, [rsi+4D0h]
 * 0000000140A039A7: mov     [rax], r15
 * 0000000140A039AA: mov     rax, [rsi+4D8h]
 * 0000000140A039B1: mov     [rax], r15
 * 0000000140A039B4: lidt    fword ptr [rbp+0BE0h+var_770]
 * 0000000140A039BB: sti
 * 0000000140A039BC: jmp     short loc_140A039C4
 * 0000000140A039BE: mov     r12d, 1
 * 0000000140A039C4: mov     eax, [r13+1Ch]
 * 0000000140A039C8: mov     r8d, [r13+18h]
 * 0000000140A039CC: and     eax, ebx
 * 0000000140A039CE: cmp     eax, r8d
 * 0000000140A039D1: jnz     short loc_140A039F2
 * 0000000140A039D3: bt      ebx, 10h
 * 0000000140A039D7: jb      loc_140A03A7C
 * 0000000140A039DD: cmp     bl, 0D1h
 * 0000000140A039E0: jz      loc_140A03A7C
 * 0000000140A039E6: lea     eax, [rbx+3]
 * 0000000140A039E9: cmp     al, r12b
 * 0000000140A039EC: jbe     loc_140A03A7C
 * 0000000140A039F2: mov     edx, [r13+28h]
 * 0000000140A039F6: mov     rax, 32000000000h
 * 0000000140A03A00: shl     rdx, 30h
 * 0000000140A03A04: or      rdx, r8
 * 0000000140A03A07: or      rdx, rax
 * 0000000140A03A0A: mov     eax, [rsi+8F8h]
 * 0000000140A03A10: test    eax, eax
 * 0000000140A03A12: jnz     short loc_140A03A7C
 * 0000000140A03A14: mov     rax, [rsi+590h]
 * 0000000140A03A1B: mov     ecx, ebx
 * 0000000140A03A1D: xor     rcx, r8
 * 0000000140A03A20: mov     [rax+18h], rcx
 * 0000000140A03A24: mov     eax, [rsi+8F8h]
 * 0000000140A03A2A: test    eax, eax
 * 0000000140A03A2C: jnz     short loc_140A03A7C
 * 0000000140A03A2E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A03A38: mov     rbx, 0B3B74BDEE4453415h
 * 0000000140A03A42: add     rax, rsi
 * 0000000140A03A45: mov     rcx, rsi
 * 0000000140A03A48: mov     [rsi+900h], rax
 * 0000000140A03A4F: lea     rax, [rbx+r13]
 * 0000000140A03A53: mov     [rsi+908h], rax
 * 0000000140A03A5A: movsxd  rax, dword ptr [r13+0]
 * 0000000140A03A5E: mov     [rsi+910h], rax
 * 0000000140A03A65: mov     [rsi+918h], rdx
 * 0000000140A03A6C: xor     edx, edx
 * 0000000140A03A6E: mov     [rsi+8F8h], r12d
 * 0000000140A03A75: call    $$b8
 * 0000000140A03A7A: jmp     short loc_140A03A86
 * 0000000140A03A7C: mov     rbx, 0B3B74BDEE4453415h
 * 0000000140A03A86: mov     eax, [r13+24h]
 * 0000000140A03A8A: mov     r8d, [r13+20h]
 * 0000000140A03A8E: and     eax, r14d
 * 0000000140A03A91: cmp     eax, r8d
 * 0000000140A03A94: jnz     short loc_140A03AB8
 * 0000000140A03A96: bt      r14d, 10h
 * 0000000140A03A9B: jb      loc_140A03F36
 * 0000000140A03AA1: cmp     r14b, 0D1h
 * 0000000140A03AA5: jz      loc_140A03F36
 * 0000000140A03AAB: lea     eax, [r14+3]
 * 0000000140A03AAF: cmp     al, r12b
 * 0000000140A03AB2: jbe     loc_140A03F36
 * 0000000140A03AB8: mov     edx, [r13+28h]
 * 0000000140A03ABC: mov     rax, 34000000000h
 * 0000000140A03AC6: shl     rdx, 30h
 * 0000000140A03ACA: or      rdx, r8
 * 0000000140A03ACD: or      rdx, rax
 * 0000000140A03AD0: mov     eax, [rsi+8F8h]
 * 0000000140A03AD6: test    eax, eax
 * 0000000140A03AD8: jnz     loc_140A03F36
 * 0000000140A03ADE: mov     rax, [rsi+590h]
 * 0000000140A03AE5: mov     ecx, r14d
 * 0000000140A03AE8: xor     rcx, r8
 * 0000000140A03AEB: mov     [rax+18h], rcx
 * 0000000140A03AEF: mov     eax, [rsi+8F8h]
 * 0000000140A03AF5: test    eax, eax
 * 0000000140A03AF7: jnz     loc_140A03F36
 * 0000000140A03AFD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A03B07: add     rax, rsi
 * 0000000140A03B0A: mov     [rsi+900h], rax
 * 0000000140A03B11: lea     rax, [rbx+r13]
 * 0000000140A03B15: mov     [rsi+908h], rax
 * 0000000140A03B1C: movsxd  rax, dword ptr [r13+0]
 * 0000000140A03B20: mov     [rsi+910h], rax
 * 0000000140A03B27: mov     [rsi+918h], rdx
 * 0000000140A03B2E: mov     [rsi+8F8h], r12d
 * 0000000140A03B35: jmp     loc_140A03F2C
 * 0000000140A03B3A: mov     edx, [r13+28h]
 * 0000000140A03B3E: lea     rcx, [rbp+0BE0h+var_2C0]
 * 0000000140A03B45: mov     rax, [rsi+1A0h]
 * 0000000140A03B4C: call    KeGuardDispatchICall
 * 0000000140A03B51: mov     rax, [rsi+1D0h]
 * 0000000140A03B58: lea     rdx, [rbp+0BE0h+var_2B0]
 * 0000000140A03B5F: lea     rcx, [rbp+0BE0h+var_2C0]
 * 0000000140A03B66: call    KeGuardDispatchICall
 * 0000000140A03B6B: lea     rdx, [rbp+0BE0h+var_190]
 * 0000000140A03B72: lea     rcx, [rbp+0BE0h+var_998]
 * 0000000140A03B79: call    KiGetGdtIdt
 * 0000000140A03B7E: mov     r15, [rbp+0BE0h+var_996]
 * 0000000140A03B85: mov     ecx, 2
 * 0000000140A03B8A: mov     r14d, [r13+10h]
 * 0000000140A03B8E: test    [rsi+87Bh], cl
 * 0000000140A03B94: jz      loc_140A03CC6
 * 0000000140A03B9A: mov     rdx, [rsi+8E0h]
 * 0000000140A03BA1: mov     r8d, 26h ; '&'
 * 0000000140A03BA7: mov     ecx, 130h
 * 0000000140A03BAC: mov     rax, rdx
 * 0000000140A03BAF: xor     r12d, r12d
 * 0000000140A03BB2: lea     r9d, [r8-25h]
 * 0000000140A03BB6: mov     [rax], r12
 * 0000000140A03BB9: add     ecx, 0FFFFFFF8h
 * 0000000140A03BBC: add     rax, 8
 * 0000000140A03BC0: sub     r8, r9
 * 0000000140A03BC3: jnz     short loc_140A03BB6
 * 0000000140A03BC5: test    ecx, ecx
 * 0000000140A03BC7: jz      short loc_140A03BDA
 * 0000000140A03BC9: mov     r8d, 0FFFFFFFFh
 * 0000000140A03BCF: mov     [rax], r12b
 * 0000000140A03BD2: add     rax, r9
 * 0000000140A03BD5: add     ecx, r8d
 * 0000000140A03BD8: jnz     short loc_140A03BCF
 * 0000000140A03BDA: movups  xmm0, xmmword ptr [rsi+848h]
 * 0000000140A03BE1: mov     eax, 12Fh
 * 0000000140A03BE6: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140A03BEB: movups  xmm1, xmmword ptr [rsi+858h]
 * 0000000140A03BF2: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140A03BF7: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140A03BFE: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140A03C06: mov     word ptr [rbp+0BE0h+var_910], ax
 * 0000000140A03C0D: lea     rax, [rsi+878h]
 * 0000000140A03C14: mov     [rbp+2D2h], rdx
 * 0000000140A03C1B: mov     rcx, rax
 * 0000000140A03C1E: mov     [rdx+10h], ax
 * 0000000140A03C22: shr     rcx, 10h
 * 0000000140A03C26: mov     [rbp+0BE0h+var_5A8], rax
 * 0000000140A03C2D: shr     rax, 20h
 * 0000000140A03C31: mov     [rdx+16h], cx
 * 0000000140A03C35: mov     [rdx+18h], eax
 * 0000000140A03C38: cli
 * 0000000140A03C39: sidt    fword ptr [rbp+0BE0h+var_750]
 * 0000000140A03C40: lidt    fword ptr [rbp+0BE0h+var_910]
 * 0000000140A03C47: mov     dr7, r12
 * 0000000140A03C4B: lea     rax, [rsi+87Eh]
 * 0000000140A03C52: mov     [rdx+10h], ax
 * 0000000140A03C56: mov     rcx, rax
 * 0000000140A03C59: shr     rcx, 10h
 * 0000000140A03C5D: shr     rax, 20h
 * 0000000140A03C61: mov     [rdx+16h], cx
 * 0000000140A03C65: mov     [rdx+18h], eax
 * 0000000140A03C68: test    byte ptr [rsi+87Bh], 20h
 * 0000000140A03C6F: jnz     short loc_140A03C7F
 * 0000000140A03C71: call    KiErrata704Present
 * 0000000140A03C76: mov     [rsi+8E8h], rax
 * 0000000140A03C7D: jmp     short loc_140A03CB0
 * 0000000140A03C7F: lea     rbx, [rsi+8AAh]
 * 0000000140A03C86: call    KiGetSs
 * 0000000140A03C8B: mov     [rbx], ax
 * 0000000140A03C8E: mov     dr0, rbx
 * 0000000140A03C91: mov     eax, 70001h
 * 0000000140A03C96: mov     dr7, rax
 * 0000000140A03C99: mov     rcx, rbx
 * 0000000140A03C9C: call    KiErrataSkx55Present
 * 0000000140A03CA1: mov     [rsi+8E8h], rax
 * 0000000140A03CA8: mov     dr7, r12
 * 0000000140A03CAC: mov     dr0, r12
 * 0000000140A03CB0: mov     eax, gs:1A4h
 * 0000000140A03CB8: mov     [rsi+8F0h], eax
 * 0000000140A03CBE: lidt    fword ptr [rbp+0BE0h+var_750]
 * 0000000140A03CC5: sti
 * 0000000140A03CC6: call    KiGetLdtr
 * 0000000140A03CCB: movzx   r12d, ax
 * 0000000140A03CCF: call    KiGetTr
 * 0000000140A03CD4: add     [rsi+828h], r14d
 * 0000000140A03CDB: lea     rcx, [r15+r14]
 * 0000000140A03CDF: mov     r9d, [rsi+814h]
 * 0000000140A03CE6: movzx   r13d, ax
 * 0000000140A03CEA: mov     r11, [rsi+818h]
 * 0000000140A03CF1: mov     r8, r15
 * 0000000140A03CF4: mov     rax, r15
 * 0000000140A03CF7: cmp     r15, rcx
 * 0000000140A03CFA: jnb     short loc_140A03D0C
 * 0000000140A03CFC: mov     edx, 40h ; '@'
 * 0000000140A03D01: prefetchnta byte ptr [rax]
 * 0000000140A03D04: add     rax, rdx
 * 0000000140A03D07: cmp     rax, rcx
 * 0000000140A03D0A: jb      short loc_140A03D01
 * 0000000140A03D0C: mov     r10d, r14d
 * 0000000140A03D0F: mov     rbx, r11
 * 0000000140A03D12: shr     r10d, 7
 * 0000000140A03D16: test    r10d, r10d
 * 0000000140A03D19: jz      short loc_140A03D93
 * 0000000140A03D1B: mov     rdi, 7010008004002001h
 * 0000000140A03D25: mov     edx, 8
 * 0000000140A03D2A: lea     esi, [rdx-7]
 * 0000000140A03D2D: mov     rax, [r8]
 * 0000000140A03D30: mov     ecx, r9d
 * 0000000140A03D33: xor     rax, rbx
 * 0000000140A03D36: mov     rbx, [r8+8]
 * 0000000140A03D3A: rol     rax, cl
 * 0000000140A03D3D: add     r8, 10h
 * 0000000140A03D41: xor     rbx, rax
 * 0000000140A03D44: rol     rbx, cl
 * 0000000140A03D47: sub     rdx, rsi
 * 0000000140A03D4A: jnz     short loc_140A03D2D
 * 0000000140A03D4C: mov     rcx, r8
 * 0000000140A03D4F: sub     rcx, r15
 * 0000000140A03D52: xor     rcx, r11
 * 0000000140A03D55: mov     rax, rcx
 * 0000000140A03D58: rol     rax, 11h
 * 0000000140A03D5C: xor     rcx, rax
 * 0000000140A03D5F: mov     rax, rdi
 * 0000000140A03D62: mul     rcx
 * 0000000140A03D65: xor     r9d, eax
 * 0000000140A03D68: mov     [rbp+0BE0h+var_5A0], rdx
 * 0000000140A03D6F: xor     r9d, edx
 * 0000000140A03D72: mov     rax, rsi
 * 0000000140A03D75: and     r9d, 3Fh
 * 0000000140A03D79: cmovz   r9d, eax
 * 0000000140A03D7D: mov     eax, 0FFFFFFFFh
 * 0000000140A03D82: add     r10d, eax
 * 0000000140A03D85: jnz     short loc_140A03D25
 * 0000000140A03D87: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A03D8C: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A03D93: and     r14d, 7Fh
 * 0000000140A03D97: mov     r10d, 1
 * 0000000140A03D9D: cmp     r14d, 8
 * 0000000140A03DA1: jb      short loc_140A03DC0
 * 0000000140A03DA3: mov     edx, r14d
 * 0000000140A03DA6: shr     rdx, 3
 * 0000000140A03DAA: xor     rbx, [r8]
 * 0000000140A03DAD: mov     ecx, r9d
 * 0000000140A03DB0: rol     rbx, cl
 * 0000000140A03DB3: add     r8, 8
 * 0000000140A03DB7: add     r14d, 0FFFFFFF8h
 * 0000000140A03DBB: sub     rdx, r10
 * 0000000140A03DBE: jnz     short loc_140A03DAA
 * 0000000140A03DC0: xor     r15d, r15d
 * 0000000140A03DC3: test    r14d, r14d
 * 0000000140A03DC6: jz      short loc_140A03DE6
 * 0000000140A03DC8: mov     r15d, 0FFFFFFFFh
 * 0000000140A03DCE: movzx   eax, byte ptr [r8]
 * 0000000140A03DD2: mov     ecx, r9d
 * 0000000140A03DD5: xor     rbx, rax
 * 0000000140A03DD8: add     r8, r10
 * 0000000140A03DDB: rol     rbx, cl
 * 0000000140A03DDE: add     r14d, r15d
 * 0000000140A03DE1: jnz     short loc_140A03DCE
 * 0000000140A03DE3: xor     r15d, r15d
 * 0000000140A03DE6: mov     rax, rbx
 * 0000000140A03DE9: jmp     short loc_140A03DED
 * 0000000140A03DEB: xor     ebx, eax
 * 0000000140A03DED: shr     rax, 1Fh
 * 0000000140A03DF1: test    rax, rax
 * 0000000140A03DF4: jnz     short loc_140A03DEB
 * 0000000140A03DF6: mov     rax, [rsi+198h]
 * 0000000140A03DFD: lea     rcx, [rbp+0BE0h+var_2B0]
 * 0000000140A03E04: btr     ebx, 1Fh
 * 0000000140A03E08: call    KeGuardDispatchICall
 * 0000000140A03E0D: mov     r9, [rsp+0CE0h+var_C90]
 * 0000000140A03E12: mov     r11d, 40h ; '@'
 * 0000000140A03E18: cmp     ebx, [r9+14h]
 * 0000000140A03E1C: jnz     short loc_140A03E3C
 * 0000000140A03E1E: movzx   eax, word ptr [r9+2Ch]
 * 0000000140A03E23: cmp     [rbp+0BE0h+var_998], ax
 * 0000000140A03E2A: jnz     short loc_140A03E3C
 * 0000000140A03E2C: test    r12w, r12w
 * 0000000140A03E30: jnz     short loc_140A03E3C
 * 0000000140A03E32: cmp     r13w, r11w
 * 0000000140A03E36: jz      loc_140A03F36
 * 0000000140A03E3C: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A03E46: mov     r10d, 1
 * 0000000140A03E4C: jz      short loc_140A03E97
 * 0000000140A03E4E: mov     rcx, [rsi+0A80h]
 * 0000000140A03E55: lea     edx, [r10+2Fh]
 * 0000000140A03E59: lea     r8d, [r10+5]
 * 0000000140A03E5D: mov     rax, [r9]
 * 0000000140A03E60: add     edx, 0FFFFFFF8h
 * 0000000140A03E63: mov     [rcx], rax
 * 0000000140A03E66: add     r9, 8
 * 0000000140A03E6A: add     rcx, 8
 * 0000000140A03E6E: sub     r8, r10
 * 0000000140A03E71: jnz     short loc_140A03E5D
 * 0000000140A03E73: test    edx, edx
 * 0000000140A03E75: jz      short loc_140A03E90
 * 0000000140A03E77: mov     r15d, 0FFFFFFFFh
 * 0000000140A03E7D: mov     al, [r9]
 * 0000000140A03E80: add     r9, r10
 * 0000000140A03E83: mov     [rcx], al
 * 0000000140A03E85: add     rcx, r10
 * 0000000140A03E88: add     edx, r15d
 * 0000000140A03E8B: jnz     short loc_140A03E7D
 * 0000000140A03E8D: xor     r15d, r15d
 * 0000000140A03E90: mov     r9, [rsi+0A80h]
 * 0000000140A03E97: mov     rax, [rbp+0BE0h+var_996]
 * 0000000140A03E9E: mov     ecx, ebx
 * 0000000140A03EA0: mov     [r9+18h], rax
 * 0000000140A03EA4: mov     [r9+20h], rcx
 * 0000000140A03EA8: test    r12w, r12w
 * 0000000140A03EAC: jz      short loc_140A03EB4
 * 0000000140A03EAE: movzx   eax, r12w
 * 0000000140A03EB2: jmp     short loc_140A03EBE
 * 0000000140A03EB4: cmp     r13w, r11w
 * 0000000140A03EB8: jz      short loc_140A03EC2
 * 0000000140A03EBA: movzx   eax, r13w
 * 0000000140A03EBE: mov     [r9+18h], rax
 * 0000000140A03EC2: mov     eax, [rsi+8F8h]
 * 0000000140A03EC8: mov     edx, [r9+14h]
 * 0000000140A03ECC: test    eax, eax
 * 0000000140A03ECE: jnz     short loc_140A03EE4
 * 0000000140A03ED0: mov     rax, [rsi+590h]
 * 0000000140A03ED7: xor     rcx, rdx
 * 0000000140A03EDA: mov     [rax+18h], rcx
 * 0000000140A03EDE: mov     eax, [rsi+8F8h]
 * 0000000140A03EE4: mov     rcx, [r9+8]
 * 0000000140A03EE8: test    eax, eax
 * 0000000140A03EEA: jnz     short loc_140A03F36
 * 0000000140A03EEC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A03EF6: add     rax, rsi
 * 0000000140A03EF9: mov     [rsi+900h], rax
 * 0000000140A03F00: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A03F0A: add     rax, r9
 * 0000000140A03F0D: mov     [rsi+908h], rax
 * 0000000140A03F14: movsxd  rax, dword ptr [r9]
 * 0000000140A03F17: mov     [rsi+910h], rax
 * 0000000140A03F1E: mov     [rsi+918h], rcx
 * 0000000140A03F25: mov     [rsi+8F8h], r10d
 * 0000000140A03F2C: xor     edx, edx
 * 0000000140A03F2E: mov     rcx, rsi
 * 0000000140A03F31: call    $$b8
 * 0000000140A03F36: mov     r14d, 8000h
 * 0000000140A03F3C: add     [rsi+828h], r14d
 * 0000000140A03F43: jmp     loc_1409F9321
 * 0000000140A03F48: mov     edx, [r13+28h]
 * 0000000140A03F4C: lea     rcx, [rbp+0BE0h+var_2A0]
 * 0000000140A03F53: mov     rax, [rsi+1A0h]
 * 0000000140A03F5A: xor     r15d, r15d
 * 0000000140A03F5D: mov     dword ptr [rbp+0BE0h+var_BF8], r15d
 * 0000000140A03F61: call    KeGuardDispatchICall
 * 0000000140A03F66: mov     rax, [rsi+1D0h]
 * 0000000140A03F6D: lea     rdx, [rbp+0BE0h+var_290]
 * 0000000140A03F74: lea     rcx, [rbp+0BE0h+var_2A0]
 * 0000000140A03F7B: call    KeGuardDispatchICall
 * 0000000140A03F80: lea     rdx, [rbp+0BE0h+var_900]
 * 0000000140A03F87: lea     rcx, [rbp+0BE0h+var_180]
 * 0000000140A03F8E: call    KiGetGdtIdt
 * 0000000140A03F93: mov     rcx, [rbp+0BE0h+var_8FE]
 * 0000000140A03F9A: mov     edi, r15d
 * 0000000140A03F9D: mov     [rsp+0CE0h+var_C70], rcx
 * 0000000140A03FA2: add     rcx, 4
 * 0000000140A03FA6: mov     [rsp+0CE0h+var_C88], rcx
 * 0000000140A03FAB: mov     rax, [rsi+8C8h]
 * 0000000140A03FB2: mov     r10, r15
 * 0000000140A03FB5: mov     [rbp+0BE0h+var_B00], rax
 * 0000000140A03FBC: mov     r14, r15
 * 0000000140A03FBF: mov     r8, [rsi+8D0h]
 * 0000000140A03FC6: mov     r12d, [rsi+8ACh]
 * 0000000140A03FCD: mov     r13d, [rsi+8B0h]
 * 0000000140A03FD4: mov     [rbp+0BE0h+var_C60], r8
 * 0000000140A03FD8: mov     [rsp+0CE0h+BugCheckParameter2], r15
 * 0000000140A03FDD: mov     [rbp+0BE0h+var_C50], r15
 * 0000000140A03FE1: mov     r15, cr8
 * 0000000140A03FE5: mov     cr8, rbx
 * 0000000140A03FE9: movzx   eax, word ptr [rcx-4]
 * 0000000140A03FED: movzx   r9d, word ptr [rcx]
 * 0000000140A03FF1: mov     word ptr [rbp+0BE0h+var_BD8], ax
 * 0000000140A03FF5: movzx   eax, word ptr [rcx+2]
 * 0000000140A03FF9: mov     word ptr [rbp+0BE0h+var_BD8+2], ax
 * 0000000140A03FFD: mov     eax, [rcx+4]
 * 0000000140A04000: mov     rcx, [rsi+618h]
 * 0000000140A04007: mov     dword ptr [rbp+0BE0h+var_BD8+4], eax
 * 0000000140A0400A: mov     rbx, [rbp+0BE0h+var_BD8]
 * 0000000140A0400E: mov     eax, edi
 * 0000000140A04010: mov     word ptr [rbp+0BE0h+arg_8], r9w
 * 0000000140A04018: lea     rdx, [rcx+rax*8]
 * 0000000140A0401C: cmp     rbx, rdx
 * 0000000140A0401F: jnz     short loc_140A04089
 * 0000000140A04021: mov     eax, 6000h
 * 0000000140A04026: test    ax, r9w
 * 0000000140A0402A: jz      short loc_140A0403C
 * 0000000140A0402C: movzx   eax, r15b
 * 0000000140A04030: mov     cr8, rax
 * 0000000140A04034: xor     r15d, r15d
 * 0000000140A04037: jmp     loc_140A04200
 * 0000000140A0403C: mov     rax, [rsi+470h]
 * 0000000140A04043: mov     ecx, edi
 * 0000000140A04045: call    KeGuardDispatchICall
 * 0000000140A0404A: mov     r14, [rax]
 * 0000000140A0404D: test    r14, r14
 * 0000000140A04050: jz      short loc_140A0407B
 * 0000000140A04052: mov     r12, [r12+r14]
 * 0000000140A04056: mov     [rsp+0CE0h+BugCheckParameter2], r12
 * 0000000140A0405B: cmp     edi, 30h ; '0'
 * 0000000140A0405E: jnb     short loc_140A04070
 * 0000000140A04060: movzx   eax, r15b
 * 0000000140A04064: mov     cr8, rax
 * 0000000140A04068: xor     r15d, r15d
 * 0000000140A0406B: jmp     loc_140A041FB
 * 0000000140A04070: mov     r13, [r13+r14+0]
 * 0000000140A04075: mov     r8, [rbp+0BE0h+var_C60]
 * 0000000140A04079: jmp     short loc_140A04091
 * 0000000140A0407B: mov     r8, [rbp+0BE0h+var_C60]
 * 0000000140A0407F: or      r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140A04083: mov     r13, [rbp+0BE0h+var_C50]
 * 0000000140A04087: jmp     short loc_140A0408C
 * 0000000140A04089: mov     r13, r10
 * 0000000140A0408C: mov     r12, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A04091: movzx   eax, r15b
 * 0000000140A04095: mov     cr8, rax
 * 0000000140A04099: xor     r15d, r15d
 * 0000000140A0409C: test    r14, r14
 * 0000000140A0409F: jnz     short loc_140A040EA
 * 0000000140A040A1: mov     rdx, [rbp+0BE0h+var_B00]
 * 0000000140A040A8: cmp     rbx, rdx
 * 0000000140A040AB: jb      loc_140A041FB
 * 0000000140A040B1: cmp     rbx, r8
 * 0000000140A040B4: ja      loc_140A041FB
 * 0000000140A040BA: mov     r8d, dword ptr [rbp+0BE0h+var_BD8]
 * 0000000140A040BE: mov     rcx, [rsi+8D8h]
 * 0000000140A040C5: sub     r8d, edx
 * 0000000140A040C8: mov     rax, [rsi+210h]
 * 0000000140A040CF: call    KeGuardDispatchICall
 * 0000000140A040D4: test    rax, rax
 * 0000000140A040D7: jz      loc_140A041FB
 * 0000000140A040DD: mov     eax, [rax+24h]
 * 0000000140A040E0: bt      eax, 19h
 * 0000000140A040E4: jb      loc_140A041FB
 * 0000000140A040EA: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A040EF: mov     ecx, 10h
 * 0000000140A040F4: cmp     [rax-2], cx
 * 0000000140A040F8: jnz     loc_140A041FB
 * 0000000140A040FE: movzx   ecx, word ptr [rax]
 * 0000000140A04101: mov     edx, 1F00h
 * 0000000140A04106: movzx   eax, cx
 * 0000000140A04109: and     ax, dx
 * 0000000140A0410C: mov     edx, 0E00h
 * 0000000140A04111: cmp     ax, dx
 * 0000000140A04114: jnz     loc_140A041FB
 * 0000000140A0411A: mov     eax, 8000h
 * 0000000140A0411F: test    ax, cx
 * 0000000140A04122: jz      loc_140A041FB
 * 0000000140A04128: mov     rax, [rsi+260h]
 * 0000000140A0412F: lea     rdx, [rbp+0BE0h+var_B00]
 * 0000000140A04136: xor     r8d, r8d
 * 0000000140A04139: mov     rcx, rbx
 * 0000000140A0413C: call    KeGuardDispatchICall
 * 0000000140A04141: test    rax, rax
 * 0000000140A04144: jz      short loc_140A0416A
 * 0000000140A04146: mov     eax, [rax]
 * 0000000140A04148: mov     rcx, [rbp+0BE0h+var_B00]
 * 0000000140A0414F: add     rax, rcx
 * 0000000140A04152: cmp     rax, rbx
 * 0000000140A04155: jnz     short loc_140A0416A
 * 0000000140A04157: cmp     rcx, [rsi+8C8h]
 * 0000000140A0415E: jnz     short loc_140A0416A
 * 0000000140A04160: test    r14, r14
 * 0000000140A04163: jnz     short loc_140A04173
 * 0000000140A04165: jmp     loc_140A0422F
 * 0000000140A0416A: test    r14, r14
 * 0000000140A0416D: jz      loc_140A041FB
 * 0000000140A04173: mov     eax, 6000h
 * 0000000140A04178: test    word ptr [rbp+0BE0h+arg_8], ax
 * 0000000140A0417F: jnz     short loc_140A041FB
 * 0000000140A04181: cmp     r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140A04185: jz      loc_140A0422F
 * 0000000140A0418B: mov     rax, [rsi+260h]
 * 0000000140A04192: lea     rdx, [rbp+0BE0h+var_B00]
 * 0000000140A04199: xor     r8d, r8d
 * 0000000140A0419C: mov     rcx, r12
 * 0000000140A0419F: call    KeGuardDispatchICall
 * 0000000140A041A4: test    rax, rax
 * 0000000140A041A7: jz      short loc_140A041FB
 * 0000000140A041A9: mov     eax, [rax]
 * 0000000140A041AB: mov     rdx, [rbp+0BE0h+var_B00]
 * 0000000140A041B2: add     rax, rdx
 * 0000000140A041B5: cmp     rax, r12
 * 0000000140A041B8: jnz     short loc_140A041FB
 * 0000000140A041BA: cmp     rdx, [rsi+8C8h]
 * 0000000140A041C1: jnz     short loc_140A041FB
 * 0000000140A041C3: mov     rcx, [rsi+8D8h]
 * 0000000140A041CA: mov     r8d, r12d
 * 0000000140A041CD: mov     rax, [rsi+210h]
 * 0000000140A041D4: sub     r8d, edx
 * 0000000140A041D7: call    KeGuardDispatchICall
 * 0000000140A041DC: test    rax, rax
 * 0000000140A041DF: jz      short loc_140A041FB
 * 0000000140A041E1: mov     eax, [rax+24h]
 * 0000000140A041E4: bt      eax, 19h
 * 0000000140A041E8: jb      short loc_140A041FB
 * 0000000140A041EA: cmp     edi, 0FEh
 * 0000000140A041F0: jnz     short loc_140A0422F
 * 0000000140A041F2: cmp     r13, [rsi+8B8h]
 * 0000000140A041F9: jz      short loc_140A0422F
 * 0000000140A041FB: mov     r10, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A04200: mov     rax, [rsi+590h]
 * 0000000140A04207: mov     [rax], rbx
 * 0000000140A0420A: mov     dword ptr [rax+10h], 80h
 * 0000000140A04211: test    r10, r10
 * 0000000140A04214: jz      short loc_140A04228
 * 0000000140A04216: mov     rax, [rsi+590h]
 * 0000000140A0421D: mov     [rax+8], r10
 * 0000000140A04221: mov     dword ptr [rax+14h], 80h
 * 0000000140A04228: mov     dword ptr [rbp+0BE0h+var_BF8], 1
 * 0000000140A0422F: mov     rcx, [rsp+0CE0h+var_C88]
 * 0000000140A04234: inc     edi
 * 0000000140A04236: add     rcx, 10h
 * 0000000140A0423A: mov     ebx, 0Fh
 * 0000000140A0423F: mov     [rsp+0CE0h+var_C88], rcx
 * 0000000140A04244: cmp     edi, 0FFh
 * 0000000140A0424A: jbe     loc_140A03FAB
 * 0000000140A04250: lea     ecx, [rbx-0Eh]
 * 0000000140A04253: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0425A: test    [rsi+87Bh], cl
 * 0000000140A04260: jz      loc_140A04334
 * 0000000140A04266: cli
 * 0000000140A04267: mov     r14d, 0C0000082h
 * 0000000140A0426D: mov     ecx, r14d
 * 0000000140A04270: rdmsr
 * 0000000140A04272: shl     rdx, 20h
 * 0000000140A04276: or      rax, rdx
 * 0000000140A04279: lea     rdx, [rsi+87Ah]
 * 0000000140A04280: mov     rbx, rax
 * 0000000140A04283: mov     rax, rdx
 * 0000000140A04286: shr     rdx, 20h
 * 0000000140A0428A: wrmsr
 * 0000000140A0428C: mov     r13d, 20000h
 * 0000000140A04292: test    [rsi+994h], r13d
 * 0000000140A04299: jnz     short loc_140A042DD
 * 0000000140A0429B: mov     rdx, gs:20h
 * 0000000140A042A4: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A042AE: mov     rax, [rsi+4C0h]
 * 0000000140A042B5: add     rcx, rsi
 * 0000000140A042B8: mov     [rax], rcx
 * 0000000140A042BB: mov     rax, [rsi+4C8h]
 * 0000000140A042C2: mov     [rax], rdx
 * 0000000140A042C5: mov     rax, [rsi+4D0h]
 * 0000000140A042CC: mov     [rax], r14
 * 0000000140A042CF: mov     rax, [rsi+4D8h]
 * 0000000140A042D6: mov     qword ptr [rax], 112h
 * 0000000140A042DD: lea     rax, [rsi+87Ch]
 * 0000000140A042E4: call    KeGuardDispatchICall
 * 0000000140A042E9: test    [rsi+994h], r13d
 * 0000000140A042F0: jnz     short loc_140A04324
 * 0000000140A042F2: mov     rax, [rsi+4C0h]
 * 0000000140A042F9: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140A04303: mov     [rax], rcx
 * 0000000140A04306: mov     rax, [rsi+4C8h]
 * 0000000140A0430D: mov     [rax], r15
 * 0000000140A04310: mov     rax, [rsi+4D0h]
 * 0000000140A04317: mov     [rax], r15
 * 0000000140A0431A: mov     rax, [rsi+4D8h]
 * 0000000140A04321: mov     [rax], r15
 * 0000000140A04324: mov     rdx, rbx
 * 0000000140A04327: mov     rax, rbx
 * 0000000140A0432A: shr     rdx, 20h
 * 0000000140A0432E: mov     ecx, r14d
 * 0000000140A04331: wrmsr
 * 0000000140A04333: sti
 * 0000000140A04334: mov     r15, [rsp+0CE0h+var_C70]
 * 0000000140A04339: add     dword ptr [rsi+828h], 350h
 * 0000000140A04343: mov     r8, r15
 * 0000000140A04346: mov     ebx, [rsi+828h]
 * 0000000140A0434C: mov     rax, r15
 * 0000000140A0434F: mov     r9d, [rsi+814h]
 * 0000000140A04356: mov     r11, [rsi+818h]
 * 0000000140A0435D: lea     rcx, [r15+350h]
 * 0000000140A04364: cmp     r15, rcx
 * 0000000140A04367: jnb     short loc_140A04379
 * 0000000140A04369: mov     edx, 40h ; '@'
 * 0000000140A0436E: prefetchnta byte ptr [rax]
 * 0000000140A04371: add     rax, rdx
 * 0000000140A04374: cmp     rax, rcx
 * 0000000140A04377: jb      short loc_140A0436E
 * 0000000140A04379: mov     r10d, 6
 * 0000000140A0437F: mov     r14, r11
 * 0000000140A04382: mov     rsi, 7010008004002001h
 * 0000000140A0438C: lea     r13d, [r10+2]
 * 0000000140A04390: mov     rdx, r13
 * 0000000140A04393: mov     r12d, 1
 * 0000000140A04399: mov     rax, [r8]
 * 0000000140A0439C: mov     ecx, r9d
 * 0000000140A0439F: xor     rax, r14
 * 0000000140A043A2: add     r8, r13
 * 0000000140A043A5: rol     rax, cl
 * 0000000140A043A8: mov     r14, [r8]
 * 0000000140A043AB: add     r8, r13
 * 0000000140A043AE: xor     r14, rax
 * 0000000140A043B1: rol     r14, cl
 * 0000000140A043B4: sub     rdx, r12
 * 0000000140A043B7: jnz     short loc_140A04399
 * 0000000140A043B9: mov     rcx, r8
 * 0000000140A043BC: sub     rcx, r15
 * 0000000140A043BF: xor     rcx, r11
 * 0000000140A043C2: mov     rax, rcx
 * 0000000140A043C5: rol     rax, 11h
 * 0000000140A043C9: xor     rcx, rax
 * 0000000140A043CC: mov     rax, rsi
 * 0000000140A043CF: mul     rcx
 * 0000000140A043D2: xor     r9d, eax
 * 0000000140A043D5: mov     [rbp+0BE0h+var_598], rdx
 * 0000000140A043DC: xor     r9d, edx
 * 0000000140A043DF: mov     rax, r12
 * 0000000140A043E2: and     r9d, 3Fh
 * 0000000140A043E6: cmovz   r9d, eax
 * 0000000140A043EA: mov     eax, 0FFFFFFFFh
 * 0000000140A043EF: add     r10d, eax
 * 0000000140A043F2: jnz     short loc_140A04390
 * 0000000140A043F4: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A043F9: lea     edx, [r10+50h]
 * 0000000140A043FD: mov     r12d, dword ptr [rbp+0BE0h+var_BF8]
 * 0000000140A04401: lea     r10d, [rdx-46h]
 * 0000000140A04405: lea     r11d, [rdx-4Fh]
 * 0000000140A04409: xor     r14, [r8]
 * 0000000140A0440C: mov     ecx, r9d
 * 0000000140A0440F: rol     r14, cl
 * 0000000140A04412: add     r8, r13
 * 0000000140A04415: add     edx, 0FFFFFFF8h
 * 0000000140A04418: sub     r10, r11
 * 0000000140A0441B: jnz     short loc_140A04409
 * 0000000140A0441D: test    edx, edx
 * 0000000140A0441F: jz      short loc_140A04439
 * 0000000140A04421: mov     r10, rax
 * 0000000140A04424: movzx   eax, byte ptr [r8]
 * 0000000140A04428: mov     ecx, r9d
 * 0000000140A0442B: xor     r14, rax
 * 0000000140A0442E: add     r8, r11
 * 0000000140A04431: rol     r14, cl
 * 0000000140A04434: add     edx, r10d
 * 0000000140A04437: jnz     short loc_140A04424
 * 0000000140A04439: mov     rax, r14
 * 0000000140A0443C: jmp     short loc_140A04441
 * 0000000140A0443E: xor     r14d, eax
 * 0000000140A04441: shr     rax, 1Fh
 * 0000000140A04445: test    rax, rax
 * 0000000140A04448: jnz     short loc_140A0443E
 * 0000000140A0444A: lea     eax, [rbx+10h]
 * 0000000140A0444D: btr     r14d, 1Fh
 * 0000000140A04452: mov     [rsi+828h], eax
 * 0000000140A04458: lea     rdx, [r15+0E10h]
 * 0000000140A0445F: mov     r9d, [rsi+814h]
 * 0000000140A04466: lea     rcx, [r15+0E20h]
 * 0000000140A0446D: mov     rbx, [rsi+818h]
 * 0000000140A04474: mov     rax, rdx
 * 0000000140A04477: cmp     rdx, rcx
 * 0000000140A0447A: jnb     short loc_140A0448D
 * 0000000140A0447C: mov     r8d, 40h ; '@'
 * 0000000140A04482: prefetchnta byte ptr [rax]
 * 0000000140A04485: add     rax, r8
 * 0000000140A04488: cmp     rax, rcx
 * 0000000140A0448B: jb      short loc_140A04482
 * 0000000140A0448D: mov     eax, 2
 * 0000000140A04492: lea     r8d, [rax+0Eh]
 * 0000000140A04496: xor     rbx, [rdx]
 * 0000000140A04499: mov     ecx, r9d
 * 0000000140A0449C: rol     rbx, cl
 * 0000000140A0449F: add     rdx, r13
 * 0000000140A044A2: add     r8d, 0FFFFFFF8h
 * 0000000140A044A6: sub     rax, r11
 * 0000000140A044A9: jnz     short loc_140A04496
 * 0000000140A044AB: xor     r15d, r15d
 * 0000000140A044AE: test    r8d, r8d
 * 0000000140A044B1: jz      short loc_140A044D0
 * 0000000140A044B3: mov     r15d, 0FFFFFFFFh
 * 0000000140A044B9: movzx   eax, byte ptr [rdx]
 * 0000000140A044BC: mov     ecx, r9d
 * 0000000140A044BF: xor     rbx, rax
 * 0000000140A044C2: add     rdx, r11
 * 0000000140A044C5: rol     rbx, cl
 * 0000000140A044C8: add     r8d, r15d
 * 0000000140A044CB: jnz     short loc_140A044B9
 * 0000000140A044CD: xor     r15d, r15d
 * 0000000140A044D0: mov     rax, rbx
 * 0000000140A044D3: jmp     short loc_140A044D7
 * 0000000140A044D5: xor     ebx, eax
 * 0000000140A044D7: shr     rax, 1Fh
 * 0000000140A044DB: test    rax, rax
 * 0000000140A044DE: jnz     short loc_140A044D5
 * 0000000140A044E0: mov     rax, [rsi+198h]
 * 0000000140A044E7: lea     rcx, [rbp+0BE0h+var_290]
 * 0000000140A044EE: btr     ebx, 1Fh
 * 0000000140A044F2: call    KeGuardDispatchICall
 * 0000000140A044F7: mov     r8, [rsp+0CE0h+var_C90]
 * 0000000140A044FC: mov     edx, [r8+14h]
 * 0000000140A04500: cmp     r14d, edx
 * 0000000140A04503: jnz     short loc_140A04524
 * 0000000140A04505: mov     eax, ebx
 * 0000000140A04507: cmp     rax, [r8+18h]
 * 0000000140A0450B: jnz     short loc_140A04524
 * 0000000140A0450D: movzx   eax, word ptr [r8+2Ch]
 * 0000000140A04512: cmp     [rbp+0BE0h+var_900], ax
 * 0000000140A04519: jnz     short loc_140A04524
 * 0000000140A0451B: test    r12d, r12d
 * 0000000140A0451E: jz      loc_140A045BA
 * 0000000140A04524: test    r12d, r12d
 * 0000000140A04527: jnz     short loc_140A0455F
 * 0000000140A04529: mov     eax, ebx
 * 0000000140A0452B: cmp     rax, [r8+18h]
 * 0000000140A0452F: jnz     short loc_140A04542
 * 0000000140A04531: cmp     [rsi+8F8h], r15d
 * 0000000140A04538: jnz     short loc_140A0455F
 * 0000000140A0453A: mov     ecx, r14d
 * 0000000140A0453D: xor     rcx, rdx
 * 0000000140A04540: jmp     short loc_140A04554
 * 0000000140A04542: mov     eax, [r8+18h]
 * 0000000140A04546: cmp     [rsi+8F8h], r15d
 * 0000000140A0454D: jnz     short loc_140A0455F
 * 0000000140A0454F: mov     ecx, ebx
 * 0000000140A04551: xor     rcx, rax
 * 0000000140A04554: mov     rax, [rsi+590h]
 * 0000000140A0455B: mov     [rax+18h], rcx
 * 0000000140A0455F: mov     rcx, [r8+8]
 * 0000000140A04563: cmp     [rsi+8F8h], r15d
 * 0000000140A0456A: jnz     short loc_140A045BA
 * 0000000140A0456C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A04576: xor     edx, edx
 * 0000000140A04578: add     rax, rsi
 * 0000000140A0457B: mov     [rsi+900h], rax
 * 0000000140A04582: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0458C: add     rax, r8
 * 0000000140A0458F: mov     [rsi+908h], rax
 * 0000000140A04596: movsxd  rax, dword ptr [r8]
 * 0000000140A04599: mov     [rsi+910h], rax
 * 0000000140A045A0: mov     eax, 1
 * 0000000140A045A5: mov     [rsi+918h], rcx
 * 0000000140A045AC: mov     rcx, rsi
 * 0000000140A045AF: mov     [rsi+8F8h], eax
 * 0000000140A045B5: call    $$b8
 * 0000000140A045BA: add     dword ptr [rsi+828h], 10000h
 * 0000000140A045C4: jmp     loc_1409F931B
 * 0000000140A045C9: mov     edx, [r13+2Ch]
 * 0000000140A045CD: lea     rcx, [rbp+0BE0h+var_280]
 * 0000000140A045D4: mov     rax, [rsi+1A0h]
 * 0000000140A045DB: call    KeGuardDispatchICall
 * 0000000140A045E0: mov     rax, [rsi+1D0h]
 * 0000000140A045E7: lea     rdx, [rbp+0BE0h+var_270]
 * 0000000140A045EE: lea     rcx, [rbp+0BE0h+var_280]
 * 0000000140A045F5: call    KeGuardDispatchICall
 * 0000000140A045FA: xor     ecx, ecx
 * 0000000140A045FC: xgetbv
 * 0000000140A045FF: shl     rdx, 20h
 * 0000000140A04603: lea     rcx, [rbp+0BE0h+var_270]
 * 0000000140A0460A: or      rdx, rax
 * 0000000140A0460D: mov     rax, [rsi+198h]
 * 0000000140A04614: mov     rbx, rdx
 * 0000000140A04617: call    KeGuardDispatchICall
 * 0000000140A0461C: mov     r8, [r13+18h]
 * 0000000140A04620: xor     r15d, r15d
 * 0000000140A04623: mov     rdx, [r13+20h]
 * 0000000140A04627: and     r8, rbx
 * 0000000140A0462A: cmp     r8, rdx
 * 0000000140A0462D: jz      loc_1409F931B
 * 0000000140A04633: mov     eax, [r13+28h]
 * 0000000140A04637: mov     ecx, [r13+2Ch]
 * 0000000140A0463B: shl     rcx, 20h
 * 0000000140A0463F: or      rcx, rax
 * 0000000140A04642: mov     eax, [rsi+8F8h]
 * 0000000140A04648: test    eax, eax
 * 0000000140A0464A: jnz     loc_1409F931B
 * 0000000140A04650: mov     rax, [rsi+590h]
 * 0000000140A04657: xor     rdx, r8
 * 0000000140A0465A: mov     [rax+18h], rdx
 * 0000000140A0465E: mov     eax, [rsi+8F8h]
 * 0000000140A04664: jmp     loc_1409F96A5
 * 0000000140A04669: mov     r13, rdx
 * 0000000140A0466C: mov     [rsi+820h], ecx
 * 0000000140A04672: cmp     [rbp+0BE0h+var_BC8], r15d
 * 0000000140A04676: jz      short loc_140A046E2
 * 0000000140A04678: mov     rcx, gs:20h
 * 0000000140A04681: mov     rax, [rsi+648h]
 * 0000000140A04688: mov     rdx, [rax+rcx]
 * 0000000140A0468C: lea     rcx, [rbp+0BE0h+var_260]
 * 0000000140A04693: mov     rax, [rsi+688h]
 * 0000000140A0469A: add     rdx, [rsi+6A8h]
 * 0000000140A046A1: mov     rbx, [rdx+rax]
 * 0000000140A046A5: mov     rax, [rsi+198h]
 * 0000000140A046AC: call    KeGuardDispatchICall
 * 0000000140A046B1: mov     rax, [rsi+440h]
 * 0000000140A046B8: lea     rcx, [rbp+0BE0h+var_6C0]
 * 0000000140A046BF: call    KeGuardDispatchICall
 * 0000000140A046C4: mov     rax, [rsi+3A8h]
 * 0000000140A046CB: mov     rcx, rbx
 * 0000000140A046CE: call    KeGuardDispatchICall
 * 0000000140A046D3: mov     rax, [rsi+3B8h]
 * 0000000140A046DA: mov     rcx, rbx
 * 0000000140A046DD: call    KeGuardDispatchICall
 * 0000000140A046E2: cmp     [rbp+0BE0h+var_C38], r15d
 * 0000000140A046E6: jz      loc_140A0477D
 * 0000000140A046EC: test    [rsi+990h], r14d
 * 0000000140A046F3: jnz     short loc_140A046FE
 * 0000000140A046F5: cmp     [rsi+8F8h], r15d
 * 0000000140A046FC: jnz     short loc_140A0477D
 * 0000000140A046FE: mov     rbx, [rsi+980h]
 * 0000000140A04705: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A0470C: mov     [rsi+980h], r15
 * 0000000140A04713: mov     rcx, rbx
 * 0000000140A04716: mov     rax, [rsi+298h]
 * 0000000140A0471D: call    KeGuardDispatchICall
 * 0000000140A04722: mov     eax, [rsi+990h]
 * 0000000140A04728: test    r13b, al
 * 0000000140A0472B: jz      short loc_140A04769
 * 0000000140A0472D: and     eax, 0FFFFFFFEh
 * 0000000140A04730: mov     rcx, rbx
 * 0000000140A04733: mov     [rsi+990h], eax
 * 0000000140A04739: mov     rax, [rsi+280h]
 * 0000000140A04740: call    KeGuardDispatchICall
 * 0000000140A04745: mov     rbx, rax
 * 0000000140A04748: test    rax, rax
 * 0000000140A0474B: jz      short loc_140A0475E
 * 0000000140A0474D: mov     rax, [rsi+2A0h]
 * 0000000140A04754: mov     rcx, rbx
 * 0000000140A04757: call    KeGuardDispatchICall
 * 0000000140A0475C: jmp     short loc_140A04763
 * 0000000140A0475E: mov     eax, 0FFFFFFFFh
 * 0000000140A04763: mov     [rsi+970h], eax
 * 0000000140A04769: test    rbx, rbx
 * 0000000140A0476C: jz      short loc_140A0477D
 * 0000000140A0476E: mov     rax, [rsi+288h]
 * 0000000140A04775: mov     rcx, rbx
 * 0000000140A04778: call    KeGuardDispatchICall
 * 0000000140A0477D: mov     eax, [rsi+990h]
 * 0000000140A04783: mov     ecx, 800008h
 * 0000000140A04788: and     eax, ecx
 * 0000000140A0478A: cmp     eax, ecx
 * 0000000140A0478C: jnz     loc_140A04B73
 * 0000000140A04792: mov     eax, [rsi+994h]
 * 0000000140A04798: mov     r11d, [rsi+808h]
 * 0000000140A0479F: and     eax, r13d
 * 0000000140A047A2: mov     rax, [rsi+0A70h]
 * 0000000140A047A9: mov     r10d, [rsi+7E4h]
 * 0000000140A047B0: mov     r12, [rsi+9F8h]
 * 0000000140A047B7: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A047BC: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 0000000140A047C3: jz      short loc_140A047CC
 * 0000000140A047C5: mov     r12, [rsi+5D8h]
 * 0000000140A047CC: mov     rax, [rsi+160h]
 * 0000000140A047D3: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A047D7: mov     rax, [rsi+2C8h]
 * 0000000140A047DE: mov     [rbp+0BE0h+var_BD8], rax
 * 0000000140A047E2: mov     rax, [rsi+340h]
 * 0000000140A047E9: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A047ED: rdtsc
 * 0000000140A047EF: shl     rdx, 20h
 * 0000000140A047F3: mov     rbx, 7010008004002001h
 * 0000000140A047FD: or      rax, rdx
 * 0000000140A04800: mov     r9, rdi
 * 0000000140A04803: mov     rcx, rax
 * 0000000140A04806: ror     rax, 3
 * 0000000140A0480A: xor     rcx, rax
 * 0000000140A0480D: mov     rax, rbx
 * 0000000140A04810: mul     rcx
 * 0000000140A04813: mov     rcx, rdx
 * 0000000140A04816: mov     [rbp+0BE0h+var_590], rdx
 * 0000000140A0481D: xor     rcx, rax
 * 0000000140A04820: mov     rax, 0ABCC77118461CEFDh
 * 0000000140A0482A: mul     rcx
 * 0000000140A0482D: shr     rdx, 1Ah
 * 0000000140A04831: imul    rax, rdx, 5F5E100h
 * 0000000140A04838: sub     rcx, rax
 * 0000000140A0483B: sub     r9, rcx
 * 0000000140A0483E: mov     [rbp+0BE0h+var_AA8], r9
 * 0000000140A04845: mov     r8d, [rsi+990h]
 * 0000000140A0484C: bt      r8d, 1Ah
 * 0000000140A04851: jnb     loc_140A048F4
 * 0000000140A04857: rdtsc
 * 0000000140A04859: shl     rdx, 20h
 * 0000000140A0485D: mov     r14, 0CCCCCCCCCCCCCCCDh
 * 0000000140A04867: or      rax, rdx
 * 0000000140A0486A: mov     rcx, rax
 * 0000000140A0486D: ror     rax, 3
 * 0000000140A04871: xor     rcx, rax
 * 0000000140A04874: mov     rax, rbx
 * 0000000140A04877: mul     rcx
 * 0000000140A0487A: mov     rcx, rdx
 * 0000000140A0487D: mov     [rbp+0BE0h+var_588], rdx
 * 0000000140A04884: xor     rcx, rax
 * 0000000140A04887: mov     rax, r14
 * 0000000140A0488A: mul     rcx
 * 0000000140A0488D: shr     rdx, 3
 * 0000000140A04891: lea     rax, [rdx+rdx*4]
 * 0000000140A04895: add     rax, rax
 * 0000000140A04898: sub     rcx, rax
 * 0000000140A0489B: mov     eax, 2
 * 0000000140A048A0: cmp     rcx, rax
 * 0000000140A048A3: jnb     short loc_140A048F4
 * 0000000140A048A5: rdtsc
 * 0000000140A048A7: shl     rdx, 20h
 * 0000000140A048AB: or      rax, rdx
 * 0000000140A048AE: mov     rcx, rax
 * 0000000140A048B1: ror     rax, 3
 * 0000000140A048B5: xor     rcx, rax
 * 0000000140A048B8: mov     rax, rbx
 * 0000000140A048BB: mul     rcx
 * 0000000140A048BE: mov     rcx, rdx
 * 0000000140A048C1: mov     [rbp+0BE0h+var_580], rdx
 * 0000000140A048C8: xor     rcx, rax
 * 0000000140A048CB: mov     rax, r14
 * 0000000140A048CE: mul     rcx
 * 0000000140A048D1: shr     rdx, 3
 * 0000000140A048D5: lea     rax, [rdx+rdx*4]
 * 0000000140A048D9: add     rax, rax
 * 0000000140A048DC: sub     rcx, rax
 * 0000000140A048DF: add     rcx, r13
 * 0000000140A048E2: imul    rcx, r9
 * 0000000140A048E6: mov     [rbp+0BE0h+var_AA8], rcx
 * 0000000140A048ED: mov     r8d, [rsi+990h]
 * 0000000140A048F4: mov     ecx, 2
 * 0000000140A048F9: mov     r14d, r11d
 * 0000000140A048FC: test    cl, r8b
 * 0000000140A048FF: mov     rbx, r15
 * 0000000140A04902: cmovnz  r14d, r10d
 * 0000000140A04906: test    r8b, r8b
 * 0000000140A04909: js      short loc_140A04916
 * 0000000140A0490B: xor     r9d, r9d
 * 0000000140A0490E: mov     r13d, r9d
 * 0000000140A04911: jmp     loc_140A049E0
 * 0000000140A04916: rdtsc
 * 0000000140A04918: shl     rdx, 20h
 * 0000000140A0491C: or      rax, rdx
 * 0000000140A0491F: mov     rcx, rax
 * 0000000140A04922: ror     rax, 3
 * 0000000140A04926: xor     rcx, rax
 * 0000000140A04929: mov     rax, 7010008004002001h
 * 0000000140A04933: mul     rcx
 * 0000000140A04936: mov     ecx, 154h
 * 0000000140A0493B: mov     rbx, rdx
 * 0000000140A0493E: mov     [rbp+0BE0h+var_578], rdx
 * 0000000140A04945: xor     rbx, rax
 * 0000000140A04948: mov     edx, 1
 * 0000000140A0494D: mov     r15, rbx
 * 0000000140A04950: lea     rax, [rsi+0A98h]
 * 0000000140A04957: xor     r15, rsi
 * 0000000140A0495A: mov     r10, rbx
 * 0000000140A0495D: xor     [rax], r10
 * 0000000140A04960: lea     rax, [rax-8]
 * 0000000140A04964: ror     r10, cl
 * 0000000140A04967: sub     ecx, edx
 * 0000000140A04969: jnz     short loc_140A0495D
 * 0000000140A0496B: lea     r8, [r11-0AA0h]
 * 0000000140A04972: shr     r8, 3
 * 0000000140A04976: test    r8d, r8d
 * 0000000140A04979: jz      short loc_140A049B4
 * 0000000140A0497B: movsxd  r9, r8d
 * 0000000140A0497E: add     rsi, 0A98h
 * 0000000140A04985: mov     rdi, rdx
 * 0000000140A04988: lea     r9, [rsi+r9*8]
 * 0000000140A0498C: mov     rdx, [r9]
 * 0000000140A0498F: lea     rax, [r15+r15]
 * 0000000140A04993: mov     ecx, r8d
 * 0000000140A04996: lea     r9, [r9-8]
 * 0000000140A0499A: ror     rdx, cl
 * 0000000140A0499D: mov     r15, rdx
 * 0000000140A049A0: xor     r15, rax
 * 0000000140A049A3: sub     r8d, edi
 * 0000000140A049A6: jnz     short loc_140A0498C
 * 0000000140A049A8: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A049AD: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A049B4: mov     ecx, r14d
 * 0000000140A049B7: lea     rdx, [rsi+r11]
 * 0000000140A049BB: sub     ecx, r11d
 * 0000000140A049BE: shr     ecx, 3
 * 0000000140A049C1: test    ecx, ecx
 * 0000000140A049C3: jz      short loc_140A049E0
 * 0000000140A049C5: lea     rdx, [rdx+rcx*8]
 * 0000000140A049C9: mov     eax, 1
 * 0000000140A049CE: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140A049D2: xor     [rdx], r10
 * 0000000140A049D5: lea     rdx, [rdx-8]
 * 0000000140A049D9: ror     r10, cl
 * 0000000140A049DC: sub     ecx, eax
 * 0000000140A049DE: jnz     short loc_140A049D2
 * 0000000140A049E0: mov     rax, [rsp+0CE0h+var_C70]
 * 0000000140A049E5: test    rax, rax
 * 0000000140A049E8: jz      short loc_140A04A0B
 * 0000000140A049EA: mov     r9, [rbp+0BE0h+var_C40]
 * 0000000140A049EE: lea     r8, [rbp+0BE0h+var_AA8]
 * 0000000140A049F5: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 0000000140A049FA: mov     edx, r14d
 * 0000000140A049FD: mov     rax, [rbp+0BE0h+var_C30]
 * 0000000140A04A01: mov     rcx, rsi
 * 0000000140A04A04: call    KeGuardDispatchICall
 * 0000000140A04A09: jmp     short loc_140A04A44
 * 0000000140A04A0B: xor     edx, edx
 * 0000000140A04A0D: test    r12, r12
 * 0000000140A04A10: jnz     short loc_140A04A26
 * 0000000140A04A12: mov     rax, [rbp+0BE0h+var_C40]
 * 0000000140A04A16: lea     r8, [rbp+0BE0h+var_AA8]
 * 0000000140A04A1D: xor     ecx, ecx
 * 0000000140A04A1F: call    KeGuardDispatchICall
 * 0000000140A04A24: jmp     short loc_140A04A44
 * 0000000140A04A26: lea     rax, [rbp+0BE0h+var_AA8]
 * 0000000140A04A2D: xor     r9d, r9d
 * 0000000140A04A30: mov     [rsp+0CE0h+BugCheckParameter4], rax
 * 0000000140A04A35: xor     r8d, r8d
 * 0000000140A04A38: mov     rax, [rbp+0BE0h+var_BD8]
 * 0000000140A04A3C: mov     rcx, r12
 * 0000000140A04A3F: call    KeGuardDispatchICall
 * 0000000140A04A44: test    r13d, r13d
 * 0000000140A04A47: jz      loc_140A04B70
 * 0000000140A04A4D: mov     r9, rbx
 * 0000000140A04A50: lea     rax, [rsi+0A98h]
 * 0000000140A04A57: xor     r9, rsi
 * 0000000140A04A5A: mov     ecx, 154h
 * 0000000140A04A5F: mov     r10d, 1
 * 0000000140A04A65: xor     [rax], rbx
 * 0000000140A04A68: lea     rax, [rax-8]
 * 0000000140A04A6C: ror     rbx, cl
 * 0000000140A04A6F: sub     ecx, r10d
 * 0000000140A04A72: jnz     short loc_140A04A65
 * 0000000140A04A74: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A04A7B: mov     r11d, r12d
 * 0000000140A04A7E: lea     r8, [r12-0AA0h]
 * 0000000140A04A86: shr     r8, 3
 * 0000000140A04A8A: test    r8d, r8d
 * 0000000140A04A8D: jz      short loc_140A04AC4
 * 0000000140A04A8F: movsxd  r10, r8d
 * 0000000140A04A92: lea     r11d, [rcx+1]
 * 0000000140A04A96: add     r10, 153h
 * 0000000140A04A9D: lea     r10, [rsi+r10*8]
 * 0000000140A04AA1: mov     rdx, [r10]
 * 0000000140A04AA4: lea     rax, [r9+r9]
 * 0000000140A04AA8: mov     ecx, r8d
 * 0000000140A04AAB: lea     r10, [r10-8]
 * 0000000140A04AAF: ror     rdx, cl
 * 0000000140A04AB2: mov     r9, rdx
 * 0000000140A04AB5: xor     r9, rax
 * 0000000140A04AB8: sub     r8d, r11d
 * 0000000140A04ABB: jnz     short loc_140A04AA1
 * 0000000140A04ABD: mov     r11, r12
 * 0000000140A04AC0: lea     r10d, [r8+1]
 * 0000000140A04AC4: sub     r14d, r12d
 * 0000000140A04AC7: lea     rcx, [rsi+r11]
 * 0000000140A04ACB: shr     r14d, 3
 * 0000000140A04ACF: test    r14d, r14d
 * 0000000140A04AD2: jz      short loc_140A04AF0
 * 0000000140A04AD4: mov     edx, r14d
 * 0000000140A04AD7: dec     rdx
 * 0000000140A04ADA: lea     rdx, [rcx+rdx*8]
 * 0000000140A04ADE: xor     [rdx], rbx
 * 0000000140A04AE1: mov     ecx, r14d
 * 0000000140A04AE4: ror     rbx, cl
 * 0000000140A04AE7: lea     rdx, [rdx-8]
 * 0000000140A04AEB: sub     r14d, r10d
 * 0000000140A04AEE: jnz     short loc_140A04ADE
 * 0000000140A04AF0: cmp     r9, r15
 * 0000000140A04AF3: jz      short loc_140A04B70
 * 0000000140A04AF5: mov     rax, [rsi+590h]
 * 0000000140A04AFC: mov     ecx, [rsi+7E4h]
 * 0000000140A04B02: mov     [rax], rsi
 * 0000000140A04B05: mov     [rax+10h], ecx
 * 0000000140A04B08: mov     eax, [rsi+8F8h]
 * 0000000140A04B0E: test    eax, eax
 * 0000000140A04B10: jnz     short loc_140A04B29
 * 0000000140A04B12: mov     rax, [rsi+590h]
 * 0000000140A04B19: mov     rcx, r9
 * 0000000140A04B1C: xor     rcx, r15
 * 0000000140A04B1F: mov     [rax+18h], rcx
 * 0000000140A04B23: mov     eax, [rsi+8F8h]
 * 0000000140A04B29: xor     r15d, r15d
 * 0000000140A04B2C: test    eax, eax
 * 0000000140A04B2E: jnz     short loc_140A04B73
 * 0000000140A04B30: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A04B3A: xor     edx, edx
 * 0000000140A04B3C: add     rax, rsi
 * 0000000140A04B3F: mov     rcx, rsi
 * 0000000140A04B42: mov     [rsi+900h], rax
 * 0000000140A04B49: mov     [rsi+908h], r15
 * 0000000140A04B50: mov     qword ptr [rsi+910h], 10Eh
 * 0000000140A04B5B: mov     [rsi+918h], r9
 * 0000000140A04B62: mov     [rsi+8F8h], r10d
 * 0000000140A04B69: call    $$b8
 * 0000000140A04B6E: jmp     short loc_140A04B73
 * 0000000140A04B70: xor     r15d, r15d
 * 0000000140A04B73: mov     eax, [rsi+958h]
 * 0000000140A04B79: mov     r12d, 1
 * 0000000140A04B7F: cmp     eax, 0Bh
 * 0000000140A04B82: jz      loc_140A0951C
 * 0000000140A04B88: cmp     eax, r12d
 * 0000000140A04B8B: jz      loc_140A0951C
 * 0000000140A04B91: cmp     [rsi+8F8h], r15d
 * 0000000140A04B98: jnz     loc_140A09521
 * 0000000140A04B9E: mov     rax, [rsi+960h]
 * 0000000140A04BA5: mov     rcx, [rax]
 * 0000000140A04BA8: cmp     rcx, [rsi+968h]
 * 0000000140A04BAF: jz      loc_140A092D6
 * 0000000140A04BB5: mov     ecx, [rsi+970h]
 * 0000000140A04BBB: mov     r13d, 0FFFFFFFFh
 * 0000000140A04BC1: mov     rbx, rsi
 * 0000000140A04BC4: mov     [rbp+0BE0h+var_C60], rbx
 * 0000000140A04BC8: cmp     ecx, r13d
 * 0000000140A04BCB: jz      short loc_140A04BDE
 * 0000000140A04BCD: mov     rax, [rsi+278h]
 * 0000000140A04BD4: call    KeGuardDispatchICall
 * 0000000140A04BD9: mov     r14, rax
 * 0000000140A04BDC: jmp     short loc_140A04BE1
 * 0000000140A04BDE: mov     r14, r15
 * 0000000140A04BE1: test    r14, r14
 * 0000000140A04BE4: jnz     short loc_140A04C00
 * 0000000140A04BE6: mov     rax, [rsi+280h]
 * 0000000140A04BED: xor     ecx, ecx
 * 0000000140A04BEF: call    KeGuardDispatchICall
 * 0000000140A04BF4: mov     r14, rax
 * 0000000140A04BF7: test    rax, rax
 * 0000000140A04BFA: jz      loc_140A0951C
 * 0000000140A04C00: mov     rax, [rsi+290h]
 * 0000000140A04C07: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A04C0E: mov     rcx, r14
 * 0000000140A04C11: call    KeGuardDispatchICall
 * 0000000140A04C16: xor     r12d, r12d
 * 0000000140A04C19: mov     r15d, eax
 * 0000000140A04C1C: test    eax, eax
 * 0000000140A04C1E: jns     short loc_140A04C31
 * 0000000140A04C20: mov     rax, [rsi+288h]
 * 0000000140A04C27: mov     rcx, r14
 * 0000000140A04C2A: call    KeGuardDispatchICall
 * 0000000140A04C2F: jmp     short loc_140A04C93
 * 0000000140A04C31: mov     [rsi+980h], r14
 * 0000000140A04C38: mov     rax, [rsi+2B8h]
 * 0000000140A04C3F: call    KeGuardDispatchICall
 * 0000000140A04C44: mov     r14, rax
 * 0000000140A04C47: mov     rax, [rsi+2D8h]
 * 0000000140A04C4E: mov     rcx, r14
 * 0000000140A04C51: call    KeGuardDispatchICall
 * 0000000140A04C56: mov     rdx, rax
 * 0000000140A04C59: test    rax, rax
 * 0000000140A04C5C: jnz     short loc_140A04C63
 * 0000000140A04C5E: lea     ecx, [rax+4]
 * 0000000140A04C61: jmp     short loc_140A04C75
 * 0000000140A04C63: mov     rax, [rsi+2E8h]
 * 0000000140A04C6A: mov     rcx, r14
 * 0000000140A04C6D: call    KeGuardDispatchICall
 * 0000000140A04C72: mov     ecx, r12d
 * 0000000140A04C75: mov     eax, [rsi+994h]
 * 0000000140A04C7B: mov     r15d, r12d
 * 0000000140A04C7E: and     eax, 0FFFFFFFBh
 * 0000000140A04C81: or      eax, ecx
 * 0000000140A04C83: mov     [rsi+994h], eax
 * 0000000140A04C89: add     dword ptr [rsi+828h], 10000h
 * 0000000140A04C93: test    r15d, r15d
 * 0000000140A04C96: js      loc_140A09515
 * 0000000140A04C9C: mov     rax, [rsi+2A0h]
 * 0000000140A04CA3: mov     rcx, [rsi+980h]
 * 0000000140A04CAA: call    KeGuardDispatchICall
 * 0000000140A04CAF: xor     r15d, r15d
 * 0000000140A04CB2: test    eax, eax
 * 0000000140A04CB4: jnz     loc_140A092A7
 * 0000000140A04CBA: mov     rax, [rsi+578h]
 * 0000000140A04CC1: lea     ecx, [r15+20h]
 * 0000000140A04CC5: mov     rdx, [rsi+968h]
 * 0000000140A04CCC: lea     rbx, [rbp+0BE0h+var_858]
 * 0000000140A04CD3: add     rax, rcx
 * 0000000140A04CD6: mov     [rsp+0CE0h+var_C88], r15
 * 0000000140A04CDB: mov     [rbp+0BE0h+var_858], rax
 * 0000000140A04CE2: mov     rax, [rsi+570h]
 * 0000000140A04CE9: add     rax, rcx
 * 0000000140A04CEC: mov     [rbp+0BE0h+var_BD8], rdx
 * 0000000140A04CF0: mov     [rbp+0BE0h+var_850], rax
 * 0000000140A04CF7: mov     rax, [rsi+960h]
 * 0000000140A04CFE: mov     esi, r15d
 * 0000000140A04D01: mov     [rbp+0BE0h+var_C50], rax
 * 0000000140A04D05: mov     [rbp+0BE0h+var_C40], rbx
 * 0000000140A04D09: mov     [rbp+0BE0h+var_C30], 2
 * 0000000140A04D11: mov     r12, [rbx]
 * 0000000140A04D14: xor     rsi, rax
 * 0000000140A04D17: mov     r9d, esi
 * 0000000140A04D1A: mov     [rsp+0CE0h+var_C70], r12
 * 0000000140A04D1F: mov     r13d, 3Fh ; '?'
 * 0000000140A04D25: and     r9d, r13d
 * 0000000140A04D28: mov     rdi, [r12]
 * 0000000140A04D2C: mov     r15d, [r12+10h]
 * 0000000140A04D31: mov     r10, rdi
 * 0000000140A04D34: mov     r11d, r15d
 * 0000000140A04D37: mov     dword ptr [rbp+0BE0h+arg_8], r15d
 * 0000000140A04D3E: shl     r11d, 2
 * 0000000140A04D42: mov     rax, rdi
 * 0000000140A04D45: mov     ecx, r11d
 * 0000000140A04D48: add     rcx, rdi
 * 0000000140A04D4B: cmp     rdi, rcx
 * 0000000140A04D4E: jnb     short loc_140A04D5F
 * 0000000140A04D50: lea     r8d, [r13+1]
 * 0000000140A04D54: prefetchnta byte ptr [rax]
 * 0000000140A04D57: add     rax, r8
 * 0000000140A04D5A: cmp     rax, rcx
 * 0000000140A04D5D: jb      short loc_140A04D54
 * 0000000140A04D5F: mov     r14d, r11d
 * 0000000140A04D62: mov     r8, rsi
 * 0000000140A04D65: shr     r14d, 7
 * 0000000140A04D69: test    r14d, r14d
 * 0000000140A04D6C: jz      short loc_140A04DE7
 * 0000000140A04D6E: mov     ebx, 0FFFFFFFFh
 * 0000000140A04D73: mov     r12d, 1
 * 0000000140A04D79: mov     r15, 7010008004002001h
 * 0000000140A04D83: mov     eax, 8
 * 0000000140A04D88: xor     r8, [r10]
 * 0000000140A04D8B: mov     ecx, r9d
 * 0000000140A04D8E: rol     r8, cl
 * 0000000140A04D91: xor     r8, [r10+8]
 * 0000000140A04D95: add     r10, 10h
 * 0000000140A04D99: rol     r8, cl
 * 0000000140A04D9C: sub     rax, r12
 * 0000000140A04D9F: jnz     short loc_140A04D88
 * 0000000140A04DA1: mov     rcx, r10
 * 0000000140A04DA4: sub     rcx, rdi
 * 0000000140A04DA7: xor     rcx, rsi
 * 0000000140A04DAA: mov     rax, rcx
 * 0000000140A04DAD: rol     rax, 11h
 * 0000000140A04DB1: xor     rcx, rax
 * 0000000140A04DB4: mov     rax, r15
 * 0000000140A04DB7: mul     rcx
 * 0000000140A04DBA: xor     r9d, edx
 * 0000000140A04DBD: mov     [rbp+0BE0h+var_570], rdx
 * 0000000140A04DC4: xor     r9d, eax
 * 0000000140A04DC7: and     r9d, r13d
 * 0000000140A04DCA: cmovz   r9d, r12d
 * 0000000140A04DCE: add     r14d, ebx
 * 0000000140A04DD1: jnz     short loc_140A04D83
 * 0000000140A04DD3: mov     r15d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A04DDA: mov     r12, [rsp+0CE0h+var_C70]
 * 0000000140A04DDF: mov     rbx, [rbp+0BE0h+var_C40]
 * 0000000140A04DE3: mov     rdx, [rbp+0BE0h+var_BD8]
 * 0000000140A04DE7: and     r11d, 7Fh
 * 0000000140A04DEB: mov     r14d, 1
 * 0000000140A04DF1: cmp     r11d, 8
 * 0000000140A04DF5: jb      short loc_140A04E14
 * 0000000140A04DF7: mov     eax, r11d
 * 0000000140A04DFA: shr     rax, 3
 * 0000000140A04DFE: xor     r8, [r10]
 * 0000000140A04E01: mov     ecx, r9d
 * 0000000140A04E04: rol     r8, cl
 * 0000000140A04E07: add     r10, 8
 * 0000000140A04E0B: add     r11d, 0FFFFFFF8h
 * 0000000140A04E0F: sub     rax, r14
 * 0000000140A04E12: jnz     short loc_140A04DFE
 * 0000000140A04E14: test    r11d, r11d
 * 0000000140A04E17: jz      short loc_140A04E33
 * 0000000140A04E19: mov     esi, 0FFFFFFFFh
 * 0000000140A04E1E: movzx   eax, byte ptr [r10]
 * 0000000140A04E22: mov     ecx, r9d
 * 0000000140A04E25: xor     r8, rax
 * 0000000140A04E28: add     r10, r14
 * 0000000140A04E2B: rol     r8, cl
 * 0000000140A04E2E: add     r11d, esi
 * 0000000140A04E31: jnz     short loc_140A04E1E
 * 0000000140A04E33: mov     r12, [r12+18h]
 * 0000000140A04E38: xor     r8, rdx
 * 0000000140A04E3B: mov     r11d, r8d
 * 0000000140A04E3E: mov     r10, r12
 * 0000000140A04E41: and     r11d, r13d
 * 0000000140A04E44: mov     rax, r12
 * 0000000140A04E47: mov     r13d, r15d
 * 0000000140A04E4A: lea     rcx, [r12+r13]
 * 0000000140A04E4E: cmp     r12, rcx
 * 0000000140A04E51: jnb     short loc_140A04E63
 * 0000000140A04E53: mov     edx, 40h ; '@'
 * 0000000140A04E58: prefetchnta byte ptr [rax]
 * 0000000140A04E5B: add     rax, rdx
 * 0000000140A04E5E: cmp     rax, rcx
 * 0000000140A04E61: jb      short loc_140A04E58
 * 0000000140A04E63: mov     r14d, r15d
 * 0000000140A04E66: mov     r9, r8
 * 0000000140A04E69: shr     r14d, 7
 * 0000000140A04E6D: test    r14d, r14d
 * 0000000140A04E70: jz      short loc_140A04EE1
 * 0000000140A04E72: mov     rbx, 7010008004002001h
 * 0000000140A04E7C: mov     edx, 8
 * 0000000140A04E81: lea     esi, [rdx-7]
 * 0000000140A04E84: mov     rax, [r10]
 * 0000000140A04E87: mov     ecx, r11d
 * 0000000140A04E8A: xor     rax, r9
 * 0000000140A04E8D: mov     r9, [r10+8]
 * 0000000140A04E91: rol     rax, cl
 * 0000000140A04E94: add     r10, 10h
 * 0000000140A04E98: xor     r9, rax
 * 0000000140A04E9B: rol     r9, cl
 * 0000000140A04E9E: sub     rdx, rsi
 * 0000000140A04EA1: jnz     short loc_140A04E84
 * 0000000140A04EA3: mov     rcx, r10
 * 0000000140A04EA6: sub     rcx, r12
 * 0000000140A04EA9: xor     rcx, r8
 * 0000000140A04EAC: mov     rax, rcx
 * 0000000140A04EAF: rol     rax, 11h
 * 0000000140A04EB3: xor     rcx, rax
 * 0000000140A04EB6: mov     rax, rbx
 * 0000000140A04EB9: mul     rcx
 * 0000000140A04EBC: mov     [rbp+0BE0h+var_568], rdx
 * 0000000140A04EC3: xor     edx, eax
 * 0000000140A04EC5: xor     r11d, edx
 * 0000000140A04EC8: mov     rax, rsi
 * 0000000140A04ECB: and     r11d, 3Fh
 * 0000000140A04ECF: cmovz   r11d, eax
 * 0000000140A04ED3: mov     eax, 0FFFFFFFFh
 * 0000000140A04ED8: add     r14d, eax
 * 0000000140A04EDB: jnz     short loc_140A04E7C
 * 0000000140A04EDD: mov     rbx, [rbp+0BE0h+var_C40]
 * 0000000140A04EE1: and     r15d, 7Fh
 * 0000000140A04EE5: mov     r12d, 1
 * 0000000140A04EEB: cmp     r15d, 8
 * 0000000140A04EEF: jb      short loc_140A04F0E
 * 0000000140A04EF1: mov     edx, r15d
 * 0000000140A04EF4: shr     rdx, 3
 * 0000000140A04EF8: xor     r9, [r10]
 * 0000000140A04EFB: mov     ecx, r11d
 * 0000000140A04EFE: rol     r9, cl
 * 0000000140A04F01: add     r10, 8
 * 0000000140A04F05: add     r15d, 0FFFFFFF8h
 * 0000000140A04F09: sub     rdx, r12
 * 0000000140A04F0C: jnz     short loc_140A04EF8
 * 0000000140A04F0E: mov     r14d, 0FFFFFFFFh
 * 0000000140A04F14: test    r15d, r15d
 * 0000000140A04F17: jz      short loc_140A04F2E
 * 0000000140A04F19: movzx   eax, byte ptr [r10]
 * 0000000140A04F1D: mov     ecx, r11d
 * 0000000140A04F20: xor     r9, rax
 * 0000000140A04F23: add     r10, r12
 * 0000000140A04F26: rol     r9, cl
 * 0000000140A04F29: add     r15d, r14d
 * 0000000140A04F2C: jnz     short loc_140A04F19
 * 0000000140A04F2E: mov     rax, [rbp+0BE0h+var_C50]
 * 0000000140A04F32: add     rbx, 8
 * 0000000140A04F36: mov     rdx, [rbp+0BE0h+var_BD8]
 * 0000000140A04F3A: mov     rsi, rdi
 * 0000000140A04F3D: xor     rsi, r13
 * 0000000140A04F40: mov     [rbp+0BE0h+var_C40], rbx
 * 0000000140A04F44: xor     rsi, r9
 * 0000000140A04F47: sub     [rbp+0BE0h+var_C30], r12
 * 0000000140A04F4B: jnz     loc_140A04D11
 * 0000000140A04F51: mov     [rsp+0CE0h+var_C88], rsi
 * 0000000140A04F56: lea     rdx, [rbp+0BE0h+var_980]
 * 0000000140A04F5D: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A04F62: mov     rcx, rdi
 * 0000000140A04F65: mov     rax, [rsi+208h]
 * 0000000140A04F6C: call    KeGuardDispatchICall
 * 0000000140A04F71: mov     rbx, [rbp+0BE0h+var_C60]
 * 0000000140A04F75: xor     r15d, r15d
 * 0000000140A04F78: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A04F7F: cmp     [rbp+0BE0h+var_980], r15
 * 0000000140A04F86: jz      loc_140A0573F
 * 0000000140A04F8C: rdtsc
 * 0000000140A04F8E: shl     rdx, 20h
 * 0000000140A04F92: mov     r8, 7010008004002001h
 * 0000000140A04F9C: or      rax, rdx
 * 0000000140A04F9F: mov     rcx, rax
 * 0000000140A04FA2: ror     rax, 3
 * 0000000140A04FA6: xor     rcx, rax
 * 0000000140A04FA9: mov     rax, r8
 * 0000000140A04FAC: mul     rcx
 * 0000000140A04FAF: mov     rcx, rdx
 * 0000000140A04FB2: mov     [rbp+0BE0h+var_560], rdx
 * 0000000140A04FB9: xor     rcx, rax
 * 0000000140A04FBC: mov     rax, 2E8BA2E8BA2E8BA3h
 * 0000000140A04FC6: mul     rcx
 * 0000000140A04FC9: shr     rdx, 1
 * 0000000140A04FCC: imul    rax, rdx, 0Bh
 * 0000000140A04FD0: sub     rcx, rax
 * 0000000140A04FD3: lea     eax, [r15+5]
 * 0000000140A04FD7: cmp     ecx, eax
 * 0000000140A04FD9: ja      loc_140A05097
 * 0000000140A04FDF: jz      loc_140A0507D
 * 0000000140A04FE5: test    ecx, ecx
 * 0000000140A04FE7: jz      short loc_140A05063
 * 0000000140A04FE9: sub     ecx, 1
 * 0000000140A04FEC: jz      short loc_140A0504A
 * 0000000140A04FEE: sub     ecx, 1
 * 0000000140A04FF1: jz      short loc_140A05030
 * 0000000140A04FF3: cmp     ecx, 1
 * 0000000140A04FF6: jz      short loc_140A05012
 * 0000000140A04FF8: mov     [rbp+0BE0h+var_9DC], 67076494h
 * 0000000140A05002: mov     r9d, [rbp+0BE0h+var_9DC]
 * 0000000140A05009: rol     r9d, 4
 * 0000000140A0500D: jmp     loc_140A051BB
 * 0000000140A05012: mov     [rbp+0BE0h+var_9D8], 0A8223938h
 * 0000000140A0501C: mov     r9d, [rbp+0BE0h+var_9D8]
 * 0000000140A05023: xor     r9d, 3
 * 0000000140A05027: ror     r9d, 0Fh
 * 0000000140A0502B: jmp     loc_140A051BB
 * 0000000140A05030: mov     [rbp+0BE0h+var_9D4], 85B5910Dh
 * 0000000140A0503A: mov     r9d, [rbp+0BE0h+var_9D4]
 * 0000000140A05041: ror     r9d, 2
 * 0000000140A05045: jmp     loc_140A051BB
 * 0000000140A0504A: mov     [rbp+0BE0h+var_9D0], 0B2AD31A1h
 * 0000000140A05054: mov     r9d, [rbp+0BE0h+var_9D0]
 * 0000000140A0505B: rol     r9d, 1
 * 0000000140A0505E: jmp     loc_140A051BB
 * 0000000140A05063: mov     [rbp+0BE0h+var_9CC], 0D098D0D8h
 * 0000000140A0506D: mov     r9d, [rbp+0BE0h+var_9CC]
 * 0000000140A05074: ror     r9d, 6
 * 0000000140A05078: jmp     loc_140A051BB
 * 0000000140A0507D: mov     [rbp+0BE0h+var_A90], 288C49EDh
 * 0000000140A05087: mov     r9d, [rbp+0BE0h+var_A90]
 * 0000000140A0508E: ror     r9d, 5
 * 0000000140A05092: jmp     loc_140A051BB
 * 0000000140A05097: sub     ecx, 6
 * 0000000140A0509A: jz      loc_140A051A2
 * 0000000140A050A0: sub     ecx, 1
 * 0000000140A050A3: jz      loc_140A0518B
 * 0000000140A050A9: sub     ecx, 1
 * 0000000140A050AC: jz      loc_140A05174
 * 0000000140A050B2: cmp     ecx, 1
 * 0000000140A050B5: jz      loc_140A05159
 * 0000000140A050BB: rdtsc
 * 0000000140A050BD: shl     rdx, 20h
 * 0000000140A050C1: mov     r10d, 4EC4EC4Fh
 * 0000000140A050C7: or      rax, rdx
 * 0000000140A050CA: mov     rcx, rax
 * 0000000140A050CD: ror     rax, 3
 * 0000000140A050D1: xor     rcx, rax
 * 0000000140A050D4: mov     rax, r8
 * 0000000140A050D7: mul     rcx
 * 0000000140A050DA: mov     r9, rdx
 * 0000000140A050DD: mov     [rbp+0BE0h+var_558], rdx
 * 0000000140A050E4: xor     r9d, eax
 * 0000000140A050E7: mov     eax, r10d
 * 0000000140A050EA: mul     r9d
 * 0000000140A050ED: mov     ecx, r9d
 * 0000000140A050F0: shr     r9d, 5
 * 0000000140A050F4: shr     edx, 3
 * 0000000140A050F7: mov     r8d, r9d
 * 0000000140A050FA: imul    eax, edx, 1Ah
 * 0000000140A050FD: sub     ecx, eax
 * 0000000140A050FF: mov     eax, r10d
 * 0000000140A05102: mul     r9d
 * 0000000140A05105: add     ecx, 61h ; 'a'
 * 0000000140A05108: shr     r9d, 5
 * 0000000140A0510C: shl     ecx, 8
 * 0000000140A0510F: shr     edx, 3
 * 0000000140A05112: imul    eax, edx, 1Ah
 * 0000000140A05115: sub     r8d, eax
 * 0000000140A05118: mov     eax, r10d
 * 0000000140A0511B: mul     r9d
 * 0000000140A0511E: add     r8d, 41h ; 'A'
 * 0000000140A05122: or      r8d, ecx
 * 0000000140A05125: shr     edx, 3
 * 0000000140A05128: imul    eax, edx, 1Ah
 * 0000000140A0512B: mov     ecx, r9d
 * 0000000140A0512E: shr     r9d, 5
 * 0000000140A05132: shl     r8d, 8
 * 0000000140A05136: sub     ecx, eax
 * 0000000140A05138: mov     eax, r10d
 * 0000000140A0513B: mul     r9d
 * 0000000140A0513E: add     ecx, 61h ; 'a'
 * 0000000140A05141: shr     edx, 3
 * 0000000140A05144: or      ecx, r8d
 * 0000000140A05147: imul    eax, edx, 1Ah
 * 0000000140A0514A: shl     ecx, 8
 * 0000000140A0514D: sub     r9d, eax
 * 0000000140A05150: add     r9d, 41h ; 'A'
 * 0000000140A05154: or      r9d, ecx
 * 0000000140A05157: jmp     short loc_140A051BB
 * 0000000140A05159: mov     [rbp+0BE0h+var_A8C], 0B0869E85h
 * 0000000140A05163: mov     r9d, [rbp+0BE0h+var_A8C]
 * 0000000140A0516A: xor     r9d, 9
 * 0000000140A0516E: ror     r9d, 21h
 * 0000000140A05172: jmp     short loc_140A051BB
 * 0000000140A05174: mov     [rbp+0BE0h+var_A88], 64664142h
 * 0000000140A0517E: mov     r9d, [rbp+0BE0h+var_A88]
 * 0000000140A05185: ror     r9d, 8
 * 0000000140A05189: jmp     short loc_140A051BB
 * 0000000140A0518B: mov     [rbp+0BE0h+var_A84], 82C6A6D8h
 * 0000000140A05195: mov     r9d, [rbp+0BE0h+var_A84]
 * 0000000140A0519C: rol     r9d, 7
 * 0000000140A051A0: jmp     short loc_140A051BB
 * 0000000140A051A2: mov     [rbp+0BE0h+var_A80], 4E574672h
 * 0000000140A051AC: mov     r9d, [rbp+0BE0h+var_A80]
 * 0000000140A051B3: xor     r9d, 6
 * 0000000140A051B7: ror     r9d, 18h
 * 0000000140A051BB: mov     rax, [rsi+0F8h]
 * 0000000140A051C2: mov     r13d, 80h
 * 0000000140A051C8: mov     edx, r13d
 * 0000000140A051CB: mov     r8d, r9d
 * 0000000140A051CE: mov     ecx, 200h
 * 0000000140A051D3: call    KeGuardDispatchICall
 * 0000000140A051D8: mov     [rbp+0BE0h+var_BD8], rax
 * 0000000140A051DC: mov     r9, rax
 * 0000000140A051DF: test    rax, rax
 * 0000000140A051E2: jz      loc_140A05AB7
 * 0000000140A051E8: mov     ecx, r13d
 * 0000000140A051EB: lea     edx, [r13-70h]
 * 0000000140A051EF: mov     [rax], r15
 * 0000000140A051F2: add     ecx, 0FFFFFFF8h
 * 0000000140A051F5: add     rax, 8
 * 0000000140A051F9: sub     rdx, r12
 * 0000000140A051FC: jnz     short loc_140A051EF
 * 0000000140A051FE: test    ecx, ecx
 * 0000000140A05200: jz      short loc_140A0520D
 * 0000000140A05202: mov     [rax], r15b
 * 0000000140A05205: add     rax, r12
 * 0000000140A05208: add     ecx, r14d
 * 0000000140A0520B: jnz     short loc_140A05202
 * 0000000140A0520D: mov     rax, [rbp+0BE0h+var_980]
 * 0000000140A05214: mov     rcx, r15
 * 0000000140A05217: mov     [rbp+0BE0h+var_AF8], rax
 * 0000000140A0521E: mov     [r9], rax
 * 0000000140A05221: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A05226: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A0522A: mov     dword ptr [rbp+0BE0h+arg_8], r15d
 * 0000000140A05231: mov     [rbp+0BE0h+var_C08], rcx
 * 0000000140A05235: mov     rcx, [r9+rcx*8]
 * 0000000140A05239: mov     [rbp+0BE0h+var_AF8], rcx
 * 0000000140A05240: test    rcx, rcx
 * 0000000140A05243: jz      loc_140A05737
 * 0000000140A05249: mov     r13d, eax
 * 0000000140A0524C: mov     rax, [rsi+1F8h]
 * 0000000140A05253: and     r13d, 3Fh
 * 0000000140A05257: call    KeGuardDispatchICall
 * 0000000140A0525C: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A05260: test    rax, rax
 * 0000000140A05263: jz      loc_140A056B0
 * 0000000140A05269: movzx   r14d, word ptr [rax+14h]
 * 0000000140A0526E: mov     rbx, [rbp+0BE0h+var_C30]
 * 0000000140A05272: add     r14, 18h
 * 0000000140A05276: add     r14, rax
 * 0000000140A05279: movzx   eax, word ptr [rax+6]
 * 0000000140A0527D: lea     rcx, [rax+rax*4]
 * 0000000140A05281: lea     rax, [r14+rcx*8]
 * 0000000140A05285: mov     [rbp+0BE0h+var_C50], rax
 * 0000000140A05289: mov     rdi, rax
 * 0000000140A0528C: mov     eax, [r14+24h]
 * 0000000140A05290: mov     r11d, r15d
 * 0000000140A05293: bt      eax, 19h
 * 0000000140A05297: jb      loc_140A05418
 * 0000000140A0529D: mov     ecx, [r14]
 * 0000000140A052A0: cmp     ecx, 54494E49h
 * 0000000140A052A6: jnz     short loc_140A052B6
 * 0000000140A052A8: cmp     dword ptr [r14+4], 4742444Bh
 * 0000000140A052B0: jz      loc_140A05418
 * 0000000140A052B6: cmp     ecx, 45474150h
 * 0000000140A052BC: jnz     short loc_140A052ED
 * 0000000140A052BE: movzx   eax, word ptr [r14+4]
 * 0000000140A052C3: mov     edx, 7877h
 * 0000000140A052C8: cmp     ax, dx
 * 0000000140A052CB: jz      loc_140A05418
 * 0000000140A052D1: mov     edx, 7277h
 * 0000000140A052D6: cmp     ax, dx
 * 0000000140A052D9: jz      loc_140A05418
 * 0000000140A052DF: mov     edx, 7777h
 * 0000000140A052E4: cmp     ax, dx
 * 0000000140A052E7: jz      loc_140A05418
 * 0000000140A052ED: cmp     ecx, 41525245h
 * 0000000140A052F3: jnz     short loc_140A05305
 * 0000000140A052F5: mov     eax, 4154h
 * 0000000140A052FA: cmp     [r14+4], ax
 * 0000000140A052FF: jz      loc_140A05418
 * 0000000140A05305: mov     rax, [rsi+938h]
 * 0000000140A0530C: mov     r9, r14
 * 0000000140A0530F: mov     r8, [rsi+930h]
 * 0000000140A05316: mov     r10d, 7
 * 0000000140A0531C: mov     [rbp+0BE0h+var_808], rax
 * 0000000140A05323: sub     r9, r8
 * 0000000140A05326: mov     rax, [rsi+940h]
 * 0000000140A0532D: mov     [rbp+0BE0h+var_800], rax
 * 0000000140A05334: mov     rax, [rsi+948h]
 * 0000000140A0533B: mov     [rbp+0BE0h+var_7F8], rax
 * 0000000140A05342: mov     [rbp+0BE0h+var_810], r8
 * 0000000140A05349: movzx   edx, byte ptr [r9+r8]
 * 0000000140A0534E: movzx   eax, byte ptr [r8]
 * 0000000140A05352: add     r8, r12
 * 0000000140A05355: cmp     rdx, rax
 * 0000000140A05358: jnz     short loc_140A05369
 * 0000000140A0535A: mov     eax, 0FFFFFFFFh
 * 0000000140A0535F: add     r10d, eax
 * 0000000140A05362: jnz     short loc_140A05349
 * 0000000140A05364: jmp     loc_140A05418
 * 0000000140A05369: mov     r9, [rbp+0BE0h+var_808]
 * 0000000140A05370: mov     r8d, 8
 * 0000000140A05376: mov     r10, r14
 * 0000000140A05379: mov     rcx, [r10]
 * 0000000140A0537C: add     r10, 8
 * 0000000140A05380: mov     rax, [r9]
 * 0000000140A05383: add     r9, 8
 * 0000000140A05387: cmp     rcx, rax
 * 0000000140A0538A: jnz     short loc_140A053BA
 * 0000000140A0538C: add     r8d, 0FFFFFFF8h
 * 0000000140A05390: cmp     r8d, 8
 * 0000000140A05394: jnb     short loc_140A05379
 * 0000000140A05396: test    r8d, r8d
 * 0000000140A05399: jz      short loc_140A05418
 * 0000000140A0539B: movzx   edx, byte ptr [r10]
 * 0000000140A0539F: add     r10, r12
 * 0000000140A053A2: movzx   eax, byte ptr [r9]
 * 0000000140A053A6: add     r9, r12
 * 0000000140A053A9: cmp     rdx, rax
 * 0000000140A053AC: jnz     short loc_140A053BA
 * 0000000140A053AE: mov     eax, 0FFFFFFFFh
 * 0000000140A053B3: add     r8d, eax
 * 0000000140A053B6: jnz     short loc_140A0539B
 * 0000000140A053B8: jmp     short loc_140A05418
 * 0000000140A053BA: mov     r8, [rbp+0BE0h+var_800]
 * 0000000140A053C1: mov     r9, r14
 * 0000000140A053C4: sub     r9, r8
 * 0000000140A053C7: mov     r10d, 4
 * 0000000140A053CD: movzx   edx, byte ptr [r9+r8]
 * 0000000140A053D2: movzx   eax, byte ptr [r8]
 * 0000000140A053D6: add     r8, r12
 * 0000000140A053D9: cmp     rdx, rax
 * 0000000140A053DC: jnz     short loc_140A053EA
 * 0000000140A053DE: mov     eax, 0FFFFFFFFh
 * 0000000140A053E3: add     r10d, eax
 * 0000000140A053E6: jnz     short loc_140A053CD
 * 0000000140A053E8: jmp     short loc_140A05418
 * 0000000140A053EA: mov     r8, [rbp+0BE0h+var_7F8]
 * 0000000140A053F1: mov     r9, r14
 * 0000000140A053F4: sub     r9, r8
 * 0000000140A053F7: mov     r10d, 6
 * 0000000140A053FD: movzx   edx, byte ptr [r9+r8]
 * 0000000140A05402: movzx   eax, byte ptr [r8]
 * 0000000140A05406: add     r8, r12
 * 0000000140A05409: cmp     rdx, rax
 * 0000000140A0540C: jnz     short loc_140A0541B
 * 0000000140A0540E: mov     eax, 0FFFFFFFFh
 * 0000000140A05413: add     r10d, eax
 * 0000000140A05416: jnz     short loc_140A053FD
 * 0000000140A05418: mov     r11d, r12d
 * 0000000140A0541B: cmp     [r14+24h], r15d
 * 0000000140A0541F: mov     eax, [r14+8]
 * 0000000140A05423: mov     r9d, [r14+10h]
 * 0000000140A05427: cmovl   r11d, r12d
 * 0000000140A0542B: cmp     r9d, eax
 * 0000000140A0542E: cmovbe  r9d, eax
 * 0000000140A05432: mov     eax, [r14+0Ch]
 * 0000000140A05436: test    r11d, r11d
 * 0000000140A05439: jnz     loc_140A0553E
 * 0000000140A0543F: mov     r15d, eax
 * 0000000140A05442: mov     ecx, r9d
 * 0000000140A05445: add     r15, [rbp+0BE0h+var_AF8]
 * 0000000140A0544C: mov     r11d, r13d
 * 0000000140A0544F: add     rcx, r15
 * 0000000140A05452: mov     r10, r15
 * 0000000140A05455: mov     rax, r15
 * 0000000140A05458: cmp     r15, rcx
 * 0000000140A0545B: jnb     short loc_140A0546D
 * 0000000140A0545D: mov     edx, 40h ; '@'
 * 0000000140A05462: prefetchnta byte ptr [rax]
 * 0000000140A05465: add     rax, rdx
 * 0000000140A05468: cmp     rax, rcx
 * 0000000140A0546B: jb      short loc_140A05462
 * 0000000140A0546D: mov     r12d, r9d
 * 0000000140A05470: mov     r8, rbx
 * 0000000140A05473: shr     r12d, 7
 * 0000000140A05477: test    r12d, r12d
 * 0000000140A0547A: jz      short loc_140A054EC
 * 0000000140A0547C: mov     edi, 1
 * 0000000140A05481: mov     rsi, 7010008004002001h
 * 0000000140A0548B: mov     eax, 8
 * 0000000140A05490: xor     r8, [r10]
 * 0000000140A05493: mov     ecx, r11d
 * 0000000140A05496: rol     r8, cl
 * 0000000140A05499: xor     r8, [r10+8]
 * 0000000140A0549D: add     r10, 10h
 * 0000000140A054A1: rol     r8, cl
 * 0000000140A054A4: sub     rax, rdi
 * 0000000140A054A7: jnz     short loc_140A05490
 * 0000000140A054A9: mov     rcx, r10
 * 0000000140A054AC: sub     rcx, r15
 * 0000000140A054AF: xor     rcx, rbx
 * 0000000140A054B2: mov     rax, rcx
 * 0000000140A054B5: rol     rax, 11h
 * 0000000140A054B9: xor     rcx, rax
 * 0000000140A054BC: mov     rax, rsi
 * 0000000140A054BF: mul     rcx
 * 0000000140A054C2: xor     r11d, edx
 * 0000000140A054C5: mov     [rbp+0BE0h+var_550], rdx
 * 0000000140A054CC: xor     r11d, eax
 * 0000000140A054CF: mov     edx, 0FFFFFFFFh
 * 0000000140A054D4: and     r11d, 3Fh
 * 0000000140A054D8: cmovz   r11d, edi
 * 0000000140A054DC: add     r12d, edx
 * 0000000140A054DF: jnz     short loc_140A0548B
 * 0000000140A054E1: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A054E6: mov     rdi, [rbp+0BE0h+var_C50]
 * 0000000140A054EA: jmp     short loc_140A054F1
 * 0000000140A054EC: mov     edx, 0FFFFFFFFh
 * 0000000140A054F1: and     r9d, 7Fh
 * 0000000140A054F5: mov     r12d, 1
 * 0000000140A054FB: cmp     r9d, 8
 * 0000000140A054FF: jb      short loc_140A0551E
 * 0000000140A05501: mov     eax, r9d
 * 0000000140A05504: shr     rax, 3
 * 0000000140A05508: xor     r8, [r10]
 * 0000000140A0550B: mov     ecx, r11d
 * 0000000140A0550E: rol     r8, cl
 * 0000000140A05511: add     r10, 8
 * 0000000140A05515: add     r9d, 0FFFFFFF8h
 * 0000000140A05519: sub     rax, r12
 * 0000000140A0551C: jnz     short loc_140A05508
 * 0000000140A0551E: xor     r15d, r15d
 * 0000000140A05521: test    r9d, r9d
 * 0000000140A05524: jz      short loc_140A0553B
 * 0000000140A05526: movzx   eax, byte ptr [r10]
 * 0000000140A0552A: mov     ecx, r11d
 * 0000000140A0552D: xor     r8, rax
 * 0000000140A05530: add     r10, r12
 * 0000000140A05533: rol     r8, cl
 * 0000000140A05536: add     r9d, edx
 * 0000000140A05539: jnz     short loc_140A05526
 * 0000000140A0553B: mov     rbx, r8
 * 0000000140A0553E: add     r14, 28h ; '('
 * 0000000140A05542: cmp     r14, rdi
 * 0000000140A05545: jnz     loc_140A0528C
 * 0000000140A0554B: mov     r8d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A05552: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A05559: mov     [rbp+0BE0h+var_C30], rbx
 * 0000000140A0555D: test    r8d, r8d
 * 0000000140A05560: jnz     loc_140A0567F
 * 0000000140A05566: mov     rdx, [rbp+0BE0h+var_C40]
 * 0000000140A0556A: mov     r13, [rbp+0BE0h+var_AF8]
 * 0000000140A05571: mov     ecx, [rdx+94h]
 * 0000000140A05577: cmp     ecx, 14h
 * 0000000140A0557A: jb      loc_140A0567F
 * 0000000140A05580: mov     eax, [rdx+90h]
 * 0000000140A05586: lea     r12, [rax+rcx]
 * 0000000140A0558A: add     r12, r13
 * 0000000140A0558D: lea     r15, [rax+r13]
 * 0000000140A05591: cmp     r15, r12
 * 0000000140A05594: jz      loc_140A05676
 * 0000000140A0559A: xor     r10d, r10d
 * 0000000140A0559D: cmp     [r15+0Ch], r10d
 * 0000000140A055A1: jz      loc_140A0566F
 * 0000000140A055A7: mov     eax, [r15+10h]
 * 0000000140A055AB: test    eax, eax
 * 0000000140A055AD: jz      loc_140A0566F
 * 0000000140A055B3: mov     r14, [rax+r13]
 * 0000000140A055B7: test    r14, r14
 * 0000000140A055BA: jz      loc_140A0564C
 * 0000000140A055C0: cmp     r14, r13
 * 0000000140A055C3: jb      short loc_140A055D0
 * 0000000140A055C5: mov     eax, [rdx+50h]
 * 0000000140A055C8: add     rax, r13
 * 0000000140A055CB: cmp     r14, rax
 * 0000000140A055CE: jb      short loc_140A0564C
 * 0000000140A055D0: mov     rax, [rsi+2A8h]
 * 0000000140A055D7: mov     rcx, r14
 * 0000000140A055DA: call    KeGuardDispatchICall
 * 0000000140A055DF: xor     r10d, r10d
 * 0000000140A055E2: test    eax, eax
 * 0000000140A055E4: jz      short loc_140A05648
 * 0000000140A055E6: mov     rax, [rsi+208h]
 * 0000000140A055ED: lea     rdx, [rbp+0BE0h+var_AF8]
 * 0000000140A055F4: mov     rcx, r14
 * 0000000140A055F7: call    KeGuardDispatchICall
 * 0000000140A055FC: mov     rdx, [rbp+0BE0h+var_AF8]
 * 0000000140A05603: xor     r10d, r10d
 * 0000000140A05606: lea     r11d, [r10+10h]
 * 0000000140A0560A: test    rdx, rdx
 * 0000000140A0560D: jz      short loc_140A05642
 * 0000000140A0560F: mov     r9, [rbp+0BE0h+var_BD8]
 * 0000000140A05613: mov     ecx, r10d
 * 0000000140A05616: mov     rax, r9
 * 0000000140A05619: mov     r8, [rax]
 * 0000000140A0561C: cmp     r8, rdx
 * 0000000140A0561F: jz      short loc_140A05639
 * 0000000140A05621: test    r8, r8
 * 0000000140A05624: jz      short loc_140A05633
 * 0000000140A05626: inc     ecx
 * 0000000140A05628: add     rax, 8
 * 0000000140A0562C: cmp     ecx, r11d
 * 0000000140A0562F: jb      short loc_140A05619
 * 0000000140A05631: jmp     short loc_140A05639
 * 0000000140A05633: mov     eax, ecx
 * 0000000140A05635: mov     [r9+rax*8], rdx
 * 0000000140A05639: cmp     ecx, r11d
 * 0000000140A0563C: jz      loc_140A0572D
 * 0000000140A05642: mov     rdx, [rbp+0BE0h+var_C40]
 * 0000000140A05646: jmp     short loc_140A05652
 * 0000000140A05648: mov     rdx, [rbp+0BE0h+var_C40]
 * 0000000140A0564C: mov     r11d, 10h
 * 0000000140A05652: add     r15, 14h
 * 0000000140A05656: cmp     r15, r12
 * 0000000140A05659: jnz     loc_140A0559D
 * 0000000140A0565F: mov     r8d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A05666: xor     r15d, r15d
 * 0000000140A05669: lea     r12d, [r15+1]
 * 0000000140A0566D: jmp     short loc_140A05685
 * 0000000140A0566F: mov     r8d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A05676: mov     r12d, 1
 * 0000000140A0567C: xor     r15d, r15d
 * 0000000140A0567F: mov     r11d, 10h
 * 0000000140A05685: mov     rcx, [rbp+0BE0h+var_C08]
 * 0000000140A05689: add     r8d, r12d
 * 0000000140A0568C: mov     rax, [rbp+0BE0h+var_C30]
 * 0000000140A05690: add     rcx, r12
 * 0000000140A05693: mov     r9, [rbp+0BE0h+var_BD8]
 * 0000000140A05697: mov     dword ptr [rbp+0BE0h+arg_8], r8d
 * 0000000140A0569E: mov     [rbp+0BE0h+var_C08], rcx
 * 0000000140A056A2: cmp     r8d, r11d
 * 0000000140A056A5: jb      loc_140A05235
 * 0000000140A056AB: jmp     loc_140A05737
 * 0000000140A056B0: cmp     [rsi+8F8h], r15d
 * 0000000140A056B7: jnz     short loc_140A056FB
 * 0000000140A056B9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A056C3: xor     edx, edx
 * 0000000140A056C5: add     rax, rsi
 * 0000000140A056C8: mov     rcx, rsi
 * 0000000140A056CB: mov     [rsi+900h], rax
 * 0000000140A056D2: mov     [rsi+908h], r15
 * 0000000140A056D9: mov     qword ptr [rsi+910h], 102h
 * 0000000140A056E4: mov     qword ptr [rsi+918h], 0FFFFFFFFC000007Bh
 * 0000000140A056EF: mov     [rsi+8F8h], r12d
 * 0000000140A056F6: call    $$b8
 * 0000000140A056FB: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A05700: cmp     r14, [rsi+968h]
 * 0000000140A05707: jz      short loc_140A0570E
 * 0000000140A05709: test    r14, r14
 * 0000000140A0570C: jnz     short loc_140A0571B
 * 0000000140A0570E: mov     rax, 95EA5DE843D5D824h
 * 0000000140A05718: xor     r14, rax
 * 0000000140A0571B: mov     rax, [rsi+100h]
 * 0000000140A05722: mov     rcx, [rbp+0BE0h+var_BD8]
 * 0000000140A05726: call    KeGuardDispatchICall
 * 0000000140A0572B: jmp     short loc_140A05744
 * 0000000140A0572D: mov     rax, [rbp+0BE0h+var_C30]
 * 0000000140A05731: mov     r12d, 1
 * 0000000140A05737: mov     r14, rax
 * 0000000140A0573A: xor     r15d, r15d
 * 0000000140A0573D: jmp     short loc_140A05700
 * 0000000140A0573F: mov     r14, [rsp+0CE0h+var_C88]
 * 0000000140A05744: mov     rax, [rsi+960h]
 * 0000000140A0574B: mov     rcx, [rax]
 * 0000000140A0574E: cmp     r14, rcx
 * 0000000140A05751: jz      short loc_140A057CF
 * 0000000140A05753: mov     eax, [rsi+994h]
 * 0000000140A05759: mov     ecx, 40h ; '@'
 * 0000000140A0575E: test    cl, al
 * 0000000140A05760: jnz     short loc_140A057CF
 * 0000000140A05762: mov     rax, [rsi+960h]
 * 0000000140A05769: mov     rdx, [rax]
 * 0000000140A0576C: mov     eax, [rsi+8F8h]
 * 0000000140A05772: test    eax, eax
 * 0000000140A05774: jnz     short loc_140A057CF
 * 0000000140A05776: mov     rax, [rsi+590h]
 * 0000000140A0577D: mov     rcx, r14
 * 0000000140A05780: xor     rcx, rdx
 * 0000000140A05783: mov     [rax+18h], rcx
 * 0000000140A05787: mov     eax, [rsi+8F8h]
 * 0000000140A0578D: test    eax, eax
 * 0000000140A0578F: jnz     short loc_140A057CF
 * 0000000140A05791: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0579B: xor     edx, edx
 * 0000000140A0579D: add     rax, rsi
 * 0000000140A057A0: mov     rcx, rsi
 * 0000000140A057A3: mov     [rsi+900h], rax
 * 0000000140A057AA: mov     [rsi+908h], r15
 * 0000000140A057B1: mov     qword ptr [rsi+910h], 102h
 * 0000000140A057BC: mov     [rsi+918h], r14
 * 0000000140A057C3: mov     [rsi+8F8h], r12d
 * 0000000140A057CA: call    $$b8
 * 0000000140A057CF: mov     r10d, r15d
 * 0000000140A057D2: mov     r12d, 2
 * 0000000140A057D8: lea     r15, [rbp+0BE0h+var_850]
 * 0000000140A057DF: xor     ebx, ebx
 * 0000000140A057E1: mov     r14d, 0FFFFFFFFh
 * 0000000140A057E7: mov     rax, [r15]
 * 0000000140A057EA: mov     r9d, ebx
 * 0000000140A057ED: mov     r11, [rax]
 * 0000000140A057F0: lea     r8d, [r10+rax]
 * 0000000140A057F4: mov     r13d, [rax+10h]
 * 0000000140A057F8: add     r8d, r11d
 * 0000000140A057FB: test    r13d, r13d
 * 0000000140A057FE: jz      short loc_140A0582C
 * 0000000140A05800: mov     r14, r11
 * 0000000140A05803: movsxd  rdx, dword ptr [r14]
 * 0000000140A05806: inc     r9d
 * 0000000140A05809: mov     rax, rdx
 * 0000000140A0580C: lea     r14, [r14+4]
 * 0000000140A05810: sar     rax, 4
 * 0000000140A05814: mov     ecx, [rax+r11]
 * 0000000140A05818: add     ecx, edx
 * 0000000140A0581A: xor     r8d, ecx
 * 0000000140A0581D: imul    r8d, r9d
 * 0000000140A05821: cmp     r9d, r13d
 * 0000000140A05824: jb      short loc_140A05803
 * 0000000140A05826: mov     r14d, 0FFFFFFFFh
 * 0000000140A0582C: lea     r10d, [r10+r8*2]
 * 0000000140A05830: sub     r15, 8
 * 0000000140A05834: add     r8d, r8d
 * 0000000140A05837: add     r12d, r14d
 * 0000000140A0583A: jnz     short loc_140A057E7
 * 0000000140A0583C: mov     rax, [rsi+598h]
 * 0000000140A05843: mov     rbx, [rbp+0BE0h+var_C60]
 * 0000000140A05847: mov     r9d, [rax]
 * 0000000140A0584A: cmp     r10d, r9d
 * 0000000140A0584D: jz      short loc_140A058CA
 * 0000000140A0584F: xor     r15d, r15d
 * 0000000140A05852: test    dword ptr [rsi+990h], 20000h
 * 0000000140A0585C: jz      short loc_140A058CD
 * 0000000140A0585E: mov     eax, [rsi+8F8h]
 * 0000000140A05864: test    eax, eax
 * 0000000140A05866: jnz     short loc_140A0587F
 * 0000000140A05868: mov     rdx, [rsi+590h]
 * 0000000140A0586F: mov     ecx, r8d
 * 0000000140A05872: xor     rcx, r9
 * 0000000140A05875: mov     [rdx+18h], rcx
 * 0000000140A05879: mov     eax, [rsi+8F8h]
 * 0000000140A0587F: mov     ecx, r8d
 * 0000000140A05882: test    eax, eax
 * 0000000140A05884: jnz     short loc_140A058CD
 * 0000000140A05886: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A05890: xor     edx, edx
 * 0000000140A05892: add     rax, rsi
 * 0000000140A05895: mov     [rsi+900h], rax
 * 0000000140A0589C: mov     eax, 1
 * 0000000140A058A1: mov     [rsi+908h], r15
 * 0000000140A058A8: mov     qword ptr [rsi+910h], 107h
 * 0000000140A058B3: mov     [rsi+918h], rcx
 * 0000000140A058BA: mov     rcx, rsi
 * 0000000140A058BD: mov     [rsi+8F8h], eax
 * 0000000140A058C3: call    $$b8
 * 0000000140A058C8: jmp     short loc_140A058CD
 * 0000000140A058CA: xor     r15d, r15d
 * 0000000140A058CD: mov     eax, [rsi+958h]
 * 0000000140A058D3: cmp     eax, 7
 * 0000000140A058D6: jl      loc_140A05B48
 * 0000000140A058DC: jz      loc_140A06D3A
 * 0000000140A058E2: cmp     eax, 8
 * 0000000140A058E5: jz      loc_140A08D4D
 * 0000000140A058EB: cmp     eax, 9
 * 0000000140A058EE: jnz     loc_140A0924F
 * 0000000140A058F4: xor     r10d, r10d
 * 0000000140A058F7: mov     r15, [rbx+600h]
 * 0000000140A058FE: test    r15, r15
 * 0000000140A05901: jz      loc_140A0924C
 * 0000000140A05907: mov     r15, [r15]
 * 0000000140A0590A: test    r15, r15
 * 0000000140A0590D: jz      loc_140A0924C
 * 0000000140A05913: lock or [rsp+0CE0h+var_CE0], r10d
 * 0000000140A05918: mov     r12d, [r15+7E4h]
 * 0000000140A0591F: mov     r9, r15
 * 0000000140A05922: mov     r10d, [r15+814h]
 * 0000000140A05929: mov     rax, r15
 * 0000000140A0592C: mov     r14, [r15+818h]
 * 0000000140A05933: mov     dword ptr [rbp+0BE0h+arg_8], r12d
 * 0000000140A0593A: lea     rcx, [r15+r12]
 * 0000000140A0593E: cmp     r15, rcx
 * 0000000140A05941: jnb     short loc_140A05953
 * 0000000140A05943: mov     edx, 40h ; '@'
 * 0000000140A05948: prefetchnta byte ptr [rax]
 * 0000000140A0594B: add     rax, rdx
 * 0000000140A0594E: cmp     rax, rcx
 * 0000000140A05951: jb      short loc_140A05948
 * 0000000140A05953: mov     r11d, r12d
 * 0000000140A05956: mov     r8, r14
 * 0000000140A05959: shr     r11d, 7
 * 0000000140A0595D: mov     r13d, 1
 * 0000000140A05963: test    r11d, r11d
 * 0000000140A05966: jz      short loc_140A059D4
 * 0000000140A05968: mov     r12, 7010008004002001h
 * 0000000140A05972: mov     edx, 8
 * 0000000140A05977: mov     rax, [r9]
 * 0000000140A0597A: mov     ecx, r10d
 * 0000000140A0597D: xor     rax, r8
 * 0000000140A05980: mov     r8, [r9+8]
 * 0000000140A05984: rol     rax, cl
 * 0000000140A05987: add     r9, 10h
 * 0000000140A0598B: xor     r8, rax
 * 0000000140A0598E: rol     r8, cl
 * 0000000140A05991: sub     rdx, r13
 * 0000000140A05994: jnz     short loc_140A05977
 * 0000000140A05996: mov     rcx, r9
 * 0000000140A05999: sub     rcx, r15
 * 0000000140A0599C: xor     rcx, r14
 * 0000000140A0599F: mov     rax, rcx
 * 0000000140A059A2: rol     rax, 11h
 * 0000000140A059A6: xor     rcx, rax
 * 0000000140A059A9: mov     rax, r12
 * 0000000140A059AC: mul     rcx
 * 0000000140A059AF: mov     [rbp+0BE0h+var_4E0], rdx
 * 0000000140A059B6: xor     edx, eax
 * 0000000140A059B8: xor     r10d, edx
 * 0000000140A059BB: mov     eax, 0FFFFFFFFh
 * 0000000140A059C0: and     r10d, 3Fh
 * 0000000140A059C4: cmovz   r10d, r13d
 * 0000000140A059C8: add     r11d, eax
 * 0000000140A059CB: jnz     short loc_140A05972
 * 0000000140A059CD: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A059D4: mov     edx, r12d
 * 0000000140A059D7: and     edx, 7Fh
 * 0000000140A059DA: cmp     edx, 8
 * 0000000140A059DD: jb      short loc_140A059FB
 * 0000000140A059DF: mov     r11d, edx
 * 0000000140A059E2: shr     r11, 3
 * 0000000140A059E6: xor     r8, [r9]
 * 0000000140A059E9: mov     ecx, r10d
 * 0000000140A059EC: rol     r8, cl
 * 0000000140A059EF: add     r9, 8
 * 0000000140A059F3: add     edx, 0FFFFFFF8h
 * 0000000140A059F6: sub     r11, r13
 * 0000000140A059F9: jnz     short loc_140A059E6
 * 0000000140A059FB: xor     r11d, r11d
 * 0000000140A059FE: test    edx, edx
 * 0000000140A05A00: jz      short loc_140A05A20
 * 0000000140A05A02: mov     r11d, 0FFFFFFFFh
 * 0000000140A05A08: movzx   eax, byte ptr [r9]
 * 0000000140A05A0C: mov     ecx, r10d
 * 0000000140A05A0F: xor     r8, rax
 * 0000000140A05A12: add     r9, r13
 * 0000000140A05A15: rol     r8, cl
 * 0000000140A05A18: add     edx, r11d
 * 0000000140A05A1B: jnz     short loc_140A05A08
 * 0000000140A05A1D: xor     r11d, r11d
 * 0000000140A05A20: mov     rax, [rbx+608h]
 * 0000000140A05A27: cmp     r8, [rax]
 * 0000000140A05A2A: jz      loc_140A08F83
 * 0000000140A05A30: mov     rax, [rbx+590h]
 * 0000000140A05A37: mov     [rax], r15
 * 0000000140A05A3A: xor     r15d, r15d
 * 0000000140A05A3D: mov     [rax+10h], r12d
 * 0000000140A05A41: mov     rax, [rbx+608h]
 * 0000000140A05A48: mov     rcx, [rax]
 * 0000000140A05A4B: mov     eax, [rbx+8F8h]
 * 0000000140A05A51: test    eax, eax
 * 0000000140A05A53: jnz     loc_140A06D8D
 * 0000000140A05A59: mov     rax, [rbx+590h]
 * 0000000140A05A60: xor     rcx, r8
 * 0000000140A05A63: mov     [rax+18h], rcx
 * 0000000140A05A67: mov     eax, [rbx+8F8h]
 * 0000000140A05A6D: test    eax, eax
 * 0000000140A05A6F: jnz     loc_140A06D8D
 * 0000000140A05A75: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A05A7F: lea     r12d, [r15+1]
 * 0000000140A05A83: add     rax, rbx
 * 0000000140A05A86: mov     [rbx+900h], rax
 * 0000000140A05A8D: mov     [rbx+908h], r15
 * 0000000140A05A94: mov     qword ptr [rbx+910h], 111h
 * 0000000140A05A9F: mov     [rbx+918h], r8
 * 0000000140A05AA6: xor     edx, edx
 * 0000000140A05AA8: mov     [rbx+8F8h], r12d
 * 0000000140A05AAF: mov     rcx, rbx
 * 0000000140A05AB2: call    $$b8
 * 0000000140A05AB7: mov     r13d, 0FFFFFFFFh
 * 0000000140A05ABD: mov     ecx, 8000h
 * 0000000140A05AC2: test    [rbx+990h], ecx
 * 0000000140A05AC8: jnz     short loc_140A05AD7
 * 0000000140A05ACA: cmp     [rbx+8F8h], r15d
 * 0000000140A05AD1: jnz     loc_140A0951C
 * 0000000140A05AD7: mov     r14, [rbx+980h]
 * 0000000140A05ADE: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A05AE5: mov     [rbx+980h], r15
 * 0000000140A05AEC: mov     rcx, r14
 * 0000000140A05AEF: mov     rax, [rbx+298h]
 * 0000000140A05AF6: call    KeGuardDispatchICall
 * 0000000140A05AFB: mov     eax, [rbx+990h]
 * 0000000140A05B01: test    r12b, al
 * 0000000140A05B04: jz      loc_140A092B9
 * 0000000140A05B0A: and     eax, 0FFFFFFFEh
 * 0000000140A05B0D: mov     rcx, r14
 * 0000000140A05B10: mov     [rbx+990h], eax
 * 0000000140A05B16: mov     rax, [rbx+280h]
 * 0000000140A05B1D: call    KeGuardDispatchICall
 * 0000000140A05B22: mov     r14, rax
 * 0000000140A05B25: test    rax, rax
 * 0000000140A05B28: jz      loc_140A092B2
 * 0000000140A05B2E: mov     rax, [rbx+2A0h]
 * 0000000140A05B35: mov     rcx, r14
 * 0000000140A05B38: call    KeGuardDispatchICall
 * 0000000140A05B3D: mov     [rbx+970h], eax
 * 0000000140A05B43: jmp     loc_140A092B9
 * 0000000140A05B48: mov     rdx, [rsi+578h]
 * 0000000140A05B4F: mov     rcx, [rsi+570h]
 * 0000000140A05B56: mov     [rbp+0BE0h+arg_8], rdx
 * 0000000140A05B5D: add     rdx, 20h ; ' '
 * 0000000140A05B61: mov     [rbp+0BE0h+var_C30], rdx
 * 0000000140A05B65: mov     edx, 2
 * 0000000140A05B6A: mov     [rbp+0BE0h+var_C40], rcx
 * 0000000140A05B6E: lea     r13, [rcx+20h]
 * 0000000140A05B72: mov     [rsp+0CE0h+var_C70], r13
 * 0000000140A05B77: cmp     eax, edx
 * 0000000140A05B79: jge     loc_140A05E1E
 * 0000000140A05B7F: mov     r12, [r13+0]
 * 0000000140A05B83: mov     r13d, [rsi+7E4h]
 * 0000000140A05B8A: mov     r15d, [rcx+30h]
 * 0000000140A05B8E: mov     r8d, [rsi+924h]
 * 0000000140A05B95: shl     r15d, 2
 * 0000000140A05B99: lea     eax, [r13+30h]
 * 0000000140A05B9D: cmp     eax, [rsi+0A1Ch]
 * 0000000140A05BA3: jbe     loc_140A05C85
 * 0000000140A05BA9: mov     edx, eax
 * 0000000140A05BAB: mov     rcx, rsi
 * 0000000140A05BAE: call    sub_140A0EB30
 * 0000000140A05BB3: xor     r9d, r9d
 * 0000000140A05BB6: mov     r14, rax
 * 0000000140A05BB9: test    rax, rax
 * 0000000140A05BBC: jz      loc_140A06D98
 * 0000000140A05BC2: mov     ecx, [rsi+990h]
 * 0000000140A05BC8: test    cl, 4
 * 0000000140A05BCB: jnz     loc_140A05C7B
 * 0000000140A05BD1: mov     eax, [rsi+7E4h]
 * 0000000140A05BD7: lea     r10d, [r9+1]
 * 0000000140A05BDB: mov     r8, [rsi+7C8h]
 * 0000000140A05BE2: and     ecx, 20000000h
 * 0000000140A05BE8: neg     ecx
 * 0000000140A05BEA: sbb     edx, edx
 * 0000000140A05BEC: and     edx, [rsi+924h]
 * 0000000140A05BF2: cmp     eax, 8
 * 0000000140A05BF5: jb      short loc_140A05C0C
 * 0000000140A05BF7: mov     ecx, eax
 * 0000000140A05BF9: shr     rcx, 3
 * 0000000140A05BFD: mov     [rsi], r9
 * 0000000140A05C00: add     eax, 0FFFFFFF8h
 * 0000000140A05C03: add     rsi, 8
 * 0000000140A05C07: sub     rcx, r10
 * 0000000140A05C0A: jnz     short loc_140A05BFD
 * 0000000140A05C0C: test    eax, eax
 * 0000000140A05C0E: jz      short loc_140A05C1F
 * 0000000140A05C10: mov     ecx, 0FFFFFFFFh
 * 0000000140A05C15: mov     [rsi], r9b
 * 0000000140A05C18: add     rsi, r10
 * 0000000140A05C1B: add     eax, ecx
 * 0000000140A05C1D: jnz     short loc_140A05C15
 * 0000000140A05C1F: mov     ebx, [r14+924h]
 * 0000000140A05C26: mov     [r14+924h], edx
 * 0000000140A05C2D: cmp     edx, 3
 * 0000000140A05C30: jz      short loc_140A05C65
 * 0000000140A05C32: test    dword ptr [r14+990h], 10000000h
 * 0000000140A05C3D: mov     ecx, r9d
 * 0000000140A05C40: cmovz   ecx, edx
 * 0000000140A05C43: test    ecx, ecx
 * 0000000140A05C45: jz      short loc_140A05C5C
 * 0000000140A05C47: mov     rax, [r14+228h]
 * 0000000140A05C4E: lea     rcx, [r8-8]
 * 0000000140A05C52: mov     rdx, [rcx]
 * 0000000140A05C55: call    KeGuardDispatchICall
 * 0000000140A05C5A: jmp     short loc_140A05C74
 * 0000000140A05C5C: mov     rax, [r14+100h]
 * 0000000140A05C63: jmp     short loc_140A05C6C
 * 0000000140A05C65: mov     rax, [r14+368h]
 * 0000000140A05C6C: mov     rcx, r8
 * 0000000140A05C6F: call    KeGuardDispatchICall
 * 0000000140A05C74: mov     [r14+924h], ebx
 * 0000000140A05C7B: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140A05C83: jmp     short loc_140A05C8E
 * 0000000140A05C85: mov     r14, rsi
 * 0000000140A05C88: mov     [rsi+7E4h], eax
 * 0000000140A05C8E: lea     rbx, [r14+r13]
 * 0000000140A05C92: mov     r8d, 1
 * 0000000140A05C98: add     [r14+80Ch], r8d
 * 0000000140A05C9F: mov     rax, rbx
 * 0000000140A05CA2: mov     [rbp+0BE0h+var_548], rbx
 * 0000000140A05CA9: xor     r13d, r13d
 * 0000000140A05CAC: lea     ecx, [r8+2Fh]
 * 0000000140A05CB0: lea     edx, [rcx-2Ah]
 * 0000000140A05CB3: mov     [rax], r13
 * 0000000140A05CB6: add     ecx, 0FFFFFFF8h
 * 0000000140A05CB9: add     rax, 8
 * 0000000140A05CBD: sub     rdx, r8
 * 0000000140A05CC0: jnz     short loc_140A05CB3
 * 0000000140A05CC2: test    ecx, ecx
 * 0000000140A05CC4: jz      short loc_140A05CD5
 * 0000000140A05CC6: mov     edx, 0FFFFFFFFh
 * 0000000140A05CCB: mov     [rax], r13b
 * 0000000140A05CCE: add     rax, r8
 * 0000000140A05CD1: add     ecx, edx
 * 0000000140A05CD3: jnz     short loc_140A05CCB
 * 0000000140A05CD5: mov     dword ptr [rbx], 0Bh
 * 0000000140A05CDB: mov     r9, r12
 * 0000000140A05CDE: mov     [rbx+8], r12
 * 0000000140A05CE2: mov     rax, r12
 * 0000000140A05CE5: mov     [rbx+10h], r15d
 * 0000000140A05CE9: add     [r14+828h], r15d
 * 0000000140A05CF0: mov     r10d, [r14+814h]
 * 0000000140A05CF7: mov     rsi, [r14+818h]
 * 0000000140A05CFE: mov     ecx, r15d
 * 0000000140A05D01: add     rcx, r12
 * 0000000140A05D04: cmp     r12, rcx
 * 0000000140A05D07: jnb     short loc_140A05D19
 * 0000000140A05D09: mov     edx, 40h ; '@'
 * 0000000140A05D0E: prefetchnta byte ptr [rax]
 * 0000000140A05D11: add     rax, rdx
 * 0000000140A05D14: cmp     rax, rcx
 * 0000000140A05D17: jb      short loc_140A05D0E
 * 0000000140A05D19: mov     r11d, r15d
 * 0000000140A05D1C: mov     r8, rsi
 * 0000000140A05D1F: shr     r11d, 7
 * 0000000140A05D23: mov     r13d, 1
 * 0000000140A05D29: test    r11d, r11d
 * 0000000140A05D2C: jz      short loc_140A05D9B
 * 0000000140A05D2E: mov     rdi, 7010008004002001h
 * 0000000140A05D38: mov     edx, 8
 * 0000000140A05D3D: mov     rax, [r9]
 * 0000000140A05D40: mov     ecx, r10d
 * 0000000140A05D43: xor     rax, r8
 * 0000000140A05D46: mov     r8, [r9+8]
 * 0000000140A05D4A: rol     rax, cl
 * 0000000140A05D4D: add     r9, 10h
 * 0000000140A05D51: xor     r8, rax
 * 0000000140A05D54: rol     r8, cl
 * 0000000140A05D57: sub     rdx, r13
 * 0000000140A05D5A: jnz     short loc_140A05D3D
 * 0000000140A05D5C: mov     rcx, r9
 * 0000000140A05D5F: sub     rcx, r12
 * 0000000140A05D62: xor     rcx, rsi
 * 0000000140A05D65: mov     rax, rcx
 * 0000000140A05D68: rol     rax, 11h
 * 0000000140A05D6C: xor     rcx, rax
 * 0000000140A05D6F: mov     rax, rdi
 * 0000000140A05D72: mul     rcx
 * 0000000140A05D75: xor     r10d, edx
 * 0000000140A05D78: mov     [rbp+0BE0h+var_540], rdx
 * 0000000140A05D7F: xor     r10d, eax
 * 0000000140A05D82: mov     eax, 0FFFFFFFFh
 * 0000000140A05D87: and     r10d, 3Fh
 * 0000000140A05D8B: cmovz   r10d, r13d
 * 0000000140A05D8F: add     r11d, eax
 * 0000000140A05D92: jnz     short loc_140A05D38
 * 0000000140A05D94: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A05D9B: mov     edx, r15d
 * 0000000140A05D9E: and     edx, 7Fh
 * 0000000140A05DA1: cmp     edx, 8
 * 0000000140A05DA4: jb      short loc_140A05DC2
 * 0000000140A05DA6: mov     r11d, edx
 * 0000000140A05DA9: shr     r11, 3
 * 0000000140A05DAD: xor     r8, [r9]
 * 0000000140A05DB0: mov     ecx, r10d
 * 0000000140A05DB3: rol     r8, cl
 * 0000000140A05DB6: add     r9, 8
 * 0000000140A05DBA: add     edx, 0FFFFFFF8h
 * 0000000140A05DBD: sub     r11, r13
 * 0000000140A05DC0: jnz     short loc_140A05DAD
 * 0000000140A05DC2: xor     r11d, r11d
 * 0000000140A05DC5: test    edx, edx
 * 0000000140A05DC7: jz      short loc_140A05DE7
 * 0000000140A05DC9: mov     r11d, 0FFFFFFFFh
 * 0000000140A05DCF: movzx   eax, byte ptr [r9]
 * 0000000140A05DD3: mov     ecx, r10d
 * 0000000140A05DD6: xor     r8, rax
 * 0000000140A05DD9: add     r9, r13
 * 0000000140A05DDC: rol     r8, cl
 * 0000000140A05DDF: add     edx, r11d
 * 0000000140A05DE2: jnz     short loc_140A05DCF
 * 0000000140A05DE4: xor     r11d, r11d
 * 0000000140A05DE7: mov     rax, r8
 * 0000000140A05DEA: jmp     short loc_140A05DEF
 * 0000000140A05DEC: xor     r8d, eax
 * 0000000140A05DEF: shr     rax, 1Fh
 * 0000000140A05DF3: test    rax, rax
 * 0000000140A05DF6: jnz     short loc_140A05DEC
 * 0000000140A05DF8: mov     r13, [rsp+0CE0h+var_C70]
 * 0000000140A05DFD: btr     r8d, 1Fh
 * 0000000140A05E02: mov     [rbx+14h], r8d
 * 0000000140A05E06: mov     eax, 2
 * 0000000140A05E0B: add     [r14+828h], r15d
 * 0000000140A05E12: mov     rbx, r14
 * 0000000140A05E15: mov     [r14+958h], eax
 * 0000000140A05E1C: jmp     short loc_140A05E21
 * 0000000140A05E1E: xor     r11d, r11d
 * 0000000140A05E21: cmp     dword ptr [rbx+958h], 3
 * 0000000140A05E28: jge     loc_140A06065
 * 0000000140A05E2E: mov     r14d, [rbx+7E4h]
 * 0000000140A05E35: mov     r15d, 20h ; ' '
 * 0000000140A05E3B: mov     r12d, [rbx+838h]
 * 0000000140A05E42: cmp     r12d, 7
 * 0000000140A05E46: mov     r8d, [rbx+924h]
 * 0000000140A05E4D: cmovnz  r15d, r11d
 * 0000000140A05E51: lea     eax, [r14+30h]
 * 0000000140A05E55: cmp     eax, [rbx+0A1Ch]
 * 0000000140A05E5B: jbe     loc_140A05F3B
 * 0000000140A05E61: mov     edx, eax
 * 0000000140A05E63: mov     rcx, rbx
 * 0000000140A05E66: call    sub_140A0EB30
 * 0000000140A05E6B: xor     r11d, r11d
 * 0000000140A05E6E: mov     rsi, rax
 * 0000000140A05E71: test    rax, rax
 * 0000000140A05E74: jz      loc_140A06D98
 * 0000000140A05E7A: mov     ecx, [rbx+990h]
 * 0000000140A05E80: test    cl, 4
 * 0000000140A05E83: jnz     loc_140A05F32
 * 0000000140A05E89: mov     eax, [rbx+7E4h]
 * 0000000140A05E8F: lea     r9d, [r11+1]
 * 0000000140A05E93: mov     r8, [rbx+7C8h]
 * 0000000140A05E9A: and     ecx, 20000000h
 * 0000000140A05EA0: neg     ecx
 * 0000000140A05EA2: sbb     edx, edx
 * 0000000140A05EA4: and     edx, [rbx+924h]
 * 0000000140A05EAA: cmp     eax, 8
 * 0000000140A05EAD: jb      short loc_140A05EC4
 * 0000000140A05EAF: mov     ecx, eax
 * 0000000140A05EB1: shr     rcx, 3
 * 0000000140A05EB5: mov     [rbx], r11
 * 0000000140A05EB8: add     eax, 0FFFFFFF8h
 * 0000000140A05EBB: add     rbx, 8
 * 0000000140A05EBF: sub     rcx, r9
 * 0000000140A05EC2: jnz     short loc_140A05EB5
 * 0000000140A05EC4: test    eax, eax
 * 0000000140A05EC6: jz      short loc_140A05ED7
 * 0000000140A05EC8: mov     ecx, 0FFFFFFFFh
 * 0000000140A05ECD: mov     [rbx], r11b
 * 0000000140A05ED0: add     rbx, r9
 * 0000000140A05ED3: add     eax, ecx
 * 0000000140A05ED5: jnz     short loc_140A05ECD
 * 0000000140A05ED7: mov     ebx, [rsi+924h]
 * 0000000140A05EDD: mov     [rsi+924h], edx
 * 0000000140A05EE3: cmp     edx, 3
 * 0000000140A05EE6: jz      short loc_140A05F1A
 * 0000000140A05EE8: test    dword ptr [rsi+990h], 10000000h
 * 0000000140A05EF2: mov     ecx, r11d
 * 0000000140A05EF5: cmovz   ecx, edx
 * 0000000140A05EF8: test    ecx, ecx
 * 0000000140A05EFA: jz      short loc_140A05F11
 * 0000000140A05EFC: mov     rax, [rsi+228h]
 * 0000000140A05F03: lea     rcx, [r8-8]
 * 0000000140A05F07: mov     rdx, [rcx]
 * 0000000140A05F0A: call    KeGuardDispatchICall
 * 0000000140A05F0F: jmp     short loc_140A05F29
 * 0000000140A05F11: mov     rax, [rsi+100h]
 * 0000000140A05F18: jmp     short loc_140A05F21
 * 0000000140A05F1A: mov     rax, [rsi+368h]
 * 0000000140A05F21: mov     rcx, r8
 * 0000000140A05F24: call    KeGuardDispatchICall
 * 0000000140A05F29: mov     [rsi+924h], ebx
 * 0000000140A05F2F: xor     r11d, r11d
 * 0000000140A05F32: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140A05F39: jmp     short loc_140A05F44
 * 0000000140A05F3B: mov     rsi, rbx
 * 0000000140A05F3E: mov     [rbx+7E4h], eax
 * 0000000140A05F44: mov     r8d, 1
 * 0000000140A05F4A: lea     rbx, [rsi+r14]
 * 0000000140A05F4E: add     [rsi+80Ch], r8d
 * 0000000140A05F55: mov     rax, rbx
 * 0000000140A05F58: mov     [rbp+0BE0h+var_538], rbx
 * 0000000140A05F5F: lea     ecx, [r8+2Fh]
 * 0000000140A05F63: lea     edx, [rcx-2Ah]
 * 0000000140A05F66: mov     [rax], r11
 * 0000000140A05F69: add     ecx, 0FFFFFFF8h
 * 0000000140A05F6C: add     rax, 8
 * 0000000140A05F70: sub     rdx, r8
 * 0000000140A05F73: jnz     short loc_140A05F66
 * 0000000140A05F75: test    ecx, ecx
 * 0000000140A05F77: jz      short loc_140A05F88
 * 0000000140A05F79: mov     edx, 0FFFFFFFFh
 * 0000000140A05F7E: mov     [rax], r11b
 * 0000000140A05F81: add     rax, r8
 * 0000000140A05F84: add     ecx, edx
 * 0000000140A05F86: jnz     short loc_140A05F7E
 * 0000000140A05F88: mov     [rbx], r15d
 * 0000000140A05F8B: mov     r14d, 20h ; ' '
 * 0000000140A05F91: mov     [rbx+8], r13
 * 0000000140A05F95: cmp     r12d, 7
 * 0000000140A05F99: jnz     short loc_140A05FAD
 * 0000000140A05F9B: lea     r9, [rbx+18h]
 * 0000000140A05F9F: mov     r8d, r14d
 * 0000000140A05FA2: mov     rdx, r13
 * 0000000140A05FA5: mov     rcx, rsi
 * 0000000140A05FA8: call    sub_1403EA48C
 * 0000000140A05FAD: mov     rcx, [rbp+0BE0h+var_C40]
 * 0000000140A05FB1: mov     r8, r13
 * 0000000140A05FB4: mov     [rbx+10h], r14d
 * 0000000140A05FB8: add     rcx, 40h ; '@'
 * 0000000140A05FBC: add     [rsi+828h], r14d
 * 0000000140A05FC3: mov     rax, r13
 * 0000000140A05FC6: mov     r11d, [rsi+814h]
 * 0000000140A05FCD: mov     rdx, [rsi+818h]
 * 0000000140A05FD4: cmp     r13, rcx
 * 0000000140A05FD7: jnb     short loc_140A05FEA
 * 0000000140A05FD9: mov     r9d, 40h ; '@'
 * 0000000140A05FDF: prefetchnta byte ptr [rax]
 * 0000000140A05FE2: add     rax, r9
 * 0000000140A05FE5: cmp     rax, rcx
 * 0000000140A05FE8: jb      short loc_140A05FDF
 * 0000000140A05FEA: mov     r10d, 4
 * 0000000140A05FF0: mov     r9d, r14d
 * 0000000140A05FF3: lea     r15d, [r10-3]
 * 0000000140A05FF7: xor     rdx, [r8]
 * 0000000140A05FFA: mov     ecx, r11d
 * 0000000140A05FFD: rol     rdx, cl
 * 0000000140A06000: add     r8, 8
 * 0000000140A06004: add     r9d, 0FFFFFFF8h
 * 0000000140A06008: sub     r10, r15
 * 0000000140A0600B: jnz     short loc_140A05FF7
 * 0000000140A0600D: test    r9d, r9d
 * 0000000140A06010: jz      short loc_140A06033
 * 0000000140A06012: mov     edi, 0FFFFFFFFh
 * 0000000140A06017: movzx   eax, byte ptr [r8]
 * 0000000140A0601B: mov     ecx, r11d
 * 0000000140A0601E: xor     rdx, rax
 * 0000000140A06021: add     r8, r15
 * 0000000140A06024: rol     rdx, cl
 * 0000000140A06027: add     r9d, edi
 * 0000000140A0602A: jnz     short loc_140A06017
 * 0000000140A0602C: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A06033: mov     rax, rdx
 * 0000000140A06036: shr     rax, 1Fh
 * 0000000140A0603A: xor     r11d, r11d
 * 0000000140A0603D: jmp     short loc_140A06045
 * 0000000140A0603F: xor     edx, eax
 * 0000000140A06041: shr     rax, 1Fh
 * 0000000140A06045: test    rax, rax
 * 0000000140A06048: jnz     short loc_140A0603F
 * 0000000140A0604A: btr     edx, 1Fh
 * 0000000140A0604E: mov     [rbx+14h], edx
 * 0000000140A06051: mov     rbx, rsi
 * 0000000140A06054: add     [rsi+828h], r14d
 * 0000000140A0605B: mov     dword ptr [rsi+958h], 3
 * 0000000140A06065: cmp     dword ptr [rbx+958h], 4
 * 0000000140A0606C: mov     r13, [rbp+0BE0h+var_C30]
 * 0000000140A06070: jge     loc_140A06318
 * 0000000140A06076: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A0607D: mov     r14d, [rbx+7E4h]
 * 0000000140A06084: mov     r12, [r13+0]
 * 0000000140A06088: mov     r8d, [rbx+924h]
 * 0000000140A0608F: mov     r15d, [rax+30h]
 * 0000000140A06093: shl     r15d, 2
 * 0000000140A06097: lea     eax, [r14+30h]
 * 0000000140A0609B: cmp     eax, [rbx+0A1Ch]
 * 0000000140A060A1: jbe     loc_140A06181
 * 0000000140A060A7: mov     edx, eax
 * 0000000140A060A9: mov     rcx, rbx
 * 0000000140A060AC: call    sub_140A0EB30
 * 0000000140A060B1: xor     r11d, r11d
 * 0000000140A060B4: mov     rsi, rax
 * 0000000140A060B7: test    rax, rax
 * 0000000140A060BA: jz      loc_140A06D98
 * 0000000140A060C0: mov     ecx, [rbx+990h]
 * 0000000140A060C6: test    cl, 4
 * 0000000140A060C9: jnz     loc_140A06178
 * 0000000140A060CF: mov     eax, [rbx+7E4h]
 * 0000000140A060D5: lea     r9d, [r11+1]
 * 0000000140A060D9: mov     r8, [rbx+7C8h]
 * 0000000140A060E0: and     ecx, 20000000h
 * 0000000140A060E6: neg     ecx
 * 0000000140A060E8: sbb     edx, edx
 * 0000000140A060EA: and     edx, [rbx+924h]
 * 0000000140A060F0: cmp     eax, 8
 * 0000000140A060F3: jb      short loc_140A0610A
 * 0000000140A060F5: mov     ecx, eax
 * 0000000140A060F7: shr     rcx, 3
 * 0000000140A060FB: mov     [rbx], r11
 * 0000000140A060FE: add     eax, 0FFFFFFF8h
 * 0000000140A06101: add     rbx, 8
 * 0000000140A06105: sub     rcx, r9
 * 0000000140A06108: jnz     short loc_140A060FB
 * 0000000140A0610A: test    eax, eax
 * 0000000140A0610C: jz      short loc_140A0611D
 * 0000000140A0610E: mov     ecx, 0FFFFFFFFh
 * 0000000140A06113: mov     [rbx], r11b
 * 0000000140A06116: add     rbx, r9
 * 0000000140A06119: add     eax, ecx
 * 0000000140A0611B: jnz     short loc_140A06113
 * 0000000140A0611D: mov     ebx, [rsi+924h]
 * 0000000140A06123: mov     [rsi+924h], edx
 * 0000000140A06129: cmp     edx, 3
 * 0000000140A0612C: jz      short loc_140A06160
 * 0000000140A0612E: test    dword ptr [rsi+990h], 10000000h
 * 0000000140A06138: mov     ecx, r11d
 * 0000000140A0613B: cmovz   ecx, edx
 * 0000000140A0613E: test    ecx, ecx
 * 0000000140A06140: jz      short loc_140A06157
 * 0000000140A06142: mov     rax, [rsi+228h]
 * 0000000140A06149: lea     rcx, [r8-8]
 * 0000000140A0614D: mov     rdx, [rcx]
 * 0000000140A06150: call    KeGuardDispatchICall
 * 0000000140A06155: jmp     short loc_140A0616F
 * 0000000140A06157: mov     rax, [rsi+100h]
 * 0000000140A0615E: jmp     short loc_140A06167
 * 0000000140A06160: mov     rax, [rsi+368h]
 * 0000000140A06167: mov     rcx, r8
 * 0000000140A0616A: call    KeGuardDispatchICall
 * 0000000140A0616F: mov     [rsi+924h], ebx
 * 0000000140A06175: xor     r11d, r11d
 * 0000000140A06178: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140A0617F: jmp     short loc_140A0618A
 * 0000000140A06181: mov     rsi, rbx
 * 0000000140A06184: mov     [rbx+7E4h], eax
 * 0000000140A0618A: mov     r8d, 1
 * 0000000140A06190: lea     rbx, [rsi+r14]
 * 0000000140A06194: add     [rsi+80Ch], r8d
 * 0000000140A0619B: mov     rax, rbx
 * 0000000140A0619E: mov     [rbp+0BE0h+var_530], rbx
 * 0000000140A061A5: lea     ecx, [r8+2Fh]
 * 0000000140A061A9: lea     edx, [rcx-2Ah]
 * 0000000140A061AC: mov     [rax], r11
 * 0000000140A061AF: add     ecx, 0FFFFFFF8h
 * 0000000140A061B2: add     rax, 8
 * 0000000140A061B6: sub     rdx, r8
 * 0000000140A061B9: jnz     short loc_140A061AC
 * 0000000140A061BB: test    ecx, ecx
 * 0000000140A061BD: jz      short loc_140A061CE
 * 0000000140A061BF: mov     edx, 0FFFFFFFFh
 * 0000000140A061C4: mov     [rax], r11b
 * 0000000140A061C7: add     rax, r8
 * 0000000140A061CA: add     ecx, edx
 * 0000000140A061CC: jnz     short loc_140A061C4
 * 0000000140A061CE: mov     dword ptr [rbx], 0Bh
 * 0000000140A061D4: mov     r9, r12
 * 0000000140A061D7: mov     [rbx+8], r12
 * 0000000140A061DB: mov     rax, r12
 * 0000000140A061DE: mov     [rbx+10h], r15d
 * 0000000140A061E2: add     [rsi+828h], r15d
 * 0000000140A061E9: mov     r10d, [rsi+814h]
 * 0000000140A061F0: mov     r14, [rsi+818h]
 * 0000000140A061F7: mov     ecx, r15d
 * 0000000140A061FA: add     rcx, r12
 * 0000000140A061FD: cmp     r12, rcx
 * 0000000140A06200: jnb     short loc_140A06212
 * 0000000140A06202: mov     edx, 40h ; '@'
 * 0000000140A06207: prefetchnta byte ptr [rax]
 * 0000000140A0620A: add     rax, rdx
 * 0000000140A0620D: cmp     rax, rcx
 * 0000000140A06210: jb      short loc_140A06207
 * 0000000140A06212: mov     r11d, r15d
 * 0000000140A06215: mov     r8, r14
 * 0000000140A06218: shr     r11d, 7
 * 0000000140A0621C: test    r11d, r11d
 * 0000000140A0621F: jz      short loc_140A06298
 * 0000000140A06221: mov     rdi, 7010008004002001h
 * 0000000140A0622B: mov     edx, 8
 * 0000000140A06230: lea     r13d, [rdx-7]
 * 0000000140A06234: mov     rax, [r9]
 * 0000000140A06237: mov     ecx, r10d
 * 0000000140A0623A: xor     rax, r8
 * 0000000140A0623D: mov     r8, [r9+8]
 * 0000000140A06241: rol     rax, cl
 * 0000000140A06244: add     r9, 10h
 * 0000000140A06248: xor     r8, rax
 * 0000000140A0624B: rol     r8, cl
 * 0000000140A0624E: sub     rdx, r13
 * 0000000140A06251: jnz     short loc_140A06234
 * 0000000140A06253: mov     rcx, r9
 * 0000000140A06256: sub     rcx, r12
 * 0000000140A06259: xor     rcx, r14
 * 0000000140A0625C: mov     rax, rcx
 * 0000000140A0625F: rol     rax, 11h
 * 0000000140A06263: xor     rcx, rax
 * 0000000140A06266: mov     rax, rdi
 * 0000000140A06269: mul     rcx
 * 0000000140A0626C: mov     [rbp+0BE0h+var_528], rdx
 * 0000000140A06273: xor     edx, eax
 * 0000000140A06275: xor     r10d, edx
 * 0000000140A06278: mov     rax, r13
 * 0000000140A0627B: and     r10d, 3Fh
 * 0000000140A0627F: cmovz   r10d, eax
 * 0000000140A06283: mov     eax, 0FFFFFFFFh
 * 0000000140A06288: add     r11d, eax
 * 0000000140A0628B: jnz     short loc_140A0622B
 * 0000000140A0628D: mov     r13, [rbp+0BE0h+var_C30]
 * 0000000140A06291: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A06298: mov     edx, r15d
 * 0000000140A0629B: mov     r14d, 1
 * 0000000140A062A1: and     edx, 7Fh
 * 0000000140A062A4: cmp     edx, 8
 * 0000000140A062A7: jb      short loc_140A062C5
 * 0000000140A062A9: mov     r11d, edx
 * 0000000140A062AC: shr     r11, 3
 * 0000000140A062B0: xor     r8, [r9]
 * 0000000140A062B3: mov     ecx, r10d
 * 0000000140A062B6: rol     r8, cl
 * 0000000140A062B9: add     r9, 8
 * 0000000140A062BD: add     edx, 0FFFFFFF8h
 * 0000000140A062C0: sub     r11, r14
 * 0000000140A062C3: jnz     short loc_140A062B0
 * 0000000140A062C5: xor     r11d, r11d
 * 0000000140A062C8: test    edx, edx
 * 0000000140A062CA: jz      short loc_140A062EA
 * 0000000140A062CC: mov     r11d, 0FFFFFFFFh
 * 0000000140A062D2: movzx   eax, byte ptr [r9]
 * 0000000140A062D6: mov     ecx, r10d
 * 0000000140A062D9: xor     r8, rax
 * 0000000140A062DC: add     r9, r14
 * 0000000140A062DF: rol     r8, cl
 * 0000000140A062E2: add     edx, r11d
 * 0000000140A062E5: jnz     short loc_140A062D2
 * 0000000140A062E7: xor     r11d, r11d
 * 0000000140A062EA: mov     rax, r8
 * 0000000140A062ED: jmp     short loc_140A062F2
 * 0000000140A062EF: xor     r8d, eax
 * 0000000140A062F2: shr     rax, 1Fh
 * 0000000140A062F6: test    rax, rax
 * 0000000140A062F9: jnz     short loc_140A062EF
 * 0000000140A062FB: btr     r8d, 1Fh
 * 0000000140A06300: mov     [rbx+14h], r8d
 * 0000000140A06304: mov     rbx, rsi
 * 0000000140A06307: add     [rsi+828h], r15d
 * 0000000140A0630E: mov     dword ptr [rsi+958h], 4
 * 0000000140A06318: cmp     dword ptr [rbx+958h], 5
 * 0000000140A0631F: jge     loc_140A0655A
 * 0000000140A06325: mov     r14d, [rbx+7E4h]
 * 0000000140A0632C: mov     r15d, 20h ; ' '
 * 0000000140A06332: mov     r12d, [rbx+838h]
 * 0000000140A06339: cmp     r12d, 7
 * 0000000140A0633D: mov     r8d, [rbx+924h]
 * 0000000140A06344: cmovnz  r15d, r11d
 * 0000000140A06348: lea     eax, [r14+30h]
 * 0000000140A0634C: cmp     eax, [rbx+0A1Ch]
 * 0000000140A06352: jbe     loc_140A06432
 * 0000000140A06358: mov     edx, eax
 * 0000000140A0635A: mov     rcx, rbx
 * 0000000140A0635D: call    sub_140A0EB30
 * 0000000140A06362: xor     r11d, r11d
 * 0000000140A06365: mov     rsi, rax
 * 0000000140A06368: test    rax, rax
 * 0000000140A0636B: jz      loc_140A06D98
 * 0000000140A06371: mov     ecx, [rbx+990h]
 * 0000000140A06377: test    cl, 4
 * 0000000140A0637A: jnz     loc_140A06429
 * 0000000140A06380: mov     eax, [rbx+7E4h]
 * 0000000140A06386: lea     r9d, [r11+1]
 * 0000000140A0638A: mov     r8, [rbx+7C8h]
 * 0000000140A06391: and     ecx, 20000000h
 * 0000000140A06397: neg     ecx
 * 0000000140A06399: sbb     edx, edx
 * 0000000140A0639B: and     edx, [rbx+924h]
 * 0000000140A063A1: cmp     eax, 8
 * 0000000140A063A4: jb      short loc_140A063BB
 * 0000000140A063A6: mov     ecx, eax
 * 0000000140A063A8: shr     rcx, 3
 * 0000000140A063AC: mov     [rbx], r11
 * 0000000140A063AF: add     eax, 0FFFFFFF8h
 * 0000000140A063B2: add     rbx, 8
 * 0000000140A063B6: sub     rcx, r9
 * 0000000140A063B9: jnz     short loc_140A063AC
 * 0000000140A063BB: test    eax, eax
 * 0000000140A063BD: jz      short loc_140A063CE
 * 0000000140A063BF: mov     ecx, 0FFFFFFFFh
 * 0000000140A063C4: mov     [rbx], r11b
 * 0000000140A063C7: add     rbx, r9
 * 0000000140A063CA: add     eax, ecx
 * 0000000140A063CC: jnz     short loc_140A063C4
 * 0000000140A063CE: mov     ebx, [rsi+924h]
 * 0000000140A063D4: mov     [rsi+924h], edx
 * 0000000140A063DA: cmp     edx, 3
 * 0000000140A063DD: jz      short loc_140A06411
 * 0000000140A063DF: test    dword ptr [rsi+990h], 10000000h
 * 0000000140A063E9: mov     ecx, r11d
 * 0000000140A063EC: cmovz   ecx, edx
 * 0000000140A063EF: test    ecx, ecx
 * 0000000140A063F1: jz      short loc_140A06408
 * 0000000140A063F3: mov     rax, [rsi+228h]
 * 0000000140A063FA: lea     rcx, [r8-8]
 * 0000000140A063FE: mov     rdx, [rcx]
 * 0000000140A06401: call    KeGuardDispatchICall
 * 0000000140A06406: jmp     short loc_140A06420
 * 0000000140A06408: mov     rax, [rsi+100h]
 * 0000000140A0640F: jmp     short loc_140A06418
 * 0000000140A06411: mov     rax, [rsi+368h]
 * 0000000140A06418: mov     rcx, r8
 * 0000000140A0641B: call    KeGuardDispatchICall
 * 0000000140A06420: mov     [rsi+924h], ebx
 * 0000000140A06426: xor     r11d, r11d
 * 0000000140A06429: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140A06430: jmp     short loc_140A0643B
 * 0000000140A06432: mov     rsi, rbx
 * 0000000140A06435: mov     [rbx+7E4h], eax
 * 0000000140A0643B: mov     r8d, 1
 * 0000000140A06441: lea     rbx, [rsi+r14]
 * 0000000140A06445: add     [rsi+80Ch], r8d
 * 0000000140A0644C: mov     rax, rbx
 * 0000000140A0644F: mov     [rbp+0BE0h+var_520], rbx
 * 0000000140A06456: lea     ecx, [r8+2Fh]
 * 0000000140A0645A: lea     edx, [rcx-2Ah]
 * 0000000140A0645D: mov     [rax], r11
 * 0000000140A06460: add     ecx, 0FFFFFFF8h
 * 0000000140A06463: add     rax, 8
 * 0000000140A06467: sub     rdx, r8
 * 0000000140A0646A: jnz     short loc_140A0645D
 * 0000000140A0646C: test    ecx, ecx
 * 0000000140A0646E: jz      short loc_140A0647F
 * 0000000140A06470: mov     edx, 0FFFFFFFFh
 * 0000000140A06475: mov     [rax], r11b
 * 0000000140A06478: add     rax, r8
 * 0000000140A0647B: add     ecx, edx
 * 0000000140A0647D: jnz     short loc_140A06475
 * 0000000140A0647F: mov     [rbx], r15d
 * 0000000140A06482: mov     r14d, 20h ; ' '
 * 0000000140A06488: mov     [rbx+8], r13
 * 0000000140A0648C: cmp     r12d, 7
 * 0000000140A06490: jnz     short loc_140A064A4
 * 0000000140A06492: lea     r9, [rbx+18h]
 * 0000000140A06496: mov     r8d, r14d
 * 0000000140A06499: mov     rdx, r13
 * 0000000140A0649C: mov     rcx, rsi
 * 0000000140A0649F: call    sub_1403EA48C
 * 0000000140A064A4: mov     rcx, [rbp+0BE0h+arg_8]
 * 0000000140A064AB: mov     r8, r13
 * 0000000140A064AE: mov     [rbx+10h], r14d
 * 0000000140A064B2: add     rcx, 40h ; '@'
 * 0000000140A064B6: add     [rsi+828h], r14d
 * 0000000140A064BD: mov     rax, r13
 * 0000000140A064C0: mov     r11d, [rsi+814h]
 * 0000000140A064C7: mov     rdx, [rsi+818h]
 * 0000000140A064CE: cmp     r13, rcx
 * 0000000140A064D1: jnb     short loc_140A064E4
 * 0000000140A064D3: mov     r9d, 40h ; '@'
 * 0000000140A064D9: prefetchnta byte ptr [rax]
 * 0000000140A064DC: add     rax, r9
 * 0000000140A064DF: cmp     rax, rcx
 * 0000000140A064E2: jb      short loc_140A064D9
 * 0000000140A064E4: mov     r10d, 4
 * 0000000140A064EA: mov     r9d, r14d
 * 0000000140A064ED: lea     r12d, [r10-3]
 * 0000000140A064F1: xor     rdx, [r8]
 * 0000000140A064F4: mov     ecx, r11d
 * 0000000140A064F7: rol     rdx, cl
 * 0000000140A064FA: add     r8, 8
 * 0000000140A064FE: add     r9d, 0FFFFFFF8h
 * 0000000140A06502: sub     r10, r12
 * 0000000140A06505: jnz     short loc_140A064F1
 * 0000000140A06507: xor     r15d, r15d
 * 0000000140A0650A: test    r9d, r9d
 * 0000000140A0650D: jz      short loc_140A0652D
 * 0000000140A0650F: mov     r15d, 0FFFFFFFFh
 * 0000000140A06515: movzx   eax, byte ptr [r8]
 * 0000000140A06519: mov     ecx, r11d
 * 0000000140A0651C: xor     rdx, rax
 * 0000000140A0651F: add     r8, r12
 * 0000000140A06522: rol     rdx, cl
 * 0000000140A06525: add     r9d, r15d
 * 0000000140A06528: jnz     short loc_140A06515
 * 0000000140A0652A: xor     r15d, r15d
 * 0000000140A0652D: mov     rax, rdx
 * 0000000140A06530: jmp     short loc_140A06534
 * 0000000140A06532: xor     edx, eax
 * 0000000140A06534: shr     rax, 1Fh
 * 0000000140A06538: test    rax, rax
 * 0000000140A0653B: jnz     short loc_140A06532
 * 0000000140A0653D: btr     edx, 1Fh
 * 0000000140A06541: mov     [rbx+14h], edx
 * 0000000140A06544: mov     rbx, rsi
 * 0000000140A06547: add     [rsi+828h], r14d
 * 0000000140A0654E: mov     dword ptr [rsi+958h], 5
 * 0000000140A06558: jmp     short loc_140A0655D
 * 0000000140A0655A: xor     r15d, r15d
 * 0000000140A0655D: mov     eax, [rbx+958h]
 * 0000000140A06563: mov     r12d, 6
 * 0000000140A06569: mov     rsi, rbx
 * 0000000140A0656C: mov     r14, rbx
 * 0000000140A0656F: cmp     eax, r12d
 * 0000000140A06572: jge     loc_140A0694C
 * 0000000140A06578: test    dword ptr [rbx+990h], 40000000h
 * 0000000140A06582: mov     r13d, r15d
 * 0000000140A06585: mov     r15, [rbp+0BE0h+var_C40]
 * 0000000140A06589: mov     rax, [r15+20h]
 * 0000000140A0658D: mov     [rbp+0BE0h+var_BD8], rax
 * 0000000140A06591: jnz     loc_140A06931
 * 0000000140A06597: xor     eax, eax
 * 0000000140A06599: mov     ebx, eax
 * 0000000140A0659B: cmp     [r15+30h], eax
 * 0000000140A0659F: jbe     loc_140A06931
 * 0000000140A065A5: mov     rdi, [rbp+0BE0h+var_BD8]
 * 0000000140A065A9: mov     eax, ebx
 * 0000000140A065AB: lea     rdx, [rbp+0BE0h+var_898]
 * 0000000140A065B2: xor     r8d, r8d
 * 0000000140A065B5: movsxd  rcx, dword ptr [rdi+rax*4]
 * 0000000140A065B9: mov     rax, [rsi+260h]
 * 0000000140A065C0: sar     rcx, 4
 * 0000000140A065C4: add     rcx, rdi
 * 0000000140A065C7: call    KeGuardDispatchICall
 * 0000000140A065CC: mov     r9d, 1
 * 0000000140A065D2: test    rax, rax
 * 0000000140A065D5: jnz     short loc_140A065DA
 * 0000000140A065D7: add     r13d, r9d
 * 0000000140A065DA: add     ebx, r9d
 * 0000000140A065DD: cmp     ebx, [r15+30h]
 * 0000000140A065E1: jb      short loc_140A065A9
 * 0000000140A065E3: xor     r15d, r15d
 * 0000000140A065E6: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A065ED: test    r13d, r13d
 * 0000000140A065F0: jz      loc_140A06934
 * 0000000140A065F6: mov     r14d, [rsi+7E4h]
 * 0000000140A065FD: mov     ecx, r13d
 * 0000000140A06600: mov     r8d, [rsi+924h]
 * 0000000140A06607: shl     ecx, 4
 * 0000000140A0660A: add     ecx, 30h ; '0'
 * 0000000140A0660D: add     ecx, r14d
 * 0000000140A06610: cmp     ecx, [rsi+0A1Ch]
 * 0000000140A06616: jbe     loc_140A06703
 * 0000000140A0661C: mov     edx, ecx
 * 0000000140A0661E: mov     rcx, rsi
 * 0000000140A06621: call    sub_140A0EB30
 * 0000000140A06626: mov     rbx, rax
 * 0000000140A06629: test    rax, rax
 * 0000000140A0662C: jz      loc_140A066F6
 * 0000000140A06632: mov     ecx, [rsi+990h]
 * 0000000140A06638: test    cl, 4
 * 0000000140A0663B: jnz     loc_140A066E7
 * 0000000140A06641: mov     eax, [rsi+7E4h]
 * 0000000140A06647: lea     r9d, [r15+1]
 * 0000000140A0664B: mov     r8, [rsi+7C8h]
 * 0000000140A06652: and     ecx, 20000000h
 * 0000000140A06658: neg     ecx
 * 0000000140A0665A: sbb     edx, edx
 * 0000000140A0665C: and     edx, [rsi+924h]
 * 0000000140A06662: cmp     eax, 8
 * 0000000140A06665: jb      short loc_140A0667C
 * 0000000140A06667: mov     ecx, eax
 * 0000000140A06669: shr     rcx, 3
 * 0000000140A0666D: mov     [rsi], r15
 * 0000000140A06670: add     eax, 0FFFFFFF8h
 * 0000000140A06673: add     rsi, 8
 * 0000000140A06677: sub     rcx, r9
 * 0000000140A0667A: jnz     short loc_140A0666D
 * 0000000140A0667C: test    eax, eax
 * 0000000140A0667E: jz      short loc_140A0668F
 * 0000000140A06680: mov     ecx, 0FFFFFFFFh
 * 0000000140A06685: mov     [rsi], r15b
 * 0000000140A06688: add     rsi, r9
 * 0000000140A0668B: add     eax, ecx
 * 0000000140A0668D: jnz     short loc_140A06685
 * 0000000140A0668F: mov     esi, [rbx+924h]
 * 0000000140A06695: mov     [rbx+924h], edx
 * 0000000140A0669B: cmp     edx, 3
 * 0000000140A0669E: jz      short loc_140A066D2
 * 0000000140A066A0: test    dword ptr [rbx+990h], 10000000h
 * 0000000140A066AA: mov     ecx, r15d
 * 0000000140A066AD: cmovz   ecx, edx
 * 0000000140A066B0: test    ecx, ecx
 * 0000000140A066B2: jz      short loc_140A066C9
 * 0000000140A066B4: mov     rax, [rbx+228h]
 * 0000000140A066BB: lea     rcx, [r8-8]
 * 0000000140A066BF: mov     rdx, [rcx]
 * 0000000140A066C2: call    KeGuardDispatchICall
 * 0000000140A066C7: jmp     short loc_140A066E1
 * 0000000140A066C9: mov     rax, [rbx+100h]
 * 0000000140A066D0: jmp     short loc_140A066D9
 * 0000000140A066D2: mov     rax, [rbx+368h]
 * 0000000140A066D9: mov     rcx, r8
 * 0000000140A066DC: call    KeGuardDispatchICall
 * 0000000140A066E1: mov     [rbx+924h], esi
 * 0000000140A066E7: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140A066EE: mov     r9d, 1
 * 0000000140A066F4: jmp     short loc_140A0670C
 * 0000000140A066F6: mov     eax, 0C000022Dh
 * 0000000140A066FB: mov     r14, rsi
 * 0000000140A066FE: jmp     loc_140A06937
 * 0000000140A06703: mov     rbx, rsi
 * 0000000140A06706: mov     [rsi+7E4h], ecx
 * 0000000140A0670C: add     [rbx+80Ch], r9d
 * 0000000140A06713: lea     rcx, [rbx+r14]
 * 0000000140A06717: mov     [rbp+0BE0h+var_838], rcx
 * 0000000140A0671E: mov     rax, rcx
 * 0000000140A06721: mov     edx, 30h ; '0'
 * 0000000140A06726: mov     r8, r12
 * 0000000140A06729: mov     [rax], r15
 * 0000000140A0672C: add     edx, 0FFFFFFF8h
 * 0000000140A0672F: add     rax, 8
 * 0000000140A06733: sub     r8, r9
 * 0000000140A06736: jnz     short loc_140A06729
 * 0000000140A06738: test    edx, edx
 * 0000000140A0673A: jz      short loc_140A0674D
 * 0000000140A0673C: mov     r8d, 0FFFFFFFFh
 * 0000000140A06742: mov     [rax], r15b
 * 0000000140A06745: add     rax, r9
 * 0000000140A06748: add     edx, r8d
 * 0000000140A0674B: jnz     short loc_140A06742
 * 0000000140A0674D: mov     dword ptr [rcx], 0Ah
 * 0000000140A06753: mov     [rcx+8], r15
 * 0000000140A06757: mov     [rcx+10h], r15d
 * 0000000140A0675B: mov     rdx, [rbx+818h]
 * 0000000140A06762: mov     rax, rdx
 * 0000000140A06765: jmp     short loc_140A06769
 * 0000000140A06767: xor     edx, eax
 * 0000000140A06769: shr     rax, 1Fh
 * 0000000140A0676D: test    rax, rax
 * 0000000140A06770: jnz     short loc_140A06767
 * 0000000140A06772: btr     edx, 1Fh
 * 0000000140A06776: mov     r14, rbx
 * 0000000140A06779: mov     [rcx+14h], edx
 * 0000000140A0677C: mov     rax, [rbp+0BE0h+var_838]
 * 0000000140A06783: mov     [rbp+0BE0h+var_A10], rax
 * 0000000140A0678A: mov     [rax+18h], r9d
 * 0000000140A0678E: mov     rax, [rbp+0BE0h+var_A10]
 * 0000000140A06795: mov     r9, [rbp+0BE0h+var_C40]
 * 0000000140A06799: mov     [rax+1Ch], r13d
 * 0000000140A0679D: xor     eax, eax
 * 0000000140A0679F: mov     r12d, eax
 * 0000000140A067A2: mov     rcx, [rbp+0BE0h+var_A10]
 * 0000000140A067A9: lea     r15, [rcx+30h]
 * 0000000140A067AD: cmp     [r9+30h], eax
 * 0000000140A067B1: jbe     loc_140A068A9
 * 0000000140A067B7: mov     rcx, [rbp+0BE0h+var_BD8]
 * 0000000140A067BB: lea     rdx, [rbp+0BE0h+var_898]
 * 0000000140A067C2: mov     eax, r12d
 * 0000000140A067C5: xor     r8d, r8d
 * 0000000140A067C8: movsxd  rsi, dword ptr [rcx+rax*4]
 * 0000000140A067CC: mov     rax, [rbx+260h]
 * 0000000140A067D3: sar     rsi, 4
 * 0000000140A067D7: add     rsi, rcx
 * 0000000140A067DA: mov     rcx, rsi
 * 0000000140A067DD: mov     [rsp+0CE0h+var_C70], rsi
 * 0000000140A067E2: call    KeGuardDispatchICall
 * 0000000140A067E7: test    rax, rax
 * 0000000140A067EA: jnz     loc_140A06889
 * 0000000140A067F0: lea     r11d, [rax+4]
 * 0000000140A067F4: mov     r8, rsi
 * 0000000140A067F7: add     [rbx+828h], r11d
 * 0000000140A067FE: lea     rcx, [rsi+4]
 * 0000000140A06802: mov     r10d, [rbx+814h]
 * 0000000140A06809: mov     rax, rsi
 * 0000000140A0680C: mov     rdx, [rbx+818h]
 * 0000000140A06813: cmp     rsi, rcx
 * 0000000140A06816: jnb     short loc_140A06827
 * 0000000140A06818: lea     r9d, [r11+3Ch]
 * 0000000140A0681C: prefetchnta byte ptr [rax]
 * 0000000140A0681F: add     rax, r9
 * 0000000140A06822: cmp     rax, rcx
 * 0000000140A06825: jb      short loc_140A0681C
 * 0000000140A06827: mov     r9d, r11d
 * 0000000140A0682A: mov     edi, 1
 * 0000000140A0682F: mov     esi, 0FFFFFFFFh
 * 0000000140A06834: movzx   eax, byte ptr [r8]
 * 0000000140A06838: mov     ecx, r10d
 * 0000000140A0683B: xor     rdx, rax
 * 0000000140A0683E: add     r8, rdi
 * 0000000140A06841: rol     rdx, cl
 * 0000000140A06844: add     r9d, esi
 * 0000000140A06847: jnz     short loc_140A06834
 * 0000000140A06849: mov     rsi, [rsp+0CE0h+var_C70]
 * 0000000140A0684E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A06855: mov     rax, rdx
 * 0000000140A06858: jmp     short loc_140A0685C
 * 0000000140A0685A: xor     edx, eax
 * 0000000140A0685C: shr     rax, 1Fh
 * 0000000140A06860: test    rax, rax
 * 0000000140A06863: jnz     short loc_140A0685A
 * 0000000140A06865: xor     edx, [r15]
 * 0000000140A06868: mov     eax, 0FFFFFFFFh
 * 0000000140A0686D: btr     edx, 1Fh
 * 0000000140A06871: xor     [r15], edx
 * 0000000140A06874: mov     [r15+4], r11d
 * 0000000140A06878: mov     [r15+8], rsi
 * 0000000140A0687C: add     r15, 10h
 * 0000000140A06880: add     r13d, eax
 * 0000000140A06883: jz      loc_140A0692B
 * 0000000140A06889: mov     rax, [rbp+0BE0h+var_C40]
 * 0000000140A0688D: mov     r9d, 1
 * 0000000140A06893: add     r12d, r9d
 * 0000000140A06896: cmp     r12d, [rax+30h]
 * 0000000140A0689A: jb      loc_140A067B7
 * 0000000140A068A0: mov     rcx, [rbp+0BE0h+var_A10]
 * 0000000140A068A7: jmp     short loc_140A068AF
 * 0000000140A068A9: mov     r9d, 1
 * 0000000140A068AF: xor     r15d, r15d
 * 0000000140A068B2: test    r13d, r13d
 * 0000000140A068B5: jz      loc_140A06AAE
 * 0000000140A068BB: cmp     [rbx+8F8h], r15d
 * 0000000140A068C2: jnz     loc_140A06D9B
 * 0000000140A068C8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A068D2: add     rax, rbx
 * 0000000140A068D5: mov     [rbx+900h], rax
 * 0000000140A068DC: test    rcx, rcx
 * 0000000140A068DF: jz      short loc_140A068F0
 * 0000000140A068E1: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A068EB: add     rax, rcx
 * 0000000140A068EE: jmp     short loc_140A068F3
 * 0000000140A068F0: mov     rax, r15
 * 0000000140A068F3: mov     [rbx+908h], rax
 * 0000000140A068FA: test    rcx, rcx
 * 0000000140A068FD: jz      short loc_140A06904
 * 0000000140A068FF: movsxd  rax, dword ptr [rcx]
 * 0000000140A06902: jmp     short loc_140A06907
 * 0000000140A06904: mov     rax, r15
 * 0000000140A06907: mov     [rbx+910h], rax
 * 0000000140A0690E: mov     [rbx+918h], r15
 * 0000000140A06915: mov     [rbx+8F8h], r9d
 * 0000000140A0691C: xor     edx, edx
 * 0000000140A0691E: mov     rcx, rbx
 * 0000000140A06921: call    $$b8
 * 0000000140A06926: jmp     loc_140A06D9B
 * 0000000140A0692B: mov     r12d, 6
 * 0000000140A06931: xor     r15d, r15d
 * 0000000140A06934: mov     eax, r15d
 * 0000000140A06937: mov     rbx, r14
 * 0000000140A0693A: test    eax, eax
 * 0000000140A0693C: js      loc_140A06D9B
 * 0000000140A06942: mov     [r14+958h], r12d
 * 0000000140A06949: mov     eax, r12d
 * 0000000140A0694C: cmp     eax, 7
 * 0000000140A0694F: jge     loc_140A06D2A
 * 0000000140A06955: test    dword ptr [r14+990h], 40000000h
 * 0000000140A06960: mov     r13d, r15d
 * 0000000140A06963: mov     rdx, [rbp+0BE0h+var_C30]
 * 0000000140A06967: mov     rsi, [rdx]
 * 0000000140A0696A: mov     [rbp+0BE0h+var_C40], rsi
 * 0000000140A0696E: jnz     loc_140A06D15
 * 0000000140A06974: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A0697B: mov     ebx, r15d
 * 0000000140A0697E: cmp     [rax+30h], r15d
 * 0000000140A06982: jbe     loc_140A06D15
 * 0000000140A06988: mov     rdi, rax
 * 0000000140A0698B: mov     eax, ebx
 * 0000000140A0698D: lea     rdx, [rbp+0BE0h+var_8C0]
 * 0000000140A06994: xor     r8d, r8d
 * 0000000140A06997: movsxd  rcx, dword ptr [rsi+rax*4]
 * 0000000140A0699B: mov     rax, [r14+260h]
 * 0000000140A069A2: sar     rcx, 4
 * 0000000140A069A6: add     rcx, rsi
 * 0000000140A069A9: call    KeGuardDispatchICall
 * 0000000140A069AE: mov     r10d, 1
 * 0000000140A069B4: test    rax, rax
 * 0000000140A069B7: jnz     short loc_140A069BC
 * 0000000140A069B9: add     r13d, r10d
 * 0000000140A069BC: add     ebx, r10d
 * 0000000140A069BF: cmp     ebx, [rdi+30h]
 * 0000000140A069C2: jb      short loc_140A0698B
 * 0000000140A069C4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A069CB: test    r13d, r13d
 * 0000000140A069CE: jz      loc_140A06D15
 * 0000000140A069D4: mov     r15d, [r14+7E4h]
 * 0000000140A069DB: mov     ecx, r13d
 * 0000000140A069DE: mov     r8d, [r14+924h]
 * 0000000140A069E5: shl     ecx, 4
 * 0000000140A069E8: add     ecx, 30h ; '0'
 * 0000000140A069EB: add     ecx, r15d
 * 0000000140A069EE: cmp     ecx, [r14+0A1Ch]
 * 0000000140A069F5: jbe     loc_140A06AF7
 * 0000000140A069FB: mov     edx, ecx
 * 0000000140A069FD: mov     rcx, r14
 * 0000000140A06A00: call    sub_140A0EB30
 * 0000000140A06A05: xor     r9d, r9d
 * 0000000140A06A08: mov     rbx, rax
 * 0000000140A06A0B: test    rax, rax
 * 0000000140A06A0E: jz      loc_140A06AEA
 * 0000000140A06A14: mov     ecx, [r14+990h]
 * 0000000140A06A1B: test    cl, 4
 * 0000000140A06A1E: jnz     loc_140A06ADB
 * 0000000140A06A24: mov     eax, [r14+7E4h]
 * 0000000140A06A2B: lea     r10d, [r9+1]
 * 0000000140A06A2F: mov     r8, [r14+7C8h]
 * 0000000140A06A36: and     ecx, 20000000h
 * 0000000140A06A3C: neg     ecx
 * 0000000140A06A3E: sbb     edx, edx
 * 0000000140A06A40: and     edx, [r14+924h]
 * 0000000140A06A47: cmp     eax, 8
 * 0000000140A06A4A: jb      short loc_140A06A61
 * 0000000140A06A4C: mov     ecx, eax
 * 0000000140A06A4E: shr     rcx, 3
 * 0000000140A06A52: mov     [r14], r9
 * 0000000140A06A55: add     eax, 0FFFFFFF8h
 * 0000000140A06A58: add     r14, 8
 * 0000000140A06A5C: sub     rcx, r10
 * 0000000140A06A5F: jnz     short loc_140A06A52
 * 0000000140A06A61: test    eax, eax
 * 0000000140A06A63: jz      short loc_140A06A74
 * 0000000140A06A65: mov     ecx, 0FFFFFFFFh
 * 0000000140A06A6A: mov     [r14], r9b
 * 0000000140A06A6D: add     r14, r10
 * 0000000140A06A70: add     eax, ecx
 * 0000000140A06A72: jnz     short loc_140A06A6A
 * 0000000140A06A74: mov     esi, [rbx+924h]
 * 0000000140A06A7A: mov     [rbx+924h], edx
 * 0000000140A06A80: cmp     edx, 3
 * 0000000140A06A83: jz      short loc_140A06AC2
 * 0000000140A06A85: test    dword ptr [rbx+990h], 10000000h
 * 0000000140A06A8F: mov     ecx, r9d
 * 0000000140A06A92: cmovz   ecx, edx
 * 0000000140A06A95: test    ecx, ecx
 * 0000000140A06A97: jz      short loc_140A06AB9
 * 0000000140A06A99: mov     rax, [rbx+228h]
 * 0000000140A06AA0: lea     rcx, [r8-8]
 * 0000000140A06AA4: mov     rdx, [rcx]
 * 0000000140A06AA7: call    KeGuardDispatchICall
 * 0000000140A06AAC: jmp     short loc_140A06AD1
 * 0000000140A06AAE: mov     r12d, 6
 * 0000000140A06AB4: jmp     loc_140A06934
 * 0000000140A06AB9: mov     rax, [rbx+100h]
 * 0000000140A06AC0: jmp     short loc_140A06AC9
 * 0000000140A06AC2: mov     rax, [rbx+368h]
 * 0000000140A06AC9: mov     rcx, r8
 * 0000000140A06ACC: call    KeGuardDispatchICall
 * 0000000140A06AD1: mov     [rbx+924h], esi
 * 0000000140A06AD7: mov     rsi, [rbp+0BE0h+var_C40]
 * 0000000140A06ADB: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140A06AE2: mov     r10d, 1
 * 0000000140A06AE8: jmp     short loc_140A06B01
 * 0000000140A06AEA: mov     eax, 0C000022Dh
 * 0000000140A06AEF: xor     r15d, r15d
 * 0000000140A06AF2: jmp     loc_140A06D18
 * 0000000140A06AF7: mov     rbx, r14
 * 0000000140A06AFA: mov     [r14+7E4h], ecx
 * 0000000140A06B01: add     [rbx+80Ch], r10d
 * 0000000140A06B08: lea     rcx, [rbx+r15]
 * 0000000140A06B0C: mov     [rbp+0BE0h+var_8C8], rcx
 * 0000000140A06B13: mov     rax, rcx
 * 0000000140A06B16: xor     r9d, r9d
 * 0000000140A06B19: mov     edx, 30h ; '0'
 * 0000000140A06B1E: mov     r8, r12
 * 0000000140A06B21: mov     [rax], r9
 * 0000000140A06B24: add     edx, 0FFFFFFF8h
 * 0000000140A06B27: add     rax, 8
 * 0000000140A06B2B: sub     r8, r10
 * 0000000140A06B2E: jnz     short loc_140A06B21
 * 0000000140A06B30: test    edx, edx
 * 0000000140A06B32: jz      short loc_140A06B45
 * 0000000140A06B34: mov     r8d, 0FFFFFFFFh
 * 0000000140A06B3A: mov     [rax], r9b
 * 0000000140A06B3D: add     rax, r10
 * 0000000140A06B40: add     edx, r8d
 * 0000000140A06B43: jnz     short loc_140A06B3A
 * 0000000140A06B45: mov     dword ptr [rcx], 0Ah
 * 0000000140A06B4B: mov     [rcx+8], r9
 * 0000000140A06B4F: mov     [rcx+10h], r9d
 * 0000000140A06B53: mov     rdx, [rbx+818h]
 * 0000000140A06B5A: mov     rax, rdx
 * 0000000140A06B5D: jmp     short loc_140A06B61
 * 0000000140A06B5F: xor     edx, eax
 * 0000000140A06B61: shr     rax, 1Fh
 * 0000000140A06B65: test    rax, rax
 * 0000000140A06B68: jnz     short loc_140A06B5F
 * 0000000140A06B6A: btr     edx, 1Fh
 * 0000000140A06B6E: mov     r14, rbx
 * 0000000140A06B71: mov     [rcx+14h], edx
 * 0000000140A06B74: mov     r12d, r9d
 * 0000000140A06B77: mov     rax, [rbp+0BE0h+var_8C8]
 * 0000000140A06B7E: mov     [rbp+0BE0h+var_A58], rax
 * 0000000140A06B85: mov     [rax+18h], r10d
 * 0000000140A06B89: mov     rax, [rbp+0BE0h+var_A58]
 * 0000000140A06B90: mov     [rax+1Ch], r13d
 * 0000000140A06B94: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A06B9B: mov     rcx, [rbp+0BE0h+var_A58]
 * 0000000140A06BA2: lea     r15, [rcx+30h]
 * 0000000140A06BA6: cmp     [rax+30h], r9d
 * 0000000140A06BAA: jbe     loc_140A06CA4
 * 0000000140A06BB0: mov     eax, r12d
 * 0000000140A06BB3: lea     rdx, [rbp+0BE0h+var_8C0]
 * 0000000140A06BBA: xor     r8d, r8d
 * 0000000140A06BBD: movsxd  rsi, dword ptr [rsi+rax*4]
 * 0000000140A06BC1: mov     rax, [rbx+260h]
 * 0000000140A06BC8: sar     rsi, 4
 * 0000000140A06BCC: add     rsi, [rbp+0BE0h+var_C40]
 * 0000000140A06BD0: mov     rcx, rsi
 * 0000000140A06BD3: mov     [rsp+0CE0h+var_C70], rsi
 * 0000000140A06BD8: call    KeGuardDispatchICall
 * 0000000140A06BDD: test    rax, rax
 * 0000000140A06BE0: jnz     loc_140A06C7F
 * 0000000140A06BE6: lea     r11d, [rax+4]
 * 0000000140A06BEA: mov     r8, rsi
 * 0000000140A06BED: add     [rbx+828h], r11d
 * 0000000140A06BF4: lea     rcx, [rsi+4]
 * 0000000140A06BF8: mov     r10d, [rbx+814h]
 * 0000000140A06BFF: mov     rax, rsi
 * 0000000140A06C02: mov     rdx, [rbx+818h]
 * 0000000140A06C09: cmp     rsi, rcx
 * 0000000140A06C0C: jnb     short loc_140A06C1D
 * 0000000140A06C0E: lea     r9d, [r11+3Ch]
 * 0000000140A06C12: prefetchnta byte ptr [rax]
 * 0000000140A06C15: add     rax, r9
 * 0000000140A06C18: cmp     rax, rcx
 * 0000000140A06C1B: jb      short loc_140A06C12
 * 0000000140A06C1D: mov     r9d, r11d
 * 0000000140A06C20: mov     edi, 1
 * 0000000140A06C25: mov     esi, 0FFFFFFFFh
 * 0000000140A06C2A: movzx   eax, byte ptr [r8]
 * 0000000140A06C2E: mov     ecx, r10d
 * 0000000140A06C31: xor     rdx, rax
 * 0000000140A06C34: add     r8, rdi
 * 0000000140A06C37: rol     rdx, cl
 * 0000000140A06C3A: add     r9d, esi
 * 0000000140A06C3D: jnz     short loc_140A06C2A
 * 0000000140A06C3F: mov     rsi, [rsp+0CE0h+var_C70]
 * 0000000140A06C44: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A06C4B: mov     rax, rdx
 * 0000000140A06C4E: jmp     short loc_140A06C52
 * 0000000140A06C50: xor     edx, eax
 * 0000000140A06C52: shr     rax, 1Fh
 * 0000000140A06C56: test    rax, rax
 * 0000000140A06C59: jnz     short loc_140A06C50
 * 0000000140A06C5B: xor     edx, [r15]
 * 0000000140A06C5E: mov     eax, 0FFFFFFFFh
 * 0000000140A06C63: btr     edx, 1Fh
 * 0000000140A06C67: xor     [r15], edx
 * 0000000140A06C6A: mov     [r15+4], r11d
 * 0000000140A06C6E: mov     [r15+8], rsi
 * 0000000140A06C72: add     r15, 10h
 * 0000000140A06C76: add     r13d, eax
 * 0000000140A06C79: jz      loc_140A06D12
 * 0000000140A06C7F: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A06C86: mov     r10d, 1
 * 0000000140A06C8C: mov     rsi, [rbp+0BE0h+var_C40]
 * 0000000140A06C90: add     r12d, r10d
 * 0000000140A06C93: cmp     r12d, [rax+30h]
 * 0000000140A06C97: jb      loc_140A06BB0
 * 0000000140A06C9D: mov     rcx, [rbp+0BE0h+var_A58]
 * 0000000140A06CA4: xor     r15d, r15d
 * 0000000140A06CA7: test    r13d, r13d
 * 0000000140A06CAA: jz      short loc_140A06D15
 * 0000000140A06CAC: cmp     [rbx+8F8h], r15d
 * 0000000140A06CB3: jnz     loc_140A06D9B
 * 0000000140A06CB9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A06CC3: add     rax, rbx
 * 0000000140A06CC6: mov     [rbx+900h], rax
 * 0000000140A06CCD: test    rcx, rcx
 * 0000000140A06CD0: jz      short loc_140A06CE1
 * 0000000140A06CD2: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A06CDC: add     rax, rcx
 * 0000000140A06CDF: jmp     short loc_140A06CE4
 * 0000000140A06CE1: mov     rax, r15
 * 0000000140A06CE4: mov     [rbx+908h], rax
 * 0000000140A06CEB: test    rcx, rcx
 * 0000000140A06CEE: jz      short loc_140A06CF5
 * 0000000140A06CF0: movsxd  rax, dword ptr [rcx]
 * 0000000140A06CF3: jmp     short loc_140A06CF8
 * 0000000140A06CF5: mov     rax, r15
 * 0000000140A06CF8: mov     [rbx+910h], rax
 * 0000000140A06CFF: mov     [rbx+918h], r15
 * 0000000140A06D06: mov     [rbx+8F8h], r10d
 * 0000000140A06D0D: jmp     loc_140A0691C
 * 0000000140A06D12: xor     r15d, r15d
 * 0000000140A06D15: mov     eax, r15d
 * 0000000140A06D18: mov     rbx, r14
 * 0000000140A06D1B: test    eax, eax
 * 0000000140A06D1D: js      short loc_140A06D9B
 * 0000000140A06D1F: mov     dword ptr [r14+958h], 7
 * 0000000140A06D2A: mov     eax, r15d
 * 0000000140A06D2D: mov     rsi, rbx
 * 0000000140A06D30: test    eax, eax
 * 0000000140A06D32: js      short loc_140A06D8D
 * 0000000140A06D34: mov     r14d, 0FFFFFFFFh
 * 0000000140A06D3A: mov     rax, [rbx+570h]
 * 0000000140A06D41: lea     rdx, [rbp+0BE0h+var_210]
 * 0000000140A06D48: mov     rsi, rbx
 * 0000000140A06D4B: mov     [rsp+0CE0h+var_C80], rbx
 * 0000000140A06D50: mov     [rbp+0BE0h+var_BA8], rbx
 * 0000000140A06D54: mov     rcx, [rax+20h]
 * 0000000140A06D58: mov     rax, [rbx+200h]
 * 0000000140A06D5F: mov     [rbp+0BE0h+var_C40], rcx
 * 0000000140A06D63: call    KeGuardDispatchICall
 * 0000000140A06D68: mov     r13d, [rbp+0BE0h+var_1FC]
 * 0000000140A06D6F: mov     r12, rax
 * 0000000140A06D72: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A06D76: mov     rax, [rbp+0BE0h+var_208]
 * 0000000140A06D7D: mov     dword ptr [rbp+0BE0h+arg_8], r13d
 * 0000000140A06D84: mov     [rbp+0BE0h+var_C08], rax
 * 0000000140A06D88: test    rax, rax
 * 0000000140A06D8B: jnz     short loc_140A06DA2
 * 0000000140A06D8D: mov     r12d, 1
 * 0000000140A06D93: jmp     loc_140A05AB7
 * 0000000140A06D98: xor     r15d, r15d
 * 0000000140A06D9B: mov     eax, 0C000022Dh
 * 0000000140A06DA0: jmp     short loc_140A06D2D
 * 0000000140A06DA2: mov     ecx, 4
 * 0000000140A06DA7: mov     [rbp+0BE0h+var_AE8], r15
 * 0000000140A06DAE: lea     rax, [rbp+0BE0h+var_AE0]
 * 0000000140A06DB5: lea     edx, [rcx-3]
 * 0000000140A06DB8: mov     [rax], r15b
 * 0000000140A06DBB: add     rax, rdx
 * 0000000140A06DBE: add     ecx, r14d
 * 0000000140A06DC1: jnz     short loc_140A06DB8
 * 0000000140A06DC3: xor     edx, edx
 * 0000000140A06DC5: cmp     [rbx+80Ch], edx
 * 0000000140A06DCB: jbe     loc_140A06FCF
 * 0000000140A06DD1: mov     ecx, [rbp+0BE0h+var_AE0]
 * 0000000140A06DD7: mov     r9d, dword ptr [rbp+0BE0h+var_AE8+4]
 * 0000000140A06DDE: mov     r11d, dword ptr [rbp+0BE0h+var_AE8]
 * 0000000140A06DE5: mov     rax, [rbx+0A78h]
 * 0000000140A06DEC: mov     r14, rbx
 * 0000000140A06DEF: test    rax, rax
 * 0000000140A06DF2: mov     r10d, edx
 * 0000000140A06DF5: cmovnz  r14, rax
 * 0000000140A06DF9: mov     [rsp+0CE0h+var_C70], r14
 * 0000000140A06DFE: mov     r8d, [r14+808h]
 * 0000000140A06E05: add     r8, r14
 * 0000000140A06E08: test    r11d, r11d
 * 0000000140A06E0B: jz      short loc_140A06E1B
 * 0000000140A06E0D: cmp     r9d, r15d
 * 0000000140A06E10: ja      short loc_140A06E1B
 * 0000000140A06E12: mov     r8d, ecx
 * 0000000140A06E15: mov     r10d, r9d
 * 0000000140A06E18: add     r8, r14
 * 0000000140A06E1B: cmp     r10d, r15d
 * 0000000140A06E1E: jz      loc_140A06F59
 * 0000000140A06E24: mov     esi, 0Ch
 * 0000000140A06E29: mov     eax, r15d
 * 0000000140A06E2C: sub     eax, r10d
 * 0000000140A06E2F: mov     r14, 0AAAAAAAAAAAAAAABh
 * 0000000140A06E39: mov     r9d, eax
 * 0000000140A06E3C: add     r10d, eax
 * 0000000140A06E3F: lea     r12d, [rsi-0Ah]
 * 0000000140A06E43: mov     ecx, [r8]
 * 0000000140A06E46: cmp     ecx, esi
 * 0000000140A06E48: jg      short loc_140A06E8F
 * 0000000140A06E4A: jz      short loc_140A06EAC
 * 0000000140A06E4C: sub     ecx, 1
 * 0000000140A06E4F: jz      short loc_140A06EAC
 * 0000000140A06E51: sub     ecx, 6
 * 0000000140A06E54: jz      short loc_140A06E7D
 * 0000000140A06E56: sub     ecx, 1
 * 0000000140A06E59: jz      short loc_140A06E73
 * 0000000140A06E5B: cmp     ecx, r12d
 * 0000000140A06E5E: jnz     loc_140A06EEB
 * 0000000140A06E64: mov     eax, [r8+1Ch]
 * 0000000140A06E68: add     eax, 3
 * 0000000140A06E6B: shl     eax, 4
 * 0000000140A06E6E: jmp     loc_140A06F2A
 * 0000000140A06E73: movzx   eax, word ptr [r8+20h]
 * 0000000140A06E78: jmp     loc_140A06F24
 * 0000000140A06E7D: mov     eax, [r8+18h]
 * 0000000140A06E81: add     eax, r12d
 * 0000000140A06E84: lea     eax, [rax+rax*2]
 * 0000000140A06E87: shl     eax, 3
 * 0000000140A06E8A: jmp     loc_140A06F2A
 * 0000000140A06E8F: cmp     ecx, 1Ch
 * 0000000140A06E92: jz      loc_140A06F1F
 * 0000000140A06E98: cmp     ecx, 1Eh
 * 0000000140A06E9B: jz      short loc_140A06EF2
 * 0000000140A06E9D: cmp     ecx, 20h ; ' '
 * 0000000140A06EA0: jle     short loc_140A06EEB
 * 0000000140A06EA2: cmp     ecx, 22h ; '"'
 * 0000000140A06EA5: jle     short loc_140A06EC3
 * 0000000140A06EA7: cmp     ecx, 2Bh ; '+'
 * 0000000140A06EAA: jnz     short loc_140A06EEB
 * 0000000140A06EAC: mov     ecx, [r8+10h]
 * 0000000140A06EB0: mov     rax, r14
 * 0000000140A06EB3: mul     rcx
 * 0000000140A06EB6: shr     rdx, 3
 * 0000000140A06EBA: lea     eax, ds:30h[rdx*4]
 * 0000000140A06EC1: jmp     short loc_140A06F2A
 * 0000000140A06EC3: mov     ecx, [r8+20h]
 * 0000000140A06EC7: mov     edx, [r8+28h]
 * 0000000140A06ECB: and     ecx, 0FFFh
 * 0000000140A06ED1: add     rdx, 0FFFh
 * 0000000140A06ED8: add     rdx, rcx
 * 0000000140A06EDB: shr     rdx, 0Ch
 * 0000000140A06EDF: lea     eax, [rdx+rdx*4]
 * 0000000140A06EE2: lea     eax, ds:30h[rax*4]
 * 0000000140A06EE9: jmp     short loc_140A06F2A
 * 0000000140A06EEB: mov     eax, 30h ; '0'
 * 0000000140A06EF0: jmp     short loc_140A06F2A
 * 0000000140A06EF2: mov     eax, [r8+24h]
 * 0000000140A06EF6: lea     ecx, [rax-1]
 * 0000000140A06EF9: neg     eax
 * 0000000140A06EFB: sbb     eax, eax
 * 0000000140A06EFD: and     ecx, eax
 * 0000000140A06EFF: mov     rax, r14
 * 0000000140A06F02: mul     rcx
 * 0000000140A06F05: movzx   eax, word ptr [r8+28h]
 * 0000000140A06F0A: shr     rdx, 3
 * 0000000140A06F0E: add     edx, 7
 * 0000000140A06F11: and     edx, 0FFFFFFF8h
 * 0000000140A06F14: add     eax, r12d
 * 0000000140A06F17: lea     eax, [rax+rax*2]
 * 0000000140A06F1A: lea     eax, [rdx+rax*8]
 * 0000000140A06F1D: jmp     short loc_140A06F2A
 * 0000000140A06F1F: movzx   eax, word ptr [r8+28h]
 * 0000000140A06F24: add     eax, 37h ; '7'
 * 0000000140A06F27: and     eax, 0FFFFFFF8h
 * 0000000140A06F2A: add     r8, rax
 * 0000000140A06F2D: mov     eax, 1
 * 0000000140A06F32: sub     r9, rax
 * 0000000140A06F35: jnz     loc_140A06E43
 * 0000000140A06F3B: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A06F40: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A06F47: mov     r14, [rsp+0CE0h+var_C70]
 * 0000000140A06F4C: mov     r12, [rbp+0BE0h+var_C30]
 * 0000000140A06F50: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A06F57: jmp     short loc_140A06F5E
 * 0000000140A06F59: mov     eax, 1
 * 0000000140A06F5E: mov     ecx, r8d
 * 0000000140A06F61: mov     dword ptr [rbp+0BE0h+var_AE8], eax
 * 0000000140A06F67: sub     ecx, r14d
 * 0000000140A06F6A: mov     dword ptr [rbp+0BE0h+var_AE8+4], r10d
 * 0000000140A06F71: mov     [rbp+0BE0h+var_AE0], ecx
 * 0000000140A06F77: mov     r11d, eax
 * 0000000140A06F7A: movsxd  rdx, dword ptr [r8]
 * 0000000140A06F7D: mov     r9d, r10d
 * 0000000140A06F80: cmp     edx, 2Bh ; '+'
 * 0000000140A06F83: ja      short loc_140A06FA1
 * 0000000140A06F85: mov     r10, 80000001002h
 * 0000000140A06F8F: bt      r10, rdx
 * 0000000140A06F93: jnb     short loc_140A06FA1
 * 0000000140A06F95: cmp     [r8+8], r12
 * 0000000140A06F99: jnz     short loc_140A06FA1
 * 0000000140A06F9B: cmp     [r8+10h], r13d
 * 0000000140A06F9F: jz      short loc_140A06FCA
 * 0000000140A06FA1: lea     eax, [rdx-21h]
 * 0000000140A06FA4: mov     edx, 1
 * 0000000140A06FA9: cmp     eax, edx
 * 0000000140A06FAB: ja      short loc_140A06FB7
 * 0000000140A06FAD: mov     rax, [rbp+0BE0h+var_C08]
 * 0000000140A06FB1: cmp     [r8+20h], rax
 * 0000000140A06FB5: jz      short loc_140A06FCA
 * 0000000140A06FB7: add     r15d, edx
 * 0000000140A06FBA: cmp     r15d, [rbx+80Ch]
 * 0000000140A06FC1: jnb     short loc_140A06FCF
 * 0000000140A06FC3: xor     edx, edx
 * 0000000140A06FC5: jmp     loc_140A06DE5
 * 0000000140A06FCA: xor     r15d, r15d
 * 0000000140A06FCD: jmp     short loc_140A06FD5
 * 0000000140A06FCF: xor     r15d, r15d
 * 0000000140A06FD2: mov     r8d, r15d
 * 0000000140A06FD5: test    r8, r8
 * 0000000140A06FD8: jz      short loc_140A06FE2
 * 0000000140A06FDA: mov     rsi, rbx
 * 0000000140A06FDD: jmp     loc_140A08CF0
 * 0000000140A06FE2: mov     r13, [rbp+0BE0h+var_C40]
 * 0000000140A06FE6: lea     rdx, [rbp+0BE0h+var_1F8]
 * 0000000140A06FED: mov     rax, [rbx+200h]
 * 0000000140A06FF4: mov     rcx, r13
 * 0000000140A06FF7: mov     [rbp+0BE0h+var_BB0], rbx
 * 0000000140A06FFB: call    KeGuardDispatchICall
 * 0000000140A07000: mov     r12d, [rbp+0BE0h+var_1E4]
 * 0000000140A07007: mov     [rbp+0BE0h+var_C10], rax
 * 0000000140A0700B: mov     rax, [rbp+0BE0h+var_1F0]
 * 0000000140A07012: mov     dword ptr [rbp+0BE0h+arg_8], r12d
 * 0000000140A07019: mov     [rbp+0BE0h+var_BDC], r12d
 * 0000000140A0701D: mov     [rsp+0CE0h+BugCheckParameter2], rax
 * 0000000140A07022: test    rax, rax
 * 0000000140A07025: jnz     short loc_140A07039
 * 0000000140A07027: mov     [rbp+0BE0h+var_C18], 0C000007Bh
 * 0000000140A0702E: mov     r13d, 80000000h
 * 0000000140A07034: jmp     loc_140A08C3F
 * 0000000140A07039: mov     ecx, 4
 * 0000000140A0703E: mov     [rbp+0BE0h+var_AC8], r15
 * 0000000140A07045: lea     rax, [rbp+0BE0h+var_AC0]
 * 0000000140A0704C: mov     r8d, 0FFFFFFFFh
 * 0000000140A07052: lea     edx, [rcx-3]
 * 0000000140A07055: mov     [rax], r15b
 * 0000000140A07058: add     rax, rdx
 * 0000000140A0705B: add     ecx, r8d
 * 0000000140A0705E: jnz     short loc_140A07055
 * 0000000140A07060: xor     edx, edx
 * 0000000140A07062: cmp     [rbx+80Ch], edx
 * 0000000140A07068: jbe     loc_140A07276
 * 0000000140A0706E: mov     ecx, [rbp+0BE0h+var_AC0]
 * 0000000140A07074: mov     r9d, dword ptr [rbp+0BE0h+var_AC8+4]
 * 0000000140A0707B: mov     r11d, dword ptr [rbp+0BE0h+var_AC8]
 * 0000000140A07082: mov     rax, [rbx+0A78h]
 * 0000000140A07089: mov     r14, rbx
 * 0000000140A0708C: test    rax, rax
 * 0000000140A0708F: mov     r10d, edx
 * 0000000140A07092: cmovnz  r14, rax
 * 0000000140A07096: mov     [rsp+0CE0h+var_C70], r14
 * 0000000140A0709B: mov     r8d, [r14+808h]
 * 0000000140A070A2: add     r8, r14
 * 0000000140A070A5: test    r11d, r11d
 * 0000000140A070A8: jz      short loc_140A070B8
 * 0000000140A070AA: cmp     r9d, r15d
 * 0000000140A070AD: ja      short loc_140A070B8
 * 0000000140A070AF: mov     r8d, ecx
 * 0000000140A070B2: mov     r10d, r9d
 * 0000000140A070B5: add     r8, r14
 * 0000000140A070B8: cmp     r10d, r15d
 * 0000000140A070BB: jz      loc_140A071F6
 * 0000000140A070C1: mov     esi, 0Ch
 * 0000000140A070C6: mov     eax, r15d
 * 0000000140A070C9: sub     eax, r10d
 * 0000000140A070CC: mov     r14, 0AAAAAAAAAAAAAAABh
 * 0000000140A070D6: mov     r9d, eax
 * 0000000140A070D9: add     r10d, eax
 * 0000000140A070DC: lea     r12d, [rsi-0Ah]
 * 0000000140A070E0: mov     ecx, [r8]
 * 0000000140A070E3: cmp     ecx, esi
 * 0000000140A070E5: jg      short loc_140A0712C
 * 0000000140A070E7: jz      short loc_140A07149
 * 0000000140A070E9: sub     ecx, 1
 * 0000000140A070EC: jz      short loc_140A07149
 * 0000000140A070EE: sub     ecx, 6
 * 0000000140A070F1: jz      short loc_140A0711A
 * 0000000140A070F3: sub     ecx, 1
 * 0000000140A070F6: jz      short loc_140A07110
 * 0000000140A070F8: cmp     ecx, r12d
 * 0000000140A070FB: jnz     loc_140A07188
 * 0000000140A07101: mov     eax, [r8+1Ch]
 * 0000000140A07105: add     eax, 3
 * 0000000140A07108: shl     eax, 4
 * 0000000140A0710B: jmp     loc_140A071C7
 * 0000000140A07110: movzx   eax, word ptr [r8+20h]
 * 0000000140A07115: jmp     loc_140A071C1
 * 0000000140A0711A: mov     eax, [r8+18h]
 * 0000000140A0711E: add     eax, r12d
 * 0000000140A07121: lea     eax, [rax+rax*2]
 * 0000000140A07124: shl     eax, 3
 * 0000000140A07127: jmp     loc_140A071C7
 * 0000000140A0712C: cmp     ecx, 1Ch
 * 0000000140A0712F: jz      loc_140A071BC
 * 0000000140A07135: cmp     ecx, 1Eh
 * 0000000140A07138: jz      short loc_140A0718F
 * 0000000140A0713A: cmp     ecx, 20h ; ' '
 * 0000000140A0713D: jle     short loc_140A07188
 * 0000000140A0713F: cmp     ecx, 22h ; '"'
 * 0000000140A07142: jle     short loc_140A07160
 * 0000000140A07144: cmp     ecx, 2Bh ; '+'
 * 0000000140A07147: jnz     short loc_140A07188
 * 0000000140A07149: mov     ecx, [r8+10h]
 * 0000000140A0714D: mov     rax, r14
 * 0000000140A07150: mul     rcx
 * 0000000140A07153: shr     rdx, 3
 * 0000000140A07157: lea     eax, ds:30h[rdx*4]
 * 0000000140A0715E: jmp     short loc_140A071C7
 * 0000000140A07160: mov     ecx, [r8+20h]
 * 0000000140A07164: mov     edx, [r8+28h]
 * 0000000140A07168: and     ecx, 0FFFh
 * 0000000140A0716E: add     rdx, 0FFFh
 * 0000000140A07175: add     rdx, rcx
 * 0000000140A07178: shr     rdx, 0Ch
 * 0000000140A0717C: lea     eax, [rdx+rdx*4]
 * 0000000140A0717F: lea     eax, ds:30h[rax*4]
 * 0000000140A07186: jmp     short loc_140A071C7
 * 0000000140A07188: mov     eax, 30h ; '0'
 * 0000000140A0718D: jmp     short loc_140A071C7
 * 0000000140A0718F: mov     eax, [r8+24h]
 * 0000000140A07193: lea     ecx, [rax-1]
 * 0000000140A07196: neg     eax
 * 0000000140A07198: sbb     eax, eax
 * 0000000140A0719A: and     ecx, eax
 * 0000000140A0719C: mov     rax, r14
 * 0000000140A0719F: mul     rcx
 * 0000000140A071A2: movzx   eax, word ptr [r8+28h]
 * 0000000140A071A7: shr     rdx, 3
 * 0000000140A071AB: add     edx, 7
 * 0000000140A071AE: and     edx, 0FFFFFFF8h
 * 0000000140A071B1: add     eax, r12d
 * 0000000140A071B4: lea     eax, [rax+rax*2]
 * 0000000140A071B7: lea     eax, [rdx+rax*8]
 * 0000000140A071BA: jmp     short loc_140A071C7
 * 0000000140A071BC: movzx   eax, word ptr [r8+28h]
 * 0000000140A071C1: add     eax, 37h ; '7'
 * 0000000140A071C4: and     eax, 0FFFFFFF8h
 * 0000000140A071C7: add     r8, rax
 * 0000000140A071CA: mov     eax, 1
 * 0000000140A071CF: sub     r9, rax
 * 0000000140A071D2: jnz     loc_140A070E0
 * 0000000140A071D8: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A071DD: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A071E4: mov     r14, [rsp+0CE0h+var_C70]
 * 0000000140A071E9: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A071F0: mov     r13, [rbp+0BE0h+var_C40]
 * 0000000140A071F4: jmp     short loc_140A071FB
 * 0000000140A071F6: mov     eax, 1
 * 0000000140A071FB: mov     ecx, r8d
 * 0000000140A071FE: mov     dword ptr [rbp+0BE0h+var_AC8], eax
 * 0000000140A07204: sub     ecx, r14d
 * 0000000140A07207: mov     dword ptr [rbp+0BE0h+var_AC8+4], r10d
 * 0000000140A0720E: mov     [rbp+0BE0h+var_AC0], ecx
 * 0000000140A07214: mov     r11d, eax
 * 0000000140A07217: movsxd  rdx, dword ptr [r8]
 * 0000000140A0721A: mov     r9d, r10d
 * 0000000140A0721D: cmp     edx, 2Bh ; '+'
 * 0000000140A07220: ja      short loc_140A07242
 * 0000000140A07222: mov     r10, 80000001002h
 * 0000000140A0722C: bt      r10, rdx
 * 0000000140A07230: jnb     short loc_140A07242
 * 0000000140A07232: mov     rax, [rbp+0BE0h+var_C10]
 * 0000000140A07236: cmp     [r8+8], rax
 * 0000000140A0723A: jnz     short loc_140A07242
 * 0000000140A0723C: cmp     [r8+10h], r12d
 * 0000000140A07240: jz      short loc_140A0726C
 * 0000000140A07242: lea     eax, [rdx-21h]
 * 0000000140A07245: mov     edx, 1
 * 0000000140A0724A: cmp     eax, edx
 * 0000000140A0724C: ja      short loc_140A07259
 * 0000000140A0724E: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A07253: cmp     [r8+20h], r14
 * 0000000140A07257: jz      short loc_140A07271
 * 0000000140A07259: add     r15d, edx
 * 0000000140A0725C: cmp     r15d, [rbx+80Ch]
 * 0000000140A07263: jnb     short loc_140A07276
 * 0000000140A07265: xor     edx, edx
 * 0000000140A07267: jmp     loc_140A07082
 * 0000000140A0726C: xor     r15d, r15d
 * 0000000140A0726F: jmp     short loc_140A0727C
 * 0000000140A07271: xor     r15d, r15d
 * 0000000140A07274: jmp     short loc_140A07281
 * 0000000140A07276: xor     r15d, r15d
 * 0000000140A07279: mov     r8d, r15d
 * 0000000140A0727C: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A07281: mov     [rbp+0BE0h+var_B48], r8
 * 0000000140A07288: test    r8, r8
 * 0000000140A0728B: jnz     loc_140A08C47
 * 0000000140A07291: mov     rax, [rbx+2A8h]
 * 0000000140A07298: mov     rcx, r13
 * 0000000140A0729B: call    KeGuardDispatchICall
 * 0000000140A072A0: mov     ecx, [rbp+0BE0h+var_BDC]
 * 0000000140A072A3: mov     [rbp+0BE0h+var_C58], ecx
 * 0000000140A072A6: mov     [rbp+0BE0h+var_C38], eax
 * 0000000140A072A9: test    eax, eax
 * 0000000140A072AB: jz      loc_140A08C47
 * 0000000140A072B1: test    dword ptr [rbx+990h], 40000000h
 * 0000000140A072BB: jz      short loc_140A072DD
 * 0000000140A072BD: mov     r8d, 0Fh
 * 0000000140A072C3: lea     rcx, [rbp+0BE0h+var_BA8]
 * 0000000140A072C7: mov     rdx, r14
 * 0000000140A072CA: call    sub_140A1BFE4
 * 0000000140A072CF: mov     rsi, [rbp+0BE0h+var_BA8]
 * 0000000140A072D3: mov     ecx, eax
 * 0000000140A072D5: mov     [rbp+0BE0h+var_C18], eax
 * 0000000140A072D8: jmp     loc_140A08C25
 * 0000000140A072DD: mov     rax, [rbx+1F0h]
 * 0000000140A072E4: lea     r9, [rbp+0BE0h+var_BDC]
 * 0000000140A072E8: xor     r8d, r8d
 * 0000000140A072EB: mov     [rbp+0BE0h+var_780], r15
 * 0000000140A072F2: mov     [rbp+0BE0h+var_9A0], r15d
 * 0000000140A072F9: mov     r15, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A072FE: mov     rcx, r15
 * 0000000140A07301: lea     r13d, [r8+1]
 * 0000000140A07305: mov     dl, r13b
 * 0000000140A07308: call    KeGuardDispatchICall
 * 0000000140A0730D: mov     rdx, rax
 * 0000000140A07310: lea     r8d, [r13+0Bh]
 * 0000000140A07314: neg     rax
 * 0000000140A07317: mov     [rbp+0BE0h+var_798], rdx
 * 0000000140A0731E: lea     r9, [rbp+0BE0h+var_BDC]
 * 0000000140A07322: mov     dl, r13b
 * 0000000140A07325: sbb     ecx, ecx
 * 0000000140A07327: and     ecx, [rbp+0BE0h+var_BDC]
 * 0000000140A0732A: mov     [rbp+0BE0h+var_BDC], ecx
 * 0000000140A0732D: mov     rax, [rbx+1F0h]
 * 0000000140A07334: mov     [rbp+0BE0h+var_9AC], ecx
 * 0000000140A0733A: mov     rcx, r15
 * 0000000140A0733D: call    KeGuardDispatchICall
 * 0000000140A07342: mov     rdx, rax
 * 0000000140A07345: mov     [rbp+0BE0h+var_BD8], rax
 * 0000000140A07349: neg     rax
 * 0000000140A0734C: mov     [rbp+0BE0h+var_790], rdx
 * 0000000140A07353: lea     r8d, [r13+9]
 * 0000000140A07357: mov     dl, r13b
 * 0000000140A0735A: sbb     ecx, ecx
 * 0000000140A0735C: lea     r9, [rbp+0BE0h+var_BDC]
 * 0000000140A07360: and     ecx, [rbp+0BE0h+var_BDC]
 * 0000000140A07363: mov     [rbp+0BE0h+var_BDC], ecx
 * 0000000140A07366: mov     rax, [rbx+1F0h]
 * 0000000140A0736D: mov     dword ptr [rbp+0BE0h+arg_8], ecx
 * 0000000140A07373: mov     [rbp+0BE0h+var_9A8], ecx
 * 0000000140A07379: mov     rcx, r15
 * 0000000140A0737C: call    KeGuardDispatchICall
 * 0000000140A07381: mov     rdx, rax
 * 0000000140A07384: neg     rax
 * 0000000140A07387: mov     [rbp+0BE0h+var_788], rdx
 * 0000000140A0738E: sbb     ecx, ecx
 * 0000000140A07390: and     ecx, [rbp+0BE0h+var_BDC]
 * 0000000140A07393: mov     [rbp+0BE0h+var_BDC], ecx
 * 0000000140A07396: mov     rax, [rbx+1F8h]
 * 0000000140A0739D: mov     [rbp+0BE0h+var_9A4], ecx
 * 0000000140A073A3: mov     rcx, r15
 * 0000000140A073A6: call    KeGuardDispatchICall
 * 0000000140A073AB: xor     r12d, r12d
 * 0000000140A073AE: mov     r14, rax
 * 0000000140A073B1: test    rax, rax
 * 0000000140A073B4: jnz     short loc_140A073BE
 * 0000000140A073B6: xor     r15d, r15d
 * 0000000140A073B9: jmp     loc_140A07027
 * 0000000140A073BE: mov     rax, [rbx+498h]
 * 0000000140A073C5: lea     rdx, [rbp+0BE0h+var_8B8]
 * 0000000140A073CC: mov     rcx, r15
 * 0000000140A073CF: call    KeGuardDispatchICall
 * 0000000140A073D4: mov     r8d, [rbx+924h]
 * 0000000140A073DB: mov     [rbp+0BE0h+var_778], rax
 * 0000000140A073E2: mov     eax, [rbp+0BE0h+var_8B8]
 * 0000000140A073E8: mov     [rbp+0BE0h+var_99C], eax
 * 0000000140A073EE: mov     eax, [r14+54h]
 * 0000000140A073F2: mov     [rbp+0BE0h+var_7A0], r15
 * 0000000140A073F9: mov     r15d, [rbx+7E4h]
 * 0000000140A07400: mov     [rbp+0BE0h+var_9B0], eax
 * 0000000140A07406: lea     eax, [r15+120h]
 * 0000000140A0740D: cmp     eax, [rbx+0A1Ch]
 * 0000000140A07413: jbe     loc_140A074FE
 * 0000000140A07419: mov     edx, eax
 * 0000000140A0741B: mov     rcx, rbx
 * 0000000140A0741E: call    sub_140A0EB30
 * 0000000140A07423: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A07427: mov     r14, rax
 * 0000000140A0742A: test    rax, rax
 * 0000000140A0742D: jz      loc_140A074F2
 * 0000000140A07433: mov     ecx, [rbx+990h]
 * 0000000140A07439: test    cl, 4
 * 0000000140A0743C: jnz     loc_140A074E8
 * 0000000140A07442: mov     eax, [rbx+7E4h]
 * 0000000140A07448: and     ecx, 20000000h
 * 0000000140A0744E: mov     r8, [rbx+7C8h]
 * 0000000140A07455: neg     ecx
 * 0000000140A07457: sbb     edx, edx
 * 0000000140A07459: and     edx, [rbx+924h]
 * 0000000140A0745F: cmp     eax, 8
 * 0000000140A07462: jb      short loc_140A07479
 * 0000000140A07464: mov     ecx, eax
 * 0000000140A07466: shr     rcx, 3
 * 0000000140A0746A: mov     [rbx], r12
 * 0000000140A0746D: add     eax, 0FFFFFFF8h
 * 0000000140A07470: add     rbx, 8
 * 0000000140A07474: sub     rcx, r13
 * 0000000140A07477: jnz     short loc_140A0746A
 * 0000000140A07479: test    eax, eax
 * 0000000140A0747B: jz      short loc_140A0748C
 * 0000000140A0747D: mov     ecx, 0FFFFFFFFh
 * 0000000140A07482: mov     [rbx], r12b
 * 0000000140A07485: add     rbx, r13
 * 0000000140A07488: add     eax, ecx
 * 0000000140A0748A: jnz     short loc_140A07482
 * 0000000140A0748C: mov     ebx, [r14+924h]
 * 0000000140A07493: mov     [r14+924h], edx
 * 0000000140A0749A: cmp     edx, 3
 * 0000000140A0749D: jz      short loc_140A074D2
 * 0000000140A0749F: test    dword ptr [r14+990h], 10000000h
 * 0000000140A074AA: mov     ecx, r12d
 * 0000000140A074AD: cmovz   ecx, edx
 * 0000000140A074B0: test    ecx, ecx
 * 0000000140A074B2: jz      short loc_140A074C9
 * 0000000140A074B4: mov     rax, [r14+228h]
 * 0000000140A074BB: lea     rcx, [r8-8]
 * 0000000140A074BF: mov     rdx, [rcx]
 * 0000000140A074C2: call    KeGuardDispatchICall
 * 0000000140A074C7: jmp     short loc_140A074E1
 * 0000000140A074C9: mov     rax, [r14+100h]
 * 0000000140A074D0: jmp     short loc_140A074D9
 * 0000000140A074D2: mov     rax, [r14+368h]
 * 0000000140A074D9: mov     rcx, r8
 * 0000000140A074DC: call    KeGuardDispatchICall
 * 0000000140A074E1: mov     [r14+924h], ebx
 * 0000000140A074E8: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140A074F0: jmp     short loc_140A0750B
 * 0000000140A074F2: xor     r15d, r15d
 * 0000000140A074F5: mov     [rbp+0BE0h+var_BB0], r15
 * 0000000140A074F9: jmp     loc_140A0702E
 * 0000000140A074FE: mov     r14, rbx
 * 0000000140A07501: mov     [rbp+0BE0h+var_C40], rbx
 * 0000000140A07505: mov     [rbx+7E4h], eax
 * 0000000140A0750B: mov     eax, 6
 * 0000000140A07510: lea     r10, [r14+r15]
 * 0000000140A07514: add     [r14+80Ch], eax
 * 0000000140A0751B: lea     r13, [rbp+0BE0h+var_7A0]
 * 0000000140A07522: mov     [rbp+0BE0h+var_978], r10
 * 0000000140A07529: lea     rdi, [rbp+0BE0h+var_9B0]
 * 0000000140A07530: mov     [rbp+0BE0h+var_B48], r10
 * 0000000140A07537: lea     ebx, [rax-5]
 * 0000000140A0753A: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A0753E: mov     r15d, [rdi]
 * 0000000140A07541: mov     rdx, rax
 * 0000000140A07544: mov     rsi, [r13+0]
 * 0000000140A07548: mov     ecx, 30h ; '0'
 * 0000000140A0754D: mov     [rbp+0BE0h+var_BE8], r15d
 * 0000000140A07551: mov     rax, r10
 * 0000000140A07554: mov     [rax], r12
 * 0000000140A07557: add     ecx, 0FFFFFFF8h
 * 0000000140A0755A: add     rax, 8
 * 0000000140A0755E: sub     rdx, rbx
 * 0000000140A07561: jnz     short loc_140A07554
 * 0000000140A07563: test    ecx, ecx
 * 0000000140A07565: jz      short loc_140A07576
 * 0000000140A07567: mov     edx, 0FFFFFFFFh
 * 0000000140A0756C: mov     [rax], r12b
 * 0000000140A0756F: add     rax, rbx
 * 0000000140A07572: add     ecx, edx
 * 0000000140A07574: jnz     short loc_140A0756C
 * 0000000140A07576: mov     dword ptr [r10], 0Bh
 * 0000000140A0757D: lea     rcx, [rsi+r15]
 * 0000000140A07581: mov     [r10+8], rsi
 * 0000000140A07585: mov     r9, rsi
 * 0000000140A07588: mov     [r10+10h], r15d
 * 0000000140A0758C: mov     rax, rsi
 * 0000000140A0758F: add     [r14+828h], r15d
 * 0000000140A07596: mov     r11d, [r14+814h]
 * 0000000140A0759D: mov     r12, [r14+818h]
 * 0000000140A075A4: cmp     rsi, rcx
 * 0000000140A075A7: jnb     short loc_140A075B9
 * 0000000140A075A9: mov     edx, 40h ; '@'
 * 0000000140A075AE: prefetchnta byte ptr [rax]
 * 0000000140A075B1: add     rax, rdx
 * 0000000140A075B4: cmp     rax, rcx
 * 0000000140A075B7: jb      short loc_140A075AE
 * 0000000140A075B9: mov     ebx, r15d
 * 0000000140A075BC: mov     r8, r12
 * 0000000140A075BF: shr     ebx, 7
 * 0000000140A075C2: test    ebx, ebx
 * 0000000140A075C4: jz      short loc_140A07639
 * 0000000140A075C6: mov     r15, 7010008004002001h
 * 0000000140A075D0: mov     edx, 8
 * 0000000140A075D5: lea     r14d, [rdx-7]
 * 0000000140A075D9: mov     rax, [r9]
 * 0000000140A075DC: mov     ecx, r11d
 * 0000000140A075DF: xor     rax, r8
 * 0000000140A075E2: mov     r8, [r9+8]
 * 0000000140A075E6: rol     rax, cl
 * 0000000140A075E9: add     r9, 10h
 * 0000000140A075ED: xor     r8, rax
 * 0000000140A075F0: rol     r8, cl
 * 0000000140A075F3: sub     rdx, r14
 * 0000000140A075F6: jnz     short loc_140A075D9
 * 0000000140A075F8: mov     rcx, r9
 * 0000000140A075FB: sub     rcx, rsi
 * 0000000140A075FE: xor     rcx, r12
 * 0000000140A07601: mov     rax, rcx
 * 0000000140A07604: rol     rax, 11h
 * 0000000140A07608: xor     rcx, rax
 * 0000000140A0760B: mov     rax, r15
 * 0000000140A0760E: mul     rcx
 * 0000000140A07611: mov     [rbp+0BE0h+var_518], rdx
 * 0000000140A07618: xor     edx, eax
 * 0000000140A0761A: xor     r11d, edx
 * 0000000140A0761D: mov     rax, r14
 * 0000000140A07620: and     r11d, 3Fh
 * 0000000140A07624: cmovz   r11d, eax
 * 0000000140A07628: mov     eax, 0FFFFFFFFh
 * 0000000140A0762D: add     ebx, eax
 * 0000000140A0762F: jnz     short loc_140A075D0
 * 0000000140A07631: mov     r14, [rbp+0BE0h+var_C40]
 * 0000000140A07635: mov     r15d, [rbp+0BE0h+var_BE8]
 * 0000000140A07639: mov     edx, r15d
 * 0000000140A0763C: and     edx, 7Fh
 * 0000000140A0763F: cmp     edx, 8
 * 0000000140A07642: jb      short loc_140A07669
 * 0000000140A07644: mov     ebx, edx
 * 0000000140A07646: mov     r14d, 1
 * 0000000140A0764C: shr     rbx, 3
 * 0000000140A07650: xor     r8, [r9]
 * 0000000140A07653: mov     ecx, r11d
 * 0000000140A07656: rol     r8, cl
 * 0000000140A07659: add     r9, 8
 * 0000000140A0765D: add     edx, 0FFFFFFF8h
 * 0000000140A07660: sub     rbx, r14
 * 0000000140A07663: jnz     short loc_140A07650
 * 0000000140A07665: mov     r14, [rbp+0BE0h+var_C40]
 * 0000000140A07669: xor     r12d, r12d
 * 0000000140A0766C: lea     ebx, [r12+1]
 * 0000000140A07671: test    edx, edx
 * 0000000140A07673: jz      short loc_140A07693
 * 0000000140A07675: mov     r12d, 0FFFFFFFFh
 * 0000000140A0767B: movzx   eax, byte ptr [r9]
 * 0000000140A0767F: mov     ecx, r11d
 * 0000000140A07682: xor     r8, rax
 * 0000000140A07685: add     r9, rbx
 * 0000000140A07688: rol     r8, cl
 * 0000000140A0768B: add     edx, r12d
 * 0000000140A0768E: jnz     short loc_140A0767B
 * 0000000140A07690: xor     r12d, r12d
 * 0000000140A07693: mov     rax, r8
 * 0000000140A07696: jmp     short loc_140A0769B
 * 0000000140A07698: xor     r8d, eax
 * 0000000140A0769B: shr     rax, 1Fh
 * 0000000140A0769F: test    rax, rax
 * 0000000140A076A2: jnz     short loc_140A07698
 * 0000000140A076A4: btr     r8d, 1Fh
 * 0000000140A076A9: add     rdi, 4
 * 0000000140A076AD: mov     [r10+14h], r8d
 * 0000000140A076B1: add     r13, 8
 * 0000000140A076B5: add     [r14+828h], r15d
 * 0000000140A076BC: mov     eax, 6
 * 0000000140A076C1: mov     r10, [rbp+0BE0h+var_978]
 * 0000000140A076C8: add     r10, 30h ; '0'
 * 0000000140A076CC: sub     [rbp+0BE0h+var_C30], rbx
 * 0000000140A076D0: mov     [rbp+0BE0h+var_978], r10
 * 0000000140A076D7: jnz     loc_140A0753E
 * 0000000140A076DD: mov     rax, [rbp+0BE0h+var_B48]
 * 0000000140A076E4: mov     ecx, 2
 * 0000000140A076E9: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A076EE: mov     rsi, r14
 * 0000000140A076F1: mov     r8d, [rbp+0BE0h+var_C58]
 * 0000000140A076F5: mov     r9, r13
 * 0000000140A076F8: mov     rdx, [rbp+0BE0h+var_C10]
 * 0000000140A076FC: mov     dword ptr [rax], 2Ch ; ','
 * 0000000140A07702: mov     [rax+18h], r13
 * 0000000140A07706: or      [rax+20h], ecx
 * 0000000140A07709: lea     rax, [rbp+0BE0h+var_A7C]
 * 0000000140A07710: mov     [rsp+0CE0h+var_CA8], rax
 * 0000000140A07715: lea     rax, [rbp+0BE0h+var_B28]
 * 0000000140A0771C: mov     [rsp+0CE0h+var_CB0], rax
 * 0000000140A07721: lea     eax, [rcx+0Dh]
 * 0000000140A07724: mov     dword ptr [rsp+0CE0h+var_CB8], eax
 * 0000000140A07728: lea     rcx, [rbp+0BE0h+var_BB0]
 * 0000000140A0772C: mov     eax, [rbp+0BE0h+var_C38]
 * 0000000140A0772F: mov     dword ptr [rsp+0CE0h+BugCheckParameter4], eax
 * 0000000140A07733: mov     [rbp+0BE0h+var_BB0], r14
 * 0000000140A07737: mov     [rbp+0BE0h+var_BA8], r14
 * 0000000140A0773B: call    sub_140A0E098
 * 0000000140A07740: xor     r15d, r15d
 * 0000000140A07743: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0774A: test    eax, eax
 * 0000000140A0774C: jns     short loc_140A07758
 * 0000000140A0774E: mov     ecx, eax
 * 0000000140A07750: mov     [rbp+0BE0h+var_C18], eax
 * 0000000140A07753: jmp     loc_140A08C25
 * 0000000140A07758: mov     rsi, [rbp+0BE0h+var_BB0]
 * 0000000140A0775C: mov     rcx, [rbp+0BE0h+var_B48]
 * 0000000140A07763: mov     rax, rsi
 * 0000000140A07766: mov     r9d, [rbp+0BE0h+var_A7C]
 * 0000000140A0776D: sub     rax, r14
 * 0000000140A07770: sub     r9d, [rbp+0BE0h+var_B28]
 * 0000000140A07777: add     rcx, rax
 * 0000000140A0777A: mov     ebx, [rbp+0BE0h+var_B28]
 * 0000000140A07780: mov     [rbp+0BE0h+var_B48], rcx
 * 0000000140A07787: add     rbx, r13
 * 0000000140A0778A: mov     [rbp+0BE0h+var_BA8], rsi
 * 0000000140A0778E: lea     r12, [rcx+0C0h]
 * 0000000140A07795: mov     ecx, 30h ; '0'
 * 0000000140A0779A: mov     rax, r12
 * 0000000140A0779D: lea     edx, [rcx-2Ah]
 * 0000000140A077A0: lea     r8d, [rcx-2Fh]
 * 0000000140A077A4: mov     [rax], r15
 * 0000000140A077A7: add     ecx, 0FFFFFFF8h
 * 0000000140A077AA: add     rax, 8
 * 0000000140A077AE: sub     rdx, r8
 * 0000000140A077B1: jnz     short loc_140A077A4
 * 0000000140A077B3: mov     rdx, r8
 * 0000000140A077B6: test    ecx, ecx
 * 0000000140A077B8: jz      short loc_140A077CB
 * 0000000140A077BA: mov     r8d, 0FFFFFFFFh
 * 0000000140A077C0: mov     [rax], r15b
 * 0000000140A077C3: add     rax, rdx
 * 0000000140A077C6: add     ecx, r8d
 * 0000000140A077C9: jnz     short loc_140A077C0
 * 0000000140A077CB: mov     dword ptr [r12], 0Bh
 * 0000000140A077D3: mov     r10, rbx
 * 0000000140A077D6: mov     [r12+8], rbx
 * 0000000140A077DB: mov     rax, rbx
 * 0000000140A077DE: mov     [r12+10h], r9d
 * 0000000140A077E3: add     [rsi+828h], r9d
 * 0000000140A077EA: mov     r11d, [rsi+814h]
 * 0000000140A077F1: mov     r15, [rsi+818h]
 * 0000000140A077F8: mov     ecx, r9d
 * 0000000140A077FB: add     rcx, rbx
 * 0000000140A077FE: cmp     rbx, rcx
 * 0000000140A07801: jnb     short loc_140A07814
 * 0000000140A07803: mov     r8d, 40h ; '@'
 * 0000000140A07809: prefetchnta byte ptr [rax]
 * 0000000140A0780C: add     rax, r8
 * 0000000140A0780F: cmp     rax, rcx
 * 0000000140A07812: jb      short loc_140A07809
 * 0000000140A07814: mov     r14d, r9d
 * 0000000140A07817: mov     r8, r15
 * 0000000140A0781A: shr     r14d, 7
 * 0000000140A0781E: test    r14d, r14d
 * 0000000140A07821: jz      short loc_140A0789B
 * 0000000140A07823: mov     rdi, 7010008004002001h
 * 0000000140A0782D: mov     edx, 8
 * 0000000140A07832: lea     r13d, [rdx-7]
 * 0000000140A07836: mov     rax, [r10]
 * 0000000140A07839: mov     ecx, r11d
 * 0000000140A0783C: xor     rax, r8
 * 0000000140A0783F: mov     r8, [r10+8]
 * 0000000140A07843: rol     rax, cl
 * 0000000140A07846: add     r10, 10h
 * 0000000140A0784A: xor     r8, rax
 * 0000000140A0784D: rol     r8, cl
 * 0000000140A07850: sub     rdx, r13
 * 0000000140A07853: jnz     short loc_140A07836
 * 0000000140A07855: mov     rcx, r10
 * 0000000140A07858: sub     rcx, rbx
 * 0000000140A0785B: xor     rcx, r15
 * 0000000140A0785E: mov     rax, rcx
 * 0000000140A07861: rol     rax, 11h
 * 0000000140A07865: xor     rcx, rax
 * 0000000140A07868: mov     rax, rdi
 * 0000000140A0786B: mul     rcx
 * 0000000140A0786E: mov     [rbp+0BE0h+var_510], rdx
 * 0000000140A07875: xor     edx, eax
 * 0000000140A07877: xor     r11d, edx
 * 0000000140A0787A: mov     eax, 0FFFFFFFFh
 * 0000000140A0787F: and     r11d, 3Fh
 * 0000000140A07883: mov     rdx, r13
 * 0000000140A07886: cmovz   r11d, edx
 * 0000000140A0788A: add     r14d, eax
 * 0000000140A0788D: jnz     short loc_140A0782D
 * 0000000140A0788F: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A07894: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0789B: and     r9d, 7Fh
 * 0000000140A0789F: cmp     r9d, 8
 * 0000000140A078A3: jb      short loc_140A078D2
 * 0000000140A078A5: mov     edx, r9d
 * 0000000140A078A8: mov     r13d, 1
 * 0000000140A078AE: shr     rdx, 3
 * 0000000140A078B2: xor     r8, [r10]
 * 0000000140A078B5: mov     ecx, r11d
 * 0000000140A078B8: rol     r8, cl
 * 0000000140A078BB: add     r10, 8
 * 0000000140A078BF: add     r9d, 0FFFFFFF8h
 * 0000000140A078C3: sub     rdx, r13
 * 0000000140A078C6: jnz     short loc_140A078B2
 * 0000000140A078C8: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A078CD: mov     edx, 1
 * 0000000140A078D2: xor     r15d, r15d
 * 0000000140A078D5: test    r9d, r9d
 * 0000000140A078D8: jz      short loc_140A078F8
 * 0000000140A078DA: mov     r15d, 0FFFFFFFFh
 * 0000000140A078E0: movzx   eax, byte ptr [r10]
 * 0000000140A078E4: mov     ecx, r11d
 * 0000000140A078E7: xor     r8, rax
 * 0000000140A078EA: add     r10, rdx
 * 0000000140A078ED: rol     r8, cl
 * 0000000140A078F0: add     r9d, r15d
 * 0000000140A078F3: jnz     short loc_140A078E0
 * 0000000140A078F5: xor     r15d, r15d
 * 0000000140A078F8: mov     rax, r8
 * 0000000140A078FB: jmp     short loc_140A07900
 * 0000000140A078FD: xor     r8d, eax
 * 0000000140A07900: shr     rax, 1Fh
 * 0000000140A07904: test    rax, rax
 * 0000000140A07907: jnz     short loc_140A078FD
 * 0000000140A07909: btr     r8d, 1Fh
 * 0000000140A0790E: mov     [r12+14h], r8d
 * 0000000140A07913: mov     r12d, 1
 * 0000000140A07919: mov     rax, [rbp+0BE0h+var_B48]
 * 0000000140A07920: mov     dword ptr [rax+0F0h], 30h ; '0'
 * 0000000140A0792A: cmp     [rax+100h], r15d
 * 0000000140A07931: jz      short loc_140A0793A
 * 0000000140A07933: or      [rax+108h], r12d
 * 0000000140A0793A: mov     rax, [rbp+0BE0h+var_B48]
 * 0000000140A07941: add     rax, 60h ; '`'
 * 0000000140A07945: mov     [rbp+0BE0h+var_BA8], rsi
 * 0000000140A07949: mov     [rbp+0BE0h+var_AA0], rax
 * 0000000140A07950: jnz     loc_140A07BF3
 * 0000000140A07956: mov     r14d, [rsi+7E4h]
 * 0000000140A0795D: mov     r8d, [rsi+924h]
 * 0000000140A07964: lea     eax, [r14+30h]
 * 0000000140A07968: cmp     eax, [rsi+0A1Ch]
 * 0000000140A0796E: jbe     loc_140A07A57
 * 0000000140A07974: mov     edx, eax
 * 0000000140A07976: mov     rcx, rsi
 * 0000000140A07979: call    sub_140A0EB30
 * 0000000140A0797E: mov     rbx, rax
 * 0000000140A07981: test    rax, rax
 * 0000000140A07984: jz      loc_140A07A44
 * 0000000140A0798A: mov     ecx, [rsi+990h]
 * 0000000140A07990: test    cl, 4
 * 0000000140A07993: jnz     loc_140A07A3B
 * 0000000140A07999: mov     eax, [rsi+7E4h]
 * 0000000140A0799F: and     ecx, 20000000h
 * 0000000140A079A5: mov     r8, [rsi+7C8h]
 * 0000000140A079AC: neg     ecx
 * 0000000140A079AE: sbb     edx, edx
 * 0000000140A079B0: and     edx, [rsi+924h]
 * 0000000140A079B6: cmp     eax, 8
 * 0000000140A079B9: jb      short loc_140A079D0
 * 0000000140A079BB: mov     ecx, eax
 * 0000000140A079BD: shr     rcx, 3
 * 0000000140A079C1: mov     [rsi], r15
 * 0000000140A079C4: add     eax, 0FFFFFFF8h
 * 0000000140A079C7: add     rsi, 8
 * 0000000140A079CB: sub     rcx, r12
 * 0000000140A079CE: jnz     short loc_140A079C1
 * 0000000140A079D0: test    eax, eax
 * 0000000140A079D2: jz      short loc_140A079E3
 * 0000000140A079D4: mov     ecx, 0FFFFFFFFh
 * 0000000140A079D9: mov     [rsi], r15b
 * 0000000140A079DC: add     rsi, r12
 * 0000000140A079DF: add     eax, ecx
 * 0000000140A079E1: jnz     short loc_140A079D9
 * 0000000140A079E3: mov     esi, [rbx+924h]
 * 0000000140A079E9: mov     [rbx+924h], edx
 * 0000000140A079EF: cmp     edx, 3
 * 0000000140A079F2: jz      short loc_140A07A26
 * 0000000140A079F4: test    dword ptr [rbx+990h], 10000000h
 * 0000000140A079FE: mov     ecx, r15d
 * 0000000140A07A01: cmovz   ecx, edx
 * 0000000140A07A04: test    ecx, ecx
 * 0000000140A07A06: jz      short loc_140A07A1D
 * 0000000140A07A08: mov     rax, [rbx+228h]
 * 0000000140A07A0F: lea     rcx, [r8-8]
 * 0000000140A07A13: mov     rdx, [rcx]
 * 0000000140A07A16: call    KeGuardDispatchICall
 * 0000000140A07A1B: jmp     short loc_140A07A35
 * 0000000140A07A1D: mov     rax, [rbx+100h]
 * 0000000140A07A24: jmp     short loc_140A07A2D
 * 0000000140A07A26: mov     rax, [rbx+368h]
 * 0000000140A07A2D: mov     rcx, r8
 * 0000000140A07A30: call    KeGuardDispatchICall
 * 0000000140A07A35: mov     [rbx+924h], esi
 * 0000000140A07A3B: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140A07A42: jmp     short loc_140A07A60
 * 0000000140A07A44: mov     [rbp+0BE0h+var_BB0], r15
 * 0000000140A07A48: mov     rbx, rsi
 * 0000000140A07A4B: mov     [rbp+0BE0h+var_C18], 0C000009Ah
 * 0000000140A07A52: jmp     loc_140A0702E
 * 0000000140A07A57: mov     rbx, rsi
 * 0000000140A07A5A: mov     [rsi+7E4h], eax
 * 0000000140A07A60: add     [rbx+80Ch], r12d
 * 0000000140A07A67: lea     rsi, [rbx+r14]
 * 0000000140A07A6B: mov     ecx, 30h ; '0'
 * 0000000140A07A70: mov     [rbp+0BE0h+var_8B0], rsi
 * 0000000140A07A77: mov     rax, rsi
 * 0000000140A07A7A: lea     edx, [rcx-2Ah]
 * 0000000140A07A7D: mov     [rax], r15
 * 0000000140A07A80: add     ecx, 0FFFFFFF8h
 * 0000000140A07A83: add     rax, 8
 * 0000000140A07A87: sub     rdx, r12
 * 0000000140A07A8A: jnz     short loc_140A07A7D
 * 0000000140A07A8C: test    ecx, ecx
 * 0000000140A07A8E: jz      short loc_140A07A9F
 * 0000000140A07A90: mov     edx, 0FFFFFFFFh
 * 0000000140A07A95: mov     [rax], r15b
 * 0000000140A07A98: add     rax, r12
 * 0000000140A07A9B: add     ecx, edx
 * 0000000140A07A9D: jnz     short loc_140A07A95
 * 0000000140A07A9F: mov     r12, [rbp+0BE0h+var_BD8]
 * 0000000140A07AA3: mov     r15d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A07AAA: mov     r9, r12
 * 0000000140A07AAD: mov     dword ptr [rsi], 0Eh
 * 0000000140A07AB3: mov     [rsi+8], r12
 * 0000000140A07AB7: mov     [rsi+10h], r15d
 * 0000000140A07ABB: add     [rbx+828h], r15d
 * 0000000140A07AC2: lea     rcx, [r12+r15]
 * 0000000140A07AC6: mov     r10d, [rbx+814h]
 * 0000000140A07ACD: mov     r14, [rbx+818h]
 * 0000000140A07AD4: cmp     r12, rcx
 * 0000000140A07AD7: jnb     short loc_140A07AEC
 * 0000000140A07AD9: mov     rax, r12
 * 0000000140A07ADC: mov     edx, 40h ; '@'
 * 0000000140A07AE1: prefetchnta byte ptr [rax]
 * 0000000140A07AE4: add     rax, rdx
 * 0000000140A07AE7: cmp     rax, rcx
 * 0000000140A07AEA: jb      short loc_140A07AE1
 * 0000000140A07AEC: mov     r11d, r15d
 * 0000000140A07AEF: mov     r8, r14
 * 0000000140A07AF2: shr     r11d, 7
 * 0000000140A07AF6: test    r11d, r11d
 * 0000000140A07AF9: jz      short loc_140A07B74
 * 0000000140A07AFB: mov     rdi, 7010008004002001h
 * 0000000140A07B05: mov     r13d, 1
 * 0000000140A07B0B: mov     r15d, 0FFFFFFFFh
 * 0000000140A07B11: mov     eax, 8
 * 0000000140A07B16: xor     r8, [r9]
 * 0000000140A07B19: mov     ecx, r10d
 * 0000000140A07B1C: rol     r8, cl
 * 0000000140A07B1F: xor     r8, [r9+8]
 * 0000000140A07B23: add     r9, 10h
 * 0000000140A07B27: rol     r8, cl
 * 0000000140A07B2A: sub     rax, r13
 * 0000000140A07B2D: jnz     short loc_140A07B16
 * 0000000140A07B2F: mov     rcx, r9
 * 0000000140A07B32: sub     rcx, r12
 * 0000000140A07B35: xor     rcx, r14
 * 0000000140A07B38: mov     rax, rcx
 * 0000000140A07B3B: rol     rax, 11h
 * 0000000140A07B3F: xor     rcx, rax
 * 0000000140A07B42: mov     rax, rdi
 * 0000000140A07B45: mul     rcx
 * 0000000140A07B48: mov     [rbp+0BE0h+var_508], rdx
 * 0000000140A07B4F: xor     edx, eax
 * 0000000140A07B51: xor     r10d, edx
 * 0000000140A07B54: and     r10d, 3Fh
 * 0000000140A07B58: cmovz   r10d, r13d
 * 0000000140A07B5C: add     r11d, r15d
 * 0000000140A07B5F: jnz     short loc_140A07B11
 * 0000000140A07B61: mov     r15d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A07B68: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A07B6F: mov     r13, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A07B74: mov     edx, r15d
 * 0000000140A07B77: mov     r14d, 1
 * 0000000140A07B7D: and     edx, 7Fh
 * 0000000140A07B80: cmp     edx, 8
 * 0000000140A07B83: jb      short loc_140A07BA0
 * 0000000140A07B85: mov     eax, edx
 * 0000000140A07B87: shr     rax, 3
 * 0000000140A07B8B: xor     r8, [r9]
 * 0000000140A07B8E: mov     ecx, r10d
 * 0000000140A07B91: rol     r8, cl
 * 0000000140A07B94: add     r9, 8
 * 0000000140A07B98: add     edx, 0FFFFFFF8h
 * 0000000140A07B9B: sub     rax, r14
 * 0000000140A07B9E: jnz     short loc_140A07B8B
 * 0000000140A07BA0: test    edx, edx
 * 0000000140A07BA2: jz      short loc_140A07BBF
 * 0000000140A07BA4: mov     r11d, 0FFFFFFFFh
 * 0000000140A07BAA: movzx   eax, byte ptr [r9]
 * 0000000140A07BAE: mov     ecx, r10d
 * 0000000140A07BB1: xor     r8, rax
 * 0000000140A07BB4: add     r9, r14
 * 0000000140A07BB7: rol     r8, cl
 * 0000000140A07BBA: add     edx, r11d
 * 0000000140A07BBD: jnz     short loc_140A07BAA
 * 0000000140A07BBF: mov     rax, r8
 * 0000000140A07BC2: jmp     short loc_140A07BC7
 * 0000000140A07BC4: xor     r8d, eax
 * 0000000140A07BC7: shr     rax, 1Fh
 * 0000000140A07BCB: test    rax, rax
 * 0000000140A07BCE: jnz     short loc_140A07BC4
 * 0000000140A07BD0: btr     r8d, 1Fh
 * 0000000140A07BD5: mov     [rsi+14h], r8d
 * 0000000140A07BD9: mov     rsi, rbx
 * 0000000140A07BDC: mov     rax, [rbp+0BE0h+var_8B0]
 * 0000000140A07BE3: mov     [rbp+0BE0h+var_AA0], rax
 * 0000000140A07BEA: add     [rbx+828h], r15d
 * 0000000140A07BF1: jmp     short loc_140A07C04
 * 0000000140A07BF3: mov     r15d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A07BFA: mov     r12, [rbp+0BE0h+var_BD8]
 * 0000000140A07BFE: mov     dword ptr [rax], 0Eh
 * 0000000140A07C04: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A07C0E: jz      short loc_140A07C2E
 * 0000000140A07C10: test    r15d, r15d
 * 0000000140A07C13: jz      short loc_140A07C2E
 * 0000000140A07C15: mov     r9, [rbp+0BE0h+var_AA0]
 * 0000000140A07C1C: mov     r8d, r15d
 * 0000000140A07C1F: add     r9, 1Ch
 * 0000000140A07C23: mov     rdx, r12
 * 0000000140A07C26: mov     rcx, rsi
 * 0000000140A07C29: call    sub_1403EA48C
 * 0000000140A07C2E: mov     rax, [rbp+0BE0h+var_AA0]
 * 0000000140A07C35: xor     r15d, r15d
 * 0000000140A07C38: mov     [rbp+0BE0h+var_BA8], rsi
 * 0000000140A07C3C: mov     [rax+18h], r15d
 * 0000000140A07C40: lea     ecx, [r15+1]
 * 0000000140A07C44: mov     rax, [rbp+0BE0h+var_AA0]
 * 0000000140A07C4B: or      [rax+18h], ecx
 * 0000000140A07C4E: mov     rbx, [rbp+0BE0h+var_B48]
 * 0000000140A07C55: mov     dword ptr [rbx+90h], 23h ; '#'
 * 0000000140A07C5F: or      [rbx+0B8h], ecx
 * 0000000140A07C65: cmp     dword ptr [rbx+0A0h], 94h
 * 0000000140A07C6F: jb      short loc_140A07CE5
 * 0000000140A07C71: mov     rax, [rsi+1F8h]
 * 0000000140A07C78: mov     rcx, r13
 * 0000000140A07C7B: mov     r14, [rbx+98h]
 * 0000000140A07C82: call    KeGuardDispatchICall
 * 0000000140A07C87: test    rax, rax
 * 0000000140A07C8A: jz      loc_140A07A44
 * 0000000140A07C90: mov     ecx, [rax+50h]
 * 0000000140A07C93: lea     eax, [r15+2]
 * 0000000140A07C97: or      [rbx+0B8h], eax
 * 0000000140A07C9D: add     rcx, r13
 * 0000000140A07CA0: mov     rax, [r14+70h]
 * 0000000140A07CA4: cmp     rax, r13
 * 0000000140A07CA7: jb      short loc_140A07CBF
 * 0000000140A07CA9: cmp     rax, rcx
 * 0000000140A07CAC: jnb     short loc_140A07CBF
 * 0000000140A07CAE: mov     rax, [rax]
 * 0000000140A07CB1: mov     [rbx+0A8h], rax
 * 0000000140A07CB8: or      dword ptr [rbx+0B8h], 4
 * 0000000140A07CBF: mov     rax, [r14+78h]
 * 0000000140A07CC3: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A07CC8: cmp     rax, r14
 * 0000000140A07CCB: jb      short loc_140A07CEA
 * 0000000140A07CCD: cmp     rax, rcx
 * 0000000140A07CD0: jnb     short loc_140A07CEA
 * 0000000140A07CD2: mov     rax, [rax]
 * 0000000140A07CD5: mov     [rbx+0B0h], rax
 * 0000000140A07CDC: or      dword ptr [rbx+0B8h], 8
 * 0000000140A07CE3: jmp     short loc_140A07CEA
 * 0000000140A07CE5: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A07CEA: test    dword ptr [rsi+990h], 400000h
 * 0000000140A07CF4: mov     [rbp+0BE0h+var_BB0], rsi
 * 0000000140A07CF8: jz      loc_140A08C1B
 * 0000000140A07CFE: mov     rax, [rsi+1F8h]
 * 0000000140A07D05: mov     rcx, r14
 * 0000000140A07D08: call    KeGuardDispatchICall
 * 0000000140A07D0D: xor     r11d, r11d
 * 0000000140A07D10: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A07D15: mov     r15, rax
 * 0000000140A07D18: test    rax, rax
 * 0000000140A07D1B: jnz     short loc_140A07D2A
 * 0000000140A07D1D: mov     ecx, 0C000007Bh
 * 0000000140A07D22: xor     r15d, r15d
 * 0000000140A07D25: jmp     loc_140A08C22
 * 0000000140A07D2A: movzx   r10d, word ptr [r15+6]
 * 0000000140A07D2F: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A07D39: mov     r12d, [rbp+0BE0h+var_C58]
 * 0000000140A07D3D: mul     r12
 * 0000000140A07D40: mov     word ptr [rbp+0BE0h+arg_8], r10w
 * 0000000140A07D48: mov     r9, rdx
 * 0000000140A07D4B: shr     r9, 3
 * 0000000140A07D4F: mov     [rbp+0BE0h+var_C40], r9
 * 0000000140A07D53: test    r10w, r10w
 * 0000000140A07D57: jnz     short loc_140A07DC0
 * 0000000140A07D59: test    dword ptr [rsi+990h], 200000h
 * 0000000140A07D63: jz      loc_140A0BBC6
 * 0000000140A07D69: xor     r15d, r15d
 * 0000000140A07D6C: cmp     [rsi+8F8h], r15d
 * 0000000140A07D73: jnz     short loc_140A07DB6
 * 0000000140A07D75: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A07D7F: add     rax, rsi
 * 0000000140A07D82: mov     [rsi+900h], rax
 * 0000000140A07D89: lea     eax, [r15+1]
 * 0000000140A07D8D: mov     [rsi+908h], r15
 * 0000000140A07D94: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140A07D9F: mov     [rsi+918h], r14
 * 0000000140A07DA6: mov     [rsi+8F8h], eax
 * 0000000140A07DAC: xor     edx, edx
 * 0000000140A07DAE: mov     rcx, rsi
 * 0000000140A07DB1: call    $$b8
 * 0000000140A07DB6: mov     ecx, 0C000007Bh
 * 0000000140A07DBB: jmp     loc_140A08C22
 * 0000000140A07DC0: mov     rdx, [rbp+0BE0h+var_C10]
 * 0000000140A07DC4: lea     r8, [r15+18h]
 * 0000000140A07DC8: mov     eax, r9d
 * 0000000140A07DCB: mov     ecx, r11d
 * 0000000140A07DCE: mov     rbx, rdx
 * 0000000140A07DD1: mov     [rsp+0CE0h+var_C78], ecx
 * 0000000140A07DD5: lea     r13, [rax+rax*2]
 * 0000000140A07DD9: shl     r13, 2
 * 0000000140A07DDD: mov     [rbp+0BE0h+var_C30], r13
 * 0000000140A07DE1: lea     rax, [rdx+r13]
 * 0000000140A07DE5: mov     [rbp+0BE0h+var_C48], rax
 * 0000000140A07DE9: movzx   eax, word ptr [r15+14h]
 * 0000000140A07DEE: mov     r11, [rbp+0BE0h+var_C48]
 * 0000000140A07DF2: add     r8, rax
 * 0000000140A07DF5: movzx   eax, r10w
 * 0000000140A07DF9: mov     [rbp+0BE0h+var_C50], r8
 * 0000000140A07DFD: test    eax, eax
 * 0000000140A07DFF: jz      loc_140A08030
 * 0000000140A07E05: xor     r9d, r9d
 * 0000000140A07E08: lea     r12, [r8+8]
 * 0000000140A07E0C: lea     r13d, [r9+1]
 * 0000000140A07E10: mov     r15d, [r12+8]
 * 0000000140A07E15: mov     eax, [r12]
 * 0000000140A07E19: cmp     r15d, eax
 * 0000000140A07E1C: mov     edx, [r12+4]
 * 0000000140A07E21: cmovbe  r15d, eax
 * 0000000140A07E25: mov     [rbp+0BE0h+var_C28], edx
 * 0000000140A07E28: add     r15d, edx
 * 0000000140A07E2B: test    ecx, ecx
 * 0000000140A07E2D: jz      short loc_140A07E45
 * 0000000140A07E2F: lea     eax, [rcx-1]
 * 0000000140A07E32: lea     rax, [rax+rax*4]
 * 0000000140A07E36: cmp     r15d, [r8+rax*8+0Ch]
 * 0000000140A07E3B: jb      loc_140A0804E
 * 0000000140A07E41: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A07E45: cmp     rbx, r11
 * 0000000140A07E48: jz      loc_140A08008
 * 0000000140A07E4E: mov     ecx, [rbx]
 * 0000000140A07E50: mov     eax, [rbx+4]
 * 0000000140A07E53: cmp     ecx, r15d
 * 0000000140A07E56: jnb     loc_140A07FEE
 * 0000000140A07E5C: cmp     eax, edx
 * 0000000140A07E5E: jbe     loc_140A07FEE
 * 0000000140A07E64: cmp     ecx, edx
 * 0000000140A07E66: jb      loc_140A080A7
 * 0000000140A07E6C: cmp     eax, r15d
 * 0000000140A07E6F: ja      loc_140A080A7
 * 0000000140A07E75: mov     eax, [rbx+8]
 * 0000000140A07E78: mov     ecx, 1
 * 0000000140A07E7D: test    cl, al
 * 0000000140A07E7F: jnz     short loc_140A07E8D
 * 0000000140A07E81: mov     al, [rax+r14]
 * 0000000140A07E85: test    al, 20h
 * 0000000140A07E87: jz      loc_140A07FE0
 * 0000000140A07E8D: mov     eax, [r12]
 * 0000000140A07E91: mov     ecx, [r12+4]
 * 0000000140A07E96: mov     r14d, [r12+8]
 * 0000000140A07E9B: cmp     r14d, eax
 * 0000000140A07E9E: mov     rdx, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A07EA3: cmovbe  r14d, eax
 * 0000000140A07EA7: mov     [rbp+0BE0h+var_C38], ecx
 * 0000000140A07EAA: mov     rax, [rsi+418h]
 * 0000000140A07EB1: add     r14d, ecx
 * 0000000140A07EB4: mov     rcx, rbx
 * 0000000140A07EB7: call    KeGuardDispatchICall
 * 0000000140A07EBC: mov     r13, rax
 * 0000000140A07EBF: mov     eax, [rbp+0BE0h+var_C38]
 * 0000000140A07EC2: cmp     [r13+0], eax
 * 0000000140A07EC6: jb      short loc_140A07ECE
 * 0000000140A07EC8: cmp     [r13+4], r14d
 * 0000000140A07ECC: jbe     short loc_140A07F3A
 * 0000000140A07ECE: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A07ED3: mov     edx, r13d
 * 0000000140A07ED6: sub     edx, r8d
 * 0000000140A07ED9: mov     eax, 80000000h
 * 0000000140A07EDE: or      edx, eax
 * 0000000140A07EE0: test    dword ptr [rsi+990h], 200000h
 * 0000000140A07EEA: jz      loc_140A0BC82
 * 0000000140A07EF0: xor     ecx, ecx
 * 0000000140A07EF2: cmp     [rsi+8F8h], ecx
 * 0000000140A07EF8: jnz     short loc_140A07F3A
 * 0000000140A07EFA: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A07F04: xor     edx, edx
 * 0000000140A07F06: add     rax, rsi
 * 0000000140A07F09: mov     [rsi+900h], rax
 * 0000000140A07F10: lea     eax, [rcx+1]
 * 0000000140A07F13: mov     [rsi+908h], rcx
 * 0000000140A07F1A: mov     rcx, rsi
 * 0000000140A07F1D: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140A07F28: mov     [rsi+918h], r8
 * 0000000140A07F2F: mov     [rsi+8F8h], eax
 * 0000000140A07F35: call    $$b8
 * 0000000140A07F3A: mov     r8d, [r13+0]
 * 0000000140A07F3E: mov     rcx, r13
 * 0000000140A07F41: add     r8, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A07F46: mov     rax, [rsi+420h]
 * 0000000140A07F4D: mov     rdx, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A07F52: call    KeGuardDispatchICall
 * 0000000140A07F57: mov     rdx, rax
 * 0000000140A07F5A: mov     eax, [rbp+0BE0h+var_C38]
 * 0000000140A07F5D: cmp     [rdx], eax
 * 0000000140A07F5F: jb      short loc_140A07F67
 * 0000000140A07F61: cmp     [rdx+4], r14d
 * 0000000140A07F65: jbe     short loc_140A07FD5
 * 0000000140A07F67: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A07F6C: mov     eax, 80000000h
 * 0000000140A07F71: sub     edx, r14d
 * 0000000140A07F74: or      edx, eax
 * 0000000140A07F76: test    dword ptr [rsi+990h], 200000h
 * 0000000140A07F80: jz      loc_140A0BC53
 * 0000000140A07F86: xor     r9d, r9d
 * 0000000140A07F89: cmp     [rsi+8F8h], r9d
 * 0000000140A07F90: jnz     short loc_140A07FDD
 * 0000000140A07F92: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A07F9C: xor     edx, edx
 * 0000000140A07F9E: add     rax, rsi
 * 0000000140A07FA1: mov     rcx, rsi
 * 0000000140A07FA4: mov     [rsi+900h], rax
 * 0000000140A07FAB: lea     eax, [r9+1]
 * 0000000140A07FAF: mov     [rsi+908h], r9
 * 0000000140A07FB6: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140A07FC1: mov     [rsi+918h], r14
 * 0000000140A07FC8: mov     [rsi+8F8h], eax
 * 0000000140A07FCE: call    $$b8
 * 0000000140A07FD3: jmp     short loc_140A07FDA
 * 0000000140A07FD5: mov     r14, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A07FDA: xor     r9d, r9d
 * 0000000140A07FDD: mov     edx, [rbp+0BE0h+var_C28]
 * 0000000140A07FE0: add     rbx, 0Ch
 * 0000000140A07FE4: cmp     rbx, [rbp+0BE0h+var_C48]
 * 0000000140A07FE8: jnz     loc_140A07E4E
 * 0000000140A07FEE: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A07FF2: mov     r13d, 1
 * 0000000140A07FF8: movzx   r10d, word ptr [rbp+0BE0h+arg_8]
 * 0000000140A08000: mov     r8, [rbp+0BE0h+var_C50]
 * 0000000140A08004: mov     r11, [rbp+0BE0h+var_C48]
 * 0000000140A08008: add     ecx, r13d
 * 0000000140A0800B: movzx   eax, r10w
 * 0000000140A0800F: add     r12, 28h ; '('
 * 0000000140A08013: mov     [rsp+0CE0h+var_C78], ecx
 * 0000000140A08017: cmp     ecx, eax
 * 0000000140A08019: jb      loc_140A07E10
 * 0000000140A0801F: mov     r9, [rbp+0BE0h+var_C40]
 * 0000000140A08023: mov     r15, [rsp+0CE0h+var_C70]
 * 0000000140A08028: mov     r13, [rbp+0BE0h+var_C30]
 * 0000000140A0802C: mov     r12d, [rbp+0BE0h+var_C58]
 * 0000000140A08030: cmp     rbx, r11
 * 0000000140A08033: jz      loc_140A080BC
 * 0000000140A08039: test    dword ptr [rsi+990h], 200000h
 * 0000000140A08043: jz      loc_140A0BBF4
 * 0000000140A08049: jmp     loc_140A07D69
 * 0000000140A0804E: test    dword ptr [rsi+990h], 200000h
 * 0000000140A08058: jz      loc_140A0BC24
 * 0000000140A0805E: xor     r15d, r15d
 * 0000000140A08061: cmp     [rsi+8F8h], r15d
 * 0000000140A08068: jnz     loc_140A07DB6
 * 0000000140A0806E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A08078: add     rax, rsi
 * 0000000140A0807B: mov     [rsi+900h], rax
 * 0000000140A08082: mov     [rsi+908h], r15
 * 0000000140A08089: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140A08094: mov     [rsi+918h], r14
 * 0000000140A0809B: mov     [rsi+8F8h], r13d
 * 0000000140A080A2: jmp     loc_140A07DAC
 * 0000000140A080A7: test    dword ptr [rsi+990h], 200000h
 * 0000000140A080B1: jz      loc_140A0BCAE
 * 0000000140A080B7: jmp     loc_140A07D69
 * 0000000140A080BC: xor     r11d, r11d
 * 0000000140A080BF: test    r9d, r9d
 * 0000000140A080C2: jz      short loc_140A080CD
 * 0000000140A080C4: lea     ecx, [r9+6]
 * 0000000140A080C8: and     ecx, 0FFFFFFF8h
 * 0000000140A080CB: jmp     short loc_140A080D0
 * 0000000140A080CD: mov     ecx, r11d
 * 0000000140A080D0: mov     r14d, [rsi+7E4h]
 * 0000000140A080D7: lea     eax, [rax+rax*2]
 * 0000000140A080DA: mov     r8d, [rsi+924h]
 * 0000000140A080E1: lea     eax, [rax+6]
 * 0000000140A080E4: lea     eax, [rcx+rax*8]
 * 0000000140A080E7: add     eax, r14d
 * 0000000140A080EA: cmp     eax, [rsi+0A1Ch]
 * 0000000140A080F0: jbe     loc_140A081EA
 * 0000000140A080F6: mov     edx, eax
 * 0000000140A080F8: mov     rcx, rsi
 * 0000000140A080FB: call    sub_140A0EB30
 * 0000000140A08100: xor     r11d, r11d
 * 0000000140A08103: mov     [rbp+0BE0h+var_C30], rax
 * 0000000140A08107: mov     rbx, rax
 * 0000000140A0810A: test    rax, rax
 * 0000000140A0810D: jz      loc_140A081E0
 * 0000000140A08113: mov     ecx, [rsi+990h]
 * 0000000140A08119: test    cl, 4
 * 0000000140A0811C: jnz     loc_140A081CB
 * 0000000140A08122: mov     eax, [rsi+7E4h]
 * 0000000140A08128: lea     r9d, [r11+1]
 * 0000000140A0812C: mov     r8, [rsi+7C8h]
 * 0000000140A08133: and     ecx, 20000000h
 * 0000000140A08139: neg     ecx
 * 0000000140A0813B: sbb     edx, edx
 * 0000000140A0813D: and     edx, [rsi+924h]
 * 0000000140A08143: cmp     eax, 8
 * 0000000140A08146: jb      short loc_140A0815D
 * 0000000140A08148: mov     ecx, eax
 * 0000000140A0814A: shr     rcx, 3
 * 0000000140A0814E: mov     [rsi], r11
 * 0000000140A08151: add     eax, 0FFFFFFF8h
 * 0000000140A08154: add     rsi, 8
 * 0000000140A08158: sub     rcx, r9
 * 0000000140A0815B: jnz     short loc_140A0814E
 * 0000000140A0815D: test    eax, eax
 * 0000000140A0815F: jz      short loc_140A08170
 * 0000000140A08161: mov     ecx, 0FFFFFFFFh
 * 0000000140A08166: mov     [rsi], r11b
 * 0000000140A08169: add     rsi, r9
 * 0000000140A0816C: add     eax, ecx
 * 0000000140A0816E: jnz     short loc_140A08166
 * 0000000140A08170: mov     esi, [rbx+924h]
 * 0000000140A08176: mov     [rbx+924h], edx
 * 0000000140A0817C: cmp     edx, 3
 * 0000000140A0817F: jz      short loc_140A081B3
 * 0000000140A08181: test    dword ptr [rbx+990h], 10000000h
 * 0000000140A0818B: mov     ecx, r11d
 * 0000000140A0818E: cmovz   ecx, edx
 * 0000000140A08191: test    ecx, ecx
 * 0000000140A08193: jz      short loc_140A081AA
 * 0000000140A08195: mov     rax, [rbx+228h]
 * 0000000140A0819C: lea     rcx, [r8-8]
 * 0000000140A081A0: mov     rdx, [rcx]
 * 0000000140A081A3: call    KeGuardDispatchICall
 * 0000000140A081A8: jmp     short loc_140A081C2
 * 0000000140A081AA: mov     rax, [rbx+100h]
 * 0000000140A081B1: jmp     short loc_140A081BA
 * 0000000140A081B3: mov     rax, [rbx+368h]
 * 0000000140A081BA: mov     rcx, r8
 * 0000000140A081BD: call    KeGuardDispatchICall
 * 0000000140A081C2: mov     [rbx+924h], esi
 * 0000000140A081C8: xor     r11d, r11d
 * 0000000140A081CB: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140A081D2: mov     r9, [rbp+0BE0h+var_C40]
 * 0000000140A081D6: movzx   r10d, word ptr [rbp+0BE0h+arg_8]
 * 0000000140A081DE: jmp     short loc_140A081F7
 * 0000000140A081E0: mov     ecx, 0C000009Ah
 * 0000000140A081E5: jmp     loc_140A07D22
 * 0000000140A081EA: mov     rbx, rsi
 * 0000000140A081ED: mov     [rsi+7E4h], eax
 * 0000000140A081F3: mov     [rbp+0BE0h+var_C30], rbx
 * 0000000140A081F7: mov     esi, 1
 * 0000000140A081FC: lea     rcx, [rbx+r14]
 * 0000000140A08200: add     [rbx+80Ch], esi
 * 0000000140A08206: mov     rax, rcx
 * 0000000140A08209: mov     [rbp+0BE0h+var_8A8], rcx
 * 0000000140A08210: lea     edx, [rsi+2Fh]
 * 0000000140A08213: lea     r8d, [rsi+5]
 * 0000000140A08217: mov     [rax], r11
 * 0000000140A0821A: add     edx, 0FFFFFFF8h
 * 0000000140A0821D: add     rax, 8
 * 0000000140A08221: sub     r8, rsi
 * 0000000140A08224: jnz     short loc_140A08217
 * 0000000140A08226: test    edx, edx
 * 0000000140A08228: jz      short loc_140A0823B
 * 0000000140A0822A: mov     r8d, 0FFFFFFFFh
 * 0000000140A08230: mov     [rax], r11b
 * 0000000140A08233: add     rax, rsi
 * 0000000140A08236: add     edx, r8d
 * 0000000140A08239: jnz     short loc_140A08230
 * 0000000140A0823B: mov     rax, [rbp+0BE0h+var_C10]
 * 0000000140A0823F: mov     dword ptr [rcx], 1Eh
 * 0000000140A08245: mov     [rcx+8], rax
 * 0000000140A08249: mov     [rcx+10h], r11d
 * 0000000140A0824D: mov     rdx, [rbx+818h]
 * 0000000140A08254: mov     rax, rdx
 * 0000000140A08257: jmp     short loc_140A0825B
 * 0000000140A08259: xor     edx, eax
 * 0000000140A0825B: shr     rax, 1Fh
 * 0000000140A0825F: test    rax, rax
 * 0000000140A08262: jnz     short loc_140A08259
 * 0000000140A08264: mov     r8, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A08269: btr     edx, 1Fh
 * 0000000140A0826D: mov     [rcx+14h], edx
 * 0000000140A08270: mov     rsi, rbx
 * 0000000140A08273: mov     rax, [rbp+0BE0h+var_8A8]
 * 0000000140A0827A: mov     [rbp+0BE0h+var_AF0], rax
 * 0000000140A08281: mov     [rbp+0BE0h+var_BB0], rbx
 * 0000000140A08285: mov     [rax+18h], r8
 * 0000000140A08289: mov     ecx, [r15+50h]
 * 0000000140A0828D: xor     r15d, r15d
 * 0000000140A08290: mov     rax, [rbp+0BE0h+var_AF0]
 * 0000000140A08297: mov     [rax+20h], ecx
 * 0000000140A0829A: mov     ecx, 1
 * 0000000140A0829F: mov     rax, [rbp+0BE0h+var_AF0]
 * 0000000140A082A6: mov     [rax+24h], r12d
 * 0000000140A082AA: mov     rax, [rbp+0BE0h+var_AF0]
 * 0000000140A082B1: mov     [rax+28h], r10w
 * 0000000140A082B6: mov     rax, [rbp+0BE0h+var_AF0]
 * 0000000140A082BD: or      [rax+2Ah], cx
 * 0000000140A082C1: mov     rcx, [rbp+0BE0h+var_AF0]
 * 0000000140A082C8: lea     rdx, [rcx+30h]
 * 0000000140A082CC: mov     [rsp+0CE0h+var_C88], rdx
 * 0000000140A082D1: test    r9d, r9d
 * 0000000140A082D4: jz      short loc_140A082E7
 * 0000000140A082D6: lea     r12d, [r9-1]
 * 0000000140A082DA: add     r12, 7
 * 0000000140A082DE: and     r12, 0FFFFFFFFFFFFFFF8h
 * 0000000140A082E2: add     r12, rdx
 * 0000000140A082E5: jmp     short loc_140A082EA
 * 0000000140A082E7: mov     r12, rdx
 * 0000000140A082EA: movzx   eax, word ptr [rcx+28h]
 * 0000000140A082EE: test    r9d, r9d
 * 0000000140A082F1: mov     r14d, 0Ch
 * 0000000140A082F7: mov     [rbp+0BE0h+var_C60], r12
 * 0000000140A082FB: cmovz   r14, r13
 * 0000000140A082FF: mov     r9d, 1
 * 0000000140A08305: mov     r13, [rbp+0BE0h+var_C10]
 * 0000000140A08309: add     r14, r13
 * 0000000140A0830C: lea     rcx, [rax+rax*2]
 * 0000000140A08310: mov     [rsp+0CE0h+var_C80], r14
 * 0000000140A08315: lea     r11, [r12+rcx*8]
 * 0000000140A08319: mov     [rsp+0CE0h+var_C70], r11
 * 0000000140A0831E: cmp     r15w, r10w
 * 0000000140A08322: jnb     short loc_140A08358
 * 0000000140A08324: movzx   edx, r10w
 * 0000000140A08328: lea     rax, [r12+8]
 * 0000000140A0832D: mov     r10d, 80000000h
 * 0000000140A08333: lea     r14d, [r9+1]
 * 0000000140A08337: mov     rcx, r14
 * 0000000140A0833A: mov     [rax-8], r15d
 * 0000000140A0833E: mov     [rax-4], r15d
 * 0000000140A08342: mov     [rax], r10d
 * 0000000140A08345: add     rax, 0Ch
 * 0000000140A08349: sub     rcx, r9
 * 0000000140A0834C: jnz     short loc_140A0833A
 * 0000000140A0834E: sub     rdx, r9
 * 0000000140A08351: jnz     short loc_140A08337
 * 0000000140A08353: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A08358: cmp     r12, r11
 * 0000000140A0835B: jz      loc_140A08C1B
 * 0000000140A08361: mov     rsi, [rbp+0BE0h+var_C50]
 * 0000000140A08365: mov     eax, [rsi+24h]
 * 0000000140A08368: mov     r11d, r15d
 * 0000000140A0836B: bt      eax, 19h
 * 0000000140A0836F: jb      loc_140A084F7
 * 0000000140A08375: mov     ecx, [rsi]
 * 0000000140A08377: cmp     ecx, 54494E49h
 * 0000000140A0837D: jnz     short loc_140A0838C
 * 0000000140A0837F: cmp     dword ptr [rsi+4], 4742444Bh
 * 0000000140A08386: jz      loc_140A084F7
 * 0000000140A0838C: cmp     ecx, 45474150h
 * 0000000140A08392: jnz     short loc_140A083C2
 * 0000000140A08394: movzx   eax, word ptr [rsi+4]
 * 0000000140A08398: mov     edx, 7877h
 * 0000000140A0839D: cmp     ax, dx
 * 0000000140A083A0: jz      loc_140A084F7
 * 0000000140A083A6: mov     edx, 7277h
 * 0000000140A083AB: cmp     ax, dx
 * 0000000140A083AE: jz      loc_140A084F7
 * 0000000140A083B4: mov     edx, 7777h
 * 0000000140A083B9: cmp     ax, dx
 * 0000000140A083BC: jz      loc_140A084F7
 * 0000000140A083C2: cmp     ecx, 41525245h
 * 0000000140A083C8: jnz     short loc_140A083D9
 * 0000000140A083CA: mov     eax, 4154h
 * 0000000140A083CF: cmp     [rsi+4], ax
 * 0000000140A083D3: jz      loc_140A084F7
 * 0000000140A083D9: mov     rax, [rbx+938h]
 * 0000000140A083E0: mov     r9, rsi
 * 0000000140A083E3: mov     r8, [rbx+930h]
 * 0000000140A083EA: mov     r10d, 7
 * 0000000140A083F0: mov     [rbp+0BE0h+var_7E8], rax
 * 0000000140A083F7: sub     r9, r8
 * 0000000140A083FA: mov     rax, [rbx+940h]
 * 0000000140A08401: mov     [rbp+0BE0h+var_7E0], rax
 * 0000000140A08408: mov     rax, [rbx+948h]
 * 0000000140A0840F: mov     [rbp+0BE0h+var_7D8], rax
 * 0000000140A08416: mov     [rbp+0BE0h+var_7F0], r8
 * 0000000140A0841D: movzx   edx, byte ptr [r8+r9]
 * 0000000140A08422: movzx   eax, byte ptr [r8]
 * 0000000140A08426: inc     r8
 * 0000000140A08429: cmp     rdx, rax
 * 0000000140A0842C: jnz     short loc_140A0843D
 * 0000000140A0842E: mov     eax, 0FFFFFFFFh
 * 0000000140A08433: add     r10d, eax
 * 0000000140A08436: jnz     short loc_140A0841D
 * 0000000140A08438: jmp     loc_140A084EC
 * 0000000140A0843D: mov     r9, [rbp+0BE0h+var_7E8]
 * 0000000140A08444: mov     r8d, 8
 * 0000000140A0844A: mov     r10, rsi
 * 0000000140A0844D: mov     rcx, [r10]
 * 0000000140A08450: add     r10, 8
 * 0000000140A08454: mov     rax, [r9]
 * 0000000140A08457: add     r9, 8
 * 0000000140A0845B: cmp     rcx, rax
 * 0000000140A0845E: jnz     short loc_140A0848E
 * 0000000140A08460: add     r8d, 0FFFFFFF8h
 * 0000000140A08464: cmp     r8d, 8
 * 0000000140A08468: jnb     short loc_140A0844D
 * 0000000140A0846A: test    r8d, r8d
 * 0000000140A0846D: jz      short loc_140A084EC
 * 0000000140A0846F: movzx   edx, byte ptr [r10]
 * 0000000140A08473: inc     r10
 * 0000000140A08476: movzx   eax, byte ptr [r9]
 * 0000000140A0847A: inc     r9
 * 0000000140A0847D: cmp     rdx, rax
 * 0000000140A08480: jnz     short loc_140A0848E
 * 0000000140A08482: mov     eax, 0FFFFFFFFh
 * 0000000140A08487: add     r8d, eax
 * 0000000140A0848A: jnz     short loc_140A0846F
 * 0000000140A0848C: jmp     short loc_140A084EC
 * 0000000140A0848E: mov     r8, [rbp+0BE0h+var_7E0]
 * 0000000140A08495: mov     r9, rsi
 * 0000000140A08498: sub     r9, r8
 * 0000000140A0849B: mov     r10d, 4
 * 0000000140A084A1: movzx   edx, byte ptr [r9+r8]
 * 0000000140A084A6: movzx   eax, byte ptr [r8]
 * 0000000140A084AA: inc     r8
 * 0000000140A084AD: cmp     rdx, rax
 * 0000000140A084B0: jnz     short loc_140A084BE
 * 0000000140A084B2: mov     eax, 0FFFFFFFFh
 * 0000000140A084B7: add     r10d, eax
 * 0000000140A084BA: jnz     short loc_140A084A1
 * 0000000140A084BC: jmp     short loc_140A084EC
 * 0000000140A084BE: mov     r8, [rbp+0BE0h+var_7D8]
 * 0000000140A084C5: mov     r9, rsi
 * 0000000140A084C8: sub     r9, r8
 * 0000000140A084CB: mov     r10d, 6
 * 0000000140A084D1: movzx   edx, byte ptr [r9+r8]
 * 0000000140A084D6: movzx   eax, byte ptr [r8]
 * 0000000140A084DA: inc     r8
 * 0000000140A084DD: cmp     rdx, rax
 * 0000000140A084E0: jnz     short loc_140A084FC
 * 0000000140A084E2: mov     eax, 0FFFFFFFFh
 * 0000000140A084E7: add     r10d, eax
 * 0000000140A084EA: jnz     short loc_140A084D1
 * 0000000140A084EC: mov     r9d, 1
 * 0000000140A084F2: mov     r11d, r9d
 * 0000000140A084F5: jmp     short loc_140A08502
 * 0000000140A084F7: mov     r11d, r9d
 * 0000000140A084FA: jmp     short loc_140A08507
 * 0000000140A084FC: mov     r9d, 1
 * 0000000140A08502: mov     r8, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A08507: mov     ecx, [rsi+24h]
 * 0000000140A0850A: test    ecx, ecx
 * 0000000140A0850C: cmovs   r11d, r9d
 * 0000000140A08510: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 0000000140A08517: test    r11d, r11d
 * 0000000140A0851A: jz      short loc_140A08542
 * 0000000140A0851C: cmp     dword ptr [rsi], 54494E49h
 * 0000000140A08522: jnz     short loc_140A08542
 * 0000000140A08524: cmp     dword ptr [rsi+4], 4742444Bh
 * 0000000140A0852B: jnz     short loc_140A08542
 * 0000000140A0852D: test    dword ptr [rbx+994h], 2000h
 * 0000000140A08537: cmovnz  r11d, r15d
 * 0000000140A0853B: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 0000000140A08542: test    dword ptr [rbx+994h], 4000h
 * 0000000140A0854C: jz      short loc_140A08570
 * 0000000140A0854E: bt      ecx, 1Dh
 * 0000000140A08552: jnb     short loc_140A08570
 * 0000000140A08554: cmp     r8, [rbx+5E8h]
 * 0000000140A0855B: jz      short loc_140A08566
 * 0000000140A0855D: cmp     r8, [rbx+5F0h]
 * 0000000140A08564: jnz     short loc_140A08570
 * 0000000140A08566: mov     r11d, r9d
 * 0000000140A08569: mov     dword ptr [rbp+0BE0h+arg_8], r9d
 * 0000000140A08570: mov     ecx, [rsi+10h]
 * 0000000140A08573: mov     eax, [rsi+8]
 * 0000000140A08576: cmp     ecx, eax
 * 0000000140A08578: mov     edx, [rsi+0Ch]
 * 0000000140A0857B: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A0857F: cmovbe  ecx, eax
 * 0000000140A08582: add     ecx, edx
 * 0000000140A08584: mov     [rbp+0BE0h+var_C58], edx
 * 0000000140A08587: xor     r10d, r10d
 * 0000000140A0858A: mov     [rsp+0CE0h+var_C78], ecx
 * 0000000140A0858E: cmp     r13, r9
 * 0000000140A08591: jz      short loc_140A0859D
 * 0000000140A08593: mov     r15d, [r13+0]
 * 0000000140A08597: mov     r13d, [r13+4]
 * 0000000140A0859B: jmp     short loc_140A085A0
 * 0000000140A0859D: mov     r13d, r10d
 * 0000000140A085A0: mov     [rbp+0BE0h+var_C28], edx
 * 0000000140A085A3: cmp     [rbp+0BE0h+var_C10], r9
 * 0000000140A085A7: jz      loc_140A08766
 * 0000000140A085AD: cmp     r15d, edx
 * 0000000140A085B0: jbe     loc_140A08766
 * 0000000140A085B6: cmp     r13d, ecx
 * 0000000140A085B9: ja      loc_140A08766
 * 0000000140A085BF: test    r11d, r11d
 * 0000000140A085C2: jnz     loc_140A08766
 * 0000000140A085C8: mov     [r12], edx
 * 0000000140A085CC: lea     rcx, [rbp+0BE0h+var_9B0]
 * 0000000140A085D3: mov     [r12+4], r15d
 * 0000000140A085D8: lea     rdx, [rbp+0BE0h+var_7A0]
 * 0000000140A085DF: mov     eax, [r12]
 * 0000000140A085E3: mov     r9d, r15d
 * 0000000140A085E6: sub     r9d, eax
 * 0000000140A085E9: mov     [rbp+0BE0h+var_C28], r15d
 * 0000000140A085ED: mov     r14d, r9d
 * 0000000140A085F0: lea     rsi, [r8+rax]
 * 0000000140A085F4: mov     r8d, r10d
 * 0000000140A085F7: add     r14, rsi
 * 0000000140A085FA: mov     r10, [rdx]
 * 0000000140A085FD: mov     eax, [rcx]
 * 0000000140A085FF: add     rax, r10
 * 0000000140A08602: cmp     rsi, rax
 * 0000000140A08605: jnb     short loc_140A08610
 * 0000000140A08607: cmp     r14, r10
 * 0000000140A0860A: ja      loc_140A08756
 * 0000000140A08610: inc     r8d
 * 0000000140A08613: add     rdx, 8
 * 0000000140A08617: add     rcx, 4
 * 0000000140A0861B: cmp     r8d, 6
 * 0000000140A0861F: jb      short loc_140A085FA
 * 0000000140A08621: add     [rbx+828h], r9d
 * 0000000140A08628: mov     r10, rsi
 * 0000000140A0862B: mov     r11d, [rbx+814h]
 * 0000000140A08632: mov     rax, rsi
 * 0000000140A08635: mov     r12, [rbx+818h]
 * 0000000140A0863C: cmp     rsi, r14
 * 0000000140A0863F: jnb     short loc_140A08651
 * 0000000140A08641: mov     ecx, 40h ; '@'
 * 0000000140A08646: prefetchnta byte ptr [rax]
 * 0000000140A08649: add     rax, rcx
 * 0000000140A0864C: cmp     rax, r14
 * 0000000140A0864F: jb      short loc_140A08646
 * 0000000140A08651: mov     r14d, r9d
 * 0000000140A08654: mov     r8, r12
 * 0000000140A08657: shr     r14d, 7
 * 0000000140A0865B: test    r14d, r14d
 * 0000000140A0865E: jz      short loc_140A086D6
 * 0000000140A08660: mov     rbx, 7010008004002001h
 * 0000000140A0866A: mov     edx, 8
 * 0000000140A0866F: lea     edi, [rdx-7]
 * 0000000140A08672: mov     rax, [r10]
 * 0000000140A08675: mov     ecx, r11d
 * 0000000140A08678: xor     rax, r8
 * 0000000140A0867B: mov     r8, [r10+8]
 * 0000000140A0867F: rol     rax, cl
 * 0000000140A08682: add     r10, 10h
 * 0000000140A08686: xor     r8, rax
 * 0000000140A08689: rol     r8, cl
 * 0000000140A0868C: sub     rdx, rdi
 * 0000000140A0868F: jnz     short loc_140A08672
 * 0000000140A08691: mov     rcx, r10
 * 0000000140A08694: sub     rcx, rsi
 * 0000000140A08697: xor     rcx, r12
 * 0000000140A0869A: mov     rax, rcx
 * 0000000140A0869D: rol     rax, 11h
 * 0000000140A086A1: xor     rcx, rax
 * 0000000140A086A4: mov     rax, rbx
 * 0000000140A086A7: mul     rcx
 * 0000000140A086AA: mov     [rbp+0BE0h+var_500], rdx
 * 0000000140A086B1: xor     edx, eax
 * 0000000140A086B3: xor     r11d, edx
 * 0000000140A086B6: mov     rax, rdi
 * 0000000140A086B9: and     r11d, 3Fh
 * 0000000140A086BD: cmovz   r11d, eax
 * 0000000140A086C1: mov     eax, 0FFFFFFFFh
 * 0000000140A086C6: add     r14d, eax
 * 0000000140A086C9: jnz     short loc_140A0866A
 * 0000000140A086CB: mov     rbx, [rbp+0BE0h+var_C30]
 * 0000000140A086CF: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A086D6: and     r9d, 7Fh
 * 0000000140A086DA: mov     r14d, 1
 * 0000000140A086E0: cmp     r9d, 8
 * 0000000140A086E4: jb      short loc_140A08703
 * 0000000140A086E6: mov     edx, r9d
 * 0000000140A086E9: shr     rdx, 3
 * 0000000140A086ED: xor     r8, [r10]
 * 0000000140A086F0: mov     ecx, r11d
 * 0000000140A086F3: rol     r8, cl
 * 0000000140A086F6: add     r10, 8
 * 0000000140A086FA: add     r9d, 0FFFFFFF8h
 * 0000000140A086FE: sub     rdx, r14
 * 0000000140A08701: jnz     short loc_140A086ED
 * 0000000140A08703: xor     esi, esi
 * 0000000140A08705: test    r9d, r9d
 * 0000000140A08708: jz      short loc_140A08726
 * 0000000140A0870A: mov     esi, 0FFFFFFFFh
 * 0000000140A0870F: movzx   eax, byte ptr [r10]
 * 0000000140A08713: mov     ecx, r11d
 * 0000000140A08716: xor     r8, rax
 * 0000000140A08719: add     r10, r14
 * 0000000140A0871C: rol     r8, cl
 * 0000000140A0871F: add     r9d, esi
 * 0000000140A08722: jnz     short loc_140A0870F
 * 0000000140A08724: xor     esi, esi
 * 0000000140A08726: mov     rax, r8
 * 0000000140A08729: jmp     short loc_140A0872E
 * 0000000140A0872B: xor     r8d, eax
 * 0000000140A0872E: shr     rax, 1Fh
 * 0000000140A08732: test    rax, rax
 * 0000000140A08735: jnz     short loc_140A0872B
 * 0000000140A08737: mov     rax, [rbp+0BE0h+var_C60]
 * 0000000140A0873B: btr     r8d, 1Fh
 * 0000000140A08740: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A08744: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A08749: mov     edx, [rbp+0BE0h+var_C58]
 * 0000000140A0874C: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A08750: mov     [rax+8], r8d
 * 0000000140A08754: jmp     short loc_140A08768
 * 0000000140A08756: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A0875A: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A0875F: mov     edx, [rbp+0BE0h+var_C58]
 * 0000000140A08762: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A08766: xor     esi, esi
 * 0000000140A08768: cmp     r15d, edx
 * 0000000140A0876B: jb      loc_140A08A06
 * 0000000140A08771: cmp     r13d, ecx
 * 0000000140A08774: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0877B: ja      loc_140A08A0D
 * 0000000140A08781: mov     r8, [rbp+0BE0h+var_C10]
 * 0000000140A08785: cmp     r8, r9
 * 0000000140A08788: jz      loc_140A08A0D
 * 0000000140A0878E: mov     r12d, [r14+4]
 * 0000000140A08792: cmp     r12d, ecx
 * 0000000140A08795: ja      loc_140A08A0D
 * 0000000140A0879B: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A087A0: mov     edx, 1
 * 0000000140A087A5: lea     r10d, [rdx+0Bh]
 * 0000000140A087A9: cmp     r14, r9
 * 0000000140A087AC: jz      loc_140A08A0D
 * 0000000140A087B2: test    r13d, r13d
 * 0000000140A087B5: jz      short loc_140A087BF
 * 0000000140A087B7: mov     r8b, 80h
 * 0000000140A087BA: jmp     loc_140A089CF
 * 0000000140A087BF: mov     rax, [rsp+0CE0h+var_C80]
 * 0000000140A087C4: mov     r14d, [r8+4]
 * 0000000140A087C8: mov     r15d, [rax]
 * 0000000140A087CB: mov     [rbp+0BE0h+var_C28], r15d
 * 0000000140A087CF: cmp     r15d, r14d
 * 0000000140A087D2: jnb     short loc_140A08833
 * 0000000140A087D4: test    dword ptr [rbx+990h], 200000h
 * 0000000140A087DE: jz      loc_140A0BCDF
 * 0000000140A087E4: cmp     [rbx+8F8h], esi
 * 0000000140A087EA: jnz     short loc_140A08833
 * 0000000140A087EC: mov     rdx, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A087F1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A087FB: add     rax, rbx
 * 0000000140A087FE: mov     rcx, rbx
 * 0000000140A08801: mov     [rbx+900h], rax
 * 0000000140A08808: mov     eax, 1
 * 0000000140A0880D: mov     [rbx+908h], rsi
 * 0000000140A08814: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140A0881F: mov     [rbx+918h], rdx
 * 0000000140A08826: xor     edx, edx
 * 0000000140A08828: mov     [rbx+8F8h], eax
 * 0000000140A0882E: call    $$b8
 * 0000000140A08833: mov     rsi, r14
 * 0000000140A08836: lea     rcx, [rbp+0BE0h+var_9B0]
 * 0000000140A0883D: add     rsi, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A08842: lea     rdx, [rbp+0BE0h+var_7A0]
 * 0000000140A08849: mov     r9d, r15d
 * 0000000140A0884C: sub     r9d, r14d
 * 0000000140A0884F: mov     r14d, r9d
 * 0000000140A08852: add     r14, rsi
 * 0000000140A08855: xor     eax, eax
 * 0000000140A08857: mov     r8d, eax
 * 0000000140A0885A: mov     r10, [rdx]
 * 0000000140A0885D: mov     eax, [rcx]
 * 0000000140A0885F: add     rax, r10
 * 0000000140A08862: cmp     rsi, rax
 * 0000000140A08865: jnb     short loc_140A08870
 * 0000000140A08867: cmp     r14, r10
 * 0000000140A0886A: ja      loc_140A089AE
 * 0000000140A08870: mov     eax, 4
 * 0000000140A08875: inc     r8d
 * 0000000140A08878: add     rcx, rax
 * 0000000140A0887B: add     rdx, 8
 * 0000000140A0887F: cmp     r8d, 6
 * 0000000140A08883: jb      short loc_140A0885A
 * 0000000140A08885: cmp     r9d, eax
 * 0000000140A08888: jb      loc_140A089AE
 * 0000000140A0888E: add     [rbx+828h], r9d
 * 0000000140A08895: mov     r10, rsi
 * 0000000140A08898: mov     r11d, [rbx+814h]
 * 0000000140A0889F: mov     rax, rsi
 * 0000000140A088A2: mov     r15, [rbx+818h]
 * 0000000140A088A9: cmp     rsi, r14
 * 0000000140A088AC: jnb     short loc_140A088BE
 * 0000000140A088AE: mov     ecx, 40h ; '@'
 * 0000000140A088B3: prefetchnta byte ptr [rax]
 * 0000000140A088B6: add     rax, rcx
 * 0000000140A088B9: cmp     rax, r14
 * 0000000140A088BC: jb      short loc_140A088B3
 * 0000000140A088BE: mov     r14d, r9d
 * 0000000140A088C1: mov     r8, r15
 * 0000000140A088C4: shr     r14d, 7
 * 0000000140A088C8: test    r14d, r14d
 * 0000000140A088CB: jz      short loc_140A08947
 * 0000000140A088CD: mov     rdi, 7010008004002001h
 * 0000000140A088D7: mov     edx, 8
 * 0000000140A088DC: lea     r13d, [rdx-7]
 * 0000000140A088E0: mov     rax, [r10]
 * 0000000140A088E3: mov     ecx, r11d
 * 0000000140A088E6: xor     rax, r8
 * 0000000140A088E9: mov     r8, [r10+8]
 * 0000000140A088ED: rol     rax, cl
 * 0000000140A088F0: add     r10, 10h
 * 0000000140A088F4: xor     r8, rax
 * 0000000140A088F7: rol     r8, cl
 * 0000000140A088FA: sub     rdx, r13
 * 0000000140A088FD: jnz     short loc_140A088E0
 * 0000000140A088FF: mov     rcx, r10
 * 0000000140A08902: sub     rcx, rsi
 * 0000000140A08905: xor     rcx, r15
 * 0000000140A08908: mov     rax, rcx
 * 0000000140A0890B: rol     rax, 11h
 * 0000000140A0890F: xor     rcx, rax
 * 0000000140A08912: mov     rax, rdi
 * 0000000140A08915: mul     rcx
 * 0000000140A08918: mov     [rbp+0BE0h+var_4F8], rdx
 * 0000000140A0891F: xor     edx, eax
 * 0000000140A08921: xor     r11d, edx
 * 0000000140A08924: mov     rax, r13
 * 0000000140A08927: and     r11d, 3Fh
 * 0000000140A0892B: cmovz   r11d, eax
 * 0000000140A0892F: mov     eax, 0FFFFFFFFh
 * 0000000140A08934: add     r14d, eax
 * 0000000140A08937: jnz     short loc_140A088D7
 * 0000000140A08939: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A08940: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A08947: and     r9d, 7Fh
 * 0000000140A0894B: mov     r14d, 1
 * 0000000140A08951: cmp     r9d, 8
 * 0000000140A08955: jb      short loc_140A08974
 * 0000000140A08957: mov     edx, r9d
 * 0000000140A0895A: shr     rdx, 3
 * 0000000140A0895E: xor     r8, [r10]
 * 0000000140A08961: mov     ecx, r11d
 * 0000000140A08964: rol     r8, cl
 * 0000000140A08967: add     r10, 8
 * 0000000140A0896B: add     r9d, 0FFFFFFF8h
 * 0000000140A0896F: sub     rdx, r14
 * 0000000140A08972: jnz     short loc_140A0895E
 * 0000000140A08974: xor     esi, esi
 * 0000000140A08976: test    r9d, r9d
 * 0000000140A08979: jz      short loc_140A08997
 * 0000000140A0897B: mov     esi, 0FFFFFFFFh
 * 0000000140A08980: movzx   eax, byte ptr [r10]
 * 0000000140A08984: mov     ecx, r11d
 * 0000000140A08987: xor     r8, rax
 * 0000000140A0898A: add     r10, r14
 * 0000000140A0898D: rol     r8, cl
 * 0000000140A08990: add     r9d, esi
 * 0000000140A08993: jnz     short loc_140A08980
 * 0000000140A08995: xor     esi, esi
 * 0000000140A08997: mov     rax, r8
 * 0000000140A0899A: jmp     short loc_140A0899F
 * 0000000140A0899C: xor     r8b, al
 * 0000000140A0899F: shr     rax, 7
 * 0000000140A089A3: test    rax, rax
 * 0000000140A089A6: jnz     short loc_140A0899C
 * 0000000140A089A8: and     r8b, 7Fh
 * 0000000140A089AC: jmp     short loc_140A089B3
 * 0000000140A089AE: xor     esi, esi
 * 0000000140A089B0: mov     r8b, 80h
 * 0000000140A089B3: mov     r9, [rbp+0BE0h+var_C48]
 * 0000000140A089B7: mov     r10d, 0Ch
 * 0000000140A089BD: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A089C2: mov     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A089C6: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A089CB: lea     edx, [r10-0Bh]
 * 0000000140A089CF: mov     [rax], r8b
 * 0000000140A089D2: add     r14, r10
 * 0000000140A089D5: mov     r8, [rbp+0BE0h+var_C10]
 * 0000000140A089D9: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A089DE: add     r8, r10
 * 0000000140A089E1: add     rax, rdx
 * 0000000140A089E4: mov     [rbp+0BE0h+var_C10], r8
 * 0000000140A089E8: mov     [rsp+0CE0h+var_C88], rax
 * 0000000140A089ED: mov     [rsp+0CE0h+var_C80], r14
 * 0000000140A089F2: cmp     r14, r9
 * 0000000140A089F5: jz      short loc_140A089FB
 * 0000000140A089F7: mov     r12d, [r14+4]
 * 0000000140A089FB: cmp     r12d, ecx
 * 0000000140A089FE: jbe     loc_140A087A9
 * 0000000140A08A04: jmp     short loc_140A08A0D
 * 0000000140A08A06: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A08A0D: mov     r12, [rbp+0BE0h+var_C60]
 * 0000000140A08A11: xor     r15d, r15d
 * 0000000140A08A14: test    r13d, r13d
 * 0000000140A08A17: jnz     loc_140A08B97
 * 0000000140A08A1D: mov     eax, [rbp+0BE0h+var_C28]
 * 0000000140A08A20: cmp     eax, ecx
 * 0000000140A08A22: jz      loc_140A08B97
 * 0000000140A08A28: mov     rsi, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A08A2D: lea     rdx, [rbp+0BE0h+var_7A0]
 * 0000000140A08A34: mov     [r12+0Ch], eax
 * 0000000140A08A39: lea     r13d, [r15+1]
 * 0000000140A08A3D: mov     [r12+10h], ecx
 * 0000000140A08A42: mov     r9d, ecx
 * 0000000140A08A45: mov     eax, [r12+0Ch]
 * 0000000140A08A4A: lea     rcx, [rbp+0BE0h+var_9B0]
 * 0000000140A08A51: sub     r9d, eax
 * 0000000140A08A54: add     rsi, rax
 * 0000000140A08A57: mov     r14d, r9d
 * 0000000140A08A5A: mov     r8d, r15d
 * 0000000140A08A5D: add     r14, rsi
 * 0000000140A08A60: mov     r10, [rdx]
 * 0000000140A08A63: mov     eax, [rcx]
 * 0000000140A08A65: add     rax, r10
 * 0000000140A08A68: cmp     rsi, rax
 * 0000000140A08A6B: jnb     short loc_140A08A76
 * 0000000140A08A6D: cmp     r14, r10
 * 0000000140A08A70: ja      loc_140A08B97
 * 0000000140A08A76: add     r8d, r13d
 * 0000000140A08A79: add     rdx, 8
 * 0000000140A08A7D: add     rcx, 4
 * 0000000140A08A81: cmp     r8d, 6
 * 0000000140A08A85: jb      short loc_140A08A60
 * 0000000140A08A87: add     [rbx+828h], r9d
 * 0000000140A08A8E: mov     r10, rsi
 * 0000000140A08A91: mov     r11d, [rbx+814h]
 * 0000000140A08A98: mov     rax, rsi
 * 0000000140A08A9B: mov     r15, [rbx+818h]
 * 0000000140A08AA2: cmp     rsi, r14
 * 0000000140A08AA5: jnb     short loc_140A08AB7
 * 0000000140A08AA7: mov     ecx, 40h ; '@'
 * 0000000140A08AAC: prefetchnta byte ptr [rax]
 * 0000000140A08AAF: add     rax, rcx
 * 0000000140A08AB2: cmp     rax, r14
 * 0000000140A08AB5: jb      short loc_140A08AAC
 * 0000000140A08AB7: mov     r14d, r9d
 * 0000000140A08ABA: mov     r8, r15
 * 0000000140A08ABD: shr     r14d, 7
 * 0000000140A08AC1: test    r14d, r14d
 * 0000000140A08AC4: jz      short loc_140A08B2F
 * 0000000140A08AC6: mov     r12, 7010008004002001h
 * 0000000140A08AD0: mov     edx, 8
 * 0000000140A08AD5: mov     rax, [r10]
 * 0000000140A08AD8: mov     ecx, r11d
 * 0000000140A08ADB: xor     rax, r8
 * 0000000140A08ADE: mov     r8, [r10+8]
 * 0000000140A08AE2: rol     rax, cl
 * 0000000140A08AE5: add     r10, 10h
 * 0000000140A08AE9: xor     r8, rax
 * 0000000140A08AEC: rol     r8, cl
 * 0000000140A08AEF: sub     rdx, r13
 * 0000000140A08AF2: jnz     short loc_140A08AD5
 * 0000000140A08AF4: mov     rcx, r10
 * 0000000140A08AF7: sub     rcx, rsi
 * 0000000140A08AFA: xor     rcx, r15
 * 0000000140A08AFD: mov     rax, rcx
 * 0000000140A08B00: rol     rax, 11h
 * 0000000140A08B04: xor     rcx, rax
 * 0000000140A08B07: mov     rax, r12
 * 0000000140A08B0A: mul     rcx
 * 0000000140A08B0D: mov     [rbp+0BE0h+var_4F0], rdx
 * 0000000140A08B14: xor     edx, eax
 * 0000000140A08B16: xor     r11d, edx
 * 0000000140A08B19: mov     eax, 0FFFFFFFFh
 * 0000000140A08B1E: and     r11d, 3Fh
 * 0000000140A08B22: cmovz   r11d, r13d
 * 0000000140A08B26: add     r14d, eax
 * 0000000140A08B29: jnz     short loc_140A08AD0
 * 0000000140A08B2B: mov     r12, [rbp+0BE0h+var_C60]
 * 0000000140A08B2F: and     r9d, 7Fh
 * 0000000140A08B33: cmp     r9d, 8
 * 0000000140A08B37: jb      short loc_140A08B56
 * 0000000140A08B39: mov     edx, r9d
 * 0000000140A08B3C: shr     rdx, 3
 * 0000000140A08B40: xor     r8, [r10]
 * 0000000140A08B43: mov     ecx, r11d
 * 0000000140A08B46: rol     r8, cl
 * 0000000140A08B49: add     r10, 8
 * 0000000140A08B4D: add     r9d, 0FFFFFFF8h
 * 0000000140A08B51: sub     rdx, r13
 * 0000000140A08B54: jnz     short loc_140A08B40
 * 0000000140A08B56: xor     r15d, r15d
 * 0000000140A08B59: test    r9d, r9d
 * 0000000140A08B5C: jz      short loc_140A08B7C
 * 0000000140A08B5E: mov     r15d, 0FFFFFFFFh
 * 0000000140A08B64: movzx   eax, byte ptr [r10]
 * 0000000140A08B68: mov     ecx, r11d
 * 0000000140A08B6B: xor     r8, rax
 * 0000000140A08B6E: add     r10, r13
 * 0000000140A08B71: rol     r8, cl
 * 0000000140A08B74: add     r9d, r15d
 * 0000000140A08B77: jnz     short loc_140A08B64
 * 0000000140A08B79: xor     r15d, r15d
 * 0000000140A08B7C: mov     rax, r8
 * 0000000140A08B7F: jmp     short loc_140A08B84
 * 0000000140A08B81: xor     r8d, eax
 * 0000000140A08B84: shr     rax, 1Fh
 * 0000000140A08B88: test    rax, rax
 * 0000000140A08B8B: jnz     short loc_140A08B81
 * 0000000140A08B8D: btr     r8d, 1Fh
 * 0000000140A08B92: mov     [r12+14h], r8d
 * 0000000140A08B97: mov     rdx, [rbp+0BE0h+var_C48]
 * 0000000140A08B9B: mov     r13, [rbp+0BE0h+var_C10]
 * 0000000140A08B9F: mov     r14, [rsp+0CE0h+var_C80]
 * 0000000140A08BA4: cmp     r13, rdx
 * 0000000140A08BA7: jz      short loc_140A08BEC
 * 0000000140A08BA9: mov     eax, [r13+0]
 * 0000000140A08BAD: mov     ecx, [r13+4]
 * 0000000140A08BB1: cmp     eax, [rbp+0BE0h+var_C58]
 * 0000000140A08BB4: jb      short loc_140A08BEC
 * 0000000140A08BB6: cmp     ecx, [rsp+0CE0h+var_C78]
 * 0000000140A08BBA: ja      short loc_140A08BEC
 * 0000000140A08BBC: cmp     r14, rdx
 * 0000000140A08BBF: jz      short loc_140A08BE0
 * 0000000140A08BC1: mov     rax, [rsp+0CE0h+var_C88]
 * 0000000140A08BC6: mov     byte ptr [rax], 80h
 * 0000000140A08BC9: inc     rax
 * 0000000140A08BCC: mov     [rsp+0CE0h+var_C88], rax
 * 0000000140A08BD1: mov     eax, 0Ch
 * 0000000140A08BD6: add     r14, rax
 * 0000000140A08BD9: mov     [rsp+0CE0h+var_C80], r14
 * 0000000140A08BDE: jmp     short loc_140A08BE5
 * 0000000140A08BE0: mov     eax, 0Ch
 * 0000000140A08BE5: add     r13, rax
 * 0000000140A08BE8: mov     [rbp+0BE0h+var_C10], r13
 * 0000000140A08BEC: mov     rsi, [rbp+0BE0h+var_C50]
 * 0000000140A08BF0: add     r12, 18h
 * 0000000140A08BF4: add     rsi, 28h ; '('
 * 0000000140A08BF8: mov     [rbp+0BE0h+var_C60], r12
 * 0000000140A08BFC: mov     [rbp+0BE0h+var_C50], rsi
 * 0000000140A08C00: cmp     r12, [rsp+0CE0h+var_C70]
 * 0000000140A08C05: jz      short loc_140A08C17
 * 0000000140A08C07: mov     r8, [rsp+0CE0h+BugCheckParameter2]
 * 0000000140A08C0C: mov     r9d, 1
 * 0000000140A08C12: jmp     loc_140A08365
 * 0000000140A08C17: mov     rsi, [rbp+0BE0h+var_BB0]
 * 0000000140A08C1B: mov     [rbp+0BE0h+var_BA8], rsi
 * 0000000140A08C1F: mov     ecx, r15d
 * 0000000140A08C22: mov     [rbp+0BE0h+var_C18], ecx
 * 0000000140A08C25: mov     r13d, 80000000h
 * 0000000140A08C2B: mov     rbx, rsi
 * 0000000140A08C2E: lea     eax, [rcx+r13]
 * 0000000140A08C32: test    r13d, eax
 * 0000000140A08C35: jnz     short loc_140A08C4D
 * 0000000140A08C37: cmp     ecx, 0C000010Eh
 * 0000000140A08C3D: jz      short loc_140A08C4D
 * 0000000140A08C3F: mov     ecx, [rbp+0BE0h+var_C18]
 * 0000000140A08C42: jmp     loc_140A08CDB
 * 0000000140A08C47: mov     r13d, 80000000h
 * 0000000140A08C4D: mov     r12, [rbp+0BE0h+var_C08]
 * 0000000140A08C51: mov     rax, [rsi+1F8h]
 * 0000000140A08C58: mov     rcx, r12
 * 0000000140A08C5B: call    KeGuardDispatchICall
 * 0000000140A08C60: mov     ecx, [rax+94h]
 * 0000000140A08C66: cmp     ecx, 14h
 * 0000000140A08C69: jb      loc_140A06FDA
 * 0000000140A08C6F: mov     eax, [rax+90h]
 * 0000000140A08C75: lea     r15, [r12+rcx]
 * 0000000140A08C79: add     r15, rax
 * 0000000140A08C7C: lea     r14, [r12+rax]
 * 0000000140A08C80: cmp     r14, r15
 * 0000000140A08C83: jz      short loc_140A08CD5
 * 0000000140A08C85: xor     ecx, ecx
 * 0000000140A08C87: cmp     [r14+0Ch], ecx
 * 0000000140A08C8B: jz      short loc_140A08CD5
 * 0000000140A08C8D: mov     eax, [r14+10h]
 * 0000000140A08C91: test    eax, eax
 * 0000000140A08C93: jz      short loc_140A08CD5
 * 0000000140A08C95: mov     rdx, [rax+r12]
 * 0000000140A08C99: test    rdx, rdx
 * 0000000140A08C9C: jz      short loc_140A08CCC
 * 0000000140A08C9E: mov     r8d, 8000000Fh
 * 0000000140A08CA4: lea     rcx, [rbp+0BE0h+var_BA8]
 * 0000000140A08CA8: call    sub_140A0C0FC
 * 0000000140A08CAD: mov     rsi, [rbp+0BE0h+var_BA8]
 * 0000000140A08CB1: mov     ecx, eax
 * 0000000140A08CB3: add     eax, r13d
 * 0000000140A08CB6: mov     rbx, rsi
 * 0000000140A08CB9: test    r13d, eax
 * 0000000140A08CBC: jnz     short loc_140A08CCA
 * 0000000140A08CBE: cmp     ecx, 0C000010Eh
 * 0000000140A08CC4: jnz     loc_140A08E54
 * 0000000140A08CCA: xor     ecx, ecx
 * 0000000140A08CCC: add     r14, 14h
 * 0000000140A08CD0: cmp     r14, r15
 * 0000000140A08CD3: jnz     short loc_140A08C87
 * 0000000140A08CD5: xor     r15d, r15d
 * 0000000140A08CD8: mov     ecx, r15d
 * 0000000140A08CDB: lea     eax, [rcx+r13]
 * 0000000140A08CDF: test    r13d, eax
 * 0000000140A08CE2: jnz     short loc_140A08CF0
 * 0000000140A08CE4: cmp     ecx, 0C000010Eh
 * 0000000140A08CEA: jnz     loc_140A06D8D
 * 0000000140A08CF0: mov     rax, [rbx+570h]
 * 0000000140A08CF7: lea     rdx, [rbp+0BE0h+var_140]
 * 0000000140A08CFE: mov     rcx, [rax+20h]
 * 0000000140A08D02: mov     rax, [rbx+200h]
 * 0000000140A08D09: call    KeGuardDispatchICall
 * 0000000140A08D0E: mov     rcx, [rbp+0BE0h+var_138]
 * 0000000140A08D15: test    rcx, rcx
 * 0000000140A08D18: jz      loc_140A0925E
 * 0000000140A08D1E: mov     [rbx+978h], rcx
 * 0000000140A08D25: mov     rax, [rbx+1F8h]
 * 0000000140A08D2C: call    KeGuardDispatchICall
 * 0000000140A08D31: test    rax, rax
 * 0000000140A08D34: jz      loc_140A0925E
 * 0000000140A08D3A: mov     eax, [rax+50h]
 * 0000000140A08D3D: mov     [rbx+974h], eax
 * 0000000140A08D43: mov     dword ptr [rbx+958h], 8
 * 0000000140A08D4D: mov     r15, [rbx+600h]
 * 0000000140A08D54: xor     r10d, r10d
 * 0000000140A08D57: test    r15, r15
 * 0000000140A08D5A: jz      loc_140A08F74
 * 0000000140A08D60: cmp     [r15], r10
 * 0000000140A08D63: jz      loc_140A08F74
 * 0000000140A08D69: mov     r9d, [rbx+838h]
 * 0000000140A08D70: lea     r12d, [r10+20h]
 * 0000000140A08D74: mov     r13d, [rbx+7E4h]
 * 0000000140A08D7B: cmp     r9d, 7
 * 0000000140A08D7F: mov     r8d, [rbx+924h]
 * 0000000140A08D86: cmovnz  r12d, r10d
 * 0000000140A08D8A: mov     dword ptr [rbp+0BE0h+arg_8], r9d
 * 0000000140A08D91: lea     eax, [r13+30h]
 * 0000000140A08D95: cmp     eax, [rbx+0A1Ch]
 * 0000000140A08D9B: jbe     loc_140A08E9A
 * 0000000140A08DA1: mov     edx, eax
 * 0000000140A08DA3: mov     rcx, rbx
 * 0000000140A08DA6: call    sub_140A0EB30
 * 0000000140A08DAB: xor     r10d, r10d
 * 0000000140A08DAE: mov     r14, rax
 * 0000000140A08DB1: test    rax, rax
 * 0000000140A08DB4: jz      loc_140A08E8F
 * 0000000140A08DBA: mov     ecx, [rbx+990h]
 * 0000000140A08DC0: test    cl, 4
 * 0000000140A08DC3: jnz     loc_140A08E7E
 * 0000000140A08DC9: mov     eax, [rbx+7E4h]
 * 0000000140A08DCF: lea     r9d, [r10+1]
 * 0000000140A08DD3: mov     r8, [rbx+7C8h]
 * 0000000140A08DDA: and     ecx, 20000000h
 * 0000000140A08DE0: neg     ecx
 * 0000000140A08DE2: sbb     edx, edx
 * 0000000140A08DE4: and     edx, [rbx+924h]
 * 0000000140A08DEA: cmp     eax, 8
 * 0000000140A08DED: jb      short loc_140A08E04
 * 0000000140A08DEF: mov     ecx, eax
 * 0000000140A08DF1: shr     rcx, 3
 * 0000000140A08DF5: mov     [rbx], r10
 * 0000000140A08DF8: add     eax, 0FFFFFFF8h
 * 0000000140A08DFB: add     rbx, 8
 * 0000000140A08DFF: sub     rcx, r9
 * 0000000140A08E02: jnz     short loc_140A08DF5
 * 0000000140A08E04: test    eax, eax
 * 0000000140A08E06: jz      short loc_140A08E17
 * 0000000140A08E08: mov     ecx, 0FFFFFFFFh
 * 0000000140A08E0D: mov     [rbx], r10b
 * 0000000140A08E10: add     rbx, r9
 * 0000000140A08E13: add     eax, ecx
 * 0000000140A08E15: jnz     short loc_140A08E0D
 * 0000000140A08E17: mov     ebx, [r14+924h]
 * 0000000140A08E1E: mov     [r14+924h], edx
 * 0000000140A08E25: cmp     edx, 3
 * 0000000140A08E28: jz      short loc_140A08E65
 * 0000000140A08E2A: test    dword ptr [r14+990h], 10000000h
 * 0000000140A08E35: mov     ecx, r10d
 * 0000000140A08E38: cmovz   ecx, edx
 * 0000000140A08E3B: test    ecx, ecx
 * 0000000140A08E3D: jz      short loc_140A08E5C
 * 0000000140A08E3F: mov     rax, [r14+228h]
 * 0000000140A08E46: lea     rcx, [r8-8]
 * 0000000140A08E4A: mov     rdx, [rcx]
 * 0000000140A08E4D: call    KeGuardDispatchICall
 * 0000000140A08E52: jmp     short loc_140A08E74
 * 0000000140A08E54: xor     r15d, r15d
 * 0000000140A08E57: jmp     loc_140A08CDB
 * 0000000140A08E5C: mov     rax, [r14+100h]
 * 0000000140A08E63: jmp     short loc_140A08E6C
 * 0000000140A08E65: mov     rax, [r14+368h]
 * 0000000140A08E6C: mov     rcx, r8
 * 0000000140A08E6F: call    KeGuardDispatchICall
 * 0000000140A08E74: mov     [r14+924h], ebx
 * 0000000140A08E7B: xor     r10d, r10d
 * 0000000140A08E7E: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140A08E86: mov     r9d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A08E8D: jmp     short loc_140A08EA3
 * 0000000140A08E8F: mov     rbx, rsi
 * 0000000140A08E92: xor     r15d, r15d
 * 0000000140A08E95: jmp     loc_140A06D8D
 * 0000000140A08E9A: mov     r14, rbx
 * 0000000140A08E9D: mov     [rbx+7E4h], eax
 * 0000000140A08EA3: mov     r8d, 1
 * 0000000140A08EA9: lea     rbx, [r14+r13]
 * 0000000140A08EAD: add     [r14+80Ch], r8d
 * 0000000140A08EB4: mov     rax, rbx
 * 0000000140A08EB7: mov     [rbp+0BE0h+var_4E8], rbx
 * 0000000140A08EBE: lea     ecx, [r8+2Fh]
 * 0000000140A08EC2: lea     edx, [rcx-2Ah]
 * 0000000140A08EC5: mov     [rax], r10
 * 0000000140A08EC8: add     ecx, 0FFFFFFF8h
 * 0000000140A08ECB: add     rax, 8
 * 0000000140A08ECF: sub     rdx, r8
 * 0000000140A08ED2: jnz     short loc_140A08EC5
 * 0000000140A08ED4: test    ecx, ecx
 * 0000000140A08ED6: jz      short loc_140A08EE7
 * 0000000140A08ED8: mov     edx, 0FFFFFFFFh
 * 0000000140A08EDD: mov     [rax], r10b
 * 0000000140A08EE0: add     rax, r8
 * 0000000140A08EE3: add     ecx, edx
 * 0000000140A08EE5: jnz     short loc_140A08EDD
 * 0000000140A08EE7: mov     [rbx], r12d
 * 0000000140A08EEA: mov     [rbx+8], r15
 * 0000000140A08EEE: cmp     r9d, 7
 * 0000000140A08EF2: jnz     short loc_140A08F0C
 * 0000000140A08EF4: lea     r9, [rbx+18h]
 * 0000000140A08EF8: mov     r8d, 8
 * 0000000140A08EFE: mov     rdx, r15
 * 0000000140A08F01: mov     rcx, r14
 * 0000000140A08F04: call    sub_1403EA48C
 * 0000000140A08F09: xor     r10d, r10d
 * 0000000140A08F0C: mov     dword ptr [rbx+10h], 8
 * 0000000140A08F13: lea     rdx, [r15+8]
 * 0000000140A08F17: add     dword ptr [r14+828h], 8
 * 0000000140A08F1F: mov     rax, r15
 * 0000000140A08F22: mov     ecx, [r14+814h]
 * 0000000140A08F29: mov     r8, [r14+818h]
 * 0000000140A08F30: cmp     r15, rdx
 * 0000000140A08F33: jnb     short loc_140A08F46
 * 0000000140A08F35: mov     r9d, 40h ; '@'
 * 0000000140A08F3B: prefetchnta byte ptr [rax]
 * 0000000140A08F3E: add     rax, r9
 * 0000000140A08F41: cmp     rax, rdx
 * 0000000140A08F44: jb      short loc_140A08F3B
 * 0000000140A08F46: mov     rax, [r15]
 * 0000000140A08F49: xor     rax, r8
 * 0000000140A08F4C: rol     rax, cl
 * 0000000140A08F4F: mov     rcx, rax
 * 0000000140A08F52: jmp     short loc_140A08F56
 * 0000000140A08F54: xor     eax, ecx
 * 0000000140A08F56: shr     rcx, 1Fh
 * 0000000140A08F5A: test    rcx, rcx
 * 0000000140A08F5D: jnz     short loc_140A08F54
 * 0000000140A08F5F: btr     eax, 1Fh
 * 0000000140A08F63: mov     rsi, r14
 * 0000000140A08F66: mov     [rbx+14h], eax
 * 0000000140A08F69: mov     rbx, r14
 * 0000000140A08F6C: add     dword ptr [r14+828h], 8
 * 0000000140A08F74: mov     dword ptr [rbx+958h], 9
 * 0000000140A08F7E: jmp     loc_140A058F7
 * 0000000140A08F83: mov     r9d, [rbx+838h]
 * 0000000140A08F8A: mov     r13d, 20h ; ' '
 * 0000000140A08F90: mov     eax, [rbx+7E4h]
 * 0000000140A08F96: cmp     r9d, 7
 * 0000000140A08F9A: mov     r8d, [rbx+924h]
 * 0000000140A08FA1: cmovnz  r13d, r11d
 * 0000000140A08FA5: mov     [rbp+0BE0h+var_C38], eax
 * 0000000140A08FA8: add     eax, 30h ; '0'
 * 0000000140A08FAB: mov     [rbp+0BE0h+var_BE8], r9d
 * 0000000140A08FAF: cmp     eax, [rbx+0A1Ch]
 * 0000000140A08FB5: jbe     loc_140A0909E
 * 0000000140A08FBB: mov     edx, eax
 * 0000000140A08FBD: mov     rcx, rbx
 * 0000000140A08FC0: call    sub_140A0EB30
 * 0000000140A08FC5: xor     r11d, r11d
 * 0000000140A08FC8: mov     r14, rax
 * 0000000140A08FCB: test    rax, rax
 * 0000000140A08FCE: jz      loc_140A08E8F
 * 0000000140A08FD4: mov     ecx, [rbx+990h]
 * 0000000140A08FDA: test    cl, 4
 * 0000000140A08FDD: jnz     loc_140A09090
 * 0000000140A08FE3: mov     eax, [rbx+7E4h]
 * 0000000140A08FE9: lea     r9d, [r11+1]
 * 0000000140A08FED: mov     r8, [rbx+7C8h]
 * 0000000140A08FF4: and     ecx, 20000000h
 * 0000000140A08FFA: neg     ecx
 * 0000000140A08FFC: sbb     edx, edx
 * 0000000140A08FFE: and     edx, [rbx+924h]
 * 0000000140A09004: cmp     eax, 8
 * 0000000140A09007: jb      short loc_140A0901E
 * 0000000140A09009: mov     ecx, eax
 * 0000000140A0900B: shr     rcx, 3
 * 0000000140A0900F: mov     [rbx], r11
 * 0000000140A09012: add     eax, 0FFFFFFF8h
 * 0000000140A09015: add     rbx, 8
 * 0000000140A09019: sub     rcx, r9
 * 0000000140A0901C: jnz     short loc_140A0900F
 * 0000000140A0901E: test    eax, eax
 * 0000000140A09020: jz      short loc_140A09031
 * 0000000140A09022: mov     ecx, 0FFFFFFFFh
 * 0000000140A09027: mov     [rbx], r11b
 * 0000000140A0902A: add     rbx, r9
 * 0000000140A0902D: add     eax, ecx
 * 0000000140A0902F: jnz     short loc_140A09027
 * 0000000140A09031: mov     ebx, [r14+924h]
 * 0000000140A09038: mov     [r14+924h], edx
 * 0000000140A0903F: cmp     edx, 3
 * 0000000140A09042: jz      short loc_140A09077
 * 0000000140A09044: test    dword ptr [r14+990h], 10000000h
 * 0000000140A0904F: mov     ecx, r11d
 * 0000000140A09052: cmovz   ecx, edx
 * 0000000140A09055: test    ecx, ecx
 * 0000000140A09057: jz      short loc_140A0906E
 * 0000000140A09059: mov     rax, [r14+228h]
 * 0000000140A09060: lea     rcx, [r8-8]
 * 0000000140A09064: mov     rdx, [rcx]
 * 0000000140A09067: call    KeGuardDispatchICall
 * 0000000140A0906C: jmp     short loc_140A09086
 * 0000000140A0906E: mov     rax, [r14+100h]
 * 0000000140A09075: jmp     short loc_140A0907E
 * 0000000140A09077: mov     rax, [r14+368h]
 * 0000000140A0907E: mov     rcx, r8
 * 0000000140A09081: call    KeGuardDispatchICall
 * 0000000140A09086: mov     [r14+924h], ebx
 * 0000000140A0908D: xor     r11d, r11d
 * 0000000140A09090: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140A09098: mov     r9d, [rbp+0BE0h+var_BE8]
 * 0000000140A0909C: jmp     short loc_140A090A7
 * 0000000140A0909E: mov     r14, rbx
 * 0000000140A090A1: mov     [rbx+7E4h], eax
 * 0000000140A090A7: mov     ebx, [rbp+0BE0h+var_C38]
 * 0000000140A090AA: mov     r8d, 1
 * 0000000140A090B0: add     [r14+80Ch], r8d
 * 0000000140A090B7: add     rbx, r14
 * 0000000140A090BA: mov     [rsp+0CE0h+var_C70], rbx
 * 0000000140A090BF: mov     rax, rbx
 * 0000000140A090C2: lea     ecx, [r8+2Fh]
 * 0000000140A090C6: mov     [rbp+0BE0h+var_4D8], rbx
 * 0000000140A090CD: lea     edx, [rcx-2Ah]
 * 0000000140A090D0: mov     [rax], r11
 * 0000000140A090D3: add     ecx, 0FFFFFFF8h
 * 0000000140A090D6: add     rax, 8
 * 0000000140A090DA: sub     rdx, r8
 * 0000000140A090DD: jnz     short loc_140A090D0
 * 0000000140A090DF: test    ecx, ecx
 * 0000000140A090E1: jz      short loc_140A090F2
 * 0000000140A090E3: mov     edx, 0FFFFFFFFh
 * 0000000140A090E8: mov     [rax], r11b
 * 0000000140A090EB: add     rax, r8
 * 0000000140A090EE: add     ecx, edx
 * 0000000140A090F0: jnz     short loc_140A090E8
 * 0000000140A090F2: mov     [rbx], r13d
 * 0000000140A090F5: mov     [rbx+8], r15
 * 0000000140A090F9: cmp     r9d, 7
 * 0000000140A090FD: jnz     short loc_140A09116
 * 0000000140A090FF: test    r12d, r12d
 * 0000000140A09102: jz      short loc_140A09116
 * 0000000140A09104: lea     r9, [rbx+18h]
 * 0000000140A09108: mov     r8d, r12d
 * 0000000140A0910B: mov     rdx, r15
 * 0000000140A0910E: mov     rcx, r14
 * 0000000140A09111: call    sub_1403EA48C
 * 0000000140A09116: mov     [rbx+10h], r12d
 * 0000000140A0911A: mov     r9, r15
 * 0000000140A0911D: add     [r14+828h], r12d
 * 0000000140A09124: mov     rax, r15
 * 0000000140A09127: mov     r10d, [r14+814h]
 * 0000000140A0912E: mov     rsi, [r14+818h]
 * 0000000140A09135: mov     ecx, r12d
 * 0000000140A09138: add     rcx, r15
 * 0000000140A0913B: cmp     r15, rcx
 * 0000000140A0913E: jnb     short loc_140A09150
 * 0000000140A09140: mov     edx, 40h ; '@'
 * 0000000140A09145: prefetchnta byte ptr [rax]
 * 0000000140A09148: add     rax, rdx
 * 0000000140A0914B: cmp     rax, rcx
 * 0000000140A0914E: jb      short loc_140A09145
 * 0000000140A09150: mov     r11d, r12d
 * 0000000140A09153: mov     r8, rsi
 * 0000000140A09156: shr     r11d, 7
 * 0000000140A0915A: mov     r13d, 1
 * 0000000140A09160: test    r11d, r11d
 * 0000000140A09163: jz      short loc_140A091D8
 * 0000000140A09165: mov     ebx, 0FFFFFFFFh
 * 0000000140A0916A: mov     r12, 7010008004002001h
 * 0000000140A09174: mov     eax, 8
 * 0000000140A09179: xor     r8, [r9]
 * 0000000140A0917C: mov     ecx, r10d
 * 0000000140A0917F: rol     r8, cl
 * 0000000140A09182: xor     r8, [r9+8]
 * 0000000140A09186: add     r9, 10h
 * 0000000140A0918A: rol     r8, cl
 * 0000000140A0918D: sub     rax, r13
 * 0000000140A09190: jnz     short loc_140A09179
 * 0000000140A09192: mov     rcx, r9
 * 0000000140A09195: sub     rcx, r15
 * 0000000140A09198: xor     rcx, rsi
 * 0000000140A0919B: mov     rax, rcx
 * 0000000140A0919E: rol     rax, 11h
 * 0000000140A091A2: xor     rcx, rax
 * 0000000140A091A5: mov     rax, r12
 * 0000000140A091A8: mul     rcx
 * 0000000140A091AB: xor     r10d, edx
 * 0000000140A091AE: mov     [rbp+0BE0h+var_4D0], rdx
 * 0000000140A091B5: xor     r10d, eax
 * 0000000140A091B8: and     r10d, 3Fh
 * 0000000140A091BC: cmovz   r10d, r13d
 * 0000000140A091C0: add     r11d, ebx
 * 0000000140A091C3: jnz     short loc_140A09174
 * 0000000140A091C5: mov     rbx, [rsp+0CE0h+var_C70]
 * 0000000140A091CA: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A091D1: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A091D8: mov     edx, r12d
 * 0000000140A091DB: and     edx, 7Fh
 * 0000000140A091DE: cmp     edx, 8
 * 0000000140A091E1: jb      short loc_140A091FE
 * 0000000140A091E3: mov     eax, edx
 * 0000000140A091E5: shr     rax, 3
 * 0000000140A091E9: xor     r8, [r9]
 * 0000000140A091EC: mov     ecx, r10d
 * 0000000140A091EF: rol     r8, cl
 * 0000000140A091F2: add     r9, 8
 * 0000000140A091F6: add     edx, 0FFFFFFF8h
 * 0000000140A091F9: sub     rax, r13
 * 0000000140A091FC: jnz     short loc_140A091E9
 * 0000000140A091FE: xor     r15d, r15d
 * 0000000140A09201: test    edx, edx
 * 0000000140A09203: jz      short loc_140A09223
 * 0000000140A09205: mov     r15d, 0FFFFFFFFh
 * 0000000140A0920B: movzx   eax, byte ptr [r9]
 * 0000000140A0920F: mov     ecx, r10d
 * 0000000140A09212: xor     r8, rax
 * 0000000140A09215: add     r9, r13
 * 0000000140A09218: rol     r8, cl
 * 0000000140A0921B: add     edx, r15d
 * 0000000140A0921E: jnz     short loc_140A0920B
 * 0000000140A09220: xor     r15d, r15d
 * 0000000140A09223: mov     rax, r8
 * 0000000140A09226: jmp     short loc_140A0922B
 * 0000000140A09228: xor     r8d, eax
 * 0000000140A0922B: shr     rax, 1Fh
 * 0000000140A0922F: test    rax, rax
 * 0000000140A09232: jnz     short loc_140A09228
 * 0000000140A09234: btr     r8d, 1Fh
 * 0000000140A09239: mov     rsi, r14
 * 0000000140A0923C: mov     [rbx+14h], r8d
 * 0000000140A09240: mov     rbx, r14
 * 0000000140A09243: add     [r14+828h], r12d
 * 0000000140A0924A: jmp     short loc_140A0924F
 * 0000000140A0924C: xor     r15d, r15d
 * 0000000140A0924F: mov     dword ptr [rbx+958h], 0Bh
 * 0000000140A09259: jmp     loc_140A06D8D
 * 0000000140A0925E: mov     r12d, 1
 * 0000000140A09264: cmp     [rbx+8F8h], r15d
 * 0000000140A0926B: jnz     loc_140A05AB7
 * 0000000140A09271: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0927B: add     rax, rbx
 * 0000000140A0927E: mov     [rbx+900h], rax
 * 0000000140A09285: mov     [rbx+908h], r15
 * 0000000140A0928C: mov     qword ptr [rbx+910h], 105h
 * 0000000140A09297: mov     qword ptr [rbx+918h], 0FFFFFFFFC000007Bh
 * 0000000140A092A2: jmp     loc_140A05AA6
 * 0000000140A092A7: mov     r12d, 1
 * 0000000140A092AD: jmp     loc_140A05ABD
 * 0000000140A092B2: mov     [rbx+970h], r13d
 * 0000000140A092B9: test    r14, r14
 * 0000000140A092BC: jz      loc_140A0951C
 * 0000000140A092C2: mov     rax, [rbx+288h]
 * 0000000140A092C9: mov     rcx, r14
 * 0000000140A092CC: call    KeGuardDispatchICall
 * 0000000140A092D1: jmp     loc_140A0951C
 * 0000000140A092D6: mov     eax, [rsi+830h]
 * 0000000140A092DC: test    r12b, al
 * 0000000140A092DF: jz      loc_140A0951C
 * 0000000140A092E5: mov     ecx, [rsi+970h]
 * 0000000140A092EB: mov     r13d, 0FFFFFFFFh
 * 0000000140A092F1: cmp     ecx, r13d
 * 0000000140A092F4: jz      short loc_140A09307
 * 0000000140A092F6: mov     rax, [rsi+278h]
 * 0000000140A092FD: call    KeGuardDispatchICall
 * 0000000140A09302: mov     rbx, rax
 * 0000000140A09305: jmp     short loc_140A0930A
 * 0000000140A09307: mov     rbx, r15
 * 0000000140A0930A: test    rbx, rbx
 * 0000000140A0930D: jnz     short loc_140A09329
 * 0000000140A0930F: mov     rax, [rsi+280h]
 * 0000000140A09316: xor     ecx, ecx
 * 0000000140A09318: call    KeGuardDispatchICall
 * 0000000140A0931D: mov     rbx, rax
 * 0000000140A09320: test    rax, rax
 * 0000000140A09323: jz      loc_140A0951C
 * 0000000140A09329: mov     rax, [rsi+290h]
 * 0000000140A09330: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A09337: mov     rcx, rbx
 * 0000000140A0933A: call    KeGuardDispatchICall
 * 0000000140A0933F: mov     r14d, eax
 * 0000000140A09342: test    eax, eax
 * 0000000140A09344: jns     short loc_140A09357
 * 0000000140A09346: mov     rax, [rsi+288h]
 * 0000000140A0934D: mov     rcx, rbx
 * 0000000140A09350: call    KeGuardDispatchICall
 * 0000000140A09355: jmp     short loc_140A093B9
 * 0000000140A09357: mov     [rsi+980h], rbx
 * 0000000140A0935E: mov     rax, [rsi+2B8h]
 * 0000000140A09365: call    KeGuardDispatchICall
 * 0000000140A0936A: mov     rbx, rax
 * 0000000140A0936D: mov     rax, [rsi+2D8h]
 * 0000000140A09374: mov     rcx, rbx
 * 0000000140A09377: call    KeGuardDispatchICall
 * 0000000140A0937C: mov     rdx, rax
 * 0000000140A0937F: test    rax, rax
 * 0000000140A09382: jnz     short loc_140A09389
 * 0000000140A09384: lea     ecx, [rax+4]
 * 0000000140A09387: jmp     short loc_140A0939B
 * 0000000140A09389: mov     rax, [rsi+2E8h]
 * 0000000140A09390: mov     rcx, rbx
 * 0000000140A09393: call    KeGuardDispatchICall
 * 0000000140A09398: mov     ecx, r15d
 * 0000000140A0939B: mov     eax, [rsi+994h]
 * 0000000140A093A1: mov     r14d, r15d
 * 0000000140A093A4: and     eax, 0FFFFFFFBh
 * 0000000140A093A7: or      eax, ecx
 * 0000000140A093A9: mov     [rsi+994h], eax
 * 0000000140A093AF: add     dword ptr [rsi+828h], 10000h
 * 0000000140A093B9: test    r14d, r14d
 * 0000000140A093BC: js      loc_140A0951C
 * 0000000140A093C2: mov     rax, [rsi+960h]
 * 0000000140A093C9: mov     rcx, [rax]
 * 0000000140A093CC: cmp     rcx, [rsi+968h]
 * 0000000140A093D3: jnz     loc_140A0947A
 * 0000000140A093D9: mov     rax, [rsi+570h]
 * 0000000140A093E0: cmp     [rax+30h], r15d
 * 0000000140A093E4: jz      loc_140A0947A
 * 0000000140A093EA: lock or [rsp+0CE0h+var_CE0], r15d
 * 0000000140A093EF: mov     rax, [rsi+960h]
 * 0000000140A093F6: mov     rcx, [rax]
 * 0000000140A093F9: cmp     rcx, [rsi+968h]
 * 0000000140A09400: jnz     short loc_140A0947A
 * 0000000140A09402: mov     rax, [rsi+960h]
 * 0000000140A09409: mov     rdx, [rax]
 * 0000000140A0940C: mov     eax, [rsi+8F8h]
 * 0000000140A09412: mov     rcx, [rsi+968h]
 * 0000000140A09419: test    eax, eax
 * 0000000140A0941B: jnz     short loc_140A0947A
 * 0000000140A0941D: mov     rax, [rsi+590h]
 * 0000000140A09424: xor     rcx, rdx
 * 0000000140A09427: mov     [rax+18h], rcx
 * 0000000140A0942B: mov     eax, [rsi+8F8h]
 * 0000000140A09431: mov     rcx, [rsi+968h]
 * 0000000140A09438: test    eax, eax
 * 0000000140A0943A: jnz     short loc_140A0947A
 * 0000000140A0943C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A09446: xor     edx, edx
 * 0000000140A09448: add     rax, rsi
 * 0000000140A0944B: mov     [rsi+900h], rax
 * 0000000140A09452: mov     [rsi+908h], r15
 * 0000000140A09459: mov     qword ptr [rsi+910h], 103h
 * 0000000140A09464: mov     [rsi+918h], rcx
 * 0000000140A0946B: mov     rcx, rsi
 * 0000000140A0946E: mov     [rsi+8F8h], r12d
 * 0000000140A09475: call    $$b8
 * 0000000140A0947A: mov     ecx, 8000h
 * 0000000140A0947F: test    [rsi+990h], ecx
 * 0000000140A09485: jnz     short loc_140A09494
 * 0000000140A09487: cmp     [rsi+8F8h], r15d
 * 0000000140A0948E: jnz     loc_140A0951C
 * 0000000140A09494: mov     rbx, [rsi+980h]
 * 0000000140A0949B: lea     rdx, [rbp+0BE0h+var_6C0]
 * 0000000140A094A2: mov     [rsi+980h], r15
 * 0000000140A094A9: mov     rcx, rbx
 * 0000000140A094AC: mov     rax, [rsi+298h]
 * 0000000140A094B3: call    KeGuardDispatchICall
 * 0000000140A094B8: mov     eax, [rsi+990h]
 * 0000000140A094BE: test    r12b, al
 * 0000000140A094C1: jz      short loc_140A09501
 * 0000000140A094C3: and     eax, 0FFFFFFFEh
 * 0000000140A094C6: mov     rcx, rbx
 * 0000000140A094C9: mov     [rsi+990h], eax
 * 0000000140A094CF: mov     rax, [rsi+280h]
 * 0000000140A094D6: call    KeGuardDispatchICall
 * 0000000140A094DB: mov     rbx, rax
 * 0000000140A094DE: test    rax, rax
 * 0000000140A094E1: jz      short loc_140A094FA
 * 0000000140A094E3: mov     rax, [rsi+2A0h]
 * 0000000140A094EA: mov     rcx, rbx
 * 0000000140A094ED: call    KeGuardDispatchICall
 * 0000000140A094F2: mov     [rsi+970h], eax
 * 0000000140A094F8: jmp     short loc_140A09501
 * 0000000140A094FA: mov     [rsi+970h], r13d
 * 0000000140A09501: test    rbx, rbx
 * 0000000140A09504: jz      short loc_140A0951C
 * 0000000140A09506: mov     rax, [rsi+288h]
 * 0000000140A0950D: mov     rcx, rbx
 * 0000000140A09510: jmp     loc_140A092CC
 * 0000000140A09515: xor     r15d, r15d
 * 0000000140A09518: lea     r12d, [r15+1]
 * 0000000140A0951C: mov     [rsp+0CE0h+var_C80], rsi
 * 0000000140A09521: test    dword ptr [rsi+990h], 2000000h
 * 0000000140A0952B: jz      short loc_140A095AA
 * 0000000140A0952D: mov     rbx, [rsi+998h]
 * 0000000140A09534: mov     rax, [rsi+390h]
 * 0000000140A0953B: mov     rcx, rbx
 * 0000000140A0953E: call    KeGuardDispatchICall
 * 0000000140A09543: test    eax, eax
 * 0000000140A09545: jz      short loc_140A0958E
 * 0000000140A09547: cmp     [rsi+8F8h], r15d
 * 0000000140A0954E: jnz     short loc_140A0958E
 * 0000000140A09550: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0955A: xor     edx, edx
 * 0000000140A0955C: add     rax, rsi
 * 0000000140A0955F: mov     rcx, rsi
 * 0000000140A09562: mov     [rsi+900h], rax
 * 0000000140A09569: mov     [rsi+908h], r15
 * 0000000140A09570: mov     qword ptr [rsi+910h], 110h
 * 0000000140A0957B: mov     [rsi+918h], r15
 * 0000000140A09582: mov     [rsi+8F8h], r12d
 * 0000000140A09589: call    $$b8
 * 0000000140A0958E: mov     rax, [rsi+388h]
 * 0000000140A09595: lea     rdx, sub_140A10EF0
 * 0000000140A0959C: xor     r9d, r9d
 * 0000000140A0959F: mov     r8, rsi
 * 0000000140A095A2: mov     rcx, rbx
 * 0000000140A095A5: call    KeGuardDispatchICall
 * 0000000140A095AA: mov     edx, r12d
 * 0000000140A095AD: mov     rcx, rsi
 * 0000000140A095B0: call    $$b8
 * 0000000140A095B5: test    dword ptr [rsi+994h], 100h
 * 0000000140A095BF: jz      short loc_140A095CC
 * 0000000140A095C1: mov     rax, [rbp+0BE0h+var_BD0]
 * 0000000140A095C5: mov     [rbp+0BE8h], rax
 * 0000000140A095CC: mov     r9d, [rsi+990h]
 * 0000000140A095D3: mov     r8d, r9d
 * 0000000140A095D6: bt      r9d, 12h
 * 0000000140A095DB: jnb     loc_140A09681
 * 0000000140A095E1: rdtsc
 * 0000000140A095E3: shl     rdx, 20h
 * 0000000140A095E7: or      rax, rdx
 * 0000000140A095EA: mov     rcx, rax
 * 0000000140A095ED: ror     rax, 3
 * 0000000140A095F1: xor     rcx, rax
 * 0000000140A095F4: mov     rax, 7010008004002001h
 * 0000000140A095FE: mul     rcx
 * 0000000140A09601: mov     rcx, rdx
 * 0000000140A09604: mov     [rbp+0BE0h+var_4C8], rdx
 * 0000000140A0960B: xor     rcx, rax
 * 0000000140A0960E: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140A09618: mul     rcx
 * 0000000140A0961B: shr     rdx, 3
 * 0000000140A0961F: lea     rax, [rdx+rdx*4]
 * 0000000140A09623: add     rax, rax
 * 0000000140A09626: sub     rcx, rax
 * 0000000140A09629: mov     eax, 2
 * 0000000140A0962E: cmp     rcx, rax
 * 0000000140A09631: jnb     short loc_140A09681
 * 0000000140A09633: cmp     [rsi+8F8h], r15d
 * 0000000140A0963A: jnz     short loc_140A09681
 * 0000000140A0963C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A09646: xor     edx, edx
 * 0000000140A09648: add     rax, rsi
 * 0000000140A0964B: mov     rcx, rsi
 * 0000000140A0964E: mov     [rsi+900h], rax
 * 0000000140A09655: mov     [rsi+908h], r15
 * 0000000140A0965C: mov     qword ptr [rsi+910h], 108h
 * 0000000140A09667: mov     [rsi+918h], r15
 * 0000000140A0966E: mov     [rsi+8F8h], r12d
 * 0000000140A09675: call    $$b8
 * 0000000140A0967A: mov     r8d, [rsi+990h]
 * 0000000140A09681: mov     r10d, 8000h
 * 0000000140A09687: bt      r8d, 1Eh
 * 0000000140A0968C: jb      short loc_140A096FD
 * 0000000140A0968E: test    r10d, r8d
 * 0000000140A09691: jnz     short loc_140A0969C
 * 0000000140A09693: cmp     [rsi+8F8h], r15d
 * 0000000140A0969A: jnz     short loc_140A096FD
 * 0000000140A0969C: mov     rcx, [rbp+0BE0h+arg_0]
 * 0000000140A096A3: test    [rcx+990h], r10d
 * 0000000140A096AA: jnz     short loc_140A096FD
 * 0000000140A096AC: add     rcx, 8F8h
 * 0000000140A096B3: cmp     [rcx], r15d
 * 0000000140A096B6: jz      short loc_140A096FD
 * 0000000140A096B8: mov     r8d, 28h ; '('
 * 0000000140A096BE: lea     rdx, [rsi+8F8h]
 * 0000000140A096C5: lea     r9d, [r8-23h]
 * 0000000140A096C9: mov     rax, [rdx]
 * 0000000140A096CC: add     r8d, 0FFFFFFF8h
 * 0000000140A096D0: mov     [rcx], rax
 * 0000000140A096D3: add     rdx, 8
 * 0000000140A096D7: add     rcx, 8
 * 0000000140A096DB: sub     r9, r12
 * 0000000140A096DE: jnz     short loc_140A096C9
 * 0000000140A096E0: test    r8d, r8d
 * 0000000140A096E3: jz      short loc_140A096FD
 * 0000000140A096E5: mov     r15d, 0FFFFFFFFh
 * 0000000140A096EB: mov     al, [rdx]
 * 0000000140A096ED: add     rdx, r12
 * 0000000140A096F0: mov     [rcx], al
 * 0000000140A096F2: add     rcx, r12
 * 0000000140A096F5: add     r8d, r15d
 * 0000000140A096F8: jnz     short loc_140A096EB
 * 0000000140A096FA: xor     r15d, r15d
 * 0000000140A096FD: test    [rsi+990h], r10d
 * 0000000140A09704: jnz     short loc_140A09713
 * 0000000140A09706: cmp     [rsi+8F8h], r15d
 * 0000000140A0970D: jnz     loc_140A0A664
 * 0000000140A09713: mov     eax, [rsi+0A28h]
 * 0000000140A09719: test    eax, eax
 * 0000000140A0971B: jz      loc_140A0A664
 * 0000000140A09721: lea     r14, [rsi+rax]
 * 0000000140A09725: mov     r11, [r14+8]
 * 0000000140A09729: mov     [rbp+0BE0h+var_C20], r14
 * 0000000140A0972D: test    r11, r11
 * 0000000140A09730: jz      loc_140A099F4
 * 0000000140A09736: mov     r9d, [r14+10h]
 * 0000000140A0973A: mov     r8, r11
 * 0000000140A0973D: add     [rsi+828h], r9d
 * 0000000140A09744: mov     rax, r11
 * 0000000140A09747: mov     r10d, [rsi+814h]
 * 0000000140A0974E: mov     r12, [rsi+818h]
 * 0000000140A09755: lea     rcx, [r11+r9]
 * 0000000140A09759: cmp     r11, rcx
 * 0000000140A0975C: jnb     short loc_140A0976E
 * 0000000140A0975E: mov     edx, 40h ; '@'
 * 0000000140A09763: prefetchnta byte ptr [rax]
 * 0000000140A09766: add     rax, rdx
 * 0000000140A09769: cmp     rax, rcx
 * 0000000140A0976C: jb      short loc_140A09763
 * 0000000140A0976E: mov     r15d, r9d
 * 0000000140A09771: mov     rbx, r12
 * 0000000140A09774: shr     r15d, 7
 * 0000000140A09778: mov     r13d, 1
 * 0000000140A0977E: test    r15d, r15d
 * 0000000140A09781: jz      short loc_140A097EC
 * 0000000140A09783: mov     rdi, 7010008004002001h
 * 0000000140A0978D: mov     eax, 8
 * 0000000140A09792: xor     rbx, [r8]
 * 0000000140A09795: mov     ecx, r10d
 * 0000000140A09798: rol     rbx, cl
 * 0000000140A0979B: xor     rbx, [r8+8]
 * 0000000140A0979F: add     r8, 10h
 * 0000000140A097A3: rol     rbx, cl
 * 0000000140A097A6: sub     rax, r13
 * 0000000140A097A9: jnz     short loc_140A09792
 * 0000000140A097AB: mov     rcx, r8
 * 0000000140A097AE: sub     rcx, r11
 * 0000000140A097B1: xor     rcx, r12
 * 0000000140A097B4: mov     rax, rcx
 * 0000000140A097B7: rol     rax, 11h
 * 0000000140A097BB: xor     rcx, rax
 * 0000000140A097BE: mov     rax, rdi
 * 0000000140A097C1: mul     rcx
 * 0000000140A097C4: xor     r10d, edx
 * 0000000140A097C7: mov     [rbp+0BE0h+var_4C0], rdx
 * 0000000140A097CE: xor     r10d, eax
 * 0000000140A097D1: mov     edx, 0FFFFFFFFh
 * 0000000140A097D6: and     r10d, 3Fh
 * 0000000140A097DA: cmovz   r10d, r13d
 * 0000000140A097DE: add     r15d, edx
 * 0000000140A097E1: jnz     short loc_140A0978D
 * 0000000140A097E3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A097EA: jmp     short loc_140A097F1
 * 0000000140A097EC: mov     edx, 0FFFFFFFFh
 * 0000000140A097F1: and     r9d, 7Fh
 * 0000000140A097F5: cmp     r9d, 8
 * 0000000140A097F9: jb      short loc_140A09818
 * 0000000140A097FB: mov     eax, r9d
 * 0000000140A097FE: shr     rax, 3
 * 0000000140A09802: xor     rbx, [r8]
 * 0000000140A09805: mov     ecx, r10d
 * 0000000140A09808: rol     rbx, cl
 * 0000000140A0980B: add     r8, 8
 * 0000000140A0980F: add     r9d, 0FFFFFFF8h
 * 0000000140A09813: sub     rax, r13
 * 0000000140A09816: jnz     short loc_140A09802
 * 0000000140A09818: xor     r15d, r15d
 * 0000000140A0981B: test    r9d, r9d
 * 0000000140A0981E: jz      short loc_140A09835
 * 0000000140A09820: movzx   eax, byte ptr [r8]
 * 0000000140A09824: mov     ecx, r10d
 * 0000000140A09827: xor     rbx, rax
 * 0000000140A0982A: add     r8, r13
 * 0000000140A0982D: rol     rbx, cl
 * 0000000140A09830: add     r9d, edx
 * 0000000140A09833: jnz     short loc_140A09820
 * 0000000140A09835: mov     rax, rbx
 * 0000000140A09838: jmp     short loc_140A0983C
 * 0000000140A0983A: xor     ebx, eax
 * 0000000140A0983C: shr     rax, 1Fh
 * 0000000140A09840: test    rax, rax
 * 0000000140A09843: jnz     short loc_140A0983A
 * 0000000140A09845: btr     ebx, 1Fh
 * 0000000140A09849: mov     r12d, r15d
 * 0000000140A0984C: cmp     ebx, [r14+14h]
 * 0000000140A09850: jz      loc_140A099BD
 * 0000000140A09856: cmp     [r14], r15d
 * 0000000140A09859: jnz     short loc_140A09863
 * 0000000140A0985B: cmp     [r14+18h], r15d
 * 0000000140A0985F: cmovnz  r12d, r13d
 * 0000000140A09863: mov     ecx, [r14+10h]
 * 0000000140A09867: mov     rdx, [r14+8]
 * 0000000140A0986B: test    rcx, rcx
 * 0000000140A0986E: jz      loc_140A09943
 * 0000000140A09874: mov     eax, [rsi+994h]
 * 0000000140A0987A: mov     r8d, 40h ; '@'
 * 0000000140A09880: test    r8b, al
 * 0000000140A09883: jz      loc_140A09943
 * 0000000140A09889: mov     rax, cr8
 * 0000000140A0988D: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A09894: mov     r8d, 2
 * 0000000140A0989A: mov     cr8, r8
 * 0000000140A0989E: dec     rcx
 * 0000000140A098A1: mov     r15, rdx
 * 0000000140A098A4: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140A098AB: add     rcx, rdx
 * 0000000140A098AE: or      rcx, 0FFFh
 * 0000000140A098B5: mov     [rsp+0CE0h+var_C70], rcx
 * 0000000140A098BA: lea     rcx, [r15-1]
 * 0000000140A098BE: mov     [rbp+0BE0h+var_BD0], rcx
 * 0000000140A098C2: movzx   r13d, al
 * 0000000140A098C6: mov     rax, [rsi+468h]
 * 0000000140A098CD: xor     edx, edx
 * 0000000140A098CF: mov     rcx, r15
 * 0000000140A098D2: call    KeGuardDispatchICall
 * 0000000140A098D7: cmp     eax, 0C000022Dh
 * 0000000140A098DC: jnz     short loc_140A0990B
 * 0000000140A098DE: test    r12d, r12d
 * 0000000140A098E1: jnz     short loc_140A0993C
 * 0000000140A098E3: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A098EA: lea     ecx, [r12+1]
 * 0000000140A098EF: cmp     al, cl
 * 0000000140A098F1: ja      short loc_140A09916
 * 0000000140A098F3: movzx   r13d, al
 * 0000000140A098F7: mov     cr8, r13
 * 0000000140A098FB: mov     al, [r15]
 * 0000000140A098FE: mov     rax, cr8
 * 0000000140A09902: lea     eax, [rcx+1]
 * 0000000140A09905: mov     cr8, rax
 * 0000000140A09909: jmp     short loc_140A098C6
 * 0000000140A0990B: test    eax, eax
 * 0000000140A0990D: js      short loc_140A0993C
 * 0000000140A0990F: mov     rax, [rbp+0BE0h+arg_8]
 * 0000000140A09916: mov     rcx, [rbp+0BE0h+var_BD0]
 * 0000000140A0991A: mov     edx, 1000h
 * 0000000140A0991F: add     rcx, rdx
 * 0000000140A09922: add     r15, rdx
 * 0000000140A09925: mov     [rbp+0BE0h+var_BD0], rcx
 * 0000000140A09929: cmp     rcx, [rsp+0CE0h+var_C70]
 * 0000000140A0992E: jnz     short loc_140A098C2
 * 0000000140A09930: mov     cr8, r13
 * 0000000140A09934: xor     r15d, r15d
 * 0000000140A09937: jmp     loc_140A099BD
 * 0000000140A0993C: mov     cr8, r13
 * 0000000140A09940: xor     r15d, r15d
 * 0000000140A09943: mov     eax, [rsi+8F8h]
 * 0000000140A09949: mov     edx, [r14+14h]
 * 0000000140A0994D: test    eax, eax
 * 0000000140A0994F: jnz     short loc_140A09967
 * 0000000140A09951: mov     rax, [rsi+590h]
 * 0000000140A09958: mov     ecx, ebx
 * 0000000140A0995A: xor     rcx, rdx
 * 0000000140A0995D: mov     [rax+18h], rcx
 * 0000000140A09961: mov     eax, [rsi+8F8h]
 * 0000000140A09967: mov     rcx, [r14+8]
 * 0000000140A0996B: test    eax, eax
 * 0000000140A0996D: jnz     short loc_140A099BD
 * 0000000140A0996F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A09979: xor     edx, edx
 * 0000000140A0997B: add     rax, rsi
 * 0000000140A0997E: mov     [rsi+900h], rax
 * 0000000140A09985: mov     rax, 0B3B74BDEE4453415h
 * 0000000140A0998F: add     rax, r14
 * 0000000140A09992: mov     [rsi+908h], rax
 * 0000000140A09999: movsxd  rax, dword ptr [r14]
 * 0000000140A0999C: mov     [rsi+910h], rax
 * 0000000140A099A3: mov     eax, 1
 * 0000000140A099A8: mov     [rsi+918h], rcx
 * 0000000140A099AF: mov     rcx, rsi
 * 0000000140A099B2: mov     [rsi+8F8h], eax
 * 0000000140A099B8: call    $$b8
 * 0000000140A099BD: mov     rcx, [r14+18h]
 * 0000000140A099C1: mov     rax, [rsi+100h]
 * 0000000140A099C8: call    KeGuardDispatchICall
 * 0000000140A099CD: mov     [r14+8], r15
 * 0000000140A099D1: mov     [r14+10h], r15d
 * 0000000140A099D5: mov     rcx, [rsi+818h]
 * 0000000140A099DC: mov     rax, rcx
 * 0000000140A099DF: jmp     short loc_140A099E3
 * 0000000140A099E1: xor     ecx, eax
 * 0000000140A099E3: shr     rax, 1Fh
 * 0000000140A099E7: test    rax, rax
 * 0000000140A099EA: jnz     short loc_140A099E1
 * 0000000140A099EC: btr     ecx, 1Fh
 * 0000000140A099F0: mov     [r14+14h], ecx
 * 0000000140A099F4: rdtsc
 * 0000000140A099F6: shl     rdx, 20h
 * 0000000140A099FA: mov     r9, 7010008004002001h
 * 0000000140A09A04: or      rax, rdx
 * 0000000140A09A07: mov     rcx, rax
 * 0000000140A09A0A: ror     rax, 3
 * 0000000140A09A0E: xor     rcx, rax
 * 0000000140A09A11: mov     rax, r9
 * 0000000140A09A14: mul     rcx
 * 0000000140A09A17: mov     rcx, rdx
 * 0000000140A09A1A: mov     [rbp+0BE0h+var_4B8], rdx
 * 0000000140A09A21: xor     rcx, rax
 * 0000000140A09A24: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A09A2E: mul     rcx
 * 0000000140A09A31: shr     rdx, 1
 * 0000000140A09A34: lea     rax, [rdx+rdx*2]
 * 0000000140A09A38: cmp     rcx, rax
 * 0000000140A09A3B: jnz     loc_140A0A670
 * 0000000140A09A41: mov     r8d, [rsi+810h]
 * 0000000140A09A48: lea     r12, [r14+18h]
 * 0000000140A09A4C: rdtsc
 * 0000000140A09A4E: shl     rdx, 20h
 * 0000000140A09A52: or      rax, rdx
 * 0000000140A09A55: mov     rcx, rax
 * 0000000140A09A58: ror     rax, 3
 * 0000000140A09A5C: xor     rcx, rax
 * 0000000140A09A5F: mov     rax, r9
 * 0000000140A09A62: mul     rcx
 * 0000000140A09A65: mov     rbx, rdx
 * 0000000140A09A68: mov     [rbp+0BE0h+var_4B0], rdx
 * 0000000140A09A6F: xor     ebx, eax
 * 0000000140A09A71: and     ebx, 7FFh
 * 0000000140A09A77: rdtsc
 * 0000000140A09A79: shl     rdx, 20h
 * 0000000140A09A7D: or      rax, rdx
 * 0000000140A09A80: mov     rcx, rax
 * 0000000140A09A83: ror     rax, 3
 * 0000000140A09A87: xor     rcx, rax
 * 0000000140A09A8A: mov     rax, r9
 * 0000000140A09A8D: mul     rcx
 * 0000000140A09A90: mov     ecx, [rsi+990h]
 * 0000000140A09A96: lea     r9d, [rbx+1]
 * 0000000140A09A9A: xor     rax, rdx
 * 0000000140A09A9D: mov     [rbp+0BE0h+var_4A8], rdx
 * 0000000140A09AA4: xor     edx, edx
 * 0000000140A09AA6: shr     ecx, 13h
 * 0000000140A09AA9: div     r9
 * 0000000140A09AAC: mov     rax, [rsi+0F8h]
 * 0000000140A09AB3: and     ecx, 200h
 * 0000000140A09AB9: mov     r15, rdx
 * 0000000140A09ABC: lea     edx, [rbx+0AA0h]
 * 0000000140A09AC2: call    KeGuardDispatchICall
 * 0000000140A09AC7: mov     r11, rax
 * 0000000140A09ACA: test    rax, rax
 * 0000000140A09ACD: jnz     loc_140A09E7E
 * 0000000140A09AD3: lea     r15d, [rax+1]
 * 0000000140A09AD7: add     [rsi+0A18h], r15d
 * 0000000140A09ADE: mov     r9, 7010008004002001h
 * 0000000140A09AE8: mov     r13d, [rsi+990h]
 * 0000000140A09AEF: mov     [rbp+0BE0h+var_C38], r11d
 * 0000000140A09AF3: mov     [rbp+0BE0h+var_C40], r11
 * 0000000140A09AF7: mov     dword ptr [rbp+0BE0h+arg_8], r13d
 * 0000000140A09AFE: bt      r13d, 1Eh
 * 0000000140A09B03: jb      loc_140A0AA53
 * 0000000140A09B09: mov     r14, [rbp+0BE0h+arg_0]
 * 0000000140A09B10: cmp     rsi, r14
 * 0000000140A09B13: jnz     loc_140A0AB56
 * 0000000140A09B19: mov     eax, 8000h
 * 0000000140A09B1E: test    eax, r13d
 * 0000000140A09B21: jnz     short loc_140A09B30
 * 0000000140A09B23: cmp     [rsi+8F8h], r11d
 * 0000000140A09B2A: jnz     loc_140A0A811
 * 0000000140A09B30: mov     r8d, [r14+924h]
 * 0000000140A09B37: mov     rcx, r14
 * 0000000140A09B3A: mov     edx, [r14+7E4h]
 * 0000000140A09B41: call    sub_140A0EB30
 * 0000000140A09B46: mov     rsi, rax
 * 0000000140A09B49: test    rax, rax
 * 0000000140A09B4C: jz      loc_140A0A811
 * 0000000140A09B52: mov     ecx, [rsi+954h]
 * 0000000140A09B58: mov     r15, 7010008004002001h
 * 0000000140A09B62: mov     r12d, [rsi+0A2Ch]
 * 0000000140A09B69: mov     rax, [rax+7C8h]
 * 0000000140A09B70: add     r12d, 0FFFFFF38h
 * 0000000140A09B77: mov     [rbp+0BE0h+var_C28], ecx
 * 0000000140A09B7A: mov     ecx, [rsi+990h]
 * 0000000140A09B80: mov     [rbp+0BE0h+var_C38], ecx
 * 0000000140A09B83: mov     rcx, [rsi+4E8h]
 * 0000000140A09B8A: shr     r12d, 3
 * 0000000140A09B8E: mov     [rbp+0BE0h+var_C30], rcx
 * 0000000140A09B92: mov     rcx, [rsi+5C0h]
 * 0000000140A09B99: mov     [rbp+0BE0h+var_BD0], rcx
 * 0000000140A09B9D: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A09BA1: mov     dword ptr [rbp+0BE0h+arg_8], r12d
 * 0000000140A09BA8: mov     [rsi+0C4h], r12d
 * 0000000140A09BAF: rdtsc
 * 0000000140A09BB1: shl     rdx, 20h
 * 0000000140A09BB5: or      rax, rdx
 * 0000000140A09BB8: mov     rcx, rax
 * 0000000140A09BBB: ror     rax, 3
 * 0000000140A09BBF: xor     rcx, rax
 * 0000000140A09BC2: mov     rax, r15
 * 0000000140A09BC5: mul     rcx
 * 0000000140A09BC8: mov     rbx, rdx
 * 0000000140A09BCB: mov     [rbp+0BE0h+var_460], rdx
 * 0000000140A09BD2: xor     rbx, rax
 * 0000000140A09BD5: jz      short loc_140A09BAF
 * 0000000140A09BD7: mov     rax, [rsi+7B8h]
 * 0000000140A09BDE: lea     r14, [rsi+798h]
 * 0000000140A09BE5: mov     r11d, 20h ; ' '
 * 0000000140A09BEB: mov     [rsp+0CE0h+var_C70], rax
 * 0000000140A09BF0: mov     eax, [rsi+828h]
 * 0000000140A09BF6: lea     rdx, [rbp+0BE0h+var_D0]
 * 0000000140A09BFD: mov     [rbp+0BE0h+var_BE8], eax
 * 0000000140A09C00: mov     r8d, r11d
 * 0000000140A09C03: mov     rcx, r14
 * 0000000140A09C06: xor     r15d, r15d
 * 0000000140A09C09: lea     r10d, [r11-1Ch]
 * 0000000140A09C0D: mov     r9d, r10d
 * 0000000140A09C10: lea     r13d, [r11-1Fh]
 * 0000000140A09C14: mov     rax, [rcx]
 * 0000000140A09C17: add     r8d, 0FFFFFFF8h
 * 0000000140A09C1B: mov     [rdx], rax
 * 0000000140A09C1E: add     rcx, 8
 * 0000000140A09C22: add     rdx, 8
 * 0000000140A09C26: sub     r9, r13
 * 0000000140A09C29: jnz     short loc_140A09C14
 * 0000000140A09C2B: test    r8d, r8d
 * 0000000140A09C2E: jz      short loc_140A09C48
 * 0000000140A09C30: mov     r15d, 0FFFFFFFFh
 * 0000000140A09C36: mov     al, [rcx]
 * 0000000140A09C38: add     rcx, r13
 * 0000000140A09C3B: mov     [rdx], al
 * 0000000140A09C3D: add     rdx, r13
 * 0000000140A09C40: add     r8d, r15d
 * 0000000140A09C43: jnz     short loc_140A09C36
 * 0000000140A09C45: xor     r15d, r15d
 * 0000000140A09C48: mov     [rsi+7B8h], r15
 * 0000000140A09C4F: mov     ecx, r11d
 * 0000000140A09C52: mov     [rsi+828h], r15d
 * 0000000140A09C59: mov     rax, r14
 * 0000000140A09C5C: mov     rdx, r10
 * 0000000140A09C5F: mov     [rax], r15
 * 0000000140A09C62: add     ecx, 0FFFFFFF8h
 * 0000000140A09C65: add     rax, 8
 * 0000000140A09C69: sub     rdx, r13
 * 0000000140A09C6C: jnz     short loc_140A09C5F
 * 0000000140A09C6E: mov     edx, 0FFFFFFFFh
 * 0000000140A09C73: test    ecx, ecx
 * 0000000140A09C75: jz      short loc_140A09C81
 * 0000000140A09C77: mov     [rax], r15b
 * 0000000140A09C7A: add     rax, r13
 * 0000000140A09C7D: add     ecx, edx
 * 0000000140A09C7F: jnz     short loc_140A09C77
 * 0000000140A09C81: mov     eax, [rsi+7E4h]
 * 0000000140A09C87: mov     r10, rsi
 * 0000000140A09C8A: add     [rsi+828h], eax
 * 0000000140A09C90: mov     rax, rsi
 * 0000000140A09C93: mov     r11d, [rsi+7E4h]
 * 0000000140A09C9A: mov     r9d, [rsi+814h]
 * 0000000140A09CA1: mov     r13, [rsi+818h]
 * 0000000140A09CA8: lea     rcx, [rsi+r11]
 * 0000000140A09CAC: cmp     rsi, rcx
 * 0000000140A09CAF: jnb     short loc_140A09CC2
 * 0000000140A09CB1: mov     r8d, 40h ; '@'
 * 0000000140A09CB7: prefetchnta byte ptr [rax]
 * 0000000140A09CBA: add     rax, r8
 * 0000000140A09CBD: cmp     rax, rcx
 * 0000000140A09CC0: jb      short loc_140A09CB7
 * 0000000140A09CC2: mov     r15d, r11d
 * 0000000140A09CC5: mov     r8, r13
 * 0000000140A09CC8: shr     r15d, 7
 * 0000000140A09CCC: test    r15d, r15d
 * 0000000140A09CCF: jz      short loc_140A09D4B
 * 0000000140A09CD1: mov     r12, 7010008004002001h
 * 0000000140A09CDB: mov     edx, 8
 * 0000000140A09CE0: lea     edi, [rdx-7]
 * 0000000140A09CE3: mov     rax, [r10]
 * 0000000140A09CE6: mov     ecx, r9d
 * 0000000140A09CE9: xor     rax, r8
 * 0000000140A09CEC: mov     r8, [r10+8]
 * 0000000140A09CF0: rol     rax, cl
 * 0000000140A09CF3: add     r10, 10h
 * 0000000140A09CF7: xor     r8, rax
 * 0000000140A09CFA: rol     r8, cl
 * 0000000140A09CFD: sub     rdx, rdi
 * 0000000140A09D00: jnz     short loc_140A09CE3
 * 0000000140A09D02: mov     rcx, r10
 * 0000000140A09D05: sub     rcx, rsi
 * 0000000140A09D08: xor     rcx, r13
 * 0000000140A09D0B: mov     rax, rcx
 * 0000000140A09D0E: rol     rax, 11h
 * 0000000140A09D12: xor     rcx, rax
 * 0000000140A09D15: mov     rax, r12
 * 0000000140A09D18: mul     rcx
 * 0000000140A09D1B: xor     r9d, eax
 * 0000000140A09D1E: mov     [rbp+0BE0h+var_458], rdx
 * 0000000140A09D25: xor     r9d, edx
 * 0000000140A09D28: mov     rax, rdi
 * 0000000140A09D2B: and     r9d, 3Fh
 * 0000000140A09D2F: mov     edx, 0FFFFFFFFh
 * 0000000140A09D34: cmovz   r9d, eax
 * 0000000140A09D38: add     r15d, edx
 * 0000000140A09D3B: jnz     short loc_140A09CDB
 * 0000000140A09D3D: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A09D44: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A09D4B: and     r11d, 7Fh
 * 0000000140A09D4F: mov     r13d, 1
 * 0000000140A09D55: cmp     r11d, 8
 * 0000000140A09D59: jb      short loc_140A09D7D
 * 0000000140A09D5B: mov     edx, r11d
 * 0000000140A09D5E: shr     rdx, 3
 * 0000000140A09D62: xor     r8, [r10]
 * 0000000140A09D65: mov     ecx, r9d
 * 0000000140A09D68: rol     r8, cl
 * 0000000140A09D6B: add     r10, 8
 * 0000000140A09D6F: add     r11d, 0FFFFFFF8h
 * 0000000140A09D73: sub     rdx, r13
 * 0000000140A09D76: jnz     short loc_140A09D62
 * 0000000140A09D78: mov     edx, 0FFFFFFFFh
 * 0000000140A09D7D: test    r11d, r11d
 * 0000000140A09D80: jz      short loc_140A09D97
 * 0000000140A09D82: movzx   eax, byte ptr [r10]
 * 0000000140A09D86: mov     ecx, r9d
 * 0000000140A09D89: xor     r8, rax
 * 0000000140A09D8C: add     r10, r13
 * 0000000140A09D8F: rol     r8, cl
 * 0000000140A09D92: add     r11d, edx
 * 0000000140A09D95: jnz     short loc_140A09D82
 * 0000000140A09D97: mov     rax, [rsp+0CE0h+var_C70]
 * 0000000140A09D9C: lea     rcx, [rbp+0BE0h+var_D0]
 * 0000000140A09DA3: mov     r9d, 4
 * 0000000140A09DA9: mov     [rsi+7B8h], rax
 * 0000000140A09DB0: mov     eax, [rbp+0BE0h+var_BE8]
 * 0000000140A09DB3: mov     edx, r9d
 * 0000000140A09DB6: add     [rsi+828h], eax
 * 0000000140A09DBC: lea     r10d, [r9+1Ch]
 * 0000000140A09DC0: mov     rax, [rcx]
 * 0000000140A09DC3: add     r10d, 0FFFFFFF8h
 * 0000000140A09DC7: mov     [r14], rax
 * 0000000140A09DCA: add     rcx, 8
 * 0000000140A09DCE: add     r14, 8
 * 0000000140A09DD2: sub     rdx, r13
 * 0000000140A09DD5: jnz     short loc_140A09DC0
 * 0000000140A09DD7: xor     r11d, r11d
 * 0000000140A09DDA: test    r10d, r10d
 * 0000000140A09DDD: jz      short loc_140A09DF8
 * 0000000140A09DDF: mov     r11d, 0FFFFFFFFh
 * 0000000140A09DE5: mov     al, [rcx]
 * 0000000140A09DE7: add     rcx, r13
 * 0000000140A09DEA: mov     [r14], al
 * 0000000140A09DED: add     r14, r13
 * 0000000140A09DF0: add     r10d, r11d
 * 0000000140A09DF3: jnz     short loc_140A09DE5
 * 0000000140A09DF5: xor     r11d, r11d
 * 0000000140A09DF8: mov     [rsi+7B8h], r8
 * 0000000140A09DFF: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A09E09: jnz     loc_140A0B037
 * 0000000140A09E0F: mov     eax, r11d
 * 0000000140A09E12: mov     rcx, rsi
 * 0000000140A09E15: mov     r11d, 19h
 * 0000000140A09E1B: xor     [rcx], rbx
 * 0000000140A09E1E: add     eax, r13d
 * 0000000140A09E21: lea     rcx, [rcx+8]
 * 0000000140A09E25: cmp     eax, r11d
 * 0000000140A09E28: jb      short loc_140A09E1B
 * 0000000140A09E2A: xor     r15d, r15d
 * 0000000140A09E2D: mov     [rbp+0BE0h+var_A00], rbx
 * 0000000140A09E34: mov     r8d, r12d
 * 0000000140A09E37: test    r12d, r12d
 * 0000000140A09E3A: jz      loc_140A0A67C
 * 0000000140A09E40: mov     edx, r12d
 * 0000000140A09E43: dec     rdx
 * 0000000140A09E46: lea     rdx, [rcx+rdx*8]
 * 0000000140A09E4A: xor     [rdx], rbx
 * 0000000140A09E4D: lea     rax, [rbp+0BE0h+var_A00]
 * 0000000140A09E54: mov     ecx, r8d
 * 0000000140A09E57: lea     rdx, [rdx-8]
 * 0000000140A09E5B: ror     rbx, cl
 * 0000000140A09E5E: mov     [rbp+0BE0h+var_A00], rbx
 * 0000000140A09E65: and     ebx, 3Fh
 * 0000000140A09E68: btc     [rax], rbx
 * 0000000140A09E6C: sub     r8d, r13d
 * 0000000140A09E6F: jz      loc_140A0A67C
 * 0000000140A09E75: mov     rbx, [rbp+0BE0h+var_A00]
 * 0000000140A09E7C: jmp     short loc_140A09E4A
 * 0000000140A09E7E: mov     r9d, r15d
 * 0000000140A09E81: mov     r8, r11
 * 0000000140A09E84: cmp     r15d, 8
 * 0000000140A09E88: jb      short loc_140A09ED8
 * 0000000140A09E8A: mov     r10d, r15d
 * 0000000140A09E8D: mov     r13d, 1
 * 0000000140A09E93: shr     r10, 3
 * 0000000140A09E97: mov     r14, 7010008004002001h
 * 0000000140A09EA1: rdtsc
 * 0000000140A09EA3: shl     rdx, 20h
 * 0000000140A09EA7: add     r9d, 0FFFFFFF8h
 * 0000000140A09EAB: or      rax, rdx
 * 0000000140A09EAE: mov     rcx, rax
 * 0000000140A09EB1: ror     rax, 3
 * 0000000140A09EB5: xor     rcx, rax
 * 0000000140A09EB8: mov     rax, r14
 * 0000000140A09EBB: mul     rcx
 * 0000000140A09EBE: mov     [rbp+0BE0h+var_4A0], rdx
 * 0000000140A09EC5: xor     rdx, rax
 * 0000000140A09EC8: mov     [r8], rdx
 * 0000000140A09ECB: add     r8, 8
 * 0000000140A09ECF: sub     r10, r13
 * 0000000140A09ED2: jnz     short loc_140A09EA1
 * 0000000140A09ED4: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A09ED8: test    r9d, r9d
 * 0000000140A09EDB: jz      short loc_140A09F20
 * 0000000140A09EDD: rdtsc
 * 0000000140A09EDF: shl     rdx, 20h
 * 0000000140A09EE3: or      rax, rdx
 * 0000000140A09EE6: mov     rcx, rax
 * 0000000140A09EE9: ror     rax, 3
 * 0000000140A09EED: xor     rcx, rax
 * 0000000140A09EF0: mov     rax, 7010008004002001h
 * 0000000140A09EFA: mul     rcx
 * 0000000140A09EFD: mov     ecx, 0FFFFFFFFh
 * 0000000140A09F02: mov     [rbp+0BE0h+var_498], rdx
 * 0000000140A09F09: xor     rdx, rax
 * 0000000140A09F0C: mov     eax, 1
 * 0000000140A09F11: mov     [r8], dl
 * 0000000140A09F14: add     r8, rax
 * 0000000140A09F17: shr     rdx, 8
 * 0000000140A09F1B: add     r9d, ecx
 * 0000000140A09F1E: jnz     short loc_140A09F11
 * 0000000140A09F20: mov     r9d, r15d
 * 0000000140A09F23: sub     ebx, r15d
 * 0000000140A09F26: add     r9, r11
 * 0000000140A09F29: mov     r15d, 1
 * 0000000140A09F2F: lea     r8, [r9+0AA0h]
 * 0000000140A09F36: cmp     ebx, 8
 * 0000000140A09F39: jb      short loc_140A09F7E
 * 0000000140A09F3B: mov     r10d, ebx
 * 0000000140A09F3E: mov     r13, 7010008004002001h
 * 0000000140A09F48: shr     r10, 3
 * 0000000140A09F4C: rdtsc
 * 0000000140A09F4E: shl     rdx, 20h
 * 0000000140A09F52: add     ebx, 0FFFFFFF8h
 * 0000000140A09F55: or      rax, rdx
 * 0000000140A09F58: mov     rcx, rax
 * 0000000140A09F5B: ror     rax, 3
 * 0000000140A09F5F: xor     rcx, rax
 * 0000000140A09F62: mov     rax, r13
 * 0000000140A09F65: mul     rcx
 * 0000000140A09F68: mov     [rbp+0BE0h+var_490], rdx
 * 0000000140A09F6F: xor     rdx, rax
 * 0000000140A09F72: mov     [r8], rdx
 * 0000000140A09F75: add     r8, 8
 * 0000000140A09F79: sub     r10, r15
 * 0000000140A09F7C: jnz     short loc_140A09F4C
 * 0000000140A09F7E: test    ebx, ebx
 * 0000000140A09F80: jz      short loc_140A09FBF
 * 0000000140A09F82: rdtsc
 * 0000000140A09F84: shl     rdx, 20h
 * 0000000140A09F88: or      rax, rdx
 * 0000000140A09F8B: mov     rcx, rax
 * 0000000140A09F8E: ror     rax, 3
 * 0000000140A09F92: xor     rcx, rax
 * 0000000140A09F95: mov     rax, 7010008004002001h
 * 0000000140A09F9F: mul     rcx
 * 0000000140A09FA2: mov     [rbp+0BE0h+var_488], rdx
 * 0000000140A09FA9: xor     rdx, rax
 * 0000000140A09FAC: mov     eax, 0FFFFFFFFh
 * 0000000140A09FB1: mov     [r8], dl
 * 0000000140A09FB4: add     r8, r15
 * 0000000140A09FB7: shr     rdx, 8
 * 0000000140A09FBB: add     ebx, eax
 * 0000000140A09FBD: jnz     short loc_140A09FB1
 * 0000000140A09FBF: test    r12, r12
 * 0000000140A09FC2: jz      short loc_140A09FC8
 * 0000000140A09FC4: mov     [r12], r11
 * 0000000140A09FC8: xor     r11d, r11d
 * 0000000140A09FCB: test    r9, r9
 * 0000000140A09FCE: jz      loc_140A09ADE
 * 0000000140A09FD4: mov     r10d, 0AA0h
 * 0000000140A09FDA: mov     [r14+8], r9
 * 0000000140A09FDE: mov     [r14+10h], r10d
 * 0000000140A09FE2: mov     r8d, r10d
 * 0000000140A09FE5: mov     r14d, 154h
 * 0000000140A09FEB: mov     rcx, rsi
 * 0000000140A09FEE: mov     rdx, r9
 * 0000000140A09FF1: mov     rax, [rcx]
 * 0000000140A09FF4: add     r8d, 0FFFFFFF8h
 * 0000000140A09FF8: mov     [rdx], rax
 * 0000000140A09FFB: add     rcx, 8
 * 0000000140A09FFF: add     rdx, 8
 * 0000000140A0A003: sub     r14, r15
 * 0000000140A0A006: jnz     short loc_140A09FF1
 * 0000000140A0A008: test    r8d, r8d
 * 0000000140A0A00B: jz      short loc_140A0A028
 * 0000000140A0A00D: mov     r10d, 0FFFFFFFFh
 * 0000000140A0A013: mov     al, [rcx]
 * 0000000140A0A015: add     rcx, r15
 * 0000000140A0A018: mov     [rdx], al
 * 0000000140A0A01A: add     rdx, r15
 * 0000000140A0A01D: add     r8d, r10d
 * 0000000140A0A020: jnz     short loc_140A0A013
 * 0000000140A0A022: mov     r10d, 0AA0h
 * 0000000140A0A028: bts     dword ptr [r9+990h], 13h
 * 0000000140A0A031: mov     r14, 7010008004002001h
 * 0000000140A0A03B: mov     [r9+7E4h], r10d
 * 0000000140A0A042: mov     [r9+808h], r10d
 * 0000000140A0A049: and     dword ptr [r9+990h], 0FFFFFFFDh
 * 0000000140A0A051: mov     eax, [r9+7E4h]
 * 0000000140A0A058: mov     [r9+0A2Ch], eax
 * 0000000140A0A05F: add     eax, 0FFFFFF38h
 * 0000000140A0A064: mov     ecx, [r9+954h]
 * 0000000140A0A06B: mov     [rbp+0BE0h+var_C28], ecx
 * 0000000140A0A06E: mov     ecx, [r9+990h]
 * 0000000140A0A075: mov     dword ptr [rbp+0BE0h+arg_8], ecx
 * 0000000140A0A07B: mov     rcx, [r9+4E8h]
 * 0000000140A0A082: shr     eax, 3
 * 0000000140A0A085: mov     [rbp+0BE0h+var_C30], rcx
 * 0000000140A0A089: mov     rcx, [r9+5C0h]
 * 0000000140A0A090: mov     [rbp+0BE0h+var_C40], rcx
 * 0000000140A0A094: mov     [rbp+0BE0h+var_C38], eax
 * 0000000140A0A097: mov     [r9+0C4h], eax
 * 0000000140A0A09E: rdtsc
 * 0000000140A0A0A0: shl     rdx, 20h
 * 0000000140A0A0A4: or      rax, rdx
 * 0000000140A0A0A7: mov     rcx, rax
 * 0000000140A0A0AA: ror     rax, 3
 * 0000000140A0A0AE: xor     rcx, rax
 * 0000000140A0A0B1: mov     rax, r14
 * 0000000140A0A0B4: mul     rcx
 * 0000000140A0A0B7: mov     rbx, rdx
 * 0000000140A0A0BA: mov     [rbp+0BE0h+var_480], rdx
 * 0000000140A0A0C1: xor     rbx, rax
 * 0000000140A0A0C4: jz      short loc_140A0A09E
 * 0000000140A0A0C6: mov     rax, [r9+7B8h]
 * 0000000140A0A0CD: lea     r12, [r9+798h]
 * 0000000140A0A0D4: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0A0D8: lea     rdx, [rbp+0BE0h+var_F0]
 * 0000000140A0A0DF: mov     r15d, 20h ; ' '
 * 0000000140A0A0E5: mov     [rbp+0BE0h+var_BD0], rax
 * 0000000140A0A0E9: mov     eax, [r9+828h]
 * 0000000140A0A0F0: mov     r8d, r15d
 * 0000000140A0A0F3: mov     [rbp+0BE0h+var_BE8], eax
 * 0000000140A0A0F6: mov     rcx, r12
 * 0000000140A0A0F9: lea     r11d, [r15-1Ch]
 * 0000000140A0A0FD: mov     r10d, r11d
 * 0000000140A0A100: lea     r13d, [r15-1Fh]
 * 0000000140A0A104: mov     rax, [rcx]
 * 0000000140A0A107: add     r8d, 0FFFFFFF8h
 * 0000000140A0A10B: mov     [rdx], rax
 * 0000000140A0A10E: add     rcx, 8
 * 0000000140A0A112: add     rdx, 8
 * 0000000140A0A116: sub     r10, r13
 * 0000000140A0A119: jnz     short loc_140A0A104
 * 0000000140A0A11B: test    r8d, r8d
 * 0000000140A0A11E: jz      short loc_140A0A138
 * 0000000140A0A120: mov     r10d, 0FFFFFFFFh
 * 0000000140A0A126: mov     al, [rcx]
 * 0000000140A0A128: add     rcx, r13
 * 0000000140A0A12B: mov     [rdx], al
 * 0000000140A0A12D: add     rdx, r13
 * 0000000140A0A130: add     r8d, r10d
 * 0000000140A0A133: jnz     short loc_140A0A126
 * 0000000140A0A135: xor     r10d, r10d
 * 0000000140A0A138: mov     [r9+7B8h], r10
 * 0000000140A0A13F: mov     ecx, r15d
 * 0000000140A0A142: mov     [r9+828h], r10d
 * 0000000140A0A149: mov     rax, r12
 * 0000000140A0A14C: mov     rdx, r11
 * 0000000140A0A14F: mov     [rax], r10
 * 0000000140A0A152: add     ecx, 0FFFFFFF8h
 * 0000000140A0A155: add     rax, 8
 * 0000000140A0A159: sub     rdx, r13
 * 0000000140A0A15C: jnz     short loc_140A0A14F
 * 0000000140A0A15E: test    ecx, ecx
 * 0000000140A0A160: jz      short loc_140A0A171
 * 0000000140A0A162: mov     edx, 0FFFFFFFFh
 * 0000000140A0A167: mov     [rax], r10b
 * 0000000140A0A16A: add     rax, r13
 * 0000000140A0A16D: add     ecx, edx
 * 0000000140A0A16F: jnz     short loc_140A0A167
 * 0000000140A0A171: mov     eax, [r9+7E4h]
 * 0000000140A0A178: mov     r10, r9
 * 0000000140A0A17B: add     [r9+828h], eax
 * 0000000140A0A182: mov     rax, r9
 * 0000000140A0A185: mov     r11d, [r9+7E4h]
 * 0000000140A0A18C: mov     r15d, [r9+814h]
 * 0000000140A0A193: mov     rdx, [r9+818h]
 * 0000000140A0A19A: lea     rcx, [r9+r11]
 * 0000000140A0A19E: cmp     r9, rcx
 * 0000000140A0A1A1: jnb     short loc_140A0A1B4
 * 0000000140A0A1A3: mov     r8d, 40h ; '@'
 * 0000000140A0A1A9: prefetchnta byte ptr [rax]
 * 0000000140A0A1AC: add     rax, r8
 * 0000000140A0A1AF: cmp     rax, rcx
 * 0000000140A0A1B2: jb      short loc_140A0A1A9
 * 0000000140A0A1B4: mov     r13d, r11d
 * 0000000140A0A1B7: mov     r8, rdx
 * 0000000140A0A1BA: shr     r13d, 7
 * 0000000140A0A1BE: test    r13d, r13d
 * 0000000140A0A1C1: jz      loc_140A0A248
 * 0000000140A0A1C7: mov     rdi, rdx
 * 0000000140A0A1CA: mov     r12, 7010008004002001h
 * 0000000140A0A1D4: mov     edx, 8
 * 0000000140A0A1D9: lea     r14d, [rdx-7]
 * 0000000140A0A1DD: mov     rax, [r10]
 * 0000000140A0A1E0: mov     ecx, r15d
 * 0000000140A0A1E3: xor     rax, r8
 * 0000000140A0A1E6: mov     r8, [r10+8]
 * 0000000140A0A1EA: rol     rax, cl
 * 0000000140A0A1ED: add     r10, 10h
 * 0000000140A0A1F1: xor     r8, rax
 * 0000000140A0A1F4: rol     r8, cl
 * 0000000140A0A1F7: sub     rdx, r14
 * 0000000140A0A1FA: jnz     short loc_140A0A1DD
 * 0000000140A0A1FC: mov     rcx, r10
 * 0000000140A0A1FF: sub     rcx, r9
 * 0000000140A0A202: xor     rcx, rdi
 * 0000000140A0A205: mov     rax, rcx
 * 0000000140A0A208: rol     rax, 11h
 * 0000000140A0A20C: xor     rcx, rax
 * 0000000140A0A20F: mov     rax, r12
 * 0000000140A0A212: mul     rcx
 * 0000000140A0A215: mov     [rbp+0BE0h+var_478], rdx
 * 0000000140A0A21C: xor     edx, eax
 * 0000000140A0A21E: xor     r15d, edx
 * 0000000140A0A221: mov     rax, r14
 * 0000000140A0A224: and     r15d, 3Fh
 * 0000000140A0A228: cmovz   r15d, eax
 * 0000000140A0A22C: mov     eax, 0FFFFFFFFh
 * 0000000140A0A231: add     r13d, eax
 * 0000000140A0A234: jnz     short loc_140A0A1D4
 * 0000000140A0A236: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0A23A: lea     r12, [r9+798h]
 * 0000000140A0A241: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0A248: and     r11d, 7Fh
 * 0000000140A0A24C: mov     r13d, 1
 * 0000000140A0A252: cmp     r11d, 8
 * 0000000140A0A256: jb      short loc_140A0A275
 * 0000000140A0A258: mov     edx, r11d
 * 0000000140A0A25B: shr     rdx, 3
 * 0000000140A0A25F: xor     r8, [r10]
 * 0000000140A0A262: mov     ecx, r15d
 * 0000000140A0A265: rol     r8, cl
 * 0000000140A0A268: add     r10, 8
 * 0000000140A0A26C: add     r11d, 0FFFFFFF8h
 * 0000000140A0A270: sub     rdx, r13
 * 0000000140A0A273: jnz     short loc_140A0A25F
 * 0000000140A0A275: test    r11d, r11d
 * 0000000140A0A278: jz      short loc_140A0A299
 * 0000000140A0A27A: mov     r14d, 0FFFFFFFFh
 * 0000000140A0A280: movzx   eax, byte ptr [r10]
 * 0000000140A0A284: mov     ecx, r15d
 * 0000000140A0A287: xor     r8, rax
 * 0000000140A0A28A: add     r10, r13
 * 0000000140A0A28D: rol     r8, cl
 * 0000000140A0A290: add     r11d, r14d
 * 0000000140A0A293: jnz     short loc_140A0A280
 * 0000000140A0A295: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0A299: mov     rax, [rbp+0BE0h+var_BD0]
 * 0000000140A0A29D: lea     rcx, [rbp+0BE0h+var_F0]
 * 0000000140A0A2A4: mov     [r9+7B8h], rax
 * 0000000140A0A2AB: mov     edx, 20h ; ' '
 * 0000000140A0A2B0: mov     eax, [rbp+0BE0h+var_BE8]
 * 0000000140A0A2B3: add     [r9+828h], eax
 * 0000000140A0A2BA: lea     r11d, [rdx-1Ch]
 * 0000000140A0A2BE: mov     r10d, r11d
 * 0000000140A0A2C1: mov     rax, [rcx]
 * 0000000140A0A2C4: add     edx, 0FFFFFFF8h
 * 0000000140A0A2C7: mov     [r12], rax
 * 0000000140A0A2CB: add     rcx, 8
 * 0000000140A0A2CF: add     r12, 8
 * 0000000140A0A2D3: sub     r10, r13
 * 0000000140A0A2D6: jnz     short loc_140A0A2C1
 * 0000000140A0A2D8: test    edx, edx
 * 0000000140A0A2DA: jz      short loc_140A0A2F6
 * 0000000140A0A2DC: mov     r10d, 0FFFFFFFFh
 * 0000000140A0A2E2: mov     al, [rcx]
 * 0000000140A0A2E4: add     rcx, r13
 * 0000000140A0A2E7: mov     [r12], al
 * 0000000140A0A2EB: add     r12, r13
 * 0000000140A0A2EE: add     edx, r10d
 * 0000000140A0A2F1: jnz     short loc_140A0A2E2
 * 0000000140A0A2F3: xor     r10d, r10d
 * 0000000140A0A2F6: mov     [r9+7B8h], r8
 * 0000000140A0A2FD: test    dword ptr [r9+990h], 40000000h
 * 0000000140A0A308: jnz     loc_140A0A52C
 * 0000000140A0A30E: mov     rcx, r9
 * 0000000140A0A311: mov     eax, r10d
 * 0000000140A0A314: mov     r15d, 19h
 * 0000000140A0A31A: xor     [rcx], rbx
 * 0000000140A0A31D: add     eax, r13d
 * 0000000140A0A320: lea     rcx, [rcx+8]
 * 0000000140A0A324: cmp     eax, r15d
 * 0000000140A0A327: jb      short loc_140A0A31A
 * 0000000140A0A329: mov     r13d, [rbp+0BE0h+var_C38]
 * 0000000140A0A32D: mov     [rbp+0BE0h+var_A08], rbx
 * 0000000140A0A334: mov     r8d, r13d
 * 0000000140A0A337: test    r13d, r13d
 * 0000000140A0A33A: jz      short loc_140A0A37E
 * 0000000140A0A33C: lea     rdx, [r13-1]
 * 0000000140A0A340: mov     r14d, 1
 * 0000000140A0A346: lea     rdx, [rcx+rdx*8]
 * 0000000140A0A34A: xor     [rdx], rbx
 * 0000000140A0A34D: lea     rax, [rbp+0BE0h+var_A08]
 * 0000000140A0A354: mov     ecx, r8d
 * 0000000140A0A357: lea     rdx, [rdx-8]
 * 0000000140A0A35B: ror     rbx, cl
 * 0000000140A0A35E: mov     [rbp+0BE0h+var_A08], rbx
 * 0000000140A0A365: and     ebx, 3Fh
 * 0000000140A0A368: btc     [rax], rbx
 * 0000000140A0A36C: sub     r8d, r14d
 * 0000000140A0A36F: jz      short loc_140A0A37A
 * 0000000140A0A371: mov     rbx, [rbp+0BE0h+var_A08]
 * 0000000140A0A378: jmp     short loc_140A0A34A
 * 0000000140A0A37A: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0A37E: mov     eax, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0A384: bt      eax, 13h
 * 0000000140A0A388: jnb     short loc_140A0A3D5
 * 0000000140A0A38A: rdtsc
 * 0000000140A0A38C: shl     rdx, 20h
 * 0000000140A0A390: or      rax, rdx
 * 0000000140A0A393: mov     rcx, rax
 * 0000000140A0A396: ror     rax, 3
 * 0000000140A0A39A: xor     rcx, rax
 * 0000000140A0A39D: mov     rax, 7010008004002001h
 * 0000000140A0A3A7: mul     rcx
 * 0000000140A0A3AA: mov     rcx, rdx
 * 0000000140A0A3AD: mov     [rbp+0BE0h+var_470], rdx
 * 0000000140A0A3B4: xor     rcx, rax
 * 0000000140A0A3B7: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A0A3C1: mul     rcx
 * 0000000140A0A3C4: shr     rdx, 1
 * 0000000140A0A3C7: lea     rax, [rdx+rdx*2]
 * 0000000140A0A3CB: cmp     rcx, rax
 * 0000000140A0A3CE: jz      short loc_140A0A3DF
 * 0000000140A0A3D0: jmp     loc_140A0A526
 * 0000000140A0A3D5: bt      eax, 8
 * 0000000140A0A3D9: jb      loc_140A0A526
 * 0000000140A0A3DF: mov     r14d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0A3E6: mov     eax, 1
 * 0000000140A0A3EB: mov     rsi, [rbp+0BE0h+var_C40]
 * 0000000140A0A3EF: mov     ecx, r9d
 * 0000000140A0A3F2: mov     [rbp+0BE0h+var_B7D], al
 * 0000000140A0A3F5: mov     r12d, r15d
 * 0000000140A0A3F8: mov     eax, 2
 * 0000000140A0A3FD: mov     [rbp+0BE0h+var_B80], r10b
 * 0000000140A0A401: mov     [rbp+0BE0h+var_B7B], al
 * 0000000140A0A404: mov     r10, r9
 * 0000000140A0A407: mov     eax, 0Ch
 * 0000000140A0A40C: ror     r10, cl
 * 0000000140A0A40F: mov     [rbp+0BE0h+var_B7F], al
 * 0000000140A0A412: xor     ecx, ecx
 * 0000000140A0A414: mov     eax, 0Fh
 * 0000000140A0A419: mov     [rbp+0BE0h+var_B7A], r11b
 * 0000000140A0A41D: mov     [rbp+0BE0h+var_B7E], al
 * 0000000140A0A420: mov     r11, r9
 * 0000000140A0A423: mov     [rbp+0BE0h+var_B78], 3
 * 0000000140A0A427: mov     ebx, ecx
 * 0000000140A0A429: mov     [rbp+0BE0h+var_B77], 5
 * 0000000140A0A42D: lea     r15d, [rax+1]
 * 0000000140A0A431: mov     [rbp+0BE0h+var_B74], 6
 * 0000000140A0A435: mov     eax, [rbp+0BE0h+var_C28]
 * 0000000140A0A438: mov     [rbp+0BE0h+var_BD0], rax
 * 0000000140A0A43C: mov     edi, eax
 * 0000000140A0A43E: mov     [rbp+0BE0h+var_B79], 7
 * 0000000140A0A442: mov     [rbp+0BE0h+var_B73], 8
 * 0000000140A0A446: mov     [rbp+0BE0h+var_B76], 9
 * 0000000140A0A44A: mov     [rbp+0BE0h+var_B72], 0Ah
 * 0000000140A0A44E: mov     [rbp+0BE0h+var_B7C], 0Bh
 * 0000000140A0A452: mov     [rbp+0BE0h+var_B71], 0Dh
 * 0000000140A0A456: mov     [rbp+0BE0h+var_B75], 0Eh
 * 0000000140A0A45A: test    r15d, r15d
 * 0000000140A0A45D: jz      short loc_140A0A495
 * 0000000140A0A45F: mov     rdx, [r11]
 * 0000000140A0A462: mov     edi, 0Fh
 * 0000000140A0A467: mov     r8d, r15d
 * 0000000140A0A46A: lea     r13d, [rdi-0Eh]
 * 0000000140A0A46E: movzx   eax, byte ptr [r11]
 * 0000000140A0A472: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140A0A476: and     rax, rdi
 * 0000000140A0A479: movzx   ecx, [rbp+rax+0BE0h+var_B80]
 * 0000000140A0A47E: or      rdx, rcx
 * 0000000140A0A481: ror     rdx, 4
 * 0000000140A0A485: mov     [r11], rdx
 * 0000000140A0A488: sub     r8, r13
 * 0000000140A0A48B: jnz     short loc_140A0A46E
 * 0000000140A0A48D: mov     r13d, [rbp+0BE0h+var_C38]
 * 0000000140A0A491: mov     rdi, [rbp+0BE0h+var_BD0]
 * 0000000140A0A495: mov     rdx, [r11]
 * 0000000140A0A498: mov     eax, ebx
 * 0000000140A0A49A: sub     rdx, rax
 * 0000000140A0A49D: sub     rdx, r9
 * 0000000140A0A4A0: bt      r14d, 9
 * 0000000140A0A4A5: jb      short loc_140A0A4BB
 * 0000000140A0A4A7: xor     rdx, [rbp+0BE0h+var_C30]
 * 0000000140A0A4AB: mov     ecx, esi
 * 0000000140A0A4AD: bswap   rdx
 * 0000000140A0A4B0: xor     rdx, r10
 * 0000000140A0A4B3: ror     rdx, cl
 * 0000000140A0A4B6: xor     rdx, rsi
 * 0000000140A0A4B9: jmp     short loc_140A0A4BE
 * 0000000140A0A4BB: xor     rdx, r10
 * 0000000140A0A4BE: mov     [r11], rdx
 * 0000000140A0A4C1: mov     ecx, edx
 * 0000000140A0A4C3: mov     r8d, edx
 * 0000000140A0A4C6: mov     eax, ebx
 * 0000000140A0A4C8: xor     r8d, 0EFFh
 * 0000000140A0A4CF: mov     edx, 0C8h
 * 0000000140A0A4D4: sub     edx, ebx
 * 0000000140A0A4D6: not     ecx
 * 0000000140A0A4D8: xor     rdx, rax
 * 0000000140A0A4DB: add     r11, 8
 * 0000000140A0A4DF: ror     rdx, cl
 * 0000000140A0A4E2: mov     cl, r8b
 * 0000000140A0A4E5: xor     r10, rdx
 * 0000000140A0A4E8: rol     r10, cl
 * 0000000140A0A4EB: add     r10, r9
 * 0000000140A0A4EE: xor     r10, rdi
 * 0000000140A0A4F1: inc     ebx
 * 0000000140A0A4F3: cmp     ebx, 19h
 * 0000000140A0A4F6: jnz     short loc_140A0A50D
 * 0000000140A0A4F8: bt      r14d, 13h
 * 0000000140A0A4FD: lea     ecx, [rbx-19h]
 * 0000000140A0A500: mov     eax, ecx
 * 0000000140A0A502: lea     r15d, [rbx-18h]
 * 0000000140A0A506: cmovnb  eax, r13d
 * 0000000140A0A50A: add     r12d, eax
 * 0000000140A0A50D: cmp     ebx, r12d
 * 0000000140A0A510: jb      loc_140A0A45A
 * 0000000140A0A516: mov     rsi, [rsp+0CE0h+var_C80]
 * 0000000140A0A51B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0A522: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0A526: mov     r13d, 1
 * 0000000140A0A52C: mov     r15, [r14+8]
 * 0000000140A0A530: mov     r11d, [r14+10h]
 * 0000000140A0A534: mov     r10, r15
 * 0000000140A0A537: add     [rsi+828h], r11d
 * 0000000140A0A53E: mov     rax, r15
 * 0000000140A0A541: mov     r9d, [rsi+814h]
 * 0000000140A0A548: mov     r12, [rsi+818h]
 * 0000000140A0A54F: lea     rcx, [r15+r11]
 * 0000000140A0A553: mov     dword ptr [rbp+0BE0h+arg_8], r11d
 * 0000000140A0A55A: cmp     r15, rcx
 * 0000000140A0A55D: jnb     short loc_140A0A56F
 * 0000000140A0A55F: mov     edx, 40h ; '@'
 * 0000000140A0A564: prefetchnta byte ptr [rax]
 * 0000000140A0A567: add     rax, rdx
 * 0000000140A0A56A: cmp     rax, rcx
 * 0000000140A0A56D: jb      short loc_140A0A564
 * 0000000140A0A56F: mov     ebx, r11d
 * 0000000140A0A572: mov     r8, r12
 * 0000000140A0A575: shr     ebx, 7
 * 0000000140A0A578: test    ebx, ebx
 * 0000000140A0A57A: jz      short loc_140A0A5ED
 * 0000000140A0A57C: mov     edi, 0FFFFFFFFh
 * 0000000140A0A581: mov     r11, 7010008004002001h
 * 0000000140A0A58B: mov     eax, 8
 * 0000000140A0A590: xor     r8, [r10]
 * 0000000140A0A593: mov     ecx, r9d
 * 0000000140A0A596: rol     r8, cl
 * 0000000140A0A599: xor     r8, [r10+8]
 * 0000000140A0A59D: add     r10, 10h
 * 0000000140A0A5A1: rol     r8, cl
 * 0000000140A0A5A4: sub     rax, r13
 * 0000000140A0A5A7: jnz     short loc_140A0A590
 * 0000000140A0A5A9: mov     rcx, r10
 * 0000000140A0A5AC: sub     rcx, r15
 * 0000000140A0A5AF: xor     rcx, r12
 * 0000000140A0A5B2: mov     rax, rcx
 * 0000000140A0A5B5: rol     rax, 11h
 * 0000000140A0A5B9: xor     rcx, rax
 * 0000000140A0A5BC: mov     rax, r11
 * 0000000140A0A5BF: mul     rcx
 * 0000000140A0A5C2: xor     r9d, eax
 * 0000000140A0A5C5: mov     [rbp+0BE0h+var_468], rdx
 * 0000000140A0A5CC: xor     r9d, edx
 * 0000000140A0A5CF: and     r9d, 3Fh
 * 0000000140A0A5D3: cmovz   r9d, r13d
 * 0000000140A0A5D7: add     ebx, edi
 * 0000000140A0A5D9: jnz     short loc_140A0A58B
 * 0000000140A0A5DB: mov     r11d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0A5E2: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0A5E9: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0A5ED: and     r11d, 7Fh
 * 0000000140A0A5F1: mov     r15d, 1
 * 0000000140A0A5F7: cmp     r11d, 8
 * 0000000140A0A5FB: jb      short loc_140A0A61A
 * 0000000140A0A5FD: mov     eax, r11d
 * 0000000140A0A600: shr     rax, 3
 * 0000000140A0A604: xor     r8, [r10]
 * 0000000140A0A607: mov     ecx, r9d
 * 0000000140A0A60A: rol     r8, cl
 * 0000000140A0A60D: add     r10, 8
 * 0000000140A0A611: add     r11d, 0FFFFFFF8h
 * 0000000140A0A615: sub     rax, r15
 * 0000000140A0A618: jnz     short loc_140A0A604
 * 0000000140A0A61A: test    r11d, r11d
 * 0000000140A0A61D: jz      short loc_140A0A63E
 * 0000000140A0A61F: mov     r14d, 0FFFFFFFFh
 * 0000000140A0A625: movzx   eax, byte ptr [r10]
 * 0000000140A0A629: mov     ecx, r9d
 * 0000000140A0A62C: xor     r8, rax
 * 0000000140A0A62F: add     r10, r15
 * 0000000140A0A632: rol     r8, cl
 * 0000000140A0A635: add     r11d, r14d
 * 0000000140A0A638: jnz     short loc_140A0A625
 * 0000000140A0A63A: mov     r14, [rbp+0BE0h+var_C20]
 * 0000000140A0A63E: mov     rax, r8
 * 0000000140A0A641: shr     rax, 1Fh
 * 0000000140A0A645: xor     r11d, r11d
 * 0000000140A0A648: jmp     short loc_140A0A651
 * 0000000140A0A64A: xor     r8d, eax
 * 0000000140A0A64D: shr     rax, 1Fh
 * 0000000140A0A651: test    rax, rax
 * 0000000140A0A654: jnz     short loc_140A0A64A
 * 0000000140A0A656: btr     r8d, 1Fh
 * 0000000140A0A65B: mov     [r14+14h], r8d
 * 0000000140A0A65F: jmp     loc_140A09ADE
 * 0000000140A0A664: xor     r11d, r11d
 * 0000000140A0A667: lea     r15d, [r11+1]
 * 0000000140A0A66B: jmp     loc_140A09ADE
 * 0000000140A0A670: xor     r11d, r11d
 * 0000000140A0A673: lea     r15d, [r11+1]
 * 0000000140A0A677: jmp     loc_140A09AE8
 * 0000000140A0A67C: mov     r13d, [rbp+0BE0h+var_C38]
 * 0000000140A0A680: bt      r13d, 13h
 * 0000000140A0A685: jnb     short loc_140A0A6D2
 * 0000000140A0A687: rdtsc
 * 0000000140A0A689: shl     rdx, 20h
 * 0000000140A0A68D: or      rax, rdx
 * 0000000140A0A690: mov     rcx, rax
 * 0000000140A0A693: ror     rax, 3
 * 0000000140A0A697: xor     rcx, rax
 * 0000000140A0A69A: mov     rax, 7010008004002001h
 * 0000000140A0A6A4: mul     rcx
 * 0000000140A0A6A7: mov     rcx, rdx
 * 0000000140A0A6AA: mov     [rbp+0BE0h+var_450], rdx
 * 0000000140A0A6B1: xor     rcx, rax
 * 0000000140A0A6B4: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A0A6BE: mul     rcx
 * 0000000140A0A6C1: shr     rdx, 1
 * 0000000140A0A6C4: lea     rax, [rdx+rdx*2]
 * 0000000140A0A6C8: cmp     rcx, rax
 * 0000000140A0A6CB: jz      short loc_140A0A6DD
 * 0000000140A0A6CD: jmp     loc_140A0B034
 * 0000000140A0A6D2: bt      r13d, 8
 * 0000000140A0A6D7: jb      loc_140A0B034
 * 0000000140A0A6DD: mov     rdi, [rbp+0BE0h+var_BD0]
 * 0000000140A0A6E1: mov     eax, 1
 * 0000000140A0A6E6: mov     [rbp+0BE0h+var_B6D], al
 * 0000000140A0A6E9: mov     ecx, esi
 * 0000000140A0A6EB: mov     eax, 2
 * 0000000140A0A6F0: mov     [rbp+0BE0h+var_B6A], r9b
 * 0000000140A0A6F4: mov     [rbp+0BE0h+var_B6B], al
 * 0000000140A0A6F7: mov     r9, rsi
 * 0000000140A0A6FA: mov     eax, 0Ch
 * 0000000140A0A6FF: mov     [rbp+0BE0h+var_B70], r15b
 * 0000000140A0A703: mov     [rbp+0BE0h+var_B6F], al
 * 0000000140A0A706: mov     r14d, r11d
 * 0000000140A0A709: mov     eax, 0Fh
 * 0000000140A0A70E: mov     [rbp+0BE0h+var_B68], 3
 * 0000000140A0A712: mov     r11d, r15d
 * 0000000140A0A715: mov     [rbp+0BE0h+var_B67], 5
 * 0000000140A0A719: mov     r15d, [rbp+0BE0h+var_C28]
 * 0000000140A0A71D: mov     r10, rsi
 * 0000000140A0A720: mov     [rbp+0BE0h+var_B64], 6
 * 0000000140A0A724: lea     ebx, [rax+1]
 * 0000000140A0A727: mov     [rbp+0BE0h+var_B69], 7
 * 0000000140A0A72B: mov     [rbp+0BE0h+var_B63], 8
 * 0000000140A0A72F: mov     [rbp+0BE0h+var_B66], 9
 * 0000000140A0A733: mov     [rbp+0BE0h+var_B62], 0Ah
 * 0000000140A0A737: mov     [rbp+0BE0h+var_B6C], 0Bh
 * 0000000140A0A73B: mov     [rbp+0BE0h+var_B61], 0Dh
 * 0000000140A0A73F: mov     [rbp+0BE0h+var_B65], 0Eh
 * 0000000140A0A743: mov     [rbp+0BE0h+var_B6E], al
 * 0000000140A0A746: ror     r9, cl
 * 0000000140A0A749: test    ebx, ebx
 * 0000000140A0A74B: jz      short loc_140A0A787
 * 0000000140A0A74D: mov     rdx, [r10]
 * 0000000140A0A750: mov     r13d, 1
 * 0000000140A0A756: mov     r8d, ebx
 * 0000000140A0A759: lea     r12d, [r13+0Eh]
 * 0000000140A0A75D: movzx   eax, byte ptr [r10]
 * 0000000140A0A761: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140A0A765: and     rax, r12
 * 0000000140A0A768: movzx   ecx, [rbp+rax+0BE0h+var_B70]
 * 0000000140A0A76D: or      rdx, rcx
 * 0000000140A0A770: ror     rdx, 4
 * 0000000140A0A774: mov     [r10], rdx
 * 0000000140A0A777: sub     r8, r13
 * 0000000140A0A77A: jnz     short loc_140A0A75D
 * 0000000140A0A77C: mov     r12d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0A783: mov     r13d, [rbp+0BE0h+var_C38]
 * 0000000140A0A787: mov     rdx, [r10]
 * 0000000140A0A78A: mov     eax, r11d
 * 0000000140A0A78D: sub     rdx, rax
 * 0000000140A0A790: sub     rdx, rsi
 * 0000000140A0A793: bt      r13d, 9
 * 0000000140A0A798: jb      short loc_140A0A7AE
 * 0000000140A0A79A: xor     rdx, [rbp+0BE0h+var_C30]
 * 0000000140A0A79E: mov     ecx, edi
 * 0000000140A0A7A0: bswap   rdx
 * 0000000140A0A7A3: xor     rdx, r9
 * 0000000140A0A7A6: ror     rdx, cl
 * 0000000140A0A7A9: xor     rdx, rdi
 * 0000000140A0A7AC: jmp     short loc_140A0A7B1
 * 0000000140A0A7AE: xor     rdx, r9
 * 0000000140A0A7B1: mov     [r10], rdx
 * 0000000140A0A7B4: mov     ecx, edx
 * 0000000140A0A7B6: mov     r8d, edx
 * 0000000140A0A7B9: mov     eax, r11d
 * 0000000140A0A7BC: xor     r8d, 0EFFh
 * 0000000140A0A7C3: mov     edx, 0C8h
 * 0000000140A0A7C8: sub     edx, r11d
 * 0000000140A0A7CB: not     ecx
 * 0000000140A0A7CD: xor     rdx, rax
 * 0000000140A0A7D0: add     r10, 8
 * 0000000140A0A7D4: ror     rdx, cl
 * 0000000140A0A7D7: mov     cl, r8b
 * 0000000140A0A7DA: xor     r9, rdx
 * 0000000140A0A7DD: rol     r9, cl
 * 0000000140A0A7E0: add     r9, rsi
 * 0000000140A0A7E3: xor     r9, r15
 * 0000000140A0A7E6: inc     r11d
 * 0000000140A0A7E9: cmp     r11d, 19h
 * 0000000140A0A7ED: jnz     short loc_140A0A803
 * 0000000140A0A7EF: bt      r13d, 13h
 * 0000000140A0A7F4: lea     eax, [r11-19h]
 * 0000000140A0A7F8: lea     ebx, [r11-18h]
 * 0000000140A0A7FC: cmovnb  eax, r12d
 * 0000000140A0A800: add     r14d, eax
 * 0000000140A0A803: cmp     r11d, r14d
 * 0000000140A0A806: jb      loc_140A0A749
 * 0000000140A0A80C: jmp     loc_140A0B02D
 * 0000000140A0A811: mov     r15d, 1
 * 0000000140A0A817: lea     rbx, [r14+798h]
 * 0000000140A0A81E: mov     [r14+0C4h], r15d
 * 0000000140A0A825: lea     rdx, [rbp+0BE0h+var_B0]
 * 0000000140A0A82C: mov     r12, [r14+7B8h]
 * 0000000140A0A833: mov     rsi, r14
 * 0000000140A0A836: mov     r13d, [r14+828h]
 * 0000000140A0A83D: mov     rcx, rbx
 * 0000000140A0A840: lea     r11d, [r15+1Fh]
 * 0000000140A0A844: mov     [rbp+0BE0h+var_BD0], r12
 * 0000000140A0A848: lea     r10d, [r15+3]
 * 0000000140A0A84C: mov     dword ptr [rbp+0BE0h+arg_8], r13d
 * 0000000140A0A853: mov     r8d, r11d
 * 0000000140A0A856: mov     [rsp+0CE0h+var_C70], rbx
 * 0000000140A0A85B: mov     r9d, r10d
 * 0000000140A0A85E: mov     rax, [rcx]
 * 0000000140A0A861: add     r8d, 0FFFFFFF8h
 * 0000000140A0A865: mov     [rdx], rax
 * 0000000140A0A868: add     rcx, 8
 * 0000000140A0A86C: add     rdx, 8
 * 0000000140A0A870: sub     r9, r15
 * 0000000140A0A873: jnz     short loc_140A0A85E
 * 0000000140A0A875: xor     r15d, r15d
 * 0000000140A0A878: lea     r9d, [r15+1]
 * 0000000140A0A87C: test    r8d, r8d
 * 0000000140A0A87F: jz      short loc_140A0A899
 * 0000000140A0A881: mov     r15d, 0FFFFFFFFh
 * 0000000140A0A887: mov     al, [rcx]
 * 0000000140A0A889: add     rcx, r9
 * 0000000140A0A88C: mov     [rdx], al
 * 0000000140A0A88E: add     rdx, r9
 * 0000000140A0A891: add     r8d, r15d
 * 0000000140A0A894: jnz     short loc_140A0A887
 * 0000000140A0A896: xor     r15d, r15d
 * 0000000140A0A899: mov     [r14+7B8h], r15
 * 0000000140A0A8A0: mov     ecx, r11d
 * 0000000140A0A8A3: mov     [r14+828h], r15d
 * 0000000140A0A8AA: mov     rax, rbx
 * 0000000140A0A8AD: mov     rdx, r10
 * 0000000140A0A8B0: mov     [rax], r15
 * 0000000140A0A8B3: add     ecx, 0FFFFFFF8h
 * 0000000140A0A8B6: add     rax, 8
 * 0000000140A0A8BA: sub     rdx, r9
 * 0000000140A0A8BD: jnz     short loc_140A0A8B0
 * 0000000140A0A8BF: test    ecx, ecx
 * 0000000140A0A8C1: jz      short loc_140A0A8D2
 * 0000000140A0A8C3: mov     edx, 0FFFFFFFFh
 * 0000000140A0A8C8: mov     [rax], r15b
 * 0000000140A0A8CB: add     rax, r9
 * 0000000140A0A8CE: add     ecx, edx
 * 0000000140A0A8D0: jnz     short loc_140A0A8C8
 * 0000000140A0A8D2: mov     eax, [r14+7E4h]
 * 0000000140A0A8D9: mov     r10, r14
 * 0000000140A0A8DC: add     [r14+828h], eax
 * 0000000140A0A8E3: mov     rax, r14
 * 0000000140A0A8E6: mov     r11d, [r14+7E4h]
 * 0000000140A0A8ED: mov     r9d, [r14+814h]
 * 0000000140A0A8F4: mov     r15, [r14+818h]
 * 0000000140A0A8FB: lea     rcx, [r14+r11]
 * 0000000140A0A8FF: cmp     r14, rcx
 * 0000000140A0A902: jnb     short loc_140A0A914
 * 0000000140A0A904: mov     edx, 40h ; '@'
 * 0000000140A0A909: prefetchnta byte ptr [rax]
 * 0000000140A0A90C: add     rax, rdx
 * 0000000140A0A90F: cmp     rax, rcx
 * 0000000140A0A912: jb      short loc_140A0A909
 * 0000000140A0A914: mov     r14d, r11d
 * 0000000140A0A917: mov     r8, r15
 * 0000000140A0A91A: shr     r14d, 7
 * 0000000140A0A91E: test    r14d, r14d
 * 0000000140A0A921: jz      loc_140A0A9AC
 * 0000000140A0A927: mov     rdi, [rbp+0BE0h+arg_0]
 * 0000000140A0A92E: mov     rbx, 7010008004002001h
 * 0000000140A0A938: mov     r12d, 1
 * 0000000140A0A93E: mov     r13d, 0FFFFFFFFh
 * 0000000140A0A944: mov     eax, 8
 * 0000000140A0A949: xor     r8, [r10]
 * 0000000140A0A94C: mov     ecx, r9d
 * 0000000140A0A94F: rol     r8, cl
 * 0000000140A0A952: xor     r8, [r10+8]
 * 0000000140A0A956: add     r10, 10h
 * 0000000140A0A95A: rol     r8, cl
 * 0000000140A0A95D: sub     rax, r12
 * 0000000140A0A960: jnz     short loc_140A0A949
 * 0000000140A0A962: mov     rcx, r10
 * 0000000140A0A965: sub     rcx, rdi
 * 0000000140A0A968: xor     rcx, r15
 * 0000000140A0A96B: mov     rax, rcx
 * 0000000140A0A96E: rol     rax, 11h
 * 0000000140A0A972: xor     rcx, rax
 * 0000000140A0A975: mov     rax, rbx
 * 0000000140A0A978: mul     rcx
 * 0000000140A0A97B: xor     r9d, eax
 * 0000000140A0A97E: mov     [rbp+0BE0h+var_328], rdx
 * 0000000140A0A985: xor     r9d, edx
 * 0000000140A0A988: and     r9d, 3Fh
 * 0000000140A0A98C: cmovz   r9d, r12d
 * 0000000140A0A990: add     r14d, r13d
 * 0000000140A0A993: jnz     short loc_140A0A944
 * 0000000140A0A995: mov     rbx, [rsp+0CE0h+var_C70]
 * 0000000140A0A99A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0A9A1: mov     r12, [rbp+0BE0h+var_BD0]
 * 0000000140A0A9A5: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0A9AC: and     r11d, 7Fh
 * 0000000140A0A9B0: mov     r15d, 1
 * 0000000140A0A9B6: cmp     r11d, 8
 * 0000000140A0A9BA: jb      short loc_140A0A9D9
 * 0000000140A0A9BC: mov     eax, r11d
 * 0000000140A0A9BF: shr     rax, 3
 * 0000000140A0A9C3: xor     r8, [r10]
 * 0000000140A0A9C6: mov     ecx, r9d
 * 0000000140A0A9C9: rol     r8, cl
 * 0000000140A0A9CC: add     r10, 8
 * 0000000140A0A9D0: add     r11d, 0FFFFFFF8h
 * 0000000140A0A9D4: sub     rax, r15
 * 0000000140A0A9D7: jnz     short loc_140A0A9C3
 * 0000000140A0A9D9: mov     r14d, 0FFFFFFFFh
 * 0000000140A0A9DF: test    r11d, r11d
 * 0000000140A0A9E2: jz      short loc_140A0A9F9
 * 0000000140A0A9E4: movzx   eax, byte ptr [r10]
 * 0000000140A0A9E8: mov     ecx, r9d
 * 0000000140A0A9EB: xor     r8, rax
 * 0000000140A0A9EE: add     r10, r15
 * 0000000140A0A9F1: rol     r8, cl
 * 0000000140A0A9F4: add     r11d, r14d
 * 0000000140A0A9F7: jnz     short loc_140A0A9E4
 * 0000000140A0A9F9: mov     r9, [rbp+0BE0h+arg_0]
 * 0000000140A0AA00: lea     rcx, [rbp+0BE0h+var_B0]
 * 0000000140A0AA07: mov     edx, 4
 * 0000000140A0AA0C: mov     [r9+7B8h], r12
 * 0000000140A0AA13: add     [r9+828h], r13d
 * 0000000140A0AA1A: lea     r10d, [rdx+1Ch]
 * 0000000140A0AA1E: mov     rax, [rcx]
 * 0000000140A0AA21: add     r10d, 0FFFFFFF8h
 * 0000000140A0AA25: mov     [rbx], rax
 * 0000000140A0AA28: add     rcx, 8
 * 0000000140A0AA2C: add     rbx, 8
 * 0000000140A0AA30: sub     rdx, r15
 * 0000000140A0AA33: jnz     short loc_140A0AA1E
 * 0000000140A0AA35: xor     r11d, r11d
 * 0000000140A0AA38: test    r10d, r10d
 * 0000000140A0AA3B: jz      short loc_140A0AA4C
 * 0000000140A0AA3D: mov     al, [rcx]
 * 0000000140A0AA3F: add     rcx, r15
 * 0000000140A0AA42: mov     [rbx], al
 * 0000000140A0AA44: add     rbx, r15
 * 0000000140A0AA47: add     r10d, r14d
 * 0000000140A0AA4A: jnz     short loc_140A0AA3D
 * 0000000140A0AA4C: mov     [r9+7B8h], r8
 * 0000000140A0AA53: mov     r14d, [rsi+990h]
 * 0000000140A0AA5A: mov     r12, r11
 * 0000000140A0AA5D: mov     [rsp+0CE0h+var_C70], r11
 * 0000000140A0AA62: bt      r14d, 1Eh
 * 0000000140A0AA67: jb      loc_140A0B0EC
 * 0000000140A0AA6D: bt      r14d, 8
 * 0000000140A0AA72: jb      loc_140A0B0D6
 * 0000000140A0AA78: mov     eax, [rsi+954h]
 * 0000000140A0AA7E: mov     ecx, 1
 * 0000000140A0AA83: mov     r15, [rsi+5C0h]
 * 0000000140A0AA8A: mov     r9, rsi
 * 0000000140A0AA8D: mov     r13, [rsi+4E8h]
 * 0000000140A0AA94: mov     r10, rsi
 * 0000000140A0AA97: mov     [rbp+0BE0h+var_B8D], cl
 * 0000000140A0AA9A: mov     ecx, 2
 * 0000000140A0AA9F: mov     [rbp+0BE0h+var_B8B], cl
 * 0000000140A0AAA2: mov     ecx, 0Ch
 * 0000000140A0AAA7: mov     [rbp+0BE0h+var_B8F], cl
 * 0000000140A0AAAA: mov     [rbp+0BE0h+var_B90], r11b
 * 0000000140A0AAAE: mov     [rbp+0BE0h+var_B88], 3
 * 0000000140A0AAB2: lea     r12d, [rcx+3]
 * 0000000140A0AAB6: mov     [rbp+0BE0h+var_B8A], 4
 * 0000000140A0AABA: mov     ecx, esi
 * 0000000140A0AABC: mov     [rbp+0BE0h+var_B87], 5
 * 0000000140A0AAC0: ror     r9, cl
 * 0000000140A0AAC3: lea     ebx, [r12+1]
 * 0000000140A0AAC8: xor     edi, edi
 * 0000000140A0AACA: mov     [rbp+0BE0h+var_B84], 6
 * 0000000140A0AACE: mov     [rbp+0BE0h+var_B89], 7
 * 0000000140A0AAD2: mov     [rbp+0BE0h+var_B83], 8
 * 0000000140A0AAD6: mov     [rbp+0BE0h+var_B86], 9
 * 0000000140A0AADA: mov     [rbp+0BE0h+var_B82], 0Ah
 * 0000000140A0AADE: mov     [rbp+0BE0h+var_B8C], 0Bh
 * 0000000140A0AAE2: mov     [rbp+0BE0h+var_B81], 0Dh
 * 0000000140A0AAE6: mov     [rbp+0BE0h+var_B85], 0Eh
 * 0000000140A0AAEA: mov     [rbp+0BE0h+var_B8E], r12b
 * 0000000140A0AAEE: mov     [rbp+0BE0h+arg_8], rax
 * 0000000140A0AAF5: test    ebx, ebx
 * 0000000140A0AAF7: jz      short loc_140A0AB25
 * 0000000140A0AAF9: mov     rdx, [r10]
 * 0000000140A0AAFC: mov     edi, 1
 * 0000000140A0AB01: mov     r8d, ebx
 * 0000000140A0AB04: movzx   eax, byte ptr [r10]
 * 0000000140A0AB08: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140A0AB0C: and     rax, r12
 * 0000000140A0AB0F: movzx   ecx, [rbp+rax+0BE0h+var_B90]
 * 0000000140A0AB14: or      rdx, rcx
 * 0000000140A0AB17: ror     rdx, 4
 * 0000000140A0AB1B: mov     [r10], rdx
 * 0000000140A0AB1E: sub     r8, rdi
 * 0000000140A0AB21: jnz     short loc_140A0AB04
 * 0000000140A0AB23: xor     edi, edi
 * 0000000140A0AB25: mov     rcx, [r10]
 * 0000000140A0AB28: mov     eax, r11d
 * 0000000140A0AB2B: sub     rcx, rax
 * 0000000140A0AB2E: sub     rcx, rsi
 * 0000000140A0AB31: bt      r14d, 9
 * 0000000140A0AB36: jb      loc_140A0B074
 * 0000000140A0AB3C: mov     rax, r13
 * 0000000140A0AB3F: xor     rax, rcx
 * 0000000140A0AB42: mov     ecx, r15d
 * 0000000140A0AB45: bswap   rax
 * 0000000140A0AB48: xor     rax, r9
 * 0000000140A0AB4B: ror     rax, cl
 * 0000000140A0AB4E: xor     rax, r15
 * 0000000140A0AB51: jmp     loc_140A0B07A
 * 0000000140A0AB56: mov     ecx, [rsi+954h]
 * 0000000140A0AB5C: mov     r12d, [rsi+0A2Ch]
 * 0000000140A0AB63: mov     rax, [rsi+7C8h]
 * 0000000140A0AB6A: add     r12d, 0FFFFFF38h
 * 0000000140A0AB71: mov     [rbp+0BE0h+var_C28], ecx
 * 0000000140A0AB74: mov     rcx, [rsi+4E8h]
 * 0000000140A0AB7B: shr     r12d, 3
 * 0000000140A0AB7F: mov     [rsp+0CE0h+var_C88], rcx
 * 0000000140A0AB84: mov     rcx, [rsi+5C0h]
 * 0000000140A0AB8B: mov     [rbp+0BE0h+var_C30], rcx
 * 0000000140A0AB8F: mov     [rbp+0BE0h+var_C40], rax
 * 0000000140A0AB93: mov     [rbp+0BE0h+var_C38], r12d
 * 0000000140A0AB97: mov     [rsi+0C4h], r12d
 * 0000000140A0AB9E: rdtsc
 * 0000000140A0ABA0: shl     rdx, 20h
 * 0000000140A0ABA4: or      rax, rdx
 * 0000000140A0ABA7: mov     rcx, rax
 * 0000000140A0ABAA: ror     rax, 3
 * 0000000140A0ABAE: xor     rcx, rax
 * 0000000140A0ABB1: mov     rax, r9
 * 0000000140A0ABB4: mul     rcx
 * 0000000140A0ABB7: mov     rbx, rdx
 * 0000000140A0ABBA: mov     [rbp+0BE0h+var_440], rdx
 * 0000000140A0ABC1: xor     rbx, rax
 * 0000000140A0ABC4: jz      short loc_140A0AB9E
 * 0000000140A0ABC6: mov     rax, [rsi+7B8h]
 * 0000000140A0ABCD: lea     r14, [rsi+798h]
 * 0000000140A0ABD4: mov     r11d, 20h ; ' '
 * 0000000140A0ABDA: mov     [rbp+0BE0h+var_BD0], rax
 * 0000000140A0ABDE: mov     eax, [rsi+828h]
 * 0000000140A0ABE4: lea     rdx, [rbp+0BE0h+var_90]
 * 0000000140A0ABEB: mov     [rbp+0BE0h+var_BE8], eax
 * 0000000140A0ABEE: mov     r8d, r11d
 * 0000000140A0ABF1: mov     rcx, r14
 * 0000000140A0ABF4: lea     r10d, [r11-1Ch]
 * 0000000140A0ABF8: mov     r9d, r10d
 * 0000000140A0ABFB: mov     rax, [rcx]
 * 0000000140A0ABFE: add     r8d, 0FFFFFFF8h
 * 0000000140A0AC02: mov     [rdx], rax
 * 0000000140A0AC05: add     rcx, 8
 * 0000000140A0AC09: add     rdx, 8
 * 0000000140A0AC0D: sub     r9, r15
 * 0000000140A0AC10: jnz     short loc_140A0ABFB
 * 0000000140A0AC12: test    r8d, r8d
 * 0000000140A0AC15: jz      short loc_140A0AC2F
 * 0000000140A0AC17: mov     r9d, 0FFFFFFFFh
 * 0000000140A0AC1D: mov     al, [rcx]
 * 0000000140A0AC1F: add     rcx, r15
 * 0000000140A0AC22: mov     [rdx], al
 * 0000000140A0AC24: add     rdx, r15
 * 0000000140A0AC27: add     r8d, r9d
 * 0000000140A0AC2A: jnz     short loc_140A0AC1D
 * 0000000140A0AC2C: xor     r9d, r9d
 * 0000000140A0AC2F: mov     [rsi+7B8h], r9
 * 0000000140A0AC36: mov     ecx, r11d
 * 0000000140A0AC39: mov     [rsi+828h], r9d
 * 0000000140A0AC40: mov     rax, r14
 * 0000000140A0AC43: mov     rdx, r10
 * 0000000140A0AC46: mov     [rax], r9
 * 0000000140A0AC49: add     ecx, 0FFFFFFF8h
 * 0000000140A0AC4C: add     rax, 8
 * 0000000140A0AC50: sub     rdx, r15
 * 0000000140A0AC53: jnz     short loc_140A0AC46
 * 0000000140A0AC55: test    ecx, ecx
 * 0000000140A0AC57: jz      short loc_140A0AC68
 * 0000000140A0AC59: mov     edx, 0FFFFFFFFh
 * 0000000140A0AC5E: mov     [rax], r9b
 * 0000000140A0AC61: add     rax, r15
 * 0000000140A0AC64: add     ecx, edx
 * 0000000140A0AC66: jnz     short loc_140A0AC5E
 * 0000000140A0AC68: mov     eax, [rsi+7E4h]
 * 0000000140A0AC6E: mov     r9, rsi
 * 0000000140A0AC71: add     [rsi+828h], eax
 * 0000000140A0AC77: mov     r11d, [rsi+7E4h]
 * 0000000140A0AC7E: mov     r10d, [rsi+814h]
 * 0000000140A0AC85: mov     r8, [rsi+818h]
 * 0000000140A0AC8C: lea     rcx, [rsi+r11]
 * 0000000140A0AC90: cmp     rsi, rcx
 * 0000000140A0AC93: jnb     short loc_140A0ACA8
 * 0000000140A0AC95: mov     rax, rsi
 * 0000000140A0AC98: mov     edx, 40h ; '@'
 * 0000000140A0AC9D: prefetchnta byte ptr [rax]
 * 0000000140A0ACA0: add     rax, rdx
 * 0000000140A0ACA3: cmp     rax, rcx
 * 0000000140A0ACA6: jb      short loc_140A0AC9D
 * 0000000140A0ACA8: mov     r15d, r11d
 * 0000000140A0ACAB: shr     r15d, 7
 * 0000000140A0ACAF: test    r15d, r15d
 * 0000000140A0ACB2: jz      loc_140A0AD3B
 * 0000000140A0ACB8: mov     rdi, r8
 * 0000000140A0ACBB: mov     r13d, 1
 * 0000000140A0ACC1: mov     r12d, 0FFFFFFFFh
 * 0000000140A0ACC7: mov     r14, 7010008004002001h
 * 0000000140A0ACD1: mov     eax, 8
 * 0000000140A0ACD6: xor     r8, [r9]
 * 0000000140A0ACD9: mov     ecx, r10d
 * 0000000140A0ACDC: rol     r8, cl
 * 0000000140A0ACDF: xor     r8, [r9+8]
 * 0000000140A0ACE3: add     r9, 10h
 * 0000000140A0ACE7: rol     r8, cl
 * 0000000140A0ACEA: sub     rax, r13
 * 0000000140A0ACED: jnz     short loc_140A0ACD6
 * 0000000140A0ACEF: mov     rcx, r9
 * 0000000140A0ACF2: sub     rcx, rsi
 * 0000000140A0ACF5: xor     rcx, rdi
 * 0000000140A0ACF8: mov     rax, rcx
 * 0000000140A0ACFB: rol     rax, 11h
 * 0000000140A0ACFF: xor     rcx, rax
 * 0000000140A0AD02: mov     rax, r14
 * 0000000140A0AD05: mul     rcx
 * 0000000140A0AD08: xor     r10d, eax
 * 0000000140A0AD0B: mov     [rbp+0BE0h+var_438], rdx
 * 0000000140A0AD12: xor     r10d, edx
 * 0000000140A0AD15: and     r10d, 3Fh
 * 0000000140A0AD19: cmovz   r10d, r13d
 * 0000000140A0AD1D: add     r15d, r12d
 * 0000000140A0AD20: jnz     short loc_140A0ACD1
 * 0000000140A0AD22: mov     r12d, [rbp+0BE0h+var_C38]
 * 0000000140A0AD26: lea     r14, [rsi+798h]
 * 0000000140A0AD2D: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0AD34: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0AD3B: and     r11d, 7Fh
 * 0000000140A0AD3F: mov     r15d, 1
 * 0000000140A0AD45: cmp     r11d, 8
 * 0000000140A0AD49: jb      short loc_140A0AD68
 * 0000000140A0AD4B: mov     eax, r11d
 * 0000000140A0AD4E: shr     rax, 3
 * 0000000140A0AD52: xor     r8, [r9]
 * 0000000140A0AD55: mov     ecx, r10d
 * 0000000140A0AD58: rol     r8, cl
 * 0000000140A0AD5B: add     r9, 8
 * 0000000140A0AD5F: add     r11d, 0FFFFFFF8h
 * 0000000140A0AD63: sub     rax, r15
 * 0000000140A0AD66: jnz     short loc_140A0AD52
 * 0000000140A0AD68: test    r11d, r11d
 * 0000000140A0AD6B: jz      short loc_140A0AD8F
 * 0000000140A0AD6D: mov     r13d, 0FFFFFFFFh
 * 0000000140A0AD73: movzx   eax, byte ptr [r9]
 * 0000000140A0AD77: mov     ecx, r10d
 * 0000000140A0AD7A: xor     r8, rax
 * 0000000140A0AD7D: add     r9, r15
 * 0000000140A0AD80: rol     r8, cl
 * 0000000140A0AD83: add     r11d, r13d
 * 0000000140A0AD86: jnz     short loc_140A0AD73
 * 0000000140A0AD88: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0AD8F: mov     rax, [rbp+0BE0h+var_BD0]
 * 0000000140A0AD93: lea     rcx, [rbp+0BE0h+var_90]
 * 0000000140A0AD9A: mov     r9d, 4
 * 0000000140A0ADA0: mov     [rsi+7B8h], rax
 * 0000000140A0ADA7: mov     eax, [rbp+0BE0h+var_BE8]
 * 0000000140A0ADAA: mov     edx, r9d
 * 0000000140A0ADAD: add     [rsi+828h], eax
 * 0000000140A0ADB3: lea     r10d, [r9+1Ch]
 * 0000000140A0ADB7: mov     rax, [rcx]
 * 0000000140A0ADBA: add     r10d, 0FFFFFFF8h
 * 0000000140A0ADBE: mov     [r14], rax
 * 0000000140A0ADC1: add     rcx, 8
 * 0000000140A0ADC5: add     r14, 8
 * 0000000140A0ADC9: sub     rdx, r15
 * 0000000140A0ADCC: jnz     short loc_140A0ADB7
 * 0000000140A0ADCE: xor     r11d, r11d
 * 0000000140A0ADD1: test    r10d, r10d
 * 0000000140A0ADD4: jz      short loc_140A0ADEF
 * 0000000140A0ADD6: mov     r11d, 0FFFFFFFFh
 * 0000000140A0ADDC: mov     al, [rcx]
 * 0000000140A0ADDE: add     rcx, r15
 * 0000000140A0ADE1: mov     [r14], al
 * 0000000140A0ADE4: add     r14, r15
 * 0000000140A0ADE7: add     r10d, r11d
 * 0000000140A0ADEA: jnz     short loc_140A0ADDC
 * 0000000140A0ADEC: xor     r11d, r11d
 * 0000000140A0ADEF: mov     [rsi+7B8h], r8
 * 0000000140A0ADF6: test    dword ptr [rsi+990h], 40000000h
 * 0000000140A0AE00: jnz     loc_140A0B037
 * 0000000140A0AE06: mov     eax, r11d
 * 0000000140A0AE09: mov     rcx, rsi
 * 0000000140A0AE0C: mov     r11d, 19h
 * 0000000140A0AE12: xor     [rcx], rbx
 * 0000000140A0AE15: add     eax, r15d
 * 0000000140A0AE18: lea     rcx, [rcx+8]
 * 0000000140A0AE1C: cmp     eax, r11d
 * 0000000140A0AE1F: jb      short loc_140A0AE12
 * 0000000140A0AE21: xor     r15d, r15d
 * 0000000140A0AE24: mov     [rbp+0BE0h+var_9F8], rbx
 * 0000000140A0AE2B: mov     r8d, r12d
 * 0000000140A0AE2E: lea     r10d, [r15+1]
 * 0000000140A0AE32: test    r12d, r12d
 * 0000000140A0AE35: jz      short loc_140A0AE71
 * 0000000140A0AE37: mov     edx, r12d
 * 0000000140A0AE3A: dec     rdx
 * 0000000140A0AE3D: lea     rdx, [rcx+rdx*8]
 * 0000000140A0AE41: xor     [rdx], rbx
 * 0000000140A0AE44: lea     rax, [rbp+0BE0h+var_9F8]
 * 0000000140A0AE4B: mov     ecx, r8d
 * 0000000140A0AE4E: lea     rdx, [rdx-8]
 * 0000000140A0AE52: ror     rbx, cl
 * 0000000140A0AE55: mov     [rbp+0BE0h+var_9F8], rbx
 * 0000000140A0AE5C: and     ebx, 3Fh
 * 0000000140A0AE5F: btc     [rax], rbx
 * 0000000140A0AE63: sub     r8d, r10d
 * 0000000140A0AE66: jz      short loc_140A0AE71
 * 0000000140A0AE68: mov     rbx, [rbp+0BE0h+var_9F8]
 * 0000000140A0AE6F: jmp     short loc_140A0AE41
 * 0000000140A0AE71: bt      r13d, 13h
 * 0000000140A0AE76: jnb     short loc_140A0AEC3
 * 0000000140A0AE78: rdtsc
 * 0000000140A0AE7A: shl     rdx, 20h
 * 0000000140A0AE7E: or      rax, rdx
 * 0000000140A0AE81: mov     rcx, rax
 * 0000000140A0AE84: ror     rax, 3
 * 0000000140A0AE88: xor     rcx, rax
 * 0000000140A0AE8B: mov     rax, 7010008004002001h
 * 0000000140A0AE95: mul     rcx
 * 0000000140A0AE98: mov     rcx, rdx
 * 0000000140A0AE9B: mov     [rbp+0BE0h+var_430], rdx
 * 0000000140A0AEA2: xor     rcx, rax
 * 0000000140A0AEA5: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140A0AEAF: mul     rcx
 * 0000000140A0AEB2: shr     rdx, 1
 * 0000000140A0AEB5: lea     rax, [rdx+rdx*2]
 * 0000000140A0AEB9: cmp     rcx, rax
 * 0000000140A0AEBC: jz      short loc_140A0AECE
 * 0000000140A0AEBE: jmp     loc_140A0B034
 * 0000000140A0AEC3: bt      r13d, 8
 * 0000000140A0AEC8: jb      loc_140A0B034
 * 0000000140A0AECE: mov     rdi, [rbp+0BE0h+var_C30]
 * 0000000140A0AED2: mov     eax, 2
 * 0000000140A0AED7: mov     [rbp+0BE0h+var_B5B], al
 * 0000000140A0AEDD: mov     ecx, esi
 * 0000000140A0AEDF: mov     eax, 0Ch
 * 0000000140A0AEE4: mov     [rbp+0BE0h+var_B5A], r9b
 * 0000000140A0AEEB: mov     [rbp+0BE0h+var_B5F], al
 * 0000000140A0AEF1: mov     r9, rsi
 * 0000000140A0AEF4: mov     eax, 0Fh
 * 0000000140A0AEF9: mov     [rbp+0BE0h+var_B60], r15b
 * 0000000140A0AF00: mov     r14d, r11d
 * 0000000140A0AF03: mov     [rbp+0BE0h+var_B5D], r10b
 * 0000000140A0AF0A: mov     r11d, r15d
 * 0000000140A0AF0D: mov     [rbp+0BE0h+var_B58], 3
 * 0000000140A0AF14: mov     r15d, [rbp+0BE0h+var_C28]
 * 0000000140A0AF18: mov     r10, rsi
 * 0000000140A0AF1B: lea     ebx, [rax+1]
 * 0000000140A0AF1E: mov     [rbp+0BE0h+var_B57], 5
 * 0000000140A0AF25: mov     [rbp+0BE0h+var_B54], 6
 * 0000000140A0AF2C: mov     [rbp+0BE0h+var_B59], 7
 * 0000000140A0AF33: mov     [rbp+0BE0h+var_B53], 8
 * 0000000140A0AF3A: mov     [rbp+0BE0h+var_B56], 9
 * 0000000140A0AF41: mov     [rbp+0BE0h+var_B52], 0Ah
 * 0000000140A0AF48: mov     [rbp+0BE0h+var_B5C], 0Bh
 * 0000000140A0AF4F: mov     [rbp+0BE0h+var_B51], 0Dh
 * 0000000140A0AF56: mov     [rbp+0BE0h+var_B55], 0Eh
 * 0000000140A0AF5D: mov     [rbp+0BE0h+var_B5E], al
 * 0000000140A0AF63: ror     r9, cl
 * 0000000140A0AF66: test    ebx, ebx
 * 0000000140A0AF68: jz      short loc_140A0AFA7
 * 0000000140A0AF6A: mov     rdx, [r10]
 * 0000000140A0AF6D: mov     r13d, 1
 * 0000000140A0AF73: mov     r8d, ebx
 * 0000000140A0AF76: lea     r12d, [r13+0Eh]
 * 0000000140A0AF7A: movzx   eax, byte ptr [r10]
 * 0000000140A0AF7E: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140A0AF82: and     rax, r12
 * 0000000140A0AF85: movzx   ecx, [rbp+rax+0BE0h+var_B60]
 * 0000000140A0AF8D: or      rdx, rcx
 * 0000000140A0AF90: ror     rdx, 4
 * 0000000140A0AF94: mov     [r10], rdx
 * 0000000140A0AF97: sub     r8, r13
 * 0000000140A0AF9A: jnz     short loc_140A0AF7A
 * 0000000140A0AF9C: mov     r12d, [rbp+0BE0h+var_C38]
 * 0000000140A0AFA0: mov     r13d, dword ptr [rbp+0BE0h+arg_8]
 * 0000000140A0AFA7: mov     rdx, [r10]
 * 0000000140A0AFAA: mov     eax, r11d
 * 0000000140A0AFAD: sub     rdx, rax
 * 0000000140A0AFB0: sub     rdx, rsi
 * 0000000140A0AFB3: bt      r13d, 9
 * 0000000140A0AFB8: jb      short loc_140A0AFCF
 * 0000000140A0AFBA: xor     rdx, [rsp+0CE0h+var_C88]
 * 0000000140A0AFBF: mov     ecx, edi
 * 0000000140A0AFC1: bswap   rdx
 * 0000000140A0AFC4: xor     rdx, r9
 * 0000000140A0AFC7: ror     rdx, cl
 * 0000000140A0AFCA: xor     rdx, rdi
 * 0000000140A0AFCD: jmp     short loc_140A0AFD2
 * 0000000140A0AFCF: xor     rdx, r9
 * 0000000140A0AFD2: mov     [r10], rdx
 * 0000000140A0AFD5: mov     ecx, edx
 * 0000000140A0AFD7: mov     r8d, edx
 * 0000000140A0AFDA: mov     eax, r11d
 * 0000000140A0AFDD: xor     r8d, 0EFFh
 * 0000000140A0AFE4: mov     edx, 0C8h
 * 0000000140A0AFE9: sub     edx, r11d
 * 0000000140A0AFEC: not     ecx
 * 0000000140A0AFEE: xor     rdx, rax
 * 0000000140A0AFF1: add     r10, 8
 * 0000000140A0AFF5: ror     rdx, cl
 * 0000000140A0AFF8: mov     cl, r8b
 * 0000000140A0AFFB: xor     r9, rdx
 * 0000000140A0AFFE: rol     r9, cl
 * 0000000140A0B001: add     r9, rsi
 * 0000000140A0B004: xor     r9, r15
 * 0000000140A0B007: inc     r11d
 * 0000000140A0B00A: cmp     r11d, 19h
 * 0000000140A0B00E: jnz     short loc_140A0B024
 * 0000000140A0B010: bt      r13d, 13h
 * 0000000140A0B015: lea     eax, [r11-19h]
 * 0000000140A0B019: lea     ebx, [r11-18h]
 * 0000000140A0B01D: cmovnb  eax, r12d
 * 0000000140A0B021: add     r14d, eax
 * 0000000140A0B024: cmp     r11d, r14d
 * 0000000140A0B027: jb      loc_140A0AF66
 * 0000000140A0B02D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0B034: xor     r11d, r11d
 * 0000000140A0B037: rdtsc
 * 0000000140A0B039: shl     rdx, 20h
 * 0000000140A0B03D: mov     r9, 7010008004002001h
 * 0000000140A0B047: or      rax, rdx
 * 0000000140A0B04A: mov     ebx, 1
 * 0000000140A0B04F: mov     rcx, rax
 * 0000000140A0B052: mov     [rbp+0BE0h+var_C38], ebx
 * 0000000140A0B055: ror     rax, 3
 * 0000000140A0B059: xor     rcx, rax
 * 0000000140A0B05C: mov     rax, r9
 * 0000000140A0B05F: mul     rcx
 * 0000000140A0B062: mov     r12, rax
 * 0000000140A0B065: mov     [rbp+0BE0h+var_428], rdx
 * 0000000140A0B06C: xor     r12, rdx
 * 0000000140A0B06F: jmp     loc_140A0B0FB
 * 0000000140A0B074: mov     rax, r9
 * 0000000140A0B077: xor     rax, rcx
 * 0000000140A0B07A: mov     [r10], rax
 * 0000000140A0B07D: mov     ecx, eax
 * 0000000140A0B07F: mov     r8d, eax
 * 0000000140A0B082: not     ecx
 * 0000000140A0B084: mov     eax, r11d
 * 0000000140A0B087: xor     r8d, 0EFFh
 * 0000000140A0B08E: mov     edx, 0C8h
 * 0000000140A0B093: add     r10, 8
 * 0000000140A0B097: sub     edx, r11d
 * 0000000140A0B09A: xor     rdx, rax
 * 0000000140A0B09D: mov     eax, 19h
 * 0000000140A0B0A2: ror     rdx, cl
 * 0000000140A0B0A5: mov     cl, r8b
 * 0000000140A0B0A8: xor     r9, rdx
 * 0000000140A0B0AB: rol     r9, cl
 * 0000000140A0B0AE: add     r9, rsi
 * 0000000140A0B0B1: lea     ecx, [rax-18h]
 * 0000000140A0B0B4: xor     r9, [rbp+0BE0h+arg_8]
 * 0000000140A0B0BB: inc     r11d
 * 0000000140A0B0BE: cmp     r11d, eax
 * 0000000140A0B0C1: cmovz   ebx, ecx
 * 0000000140A0B0C4: jb      loc_140A0AAF5
 * 0000000140A0B0CA: mov     r12, [rsp+0CE0h+var_C70]
 * 0000000140A0B0CF: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140A0B0D6: mov     rax, [rsi+268h]
 * 0000000140A0B0DD: lea     rcx, [rsi+800h]
 * 0000000140A0B0E4: call    KeGuardDispatchICall
 * 0000000140A0B0E9: xor     r11d, r11d
 * 0000000140A0B0EC: mov     r9, 7010008004002001h
 * 0000000140A0B0F6: mov     ebx, 1
 * 0000000140A0B0FB: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A0B102: test    dword ptr [r13+990h], 10000000h
 * 0000000140A0B10D: mov     r15, [r13+7D8h]
 * 0000000140A0B114: jz      short loc_140A0B14B
 * 0000000140A0B116: rdtsc
 * 0000000140A0B118: shl     rdx, 20h
 * 0000000140A0B11C: or      rax, rdx
 * 0000000140A0B11F: mov     rcx, rax
 * 0000000140A0B122: ror     rax, 3
 * 0000000140A0B126: xor     rcx, rax
 * 0000000140A0B129: mov     rax, r9
 * 0000000140A0B12C: mul     rcx
 * 0000000140A0B12F: mov     r15, rdx
 * 0000000140A0B132: mov     [rbp+0BE0h+var_420], rdx
 * 0000000140A0B139: xor     r15, rax
 * 0000000140A0B13C: and     r15, 0Fh
 * 0000000140A0B140: shl     r15, 4
 * 0000000140A0B144: add     r15, [r13+5D0h]
 * 0000000140A0B14B: mov     r8d, 28h ; '('
 * 0000000140A0B151: lea     r14, [r13+8F8h]
 * 0000000140A0B158: mov     rcx, r14
 * 0000000140A0B15B: lea     rdx, [rbp+0BE0h+var_730]
 * 0000000140A0B162: lea     r9d, [r8-23h]
 * 0000000140A0B166: mov     rax, [rcx]
 * 0000000140A0B169: add     r8d, 0FFFFFFF8h
 * 0000000140A0B16D: mov     [rdx], rax
 * 0000000140A0B170: add     rcx, 8
 * 0000000140A0B174: add     rdx, 8
 * 0000000140A0B178: sub     r9, rbx
 * 0000000140A0B17B: jnz     short loc_140A0B166
 * 0000000140A0B17D: test    r8d, r8d
 * 0000000140A0B180: jz      short loc_140A0B19A
 * 0000000140A0B182: mov     r11d, 0FFFFFFFFh
 * 0000000140A0B188: mov     al, [rcx]
 * 0000000140A0B18A: add     rcx, rbx
 * 0000000140A0B18D: mov     [rdx], al
 * 0000000140A0B18F: add     rdx, rbx
 * 0000000140A0B192: add     r8d, r11d
 * 0000000140A0B195: jnz     short loc_140A0B188
 * 0000000140A0B197: xor     r11d, r11d
 * 0000000140A0B19A: mov     eax, [r13+990h]
 * 0000000140A0B1A1: mov     ecx, 8000h
 * 0000000140A0B1A6: test    ecx, eax
 * 0000000140A0B1A8: jnz     short loc_140A0B1B3
 * 0000000140A0B1AA: cmp     [r14], r11d
 * 0000000140A0B1AD: jnz     loc_140A0B817
 * 0000000140A0B1B3: bt      eax, 1Eh
 * 0000000140A0B1B7: jb      loc_140A0BA08
 * 0000000140A0B1BD: mov     al, [r13+920h]
 * 0000000140A0B1C4: mov     r8, r12
 * 0000000140A0B1C7: sub     al, bl
 * 0000000140A0B1C9: xor     r8, rsi
 * 0000000140A0B1CC: movzx   r10d, al
 * 0000000140A0B1D0: mov     r11d, 3Fh ; '?'
 * 0000000140A0B1D6: sub     r11d, r10d
 * 0000000140A0B1D9: rdtsc
 * 0000000140A0B1DB: shl     rdx, 20h
 * 0000000140A0B1DF: mov     rbx, 7010008004002001h
 * 0000000140A0B1E9: or      rax, rdx
 * 0000000140A0B1EC: mov     rcx, rax
 * 0000000140A0B1EF: ror     rax, 3
 * 0000000140A0B1F3: xor     rcx, rax
 * 0000000140A0B1F6: mov     rax, rbx
 * 0000000140A0B1F9: mul     rcx
 * 0000000140A0B1FC: mov     [rbp+0BE0h+var_418], rdx
 * 0000000140A0B203: xor     rax, rdx
 * 0000000140A0B206: xor     edx, edx
 * 0000000140A0B208: div     r11
 * 0000000140A0B20B: lea     r9d, [r10+rdx]
 * 0000000140A0B20F: rdtsc
 * 0000000140A0B211: shl     rdx, 20h
 * 0000000140A0B215: or      rax, rdx
 * 0000000140A0B218: mov     rcx, rax
 * 0000000140A0B21B: ror     rax, 3
 * 0000000140A0B21F: xor     rcx, rax
 * 0000000140A0B222: mov     rax, rbx
 * 0000000140A0B225: mul     rcx
 * 0000000140A0B228: xor     rax, rdx
 * 0000000140A0B22B: mov     [rbp+0BE0h+var_410], rdx
 * 0000000140A0B232: xor     edx, edx
 * 0000000140A0B234: div     r11
 * 0000000140A0B237: add     edx, r10d
 * 0000000140A0B23A: cmp     edx, r9d
 * 0000000140A0B23D: jz      short loc_140A0B20F
 * 0000000140A0B23F: mov     rbx, [r13+790h]
 * 0000000140A0B246: xor     r11d, r11d
 * 0000000140A0B249: mov     rsi, [r13+788h]
 * 0000000140A0B250: mov     eax, r9d
 * 0000000140A0B253: bts     r8, rax
 * 0000000140A0B257: mov     eax, edx
 * 0000000140A0B259: btr     r8, rax
 * 0000000140A0B25D: cmp     dword ptr [r13+924h], 3
 * 0000000140A0B265: jnz     loc_140A0B3FD
 * 0000000140A0B26B: mov     r13, [rbp+0BE0h+var_C40]
 * 0000000140A0B26F: test    r13, r13
 * 0000000140A0B272: jz      loc_140A0B3F6
 * 0000000140A0B278: mov     rcx, [rbp+0BE0h+arg_0]
 * 0000000140A0B27F: lea     edx, [r11+1]
 * 0000000140A0B283: mov     rax, [rcx+370h]
 * 0000000140A0B28A: mov     byte ptr [rbx], 13h
 * 0000000140A0B28D: mov     [rbx+1], dl
 * 0000000140A0B290: mov     [rbx+2], r11w
 * 0000000140A0B295: mov     [rbx+18h], rax
 * 0000000140A0B299: mov     [rbx+20h], r13
 * 0000000140A0B29D: mov     [rbx+38h], r11
 * 0000000140A0B2A1: mov     [rbx+10h], r11
 * 0000000140A0B2A5: mov     [rbx+28h], r8
 * 0000000140A0B2A9: mov     rax, [rcx+360h]
 * 0000000140A0B2B0: mov     rcx, [r13+8]
 * 0000000140A0B2B4: mov     r8, [r13+0]
 * 0000000140A0B2B8: mov     edx, [r13+10h]
 * 0000000140A0B2BC: call    KeGuardDispatchICall
 * 0000000140A0B2C1: mov     r9, [r13+0]
 * 0000000140A0B2C5: mov     rcx, r13
 * 0000000140A0B2C8: rol     rcx, 11h
 * 0000000140A0B2CC: mov     rax, 7010008004002001h
 * 0000000140A0B2D6: xor     rcx, r13
 * 0000000140A0B2D9: mov     r10d, 4
 * 0000000140A0B2DF: mul     rcx
 * 0000000140A0B2E2: mov     [rbp+0BE0h+var_408], rdx
 * 0000000140A0B2E9: xor     rdx, rax
 * 0000000140A0B2EC: lea     rax, [r13+18h]
 * 0000000140A0B2F0: mov     r8, rdx
 * 0000000140A0B2F3: xor     r11d, r11d
 * 0000000140A0B2F6: lea     r13d, [r10-3]
 * 0000000140A0B2FA: xor     [rax], r8
 * 0000000140A0B2FD: mov     ecx, r10d
 * 0000000140A0B300: rol     r8, cl
 * 0000000140A0B303: lea     rax, [rax-8]
 * 0000000140A0B307: sub     r10d, r13d
 * 0000000140A0B30A: jnz     short loc_140A0B2FA
 * 0000000140A0B30C: and     dl, 0Fh
 * 0000000140A0B30F: cmp     dl, 7
 * 0000000140A0B312: jnb     short loc_140A0B381
 * 0000000140A0B314: mov     rcx, r9
 * 0000000140A0B317: mov     rax, 7010008004002001h
 * 0000000140A0B321: rol     rcx, 11h
 * 0000000140A0B325: mov     r10d, 6
 * 0000000140A0B32B: xor     rcx, r9
 * 0000000140A0B32E: mul     rcx
 * 0000000140A0B331: mov     [rbp+0BE0h+var_400], rdx
 * 0000000140A0B338: xor     rdx, rax
 * 0000000140A0B33B: add     r8, rdx
 * 0000000140A0B33E: lea     rax, [r9+28h]
 * 0000000140A0B342: movsx   edx, word ptr [r9+8]
 * 0000000140A0B347: xor     [rax], r8
 * 0000000140A0B34A: mov     ecx, r10d
 * 0000000140A0B34D: rol     r8, cl
 * 0000000140A0B350: lea     rax, [rax-8]
 * 0000000140A0B354: sub     r10d, r13d
 * 0000000140A0B357: jnz     short loc_140A0B347
 * 0000000140A0B359: sub     rdx, 30h ; '0'
 * 0000000140A0B35D: shr     rdx, 3
 * 0000000140A0B361: test    edx, edx
 * 0000000140A0B363: jz      short loc_140A0B381
 * 0000000140A0B365: movsxd  r10, edx
 * 0000000140A0B368: add     r10, 5
 * 0000000140A0B36C: lea     r10, [r9+r10*8]
 * 0000000140A0B370: xor     [r10], r8
 * 0000000140A0B373: mov     ecx, edx
 * 0000000140A0B375: rol     r8, cl
 * 0000000140A0B378: lea     r10, [r10-8]
 * 0000000140A0B37C: sub     edx, r13d
 * 0000000140A0B37F: jnz     short loc_140A0B370
 * 0000000140A0B381: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A0B388: mov     [rbx+40h], r12
 * 0000000140A0B38C: mov     r12, 7010008004002001h
 * 0000000140A0B396: test    dword ptr [r13+990h], 100h
 * 0000000140A0B3A1: jz      short loc_140A0B422
 * 0000000140A0B3A3: lea     r9, [r15-48h]
 * 0000000140A0B3A7: mov     [r9+40h], rbx
 * 0000000140A0B3AB: rdtsc
 * 0000000140A0B3AD: shl     rdx, 20h
 * 0000000140A0B3B1: mov     r8d, 19h
 * 0000000140A0B3B7: or      rax, rdx
 * 0000000140A0B3BA: mov     rcx, rax
 * 0000000140A0B3BD: ror     rax, 3
 * 0000000140A0B3C1: xor     rcx, rax
 * 0000000140A0B3C4: mov     rax, r12
 * 0000000140A0B3C7: mul     rcx
 * 0000000140A0B3CA: lea     r15d, [r8-18h]
 * 0000000140A0B3CE: mov     [rbp+0BE0h+var_3F8], rdx
 * 0000000140A0B3D5: xor     rdx, rax
 * 0000000140A0B3D8: lea     rax, [r9+48h]
 * 0000000140A0B3DC: xor     [rax], rdx
 * 0000000140A0B3DF: lea     rax, [rax+8]
 * 0000000140A0B3E3: sub     r8, r15
 * 0000000140A0B3E6: jnz     short loc_140A0B3DC
 * 0000000140A0B3E8: mov     dword ptr [r9+48h], 48513148h
 * 0000000140A0B3F0: mov     [r9+20h], rdx
 * 0000000140A0B3F4: jmp     short loc_140A0B42B
 * 0000000140A0B3F6: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A0B3FD: mov     byte ptr [rbx], 13h
 * 0000000140A0B400: mov     eax, 1
 * 0000000140A0B405: mov     [rbx+1], al
 * 0000000140A0B408: mov     [rbx+2], r11w
 * 0000000140A0B40D: mov     [rbx+18h], r15
 * 0000000140A0B411: mov     [rbx+20h], r8
 * 0000000140A0B415: mov     [rbx+38h], r11
 * 0000000140A0B419: mov     [rbx+10h], r11
 * 0000000140A0B41D: jmp     loc_140A0B388
 * 0000000140A0B422: mov     r9, rbx
 * 0000000140A0B425: mov     r15d, 1
 * 0000000140A0B42B: mov     r10, [r13+0A98h]
 * 0000000140A0B432: test    r10, r10
 * 0000000140A0B435: jz      loc_140A0B4CA
 * 0000000140A0B43B: mov     r10, [r10+20h]
 * 0000000140A0B43F: mov     eax, 0E0E20100h
 * 0000000140A0B444: mov     rcx, r10
 * 0000000140A0B447: xor     rcx, rax
 * 0000000140A0B44A: shr     rcx, 4
 * 0000000140A0B44E: xor     rcx, r10
 * 0000000140A0B451: shr     rcx, 4
 * 0000000140A0B455: xor     rcx, [r13+590h]
 * 0000000140A0B45C: mov     al, cl
 * 0000000140A0B45E: mov     r8, rcx
 * 0000000140A0B461: and     al, 0Fh
 * 0000000140A0B463: movzx   r11d, al
 * 0000000140A0B467: cmovz   r11d, r15d
 * 0000000140A0B46B: xor     eax, eax
 * 0000000140A0B46D: mov     edx, eax
 * 0000000140A0B46F: test    r11b, r11b
 * 0000000140A0B472: jz      short loc_140A0B4AB
 * 0000000140A0B474: lea     r12d, [rax+0Fh]
 * 0000000140A0B478: mov     rdx, rcx
 * 0000000140A0B47B: and     rdx, r12
 * 0000000140A0B47E: add     rdx, r10
 * 0000000140A0B481: mov     r10, [rdx]
 * 0000000140A0B484: mov     rax, r10
 * 0000000140A0B487: xor     rax, 1DFE00h
 * 0000000140A0B48D: shr     rax, 4
 * 0000000140A0B491: xor     rax, r10
 * 0000000140A0B494: shr     rax, 4
 * 0000000140A0B498: xor     rcx, rax
 * 0000000140A0B49B: add     r11b, 0FFh
 * 0000000140A0B49F: jnz     short loc_140A0B478
 * 0000000140A0B4A1: mov     r12, 7010008004002001h
 * 0000000140A0B4AB: mov     rax, r8
 * 0000000140A0B4AE: xor     r11d, r11d
 * 0000000140A0B4B1: xor     r8, r9
 * 0000000140A0B4B4: and     eax, 1000h
 * 0000000140A0B4B9: test    rax, rax
 * 0000000140A0B4BC: cmovz   r8, r9
 * 0000000140A0B4C0: mov     [rdx], r8
 * 0000000140A0B4C3: mov     r9, [r13+0A98h]
 * 0000000140A0B4CA: lock or [rsp+0CE0h+var_CE0], r11d
 * 0000000140A0B4CF: mov     ecx, [r13+838h]
 * 0000000140A0B4D6: test    ecx, ecx
 * 0000000140A0B4D8: jz      loc_140A0B767
 * 0000000140A0B4DE: sub     ecx, 1
 * 0000000140A0B4E1: jz      loc_140A0B750
 * 0000000140A0B4E7: sub     ecx, 1
 * 0000000140A0B4EA: jz      loc_140A0B73D
 * 0000000140A0B4F0: sub     ecx, 1
 * 0000000140A0B4F3: jz      loc_140A0B681
 * 0000000140A0B4F9: cmp     ecx, 1
 * 0000000140A0B4FC: jz      loc_140A0B583
 * 0000000140A0B502: mov     r8, [r13+998h]
 * 0000000140A0B509: mov     [r8+48h], r9
 * 0000000140A0B50D: lock or [rsp+0CE0h+var_CE0], r11d
 * 0000000140A0B512: rdtsc
 * 0000000140A0B514: shl     rdx, 20h
 * 0000000140A0B518: or      rax, rdx
 * 0000000140A0B51B: mov     rcx, rax
 * 0000000140A0B51E: mov     rdx, rax
 * 0000000140A0B521: ror     rcx, 3
 * 0000000140A0B525: mov     rax, r12
 * 0000000140A0B528: xor     rdx, rcx
 * 0000000140A0B52B: mul     rdx
 * 0000000140A0B52E: mov     rcx, rdx
 * 0000000140A0B531: mov     [rbp+0BE0h+var_3F0], rdx
 * 0000000140A0B538: xor     rcx, rax
 * 0000000140A0B53B: mov     rax, 0ABCC77118461CEFDh
 * 0000000140A0B545: mul     rcx
 * 0000000140A0B548: shr     rdx, 1Ah
 * 0000000140A0B54C: imul    rax, rdx, 5F5E100h
 * 0000000140A0B553: sub     rcx, rax
 * 0000000140A0B556: mov     rax, 0D6BF94D5E57A42BDh
 * 0000000140A0B560: add     rcx, 47868C00h
 * 0000000140A0B567: imul    rcx
 * 0000000140A0B56A: add     rdx, rcx
 * 0000000140A0B56D: sar     rdx, 17h
 * 0000000140A0B571: mov     rax, rdx
 * 0000000140A0B574: shr     rax, 3Fh
 * 0000000140A0B578: add     rdx, rax
 * 0000000140A0B57B: mov     [r8], edx
 * 0000000140A0B57E: jmp     loc_140A0B812
 * 0000000140A0B583: mov     r8, [r13+9E0h]
 * 0000000140A0B58A: xor     r9d, r9d
 * 0000000140A0B58D: mov     rcx, [r13+9F0h]
 * 0000000140A0B594: mov     rdx, rbx
 * 0000000140A0B597: mov     rax, [r13+9E8h]
 * 0000000140A0B59E: mov     rdi, [r13+998h]
 * 0000000140A0B5A5: mov     byte ptr [r8], 12h
 * 0000000140A0B5A9: mov     byte ptr [r8+2], 58h ; 'X'
 * 0000000140A0B5AE: mov     [r8+50h], r11b
 * 0000000140A0B5B2: mov     [r8+8], rdi
 * 0000000140A0B5B6: mov     [r8+20h], rax
 * 0000000140A0B5BA: mov     [r8+28h], r11
 * 0000000140A0B5BE: mov     [r8+30h], rcx
 * 0000000140A0B5C2: mov     [r8+51h], r11b
 * 0000000140A0B5C6: mov     [r8+38h], r11
 * 0000000140A0B5CA: mov     [r8+52h], r11b
 * 0000000140A0B5CE: xor     r8d, r8d
 * 0000000140A0B5D1: mov     rax, [r13+2C0h]
 * 0000000140A0B5D8: mov     rcx, [r13+9E0h]
 * 0000000140A0B5DF: call    KeGuardDispatchICall
 * 0000000140A0B5E4: xor     r11d, r11d
 * 0000000140A0B5E7: test    al, al
 * 0000000140A0B5E9: jnz     loc_140A0B812
 * 0000000140A0B5EF: cmp     [r14], r11d
 * 0000000140A0B5F2: jnz     short loc_140A0B631
 * 0000000140A0B5F4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0B5FE: xor     edx, edx
 * 0000000140A0B600: add     rax, r13
 * 0000000140A0B603: mov     rcx, r13
 * 0000000140A0B606: mov     [r13+900h], rax
 * 0000000140A0B60D: mov     [r13+908h], r11
 * 0000000140A0B614: mov     qword ptr [r13+910h], 104h
 * 0000000140A0B61F: mov     [r13+918h], rdi
 * 0000000140A0B626: mov     [r14], r15d
 * 0000000140A0B629: call    $$b8
 * 0000000140A0B62E: xor     r11d, r11d
 * 0000000140A0B631: mov     edx, 28h ; '('
 * 0000000140A0B636: lea     rcx, [rbp+0BE0h+var_730]
 * 0000000140A0B63D: lea     r13d, [rdx-23h]
 * 0000000140A0B641: mov     rax, [r14]
 * 0000000140A0B644: add     edx, 0FFFFFFF8h
 * 0000000140A0B647: mov     [rcx], rax
 * 0000000140A0B64A: add     r14, 8
 * 0000000140A0B64E: add     rcx, 8
 * 0000000140A0B652: sub     r13, r15
 * 0000000140A0B655: jnz     short loc_140A0B641
 * 0000000140A0B657: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A0B65E: test    edx, edx
 * 0000000140A0B660: jz      loc_140A0B812
 * 0000000140A0B666: mov     r11d, 0FFFFFFFFh
 * 0000000140A0B66C: mov     al, [r14]
 * 0000000140A0B66F: add     r14, r15
 * 0000000140A0B672: mov     [rcx], al
 * 0000000140A0B674: add     rcx, r15
 * 0000000140A0B677: add     edx, r11d
 * 0000000140A0B67A: jnz     short loc_140A0B66C
 * 0000000140A0B67C: jmp     loc_140A0B80F
 * 0000000140A0B681: mov     rdi, [r13+998h]
 * 0000000140A0B688: mov     rax, [r13+698h]
 * 0000000140A0B68F: mov     rcx, [rdi+rax]
 * 0000000140A0B693: test    rcx, rcx
 * 0000000140A0B696: jz      loc_140A0B728
 * 0000000140A0B69C: cmp     [r14], r11d
 * 0000000140A0B69F: jnz     short loc_140A0B6DE
 * 0000000140A0B6A1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140A0B6AB: xor     edx, edx
 * 0000000140A0B6AD: add     rax, r13
 * 0000000140A0B6B0: mov     [r13+900h], rax
 * 0000000140A0B6B7: mov     [r13+908h], r11
 * 0000000140A0B6BE: mov     qword ptr [r13+910h], 104h
 * 0000000140A0B6C9: mov     [r13+918h], rcx
 * 0000000140A0B6D0: mov     rcx, r13
 * 0000000140A0B6D3: mov     [r14], r15d
 * 0000000140A0B6D6: call    $$b8
 * 0000000140A0B6DB: xor     r11d, r11d
 * 0000000140A0B6DE: mov     edx, 28h ; '('
 * 0000000140A0B6E3: lea     rcx, [rbp+0BE0h+var_730]
 * 0000000140A0B6EA: lea     r13d, [rdx-23h]
 * 0000000140A0B6EE: mov     rax, [r14]
 * 0000000140A0B6F1: add     edx, 0FFFFFFF8h
 * 0000000140A0B6F4: mov     [rcx], rax
 * 0000000140A0B6F7: add     r14, 8
 * 0000000140A0B6FB: add     rcx, 8
 * 0000000140A0B6FF: sub     r13, r15
 * 0000000140A0B702: jnz     short loc_140A0B6EE
 * 0000000140A0B704: mov     r13, [rbp+0BE0h+arg_0]
 * 0000000140A0B70B: test    edx, edx
 * 0000000140A0B70D: jz      short loc_140A0B728
 * 0000000140A0B70F: mov     r11d, 0FFFFFFFFh
 * 0000000140A0B715: mov     al, [r14]
 * 0000000140A0B718: add     r14, r15
 * 0000000140A0B71B: mov     [rcx], al
 * 0000000140A0B71D: add     rcx, r15
 * 0000000140A0B720: add     edx, r11d
 * 0000000140A0B723: jnz     short loc_140A0B715
 * 0000000140A0B725: xor     r11d, r11d
 * 0000000140A0B728: lock or [rsp+0CE0h+var_CE0], r11d
 * 0000000140A0B72D: mov     rax, [r13+698h]
 * 0000000140A0B734: mov     [rdi+rax], rbx
 * 0000000140A0B738: jmp     loc_140A0B812
 * 0000000140A0B73D: mov     rax, [r13+7C0h]
 * 0000000140A0B744: mov     [rax+80h], r9
 * 0000000140A0B74B: jmp     loc_140A0B812
 * 0000000140A0B750: mov     rcx, [r13+7C0h]
 * 0000000140A0B757: mov     rax, [r13+630h]
 * 0000000140A0B75E: mov     [rcx+rax], r9
 * 0000000140A0B762: jmp     loc_140A0B812
 * 0000000140A0B767: rdtsc
 * 0000000140A0B769: shl     rdx, 20h
 * 0000000140A0B76D: or      rax, rdx
 * 0000000140A0B770: mov     rcx, rax
 * 0000000140A0B773: mov     rdx, rax
 * 0000000140A0B776: ror     rcx, 3
 * 0000000140A0B77A: mov     rax, r12
 * 0000000140A0B77D: xor     rdx, rcx
 * 0000000140A0B780: mul     rdx
 * 0000000140A0B783: mov     rcx, rdx
 * 0000000140A0B786: mov     [rbp+0BE0h+var_3E8], rdx
 * 0000000140A0B78D: xor     rcx, rax
 * 0000000140A0B790: mov     rax, 0ABCC77118461CEFDh
 * 0000000140A0B79A: mul     rcx
 * 0000000140A0B79D: shr     rdx, 1Ah
 * 0000000140A0B7A1: imul    rax, rdx, 5F5E100h
 * 0000000140A0B7A8: sub     rcx, rax
 * 0000000140A0B7AB: sub     rdi, rcx
 * 0000000140A0B7AE: rdtsc
 * 0000000140A0B7B0: shl     rdx, 20h
 * 0000000140A0B7B4: or      rax, rdx
 * 0000000140A0B7B7: mov     [rsp+0CE0h+BugCheckParameter4], r9
 * 0000000140A0B7BC: mov     rcx, rax
 * 0000000140A0B7BF: mov     rdx, rax
 * 0000000140A0B7C2: ror     rcx, 3
 * 0000000140A0B7C6: mov     rax, r12
 * 0000000140A0B7C9: xor     rdx, rcx
 * 0000000140A0B7CC: mov     rcx, rsi
 * 0000000140A0B7CF: mul     rdx
 * 0000000140A0B7D2: mov     r8, rdx
 * 0000000140A0B7D5: mov     [rbp+0BE0h+var_3E0], rdx
 * 0000000140A0B7DC: xor     r8, rax
 * 0000000140A0B7DF: mov     rax, 346DC5D63886594Bh
 * 0000000140A0B7E9: mul     r8
 * 0000000140A0B7EC: shr     rdx, 0Bh
 * 0000000140A0B7F0: imul    rax, rdx, 2710h
 * 0000000140A0B7F7: mov     rdx, rdi
 * 0000000140A0B7FA: sub     r8, rax
 * 0000000140A0B7FD: mov     rax, [r13+1D8h]
 * 0000000140A0B804: mov     r9d, r8d
 * 0000000140A0B807: xor     r8d, r8d
 * 0000000140A0B80A: call    KeGuardDispatchICall
 * 0000000140A0B80F: xor     r11d, r11d
 * 0000000140A0B812: mov     ecx, 8000h
 * 0000000140A0B817: cmp     [rbp+0BE0h+var_730], r11d
 * 0000000140A0B81E: jz      loc_140A0BA08
 * 0000000140A0B824: test    [r13+990h], ecx
 * 0000000140A0B82B: jnz     loc_140A0BA08
 * 0000000140A0B831: mov     r13, [rbp+0BE0h+var_718]
 * 0000000140A0B838: mov     rbx, [rbp+0BE0h+var_710]
 * 0000000140A0B83F: mov     rdi, [rbp+0BE0h+var_720]
 * 0000000140A0B846: mov     r14, [rbp+0BE0h+var_728]
 * 0000000140A0B84D: mov     rax, [rbp+0BE0h+arg_0]
 * 0000000140A0B854: mov     [rbp+0BE0h+arg_8], r13
 * 0000000140A0B85B: mov     [rsp+0CE0h+var_C70], rbx
 * 0000000140A0B860: mov     [rbp+0BE0h+var_BD0], rdi
 * 0000000140A0B864: mov     [rbp+0BE0h+var_C40], r14
 * 0000000140A0B868: mov     [rbp+0BE0h+var_BB8], rax
 * 0000000140A0B86C: mov     rax, cr8
 * 0000000140A0B870: mov     r8d, 2
 * 0000000140A0B876: cmp     al, r8b
 * 0000000140A0B879: jnb     short loc_140A0B883
 * 0000000140A0B87B: mov     rax, cr8
 * 0000000140A0B87F: mov     cr8, r8
 * 0000000140A0B883: mov     rdx, gs:20h
 * 0000000140A0B88C: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A0B890: mov     rcx, [rax+638h]
 * 0000000140A0B897: mov     rsi, [rdx+rcx]
 * 0000000140A0B89B: mov     rcx, gs:20h
 * 0000000140A0B8A4: mov     r9, [rbp+0BE0h+var_BB8]
 * 0000000140A0B8A8: mov     rax, [r9+648h]
 * 0000000140A0B8AF: mov     r15, [rcx+rax]
 * 0000000140A0B8B3: mov     rax, [r9+640h]
 * 0000000140A0B8BA: mov     [rbp+0BE0h+arg_0], r15
 * 0000000140A0B8C1: cmp     [rdx+rax], r11b
 * 0000000140A0B8C5: jz      short loc_140A0B8E0
 * 0000000140A0B8C7: lea     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A0B8CB: cmp     rax, rsi
 * 0000000140A0B8CE: ja      short loc_140A0B8E0
 * 0000000140A0B8D0: lea     rax, [rsi-6000h]
 * 0000000140A0B8D7: lea     rcx, [rbp+0BE0h+var_BB8]
 * 0000000140A0B8DB: cmp     rcx, rax
 * 0000000140A0B8DE: jnb     short loc_140A0B8EF
 * 0000000140A0B8E0: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A0B8E4: mov     rcx, [rax+678h]
 * 0000000140A0B8EB: mov     rsi, [r15+rcx]
 * 0000000140A0B8EF: mov     r9, [rbp+0BE0h+var_BB8]
 * 0000000140A0B8F3: test    dword ptr [r9+990h], 8000000h
 * 0000000140A0B8FE: jnz     loc_140A0BD44
 * 0000000140A0B904: mov     r12, cr0
 * 0000000140A0B908: mov     rax, r12
 * 0000000140A0B90B: btr     rax, 10h
 * 0000000140A0B910: mov     cr0, rax
 * 0000000140A0B913: mov     eax, [r9+0AA0h]
 * 0000000140A0B91A: lea     r14, [r9+0AA8h]
 * 0000000140A0B921: shl     rax, 4
 * 0000000140A0B925: lea     r10, [r9+0AA8h]
 * 0000000140A0B92C: add     r14, rax
 * 0000000140A0B92F: mov     r8d, r11d
 * 0000000140A0B932: mov     rdx, r14
 * 0000000140A0B935: cmp     [r9+0AA4h], r11d
 * 0000000140A0B93C: jbe     short loc_140A0B98D
 * 0000000140A0B93E: mov     r11d, 1
 * 0000000140A0B944: lea     r13d, [r11+0Fh]
 * 0000000140A0B948: mov     rcx, [rdx]
 * 0000000140A0B94B: mov     rax, [rdx+8]
 * 0000000140A0B94F: mov     [rcx], rax
 * 0000000140A0B952: mov     rcx, cr4
 * 0000000140A0B955: test    rcx, 20080h
 * 0000000140A0B95C: jz      short loc_140A0B96E
 * 0000000140A0B95E: mov     rax, rcx
 * 0000000140A0B961: btc     rax, 7
 * 0000000140A0B966: mov     cr4, rax
 * 0000000140A0B969: mov     cr4, rcx
 * 0000000140A0B96C: jmp     short loc_140A0B974
 * 0000000140A0B96E: mov     rax, cr3
 * 0000000140A0B971: mov     cr3, rax
 * 0000000140A0B974: add     rdx, r13
 * 0000000140A0B977: add     r8d, r11d
 * 0000000140A0B97A: cmp     r8d, [r9+0AA4h]
 * 0000000140A0B981: jb      short loc_140A0B948
 * 0000000140A0B983: mov     r13, [rbp+0BE0h+arg_8]
 * 0000000140A0B98A: xor     r11d, r11d
 * 0000000140A0B98D: cmp     r10, r14
 * 0000000140A0B990: jnb     loc_140A0BD2C
 * 0000000140A0B996: xor     r13d, r13d
 * 0000000140A0B999: mov     r15d, 0FFFFFFFFh
 * 0000000140A0B99F: mov     edi, [r10+8]
 * 0000000140A0B9A3: mov     rcx, rdx
 * 0000000140A0B9A6: mov     r8, [r10]
 * 0000000140A0B9A9: mov     r11d, edi
 * 0000000140A0B9AC: cmp     edi, 8
 * 0000000140A0B9AF: jb      short loc_140A0B9D7
 * 0000000140A0B9B1: mov     ebx, edi
 * 0000000140A0B9B3: mov     r13d, 1
 * 0000000140A0B9B9: shr     rbx, 3
 * 0000000140A0B9BD: mov     rax, [rcx]
 * 0000000140A0B9C0: add     r11d, 0FFFFFFF8h
 * 0000000140A0B9C4: mov     [r8], rax
 * 0000000140A0B9C7: add     rcx, 8
 * 0000000140A0B9CB: add     r8, 8
 * 0000000140A0B9CF: sub     rbx, r13
 * 0000000140A0B9D2: jnz     short loc_140A0B9BD
 * 0000000140A0B9D4: xor     r13d, r13d
 * 0000000140A0B9D7: test    r11d, r11d
 * 0000000140A0B9DA: jz      short loc_140A0B9F6
 * 0000000140A0B9DC: sub     r8, rcx
 * 0000000140A0B9DF: mov     r13d, 1
 * 0000000140A0B9E5: mov     al, [rcx]
 * 0000000140A0B9E7: mov     [r8+rcx], al
 * 0000000140A0B9EB: add     rcx, r13
 * 0000000140A0B9EE: add     r11d, r15d
 * 0000000140A0B9F1: jnz     short loc_140A0B9E5
 * 0000000140A0B9F3: xor     r13d, r13d
 * 0000000140A0B9F6: add     rdx, rdi
 * 0000000140A0B9F9: add     r10, 10h
 * 0000000140A0B9FD: cmp     r10, r14
 * 0000000140A0BA00: jnb     loc_140A0BD12
 * 0000000140A0BA06: jmp     short loc_140A0B99F
 * 0000000140A0BA08: test    dword ptr [r13+990h], 40000000h
 * 0000000140A0BA13: jnz     short loc_140A0BA5F
 * 0000000140A0BA15: cmp     [rbp+0BE0h+var_C38], r11d
 * 0000000140A0BA19: jz      short loc_140A0BA5F
 * 0000000140A0BA1B: mov     ecx, [r13+924h]
 * 0000000140A0BA22: sub     ecx, 1
 * 0000000140A0BA25: jz      short loc_140A0BA39
 * 0000000140A0BA27: mov     eax, 2
 * 0000000140A0BA2C: cmp     ecx, eax
 * 0000000140A0BA2E: jnz     short loc_140A0BA5F
 * 0000000140A0BA30: mov     rax, [r13+368h]
 * 0000000140A0BA37: jmp     short loc_140A0BA58
 * 0000000140A0BA39: add     qword ptr [r13+7C8h], 0FFFFFFFFFFFFFFF8h
 * 0000000140A0BA41: mov     rax, [r13+7C8h]
 * 0000000140A0BA48: mov     ecx, [rax]
 * 0000000140A0BA4A: mov     [r13+7D0h], ecx
 * 0000000140A0BA51: mov     rax, [r13+228h]
 * 0000000140A0BA58: mov     [r13+100h], rax
 * 0000000140A0BA5F: mov     rax, r13
 * 0000000140A0BA62: add     rsp, 0CA8h
 * 0000000140A0BA69: pop     r15
 * 0000000140A0BA6B: pop     r14
 * 0000000140A0BA6D: pop     r13
 * 0000000140A0BA6F: pop     r12
 * 0000000140A0BA71: pop     rdi
 * 0000000140A0BA72: pop     rsi
 * 0000000140A0BA73: pop     rbx
 * 0000000140A0BA74: pop     rbp
 * 0000000140A0BA75: retn
 * 0000000140A0BA76: mov     [rbp+0BE0h+var_A24], 0D0002D61h
 * 0000000140A0BA80: xor     r9d, r9d; BugCheckParameter3
 * 0000000140A0BA83: mov     ecx, [rbp+0BE0h+var_A24]
 * 0000000140A0BA89: mov     r8, r12; BugCheckParameter2
 * 0000000140A0BA8C: xor     ecx, 2D72h
 * 0000000140A0BA92: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0BA97: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0BA9A: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140A0BA9E: call    KeBugCheckEx
 * 0000000140A0BAA4: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A0BAA9: mov     r9, r15; BugCheckParameter3
 * 0000000140A0BAAC: mov     [rbp+0BE0h+var_9F0], 0D0002D61h
 * 0000000140A0BAB6: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140A0BABB: mov     ecx, [rbp+0BE0h+var_9F0]
 * 0000000140A0BAC1: xor     ecx, 2D72h
 * 0000000140A0BAC7: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0BACC: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0BACF: call    KeBugCheckEx
 * 0000000140A0BAD5: mov     [rbp+0BE0h+var_9EC], 0D0002D61h
 * 0000000140A0BADF: mov     ecx, [rbp+0BE0h+var_9EC]
 * 0000000140A0BAE5: xor     ecx, 2D72h
 * 0000000140A0BAEB: mov     r9d, edx; BugCheckParameter3
 * 0000000140A0BAEE: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0BAF1: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140A0BAF6: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0BAFB: call    KeBugCheckEx
 * 0000000140A0BB01: mov     [rbp+0BE0h+var_9E8], 0D0002D61h
 * 0000000140A0BB0B: mov     ecx, [rbp+0BE0h+var_9E8]
 * 0000000140A0BB11: xor     ecx, 2D72h
 * 0000000140A0BB17: mov     r9d, edx; BugCheckParameter3
 * 0000000140A0BB1A: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0BB1D: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140A0BB22: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0BB27: call    KeBugCheckEx
 * 0000000140A0BB2D: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A0BB32: mov     r9d, 2; BugCheckParameter3
 * 0000000140A0BB38: mov     [rbp+0BE0h+var_A5C], 0D0002D61h
 * 0000000140A0BB42: mov     ecx, [rbp+0BE0h+var_A5C]
 * 0000000140A0BB48: xor     ecx, 2D72h
 * 0000000140A0BB4E: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0BB53: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0BB56: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140A0BB5A: call    KeBugCheckEx
 * 0000000140A0BB60: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A0BB65: mov     r9d, 3; BugCheckParameter3
 * 0000000140A0BB6B: mov     [rbp+0BE0h+var_9E4], 0D0002D61h
 * 0000000140A0BB75: mov     ecx, [rbp+0BE0h+var_9E4]
 * 0000000140A0BB7B: xor     ecx, 2D72h
 * 0000000140A0BB81: mov     [rsp+0CE0h+BugCheckParameter4], rdx; BugCheckParameter4
 * 0000000140A0BB86: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0BB89: lea     edx, [r9+7]; BugCheckParameter1
 * 0000000140A0BB8D: call    KeBugCheckEx
 * 0000000140A0BB93: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A0BB98: mov     r9d, 6; BugCheckParameter3
 * 0000000140A0BB9E: mov     [rbp+0BE0h+var_9E0], 0D0002D61h
 * 0000000140A0BBA8: mov     ecx, [rbp+0BE0h+var_9E0]
 * 0000000140A0BBAE: xor     ecx, 2D72h
 * 0000000140A0BBB4: mov     [rsp+0CE0h+BugCheckParameter4], rdx; BugCheckParameter4
 * 0000000140A0BBB9: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0BBBC: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140A0BBC0: call    KeBugCheckEx
 * 0000000140A0BBC6: mov     [rbp+0BE0h+var_A78], 0D0002D61h
 * 0000000140A0BBD0: xor     r9d, r9d; BugCheckParameter3
 * 0000000140A0BBD3: mov     ecx, [rbp+0BE0h+var_A78]
 * 0000000140A0BBD9: mov     r8, r14; BugCheckParameter2
 * 0000000140A0BBDC: xor     ecx, 2D72h
 * 0000000140A0BBE2: mov     [rsp+0CE0h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140A0BBE7: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0BBEA: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140A0BBEE: call    KeBugCheckEx
 * 0000000140A0BBF4: xor     eax, eax
 * 0000000140A0BBF6: mov     [rbp+0BE0h+var_A64], 0D0002D61h
 * 0000000140A0BC00: mov     ecx, [rbp+0BE0h+var_A64]
 * 0000000140A0BC06: mov     r8, r14; BugCheckParameter2
 * 0000000140A0BC09: xor     ecx, 2D72h
 * 0000000140A0BC0F: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0BC14: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0BC17: lea     r9d, [rax+3]; BugCheckParameter3
 * 0000000140A0BC1B: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140A0BC1E: call    KeBugCheckEx
 * 0000000140A0BC24: mov     [rbp+0BE0h+var_A74], 0D0002D61h
 * 0000000140A0BC2E: mov     r8, r14; BugCheckParameter2
 * 0000000140A0BC31: mov     ecx, [rbp+0BE0h+var_A74]
 * 0000000140A0BC37: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140A0BC3C: xor     ecx, 2D72h
 * 0000000140A0BC42: mov     [rsp+0CE0h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140A0BC47: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0BC4A: mov     r9, r13; BugCheckParameter3
 * 0000000140A0BC4D: call    KeBugCheckEx
 * 0000000140A0BC53: xor     eax, eax
 * 0000000140A0BC55: mov     [rbp+0BE0h+var_A70], 0D0002D61h
 * 0000000140A0BC5F: mov     ecx, [rbp+0BE0h+var_A70]
 * 0000000140A0BC65: mov     r8, r14; BugCheckParameter2
 * 0000000140A0BC68: xor     ecx, 2D72h
 * 0000000140A0BC6E: mov     r9d, edx; BugCheckParameter3
 * 0000000140A0BC71: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0BC74: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140A0BC77: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0BC7C: call    KeBugCheckEx
 * 0000000140A0BC82: xor     eax, eax
 * 0000000140A0BC84: mov     [rbp+0BE0h+var_A6C], 0D0002D61h
 * 0000000140A0BC8E: mov     ecx, [rbp+0BE0h+var_A6C]
 * 0000000140A0BC94: xor     ecx, 2D72h
 * 0000000140A0BC9A: mov     r9d, edx; BugCheckParameter3
 * 0000000140A0BC9D: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0BCA0: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140A0BCA3: mov     [rsp+0CE0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140A0BCA8: call    KeBugCheckEx
 * 0000000140A0BCAE: mov     [rsp+0CE0h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140A0BCB3: mov     r8, r14; BugCheckParameter2
 * 0000000140A0BCB6: mov     r9d, 2; BugCheckParameter3
 * 0000000140A0BCBC: mov     [rbp+0BE0h+var_A68], 0D0002D61h
 * 0000000140A0BCC6: mov     ecx, [rbp+0BE0h+var_A68]
 * 0000000140A0BCCC: xor     ecx, 2D72h
 * 0000000140A0BCD2: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0BCD5: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140A0BCD9: call    KeBugCheckEx
 * 0000000140A0BCDF: mov     r8, [rsp+0CE0h+BugCheckParameter2]; BugCheckParameter2
 * 0000000140A0BCE4: mov     r9d, 6; BugCheckParameter3
 * 0000000140A0BCEA: mov     [rbp+0BE0h+var_A60], 0D0002D61h
 * 0000000140A0BCF4: mov     ecx, [rbp+0BE0h+var_A60]
 * 0000000140A0BCFA: xor     ecx, 2D72h
 * 0000000140A0BD00: mov     [rsp+0CE0h+BugCheckParameter4], rsi; BugCheckParameter4
 * 0000000140A0BD05: ror     ecx, 5Ch; BugCheckCode
 * 0000000140A0BD08: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140A0BD0C: call    KeBugCheckEx
 * 0000000140A0BD12: mov     r15, [rbp+0BE0h+arg_0]
 * 0000000140A0BD19: xor     r11d, r11d
 * 0000000140A0BD1C: mov     r13, [rbp+0BE0h+arg_8]
 * 0000000140A0BD23: mov     rbx, [rsp+0CE0h+var_C70]
 * 0000000140A0BD28: mov     rdi, [rbp+0BE0h+var_BD0]
 * 0000000140A0BD2C: mov     rax, [r9+218h]
 * 0000000140A0BD33: mov     byte ptr [rax], 0C3h
 * 0000000140A0BD36: mov     cr0, r12
 * 0000000140A0BD3A: mov     r14, [rbp+0BE0h+var_C40]
 * 0000000140A0BD3E: mov     r8d, 2
 * 0000000140A0BD44: mov     r9, [rbp+0BE0h+var_BB8]
 * 0000000140A0BD48: mov     ecx, [r9+928h]
 * 0000000140A0BD4F: test    ecx, ecx
 * 0000000140A0BD51: jz      loc_140A0BE37
 * 0000000140A0BD57: mov     rax, cr8
 * 0000000140A0BD5B: cmp     al, r8b
 * 0000000140A0BD5E: jnb     short loc_140A0BD6F
 * 0000000140A0BD60: mov     rax, cr8
 * 0000000140A0BD64: mov     cr8, r8
 * 0000000140A0BD68: mov     ecx, [r9+928h]
 * 0000000140A0BD6F: test    ecx, ecx
 * 0000000140A0BD71: jz      loc_140A0BE37
 * 0000000140A0BD77: sub     ecx, 1
 * 0000000140A0BD7A: jz      loc_140A0BE2A
 * 0000000140A0BD80: sub     ecx, 1
 * 0000000140A0BD83: jz      loc_140A0BE21
 * 0000000140A0BD89: sub     ecx, 1
 * 0000000140A0BD8C: jz      loc_140A0BE18
 * 0000000140A0BD92: sub     ecx, 1
 * 0000000140A0BD95: jz      short loc_140A0BDDC
 * 0000000140A0BD97: cmp     ecx, 1
 * 0000000140A0BD9A: jz      short loc_140A0BDB5
 * 0000000140A0BD9C: mov     rax, [r9+5B8h]
 * 0000000140A0BDA3: mov     ecx, 1
 * 0000000140A0BDA8: lock or [rax+340h], rcx
 * 0000000140A0BDB0: jmp     loc_140A0BE37
 * 0000000140A0BDB5: mov     rcx, gs:20h
 * 0000000140A0BDBE: mov     rax, [r9+648h]
 * 0000000140A0BDC5: mov     edx, [r9+990h]
 * 0000000140A0BDCC: shr     edx, 0Ah
 * 0000000140A0BDCF: and     edx, 1Fh
 * 0000000140A0BDD2: mov     rcx, [rax+rcx]
 * 0000000140A0BDD6: lock bts [rcx], edx
 * 0000000140A0BDDA: jmp     short loc_140A0BE37
 * 0000000140A0BDDC: mov     rcx, gs:20h
 * 0000000140A0BDE5: mov     rax, [r9+648h]
 * 0000000140A0BDEC: mov     r8d, [r9+990h]
 * 0000000140A0BDF3: shr     r8d, 0Ah
 * 0000000140A0BDF7: and     r8d, 1Fh
 * 0000000140A0BDFB: mov     rcx, [rax+rcx]
 * 0000000140A0BDFF: add     rcx, [r9+6A8h]
 * 0000000140A0BE06: mov     rax, [r9+688h]
 * 0000000140A0BE0D: mov     rdx, [rcx+rax]
 * 0000000140A0BE11: lock bts [rdx], r8d
 * 0000000140A0BE16: jmp     short loc_140A0BE37
 * 0000000140A0BE18: mov     rax, [r9+560h]
 * 0000000140A0BE1F: jmp     short loc_140A0BE31
 * 0000000140A0BE21: mov     rax, [r9+558h]
 * 0000000140A0BE28: jmp     short loc_140A0BE31
 * 0000000140A0BE2A: mov     rax, [r9+548h]
 * 0000000140A0BE31: lock bts qword ptr [rax], 0
 * 0000000140A0BE37: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A0BE3B: mov     rcx, [rax+690h]
 * 0000000140A0BE42: mov     [r15+rcx], r11
 * 0000000140A0BE46: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A0BE4A: mov     r10, [rax+6A0h]
 * 0000000140A0BE51: mov     [r15+r10], r11
 * 0000000140A0BE55: mov     rcx, [rbp+0BE0h+var_BB8]
 * 0000000140A0BE59: mov     rcx, [rcx+158h]; Target
 * 0000000140A0BE60: call    KeGuardCheckICall
 * 0000000140A0BE65: mov     rax, [rbp+0BE0h+var_BB8]
 * 0000000140A0BE69: mov     r9, rbx
 * 0000000140A0BE6C: mov     [rsp+0CE0h+var_CB0], rsi
 * 0000000140A0BE71: mov     r8, rdi
 * 0000000140A0BE74: mov     rdx, r14
 * 0000000140A0BE77: mov     ecx, 109h
 * 0000000140A0BE7C: mov     r10, [rax+158h]
 * 0000000140A0BE83: mov     [rsp+0CE0h+var_CB8], r10
 * 0000000140A0BE88: mov     [rsp+0CE0h+BugCheckParameter4], r13
 * 0000000140A0BE8D: call    SdbpCheckDll
 */
