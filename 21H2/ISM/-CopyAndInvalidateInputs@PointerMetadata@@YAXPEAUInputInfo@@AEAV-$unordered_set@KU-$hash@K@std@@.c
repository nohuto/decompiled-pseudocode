/*
 * XREFs of ?CopyAndInvalidateInputs@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@0@Z @ 0x1801A4CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x180023554 (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x180046380 (-equal_range@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash.c)
 */

__int64 __fastcall PointerMetadata::CopyAndInvalidateInputs(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v7; // rcx
  __int128 *v8; // rax
  _OWORD *v9; // rdx
  __int128 v10; // xmm0
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 result; // rax
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a3 + 212) = 0;
  v3 = 0LL;
  if ( !*(_DWORD *)(a1 + 212) )
    goto LABEL_11;
  v7 = 0LL;
  do
  {
    v8 = (__int128 *)(144 * v3 + a1 + 216);
    v9 = (_OWORD *)(144 * v7 + a3 + 216);
    v10 = *v8;
    v15 = *(_DWORD *)(a1 + 144 * v3 + 220);
    *v9 = v10;
    v9[1] = v8[1];
    v9[2] = v8[2];
    v9[3] = v8[3];
    v9[4] = v8[4];
    v9[5] = v8[5];
    v9[6] = v8[6];
    v9[7] = v8[7];
    v9[8] = v8[8];
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
      a2,
      v14,
      (const unsigned __int8 *)&v15);
    v11 = (_QWORD *)v14[0];
    v12 = 0LL;
    while ( v11 != (_QWORD *)v14[1] )
    {
      v11 = (_QWORD *)*v11;
      ++v12;
    }
    if ( v12 )
      *(_DWORD *)(a3 + 144 * v3 + 228) |= 0x48000u;
    v3 = (unsigned int)(v3 + 1);
    v7 = (unsigned int)(*(_DWORD *)(a3 + 212) + 1);
    *(_DWORD *)(a3 + 212) = v7;
  }
  while ( (unsigned int)v3 < *(_DWORD *)(a1 + 212) );
  if ( (_DWORD)v7 )
    result = PointerInputInfo::GetSizeForPointerCount(v7);
  else
LABEL_11:
    result = 360LL;
  *(_DWORD *)(a3 + 24) = result;
  return result;
}
