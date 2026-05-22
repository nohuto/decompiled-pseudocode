/*
 * XREFs of ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1800C03A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Cancel@AlpcMessage@@QEAAXPEAX@Z @ 0x1800BFC4C (-Cancel@AlpcMessage@@QEAAXPEAX@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x1800C1940 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 */

/*
 * Hex-Rays decompilation failed for ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1800C03A0
 * Reason: Hex-Rays returned no pseudocode for 0x1800C03A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800C03A0: mov     [rsp+arg_10], rbx
 * 00000001800C03A5: push    rbp
 * 00000001800C03A6: push    rsi
 * 00000001800C03A7: push    rdi
 * 00000001800C03A8: sub     rsp, 40h
 * 00000001800C03AC: movsx   eax, word ptr [rcx+5Ch]
 * 00000001800C03B0: mov     rbx, rcx
 * 00000001800C03B3: and     eax, 0FFFF00FFh
 * 00000001800C03B8: cmp     eax, 0Ah
 * 00000001800C03BB: jnz     short loc_1800C03C2
 * 00000001800C03BD: call    ?RejectClientConnection@AlpcPort@@UEAAJXZ; AlpcPort::RejectClientConnection(void)
 * 00000001800C03C2: mov     rcx, [rbx+38h]
 * 00000001800C03C6: xor     edx, edx
 * 00000001800C03C8: call    cs:__imp_NtAlpcDisconnectPort
 * 00000001800C03CF: nop     dword ptr [rax+rax+00h]
 * 00000001800C03D4: test    eax, eax
 * 00000001800C03D6: jnz     loc_1800C0477
 * 00000001800C03DC: lea     rdi, [rbx+58h]
 * 00000001800C03E0: lea     rbp, [rbx+1A8h]
 * 00000001800C03E7: and     [rsp+58h+arg_0], 0
 * 00000001800C03ED: xor     eax, eax
 * 00000001800C03EF: xorps   xmm0, xmm0
 * 00000001800C03F2: mov     [rsp+58h+arg_8], 14Ch
 * 00000001800C03FB: movups  xmmword ptr [rdi], xmm0
 * 00000001800C03FE: xor     r9d, r9d
 * 00000001800C0401: xor     r8d, r8d
 * 00000001800C0404: movups  xmmword ptr [rdi+10h], xmm0
 * 00000001800C0408: mov     [rdi+20h], rax
 * 00000001800C040C: xor     edx, edx
 * 00000001800C040E: mov     [rdi+150h], rax
 * 00000001800C0415: mov     eax, 28h ; '('
 * 00000001800C041A: mov     [rdi+2], ax
 * 00000001800C041E: lea     rax, [rsp+58h+arg_0]
 * 00000001800C0423: mov     [rsp+58h+var_20], rax
 * 00000001800C0428: lea     rax, [rsp+58h+arg_8]
 * 00000001800C042D: mov     dword ptr [rdi+150h], 60000000h
 * 00000001800C0437: mov     rcx, [rbx+38h]
 * 00000001800C043B: mov     [rsp+58h+var_28], rbp
 * 00000001800C0440: mov     [rsp+58h+var_30], rax
 * 00000001800C0445: mov     [rsp+58h+var_38], rdi
 * 00000001800C044A: call    cs:__imp_NtAlpcSendWaitReceivePort
 * 00000001800C0451: nop     dword ptr [rax+rax+00h]
 * 00000001800C0456: mov     esi, eax
 * 00000001800C0458: mov     eax, 2000h
 * 00000001800C045D: test    [rbx+5Ch], ax
 * 00000001800C0461: jz      short loc_1800C046F
 * 00000001800C0463: mov     rdx, [rbx+38h]; void *
 * 00000001800C0467: mov     rcx, rdi; this
 * 00000001800C046A: call    ?Cancel@AlpcMessage@@QEAAXPEAX@Z; AlpcMessage::Cancel(void *)
 * 00000001800C046F: test    esi, esi
 * 00000001800C0471: jz      loc_1800C03E7
 * 00000001800C0477: mov     rcx, rbx; this
 * 00000001800C047A: mov     rbx, [rsp+58h+arg_10]
 * 00000001800C047F: add     rsp, 40h
 * 00000001800C0483: pop     rdi
 * 00000001800C0484: pop     rsi
 * 00000001800C0485: pop     rbp
 * 00000001800C0486: jmp     ?DisconnectAllSections@SipcPort@@IEAAXXZ; SipcPort::DisconnectAllSections(void)
 */
