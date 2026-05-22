/*
 * XREFs of ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180068368
 * Callers:
 *     ??$_Emplace_reallocate@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800020E0 (--$_Emplace_reallocate@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIInputTarge.c)
 *     ?_Tidy@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXXZ @ 0x180009660 (-_Tidy@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContextual.c)
 *     ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x18000AE80 (--_GContextualProcessorBuffer@@MEAAPEAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@PEAVInputSite@@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAAPEAPEAVInputSite@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180012960 (--$_Emplace_reallocate@PEAVInputSite@@@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@.c)
 *     ?AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x180012CF0 (-AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInit.c)
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x180013440 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAAPEA_KQEA_KAEB_K@Z @ 0x180014D10 (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@QEAAPEA_KQEA_KAEB_K@Z.c)
 *     ??$_Emplace_reallocate@VNotificationData@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@$$QEAV2@@Z @ 0x180015190 (--$_Emplace_reallocate@VNotificationData@@@-$vector@VNotificationData@@V-$allocator@VNotificatio.c)
 *     ?UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180015620 (-UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800167F0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ??_EInputContext@@UEAAPEAXI@Z @ 0x1800179E0 (--_EInputContext@@UEAAPEAXI@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800363CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Adjust_manually_vector_aligned(void **a1, unsigned __int64 *a2)
{
  _BYTE *v2; // rdx

  *a2 += 39LL;
  v2 = (_BYTE *)*((_QWORD *)*a1 - 1);
  if ( (unsigned __int64)((_BYTE *)*a1 - v2 - 8) > 0x1F )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
    JUMPOUT(0x18006839ALL);
  }
  *a1 = v2;
}
