/*
 * XREFs of _NtUserCallTwoParam@12 @ 0x7FA30
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxGetCursorPos@@YGHPAUtagPOINT@@K@Z @ 0x7FA68 (-xxxGetCursorPos@@YGHPAUtagPOINT@@K@Z.c)
 *     __ChangeWindowMessageFilter@8 @ 0x7FB78 (__ChangeWindowMessageFilter@8.c)
 *     __DeregisterShellHookWindow@4 @ 0x821A4 (__DeregisterShellHookWindow@4.c)
 *     __InitThreadCoreMessagingIocp@4 @ 0x99E68 (__InitThreadCoreMessagingIocp@4.c)
 *     __BeginDeferWindowPos@4 @ 0x9BF2E (__BeginDeferWindowPos@4.c)
 *     __CreateMenu@0 @ 0xA7136 (__CreateMenu@0.c)
 *     _GetClassIcoCur@8 @ 0xA7526 (_GetClassIcoCur@8.c)
 *     _exit_fast_text@24 @ 0xB5608 (_exit_fast_text@24.c)
 *     ?vTransparentCopyS24D32@@YGXPAUBLTINFO@@@Z @ 0xBB1BE (-vTransparentCopyS24D32@@YGXPAUBLTINFO@@@Z.c)
 *     _xxxRegisterGhostWindow@8 @ 0xC20E8 (_xxxRegisterGhostWindow@8.c)
 *     _InitAnsiOem@8 @ 0xEB7E2 (_InitAnsiOem@8.c)
 *     __RegisterLogonProcess@8 @ 0xEDF06 (__RegisterLogonProcess@8.c)
 *     _xxxBroadcastImeShowStatusChange@8 @ 0x14F378 (_xxxBroadcastImeShowStatusChange@8.c)
 *     _NlsKbdSendIMENotification@8 @ 0x16DFC1 (_NlsKbdSendIMENotification@8.c)
 *     _xxxRegisterSiblingFrostWindow@8 @ 0x1708E7 (_xxxRegisterSiblingFrostWindow@8.c)
 *     _RemoteShadowCleanup@8 @ 0x187B8D (_RemoteShadowCleanup@8.c)
 *     _RemoteShadowStart@8 @ 0x187CE0 (_RemoteShadowStart@8.c)
 *     _xxxRegisterUserHungAppHandlers@8 @ 0x1A1148 (_xxxRegisterUserHungAppHandlers@8.c)
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

int __stdcall NtUserCallTwoParam(struct tagPOINT *a1, unsigned int a2, int a3)
{
  int v3; // esi

  v3 = 0;
  EnterCrit(0, 1);
  if ( (unsigned int)(a3 - 126) <= 0xF )
    v3 = ((int (__stdcall *)(struct tagPOINT *, unsigned int))funcs_7FA52[a3 - 126])(a1, a2);
  UserSessionSwitchLeaveCrit();
  return v3;
}
