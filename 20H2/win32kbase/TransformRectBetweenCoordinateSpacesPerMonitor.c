/*
 * XREFs of TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C002FA8C
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C002F7A0 (TransformRectBetweenCoordinateSpaces.c)
 *     TransformOffscreenAdjacentRect @ 0x1C00C749C (TransformOffscreenAdjacentRect.c)
 * Callees:
 *     LogicalToPhysicalDPIRect @ 0x1C0031C60 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0031DA0 (PhysicalToLogicalDPIRect.c)
 */

__int64 TransformRectBetweenCoordinateSpacesPerMonitor(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, ...)
{
  int v6; // ebx
  va_list va; // [rsp+50h] [rbp+28h] BYREF

  va_start(va, a4);
  v6 = LogicalToPhysicalDPIRect(a1, a2, a4, va);
  return v6 | (unsigned int)PhysicalToLogicalDPIRect(a1, a1, a3, va);
}
