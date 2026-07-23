/*
 * XREFs of HalpApicSetupRegisterAccess @ 0x1403A1EA4
 * Callers:
 *     HalpApicInitializeLocalUnit @ 0x1403A1C30 (HalpApicInitializeLocalUnit.c)
 *     HalpApicDiscover @ 0x1403AB950 (HalpApicDiscover.c)
 *     HalpApicHvUpdateCallback @ 0x1404D1D80 (HalpApicHvUpdateCallback.c)
 * Callees:
 *     HalSocRequestConfigurationData @ 0x1403A1FEC (HalSocRequestConfigurationData.c)
 *     HalSocRequestApi @ 0x1403A21EC (HalSocRequestApi.c)
 *     HalpIsXboxNanovisorPresent @ 0x1403A2390 (HalpIsXboxNanovisorPresent.c)
 */

__int64 HalpApicSetupRegisterAccess()
{
  bool v0; // bl
  __int64 v1; // rdx
  int v2; // ecx
  char v3; // r10
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  void *v6; // r14
  void *v7; // r15
  __int64 (__fastcall *v8)(int, int); // rsi
  void (*v9)(); // r12
  __int64 (__fastcall *v10)(); // rdi
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int128 v15; // [rsp+30h] [rbp-10h] BYREF
  char v16; // [rsp+80h] [rbp+40h] BYREF
  char v17; // [rsp+88h] [rbp+48h] BYREF
  char v18; // [rsp+90h] [rbp+50h] BYREF
  char v19; // [rsp+98h] [rbp+58h] BYREF

  v0 = 0;
  v17 = 0;
  v19 = 0;
  v15 = 0LL;
  v16 = 0;
  v18 = 0;
  if ( (unsigned __int8)HalpIsXboxNanovisorPresent() )
    goto LABEL_21;
  HalSocRequestConfigurationData(4LL, v1, &v17);
  HalSocRequestConfigurationData(5LL, v4, &v19);
  v2 = 27;
  v5 = __readmsr(0x1Bu);
  if ( (v5 & 0x400) != 0 )
  {
    if ( !v17 )
    {
      HalSocRequestConfigurationData(6LL, (unsigned __int64)HIDWORD(v5) << 32, &v16);
      HalSocRequestConfigurationData(8LL, v13, &v18);
      if ( v16 )
      {
        if ( !v18 )
          HalpApicGuestX2Mode = 1;
      }
    }
    v3 = 1;
  }
  else
  {
    v3 = v17;
  }
  if ( v19 || v3 )
  {
LABEL_21:
    HalpApicUsingMsrs = 1;
    v6 = HalpApicX2ReadRegister;
    v7 = HalpApicX2WriteRegister;
    v8 = (__int64 (__fastcall *)(int, int))HalpApicX2WriteCommand;
    v9 = xHalTimerWatchdogStop;
    v10 = HalpApicX2EndOfInterrupt;
    if ( v3 )
    {
      v14 = __readmsr(0x1Bu);
      if ( (v14 & 0x400) == 0 )
      {
        __writemsr(0x1Bu, v14 | 0x400);
        if ( !HalpApicX2Mode )
          HalpApicRestoreNonX2ModeOnReset = 1;
      }
      v2 = 27;
      if ( (__readmsr(0x1Bu) & 0x400) != 0 )
      {
        HalpApicX2Mode = 1;
        goto LABEL_8;
      }
    }
    if ( !HalpApicX2Mode )
      goto LABEL_8;
    return 3221225858LL;
  }
  if ( HalpApicX2Mode )
    return 3221225858LL;
  HalpApicUsingMsrs = 0;
  v6 = HalpApic1ReadRegister;
  v7 = HalpApic1WriteRegister;
  v8 = HalpApic1WriteIcr;
  v9 = (void (*)())HalpApic1WaitForIcr;
  v10 = HalpApic1EndOfInterrupt;
LABEL_8:
  HalSocRequestApi(v2, (int)HalpApicHvUpdateCallback, 5, 16, &v15);
  if ( (_QWORD)v15 )
    v10 = (__int64 (__fastcall *)())v15;
  if ( *((_QWORD *)&v15 + 1) )
    v8 = (__int64 (__fastcall *)(int, int))*((_QWORD *)&v15 + 1);
  if ( !HalpApicX2Mode && !HalpApicUsingMsrs )
  {
    HalSocRequestConfigurationData(6LL, v11, &v16);
    v0 = v16 == 0;
  }
  HalpApicValidateSelfIpi = v0;
  result = 0LL;
  HalpApicRead = (__int64)v6;
  HalpApicWrite = (__int64)v7;
  HalpApicWriteCommand = (__int64)v8;
  HalpApicWaitForCommand = (__int64)v9;
  HalpApicEndOfInterrupt = (__int64)v10;
  return result;
}
