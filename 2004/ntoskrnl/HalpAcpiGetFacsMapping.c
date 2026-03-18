/*
 * XREFs of HalpAcpiGetFacsMapping @ 0x1403B7328
 * Callers:
 *     HalAcpiGetFacsMappingDispatch @ 0x1403B7310 (HalAcpiGetFacsMappingDispatch.c)
 *     HaliInitPowerManagement @ 0x1407960C0 (HaliInitPowerManagement.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     HalpAcpiGetTableWork @ 0x1403357F0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiCheckAndMapTable @ 0x140335CC8 (HalpAcpiCheckAndMapTable.c)
 *     DbgPrint @ 0x140361340 (DbgPrint.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
