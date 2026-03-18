/*
 * XREFs of DpiUnmapIommuIdentityRangeInternal @ 0x1C0056DB8
 * Callers:
 *     DpiMapIommuContiguousInternal @ 0x1C0056840 (DpiMapIommuContiguousInternal.c)
 *     DpiUnmapIommuContiguousInternal @ 0x1C0056CB8 (DpiUnmapIommuContiguousInternal.c)
 *     DpiUnmapMemoryTrackerFromIoMmu @ 0x1C0056E20 (DpiUnmapMemoryTrackerFromIoMmu.c)
 *     DpiUnmapIommuIdentityRange @ 0x1C02C5F70 (DpiUnmapIommuIdentityRange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     IoMmuUnmapStagingMdl @ 0x1C00564B0 (IoMmuUnmapStagingMdl.c)
 */

__int64 __fastcall DpiUnmapIommuIdentityRangeInternal(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( a3 == 1 || *(_QWORD *)(a1 + 40) )
    return IoMmuUnmapStagingMdl(a1, a2, a4, a5);
  result = ((__int64 (__fastcall *)(_QWORD))qword_1C00B1078)(*(_QWORD *)(a1 + 8));
  if ( (int)result < 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 777LL;
    return WdLogEvent5_WdAssertion(v8);
  }
  return result;
}
