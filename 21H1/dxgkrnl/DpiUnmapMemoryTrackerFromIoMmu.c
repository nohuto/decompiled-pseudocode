/*
 * XREFs of DpiUnmapMemoryTrackerFromIoMmu @ 0x1C0055ED0
 * Callers:
 *     DpiRemoveMemoryTracker @ 0x1C0055C24 (DpiRemoveMemoryTracker.c)
 * Callees:
 *     DpiUnmapIommuContiguousInternal @ 0x1C0055D68 (DpiUnmapIommuContiguousInternal.c)
 *     DpiUnmapIommuIdentityRangeInternal @ 0x1C0055E68 (DpiUnmapIommuIdentityRangeInternal.c)
 */

void __fastcall DpiUnmapMemoryTrackerFromIoMmu(KSPIN_LOCK *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rax
  unsigned int v8; // eax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v10; // ecx
  __int64 v11; // rax

  v6 = 0;
  if ( KeTestSpinLock(a1) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v7 + 24) = 997LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *(_DWORD *)(a2 + 16);
  if ( v8 )
  {
    v10 = *(_DWORD *)(a2 + 16);
    if ( v8 != 1 && v8 != 2 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v8, v4);
      *(_QWORD *)(v11 + 24) = 1013LL;
      WdLogEvent5_WdAssertion(v11);
      v10 = *(_DWORD *)(a2 + 16);
    }
    LOBYTE(v6) = v10 != 1;
    DpiUnmapIommuIdentityRangeInternal((__int64)a1, *(_QWORD *)(a2 + 24), v6, 0, a2);
  }
  else
  {
    PhysicalAddress = MmGetPhysicalAddress(*(PVOID *)(a2 + 24));
    DpiUnmapIommuContiguousInternal(
      (int)a1,
      (struct _MDL *)(PhysicalAddress.QuadPart / 4096),
      *(_QWORD *)(a2 + 32),
      0,
      a2);
  }
}
