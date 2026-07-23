/*
 * XREFs of _LdrpLogFatalUserCallbackException@8 @ 0x4B330333
 * Callers:
 *     _KiUserCallbackExceptionHandler@16 @ 0x4B2F4D80 (_KiUserCallbackExceptionHandler@16.c)
 * Callees:
 *     _EtwEventRegister@16 @ 0x4B2AE0A0 (_EtwEventRegister@16.c)
 *     _EtwNotificationUnregister@12 @ 0x4B2D99D0 (_EtwNotificationUnregister@12.c)
 *     _EtwEventWrite@20 @ 0x4B2E1250 (_EtwEventWrite@20.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _ZwRaiseException@12 @ 0x4B2F3FE0 (_ZwRaiseException@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _RtlUnhandledExceptionFilter2@8 @ 0x4B3686E0 (_RtlUnhandledExceptionFilter2@8.c)
 */

LONG __stdcall LdrpLogFatalUserCallbackException(_EXCEPTION_RECORD *a1, PCONTEXT ContextRecord)
{
  PULONG v2; // edx
  int v3; // esi
  int v4; // eax
  int (__thiscall *v5)(_DWORD, _EXCEPTION_POINTERS *); // esi
  LONG result; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // edx
  unsigned __int16 Length; // ax
  int v9; // ecx
  wchar_t *Buffer; // eax
  unsigned int v11; // eax
  __int16 v12; // [esp+Ch] [ebp-94h] BYREF
  ULONGLONG RegHandle; // [esp+10h] [ebp-90h] BYREF
  ULONG *ProcessInformation; // [esp+1Ch] [ebp-84h] BYREF
  _EXCEPTION_POINTERS ExceptionPointers; // [esp+20h] [ebp-80h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [esp+28h] [ebp-78h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+78h] [ebp-28h] BYREF
  wchar_t *v18; // [esp+88h] [ebp-18h]
  int v19; // [esp+8Ch] [ebp-14h]
  int v20; // [esp+90h] [ebp-10h]
  int v21; // [esp+94h] [ebp-Ch]

  v2 = `RtlpGetCookieValue'::`2'::CookieValue;
  ExceptionPointers.ContextRecord = ContextRecord;
  v3 = RtlpUnhandledExceptionFilter;
  ExceptionPointers.ExceptionRecord = a1;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie, &ProcessInformation, 4u, 0);
    if ( v4 < 0 )
      goto LABEL_3;
    v2 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  v5 = (int (__thiscall *)(_DWORD, _EXCEPTION_POINTERS *))((unsigned int)v2 ^ __ROR4__(
                                                                                v3,
                                                                                32 - ((unsigned __int8)v2 & 0x1F)));
  if ( v5 )
    result = v5(v5, &ExceptionPointers);
  else
    result = RtlUnhandledExceptionFilter2(&ExceptionPointers, (ULONG)&dword_4B2850A4);
  if ( result != -1 )
  {
    if ( !EtwEventRegister(&UserLoaderGuid, 0, 0, &RegHandle) )
    {
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      Length = ProcessParameters->ImagePathName.Length;
      UserData.Reserved = 0;
      v12 = Length >> 1;
      HIDWORD(UserData.Ptr) = 0;
      LODWORD(UserData.Ptr) = &v12;
      UserData.Size = 2;
      v9 = ProcessParameters->ImagePathName.Length;
      Buffer = ProcessParameters->ImagePathName.Buffer;
      v19 = 0;
      v21 = 0;
      v18 = Buffer;
      v20 = v9;
      EtwEventWrite(RegHandle, &FatalUserCallbackException, 2u, &UserData);
      EtwNotificationUnregister(RegHandle, 0);
    }
    ExceptionRecord.ExceptionAddress = (void *)ContextRecord->Eip;
    v11 = a1->ExceptionFlags | 1;
    ExceptionRecord.ExceptionCode = -1073740771;
    ExceptionRecord.ExceptionFlags = v11;
    ExceptionRecord.ExceptionRecord = a1;
    ExceptionRecord.NumberParameters = 0;
    v4 = ZwRaiseException(&ExceptionRecord, ContextRecord, 0);
LABEL_3:
    RtlRaiseStatus(v4);
  }
  return result;
}
