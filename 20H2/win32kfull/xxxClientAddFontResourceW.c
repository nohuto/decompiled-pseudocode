/*
 * XREFs of xxxClientAddFontResourceW @ 0x1C0073C68
 * Callers:
 *     xxxAddFontResourceW @ 0x1C0073C1C (xxxAddFontResourceW.c)
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
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall xxxClientAddFontResourceW(void **a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 *v6; // rdi
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // rbx
  char v11; // [rsp+30h] [rbp-2F8h] BYREF
  _BYTE v12[3]; // [rsp+31h] [rbp-2F7h] BYREF
  int v13; // [rsp+34h] [rbp-2F4h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-2F0h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-2E0h] BYREF
  __int128 v16; // [rsp+50h] [rbp-2D8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-2C8h]
  __int64 v18; // [rsp+68h] [rbp-2C0h]
  unsigned __int8 v19[136]; // [rsp+80h] [rbp-2A8h] BYREF
  unsigned __int8 v20[512]; // [rsp+110h] [rbp-218h] BYREF

  memset(v19, 0, sizeof(v19));
  v14[0] = 0LL;
  v13 = 0;
  v6 = (unsigned __int8 *)AllocCallbackMessage(0x88u, 1u, *((unsigned __int16 *)a1 + 1), v20, 1, 0x200uLL);
  v14[1] = v6;
  if ( !v6 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v16 = 0LL;
  v17 = 0LL;
  if ( v6 != v19 && v6 != v20 )
    PushW32ThreadLock(v6, &v16, Win32FreePool);
  *((_WORD *)v6 + 20) = *(_WORD *)a1;
  *((_WORD *)v6 + 21) = *((_WORD *)a1 + 1);
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v6, a1[1], *(unsigned __int16 *)a1 + 2, (void **)v6 + 6) < 0 )
    goto LABEL_19;
  *((_DWORD *)v6 + 14) = a2;
  if ( a3 && *(_DWORD *)(a3 + 4) )
  {
    *(_OWORD *)(v6 + 60) = *(_OWORD *)a3;
    *(_OWORD *)(v6 + 76) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v6 + 92) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v6 + 108) = *(_OWORD *)(a3 + 48);
    *(_QWORD *)(v6 + 124) = *(_QWORD *)(a3 + 64);
  }
  else
  {
    *((_DWORD *)v6 + 16) = 0;
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v12);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  EtwTraceBeginCallback(83LL);
  *((_QWORD *)v6 + 2) = 0LL;
  v7 = KeUserModeCallback(83LL, v6, *(unsigned int *)v6, v14, &v13);
  EtwTraceEndCallback(83LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v12);
  if ( v7 < 0 )
    goto LABEL_19;
  if ( v13 == 24 )
  {
    v8 = (__int64 *)v14[0];
    if ( (unsigned __int64)(v14[0] + 8LL) < v14[0] || v14[0] + 8LL > MmUserProbeAddress )
      v8 = (__int64 *)MmUserProbeAddress;
    v9 = *v8;
    v18 = *v8;
  }
  else
  {
LABEL_19:
    LODWORD(v9) = 0;
  }
  if ( v6 != v19 && v6 != v20 )
  {
    if ( *((_QWORD *)v6 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v6 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v16);
  }
  return (unsigned int)v9;
}
