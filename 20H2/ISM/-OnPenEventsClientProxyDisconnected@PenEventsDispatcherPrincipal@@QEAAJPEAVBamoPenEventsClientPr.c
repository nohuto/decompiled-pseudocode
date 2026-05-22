/*
 * XREFs of ?OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@@Z @ 0x18013358C
 * Callers:
 *     ?OnDisconnected@PenEventsClientCustomProxy@@MEAAJXZ @ 0x180133280 (-OnDisconnected@PenEventsClientCustomProxy@@MEAAJXZ.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180019010 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035138 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x1800454F0 (-equal_range@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180096C74 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@2@V32@@Z @ 0x180098E78 (-erase@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$alloc.c)
 *     ?erase@?$list@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x180130D08 (-erase@-$list@U-$pair@QEAXV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V-$all.c)
 */

__int64 __fastcall PenEventsDispatcherPrincipal::OnPenEventsClientProxyDisconnected(
        PenEventsDispatcherPrincipal *this,
        struct BamoPenEventsClientProxy *a2)
{
  _QWORD *v4; // rax
  _DWORD *v5; // rdi
  _QWORD *v6; // r14
  __int64 v7; // rcx
  struct BamoPenEventsClientProxy **i; // rdi
  __int64 appended; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  struct BamoPenEventsClientProxy *v12; // rax
  _QWORD *v13; // rsi
  _QWORD *Ptr; // rax
  __int64 v15; // rcx
  _QWORD *j; // rdi
  __int64 v17; // rcx
  _QWORD *v18; // rdi
  _QWORD *v19; // rbx
  _QWORD *k; // rax
  _QWORD **v21; // rdx
  void *v22; // rdi
  unsigned __int64 v23; // rcx
  __int64 v25; // r8
  unsigned __int8 v26[8]; // [rsp+30h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+38h] [rbp-28h] BYREF

  v4 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)this,
         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v5 = (_DWORD *)v4[1];
  if ( *v5 > 4u && tlgKeywordOn(v4[1], 512LL) )
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_1801CE2D3, 0LL, 0LL, 2u, &v27);
  v6 = (_QWORD *)((char *)this + 64);
  *(_DWORD *)v26 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 4) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 4) + 16LL))
                             + 32);
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
    (_QWORD *)this + 8,
    &v27,
    v26);
  for ( i = (struct BamoPenEventsClientProxy **)v27.Ptr;
        i != *(struct BamoPenEventsClientProxy ***)&v27.Size;
        i = (struct BamoPenEventsClientProxy **)*i )
  {
    if ( i[3] == a2 )
    {
      appended = std::_Fnv1a_append_bytes(v7, (const unsigned __int8 *const)i + 16, 4uLL);
      v10 = *((_QWORD *)this + 11);
      v11 = 2 * (*((_QWORD *)this + 14) & appended);
      if ( *(struct BamoPenEventsClientProxy ***)(v10 + 16 * (*((_QWORD *)this + 14) & appended) + 8) == i )
      {
        if ( *(struct BamoPenEventsClientProxy ***)(v10 + 16 * (*((_QWORD *)this + 14) & appended)) == i )
        {
          *(_QWORD *)(v10 + 16 * (*((_QWORD *)this + 14) & appended)) = *((_QWORD *)this + 9);
          v10 = *((_QWORD *)this + 11);
          v12 = (struct BamoPenEventsClientProxy *)*((_QWORD *)this + 9);
        }
        else
        {
          v12 = i[1];
        }
        *(_QWORD *)(v10 + 8 * v11 + 8) = v12;
      }
      else if ( *(struct BamoPenEventsClientProxy ***)(v10 + 16 * (*((_QWORD *)this + 14) & appended)) == i )
      {
        *(_QWORD *)(v10 + 16 * (*((_QWORD *)this + 14) & appended)) = *i;
      }
      std::list<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>::erase(
        (__int64)this + 72,
        &v27,
        i);
      break;
    }
  }
  v13 = (_QWORD *)((char *)this + 128);
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
    v13,
    &v27,
    v26);
  Ptr = (_QWORD *)v27.Ptr;
  v15 = 0LL;
  while ( Ptr != *(_QWORD **)&v27.Size )
  {
    Ptr = (_QWORD *)*Ptr;
    ++v15;
  }
  if ( v15 )
  {
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
      v6,
      &v27,
      v26);
    for ( j = (_QWORD *)v27.Ptr; j != *(_QWORD **)&v27.Size; j = (_QWORD *)*j )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(j[3] + 8LL) + 120LL))(j[3] + 8LL) )
        return 0LL;
    }
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
      v13,
      &v27,
      v26);
    v18 = (_QWORD *)v27.Ptr;
    v19 = *(_QWORD **)&v27.Size;
    for ( k = (_QWORD *)v27.Ptr; k != *(_QWORD **)&v27.Size; k = (_QWORD *)*k )
      ;
    v21 = (_QWORD **)v13[1];
    if ( (_QWORD *)v27.Ptr == *v21 && *(_QWORD ***)&v27.Size == v21 )
    {
      std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
        v17,
        v21);
      *(_QWORD *)v13[1] = v13[1];
      *(_QWORD *)(v13[1] + 8LL) = v13[1];
      v13[2] = 0LL;
      v22 = (void *)v13[3];
      v23 = (unsigned __int64)(v13[4] - (_QWORD)v22 + 7LL) >> 3;
      if ( (unsigned __int64)v22 > v13[4] )
        v23 = 0LL;
      if ( v23 )
        memset64(v22, v13[1], v23);
    }
    else
    {
      while ( v18 != v19 )
      {
        v25 = (__int64)v18;
        v18 = (_QWORD *)*v18;
        std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::erase(
          v13,
          &v27,
          v25);
      }
    }
  }
  return 0LL;
}
