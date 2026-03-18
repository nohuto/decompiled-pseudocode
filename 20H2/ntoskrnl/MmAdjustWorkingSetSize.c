/*
 * XREFs of MmAdjustWorkingSetSize @ 0x1403C86E0
 * Callers:
 *     PspApplyWorkingSetLimitsToProcess @ 0x14062DC8C (PspApplyWorkingSetLimitsToProcess.c)
 *     CmpInitializeRegistryProcess @ 0x1407C1D6C (CmpInitializeRegistryProcess.c)
 *     PspApplyWorkingSetLimits @ 0x14090B2D4 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x14031CBE4 (MmAdjustWorkingSetSizeEx.c)
 */

__int64 __fastcall MmAdjustWorkingSetSize(unsigned __int64 a1, unsigned __int64 a2, int a3, char a4)
{
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = 0;
  return MmAdjustWorkingSetSizeEx(a1, a2, a3, a4, 0, v5);
}
