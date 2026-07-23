/*
 * XREFs of HalpMcaSetFeatureFlags @ 0x1409A2364
 * Callers:
 *     HalpInitializeMce @ 0x1409A1D4C (HalpInitializeMce.c)
 * Callees:
 *     HalpCpuID @ 0x140251BF0 (HalpCpuID.c)
 *     HalpGetCpuInfo @ 0x1403A10C0 (HalpGetCpuInfo.c)
 *     HalpIsCmciImplemented @ 0x14099AC64 (HalpIsCmciImplemented.c)
 */

char HalpMcaSetFeatureFlags()
{
  unsigned __int64 v0; // rax
  unsigned __int8 v1; // cl
  signed __int32 v3[8]; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int8 v4; // [rsp+40h] [rbp+10h] BYREF
  int v5; // [rsp+48h] [rbp+18h] BYREF
  unsigned int v6; // [rsp+50h] [rbp+20h] BYREF
  int v7; // [rsp+58h] [rbp+28h] BYREF

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v4 = 0;
  LOBYTE(v0) = -HalpGetCpuInfo(0LL, 0LL, 0LL, &v4);
  v1 = (_BYTE)v0 != 0 ? v4 : 0;
  v4 = v1;
  if ( v1 == 2 )
  {
    HalpMceBroadcast = 1;
    if ( !HalpIsCmciImplemented() )
      HalpMcaPollForCmc = 1;
    v0 = __readmsr(0x179u);
    if ( (v0 & 0x1000000) != 0 )
      HalpMcaRecoverySupported = 1;
    if ( (v0 & 0x4000000) != 0 )
      HalpMcaExtendedLoggingSupported = 1;
  }
  else
  {
    if ( v1 != 1 )
      goto LABEL_19;
    LOBYTE(v0) = HalpCpuID(0x80000000, &v6, &v5, &v5, &v5);
    if ( v6 >= 0x80000007 )
    {
      HalpCpuID(0x80000007, &v5, &v7, &v5, &v5);
      LOBYTE(v0) = v7;
      if ( (v7 & 2) != 0 )
        HalpMcaRecoverySupported = 1;
      if ( (v7 & 1) != 0 )
        HalpMcaOverflowRecoverySupported = 1;
      if ( (v7 & 8) != 0 )
        HalpMcaScalableRasSupported = 1;
    }
    if ( !HalpMcaScalableRasSupported || (LOBYTE(v0) = HalpIsCmciImplemented(), !(_BYTE)v0) )
LABEL_19:
      HalpMcaPollForCmc = 1;
  }
  HalpMcaBanksValidOnBoot = 1;
  HalpMcaMiscImplemented = 1;
  _InterlockedOr(v3, 0);
  return v0;
}
