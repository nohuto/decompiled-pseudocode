/*
 * XREFs of MiGetCurrentMultiplexedVm @ 0x14026920C
 * Callers:
 *     MmQuerySystemWorkingSetInformation @ 0x140263404 (MmQuerySystemWorkingSetInformation.c)
 *     MmGetWorkingSetLeafSize @ 0x140269180 (MmGetWorkingSetLeafSize.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14036D62C (MmAdjustWorkingSetSizeEx.c)
 * Callees:
 *     <none>
 */

__int64 MiGetCurrentMultiplexedVm()
{
  __int64 v0; // rax

  v0 = *(_QWORD *)(qword_140C51F48 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
  if ( *(_BYTE *)(v0 + 16732) )
    return v0 + 17024;
  else
    return 0LL;
}
