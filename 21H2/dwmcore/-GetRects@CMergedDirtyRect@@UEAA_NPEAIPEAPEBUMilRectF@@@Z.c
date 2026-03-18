/*
 * XREFs of ?GetRects@CMergedDirtyRect@@UEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180081C70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMergedDirtyRect::GetRects(CMergedDirtyRect *this, unsigned int *a2, const struct MilRectF **a3)
{
  unsigned __int64 CurrentFrameId; // rax
  _QWORD *v7; // rcx

  CurrentFrameId = GetCurrentFrameId();
  if ( v7[11] != CurrentFrameId )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
  return CMergedRectBase<4>::GetRects(this, a2, a3);
}
