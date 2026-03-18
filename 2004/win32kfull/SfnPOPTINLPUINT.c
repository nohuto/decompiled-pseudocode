/*
 * XREFs of SfnPOPTINLPUINT @ 0x1C02301A0
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

unsigned __int8 *__fastcall SfnPOPTINLPUINT(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int8 *v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r14
  __int64 v13; // rsi
  unsigned int v14; // edx
  unsigned __int64 v15; // rax
  unsigned __int8 *result; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rdi
  char v28; // [rsp+30h] [rbp-368h] BYREF
  _BYTE v29[3]; // [rsp+31h] [rbp-367h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-364h]
  int v31; // [rsp+38h] [rbp-360h] BYREF
  unsigned __int8 *v32; // [rsp+40h] [rbp-358h]
  unsigned __int64 v33; // [rsp+58h] [rbp-340h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-330h] BYREF
  __int128 v35; // [rsp+70h] [rbp-328h] BYREF
  __int64 v36; // [rsp+80h] [rbp-318h]
  __int128 v37; // [rsp+88h] [rbp-310h]
  __int64 v38; // [rsp+98h] [rbp-300h]
  __int128 v39; // [rsp+A0h] [rbp-2F8h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-2E8h]
  __int64 v41; // [rsp+B8h] [rbp-2E0h]
  __int128 v42; // [rsp+D8h] [rbp-2C0h]
  _DWORD v43[24]; // [rsp+F0h] [rbp-2A8h] BYREF
  unsigned __int8 v44[512]; // [rsp+150h] [rbp-248h] BYREF

  memset(v43, 0, 0x58uLL);
  v10 = (unsigned __int8 *)v43;
  v33 = 0LL;
  v31 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  if ( a4 )
  {
    v14 = 1;
    v15 = 4LL * (unsigned int)a3;
    if ( v15 > 0xFFFFFFFF )
      goto LABEL_36;
  }
  else
  {
    LODWORD(v15) = 0;
    v14 = 0;
  }
  v30 = v15;
  if ( v14 )
  {
    result = AllocCallbackMessage(88, v14, (unsigned int)v15, v44, 1, 0x200uLL);
    v10 = result;
    v32 = result;
    if ( !result )
      return result;
  }
  else
  {
    v10 = (unsigned __int8 *)v43;
    v32 = (unsigned __int8 *)v43;
    memset(&v43[1], 0, 0x54uLL);
    v43[0] = 88;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v39 = 0LL;
  v40 = 0LL;
  if ( v10 != (unsigned __int8 *)v43 && v10 != v44 )
    PushW32ThreadLock((__int64)v10, &v39, (__int64)Win32FreePool);
  *((_QWORD *)v10 + 5) = v13;
  *((_DWORD *)v10 + 12) = a2;
  *((_QWORD *)v10 + 7) = a3;
  if ( a4 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v10, a4, v30, (void **)v10 + 8) < 0 )
      goto LABEL_36;
  }
  else
  {
    *((_QWORD *)v10 + 8) = 0LL;
  }
  *((_QWORD *)v10 + 9) = a5;
  *((_QWORD *)v10 + 10) = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v35 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v35;
  *((_QWORD *)&v35 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v18 = *(_QWORD *)(v12 + 472);
  v42 = *(_OWORD *)(v18 + 64);
  v37 = v42;
  v38 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v13;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1[5] + 224);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v20;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v29);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v28);
  EtwTraceBeginCallback(36LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v21 = KeUserModeCallback(36LL, v10, *(unsigned int *)v10, &v33, &v31);
  EtwTraceEndCallback(36LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v28);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v29);
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v25 + 64) = v42;
  *(_QWORD *)(v25 + 80) = v38;
  if ( v21 >= 0 && v31 == 24 )
  {
    v26 = (__int64 *)v33;
    if ( v33 + 8 < v33 || v33 + 8 > MmUserProbeAddress )
      v26 = (__int64 *)MmUserProbeAddress;
    v27 = *v26;
    v41 = *v26;
    goto LABEL_37;
  }
LABEL_36:
  v27 = 0LL;
LABEL_37:
  if ( v10 != (unsigned __int8 *)v43 && v10 != v44 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v39);
  }
  return (unsigned __int8 *)v27;
}
