/*
 * XREFs of PiSwInit @ 0x140A544A0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1402524C0 (RtlInitializeGenericTableAvl.c)
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     IoCreateDriver @ 0x1407A5100 (IoCreateDriver.c)
 */

NTSTATUS PiSwInit()
{
  NTSTATUS result; // eax
  __int128 v1; // [rsp+30h] [rbp-18h] BYREF

  DWORD1(v1) = 0;
  RtlInitializeGenericTableAvl(
    &PiSwDeviceInstanceTable,
    (PRTL_AVL_COMPARE_ROUTINE)PiSwDeviceCompareObjects,
    (PRTL_AVL_ALLOCATE_ROUTINE)PiSwAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)PiSwFreeGenericTableEntry,
    0LL);
  RtlInitializeGenericTableAvl(
    &PiSwBusRelationsTable,
    (PRTL_AVL_COMPARE_ROUTINE)PiSwBusRelationsCompareInstancePath,
    (PRTL_AVL_ALLOCATE_ROUTINE)PiSwAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)PiSwFreeGenericTableEntry,
    0LL);
  qword_140C433F8 = (__int64)&PiSwGlobalPdoAssociationList;
  PiSwGlobalPdoAssociationList = (__int64)&PiSwGlobalPdoAssociationList;
  result = ExInitializeResourceLite(&PiSwLockObj);
  if ( result >= 0 )
  {
    LODWORD(v1) = 3014700;
    *((_QWORD *)&v1 + 1) = L"\\Driver\\SoftwareDevice";
    return IoCreateDriver(&v1, (_DMA_OPERATIONS *)PiSwPdoDriverEntry);
  }
  return result;
}
