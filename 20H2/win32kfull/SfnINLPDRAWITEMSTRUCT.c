/*
 * XREFs of SfnINLPDRAWITEMSTRUCT @ 0x1C014A760
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _WindowFromDC @ 0x1C00F652C (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINLPDRAWITEMSTRUCT(
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
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // r12
  unsigned int CurrentProcessId; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rbx
  HDC v28; // rcx
  struct tagWND *v29; // rax
  char v30; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v31[3]; // [rsp+31h] [rbp-137h] BYREF
  int v32; // [rsp+34h] [rbp-134h] BYREF
  int v33; // [rsp+38h] [rbp-130h]
  unsigned __int64 v34; // [rsp+50h] [rbp-118h] BYREF
  __int128 v35; // [rsp+60h] [rbp-108h]
  __int64 v36; // [rsp+70h] [rbp-F8h]
  _QWORD v37[7]; // [rsp+78h] [rbp-F0h] BYREF
  __int128 v38; // [rsp+B0h] [rbp-B8h]
  __int64 v39; // [rsp+C0h] [rbp-A8h] BYREF
  int v40; // [rsp+C8h] [rbp-A0h]
  int v41; // [rsp+CCh] [rbp-9Ch]
  __int64 v42; // [rsp+D0h] [rbp-98h]
  __int128 v43; // [rsp+D8h] [rbp-90h]
  __int128 v44; // [rsp+E8h] [rbp-80h]
  __int128 v45; // [rsp+F8h] [rbp-70h]
  __int128 v46; // [rsp+108h] [rbp-60h]
  __int64 v47; // [rsp+118h] [rbp-50h]
  __int64 v48; // [rsp+120h] [rbp-48h]

  v33 = a2;
  v34 = 0LL;
  v32 = 0;
  v37[2] = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v41 = 0;
  v14 = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(*((_QWORD *)a4 + 4), 1LL) != (CurrentProcessId & 0xFFFFFFFC) )
  {
    v28 = (HDC)*((_QWORD *)a4 + 4);
    if ( v28 )
    {
      v29 = WindowFromDC(v28);
      if ( v29 )
      {
        v14 = *((_QWORD *)a4 + 4);
        *((_QWORD *)a4 + 4) = _GetDC(v29);
      }
    }
  }
  v39 = v13;
  v40 = v33;
  v42 = a3;
  *((_DWORD *)a4 + 5) = 0;
  v43 = *a4;
  v44 = a4[1];
  v45 = a4[2];
  v46 = a4[3];
  v47 = a5;
  v48 = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v37[0] = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = v37;
  v37[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v12 + 480);
  v38 = *(_OWORD *)(v17 + 64);
  v35 = v38;
  v36 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v13;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v31);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  EtwTraceBeginCallback(12LL);
  v20 = KeUserModeCallback(12LL, &v39, 104LL, &v34, &v32);
  EtwTraceEndCallback(12LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v31);
  ThreadUnlock1(v22, v21, v23);
  v24 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v24 + 64) = v38;
  *(_QWORD *)(v24 + 80) = v36;
  if ( v20 < 0 || v32 != 24 )
    return 0LL;
  v25 = (__int64 *)v34;
  if ( v34 + 8 < v34 || v34 + 8 > MmUserProbeAddress )
    v25 = (__int64 *)MmUserProbeAddress;
  v26 = *v25;
  v37[3] = *v25;
  if ( v14 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    _ReleaseDC(*((_QWORD *)a4 + 4));
    *((_QWORD *)a4 + 4) = v14;
  }
  return v26;
}
