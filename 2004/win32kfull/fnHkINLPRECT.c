/*
 * XREFs of fnHkINLPRECT @ 0x1C0231CEC
 * Callers:
 *     xxxHkCallHook @ 0x1C009AFE0 (xxxHkCallHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall fnHkINLPRECT(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v6; // ebx
  __int64 *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int128 *v10; // rcx
  char v12; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v13[3]; // [rsp+31h] [rbp-77h] BYREF
  int v14; // [rsp+34h] [rbp-74h] BYREF
  _QWORD v15[4]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v16; // [rsp+58h] [rbp-50h]
  _DWORD v17[2]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v18; // [rsp+70h] [rbp-38h]
  __int128 v19; // [rsp+78h] [rbp-30h]
  __int64 v20; // [rsp+88h] [rbp-20h]
  __int64 v21; // [rsp+90h] [rbp-18h]

  v15[0] = 0LL;
  v14 = 0;
  v17[1] = 0;
  v17[0] = a1;
  v18 = a2;
  v19 = *a3;
  v20 = a4;
  v21 = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v13);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  EtwTraceBeginCallback(48LL);
  v6 = KeUserModeCallback(48LL, v17, 48LL, v15, &v14);
  EtwTraceEndCallback(48LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v13);
  if ( v6 < 0 || v14 != 24 )
    return 0LL;
  v7 = (__int64 *)v15[0];
  if ( (unsigned __int64)(v15[0] + 8LL) < v15[0] || v15[0] + 8LL > MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v8 = *v7;
  v15[1] = *v7;
  v9 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 84) & 1) != 0 && *(__int128 **)(v9 + 96) == a3 )
      return 0LL;
  }
  v10 = *(__int128 **)(v15[0] + 16LL);
  if ( v10 + 1 < v10 || (unsigned __int64)(v10 + 1) > MmUserProbeAddress )
    v10 = (__int128 *)MmUserProbeAddress;
  v16 = *v10;
  *a3 = v16;
  return v8;
}
