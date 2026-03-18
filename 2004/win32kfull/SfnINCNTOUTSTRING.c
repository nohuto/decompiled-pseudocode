/*
 * XREFs of SfnINCNTOUTSTRING @ 0x1C022AB60
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0047530 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0047DF8 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0047F94 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0048384 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

unsigned __int8 *__fastcall SfnINCNTOUTSTRING(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v11; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r13
  __int64 v14; // r14
  int v15; // ecx
  unsigned __int64 v16; // rdx
  unsigned __int8 *result; // rax
  unsigned __int16 v18; // r12
  __int16 v19; // ax
  int v20; // r11d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // esi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 *v30; // rsi
  __int64 v31; // rsi
  ULONG64 v32; // rcx
  __int64 v33; // xmm0_8
  __int64 v34; // rdx
  _WORD *v35; // rax
  char v36; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v37[3]; // [rsp+31h] [rbp-397h] BYREF
  unsigned int v38; // [rsp+34h] [rbp-394h]
  int v39; // [rsp+38h] [rbp-390h] BYREF
  int v40; // [rsp+3Ch] [rbp-38Ch]
  unsigned __int8 *v41; // [rsp+40h] [rbp-388h]
  int v42; // [rsp+48h] [rbp-380h]
  unsigned __int64 v43; // [rsp+60h] [rbp-368h] BYREF
  __int64 v44; // [rsp+68h] [rbp-360h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-350h] BYREF
  __int128 v46; // [rsp+80h] [rbp-348h] BYREF
  __int64 v47; // [rsp+90h] [rbp-338h]
  __int128 v48; // [rsp+98h] [rbp-330h]
  __int64 v49; // [rsp+A8h] [rbp-320h]
  __int128 v50; // [rsp+B0h] [rbp-318h] BYREF
  __int64 v51; // [rsp+C0h] [rbp-308h]
  __int128 v52; // [rsp+C8h] [rbp-300h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-2F0h]
  __int128 v54; // [rsp+108h] [rbp-2C0h]
  unsigned __int8 v55[112]; // [rsp+120h] [rbp-2A8h] BYREF
  unsigned __int8 v56[512]; // [rsp+190h] [rbp-238h] BYREF

  v42 = a2;
  v40 = a7 & 1;
  memset(v55, 0, 0x68uLL);
  v11 = v55;
  v43 = 0LL;
  v39 = 0;
  v44 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v15 = *(_DWORD *)(a4 + 4);
  v16 = (v15 & 0x7FFFFFFFu) + 2;
  if ( (unsigned int)v16 < (v15 & 0x7FFFFFFFu) )
    goto LABEL_47;
  v38 = (v15 & 0x7FFFFFFF) + 2;
  if ( v15 < 0 && !v40 )
  {
    v16 *= 2LL;
    if ( v16 > 0xFFFFFFFF )
      goto LABEL_47;
    v38 = v16;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v16, v56, 0, 0x200uLL);
  v11 = result;
  v41 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v52 = 0LL;
  v53 = 0LL;
  if ( v11 != v55 && v11 != v56 )
    PushW32ThreadLock((__int64)v11, &v52, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 5) = v14;
  *((_DWORD *)v11 + 12) = v42;
  *((_QWORD *)v11 + 7) = a3;
  v18 = *(_WORD *)(a4 + 4) >> 1;
  if ( *(int *)(a4 + 4) < 0 )
    v18 = *(_WORD *)(a4 + 4);
  v19 = -1;
  if ( v18 != 0xFFFF )
    v19 = v18;
  *((_WORD *)v11 + 40) = v19;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v38, (void **)v11 + 11) >= 0 )
  {
    *((_DWORD *)v11 + 24) = v20;
    v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v46 = *(_QWORD *)(v21 + 408);
    *(_QWORD *)(v21 + 408) = &v46;
    *((_QWORD *)&v46 + 1) = a1;
    if ( a1 )
      HMLockObject(a1);
    v22 = *(_QWORD *)(v13 + 472);
    v54 = *(_OWORD *)(v22 + 64);
    v48 = v54;
    v49 = *(_QWORD *)(v22 + 80);
    *(_QWORD *)(v22 + 72) = v14;
    v23 = 0LL;
    if ( a1 )
      v23 = *a1;
    *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v23;
    if ( a1 )
      v24 = *(_QWORD *)(a1[5] + 224);
    else
      v24 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v24;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v37);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
    EtwTraceBeginCallback(7LL);
    *((_QWORD *)v11 + 2) = 0LL;
    v25 = KeUserModeCallback(7LL, v11, *(unsigned int *)v11, &v43, &v39);
    EtwTraceEndCallback(7LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v37);
    ThreadUnlock1(v27, v26, v28);
    v29 = *(_QWORD *)(v13 + 472);
    *(_OWORD *)(v29 + 64) = v54;
    *(_QWORD *)(v29 + 80) = v49;
    if ( v25 >= 0 && v39 == 24 )
    {
      v30 = (__int64 *)v43;
      if ( v43 + 8 < v43 || v43 + 8 > MmUserProbeAddress )
        v30 = (__int64 *)MmUserProbeAddress;
      v31 = *v30;
      v44 = v31;
      if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
        goto LABEL_48;
      if ( !v31 )
      {
        v35 = *(_WORD **)(a4 + 8);
        if ( *(int *)(a4 + 4) >= 0 )
          *v35 = 0;
        else
          *(_BYTE *)v35 = 0;
        goto LABEL_48;
      }
      v32 = v43;
      if ( v43 + 24 < v43 || v43 + 24 > MmUserProbeAddress )
        v32 = MmUserProbeAddress;
      v33 = *(_QWORD *)(v32 + 16);
      v50 = *(_OWORD *)v32;
      v51 = v33;
      v34 = *(_QWORD *)(gptiCurrent + 504LL);
      if ( !v34 || (*(_DWORD *)(v34 + 84) & 1) == 0 || *(_QWORD *)(v34 + 96) != a4 )
      {
        v31 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v50, v31, *(_DWORD *)(a4 + 4) >> 31, v40);
        v44 = v31;
        CopyOutputString((volatile void **)&v50, (struct _LARGE_STRING *)a4, v18, v40);
        goto LABEL_48;
      }
    }
  }
LABEL_47:
  v31 = 0LL;
LABEL_48:
  if ( v11 != v55 && v11 != v56 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v52);
  }
  return (unsigned __int8 *)v31;
}
