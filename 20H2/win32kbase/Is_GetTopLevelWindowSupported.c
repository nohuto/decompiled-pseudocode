/*
 * XREFs of Is_GetTopLevelWindowSupported @ 0x1C00B586C
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C002F7A0 (TransformRectBetweenCoordinateSpaces.c)
 *     EtwTraceInputProcessDelay @ 0x1C00C0400 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C00C0B90 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_GetTopLevelWindowSupported()
{
  if ( qword_1C0250998 )
    return qword_1C0250998();
  else
    return 3221225659LL;
}
