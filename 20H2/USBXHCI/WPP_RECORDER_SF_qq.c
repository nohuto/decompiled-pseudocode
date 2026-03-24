/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C0016398
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0006130 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0033BA0 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C00348E0 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0035390 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Interrupter_WdfEvtCleanupCallback @ 0x1C003CB30 (Interrupter_WdfEvtCleanupCallback.c)
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C006F860 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 *     RootHub_Create @ 0x1C0071464 (RootHub_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C0016398
 * Reason: Hex-Rays returned no pseudocode for 0x1C0016398
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0016398: mov     [rsp+arg_0], rbx
 * 00000001C001639D: mov     [rsp+arg_8], rbp
 * 00000001C00163A2: mov     [rsp+arg_10], rsi
 * 00000001C00163A7: push    rdi
 * 00000001C00163A8: push    r14
 * 00000001C00163AA: push    r15
 * 00000001C00163AC: sub     rsp, 50h
 * 00000001C00163B0: mov     r14d, r8d
 * 00000001C00163B3: mov     r15, rcx
 * 00000001C00163B6: mov     edi, r8d
 * 00000001C00163B9: shr     rdi, 10h
 * 00000001C00163BD: movzx   esi, dl
 * 00000001C00163C0: lea     ebx, [r14-1]
 * 00000001C00163C4: movzx   ebp, r9w
 * 00000001C00163C8: mov     r10d, ebx
 * 00000001C00163CB: and     ebx, 1Fh
 * 00000001C00163CE: shr     r10, 5
 * 00000001C00163D2: lea     rax, [rdi+rdi*4]
 * 00000001C00163D6: and     r10d, 7FFh
 * 00000001C00163DD: mov     edx, ebx
 * 00000001C00163DF: mov     ebx, 8
 * 00000001C00163E4: lea     r11, [r10+rax*4]
 * 00000001C00163E8: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00163EF: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00163F4: bt      eax, edx
 * 00000001C00163F7: jb      loc_1C00223CC
 * 00000001C00163FD: and     [rsp+68h+var_20], 0
 * 00000001C0016403: lea     rax, [rsp+68h+arg_30]
 * 00000001C001640B: mov     r9, [rsp+68h+arg_20]
 * 00000001C0016413: mov     r8d, r14d
 * 00000001C0016416: mov     [rsp+68h+var_28], rbx
 * 00000001C001641B: mov     edx, esi
 * 00000001C001641D: mov     [rsp+68h+var_30], rax
 * 00000001C0016422: mov     rcx, r15
 * 00000001C0016425: lea     rax, [rsp+68h+arg_28]
 * 00000001C001642D: mov     [rsp+68h+var_38], rbx
 * 00000001C0016432: mov     [rsp+68h+var_40], rax
 * 00000001C0016437: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C001643C: call    cs:__imp_WppAutoLogTrace
 * 00000001C0016443: nop     dword ptr [rax+rax+00h]
 * 00000001C0016448: lea     r11, [rsp+68h+var_18]
 * 00000001C001644D: mov     rbx, [r11+20h]
 * 00000001C0016451: mov     rbp, [r11+28h]
 * 00000001C0016455: mov     rsi, [r11+30h]
 * 00000001C0016459: mov     rsp, r11
 * 00000001C001645C: pop     r15
 * 00000001C001645E: pop     r14
 * 00000001C0016460: pop     rdi
 * 00000001C0016461: retn
 * 00000001C00223CC: lea     rcx, [rdi+rdi*4]
 * 00000001C00223D0: add     rcx, rcx
 * 00000001C00223D3: cmp     [r10+rcx*8+29h], sil
 * 00000001C00223D8: jb      loc_1C00163FD
 * 00000001C00223DE: and     [rsp+68h+var_28], 0
 * 00000001C00223E4: lea     rdx, [rsp+68h+arg_30]
 * 00000001C00223EC: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C00223F3: mov     r9d, ebp
 * 00000001C00223F6: mov     r8, [rsp+68h+arg_20]
 * 00000001C00223FE: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0022403: mov     [rsp+68h+var_30], rbx
 * 00000001C0022408: mov     [rsp+68h+var_38], rdx
 * 00000001C002240D: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0022415: mov     [rsp+68h+var_40], rbx
 * 00000001C002241A: mov     [rsp+68h+var_48], rdx
 * 00000001C002241F: mov     edx, 2Bh ; '+'
 * 00000001C0022424: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002242A: nop
 * 00000001C002242B: jmp     loc_1C00163FD
 */
