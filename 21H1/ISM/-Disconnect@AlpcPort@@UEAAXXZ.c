/*
 * XREFs of ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1800C0430
 * Callers:
 *     <none>
 * Callees:
 *     ?Cancel@AlpcMessage@@QEAAXPEAX@Z @ 0x1800BFCDC (-Cancel@AlpcMessage@@QEAAXPEAX@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x1800C19D0 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 */

/*
 * Hex-Rays decompilation failed for ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1800C0430
 * Reason: Hex-Rays returned no pseudocode for 0x1800C0430
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800C0430: mov     [rsp+arg_10], rbx
 * 00000001800C0435: push    rbp
 * 00000001800C0436: push    rsi
 * 00000001800C0437: push    rdi
 * 00000001800C0438: sub     rsp, 40h
 * 00000001800C043C: movsx   eax, word ptr [rcx+5Ch]
 * 00000001800C0440: mov     rbx, rcx
 * 00000001800C0443: and     eax, 0FFFF00FFh
 * 00000001800C0448: cmp     eax, 0Ah
 * 00000001800C044B: jnz     short loc_1800C0452
 * 00000001800C044D: call    ?RejectClientConnection@AlpcPort@@UEAAJXZ; AlpcPort::RejectClientConnection(void)
 * 00000001800C0452: mov     rcx, [rbx+38h]
 * 00000001800C0456: xor     edx, edx
 * 00000001800C0458: call    cs:__imp_NtAlpcDisconnectPort
 * 00000001800C045F: nop     dword ptr [rax+rax+00h]
 * 00000001800C0464: test    eax, eax
 * 00000001800C0466: jnz     loc_1800C0507
 * 00000001800C046C: lea     rdi, [rbx+58h]
 * 00000001800C0470: lea     rbp, [rbx+1A8h]
 * 00000001800C0477: and     [rsp+58h+arg_0], 0
 * 00000001800C047D: xor     eax, eax
 * 00000001800C047F: xorps   xmm0, xmm0
 * 00000001800C0482: mov     [rsp+58h+arg_8], 14Ch
 * 00000001800C048B: movups  xmmword ptr [rdi], xmm0
 * 00000001800C048E: xor     r9d, r9d
 * 00000001800C0491: xor     r8d, r8d
 * 00000001800C0494: movups  xmmword ptr [rdi+10h], xmm0
 * 00000001800C0498: mov     [rdi+20h], rax
 * 00000001800C049C: xor     edx, edx
 * 00000001800C049E: mov     [rdi+150h], rax
 * 00000001800C04A5: mov     eax, 28h ; '('
 * 00000001800C04AA: mov     [rdi+2], ax
 * 00000001800C04AE: lea     rax, [rsp+58h+arg_0]
 * 00000001800C04B3: mov     [rsp+58h+var_20], rax
 * 00000001800C04B8: lea     rax, [rsp+58h+arg_8]
 * 00000001800C04BD: mov     dword ptr [rdi+150h], 60000000h
 * 00000001800C04C7: mov     rcx, [rbx+38h]
 * 00000001800C04CB: mov     [rsp+58h+var_28], rbp
 * 00000001800C04D0: mov     [rsp+58h+var_30], rax
 * 00000001800C04D5: mov     [rsp+58h+var_38], rdi
 * 00000001800C04DA: call    cs:__imp_NtAlpcSendWaitReceivePort
 * 00000001800C04E1: nop     dword ptr [rax+rax+00h]
 * 00000001800C04E6: mov     esi, eax
 * 00000001800C04E8: mov     eax, 2000h
 * 00000001800C04ED: test    [rbx+5Ch], ax
 * 00000001800C04F1: jz      short loc_1800C04FF
 * 00000001800C04F3: mov     rdx, [rbx+38h]; void *
 * 00000001800C04F7: mov     rcx, rdi; this
 * 00000001800C04FA: call    ?Cancel@AlpcMessage@@QEAAXPEAX@Z; AlpcMessage::Cancel(void *)
 * 00000001800C04FF: test    esi, esi
 * 00000001800C0501: jz      loc_1800C0477
 * 00000001800C0507: mov     rcx, rbx; this
 * 00000001800C050A: mov     rbx, [rsp+58h+arg_10]
 * 00000001800C050F: add     rsp, 40h
 * 00000001800C0513: pop     rdi
 * 00000001800C0514: pop     rsi
 * 00000001800C0515: pop     rbp
 * 00000001800C0516: jmp     ?DisconnectAllSections@SipcPort@@IEAAXXZ; SipcPort::DisconnectAllSections(void)
 */
