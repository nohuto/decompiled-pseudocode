/*
 * XREFs of ?TryActivate@ActivationProcessor@@QEAA_NPEAUInputInfo@@UActivationInformation@@UtagPOINT@@@Z @ 0x18017132C
 * Callers:
 *     ?ProcessResult@DragNDropProcessor@@QEAAJKAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientProxy@@@Z @ 0x1800FA8C0 (-ProcessResult@DragNDropProcessor@@QEAAJKAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAV.c)
 *     ?OnInput@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801711F0 (-OnInput@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespo.c)
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001B624 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ViewHitTestDeprecation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004919C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ViewHitTestDeprecation@@@details@wil@@QEA.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BD030 (-IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z.c)
 */

bool __fastcall ActivationProcessor::TryActivate(__int64 a1, unsigned int *a2, unsigned int *a3, __int64 a4)
{
  unsigned int v4; // edi
  char v5; // si
  bool v10; // al
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  int v12; // edi

  v4 = a3[2];
  v5 = 1;
  v10 = 1;
  if ( (v4 & 1) != 0 )
  {
    v10 = 0;
  }
  else if ( (v4 & 2) != 0 )
  {
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    v10 = !ViewHelper::IsViewPartOfForegroundApplication(ViewHierarchy, *a3);
  }
  v12 = v4 & 4;
  if ( !v10 )
    return v12 != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ViewHitTestDeprecation>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ViewHitTestDeprecation>::GetImpl'::`2'::impl,
    0,
    (__int64)a3);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 72) + 80LL))(
          *(_QWORD *)(a1 + 72),
          *(_QWORD *)a3,
          a2[1],
          *a2,
          a4)
    || !v12 )
  {
    return 0;
  }
  return v5;
}
