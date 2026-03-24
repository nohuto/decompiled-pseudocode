/*
 * XREFs of WPP_RECORDER_SF_P @ 0x1C0036414
 * Callers:
 *     Controller_AllocateIrqlTrackingArray @ 0x1C001536C (Controller_AllocateIrqlTrackingArray.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C0032584 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_RetrieveUrsData @ 0x1C0076180 (Controller_RetrieveUrsData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_P @ 0x1C0036414
 * Reason: Hex-Rays returned no pseudocode for 0x1C0036414
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0036414: mov     r11, rsp
 * 00000001C0036417: mov     [r11+8], rbx
 * 00000001C003641B: push    rdi
 * 00000001C003641C: sub     rsp, 40h
 * 00000001C0036420: mov     rdi, rcx
 * 00000001C0036423: movzx   ebx, r9w
 * 00000001C0036427: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003642E: mov     eax, [rcx+2Ch]
 * 00000001C0036431: test    al, 8
 * 00000001C0036433: jz      short loc_1C0036470
 * 00000001C0036435: cmp     byte ptr [rcx+29h], 2
 * 00000001C0036439: jb      short loc_1C0036470
 * 00000001C003643B: and     qword ptr [r11-18h], 0
 * 00000001C0036440: lea     rdx, [r11+30h]
 * 00000001C0036444: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C003644B: lea     r8, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C0036452: mov     rcx, [rcx+18h]
 * 00000001C0036456: mov     r9d, ebx
 * 00000001C0036459: mov     qword ptr [r11-20h], 8
 * 00000001C0036461: mov     [r11-28h], rdx
 * 00000001C0036465: mov     edx, 2Bh ; '+'
 * 00000001C003646A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0036470: and     [rsp+48h+var_10], 0
 * 00000001C0036476: lea     rax, [rsp+48h+arg_28]
 * 00000001C003647B: mov     edx, 2
 * 00000001C0036480: mov     [rsp+48h+var_18], 8
 * 00000001C0036489: mov     [rsp+48h+var_20], rax
 * 00000001C003648E: lea     r9, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C0036495: mov     rcx, rdi
 * 00000001C0036498: mov     [rsp+48h+var_28], bx
 * 00000001C003649D: lea     r8d, [rdx+2]
 * 00000001C00364A1: call    cs:__imp_WppAutoLogTrace
 * 00000001C00364A8: nop     dword ptr [rax+rax+00h]
 * 00000001C00364AD: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00364B2: add     rsp, 40h
 * 00000001C00364B6: pop     rdi
 * 00000001C00364B7: retn
 */
