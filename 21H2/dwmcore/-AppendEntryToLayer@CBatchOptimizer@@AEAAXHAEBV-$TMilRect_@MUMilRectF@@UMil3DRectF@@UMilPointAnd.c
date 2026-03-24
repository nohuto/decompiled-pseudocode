/*
 * XREFs of ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$com_ptr_t@VCDrawListEntry@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@4@@Z @ 0x1800C0660
 * Callers:
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800C0320 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 * Callees:
 *     ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x1800C0838 (-ContinueLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
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
  char *v13; // r9
  __int64 v14; // r8
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
LABEL_16:
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    goto LABEL_2;
  }
  if ( *(_QWORD *)((char *)this + v10 + 112) )
    goto LABEL_2;
  if ( ((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 72LL))(*a5) & 0x10000) != 0 )
  {
    v16 = *a5;
    *a5 = 0LL;
    v17 = *(_QWORD *)((char *)this + v10 + 112);
    *(_QWORD *)((char *)this + v10 + 112) = v16;
    goto LABEL_16;
  }
  if ( !(_DWORD)v6 )
    goto LABEL_4;
  if ( !*((_DWORD *)this + 130 * *((int *)this + v6 + 11) + 26) )
    *((_BYTE *)this + 4240) = 1;
LABEL_2:
  if ( !(_DWORD)v6 || *(_DWORD *)((char *)this + v10 + 100) != 20 )
  {
LABEL_4:
    if ( *(_DWORD *)((char *)this + v10 + 96) != 20 )
      goto LABEL_5;
  }
  CBatchOptimizer::ContinueLayer(this, v6);
LABEL_5:
  v11 = *((int *)this + v6 + 12);
  v12 = *a4;
  *a4 = 0LL;
  v13 = (char *)this + 520 * v11;
  v14 = *((unsigned int *)v13 + 24);
  *((_DWORD *)v13 + 24) = v14 + 1;
  result = (v12 + 16) & -(__int64)(v12 != 0);
  *(_QWORD *)&v13[8 * v14 + 120] = result;
  if ( (_DWORD)v6 )
  {
    result = 2LL * *((unsigned int *)v13 + 25);
    *(_OWORD *)&v13[16 * *((unsigned int *)v13 + 25) + 280] = *a3;
  }
  ++*((_DWORD *)v13 + 25);
  return result;
}
