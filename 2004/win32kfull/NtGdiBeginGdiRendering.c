/*
 * XREFs of NtGdiBeginGdiRendering @ 0x1C002E0A0
 * Callers:
 *     <none>
 * Callees:
 *     GreBeginGdiRenderingToDxSurface @ 0x1C002E0B8 (GreBeginGdiRenderingToDxSurface.c)
 */

__int64 NtGdiBeginGdiRendering()
{
  return GreBeginGdiRenderingToDxSurface();
}
