/*
 * XREFs of SfnINOUTMENUGETOBJECT @ 0x1C022CF70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall SfnINOUTMENUGETOBJECT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rdi
  ULONG64 v26; // rcx
  _QWORD *v27; // rbx
  __int64 v29; // [rsp+68h] [rbp-120h]
  _QWORD v30[8]; // [rsp+70h] [rbp-118h] BYREF
  __int128 v31; // [rsp+B0h] [rbp-D8h]
  __m128i v32; // [rsp+C0h] [rbp-C8h]
  volatile void *Address; // [rsp+D0h] [rbp-B8h]
  __int64 v34; // [rsp+E0h] [rbp-A8h] BYREF
  int v35; // [rsp+E8h] [rbp-A0h]
  int v36; // [rsp+ECh] [rbp-9Ch]
  __int64 v37; // [rsp+F0h] [rbp-98h]
  __int128 v38; // [rsp+F8h] [rbp-90h]
  __int128 v39; // [rsp+108h] [rbp-80h]
  __int64 v40; // [rsp+118h] [rbp-70h]
  __int64 v41; // [rsp+120h] [rbp-68h]
  __m128i v42; // [rsp+130h] [rbp-58h]
  volatile void *v43; // [rsp+140h] [rbp-48h]
  char v44; // [rsp+190h] [rbp+8h] BYREF
  char v45; // [rsp+198h] [rbp+10h] BYREF
  int v46; // [rsp+1A0h] [rbp+18h] BYREF
  unsigned __int64 v47; // [rsp+1A8h] [rbp+20h] BYREF

  v47 = 0LL;
  v46 = 0;
  v30[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v36 = 0;
  v34 = v14;
  v35 = a2;
  v37 = a3;
  v38 = *a4;
  v39 = a4[1];
  v40 = a5;
  v41 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v30[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v30;
  v30[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v31 = *(_OWORD *)(v16 + 64);
  v29 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v14;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v18;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v44);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  EtwTraceBeginCallback(102LL);
  v19 = KeUserModeCallback(102LL, &v34, 72LL, &v47, &v46);
  EtwTraceEndCallback(102LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v44);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v23 + 64) = v31;
  *(_QWORD *)(v23 + 80) = v29;
  if ( v19 >= 0 && v46 == 24 )
  {
    v24 = (__int64 *)v47;
    if ( v47 + 8 < v47 || v47 + 8 > MmUserProbeAddress )
      v24 = (__int64 *)MmUserProbeAddress;
    v25 = *v24;
    v30[3] = *v24;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v25;
    v26 = v47;
    if ( v47 + 24 < v47 || v47 + 24 > MmUserProbeAddress )
      v26 = MmUserProbeAddress;
    v32 = *(__m128i *)v26;
    Address = *(volatile void **)(v26 + 16);
    v42 = v32;
    v43 = Address;
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v32, 8)) == 8 )
    {
      v27 = Address;
      ProbeForRead(Address, 8uLL, 4u);
      *((_QWORD *)a4 + 3) = *v27;
      return v25;
    }
  }
  return 0LL;
}
