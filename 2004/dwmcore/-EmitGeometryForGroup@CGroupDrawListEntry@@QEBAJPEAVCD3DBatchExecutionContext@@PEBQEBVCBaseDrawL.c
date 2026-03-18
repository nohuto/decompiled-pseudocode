/*
 * XREFs of ?EmitGeometryForGroup@CGroupDrawListEntry@@QEBAJPEAVCD3DBatchExecutionContext@@PEBQEBVCBaseDrawListEntry@@@Z @ 0x1801ABCEC
 * Callers:
 *     ?FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBaseDrawListEntry@@PEBVCRenderingEffect@@@Z @ 0x1801A8844 (-FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBaseDrawListEntry@@PEBVCRe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGroupDrawListEntry::EmitGeometryForGroup(
        CGroupDrawListEntry *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CBaseDrawListEntry *const *a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  int v8; // eax
  __int64 v9; // rcx

  v3 = 0;
  v4 = 0LL;
  if ( *((_DWORD *)this + 12) )
  {
    while ( 1 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DBatchExecutionContext *, const struct CBaseDrawListEntry *const))(**((_QWORD **)this + 4) + 48LL))(
             *((_QWORD *)this + 4),
             a2,
             a3[v4 + 1]);
      v3 = v8;
      if ( v8 < 0 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)this + 12) )
        return v3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x4Fu, 0LL);
  }
  return v3;
}
