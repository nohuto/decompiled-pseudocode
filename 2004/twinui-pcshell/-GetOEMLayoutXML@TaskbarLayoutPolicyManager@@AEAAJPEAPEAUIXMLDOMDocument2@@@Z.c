/*
 * XREFs of ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18019E238
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x18019CDF0 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18019F200 (-PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskba.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18019BDD4 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?EnsureOEMLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18019D634 (-EnsureOEMLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18019E7F0 (-LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarLayoutPolicyManager::GetOEMLayoutXML(
        TaskbarLayoutPolicyManager *this,
        struct IXMLDOMDocument2 **a2)
{
  unsigned int v4; // r8d
  TaskbarLayoutPolicyManager *v6; // rcx
  int LayoutXMLFromFilePath; // eax
  unsigned int v8; // ebx
  HSTRING_HEADER v9; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a2 = 0LL;
  if ( (int)TaskbarLayoutPolicyManager::EnsureOEMLayoutFilePath((LPVOID *)this) < 0 )
    return 0LL;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v9, (const WCHAR **)this + 7, v4);
  LayoutXMLFromFilePath = TaskbarLayoutPolicyManager::LoadLayoutXMLFromFilePath(
                            v6,
                            (struct Microsoft::WRL::Wrappers::HStringReference *)&v9,
                            a2);
  v8 = LayoutXMLFromFilePath;
  if ( LayoutXMLFromFilePath >= 0 )
    return 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x165,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)LayoutXMLFromFilePath);
  return v8;
}
