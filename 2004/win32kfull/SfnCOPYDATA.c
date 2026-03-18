/*
 * XREFs of SfnCOPYDATA @ 0x1C00436E0
 * Callers:
 *     xxxSendShutdownData @ 0x1C0234298 (xxxSendShutdownData.c)
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

__int64 __fastcall SfnCOPYDATA(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // r15
  __int64 v11; // rsi
  unsigned int v12; // r12d
  unsigned __int8 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rdi
  char v26; // [rsp+30h] [rbp-368h] BYREF
  _BYTE v27[3]; // [rsp+31h] [rbp-367h] BYREF
  int v28; // [rsp+34h] [rbp-364h] BYREF
  unsigned __int8 *v29; // [rsp+38h] [rbp-360h]
  unsigned int v30; // [rsp+40h] [rbp-358h]
  unsigned __int64 v31; // [rsp+58h] [rbp-340h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-330h] BYREF
  __int128 v33; // [rsp+70h] [rbp-328h] BYREF
  __int64 v34; // [rsp+80h] [rbp-318h]
  __int128 v35; // [rsp+88h] [rbp-310h]
  __int64 v36; // [rsp+98h] [rbp-300h]
  __int128 v37; // [rsp+A0h] [rbp-2F8h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-2E8h]
  __int64 v39; // [rsp+B8h] [rbp-2E0h]
  __int128 v40; // [rsp+D8h] [rbp-2C0h]
  _DWORD v41[28]; // [rsp+F0h] [rbp-2A8h] BYREF
  unsigned __int8 v42[512]; // [rsp+160h] [rbp-238h] BYREF

  v30 = a2;
  memset(v41, 0, sizeof(v41));
  v31 = 0LL;
  v28 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v10 = ThreadWin32Thread;
  if ( a1 )
    v11 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v11 = 0LL;
  if ( a4 )
  {
    v12 = *(_DWORD *)(a4 + 8);
    v13 = (unsigned __int8 *)AllocCallbackMessage(0x70u, 1u, v12, v42, 1, 0x200uLL);
    v29 = v13;
    if ( !v13 )
      return 0LL;
  }
  else
  {
    v12 = 0;
    v13 = (unsigned __int8 *)v41;
    v29 = (unsigned __int8 *)v41;
    memset(&v41[1], 0, 0x6CuLL);
    v41[0] = 112;
  }
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v37 = 0LL;
  v38 = 0LL;
  if ( v13 != (unsigned __int8 *)v41 && v13 != v42 )
    PushW32ThreadLock((__int64)v13, &v37, (__int64)Win32FreePool);
  *((_QWORD *)v13 + 5) = v11;
  *((_DWORD *)v13 + 12) = v30;
  *((_QWORD *)v13 + 7) = a3;
  if ( a4 )
  {
    *((_DWORD *)v13 + 16) = 1;
    *(_DWORD *)(a4 + 12) = 0;
    *(_OWORD *)(v13 + 72) = *(_OWORD *)a4;
    *((_QWORD *)v13 + 11) = *(_QWORD *)(a4 + 16);
    if ( CaptureCallbackData((struct _CAPTUREBUF *)v13, *(void **)(a4 + 16), v12, (void **)v13 + 11) < 0 )
      goto LABEL_32;
  }
  else
  {
    *((_DWORD *)v13 + 16) = 0;
  }
  *((_QWORD *)v13 + 12) = a5;
  *((_QWORD *)v13 + 13) = a6;
  v14 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v33 = *(_QWORD *)(v14 + 408);
  *(_QWORD *)(v14 + 408) = &v33;
  *((_QWORD *)&v33 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v15 = *(_QWORD *)(v10 + 472);
  v40 = *(_OWORD *)(v15 + 64);
  v35 = v40;
  v36 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v11;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v10 + 472) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v10 + 472) + 80LL) = v17;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v27);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
  EtwTraceBeginCallback(0LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v18 = KeUserModeCallback(0LL, v13, *(unsigned int *)v13, &v31, &v28);
  EtwTraceEndCallback(0LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v27);
  ThreadUnlock1(v20, v19, v21);
  v22 = *(_QWORD *)(v10 + 472);
  *(_OWORD *)(v22 + 64) = v40;
  *(_QWORD *)(v22 + 80) = v36;
  if ( v18 >= 0 && v28 == 24 )
  {
    v23 = (__int64 *)v31;
    if ( v31 + 8 < v31 || v31 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v24 = *v23;
    v39 = *v23;
    goto LABEL_25;
  }
LABEL_32:
  v24 = 0LL;
LABEL_25:
  if ( v13 != (unsigned __int8 *)v41 && v13 != v42 )
  {
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v37);
  }
  return v24;
}
