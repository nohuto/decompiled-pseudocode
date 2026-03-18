/*
 * XREFs of ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x180052BA0
 * Callers:
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x18004F86C (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180050DC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?GetAnimationScenarioGUID@CBaseExpression@@IEBA?AU_GUID@@XZ @ 0x1800447A4 (-GetAnimationScenarioGUID@CBaseExpression@@IEBA-AU_GUID@@XZ.c)
 *     ?RegisterResourceForAnimationTelemetry@CComposition@@QEAAXPEBVCResource@@PEBU_GUID@@I@Z @ 0x1800E66D8 (-RegisterResourceForAnimationTelemetry@CComposition@@QEAAXPEBVCResource@@PEBU_GUID@@I@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?LogAnimationStarted@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@II@Z @ 0x1801FC5EC (-LogAnimationStarted@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@II@Z.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x1802289B0 (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 */

void __fastcall CBaseExpression::NotifyAnimationStarted(CBaseExpression *this)
{
  bool v1; // zf
  CAnimationLoggingManager *AnimationLoggingManagerNoRef; // rax
  __int64 v4; // rcx
  struct CResource *v5; // r8
  unsigned int v6; // r9d
  struct _GUID v7; // [rsp+30h] [rbp-28h] BYREF

  v1 = (*((_BYTE *)this + 232) & 4) == 0;
  *((_DWORD *)this + 72) = 4;
  if ( !v1 )
  {
    AnimationLoggingManagerNoRef = CBaseExpression::GetAnimationLoggingManagerNoRef(this);
    CAnimationLoggingManager::LogAnimationStarted(
      AnimationLoggingManagerNoRef,
      *((_QWORD *)this + 21),
      v5,
      v6,
      *(_DWORD *)(v4 + 192));
  }
  if ( *(int *)(*((_QWORD *)this + 41) + 4LL) < 0 && (*((_BYTE *)this + 232) & 0x20) == 0 )
  {
    CBaseExpression::GetAnimationScenarioGUID(this, &v7);
    CComposition::RegisterResourceForAnimationTelemetry(*((CComposition **)this + 2), this, &v7, *((_DWORD *)this + 44));
    *((_BYTE *)this + 232) |= 0x20u;
  }
}
