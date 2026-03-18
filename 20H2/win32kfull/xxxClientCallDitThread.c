/*
 * XREFs of xxxClientCallDitThread @ 0x1C00D6980
 * Callers:
 *     ClientCallDitThread @ 0x1C00D6C10 (ClientCallDitThread.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCallDitThread(__int64 a1, __int128 *a2, __int128 *a3)
{
  int v4; // ebx
  __int64 *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int128 v9; // xmm3
  __int128 v10; // xmm4
  __int128 v11; // xmm5
  __int128 v12; // xmm6
  __int128 v13; // xmm7
  __int128 v14; // xmm8
  __int64 v15; // xmm0_8
  char v17; // [rsp+30h] [rbp-188h] BYREF
  _BYTE v18[3]; // [rsp+31h] [rbp-187h] BYREF
  int v19; // [rsp+34h] [rbp-184h] BYREF
  _QWORD v20[5]; // [rsp+38h] [rbp-180h] BYREF
  __int64 v21; // [rsp+60h] [rbp-158h] BYREF
  __int128 v22; // [rsp+68h] [rbp-150h]
  __int128 v23; // [rsp+78h] [rbp-140h]
  __int128 v24; // [rsp+88h] [rbp-130h]
  __int128 v25; // [rsp+98h] [rbp-120h]
  __int128 v26; // [rsp+A8h] [rbp-110h]
  __int128 v27; // [rsp+B8h] [rbp-100h]
  __int128 v28; // [rsp+C8h] [rbp-F0h]
  __int128 v29; // [rsp+D8h] [rbp-E0h]
  __int128 v30; // [rsp+E8h] [rbp-D0h]
  __int128 v31; // [rsp+F8h] [rbp-C0h]
  __int128 v32; // [rsp+108h] [rbp-B0h]
  __int128 v33; // [rsp+118h] [rbp-A0h]
  __int128 v34; // [rsp+128h] [rbp-90h]
  __int128 v35; // [rsp+138h] [rbp-80h]
  __int128 v36; // [rsp+148h] [rbp-70h]
  __int128 v37; // [rsp+158h] [rbp-60h]
  __int64 v38; // [rsp+168h] [rbp-50h]

  v20[0] = 0LL;
  v19 = 0;
  v21 = a1;
  v22 = *a2;
  v23 = a2[1];
  v24 = a2[2];
  v25 = a2[3];
  v26 = a2[4];
  v27 = a2[5];
  v28 = a2[6];
  v29 = a2[7];
  v30 = a2[8];
  v31 = *a3;
  v32 = a3[1];
  v33 = a3[2];
  v34 = a3[3];
  v35 = a3[4];
  v36 = a3[5];
  v37 = a3[6];
  v38 = *((_QWORD *)a3 + 14);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17);
  EtwTraceBeginCallback(56LL);
  v4 = KeUserModeCallback(56LL, &v21, 272LL, v20, &v19);
  EtwTraceEndCallback(56LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v18);
  if ( v4 < 0 || v19 != 24 )
    return 0LL;
  v5 = (__int64 *)v20[0];
  if ( (unsigned __int64)(v20[0] + 8LL) < v20[0] || v20[0] + 8LL > MmUserProbeAddress )
    v5 = (__int64 *)MmUserProbeAddress;
  v6 = *v5;
  v20[1] = *v5;
  v7 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 84) & 1) != 0 && *(__int128 **)(v7 + 96) == a3 )
      return 0LL;
  }
  v8 = *(_QWORD *)(v20[0] + 16LL);
  if ( v8 + 120 < v8 || v8 + 120 > MmUserProbeAddress )
    v8 = MmUserProbeAddress;
  v9 = *(_OWORD *)(v8 + 16);
  v10 = *(_OWORD *)(v8 + 32);
  v11 = *(_OWORD *)(v8 + 48);
  v12 = *(_OWORD *)(v8 + 64);
  v13 = *(_OWORD *)(v8 + 80);
  v14 = *(_OWORD *)(v8 + 96);
  v15 = *(_QWORD *)(v8 + 112);
  *a3 = *(_OWORD *)v8;
  a3[1] = v9;
  a3[2] = v10;
  a3[3] = v11;
  a3[4] = v12;
  a3[5] = v13;
  a3[6] = v14;
  *((_QWORD *)a3 + 14) = v15;
  return (unsigned int)v6;
}
