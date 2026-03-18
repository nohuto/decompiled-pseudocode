/*
 * XREFs of HalpDbgInitSystem @ 0x14099DCF0
 * Callers:
 *     <none>
 * Callees:
 *     KdGetDebugDevice @ 0x1403C72F0 (KdGetDebugDevice.c)
 *     HalAcpiGetTable @ 0x1403C7300 (HalAcpiGetTable.c)
 *     HalpRegisterKdSupportFunctions @ 0x140A35FD4 (HalpRegisterKdSupportFunctions.c)
 *     HalpCopyDebugDescriptor @ 0x140A6A4D0 (HalpCopyDebugDescriptor.c)
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
