/*
 * XREFs of SfnINLPKDRAWSWITCHWND @ 0x1C022B830
 * Callers:
 *     <none>
 * Callees:
 *     GetDPIServerInfo @ 0x1C00332F0 (GetDPIServerInfo.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C007634C (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00763F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     GreSetTextColor @ 0x1C0092300 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0092394 (GreSetBkColor.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _WindowFromDC @ 0x1C00F652C (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int128 v25; // xmm6
  __int64 v26; // xmm7_8
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 *v34; // rcx
  __int64 v35; // rdi
  char v36; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v37[3]; // [rsp+31h] [rbp-397h] BYREF
  int v38; // [rsp+34h] [rbp-394h] BYREF
  unsigned int v39; // [rsp+38h] [rbp-390h]
  int v40; // [rsp+3Ch] [rbp-38Ch]
  int v41; // [rsp+40h] [rbp-388h]
  unsigned __int8 *v42; // [rsp+58h] [rbp-370h]
  _QWORD v43[3]; // [rsp+60h] [rbp-368h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-350h] BYREF
  __int128 v45; // [rsp+80h] [rbp-348h] BYREF
  __int64 v46; // [rsp+90h] [rbp-338h]
  __int128 v47; // [rsp+98h] [rbp-330h]
  __int64 v48; // [rsp+A8h] [rbp-320h]
  __int128 v49; // [rsp+B0h] [rbp-318h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-308h]
  __int64 v51; // [rsp+C8h] [rbp-300h]
  unsigned __int8 v52[112]; // [rsp+F0h] [rbp-2D8h] BYREF
  unsigned __int8 v53[512]; // [rsp+160h] [rbp-268h] BYREF

  memset(v52, 0, 0x68uLL);
  v10 = v52;
  v43[0] = 0LL;
  v38 = 0;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v14 = *(_DWORD *)(a4 + 16);
  v15 = v14 + 2;
  if ( (unsigned int)v15 < v14 )
    goto LABEL_30;
  v39 = v14 + 2;
  if ( *(int *)(a4 + 20) < 0 )
  {
    v15 *= 2LL;
    if ( v15 > 0xFFFFFFFF )
      goto LABEL_30;
    v39 = v15;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v15, v53, 1, 0x200uLL);
  v10 = result;
  v42 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v49 = 0LL;
  v50 = 0LL;
  if ( v10 != v52 && v10 != v53 )
    PushW32ThreadLock((__int64)v10, &v49, (__int64)Win32FreePool);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              *(_QWORD *)(a4 + 24),
              *(_DWORD *)(a4 + 16) + 2,
              (void **)v10 + 10) >= 0 )
  {
    v17 = WindowFromDC(a3);
    DC = (HDC)_GetDC(v17);
    v41 = GreSetTextColor(DC, *(_DWORD *)(gpsi + 4640LL));
    v40 = GreSetBkColor(DC, *(_DWORD *)(gpsi + 4628LL));
    GetDPIServerInfo(v20, v19, v21, v22);
    v43[2] = GreSelectFont(DC);
    *((_QWORD *)v10 + 5) = v13;
    *((_DWORD *)v10 + 12) = a2;
    *((_QWORD *)v10 + 7) = DC;
    *(_OWORD *)(v10 + 88) = *(_OWORD *)a4;
    *((_QWORD *)v10 + 8) = a5;
    *((_QWORD *)v10 + 9) = a6;
    v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v45 = *(_QWORD *)(v23 + 416);
    *(_QWORD *)(v23 + 416) = &v45;
    *((_QWORD *)&v45 + 1) = a1;
    if ( a1 )
      HMLockObject(a1);
    v24 = *(_QWORD *)(v12 + 480);
    v25 = *(_OWORD *)(v24 + 64);
    v47 = v25;
    v26 = *(_QWORD *)(v24 + 80);
    v48 = v26;
    *(_QWORD *)(v24 + 72) = v13;
    if ( a1 )
      v27 = *a1;
    else
      v27 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v27;
    if ( a1 )
      v28 = *(_QWORD *)(a1[5] + 224);
    else
      v28 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v28;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v37);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
    EtwTraceBeginCallback(97LL);
    *((_QWORD *)v10 + 2) = 0LL;
    v29 = KeUserModeCallback(97LL, v10, *(unsigned int *)v10, v43, &v38);
    EtwTraceEndCallback(97LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v37);
    ThreadUnlock1(v31, v30, v32);
    v33 = *(_QWORD *)(v12 + 480);
    *(_OWORD *)(v33 + 64) = v25;
    *(_QWORD *)(v33 + 80) = v26;
    GreSelectFont(DC);
    GreSetBkColor(DC, v40);
    GreSetTextColor(DC, v41);
    _ReleaseDC(DC);
    if ( v29 >= 0 && v38 == 24 )
    {
      v34 = (__int64 *)v43[0];
      if ( (unsigned __int64)(v43[0] + 8LL) < v43[0] || v43[0] + 8LL > MmUserProbeAddress )
        v34 = (__int64 *)MmUserProbeAddress;
      v35 = *v34;
      v51 = *v34;
      goto LABEL_31;
    }
  }
LABEL_30:
  v35 = 0LL;
LABEL_31:
  if ( v10 != v52 && v10 != v53 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v49);
  }
  return (unsigned __int8 *)v35;
}
