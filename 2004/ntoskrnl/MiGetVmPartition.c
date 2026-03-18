/*
 * XREFs of MiGetVmPartition @ 0x140530250
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x1408CEB88 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1408CF2D0 (MiCreateHardwareEnclave.c)
 *     MiBuildNewCloneDescriptor @ 0x1408D5904 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(a1 + 174));
}
