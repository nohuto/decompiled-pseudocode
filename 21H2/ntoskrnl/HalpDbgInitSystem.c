/*
 * XREFs of HalpDbgInitSystem @ 0x1409A2540
 * Callers:
 *     <none>
 * Callees:
 *     KdGetDebugDevice @ 0x1403CAA70 (KdGetDebugDevice.c)
 *     HalAcpiGetTable @ 0x1403CAA80 (HalAcpiGetTable.c)
 *     HalpRegisterKdSupportFunctions @ 0x140A39FA0 (HalpRegisterKdSupportFunctions.c)
 *     HalpCopyDebugDescriptor @ 0x140A6ED5C (HalpCopyDebugDescriptor.c)
 */

__int64 __fastcall HalpDbgInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 1 )
  {
    KdDebugDevice = HalpCopyDebugDescriptor(*(_QWORD *)(*(_QWORD *)(a3 + 240) + 2768LL));
    HalpRegisterKdSupportFunctions();
    HalpDebugPortTable = HalAcpiGetTable(a3, 1346847300);
    *KdGetDebugDevice() = KdDebugDevice;
  }
  return 0LL;
}
