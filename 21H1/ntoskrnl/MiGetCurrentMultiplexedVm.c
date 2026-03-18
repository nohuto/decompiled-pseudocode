/*
 * XREFs of MiGetCurrentMultiplexedVm @ 0x140203494
 * Callers:
 *     MmGetWorkingSetLeafSize @ 0x140204010 (MmGetWorkingSetLeafSize.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14030E744 (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140311CD0 (MmQuerySystemWorkingSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiGetCurrentMultiplexedVm()
{
  __int64 v0; // rax

  v0 = *(_QWORD *)(qword_140C4E588 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
  if ( *(_BYTE *)(v0 + 6940) )
    return v0 + 7232;
  else
    return 0LL;
}
