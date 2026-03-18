/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x14066A56C
 * Callers:
 *     EtwpAccessCheckFromState @ 0x14066A4E4 (EtwpAccessCheckFromState.c)
 *     EtwpStartLogger @ 0x140713B28 (EtwpStartLogger.c)
 *     EtwpCheckGuidAccess @ 0x140719768 (EtwpCheckGuidAccess.c)
 *     EtwpAllocGuidEntry @ 0x14071A318 (EtwpAllocGuidEntry.c)
 *     EtwpUpdateTrace @ 0x14078C87C (EtwpUpdateTrace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
