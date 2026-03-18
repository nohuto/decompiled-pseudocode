/*
 * XREFs of ?Add@CMergedDirtyRect@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800852E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMergedDirtyRect::Add(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax

  v3 = 0LL;
  if ( g_pComposition )
    v3 = *((_QWORD *)g_pComposition + 62);
  if ( a1[11] != v3 )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    a1[11] = GetCurrentFrameId();
  }
  return CMergedRectBase<4>::Add(a1, a2);
}
