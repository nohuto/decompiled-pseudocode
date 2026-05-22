/*
 * XREFs of ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801387D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180004B38 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180011654 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x18001719C (--1HitTestResult@@QEAA@XZ.c)
 *     ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x1800181B0 (-GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180018648 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x180033720 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@@Z @ 0x180048DD4 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F1638 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ??$make_unique@UHitTestResult@@U1@$0A@@std@@YA?AV?$unique_ptr@UHitTestResult@@U?$default_delete@UHitTestResult@@@std@@@0@$$QEAUHitTestResult@@@Z @ 0x1801378CC (--$make_unique@UHitTestResult@@U1@$0A@@std@@YA-AV-$unique_ptr@UHitTestResult@@U-$default_delete@.c)
 *     ??4?$unique_ptr@UHitTestResult@@U?$default_delete@UHitTestResult@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180137FE0 (--4-$unique_ptr@UHitTestResult@@U-$default_delete@UHitTestResult@@@std@@@std@@QEAAAEAV01@$$QEAV0.c)
 *     ?OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@UtagPOINT@@@Z @ 0x180138D90 (-OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@UtagPOINT@@@Z.c)
 *     ?BuildRequestForHitTestInfo@HitTestHelper@@SA?AUHitTestRequest@1@PEAUHitTestInfo@@@Z @ 0x180149334 (-BuildRequestForHitTestInfo@HitTestHelper@@SA-AUHitTestRequest@1@PEAUHitTestInfo@@@Z.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180149894 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::HitTest(
        DWMInputRouter *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct IInputTarget *a4,
        struct IInputTarget **a5)
{
  struct InputSiteManager *InputSiteManager; // rax
  unsigned int ViewInstanceIdFromInputSiteList; // eax
  __int64 *InitialTargetFromHitTestResult; // rax
  __int64 *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  HitTestResult *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  HitTestResult *v20[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v21[9]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v23[3]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  if ( a5 )
  {
    HitTestHelper::BuildRequestForHitTestInfo(v21);
    InputSiteManager = ISMStatics::GetInputSiteManager();
    HitTestHelper::HitTestRequestWithRetry(
      (__int64)&v22,
      v21,
      *((__int64 (__fastcall ****)(_QWORD, __int128 *))this + 23),
      (__int64)InputSiteManager);
    if ( (*((_BYTE *)a2 + 32) & 4) != 0 )
    {
      ViewInstanceIdFromInputSiteList = InputSiteManager::GetViewInstanceIdFromInputSiteList(v23);
      DWMInputRouter::OnPointerInputDown(
        this,
        ViewInstanceIdFromInputSiteList,
        *((unsigned int *)a2 + 1),
        *(unsigned int *)a2,
        *(_QWORD *)((char *)a2 + 44));
    }
    InitialTargetFromHitTestResult = DWMInputRouter::GetInitialTargetFromHitTestResult(
                                       (__int64)this,
                                       (__int64 *)v20,
                                       *(_DWORD *)a2,
                                       &v22,
                                       (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a4);
    Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)a3 + 2, InitialTargetFromHitTestResult);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v20);
    v13 = std::make_unique<HitTestResult,HitTestResult,0>((__int64 *)v20, (__int64)&v22);
    std::unique_ptr<HitTestResult>::operator=((_QWORD **)a3 + 22, v13, v14);
    v17 = v20[0];
    if ( v20[0] )
    {
      HitTestResult::~HitTestResult(v20[0], v15, v16);
      operator delete(v17, (const struct std::nothrow_t *)0x78);
    }
    if ( ContextualProcessorManager::OnHitTest(*((ContextualProcessorManager **)this + 32), a2, a3, 0LL, a5, 0LL) < 0 )
    {
      Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef((__int64 *)a3 + 2);
      *a5 = (struct IInputTarget *)*((_QWORD *)a3 + 2);
    }
    if ( (unsigned __int64)(v24 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink(v24);
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v23, v18, v19);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x492,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
