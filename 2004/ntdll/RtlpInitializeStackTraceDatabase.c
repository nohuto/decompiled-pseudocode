/*
 * XREFs of RtlpInitializeStackTraceDatabase @ 0x1801011E0
 * Callers:
 *     RtlControlStackTraceDataBase @ 0x180100D18 (RtlControlStackTraceDataBase.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18007419C (RtlpEnumProcessHeaps.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     RtlStdDeleteStackDatabase @ 0x180100DE0 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x180100E20 (RtlStdInitializeStackDatabase.c)
 */

__int64 __fastcall RtlpInitializeStackTraceDatabase(void *a1, ULONG_PTR a2, ULONG_PTR a3)
{
  NTSTATUS v4; // ebx
  _QWORD *v5; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v6[4]; // [rsp+28h] [rbp-20h] BYREF

  if ( RtlpStackTraceDatabase )
    return 3221225994LL;
  v4 = RtlStdInitializeStackDatabase(a1, a2, a3, &v5);
  if ( v4 >= 0
    && _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpStackTraceDatabase, (signed __int64)v5, 0LL) )
  {
    RtlStdDeleteStackDatabase(v5);
    return 3221225994LL;
  }
  if ( v4 >= 0 && LdrInitState == 3 )
  {
    v6[0] = 1;
    v6[1] = 0x8000000;
    v6[2] = 0x8000000;
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpStackTraceDatabaseHeapEnum, (__int64)v6, 0);
  }
  return (unsigned int)v4;
}
