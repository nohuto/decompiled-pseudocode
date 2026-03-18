/*
 * XREFs of Is_GetTopLevelWindowSupported @ 0x1C00A6EA0
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C006E610 (EtwTraceInputProcessDelay.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00A69E0 (TransformRectBetweenCoordinateSpaces.c)
 *     EtwTraceMessageCheckDelay @ 0x1C00C14A0 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_GetTopLevelWindowSupported()
{
  if ( qword_1C0258958 )
    return qword_1C0258958();
  else
    return 3221225659LL;
}
