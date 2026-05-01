/*
 * XREFs of ?ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU2@@Z @ 0x1803D0EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x18002B904 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@PEAUIUnknown@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitor@@@Details@WRL@Microsoft@@YAJPEAPEAVSizeConversionViewInfo@@$$QEAPEAUIUnknown@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitor@@@Z @ 0x1803CFEC0 (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@PEAUIUnknown@@AEAPEAUIApplicationView@@AEAPEAUI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowSizeConverter::ConvertForMonitorAndView(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        struct IImmersiveMonitor *a3,
        struct IApplicationView *a4,
        struct tagSIZE *a5)
{
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  IUnknown *v11; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct SizeConversionViewInfo *v13; // [rsp+50h] [rbp+8h] BYREF
  struct IImmersiveMonitor *v14; // [rsp+60h] [rbp+18h] BYREF
  struct IApplicationView *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = a4;
  v14 = a3;
  v13 = 0LL;
  v11 = (IUnknown *)*((_QWORD *)this - 9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IUnknown *,IApplicationView * &,IImmersiveMonitor * &>(
         &v13,
         &v11,
         &v15,
         &v14);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = WindowSizeConverter::ConvertWithViewInfo((WindowSizeConverter *)((char *)this - 88), a2, v13, a5);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v9 = 288LL;
  }
  else
  {
    v9 = 287LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v7);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return v8;
}
