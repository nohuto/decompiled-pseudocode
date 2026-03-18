/*
 * XREFs of HalpAcpiGetFacsMapping @ 0x1403B9DC8
 * Callers:
 *     HalAcpiGetFacsMappingDispatch @ 0x1403B9DB0 (HalAcpiGetFacsMappingDispatch.c)
 *     HaliInitPowerManagement @ 0x1407A53F0 (HaliInitPowerManagement.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     HalpAcpiGetTableWork @ 0x14025EFF0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiCheckAndMapTable @ 0x14025FC74 (HalpAcpiCheckAndMapTable.c)
 *     DbgPrint @ 0x1403647B0 (DbgPrint.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
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
