/*
 * XREFs of ?SendCancelNotificationToGestureTargeting@Win32kInterop@@AEAAXAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@@Z @ 0x1800B280C
 * Callers:
 *     ?MakeRoutingDecisionsForAllFrames@Win32kInterop@@AEAAJAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x1800B0A14 (-MakeRoutingDecisionsForAllFrames@Win32kInterop@@AEAAJAEAV-$unordered_set@KU-$hash@K@std@@U-$equ.c)
 * Callees:
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x180045540 (-equal_range@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?InitializeInputMessageWithInputInfo@@YAXPEBUPointerInputInfo@@PEAPEAU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800B0594 (-InitializeInputMessageWithInputInfo@@YAXPEBUPointerInputInfo@@PEAPEAU_MIT_INPUT_INTEROP_MESSAGE.c)
 */

void __fastcall Win32kInterop::SendCancelNotificationToGestureTargeting(void *a1, _QWORD *a2, __int64 a3)
{
  char *v5; // rbx
  unsigned int i; // edi
  __int64 v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rcx
  const struct std::nothrow_t *v10; // rdx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  void *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1;
  InitializeInputMessageWithInputInfo((const struct PointerInputInfo *)a3, (struct _MIT_INPUT_INTEROP_MESSAGE **)&v12);
  v5 = (char *)v12;
  for ( i = 0; i < *(_DWORD *)(a3 + 212); ++i )
  {
    v7 = 240LL * i;
    LODWORD(v12) = *(_DWORD *)&v5[v7 + 68];
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
      a2,
      v11,
      (const unsigned __int8 *)&v12);
    v8 = (_QWORD *)v11[0];
    v9 = 0LL;
    while ( v8 != (_QWORD *)v11[1] )
    {
      v8 = (_QWORD *)*v8;
      ++v9;
    }
    if ( v9 )
    {
      *(_DWORD *)&v5[v7 + 76] = 294912;
      *(_DWORD *)&v5[v7 + 296] = 1;
    }
  }
  ((void (__fastcall *)(char *, _QWORD))Win32kInterop::s_pfnMTCallback)(v5, 0LL);
  operator delete(v5, v10);
}
