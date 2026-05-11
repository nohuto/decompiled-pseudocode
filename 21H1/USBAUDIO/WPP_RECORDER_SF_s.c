/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0009074
 * Callers:
 *     ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1C000A170 (-GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C0009074
 * Reason: Hex-Rays returned no pseudocode for 0x1C0009074
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0009074: mov     rax, rsp
 * 00000001C0009077: mov     [rax+8], rbx
 * 00000001C000907B: mov     [rax+10h], rbp
 * 00000001C000907F: mov     [rax+18h], rsi
 * 00000001C0009083: mov     [rax+20h], rdi
 * 00000001C0009087: push    r12
 * 00000001C0009089: sub     rsp, 40h
 * 00000001C000908D: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C0009094: lea     rsi, aNull; "NULL"
 * 00000001C000909B: mov     rdi, [rsp+48h+arg_28]
 * 00000001C00090A0: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00090A4: mov     rbp, rcx
 * 00000001C00090A7: test    dword ptr [rax+2Ch], 100h
 * 00000001C00090AE: lea     r12d, [rbx+21h]
 * 00000001C00090B2: jz      short loc_1C0009111
 * 00000001C00090B4: test    rdi, rdi
 * 00000001C00090B7: jz      short loc_1C00090CA
 * 00000001C00090B9: mov     rdx, rbx
 * 00000001C00090BC: inc     rdx
 * 00000001C00090BF: cmp     byte ptr [rdi+rdx], 0
 * 00000001C00090C3: jnz     short loc_1C00090BC
 * 00000001C00090C5: inc     rdx
 * 00000001C00090C8: jmp     short loc_1C00090CF
 * 00000001C00090CA: mov     edx, 5
 * 00000001C00090CF: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00090D6: lea     r8, WPP_7785e2eca0573873336158315744df4b_Traceguids
 * 00000001C00090DD: test    rdi, rdi
 * 00000001C00090E0: movzx   r9d, r12w
 * 00000001C00090E4: mov     rcx, rsi
 * 00000001C00090E7: cmovnz  rcx, rdi
 * 00000001C00090EB: and     [rsp+48h+var_18], 0
 * 00000001C00090F1: mov     [rsp+48h+var_20], rdx
 * 00000001C00090F6: mov     edx, 2Bh ; '+'
 * 00000001C00090FB: mov     [rsp+48h+var_28], rcx
 * 00000001C0009100: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0009107: mov     rcx, [rcx+18h]
 * 00000001C000910B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0009111: test    rdi, rdi
 * 00000001C0009114: jz      short loc_1C0009124
 * 00000001C0009116: inc     rbx
 * 00000001C0009119: cmp     byte ptr [rdi+rbx], 0
 * 00000001C000911D: jnz     short loc_1C0009116
 * 00000001C000911F: inc     rbx
 * 00000001C0009122: jmp     short loc_1C0009129
 * 00000001C0009124: mov     ebx, 5
 * 00000001C0009129: test    rdi, rdi
 * 00000001C000912C: lea     r9, WPP_7785e2eca0573873336158315744df4b_Traceguids
 * 00000001C0009133: mov     rcx, rbp
 * 00000001C0009136: cmovnz  rsi, rdi
 * 00000001C000913A: and     [rsp+48h+var_10], 0
 * 00000001C0009140: xor     edx, edx
 * 00000001C0009142: mov     [rsp+48h+var_18], rbx
 * 00000001C0009147: mov     [rsp+48h+var_20], rsi
 * 00000001C000914C: mov     word ptr [rsp+48h+var_28], r12w
 * 00000001C0009152: lea     r8d, [rdx+9]
 * 00000001C0009156: call    cs:__imp_WppAutoLogTrace
 * 00000001C000915D: nop     dword ptr [rax+rax+00h]
 * 00000001C0009162: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0009167: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000916C: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0009171: mov     rdi, [rsp+48h+arg_18]
 * 00000001C0009176: add     rsp, 40h
 * 00000001C000917A: pop     r12
 * 00000001C000917C: retn
 */
