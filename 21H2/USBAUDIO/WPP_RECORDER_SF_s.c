/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0009644
 * Callers:
 *     ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1C0009E80 (-GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012E90 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C0009644
 * Reason: Hex-Rays returned no pseudocode for 0x1C0009644
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0009644: mov     rax, rsp
 * 00000001C0009647: mov     [rax+8], rbx
 * 00000001C000964B: mov     [rax+10h], rbp
 * 00000001C000964F: mov     [rax+18h], rsi
 * 00000001C0009653: mov     [rax+20h], rdi
 * 00000001C0009657: push    r12
 * 00000001C0009659: sub     rsp, 40h
 * 00000001C000965D: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C0009664: lea     rsi, aNull; "NULL"
 * 00000001C000966B: mov     rdi, [rsp+48h+arg_28]
 * 00000001C0009670: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0009674: mov     rbp, rcx
 * 00000001C0009677: test    dword ptr [rax+2Ch], 100h
 * 00000001C000967E: lea     r12d, [rbx+21h]
 * 00000001C0009682: jz      short loc_1C00096E1
 * 00000001C0009684: test    rdi, rdi
 * 00000001C0009687: jz      short loc_1C000969A
 * 00000001C0009689: mov     rdx, rbx
 * 00000001C000968C: inc     rdx
 * 00000001C000968F: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0009693: jnz     short loc_1C000968C
 * 00000001C0009695: inc     rdx
 * 00000001C0009698: jmp     short loc_1C000969F
 * 00000001C000969A: mov     edx, 5
 * 00000001C000969F: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00096A6: lea     r8, WPP_2758cf178eb33941c178507ca09d62b1_Traceguids
 * 00000001C00096AD: test    rdi, rdi
 * 00000001C00096B0: movzx   r9d, r12w
 * 00000001C00096B4: mov     rcx, rsi
 * 00000001C00096B7: cmovnz  rcx, rdi
 * 00000001C00096BB: and     [rsp+48h+var_18], 0
 * 00000001C00096C1: mov     [rsp+48h+var_20], rdx
 * 00000001C00096C6: mov     edx, 2Bh ; '+'
 * 00000001C00096CB: mov     [rsp+48h+var_28], rcx
 * 00000001C00096D0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00096D7: mov     rcx, [rcx+18h]
 * 00000001C00096DB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00096E1: test    rdi, rdi
 * 00000001C00096E4: jz      short loc_1C00096F4
 * 00000001C00096E6: inc     rbx
 * 00000001C00096E9: cmp     byte ptr [rdi+rbx], 0
 * 00000001C00096ED: jnz     short loc_1C00096E6
 * 00000001C00096EF: inc     rbx
 * 00000001C00096F2: jmp     short loc_1C00096F9
 * 00000001C00096F4: mov     ebx, 5
 * 00000001C00096F9: test    rdi, rdi
 * 00000001C00096FC: lea     r9, WPP_2758cf178eb33941c178507ca09d62b1_Traceguids
 * 00000001C0009703: mov     rcx, rbp
 * 00000001C0009706: cmovnz  rsi, rdi
 * 00000001C000970A: and     [rsp+48h+var_10], 0
 * 00000001C0009710: xor     edx, edx
 * 00000001C0009712: mov     [rsp+48h+var_18], rbx
 * 00000001C0009717: mov     [rsp+48h+var_20], rsi
 * 00000001C000971C: mov     word ptr [rsp+48h+var_28], r12w
 * 00000001C0009722: lea     r8d, [rdx+9]
 * 00000001C0009726: call    cs:__imp_WppAutoLogTrace
 * 00000001C000972D: nop     dword ptr [rax+rax+00h]
 * 00000001C0009732: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0009737: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000973C: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0009741: mov     rdi, [rsp+48h+arg_18]
 * 00000001C0009746: add     rsp, 40h
 * 00000001C000974A: pop     r12
 * 00000001C000974C: retn
 */
