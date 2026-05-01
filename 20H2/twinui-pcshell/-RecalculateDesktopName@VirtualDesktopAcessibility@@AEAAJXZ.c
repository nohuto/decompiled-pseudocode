/*
 * XREFs of ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ @ 0x180441060
 * Callers:
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180440FB0 (-CurrentVirtualDesktopChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x18044135C (-RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktop.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000BE8C (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180014220 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180036718 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180058E00 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180063B9C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007D4C4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x1801492D4 (-CompareOrdinal@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPE.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18031A97C (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ??4?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV012@@Z @ 0x180391FB8 (--4-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV01.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall VirtualDesktopAcessibility::RecalculateDesktopName(VirtualDesktopAcessibility *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, struct IUnknown **); // rbx
  int v4; // eax
  __int64 v5; // r8
  int v6; // ebx
  struct IUnknown *v7; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  PCWSTR StringRawBuffer; // rax
  __int64 v14; // r8
  const WCHAR *v15; // rdx
  HWND DesktopWindow; // rax
  RTL_SRWLOCK *v18; // [rsp+20h] [rbp-20h] BYREF
  wchar_t *v19; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]
  __int64 v21; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IUnknown *v23; // [rsp+70h] [rbp+30h] BYREF
  HSTRING string; // [rsp+78h] [rbp+38h] BYREF
  __int64 *v25; // [rsp+80h] [rbp+40h] BYREF
  __int64 v26; // [rsp+88h] [rbp+48h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 27) + 32LL))(*((_QWORD *)this + 27), &v18);
  v23 = 0LL;
  v2 = *((_QWORD *)this + 25);
  v3 = *(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v2 + 224LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  v4 = v3(v2, &v23);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
      1u,
      v5);
    v25 = 0LL;
    v7 = v23;
    QueryInterface = v23->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    v9 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 **))QueryInterface)(
           v7,
           &GUID_4b27dbf1_5392_476b_ab37_f409943e0785,
           &v25);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
        (const char *)(unsigned int)v9);
LABEL_16:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
LABEL_31:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v19);
      goto LABEL_32;
    }
    string = 0LL;
    v10 = *v25;
    string = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v10 + 32))(v25, &string);
    v6 = v11;
    if ( v11 < 0 )
    {
      v12 = 84LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
        (const char *)(unsigned int)v11);
LABEL_14:
      if ( string )
        WindowsDeleteString(string);
      goto LABEL_16;
    }
    if ( string )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (LPVOID *)&v19,
              (__int64)StringRawBuffer,
              0xFFFFFFFFFFFFFFFFuLL);
      v6 = v11;
      if ( v11 < 0 )
      {
        v12 = 88LL;
        goto LABEL_13;
      }
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, __int64 *))(**((_QWORD **)this + 24) + 104LL))(
             *((_QWORD *)this + 24),
             v23,
             &v26);
      if ( v6 < 0 )
        goto LABEL_14;
      v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
              &v19,
              &_ImageBase,
              13501LL,
              v26 + 1);
      v6 = v11;
      if ( v11 < 0 )
      {
        v12 = 94LL;
        goto LABEL_13;
      }
    }
    if ( string )
      WindowsDeleteString(string);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    if ( !(unsigned int)SHIsSameObject(v23, *((struct IUnknown **)this + 26)) )
      goto LABEL_29;
    LODWORD(v14) = v20;
    if ( v20 == -1 )
    {
      if ( v19 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( v19[v14] );
      }
      else
      {
        LODWORD(v14) = 0;
      }
    }
    v15 = &szAgent;
    if ( v19 )
      v15 = v19;
    if ( Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
           (const WCHAR **)this + 28,
           v15,
           v14) != 2 )
    {
LABEL_29:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::operator=(
        (_QWORD *)this + 28,
        (__int64 *)&v19);
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 26, (__int64 *)&v23);
      DesktopWindow = GetDesktopWindow();
      NotifyWinEvent(0x800Cu, DesktopWindow, 0, 0);
    }
    v6 = 0;
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4B,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
    (const char *)(unsigned int)v4);
LABEL_32:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v18);
  return (unsigned int)v6;
}
