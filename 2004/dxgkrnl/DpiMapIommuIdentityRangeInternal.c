/*
 * XREFs of DpiMapIommuIdentityRangeInternal @ 0x1C0056A48
 * Callers:
 *     DpiMapIommuContiguousInternal @ 0x1C0056900 (DpiMapIommuContiguousInternal.c)
 *     DpiMapMemoryTrackerToIoMmu @ 0x1C0056A90 (DpiMapMemoryTrackerToIoMmu.c)
 *     DpiMapIommuIdentityRange @ 0x1C02C66C0 (DpiMapIommuIdentityRange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     IoMmuMapStagingMdl @ 0x1C005622C (IoMmuMapStagingMdl.c)
 */

__int64 __fastcall DpiMapIommuIdentityRangeInternal(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  if ( a3 == 1 || *(_QWORD *)(a1 + 40) )
    return IoMmuMapStagingMdl(a1, a2, a4, a5);
  else
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_1C00B2070)(*(_QWORD *)(a1 + 8), 3LL, a2);
}
