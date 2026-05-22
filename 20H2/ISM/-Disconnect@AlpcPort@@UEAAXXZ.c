/*
 * XREFs of ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1800BFF40
 * Callers:
 *     <none>
 * Callees:
 *     ?Cancel@AlpcMessage@@QEAAXPEAX@Z @ 0x1800BF7EC (-Cancel@AlpcMessage@@QEAAXPEAX@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x1800C14E0 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 */

/*
 * Hex-Rays decompilation failed for ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1800BFF40
 * Reason: Hex-Rays returned no pseudocode for 0x1800BFF40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800BFF40: mov     [rsp+arg_10], rbx
 * 00000001800BFF45: push    rbp
 * 00000001800BFF46: push    rsi
 * 00000001800BFF47: push    rdi
 * 00000001800BFF48: sub     rsp, 40h
 * 00000001800BFF4C: movsx   eax, word ptr [rcx+5Ch]
 * 00000001800BFF50: mov     rbx, rcx
 * 00000001800BFF53: and     eax, 0FFFF00FFh
 * 00000001800BFF58: cmp     eax, 0Ah
 * 00000001800BFF5B: jnz     short loc_1800BFF62
 * 00000001800BFF5D: call    ?RejectClientConnection@AlpcPort@@UEAAJXZ; AlpcPort::RejectClientConnection(void)
 * 00000001800BFF62: mov     rcx, [rbx+38h]
 * 00000001800BFF66: xor     edx, edx
 * 00000001800BFF68: call    cs:__imp_NtAlpcDisconnectPort
 * 00000001800BFF6F: nop     dword ptr [rax+rax+00h]
 * 00000001800BFF74: test    eax, eax
 * 00000001800BFF76: jnz     loc_1800C0017
 * 00000001800BFF7C: lea     rdi, [rbx+58h]
 * 00000001800BFF80: lea     rbp, [rbx+1A8h]
 * 00000001800BFF87: and     [rsp+58h+arg_0], 0
 * 00000001800BFF8D: xor     eax, eax
 * 00000001800BFF8F: xorps   xmm0, xmm0
 * 00000001800BFF92: mov     [rsp+58h+arg_8], 14Ch
 * 00000001800BFF9B: movups  xmmword ptr [rdi], xmm0
 * 00000001800BFF9E: xor     r9d, r9d
 * 00000001800BFFA1: xor     r8d, r8d
 * 00000001800BFFA4: movups  xmmword ptr [rdi+10h], xmm0
 * 00000001800BFFA8: mov     [rdi+20h], rax
 * 00000001800BFFAC: xor     edx, edx
 * 00000001800BFFAE: mov     [rdi+150h], rax
 * 00000001800BFFB5: mov     eax, 28h ; '('
 * 00000001800BFFBA: mov     [rdi+2], ax
 * 00000001800BFFBE: lea     rax, [rsp+58h+arg_0]
 * 00000001800BFFC3: mov     [rsp+58h+var_20], rax
 * 00000001800BFFC8: lea     rax, [rsp+58h+arg_8]
 * 00000001800BFFCD: mov     dword ptr [rdi+150h], 60000000h
 * 00000001800BFFD7: mov     rcx, [rbx+38h]
 * 00000001800BFFDB: mov     [rsp+58h+var_28], rbp
 * 00000001800BFFE0: mov     [rsp+58h+var_30], rax
 * 00000001800BFFE5: mov     [rsp+58h+var_38], rdi
 * 00000001800BFFEA: call    cs:__imp_NtAlpcSendWaitReceivePort
 * 00000001800BFFF1: nop     dword ptr [rax+rax+00h]
 * 00000001800BFFF6: mov     esi, eax
 * 00000001800BFFF8: mov     eax, 2000h
 * 00000001800BFFFD: test    [rbx+5Ch], ax
 * 00000001800C0001: jz      short loc_1800C000F
 * 00000001800C0003: mov     rdx, [rbx+38h]; void *
 * 00000001800C0007: mov     rcx, rdi; this
 * 00000001800C000A: call    ?Cancel@AlpcMessage@@QEAAXPEAX@Z; AlpcMessage::Cancel(void *)
 * 00000001800C000F: test    esi, esi
 * 00000001800C0011: jz      loc_1800BFF87
 * 00000001800C0017: mov     rcx, rbx; this
 * 00000001800C001A: mov     rbx, [rsp+58h+arg_10]
 * 00000001800C001F: add     rsp, 40h
 * 00000001800C0023: pop     rdi
 * 00000001800C0024: pop     rsi
 * 00000001800C0025: pop     rbp
 * 00000001800C0026: jmp     ?DisconnectAllSections@SipcPort@@IEAAXXZ; SipcPort::DisconnectAllSections(void)
 */
