/*
 * XREFs of ?CreateReverseAppToAppSwitchLayoutOperation@ScreenManagerHelpers@@YAJPEAUITabletModePositioner@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x1803E2E64
 * Callers:
 *     ?GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x1803E3050 (-GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ScreenManagerHelpers::CreateReverseAppToAppSwitchLayoutOperation(
        ScreenManagerHelpers *this,
        struct ITabletModePositioner *a2,
        struct IApplicationView *a3,
        __int64 a4)
{
  unsigned int v5; // esi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v5 = (unsigned __int8)a3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v8 = (*(__int64 (__fastcall **)(ScreenManagerHelpers *, GUID *, GUID *, __int64 *))(*(_QWORD *)this + 80LL))(
         this,
         &CLSID_AppSwitchOperation,
         &GUID_b3b709e2_bf68_4d75_b725_6b7d34fa01d3,
         &v13);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, struct ITabletModePositioner *, _QWORD))(*(_QWORD *)v13 + 64LL))(
           v13,
           a2,
           v5);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v13)(
             v13,
             &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
             a4);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v9 = 0;
        goto LABEL_9;
      }
      v10 = 67LL;
    }
    else
    {
      v10 = 66LL;
    }
  }
  else
  {
    v10 = 65LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v9;
}
