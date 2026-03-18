/*
 * XREFs of NtGdiBeginGdiRendering @ 0x1C010CAA0
 * Callers:
 *     <none>
 * Callees:
 *     GreBeginGdiRenderingToDxSurface @ 0x1C010CAB8 (GreBeginGdiRenderingToDxSurface.c)
 */

__int64 NtGdiBeginGdiRendering()
{
  return GreBeginGdiRenderingToDxSurface();
}
