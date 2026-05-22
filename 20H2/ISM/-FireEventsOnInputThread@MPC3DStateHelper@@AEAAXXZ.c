/*
 * XREFs of ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x180069120
 * Callers:
 *     _lambda_cd53c665379f6d6b73078d77a45af54d_::_lambda_invoker_cdecl_ @ 0x180068A20 (_lambda_cd53c665379f6d6b73078d77a45af54d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EF4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18002174C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800298C0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x180068A38 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AX_N@Z@0@0AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x180068AB8 (--$_Destroy_range@V-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV-$function@$$A6AX_.c)
 *     ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAAEAV?$function@$$A6AX_N@Z@1@AEAV21@@Z @ 0x180068F38 (--$emplace_back@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocato.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180069098 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ??R?$_Func_class@XE@std@@QEBAXE@Z @ 0x1800690E4 (--R-$_Func_class@XE@std@@QEBAXE@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPC3DStateHelper::FireEventsOnInputThread(PSRWLOCK SRWLock)
{
  char v2; // si
  char v3; // r12
  char Ptr_high; // r15
  char v5; // r14
  _QWORD *Ptr; // rbx
  _QWORD *v7; // rdx
  _QWORD *v8; // rbx
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 i; // rbx
  __int64 v13; // r14
  __int64 j; // rbx
  void *v15; // rdx
  wil::details *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  LPVOID v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rbx
  void *v24; // rbx
  __int128 v25; // [rsp+30h] [rbp-30h] BYREF
  __int64 v26; // [rsp+40h] [rbp-20h]
  __int128 v27; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28; // [rsp+58h] [rbp-8h]
  _QWORD *v29; // [rsp+90h] [rbp+30h] BYREF
  PSRWLOCK v30; // [rsp+98h] [rbp+38h] BYREF

  v27 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  AcquireSRWLockExclusive(SRWLock);
  v30 = SRWLock;
  v2 = BYTE6(SRWLock[2].Ptr);
  v3 = BYTE4(SRWLock[2].Ptr);
  Ptr_high = HIBYTE(SRWLock[2].Ptr);
  v5 = BYTE5(SRWLock[2].Ptr);
  BYTE4(SRWLock[2].Ptr) = v2;
  BYTE5(SRWLock[2].Ptr) = Ptr_high;
  Ptr = SRWLock[6].Ptr;
  v7 = (_QWORD *)*Ptr;
  v29 = (_QWORD *)*Ptr;
  while ( v7 != Ptr )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>(
      (__int64 *)&v27,
      (__int64)(v7 + 5));
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v29);
    v7 = v29;
  }
  v8 = SRWLock[4].Ptr;
  v9 = (_QWORD *)*v8;
  v29 = (_QWORD *)*v8;
  while ( v9 != v8 )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>(
      (__int64 *)&v25,
      (__int64)(v9 + 5));
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v29);
    v9 = v29;
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ( Ptr_high != v5 )
  {
    v11 = *((_QWORD *)&v27 + 1);
    for ( i = v27; i != v11; i += 64LL )
      std::_Func_class<void,unsigned char>::operator()(i, Ptr_high);
  }
  if ( v2 != v3 )
  {
    v13 = *((_QWORD *)&v25 + 1);
    for ( j = v25; j != v13; j += 64LL )
      std::_Func_class<void,unsigned char>::operator()(j, v2);
    AcquireSRWLockExclusive(SRWLock);
    if ( v2 )
      v16 = (wil::details *)SRWLock[8].Ptr;
    else
      v16 = (wil::details *)SRWLock[9].Ptr;
    wil::details::SetEvent(v16, v15);
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ( ISMTracing::IsEnabled(v10) )
  {
    wil::details::static_lazy<ISMTracing>::get(v17, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( ISMTracing::IsEnabled(v18) )
    {
      v20 = wil::details::static_lazy<ISMTracing>::get(
              v19,
              _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      if ( **((_DWORD **)v20 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v20 + 1), 1LL) )
      {
        LOBYTE(v29) = Ptr_high;
        LOBYTE(v30) = v2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          v21,
          byte_1801C747B,
          v21,
          v22,
          (__int64)&v30,
          (__int64)&v29);
      }
    }
  }
  v23 = (void *)v25;
  if ( (_QWORD)v25 )
  {
    std::_Destroy_range<std::allocator<std::function<void (bool)>>>(v25, *((__int64 *)&v25 + 1));
    std::_Deallocate<16,0>(v23, (const struct std::nothrow_t *)((v26 - (_QWORD)v23) & 0xFFFFFFFFFFFFFFC0uLL));
    v25 = 0LL;
    v26 = 0LL;
  }
  v24 = (void *)v27;
  if ( (_QWORD)v27 )
  {
    std::_Destroy_range<std::allocator<std::function<void (bool)>>>(v27, *((__int64 *)&v27 + 1));
    std::_Deallocate<16,0>(v24, (const struct std::nothrow_t *)((v28 - (_QWORD)v24) & 0xFFFFFFFFFFFFFFC0uLL));
  }
}
