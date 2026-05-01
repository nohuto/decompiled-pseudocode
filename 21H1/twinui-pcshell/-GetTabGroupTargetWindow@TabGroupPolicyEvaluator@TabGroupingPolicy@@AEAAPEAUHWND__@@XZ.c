/*
 * XREFs of ?GetTabGroupTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ @ 0x180261340
 * Callers:
 *     _lambda_221251db4cf3622556bc46ff7d89c93b_::operator() @ 0x18026050C (_lambda_221251db4cf3622556bc46ff7d89c93b_--operator().c)
 *     ?ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplicationViewCollection@@@Z @ 0x180260A48 (-ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplication.c)
 * Callees:
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18002AD50 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002F5AC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?GetTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ @ 0x180261478 (-GetTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ.c)
 */

HWND __fastcall TabGroupingPolicy::TabGroupPolicyEvaluator::GetTabGroupTargetWindow(
        TabGroupingPolicy::TabGroupPolicyEvaluator *this,
        __int64 a2,
        unsigned int a3)
{
  HWND *v4; // rbx
  HWND TargetWindow; // rax
  HRESULT WindowAttribute; // eax
  HWND result; // rax
  HWND v8; // rcx
  HSTRING_HEADER *v9; // rax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // r8
  HSTRING_HEADER *v11; // rax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // r8
  unsigned int v13; // r8d
  HSTRING_HEADER *v14; // rax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // r8
  int v16; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v17; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v16 = 0;
  v4 = (HWND *)((char *)this + 56);
  if ( !*((_QWORD *)this + 7) )
  {
    TargetWindow = TabGroupingPolicy::TabGroupPolicyEvaluator::GetTargetWindow(this);
    if ( TargetWindow )
    {
      WindowAttribute = DwmGetWindowAttribute(TargetWindow, 0x12u, v4, 8u);
      if ( WindowAttribute < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3A,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
          (const char *)(unsigned int)WindowAttribute);
    }
  }
  result = *v4;
  if ( *(_QWORD *)this )
  {
    v8 = *v4;
    if ( !result )
    {
      v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, (const WCHAR **)off_1804AAC28, a3);
      Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this,
        (__int64)v9[1].Reserved.Reserved1,
        v10,
        &v16);
      result = (HWND)v16;
      *v4 = (HWND)v16;
      v8 = result;
    }
    if ( !v8 )
    {
      v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, (const WCHAR **)off_1804AAC20, a3);
      Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this,
        (__int64)v11[1].Reserved.Reserved1,
        v12,
        &v16);
      result = (HWND)v16;
      *v4 = (HWND)v16;
      if ( !result )
      {
        v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, (const WCHAR **)off_1804AAC10, v13);
        Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this,
          (__int64)v14[1].Reserved.Reserved1,
          v15,
          &v16);
        result = (HWND)v16;
        *v4 = (HWND)v16;
      }
    }
  }
  return result;
}
