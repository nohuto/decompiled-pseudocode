/*
 * XREFs of SfnPOWERBROADCAST @ 0x1C0044700
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C004748C (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0047530 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall SfnPOWERBROADCAST(
        __int64 *a1,
        unsigned int a2,
        unsigned __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // r13
  unsigned int v10; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned int v16; // ecx
  unsigned __int8 *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // rdi
  __int64 v30; // r8
  __int64 v31; // rcx
  char v32; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v33[3]; // [rsp+31h] [rbp-357h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-354h]
  int v35; // [rsp+38h] [rbp-350h] BYREF
  unsigned __int8 *v36; // [rsp+40h] [rbp-348h]
  unsigned int v37; // [rsp+48h] [rbp-340h]
  unsigned __int64 v38; // [rsp+60h] [rbp-328h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-318h] BYREF
  __int128 v40; // [rsp+78h] [rbp-310h] BYREF
  __int64 v41; // [rsp+88h] [rbp-300h]
  __int128 v42; // [rsp+90h] [rbp-2F8h]
  __int64 v43; // [rsp+A0h] [rbp-2E8h]
  __int128 v44; // [rsp+A8h] [rbp-2E0h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-2D0h]
  __int64 v46; // [rsp+C0h] [rbp-2C8h]
  __int128 v47; // [rsp+E0h] [rbp-2A8h]
  _DWORD v48[24]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int8 v49[512]; // [rsp+150h] [rbp-238h] BYREF

  v37 = a2;
  v9 = (unsigned __int16)a3 & 0x8000;
  v10 = 0;
  memset(v48, 0, 0x58uLL);
  v38 = 0LL;
  v35 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  LOBYTE(v12) = 1;
  if ( !HMValidateHandleNoSecure(v15, v12) )
    return 0LL;
  if ( a3 <= 0x8013 )
  {
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 != 4 )
      {
        if ( (_DWORD)a3 == 2 )
        {
          if ( (*(_BYTE *)(a1[5] + 19) & 1) == 0 )
            return 0LL;
          v30 = 769LL;
        }
        else
        {
          if ( (unsigned int)a3 <= 5 )
            goto LABEL_14;
          if ( (unsigned int)a3 > 7 )
          {
            if ( (_DWORD)a3 == 32787 )
              v10 = 1;
            goto LABEL_14;
          }
          SetOrClrWF(0LL, a1, 769LL, 1LL);
          v30 = 770LL;
        }
        v31 = 0LL;
LABEL_48:
        SetOrClrWF(v31, a1, v30, 1LL);
        goto LABEL_14;
      }
      SetOrClrWF(0LL, a1, 769LL, 1LL);
      v30 = 770LL;
    }
    else
    {
      v30 = 769LL;
    }
    v31 = 1LL;
    goto LABEL_48;
  }
LABEL_14:
  v16 = 0;
  v34 = 0;
  if ( v9 && a4 && a4 >= MmSystemRangeStart )
  {
    v16 = a4[4] + 20;
    if ( a4[4] >= 0xFFFFFFEC )
      return 0LL;
    v34 = a4[4] + 20;
  }
  if ( !v10 )
  {
    v17 = (unsigned __int8 *)v48;
    v36 = (unsigned __int8 *)v48;
    memset(&v48[1], 0, 0x54uLL);
    v48[0] = 88;
    goto LABEL_21;
  }
  v17 = (unsigned __int8 *)AllocCallbackMessage(0x58u, v10, v16, v49, 1, 0x200uLL);
  v36 = v17;
  if ( !v17 )
    return 0LL;
LABEL_21:
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v44 = 0LL;
  v45 = 0LL;
  if ( v17 != (unsigned __int8 *)v48 && v17 != v49 )
    PushW32ThreadLock((__int64)v17, &v44, (__int64)Win32FreePool);
  *((_QWORD *)v17 + 5) = v14;
  *((_DWORD *)v17 + 12) = v37;
  *((_QWORD *)v17 + 7) = a3;
  if ( v34 )
  {
    if ( CaptureCallbackData((struct _CAPTUREBUF *)v17, a4, v34, (void **)v17 + 10) < 0 )
      goto LABEL_58;
  }
  else
  {
    *((_QWORD *)v17 + 10) = a4;
  }
  *((_QWORD *)v17 + 8) = a5;
  *((_QWORD *)v17 + 9) = a6;
  v18 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v40 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v40;
  *((_QWORD *)&v40 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v19 = *(_QWORD *)(v13 + 472);
  v47 = *(_OWORD *)(v19 + 64);
  v42 = v47;
  v43 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v14;
  if ( a1 )
    v20 = *a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(a1[5] + 224);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v33);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v32);
  EtwTraceBeginCallback(29LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v22 = KeUserModeCallback(29LL, v17, *(unsigned int *)v17, &v38, &v35);
  EtwTraceEndCallback(29LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v32);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v33);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v26 + 64) = v47;
  *(_QWORD *)(v26 + 80) = v43;
  if ( v22 >= 0 && v35 == 24 )
  {
    v27 = (__int64 *)v38;
    if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
      v27 = (__int64 *)MmUserProbeAddress;
    v28 = *v27;
    v46 = *v27;
    goto LABEL_41;
  }
LABEL_58:
  v28 = 0LL;
LABEL_41:
  if ( v17 != (unsigned __int8 *)v48 && v17 != v49 )
  {
    if ( *((_QWORD *)v17 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v17 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v44);
  }
  return v28;
}
