/*
 * XREFs of xxxClientLoadMenu @ 0x1C0077E08
 * Callers:
 *     xxxLoadSysMenu @ 0x1C0078CB0 (xxxLoadSysMenu.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0244858 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C007634C (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00763F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     HMValidateHandleNoRip @ 0x1C0076550 (HMValidateHandleNoRip.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

unsigned __int8 *__fastcall xxxClientLoadMenu(__int64 a1, unsigned __int16 *a2)
{
  __int64 v4; // r9
  unsigned __int8 *v5; // rdi
  unsigned __int16 v6; // ax
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // rbx
  unsigned __int8 *result; // rax
  char v11; // [rsp+30h] [rbp-2A8h] BYREF
  _BYTE v12[3]; // [rsp+31h] [rbp-2A7h] BYREF
  int v13; // [rsp+34h] [rbp-2A4h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-2A0h] BYREF
  unsigned __int8 *v15; // [rsp+40h] [rbp-298h]
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-290h] BYREF
  __int128 v17; // [rsp+50h] [rbp-288h] BYREF
  __int64 v18; // [rsp+60h] [rbp-278h]
  __int64 v19; // [rsp+68h] [rbp-270h]
  _DWORD v20[16]; // [rsp+80h] [rbp-258h] BYREF
  unsigned __int8 v21[512]; // [rsp+C0h] [rbp-218h] BYREF

  memset(v20, 0, sizeof(v20));
  v14 = 0LL;
  v13 = 0;
  v4 = a2[1];
  if ( (_WORD)v4 )
  {
    result = AllocCallbackMessage(64, (_WORD)v4 != 0, v4 & -(__int64)((_WORD)v4 != 0), v21, 1, 0x200uLL);
    v5 = result;
    v15 = result;
    if ( !result )
      return result;
  }
  else
  {
    v5 = (unsigned __int8 *)v20;
    v15 = (unsigned __int8 *)v20;
    v20[0] = 64;
  }
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v17 = 0LL;
  v18 = 0LL;
  if ( v5 != (unsigned __int8 *)v20 && v5 != v21 )
    PushW32ThreadLock(v5, &v17, Win32FreePool);
  *((_QWORD *)v5 + 5) = a1;
  *((_WORD *)v5 + 24) = *a2;
  v6 = a2[1];
  *((_WORD *)v5 + 25) = v6;
  if ( v6 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v5, *((_QWORD *)a2 + 1), (unsigned int)*a2 + 2, (void **)v5 + 7) < 0 )
      goto LABEL_20;
  }
  else
  {
    *((_QWORD *)v5 + 7) = *((_QWORD *)a2 + 1);
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v12);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  EtwTraceBeginCallback(76LL);
  *((_QWORD *)v5 + 2) = 0LL;
  v7 = KeUserModeCallback(76LL, v5, *(unsigned int *)v5, &v14, &v13);
  EtwTraceEndCallback(76LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v12);
  if ( v7 >= 0 && v13 == 24 )
  {
    v8 = (__int64 *)v14;
    if ( v14 + 8 < v14 || v14 + 8 > MmUserProbeAddress )
      v8 = (__int64 *)MmUserProbeAddress;
    v19 = *v8;
    v9 = HMValidateHandleNoRip(v19, 2);
    goto LABEL_13;
  }
LABEL_20:
  v9 = 0LL;
LABEL_13:
  if ( v5 != (unsigned __int8 *)v20 && v5 != v21 )
  {
    if ( *((_QWORD *)v5 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v17);
  }
  return (unsigned __int8 *)v9;
}
