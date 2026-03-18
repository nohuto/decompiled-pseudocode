/*
 * XREFs of ?GetRects@CMergedDirtyRect@@UEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x18007F680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMergedDirtyRect::GetRects(CMergedDirtyRect *this, unsigned int *a2, const struct MilRectF **a3)
{
  __int64 v4; // rax

  v4 = 0LL;
  if ( g_pComposition )
    v4 = *((_QWORD *)g_pComposition + 44);
  if ( *((_QWORD *)this + 11) != v4 )
    (*(void (__fastcall **)(CMergedDirtyRect *))(*(_QWORD *)this + 8LL))(this);
  return CMergedRectBase<4>::GetRects(this, a2, a3);
}
