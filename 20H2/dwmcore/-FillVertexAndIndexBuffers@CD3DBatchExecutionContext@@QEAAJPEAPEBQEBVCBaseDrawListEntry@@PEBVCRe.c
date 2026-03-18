/*
 * XREFs of ?FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBaseDrawListEntry@@PEBVCRenderingEffect@@@Z @ 0x1801A6A24
 * Callers:
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x1801A9E80 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?EmitGeometryForGroup@CGroupDrawListEntry@@QEBAJPEAVCD3DBatchExecutionContext@@PEBQEBVCBaseDrawListEntry@@@Z @ 0x1801A9DEC (-EmitGeometryForGroup@CGroupDrawListEntry@@QEBAJPEAVCD3DBatchExecutionContext@@PEBQEBVCBaseDrawL.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::FillVertexAndIndexBuffers(
        CD3DBatchExecutionContext *this,
        const struct CBaseDrawListEntry *const **a2,
        const struct CRenderingEffect *a3)
{
  unsigned int v3; // ebx
  CGroupDrawListEntry *v7; // rcx
  const struct CBaseDrawListEntry *const *v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  v3 = 0;
  if ( a3 )
  {
    v7 = (CGroupDrawListEntry *)*((_QWORD *)this + 7);
    v8 = *a2;
    if ( v7 )
    {
      v9 = CGroupDrawListEntry::EmitGeometryForGroup(v7, this, v8);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1EAu, 0LL);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(const struct CRenderingEffect *, CD3DBatchExecutionContext *, const struct CBaseDrawListEntry *const))(*(_QWORD *)a3 + 48LL))(
              a3,
              this,
              *v8);
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1EFu, 0LL);
    }
  }
  v13 = *((_QWORD *)this + 7);
  if ( v13 )
  {
    v14 = *(unsigned int *)(v13 + 48);
    dword_180344244 += v14;
    ++dword_180344240;
    *a2 += v14;
    *((_QWORD *)this + 7) = 0LL;
  }
  return v3;
}
