/*
 * XREFs of WPP_RECORDER_SF_DDqDDD @ 0x1C0042FF0
 * Callers:
 *     Isoch_PrepareStage @ 0x1C00038A0 (Isoch_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqDDD @ 0x1C0042FF0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0042FF0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0042FF0: mov     r11, rsp
 * 00000001C0042FF3: mov     [r11+8], rbx
 * 00000001C0042FF7: mov     [r11+10h], rdi
 * 00000001C0042FFB: mov     [r11+18h], r14
 * 00000001C0042FFF: push    rbp
 * 00000001C0043000: lea     rbp, [r11-27h]
 * 00000001C0043004: sub     rsp, 90h
 * 00000001C004300B: mov     rbx, rcx
 * 00000001C004300E: mov     edi, 4
 * 00000001C0043013: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004301A: lea     r14d, [rdi+2Ah]
 * 00000001C004301E: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0043025: jz      short loc_1C004309D
 * 00000001C0043027: cmp     byte ptr [rcx+29h], 5
 * 00000001C004302B: jb      short loc_1C004309D
 * 00000001C004302D: and     qword ptr [r11-18h], 0
 * 00000001C0043032: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0043036: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C004303D: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0043044: mov     rcx, [rcx+18h]
 * 00000001C0043048: mov     [r11-20h], rdi
 * 00000001C004304C: mov     [r11-28h], rdx
 * 00000001C0043050: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C0043054: mov     [r11-30h], rdi
 * 00000001C0043058: mov     [r11-38h], rdx
 * 00000001C004305C: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C0043060: mov     [r11-40h], rdi
 * 00000001C0043064: mov     [r11-48h], rdx
 * 00000001C0043068: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C004306C: mov     qword ptr [r11-50h], 8
 * 00000001C0043074: mov     [r11-58h], rdx
 * 00000001C0043078: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C004307C: mov     [r11-60h], rdi
 * 00000001C0043080: mov     [r11-68h], rdx
 * 00000001C0043084: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0043088: mov     [r11-70h], rdi
 * 00000001C004308C: mov     [r11-78h], rdx
 * 00000001C0043090: lea     edx, [rdi+27h]
 * 00000001C0043093: movzx   r9d, r14w
 * 00000001C0043097: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004309D: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C00430A6: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C00430AA: mov     [rsp+90h+var_10], rdi
 * 00000001C00430B2: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C00430B9: mov     [rsp+90h+var_18], rax
 * 00000001C00430BE: mov     edx, 5
 * 00000001C00430C3: mov     [rsp+90h+var_20], rdi
 * 00000001C00430C8: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C00430CC: mov     [rsp+90h+var_28], rax
 * 00000001C00430D1: mov     rcx, rbx
 * 00000001C00430D4: mov     [rsp+90h+var_30], rdi
 * 00000001C00430D9: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C00430DD: mov     [rsp+90h+var_38], rax
 * 00000001C00430E2: lea     r8d, [rdx+9]
 * 00000001C00430E6: mov     [rsp+90h+var_40], 8
 * 00000001C00430EF: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C00430F3: mov     [rsp+90h+var_48], rax
 * 00000001C00430F8: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C00430FC: mov     [rsp+90h+var_50], rdi
 * 00000001C0043101: mov     [rsp+90h+var_58], rax
 * 00000001C0043106: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C004310A: mov     [rsp+90h+var_60], rdi
 * 00000001C004310F: mov     [rsp+90h+var_68], rax
 * 00000001C0043114: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C004311A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0043121: nop     dword ptr [rax+rax+00h]
 * 00000001C0043126: lea     r11, [rsp+90h+var_s0]
 * 00000001C004312E: mov     rbx, [r11+10h]
 * 00000001C0043132: mov     rdi, [r11+18h]
 * 00000001C0043136: mov     r14, [r11+20h]
 * 00000001C004313A: mov     rsp, r11
 * 00000001C004313D: pop     rbp
 * 00000001C004313E: retn
 */
