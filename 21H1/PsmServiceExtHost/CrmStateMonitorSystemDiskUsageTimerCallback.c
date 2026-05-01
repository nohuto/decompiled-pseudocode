/*
 * XREFs of CrmStateMonitorSystemDiskUsageTimerCallback @ 0x18002B900
 * Callers:
 *     <none>
 * Callees:
 *     CrmLogStateMonitorStateSet @ 0x18002BA64 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x18002BC40 (CrmStateMonitorLogDataGet.c)
 *     CrmStateMonitorSystemDiskUsageIdleTimeGet @ 0x18002BDB0 (CrmStateMonitorSystemDiskUsageIdleTimeGet.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmStateMonitorSystemDiskUsageTimerCallback(__int64 a1, unsigned int *a2)
{
  int v3; // eax
  __int64 v4; // rsi
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned int *i; // rdi
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-78h] BYREF
  __int64 v12; // [rsp+28h] [rbp-70h] BYREF
  __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v14[56]; // [rsp+38h] [rbp-60h] BYREF

  v3 = CrmStateMonitorSystemDiskUsageIdleTimeGet(a2, &v13);
  v4 = v13;
  if ( v3 < 0 )
    v4 = -1LL;
  RtlQueryUnbiasedInterruptTime(&v12);
  v5 = v12 - *((_QWORD *)a2 + 13);
  if ( *((_QWORD *)a2 + 14) == -1LL || v4 == -1 )
    v6 = 0LL;
  else
    v6 = v4 - *((_QWORD *)a2 + 14);
  if ( v5 )
  {
    v7 = v5 - v6;
    if ( v5 < v6 )
      v7 = 0LL;
    v8 = 100 * v7 / v5;
  }
  else
  {
    LODWORD(v8) = 100;
  }
  v11 = v8;
  RtlAcquireSRWLockExclusive(a2 + 2);
  a2[4] = GetCurrentThreadId();
  CrmStateMonitorLogDataGet(a2, v14, &v11);
  **((_DWORD **)a2 + 5) = v11;
  for ( i = (unsigned int *)*((_QWORD *)a2 + 3); i != a2 + 6; i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, int *))i - 1))(i - 2, *a2, &v11);
  a2[4] = 0;
  RtlReleaseSRWLockExclusive(a2 + 2);
  CrmLogStateMonitorStateSet(a2, v14);
  result = v12;
  *((_QWORD *)a2 + 13) = v12;
  *((_QWORD *)a2 + 14) = v4;
  return result;
}
