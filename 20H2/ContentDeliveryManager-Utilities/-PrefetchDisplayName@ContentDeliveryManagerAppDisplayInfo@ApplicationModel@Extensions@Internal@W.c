/*
 * XREFs of ?PrefetchDisplayName@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXPEBG@Z @ 0x1800A1AF8
 * Callers:
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEBGPEAUIAppDisplayInfo@25@@Z @ 0x1800A18A0 (-RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Interna.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180058C10 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800A13F0 (-Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 *     ??1MRTHelperBase@ShellMRTHelper@@QEAA@XZ @ 0x1800A17E4 (--1MRTHelperBase@ShellMRTHelper@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::PrefetchDisplayName(
        HSTRING *this,
        const unsigned __int16 *a2)
{
  unsigned __int64 v3; // rdi
  int v4; // eax
  HSTRING *v5; // rbx
  wil::details::in1diag3 *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  const WCHAR *v9; // rsi
  UINT32 v10; // edx
  const WCHAR *v11; // rcx
  HRESULT String; // eax
  __int128 v13; // [rsp+38h] [rbp-19h] BYREF
  __int64 v14; // [rsp+48h] [rbp-9h]
  __int64 v15; // [rsp+50h] [rbp-1h]
  __int64 v16; // [rsp+58h] [rbp+7h]
  __int64 v17; // [rsp+60h] [rbp+Fh]
  _OWORD v18[3]; // [rsp+68h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  LPVOID pv; // [rsp+C8h] [rbp+77h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0x10000000000LL;
  memset(v18, 0, sizeof(v18));
  v3 = -1LL;
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         v18,
         (__int64)a2,
         0xFFFFFFFFFFFFFFFFuLL);
  LODWORD(v5) = v4;
  if ( v4 >= 0 )
    LODWORD(v5) = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30,
      (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
      (const char *)(unsigned int)v4);
  v6 = retaddr;
  if ( (int)v5 < 0 )
    goto LABEL_18;
  pv = 0LL;
  v7 = ShellMRTHelper::MRTHelperBase::Resolve((__int64)&v13, 0LL, (__int64)L"ms-resource:ActionCenterGroupName", &pv);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x43,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappdisplayinfo.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x1800A1CDCLL);
  }
  v5 = this + 10;
  v9 = (const WCHAR *)pv;
  if ( pv )
  {
    do
      ++v3;
    while ( *((_WORD *)pv + v3) );
    if ( v3 > 0xFFFFFFFF )
    {
      String = -2147024362;
      goto LABEL_13;
    }
    WindowsDeleteString(*v5);
    v10 = v3;
    v11 = v9;
  }
  else
  {
    WindowsDeleteString(*v5);
    v10 = 0;
    v11 = &Src;
  }
  *v5 = 0LL;
  String = WindowsCreateString(v11, v10, this + 10);
LABEL_13:
  if ( String < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappdisplayinfo.cpp",
      (const char *)(unsigned int)String);
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x1EE,
      (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
      (const char *)(unsigned int)v5);
    goto LABEL_19;
  }
  if ( pv )
    CoTaskMemFree(pv);
  ShellMRTHelper::MRTHelperBase::~MRTHelperBase((ShellMRTHelper::MRTHelperBase *)&v13);
}
