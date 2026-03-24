/*
 * XREFs of _BuildHwndList@12 @ 0x2D340
 * Callers:
 *     __SetDeferredDpiStateForWindowAndChildren@12 @ 0x25A48 (__SetDeferredDpiStateForWindowAndChildren@12.c)
 *     ?xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z @ 0x26CC0 (-xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z.c)
 *     _NtUserBuildHwndList@32 @ 0x2A632 (_NtUserBuildHwndList@32.c)
 *     _UpdateMonitorForWindowAndChildren@16 @ 0x2A86E (_UpdateMonitorForWindowAndChildren@16.c)
 *     _BuildWindowListWithDpiBoundaryInfo@16 @ 0x2AC94 (_BuildWindowListWithDpiBoundaryInfo@16.c)
 *     ?xxxImeWindowPosChanged@@YGXPAUtagSMWP@@@Z @ 0x2C440 (-xxxImeWindowPosChanged@@YGXPAUtagSMWP@@@Z.c)
 *     __FindWindowEx@20 @ 0x2D034 (__FindWindowEx@20.c)
 *     ?xxxSendActivateAppMessage@@YGXABUtagAAS@@@Z @ 0x3C394 (-xxxSendActivateAppMessage@@YGXABUtagAAS@@@Z.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxBroadcastMessageEx@32 @ 0x48942 (_xxxBroadcastMessageEx@32.c)
 *     ?xxxSendBSMtoDesktop@@YGHPAUtagWND@@IIJPAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x7F518 (-xxxSendBSMtoDesktop@@YGHPAUtagWND@@IIJPAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?xxxCheckImeShowStatus@@YGHPAUtagWND@@PAUtagTHREADINFO@@@Z @ 0x92932 (-xxxCheckImeShowStatus@@YGHPAUtagWND@@PAUtagTHREADINFO@@@Z.c)
 *     _xxxDWP_UpdateUIState@12 @ 0xA50F8 (_xxxDWP_UpdateUIState@12.c)
 *     _AssociateInputContextEx@12 @ 0xAE640 (_AssociateInputContextEx@12.c)
 *     _xxxDesktopRecalc@8 @ 0xB04BC (_xxxDesktopRecalc@8.c)
 *     _xxxShowOwnedWindows@12 @ 0xB4B0A (_xxxShowOwnedWindows@12.c)
 *     _xxxClientShutdown@8 @ 0xD0CA6 (_xxxClientShutdown@8.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YGHPBUtagDESKTOP@@H@Z @ 0xE1784 (-DwmNotifyChildrenLinkUnlink@@YGHPBUtagDESKTOP@@H@Z.c)
 *     ?ChangeWindowTreeProtection@@YGHPAUtagWND@@K@Z @ 0xF55F4 (-ChangeWindowTreeProtection@@YGHPAUtagWND@@K@Z.c)
 *     _xxxInternalEnumWindow@16 @ 0x141598 (_xxxInternalEnumWindow@16.c)
 *     ?FixupOverlayWindowAttributes@@YGHPAUtagWND@@@Z @ 0x144E9E (-FixupOverlayWindowAttributes@@YGHPAUtagWND@@@Z.c)
 *     _SnapshotWindowRects@8 @ 0x145D44 (_SnapshotWindowRects@8.c)
 *     _xxxMetricsRecalc@28 @ 0x145FE4 (_xxxMetricsRecalc@28.c)
 *     _DestroyInputContext@4 @ 0x14F099 (_DestroyInputContext@4.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YGHPAUtagWND@@PAUtagBWL@@@Z @ 0x150504 (-xxxSendGDIScaledDpiChangedMsgs@@YGHPAUtagWND@@PAUtagBWL@@@Z.c)
 *     _xxxForceUpdateProcessDpiAwarenessContext@8 @ 0x1523FE (_xxxForceUpdateProcessDpiAwarenessContext@8.c)
 *     _xxxForceWindowToDpiForTest@8 @ 0x15258A (_xxxForceWindowToDpiForTest@8.c)
 *     ?InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z @ 0x15C30E (-InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z.c)
 *     ?xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z @ 0x1A17E9 (-xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z.c)
 *     _xxxArrangeIconicWindows@4 @ 0x1AEB2A (_xxxArrangeIconicWindows@4.c)
 * Callees:
 *     ?InternalRebuildHwndListForIMEClass@@YGPAUtagBWL@@PAU1@@Z @ 0x2A4FC (-InternalRebuildHwndListForIMEClass@@YGPAUtagBWL@@PAU1@@Z.c)
 *     ?InternalBuildHwndList@@YGPAUtagBWL@@PAU1@PAUtagWND@@I@Z @ 0x2B0B4 (-InternalBuildHwndList@@YGPAUtagBWL@@PAU1@PAUtagWND@@I@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _BuildHwndList@12 @ 0x2D340
 * Reason: Hex-Rays returned no pseudocode for 0x2D340
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000002D340: mov     edi, edi
 * 000000000002D342: push    ebp; struct tagBWL *
 * 000000000002D343: mov     ebp, esp
 * 000000000002D345: mov     ecx, ?pbwlCache@@3PAUtagBWL@@A; tagBWL * pbwlCache
 * 000000000002D34B: test    ecx, ecx
 * 000000000002D34D: jz      short loc_2D35B
 * 000000000002D34F: mov     ?pbwlCache@@3PAUtagBWL@@A, 0; tagBWL * pbwlCache
 * 000000000002D359: jmp     short loc_2D37A
 * 000000000002D35B: push    6C777355h
 * 000000000002D360: push    94h
 * 000000000002D365: call    ds:__imp__Win32AllocPool@8; Win32AllocPool(x,x)
 * 000000000002D36B: mov     ecx, eax
 * 000000000002D36D: test    ecx, ecx
 * 000000000002D36F: jz      short loc_2D3A2
 * 000000000002D371: lea     eax, [ecx+8Ch]
 * 000000000002D377: mov     [ecx+8], eax
 * 000000000002D37A: push    [ebp+arg_4]; struct tagBWL *
 * 000000000002D37D: mov     edx, [ebp+arg_0]
 * 000000000002D380: lea     eax, [ecx+10h]
 * 000000000002D383: mov     [ecx+4], eax
 * 000000000002D386: mov     eax, [ebp+arg_8]
 * 000000000002D389: mov     [ecx+0Ch], eax
 * 000000000002D38C: call    ?InternalBuildHwndList@@YGPAUtagBWL@@PAU1@PAUtagWND@@I@Z; InternalBuildHwndList(tagBWL *,tagWND *,uint)
 * 000000000002D391: mov     ecx, eax
 * 000000000002D393: mov     eax, [ecx+4]
 * 000000000002D396: cmp     eax, [ecx+8]
 * 000000000002D399: jb      short loc_2D3A8
 * 000000000002D39B: push    ecx
 * 000000000002D39C: call    ds:__imp__Win32FreePool@4; Win32FreePool(x)
 * 000000000002D3A2: xor     eax, eax
 * 000000000002D3A4: pop     ebp
 * 000000000002D3A5: retn    0Ch
 * 000000000002D3A8: test    byte ptr [ebp+arg_4], 8
 * 000000000002D3AC: mov     dword ptr [eax], 1
 * 000000000002D3B2: jz      short loc_2D3BB
 * 000000000002D3B4: call    ?InternalRebuildHwndListForIMEClass@@YGPAUtagBWL@@PAU1@@Z; InternalRebuildHwndListForIMEClass(tagBWL *)
 * 000000000002D3B9: mov     ecx, eax
 * 000000000002D3BB: mov     eax, ds:__imp__gptiCurrent
 * 000000000002D3C0: mov     eax, [eax]
 * 000000000002D3C2: mov     [ecx+0Ch], eax
 * 000000000002D3C5: mov     eax, ds:__imp__gpbwlList
 * 000000000002D3CA: mov     eax, [eax]
 * 000000000002D3CC: mov     [ecx], eax
 * 000000000002D3CE: mov     eax, ds:__imp__gpbwlList
 * 000000000002D3D3: mov     [eax], ecx
 * 000000000002D3D5: mov     eax, ecx
 * 000000000002D3D7: pop     ebp
 * 000000000002D3D8: retn    0Ch
 */
