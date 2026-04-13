/*
 * XREFs of ?TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x1800A0E40
 * Callers:
 *     ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800A13F0 (-Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180058C10 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800A1D28 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 */

__int64 __fastcall ShellMRTHelper::Common::TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri(
        ShellMRTHelper::Common *this,
        _QWORD *a2,
        unsigned __int16 **a3)
{
  PCWSTR StringRawBuffer; // rdi
  _WORD *v5; // rdi
  int v6; // ebx
  __int64 v7; // rdx
  unsigned int i; // ebx
  int v10; // eax
  unsigned int v11; // esi
  LPVOID pv[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v14; // [rsp+78h] [rbp+38h] BYREF
  UINT32 length; // [rsp+80h] [rbp+40h] BYREF

  *a2 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)this, &length);
  if ( length <= 0xC )
    return 0LL;
  v5 = StringRawBuffer + 12;
  if ( *v5 == 47 )
    return 0LL;
  memset(pv, 0, 24);
  v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         pv,
         (__int64)L"ms-resource:",
         length + 3);
  if ( v6 >= 0 )
  {
    for ( i = 0; i < 3; ++i )
    {
      v14 = 47;
      v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(pv, &v14, 1LL);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC7,
          (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
          (const char *)(unsigned int)v10);
        if ( pv[0] )
          CoTaskMemFree(pv[0]);
        return v11;
      }
    }
    if ( v5 )
      v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
             pv,
             v5,
             length - 12);
    else
      v6 = 0;
    if ( v6 < 0 )
    {
      v7 = 202LL;
      goto LABEL_5;
    }
    *a2 = pv[0];
    return 0LL;
  }
  v7 = 195LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
    (const char *)(unsigned int)v6);
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return (unsigned int)v6;
}
