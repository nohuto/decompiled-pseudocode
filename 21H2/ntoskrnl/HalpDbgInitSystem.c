/*
 * XREFs of HalpDbgInitSystem @ 0x140A54B30
 * Callers:
 *     <none>
 * Callees:
 *     KdGetDebugDevice @ 0x1403B8370 (KdGetDebugDevice.c)
 *     HalAcpiGetTable @ 0x1403B8380 (HalAcpiGetTable.c)
 *     HalpRegisterKdSupportFunctions @ 0x140AF3174 (HalpRegisterKdSupportFunctions.c)
 *     HalpCopyDebugDescriptor @ 0x140AF70C8 (HalpCopyDebugDescriptor.c)
 */

__int64 __fastcall HalpDbgInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 1 )
  {
    KdDebugDevice = HalpCopyDebugDescriptor(*(_QWORD *)(*(_QWORD *)(a3 + 240) + 2800LL));
    HalpRegisterKdSupportFunctions();
    HalpDebugPortTable = HalAcpiGetTable(a3, 1346847300);
    *KdGetDebugDevice() = KdDebugDevice;
  }
  return 0LL;
}
