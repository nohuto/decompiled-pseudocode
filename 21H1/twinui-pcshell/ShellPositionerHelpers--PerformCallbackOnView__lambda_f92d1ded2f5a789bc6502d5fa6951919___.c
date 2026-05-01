/*
 * XREFs of ShellPositionerHelpers::PerformCallbackOnView__lambda_f92d1ded2f5a789bc6502d5fa6951919___ @ 0x18000B904
 * Callers:
 *     ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000AFD0 (-GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_f92d1ded2f5a789bc6502d5fa6951919_____lambda_f92d1ded2f5a789bc6502d5fa6951919___ @ 0x18000B064 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_f.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180069E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellPositionerHelpers::PerformCallbackOnView__lambda_f92d1ded2f5a789bc6502d5fa6951919___(
        IUnknown *punk,
        __int64 a2,
        _OWORD *a3)
{
  HRESULT v6; // eax
  int v7; // edi
  void *v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  void *ppvOut; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
  v6 = IUnknown_QueryService(
         punk,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &ppvOut);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (unsigned int)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)v6,
      (int)ppvOut);
  }
  else
  {
    v15 = 0LL;
    v8 = ppvOut;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v9 = (*(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, a2, &v15);
    v7 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (unsigned int)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
        (const char *)(unsigned int)v9,
        (int)ppvOut);
    }
    else
    {
      Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_f92d1ded2f5a789bc6502d5fa6951919_____lambda_f92d1ded2f5a789bc6502d5fa6951919___(
        &v13,
        a3);
      v10 = v13;
      if ( v13 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 24LL))(v15, v13);
        if ( v7 >= 0 )
          v7 = 0;
      }
      else
      {
        v7 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x57,
          (unsigned int)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
          (const char *)0x8007000ELL,
          (int)ppvOut);
      }
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(v10);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
  return (unsigned int)v7;
}
