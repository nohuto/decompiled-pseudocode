/*
 * XREFs of SfnGETDBCSTEXTLENGTHS @ 0x1C0077490
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00763F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0077BF8 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0077D94 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
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

__int64 __fastcall SfnGETDBCSTEXTLENGTHS(
        _QWORD *a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 *v22; // rdi
  __int64 v23; // rdi
  __int64 v25; // rdx
  unsigned int v26; // edi
  __int64 v27; // r14
  unsigned int v28; // edx
  unsigned int v29; // r12d
  unsigned __int8 *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // esi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 *v39; // rsi
  __int64 v40; // rsi
  ULONG64 v41; // rcx
  __int64 v42; // xmm0_8
  char v43; // [rsp+30h] [rbp-428h] BYREF
  char v44; // [rsp+31h] [rbp-427h] BYREF
  char v45; // [rsp+32h] [rbp-426h] BYREF
  char v46; // [rsp+33h] [rbp-425h] BYREF
  int v47; // [rsp+34h] [rbp-424h]
  int v48; // [rsp+38h] [rbp-420h] BYREF
  int v49; // [rsp+3Ch] [rbp-41Ch] BYREF
  int v50; // [rsp+40h] [rbp-418h]
  __int64 v51; // [rsp+48h] [rbp-410h]
  unsigned int v52; // [rsp+50h] [rbp-408h]
  unsigned __int64 v53; // [rsp+78h] [rbp-3E0h] BYREF
  __int128 v54; // [rsp+80h] [rbp-3D8h]
  unsigned __int64 v55; // [rsp+90h] [rbp-3C8h] BYREF
  __int64 v56; // [rsp+98h] [rbp-3C0h]
  __int64 v57; // [rsp+A0h] [rbp-3B8h]
  __int64 v58; // [rsp+B8h] [rbp-3A0h]
  __int64 v59; // [rsp+C0h] [rbp-398h]
  __int128 v60; // [rsp+C8h] [rbp-390h]
  ULONG_PTR RegionSize; // [rsp+D8h] [rbp-380h] BYREF
  __int128 v62; // [rsp+E0h] [rbp-378h]
  __int64 v63; // [rsp+F0h] [rbp-368h]
  __int128 v64; // [rsp+F8h] [rbp-360h] BYREF
  __int64 v65; // [rsp+108h] [rbp-350h]
  __int128 v66; // [rsp+110h] [rbp-348h]
  __int64 v67; // [rsp+120h] [rbp-338h]
  __int64 v68; // [rsp+128h] [rbp-330h] BYREF
  int v69; // [rsp+130h] [rbp-328h]
  int v70; // [rsp+134h] [rbp-324h]
  __int64 v71; // [rsp+138h] [rbp-320h]
  __int64 v72; // [rsp+140h] [rbp-318h]
  __int64 v73; // [rsp+148h] [rbp-310h]
  _QWORD v74[3]; // [rsp+150h] [rbp-308h] BYREF
  __int128 v75; // [rsp+168h] [rbp-2F0h] BYREF
  __int64 v76; // [rsp+178h] [rbp-2E0h]
  __int128 v77; // [rsp+1B8h] [rbp-2A0h] BYREF
  __int64 v78; // [rsp+1C8h] [rbp-290h]
  unsigned __int8 v79[96]; // [rsp+1D0h] [rbp-288h] BYREF
  unsigned __int8 v80[512]; // [rsp+230h] [rbp-228h] BYREF

  v58 = a3;
  v50 = a4 != 0;
  v47 = a7 & 1;
  v55 = 0LL;
  v48 = 0;
  v56 = 0LL;
  v74[2] = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  if ( !a1 )
    return 0LL;
  v51 = *(_QWORD *)(a1[5] + 120LL);
  v70 = 0;
  v68 = v14;
  v69 = a2;
  v71 = a3;
  v59 = a5;
  v72 = a5;
  *(_QWORD *)&v60 = a6;
  v73 = a6;
  v15 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v74[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v74;
  v74[1] = a1;
  HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v54 = *(_OWORD *)(v16 + 64);
  v62 = v54;
  v63 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v14;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = *a1;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = *(_QWORD *)(a1[5] + 224LL);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v44);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  EtwTraceBeginCallback(6LL);
  v17 = KeUserModeCallback(6LL, &v68, 40LL, &v55, &v48);
  EtwTraceEndCallback(6LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v44);
  ThreadUnlock1(v19, v18, v20);
  v21 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v21 + 64) = v54;
  *(_QWORD *)(v21 + 80) = v63;
  if ( v17 < 0 || v48 != 24 )
    return 0LL;
  v22 = (__int64 *)v55;
  if ( v55 + 8 < v55 || v55 + 8 > MmUserProbeAddress )
    v22 = (__int64 *)MmUserProbeAddress;
  v23 = *v22;
  v56 = v23;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 || (int)v23 <= 0 || v50 == v47 )
    return v23;
  if ( *(_QWORD *)(a1[5] + 120LL) != v51 )
    goto LABEL_62;
  v25 = 0LL;
  if ( a2 != 14 )
  {
    LOBYTE(v25) = 1;
    if ( HMValidateHandleNoSecure(*a1, v25) )
    {
      if ( a2 == 394 )
      {
        LODWORD(v25) = (*(_DWORD *)(a1[5] + 28LL) & 0x40) == 0 && (*(_DWORD *)(a1[5] + 28LL) & 0x30) != 0;
        goto LABEL_59;
      }
      if ( a2 == 329 )
      {
        if ( (*(_DWORD *)(a1[5] + 28LL) & 0x30) != 0 && (*(_DWORD *)(a1[5] + 28LL) & 0x200) == 0 )
        {
          LODWORD(v25) = 1;
LABEL_60:
          v23 = 8LL;
          v56 = 8LL;
          goto LABEL_19;
        }
        LODWORD(v25) = 0;
LABEL_59:
        if ( !(_DWORD)v25 )
          goto LABEL_20;
        goto LABEL_60;
      }
    }
    return 0LL;
  }
LABEL_19:
  if ( (_DWORD)v25 )
    return v23;
LABEL_20:
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x4000000) != 0 )
  {
    if ( a4 )
LABEL_62:
      v23 *= 2LL;
    return v23;
  }
  v26 = v23 + 1;
  v52 = v26;
  memset(v79, 0, sizeof(v79));
  v53 = 0LL;
  v49 = 0;
  v57 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v27 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v51 = a1[5] - *(_QWORD *)(v27 + 472);
  *(_DWORD *)(gptiCurrent + 488LL) |= 0x4000000u;
  v28 = 2 * v26;
  if ( v47 )
    v28 = v26;
  v29 = v28;
  v30 = AllocCallbackMessage(96, 1u, v28, v80, 0, 0x200uLL);
  *(_QWORD *)&v54 = v30;
  if ( !v30 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v75 = 0LL;
  v76 = 0LL;
  if ( v30 != v79 && v30 != v80 )
    PushW32ThreadLock(v30, &v75, Win32FreePool);
  *((_QWORD *)v30 + 5) = v51;
  *((_DWORD *)v30 + 12) = a2 - 1;
  v31 = v52;
  if ( a2 != 14 )
    v31 = v58;
  *((_QWORD *)v30 + 7) = v31;
  *((_QWORD *)v30 + 8) = v59;
  *((_QWORD *)v30 + 9) = v60;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v30, v29, (void **)v30 + 10) < 0 )
    goto LABEL_48;
  *((_DWORD *)v30 + 22) = v29;
  v32 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v64 = *(_QWORD *)(v32 + 416);
  *(_QWORD *)(v32 + 416) = &v64;
  *((_QWORD *)&v64 + 1) = a1;
  HMLockObject(a1);
  v33 = *(_QWORD *)(v27 + 480);
  v60 = *(_OWORD *)(v33 + 64);
  v66 = v60;
  v67 = *(_QWORD *)(v33 + 80);
  *(_QWORD *)(v33 + 72) = v51;
  *(_QWORD *)(*(_QWORD *)(v27 + 480) + 64LL) = *a1;
  *(_QWORD *)(*(_QWORD *)(v27 + 480) + 80LL) = *(_QWORD *)(a1[5] + 224LL);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v46);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v30 + 2) = 0LL;
  v34 = KeUserModeCallback(35LL, v30, *(unsigned int *)v30, &v53, &v49);
  EtwTraceEndCallback(35LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v46);
  ThreadUnlock1(v36, v35, v37);
  v38 = *(_QWORD *)(v27 + 480);
  *(_OWORD *)(v38 + 64) = v60;
  *(_QWORD *)(v38 + 80) = v67;
  if ( v34 < 0 )
    goto LABEL_48;
  if ( v49 == 24 )
  {
    v39 = (__int64 *)v53;
    if ( v53 + 8 < v53 || v53 + 8 > MmUserProbeAddress )
      v39 = (__int64 *)MmUserProbeAddress;
    v40 = *v39;
    v57 = v40;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (int)v40 > 0 )
    {
      v41 = v53;
      if ( v53 + 24 < v53 || v53 + 24 > MmUserProbeAddress )
        v41 = MmUserProbeAddress;
      v42 = *(_QWORD *)(v41 + 16);
      v77 = *(_OWORD *)v41;
      v78 = v42;
      v40 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v77, v40, v50, v47);
      v57 = v40;
    }
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x4000000u;
  }
  else
  {
LABEL_48:
    v40 = 0LL;
  }
  if ( v30 != v79 && v30 != v80 )
  {
    if ( *((_QWORD *)v30 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v30 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v75);
  }
  return v40;
}
