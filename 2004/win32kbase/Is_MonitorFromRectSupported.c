/*
 * XREFs of Is_MonitorFromRectSupported @ 0x1C0011FC8
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0011350 (TransformRectBetweenCoordinateSpaces.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0011820 (LogicalToPhysicalDPIRect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_MonitorFromRectSupported()
{
  if ( qword_1C0252B38 )
    return qword_1C0252B38();
  else
    return 3221225659LL;
}
