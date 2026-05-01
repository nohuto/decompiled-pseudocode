/*
 * XREFs of ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180024938
 * Callers:
 *     ?GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x180018480 (-GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18001899C (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 *     _lambda_3d44a3ab248d62e96ede4d249d2fb10f_::operator() @ 0x1803D3B6C (_lambda_3d44a3ab248d62e96ede4d249d2fb10f_--operator().c)
 *     ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1803D4CB0 (-PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 *     ?SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@W4SHELL_POSITIONER_TYPE@@2PEAPEAUIUnknown@@@Z @ 0x1803D55A0 (-SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerManager::GetPositionerForMonitor(int a1, IUnknown *a2, const IID *a3, void **a4)
{
  __int64 v7; // rbp
  int v8; // eax
  unsigned int v9; // ebx
  void *v10; // rcx
  HRESULT Service; // eax
  HRESULT v13; // edi
  int v14; // [rsp+20h] [rbp-28h]
  void *v15; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7 = a1;
  v15 = 0LL;
  if ( IUnknown_QueryService(
         a2,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &v15) < 0 )
  {
    Service = IUnknown_QueryService(a2, &c_positionersSIDs + v7, a3, a4);
    v13 = Service;
    if ( Service >= 0 )
      goto LABEL_3;
    v9 = -2147467262;
    if ( Service != -2147467262 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x534,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)Service,
        v14);
      v9 = v13;
    }
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(void *, _QWORD, const IID *, void **))(*(_QWORD *)v15 + 24LL))(
           v15,
           (unsigned int)v7,
           a3,
           a4);
    v9 = v8;
    if ( v8 >= 0 )
    {
LABEL_3:
      v9 = 0;
      goto LABEL_4;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52C,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v8,
      v14);
  }
LABEL_4:
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v9;
}
