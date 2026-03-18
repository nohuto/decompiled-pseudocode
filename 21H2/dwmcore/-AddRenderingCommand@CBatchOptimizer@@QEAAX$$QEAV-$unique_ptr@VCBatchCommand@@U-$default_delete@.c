/*
 * XREFs of ?AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1801F0BD8
 * Callers:
 *     ?AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1801F1140 (-AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_del.c)
 * Callees:
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180011480 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180011500 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z @ 0x180017E6C (-MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18007FFE0 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180080314 (-AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x1800803E4 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ?SkipContinuations@CBatchOptimizer@@AEBAHH@Z @ 0x180080508 (-SkipContinuations@CBatchOptimizer@@AEBAHH@Z.c)
 *     ?CanTunnelToLayer@CBatchOptimizer@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEAH@Z @ 0x180080538 (-CanTunnelToLayer@CBatchOptimizer@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MatchEffectToHomogeneousLayer@CBatchOptimizer@@CA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@AEBUSharedStateLayer@@PEAVCRenderingEffect@@@Z @ 0x1801F0E50 (-MatchEffectToHomogeneousLayer@CBatchOptimizer@@CA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 *     ?GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F145C (-GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 */

__int64 __fastcall CBatchOptimizer::AddRenderingCommand(CBatchOptimizer *this, CBatchCommand **a2)
{
  CBatchCommand *v4; // r12
  int v5; // r14d
  int v6; // esi
  char *v7; // r15
  char v8; // r11
  int v9; // ecx
  __int64 v10; // rax
  __int64 *matched; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  void (__fastcall ***v14)(_QWORD); // rax
  __int64 result; // rax
  int v16; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h] BYREF
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF

  v17 = 0LL;
  if ( !*((_DWORD *)this + 8) )
    CBatchOptimizer::AppendLayer(this);
  CBatchCommand::ApplyRenderState(*a2, this);
  v4 = *a2;
  v19 = 0LL;
  CRenderingBatchCommand::GetWorldBounds((char *)v4 + 8, &v19);
  v5 = *((_DWORD *)this + 8);
  v6 = 0;
  if ( !v5 )
    goto LABEL_23;
  while ( 1 )
  {
    v6 = CBatchOptimizer::SkipContinuations(this, v6);
    v16 = v6;
    v7 = (char *)this + 520 * *((int *)this + v6 + 12);
    if ( CBatchOptimizer::MatchStateToHomogeneousLayer(
           (const struct SharedStateLayer *)(v7 + 80),
           (CBatchOptimizer *)((char *)this + 16)) )
    {
      if ( v8 )
      {
        if ( !CBatchOptimizer::CanTunnelToLayer((__int64)this, (__int64)&v19, v5, &v16) )
        {
          v9 = *((_DWORD *)this + 8);
          v6 = v16;
          if ( v16 == v9 - 1
            && *((_BYTE *)this + 4240)
            && v9 == 8
            && *((_DWORD *)this + 130 * *((int *)this + v16 + 12) + 25) == 1
            && CBatchOptimizer::TryMergeOneLayer(this) )
          {
            v5 = *((_DWORD *)this + 8);
            v6 = v5 - 1;
          }
          goto LABEL_18;
        }
        v6 = v16;
      }
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v4 + 1) + 40LL))(*((_QWORD *)v4 + 1));
      matched = (__int64 *)CBatchOptimizer::MatchEffectToHomogeneousLayer(&v18, v7 + 80, v10);
      v12 = *matched;
      *matched = 0LL;
      v13 = v12;
      v17 = v12;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      if ( v13 )
        break;
    }
    ++v6;
LABEL_18:
    if ( v6 == v5 )
      goto LABEL_22;
  }
  if ( !*((_DWORD *)v7 + 25) )
  {
    *((_DWORD *)v7 + 22) = *((_DWORD *)this + 6);
    v7[92] = *((_BYTE *)this + 28);
  }
LABEL_22:
  if ( v6 == v5 )
  {
LABEL_23:
    v14 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v4 + 1) + 40LL))(*((_QWORD *)v4 + 1));
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(&v17, v14);
    CBatchOptimizer::AppendLayer(this);
    v6 = *((_DWORD *)this + 8) - 1;
  }
  result = CBatchOptimizer::AppendEntryToLayer(this, v6, &v19, (__int64 *)a2, &v17);
  if ( v17 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  return result;
}
