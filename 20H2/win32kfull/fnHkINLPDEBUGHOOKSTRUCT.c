/*
 * XREFs of fnHkINLPDEBUGHOOKSTRUCT @ 0x1C0230988
 * Callers:
 *     xxxHkCallHook @ 0x1C0056CC0 (xxxHkCallHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?CopyDebugHookLParam@@YAH_KPEAT_DEBUGLPARAM@@PEAUtagDEBUGHOOKINFO@@@Z @ 0x1C015CD8C (-CopyDebugHookLParam@@YAH_KPEAT_DEBUGLPARAM@@PEAUtagDEBUGHOOKINFO@@@Z.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall fnHkINLPDEBUGHOOKSTRUCT(int a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  __int64 *v10; // rcx
  __int64 result; // rax
  char v12; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v13[3]; // [rsp+31h] [rbp-B7h] BYREF
  int v14; // [rsp+34h] [rbp-B4h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-B0h] BYREF
  _OWORD v16[8]; // [rsp+50h] [rbp-98h] BYREF

  v15[0] = 0LL;
  v14 = 0;
  memset(v16, 0, 0x78uLL);
  LODWORD(v16[0]) = a1;
  *((_QWORD *)&v16[0] + 1) = a2;
  *(_DWORD *)(a3 + 28) = 0;
  v16[1] = *(_OWORD *)a3;
  v16[2] = *(_OWORD *)(a3 + 16);
  *((_QWORD *)&v16[6] + 1) = a4;
  *(_QWORD *)&v16[7] = a5;
  if ( a2 - 13 <= 1 )
    return 0LL;
  LODWORD(v16[6]) = CopyDebugHookLParam(a2, (union _DEBUGLPARAM *)&v16[3], (struct tagDEBUGHOOKINFO *)a3);
  *((_QWORD *)&v16[1] + 1) = 0LL;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v13);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  EtwTraceBeginCallback(43LL);
  v9 = KeUserModeCallback(43LL, v16, 120LL, v15, &v14);
  EtwTraceEndCallback(43LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v13);
  if ( v9 < 0 || v14 != 24 )
    return 0LL;
  v10 = (__int64 *)v15[0];
  if ( (unsigned __int64)(v15[0] + 8LL) < v15[0] || v15[0] + 8LL > MmUserProbeAddress )
    v10 = (__int64 *)MmUserProbeAddress;
  result = *v10;
  v15[1] = *v10;
  return result;
}
