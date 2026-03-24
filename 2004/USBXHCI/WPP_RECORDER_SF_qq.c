/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C0014D58
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0005D90 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C00326C0 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0033400 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0033EB0 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Interrupter_WdfEvtCleanupCallback @ 0x1C003B650 (Interrupter_WdfEvtCleanupCallback.c)
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C006C550 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 *     RootHub_Create @ 0x1C006F5FC (RootHub_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C0014D58
 * Reason: Hex-Rays returned no pseudocode for 0x1C0014D58
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0014D58: mov     [rsp+arg_0], rbx
 * 00000001C0014D5D: mov     [rsp+arg_8], rbp
 * 00000001C0014D62: mov     [rsp+arg_10], rsi
 * 00000001C0014D67: push    rdi
 * 00000001C0014D68: push    r14
 * 00000001C0014D6A: push    r15
 * 00000001C0014D6C: sub     rsp, 50h
 * 00000001C0014D70: mov     r14d, r8d
 * 00000001C0014D73: mov     r15, rcx
 * 00000001C0014D76: mov     edi, r8d
 * 00000001C0014D79: shr     rdi, 10h
 * 00000001C0014D7D: movzx   esi, dl
 * 00000001C0014D80: lea     ebx, [r14-1]
 * 00000001C0014D84: movzx   ebp, r9w
 * 00000001C0014D88: mov     r10d, ebx
 * 00000001C0014D8B: and     ebx, 1Fh
 * 00000001C0014D8E: shr     r10, 5
 * 00000001C0014D92: lea     rax, [rdi+rdi*4]
 * 00000001C0014D96: and     r10d, 7FFh
 * 00000001C0014D9D: mov     edx, ebx
 * 00000001C0014D9F: mov     ebx, 8
 * 00000001C0014DA4: lea     r11, [r10+rax*4]
 * 00000001C0014DA8: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0014DAF: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0014DB4: bt      eax, edx
 * 00000001C0014DB7: jb      loc_1C001F37E
 * 00000001C0014DBD: and     [rsp+68h+var_20], 0
 * 00000001C0014DC3: lea     rax, [rsp+68h+arg_30]
 * 00000001C0014DCB: mov     r9, [rsp+68h+arg_20]
 * 00000001C0014DD3: mov     r8d, r14d
 * 00000001C0014DD6: mov     [rsp+68h+var_28], rbx
 * 00000001C0014DDB: mov     edx, esi
 * 00000001C0014DDD: mov     [rsp+68h+var_30], rax
 * 00000001C0014DE2: mov     rcx, r15
 * 00000001C0014DE5: lea     rax, [rsp+68h+arg_28]
 * 00000001C0014DED: mov     [rsp+68h+var_38], rbx
 * 00000001C0014DF2: mov     [rsp+68h+var_40], rax
 * 00000001C0014DF7: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0014DFC: call    cs:__imp_WppAutoLogTrace
 * 00000001C0014E03: nop     dword ptr [rax+rax+00h]
 * 00000001C0014E08: lea     r11, [rsp+68h+var_18]
 * 00000001C0014E0D: mov     rbx, [r11+20h]
 * 00000001C0014E11: mov     rbp, [r11+28h]
 * 00000001C0014E15: mov     rsi, [r11+30h]
 * 00000001C0014E19: mov     rsp, r11
 * 00000001C0014E1C: pop     r15
 * 00000001C0014E1E: pop     r14
 * 00000001C0014E20: pop     rdi
 * 00000001C0014E21: retn
 * 00000001C001F37E: lea     rcx, [rdi+rdi*4]
 * 00000001C001F382: add     rcx, rcx
 * 00000001C001F385: cmp     [r10+rcx*8+29h], sil
 * 00000001C001F38A: jb      loc_1C0014DBD
 * 00000001C001F390: and     [rsp+68h+var_28], 0
 * 00000001C001F396: lea     rdx, [rsp+68h+arg_30]
 * 00000001C001F39E: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C001F3A5: mov     r9d, ebp
 * 00000001C001F3A8: mov     r8, [rsp+68h+arg_20]
 * 00000001C001F3B0: mov     rcx, [r10+rcx*8+18h]
 * 00000001C001F3B5: mov     [rsp+68h+var_30], rbx
 * 00000001C001F3BA: mov     [rsp+68h+var_38], rdx
 * 00000001C001F3BF: lea     rdx, [rsp+68h+arg_28]
 * 00000001C001F3C7: mov     [rsp+68h+var_40], rbx
 * 00000001C001F3CC: mov     [rsp+68h+var_48], rdx
 * 00000001C001F3D1: mov     edx, 2Bh ; '+'
 * 00000001C001F3D6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001F3DC: nop
 * 00000001C001F3DD: jmp     loc_1C0014DBD
 */
