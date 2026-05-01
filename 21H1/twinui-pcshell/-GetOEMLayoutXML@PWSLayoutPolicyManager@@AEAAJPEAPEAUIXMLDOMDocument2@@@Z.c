/*
 * XREFs of ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180202EC4
 * Callers:
 *     ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x180202A90 (-CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z.c)
 *     ?PopulateOEMLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180203570 (-PopulateOEMLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWorkspa.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180177EA4 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?LoadLayoutXMLFromFilePath@PWSLayoutPolicyManager@@CAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x180203090 (-LoadLayoutXMLFromFilePath@PWSLayoutPolicyManager@@CAJPEAVHStringReference@Wrappers@WRL@Microsof.c)
 *     ?LoadOEMLayoutFilePath@PWSLayoutPolicyManager@@AEAAJXZ @ 0x1802031B8 (-LoadOEMLayoutFilePath@PWSLayoutPolicyManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PWSLayoutPolicyManager::GetOEMLayoutXML(const WCHAR **this, struct IXMLDOMDocument2 **a2)
{
  int OEMLayoutFilePath; // eax
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  HSTRING_HEADER v8; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a2 = 0LL;
  OEMLayoutFilePath = PWSLayoutPolicyManager::LoadOEMLayoutFilePath((PWSLayoutPolicyManager *)this);
  v6 = OEMLayoutFilePath;
  if ( OEMLayoutFilePath >= 0 )
  {
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v8, this + 7, v5);
    return PWSLayoutPolicyManager::LoadLayoutXMLFromFilePath(
             (struct Microsoft::WRL::Wrappers::HStringReference *)&v8,
             a2);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)OEMLayoutFilePath);
    return v6;
  }
}
