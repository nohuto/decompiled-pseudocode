/*
 * XREFs of SfnCOPYGLOBALDATA @ 0x1C0229680
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C004748C (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0047530 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall SfnCOPYGLOBALDATA(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int8 *result; // rax
  unsigned __int8 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rdi
  char v23; // [rsp+30h] [rbp-338h] BYREF
  _BYTE v24[3]; // [rsp+31h] [rbp-337h] BYREF
  _DWORD v25[5]; // [rsp+34h] [rbp-334h] BYREF
  unsigned __int8 *v26; // [rsp+48h] [rbp-320h]
  unsigned __int64 v27; // [rsp+50h] [rbp-318h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-308h] BYREF
  __int128 v29; // [rsp+68h] [rbp-300h] BYREF
  __int64 v30; // [rsp+78h] [rbp-2F0h]
  __int128 v31; // [rsp+80h] [rbp-2E8h]
  __int64 v32; // [rsp+90h] [rbp-2D8h]
  __int128 v33; // [rsp+98h] [rbp-2D0h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-2C0h]
  __int64 v35; // [rsp+B0h] [rbp-2B8h]
  __int128 v36; // [rsp+D0h] [rbp-298h]
  _OWORD v37[3]; // [rsp+E0h] [rbp-288h] BYREF
  __int64 v38; // [rsp+110h] [rbp-258h]
  unsigned __int8 v39[512]; // [rsp+120h] [rbp-248h] BYREF

  memset(v37, 0, sizeof(v37));
  v38 = 0LL;
  v27 = 0LL;
  v25[0] = 0;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v8 = ThreadWin32Thread;
  if ( a1 )
    v9 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v9 = 0LL;
  result = AllocCallbackMessage(56, 1u, a3, v39, 1, 0x200uLL);
  v11 = result;
  v26 = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v33 = 0LL;
    v34 = 0LL;
    if ( v11 != (unsigned __int8 *)v37 && v11 != v39 )
      PushW32ThreadLock((__int64)v11, &v33, (__int64)Win32FreePool);
    if ( !a4 )
      goto LABEL_27;
    *((_DWORD *)v11 + 10) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, a4, a3, (void **)v11 + 6) < 0 )
      goto LABEL_27;
    v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v29 = *(_QWORD *)(v12 + 408);
    *(_QWORD *)(v12 + 408) = &v29;
    *((_QWORD *)&v29 + 1) = a1;
    if ( a1 )
      HMLockObject(a1);
    v13 = *(_QWORD *)(v8 + 472);
    v36 = *(_OWORD *)(v13 + 64);
    v31 = v36;
    v32 = *(_QWORD *)(v13 + 80);
    *(_QWORD *)(v13 + 72) = v9;
    if ( a1 )
      v14 = *a1;
    else
      v14 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v8 + 472) + 64LL) = v14;
    if ( a1 )
      v15 = *(_QWORD *)(a1[5] + 224);
    else
      v15 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v8 + 472) + 80LL) = v15;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v24);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v23);
    EtwTraceBeginCallback(1LL);
    *((_QWORD *)v11 + 2) = 0LL;
    v16 = KeUserModeCallback(1LL, v11, *(unsigned int *)v11, &v27, v25);
    EtwTraceEndCallback(1LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v23);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v24);
    ThreadUnlock1(v18, v17, v19);
    v20 = *(_QWORD *)(v8 + 472);
    *(_OWORD *)(v20 + 64) = v36;
    *(_QWORD *)(v20 + 80) = v32;
    if ( v16 < 0 )
      goto LABEL_27;
    if ( v25[0] == 24 )
    {
      v21 = (__int64 *)v27;
      if ( v27 + 8 < v27 || v27 + 8 > MmUserProbeAddress )
        v21 = (__int64 *)MmUserProbeAddress;
      v22 = *v21;
      v35 = *v21;
    }
    else
    {
LABEL_27:
      v22 = 0LL;
    }
    if ( v11 != (unsigned __int8 *)v37 && v11 != v39 )
    {
      if ( *((_QWORD *)v11 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v33);
    }
    return (unsigned __int8 *)v22;
  }
  return result;
}
