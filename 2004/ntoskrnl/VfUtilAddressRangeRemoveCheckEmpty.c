/*
 * XREFs of VfUtilAddressRangeRemoveCheckEmpty @ 0x1409C33A0
 * Callers:
 *     IovpCompleteRequest2 @ 0x1409CD5E0 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x1409CE23C (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x1409D2890 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x1409D2B14 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409DD91C (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     VfUtilAddressRangeRemove @ 0x1409C3374 (VfUtilAddressRangeRemove.c)
 */

__int64 __fastcall VfUtilAddressRangeRemoveCheckEmpty(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 != *a1 )
    return VfUtilAddressRangeRemove(a1, a2, 208LL);
  result = a2 + 208;
  if ( a2 + 208 != a1[1] )
    return VfUtilAddressRangeRemove(a1, a2, 208LL);
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}
