/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x1C0021C74
 * Callers:
 *     GetRegistryQwordValue @ 0x1C0021B8C (GetRegistryQwordValue.c)
 *     GetRegistryDwordValue @ 0x1C0021C50 (GetRegistryDwordValue.c)
 *     ProcLibTraceSummary2 @ 0x1C0024CA8 (ProcLibTraceSummary2.c)
 *     InitPerfStatesInternal @ 0x1C0025BB0 (InitPerfStatesInternal.c)
 *     GetHvPpmCapabilities @ 0x1C0030C50 (GetHvPpmCapabilities.c)
 *     InitCpcStatesInternal @ 0x1C0035000 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0036570 (InitPerfFeedbackInternal.c)
 *     InitDriver @ 0x1C003C44C (InitDriver.c)
 *     PopulateEnergyEstimationModel @ 0x1C003C728 (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x1C003C818 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C003D5B4 (ReadPowerCurve.c)
 * Callees:
 *     memset @ 0x1C0004AC0 (memset.c)
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
