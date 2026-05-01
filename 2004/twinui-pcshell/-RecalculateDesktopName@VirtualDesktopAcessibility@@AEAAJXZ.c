/*
 * XREFs of ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ @ 0x1804417A0
 * Callers:
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1804416F0 (-CurrentVirtualDesktopChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x180441A9C (-RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktop.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000FBC0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180015480 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002D050 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800632C0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007C9C8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x180149484 (-CompareOrdinal@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPE.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18031B26C (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ??4?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV012@@Z @ 0x180392878 (--4-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV01.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall VirtualDesktopAcessibility::RecalculateDesktopName(VirtualDesktopAcessibility *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, struct IUnknown **); // rbx
  int v4; // eax
  int v5; // ebx
  struct IUnknown *v6; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  PCWSTR StringRawBuffer; // rax
  __int64 v13; // r8
  const WCHAR *v14; // rdx
  HWND DesktopWindow; // rax
  RTL_SRWLOCK *v17; // [rsp+20h] [rbp-20h] BYREF
  wchar_t *v18; // [rsp+28h] [rbp-18h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h]
  __int64 v20; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IUnknown *v22; // [rsp+70h] [rbp+30h] BYREF
  HSTRING string; // [rsp+78h] [rbp+38h] BYREF
  __int64 *v24; // [rsp+80h] [rbp+40h] BYREF
  __int64 v25; // [rsp+88h] [rbp+48h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 27) + 32LL))(*((_QWORD *)this + 27), &v17);
  v22 = 0LL;
  v2 = *((_QWORD *)this + 25);
  v3 = *(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v2 + 224LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  v4 = v3(v2, &v22);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
      1u);
    v24 = 0LL;
    v6 = v22;
    QueryInterface = v22->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    v8 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 **))QueryInterface)(
           v6,
           &GUID_4b27dbf1_5392_476b_ab37_f409943e0785,
           &v24);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
        (const char *)(unsigned int)v8);
LABEL_16:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
LABEL_31:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v18);
      goto LABEL_32;
    }
    string = 0LL;
    v9 = *v24;
    string = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v9 + 32))(v24, &string);
    v5 = v10;
    if ( v10 < 0 )
    {
      v11 = 84LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
        (const char *)(unsigned int)v10);
LABEL_14:
      if ( string )
        WindowsDeleteString(string);
      goto LABEL_16;
    }
    if ( string )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (LPVOID *)&v18,
              (__int64)StringRawBuffer,
              0xFFFFFFFFFFFFFFFFuLL);
      v5 = v10;
      if ( v10 < 0 )
      {
        v11 = 88LL;
        goto LABEL_13;
      }
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, __int64 *))(**((_QWORD **)this + 24) + 104LL))(
             *((_QWORD *)this + 24),
             v22,
             &v25);
      if ( v5 < 0 )
        goto LABEL_14;
      v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
              &v18,
              &_ImageBase,
              13501LL,
              v25 + 1);
      v5 = v10;
      if ( v10 < 0 )
      {
        v11 = 94LL;
        goto LABEL_13;
      }
    }
    if ( string )
      WindowsDeleteString(string);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    if ( !(unsigned int)SHIsSameObject(v22, *((struct IUnknown **)this + 26)) )
      goto LABEL_29;
    LODWORD(v13) = v19;
    if ( v19 == -1 )
    {
      if ( v18 )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( v18[v13] );
      }
      else
      {
        LODWORD(v13) = 0;
      }
    }
    v14 = &szAgent;
    if ( v18 )
      v14 = v18;
    if ( Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
           (const WCHAR **)this + 28,
           v14,
           v13) != 2 )
    {
LABEL_29:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::operator=(
        (_QWORD *)this + 28,
        (__int64 *)&v18);
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 26, (__int64 *)&v22);
      DesktopWindow = GetDesktopWindow();
      NotifyWinEvent(0x800Cu, DesktopWindow, 0, 0);
    }
    v5 = 0;
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4B,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
    (const char *)(unsigned int)v4);
LABEL_32:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v17);
  return (unsigned int)v5;
}
