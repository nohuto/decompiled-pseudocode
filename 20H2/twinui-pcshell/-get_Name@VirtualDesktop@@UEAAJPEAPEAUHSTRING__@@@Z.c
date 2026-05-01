/*
 * XREFs of ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180378FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002A268 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180063B9C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007D4C4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x1801B7AEC (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18031A97C (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ??$As@UIVirtualDesktop2@@@?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktop2@@@WRL@Microsoft@@@Details@12@@Z @ 0x180377A48 (--$As@UIVirtualDesktop2@@@-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     _lambda_1fc30c6156732220fec1f2e1481ea1a2_::operator() @ 0x180378110 (_lambda_1fc30c6156732220fec1f2e1481ea1a2_--operator().c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktop::get_Name(VirtualDesktop *this, HSTRING *a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  int v8; // eax
  HSTRING v9; // r8
  HSTRING v10; // rcx
  HSTRING v11; // rax
  char *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  PCNZWCH sourceString; // [rsp+20h] [rbp-20h] BYREF
  UINT32 length[2]; // [rsp+28h] [rbp-18h]
  __int64 v18; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HSTRING string; // [rsp+68h] [rbp+28h] BYREF
  __int64 v21; // [rsp+70h] [rbp+30h] BYREF

  *a2 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    a3);
  v21 = 0LL;
  v5 = Microsoft::WRL::ComPtr<IVirtualDesktop>::As<IVirtualDesktop2>((_QWORD *)this + 13, &v21);
  v6 = v5;
  if ( v5 >= 0 )
  {
    string = 0LL;
    v7 = v21;
    WindowsDeleteString(0LL);
    string = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v7 + 40LL))(v7, &string);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAA,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
        (const char *)(unsigned int)v8);
      v10 = string;
LABEL_7:
      WindowsDeleteString(v10);
      string = 0LL;
      goto LABEL_8;
    }
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         (Microsoft::WRL::Wrappers::Details *)string,
                         0LL,
                         v9) )
    {
      v11 = string;
      v10 = 0LL;
      string = 0LL;
      *a2 = v11;
      v6 = 0;
      goto LABEL_7;
    }
    WindowsDeleteString(string);
    string = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    string = (HSTRING)this;
    v12 = (char *)lambda_1fc30c6156732220fec1f2e1481ea1a2_::operator()((RTL_SRWLOCK **)&string);
    sourceString = 0LL;
    *(_QWORD *)length = 0LL;
    v18 = 0LL;
    v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
            (wchar_t **)&sourceString,
            &_ImageBase,
            1001LL,
            v12 + 1);
    v6 = v13;
    if ( v13 >= 0 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
      v13 = WindowsCreateString(sourceString, length[0], a2);
      v6 = v13;
      if ( v13 >= 0 )
      {
LABEL_14:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
        return v6;
      }
      v14 = 186LL;
    }
    else
    {
      v14 = 185LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA7,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
    (const char *)(unsigned int)v5);
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  return v6;
}
