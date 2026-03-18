/*
 * XREFs of PopDirectedDripsUmInitialize @ 0x140858B54
 * Callers:
 *     PopDirectedDripsInitializePhase0 @ 0x140B271D8 (PopDirectedDripsInitializePhase0.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1402DF2C0 (RtlInitializeGenericTableAvl.c)
 */

void PopDirectedDripsUmInitialize()
{
  qword_140C1CB38 = 0LL;
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
