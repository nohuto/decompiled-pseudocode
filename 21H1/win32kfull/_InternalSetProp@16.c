/*
 * XREFs of _InternalSetProp@16 @ 0xB4FE8
 * Callers:
 *     ?SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z @ 0x20C0E (-SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z.c)
 *     _SetWindowCompositionInfo@8 @ 0x2550C (_SetWindowCompositionInfo@8.c)
 *     _xxxInheritWindowMonitor@12 @ 0x26E0E (_xxxInheritWindowMonitor@12.c)
 *     _FeedbackSetWindowSetting@12 @ 0xA26BC (_FeedbackSetWindowSetting@12.c)
 *     __SetTargetingWindowValue@8 @ 0xB3A30 (__SetTargetingWindowValue@8.c)
 *     _CkptRestore@8 @ 0xB487A (_CkptRestore@8.c)
 *     ?SetProp@CWindowProp@@QAEHPAUtagWND@@@Z @ 0xB4F1C (-SetProp@CWindowProp@@QAEHPAUtagWND@@@Z.c)
 *     _NtUserSetProp@12 @ 0xB4F74 (_NtUserSetProp@12.c)
 *     ?SetGhostProp@@YGHPAUtagWND@@PAUHWND__@@@Z @ 0xC229C (-SetGhostProp@@YGHPAUtagWND@@PAUHWND__@@@Z.c)
 *     ?SetRedrawProp@@YGXPAUtagWND@@H@Z @ 0xC3DF4 (-SetRedrawProp@@YGXPAUtagWND@@H@Z.c)
 *     _xxxFlashWindow@12 @ 0xCA4EE (_xxxFlashWindow@12.c)
 *     _NtUserShutdownBlockReasonCreate@12 @ 0xD33A8 (_NtUserShutdownBlockReasonCreate@12.c)
 *     _NtUserSetBrokeredForeground@4 @ 0xE7570 (_NtUserSetBrokeredForeground@4.c)
 *     _FeedbackClearWindowSetting@8 @ 0x148D82 (_FeedbackClearWindowSetting@8.c)
 *     __SetTouchWindowFlags@8 @ 0x14A05E (__SetTouchWindowFlags@8.c)
 *     ?SetMiPWindowFlags@@YGXPAUtagWND@@K@Z @ 0x14DB58 (-SetMiPWindowFlags@@YGXPAUtagWND@@K@Z.c)
 *     _PostMousePointerLeaveAndCleanup@8 @ 0x14E54F (_PostMousePointerLeaveAndCleanup@8.c)
 *     _UserAssociateHwnd@8 @ 0x154249 (_UserAssociateHwnd@8.c)
 *     _NtUserSetAppImeLevel@8 @ 0x168730 (_NtUserSetAppImeLevel@8.c)
 *     _NtUserfnDDEINIT@28 @ 0x16B532 (_NtUserfnDDEINIT@28.c)
 *     ?SetFrostProp@@YGHPAUtagWND@@PAUHWND__@@@Z @ 0x16FC1D (-SetFrostProp@@YGHPAUtagWND@@PAUHWND__@@@Z.c)
 *     ?AddConvProp@@YGHPAUtagWND@@0KPAUtagDDECONV@@1@Z @ 0x17E7D5 (-AddConvProp@@YGHPAUtagWND@@0KPAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YGPAUtagDDECONV@@PAU1@@Z @ 0x17ECA6 (-UnlinkConv@@YGPAUtagDDECONV@@PAU1@@Z.c)
 *     _SetDisplayAffinity@8 @ 0x1A5988 (_SetDisplayAffinity@8.c)
 * Callees:
 *     _UserGetGlobalAtomTableOfWindow@4 @ 0xB50D8 (_UserGetGlobalAtomTableOfWindow@4.c)
 *     _SetSharedPropForFilteredProcesses@12 @ 0xC36AE (_SetSharedPropForFilteredProcesses@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall InternalSetProp(int a1, int a2, int a3, int a4)
{
  int v6; // ecx
  __int16 AtomFromAtomTable; // ax
  int v8; // edi
  int result; // eax
  int DLT; // eax
  int GlobalAtomTableOfWindow; // eax
  int v12; // esi
  int v13; // [esp+Ch] [ebp-24h]
  struct _KAPC_STATE ApcState; // [esp+14h] [ebp-1Ch] BYREF

  v6 = a3;
  v13 = a1 + 80;
  AtomFromAtomTable = word_273898;
  if ( !word_273898 )
  {
    DLT = DLT_JOB::getDLT();
    GetDomainLockRef(DLT);
    GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(a1);
    if ( GlobalAtomTableOfWindow )
    {
      AtomFromAtomTable = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"Microsoft.Windows.WindowFactory.ViewId");
      word_273898 = AtomFromAtomTable;
    }
    else
    {
      AtomFromAtomTable = word_273898;
    }
    v6 = a3;
  }
  if ( (a4 & 1) != 0 )
    goto LABEL_5;
  if ( (_WORD)a2 == AtomFromAtomTable )
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 20) + 200) = v6;
    goto LABEL_5;
  }
  if ( (*(_BYTE *)(a1 + 200) & 0x40) == 0 )
  {
LABEL_5:
    v8 = a3;
    return RealInternalSetProp(v13, a2, v8, a4);
  }
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(**(PRKPROCESS **)(*(_DWORD *)(a1 + 8) + 232), &ApcState);
  v8 = a3;
  v12 = SetSharedPropForFilteredProcesses(a3);
  KeUnstackDetachProcess(&ApcState);
  result = 1;
  if ( v12 != 1 )
    return RealInternalSetProp(v13, a2, v8, a4);
  return result;
}
