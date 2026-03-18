/*
 * XREFs of _NtUserCallHwndParam@12 @ 0xA7482
 * Callers:
 *     <none>
 * Callees:
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     __ChangeWindowMessageFilter@8 @ 0x7FB78 (__ChangeWindowMessageFilter@8.c)
 *     __DeregisterShellHookWindow@4 @ 0x821A4 (__DeregisterShellHookWindow@4.c)
 *     __InitThreadCoreMessagingIocp@4 @ 0x99E68 (__InitThreadCoreMessagingIocp@4.c)
 *     __BeginDeferWindowPos@4 @ 0x9BF2E (__BeginDeferWindowPos@4.c)
 *     __CreateMenu@0 @ 0xA7136 (__CreateMenu@0.c)
 *     _GetClassIcoCur@8 @ 0xA7526 (_GetClassIcoCur@8.c)
 *     _SetDialogPointer@8 @ 0xA756E (_SetDialogPointer@8.c)
 *     __SetWindowContextHelpId@8 @ 0xA76EE (__SetWindowContextHelpId@8.c)
 *     _exit_fast_text@24 @ 0xB5608 (_exit_fast_text@24.c)
 *     ?vTransparentCopyS24D32@@YGXPAUBLTINFO@@@Z @ 0xBB1BE (-vTransparentCopyS24D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z @ 0xE88B0 (-_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z.c)
 *     __NotifyOverlayWindow@8 @ 0x145F10 (__NotifyOverlayWindow@8.c)
 *     _xxxBroadcastImeShowStatusChange@8 @ 0x14F378 (_xxxBroadcastImeShowStatusChange@8.c)
 *     __KillSystemTimer@8 @ 0x1562F0 (__KillSystemTimer@8.c)
 *     __EnableModernAppWindowKeyboardIntercept@8 @ 0x16D736 (__EnableModernAppWindowKeyboardIntercept@8.c)
 *     __RegisterKeyboardCorrectionCallout@8 @ 0x16D83A (__RegisterKeyboardCorrectionCallout@8.c)
 *     _RemoteShadowStart@8 @ 0x187CE0 (_RemoteShadowStart@8.c)
 *     _ClearWindowState@8 @ 0x1A01A5 (_ClearWindowState@8.c)
 *     _SetWindowState@8 @ 0x1A01E8 (_SetWindowState@8.c)
 *     __SetProgmanWindow@4 @ 0x1A6C17 (__SetProgmanWindow@4.c)
 *     _xxxArrangeIconicWindows@4 @ 0x1AEB2A (_xxxArrangeIconicWindows@4.c)
 *     ?vTransparentCopy@@YGXPAUBLTINFO@@@Z @ 0x1F1C70 (-vTransparentCopy@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D16@@YGXPAUBLTINFO@@@Z @ 0x1F1F8A (-vTransparentCopyS16D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D16Identity@@YGXPAUBLTINFO@@@Z @ 0x1F2048 (-vTransparentCopyS16D16Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D24@@YGXPAUBLTINFO@@@Z @ 0x1F20ED (-vTransparentCopyS16D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D32@@YGXPAUBLTINFO@@@Z @ 0x1F21C5 (-vTransparentCopyS16D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D8@@YGXPAUBLTINFO@@@Z @ 0x1F2282 (-vTransparentCopyS16D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D16@@YGXPAUBLTINFO@@@Z @ 0x1F2333 (-vTransparentCopyS24D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D24@@YGXPAUBLTINFO@@@Z @ 0x1F23E2 (-vTransparentCopyS24D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D24Identity@@YGXPAUBLTINFO@@@Z @ 0x1F24A6 (-vTransparentCopyS24D24Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D8@@YGXPAUBLTINFO@@@Z @ 0x1F253E (-vTransparentCopyS24D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D16@@YGXPAUBLTINFO@@@Z @ 0x1F25D5 (-vTransparentCopyS32D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D24@@YGXPAUBLTINFO@@@Z @ 0x1F2699 (-vTransparentCopyS32D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D32@@YGXPAUBLTINFO@@@Z @ 0x1F2777 (-vTransparentCopyS32D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D32Identity@@YGXPAUBLTINFO@@@Z @ 0x1F283A (-vTransparentCopyS32D32Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D8@@YGXPAUBLTINFO@@@Z @ 0x1F28E4 (-vTransparentCopyS32D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS4D16@@YGXPAUBLTINFO@@@Z @ 0x1F299B (-vTransparentCopyS4D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS4D24@@YGXPAUBLTINFO@@@Z @ 0x1F2A43 (-vTransparentCopyS4D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS4D32@@YGXPAUBLTINFO@@@Z @ 0x1F2AE9 (-vTransparentCopyS4D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS4D8@@YGXPAUBLTINFO@@@Z @ 0x1F2B8F (-vTransparentCopyS4D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS8D16@@YGXPAUBLTINFO@@@Z @ 0x1F2C30 (-vTransparentCopyS8D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS8D24@@YGXPAUBLTINFO@@@Z @ 0x1F2CC0 (-vTransparentCopyS8D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS8D32@@YGXPAUBLTINFO@@@Z @ 0x1F2D56 (-vTransparentCopyS8D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS8D8@@YGXPAUBLTINFO@@@Z @ 0x1F2DE4 (-vTransparentCopyS8D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS8D8Identity@@YGXPAUBLTINFO@@@Z @ 0x1F2E6D (-vTransparentCopyS8D8Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?vLine1Octant07@@YGXPAU_DDALINE@@PAEJK@Z @ 0x2404D9 (-vLine1Octant07@@YGXPAU_DDALINE@@PAEJK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_DWORD *__stdcall NtUserCallHwndParam(int a1, int a2, unsigned int a3)
{
  int v3; // eax
  int v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v9; // [esp+8h] [ebp-Ch] BYREF
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v9 = 0;
  v10 = 0;
  v11 = 0;
  EnterCrit(0, 1);
  if ( a3 == 94 || a3 == -1 )
    _gbValidateHandleForIL = 0;
  v3 = ValidateHwnd(a1);
  v4 = v3;
  if ( !v3 )
  {
    v6 = 0;
    goto LABEL_9;
  }
  v9 = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = &v9;
  v10 = v3;
  HMLockObject(v3);
  if ( a3 - 94 > 0xA )
    goto LABEL_10;
  _mm_lfence();
  v5 = (_DWORD *)funcs_A74EF[a3 - 94](v4, a2);
  v6 = v5;
  if ( a3 < 0x5F )
  {
    if ( v5 )
    {
      v6 = (_DWORD *)*v5;
      goto LABEL_8;
    }
LABEL_10:
    v6 = 0;
  }
LABEL_8:
  ThreadUnlock1();
LABEL_9:
  UserSessionSwitchLeaveCrit();
  return v6;
}
