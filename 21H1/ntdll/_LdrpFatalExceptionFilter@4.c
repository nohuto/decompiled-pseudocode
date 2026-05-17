/*
 * XREFs of _LdrpFatalExceptionFilter@4 @ 0x4B3348A9
 * Callers:
 *     _LdrGetDllHandleByName@12 @ 0x4B2CF2C0 (_LdrGetDllHandleByName@12.c)
 *     _LdrGetDllHandleByMapping@8 @ 0x4B2E5810 (_LdrGetDllHandleByMapping@8.c)
 * Callees:
 *     _RtlReportSilentProcessExit@8 @ 0x4B2DD910 (_RtlReportSilentProcessExit@8.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _RtlUnhandledExceptionFilter2@8 @ 0x4B3686E0 (_RtlUnhandledExceptionFilter2@8.c)
 */

int __thiscall LdrpFatalExceptionFilter(int **this)
{
  struct _TEB *v2; // ecx
  int v3; // ebx
  int v4; // edx
  int v5; // esi
  int InformationProcess; // eax
  void (__thiscall *v7)(_DWORD, int **); // esi
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v2 = NtCurrentTeb();
  v3 = **this;
  if ( v3 == -1073741571 && v2->NtTib.StackLimit > v2->DeallocationStack )
  {
    RtlReportSilentProcessExit(-1, -1073741571);
  }
  else
  {
    v4 = `RtlpGetCookieValue'::`2'::CookieValue;
    v5 = RtlpUnhandledExceptionFilter;
    if ( !`RtlpGetCookieValue'::`2'::CookieValue )
    {
      InformationProcess = ZwQueryInformationProcess(-1, 36, (int)&v9, 4, 0);
      if ( InformationProcess < 0 )
        RtlRaiseStatus(InformationProcess);
      v4 = v9;
      `RtlpGetCookieValue'::`2'::CookieValue = v9;
    }
    v7 = (void (__thiscall *)(_DWORD, int **))(v4 ^ __ROR4__(v5, 32 - (v4 & 0x1F)));
    if ( v7 )
      v7(v7, this);
    else
      RtlUnhandledExceptionFilter2(this, &dword_4B2850A4);
  }
  ZwTerminateProcess(-1, v3);
  return 0;
}
