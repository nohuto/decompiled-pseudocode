/*
 * XREFs of ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x180139274
 * Callers:
 *     ?RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@@Z @ 0x180139200 (-RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@.c)
 *     ?RequestViewHitTestSync@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAI@Z @ 0x180139370 (-RequestViewHitTestSync@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAI@Z.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180004B28 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180011654 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@@Z @ 0x180048774 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F10E8 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x180148EAC (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::RequestViewHitTestHelper(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rcx
  int ViewInstanceIdFromInputSiteList; // ebx
  int v7; // edi
  struct InputSiteManager *InputSiteManager; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v12; // [rsp+20h] [rbp-E0h]
  _BYTE v13[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v14[3]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h]
  __int128 v16[9]; // [rsp+B0h] [rbp-50h] BYREF

  v12 = *(_QWORD *)(a2 + 8);
  v5 = *(unsigned int *)(a2 + 20);
  ViewInstanceIdFromInputSiteList = 0;
  if ( (_DWORD)v5 )
    v7 = HitTestHelper::ConvertInputTypeToPointerType(v5, a2);
  else
    v7 = 0;
  memset_0((char *)v16 + 12, 0, 0x7CuLL);
  *(_QWORD *)((char *)v16 + 4) = v12;
  LODWORD(v16[0]) = v7;
  InputSiteManager = ISMStatics::GetInputSiteManager();
  HitTestHelper::HitTestRequestWithRetry(
    (__int64)v13,
    v16,
    *(__int64 (__fastcall ****)(_QWORD, __int128 *))(a1 + 184),
    (__int64)InputSiteManager);
  if ( v13[0] )
    ViewInstanceIdFromInputSiteList = InputSiteManager::GetViewInstanceIdFromInputSiteList(v14);
  *a3 = ViewInstanceIdFromInputSiteList;
  if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v15);
  return std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v14, v9, v10);
}
