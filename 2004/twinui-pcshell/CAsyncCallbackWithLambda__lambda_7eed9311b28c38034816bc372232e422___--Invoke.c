/*
 * XREFs of CAsyncCallbackWithLambda__lambda_7eed9311b28c38034816bc372232e422___::Invoke @ 0x180370530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@AccessibilityExperienceManager@@AEAA_NXZ @ 0x180370638 (-IsEnabled@AccessibilityExperienceManager@@AEAA_NXZ.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x180371A64 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x180371E80 (-_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_7eed9311b28c38034816bc372232e422___::Invoke(__int64 a1)
{
  bool IsEnabled; // al
  _BYTE *v3; // rcx
  __int64 v4; // rcx

  IsEnabled = AccessibilityExperienceManager::IsEnabled(*(AccessibilityExperienceManager **)(a1 + 48));
  v3 = *(_BYTE **)(a1 + 48);
  if ( IsEnabled )
  {
    if ( !v3[472]
      && (int)AccessibilityExperienceManager::_CreateModalExperienceAsync((AccessibilityExperienceManager *)v3) >= 0 )
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 472LL) = 1;
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 384LL);
      if ( v4 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 40LL))(v4, 0LL);
    }
  }
  else
  {
    AccessibilityExperienceManager::_DismissView(
      (AccessibilityExperienceManager *)v3,
      (struct AccessibilityViewInfo *)(v3 + 376));
  }
  return 0LL;
}
