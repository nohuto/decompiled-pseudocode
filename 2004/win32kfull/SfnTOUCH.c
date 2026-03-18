/*
 * XREFs of SfnTOUCH @ 0x1C0231000
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall SfnTOUCH(__int64 *a1, int a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 result; // rax
  _BYTE v24[4]; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v25[5]; // [rsp+34h] [rbp-D4h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v27; // [rsp+58h] [rbp-B0h]
  __int64 v28; // [rsp+68h] [rbp-A0h]
  _QWORD v29[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v30; // [rsp+88h] [rbp-80h] BYREF
  int v31; // [rsp+90h] [rbp-78h]
  int v32; // [rsp+94h] [rbp-74h]
  __int64 v33; // [rsp+98h] [rbp-70h]
  unsigned __int64 v34; // [rsp+A0h] [rbp-68h]
  __int64 v35; // [rsp+A8h] [rbp-60h]
  __int64 v36; // [rsp+B0h] [rbp-58h]
  __int64 v37; // [rsp+B8h] [rbp-50h]
  __int128 v38; // [rsp+D8h] [rbp-30h]
  char v39; // [rsp+110h] [rbp+8h] BYREF

  v26 = 0LL;
  v25[0] = 0;
  v29[2] = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v12 = 0LL;
  v32 = 0;
  if ( !HMValidateHandle(a4, 0x14u) )
    return 0LL;
  v30 = v12;
  v31 = a2;
  v33 = a3;
  v34 = a4;
  v35 = a5;
  v36 = a6;
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v29[0] = *(_QWORD *)(v13 + 408);
  *(_QWORD *)(v13 + 408) = v29;
  v29[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v14 = *(_QWORD *)(v11 + 472);
  v38 = *(_OWORD *)(v14 + 64);
  v27 = v38;
  v28 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v12;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v15;
  if ( a1 )
    v16 = *(_QWORD *)(a1[5] + 224);
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v16;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v24);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  EtwTraceBeginCallback(112LL);
  v17 = KeUserModeCallback(112LL, &v30, 48LL, &v26, v25);
  EtwTraceEndCallback(112LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v24);
  ThreadUnlock1(v19, v18, v20);
  v21 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v21 + 64) = v38;
  *(_QWORD *)(v21 + 80) = v28;
  if ( v17 < 0 || v25[0] != 24 )
    return 0LL;
  v22 = (__int64 *)v26;
  if ( v26 + 8 < v26 || v26 + 8 > MmUserProbeAddress )
    v22 = (__int64 *)MmUserProbeAddress;
  result = *v22;
  v37 = *v22;
  return result;
}
