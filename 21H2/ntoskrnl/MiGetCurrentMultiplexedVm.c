/*
 * XREFs of MiGetCurrentMultiplexedVm @ 0x140260498
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14023C7DC (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14023FC60 (MmQuerySystemWorkingSetInformation.c)
 *     MmGetWorkingSetLeafSize @ 0x140260070 (MmGetWorkingSetLeafSize.c)
 * Callees:
 *     <none>
 */

__int64 MiGetCurrentMultiplexedVm()
{
  __int64 v0; // rax

  v0 = *(_QWORD *)(qword_140C4E688 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
  if ( *(_BYTE *)(v0 + 6940) )
    return v0 + 7232;
  else
    return 0LL;
}
