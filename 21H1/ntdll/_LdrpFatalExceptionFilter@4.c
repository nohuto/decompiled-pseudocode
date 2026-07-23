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

int __thiscall LdrpFatalExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  struct _TEB *v2; // ecx
  NTSTATUS ExceptionCode; // ebx
  PULONG v4; // edx
  int v5; // esi
  int v6; // eax
  void (__thiscall *v7)(_DWORD, PEXCEPTION_POINTERS); // esi
  ULONG *ProcessInformation; // [esp+Ch] [ebp-4h] BYREF

  v2 = NtCurrentTeb();
  ExceptionCode = ExceptionPointers->ExceptionRecord->ExceptionCode;
  if ( ExceptionCode == -1073741571 && v2->NtTib.StackLimit > v2->DeallocationStack )
  {
    RtlReportSilentProcessExit((HANDLE)0xFFFFFFFF, -1073741571);
  }
  else
  {
    v4 = `RtlpGetCookieValue'::`2'::CookieValue;
    v5 = RtlpUnhandledExceptionFilter;
    if ( !`RtlpGetCookieValue'::`2'::CookieValue )
    {
      v6 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie, &ProcessInformation, 4u, 0);
      if ( v6 < 0 )
        RtlRaiseStatus(v6);
      v4 = ProcessInformation;
      `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
    }
    v7 = (void (__thiscall *)(_DWORD, PEXCEPTION_POINTERS))((unsigned int)v4 ^ __ROR4__(
                                                                                 v5,
                                                                                 32 - ((unsigned __int8)v4 & 0x1F)));
    if ( v7 )
      v7(v7, ExceptionPointers);
    else
      RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&dword_4B2850A4);
  }
  ZwTerminateProcess((HANDLE)0xFFFFFFFF, ExceptionCode);
  return 0;
}
