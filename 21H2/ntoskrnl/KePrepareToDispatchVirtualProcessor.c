/*
 * XREFs of KePrepareToDispatchVirtualProcessor @ 0x14051B320
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiFlushCurrentRsb @ 0x140413D80 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KePrepareToDispatchVirtualProcessor @ 0x14051B320
 * Reason: Hex-Rays returned no pseudocode for 0x14051B320
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014051B320: mov     rax, rsp
 * 000000014051B323: mov     [rax+8], rbx
 * 000000014051B327: mov     [rax+10h], rsi
 * 000000014051B32B: mov     [rax+18h], rdi
 * 000000014051B32F: mov     [rax+20h], r14
 * 000000014051B333: push    r15
 * 000000014051B335: sub     rsp, 40h
 * 000000014051B339: mov     rbx, gs:20h
 * 000000014051B342: mov     r10, rdx
 * 000000014051B345: movups  xmm0, cs:KiSpeculationFeatures
 * 000000014051B34C: xor     edx, edx
 * 000000014051B34E: mov     r14, [rsp+48h+arg_20]
 * 000000014051B353: movsd   xmm1, cs:qword_140CFC4B0
 * 000000014051B35B: mov     r15, [rsp+48h+arg_28]
 * 000000014051B360: mov     [r10], dl
 * 000000014051B363: mov     [r8], dl
 * 000000014051B366: mov     [r9], dl
 * 000000014051B369: mov     [r14], dl
 * 000000014051B36C: mov     [r15], rdx
 * 000000014051B36F: movups  xmmword ptr [rax-28h], xmm0
 * 000000014051B373: movsd   qword ptr [rax-18h], xmm1
 * 000000014051B378: cli
 * 000000014051B379: test    cl, cl
 * 000000014051B37B: jz      loc_14051B4AA
 * 000000014051B381: mov     rax, 1000000000h
 * 000000014051B38B: test    [rsp+48h+var_28], rax
 * 000000014051B390: jnz     short loc_14051B39B
 * 000000014051B392: mov     byte ptr [r8], 1
 * 000000014051B396: jmp     loc_14051B4E5
 * 000000014051B39B: mov     rax, [rbx+8]
 * 000000014051B39F: mov     rcx, [rax+220h]
 * 000000014051B3A6: mov     rsi, [rcx+9E0h]
 * 000000014051B3AD: test    rsi, rsi
 * 000000014051B3B0: jnz     short loc_14051B3B8
 * 000000014051B3B2: mov     byte ptr [r8], 1
 * 000000014051B3B6: jmp     short loc_14051B3F4
 * 000000014051B3B8: movzx   ecx, word ptr [rbx+6E0h]
 * 000000014051B3BF: test    cl, 8
 * 000000014051B3C2: jnz     loc_14051B4AA
 * 000000014051B3C8: test    byte ptr [rbx+6D6h], 1
 * 000000014051B3CF: jz      short loc_14051B3DA
 * 000000014051B3D1: test    cl, 10h
 * 000000014051B3D4: jnz     loc_14051B4AA
 * 000000014051B3DA: test    byte ptr [rsp+48h+var_28], 10h
 * 000000014051B3DF: jz      short loc_14051B3F0
 * 000000014051B3E1: test    [rsp+48h+var_28], 1000h
 * 000000014051B3EA: jz      loc_14051B4AA
 * 000000014051B3F0: mov     byte ptr [r9], 1
 * 000000014051B3F4: movzx   eax, word ptr [rbx+6ECh]
 * 000000014051B3FB: test    al, 2
 * 000000014051B3FD: jz      short loc_14051B408
 * 000000014051B3FF: xor     ecx, ecx
 * 000000014051B401: call    KiUpdateStibpPairing
 * 000000014051B406: jmp     short loc_14051B44F
 * 000000014051B408: movzx   eax, word ptr [rbx+6E0h]
 * 000000014051B40F: test    al, 4
 * 000000014051B411: jz      short loc_14051B433
 * 000000014051B413: mov     eax, 1
 * 000000014051B418: lea     ecx, [rax+48h]
 * 000000014051B41B: wrmsr
 * 000000014051B41D: mov     edi, 0FFFBh
 * 000000014051B422: and     [rbx+6E0h], di
 * 000000014051B429: mov     [r10], al
 * 000000014051B42C: movzx   eax, word ptr [rbx+6E0h]
 * 000000014051B433: test    al, 20h
 * 000000014051B435: jz      short loc_14051B448
 * 000000014051B437: call    KiFlushCurrentRsb
 * 000000014051B43C: mov     eax, 0FFDFh
 * 000000014051B441: and     [rbx+6E0h], ax
 * 000000014051B448: mov     [rbx+6D8h], rsi
 * 000000014051B44F: movzx   eax, word ptr [rbx+6E0h]
 * 000000014051B456: movzx   edx, word ptr [rbx+6D0h]
 * 000000014051B45D: movzx   ecx, word ptr [rbx+6E6h]
 * 000000014051B464: mov     [rbx+6D4h], ax
 * 000000014051B46B: mov     rax, 20000000000h
 * 000000014051B475: mov     [rbx+6D2h], dx
 * 000000014051B47C: test    [rsp+48h+var_28], rax
 * 000000014051B481: jz      short loc_14051B48E
 * 000000014051B483: test    byte ptr [rbx+6D6h], 1
 * 000000014051B48A: cmovnz  cx, dx
 * 000000014051B48E: cmp     [rbx+6E4h], cx
 * 000000014051B495: jz      short loc_14051B4E5
 * 000000014051B497: movzx   eax, cx
 * 000000014051B49A: mov     [r15], rax
 * 000000014051B49D: mov     byte ptr [r14], 1
 * 000000014051B4A1: mov     [rbx+6E4h], cx
 * 000000014051B4A8: jmp     short loc_14051B4E5
 * 000000014051B4AA: movzx   eax, word ptr [rbx+6E0h]
 * 000000014051B4B1: mov     edi, 0FFFBh
 * 000000014051B4B6: test    al, 4
 * 000000014051B4B8: jz      short loc_14051B4D5
 * 000000014051B4BA: mov     eax, 1
 * 000000014051B4BF: lea     ecx, [rax+48h]
 * 000000014051B4C2: wrmsr
 * 000000014051B4C4: and     [rbx+6E0h], di
 * 000000014051B4CB: mov     [r10], al
 * 000000014051B4CE: movzx   eax, word ptr [rbx+6E0h]
 * 000000014051B4D5: test    al, 20h
 * 000000014051B4D7: jz      short loc_14051B4E5
 * 000000014051B4D9: call    KiFlushCurrentRsb
 * 000000014051B4DE: and     [rbx+6E0h], di
 * 000000014051B4E5: mov     rbx, [rsp+48h+arg_0]
 * 000000014051B4EA: mov     rsi, [rsp+48h+arg_8]
 * 000000014051B4EF: mov     rdi, [rsp+48h+arg_10]
 * 000000014051B4F4: mov     r14, [rsp+48h+arg_18]
 * 000000014051B4F9: add     rsp, 40h
 * 000000014051B4FD: pop     r15
 * 000000014051B4FF: retn
 */
