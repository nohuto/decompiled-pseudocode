/*
 * XREFs of DpiMapIommuIdentityRangeInternal @ 0x1C0056988
 * Callers:
 *     DpiMapIommuContiguousInternal @ 0x1C0056840 (DpiMapIommuContiguousInternal.c)
 *     DpiMapMemoryTrackerToIoMmu @ 0x1C00569D0 (DpiMapMemoryTrackerToIoMmu.c)
 *     DpiMapIommuIdentityRange @ 0x1C02C5700 (DpiMapIommuIdentityRange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     IoMmuMapStagingMdl @ 0x1C005616C (IoMmuMapStagingMdl.c)
 */

__int64 __fastcall DpiMapIommuIdentityRangeInternal(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  if ( a3 == 1 || *(_QWORD *)(a1 + 40) )
    return IoMmuMapStagingMdl(a1, a2, a4, a5);
  else
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_1C00B1070)(*(_QWORD *)(a1 + 8), 3LL, a2);
}
