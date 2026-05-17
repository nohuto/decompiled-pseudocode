/*
 * XREFs of LdrpLogFatalUserCallbackException @ 0x1800CF570
 * Callers:
 *     KiUserCallbackDispatcherHandler @ 0x1800A0E40 (KiUserCallbackDispatcherHandler.c)
 * Callees:
 *     EtwEventRegister @ 0x180042EC0 (EtwEventRegister.c)
 *     EtwEventWrite @ 0x18004F1F0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x1800503E0 (EtwNotificationUnregister.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtQueryInformationProcess @ 0x18009D3D0 (NtQueryInformationProcess.c)
 *     ZwRaiseException @ 0x18009FD60 (ZwRaiseException.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180100AE0 (RtlUnhandledExceptionFilter2.c)
 *     RtlRaiseStatus @ 0x180102820 (RtlRaiseStatus.c)
 */

__int64 __fastcall LdrpLogFatalUserCallbackException(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rbx
  NTSTATUS v6; // eax
  __int64 (__fastcall *v7)(_QWORD *); // rbx
  __int64 result; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  unsigned __int16 Length; // ax
  int v11; // ecx
  wchar_t *Buffer; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // rax
  unsigned int v16; // eax
  __int16 v17; // [rsp+30h] [rbp-D0h] BYREF
  int ProcessInformation; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+50h] [rbp-B0h]
  int v22; // [rsp+54h] [rbp-ACh]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  int v25; // [rsp+68h] [rbp-98h]
  __int16 *v26; // [rsp+F0h] [rbp-10h] BYREF
  int v27; // [rsp+F8h] [rbp-8h]
  int v28; // [rsp+FCh] [rbp-4h]
  wchar_t *v29; // [rsp+100h] [rbp+0h]
  int v30; // [rsp+108h] [rbp+8h]
  int v31; // [rsp+10Ch] [rbp+Ch]

  v2 = `RtlpGetCookieValue'::`2'::CookieValue;
  v4 = RtlpUnhandledExceptionFilter;
  v20[0] = a1;
  v20[1] = a2;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v6 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
    if ( v6 < 0 )
      RtlRaiseStatus((unsigned int)v6);
    v2 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  v7 = (__int64 (__fastcall *)(_QWORD *))(v2 ^ __ROR8__(v4, 64 - (v2 & 0x3F)));
  if ( v7 )
    result = v7(v20);
  else
    result = RtlUnhandledExceptionFilter2(v20, &unk_180122836);
  if ( (_DWORD)result != -1 )
  {
    if ( !(unsigned int)EtwEventRegister((int)&UserLoaderGuid, 0LL, 0LL, (__int64)&v19) )
    {
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      Length = ProcessParameters->ImagePathName.Length;
      v28 = 0;
      v17 = Length >> 1;
      v26 = &v17;
      v27 = 2;
      v11 = ProcessParameters->ImagePathName.Length;
      Buffer = ProcessParameters->ImagePathName.Buffer;
      v31 = 0;
      v30 = v11;
      v29 = Buffer;
      EtwEventWrite(v19, (int)&FatalUserCallbackException, 2, (__int64)&v26);
      EtwNotificationUnregister(v19, 0LL, v13, v14);
    }
    v15 = *(_QWORD *)(a2 + 248);
    v25 = 0;
    v24 = v15;
    LODWORD(v15) = *(_DWORD *)(a1 + 4) | 1;
    v21 = -1073740771;
    v22 = v15;
    v23 = a1;
    v16 = ZwRaiseException();
    RtlRaiseStatus(v16);
  }
  return result;
}
