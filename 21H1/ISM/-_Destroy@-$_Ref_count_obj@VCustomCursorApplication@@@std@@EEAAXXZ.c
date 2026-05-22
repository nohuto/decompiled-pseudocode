/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCustomCursorApplication@@@std@@EEAAXXZ @ 0x18013D420
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180011D2C (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2C0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045A74 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800971D4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 */

void __fastcall std::_Ref_count_obj<CustomCursorApplication>::_Destroy(__int64 a1)
{
  char *v2; // rcx
  __int64 v3; // rcx
  std::_Ref_count_base *v4; // rcx

  v2 = *(char **)(a1 + 120);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)(a1 + 112));
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)(a1 + 104));
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy(a1 + 56);
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v3,
    *(_QWORD ***)(a1 + 40));
  std::_Deallocate<16,0>(*(void **)(a1 + 40), (const struct std::nothrow_t *)0x18);
  v4 = *(std::_Ref_count_base **)(a1 + 24);
  if ( v4 )
    std::_Ref_count_base::_Decwref(v4);
}
