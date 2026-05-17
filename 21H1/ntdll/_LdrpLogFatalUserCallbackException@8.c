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

int __stdcall LdrpLogFatalUserCallbackException(int a1, int a2)
{
  int v2; // edx
  int v3; // esi
  int InformationProcess; // eax
  int (__thiscall *v5)(_DWORD, _DWORD *); // esi
  int result; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // edx
  unsigned __int16 Length; // ax
  int v9; // ecx
  wchar_t *Buffer; // eax
  int v11; // eax
  __int16 v12; // [esp+Ch] [ebp-94h] BYREF
  int v13; // [esp+10h] [ebp-90h] BYREF
  int v14; // [esp+14h] [ebp-8Ch]
  int v15; // [esp+1Ch] [ebp-84h] BYREF
  _DWORD v16[2]; // [esp+20h] [ebp-80h] BYREF
  _DWORD v17[20]; // [esp+28h] [ebp-78h] BYREF
  _DWORD v18[9]; // [esp+78h] [ebp-28h] BYREF

  v2 = `RtlpGetCookieValue'::`2'::CookieValue;
  v16[1] = a2;
  v3 = RtlpUnhandledExceptionFilter;
  v16[0] = a1;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    InformationProcess = ZwQueryInformationProcess(-1, 36, (int)&v15, 4, 0);
    if ( InformationProcess < 0 )
      goto LABEL_3;
    v2 = v15;
    `RtlpGetCookieValue'::`2'::CookieValue = v15;
  }
  v5 = (int (__thiscall *)(_DWORD, _DWORD *))(v2 ^ __ROR4__(v3, 32 - (v2 & 0x1F)));
  if ( v5 )
    result = v5(v5, v16);
  else
    result = RtlUnhandledExceptionFilter2(v16, &dword_4B2850A4);
  if ( result != -1 )
  {
    if ( !EtwEventRegister(UserLoaderGuid, 0, 0, (int)&v13) )
    {
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      Length = ProcessParameters->ImagePathName.Length;
      v18[3] = 0;
      v12 = Length >> 1;
      v18[1] = 0;
      v18[0] = &v12;
      v18[2] = 2;
      v9 = ProcessParameters->ImagePathName.Length;
      Buffer = ProcessParameters->ImagePathName.Buffer;
      v18[5] = 0;
      v18[7] = 0;
      v18[4] = Buffer;
      v18[6] = v9;
      EtwEventWrite(v13, v14, FatalUserCallbackException, 2, (int)v18);
      EtwNotificationUnregister(v13, v14, 0);
    }
    v17[3] = *(_DWORD *)(a2 + 184);
    v11 = *(_DWORD *)(a1 + 4) | 1;
    v17[0] = -1073740771;
    v17[1] = v11;
    v17[2] = a1;
    v17[4] = 0;
    InformationProcess = ZwRaiseException((int)v17, a2, 0);
LABEL_3:
    RtlRaiseStatus(InformationProcess);
  }
  return result;
}
