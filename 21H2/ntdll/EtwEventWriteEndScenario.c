/*
 * XREFs of EtwEventWriteEndScenario @ 0x18004FD30
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventWrite @ 0x180050300 (EtwEventWrite.c)
 *     EtwpGetKmRegHandle @ 0x180051D58 (EtwpGetKmRegHandle.c)
 *     EtwEventEnabled @ 0x180051DB0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A0ED0 (NtTraceControl.c)
 */

__int64 __fastcall EtwEventWriteEndScenario(__int64 a1, _OWORD *a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  _GUID ActivityId; // xmm1
  int v10; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v11[3]; // [rsp+38h] [rbp-50h] BYREF

  v10 = 0;
  if ( !a2 )
    return 87LL;
  if ( !(unsigned __int8)EtwEventEnabled() )
    return 6LL;
  memset(v11, 0, sizeof(v11));
  result = EtwpGetKmRegHandle(a1, v11);
  if ( !(_DWORD)result )
  {
    *(_OWORD *)((char *)v11 + 8) = *a2;
    ActivityId = NtCurrentTeb()->ActivityId;
    DWORD2(v11[2]) = 11;
    *(_GUID *)((char *)&v11[1] + 8) = ActivityId;
    NtTraceControl(13LL, v11, 48LL, 0LL, 0, &v10);
    return EtwEventWrite(a1, a2, a3, a4);
  }
  return result;
}
