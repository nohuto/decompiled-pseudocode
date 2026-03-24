/*
 * XREFs of GetStreamId @ 0x1C0011038
 * Callers:
 *     BuildReadWriteCommand @ 0x1C000FAC8 (BuildReadWriteCommand.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00050E0 (__security_check_cookie.c)
 */

/*
 * Hex-Rays decompilation failed for GetStreamId @ 0x1C0011038
 * Reason: Hex-Rays returned no pseudocode for 0x1C0011038
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0011038: mov     [rsp+arg_10], rbx
 * 00000001C001103D: push    rdi
 * 00000001C001103E: sub     rsp, 50h
 * 00000001C0011042: mov     rax, cs:__security_cookie
 * 00000001C0011049: xor     rax, rsp
 * 00000001C001104C: mov     [rsp+58h+var_10], rax
 * 00000001C0011051: mov     al, [rcx+0EC0h]
 * 00000001C0011057: xor     edi, edi
 * 00000001C0011059: and     al, 3
 * 00000001C001105B: mov     rbx, rcx
 * 00000001C001105E: cmp     al, 3
 * 00000001C0011060: jnz     short loc_1C00110D7
 * 00000001C0011062: movzx   eax, byte ptr [rcx+0EC1h]
 * 00000001C0011069: cmp     eax, r8d
 * 00000001C001106C: jnz     short loc_1C00110D7
 * 00000001C001106E: cmp     [rcx+0EC4h], di
 * 00000001C0011075: jbe     short loc_1C00110D7
 * 00000001C0011077: xor     eax, eax
 * 00000001C0011079: lea     r9, [rsp+58h+var_38]
 * 00000001C001107E: xorps   xmm0, xmm0
 * 00000001C0011081: mov     [rsp+58h+var_18], rax
 * 00000001C0011086: mov     r8, rdx
 * 00000001C0011089: lea     eax, [rdi+1]
 * 00000001C001108C: mov     rdx, rcx
 * 00000001C001108F: lea     ecx, [rdi+1Ch]
 * 00000001C0011092: movups  [rsp+58h+var_38], xmm0
 * 00000001C0011097: mov     word ptr [rsp+58h+var_38], ax
 * 00000001C001109C: movups  [rsp+58h+var_28], xmm0
 * 00000001C00110A1: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00110A8: nop     dword ptr [rax+rax+00h]
 * 00000001C00110AD: test    eax, eax
 * 00000001C00110AF: jnz     short loc_1C00110D7
 * 00000001C00110B1: test    dword ptr [rsp+58h+var_38+8], 100h
 * 00000001C00110B9: jz      short loc_1C00110D7
 * 00000001C00110BB: mov     ecx, dword ptr [rsp+58h+var_38+0Ch]
 * 00000001C00110BF: lea     eax, [rcx-1]
 * 00000001C00110C2: cmp     eax, 0FFFEh
 * 00000001C00110C7: ja      short loc_1C00110D7
 * 00000001C00110C9: movzx   eax, word ptr [rbx+0EC4h]
 * 00000001C00110D0: cmp     ecx, eax
 * 00000001C00110D2: movzx   eax, cx
 * 00000001C00110D5: jbe     short loc_1C00110DA
 * 00000001C00110D7: movzx   eax, di
 * 00000001C00110DA: mov     rcx, [rsp+58h+var_10]
 * 00000001C00110DF: xor     rcx, rsp; StackCookie
 * 00000001C00110E2: call    __security_check_cookie
 * 00000001C00110E7: mov     rbx, [rsp+58h+arg_10]
 * 00000001C00110EC: add     rsp, 50h
 * 00000001C00110F0: pop     rdi
 * 00000001C00110F1: retn
 */
