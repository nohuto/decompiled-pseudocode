/*
 * XREFs of ?DeliverToInputService@NonBamoInputDeliveryServer@@UEAAJPEBUKeyboardEvent@@@Z @ 0x1801036D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAUIForegroundManager@@XZ @ 0x180011D4C (-GetForegroundManager@ISMStatics@@SAPEAUIForegroundManager@@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputForegroundManager@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18001CF44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputForegroundManager@@@details@wil@@QEA.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180027E10 (-IsEdition@@YA_N_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardInputInMinQueue@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B28F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardInputInMinQueue@@@details@wil@@QE.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::DeliverToInputService(
        NonBamoInputDeliveryServer *this,
        const struct KeyboardEvent *a2)
{
  __int64 v4; // r8
  const char *v5; // r9
  __int64 v6; // r8
  struct IForegroundManager *ForegroundManager; // rax
  __int64 v8; // r8
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4));
  if ( *(_DWORD *)a2 > 2u )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      254LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      v5);
    JUMPOUT(0x1801037A8LL);
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_KeyboardInputInMinQueue>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_KeyboardInputInMinQueue>::GetImpl'::`2'::impl,
    1u,
    v4);
  if ( IsEdition(8778LL) )
  {
    v8 = 0LL;
  }
  else
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputForegroundManager>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_InputForegroundManager>::GetImpl'::`2'::impl,
      1u,
      v6);
    ForegroundManager = ISMStatics::GetForegroundManager();
    v8 = (*(unsigned int (__fastcall **)(struct IForegroundManager *))(*(_QWORD *)ForegroundManager + 32LL))(ForegroundManager);
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, const struct KeyboardEvent *, __int64))(**((_QWORD **)this + 34) + 24LL))(
         *((_QWORD *)this + 34),
         a2,
         v8);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      247LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  return 0LL;
}
