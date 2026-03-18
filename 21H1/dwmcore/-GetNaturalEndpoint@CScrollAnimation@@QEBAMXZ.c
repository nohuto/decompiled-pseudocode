/*
 * XREFs of ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x180205894
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1801CC1A4 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x1801CD6A0 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CScrollAnimation::GetNaturalEndpoint(CScrollAnimation *this)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rcx

  v2 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 320LL))(this);
  if ( *(_DWORD *)(v2 + 16) == 2 )
    return *(float *)(v2 + 60);
  v4 = *((_QWORD *)this + 41);
  v5 = 0LL;
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 16);
  return CInteractionTracker::GetCurrentValue(v5, *((_DWORD *)this + 79));
}
