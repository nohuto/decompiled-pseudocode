/*
 * XREFs of ?IsLegacyApp@@YAJPEBGPEA_N@Z @ 0x180282798
 * Callers:
 *     ?CreateWrapperForRecoveredView@@YAJPEAUMsgString@@URecoveredViewInfo@@URecoveredWindowForViewWrapper@@PEAVViewEventDispatcher@@PEAPEAUIViewWrapperInternal@@@Z @ 0x180281018 (-CreateWrapperForRecoveredView@@YAJPEAUMsgString@@URecoveredViewInfo@@URecoveredWindowForViewWra.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x18028A6C4 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 * Callees:
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1800475C8 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007F164 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IsLegacyApp(CallerIdentity *this, bool *a2)
{
  unsigned __int16 **v4; // r8
  int PackageFullNameFromAppId; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned __int16 v9[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0;
  *(_QWORD *)v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v9);
  v10 = -1LL;
  v11 = -1LL;
  PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(this, v9, v4);
  v6 = PackageFullNameFromAppId;
  if ( PackageFullNameFromAppId >= 0 )
  {
    PackageFullNameFromAppId = QuirkIsEnabledForPackage(*(_QWORD *)v9, this, 1114112LL, &v13);
    v6 = PackageFullNameFromAppId;
    if ( PackageFullNameFromAppId >= 0 )
    {
      *a2 = v13 != 0;
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 196LL;
  }
  else
  {
    v7 = 188LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
    (const char *)(unsigned int)PackageFullNameFromAppId);
LABEL_7:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v9);
  return v6;
}
