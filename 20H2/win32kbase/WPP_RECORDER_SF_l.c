/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C019C15C
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C019169C (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C0193820 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0193B2C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C019729C (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C0197B54 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01A7DCC (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_L @ 0x1C019C15C
 * Reason: Hex-Rays returned no pseudocode for 0x1C019C15C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C019C15C: mov     [rsp+arg_0], rbx
 * 00000001C019C161: mov     [rsp+arg_8], rbp
 * 00000001C019C166: mov     [rsp+arg_10], rsi
 * 00000001C019C16B: push    rdi
 * 00000001C019C16C: sub     rsp, 40h
 * 00000001C019C170: mov     rbp, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C019C177: mov     esi, r8d
 * 00000001C019C17A: mov     r11d, r8d
 * 00000001C019C17D: shr     r11, 10h
 * 00000001C019C181: movzx   edi, r9w
 * 00000001C019C185: lea     r10d, [rsi-1]
 * 00000001C019C189: movzx   ebx, dl
 * 00000001C019C18C: mov     ecx, r10d
 * 00000001C019C18F: and     r10d, 1Fh
 * 00000001C019C193: shr     rcx, 5
 * 00000001C019C197: lea     rax, [r11+r11*4]
 * 00000001C019C19B: and     ecx, 7FFh
 * 00000001C019C1A1: lea     r9, [rcx+rax*4]
 * 00000001C019C1A5: mov     ecx, r10d
 * 00000001C019C1A8: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C019C1AF: mov     eax, [r10+r9*4+2Ch]
 * 00000001C019C1B4: bt      eax, ecx
 * 00000001C019C1B7: jnb     short loc_1C019C1FF
 * 00000001C019C1B9: lea     rcx, [r11+r11*4]
 * 00000001C019C1BD: add     rcx, rcx
 * 00000001C019C1C0: cmp     [r10+rcx*8+29h], bl
 * 00000001C019C1C5: jb      short loc_1C019C1FF
 * 00000001C019C1C7: and     [rsp+48h+var_18], 0
 * 00000001C019C1CD: lea     rdx, [rsp+48h+arg_28]
 * 00000001C019C1D2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C019C1D9: mov     r9d, edi
 * 00000001C019C1DC: mov     r8, [rsp+48h+arg_20]
 * 00000001C019C1E1: mov     rcx, [r10+rcx*8+18h]
 * 00000001C019C1E6: mov     [rsp+48h+var_20], 4
 * 00000001C019C1EF: mov     [rsp+48h+var_28], rdx
 * 00000001C019C1F4: mov     edx, 2Bh ; '+'
 * 00000001C019C1F9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C019C1FF: and     [rsp+48h+var_10], 0
 * 00000001C019C205: lea     rax, [rsp+48h+arg_28]
 * 00000001C019C20A: mov     r9, [rsp+48h+arg_20]
 * 00000001C019C20F: mov     r8d, esi
 * 00000001C019C212: mov     [rsp+48h+var_18], 4
 * 00000001C019C21B: mov     edx, ebx
 * 00000001C019C21D: mov     [rsp+48h+var_20], rax
 * 00000001C019C222: mov     rcx, rbp
 * 00000001C019C225: mov     word ptr [rsp+48h+var_28], di
 * 00000001C019C22A: call    cs:__imp_WppAutoLogTrace
 * 00000001C019C231: nop     dword ptr [rax+rax+00h]
 * 00000001C019C236: mov     rbx, [rsp+48h+arg_0]
 * 00000001C019C23B: mov     rbp, [rsp+48h+arg_8]
 * 00000001C019C240: mov     rsi, [rsp+48h+arg_10]
 * 00000001C019C245: add     rsp, 40h
 * 00000001C019C249: pop     rdi
 * 00000001C019C24A: retn
 */
