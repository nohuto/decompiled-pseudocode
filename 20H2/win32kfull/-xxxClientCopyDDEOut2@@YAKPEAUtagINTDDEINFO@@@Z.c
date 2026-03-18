/*
 * XREFs of ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1C022826C
 * Callers:
 *     xxxClientCopyDDEOut1 @ 0x1C0232044 (xxxClientCopyDDEOut1.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCopyDDEOut2(struct tagINTDDEINFO *a1)
{
  int v2; // ebx
  __int64 *v3; // rcx
  __int64 result; // rax
  char v5; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v6[3]; // [rsp+31h] [rbp-87h] BYREF
  int v7; // [rsp+34h] [rbp-84h] BYREF
  _QWORD v8[3]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v9; // [rsp+50h] [rbp-68h] BYREF
  __int128 v10; // [rsp+60h] [rbp-58h]
  __int128 v11; // [rsp+70h] [rbp-48h]
  __int128 v12; // [rsp+80h] [rbp-38h]
  __int64 v13; // [rsp+90h] [rbp-28h]

  v8[0] = 0LL;
  v7 = 0;
  v9 = *(_OWORD *)a1;
  v10 = *((_OWORD *)a1 + 1);
  v11 = *((_OWORD *)a1 + 2);
  v12 = *((_OWORD *)a1 + 3);
  v13 = *((_QWORD *)a1 + 8);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v6);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v5);
  EtwTraceBeginCallback(63LL);
  v2 = KeUserModeCallback(63LL, &v9, 72LL, v8, &v7);
  EtwTraceEndCallback(63LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v5);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v6);
  *((_QWORD *)a1 + 3) = *((_QWORD *)&v10 + 1);
  if ( v2 < 0 || v7 != 24 )
    return 0LL;
  v3 = (__int64 *)v8[0];
  if ( (unsigned __int64)(v8[0] + 8LL) < v8[0] || v8[0] + 8LL > MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  result = *v3;
  v8[1] = *v3;
  return result;
}
