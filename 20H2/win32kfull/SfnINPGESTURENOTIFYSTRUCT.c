/*
 * XREFs of SfnINPGESTURENOTIFYSTRUCT @ 0x1C022DBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C007634C (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00763F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

unsigned __int8 *__fastcall SfnINPGESTURENOTIFYSTRUCT(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r14
  __int64 v12; // rsi
  unsigned __int8 *result; // rax
  unsigned __int8 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rdi
  char v26; // [rsp+30h] [rbp-348h] BYREF
  _BYTE v27[3]; // [rsp+31h] [rbp-347h] BYREF
  _DWORD v28[5]; // [rsp+34h] [rbp-344h] BYREF
  unsigned __int8 *v29; // [rsp+48h] [rbp-330h]
  unsigned __int64 v30; // [rsp+50h] [rbp-328h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-318h] BYREF
  __int128 v32; // [rsp+68h] [rbp-310h] BYREF
  __int64 v33; // [rsp+78h] [rbp-300h]
  __int128 v34; // [rsp+80h] [rbp-2F8h]
  __int64 v35; // [rsp+90h] [rbp-2E8h]
  __int128 v36; // [rsp+98h] [rbp-2E0h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-2D0h]
  __int64 v38; // [rsp+B0h] [rbp-2C8h]
  __int128 v39; // [rsp+D0h] [rbp-2A8h]
  unsigned __int8 v40[88]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v41[512]; // [rsp+140h] [rbp-238h] BYREF

  memset(v40, 0, sizeof(v40));
  v30 = 0LL;
  v28[0] = 0;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  result = AllocCallbackMessage(88, 1u, *a4, v41, 1, 0x200uLL);
  v14 = result;
  v29 = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v36 = 0LL;
    v37 = 0LL;
    if ( v14 != v40 && v14 != v41 )
      PushW32ThreadLock((__int64)v14, &v36, (__int64)Win32FreePool);
    *((_QWORD *)v14 + 5) = v12;
    *((_DWORD *)v14 + 12) = a2;
    *((_QWORD *)v14 + 7) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v14, (unsigned __int64)a4, *a4, (void **)v14 + 8) < 0 )
      goto LABEL_26;
    *((_QWORD *)v14 + 9) = a5;
    *((_QWORD *)v14 + 10) = a6;
    v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v32 = *(_QWORD *)(v15 + 416);
    *(_QWORD *)(v15 + 416) = &v32;
    *((_QWORD *)&v32 + 1) = a1;
    if ( a1 )
      HMLockObject(a1);
    v16 = *(_QWORD *)(v11 + 480);
    v39 = *(_OWORD *)(v16 + 64);
    v34 = v39;
    v35 = *(_QWORD *)(v16 + 80);
    *(_QWORD *)(v16 + 72) = v12;
    if ( a1 )
      v17 = *a1;
    else
      v17 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v17;
    if ( a1 )
      v18 = *(_QWORD *)(a1[5] + 224);
    else
      v18 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v18;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v27);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
    EtwTraceBeginCallback(114LL);
    *((_QWORD *)v14 + 2) = 0LL;
    v19 = KeUserModeCallback(114LL, v14, *(unsigned int *)v14, &v30, v28);
    EtwTraceEndCallback(114LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v27);
    ThreadUnlock1(v21, v20, v22);
    v23 = *(_QWORD *)(v11 + 480);
    *(_OWORD *)(v23 + 64) = v39;
    *(_QWORD *)(v23 + 80) = v35;
    if ( v19 < 0 )
      goto LABEL_26;
    if ( v28[0] == 24 )
    {
      v24 = (__int64 *)v30;
      if ( v30 + 8 < v30 || v30 + 8 > MmUserProbeAddress )
        v24 = (__int64 *)MmUserProbeAddress;
      v25 = *v24;
      v38 = *v24;
    }
    else
    {
LABEL_26:
      v25 = 0LL;
    }
    if ( v14 != v40 && v14 != v41 )
    {
      if ( *((_QWORD *)v14 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v14 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v36);
    }
    return (unsigned __int8 *)v25;
  }
  return result;
}
