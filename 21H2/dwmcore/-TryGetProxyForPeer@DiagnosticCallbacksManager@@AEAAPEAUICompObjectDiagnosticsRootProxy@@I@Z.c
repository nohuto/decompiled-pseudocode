/*
 * XREFs of ?TryGetProxyForPeer@DiagnosticCallbacksManager@@AEAAPEAUICompObjectDiagnosticsRootProxy@@I@Z @ 0x1801988E4
 * Callers:
 *     ?SendAnimationEnded@DiagnosticCallbacksManager@@QEAAJII_KIGW4AnimationEndedReasonType@@AEBVCExpressionValue@@@Z @ 0x180197B3C (-SendAnimationEnded@DiagnosticCallbacksManager@@QEAAJII_KIGW4AnimationEndedReasonType@@AEBVCExpr.c)
 *     ?SendAnimationStarted@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z @ 0x180197C00 (-SendAnimationStarted@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z.c)
 *     ?SendDebugStart@DiagnosticCallbacksManager@@QEAAJII_KIAEBVCExpressionValue@@@Z @ 0x180197D50 (-SendDebugStart@DiagnosticCallbacksManager@@QEAAJII_KIAEBVCExpressionValue@@@Z.c)
 *     ?SendPropertyChanged@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z @ 0x180197E84 (-SendPropertyChanged@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBI@Z @ 0x180195FEC (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IV-$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL.c)
 */

struct ICompObjectDiagnosticsRootProxy *__fastcall DiagnosticCallbacksManager::TryGetProxyForPeer(
        DiagnosticCallbacksManager *this,
        unsigned int a2)
{
  __int64 *v2; // r10
  unsigned int v3; // r11d
  __int64 v4; // rax
  __int64 v5; // rcx
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  std::_Tree<std::_Tmap_traits<unsigned int,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>,0>>::_Find_lower_bound<unsigned int>(
    (__int64 *)this + 30,
    (__int64)v7,
    &v9);
  v4 = v8;
  if ( *(_BYTE *)(v8 + 25) || v3 < *(_DWORD *)(v8 + 32) )
  {
    v4 = *v2;
    v5 = *v2;
  }
  else
  {
    v5 = *v2;
  }
  if ( v4 == v5 )
    return 0LL;
  else
    return *(struct ICompObjectDiagnosticsRootProxy **)(v4 + 40);
}
