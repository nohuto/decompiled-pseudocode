/*
 * XREFs of MmAdjustWorkingSetSize @ 0x1403C7500
 * Callers:
 *     PspApplyWorkingSetLimitsToProcess @ 0x140682EA4 (PspApplyWorkingSetLimitsToProcess.c)
 *     CmpInitializeRegistryProcess @ 0x140831BF4 (CmpInitializeRegistryProcess.c)
 *     PspApplyWorkingSetLimits @ 0x1409AFE9C (PspApplyWorkingSetLimits.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x14036D62C (MmAdjustWorkingSetSizeEx.c)
 */

__int64 __fastcall MmAdjustWorkingSetSize(unsigned __int64 a1, unsigned __int64 a2, int a3, char a4)
{
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = 0;
  return MmAdjustWorkingSetSizeEx(a1, a2, a3, a4, 0, v5);
}
