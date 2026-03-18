/*
 * XREFs of ClientGetListboxString @ 0x1C014EFC4
 * Callers:
 *     SfnOUTCBOXSTRING @ 0x1C014ED90 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x1C014EEB0 (SfnOUTLBOXSTRING.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00763F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0077BF8 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0077D94 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0078ADC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
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

__int64 __fastcall ClientGetListboxString(
        __int64 *a1,
        int a2,
        __int64 a3,
        struct _LARGE_STRING *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 a9)
{
  unsigned __int8 *v13; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // r15
  __int64 v16; // r14
  int v17; // ecx
  unsigned __int64 v18; // rdx
  int v19; // r11d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned __int64 *v29; // rdi
  unsigned __int64 v30; // rdi
  ULONG64 v31; // rcx
  __int64 v32; // xmm0_8
  __int64 v33; // rdx
  int v34; // r15d
  int v35; // r8d
  unsigned int v36; // r8d
  unsigned int v37; // eax
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  char v41; // [rsp+30h] [rbp-378h] BYREF
  _BYTE v42[3]; // [rsp+31h] [rbp-377h] BYREF
  unsigned int v43; // [rsp+34h] [rbp-374h]
  int v44; // [rsp+38h] [rbp-370h] BYREF
  int v45; // [rsp+3Ch] [rbp-36Ch]
  unsigned __int8 *v46; // [rsp+40h] [rbp-368h]
  unsigned __int64 v47[3]; // [rsp+48h] [rbp-360h] BYREF
  unsigned __int64 v48; // [rsp+60h] [rbp-348h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-338h] BYREF
  __int128 v50; // [rsp+78h] [rbp-330h] BYREF
  __int64 v51; // [rsp+88h] [rbp-320h]
  __int128 v52; // [rsp+90h] [rbp-318h]
  __int64 v53; // [rsp+A0h] [rbp-308h]
  __int128 v54; // [rsp+A8h] [rbp-300h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-2F0h]
  __int128 v56; // [rsp+C0h] [rbp-2E8h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-2D8h]
  __int128 v58; // [rsp+100h] [rbp-2A8h]
  unsigned __int8 v59[96]; // [rsp+110h] [rbp-298h] BYREF
  unsigned __int8 v60[512]; // [rsp+170h] [rbp-238h] BYREF

  v45 = a7 & 1;
  memset(v59, 0, sizeof(v59));
  v13 = v59;
  v47[0] = 0LL;
  v44 = 0;
  v48 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v16 = 0LL;
  v17 = *((_DWORD *)a4 + 1);
  v18 = (v17 & 0x7FFFFFFFu) + 2;
  if ( (unsigned int)v18 < (v17 & 0x7FFFFFFFu) )
    goto LABEL_50;
  v43 = (v17 & 0x7FFFFFFF) + 2;
  if ( v17 < 0 && !v45 )
  {
    v18 *= 2LL;
    if ( v18 > 0xFFFFFFFF )
      goto LABEL_50;
    v43 = v18;
  }
  v13 = AllocCallbackMessage(96, 1u, (unsigned int)v18, v60, 0, 0x200uLL);
  v46 = v13;
  if ( !v13 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v56 = 0LL;
  v57 = 0LL;
  if ( v13 != v59 && v13 != v60 )
    PushW32ThreadLock((__int64)v13, &v56, (__int64)Win32FreePool);
  *((_QWORD *)v13 + 5) = v16;
  *((_DWORD *)v13 + 12) = a2;
  *((_QWORD *)v13 + 7) = a3;
  *((_QWORD *)v13 + 8) = a5;
  *((_QWORD *)v13 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v13, v43, (void **)v13 + 10) < 0 )
    goto LABEL_50;
  *((_DWORD *)v13 + 22) = v19;
  v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v50 = *(_QWORD *)(v20 + 416);
  *(_QWORD *)(v20 + 416) = &v50;
  *((_QWORD *)&v50 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v15 + 480);
  v58 = *(_OWORD *)(v21 + 64);
  v52 = v58;
  v53 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v16;
  if ( a1 )
    v22 = *a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 480) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(a1[5] + 224);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 480) + 80LL) = v23;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v42);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  EtwTraceBeginCallback(72LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v24 = KeUserModeCallback(72LL, v13, *(unsigned int *)v13, v47, &v44);
  EtwTraceEndCallback(72LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v42);
  ThreadUnlock1(v26, v25, v27);
  v28 = *(_QWORD *)(v15 + 480);
  *(_OWORD *)(v28 + 64) = v58;
  *(_QWORD *)(v28 + 80) = v53;
  if ( v24 < 0 || v44 != 24 )
    goto LABEL_50;
  v29 = (unsigned __int64 *)v47[0];
  if ( v47[0] + 8 < v47[0] || v47[0] + 8 > MmUserProbeAddress )
    v29 = (unsigned __int64 *)MmUserProbeAddress;
  v30 = *v29;
  v48 = v30;
  if ( (v30 & 0x80000000) != 0LL || a9 && (*(_DWORD *)(a9 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_45;
  if ( !a8 )
  {
    v31 = v47[0];
    if ( v47[0] + 24 < v47[0] || v47[0] + 24 > MmUserProbeAddress )
      v31 = MmUserProbeAddress;
    v32 = *(_QWORD *)(v31 + 16);
    v54 = *(_OWORD *)v31;
    v55 = v32;
    v33 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( v33 && (*(_DWORD *)(v33 + 84) & 1) != 0 && *(struct _LARGE_STRING **)(v33 + 96) == a4 )
      goto LABEL_50;
    v34 = v45;
    v30 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v54, v30, *((_DWORD *)a4 + 1) >> 31, v45);
    v48 = v30;
    v35 = *((_DWORD *)a4 + 1);
    if ( v35 < 0 )
      v36 = v35 & 0x7FFFFFFF;
    else
      v36 = ((unsigned int)v35 >> 1) & 0x3FFFFFFF;
    CopyOutputString((volatile void **)&v54, a4, v36, v34);
LABEL_39:
    if ( !a8 && v30 != -1LL )
    {
      v37 = *(_DWORD *)a4 >> 1;
      if ( *((int *)a4 + 1) < 0 )
        v37 = *(_DWORD *)a4;
      if ( v30 > v37 )
        LODWORD(v30) = v37;
    }
    goto LABEL_45;
  }
  v39 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( !v39 || (*(_DWORD *)(v39 + 84) & 1) == 0 || *(_QWORD *)(v39 + 96) != *((_QWORD *)a4 + 1) )
  {
    v40 = *(_QWORD **)(v47[0] + 16);
    if ( v40 + 1 < v40 || (unsigned __int64)(v40 + 1) > MmUserProbeAddress )
      v40 = (_QWORD *)MmUserProbeAddress;
    **((_QWORD **)a4 + 1) = *v40;
    goto LABEL_39;
  }
LABEL_50:
  LODWORD(v30) = 0;
LABEL_45:
  if ( v13 != v59 && v13 != v60 )
  {
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v56);
  }
  return (unsigned int)v30;
}
