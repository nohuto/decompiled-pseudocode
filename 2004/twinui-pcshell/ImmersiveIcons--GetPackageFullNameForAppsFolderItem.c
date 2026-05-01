/*
 * XREFs of ImmersiveIcons::GetPackageFullNameForAppsFolderItem @ 0x18046FA98
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18046E994 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x180047FF8 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007C9C8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x18046D198 (--$GetString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 */

__int64 __fastcall ImmersiveIcons::GetPackageFullNameForAppsFolderItem(CallerIdentity *this, _QWORD *a2, _QWORD *a3)
{
  int v6; // eax
  __int64 v7; // rax
  unsigned __int16 **v8; // r8
  int PackageFullNameFromAppId; // eax
  unsigned int v10; // ebx
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  int v13; // [rsp+30h] [rbp-30h]
  unsigned __int16 v14[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h]
  __int64 v16; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  *a3 = 0LL;
  v12 = PKEY_AppUserModel_PackageFullName;
  *(_QWORD *)v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v13 = 21;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v14);
  v15 = -1LL;
  v16 = -1LL;
  v6 = wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(a2, &v12, v14);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD *)v14;
    if ( *(_QWORD *)v14 && **(_WORD **)v14 )
      goto LABEL_8;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)(unsigned int)v6);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v14);
  v15 = -1LL;
  v16 = -1LL;
  PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(this, v14, v8);
  v10 = PackageFullNameFromAppId;
  if ( PackageFullNameFromAppId >= 0 )
  {
    v7 = *(_QWORD *)v14;
LABEL_8:
    *(_QWORD *)v14 = 0LL;
    v10 = 0;
    v16 = 0LL;
    v15 = 0LL;
    *a3 = v7;
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7E,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)PackageFullNameFromAppId);
LABEL_9:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v14);
  return v10;
}
