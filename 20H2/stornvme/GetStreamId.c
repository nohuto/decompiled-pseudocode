/*
 * XREFs of GetStreamId @ 0x1C0010FB8
 * Callers:
 *     BuildReadWriteCommand @ 0x1C000FA48 (BuildReadWriteCommand.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00050E0 (__security_check_cookie.c)
 */

/*
 * Hex-Rays decompilation failed for GetStreamId @ 0x1C0010FB8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0010FB8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0010FB8: mov     [rsp+arg_10], rbx
 * 00000001C0010FBD: push    rdi
 * 00000001C0010FBE: sub     rsp, 50h
 * 00000001C0010FC2: mov     rax, cs:__security_cookie
 * 00000001C0010FC9: xor     rax, rsp
 * 00000001C0010FCC: mov     [rsp+58h+var_10], rax
 * 00000001C0010FD1: mov     al, [rcx+0EC0h]
 * 00000001C0010FD7: xor     edi, edi
 * 00000001C0010FD9: and     al, 3
 * 00000001C0010FDB: mov     rbx, rcx
 * 00000001C0010FDE: cmp     al, 3
 * 00000001C0010FE0: jnz     short loc_1C0011057
 * 00000001C0010FE2: movzx   eax, byte ptr [rcx+0EC1h]
 * 00000001C0010FE9: cmp     eax, r8d
 * 00000001C0010FEC: jnz     short loc_1C0011057
 * 00000001C0010FEE: cmp     [rcx+0EC4h], di
 * 00000001C0010FF5: jbe     short loc_1C0011057
 * 00000001C0010FF7: xor     eax, eax
 * 00000001C0010FF9: lea     r9, [rsp+58h+var_38]
 * 00000001C0010FFE: xorps   xmm0, xmm0
 * 00000001C0011001: mov     [rsp+58h+var_18], rax
 * 00000001C0011006: mov     r8, rdx
 * 00000001C0011009: lea     eax, [rdi+1]
 * 00000001C001100C: mov     rdx, rcx
 * 00000001C001100F: lea     ecx, [rdi+1Ch]
 * 00000001C0011012: movups  [rsp+58h+var_38], xmm0
 * 00000001C0011017: mov     word ptr [rsp+58h+var_38], ax
 * 00000001C001101C: movups  [rsp+58h+var_28], xmm0
 * 00000001C0011021: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0011028: nop     dword ptr [rax+rax+00h]
 * 00000001C001102D: test    eax, eax
 * 00000001C001102F: jnz     short loc_1C0011057
 * 00000001C0011031: test    dword ptr [rsp+58h+var_38+8], 100h
 * 00000001C0011039: jz      short loc_1C0011057
 * 00000001C001103B: mov     ecx, dword ptr [rsp+58h+var_38+0Ch]
 * 00000001C001103F: lea     eax, [rcx-1]
 * 00000001C0011042: cmp     eax, 0FFFEh
 * 00000001C0011047: ja      short loc_1C0011057
 * 00000001C0011049: movzx   eax, word ptr [rbx+0EC4h]
 * 00000001C0011050: cmp     ecx, eax
 * 00000001C0011052: movzx   eax, cx
 * 00000001C0011055: jbe     short loc_1C001105A
 * 00000001C0011057: movzx   eax, di
 * 00000001C001105A: mov     rcx, [rsp+58h+var_10]
 * 00000001C001105F: xor     rcx, rsp; StackCookie
 * 00000001C0011062: call    __security_check_cookie
 * 00000001C0011067: mov     rbx, [rsp+58h+arg_10]
 * 00000001C001106C: add     rsp, 50h
 * 00000001C0011070: pop     rdi
 * 00000001C0011071: retn
 */
