/*
 * XREFs of WPP_RECORDER_SF_dL @ 0x1C003C094
 * Callers:
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003B900 (IoControl_WdfEvtIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dL @ 0x1C003C094
 * Reason: Hex-Rays returned no pseudocode for 0x1C003C094
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003C094: mov     r11, rsp
 * 00000001C003C097: mov     [r11+8], rbx
 * 00000001C003C09B: mov     [r11+10h], rsi
 * 00000001C003C09F: push    rdi
 * 00000001C003C0A0: sub     rsp, 50h
 * 00000001C003C0A4: mov     rbx, rcx
 * 00000001C003C0A7: mov     esi, 0Eh
 * 00000001C003C0AC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003C0B3: lea     edi, [rsi-0Ah]
 * 00000001C003C0B6: mov     eax, [rcx+2Ch]
 * 00000001C003C0B9: test    al, 10h
 * 00000001C003C0BB: jz      short loc_1C003C0FF
 * 00000001C003C0BD: cmp     byte ptr [rcx+29h], 3
 * 00000001C003C0C1: jb      short loc_1C003C0FF
 * 00000001C003C0C3: and     qword ptr [r11-18h], 0
 * 00000001C003C0C8: lea     rdx, [r11+38h]
 * 00000001C003C0CC: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003C0D3: lea     r8, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003C0DA: mov     rcx, [rcx+18h]
 * 00000001C003C0DE: mov     [r11-20h], rdi
 * 00000001C003C0E2: mov     [r11-28h], rdx
 * 00000001C003C0E6: lea     rdx, [r11+30h]
 * 00000001C003C0EA: mov     [r11-30h], rdi
 * 00000001C003C0EE: mov     [r11-38h], rdx
 * 00000001C003C0F2: lea     edx, [rsi+1Dh]
 * 00000001C003C0F5: movzx   r9d, si
 * 00000001C003C0F9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003C0FF: and     [rsp+58h+var_10], 0
 * 00000001C003C105: lea     rax, [rsp+58h+arg_30]
 * 00000001C003C10D: mov     [rsp+58h+var_18], rdi
 * 00000001C003C112: lea     r9, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003C119: mov     [rsp+58h+var_20], rax
 * 00000001C003C11E: mov     edx, 3
 * 00000001C003C123: lea     rax, [rsp+58h+arg_28]
 * 00000001C003C12B: mov     [rsp+58h+var_28], rdi
 * 00000001C003C130: mov     [rsp+58h+var_30], rax
 * 00000001C003C135: mov     rcx, rbx
 * 00000001C003C138: mov     [rsp+58h+var_38], si
 * 00000001C003C13D: lea     r8d, [rdx+2]
 * 00000001C003C141: call    cs:__imp_WppAutoLogTrace
 * 00000001C003C148: nop     dword ptr [rax+rax+00h]
 * 00000001C003C14D: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003C152: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003C157: add     rsp, 50h
 * 00000001C003C15B: pop     rdi
 * 00000001C003C15C: retn
 */
