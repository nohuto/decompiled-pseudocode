/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x14063911C
 * Callers:
 *     EtwpAccessCheckFromState @ 0x140639094 (EtwpAccessCheckFromState.c)
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 *     EtwpCheckGuidAccess @ 0x1406BA560 (EtwpCheckGuidAccess.c)
 *     EtwpAllocGuidEntry @ 0x1406BB110 (EtwpAllocGuidEntry.c)
 *     EtwpUpdateTrace @ 0x140796F68 (EtwpUpdateTrace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
