/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x14066B088
 * Callers:
 *     EtwpCheckGuidAccess @ 0x1406365C4 (EtwpCheckGuidAccess.c)
 *     EtwpAllocGuidEntry @ 0x140636DE0 (EtwpAllocGuidEntry.c)
 *     EtwpAccessCheckFromState @ 0x14066B000 (EtwpAccessCheckFromState.c)
 *     EtwpStartLogger @ 0x1406C7A14 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140780C28 (EtwpUpdateTrace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
