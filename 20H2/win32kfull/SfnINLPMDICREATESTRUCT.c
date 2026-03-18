/*
 * XREFs of SfnINLPMDICREATESTRUCT @ 0x1C022BD70
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C007634C (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00763F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0077CD0 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0078278 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
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

unsigned __int8 *__fastcall SfnINLPMDICREATESTRUCT(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v9; // r15d
  int v10; // r14d
  unsigned __int8 *v11; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r13
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int8 *result; // rax
  void **v20; // r9
  unsigned int v21; // r8d
  CHAR *v22; // rdx
  int v23; // eax
  unsigned int v24; // r8d
  unsigned int v25; // r8d
  CHAR *v26; // rdx
  void **v27; // r9
  int v28; // eax
  unsigned int v29; // r8d
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // esi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 *v40; // rcx
  __int64 v41; // rsi
  char v42; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v43[3]; // [rsp+31h] [rbp-397h] BYREF
  unsigned int v44; // [rsp+34h] [rbp-394h]
  unsigned int v45; // [rsp+38h] [rbp-390h]
  int v46; // [rsp+3Ch] [rbp-38Ch] BYREF
  unsigned __int8 *v47; // [rsp+40h] [rbp-388h]
  unsigned int v48; // [rsp+48h] [rbp-380h]
  unsigned __int64 v49; // [rsp+60h] [rbp-368h] BYREF
  unsigned int v50; // [rsp+68h] [rbp-360h]
  __int64 v51; // [rsp+78h] [rbp-350h]
  __int128 v52; // [rsp+80h] [rbp-348h]
  ULONG_PTR RegionSize; // [rsp+90h] [rbp-338h] BYREF
  __int128 v54; // [rsp+98h] [rbp-330h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-320h]
  __int128 v56; // [rsp+B0h] [rbp-318h]
  __int64 v57; // [rsp+C0h] [rbp-308h]
  __int128 v58; // [rsp+C8h] [rbp-300h] BYREF
  __int64 v59; // [rsp+D8h] [rbp-2F0h]
  __int64 v60; // [rsp+E0h] [rbp-2E8h]
  _DWORD v61[36]; // [rsp+100h] [rbp-2C8h] BYREF
  unsigned __int8 v62[512]; // [rsp+190h] [rbp-238h] BYREF

  v51 = a3;
  v48 = a2;
  v44 = 0;
  v45 = 0;
  v9 = 0;
  v10 = a7 & 1;
  memset(v61, 0, sizeof(v61));
  v11 = (unsigned __int8 *)v61;
  v49 = 0LL;
  v46 = 0;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v52 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v14 = *(_QWORD *)(a4 + 8);
  if ( v14 && (v14 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 60) >> 31 != v10) )
  {
    v15 = *(_DWORD *)(a4 + 56);
    if ( v15 + 2 < v15 )
      goto LABEL_67;
    v44 = v15 + 2;
    if ( *(int *)(a4 + 60) < 0 && (a7 & 1) == 0 )
    {
      v16 = 2LL * (v15 + 2);
      if ( v16 > 0xFFFFFFFF )
        goto LABEL_67;
      v44 = v16;
    }
    v9 = 1;
  }
  if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_QWORD *)a4 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 76) >> 31 != v10) )
  {
    v17 = *(_DWORD *)(a4 + 72);
    if ( v17 + 2 < v17 )
      goto LABEL_67;
    v45 = v17 + 2;
    if ( *(int *)(a4 + 76) < 0 && (a7 & 1) == 0 )
    {
      v18 = 2LL * (v17 + 2);
      if ( v18 > 0xFFFFFFFF )
        goto LABEL_67;
      v45 = v18;
    }
    ++v9;
  }
  if ( v44 + v45 < v44 )
    goto LABEL_67;
  v50 = v44 + v45;
  if ( v9 )
  {
    result = AllocCallbackMessage(144, v9, v44 + v45, v62, 1, 0x200uLL);
    v11 = result;
    v47 = result;
    if ( !result )
      return result;
  }
  else
  {
    v11 = (unsigned __int8 *)v61;
    v47 = (unsigned __int8 *)v61;
    memset(&v61[1], 0, 0x8CuLL);
    v61[0] = 144;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v58 = 0LL;
  v59 = 0LL;
  if ( v11 != (unsigned __int8 *)v61 && v11 != v62 )
    PushW32ThreadLock((__int64)v11, &v58, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 5) = v13;
  *((_DWORD *)v11 + 12) = v48;
  *((_QWORD *)v11 + 7) = v51;
  *(_DWORD *)(a4 + 44) = 0;
  *((_OWORD *)v11 + 4) = *(_OWORD *)a4;
  *((_OWORD *)v11 + 5) = *(_OWORD *)(a4 + 16);
  *((_OWORD *)v11 + 6) = *(_OWORD *)(a4 + 32);
  *((_QWORD *)v11 + 14) = *(_QWORD *)(a4 + 48);
  if ( v44 )
  {
    v20 = (void **)(v11 + 72);
    v21 = *(_DWORD *)(a4 + 56);
    v22 = *(CHAR **)(a4 + 64);
    if ( *(int *)(a4 + 60) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v23 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v22, 2 * v21 + 2, v20);
LABEL_39:
        if ( v23 < 0 )
          goto LABEL_67;
        goto LABEL_40;
      }
      v24 = v21 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v23 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v22, (v21 >> 1) + 1, v20);
        goto LABEL_39;
      }
      v24 = v21 + 2;
    }
    v23 = CaptureCallbackData((struct _CAPTUREBUF *)v11, (unsigned __int64)v22, v24, v20);
    goto LABEL_39;
  }
LABEL_40:
  if ( v45 )
  {
    v25 = *(_DWORD *)(a4 + 72);
    v26 = *(CHAR **)(a4 + 80);
    v27 = (void **)(v11 + 64);
    if ( *(int *)(a4 + 76) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v28 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v26, 2 * v25 + 2, v27);
LABEL_49:
        if ( v28 < 0 )
          goto LABEL_67;
        goto LABEL_50;
      }
      v29 = v25 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v28 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v26, (v25 >> 1) + 1, v27);
        goto LABEL_49;
      }
      v29 = v25 + 2;
    }
    v28 = CaptureCallbackData((struct _CAPTUREBUF *)v11, (unsigned __int64)v26, v29, v27);
    goto LABEL_49;
  }
LABEL_50:
  *((_QWORD *)v11 + 15) = a5;
  *((_QWORD *)v11 + 16) = a6;
  v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v54 = *(_QWORD *)(v30 + 416);
  *(_QWORD *)(v30 + 416) = &v54;
  *((_QWORD *)&v54 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v31 = v52;
  v32 = *(_QWORD *)(v52 + 480);
  v52 = *(_OWORD *)(v32 + 64);
  v56 = v52;
  v57 = *(_QWORD *)(v32 + 80);
  *(_QWORD *)(v32 + 72) = v13;
  if ( a1 )
    v33 = *a1;
  else
    v33 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v31 + 480) + 64LL) = v33;
  if ( a1 )
    v34 = *(_QWORD *)(a1[5] + 224);
  else
    v34 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v31 + 480) + 80LL) = v34;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v43);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  EtwTraceBeginCallback(15LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v35 = KeUserModeCallback(15LL, v11, *(unsigned int *)v11, &v49, &v46);
  EtwTraceEndCallback(15LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v43);
  ThreadUnlock1(v37, v36, v38);
  v39 = *(_QWORD *)(v31 + 480);
  *(_OWORD *)(v39 + 64) = v52;
  *(_QWORD *)(v39 + 80) = v57;
  if ( v35 >= 0 && v46 == 24 )
  {
    v40 = (__int64 *)v49;
    if ( v49 + 8 < v49 || v49 + 8 > MmUserProbeAddress )
      v40 = (__int64 *)MmUserProbeAddress;
    v41 = *v40;
    v60 = *v40;
    goto LABEL_68;
  }
LABEL_67:
  v41 = 0LL;
LABEL_68:
  if ( v11 != (unsigned __int8 *)v61 && v11 != v62 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v58);
  }
  return (unsigned __int8 *)v41;
}
