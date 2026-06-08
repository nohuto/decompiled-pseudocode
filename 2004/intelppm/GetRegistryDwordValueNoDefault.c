/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x1C0020924
 * Callers:
 *     GetRegistryQwordValue @ 0x1C002083C (GetRegistryQwordValue.c)
 *     GetRegistryDwordValue @ 0x1C0020900 (GetRegistryDwordValue.c)
 *     ProcLibTraceSummary2 @ 0x1C0023958 (ProcLibTraceSummary2.c)
 *     InitPerfStatesInternal @ 0x1C002480C (InitPerfStatesInternal.c)
 *     GetHvPpmCapabilities @ 0x1C002F8E8 (GetHvPpmCapabilities.c)
 *     InitCpcStatesInternal @ 0x1C0033C90 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00351F4 (InitPerfFeedbackInternal.c)
 *     InitDriver @ 0x1C003B2B4 (InitDriver.c)
 *     PopulateEnergyEstimationModel @ 0x1C003B590 (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x1C003B680 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C003BEAC (ReadPowerCurve.c)
 * Callees:
 *     memset @ 0x1C00047C0 (memset.c)
 */

__int64 __fastcall GetRegistryDwordValueNoDefault(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[14]; // [rsp+30h] [rbp-78h] BYREF

  memset(v7, 0, sizeof(v7));
  LODWORD(v7[1]) = 292;
  v7[2] = a2;
  v7[3] = a3;
  LODWORD(v7[4]) = 0x4000000;
  return RtlQueryRegistryValuesEx(0LL, a1, v7, 0LL, 0LL);
}
