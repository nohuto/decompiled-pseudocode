/*
 * XREFs of ?LoadOEMLayoutFilePath@PWSLayoutPolicyManager@@AEAAJXZ @ 0x1802031B8
 * Callers:
 *     ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180202EC4 (-GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180062B90 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

__int64 __fastcall PWSLayoutPolicyManager::LoadOEMLayoutFilePath(LPVOID *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  WCHAR Dst[264]; // [rsp+20h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+0h]

  if ( !ExpandEnvironmentStringsW(
          L"%SystemDrive%\\Users\\Default\\AppData\\Local\\Microsoft\\Windows\\Shell\\InkWorkspaceModification.xml",
          Dst,
          0x104u) )
  {
    v2 = -2147467259;
    v3 = 244LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         this + 7,
         (__int64)Dst,
         0xFFFFFFFFFFFFFFFFuLL);
  if ( v2 < 0 )
  {
    v3 = 245LL;
    goto LABEL_3;
  }
  return 0LL;
}
