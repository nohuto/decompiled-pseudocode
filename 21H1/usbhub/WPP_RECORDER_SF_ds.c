/*
 * XREFs of WPP_RECORDER_SF_ds @ 0x1C004B238
 * Callers:
 *     UsbhExceptionTrace @ 0x1C004A8FC (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ds @ 0x1C004B238
 * Reason: Hex-Rays returned no pseudocode for 0x1C004B238
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004B238: mov     rax, rsp
 * 00000001C004B23B: mov     [rax+8], rbx
 * 00000001C004B23F: mov     [rax+10h], rsi
 * 00000001C004B243: mov     [rax+18h], rdi
 * 00000001C004B247: mov     [rax+20h], r12
 * 00000001C004B24B: push    r13
 * 00000001C004B24D: sub     rsp, 50h
 * 00000001C004B251: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C004B258: lea     r12, aNull; "NULL"
 * 00000001C004B25F: mov     rdi, [rsp+58h+arg_30]
 * 00000001C004B267: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C004B26B: mov     rsi, rcx
 * 00000001C004B26E: mov     edx, [rax+2Ch]
 * 00000001C004B271: lea     r13d, [rbx+0Dh]
 * 00000001C004B275: test    dl, 1
 * 00000001C004B278: jz      short loc_1C004B2ED
 * 00000001C004B27A: test    rdi, rdi
 * 00000001C004B27D: jz      short loc_1C004B290
 * 00000001C004B27F: mov     rdx, rbx
 * 00000001C004B282: inc     rdx
 * 00000001C004B285: cmp     byte ptr [rdi+rdx], 0
 * 00000001C004B289: jnz     short loc_1C004B282
 * 00000001C004B28B: inc     rdx
 * 00000001C004B28E: jmp     short loc_1C004B295
 * 00000001C004B290: mov     edx, 5
 * 00000001C004B295: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004B29C: lea     r8, WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids
 * 00000001C004B2A3: test    rdi, rdi
 * 00000001C004B2A6: movzx   r9d, r13w
 * 00000001C004B2AA: mov     rcx, rdi
 * 00000001C004B2AD: cmovz   rcx, r12
 * 00000001C004B2B1: and     [rsp+58h+var_18], 0
 * 00000001C004B2B7: mov     [rsp+58h+var_20], rdx
 * 00000001C004B2BC: mov     edx, 2Bh ; '+'
 * 00000001C004B2C1: mov     [rsp+58h+var_28], rcx
 * 00000001C004B2C6: lea     rcx, [rsp+58h+arg_28]
 * 00000001C004B2CE: mov     [rsp+58h+var_30], 4
 * 00000001C004B2D7: mov     [rsp+58h+var_38], rcx
 * 00000001C004B2DC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004B2E3: mov     rcx, [rcx+18h]
 * 00000001C004B2E7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004B2ED: test    rdi, rdi
 * 00000001C004B2F0: jz      short loc_1C004B300
 * 00000001C004B2F2: inc     rbx
 * 00000001C004B2F5: cmp     byte ptr [rdi+rbx], 0
 * 00000001C004B2F9: jnz     short loc_1C004B2F2
 * 00000001C004B2FB: inc     rbx
 * 00000001C004B2FE: jmp     short loc_1C004B305
 * 00000001C004B300: mov     ebx, 5
 * 00000001C004B305: test    rdi, rdi
 * 00000001C004B308: lea     rax, [rsp+58h+arg_28]
 * 00000001C004B310: lea     r9, WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids
 * 00000001C004B317: mov     rcx, rsi
 * 00000001C004B31A: cmovz   rdi, r12
 * 00000001C004B31E: and     [rsp+58h+var_10], 0
 * 00000001C004B324: mov     [rsp+58h+var_18], rbx
 * 00000001C004B329: xor     edx, edx
 * 00000001C004B32B: mov     [rsp+58h+var_20], rdi
 * 00000001C004B330: mov     [rsp+58h+var_28], 4
 * 00000001C004B339: mov     [rsp+58h+var_30], rax
 * 00000001C004B33E: lea     r8d, [rdx+1]
 * 00000001C004B342: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C004B348: call    cs:__imp_WppAutoLogTrace
 * 00000001C004B34F: nop     dword ptr [rax+rax+00h]
 * 00000001C004B354: mov     rbx, [rsp+58h+arg_0]
 * 00000001C004B359: mov     rsi, [rsp+58h+arg_8]
 * 00000001C004B35E: mov     rdi, [rsp+58h+arg_10]
 * 00000001C004B363: mov     r12, [rsp+58h+arg_18]
 * 00000001C004B368: add     rsp, 50h
 * 00000001C004B36C: pop     r13
 * 00000001C004B36E: retn
 */
