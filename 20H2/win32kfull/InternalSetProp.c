/*
 * XREFs of InternalSetProp @ 0x1C00C7238
 * Callers:
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0003C90 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     xxxFlashWindow @ 0x1C0019218 (xxxFlashWindow.c)
 *     CkptRestore @ 0x1C003A9C0 (CkptRestore.c)
 *     xxxInheritWindowMonitor @ 0x1C004A0B0 (xxxInheritWindowMonitor.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0090CAC (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00C6FCC (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     FeedbackSetWindowSetting @ 0x1C00C71B4 (FeedbackSetWindowSetting.c)
 *     SetWindowCompositionInfo @ 0x1C00C8264 (SetWindowCompositionInfo.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C00F3278 (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 *     _SetTargetingWindowValue @ 0x1C011661C (_SetTargetingWindowValue.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C011BCB0 (NtUserShutdownBlockReasonCreate.c)
 *     NtUserSetBrokeredForeground @ 0x1C0128E40 (NtUserSetBrokeredForeground.c)
 *     FeedbackClearWindowSetting @ 0x1C01DA910 (FeedbackClearWindowSetting.c)
 *     _SetTouchWindowFlags @ 0x1C01DC5E4 (_SetTouchWindowFlags.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01E0B48 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     UserAssociateHwnd @ 0x1C01E825C (UserAssociateHwnd.c)
 *     NtUserSetAppImeLevel @ 0x1C0201100 (NtUserSetAppImeLevel.c)
 *     NtUserfnDDEINIT @ 0x1C0204760 (NtUserfnDDEINIT.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C02099B8 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C021A4C8 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021ACE8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     SetDisplayAffinity @ 0x1C0247B80 (SetDisplayAffinity.c)
 * Callees:
 *     SetSharedPropForFilteredProcesses @ 0x1C00031CC (SetSharedPropForFilteredProcesses.c)
 *     UserGetGlobalAtomTableOfWindow @ 0x1C00F34B8 (UserGetGlobalAtomTableOfWindow.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
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

  AtomFromAtomTable = word_1C0339F54;
  v5 = a1 + 144;
  if ( !word_1C0339F54 )
  {
    DLT = DLT_JOB::getDLT();
    GetDomainLockRef(DLT);
    GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(a1);
    if ( GlobalAtomTableOfWindow )
    {
      AtomFromAtomTable = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"Microsoft.Windows.WindowFactory.ViewId");
      word_1C0339F54 = AtomFromAtomTable;
    }
    else
    {
      AtomFromAtomTable = word_1C0339F54;
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
  KeStackAttachProcess(**(PRKPROCESS **)(v14 + 424), &ApcState);
  v15 = SetSharedPropForFilteredProcesses(a1, a2, a3);
  KeUnstackDetachProcess(&ApcState);
  if ( v15 != 1 )
    return (unsigned int)RealInternalSetProp(v5, a2, a3, a4);
  return v10;
}
