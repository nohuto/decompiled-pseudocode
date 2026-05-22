/*
 * XREFs of ?ProcessResult@DragNDropProcessor@@QEAAJKAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientProxy@@@Z @ 0x1800FAC90
 * Callers:
 *     ?ProcessResult@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientProxy@@@Z @ 0x1800F6080 (-ProcessResult@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IAEBUDragOperatio.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180046088 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800FC7B8 (-erase@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@K_ea_1800FC7B8.c)
 *     ?TryActivate@ActivationProcessor@@QEAA_NPEAUInputInfo@@UActivationInformation@@UtagPOINT@@@Z @ 0x18017174C (-TryActivate@ActivationProcessor@@QEAA_NPEAUInputInfo@@UActivationInformation@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall DragNDropProcessor::ProcessResult(
        DragNDropProcessor *this,
        int a2,
        const struct Windows::UI::Internal::Input::DragOperationResult *a3,
        struct BamoDragManagerClientProxy *a4)
{
  char *v5; // rbx
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+58h] [rbp+10h] BYREF
  struct BamoDragManagerClientProxy *v18; // [rsp+68h] [rbp+20h] BYREF

  v18 = a4;
  v17 = a2;
  v5 = (char *)this + 176;
  v7 = *((_QWORD *)this + 28) & std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v17, 4uLL);
  while ( 1 )
  {
    v8 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
           (__int64)v5,
           &v18,
           v7);
    if ( v9 == *v8 )
      break;
    if ( *(_DWORD *)(v9 + 16) == a2 )
      goto LABEL_6;
  }
  v9 = *((_QWORD *)v5 + 1);
LABEL_6:
  if ( v9 != *(_QWORD *)(v10 + 184) )
  {
    if ( *(_BYTE *)a3 )
    {
      v11 = *(_QWORD *)(v9 + 40);
      v12 = *(_QWORD *)(v9 + 24);
      v13 = *(_QWORD *)(v10 + 40);
      v15 = *(_QWORD *)(v9 + 32);
      v16 = *((_DWORD *)a3 + 1);
      ((void (__fastcall *)(__int64, __int64, __int64 *, __int64))ActivationProcessor::TryActivate)(v13, v12, &v15, v11);
    }
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::erase(
      v5,
      &v17);
  }
  return 0LL;
}
