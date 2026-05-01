/*
 * XREFs of ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1803798A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002D050 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180033108 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007C9C8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x1801B7EDC (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18031B26C (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ??$As@UIVirtualDesktop2@@@?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktop2@@@WRL@Microsoft@@@Details@12@@Z @ 0x180378308 (--$As@UIVirtualDesktop2@@@-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     _lambda_1fc30c6156732220fec1f2e1481ea1a2_::operator() @ 0x1803789D0 (_lambda_1fc30c6156732220fec1f2e1481ea1a2_--operator().c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktop::get_Name(VirtualDesktop *this, HSTRING *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  HSTRING v8; // r8
  HSTRING v9; // rcx
  HSTRING v10; // rax
  char *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  PCNZWCH sourceString; // [rsp+20h] [rbp-20h] BYREF
  UINT32 length[2]; // [rsp+28h] [rbp-18h]
  __int64 v17; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HSTRING string; // [rsp+68h] [rbp+28h] BYREF
  __int64 v20; // [rsp+70h] [rbp+30h] BYREF

  *a2 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u);
  v20 = 0LL;
  v4 = Microsoft::WRL::ComPtr<IVirtualDesktop>::As<IVirtualDesktop2>((_QWORD *)this + 13, &v20);
  v5 = v4;
  if ( v4 >= 0 )
  {
    string = 0LL;
    v6 = v20;
    WindowsDeleteString(0LL);
    string = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v6 + 40LL))(v6, &string);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAA,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
        (const char *)(unsigned int)v7);
      v9 = string;
LABEL_7:
      WindowsDeleteString(v9);
      string = 0LL;
      goto LABEL_8;
    }
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         (Microsoft::WRL::Wrappers::Details *)string,
                         0LL,
                         v8) )
    {
      v10 = string;
      v9 = 0LL;
      string = 0LL;
      *a2 = v10;
      v5 = 0;
      goto LABEL_7;
    }
    WindowsDeleteString(string);
    string = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    string = (HSTRING)this;
    v11 = (char *)lambda_1fc30c6156732220fec1f2e1481ea1a2_::operator()((RTL_SRWLOCK **)&string);
    sourceString = 0LL;
    *(_QWORD *)length = 0LL;
    v17 = 0LL;
    v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
            (wchar_t **)&sourceString,
            &_ImageBase,
            1001LL,
            v11 + 1);
    v5 = v12;
    if ( v12 >= 0 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
      v12 = WindowsCreateString(sourceString, length[0], a2);
      v5 = v12;
      if ( v12 >= 0 )
      {
LABEL_14:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
        return v5;
      }
      v13 = 186LL;
    }
    else
    {
      v13 = 185LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA7,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
    (const char *)(unsigned int)v4);
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  return v5;
}
