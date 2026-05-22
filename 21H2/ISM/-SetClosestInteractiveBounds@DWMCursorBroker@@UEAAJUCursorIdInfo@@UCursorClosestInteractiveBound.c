/*
 * XREFs of ?SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBoundsRect@@@Z @ 0x18019C290
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KPEAULegacyDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@2@_K@Z @ 0x180024020 (-_End@-$_Hash@V-$_Umap_traits@KPEAULegacyDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_.c)
 */

__int64 __fastcall DWMCursorBroker::SetClosestInteractiveBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // r10
  int v8; // r11d
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = a2;
  v5 = *(_QWORD *)(a1 + 88) & std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)&v10, 4uLL);
  while ( 1 )
  {
    v6 = std::_Hash<std::_Umap_traits<unsigned long,LegacyDeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,LegacyDeviceInfo *>>,0>>::_End(
           a1 + 40,
           &v10,
           v5);
    if ( v7 == *v6 )
      break;
    if ( *(_DWORD *)(v7 + 16) == v8 )
      goto LABEL_6;
  }
  v7 = *(_QWORD *)(a1 + 48);
LABEL_6:
  if ( v7 != *(_QWORD *)(a1 + 48) )
    *(_OWORD *)(*(_QWORD *)(v7 + 24) + 96LL) = *a3;
  return 0LL;
}
