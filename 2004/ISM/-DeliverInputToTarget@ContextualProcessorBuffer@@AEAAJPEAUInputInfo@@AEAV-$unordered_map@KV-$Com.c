/*
 * XREFs of ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x18014B91C
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18014B2A0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnDeferredContextualProcessorResponse@ContextualProcessorBuffer@@UEAAJPEAUIContextualProcessor@@AEAUContextualProcessorResponse@@@Z @ 0x18014C810 (-OnDeferredContextualProcessorResponse@ContextualProcessorBuffer@@UEAAJPEAUIContextualProcessor@.c)
 * Callees:
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000F088 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x180033780 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ContextualProcessorEntry@ContextualProcessorManager@@QEAA@XZ @ 0x1800419E0 (--1ContextualProcessorEntry@ContextualProcessorManager@@QEAA@XZ.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x180045540 (-equal_range@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x18007A790 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z @ 0x1800A2A80 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z.c)
 *     ??0?$unordered_map@KW4ContextualProcessorState@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@@std@@QEAA@XZ @ 0x1800AE284 (--0-$unordered_map@KW4ContextualProcessorState@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$p.c)
 *     ??1?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800AE6C0 (--1-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_compare@GU-$hash.c)
 *     ??$_Insert_unverified@$$CBKU_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@$$QEBKU_Not_a_node_tag@1@@Z @ 0x1800F6964 (--$_Insert_unverified@$$CBKU_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-.c)
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x18014A46C (--$_Try_emplace@AEBK$$V@-$unordered_map@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@K@std@.c)
 *     ??$_Try_emplace@PEAUIInputTarget@@$$V@?$unordered_map@PEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@U?$hash@PEAUIInputTarget@@@3@U?$equal_to@PEAUIInputTarget@@@3@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAUIInputTarget@@@Z @ 0x18014A518 (--$_Try_emplace@PEAUIInputTarget@@$$V@-$unordered_map@PEAUIInputTarget@@V-$unordered_set@KU-$has.c)
 *     ??0?$_Hash@V?$_Umap_traits@PEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@V?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@3@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@1@AEBV?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@1@@Z @ 0x18014AC10 (--0-$_Hash@V-$_Umap_traits@PEAUIInputTarget@@V-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-.c)
 *     ??1?$unordered_map@PEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@U?$hash@PEAUIInputTarget@@@3@U?$equal_to@PEAUIInputTarget@@@3@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@3@@std@@QEAA@XZ @ 0x18014ADD4 (--1-$unordered_map@PEAUIInputTarget@@V-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocat.c)
 *     ??R?$_Func_class@XPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAU1@@std@@QEBAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@1@0@Z @ 0x18014B1E0 (--R-$_Func_class@XPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocato.c)
 *     ??R?$_Func_class@XPEAUInputInfo@@PEAK@std@@QEBAXPEAUInputInfo@@PEAK@Z @ 0x18014B228 (--R-$_Func_class@XPEAUInputInfo@@PEAK@std@@QEBAXPEAUInputInfo@@PEAK@Z.c)
 *     ?Get@InfoMetadata@@SAPEAV1@XZ @ 0x1801A49B4 (-Get@InfoMetadata@@SAPEAV1@XZ.c)
 *     ?GetInput@InfoMetadata@@QEAAPEBUInputInfoMetadata@1@W4InputType@@@Z @ 0x1801A49F4 (-GetInput@InfoMetadata@@QEAAPEBUInputInfoMetadata@1@W4InputType@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ContextualProcessorBuffer::DeliverInputToTarget(
        _QWORD *a1,
        unsigned int *a2,
        _QWORD *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 **v9; // r15
  __int64 *i; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  struct InfoMetadata *v16; // rax
  __int64 Input; // r12
  __int64 v18; // r8
  const char *v19; // r9
  const unsigned __int8 **v20; // r15
  const unsigned __int8 *j; // rdi
  _QWORD *v22; // rax
  _QWORD *v23; // rdi
  _DWORD *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 k; // r15
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  unsigned int v32; // esi
  __int64 v33; // rdx
  __int64 v34; // rcx
  const struct std::nothrow_t *v35; // rdx
  const struct std::nothrow_t *v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // eax
  int v39; // [rsp+30h] [rbp-B1h] BYREF
  _DWORD *v40; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v41; // [rsp+40h] [rbp-A1h] BYREF
  _QWORD *v42; // [rsp+48h] [rbp-99h] BYREF
  _QWORD *v43; // [rsp+50h] [rbp-91h]
  _QWORD v44[3]; // [rsp+58h] [rbp-89h] BYREF
  char v45[8]; // [rsp+70h] [rbp-71h] BYREF
  _QWORD *v46; // [rsp+78h] [rbp-69h]
  __int64 v47; // [rsp+80h] [rbp-61h]
  _BYTE v48[64]; // [rsp+B0h] [rbp-31h] BYREF
  char v49[64]; // [rsp+F0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+57h]
  int v51; // [rsp+148h] [rbp+67h] BYREF
  __int64 v52; // [rsp+158h] [rbp+77h]

  v52 = a4;
  if ( *a2 == 4096 && *((_BYTE *)a2 + 125) )
    return 0LL;
  v9 = (__int64 **)a1[13];
  for ( i = *v9; i != (__int64 *)v9; i = (__int64 *)*i )
  {
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
      a3,
      &v42,
      (const unsigned __int8 *)i + 16);
    v11 = v42;
    v12 = 0LL;
    while ( v11 != v43 )
    {
      ++v12;
      v11 = (_QWORD *)*v11;
    }
    if ( !v12 )
    {
      std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::_Try_emplace<unsigned long const &,>(
        (__int64)a3,
        (__int64)v44,
        (const unsigned __int8 *)i + 16);
      Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)(v44[0] + 24LL), i + 3);
    }
  }
  v13 = *(_QWORD *)(a1[20] + 16LL);
  v41 = v13;
  Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef(&v41);
  v51 = 0;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
    a3,
    &v42,
    (const unsigned __int8 *)&v51);
  v14 = v42;
  v15 = 0LL;
  while ( v14 != v43 )
  {
    ++v15;
    v14 = (_QWORD *)*v14;
  }
  if ( v15 )
  {
    v51 = 0;
    std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::_Try_emplace<unsigned long const &,>(
      (__int64)a3,
      (__int64)v44,
      (const unsigned __int8 *)&v51);
    Microsoft::WRL::ComPtr<IInputTarget>::operator=(&v41, (__int64 *)(v44[0] + 24LL));
    v13 = v41;
  }
  v16 = InfoMetadata::Get();
  Input = InfoMetadata::GetInput(v16, *a2);
  if ( Input )
  {
    v39 = 0;
    std::_Hash<std::_Umap_traits<IInputTarget *,std::unordered_set<unsigned long>,std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>,std::allocator<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>,0>>::_Hash<std::_Umap_traits<IInputTarget *,std::unordered_set<unsigned long>,std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>,std::allocator<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>,0>>(
      (__int64)v45,
      &v39);
    v20 = (const unsigned __int8 **)a3[1];
    for ( j = *v20; j != (const unsigned __int8 *)v20; j = *(const unsigned __int8 **)j )
    {
      if ( *((_DWORD *)j + 4) && *((_QWORD *)j + 3) != v13 )
      {
        v40 = (_DWORD *)*((_QWORD *)j + 3);
        std::unordered_map<IInputTarget *,std::unordered_set<unsigned long>>::_Try_emplace<IInputTarget *,>(
          (__int64)v45,
          (__int64)v44,
          (const unsigned __int8 *)&v40);
        std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Insert_unverified<unsigned long const,std::_Not_a_node_tag>(
          v44[0] + 24LL,
          (__int64)&v42,
          j + 16);
      }
    }
    if ( v47 )
    {
      v22 = v46;
      v42 = v46;
      v23 = (_QWORD *)*v46;
      while ( v23 != v22 )
      {
        VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
          (void **)&v40,
          (int *)a2,
          v18,
          v19);
        v24 = v40;
        std::_Func_class<void,InputInfo *,std::unordered_set<unsigned long> &,InputInfo *>::operator()(
          Input,
          (__int64)a2,
          (__int64)(v23 + 3),
          v40);
        std::unordered_map<unsigned long,enum ContextualProcessorState>::unordered_map<unsigned long,enum ContextualProcessorState>(
          (__int64)v48,
          v25,
          v26);
        for ( k = 0LL; (unsigned int)k < v24[53]; k = (unsigned int)(k + 1) )
        {
          v39 = v24[36 * k + 55];
          std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
            a5,
            v44,
            (const unsigned __int8 *)&v39);
          v28 = (_QWORD *)v44[0];
          v29 = 0LL;
          while ( v28 != (_QWORD *)v44[1] )
          {
            ++v29;
            v28 = (_QWORD *)*v28;
          }
          if ( v29 )
            std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Insert_unverified<unsigned long const,std::_Not_a_node_tag>(
              (__int64)v48,
              (__int64)v49,
              (const unsigned __int8 *)&v39);
        }
        std::_Func_class<void,InputInfo *,unsigned long *>::operator()(Input + 128, (__int64)v24, (__int64)&v51);
        if ( v51 )
        {
          v30 = a1[21];
          if ( v30 )
          {
            v31 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _BYTE *, _QWORD))(*(_QWORD *)v30 + 24LL))(
                    v30,
                    v24,
                    v48,
                    v23[2]);
            v32 = v31;
            if ( v31 < 0 )
            {
              v33 = 918LL;
LABEL_42:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v33,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
                (const char *)(unsigned int)v31);
              std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::~_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>((__int64)v48);
              VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v40, v36);
              goto LABEL_45;
            }
          }
          else
          {
            v34 = v23[2];
            if ( v34 )
            {
              v31 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v34 + 24LL))(v34, v24);
              v32 = v31;
              if ( v31 < 0 )
              {
                v33 = 922LL;
                goto LABEL_42;
              }
            }
          }
        }
        std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::~_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>((__int64)v48);
        VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v40, v35);
        v23 = (_QWORD *)*v23;
        v22 = v42;
      }
    }
    std::_Func_class<void,InputInfo *,unsigned long *>::operator()(Input + 128, (__int64)a2, (__int64)&v51);
    if ( !v51 )
    {
      v32 = 0;
LABEL_45:
      std::unordered_map<IInputTarget *,std::unordered_set<unsigned long>>::~unordered_map<IInputTarget *,std::unordered_set<unsigned long>>((__int64)v45);
      goto LABEL_56;
    }
    std::unordered_map<IInputTarget *,std::unordered_set<unsigned long>>::~unordered_map<IInputTarget *,std::unordered_set<unsigned long>>((__int64)v45);
  }
  v37 = a1[21];
  if ( v37 )
  {
    if ( v13 == *(_QWORD *)(a1[20] + 16LL) && *(_QWORD *)(v52 + 16) )
      v38 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64))(*(_QWORD *)v37 + 32LL))(v37, a2, v52);
    else
      v38 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD *, __int64))(*(_QWORD *)v37 + 24LL))(
              v37,
              a2,
              a5,
              v13);
  }
  else
  {
    if ( !v13 )
    {
      v32 = 0;
      goto LABEL_56;
    }
    v38 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 24LL))(v13, a2);
  }
  v32 = v38;
LABEL_56:
  ContextualProcessorManager::ContextualProcessorEntry::~ContextualProcessorEntry(&v41);
  return v32;
}
