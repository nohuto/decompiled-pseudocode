/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C0077870
 * Callers:
 *     HandleDeferredInput @ 0x1C0001270 (HandleDeferredInput.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0024060 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimDereferenceDev @ 0x1C0075E48 (rimDereferenceDev.c)
 *     EtwTraceUIPIInputError @ 0x1C0077560 (EtwTraceUIPIInputError.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C0134F00 (NtUserMapPointsByVisualIdentifier.c)
 *     UserAddBaseWindowHandle @ 0x1C013B330 (UserAddBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C013B7A4 (UserFindBaseWindowHandle.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C016C014 (RIMGetPnpActionBitsFromGuid.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C016C194 (RIMSignalOnPnpNotificationAndWait.c)
 *     RIMWaitForPriorPnpWorkToComplete @ 0x1C016CA74 (RIMWaitForPriorPnpWorkToComplete.c)
 *     rimInputApc @ 0x1C01739B0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017435C (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C0175050 (rimSignalReadComplete.c)
 *     rimObsAddInputObserver @ 0x1C017C2C4 (rimObsAddInputObserver.c)
 *     rimObsDeliverInputToObserver @ 0x1C017CB90 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C0077870
 * Reason: Hex-Rays returned no pseudocode for 0x1C0077870
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0077870: mov     [rsp+arg_0], rbx
 * 00000001C0077875: mov     [rsp+arg_8], rbp
 * 00000001C007787A: mov     [rsp+arg_10], rsi
 * 00000001C007787F: push    rdi
 * 00000001C0077880: push    r14
 * 00000001C0077882: push    r15
 * 00000001C0077884: sub     rsp, 50h
 * 00000001C0077888: mov     r14d, r8d
 * 00000001C007788B: mov     r15, rcx
 * 00000001C007788E: mov     edi, r8d
 * 00000001C0077891: shr     rdi, 10h
 * 00000001C0077895: movzx   esi, dl
 * 00000001C0077898: lea     ebx, [r14-1]
 * 00000001C007789C: movzx   ebp, r9w
 * 00000001C00778A0: mov     r10d, ebx
 * 00000001C00778A3: and     ebx, 1Fh
 * 00000001C00778A6: shr     r10, 5
 * 00000001C00778AA: lea     rax, [rdi+rdi*4]
 * 00000001C00778AE: and     r10d, 7FFh
 * 00000001C00778B5: mov     edx, ebx
 * 00000001C00778B7: mov     ebx, 8
 * 00000001C00778BC: lea     r11, [r10+rax*4]
 * 00000001C00778C0: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00778C7: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00778CC: bt      eax, edx
 * 00000001C00778CF: jb      loc_1C0100C94
 * 00000001C00778D5: and     [rsp+68h+var_20], 0
 * 00000001C00778DB: lea     rax, [rsp+68h+arg_30]
 * 00000001C00778E3: mov     r9, [rsp+68h+arg_20]
 * 00000001C00778EB: mov     r8d, r14d
 * 00000001C00778EE: mov     [rsp+68h+var_28], rbx
 * 00000001C00778F3: mov     edx, esi
 * 00000001C00778F5: mov     [rsp+68h+var_30], rax
 * 00000001C00778FA: mov     rcx, r15
 * 00000001C00778FD: lea     rax, [rsp+68h+arg_28]
 * 00000001C0077905: mov     [rsp+68h+var_38], rbx
 * 00000001C007790A: mov     [rsp+68h+var_40], rax
 * 00000001C007790F: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0077914: call    cs:__imp_WppAutoLogTrace
 * 00000001C007791B: nop     dword ptr [rax+rax+00h]
 * 00000001C0077920: lea     r11, [rsp+68h+var_18]
 * 00000001C0077925: mov     rbx, [r11+20h]
 * 00000001C0077929: mov     rbp, [r11+28h]
 * 00000001C007792D: mov     rsi, [r11+30h]
 * 00000001C0077931: mov     rsp, r11
 * 00000001C0077934: pop     r15
 * 00000001C0077936: pop     r14
 * 00000001C0077938: pop     rdi
 * 00000001C0077939: retn
 * 00000001C0100C94: lea     rcx, [rdi+rdi*4]
 * 00000001C0100C98: add     rcx, rcx
 * 00000001C0100C9B: cmp     [r10+rcx*8+29h], sil
 * 00000001C0100CA0: jb      loc_1C00778D5
 * 00000001C0100CA6: and     [rsp+68h+var_28], 0
 * 00000001C0100CAC: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0100CB4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0100CBB: mov     r9d, ebp
 * 00000001C0100CBE: mov     r8, [rsp+68h+arg_20]
 * 00000001C0100CC6: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0100CCB: mov     [rsp+68h+var_30], rbx
 * 00000001C0100CD0: mov     [rsp+68h+var_38], rdx
 * 00000001C0100CD5: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0100CDD: mov     [rsp+68h+var_40], rbx
 * 00000001C0100CE2: mov     [rsp+68h+var_48], rdx
 * 00000001C0100CE7: mov     edx, 2Bh ; '+'
 * 00000001C0100CEC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0100CF2: nop
 * 00000001C0100CF3: jmp     loc_1C00778D5
 */
