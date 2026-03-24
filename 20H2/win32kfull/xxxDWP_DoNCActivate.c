/*
 * XREFs of xxxDWP_DoNCActivate @ 0x1C00792C4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C0233850 (xxxEndMenuLoop.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C004ACA8 (IsToplevelWindowDesktopComposed.c)
 *     IsModelessMenuNotificationWindow @ 0x1C0079450 (IsModelessMenuNotificationWindow.c)
 *     DwmAsyncActivationChange @ 0x1C0079490 (DwmAsyncActivationChange.c)
 *     xxxDrawCaptionBar @ 0x1C0079538 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C0079A1C (GetWindowBorders.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     xxxMenuBarDraw @ 0x1C024CF74 (xxxMenuBarDraw.c)
 */

/*
 * Hex-Rays decompilation failed for xxxDWP_DoNCActivate @ 0x1C00792C4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00792C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00792C4: mov     rax, rsp
 * 00000001C00792C7: mov     [rax+8], rbx
 * 00000001C00792CB: mov     [rax+10h], rbp
 * 00000001C00792CF: mov     [rax+18h], rsi
 * 00000001C00792D3: mov     [rax+20h], rdi
 * 00000001C00792D7: push    r12
 * 00000001C00792D9: push    r14
 * 00000001C00792DB: push    r15
 * 00000001C00792DD: sub     rsp, 20h
 * 00000001C00792E1: mov     r14d, edx
 * 00000001C00792E4: xor     r12d, r12d
 * 00000001C00792E7: mov     ebp, 100Ch
 * 00000001C00792EC: mov     rsi, r8
 * 00000001C00792EF: mov     rbx, rcx
 * 00000001C00792F2: mov     r15d, ebp
 * 00000001C00792F5: and     r14d, 1
 * 00000001C00792F9: jnz     loc_1C0079438
 * 00000001C00792FF: test    dl, 2
 * 00000001C0079302: jnz     short loc_1C0079311
 * 00000001C0079304: call    IsModelessMenuNotificationWindow
 * 00000001C0079309: test    eax, eax
 * 00000001C007930B: jnz     loc_1C0079438
 * 00000001C0079311: mov     ecx, r12d
 * 00000001C0079314: mov     r8d, 40h ; '@'
 * 00000001C007931A: mov     rdx, rbx
 * 00000001C007931D: lea     r9d, [r8-3Fh]
 * 00000001C0079321: call    SetOrClrWF
 * 00000001C0079326: cmp     rsi, 0FFFFFFFFFFFFFFFFh
 * 00000001C007932A: jz      loc_1C00793E8
 * 00000001C0079330: mov     rdx, [rbx+28h]
 * 00000001C0079334: mov     r8b, [rdx+1Fh]
 * 00000001C0079338: test    r8b, 10h
 * 00000001C007933C: jz      loc_1C00793E8
 * 00000001C0079342: test    byte ptr [rdx+11h], 1
 * 00000001C0079346: jnz     loc_1C00793E8
 * 00000001C007934C: mov     rax, cs:__imp_gpsi
 * 00000001C0079353: movzx   edi, r12w
 * 00000001C0079357: mov     rcx, [rax]
 * 00000001C007935A: mov     eax, [rcx+11E4h]
 * 00000001C0079360: cmp     [rcx+11E0h], eax
 * 00000001C0079366: jz      loc_1C018988E
 * 00000001C007936C: mov     edi, ebp
 * 00000001C007936E: test    r8b, 20h
 * 00000001C0079372: jnz     short loc_1C007937E
 * 00000001C0079374: test    byte ptr [rdx+1Eh], 4
 * 00000001C0079378: jnz     loc_1C01898A5
 * 00000001C007937E: test    di, di
 * 00000001C0079381: jz      short loc_1C00793E8
 * 00000001C0079383: mov     rcx, rsi
 * 00000001C0079386: call    cs:__imp_UserValidateCopyRgn
 * 00000001C007938D: nop     dword ptr [rax+rax+00h]
 * 00000001C0079392: mov     r8d, 10001h
 * 00000001C0079398: mov     rcx, rbx
 * 00000001C007939B: mov     rdx, rax
 * 00000001C007939E: mov     rbp, rax
 * 00000001C00793A1: call    cs:__imp__GetDCEx
 * 00000001C00793A8: nop     dword ptr [rax+rax+00h]
 * 00000001C00793AD: mov     rsi, rax
 * 00000001C00793B0: test    rax, rax
 * 00000001C00793B3: jz      loc_1C01898E6
 * 00000001C00793B9: mov     rax, [rbx+28h]
 * 00000001C00793BD: test    byte ptr [rax+10h], 1
 * 00000001C00793C1: jnz     loc_1C01898C4
 * 00000001C00793C7: movzx   r8d, di
 * 00000001C00793CB: mov     rdx, rsi
 * 00000001C00793CE: or      r8d, r15d
 * 00000001C00793D1: mov     rcx, rbx
 * 00000001C00793D4: call    xxxDrawCaptionBar
 * 00000001C00793D9: mov     rcx, rsi
 * 00000001C00793DC: call    cs:__imp__ReleaseDC
 * 00000001C00793E3: nop     dword ptr [rax+rax+00h]
 * 00000001C00793E8: mov     rcx, rbx
 * 00000001C00793EB: call    IsToplevelWindowDesktopComposed
 * 00000001C00793F0: test    eax, eax
 * 00000001C00793F2: jz      short loc_1C0079418
 * 00000001C00793F4: mov     rax, [rbx+28h]
 * 00000001C00793F8: test    byte ptr [rax+1Ah], 8
 * 00000001C00793FC: jz      short loc_1C0079418
 * 00000001C00793FE: call    cs:__imp_ReferenceDwmApiPort
 * 00000001C0079405: nop     dword ptr [rax+rax+00h]
 * 00000001C007940A: mov     rdx, [rbx]
 * 00000001C007940D: mov     r8d, r14d
 * 00000001C0079410: mov     rcx, rax; Object
 * 00000001C0079413: call    DwmAsyncActivationChange
 * 00000001C0079418: mov     rbx, [rsp+38h+arg_0]
 * 00000001C007941D: mov     rbp, [rsp+38h+arg_8]
 * 00000001C0079422: mov     rsi, [rsp+38h+arg_10]
 * 00000001C0079427: mov     rdi, [rsp+38h+arg_18]
 * 00000001C007942C: add     rsp, 20h
 * 00000001C0079430: pop     r15
 * 00000001C0079432: pop     r14
 * 00000001C0079434: pop     r12
 * 00000001C0079436: retn
 * 00000001C0079438: mov     ecx, 1
 * 00000001C007943D: mov     r15d, 100Dh
 * 00000001C0079443: jmp     loc_1C0079314
 * 00000001C018988E: mov     eax, [rcx+1224h]
 * 00000001C0189894: cmp     [rcx+11FCh], eax
 * 00000001C018989A: jz      loc_1C007936E
 * 00000001C01898A0: jmp     loc_1C007936C
 * 00000001C01898A5: mov     eax, [rcx+1204h]
 * 00000001C01898AB: cmp     [rcx+1200h], eax
 * 00000001C01898B1: jz      loc_1C007937E
 * 00000001C01898B7: mov     eax, 8000h
 * 00000001C01898BC: or      di, ax
 * 00000001C01898BF: jmp     loc_1C007937E
 * 00000001C01898C4: mov     edx, [rax+18h]
 * 00000001C01898C7: mov     ecx, [rax+1Ch]
 * 00000001C01898CA: call    GetWindowBorders
 * 00000001C01898CF: mov     r9d, eax
 * 00000001C01898D2: mov     r8d, eax
 * 00000001C01898D5: mov     rdx, rsi
 * 00000001C01898D8: mov     rcx, rbx
 * 00000001C01898DB: call    xxxMenuBarDraw
 * 00000001C01898E0: nop
 * 00000001C01898E1: jmp     loc_1C00793C7
 * 00000001C01898E6: mov     rcx, rbp
 * 00000001C01898E9: call    cs:__imp_GreDeleteObject
 * 00000001C01898F0: nop     dword ptr [rax+rax+00h]
 * 00000001C01898F5: nop
 * 00000001C01898F6: jmp     loc_1C00793E8
 */
