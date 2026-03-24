/*
 * XREFs of MiGetCurrentMultiplexedVm @ 0x1402724F8
 * Callers:
 *     MmGetWorkingSetLeafSize @ 0x1402720D0 (MmGetWorkingSetLeafSize.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402BE19C (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1402C17C0 (MmQuerySystemWorkingSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiGetCurrentMultiplexedVm()
{
  __int64 v0; // rax

  v0 = *(_QWORD *)(qword_140C4E648 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
  if ( *(_BYTE *)(v0 + 6940) )
    return v0 + 7232;
  else
    return 0LL;
}
