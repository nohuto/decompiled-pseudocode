/*
 * XREFs of ?Copy@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@0@Z @ 0x1801A46C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x180023804 (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x1800454F0 (-equal_range@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash.c)
 */

__int64 __fastcall PointerMetadata::Copy(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _OWORD *v10; // rax
  _OWORD *v11; // rdx
  __int64 result; // rax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a3 + 212) = 0;
  v3 = 0LL;
  if ( !*(_DWORD *)(a1 + 212) )
    goto LABEL_10;
  do
  {
    v14 = *(_DWORD *)(a1 + 144 * v3 + 220);
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
      a2,
      v13,
      (const unsigned __int8 *)&v14);
    v7 = (_QWORD *)v13[0];
    v8 = 0LL;
    while ( v7 != (_QWORD *)v13[1] )
    {
      v7 = (_QWORD *)*v7;
      ++v8;
    }
    v9 = *(unsigned int *)(a3 + 212);
    if ( v8 )
    {
      v10 = (_OWORD *)(144 * v3 + a1 + 216);
      v11 = (_OWORD *)(144 * v9 + a3 + 216);
      *v11 = *v10;
      v11[1] = v10[1];
      v11[2] = v10[2];
      v11[3] = v10[3];
      v11[4] = v10[4];
      v11[5] = v10[5];
      v11[6] = v10[6];
      v11[7] = v10[7];
      v11[8] = v10[8];
      LODWORD(v9) = ++*(_DWORD *)(a3 + 212);
    }
    v3 = (unsigned int)(v3 + 1);
  }
  while ( (unsigned int)v3 < *(_DWORD *)(a1 + 212) );
  if ( (_DWORD)v9 )
    result = PointerInputInfo::GetSizeForPointerCount(v9);
  else
LABEL_10:
    result = 360LL;
  *(_DWORD *)(a3 + 24) = result;
  return result;
}
