/*
 * XREFs of NtGdiCreatePen @ 0x1C007BE00
 * Callers:
 *     <none>
 * Callees:
 *     GreCreatePen @ 0x1C007BE18 (GreCreatePen.c)
 */

__int64 NtGdiCreatePen()
{
  return GreCreatePen();
}
