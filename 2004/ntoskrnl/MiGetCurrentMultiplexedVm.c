/*
 * XREFs of MiGetCurrentMultiplexedVm @ 0x14027C7A4
 * Callers:
 *     MmGetWorkingSetLeafSize @ 0x14027D320 (MmGetWorkingSetLeafSize.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14034BC24 (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14034F4C0 (MmQuerySystemWorkingSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiGetCurrentMultiplexedVm()
{
  __int64 v0; // rax

  v0 = *(_QWORD *)(qword_140C4E448 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
  if ( *(_BYTE *)(v0 + 6940) )
    return v0 + 7232;
  else
    return 0LL;
}
