/*
 * XREFs of ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x1804748CC
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180015594 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x180473DC0 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180046354 (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x180474BB4 (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::OnViewDestroyedBase(CSingleViewShellExperience *this)
{
  int v2; // eax
  unsigned int v3; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  CSingleViewShellExperience::UnboostPriority((__int64)this, 0);
  CSingleViewShellExperience::UnboostPriority((__int64)this, 1);
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, CSingleViewShellExperience *))(**((_QWORD **)this + 11) + 8LL))(
         *((_QWORD *)this + 11),
         this);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23C,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v2);
  CSingleViewShellExperience::ResetViews(this);
  return v3;
}
