/*
 * XREFs of HalpAcpiGetFacsMapping @ 0x1403B8198
 * Callers:
 *     HalAcpiGetFacsMappingDispatch @ 0x1403B8180 (HalAcpiGetFacsMappingDispatch.c)
 *     HaliInitPowerManagement @ 0x14081E1F0 (HaliInitPowerManagement.c)
 * Callees:
 *     HalpAcpiGetTableWork @ 0x140213AC0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiCheckAndMapTable @ 0x140215144 (HalpAcpiCheckAndMapTable.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpAcpiGetFacsMapping(__int64 a1)
{
  unsigned int *TableWork; // rax
  int v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+54h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  if ( !HalpAcpiFacsMapping )
  {
    TableWork = (unsigned int *)HalpAcpiGetTableWork(0LL, 0x50434146u, 0LL, 0LL);
    if ( !TableWork )
    {
      DbgPrint("**** HalpAcpiGetFacsMapping: No FADT found.\n");
      KeBugCheckEx(0xA5u, 0x10009uLL, 0LL, 0LL, 0LL);
    }
    HalpAcpiFacsMapping = HalpAcpiCheckAndMapTable(0LL, TableWork[9], 0x21u, 1396916550, 0LL, 0LL, 0, &v3);
  }
  KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return HalpAcpiFacsMapping;
}
