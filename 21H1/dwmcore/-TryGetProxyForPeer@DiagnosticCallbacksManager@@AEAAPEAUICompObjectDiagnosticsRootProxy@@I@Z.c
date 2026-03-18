/*
 * XREFs of ?TryGetProxyForPeer@DiagnosticCallbacksManager@@AEAAPEAUICompObjectDiagnosticsRootProxy@@I@Z @ 0x18016BC14
 * Callers:
 *     ?SendAnimationEnded@DiagnosticCallbacksManager@@QEAAJII_KIGW4AnimationEndedReasonType@@AEBVCExpressionValue@@@Z @ 0x18016B04C (-SendAnimationEnded@DiagnosticCallbacksManager@@QEAAJII_KIGW4AnimationEndedReasonType@@AEBVCExpr.c)
 *     ?SendAnimationStarted@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z @ 0x18016B0F8 (-SendAnimationStarted@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z.c)
 *     ?SendDebugStart@DiagnosticCallbacksManager@@QEAAJII_KIAEBVCExpressionValue@@@Z @ 0x18016B230 (-SendDebugStart@DiagnosticCallbacksManager@@QEAAJII_KIAEBVCExpressionValue@@@Z.c)
 *     ?SendPropertyChanged@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z @ 0x18016B354 (-SendPropertyChanged@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z.c)
 * Callees:
 *     <none>
 */

struct ICompObjectDiagnosticsRootProxy *__fastcall DiagnosticCallbacksManager::TryGetProxyForPeer(
        DiagnosticCallbacksManager *this,
        unsigned int a2)
{
  __int64 *v2; // rax
  __int64 *v3; // r9
  __int64 *v4; // r8

  v2 = (__int64 *)*((_QWORD *)this + 24);
  v3 = v2;
  v4 = (__int64 *)v2[1];
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( *((_DWORD *)v4 + 8) >= a2 )
    {
      v2 = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      v4 = (__int64 *)v4[2];
    }
  }
  if ( v2 == v3 || a2 < *((_DWORD *)v2 + 8) )
  {
    v2 = (__int64 *)*((_QWORD *)this + 24);
    v3 = v2;
  }
  if ( v2 == v3 )
    return 0LL;
  else
    return (struct ICompObjectDiagnosticsRootProxy *)v2[5];
}
