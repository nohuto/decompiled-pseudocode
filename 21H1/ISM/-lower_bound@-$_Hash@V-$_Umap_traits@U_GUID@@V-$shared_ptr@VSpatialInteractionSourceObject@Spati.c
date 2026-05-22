/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@U_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@V?$_Uhash_compare@U_GUID@@UGuidHash@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@U?$equal_to@U_GUID@@@std@@@3@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@AEBU_GUID@@@Z @ 0x1800E28C8
 * Callers:
 *     ?OnHandSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAAJAEBU_GUID@@@Z @ 0x1800E07E4 (-OnHandSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Window.c)
 *     ?OnHandSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAAJAEBU_GUID@@@Z @ 0x1800E0B90 (-OnHandSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180045858 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<_GUID,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>,std::_Uhash_compare<_GUID,Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>,0>>::lower_bound(
        __int64 a1,
        __int64 a2,
        unsigned int *a3)
{
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // r10
  _QWORD *v8; // r11
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 48) & (*a3 ^ (*((unsigned __int16 *)a3 + 3) | ((unsigned __int64)*((unsigned __int16 *)a3 + 2) << 16)) ^ (*((unsigned __int8 *)a3 + 15) | ((unsigned __int64)*((unsigned __int8 *)a3 + 10) << 24)));
  do
  {
    v6 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
           a1,
           &v12,
           v5);
    if ( v7 == *v6 )
    {
      *v8 = *(_QWORD *)(a1 + 8);
      return v8;
    }
    v9 = *(_QWORD *)(v7 + 16) - *(_QWORD *)a3;
    if ( !v9 )
      v9 = *(_QWORD *)(v7 + 24) - *((_QWORD *)a3 + 1);
  }
  while ( v9 );
  v10 = *(_QWORD *)a3 - *(_QWORD *)(v7 + 16);
  if ( *(_QWORD *)a3 == *(_QWORD *)(v7 + 16) )
    v10 = *((_QWORD *)a3 + 1) - *(_QWORD *)(v7 + 24);
  if ( v10 )
    v7 = *(_QWORD *)(a1 + 8);
  *v8 = v7;
  return v8;
}
