/*
 * XREFs of GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_0067f30f54eb0de3635ee7c500c831b5___ @ 0x18000CC94
 * Callers:
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x18000BDA0 (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000DBD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18000DC90 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x18000E214 (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_0067f30f54eb0de3635ee7c500c831b5___(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  const unsigned __int16 **v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // [rsp+20h] [rbp-28h]
  _DWORD v7[2]; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  result = GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v10);
  v3 = v10;
  if ( v10 )
  {
    v4 = *(const unsigned __int16 ***)a1;
    v8 = 0;
    if ( (int)ApplicationViewManagement::CPersistence::_ReadPersistedData(
                (ApplicationViewManagement::CPersistence *)(v10 + 40),
                *v4,
                L"ShowInSwitchers",
                v7,
                0xCu) >= 0 )
    {
      if ( v7[0] == 4 )
      {
        if ( v7[1] == 1397960752 )
        {
          *(_BYTE *)(*(_QWORD *)(a1 + 8) + 216LL) = v8 != 0;
          return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(v3);
        }
        v5 = 62LL;
      }
      else
      {
        v5 = 61LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\Persistence.h",
        (const char *)0x8007000DLL,
        v6);
    }
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(v3);
  }
  return result;
}
