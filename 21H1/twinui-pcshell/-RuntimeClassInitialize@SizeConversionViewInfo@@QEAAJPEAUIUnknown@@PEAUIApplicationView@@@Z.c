/*
 * XREFs of ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x1803B1700
 * Callers:
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@PEAUIUnknown@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVSizeConversionViewInfo@@$$QEAPEAUIUnknown@@AEAPEAUIApplicationView@@@Z @ 0x1803AF654 (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@PEAUIUnknown@@AEAPEAUIApplicationView@@@Details.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetAppDataForView@SizeConversionViewInfo@@AEAAJPEAUIApplicationView@@@Z @ 0x1803B0B8C (-GetAppDataForView@SizeConversionViewInfo@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetPositionerDataForView@SizeConversionViewInfo@@AEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x1803B14FC (-GetPositionerDataForView@SizeConversionViewInfo@@AEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall SizeConversionViewInfo::RuntimeClassInitialize(
        SizeConversionViewInfo *this,
        IUnknown *punk,
        __int64 (__fastcall ***a3)(struct IApplicationView *, GUID *, __int64 *))
{
  __int64 (__fastcall *v6)(struct IApplicationView *, GUID *, __int64 *); // rdi
  int AppDataForView; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (*a3)[10];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
  AppDataForView = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *), char *))v6)(
                     a3,
                     (char *)this + 16);
  if ( AppDataForView < 0 )
  {
    v8 = 21LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)AppDataForView);
    return (unsigned int)AppDataForView;
  }
  AppDataForView = SizeConversionViewInfo::GetAppDataForView(this, a3);
  if ( AppDataForView < 0 )
  {
    v8 = 22LL;
    goto LABEL_3;
  }
  AppDataForView = SizeConversionViewInfo::GetPositionerDataForView(this, punk, (struct IApplicationView *)a3);
  if ( AppDataForView < 0 )
  {
    v8 = 23LL;
    goto LABEL_3;
  }
  return 0LL;
}
