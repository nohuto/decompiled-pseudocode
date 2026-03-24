/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C019E65C
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0193BCC (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C0195D50 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C019605C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C01997CC (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C019A084 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01AA14C (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_L @ 0x1C019E65C
 * Reason: Hex-Rays returned no pseudocode for 0x1C019E65C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C019E65C: mov     [rsp+arg_0], rbx
 * 00000001C019E661: mov     [rsp+arg_8], rbp
 * 00000001C019E666: mov     [rsp+arg_10], rsi
 * 00000001C019E66B: push    rdi
 * 00000001C019E66C: sub     rsp, 40h
 * 00000001C019E670: mov     rbp, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C019E677: mov     esi, r8d
 * 00000001C019E67A: mov     r11d, r8d
 * 00000001C019E67D: shr     r11, 10h
 * 00000001C019E681: movzx   edi, r9w
 * 00000001C019E685: lea     r10d, [rsi-1]
 * 00000001C019E689: movzx   ebx, dl
 * 00000001C019E68C: mov     ecx, r10d
 * 00000001C019E68F: and     r10d, 1Fh
 * 00000001C019E693: shr     rcx, 5
 * 00000001C019E697: lea     rax, [r11+r11*4]
 * 00000001C019E69B: and     ecx, 7FFh
 * 00000001C019E6A1: lea     r9, [rcx+rax*4]
 * 00000001C019E6A5: mov     ecx, r10d
 * 00000001C019E6A8: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C019E6AF: mov     eax, [r10+r9*4+2Ch]
 * 00000001C019E6B4: bt      eax, ecx
 * 00000001C019E6B7: jnb     short loc_1C019E6FF
 * 00000001C019E6B9: lea     rcx, [r11+r11*4]
 * 00000001C019E6BD: add     rcx, rcx
 * 00000001C019E6C0: cmp     [r10+rcx*8+29h], bl
 * 00000001C019E6C5: jb      short loc_1C019E6FF
 * 00000001C019E6C7: and     [rsp+48h+var_18], 0
 * 00000001C019E6CD: lea     rdx, [rsp+48h+arg_28]
 * 00000001C019E6D2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C019E6D9: mov     r9d, edi
 * 00000001C019E6DC: mov     r8, [rsp+48h+arg_20]
 * 00000001C019E6E1: mov     rcx, [r10+rcx*8+18h]
 * 00000001C019E6E6: mov     [rsp+48h+var_20], 4
 * 00000001C019E6EF: mov     [rsp+48h+var_28], rdx
 * 00000001C019E6F4: mov     edx, 2Bh ; '+'
 * 00000001C019E6F9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C019E6FF: and     [rsp+48h+var_10], 0
 * 00000001C019E705: lea     rax, [rsp+48h+arg_28]
 * 00000001C019E70A: mov     r9, [rsp+48h+arg_20]
 * 00000001C019E70F: mov     r8d, esi
 * 00000001C019E712: mov     [rsp+48h+var_18], 4
 * 00000001C019E71B: mov     edx, ebx
 * 00000001C019E71D: mov     [rsp+48h+var_20], rax
 * 00000001C019E722: mov     rcx, rbp
 * 00000001C019E725: mov     word ptr [rsp+48h+var_28], di
 * 00000001C019E72A: call    cs:__imp_WppAutoLogTrace
 * 00000001C019E731: nop     dword ptr [rax+rax+00h]
 * 00000001C019E736: mov     rbx, [rsp+48h+arg_0]
 * 00000001C019E73B: mov     rbp, [rsp+48h+arg_8]
 * 00000001C019E740: mov     rsi, [rsp+48h+arg_10]
 * 00000001C019E745: add     rsp, 40h
 * 00000001C019E749: pop     rdi
 * 00000001C019E74A: retn
 */
