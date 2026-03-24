/*
 * XREFs of GetStreamId @ 0x1C0011030
 * Callers:
 *     BuildReadWriteCommand @ 0x1C000FAC0 (BuildReadWriteCommand.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00050E0 (__security_check_cookie.c)
 */

/*
 * Hex-Rays decompilation failed for GetStreamId @ 0x1C0011030
 * Reason: Hex-Rays returned no pseudocode for 0x1C0011030
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0011030: mov     [rsp+arg_10], rbx
 * 00000001C0011035: push    rdi
 * 00000001C0011036: sub     rsp, 50h
 * 00000001C001103A: mov     rax, cs:__security_cookie
 * 00000001C0011041: xor     rax, rsp
 * 00000001C0011044: mov     [rsp+58h+var_10], rax
 * 00000001C0011049: mov     al, [rcx+0EC0h]
 * 00000001C001104F: xor     edi, edi
 * 00000001C0011051: and     al, 3
 * 00000001C0011053: mov     rbx, rcx
 * 00000001C0011056: cmp     al, 3
 * 00000001C0011058: jnz     short loc_1C00110CF
 * 00000001C001105A: movzx   eax, byte ptr [rcx+0EC1h]
 * 00000001C0011061: cmp     eax, r8d
 * 00000001C0011064: jnz     short loc_1C00110CF
 * 00000001C0011066: cmp     [rcx+0EC4h], di
 * 00000001C001106D: jbe     short loc_1C00110CF
 * 00000001C001106F: xor     eax, eax
 * 00000001C0011071: lea     r9, [rsp+58h+var_38]
 * 00000001C0011076: xorps   xmm0, xmm0
 * 00000001C0011079: mov     [rsp+58h+var_18], rax
 * 00000001C001107E: mov     r8, rdx
 * 00000001C0011081: lea     eax, [rdi+1]
 * 00000001C0011084: mov     rdx, rcx
 * 00000001C0011087: lea     ecx, [rdi+1Ch]
 * 00000001C001108A: movups  [rsp+58h+var_38], xmm0
 * 00000001C001108F: mov     word ptr [rsp+58h+var_38], ax
 * 00000001C0011094: movups  [rsp+58h+var_28], xmm0
 * 00000001C0011099: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00110A0: nop     dword ptr [rax+rax+00h]
 * 00000001C00110A5: test    eax, eax
 * 00000001C00110A7: jnz     short loc_1C00110CF
 * 00000001C00110A9: test    dword ptr [rsp+58h+var_38+8], 100h
 * 00000001C00110B1: jz      short loc_1C00110CF
 * 00000001C00110B3: mov     ecx, dword ptr [rsp+58h+var_38+0Ch]
 * 00000001C00110B7: lea     eax, [rcx-1]
 * 00000001C00110BA: cmp     eax, 0FFFEh
 * 00000001C00110BF: ja      short loc_1C00110CF
 * 00000001C00110C1: movzx   eax, word ptr [rbx+0EC4h]
 * 00000001C00110C8: cmp     ecx, eax
 * 00000001C00110CA: movzx   eax, cx
 * 00000001C00110CD: jbe     short loc_1C00110D2
 * 00000001C00110CF: movzx   eax, di
 * 00000001C00110D2: mov     rcx, [rsp+58h+var_10]
 * 00000001C00110D7: xor     rcx, rsp; StackCookie
 * 00000001C00110DA: call    __security_check_cookie
 * 00000001C00110DF: mov     rbx, [rsp+58h+arg_10]
 * 00000001C00110E4: add     rsp, 50h
 * 00000001C00110E8: pop     rdi
 * 00000001C00110E9: retn
 */
