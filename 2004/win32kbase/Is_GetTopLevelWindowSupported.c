/*
 * XREFs of Is_GetTopLevelWindowSupported @ 0x1C0012628
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0011350 (TransformRectBetweenCoordinateSpaces.c)
 *     EtwTraceInputProcessDelay @ 0x1C00778E0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0078070 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_GetTopLevelWindowSupported()
{
  if ( qword_1C0252998 )
    return qword_1C0252998();
  else
    return 3221225659LL;
}
