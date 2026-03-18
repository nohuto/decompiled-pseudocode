/*
 * XREFs of MiGetCurrentMultiplexedVm @ 0x14023DF64
 * Callers:
 *     MmGetWorkingSetLeafSize @ 0x14023EBA0 (MmGetWorkingSetLeafSize.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14031CBE4 (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140332144 (MmQuerySystemWorkingSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiGetCurrentMultiplexedVm()
{
  __int64 v0; // rax

  v0 = *(_QWORD *)(qword_140C4E4C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
  if ( *(_BYTE *)(v0 + 6940) )
    return v0 + 7232;
  else
    return 0LL;
}
