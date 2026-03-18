/*
 * XREFs of MiGetVmPartition @ 0x14052FC00
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x1408CD838 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1408CDF80 (MiCreateHardwareEnclave.c)
 *     MiBuildNewCloneDescriptor @ 0x1408D45B4 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(a1 + 174));
}
