/*
 * XREFs of _NtGdiBeginGdiRendering@12 @ 0xA5D2E
 * Callers:
 *     <none>
 * Callees:
 *     _GreBeginGdiRenderingToDxSurface@12 @ 0xA5D46 (_GreBeginGdiRenderingToDxSurface@12.c)
 */

int __stdcall NtGdiBeginGdiRendering(int a1, int a2, int a3)
{
  return GreBeginGdiRenderingToDxSurface(a3);
}
