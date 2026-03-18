/*
 * XREFs of xxxClientCharToWchar @ 0x1C0231A58
 * Callers:
 *     EditionClientCharToWchar @ 0x1C01F5700 (EditionClientCharToWchar.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCharToWchar(__int16 a1, __int16 a2)
{
  int v2; // ebx
  __int64 *v3; // rcx
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF
  char v6; // [rsp+60h] [rbp+8h] BYREF
  char v7; // [rsp+68h] [rbp+10h] BYREF
  __int16 v8; // [rsp+70h] [rbp+18h] BYREF
  __int16 v9; // [rsp+72h] [rbp+1Ah]
  int v10; // [rsp+78h] [rbp+20h] BYREF

  v5[0] = 0LL;
  v10 = 0;
  v8 = a1;
  v9 = a2;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v7);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v6);
  EtwTraceBeginCallback(82LL);
  v2 = KeUserModeCallback(82LL, &v8, 4LL, v5, &v10);
  EtwTraceEndCallback(82LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v6);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v7);
  if ( v2 < 0 || v10 != 24 )
    return 95LL;
  v3 = (__int64 *)v5[0];
  if ( (unsigned __int64)(v5[0] + 8LL) < v5[0] || v5[0] + 8LL > MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  result = *v3;
  v5[1] = *v3;
  return result;
}
