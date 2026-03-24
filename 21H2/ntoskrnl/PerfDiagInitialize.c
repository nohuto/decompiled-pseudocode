/*
 * XREFs of PerfDiagInitialize @ 0x140A42BBC
 * Callers:
 *     EtwpInitialize @ 0x140A42414 (EtwpInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     EtwUnregister @ 0x1407601D0 (EtwUnregister.c)
 *     EtwRegister @ 0x140762CB0 (EtwRegister.c)
 *     EtwWriteStartScenario @ 0x140788490 (EtwWriteStartScenario.c)
 */

int PerfDiagInitialize()
{
  int result; // eax
  ULONGLONG RegHandle; // [rsp+30h] [rbp-20h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-18h] BYREF

  RegHandle = 0LL;
  qword_140C1A220 = 0LL;
  dword_140C1A228 = 0;
  EtwRegister(
    &MS_Kernel_BootDiagnostics_SystemProxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpBootSystemProxyCallback,
    0LL,
    &PerfDiagGlobals);
  EtwRegister(
    &MS_Kernel_BootDiagnostics_UserProxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpBootUserProxyCallback,
    0LL,
    &qword_140C1A208);
  EtwRegister(
    &MS_Kernel_SecondaryLogonDiagnostics_Proxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpSecondaryLogonProxyCallback,
    0LL,
    &qword_140C1A210);
  EtwRegister(
    &MS_Kernel_ShutdownDiagnostics_Proxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpShutdownProxyCallback,
    0LL,
    &qword_140C1A218);
  result = EtwRegister(&MS_Kernel_BootDiagnostics_Provider, 0LL, 0LL, &RegHandle);
  if ( result >= 0 )
  {
    ActivityId.Data1 = 1729382729;
    *(_DWORD *)&ActivityId.Data2 = 1213813042;
    *(_DWORD *)ActivityId.Data4 = 933705344;
    *(_DWORD *)&ActivityId.Data4[4] = -668649292;
    EtwWriteStartScenario((ULONG_PTR *)RegHandle, &KMBootEvt_SystemBoot_Start, &ActivityId, 0, 0LL);
    return EtwUnregister(RegHandle);
  }
  return result;
}
