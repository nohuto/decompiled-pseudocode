/*
 * XREFs of SfnINLPKDRAWSWITCHWND @ 0x1C022C6C0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C004748C (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0047530 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     GetDPIServerInfo @ 0x1C0060838 (GetDPIServerInfo.c)
 *     GreSelectFont @ 0x1C0062690 (GreSelectFont.c)
 *     GreSetTextColor @ 0x1C0063F10 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0063FA4 (GreSetBkColor.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     _WindowFromDC @ 0x1C00FC03C (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

unsigned __int8 *__fastcall SfnINLPKDRAWSWITCHWND(__int64 *a1, int a2, HDC a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r14
  __int64 v13; // rsi
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned __int8 *result; // rax
  struct tagWND *v17; // rax
  HDC DC; // r12
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int128 v22; // xmm6
  __int64 v23; // xmm7_8
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // rdi
  char v33; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v34[3]; // [rsp+31h] [rbp-397h] BYREF
  int v35; // [rsp+34h] [rbp-394h] BYREF
  unsigned int v36; // [rsp+38h] [rbp-390h]
  int v37; // [rsp+3Ch] [rbp-38Ch]
  int v38; // [rsp+40h] [rbp-388h]
  unsigned __int8 *v39; // [rsp+58h] [rbp-370h]
  _QWORD v40[3]; // [rsp+60h] [rbp-368h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-350h] BYREF
  __int128 v42; // [rsp+80h] [rbp-348h] BYREF
  __int64 v43; // [rsp+90h] [rbp-338h]
  __int128 v44; // [rsp+98h] [rbp-330h]
  __int64 v45; // [rsp+A8h] [rbp-320h]
  __int128 v46; // [rsp+B0h] [rbp-318h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-308h]
  __int64 v48; // [rsp+C8h] [rbp-300h]
  unsigned __int8 v49[112]; // [rsp+F0h] [rbp-2D8h] BYREF
  unsigned __int8 v50[512]; // [rsp+160h] [rbp-268h] BYREF

  memset(v49, 0, 0x68uLL);
  v10 = v49;
  v40[0] = 0LL;
  v35 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  v14 = *(_DWORD *)(a4 + 16);
  v15 = v14 + 2;
  if ( (unsigned int)v15 < v14 )
    goto LABEL_30;
  v36 = v14 + 2;
  if ( *(int *)(a4 + 20) < 0 )
  {
    v15 *= 2LL;
    if ( v15 > 0xFFFFFFFF )
      goto LABEL_30;
    v36 = v15;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v15, v50, 1, 0x200uLL);
  v10 = result;
  v39 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v46 = 0LL;
  v47 = 0LL;
  if ( v10 != v49 && v10 != v50 )
    PushW32ThreadLock((__int64)v10, &v46, (__int64)Win32FreePool);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              *(_QWORD *)(a4 + 24),
              *(_DWORD *)(a4 + 16) + 2,
              (void **)v10 + 10) >= 0 )
  {
    v17 = WindowFromDC(a3);
    DC = (HDC)_GetDC(v17);
    v38 = GreSetTextColor(DC, *(_DWORD *)(gpsi + 4640LL));
    v37 = GreSetBkColor(DC, *(_DWORD *)(gpsi + 4628LL));
    GetDPIServerInfo(v19);
    v40[2] = GreSelectFont(DC);
    *((_QWORD *)v10 + 5) = v13;
    *((_DWORD *)v10 + 12) = a2;
    *((_QWORD *)v10 + 7) = DC;
    *(_OWORD *)(v10 + 88) = *(_OWORD *)a4;
    *((_QWORD *)v10 + 8) = a5;
    *((_QWORD *)v10 + 9) = a6;
    v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v42 = *(_QWORD *)(v20 + 408);
    *(_QWORD *)(v20 + 408) = &v42;
    *((_QWORD *)&v42 + 1) = a1;
    if ( a1 )
      HMLockObject(a1);
    v21 = *(_QWORD *)(v12 + 472);
    v22 = *(_OWORD *)(v21 + 64);
    v44 = v22;
    v23 = *(_QWORD *)(v21 + 80);
    v45 = v23;
    *(_QWORD *)(v21 + 72) = v13;
    if ( a1 )
      v24 = *a1;
    else
      v24 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v24;
    if ( a1 )
      v25 = *(_QWORD *)(a1[5] + 224);
    else
      v25 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v25;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v34);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
    EtwTraceBeginCallback(97LL);
    *((_QWORD *)v10 + 2) = 0LL;
    v26 = KeUserModeCallback(97LL, v10, *(unsigned int *)v10, v40, &v35);
    EtwTraceEndCallback(97LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v34);
    ThreadUnlock1(v28, v27, v29);
    v30 = *(_QWORD *)(v12 + 472);
    *(_OWORD *)(v30 + 64) = v22;
    *(_QWORD *)(v30 + 80) = v23;
    GreSelectFont(DC);
    GreSetBkColor(DC, v37);
    GreSetTextColor(DC, v38);
    _ReleaseDC(DC);
    if ( v26 >= 0 && v35 == 24 )
    {
      v31 = (__int64 *)v40[0];
      if ( (unsigned __int64)(v40[0] + 8LL) < v40[0] || v40[0] + 8LL > MmUserProbeAddress )
        v31 = (__int64 *)MmUserProbeAddress;
      v32 = *v31;
      v48 = *v31;
      goto LABEL_31;
    }
  }
LABEL_30:
  v32 = 0LL;
LABEL_31:
  if ( v10 != v49 && v10 != v50 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v46);
  }
  return (unsigned __int8 *)v32;
}
