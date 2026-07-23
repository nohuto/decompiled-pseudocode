/*
 * XREFs of MiGetVmPartition @ 0x140535960
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x1408D22E8 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1408D2A30 (MiCreateHardwareEnclave.c)
 *     MiBuildNewCloneDescriptor @ 0x1408D9064 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a1 + 174));
}
