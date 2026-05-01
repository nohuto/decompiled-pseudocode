/*
 * XREFs of ?GetAppId@CDragVisual@@UEAAJPEAPEAG@Z @ 0x180401E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x18040214C (-GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall CDragVisual::GetAppId(AppLayoutHelpers **this, unsigned __int16 **a2)
{
  struct IApplicationView **v4; // r8
  int SingleViewFromLayout; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  SingleViewFromLayout = AppLayoutHelpers::GetSingleViewFromLayout(this[8], (struct IAppLayout *)&v10, v4);
  v6 = SingleViewFromLayout;
  if ( SingleViewFromLayout < 0 )
  {
    v7 = 903LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
      (const char *)(unsigned int)SingleViewFromLayout);
    goto LABEL_6;
  }
  SingleViewFromLayout = (*(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v10 + 136LL))(v10, a2);
  v6 = SingleViewFromLayout;
  if ( SingleViewFromLayout < 0 )
  {
    v7 = 904LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v6;
}
