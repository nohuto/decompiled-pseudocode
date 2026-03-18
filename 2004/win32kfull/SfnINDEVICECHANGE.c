/*
 * XREFs of SfnINDEVICECHANGE @ 0x1C0046680
 * Callers:
 *     <none>
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
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall SfnINDEVICECHANGE(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned int v14; // r12d
  unsigned __int8 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rdi
  char v28; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v29[3]; // [rsp+31h] [rbp-357h] BYREF
  int v30; // [rsp+34h] [rbp-354h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-350h]
  unsigned __int8 *v32; // [rsp+50h] [rbp-338h]
  unsigned __int64 v33; // [rsp+58h] [rbp-330h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-320h] BYREF
  __int128 v35; // [rsp+70h] [rbp-318h] BYREF
  __int64 v36; // [rsp+80h] [rbp-308h]
  __int128 v37; // [rsp+88h] [rbp-300h]
  __int64 v38; // [rsp+98h] [rbp-2F0h]
  __int128 v39; // [rsp+A0h] [rbp-2E8h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-2D8h]
  __int64 v41; // [rsp+B8h] [rbp-2D0h]
  __int128 v42; // [rsp+D8h] [rbp-2B0h]
  unsigned __int8 v43[96]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int8 v44[512]; // [rsp+150h] [rbp-238h] BYREF
  int v45; // [rsp+3C0h] [rbp+38h]

  v31 = a2;
  v45 = a7 & 1;
  v10 = (unsigned __int16)a3 & 0x8000;
  memset(v43, 0, sizeof(v43));
  v33 = 0LL;
  v30 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  v14 = 0;
  if ( v10 && a4 && a4 >= MmSystemRangeStart )
    v14 = *a4;
  v15 = (unsigned __int8 *)AllocCallbackMessage(0x60u, 1u, v14, v44, 1, 0x200uLL);
  v32 = v15;
  if ( !v15 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v39 = 0LL;
  v40 = 0LL;
  if ( v15 != v43 && v15 != v44 )
    PushW32ThreadLock((__int64)v15, &v39, (__int64)Win32FreePool);
  *((_QWORD *)v15 + 5) = v13;
  *((_DWORD *)v15 + 12) = v31;
  *((_QWORD *)v15 + 7) = a3;
  if ( v14 )
  {
    if ( CaptureCallbackData((struct _CAPTUREBUF *)v15, a4, *a4, (void **)v15 + 10) < 0 )
      goto LABEL_32;
  }
  else
  {
    *((_QWORD *)v15 + 10) = a4;
  }
  *((_DWORD *)v15 + 22) = v45;
  *((_QWORD *)v15 + 8) = a5;
  *((_QWORD *)v15 + 9) = a6;
  v16 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v35 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v35;
  *((_QWORD *)&v35 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v12 + 472);
  v42 = *(_OWORD *)(v17 + 64);
  v37 = v42;
  v38 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v13;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v29);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v28);
  EtwTraceBeginCallback(28LL);
  *((_QWORD *)v15 + 2) = 0LL;
  v20 = KeUserModeCallback(28LL, v15, *(unsigned int *)v15, &v33, &v30);
  EtwTraceEndCallback(28LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v28);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v29);
  ThreadUnlock1(v22, v21, v23);
  v24 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v24 + 64) = v42;
  *(_QWORD *)(v24 + 80) = v38;
  if ( v20 >= 0 && v30 == 24 )
  {
    v25 = (__int64 *)v33;
    if ( v33 + 8 < v33 || v33 + 8 > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v26 = *v25;
    v41 = *v25;
    goto LABEL_25;
  }
LABEL_32:
  v26 = 0LL;
LABEL_25:
  if ( v15 != v43 && v15 != v44 )
  {
    if ( *((_QWORD *)v15 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v15 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v39);
  }
  return v26;
}
