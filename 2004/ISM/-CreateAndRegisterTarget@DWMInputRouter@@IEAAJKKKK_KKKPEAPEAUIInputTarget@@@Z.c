/*
 * XREFs of ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x180018400
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180017EB0 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18002A640 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800B8DF0 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@DWMLegacyInputTarget@@SAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x1800184D0 (-Create@DWMLegacyInputTarget@@SAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 *     ?GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z @ 0x180018620 (-GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z.c)
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z @ 0x180028314 (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x180033780 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::CreateAndRegisterTarget(
        DWMInputRouter *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int a7,
        unsigned int a8,
        struct IInputTarget **a9)
{
  struct IInputTarget *InputHostTargetForProcessId; // rbx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rdx
  int v17; // [rsp+20h] [rbp-38h]
  __int64 v18[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  InputHostTargetForProcessId = DWMInputRouter::GetInputHostTargetForProcessId(this, a2);
  v18[0] = (__int64)InputHostTargetForProcessId;
  Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef(v18);
  if ( InputHostTargetForProcessId )
  {
    v13 = DWMFocusedInputTarget::Create(InputHostTargetForProcessId, a3, a4, a5, a6, a7, a8, a9);
    v14 = retaddr;
    if ( v13 >= 0 )
      goto LABEL_5;
    v15 = 936LL;
    goto LABEL_4;
  }
  v13 = DWMLegacyInputTarget::Create(a2, a3, a4, a5, a6, a7, a8, a9);
  v14 = retaddr;
  if ( v13 < 0 )
  {
    v15 = 948LL;
LABEL_4:
    wil::details::in1diag3::_Log_Hr(
      v14,
      (void *)v15,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v13,
      v17);
  }
LABEL_5:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
  return 0LL;
}
