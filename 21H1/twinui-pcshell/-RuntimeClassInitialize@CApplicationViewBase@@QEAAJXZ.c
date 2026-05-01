/*
 * XREFs of ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x18000CD9C
 * Callers:
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x18000AB2C (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x18000BDA0 (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000DBD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18000DC90 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x18000E214 (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::RuntimeClassInitialize(CApplicationViewBase *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  int PersistedData; // eax
  __int128 v6; // xmm0
  __int64 v8; // rdx
  unsigned int v9; // [rsp+20h] [rbp-50h]
  unsigned int v10; // [rsp+20h] [rbp-50h]
  LPVOID pv[3]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v12[24]; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v2 = (*(__int64 (__fastcall **)(char *, LPVOID *))(*((_QWORD *)this + 2) + 32LL))((char *)this + 16, pv);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)v2,
      v9);
    goto LABEL_11;
  }
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(v12);
  v4 = *(_QWORD *)v12;
  if ( *(_QWORD *)v12 )
  {
    PersistedData = ApplicationViewManagement::CPersistence::_ReadPersistedData(
                      (ApplicationViewManagement::CPersistence *)(*(_QWORD *)v12 + 40LL),
                      (const unsigned __int16 *)pv[0],
                      L"VirtualDesktop",
                      v12,
                      0x18u);
    if ( PersistedData < 0 )
    {
      v6 = *(_OWORD *)v12;
      goto LABEL_5;
    }
    if ( *(_DWORD *)v12 == 16 )
    {
      if ( *(_DWORD *)&v12[4] == 1447309360 )
      {
        v6 = *(_OWORD *)&v12[8];
        PersistedData = 0;
LABEL_5:
        if ( PersistedData >= 0 )
          *((_OWORD *)this + 7) = v6;
        goto LABEL_7;
      }
      v8 = 62LL;
    }
    else
    {
      v8 = 61LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\Persistence.h",
      (const char *)0x8007000DLL,
      v10);
LABEL_7:
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(v4);
  }
  if ( (unsigned int)EdpGetIsManaged() )
    *((_BYTE *)this + 56) = 1;
  v3 = 0;
LABEL_11:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v3;
}
