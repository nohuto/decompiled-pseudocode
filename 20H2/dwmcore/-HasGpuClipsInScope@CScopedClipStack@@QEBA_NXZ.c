/*
 * XREFs of ?HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180076D44
 * Callers:
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DB694 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScopedClipStack::HasGpuClipsInScope(CScopedClipStack *this)
{
  int v1; // eax
  char v2; // r9

  v1 = *((_DWORD *)this + 6);
  v2 = 0;
  if ( v1 )
    return *(_DWORD *)(84LL * (unsigned int)(v1 - 1) + *(_QWORD *)this) != 0;
  return v2;
}
