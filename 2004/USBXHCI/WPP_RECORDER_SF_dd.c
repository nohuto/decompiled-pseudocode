/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C003B82C
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C006BBE0 (Interrupter_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C003B82C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003B82C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003B82C: mov     r11, rsp
 * 00000001C003B82F: mov     [r11+8], rbx
 * 00000001C003B833: mov     [r11+10h], rsi
 * 00000001C003B837: push    rdi
 * 00000001C003B838: sub     rsp, 50h
 * 00000001C003B83C: mov     rdi, rcx
 * 00000001C003B83F: movzx   ebx, r9w
 * 00000001C003B843: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003B84A: mov     esi, 4
 * 00000001C003B84F: test    dword ptr [rcx+2Ch], 100h
 * 00000001C003B856: jz      short loc_1C003B899
 * 00000001C003B858: cmp     byte ptr [rcx+29h], 2
 * 00000001C003B85C: jb      short loc_1C003B899
 * 00000001C003B85E: and     qword ptr [r11-18h], 0
 * 00000001C003B863: lea     rdx, [r11+38h]
 * 00000001C003B867: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003B86E: lea     r8, WPP_260d7188460d377ee27ff5eb6158db37_Traceguids
 * 00000001C003B875: mov     rcx, [rcx+18h]
 * 00000001C003B879: mov     r9d, ebx
 * 00000001C003B87C: mov     [r11-20h], rsi
 * 00000001C003B880: mov     [r11-28h], rdx
 * 00000001C003B884: lea     rdx, [r11+30h]
 * 00000001C003B888: mov     [r11-30h], rsi
 * 00000001C003B88C: mov     [r11-38h], rdx
 * 00000001C003B890: lea     edx, [rsi+27h]
 * 00000001C003B893: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003B899: and     [rsp+58h+var_10], 0
 * 00000001C003B89F: lea     rax, [rsp+58h+arg_30]
 * 00000001C003B8A7: mov     [rsp+58h+var_18], rsi
 * 00000001C003B8AC: lea     r9, WPP_260d7188460d377ee27ff5eb6158db37_Traceguids
 * 00000001C003B8B3: mov     [rsp+58h+var_20], rax
 * 00000001C003B8B8: mov     edx, 2
 * 00000001C003B8BD: lea     rax, [rsp+58h+arg_28]
 * 00000001C003B8C5: mov     [rsp+58h+var_28], rsi
 * 00000001C003B8CA: mov     [rsp+58h+var_30], rax
 * 00000001C003B8CF: mov     rcx, rdi
 * 00000001C003B8D2: mov     [rsp+58h+var_38], bx
 * 00000001C003B8D7: lea     r8d, [rdx+7]
 * 00000001C003B8DB: call    cs:__imp_WppAutoLogTrace
 * 00000001C003B8E2: nop     dword ptr [rax+rax+00h]
 * 00000001C003B8E7: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003B8EC: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003B8F1: add     rsp, 50h
 * 00000001C003B8F5: pop     rdi
 * 00000001C003B8F6: retn
 */
