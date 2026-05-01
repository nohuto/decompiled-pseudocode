/*
 * XREFs of ?GetMonitorForDpi@WindowSizeConverter@@AEAAJIPEAPEAUIImmersiveMonitor@@@Z @ 0x1803D1E9C
 * Callers:
 *     ?ConvertForDpiAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@IHHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x1803D15F0 (-ConvertForDpiAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@IHHPEAUIApplicationView.c)
 *     ?ConvertForDpiAndView@WindowSizeConverter@@UEAAJUtagSIZE@@IPEAUIApplicationView@@PEAU2@@Z @ 0x1803D16D0 (-ConvertForDpiAndView@WindowSizeConverter@@UEAAJUtagSIZE@@IPEAUIApplicationView@@PEAU2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowSizeConverter::GetMonitorForDpi(
        WindowSizeConverter *this,
        int a2,
        struct IImmersiveMonitor **a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  unsigned int i; // esi
  __int64 v14; // rbx
  int (__fastcall *v15)(__int64, _QWORD, GUID *, struct IImmersiveMonitor **); // rdi
  int v16; // eax
  struct IImmersiveMonitor *v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v21; // [rsp+70h] [rbp+30h] BYREF
  int v22; // [rsp+80h] [rbp+40h] BYREF
  char v23; // [rsp+88h] [rbp+48h] BYREF

  *a3 = 0LL;
  v19 = 0LL;
  v6 = *((_QWORD *)this + 14);
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 112LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v8 = v7(v6, &v19);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 14) + 24LL))(
            *((_QWORD *)this + 14),
            &v21);
    v9 = v12;
    if ( v12 >= 0 )
    {
      for ( i = 0; i < v21; ++i )
      {
        v18 = 0LL;
        v14 = v19;
        v15 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v19 + 32LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
        if ( v15(v14, i, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v18) >= 0 )
        {
          v16 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *, char *))(*(_QWORD *)v18 + 112LL))(
                  v18,
                  &v22,
                  &v23);
          v9 = v16;
          if ( v16 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x22E,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
              (const char *)(unsigned int)v16);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
            goto LABEL_16;
          }
          if ( a2 == v22 )
          {
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
            *a3 = v18;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
            break;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      }
      if ( *a3 )
      {
        v9 = 0;
        goto LABEL_16;
      }
      v9 = -2147023728;
      v10 = 2147943568LL;
      v11 = 569LL;
    }
    else
    {
      v10 = (unsigned int)v12;
      v11 = 549LL;
    }
  }
  else
  {
    v10 = (unsigned int)v8;
    v11 = 546LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)v10);
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return v9;
}
