/*
 * XREFs of xxxClientGetDDEHookData @ 0x1C02328E8
 * Callers:
 *     xxxDDETrackPostHook @ 0x1C021CC3C (xxxDDETrackPostHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall xxxClientGetDDEHookData(int a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  __int64 *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  __int128 v11; // xmm3
  __int128 v12; // xmm4
  __int64 v13; // xmm0_8
  char v15; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v16[3]; // [rsp+31h] [rbp-97h] BYREF
  int v17; // [rsp+34h] [rbp-94h] BYREF
  _QWORD v18[5]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v19[10]; // [rsp+60h] [rbp-68h] BYREF

  v18[0] = 0LL;
  v17 = 0;
  memset(v19, 0, 0x48uLL);
  v19[1] = a2;
  LODWORD(v19[0]) = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v16);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  EtwTraceBeginCallback(71LL);
  v6 = KeUserModeCallback(71LL, v19, 72LL, v18, &v17);
  EtwTraceEndCallback(71LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v16);
  if ( v6 < 0 || v17 != 24 )
    return 0LL;
  v7 = (__int64 *)v18[0];
  if ( (unsigned __int64)(v18[0] + 8LL) < v18[0] || v18[0] + 8LL > MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v8 = *v7;
  v18[1] = *v7;
  v9 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 84) & 1) != 0 && *(_QWORD *)(v9 + 96) == a3 )
      return 0LL;
  }
  v10 = *(_QWORD *)(v18[0] + 16LL);
  if ( v10 + 56 < v10 || v10 + 56 > MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v11 = *(_OWORD *)(v10 + 16);
  v12 = *(_OWORD *)(v10 + 32);
  v13 = *(_QWORD *)(v10 + 48);
  *(_OWORD *)a3 = *(_OWORD *)v10;
  *(_OWORD *)(a3 + 16) = v11;
  *(_OWORD *)(a3 + 32) = v12;
  *(_QWORD *)(a3 + 48) = v13;
  return (unsigned int)v8;
}
