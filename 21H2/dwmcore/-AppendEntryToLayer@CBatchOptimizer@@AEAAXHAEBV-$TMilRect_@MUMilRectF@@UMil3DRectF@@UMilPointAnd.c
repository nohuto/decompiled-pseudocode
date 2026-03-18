/*
 * XREFs of ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180080314
 * Callers:
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18007FFE0 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1801F0BD8 (-AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@.c)
 * Callees:
 *     ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18007E65C (-ContinueLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBatchOptimizer::AppendEntryToLayer(
        CBatchOptimizer *this,
        int a2,
        _OWORD *a3,
        __int64 *a4,
        _QWORD *a5)
{
  __int64 v6; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  char *v13; // r8
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rcx

  v6 = a2;
  v9 = *a5;
  v10 = 520LL * *((int *)this + v6 + 12);
  if ( !*a5 )
    goto LABEL_2;
  if ( *(_DWORD *)((char *)this + v10 + 100) )
  {
    *a5 = 0LL;
    v17 = *(_QWORD *)((char *)this + v10 + 112);
    *(_QWORD *)((char *)this + v10 + 112) = v9;
    if ( !v17 )
      goto LABEL_2;
    goto LABEL_13;
  }
  if ( *(_QWORD *)((char *)this + v10 + 112) )
    goto LABEL_2;
  if ( ((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 72LL))(*a5) & 0x10000) != 0 )
  {
    v16 = *a5;
    *a5 = 0LL;
    v17 = *(_QWORD *)((char *)this + v10 + 112);
    *(_QWORD *)((char *)this + v10 + 112) = v16;
    if ( !v17 )
      goto LABEL_2;
LABEL_13:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    goto LABEL_2;
  }
  if ( !(_DWORD)v6 )
    goto LABEL_3;
  if ( !*((_DWORD *)this + 130 * *((int *)this + v6 + 11) + 26) )
    *((_BYTE *)this + 4240) = 1;
LABEL_2:
  if ( !(_DWORD)v6 || *(_DWORD *)((char *)this + v10 + 100) != 20 )
  {
LABEL_3:
    if ( *(_DWORD *)((char *)this + v10 + 96) != 20 )
      goto LABEL_4;
  }
  CBatchOptimizer::ContinueLayer(this, v6);
LABEL_4:
  v11 = *((int *)this + v6 + 12);
  v12 = *a4;
  *a4 = 0LL;
  v13 = (char *)this + 520 * v11;
  v14 = *((unsigned int *)v13 + 24);
  result = (unsigned int)(v14 + 1);
  *((_DWORD *)v13 + 24) = result;
  *(_QWORD *)&v13[8 * v14 + 120] = v12;
  if ( (_DWORD)v6 )
  {
    result = 2LL * *((unsigned int *)v13 + 25);
    *(_OWORD *)&v13[16 * *((unsigned int *)v13 + 25) + 280] = *a3;
  }
  ++*((_DWORD *)v13 + 25);
  return result;
}
