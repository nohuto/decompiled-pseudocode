/*
 * XREFs of fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C010F9B8
 * Callers:
 *     xxxCallCtfHook @ 0x1C004D454 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C0056CC0 (xxxHkCallHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall fnHkINLPMOUSEHOOKSTRUCTEX(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v6; // rdi
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // rcx
  _DWORD v12[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v13; // [rsp+58h] [rbp-50h]
  __int64 v14; // [rsp+60h] [rbp-48h]
  __int64 v15; // [rsp+68h] [rbp-40h]
  int v16; // [rsp+70h] [rbp-38h]
  int v17; // [rsp+74h] [rbp-34h]
  __int128 v18; // [rsp+78h] [rbp-30h]
  __int128 v19; // [rsp+88h] [rbp-20h]
  __int64 v20; // [rsp+98h] [rbp-10h]
  char v21; // [rsp+B0h] [rbp+8h] BYREF
  int v22; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int64 v23; // [rsp+C0h] [rbp+18h] BYREF

  v23 = 0LL;
  v22 = 0;
  v12[1] = 0;
  v17 = 0;
  v12[0] = a1;
  v13 = a2;
  *((_DWORD *)a3 + 5) = 0;
  *((_DWORD *)a3 + 9) = 0;
  v18 = *a3;
  v19 = a3[1];
  v20 = *((_QWORD *)a3 + 4);
  v14 = a4;
  v15 = a5;
  v6 = a6;
  v16 = *a6;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a5);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  EtwTraceBeginCallback(44LL);
  v7 = KeUserModeCallback(44LL, v12, 80LL, &v23, &v22);
  EtwTraceEndCallback(44LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a5);
  if ( v7 < 0 || v22 != 24 )
    return 0LL;
  v8 = (__int64 *)v23;
  if ( v23 + 8 < v23 || v23 + 8 > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  v9 = *v8;
  v10 = *(_DWORD **)(v23 + 16);
  if ( v10 + 1 < v10 || (unsigned __int64)(v10 + 1) > MmUserProbeAddress )
    v10 = (_DWORD *)MmUserProbeAddress;
  *v6 ^= ((unsigned __int8)*v10 ^ (unsigned __int8)*v6) & 0x10;
  return v9;
}
