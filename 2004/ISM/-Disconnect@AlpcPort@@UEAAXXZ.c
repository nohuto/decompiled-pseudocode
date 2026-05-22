/*
 * XREFs of ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1800BFF70
 * Callers:
 *     <none>
 * Callees:
 *     ?Cancel@AlpcMessage@@QEAAXPEAX@Z @ 0x1800BF81C (-Cancel@AlpcMessage@@QEAAXPEAX@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x1800C1510 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 */

/*
 * Hex-Rays decompilation failed for ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1800BFF70
 * Reason: Hex-Rays returned no pseudocode for 0x1800BFF70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800BFF70: mov     [rsp+arg_10], rbx
 * 00000001800BFF75: push    rbp
 * 00000001800BFF76: push    rsi
 * 00000001800BFF77: push    rdi
 * 00000001800BFF78: sub     rsp, 40h
 * 00000001800BFF7C: movsx   eax, word ptr [rcx+5Ch]
 * 00000001800BFF80: mov     rbx, rcx
 * 00000001800BFF83: and     eax, 0FFFF00FFh
 * 00000001800BFF88: cmp     eax, 0Ah
 * 00000001800BFF8B: jnz     short loc_1800BFF92
 * 00000001800BFF8D: call    ?RejectClientConnection@AlpcPort@@UEAAJXZ; AlpcPort::RejectClientConnection(void)
 * 00000001800BFF92: mov     rcx, [rbx+38h]
 * 00000001800BFF96: xor     edx, edx
 * 00000001800BFF98: call    cs:__imp_NtAlpcDisconnectPort
 * 00000001800BFF9F: nop     dword ptr [rax+rax+00h]
 * 00000001800BFFA4: test    eax, eax
 * 00000001800BFFA6: jnz     loc_1800C0047
 * 00000001800BFFAC: lea     rdi, [rbx+58h]
 * 00000001800BFFB0: lea     rbp, [rbx+1A8h]
 * 00000001800BFFB7: and     [rsp+58h+arg_0], 0
 * 00000001800BFFBD: xor     eax, eax
 * 00000001800BFFBF: xorps   xmm0, xmm0
 * 00000001800BFFC2: mov     [rsp+58h+arg_8], 14Ch
 * 00000001800BFFCB: movups  xmmword ptr [rdi], xmm0
 * 00000001800BFFCE: xor     r9d, r9d
 * 00000001800BFFD1: xor     r8d, r8d
 * 00000001800BFFD4: movups  xmmword ptr [rdi+10h], xmm0
 * 00000001800BFFD8: mov     [rdi+20h], rax
 * 00000001800BFFDC: xor     edx, edx
 * 00000001800BFFDE: mov     [rdi+150h], rax
 * 00000001800BFFE5: mov     eax, 28h ; '('
 * 00000001800BFFEA: mov     [rdi+2], ax
 * 00000001800BFFEE: lea     rax, [rsp+58h+arg_0]
 * 00000001800BFFF3: mov     [rsp+58h+var_20], rax
 * 00000001800BFFF8: lea     rax, [rsp+58h+arg_8]
 * 00000001800BFFFD: mov     dword ptr [rdi+150h], 60000000h
 * 00000001800C0007: mov     rcx, [rbx+38h]
 * 00000001800C000B: mov     [rsp+58h+var_28], rbp
 * 00000001800C0010: mov     [rsp+58h+var_30], rax
 * 00000001800C0015: mov     [rsp+58h+var_38], rdi
 * 00000001800C001A: call    cs:__imp_NtAlpcSendWaitReceivePort
 * 00000001800C0021: nop     dword ptr [rax+rax+00h]
 * 00000001800C0026: mov     esi, eax
 * 00000001800C0028: mov     eax, 2000h
 * 00000001800C002D: test    [rbx+5Ch], ax
 * 00000001800C0031: jz      short loc_1800C003F
 * 00000001800C0033: mov     rdx, [rbx+38h]; void *
 * 00000001800C0037: mov     rcx, rdi; this
 * 00000001800C003A: call    ?Cancel@AlpcMessage@@QEAAXPEAX@Z; AlpcMessage::Cancel(void *)
 * 00000001800C003F: test    esi, esi
 * 00000001800C0041: jz      loc_1800BFFB7
 * 00000001800C0047: mov     rcx, rbx; this
 * 00000001800C004A: mov     rbx, [rsp+58h+arg_10]
 * 00000001800C004F: add     rsp, 40h
 * 00000001800C0053: pop     rdi
 * 00000001800C0054: pop     rsi
 * 00000001800C0055: pop     rbp
 * 00000001800C0056: jmp     ?DisconnectAllSections@SipcPort@@IEAAXXZ; SipcPort::DisconnectAllSections(void)
 */
