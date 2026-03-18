/*
 * XREFs of HalpDbgInitSystem @ 0x1409A3DF0
 * Callers:
 *     <none>
 * Callees:
 *     KdGetDebugDevice @ 0x1403C9F30 (KdGetDebugDevice.c)
 *     HalAcpiGetTable @ 0x1403C9F40 (HalAcpiGetTable.c)
 *     HalpRegisterKdSupportFunctions @ 0x140A3BFD4 (HalpRegisterKdSupportFunctions.c)
 *     HalpCopyDebugDescriptor @ 0x140A70DDC (HalpCopyDebugDescriptor.c)
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
