/*
 * XREFs of ?GetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAPEAVIBitmapRealization@@XZ @ 0x180066000
 * Callers:
 *     <none>
 * Callees:
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x18006604C (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 */

struct IBitmapRealization *__fastcall CGlobalCompositionSurfaceInfo::GetRenderingRealization(
        CGlobalCompositionSurfaceInfo *this)
{
  struct IBitmapRealization *result; // rax

  result = (struct IBitmapRealization *)*((_QWORD *)this + 25);
  if ( result )
    return (struct IBitmapRealization *)((char *)result + *(int *)(*((_QWORD *)result + 1) + 16LL) + 8);
  CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(this);
  if ( (result = (struct IBitmapRealization *)*((_QWORD *)this + 25)) != 0LL )
    return (struct IBitmapRealization *)((char *)result + *(int *)(*((_QWORD *)result + 1) + 16LL) + 8);
  return result;
}
