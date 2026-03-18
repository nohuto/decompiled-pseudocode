/*
 * XREFs of MiGetVmPartition @ 0x140533C20
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x1408D49C8 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1408D5110 (MiCreateHardwareEnclave.c)
 *     MiBuildNewCloneDescriptor @ 0x1408DB744 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(a1 + 174));
}
