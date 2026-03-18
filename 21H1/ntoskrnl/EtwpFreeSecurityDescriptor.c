/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x1405F289C
 * Callers:
 *     EtwpAccessCheckFromState @ 0x1405F2814 (EtwpAccessCheckFromState.c)
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     EtwpCheckGuidAccess @ 0x14067F0D0 (EtwpCheckGuidAccess.c)
 *     EtwpAllocGuidEntry @ 0x14067F65C (EtwpAllocGuidEntry.c)
 *     EtwpUpdateTrace @ 0x14077FAB8 (EtwpUpdateTrace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
