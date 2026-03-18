/*
 * XREFs of ?FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBatchCommand@@PEBVCRenderingEffect@@@Z @ 0x1801ED358
 * Callers:
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x1801F0ECC (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EmitGeometryForGroup@CGroupBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@PEBQEBVCBatchCommand@@@Z @ 0x1801F14D0 (-EmitGeometryForGroup@CGroupBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@PEBQEBVCBatchComma.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::FillVertexAndIndexBuffers(
        CD3DBatchExecutionContext *this,
        const struct CBatchCommand *const **a2,
        const struct CRenderingEffect *a3)
{
  unsigned int v3; // ebx
  CGroupBatchCommand *v7; // rcx
  const struct CBatchCommand *const *v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  v3 = 0;
  if ( a3 )
  {
    v7 = (CGroupBatchCommand *)*((_QWORD *)this + 7);
    v8 = *a2;
    if ( v7 )
    {
      v9 = CGroupBatchCommand::EmitGeometryForGroup(v7, this, v8);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x1EAu);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(const struct CRenderingEffect *, CD3DBatchExecutionContext *, __int64))(*(_QWORD *)a3 + 40LL))(
              a3,
              this,
              (__int64)*v8 + 8);
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x1EFu);
    }
  }
  v13 = *((_QWORD *)this + 7);
  if ( v13 )
  {
    v14 = *(unsigned int *)(v13 + 16);
    dword_1803D3124 += v14;
    ++dword_1803D3120;
    *a2 += v14;
    *((_QWORD *)this + 7) = 0LL;
  }
  return v3;
}
