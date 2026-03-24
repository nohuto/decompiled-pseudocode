/*
 * XREFs of ?SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV?$span@$$CBUSceneMeshMaterialAttributeData@@$0?0@gsl@@_N@Z @ 0x1801E9EA4
 * Callers:
 *     ?ProcessSetUVMappings@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHRENDERERCOMPONENT_SETUVMAPPINGS@@PEBXI@Z @ 0x1801E9CA8 (-ProcessSetUVMappings@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEM.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801CDA5C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@1@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801E92C4 (--$_Insert_hint@AEAU-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU-$_Tree_node@U-$pair@$$.c)
 *     ??C?$span_iterator@V?$span@$$CBUSceneMeshMaterialAttributeData@@$0?0@gsl@@$0A@@details@gsl@@QEBAPEBUSceneMeshMaterialAttributeData@@XZ @ 0x1801E96B4 (--C-$span_iterator@V-$span@$$CBUSceneMeshMaterialAttributeData@@$0-0@gsl@@$0A@@details@gsl@@QEBA.c)
 */

__int64 __fastcall CSceneMeshRendererComponent::SetOrAppendUVMappings(__int64 a1, __int64 *a2, char a3)
{
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 *v10; // r15
  __int64 *v11; // rbx
  int v12; // r12d
  __int64 *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  _QWORD v17[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v18; // [rsp+78h] [rbp+10h] BYREF
  int v19; // [rsp+80h] [rbp+18h]

  if ( !a3 )
  {
    v5 = a1 + 88;
    v6 = *(_QWORD **)(a1 + 88);
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      a1 + 88,
      a1 + 88,
      v6[1]);
    v6[1] = v6;
    *v6 = v6;
    v6[2] = v6;
    *(_QWORD *)(v5 + 8) = 0LL;
  }
  v7 = *a2;
  v8 = 0LL;
  v17[0] = a2;
  while ( 1 )
  {
    v17[1] = v8;
    if ( v8 == v7 )
      break;
    v19 = *(_DWORD *)gsl::details::span_iterator<gsl::span<SceneMeshMaterialAttributeData const,-1>,0>::operator->(v17);
    v9 = gsl::details::span_iterator<gsl::span<SceneMeshMaterialAttributeData const,-1>,0>::operator->(v17);
    v10 = *(__int64 **)(a1 + 88);
    v11 = v10;
    v12 = *(_DWORD *)(v9 + 4);
    v13 = (__int64 *)v10[1];
    while ( !*((_BYTE *)v13 + 25) )
    {
      if ( *((_DWORD *)v13 + 7) >= v19 )
      {
        v11 = v13;
        v13 = (__int64 *)*v13;
      }
      else
      {
        v13 = (__int64 *)v13[2];
      }
    }
    if ( v11 == *(__int64 **)(a1 + 88) || v19 < *((_DWORD *)v11 + 7) )
    {
      v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
      v15 = v19;
      *(_DWORD *)(v14 + 32) = 0;
      *(_DWORD *)(v14 + 28) = v15;
      *(_QWORD *)v14 = v10;
      *(_QWORD *)(v14 + 8) = v10;
      *(_QWORD *)(v14 + 16) = v10;
      *(_WORD *)(v14 + 24) = 0;
      std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Insert_hint<std::pair<enum SceneMaterialInputType::Enum const,unsigned int> &,std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *> *>(
        (__int64 *)(a1 + 88),
        &v18,
        v11,
        (int *)(v14 + 28),
        (_QWORD *)v14);
      v11 = v18;
    }
    *((_DWORD *)v11 + 8) = v12;
    if ( v8 < 0 || (v7 = *a2, v8 == *a2) )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    ++v8;
  }
  *(_BYTE *)(a1 + 104) = 1;
  return 0LL;
}
