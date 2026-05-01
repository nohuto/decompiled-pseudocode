/*
 * XREFs of ?VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktopCollection@@@Z @ 0x180436590
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x18015BD78 (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801673B0 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_p.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180374340 (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180374BF8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktopPersistence::VirtualDesktopCollectionChanged(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktopCollection *a2)
{
  __int64 (__fastcall *v4)(struct IVirtualDesktopCollection *, GUID *, __int64 *); // rbx
  int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r14
  void *v8; // r8
  int v9; // eax
  char *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  int v13; // eax
  void *v14; // r8
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v23; // [rsp+40h] [rbp-59h] BYREF
  __int64 v24; // [rsp+48h] [rbp-51h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-49h] BYREF
  __int64 v26; // [rsp+58h] [rbp-41h]
  __int64 v27; // [rsp+60h] [rbp-39h]
  __int64 v28; // [rsp+68h] [rbp-31h]
  __int64 v29; // [rsp+70h] [rbp-29h] BYREF
  int v30; // [rsp+78h] [rbp-21h]
  __int64 v31; // [rsp+80h] [rbp-19h] BYREF
  __int64 v32[2]; // [rsp+88h] [rbp-11h] BYREF
  int v33; // [rsp+98h] [rbp-1h] BYREF
  __int64 v34[2]; // [rsp+A0h] [rbp+7h] BYREF
  __int128 v35; // [rsp+B0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v23 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct IVirtualDesktopCollection *, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  v5 = v4(a2, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9, &v23);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(struct IVirtualDesktopCollection *))(*(_QWORD *)a2 + 24LL))(a2);
    pv = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v9 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
           (__int64)&pv,
           v7,
           v8);
    v6 = v9;
    if ( v9 >= 0 )
    {
      details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>(
        (__int64)&v29,
        v23);
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
        (__int64)&v31,
        (__int64)&v29,
        0);
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
        (__int64)&v33,
        (__int64)&v29,
        v30);
      v11 = v26;
      v10 = (char *)pv;
      while ( (_DWORD)v31 != v33 || v32[1] != v34[1] )
      {
        v12 = v32[0];
        v24 = v32[0];
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
        v13 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 32LL))(v12, &v35);
        v6 = v13;
        if ( v13 < 0 )
        {
          v20 = (unsigned int)v13;
          v21 = 54LL;
          goto LABEL_22;
        }
        if ( v11 == v28 )
        {
          v6 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                 (__int64)&pv,
                 v11 + 1,
                 v14);
          v10 = (char *)pv;
          if ( v6 < 0 )
          {
            v20 = (unsigned int)v6;
            v21 = 55LL;
LABEL_22:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v21,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
              (const char *)v20);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v34);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v32);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
            goto LABEL_23;
          }
          v11 = v26;
        }
        v26 = ++v11;
        v15 = &v10[16 * v11 - 16];
        if ( v15 )
          *(_OWORD *)v15 = v35;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
        LODWORD(v31) = v31 + 1;
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(&v31);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v34);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v32);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      if ( v11 == v7 )
      {
        LOBYTE(v16) = 1;
        v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, const wchar_t *, int, char *, unsigned __int64))(**((_QWORD **)this + 2) + 32LL))(
                *((_QWORD *)this + 2),
                v16,
                0LL,
                L"VirtualDesktopIDs",
                3,
                v10,
                16 * v7);
        v6 = v19;
        if ( v19 >= 0 )
          goto LABEL_23;
        v17 = (unsigned int)v19;
        v18 = 58LL;
      }
      else
      {
        v6 = -2147467259;
        v17 = 2147500037LL;
        v18 = 57LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)v17);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)(unsigned int)v9);
      v10 = (char *)pv;
    }
LABEL_23:
    if ( v10 )
      CoTaskMemFree(v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  return (unsigned int)v6;
}
