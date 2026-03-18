/*
 * XREFs of SfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x1C0146790
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall SfnOPTOUTLPDWORDOPTOUTLPDWORD(
        __int64 *a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
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
  __int64 v25; // r8
  _DWORD *v26; // rdx
  _DWORD *v27; // rdx
  __int64 v29; // [rsp+68h] [rbp-B0h]
  __int64 v30; // [rsp+70h] [rbp-A8h] BYREF
  int v31; // [rsp+78h] [rbp-A0h]
  int v32; // [rsp+7Ch] [rbp-9Ch]
  __int64 v33; // [rsp+80h] [rbp-98h]
  __int64 v34; // [rsp+88h] [rbp-90h]
  _QWORD v35[8]; // [rsp+90h] [rbp-88h] BYREF
  __int128 v36; // [rsp+D0h] [rbp-48h]
  char v37; // [rsp+120h] [rbp+8h] BYREF
  char v38; // [rsp+128h] [rbp+10h] BYREF
  int v39; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v40; // [rsp+138h] [rbp+20h] BYREF

  v40 = 0LL;
  v39 = 0;
  v35[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v32 = 0;
  v30 = v14;
  v31 = a2;
  v33 = a5;
  v34 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v35[0] = *(_QWORD *)(v15 + 408);
  *(_QWORD *)(v15 + 408) = v35;
  v35[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 472);
  v36 = *(_OWORD *)(v16 + 64);
  v29 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v14;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v18;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v37);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  EtwTraceBeginCallback(31LL);
  v19 = KeUserModeCallback(31LL, &v30, 32LL, &v40, &v39);
  EtwTraceEndCallback(31LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v37);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v23 + 64) = v36;
  *(_QWORD *)(v23 + 80) = v29;
  if ( v19 < 0 || v39 != 24 )
    return 0LL;
  v24 = (__int64 *)v40;
  if ( v40 + 8 < v40 || v40 + 8 > MmUserProbeAddress )
    v24 = (__int64 *)MmUserProbeAddress;
  v25 = *v24;
  v35[3] = *v24;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    if ( a3 )
    {
      v26 = *(_DWORD **)(v40 + 16);
      if ( (unsigned __int64)v26 >= MmUserProbeAddress )
        v26 = (_DWORD *)MmUserProbeAddress;
      *a3 = *v26;
    }
    if ( a4 )
    {
      v27 = (_DWORD *)(*(_QWORD *)(v40 + 16) + 4LL);
      if ( (unsigned __int64)v27 >= MmUserProbeAddress )
        v27 = (_DWORD *)MmUserProbeAddress;
      *a4 = *v27;
    }
  }
  return v25;
}
