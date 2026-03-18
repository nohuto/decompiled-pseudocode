/*
 * XREFs of SfnINSTRING @ 0x1C0118960
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C00425BC (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C004748C (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0047530 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0047ED0 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0048008 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

unsigned __int8 *__fastcall SfnINSTRING(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int8 *v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r13
  __int64 v12; // r15
  unsigned __int64 v13; // rcx
  unsigned int v14; // r14d
  __int64 v15; // rax
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
  unsigned __int8 *result; // rax
  void **v28; // r9
  unsigned int v29; // r8d
  CHAR *v30; // rdx
  unsigned int v31; // r8d
  int v32; // eax
  char v33; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v34[3]; // [rsp+31h] [rbp-357h] BYREF
  int v35; // [rsp+34h] [rbp-354h]
  int v36; // [rsp+38h] [rbp-350h] BYREF
  unsigned __int8 *v37; // [rsp+40h] [rbp-348h]
  unsigned int v38; // [rsp+48h] [rbp-340h]
  unsigned __int64 v39; // [rsp+60h] [rbp-328h] BYREF
  __int128 v40; // [rsp+70h] [rbp-318h]
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-308h] BYREF
  __int128 v42; // [rsp+88h] [rbp-300h] BYREF
  __int64 v43; // [rsp+98h] [rbp-2F0h]
  __int128 v44; // [rsp+A0h] [rbp-2E8h]
  __int64 v45; // [rsp+B0h] [rbp-2D8h]
  __int128 v46; // [rsp+B8h] [rbp-2D0h] BYREF
  __int64 v47; // [rsp+C8h] [rbp-2C0h]
  __int64 v48; // [rsp+D0h] [rbp-2B8h]
  _DWORD v49[24]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int8 v50[512]; // [rsp+150h] [rbp-238h] BYREF

  *(_QWORD *)&v40 = a3;
  v38 = a2;
  memset(v49, 0, 0x58uLL);
  v9 = (unsigned __int8 *)v49;
  v39 = 0LL;
  v36 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v12 = 0LL;
  if ( !a4 || *((_QWORD *)a4 + 1) < (unsigned __int64)MmSystemRangeStart && (unsigned int)a4[1] >> 31 == (a7 & 1) )
  {
    LODWORD(v13) = 0;
    v14 = 0;
LABEL_7:
    v35 = v13;
    goto LABEL_8;
  }
  v14 = 1;
  v13 = (unsigned int)(*a4 + 2);
  if ( (unsigned int)v13 < *a4 )
    goto LABEL_44;
  v35 = *a4 + 2;
  if ( a4[1] < 0 && (a7 & 1) == 0 )
  {
    v13 *= 2LL;
    if ( v13 > 0xFFFFFFFF )
      goto LABEL_44;
    goto LABEL_7;
  }
LABEL_8:
  if ( v14 )
  {
    result = AllocCallbackMessage(88, v14, (unsigned int)v13, v50, 1, 0x200uLL);
    v9 = result;
    v37 = result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = (unsigned __int8 *)v49;
    v37 = (unsigned __int8 *)v49;
    memset(&v49[1], 0, 0x54uLL);
    v49[0] = 88;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v46 = 0LL;
  v47 = 0LL;
  if ( v9 != (unsigned __int8 *)v49 && v9 != v50 )
    PushW32ThreadLock((__int64)v9, &v46, (__int64)Win32FreePool);
  *((_QWORD *)v9 + 5) = v12;
  *((_DWORD *)v9 + 12) = v38;
  *((_QWORD *)v9 + 7) = v40;
  if ( v14 )
  {
    v28 = (void **)(v9 + 80);
    v29 = *a4;
    v30 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] < 0 )
    {
      if ( (a7 & 1) != 0 )
      {
        v31 = v29 + 1;
        goto LABEL_42;
      }
      v32 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v30, 2 * v29 + 2, v28);
    }
    else
    {
      if ( (a7 & 1) == 0 )
      {
        v31 = v29 + 2;
LABEL_42:
        v32 = CaptureCallbackData((struct _CAPTUREBUF *)v9, (unsigned __int64)v30, v31, v28);
        goto LABEL_43;
      }
      v32 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v30, (v29 >> 1) + 1, v28);
    }
LABEL_43:
    if ( v32 < 0 )
      goto LABEL_44;
    goto LABEL_15;
  }
  if ( a4 )
    v15 = *((_QWORD *)a4 + 1);
  else
    v15 = 0LL;
  *((_QWORD *)v9 + 10) = v15;
LABEL_15:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v42 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v42;
  *((_QWORD *)&v42 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v11 + 472);
  v40 = *(_OWORD *)(v17 + 64);
  v44 = v40;
  v45 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v12;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v34);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  EtwTraceBeginCallback(26LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v20 = KeUserModeCallback(26LL, v9, *(unsigned int *)v9, &v39, &v36);
  EtwTraceEndCallback(26LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v34);
  ThreadUnlock1(v22, v21, v23);
  v24 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v24 + 64) = v40;
  *(_QWORD *)(v24 + 80) = v45;
  if ( v20 >= 0 && v36 == 24 )
  {
    v25 = (__int64 *)v39;
    if ( v39 + 8 < v39 || v39 + 8 > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v26 = *v25;
    v48 = *v25;
    goto LABEL_30;
  }
LABEL_44:
  v26 = 0LL;
LABEL_30:
  if ( v9 != (unsigned __int8 *)v49 && v9 != v50 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v46);
  }
  return (unsigned __int8 *)v26;
}
