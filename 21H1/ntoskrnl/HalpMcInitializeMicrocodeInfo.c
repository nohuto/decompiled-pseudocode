/*
 * XREFs of HalpMcInitializeMicrocodeInfo @ 0x140A36548
 * Callers:
 *     HalpProcInitSystem @ 0x140996B30 (HalpProcInitSystem.c)
 * Callees:
 *     HalpMcRecordProcessorInfo @ 0x1403A31C4 (HalpMcRecordProcessorInfo.c)
 *     HalpMcSetUpdateInfoInvalid @ 0x1403A4D94 (HalpMcSetUpdateInfoInvalid.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

void __fastcall HalpMcInitializeMicrocodeInfo(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD v3[3]; // [rsp+40h] [rbp-48h] BYREF

  qword_140C496E8 = (__int64)&HalpMcUpdateInfoHead;
  HalpMcUpdateInfoHead = &HalpMcUpdateInfoHead;
  memset(v3, 0, sizeof(v3));
  if ( HalpMcUpdateMicrocodeFuncEx )
  {
    LOBYTE(a3) = HalpMcUpdateSelfHosting;
    HalpMcUpdateRecordingSupported = 1;
    HalpMcUpdateInfoValid = 1;
    if ( (int)HalpMcUpdateMicrocodeFuncEx(1LL, 0LL, a3, v3, 0LL, 1, 0) < 0 )
      HalpMcSetUpdateInfoInvalid();
    else
      HalpMcRecordProcessorInfo((__int64)v3);
  }
  else
  {
    HalpMcUpdateInfoValid = 0;
  }
}
