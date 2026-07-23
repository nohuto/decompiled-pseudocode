/*
 * XREFs of KePrepareToDispatchVirtualProcessor @ 0x14051B560
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiFlushCurrentRsb @ 0x140413E80 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KePrepareToDispatchVirtualProcessor @ 0x14051B560
 * Reason: Hex-Rays returned no pseudocode for 0x14051B560
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014051B560: mov     rax, rsp
 * 000000014051B563: mov     [rax+8], rbx
 * 000000014051B567: mov     [rax+10h], rsi
 * 000000014051B56B: mov     [rax+18h], rdi
 * 000000014051B56F: mov     [rax+20h], r14
 * 000000014051B573: push    r15
 * 000000014051B575: sub     rsp, 40h
 * 000000014051B579: mov     rbx, gs:20h
 * 000000014051B582: mov     r10, rdx
 * 000000014051B585: movups  xmm0, cs:KiSpeculationFeatures
 * 000000014051B58C: xor     edx, edx
 * 000000014051B58E: mov     r14, [rsp+48h+arg_20]
 * 000000014051B593: movsd   xmm1, cs:qword_140CFC4B0
 * 000000014051B59B: mov     r15, [rsp+48h+arg_28]
 * 000000014051B5A0: mov     [r10], dl
 * 000000014051B5A3: mov     [r8], dl
 * 000000014051B5A6: mov     [r9], dl
 * 000000014051B5A9: mov     [r14], dl
 * 000000014051B5AC: mov     [r15], rdx
 * 000000014051B5AF: movups  xmmword ptr [rax-28h], xmm0
 * 000000014051B5B3: movsd   qword ptr [rax-18h], xmm1
 * 000000014051B5B8: cli
 * 000000014051B5B9: test    cl, cl
 * 000000014051B5BB: jz      loc_14051B6EA
 * 000000014051B5C1: mov     rax, 1000000000h
 * 000000014051B5CB: test    [rsp+48h+var_28], rax
 * 000000014051B5D0: jnz     short loc_14051B5DB
 * 000000014051B5D2: mov     byte ptr [r8], 1
 * 000000014051B5D6: jmp     loc_14051B725
 * 000000014051B5DB: mov     rax, [rbx+8]
 * 000000014051B5DF: mov     rcx, [rax+220h]
 * 000000014051B5E6: mov     rsi, [rcx+9E0h]
 * 000000014051B5ED: test    rsi, rsi
 * 000000014051B5F0: jnz     short loc_14051B5F8
 * 000000014051B5F2: mov     byte ptr [r8], 1
 * 000000014051B5F6: jmp     short loc_14051B634
 * 000000014051B5F8: movzx   ecx, word ptr [rbx+6E0h]
 * 000000014051B5FF: test    cl, 8
 * 000000014051B602: jnz     loc_14051B6EA
 * 000000014051B608: test    byte ptr [rbx+6D6h], 1
 * 000000014051B60F: jz      short loc_14051B61A
 * 000000014051B611: test    cl, 10h
 * 000000014051B614: jnz     loc_14051B6EA
 * 000000014051B61A: test    byte ptr [rsp+48h+var_28], 10h
 * 000000014051B61F: jz      short loc_14051B630
 * 000000014051B621: test    [rsp+48h+var_28], 1000h
 * 000000014051B62A: jz      loc_14051B6EA
 * 000000014051B630: mov     byte ptr [r9], 1
 * 000000014051B634: movzx   eax, word ptr [rbx+6ECh]
 * 000000014051B63B: test    al, 2
 * 000000014051B63D: jz      short loc_14051B648
 * 000000014051B63F: xor     ecx, ecx
 * 000000014051B641: call    KiUpdateStibpPairing
 * 000000014051B646: jmp     short loc_14051B68F
 * 000000014051B648: movzx   eax, word ptr [rbx+6E0h]
 * 000000014051B64F: test    al, 4
 * 000000014051B651: jz      short loc_14051B673
 * 000000014051B653: mov     eax, 1
 * 000000014051B658: lea     ecx, [rax+48h]
 * 000000014051B65B: wrmsr
 * 000000014051B65D: mov     edi, 0FFFBh
 * 000000014051B662: and     [rbx+6E0h], di
 * 000000014051B669: mov     [r10], al
 * 000000014051B66C: movzx   eax, word ptr [rbx+6E0h]
 * 000000014051B673: test    al, 20h
 * 000000014051B675: jz      short loc_14051B688
 * 000000014051B677: call    KiFlushCurrentRsb
 * 000000014051B67C: mov     eax, 0FFDFh
 * 000000014051B681: and     [rbx+6E0h], ax
 * 000000014051B688: mov     [rbx+6D8h], rsi
 * 000000014051B68F: movzx   eax, word ptr [rbx+6E0h]
 * 000000014051B696: movzx   edx, word ptr [rbx+6D0h]
 * 000000014051B69D: movzx   ecx, word ptr [rbx+6E6h]
 * 000000014051B6A4: mov     [rbx+6D4h], ax
 * 000000014051B6AB: mov     rax, 20000000000h
 * 000000014051B6B5: mov     [rbx+6D2h], dx
 * 000000014051B6BC: test    [rsp+48h+var_28], rax
 * 000000014051B6C1: jz      short loc_14051B6CE
 * 000000014051B6C3: test    byte ptr [rbx+6D6h], 1
 * 000000014051B6CA: cmovnz  cx, dx
 * 000000014051B6CE: cmp     [rbx+6E4h], cx
 * 000000014051B6D5: jz      short loc_14051B725
 * 000000014051B6D7: movzx   eax, cx
 * 000000014051B6DA: mov     [r15], rax
 * 000000014051B6DD: mov     byte ptr [r14], 1
 * 000000014051B6E1: mov     [rbx+6E4h], cx
 * 000000014051B6E8: jmp     short loc_14051B725
 * 000000014051B6EA: movzx   eax, word ptr [rbx+6E0h]
 * 000000014051B6F1: mov     edi, 0FFFBh
 * 000000014051B6F6: test    al, 4
 * 000000014051B6F8: jz      short loc_14051B715
 * 000000014051B6FA: mov     eax, 1
 * 000000014051B6FF: lea     ecx, [rax+48h]
 * 000000014051B702: wrmsr
 * 000000014051B704: and     [rbx+6E0h], di
 * 000000014051B70B: mov     [r10], al
 * 000000014051B70E: movzx   eax, word ptr [rbx+6E0h]
 * 000000014051B715: test    al, 20h
 * 000000014051B717: jz      short loc_14051B725
 * 000000014051B719: call    KiFlushCurrentRsb
 * 000000014051B71E: and     [rbx+6E0h], di
 * 000000014051B725: mov     rbx, [rsp+48h+arg_0]
 * 000000014051B72A: mov     rsi, [rsp+48h+arg_8]
 * 000000014051B72F: mov     rdi, [rsp+48h+arg_10]
 * 000000014051B734: mov     r14, [rsp+48h+arg_18]
 * 000000014051B739: add     rsp, 40h
 * 000000014051B73D: pop     r15
 * 000000014051B73F: retn
 */
