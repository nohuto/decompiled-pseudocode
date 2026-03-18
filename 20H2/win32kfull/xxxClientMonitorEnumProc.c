/*
 * XREFs of xxxClientMonitorEnumProc @ 0x1C0113650
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientMonitorEnumProc(__int64 a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v5; // ebx
  __int64 *v6; // rcx
  __int64 result; // rax
  char v8; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v9[3]; // [rsp+31h] [rbp-67h] BYREF
  int v10; // [rsp+34h] [rbp-64h] BYREF
  _QWORD v11[3]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v13; // [rsp+60h] [rbp-38h]
  __int64 v14; // [rsp+70h] [rbp-28h]
  __int64 v15; // [rsp+78h] [rbp-20h]

  v11[0] = 0LL;
  v10 = 0;
  v12[0] = a1;
  v12[1] = a2;
  v13 = *a3;
  v14 = a4;
  v15 = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v9);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v8);
  EtwTraceBeginCallback(87LL);
  v5 = KeUserModeCallback(87LL, v12, 48LL, v11, &v10);
  EtwTraceEndCallback(87LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v8);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v9);
  if ( v5 < 0 || v10 != 24 )
    return 0LL;
  v6 = (__int64 *)v11[0];
  if ( (unsigned __int64)(v11[0] + 8LL) < v11[0] || v11[0] + 8LL > MmUserProbeAddress )
    v6 = (__int64 *)MmUserProbeAddress;
  result = *v6;
  v11[1] = *v6;
  return result;
}
