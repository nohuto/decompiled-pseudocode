/*
 * XREFs of ?CancelDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z @ 0x180174AA8
 * Callers:
 *     ?Thunk_CancelDrag_0@?$IDragNDrop_Receive@VDragNDropProcessorLegacy@@@DragNDropMessageCall@@SAJPEAXPEAPEAX@Z @ 0x180176370 (-Thunk_CancelDrag_0@-$IDragNDrop_Receive@VDragNDropProcessorLegacy@@@DragNDropMessageCall@@SAJPE.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180035628 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180046088 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$_Insert_unverified@$$CBKU_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@$$QEBKU_Not_a_node_tag@1@@Z @ 0x1800F6D34 (--$_Insert_unverified@$$CBKU_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-.c)
 *     ??$emplace@AEAKH@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAH@Z @ 0x180174730 (--$emplace@AEAKH@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@s.c)
 *     ?DragCancelledLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x180174E18 (-DragCancelledLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Window.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@W4InputType@@PEA_KPEAU2@23@Z @ 0x180175308 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@W4InputType@@PEA_KPEAU2@23@Z.c)
 */

__int64 __fastcall DragNDropProcessorLegacy::CancelDrag(
        DragNDropProcessorLegacy *this,
        struct tagMsgRoutingInfo *a2,
        unsigned int a3)
{
  __int64 appended; // rsi
  __int64 v7; // r11
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // r10
  __int64 v16; // rsi
  __int64 v17; // r8
  int v18; // r12d
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v24; // [rsp+20h] [rbp-99h]
  unsigned int v25; // [rsp+70h] [rbp-49h] BYREF
  unsigned __int8 v26[8]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v27; // [rsp+80h] [rbp-39h] BYREF
  __int64 v28; // [rsp+88h] [rbp-31h] BYREF
  __int64 v29; // [rsp+90h] [rbp-29h] BYREF
  _QWORD v30[2]; // [rsp+98h] [rbp-21h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-11h] BYREF
  _OWORD v32[2]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v33; // [rsp+D0h] [rbp+17h]

  *(_DWORD *)v26 = a3;
  v25 = a3;
  appended = std::_Fnv1a_append_bytes((__int64)this, v26, 4uLL);
  v8 = appended & *(_QWORD *)(v7 + 48);
  while ( 1 )
  {
    v9 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
           v7,
           v30,
           v8);
    if ( v10 == *v9 )
      break;
    if ( *(_DWORD *)(v10 + 16) == a3 )
      goto LABEL_6;
  }
  v10 = *(_QWORD *)(v7 + 8);
LABEL_6:
  if ( v10 != *((_QWORD *)this + 19) )
  {
    v11 = *(_QWORD *)(v10 + 24);
    v12 = *((_QWORD *)this + 4);
    v33 = 0LL;
    memset(v32, 0, sizeof(v32));
    v30[0] = v11;
    if ( (*(int (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v12 + 128LL))(v12, v11, v32) >= 0 )
    {
      if ( operator==((__int64)v32, (__int64)a2) )
      {
        v13 = appended & *((_QWORD *)this + 16);
        while ( 1 )
        {
          v14 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                  (__int64)this + 80,
                  &v27,
                  v13);
          if ( v15 == *v14 )
            break;
          if ( *(_DWORD *)(v15 + 16) == a3 )
            goto LABEL_14;
        }
        v15 = *((_QWORD *)this + 11);
LABEL_14:
        if ( v15 != *((_QWORD *)this + 11) )
        {
          v16 = *(_QWORD *)(v15 + 20);
          v17 = *(unsigned int *)(v15 + 28);
          v18 = *(_DWORD *)(v15 + 32);
          v27 = 0LL;
          v28 = 0LL;
          v29 = v16;
          v31 = v16;
          DragNDropProcessorLegacy::HitTest(this, v16, v17, &v27, &v29, &v28, &v31);
          v19 = v31;
          v20 = v29;
          InputETW::DragNDrop::DragCancelledLegacy(v25, v16, v27, v29, v28, v31, v18);
          v29 = v20;
          v21 = v30[0];
          LOWORD(v24) = 3;
          v22 = *((_QWORD *)this + 8);
          v27 = v19;
          v28 = v16;
          CoreUICallSend(v22, v30, 1LL, 1LL, v24, &unk_1801C744E, v25);
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 160LL))(*((_QWORD *)this + 4), v21);
          v25 = 0;
          std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,int>(
            (__int64)this + 144,
            (__int64)v30,
            v26,
            (int *)&v25);
          std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Insert_unverified<unsigned long const,std::_Not_a_node_tag>(
            (__int64)this + 208,
            (__int64)v30,
            v26);
        }
      }
    }
  }
  return 0LL;
}
