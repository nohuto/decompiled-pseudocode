/*
 * XREFs of InternalSetProp @ 0x1C002481C
 * Callers:
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0003DF0 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0021474 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     SetWindowCompositionInfo @ 0x1C0021614 (SetWindowCompositionInfo.c)
 *     FeedbackSetWindowSetting @ 0x1C0024798 (FeedbackSetWindowSetting.c)
 *     CkptRestore @ 0x1C00256D4 (CkptRestore.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0027814 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C006B23C (xxxInheritWindowMonitor.c)
 *     NtUserSetBrokeredForeground @ 0x1C00BF7B0 (NtUserSetBrokeredForeground.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C00F77AC (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 *     xxxFlashWindow @ 0x1C0113948 (xxxFlashWindow.c)
 *     _SetTargetingWindowValue @ 0x1C011508C (_SetTargetingWindowValue.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C011B2C0 (NtUserShutdownBlockReasonCreate.c)
 *     FeedbackClearWindowSetting @ 0x1C01DB5D0 (FeedbackClearWindowSetting.c)
 *     _SetTouchWindowFlags @ 0x1C01DD2A4 (_SetTouchWindowFlags.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01E1808 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     UserAssociateHwnd @ 0x1C01E8F1C (UserAssociateHwnd.c)
 *     NtUserSetAppImeLevel @ 0x1C0201F70 (NtUserSetAppImeLevel.c)
 *     NtUserfnDDEINIT @ 0x1C02055D0 (NtUserfnDDEINIT.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C020A838 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C021B358 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021BB78 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     SetDisplayAffinity @ 0x1C0249130 (SetDisplayAffinity.c)
 * Callees:
 *     SetSharedPropForFilteredProcesses @ 0x1C000332C (SetSharedPropForFilteredProcesses.c)
 *     UserGetGlobalAtomTableOfWindow @ 0x1C00F79E8 (UserGetGlobalAtomTableOfWindow.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall InternalSetProp(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int16 AtomFromAtomTable; // ax
  __int64 v5; // r15
  unsigned int v10; // edi
  unsigned int DLT; // eax
  __int64 GlobalAtomTableOfWindow; // rax
  __int64 v14; // rax
  int v15; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF

  AtomFromAtomTable = word_1C033AF24;
  v5 = a1 + 144;
  if ( !word_1C033AF24 )
  {
    DLT = DLT_JOB::getDLT();
    GetDomainLockRef(DLT);
    GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(a1);
    if ( GlobalAtomTableOfWindow )
    {
      AtomFromAtomTable = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"Microsoft.Windows.WindowFactory.ViewId");
      word_1C033AF24 = AtomFromAtomTable;
    }
    else
    {
      AtomFromAtomTable = word_1C033AF24;
    }
  }
  v10 = 1;
  if ( (a4 & 1) != 0 )
    return (unsigned int)RealInternalSetProp(v5, a2, a3, a4);
  if ( (_WORD)a2 == AtomFromAtomTable )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = a3;
    return (unsigned int)RealInternalSetProp(v5, a2, a3, a4);
  }
  if ( (*(_DWORD *)(a1 + 328) & 0x40) == 0 )
    return (unsigned int)RealInternalSetProp(v5, a2, a3, a4);
  v14 = *(_QWORD *)(a1 + 16);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(**(PRKPROCESS **)(v14 + 416), &ApcState);
  v15 = SetSharedPropForFilteredProcesses(a1, a2, a3);
  KeUnstackDetachProcess(&ApcState);
  if ( v15 != 1 )
    return (unsigned int)RealInternalSetProp(v5, a2, a3, a4);
  return v10;
}
