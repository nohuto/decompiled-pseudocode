/*
 * XREFs of PopDirectedDripsUmInitialize @ 0x14078C634
 * Callers:
 *     PopDirectedDripsInitializePhase0 @ 0x140A43024 (PopDirectedDripsInitializePhase0.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14023FD70 (RtlInitializeGenericTableAvl.c)
 */

void PopDirectedDripsUmInitialize()
{
  qword_140C1E7D8 = 0LL;
  PopDirectedDripsUmLock = 0LL;
  PopDirectedDripsUmTestDeviceCount = 0;
  RtlInitializeGenericTableAvl(
    &PopDirectedDripsUmTestDeviceTable,
    PopDirectedDripsUmTestDeviceCompare,
    PopDirectedDripsUmTestDeviceAllocate,
    PopDirectedDripsUmTestDeviceFree,
    0LL);
  PopDirectedDripsUmTestPermissive = 0;
}
