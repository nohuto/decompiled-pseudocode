/*
 * XREFs of ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x180208534
 * Callers:
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x1801EACCC (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 *     ?OnComponentsChanged@CSceneNode@@QEAAXXZ @ 0x1801EAF88 (-OnComponentsChanged@CSceneNode@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??$_Lbound@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEBQEAVCSceneNode@@@Z @ 0x1801E8838 (--$_Lbound@PEAVCSceneNode@@@-$_Tree@V-$_Tmap_traits@PEAVCSceneNode@@PEAXU-$less@PEAVCSceneNode@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SpatialCompositionLabel@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801E8FF4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SpatialCompositionLabel@@@details@wil@@QE.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCSceneNode@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCSceneNode@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180208354 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVCSceneNode@@@2@V-$tuple@$$V@2@@-$.c)
 *     ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x18020847C (-DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z.c)
 */

__int64 __fastcall CSceneComponent::HydrateSpectreResources(CSceneComponent *this, struct CSceneNode *a2)
{
  __int64 *v2; // rsi
  __int64 *v4; // rax
  struct CSceneNode *v5; // r9
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64, struct CSceneNode **); // rbx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  struct CSceneNode *v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  struct CSceneNode *v19; // [rsp+60h] [rbp+30h] BYREF
  struct CSceneNode *v20; // [rsp+68h] [rbp+38h] BYREF
  struct CSceneNode **v21; // [rsp+70h] [rbp+40h] BYREF
  __int64 v22; // [rsp+78h] [rbp+48h] BYREF

  v20 = a2;
  v2 = (__int64 *)((char *)this + 56);
  v19 = a2;
  v4 = std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Lbound<CSceneNode *>(
         (__int64 *)this + 7,
         &v19);
  if ( v4 == (__int64 *)*v2 || (unsigned __int64)v5 < v4[4] )
    v4 = (__int64 *)*v2;
  if ( v4 != (__int64 *)*v2 )
    goto LABEL_11;
  v6 = *((_QWORD *)v5 + 16);
  v7 = *(__int64 (__fastcall **)(__int64, __int64, struct CSceneNode **))(*(_QWORD *)v6 + 48LL);
  v8 = (*(__int64 (__fastcall **)(CSceneComponent *))(*(_QWORD *)this + 200LL))(this);
  v9 = v7(v6, v8, &v19);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x28u, 0LL);
  }
  else
  {
    v12 = v19;
    v13 = std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Lbound<CSceneNode *>(
            v2,
            &v20);
    if ( v13 == (__int64 *)*v2 || (unsigned __int64)v20 < v13[4] )
    {
      v21 = &v20;
      v13 = (__int64 *)*std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<CSceneNode * const &>,std::tuple<>>(
                          v2,
                          &v22,
                          v13,
                          v14,
                          &v21);
    }
    v13[5] = (__int64)v12;
    v15 = (*(__int64 (__fastcall **)(CSceneComponent *, struct CSceneNode *))(*(_QWORD *)this + 208LL))(this, v19);
    v11 = v15;
    if ( v15 >= 0 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_SpatialCompositionLabel>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_SpatialCompositionLabel>::GetImpl'::`2'::impl,
        0,
        v17);
      v5 = v20;
LABEL_11:
      v11 = 0;
      goto LABEL_12;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x2Bu, 0LL);
  }
  v5 = v20;
LABEL_12:
  if ( v11 < 0 )
    CSceneComponent::DehydrateSpectreResources(this, v5);
  return (unsigned int)v11;
}
