/*
 * XREFs of Is_MonitorFromRectSupported @ 0x1C006C498
 * Callers:
 *     LogicalToPhysicalDPIRect @ 0x1C006BCF0 (LogicalToPhysicalDPIRect.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00A69E0 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_MonitorFromRectSupported()
{
  if ( qword_1C0258AF8 )
    return qword_1C0258AF8();
  else
    return 3221225659LL;
}
