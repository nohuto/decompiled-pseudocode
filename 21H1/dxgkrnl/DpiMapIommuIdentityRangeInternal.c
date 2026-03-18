/*
 * XREFs of DpiMapIommuIdentityRangeInternal @ 0x1C0055A38
 * Callers:
 *     DpiMapIommuContiguousInternal @ 0x1C00558F0 (DpiMapIommuContiguousInternal.c)
 *     DpiMapMemoryTrackerToIoMmu @ 0x1C0055A80 (DpiMapMemoryTrackerToIoMmu.c)
 *     DpiMapIommuIdentityRange @ 0x1C02C2140 (DpiMapIommuIdentityRange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     IoMmuMapStagingMdl @ 0x1C005521C (IoMmuMapStagingMdl.c)
 */

__int64 __fastcall DpiMapIommuIdentityRangeInternal(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  if ( a3 == 1 || *(_QWORD *)(a1 + 40) )
    return IoMmuMapStagingMdl(a1, a2, a4, a5);
  else
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_1C00AFF70)(*(_QWORD *)(a1 + 8), 3LL, a2);
}
