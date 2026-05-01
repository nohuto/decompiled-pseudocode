/*
 * XREFs of ?VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z @ 0x1803491D0
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x18033E030 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ??$_Try_emplace@AEBI$$V@?$unordered_map@IUViewState@KeyboardHosting@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1803461F4 (--$_Try_emplace@AEBI$$V@-$unordered_map@IUViewState@KeyboardHosting@@U-$hash@I@std@@U-$equal_to@.c)
 *     ??$_Try_emplace@AEBI$$V@?$unordered_map@I_NU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBI_N@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1803462D4 (--$_Try_emplace@AEBI$$V@-$unordered_map@I_NU-$hash@I@std@@U-$equal_to@I@2@V-$allocator@U-$pair@$.c)
 *     ?IsHidingAnimationRunning@TabTipAdapterPolicy@KeyboardHosting@@QEBA_NI@Z @ 0x180347DAC (-IsHidingAnimationRunning@TabTipAdapterPolicy@KeyboardHosting@@QEBA_NI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedHide(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // ebx
  _QWORD v9[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v10[64]; // [rsp+30h] [rbp-40h] BYREF
  RTL_SRWLOCK *v11; // [rsp+80h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+88h] [rbp+18h] BYREF

  v12 = a2;
  *a4 = 1;
  *((_BYTE *)this + 448) = 0;
  v5 = (RTL_SRWLOCK *)((char *)this + 440);
  AcquireSRWLockExclusive((PSRWLOCK)this + 55);
  v11 = v5;
  v10[0] = 0;
  memset(&v10[4], 0, 60);
  std::unordered_map<unsigned int,KeyboardHosting::ViewState>::_Try_emplace<unsigned int const &,>(
    (__int64)this + 376,
    (__int64)v9,
    &v12);
  v6 = v9[0];
  *(_OWORD *)(v9[0] + 20LL) = *(_OWORD *)v10;
  *(_OWORD *)(v6 + 36) = *(_OWORD *)&v10[16];
  *(_OWORD *)(v6 + 52) = *(_OWORD *)&v10[32];
  *(_OWORD *)(v6 + 68) = *(_OWORD *)&v10[48];
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v7 = v12;
  if ( KeyboardHosting::TabTipAdapterPolicy::IsHidingAnimationRunning(this, v12) )
  {
    LODWORD(v11) = v7;
    std::unordered_map<unsigned int,bool>::_Try_emplace<unsigned int const &,>(
      (__int64)this + 528,
      (__int64)v9,
      (const unsigned __int8 *)&v11);
    *(_BYTE *)(v9[0] + 20LL) = 0;
  }
  return 0LL;
}
