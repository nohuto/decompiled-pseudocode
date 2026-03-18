/*
 * XREFs of ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x1800805F0
 * Callers:
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x180113676 (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 * Callees:
 *     ?MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z @ 0x180017E6C (-MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z.c)
 *     ?GetCommonSuperset@CRenderingEffect@@SA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAV1@0@Z @ 0x180018D14 (-GetCommonSuperset@CRenderingEffect@@SA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@.c)
 *     ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180019080 (-PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x1800803E4 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x180113676 (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 */

void __fastcall CBatchOptimizer::ConsolidateAdjacentHomogeneousLayers(CBatchOptimizer *this, int a2)
{
  __int64 v3; // rcx
  char *v4; // rdi
  __int64 *v5; // rsi
  char *v6; // rbx
  __int64 *v7; // r14
  CBatchOptimizer *v8; // r9
  int v9; // r10d
  _QWORD *CommonSuperset; // rax
  void (__fastcall ***v11)(_QWORD); // rbx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 != *((_DWORD *)this + 8) - 1 )
  {
    v3 = 520LL * *((int *)this + a2 + 12);
    if ( *(_DWORD *)((char *)this + v3 + 100) )
    {
      v4 = (char *)this + v3;
      v5 = (__int64 *)((char *)this + v3 + 112);
      if ( *v5 )
      {
        v6 = (char *)this + 520 * *((int *)this + a2 + 13);
        v7 = (__int64 *)(v6 + 112);
        if ( *((_QWORD *)v6 + 14) )
        {
          if ( CBatchOptimizer::MatchStateToHomogeneousLayer(
                 (const struct SharedStateLayer *)(v4 + 80),
                 (const struct SharedStateLayer::StateBlock *)(v6 + 80)) )
          {
            CBatchOptimizer::PurgeStateSettingEntriesFromLayer(v8, v9 + 1);
            if ( !*((_DWORD *)v6 + 26) )
            {
              CommonSuperset = CRenderingEffect::GetCommonSuperset(&v12, *v5, *v7);
              v11 = (void (__fastcall ***)(_QWORD))*CommonSuperset;
              *CommonSuperset = 0LL;
              if ( v12 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
              if ( v11 )
              {
                wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v5, v11);
                wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v7, v11);
                *((_DWORD *)v4 + 26) = 1;
                (*v11)[1](v11);
              }
            }
          }
        }
      }
    }
    else
    {
      CBatchOptimizer::TryRemoveEmptyStateSettingLayer(this, a2);
    }
  }
}
