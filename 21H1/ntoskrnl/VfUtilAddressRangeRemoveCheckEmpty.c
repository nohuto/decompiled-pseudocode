/*
 * XREFs of VfUtilAddressRangeRemoveCheckEmpty @ 0x1409C3390
 * Callers:
 *     IovpCompleteRequest2 @ 0x1409CD5D0 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x1409CE22C (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x1409D2830 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x1409D2AB4 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409DD8BC (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     VfUtilAddressRangeRemove @ 0x1409C3364 (VfUtilAddressRangeRemove.c)
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
