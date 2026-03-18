/*
 * XREFs of Is_MonitorFromRectSupported @ 0x1C0032408
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C002F7A0 (TransformRectBetweenCoordinateSpaces.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0031C60 (LogicalToPhysicalDPIRect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_MonitorFromRectSupported()
{
  if ( qword_1C0250B38 )
    return qword_1C0250B38();
  else
    return 3221225659LL;
}
