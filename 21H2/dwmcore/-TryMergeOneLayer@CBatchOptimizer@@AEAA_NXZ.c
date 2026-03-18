/*
 * XREFs of ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18007FFE0
 * Callers:
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180011500 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18007FC60 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800B1970 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1801F0BD8 (-AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@.c)
 * Callees:
 *     ?MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z @ 0x180017E6C (-MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z.c)
 *     ?GetCommonSuperset@CRenderingEffect@@SA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAV1@0@Z @ 0x180018D14 (-GetCommonSuperset@CRenderingEffect@@SA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@.c)
 *     ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180019080 (-PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1800227FC (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180080314 (-AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x1800803E4 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ?SkipContinuations@CBatchOptimizer@@AEBAHH@Z @ 0x180080508 (-SkipContinuations@CBatchOptimizer@@AEBAHH@Z.c)
 *     ?DoesIntersectInclusive@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800807A0 (-DoesIntersectInclusive@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x180113676 (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 */

char __fastcall CBatchOptimizer::TryMergeOneLayer(CBatchOptimizer *this)
{
  int v1; // r10d
  int *v2; // r8
  int i; // esi
  int v5; // r12d
  __int64 v6; // rbp
  __int64 v7; // r8
  int *j; // rdx
  __int64 v9; // r14
  int v10; // edi
  char *v11; // r8
  int v12; // r15d
  __int64 v13; // r9
  int v14; // r13d
  __int64 v15; // rcx
  CBatchCommand *v16; // rdx
  int v17; // eax
  int v18; // r8d
  __int64 v19; // rdx
  int *v20; // rcx
  int v21; // r10d
  int v22; // eax
  bool v24; // al
  __int64 v25; // rcx
  char *v26; // rbp
  __int64 *v27; // r14
  __int64 v28; // rsi
  char *v29; // r15
  __int64 *CommonSuperset; // rax
  __int64 v31; // rbx
  int *v32; // r11
  CBatchCommand *v33; // rcx
  int v34; // r10d
  CBatchCommand *v35; // [rsp+70h] [rbp+8h] BYREF
  __int64 v36; // [rsp+78h] [rbp+10h] BYREF
  __int64 v37; // [rsp+80h] [rbp+18h]

  v1 = 0;
  v2 = (int *)((char *)this + 48);
  for ( i = 0; *((_DWORD *)this + 130 * *v2 + 26); ++i )
    ++v2;
  v5 = *((_DWORD *)this + 8);
  v6 = i;
  v7 = v5 - 1;
  v37 = v7;
  while ( v6 != v7 )
  {
    v9 = 520LL * *((int *)this + v6 + 12);
    if ( *(_DWORD *)((char *)this + v9 + 100) )
    {
      if ( !*(_QWORD *)((char *)this + v9 + 112) )
      {
        v10 = i + 1;
        if ( i + 1 != v5 )
        {
          while ( 1 )
          {
            v11 = (char *)this + 520 * *((int *)this + v10 + 12);
            if ( *((_DWORD *)v11 + 26) )
            {
              v10 = CBatchOptimizer::SkipContinuations(this, v10);
            }
            else
            {
              if ( *((_DWORD *)v11 + 25) != 1
                || *((_QWORD *)v11 + 14)
                || *(_QWORD *)((char *)this + v9 + 80) != *((_QWORD *)v11 + 10) )
              {
                goto LABEL_26;
              }
              v12 = v10 - 1;
              v13 = v10 - 1;
              if ( v13 == i )
              {
LABEL_14:
                v14 = *((_DWORD *)v11 + 24);
                v36 = 0LL;
                v15 = (unsigned int)(v14 - 1);
                v16 = *(CBatchCommand **)&v11[8 * v15 + 120];
                *((_DWORD *)v11 + 24) = v15;
                v35 = v16;
                *((_DWORD *)v11 + 25) = 0;
                CBatchOptimizer::AppendEntryToLayer(this, (__int64)&v36);
                if ( v35 )
                  CBatchCommand::`scalar deleting destructor'(v35);
                if ( v36 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
                if ( v14 == 1 )
                {
                  v17 = *((_DWORD *)this + 8);
                  v18 = v17 - 1;
                  if ( v10 != v17 - 1 )
                  {
                    v19 = v10;
                    v20 = (int *)((char *)this + 4 * v10 + 48);
                    v21 = *v20;
                    do
                    {
                      ++v19;
                      *v20 = v20[1];
                      ++v20;
                    }
                    while ( v19 != v18 );
                    *((_DWORD *)this + v18 + 12) = v21;
                    v17 = *((_DWORD *)this + 8);
                  }
                  v22 = v17 - 1;
                  *((_DWORD *)this + 8) = v22;
                  if ( v12 != v22 - 1 )
                  {
                    v25 = 520LL * *((int *)this + v10 + 11);
                    if ( *(_DWORD *)((char *)this + v25 + 100) )
                    {
                      v26 = (char *)this + v25;
                      v27 = (__int64 *)((char *)this + v25 + 112);
                      if ( *v27 )
                      {
                        v28 = 520LL * *((int *)this + v10 + 12);
                        v29 = (char *)this + v28;
                        if ( *(_QWORD *)((char *)this + v28 + 112) )
                        {
                          if ( CBatchOptimizer::MatchStateToHomogeneousLayer(
                                 (const struct SharedStateLayer *)(v26 + 80),
                                 (CBatchOptimizer *)((char *)this + v28 + 80)) )
                          {
                            CBatchOptimizer::PurgeStateSettingEntriesFromLayer(this, v10);
                            if ( !*(_DWORD *)((char *)this + v28 + 104) )
                            {
                              CommonSuperset = CRenderingEffect::GetCommonSuperset(&v35, *v27, *((_QWORD *)v29 + 14));
                              v31 = *CommonSuperset;
                              *CommonSuperset = 0LL;
                              if ( v35 )
                                (*(void (__fastcall **)(CBatchCommand *))(*(_QWORD *)v35 + 8LL))(v35);
                              if ( v31 )
                              {
                                wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v27, v31);
                                wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v29 + 112, v31);
                                *((_DWORD *)v26 + 26) = 1;
                                (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      CBatchOptimizer::TryRemoveEmptyStateSettingLayer(this, v12);
                    }
                  }
                  return 1;
                }
                v24 = CBatchOptimizer::TryRemoveEmptyStateSettingLayer(this, v10);
                v1 = 0;
                if ( v24 )
                  return 1;
                goto LABEL_26;
              }
              v32 = (int *)((char *)this + 4 * v12 + 48);
              while ( 1 )
              {
                v33 = (CBatchOptimizer *)((char *)this + 520 * *v32 + 80);
                v35 = v33;
                if ( *((_DWORD *)v33 + 5) )
                  break;
LABEL_44:
                --v13;
                --v32;
                v1 = 0;
                if ( v13 == i )
                  goto LABEL_14;
              }
              while ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectInclusive(
                                          v11 + 280,
                                          (char *)v33 + 16 * v1 + 200) )
              {
                v33 = v35;
                v1 = v34 + 1;
                if ( v1 == *((_DWORD *)v35 + 5) )
                  goto LABEL_44;
              }
            }
            v1 = 0;
LABEL_26:
            if ( ++v10 == v5 )
            {
              v7 = v37;
              break;
            }
          }
        }
      }
    }
    ++i;
    for ( j = (int *)((char *)this + 4 * ++v6 + 48); *((_DWORD *)this + 130 * *j + 26); ++j )
    {
      ++i;
      ++v6;
    }
  }
  *((_BYTE *)this + 4240) = 0;
  return 0;
}
