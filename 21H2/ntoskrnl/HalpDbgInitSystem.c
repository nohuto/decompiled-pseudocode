/*
 * XREFs of HalpDbgInitSystem @ 0x1409A1610
 * Callers:
 *     <none>
 * Callees:
 *     KdGetDebugDevice @ 0x1403CA8D0 (KdGetDebugDevice.c)
 *     HalAcpiGetTable @ 0x1403CA8E0 (HalAcpiGetTable.c)
 *     HalpRegisterKdSupportFunctions @ 0x140A38FA0 (HalpRegisterKdSupportFunctions.c)
 *     HalpCopyDebugDescriptor @ 0x140A6DD5C (HalpCopyDebugDescriptor.c)
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
