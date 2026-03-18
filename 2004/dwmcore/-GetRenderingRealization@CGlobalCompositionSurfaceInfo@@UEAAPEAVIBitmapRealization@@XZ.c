/*
 * XREFs of ?GetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAPEAVIBitmapRealization@@XZ @ 0x1800BA020
 * Callers:
 *     <none>
 * Callees:
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x1800BA06C (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 */

struct IBitmapRealization *__fastcall CGlobalCompositionSurfaceInfo::GetRenderingRealization(
        CGlobalCompositionSurfaceInfo *this)
{
  struct IBitmapRealization *result; // rax

  result = (struct IBitmapRealization *)*((_QWORD *)this + 23);
  if ( result )
    return (struct IBitmapRealization *)((char *)result + *(int *)(*((_QWORD *)result + 1) + 16LL) + 8);
  CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(this);
  if ( (result = (struct IBitmapRealization *)*((_QWORD *)this + 23)) != 0LL )
    return (struct IBitmapRealization *)((char *)result + *(int *)(*((_QWORD *)result + 1) + 16LL) + 8);
  return result;
}
