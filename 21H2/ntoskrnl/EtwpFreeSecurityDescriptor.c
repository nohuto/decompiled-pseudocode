/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x14064430C
 * Callers:
 *     EtwpAccessCheckFromState @ 0x140644284 (EtwpAccessCheckFromState.c)
 *     EtwpStartLogger @ 0x1406DE1A0 (EtwpStartLogger.c)
 *     EtwpCheckGuidAccess @ 0x1406E3280 (EtwpCheckGuidAccess.c)
 *     EtwpAllocGuidEntry @ 0x1406E3E30 (EtwpAllocGuidEntry.c)
 *     EtwpUpdateTrace @ 0x140796D68 (EtwpUpdateTrace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeSecurityDescriptor(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( v2 != (void *)EtwpDefaultTraceSecurityDescriptor && v2 != (void *)WmipDefaultAccessSd )
      ExFreePoolWithTag(v2, 0);
    *a1 = 0LL;
  }
}
