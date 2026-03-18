/*
 * XREFs of ?ApplyRenderState@CGroupBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x1800B58FC
 * Callers:
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180011480 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800B1970 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CGroupBatchCommand::ApplyRenderState(CGroupBatchCommand *this, struct IDrawListStateSink *a2)
{
  if ( *((_DWORD *)this + 2) != 24 )
    (*(void (__fastcall **)(struct IDrawListStateSink *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( *((_BYTE *)this + 12) != 3 )
    (*(void (__fastcall **)(struct IDrawListStateSink *))(*(_QWORD *)a2 + 24LL))(a2);
  (*(void (__fastcall **)(struct IDrawListStateSink *, CGroupBatchCommand *))(*(_QWORD *)a2 + 16LL))(a2, this);
  return 1;
}
