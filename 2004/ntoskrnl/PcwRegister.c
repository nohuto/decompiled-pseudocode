/*
 * XREFs of PcwRegister @ 0x14076F550
 * Callers:
 *     ExpPcwHostCallback @ 0x1407B98C0 (ExpPcwHostCallback.c)
 *     EtwRegisterCounters @ 0x1407B9AC8 (EtwRegisterCounters.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14032FE4C (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14032FE68 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExpPcwDisabledStatus @ 0x140953678 (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwRegister(PPCW_REGISTRATION *Registration, PPCW_REGISTRATION_INFORMATION Info)
{
  __int64 (__fastcall **ExtensionTable)(PPCW_REGISTRATION *, PPCW_REGISTRATION_INFORMATION); // rax
  NTSTATUS v5; // ebx

  ExtensionTable = (__int64 (__fastcall **)(PPCW_REGISTRATION *, PPCW_REGISTRATION_INFORMATION))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  if ( ExtensionTable )
  {
    v5 = (*ExtensionTable)(Registration, Info);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
  else
  {
    *Registration = 0LL;
    return ExpPcwDisabledStatus();
  }
  return v5;
}
