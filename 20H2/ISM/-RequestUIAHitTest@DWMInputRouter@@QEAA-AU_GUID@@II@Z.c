/*
 * XREFs of ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x180138F80
 * Callers:
 *     ?RequestUIAHitTest@UIAHitTestServer@@MEAAJPEAVBamoUIAHitTestStub@@II@Z @ 0x180187680 (-RequestUIAHitTest@UIAHitTestServer@@MEAAJPEAVBamoUIAHitTestStub@@II@Z.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180004B28 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180011654 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@@Z @ 0x180048774 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIUIAHitTestInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIUIAHitTestInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F1D54 (--$As@UIUIAHitTestInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXIIU_GUID@@@Z @ 0x180139100 (-RequestUIAHitTest@UIAHitTest@InputETW@@SAXIIU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
struct _GUID *__fastcall DWMInputRouter::RequestUIAHitTest(
        DWMInputRouter *this,
        struct _GUID *__return_ptr retstr,
        unsigned int a3,
        unsigned int a4)
{
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *i; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // rdx
  struct _GUID v17; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v18[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v19[3]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h]
  __int128 v21[9]; // [rsp+B0h] [rbp-50h] BYREF

  *retstr = GUID_NULL;
  *(_QWORD *)&v17.Data1 = __PAIR64__(a4, a3);
  memset_0((char *)v21 + 12, 0, 0x7CuLL);
  *(_QWORD *)((char *)v21 + 4) = *(_QWORD *)&v17.Data1;
  LODWORD(v21[0]) = 0;
  InputSiteManager = ISMStatics::GetInputSiteManager();
  HitTestHelper::HitTestRequestWithRetry(
    (__int64)v18,
    v21,
    *((__int64 (__fastcall ****)(_QWORD, __int128 *))this + 23),
    (__int64)InputSiteManager);
  for ( i = (__int64 *)v19[0]; i != (__int64 *)v19[1]; ++i )
  {
    v10 = *i;
    v11 = 0LL;
    *(_QWORD *)&v17.Data1 = 0LL;
    v12 = *(_QWORD *)(v10 + 400);
    v13 = *(_QWORD *)(v10 + 408);
    if ( v12 != v13 )
    {
      do
      {
        if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IUIAHitTestInputObjectProxy>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v12 + 8),
                    (__int64 *)&v17) >= 0 )
          break;
        v12 += 16LL;
      }
      while ( v12 != v13 );
      v11 = *(_QWORD *)&v17.Data1;
    }
    if ( v11 )
    {
      *retstr = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v17);
      break;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v17);
  }
  v17 = *retstr;
  InputETW::UIAHitTest::RequestUIAHitTest(a3, a4, &v17);
  v15 = v20 - 1;
  if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v20);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v19, v15, v14);
  return retstr;
}
