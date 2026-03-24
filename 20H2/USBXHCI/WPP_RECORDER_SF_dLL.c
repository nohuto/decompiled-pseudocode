/*
 * XREFs of WPP_RECORDER_SF_dLL @ 0x1C0048290
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x1C0046810 (UsbDevice_DeviceResetCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dLL @ 0x1C0048290
 * Reason: Hex-Rays returned no pseudocode for 0x1C0048290
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0048290: mov     r11, rsp
 * 00000001C0048293: mov     [r11+8], rbx
 * 00000001C0048297: mov     [r11+10h], rsi
 * 00000001C004829B: push    rdi
 * 00000001C004829C: sub     rsp, 60h
 * 00000001C00482A0: mov     rbx, rcx
 * 00000001C00482A3: mov     esi, 40h ; '@'
 * 00000001C00482A8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00482AF: lea     edi, [rsi-3Ch]
 * 00000001C00482B2: test    dword ptr [rcx+2Ch], 800h
 * 00000001C00482B9: jz      short loc_1C0048309
 * 00000001C00482BB: cmp     byte ptr [rcx+29h], 2
 * 00000001C00482BF: jb      short loc_1C0048309
 * 00000001C00482C1: and     qword ptr [r11-18h], 0
 * 00000001C00482C6: lea     rdx, [r11+40h]
 * 00000001C00482CA: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C00482D1: lea     r8, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C00482D8: mov     rcx, [rcx+18h]
 * 00000001C00482DC: mov     [r11-20h], rdi
 * 00000001C00482E0: mov     [r11-28h], rdx
 * 00000001C00482E4: lea     rdx, [r11+38h]
 * 00000001C00482E8: mov     [r11-30h], rdi
 * 00000001C00482EC: mov     [r11-38h], rdx
 * 00000001C00482F0: lea     rdx, [r11+30h]
 * 00000001C00482F4: mov     [r11-40h], rdi
 * 00000001C00482F8: mov     [r11-48h], rdx
 * 00000001C00482FC: lea     edx, [rsi-15h]
 * 00000001C00482FF: movzx   r9d, si
 * 00000001C0048303: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0048309: and     [rsp+68h+var_10], 0
 * 00000001C004830F: lea     rax, [rsp+68h+arg_38]
 * 00000001C0048317: mov     [rsp+68h+var_18], rdi
 * 00000001C004831C: lea     r9, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0048323: mov     [rsp+68h+var_20], rax
 * 00000001C0048328: mov     edx, 2
 * 00000001C004832D: mov     [rsp+68h+var_28], rdi
 * 00000001C0048332: lea     rax, [rsp+68h+arg_30]
 * 00000001C004833A: mov     [rsp+68h+var_30], rax
 * 00000001C004833F: mov     rcx, rbx
 * 00000001C0048342: lea     rax, [rsp+68h+arg_28]
 * 00000001C004834A: mov     [rsp+68h+var_38], rdi
 * 00000001C004834F: mov     [rsp+68h+var_40], rax
 * 00000001C0048354: lea     r8d, [rdx+0Ah]
 * 00000001C0048358: mov     [rsp+68h+var_48], si
 * 00000001C004835D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0048364: nop     dword ptr [rax+rax+00h]
 * 00000001C0048369: mov     rbx, [rsp+68h+arg_0]
 * 00000001C004836E: mov     rsi, [rsp+68h+arg_8]
 * 00000001C0048373: add     rsp, 60h
 * 00000001C0048377: pop     rdi
 * 00000001C0048378: retn
 */
