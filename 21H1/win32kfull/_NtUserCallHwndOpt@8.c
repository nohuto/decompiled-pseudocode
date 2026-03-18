/*
 * XREFs of _NtUserCallHwndOpt@8 @ 0xE81A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     __ChangeWindowMessageFilter@8 @ 0x7FB78 (__ChangeWindowMessageFilter@8.c)
 *     __DeregisterShellHookWindow@4 @ 0x821A4 (__DeregisterShellHookWindow@4.c)
 *     __InitThreadCoreMessagingIocp@4 @ 0x99E68 (__InitThreadCoreMessagingIocp@4.c)
 *     __BeginDeferWindowPos@4 @ 0x9BF2E (__BeginDeferWindowPos@4.c)
 *     __CreateMenu@0 @ 0xA7136 (__CreateMenu@0.c)
 *     _GetClassIcoCur@8 @ 0xA7526 (_GetClassIcoCur@8.c)
 *     _exit_fast_text@24 @ 0xB5608 (_exit_fast_text@24.c)
 *     ?vTransparentCopyS24D32@@YGXPAUBLTINFO@@@Z @ 0xBB1BE (-vTransparentCopyS24D32@@YGXPAUBLTINFO@@@Z.c)
 *     __SetTaskmanWindow@4 @ 0xE81FC (__SetTaskmanWindow@4.c)
 *     _xxxBroadcastImeShowStatusChange@8 @ 0x14F378 (_xxxBroadcastImeShowStatusChange@8.c)
 *     _RemoteShadowStart@8 @ 0x187CE0 (_RemoteShadowStart@8.c)
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

int __stdcall NtUserCallHwndOpt(int a1, int a2)
{
  int v2; // esi
  int v3; // ecx
  int v5; // [esp+0h] [ebp-Ch]
  _BYTE v6[8]; // [esp+4h] [ebp-8h] BYREF

  v2 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v6);
  if ( a1 )
  {
    v3 = ValidateHwnd(a1);
    if ( !v3 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0;
  }
  if ( (unsigned int)(a2 - 92) <= 1 )
    v2 = ((int (__stdcall *)(int, int))funcs_E81DA[a2 - 92])(v3, v5);
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v6);
  UserSessionSwitchLeaveCrit();
  return v2;
}
