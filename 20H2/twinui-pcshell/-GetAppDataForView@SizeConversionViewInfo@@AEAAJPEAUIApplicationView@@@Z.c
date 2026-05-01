/*
 * XREFs of ?GetAppDataForView@SizeConversionViewInfo@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D132C
 * Callers:
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x1803D1EA0 (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z.c)
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1803D1F5C (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIIm.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?GetScaleFactorForWindow@@YAJPEAUHWND__@@PEAI@Z @ 0x180189CCC (-GetScaleFactorForWindow@@YAJPEAUHWND__@@PEAI@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SizeConversionViewInfo::GetAppDataForView(
        SizeConversionViewInfo *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  __int64 (__fastcall *v4)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rbx
  int (__fastcall *v13)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64, GUID *, __int64 *); // rdi
  int ScaleFactorForWindow; // eax
  __int64 v17; // rdx
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  HWND v21[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v23; // [rsp+88h] [rbp+38h] BYREF
  int v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF

  v20 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  v5 = v4((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v20);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v19 = 0LL;
    v7 = v20;
    v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v9 = v8(v7, &v19);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 82LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v9);
LABEL_25:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      goto LABEL_26;
    }
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 368LL))(v19, &v23);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 86LL;
      goto LABEL_9;
    }
    v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *), int *))(*a2)[51])(
           a2,
           &v24);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 92LL;
      goto LABEL_9;
    }
    v11 = v23;
    if ( v24 )
      v11 = 0;
    v23 = v11;
    if ( v11 )
      *((_DWORD *)this + 6) |= 2u;
    v25 = 0LL;
    v12 = v19;
    v13 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v19 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    if ( v13(v12, 0LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v25) < 0
      || (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v25 + 32LL))(v25, v21) < 0 )
    {
      v14 = v19;
      v15 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v19 + 24LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      ScaleFactorForWindow = v15(v14, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v25);
      v6 = ScaleFactorForWindow;
      if ( ScaleFactorForWindow < 0 )
      {
        v17 = 112LL;
        goto LABEL_22;
      }
      ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v25 + 32LL))(v25, v21);
      v6 = ScaleFactorForWindow;
      if ( ScaleFactorForWindow < 0 )
      {
        v17 = 113LL;
        goto LABEL_22;
      }
    }
    ScaleFactorForWindow = GetScaleFactorForWindow(v21[0], (unsigned int *)this + 10);
    v6 = ScaleFactorForWindow;
    if ( ScaleFactorForWindow >= 0 )
    {
      v6 = 0;
      goto LABEL_24;
    }
    v17 = 118LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)ScaleFactorForWindow);
LABEL_24:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4F,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v5);
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  return v6;
}
