/*
 * XREFs of NtGdiCreatePen @ 0x1C00FEEC0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreatePen @ 0x1C00FEED8 (GreCreatePen.c)
 */

__int64 NtGdiCreatePen()
{
  return GreCreatePen();
}
